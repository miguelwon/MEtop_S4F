/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F85_out;
static void C85(REAL * C)
{
REAL* V=va_out;
REAL S[7];                                                                  
     
S[0]=V[8]*V[8]*V[8]*V[8];
C[6]=+2*S[0];
S[1]=V[8]*V[8];
C[5]=+8*S[1];
C[4]=+4*S[1];
C[3]=+S[0];
C[2]=+2*S[1];
S[2]=V[39]*V[39]*V[39]*V[39];
S[3]=V[14]*V[14]*V[14]*V[14];
S[4]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[2]*S[3]*S[4];
S[5]=V[52]*V[52];
S[6]=V[1]*V[1]*V[1]*V[1];
C[0]=+4*S[5]*V[26]*V[24]*V[11]*V[9]*S[6];
}
REAL F85_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   u                       N2     !  N2                      u       
 ==>==\                 /==<======!==<==\                 /==>==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   U  | ~0a    t     W+ |  e2     !  e2 |  W+    t    ~0g |  U       
 ==<==@-1---@==<==@-2<--@==>======!==>==@--<4-@==<==@---3-@==<==     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        B      !  B        |     |                
            |     \========<======!==<========/     |                
            |              P6     !  P6             |                
            |                     !                 |                
            |              c      !  c              |                
            \==============>======!==>==============/                
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[7];REAL S[2];                                                 
     
if(CalcConst) C85(C);
N=-C[0];
S[0]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
R=+DP[5]*(C[2]*(DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*
 (DP[5]-S[1]))+DP[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(
 DP[5]-S[1]))+DP[7]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(
 S[1]-DP[5])))+DP[0]*(C[4]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+
 DP[11]*(S[1]-DP[5]))+C[3]*DP[14]-C[6]*DP[11])+C[3]*(DP[11]*DP[6]-DP[10]*
 DP[7]))+S[1]*(DP[12]*(DP[0]*(S[1]*(8*DP[4]-4*DP[9])+C[4]*(DP[8]-DP[4])+
 C[2]*DP[9]-C[5]*DP[2])+DP[6]*(DP[4]*(C[2]-4*S[1])+C[4]*DP[2])+DP[7]*(DP[3]*
 (4*S[1]-C[2])-C[4]*DP[1]))+DP[13]*(C[2]*(DP[6]*DP[2]-DP[7]*DP[1]+DP[8]*
 DP[0])-C[4]*DP[2]*DP[0]));
R*=(N/D)*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*9)/(8);
 }
 return R;
}
