/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F806_out;
static void C806(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[36]*V[36];
S[1]=V[11]*V[11]*V[11]*V[11];
S[2]=V[8]*V[8]*V[8]*V[8];
C[53]=+S[2]*(S[1]*(V[35]*(V[35]-2*V[36])+S[0]));
S[3]=V[11]*V[11];
C[52]=+S[2]*(S[3]*(V[35]*(32*V[36]+16*V[35])+16*S[0]));
C[51]=+S[2]*(S[3]*(V[35]*(4*V[36]+6*V[35])+6*S[0]));
C[50]=+S[2]*(S[3]*(V[35]*(8*V[36]+12*V[35])+12*S[0]));
C[49]=+S[2]*(S[3]*(V[35]*(20*V[36]+14*V[35])+14*S[0]));
S[4]=V[8]*V[8];
C[48]=+S[1]*(S[4]*(V[35]*(4*V[35]-8*V[36])+4*S[0]));
C[47]=+S[4]*(S[3]*(V[35]*(128*V[36]+64*V[35])+64*S[0]));
C[46]=+S[4]*(S[3]*(V[35]*(32*V[36]+48*V[35])+48*S[0]));
C[45]=+S[1]*(V[35]*(4*V[35]-8*V[36])+4*S[0]);
C[44]=+S[3]*(V[35]*(128*V[36]+64*V[35])+64*S[0]);
C[43]=+S[3]*(V[35]*(32*V[36]+48*V[35])+48*S[0]);
C[42]=+S[4]*(S[3]*(V[35]*(80*V[36]+56*V[35])+56*S[0]));
C[41]=+S[3]*(V[35]*(80*V[36]+56*V[35])+56*S[0]);
C[40]=+S[3]*(V[35]*(16*V[36]+24*V[35])+24*S[0]);
C[39]=+S[1]*(S[4]*(V[35]*(20*V[35]-40*V[36])+20*S[0]));
C[38]=+S[4]*(S[3]*(V[35]*(96*V[36]+48*V[35])+48*S[0]));
C[37]=+S[4]*(S[3]*(V[35]*(8*V[35]-16*V[36])+8*S[0]));
C[36]=+S[4]*(S[3]*(V[35]*(80*V[35]-96*V[36])+80*S[0]));
C[35]=+S[4]*(V[35]*(96*V[35]-192*V[36])+96*S[0]);
C[34]=+S[4]*(V[35]*(64*V[35]-128*V[36])+64*S[0]);
C[33]=+S[1]*(V[35]*(20*V[35]-40*V[36])+20*S[0]);
C[32]=+S[3]*(V[35]*(96*V[36]+48*V[35])+48*S[0]);
C[31]=+V[35]*(16*V[35]-32*V[36])+16*S[0];
C[30]=+S[3]*(V[35]*(8*V[35]-16*V[36])+8*S[0]);
C[29]=+V[35]*(48*V[35]-96*V[36])+48*S[0];
C[28]=+S[3]*(V[35]*(80*V[35]-96*V[36])+80*S[0]);
C[27]=+V[35]*(96*V[35]-192*V[36])+96*S[0];
C[26]=+V[35]*(32*V[35]-64*V[36])+32*S[0];
C[25]=+V[35]*(64*V[35]-128*V[36])+64*S[0];
C[24]=+S[1]*(S[4]*(V[35]*(2*V[35]-4*V[36])+2*S[0]));
C[23]=+S[4]*(S[3]*(V[35]*(64*V[36]+32*V[35])+32*S[0]));
C[22]=+S[4]*(S[3]*(V[35]*(16*V[36]+24*V[35])+24*S[0]));
C[21]=+S[4]*(S[3]*(V[35]*(40*V[36]+28*V[35])+28*S[0]));
C[20]=+S[4]*(S[3]*(V[35]*(8*V[36]+12*V[35])+12*S[0]));
C[19]=+S[2]*(S[1]*(V[35]*(5*V[35]-10*V[36])+5*S[0]));
C[18]=+S[2]*(S[3]*(V[35]*(24*V[36]+12*V[35])+12*S[0]));
C[17]=+S[2]*(V[35]*(4*V[35]-8*V[36])+4*S[0]);
C[16]=+S[1]*(S[4]*(V[35]*(10*V[35]-20*V[36])+10*S[0]));
C[15]=+S[4]*(S[3]*(V[35]*(48*V[36]+24*V[35])+24*S[0]));
C[14]=+S[4]*(V[35]*(8*V[35]-16*V[36])+8*S[0]);
C[13]=+S[2]*(S[3]*(V[35]*(2*V[35]-4*V[36])+2*S[0]));
C[12]=+S[2]*(V[35]*(12*V[35]-24*V[36])+12*S[0]);
C[11]=+S[4]*(S[3]*(V[35]*(4*V[35]-8*V[36])+4*S[0]));
C[10]=+S[4]*(V[35]*(24*V[35]-48*V[36])+24*S[0]);
C[9]=+S[2]*(S[3]*(V[35]*(20*V[35]-24*V[36])+20*S[0]));
C[8]=+S[2]*(V[35]*(24*V[35]-48*V[36])+24*S[0]);
C[7]=+S[4]*(S[3]*(V[35]*(40*V[35]-48*V[36])+40*S[0]));
C[6]=+S[4]*(V[35]*(48*V[35]-96*V[36])+48*S[0]);
C[5]=+S[2]*(V[35]*(8*V[35]-16*V[36])+8*S[0]);
C[4]=+S[4]*(V[35]*(16*V[35]-32*V[36])+16*S[0]);
C[3]=+S[2]*(V[35]*(16*V[35]-32*V[36])+16*S[0]);
C[2]=+S[4]*(V[35]*(32*V[35]-64*V[36])+32*S[0]);
S[5]=V[14]*V[14];
S[6]=V[2]*V[2]*V[2]*V[2];
C[1]=+48*S[5]*S[6];
S[7]=V[52]*V[52];
S[8]=V[15]*V[15];
S[9]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[7]*S[8]*S[9];
}
REAL F806_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                  !  u                 G             
                                 /!==>==============@---1-           
                                 |!  P5             |  P1            
                                 |!                 |                
                           N2    |!  N2             |                
                        /==<=====+!==<==\          t|-PA             
                        |  P3    |!  P3 |           |                
                        |        |!     |           |                
         G     t     W+ |  e2    |!  e2 |  W+    t  |  G             
       -1---@==<==@-3<--@==>=====+!==>==@--<4-@==<==@---2-           
         P1 |  P8 |  P9    P4    |!  P4   -PC | -PB    P2            
            |     |              |!           |                      
            |     |        B     |!  B        |                      
           t|P7   \========<=====+!==<========/                      
            |              P6    |!  P6                              
            |                    |!                                  
         G  |              u     |!                                  
       -2---@==============>=====/!                                  
         P2                P5     !                                  
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[54];REAL S[3];REAL tmp[4];                                    
     
