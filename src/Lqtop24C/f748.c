/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F748_out;
static void C748(REAL * C)
{
REAL* V=va_out;
REAL S[13];                                                                 
     
S[0]=V[38]*V[38];
S[1]=V[37]*V[37];
S[2]=V[13]*V[13]*V[13]*V[13];
S[3]=V[8]*V[8]*V[8]*V[8];
C[55]=+S[3]*(S[2]*(V[9]*(V[9]*(V[37]*(4*V[38]-2*V[37])-2*S[0])+V[11]*(4*(
 S[0]-S[1])))));
S[4]=V[13]*V[13];
C[54]=+S[3]*(S[4]*(V[9]*(V[9]*(V[37]*(4*V[38]-2*V[37])-2*S[0])+V[11]*(6*(
 S[0]-S[1])))));
C[53]=+S[3]*(V[9]*(V[11]*(2*(S[0]-S[1]))));
S[5]=V[11]*V[11];
S[6]=V[9]*V[9];
C[52]=+S[3]*(S[4]*(V[37]*(V[37]*(2*S[4]+S[5]-S[6])+V[38]*(2*(S[5]+S[6])-4*
 S[4]))+S[0]*(2*S[4]+S[5]-S[6])));
C[51]=+S[3]*(S[4]*(V[37]*(S[6]*(4*V[38]-2*V[37])+S[5]*(4*V[38]+2*V[37]))+
 S[0]*(2*(S[5]-S[6]))));
C[50]=+S[3]*(V[37]*(S[6]*(2*V[38]-V[37])+S[5]*(2*V[38]+V[37]))+S[0]*(S[5]-
 S[6]));
C[49]=+S[3]*(S[4]*(V[37]*(2*V[37]-4*V[38])+2*S[0]));
S[7]=V[8]*V[8];
C[48]=+S[2]*(S[7]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[0])+V[11]*(16*(
 S[0]-S[1])))));
C[47]=+S[7]*(S[4]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[0])+V[11]*(24*(
 S[0]-S[1])))));
C[46]=+S[7]*(V[9]*(V[11]*(8*(S[0]-S[1]))));
C[45]=+S[2]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[0])+V[11]*(16*(S[0]-
 S[1]))));
C[44]=+S[4]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[0])+V[11]*(24*(S[0]-
 S[1]))));
C[43]=+V[9]*(V[11]*(8*(S[0]-S[1])));
C[42]=+S[7]*(S[4]*(V[37]*(V[37]*(4*(S[5]-S[6])+8*S[4])+V[38]*(8*(S[5]+S[6])-
 16*S[4]))+S[0]*(4*(S[5]-S[6])+8*S[4])));
C[41]=+S[7]*(S[4]*(V[37]*(S[6]*(16*V[38]-8*V[37])+S[5]*(16*V[38]+8*V[37]))+
 S[0]*(8*(S[5]-S[6]))));
C[40]=+S[7]*(V[37]*(S[6]*(8*V[38]-4*V[37])+S[5]*(8*V[38]+4*V[37]))+S[0]*(4*(
 S[5]-S[6])));
C[39]=+S[4]*(V[37]*(V[37]*(4*(S[5]-S[6])+8*S[4])+V[38]*(8*(S[5]+S[6])-16*
 S[4]))+S[0]*(4*(S[5]-S[6])+8*S[4]));
C[38]=+S[4]*(V[37]*(S[6]*(16*V[38]-8*V[37])+S[5]*(16*V[38]+8*V[37]))+S[0]*(
 8*(S[5]-S[6])));
C[37]=+V[37]*(S[6]*(8*V[38]-4*V[37])+S[5]*(8*V[38]+4*V[37]))+S[0]*(4*(S[5]-
 S[6]));
C[36]=+S[4]*(V[37]*(8*V[37]-16*V[38])+8*S[0]);
C[35]=+S[2]*(S[7]*(V[37]*(V[37]*(V[9]*(-16*V[11]-4*V[9])+8*S[4]-4*S[5])+
 V[38]*(8*(S[6]-S[5])-16*S[4]))+S[0]*(V[9]*(16*V[11]-4*V[9])+8*S[4]-4*
 S[5])));
