/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F515_out;
static void C515(REAL * C)
{
REAL* V=va_out;
REAL S[14];                                                                 
     
S[0]=V[11]*V[11];
S[1]=V[9]*V[9];
S[2]=V[38]*V[38];
S[3]=V[8]*V[8];
S[4]=V[13]*V[13]*V[13]*V[13];
C[169]=+S[4]*(S[3]*(V[37]*(S[1]*(4*V[37]-8*V[38])+S[0]*(8*V[38]+4*V[37]))+
 S[2]*(4*(S[0]+S[1]))));
S[5]=V[13]*V[13]*V[13]*V[13]*V[13]*V[13];
C[168]=+S[5]*(V[37]*(4*V[37]-8*V[38])+4*S[2]);
C[167]=+S[4]*(V[37]*(16*V[37]-32*V[38])+16*S[2]);
S[6]=V[37]*V[37];
C[166]=+S[4]*(V[11]*(V[11]*(V[37]*(8*V[38]+4*V[37])+4*S[2])+V[9]*(8*(S[6]-
 S[2]))));
C[165]=+S[4]*(V[9]*(V[9]*(V[37]*(4*V[37]-8*V[38])+4*S[2])+V[11]*(8*(S[6]-
 S[2])))+S[0]*(V[37]*(16*V[38]+8*V[37])+8*S[2]));
S[7]=V[8]*V[8]*V[8]*V[8];
C[164]=+S[5]*(S[7]*(V[9]*(V[9]*(V[37]*(4*V[38]-2*V[37])-2*S[2])+V[11]*(12*(
 S[2]-S[6])))));
C[163]=+S[5]*(V[9]*(V[9]*(V[37]*(24*V[38]-12*V[37])-12*S[2])+V[11]*(24*(
 S[2]-S[6]))));
S[8]=V[13]*V[13];
C[162]=+S[7]*(S[4]*(V[37]*(V[37]*(V[9]*(-2*V[11]-5*V[9])+8*S[8]+5*S[0])+
 V[38]*(10*(S[0]+S[1])-16*S[8]))+S[2]*(V[9]*(2*V[11]-5*V[9])+8*S[8]+5*
 S[0])));
C[161]=+S[4]*(V[37]*(V[37]*(V[9]*(4*V[9]-8*V[11])+16*S[8]+8*S[0])+V[38]*(16*
 S[0]-32*S[8]-8*S[1]))+S[2]*(V[9]*(8*V[11]+4*V[9])+16*S[8]+8*S[0]));
C[160]=+S[7]*(S[4]*(V[37]*(6*V[37]-12*V[38])+6*S[2]));
C[159]=+S[4]*(V[37]*(20*V[37]-40*V[38])+20*S[2]);
C[158]=+S[5]*(S[3]*(V[37]*(4*V[37]-8*V[38])+4*S[2]));
C[157]=+S[5]*(S[3]*(V[37]*(2*V[37]-4*V[38])+2*S[2]));
C[156]=+S[4]*(S[3]*(V[37]*(S[1]*(2*V[37]-4*V[38])+S[0]*(4*V[38]+2*V[37]))+
 S[2]*(2*(S[0]+S[1]))));
C[155]=+S[5]*(S[3]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[2])+V[11]*(24*(
 S[2]-S[6])))));
C[154]=+S[4]*(S[3]*(V[37]*(V[37]*(V[9]*(-4*V[11]-10*V[9])+16*S[8]+10*S[0])+
 V[38]*(20*(S[0]+S[1])-32*S[8]))+S[2]*(V[9]*(4*V[11]-10*V[9])+16*S[8]+10*
 S[0])));
C[153]=+S[4]*(S[3]*(V[37]*(12*V[37]-24*V[38])+12*S[2]));
C[152]=+S[7]*(S[4]*(V[37]*(V[37]*(V[9]*(-4*V[11]-3*V[9])+4*S[8]+S[0])+V[38]*
 (2*S[0]-8*S[8]+6*S[1]))+S[2]*(V[9]*(4*V[11]-3*V[9])+4*S[8]+S[0])));
C[151]=+S[4]*(V[11]*(V[11]*(V[37]*(8*V[38]+4*V[37])+4*S[2])+V[9]*(8*(S[2]-
 S[6])))+S[8]*(V[37]*(8*V[37]-16*V[38])+8*S[2]));
C[150]=+S[7]*(S[4]*(V[37]*(8*V[37]-16*V[38])+8*S[2]));
C[149]=+S[4]*(S[3]*(V[37]*(V[37]*(V[9]*(-8*V[11]-6*V[9])+8*S[8]+2*S[0])+
 V[38]*(4*S[0]-16*S[8]+12*S[1]))+S[2]*(V[9]*(8*V[11]-6*V[9])+8*S[8]+2*
 S[0])));
C[148]=+S[7]*(S[4]*(V[37]*(16*V[37]-32*V[38])+16*S[2]));
C[147]=+S[7]*(S[4]*(V[37]*(2*V[37]-4*V[38])+2*S[2]));
C[146]=+S[3]*(S[8]*(V[37]*(S[1]*(4*V[37]-8*V[38])+S[0]*(8*V[38]+4*V[37]))+
 S[2]*(4*(S[0]+S[1]))));
C[145]=+S[8]*(4*(V[9]*(S[6]*(V[11]+V[9])+S[2]*(V[9]-V[11]))+S[0]*(S[2]+
 S[6]))+V[37]*(V[38]*(8*(S[0]-S[1]))));
C[144]=+S[7]*(S[4]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[2])+V[11]*(16*(
 S[2]-S[6])))));
C[143]=+S[4]*(V[9]*(V[9]*(V[37]*(24*V[38]-12*V[37])-12*S[2])+V[11]*(28*(
 S[2]-S[6]))));
C[142]=+S[7]*(S[8]*(V[37]*(V[37]*(V[9]*(-2*V[11]-4*V[9])+8*S[8]+4*S[0])+
 V[38]*(8*(S[0]+S[1])-16*S[8]))+S[2]*(V[9]*(2*V[11]-4*V[9])+8*S[8]+4*
 S[0])));
C[141]=+S[8]*(V[37]*(V[37]*(4*(V[9]*(V[9]-V[11])+S[0])+16*S[8])+V[38]*(8*(
 S[0]-S[1])-32*S[8]))+S[2]*(4*(V[9]*(V[11]+V[9])+S[0])+16*S[8]));
C[140]=+S[3]*(S[8]*(V[37]*(S[1]*(2*V[37]-4*V[38])+S[0]*(4*V[38]+2*V[37]))+
 S[2]*(2*(S[0]+S[1]))));
C[139]=+S[4]*(S[3]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[2])+V[11]*(32*(
 S[2]-S[6])))));
C[138]=+S[3]*(S[8]*(V[37]*(V[37]*(V[9]*(-4*V[11]-8*V[9])+16*S[8]+8*S[0])+
 V[38]*(16*(S[0]+S[1])-32*S[8]))+S[2]*(V[9]*(4*V[11]-8*V[9])+16*S[8]+8*
 S[0])));
C[137]=+S[7]*(S[8]*(V[37]*(V[37]*(V[9]*(-6*V[11]-3*V[9])+8*S[8]+S[0])+V[38]*
 (2*S[0]-16*S[8]+6*S[1]))+S[2]*(V[9]*(6*V[11]-3*V[9])+8*S[8]+S[0])));
C[136]=+S[8]*(V[11]*(4*(S[6]*(V[11]-V[9])+S[2]*(V[11]+V[9]))+8*V[38]*V[37]*
 V[11])+S[8]*(V[37]*(8*V[37]-16*V[38])+8*S[2]));
C[135]=+S[7]*(S[8]*(V[37]*(8*V[37]-16*V[38])+8*S[2]));
C[134]=+S[3]*(S[8]*(V[37]*(V[37]*(V[9]*(-12*V[11]-6*V[9])+16*S[8]+2*S[0])+
 V[38]*(4*S[0]-32*S[8]+12*S[1]))+S[2]*(V[9]*(12*V[11]-6*V[9])+16*S[8]+2*
 S[0])));
C[133]=+S[7]*(S[8]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[2])+V[11]*(20*(
 S[2]-S[6])))));
C[132]=+S[8]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[2])+V[11]*(24*(S[2]-
 S[6]))));
C[131]=+S[7]*(V[37]*(S[0]*(8*V[38]+4*V[37])+S[8]*(8*V[37]-16*V[38]))+S[2]*(
 8*S[8]+4*S[0]));
C[130]=+S[3]*(S[8]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[2])+V[11]*(40*(
 S[2]-S[6])))));
C[129]=+S[3]*(V[37]*(S[0]*(16*V[38]+8*V[37])+S[8]*(16*V[37]-32*V[38]))+S[2]*
 (16*S[8]+8*S[0]));
C[128]=+S[7]*(S[8]*(V[9]*(V[9]*(V[37]*(4*V[38]-2*V[37])-2*S[2])+V[11]*(4*(
 S[2]-S[6])))+S[8]*(V[37]*(4*V[37]-8*V[38])+4*S[2])));
C[127]=+S[3]*(S[8]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[2])+V[11]*(8*(
 S[2]-S[6])))+S[8]*(V[37]*(8*V[37]-16*V[38])+8*S[2])));
