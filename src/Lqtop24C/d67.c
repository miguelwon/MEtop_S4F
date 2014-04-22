/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F383_out,F384_out;
static FNN *Farr[2]={&F383_out,&F384_out};
extern DNN S67_out;
REAL S67_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[6],width[6];
char * Qtxt[6];
REAL Q0[6],Q1[6],Q2[6];
width[3]=V[12]; mass[3]=V[11];  Qtxt[3]="\1\2\6";
width[5]=0.; mass[5]=V[53];  Qtxt[5]="\2\6";
width[2]=V[7]; mass[2]=V[53];  Qtxt[2]="\3\4";
width[1]=V[12]; mass[1]=V[11];  Qtxt[1]="\1\2\5";
width[4]=0.; mass[4]=V[53];  Qtxt[4]="\2\5";
*err=*err|prepDen(5,nin_out,BWrange_out*
 BWrange_out,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(6, momenta, DP);
{int i; for(i=0;i<2;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}
