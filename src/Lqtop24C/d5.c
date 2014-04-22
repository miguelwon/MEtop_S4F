/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F77_out,F78_out,F79_out,F80_out,F81_out,F82_out,F83_out,F84_out
 ,F85_out,F86_out,F87_out,F88_out,F89_out,F90_out,F91_out,F92_out,F93_out
 ,F94_out,F95_out,F96_out,F97_out,F98_out,F99_out,F100_out,F101_out;
static FNN *Farr[25]={&F77_out,&F78_out,&F79_out,&F80_out,&F81_out,&F82_out
 ,&F83_out,&F84_out,&F85_out,&F86_out,&F87_out,&F88_out,&F89_out,&F90_out
 ,&F91_out,&F92_out,&F93_out,&F94_out,&F95_out,&F96_out,&F97_out,&F98_out
 ,&F99_out,&F100_out,&F101_out};
extern DNN S5_out;
REAL S5_out(double GG, REAL * momenta,int * err)
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