C[126]=+S[7]*(S[8]*(V[37]*(16*V[37]-32*V[38])+16*S[2]));
C[125]=+S[7]*(S[8]*(V[37]*(8*V[37]-16*V[38])+8*S[2])+V[9]*(V[11]*(2*(S[2]-
 S[6]))));
C[124]=+S[3]*(S[8]*(V[37]*(16*V[37]-32*V[38])+16*S[2])+V[9]*(V[11]*(4*(S[2]-
 S[6]))));
C[123]=+S[7]*(V[37]*(12*V[37]-24*V[38])+12*S[2]);
C[122]=+S[7]*(S[8]*(V[9]*(V[9]*(V[37]*(4*V[38]-2*V[37])-2*S[2])+V[11]*(4*(
 S[2]-S[6])))));
C[121]=+S[3]*(S[8]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[2])+V[11]*(8*(
 S[2]-S[6])))));
C[120]=+S[7]*(V[9]*(V[11]*(4*(S[2]-S[6]))));
C[119]=+S[4]*(S[3]*(V[9]*(4*(S[6]*(-V[11]-V[9])+S[2]*(V[11]-V[9]))+8*V[38]*
 V[37]*V[9])));
C[118]=+S[4]*(S[3]*(V[9]*(V[11]*(8*(S[2]-S[6])))));
C[117]=+S[3]*(S[8]*(V[37]*(S[1]*(24*V[38]-12*V[37])+S[0]*(8*V[38]+4*V[37]))+
 S[2]*(4*S[0]-12*S[1])));
C[116]=+S[4]*(V[37]*(V[37]*(V[9]*(-12*V[11]-4*V[9])+8*S[8]-4*S[0])+V[38]*(8*
 (S[1]-S[0])-16*S[8]))+S[2]*(V[9]*(12*V[11]-4*V[9])+8*S[8]-4*S[0]));
C[115]=+S[4]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[2])+V[11]*(16*(S[2]-
 S[6]))));
C[114]=+S[8]*(V[37]*(S[1]*(16*V[38]-8*V[37])+S[0]*(16*V[38]+8*V[37]))+S[2]*(
 8*(S[0]-S[1])));
C[113]=+S[3]*(S[8]*(V[37]*(V[37]*(V[9]*(-4*V[11]-8*V[9])+16*S[8]-4*S[0])+
 V[38]*(16*S[1]-32*S[8]-8*S[0]))+S[2]*(V[9]*(4*V[11]-8*V[9])+16*S[8]-4*
 S[0])));
C[112]=+S[8]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[2])+V[11]*(4*(S[2]-
 S[6])))+S[8]*(V[37]*(16*V[37]-32*V[38])+16*S[2]));
C[111]=+S[3]*(S[8]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[2])+V[11]*(12*(
 S[2]-S[6])))));
C[110]=+S[8]*(V[37]*(V[37]*(V[9]*(-16*V[11]-4*V[9])+8*S[8]-4*S[0])+V[38]*(8*
 (S[1]-S[0])-16*S[8]))+S[2]*(V[9]*(16*V[11]-4*V[9])+8*S[8]-4*S[0]));
C[109]=+S[8]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[2])+V[11]*(20*(S[2]-
 S[6]))));
C[108]=+S[8]*(V[37]*(24*V[37]-48*V[38])+24*S[2]);
C[107]=+S[3]*(S[8]*(V[9]*(V[9]*(V[37]*(16*V[37]-32*V[38])+16*S[2])+V[11]*(8*
 (S[2]-S[6])))));
C[106]=+S[4]*(S[3]*(V[37]*(8*V[37]-16*V[38])+8*S[2]));
C[105]=+S[4]*(V[37]*(4*V[37]-8*V[38])+4*S[2]);
C[104]=+S[3]*(S[8]*(V[9]*(V[9]*(V[37]*(24*V[38]-12*V[37])-12*S[2])+V[11]*(4*
 (S[2]-S[6])))));
C[103]=+S[3]*(S[8]*(V[9]*(8*(S[6]*(-V[11]-V[9])+S[2]*(V[11]-V[9]))+16*V[38]*
 V[37]*V[9])));
C[102]=+S[8]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[2])+V[11]*(8*(S[2]-
 S[6])))+S[8]*(V[37]*(8*V[37]-16*V[38])+8*S[2]));
C[101]=+S[8]*(V[37]*(12*V[37]-24*V[38])+12*S[2]);
C[100]=+S[8]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[2])+V[11]*(12*(S[2]-
 S[6]))));
C[99]=+V[37]*(20*V[37]-40*V[38])+20*S[2];
C[98]=+S[4]*(V[11]*(V[11]*(V[37]*(-8*V[38]-4*V[37])-4*S[2])+V[9]*(8*(S[2]-
 S[6])))+S[8]*(V[37]*(8*V[37]-16*V[38])+8*S[2]));
C[97]=+S[4]*(V[37]*(24*V[37]-48*V[38])+24*S[2]);
C[96]=+S[4]*(V[9]*(8*(S[6]*(-V[11]-V[9])+S[2]*(V[11]-V[9]))+16*V[38]*V[37]*
 V[9]));
C[95]=+S[8]*(V[37]*(S[1]*(4*V[37]-8*V[38])+S[0]*(8*V[38]+4*V[37]))+S[2]*(4*(
 S[0]+S[1])));
C[94]=+S[4]*(S[3]*(V[9]*(2*(S[6]*(-V[11]-V[9])+S[2]*(V[11]-V[9]))+4*V[38]*
 V[37]*V[9])));
C[93]=+S[4]*(S[3]*(V[9]*(V[11]*(4*(S[2]-S[6])))));
C[92]=+S[3]*(S[8]*(V[37]*(S[1]*(12*V[38]-6*V[37])+S[0]*(4*V[38]+2*V[37]))+
 S[2]*(2*S[0]-6*S[1])));
C[91]=+S[0]*(S[8]*(V[37]*(8*V[38]+4*V[37])+4*S[2]));
C[90]=+S[3]*(S[8]*(V[37]*(V[37]*(V[9]*(-2*V[11]-4*V[9])+8*S[8]-2*S[0])+
 V[38]*(8*S[1]-16*S[8]-4*S[0]))+S[2]*(V[9]*(2*V[11]-4*V[9])+8*S[8]-2*
 S[0])));
C[89]=+S[8]*(V[11]*(4*(S[6]*(-V[11]-V[9])+S[2]*(V[9]-V[11]))-8*V[38]*V[37]*
 V[11])+S[8]*(V[37]*(8*V[37]-16*V[38])+8*S[2]));
C[88]=+S[3]*(S[8]*(V[9]*(V[9]*(V[37]*(4*V[38]-2*V[37])-2*S[2])+V[11]*(6*(
 S[2]-S[6])))));
C[87]=+S[4]*(S[1]*(V[37]*(8*V[37]-16*V[38])+8*S[2]));
C[86]=+S[8]*(V[9]*(V[9]*(V[37]*(8*V[37]-16*V[38])+8*S[2])+V[11]*(4*(S[2]-
 S[6]))));
C[85]=+S[8]*(V[9]*(4*(S[6]*(-V[11]-V[9])+S[2]*(V[11]-V[9]))+8*V[38]*V[37]*
 V[9]));
C[84]=+S[8]*(V[9]*(V[9]*(V[37]*(24*V[38]-12*V[37])-12*S[2])+V[11]*(4*(S[2]-
 S[6]))));
C[83]=+S[4]*(S[3]*(S[1]*(V[37]*(8*V[37]-16*V[38])+8*S[2])));
C[82]=+S[3]*(S[8]*(V[9]*(V[9]*(V[37]*(8*V[37]-16*V[38])+8*S[2])+V[11]*(4*(
 S[2]-S[6])))));
C[81]=+S[4]*(V[37]*(12*V[37]-24*V[38])+12*S[2]);
C[80]=+S[4]*(S[3]*(V[37]*(4*V[37]-8*V[38])+4*S[2]));
C[79]=+S[3]*(S[8]*(V[9]*(V[9]*(V[37]*(12*V[38]-6*V[37])-6*S[2])+V[11]*(2*(
 S[2]-S[6])))));
C[78]=+S[8]*(S[8]*(V[37]*(8*V[37]-16*V[38])+8*S[2])+V[9]*(V[11]*(4*(S[2]-
 S[6]))));
C[77]=+S[3]*(S[8]*(V[9]*(2*(S[6]*(-V[11]-V[9])+S[2]*(V[11]-V[9]))+4*V[38]*
 V[37]*V[9])));
C[76]=+S[3]*(S[8]*(V[9]*(4*(S[6]*(-V[11]-V[9])+S[2]*(V[11]-V[9]))+8*V[38]*
 V[37]*V[9])));
C[75]=+S[8]*(V[37]*(8*V[37]-16*V[38])+8*S[2])+V[9]*(V[11]*(4*(S[2]-S[6])));
C[74]=+S[4]*(S[1]*(V[37]*(4*V[37]-8*V[38])+4*S[2]));
C[73]=+S[4]*(S[3]*(S[1]*(V[37]*(4*V[37]-8*V[38])+4*S[2])));
C[72]=+S[8]*(V[9]*(4*(S[6]*(V[9]-V[11])+S[2]*(V[11]+V[9]))-8*V[38]*V[37]*
 V[9]));
