/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F40_out;
static void C40(REAL * C)
{
REAL* V=va_out;
REAL S[7];                                                                  
     
S[0]=V[8]*V[8]*V[8]*V[8];
C[8]=+S[0]*(V[27]*(6*V[30]+18*V[29])+V[28]*(2*V[30]+6*V[29]));
S[1]=V[8]*V[8];
C[7]=+S[1]*(V[27]*(24*V[30]+72*V[29])+V[28]*(8*V[30]+24*V[29]));
C[6]=+V[27]*(24*V[30]+72*V[29])+V[28]*(8*V[30]+24*V[29]);
C[5]=+V[27]*(12*V[30]+36*V[29])+V[28]*(4*V[30]+12*V[29]);
C[4]=+S[1]*(V[27]*(12*V[30]+36*V[29])+V[28]*(4*V[30]+12*V[29]));
C[3]=+S[0]*(V[27]*(3*V[30]+9*V[29])+V[28]*(V[30]+3*V[29]));
C[2]=+S[1]*(V[27]*(6*V[30]+18*V[29])+V[28]*(2*V[30]+6*V[29]));
S[2]=V[39]*V[39]*V[39]*V[39];
S[3]=V[14]*V[14]*V[14]*V[14];
S[4]=V[2]*V[2]*V[2]*V[2];
C[1]=+18*S[2]*S[3]*S[4];
S[5]=V[52]*V[52];
S[6]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[5]*V[11]*V[9]*S[6];
}
REAL F40_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   u                       n2     !  n2                      u       
 ==>==\                 /==>======!==>==\                 /==>==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   U  | ~0U    t     W+ |  E2     !  E2 |  W+    t    ~0X |  U       
 ==<==@-1---@==>==@-2>--@==<======!==<==@-->4-@==>==@---3-@==<==     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        b      !  b        |     |                
            |     \========>======!==>========/     |                
            |              P6     !  P6             |                
            |                     !                 |                
            |              C      !  C              |                
            \==============<======!==<==============/                
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[9];REAL S[2];                                                 
     
if(CalcConst) C40(C);
N=-C[0];
S[0]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
R=+DP[5]*(C[2]*(DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*
 (DP[5]-S[1]))+DP[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(
 DP[5]-S[1]))+DP[7]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(
 S[1]-DP[5])))+DP[0]*(C[4]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+
 DP[11]*(S[1]-DP[5]))+C[3]*DP[14]-C[8]*DP[11])+C[3]*(DP[11]*DP[6]-DP[10]*
 DP[7]))+S[1]*(DP[12]*(DP[0]*(S[1]*(C[6]*DP[4]-C[5]*DP[9])+C[4]*(DP[8]-
 DP[4])+C[2]*DP[9]-C[7]*DP[2])+DP[6]*(DP[4]*(C[2]-C[5]*S[1])+C[4]*DP[2])+
 DP[7]*(DP[3]*(C[5]*S[1]-C[2])-C[4]*DP[1]))+DP[13]*(C[2]*(DP[6]*DP[2]-DP[7]*
 DP[1]+DP[8]*DP[0])-C[4]*DP[2]*DP[0]));
R*=(N/D)*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
