/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F358_out;
static void C358(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[13]*V[13];
S[1]=V[8]*V[8];
S[2]=V[10]*V[10];
C[69]=+S[1]*(S[2]*(8*(S[0]-S[1])));
S[3]=V[8]*V[8]*V[8]*V[8];
C[68]=+8*S[3];
C[67]=+S[3]*(S[2]*(2*(S[0]+S[2])));
C[66]=+S[1]*(S[2]*(4*(S[0]+S[1])));
C[65]=+S[1]*(S[2]*(8*(S[2]+S[1])));
S[4]=V[10]*V[10]*V[10]*V[10];
C[64]=+S[3]*(S[4]*(S[0]-S[2]));
C[63]=+S[1]*(S[2]*(2*(S[2]*(S[0]-S[2]-S[1])+S[0]*S[1])));
C[62]=+S[1]*(S[2]*(8*S[2]+12*S[1]));
C[61]=+S[1]*(24*S[2]+8*S[1]);
C[60]=+S[3]*(S[2]*(2*S[0]-4*S[2]));
C[59]=+S[1]*(S[2]*(4*(S[0]-S[1])-8*S[2]));
C[58]=+S[1]*(16*S[2]+8*S[1]);
C[57]=+4*S[4]*S[3];
C[56]=+S[1]*(S[2]*(8*S[2]+4*S[1]));
C[55]=+8*S[2]*S[3];
C[54]=+S[2]*(16*(S[0]-S[1]));
C[53]=+S[2]*(16*(S[2]+S[1]));
C[52]=+S[4]*(S[1]*(4*(S[0]-S[2])));
C[51]=+48*S[2]*S[1];
C[50]=+S[2]*(4*(S[2]*(S[0]-S[2]-S[1])+S[0]*S[1]));
C[49]=+S[2]*(8*(S[0]-S[2]));
C[48]=+S[2]*(16*S[2]+24*S[1]);
C[47]=+48*S[2]+16*S[1];
C[46]=+S[1]*(S[2]*(8*S[0]-16*S[2]));
C[45]=+S[2]*(8*(S[0]-S[1])-16*S[2]);
C[44]=+S[1]*(S[2]*(8*(S[0]+S[2])));
C[43]=+S[2]*(8*(S[0]+S[2]));
C[42]=+32*S[2]+16*S[1];
C[41]=+16*S[4]*S[1];
C[40]=+S[2]*(8*(S[0]+S[1]));
C[39]=+S[2]*(16*S[2]+8*S[1]);
C[38]=+32*S[2]*S[1];
C[37]=+32*S[2];
C[36]=+S[1]*(S[2]*(8*(S[0]-S[2])));
C[35]=+S[1]*(16*(S[0]-S[2]));
C[34]=+32*S[1];
C[33]=+8*S[0]*S[4]*S[1];
C[32]=+16*S[0]*S[2]*S[1];
C[31]=+8*(S[2]*(S[0]-S[2]-S[1])+S[0]*S[1]);
C[30]=+16*(S[0]-S[2]);
C[29]=+16*(S[2]-S[1]);
C[28]=+S[2]*(S[0]*(8*(S[2]+S[1])));
C[27]=+S[2]*(8*(S[0]-S[1]));
C[26]=+16*S[0]*S[2];
C[25]=+16*S[2];
C[24]=+8*S[0]*S[2];
C[23]=+S[4]*(S[1]*(2*(S[0]-S[2])));
C[22]=+24*S[2]*S[1];
C[21]=+S[1]*(S[2]*(4*S[0]-8*S[2]));
C[20]=+S[1]*(S[2]*(4*(S[0]+S[2])));
C[19]=+8*S[4]*S[1];
C[18]=+16*S[2]*S[1];
C[17]=+S[3]*(S[2]*(2*(S[0]-S[2])));
C[16]=+S[1]*(4*(S[2]*(S[0]-S[2]-S[1])+S[0]*S[1]));
C[15]=+S[1]*(8*(S[2]-S[1]));
C[14]=+S[1]*(S[2]*(4*(S[0]-S[2])));
C[13]=+S[1]*(8*(S[0]-S[2]));
C[12]=+16*S[1];
C[11]=+2*S[0]*S[4]*S[3];
C[10]=+S[1]*(S[2]*(S[0]*(4*(S[2]+S[1]))));
C[9]=+S[1]*(S[2]*(4*(S[0]-S[1])));
C[8]=+4*S[0]*S[4]*S[1];
C[7]=+4*S[0]*S[2]*S[3];
C[6]=+8*S[0]*S[2]*S[1];
C[5]=+4*S[2]*S[3];
C[4]=+8*S[2]*S[1];
C[3]=+2*S[0]*S[2]*S[3];
C[2]=+4*S[0]*S[2]*S[1];
S[5]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[5];
S[6]=V[52]*V[52]*V[52]*V[52];
S[7]=V[45]*V[45];
S[8]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8];
}
REAL F358_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         U                 S      !  S                 U             
       ==<==@==============<======!==<==============@==<==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              N2     !  N2             |                
          W+|P7         /==<======!==<==\         W+|-PA             
            1           |  P3     !  P3 |           3                
            |           |         !     |           |                
         B  |  t     W+ |  e2     !  e2 |  W+    t  |  B             
       ==<==@==<==@-2<--@==>======!==>==@--<4-@==<==@==<==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        B      !  B        |                      
                  \========<======!==<========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[70];REAL S[2];REAL tmp[5];                                    
     
