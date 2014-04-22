#ifndef __NUM_OUT_out
#define __NUM_OUT_out

#include<stdlib.h>
#include<string.h> 
#include<math.h>

#include"nType.h"

extern int FError;
extern const int nin_out;
extern const int nout_out;
extern const int nprc_out;
extern const int nvar_out;
extern const int nfunc_out;

extern char * pinf_out(int nsub,int nprtcl,REAL* pmass,int*num);
extern int   pinfAux_out(int nsub, int nprtcl,int *spin2, int* color,int*neutral);
extern char * varName_out[];

extern double sqme_out(int nsub,double GG, REAL * momenta, int * err);
extern int calcFunc_out(void);
extern double BWrange_out;
extern int twidth_out, gtwidth_out, gswidth_out;
extern double (*aWidth_out)(char *);
extern REAL va_out[];

extern  char * den_info_out(int nsub, int n, int * mass, int * width);
extern void build_cb_out(int nsub); 
extern void destroy_cb_out(void);    
extern int cb_pow_out;   
extern int cb_nc_out; 
extern int * cb_chains_out;
extern REAL * cb_coeff_out;
extern double (*aWidth_out)(char *);
#endif

