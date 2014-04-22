/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F730_out;
static void C730(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[9]*V[9];
S[1]=V[8]*V[8];
C[64]=+S[1]*(16*S[0]+8*S[1]);
S[2]=V[13]*V[13];
S[3]=V[9]*V[9]*V[9]*V[9];
S[4]=V[8]*V[8]*V[8]*V[8];
C[63]=+S[4]*(S[3]*(S[2]-S[0]));
C[62]=+S[1]*(S[0]*(2*(S[0]*(S[2]-S[0]-S[1])+S[2]*S[1])));
C[61]=+S[1]*(S[0]*(8*S[0]+12*S[1]));
C[60]=+4*S[3]*S[4];
C[59]=+S[1]*(S[0]*(8*S[0]+4*S[1]));
C[58]=+S[4]*(S[0]*(2*S[2]-4*S[0]));
C[57]=+S[1]*(S[0]*(4*(S[2]-S[1])-8*S[0]));
C[56]=+8*S[0]*S[4];
C[55]=+S[4]*(S[0]*(2*(S[2]+S[0])));
C[54]=+S[1]*(4*(S[0]*(S[2]+S[0]+S[1])+S[2]*S[1]));
C[53]=+S[1]*(S[0]*(4*(S[2]+S[1])));
C[52]=+16*S[3];
C[51]=+S[1]*(S[0]*(8*(S[2]+S[0])));
C[50]=+S[1]*(16*(S[2]+S[0]));
C[49]=+32*S[0]+16*S[1];
C[48]=+8*(S[0]*(S[2]+S[0]+S[1])+S[2]*S[1]);
C[47]=+16*(S[2]+S[0]);
C[46]=+S[3]*(S[1]*(4*(S[2]-S[0])));
C[45]=+48*S[0]*S[1];
C[44]=+S[0]*(4*(S[0]*(S[2]-S[0]-S[1])+S[2]*S[1]));
C[43]=+S[0]*(16*S[0]+24*S[1]);
C[42]=+48*S[0];
C[41]=+16*S[3]*S[1];
C[40]=+S[0]*(16*S[0]+8*S[1]);
C[39]=+S[0]*(8*(S[2]+S[1]));
C[38]=+S[1]*(S[0]*(8*S[2]-16*S[0]));
C[37]=+S[0]*(8*(S[2]-S[1])-16*S[0]);
C[36]=+32*S[0]*S[1];
C[35]=+32*S[0];
C[34]=+S[1]*(S[0]*(8*(S[2]-S[0])));
C[33]=+8*S[2]*S[3]*S[1];
C[32]=+32*S[1];
C[31]=+16*S[2]*S[0]*S[1];
C[30]=+S[0]*(8*(S[2]-S[0]));
C[29]=+16*(S[0]+S[1]);
C[28]=+S[0]*(S[2]*(8*(S[0]+S[1])));
C[27]=+S[0]*(8*(S[2]-S[1]));
C[26]=+16*S[0];
C[25]=+8*S[2]*S[0];
C[24]=+16*S[2]*S[0];
C[23]=+S[1]*(S[0]*(4*(S[2]+S[0])));
C[22]=+S[1]*(8*(S[2]+S[0]));
C[21]=+S[3]*(S[1]*(2*(S[2]-S[0])));
C[20]=+24*S[0]*S[1];
C[19]=+8*S[3]*S[1];
C[18]=+S[1]*(S[0]*(4*S[2]-8*S[0]));
C[17]=+16*S[0]*S[1];
C[16]=+S[4]*(S[0]*(2*(S[2]-S[0])));
C[15]=+S[1]*(S[0]*(4*(S[2]-S[0])));
C[14]=+4*S[0]*S[4];
C[13]=+S[1]*(8*(S[0]+S[1]));
C[12]=+2*S[2]*S[3]*S[4];
C[11]=+S[1]*(S[0]*(S[2]*(4*(S[0]+S[1]))));
C[10]=+S[1]*(S[0]*(4*(S[2]-S[1])));
C[9]=+4*S[2]*S[3]*S[1];
C[8]=+8*S[0]*S[1];
C[7]=+2*S[2]*S[0]*S[4];
C[6]=+8*S[4];
C[5]=+4*S[2]*S[0]*S[1];
C[4]=+16*S[1];
C[3]=+4*S[2]*S[0]*S[4];
C[2]=+8*S[2]*S[0]*S[1];
S[5]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[5];
S[6]=V[52]*V[52]*V[52]*V[52];
S[7]=V[47]*V[47];
S[8]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8];
}
REAL F730_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           N2     !  N2                              
                        /==<======!==<==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         B     t     W+ |  e2     !  e2 |  W+    t     B             
       ==<==@==<==@-2<--@==>======!==>==@--<4-@==<==@==<==           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        B      !  B        |     |                
          W+|P7   \========<======!==<========/   W+|-PA             
            1              P6     !  P6             3                
            |                     !                 |                
         d  |              c      !  c              |  d             
       ==>==@==============>======!==>==============@==>==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[65];REAL S[2];REAL tmp[4];                                    
     