if(CalcConst) C358(C);
N=+C[0];
S[0]=V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
tmp[0]=+DP[12]*(S[1]*(S[1]*(32*(DP[3]*(DP[6]+DP[7])+DP[4]*(DP[6]+DP[7])-
 DP[9]*DP[0])+C[37]*(-DP[3]-DP[4])-C[30]*DP[9])+DP[6]*(C[34]*(-DP[1]-DP[2])+
 C[25]*DP[9]-C[12]*DP[3]-C[47]*DP[4])+DP[7]*(C[34]*(-DP[1]-DP[2])+C[29]*
 DP[3]-C[42]*DP[4]+C[25]*DP[9])+DP[0]*(C[37]*DP[4]+C[34]*DP[8]-C[29]*DP[9])+
 C[38]*(DP[1]+DP[2])+C[53]*DP[4]-C[54]*DP[3]+C[35]*DP[8]+C[31]*DP[9])+DP[5]*
 (C[12]*(DP[6]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[7]*(DP[1]+DP[2]+DP[3]+DP[4])+
 DP[0]*(-DP[8]-DP[9]))+C[18]*(-DP[1]-DP[2]-DP[3]-DP[4])+C[13]*(-DP[8]-
 DP[9]))+DP[6]*(DP[4]*(C[37]*(-DP[6]-DP[7])+C[48]+C[25]*DP[0])+C[51]*DP[2]-
 C[24]*DP[3]-C[18]*DP[8]+C[27]*DP[9])+DP[7]*(C[18]*(DP[4]-DP[1]-DP[8])+C[4]*
 (-DP[3]-DP[9])+C[38]*DP[2])+DP[0]*(C[18]*(DP[8]-DP[4])+C[4]*DP[9]-C[38]*
 DP[2])+C[32]*DP[1]-C[41]*DP[2]+C[6]*DP[3]-C[19]*DP[4]-C[36]*DP[8]-C[14]*
 DP[9]);
tmp[1]=+DP[5]*(C[4]*(DP[7]*(DP[12]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[13]*(DP[1]+
 DP[3]+DP[8]+DP[9])+DP[5]*(-DP[10]-DP[14]))+DP[0]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[11]*DP[6]+DP[14]*DP[5])+DP[6]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5]))+DP[12]*(DP[2]*(C[18]*(DP[0]-
 DP[7])+C[19]-C[22]*DP[6])+DP[4]*(C[18]*(DP[0]-DP[7])+C[19]-C[22]*DP[6])+
 C[6]*(-DP[1]-DP[3])+C[14]*(DP[8]+DP[9]))+DP[13]*(DP[2]*(C[18]*(DP[0]-
 DP[7])+C[19]-C[22]*DP[6])+DP[4]*(C[18]*(DP[0]-DP[7])+C[19]-C[22]*DP[6])+
 C[6]*(-DP[1]-DP[3])+C[14]*(DP[8]+DP[9]))+DP[11]*(DP[5]*(C[18]*(DP[7]-
 DP[0])+C[22]*DP[6]-C[19])+DP[6]*(C[18]*(-DP[6]-DP[7])+C[62])+C[55]*(DP[7]-
 DP[0])-C[57])+DP[14]*(C[5]*(DP[0]-DP[7])+C[9]*DP[6]-C[17]-C[14]*DP[5])+
 DP[10]*(C[7]+C[6]*DP[5]-C[2]*DP[6]-C[5]*DP[7]))+DP[6]*(DP[12]*(DP[2]*(
 C[38]*(DP[6]+DP[7])-C[41]-C[18]*DP[0])+DP[4]*(C[18]*(DP[6]+DP[7])-C[19]-
 C[4]*DP[0])+C[6]*(DP[1]-DP[8])+C[2]*(DP[3]-DP[9]))+DP[13]*(DP[2]*(C[18]*(
 DP[6]+DP[7])-C[19]-C[4]*DP[0])+C[2]*(DP[1]-DP[8])));
