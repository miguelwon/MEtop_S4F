/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F750_out;
static void C750(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[13]*V[13];
S[1]=V[11]*V[11];
S[2]=V[36]*V[36];
S[3]=V[8]*V[8]*V[8]*V[8];
C[39]=+S[3]*(S[0]*(V[35]*(S[1]*(2*V[36]+V[35])+S[0]*(2*V[35]-4*V[36]))+S[2]*
 (2*S[0]+S[1])));
C[38]=+S[3]*(S[1]*(S[0]*(V[35]*(4*V[36]+2*V[35])+2*S[2])));
C[37]=+S[3]*(S[1]*(V[35]*(2*V[36]+V[35])+S[2]));
S[4]=V[8]*V[8];
C[36]=+S[4]*(S[0]*(V[35]*(S[1]*(8*V[36]+4*V[35])+S[0]*(8*V[35]-16*V[36]))+
 S[2]*(8*S[0]+4*S[1])));
C[35]=+S[4]*(S[1]*(S[0]*(V[35]*(16*V[36]+8*V[35])+8*S[2])));
C[34]=+S[4]*(S[1]*(V[35]*(8*V[36]+4*V[35])+4*S[2]));
C[33]=+S[0]*(V[35]*(S[1]*(8*V[36]+4*V[35])+S[0]*(8*V[35]-16*V[36]))+S[2]*(8*
 S[0]+4*S[1]));
C[32]=+S[1]*(S[0]*(V[35]*(16*V[36]+8*V[35])+8*S[2]));
C[31]=+S[1]*(V[35]*(8*V[36]+4*V[35])+4*S[2]);
S[5]=V[13]*V[13]*V[13]*V[13];
C[30]=+S[5]*(S[4]*(V[35]*(S[1]*(-8*V[36]-4*V[35])+S[0]*(8*V[35]-16*V[36]))+
 S[2]*(8*S[0]-4*S[1])));
C[29]=+S[4]*(S[0]*(V[35]*(S[1]*(-8*V[36]-4*V[35])+S[0]*(16*V[35]-32*V[36]))+
 S[2]*(16*S[0]-4*S[1])));
C[28]=+S[5]*(S[4]*(V[35]*(24*V[35]-48*V[36])+24*S[2]));
C[27]=+S[4]*(S[0]*(V[35]*(32*V[35]-64*V[36])+32*S[2]));
C[26]=+S[4]*(V[35]*(8*V[35]-16*V[36])+8*S[2]);
C[25]=+S[5]*(V[35]*(S[1]*(-8*V[36]-4*V[35])+S[0]*(8*V[35]-16*V[36]))+S[2]*(
 8*S[0]-4*S[1]));
C[24]=+S[0]*(V[35]*(S[1]*(-8*V[36]-4*V[35])+S[0]*(16*V[35]-32*V[36]))+S[2]*(
 16*S[0]-4*S[1]));
C[23]=+S[0]*(V[35]*(8*V[35]-16*V[36])+8*S[2]);
C[22]=+S[5]*(V[35]*(24*V[35]-48*V[36])+24*S[2]);
C[21]=+S[0]*(V[35]*(32*V[35]-64*V[36])+32*S[2]);
C[20]=+S[0]*(V[35]*(16*V[35]-32*V[36])+16*S[2]);
C[19]=+V[35]*(8*V[35]-16*V[36])+8*S[2];
C[18]=+S[4]*(S[0]*(V[35]*(S[1]*(4*V[36]+2*V[35])+S[0]*(4*V[35]-8*V[36]))+
 S[2]*(4*S[0]+2*S[1])));
C[17]=+S[4]*(S[1]*(S[0]*(V[35]*(8*V[36]+4*V[35])+4*S[2])));
C[16]=+S[4]*(S[1]*(V[35]*(4*V[36]+2*V[35])+2*S[2]));
C[15]=+S[3]*(S[5]*(V[35]*(S[1]*(-2*V[36]-V[35])+S[0]*(2*V[35]-4*V[36]))+
 S[2]*(2*S[0]-S[1])));
C[14]=+S[3]*(S[0]*(V[35]*(S[1]*(-2*V[36]-V[35])+S[0]*(4*V[35]-8*V[36]))+
 S[2]*(4*S[0]-S[1])));
C[13]=+S[3]*(S[0]*(V[35]*(2*V[35]-4*V[36])+2*S[2]));
C[12]=+S[5]*(S[4]*(V[35]*(S[1]*(-4*V[36]-2*V[35])+S[0]*(4*V[35]-8*V[36]))+
 S[2]*(4*S[0]-2*S[1])));
C[11]=+S[4]*(S[0]*(V[35]*(S[1]*(-4*V[36]-2*V[35])+S[0]*(8*V[35]-16*V[36]))+
 S[2]*(8*S[0]-2*S[1])));
C[10]=+S[4]*(S[0]*(V[35]*(4*V[35]-8*V[36])+4*S[2]));
C[9]=+S[3]*(S[5]*(V[35]*(6*V[35]-12*V[36])+6*S[2]));
C[8]=+S[3]*(S[0]*(V[35]*(8*V[35]-16*V[36])+8*S[2]));
C[7]=+S[5]*(S[4]*(V[35]*(12*V[35]-24*V[36])+12*S[2]));
C[6]=+S[4]*(S[0]*(V[35]*(16*V[35]-32*V[36])+16*S[2]));
C[5]=+S[3]*(S[0]*(V[35]*(4*V[35]-8*V[36])+4*S[2]));
C[4]=+S[3]*(V[35]*(2*V[35]-4*V[36])+2*S[2]);
C[3]=+S[4]*(S[0]*(V[35]*(8*V[35]-16*V[36])+8*S[2]));
C[2]=+S[4]*(V[35]*(4*V[35]-8*V[36])+4*S[2]);
S[6]=V[14]*V[14];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[6]*S[7];
S[8]=V[52]*V[52];
S[9]=V[15]*V[15];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+32*S[8]*S[9]*S[10];
}
REAL F750_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   B                       N2     !  N2                      B       
 ==<==\                 /==<======!==<==\                 /==<==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   b  |  G     t     W+ |  e2     !  e2 |  W+    t     G  |  b       
 ==>==@-1---@==<==@-2<--@==>======!==>==@--<4-@==<==@---3-@==>==     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        B      !  B        |     |                
            |     \========<======!==<========/     |                
            |              P6     !  P6             |                
            |                     !                 |                
            |              u      !  u              |                
            \==============>======!==>==============/                
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[40];REAL S[3];REAL tmp[3];                                    
     
