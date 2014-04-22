/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F598_out;
static void C598(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[8]*V[8]*V[8]*V[8];
C[64]=+8*S[0];
S[1]=V[10]*V[10];
S[2]=V[9]*V[9];
C[63]=+S[0]*(S[2]*(2*(S[1]-S[2])));
S[3]=V[8]*V[8];
C[62]=+S[3]*(S[2]*(4*(S[1]-S[3])));
S[4]=V[9]*V[9]*V[9]*V[9];
C[61]=+S[0]*(S[4]*(S[1]-S[2]));
C[60]=+S[3]*(S[2]*(2*(S[2]*(S[1]-S[2]-S[3])+S[1]*S[3])));
C[59]=+S[3]*(S[2]*(8*S[2]+4*S[3]));
C[58]=+S[0]*(S[2]*(2*S[1]-4*S[2]));
C[57]=+S[3]*(S[2]*(4*(S[1]-S[3])-8*S[2]));
C[56]=+S[3]*(16*S[2]+8*S[3]);
C[55]=+4*S[4]*S[0];
C[54]=+S[3]*(S[2]*(8*S[2]+12*S[3]));
C[53]=+8*S[2]*S[0];
C[52]=+S[4]*(S[3]*(4*(S[1]-S[2])));
C[51]=+S[2]*(4*(S[2]*(S[1]-S[2]-S[3])+S[1]*S[3]));
C[50]=+S[2]*(16*S[2]+8*S[3]);
C[49]=+S[3]*(S[2]*(8*S[1]-16*S[2]));
C[48]=+S[2]*(8*(S[1]-S[3])-16*S[2]);
C[47]=+S[3]*(S[2]*(8*(S[1]-S[2])));
C[46]=+S[2]*(8*(S[1]-S[2]));
C[45]=+16*S[4];
C[44]=+32*S[2]+16*S[3];
C[43]=+16*S[4]*S[3];
C[42]=+48*S[2]*S[3];
C[41]=+S[2]*(8*(S[1]-S[3]));
C[40]=+S[2]*(16*S[2]+24*S[3]);
C[39]=+48*S[2];
C[38]=+32*S[2]*S[3];
C[37]=+32*S[2];
C[36]=+S[3]*(S[2]*(8*(S[1]+S[2])));
C[35]=+S[3]*(16*(S[1]+S[2]));
C[34]=+32*S[3];
C[33]=+8*S[1]*S[4]*S[3];
C[32]=+16*S[1]*S[2]*S[3];
C[31]=+8*(S[2]*(S[1]+S[2]+S[3])+S[1]*S[3]);
C[30]=+16*(S[1]+S[2]);
C[29]=+16*(S[2]+S[3]);
C[28]=+S[2]*(S[1]*(8*(S[2]+S[3])));
C[27]=+S[2]*(8*(S[1]+S[3]));
C[26]=+16*S[1]*S[2];
C[25]=+16*S[2];
C[24]=+8*S[1]*S[2];
C[23]=+S[4]*(S[3]*(2*(S[1]-S[2])));
C[22]=+S[3]*(S[2]*(4*S[1]-8*S[2]));
C[21]=+S[3]*(S[2]*(4*(S[1]-S[2])));
C[20]=+8*S[4]*S[3];
C[19]=+24*S[2]*S[3];
C[18]=+16*S[2]*S[3];
C[17]=+S[0]*(S[2]*(2*(S[1]+S[2])));
C[16]=+S[3]*(4*(S[2]*(S[1]+S[2]+S[3])+S[1]*S[3]));
C[15]=+S[3]*(8*(S[2]+S[3]));
C[14]=+S[3]*(S[2]*(4*(S[1]+S[2])));
C[13]=+S[3]*(8*(S[1]+S[2]));
C[12]=+16*S[3];
C[11]=+2*S[1]*S[4]*S[0];
C[10]=+S[3]*(S[2]*(S[1]*(4*(S[2]+S[3]))));
C[9]=+S[3]*(S[2]*(4*(S[1]+S[3])));
C[8]=+4*S[1]*S[4]*S[3];
C[7]=+4*S[1]*S[2]*S[0];
C[6]=+4*S[2]*S[0];
C[5]=+8*S[1]*S[2]*S[3];
C[4]=+8*S[2]*S[3];
C[3]=+2*S[1]*S[2]*S[0];
C[2]=+4*S[1]*S[2]*S[3];
S[5]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[5];
S[6]=V[52]*V[52];
S[7]=V[51]*V[51];
S[8]=V[47]*V[47];
S[9]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8]*S[9];
}
REAL F598_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         C                 D      !  D                 C             
       ==<==@==============<======!==<==============@==<==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              N2     !  N2             |                
          W+|P7         /==<======!==<==\         W+|-PA             
            1           |  P3     !  P3 |           3                
            |           |         !     |           |                
         S  |  t     W+ |  e2     !  e2 |  W+    t  |  S             
       ==<==@==<==@-2<--@==>======!==>==@--<4-@==<==@==<==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        B      !  B        |                      
                  \========<======!==<========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[65];REAL S[2];REAL tmp[4];                                    
     
