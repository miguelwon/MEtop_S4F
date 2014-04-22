
static int gengtop(char fevtemp[],int Nsubpro,int NEvnts,int SpCorr,int Flav1,int Flav2,int Flav3,
int Flav4,int Flav5,int Flav6,double m1,double m2,double m3,double m4,double m5,double m6,int pp)
{
int i,j,k,l,count,Ncubes,NEvntstemp,qid,maxloop,ic,ipmax,ipmin,Flav2temp;
int MCcode1,MCcode2,MCcode3,MCcode4,MCcode5,MCcode6,subpro[6],Npr,err,cb_chain1[6],cb_chain2[10];
FILE *fp;
char line[200];
double ECM,xgrd[18][10000],xr[9][10000],xl[9][10000],gsum,grid[10000],gridcuml[10000],gmax,xx[9],shot,csum;
double PT,PTmin,smin,smax,s,flux,mb,ml,mn;
double GG,pdf1,pdf2,Pi,f;
double Qt,Qt2,Qtmin,Qtmax,y,ymin,ymax,WTBreit1,x1t,x2t,ECMS,wt1,wt2,wt3,wt4;
double QW,QWmin,QWmax,WTBreit2,rnd1,rnd2,Fact,wtFact;
double p1[5],p2[5],p3[5],pb[5],pl[5],pn[5],ptop[5],pW[5],pcm[5],pvec[24];
double eff,eps,y1,y2;
assignVal("EE",data.EE);
assignVal("SW",data.SW);
assignVal("s23",data.s23);
assignVal("s13",data.s13);
assignVal("MZ",data.MZ);
assignVal("wW",data.wW);
assignVal("Mm",data.Mm);
assignVal("Mc",data.Mc);
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
assignVal("c23",data.c23);
assignVal("c13",data.c13);
assignVal("Vtb",data.Vtb);
assignVal("MW",data.MW);
ECM=data.ECM;
PTmin=data.PTmin;
ECMS=Sq(ECM);
Fact=0.389*pow(10,9);
Pi=3.1415926535;

subpro[0]=Flav1;
subpro[1]=Flav2;
subpro[2]=Flav3;
subpro[3]=Flav5;
subpro[4]=Flav6;
subpro[5]=Flav4;
/*
printf("%d %d %d %d %d %d\n",subpro[0],subpro[1],subpro[2],subpro[3],subpro[4],subpro[5]);
*/
mb=m4;
mn=m5;
ml=m6;
if ((abs(subpro[3]) == 2) || (abs(subpro[4])==3) ) qid=1;
for (i=0;i<5;i++)
{
        if (subpro[i]==0)
        {
        subpro[i]=21;
        }
        else if (subpro[i]==11)
        {
        subpro[i]=13;
        }
        else if (subpro[i]==-11)
        {
        subpro[i]=-13;
        }
        else if (subpro[i]==12)
        {
        subpro[i]=14;
        }
        else if (subpro[i]==-12)
        {
        subpro[i]=-14;
        }
        else if (subpro[i]==15)
        {
        subpro[i]=13;
        }
        else if (subpro[i]==-15)
        {
        subpro[i]=-13;
        }
        else if (subpro[i]==16)
        {
        subpro[i]=14;
        }
        else if (subpro[i]==-16)
        {
        subpro[i]=-14;
        }
        else if ((subpro[i]==2) && (i >1) )
        {
        subpro[i]=14;
        }
        else if ((subpro[i]==-2) && (i >1) )
        {
        subpro[i]=-14;
        }
        else if ((subpro[i]==4) && (i >1) )
        {
        subpro[i]=14;
        }
        else if ((subpro[i]==-4) && (i >1) )
        {
        subpro[i]=-14;
        }
        else if ((subpro[i]==1) && (i >1) )
        {
        subpro[i]=13;
        }
        else if ((subpro[i]==-1) && (i >1) )
        {
        subpro[i]=-13;
        }
        else if ((subpro[i]==3) && (i >1) )
        {
        subpro[i]=13;
        }
        else if ((subpro[i]==-3) && (i >1) )
        {
        subpro[i]=-13;
        }
        else continue;
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
        pinf_out(i,6,NULL,&MCcode6);

        if ((subpro[0]==MCcode1) && (subpro[1]==MCcode2) && (subpro[2]==MCcode3) && (subpro[3]==MCcode4) && (subpro[4]==MCcode5) && (subpro[5]==MCcode6) )
        {
                count=1;
                Npr=i;
                break;
        }
        else continue;
}
if (Npr == 0) 
{
printf("Erro Dtop C interface  \n");
/*
printf("%d %d %d %d %d %d\n",subpro[0],subpro[1],subpro[2],subpro[3],subpro[4],subpro[5]);
*/
return;
}


calcFunc_out();
build_cb_out(Npr);

if ( NEvnts < 10000 )
{
fp=fopen("../src/gridGtop1.txt","r");
}
else if ( (NEvnts >= 10000 ) && (NEvnts < 20000 ) )
{
fp=fopen("../src/gridGtop2.txt","r");
}
else
{
fp=fopen("../src/gridGtop3.txt","r");
}
count=0;


while (fgets(line,200,fp)!=NULL)
{


sscanf(line,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",&xgrd[0][count],&xgrd[1][count],
	&xgrd[2][count],&xgrd[3][count],&xgrd[4][count],&xgrd[5][count],&xgrd[6][count],
	&xgrd[7][count],&xgrd[8][count],&xgrd[9][count],&xgrd[10][count],&xgrd[11][count],&xgrd[12][count],
	&xgrd[13][count],&xgrd[14][count],&xgrd[15][count],&xgrd[16][count],&xgrd[17][count]);
count++;

/*

sscanf(line,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",&xgrd[0][count],&xgrd[1][count],
	&xgrd[2][count],&xgrd[3][count],&xgrd[4][count],&xgrd[5][count],&xgrd[6][count],
	&xgrd[7][count],&xgrd[8][count],&xgrd[9][count],&xgrd[10][count],&xgrd[11][count],&xgrd[12][count],
	&xgrd[13][count]);
count++;
*/
}
fclose(fp);

Ncubes=count;

printf("Building Grid and generating %d events. \n\n",NEvnts);


for (i=0;i<Ncubes;i++)
{
	count=0;
	for (j=0;j<18;j=j+2)
	{
		xl[count][i]=xgrd[j][i];
		xr[count][i]=xgrd[j+1][i];

		count++;
	}

}

rnd(0,&rnd1);

gsum=0;
for (i=0;i<Ncubes;i++)
{
	gmax=0;
	for (j=0;j<250;j++)
	{
		for (k=0;k<9;k++)
		{
			rnd(1,&rnd1);
			xx[k]=xl[k][i]+(xr[k][i]-xl[k][i])*rnd1;
		}

/*		rnd(1,&rnd1);*/
		Qtmin=mn+ml+mb;
		Qtmax=ECM;
		ymax=(1/(data.Mtop*data.wtop))*atan((Sq(Qtmax)-Sq(data.Mtop))/(data.Mtop*data.wtop));
		ymin=(1/(data.Mtop*data.wtop))*atan((Sq(Qtmin)-Sq(data.Mtop))/(data.Mtop*data.wtop));
		y=ymin+(ymax-ymin)*xx[0];
/*		y=ymin+(ymax-ymin)*rnd1;*/
		Qt=sqrt(data.Mtop*data.wtop*tan(data.Mtop*data.wtop*y)+Sq(data.Mtop));
		Qt2=Sq(Qt);
		WTBreit1=(Sq(Sq(Qt)-Sq(data.Mtop))+Sq(data.Mtop*data.wtop))*(ymax-ymin);

/*		rnd(1,&rnd1);*/
		QWmin=mn+ml;
		QWmax=Qt-mb;
		ymax=(1/(data.MW*data.wW))*atan((Sq(QWmax)-Sq(data.MW))/(data.MW*data.wW));
		ymin=(1/(data.MW*data.wW))*atan((Sq(QWmin)-Sq(data.MW))/(data.MW*data.wW));
		y=ymin+(ymax-ymin)*xx[1];
/*		y=ymin+(ymax-ymin)*rnd1;*/
		QW=sqrt(data.MW*data.wW*tan(data.MW*data.wW*y)+Sq(data.MW));
		WTBreit2=(Sq(Sq(QW)-Sq(data.MW))+Sq(data.MW*data.wW))*(ymax-ymin);

		if (Qt < QW+mb) {
		 f=0;
		 continue;
		}

		y1=xx[2];
		y2=xx[3];
		eps=Sq(Qt)/ECMS;
		x1t=pow(eps,y1*y2);
		x2t=pow(eps,y2*(1-y1));
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
		wt1=pdf1*pdf2*y2*pow(eps,y2)*Sq(log(eps))/(x1t*x2t);


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

		s=Sq(m1)+Sq(m2)+2*(p1[3]*p2[3]-(p1[0]*p2[0]+p1[1]*p2[1]+p1[2]*p2[2]));
		flux=4*sqrt(Sq((s-Sq(m1)-Sq(m2))/2)-Sq(m1)*Sq(m2));

		if (s < Sq(Qt+m3)) {
		 f=0;
		 continue;
		}


		pcm[0]=0.0;
		pcm[1]=0.0;
		pcm[2]=p1[2]+p2[2];
		pcm[3]=p1[3]+p2[3];
		pcm[4]=sqrt(Sq(pcm[3])-Sq(pcm[2]));

		rnd(1,&rnd1);
		Phase2(sqrt(s),Qt,m3,pcm,ptop,p3,rnd1,xx[4],&wt2);

		Phase2(Qt,QW,mb,ptop,pW,pb,xx[5],xx[6],&wt3);

		Phase2(QW,mn,ml,pW,pn,pl,xx[7],xx[8],&wt4);


		PT=sqrt(Sq(ptop[0])+Sq(ptop[1]));

		if (PT < PTmin) {
		 f=0;
		 continue;
		}


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
		pvec[12]=pn[3];
		pvec[13]=pn[0];
		pvec[14]=pn[1];
		pvec[15]=pn[2];
		pvec[16]=pl[3];
		pvec[17]=pl[0];
		pvec[18]=pl[1];
		pvec[19]=pl[2];
		pvec[20]=pb[3];
		pvec[21]=pb[0];
		pvec[22]=pb[1];
		pvec[23]=pb[2];

		f=sqme_out(Npr,GG,pvec,&err);

		if ( qid == 1)
		{
			f=3*(2*Pi)*Fact*f*WTBreit1*WTBreit2*wt1*wt2*wt3*wt4/flux;
		}
		else
		{
			f=(2*Pi)*Fact*f*WTBreit1*WTBreit2*wt1*wt2*wt3*wt4/flux;
		}

		if (f > gmax) gmax=f;
	}

	grid[i]=1.2*gmax;
	gsum=grid[i]+gsum;
	gridcuml[i]=gsum;

}
/*
printf("Generating %d events   %f\n",NEvnts,gridcuml[Ncubes-1]);
*/
eff=0;
NEvntstemp=0;
fp=fopen(fevtemp,"w");
while(NEvntstemp < NEvnts*1.01+1)
{


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
	maxloop=0;
	if (shot < gridcuml[i])
	{

	while (maxloop < 1)
	{
		maxloop++;

		for (k=0;k<9;k++)
		{
			rnd(1,&rnd1);
			xx[k]=xl[k][i]+(xr[k][i]-xl[k][i])*rnd1;
		}

		eff=eff+1;

/*		rnd(1,&rnd1);*/
		Qtmin=mn+ml+mb;
		Qtmax=ECM;
		ymax=(1/(data.Mtop*data.wtop))*atan((Sq(Qtmax)-Sq(data.Mtop))/(data.Mtop*data.wtop));
		ymin=(1/(data.Mtop*data.wtop))*atan((Sq(Qtmin)-Sq(data.Mtop))/(data.Mtop*data.wtop));
		y=ymin+(ymax-ymin)*xx[0];
/*		y=ymin+(ymax-ymin)*rnd1;*/
		Qt=sqrt(data.Mtop*data.wtop*tan(data.Mtop*data.wtop*y)+Sq(data.Mtop));
		Qt2=Sq(Qt);
		WTBreit1=(Sq(Sq(Qt)-Sq(data.Mtop))+Sq(data.Mtop*data.wtop))*(ymax-ymin);

/*		rnd(1,&rnd1);*/
		QWmin=mn+ml;
		QWmax=Qt-mb;
		ymax=(1/(data.MW*data.wW))*atan((Sq(QWmax)-Sq(data.MW))/(data.MW*data.wW));
		ymin=(1/(data.MW*data.wW))*atan((Sq(QWmin)-Sq(data.MW))/(data.MW*data.wW));
		y=ymin+(ymax-ymin)*xx[1];
/*		y=ymin+(ymax-ymin)*rnd1;*/
		QW=sqrt(data.MW*data.wW*tan(data.MW*data.wW*y)+Sq(data.MW));
		WTBreit2=(Sq(Sq(QW)-Sq(data.MW))+Sq(data.MW*data.wW))*(ymax-ymin);

		if (Qt < QW+mb) {
		 f=0;
		 continue;
		}


		y1=xx[2];
		y2=xx[3];
		eps=Sq(Qt)/ECMS;
		x1t=pow(eps,y1*y2);
		x2t=pow(eps,y2*(1-y1));
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
		wt1=pdf1*pdf2*y2*pow(eps,y2)*Sq(log(eps))/(x1t*x2t);

		p1[3]=ECM*x1t/2.0;
		p1[0]=0.0;
		p1[1]=0.0;
		p1[2]=sqrt(Sq(p1[3])-Sq(m1));
		p1[4]=sqrt(abs(Sq(p1[3])-(Sq(p1[0])+Sq(p1[1])+Sq(p1[2]))));
		p2[3]=ECM*x2t/2.0;
		p2[0]=0.0;
		p2[1]=0.0;
		p2[2]=-sqrt(Sq(p2[3])-Sq(m2));
		p2[4]=sqrt(abs(Sq(p2[3])-(Sq(p2[0])+Sq(p2[1])+Sq(p2[2]))));


		s=Sq(m1)+Sq(m2)+2*(p1[3]*p2[3]-(p1[0]*p2[0]+p1[1]*p2[1]+p1[2]*p2[2]));
		flux=4*sqrt(Sq((s-Sq(m1)-Sq(m2))/2)-Sq(m1)*Sq(m2));

		if (s < Sq(Qt+m3)) {
		 f=0;
		 continue;
		}



		pcm[0]=0.0;
		pcm[1]=0.0;
		pcm[2]=p1[2]+p2[2];
		pcm[3]=p1[3]+p2[3];
		pcm[4]=sqrt(Sq(pcm[3])-Sq(pcm[2]));

		rnd(1,&rnd1);
		Phase2(sqrt(s),Qt,m3,pcm,ptop,p3,rnd1,xx[4],&wt2);

		Phase2(Qt,QW,mb,ptop,pW,pb,xx[5],xx[6],&wt3);

		Phase2(QW,mn,ml,pW,pn,pl,xx[7],xx[8],&wt4);


		PT=sqrt(Sq(ptop[0])+Sq(ptop[1]));

		if (PT < PTmin) {
		 f=0;
		 continue;
		}


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
		pvec[12]=pn[3];
		pvec[13]=pn[0];
		pvec[14]=pn[1];
		pvec[15]=pn[2];
		pvec[16]=pl[3];
		pvec[17]=pl[0];
		pvec[18]=pl[1];
		pvec[19]=pl[2];
		pvec[20]=pb[3];
		pvec[21]=pb[0];
		pvec[22]=pb[1];
		pvec[23]=pb[2];

		f=sqme_out(Npr,GG,pvec,&err);
		if ( qid == 1)
		{
			f=3*(2*Pi)*Fact*f*WTBreit1*WTBreit2*wt1*wt2*wt3*wt4/flux;
		}
		else
		{
			f=(2*Pi)*Fact*f*WTBreit1*WTBreit2*wt1*wt2*wt3*wt4/flux;
		}


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
			cb_chain2[8]=1000;
			cb_chain2[9]=1000;

			csum=0.0;
			for (j=0;j<cb_pow_out;j++)
			{
				csum=csum+cb_coeff_out[j];
			}
			if(csum<=0)
			{
				rnd(1,&rnd1);
				rnd1=rnd1*cb_pow_out;
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
							cb_chain1[count]=cb_chains_out[k];
							count++;
						}
						break;
					}
				}
			}
			else
			{
				rnd(1,&rnd1);
				rnd1=rnd1*csum;
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
							cb_chain1[count]=cb_chains_out[k];
							count++;
						}
						break;
					}
				}
			}

