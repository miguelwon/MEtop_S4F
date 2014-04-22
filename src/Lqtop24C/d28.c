/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F182_out,F183_out,F184_out,F185_out,F186_out,F187_out,F188_out
 ,F189_out,F190_out,F191_out,F192_out,F193_out,F194_out,F195_out,F196_out
 ,F197_out,F198_out;
static FNN *Farr[17]={&F182_out,&F183_out,&F184_out,&F185_out,&F186_out
 ,&F187_out,&F188_out,&F189_out,&F190_out,&F191_out,&F192_out,&F193_out
 ,&F194_out,&F195_out,&F196_out,&F197_out,&F198_out};
extern DNN S28_out;
REAL S28_out(double GG, REAL * momenta,int * err)
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
