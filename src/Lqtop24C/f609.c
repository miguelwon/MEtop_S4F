/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F609_out;
static void C609(REAL * C)
{
REAL* V=va_out;
REAL S[13];                                                                 
     
S[0]=V[13]*V[13];
S[1]=V[11]*V[11];
S[2]=V[9]*V[9];
S[3]=V[38]*V[38];
S[4]=V[13]*V[13]*V[13]*V[13];
S[5]=V[8]*V[8]*V[8]*V[8];
C[55]=+S[5]*(S[4]*(V[37]*(V[37]*(V[9]*(-4*V[11]-V[9])+2*S[0]-S[1])+V[38]*(2*
 (S[2]-S[1])-4*S[0]))+S[3]*(V[9]*(4*V[11]-V[9])+2*S[0]-S[1])));
C[54]=+S[5]*(S[4]*(V[37]*(6*V[37]-12*V[38])+6*S[3]));
C[53]=+S[5]*(S[0]*(V[37]*(V[37]*(V[9]*(-6*V[11]-V[9])+4*S[0]-S[1])+V[38]*(2*
 (S[2]-S[1])-8*S[0]))+S[3]*(V[9]*(6*V[11]-V[9])+4*S[0]-S[1])));
C[52]=+S[5]*(S[0]*(V[37]*(8*V[37]-16*V[38])+8*S[3]));
S[6]=V[37]*V[37];
C[51]=+S[5]*(2*(S[0]*(S[3]+S[6])+V[9]*(V[11]*(S[3]-S[6])))-4*V[38]*V[37]*
 S[0]);
S[7]=V[8]*V[8];
C[50]=+S[4]*(S[7]*(V[37]*(V[37]*(V[9]*(-16*V[11]-4*V[9])+8*S[0]-4*S[1])+
 V[38]*(8*(S[2]-S[1])-16*S[0]))+S[3]*(V[9]*(16*V[11]-4*V[9])+8*S[0]-4*
 S[1])));
C[49]=+S[4]*(V[37]*(V[37]*(V[9]*(-16*V[11]-4*V[9])+8*S[0]-4*S[1])+V[38]*(8*(
 S[2]-S[1])-16*S[0]))+S[3]*(V[9]*(16*V[11]-4*V[9])+8*S[0]-4*S[1]));
C[48]=+S[4]*(S[7]*(V[37]*(24*V[37]-48*V[38])+24*S[3]));
C[47]=+S[4]*(V[37]*(24*V[37]-48*V[38])+24*S[3]);
C[46]=+S[7]*(S[0]*(V[37]*(V[37]*(V[9]*(-24*V[11]-4*V[9])+16*S[0]-4*S[1])+
 V[38]*(8*(S[2]-S[1])-32*S[0]))+S[3]*(V[9]*(24*V[11]-4*V[9])+16*S[0]-4*
 S[1])));
C[45]=+S[0]*(V[37]*(V[37]*(V[9]*(-24*V[11]-4*V[9])+16*S[0]-4*S[1])+V[38]*(8*
 (S[2]-S[1])-32*S[0]))+S[3]*(V[9]*(24*V[11]-4*V[9])+16*S[0]-4*S[1]));
C[44]=+S[7]*(S[0]*(V[37]*(32*V[37]-64*V[38])+32*S[3]));
C[43]=+S[0]*(V[37]*(32*V[37]-64*V[38])+32*S[3]);
C[42]=+S[7]*(8*(S[0]*(S[3]+S[6])+V[9]*(V[11]*(S[3]-S[6])))-16*V[38]*V[37]*
 S[0]);
C[41]=+8*(S[0]*(S[3]+S[6])+V[9]*(V[11]*(S[3]-S[6])))-16*V[38]*V[37]*S[0];
C[40]=+S[4]*(S[7]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[3])+V[11]*(16*(
 S[3]-S[6])))));
C[39]=+S[7]*(S[0]*(V[37]*(V[37]*(4*(S[1]-S[2])+8*S[0])+V[38]*(8*(S[1]+S[2])-
 16*S[0]))+S[3]*(4*(S[1]-S[2])+8*S[0])));
