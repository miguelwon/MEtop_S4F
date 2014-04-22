/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F106_out;
static void C106(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[13]*V[13]*V[13]*V[13]*V[13]*V[13]*V[13]*V[13];
S[1]=V[8]*V[8];
C[48]=+4*S[0]*S[1];
S[2]=V[13]*V[13]*V[13]*V[13]*V[13]*V[13];
C[47]=+16*S[2]*S[1];
C[46]=+4*S[0];
C[45]=+8*S[2];
C[44]=+16*S[2];
S[3]=V[8]*V[8]*V[8]*V[8];
C[43]=+S[0]*S[3];
S[4]=V[13]*V[13];
C[42]=+S[2]*(S[1]*(2*S[4]+4*S[1]));
S[5]=V[13]*V[13]*V[13]*V[13];
C[41]=+S[5]*(8*S[4]-16*S[1]);
C[40]=+4*S[2]*S[3];
C[39]=+S[5]*(S[1]*(8*(S[4]+S[1])));
C[38]=+2*S[0]*S[1];
C[37]=+S[5]*(8*S[4]-4*S[1]);
C[36]=+S[4]*(16*S[4]-8*S[1]);
C[35]=+S[5]*(S[1]*(4*(S[4]+S[1])));
C[34]=+S[4]*(16*(S[4]-S[1]));
C[33]=+32*(S[4]-S[1]);
C[32]=+8*S[2]*S[1];
C[31]=+S[5]*(8*S[4]+4*S[1]);
C[30]=+S[4]*(16*S[4]+8*S[1]);
C[29]=+2*S[2]*S[3];
C[28]=+S[5]*(S[1]*(4*S[4]+8*S[1]));
C[27]=+S[1]*(S[4]*(16*S[4]+8*S[1]));
C[26]=+S[4]*(8*S[4]-16*S[1]);
C[25]=+4*S[2]*S[1];
C[24]=+16*S[5];
C[23]=+S[1]*(S[4]*(8*(S[4]+S[1])));
C[22]=+S[1]*(16*(S[4]+S[1]));
C[21]=+16*S[4]-32*S[1];
C[20]=+16*S[5]*S[1];
C[19]=+S[4]*(16*(S[4]+S[1]));
C[18]=+32*S[4];
C[17]=+4*S[5]*S[3];
C[16]=+S[1]*(S[4]*(8*S[4]+16*S[1]));
C[15]=+S[1]*(32*S[4]+16*S[1]);
C[14]=+32*S[4]*S[1];
C[13]=+8*S[5]*S[1];
C[12]=+16*S[4]*S[1];
C[11]=+16*(S[4]+S[1]);
C[10]=+8*S[5];
C[9]=+16*S[4];
C[8]=+4*S[5]*S[1];
C[7]=+16*(S[4]-S[1]);
C[6]=+8*S[4]*S[1];
C[5]=+64*S[1];
C[4]=+16*S[3];
C[3]=+16*S[1];
C[2]=+32*S[1];
S[6]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+48*S[6];
S[7]=V[52]*V[52];
S[8]=V[50]*V[50];
S[9]=V[46]*V[46];
S[10]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[7]*S[8]*S[9]*S[10];
}
REAL F106_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                  !  b                 u             
         u                 b     /!==>==============@==>==           
       ==>==@==============>==\  |!  P6             |  P1            
         P1 |              P5 |  |!                 |                
            |                 |  |!  n2             |                
            |              n2 |/=+!==>==\         W+|-PA             
          W+|P7         /==>==+/ |!  P3 |           3                
            1           |  P3 |  |!     |           |                
            |           |     |  |!  E2 |  W+    t  |  d             
         d  |  t     W+ |  E2 | /+!==<==@-->4-@==>==@==>==           
       ==>==@==>==@-2>--@==<==+=/|!  P4   -PC | -PB    P2            
         P2    P8 |  P9    P4 |  |!           |                      
                  |           |  |!  b        |                      
                  |        b  \==+!==>========/                      
                  \========>=====/!  P5                              
                           P6     !                                  
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[49];REAL S[3];REAL tmp[6];                                    
     
