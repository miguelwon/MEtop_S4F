/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F827_out;
static void C827(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[38]*V[38];
S[1]=V[37]*V[37];
S[2]=V[11]*V[11];
S[3]=V[9]*V[9];
S[4]=V[8]*V[8]*V[8]*V[8];
C[65]=+S[4]*(S[3]*(V[9]*(V[9]*(V[37]*(4*V[38]-2*V[37])-2*S[0])+V[11]*(4*(
 S[0]-S[1])))+S[2]*(V[37]*(4*V[38]+6*V[37])+6*S[0])));
C[64]=+S[4]*(V[11]*(V[11]*(V[37]*(8*V[38]+12*V[37])+12*S[0])+V[9]*(4*(S[1]-
 S[0]))));
C[63]=+S[4]*(V[9]*(V[9]*(V[37]*(4*V[38]-2*V[37])-2*S[0])+V[11]*(4*(S[0]-
 S[1])))+S[2]*(V[37]*(4*V[38]+6*V[37])+6*S[0]));
C[62]=+S[4]*(V[37]*(S[3]*(18*V[38]-9*V[37])+S[2]*(6*V[38]+9*V[37]))+S[0]*(9*
 (S[2]-S[3])));
C[61]=+S[4]*(S[3]*(V[9]*(V[9]*(V[37]*(4*V[38]-2*V[37])-2*S[0])+V[11]*(4*(
 S[0]-S[1])))+S[2]*(V[37]*(6*V[37]-4*V[38])+6*S[0])));
S[5]=V[11]*V[11]*V[11];
C[60]=+S[4]*(V[9]*(V[9]*(V[9]*(V[9]*(V[37]*(2*V[38]-V[37])-S[0])+V[11]*(
 S[1]-S[0]))+S[2]*(V[37]*(V[37]-2*V[38])+S[0]))+S[5]*(S[0]-S[1])));
C[59]=+S[4]*(V[11]*(V[11]*(V[37]*(12*V[37]-8*V[38])+12*S[0])+V[9]*(4*(S[1]-
 S[0]))));
C[58]=+S[4]*(V[9]*(V[9]*(V[37]*(2*V[38]-V[37])-S[0])+V[11]*(6*(S[0]-S[1])))+
 S[2]*(V[37]*(7*V[37]-6*V[38])+7*S[0]));
C[57]=+S[4]*(V[37]*(20*V[37]-40*V[38])+20*S[0]);
S[6]=V[8]*V[8];
C[56]=+S[6]*(S[3]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[0])+V[11]*(16*(
 S[0]-S[1])))+S[2]*(V[37]*(16*V[38]+24*V[37])+24*S[0])));
C[55]=+S[6]*(S[3]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[0])+V[11]*(16*(
 S[0]-S[1])))+S[2]*(V[37]*(24*V[37]-16*V[38])+24*S[0])));
C[54]=+S[3]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[0])+V[11]*(16*(S[0]-
 S[1])))+S[2]*(V[37]*(16*V[38]+24*V[37])+24*S[0]));
C[53]=+S[3]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[0])+V[11]*(16*(S[0]-
 S[1])))+S[2]*(V[37]*(24*V[37]-16*V[38])+24*S[0]));
C[52]=+S[6]*(V[9]*(V[9]*(4*(V[9]*(S[1]*(V[11]-V[9])+S[0]*(-V[11]-V[9]))+
 S[2]*(S[0]+S[1]))+V[37]*(V[38]*(8*(S[3]-S[2]))))+S[5]*(4*(S[0]-S[1]))));
C[51]=+V[9]*(V[9]*(4*(V[9]*(S[1]*(V[11]-V[9])+S[0]*(-V[11]-V[9]))+S[2]*(
 S[0]+S[1]))+V[37]*(V[38]*(8*(S[3]-S[2]))))+S[5]*(4*(S[0]-S[1])));
C[50]=+S[6]*(V[11]*(V[11]*(V[37]*(32*V[38]+48*V[37])+48*S[0])+V[9]*(16*(
 S[1]-S[0]))));
C[49]=+S[6]*(V[11]*(V[11]*(V[37]*(48*V[37]-32*V[38])+48*S[0])+V[9]*(16*(
 S[1]-S[0]))));