C[71]=+S[4]*(S[3]*(S[1]*(V[37]*(2*V[37]-4*V[38])+2*S[2])));
C[70]=+S[3]*(S[8]*(V[37]*(V[37]*(V[9]*(-16*V[11]-12*V[9])+16*S[8]-4*S[0])+
 V[38]*(24*S[1]-32*S[8]-8*S[0]))+S[2]*(V[9]*(16*V[11]-12*V[9])+16*S[8]-4*
 S[0])));
C[69]=+S[4]*(V[37]*(32*V[37]-64*V[38])+32*S[2]);
C[68]=+S[8]*(V[9]*(V[9]*(V[37]*(4*V[37]-8*V[38])+4*S[2])+V[11]*(8*(S[6]-
 S[2])))+S[0]*(V[37]*(8*V[38]+4*V[37])+4*S[2]));
C[67]=+S[8]*(V[9]*(8*(S[6]*(-V[11]-V[9])+S[2]*(V[11]-V[9]))+16*V[38]*V[37]*
 V[9])+S[8]*(V[37]*(16*V[37]-32*V[38])+16*S[2]));
C[66]=+S[8]*(V[9]*(V[11]*(16*(S[2]-S[6]))));
C[65]=+S[0]*(V[37]*(16*V[38]+8*V[37])+8*S[2]);
C[64]=+S[7]*(S[4]*(S[1]*(V[37]*(8*V[37]-16*V[38])+8*S[2])));
C[63]=+S[4]*(V[9]*(8*(S[6]*(V[9]-V[11])+S[2]*(V[11]+V[9]))-16*V[38]*V[37]*
 V[9]));
C[62]=+S[7]*(S[8]*(V[37]*(V[37]*(V[9]*(5*V[9]-2*V[11])+4*S[8]+S[0])+V[38]*(
 2*S[0]-8*S[8]-10*S[1]))+S[2]*(V[9]*(2*V[11]+5*V[9])+4*S[8]+S[0])));
C[61]=+S[8]*(V[9]*(8*(S[6]*(V[9]-V[11])+S[2]*(V[11]+V[9]))-16*V[38]*V[37]*
 V[9]));
C[60]=+S[4]*(S[3]*(V[37]*(32*V[37]-64*V[38])+32*S[2]));
C[59]=+S[4]*(S[3]*(V[37]*(16*V[37]-32*V[38])+16*S[2]));
C[58]=+S[3]*(S[8]*(V[9]*(V[11]*(16*(S[2]-S[6])))));
C[57]=+S[3]*(S[0]*(V[37]*(16*V[38]+8*V[37])+8*S[2]));
C[56]=+S[3]*(S[8]*(V[37]*(V[37]*(V[9]*(-8*V[11]-6*V[9])+8*S[8]-2*S[0])+
 V[38]*(12*S[1]-16*S[8]-4*S[0]))+S[2]*(V[9]*(8*V[11]-6*V[9])+8*S[8]-2*
 S[0])));
C[55]=+S[3]*(S[8]*(V[9]*(V[11]*(8*(S[2]-S[6])))));
C[54]=+S[3]*(S[0]*(V[37]*(8*V[38]+4*V[37])+4*S[2]));
C[53]=+S[4]*(S[3]*(S[1]*(V[37]*(16*V[37]-32*V[38])+16*S[2])));
C[52]=+S[3]*(S[8]*(V[37]*(V[37]*(V[9]*(10*V[9]-4*V[11])+8*S[8]+2*S[0])+
 V[38]*(4*S[0]-16*S[8]-20*S[1]))+S[2]*(V[9]*(4*V[11]+10*V[9])+8*S[8]+2*
 S[0])));
C[51]=+S[7]*(S[8]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[2])+V[11]*(2*(
 S[2]-S[6])))));
C[50]=+S[3]*(S[8]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[2])+V[11]*(4*(
 S[2]-S[6])))));
C[49]=+V[37]*(8*V[37]-16*V[38])+8*S[2];
C[48]=+S[7]*(S[8]*(V[37]*(4*V[37]-8*V[38])+4*S[2]));
C[47]=+S[8]*(V[37]*(8*V[37]-16*V[38])+8*S[2]);
C[46]=+S[3]*(S[8]*(V[37]*(16*V[37]-32*V[38])+16*S[2])+V[9]*(V[11]*(8*(S[2]-
 S[6]))));
C[45]=+S[8]*(V[37]*(32*V[37]-64*V[38])+32*S[2]);
C[44]=+S[8]*(V[37]*(16*V[37]-32*V[38])+16*S[2])+V[9]*(V[11]*(4*(S[2]-
 S[6])));
C[43]=+V[9]*(V[11]*(8*(S[2]-S[6])));
C[42]=+S[7]*(S[1]*(S[8]*(V[37]*(8*V[37]-16*V[38])+8*S[2])));
C[41]=+S[8]*(V[9]*(V[9]*(V[37]*(12*V[37]-24*V[38])+12*S[2])+V[11]*(4*(S[2]-
 S[6]))));
C[40]=+S[7]*(S[8]*(V[37]*(4*V[37]-8*V[38])+4*S[2])+V[9]*(V[11]*(2*(S[2]-
 S[6]))));
C[39]=+V[9]*(V[11]*(4*(S[2]-S[6])));
C[38]=+S[3]*(S[8]*(V[37]*(32*V[37]-64*V[38])+32*S[2]));
C[37]=+S[3]*(V[9]*(V[11]*(8*(S[2]-S[6]))));
C[36]=+S[3]*(V[9]*(V[11]*(4*(S[2]-S[6]))));
C[35]=+S[3]*(S[1]*(S[8]*(V[37]*(16*V[37]-32*V[38])+16*S[2])));
C[34]=+S[3]*(S[8]*(V[37]*(8*V[37]-16*V[38])+8*S[2])+V[9]*(V[11]*(4*(S[2]-
 S[6]))));
C[33]=+V[37]*(24*V[37]-48*V[38])+24*S[2];
C[32]=+S[7]*(S[1]*(V[37]*(4*V[37]-8*V[38])+4*S[2]));
C[31]=+S[1]*(V[37]*(8*V[37]-16*V[38])+8*S[2]);
C[30]=+S[7]*(V[37]*(4*V[37]-8*V[38])+4*S[2]);
C[29]=+S[3]*(V[37]*(24*V[37]-48*V[38])+24*S[2]);
C[28]=+S[3]*(V[37]*(12*V[37]-24*V[38])+12*S[2]);
C[27]=+S[3]*(S[8]*(V[9]*(4*(S[6]*(V[9]-V[11])+S[2]*(V[11]+V[9]))-8*V[38]*
 V[37]*V[9])));
C[26]=+S[3]*(S[8]*(V[37]*(16*V[37]-32*V[38])+16*S[2]));
C[25]=+S[8]*(V[9]*(V[11]*(4*(S[2]-S[6]))));
C[24]=+S[3]*(S[1]*(S[8]*(V[37]*(8*V[37]-16*V[38])+8*S[2])));
C[23]=+S[8]*(V[37]*(16*V[37]-32*V[38])+16*S[2]);
C[22]=+S[1]*(S[8]*(V[37]*(8*V[37]-16*V[38])+8*S[2]));
C[21]=+S[3]*(S[8]*(V[9]*(2*(S[6]*(V[9]-V[11])+S[2]*(V[11]+V[9]))-4*V[38]*
 V[37]*V[9])));
C[20]=+S[3]*(S[8]*(V[37]*(8*V[37]-16*V[38])+8*S[2]));
C[19]=+V[37]*(12*V[37]-24*V[38])+12*S[2];
C[18]=+S[3]*(S[1]*(V[37]*(8*V[37]-16*V[38])+8*S[2]));
C[17]=+S[8]*(V[37]*(4*V[37]-8*V[38])+4*S[2]);
C[16]=+V[37]*(16*V[37]-32*V[38])+16*S[2];
C[15]=+S[7]*(S[1]*(S[8]*(V[37]*(2*V[37]-4*V[38])+2*S[2])));
C[14]=+S[1]*(S[8]*(V[37]*(4*V[37]-8*V[38])+4*S[2]));
C[13]=+S[7]*(S[1]*(V[37]*(2*V[37]-4*V[38])+2*S[2]));
C[12]=+S[1]*(V[37]*(4*V[37]-8*V[38])+4*S[2]);
C[11]=+S[7]*(V[37]*(2*V[37]-4*V[38])+2*S[2]);
C[10]=+V[37]*(4*V[37]-8*V[38])+4*S[2];
C[9]=+S[3]*(S[8]*(V[37]*(4*V[37]-8*V[38])+4*S[2]));
C[8]=+S[3]*(V[37]*(16*V[37]-32*V[38])+16*S[2]);
C[7]=+S[3]*(S[8]*(V[37]*(2*V[37]-4*V[38])+2*S[2]));
C[6]=+S[3]*(V[37]*(8*V[37]-16*V[38])+8*S[2]);
C[5]=+S[3]*(S[1]*(V[37]*(2*V[37]-4*V[38])+2*S[2]));
C[4]=+S[3]*(S[1]*(S[8]*(V[37]*(4*V[37]-8*V[38])+4*S[2])));
C[3]=+S[3]*(S[1]*(V[37]*(4*V[37]-8*V[38])+4*S[2]));
C[2]=+S[3]*(V[37]*(4*V[37]-8*V[38])+4*S[2]);
S[9]=V[14]*V[14];
S[10]=V[2]*V[2]*V[2]*V[2];
C[1]=+27*S[9]*S[10];
S[11]=V[52]*V[52];
S[12]=V[16]*V[16];
S[13]=V[1]*V[1]*V[1]*V[1];
C[0]=+8*S[11]*S[12]*S[13];
}
REAL F515_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                  !  n2                              
                           n2 /===!==>==\                            
                        /==>==/   !  P3 |                            
                        |  P3     !     |                            
                        |         !  E2 |  W+    t     c             
         c     t     W+ |  E2  /==!==<==@-->4-@==>==@==>==           
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
static REAL C[170];REAL S[12];REAL tmp[20];                                 
     