if(CalcConst) C106(C);
N=-C[0];
S[0]=V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
tmp[0]=+DP[5]*(C[3]*(DP[1]*(DP[6]*(DP[12]+DP[13])+DP[7]*(DP[12]+DP[13])+
 DP[8]*(DP[10]+DP[11])+DP[9]*(DP[10]+DP[11])-DP[14]*DP[1])+DP[2]*(DP[6]*(
 DP[12]+DP[13])+DP[7]*(DP[12]+DP[13])+DP[8]*(DP[10]+DP[11])+DP[9]*(DP[10]+
 DP[11])-DP[14]*DP[2])+DP[3]*(DP[6]*(DP[12]+DP[13])+DP[7]*(DP[12]+DP[13])+
 DP[8]*(DP[10]+DP[11])+DP[9]*(DP[10]+DP[11])-DP[14]*DP[3])+DP[4]*(DP[6]*(
 DP[12]+DP[13])+DP[7]*(DP[12]+DP[13])+DP[8]*(DP[10]+DP[11])+DP[9]*(DP[10]+
 DP[11])-DP[14]*DP[4]))+C[2]*(DP[14]*(DP[1]*(-DP[2]-DP[3]-DP[4])+DP[2]*(-
 DP[3]-DP[4])+DP[5]*DP[0]-DP[4]*DP[3])+DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*
 (-DP[12]-DP[13]))+DP[5]*(DP[6]*(-DP[10]-DP[11])+DP[7]*(-DP[10]-DP[11])))+
 C[12]*(DP[5]*(DP[6]+DP[7]+DP[10]+DP[11])+DP[0]*(DP[7]+DP[11]))+DP[6]*(
 C[23]-C[4]*DP[10]-C[22]*DP[11])+DP[7]*(C[27]-C[22]*DP[10]-C[15]*DP[11])+
 DP[0]*(C[4]*DP[14]-C[20])+C[23]*DP[10]-C[39]-C[20]*DP[5]+C[27]*DP[11]);
tmp[1]=+S[1]*(S[1]*(32*(DP[3]*(DP[8]*(DP[10]+DP[11])+DP[12]*(DP[6]+DP[7])+
 DP[14]*(-DP[1]-DP[2]))+DP[4]*(DP[8]*(DP[10]+DP[11])+DP[12]*(DP[6]+DP[7])+
 DP[14]*(-DP[1]-DP[2]))+DP[0]*(DP[14]*DP[5]-DP[12]*DP[9]-DP[13]*DP[8]))+
 C[9]*(DP[5]*(-DP[6]-DP[7]-DP[10]-DP[11])+DP[1]*(DP[9]+DP[13])+DP[2]*(DP[9]+
 DP[13])+DP[3]*(-DP[8]-DP[12])+DP[4]*(-DP[8]-DP[12]))+C[24]*DP[5])+DP[1]*(
 C[2]*(DP[14]*(DP[1]+DP[3]+DP[4])+DP[8]*(-DP[10]-DP[11])+DP[12]*(-DP[6]-
 DP[7]))+C[9]*(DP[0]*(-DP[9]-DP[13])+DP[3]*(DP[7]+DP[11])+DP[4]*(DP[7]+
 DP[11]))+C[7]*(DP[9]*(DP[10]+DP[11])+DP[13]*(DP[6]+DP[7]))+C[10]*(-DP[9]-
 DP[13])+C[5]*DP[14]*DP[2]-C[24]*DP[4])+DP[2]*(C[2]*(DP[14]*(DP[2]+DP[3]+
 DP[4])+DP[8]*(-DP[10]-DP[11])+DP[12]*(-DP[6]-DP[7]))+C[9]*(DP[3]*(-DP[6]-
 DP[10])+DP[4]*(-DP[6]-DP[10]))+C[3]*(DP[9]*(-DP[10]-DP[11])+DP[13]*(-DP[6]-
 DP[7]))+C[24]*DP[3])+DP[5]*(DP[0]*(C[9]*(DP[6]+DP[10])-C[24]-C[2]*DP[14])+
 DP[6]*(C[34]-C[33]*DP[10]-C[21]*DP[11])+DP[7]*(C[26]-C[21]*DP[10]+C[2]*
 DP[11])+C[34]*DP[10]-C[41]+C[26]*DP[11])+DP[4]*(DP[8]*(C[11]*(-DP[10]-
 DP[11])+C[10]+C[9]*DP[0])+DP[12]*(C[11]*(-DP[6]-DP[7])+C[10]+C[9]*DP[0]))+
 DP[3]*(C[3]*(DP[8]*(-DP[10]-DP[11])+DP[12]*(-DP[6]-DP[7])))+DP[0]*(DP[8]*(
 C[5]*DP[12]+C[2]*DP[13])+C[2]*DP[12]*DP[9]));