C[48]=+V[11]*(V[11]*(V[37]*(32*V[38]+48*V[37])+48*S[0])+V[9]*(16*(S[1]-
 S[0])));
C[47]=+V[11]*(V[11]*(V[37]*(48*V[37]-32*V[38])+48*S[0])+V[9]*(16*(S[1]-
 S[0])));
C[46]=+S[6]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[0])+V[11]*(16*(S[0]-
 S[1])))+S[2]*(V[37]*(16*V[38]+24*V[37])+24*S[0]));
C[45]=+S[6]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[0])+V[11]*(24*(S[0]-
 S[1])))+S[2]*(V[37]*(28*V[37]-24*V[38])+28*S[0]));
C[44]=+V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[0])+V[11]*(16*(S[0]-S[1])))+
 S[2]*(V[37]*(16*V[38]+24*V[37])+24*S[0]);
C[43]=+V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[0])+V[11]*(24*(S[0]-S[1])))+
 S[2]*(V[37]*(28*V[37]-24*V[38])+28*S[0]);
C[42]=+S[6]*(V[37]*(S[3]*(72*V[38]-36*V[37])+S[2]*(24*V[38]+36*V[37]))+S[0]*
 (36*(S[2]-S[3])));
C[41]=+S[6]*(V[37]*(80*V[37]-160*V[38])+80*S[0]);
C[40]=+V[37]*(S[3]*(72*V[38]-36*V[37])+S[2]*(24*V[38]+36*V[37]))+S[0]*(36*(
 S[2]-S[3]));
C[39]=+V[37]*(80*V[37]-160*V[38])+80*S[0];
C[38]=+S[6]*(V[9]*(V[9]*(V[9]*(V[9]*(V[37]*(4*V[37]-8*V[38])+4*S[0])+V[11]*(
 20*(S[1]-S[0])))+S[2]*(V[37]*(8*V[38]-20*V[37])-20*S[0]))+S[5]*(4*(S[0]-
 S[1]))));
C[37]=+S[6]*(V[9]*(8*(S[1]*(V[9]-V[11])+S[0]*(V[11]+V[9]))-16*V[38]*V[37]*
 V[9]));
C[36]=+S[6]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[0])+V[11]*(24*(S[1]-
 S[0])))+S[2]*(V[37]*(44*V[37]-24*V[38])+44*S[0]));
C[35]=+S[6]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[0])+V[11]*(16*(S[0]-
 S[1])))+S[2]*(V[37]*(24*V[37]-16*V[38])+24*S[0]));
C[34]=+S[6]*(V[37]*(8*V[37]-16*V[38])+8*S[0]);
C[33]=+S[6]*(V[37]*(72*V[37]-144*V[38])+72*S[0]);
C[32]=+S[6]*(V[37]*(64*V[37]-128*V[38])+64*S[0]);
C[31]=+V[9]*(V[9]*(V[9]*(V[9]*(V[37]*(4*V[37]-8*V[38])+4*S[0])+V[11]*(20*(
 S[1]-S[0])))+S[2]*(V[37]*(8*V[38]-20*V[37])-20*S[0]))+S[5]*(4*(S[0]-
 S[1])));
C[30]=+V[9]*(8*(S[1]*(V[9]-V[11])+S[0]*(V[11]+V[9]))-16*V[38]*V[37]*V[9]);
C[29]=+V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[0])+V[11]*(24*(S[1]-S[0])))+
 S[2]*(V[37]*(44*V[37]-24*V[38])+44*S[0]);
C[28]=+V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[0])+V[11]*(16*(S[0]-S[1])))+
 S[2]*(V[37]*(24*V[37]-16*V[38])+24*S[0]);
C[27]=+V[37]*(8*V[37]-16*V[38])+8*S[0];
C[26]=+V[37]*(72*V[37]-144*V[38])+72*S[0];
C[25]=+V[37]*(64*V[37]-128*V[38])+64*S[0];
C[24]=+S[6]*(S[3]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[0])+V[11]*(8*(
 S[0]-S[1])))+S[2]*(V[37]*(8*V[38]+12*V[37])+12*S[0])));
C[23]=+S[6]*(S[3]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[0])+V[11]*(8*(
 S[0]-S[1])))+S[2]*(V[37]*(12*V[37]-8*V[38])+12*S[0])));
