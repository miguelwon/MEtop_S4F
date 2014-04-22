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
 REAL va_out[24]={0};
const int nin_out = 2;

const int nout_out = 4;

const int nprc_out = 8;

char * pinf_out(int nsub,int nprtcl,REAL* pmass,int * num)
{
int n;
 static char *names[8][6] ={
{"u","G","G","n2","E2","b"},
{"U","G","G","N2","e2","B"},
{"c","G","G","n2","E2","b"},
{"C","G","G","N2","e2","B"},
{"G","u","G","n2","E2","b"},
{"G","U","G","N2","e2","B"},
{"G","c","G","n2","E2","b"},
{"G","C","G","N2","e2","B"}};
int const nvalue[8][6]={
{0,0,0,0,7,11},
{0,0,0,0,7,11},
{8,0,0,0,7,11},
{8,0,0,0,7,11},
{0,0,0,0,7,11},
{0,0,0,0,7,11},
{0,8,0,0,7,11},
{0,8,0,0,7,11}};
long const pcode[8][6]={
{2,21,21,14,-13,5},
{-2,21,21,-14,13,-5},
{4,21,21,14,-13,5},
{-4,21,21,-14,13,-5},
{21,2,21,14,-13,5},
{21,-2,21,-14,13,-5},
{21,4,21,14,-13,5},
{21,-4,21,-14,13,-5}};
if  (nsub<0 ||nsub>8||nprtcl<0||nprtcl>6) return NULL;
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
int const pcode[8][6]={
{2,21,21,14,-13,5},
{-2,21,21,-14,13,-5},
{4,21,21,14,-13,5},
{-4,21,21,-14,13,-5},
{21,2,21,14,-13,5},
{21,-2,21,-14,13,-5},
{21,4,21,14,-13,5},
{21,-4,21,-14,13,-5}};
int const Spin2[8][6]={
{1,2,2,1,1,1},
{1,2,2,1,1,1},
{1,2,2,1,1,1},
{1,2,2,1,1,1},
{2,1,2,1,1,1},
{2,1,2,1,1,1},
{2,1,2,1,1,1},
{2,1,2,1,1,1}};
int const Color[8][6]={
{3,8,8,1,1,3},
{-3,8,8,1,1,-3},
{3,8,8,1,1,3},
{-3,8,8,1,1,-3},
{8,3,8,1,1,3},
{8,-3,8,1,1,-3},
{8,3,8,1,1,3},
{8,-3,8,1,1,-3}};
int const Neutral[8][6]={
{0,1,1,0,0,0},
{0,1,1,0,0,0},
{0,1,1,0,0,0},
{0,1,1,0,0,0},
{1,0,1,0,0,0},
{1,0,1,0,0,0},
{1,0,1,0,0,0},
{1,0,1,0,0,0}};
if(nsub<0 ||nsub>8||nprtcl<0||nprtcl>6) return 0;
if(spin2) *spin2=Spin2[nsub-1][nprtcl-1];
if(color) *color=Color[nsub-1][nprtcl-1];
if(neutral) *neutral=Neutral[nsub-1][nprtcl-1];
return pcode[nsub-1][nprtcl-1];
}
const int nvar_out = 23;

const int nfunc_out = 0;

char * varName_out[24]={"P(cms)"
,"EE"
,"SW"
,"s23"
,"s13"
,"MZ"
,"wW"
,"Mm"
,"Mc"
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
,"c23"
,"c13"
,"Vtb"
,"MW"};

 char * den_info_out(int nsub,int n, int * mass, int * width)
{
 switch(nsub){
 case 1: switch(n){
    case 1: *mass=0; *width=0; return "\2\3";
    case 2: *mass=9; *width=0; return "\1\3";
    case 3: *mass=9; *width=10; return "\1\2";
    case 4: *mass=0; *width=0; return "\1\3";
    case 5: *mass=23; *width=6; return "\4\5";
    case 6: *mass=9; *width=10; return "\1\2\3";
    case 7: *mass=0; *width=0; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 2: switch(n){
    case 1: *mass=0; *width=0; return "\2\3";
    case 2: *mass=9; *width=0; return "\1\3";
    case 3: *mass=9; *width=10; return "\1\2";
    case 4: *mass=0; *width=0; return "\1\3";
    case 5: *mass=23; *width=6; return "\4\5";
    case 6: *mass=9; *width=10; return "\1\2\3";
    case 7: *mass=0; *width=0; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 3: switch(n){
    case 1: *mass=0; *width=0; return "\2\3";
    case 2: *mass=9; *width=0; return "\1\3";
    case 3: *mass=9; *width=10; return "\1\2";
    case 4: *mass=8; *width=0; return "\1\3";
    case 5: *mass=23; *width=6; return "\4\5";
    case 6: *mass=9; *width=10; return "\1\2\3";
    case 7: *mass=8; *width=0; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 4: switch(n){
    case 1: *mass=0; *width=0; return "\2\3";
    case 2: *mass=9; *width=0; return "\1\3";
    case 3: *mass=9; *width=10; return "\1\2";
    case 4: *mass=8; *width=0; return "\1\3";
    case 5: *mass=23; *width=6; return "\4\5";
    case 6: *mass=9; *width=10; return "\1\2\3";
    case 7: *mass=8; *width=0; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 5: switch(n){
    case 1: *mass=9; *width=0; return "\2\3";
    case 2: *mass=0; *width=0; return "\2\3";
    case 3: *mass=9; *width=10; return "\1\2";
    case 4: *mass=0; *width=0; return "\1\2";
    case 5: *mass=23; *width=6; return "\4\5";
    case 6: *mass=9; *width=10; return "\1\2\3";
    case 7: *mass=0; *width=0; return "\1\3";
    default:*mass=0; *width=0; return NULL;
                  }
 case 6: switch(n){
    case 1: *mass=0; *width=0; return "\2\3";
    case 2: *mass=9; *width=10; return "\1\2";
    case 3: *mass=9; *width=0; return "\2\3";
    case 4: *mass=0; *width=0; return "\1\2";
    case 5: *mass=23; *width=6; return "\4\5";
    case 6: *mass=9; *width=10; return "\1\2\3";
    case 7: *mass=0; *width=0; return "\1\3";
    default:*mass=0; *width=0; return NULL;
                  }
 case 7: switch(n){
    case 1: *mass=9; *width=0; return "\2\3";
    case 2: *mass=8; *width=0; return "\2\3";
    case 3: *mass=9; *width=10; return "\1\2";
    case 4: *mass=8; *width=0; return "\1\2";
    case 5: *mass=23; *width=6; return "\4\5";
    case 6: *mass=9; *width=10; return "\1\2\3";
    case 7: *mass=0; *width=0; return "\1\3";
    default:*mass=0; *width=0; return NULL;
                  }
 case 8: switch(n){
    case 1: *mass=8; *width=0; return "\2\3";
    case 2: *mass=9; *width=10; return "\1\2";
    case 3: *mass=9; *width=0; return "\2\3";
    case 4: *mass=8; *width=0; return "\1\2";
    case 5: *mass=23; *width=6; return "\4\5";
    case 6: *mass=9; *width=10; return "\1\2\3";
    case 7: *mass=0; *width=0; return "\1\3";
    default:*mass=0; *width=0; return NULL;
                  }
   default: *mass=0; *width=0; return NULL;
            }
}

