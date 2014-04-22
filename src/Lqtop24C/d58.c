/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F368_out;
static FNN *Farr[1]={&F368_out};
extern DNN S58_out;
REAL S58_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[4],width[4];
char * Qtxt[4];
REAL Q0[4],Q1[4],Q2[4];
width[3]=V[7]; mass[3]=V[53];  Qtxt[3]="\3\4";
width[2]=V[12]; mass[2]=V[11];  Qtxt[2]="\1\2\5";
width[1]=V[7]; mass[1]=V[53];  Qtxt[1]="\1\2";
*err=*err|prepDen(3,nin_out,BWrange_out*
 BWrange_out,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(6, momenta, DP);
{int i; for(i=0;i<1;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}