if(CalcConst) C730(C);
N=+C[0];
S[0]=V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
tmp[0]=+DP[12]*(S[1]*(DP[6]*(S[1]*(S[1]*(32*(DP[9]-DP[3]))+C[32]*(DP[1]-
 DP[8])+C[29]*DP[3]-C[26]*DP[4]-C[4]*DP[9])+DP[3]*(C[35]*(DP[7]-DP[0])+
 C[26]*DP[6]-C[40]-C[4]*DP[5])+DP[5]*(C[4]*(DP[8]-DP[1]+DP[9]))+C[17]*(
 DP[2]-DP[1])+C[39]*DP[4]-C[25]*DP[9])+DP[0]*(DP[3]*(C[43]-C[42]*S[1]+C[26]*
 DP[0]-C[35]*DP[7])+DP[9]*(C[27]+C[26]*S[1])+C[45]*DP[1]-C[25]*DP[4]-C[17]*
 DP[8])+DP[7]*(DP[3]*(C[26]*(S[1]+DP[7])+C[37])+C[24]*(DP[4]-DP[9])-C[17]*
 DP[1])+S[1]*(C[24]*(DP[4]-DP[9])+C[30]*DP[3])+C[31]*(DP[8]-DP[2])+C[28]*(
 DP[9]-DP[4])-C[34]*DP[1]-C[44]*DP[3])+DP[0]*(DP[1]*(C[36]*(DP[6]+DP[7])-
 C[41]-C[17]*DP[0]-C[20]*DP[5])+DP[3]*(C[17]*(DP[6]+DP[7])-C[19]-C[8]*DP[0]-
 C[20]*DP[5])+DP[5]*(C[8]*(DP[8]+DP[9]))+C[2]*(DP[2]-DP[8])+C[5]*(DP[4]-
 DP[9]))+DP[6]*(C[8]*(DP[5]*(DP[1]-DP[2]+DP[3]-DP[4])-DP[6]*DP[3])+DP[1]*(
 C[41]-C[17]*DP[6]-C[36]*DP[7])+DP[3]*(C[19]-C[17]*DP[7])+C[2]*(DP[8]-
 DP[2])+C[5]*(DP[9]-DP[4]))+DP[7]*(DP[1]*(C[8]*DP[5]-C[38]-C[17]*DP[7])+
 DP[3]*(C[8]*(DP[5]-DP[7])-C[18])+C[31]*(DP[8]-DP[2])+C[2]*(DP[9]-DP[4]))+
 DP[5]*(C[2]*(DP[2]+DP[4]-DP[8]-DP[9])+C[15]*(DP[1]+DP[3]))+C[33]*(DP[2]-
 DP[8])+C[9]*(DP[4]-DP[9])+C[46]*DP[1]+C[21]*DP[3]);