C[38]=+S[7]*(S[0]*(V[37]*(S[2]*(16*V[38]-8*V[37])+S[1]*(16*V[38]+8*V[37]))+
 S[3]*(8*(S[1]-S[2]))));
C[37]=+S[7]*(S[0]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[3])+V[11]*(24*(
 S[3]-S[6])))));
C[36]=+S[7]*(V[37]*(S[2]*(8*V[38]-4*V[37])+S[1]*(8*V[38]+4*V[37]))+S[3]*(4*(
 S[1]-S[2])));
C[35]=+S[7]*(V[9]*(V[11]*(8*(S[3]-S[6]))));
C[34]=+S[7]*(V[37]*(8*V[37]-16*V[38])+8*S[3]);
C[33]=+S[4]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[3])+V[11]*(16*(S[3]-
 S[6]))));
C[32]=+S[0]*(V[37]*(V[37]*(4*(S[1]-S[2])+8*S[0])+V[38]*(8*(S[1]+S[2])-16*
 S[0]))+S[3]*(4*(S[1]-S[2])+8*S[0]));
C[31]=+S[0]*(V[37]*(S[2]*(16*V[38]-8*V[37])+S[1]*(16*V[38]+8*V[37]))+S[3]*(
 8*(S[1]-S[2])));
C[30]=+S[0]*(V[37]*(8*V[37]-16*V[38])+8*S[3]);
C[29]=+S[0]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[3])+V[11]*(24*(S[3]-
 S[6]))));
C[28]=+S[0]*(V[37]*(16*V[37]-32*V[38])+16*S[3]);
C[27]=+V[37]*(S[2]*(8*V[38]-4*V[37])+S[1]*(8*V[38]+4*V[37]))+S[3]*(4*(S[1]-
 S[2]));
C[26]=+V[9]*(V[11]*(8*(S[3]-S[6])));
C[25]=+V[37]*(8*V[37]-16*V[38])+8*S[3];
C[24]=+S[4]*(S[7]*(V[37]*(V[37]*(V[9]*(-8*V[11]-2*V[9])+4*S[0]-2*S[1])+
 V[38]*(4*(S[2]-S[1])-8*S[0]))+S[3]*(V[9]*(8*V[11]-2*V[9])+4*S[0]-2*S[1])));
C[23]=+S[4]*(S[7]*(V[37]*(12*V[37]-24*V[38])+12*S[3]));
C[22]=+S[7]*(S[0]*(V[37]*(V[37]*(V[9]*(-12*V[11]-2*V[9])+8*S[0]-2*S[1])+
 V[38]*(4*(S[2]-S[1])-16*S[0]))+S[3]*(V[9]*(12*V[11]-2*V[9])+8*S[0]-2*
 S[1])));
C[21]=+S[7]*(S[0]*(V[37]*(16*V[37]-32*V[38])+16*S[3]));
C[20]=+S[7]*(4*(S[0]*(S[3]+S[6])+V[9]*(V[11]*(S[3]-S[6])))-8*V[38]*V[37]*
 S[0]);
C[19]=+S[5]*(S[4]*(V[9]*(V[9]*(V[37]*(4*V[38]-2*V[37])-2*S[3])+V[11]*(4*(
 S[3]-S[6])))));
C[18]=+S[5]*(S[0]*(V[37]*(V[37]*(2*S[0]+S[1]-S[2])+V[38]*(2*(S[1]+S[2])-4*
 S[0]))+S[3]*(2*S[0]+S[1]-S[2])));
C[17]=+S[4]*(S[7]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[3])+V[11]*(8*(
 S[3]-S[6])))));
C[16]=+S[7]*(S[0]*(V[37]*(V[37]*(2*(S[1]-S[2])+4*S[0])+V[38]*(4*(S[1]+S[2])-
 8*S[0]))+S[3]*(2*(S[1]-S[2])+4*S[0])));
C[15]=+S[5]*(S[0]*(V[37]*(S[2]*(4*V[38]-2*V[37])+S[1]*(4*V[38]+2*V[37]))+
 S[3]*(2*(S[1]-S[2]))));
