/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F682_out;
static void C682(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[10]*V[10];
S[1]=V[8]*V[8];
C[69]=+S[1]*(S[0]*(8*(S[0]+S[1])));
C[68]=+S[1]*(16*S[0]+8*S[1]);
S[2]=V[13]*V[13];
S[3]=V[10]*V[10]*V[10]*V[10];
S[4]=V[8]*V[8]*V[8]*V[8];
C[67]=+S[4]*(S[3]*(S[2]-S[0]));
C[66]=+S[1]*(S[0]*(2*(S[0]*(S[2]-S[0]-S[1])+S[2]*S[1])));
C[65]=+S[1]*(S[0]*(8*S[0]+12*S[1]));
C[64]=+S[1]*(24*S[0]+8*S[1]);
C[63]=+4*S[3]*S[4];
C[62]=+S[1]*(S[0]*(8*S[0]+4*S[1]));
C[61]=+S[4]*(S[0]*(2*S[2]-4*S[0]));
C[60]=+S[1]*(S[0]*(4*(S[2]-S[1])-8*S[0]));
C[59]=+8*S[0]*S[4];
C[58]=+S[1]*(S[0]*(8*(S[2]-S[1])));
C[57]=+S[4]*(S[0]*(2*(S[2]+S[0])));
C[56]=+8*S[4];
C[55]=+S[1]*(S[0]*(4*(S[2]+S[1])));
C[54]=+S[0]*(16*(S[0]+S[1]));
C[53]=+S[0]*(16*(S[2]-S[1]));
C[52]=+S[1]*(S[0]*(8*(S[2]+S[0])));
C[51]=+32*S[0]+16*S[1];
C[50]=+S[0]*(8*(S[2]+S[0]));
C[49]=+S[3]*(S[1]*(4*(S[2]-S[0])));
C[48]=+48*S[0]*S[1];
C[47]=+S[0]*(4*(S[0]*(S[2]-S[0]-S[1])+S[2]*S[1]));
C[46]=+S[0]*(8*(S[2]-S[0]));
C[45]=+S[0]*(16*S[0]+24*S[1]);
C[44]=+48*S[0]+16*S[1];
C[43]=+16*S[3]*S[1];
C[42]=+S[0]*(16*S[0]+8*S[1]);
C[41]=+S[0]*(8*(S[2]+S[1]));
C[40]=+S[1]*(S[0]*(8*S[2]-16*S[0]));
C[39]=+S[0]*(8*(S[2]-S[1])-16*S[0]);
C[38]=+32*S[0]*S[1];
C[37]=+32*S[0];
C[36]=+S[1]*(S[0]*(8*(S[2]-S[0])));
C[35]=+S[1]*(16*(S[2]-S[0]));
C[34]=+32*S[1];
C[33]=+8*S[2]*S[3]*S[1];
C[32]=+16*S[2]*S[0]*S[1];
C[31]=+8*(S[0]*(S[2]-S[0]-S[1])+S[2]*S[1]);
C[30]=+16*(S[2]-S[0]);
C[29]=+16*(S[0]-S[1]);
C[28]=+S[0]*(S[2]*(8*(S[0]+S[1])));
C[27]=+S[0]*(8*(S[2]-S[1]));
C[26]=+16*S[0];
C[25]=+8*S[2]*S[0];
C[24]=+16*S[2]*S[0];
C[23]=+S[1]*(S[0]*(4*(S[2]+S[0])));
C[22]=+S[3]*(S[1]*(2*(S[2]-S[0])));
C[21]=+24*S[0]*S[1];
C[20]=+8*S[3]*S[1];
C[19]=+S[1]*(S[0]*(4*S[2]-8*S[0]));
C[18]=+16*S[0]*S[1];
C[17]=+S[4]*(S[0]*(2*(S[2]-S[0])));
C[16]=+S[1]*(4*(S[0]*(S[2]-S[0]-S[1])+S[2]*S[1]));
C[15]=+S[1]*(8*(S[0]-S[1]));
C[14]=+S[1]*(S[0]*(4*(S[2]-S[0])));
C[13]=+S[1]*(8*(S[2]-S[0]));
C[12]=+16*S[1];
C[11]=+4*S[0]*S[4];
C[10]=+2*S[2]*S[3]*S[4];
C[9]=+S[1]*(S[0]*(S[2]*(4*(S[0]+S[1]))));
C[8]=+S[1]*(S[0]*(4*(S[2]-S[1])));
C[7]=+4*S[2]*S[3]*S[1];
C[6]=+8*S[0]*S[1];
C[5]=+2*S[2]*S[0]*S[4];
C[4]=+4*S[2]*S[0]*S[1];
C[3]=+4*S[2]*S[0]*S[4];
C[2]=+8*S[2]*S[0]*S[1];
S[5]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[5];
S[6]=V[52]*V[52]*V[52]*V[52];
S[7]=V[45]*V[45];
S[8]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8];
}
REAL F682_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           n2     !  n2                              
                        /==>======!==>==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         b     t     W+ |  E2     !  E2 |  W+    t     b             
       ==>==@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        b      !  b        |     |                
          W+|P7   \========>======!==>========/   W+|-PA             
            1              P6     !  P6             3                
            |                     !                 |                
         u  |              s      !  s              |  u             
       ==>==@==============>======!==>==============@==>==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[70];REAL S[2];REAL tmp[5];                                    
     