C[34]=+S[7]*(S[4]*(V[37]*(V[37]*(V[9]*(-24*V[11]-4*V[9])+16*S[4]-4*S[5])+
 V[38]*(8*(S[6]-S[5])-32*S[4]))+S[0]*(V[9]*(24*V[11]-4*V[9])+16*S[4]-4*
 S[5])));
C[33]=+S[7]*(8*(S[4]*(S[0]+S[1])+V[9]*(V[11]*(S[0]-S[1])))-16*V[38]*V[37]*
 S[4]);
C[32]=+S[2]*(S[7]*(V[37]*(24*V[37]-48*V[38])+24*S[0]));
C[31]=+S[7]*(S[4]*(V[37]*(32*V[37]-64*V[38])+32*S[0]));
C[30]=+S[7]*(V[37]*(8*V[37]-16*V[38])+8*S[0]);
C[29]=+S[2]*(V[37]*(V[37]*(V[9]*(-16*V[11]-4*V[9])+8*S[4]-4*S[5])+V[38]*(8*(
 S[6]-S[5])-16*S[4]))+S[0]*(V[9]*(16*V[11]-4*V[9])+8*S[4]-4*S[5]));
C[28]=+S[4]*(V[37]*(V[37]*(V[9]*(-24*V[11]-4*V[9])+16*S[4]-4*S[5])+V[38]*(8*
 (S[6]-S[5])-32*S[4]))+S[0]*(V[9]*(24*V[11]-4*V[9])+16*S[4]-4*S[5]));
C[27]=+8*(S[4]*(S[0]+S[1])+V[9]*(V[11]*(S[0]-S[1])))-16*V[38]*V[37]*S[4];
C[26]=+S[2]*(V[37]*(24*V[37]-48*V[38])+24*S[0]);
C[25]=+S[4]*(V[37]*(32*V[37]-64*V[38])+32*S[0]);
C[24]=+S[4]*(V[37]*(16*V[37]-32*V[38])+16*S[0]);
C[23]=+V[37]*(8*V[37]-16*V[38])+8*S[0];
C[22]=+S[2]*(S[7]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[0])+V[11]*(8*(
 S[0]-S[1])))));
C[21]=+S[7]*(S[4]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[0])+V[11]*(12*(
 S[0]-S[1])))));
C[20]=+S[7]*(V[9]*(V[11]*(4*(S[0]-S[1]))));
C[19]=+S[7]*(S[4]*(V[37]*(V[37]*(2*(S[5]-S[6])+4*S[4])+V[38]*(4*(S[5]+S[6])-
 8*S[4]))+S[0]*(2*(S[5]-S[6])+4*S[4])));
C[18]=+S[7]*(S[4]*(V[37]*(S[6]*(8*V[38]-4*V[37])+S[5]*(8*V[38]+4*V[37]))+
 S[0]*(4*(S[5]-S[6]))));
C[17]=+S[7]*(V[37]*(S[6]*(4*V[38]-2*V[37])+S[5]*(4*V[38]+2*V[37]))+S[0]*(2*(
 S[5]-S[6])));
C[16]=+S[7]*(S[4]*(V[37]*(4*V[37]-8*V[38])+4*S[0]));
C[15]=+S[3]*(S[2]*(V[37]*(V[37]*(V[9]*(-4*V[11]-V[9])+2*S[4]-S[5])+V[38]*(2*
 (S[6]-S[5])-4*S[4]))+S[0]*(V[9]*(4*V[11]-V[9])+2*S[4]-S[5])));
C[14]=+S[3]*(S[4]*(V[37]*(V[37]*(V[9]*(-6*V[11]-V[9])+4*S[4]-S[5])+V[38]*(2*
 (S[6]-S[5])-8*S[4]))+S[0]*(V[9]*(6*V[11]-V[9])+4*S[4]-S[5])));
