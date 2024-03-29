#ifdef __CYGWIN__

#define REAL double
#define COMPLEX double complex

#else 

#ifdef _LONG_  

#define REAL  long double
#define COMPLEX long double complex

#define sqrt   sqrtl
#define sin    sinl
#define cos    cosl
#define tan    tanl
#define asin   asinl
#define acos   acosl
#define atan   atanl
#define exp    expl
#define log    logl
#define pow    powl
#define fabs   fabsl
#define atan2  atan2l
#define log10  log10l
#define sinh   sinhl
#define cosh   coshl
#define tanh   tanhl
#define asinh  asinhl
#define acosh  acoshl
#define atanh  atanhl

#define creal  creall
#define cimag  cimagl
#define carg   cargl
#define cabs   cabsl
#define conj   conjl
#define cacos  cacosl
#define casin  casinl
#define catan  catanl
#define ccos   ccosl
#define csin   csinl
#define ctan   ctanl
#define cacosh cacoshl
#define casinh casinhl
#define catanh catanhl
#define ccosh  ccoshl
#define csinh  csinhl
#define ctanh  ctanhl
#define cexp   cexpl
#define clog   clogl
#define clog10 clog10l
#define cpow   cpowl
#define csqrt  csqrtl
#define cproj  cprojl


#else 

#ifdef _QUAD16_
#define REAL _Quad

#define sin    __sinq  
#define cos    __cosq  
#define tan    __tanq  
#define asin   __asinq 
#define acos   __acosq 
#define atan   __atanq 
#define atan2  __atan2q
#define exp    __expq 
#define log    __logq 
#define paw    __pawq 
#define sqrt   __sqrtq
#define fabs   __fabsq

extern _Quad   __sinq(_Quad); 
extern _Quad   __cosq(_Quad); 
extern _Quad   __tanq(_Quad); 
extern _Quad   __asinq(_Quad);
extern _Quad   __acosq(_Quad);
extern _Quad   __atanq(_Quad);
extern _Quad   __atan2q(_Quad,_Quad);
extern _Quad   __expq(_Quad); 
extern _Quad   __logq(_Quad); 
extern _Quad   __pawq(_Quad); 
extern _Quad   __sqrtq(_Quad);
extern _Quad   __fabsq(_Quad);

#else 

#define REAL double
#define COMPLEX double complex

#endif
#endif
#endif
