int initiate(void *userdata,int *NprSub,int *qid,int *SubPorder)
{

int i,j,MCcode1,MCcode2,MCcode3,MCcode4,MCcode5,MCcode6,subpro[6],count;
int SubProLs[8]={122,144,149,19,54,82,85,9};
double *udata;


udata=(double *)userdata;
subpro[0]=(int) udata[1];
subpro[1]=(int) udata[2];
subpro[2]=(int) udata[4];
subpro[3]=(int) udata[5];
subpro[4]=(int) udata[3];

calcFunc_out();
/*
printf("%d %d %d %d %d\n",subpro[0],subpro[1],subpro[2],subpro[3],subpro[4]);
*/
for (i=0;i<5;i++)
{
        if (subpro[i]==0) subpro[i]=21;
}


*NprSub=0;
for (i=1;i<=nprc_out;i++)
{
        *NprSub=0;
        count=0;
        pinf_out(i,1,NULL,&MCcode1);
        pinf_out(i,2,NULL,&MCcode2);
        pinf_out(i,3,NULL,&MCcode3);
        pinf_out(i,4,NULL,&MCcode4);
        pinf_out(i,5,NULL,&MCcode5);


        if ((subpro[0]==MCcode1) && (subpro[1]==MCcode2) && (subpro[2]==MCcode3) && (subpro[3]==MCcode4) && (subpro[4]==MCcode5))
        {
                count=1;
                *NprSub=i;
                break;
        }
        else continue;

}
if (NprSub == 0) 
{
printf("Erro Dtop C interface %d %d %d %d %d \n",subpro[0],subpro[1],subpro[2],subpro[3],subpro[4]);
return;
}

build_cb_out(*NprSub);


}

int finalization()
{
destroy_cb_out();
}



