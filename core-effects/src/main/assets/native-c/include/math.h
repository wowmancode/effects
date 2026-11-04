#ifndef LEC_MATH_H
#define LEC_MATH_H
#define M_PI 3.14159265358979323846
#define M_E 2.71828182845904523536
double sin(double); double cos(double); double tan(double);
double asin(double); double acos(double); double atan(double); double atan2(double,double);
double sinh(double); double cosh(double); double tanh(double);
double sqrt(double); double cbrt(double); double pow(double,double);
double exp(double); double exp2(double); double log(double); double log2(double); double log10(double);
double floor(double); double ceil(double); double round(double); double trunc(double);
double fabs(double); double fmod(double,double); double fmin(double,double); double fmax(double,double);
double copysign(double,double); double ldexp(double,int); double frexp(double,int *);
double modf(double,double *); double hypot(double,double);
float sinf(float); float cosf(float); float tanf(float); float atan2f(float,float);
float sqrtf(float); float powf(float,float); float expf(float); float logf(float);
float floorf(float); float ceilf(float); float roundf(float); float truncf(float);
float fabsf(float); float fmodf(float,float); float fminf(float,float); float fmaxf(float,float);
#define isnan(x) ((x)!=(x))
#define isfinite(x) (!isnan(x) && ((x)-(x))==0)
#endif
