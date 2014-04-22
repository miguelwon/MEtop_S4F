/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F318_out,F319_out,F320_out,F321_out,F322_out,F323_out,F324_out
 ,F325_out,F326_out,F327_out,F328_out,F329_out,F330_out,F331_out,F332_out
 ,F333_out,F334_out,F335_out,F336_out,F337_out,F338_out,F339_out,F340_out
 ,F341_out,F342_out;
static FNN *Farr[25]={&F318_out,&F319_out,&F320_out,&F321_out,&F322_out
 ,&F323_out,&F324_out,&F325_out,&F326_out,&F327_out,&F328_out,&F329_out
 ,&F330_out,&F331_out,&F332_out,&F333_out,&F334_out,&F335_out,&F336_out
 ,&F337_out,&F338_out,&F339_out,&F340_out,&F341_out,&F342_out};
extern DNN S41_out;
REAL S41_out(double GG, REAL * momenta,int * err)
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
