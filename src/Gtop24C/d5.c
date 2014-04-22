/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F83_out,F84_out,F85_out,F86_out,F87_out,F88_out,F89_out,F90_out
 ,F91_out,F92_out,F93_out,F94_out,F95_out,F96_out,F97_out,F98_out,F99_out
 ,F100_out,F101_out,F102_out;
static FNN *Farr[20]={&F83_out,&F84_out,&F85_out,&F86_out,&F87_out,&F88_out
 ,&F89_out,&F90_out,&F91_out,&F92_out,&F93_out,&F94_out,&F95_out,&F96_out
 ,&F97_out,&F98_out,&F99_out,&F100_out,&F101_out,&F102_out};
extern DNN S5_out;
REAL S5_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[8],width[8];
char * Qtxt[8];
REAL Q0[8],Q1[8],Q2[8];
width[7]=0.; mass[7]=V[9];  Qtxt[7]="\2\3";
width[6]=0.; mass[6]=0;  Qtxt[6]="\2\3";
width[3]=V[10]; mass[3]=V[9];  Qtxt[3]="\1\2";
width[5]=0.; mass[5]=0;  Qtxt[5]="\1\2";
width[2]=V[6]; mass[2]=V[23];  Qtxt[2]="\4\5";
width[1]=V[10]; mass[1]=V[9];  Qtxt[1]="\1\2\3";
width[4]=0.; mass[4]=0;  Qtxt[4]="\1\3";
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