if(CalcConst) C598(C);
N=+C[0];
S[0]=V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
tmp[0]=+DP[12]*(S[1]*(DP[0]*(S[1]*(S[1]*(32*(DP[3]+DP[4]))+C[34]*(-DP[1]-
 DP[2])-C[12]*DP[3]-C[29]*DP[4]-C[25]*DP[9])+DP[4]*(C[37]*(-DP[6]-DP[7])+
 C[50]+C[25]*DP[0]+C[12]*DP[5])+DP[5]*(C[12]*(DP[1]+DP[2]+DP[3]))+C[18]*(
 DP[2]+DP[8])+C[27]*DP[9]-C[24]*DP[3])+DP[4]*(DP[6]*(C[25]*(S[1]+DP[6])+
 C[48]+C[37]*DP[7])+DP[7]*(C[39]*S[1]-C[40]+C[25]*DP[7])+C[46]*S[1]-C[51])+
 DP[3]*(S[1]*(C[26]+C[25]*DP[7])+C[26]*DP[6]-C[28]+C[41]*DP[7])+DP[9]*(
 C[26]*(-S[1]-DP[6])+C[28]-C[24]*DP[7])+DP[2]*(-C[47]-C[18]*DP[6]-C[42]*
 DP[7])+DP[1]*(-C[32]-C[18]*DP[7])+C[32]*DP[8])+DP[0]*(DP[2]*(C[38]*(DP[6]+
 DP[7])-C[43]-C[18]*DP[0]-C[4]*DP[5])+DP[4]*(C[4]*(-DP[0]-DP[5])+C[18]*(
 DP[6]+DP[7])-C[20])+DP[5]*(C[4]*(-DP[8]-DP[9]))+C[5]*(DP[1]-DP[8])+C[2]*(
 DP[3]-DP[9]))+DP[7]*(DP[2]*(C[43]+C[19]*DP[5]-C[38]*DP[6]-C[18]*DP[7])+
 DP[4]*(C[20]+C[19]*DP[5]-C[18]*DP[6]-C[4]*DP[7])+DP[1]*(C[4]*DP[5]-C[5])+
 DP[3]*(C[4]*DP[5]-C[2])+C[5]*DP[8]+C[2]*DP[9])+DP[6]*(DP[2]*(C[4]*DP[5]-
 C[49]-C[18]*DP[6])+DP[4]*(C[4]*(DP[5]-DP[6])-C[22])+C[32]*(DP[8]-DP[1])+
 C[5]*(DP[9]-DP[3]))+DP[5]*(C[5]*(DP[1]+DP[3]-DP[8]-DP[9])+C[21]*(DP[2]+
 DP[4]))+C[33]*(DP[1]-DP[8])+C[8]*(DP[3]-DP[9])+C[52]*DP[2]+C[23]*DP[4]);
