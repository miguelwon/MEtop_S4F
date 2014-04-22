/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F21_out;
static FNN *Farr[1]={&F21_out};
extern DNN S21_out;
REAL S21_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[10];
REAL* V=va_out;
REAL mass[3],width[3];
char * Qtxt[3];
REAL Q0[3],Q1[3],Q2[3];
width[2]=V[7]; mass[2]=V[29];  Qtxt[2]="\3\4";
width[1]=V[13]; mass[1]=V[12];  Qtxt[1]="\1\2";
*err=*err|prepDen(2,nin_out,BWrange_out*
 BWrange_out,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(5, momenta, DP);
{int i; for(i=0;i<1;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}
