/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F686_out;
static void C686(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[36]*V[36];
S[1]=V[11]*V[11];
S[2]=V[8]*V[8];
S[3]=V[13]*V[13]*V[13]*V[13];
C[62]=+S[3]*(S[2]*(S[1]*(V[35]*(8*V[36]+4*V[35])+4*S[0])));
C[61]=+S[3]*(S[1]*(V[35]*(16*V[36]+8*V[35])+8*S[0]));
C[60]=+S[3]*(S[1]*(V[35]*(8*V[36]+4*V[35])+4*S[0]));
S[4]=V[13]*V[13]*V[13]*V[13]*V[13]*V[13];
C[59]=+S[4]*(V[35]*(8*V[35]-16*V[36])+8*S[0]);
S[5]=V[13]*V[13];
S[6]=V[8]*V[8]*V[8]*V[8];
C[58]=+S[6]*(S[3]*(V[35]*(S[1]*(10*V[36]+5*V[35])+S[5]*(8*V[35]-16*V[36]))+
 S[0]*(8*S[5]+5*S[1])));
C[57]=+S[3]*(V[35]*(S[1]*(16*V[36]+8*V[35])+S[5]*(16*V[35]-32*V[36]))+S[0]*(
 16*S[5]+8*S[1]));
C[56]=+S[4]*(S[2]*(V[35]*(8*V[35]-16*V[36])+8*S[0]));
C[55]=+S[3]*(S[2]*(S[1]*(V[35]*(4*V[36]+2*V[35])+2*S[0])));
C[54]=+S[4]*(S[2]*(V[35]*(4*V[35]-8*V[36])+4*S[0]));
C[53]=+S[3]*(S[2]*(V[35]*(S[1]*(20*V[36]+10*V[35])+S[5]*(16*V[35]-32*
 V[36]))+S[0]*(16*S[5]+10*S[1])));
C[52]=+S[6]*(S[5]*(V[35]*(S[1]*(8*V[36]+4*V[35])+S[5]*(8*V[35]-16*V[36]))+
 S[0]*(8*S[5]+4*S[1])));
C[51]=+S[5]*(V[35]*(S[1]*(8*V[36]+4*V[35])+S[5]*(16*V[35]-32*V[36]))+S[0]*(
 16*S[5]+4*S[1]));
C[50]=+S[2]*(S[5]*(V[35]*(S[1]*(16*V[36]+8*V[35])+S[5]*(16*V[35]-32*V[36]))+
 S[0]*(16*S[5]+8*S[1])));
C[49]=+S[6]*(V[35]*(S[1]*(8*V[36]+4*V[35])+S[5]*(8*V[35]-16*V[36]))+S[0]*(8*
 S[5]+4*S[1]));
C[48]=+S[2]*(V[35]*(S[1]*(16*V[36]+8*V[35])+S[5]*(16*V[35]-32*V[36]))+S[0]*(
 16*S[5]+8*S[1]));
C[47]=+S[6]*(S[3]*(V[35]*(S[1]*(2*V[36]+V[35])+S[5]*(4*V[35]-8*V[36]))+S[0]*
 (4*S[5]+S[1])));
C[46]=+S[3]*(V[35]*(S[1]*(8*V[36]+4*V[35])+S[5]*(8*V[35]-16*V[36]))+S[0]*(8*
 S[5]+4*S[1]));
C[45]=+S[6]*(S[3]*(V[35]*(8*V[35]-16*V[36])+8*S[0]));
C[44]=+S[3]*(S[2]*(V[35]*(S[1]*(4*V[36]+2*V[35])+S[5]*(8*V[35]-16*V[36]))+
 S[0]*(8*S[5]+2*S[1])));
C[43]=+S[6]*(S[5]*(V[35]*(S[1]*(2*V[36]+V[35])+S[5]*(8*V[35]-16*V[36]))+
 S[0]*(8*S[5]+S[1])));
C[42]=+S[5]*(V[35]*(S[1]*(8*V[36]+4*V[35])+S[5]*(8*V[35]-16*V[36]))+S[0]*(8*
 S[5]+4*S[1]));
C[41]=+S[2]*(S[5]*(V[35]*(S[1]*(4*V[36]+2*V[35])+S[5]*(16*V[35]-32*V[36]))+
 S[0]*(16*S[5]+2*S[1])));
C[40]=+S[6]*(S[3]*(V[35]*(16*V[35]-32*V[36])+16*S[0]));
C[39]=+S[6]*(S[3]*(V[35]*(4*V[35]-8*V[36])+4*S[0]));
C[38]=+S[6]*(S[5]*(V[35]*(16*V[35]-32*V[36])+16*S[0]));
C[37]=+S[2]*(S[1]*(S[5]*(V[35]*(8*V[36]+4*V[35])+4*S[0])));
C[36]=+S[1]*(S[5]*(V[35]*(16*V[36]+8*V[35])+8*S[0]));
C[35]=+S[5]*(V[35]*(24*V[35]-48*V[36])+24*S[0]);
C[34]=+S[3]*(V[35]*(S[1]*(-8*V[36]-4*V[35])+S[5]*(8*V[35]-16*V[36]))+S[0]*(
 8*S[5]-4*S[1]));
C[33]=+S[3]*(V[35]*(24*V[35]-48*V[36])+24*S[0]);
C[32]=+S[2]*(S[1]*(S[5]*(V[35]*(4*V[36]+2*V[35])+2*S[0])));
C[31]=+S[5]*(V[35]*(S[1]*(-8*V[36]-4*V[35])+S[5]*(8*V[35]-16*V[36]))+S[0]*(
 8*S[5]-4*S[1]));
C[30]=+S[3]*(V[35]*(8*V[35]-16*V[36])+8*S[0]);
C[29]=+S[3]*(S[2]*(V[35]*(8*V[35]-16*V[36])+8*S[0]));
C[28]=+S[2]*(S[5]*(V[35]*(S[1]*(-8*V[36]-4*V[35])+S[5]*(16*V[35]-32*V[36]))+
 S[0]*(16*S[5]-4*S[1])));
C[27]=+S[1]*(V[35]*(16*V[36]+8*V[35])+8*S[0]);
C[26]=+S[3]*(V[35]*(16*V[35]-32*V[36])+16*S[0]);
C[25]=+S[1]*(S[5]*(V[35]*(8*V[36]+4*V[35])+4*S[0]));
C[24]=+S[3]*(V[35]*(32*V[35]-64*V[36])+32*S[0]);
C[23]=+S[6]*(S[5]*(V[35]*(S[1]*(2*V[36]+V[35])+S[5]*(4*V[35]-8*V[36]))+S[0]*
 (4*S[5]+S[1])));
C[22]=+S[2]*(S[1]*(V[35]*(16*V[36]+8*V[35])+8*S[0]));
C[21]=+S[2]*(S[1]*(V[35]*(8*V[36]+4*V[35])+4*S[0]));
C[20]=+S[3]*(S[2]*(V[35]*(32*V[35]-64*V[36])+32*S[0]));
C[19]=+S[2]*(S[5]*(V[35]*(S[1]*(-4*V[36]-2*V[35])+S[5]*(8*V[35]-16*V[36]))+
 S[0]*(8*S[5]-2*S[1])));
C[18]=+S[3]*(S[2]*(V[35]*(16*V[35]-32*V[36])+16*S[0]));
C[17]=+S[2]*(S[5]*(V[35]*(S[1]*(4*V[36]+2*V[35])+S[5]*(8*V[35]-16*V[36]))+
 S[0]*(8*S[5]+2*S[1])));
C[16]=+S[5]*(V[35]*(32*V[35]-64*V[36])+32*S[0]);
C[15]=+S[6]*(S[5]*(V[35]*(4*V[35]-8*V[36])+4*S[0]));
C[14]=+S[2]*(S[5]*(V[35]*(32*V[35]-64*V[36])+32*S[0]));
C[13]=+S[6]*(V[35]*(8*V[35]-16*V[36])+8*S[0]);
C[12]=+S[6]*(S[5]*(V[35]*(8*V[35]-16*V[36])+8*S[0]));
C[11]=+S[2]*(S[5]*(V[35]*(16*V[35]-32*V[36])+16*S[0]));
C[10]=+S[5]*(V[35]*(16*V[35]-32*V[36])+16*S[0]);
C[9]=+S[5]*(V[35]*(8*V[35]-16*V[36])+8*S[0]);
C[8]=+V[35]*(16*V[35]-32*V[36])+16*S[0];
C[7]=+S[6]*(V[35]*(4*V[35]-8*V[36])+4*S[0]);
C[6]=+V[35]*(8*V[35]-16*V[36])+8*S[0];
C[5]=+S[2]*(S[5]*(V[35]*(8*V[35]-16*V[36])+8*S[0]));
C[4]=+S[2]*(V[35]*(16*V[35]-32*V[36])+16*S[0]);
C[3]=+S[2]*(S[5]*(V[35]*(4*V[35]-8*V[36])+4*S[0]));
C[2]=+S[2]*(V[35]*(8*V[35]-16*V[36])+8*S[0]);
S[7]=V[14]*V[14];
S[8]=V[2]*V[2]*V[2]*V[2];
C[1]=+27*S[7]*S[8];
S[9]=V[52]*V[52];
S[10]=V[15]*V[15];
S[11]=V[1]*V[1]*V[1]*V[1];
C[0]=+8*S[9]*S[10]*S[11];
}
REAL F686_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                  !  b                 b             
         b                 b     /!==>==============@==>==           
       ==>==@==============>==\  |!  P6             |  P1            
         P1 |              P5 |  |!                 |                
            |                 |  |!  n2             |                
            |              n2 |/=+!==>==\          G|-PA             
           G|P7         /==>==+/ |!  P3 |           3                
            1           |  P3 |  |!     |           |                
            |           |     |  |!  E2 |  W+    t  |  u             
         u  |  t     W+ |  E2 | /+!==<==@-->4-@==>==@==>==           
       ==>==@==>==@-2>--@==<==+=/|!  P4   -PC | -PB    P2            
         P2    P8 |  P9    P4 |  |!           |                      
                  |           |  |!  b        |                      
                  |        b  \==+!==>========/                      
                  \========>=====/!  P5                              
                           P6     !                                  
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[63];REAL S[13];REAL tmp[12];                                  
     
