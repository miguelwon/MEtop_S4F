/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F175_out;
static void C175(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[36]*V[36];
S[1]=V[11]*V[11];
S[2]=V[8]*V[8];
S[3]=V[13]*V[13]*V[13]*V[13];
C[80]=+S[3]*(S[2]*(S[1]*(V[35]*(8*V[36]+4*V[35])+4*S[0])));
S[4]=V[13]*V[13]*V[13]*V[13]*V[13]*V[13];
C[79]=+S[4]*(V[35]*(4*V[35]-8*V[36])+4*S[0]);
C[78]=+S[3]*(S[1]*(V[35]*(8*V[36]+4*V[35])+4*S[0]));
C[77]=+S[3]*(S[1]*(V[35]*(16*V[36]+8*V[35])+8*S[0]));
S[5]=V[13]*V[13];
S[6]=V[8]*V[8]*V[8]*V[8];
C[76]=+S[6]*(S[3]*(V[35]*(S[1]*(10*V[36]+5*V[35])+S[5]*(8*V[35]-16*V[36]))+
 S[0]*(8*S[5]+5*S[1])));
C[75]=+S[3]*(V[35]*(S[1]*(16*V[36]+8*V[35])+S[5]*(16*V[35]-32*V[36]))+S[0]*(
 16*S[5]+8*S[1]));
C[74]=+S[6]*(S[3]*(V[35]*(6*V[35]-12*V[36])+6*S[0]));
C[73]=+S[3]*(V[35]*(20*V[35]-40*V[36])+20*S[0]);
C[72]=+S[4]*(S[2]*(V[35]*(4*V[35]-8*V[36])+4*S[0]));
C[71]=+S[4]*(S[2]*(V[35]*(2*V[35]-4*V[36])+2*S[0]));
C[70]=+S[3]*(S[2]*(S[1]*(V[35]*(4*V[36]+2*V[35])+2*S[0])));
C[69]=+S[3]*(S[2]*(V[35]*(S[1]*(20*V[36]+10*V[35])+S[5]*(16*V[35]-32*
 V[36]))+S[0]*(16*S[5]+10*S[1])));
C[68]=+S[3]*(S[2]*(V[35]*(12*V[35]-24*V[36])+12*S[0]));
C[67]=+S[6]*(S[3]*(V[35]*(S[1]*(2*V[36]+V[35])+S[5]*(4*V[35]-8*V[36]))+S[0]*
 (4*S[5]+S[1])));
C[66]=+S[3]*(V[35]*(S[1]*(8*V[36]+4*V[35])+S[5]*(8*V[35]-16*V[36]))+S[0]*(8*
 S[5]+4*S[1]));
C[65]=+S[6]*(S[3]*(V[35]*(8*V[35]-16*V[36])+8*S[0]));
C[64]=+S[3]*(S[2]*(V[35]*(S[1]*(4*V[36]+2*V[35])+S[5]*(8*V[35]-16*V[36]))+
 S[0]*(8*S[5]+2*S[1])));
C[63]=+S[6]*(S[3]*(V[35]*(16*V[35]-32*V[36])+16*S[0]));
C[62]=+S[6]*(S[3]*(V[35]*(2*V[35]-4*V[36])+2*S[0]));
C[61]=+S[6]*(S[5]*(V[35]*(S[1]*(8*V[36]+4*V[35])+S[5]*(8*V[35]-16*V[36]))+
 S[0]*(8*S[5]+4*S[1])));
C[60]=+S[5]*(V[35]*(S[1]*(8*V[36]+4*V[35])+S[5]*(16*V[35]-32*V[36]))+S[0]*(
 16*S[5]+4*S[1]));
C[59]=+S[2]*(S[5]*(V[35]*(S[1]*(16*V[36]+8*V[35])+S[5]*(16*V[35]-32*V[36]))+
 S[0]*(16*S[5]+8*S[1])));
C[58]=+S[6]*(S[5]*(V[35]*(S[1]*(2*V[36]+V[35])+S[5]*(8*V[35]-16*V[36]))+
 S[0]*(8*S[5]+S[1])));
C[57]=+S[5]*(V[35]*(S[1]*(8*V[36]+4*V[35])+S[5]*(8*V[35]-16*V[36]))+S[0]*(8*
 S[5]+4*S[1]));
C[56]=+S[2]*(S[5]*(V[35]*(S[1]*(4*V[36]+2*V[35])+S[5]*(16*V[35]-32*V[36]))+
 S[0]*(16*S[5]+2*S[1])));
C[55]=+S[6]*(V[35]*(S[1]*(8*V[36]+4*V[35])+S[5]*(8*V[35]-16*V[36]))+S[0]*(8*
 S[5]+4*S[1]));
C[54]=+S[2]*(V[35]*(S[1]*(16*V[36]+8*V[35])+S[5]*(16*V[35]-32*V[36]))+S[0]*(
 16*S[5]+8*S[1]));
C[53]=+S[6]*(S[3]*(V[35]*(4*V[35]-8*V[36])+4*S[0]));
C[52]=+S[6]*(S[5]*(V[35]*(16*V[35]-32*V[36])+16*S[0]));
C[51]=+S[6]*(S[5]*(V[35]*(8*V[35]-16*V[36])+8*S[0]));
C[50]=+S[6]*(V[35]*(12*V[35]-24*V[36])+12*S[0]);
C[49]=+S[2]*(S[1]*(S[5]*(V[35]*(8*V[36]+4*V[35])+4*S[0])));
C[48]=+S[1]*(S[5]*(V[35]*(16*V[36]+8*V[35])+8*S[0]));
C[47]=+S[5]*(V[35]*(24*V[35]-48*V[36])+24*S[0]);
C[46]=+S[3]*(S[2]*(V[35]*(8*V[35]-16*V[36])+8*S[0]));
C[45]=+S[3]*(V[35]*(4*V[35]-8*V[36])+4*S[0]);
C[44]=+S[5]*(V[35]*(12*V[35]-24*V[36])+12*S[0]);
C[43]=+V[35]*(20*V[35]-40*V[36])+20*S[0];
C[42]=+S[3]*(V[35]*(S[1]*(-8*V[36]-4*V[35])+S[5]*(8*V[35]-16*V[36]))+S[0]*(
 8*S[5]-4*S[1]));
C[41]=+S[3]*(V[35]*(24*V[35]-48*V[36])+24*S[0]);
C[40]=+S[2]*(S[1]*(S[5]*(V[35]*(4*V[36]+2*V[35])+2*S[0])));
C[39]=+S[5]*(V[35]*(S[1]*(-8*V[36]-4*V[35])+S[5]*(8*V[35]-16*V[36]))+S[0]*(
 8*S[5]-4*S[1]));
C[38]=+S[3]*(V[35]*(12*V[35]-24*V[36])+12*S[0]);
C[37]=+S[3]*(S[2]*(V[35]*(4*V[35]-8*V[36])+4*S[0]));
C[36]=+S[3]*(V[35]*(8*V[35]-16*V[36])+8*S[0]);
C[35]=+S[2]*(S[5]*(V[35]*(S[1]*(-8*V[36]-4*V[35])+S[5]*(16*V[35]-32*V[36]))+
 S[0]*(16*S[5]-4*S[1])));
C[34]=+S[3]*(V[35]*(32*V[35]-64*V[36])+32*S[0]);
C[33]=+S[1]*(S[5]*(V[35]*(8*V[36]+4*V[35])+4*S[0]));
C[32]=+S[3]*(V[35]*(16*V[35]-32*V[36])+16*S[0]);
C[31]=+S[1]*(V[35]*(16*V[36]+8*V[35])+8*S[0]);
C[30]=+S[6]*(S[5]*(V[35]*(S[1]*(2*V[36]+V[35])+S[5]*(4*V[35]-8*V[36]))+S[0]*
 (4*S[5]+S[1])));
C[29]=+S[3]*(S[2]*(V[35]*(32*V[35]-64*V[36])+32*S[0]));
C[28]=+S[3]*(S[2]*(V[35]*(16*V[35]-32*V[36])+16*S[0]));
C[27]=+S[2]*(S[1]*(V[35]*(16*V[36]+8*V[35])+8*S[0]));
C[26]=+S[2]*(S[5]*(V[35]*(S[1]*(-4*V[36]-2*V[35])+S[5]*(8*V[35]-16*V[36]))+
 S[0]*(8*S[5]-2*S[1])));
C[25]=+S[2]*(S[1]*(V[35]*(8*V[36]+4*V[35])+4*S[0]));
C[24]=+S[2]*(S[5]*(V[35]*(S[1]*(4*V[36]+2*V[35])+S[5]*(8*V[35]-16*V[36]))+
 S[0]*(8*S[5]+2*S[1])));
C[23]=+V[35]*(8*V[35]-16*V[36])+8*S[0];
C[22]=+S[5]*(V[35]*(8*V[35]-16*V[36])+8*S[0]);
C[21]=+S[5]*(V[35]*(32*V[35]-64*V[36])+32*S[0]);
C[20]=+S[6]*(S[5]*(V[35]*(4*V[35]-8*V[36])+4*S[0]));
C[19]=+S[2]*(S[5]*(V[35]*(32*V[35]-64*V[36])+32*S[0]));
C[18]=+V[35]*(24*V[35]-48*V[36])+24*S[0];
C[17]=+S[6]*(V[35]*(4*V[35]-8*V[36])+4*S[0]);
C[16]=+S[2]*(V[35]*(24*V[35]-48*V[36])+24*S[0]);
C[15]=+S[2]*(V[35]*(12*V[35]-24*V[36])+12*S[0]);
C[14]=+S[2]*(S[5]*(V[35]*(16*V[35]-32*V[36])+16*S[0]));
C[13]=+S[5]*(V[35]*(16*V[35]-32*V[36])+16*S[0]);
C[12]=+S[2]*(S[5]*(V[35]*(8*V[35]-16*V[36])+8*S[0]));
C[11]=+V[35]*(12*V[35]-24*V[36])+12*S[0];
C[10]=+S[5]*(V[35]*(4*V[35]-8*V[36])+4*S[0]);
C[9]=+V[35]*(16*V[35]-32*V[36])+16*S[0];
C[8]=+S[6]*(V[35]*(2*V[35]-4*V[36])+2*S[0]);
C[7]=+V[35]*(4*V[35]-8*V[36])+4*S[0];
C[6]=+S[2]*(S[5]*(V[35]*(4*V[35]-8*V[36])+4*S[0]));
C[5]=+S[2]*(V[35]*(16*V[35]-32*V[36])+16*S[0]);
C[4]=+S[2]*(S[5]*(V[35]*(2*V[35]-4*V[36])+2*S[0]));
C[3]=+S[2]*(V[35]*(8*V[35]-16*V[36])+8*S[0]);
C[2]=+S[2]*(V[35]*(4*V[35]-8*V[36])+4*S[0]);
S[7]=V[14]*V[14];
S[8]=V[2]*V[2]*V[2]*V[2];
C[1]=+27*S[7]*S[8];
S[9]=V[52]*V[52];
S[10]=V[15]*V[15];
S[11]=V[1]*V[1]*V[1]*V[1];
C[0]=+8*S[9]*S[10]*S[11];
}
REAL F175_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                  !  n2                              
                           n2 /===!==>==\                            
                        /==>==/   !  P3 |                            
                        |  P3     !     |                            
                        |         !  E2 |  W+    t     u             
         u     t     W+ |  E2  /==!==<==@-->4-@==>==@==>==           
       ==>==@==>==@-2>--@==<===/  !  P4   -PC | -PB |  P1            
         P1 |  P8 |  P9    P4     !           |     |                
            |     |               !  b        |     |                
            |     |        b     /!==>========/    G|-PA             
           G|P7   \========>====\|!  P5             3                
            1              P6   ||!                 |                
            |                   ||!  b              |  b             
         b  |              b    \+!==>==============@==>==           
       ==>==@==============>=====/!  P6                P2            
         P2                P5     !                                  
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[81];REAL S[14];REAL tmp[14];                                  
     