static int IntDtopLO(const int *ndim, const double xx[],
  const int *ncomp, double ff[], void *userdata)
{
#define x1 xx[0]
#define x2 xx[1]
#define x3 xx[2]
#define x4 xx[3]
#define x5 xx[4]
#define x6 xx[5]
#define x7 xx[6]
#define f ff[0]


double *udata,Pi;
int i,j,k,NprSub,err,count;
int MCcode1,MCcode2,MCcode3,MCcode4,MCcode5,MCcode6,subpro[5];

double ECM,m1,m2,m3,m4,m5;
int Flav1,Flav2,Flav2temp,pp;

double GG,pdf1,pdf2;
double Qt,Qt2,Qtmin,Qtmax,y,ymin,ymax,WTBreit1,x1t,x2t,ECMS,wt1,wt2,wt3;
double QW,QWmin,QWmax,WTBreit2,Fact,wtFact;
double p1[5],p2[5],p3[5],p4[5],p5[5],ptop[5],pW[5],pvec[20];
err=0;
udata=(double *)userdata;



ECM=udata[0];
subpro[0]=(int) udata[1];
subpro[1]=(int) udata[2];
subpro[2]=(int) udata[4];
subpro[3]=(int) udata[5];
subpro[4]=(int) udata[3];
Flav1=subpro[0];
Flav2=subpro[1];
m1=udata[6];
m2=udata[7];
m3=udata[9];
m4=udata[10];
m5=udata[8];
ECMS=Sq(ECM);
Fact=0.389*pow(10,9);
Pi=3.1415926535;
NprSub=(int) udata[11];
pp=(int) udata[12];


/*
for (i=0;i<5;i++)
{
        if (subpro[i]==0) subpro[i]=21;
}


NprSub=0;
for (i=1;i<=nprc_out;i++)
{
        NprSub=0;
        count=0;
        pinf_out(i,1,NULL,&MCcode1);
        pinf_out(i,2,NULL,&MCcode2);
        pinf_out(i,3,NULL,&MCcode3);
        pinf_out(i,4,NULL,&MCcode4);
        pinf_out(i,5,NULL,&MCcode5);

        if ((subpro[0]==MCcode1) && (subpro[1]==MCcode2) && (subpro[2]==MCcode3) && (subpro[3]==MCcode4) && (subpro[4]==MCcode5))
        {
                count=1;
                NprSub=i;
                break;
        }
        else continue;
}
if (NprSub == 0) 
{
printf("Erro Dtop C interface   \n");
return;
}

*/
Qtmin=m3+m4+m5;
Qtmax=ECM;
ymax=(1/(data.Mtop*data.wtop))*atan((Sq(Qtmax)-Sq(data.Mtop))/(data.Mtop*data.wtop));
ymin=(1/(data.Mtop*data.wtop))*atan((Sq(Qtmin)-Sq(data.Mtop))/(data.Mtop*data.wtop));
y=ymin+(ymax-ymin)*x1;
Qt=sqrt(data.Mtop*data.wtop*tan(data.Mtop*data.wtop*y)+Sq(data.Mtop));
Qt2=Sq(Qt);
WTBreit1=(Sq(Sq(Qt)-Sq(data.Mtop))+Sq(data.Mtop*data.wtop))*(ymax-ymin);

if (Qt < m3+m4+m5) {
 f=0;
 return 0;
}


x1t=Qt2/ECMS+(1-Qt2/ECMS)*x2;
x2t=Qt2/(x1t*ECMS);
if (pp == 1){


	pdf_(&Flav1,&x1t,&data.Q,&pdf1,&GG);
	pdf_(&Flav2,&x2t,&data.Q,&pdf2,&GG);
}
else if (pp == -1){
	Flav2temp=-1*Flav2;
	pdf_(&Flav1,&x1t,&data.Q,&pdf1,&GG);
	pdf_(&Flav2temp,&x2t,&data.Q,&pdf2,&GG);
}
else {
printf("Erro: Wrong pp flag.\n");
return 0;
}

wt1=pdf1*pdf2*(1-Qt2/ECMS)/(Qt2*x1t);


p1[3]=ECM*x1t/2.0;
p1[0]=0.0;
p1[1]=0.0;
p1[2]=sqrt(Sq(p1[3])-Sq(m1));
p1[4]=sqrt(Sq(p1[3])-(Sq(p1[1])+Sq(p1[1])+Sq(p1[2])));


p2[3]=ECM*x2t/2.0;
p2[0]=0.0;
p2[1]=0.0;
p2[2]=-sqrt(Sq(p2[3])-Sq(m2));
p2[4]=sqrt(Sq(p2[3])-(Sq(p2[0])+Sq(p2[1])+Sq(p2[2])));

ptop[0]=p1[0]+p2[0];
ptop[1]=p1[1]+p2[1];
ptop[2]=p1[2]+p2[2];
ptop[3]=p1[3]+p2[3];
ptop[4]=sqrt(Sq(ptop[3])-(Sq(ptop[0])+Sq(ptop[1])+Sq(ptop[2])));


QWmin=m3+m4;
QWmax=Qt-m5;
ymax=(1/(data.MW*data.wW))*atan((Sq(QWmax)-Sq(data.MW))/(data.MW*data.wW));
ymin=(1/(data.MW*data.wW))*atan((Sq(QWmin)-Sq(data.MW))/(data.MW*data.wW));
y=ymin+(ymax-ymin)*x3;
QW=sqrt(data.MW*data.wW*tan(data.MW*data.wW*y)+Sq(data.MW));
WTBreit2=(Sq(Sq(QW)-Sq(data.MW))+Sq(data.MW*data.wW))*(ymax-ymin);

//rnd1=rand()/(RAND_MAX+1.0);
//Phase2(Qt,QW,m5,ptop,pW,p5,rnd1,x4,&wt2);
//Phase2(QW,m3,m4,pW,p3,p4,x5,x6,&wt3);

Phase2(Qt,QW,m5,ptop,pW,p5,x4,x5,&wt2);
Phase2(QW,m3,m4,pW,p3,p4,x6,x7,&wt3);

pvec[0]=p1[3];
pvec[1]=p1[0];
pvec[2]=p1[1];
pvec[3]=p1[2];
pvec[4]=p2[3];
pvec[5]=p2[0];
pvec[6]=p2[1];
pvec[7]=p2[2];
pvec[8]=p3[3];
pvec[9]=p3[0];
pvec[10]=p3[1];
pvec[11]=p3[2];
pvec[12]=p4[3];
pvec[13]=p4[0];
pvec[14]=p4[1];
pvec[15]=p4[2];
pvec[16]=p5[3];
pvec[17]=p5[0];
pvec[18]=p5[1];
pvec[19]=p5[2];


f=sqme_out(NprSub,GG,pvec,&err);


wtFact=(2*Pi)*Fact/(2*Sq(Qt));

f=f*WTBreit1*WTBreit2*wt1*wt2*wt3*wtFact;

  return 0;
}