tmp[2]=+DP[12]*(S[1]*(DP[4]*(DP[6]*(C[25]*(S[1]+DP[6])+C[45]+C[37]*DP[7])+
 DP[7]*(C[25]*(S[1]+DP[7])-C[39])+C[49]*S[1]-C[50])+DP[3]*(S[1]*(C[26]-
 C[25]*DP[7])+C[26]*DP[6]-C[28]+C[40]*DP[7])+DP[9]*(C[26]*(-S[1]-DP[6])+
 C[28]-C[24]*DP[7])+DP[2]*(C[18]*(-DP[6]-DP[7])-C[36])+DP[1]*(C[18]*DP[7]-
 C[32])+C[32]*DP[8])+DP[7]*(C[4]*(DP[5]*(DP[2]-DP[1]-DP[3]+DP[4])-DP[7]*
 DP[4])+DP[2]*(C[41]-C[38]*DP[6]-C[18]*DP[7])+DP[4]*(C[19]-C[18]*DP[6])+
 C[6]*(DP[8]-DP[1])+C[2]*(DP[9]-DP[3]))+DP[6]*(DP[2]*(C[4]*DP[5]-C[46]-
 C[18]*DP[6])+DP[4]*(C[4]*(DP[5]-DP[6])-C[21])+C[32]*(DP[8]-DP[1])+C[6]*(
 DP[9]-DP[3]))+DP[5]*(C[6]*(DP[1]+DP[3]-DP[8]-DP[9])+C[14]*(DP[2]+DP[4]))+
 C[33]*(DP[1]-DP[8])+C[8]*(DP[3]-DP[9])+C[52]*DP[2]+C[23]*DP[4]);
tmp[3]=+DP[6]*(DP[5]*(C[4]*(DP[7]*(DP[13]*(DP[2]-DP[1]-DP[3]+DP[4])+DP[11]*(
 S[1]-DP[5]+DP[7])+DP[10]*(DP[5]-S[1]))+DP[6]*(DP[11]*(S[1]-DP[5]+DP[6])+
 DP[13]*(DP[2]+DP[4])))+C[6]*(DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[10]*(S[1]-
 DP[5]+DP[6])+DP[14]*(DP[5]-S[1]-DP[6]))+DP[11]*(DP[6]*(C[59]+C[18]*DP[7])+
 C[14]*(S[1]-DP[5])-C[63]-C[56]*DP[7])+DP[7]*(C[66]*DP[10]-C[2]*DP[14])+
 DP[13]*(C[14]*(DP[2]+DP[4]))+C[10]*(DP[14]-DP[10]))+DP[13]*(DP[2]*(DP[6]*(
 C[4]*(-S[1]-DP[6])-C[21]-C[18]*DP[7])+DP[7]*(C[4]*(-S[1]-DP[7])+C[19])+
 C[23]-C[14]*S[1])+DP[1]*(S[1]*(C[4]*DP[7]-C[6])+C[8]-C[6]*DP[6]-C[2]*
 DP[7])+DP[8]*(C[6]*(S[1]+DP[6])+C[2]*DP[7]-C[8]))+tmp[2])+DP[7]*(DP[5]*(
 DP[7]*(C[4]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-
 S[1]))+C[5]*DP[10])+C[20]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+
 DP[10]*(S[1]-DP[5]))-C[67]*DP[10])+S[1]*(DP[12]*(DP[3]*(S[1]*(C[43]-C[25]*
 DP[7])+C[4]*DP[7]-C[20])+DP[1]*(C[18]*DP[7]-C[44]))+DP[1]*(DP[13]*(C[4]*
 DP[7]-C[20]))));