C[22]=+S[6]*(V[9]*(V[9]*(2*(V[9]*(S[1]*(V[11]-V[9])+S[0]*(-V[11]-V[9]))+
 S[2]*(S[0]+S[1]))+V[37]*(V[38]*(4*(S[3]-S[2]))))+S[5]*(2*(S[0]-S[1]))));
C[21]=+S[6]*(V[11]*(V[11]*(V[37]*(16*V[38]+24*V[37])+24*S[0])+V[9]*(8*(S[1]-
 S[0]))));
C[20]=+S[6]*(V[11]*(V[11]*(V[37]*(24*V[37]-16*V[38])+24*S[0])+V[9]*(8*(S[1]-
 S[0]))));
C[19]=+S[6]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[0])+V[11]*(8*(S[0]-
 S[1])))+S[2]*(V[37]*(8*V[38]+12*V[37])+12*S[0]));
C[18]=+S[6]*(V[9]*(V[9]*(V[37]*(4*V[38]-2*V[37])-2*S[0])+V[11]*(12*(S[0]-
 S[1])))+S[2]*(V[37]*(14*V[37]-12*V[38])+14*S[0]));
C[17]=+S[6]*(V[37]*(S[3]*(36*V[38]-18*V[37])+S[2]*(12*V[38]+18*V[37]))+S[0]*
 (18*(S[2]-S[3])));
C[16]=+S[6]*(V[37]*(40*V[37]-80*V[38])+40*S[0]);
C[15]=+S[4]*(V[9]*(V[9]*(V[9]*(V[9]*(V[37]*(V[37]-2*V[38])+S[0])+V[11]*(5*(
 S[1]-S[0])))+S[2]*(V[37]*(2*V[38]-5*V[37])-5*S[0]))+S[5]*(S[0]-S[1])));
C[14]=+S[6]*(V[9]*(V[9]*(V[9]*(V[9]*(V[37]*(2*V[37]-4*V[38])+2*S[0])+V[11]*(
 10*(S[1]-S[0])))+S[2]*(V[37]*(4*V[38]-10*V[37])-10*S[0]))+S[5]*(2*(S[0]-
 S[1]))));
C[13]=+S[4]*(V[9]*(2*(S[1]*(V[9]-V[11])+S[0]*(V[11]+V[9]))-4*V[38]*V[37]*
 V[9]));
C[12]=+S[6]*(V[9]*(4*(S[1]*(V[9]-V[11])+S[0]*(V[11]+V[9]))-8*V[38]*V[37]*
 V[9]));
C[11]=+S[4]*(V[9]*(V[9]*(V[37]*(2*V[38]-V[37])-S[0])+V[11]*(6*(S[1]-S[0])))+
 S[2]*(V[37]*(11*V[37]-6*V[38])+11*S[0]));
C[10]=+S[6]*(V[9]*(V[9]*(V[37]*(4*V[38]-2*V[37])-2*S[0])+V[11]*(12*(S[1]-
 S[0])))+S[2]*(V[37]*(22*V[37]-12*V[38])+22*S[0]));
C[9]=+S[4]*(V[9]*(V[9]*(V[37]*(4*V[38]-2*V[37])-2*S[0])+V[11]*(4*(S[0]-
 S[1])))+S[2]*(V[37]*(6*V[37]-4*V[38])+6*S[0]));
C[8]=+S[4]*(V[37]*(2*V[37]-4*V[38])+2*S[0]);
C[7]=+S[6]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[0])+V[11]*(8*(S[0]-
 S[1])))+S[2]*(V[37]*(12*V[37]-8*V[38])+12*S[0]));
C[6]=+S[6]*(V[37]*(4*V[37]-8*V[38])+4*S[0]);
C[5]=+S[4]*(V[37]*(18*V[37]-36*V[38])+18*S[0]);
C[4]=+S[6]*(V[37]*(36*V[37]-72*V[38])+36*S[0]);
C[3]=+S[4]*(V[37]*(16*V[37]-32*V[38])+16*S[0]);
C[2]=+S[6]*(V[37]*(32*V[37]-64*V[38])+32*S[0]);
S[7]=V[14]*V[14];
S[8]=V[2]*V[2]*V[2]*V[2];
C[1]=+3*S[7]*S[8];
S[9]=V[52]*V[52];
S[10]=V[16]*V[16];
S[11]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[9]*S[10]*S[11];
}
REAL F827_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           N2     !  N2                              
                        /==<======!==<==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         G     t     W+ |  e2     !  e2 |  W+    t     G             
       -1---@==<==@-3<--@==>======!==>==@--<4-@==<==@---1-           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        B      !  B        |     |                
           t|P7   \========<======!==<========/    c|-PA             
            |              P6     !  P6             |                
            |                     !                 |                
         G  |              c      !  c              |  G             
       -2---@==============>======!==>==============@---2-           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[66];REAL S[3];REAL tmp[3];                                    
     