if(CalcConst) C682(C);
N=+C[0];
S[0]=V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
tmp[0]=+DP[12]*(S[1]*(S[1]*(32*(DP[3]*(DP[6]+DP[7])+DP[4]*(DP[6]+DP[7])-
 DP[9]*DP[0])+C[37]*(-DP[3]-DP[4])-C[30]*DP[9])+DP[6]*(C[34]*(-DP[1]-DP[2])+
 C[29]*DP[4]-C[51]*DP[3]+C[26]*DP[9])+DP[7]*(C[34]*(-DP[1]-DP[2])+C[26]*
 DP[9]-C[44]*DP[3]-C[12]*DP[4])+DP[0]*(C[37]*DP[3]+C[34]*DP[8]-C[29]*DP[9])+
 C[38]*(DP[1]+DP[2])+C[54]*DP[3]-C[53]*DP[4]+C[35]*DP[8]+C[31]*DP[9])+DP[5]*
 (C[12]*(DP[6]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[7]*(DP[1]+DP[2]+DP[3]+DP[4])+
 DP[0]*(-DP[8]-DP[9]))+C[18]*(-DP[1]-DP[2]-DP[3]-DP[4])+C[13]*(-DP[8]-
 DP[9]))+DP[7]*(DP[3]*(C[37]*(-DP[6]-DP[7])+C[45]+C[26]*DP[0])+C[48]*DP[1]-
 C[25]*DP[4]-C[18]*DP[8]+C[27]*DP[9])+DP[6]*(C[18]*(DP[3]-DP[2]-DP[8])+C[6]*
 (-DP[4]-DP[9])+C[38]*DP[1])+DP[0]*(C[18]*(DP[8]-DP[3])+C[6]*DP[9]-C[38]*
 DP[1])+C[32]*DP[2]-C[43]*DP[1]-C[20]*DP[3]+C[2]*DP[4]-C[36]*DP[8]-C[14]*
 DP[9]);
tmp[1]=+DP[5]*(C[6]*(DP[6]*(DP[12]*(DP[2]+DP[4]+DP[8]+DP[9])+DP[13]*(DP[2]+
 DP[4]+DP[8]+DP[9])+DP[5]*(-DP[11]-DP[14]))+DP[0]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[10]*DP[7]+DP[14]*DP[5])+DP[7]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5]))+DP[12]*(DP[1]*(C[18]*(DP[0]-
 DP[6])+C[20]-C[21]*DP[7])+DP[3]*(C[18]*(DP[0]-DP[6])+C[20]-C[21]*DP[7])+
 C[2]*(-DP[2]-DP[4])+C[14]*(DP[8]+DP[9]))+DP[13]*(DP[1]*(C[18]*(DP[0]-
 DP[6])+C[20]-C[21]*DP[7])+DP[3]*(C[18]*(DP[0]-DP[6])+C[20]-C[21]*DP[7])+
 C[2]*(-DP[2]-DP[4])+C[14]*(DP[8]+DP[9]))+DP[10]*(DP[5]*(C[18]*(DP[6]-
 DP[0])+C[21]*DP[7]-C[20])+DP[7]*(C[18]*(-DP[6]-DP[7])+C[65])+C[59]*(DP[6]-
 DP[0])-C[63])+DP[14]*(C[11]*(DP[0]-DP[6])+C[8]*DP[7]-C[17]-C[14]*DP[5])+
 DP[11]*(C[3]+C[2]*DP[5]-C[11]*DP[6]-C[4]*DP[7]))+DP[7]*(DP[12]*(DP[1]*(
 C[38]*(DP[6]+DP[7])-C[43]-C[18]*DP[0])+DP[3]*(C[18]*(DP[6]+DP[7])-C[20]-
 C[6]*DP[0])+C[2]*(DP[2]-DP[8])+C[4]*(DP[4]-DP[9]))+DP[13]*(DP[1]*(C[18]*(
 DP[6]+DP[7])-C[20]-C[6]*DP[0])+C[4]*(DP[2]-DP[8])));