if(CalcConst) C175(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[1];
S[2]=V[53]*V[53];
S[3]=DP[1]*DP[1];
S[4]=DP[3]*DP[3];
S[5]=DP[4]*DP[4];
S[6]=DP[12]*DP[12];
S[7]=DP[13]*DP[13];
S[8]=DP[8]*DP[8];
S[9]=DP[9]*DP[9];
tmp[0]=+DP[10]*(C[14]*(DP[8]*(-DP[1]-DP[3]-DP[9])+S[2]*(DP[0]-DP[7])+DP[5]*(
 DP[7]-DP[0])+DP[9]*(-DP[1]-DP[3]))+DP[7]*(C[2]*(DP[8]*(DP[12]+DP[13])+
 DP[9]*(DP[12]+DP[13]))+C[51]-C[13]*S[1])+DP[11]*(DP[8]*(C[2]*DP[8]+C[3]*
 DP[9])+C[20]+C[2]*S[9])+C[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13]))+S[2]*(C[28]+C[41]*S[2])+C[20]*DP[10]-C[65]-C[51]*DP[0]-C[28]*
 DP[5])+DP[7]*(S[2]*(S[2]*(C[60]+C[22]*DP[0]-C[13]*DP[11])+C[59]-C[54]*
 DP[11])+C[6]*(DP[1]*(-DP[8]-DP[9])+DP[3]*(-DP[8]-DP[9]))+C[25]*(DP[2]*(-
 DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13]))+DP[5]*(C[54]*DP[11]-C[59])+C[55]*
 DP[11]-C[61]-C[20]*DP[0]-C[14]*DP[3]*DP[1])+DP[11]*(C[25]*(DP[2]*(-DP[8]-
 DP[9])+DP[4]*(-DP[8]-DP[9]))+C[6]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13]))+S[2]*(S[2]*(C[60]+C[22]*DP[0])+C[59])-C[61]-C[20]*DP[0]-C[14]*
 DP[3]*DP[1]-C[59]*DP[5])+DP[0]*(C[4]*(S[8]+S[9]+S[6]+S[7])+S[2]*(-C[68]-
 C[73]*S[2])+C[6]*(DP[9]*DP[8]+DP[13]*DP[12])+C[74]+C[20]*DP[0]+C[68]*
 DP[5])+C[40]*(DP[2]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[4]*(DP[8]+DP[9]+DP[12]+
 DP[13]))+DP[1]*(C[37]*(DP[2]+DP[4])+C[46]*DP[1]+C[28]*DP[3])+DP[3]*(C[37]*(
 DP[2]+DP[4])+C[46]*DP[3])+S[2]*(-C[69]-C[75]*S[2])+C[76]+C[69]*DP[5];