if(CalcConst) C806(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[1];
S[2]=V[53]*V[53];
tmp[0]=+DP[7]*(DP[0]*(C[14]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*(DP[5]-S[2]))+C[10]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[2]))+C[17]*DP[10]+C[12]*DP[14])+DP[7]*(C[10]*(DP[1]*(
 DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-DP[5]))+C[4]*(DP[8]*(
 DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[2]-DP[5]))-C[12]*DP[10]-
 C[5]*DP[14])+DP[12]*(C[23]*(DP[1]+DP[3])+C[22]*(DP[2]+DP[4])+C[11]*(DP[8]+
 DP[9]))+DP[13]*(C[23]*(DP[1]+DP[3])+C[22]*(DP[2]+DP[4])+C[11]*(DP[8]+
 DP[9]))+S[2]*(C[23]*DP[10]+C[22]*DP[11]+C[11]*DP[14])+DP[5]*(-C[23]*DP[10]-
 C[22]*DP[11]-C[11]*DP[14])-C[52]*DP[10]-C[50]*DP[11]-C[13]*DP[14])+DP[0]*(
 DP[0]*(C[14]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[2]-
 DP[5]))-C[17]*DP[14])+C[15]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[2]))+C[18]*DP[14])+C[16]*(DP[8]*(DP[12]+DP[13])+DP[9]*(
 DP[12]+DP[13])+DP[14]*(S[2]-DP[5]))-C[19]*DP[14];
