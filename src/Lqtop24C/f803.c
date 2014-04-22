/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F803_out;
static void C803(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[36]*V[36];
S[1]=V[8]*V[8]*V[8]*V[8];
C[22]=+S[1]*(V[35]*(2*V[35]-4*V[36])+2*S[0]);
C[21]=+V[35]*(8*V[35]-16*V[36])+8*S[0];
S[2]=V[11]*V[11];
S[3]=V[8]*V[8];
C[20]=+S[3]*(S[2]*(V[35]*(16*V[36]+8*V[35])+8*S[0]));
C[19]=+S[3]*(V[35]*(32*V[35]-64*V[36])+32*S[0]);
C[18]=+S[3]*(V[35]*(40*V[35]-80*V[36])+40*S[0]);
C[17]=+S[2]*(V[35]*(16*V[36]+8*V[35])+8*S[0]);
C[16]=+V[35]*(32*V[35]-64*V[36])+32*S[0];
C[15]=+S[2]*(V[35]*(8*V[36]+4*V[35])+4*S[0]);
C[14]=+V[35]*(40*V[35]-80*V[36])+40*S[0];
C[13]=+V[35]*(16*V[35]-32*V[36])+16*S[0];
C[12]=+S[3]*(V[35]*(4*V[35]-8*V[36])+4*S[0]);
C[11]=+S[1]*(S[2]*(V[35]*(4*V[36]+2*V[35])+2*S[0]));
C[10]=+S[1]*(V[35]*(8*V[35]-16*V[36])+8*S[0]);
C[9]=+S[3]*(S[2]*(V[35]*(8*V[36]+4*V[35])+4*S[0]));
C[8]=+S[3]*(V[35]*(16*V[35]-32*V[36])+16*S[0]);
C[7]=+S[1]*(S[2]*(V[35]*(2*V[36]+V[35])+S[0]));
C[6]=+S[1]*(V[35]*(10*V[35]-20*V[36])+10*S[0]);
C[5]=+S[3]*(S[2]*(V[35]*(4*V[36]+2*V[35])+2*S[0]));
C[4]=+S[3]*(V[35]*(20*V[35]-40*V[36])+20*S[0]);
C[3]=+S[1]*(V[35]*(4*V[35]-8*V[36])+4*S[0]);
C[2]=+S[3]*(V[35]*(8*V[35]-16*V[36])+8*S[0]);
S[4]=V[14]*V[14];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+12*S[4]*S[5];
S[6]=V[52]*V[52];
S[7]=V[15]*V[15];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8];
}
REAL F803_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         G                 u      !                                  
       -1---@==============>==\   !                                  
         P1 |              P5 |   !                                  
            |                 |   !                                  
            |              N2 |   !  N2                              
           u|P7         /==<==+===!==<==\                            
            |           |  P3 |   !  P3 |                            
            |           |     |   !     |                            
         G  |  t     W+ |  e2 |   !  e2 |  W+    t     G             
       -2---@==<==@-3<--@==>==+===!==>==@--<4-@==<==@---1-           
         P2    P8 |  P9    P4 |   !  P4   -PC | -PB |  P1            
                  |           |   !           |     |                
                  |        B  |   !  B        |     |                
                  \========<==+===!==<========/    u|-PA             
                           P6 |   !  P6             |                
                              |   !                 |                
                              |   !  u              |  G             
                              \===!==>==============@---2-           
                                  !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[23];REAL S[4];REAL tmp[3];                                    
     
if(CalcConst) C803(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[1];
S[2]=V[53]*V[53];
tmp[0]=+DP[7]*(C[2]*(DP[0]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+
 DP[2]+DP[3]+DP[4])+S[2]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+DP[6]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+DP[7]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2])))+C[12]*(
 DP[6]*(DP[12]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[13]*(DP[1]-DP[2]+DP[3]-DP[4])+
 S[2]*(DP[10]-DP[11])+DP[5]*(DP[11]-DP[10]))+DP[7]*(DP[12]*(DP[2]-DP[1]-
 DP[3]+DP[4])+DP[13]*(DP[2]-DP[1]-DP[3]+DP[4])+S[2]*(DP[11]-DP[10])+DP[5]*(
 DP[10]-DP[11])))+DP[0]*(C[4]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+
 DP[14]*(S[2]-DP[5]))+C[3]*(-DP[10]-DP[11])-C[6]*DP[14])+C[5]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[22]*(DP[6]*(
 DP[11]-DP[10])+DP[7]*(DP[10]-DP[11]))+DP[14]*(C[3]*(DP[6]+DP[7])+C[7]));
