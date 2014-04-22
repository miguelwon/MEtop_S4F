/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F548_out,F549_out,F550_out,F551_out,F552_out,F553_out,F554_out
 ,F555_out,F556_out,F557_out,F558_out,F559_out,F560_out,F561_out,F562_out
 ,F563_out,F564_out,F565_out,F566_out,F567_out,F568_out,F569_out,F570_out
 ,F571_out,F572_out;
static FNN *Farr[25]={&F548_out,&F549_out,&F550_out,&F551_out,&F552_out
 ,&F553_out,&F554_out,&F555_out,&F556_out,&F557_out,&F558_out,&F559_out
 ,&F560_out,&F561_out,&F562_out,&F563_out,&F564_out,&F565_out,&F566_out
 ,&F567_out,&F568_out,&F569_out,&F570_out,&F571_out,&F572_out};
extern DNN S132_out;
REAL S132_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[4],width[4];
char * Qtxt[4];
REAL Q0[4],Q1[4],Q2[4];
width[2]=V[7]; mass[2]=V[53];  Qtxt[2]="\3\4";
width[1]=V[12]; mass[1]=V[11];  Qtxt[1]="\1\2\5";
width[3]=0.; mass[3]=0;  Qtxt[3]="\2\5";
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