C[14]=+S[5]*(S[0]*(V[37]*(2*V[37]-4*V[38])+2*S[3]));
C[13]=+S[7]*(S[0]*(V[37]*(S[2]*(8*V[38]-4*V[37])+S[1]*(8*V[38]+4*V[37]))+
 S[3]*(4*(S[1]-S[2]))));
C[12]=+S[7]*(S[0]*(V[37]*(4*V[37]-8*V[38])+4*S[3]));
C[11]=+S[5]*(S[0]*(V[9]*(V[9]*(V[37]*(4*V[38]-2*V[37])-2*S[3])+V[11]*(6*(
 S[3]-S[6])))));
C[10]=+S[5]*(S[0]*(V[37]*(4*V[37]-8*V[38])+4*S[3]));
C[9]=+S[7]*(S[0]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[3])+V[11]*(12*(
 S[3]-S[6])))));
C[8]=+S[7]*(S[0]*(V[37]*(8*V[37]-16*V[38])+8*S[3]));
C[7]=+S[5]*(V[37]*(S[2]*(2*V[38]-V[37])+S[1]*(2*V[38]+V[37]))+S[3]*(S[1]-
 S[2]));
C[6]=+S[7]*(V[37]*(S[2]*(4*V[38]-2*V[37])+S[1]*(4*V[38]+2*V[37]))+S[3]*(2*(
 S[1]-S[2])));
C[5]=+S[5]*(V[9]*(V[11]*(2*(S[3]-S[6]))));
C[4]=+S[5]*(V[37]*(2*V[37]-4*V[38])+2*S[3]);
C[3]=+S[7]*(V[9]*(V[11]*(4*(S[3]-S[6]))));
C[2]=+S[7]*(V[37]*(4*V[37]-8*V[38])+4*S[3]);
S[8]=V[14]*V[14];
S[9]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[8]*S[9];
S[10]=V[52]*V[52];
S[11]=V[16]*V[16];
S[12]=V[1]*V[1]*V[1]*V[1];
C[0]=+32*S[10]*S[11]*S[12];
}
REAL F609_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           N2     !  N2                              
                        /==<======!==<==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         C     t     W+ |  e2     !  e2 |  W+    t     C             
       ==<==@==<==@-2<--@==>======!==>==@--<4-@==<==@==<==           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        B      !  B        |     |                
           G|P7   \========<======!==<========/    G|-PA             
            1              P6     !  P6             3                
            |                     !                 |                
         B  |              B      !  B              |  B             
       ==<==@==============<======!==<==============@==<==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[56];REAL S[3];REAL tmp[5];                                    
     
if(CalcConst) C609(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[1];
S[2]=V[53]*V[53];
tmp[0]=+DP[6]*(C[2]*(DP[6]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-
 DP[1]-DP[2]-DP[3]-DP[4])+S[2]*(-DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]))+
 DP[7]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+
 S[2]*(-DP[10]-DP[11])+DP[5]*(DP[10]+DP[11])))+DP[12]*(C[21]*(DP[1]+DP[3])+
 C[8]*(DP[2]+DP[4])+C[6]*(-DP[8]-DP[9]))+DP[13]*(C[21]*(DP[1]+DP[3])+C[8]*(
 DP[2]+DP[4])+C[6]*(-DP[8]-DP[9]))+DP[10]*(C[21]*(S[2]-DP[5])+C[4]*(DP[6]+
 DP[7])-C[52])+DP[11]*(C[8]*(S[2]-DP[5])+C[4]*(DP[6]+DP[7])-C[10])+DP[14]*(
 C[6]*(DP[5]-S[2])+C[7]))+DP[7]*(C[3]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+
 DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+S[2]*(DP[11]-DP[14])+DP[5]*(DP[14]-
 DP[11]))+C[20]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-
 DP[5]))+C[5]*(DP[14]-DP[11])-C[51]*DP[10])+C[9]*(DP[12]*(DP[8]-DP[2]-DP[4]+
 DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+S[2]*(DP[14]-DP[11])+DP[5]*(DP[11]-
 DP[14]))+C[22]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(
 DP[5]-S[2]))+C[11]*(DP[11]-DP[14])+C[53]*DP[10];