tmp[2]=+DP[5]*(C[6]*(DP[1]*(DP[7]*(DP[1]+DP[2]+DP[4]+DP[12]+DP[13])+DP[11]*(
 DP[1]+DP[2]+DP[4]+DP[8]+DP[9])+DP[0]*(-DP[8]-DP[9]-DP[12]-DP[13])+DP[6]*(
 DP[12]-DP[2]-DP[4]+DP[13])+DP[10]*(DP[8]-DP[2]-DP[4]+DP[9]))+DP[3]*(DP[7]*(
 DP[2]+DP[3]+DP[4]+DP[12]+DP[13])+DP[11]*(DP[2]+DP[3]+DP[4]+DP[8]+DP[9])+
 DP[0]*(-DP[8]-DP[9]-DP[12]-DP[13])+DP[6]*(DP[12]-DP[2]-DP[4]+DP[13])+
 DP[10]*(DP[8]-DP[2]-DP[4]+DP[9]))+DP[2]*(DP[0]*(DP[8]+DP[9]+DP[12]+DP[13])+
 DP[6]*(-DP[2]-DP[12]-DP[13])+DP[10]*(-DP[2]-DP[8]-DP[9])+DP[7]*(-DP[12]-
 DP[13])+DP[11]*(-DP[8]-DP[9]))+DP[4]*(DP[0]*(DP[8]+DP[9]+DP[12]+DP[13])+
 DP[6]*(-DP[4]-DP[12]-DP[13])+DP[10]*(-DP[4]-DP[8]-DP[9])+DP[7]*(-DP[12]-
 DP[13])+DP[11]*(-DP[8]-DP[9])))+C[8]*(DP[1]*(-DP[8]-DP[9]-DP[12]-DP[13])+
 DP[2]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[3]*(-DP[8]-DP[9]-DP[12]-DP[13])+DP[4]*
 (DP[8]+DP[9]+DP[12]+DP[13]))+DP[5]*(DP[7]*(C[12]*(DP[10]-DP[0])+C[14]*
 DP[11]-C[20])+DP[11]*(C[12]*(DP[6]-DP[0])-C[20])+C[13]*(-DP[6]-DP[10])+
 C[32]+C[20]*DP[0])+DP[0]*(C[13]*(DP[0]-DP[6]-DP[10])+C[23]*(-DP[7]-DP[11])+
 C[39])+DP[6]*(C[13]*DP[10]-C[35]-C[12]*DP[4]*DP[2]+C[23]*DP[11])+DP[7]*(
 C[12]*DP[3]*DP[1]-C[28]+C[23]*DP[10]+C[16]*DP[11])+DP[10]*(-C[35]-C[12]*
 DP[4]*DP[2])+DP[11]*(C[12]*DP[3]*DP[1]-C[28])+C[42]);