if(CalcConst) C686(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[1];
S[2]=V[53]*V[53];
S[3]=DP[12]*DP[12];
S[4]=DP[13]*DP[13];
S[5]=DP[8]*DP[8];
S[6]=DP[9]*DP[9];
S[7]=DP[3]*DP[3];
S[8]=DP[4]*DP[4];
tmp[0]=+DP[7]*(C[11]*(S[2]*(DP[0]-DP[6]-DP[10])+DP[5]*(DP[6]-DP[0]+DP[10])+
 DP[12]*(-DP[2]-DP[4]-DP[13])+DP[13]*(-DP[2]-DP[4]))+DP[10]*(C[2]*(DP[8]*(
 DP[12]+DP[13])+DP[9]*(DP[12]+DP[13]))+C[12]-C[10]*S[1])+S[2]*(S[2]*(C[33]+
 C[9]*DP[6])+C[18]-C[14]*DP[11])+DP[5]*(C[14]*DP[11]-C[18])+C[12]*(DP[6]-
 DP[0])+C[15]*DP[7]-C[45]+C[38]*DP[11])+DP[11]*(C[11]*(S[2]*(DP[0]-DP[6]-
 DP[10])+DP[5]*(DP[6]-DP[0]+DP[10])+DP[8]*(-DP[2]-DP[4]-DP[9])+DP[9]*(-
 DP[2]-DP[4]))+DP[6]*(C[2]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13]))+
 C[12]-C[10]*S[1])+S[2]*(S[2]*(C[33]+C[9]*DP[10])+C[18])+C[12]*(DP[10]-
 DP[0])+C[15]*DP[11]-C[45]-C[18]*DP[5])+DP[6]*(S[2]*(S[2]*(C[51]+C[9]*DP[0]-
 C[10]*DP[10])+C[50]-C[48]*DP[10])+C[21]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-
 DP[12]-DP[13]))+DP[5]*(C[48]*DP[10]-C[50])+C[49]*DP[10]-C[52]-C[15]*DP[0]-
 C[11]*DP[4]*DP[2])+DP[0]*(C[3]*(S[5]+S[6]+S[3]+S[4])+S[2]*(S[2]*(C[9]*
 DP[10]-C[33])-C[29])+C[15]*(DP[0]-DP[10])+C[39]+C[29]*DP[5])+DP[10]*(C[21]*
 (DP[1]*(-DP[8]-DP[9])+DP[3]*(-DP[8]-DP[9]))+S[2]*(C[50]+C[51]*S[2])-C[52]-
 C[11]*DP[4]*DP[2]-C[50]*DP[5])+C[32]*(DP[1]*(DP[8]+DP[9]+DP[12]+DP[13])+
 DP[3]*(DP[8]+DP[9]+DP[12]+DP[13]))+C[29]*(DP[2]*(DP[1]+DP[2]+DP[3])+DP[4]*(
 DP[1]+DP[3]+DP[4]))+S[2]*(-C[53]-C[57]*S[2])+C[58]+C[18]*DP[4]*DP[2]+C[53]*
 DP[5];
