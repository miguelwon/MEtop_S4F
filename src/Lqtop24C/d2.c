/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F18_out,F19_out,F20_out,F21_out,F22_out,F23_out,F24_out,F25_out
 ,F26_out,F27_out,F28_out,F29_out,F30_out,F31_out,F32_out,F33_out,F34_out;
static FNN *Farr[17]={&F18_out,&F19_out,&F20_out,&F21_out,&F22_out,&F23_out
 ,&F24_out,&F25_out,&F26_out,&F27_out,&F28_out,&F29_out,&F30_out,&F31_out
 ,&F32_out,&F33_out,&F34_out};
extern DNN S2_out;
REAL S2_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[5],width[5];
char * Qtxt[5];
REAL Q0[5],Q1[5],Q2[5];
width[4]=0.; mass[4]=0;  Qtxt[4]="\2\5";
width[2]=V[7]; mass[2]=V[53];  Qtxt[2]="\3\4";
width[1]=V[12]; mass[1]=V[11];  Qtxt[1]="\1\2\5";
width[3]=0.; mass[3]=0;  Qtxt[3]="\1\2";
*err=*err|prepDen(4,nin_out,BWrange_out*
 BWrange_out,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(6, momenta, DP);
{int i; for(i=0;i<17;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}