tmp[1]=+DP[14]*(C[2]*(DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[2]))+DP[1]*(DP[7]*(-DP[12]-DP[13])+DP[11]*(-DP[8]-DP[9])+
 DP[14]*(-DP[2]-DP[4]))+DP[3]*(DP[7]*(-DP[12]-DP[13])+DP[11]*(-DP[8]-DP[9])+
 DP[14]*(-DP[2]-DP[4]))+DP[2]*(DP[6]*(DP[12]+DP[13])+DP[10]*(DP[8]+DP[9]))+
 DP[4]*(DP[6]*(DP[12]+DP[13])+DP[10]*(DP[8]+DP[9])))+C[3]*(DP[6]*(S[2]*(
 DP[10]+DP[11])+DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[5]*(-DP[10]-
 DP[11]))+DP[10]*(DP[1]*(DP[8]+DP[9])+DP[3]*(DP[8]+DP[9])+DP[7]*(S[2]-
 DP[5]))+DP[7]*(DP[11]*(S[2]-DP[5]))+DP[14]*(-S[3]-S[4]))+C[12]*(DP[1]*(
 DP[8]+DP[9]+DP[12]+DP[13])+DP[3]*(DP[8]+DP[9]+DP[12]+DP[13])+S[2]*(-DP[7]-
 DP[11])+DP[5]*(DP[7]+DP[11]))+S[2]*(S[2]*(C[22]*(-DP[6]-DP[10])+C[7]*
 DP[14]*DP[0])+C[24])+C[17]*(DP[6]*(-DP[10]-DP[11])+DP[7]*(-DP[10]-DP[11]))+
 DP[1]*(DP[3]*(C[19]-C[5]*DP[14])+C[14]*DP[1])+DP[2]*(C[25]*DP[2]+C[27]*
 DP[4])+C[20]*(DP[7]+DP[11])+C[14]*S[4]-C[30]+C[25]*S[5]-C[24]*DP[5]+C[8]*
 DP[14]*DP[0]);