tmp[1]=+C[5]*(DP[2]*(DP[0]*(DP[8]-DP[1]-DP[3]+DP[9]+DP[12]+DP[13])+DP[7]*(
 DP[1]+DP[3]-DP[8]-DP[9])+DP[11]*(DP[1]+DP[3]-DP[12]-DP[13])+DP[14]*(DP[8]+
 DP[9]+DP[12]+DP[13])+DP[6]*(-DP[2]-DP[8]-DP[9])+DP[10]*(-DP[2]-DP[12]-
 DP[13]))+DP[4]*(DP[0]*(DP[8]-DP[1]-DP[3]+DP[9]+DP[12]+DP[13])+DP[7]*(DP[1]+
 DP[3]-DP[8]-DP[9])+DP[11]*(DP[1]+DP[3]-DP[12]-DP[13])+DP[14]*(DP[8]+DP[9]+
 DP[12]+DP[13])+DP[6]*(-DP[4]-DP[8]-DP[9])+DP[10]*(-DP[4]-DP[12]-DP[13]))+
 DP[0]*(S[2]*(DP[6]-DP[0]+DP[10])+DP[5]*(DP[0]-DP[6]-DP[10])+DP[9]*DP[8]+
 DP[13]*DP[12])+DP[7]*(DP[1]*(-DP[8]-DP[9])+DP[3]*(-DP[8]-DP[9])+DP[7]*(
 DP[5]-S[2])-S[3]-S[4])+DP[11]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[11]*(DP[5]-S[2])-S[5]-S[6])+DP[14]*(S[2]*(-DP[6]-DP[10])+DP[5]*(
 DP[6]+DP[10])));