tmp[2]=+DP[12]*(S[1]*(DP[3]*(DP[6]*(C[26]*(S[1]+DP[6])+C[37]*DP[7]-C[42])+
 DP[7]*(C[26]*(S[1]+DP[7])+C[39])+C[46]*S[1]-C[47])+DP[4]*(S[1]*(C[24]-
 C[26]*DP[6])+C[41]*DP[6]-C[28]+C[24]*DP[7])+DP[9]*(C[24]*(-S[1]-DP[7])+
 C[28]-C[25]*DP[6])+DP[1]*(C[18]*(-DP[6]-DP[7])-C[36])+DP[2]*(C[18]*DP[6]-
 C[32])+C[32]*DP[8])+DP[6]*(C[6]*(DP[5]*(DP[1]-DP[2]+DP[3]-DP[4])-DP[6]*
 DP[3])+DP[1]*(C[43]-C[18]*DP[6]-C[38]*DP[7])+DP[3]*(C[20]-C[18]*DP[7])+
 C[2]*(DP[8]-DP[2])+C[4]*(DP[9]-DP[4]))+DP[7]*(DP[1]*(C[6]*DP[5]-C[40]-
 C[18]*DP[7])+DP[3]*(C[6]*(DP[5]-DP[7])-C[19])+C[32]*(DP[8]-DP[2])+C[2]*(
 DP[9]-DP[4]))+DP[5]*(C[2]*(DP[2]+DP[4]-DP[8]-DP[9])+C[14]*(DP[1]+DP[3]))+
 C[33]*(DP[2]-DP[8])+C[7]*(DP[4]-DP[9])+C[49]*DP[1]+C[22]*DP[3]);
tmp[3]=+DP[7]*(DP[5]*(C[6]*(DP[6]*(DP[13]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[10]*(
 S[1]-DP[5]+DP[6])+DP[11]*(DP[5]-S[1]))+DP[7]*(DP[10]*(S[1]-DP[5]+DP[7])+
 DP[13]*(DP[1]+DP[3])))+C[2]*(DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[11]*(S[1]-
 DP[5]+DP[7])+DP[14]*(DP[5]-S[1]-DP[7]))+DP[10]*(DP[6]*(C[18]*DP[7]-C[62])+
 C[14]*(S[1]-DP[5])+C[60]*DP[7]-C[66])+DP[6]*(C[55]*DP[11]-C[4]*DP[14])+
 DP[13]*(C[14]*(DP[1]+DP[3]))+C[9]*(DP[14]-DP[11]))+DP[13]*(DP[1]*(DP[6]*(
 C[6]*(-S[1]-DP[6])+C[20]-C[18]*DP[7])+DP[7]*(C[6]*(-S[1]-DP[7])-C[19])+
 C[22]-C[14]*S[1])+DP[2]*(S[1]*(C[6]*DP[6]-C[2])+C[7]-C[4]*DP[6]-C[2]*
 DP[7])+DP[8]*(C[2]*(S[1]+DP[7])+C[4]*DP[6]-C[7]))+tmp[2])+DP[6]*(DP[5]*(
 DP[6]*(C[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-
 S[1]))+C[11]*DP[11])+C[23]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+
 DP[11]*(S[1]-DP[5]))-C[57]*DP[11])+S[1]*(DP[12]*(DP[4]*(S[1]*(C[50]-C[26]*
 DP[6])+C[6]*DP[6]-C[23])+DP[2]*(C[18]*DP[6]-C[52]))+DP[2]*(DP[13]*(C[6]*
 DP[6]-C[23]))));