if(CalcConst) C827(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[1];
S[2]=V[53]*V[53];
tmp[0]=+DP[6]*(DP[7]*(DP[12]*(C[6]*(-DP[1]-DP[3])+C[4]*(DP[2]+DP[4])+C[2]*(-
 DP[8]-DP[9]))+DP[13]*(C[6]*(-DP[1]-DP[3])+C[4]*(DP[2]+DP[4])+C[2]*(-DP[8]-
 DP[9]))+S[2]*(C[4]*DP[11]-C[6]*DP[10]-C[2]*DP[14])+DP[5]*(C[6]*DP[10]-C[4]*
 DP[11]+C[2]*DP[14])+C[8]*DP[10]-C[5]*DP[11]+C[3]*DP[14])+DP[12]*(DP[2]*(
 C[18]+C[6]*DP[6])+DP[4]*(C[18]+C[6]*DP[6])+C[19]*(DP[1]+DP[3])+C[7]*(-
 DP[8]-DP[9]))+DP[13]*(DP[2]*(C[18]+C[6]*DP[6])+DP[4]*(C[18]+C[6]*DP[6])+
 C[19]*(DP[1]+DP[3])+C[7]*(-DP[8]-DP[9]))+DP[11]*(DP[6]*(C[6]*(S[2]-DP[5])-
 C[8])+C[18]*(S[2]-DP[5])-C[58])+DP[10]*(C[19]*(S[2]-DP[5])-C[63])+DP[14]*(
 C[7]*(DP[5]-S[2])+C[9]))+DP[7]*(DP[7]*(C[4]*(DP[1]*(-DP[12]-DP[13])+DP[3]*
 (-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[5]*DP[10])+C[17]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[62]*DP[10]);
tmp[1]=+S[2]*(DP[12]*(DP[0]*(S[2]*(DP[9]*(C[27]*(DP[0]-DP[6])+C[29]+C[26]*
 DP[7])+DP[4]*(-C[47]-C[27]*DP[6]-C[39]*DP[7])+DP[3]*(-C[48]-C[27]*DP[7]))+
 DP[7]*(C[34]*DP[1]+C[41]*DP[2]+C[6]*DP[3]+C[16]*DP[4]-C[33]*DP[8]-C[4]*
 DP[9])+DP[6]*(C[34]*(DP[2]+DP[8])+C[6]*(DP[4]+DP[9]))+DP[0]*(-C[34]*DP[8]-
 C[6]*DP[9])+C[50]*DP[1]+C[49]*DP[2]+C[21]*DP[3]+C[20]*DP[4]-C[36]*DP[8]-
 C[10]*DP[9])+DP[6]*(DP[7]*(S[2]*(C[26]*DP[4]-C[27]*DP[3]-C[25]*DP[9])+
 C[34]*DP[1]-C[33]*DP[2]+C[6]*DP[3]-C[4]*DP[4]+C[32]*DP[8]+C[2]*DP[9])+S[2]*
 (DP[4]*(C[43]+C[27]*DP[6])+C[44]*DP[3]-C[28]*DP[9])+DP[2]*(-C[45]-C[34]*
 DP[6])+DP[4]*(-C[18]-C[6]*DP[6])+C[35]*DP[8]-C[46]*DP[1]-C[19]*DP[3]+C[7]*
 DP[9])+DP[7]*(DP[3]*(S[2]*(-C[40]-C[26]*DP[7])+C[17]+C[4]*DP[7])+DP[1]*(
 C[42]+C[33]*DP[7])))+DP[13]*(DP[0]*(DP[8]*(C[6]*(DP[6]-DP[0])-C[10]-C[4]*
 DP[7])+DP[2]*(C[20]+C[6]*DP[6]+C[16]*DP[7])+DP[1]*(C[21]+C[6]*DP[7]))+
 DP[6]*(DP[2]*(-C[18]-C[6]*DP[6]-C[4]*DP[7])+DP[1]*(C[6]*DP[7]-C[19])+DP[8]*
 (C[7]+C[2]*DP[7]))+DP[1]*(DP[7]*(C[17]+C[4]*DP[7]))));
tmp[2]=+DP[0]*(DP[5]*(C[12]*(DP[6]*(DP[12]*(-DP[2]-DP[4]-DP[8]-DP[9])+
 DP[13]*(-DP[2]-DP[4]-DP[8]-DP[9])+S[2]*(-DP[11]-DP[14])+DP[5]*(DP[11]+
 DP[14]))+DP[0]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[2]-
 DP[5])))+DP[12]*(C[24]*(-DP[1]-DP[3])+C[23]*(-DP[2]-DP[4])+C[14]*(-DP[8]-
 DP[9]))+DP[13]*(C[24]*(-DP[1]-DP[3])+C[23]*(-DP[2]-DP[4])+C[14]*(-DP[8]-
 DP[9]))+DP[14]*(C[14]*(DP[5]-S[2])+C[13]*(DP[6]-DP[0])+C[15])+DP[11]*(
 C[23]*(DP[5]-S[2])+C[61]+C[13]*DP[6])+DP[10]*(C[24]*(DP[5]-S[2])+C[65]))+
 S[2]*(DP[12]*(S[2]*(DP[9]*(C[30]*(DP[0]-DP[6])-C[31])+DP[4]*(-C[53]-C[30]*
 DP[6])-C[54]*DP[3])+DP[6]*(C[37]*(DP[2]+DP[8])+C[12]*(DP[4]+DP[9]))+DP[0]*
 (-C[37]*DP[8]-C[12]*DP[9])+C[56]*DP[1]+C[55]*DP[2]+C[24]*DP[3]+C[23]*DP[4]+
 C[38]*DP[8]+C[14]*DP[9])+DP[13]*(DP[8]*(C[12]*(DP[6]-DP[0])+C[14])+DP[2]*(
 C[23]+C[12]*DP[6])+C[24]*DP[1])))+DP[6]*(DP[5]*(DP[6]*(C[12]*(DP[2]*(
 DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))-C[13]*DP[11])+
 C[22]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))-
 C[60]*DP[11])+S[2]*(DP[12]*(DP[4]*(S[2]*(C[51]+C[30]*DP[6])-C[22]-C[12]*
 DP[6])+DP[2]*(-C[52]-C[37]*DP[6]))+DP[2]*(DP[13]*(-C[22]-C[12]*DP[6]))));
