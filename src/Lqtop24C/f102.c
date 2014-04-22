/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F102_out;
static void C102(REAL * C)
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
REAL F102_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         u                 d      !  d                 u             
       ==>==@==============>======!==>==============@==>==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              n2     !  n2             |                
          W+|P7         /==>======!==>==\         W+|-PA             
            1           |  P3     !  P3 |           3                
            |           |         !     |           |                
         d  |  t     W+ |  E2     !  E2 |  W+    t  |  d             
       ==>==@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        b      !  b        |                      
                  \========>======!==>========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[5];REAL S[2];                                                 
     
if(CalcConst) C102(C);
N=+C[0];
S[0]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
R=+DP[0]*(C[2]*(DP[5]*(DP[6]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(
 DP[1]+DP[2]+DP[3]+DP[4])+S[1]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+
 DP[7]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+
 S[1]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+DP[0]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[1])))+S[1]*(DP[12]*(DP[3]*(-DP[6]-
 DP[7])+DP[4]*(-DP[6]-DP[7])+DP[9]*DP[0])+DP[13]*(DP[1]*(-DP[6]-DP[7])+
 DP[2]*(-DP[6]-DP[7])+DP[8]*DP[0])))+S[1]*(DP[12]*(S[1]*(4*(DP[3]*(DP[6]+
 DP[7])+DP[4]*(DP[6]+DP[7])-DP[9]*DP[0]))+C[4]*(DP[1]*(-DP[6]-DP[7])+DP[2]*
 (-DP[6]-DP[7])+DP[8]*DP[0])))+DP[5]*(C[3]*(DP[6]*(-DP[10]-DP[11])+DP[7]*(-
 DP[10]-DP[11])+DP[14]*DP[0])));
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
