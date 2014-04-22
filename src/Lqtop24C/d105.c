/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F457_out,F458_out,F459_out,F460_out,F461_out,F462_out,F463_out
 ,F464_out,F465_out,F466_out,F467_out,F468_out,F469_out,F470_out,F471_out
 ,F472_out,F473_out,F474_out,F475_out,F476_out,F477_out,F478_out,F479_out
 ,F480_out,F481_out;
static FNN *Farr[25]={&F457_out,&F458_out,&F459_out,&F460_out,&F461_out
 ,&F462_out,&F463_out,&F464_out,&F465_out,&F466_out,&F467_out,&F468_out
 ,&F469_out,&F470_out,&F471_out,&F472_out,&F473_out,&F474_out,&F475_out
 ,&F476_out,&F477_out,&F478_out,&F479_out,&F480_out,&F481_out};
extern DNN S105_out;
REAL S105_out(double GG, REAL * momenta,int * err)
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
