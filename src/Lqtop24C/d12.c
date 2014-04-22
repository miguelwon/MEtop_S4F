/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F111_out,F112_out,F113_out,F114_out,F115_out,F116_out,F117_out
 ,F118_out,F119_out,F120_out,F121_out,F122_out,F123_out,F124_out,F125_out
 ,F126_out,F127_out,F128_out,F129_out,F130_out,F131_out,F132_out,F133_out
 ,F134_out,F135_out;
static FNN *Farr[25]={&F111_out,&F112_out,&F113_out,&F114_out,&F115_out
 ,&F116_out,&F117_out,&F118_out,&F119_out,&F120_out,&F121_out,&F122_out
 ,&F123_out,&F124_out,&F125_out,&F126_out,&F127_out,&F128_out,&F129_out
 ,&F130_out,&F131_out,&F132_out,&F133_out,&F134_out,&F135_out};
extern DNN S12_out;
REAL S12_out(double GG, REAL * momenta,int * err)
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
