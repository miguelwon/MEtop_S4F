/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F26_out;
static void C26(REAL * C)
{
REAL* V=va_out;
REAL S[8];                                                                  
     
S[0]=V[19]*V[19];
S[1]=V[14]*V[14];
S[2]=V[12]*V[12];
C[5]=+S[2]*(S[1]*(V[18]*(2*V[19]+V[18])+S[0]));
C[4]=+S[1]*(V[18]*(2*V[18]-4*V[19])+2*S[0]);
C[3]=+S[2]*(V[18]*(4*V[19]+2*V[18])+2*S[0]);
C[2]=+V[18]*(4*V[18]-8*V[19])+4*S[0];
S[3]=V[15]*V[15];
S[4]=V[2]*V[2]*V[2]*V[2];
C[1]=+3*S[3]*S[4];
S[5]=V[28]*V[28];
S[6]=V[16]*V[16];
S[7]=V[1]*V[1]*V[1]*V[1];
C[0]=+4*S[5]*S[6]*S[7];
}
REAL F26_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
          G                 N1    !  N1                G             
        -1---\           /==<=====!==<==\           /---1-           
          P1 |           |  P3    !  P3 |           |  P1            
             |           |        !     |           |                
          U  |  t     W+ |  e1    !  e1 |  W+    t  |  U             
        ==<==@==<==@-2<--@==>=====!==>==@--<3-@==<==@==<==           
          P2    P6 |  P7    P4    !  P4   -P9 | -P8    P2            
                   |              !           |                      
                   |        B     !  B        |                      
                   \========<=====!==<========/                      
                            P5    !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[6];REAL S[1];                                                 
     
if(CalcConst) C26(C);
S[0]=GG*GG;
N=-C[0]*S[0];
D=+C[1];
R=+DP[0]*(DP[0]*(DP[4]*(C[2]*(DP[3]-DP[0]+DP[4])+C[4])-C[3]*DP[3])+DP[3]*(
 C[3]*(DP[3]+DP[4])+C[5]));
R*=(N/D)*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*9)/(8);
 }
 return R;
}