tmp[1]=+DP[5]*(DP[6]*(S[1]*(C[4]*(DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(
 DP[1]+DP[3]-DP[8]-DP[9])+S[1]*(DP[10]-DP[14])+DP[5]*(DP[14]-DP[10]))+C[8]*
 DP[11]-C[64]*DP[10]+C[13]*DP[14])+C[8]*(DP[12]*(DP[2]+DP[4]+DP[8]+DP[9])+
 DP[13]*(DP[2]+DP[4]+DP[8]+DP[9])+DP[5]*(-DP[11]-DP[14]))+C[17]*(DP[1]*(-
 DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[14]*(-DP[11]-DP[14])+
 C[56]*DP[10])+DP[0]*(C[17]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+
 DP[10]*(S[1]-DP[5]))+C[8]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[1]))+C[14]*DP[14]-C[56]*DP[10])+DP[12]*(C[19]*(DP[1]+
 DP[3])+C[2]*(-DP[2]-DP[4])+C[15]*(DP[8]+DP[9]))+DP[13]*(C[19]*(DP[1]+
 DP[3])+C[2]*(-DP[2]-DP[4])+C[15]*(DP[8]+DP[9]))+S[1]*(C[19]*DP[10]-C[2]*
 DP[11]+C[15]*DP[14])+DP[5]*(C[2]*DP[11]-C[19]*DP[10]-C[15]*DP[14])+C[3]*
 DP[11]-C[60]*DP[10]-C[16]*DP[14]);
tmp[2]=+DP[0]*(S[1]*(DP[12]*(DP[6]*(S[1]*(S[1]*(32*(DP[3]-DP[9]))+C[32]*(
 DP[8]-DP[1])+C[26]*DP[4]-C[49]*DP[3]+C[29]*DP[9])+C[17]*(DP[3]-DP[2]-
 DP[8])+C[8]*(-DP[4]-DP[9])+C[36]*DP[1])+DP[0]*(S[1]*(C[35]*DP[3]-C[26]*
 DP[9])+C[17]*(DP[8]-DP[3])+C[8]*DP[9]-C[36]*DP[1])+S[1]*(C[52]*DP[3]-C[24]*
 DP[4]+C[30]*DP[9])+C[31]*DP[2]-C[41]*DP[1]-C[19]*DP[3]+C[2]*DP[4]-C[34]*
 DP[8]-C[15]*DP[9])+DP[13]*(DP[6]*(S[1]*(C[4]*(DP[8]-DP[1]))+C[8]*(-DP[2]-
 DP[8])+C[17]*DP[1])+DP[0]*(C[8]*DP[8]-C[17]*DP[1])+C[2]*DP[2]-C[19]*DP[1]-
 C[15]*DP[8]))+tmp[1])+DP[6]*(S[1]*(DP[5]*(DP[6]*(C[4]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[1]-DP[5]))-C[13]*DP[11])+C[22]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[1]))+C[54]*
 DP[11])+DP[12]*(S[1]*(DP[4]*(S[1]*(32*DP[6]-C[47])+C[48]-C[29]*DP[6])+
 DP[2]*(C[50]-C[32]*DP[6]))+DP[2]*(C[17]*DP[6]-C[51])+DP[4]*(C[8]*DP[6]-
 C[23]))+DP[2]*(DP[13]*(S[1]*(C[22]-C[4]*DP[6])+C[8]*DP[6]-C[23])))+DP[5]*(
 DP[6]*(C[8]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+
 C[14]*DP[11])+C[23]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*
 DP[5])-C[55]*DP[11]));