tmp[2]=+DP[11]*(C[5]*(DP[8]*(DP[1]+DP[2]+DP[3]+DP[4]-DP[12]-DP[13])+DP[9]*(
 DP[1]+DP[2]+DP[3]+DP[4]-DP[12]-DP[13])+DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+
 DP[13]*(DP[1]+DP[2]+DP[3]+DP[4]))+DP[14]*(C[2]*(DP[1]*(-DP[1]-DP[2]-DP[4])+
 DP[3]*(-DP[2]-DP[3]-DP[4]))+S[2]*(C[10]*S[2]-C[11])+C[12]-C[4]*DP[3]*DP[1]+
 C[11]*DP[5])+DP[6]*(S[2]*(C[14]-C[9]*S[2]-C[2]*DP[11])+DP[5]*(C[2]*DP[11]-
 C[14])+C[7]*DP[11]-C[38])+C[11]*(S[2]*(DP[7]+DP[11])+DP[5]*(-DP[7]-
 DP[11]))+C[20]*(DP[5]-S[2])+C[12]*(-DP[7]-DP[11])+C[40])+C[5]*(DP[6]*(
 DP[1]*(DP[12]-DP[2]-DP[4]+DP[13])+DP[3]*(DP[12]-DP[2]-DP[4]+DP[13]))+DP[7]*
 (DP[12]*(DP[2]+DP[4]+DP[13])+DP[13]*(DP[2]+DP[4])+DP[3]*DP[1])+DP[14]*(
 DP[2]*(-DP[2]-DP[12]-DP[13])+DP[4]*(-DP[4]-DP[12]-DP[13])))+DP[6]*(C[11]*(
 DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13]))+S[2]*(-C[29]-C[30]*S[2])+
 C[39]+C[29]*DP[5])+DP[1]*(DP[1]*(C[3]*DP[7]-C[32])+C[19]*(-DP[12]-DP[13])-
 C[37]*DP[3])+DP[2]*(C[29]*(DP[8]+DP[9])+C[18]*(-DP[12]-DP[13])-C[11]*
 DP[14]*DP[4])+DP[3]*(DP[3]*(C[3]*DP[7]-C[32])+C[19]*(-DP[12]-DP[13]))+
 DP[4]*(C[29]*(DP[8]+DP[9])+C[18]*(-DP[12]-DP[13]))+S[2]*(S[2]*(C[46]-C[26]*
 DP[7])+C[44])+DP[7]*(C[3]*(S[3]+S[4]))-C[47]-C[44]*DP[5];
S[9]=DP[6]*DP[6];
S[10]=DP[10]*DP[10];
tmp[3]=+DP[11]*(DP[6]*(C[2]*(DP[10]*(DP[8]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[9]*
 (-DP[1]-DP[2]-DP[3]-DP[4])+DP[6]*(DP[5]-S[2]))+DP[11]*(DP[8]*(-DP[1]-DP[2]-
 DP[3]-DP[4])+DP[9]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[6]*(DP[5]-S[2]))+DP[14]*(
 DP[2]*(DP[1]+DP[2]+DP[3])+DP[4]*(DP[1]+DP[3]+DP[4])))+C[5]*(S[2]*(DP[6]+
 DP[11])+DP[1]*(DP[8]+DP[9])+DP[2]*(-DP[12]-DP[13])+DP[3]*(DP[8]+DP[9])+
 DP[4]*(-DP[12]-DP[13])+DP[5]*(-DP[6]-DP[11]))+C[11]*(DP[2]*(DP[8]+DP[9])+
 DP[4]*(DP[8]+DP[9])+DP[10]*(S[2]-DP[5]))+S[2]*(S[2]*(C[9]*DP[10]-C[42]+
 C[10]*DP[11])-C[41])+DP[6]*(C[7]*(DP[10]+DP[11])-C[15])+C[43]+C[41]*DP[5]-
 C[12]*DP[10]-C[15]*DP[11]+C[4]*DP[14]*DP[4]*DP[2])+C[5]*(DP[10]*(DP[1]*(
 DP[8]-DP[2]-DP[4]+DP[9])+DP[3]*(DP[8]-DP[2]-DP[4]+DP[9]))+DP[11]*(DP[8]*(
 DP[2]+DP[4]+DP[9])+DP[9]*(DP[2]+DP[4])+DP[3]*DP[1])+DP[14]*(DP[2]*(-DP[2]-
 DP[8]-DP[9])+DP[4]*(-DP[4]-DP[8]-DP[9])))+DP[10]*(C[11]*(DP[2]*(DP[8]+
 DP[9])+DP[4]*(DP[8]+DP[9]))+S[2]*(-C[29]-C[30]*S[2])+C[39]+C[29]*DP[5])+
 DP[1]*(DP[1]*(C[3]*DP[11]-C[32])+C[19]*(-DP[8]-DP[9])-C[37]*DP[3])+DP[2]*(
 C[18]*(-DP[8]-DP[9])+C[29]*(DP[12]+DP[13])-C[11]*DP[14]*DP[4])+DP[3]*(
 DP[3]*(C[3]*DP[11]-C[32])+C[19]*(-DP[8]-DP[9]))+DP[4]*(C[18]*(-DP[8]-
 DP[9])+C[29]*(DP[12]+DP[13]))+S[2]*(S[2]*(C[46]-C[26]*DP[11])+C[44])+
 DP[11]*(C[3]*(S[5]+S[6]))-C[47]-C[44]*DP[5]);