tmp[4]=+DP[5]*(DP[7]*(DP[0]*(DP[12]*(DP[1]*(C[18]*(-DP[6]-DP[7])+C[20]+C[6]*
 DP[0])+DP[3]*(C[18]*(-DP[6]-DP[7])+C[20]+C[6]*DP[0])+C[4]*(DP[8]-DP[2]-
 DP[4]+DP[9]))+DP[13]*(DP[1]*(C[18]*(-DP[6]-DP[7])+C[20]+C[6]*DP[0])+DP[3]*(
 C[18]*(-DP[6]-DP[7])+C[20]+C[6]*DP[0])+C[4]*(DP[8]-DP[2]-DP[4]+DP[9]))+
 DP[10]*(DP[5]*(C[18]*(DP[6]+DP[7])-C[20]-C[6]*DP[0])+C[59]*(DP[6]+DP[7])-
 C[63]-C[11]*DP[0])+DP[5]*(C[4]*(DP[11]-DP[14]))+C[5]*(DP[11]-DP[14]))+
 DP[6]*(DP[12]*(C[4]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[1]*(C[6]*DP[6]-C[20]+
 C[18]*DP[7])+DP[3]*(C[6]*DP[6]-C[20]+C[18]*DP[7]))+DP[13]*(C[4]*(DP[2]+
 DP[4]-DP[8]-DP[9])+DP[1]*(C[6]*DP[6]-C[20]+C[18]*DP[7])+DP[3]*(C[6]*DP[6]-
 C[20]+C[18]*DP[7]))+DP[10]*(DP[5]*(C[20]-C[6]*DP[6]-C[18]*DP[7])+C[63]-
 C[11]*DP[6]-C[59]*DP[7])+DP[5]*(C[4]*(DP[14]-DP[11]))+C[5]*(DP[14]-
 DP[11]))+DP[7]*(C[2]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-
 DP[8]-DP[9])+DP[5]*(DP[14]-DP[11]))+DP[7]*(C[6]*(DP[1]*(DP[12]+DP[13])+
 DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])-C[11]*DP[10])+C[19]*(DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[3]*(DP[14]-DP[11])-C[61]*
 DP[10])+C[7]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+
 DP[9])+DP[5]*(DP[11]-DP[14]))+C[22]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*DP[5])+C[10]*(DP[11]-DP[14])+C[67]*DP[10]));
R=+S[1]*(DP[0]*(S[1]*(DP[5]*(C[12]*(DP[13]*(DP[6]*(DP[1]+DP[2]+DP[3]+DP[4])+
 DP[7]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[0]*(-DP[8]-DP[9]))+S[1]*(DP[6]*(DP[10]+
 DP[11])+DP[7]*(DP[10]+DP[11])-DP[14]*DP[0])+DP[5]*(DP[6]*(-DP[10]-DP[11])+
 DP[7]*(-DP[10]-DP[11])+DP[14]*DP[0]))+C[18]*(DP[13]*(-DP[1]-DP[2]-DP[3]-
 DP[4])+DP[10]*(DP[0]-S[1]+DP[5])+DP[11]*(DP[5]-S[1]))+DP[14]*(C[13]*(DP[5]-
 S[1])+C[6]*(DP[6]+DP[7])+C[16]-C[15]*DP[0])+DP[10]*(C[69]-C[68]*DP[6]-
 C[64]*DP[7])+DP[11]*(C[15]*DP[6]-C[58]-C[56]*DP[7])+DP[13]*(C[13]*(-DP[8]-
 DP[9])))+DP[13]*(S[1]*(C[12]*(DP[1]*(-DP[6]-DP[7])+DP[2]*(-DP[6]-DP[7])+
 DP[8]*DP[0])+C[18]*(DP[1]+DP[2])+C[13]*DP[8])+DP[1]*(C[18]*(DP[6]-DP[0])+
 C[21]*DP[7]-C[20])+DP[8]*(C[6]*(DP[0]-DP[6]-DP[7])-C[14])+DP[2]*(C[2]-C[6]*
 DP[6]))+tmp[0])+tmp[1])+tmp[3])+tmp[4];
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}
