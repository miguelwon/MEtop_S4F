/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F18_out;
static void C18(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[12]*V[12];
S[1]=V[14]*V[14];
S[2]=V[10]*V[10];
S[3]=V[9]*V[9];
S[4]=V[21]*V[21];
C[28]=+S[3]*(S[2]*(V[20]*(S[2]*(V[20]*(S[0]-2*S[1]+S[2]+S[3])+V[21]*(2*(
 S[0]-S[2]-S[3])+4*S[1]))+S[1]*(V[20]*(S[1]-2*S[0]-S[3])+V[21]*(2*(S[3]-
 S[1])-4*S[0]))+S[3]*(S[0]*(2*V[21]+V[20])))+S[4]*(S[2]*(S[0]-2*S[1]+S[2]+
 S[3])+S[1]*(S[1]-2*S[0]-S[3])+S[0]*S[3]))+S[0]*(S[1]*(V[20]*(S[3]*(-2*
 V[21]-V[20])+S[1]*(2*V[21]+V[20]))+S[4]*(S[1]-S[3]))));
C[27]=+S[3]*(S[2]*(V[20]*(V[20]*(2*(S[1]-S[0]-S[2]-S[3]))+V[21]*(4*(S[2]-
 S[1]-S[0]+S[3])))+S[4]*(2*(S[1]-S[0]-S[2]-S[3])))+S[0]*(V[20]*(S[3]*(-4*
 V[21]-2*V[20])+S[1]*(4*V[21]+2*V[20]))+S[4]*(2*(S[1]-S[3]))));
C[26]=+S[3]*(V[20]*(S[2]*(V[20]*(4*(S[0]+S[3])+6*S[2]-8*S[1])+V[21]*(8*(
 S[0]-S[3])+16*S[1]-12*S[2]))+S[1]*(V[20]*(2*(S[1]-S[3])-4*S[0])+V[21]*(4*(
 S[3]-S[1])-8*S[0]))+S[3]*(S[0]*(4*V[21]+2*V[20])))+S[4]*(S[2]*(4*(S[0]+
 S[3])+6*S[2]-8*S[1])+S[1]*(2*(S[1]-S[3])-4*S[0])+2*S[0]*S[3]));
C[25]=+S[3]*(V[20]*(V[20]*(4*(S[1]-S[0]-S[3])-8*S[2])+V[21]*(8*(S[3]-S[1]-
 S[0])+16*S[2]))+S[4]*(4*(S[1]-S[0]-S[3])-8*S[2]));
C[24]=+S[3]*(V[20]*(V[20]*(4*(-S[0]-S[3])+8*S[1]-12*S[2])+V[21]*(8*(S[3]-
 S[0])+24*S[2]-16*S[1]))+S[4]*(4*(-S[0]-S[3])+8*S[1]-12*S[2]));
C[23]=+S[3]*(V[20]*(V[20]*(4*(S[0]-S[2])+8*S[1])+V[21]*(8*(S[0]+S[2])-16*
 S[1]))+S[4]*(4*(S[0]-S[2])+8*S[1]));
C[22]=+S[3]*(V[20]*(S[2]*(24*V[21]-12*V[20])+S[0]*(8*V[21]+4*V[20]))+S[4]*(
 4*S[0]-12*S[2]));
S[5]=V[10]*V[10]*V[10]*V[10];
S[6]=V[14]*V[14]*V[14]*V[14];
C[21]=+S[3]*(V[20]*(S[0]*(V[20]*(4*(S[1]-S[2])-2*S[3])+V[21]*(8*(S[1]-S[2])-
 4*S[3]))+S[1]*(S[3]*(4*V[21]-2*V[20])+S[1]*(2*V[20]-4*V[21]))+S[5]*(4*
 V[21]-2*V[20]))+S[4]*(2*(S[3]*(-S[1]-S[0])+S[6]-S[5])+S[0]*(4*(S[1]-
 S[2]))));
C[20]=+V[20]*(V[20]*(8*(S[1]-S[2]-S[3]))+V[21]*(16*(S[2]-S[1]+S[3])))+S[4]*(
 8*(S[1]-S[2]-S[3]));
C[19]=+S[3]*(V[20]*(S[2]*(8*V[20]-16*V[21])+S[0]*(16*V[21]+8*V[20]))+S[4]*(
 8*(S[0]+S[2])));
C[18]=+S[3]*(V[20]*(S[0]*(16*V[21]+8*V[20])+S[1]*(8*V[20]-16*V[21]))+S[4]*(
 8*(S[1]+S[0])));
C[17]=+S[3]*(V[20]*(S[0]*(8*V[21]+4*V[20])+S[1]*(4*V[20]-8*V[21]))+S[4]*(4*(
 S[1]+S[0])));
C[16]=+S[3]*(S[2]*(V[20]*(S[2]*(V[20]*(2*S[1]+S[0]-S[2]-S[3])+V[21]*(2*(
 S[0]+S[2]+S[3])-4*S[1]))+S[1]*(V[20]*(S[3]-S[1]-2*S[0])+V[21]*(2*(S[1]-
 S[3])-4*S[0]))+S[3]*(S[0]*(2*V[21]+V[20])))+S[4]*(S[2]*(2*S[1]+S[0]-S[2]-
 S[3])+S[1]*(S[3]-S[1]-2*S[0])+S[0]*S[3]))+S[0]*(S[1]*(V[20]*(S[3]*(-2*
 V[21]-V[20])+S[1]*(2*V[21]+V[20]))+S[4]*(S[1]-S[3]))));
C[15]=+S[2]*(V[20]*(V[20]*(4*(S[2]-S[1]-S[0]+S[3]))+V[21]*(8*(S[1]-S[0]-
 S[2]-S[3])))+S[4]*(4*(S[2]-S[1]-S[0]+S[3])))+S[0]*(V[20]*(S[3]*(-8*V[21]-4*
 V[20])+S[1]*(8*V[21]+4*V[20]))+S[4]*(4*(S[1]-S[3])));
C[14]=+S[3]*(S[2]*(V[20]*(V[20]*(8*(S[1]-S[2])-4*S[3])+V[21]*(16*(S[2]-
 S[1])+8*S[3]))+S[4]*(8*(S[1]-S[2])-4*S[3])));
C[13]=+S[3]*(V[20]*(S[2]*(4*V[20]-8*V[21])+S[0]*(8*V[21]+4*V[20]))+S[4]*(4*(
 S[0]+S[2])));
C[12]=+S[3]*(V[20]*(V[20]*(4*(-S[0]-S[3])+8*S[1]-20*S[2])+V[21]*(8*(S[3]-
 S[0])+40*S[2]-16*S[1]))+S[4]*(4*(-S[0]-S[3])+8*S[1]-20*S[2]));
C[11]=+S[3]*(V[20]*(S[2]*(8*V[21]-4*V[20])+S[0]*(8*V[21]+4*V[20]))+S[4]*(4*(
 S[0]-S[2])));
C[10]=+S[3]*(S[2]*(V[20]*(V[20]*(4*(S[2]-S[1]-S[0]))+V[21]*(8*(S[1]-S[0]-
 S[2])))+S[4]*(4*(S[2]-S[1]-S[0])))+S[0]*(S[1]*(V[20]*(8*V[21]+4*V[20])+4*
 S[4])));
C[9]=+S[3]*(S[2]*(V[20]*(16*V[20]-32*V[21])+16*S[4]));
C[8]=+S[3]*(V[20]*(16*V[20]-32*V[21])+16*S[4]);
C[7]=+S[3]*(V[20]*(V[20]*(4*(S[1]+S[0])+8*S[2])+V[21]*(8*(S[0]-S[1])-16*
 S[2]))+S[4]*(4*(S[1]+S[0])+8*S[2]));
C[6]=+V[20]*(16*V[20]-32*V[21])+16*S[4];
C[5]=+S[3]*(S[2]*(V[20]*(V[20]*(2*(S[2]-S[1]-S[0]))+V[21]*(4*(S[1]-S[0]-
 S[2])))+S[4]*(2*(S[2]-S[1]-S[0])))+S[0]*(S[1]*(V[20]*(4*V[21]+2*V[20])+2*
 S[4])));
C[4]=+V[20]*(S[2]*(16*V[21]-8*V[20])+S[0]*(16*V[21]+8*V[20]))+S[4]*(8*(S[0]-
 S[2]));
C[3]=+S[3]*(S[2]*(V[20]*(8*V[20]-16*V[21])+8*S[4]));
C[2]=+S[3]*(V[20]*(8*V[20]-16*V[21])+8*S[4]);
S[7]=V[15]*V[15];
S[8]=V[2]*V[2]*V[2]*V[2];
C[1]=+3*S[7]*S[8];
S[9]=V[28]*V[28];
S[10]=V[17]*V[17];
S[11]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[9]*S[10]*S[11];
}
REAL F18_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
          C                 N3    !  N3                C             
        ==<==\           /==<=====!==<==\           /==<==           
          P1 |           |  P3    !  P3 |           |  P1            
             |           |        !     |           |                
          G  |  t     W+ |  e3    !  e3 |  W+    t  |  G             
        -1---@==<==@-2<--@==>=====!==>==@--<3-@==<==@---1-           
          P2    P6 |  P7    P4    !  P4   -P9 | -P8    P2            
                   |              !           |                      
                   |        B     !  B        |                      
                   \========<=====!==<========/                      
                            P5    !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[29];REAL S[3];                                                
     