tmp[4]=+DP[7]*(DP[10]*(C[2]*(DP[7]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+
 DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+S[2]*(-DP[10]-DP[11])+DP[5]*(DP[10]+
 DP[11]))+DP[6]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-DP[2]-
 DP[3]-DP[4])+DP[10]*(DP[5]-S[2]))+DP[14]*(DP[2]*(DP[1]+DP[2]+DP[3])+DP[4]*(
 DP[1]+DP[3]+DP[4])))+C[5]*(S[2]*(DP[7]+DP[10])+DP[1]*(DP[12]+DP[13])+DP[2]*
 (-DP[8]-DP[9])+DP[3]*(DP[12]+DP[13])+DP[4]*(-DP[8]-DP[9])+DP[5]*(-DP[7]-
 DP[10]))+S[2]*(S[2]*(C[9]*(DP[6]-DP[11])+C[10]*DP[7]-C[42])+DP[6]*(C[11]-
 C[4]*DP[11])+C[14]*DP[11]-C[41])+DP[6]*(DP[5]*(C[4]*DP[11]-C[11])+C[7]*
 DP[10]-C[12]+C[13]*DP[11])+C[11]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13]))+DP[7]*(C[7]*(DP[10]+DP[11])-C[15])+DP[5]*(C[41]-C[14]*DP[11])+
 C[43]-C[15]*DP[10]-C[38]*DP[11]+C[4]*DP[14]*DP[4]*DP[2])+tmp[2]);
tmp[5]=+DP[0]*(DP[14]*(C[2]*(DP[7]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*
 (DP[1]+DP[2]+DP[3]+DP[4])+DP[11]*(S[2]-DP[5]))+DP[11]*(DP[8]*(DP[1]+DP[2]+
 DP[3]+DP[4])+DP[9]*(DP[1]+DP[2]+DP[3]+DP[4]))+DP[14]*(DP[2]*(-DP[1]-DP[2]-
 DP[3])+DP[4]*(-DP[1]-DP[3]-DP[4])+DP[0]*(DP[5]-S[2]))+DP[0]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13]))+DP[6]*(DP[10]*(S[2]-DP[5])))+S[2]*(
 S[2]*(C[6]*(DP[14]*DP[0]-DP[10]*DP[7]-DP[11]*DP[6])+C[9]*(-DP[7]-DP[11]))+
 C[4]*(DP[10]*DP[7]+DP[11]*DP[6])+C[17])+DP[6]*(DP[11]*(-C[13]-C[4]*DP[5])+
 C[15]-C[7]*DP[10])+DP[2]*(DP[4]*(C[14]-C[4]*DP[14])+C[11]*DP[2])+DP[7]*(
 DP[10]*(-C[13]-C[4]*DP[5])-C[7]*DP[11])+DP[1]*(C[21]*DP[1]+C[22]*DP[3])+
 C[21]*S[7]-C[23]+C[11]*S[8]-C[17]*DP[5]+C[15]*DP[10]+C[7]*DP[14]*DP[0])+
 tmp[0]+tmp[1]);
tmp[6]=+DP[6]*(S[2]*(C[9]*(DP[7]*(DP[13]-DP[3])+DP[10]*(-DP[9]-DP[13])+
 DP[6]*DP[4])+DP[13]*(C[31]-C[10]*DP[11])+C[25]*DP[3]+C[30]*DP[9])+DP[11]*(
 DP[8]*(C[4]*(DP[10]+DP[11])-C[14])+DP[9]*(C[2]*(DP[10]+DP[11])-C[11])+
 C[11]*DP[12]+C[5]*DP[13])+DP[7]*(DP[10]*(C[4]*DP[12]+C[2]*DP[13])+C[11]*(
 DP[1]-DP[13])+C[5]*DP[3]-C[14]*DP[12])+DP[6]*(C[5]*(-DP[2]-DP[4]))-C[37]*
 DP[1]-C[32]*DP[3])+DP[10]*(S[2]*(DP[9]*(C[31]-C[10]*DP[7]+C[9]*DP[11])+
 DP[3]*(C[25]-C[9]*DP[11])+C[9]*DP[10]*DP[4]+C[30]*DP[13])+DP[7]*(DP[7]*(
 C[4]*DP[12]+C[2]*DP[13])+C[11]*(DP[8]-DP[13])+C[5]*DP[9]-C[14]*DP[12])+
 DP[11]*(C[11]*(DP[1]-DP[9])+C[5]*DP[3]-C[14]*DP[8])+DP[10]*(C[5]*(-DP[2]-
 DP[4]))-C[37]*DP[1]-C[32]*DP[3])+DP[7]*(DP[11]*(C[11]*(-DP[8]-DP[12])+C[5]*
 (-DP[9]-DP[13]))+DP[7]*(-C[11]*DP[12]-C[5]*DP[13])+DP[9]*(C[26]*S[2]-
 C[29])+C[18]*(DP[13]-DP[8])+C[20]*DP[12])+DP[11]*(DP[8]*(C[20]-C[11]*
 DP[11])+DP[9]*(C[18]-C[5]*DP[11])+DP[13]*(C[26]*S[2]-C[29])-C[18]*DP[12])+
 S[2]*(C[34]*(-DP[9]-DP[13])-C[61]*DP[3]-C[59]*DP[4])+C[56]*(DP[2]+DP[4])+
 C[62]*DP[1]+C[55]*DP[3];