tmp[1]=+DP[5]*(DP[0]*(S[1]*(C[12]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(
 DP[1]+DP[2]+DP[3]+DP[4])+S[1]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))-
 C[15]*DP[10]-C[56]*DP[11]-C[4]*DP[14])+C[4]*(DP[12]*(-DP[1]-DP[3]-DP[8]-
 DP[9])+DP[13]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[5]*(DP[10]+DP[14]))+C[18]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[6]*(DP[10]+
 DP[14])+C[53]*DP[11])+DP[7]*(C[4]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])+DP[10]*(S[1]-DP[5]))+C[18]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13])+DP[11]*(S[1]-DP[5]))-C[6]*DP[10]-C[53]*DP[11])+DP[12]*(C[21]*(
 DP[1]+DP[3])+C[20]*(-DP[2]-DP[4])+C[5]*(-DP[8]-DP[9]))+DP[13]*(C[21]*(
 DP[1]+DP[3])+C[20]*(-DP[2]-DP[4])+C[5]*(-DP[8]-DP[9]))+S[1]*(C[21]*DP[10]-
 C[20]*DP[11]-C[5]*DP[14])+DP[5]*(C[20]*DP[11]-C[21]*DP[10]+C[5]*DP[14])+
 C[55]*DP[11]-C[63]*DP[10]+C[7]*DP[14]);
tmp[2]=+DP[7]*(S[1]*(DP[12]*(DP[0]*(S[1]*(S[1]*(32*(DP[3]+DP[4]))+C[34]*(-
 DP[1]-DP[2])-C[29]*DP[3]-C[44]*DP[4]-C[25]*DP[9])+C[18]*(DP[1]+DP[4]+
 DP[8])+C[4]*(DP[3]+DP[9])+C[38]*DP[2])+DP[7]*(S[1]*(C[25]*DP[3]+C[37]*
 DP[4])+C[18]*(-DP[1]-DP[4])-C[38]*DP[2]-C[4]*DP[3])+S[1]*(C[46]*DP[3]-
 C[45]*DP[4]-C[26]*DP[9])+C[43]*DP[2]-C[47]*DP[1]-C[21]*DP[3]+C[20]*DP[4]+
 C[32]*DP[8]+C[5]*DP[9])+DP[13]*(DP[0]*(S[1]*(C[12]*(-DP[1]-DP[2]))+C[4]*(
 DP[1]+DP[8])+C[18]*DP[2])+DP[1]*(-C[21]-C[4]*DP[7])+DP[2]*(C[20]-C[18]*
 DP[7])+C[5]*DP[8]))+tmp[1])+DP[0]*(S[1]*(DP[0]*(DP[5]*(C[12]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[1]))+C[15]*DP[14])+
 DP[12]*(S[1]*(DP[9]*(C[29]-32*S[1])+C[34]*DP[8])-C[18]*DP[8]-C[4]*DP[9])+
 DP[8]*(DP[13]*(C[12]*S[1]-C[4])))+DP[5]*(C[13]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[1]))+C[16]*DP[14])+DP[12]*(S[1]*(
 DP[9]*(C[31]-C[30]*S[1])+C[35]*DP[8])-C[36]*DP[8]-C[14]*DP[9])+DP[8]*(
 DP[13]*(C[13]*S[1]-C[14])))+DP[5]*(DP[0]*(C[4]*(DP[8]*(DP[12]+DP[13])+
 DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-C[6]*DP[14])+C[14]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-C[17]*DP[14]));
