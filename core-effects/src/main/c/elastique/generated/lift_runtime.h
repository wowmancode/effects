#ifndef STATIC_DSP_RUNTIME_H
#define STATIC_DSP_RUNTIME_H
#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <math.h>
#include <limits.h>
/* Register and memory accesses have constant sizes at every call site; forcing
   them inline turns each into a plain load or store. */
#if defined(__GNUC__) || defined(__clang__)
#define LIFT_INLINE __attribute__((always_inline))
#else
#define LIFT_INLINE
#endif
typedef __uint128_t U;
typedef __int128_t S;
typedef struct CPU { unsigned char r[65536],u[65536]; unsigned char *stack; } CPU;
static inline LIFT_INLINE U rd(const unsigned char *p,size_t off,unsigned n){U v=0;memcpy(&v,p+off,n);return v;}
static inline LIFT_INLINE void wr(unsigned char *p,size_t off,unsigned n,U value){memcpy(p+off,&value,n);}
static inline LIFT_INLINE U mr(uint64_t p,unsigned n){return rd((const unsigned char*)(uintptr_t)p,0,n);}
static inline LIFT_INLINE void mw(uint64_t p,unsigned n,U value){wr((unsigned char*)(uintptr_t)p,0,n,value);}
static inline S sx(U value,unsigned n){return (S)(value<<(128-n*8))>>(128-n*8);}
static inline U signed_overflow(U x,U y,unsigned n,int subtract){
    U z=subtract?x-y:x+y;
    U signs=subtract?(x^y):~(x^y);
    return ((signs&(x^z))>>(n*8-1))&1;
}
static inline U packssdw(U x,U y){
    U result=0;
    for(unsigned i=0;i<8;i++){
        int32_t v=(int32_t)((i<4?x:y)>>((i%4)*32));
        if(v>32767)v=32767;
        if(v< -32768)v= -32768;
        result|=(U)(uint16_t)v<<(i*16);
    }
    return result;
}
static inline double fv(U value,unsigned n){
    if(n==4){uint32_t b=(uint32_t)value;float f;memcpy(&f,&b,4);return f;}
    uint64_t b=(uint64_t)value;double f;memcpy(&f,&b,8);return f;
}
static inline U fb(double value,unsigned n){
    if(n==4){float f=(float)value;uint32_t b;memcpy(&b,&f,4);return b;}
    uint64_t b;memcpy(&b,&value,8);return b;
}
static inline U ftrunc(double value,unsigned n){
    double limit=ldexp(1.,(int)n*8-1);
    if(isnan(value)||value>=limit||value< -limit)return (U)1<<(n*8-1);
    return (U)(S)trunc(value);
}
static inline U pop(U value,unsigned n){(void)n;return (unsigned)__builtin_popcountll((uint64_t)value)+(unsigned)__builtin_popcountll((uint64_t)(value>>64));}
static inline U lz(U value,unsigned n){
    if(!value)return n*8;
    if(n<=8)return (unsigned)__builtin_clzll((uint64_t)value)-(64-n*8);
    return (value>>64)?(unsigned)__builtin_clzll((uint64_t)(value>>64)):64+(unsigned)__builtin_clzll((uint64_t)value);
}
struct lift_block {uint64_t address;uint64_t(*function)(CPU*);};
extern const struct lift_block blocks[];
extern const size_t block_count;
_Noreturn void lift_unsupported(const char*,uint64_t);
uint64_t lift_cpuid(unsigned);
uint64_t lift_run(CPU*,uint64_t);
#endif
