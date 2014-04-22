/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F199_out,F200_out,F201_out,F202_out,F203_out,F204_out,F205_out
 ,F206_out,F207_out,F208_out,F209_out,F210_out,F211_out,F212_out,F213_out
 ,F214_out,F215_out,F216_out,F217_out,F218_out,F219_out,F220_out,F221_out
 ,F222_out,F223_out;
static FNN *Farr[25]={&F199_out,&F200_out,&F201_out,&F202_out,&F203_out
 ,&F204_out,&F205_out,&F206_out,&F207_out,&F208_out,&F209_out,&F210_out
 ,&F211_out,&F212_out,&F213_out,&F214_out,&F215_out,&F216_out,&F217_out
 ,&F218_out,&F219_out,&F220_out,&F221_out,&F222_out,&F223_out};
extern DNN S29_out;
REAL S29_out(double GG, REAL * momenta,int * err)
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