tmp[3]=+DP[5]*(DP[7]*(DP[0]*(DP[12]*(DP[1]*(C[17]*(-DP[6]-DP[7])+C[19]+C[8]*
 DP[0])+DP[3]*(C[17]*(-DP[6]-DP[7])+C[19]+C[8]*DP[0])+C[5]*(DP[8]-DP[2]-
 DP[4]+DP[9]))+DP[13]*(DP[1]*(C[17]*(-DP[6]-DP[7])+C[19]+C[8]*DP[0])+DP[3]*(
 C[17]*(-DP[6]-DP[7])+C[19]+C[8]*DP[0])+C[5]*(DP[8]-DP[2]-DP[4]+DP[9]))+
 DP[10]*(DP[5]*(C[17]*(DP[6]+DP[7])-C[19]-C[8]*DP[0])+C[56]*(DP[6]+DP[7])-
 C[60]-C[14]*DP[0])+DP[5]*(C[5]*(DP[11]-DP[14]))+C[7]*(DP[11]-DP[14]))+
 DP[6]*(DP[12]*(C[5]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[1]*(C[8]*DP[6]-C[19]+
 C[17]*DP[7])+DP[3]*(C[8]*DP[6]-C[19]+C[17]*DP[7]))+DP[13]*(C[5]*(DP[2]+
 DP[4]-DP[8]-DP[9])+DP[1]*(C[8]*DP[6]-C[19]+C[17]*DP[7])+DP[3]*(C[8]*DP[6]-
 C[19]+C[17]*DP[7]))+DP[10]*(DP[5]*(C[19]-C[8]*DP[6]-C[17]*DP[7])+C[60]-
 C[14]*DP[6]-C[56]*DP[7])+DP[5]*(C[5]*(DP[14]-DP[11]))+C[7]*(DP[14]-
 DP[11]))+DP[7]*(C[2]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-
 DP[8]-DP[9])+DP[5]*(DP[14]-DP[11]))+DP[7]*(C[8]*(DP[1]*(DP[12]+DP[13])+
 DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])-C[14]*DP[10])+C[18]*(DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[3]*(DP[14]-DP[11])-C[58]*
 DP[10])+C[9]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+
 DP[9])+DP[5]*(DP[11]-DP[14]))+C[21]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*DP[5])+C[12]*(DP[11]-DP[14])+C[63]*DP[10]));
R=+S[1]*(DP[7]*(DP[5]*(DP[6]*(S[1]*(C[4]*(DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+
 S[1]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+C[13]*DP[10]-C[8]*DP[11]-C[6]*
 DP[14])+C[8]*(DP[13]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[5]*(DP[11]-DP[10])+
 DP[10]*DP[6])+DP[10]*(C[17]*(DP[7]-DP[0])-C[59])+C[53]*DP[11]-C[5]*DP[14])+
 DP[0]*(DP[10]*(C[20]*(DP[5]-S[1])+C[61]+C[8]*DP[0]-C[17]*DP[7])+DP[13]*(
 C[20]*(-DP[1]-DP[3])+C[8]*(DP[8]+DP[9]))+DP[14]*(C[8]*(S[1]-DP[5])+C[10])-
 C[5]*DP[11])+C[2]*(DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[11]*(S[1]-DP[5]+
 DP[7])+DP[14]*(DP[5]-S[1]-DP[7]))+DP[10]*(DP[7]*(C[8]*(S[1]-DP[5]+DP[7])+
 C[57])+C[15]*(S[1]-DP[5])-C[62])+DP[13]*(DP[1]*(C[15]+C[8]*DP[7])+DP[3]*(
 C[15]+C[8]*DP[7]))+C[11]*(DP[14]-DP[11]))+DP[13]*(DP[1]*(DP[6]*(S[1]*(C[4]*
 S[1]-C[8])+C[17]*(DP[0]-DP[7])+C[19]-C[8]*DP[6])+DP[0]*(C[20]*S[1]-C[19]-
 C[8]*DP[0]+C[17]*DP[7])+DP[7]*(C[8]*(-S[1]-DP[7])-C[18])+C[21]-C[15]*S[1])+
 DP[8]*(S[1]*(C[2]-C[8]*DP[0]-C[4]*DP[6]*S[1])+C[5]*(DP[6]-DP[0])+C[2]*
 DP[7]-C[9])+DP[2]*(S[1]*(C[8]*DP[6]-C[2])+C[5]*(DP[0]-DP[6])+C[9]-C[2]*
 DP[7]))+tmp[0])+tmp[2])+tmp[3];
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}