C[13]=+S[3]*(2*(S[4]*(S[0]+S[1])+V[9]*(V[11]*(S[0]-S[1])))-4*V[38]*V[37]*
 S[4]);
C[12]=+S[2]*(S[7]*(V[37]*(V[37]*(V[9]*(-8*V[11]-2*V[9])+4*S[4]-2*S[5])+
 V[38]*(4*(S[6]-S[5])-8*S[4]))+S[0]*(V[9]*(8*V[11]-2*V[9])+4*S[4]-2*S[5])));
C[11]=+S[7]*(S[4]*(V[37]*(V[37]*(V[9]*(-12*V[11]-2*V[9])+8*S[4]-2*S[5])+
 V[38]*(4*(S[6]-S[5])-16*S[4]))+S[0]*(V[9]*(12*V[11]-2*V[9])+8*S[4]-2*
 S[5])));
C[10]=+S[7]*(4*(S[4]*(S[0]+S[1])+V[9]*(V[11]*(S[0]-S[1])))-8*V[38]*V[37]*
 S[4]);
C[9]=+S[3]*(S[2]*(V[37]*(6*V[37]-12*V[38])+6*S[0]));
C[8]=+S[3]*(S[4]*(V[37]*(8*V[37]-16*V[38])+8*S[0]));
C[7]=+S[2]*(S[7]*(V[37]*(12*V[37]-24*V[38])+12*S[0]));
C[6]=+S[7]*(S[4]*(V[37]*(16*V[37]-32*V[38])+16*S[0]));
C[5]=+S[3]*(S[4]*(V[37]*(4*V[37]-8*V[38])+4*S[0]));
C[4]=+S[3]*(V[37]*(2*V[37]-4*V[38])+2*S[0]);
C[3]=+S[7]*(S[4]*(V[37]*(8*V[37]-16*V[38])+8*S[0]));
C[2]=+S[7]*(V[37]*(4*V[37]-8*V[38])+4*S[0]);
S[8]=V[14]*V[14];
S[9]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[8]*S[9];
S[10]=V[52]*V[52];
S[11]=V[16]*V[16];
S[12]=V[1]*V[1]*V[1]*V[1];
C[0]=+32*S[10]*S[11]*S[12];
}
REAL F748_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   B                       n2     !  n2                      B       
 ==<==\                 /==>======!==>==\                 /==<==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   b  |  G     t     W+ |  E2     !  E2 |  W+    t     G  |  b       
 ==>==@-1---@==>==@-2>--@==<======!==<==@-->4-@==>==@---3-@==>==     
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
static REAL C[56];REAL S[3];REAL tmp[5];                                    
     
if(CalcConst) C748(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[1];
S[2]=V[53]*V[53];
tmp[0]=+DP[7]*(C[2]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-
 DP[1]-DP[3]+DP[9])+S[2]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+DP[7]*(
 DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[2]*(
 DP[10]-DP[14])+DP[5]*(DP[14]-DP[10])))+DP[12]*(C[3]*(-DP[1]-DP[3])+C[17]*(-
 DP[2]-DP[4])+C[6]*(DP[8]+DP[9]))+DP[13]*(C[3]*(-DP[1]-DP[3])+C[17]*(-DP[2]-
 DP[4])+C[6]*(DP[8]+DP[9]))+DP[10]*(C[3]*(DP[5]-S[2])+C[4]*(DP[0]-DP[7])+
 C[5])+DP[14]*(C[6]*(S[2]-DP[5])+C[4]*(DP[7]-DP[0])-C[8])+DP[11]*(C[17]*(
 DP[5]-S[2])+C[50]))+DP[0]*(C[20]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(
 DP[1]+DP[2]+DP[3]+DP[4])+S[2]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+
 C[10]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+
 C[53]*(-DP[10]-DP[11])+C[13]*DP[14])+C[21]*(DP[12]*(DP[1]+DP[2]+DP[3]+
 DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+S[2]*(DP[10]+DP[11])+DP[5]*(-
 DP[10]-DP[11]))+C[11]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[2]))+C[54]*(-DP[10]-DP[11])+C[14]*DP[14];
