static int IntDtopNLO(const int *ndim, const double xx[],
  const int *ncomp, double ff[], void *userdata)
{
#define x1 xx[0]
#define z xx[1]


double *udata,Pi;
int i,j,k,Npr,subpro[5];

double ECM,m1,m2,m3,m4,m5,Fact,ECMS,gzA,gzA1,fzA,gzB,gzB1,fzB,Alphas,Br1,Br2;
int Flav1,Flav2,Flavn,Flavl,Flavb,qid,Flav2temp,pp;

double GG,pdf1,pdf2,pdf3,temp,temp2,PDFN1,PDFN2,PDFN3;
udata=(double *)userdata;



ECM=udata[0];
subpro[0]=(int) udata[1];
subpro[1]=(int) udata[2];
subpro[2]=(int) udata[4];
subpro[3]=(int) udata[5];
subpro[4]=(int) udata[3];

Flav1=subpro[0];
Flav2=subpro[1];
Flavn=subpro[2];
Flavl=subpro[3];
Flavb=subpro[4];
m1=udata[6];
m2=udata[7];
m3=udata[9];
m4=udata[10];
m5=udata[8];
ECMS=Sq(ECM);
Fact=0.389*pow(10,9);
Pi=3.1415926535;
Br1=0.23266/(0.23266*3+0.69799*2);
Br2=0.69799/(0.23266*3+0.69799*2);
qid=0;
temp=Sq(data.Mtop)/(x1*z*ECMS);
temp2=Sq(data.Mtop)/(x1*ECMS);

pp = (int) udata[11];


if (pp == 1){
	pdf_(&Flav1,&x1,&data.Q,&pdf1,&GG);
	pdf_(&Flav2,&temp,&data.Q,&pdf2,&GG);
	pdf_(&Flav2,&temp2,&data.Q,&pdf3,&GG);

}
else if (pp == -1){
        Flav2temp=-1*Flav2;
	pdf_(&Flav1,&x1,&data.Q,&pdf1,&GG);
	pdf_(&Flav2temp,&temp,&data.Q,&pdf2,&GG);
	pdf_(&Flav2temp,&temp2,&data.Q,&pdf3,&GG);

}
else {
printf("Erro: Wrong pp flag.\n");
return 0;
}

Alphas=(1.0/(4*Pi))*Sq(GG);
PDFN1=(1/x1)*pdf1;
PDFN2=(1/temp)*pdf2;
PDFN3=(1/temp2)*pdf3;

if ( (abs(Flavn) == 12) || (abs(Flavn) == 14) || (abs(Flavn) == 16) )
{
	qid=1;
}
else if ( (abs(Flavn) == 2) || (abs(Flavn) == 4) )
{
	qid=2;
}
else
{
printf("error with flavors in Dtop NLO\n");
return 0;
}


if (z > Sq(data.Mtop)/ECMS)
{


	if ((Flav1 == 0) && (abs(Flav2) == 2))
	{

		ff[0]= (4*Sq(Alphas)*Sq(data.co1)*Pi*(-15 + (4*Sq(Pi))/3. +(14*log(Sq(data.miuR/data.Mtop)))/3. +
				(35*log(Sq(data.Mtop/data.Q)))/2.))/(9.*Sq(data.L));
        	ff[0]=ff[0]*Fact*(Sq(data.Mtop)/(x1*ECMS))*PDFN1*PDFN3;

		ff[1]=(4*Sq(Alphas*data.co1)*Pi*z*(15.75 - 109/(8.*z) - (73*z)/8. +14*Sq(z) +
			18*((1 - z)/z + (1 - z)*z)*log(Sq(data.Mtop/data.Q)) -(41.5 - 36/z - 28*z + 36*Sq(z))*log(1 - z) +
			(26.75 - 2/(1 - z) - 18/z - 22*z +28*Sq(z))*log(z)))/(9.*Sq(data.L));
		ff[1]=Fact*(Sq(data.Mtop)/(x1*ECMS*Sq(z)))*ff[1]*PDFN1*PDFN2;

		gzA=(4*Sq(Alphas)*Sq(data.co1)*Pi*z*(3*(6*z + (4*(1 + Sq(z)))/3.)*log(Sq(data.Mtop/data.Q)) +
			(-23 - 11/z - 57*z +27*Sq(z) -2*(27 + 77*z)*log(z))/8.))/(9.*Sq(data.L));

		gzA1=(4*Sq(Alphas*data.co1)*Pi*(-8 + 26*log(Sq(data.Mtop/data.Q))))/(9.*Sq(data.L));
		fzA=(1/(1-z));

		gzB=(2*Sq(Alphas*data.co1)*Pi*z*(27 + 77*z))/(9.*Sq(data.L));
		gzB1=(208*Sq(Alphas*data.co1)*Pi)/(9.*Sq(data.L));
		fzB=(log(1-z)/(1-z));

		ff[2]= Fact*(Sq(data.Mtop)/(x1*ECMS))*PDFN1*fzA*(gzA*PDFN2/Sq(z)-gzA1*PDFN3);
		ff[2]= ff[2]+Fact*(Sq(data.Mtop)/(x1*ECMS))*PDFN1*fzB*(gzB*PDFN2/Sq(z)-gzB1*PDFN3);

	}
	else if ((abs(Flav1) == 2) && (Flav2 == 0))
	{

		ff[0]= (4*Sq(Alphas)*Sq(data.co1)*Pi*(-15 + (4*Sq(Pi))/3. +(14*log(Sq(data.miuR/data.Mtop)))/3. +
				(35*log(Sq(data.Mtop/data.Q)))/2.))/(9.*Sq(data.L));
        	ff[0]=ff[0]*Fact*(Sq(data.Mtop)/(x1*ECMS))*PDFN1*PDFN3;

		ff[1]=(4*Sq(Alphas*data.co1)*Pi*z*(15.75 - 109/(8.*z) - (73*z)/8. +14*Sq(z) +
			18*((1 - z)/z + (1 - z)*z)*log(Sq(data.Mtop/data.Q)) -(41.5 - 36/z - 28*z + 36*Sq(z))*log(1 - z) +
			(26.75 - 2/(1 - z) - 18/z - 22*z +28*Sq(z))*log(z)))/(9.*Sq(data.L));
		ff[1]=Fact*(Sq(data.Mtop)/(x1*ECMS*Sq(z)))*ff[1]*PDFN1*PDFN2;

		gzA=(4*Sq(Alphas)*Sq(data.co1)*Pi*z*(3*(6*z + (4*(1 + Sq(z)))/3.)*log(Sq(data.Mtop/data.Q)) +
			(-23 - 11/z - 57*z +27*Sq(z) -2*(27 + 77*z)*log(z))/8.))/(9.*Sq(data.L));

		gzA1=(4*Sq(Alphas*data.co1)*Pi*(-8 + 26*log(Sq(data.Mtop/data.Q))))/(9.*Sq(data.L));
		fzA=(1/(1-z));

		gzB=(2*Sq(Alphas*data.co1)*Pi*z*(27 + 77*z))/(9.*Sq(data.L));
		gzB1=(208*Sq(Alphas*data.co1)*Pi)/(9.*Sq(data.L));
		fzB=(log(1-z)/(1-z));

		ff[2]= Fact*(Sq(data.Mtop)/(x1*ECMS))*PDFN1*fzA*(gzA*PDFN2/Sq(z)-gzA1*PDFN3);
		ff[2]= ff[2]+Fact*(Sq(data.Mtop)/(x1*ECMS))*PDFN1*fzB*(gzB*PDFN2/Sq(z)-gzB1*PDFN3);

	}
	else if ((Flav1 == 0) && (abs(Flav2) == 4))
	{

		ff[0]= (4*Sq(Alphas)*Sq(data.co2)*Pi*(-15 + (4*Sq(Pi))/3. +(14*log(Sq(data.miuR/data.Mtop)))/3. +
				(35*log(Sq(data.Mtop/data.Q)))/2.))/(9.*Sq(data.L));
        	ff[0]=ff[0]*Fact*(Sq(data.Mtop)/(x1*ECMS))*PDFN1*PDFN3;

		ff[1]=(4*Sq(Alphas*data.co2)*Pi*z*(15.75 - 109/(8.*z) - (73*z)/8. +14*Sq(z) +
			18*((1 - z)/z + (1 - z)*z)*log(Sq(data.Mtop/data.Q)) -(41.5 - 36/z - 28*z + 36*Sq(z))*log(1 - z) +
			(26.75 - 2/(1 - z) - 18/z - 22*z +28*Sq(z))*log(z)))/(9.*Sq(data.L));
		ff[1]=Fact*(Sq(data.Mtop)/(x1*ECMS*Sq(z)))*ff[1]*PDFN1*PDFN2;

		gzA=(4*Sq(Alphas)*Sq(data.co2)*Pi*z*(3*(6*z + (4*(1 + Sq(z)))/3.)*log(Sq(data.Mtop/data.Q)) +
			(-23 - 11/z - 57*z +27*Sq(z) -2*(27 + 77*z)*log(z))/8.))/(9.*Sq(data.L));

		gzA1=(4*Sq(Alphas*data.co2)*Pi*(-8 + 26*log(Sq(data.Mtop/data.Q))))/(9.*Sq(data.L));
		fzA=(1/(1-z));

		gzB=(2*Sq(Alphas*data.co2)*Pi*z*(27 + 77*z))/(9.*Sq(data.L));
		gzB1=(208*Sq(Alphas*data.co2)*Pi)/(9.*Sq(data.L));
		fzB=(log(1-z)/(1-z));

		ff[2]= Fact*(Sq(data.Mtop)/(x1*ECMS))*PDFN1*fzA*(gzA*PDFN2/Sq(z)-gzA1*PDFN3);
		ff[2]= ff[2]+Fact*(Sq(data.Mtop)/(x1*ECMS))*PDFN1*fzB*(gzB*PDFN2/Sq(z)-gzB1*PDFN3);

	}
	else if ((abs(Flav1) == 4) && (Flav2 == 0))
	{

		ff[0]= (4*Sq(Alphas)*Sq(data.co2)*Pi*(-15 + (4*Sq(Pi))/3. +(14*log(Sq(data.miuR/data.Mtop)))/3. +
				(35*log(Sq(data.Mtop/data.Q)))/2.))/(9.*Sq(data.L));
        	ff[0]=ff[0]*Fact*(Sq(data.Mtop)/(x1*ECMS))*PDFN1*PDFN3;

		ff[1]=(4*Sq(Alphas*data.co2)*Pi*z*(15.75 - 109/(8.*z) - (73*z)/8. +14*Sq(z) +
			18*((1 - z)/z + (1 - z)*z)*log(Sq(data.Mtop/data.Q)) -(41.5 - 36/z - 28*z + 36*Sq(z))*log(1 - z) +
			(26.75 - 2/(1 - z) - 18/z - 22*z +28*Sq(z))*log(z)))/(9.*Sq(data.L));
		ff[1]=Fact*(Sq(data.Mtop)/(x1*ECMS*Sq(z)))*ff[1]*PDFN1*PDFN2;

		gzA=(4*Sq(Alphas)*Sq(data.co2)*Pi*z*(3*(6*z + (4*(1 + Sq(z)))/3.)*log(Sq(data.Mtop/data.Q)) +
			(-23 - 11/z - 57*z +27*Sq(z) -2*(27 + 77*z)*log(z))/8.))/(9.*Sq(data.L));

		gzA1=(4*Sq(Alphas*data.co2)*Pi*(-8 + 26*log(Sq(data.Mtop/data.Q))))/(9.*Sq(data.L));
		fzA=(1/(1-z));

		gzB=(2*Sq(Alphas*data.co2)*Pi*z*(27 + 77*z))/(9.*Sq(data.L));
		gzB1=(208*Sq(Alphas*data.co2)*Pi)/(9.*Sq(data.L));
		fzB=(log(1-z)/(1-z));

		ff[2]= Fact*(Sq(data.Mtop)/(x1*ECMS))*PDFN1*fzA*(gzA*PDFN2/Sq(z)-gzA1*PDFN3);
		ff[2]= ff[2]+Fact*(Sq(data.Mtop)/(x1*ECMS))*PDFN1*fzB*(gzB*PDFN2/Sq(z)-gzB1*PDFN3);

	}
	else
	{
		ff[0]=0;
		ff[1]=0;
		ff[2]=0;
	}



}
else
{
	ff[0]=0;
	ff[1]=0;
	ff[2]=0;
}


if (qid==1)
{
ff[0]=Br1*ff[0];
ff[1]=Br1*ff[1];
ff[2]=Br1*ff[2];
}
else
{
ff[0]=Br2*ff[0];
ff[1]=Br2*ff[1];
ff[2]=Br2*ff[2];
}

  return 0;
}