tmp[7]=+DP[14]*(S[2]*(DP[4]*(C[8]*(DP[6]*(DP[10]+DP[11])+DP[10]*DP[7]-
 DP[14]*DP[0])+C[16]*(DP[0]-DP[6]-DP[10])+C[10]*(-DP[7]-DP[11])+C[24]+C[9]*
 DP[14])+DP[3]*(DP[6]*(C[8]*(DP[10]+DP[11])-C[10])+DP[7]*(C[8]*DP[10]-C[9])+
 C[26]-C[10]*DP[10]-C[9]*DP[11]-C[6]*DP[14]*DP[0])+DP[0]*(DP[9]*(C[10]-C[6]*
 DP[10])+DP[13]*(C[10]-C[6]*DP[6]))+C[9]*(-DP[11]*DP[9]-DP[13]*DP[7]))+C[4]*
 (DP[6]*(DP[10]*(-DP[1]-DP[2]-DP[4])+DP[11]*(-DP[1]-DP[2]-DP[4]))+DP[0]*(
 DP[14]*(DP[1]+DP[2]+DP[4])-DP[11]*DP[8]-DP[12]*DP[7])+DP[7]*(DP[10]*(-
 DP[1]-DP[2]-DP[4])+DP[11]*DP[1]))+C[11]*(DP[7]*(DP[2]+DP[4]+DP[12])+DP[11]*
 (DP[2]+DP[4]+DP[8])+DP[0]*(-DP[8]-DP[12])+DP[1]*(DP[6]+DP[10]))+DP[3]*(
 C[2]*(DP[6]*(-DP[10]-DP[11])+DP[7]*(DP[11]-DP[10])+DP[14]*DP[0])+C[5]*(
 DP[6]+DP[10])-C[19])+DP[0]*(DP[9]*(-C[5]-C[2]*DP[11])+DP[13]*(-C[5]-C[2]*
 DP[7])+C[14]*(-DP[2]-DP[4]))+DP[2]*(C[14]*(DP[6]+DP[10])-C[20]-C[5]*
 DP[14])+DP[4]*(C[14]*(DP[6]+DP[10])-C[20]-C[5]*DP[14])+C[5]*(DP[11]*DP[9]+
 DP[13]*DP[7])-C[28]*DP[1]);
S[11]=DP[11]*DP[11];
tmp[8]=+DP[3]*(DP[7]*(DP[12]*(DP[10]*(C[8]*(-DP[6]-DP[7])+C[10])+C[9]*(
 DP[7]+DP[11])+C[10]*DP[6]-C[26]+C[6]*DP[14]*DP[0])+DP[1]*(C[9]*DP[7]-C[25]-
 C[8]*DP[14]*DP[11])+DP[8]*(C[9]*(DP[11]-DP[0])))+DP[11]*(DP[8]*(DP[6]*(
 C[8]*(-DP[10]-DP[11])+C[10])+C[10]*DP[10]-C[26]+C[9]*DP[11]+C[6]*DP[14]*
 DP[0])+DP[1]*(C[9]*DP[11]-C[25])-C[9]*DP[12]*DP[0])+DP[0]*(C[27]*(DP[14]*
 DP[1]-DP[10]*DP[8]-DP[12]*DP[6])+C[36]*(DP[8]+DP[12])))+DP[0]*(DP[9]*(
 DP[12]*(DP[7]*(C[8]*DP[10]-C[9])+C[9]*DP[11]-C[6]*DP[14]*DP[0])+DP[1]*(
 C[6]*DP[14]*DP[11]-C[25]-C[9]*DP[7])+DP[8]*(C[9]*DP[0]-C[10]*DP[11]))+
 DP[13]*(DP[8]*(DP[11]*(C[8]*DP[6]-C[9])+C[9]*DP[7]-C[6]*DP[14]*DP[0])+
 DP[1]*(C[6]*DP[14]*DP[7]-C[25]-C[9]*DP[11])+DP[12]*(C[9]*DP[0]-C[10]*
 DP[7])))+C[9]*(DP[7]*(DP[11]*(DP[1]*(DP[9]+DP[13])-DP[12]*DP[9]-DP[13]*
 DP[8])+DP[7]*(DP[13]*(DP[12]-DP[1])))+S[11]*(DP[9]*(DP[8]-DP[1])))+DP[1]*(
 C[25]*(DP[11]*DP[9]+DP[13]*DP[7]));
