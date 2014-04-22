/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F814_out,F815_out,F816_out,F817_out,F818_out,F819_out,F820_out
 ,F821_out,F822_out,F823_out,F824_out,F825_out,F826_out,F827_out,F828_out
 ,F829_out,F830_out,F831_out,F832_out,F833_out,F834_out;
static FNN *Farr[21]={&F814_out,&F815_out,&F816_out,&F817_out,&F818_out
 ,&F819_out,&F820_out,&F821_out,&F822_out,&F823_out,&F824_out,&F825_out
 ,&F826_out,&F827_out,&F828_out,&F829_out,&F830_out,&F831_out,&F832_out
 ,&F833_out,&F834_out};
extern DNN S256_out;
REAL S256_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[8],width[8];
char * Qtxt[8];
REAL Q0[8],Q1[8],Q2[8];
width[7]=0.; mass[7]=V[9];  Qtxt[7]="\2\5";
width[6]=0.; mass[6]=V[11];  Qtxt[6]="\1\5";
width[5]=0.; mass[5]=V[11];  Qtxt[5]="\2\5";
width[4]=0.; mass[4]=V[9];  Qtxt[4]="\1\5";
width[2]=V[7]; mass[2]=V[53];  Qtxt[2]="\3\4";
width[1]=V[12]; mass[1]=V[11];  Qtxt[1]="\1\2\5";
width[3]=0.; mass[3]=0;  Qtxt[3]="\1\2";
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