if(CalcConst) C750(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[1];
S[2]=V[53]*V[53];
tmp[0]=+DP[7]*(C[2]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-
 DP[1]-DP[3]+DP[9])+S[2]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+DP[7]*(
 DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[2]*(
 DP[10]-DP[14])+DP[5]*(DP[14]-DP[10])))+DP[12]*(C[3]*(-DP[1]-DP[3])+C[16]*(-
 DP[2]-DP[4])+C[6]*(DP[8]+DP[9]))+DP[13]*(C[3]*(-DP[1]-DP[3])+C[16]*(-DP[2]-
 DP[4])+C[6]*(DP[8]+DP[9]))+DP[10]*(C[3]*(DP[5]-S[2])+C[4]*(DP[0]-DP[7])+
 C[5])+DP[14]*(C[6]*(S[2]-DP[5])+C[4]*(DP[7]-DP[0])-C[8])+DP[11]*(C[16]*(
 DP[5]-S[2])+C[37]))+DP[0]*(C[10]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*(DP[5]-S[2]))+C[13]*DP[14])+C[11]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[14]*DP[14];
tmp[1]=+DP[6]*(DP[7]*(C[10]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-
 DP[1]-DP[2]-DP[3]-DP[4])+S[2]*(-DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]))+C[3]*
 (DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[13]*(
 DP[10]+DP[11])+C[5]*DP[14])+DP[6]*(C[10]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))+C[3]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[5]*DP[14]-C[13]*DP[11])+DP[12]*(
 C[17]*(-DP[1]-DP[3])+C[18]*(-DP[2]-DP[4])+C[7]*(DP[8]+DP[9]))+DP[13]*(
 C[17]*(-DP[1]-DP[3])+C[18]*(-DP[2]-DP[4])+C[7]*(DP[8]+DP[9]))+S[2]*(C[7]*
 DP[14]-C[17]*DP[10]-C[18]*DP[11])+DP[5]*(C[17]*DP[10]+C[18]*DP[11]-C[7]*
 DP[14])+C[38]*DP[10]+C[39]*DP[11]-C[9]*DP[14])+DP[7]*(DP[7]*(C[10]*(DP[1]*(
 DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-DP[5]))+C[3]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[5]*DP[14]-
 C[13]*DP[10])+DP[12]*(C[18]*(-DP[1]-DP[3])+C[17]*(-DP[2]-DP[4])+C[7]*(
 DP[8]+DP[9]))+DP[13]*(C[18]*(-DP[1]-DP[3])+C[17]*(-DP[2]-DP[4])+C[7]*(
 DP[8]+DP[9]))+S[2]*(C[7]*DP[14]-C[18]*DP[10]-C[17]*DP[11])+DP[5]*(C[18]*
 DP[10]+C[17]*DP[11]-C[7]*DP[14])+C[39]*DP[10]+C[38]*DP[11]-C[9]*DP[14])+
 C[12]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+
 C[15]*DP[14];
