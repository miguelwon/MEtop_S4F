/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F138_out,F139_out,F140_out,F141_out,F142_out,F143_out,F144_out
 ,F145_out,F146_out,F147_out,F148_out,F149_out,F150_out,F151_out,F152_out
 ,F153_out,F154_out,F155_out,F156_out,F157_out,F158_out,F159_out,F160_out
 ,F161_out,F162_out;
static FNN *Farr[25]={&F138_out,&F139_out,&F140_out,&F141_out,&F142_out
 ,&F143_out,&F144_out,&F145_out,&F146_out,&F147_out,&F148_out,&F149_out
 ,&F150_out,&F151_out,&F152_out,&F153_out,&F154_out,&F155_out,&F156_out
 ,&F157_out,&F158_out,&F159_out,&F160_out,&F161_out,&F162_out};
extern DNN S15_out;
REAL S15_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[4],width[4];
char * Qtxt[4];
REAL Q0[4],Q1[4],Q2[4];
width[2]=V[7]; mass[2]=V[53];  Qtxt[2]="\3\4";
width[1]=V[12]; mass[1]=V[11];  Qtxt[1]="\1\2\5";
width[3]=0.; mass[3]=0;  Qtxt[3]="\1\5";
*err=*err|prepDen(3,nin_out,BWrange_out*
 BWrange_out,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(6, momenta, DP);
{int i; for(i=0;i<25;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}