if(CalcConst) C515(C);
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
tmp[0]=+DP[6]*(C[26]*(DP[12]*(-DP[1]-DP[3]-DP[13])+DP[0]*(S[2]-DP[5])+
 DP[13]*(-DP[1]-DP[3]))+C[9]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9]))+
 S[2]*(C[59]+C[97]*S[2]-C[38]*DP[10])+DP[5]*(C[38]*DP[10]-C[59])+C[48]*
 DP[6]-C[150]-C[135]*DP[0]+C[126]*DP[10])+DP[10]*(C[26]*(DP[8]*(-DP[1]-
 DP[3]-DP[9])+DP[0]*(S[2]-DP[5])+DP[9]*(-DP[1]-DP[3]))+C[9]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13]))+S[2]*(C[59]+C[97]*S[2])+C[48]*DP[10]-
 C[150]-C[135]*DP[0]-C[59]*DP[5])+DP[0]*(C[7]*(S[8]+S[9]+S[6]+S[7])+S[2]*(-
 C[153]-C[159]*S[2])+C[9]*(DP[9]*DP[8]+DP[13]*DP[12])+C[160]+C[48]*DP[0]+
 C[153]*DP[5])+DP[2]*(C[92]*(DP[8]+DP[9]+DP[12]+DP[13])+C[80]*(DP[1]+DP[3])+
 C[4]*DP[2]+C[24]*DP[4])+DP[4]*(C[92]*(DP[8]+DP[9]+DP[12]+DP[13])+C[80]*(
 DP[1]+DP[3])+C[4]*DP[4])+DP[8]*(C[82]*(DP[12]+DP[13])+C[21]*DP[8]+C[27]*
 DP[9])+DP[9]*(C[82]*(DP[12]+DP[13])+C[21]*DP[9])+S[2]*(-C[154]-C[161]*
 S[2])+DP[1]*(C[106]*DP[1]+C[59]*DP[3])+DP[12]*(C[21]*DP[12]+C[27]*DP[13])+
 C[162]+C[106]*S[4]+C[154]*DP[5]+C[21]*S[7];
tmp[1]=+DP[7]*(DP[10]*(C[2]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13]))+
 S[2]*(-C[26]-C[23]*S[2])+C[135]+C[26]*DP[5])+DP[12]*(DP[6]*(C[2]*DP[12]+
 C[6]*DP[13])+C[54]*(-DP[2]-DP[4])+C[36]*(-DP[8]-DP[9]))+S[2]*(S[2]*(C[141]+
 C[47]*DP[0]-C[23]*DP[11])+C[138]-C[129]*DP[11])+DP[13]*(C[54]*(-DP[2]-
 DP[4])+C[36]*(-DP[8]-DP[9])+C[2]*DP[13]*DP[6])+C[9]*(DP[1]*(-DP[8]-DP[9])+
 DP[3]*(-DP[8]-DP[9]))+DP[5]*(C[129]*DP[11]-C[138])+C[48]*(DP[6]-DP[0])+
 C[131]*DP[11]-C[142]-C[26]*DP[3]*DP[1])+DP[11]*(DP[6]*(C[2]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13]))+S[2]*(-C[26]-C[23]*S[2])+C[135]+C[26]*
 DP[5])+DP[8]*(DP[10]*(C[2]*DP[8]+C[6]*DP[9])+C[54]*(-DP[2]-DP[4])+C[36]*(-
 DP[12]-DP[13]))+DP[9]*(C[54]*(-DP[2]-DP[4])+C[36]*(-DP[12]-DP[13])+C[2]*
 DP[10]*DP[9])+C[9]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13]))+S[2]*(
 S[2]*(C[141]+C[47]*DP[0])+C[138])+C[48]*(DP[10]-DP[0])-C[142]-C[26]*DP[3]*
 DP[1]-C[138]*DP[5])+tmp[0];
tmp[2]=+DP[14]*(C[2]*(DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[2]))+DP[1]*(DP[7]*(-DP[12]-DP[13])+DP[11]*(-DP[8]-DP[9])+
 DP[14]*(-DP[2]-DP[4]))+DP[3]*(DP[7]*(-DP[12]-DP[13])+DP[11]*(-DP[8]-DP[9])+
 DP[14]*(-DP[2]-DP[4]))+DP[2]*(DP[6]*(DP[12]+DP[13])+DP[10]*(DP[8]+DP[9]))+
 DP[4]*(DP[6]*(DP[12]+DP[13])+DP[10]*(DP[8]+DP[9])))+C[6]*(DP[6]*(S[2]*(
 DP[10]+DP[11])+DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[5]*(-DP[10]-
 DP[11]))+DP[10]*(DP[1]*(DP[8]+DP[9])+DP[3]*(DP[8]+DP[9])+DP[7]*(S[2]-
 DP[5]))+DP[7]*(DP[11]*(S[2]-DP[5]))+DP[14]*(-S[3]-S[4]))+S[2]*(S[2]*(
 DP[14]*(C[12]+C[10]*DP[0])+C[47]*(-DP[6]-DP[10])+C[39]*(DP[7]+DP[11])-
 C[61])+C[34]*(-DP[7]-DP[11])+C[52]-C[3]*DP[14])+C[20]*(DP[1]*(DP[8]+DP[9]+
 DP[12]+DP[13])+DP[3]*(DP[8]+DP[9]+DP[12]+DP[13]))+C[3]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+DP[7]*(C[30]*(-DP[10]-DP[11])+
 C[40]+C[34]*DP[5])+DP[1]*(DP[3]*(C[38]-C[8]*DP[14])+C[26]*DP[1])+DP[11]*(
 C[40]+C[34]*DP[5]-C[30]*DP[6])+DP[2]*(C[54]*DP[2]+C[57]*DP[4])+DP[14]*(
 C[13]+C[11]*DP[0])+C[26]*S[4]-C[62]+C[54]*S[5]-C[52]*DP[5]-C[30]*DP[10]*
 DP[6]);
tmp[3]=+DP[1]*(DP[14]*(C[34]*(-DP[2]-DP[4])+C[3]*(-DP[12]-DP[13])-C[26]*
 DP[1]-C[38]*DP[3])+DP[6]*(C[9]*(-DP[2]-DP[4])+C[26]*(DP[12]+DP[13]))+DP[7]*
 (C[36]*(DP[12]+DP[13])+C[7]*DP[1]+C[9]*DP[3])+C[140]*(DP[2]+DP[4])+C[77]*(-
 DP[8]-DP[9])+C[88]*(-DP[12]-DP[13]))+DP[3]*(DP[14]*(C[34]*(-DP[2]-DP[4])+
 C[3]*(-DP[12]-DP[13])-C[26]*DP[3])+DP[6]*(C[9]*(-DP[2]-DP[4])+C[26]*(
 DP[12]+DP[13]))+DP[7]*(C[36]*(DP[12]+DP[13])+C[7]*DP[3])+C[140]*(DP[2]+
 DP[4])+C[77]*(-DP[8]-DP[9])+C[88]*(-DP[12]-DP[13]))+DP[12]*(DP[7]*(C[36]*(
 DP[2]+DP[4])-C[5]*DP[12]-C[3]*DP[13])+C[24]*(DP[13]-DP[8]-DP[9])+DP[2]*(
 C[20]*DP[6]-C[55])+DP[4]*(C[20]*DP[6]-C[55])+C[4]*DP[12])+DP[13]*(DP[2]*(
 C[20]*DP[6]-C[55]+C[36]*DP[7])+DP[4]*(C[20]*DP[6]-C[55]+C[36]*DP[7])+
 DP[13]*(C[4]-C[5]*DP[7])+C[24]*(-DP[8]-DP[9]))+S[2]*(S[2]*(C[143]-C[78]*
 DP[6]-C[25]*DP[7]+C[41]*DP[14])+C[139]-C[127]*DP[6]-C[121]*DP[7]-C[35]*
 DP[14])+DP[14]*(DP[2]*(-C[36]*DP[2]-C[37]*DP[4])+C[42]-C[36]*S[5]+C[35]*
 DP[5])+C[76]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9]))+DP[5]*(C[127]*
 DP[6]-C[139]+C[121]*DP[7])+C[128]*DP[6]-C[144]+C[122]*DP[7];
