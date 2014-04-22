/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F292_out,F293_out,F294_out,F295_out,F296_out,F297_out,F298_out
 ,F299_out,F300_out,F301_out,F302_out,F303_out,F304_out,F305_out,F306_out
 ,F307_out,F308_out,F309_out,F310_out,F311_out,F312_out,F313_out,F314_out
 ,F315_out,F316_out;
static FNN *Farr[25]={&F292_out,&F293_out,&F294_out,&F295_out,&F296_out
 ,&F297_out,&F298_out,&F299_out,&F300_out,&F301_out,&F302_out,&F303_out
 ,&F304_out,&F305_out,&F306_out,&F307_out,&F308_out,&F309_out,&F310_out
 ,&F311_out,&F312_out,&F313_out,&F314_out,&F315_out,&F316_out};
extern DNN S39_out;
REAL S39_out(double GG, REAL * momenta,int * err)
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
