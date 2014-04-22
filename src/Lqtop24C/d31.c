/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F241_out,F242_out,F243_out,F244_out,F245_out,F246_out,F247_out
 ,F248_out,F249_out,F250_out,F251_out,F252_out,F253_out,F254_out,F255_out
 ,F256_out,F257_out,F258_out,F259_out,F260_out,F261_out,F262_out,F263_out
 ,F264_out,F265_out;
static FNN *Farr[25]={&F241_out,&F242_out,&F243_out,&F244_out,&F245_out
 ,&F246_out,&F247_out,&F248_out,&F249_out,&F250_out,&F251_out,&F252_out
 ,&F253_out,&F254_out,&F255_out,&F256_out,&F257_out,&F258_out,&F259_out
 ,&F260_out,&F261_out,&F262_out,&F263_out,&F264_out,&F265_out};
extern DNN S31_out;
REAL S31_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[4],width[4];
char * Qtxt[4];
REAL Q0[4],Q1[4],Q2[4];
width[2]=V[7]; mass[2]=V[53];  Qtxt[2]="\3\4";
width[1]=V[12]; mass[1]=V[11];  Qtxt[1]="\1\2\5";
width[3]=0.; mass[3]=0;  Qtxt[3]="\1\2";
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
