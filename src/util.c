static inline double Sq(double x)
{
  return x*x;
}

static int Bstolob(double Ps[5],double Pi[5],double *Pf)
{
/*
CDECK  ID>, BSTLOB.
*CMZ :-        -05/11/95  19.33.42  by  Mike Seymour
*-- Author :    Adapted by Bryan Webber
C-----------------------------------------------------------------------
C-----------------------------------------------------------------------
C     TRANSFORMS PI (GIVEN IN REST FRAME OF PS) INTO PF (IN LAB)
C     N.B. P(1,2,3,4,5) = (PX,PY,PZ,E,M)
C-----------------------------------------------------------------------
*/
double PF4,FN;
/*
printf("teste b %f\n",Ps[0]);
printf("teste b %f\n",Ps[1]);
printf("teste b %f\n",Ps[2]);
printf("teste b %f\n",Ps[3]);
printf("teste b %f\n",Ps[4]);
*/
if (Ps[3] == Ps[4])
{
Pf[0]=Pi[0];
Pf[1]=Pi[1];
Pf[2]=Pi[2];
Pf[3]=Pi[3];
}
else
{
PF4 = (Pi[0]*Ps[0]+Pi[1]*Ps[1]+Pi[2]*Ps[2]+Pi[3]*Ps[3])/Ps[4];
FN = (PF4+Pi[3])/(Ps[3]+Ps[4]);
Pf[0]=Pi[0]+FN*Ps[0];
Pf[1]=Pi[1]+FN*Ps[1];
Pf[2]=Pi[2]+FN*Ps[2];
Pf[3]=PF4;
}
Pf[4]=Pi[4];

return 0;
}



static int Phase2(double m0,double m1,double m2,double p0[5],double *p1,double *p2,double x1,double x2,double *wgt)
{
double Pi,E1,q1,phi,sinth,costh,p1cm[5],p2cm[5];


Pi=3.1415926535;

E1=m0/2.0 + (Sq(m1)-Sq(m2))/(2*m0);
q1=sqrt(Sq(E1)-Sq(m1));
*wgt=(q1/m0)*1/(4*pow(2*Pi,3));


phi=2*Pi*x1;
costh=2*x2-1;
sinth=sqrt(1-Sq(costh));
*wgt=*wgt*4*Pi;


p1cm[0]=q1*sinth*cos(phi);
p1cm[1]=q1*sinth*sin(phi);
p1cm[2]=q1*costh;
p1cm[3]=E1;
p1cm[4]=m1;
p2cm[0]=-p1cm[0];
p2cm[1]=-p1cm[1];
p2cm[2]=-p1cm[2];
p2cm[3]=m0-E1;
p2cm[4]=m2;


Bstolob(p0,p1cm,p1);

Bstolob(p0,p2cm,p2);

}

static int assignVal(char * name, double val)
{
  int i;
  for(i=1;i<=nvar_out+nfunc_out;i++)
  {
    if(strcmp(name,varName_out[i])) continue;
    if(i<=nvar_out) {va_out[i]=val; return 0;} else return 1; 
  }
    return 2;
}