S[10]=DP[2]*DP[2];
tmp[2]=+DP[7]*(DP[1]*(C[6]*(-DP[2]-DP[4])+C[14]*(DP[12]+DP[13]))+DP[3]*(
 C[6]*(-DP[2]-DP[4])+C[14]*(DP[12]+DP[13]))+C[12]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13]))+S[2]*(-C[46]-C[36]*S[2])+C[53]+C[46]*DP[5])+DP[6]*(
 DP[12]*(C[12]*(DP[1]+DP[3])+C[4]*DP[12]+C[6]*DP[13])+DP[13]*(C[12]*(DP[1]+
 DP[3])+C[4]*DP[13])+S[2]*(-C[37]-C[38]*S[2])+DP[2]*(C[4]*DP[2]+C[6]*DP[4])+
 C[62]+C[4]*S[5]+C[37]*DP[5])+DP[1]*(DP[14]*(C[6]*(-DP[12]-DP[13])-C[12]*
 DP[1]-C[14]*DP[3])+C[37]*(DP[8]+DP[9])+C[28]*(-DP[12]-DP[13]))+DP[3]*(
 DP[14]*(C[6]*(-DP[12]-DP[13])-C[12]*DP[3])+C[37]*(DP[8]+DP[9])+C[28]*(-
 DP[12]-DP[13]))+DP[2]*(C[26]*(-DP[12]-DP[13])-C[40]*DP[2]-C[49]*DP[4])+
 DP[4]*(C[26]*(-DP[12]-DP[13])-C[40]*DP[4])+S[2]*(C[64]+C[66]*S[2])-C[67]-
 C[64]*DP[5];
tmp[3]=+DP[11]*(DP[6]*(C[3]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*(DP[5]-S[2]))+C[2]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*(DP[5]-S[2]))+S[2]*(S[2]*(C[13]-C[7]*DP[11])+C[12])+C[17]*DP[10]-
 C[20]-C[12]*DP[5]+C[8]*DP[11])+DP[7]*(C[3]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+S[2]*(S[2]*(C[22]+C[23]*DP[10])+C[14]-
 C[16]*DP[10])+C[15]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13]))+DP[5]*(
 C[16]*DP[10]-C[14])+C[50]*DP[10]-C[51]+C[17]*DP[11])+C[2]*(DP[1]*(DP[11]*(
 DP[8]+DP[9])+DP[14]*(DP[2]+DP[4]))+DP[3]*(DP[11]*(DP[8]+DP[9])+DP[14]*(
 DP[2]+DP[4]))+DP[10]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9])))+C[12]*(
 DP[1]*(-DP[8]-DP[9])+DP[2]*(DP[12]+DP[13])+DP[3]*(-DP[8]-DP[9])+DP[4]*(
 DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))+S[2]*(S[2]*(-C[57]-C[22]*DP[10])+C[19]*
 DP[10]-C[56])+DP[1]*(DP[14]*(C[3]*DP[1]+C[5]*DP[3])+C[14]*(DP[12]+DP[13]))+
 DP[3]*(C[14]*(DP[12]+DP[13])+C[3]*DP[14]*DP[3])+DP[5]*(C[56]-C[19]*DP[10])+
 C[58]-C[52]*DP[10]-C[20]*DP[11]);
tmp[4]=+DP[7]*(DP[10]*(C[2]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9])+
 DP[7]*(DP[5]-S[2]))+C[3]*(DP[1]*(-DP[8]-DP[9])+DP[3]*(-DP[8]-DP[9]))+S[2]*(
 S[2]*(C[13]-C[7]*DP[7])+C[12])+C[8]*DP[7]-C[20]-C[12]*DP[5])+DP[11]*(C[3]*(
 DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9])+DP[7]*(DP[5]-S[2]))+C[15]*(DP[1]*
 (-DP[8]-DP[9])+DP[3]*(-DP[8]-DP[9]))+S[2]*(C[14]+C[22]*S[2])+C[17]*DP[7]-
 C[51]-C[14]*DP[5])+DP[1]*(DP[14]*(C[2]*(DP[2]+DP[4])+C[3]*DP[1]+C[5]*
 DP[3])+DP[7]*(C[2]*(DP[12]+DP[13]))+C[14]*(DP[8]+DP[9])+C[12]*(-DP[12]-
 DP[13]))+DP[3]*(C[2]*(DP[7]*(DP[12]+DP[13])+DP[14]*(DP[2]+DP[4]))+C[14]*(
 DP[8]+DP[9])+C[12]*(-DP[12]-DP[13])+C[3]*DP[14]*DP[3])+C[12]*(DP[2]*(DP[8]+
 DP[9])+DP[4]*(DP[8]+DP[9])+DP[7]*(S[2]-DP[5]))+S[2]*(-C[56]-C[57]*S[2])+
 C[58]+C[56]*DP[5]-C[20]*DP[7]);