tmp[1]=+DP[6]*(DP[7]*(C[16]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-
 DP[1]-DP[2]-DP[3]-DP[4])+S[2]*(-DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]))+C[3]*
 (DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[49]*(
 DP[10]+DP[11])+C[5]*DP[14])+DP[6]*(C[16]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))+C[3]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[5]*DP[14]-C[49]*DP[11])+DP[12]*(
 C[18]*(-DP[1]-DP[3])+C[19]*(-DP[2]-DP[4])+C[7]*(DP[8]+DP[9]))+DP[13]*(
 C[18]*(-DP[1]-DP[3])+C[19]*(-DP[2]-DP[4])+C[7]*(DP[8]+DP[9]))+S[2]*(C[7]*
 DP[14]-C[18]*DP[10]-C[19]*DP[11])+DP[5]*(C[18]*DP[10]+C[19]*DP[11]-C[7]*
 DP[14])+C[51]*DP[10]+C[52]*DP[11]-C[9]*DP[14]);
tmp[2]=+DP[7]*(DP[7]*(C[16]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+
 DP[10]*(S[2]-DP[5]))+C[3]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[2]))+C[5]*DP[14]-C[49]*DP[10])+DP[12]*(C[19]*(-DP[1]-
 DP[3])+C[18]*(-DP[2]-DP[4])+C[7]*(DP[8]+DP[9]))+DP[13]*(C[19]*(-DP[1]-
 DP[3])+C[18]*(-DP[2]-DP[4])+C[7]*(DP[8]+DP[9]))+S[2]*(C[7]*DP[14]-C[19]*
 DP[10]-C[18]*DP[11])+DP[5]*(C[19]*DP[10]+C[18]*DP[11]-C[7]*DP[14])+C[52]*
 DP[10]+C[51]*DP[11]-C[9]*DP[14])+C[22]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+
 DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+S[2]*(DP[10]+DP[11])+DP[5]*(-DP[10]-
 DP[11]))+C[12]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(
 DP[5]-S[2]))+C[55]*(-DP[10]-DP[11])+C[15]*DP[14]+tmp[1];
tmp[3]=+DP[0]*(DP[6]*(S[2]*(C[23]*(DP[4]*(DP[6]-DP[0]-DP[7])+DP[9]*(DP[0]-
 DP[6])-DP[7]*DP[3])+C[25]*DP[9]-C[37]*DP[3]-C[24]*DP[4])+C[30]*(DP[2]*(
 DP[0]-DP[6]+DP[7])+DP[8]*(DP[6]-DP[0])+DP[7]*DP[1])+C[2]*(DP[4]*(DP[0]-
 DP[6]+DP[7])+DP[9]*(DP[6]-DP[0])+DP[7]*DP[3])+C[6]*(DP[2]-DP[9])+C[40]*
 DP[1]+C[17]*DP[3]+C[3]*DP[4]-C[31]*DP[8])+DP[7]*(S[2]*(C[23]*(DP[0]*(DP[9]-
 DP[3])+DP[7]*(DP[3]-DP[9]))+C[25]*DP[9]-C[24]*DP[3]-C[37]*DP[4])+DP[0]*(
 C[30]*(DP[1]-DP[8])+C[2]*(DP[3]-DP[9]))+DP[7]*(C[30]*(DP[8]-DP[1])+C[2]*(
 DP[9]-DP[3]))+C[6]*(DP[1]-DP[9])+C[40]*DP[2]+C[3]*DP[3]+C[17]*DP[4]-C[31]*
 DP[8])+DP[0]*(S[2]*(C[43]*(DP[3]+DP[4])-C[27]*DP[9])+C[46]*(-DP[1]-DP[2])+
 C[20]*(-DP[3]-DP[4])+C[33]*DP[8]+C[10]*DP[9])+S[2]*(C[44]*(DP[3]+DP[4])-
 C[28]*DP[9])+C[47]*(-DP[1]-DP[2])+C[21]*(-DP[3]-DP[4])+C[34]*DP[8]+C[11]*
 DP[9]);