S[2]=DP[4]*DP[4];
tmp[3]=+DP[1]*(S[1]*(DP[4]*(S[1]*(DP[7]*(C[24]-C[9]*DP[10]-C[18]*DP[11])+
 DP[6]*(C[10]-C[9]*DP[11])+C[10]*DP[10]-C[45]+C[24]*DP[11])+DP[6]*(C[34]*
 DP[10]-C[37]+C[24]*DP[11])+DP[7]*(C[24]*DP[10]-C[31]+C[19]*DP[11])+C[46]-
 C[37]*DP[10]-C[31]*DP[11])+DP[7]*(DP[3]*(S[1]*(C[10]-C[9]*DP[10]-C[18]*
 DP[11])+C[12]*DP[10]-C[13]+C[14]*DP[11])+DP[1]*(C[12]*DP[10]-C[13]+C[14]*
 DP[11])+DP[2]*(C[14]*DP[11]-C[13]))+DP[11]*(DP[3]*(S[1]*(C[10]-C[9]*DP[6])+
 C[12]*DP[6]-C[13])+DP[1]*(C[12]*DP[6]-C[13])-C[13]*DP[2])+DP[2]*(DP[6]*(
 C[13]-C[14]*DP[10])+C[13]*DP[10]))+DP[5]*(DP[7]*(DP[11]*(C[12]*(-DP[1]-
 DP[2]-DP[4])-C[14]*DP[3])+C[8]*(DP[1]+DP[2]+DP[4])+DP[3]*(C[13]-C[12]*
 DP[10])-C[6]*DP[10]*DP[1])+C[8]*(DP[2]*(DP[11]-DP[6]-DP[10])+DP[4]*(DP[11]-
 DP[6]-DP[10])+DP[11]*DP[1])+DP[6]*(C[12]*(DP[10]*(DP[2]+DP[4])-DP[11]*
 DP[3])-C[6]*DP[11]*DP[1])+C[13]*DP[11]*DP[3])+DP[2]*(C[32]*(DP[6]+DP[7]+
 DP[10]+DP[11])+C[20]*(DP[6]*(-DP[10]-DP[11])+DP[7]*(-DP[10]-DP[11]))-
 C[48])+DP[4]*(C[25]*(DP[6]+DP[7]+DP[10]+DP[11])+C[13]*(DP[6]*(-DP[10]-
 DP[11])+DP[7]*(-DP[10]-DP[11]))-C[38]));
tmp[4]=+DP[2]*(S[1]*(DP[3]*(S[1]*(DP[6]*(C[18]*DP[10]-C[24]+C[9]*DP[11])+
 DP[7]*(C[9]*DP[10]-C[10])+C[45]-C[24]*DP[10]-C[10]*DP[11])+C[8]*(DP[6]-
 DP[7]+DP[10]-DP[11])+C[12]*(DP[11]*DP[7]-DP[10]*DP[6]))+DP[4]*(DP[6]*(S[1]*
 (C[18]*DP[10]-C[10]+C[9]*DP[11])+C[13]-C[14]*DP[10]-C[12]*DP[11])+DP[10]*(
 S[1]*(C[9]*DP[7]-C[10])+C[13]-C[12]*DP[7]))+DP[2]*(DP[6]*(C[13]-C[14]*
 DP[10]-C[12]*DP[11])+DP[10]*(C[13]-C[12]*DP[7])))+DP[5]*(DP[6]*(DP[2]*(
 C[12]*DP[10]-C[8]+C[6]*DP[11])+DP[4]*(C[14]*DP[10]-C[13]+C[12]*DP[11])+
 DP[3]*(C[12]*DP[10]-C[8]))+DP[10]*(DP[2]*(C[6]*DP[7]-C[8])+DP[4]*(C[12]*
 DP[7]-C[13])-C[8]*DP[3])+DP[3]*(DP[7]*(C[8]-C[12]*DP[11])+C[8]*DP[11]))+
 DP[3]*(C[25]*(DP[6]+DP[7]+DP[10]+DP[11])+C[13]*(DP[6]*(-DP[10]-DP[11])+
 DP[7]*(-DP[10]-DP[11]))-C[38]))+DP[5]*(DP[3]*(DP[4]*(C[8]*(DP[7]-DP[6]-
 DP[10]+DP[11])+C[12]*(DP[10]*DP[6]-DP[11]*DP[7]))+DP[3]*(DP[7]*(C[8]-C[6]*
 DP[10]-C[12]*DP[11])+DP[11]*(C[8]-C[6]*DP[6])))+S[2]*(DP[6]*(C[12]*DP[10]-
 C[8]+C[6]*DP[11])+DP[10]*(C[6]*DP[7]-C[8])))+tmp[3];