tmp[4]=+DP[10]*(DP[10]*(C[6]*(DP[1]*(-DP[8]-DP[9])+DP[3]*(-DP[8]-DP[9])+
 DP[6]*(DP[5]-S[2]))+C[2]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9])+DP[7]*(
 DP[5]-S[2]))+S[2]*(S[2]*(C[23]-C[10]*DP[7])+C[20])+C[30]*DP[6]-C[48]-C[20]*
 DP[5]+C[11]*DP[7])+DP[11]*(C[6]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9])+
 DP[7]*(DP[5]-S[2]))+S[2]*(S[2]*(C[75]+C[49]*DP[6])+C[124]-C[29]*DP[6])+
 C[28]*(DP[1]*(-DP[8]-DP[9])+DP[3]*(-DP[8]-DP[9]))+DP[5]*(C[29]*DP[6]-
 C[124])+C[123]*DP[6]-C[125]+C[30]*DP[7])+C[2]*(DP[1]*(DP[7]*(DP[12]+
 DP[13])+DP[14]*(DP[2]+DP[4]))+DP[3]*(DP[7]*(DP[12]+DP[13])+DP[14]*(DP[2]+
 DP[4]))+DP[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])))+S[2]*(S[2]*
 (-C[136]-C[47]*DP[6]-C[39]*DP[7]-C[12]*DP[14])+C[38]*DP[6]-C[134]+C[34]*
 DP[7]+C[3]*DP[14])+DP[1]*(DP[14]*(C[6]*DP[1]+C[8]*DP[3])+C[26]*(DP[8]+
 DP[9])+C[20]*(-DP[12]-DP[13]))+DP[3]*(C[26]*(DP[8]+DP[9])+C[20]*(-DP[12]-
 DP[13])+C[6]*DP[14]*DP[3])+C[34]*(DP[2]*(DP[8]+DP[9])+DP[4]*(DP[8]+DP[9])-
 DP[7]*DP[5])+C[3]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])+DP[5]*(C[134]-C[38]*DP[6])+C[137]-C[126]*DP[6]-C[40]*DP[7]-C[13]*
 DP[14]);
S[10]=DP[2]*DP[2];
tmp[5]=+DP[10]*(C[20]*(DP[1]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[2]*(DP[8]+DP[9]+
 DP[12]+DP[13])+DP[3]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[4]*(DP[8]+DP[9]+DP[12]+
 DP[13])+DP[14]*(DP[5]-S[2]))+DP[14]*(C[6]*(DP[2]*(-DP[1]-DP[3]-DP[4])+
 DP[4]*(-DP[1]-DP[3]))+C[2]*(-S[10]-S[5])+C[48]+C[47]*S[1])+C[26]*(S[2]*(
 DP[6]+DP[10])+DP[5]*(-DP[6]-DP[10]))+C[9]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13]))+C[60]*(DP[5]-S[2])+C[135]*(-DP[6]-DP[10])+C[148])+DP[6]*(
 DP[12]*(C[20]*(DP[1]+DP[3])+C[7]*DP[12]+C[9]*DP[13])+DP[13]*(C[20]*(DP[1]+
 DP[3])+C[7]*DP[13])+S[2]*(-C[80]-C[81]*S[2])+DP[2]*(C[7]*DP[2]+C[9]*DP[4])+
 C[147]+C[7]*S[5]+C[80]*DP[5])+DP[14]*(DP[1]*(C[9]*(-DP[12]-DP[13])-C[20]*
 DP[1]-C[26]*DP[3])+DP[3]*(C[9]*(-DP[12]-DP[13])-C[20]*DP[3])+S[2]*(C[50]+
 C[14]*S[2])-C[51]-C[50]*DP[5])+DP[12]*(C[59]*(-DP[1]-DP[3])+C[90]*(-DP[2]-
 DP[4])+C[79]*(DP[8]+DP[9])-C[21]*DP[12]-C[27]*DP[13])+DP[13]*(C[59]*(-
 DP[1]-DP[3])+C[90]*(-DP[2]-DP[4])+C[79]*(DP[8]+DP[9])-C[21]*DP[13])+DP[2]*(
 C[77]*(-DP[8]-DP[9])-C[140]*DP[2]-C[146]*DP[4])+C[80]*(DP[1]*(DP[8]+DP[9])+
 DP[3]*(DP[8]+DP[9]))+DP[4]*(C[77]*(-DP[8]-DP[9])-C[140]*DP[4])+S[2]*(
 C[149]+C[151]*S[2])-C[152]-C[149]*DP[5];
tmp[6]=+DP[10]*(DP[10]*(DP[8]*(C[20]*(DP[1]+DP[3])+C[7]*DP[8]+C[9]*DP[9])+
 DP[9]*(C[20]*(DP[1]+DP[3])+C[7]*DP[9])+S[2]*(-C[80]-C[81]*S[2])+DP[2]*(
 C[7]*DP[2]+C[9]*DP[4])+C[147]+C[7]*S[5]+C[80]*DP[5])+DP[8]*(C[59]*(-DP[1]-
 DP[3])+C[90]*(-DP[2]-DP[4])+C[79]*(DP[12]+DP[13])-C[21]*DP[8]-C[27]*DP[9])+
 DP[9]*(C[59]*(-DP[1]-DP[3])+C[90]*(-DP[2]-DP[4])+C[79]*(DP[12]+DP[13])-
 C[21]*DP[9])+DP[2]*(C[77]*(-DP[12]-DP[13])-C[140]*DP[2]-C[146]*DP[4])+
 C[80]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13]))+DP[4]*(C[77]*(-DP[12]-
 DP[13])-C[140]*DP[4])+S[2]*(C[149]+C[151]*S[2])-C[152]-C[149]*DP[5])+DP[1]*
 (C[94]*(DP[8]+DP[9]+DP[12]+DP[13])+C[156]*(-DP[2]-DP[4])-C[157]*DP[1]-
 C[158]*DP[3])+C[93]*(DP[2]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[4]*(DP[8]+DP[9]+
 DP[12]+DP[13]))+DP[3]*(C[94]*(DP[8]+DP[9]+DP[12]+DP[13])+C[156]*(-DP[2]-
 DP[4])-C[157]*DP[3])+C[71]*(-S[10]-S[5]-S[8]-S[9]-S[6]-S[7])+C[83]*(DP[8]*(
 DP[12]+DP[13])+DP[9]*(DP[12]+DP[13]))+C[73]*(-DP[4]*DP[2]-DP[9]*DP[8]-
 DP[13]*DP[12])+S[2]*(-C[155]-C[163]*S[2])+C[164]+C[155]*DP[5];
tmp[7]=+DP[11]*(DP[1]*(DP[14]*(C[34]*(-DP[2]-DP[4])+C[3]*(-DP[8]-DP[9])-
 C[26]*DP[1]-C[38]*DP[3])+DP[10]*(C[9]*(-DP[2]-DP[4])+C[26]*(DP[8]+DP[9]))+
 DP[11]*(C[36]*(DP[8]+DP[9])+C[7]*DP[1]+C[9]*DP[3])+C[140]*(DP[2]+DP[4])+
 C[88]*(-DP[8]-DP[9])+C[77]*(-DP[12]-DP[13]))+DP[3]*(DP[14]*(C[34]*(-DP[2]-
 DP[4])+C[3]*(-DP[8]-DP[9])-C[26]*DP[3])+DP[10]*(C[9]*(-DP[2]-DP[4])+C[26]*(
 DP[8]+DP[9]))+DP[11]*(C[36]*(DP[8]+DP[9])+C[7]*DP[3])+C[140]*(DP[2]+DP[4])+
 C[88]*(-DP[8]-DP[9])+C[77]*(-DP[12]-DP[13]))+DP[8]*(DP[11]*(C[36]*(DP[2]+
 DP[4])-C[5]*DP[8]-C[3]*DP[9])+C[24]*(DP[9]-DP[12]-DP[13])+DP[2]*(C[20]*
 DP[10]-C[55])+DP[4]*(C[20]*DP[10]-C[55])+C[4]*DP[8])+DP[9]*(DP[2]*(C[20]*
 DP[10]-C[55]+C[36]*DP[11])+DP[4]*(C[20]*DP[10]-C[55]+C[36]*DP[11])+DP[9]*(
 C[4]-C[5]*DP[11])+C[24]*(-DP[12]-DP[13]))+S[2]*(S[2]*(C[143]-C[78]*DP[10]-
 C[25]*DP[11]+C[41]*DP[14])+C[139]-C[127]*DP[10]-C[121]*DP[11]-C[35]*
 DP[14])+DP[14]*(DP[2]*(-C[36]*DP[2]-C[37]*DP[4])+C[42]-C[36]*S[5]+C[35]*
 DP[5])+C[76]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13]))+DP[5]*(C[127]*
 DP[10]-C[139]+C[121]*DP[11])+C[128]*DP[10]-C[144]+C[122]*DP[11]);