R=+DP[7]*(DP[5]*(DP[0]*(C[6]*(DP[6]*(DP[12]*(-DP[2]-DP[4]-DP[8]-DP[9])+
 DP[13]*(-DP[2]-DP[4]-DP[8]-DP[9])+S[2]*(-DP[11]-DP[14])+DP[5]*(DP[11]+
 DP[14]))+DP[0]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[2]-
 DP[5]))+DP[7]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-
 S[2])))+DP[7]*(C[16]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*
 (DP[5]-S[2]))+C[4]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(
 S[2]-DP[5]))+C[8]*DP[10]+C[57]*DP[11]-C[5]*DP[14])+DP[12]*(C[21]*(-DP[1]-
 DP[3])+C[20]*(-DP[2]-DP[4])+C[10]*(DP[8]+DP[9]))+DP[13]*(C[21]*(-DP[1]-
 DP[3])+C[20]*(-DP[2]-DP[4])+C[10]*(DP[8]+DP[9]))+DP[14]*(C[10]*(S[2]-
 DP[5])+C[8]*(DP[6]-DP[0])-C[11])+DP[11]*(C[20]*(DP[5]-S[2])+C[59]+C[8]*
 DP[6])+DP[10]*(C[21]*(DP[5]-S[2])+C[64]))+tmp[0])+tmp[1])+tmp[2];
R*=(N/D)*Q1[5]*Q2[1]*Q2[2]*Q1[7];
 if(cb_coeff_out)
 {
  cb_coeff_out[2] += (R*81)/(64);
 }
 return R;
}