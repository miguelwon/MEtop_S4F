/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F523_out,F524_out,F525_out,F526_out,F527_out,F528_out,F529_out
 ,F530_out,F531_out,F532_out,F533_out,F534_out,F535_out,F536_out,F537_out
 ,F538_out,F539_out,F540_out,F541_out,F542_out,F543_out,F544_out,F545_out
 ,F546_out,F547_out;
static FNN *Farr[25]={&F523_out,&F524_out,&F525_out,&F526_out,&F527_out
 ,&F528_out,&F529_out,&F530_out,&F531_out,&F532_out,&F533_out,&F534_out
 ,&F535_out,&F536_out,&F537_out,&F538_out,&F539_out,&F540_out,&F541_out
 ,&F542_out,&F543_out,&F544_out,&F545_out,&F546_out,&F547_out};
extern DNN S131_out;
REAL S131_out(double GG, REAL * momenta,int * err)
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
