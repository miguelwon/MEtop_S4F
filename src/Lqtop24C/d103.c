/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F431_out,F432_out,F433_out,F434_out,F435_out,F436_out,F437_out
 ,F438_out,F439_out,F440_out,F441_out,F442_out,F443_out,F444_out,F445_out
 ,F446_out,F447_out,F448_out,F449_out,F450_out,F451_out,F452_out,F453_out
 ,F454_out,F455_out;
static FNN *Farr[25]={&F431_out,&F432_out,&F433_out,&F434_out,&F435_out
 ,&F436_out,&F437_out,&F438_out,&F439_out,&F440_out,&F441_out,&F442_out
 ,&F443_out,&F444_out,&F445_out,&F446_out,&F447_out,&F448_out,&F449_out
 ,&F450_out,&F451_out,&F452_out,&F453_out,&F454_out,&F455_out};
extern DNN S103_out;
REAL S103_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[4],width[4];
char * Qtxt[4];
REAL Q0[4],Q1[4],Q2[4];
width[2]=V[7]; mass[2]=V[53];  Qtxt[2]="\3\4";
width[1]=V[12]; mass[1]=V[11];  Qtxt[1]="\1\2\5";
width[3]=0.; mass[3]=0;  Qtxt[3]="\2\5";
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