S[12]=DP[14]*DP[14];
tmp[9]=+DP[8]*(DP[11]*(DP[4]*(DP[6]*(C[2]*(DP[10]+DP[11])-C[11])+C[5]*(
 DP[14]-DP[7]-DP[11])+DP[0]*(C[11]-C[2]*DP[14])+C[18]-C[11]*DP[10])+DP[3]*(
 DP[6]*(C[2]*(DP[10]+DP[11])-C[5])+C[5]*(-DP[7]-DP[10])+C[19]-C[2]*DP[14]*
 DP[0])+DP[0]*(DP[6]*(-C[4]*DP[12]-C[2]*DP[13])+C[11]*(DP[8]+DP[9]))+C[5]*(
 DP[11]*(-DP[8]-DP[9])+DP[13]*DP[7])+C[11]*DP[12]*DP[7])+DP[0]*(C[5]*(DP[4]*
 (DP[6]-DP[0]+DP[7]-DP[14])+DP[0]*(-DP[8]-DP[9])+DP[7]*DP[3])+DP[10]*(DP[7]*
 (-C[4]*DP[12]-C[2]*DP[13])+C[21]*DP[3])+DP[0]*(DP[14]*(C[4]*DP[12]+C[2]*
 DP[13]))-C[32]*DP[3])+DP[4]*(DP[7]*(C[5]*DP[10]-C[29])))+DP[12]*(DP[7]*(
 DP[4]*(DP[10]*(C[2]*(DP[6]+DP[7])-C[11])+C[5]*(DP[14]-DP[7]-DP[11])+DP[0]*(
 C[11]-C[2]*DP[14])+C[18]-C[11]*DP[6])+DP[3]*(DP[10]*(C[2]*(DP[6]+DP[7])-
 C[5])+C[5]*(-DP[6]-DP[11])+C[19]-C[2]*DP[14]*DP[0])+DP[0]*(C[11]*(DP[12]+
 DP[13])-C[2]*DP[10]*DP[9])+C[5]*(DP[7]*(-DP[12]-DP[13])+DP[11]*DP[9]))+
 DP[0]*(C[5]*(DP[4]*(DP[10]-DP[0]+DP[11]-DP[14])+DP[0]*(-DP[12]-DP[13])+
 DP[11]*DP[3])+DP[3]*(C[21]*DP[6]-C[32])+DP[9]*(C[2]*(DP[14]*DP[0]-DP[11]*
 DP[6])))+DP[4]*(DP[11]*(C[5]*DP[6]-C[29])));
tmp[10]=+DP[1]*(DP[7]*(C[5]*(DP[13]*(-DP[6]-DP[10]-DP[11])+DP[0]*(DP[9]-
 DP[4])+DP[7]*(-DP[1]-DP[3])+DP[6]*DP[4]-DP[11]*DP[9])+DP[12]*(DP[10]*(C[4]*
 (DP[6]+DP[7])-C[11])+C[11]*(-DP[6]-DP[11])+C[28]-C[4]*DP[14]*DP[0])+DP[14]*
 (DP[11]*(C[4]*(DP[1]+DP[3])+C[2]*DP[4])+C[2]*(-DP[10]*DP[4]-DP[13]*DP[0]))+
 DP[13]*(DP[10]*(C[2]*(DP[6]+DP[7]))+C[19])+DP[8]*(C[11]*(DP[0]-DP[11]))+
 C[37]*(DP[1]+DP[3]))+DP[11]*(DP[6]*(DP[8]*(C[4]*(DP[10]+DP[11])-C[11])+
 DP[9]*(C[2]*(DP[10]+DP[11])-C[5])-C[2]*DP[14]*DP[4])+C[5]*(DP[0]*(DP[13]-
 DP[4])+DP[10]*(DP[4]-DP[9])+DP[11]*(-DP[1]-DP[3]))+DP[0]*(DP[14]*(-C[4]*
 DP[8]-C[2]*DP[9])+C[11]*DP[12])+DP[8]*(C[28]-C[11]*DP[10])+C[37]*(DP[1]+
 DP[3])+C[19]*DP[9])+DP[0]*(C[22]*(DP[14]*(-DP[1]-DP[3])+DP[10]*DP[8]+
 DP[12]*DP[6])+DP[4]*(C[5]*DP[0]-C[29]+C[2]*S[12])+DP[9]*(C[21]*DP[10]-
 C[32])+DP[13]*(C[21]*DP[6]-C[32])+C[37]*(-DP[8]-DP[12]))+DP[4]*(DP[14]*(
 DP[6]*(C[5]-C[2]*DP[10])+C[5]*DP[10]-C[19])+C[32]*(-DP[6]-DP[10])+C[55]))+
 tmp[9];
