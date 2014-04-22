
static int gendtop(char fevtemp[],int Nsubpro,int NEvnts,int SpCorr,int Flav1,int Flav2,
int Flav3,int Flav4,int Flav5,double m1,double m2,double m3,double m4,double m5,int pp)
{
int i,j,k,l,count,Ncubes,NEvntstemp,count2,ic,ipmax,ipmin,Flav2temp;
int MCcode1,MCcode2,MCcode3,MCcode4,MCcode5,MCcode6,subpro[5],Npr,err,cb_chain1[6],cb_chain2[8];
FILE *fp;
char line[200];
double ECM,xgrd[12][5000],xr[6][5000],xl[6][5000],gsum,grid[5000],gridcuml[5000],gmax,xx[6],shot,csum;

double GG,pdf1,pdf2,Pi,f;
double Qt,Qt2,Qtmin,Qtmax,y,ymin,ymax,WTBreit1,x1t,x2t,ECMS,wt1,wt2,wt3;
double QW,QWmin,QWmax,WTBreit2,rnd1,rnd2,Fact,wtFact;
double p1[5],p2[5],p3[5],p4[5],p5[5],ptop[5],pW[5],pvec[20];
double eff,eps,y1,y2;

assignVal("EE",data.EE);
assignVal("SW",data.SW);
assignVal("s12",data.s12);
assignVal("s23",data.s23);
assignVal("s13",data.s13);
assignVal("MZ",data.MZ);
assignVal("wW",data.wW);
assignVal("Mm",data.Mm);
assignVal("Mt",data.Mt);
assignVal("Mc",data.Mc);
assignVal("Ms",data.Ms);
assignVal("Mtop",data.Mtop);
assignVal("wtop",data.wtop);
assignVal("Mb",data.Mb);
assignVal("fu",data.fu);
assignVal("hu",data.hu);
assignVal("fc",data.fc);
assignVal("hc",data.hc);
assignVal("L",data.L);
assignVal("co1",data.co1);
assignVal("co2",data.co2);
assignVal("CW",data.CW);
assignVal("c12",data.c12);
assignVal("c23",data.c23);
assignVal("c13",data.c13);
assignVal("Vud",data.Vud);
assignVal("Vcs",data.Vcs);
assignVal("Vtb",data.Vtb);
assignVal("MW",data.MW);
ECM=data.ECM;
ECMS=Sq(ECM);
Fact=0.389*pow(10,9);
Pi=3.1415926535;

subpro[0]=Flav1;
subpro[1]=Flav2;
subpro[2]=Flav4;
subpro[3]=Flav5;
subpro[4]=Flav3;

for (i=0;i<5;i++)
{
        if (subpro[i]==0) subpro[i]=21;
}

Npr=0;
for (i=1;i<=nprc_out;i++)
{
        Npr=0;
        count=0;
        pinf_out(i,1,NULL,&MCcode1);
        pinf_out(i,2,NULL,&MCcode2);
        pinf_out(i,3,NULL,&MCcode3);
        pinf_out(i,4,NULL,&MCcode4);
        pinf_out(i,5,NULL,&MCcode5);

        if ((subpro[0]==MCcode1) && (subpro[1]==MCcode2) && (subpro[2]==MCcode3) && (subpro[3]==MCcode4) && (subpro[4]==MCcode5))
        {
                count=1;
                Npr=i;
                break;
        }
        else continue;
}
if (Npr == 0) 
{
printf("Erro Dtop C interface   \n");
return 0;
}

calcFunc_out();
build_cb_out(Npr);



//fp=fopen("../src/gridDtop1.txt","r");

if ( NEvnts < 5000 )
{
fp=fopen("../src/gridDtop1.txt","r");
}
else if ( (NEvnts >= 5000 ) && (NEvnts < 20000 ) )
{
fp=fopen("../src/gridDtop2.txt","r");
}
else
{
fp=fopen("../src/gridDtop3.txt","r");
}
count=0;


while (fgets(line,200,fp)!=NULL)
{

sscanf(line,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",&xgrd[0][count],&xgrd[1][count],
	&xgrd[2][count],&xgrd[3][count],&xgrd[4][count],&xgrd[5][count],&xgrd[6][count],
	&xgrd[7][count],&xgrd[8][count],&xgrd[9][count],&xgrd[10][count],&xgrd[11][count]);

count++;
}


fclose(fp);


Ncubes=count;
for (i=0;i<Ncubes;i++)
{

	count=0;
	for (j=0;j<12;j=j+2)
	{
		xl[count][i]=xgrd[j][i];
		xr[count][i]=xgrd[j+1][i];
		count++;
	}

}

printf("Building Grid and generating %d events. \n\n",NEvnts);

rnd(0,&rnd1);

gsum=0;
for (i=0;i<Ncubes;i++)
{
	gmax=0;
	for (j=0;j<250;j++)
	{
		for (k=0;k<6;k++)
		{
//			rnd1=rand()/(RAND_MAX+1.0);
			rnd(1,&rnd1);
			xx[k]=xl[k][i]+(xr[k][i]-xl[k][i])*rnd1;
		}

		Qtmin=m3+m4+m5;
		Qtmax=ECM;
		ymax=(1/(data.Mtop*data.wtop))*atan((Sq(Qtmax)-Sq(data.Mtop))/(data.Mtop*data.wtop));
		ymin=(1/(data.Mtop*data.wtop))*atan((Sq(Qtmin)-Sq(data.Mtop))/(data.Mtop*data.wtop));
		y=ymin+(ymax-ymin)*xx[0];
		Qt=sqrt(data.Mtop*data.wtop*tan(data.Mtop*data.wtop*y)+Sq(data.Mtop));
		Qt2=Sq(Qt);
		WTBreit1=(Sq(Sq(Qt)-Sq(data.Mtop))+Sq(data.Mtop*data.wtop))*(ymax-ymin);

		if (Qt < m3+m4+m5) {
		 f=0;
		 continue;
		}

		x1t=Qt2/ECMS+(1-Qt2/ECMS)*xx[1];
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
		p1[4]=m1;

		p2[3]=ECM*x2t/2.0;
		p2[0]=0.0;
		p2[1]=0.0;
		p2[2]=-sqrt(Sq(p2[3])-Sq(m2));
		p2[4]=m2;

		ptop[0]=p1[0]+p2[0];
		ptop[1]=p1[1]+p2[1];
		ptop[2]=p1[2]+p2[2];
		ptop[3]=p1[3]+p2[3];
		ptop[4]=Qt;


		QWmin=m4+m5;
		QWmax=Qt-m3;
		ymax=(1/(data.MW*data.wW))*atan((Sq(QWmax)-Sq(data.MW))/(data.MW*data.wW));
		ymin=(1/(data.MW*data.wW))*atan((Sq(QWmin)-Sq(data.MW))/(data.MW*data.wW));
		y=ymin+(ymax-ymin)*xx[2];
		QW=sqrt(data.MW*data.wW*tan(data.MW*data.wW*y)+Sq(data.MW));
		WTBreit2=(Sq(Sq(QW)-Sq(data.MW))+Sq(data.MW*data.wW))*(ymax-ymin);

//		rnd1=rand()/(RAND_MAX+1.0);
		rnd(1,&rnd1);

		Phase2(Qt,QW,m3,ptop,pW,p3,rnd1,xx[3],&wt2);
		Phase2(QW,m4,m5,pW,p4,p5,xx[4],xx[5],&wt3);


		pvec[0]=p1[3];
		pvec[1]=p1[0];
		pvec[2]=p1[1];
		pvec[3]=p1[2];
		pvec[4]=p2[3];
		pvec[5]=p2[0];
		pvec[6]=p2[1];
		pvec[7]=p2[2];
		pvec[8]=p4[3];
		pvec[9]=p4[0];
		pvec[10]=p4[1];
		pvec[11]=p4[2];
		pvec[12]=p5[3];
		pvec[13]=p5[0];
		pvec[14]=p5[1];
		pvec[15]=p5[2];
		pvec[16]=p3[3];
		pvec[17]=p3[0];
		pvec[18]=p3[1];
		pvec[19]=p3[2];
		f=sqme_out(Npr,GG,pvec,&err);


		wtFact=(2*Pi)*Fact/(2*Sq(Qt));

		f=f*WTBreit1*WTBreit2*wt1*wt2*wt3*wtFact;
		if (f > gmax) gmax=f;
	}
	grid[i]=1.2*gmax;
	gsum=grid[i]+gsum;
	gridcuml[i]=gsum;
/*	printf("%f | %f %f | %f %f | %f %f | %f %f | %f %f | %f %f |\n",grid[i],xl[0][i],xr[0][i],xl[1][i],xr[1][i],xl[2][i],xr[2][i],xl[3][i],xr[3][i],xl[4][i],xr[4][i],xl[5][i],xr[5][i]);
	printf("%f\n",gridcuml[i]);*/
}


NEvntstemp=0;
fp=fopen(fevtemp,"w");

count2=0;

while(NEvntstemp < NEvnts*1.01+1)
{

//rnd1=rand()/(RAND_MAX+1.0);
rnd(1,&rnd1);
shot=rnd1*gridcuml[Ncubes-1];


ipmax=Ncubes;
ipmin=1;
while(ipmax-ipmin > 2)
{
        ic=(int) (ipmax+ipmin)/2;
        if (shot < gridcuml[ic-1])
        {
                ipmax=ic;
        }
        else
        {
                ipmin=ic;
        }
}
ic=ipmin-1;
ic=ic+1;
while(gridcuml[ic-1] < shot)
{
ic = ic+1;
}



for (i=ic-1;i<Ncubes;i++)
{
	if (shot < gridcuml[i])
	{
		count2=count2+1;
/*		printf("%d   %d\n",i,count2);*/

		for (k=0;k<6;k++)
		{
//			rnd1=rand()/(RAND_MAX+1.0);
			rnd(1,&rnd1);
			xx[k]=xl[k][i]+(xr[k][i]-xl[k][i])*rnd1;
		}

		Qtmin=m3+m4+m5;
		Qtmax=ECM;
		ymax=(1/(data.Mtop*data.wtop))*atan((Sq(Qtmax)-Sq(data.Mtop))/(data.Mtop*data.wtop));
		ymin=(1/(data.Mtop*data.wtop))*atan((Sq(Qtmin)-Sq(data.Mtop))/(data.Mtop*data.wtop));
		y=ymin+(ymax-ymin)*xx[0];
		Qt=sqrt(data.Mtop*data.wtop*tan(data.Mtop*data.wtop*y)+Sq(data.Mtop));
		Qt2=Sq(Qt);
		WTBreit1=(Sq(Sq(Qt)-Sq(data.Mtop))+Sq(data.Mtop*data.wtop))*(ymax-ymin);

		if (Qt < m3+m4+m5) {
		 f=0;
		 continue;
		}

		x1t=Qt2/ECMS+(1-Qt2/ECMS)*xx[1];
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
		p1[4]=m1;

		p2[3]=ECM*x2t/2.0;
		p2[0]=0.0;
		p2[1]=0.0;
		p2[2]=-sqrt(Sq(p2[3])-Sq(m2));
		p2[4]=m2;

		ptop[0]=p1[0]+p2[0];
		ptop[1]=p1[1]+p2[1];
		ptop[2]=p1[2]+p2[2];
		ptop[3]=p1[3]+p2[3];
		ptop[4]=Qt;

		QWmin=m4+m5;
		QWmax=Qt-m3;
		ymax=(1/(data.MW*data.wW))*atan((Sq(QWmax)-Sq(data.MW))/(data.MW*data.wW));
		ymin=(1/(data.MW*data.wW))*atan((Sq(QWmin)-Sq(data.MW))/(data.MW*data.wW));
		y=ymin+(ymax-ymin)*xx[2];
		QW=sqrt(data.MW*data.wW*tan(data.MW*data.wW*y)+Sq(data.MW));
		WTBreit2=(Sq(Sq(QW)-Sq(data.MW))+Sq(data.MW*data.wW))*(ymax-ymin);


//		rnd1=rand()/(RAND_MAX+1.0);
		rnd(1,&rnd1);
		Phase2(Qt,QW,m3,ptop,pW,p3,rnd1,xx[3],&wt2);
		Phase2(QW,m4,m5,pW,p4,p5,xx[4],xx[5],&wt3);

		pvec[0]=p1[3];
		pvec[1]=p1[0];
		pvec[2]=p1[1];
		pvec[3]=p1[2];
		pvec[4]=p2[3];
		pvec[5]=p2[0];
		pvec[6]=p2[1];
		pvec[7]=p2[2];
		pvec[8]=p4[3];
		pvec[9]=p4[0];
		pvec[10]=p4[1];
		pvec[11]=p4[2];
		pvec[12]=p5[3];
		pvec[13]=p5[0];
		pvec[14]=p5[1];
		pvec[15]=p5[2];
		pvec[16]=p3[3];
		pvec[17]=p3[0];
		pvec[18]=p3[1];
		pvec[19]=p3[2];
		f=sqme_out(Npr,GG,pvec,&err);


		wtFact=(2*Pi)*Fact/(2*Sq(Qt));

		f=f*WTBreit1*WTBreit2*wt1*wt2*wt3*wtFact;





//		rnd1=rand()/(RAND_MAX+1.0);
		rnd(1,&rnd1);

		shot=grid[i]*rnd1;

		if (shot < f) /*found event*/
		{
			NEvntstemp++;
			/* treatment of color*/

			for (j=0;j<6;j++)
			{
				cb_chain1[j]=1000;
				cb_chain2[j]=1000;
			}
			cb_chain2[6]=1000;
			cb_chain2[7]=1000;

			csum=0.0;
			for (j=0;j<cb_pow_out;j++)
			{
				csum=csum+cb_coeff_out[j];
			}
			if(csum==0)
			{
//				rnd1=cb_pow_out*rand()/(RAND_MAX+1.0);
				rnd(1,&rnd1);
				rnd1=cb_pow_out**rnd1;
				csum=0.0;
				for (j=0;j<cb_pow_out;j++) 
				{
					csum++;
					if(csum<rnd1)
					{
						continue;
					}
					else
					{
						count=0;
						for (k=j*2*cb_nc_out;k<(j+1)*2*cb_nc_out;k++)
						{
/*                printf("j:  %d\n",j);*/
							cb_chain1[count]=cb_chains_out[k];
/*              printf("%d  ",cb_chains_out[j]);*/
							count++;
						}
						break;
					}
				}
			}
			else
			{
//				rnd1=csum*rand()/(RAND_MAX+1.0);
				rnd(1,&rnd1);
				rnd1=csum*rnd1;
				csum=0.0;
				for (j=0;j<cb_pow_out;j++) 
				{
					csum=csum+cb_coeff_out[j];
					if(csum<rnd1)
					{
						continue;
					}
					else
					{
						count=0;
						for (k=j*2*cb_nc_out;k<(j+1)*2*cb_nc_out;k++)
						{
/*                printf("j:  %d\n",j);*/
							cb_chain1[count]=cb_chains_out[k];
/*              printf("%d  ",cb_chains_out[j]);*/
							count++;
						}
						break;
					}
				}
			}


/*			destroy_cb_out();
			printf("1   %d %d %d %d %d %d\n",cb_chain1[0],cb_chain1[1],cb_chain1[2],cb_chain1[3],cb_chain1[4],cb_chain1[5]);*/

			for (j=0;j<6;j++)
			{
				if (cb_chain1[j] <= 2)
				{
/*					cb_chain2[j]=199;*/
					cb_chain2[j]=cb_chain1[j];
				}
				else if (cb_chain1[j] == 3)
				{
					if (j%2 != 0) {
						cb_chain2[6]=7;
					}
					else cb_chain2[7]=7;
				}
				else if (cb_chain1[j] == 4)
				{
					if (j%2 != 0) {
						cb_chain2[6]=6;
					}
					else cb_chain2[7]=6;
				}
				else if (cb_chain1[j] == 5)
				{
					cb_chain2[j]=3;
				}

			}

			for (j=0;j<8;j=j+2)
			{
				if (cb_chain2[j] == 1000)
				{
					if (Flav3 > 0)
					{
						cb_chain2[j]=3;
						cb_chain2[j+1]=4;
						break;
					}
					else
					{
						cb_chain2[j]=4;
						cb_chain2[j+1]=3;
						break;
					}
				}
				else continue;
			}
			fprintf(fp,"%13.8e %13.8e %13.8e %13.8e %13.8e ",p1[0],p1[1],p1[2],p1[3],p1[4]);
			fprintf(fp,"%13.8e %13.8e %13.8e %13.8e %13.8e ",p2[0],p2[1],p2[2],p2[3],p2[4]);
			fprintf(fp,"%13.8e %13.8e %13.8e %13.8e %13.8e ",ptop[0],ptop[1],ptop[2],ptop[3],ptop[4]);
			fprintf(fp,"%13.8e %13.8e %13.8e %13.8e %13.8e ",p3[0],p3[1],p3[2],p3[3],p3[4]);
			fprintf(fp,"%13.8e %13.8e %13.8e %13.8e %13.8e ",pW[0],pW[1],pW[2],pW[3],pW[4]);
			fprintf(fp,"%13.8e %13.8e %13.8e %13.8e %13.8e ",p4[0],p4[1],p4[2],p4[3],p4[4]);
			fprintf(fp,"%13.8e %13.8e %13.8e %13.8e %13.8e ",p5[0],p5[1],p5[2],p5[3],p5[4]);
			fprintf(fp,"%4d %4d %4d %4d %4d %4d %4d %4d ",cb_chain2[0],cb_chain2[1],cb_chain2[2],cb_chain2[3],cb_chain2[4],cb_chain2[5],cb_chain2[6],cb_chain2[7]);
			fprintf(fp,"%13.8e ",GG);
			fprintf(fp,"%4d %4d %13.8e %13.8e %6.3f %13.8e %13.8e\n",2,2,x1t,x2t,data.Q,pdf1,pdf2);
			break;
		}
		else break;

	}
	else continue;
}


}/* while*/

fclose(fp);


}