tmp[1]=+DP[0]*(DP[6]*(C[12]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+
 DP[4]-DP[8]-DP[9])+S[2]*(DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+C[8]*(DP[1]*
 (-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[14]*(DP[14]-
 DP[11])+C[10]*DP[10])+DP[0]*(C[8]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])+DP[10]*(S[2]-DP[5]))+C[12]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*(DP[5]-S[2]))+C[14]*DP[14]-C[10]*DP[10])+DP[12]*(C[23]*(
 DP[1]+DP[3])+C[13]*(DP[2]+DP[4])+C[16]*(-DP[8]-DP[9]))+DP[13]*(C[23]*(
 DP[1]+DP[3])+C[13]*(DP[2]+DP[4])+C[16]*(-DP[8]-DP[9]))+S[2]*(C[23]*DP[10]+
 C[13]*DP[11]-C[16]*DP[14])+DP[5]*(C[16]*DP[14]-C[23]*DP[10]-C[13]*DP[11])+
 C[18]*DP[14]-C[54]*DP[10]-C[15]*DP[11]);
tmp[2]=+DP[6]*(DP[6]*(C[8]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+
 DP[10]*(S[2]-DP[5]))+C[12]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+
 DP[11]*(S[2]-DP[5]))-C[10]*DP[10]-C[14]*DP[11])+DP[12]*(C[23]*(-DP[1]-
 DP[3])+C[16]*(-DP[2]-DP[4])+C[13]*(DP[8]+DP[9]))+DP[13]*(C[23]*(-DP[1]-
 DP[3])+C[16]*(-DP[2]-DP[4])+C[13]*(DP[8]+DP[9]))+S[2]*(C[13]*DP[14]-C[23]*
 DP[10]-C[16]*DP[11])+DP[5]*(C[23]*DP[10]+C[16]*DP[11]-C[13]*DP[14])+C[54]*
 DP[10]+C[18]*DP[11]-C[15]*DP[14])+C[17]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+
 DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+S[2]*(DP[11]-DP[14])+DP[5]*(DP[14]-
 DP[11]))+C[24]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-
 DP[5]))+C[19]*(DP[14]-DP[11])-C[55]*DP[10]+tmp[1];
tmp[3]=+DP[7]*(DP[0]*(S[2]*(C[25]*(DP[9]*(DP[0]+DP[6]-DP[7])+DP[3]*(DP[7]-
 DP[0])-DP[6]*DP[4])+C[28]*DP[9]-C[43]*DP[3]-C[27]*DP[4])+C[34]*(DP[8]*(
 DP[7]-DP[0]-DP[6])+DP[1]*(DP[0]-DP[7])+DP[6]*DP[2])+C[2]*(DP[9]*(DP[7]-
 DP[0]-DP[6])+DP[3]*(DP[0]-DP[7])+DP[6]*DP[4])+C[21]*(DP[3]-DP[8])+C[44]*
 DP[1]+C[36]*DP[2]+C[6]*DP[4]-C[8]*DP[9])+DP[6]*(S[2]*(C[25]*(DP[3]*(-DP[6]-
 DP[7])+DP[4]*(-DP[6]-DP[7]))+C[43]*DP[3]+C[28]*DP[4]-C[27]*DP[9])+DP[6]*(
 C[34]*(DP[1]+DP[2])+C[2]*(DP[3]+DP[4]))+DP[7]*(C[34]*(DP[1]+DP[2])+C[2]*(
 DP[3]+DP[4]))+C[21]*(-DP[2]-DP[3])+C[36]*DP[8]-C[44]*DP[1]-C[8]*DP[4]+C[6]*
 DP[9])+DP[7]*(S[2]*(C[26]*(DP[4]-DP[9])+C[41]*DP[3])+C[35]*(DP[8]-DP[2])+
 C[3]*(DP[9]-DP[4])-C[42]*DP[1]-C[20]*DP[3])+S[2]*(C[29]*(DP[9]-DP[4])-
 C[45]*DP[3])+C[37]*(DP[2]-DP[8])+C[9]*(DP[4]-DP[9])+C[46]*DP[1]+C[22]*
 DP[3]);