tmp[8]=+DP[6]*(DP[11]*(DP[6]*(C[6]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*(DP[5]-S[2]))+C[2]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*(DP[5]-S[2]))+S[2]*(S[2]*(C[23]-C[10]*DP[11])+C[20])+C[30]*
 DP[10]-C[48]-C[20]*DP[5]+C[11]*DP[11])+C[2]*(DP[1]*(DP[11]*(DP[8]+DP[9])+
 DP[14]*(DP[2]+DP[4]))+DP[3]*(DP[11]*(DP[8]+DP[9])+DP[14]*(DP[2]+DP[4]))+
 DP[10]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9])))+S[2]*(S[2]*(-C[136]-
 C[47]*DP[10]-C[39]*DP[11]-C[12]*DP[14])+C[38]*DP[10]-C[134]+C[34]*DP[11]+
 C[3]*DP[14])+DP[1]*(DP[14]*(C[6]*DP[1]+C[8]*DP[3])+C[20]*(-DP[8]-DP[9])+
 C[26]*(DP[12]+DP[13]))+DP[3]*(C[20]*(-DP[8]-DP[9])+C[26]*(DP[12]+DP[13])+
 C[6]*DP[14]*DP[3])+C[34]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-
 DP[11]*DP[5])+C[3]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])+DP[5]*(C[134]-C[38]*DP[10])+C[137]-C[126]*DP[10]-C[40]*DP[11]-C[13]*
 DP[14])+tmp[5]);
tmp[9]=+DP[14]*(DP[1]*(DP[10]*(C[9]*(-DP[8]-DP[9])-C[20]*DP[1]-C[26]*DP[3])+
 DP[14]*(C[3]*(DP[2]+DP[4])+C[7]*DP[1]+C[9]*DP[3])+C[21]*(DP[8]+DP[9]+
 DP[12]+DP[13])+C[56]*(DP[2]+DP[4])+C[59]*DP[1]+C[60]*DP[3])+C[4]*(DP[2]*(-
 DP[8]-DP[9]-DP[12]-DP[13])+DP[4]*(-DP[8]-DP[9]-DP[12]-DP[13])+DP[8]*(
 DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[2]-DP[5]))+DP[3]*(C[21]*(
 DP[8]+DP[9]+DP[12]+DP[13])+DP[3]*(C[59]-C[20]*DP[10]+C[7]*DP[14])+DP[2]*(
 C[56]+C[3]*DP[14])+DP[4]*(C[56]+C[3]*DP[14])+DP[10]*(C[9]*(-DP[8]-DP[9])))+
 S[2]*(S[2]*(C[14]*(DP[10]-DP[14])-C[63])+C[53]+C[50]*DP[10])+DP[2]*(DP[2]*(
 C[55]+C[5]*DP[14])+DP[4]*(C[58]+C[3]*DP[14]))+S[5]*(C[55]+C[5]*DP[14])+
 DP[5]*(-C[53]-C[50]*DP[10])-C[64]-C[51]*DP[10]-C[15]*DP[14])+tmp[6]+tmp[7]+
 tmp[8];
tmp[10]=+DP[13]*(DP[7]*(DP[1]*(DP[0]*(C[23]-C[19]*DP[14])+DP[6]*(C[47]-
 C[10]*DP[11])+DP[7]*(C[39]+C[10]*DP[10])+C[89]-C[23]*DP[10]-C[75]*DP[11]-
 C[12]*DP[14])+DP[8]*(DP[0]*(C[19]*DP[10]-C[39])+C[84]+C[31]*DP[10]+C[12]*
 DP[11])+DP[2]*(DP[6]*(-C[39]-C[10]*DP[10])+C[85]+C[12]*DP[14])+DP[12]*(
 C[22]+C[49]*DP[6]*DP[0]-C[12]*DP[7]))+DP[0]*(DP[8]*(DP[6]*(C[47]-C[10]*
 DP[11])+DP[14]*(-C[12]-C[10]*DP[0])+C[86]-C[47]*DP[10]-C[39]*DP[11])+DP[1]*
 (C[17]*DP[11]-C[97]+C[23]*DP[14])+DP[2]*(C[10]*DP[14]*DP[6]-C[95]-C[17]*
 DP[10])+DP[12]*(C[72]+C[17]*DP[0]-C[23]*DP[6]))+DP[6]*(DP[2]*(DP[6]*(C[10]*
 DP[11]-C[47])+C[91]+C[47]*DP[10]+C[39]*DP[11]+C[12]*DP[14])+C[17]*(DP[12]*
 DP[6]-DP[10]*DP[8]-DP[14]*DP[1])+C[85]*DP[8]-C[72]*DP[12])+DP[1]*(C[81]*
 DP[10]-C[98]+C[78]*DP[11]+C[14]*DP[14])+DP[8]*(C[87]-C[22]*DP[10]-C[72]*
 DP[11]+C[14]*DP[14])+DP[2]*(C[25]*DP[11]-C[96]-C[22]*DP[14])-C[74]*DP[12]);
tmp[11]=+DP[4]*(DP[14]*(DP[1]*(DP[7]*(C[19]*DP[10]-C[44]+C[16]*DP[11])+
 DP[6]*(C[19]*DP[11]-C[47])+DP[14]*(C[12]-C[10]*DP[0])+C[67]-C[47]*DP[10]-
 C[44]*DP[11])+DP[2]*(C[43]*(-DP[7]-DP[11])+C[66]+C[65]*DP[0]-C[49]*DP[10]*
 DP[6]+C[12]*DP[14])+C[12]*(DP[8]*(-DP[10]-DP[11])+DP[12]*(-DP[6]-DP[7]))+
 DP[0]*(C[10]*(DP[10]*DP[8]+DP[12]*DP[6])))+DP[8]*(DP[10]*(DP[7]*(C[44]-
 C[19]*DP[10]-C[16]*DP[11])+DP[6]*(C[47]-C[10]*DP[11])+C[47]*DP[10]-C[112]+
 C[44]*DP[11])+DP[11]*(C[43]*(DP[7]+DP[11])-C[109]-C[65]*DP[0])+DP[0]*(
 C[114]-C[17]*DP[6])+C[115]-C[85]*DP[6]-C[100]*DP[7])+DP[12]*(DP[6]*(DP[7]*(
 C[44]-C[10]*DP[10]-C[16]*DP[11])+DP[6]*(C[47]-C[19]*DP[11])+C[47]*DP[10]-
 C[112]+C[44]*DP[11])+DP[7]*(C[43]*(DP[7]+DP[11])-C[109]-C[65]*DP[0])+DP[0]*
 (C[114]-C[17]*DP[10])+C[115]-C[85]*DP[10]-C[100]*DP[11])+DP[1]*(DP[0]*(
 C[47]*(-DP[7]-DP[11])+C[159])+DP[7]*(C[145]-C[17]*DP[6])+DP[11]*(C[145]-
 C[17]*DP[10])-C[165])+DP[2]*(DP[6]*(C[17]*DP[6]-C[95])+DP[10]*(C[17]*
 DP[10]-C[95])+C[22]*DP[0]-C[74]));
tmp[12]=+DP[3]*(DP[14]*(DP[1]*(DP[7]*(C[16]*DP[10]-C[45]+C[33]*DP[11])+
 DP[0]*(C[45]-C[16]*DP[14])+DP[6]*(C[16]*DP[11]-C[23])+C[69]-C[23]*DP[10]-
 C[45]*DP[11]+C[17]*DP[14])+DP[2]*(DP[6]*(C[47]-C[16]*DP[10]-C[10]*DP[11])+
 DP[7]*(-C[39]-C[10]*DP[10])+DP[14]*(C[12]-C[10]*DP[0])+C[47]*DP[10]-C[68]-
 C[39]*DP[11])+DP[8]*(DP[0]*(C[16]*DP[10]+C[10]*DP[11])+C[25]-C[17]*DP[10]-
 C[12]*DP[11])+DP[12]*(DP[0]*(C[16]*DP[6]+C[10]*DP[7])+C[25]-C[17]*DP[6]-
 C[12]*DP[7]))+DP[0]*(C[23]*(DP[0]*(DP[8]-DP[2]+DP[12])+DP[1]*(-DP[7]-
 DP[11])+DP[2]*(DP[6]+DP[10])+DP[8]*(-DP[6]-DP[11])+DP[12]*(-DP[7]-DP[10]))+
 DP[2]*(C[47]*(DP[7]+DP[11])-C[81])+DP[8]*(C[97]-C[101]*DP[7]-C[45]*DP[10])+
 DP[12]*(C[97]-C[45]*DP[6]-C[101]*DP[11])+C[167]*DP[1])+DP[7]*(DP[12]*(
 DP[6]*(C[108]-C[99]*DP[11])+DP[7]*(C[39]+C[10]*DP[10])+C[75]*DP[11]-
 C[110])+DP[8]*(DP[10]*(C[45]-C[16]*DP[10]-C[99]*DP[11])+C[75]*DP[11]-
 C[102])+DP[2]*(C[25]-C[17]*DP[6])+C[17]*DP[7]*DP[1])+DP[11]*(DP[8]*(DP[11]*
 (C[39]+C[10]*DP[6])+C[108]*DP[10]-C[110])+DP[12]*(DP[6]*(C[45]-C[16]*
 DP[6])-C[102])+DP[2]*(C[25]-C[17]*DP[10])+C[17]*DP[11]*DP[1])+DP[6]*(
 DP[12]*(C[23]*(DP[6]+DP[10])-C[69])+DP[8]*(C[23]*DP[10]-C[105]))+DP[8]*(
 DP[10]*(C[23]*DP[10]-C[69])+C[116])+DP[12]*(C[116]-C[105]*DP[10])+C[166]*
 DP[2]-C[168]*DP[1]);
