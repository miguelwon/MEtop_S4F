/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F103_out,F104_out,F105_out,F106_out,F107_out,F108_out,F109_out
 ,F110_out,F111_out,F112_out,F113_out,F114_out,F115_out,F116_out,F117_out
 ,F118_out,F119_out,F120_out,F121_out,F122_out;
static FNN *Farr[20]={&F103_out,&F104_out,&F105_out,&F106_out,&F107_out
 ,&F108_out,&F109_out,&F110_out,&F111_out,&F112_out,&F113_out,&F114_out
 ,&F115_out,&F116_out,&F117_out,&F118_out,&F119_out,&F120_out,&F121_out
 ,&F122_out};
extern DNN S6_out;
REAL S6_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[8],width[8];
char * Qtxt[8];
REAL Q0[8],Q1[8],Q2[8];
width[7]=0.; mass[7]=0;  Qtxt[7]="\2\3";
width[3]=V[10]; mass[3]=V[9];  Qtxt[3]="\1\2";
width[6]=0.; mass[6]=V[9];  Qtxt[6]="\2\3";
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