tmp[4]=+DP[5]*(DP[6]*(DP[0]*(DP[12]*(DP[2]*(C[18]*(-DP[6]-DP[7])+C[19]+C[4]*
 DP[0])+DP[4]*(C[18]*(-DP[6]-DP[7])+C[19]+C[4]*DP[0])+C[2]*(DP[8]-DP[1]-
 DP[3]+DP[9]))+DP[13]*(DP[2]*(C[18]*(-DP[6]-DP[7])+C[19]+C[4]*DP[0])+DP[4]*(
 C[18]*(-DP[6]-DP[7])+C[19]+C[4]*DP[0])+C[2]*(DP[8]-DP[1]-DP[3]+DP[9]))+
 DP[11]*(DP[5]*(C[18]*(DP[6]+DP[7])-C[19]-C[4]*DP[0])+C[55]*(DP[6]+DP[7])-
 C[57]-C[5]*DP[0])+DP[5]*(C[2]*(DP[10]-DP[14]))+C[3]*(DP[10]-DP[14]))+DP[6]*
 (DP[12]*(C[6]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[2]*(C[21]+C[4]*DP[6]+C[18]*
 DP[7])+DP[4]*(C[21]+C[4]*DP[6]+C[18]*DP[7]))+DP[13]*(C[6]*(DP[1]+DP[3]-
 DP[8]-DP[9])+DP[2]*(C[21]+C[4]*DP[6]+C[18]*DP[7])+DP[4]*(C[21]+C[4]*DP[6]+
 C[18]*DP[7]))+DP[11]*(DP[5]*(-C[21]-C[4]*DP[6]-C[18]*DP[7])-C[60]-C[5]*
 DP[6]-C[55]*DP[7])+DP[5]*(C[6]*(DP[14]-DP[10]))+C[7]*(DP[14]-DP[10]))+
 DP[7]*(C[2]*(DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-
 DP[9])+DP[5]*(DP[14]-DP[10]))+DP[7]*(C[4]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])-DP[11]*DP[5])-C[5]*DP[11])+C[19]*(DP[2]*(-DP[12]-DP[13])+
 DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[3]*(DP[14]-DP[10])+C[57]*DP[11])+
 C[8]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[5]*(DP[10]-DP[14]))+C[23]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*DP[5])+C[11]*(DP[10]-DP[14])+C[64]*DP[11]));
R=+S[1]*(DP[0]*(S[1]*(DP[5]*(C[12]*(DP[13]*(DP[6]*(DP[1]+DP[2]+DP[3]+DP[4])+
 DP[7]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[0]*(-DP[8]-DP[9]))+S[1]*(DP[6]*(DP[10]+
 DP[11])+DP[7]*(DP[10]+DP[11])-DP[14]*DP[0])+DP[5]*(DP[6]*(-DP[10]-DP[11])+
 DP[7]*(-DP[10]-DP[11])+DP[14]*DP[0]))+C[18]*(DP[13]*(-DP[1]-DP[2]-DP[3]-
 DP[4])+DP[11]*(DP[0]-S[1]+DP[5])+DP[10]*(DP[5]-S[1]))+DP[14]*(C[13]*(DP[5]-
 S[1])+C[4]*(DP[6]+DP[7])+C[16]-C[15]*DP[0])+DP[10]*(C[15]*DP[7]-C[69]-
 C[68]*DP[6])+DP[11]*(C[65]-C[61]*DP[6]-C[58]*DP[7])+DP[13]*(C[13]*(-DP[8]-
 DP[9])))+DP[13]*(S[1]*(C[12]*(DP[1]*(-DP[6]-DP[7])+DP[2]*(-DP[6]-DP[7])+
 DP[8]*DP[0])+C[18]*(DP[1]+DP[2])+C[13]*DP[8])+DP[2]*(C[18]*(DP[7]-DP[0])+
 C[22]*DP[6]-C[19])+DP[8]*(C[4]*(DP[0]-DP[6]-DP[7])-C[14])+DP[1]*(C[6]-C[4]*
 DP[7]))+tmp[0])+tmp[1])+tmp[3])+tmp[4];
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
