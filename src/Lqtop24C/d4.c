/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F60_out,F61_out,F62_out,F63_out,F64_out,F65_out,F66_out,F67_out
 ,F68_out,F69_out,F70_out,F71_out,F72_out,F73_out,F74_out,F75_out,F76_out;
static FNN *Farr[17]={&F60_out,&F61_out,&F62_out,&F63_out,&F64_out,&F65_out
 ,&F66_out,&F67_out,&F68_out,&F69_out,&F70_out,&F71_out,&F72_out,&F73_out
 ,&F74_out,&F75_out,&F76_out};
extern DNN S4_out;
REAL S4_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[5],width[5];
char * Qtxt[5];
REAL Q0[5],Q1[5],Q2[5];
width[4]=0.; mass[4]=0;  Qtxt[4]="\1\5";
width[2]=V[7]; mass[2]=V[53];  Qtxt[2]="\3\4";
width[1]=V[12]; mass[1]=V[11];  Qtxt[1]="\1\2\5";
width[3]=0.; mass[3]=0;  Qtxt[3]="\1\2";
*err=*err|prepDen(4,nin_out,BWrange_out*
 BWrange_out,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(6, momenta, DP);
{int i; for(i=0;i<17;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}