S[11]=DP[7]*DP[7];
S[12]=DP[11]*DP[11];
tmp[5]=+DP[10]*(DP[11]*(DP[1]*(C[6]*(-DP[2]-DP[4])+C[14]*(DP[8]+DP[9]))+
 DP[3]*(C[6]*(-DP[2]-DP[4])+C[14]*(DP[8]+DP[9]))+C[12]*(DP[2]*(DP[8]+DP[9])+
 DP[4]*(DP[8]+DP[9]))+S[2]*(-C[46]-C[36]*S[2])+C[53]+C[46]*DP[5])+DP[10]*(
 DP[8]*(C[12]*(DP[1]+DP[3])+C[4]*DP[8]+C[6]*DP[9])+DP[9]*(C[12]*(DP[1]+
 DP[3])+C[4]*DP[9])+S[2]*(-C[37]-C[38]*S[2])+DP[2]*(C[4]*DP[2]+C[6]*DP[4])+
 C[62]+C[4]*S[5]+C[37]*DP[5])+DP[1]*(DP[14]*(C[6]*(-DP[8]-DP[9])-C[12]*
 DP[1]-C[14]*DP[3])+C[28]*(-DP[8]-DP[9])+C[37]*(DP[12]+DP[13]))+DP[3]*(
 DP[14]*(C[6]*(-DP[8]-DP[9])-C[12]*DP[3])+C[28]*(-DP[8]-DP[9])+C[37]*(
 DP[12]+DP[13]))+DP[2]*(C[26]*(-DP[8]-DP[9])-C[40]*DP[2]-C[49]*DP[4])+DP[4]*
 (C[26]*(-DP[8]-DP[9])-C[40]*DP[4])+S[2]*(C[64]+C[66]*S[2])-C[67]-C[64]*
 DP[5]+tmp[4]);
tmp[6]=+DP[14]*(DP[1]*(DP[7]*(DP[11]*(C[3]*(DP[2]+DP[4])+C[15]*DP[1]+C[16]*
 DP[3])+C[12]*(-DP[2]-DP[4])-C[14]*DP[1]-C[19]*DP[3])+DP[11]*(C[12]*(-DP[2]-
 DP[4])-C[14]*DP[1]-C[19]*DP[3])+DP[1]*(C[28]+C[4]*DP[14])+DP[3]*(C[29]+
 C[6]*DP[14])+C[26]*(DP[2]+DP[4]))+DP[3]*(DP[7]*(DP[11]*(C[3]*(DP[2]+DP[4])+
 C[15]*DP[3])+C[12]*(-DP[2]-DP[4])-C[14]*DP[3])+DP[3]*(C[28]-C[14]*DP[11]+
 C[4]*DP[14])+DP[2]*(C[26]-C[12]*DP[11])+DP[4]*(C[26]-C[12]*DP[11])))+DP[1]*
 (DP[7]*(DP[7]*(C[4]*DP[1]+C[6]*DP[3])+C[40]*(DP[2]+DP[4]))+DP[11]*(DP[11]*(
 C[4]*DP[1]+C[6]*DP[3])+C[40]*(DP[2]+DP[4]))+C[70]*(-DP[2]-DP[4])-C[71]*
 DP[1]-C[72]*DP[3])+DP[3]*(C[40]*(DP[2]*(DP[7]+DP[11])+DP[4]*(DP[7]+
 DP[11]))+DP[3]*(C[4]*(S[11]+S[12])-C[71])+C[70]*(-DP[2]-DP[4]))+tmp[5];
tmp[7]=+DP[0]*(C[12]*(DP[0]*(DP[1]*(DP[8]-DP[2]-DP[4]+DP[9]+DP[12]+DP[13])+
 DP[3]*(DP[8]-DP[2]-DP[4]+DP[9]+DP[12]+DP[13])+S[2]*(DP[7]-DP[0]+DP[11])+
 DP[5]*(DP[0]-DP[7]-DP[11]))+DP[6]*(DP[1]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[3]*(
 DP[2]+DP[4]-DP[8]-DP[9])+S[2]*(-DP[6]-DP[7])+DP[5]*(DP[6]+DP[7])-S[6]-
 S[7])+DP[10]*(DP[1]*(DP[2]+DP[4]-DP[12]-DP[13])+DP[3]*(DP[2]+DP[4]-DP[12]-
 DP[13])+S[2]*(-DP[10]-DP[11])+DP[5]*(DP[10]+DP[11])-S[8]-S[9])+S[3]*(-
 DP[7]-DP[11])+S[4]*(-DP[7]-DP[11]))+DP[6]*(C[14]*(DP[12]*(-DP[1]-DP[3]-
 DP[13])+S[2]*(DP[0]-DP[11])+DP[5]*(DP[11]-DP[0])+DP[13]*(-DP[1]-DP[3]))+
 DP[11]*(C[2]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13]))+C[51]-C[13]*
 S[1])+DP[7]*(DP[12]*(C[2]*DP[12]+C[3]*DP[13])+C[20]+C[2]*S[7])+C[6]*(DP[2]*
 (-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9]))+S[2]*(C[28]+C[41]*S[2]-C[19]*DP[10])+
 DP[5]*(C[19]*DP[10]-C[28])+C[20]*DP[6]-C[65]-C[51]*DP[0]+C[52]*DP[10])+
 tmp[0]+tmp[1]);