if(CalcConst) C18(C);
S[0]=GG*GG;
N=-C[0]*S[0];
S[1]=V[29]*V[29]*V[29]*V[29];
D=+C[1]*S[1];
S[2]=V[29]*V[29];
R=+DP[0]*(DP[0]*(DP[0]*(C[2]*(S[2]*(DP[0]+DP[1]-DP[2]-DP[3]-DP[4])+DP[0]*(
 DP[0]-DP[1]-DP[3])+DP[2]*(DP[1]+DP[2]+DP[3])+DP[4]*(DP[1]+DP[3]+DP[4]))+
 DP[0]*(C[8]*(-DP[2]-DP[4])-C[24])+S[2]*(-C[25]-C[6]*DP[3]*S[2])+DP[2]*(
 C[12]+C[8]*DP[4])+C[19]*(-DP[1]-DP[3])+C[26]+C[12]*DP[4])+S[2]*(DP[3]*(
 S[2]*(C[6]*(DP[3]+DP[4])+C[20])+C[2]*DP[2]-C[13])+DP[4]*(-C[13]-C[4]*S[2]-
 C[2]*DP[1])+C[22]*DP[2]-C[27]-C[23]*DP[1])+DP[1]*(C[7]*(DP[2]+DP[4])+C[21]+
 C[17]*DP[1]+C[18]*DP[3])+DP[2]*(C[14]+C[3]*DP[2]+C[7]*DP[3]+C[9]*DP[4])+
 DP[3]*(C[21]+C[17]*DP[3]+C[7]*DP[4])+DP[4]*(C[14]+C[3]*DP[4])+C[28])+DP[4]*
 (S[2]*(S[2]*(C[4]*(DP[3]+DP[4])+C[15])+C[11]*DP[1])+C[5]*(DP[1]+DP[3]+
 DP[4])+C[16]+C[10]*DP[2])+DP[2]*(C[5]*(DP[1]+DP[2]+DP[3])+S[2]*(-C[10]-
 C[11]*DP[3])+C[16]));
R*=(N/D)*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*9)/(8);
 }
 return R;
}