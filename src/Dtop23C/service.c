/*******************************
*    CalcHEP  3.2*
*******************************/
#include<math.h>
#include<complex.h>
#include"num_out.h"
#include"num_in.h"
double BWrange_out=2.7;
int twidth_out=0;
int gtwidth_out=0;
int gswidth_out=0;
 REAL va_out[30]={0};
const int nin_out = 2;

const int nout_out = 3;

const int nprc_out = 40;

char * pinf_out(int nsub,int nprtcl,REAL* pmass,int * num)
{
int n;
 static char *names[40][5] ={
{"u","G","n1","E1","b"},
{"u","G","n2","E2","b"},
{"u","G","n3","E3","b"},
{"u","G","u","D","b"},
{"u","G","c","S","b"},
{"U","G","N1","e1","B"},
{"U","G","N2","e2","B"},
{"U","G","N3","e3","B"},
{"U","G","U","d","B"},
{"U","G","C","s","B"},
{"c","G","n1","E1","b"},
{"c","G","n2","E2","b"},
{"c","G","n3","E3","b"},
{"c","G","u","D","b"},
{"c","G","c","S","b"},
{"C","G","N1","e1","B"},
{"C","G","N2","e2","B"},
{"C","G","N3","e3","B"},
{"C","G","U","d","B"},
{"C","G","C","s","B"},
{"G","u","n1","E1","b"},
{"G","u","n2","E2","b"},
{"G","u","n3","E3","b"},
{"G","u","u","D","b"},
{"G","u","c","S","b"},
{"G","U","N1","e1","B"},
{"G","U","N2","e2","B"},
{"G","U","N3","e3","B"},
{"G","U","U","d","B"},
{"G","U","C","s","B"},
{"G","c","n1","E1","b"},
{"G","c","n2","E2","b"},
{"G","c","n3","E3","b"},
{"G","c","u","D","b"},
{"G","c","c","S","b"},
{"G","C","N1","e1","B"},
{"G","C","N2","e2","B"},
{"G","C","N3","e3","B"},
{"G","C","U","d","B"},
{"G","C","C","s","B"}};
int const nvalue[40][5]={
{0,0,0,0,14},
{0,0,0,8,14},
{0,0,0,9,14},
{0,0,0,0,14},
{0,0,10,11,14},
{0,0,0,0,14},
{0,0,0,8,14},
{0,0,0,9,14},
{0,0,0,0,14},
{0,0,10,11,14},
{10,0,0,0,14},
{10,0,0,8,14},
{10,0,0,9,14},
{10,0,0,0,14},
{10,0,10,11,14},
{10,0,0,0,14},
{10,0,0,8,14},
{10,0,0,9,14},
{10,0,0,0,14},
{10,0,10,11,14},
{0,0,0,0,14},
{0,0,0,8,14},
{0,0,0,9,14},
{0,0,0,0,14},
{0,0,10,11,14},
{0,0,0,0,14},
{0,0,0,8,14},
{0,0,0,9,14},
{0,0,0,0,14},
{0,0,10,11,14},
{0,10,0,0,14},
{0,10,0,8,14},
{0,10,0,9,14},
{0,10,0,0,14},
{0,10,10,11,14},
{0,10,0,0,14},
{0,10,0,8,14},
{0,10,0,9,14},
{0,10,0,0,14},
{0,10,10,11,14}};
long const pcode[40][5]={
{2,21,12,-11,5},
{2,21,14,-13,5},
{2,21,16,-15,5},
{2,21,2,-1,5},
{2,21,4,-3,5},
{-2,21,-12,11,-5},
{-2,21,-14,13,-5},
{-2,21,-16,15,-5},
{-2,21,-2,1,-5},
{-2,21,-4,3,-5},
{4,21,12,-11,5},
{4,21,14,-13,5},
{4,21,16,-15,5},
{4,21,2,-1,5},
{4,21,4,-3,5},
{-4,21,-12,11,-5},
{-4,21,-14,13,-5},
{-4,21,-16,15,-5},
{-4,21,-2,1,-5},
{-4,21,-4,3,-5},
{21,2,12,-11,5},
{21,2,14,-13,5},
{21,2,16,-15,5},
{21,2,2,-1,5},
{21,2,4,-3,5},
{21,-2,-12,11,-5},
{21,-2,-14,13,-5},
{21,-2,-16,15,-5},
{21,-2,-2,1,-5},
{21,-2,-4,3,-5},
{21,4,12,-11,5},
{21,4,14,-13,5},
{21,4,16,-15,5},
{21,4,2,-1,5},
{21,4,4,-3,5},
{21,-4,-12,11,-5},
{21,-4,-14,13,-5},
{21,-4,-16,15,-5},
{21,-4,-2,1,-5},
{21,-4,-4,3,-5}};
if  (nsub<0 ||nsub>40||nprtcl<0||nprtcl>5) return NULL;
if(pmass)
{
  n=nvalue[nsub-1][nprtcl-1];
  if (n==0) *pmass=0; else *pmass=va_out[n];
  if (*pmass<0) (*pmass)=-(*pmass);
}
if(num)*num=pcode[nsub-1][nprtcl-1];
return names[nsub-1][nprtcl-1];
}
char * polarized_out[3]={"",",",","};
int pinfAux_out(int nsub,int nprtcl,int*spin2,int*color,int*neutral)
{
int const pcode[40][5]={
{2,21,12,-11,5},
{2,21,14,-13,5},
{2,21,16,-15,5},
{2,21,2,-1,5},
{2,21,4,-3,5},
{-2,21,-12,11,-5},
{-2,21,-14,13,-5},
{-2,21,-16,15,-5},
{-2,21,-2,1,-5},
{-2,21,-4,3,-5},
{4,21,12,-11,5},
{4,21,14,-13,5},
{4,21,16,-15,5},
{4,21,2,-1,5},
{4,21,4,-3,5},
{-4,21,-12,11,-5},
{-4,21,-14,13,-5},
{-4,21,-16,15,-5},
{-4,21,-2,1,-5},
{-4,21,-4,3,-5},
{21,2,12,-11,5},
{21,2,14,-13,5},
{21,2,16,-15,5},
{21,2,2,-1,5},
{21,2,4,-3,5},
{21,-2,-12,11,-5},
{21,-2,-14,13,-5},
{21,-2,-16,15,-5},
{21,-2,-2,1,-5},
{21,-2,-4,3,-5},
{21,4,12,-11,5},
{21,4,14,-13,5},
{21,4,16,-15,5},
{21,4,2,-1,5},
{21,4,4,-3,5},
{21,-4,-12,11,-5},
{21,-4,-14,13,-5},
{21,-4,-16,15,-5},
{21,-4,-2,1,-5},
{21,-4,-4,3,-5}};
int const Spin2[40][5]={
{1,2,1,1,1},
{1,2,1,1,1},
{1,2,1,1,1},
{1,2,1,1,1},
{1,2,1,1,1},
{1,2,1,1,1},
{1,2,1,1,1},
{1,2,1,1,1},
{1,2,1,1,1},
{1,2,1,1,1},
{1,2,1,1,1},
{1,2,1,1,1},
{1,2,1,1,1},
{1,2,1,1,1},
{1,2,1,1,1},
{1,2,1,1,1},
{1,2,1,1,1},
{1,2,1,1,1},
{1,2,1,1,1},
{1,2,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1},
{2,1,1,1,1}};
int const Color[40][5]={
{3,8,1,1,3},
{3,8,1,1,3},
{3,8,1,1,3},
{3,8,3,-3,3},
{3,8,3,-3,3},
{-3,8,1,1,-3},
{-3,8,1,1,-3},
{-3,8,1,1,-3},
{-3,8,-3,3,-3},
{-3,8,-3,3,-3},
{3,8,1,1,3},
{3,8,1,1,3},
{3,8,1,1,3},
{3,8,3,-3,3},
{3,8,3,-3,3},
{-3,8,1,1,-3},
{-3,8,1,1,-3},
{-3,8,1,1,-3},
{-3,8,-3,3,-3},
{-3,8,-3,3,-3},
{8,3,1,1,3},
{8,3,1,1,3},
{8,3,1,1,3},
{8,3,3,-3,3},
{8,3,3,-3,3},
{8,-3,1,1,-3},
{8,-3,1,1,-3},
{8,-3,1,1,-3},
{8,-3,-3,3,-3},
{8,-3,-3,3,-3},
{8,3,1,1,3},
{8,3,1,1,3},
{8,3,1,1,3},
{8,3,3,-3,3},
{8,3,3,-3,3},
{8,-3,1,1,-3},
{8,-3,1,1,-3},
{8,-3,1,1,-3},
{8,-3,-3,3,-3},
{8,-3,-3,3,-3}};
int const Neutral[40][5]={
{0,1,0,0,0},
{0,1,0,0,0},
{0,1,0,0,0},
{0,1,0,0,0},
{0,1,0,0,0},
{0,1,0,0,0},
{0,1,0,0,0},
{0,1,0,0,0},
{0,1,0,0,0},
{0,1,0,0,0},
{0,1,0,0,0},
{0,1,0,0,0},
{0,1,0,0,0},
{0,1,0,0,0},
{0,1,0,0,0},
{0,1,0,0,0},
{0,1,0,0,0},
{0,1,0,0,0},
{0,1,0,0,0},
{0,1,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0}};
if(nsub<0 ||nsub>40||nprtcl<0||nprtcl>5) return 0;
if(spin2) *spin2=Spin2[nsub-1][nprtcl-1];
if(color) *color=Color[nsub-1][nprtcl-1];
if(neutral) *neutral=Neutral[nsub-1][nprtcl-1];
return pcode[nsub-1][nprtcl-1];
}
const int nvar_out = 29;

const int nfunc_out = 0;

char * varName_out[30]={"P(cms)"
,"EE"
,"SW"
,"s12"
,"s23"
,"s13"
,"MZ"
,"wW"
,"Mm"
,"Mt"
,"Mc"
,"Ms"
,"Mtop"
,"wtop"
,"Mb"
,"L"
,"co1"
,"co2"
,"fu"
,"hu"
,"fc"
,"hc"
,"CW"
,"c12"
,"c23"
,"c13"
,"Vud"
,"Vcs"
,"Vtb"
,"MW"};

 char * den_info_out(int nsub,int n, int * mass, int * width)
{
 switch(nsub){
 case 1: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 2: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 3: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 4: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 5: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 6: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 7: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 8: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 9: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 10: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 11: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 12: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 13: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 14: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 15: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 16: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 17: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 18: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 19: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 20: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 21: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 22: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 23: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 24: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 25: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 26: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 27: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 28: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 29: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 30: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 31: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 32: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 33: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 34: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 35: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 36: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 37: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 38: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 39: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 40: switch(n){
    case 1: *mass=29; *width=7; return "\3\4";
    case 2: *mass=12; *width=13; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
   default: *mass=0; *width=0; return NULL;
            }
}