tmp[13]=+DP[7]*(DP[10]*(DP[8]*(C[8]*DP[10]-C[38]+C[29]*DP[11])+DP[9]*(C[6]*
 DP[10]-C[26]+C[28]*DP[11])+DP[7]*(-C[6]*DP[12]-C[2]*DP[13])+C[26]*DP[12]+
 C[20]*DP[13])+DP[6]*(DP[11]*(C[29]*DP[12]+C[28]*DP[13])+C[20]*DP[2]+C[9]*
 DP[4]-C[38]*DP[12]-C[26]*DP[13])+DP[7]*(C[9]*(-DP[1]-DP[3])-C[37]*DP[12]-
 C[36]*DP[13])+C[76]*DP[8]-C[146]*DP[2]-C[140]*DP[4]+C[77]*DP[9]+C[111]*
 DP[12]+C[88]*DP[13])+DP[11]*(DP[6]*(DP[6]*(C[8]*DP[12]+C[6]*DP[13])+DP[8]*(
 C[26]-C[6]*DP[11])+DP[9]*(C[20]-C[2]*DP[11])-C[38]*DP[12]-C[26]*DP[13])+
 DP[10]*(C[20]*DP[2]+C[9]*DP[4]-C[38]*DP[8]-C[26]*DP[9])+DP[11]*(C[9]*(-
 DP[1]-DP[3])-C[37]*DP[8]-C[36]*DP[9])+C[111]*DP[8]-C[146]*DP[2]-C[140]*
 DP[4]+C[88]*DP[9]+C[76]*DP[12]+C[77]*DP[13])+DP[6]*(DP[10]*(C[26]*(-DP[8]-
 DP[12])+C[20]*(-DP[9]-DP[13]))+DP[6]*(-C[26]*DP[12]-C[20]*DP[13])+C[60]*
 DP[12]-C[106]*DP[8]-C[80]*DP[9]+C[59]*DP[13])+DP[10]*(DP[8]*(C[60]-C[26]*
 DP[10])+DP[9]*(C[59]-C[20]*DP[10])-C[106]*DP[12]-C[80]*DP[13])+C[158]*(
 DP[1]+DP[3])+C[119]*(-DP[8]-DP[12])+C[94]*(-DP[9]-DP[13])+C[169]*DP[2]+
 C[156]*DP[4];
S[11]=DP[14]*DP[14];
tmp[14]=+DP[7]*(DP[10]*(DP[8]*(C[6]*DP[10]-C[46]+C[8]*DP[11])+DP[9]*(C[2]*
 DP[10]-C[34]+C[6]*DP[11])-C[2]*DP[14]*DP[3])+DP[11]*(C[37]*(-DP[8]-DP[12])+
 C[36]*(-DP[9]-DP[13])-C[6]*DP[14]*DP[3])+DP[12]*(C[58]+C[57]*DP[0]-C[37]*
 DP[7])+DP[13]*(C[55]+C[54]*DP[0]-C[36]*DP[7])+DP[14]*(C[37]*(DP[2]+DP[4])+
 C[34]*DP[3])+C[103]*DP[8]-C[140]*DP[3]+C[76]*DP[9])+DP[0]*(DP[10]*(DP[14]*
 (-C[6]*DP[8]-C[2]*DP[9])+C[20]*(DP[12]-DP[3])+C[9]*DP[13])+DP[3]*(C[20]*
 DP[0]-C[80]+C[2]*S[11])+C[57]*(DP[14]*(-DP[2]-DP[4])+DP[11]*DP[8])+DP[9]*(
 C[54]*DP[11]-C[92])+C[24]*(-DP[2]-DP[4])+C[117]*(-DP[8]-DP[12])-C[92]*
 DP[13])+DP[11]*(DP[3]*(C[9]*DP[10]-C[140]+C[34]*DP[14])+DP[8]*(C[58]-C[26]*
 DP[10]-C[37]*DP[11])+DP[9]*(C[55]-C[20]*DP[10]-C[36]*DP[11])+DP[14]*(C[37]*
 (DP[2]+DP[4]))+C[103]*DP[12]+C[76]*DP[13])+DP[14]*(DP[14]*(C[3]*(-DP[2]-
 DP[3]-DP[4]))+C[58]*(-DP[2]-DP[4])+C[24]*(DP[8]+DP[12])+C[4]*(DP[9]+
 DP[13])-C[56]*DP[3])+DP[10]*(DP[2]*(C[146]-C[9]*DP[10])+DP[4]*(C[146]-C[9]*
 DP[10])+C[113]*DP[8]+C[90]*DP[9]+C[76]*DP[12]+C[77]*DP[13])+C[73]*(DP[2]+
 DP[4])+C[118]*(-DP[8]-DP[12])+C[93]*(-DP[9]-DP[13])+C[156]*DP[3];
tmp[15]=+DP[8]*(DP[10]*(DP[3]*(DP[7]*(C[6]*DP[10]-C[26]+C[28]*DP[11])+DP[0]*
 (C[26]-C[6]*DP[14])+C[20]*(-DP[6]-DP[10])+C[59]-C[26]*DP[11]+C[9]*DP[14])+
 DP[4]*(DP[7]*(C[2]*DP[10]-C[34]+C[6]*DP[11])+DP[6]*(C[2]*DP[11]-C[20])+
 C[90]-C[20]*DP[11]-C[2]*DP[14]*DP[0])+DP[0]*(C[6]*(DP[11]*(-DP[8]-DP[9])-
 DP[12]*DP[7])+C[26]*(DP[8]+DP[9])-C[2]*DP[13]*DP[7])+DP[12]*(C[20]*DP[6]-
 C[104]-C[18]*DP[7])+DP[13]*(C[9]*DP[6]-C[79]-C[3]*DP[7])+DP[8]*(C[27]-C[9]*
 DP[10])+DP[9]*(C[27]-C[9]*DP[10]))+DP[0]*(DP[11]*(DP[6]*(-C[6]*DP[12]-C[2]*
 DP[13])+C[54]*DP[4]+C[37]*DP[12]+C[36]*DP[13]+C[2]*DP[14]*DP[3])+DP[0]*(
 DP[14]*(C[6]*DP[12]+C[2]*DP[13])+C[9]*(-DP[8]-DP[9])-C[20]*DP[3])+DP[3]*(
 C[20]*(DP[6]-DP[14])+C[9]*DP[7])+DP[12]*(C[37]*DP[7]-C[107]+C[18]*DP[14])+
 DP[13]*(C[36]*DP[7]-C[82]+C[3]*DP[14])+DP[4]*(C[9]*DP[6]-C[92])+C[27]*(-
 DP[8]-DP[9]))+DP[11]*(DP[3]*(DP[6]*(C[20]-C[2]*DP[11])+C[88]-C[36]*DP[11]+
 C[3]*DP[14])+C[3]*(DP[11]*(DP[8]+DP[9])+DP[13]*(-DP[6]-DP[7]))+DP[4]*(
 C[36]*(-DP[7]-DP[11])+C[55])+DP[12]*(C[18]*(-DP[6]-DP[7])+C[35])+C[24]*(
 DP[13]-DP[8]-DP[9]))+DP[3]*(C[77]*DP[7]-C[94]-C[80]*DP[6]-C[21]*DP[14])+
 DP[4]*(C[77]*DP[6]-C[93]+C[76]*DP[7]+C[4]*DP[14])+DP[12]*(C[35]*DP[7]-
 C[53]-C[104]*DP[6]-C[24]*DP[14])+DP[13]*(C[24]*DP[7]-C[83]-C[79]*DP[6]-
 C[4]*DP[14])+C[73]*(DP[8]+DP[9]));
tmp[16]=+DP[12]*(DP[6]*(DP[3]*(DP[11]*(C[6]*DP[6]-C[26]+C[28]*DP[7])+DP[0]*(
 C[26]-C[6]*DP[14])+C[20]*(-DP[6]-DP[10])+C[59]-C[26]*DP[7]+C[9]*DP[14])+
 DP[4]*(DP[7]*(C[2]*DP[10]-C[20]+C[6]*DP[11])+DP[11]*(C[2]*DP[6]-C[34])+
 C[90]-C[20]*DP[10]-C[2]*DP[14]*DP[0])+DP[0]*(DP[7]*(C[6]*(-DP[12]-DP[13]))+
 C[26]*(DP[12]+DP[13])-C[2]*DP[11]*DP[9])+DP[9]*(C[9]*DP[10]-C[79]-C[3]*
 DP[11])+DP[6]*(C[9]*(-DP[12]-DP[13]))+C[27]*(DP[12]+DP[13]))+DP[7]*(DP[3]*(
 DP[7]*(-C[36]-C[2]*DP[10])+DP[14]*(C[3]+C[2]*DP[0])+C[88]+C[20]*DP[10])+
 DP[9]*(DP[0]*(C[36]-C[2]*DP[10])+C[3]*(-DP[10]-DP[11])+C[24])+DP[4]*(C[36]*
 (-DP[7]-DP[11])+C[55]+C[54]*DP[0])+DP[7]*(C[3]*(DP[12]+DP[13]))+C[24]*(-
 DP[12]-DP[13]))+DP[0]*(DP[0]*(C[9]*(-DP[12]-DP[13])+C[2]*DP[14]*DP[9]-
 C[20]*DP[3])+DP[3]*(C[20]*(DP[10]-DP[14])+C[9]*DP[11])+DP[9]*(C[36]*DP[11]-
 C[82]+C[3]*DP[14])+DP[4]*(C[9]*DP[10]-C[92])+C[27]*(-DP[12]-DP[13]))+DP[3]*
 (C[77]*DP[11]-C[94]-C[80]*DP[10]-C[21]*DP[14])+DP[4]*(C[77]*DP[10]-C[93]+
 C[76]*DP[11]+C[4]*DP[14])+DP[9]*(C[24]*DP[11]-C[83]-C[79]*DP[10]-C[4]*
 DP[14])+C[73]*(DP[12]+DP[13]))+tmp[15];