tmp[3]=+DP[5]*(DP[6]*(DP[0]*(DP[12]*(DP[2]*(C[18]*(-DP[6]-DP[7])+C[20]+C[4]*
 DP[0])+DP[4]*(C[18]*(-DP[6]-DP[7])+C[20]+C[4]*DP[0])+C[2]*(DP[8]-DP[1]-
 DP[3]+DP[9]))+DP[13]*(DP[2]*(C[18]*(-DP[6]-DP[7])+C[20]+C[4]*DP[0])+DP[4]*(
 C[18]*(-DP[6]-DP[7])+C[20]+C[4]*DP[0])+C[2]*(DP[8]-DP[1]-DP[3]+DP[9]))+
 DP[11]*(DP[5]*(C[18]*(DP[6]+DP[7])-C[20]-C[4]*DP[0])+C[53]*(DP[6]+DP[7])-
 C[55]-C[6]*DP[0])+DP[5]*(C[2]*(DP[10]-DP[14]))+C[3]*(DP[10]-DP[14]))+DP[6]*
 (DP[12]*(C[5]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[2]*(C[22]+C[4]*DP[6]+C[18]*
 DP[7])+DP[4]*(C[22]+C[4]*DP[6]+C[18]*DP[7]))+DP[13]*(C[5]*(DP[1]+DP[3]-
 DP[8]-DP[9])+DP[2]*(C[22]+C[4]*DP[6]+C[18]*DP[7])+DP[4]*(C[22]+C[4]*DP[6]+
 C[18]*DP[7]))+DP[11]*(DP[5]*(-C[22]-C[4]*DP[6]-C[18]*DP[7])-C[58]-C[6]*
 DP[6]-C[53]*DP[7])+DP[5]*(C[5]*(DP[14]-DP[10]))+C[7]*(DP[14]-DP[10]))+
 DP[7]*(C[2]*(DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-
 DP[9])+DP[5]*(DP[14]-DP[10]))+DP[7]*(C[4]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])-DP[11]*DP[5])-C[6]*DP[11])+C[20]*(DP[2]*(-DP[12]-DP[13])+
 DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[3]*(DP[14]-DP[10])+C[55]*DP[11])+
 C[8]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[5]*(DP[10]-DP[14]))+C[23]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*DP[5])+C[11]*(DP[10]-DP[14])+C[61]*DP[11]));
R=+S[1]*(DP[6]*(DP[5]*(DP[0]*(S[1]*(C[12]*(DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+
 S[1]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))-C[64]*DP[10]-C[15]*DP[11]-
 C[4]*DP[14])+C[4]*(DP[13]*(-DP[2]-DP[4]-DP[8]-DP[9])+DP[5]*(DP[11]+DP[14])+
 DP[11]*DP[0])+DP[11]*(C[18]*(-DP[6]-DP[7])+C[59])+C[9]*DP[14]-C[2]*DP[10])+
 DP[7]*(DP[11]*(C[19]*(S[1]-DP[5])+C[18]*DP[6]-C[54]+C[4]*DP[7])+DP[13]*(
 C[4]*(DP[1]+DP[3])+C[19]*(DP[2]+DP[4]))+DP[10]*(C[4]*(S[1]-DP[5])+C[62])-
 C[2]*DP[14])+C[5]*(DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[10]*(S[1]-DP[5]+
 DP[6])+DP[14]*(DP[5]-S[1]-DP[6]))+DP[11]*(DP[6]*(C[4]*(S[1]-DP[5]+DP[6])+
 C[57])+C[21]*(S[1]-DP[5])-C[60])+DP[13]*(DP[2]*(C[21]+C[4]*DP[6])+DP[4]*(
 C[21]+C[4]*DP[6]))+C[10]*(DP[14]-DP[10]))+DP[13]*(DP[2]*(DP[0]*(S[1]*(C[4]-
 C[12]*S[1])+C[18]*(DP[6]+DP[7])-C[20]-C[4]*DP[0])+DP[6]*(C[4]*(-S[1]-
 DP[6])-C[22]-C[18]*DP[7])+DP[7]*(C[20]-C[19]*S[1]-C[4]*DP[7])+C[23]-C[21]*
 S[1])+DP[1]*(S[1]*(-C[5]-C[12]*DP[0]*S[1]-C[4]*DP[7])+C[2]*(DP[0]-DP[7])+
 C[8]-C[5]*DP[6])+DP[8]*(S[1]*(C[5]+C[4]*DP[0])+C[2]*(DP[7]-DP[0])+C[5]*
 DP[6]-C[8]))+tmp[0])+tmp[2])+tmp[3];
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