tmp[5]=+S[1]*(DP[0]*(S[1]*(DP[1]*(C[12]*(DP[2]*(DP[6]-DP[7]+DP[10]-DP[11])+
 DP[7]*(-DP[1]-DP[3]-DP[12])+DP[8]*(DP[0]-DP[10]-DP[11])+DP[11]*(-DP[1]-
 DP[3])+DP[12]*(DP[0]-DP[6]))+DP[4]*(C[36]*(-DP[6]-DP[10])+C[30]*(-DP[7]-
 DP[11])+C[44]+C[24]*DP[0])+C[6]*(DP[9]*(DP[0]-DP[10]-DP[11])+DP[13]*(DP[0]-
 DP[6]-DP[7]))+C[13]*(DP[8]+DP[12])+C[8]*(DP[9]+DP[13]))+DP[2]*(C[12]*(
 DP[6]*(DP[2]+DP[4]+DP[12])+DP[8]*(DP[10]-DP[0]+DP[11])+DP[10]*(DP[2]+
 DP[4])+DP[12]*(DP[7]-DP[0]))+C[6]*(DP[3]*(DP[6]-DP[7]+DP[10]-DP[11])+DP[9]*
 (DP[10]-DP[0]+DP[11])+DP[13]*(DP[6]-DP[0]+DP[7]))+C[13]*(-DP[8]-DP[12])+
 C[8]*(-DP[9]-DP[13]))+C[6]*(DP[3]*(DP[8]*(DP[0]-DP[10]-DP[11])+DP[12]*(
 DP[0]-DP[6]-DP[7]))+DP[4]*(DP[8]*(DP[10]-DP[0]+DP[11])+DP[12]*(DP[6]-DP[0]+
 DP[7])))+C[8]*(DP[3]*(DP[8]+DP[12])+DP[4]*(-DP[8]-DP[12]))+tmp[0]+tmp[1])+
 DP[1]*(DP[2]*(C[20]*(DP[6]-DP[0]+DP[7]+DP[10]+DP[11])-C[47])+DP[4]*(C[13]*(
 DP[6]-DP[0]+DP[7]+DP[10]+DP[11])-C[32]))+DP[2]*(DP[3]*(C[13]*(DP[6]-DP[0]+
 DP[7]+DP[10]+DP[11])-C[32]))+tmp[2])+tmp[4]);
R=+DP[5]*(DP[0]*(C[13]*(DP[1]*(DP[2]*(DP[0]-DP[6]-DP[7]-DP[10]-DP[11])+
 DP[4]*(DP[0]-DP[6]-DP[7]-DP[10]-DP[11]))+DP[3]*(DP[2]*(DP[0]-DP[6]-DP[7]-
 DP[10]-DP[11])+DP[4]*(DP[0]-DP[6]-DP[7]-DP[10]-DP[11]))+DP[5]*(DP[0]*(
 DP[6]-DP[0]+DP[7]+DP[10]+DP[11])+DP[6]*(-DP[10]-DP[11])+DP[7]*(-DP[10]-
 DP[11])))+C[17]*(DP[0]*(DP[6]-DP[0]+DP[7]+DP[10]+DP[11])+DP[6]*(-DP[10]-
 DP[11])+DP[7]*(-DP[10]-DP[11]))+DP[5]*(C[25]*(DP[6]+DP[7]+DP[10]+DP[11])-
 C[38]-C[32]*DP[0])+C[32]*(DP[1]*(DP[2]+DP[4])+DP[3]*(DP[2]+DP[4]))+C[29]*(
 DP[6]+DP[7]+DP[10]+DP[11])-C[43]-C[40]*DP[0])+DP[1]*(DP[2]*(C[25]*(-DP[6]-
 DP[7]-DP[10]-DP[11])+C[13]*(DP[6]*(DP[10]+DP[11])+DP[7]*(DP[10]+DP[11]))+
 C[38])+DP[4]*(C[25]*(-DP[6]-DP[7]-DP[10]-DP[11])+C[13]*(DP[6]*(DP[10]+
 DP[11])+DP[7]*(DP[10]+DP[11]))+C[38]))+DP[3]*(DP[2]*(C[25]*(-DP[6]-DP[7]-
 DP[10]-DP[11])+C[13]*(DP[6]*(DP[10]+DP[11])+DP[7]*(DP[10]+DP[11]))+C[38])+
 DP[4]*(C[25]*(-DP[6]-DP[7]-DP[10]-DP[11])+C[13]*(DP[6]*(DP[10]+DP[11])+
 DP[7]*(DP[10]+DP[11]))+C[38])))+tmp[5];
R*=(N/D)*Q1[4]*Q1[1]*Q2[2]*Q1[5]*Q1[3];
 if(cb_coeff_out)
 {
 }
 return R;
}
