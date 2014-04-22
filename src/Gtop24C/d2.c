/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F21_out,F22_out,F23_out,F24_out,F25_out,F26_out,F27_out,F28_out
 ,F29_out,F30_out,F31_out,F32_out,F33_out,F34_out,F35_out,F36_out,F37_out
 ,F38_out,F39_out,F40_out;
static FNN *Farr[20]={&F21_out,&F22_out,&F23_out,&F24_out,&F25_out,&F26_out
 ,&F27_out,&F28_out,&F29_out,&F30_out,&F31_out,&F32_out,&F33_out,&F34_out
 ,&F35_out,&F36_out,&F37_out,&F38_out,&F39_out,&F40_out};
extern DNN S2_out;
REAL S2_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[8],width[8];
char * Qtxt[8];
REAL Q0[8],Q1[8],Q2[8];
width[7]=0.; mass[7]=0;  Qtxt[7]="\2\3";
width[6]=0.; mass[6]=V[9];  Qtxt[6]="\1\3";
width[3]=V[10]; mass[3]=V[9];  Qtxt[3]="\1\2";
width[5]=0.; mass[5]=0;  Qtxt[5]="\1\3";
width[2]=V[6]; mass[2]=V[23];  Qtxt[2]="\4\5";
width[1]=V[10]; mass[1]=V[9];  Qtxt[1]="\1\2\3";
width[4]=0.; mass[4]=0;  Qtxt[4]="\1\2";
*err=*err|prepDen(7,nin_out,BWrange_out*
 BWrange_out,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(6, momenta, DP);
{int i; for(i=0;i<20;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}
