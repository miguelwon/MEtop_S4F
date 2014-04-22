#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../src/num_in.h"
#include "../src/num_out.h"
#include "../src/util.c"
#include "dataGtop.c"
#include "../src/cubaGtop.c"
/*********************************************************************/


#define NDIM 7
#define NCOMP 1
#define EPSREL 1e-3
#define EPSABS 1e-12
#define LAST 1
#define SEED 10
#define MINEVAL 0
#define MAXEVAL 150000
#define VERBOSE 0

#define NSTART 10000
#define NINCREASE 1000
#define NBATCH 1000
#define GRIDNO -1
#define STATEFILE NULL

int main()
{


int verbose, comp, nregions, neval, fail;
double integral[NCOMP], error[NCOMP], prob[NCOMP];
double userdata[17];
double ECM,m1,m2,m3,m4,m5,m6,PTmin;
int Flav1,Flav2,Flav3,Flav4,Flav5,Flav6,Npr,NprSub,qid,SubPorder;
double CSTotal,ErroTotal;
FILE *fp;

dados();
assignVal("EE",data.EE);
assignVal("SW",data.SW);
assignVal("s23",data.s23);
assignVal("s13",data.s13);
assignVal("MZ",data.MZ);
assignVal("wW",data.wW);
assignVal("Mm",data.Mm);
assignVal("Mc",data.Mc);
assignVal("Mtop",data.Mtop);
assignVal("wtop",data.wtop);
assignVal("Mb",data.Mb);
assignVal("fu",data.fu);
assignVal("hu",data.hu);
assignVal("fc",data.fc);
assignVal("hc",data.hc);
assignVal("L",data.L);
assignVal("co1",data.co1);
assignVal("co2",data.co2);
assignVal("CW",data.CW);
assignVal("c23",data.c23);
assignVal("c13",data.c13);
assignVal("Vtb",data.Vtb);
assignVal("MW",data.MW);


ECM=data.ECM;
PTmin=data.PTmin;