tmp[1]=+S[2]*(DP[12]*(DP[7]*(S[2]*(DP[9]*(C[13]*(-DP[6]-DP[7])+C[14]*DP[0]-
 C[15])+C[21]*(DP[3]*(DP[6]-DP[7])+DP[4]*(DP[7]-DP[6]))+DP[0]*(C[13]*(DP[3]+
 DP[4])))+C[2]*(DP[6]*(DP[2]-DP[1]+DP[9])+DP[7]*(DP[1]-DP[2]+DP[9])+DP[0]*(-
 DP[3]-DP[4]))+DP[0]*(C[8]*(-DP[1]-DP[2])-C[18]*DP[8]-C[4]*DP[9])+C[12]*(
 DP[3]*(DP[7]-DP[6])+DP[4]*(DP[6]-DP[7]))+DP[8]*(C[8]*(DP[6]+DP[7])+C[9])+
 C[5]*DP[9])+DP[0]*(S[2]*(DP[4]*(C[17]-C[13]*DP[0]+C[16]*DP[6])+DP[9]*(
 C[17]-C[16]*DP[0]+C[13]*DP[6]))+DP[0]*(C[8]*(DP[2]+DP[9])+C[2]*DP[4]+C[19]*
 DP[8])+DP[6]*(C[8]*(-DP[4]-DP[8])-C[19]*DP[2]-C[2]*DP[9])+C[20]*(-DP[2]-
 DP[8])+C[9]*(-DP[4]-DP[9]))+DP[6]*(DP[4]*(S[2]*(-C[17]-C[13]*DP[6])+C[9]+
 C[2]*DP[6])+DP[2]*(C[20]+C[8]*DP[6])))+DP[13]*(DP[7]*(DP[8]*(C[2]*(DP[6]+
 DP[7])+C[5]-C[4]*DP[0])+C[12]*(DP[1]*(DP[7]-DP[6])+DP[2]*(DP[6]-DP[7]))+
 DP[0]*(C[2]*(-DP[1]-DP[2])))+DP[0]*(DP[2]*(C[2]*DP[0]-C[9]-C[8]*DP[6])+
 DP[8]*(C[8]*DP[0]-C[9]-C[2]*DP[6]))+DP[2]*(DP[6]*(C[9]+C[2]*DP[6]))));
S[3]=DP[7]*DP[7];
tmp[2]=+DP[0]*(DP[7]*(DP[5]*(DP[0]*(C[2]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-
 DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[8]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[3]*DP[10]+C[10]*DP[14])+DP[7]*(C[8]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-DP[5]))+C[2]*(
 DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[2]-DP[5]))-C[10]*
 DP[10]-C[3]*DP[14])+C[9]*(DP[12]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[13]*(DP[1]+
 DP[3]+DP[8]+DP[9])+S[2]*(DP[10]+DP[14])+DP[5]*(-DP[10]-DP[14]))+C[11]*(-
 DP[10]-DP[14]))+S[2]*(DP[12]*(S[2]*(DP[3]*(C[17]-C[13]*DP[0]+C[16]*DP[7])+
 DP[9]*(C[17]-C[16]*DP[0]+C[13]*DP[7]))+DP[0]*(C[8]*(DP[1]+DP[9])+C[2]*
 DP[3]+C[19]*DP[8])+DP[7]*(C[8]*(-DP[3]-DP[8])-C[19]*DP[1]-C[2]*DP[9])+
 C[20]*(-DP[1]-DP[8])+C[9]*(-DP[3]-DP[9]))+DP[13]*(DP[1]*(C[2]*DP[0]-C[9]-
 C[8]*DP[7])+DP[8]*(C[8]*DP[0]-C[9]-C[2]*DP[7]))))+DP[0]*(DP[5]*(DP[0]*(
 C[2]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[2]-DP[5]))-
 C[3]*DP[14])+C[9]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(
 DP[5]-S[2]))+C[11]*DP[14])+S[2]*(DP[12]*(DP[9]*(S[2]*(C[13]*DP[0]-C[17])+
 C[9]-C[2]*DP[0])+DP[8]*(C[20]-C[8]*DP[0]))+DP[8]*(DP[13]*(C[9]-C[2]*
 DP[0])))));
R=+DP[6]*(DP[5]*(DP[0]*(DP[0]*(C[2]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*(DP[5]-S[2]))+C[8]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*(DP[5]-S[2]))+C[3]*DP[11]+C[10]*DP[14])+DP[6]*(C[8]*(DP[2]*(
 DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))+C[2]*(DP[8]*(
 DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[2]-DP[5]))-C[10]*DP[11]-
 C[3]*DP[14])+C[9]*(DP[12]*(DP[2]+DP[4]+DP[8]+DP[9])+DP[13]*(DP[2]+DP[4]+
 DP[8]+DP[9])+S[2]*(DP[11]+DP[14])+DP[5]*(-DP[11]-DP[14]))+C[11]*(-DP[11]-
 DP[14]))+DP[6]*(DP[6]*(C[2]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*(DP[5]-S[2]))+C[3]*DP[11])+C[9]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[11]*DP[11])+tmp[0])+tmp[1])+S[3]*(
 DP[5]*(DP[7]*(C[2]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(
 DP[5]-S[2]))+C[3]*DP[10])+C[9]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*(DP[5]-S[2]))+C[11]*DP[10])+S[2]*(DP[12]*(DP[3]*(S[2]*(-
 C[17]-C[13]*DP[7])+C[9]+C[2]*DP[7])+DP[1]*(C[20]+C[8]*DP[7]))+DP[1]*(
 DP[13]*(C[9]+C[2]*DP[7]))))+tmp[2];
R*=(N/D)*Q1[4]*Q2[1]*Q2[2]*Q1[7];
 if(cb_coeff_out)
 {
 }
 return R;
}