tmp[1]=+DP[6]*(DP[7]*(DP[6]*(C[4]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])+DP[10]*(S[2]-DP[5]))+C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*(DP[5]-S[2]))+C[3]*DP[14]-C[5]*DP[10])+DP[7]*(C[4]*(DP[2]*(
 DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))+C[2]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[3]*DP[14]-
 C[5]*DP[11])+C[21]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+
 DP[3]+DP[4])+S[2]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+C[7]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[49]*(-DP[10]-
 DP[11])+C[9]*DP[14])+DP[6]*(DP[6]*(C[4]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[5]*DP[11])+C[20]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[51]*DP[11])+C[24]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[53]*
 DP[11])+DP[7]*(DP[7]*(DP[7]*(C[4]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*(DP[5]-S[2]))+C[5]*DP[10])+C[20]*(DP[1]*(-DP[12]-DP[13])+
 DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[51]*DP[10])+C[24]*(DP[1]*(-
 DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[53]*DP[10]);
tmp[2]=+DP[0]*(DP[6]*(S[2]*(DP[4]*(C[31]*(DP[7]-DP[0])+C[44]+C[29]*DP[6])+
 DP[9]*(C[30]-C[29]*DP[0]+C[26]*DP[6]+C[27]*DP[7])+DP[3]*(C[43]+C[31]*
 DP[7]))+DP[7]*(C[4]*(-DP[1]-DP[2])+C[14]*(-DP[3]-DP[4])-C[35]*DP[8]-C[6]*
 DP[9])+DP[0]*(C[4]*DP[2]+C[14]*DP[4]+C[6]*DP[8]+C[10]*DP[9])+DP[6]*(-C[6]*
 DP[2]-C[10]*DP[4]-C[2]*DP[8]-C[4]*DP[9])-C[46]*DP[1]-C[47]*DP[2]-C[22]*
 DP[3]-C[23]*DP[4]-C[37]*DP[8]-C[11]*DP[9])+DP[7]*(S[2]*(DP[3]*(C[44]-C[31]*
 DP[0]+C[29]*DP[7])+DP[9]*(C[30]-C[29]*DP[0]+C[26]*DP[7])+C[43]*DP[4])+
 DP[0]*(C[4]*DP[1]+C[14]*DP[3]+C[6]*DP[8]+C[10]*DP[9])+DP[7]*(-C[6]*DP[1]-
 C[10]*DP[3]-C[2]*DP[8]-C[4]*DP[9])-C[47]*DP[1]-C[46]*DP[2]-C[23]*DP[3]-
 C[22]*DP[4]-C[37]*DP[8]-C[11]*DP[9])+DP[0]*(DP[9]*(S[2]*(C[31]*DP[0]-
 C[32])+C[15]-C[14]*DP[0])+DP[8]*(C[38]-C[4]*DP[0]))+DP[9]*(C[33]*S[2]-
 C[16])-C[39]*DP[8]);
tmp[3]=+S[2]*(DP[12]*(DP[6]*(DP[7]*(S[2]*(DP[9]*(C[25]*(-DP[6]-DP[7])-
 C[28])+DP[3]*(C[41]+C[26]*DP[6])+DP[4]*(C[41]+C[26]*DP[7]))+DP[6]*(C[2]*(
 DP[9]-DP[1])+C[34]*DP[8]-C[4]*DP[3])+DP[7]*(C[2]*(DP[9]-DP[2])+C[34]*DP[8]-
 C[4]*DP[4])+C[42]*(-DP[1]-DP[2])+C[21]*(-DP[3]-DP[4])+C[36]*DP[8]+C[7]*
 DP[9])+DP[4]*(DP[6]*(S[2]*(-C[40]-C[26]*DP[6])+C[20]+C[4]*DP[6])+C[24]-
 C[45]*S[2])+DP[2]*(DP[6]*(C[22]+C[2]*DP[6])+C[48]))+DP[7]*(DP[3]*(DP[7]*(
 S[2]*(-C[40]-C[26]*DP[7])+C[20]+C[4]*DP[7])+C[24]-C[45]*S[2])+DP[1]*(DP[7]*
 (C[22]+C[2]*DP[7])+C[48]))+tmp[2])+DP[13]*(DP[0]*(DP[6]*(DP[2]*(C[14]*(
 DP[0]-DP[7])-C[23]-C[10]*DP[6])+DP[8]*(C[10]*DP[0]-C[11]-C[4]*DP[6]-C[6]*
 DP[7])+DP[1]*(-C[22]-C[14]*DP[7]))+DP[7]*(DP[1]*(C[14]*DP[0]-C[23]-C[10]*
 DP[7])+DP[8]*(C[10]*DP[0]-C[11]-C[4]*DP[7])-C[22]*DP[2])+DP[8]*(DP[0]*(
 C[15]-C[14]*DP[0])-C[16]))+DP[6]*(DP[7]*(DP[8]*(C[2]*(DP[6]+DP[7])+C[7])+
 DP[1]*(-C[21]-C[4]*DP[6])+DP[2]*(-C[21]-C[4]*DP[7]))+DP[2]*(DP[6]*(C[20]+
 C[4]*DP[6])+C[24]))+DP[1]*(DP[7]*(DP[7]*(C[20]+C[4]*DP[7])+C[24]))));
R=+DP[5]*(DP[0]*(DP[6]*(DP[7]*(C[14]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+
 DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+S[2]*(DP[10]+DP[11])+DP[5]*(-DP[10]-
 DP[11]))+C[6]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[2]-
 DP[5]))+C[17]*(-DP[10]-DP[11])-C[8]*DP[14])+DP[0]*(C[14]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[10]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[17]*DP[11]+C[12]*
 DP[14])+DP[6]*(C[10]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(
 S[2]-DP[5]))+C[4]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(
 S[2]-DP[5]))-C[12]*DP[11]-C[5]*DP[14])+DP[12]*(C[22]*(DP[1]+DP[3])+C[23]*(
 DP[2]+DP[4])+C[11]*(DP[8]+DP[9]))+DP[13]*(C[22]*(DP[1]+DP[3])+C[23]*(DP[2]+
 DP[4])+C[11]*(DP[8]+DP[9]))+S[2]*(C[22]*DP[10]+C[23]*DP[11]+C[11]*DP[14])+
 DP[5]*(-C[22]*DP[10]-C[23]*DP[11]-C[11]*DP[14])-C[50]*DP[10]-C[52]*DP[11]-
 C[13]*DP[14])+tmp[0])+tmp[1])+tmp[3];
R*=(N/D)*Q1[5]*Q2[1]*Q2[2]*Q1[6];
 if(cb_coeff_out)
 {
 }
 return R;
}
