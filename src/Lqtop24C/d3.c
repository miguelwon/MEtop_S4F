/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F35_out,F36_out,F37_out,F38_out,F39_out,F40_out,F41_out,F42_out
 ,F43_out,F44_out,F45_out,F46_out,F47_out,F48_out,F49_out,F50_out,F51_out
 ,F52_out,F53_out,F54_out,F55_out,F56_out,F57_out,F58_out,F59_out;
static FNN *Farr[25]={&F35_out,&F36_out,&F37_out,&F38_out,&F39_out,&F40_out
 ,&F41_out,&F42_out,&F43_out,&F44_out,&F45_out,&F46_out,&F47_out,&F48_out
 ,&F49_out,&F50_out,&F51_out,&F52_out,&F53_out,&F54_out,&F55_out,&F56_out
 ,&F57_out,&F58_out,&F59_out};
extern DNN S3_out;
REAL S3_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[4],width[4];
char * Qtxt[4];
REAL Q0[4],Q1[4],Q2[4];
width[2]=V[7]; mass[2]=V[53];  Qtxt[2]="\3\4";
width[1]=V[12]; mass[1]=V[11];  Qtxt[1]="\1\2\5";
width[3]=0.; mass[3]=0;  Qtxt[3]="\1\2";
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
