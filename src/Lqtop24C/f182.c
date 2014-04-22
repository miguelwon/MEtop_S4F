/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F182_out;
static void C182(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[36]*V[36];
S[1]=V[11]*V[11];
S[2]=V[8]*V[8]*V[8]*V[8];
C[9]=+S[2]*(S[1]*(V[35]*(2*V[36]+V[35])+S[0]));
S[3]=V[8]*V[8];
C[8]=+S[3]*(S[1]*(V[35]*(8*V[36]+4*V[35])+4*S[0]));
C[7]=+S[1]*(V[35]*(8*V[36]+4*V[35])+4*S[0]);
C[6]=+S[3]*(V[35]*(8*V[35]-16*V[36])+8*S[0]);
C[5]=+V[35]*(8*V[35]-16*V[36])+8*S[0];
C[4]=+S[3]*(S[1]*(V[35]*(4*V[36]+2*V[35])+2*S[0]));
C[3]=+S[2]*(V[35]*(2*V[35]-4*V[36])+2*S[0]);
C[2]=+S[3]*(V[35]*(4*V[35]-8*V[36])+4*S[0]);
S[4]=V[14]*V[14];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[4]*S[5];
S[6]=V[52]*V[52];
S[7]=V[15]*V[15];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+32*S[6]*S[7]*S[8];
}
REAL F182_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   U                       n2     !  n2                      U       
 ==<==\                 /==>======!==>==\                 /==<==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   u  |  G     t     W+ |  E2     !  E2 |  W+    t     G  |  u       
 ==>==@-1---@==>==@-2>--@==<======!==<==@-->4-@==>==@---3-@==>==     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        b      !  b        |     |                
            |     \========>======!==>========/     |                
            |              P6     !  P6             |                
            |                     !                 |                
            |              U      !  U              |                
            \==============<======!==<==============/                
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[10];REAL S[3];REAL tmp[1];                                    
     
if(CalcConst) C182(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[1];
S[2]=V[53]*V[53];
tmp[0]=+DP[5]*(C[2]*(DP[6]*(DP[0]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(
 DP[8]-DP[2]-DP[4]+DP[9])+S[2]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[6]*
 (DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+S[2]*(
 DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+DP[7]*(DP[12]*(-DP[1]-DP[2]-DP[3]-
 DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+S[2]*(-DP[10]-DP[11])+DP[5]*(
 DP[10]+DP[11])))+DP[7]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(
 DP[8]-DP[1]-DP[3]+DP[9])+S[2]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+DP[7]*
 (DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[2]*(
 DP[10]-DP[14])+DP[5]*(DP[14]-DP[10]))))+DP[6]*(C[4]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[3]*(DP[11]*(DP[0]-
 DP[6]+DP[7])+DP[14]*(DP[6]-DP[0])+DP[10]*DP[7])+C[9]*DP[10])+DP[7]*(C[4]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[3]*(
 DP[0]*(DP[10]-DP[14])+DP[7]*(DP[14]-DP[10]))+C[9]*DP[11]));
R=+DP[0]*(S[2]*(DP[12]*(DP[6]*(S[2]*(C[5]*(DP[4]*(DP[6]-DP[0]-DP[7])+DP[9]*(
 DP[0]-DP[6])-DP[7]*DP[3])-C[7]*DP[3])+C[6]*(DP[2]*(DP[0]-DP[6]+DP[7])+
 DP[8]*(DP[6]-DP[0])+DP[7]*DP[1])+C[2]*(DP[4]*(DP[0]-DP[6]+DP[7])+DP[9]*(
 DP[6]-DP[0])+DP[7]*DP[3])+C[8]*DP[1]+C[4]*DP[3])+DP[7]*(DP[0]*(S[2]*(C[5]*(
 DP[9]-DP[3]))+C[6]*(DP[1]-DP[8])+C[2]*(DP[3]-DP[9]))+DP[7]*(S[2]*(C[5]*(
 DP[3]-DP[9]))+C[6]*(DP[8]-DP[1])+C[2]*(DP[9]-DP[3]))+DP[4]*(C[4]-C[7]*
 S[2])+C[8]*DP[2]))+DP[13]*(C[2]*(DP[6]*(DP[2]*(DP[0]-DP[6]+DP[7])+DP[8]*(
 DP[6]-DP[0])+DP[7]*DP[1])+DP[7]*(DP[0]*(DP[1]-DP[8])+DP[7]*(DP[8]-DP[1])))+
 C[4]*(DP[6]*DP[1]+DP[7]*DP[2])))+tmp[0]);
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*9)/(8);
 }
 return R;
}