tmp[11]=+S[2]*(DP[2]*(DP[0]*(C[11]*(DP[0]*(DP[1]-DP[8]-DP[12])+DP[6]*(DP[2]+
 DP[4]+DP[8])+DP[7]*(DP[8]-DP[1]+DP[13])+DP[10]*(DP[2]+DP[4]+DP[12])+DP[11]*
 (DP[9]-DP[1]+DP[12]))+S[2]*(C[10]*(DP[4]*(-DP[6]-DP[10])+DP[10]*DP[9]+
 DP[13]*DP[6])+DP[3]*(C[9]*(-DP[6]-DP[10])+C[33])+C[33]*(-DP[9]-DP[13])+
 C[26]*DP[4])+C[5]*(DP[0]*(DP[3]-DP[9]-DP[13])+DP[3]*(-DP[7]-DP[11])+DP[9]*(
 DP[6]+DP[7])+DP[13]*(DP[10]+DP[11]))+C[18]*(-DP[1]-DP[2]-DP[4])+C[14]*(
 DP[11]*DP[8]+DP[12]*DP[7])-C[29]*DP[3])+tmp[6]+tmp[7])+S[2]*(DP[4]*(DP[0]*(
 C[10]*(DP[8]*(DP[0]-DP[6]-DP[7]-DP[10])+DP[12]*(DP[0]-DP[6]-DP[10]-DP[11])+
 DP[1]*(DP[7]-DP[0]+DP[11]))+DP[14]*(C[6]*(DP[10]*DP[8]+DP[12]*DP[6]-DP[14]*
 DP[1])+C[8]*(DP[11]*DP[8]+DP[12]*DP[7]))+DP[1]*(C[9]*(DP[6]+DP[10])-C[30])+
 DP[8]*(C[33]-C[16]*DP[11])+DP[12]*(C[33]-C[16]*DP[7]))+DP[7]*(DP[12]*(
 DP[10]*(C[8]*(-DP[6]-DP[7])+C[16])+C[10]*(DP[7]+DP[11])+C[35]*DP[6]-C[24]-
 C[9]*DP[14])+DP[1]*(DP[14]*(C[9]-C[8]*DP[11])-C[9]*DP[6])+C[10]*DP[11]*
 DP[8])+DP[8]*(DP[11]*(DP[6]*(C[8]*(-DP[10]-DP[11])+C[16])+C[35]*DP[10]-
 C[24]+C[10]*DP[11]-C[9]*DP[14])+DP[6]*(C[9]*DP[10]-C[30])+C[34]-C[31]*
 DP[10])+DP[1]*(DP[11]*(C[9]*(DP[14]-DP[10]))+C[60]-C[25]*DP[14])+DP[12]*(
 DP[6]*(C[9]*DP[10]-C[31])+C[34]-C[30]*DP[10]))+tmp[8])+tmp[10]);
R=+DP[5]*(DP[14]*(DP[2]*(DP[6]*(DP[10]*(C[2]*(DP[1]+DP[2]+DP[3])+C[4]*
 DP[4])+C[5]*(-DP[1]-DP[3])-C[11]*DP[2]-C[14]*DP[4])+DP[10]*(C[5]*(-DP[1]-
 DP[3])-C[11]*DP[2]-C[14]*DP[4])+DP[2]*(C[18]+C[3]*DP[14])+DP[4]*(C[20]+
 C[5]*DP[14])+C[19]*(DP[1]+DP[3]))+DP[4]*(DP[6]*(DP[10]*(C[2]*(DP[1]+DP[3]+
 DP[4]))+C[5]*(-DP[1]-DP[3])-C[11]*DP[4])+DP[4]*(C[18]-C[11]*DP[10]+C[3]*
 DP[14])+DP[1]*(C[19]-C[5]*DP[10])+DP[3]*(C[19]-C[5]*DP[10])))+DP[2]*(DP[6]*
 (DP[6]*(C[3]*DP[2]+C[5]*DP[4])+C[32]*(DP[1]+DP[3]))+DP[10]*(DP[10]*(C[3]*
 DP[2]+C[5]*DP[4])+C[32]*(DP[1]+DP[3]))+C[55]*(-DP[1]-DP[3])-C[54]*DP[2]-
 C[56]*DP[4])+DP[4]*(C[32]*(DP[1]*(DP[6]+DP[10])+DP[3]*(DP[6]+DP[10]))+
 DP[4]*(C[3]*(S[9]+S[10])-C[54])+C[55]*(-DP[1]-DP[3]))+tmp[3]+tmp[4]+
 tmp[5])+tmp[11];
R*=(N/D)*Q1[6]*Q1[1]*Q2[2]*Q1[7]*Q1[3];
 if(cb_coeff_out)
 {
 }
 return R;
}
