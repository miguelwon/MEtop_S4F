/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F144_out,F145_out,F146_out,F147_out,F148_out,F149_out,F150_out
 ,F151_out,F152_out,F153_out,F154_out,F155_out,F156_out,F157_out,F158_out
 ,F159_out,F160_out,F161_out,F162_out,F163_out,F164_out;
static FNN *Farr[21]={&F144_out,&F145_out,&F146_out,&F147_out,&F148_out
 ,&F149_out,&F150_out,&F151_out,&F152_out,&F153_out,&F154_out,&F155_out
 ,&F156_out,&F157_out,&F158_out,&F159_out,&F160_out,&F161_out,&F162_out
 ,&F163_out,&F164_out};
extern DNN S8_out;
REAL S8_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[8],width[8];
char * Qtxt[8];
REAL Q0[8],Q1[8],Q2[8];
width[7]=0.; mass[7]=V[8];  Qtxt[7]="\2\3";
width[3]=V[10]; mass[3]=V[9];  Qtxt[3]="\1\2";
width[6]=0.; mass[6]=V[9];  Qtxt[6]="\2\3";
width[5]=0.; mass[5]=V[8];  Qtxt[5]="\1\2";
width[2]=V[6]; mass[2]=V[23];  Qtxt[2]="\4\5";
width[1]=V[10]; mass[1]=V[9];  Qtxt[1]="\1\2\3";
width[4]=0.; mass[4]=0;  Qtxt[4]="\1\3";
*err=*err|prepDen(7,nin_out,BWrange_out*
 BWrange_out,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(6, momenta, DP);
{int i; for(i=0;i<21;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}