tmp[4]=+S[2]*(DP[12]*(DP[6]*(DP[7]*(S[2]*(C[36]*(-DP[3]-DP[4])-C[24]*DP[9])+
 C[3]*(DP[1]+DP[2]+DP[9])+C[16]*(DP[3]+DP[4])+C[6]*DP[8])+DP[6]*(S[2]*(
 C[36]*DP[4]-C[24]*DP[9])+C[3]*(DP[9]-DP[2])+C[6]*DP[8]-C[16]*DP[4])+S[2]*(
 C[26]*DP[9]-C[38]*DP[3]-C[39]*DP[4])+C[41]*DP[1]+C[42]*DP[2]+C[18]*DP[3]+
 C[19]*DP[4]-C[32]*DP[8]-C[7]*DP[9])+DP[7]*(DP[7]*(S[2]*(C[36]*DP[3]-C[24]*
 DP[9])+C[3]*(DP[9]-DP[1])+C[6]*DP[8]-C[16]*DP[3])+S[2]*(C[26]*DP[9]-C[39]*
 DP[3]-C[38]*DP[4])+C[42]*DP[1]+C[41]*DP[2]+C[19]*DP[3]+C[18]*DP[4]-C[32]*
 DP[8]-C[7]*DP[9])+S[2]*(C[45]*(DP[3]+DP[4])-C[29]*DP[9])+C[48]*(-DP[1]-
 DP[2])+C[22]*(-DP[3]-DP[4])+C[35]*DP[8]+C[12]*DP[9]+tmp[3])+DP[13]*(DP[0]*(
 C[2]*(DP[6]*(DP[2]*(DP[0]-DP[6]+DP[7])+DP[8]*(DP[6]-DP[0])+DP[7]*DP[1])+
 DP[7]*(DP[0]*(DP[1]-DP[8])+DP[7]*(DP[8]-DP[1])))+DP[1]*(C[17]*DP[6]-C[21]-
 C[20]*DP[0]+C[3]*DP[7])+DP[2]*(C[3]*DP[6]-C[21]-C[20]*DP[0]+C[17]*DP[7])+
 DP[8]*(C[6]*(-DP[6]-DP[7])+C[11]+C[10]*DP[0]))+DP[6]*(DP[2]*(C[16]*(DP[7]-
 DP[6])+C[19])+DP[8]*(C[3]*(DP[6]+DP[7])-C[7])+DP[1]*(C[18]+C[16]*DP[7]))+
 DP[7]*(DP[1]*(C[19]-C[16]*DP[7])+DP[8]*(C[3]*DP[7]-C[7])+C[18]*DP[2])+
 C[22]*(-DP[1]-DP[2])+C[12]*DP[8]));
R=+DP[5]*(DP[0]*(DP[6]*(C[2]*(DP[0]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+
 DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+S[2]*(DP[14]-DP[11])+DP[5]*(DP[11]-
 DP[14]))+DP[6]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-
 DP[9])+S[2]*(DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+DP[7]*(DP[12]*(-DP[1]-
 DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+S[2]*(-DP[10]-DP[11])+
 DP[5]*(DP[10]+DP[11])))+DP[11]*(C[4]*(DP[0]-DP[6]+DP[7])+C[3]*(DP[5]-S[2])+
 C[5])+DP[12]*(C[17]*(-DP[1]-DP[3])+C[3]*(-DP[2]-DP[4])+C[6]*(DP[8]+DP[9]))+
 DP[13]*(C[17]*(-DP[1]-DP[3])+C[3]*(-DP[2]-DP[4])+C[6]*(DP[8]+DP[9]))+
 DP[14]*(C[6]*(S[2]-DP[5])+C[4]*(DP[6]-DP[0])-C[8])+DP[10]*(C[17]*(DP[5]-
 S[2])+C[50]+C[4]*DP[7]))+tmp[0])+tmp[2])+tmp[4];
R*=(N/D)*Q2[4]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*9)/(8);
 }
 return R;
}