tmp[4]=+S[2]*(DP[12]*(DP[0]*(DP[6]*(S[2]*(C[30]*(DP[4]-DP[9])-C[28]*DP[3])+
 C[8]*(DP[3]-DP[2]+DP[8])+C[12]*(DP[9]-DP[4])+C[21]*DP[1])+DP[0]*(S[2]*(
 C[28]*DP[3]-C[30]*DP[9])+C[8]*(DP[8]-DP[3])+C[12]*DP[9]-C[21]*DP[1])+S[2]*(
 C[47]*DP[3]+C[31]*DP[4]-C[32]*DP[9])+C[39]*DP[8]-C[48]*DP[1]-C[38]*DP[2]-
 C[23]*DP[3]-C[13]*DP[4]+C[16]*DP[9])+DP[6]*(DP[6]*(S[2]*(C[28]*DP[3]+C[30]*
 DP[4])+C[8]*(-DP[2]-DP[3])-C[21]*DP[1]-C[12]*DP[4])+S[2]*(C[31]*DP[9]-
 C[47]*DP[3]-C[32]*DP[4])+C[48]*DP[1]+C[39]*DP[2]+C[23]*DP[3]+C[16]*DP[4]-
 C[38]*DP[8]-C[13]*DP[9])+S[2]*(C[33]*(DP[4]-DP[9])+C[49]*DP[3])+C[40]*(
 DP[8]-DP[2])+C[17]*(DP[9]-DP[4])-C[50]*DP[1]-C[24]*DP[3]+tmp[3])+DP[13]*(
 DP[7]*(C[2]*(DP[0]*(DP[8]*(DP[7]-DP[0]-DP[6])+DP[1]*(DP[0]-DP[7])+DP[6]*
 DP[2])+DP[6]*(DP[1]*(DP[6]+DP[7])+DP[2]*(DP[6]+DP[7])))+DP[1]*(C[21]*(
 DP[0]-DP[6])+C[22]-C[20]*DP[7])+DP[2]*(C[9]+C[6]*DP[0]-C[8]*DP[6]-C[3]*
 DP[7])+DP[8]*(C[6]*DP[6]-C[9]-C[8]*DP[0]+C[3]*DP[7]))+DP[0]*(DP[1]*(C[8]*(
 DP[6]-DP[0])-C[23])+DP[8]*(C[12]*(DP[0]+DP[6])+C[16])+DP[2]*(-C[13]-C[12]*
 DP[6]))+DP[6]*(DP[1]*(C[23]-C[8]*DP[6])+DP[2]*(C[16]-C[12]*DP[6])-C[13]*
 DP[8])+C[17]*(DP[8]-DP[2])-C[24]*DP[1]));
R=+DP[5]*(DP[7]*(DP[0]*(C[2]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+S[2]*(DP[14]-DP[10])+DP[5]*(DP[10]-
 DP[14]))+DP[6]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+
 DP[9])+S[2]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[7]*(DP[12]*(DP[1]+
 DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[2]*(DP[10]-DP[14])+
 DP[5]*(DP[14]-DP[10])))+DP[12]*(C[21]*(-DP[1]-DP[3])+C[6]*(-DP[2]-DP[4])+
 C[8]*(DP[8]+DP[9]))+DP[13]*(C[21]*(-DP[1]-DP[3])+C[6]*(-DP[2]-DP[4])+C[8]*(
 DP[8]+DP[9]))+DP[14]*(C[4]*(DP[7]-DP[0]-DP[6])+C[8]*(S[2]-DP[5])-C[10])+
 DP[10]*(C[21]*(DP[5]-S[2])+C[4]*(DP[0]-DP[7])+C[52])+DP[11]*(C[6]*(DP[5]-
 S[2])+C[7]+C[4]*DP[6]))+tmp[0])+tmp[2])+tmp[4];
R*=(N/D)*Q2[4]*Q2[1]*Q2[2];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*9)/(8);
 }
 return R;
}
