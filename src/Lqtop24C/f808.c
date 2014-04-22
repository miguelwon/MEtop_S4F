/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F808_out;
static void C808(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[36]*V[36];
S[1]=V[35]*V[35];
S[2]=V[11]*V[11];
S[3]=V[8]*V[8]*V[8]*V[8];
C[16]=+S[3]*(S[2]*(9*(S[0]-S[1])));
C[15]=+S[3]*(8*(S[0]-S[1]));
S[4]=V[8]*V[8];
C[14]=+S[4]*(S[2]*(36*(S[0]-S[1])));
C[13]=+S[2]*(36*(S[0]-S[1]));
C[12]=+S[4]*(32*(S[0]-S[1]));
C[11]=+32*(S[0]-S[1]);
C[10]=+S[4]*(S[2]*(28*(S[0]-S[1])));
C[9]=+S[2]*(28*(S[0]-S[1]));
C[8]=+16*(S[0]-S[1]);
C[7]=+S[4]*(S[2]*(18*(S[0]-S[1])));
C[6]=+S[4]*(16*(S[0]-S[1]));
C[5]=+S[3]*(S[2]*(7*(S[0]-S[1])));
C[4]=+S[4]*(S[2]*(14*(S[0]-S[1])));
C[3]=+S[3]*(4*(S[0]-S[1]));
C[2]=+S[4]*(8*(S[0]-S[1]));
S[5]=V[14]*V[14];
S[6]=V[2]*V[2]*V[2]*V[2];
C[1]=+4*S[5]*S[6];
S[7]=V[52]*V[52];
S[8]=V[15]*V[15];
S[9]=V[1]*V[1]*V[1]*V[1];
C[0]=+3*S[7]*S[8]*S[9];
}
REAL F808_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                        N2     !  N2                      G          
                     /==<======!==<==\                 /---1-        
                     |  P3     !  P3 |                 |  P1         
                     |         !     |                 |             
      G     t     W+ |  e2     !  e2 |  W+    t    ~00 |  G          
    -1---@==<==@-3<--@==>======!==>==@--<5-@==<==@---4-@---2-        
      P1 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2         
         |     |               !           |     |                   
         |     |        B      !  B        |     |                   
        t|P7   \========<======!==<========/     |                   
         |              P6     !  P6             |                   
         |                     !                 |                   
      G  |              u      !  u              |                   
    -2---@==============>======!==>==============/                   
      P2                P5     !  P5                                 
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[17];REAL S[3];                                                
     
if(CalcConst) C808(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[1];
S[2]=V[53]*V[53];
R=+DP[0]*(DP[7]*(DP[5]*(C[2]*(DP[7]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+
 DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+S[2]*(DP[11]-DP[14])+DP[5]*(DP[14]-
 DP[11]))+DP[0]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(
 DP[5]-S[2]))+DP[6]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(
 S[2]-DP[5])))+C[4]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-
 DP[8]-DP[9])+S[2]*(DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+DP[7]*(C[6]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-DP[5]))+C[3]*(
 DP[14]-DP[11])-C[15]*DP[10])+C[7]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])+DP[10]*(S[2]-DP[5]))+DP[10]*(C[3]*(DP[0]-DP[6])-C[16])+C[5]*(
 DP[14]-DP[11]))+S[2]*(DP[12]*(DP[7]*(S[2]*(C[8]*(DP[4]-DP[9])+C[11]*DP[3])+
 C[6]*(DP[8]-DP[2]-DP[3])+C[2]*(DP[9]-DP[4])-C[12]*DP[1])+DP[3]*(S[2]*(C[8]*
 (DP[6]-DP[0])+C[13])+C[2]*(DP[0]-DP[6])-C[7])+DP[1]*(C[6]*(DP[0]-DP[6])-
 C[14])+S[2]*(C[9]*(DP[4]-DP[9]))+C[10]*(DP[8]-DP[2])+C[4]*(DP[9]-DP[4]))+
 DP[13]*(DP[1]*(C[2]*(DP[0]-DP[6])-C[7]-C[6]*DP[7])+DP[2]*(-C[4]-C[2]*
 DP[7])+DP[8]*(C[4]+C[2]*DP[7])))));
R*=(N/D)*Q1[5]*Q2[1]*Q2[2]*Q1[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[2] += (R*-9)/(-8);
 }
 return R;
}