tmp[2]=+DP[12]*(DP[0]*(DP[6]*(S[2]*(C[19]*(DP[4]*(DP[6]-DP[0]-DP[7])+DP[9]*(
 DP[0]-DP[6])-DP[7]*DP[3])+C[21]*DP[9]-C[31]*DP[3]-C[20]*DP[4])+C[26]*(
 DP[2]*(DP[0]-DP[6]+DP[7])+DP[8]*(DP[6]-DP[0])+DP[7]*DP[1])+C[2]*(DP[4]*(
 DP[0]-DP[6]+DP[7])+DP[9]*(DP[6]-DP[0])+DP[7]*DP[3])+C[6]*(DP[2]-DP[9])+
 C[34]*DP[1]+C[16]*DP[3]+C[3]*DP[4]-C[27]*DP[8])+DP[7]*(S[2]*(C[19]*(DP[0]*(
 DP[9]-DP[3])+DP[7]*(DP[3]-DP[9]))+C[21]*DP[9]-C[20]*DP[3]-C[31]*DP[4])+
 DP[0]*(C[26]*(DP[1]-DP[8])+C[2]*(DP[3]-DP[9]))+DP[7]*(C[26]*(DP[8]-DP[1])+
 C[2]*(DP[9]-DP[3]))+C[6]*(DP[1]-DP[9])+C[34]*DP[2]+C[3]*DP[3]+C[16]*DP[4]-
 C[27]*DP[8])+DP[9]*(S[2]*(-C[24]-C[23]*DP[0])+C[11]+C[10]*DP[0])+DP[8]*(
 C[29]+C[3]*DP[0]))+DP[6]*(DP[7]*(S[2]*(C[23]*(-DP[3]-DP[4])-C[20]*DP[9])+
 C[3]*(DP[1]+DP[2]+DP[9])+C[10]*(DP[3]+DP[4])+C[6]*DP[8])+DP[6]*(S[2]*(
 C[23]*DP[4]-C[20]*DP[9])+C[3]*(DP[9]-DP[2])+C[6]*DP[8]-C[10]*DP[4])+S[2]*(
 C[22]*DP[9]-C[32]*DP[3]-C[33]*DP[4])+C[35]*DP[1]+C[36]*DP[2]+C[17]*DP[3]+
 C[18]*DP[4]-C[28]*DP[8]-C[7]*DP[9])+DP[7]*(DP[7]*(S[2]*(C[23]*DP[3]-C[20]*
 DP[9])+C[3]*(DP[9]-DP[1])+C[6]*DP[8]-C[10]*DP[3])+S[2]*(C[22]*DP[9]-C[33]*
 DP[3]-C[32]*DP[4])+C[36]*DP[1]+C[35]*DP[2]+C[18]*DP[3]+C[17]*DP[4]-C[28]*
 DP[8]-C[7]*DP[9])+DP[9]*(C[12]-C[25]*S[2])+C[30]*DP[8]);
R=+DP[5]*(DP[0]*(DP[6]*(C[2]*(DP[0]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+
 DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+S[2]*(DP[14]-DP[11])+DP[5]*(DP[11]-
 DP[14]))+DP[6]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-
 DP[9])+S[2]*(DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+DP[7]*(DP[12]*(-DP[1]-
 DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+S[2]*(-DP[10]-DP[11])+
 DP[5]*(DP[10]+DP[11])))+DP[11]*(C[4]*(DP[0]-DP[6]+DP[7])+C[3]*(DP[5]-S[2])+
 C[5])+DP[12]*(C[16]*(-DP[1]-DP[3])+C[3]*(-DP[2]-DP[4])+C[6]*(DP[8]+DP[9]))+
 DP[13]*(C[16]*(-DP[1]-DP[3])+C[3]*(-DP[2]-DP[4])+C[6]*(DP[8]+DP[9]))+
 DP[14]*(C[6]*(S[2]-DP[5])+C[4]*(DP[6]-DP[0])-C[8])+DP[10]*(C[16]*(DP[5]-
 S[2])+C[37]+C[4]*DP[7]))+tmp[0])+tmp[1])+S[2]*(DP[13]*(DP[0]*(C[2]*(DP[6]*(
 DP[2]*(DP[0]-DP[6]+DP[7])+DP[8]*(DP[6]-DP[0])+DP[7]*DP[1])+DP[7]*(DP[0]*(
 DP[1]-DP[8])+DP[7]*(DP[8]-DP[1])))+DP[8]*(C[6]*(-DP[6]-DP[7])+C[11]+C[10]*
 DP[0])+DP[1]*(C[16]*DP[6]+C[3]*DP[7])+DP[2]*(C[3]*DP[6]+C[16]*DP[7]))+
 DP[6]*(DP[2]*(C[10]*(DP[7]-DP[6])+C[18])+DP[8]*(C[3]*(DP[6]+DP[7])-C[7])+
 DP[1]*(C[17]+C[10]*DP[7]))+DP[7]*(DP[1]*(C[18]-C[10]*DP[7])+DP[8]*(C[3]*
 DP[7]-C[7])+C[17]*DP[2])+C[12]*DP[8])+tmp[2]);
R*=(N/D)*Q2[4]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*9)/(8);
 }
 return R;
}