tmp[8]=+DP[7]*(DP[10]*(DP[9]*(DP[11]*(C[15]-C[7]*S[2])+C[3]*DP[10]-C[14])+
 DP[13]*(S[2]*(C[7]*DP[7]-C[13])+C[12]-C[2]*DP[7])+DP[8]*(C[5]*DP[10]-C[19]+
 C[16]*DP[11])+DP[12]*(C[14]-C[3]*DP[7]))+S[2]*(DP[13]*(DP[6]*(C[22]-C[7]*
 DP[11])+C[39]-C[22]*DP[11])+DP[4]*(C[33]-C[10]*DP[6])+DP[9]*(C[36]-C[22]*
 DP[11])+C[10]*DP[7]*DP[3])+DP[6]*(DP[11]*(C[16]*DP[12]+C[15]*DP[13])+C[12]*
 DP[2]+C[6]*DP[4]-C[19]*DP[12]-C[14]*DP[13])+DP[7]*(C[6]*(-DP[1]-DP[3]))-
 C[49]*DP[2]-C[40]*DP[4])+DP[11]*(DP[6]*(DP[9]*(S[2]*(C[7]*DP[11]-C[13])+
 C[12]-C[2]*DP[11])+DP[6]*(C[5]*DP[12]+C[3]*DP[13])+DP[8]*(C[14]-C[3]*
 DP[11])-C[19]*DP[12]-C[14]*DP[13])+S[2]*(DP[4]*(C[33]-C[10]*DP[10])+DP[9]*(
 C[39]+C[22]*DP[10])+C[10]*DP[11]*DP[3]+C[36]*DP[13])+DP[10]*(C[12]*DP[2]+
 C[6]*DP[4]-C[19]*DP[8]-C[14]*DP[9])+DP[11]*(C[6]*(-DP[1]-DP[3]))-C[49]*
 DP[2]-C[40]*DP[4])+DP[6]*(DP[10]*(C[14]*(-DP[8]-DP[12])+C[12]*(-DP[9]-
 DP[13]))+DP[6]*(-C[14]*DP[12]-C[12]*DP[13])+DP[9]*(C[38]*S[2]-C[37])+C[29]*
 DP[12]-C[46]*DP[8]+C[28]*DP[13])+DP[10]*(DP[8]*(C[29]-C[14]*DP[10])+DP[9]*(
 C[28]-C[12]*DP[10])+DP[13]*(C[38]*S[2]-C[37])-C[46]*DP[12])+S[2]*(C[42]*(-
 DP[9]-DP[13])-C[79]*DP[3]-C[77]*DP[4])+C[72]*(DP[1]+DP[3])+C[80]*DP[2]+
 C[70]*DP[4];
tmp[9]=+DP[14]*(S[2]*(DP[3]*(DP[7]*(C[9]*DP[10]-C[21]+C[18]*DP[11])+DP[0]*(
 C[21]-C[9]*DP[14])+DP[6]*(C[9]*DP[11]-C[13])+C[34]-C[13]*DP[10]-C[21]*
 DP[11]+C[10]*DP[14])+DP[4]*(DP[7]*(C[11]*DP[10]-C[13]+C[9]*DP[11])+DP[6]*(
 C[11]*DP[11]-C[22])+C[32]-C[22]*DP[10]-C[13]*DP[11]-C[7]*DP[14]*DP[0])+
 DP[0]*(DP[9]*(C[13]-C[11]*DP[11])+DP[13]*(C[13]-C[11]*DP[7]))+C[10]*(-
 DP[10]*DP[9]-DP[13]*DP[6]))+DP[0]*(C[3]*(DP[11]*DP[8]-DP[10]*DP[9]+DP[12]*
 DP[7]-DP[13]*DP[6]+DP[14]*DP[2])+C[5]*(DP[14]*(DP[1]+DP[3])-DP[10]*DP[8]-
 DP[12]*DP[6])+C[2]*(DP[11]*DP[9]+DP[13]*DP[7]+DP[14]*DP[4])+C[19]*(-DP[1]-
 DP[3])+C[14]*(-DP[8]-DP[12])+C[12]*(-DP[9]-DP[13]))+DP[7]*(DP[10]*(C[5]*(-
 DP[1]-DP[3])-C[3]*DP[2]-C[2]*DP[4])+DP[11]*(C[16]*(-DP[1]-DP[3])-C[5]*
 DP[2]-C[3]*DP[4])+C[19]*(DP[1]+DP[3])+C[14]*DP[2]+C[12]*DP[4])+DP[6]*(
 DP[11]*(C[5]*(-DP[1]-DP[3])-C[3]*DP[2]-C[2]*DP[4])+DP[10]*(C[5]*DP[2]+C[3]*
 DP[4])+C[14]*(DP[1]+DP[3])+C[12]*DP[12]+C[6]*DP[13])+DP[1]*(C[14]*DP[10]-
 C[29]+C[19]*DP[11]-C[6]*DP[14])+DP[3]*(C[14]*DP[10]-C[29]+C[19]*DP[11]-
 C[6]*DP[14])+DP[2]*(C[14]*DP[11]-C[35])+DP[4]*(C[12]*DP[11]-C[26])+DP[10]*(
 C[12]*DP[8]+C[6]*DP[9]));
