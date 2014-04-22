/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F397_out;
static void C397(REAL * C)
{
REAL* V=va_out;
REAL S[7];                                                                  
     
S[0]=V[8]*V[8];
C[4]=+4*S[0];
S[1]=V[8]*V[8]*V[8]*V[8];
C[3]=+S[1];
C[2]=+2*S[0];
S[2]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+S[2];
S[3]=V[52]*V[52];
S[4]=V[50]*V[50];
S[5]=V[44]*V[44];
S[6]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[3]*S[4]*S[5]*S[6];
}
REAL F397_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   D                       n2     !  n2                      D       
 ==<==\                 /==>======!==>==\                 /==<==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   u  |  W+    t     W+ |  E2     !  E2 |  W+    t     W+ |  u       
 ==>==@-1>--@==>==@-2>--@==<======!==<==@-->4-@==>==@-->3-@==>==     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        b      !  b        |     |                
            |     \========>======!==>========/     |                
            |              P6     !  P6             |                
            |                     !                 |                
            |              D      !  D              |                
            \==============<======!==<==============/                
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[5];REAL S[2];                                                 
     
if(CalcConst) C397(C);
N=-C[0];
S[0]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
R=+DP[7]*(C[2]*(DP[5]*(DP[0]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(
 DP[8]-DP[2]-DP[4]+DP[9])+S[1]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[6]*
 (DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+S[1]*(
 DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+DP[7]*(DP[1]*(-DP[12]-DP[13])+DP[3]*
 (-DP[12]-DP[13])+DP[10]*(DP[5]-S[1])))+S[1]*(DP[12]*(DP[0]*(DP[4]-DP[9])+
 DP[6]*(DP[9]-DP[4])+DP[7]*DP[3])+DP[13]*(DP[0]*(DP[2]-DP[8])+DP[6]*(DP[8]-
 DP[2])+DP[7]*DP[1])))+S[1]*(DP[12]*(S[1]*(4*(DP[0]*(DP[9]-DP[4])+DP[6]*(
 DP[4]-DP[9])-DP[7]*DP[3]))+C[4]*(DP[0]*(DP[2]-DP[8])+DP[6]*(DP[8]-DP[2])+
 DP[7]*DP[1])))+DP[5]*(C[3]*(DP[0]*(DP[11]-DP[14])+DP[6]*(DP[14]-DP[11])+
 DP[10]*DP[7])));
R*=(N/D)*Q2[1]*Q2[2]*Q2[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