/*
			for(j=0;j<6;j++)
			{
			cb_chain1[j]=cb_chains_out[j];
			}
*/

			for (j=0;j<6;j++)
			{
				if (cb_chain1[j] <= 3)
				{
					cb_chain2[j]=cb_chain1[j];
				}
				else if (cb_chain1[j] == 6)
				{
					cb_chain2[j]=4;
				}

			}

			if (Flav4 > 0)
			{
				cb_chain2[6]=4;
				cb_chain2[7]=5;
			}
			else
			{
				cb_chain2[6]=5;
				cb_chain2[7]=4;
			}
			if ( qid == 1)
			{
				if (Flav4 > 0)
				{
					cb_chain2[8]=8;
					cb_chain2[9]=7;
				}
				else
				{
					cb_chain2[8]=7;
					cb_chain2[9]=8;
				}
			}

/*
			if(Npr==5)
			{
				for (j=0;j<10;j++) printf("%d  ",cb_chain2[j]);
			}
			printf("\n");
*/

/*

			fprintf(fp,"%11.4f %11.4f %11.4f %11.4f %11.4f"
					"%11.4f %11.4f %11.4f %11.4f %11.4f"
					"%11.4f %11.4f %11.4f %11.4f %11.4f"
					"%11.4f %11.4f %11.4f %11.4f %11.4f"
					"%11.4f %11.4f %11.4f %11.4f %11.4f"
					"%11.4f %11.4f %11.4f %11.4f %11.4f"
					"%11.4f %11.4f %11.4f %11.4f %11.4f"
					"%11.4f %11.4f %11.4f %11.4f %11.4f"
					"%4d %4d %4d %4d %4d %4d %4d %4d %4d %4d"
					"%11.4f\n",p1[0],p1[1],p1[2],p1[3],p1[4],
						p2[0],p2[1],p2[2],p2[3],p2[4],
						p3[0],p3[1],p3[2],p3[3],p3[4],
						ptop[0],ptop[1],ptop[2],ptop[3],ptop[4],
						pb[0],pb[1],pb[2],pb[3],pb[4],
						pW[0],pW[1],pW[2],pW[3],pW[4],
						pn[0],pn[1],pn[2],pn[3],pn[4],
						pl[0],pl[1],pl[2],pl[3],pl[4],
						cb_chain2[0],cb_chain2[1],cb_chain2[2],
                        cb_chain2[3],cb_chain2[4],cb_chain2[5],cb_chain2[6],cb_chain2[7],
                        cb_chain2[8],cb_chain2[9],
						GG);
*/


			fprintf(fp,"%13.8e %13.8e %13.8e %13.8e %13.8e ",p1[0],p1[1],p1[2],p1[3],p1[4]);
			fprintf(fp,"%13.8e %13.8e %13.8e %13.8e %13.8e ",p2[0],p2[1],p2[2],p2[3],p2[4]);
			fprintf(fp,"%13.8e %13.8e %13.8e %13.8e %13.8e ",p3[0],p3[1],p3[2],p3[3],p3[4]);
			fprintf(fp,"%13.8e %13.8e %13.8e %13.8e %13.8e ",ptop[0],ptop[1],ptop[2],ptop[3],ptop[4]);
			fprintf(fp,"%13.8e %13.8e %13.8e %13.8e %13.8e ",pb[0],pb[1],pb[2],pb[3],pb[4]);
			fprintf(fp,"%13.8e %13.8e %13.8e %13.8e %13.8e ",pW[0],pW[1],pW[2],pW[3],pW[4]);
			fprintf(fp,"%13.8e %13.8e %13.8e %13.8e %13.8e ",pn[0],pn[1],pn[2],pn[3],pn[4]);
			fprintf(fp,"%13.8e %13.8e %13.8e %13.8e %13.8e ",pl[0],pl[1],pl[2],pl[3],pl[4]);
			fprintf(fp,"%4d %4d %4d %4d %4d %4d %4d %4d %4d %4d ",cb_chain2[0],cb_chain2[1],cb_chain2[2],
			cb_chain2[3],cb_chain2[4],cb_chain2[5],cb_chain2[6],cb_chain2[7],
			cb_chain2[8],cb_chain2[9]);
                        fprintf(fp,"%13.8e ",GG);
                        fprintf(fp,"%4d %4d %13.8e %13.8e %6.3f %13.8e %13.8e\n",2,2,x1t,x2t,data.Q,pdf1,pdf2);


			break;
		}
		else continue;
	}/*while*/
	break;

	}
	else continue;
}


}/* while*/


/*
printf("efficienci %f\n",NEvnts*1.01/eff);
*/
fclose(fp);


}

