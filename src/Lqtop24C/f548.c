/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F548_out;
static void C548(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[11]*V[11];
S[1]=V[9]*V[9];
S[2]=V[38]*V[38];
S[3]=V[8]*V[8];
C[13]=+S[3]*(V[37]*(S[1]*(8*V[38]-4*V[37])+S[0]*(8*V[38]+4*V[37]))+S[2]*(4*(
 S[0]-S[1])));
S[4]=V[37]*V[37];
C[12]=+S[3]*(V[9]*(V[11]*(8*(S[2]-S[4]))));
C[11]=+S[3]*(V[37]*(8*V[37]-16*V[38])+8*S[2]);
C[10]=+V[37]*(S[1]*(8*V[38]-4*V[37])+S[0]*(8*V[38]+4*V[37]))+S[2]*(4*(S[0]-
 S[1]));
C[9]=+V[9]*(V[11]*(8*(S[2]-S[4])));
C[8]=+V[37]*(8*V[37]-16*V[38])+8*S[2];
S[5]=V[8]*V[8]*V[8]*V[8];
C[7]=+S[5]*(V[37]*(S[1]*(2*V[38]-V[37])+S[0]*(2*V[38]+V[37]))+S[2]*(S[0]-
 S[1]));
C[6]=+S[3]*(V[37]*(S[1]*(4*V[38]-2*V[37])+S[0]*(4*V[38]+2*V[37]))+S[2]*(2*(
 S[0]-S[1])));
C[5]=+S[5]*(V[9]*(V[11]*(2*(S[2]-S[4]))));
C[4]=+S[5]*(V[37]*(2*V[37]-4*V[38])+2*S[2]);
C[3]=+S[3]*(V[9]*(V[11]*(4*(S[2]-S[4]))));
C[2]=+S[3]*(V[37]*(4*V[37]-8*V[38])+4*S[2]);
S[6]=V[14]*V[14];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[6]*S[7];
S[8]=V[52]*V[52];
S[9]=V[16]*V[16];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+32*S[8]*S[9]*S[10];
}
REAL F548_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
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
         U  |              U      !  U              |  U             
       ==<==@==============<======!==<==============@==<==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[14];REAL S[4];REAL tmp[1];                                    
     
if(CalcConst) C548(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[1];
S[2]=V[53]*V[53];
S[3]=DP[6]*DP[6];
tmp[0]=+DP[5]*(C[2]*(DP[0]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(
 DP[8]-DP[1]-DP[3]+DP[9])+S[2]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+DP[6]*
 (DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+S[2]*(
 DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[7]*(DP[12]*(DP[1]+DP[3]-DP[8]-
 DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[2]*(DP[10]-DP[14])+DP[5]*(DP[14]-
 DP[10])))+DP[6]*(DP[6]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-
 DP[2]-DP[3]-DP[4])+S[2]*(-DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]))+DP[7]*(
 DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+S[2]*(-
 DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]))))+DP[7]*(C[3]*(DP[12]*(DP[1]+DP[2]+
 DP[3]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4]-DP[8]-DP[9])+S[2]*
 (DP[10]+DP[11]-DP[14])+DP[5]*(DP[14]-DP[10]-DP[11]))+C[4]*(DP[0]*(DP[14]-
 DP[10])+DP[6]*(DP[10]+DP[11]))+C[5]*(DP[14]-DP[10]-DP[11]))+C[6]*(DP[0]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+DP[6]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2])))+C[4]*(
 DP[0]*(DP[0]*(DP[10]-DP[14])+DP[6]*(DP[11]-DP[14]))+S[3]*(DP[10]+DP[11]))+
 C[7]*(DP[11]*DP[0]+DP[14]*DP[6]));
R=+DP[7]*(S[2]*(DP[12]*(DP[0]*(S[2]*(C[8]*(DP[9]*(DP[0]+DP[6]-DP[7])+DP[3]*(
 DP[7]-DP[0])-DP[6]*DP[4])-C[10]*DP[4])+C[11]*(DP[8]*(DP[7]-DP[0]-DP[6])+
 DP[1]*(DP[0]-DP[7])+DP[6]*DP[2])+C[2]*(DP[9]*(DP[7]-DP[0]-DP[6])+DP[3]*(
 DP[0]-DP[7])+DP[6]*DP[4])+C[13]*DP[2]+C[6]*DP[4])+DP[6]*(DP[6]*(S[2]*(C[8]*
 (-DP[3]-DP[4]))+C[11]*(DP[1]+DP[2])+C[2]*(DP[3]+DP[4]))+DP[7]*(S[2]*(C[8]*
 (-DP[3]-DP[4]))+C[11]*(DP[1]+DP[2])+C[2]*(DP[3]+DP[4]))+DP[9]*(C[6]-C[10]*
 S[2])+C[13]*DP[8])+DP[7]*(S[2]*(C[9]*(DP[3]+DP[4]-DP[9]))+C[12]*(DP[8]-
 DP[1]-DP[2])+C[3]*(DP[9]-DP[3]-DP[4])))+DP[13]*(C[2]*(DP[0]*(DP[8]*(DP[7]-
 DP[0]-DP[6])+DP[1]*(DP[0]-DP[7])+DP[6]*DP[2])+DP[6]*(DP[1]*(DP[6]+DP[7])+
 DP[2]*(DP[6]+DP[7])))+DP[7]*(C[3]*(DP[8]-DP[1]-DP[2]))+C[6]*(DP[2]*DP[0]+
 DP[8]*DP[6])))+tmp[0]);
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*9)/(8);
 }
 return R;
}