S[13]=DP[14]*DP[14];
tmp[10]=+DP[6]*(DP[4]*(DP[12]*(DP[7]*(C[13]-C[7]*DP[10]-C[9]*DP[11])+DP[6]*(
 C[22]-C[11]*DP[11])+C[22]*DP[10]-C[32]+C[13]*DP[11]+C[7]*DP[14]*DP[0])+
 DP[2]*(C[10]*DP[6]-C[33]-C[23]*DP[14]*DP[10])+DP[8]*(DP[10]*(C[22]-C[7]*
 DP[11])-C[10]*DP[0]))+DP[13]*(DP[2]*(C[7]*(DP[11]*DP[6]-DP[10]*DP[7]+
 DP[14]*DP[0])+C[22]*(DP[10]-DP[6])+C[33])+DP[0]*(DP[8]*(C[22]-C[7]*DP[11])+
 DP[12]*(C[23]*DP[7]-C[13]))+C[10]*(DP[12]*DP[6]-DP[10]*DP[8]))+DP[9]*(
 DP[0]*(DP[12]*(C[11]*DP[11]-C[22])-C[10]*DP[2])+DP[10]*(DP[2]*(C[22]-C[7]*
 DP[11])-C[10]*DP[12])))+DP[10]*(DP[8]*(DP[4]*(DP[7]*(C[13]-C[11]*DP[10]-
 C[9]*DP[11])+C[22]*DP[10]-C[32]+C[13]*DP[11]+C[7]*DP[14]*DP[0])+DP[0]*(
 DP[9]*(C[23]*DP[11]-C[13])+DP[13]*(C[11]*DP[7]-C[22]))+C[10]*DP[10]*DP[9])+
 DP[2]*(DP[9]*(DP[10]*(C[7]*DP[7]-C[22])+C[33]+C[7]*DP[14]*DP[0])+DP[4]*(
 C[10]*DP[10]-C[33])-C[10]*DP[13]*DP[0])+DP[0]*(DP[12]*(DP[9]*(C[22]-C[7]*
 DP[7])-C[10]*DP[4])))+DP[0]*(DP[4]*(C[31]*(DP[14]*DP[2]-DP[11]*DP[8]-
 DP[12]*DP[7])+C[48]*(DP[8]+DP[12]))+DP[0]*(DP[8]*(C[10]*DP[9]-C[7]*DP[14]*
 DP[13])+DP[12]*(C[10]*DP[13]-C[7]*DP[14]*DP[9]))+DP[2]*(C[33]*(-DP[9]-
 DP[13])));
tmp[11]=+DP[8]*(DP[10]*(DP[3]*(DP[7]*(C[3]*DP[10]-C[14]+C[15]*DP[11])+DP[0]*
 (C[14]-C[3]*DP[14])+C[12]*(-DP[6]-DP[10])+C[28]-C[14]*DP[11]+C[6]*DP[14])+
 DP[4]*(DP[7]*(C[2]*DP[10]-C[12]+C[3]*DP[11])+DP[6]*(C[2]*DP[11]-C[12])+
 C[26]-C[12]*DP[11]-C[2]*DP[14]*DP[0])+DP[0]*(C[3]*(DP[11]*(-DP[8]-DP[9])-
 DP[12]*DP[7])+C[14]*(DP[8]+DP[9])-C[2]*DP[13]*DP[7])+C[6]*(DP[10]*(-DP[8]-
 DP[9])+DP[13]*DP[6])+C[12]*DP[12]*DP[6])+DP[0]*(DP[0]*(DP[14]*(C[3]*DP[12]+
 C[2]*DP[13])+C[6]*(-DP[8]-DP[9])-C[12]*DP[3])+DP[3]*(DP[14]*(C[2]*DP[11]-
 C[12])+C[12]*DP[6]+C[6]*DP[7])+DP[4]*(C[6]*DP[6]-C[40]+C[25]*DP[11])+DP[6]*
 (DP[11]*(-C[3]*DP[12]-C[2]*DP[13])))+DP[3]*(DP[6]*(DP[11]*(C[12]-C[2]*
 DP[11])-C[37])))+DP[12]*(DP[6]*(DP[3]*(DP[11]*(C[3]*DP[6]-C[14]+C[15]*
 DP[7])+DP[0]*(C[14]-C[3]*DP[14])+C[12]*(-DP[6]-DP[10])+C[28]-C[14]*DP[7]+
 C[6]*DP[14])+DP[4]*(DP[7]*(C[2]*DP[10]-C[12]+C[3]*DP[11])+DP[11]*(C[2]*
 DP[6]-C[12])+C[26]-C[12]*DP[10]-C[2]*DP[14]*DP[0])+DP[0]*(DP[7]*(C[3]*(-
 DP[12]-DP[13]))+C[14]*(DP[12]+DP[13])-C[2]*DP[11]*DP[9])+C[6]*(DP[6]*(-
 DP[12]-DP[13])+DP[10]*DP[9]))+DP[0]*(DP[3]*(C[12]*(DP[10]-DP[0]-DP[14])+
 C[6]*DP[11]+C[2]*DP[14]*DP[7])+DP[0]*(C[6]*(-DP[12]-DP[13])+C[2]*DP[14]*
 DP[9])+DP[4]*(C[25]*DP[7]-C[40]+C[6]*DP[10])-C[2]*DP[10]*DP[9]*DP[7])+
 DP[3]*(DP[10]*(DP[7]*(C[12]-C[2]*DP[7])-C[37])));
tmp[12]=+DP[2]*(DP[6]*(DP[10]*(C[3]*(DP[14]*(DP[2]+DP[3]+DP[4])+DP[11]*
 DP[8]+DP[12]*DP[7])+DP[9]*(C[2]*DP[11]-C[12])+DP[13]*(C[2]*DP[7]-C[12])+
 C[14]*(-DP[8]-DP[12]))+DP[11]*(DP[12]*(C[3]*DP[6]-C[14]+C[5]*DP[7])+DP[13]*
 (C[2]*DP[6]-C[12]+C[3]*DP[7])-C[2]*DP[14]*DP[3])+DP[0]*(DP[14]*(-C[3]*
 DP[12]-C[2]*DP[13])+C[12]*(DP[8]-DP[3])+C[6]*DP[9])+DP[7]*(C[6]*DP[3]-
 C[14]*DP[12]-C[12]*DP[13])+DP[2]*(C[49]-C[6]*DP[6])+DP[4]*(C[49]-C[6]*
 DP[6])+C[35]*DP[12]+C[26]*DP[13])+DP[10]*(DP[7]*(DP[8]*(C[3]*DP[10]-C[14]+
 C[5]*DP[11])+DP[9]*(C[2]*DP[10]-C[12]+C[3]*DP[11])-C[2]*DP[14]*DP[3])+
 DP[0]*(DP[14]*(-C[3]*DP[8]-C[2]*DP[9])+C[12]*(DP[12]-DP[3])+C[6]*DP[13])+
 DP[11]*(C[6]*DP[3]-C[14]*DP[8]-C[12]*DP[9])+DP[2]*(C[49]-C[6]*DP[10])+
 DP[4]*(C[49]-C[6]*DP[10])+C[35]*DP[8]+C[26]*DP[9])+DP[0]*(C[27]*(DP[14]*(-
 DP[2]-DP[4])+DP[11]*DP[8]+DP[12]*DP[7])+DP[3]*(C[12]*DP[0]-C[37]+C[2]*
 S[13])+DP[9]*(C[25]*DP[11]-C[40])+DP[13]*(C[25]*DP[7]-C[40])+C[49]*(-DP[8]-
 DP[12]))+DP[3]*(DP[14]*(DP[7]*(C[12]-C[3]*DP[11])+C[12]*DP[11]-C[26])+
 C[40]*(-DP[7]-DP[11])+C[70]))+tmp[11];