tmp[17]=+DP[1]*(DP[14]*(DP[0]*(C[6]*(DP[11]*DP[8]-DP[10]*DP[9]+DP[12]*DP[7]-
 DP[13]*DP[6]+DP[14]*DP[2])+C[8]*(DP[14]*(DP[1]+DP[3])-DP[10]*DP[8]-DP[12]*
 DP[6])+C[2]*(DP[11]*DP[9]+DP[13]*DP[7]+DP[14]*DP[4])+C[38]*(-DP[1]-DP[3])+
 C[26]*(-DP[8]-DP[12])+C[20]*(-DP[9]-DP[13]))+DP[7]*(DP[10]*(C[8]*(-DP[1]-
 DP[3])-C[6]*DP[2]-C[2]*DP[4])+DP[11]*(C[29]*(-DP[1]-DP[3])-C[8]*DP[2]-C[6]*
 DP[4])+C[38]*(DP[1]+DP[3])+C[46]*DP[2]+C[34]*DP[4]+C[18]*DP[12]+C[3]*
 DP[13])+DP[6]*(DP[11]*(C[8]*(-DP[1]-DP[3])-C[6]*DP[2]-C[2]*DP[4])+DP[10]*(
 C[8]*DP[2]+C[6]*DP[4])+C[26]*(DP[1]+DP[3])+C[20]*DP[12]+C[9]*DP[13])+
 DP[11]*(C[38]*(DP[1]+DP[3])+C[46]*DP[2]+C[34]*DP[4]+C[18]*DP[8]+C[3]*
 DP[9])+DP[10]*(C[26]*(DP[1]+DP[3])+C[20]*DP[8]+C[9]*DP[9])+DP[14]*(C[9]*(-
 DP[1]-DP[3])-C[18]*DP[2]-C[3]*DP[4])+C[60]*(-DP[1]-DP[3])+C[27]*(-DP[8]-
 DP[12])+C[21]*(-DP[9]-DP[13])-C[70]*DP[2]-C[56]*DP[4])+DP[0]*(C[26]*(DP[0]*
 (DP[2]-DP[8]-DP[12])+DP[6]*(DP[8]-DP[2]+DP[13])+DP[10]*(DP[9]-DP[2]+
 DP[12])+DP[1]*(DP[7]+DP[11])+DP[3]*(DP[7]+DP[11]))+C[20]*(DP[0]*(DP[4]-
 DP[9]-DP[13])+DP[4]*(-DP[6]-DP[10])+DP[8]*DP[7]+DP[9]*DP[6]+DP[12]*DP[11]+
 DP[13]*DP[10])+C[59]*(-DP[1]-DP[3])+C[9]*(DP[9]*DP[7]+DP[13]*DP[11])+C[38]*
 (DP[10]*DP[8]+DP[12]*DP[6])-C[106]*DP[2]-C[80]*DP[4])+tmp[13]);
tmp[18]=+S[2]*(DP[9]*(DP[11]*(DP[1]*(DP[0]*(C[23]-C[19]*DP[14])+DP[6]*(
 C[10]*DP[11]-C[23])+DP[7]*(-C[75]-C[10]*DP[10])+C[89]+C[47]*DP[10]+C[39]*
 DP[11]-C[12]*DP[14])+DP[12]*(DP[0]*(C[19]*DP[6]-C[39])+C[84]+C[31]*DP[6]+
 C[12]*DP[7])+DP[2]*(DP[10]*(-C[39]-C[10]*DP[6])+C[85]+C[12]*DP[14])+DP[8]*(
 C[22]+C[49]*DP[10]*DP[0]-C[12]*DP[11]))+DP[0]*(DP[12]*(DP[7]*(-C[39]-C[10]*
 DP[10])+DP[14]*(-C[12]-C[10]*DP[0])+C[47]*(DP[10]-DP[6])+C[86])+DP[1]*(
 C[17]*DP[7]-C[97]+C[23]*DP[14])+DP[2]*(C[10]*DP[14]*DP[10]-C[95]-C[17]*
 DP[6])+DP[8]*(C[72]+C[17]*DP[0]-C[23]*DP[10]))+DP[10]*(DP[2]*(DP[7]*(C[39]+
 C[10]*DP[10])+C[47]*(DP[6]-DP[10])+C[91]+C[12]*DP[14])+C[17]*(DP[10]*DP[8]-
 DP[12]*DP[6]-DP[14]*DP[1])+C[85]*DP[12]-C[72]*DP[8])+DP[1]*(C[81]*DP[6]-
 C[98]+C[78]*DP[7]+C[14]*DP[14])+DP[12]*(C[87]-C[22]*DP[6]-C[72]*DP[7]+
 C[14]*DP[14])+DP[2]*(C[25]*DP[7]-C[96]-C[22]*DP[14])-C[74]*DP[8])+tmp[10]+
 tmp[11]+tmp[12]);
tmp[19]=+DP[5]*(DP[0]*(C[20]*(DP[0]*(DP[1]*(DP[8]-DP[2]-DP[4]+DP[9]+DP[12]+
 DP[13])+DP[3]*(DP[8]-DP[2]-DP[4]+DP[9]+DP[12]+DP[13])+S[2]*(DP[7]-DP[0]+
 DP[11])+DP[5]*(DP[0]-DP[7]-DP[11]))+DP[6]*(DP[1]*(DP[2]+DP[4]-DP[8]-DP[9])+
 DP[3]*(DP[2]+DP[4]-DP[8]-DP[9])+S[2]*(-DP[6]-DP[7])+DP[5]*(DP[6]+DP[7])-
 S[6]-S[7])+DP[10]*(DP[1]*(DP[2]+DP[4]-DP[12]-DP[13])+DP[3]*(DP[2]+DP[4]-
 DP[12]-DP[13])+S[2]*(-DP[10]-DP[11])+DP[5]*(DP[10]+DP[11])-S[8]-S[9])+S[3]*
 (-DP[7]-DP[11])+S[4]*(-DP[7]-DP[11]))+tmp[1]+tmp[2])+DP[7]*(DP[11]*(DP[6]*(
 C[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+
 C[28]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13]))+S[2]*(C[124]+C[75]*
 S[2])+C[30]*DP[11]-C[125]-C[124]*DP[5])+DP[14]*(DP[1]*(C[6]*(DP[2]+DP[4])+
 C[28]*DP[1]+C[29]*DP[3])+DP[3]*(C[6]*(DP[2]+DP[4])+C[28]*DP[3])+S[2]*(
 C[18]-C[31]*S[2])-C[32]-C[18]*DP[5])+C[36]*(DP[2]*(DP[8]+DP[9]+DP[12]+
 DP[13])+DP[4]*(DP[8]+DP[9]+DP[12]+DP[13]))+S[2]*(C[37]*(DP[7]+DP[11])-
 C[130]-C[132]*S[2])+C[3]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13]))+
 DP[5]*(C[37]*(-DP[7]-DP[11])+C[130])+C[120]*(-DP[7]-DP[11])+C[133])+tmp[3]+
 tmp[4])+tmp[9]);
R=+S[2]*(DP[2]*(DP[6]*(DP[10]*(C[6]*(DP[14]*(DP[2]+DP[3]+DP[4])+DP[11]*
 DP[8]+DP[12]*DP[7])+DP[9]*(C[2]*DP[11]-C[20])+DP[13]*(C[2]*DP[7]-C[20])+
 C[26]*(-DP[8]-DP[12]))+DP[11]*(DP[12]*(C[6]*DP[6]-C[46]+C[8]*DP[7])+DP[13]*
 (C[2]*DP[6]-C[34]+C[6]*DP[7])-C[2]*DP[14]*DP[3])+DP[0]*(DP[14]*(-C[6]*
 DP[12]-C[2]*DP[13])+C[20]*(DP[8]-DP[3])+C[9]*DP[9])+DP[7]*(C[9]*DP[3]-
 C[26]*DP[12]-C[20]*DP[13])+DP[2]*(C[146]-C[9]*DP[6])+DP[4]*(C[146]-C[9]*
 DP[6])+C[76]*DP[8]+C[77]*DP[9]+C[113]*DP[12]+C[90]*DP[13])+tmp[14])+
 tmp[16]+tmp[17]+tmp[18])+tmp[19];
R*=(N/D)*Q1[4]*Q1[1]*Q2[2]*Q1[5]*Q1[3];
 if(cb_coeff_out)
 {
 }
 return R;
}