tmp[13]=+S[2]*(DP[3]*(DP[0]*(C[13]*(DP[0]*(DP[8]-DP[2]+DP[12])+DP[2]*(DP[6]+
 DP[10])+DP[8]*(-DP[6]-DP[11])+DP[12]*(-DP[7]-DP[10]))+DP[8]*(DP[10]*(C[9]*
 DP[14]-C[21])+C[41]-C[44]*DP[7]+C[7]*DP[14]*DP[11])+DP[12]*(DP[6]*(C[9]*
 DP[14]-C[21])+C[41]-C[44]*DP[11]+C[7]*DP[14]*DP[7])+DP[2]*(C[22]*(DP[7]+
 DP[11])-C[38]-C[7]*S[13]))+DP[6]*(DP[12]*(DP[11]*(C[21]-C[9]*DP[6]-C[43]*
 DP[7])+C[13]*(DP[6]+DP[10])+C[47]*DP[7]-C[34]-C[10]*DP[14])+DP[2]*(DP[14]*(
 C[22]-C[9]*DP[10]-C[7]*DP[11])-C[10]*DP[7])+DP[8]*(C[13]*DP[10]-C[45]+C[7]*
 S[12]))+DP[10]*(DP[8]*(DP[7]*(C[21]-C[9]*DP[10]-C[43]*DP[11])+C[13]*DP[10]-
 C[34]+C[47]*DP[11]-C[10]*DP[14])+DP[2]*(DP[14]*(C[22]-C[7]*DP[7])-C[10]*
 DP[11])+DP[12]*(C[7]*S[11]-C[45]))+DP[7]*(DP[8]*(C[22]*DP[11]-C[36])+
 DP[12]*(C[22]*DP[11]-C[39]))+DP[2]*(C[78]-C[33]*DP[14])+DP[8]*(C[42]-C[39]*
 DP[11])+DP[12]*(C[42]-C[36]*DP[11]))+tmp[10])+tmp[12];
R=+DP[5]*(DP[6]*(DP[10]*(C[12]*(DP[1]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[2]*(
 DP[8]+DP[9]+DP[12]+DP[13])+DP[3]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[4]*(DP[8]+
 DP[9]+DP[12]+DP[13])+DP[14]*(DP[5]-S[2]))+DP[7]*(C[2]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13]))+S[2]*(C[19]-C[22]*S[2]-C[3]*DP[10])+DP[5]*(
 C[3]*DP[10]-C[19])+C[17]*DP[10]-C[52])+DP[14]*(C[3]*(DP[2]*(-DP[1]-DP[3]-
 DP[4])+DP[4]*(-DP[1]-DP[3]))+C[2]*(-S[10]-S[5])+C[20]+C[22]*S[1])+C[14]*(
 S[2]*(DP[6]+DP[10])+DP[5]*(-DP[6]-DP[10]))+C[6]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13]))+C[29]*(DP[5]-S[2])+C[51]*(-DP[6]-DP[10])+C[63])+
 tmp[2]+tmp[3])+tmp[6]+tmp[7])+S[2]*(DP[1]*(DP[0]*(C[14]*(DP[0]*(DP[2]-
 DP[8]-DP[12])+DP[6]*(DP[8]-DP[2]+DP[13])+DP[10]*(DP[9]-DP[2]+DP[12])+DP[1]*
 (DP[7]+DP[11])+DP[3]*(DP[7]+DP[11]))+S[2]*(DP[7]*(C[13]*(DP[13]-DP[3])+
 C[10]*DP[9]-C[22]*DP[4])+DP[11]*(C[13]*(DP[9]-DP[3])+C[10]*DP[13]-C[22]*
 DP[4])+C[41]*(-DP[9]-DP[13])+C[32]*DP[3]+C[73]*DP[4])+C[12]*(DP[0]*(DP[4]-
 DP[9]-DP[13])+DP[4]*(-DP[6]-DP[10])+DP[8]*DP[7]+DP[9]*DP[6]+DP[12]*DP[11]+
 DP[13]*DP[10])+C[28]*(-DP[1]-DP[3])+C[6]*(DP[9]*DP[7]+DP[13]*DP[11])+C[19]*
 (DP[10]*DP[8]+DP[12]*DP[6])-C[46]*DP[2]-C[37]*DP[4])+tmp[8]+tmp[9])+
 tmp[13]);
R*=(N/D)*Q1[4]*Q1[1]*Q2[2]*Q1[5]*Q1[3];
 if(cb_coeff_out)
 {
 }
 return R;
}
