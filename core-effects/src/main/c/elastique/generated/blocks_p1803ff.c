#include "lift_runtime.h"
uint64_t b_1803ff02d(CPU*s){
/* 1803ff02d: addss xmm7, xmm6 */
L_1803ff02d_0:;
L_1803ff02d_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803ff02d_2:;
/* 1803ff031: subss xmm8, xmm6 */
L_1803ff031_0:;
L_1803ff031_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803ff031_2:;
/* 1803ff036: movss xmm6, dword ptr [rbp + 4] */
L_1803ff036_0:;
L_1803ff036_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ff036_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff036_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803ff036_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ff036_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ff036_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ff036_7:;
/* 1803ff03b: movaps xmm5, xmm6 */
L_1803ff03b_0:;
L_1803ff03b_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803ff03b_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803ff03b_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803ff03b_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803ff03b_5:;
/* 1803ff03e: subss xmm6, xmm1 */
L_1803ff03e_0:;
L_1803ff03e_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff03e_2:;
/* 1803ff042: cmp r10d, 0x7f */
L_1803ff042_0:;
L_1803ff042_1:;
wr(s->u,26,4,rd(s->r,144,4));
L_1803ff042_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0x7f))));
L_1803ff042_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0x7f)),4,1));
L_1803ff042_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0x7f))));
L_1803ff042_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff042_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803ff042_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803ff042_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ff042_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ff042_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ff042_11:;
/* 1803ff046: addss xmm5, xmm1 */
L_1803ff046_0:;
L_1803ff046_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff046_2:;
/* 1803ff04a: movaps xmm1, xmm7 */
L_1803ff04a_0:;
L_1803ff04a_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803ff04a_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803ff04a_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803ff04a_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803ff04a_5:;
/* 1803ff04d: subss xmm7, xmm3 */
L_1803ff04d_0:;
L_1803ff04d_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ff04d_2:;
/* 1803ff051: movss dword ptr [rbp + 0x800], xmm7 */
L_1803ff051_0:;
L_1803ff051_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_1803ff051_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803ff051_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff051_4:;
/* 1803ff059: addss xmm1, xmm3 */
L_1803ff059_0:;
L_1803ff059_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff059_2:;
/* 1803ff05d: movss dword ptr [rbp], xmm1 */
L_1803ff05d_0:;
L_1803ff05d_1:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ff05d_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803ff05d_3:;
/* 1803ff062: movaps xmm1, xmm5 */
L_1803ff062_0:;
L_1803ff062_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803ff062_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803ff062_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803ff062_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803ff062_5:;
/* 1803ff065: subss xmm5, xmm0 */
L_1803ff065_0:;
L_1803ff065_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff065_2:;
/* 1803ff069: movss dword ptr [rbp + 0x804], xmm5 */
L_1803ff069_0:;
L_1803ff069_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_1803ff069_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803ff069_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff069_4:;
/* 1803ff071: addss xmm1, xmm0 */
L_1803ff071_0:;
L_1803ff071_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff071_2:;
/* 1803ff075: movss dword ptr [rbp + 4], xmm1 */
L_1803ff075_0:;
L_1803ff075_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ff075_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ff075_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ff075_4:;
/* 1803ff07a: movaps xmm0, xmm8 */
L_1803ff07a_0:;
L_1803ff07a_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ff07a_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ff07a_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ff07a_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ff07a_5:;
/* 1803ff07e: subss xmm8, xmm2 */
L_1803ff07e_0:;
L_1803ff07e_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff07e_2:;
/* 1803ff083: movss dword ptr [rbp + 0xc00], xmm8 */
L_1803ff083_0:;
L_1803ff083_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc00))));
L_1803ff083_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ff083_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff083_4:;
/* 1803ff08c: addss xmm0, xmm2 */
L_1803ff08c_0:;
L_1803ff08c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff08c_2:;
/* 1803ff090: movss dword ptr [rbp + 0x400], xmm0 */
L_1803ff090_0:;
L_1803ff090_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803ff090_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ff090_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff090_4:;
/* 1803ff098: movaps xmm0, xmm6 */
L_1803ff098_0:;
L_1803ff098_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803ff098_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803ff098_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803ff098_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803ff098_5:;
/* 1803ff09b: addss xmm6, xmm4 */
L_1803ff09b_0:;
L_1803ff09b_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ff09b_2:;
/* 1803ff09f: movss dword ptr [rbp + 0xc04], xmm6 */
L_1803ff09f_0:;
L_1803ff09f_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc04))));
L_1803ff09f_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803ff09f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff09f_4:;
/* 1803ff0a7: subss xmm0, xmm4 */
L_1803ff0a7_0:;
L_1803ff0a7_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ff0a7_2:;
/* 1803ff0ab: movss dword ptr [rbp + 0x404], xmm0 */
L_1803ff0ab_0:;
L_1803ff0ab_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803ff0ab_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ff0ab_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff0ab_4:;
/* 1803ff0b3: jb 0x1803fef48 */
L_1803ff0b3_0:;
L_1803ff0b3_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fef48);}
L_1803ff0b3_2:;
return UINT64_C(0x1803ff0b9);
}
uint64_t b_1803ff042(CPU*s){
/* 1803ff042: cmp r10d, 0x7f */
L_1803ff042_0:;
L_1803ff042_1:;
wr(s->u,26,4,rd(s->r,144,4));
L_1803ff042_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0x7f))));
L_1803ff042_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0x7f)),4,1));
L_1803ff042_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0x7f))));
L_1803ff042_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff042_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803ff042_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803ff042_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ff042_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ff042_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ff042_11:;
/* 1803ff046: addss xmm5, xmm1 */
L_1803ff046_0:;
L_1803ff046_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff046_2:;
/* 1803ff04a: movaps xmm1, xmm7 */
L_1803ff04a_0:;
L_1803ff04a_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803ff04a_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803ff04a_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803ff04a_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803ff04a_5:;
/* 1803ff04d: subss xmm7, xmm3 */
L_1803ff04d_0:;
L_1803ff04d_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ff04d_2:;
/* 1803ff051: movss dword ptr [rbp + 0x800], xmm7 */
L_1803ff051_0:;
L_1803ff051_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_1803ff051_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803ff051_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff051_4:;
/* 1803ff059: addss xmm1, xmm3 */
L_1803ff059_0:;
L_1803ff059_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff059_2:;
/* 1803ff05d: movss dword ptr [rbp], xmm1 */
L_1803ff05d_0:;
L_1803ff05d_1:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ff05d_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803ff05d_3:;
/* 1803ff062: movaps xmm1, xmm5 */
L_1803ff062_0:;
L_1803ff062_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803ff062_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803ff062_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803ff062_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803ff062_5:;
/* 1803ff065: subss xmm5, xmm0 */
L_1803ff065_0:;
L_1803ff065_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff065_2:;
/* 1803ff069: movss dword ptr [rbp + 0x804], xmm5 */
L_1803ff069_0:;
L_1803ff069_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_1803ff069_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803ff069_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff069_4:;
/* 1803ff071: addss xmm1, xmm0 */
L_1803ff071_0:;
L_1803ff071_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff071_2:;
/* 1803ff075: movss dword ptr [rbp + 4], xmm1 */
L_1803ff075_0:;
L_1803ff075_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ff075_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ff075_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ff075_4:;
/* 1803ff07a: movaps xmm0, xmm8 */
L_1803ff07a_0:;
L_1803ff07a_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ff07a_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ff07a_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ff07a_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ff07a_5:;
/* 1803ff07e: subss xmm8, xmm2 */
L_1803ff07e_0:;
L_1803ff07e_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff07e_2:;
/* 1803ff083: movss dword ptr [rbp + 0xc00], xmm8 */
L_1803ff083_0:;
L_1803ff083_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc00))));
L_1803ff083_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ff083_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff083_4:;
/* 1803ff08c: addss xmm0, xmm2 */
L_1803ff08c_0:;
L_1803ff08c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff08c_2:;
/* 1803ff090: movss dword ptr [rbp + 0x400], xmm0 */
L_1803ff090_0:;
L_1803ff090_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803ff090_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ff090_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff090_4:;
/* 1803ff098: movaps xmm0, xmm6 */
L_1803ff098_0:;
L_1803ff098_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803ff098_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803ff098_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803ff098_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803ff098_5:;
/* 1803ff09b: addss xmm6, xmm4 */
L_1803ff09b_0:;
L_1803ff09b_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ff09b_2:;
/* 1803ff09f: movss dword ptr [rbp + 0xc04], xmm6 */
L_1803ff09f_0:;
L_1803ff09f_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc04))));
L_1803ff09f_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803ff09f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff09f_4:;
/* 1803ff0a7: subss xmm0, xmm4 */
L_1803ff0a7_0:;
L_1803ff0a7_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ff0a7_2:;
/* 1803ff0ab: movss dword ptr [rbp + 0x404], xmm0 */
L_1803ff0ab_0:;
L_1803ff0ab_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803ff0ab_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ff0ab_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff0ab_4:;
/* 1803ff0b3: jb 0x1803fef48 */
L_1803ff0b3_0:;
L_1803ff0b3_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fef48);}
L_1803ff0b3_2:;
return UINT64_C(0x1803ff0b9);
}
uint64_t b_1803ff075(CPU*s){
/* 1803ff075: movss dword ptr [rbp + 4], xmm1 */
L_1803ff075_0:;
L_1803ff075_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ff075_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ff075_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ff075_4:;
/* 1803ff07a: movaps xmm0, xmm8 */
L_1803ff07a_0:;
L_1803ff07a_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ff07a_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ff07a_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ff07a_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ff07a_5:;
/* 1803ff07e: subss xmm8, xmm2 */
L_1803ff07e_0:;
L_1803ff07e_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff07e_2:;
/* 1803ff083: movss dword ptr [rbp + 0xc00], xmm8 */
L_1803ff083_0:;
L_1803ff083_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc00))));
L_1803ff083_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ff083_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff083_4:;
/* 1803ff08c: addss xmm0, xmm2 */
L_1803ff08c_0:;
L_1803ff08c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff08c_2:;
/* 1803ff090: movss dword ptr [rbp + 0x400], xmm0 */
L_1803ff090_0:;
L_1803ff090_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803ff090_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ff090_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff090_4:;
/* 1803ff098: movaps xmm0, xmm6 */
L_1803ff098_0:;
L_1803ff098_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803ff098_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803ff098_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803ff098_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803ff098_5:;
/* 1803ff09b: addss xmm6, xmm4 */
L_1803ff09b_0:;
L_1803ff09b_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ff09b_2:;
/* 1803ff09f: movss dword ptr [rbp + 0xc04], xmm6 */
L_1803ff09f_0:;
L_1803ff09f_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc04))));
L_1803ff09f_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803ff09f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff09f_4:;
/* 1803ff0a7: subss xmm0, xmm4 */
L_1803ff0a7_0:;
L_1803ff0a7_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ff0a7_2:;
/* 1803ff0ab: movss dword ptr [rbp + 0x404], xmm0 */
L_1803ff0ab_0:;
L_1803ff0ab_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803ff0ab_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ff0ab_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff0ab_4:;
/* 1803ff0b3: jb 0x1803fef48 */
L_1803ff0b3_0:;
L_1803ff0b3_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fef48);}
L_1803ff0b3_2:;
return UINT64_C(0x1803ff0b9);
}
uint64_t b_1803ff0b9(CPU*s){
/* 1803ff0b9: add rbp, 0xc08 */
L_1803ff0b9_0:;
L_1803ff0b9_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0xc08)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803ff0b9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0xc08)),8,0));
L_1803ff0b9_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0xc08))));
L_1803ff0b9_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ff0b9_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803ff0b9_6:;
wr(s->u,0,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803ff0b9_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ff0b9_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ff0b9_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ff0b9_10:;
/* 1803ff0c0: add eax, 1 */
L_1803ff0c0_0:;
L_1803ff0c0_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ff0c0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,0));
L_1803ff0c0_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x1))));
L_1803ff0c0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ff0c0_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff0c0_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ff0c0_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ff0c0_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803ff0c0_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ff0c0_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ff0c0_11:;
/* 1803ff0c3: cmp eax, r11d */
L_1803ff0c3_0:;
L_1803ff0c3_1:;
wr(s->u,10,4,rd(s->r,152,4));
L_1803ff0c3_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,10,4)));
L_1803ff0c3_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,10,4),4,1));
L_1803ff0c3_4:;
wr(s->u,14,4,(rd(s->r,0,4)-rd(s->u,10,4)));
L_1803ff0c3_5:;
wr(s->r,519,1,(sx(rd(s->u,14,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff0c3_6:;
wr(s->r,518,1,(rd(s->u,14,4)==((U)UINT64_C(0x0))));
L_1803ff0c3_7:;
wr(s->u,0,4,(rd(s->u,14,4)&((U)UINT64_C(0xff))));
L_1803ff0c3_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803ff0c3_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ff0c3_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ff0c3_11:;
/* 1803ff0c6: jb 0x1803fee60 */
L_1803ff0c6_0:;
L_1803ff0c6_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fee60);}
L_1803ff0c6_2:;
return UINT64_C(0x1803ff0cc);
}
uint64_t b_1803ff0cc(CPU*s){
/* 1803ff0cc: movaps xmm6, xmmword ptr [rsp + 0x60] */
L_1803ff0cc_0:;
L_1803ff0cc_1:;
wr(s->u,5,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803ff0cc_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803ff0cc_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803ff0cc_4:;
wr(s->r,4992,4,rd(s->u,89,4));
L_1803ff0cc_5:;
wr(s->r,4996,4,rd(s->u,93,4));
L_1803ff0cc_6:;
wr(s->r,5000,4,rd(s->u,97,4));
L_1803ff0cc_7:;
wr(s->r,5004,4,rd(s->u,101,4));
L_1803ff0cc_8:;
/* 1803ff0d1: movaps xmm7, xmmword ptr [rsp + 0x50] */
L_1803ff0d1_0:;
L_1803ff0d1_1:;
wr(s->u,5,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ff0d1_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803ff0d1_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803ff0d1_4:;
wr(s->r,5056,4,rd(s->u,89,4));
L_1803ff0d1_5:;
wr(s->r,5060,4,rd(s->u,93,4));
L_1803ff0d1_6:;
wr(s->r,5064,4,rd(s->u,97,4));
L_1803ff0d1_7:;
wr(s->r,5068,4,rd(s->u,101,4));
L_1803ff0d1_8:;
/* 1803ff0d6: movaps xmm8, xmmword ptr [rsp + 0x40] */
L_1803ff0d6_0:;
L_1803ff0d6_1:;
wr(s->u,5,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ff0d6_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803ff0d6_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803ff0d6_4:;
wr(s->r,5120,4,rd(s->u,89,4));
L_1803ff0d6_5:;
wr(s->r,5124,4,rd(s->u,93,4));
L_1803ff0d6_6:;
wr(s->r,5128,4,rd(s->u,97,4));
L_1803ff0d6_7:;
wr(s->r,5132,4,rd(s->u,101,4));
L_1803ff0d6_8:;
/* 1803ff0dc: movaps xmm9, xmmword ptr [rsp + 0x30] */
L_1803ff0dc_0:;
L_1803ff0dc_1:;
wr(s->u,5,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ff0dc_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803ff0dc_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803ff0dc_4:;
wr(s->r,5184,4,rd(s->u,89,4));
L_1803ff0dc_5:;
wr(s->r,5188,4,rd(s->u,93,4));
L_1803ff0dc_6:;
wr(s->r,5192,4,rd(s->u,97,4));
L_1803ff0dc_7:;
wr(s->r,5196,4,rd(s->u,101,4));
L_1803ff0dc_8:;
/* 1803ff0e2: mov r14, qword ptr [rsp + 0x20] */
L_1803ff0e2_0:;
L_1803ff0e2_1:;
wr(s->u,5,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ff0e2_2:;
wr(s->u,29,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803ff0e2_3:;
wr(s->r,176,8,rd(s->u,29,8));
L_1803ff0e2_4:;
/* 1803ff0e7: sar edx, 0xb */
L_1803ff0e7_0:;
L_1803ff0e7_1:;
wr(s->u,77,4,(((U)UINT64_C(0xb))&((U)UINT64_C(0x1f))));
L_1803ff0e7_2:;
wr(s->u,81,4,rd(s->r,16,4));
L_1803ff0e7_3:;
wr(s->r,16,4,((rd(s->u,77,4)>=32)?(sx(rd(s->r,16,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,16,4),4)>>rd(s->u,77,4))));
L_1803ff0e7_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ff0e7_5:;
wr(s->u,62,1,(rd(s->u,77,4)==((U)UINT64_C(0x0))));
L_1803ff0e7_6:;
wr(s->u,63,4,(rd(s->u,77,4)-((U)UINT64_C(0x1))));
L_1803ff0e7_7:;
wr(s->u,67,4,((rd(s->u,63,4)>=32)?(sx(rd(s->u,81,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,81,4),4)>>rd(s->u,63,4))));
L_1803ff0e7_8:;
wr(s->u,71,4,(rd(s->u,67,4)&((U)UINT64_C(0x1))));
L_1803ff0e7_9:;
wr(s->u,75,1,(rd(s->u,71,4)!=((U)UINT64_C(0x0))));
L_1803ff0e7_10:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803ff0e7_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ff0e7_12:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803ff0e7_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ff0e7_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,75,1)));
L_1803ff0e7_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ff0e7_16:;
wr(s->u,76,1,(rd(s->u,77,4)==((U)UINT64_C(0x1))));
L_1803ff0e7_17:;
wr(s->u,0,1,rd(s->u,76,1));
L_1803ff0e7_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ff0e7_19:;
wr(s->u,2,1,(!rd(s->u,76,1)));
L_1803ff0e7_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ff0e7_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ff0e7_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ff0e7_23:;
wr(s->u,43,1,(rd(s->u,77,4)!=((U)UINT64_C(0x0))));
L_1803ff0e7_24:;
wr(s->u,44,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff0e7_25:;
wr(s->u,45,1,(!rd(s->u,43,1)));
L_1803ff0e7_26:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,519,1)));
L_1803ff0e7_27:;
wr(s->u,47,1,(rd(s->u,43,1)&rd(s->u,44,1)));
L_1803ff0e7_28:;
wr(s->r,519,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803ff0e7_29:;
wr(s->u,48,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ff0e7_30:;
wr(s->u,49,1,(!rd(s->u,43,1)));
L_1803ff0e7_31:;
wr(s->u,50,1,(rd(s->u,49,1)&rd(s->r,518,1)));
L_1803ff0e7_32:;
wr(s->u,51,1,(rd(s->u,43,1)&rd(s->u,48,1)));
L_1803ff0e7_33:;
wr(s->r,518,1,(rd(s->u,50,1)|rd(s->u,51,1)));
L_1803ff0e7_34:;
wr(s->u,52,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ff0e7_35:;
wr(s->u,56,1,pop(rd(s->u,52,4),4));
L_1803ff0e7_36:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803ff0e7_37:;
wr(s->u,58,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803ff0e7_38:;
wr(s->u,59,1,(!rd(s->u,43,1)));
L_1803ff0e7_39:;
wr(s->u,60,1,(rd(s->u,59,1)&rd(s->r,514,1)));
L_1803ff0e7_40:;
wr(s->u,61,1,(rd(s->u,43,1)&rd(s->u,58,1)));
L_1803ff0e7_41:;
wr(s->r,514,1,(rd(s->u,60,1)|rd(s->u,61,1)));
L_1803ff0e7_42:;
/* 1803ff0ea: test edx, edx */
L_1803ff0ea_0:;
L_1803ff0ea_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ff0ea_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ff0ea_3:;
wr(s->u,85,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803ff0ea_4:;
wr(s->r,519,1,(sx(rd(s->u,85,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff0ea_5:;
wr(s->r,518,1,(rd(s->u,85,4)==((U)UINT64_C(0x0))));
L_1803ff0ea_6:;
wr(s->u,37,4,(rd(s->u,85,4)&((U)UINT64_C(0xff))));
L_1803ff0ea_7:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803ff0ea_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803ff0ea_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803ff0ea_10:;
/* 1803ff0ec: je 0x180400312 */
L_1803ff0ec_0:;
L_1803ff0ec_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180400312);}
L_1803ff0ec_2:;
return UINT64_C(0x1803ff0f2);
}
uint64_t b_1803ff0e7(CPU*s){
/* 1803ff0e7: sar edx, 0xb */
L_1803ff0e7_0:;
L_1803ff0e7_1:;
wr(s->u,45,4,(((U)UINT64_C(0xb))&((U)UINT64_C(0x1f))));
L_1803ff0e7_2:;
wr(s->u,49,4,rd(s->r,16,4));
L_1803ff0e7_3:;
wr(s->r,16,4,((rd(s->u,45,4)>=32)?(sx(rd(s->r,16,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,16,4),4)>>rd(s->u,45,4))));
L_1803ff0e7_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ff0e7_5:;
wr(s->u,30,1,(rd(s->u,45,4)==((U)UINT64_C(0x0))));
L_1803ff0e7_6:;
wr(s->u,31,4,(rd(s->u,45,4)-((U)UINT64_C(0x1))));
L_1803ff0e7_7:;
wr(s->u,35,4,((rd(s->u,31,4)>=32)?(sx(rd(s->u,49,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,49,4),4)>>rd(s->u,31,4))));
L_1803ff0e7_8:;
wr(s->u,39,4,(rd(s->u,35,4)&((U)UINT64_C(0x1))));
L_1803ff0e7_9:;
wr(s->u,43,1,(rd(s->u,39,4)!=((U)UINT64_C(0x0))));
L_1803ff0e7_10:;
wr(s->u,0,1,rd(s->u,30,1));
L_1803ff0e7_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ff0e7_12:;
wr(s->u,2,1,(!rd(s->u,30,1)));
L_1803ff0e7_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ff0e7_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,43,1)));
L_1803ff0e7_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ff0e7_16:;
wr(s->u,44,1,(rd(s->u,45,4)==((U)UINT64_C(0x1))));
L_1803ff0e7_17:;
wr(s->u,0,1,rd(s->u,44,1));
L_1803ff0e7_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ff0e7_19:;
wr(s->u,2,1,(!rd(s->u,44,1)));
L_1803ff0e7_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ff0e7_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ff0e7_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ff0e7_23:;
wr(s->u,11,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803ff0e7_24:;
wr(s->u,12,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff0e7_25:;
wr(s->u,13,1,(!rd(s->u,11,1)));
L_1803ff0e7_26:;
wr(s->u,14,1,(rd(s->u,13,1)&rd(s->r,519,1)));
L_1803ff0e7_27:;
wr(s->u,15,1,(rd(s->u,11,1)&rd(s->u,12,1)));
L_1803ff0e7_28:;
wr(s->r,519,1,(rd(s->u,14,1)|rd(s->u,15,1)));
L_1803ff0e7_29:;
wr(s->u,16,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ff0e7_30:;
wr(s->u,17,1,(!rd(s->u,11,1)));
L_1803ff0e7_31:;
wr(s->u,18,1,(rd(s->u,17,1)&rd(s->r,518,1)));
L_1803ff0e7_32:;
wr(s->u,19,1,(rd(s->u,11,1)&rd(s->u,16,1)));
L_1803ff0e7_33:;
wr(s->r,518,1,(rd(s->u,18,1)|rd(s->u,19,1)));
L_1803ff0e7_34:;
wr(s->u,20,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ff0e7_35:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ff0e7_36:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ff0e7_37:;
wr(s->u,26,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ff0e7_38:;
wr(s->u,27,1,(!rd(s->u,11,1)));
L_1803ff0e7_39:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,514,1)));
L_1803ff0e7_40:;
wr(s->u,29,1,(rd(s->u,11,1)&rd(s->u,26,1)));
L_1803ff0e7_41:;
wr(s->r,514,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803ff0e7_42:;
/* 1803ff0ea: test edx, edx */
L_1803ff0ea_0:;
L_1803ff0ea_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ff0ea_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ff0ea_3:;
wr(s->u,53,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803ff0ea_4:;
wr(s->r,519,1,(sx(rd(s->u,53,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff0ea_5:;
wr(s->r,518,1,(rd(s->u,53,4)==((U)UINT64_C(0x0))));
L_1803ff0ea_6:;
wr(s->u,5,4,(rd(s->u,53,4)&((U)UINT64_C(0xff))));
L_1803ff0ea_7:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803ff0ea_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ff0ea_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ff0ea_10:;
/* 1803ff0ec: je 0x180400312 */
L_1803ff0ec_0:;
L_1803ff0ec_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180400312);}
L_1803ff0ec_2:;
return UINT64_C(0x1803ff0f2);
}
uint64_t b_1803ff0f2(CPU*s){
/* 1803ff0f2: sar r9d, 2 */
L_1803ff0f2_0:;
L_1803ff0f2_1:;
wr(s->u,47,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803ff0f2_2:;
wr(s->u,51,4,rd(s->r,136,4));
L_1803ff0f2_3:;
wr(s->r,136,4,((rd(s->u,47,4)>=32)?(sx(rd(s->r,136,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,136,4),4)>>rd(s->u,47,4))));
L_1803ff0f2_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ff0f2_5:;
wr(s->u,32,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803ff0f2_6:;
wr(s->u,33,4,(rd(s->u,47,4)-((U)UINT64_C(0x1))));
L_1803ff0f2_7:;
wr(s->u,37,4,((rd(s->u,33,4)>=32)?(sx(rd(s->u,51,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,51,4),4)>>rd(s->u,33,4))));
L_1803ff0f2_8:;
wr(s->u,41,4,(rd(s->u,37,4)&((U)UINT64_C(0x1))));
L_1803ff0f2_9:;
wr(s->u,45,1,(rd(s->u,41,4)!=((U)UINT64_C(0x0))));
L_1803ff0f2_10:;
wr(s->u,0,1,rd(s->u,32,1));
L_1803ff0f2_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ff0f2_12:;
wr(s->u,2,1,(!rd(s->u,32,1)));
L_1803ff0f2_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ff0f2_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,45,1)));
L_1803ff0f2_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ff0f2_16:;
wr(s->u,46,1,(rd(s->u,47,4)==((U)UINT64_C(0x1))));
L_1803ff0f2_17:;
wr(s->u,0,1,rd(s->u,46,1));
L_1803ff0f2_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ff0f2_19:;
wr(s->u,2,1,(!rd(s->u,46,1)));
L_1803ff0f2_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ff0f2_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ff0f2_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ff0f2_23:;
wr(s->u,13,1,(rd(s->u,47,4)!=((U)UINT64_C(0x0))));
L_1803ff0f2_24:;
wr(s->u,14,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff0f2_25:;
wr(s->u,15,1,(!rd(s->u,13,1)));
L_1803ff0f2_26:;
wr(s->u,16,1,(rd(s->u,15,1)&rd(s->r,519,1)));
L_1803ff0f2_27:;
wr(s->u,17,1,(rd(s->u,13,1)&rd(s->u,14,1)));
L_1803ff0f2_28:;
wr(s->r,519,1,(rd(s->u,16,1)|rd(s->u,17,1)));
L_1803ff0f2_29:;
wr(s->u,18,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803ff0f2_30:;
wr(s->u,19,1,(!rd(s->u,13,1)));
L_1803ff0f2_31:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,518,1)));
L_1803ff0f2_32:;
wr(s->u,21,1,(rd(s->u,13,1)&rd(s->u,18,1)));
L_1803ff0f2_33:;
wr(s->r,518,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803ff0f2_34:;
wr(s->u,22,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803ff0f2_35:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803ff0f2_36:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803ff0f2_37:;
wr(s->u,28,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803ff0f2_38:;
wr(s->u,29,1,(!rd(s->u,13,1)));
L_1803ff0f2_39:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,514,1)));
L_1803ff0f2_40:;
wr(s->u,31,1,(rd(s->u,13,1)&rd(s->u,28,1)));
L_1803ff0f2_41:;
wr(s->r,514,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803ff0f2_42:;
/* 1803ff0f6: movsxd rbp, r9d */
L_1803ff0f6_0:;
L_1803ff0f6_1:;
wr(s->r,40,8,(U)sx(rd(s->r,136,4),4));
L_1803ff0f6_2:;
/* 1803ff0f9: test edx, edx */
L_1803ff0f9_0:;
L_1803ff0f9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ff0f9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ff0f9_3:;
wr(s->u,55,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803ff0f9_4:;
wr(s->r,519,1,(sx(rd(s->u,55,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff0f9_5:;
wr(s->r,518,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803ff0f9_6:;
wr(s->u,7,4,(rd(s->u,55,4)&((U)UINT64_C(0xff))));
L_1803ff0f9_7:;
wr(s->u,11,1,pop(rd(s->u,7,4),4));
L_1803ff0f9_8:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803ff0f9_9:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803ff0f9_10:;
/* 1803ff0fb: jle 0x180400312 */
L_1803ff0fb_0:;
L_1803ff0fb_1:;
wr(s->u,5,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ff0fb_2:;
wr(s->u,6,1,((rd(s->r,518,1)!=0)||(rd(s->u,5,1)!=0)));
L_1803ff0fb_3:;
if(rd(s->u,6,1)){return UINT64_C(0x180400312);}
L_1803ff0fb_4:;
return UINT64_C(0x1803ff101);
}
uint64_t b_1803ff101(CPU*s){
/* 1803ff101: movaps xmmword ptr [rsp + 0x60], xmm6 */
L_1803ff101_0:;
L_1803ff101_1:;
wr(s->u,16,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803ff101_2:;
wr(s->u,28,16,rd(s->r,4992,16));
L_1803ff101_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,28,16));
L_1803ff101_4:;
/* 1803ff106: movaps xmmword ptr [rsp + 0x50], xmm7 */
L_1803ff106_0:;
L_1803ff106_1:;
wr(s->u,16,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ff106_2:;
wr(s->u,28,16,rd(s->r,5056,16));
L_1803ff106_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,28,16));
L_1803ff106_4:;
/* 1803ff10b: movaps xmmword ptr [rsp + 0x40], xmm8 */
L_1803ff10b_0:;
L_1803ff10b_1:;
wr(s->u,16,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ff10b_2:;
wr(s->u,28,16,rd(s->r,5120,16));
L_1803ff10b_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,28,16));
L_1803ff10b_4:;
/* 1803ff111: movaps xmmword ptr [rsp + 0x30], xmm9 */
L_1803ff111_0:;
L_1803ff111_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ff111_2:;
wr(s->u,28,16,rd(s->r,5184,16));
L_1803ff111_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,28,16));
L_1803ff111_4:;
/* 1803ff117: xor eax, eax */
L_1803ff117_0:;
L_1803ff117_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ff117_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ff117_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ff117_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ff117_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff117_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ff117_7:;
wr(s->u,44,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ff117_8:;
wr(s->u,48,1,pop(rd(s->u,44,4),4));
L_1803ff117_9:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803ff117_10:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803ff117_11:;
/* 1803ff119: movss xmm5, dword ptr [rcx] */
L_1803ff119_0:;
L_1803ff119_1:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803ff119_2:;
wr(s->r,4928,4,rd(s->u,24,4));
L_1803ff119_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff119_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff119_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff119_6:;
/* 1803ff11d: movss xmm8, dword ptr [rcx + 0x1000] */
L_1803ff11d_0:;
L_1803ff11d_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1000))));
L_1803ff11d_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff11d_3:;
wr(s->r,5120,4,rd(s->u,24,4));
L_1803ff11d_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff11d_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff11d_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff11d_7:;
/* 1803ff126: movaps xmm6, xmm8 */
L_1803ff126_0:;
L_1803ff126_1:;
wr(s->r,4992,4,rd(s->r,5120,4));
L_1803ff126_2:;
wr(s->r,4996,4,rd(s->r,5124,4));
L_1803ff126_3:;
wr(s->r,5000,4,rd(s->r,5128,4));
L_1803ff126_4:;
wr(s->r,5004,4,rd(s->r,5132,4));
L_1803ff126_5:;
/* 1803ff12a: movss xmm7, dword ptr [rcx + 4] */
L_1803ff12a_0:;
L_1803ff12a_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803ff12a_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff12a_3:;
wr(s->r,5056,4,rd(s->u,24,4));
L_1803ff12a_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff12a_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff12a_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff12a_7:;
/* 1803ff12f: movaps xmm4, xmm7 */
L_1803ff12f_0:;
L_1803ff12f_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803ff12f_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803ff12f_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803ff12f_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803ff12f_5:;
/* 1803ff132: movss xmm9, dword ptr [rcx + 0x1004] */
L_1803ff132_0:;
L_1803ff132_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1004))));
L_1803ff132_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff132_3:;
wr(s->r,5184,4,rd(s->u,24,4));
L_1803ff132_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ff132_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ff132_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ff132_7:;
/* 1803ff13b: movss xmm3, dword ptr [rcx + 0x2000] */
L_1803ff13b_0:;
L_1803ff13b_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2000))));
L_1803ff13b_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff13b_3:;
wr(s->r,4800,4,rd(s->u,24,4));
L_1803ff13b_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff13b_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff13b_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff13b_7:;
/* 1803ff143: movaps xmm0, xmm3 */
L_1803ff143_0:;
L_1803ff143_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ff143_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ff143_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ff143_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ff143_5:;
/* 1803ff146: movss xmm2, dword ptr [rcx + 0x2004] */
L_1803ff146_0:;
L_1803ff146_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2004))));
L_1803ff146_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff146_3:;
wr(s->r,4736,4,rd(s->u,24,4));
L_1803ff146_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff146_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff146_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff146_7:;
/* 1803ff14e: movaps xmm1, xmm2 */
L_1803ff14e_0:;
L_1803ff14e_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803ff14e_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803ff14e_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803ff14e_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803ff14e_5:;
/* 1803ff151: addss xmm6, xmm5 */
L_1803ff151_0:;
L_1803ff151_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff151_2:;
/* 1803ff155: addss xmm4, xmm9 */
L_1803ff155_0:;
L_1803ff155_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ff155_2:;
/* 1803ff15a: subss xmm5, xmm8 */
L_1803ff15a_0:;
L_1803ff15a_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ff15a_2:;
/* 1803ff15f: movss xmm8, dword ptr [rcx + 0x3000] */
L_1803ff15f_0:;
L_1803ff15f_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3000))));
L_1803ff15f_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff15f_3:;
wr(s->r,5120,4,rd(s->u,24,4));
L_1803ff15f_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff15f_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff15f_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff15f_7:;
/* 1803ff168: subss xmm7, xmm9 */
L_1803ff168_0:;
L_1803ff168_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ff168_2:;
/* 1803ff16d: movss xmm9, dword ptr [rcx + 0x3004] */
L_1803ff16d_0:;
L_1803ff16d_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3004))));
L_1803ff16d_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff16d_3:;
wr(s->r,5184,4,rd(s->u,24,4));
L_1803ff16d_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ff16d_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ff16d_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ff16d_7:;
/* 1803ff176: addss xmm0, xmm8 */
L_1803ff176_0:;
L_1803ff176_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff176_2:;
/* 1803ff17b: addss xmm1, xmm9 */
L_1803ff17b_0:;
L_1803ff17b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ff17b_2:;
/* 1803ff180: subss xmm3, xmm8 */
L_1803ff180_0:;
L_1803ff180_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ff180_2:;
/* 1803ff185: movaps xmm8, xmm6 */
L_1803ff185_0:;
L_1803ff185_1:;
wr(s->r,5120,4,rd(s->r,4992,4));
L_1803ff185_2:;
wr(s->r,5124,4,rd(s->r,4996,4));
L_1803ff185_3:;
wr(s->r,5128,4,rd(s->r,5000,4));
L_1803ff185_4:;
wr(s->r,5132,4,rd(s->r,5004,4));
L_1803ff185_5:;
/* 1803ff189: subss xmm2, xmm9 */
L_1803ff189_0:;
L_1803ff189_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ff189_2:;
/* 1803ff18e: subss xmm6, xmm0 */
L_1803ff18e_0:;
L_1803ff18e_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff18e_2:;
/* 1803ff192: movss dword ptr [rcx + 0x2000], xmm6 */
L_1803ff192_0:;
L_1803ff192_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2000))));
L_1803ff192_2:;
wr(s->u,24,4,rd(s->r,4992,4));
L_1803ff192_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803ff192_4:;
/* 1803ff19a: addss xmm8, xmm0 */
L_1803ff19a_0:;
L_1803ff19a_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff19a_2:;
/* 1803ff19f: movss dword ptr [rcx], xmm8 */
L_1803ff19f_0:;
L_1803ff19f_1:;
wr(s->u,24,4,rd(s->r,5120,4));
L_1803ff19f_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,24,4));
L_1803ff19f_3:;
/* 1803ff1a4: movaps xmm8, xmm4 */
L_1803ff1a4_0:;
L_1803ff1a4_1:;
wr(s->r,5120,4,rd(s->r,4864,4));
L_1803ff1a4_2:;
wr(s->r,5124,4,rd(s->r,4868,4));
L_1803ff1a4_3:;
wr(s->r,5128,4,rd(s->r,4872,4));
L_1803ff1a4_4:;
wr(s->r,5132,4,rd(s->r,4876,4));
L_1803ff1a4_5:;
/* 1803ff1a8: movaps xmm0, xmm5 */
L_1803ff1a8_0:;
L_1803ff1a8_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ff1a8_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ff1a8_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ff1a8_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ff1a8_5:;
return UINT64_C(0x1803ff1ab);
}
uint64_t b_1803ff119(CPU*s){
/* 1803ff119: movss xmm5, dword ptr [rcx] */
L_1803ff119_0:;
L_1803ff119_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803ff119_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803ff119_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff119_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff119_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff119_6:;
/* 1803ff11d: movss xmm8, dword ptr [rcx + 0x1000] */
L_1803ff11d_0:;
L_1803ff11d_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1000))));
L_1803ff11d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff11d_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ff11d_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff11d_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff11d_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff11d_7:;
/* 1803ff126: movaps xmm6, xmm8 */
L_1803ff126_0:;
L_1803ff126_1:;
wr(s->r,4992,4,rd(s->r,5120,4));
L_1803ff126_2:;
wr(s->r,4996,4,rd(s->r,5124,4));
L_1803ff126_3:;
wr(s->r,5000,4,rd(s->r,5128,4));
L_1803ff126_4:;
wr(s->r,5004,4,rd(s->r,5132,4));
L_1803ff126_5:;
/* 1803ff12a: movss xmm7, dword ptr [rcx + 4] */
L_1803ff12a_0:;
L_1803ff12a_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803ff12a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff12a_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803ff12a_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff12a_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff12a_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff12a_7:;
/* 1803ff12f: movaps xmm4, xmm7 */
L_1803ff12f_0:;
L_1803ff12f_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803ff12f_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803ff12f_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803ff12f_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803ff12f_5:;
/* 1803ff132: movss xmm9, dword ptr [rcx + 0x1004] */
L_1803ff132_0:;
L_1803ff132_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1004))));
L_1803ff132_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff132_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803ff132_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ff132_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ff132_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ff132_7:;
/* 1803ff13b: movss xmm3, dword ptr [rcx + 0x2000] */
L_1803ff13b_0:;
L_1803ff13b_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2000))));
L_1803ff13b_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff13b_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803ff13b_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff13b_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff13b_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff13b_7:;
/* 1803ff143: movaps xmm0, xmm3 */
L_1803ff143_0:;
L_1803ff143_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ff143_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ff143_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ff143_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ff143_5:;
/* 1803ff146: movss xmm2, dword ptr [rcx + 0x2004] */
L_1803ff146_0:;
L_1803ff146_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2004))));
L_1803ff146_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff146_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803ff146_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff146_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff146_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff146_7:;
/* 1803ff14e: movaps xmm1, xmm2 */
L_1803ff14e_0:;
L_1803ff14e_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803ff14e_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803ff14e_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803ff14e_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803ff14e_5:;
/* 1803ff151: addss xmm6, xmm5 */
L_1803ff151_0:;
L_1803ff151_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff151_2:;
/* 1803ff155: addss xmm4, xmm9 */
L_1803ff155_0:;
L_1803ff155_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ff155_2:;
/* 1803ff15a: subss xmm5, xmm8 */
L_1803ff15a_0:;
L_1803ff15a_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ff15a_2:;
/* 1803ff15f: movss xmm8, dword ptr [rcx + 0x3000] */
L_1803ff15f_0:;
L_1803ff15f_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3000))));
L_1803ff15f_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff15f_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ff15f_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff15f_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff15f_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff15f_7:;
/* 1803ff168: subss xmm7, xmm9 */
L_1803ff168_0:;
L_1803ff168_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ff168_2:;
/* 1803ff16d: movss xmm9, dword ptr [rcx + 0x3004] */
L_1803ff16d_0:;
L_1803ff16d_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3004))));
L_1803ff16d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff16d_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803ff16d_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ff16d_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ff16d_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ff16d_7:;
/* 1803ff176: addss xmm0, xmm8 */
L_1803ff176_0:;
L_1803ff176_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff176_2:;
/* 1803ff17b: addss xmm1, xmm9 */
L_1803ff17b_0:;
L_1803ff17b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ff17b_2:;
/* 1803ff180: subss xmm3, xmm8 */
L_1803ff180_0:;
L_1803ff180_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ff180_2:;
/* 1803ff185: movaps xmm8, xmm6 */
L_1803ff185_0:;
L_1803ff185_1:;
wr(s->r,5120,4,rd(s->r,4992,4));
L_1803ff185_2:;
wr(s->r,5124,4,rd(s->r,4996,4));
L_1803ff185_3:;
wr(s->r,5128,4,rd(s->r,5000,4));
L_1803ff185_4:;
wr(s->r,5132,4,rd(s->r,5004,4));
L_1803ff185_5:;
/* 1803ff189: subss xmm2, xmm9 */
L_1803ff189_0:;
L_1803ff189_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ff189_2:;
/* 1803ff18e: subss xmm6, xmm0 */
L_1803ff18e_0:;
L_1803ff18e_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff18e_2:;
/* 1803ff192: movss dword ptr [rcx + 0x2000], xmm6 */
L_1803ff192_0:;
L_1803ff192_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2000))));
L_1803ff192_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803ff192_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff192_4:;
/* 1803ff19a: addss xmm8, xmm0 */
L_1803ff19a_0:;
L_1803ff19a_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff19a_2:;
/* 1803ff19f: movss dword ptr [rcx], xmm8 */
L_1803ff19f_0:;
L_1803ff19f_1:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ff19f_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,16,4));
L_1803ff19f_3:;
/* 1803ff1a4: movaps xmm8, xmm4 */
L_1803ff1a4_0:;
L_1803ff1a4_1:;
wr(s->r,5120,4,rd(s->r,4864,4));
L_1803ff1a4_2:;
wr(s->r,5124,4,rd(s->r,4868,4));
L_1803ff1a4_3:;
wr(s->r,5128,4,rd(s->r,4872,4));
L_1803ff1a4_4:;
wr(s->r,5132,4,rd(s->r,4876,4));
L_1803ff1a4_5:;
/* 1803ff1a8: movaps xmm0, xmm5 */
L_1803ff1a8_0:;
L_1803ff1a8_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ff1a8_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ff1a8_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ff1a8_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ff1a8_5:;
/* 1803ff1ab: subss xmm4, xmm1 */
L_1803ff1ab_0:;
L_1803ff1ab_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff1ab_2:;
/* 1803ff1af: movss dword ptr [rcx + 0x2004], xmm4 */
L_1803ff1af_0:;
L_1803ff1af_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2004))));
L_1803ff1af_2:;
wr(s->u,16,4,rd(s->r,4864,4));
L_1803ff1af_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff1af_4:;
/* 1803ff1b7: addss xmm8, xmm1 */
L_1803ff1b7_0:;
L_1803ff1b7_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff1b7_2:;
/* 1803ff1bc: movss dword ptr [rcx + 4], xmm8 */
L_1803ff1bc_0:;
L_1803ff1bc_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803ff1bc_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ff1bc_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ff1bc_4:;
/* 1803ff1c2: addss xmm0, xmm2 */
L_1803ff1c2_0:;
L_1803ff1c2_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff1c2_2:;
return UINT64_C(0x1803ff1c6);
}
uint64_t b_1803ff1ab(CPU*s){
/* 1803ff1ab: subss xmm4, xmm1 */
L_1803ff1ab_0:;
L_1803ff1ab_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff1ab_2:;
/* 1803ff1af: movss dword ptr [rcx + 0x2004], xmm4 */
L_1803ff1af_0:;
L_1803ff1af_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2004))));
L_1803ff1af_2:;
wr(s->u,32,4,rd(s->r,4864,4));
L_1803ff1af_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ff1af_4:;
/* 1803ff1b7: addss xmm8, xmm1 */
L_1803ff1b7_0:;
L_1803ff1b7_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff1b7_2:;
/* 1803ff1bc: movss dword ptr [rcx + 4], xmm8 */
L_1803ff1bc_0:;
L_1803ff1bc_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803ff1bc_2:;
wr(s->u,32,4,rd(s->r,5120,4));
L_1803ff1bc_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff1bc_4:;
/* 1803ff1c2: addss xmm0, xmm2 */
L_1803ff1c2_0:;
L_1803ff1c2_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff1c2_2:;
/* 1803ff1c6: movss dword ptr [rcx + 0x1000], xmm0 */
L_1803ff1c6_0:;
L_1803ff1c6_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1000))));
L_1803ff1c6_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff1c6_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ff1c6_4:;
/* 1803ff1ce: movaps xmm0, xmm7 */
L_1803ff1ce_0:;
L_1803ff1ce_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ff1ce_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ff1ce_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ff1ce_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ff1ce_5:;
/* 1803ff1d1: subss xmm5, xmm2 */
L_1803ff1d1_0:;
L_1803ff1d1_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff1d1_2:;
/* 1803ff1d5: movss dword ptr [rcx + 0x3000], xmm5 */
L_1803ff1d5_0:;
L_1803ff1d5_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3000))));
L_1803ff1d5_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803ff1d5_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ff1d5_4:;
/* 1803ff1dd: subss xmm0, xmm3 */
L_1803ff1dd_0:;
L_1803ff1dd_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ff1dd_2:;
/* 1803ff1e1: movss dword ptr [rcx + 0x1004], xmm0 */
L_1803ff1e1_0:;
L_1803ff1e1_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1004))));
L_1803ff1e1_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff1e1_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ff1e1_4:;
/* 1803ff1e9: addss xmm7, xmm3 */
L_1803ff1e9_0:;
L_1803ff1e9_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff1e9_2:;
/* 1803ff1ed: movss dword ptr [rcx + 0x3004], xmm7 */
L_1803ff1ed_0:;
L_1803ff1ed_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3004))));
L_1803ff1ed_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803ff1ed_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ff1ed_4:;
/* 1803ff1f5: mov r11, r8 */
L_1803ff1f5_0:;
L_1803ff1f5_1:;
wr(s->r,152,8,rd(s->r,128,8));
L_1803ff1f5_2:;
/* 1803ff1f8: lea r10, [r8 + 8] */
L_1803ff1f8_0:;
L_1803ff1f8_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803ff1f8_2:;
wr(s->r,144,8,rd(s->u,0,8));
L_1803ff1f8_3:;
/* 1803ff1fc: xor r9d, r9d */
L_1803ff1fc_0:;
L_1803ff1fc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ff1fc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ff1fc_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803ff1fc_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ff1fc_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff1fc_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803ff1fc_7:;
wr(s->u,36,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803ff1fc_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1803ff1fc_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ff1fc_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ff1fc_11:;
/* 1803ff1ff: lea r10, [r10 + rbp*4] */
L_1803ff1ff_0:;
L_1803ff1ff_1:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff1ff_2:;
wr(s->u,24,8,(rd(s->r,144,8)+rd(s->u,16,8)));
L_1803ff1ff_3:;
wr(s->r,144,8,rd(s->u,24,8));
L_1803ff1ff_4:;
/* 1803ff203: lea r11, [r11 + rbp*4] */
L_1803ff203_0:;
L_1803ff203_1:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff203_2:;
wr(s->u,24,8,(rd(s->r,152,8)+rd(s->u,16,8)));
L_1803ff203_3:;
wr(s->r,152,8,rd(s->u,24,8));
L_1803ff203_4:;
/* 1803ff207: movss xmm3, dword ptr [r11] */
L_1803ff207_0:;
L_1803ff207_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,152,8),4));
L_1803ff207_2:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ff207_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff207_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff207_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff207_6:;
/* 1803ff20c: movss xmm1, dword ptr [r11 + 4] */
L_1803ff20c_0:;
L_1803ff20c_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x4))));
L_1803ff20c_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff20c_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ff20c_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff20c_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff20c_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff20c_7:;
/* 1803ff212: add rcx, 8 */
L_1803ff212_0:;
L_1803ff212_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ff212_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,0));
L_1803ff212_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ff212_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ff212_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ff212_6:;
wr(s->u,36,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ff212_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ff212_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ff212_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ff212_10:;
/* 1803ff216: movss xmm2, dword ptr [rcx + 0x2000] */
L_1803ff216_0:;
L_1803ff216_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2000))));
L_1803ff216_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff216_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ff216_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff216_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff216_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff216_7:;
/* 1803ff21e: movaps xmm4, xmm2 */
L_1803ff21e_0:;
L_1803ff21e_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803ff21e_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803ff21e_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803ff21e_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803ff21e_5:;
/* 1803ff221: mulss xmm2, xmm1 */
L_1803ff221_0:;
L_1803ff221_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ff221_2:;
/* 1803ff225: mulss xmm4, xmm3 */
L_1803ff225_0:;
L_1803ff225_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff225_2:;
/* 1803ff229: movss xmm5, dword ptr [rcx + 0x2004] */
L_1803ff229_0:;
L_1803ff229_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2004))));
L_1803ff229_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff229_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ff229_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff229_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff229_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff229_7:;
/* 1803ff231: movaps xmm0, xmm5 */
L_1803ff231_0:;
L_1803ff231_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ff231_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ff231_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ff231_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ff231_5:;
/* 1803ff234: mulss xmm5, xmm3 */
L_1803ff234_0:;
L_1803ff234_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff234_2:;
/* 1803ff238: mulss xmm0, xmm1 */
L_1803ff238_0:;
L_1803ff238_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ff238_2:;
/* 1803ff23c: movss xmm1, dword ptr [rcx + 0x1000] */
L_1803ff23c_0:;
L_1803ff23c_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1000))));
L_1803ff23c_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff23c_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ff23c_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff23c_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff23c_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff23c_7:;
/* 1803ff244: movaps xmm6, xmm1 */
L_1803ff244_0:;
L_1803ff244_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803ff244_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803ff244_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803ff244_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803ff244_5:;
/* 1803ff247: movss xmm7, dword ptr [rcx + 0x1004] */
L_1803ff247_0:;
L_1803ff247_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1004))));
L_1803ff247_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff247_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803ff247_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff247_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff247_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff247_7:;
return UINT64_C(0x1803ff24f);
}
uint64_t b_1803ff1c6(CPU*s){
/* 1803ff1c6: movss dword ptr [rcx + 0x1000], xmm0 */
L_1803ff1c6_0:;
L_1803ff1c6_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1000))));
L_1803ff1c6_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff1c6_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ff1c6_4:;
/* 1803ff1ce: movaps xmm0, xmm7 */
L_1803ff1ce_0:;
L_1803ff1ce_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ff1ce_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ff1ce_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ff1ce_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ff1ce_5:;
/* 1803ff1d1: subss xmm5, xmm2 */
L_1803ff1d1_0:;
L_1803ff1d1_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff1d1_2:;
/* 1803ff1d5: movss dword ptr [rcx + 0x3000], xmm5 */
L_1803ff1d5_0:;
L_1803ff1d5_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3000))));
L_1803ff1d5_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803ff1d5_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ff1d5_4:;
/* 1803ff1dd: subss xmm0, xmm3 */
L_1803ff1dd_0:;
L_1803ff1dd_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ff1dd_2:;
/* 1803ff1e1: movss dword ptr [rcx + 0x1004], xmm0 */
L_1803ff1e1_0:;
L_1803ff1e1_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1004))));
L_1803ff1e1_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff1e1_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ff1e1_4:;
/* 1803ff1e9: addss xmm7, xmm3 */
L_1803ff1e9_0:;
L_1803ff1e9_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff1e9_2:;
/* 1803ff1ed: movss dword ptr [rcx + 0x3004], xmm7 */
L_1803ff1ed_0:;
L_1803ff1ed_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3004))));
L_1803ff1ed_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803ff1ed_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ff1ed_4:;
/* 1803ff1f5: mov r11, r8 */
L_1803ff1f5_0:;
L_1803ff1f5_1:;
wr(s->r,152,8,rd(s->r,128,8));
L_1803ff1f5_2:;
/* 1803ff1f8: lea r10, [r8 + 8] */
L_1803ff1f8_0:;
L_1803ff1f8_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803ff1f8_2:;
wr(s->r,144,8,rd(s->u,0,8));
L_1803ff1f8_3:;
/* 1803ff1fc: xor r9d, r9d */
L_1803ff1fc_0:;
L_1803ff1fc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ff1fc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ff1fc_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803ff1fc_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ff1fc_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff1fc_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803ff1fc_7:;
wr(s->u,36,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803ff1fc_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1803ff1fc_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ff1fc_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ff1fc_11:;
/* 1803ff1ff: lea r10, [r10 + rbp*4] */
L_1803ff1ff_0:;
L_1803ff1ff_1:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff1ff_2:;
wr(s->u,24,8,(rd(s->r,144,8)+rd(s->u,16,8)));
L_1803ff1ff_3:;
wr(s->r,144,8,rd(s->u,24,8));
L_1803ff1ff_4:;
/* 1803ff203: lea r11, [r11 + rbp*4] */
L_1803ff203_0:;
L_1803ff203_1:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff203_2:;
wr(s->u,24,8,(rd(s->r,152,8)+rd(s->u,16,8)));
L_1803ff203_3:;
wr(s->r,152,8,rd(s->u,24,8));
L_1803ff203_4:;
/* 1803ff207: movss xmm3, dword ptr [r11] */
L_1803ff207_0:;
L_1803ff207_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,152,8),4));
L_1803ff207_2:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ff207_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff207_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff207_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff207_6:;
/* 1803ff20c: movss xmm1, dword ptr [r11 + 4] */
L_1803ff20c_0:;
L_1803ff20c_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x4))));
L_1803ff20c_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff20c_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ff20c_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff20c_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff20c_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff20c_7:;
/* 1803ff212: add rcx, 8 */
L_1803ff212_0:;
L_1803ff212_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ff212_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,0));
L_1803ff212_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ff212_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ff212_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ff212_6:;
wr(s->u,36,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ff212_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ff212_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ff212_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ff212_10:;
/* 1803ff216: movss xmm2, dword ptr [rcx + 0x2000] */
L_1803ff216_0:;
L_1803ff216_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2000))));
L_1803ff216_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff216_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ff216_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff216_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff216_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff216_7:;
/* 1803ff21e: movaps xmm4, xmm2 */
L_1803ff21e_0:;
L_1803ff21e_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803ff21e_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803ff21e_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803ff21e_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803ff21e_5:;
/* 1803ff221: mulss xmm2, xmm1 */
L_1803ff221_0:;
L_1803ff221_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ff221_2:;
/* 1803ff225: mulss xmm4, xmm3 */
L_1803ff225_0:;
L_1803ff225_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff225_2:;
/* 1803ff229: movss xmm5, dword ptr [rcx + 0x2004] */
L_1803ff229_0:;
L_1803ff229_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2004))));
L_1803ff229_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff229_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ff229_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff229_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff229_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff229_7:;
/* 1803ff231: movaps xmm0, xmm5 */
L_1803ff231_0:;
L_1803ff231_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ff231_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ff231_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ff231_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ff231_5:;
/* 1803ff234: mulss xmm5, xmm3 */
L_1803ff234_0:;
L_1803ff234_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff234_2:;
/* 1803ff238: mulss xmm0, xmm1 */
L_1803ff238_0:;
L_1803ff238_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ff238_2:;
/* 1803ff23c: movss xmm1, dword ptr [rcx + 0x1000] */
L_1803ff23c_0:;
L_1803ff23c_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1000))));
L_1803ff23c_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff23c_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ff23c_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff23c_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff23c_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff23c_7:;
/* 1803ff244: movaps xmm6, xmm1 */
L_1803ff244_0:;
L_1803ff244_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803ff244_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803ff244_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803ff244_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803ff244_5:;
/* 1803ff247: movss xmm7, dword ptr [rcx + 0x1004] */
L_1803ff247_0:;
L_1803ff247_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1004))));
L_1803ff247_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff247_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803ff247_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff247_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff247_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff247_7:;
/* 1803ff24f: movss xmm3, dword ptr [r10 + 4] */
L_1803ff24f_0:;
L_1803ff24f_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803ff24f_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff24f_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ff24f_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff24f_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff24f_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff24f_7:;
/* 1803ff255: mulss xmm1, xmm3 */
L_1803ff255_0:;
L_1803ff255_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff255_2:;
/* 1803ff259: movss xmm8, dword ptr [rcx + 0x3004] */
L_1803ff259_0:;
L_1803ff259_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3004))));
L_1803ff259_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff259_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803ff259_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff259_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff259_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff259_7:;
/* 1803ff262: subss xmm4, xmm0 */
L_1803ff262_0:;
L_1803ff262_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff262_2:;
/* 1803ff266: movaps xmm0, xmm7 */
L_1803ff266_0:;
L_1803ff266_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ff266_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ff266_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ff266_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ff266_5:;
return UINT64_C(0x1803ff269);
}
uint64_t b_1803ff1ff(CPU*s){
/* 1803ff1ff: lea r10, [r10 + rbp*4] */
L_1803ff1ff_0:;
L_1803ff1ff_1:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff1ff_2:;
wr(s->u,24,8,(rd(s->r,144,8)+rd(s->u,16,8)));
L_1803ff1ff_3:;
wr(s->r,144,8,rd(s->u,24,8));
L_1803ff1ff_4:;
/* 1803ff203: lea r11, [r11 + rbp*4] */
L_1803ff203_0:;
L_1803ff203_1:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff203_2:;
wr(s->u,24,8,(rd(s->r,152,8)+rd(s->u,16,8)));
L_1803ff203_3:;
wr(s->r,152,8,rd(s->u,24,8));
L_1803ff203_4:;
/* 1803ff207: movss xmm3, dword ptr [r11] */
L_1803ff207_0:;
L_1803ff207_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,152,8),4));
L_1803ff207_2:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ff207_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff207_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff207_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff207_6:;
/* 1803ff20c: movss xmm1, dword ptr [r11 + 4] */
L_1803ff20c_0:;
L_1803ff20c_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x4))));
L_1803ff20c_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff20c_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ff20c_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff20c_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff20c_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff20c_7:;
/* 1803ff212: add rcx, 8 */
L_1803ff212_0:;
L_1803ff212_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ff212_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,0));
L_1803ff212_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ff212_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ff212_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ff212_6:;
wr(s->u,36,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ff212_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ff212_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ff212_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ff212_10:;
/* 1803ff216: movss xmm2, dword ptr [rcx + 0x2000] */
L_1803ff216_0:;
L_1803ff216_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2000))));
L_1803ff216_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff216_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ff216_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff216_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff216_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff216_7:;
/* 1803ff21e: movaps xmm4, xmm2 */
L_1803ff21e_0:;
L_1803ff21e_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803ff21e_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803ff21e_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803ff21e_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803ff21e_5:;
/* 1803ff221: mulss xmm2, xmm1 */
L_1803ff221_0:;
L_1803ff221_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ff221_2:;
/* 1803ff225: mulss xmm4, xmm3 */
L_1803ff225_0:;
L_1803ff225_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff225_2:;
/* 1803ff229: movss xmm5, dword ptr [rcx + 0x2004] */
L_1803ff229_0:;
L_1803ff229_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2004))));
L_1803ff229_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff229_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ff229_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff229_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff229_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff229_7:;
/* 1803ff231: movaps xmm0, xmm5 */
L_1803ff231_0:;
L_1803ff231_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ff231_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ff231_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ff231_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ff231_5:;
/* 1803ff234: mulss xmm5, xmm3 */
L_1803ff234_0:;
L_1803ff234_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff234_2:;
/* 1803ff238: mulss xmm0, xmm1 */
L_1803ff238_0:;
L_1803ff238_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ff238_2:;
/* 1803ff23c: movss xmm1, dword ptr [rcx + 0x1000] */
L_1803ff23c_0:;
L_1803ff23c_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1000))));
L_1803ff23c_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff23c_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ff23c_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff23c_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff23c_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff23c_7:;
/* 1803ff244: movaps xmm6, xmm1 */
L_1803ff244_0:;
L_1803ff244_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803ff244_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803ff244_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803ff244_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803ff244_5:;
/* 1803ff247: movss xmm7, dword ptr [rcx + 0x1004] */
L_1803ff247_0:;
L_1803ff247_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1004))));
L_1803ff247_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff247_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803ff247_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff247_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff247_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff247_7:;
/* 1803ff24f: movss xmm3, dword ptr [r10 + 4] */
L_1803ff24f_0:;
L_1803ff24f_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803ff24f_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff24f_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ff24f_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff24f_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff24f_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff24f_7:;
/* 1803ff255: mulss xmm1, xmm3 */
L_1803ff255_0:;
L_1803ff255_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff255_2:;
/* 1803ff259: movss xmm8, dword ptr [rcx + 0x3004] */
L_1803ff259_0:;
L_1803ff259_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3004))));
L_1803ff259_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff259_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803ff259_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff259_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff259_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff259_7:;
/* 1803ff262: subss xmm4, xmm0 */
L_1803ff262_0:;
L_1803ff262_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff262_2:;
/* 1803ff266: movaps xmm0, xmm7 */
L_1803ff266_0:;
L_1803ff266_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ff266_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ff266_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ff266_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ff266_5:;
/* 1803ff269: mulss xmm0, xmm3 */
L_1803ff269_0:;
L_1803ff269_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff269_2:;
/* 1803ff26d: movss xmm3, dword ptr [r10 + 0xc] */
L_1803ff26d_0:;
L_1803ff26d_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0xc))));
L_1803ff26d_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff26d_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ff26d_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff26d_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff26d_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff26d_7:;
/* 1803ff273: addss xmm2, xmm5 */
L_1803ff273_0:;
L_1803ff273_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff273_2:;
/* 1803ff277: movss xmm5, dword ptr [r10] */
L_1803ff277_0:;
L_1803ff277_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,144,8),4));
L_1803ff277_2:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ff277_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff277_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff277_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff277_6:;
/* 1803ff27c: mulss xmm6, xmm5 */
L_1803ff27c_0:;
L_1803ff27c_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803ff27c_2:;
/* 1803ff280: mulss xmm7, xmm5 */
L_1803ff280_0:;
L_1803ff280_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803ff280_2:;
/* 1803ff284: movss xmm5, dword ptr [rcx + 0x3000] */
L_1803ff284_0:;
L_1803ff284_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3000))));
L_1803ff284_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff284_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ff284_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff284_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff284_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff284_7:;
/* 1803ff28c: movaps xmm9, xmm5 */
L_1803ff28c_0:;
L_1803ff28c_1:;
wr(s->r,5184,4,rd(s->r,4928,4));
L_1803ff28c_2:;
wr(s->r,5188,4,rd(s->r,4932,4));
L_1803ff28c_3:;
wr(s->r,5192,4,rd(s->r,4936,4));
L_1803ff28c_4:;
wr(s->r,5196,4,rd(s->r,4940,4));
L_1803ff28c_5:;
/* 1803ff290: mulss xmm5, xmm3 */
L_1803ff290_0:;
L_1803ff290_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff290_2:;
/* 1803ff294: subss xmm6, xmm0 */
L_1803ff294_0:;
L_1803ff294_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff294_2:;
/* 1803ff298: movaps xmm0, xmm8 */
L_1803ff298_0:;
L_1803ff298_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ff298_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ff298_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ff298_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ff298_5:;
return UINT64_C(0x1803ff29c);
}
uint64_t b_1803ff24f(CPU*s){
/* 1803ff24f: movss xmm3, dword ptr [r10 + 4] */
L_1803ff24f_0:;
L_1803ff24f_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803ff24f_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff24f_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803ff24f_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff24f_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff24f_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff24f_7:;
/* 1803ff255: mulss xmm1, xmm3 */
L_1803ff255_0:;
L_1803ff255_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff255_2:;
/* 1803ff259: movss xmm8, dword ptr [rcx + 0x3004] */
L_1803ff259_0:;
L_1803ff259_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3004))));
L_1803ff259_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff259_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ff259_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff259_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff259_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff259_7:;
/* 1803ff262: subss xmm4, xmm0 */
L_1803ff262_0:;
L_1803ff262_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff262_2:;
/* 1803ff266: movaps xmm0, xmm7 */
L_1803ff266_0:;
L_1803ff266_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ff266_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ff266_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ff266_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ff266_5:;
/* 1803ff269: mulss xmm0, xmm3 */
L_1803ff269_0:;
L_1803ff269_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff269_2:;
/* 1803ff26d: movss xmm3, dword ptr [r10 + 0xc] */
L_1803ff26d_0:;
L_1803ff26d_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0xc))));
L_1803ff26d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff26d_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803ff26d_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff26d_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff26d_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff26d_7:;
/* 1803ff273: addss xmm2, xmm5 */
L_1803ff273_0:;
L_1803ff273_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff273_2:;
/* 1803ff277: movss xmm5, dword ptr [r10] */
L_1803ff277_0:;
L_1803ff277_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,144,8),4));
L_1803ff277_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803ff277_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff277_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff277_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff277_6:;
/* 1803ff27c: mulss xmm6, xmm5 */
L_1803ff27c_0:;
L_1803ff27c_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803ff27c_2:;
/* 1803ff280: mulss xmm7, xmm5 */
L_1803ff280_0:;
L_1803ff280_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803ff280_2:;
/* 1803ff284: movss xmm5, dword ptr [rcx + 0x3000] */
L_1803ff284_0:;
L_1803ff284_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3000))));
L_1803ff284_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff284_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803ff284_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff284_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff284_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff284_7:;
/* 1803ff28c: movaps xmm9, xmm5 */
L_1803ff28c_0:;
L_1803ff28c_1:;
wr(s->r,5184,4,rd(s->r,4928,4));
L_1803ff28c_2:;
wr(s->r,5188,4,rd(s->r,4932,4));
L_1803ff28c_3:;
wr(s->r,5192,4,rd(s->r,4936,4));
L_1803ff28c_4:;
wr(s->r,5196,4,rd(s->r,4940,4));
L_1803ff28c_5:;
/* 1803ff290: mulss xmm5, xmm3 */
L_1803ff290_0:;
L_1803ff290_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff290_2:;
/* 1803ff294: subss xmm6, xmm0 */
L_1803ff294_0:;
L_1803ff294_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff294_2:;
/* 1803ff298: movaps xmm0, xmm8 */
L_1803ff298_0:;
L_1803ff298_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ff298_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ff298_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ff298_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ff298_5:;
/* 1803ff29c: mulss xmm0, xmm3 */
L_1803ff29c_0:;
L_1803ff29c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff29c_2:;
/* 1803ff2a0: movaps xmm3, xmm4 */
L_1803ff2a0_0:;
L_1803ff2a0_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803ff2a0_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803ff2a0_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803ff2a0_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803ff2a0_5:;
/* 1803ff2a3: addss xmm1, xmm7 */
L_1803ff2a3_0:;
L_1803ff2a3_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ff2a3_2:;
/* 1803ff2a7: movss xmm7, dword ptr [r10 + 8] */
L_1803ff2a7_0:;
L_1803ff2a7_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x8))));
L_1803ff2a7_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff2a7_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803ff2a7_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff2a7_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff2a7_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff2a7_7:;
/* 1803ff2ad: mulss xmm9, xmm7 */
L_1803ff2ad_0:;
L_1803ff2ad_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ff2ad_2:;
/* 1803ff2b2: mulss xmm8, xmm7 */
L_1803ff2b2_0:;
L_1803ff2b2_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ff2b2_2:;
/* 1803ff2b7: add r9d, 1 */
L_1803ff2b7_0:;
L_1803ff2b7_1:;
wr(s->r,512,1,(((rd(s->r,136,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,136,4)));
L_1803ff2b7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),((U)UINT64_C(0x1)),4,0));
L_1803ff2b7_3:;
wr(s->r,136,4,(rd(s->r,136,4)+((U)UINT64_C(0x1))));
L_1803ff2b7_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ff2b7_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff2b7_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803ff2b7_7:;
wr(s->u,20,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803ff2b7_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ff2b7_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ff2b7_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ff2b7_11:;
/* 1803ff2bb: subss xmm9, xmm0 */
L_1803ff2bb_0:;
L_1803ff2bb_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff2bb_2:;
/* 1803ff2c0: movaps xmm0, xmm2 */
L_1803ff2c0_0:;
L_1803ff2c0_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803ff2c0_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803ff2c0_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803ff2c0_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803ff2c0_5:;
/* 1803ff2c3: addss xmm5, xmm8 */
L_1803ff2c3_0:;
L_1803ff2c3_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff2c3_2:;
/* 1803ff2c8: movss xmm8, dword ptr [rcx] */
L_1803ff2c8_0:;
L_1803ff2c8_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803ff2c8_2:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ff2c8_3:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff2c8_4:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff2c8_5:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff2c8_6:;
/* 1803ff2cd: movaps xmm7, xmm8 */
L_1803ff2cd_0:;
L_1803ff2cd_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803ff2cd_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803ff2cd_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803ff2cd_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803ff2cd_5:;
/* 1803ff2d1: addss xmm3, xmm9 */
L_1803ff2d1_0:;
L_1803ff2d1_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ff2d1_2:;
/* 1803ff2d6: subss xmm4, xmm9 */
L_1803ff2d6_0:;
L_1803ff2d6_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ff2d6_2:;
/* 1803ff2db: addss xmm0, xmm5 */
L_1803ff2db_0:;
L_1803ff2db_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff2db_2:;
/* 1803ff2df: subss xmm2, xmm5 */
L_1803ff2df_0:;
L_1803ff2df_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ff2df_2:;
return UINT64_C(0x1803ff2e3);
}
uint64_t b_1803ff269(CPU*s){
/* 1803ff269: mulss xmm0, xmm3 */
L_1803ff269_0:;
L_1803ff269_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff269_2:;
/* 1803ff26d: movss xmm3, dword ptr [r10 + 0xc] */
L_1803ff26d_0:;
L_1803ff26d_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0xc))));
L_1803ff26d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff26d_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803ff26d_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff26d_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff26d_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff26d_7:;
/* 1803ff273: addss xmm2, xmm5 */
L_1803ff273_0:;
L_1803ff273_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff273_2:;
/* 1803ff277: movss xmm5, dword ptr [r10] */
L_1803ff277_0:;
L_1803ff277_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,144,8),4));
L_1803ff277_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803ff277_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff277_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff277_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff277_6:;
/* 1803ff27c: mulss xmm6, xmm5 */
L_1803ff27c_0:;
L_1803ff27c_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803ff27c_2:;
/* 1803ff280: mulss xmm7, xmm5 */
L_1803ff280_0:;
L_1803ff280_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803ff280_2:;
/* 1803ff284: movss xmm5, dword ptr [rcx + 0x3000] */
L_1803ff284_0:;
L_1803ff284_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3000))));
L_1803ff284_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff284_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803ff284_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff284_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff284_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff284_7:;
/* 1803ff28c: movaps xmm9, xmm5 */
L_1803ff28c_0:;
L_1803ff28c_1:;
wr(s->r,5184,4,rd(s->r,4928,4));
L_1803ff28c_2:;
wr(s->r,5188,4,rd(s->r,4932,4));
L_1803ff28c_3:;
wr(s->r,5192,4,rd(s->r,4936,4));
L_1803ff28c_4:;
wr(s->r,5196,4,rd(s->r,4940,4));
L_1803ff28c_5:;
/* 1803ff290: mulss xmm5, xmm3 */
L_1803ff290_0:;
L_1803ff290_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff290_2:;
/* 1803ff294: subss xmm6, xmm0 */
L_1803ff294_0:;
L_1803ff294_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff294_2:;
/* 1803ff298: movaps xmm0, xmm8 */
L_1803ff298_0:;
L_1803ff298_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ff298_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ff298_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ff298_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ff298_5:;
/* 1803ff29c: mulss xmm0, xmm3 */
L_1803ff29c_0:;
L_1803ff29c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff29c_2:;
/* 1803ff2a0: movaps xmm3, xmm4 */
L_1803ff2a0_0:;
L_1803ff2a0_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803ff2a0_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803ff2a0_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803ff2a0_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803ff2a0_5:;
/* 1803ff2a3: addss xmm1, xmm7 */
L_1803ff2a3_0:;
L_1803ff2a3_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ff2a3_2:;
/* 1803ff2a7: movss xmm7, dword ptr [r10 + 8] */
L_1803ff2a7_0:;
L_1803ff2a7_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x8))));
L_1803ff2a7_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff2a7_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803ff2a7_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff2a7_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff2a7_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff2a7_7:;
/* 1803ff2ad: mulss xmm9, xmm7 */
L_1803ff2ad_0:;
L_1803ff2ad_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ff2ad_2:;
/* 1803ff2b2: mulss xmm8, xmm7 */
L_1803ff2b2_0:;
L_1803ff2b2_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ff2b2_2:;
/* 1803ff2b7: add r9d, 1 */
L_1803ff2b7_0:;
L_1803ff2b7_1:;
wr(s->r,512,1,(((rd(s->r,136,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,136,4)));
L_1803ff2b7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),((U)UINT64_C(0x1)),4,0));
L_1803ff2b7_3:;
wr(s->r,136,4,(rd(s->r,136,4)+((U)UINT64_C(0x1))));
L_1803ff2b7_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ff2b7_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff2b7_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803ff2b7_7:;
wr(s->u,20,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803ff2b7_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ff2b7_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ff2b7_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ff2b7_11:;
/* 1803ff2bb: subss xmm9, xmm0 */
L_1803ff2bb_0:;
L_1803ff2bb_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff2bb_2:;
/* 1803ff2c0: movaps xmm0, xmm2 */
L_1803ff2c0_0:;
L_1803ff2c0_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803ff2c0_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803ff2c0_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803ff2c0_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803ff2c0_5:;
/* 1803ff2c3: addss xmm5, xmm8 */
L_1803ff2c3_0:;
L_1803ff2c3_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff2c3_2:;
/* 1803ff2c8: movss xmm8, dword ptr [rcx] */
L_1803ff2c8_0:;
L_1803ff2c8_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803ff2c8_2:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ff2c8_3:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff2c8_4:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff2c8_5:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff2c8_6:;
/* 1803ff2cd: movaps xmm7, xmm8 */
L_1803ff2cd_0:;
L_1803ff2cd_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803ff2cd_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803ff2cd_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803ff2cd_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803ff2cd_5:;
/* 1803ff2d1: addss xmm3, xmm9 */
L_1803ff2d1_0:;
L_1803ff2d1_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ff2d1_2:;
/* 1803ff2d6: subss xmm4, xmm9 */
L_1803ff2d6_0:;
L_1803ff2d6_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ff2d6_2:;
/* 1803ff2db: addss xmm0, xmm5 */
L_1803ff2db_0:;
L_1803ff2db_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff2db_2:;
/* 1803ff2df: subss xmm2, xmm5 */
L_1803ff2df_0:;
L_1803ff2df_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ff2df_2:;
/* 1803ff2e3: addss xmm7, xmm6 */
L_1803ff2e3_0:;
L_1803ff2e3_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803ff2e3_2:;
/* 1803ff2e7: subss xmm8, xmm6 */
L_1803ff2e7_0:;
L_1803ff2e7_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803ff2e7_2:;
/* 1803ff2ec: movss xmm6, dword ptr [rcx + 4] */
L_1803ff2ec_0:;
L_1803ff2ec_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803ff2ec_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff2ec_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803ff2ec_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ff2ec_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ff2ec_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ff2ec_7:;
/* 1803ff2f1: movaps xmm5, xmm6 */
L_1803ff2f1_0:;
L_1803ff2f1_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803ff2f1_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803ff2f1_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803ff2f1_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803ff2f1_5:;
/* 1803ff2f4: subss xmm6, xmm1 */
L_1803ff2f4_0:;
L_1803ff2f4_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff2f4_2:;
return UINT64_C(0x1803ff2f8);
}
uint64_t b_1803ff29c(CPU*s){
/* 1803ff29c: mulss xmm0, xmm3 */
L_1803ff29c_0:;
L_1803ff29c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff29c_2:;
/* 1803ff2a0: movaps xmm3, xmm4 */
L_1803ff2a0_0:;
L_1803ff2a0_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803ff2a0_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803ff2a0_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803ff2a0_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803ff2a0_5:;
/* 1803ff2a3: addss xmm1, xmm7 */
L_1803ff2a3_0:;
L_1803ff2a3_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ff2a3_2:;
/* 1803ff2a7: movss xmm7, dword ptr [r10 + 8] */
L_1803ff2a7_0:;
L_1803ff2a7_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x8))));
L_1803ff2a7_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff2a7_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803ff2a7_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff2a7_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff2a7_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff2a7_7:;
/* 1803ff2ad: mulss xmm9, xmm7 */
L_1803ff2ad_0:;
L_1803ff2ad_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ff2ad_2:;
/* 1803ff2b2: mulss xmm8, xmm7 */
L_1803ff2b2_0:;
L_1803ff2b2_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ff2b2_2:;
/* 1803ff2b7: add r9d, 1 */
L_1803ff2b7_0:;
L_1803ff2b7_1:;
wr(s->r,512,1,(((rd(s->r,136,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,136,4)));
L_1803ff2b7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),((U)UINT64_C(0x1)),4,0));
L_1803ff2b7_3:;
wr(s->r,136,4,(rd(s->r,136,4)+((U)UINT64_C(0x1))));
L_1803ff2b7_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ff2b7_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff2b7_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803ff2b7_7:;
wr(s->u,20,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803ff2b7_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ff2b7_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ff2b7_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ff2b7_11:;
/* 1803ff2bb: subss xmm9, xmm0 */
L_1803ff2bb_0:;
L_1803ff2bb_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff2bb_2:;
/* 1803ff2c0: movaps xmm0, xmm2 */
L_1803ff2c0_0:;
L_1803ff2c0_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803ff2c0_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803ff2c0_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803ff2c0_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803ff2c0_5:;
/* 1803ff2c3: addss xmm5, xmm8 */
L_1803ff2c3_0:;
L_1803ff2c3_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff2c3_2:;
/* 1803ff2c8: movss xmm8, dword ptr [rcx] */
L_1803ff2c8_0:;
L_1803ff2c8_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803ff2c8_2:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ff2c8_3:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff2c8_4:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff2c8_5:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff2c8_6:;
/* 1803ff2cd: movaps xmm7, xmm8 */
L_1803ff2cd_0:;
L_1803ff2cd_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803ff2cd_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803ff2cd_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803ff2cd_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803ff2cd_5:;
/* 1803ff2d1: addss xmm3, xmm9 */
L_1803ff2d1_0:;
L_1803ff2d1_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ff2d1_2:;
/* 1803ff2d6: subss xmm4, xmm9 */
L_1803ff2d6_0:;
L_1803ff2d6_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ff2d6_2:;
/* 1803ff2db: addss xmm0, xmm5 */
L_1803ff2db_0:;
L_1803ff2db_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff2db_2:;
/* 1803ff2df: subss xmm2, xmm5 */
L_1803ff2df_0:;
L_1803ff2df_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ff2df_2:;
/* 1803ff2e3: addss xmm7, xmm6 */
L_1803ff2e3_0:;
L_1803ff2e3_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803ff2e3_2:;
/* 1803ff2e7: subss xmm8, xmm6 */
L_1803ff2e7_0:;
L_1803ff2e7_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803ff2e7_2:;
/* 1803ff2ec: movss xmm6, dword ptr [rcx + 4] */
L_1803ff2ec_0:;
L_1803ff2ec_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803ff2ec_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff2ec_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803ff2ec_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ff2ec_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ff2ec_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ff2ec_7:;
/* 1803ff2f1: movaps xmm5, xmm6 */
L_1803ff2f1_0:;
L_1803ff2f1_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803ff2f1_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803ff2f1_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803ff2f1_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803ff2f1_5:;
/* 1803ff2f4: subss xmm6, xmm1 */
L_1803ff2f4_0:;
L_1803ff2f4_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff2f4_2:;
/* 1803ff2f8: cmp r9d, 0x1ff */
L_1803ff2f8_0:;
L_1803ff2f8_1:;
wr(s->u,26,4,rd(s->r,136,4));
L_1803ff2f8_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0x1ff))));
L_1803ff2f8_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0x1ff)),4,1));
L_1803ff2f8_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0x1ff))));
L_1803ff2f8_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff2f8_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803ff2f8_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803ff2f8_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ff2f8_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ff2f8_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ff2f8_11:;
/* 1803ff2ff: addss xmm5, xmm1 */
L_1803ff2ff_0:;
L_1803ff2ff_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff2ff_2:;
/* 1803ff303: movaps xmm1, xmm7 */
L_1803ff303_0:;
L_1803ff303_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803ff303_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803ff303_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803ff303_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803ff303_5:;
/* 1803ff306: subss xmm7, xmm3 */
L_1803ff306_0:;
L_1803ff306_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ff306_2:;
/* 1803ff30a: movss dword ptr [rcx + 0x2000], xmm7 */
L_1803ff30a_0:;
L_1803ff30a_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2000))));
L_1803ff30a_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803ff30a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff30a_4:;
/* 1803ff312: addss xmm1, xmm3 */
L_1803ff312_0:;
L_1803ff312_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff312_2:;
/* 1803ff316: movss dword ptr [rcx], xmm1 */
L_1803ff316_0:;
L_1803ff316_1:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ff316_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,16,4));
L_1803ff316_3:;
/* 1803ff31a: movaps xmm1, xmm5 */
L_1803ff31a_0:;
L_1803ff31a_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803ff31a_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803ff31a_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803ff31a_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803ff31a_5:;
/* 1803ff31d: subss xmm5, xmm0 */
L_1803ff31d_0:;
L_1803ff31d_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff31d_2:;
/* 1803ff321: movss dword ptr [rcx + 0x2004], xmm5 */
L_1803ff321_0:;
L_1803ff321_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2004))));
L_1803ff321_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803ff321_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff321_4:;
/* 1803ff329: addss xmm1, xmm0 */
L_1803ff329_0:;
L_1803ff329_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff329_2:;
return UINT64_C(0x1803ff32d);
}
uint64_t b_1803ff2e3(CPU*s){
/* 1803ff2e3: addss xmm7, xmm6 */
L_1803ff2e3_0:;
L_1803ff2e3_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803ff2e3_2:;
/* 1803ff2e7: subss xmm8, xmm6 */
L_1803ff2e7_0:;
L_1803ff2e7_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803ff2e7_2:;
/* 1803ff2ec: movss xmm6, dword ptr [rcx + 4] */
L_1803ff2ec_0:;
L_1803ff2ec_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803ff2ec_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff2ec_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803ff2ec_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ff2ec_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ff2ec_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ff2ec_7:;
/* 1803ff2f1: movaps xmm5, xmm6 */
L_1803ff2f1_0:;
L_1803ff2f1_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803ff2f1_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803ff2f1_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803ff2f1_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803ff2f1_5:;
/* 1803ff2f4: subss xmm6, xmm1 */
L_1803ff2f4_0:;
L_1803ff2f4_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff2f4_2:;
/* 1803ff2f8: cmp r9d, 0x1ff */
L_1803ff2f8_0:;
L_1803ff2f8_1:;
wr(s->u,26,4,rd(s->r,136,4));
L_1803ff2f8_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0x1ff))));
L_1803ff2f8_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0x1ff)),4,1));
L_1803ff2f8_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0x1ff))));
L_1803ff2f8_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff2f8_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803ff2f8_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803ff2f8_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ff2f8_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ff2f8_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ff2f8_11:;
/* 1803ff2ff: addss xmm5, xmm1 */
L_1803ff2ff_0:;
L_1803ff2ff_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff2ff_2:;
/* 1803ff303: movaps xmm1, xmm7 */
L_1803ff303_0:;
L_1803ff303_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803ff303_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803ff303_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803ff303_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803ff303_5:;
/* 1803ff306: subss xmm7, xmm3 */
L_1803ff306_0:;
L_1803ff306_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ff306_2:;
/* 1803ff30a: movss dword ptr [rcx + 0x2000], xmm7 */
L_1803ff30a_0:;
L_1803ff30a_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2000))));
L_1803ff30a_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803ff30a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff30a_4:;
/* 1803ff312: addss xmm1, xmm3 */
L_1803ff312_0:;
L_1803ff312_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff312_2:;
/* 1803ff316: movss dword ptr [rcx], xmm1 */
L_1803ff316_0:;
L_1803ff316_1:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ff316_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,16,4));
L_1803ff316_3:;
/* 1803ff31a: movaps xmm1, xmm5 */
L_1803ff31a_0:;
L_1803ff31a_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803ff31a_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803ff31a_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803ff31a_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803ff31a_5:;
/* 1803ff31d: subss xmm5, xmm0 */
L_1803ff31d_0:;
L_1803ff31d_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff31d_2:;
/* 1803ff321: movss dword ptr [rcx + 0x2004], xmm5 */
L_1803ff321_0:;
L_1803ff321_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2004))));
L_1803ff321_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803ff321_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff321_4:;
/* 1803ff329: addss xmm1, xmm0 */
L_1803ff329_0:;
L_1803ff329_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff329_2:;
/* 1803ff32d: movss dword ptr [rcx + 4], xmm1 */
L_1803ff32d_0:;
L_1803ff32d_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803ff32d_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ff32d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ff32d_4:;
/* 1803ff332: movaps xmm0, xmm8 */
L_1803ff332_0:;
L_1803ff332_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ff332_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ff332_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ff332_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ff332_5:;
/* 1803ff336: subss xmm8, xmm2 */
L_1803ff336_0:;
L_1803ff336_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff336_2:;
/* 1803ff33b: movss dword ptr [rcx + 0x3000], xmm8 */
L_1803ff33b_0:;
L_1803ff33b_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3000))));
L_1803ff33b_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ff33b_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff33b_4:;
/* 1803ff344: addss xmm0, xmm2 */
L_1803ff344_0:;
L_1803ff344_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff344_2:;
/* 1803ff348: movss dword ptr [rcx + 0x1000], xmm0 */
L_1803ff348_0:;
L_1803ff348_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1000))));
L_1803ff348_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ff348_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff348_4:;
/* 1803ff350: movaps xmm0, xmm6 */
L_1803ff350_0:;
L_1803ff350_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803ff350_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803ff350_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803ff350_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803ff350_5:;
/* 1803ff353: addss xmm6, xmm4 */
L_1803ff353_0:;
L_1803ff353_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ff353_2:;
/* 1803ff357: movss dword ptr [rcx + 0x3004], xmm6 */
L_1803ff357_0:;
L_1803ff357_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3004))));
L_1803ff357_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803ff357_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff357_4:;
/* 1803ff35f: subss xmm0, xmm4 */
L_1803ff35f_0:;
L_1803ff35f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ff35f_2:;
/* 1803ff363: movss dword ptr [rcx + 0x1004], xmm0 */
L_1803ff363_0:;
L_1803ff363_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1004))));
L_1803ff363_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ff363_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff363_4:;
/* 1803ff36b: jb 0x1803ff1ff */
L_1803ff36b_0:;
L_1803ff36b_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ff1ff);}
L_1803ff36b_2:;
return UINT64_C(0x1803ff371);
}
uint64_t b_1803ff2f8(CPU*s){
/* 1803ff2f8: cmp r9d, 0x1ff */
L_1803ff2f8_0:;
L_1803ff2f8_1:;
wr(s->u,26,4,rd(s->r,136,4));
L_1803ff2f8_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0x1ff))));
L_1803ff2f8_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0x1ff)),4,1));
L_1803ff2f8_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0x1ff))));
L_1803ff2f8_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff2f8_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803ff2f8_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803ff2f8_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ff2f8_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ff2f8_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ff2f8_11:;
/* 1803ff2ff: addss xmm5, xmm1 */
L_1803ff2ff_0:;
L_1803ff2ff_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff2ff_2:;
/* 1803ff303: movaps xmm1, xmm7 */
L_1803ff303_0:;
L_1803ff303_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803ff303_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803ff303_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803ff303_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803ff303_5:;
/* 1803ff306: subss xmm7, xmm3 */
L_1803ff306_0:;
L_1803ff306_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ff306_2:;
/* 1803ff30a: movss dword ptr [rcx + 0x2000], xmm7 */
L_1803ff30a_0:;
L_1803ff30a_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2000))));
L_1803ff30a_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803ff30a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff30a_4:;
/* 1803ff312: addss xmm1, xmm3 */
L_1803ff312_0:;
L_1803ff312_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff312_2:;
/* 1803ff316: movss dword ptr [rcx], xmm1 */
L_1803ff316_0:;
L_1803ff316_1:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ff316_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,16,4));
L_1803ff316_3:;
/* 1803ff31a: movaps xmm1, xmm5 */
L_1803ff31a_0:;
L_1803ff31a_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803ff31a_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803ff31a_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803ff31a_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803ff31a_5:;
/* 1803ff31d: subss xmm5, xmm0 */
L_1803ff31d_0:;
L_1803ff31d_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff31d_2:;
/* 1803ff321: movss dword ptr [rcx + 0x2004], xmm5 */
L_1803ff321_0:;
L_1803ff321_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2004))));
L_1803ff321_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803ff321_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff321_4:;
/* 1803ff329: addss xmm1, xmm0 */
L_1803ff329_0:;
L_1803ff329_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff329_2:;
/* 1803ff32d: movss dword ptr [rcx + 4], xmm1 */
L_1803ff32d_0:;
L_1803ff32d_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803ff32d_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ff32d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ff32d_4:;
/* 1803ff332: movaps xmm0, xmm8 */
L_1803ff332_0:;
L_1803ff332_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ff332_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ff332_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ff332_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ff332_5:;
/* 1803ff336: subss xmm8, xmm2 */
L_1803ff336_0:;
L_1803ff336_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff336_2:;
/* 1803ff33b: movss dword ptr [rcx + 0x3000], xmm8 */
L_1803ff33b_0:;
L_1803ff33b_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3000))));
L_1803ff33b_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ff33b_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff33b_4:;
/* 1803ff344: addss xmm0, xmm2 */
L_1803ff344_0:;
L_1803ff344_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff344_2:;
/* 1803ff348: movss dword ptr [rcx + 0x1000], xmm0 */
L_1803ff348_0:;
L_1803ff348_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1000))));
L_1803ff348_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ff348_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff348_4:;
/* 1803ff350: movaps xmm0, xmm6 */
L_1803ff350_0:;
L_1803ff350_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803ff350_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803ff350_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803ff350_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803ff350_5:;
/* 1803ff353: addss xmm6, xmm4 */
L_1803ff353_0:;
L_1803ff353_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ff353_2:;
/* 1803ff357: movss dword ptr [rcx + 0x3004], xmm6 */
L_1803ff357_0:;
L_1803ff357_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3004))));
L_1803ff357_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803ff357_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff357_4:;
/* 1803ff35f: subss xmm0, xmm4 */
L_1803ff35f_0:;
L_1803ff35f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ff35f_2:;
/* 1803ff363: movss dword ptr [rcx + 0x1004], xmm0 */
L_1803ff363_0:;
L_1803ff363_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1004))));
L_1803ff363_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ff363_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff363_4:;
/* 1803ff36b: jb 0x1803ff1ff */
L_1803ff36b_0:;
L_1803ff36b_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ff1ff);}
L_1803ff36b_2:;
return UINT64_C(0x1803ff371);
}
uint64_t b_1803ff32d(CPU*s){
/* 1803ff32d: movss dword ptr [rcx + 4], xmm1 */
L_1803ff32d_0:;
L_1803ff32d_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803ff32d_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ff32d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ff32d_4:;
/* 1803ff332: movaps xmm0, xmm8 */
L_1803ff332_0:;
L_1803ff332_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ff332_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ff332_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ff332_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ff332_5:;
/* 1803ff336: subss xmm8, xmm2 */
L_1803ff336_0:;
L_1803ff336_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff336_2:;
/* 1803ff33b: movss dword ptr [rcx + 0x3000], xmm8 */
L_1803ff33b_0:;
L_1803ff33b_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3000))));
L_1803ff33b_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ff33b_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff33b_4:;
/* 1803ff344: addss xmm0, xmm2 */
L_1803ff344_0:;
L_1803ff344_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff344_2:;
/* 1803ff348: movss dword ptr [rcx + 0x1000], xmm0 */
L_1803ff348_0:;
L_1803ff348_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1000))));
L_1803ff348_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ff348_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff348_4:;
/* 1803ff350: movaps xmm0, xmm6 */
L_1803ff350_0:;
L_1803ff350_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803ff350_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803ff350_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803ff350_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803ff350_5:;
/* 1803ff353: addss xmm6, xmm4 */
L_1803ff353_0:;
L_1803ff353_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ff353_2:;
/* 1803ff357: movss dword ptr [rcx + 0x3004], xmm6 */
L_1803ff357_0:;
L_1803ff357_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3004))));
L_1803ff357_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803ff357_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff357_4:;
/* 1803ff35f: subss xmm0, xmm4 */
L_1803ff35f_0:;
L_1803ff35f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ff35f_2:;
/* 1803ff363: movss dword ptr [rcx + 0x1004], xmm0 */
L_1803ff363_0:;
L_1803ff363_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1004))));
L_1803ff363_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ff363_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff363_4:;
/* 1803ff36b: jb 0x1803ff1ff */
L_1803ff36b_0:;
L_1803ff36b_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ff1ff);}
L_1803ff36b_2:;
return UINT64_C(0x1803ff371);
}
uint64_t b_1803ff371(CPU*s){
/* 1803ff371: add rcx, 0x3008 */
L_1803ff371_0:;
L_1803ff371_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x3008)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ff371_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x3008)),8,0));
L_1803ff371_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x3008))));
L_1803ff371_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ff371_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ff371_6:;
wr(s->u,0,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ff371_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ff371_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ff371_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ff371_10:;
/* 1803ff378: add eax, 1 */
L_1803ff378_0:;
L_1803ff378_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ff378_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,0));
L_1803ff378_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x1))));
L_1803ff378_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ff378_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff378_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ff378_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ff378_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803ff378_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ff378_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ff378_11:;
/* 1803ff37b: cmp eax, edx */
L_1803ff37b_0:;
L_1803ff37b_1:;
wr(s->u,10,4,rd(s->r,16,4));
L_1803ff37b_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,10,4)));
L_1803ff37b_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,10,4),4,1));
L_1803ff37b_4:;
wr(s->u,14,4,(rd(s->r,0,4)-rd(s->u,10,4)));
L_1803ff37b_5:;
wr(s->r,519,1,(sx(rd(s->u,14,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff37b_6:;
wr(s->r,518,1,(rd(s->u,14,4)==((U)UINT64_C(0x0))));
L_1803ff37b_7:;
wr(s->u,0,4,(rd(s->u,14,4)&((U)UINT64_C(0xff))));
L_1803ff37b_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803ff37b_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ff37b_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ff37b_11:;
/* 1803ff37d: jb 0x1803ff119 */
L_1803ff37d_0:;
L_1803ff37d_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ff119);}
L_1803ff37d_2:;
return UINT64_C(0x1803ff383);
}
uint64_t b_1803ff383(CPU*s){
/* 1803ff383: jmp 0x1804002fc */
L_1803ff383_0:;
L_1803ff383_1:;
return UINT64_C(0x1804002fc);
L_1803ff383_2:;
return UINT64_C(0x1803ff388);
}
uint64_t b_1803ff388(CPU*s){
/* 1803ff388: mov r11d, edx */
L_1803ff388_0:;
L_1803ff388_1:;
wr(s->r,152,4,rd(s->r,16,4));
L_1803ff388_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ff388_3:;
/* 1803ff38b: sar r11d, 4 */
L_1803ff38b_0:;
L_1803ff38b_1:;
wr(s->u,45,4,(((U)UINT64_C(0x4))&((U)UINT64_C(0x1f))));
L_1803ff38b_2:;
wr(s->u,49,4,rd(s->r,152,4));
L_1803ff38b_3:;
wr(s->r,152,4,((rd(s->u,45,4)>=32)?(sx(rd(s->r,152,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,152,4),4)>>rd(s->u,45,4))));
L_1803ff38b_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ff38b_5:;
wr(s->u,30,1,(rd(s->u,45,4)==((U)UINT64_C(0x0))));
L_1803ff38b_6:;
wr(s->u,31,4,(rd(s->u,45,4)-((U)UINT64_C(0x1))));
L_1803ff38b_7:;
wr(s->u,35,4,((rd(s->u,31,4)>=32)?(sx(rd(s->u,49,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,49,4),4)>>rd(s->u,31,4))));
L_1803ff38b_8:;
wr(s->u,39,4,(rd(s->u,35,4)&((U)UINT64_C(0x1))));
L_1803ff38b_9:;
wr(s->u,43,1,(rd(s->u,39,4)!=((U)UINT64_C(0x0))));
L_1803ff38b_10:;
wr(s->u,0,1,rd(s->u,30,1));
L_1803ff38b_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ff38b_12:;
wr(s->u,2,1,(!rd(s->u,30,1)));
L_1803ff38b_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ff38b_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,43,1)));
L_1803ff38b_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ff38b_16:;
wr(s->u,44,1,(rd(s->u,45,4)==((U)UINT64_C(0x1))));
L_1803ff38b_17:;
wr(s->u,0,1,rd(s->u,44,1));
L_1803ff38b_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ff38b_19:;
wr(s->u,2,1,(!rd(s->u,44,1)));
L_1803ff38b_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ff38b_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ff38b_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ff38b_23:;
wr(s->u,11,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803ff38b_24:;
wr(s->u,12,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff38b_25:;
wr(s->u,13,1,(!rd(s->u,11,1)));
L_1803ff38b_26:;
wr(s->u,14,1,(rd(s->u,13,1)&rd(s->r,519,1)));
L_1803ff38b_27:;
wr(s->u,15,1,(rd(s->u,11,1)&rd(s->u,12,1)));
L_1803ff38b_28:;
wr(s->r,519,1,(rd(s->u,14,1)|rd(s->u,15,1)));
L_1803ff38b_29:;
wr(s->u,16,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803ff38b_30:;
wr(s->u,17,1,(!rd(s->u,11,1)));
L_1803ff38b_31:;
wr(s->u,18,1,(rd(s->u,17,1)&rd(s->r,518,1)));
L_1803ff38b_32:;
wr(s->u,19,1,(rd(s->u,11,1)&rd(s->u,16,1)));
L_1803ff38b_33:;
wr(s->r,518,1,(rd(s->u,18,1)|rd(s->u,19,1)));
L_1803ff38b_34:;
wr(s->u,20,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803ff38b_35:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ff38b_36:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ff38b_37:;
wr(s->u,26,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ff38b_38:;
wr(s->u,27,1,(!rd(s->u,11,1)));
L_1803ff38b_39:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,514,1)));
L_1803ff38b_40:;
wr(s->u,29,1,(rd(s->u,11,1)&rd(s->u,26,1)));
L_1803ff38b_41:;
wr(s->r,514,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803ff38b_42:;
/* 1803ff38f: test r11d, r11d */
L_1803ff38f_0:;
L_1803ff38f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ff38f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ff38f_3:;
wr(s->u,53,4,(rd(s->r,152,4)&rd(s->r,152,4)));
L_1803ff38f_4:;
wr(s->r,519,1,(sx(rd(s->u,53,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff38f_5:;
wr(s->r,518,1,(rd(s->u,53,4)==((U)UINT64_C(0x0))));
L_1803ff38f_6:;
wr(s->u,5,4,(rd(s->u,53,4)&((U)UINT64_C(0xff))));
L_1803ff38f_7:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803ff38f_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ff38f_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ff38f_10:;
/* 1803ff392: je 0x180400312 */
L_1803ff392_0:;
L_1803ff392_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180400312);}
L_1803ff392_2:;
return UINT64_C(0x1803ff398);
}
uint64_t b_1803ff398(CPU*s){
/* 1803ff398: mov r10, rcx */
L_1803ff398_0:;
L_1803ff398_1:;
wr(s->r,144,8,rd(s->r,8,8));
L_1803ff398_2:;
/* 1803ff39b: mov eax, r9d */
L_1803ff39b_0:;
L_1803ff39b_1:;
wr(s->r,0,4,rd(s->r,136,4));
L_1803ff39b_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ff39b_3:;
/* 1803ff39e: sar eax, 3 */
L_1803ff39e_0:;
L_1803ff39e_1:;
wr(s->u,47,4,(((U)UINT64_C(0x3))&((U)UINT64_C(0x1f))));
L_1803ff39e_2:;
wr(s->u,51,4,rd(s->r,0,4));
L_1803ff39e_3:;
wr(s->r,0,4,((rd(s->u,47,4)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,47,4))));
L_1803ff39e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ff39e_5:;
wr(s->u,32,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803ff39e_6:;
wr(s->u,33,4,(rd(s->u,47,4)-((U)UINT64_C(0x1))));
L_1803ff39e_7:;
wr(s->u,37,4,((rd(s->u,33,4)>=32)?(sx(rd(s->u,51,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,51,4),4)>>rd(s->u,33,4))));
L_1803ff39e_8:;
wr(s->u,41,4,(rd(s->u,37,4)&((U)UINT64_C(0x1))));
L_1803ff39e_9:;
wr(s->u,45,1,(rd(s->u,41,4)!=((U)UINT64_C(0x0))));
L_1803ff39e_10:;
wr(s->u,0,1,rd(s->u,32,1));
L_1803ff39e_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ff39e_12:;
wr(s->u,2,1,(!rd(s->u,32,1)));
L_1803ff39e_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ff39e_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,45,1)));
L_1803ff39e_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ff39e_16:;
wr(s->u,46,1,(rd(s->u,47,4)==((U)UINT64_C(0x1))));
L_1803ff39e_17:;
wr(s->u,0,1,rd(s->u,46,1));
L_1803ff39e_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ff39e_19:;
wr(s->u,2,1,(!rd(s->u,46,1)));
L_1803ff39e_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ff39e_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ff39e_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ff39e_23:;
wr(s->u,13,1,(rd(s->u,47,4)!=((U)UINT64_C(0x0))));
L_1803ff39e_24:;
wr(s->u,14,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff39e_25:;
wr(s->u,15,1,(!rd(s->u,13,1)));
L_1803ff39e_26:;
wr(s->u,16,1,(rd(s->u,15,1)&rd(s->r,519,1)));
L_1803ff39e_27:;
wr(s->u,17,1,(rd(s->u,13,1)&rd(s->u,14,1)));
L_1803ff39e_28:;
wr(s->r,519,1,(rd(s->u,16,1)|rd(s->u,17,1)));
L_1803ff39e_29:;
wr(s->u,18,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ff39e_30:;
wr(s->u,19,1,(!rd(s->u,13,1)));
L_1803ff39e_31:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,518,1)));
L_1803ff39e_32:;
wr(s->u,21,1,(rd(s->u,13,1)&rd(s->u,18,1)));
L_1803ff39e_33:;
wr(s->r,518,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803ff39e_34:;
wr(s->u,22,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ff39e_35:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803ff39e_36:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803ff39e_37:;
wr(s->u,28,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803ff39e_38:;
wr(s->u,29,1,(!rd(s->u,13,1)));
L_1803ff39e_39:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,514,1)));
L_1803ff39e_40:;
wr(s->u,31,1,(rd(s->u,13,1)&rd(s->u,28,1)));
L_1803ff39e_41:;
wr(s->r,514,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803ff39e_42:;
/* 1803ff3a1: movsxd rbp, eax */
L_1803ff3a1_0:;
L_1803ff3a1_1:;
wr(s->r,40,8,(U)sx(rd(s->r,0,4),4));
L_1803ff3a1_2:;
/* 1803ff3a4: mov eax, 1 */
L_1803ff3a4_0:;
L_1803ff3a4_1:;
wr(s->r,0,8,((U)UINT64_C(0x1)));
L_1803ff3a4_2:;
/* 1803ff3a9: test r11d, r11d */
L_1803ff3a9_0:;
L_1803ff3a9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ff3a9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ff3a9_3:;
wr(s->u,55,4,(rd(s->r,152,4)&rd(s->r,152,4)));
L_1803ff3a9_4:;
wr(s->r,519,1,(sx(rd(s->u,55,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff3a9_5:;
wr(s->r,518,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803ff3a9_6:;
wr(s->u,7,4,(rd(s->u,55,4)&((U)UINT64_C(0xff))));
L_1803ff3a9_7:;
wr(s->u,11,1,pop(rd(s->u,7,4),4));
L_1803ff3a9_8:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803ff3a9_9:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803ff3a9_10:;
/* 1803ff3ac: jle 0x1803ff808 */
L_1803ff3ac_0:;
L_1803ff3ac_1:;
wr(s->u,5,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ff3ac_2:;
wr(s->u,6,1,((rd(s->r,518,1)!=0)||(rd(s->u,5,1)!=0)));
L_1803ff3ac_3:;
if(rd(s->u,6,1)){return UINT64_C(0x1803ff808);}
L_1803ff3ac_4:;
return UINT64_C(0x1803ff3b2);
}
uint64_t b_1803ff3b2(CPU*s){
/* 1803ff3b2: movaps xmmword ptr [rsp + 0x60], xmm6 */
L_1803ff3b2_0:;
L_1803ff3b2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803ff3b2_2:;
wr(s->u,20,16,rd(s->r,4992,16));
L_1803ff3b2_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803ff3b2_4:;
/* 1803ff3b7: movaps xmmword ptr [rsp + 0x50], xmm7 */
L_1803ff3b7_0:;
L_1803ff3b7_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ff3b7_2:;
wr(s->u,20,16,rd(s->r,5056,16));
L_1803ff3b7_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803ff3b7_4:;
/* 1803ff3bc: movaps xmmword ptr [rsp + 0x40], xmm8 */
L_1803ff3bc_0:;
L_1803ff3bc_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ff3bc_2:;
wr(s->u,20,16,rd(s->r,5120,16));
L_1803ff3bc_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803ff3bc_4:;
/* 1803ff3c2: movaps xmmword ptr [rsp + 0x30], xmm9 */
L_1803ff3c2_0:;
L_1803ff3c2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ff3c2_2:;
wr(s->u,20,16,rd(s->r,5184,16));
L_1803ff3c2_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803ff3c2_4:;
/* 1803ff3c8: movss xmm5, dword ptr [r10] */
L_1803ff3c8_0:;
L_1803ff3c8_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,144,8),4));
L_1803ff3c8_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803ff3c8_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff3c8_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff3c8_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff3c8_6:;
/* 1803ff3cd: movaps xmm6, xmm5 */
L_1803ff3cd_0:;
L_1803ff3cd_1:;
wr(s->r,4992,4,rd(s->r,4928,4));
L_1803ff3cd_2:;
wr(s->r,4996,4,rd(s->r,4932,4));
L_1803ff3cd_3:;
wr(s->r,5000,4,rd(s->r,4936,4));
L_1803ff3cd_4:;
wr(s->r,5004,4,rd(s->r,4940,4));
L_1803ff3cd_5:;
/* 1803ff3d0: movss xmm0, dword ptr [r10 + 0x20] */
L_1803ff3d0_0:;
L_1803ff3d0_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x20))));
L_1803ff3d0_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff3d0_3:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803ff3d0_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ff3d0_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ff3d0_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ff3d0_7:;
/* 1803ff3d6: movss xmm7, dword ptr [r10 + 4] */
L_1803ff3d6_0:;
L_1803ff3d6_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803ff3d6_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff3d6_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803ff3d6_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff3d6_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff3d6_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff3d6_7:;
/* 1803ff3dc: movaps xmm4, xmm7 */
L_1803ff3dc_0:;
L_1803ff3dc_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803ff3dc_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803ff3dc_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803ff3dc_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803ff3dc_5:;
/* 1803ff3df: movss xmm1, dword ptr [r10 + 0x24] */
L_1803ff3df_0:;
L_1803ff3df_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x24))));
L_1803ff3df_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff3df_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803ff3df_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff3df_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff3df_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff3df_7:;
/* 1803ff3e5: movss xmm3, dword ptr [r10 + 0x40] */
L_1803ff3e5_0:;
L_1803ff3e5_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x40))));
L_1803ff3e5_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff3e5_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803ff3e5_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff3e5_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff3e5_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff3e5_7:;
/* 1803ff3eb: movss xmm8, dword ptr [r10 + 0x60] */
L_1803ff3eb_0:;
L_1803ff3eb_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x60))));
L_1803ff3eb_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff3eb_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ff3eb_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff3eb_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff3eb_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff3eb_7:;
/* 1803ff3f1: movss xmm2, dword ptr [r10 + 0x44] */
L_1803ff3f1_0:;
L_1803ff3f1_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x44))));
L_1803ff3f1_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff3f1_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803ff3f1_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff3f1_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff3f1_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff3f1_7:;
/* 1803ff3f7: movss xmm9, dword ptr [r10 + 0x64] */
L_1803ff3f7_0:;
L_1803ff3f7_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x64))));
L_1803ff3f7_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff3f7_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803ff3f7_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ff3f7_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ff3f7_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ff3f7_7:;
/* 1803ff3fd: addss xmm6, xmm0 */
L_1803ff3fd_0:;
L_1803ff3fd_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff3fd_2:;
/* 1803ff401: addss xmm4, xmm1 */
L_1803ff401_0:;
L_1803ff401_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff401_2:;
/* 1803ff405: subss xmm5, xmm0 */
L_1803ff405_0:;
L_1803ff405_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff405_2:;
/* 1803ff409: movaps xmm0, xmm3 */
L_1803ff409_0:;
L_1803ff409_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ff409_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ff409_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ff409_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ff409_5:;
/* 1803ff40c: subss xmm7, xmm1 */
L_1803ff40c_0:;
L_1803ff40c_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff40c_2:;
/* 1803ff410: movaps xmm1, xmm2 */
L_1803ff410_0:;
L_1803ff410_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803ff410_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803ff410_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803ff410_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803ff410_5:;
/* 1803ff413: addss xmm0, xmm8 */
L_1803ff413_0:;
L_1803ff413_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff413_2:;
/* 1803ff418: subss xmm3, xmm8 */
L_1803ff418_0:;
L_1803ff418_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ff418_2:;
/* 1803ff41d: movaps xmm8, xmm6 */
L_1803ff41d_0:;
L_1803ff41d_1:;
wr(s->r,5120,4,rd(s->r,4992,4));
L_1803ff41d_2:;
wr(s->r,5124,4,rd(s->r,4996,4));
L_1803ff41d_3:;
wr(s->r,5128,4,rd(s->r,5000,4));
L_1803ff41d_4:;
wr(s->r,5132,4,rd(s->r,5004,4));
L_1803ff41d_5:;
/* 1803ff421: addss xmm1, xmm9 */
L_1803ff421_0:;
L_1803ff421_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ff421_2:;
/* 1803ff426: subss xmm2, xmm9 */
L_1803ff426_0:;
L_1803ff426_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ff426_2:;
/* 1803ff42b: movss xmm9, dword ptr [r10 + 0x48] */
L_1803ff42b_0:;
L_1803ff42b_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x48))));
L_1803ff42b_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff42b_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803ff42b_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ff42b_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ff42b_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ff42b_7:;
/* 1803ff431: addss xmm8, xmm0 */
L_1803ff431_0:;
L_1803ff431_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff431_2:;
/* 1803ff436: movss dword ptr [r10], xmm8 */
L_1803ff436_0:;
L_1803ff436_1:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ff436_2:;
mw((uint64_t)rd(s->r,144,8),4,rd(s->u,16,4));
L_1803ff436_3:;
/* 1803ff43b: movaps xmm8, xmm4 */
L_1803ff43b_0:;
L_1803ff43b_1:;
wr(s->r,5120,4,rd(s->r,4864,4));
L_1803ff43b_2:;
wr(s->r,5124,4,rd(s->r,4868,4));
L_1803ff43b_3:;
wr(s->r,5128,4,rd(s->r,4872,4));
L_1803ff43b_4:;
wr(s->r,5132,4,rd(s->r,4876,4));
L_1803ff43b_5:;
/* 1803ff43f: subss xmm6, xmm0 */
L_1803ff43f_0:;
L_1803ff43f_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff43f_2:;
/* 1803ff443: movss dword ptr [r10 + 0x40], xmm6 */
L_1803ff443_0:;
L_1803ff443_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x40))));
L_1803ff443_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803ff443_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ff443_4:;
/* 1803ff449: movaps xmm0, xmm5 */
L_1803ff449_0:;
L_1803ff449_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ff449_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ff449_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ff449_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ff449_5:;
return UINT64_C(0x1803ff44c);
}
uint64_t b_1803ff3c8(CPU*s){
/* 1803ff3c8: movss xmm5, dword ptr [r10] */
L_1803ff3c8_0:;
L_1803ff3c8_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,144,8),4));
L_1803ff3c8_2:;
wr(s->r,4928,4,rd(s->u,8,4));
L_1803ff3c8_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff3c8_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff3c8_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff3c8_6:;
/* 1803ff3cd: movaps xmm6, xmm5 */
L_1803ff3cd_0:;
L_1803ff3cd_1:;
wr(s->r,4992,4,rd(s->r,4928,4));
L_1803ff3cd_2:;
wr(s->r,4996,4,rd(s->r,4932,4));
L_1803ff3cd_3:;
wr(s->r,5000,4,rd(s->r,4936,4));
L_1803ff3cd_4:;
wr(s->r,5004,4,rd(s->r,4940,4));
L_1803ff3cd_5:;
/* 1803ff3d0: movss xmm0, dword ptr [r10 + 0x20] */
L_1803ff3d0_0:;
L_1803ff3d0_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x20))));
L_1803ff3d0_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff3d0_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803ff3d0_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ff3d0_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ff3d0_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ff3d0_7:;
/* 1803ff3d6: movss xmm7, dword ptr [r10 + 4] */
L_1803ff3d6_0:;
L_1803ff3d6_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803ff3d6_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff3d6_3:;
wr(s->r,5056,4,rd(s->u,8,4));
L_1803ff3d6_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff3d6_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff3d6_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff3d6_7:;
/* 1803ff3dc: movaps xmm4, xmm7 */
L_1803ff3dc_0:;
L_1803ff3dc_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803ff3dc_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803ff3dc_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803ff3dc_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803ff3dc_5:;
/* 1803ff3df: movss xmm1, dword ptr [r10 + 0x24] */
L_1803ff3df_0:;
L_1803ff3df_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x24))));
L_1803ff3df_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff3df_3:;
wr(s->r,4672,4,rd(s->u,8,4));
L_1803ff3df_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff3df_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff3df_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff3df_7:;
/* 1803ff3e5: movss xmm3, dword ptr [r10 + 0x40] */
L_1803ff3e5_0:;
L_1803ff3e5_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x40))));
L_1803ff3e5_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff3e5_3:;
wr(s->r,4800,4,rd(s->u,8,4));
L_1803ff3e5_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff3e5_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff3e5_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff3e5_7:;
/* 1803ff3eb: movss xmm8, dword ptr [r10 + 0x60] */
L_1803ff3eb_0:;
L_1803ff3eb_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x60))));
L_1803ff3eb_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff3eb_3:;
wr(s->r,5120,4,rd(s->u,8,4));
L_1803ff3eb_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff3eb_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff3eb_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff3eb_7:;
/* 1803ff3f1: movss xmm2, dword ptr [r10 + 0x44] */
L_1803ff3f1_0:;
L_1803ff3f1_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x44))));
L_1803ff3f1_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff3f1_3:;
wr(s->r,4736,4,rd(s->u,8,4));
L_1803ff3f1_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff3f1_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff3f1_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff3f1_7:;
/* 1803ff3f7: movss xmm9, dword ptr [r10 + 0x64] */
L_1803ff3f7_0:;
L_1803ff3f7_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x64))));
L_1803ff3f7_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff3f7_3:;
wr(s->r,5184,4,rd(s->u,8,4));
L_1803ff3f7_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ff3f7_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ff3f7_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ff3f7_7:;
/* 1803ff3fd: addss xmm6, xmm0 */
L_1803ff3fd_0:;
L_1803ff3fd_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff3fd_2:;
/* 1803ff401: addss xmm4, xmm1 */
L_1803ff401_0:;
L_1803ff401_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff401_2:;
/* 1803ff405: subss xmm5, xmm0 */
L_1803ff405_0:;
L_1803ff405_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff405_2:;
/* 1803ff409: movaps xmm0, xmm3 */
L_1803ff409_0:;
L_1803ff409_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ff409_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ff409_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ff409_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ff409_5:;
/* 1803ff40c: subss xmm7, xmm1 */
L_1803ff40c_0:;
L_1803ff40c_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff40c_2:;
/* 1803ff410: movaps xmm1, xmm2 */
L_1803ff410_0:;
L_1803ff410_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803ff410_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803ff410_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803ff410_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803ff410_5:;
/* 1803ff413: addss xmm0, xmm8 */
L_1803ff413_0:;
L_1803ff413_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff413_2:;
/* 1803ff418: subss xmm3, xmm8 */
L_1803ff418_0:;
L_1803ff418_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ff418_2:;
/* 1803ff41d: movaps xmm8, xmm6 */
L_1803ff41d_0:;
L_1803ff41d_1:;
wr(s->r,5120,4,rd(s->r,4992,4));
L_1803ff41d_2:;
wr(s->r,5124,4,rd(s->r,4996,4));
L_1803ff41d_3:;
wr(s->r,5128,4,rd(s->r,5000,4));
L_1803ff41d_4:;
wr(s->r,5132,4,rd(s->r,5004,4));
L_1803ff41d_5:;
/* 1803ff421: addss xmm1, xmm9 */
L_1803ff421_0:;
L_1803ff421_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ff421_2:;
/* 1803ff426: subss xmm2, xmm9 */
L_1803ff426_0:;
L_1803ff426_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ff426_2:;
/* 1803ff42b: movss xmm9, dword ptr [r10 + 0x48] */
L_1803ff42b_0:;
L_1803ff42b_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x48))));
L_1803ff42b_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff42b_3:;
wr(s->r,5184,4,rd(s->u,8,4));
L_1803ff42b_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ff42b_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ff42b_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ff42b_7:;
/* 1803ff431: addss xmm8, xmm0 */
L_1803ff431_0:;
L_1803ff431_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff431_2:;
/* 1803ff436: movss dword ptr [r10], xmm8 */
L_1803ff436_0:;
L_1803ff436_1:;
wr(s->u,8,4,rd(s->r,5120,4));
L_1803ff436_2:;
mw((uint64_t)rd(s->r,144,8),4,rd(s->u,8,4));
L_1803ff436_3:;
/* 1803ff43b: movaps xmm8, xmm4 */
L_1803ff43b_0:;
L_1803ff43b_1:;
wr(s->r,5120,4,rd(s->r,4864,4));
L_1803ff43b_2:;
wr(s->r,5124,4,rd(s->r,4868,4));
L_1803ff43b_3:;
wr(s->r,5128,4,rd(s->r,4872,4));
L_1803ff43b_4:;
wr(s->r,5132,4,rd(s->r,4876,4));
L_1803ff43b_5:;
/* 1803ff43f: subss xmm6, xmm0 */
L_1803ff43f_0:;
L_1803ff43f_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff43f_2:;
/* 1803ff443: movss dword ptr [r10 + 0x40], xmm6 */
L_1803ff443_0:;
L_1803ff443_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x40))));
L_1803ff443_2:;
wr(s->u,8,4,rd(s->r,4992,4));
L_1803ff443_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ff443_4:;
/* 1803ff449: movaps xmm0, xmm5 */
L_1803ff449_0:;
L_1803ff449_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ff449_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ff449_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ff449_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ff449_5:;
/* 1803ff44c: movss xmm6, dword ptr [r10 + 0x68] */
L_1803ff44c_0:;
L_1803ff44c_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x68))));
L_1803ff44c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff44c_3:;
wr(s->r,4992,4,rd(s->u,8,4));
L_1803ff44c_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ff44c_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ff44c_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ff44c_7:;
/* 1803ff452: addss xmm8, xmm1 */
L_1803ff452_0:;
L_1803ff452_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff452_2:;
/* 1803ff457: movss dword ptr [r10 + 4], xmm8 */
L_1803ff457_0:;
L_1803ff457_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803ff457_2:;
wr(s->u,8,4,rd(s->r,5120,4));
L_1803ff457_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ff457_4:;
/* 1803ff45d: movaps xmm8, xmm9 */
L_1803ff45d_0:;
L_1803ff45d_1:;
wr(s->r,5120,4,rd(s->r,5184,4));
L_1803ff45d_2:;
wr(s->r,5124,4,rd(s->r,5188,4));
L_1803ff45d_3:;
wr(s->r,5128,4,rd(s->r,5192,4));
L_1803ff45d_4:;
wr(s->r,5132,4,rd(s->r,5196,4));
L_1803ff45d_5:;
return UINT64_C(0x1803ff461);
}
uint64_t b_1803ff44c(CPU*s){
/* 1803ff44c: movss xmm6, dword ptr [r10 + 0x68] */
L_1803ff44c_0:;
L_1803ff44c_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x68))));
L_1803ff44c_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff44c_3:;
wr(s->r,4992,4,rd(s->u,48,4));
L_1803ff44c_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ff44c_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ff44c_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ff44c_7:;
/* 1803ff452: addss xmm8, xmm1 */
L_1803ff452_0:;
L_1803ff452_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff452_2:;
/* 1803ff457: movss dword ptr [r10 + 4], xmm8 */
L_1803ff457_0:;
L_1803ff457_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803ff457_2:;
wr(s->u,48,4,rd(s->r,5120,4));
L_1803ff457_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803ff457_4:;
/* 1803ff45d: movaps xmm8, xmm9 */
L_1803ff45d_0:;
L_1803ff45d_1:;
wr(s->r,5120,4,rd(s->r,5184,4));
L_1803ff45d_2:;
wr(s->r,5124,4,rd(s->r,5188,4));
L_1803ff45d_3:;
wr(s->r,5128,4,rd(s->r,5192,4));
L_1803ff45d_4:;
wr(s->r,5132,4,rd(s->r,5196,4));
L_1803ff45d_5:;
/* 1803ff461: subss xmm4, xmm1 */
L_1803ff461_0:;
L_1803ff461_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff461_2:;
/* 1803ff465: movss dword ptr [r10 + 0x44], xmm4 */
L_1803ff465_0:;
L_1803ff465_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x44))));
L_1803ff465_2:;
wr(s->u,48,4,rd(s->r,4864,4));
L_1803ff465_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803ff465_4:;
/* 1803ff46b: addss xmm0, xmm2 */
L_1803ff46b_0:;
L_1803ff46b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff46b_2:;
/* 1803ff46f: movss dword ptr [r10 + 0x20], xmm0 */
L_1803ff46f_0:;
L_1803ff46f_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x20))));
L_1803ff46f_2:;
wr(s->u,48,4,rd(s->r,4608,4));
L_1803ff46f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803ff46f_4:;
/* 1803ff475: movaps xmm0, xmm7 */
L_1803ff475_0:;
L_1803ff475_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ff475_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ff475_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ff475_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ff475_5:;
/* 1803ff478: subss xmm5, xmm2 */
L_1803ff478_0:;
L_1803ff478_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff478_2:;
/* 1803ff47c: movss dword ptr [r10 + 0x60], xmm5 */
L_1803ff47c_0:;
L_1803ff47c_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x60))));
L_1803ff47c_2:;
wr(s->u,48,4,rd(s->r,4928,4));
L_1803ff47c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803ff47c_4:;
/* 1803ff482: subss xmm0, xmm3 */
L_1803ff482_0:;
L_1803ff482_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ff482_2:;
/* 1803ff486: movss dword ptr [r10 + 0x24], xmm0 */
L_1803ff486_0:;
L_1803ff486_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x24))));
L_1803ff486_2:;
wr(s->u,48,4,rd(s->r,4608,4));
L_1803ff486_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803ff486_4:;
/* 1803ff48c: addss xmm7, xmm3 */
L_1803ff48c_0:;
L_1803ff48c_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff48c_2:;
/* 1803ff490: movss xmm3, dword ptr [r10 + 0x4c] */
L_1803ff490_0:;
L_1803ff490_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4c))));
L_1803ff490_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff490_3:;
wr(s->r,4800,4,rd(s->u,48,4));
L_1803ff490_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff490_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff490_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff490_7:;
/* 1803ff496: movss dword ptr [r10 + 0x64], xmm7 */
L_1803ff496_0:;
L_1803ff496_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x64))));
L_1803ff496_2:;
wr(s->u,48,4,rd(s->r,5056,4));
L_1803ff496_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803ff496_4:;
/* 1803ff49c: movaps xmm0, xmm3 */
L_1803ff49c_0:;
L_1803ff49c_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ff49c_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ff49c_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ff49c_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ff49c_5:;
/* 1803ff49f: movss xmm7, dword ptr [r10 + 0x6c] */
L_1803ff49f_0:;
L_1803ff49f_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x6c))));
L_1803ff49f_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff49f_3:;
wr(s->r,5056,4,rd(s->u,48,4));
L_1803ff49f_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff49f_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff49f_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff49f_7:;
/* 1803ff4a5: movss xmm2, dword ptr [r8 + rbp*4] */
L_1803ff4a5_0:;
L_1803ff4a5_1:;
wr(s->u,8,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff4a5_2:;
wr(s->u,16,8,(rd(s->r,128,8)+rd(s->u,8,8)));
L_1803ff4a5_3:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803ff4a5_4:;
wr(s->r,4736,4,rd(s->u,48,4));
L_1803ff4a5_5:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff4a5_6:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff4a5_7:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff4a5_8:;
/* 1803ff4ab: mulss xmm8, xmm2 */
L_1803ff4ab_0:;
L_1803ff4ab_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803ff4ab_2:;
/* 1803ff4b0: mulss xmm3, xmm2 */
L_1803ff4b0_0:;
L_1803ff4b0_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803ff4b0_2:;
/* 1803ff4b4: movss xmm1, dword ptr [r8 + rbp*4 + 4] */
L_1803ff4b4_0:;
L_1803ff4b4_1:;
wr(s->u,24,8,(((U)UINT64_C(0x4))+rd(s->r,128,8)));
L_1803ff4b4_2:;
wr(s->u,32,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff4b4_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803ff4b4_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803ff4b4_5:;
wr(s->r,4672,4,rd(s->u,48,4));
L_1803ff4b4_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff4b4_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff4b4_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff4b4_9:;
/* 1803ff4bb: mulss xmm0, xmm1 */
L_1803ff4bb_0:;
L_1803ff4bb_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ff4bb_2:;
/* 1803ff4bf: mulss xmm9, xmm1 */
L_1803ff4bf_0:;
L_1803ff4bf_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ff4bf_2:;
/* 1803ff4c4: movss xmm1, dword ptr [r8 + rbp*4 + 0x10] */
L_1803ff4c4_0:;
L_1803ff4c4_1:;
wr(s->u,24,8,(((U)UINT64_C(0x10))+rd(s->r,128,8)));
L_1803ff4c4_2:;
wr(s->u,32,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff4c4_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803ff4c4_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803ff4c4_5:;
wr(s->r,4672,4,rd(s->u,48,4));
L_1803ff4c4_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff4c4_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff4c4_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff4c4_9:;
/* 1803ff4cb: mulss xmm1, dword ptr [r10 + 0x68] */
L_1803ff4cb_0:;
L_1803ff4cb_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x68))));
L_1803ff4cb_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff4cb_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,48,4),4),4));
L_1803ff4cb_4:;
/* 1803ff4d1: movss xmm2, dword ptr [r10 + 0x28] */
L_1803ff4d1_0:;
L_1803ff4d1_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x28))));
L_1803ff4d1_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff4d1_3:;
wr(s->r,4736,4,rd(s->u,48,4));
L_1803ff4d1_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff4d1_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff4d1_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff4d1_7:;
/* 1803ff4d7: movaps xmm4, xmm2 */
L_1803ff4d7_0:;
L_1803ff4d7_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803ff4d7_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803ff4d7_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803ff4d7_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803ff4d7_5:;
/* 1803ff4da: subss xmm8, xmm0 */
L_1803ff4da_0:;
L_1803ff4da_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff4da_2:;
/* 1803ff4df: movaps xmm5, xmm8 */
L_1803ff4df_0:;
L_1803ff4df_1:;
wr(s->r,4928,4,rd(s->r,5120,4));
L_1803ff4df_2:;
wr(s->r,4932,4,rd(s->r,5124,4));
L_1803ff4df_3:;
wr(s->r,4936,4,rd(s->r,5128,4));
L_1803ff4df_4:;
wr(s->r,4940,4,rd(s->r,5132,4));
L_1803ff4df_5:;
/* 1803ff4e3: movss xmm0, dword ptr [r8 + rbp*4 + 0x14] */
L_1803ff4e3_0:;
L_1803ff4e3_1:;
wr(s->u,24,8,(((U)UINT64_C(0x14))+rd(s->r,128,8)));
L_1803ff4e3_2:;
wr(s->u,32,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff4e3_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803ff4e3_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803ff4e3_5:;
wr(s->r,4608,4,rd(s->u,48,4));
L_1803ff4e3_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ff4e3_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ff4e3_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ff4e3_9:;
/* 1803ff4ea: mulss xmm0, dword ptr [r10 + 0x6c] */
L_1803ff4ea_0:;
L_1803ff4ea_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x6c))));
L_1803ff4ea_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff4ea_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,48,4),4),4));
L_1803ff4ea_4:;
return UINT64_C(0x1803ff4f0);
}
uint64_t b_1803ff461(CPU*s){
/* 1803ff461: subss xmm4, xmm1 */
L_1803ff461_0:;
L_1803ff461_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff461_2:;
/* 1803ff465: movss dword ptr [r10 + 0x44], xmm4 */
L_1803ff465_0:;
L_1803ff465_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x44))));
L_1803ff465_2:;
wr(s->u,48,4,rd(s->r,4864,4));
L_1803ff465_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803ff465_4:;
/* 1803ff46b: addss xmm0, xmm2 */
L_1803ff46b_0:;
L_1803ff46b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff46b_2:;
/* 1803ff46f: movss dword ptr [r10 + 0x20], xmm0 */
L_1803ff46f_0:;
L_1803ff46f_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x20))));
L_1803ff46f_2:;
wr(s->u,48,4,rd(s->r,4608,4));
L_1803ff46f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803ff46f_4:;
/* 1803ff475: movaps xmm0, xmm7 */
L_1803ff475_0:;
L_1803ff475_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ff475_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ff475_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ff475_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ff475_5:;
/* 1803ff478: subss xmm5, xmm2 */
L_1803ff478_0:;
L_1803ff478_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff478_2:;
/* 1803ff47c: movss dword ptr [r10 + 0x60], xmm5 */
L_1803ff47c_0:;
L_1803ff47c_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x60))));
L_1803ff47c_2:;
wr(s->u,48,4,rd(s->r,4928,4));
L_1803ff47c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803ff47c_4:;
/* 1803ff482: subss xmm0, xmm3 */
L_1803ff482_0:;
L_1803ff482_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ff482_2:;
/* 1803ff486: movss dword ptr [r10 + 0x24], xmm0 */
L_1803ff486_0:;
L_1803ff486_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x24))));
L_1803ff486_2:;
wr(s->u,48,4,rd(s->r,4608,4));
L_1803ff486_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803ff486_4:;
/* 1803ff48c: addss xmm7, xmm3 */
L_1803ff48c_0:;
L_1803ff48c_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff48c_2:;
/* 1803ff490: movss xmm3, dword ptr [r10 + 0x4c] */
L_1803ff490_0:;
L_1803ff490_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4c))));
L_1803ff490_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff490_3:;
wr(s->r,4800,4,rd(s->u,48,4));
L_1803ff490_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff490_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff490_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff490_7:;
/* 1803ff496: movss dword ptr [r10 + 0x64], xmm7 */
L_1803ff496_0:;
L_1803ff496_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x64))));
L_1803ff496_2:;
wr(s->u,48,4,rd(s->r,5056,4));
L_1803ff496_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803ff496_4:;
/* 1803ff49c: movaps xmm0, xmm3 */
L_1803ff49c_0:;
L_1803ff49c_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ff49c_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ff49c_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ff49c_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ff49c_5:;
/* 1803ff49f: movss xmm7, dword ptr [r10 + 0x6c] */
L_1803ff49f_0:;
L_1803ff49f_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x6c))));
L_1803ff49f_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff49f_3:;
wr(s->r,5056,4,rd(s->u,48,4));
L_1803ff49f_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff49f_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff49f_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff49f_7:;
/* 1803ff4a5: movss xmm2, dword ptr [r8 + rbp*4] */
L_1803ff4a5_0:;
L_1803ff4a5_1:;
wr(s->u,8,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff4a5_2:;
wr(s->u,16,8,(rd(s->r,128,8)+rd(s->u,8,8)));
L_1803ff4a5_3:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803ff4a5_4:;
wr(s->r,4736,4,rd(s->u,48,4));
L_1803ff4a5_5:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff4a5_6:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff4a5_7:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff4a5_8:;
/* 1803ff4ab: mulss xmm8, xmm2 */
L_1803ff4ab_0:;
L_1803ff4ab_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803ff4ab_2:;
/* 1803ff4b0: mulss xmm3, xmm2 */
L_1803ff4b0_0:;
L_1803ff4b0_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803ff4b0_2:;
/* 1803ff4b4: movss xmm1, dword ptr [r8 + rbp*4 + 4] */
L_1803ff4b4_0:;
L_1803ff4b4_1:;
wr(s->u,24,8,(((U)UINT64_C(0x4))+rd(s->r,128,8)));
L_1803ff4b4_2:;
wr(s->u,32,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff4b4_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803ff4b4_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803ff4b4_5:;
wr(s->r,4672,4,rd(s->u,48,4));
L_1803ff4b4_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff4b4_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff4b4_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff4b4_9:;
/* 1803ff4bb: mulss xmm0, xmm1 */
L_1803ff4bb_0:;
L_1803ff4bb_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ff4bb_2:;
/* 1803ff4bf: mulss xmm9, xmm1 */
L_1803ff4bf_0:;
L_1803ff4bf_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ff4bf_2:;
/* 1803ff4c4: movss xmm1, dword ptr [r8 + rbp*4 + 0x10] */
L_1803ff4c4_0:;
L_1803ff4c4_1:;
wr(s->u,24,8,(((U)UINT64_C(0x10))+rd(s->r,128,8)));
L_1803ff4c4_2:;
wr(s->u,32,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff4c4_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803ff4c4_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803ff4c4_5:;
wr(s->r,4672,4,rd(s->u,48,4));
L_1803ff4c4_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff4c4_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff4c4_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff4c4_9:;
/* 1803ff4cb: mulss xmm1, dword ptr [r10 + 0x68] */
L_1803ff4cb_0:;
L_1803ff4cb_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x68))));
L_1803ff4cb_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff4cb_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,48,4),4),4));
L_1803ff4cb_4:;
/* 1803ff4d1: movss xmm2, dword ptr [r10 + 0x28] */
L_1803ff4d1_0:;
L_1803ff4d1_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x28))));
L_1803ff4d1_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff4d1_3:;
wr(s->r,4736,4,rd(s->u,48,4));
L_1803ff4d1_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff4d1_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff4d1_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff4d1_7:;
/* 1803ff4d7: movaps xmm4, xmm2 */
L_1803ff4d7_0:;
L_1803ff4d7_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803ff4d7_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803ff4d7_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803ff4d7_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803ff4d7_5:;
/* 1803ff4da: subss xmm8, xmm0 */
L_1803ff4da_0:;
L_1803ff4da_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff4da_2:;
/* 1803ff4df: movaps xmm5, xmm8 */
L_1803ff4df_0:;
L_1803ff4df_1:;
wr(s->r,4928,4,rd(s->r,5120,4));
L_1803ff4df_2:;
wr(s->r,4932,4,rd(s->r,5124,4));
L_1803ff4df_3:;
wr(s->r,4936,4,rd(s->r,5128,4));
L_1803ff4df_4:;
wr(s->r,4940,4,rd(s->r,5132,4));
L_1803ff4df_5:;
/* 1803ff4e3: movss xmm0, dword ptr [r8 + rbp*4 + 0x14] */
L_1803ff4e3_0:;
L_1803ff4e3_1:;
wr(s->u,24,8,(((U)UINT64_C(0x14))+rd(s->r,128,8)));
L_1803ff4e3_2:;
wr(s->u,32,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff4e3_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803ff4e3_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803ff4e3_5:;
wr(s->r,4608,4,rd(s->u,48,4));
L_1803ff4e3_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ff4e3_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ff4e3_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ff4e3_9:;
/* 1803ff4ea: mulss xmm0, dword ptr [r10 + 0x6c] */
L_1803ff4ea_0:;
L_1803ff4ea_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x6c))));
L_1803ff4ea_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff4ea_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,48,4),4),4));
L_1803ff4ea_4:;
/* 1803ff4f0: addss xmm9, xmm3 */
L_1803ff4f0_0:;
L_1803ff4f0_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff4f0_2:;
/* 1803ff4f5: movss xmm3, dword ptr [r10 + 0x2c] */
L_1803ff4f5_0:;
L_1803ff4f5_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x2c))));
L_1803ff4f5_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff4f5_3:;
wr(s->r,4800,4,rd(s->u,48,4));
L_1803ff4f5_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff4f5_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff4f5_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff4f5_7:;
/* 1803ff4fb: subss xmm1, xmm0 */
L_1803ff4fb_0:;
L_1803ff4fb_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff4fb_2:;
/* 1803ff4ff: addss xmm4, xmm3 */
L_1803ff4ff_0:;
L_1803ff4ff_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff4ff_2:;
return UINT64_C(0x1803ff503);
}
uint64_t b_1803ff4f0(CPU*s){
/* 1803ff4f0: addss xmm9, xmm3 */
L_1803ff4f0_0:;
L_1803ff4f0_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff4f0_2:;
/* 1803ff4f5: movss xmm3, dword ptr [r10 + 0x2c] */
L_1803ff4f5_0:;
L_1803ff4f5_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x2c))));
L_1803ff4f5_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff4f5_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ff4f5_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff4f5_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff4f5_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff4f5_7:;
/* 1803ff4fb: subss xmm1, xmm0 */
L_1803ff4fb_0:;
L_1803ff4fb_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff4fb_2:;
/* 1803ff4ff: addss xmm4, xmm3 */
L_1803ff4ff_0:;
L_1803ff4ff_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff4ff_2:;
/* 1803ff503: mulss xmm4, dword ptr [r8 + rbp*4 + 8] */
L_1803ff503_0:;
L_1803ff503_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,128,8)));
L_1803ff503_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff503_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff503_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff503_5:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff503_6:;
/* 1803ff50a: addss xmm5, xmm1 */
L_1803ff50a_0:;
L_1803ff50a_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff50a_2:;
/* 1803ff50e: subss xmm8, xmm1 */
L_1803ff50e_0:;
L_1803ff50e_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff50e_2:;
/* 1803ff513: movss xmm1, dword ptr [r10 + 8] */
L_1803ff513_0:;
L_1803ff513_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x8))));
L_1803ff513_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff513_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ff513_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff513_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff513_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff513_7:;
/* 1803ff519: movaps xmm0, xmm1 */
L_1803ff519_0:;
L_1803ff519_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803ff519_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803ff519_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803ff519_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803ff519_5:;
/* 1803ff51c: subss xmm1, xmm4 */
L_1803ff51c_0:;
L_1803ff51c_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ff51c_2:;
/* 1803ff520: subss xmm3, xmm2 */
L_1803ff520_0:;
L_1803ff520_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff520_2:;
/* 1803ff524: addss xmm0, xmm4 */
L_1803ff524_0:;
L_1803ff524_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ff524_2:;
/* 1803ff528: movaps xmm4, xmm0 */
L_1803ff528_0:;
L_1803ff528_1:;
wr(s->r,4864,4,rd(s->r,4608,4));
L_1803ff528_2:;
wr(s->r,4868,4,rd(s->r,4612,4));
L_1803ff528_3:;
wr(s->r,4872,4,rd(s->r,4616,4));
L_1803ff528_4:;
wr(s->r,4876,4,rd(s->r,4620,4));
L_1803ff528_5:;
/* 1803ff52b: subss xmm0, xmm5 */
L_1803ff52b_0:;
L_1803ff52b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ff52b_2:;
/* 1803ff52f: movss dword ptr [r10 + 0x48], xmm0 */
L_1803ff52f_0:;
L_1803ff52f_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x48))));
L_1803ff52f_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff52f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff52f_4:;
/* 1803ff535: addss xmm4, xmm5 */
L_1803ff535_0:;
L_1803ff535_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff535_2:;
/* 1803ff539: movss xmm5, dword ptr [r10 + 0xc] */
L_1803ff539_0:;
L_1803ff539_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0xc))));
L_1803ff539_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff539_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ff539_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff539_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff539_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff539_7:;
/* 1803ff53f: movss dword ptr [r10 + 8], xmm4 */
L_1803ff53f_0:;
L_1803ff53f_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x8))));
L_1803ff53f_2:;
wr(s->u,32,4,rd(s->r,4864,4));
L_1803ff53f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff53f_4:;
/* 1803ff545: mulss xmm7, dword ptr [r8 + rbp*4 + 0x10] */
L_1803ff545_0:;
L_1803ff545_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,128,8)));
L_1803ff545_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff545_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff545_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff545_5:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff545_6:;
/* 1803ff54c: mulss xmm6, dword ptr [r8 + rbp*4 + 0x14] */
L_1803ff54c_0:;
L_1803ff54c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x14))+rd(s->r,128,8)));
L_1803ff54c_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff54c_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff54c_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff54c_5:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff54c_6:;
/* 1803ff553: mulss xmm3, dword ptr [r8 + rbp*4 + 8] */
L_1803ff553_0:;
L_1803ff553_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,128,8)));
L_1803ff553_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff553_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff553_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff553_5:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff553_6:;
/* 1803ff55a: movaps xmm4, xmm9 */
L_1803ff55a_0:;
L_1803ff55a_1:;
wr(s->r,4864,4,rd(s->r,5184,4));
L_1803ff55a_2:;
wr(s->r,4868,4,rd(s->r,5188,4));
L_1803ff55a_3:;
wr(s->r,4872,4,rd(s->r,5192,4));
L_1803ff55a_4:;
wr(s->r,4876,4,rd(s->r,5196,4));
L_1803ff55a_5:;
/* 1803ff55e: movaps xmm2, xmm5 */
L_1803ff55e_0:;
L_1803ff55e_1:;
wr(s->r,4736,4,rd(s->r,4928,4));
L_1803ff55e_2:;
wr(s->r,4740,4,rd(s->r,4932,4));
L_1803ff55e_3:;
wr(s->r,4744,4,rd(s->r,4936,4));
L_1803ff55e_4:;
wr(s->r,4748,4,rd(s->r,4940,4));
L_1803ff55e_5:;
/* 1803ff561: addss xmm7, xmm6 */
L_1803ff561_0:;
L_1803ff561_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803ff561_2:;
/* 1803ff565: addss xmm4, xmm7 */
L_1803ff565_0:;
L_1803ff565_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ff565_2:;
/* 1803ff569: subss xmm9, xmm7 */
L_1803ff569_0:;
L_1803ff569_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,5056,4),4),4));
L_1803ff569_2:;
/* 1803ff56e: movss xmm7, dword ptr [r10 + 0x54] */
L_1803ff56e_0:;
L_1803ff56e_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x54))));
L_1803ff56e_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff56e_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803ff56e_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff56e_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff56e_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff56e_7:;
/* 1803ff574: addss xmm2, xmm3 */
L_1803ff574_0:;
L_1803ff574_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff574_2:;
/* 1803ff578: movaps xmm0, xmm2 */
L_1803ff578_0:;
L_1803ff578_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803ff578_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803ff578_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803ff578_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803ff578_5:;
/* 1803ff57b: subss xmm5, xmm3 */
L_1803ff57b_0:;
L_1803ff57b_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ff57b_2:;
/* 1803ff57f: movss xmm3, dword ptr [r10 + 0x10] */
L_1803ff57f_0:;
L_1803ff57f_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x10))));
L_1803ff57f_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff57f_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ff57f_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff57f_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff57f_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff57f_7:;
/* 1803ff585: addss xmm0, xmm4 */
L_1803ff585_0:;
L_1803ff585_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ff585_2:;
return UINT64_C(0x1803ff589);
}
uint64_t b_1803ff503(CPU*s){
/* 1803ff503: mulss xmm4, dword ptr [r8 + rbp*4 + 8] */
L_1803ff503_0:;
L_1803ff503_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,128,8)));
L_1803ff503_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff503_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff503_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff503_5:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff503_6:;
/* 1803ff50a: addss xmm5, xmm1 */
L_1803ff50a_0:;
L_1803ff50a_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff50a_2:;
/* 1803ff50e: subss xmm8, xmm1 */
L_1803ff50e_0:;
L_1803ff50e_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff50e_2:;
/* 1803ff513: movss xmm1, dword ptr [r10 + 8] */
L_1803ff513_0:;
L_1803ff513_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x8))));
L_1803ff513_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff513_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ff513_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff513_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff513_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff513_7:;
/* 1803ff519: movaps xmm0, xmm1 */
L_1803ff519_0:;
L_1803ff519_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803ff519_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803ff519_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803ff519_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803ff519_5:;
/* 1803ff51c: subss xmm1, xmm4 */
L_1803ff51c_0:;
L_1803ff51c_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ff51c_2:;
/* 1803ff520: subss xmm3, xmm2 */
L_1803ff520_0:;
L_1803ff520_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff520_2:;
/* 1803ff524: addss xmm0, xmm4 */
L_1803ff524_0:;
L_1803ff524_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ff524_2:;
/* 1803ff528: movaps xmm4, xmm0 */
L_1803ff528_0:;
L_1803ff528_1:;
wr(s->r,4864,4,rd(s->r,4608,4));
L_1803ff528_2:;
wr(s->r,4868,4,rd(s->r,4612,4));
L_1803ff528_3:;
wr(s->r,4872,4,rd(s->r,4616,4));
L_1803ff528_4:;
wr(s->r,4876,4,rd(s->r,4620,4));
L_1803ff528_5:;
/* 1803ff52b: subss xmm0, xmm5 */
L_1803ff52b_0:;
L_1803ff52b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ff52b_2:;
/* 1803ff52f: movss dword ptr [r10 + 0x48], xmm0 */
L_1803ff52f_0:;
L_1803ff52f_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x48))));
L_1803ff52f_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff52f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff52f_4:;
/* 1803ff535: addss xmm4, xmm5 */
L_1803ff535_0:;
L_1803ff535_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff535_2:;
/* 1803ff539: movss xmm5, dword ptr [r10 + 0xc] */
L_1803ff539_0:;
L_1803ff539_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0xc))));
L_1803ff539_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff539_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ff539_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff539_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff539_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff539_7:;
/* 1803ff53f: movss dword ptr [r10 + 8], xmm4 */
L_1803ff53f_0:;
L_1803ff53f_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x8))));
L_1803ff53f_2:;
wr(s->u,32,4,rd(s->r,4864,4));
L_1803ff53f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff53f_4:;
/* 1803ff545: mulss xmm7, dword ptr [r8 + rbp*4 + 0x10] */
L_1803ff545_0:;
L_1803ff545_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,128,8)));
L_1803ff545_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff545_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff545_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff545_5:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff545_6:;
/* 1803ff54c: mulss xmm6, dword ptr [r8 + rbp*4 + 0x14] */
L_1803ff54c_0:;
L_1803ff54c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x14))+rd(s->r,128,8)));
L_1803ff54c_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff54c_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff54c_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff54c_5:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff54c_6:;
/* 1803ff553: mulss xmm3, dword ptr [r8 + rbp*4 + 8] */
L_1803ff553_0:;
L_1803ff553_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,128,8)));
L_1803ff553_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff553_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff553_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff553_5:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff553_6:;
/* 1803ff55a: movaps xmm4, xmm9 */
L_1803ff55a_0:;
L_1803ff55a_1:;
wr(s->r,4864,4,rd(s->r,5184,4));
L_1803ff55a_2:;
wr(s->r,4868,4,rd(s->r,5188,4));
L_1803ff55a_3:;
wr(s->r,4872,4,rd(s->r,5192,4));
L_1803ff55a_4:;
wr(s->r,4876,4,rd(s->r,5196,4));
L_1803ff55a_5:;
/* 1803ff55e: movaps xmm2, xmm5 */
L_1803ff55e_0:;
L_1803ff55e_1:;
wr(s->r,4736,4,rd(s->r,4928,4));
L_1803ff55e_2:;
wr(s->r,4740,4,rd(s->r,4932,4));
L_1803ff55e_3:;
wr(s->r,4744,4,rd(s->r,4936,4));
L_1803ff55e_4:;
wr(s->r,4748,4,rd(s->r,4940,4));
L_1803ff55e_5:;
/* 1803ff561: addss xmm7, xmm6 */
L_1803ff561_0:;
L_1803ff561_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803ff561_2:;
/* 1803ff565: addss xmm4, xmm7 */
L_1803ff565_0:;
L_1803ff565_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ff565_2:;
/* 1803ff569: subss xmm9, xmm7 */
L_1803ff569_0:;
L_1803ff569_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,5056,4),4),4));
L_1803ff569_2:;
/* 1803ff56e: movss xmm7, dword ptr [r10 + 0x54] */
L_1803ff56e_0:;
L_1803ff56e_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x54))));
L_1803ff56e_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff56e_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803ff56e_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff56e_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff56e_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff56e_7:;
/* 1803ff574: addss xmm2, xmm3 */
L_1803ff574_0:;
L_1803ff574_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff574_2:;
/* 1803ff578: movaps xmm0, xmm2 */
L_1803ff578_0:;
L_1803ff578_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803ff578_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803ff578_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803ff578_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803ff578_5:;
/* 1803ff57b: subss xmm5, xmm3 */
L_1803ff57b_0:;
L_1803ff57b_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ff57b_2:;
/* 1803ff57f: movss xmm3, dword ptr [r10 + 0x10] */
L_1803ff57f_0:;
L_1803ff57f_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x10))));
L_1803ff57f_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff57f_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ff57f_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff57f_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff57f_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff57f_7:;
/* 1803ff585: addss xmm0, xmm4 */
L_1803ff585_0:;
L_1803ff585_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ff585_2:;
/* 1803ff589: movss dword ptr [r10 + 0xc], xmm0 */
L_1803ff589_0:;
L_1803ff589_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0xc))));
L_1803ff589_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff589_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff589_4:;
/* 1803ff58f: movaps xmm0, xmm1 */
L_1803ff58f_0:;
L_1803ff58f_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803ff58f_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803ff58f_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803ff58f_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803ff58f_5:;
/* 1803ff592: subss xmm2, xmm4 */
L_1803ff592_0:;
L_1803ff592_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ff592_2:;
/* 1803ff596: movss dword ptr [r10 + 0x4c], xmm2 */
L_1803ff596_0:;
L_1803ff596_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4c))));
L_1803ff596_2:;
wr(s->u,32,4,rd(s->r,4736,4));
L_1803ff596_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff596_4:;
return UINT64_C(0x1803ff59c);
}
uint64_t b_1803ff589(CPU*s){
/* 1803ff589: movss dword ptr [r10 + 0xc], xmm0 */
L_1803ff589_0:;
L_1803ff589_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0xc))));
L_1803ff589_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff589_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff589_4:;
/* 1803ff58f: movaps xmm0, xmm1 */
L_1803ff58f_0:;
L_1803ff58f_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803ff58f_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803ff58f_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803ff58f_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803ff58f_5:;
/* 1803ff592: subss xmm2, xmm4 */
L_1803ff592_0:;
L_1803ff592_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ff592_2:;
/* 1803ff596: movss dword ptr [r10 + 0x4c], xmm2 */
L_1803ff596_0:;
L_1803ff596_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4c))));
L_1803ff596_2:;
wr(s->u,32,4,rd(s->r,4736,4));
L_1803ff596_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff596_4:;
/* 1803ff59c: movss xmm2, dword ptr [r10 + 0x74] */
L_1803ff59c_0:;
L_1803ff59c_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x74))));
L_1803ff59c_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff59c_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ff59c_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff59c_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff59c_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff59c_7:;
/* 1803ff5a2: addss xmm0, xmm9 */
L_1803ff5a2_0:;
L_1803ff5a2_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ff5a2_2:;
/* 1803ff5a7: movss dword ptr [r10 + 0x28], xmm0 */
L_1803ff5a7_0:;
L_1803ff5a7_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x28))));
L_1803ff5a7_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff5a7_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff5a7_4:;
/* 1803ff5ad: movaps xmm0, xmm5 */
L_1803ff5ad_0:;
L_1803ff5ad_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ff5ad_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ff5ad_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ff5ad_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ff5ad_5:;
/* 1803ff5b0: subss xmm1, xmm9 */
L_1803ff5b0_0:;
L_1803ff5b0_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ff5b0_2:;
/* 1803ff5b5: movss xmm9, dword ptr [r10 + 0x18] */
L_1803ff5b5_0:;
L_1803ff5b5_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x18))));
L_1803ff5b5_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff5b5_3:;
wr(s->r,5184,4,rd(s->u,32,4));
L_1803ff5b5_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ff5b5_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ff5b5_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ff5b5_7:;
/* 1803ff5bb: movss dword ptr [r10 + 0x68], xmm1 */
L_1803ff5bb_0:;
L_1803ff5bb_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x68))));
L_1803ff5bb_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803ff5bb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff5bb_4:;
/* 1803ff5c1: subss xmm0, xmm8 */
L_1803ff5c1_0:;
L_1803ff5c1_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ff5c1_2:;
/* 1803ff5c6: movss dword ptr [r10 + 0x2c], xmm0 */
L_1803ff5c6_0:;
L_1803ff5c6_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x2c))));
L_1803ff5c6_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff5c6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff5c6_4:;
/* 1803ff5cc: movss xmm0, dword ptr [r10 + 0x50] */
L_1803ff5cc_0:;
L_1803ff5cc_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x50))));
L_1803ff5cc_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff5cc_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ff5cc_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ff5cc_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ff5cc_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ff5cc_7:;
/* 1803ff5d2: movaps xmm6, xmm0 */
L_1803ff5d2_0:;
L_1803ff5d2_1:;
wr(s->r,4992,4,rd(s->r,4608,4));
L_1803ff5d2_2:;
wr(s->r,4996,4,rd(s->r,4612,4));
L_1803ff5d2_3:;
wr(s->r,5000,4,rd(s->r,4616,4));
L_1803ff5d2_4:;
wr(s->r,5004,4,rd(s->r,4620,4));
L_1803ff5d2_5:;
/* 1803ff5d5: addss xmm5, xmm8 */
L_1803ff5d5_0:;
L_1803ff5d5_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff5d5_2:;
/* 1803ff5da: movss xmm8, dword ptr [r10 + 0x30] */
L_1803ff5da_0:;
L_1803ff5da_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x30))));
L_1803ff5da_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff5da_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803ff5da_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff5da_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff5da_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff5da_7:;
/* 1803ff5e0: movss dword ptr [r10 + 0x6c], xmm5 */
L_1803ff5e0_0:;
L_1803ff5e0_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x6c))));
L_1803ff5e0_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803ff5e0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff5e0_4:;
/* 1803ff5e6: addss xmm6, xmm7 */
L_1803ff5e6_0:;
L_1803ff5e6_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ff5e6_2:;
/* 1803ff5ea: mulss xmm6, dword ptr [r8 + rbp*4 + 8] */
L_1803ff5ea_0:;
L_1803ff5ea_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,128,8)));
L_1803ff5ea_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff5ea_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff5ea_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff5ea_5:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff5ea_6:;
/* 1803ff5f1: movaps xmm5, xmm6 */
L_1803ff5f1_0:;
L_1803ff5f1_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803ff5f1_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803ff5f1_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803ff5f1_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803ff5f1_5:;
/* 1803ff5f4: subss xmm7, xmm0 */
L_1803ff5f4_0:;
L_1803ff5f4_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff5f4_2:;
/* 1803ff5f8: mulss xmm7, dword ptr [r8 + rbp*4 + 8] */
L_1803ff5f8_0:;
L_1803ff5f8_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,128,8)));
L_1803ff5f8_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff5f8_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff5f8_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff5f8_5:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff5f8_6:;
/* 1803ff5ff: movaps xmm4, xmm7 */
L_1803ff5ff_0:;
L_1803ff5ff_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803ff5ff_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803ff5ff_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803ff5ff_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803ff5ff_5:;
/* 1803ff602: movss xmm0, dword ptr [r10 + 0x70] */
L_1803ff602_0:;
L_1803ff602_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x70))));
L_1803ff602_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff602_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ff602_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ff602_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ff602_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ff602_7:;
/* 1803ff608: movaps xmm1, xmm0 */
L_1803ff608_0:;
L_1803ff608_1:;
wr(s->r,4672,4,rd(s->r,4608,4));
L_1803ff608_2:;
wr(s->r,4676,4,rd(s->r,4612,4));
L_1803ff608_3:;
wr(s->r,4680,4,rd(s->r,4616,4));
L_1803ff608_4:;
wr(s->r,4684,4,rd(s->r,4620,4));
L_1803ff608_5:;
/* 1803ff60b: add eax, 1 */
L_1803ff60b_0:;
L_1803ff60b_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ff60b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,0));
L_1803ff60b_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x1))));
L_1803ff60b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ff60b_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff60b_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ff60b_7:;
wr(s->u,36,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ff60b_8:;
wr(s->u,40,1,pop(rd(s->u,36,4),4));
L_1803ff60b_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ff60b_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ff60b_11:;
/* 1803ff60e: subss xmm1, xmm2 */
L_1803ff60e_0:;
L_1803ff60e_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff60e_2:;
/* 1803ff612: mulss xmm1, dword ptr [r8 + rbp*4 + 0xc] */
L_1803ff612_0:;
L_1803ff612_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc))+rd(s->r,128,8)));
L_1803ff612_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff612_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff612_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff612_5:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff612_6:;
/* 1803ff619: addss xmm2, xmm0 */
L_1803ff619_0:;
L_1803ff619_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff619_2:;
/* 1803ff61d: mulss xmm2, dword ptr [r8 + rbp*4 + 0xc] */
L_1803ff61d_0:;
L_1803ff61d_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc))+rd(s->r,128,8)));
L_1803ff61d_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff61d_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff61d_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff61d_5:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff61d_6:;
/* 1803ff624: movss xmm0, dword ptr [r10 + 0x34] */
L_1803ff624_0:;
L_1803ff624_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x34))));
L_1803ff624_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff624_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ff624_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ff624_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ff624_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ff624_7:;
return UINT64_C(0x1803ff62a);
}
uint64_t b_1803ff59c(CPU*s){
/* 1803ff59c: movss xmm2, dword ptr [r10 + 0x74] */
L_1803ff59c_0:;
L_1803ff59c_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x74))));
L_1803ff59c_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff59c_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ff59c_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff59c_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff59c_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff59c_7:;
/* 1803ff5a2: addss xmm0, xmm9 */
L_1803ff5a2_0:;
L_1803ff5a2_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ff5a2_2:;
/* 1803ff5a7: movss dword ptr [r10 + 0x28], xmm0 */
L_1803ff5a7_0:;
L_1803ff5a7_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x28))));
L_1803ff5a7_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff5a7_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff5a7_4:;
/* 1803ff5ad: movaps xmm0, xmm5 */
L_1803ff5ad_0:;
L_1803ff5ad_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ff5ad_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ff5ad_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ff5ad_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ff5ad_5:;
/* 1803ff5b0: subss xmm1, xmm9 */
L_1803ff5b0_0:;
L_1803ff5b0_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ff5b0_2:;
/* 1803ff5b5: movss xmm9, dword ptr [r10 + 0x18] */
L_1803ff5b5_0:;
L_1803ff5b5_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x18))));
L_1803ff5b5_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff5b5_3:;
wr(s->r,5184,4,rd(s->u,32,4));
L_1803ff5b5_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ff5b5_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ff5b5_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ff5b5_7:;
/* 1803ff5bb: movss dword ptr [r10 + 0x68], xmm1 */
L_1803ff5bb_0:;
L_1803ff5bb_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x68))));
L_1803ff5bb_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803ff5bb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff5bb_4:;
/* 1803ff5c1: subss xmm0, xmm8 */
L_1803ff5c1_0:;
L_1803ff5c1_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ff5c1_2:;
/* 1803ff5c6: movss dword ptr [r10 + 0x2c], xmm0 */
L_1803ff5c6_0:;
L_1803ff5c6_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x2c))));
L_1803ff5c6_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff5c6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff5c6_4:;
/* 1803ff5cc: movss xmm0, dword ptr [r10 + 0x50] */
L_1803ff5cc_0:;
L_1803ff5cc_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x50))));
L_1803ff5cc_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff5cc_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ff5cc_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ff5cc_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ff5cc_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ff5cc_7:;
/* 1803ff5d2: movaps xmm6, xmm0 */
L_1803ff5d2_0:;
L_1803ff5d2_1:;
wr(s->r,4992,4,rd(s->r,4608,4));
L_1803ff5d2_2:;
wr(s->r,4996,4,rd(s->r,4612,4));
L_1803ff5d2_3:;
wr(s->r,5000,4,rd(s->r,4616,4));
L_1803ff5d2_4:;
wr(s->r,5004,4,rd(s->r,4620,4));
L_1803ff5d2_5:;
/* 1803ff5d5: addss xmm5, xmm8 */
L_1803ff5d5_0:;
L_1803ff5d5_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff5d5_2:;
/* 1803ff5da: movss xmm8, dword ptr [r10 + 0x30] */
L_1803ff5da_0:;
L_1803ff5da_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x30))));
L_1803ff5da_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff5da_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803ff5da_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff5da_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff5da_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff5da_7:;
/* 1803ff5e0: movss dword ptr [r10 + 0x6c], xmm5 */
L_1803ff5e0_0:;
L_1803ff5e0_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x6c))));
L_1803ff5e0_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803ff5e0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff5e0_4:;
/* 1803ff5e6: addss xmm6, xmm7 */
L_1803ff5e6_0:;
L_1803ff5e6_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ff5e6_2:;
/* 1803ff5ea: mulss xmm6, dword ptr [r8 + rbp*4 + 8] */
L_1803ff5ea_0:;
L_1803ff5ea_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,128,8)));
L_1803ff5ea_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff5ea_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff5ea_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff5ea_5:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff5ea_6:;
/* 1803ff5f1: movaps xmm5, xmm6 */
L_1803ff5f1_0:;
L_1803ff5f1_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803ff5f1_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803ff5f1_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803ff5f1_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803ff5f1_5:;
/* 1803ff5f4: subss xmm7, xmm0 */
L_1803ff5f4_0:;
L_1803ff5f4_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff5f4_2:;
/* 1803ff5f8: mulss xmm7, dword ptr [r8 + rbp*4 + 8] */
L_1803ff5f8_0:;
L_1803ff5f8_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,128,8)));
L_1803ff5f8_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff5f8_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff5f8_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff5f8_5:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff5f8_6:;
/* 1803ff5ff: movaps xmm4, xmm7 */
L_1803ff5ff_0:;
L_1803ff5ff_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803ff5ff_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803ff5ff_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803ff5ff_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803ff5ff_5:;
/* 1803ff602: movss xmm0, dword ptr [r10 + 0x70] */
L_1803ff602_0:;
L_1803ff602_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x70))));
L_1803ff602_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff602_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ff602_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ff602_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ff602_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ff602_7:;
/* 1803ff608: movaps xmm1, xmm0 */
L_1803ff608_0:;
L_1803ff608_1:;
wr(s->r,4672,4,rd(s->r,4608,4));
L_1803ff608_2:;
wr(s->r,4676,4,rd(s->r,4612,4));
L_1803ff608_3:;
wr(s->r,4680,4,rd(s->r,4616,4));
L_1803ff608_4:;
wr(s->r,4684,4,rd(s->r,4620,4));
L_1803ff608_5:;
/* 1803ff60b: add eax, 1 */
L_1803ff60b_0:;
L_1803ff60b_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ff60b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,0));
L_1803ff60b_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x1))));
L_1803ff60b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ff60b_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff60b_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ff60b_7:;
wr(s->u,36,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ff60b_8:;
wr(s->u,40,1,pop(rd(s->u,36,4),4));
L_1803ff60b_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ff60b_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ff60b_11:;
/* 1803ff60e: subss xmm1, xmm2 */
L_1803ff60e_0:;
L_1803ff60e_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff60e_2:;
/* 1803ff612: mulss xmm1, dword ptr [r8 + rbp*4 + 0xc] */
L_1803ff612_0:;
L_1803ff612_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc))+rd(s->r,128,8)));
L_1803ff612_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff612_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff612_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff612_5:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff612_6:;
/* 1803ff619: addss xmm2, xmm0 */
L_1803ff619_0:;
L_1803ff619_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff619_2:;
/* 1803ff61d: mulss xmm2, dword ptr [r8 + rbp*4 + 0xc] */
L_1803ff61d_0:;
L_1803ff61d_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc))+rd(s->r,128,8)));
L_1803ff61d_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff61d_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff61d_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff61d_5:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff61d_6:;
/* 1803ff624: movss xmm0, dword ptr [r10 + 0x34] */
L_1803ff624_0:;
L_1803ff624_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x34))));
L_1803ff624_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff624_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ff624_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ff624_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ff624_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ff624_7:;
/* 1803ff62a: addss xmm5, xmm1 */
L_1803ff62a_0:;
L_1803ff62a_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff62a_2:;
/* 1803ff62e: subss xmm6, xmm1 */
L_1803ff62e_0:;
L_1803ff62e_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff62e_2:;
/* 1803ff632: movss xmm1, dword ptr [r10 + 0x14] */
L_1803ff632_0:;
L_1803ff632_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x14))));
L_1803ff632_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff632_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ff632_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff632_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff632_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff632_7:;
/* 1803ff638: addss xmm4, xmm2 */
L_1803ff638_0:;
L_1803ff638_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff638_2:;
return UINT64_C(0x1803ff63c);
}
uint64_t b_1803ff62a(CPU*s){
/* 1803ff62a: addss xmm5, xmm1 */
L_1803ff62a_0:;
L_1803ff62a_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff62a_2:;
/* 1803ff62e: subss xmm6, xmm1 */
L_1803ff62e_0:;
L_1803ff62e_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff62e_2:;
/* 1803ff632: movss xmm1, dword ptr [r10 + 0x14] */
L_1803ff632_0:;
L_1803ff632_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x14))));
L_1803ff632_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff632_3:;
wr(s->r,4672,4,rd(s->u,8,4));
L_1803ff632_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff632_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff632_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff632_7:;
/* 1803ff638: addss xmm4, xmm2 */
L_1803ff638_0:;
L_1803ff638_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff638_2:;
/* 1803ff63c: subss xmm7, xmm2 */
L_1803ff63c_0:;
L_1803ff63c_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff63c_2:;
/* 1803ff640: movaps xmm2, xmm3 */
L_1803ff640_0:;
L_1803ff640_1:;
wr(s->r,4736,4,rd(s->r,4800,4));
L_1803ff640_2:;
wr(s->r,4740,4,rd(s->r,4804,4));
L_1803ff640_3:;
wr(s->r,4744,4,rd(s->r,4808,4));
L_1803ff640_4:;
wr(s->r,4748,4,rd(s->r,4812,4));
L_1803ff640_5:;
/* 1803ff643: subss xmm3, xmm0 */
L_1803ff643_0:;
L_1803ff643_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff643_2:;
/* 1803ff647: addss xmm2, xmm0 */
L_1803ff647_0:;
L_1803ff647_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff647_2:;
/* 1803ff64b: movaps xmm0, xmm1 */
L_1803ff64b_0:;
L_1803ff64b_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803ff64b_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803ff64b_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803ff64b_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803ff64b_5:;
/* 1803ff64e: addss xmm1, xmm8 */
L_1803ff64e_0:;
L_1803ff64e_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff64e_2:;
/* 1803ff653: subss xmm0, xmm8 */
L_1803ff653_0:;
L_1803ff653_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ff653_2:;
/* 1803ff658: movaps xmm8, xmm2 */
L_1803ff658_0:;
L_1803ff658_1:;
wr(s->r,5120,4,rd(s->r,4736,4));
L_1803ff658_2:;
wr(s->r,5124,4,rd(s->r,4740,4));
L_1803ff658_3:;
wr(s->r,5128,4,rd(s->r,4744,4));
L_1803ff658_4:;
wr(s->r,5132,4,rd(s->r,4748,4));
L_1803ff658_5:;
/* 1803ff65c: subss xmm2, xmm5 */
L_1803ff65c_0:;
L_1803ff65c_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ff65c_2:;
/* 1803ff660: movss dword ptr [r10 + 0x50], xmm2 */
L_1803ff660_0:;
L_1803ff660_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x50))));
L_1803ff660_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803ff660_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ff660_4:;
/* 1803ff666: movss xmm2, dword ptr [r10 + 0x5c] */
L_1803ff666_0:;
L_1803ff666_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x5c))));
L_1803ff666_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff666_3:;
wr(s->r,4736,4,rd(s->u,8,4));
L_1803ff666_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff666_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff666_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff666_7:;
/* 1803ff66c: addss xmm8, xmm5 */
L_1803ff66c_0:;
L_1803ff66c_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff66c_2:;
/* 1803ff671: movss xmm5, dword ptr [r10 + 0x3c] */
L_1803ff671_0:;
L_1803ff671_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x3c))));
L_1803ff671_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff671_3:;
wr(s->r,4928,4,rd(s->u,8,4));
L_1803ff671_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff671_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff671_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff671_7:;
/* 1803ff677: movss dword ptr [r10 + 0x10], xmm8 */
L_1803ff677_0:;
L_1803ff677_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x10))));
L_1803ff677_2:;
wr(s->u,8,4,rd(s->r,5120,4));
L_1803ff677_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ff677_4:;
/* 1803ff67d: movaps xmm8, xmm0 */
L_1803ff67d_0:;
L_1803ff67d_1:;
wr(s->r,5120,4,rd(s->r,4608,4));
L_1803ff67d_2:;
wr(s->r,5124,4,rd(s->r,4612,4));
L_1803ff67d_3:;
wr(s->r,5128,4,rd(s->r,4616,4));
L_1803ff67d_4:;
wr(s->r,5132,4,rd(s->r,4620,4));
L_1803ff67d_5:;
/* 1803ff681: subss xmm0, xmm4 */
L_1803ff681_0:;
L_1803ff681_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ff681_2:;
/* 1803ff685: movss dword ptr [r10 + 0x54], xmm0 */
L_1803ff685_0:;
L_1803ff685_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x54))));
L_1803ff685_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803ff685_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ff685_4:;
/* 1803ff68b: movaps xmm0, xmm3 */
L_1803ff68b_0:;
L_1803ff68b_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ff68b_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ff68b_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ff68b_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ff68b_5:;
/* 1803ff68e: addss xmm8, xmm4 */
L_1803ff68e_0:;
L_1803ff68e_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ff68e_2:;
/* 1803ff693: movss dword ptr [r10 + 0x14], xmm8 */
L_1803ff693_0:;
L_1803ff693_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x14))));
L_1803ff693_2:;
wr(s->u,8,4,rd(s->r,5120,4));
L_1803ff693_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ff693_4:;
/* 1803ff699: addss xmm0, xmm7 */
L_1803ff699_0:;
L_1803ff699_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ff699_2:;
/* 1803ff69d: movss dword ptr [r10 + 0x30], xmm0 */
L_1803ff69d_0:;
L_1803ff69d_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x30))));
L_1803ff69d_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803ff69d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ff69d_4:;
/* 1803ff6a3: movaps xmm0, xmm1 */
L_1803ff6a3_0:;
L_1803ff6a3_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803ff6a3_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803ff6a3_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803ff6a3_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803ff6a3_5:;
/* 1803ff6a6: subss xmm3, xmm7 */
L_1803ff6a6_0:;
L_1803ff6a6_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5056,4),4),4));
L_1803ff6a6_2:;
/* 1803ff6aa: movss dword ptr [r10 + 0x70], xmm3 */
L_1803ff6aa_0:;
L_1803ff6aa_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x70))));
L_1803ff6aa_2:;
wr(s->u,8,4,rd(s->r,4800,4));
L_1803ff6aa_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ff6aa_4:;
/* 1803ff6b0: movss xmm3, dword ptr [r10 + 0x58] */
L_1803ff6b0_0:;
L_1803ff6b0_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x58))));
L_1803ff6b0_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff6b0_3:;
wr(s->r,4800,4,rd(s->u,8,4));
L_1803ff6b0_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff6b0_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff6b0_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff6b0_7:;
/* 1803ff6b6: subss xmm0, xmm6 */
L_1803ff6b6_0:;
L_1803ff6b6_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803ff6b6_2:;
/* 1803ff6ba: movss dword ptr [r10 + 0x34], xmm0 */
L_1803ff6ba_0:;
L_1803ff6ba_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x34))));
L_1803ff6ba_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803ff6ba_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ff6ba_4:;
return UINT64_C(0x1803ff6c0);
}
uint64_t b_1803ff63c(CPU*s){
/* 1803ff63c: subss xmm7, xmm2 */
L_1803ff63c_0:;
L_1803ff63c_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff63c_2:;
/* 1803ff640: movaps xmm2, xmm3 */
L_1803ff640_0:;
L_1803ff640_1:;
wr(s->r,4736,4,rd(s->r,4800,4));
L_1803ff640_2:;
wr(s->r,4740,4,rd(s->r,4804,4));
L_1803ff640_3:;
wr(s->r,4744,4,rd(s->r,4808,4));
L_1803ff640_4:;
wr(s->r,4748,4,rd(s->r,4812,4));
L_1803ff640_5:;
/* 1803ff643: subss xmm3, xmm0 */
L_1803ff643_0:;
L_1803ff643_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff643_2:;
/* 1803ff647: addss xmm2, xmm0 */
L_1803ff647_0:;
L_1803ff647_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff647_2:;
/* 1803ff64b: movaps xmm0, xmm1 */
L_1803ff64b_0:;
L_1803ff64b_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803ff64b_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803ff64b_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803ff64b_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803ff64b_5:;
/* 1803ff64e: addss xmm1, xmm8 */
L_1803ff64e_0:;
L_1803ff64e_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff64e_2:;
/* 1803ff653: subss xmm0, xmm8 */
L_1803ff653_0:;
L_1803ff653_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ff653_2:;
/* 1803ff658: movaps xmm8, xmm2 */
L_1803ff658_0:;
L_1803ff658_1:;
wr(s->r,5120,4,rd(s->r,4736,4));
L_1803ff658_2:;
wr(s->r,5124,4,rd(s->r,4740,4));
L_1803ff658_3:;
wr(s->r,5128,4,rd(s->r,4744,4));
L_1803ff658_4:;
wr(s->r,5132,4,rd(s->r,4748,4));
L_1803ff658_5:;
/* 1803ff65c: subss xmm2, xmm5 */
L_1803ff65c_0:;
L_1803ff65c_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ff65c_2:;
/* 1803ff660: movss dword ptr [r10 + 0x50], xmm2 */
L_1803ff660_0:;
L_1803ff660_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x50))));
L_1803ff660_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803ff660_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ff660_4:;
/* 1803ff666: movss xmm2, dword ptr [r10 + 0x5c] */
L_1803ff666_0:;
L_1803ff666_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x5c))));
L_1803ff666_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff666_3:;
wr(s->r,4736,4,rd(s->u,8,4));
L_1803ff666_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff666_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff666_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff666_7:;
/* 1803ff66c: addss xmm8, xmm5 */
L_1803ff66c_0:;
L_1803ff66c_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff66c_2:;
/* 1803ff671: movss xmm5, dword ptr [r10 + 0x3c] */
L_1803ff671_0:;
L_1803ff671_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x3c))));
L_1803ff671_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff671_3:;
wr(s->r,4928,4,rd(s->u,8,4));
L_1803ff671_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff671_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff671_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff671_7:;
/* 1803ff677: movss dword ptr [r10 + 0x10], xmm8 */
L_1803ff677_0:;
L_1803ff677_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x10))));
L_1803ff677_2:;
wr(s->u,8,4,rd(s->r,5120,4));
L_1803ff677_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ff677_4:;
/* 1803ff67d: movaps xmm8, xmm0 */
L_1803ff67d_0:;
L_1803ff67d_1:;
wr(s->r,5120,4,rd(s->r,4608,4));
L_1803ff67d_2:;
wr(s->r,5124,4,rd(s->r,4612,4));
L_1803ff67d_3:;
wr(s->r,5128,4,rd(s->r,4616,4));
L_1803ff67d_4:;
wr(s->r,5132,4,rd(s->r,4620,4));
L_1803ff67d_5:;
/* 1803ff681: subss xmm0, xmm4 */
L_1803ff681_0:;
L_1803ff681_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ff681_2:;
/* 1803ff685: movss dword ptr [r10 + 0x54], xmm0 */
L_1803ff685_0:;
L_1803ff685_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x54))));
L_1803ff685_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803ff685_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ff685_4:;
/* 1803ff68b: movaps xmm0, xmm3 */
L_1803ff68b_0:;
L_1803ff68b_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ff68b_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ff68b_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ff68b_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ff68b_5:;
/* 1803ff68e: addss xmm8, xmm4 */
L_1803ff68e_0:;
L_1803ff68e_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ff68e_2:;
/* 1803ff693: movss dword ptr [r10 + 0x14], xmm8 */
L_1803ff693_0:;
L_1803ff693_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x14))));
L_1803ff693_2:;
wr(s->u,8,4,rd(s->r,5120,4));
L_1803ff693_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ff693_4:;
/* 1803ff699: addss xmm0, xmm7 */
L_1803ff699_0:;
L_1803ff699_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ff699_2:;
/* 1803ff69d: movss dword ptr [r10 + 0x30], xmm0 */
L_1803ff69d_0:;
L_1803ff69d_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x30))));
L_1803ff69d_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803ff69d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ff69d_4:;
/* 1803ff6a3: movaps xmm0, xmm1 */
L_1803ff6a3_0:;
L_1803ff6a3_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803ff6a3_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803ff6a3_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803ff6a3_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803ff6a3_5:;
/* 1803ff6a6: subss xmm3, xmm7 */
L_1803ff6a6_0:;
L_1803ff6a6_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5056,4),4),4));
L_1803ff6a6_2:;
/* 1803ff6aa: movss dword ptr [r10 + 0x70], xmm3 */
L_1803ff6aa_0:;
L_1803ff6aa_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x70))));
L_1803ff6aa_2:;
wr(s->u,8,4,rd(s->r,4800,4));
L_1803ff6aa_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ff6aa_4:;
/* 1803ff6b0: movss xmm3, dword ptr [r10 + 0x58] */
L_1803ff6b0_0:;
L_1803ff6b0_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x58))));
L_1803ff6b0_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff6b0_3:;
wr(s->r,4800,4,rd(s->u,8,4));
L_1803ff6b0_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff6b0_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff6b0_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff6b0_7:;
/* 1803ff6b6: subss xmm0, xmm6 */
L_1803ff6b6_0:;
L_1803ff6b6_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803ff6b6_2:;
/* 1803ff6ba: movss dword ptr [r10 + 0x34], xmm0 */
L_1803ff6ba_0:;
L_1803ff6ba_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x34))));
L_1803ff6ba_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803ff6ba_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ff6ba_4:;
/* 1803ff6c0: movaps xmm0, xmm2 */
L_1803ff6c0_0:;
L_1803ff6c0_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803ff6c0_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803ff6c0_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803ff6c0_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803ff6c0_5:;
/* 1803ff6c3: addss xmm1, xmm6 */
L_1803ff6c3_0:;
L_1803ff6c3_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803ff6c3_2:;
/* 1803ff6c7: movss dword ptr [r10 + 0x74], xmm1 */
L_1803ff6c7_0:;
L_1803ff6c7_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x74))));
L_1803ff6c7_2:;
wr(s->u,8,4,rd(s->r,4672,4));
L_1803ff6c7_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ff6c7_4:;
/* 1803ff6cd: movaps xmm1, xmm3 */
L_1803ff6cd_0:;
L_1803ff6cd_1:;
wr(s->r,4672,4,rd(s->r,4800,4));
L_1803ff6cd_2:;
wr(s->r,4676,4,rd(s->r,4804,4));
L_1803ff6cd_3:;
wr(s->r,4680,4,rd(s->r,4808,4));
L_1803ff6cd_4:;
wr(s->r,4684,4,rd(s->r,4812,4));
L_1803ff6cd_5:;
return UINT64_C(0x1803ff6d0);
}
uint64_t b_1803ff6c0(CPU*s){
/* 1803ff6c0: movaps xmm0, xmm2 */
L_1803ff6c0_0:;
L_1803ff6c0_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803ff6c0_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803ff6c0_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803ff6c0_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803ff6c0_5:;
/* 1803ff6c3: addss xmm1, xmm6 */
L_1803ff6c3_0:;
L_1803ff6c3_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803ff6c3_2:;
/* 1803ff6c7: movss dword ptr [r10 + 0x74], xmm1 */
L_1803ff6c7_0:;
L_1803ff6c7_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x74))));
L_1803ff6c7_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803ff6c7_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff6c7_4:;
/* 1803ff6cd: movaps xmm1, xmm3 */
L_1803ff6cd_0:;
L_1803ff6cd_1:;
wr(s->r,4672,4,rd(s->r,4800,4));
L_1803ff6cd_2:;
wr(s->r,4676,4,rd(s->r,4804,4));
L_1803ff6cd_3:;
wr(s->r,4680,4,rd(s->r,4808,4));
L_1803ff6cd_4:;
wr(s->r,4684,4,rd(s->r,4812,4));
L_1803ff6cd_5:;
/* 1803ff6d0: movss xmm4, dword ptr [r8 + rbp*4 + 0x10] */
L_1803ff6d0_0:;
L_1803ff6d0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,128,8)));
L_1803ff6d0_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff6d0_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff6d0_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff6d0_5:;
wr(s->r,4864,4,rd(s->u,32,4));
L_1803ff6d0_6:;
wr(s->r,4868,4,((U)UINT64_C(0x0)));
L_1803ff6d0_7:;
wr(s->r,4872,4,((U)UINT64_C(0x0)));
L_1803ff6d0_8:;
wr(s->r,4876,4,((U)UINT64_C(0x0)));
L_1803ff6d0_9:;
/* 1803ff6d7: mulss xmm2, xmm4 */
L_1803ff6d7_0:;
L_1803ff6d7_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4864,4),4),4));
L_1803ff6d7_2:;
/* 1803ff6db: mulss xmm1, xmm4 */
L_1803ff6db_0:;
L_1803ff6db_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4864,4),4),4));
L_1803ff6db_2:;
/* 1803ff6df: movss xmm8, dword ptr [r8 + rbp*4 + 0x14] */
L_1803ff6df_0:;
L_1803ff6df_1:;
wr(s->u,8,8,(((U)UINT64_C(0x14))+rd(s->r,128,8)));
L_1803ff6df_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff6df_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff6df_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff6df_5:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803ff6df_6:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff6df_7:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff6df_8:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff6df_9:;
/* 1803ff6e6: mulss xmm0, xmm8 */
L_1803ff6e6_0:;
L_1803ff6e6_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803ff6e6_2:;
/* 1803ff6eb: mulss xmm3, xmm8 */
L_1803ff6eb_0:;
L_1803ff6eb_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803ff6eb_2:;
/* 1803ff6f0: subss xmm1, xmm0 */
L_1803ff6f0_0:;
L_1803ff6f0_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff6f0_2:;
/* 1803ff6f4: movaps xmm7, xmm1 */
L_1803ff6f4_0:;
L_1803ff6f4_1:;
wr(s->r,5056,4,rd(s->r,4672,4));
L_1803ff6f4_2:;
wr(s->r,5060,4,rd(s->r,4676,4));
L_1803ff6f4_3:;
wr(s->r,5064,4,rd(s->r,4680,4));
L_1803ff6f4_4:;
wr(s->r,5068,4,rd(s->r,4684,4));
L_1803ff6f4_5:;
/* 1803ff6f7: movss xmm0, dword ptr [r10 + 0x7c] */
L_1803ff6f7_0:;
L_1803ff6f7_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x7c))));
L_1803ff6f7_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff6f7_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ff6f7_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ff6f7_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ff6f7_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ff6f7_7:;
/* 1803ff6fd: mulss xmm4, xmm0 */
L_1803ff6fd_0:;
L_1803ff6fd_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803ff6fd_2:;
/* 1803ff701: addss xmm3, xmm2 */
L_1803ff701_0:;
L_1803ff701_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff701_2:;
/* 1803ff705: movss xmm2, dword ptr [r10 + 0x78] */
L_1803ff705_0:;
L_1803ff705_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x78))));
L_1803ff705_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff705_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ff705_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff705_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff705_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff705_7:;
/* 1803ff70b: mulss xmm8, xmm2 */
L_1803ff70b_0:;
L_1803ff70b_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803ff70b_2:;
/* 1803ff710: subss xmm8, xmm4 */
L_1803ff710_0:;
L_1803ff710_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ff710_2:;
/* 1803ff715: movss xmm4, dword ptr [r10 + 0x38] */
L_1803ff715_0:;
L_1803ff715_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x38))));
L_1803ff715_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff715_3:;
wr(s->r,4864,4,rd(s->u,32,4));
L_1803ff715_4:;
wr(s->r,4868,4,((U)UINT64_C(0x0)));
L_1803ff715_5:;
wr(s->r,4872,4,((U)UINT64_C(0x0)));
L_1803ff715_6:;
wr(s->r,4876,4,((U)UINT64_C(0x0)));
L_1803ff715_7:;
/* 1803ff71b: movaps xmm6, xmm4 */
L_1803ff71b_0:;
L_1803ff71b_1:;
wr(s->r,4992,4,rd(s->r,4864,4));
L_1803ff71b_2:;
wr(s->r,4996,4,rd(s->r,4868,4));
L_1803ff71b_3:;
wr(s->r,5000,4,rd(s->r,4872,4));
L_1803ff71b_4:;
wr(s->r,5004,4,rd(s->r,4876,4));
L_1803ff71b_5:;
/* 1803ff71e: addss xmm7, xmm8 */
L_1803ff71e_0:;
L_1803ff71e_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff71e_2:;
/* 1803ff723: subss xmm1, xmm8 */
L_1803ff723_0:;
L_1803ff723_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ff723_2:;
/* 1803ff728: movaps xmm8, xmm9 */
L_1803ff728_0:;
L_1803ff728_1:;
wr(s->r,5120,4,rd(s->r,5184,4));
L_1803ff728_2:;
wr(s->r,5124,4,rd(s->r,5188,4));
L_1803ff728_3:;
wr(s->r,5128,4,rd(s->r,5192,4));
L_1803ff728_4:;
wr(s->r,5132,4,rd(s->r,5196,4));
L_1803ff728_5:;
/* 1803ff72c: subss xmm6, xmm5 */
L_1803ff72c_0:;
L_1803ff72c_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ff72c_2:;
/* 1803ff730: mulss xmm6, dword ptr [r8 + rbp*4 + 0xc] */
L_1803ff730_0:;
L_1803ff730_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc))+rd(s->r,128,8)));
L_1803ff730_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff730_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff730_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff730_5:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff730_6:;
/* 1803ff737: addss xmm5, xmm4 */
L_1803ff737_0:;
L_1803ff737_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ff737_2:;
/* 1803ff73b: addss xmm8, xmm6 */
L_1803ff73b_0:;
L_1803ff73b_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803ff73b_2:;
/* 1803ff740: subss xmm9, xmm6 */
L_1803ff740_0:;
L_1803ff740_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803ff740_2:;
/* 1803ff745: movaps xmm6, xmm8 */
L_1803ff745_0:;
L_1803ff745_1:;
wr(s->r,4992,4,rd(s->r,5120,4));
L_1803ff745_2:;
wr(s->r,4996,4,rd(s->r,5124,4));
L_1803ff745_3:;
wr(s->r,5000,4,rd(s->r,5128,4));
L_1803ff745_4:;
wr(s->r,5004,4,rd(s->r,5132,4));
L_1803ff745_5:;
/* 1803ff749: subss xmm8, xmm7 */
L_1803ff749_0:;
L_1803ff749_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,5056,4),4),4));
L_1803ff749_2:;
/* 1803ff74e: movss dword ptr [r10 + 0x58], xmm8 */
L_1803ff74e_0:;
L_1803ff74e_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x58))));
L_1803ff74e_2:;
wr(s->u,32,4,rd(s->r,5120,4));
L_1803ff74e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff74e_4:;
/* 1803ff754: addss xmm6, xmm7 */
L_1803ff754_0:;
L_1803ff754_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ff754_2:;
return UINT64_C(0x1803ff758);
}
uint64_t b_1803ff6d0(CPU*s){
/* 1803ff6d0: movss xmm4, dword ptr [r8 + rbp*4 + 0x10] */
L_1803ff6d0_0:;
L_1803ff6d0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,128,8)));
L_1803ff6d0_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff6d0_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff6d0_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff6d0_5:;
wr(s->r,4864,4,rd(s->u,32,4));
L_1803ff6d0_6:;
wr(s->r,4868,4,((U)UINT64_C(0x0)));
L_1803ff6d0_7:;
wr(s->r,4872,4,((U)UINT64_C(0x0)));
L_1803ff6d0_8:;
wr(s->r,4876,4,((U)UINT64_C(0x0)));
L_1803ff6d0_9:;
/* 1803ff6d7: mulss xmm2, xmm4 */
L_1803ff6d7_0:;
L_1803ff6d7_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4864,4),4),4));
L_1803ff6d7_2:;
/* 1803ff6db: mulss xmm1, xmm4 */
L_1803ff6db_0:;
L_1803ff6db_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4864,4),4),4));
L_1803ff6db_2:;
/* 1803ff6df: movss xmm8, dword ptr [r8 + rbp*4 + 0x14] */
L_1803ff6df_0:;
L_1803ff6df_1:;
wr(s->u,8,8,(((U)UINT64_C(0x14))+rd(s->r,128,8)));
L_1803ff6df_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff6df_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff6df_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff6df_5:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803ff6df_6:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff6df_7:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff6df_8:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff6df_9:;
/* 1803ff6e6: mulss xmm0, xmm8 */
L_1803ff6e6_0:;
L_1803ff6e6_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803ff6e6_2:;
/* 1803ff6eb: mulss xmm3, xmm8 */
L_1803ff6eb_0:;
L_1803ff6eb_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803ff6eb_2:;
/* 1803ff6f0: subss xmm1, xmm0 */
L_1803ff6f0_0:;
L_1803ff6f0_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff6f0_2:;
/* 1803ff6f4: movaps xmm7, xmm1 */
L_1803ff6f4_0:;
L_1803ff6f4_1:;
wr(s->r,5056,4,rd(s->r,4672,4));
L_1803ff6f4_2:;
wr(s->r,5060,4,rd(s->r,4676,4));
L_1803ff6f4_3:;
wr(s->r,5064,4,rd(s->r,4680,4));
L_1803ff6f4_4:;
wr(s->r,5068,4,rd(s->r,4684,4));
L_1803ff6f4_5:;
/* 1803ff6f7: movss xmm0, dword ptr [r10 + 0x7c] */
L_1803ff6f7_0:;
L_1803ff6f7_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x7c))));
L_1803ff6f7_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff6f7_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ff6f7_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ff6f7_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ff6f7_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ff6f7_7:;
/* 1803ff6fd: mulss xmm4, xmm0 */
L_1803ff6fd_0:;
L_1803ff6fd_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803ff6fd_2:;
/* 1803ff701: addss xmm3, xmm2 */
L_1803ff701_0:;
L_1803ff701_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff701_2:;
/* 1803ff705: movss xmm2, dword ptr [r10 + 0x78] */
L_1803ff705_0:;
L_1803ff705_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x78))));
L_1803ff705_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff705_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ff705_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff705_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff705_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff705_7:;
/* 1803ff70b: mulss xmm8, xmm2 */
L_1803ff70b_0:;
L_1803ff70b_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803ff70b_2:;
/* 1803ff710: subss xmm8, xmm4 */
L_1803ff710_0:;
L_1803ff710_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ff710_2:;
/* 1803ff715: movss xmm4, dword ptr [r10 + 0x38] */
L_1803ff715_0:;
L_1803ff715_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x38))));
L_1803ff715_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff715_3:;
wr(s->r,4864,4,rd(s->u,32,4));
L_1803ff715_4:;
wr(s->r,4868,4,((U)UINT64_C(0x0)));
L_1803ff715_5:;
wr(s->r,4872,4,((U)UINT64_C(0x0)));
L_1803ff715_6:;
wr(s->r,4876,4,((U)UINT64_C(0x0)));
L_1803ff715_7:;
/* 1803ff71b: movaps xmm6, xmm4 */
L_1803ff71b_0:;
L_1803ff71b_1:;
wr(s->r,4992,4,rd(s->r,4864,4));
L_1803ff71b_2:;
wr(s->r,4996,4,rd(s->r,4868,4));
L_1803ff71b_3:;
wr(s->r,5000,4,rd(s->r,4872,4));
L_1803ff71b_4:;
wr(s->r,5004,4,rd(s->r,4876,4));
L_1803ff71b_5:;
/* 1803ff71e: addss xmm7, xmm8 */
L_1803ff71e_0:;
L_1803ff71e_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff71e_2:;
/* 1803ff723: subss xmm1, xmm8 */
L_1803ff723_0:;
L_1803ff723_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ff723_2:;
/* 1803ff728: movaps xmm8, xmm9 */
L_1803ff728_0:;
L_1803ff728_1:;
wr(s->r,5120,4,rd(s->r,5184,4));
L_1803ff728_2:;
wr(s->r,5124,4,rd(s->r,5188,4));
L_1803ff728_3:;
wr(s->r,5128,4,rd(s->r,5192,4));
L_1803ff728_4:;
wr(s->r,5132,4,rd(s->r,5196,4));
L_1803ff728_5:;
/* 1803ff72c: subss xmm6, xmm5 */
L_1803ff72c_0:;
L_1803ff72c_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ff72c_2:;
/* 1803ff730: mulss xmm6, dword ptr [r8 + rbp*4 + 0xc] */
L_1803ff730_0:;
L_1803ff730_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc))+rd(s->r,128,8)));
L_1803ff730_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff730_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff730_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff730_5:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff730_6:;
/* 1803ff737: addss xmm5, xmm4 */
L_1803ff737_0:;
L_1803ff737_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ff737_2:;
/* 1803ff73b: addss xmm8, xmm6 */
L_1803ff73b_0:;
L_1803ff73b_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803ff73b_2:;
/* 1803ff740: subss xmm9, xmm6 */
L_1803ff740_0:;
L_1803ff740_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803ff740_2:;
/* 1803ff745: movaps xmm6, xmm8 */
L_1803ff745_0:;
L_1803ff745_1:;
wr(s->r,4992,4,rd(s->r,5120,4));
L_1803ff745_2:;
wr(s->r,4996,4,rd(s->r,5124,4));
L_1803ff745_3:;
wr(s->r,5000,4,rd(s->r,5128,4));
L_1803ff745_4:;
wr(s->r,5004,4,rd(s->r,5132,4));
L_1803ff745_5:;
/* 1803ff749: subss xmm8, xmm7 */
L_1803ff749_0:;
L_1803ff749_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,5056,4),4),4));
L_1803ff749_2:;
/* 1803ff74e: movss dword ptr [r10 + 0x58], xmm8 */
L_1803ff74e_0:;
L_1803ff74e_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x58))));
L_1803ff74e_2:;
wr(s->u,32,4,rd(s->r,5120,4));
L_1803ff74e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff74e_4:;
/* 1803ff754: addss xmm6, xmm7 */
L_1803ff754_0:;
L_1803ff754_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ff754_2:;
/* 1803ff758: movss dword ptr [r10 + 0x18], xmm6 */
L_1803ff758_0:;
L_1803ff758_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x18))));
L_1803ff758_2:;
wr(s->u,32,4,rd(s->r,4992,4));
L_1803ff758_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff758_4:;
/* 1803ff75e: mulss xmm5, dword ptr [r8 + rbp*4 + 0xc] */
L_1803ff75e_0:;
L_1803ff75e_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc))+rd(s->r,128,8)));
L_1803ff75e_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff75e_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff75e_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff75e_5:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff75e_6:;
/* 1803ff765: movss xmm6, dword ptr [r8 + rbp*4 + 0x14] */
L_1803ff765_0:;
L_1803ff765_1:;
wr(s->u,8,8,(((U)UINT64_C(0x14))+rd(s->r,128,8)));
L_1803ff765_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff765_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff765_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff765_5:;
wr(s->r,4992,4,rd(s->u,32,4));
L_1803ff765_6:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ff765_7:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ff765_8:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ff765_9:;
/* 1803ff76c: mulss xmm0, xmm6 */
L_1803ff76c_0:;
L_1803ff76c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803ff76c_2:;
return UINT64_C(0x1803ff770);
}
uint64_t b_1803ff758(CPU*s){
/* 1803ff758: movss dword ptr [r10 + 0x18], xmm6 */
L_1803ff758_0:;
L_1803ff758_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x18))));
L_1803ff758_2:;
wr(s->u,32,4,rd(s->r,4992,4));
L_1803ff758_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff758_4:;
/* 1803ff75e: mulss xmm5, dword ptr [r8 + rbp*4 + 0xc] */
L_1803ff75e_0:;
L_1803ff75e_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc))+rd(s->r,128,8)));
L_1803ff75e_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff75e_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff75e_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff75e_5:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ff75e_6:;
/* 1803ff765: movss xmm6, dword ptr [r8 + rbp*4 + 0x14] */
L_1803ff765_0:;
L_1803ff765_1:;
wr(s->u,8,8,(((U)UINT64_C(0x14))+rd(s->r,128,8)));
L_1803ff765_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff765_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff765_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff765_5:;
wr(s->r,4992,4,rd(s->u,32,4));
L_1803ff765_6:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ff765_7:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ff765_8:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ff765_9:;
/* 1803ff76c: mulss xmm0, xmm6 */
L_1803ff76c_0:;
L_1803ff76c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803ff76c_2:;
/* 1803ff770: movss xmm6, dword ptr [r8 + rbp*4 + 0x10] */
L_1803ff770_0:;
L_1803ff770_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,128,8)));
L_1803ff770_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff770_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff770_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff770_5:;
wr(s->r,4992,4,rd(s->u,32,4));
L_1803ff770_6:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ff770_7:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ff770_8:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ff770_9:;
/* 1803ff777: mulss xmm2, xmm6 */
L_1803ff777_0:;
L_1803ff777_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803ff777_2:;
/* 1803ff77b: movss xmm6, dword ptr [r10 + 0x1c] */
L_1803ff77b_0:;
L_1803ff77b_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x1c))));
L_1803ff77b_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff77b_3:;
wr(s->r,4992,4,rd(s->u,32,4));
L_1803ff77b_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ff77b_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ff77b_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ff77b_7:;
/* 1803ff781: movaps xmm4, xmm6 */
L_1803ff781_0:;
L_1803ff781_1:;
wr(s->r,4864,4,rd(s->r,4992,4));
L_1803ff781_2:;
wr(s->r,4868,4,rd(s->r,4996,4));
L_1803ff781_3:;
wr(s->r,4872,4,rd(s->r,5000,4));
L_1803ff781_4:;
wr(s->r,4876,4,rd(s->r,5004,4));
L_1803ff781_5:;
/* 1803ff784: addss xmm0, xmm2 */
L_1803ff784_0:;
L_1803ff784_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff784_2:;
/* 1803ff788: movaps xmm2, xmm3 */
L_1803ff788_0:;
L_1803ff788_1:;
wr(s->r,4736,4,rd(s->r,4800,4));
L_1803ff788_2:;
wr(s->r,4740,4,rd(s->r,4804,4));
L_1803ff788_3:;
wr(s->r,4744,4,rd(s->r,4808,4));
L_1803ff788_4:;
wr(s->r,4748,4,rd(s->r,4812,4));
L_1803ff788_5:;
/* 1803ff78b: subss xmm3, xmm0 */
L_1803ff78b_0:;
L_1803ff78b_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff78b_2:;
/* 1803ff78f: addss xmm4, xmm5 */
L_1803ff78f_0:;
L_1803ff78f_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff78f_2:;
/* 1803ff793: addss xmm2, xmm0 */
L_1803ff793_0:;
L_1803ff793_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff793_2:;
/* 1803ff797: movaps xmm0, xmm4 */
L_1803ff797_0:;
L_1803ff797_1:;
wr(s->r,4608,4,rd(s->r,4864,4));
L_1803ff797_2:;
wr(s->r,4612,4,rd(s->r,4868,4));
L_1803ff797_3:;
wr(s->r,4616,4,rd(s->r,4872,4));
L_1803ff797_4:;
wr(s->r,4620,4,rd(s->r,4876,4));
L_1803ff797_5:;
/* 1803ff79a: subss xmm6, xmm5 */
L_1803ff79a_0:;
L_1803ff79a_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ff79a_2:;
/* 1803ff79e: subss xmm4, xmm2 */
L_1803ff79e_0:;
L_1803ff79e_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff79e_2:;
/* 1803ff7a2: movss dword ptr [r10 + 0x5c], xmm4 */
L_1803ff7a2_0:;
L_1803ff7a2_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x5c))));
L_1803ff7a2_2:;
wr(s->u,32,4,rd(s->r,4864,4));
L_1803ff7a2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff7a2_4:;
/* 1803ff7a8: addss xmm0, xmm2 */
L_1803ff7a8_0:;
L_1803ff7a8_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff7a8_2:;
/* 1803ff7ac: movss dword ptr [r10 + 0x1c], xmm0 */
L_1803ff7ac_0:;
L_1803ff7ac_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x1c))));
L_1803ff7ac_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff7ac_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff7ac_4:;
/* 1803ff7b2: movaps xmm0, xmm9 */
L_1803ff7b2_0:;
L_1803ff7b2_1:;
wr(s->r,4608,4,rd(s->r,5184,4));
L_1803ff7b2_2:;
wr(s->r,4612,4,rd(s->r,5188,4));
L_1803ff7b2_3:;
wr(s->r,4616,4,rd(s->r,5192,4));
L_1803ff7b2_4:;
wr(s->r,4620,4,rd(s->r,5196,4));
L_1803ff7b2_5:;
/* 1803ff7b6: subss xmm9, xmm3 */
L_1803ff7b6_0:;
L_1803ff7b6_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ff7b6_2:;
/* 1803ff7bb: movss dword ptr [r10 + 0x78], xmm9 */
L_1803ff7bb_0:;
L_1803ff7bb_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x78))));
L_1803ff7bb_2:;
wr(s->u,32,4,rd(s->r,5184,4));
L_1803ff7bb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff7bb_4:;
/* 1803ff7c1: addss xmm0, xmm3 */
L_1803ff7c1_0:;
L_1803ff7c1_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff7c1_2:;
/* 1803ff7c5: movss dword ptr [r10 + 0x38], xmm0 */
L_1803ff7c5_0:;
L_1803ff7c5_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x38))));
L_1803ff7c5_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff7c5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff7c5_4:;
/* 1803ff7cb: movaps xmm0, xmm6 */
L_1803ff7cb_0:;
L_1803ff7cb_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803ff7cb_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803ff7cb_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803ff7cb_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803ff7cb_5:;
/* 1803ff7ce: addss xmm6, xmm1 */
L_1803ff7ce_0:;
L_1803ff7ce_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff7ce_2:;
/* 1803ff7d2: movss dword ptr [r10 + 0x7c], xmm6 */
L_1803ff7d2_0:;
L_1803ff7d2_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x7c))));
L_1803ff7d2_2:;
wr(s->u,32,4,rd(s->r,4992,4));
L_1803ff7d2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff7d2_4:;
/* 1803ff7d8: subss xmm0, xmm1 */
L_1803ff7d8_0:;
L_1803ff7d8_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff7d8_2:;
/* 1803ff7dc: movss dword ptr [r10 + 0x3c], xmm0 */
L_1803ff7dc_0:;
L_1803ff7dc_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x3c))));
L_1803ff7dc_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff7dc_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff7dc_4:;
/* 1803ff7e2: add r10, 0x80 */
L_1803ff7e2_0:;
L_1803ff7e2_1:;
wr(s->r,512,1,(((rd(s->r,144,8)+((U)UINT64_C(0x80)))&(((U)1<<64)-1))<rd(s->r,144,8)));
L_1803ff7e2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x80)),8,0));
L_1803ff7e2_3:;
wr(s->r,144,8,(rd(s->r,144,8)+((U)UINT64_C(0x80))));
L_1803ff7e2_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ff7e2_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803ff7e2_6:;
wr(s->u,38,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803ff7e2_7:;
wr(s->u,46,1,pop(rd(s->u,38,8),8));
L_1803ff7e2_8:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803ff7e2_9:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803ff7e2_10:;
/* 1803ff7e9: cmp eax, r11d */
L_1803ff7e9_0:;
L_1803ff7e9_1:;
wr(s->u,48,4,rd(s->r,152,4));
L_1803ff7e9_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,48,4)));
L_1803ff7e9_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,48,4),4,1));
L_1803ff7e9_4:;
wr(s->u,52,4,(rd(s->r,0,4)-rd(s->u,48,4)));
L_1803ff7e9_5:;
wr(s->r,519,1,(sx(rd(s->u,52,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff7e9_6:;
wr(s->r,518,1,(rd(s->u,52,4)==((U)UINT64_C(0x0))));
L_1803ff7e9_7:;
wr(s->u,38,4,(rd(s->u,52,4)&((U)UINT64_C(0xff))));
L_1803ff7e9_8:;
wr(s->u,46,1,pop(rd(s->u,38,4),4));
L_1803ff7e9_9:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803ff7e9_10:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803ff7e9_11:;
/* 1803ff7ec: jle 0x1803ff3c8 */
L_1803ff7ec_0:;
L_1803ff7ec_1:;
wr(s->u,36,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ff7ec_2:;
wr(s->u,37,1,((rd(s->r,518,1)!=0)||(rd(s->u,36,1)!=0)));
L_1803ff7ec_3:;
if(rd(s->u,37,1)){return UINT64_C(0x1803ff3c8);}
L_1803ff7ec_4:;
return UINT64_C(0x1803ff7f2);
}
uint64_t b_1803ff770(CPU*s){
/* 1803ff770: movss xmm6, dword ptr [r8 + rbp*4 + 0x10] */
L_1803ff770_0:;
L_1803ff770_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,128,8)));
L_1803ff770_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803ff770_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ff770_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ff770_5:;
wr(s->r,4992,4,rd(s->u,32,4));
L_1803ff770_6:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ff770_7:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ff770_8:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ff770_9:;
/* 1803ff777: mulss xmm2, xmm6 */
L_1803ff777_0:;
L_1803ff777_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803ff777_2:;
/* 1803ff77b: movss xmm6, dword ptr [r10 + 0x1c] */
L_1803ff77b_0:;
L_1803ff77b_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x1c))));
L_1803ff77b_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff77b_3:;
wr(s->r,4992,4,rd(s->u,32,4));
L_1803ff77b_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ff77b_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ff77b_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ff77b_7:;
/* 1803ff781: movaps xmm4, xmm6 */
L_1803ff781_0:;
L_1803ff781_1:;
wr(s->r,4864,4,rd(s->r,4992,4));
L_1803ff781_2:;
wr(s->r,4868,4,rd(s->r,4996,4));
L_1803ff781_3:;
wr(s->r,4872,4,rd(s->r,5000,4));
L_1803ff781_4:;
wr(s->r,4876,4,rd(s->r,5004,4));
L_1803ff781_5:;
/* 1803ff784: addss xmm0, xmm2 */
L_1803ff784_0:;
L_1803ff784_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff784_2:;
/* 1803ff788: movaps xmm2, xmm3 */
L_1803ff788_0:;
L_1803ff788_1:;
wr(s->r,4736,4,rd(s->r,4800,4));
L_1803ff788_2:;
wr(s->r,4740,4,rd(s->r,4804,4));
L_1803ff788_3:;
wr(s->r,4744,4,rd(s->r,4808,4));
L_1803ff788_4:;
wr(s->r,4748,4,rd(s->r,4812,4));
L_1803ff788_5:;
/* 1803ff78b: subss xmm3, xmm0 */
L_1803ff78b_0:;
L_1803ff78b_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff78b_2:;
/* 1803ff78f: addss xmm4, xmm5 */
L_1803ff78f_0:;
L_1803ff78f_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff78f_2:;
/* 1803ff793: addss xmm2, xmm0 */
L_1803ff793_0:;
L_1803ff793_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff793_2:;
/* 1803ff797: movaps xmm0, xmm4 */
L_1803ff797_0:;
L_1803ff797_1:;
wr(s->r,4608,4,rd(s->r,4864,4));
L_1803ff797_2:;
wr(s->r,4612,4,rd(s->r,4868,4));
L_1803ff797_3:;
wr(s->r,4616,4,rd(s->r,4872,4));
L_1803ff797_4:;
wr(s->r,4620,4,rd(s->r,4876,4));
L_1803ff797_5:;
/* 1803ff79a: subss xmm6, xmm5 */
L_1803ff79a_0:;
L_1803ff79a_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ff79a_2:;
/* 1803ff79e: subss xmm4, xmm2 */
L_1803ff79e_0:;
L_1803ff79e_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff79e_2:;
/* 1803ff7a2: movss dword ptr [r10 + 0x5c], xmm4 */
L_1803ff7a2_0:;
L_1803ff7a2_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x5c))));
L_1803ff7a2_2:;
wr(s->u,32,4,rd(s->r,4864,4));
L_1803ff7a2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff7a2_4:;
/* 1803ff7a8: addss xmm0, xmm2 */
L_1803ff7a8_0:;
L_1803ff7a8_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff7a8_2:;
/* 1803ff7ac: movss dword ptr [r10 + 0x1c], xmm0 */
L_1803ff7ac_0:;
L_1803ff7ac_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x1c))));
L_1803ff7ac_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff7ac_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff7ac_4:;
/* 1803ff7b2: movaps xmm0, xmm9 */
L_1803ff7b2_0:;
L_1803ff7b2_1:;
wr(s->r,4608,4,rd(s->r,5184,4));
L_1803ff7b2_2:;
wr(s->r,4612,4,rd(s->r,5188,4));
L_1803ff7b2_3:;
wr(s->r,4616,4,rd(s->r,5192,4));
L_1803ff7b2_4:;
wr(s->r,4620,4,rd(s->r,5196,4));
L_1803ff7b2_5:;
/* 1803ff7b6: subss xmm9, xmm3 */
L_1803ff7b6_0:;
L_1803ff7b6_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ff7b6_2:;
/* 1803ff7bb: movss dword ptr [r10 + 0x78], xmm9 */
L_1803ff7bb_0:;
L_1803ff7bb_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x78))));
L_1803ff7bb_2:;
wr(s->u,32,4,rd(s->r,5184,4));
L_1803ff7bb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff7bb_4:;
/* 1803ff7c1: addss xmm0, xmm3 */
L_1803ff7c1_0:;
L_1803ff7c1_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff7c1_2:;
/* 1803ff7c5: movss dword ptr [r10 + 0x38], xmm0 */
L_1803ff7c5_0:;
L_1803ff7c5_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x38))));
L_1803ff7c5_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff7c5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff7c5_4:;
/* 1803ff7cb: movaps xmm0, xmm6 */
L_1803ff7cb_0:;
L_1803ff7cb_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803ff7cb_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803ff7cb_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803ff7cb_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803ff7cb_5:;
/* 1803ff7ce: addss xmm6, xmm1 */
L_1803ff7ce_0:;
L_1803ff7ce_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff7ce_2:;
/* 1803ff7d2: movss dword ptr [r10 + 0x7c], xmm6 */
L_1803ff7d2_0:;
L_1803ff7d2_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x7c))));
L_1803ff7d2_2:;
wr(s->u,32,4,rd(s->r,4992,4));
L_1803ff7d2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff7d2_4:;
/* 1803ff7d8: subss xmm0, xmm1 */
L_1803ff7d8_0:;
L_1803ff7d8_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff7d8_2:;
/* 1803ff7dc: movss dword ptr [r10 + 0x3c], xmm0 */
L_1803ff7dc_0:;
L_1803ff7dc_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x3c))));
L_1803ff7dc_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff7dc_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff7dc_4:;
/* 1803ff7e2: add r10, 0x80 */
L_1803ff7e2_0:;
L_1803ff7e2_1:;
wr(s->r,512,1,(((rd(s->r,144,8)+((U)UINT64_C(0x80)))&(((U)1<<64)-1))<rd(s->r,144,8)));
L_1803ff7e2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x80)),8,0));
L_1803ff7e2_3:;
wr(s->r,144,8,(rd(s->r,144,8)+((U)UINT64_C(0x80))));
L_1803ff7e2_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ff7e2_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803ff7e2_6:;
wr(s->u,38,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803ff7e2_7:;
wr(s->u,46,1,pop(rd(s->u,38,8),8));
L_1803ff7e2_8:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803ff7e2_9:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803ff7e2_10:;
/* 1803ff7e9: cmp eax, r11d */
L_1803ff7e9_0:;
L_1803ff7e9_1:;
wr(s->u,48,4,rd(s->r,152,4));
L_1803ff7e9_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,48,4)));
L_1803ff7e9_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,48,4),4,1));
L_1803ff7e9_4:;
wr(s->u,52,4,(rd(s->r,0,4)-rd(s->u,48,4)));
L_1803ff7e9_5:;
wr(s->r,519,1,(sx(rd(s->u,52,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff7e9_6:;
wr(s->r,518,1,(rd(s->u,52,4)==((U)UINT64_C(0x0))));
L_1803ff7e9_7:;
wr(s->u,38,4,(rd(s->u,52,4)&((U)UINT64_C(0xff))));
L_1803ff7e9_8:;
wr(s->u,46,1,pop(rd(s->u,38,4),4));
L_1803ff7e9_9:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803ff7e9_10:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803ff7e9_11:;
/* 1803ff7ec: jle 0x1803ff3c8 */
L_1803ff7ec_0:;
L_1803ff7ec_1:;
wr(s->u,36,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ff7ec_2:;
wr(s->u,37,1,((rd(s->r,518,1)!=0)||(rd(s->u,36,1)!=0)));
L_1803ff7ec_3:;
if(rd(s->u,37,1)){return UINT64_C(0x1803ff3c8);}
L_1803ff7ec_4:;
return UINT64_C(0x1803ff7f2);
}
uint64_t b_1803ff7f2(CPU*s){
/* 1803ff7f2: movaps xmm6, xmmword ptr [rsp + 0x60] */
L_1803ff7f2_0:;
L_1803ff7f2_1:;
wr(s->u,5,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803ff7f2_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803ff7f2_3:;
wr(s->u,81,16,rd(s->u,13,16));
L_1803ff7f2_4:;
wr(s->r,4992,4,rd(s->u,81,4));
L_1803ff7f2_5:;
wr(s->r,4996,4,rd(s->u,85,4));
L_1803ff7f2_6:;
wr(s->r,5000,4,rd(s->u,89,4));
L_1803ff7f2_7:;
wr(s->r,5004,4,rd(s->u,93,4));
L_1803ff7f2_8:;
/* 1803ff7f7: movaps xmm7, xmmword ptr [rsp + 0x50] */
L_1803ff7f7_0:;
L_1803ff7f7_1:;
wr(s->u,5,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ff7f7_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803ff7f7_3:;
wr(s->u,81,16,rd(s->u,13,16));
L_1803ff7f7_4:;
wr(s->r,5056,4,rd(s->u,81,4));
L_1803ff7f7_5:;
wr(s->r,5060,4,rd(s->u,85,4));
L_1803ff7f7_6:;
wr(s->r,5064,4,rd(s->u,89,4));
L_1803ff7f7_7:;
wr(s->r,5068,4,rd(s->u,93,4));
L_1803ff7f7_8:;
/* 1803ff7fc: movaps xmm8, xmmword ptr [rsp + 0x40] */
L_1803ff7fc_0:;
L_1803ff7fc_1:;
wr(s->u,5,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ff7fc_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803ff7fc_3:;
wr(s->u,81,16,rd(s->u,13,16));
L_1803ff7fc_4:;
wr(s->r,5120,4,rd(s->u,81,4));
L_1803ff7fc_5:;
wr(s->r,5124,4,rd(s->u,85,4));
L_1803ff7fc_6:;
wr(s->r,5128,4,rd(s->u,89,4));
L_1803ff7fc_7:;
wr(s->r,5132,4,rd(s->u,93,4));
L_1803ff7fc_8:;
/* 1803ff802: movaps xmm9, xmmword ptr [rsp + 0x30] */
L_1803ff802_0:;
L_1803ff802_1:;
wr(s->u,5,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ff802_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803ff802_3:;
wr(s->u,81,16,rd(s->u,13,16));
L_1803ff802_4:;
wr(s->r,5184,4,rd(s->u,81,4));
L_1803ff802_5:;
wr(s->r,5188,4,rd(s->u,85,4));
L_1803ff802_6:;
wr(s->r,5192,4,rd(s->u,89,4));
L_1803ff802_7:;
wr(s->r,5196,4,rd(s->u,93,4));
L_1803ff802_8:;
/* 1803ff808: mov r10d, edx */
L_1803ff808_0:;
L_1803ff808_1:;
wr(s->r,144,4,rd(s->r,16,4));
L_1803ff808_2:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ff808_3:;
/* 1803ff80b: sar r10d, 6 */
L_1803ff80b_0:;
L_1803ff80b_1:;
wr(s->u,69,4,(((U)UINT64_C(0x6))&((U)UINT64_C(0x1f))));
L_1803ff80b_2:;
wr(s->u,73,4,rd(s->r,144,4));
L_1803ff80b_3:;
wr(s->r,144,4,((rd(s->u,69,4)>=32)?(sx(rd(s->r,144,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,144,4),4)>>rd(s->u,69,4))));
L_1803ff80b_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ff80b_5:;
wr(s->u,54,1,(rd(s->u,69,4)==((U)UINT64_C(0x0))));
L_1803ff80b_6:;
wr(s->u,55,4,(rd(s->u,69,4)-((U)UINT64_C(0x1))));
L_1803ff80b_7:;
wr(s->u,59,4,((rd(s->u,55,4)>=32)?(sx(rd(s->u,73,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,73,4),4)>>rd(s->u,55,4))));
L_1803ff80b_8:;
wr(s->u,63,4,(rd(s->u,59,4)&((U)UINT64_C(0x1))));
L_1803ff80b_9:;
wr(s->u,67,1,(rd(s->u,63,4)!=((U)UINT64_C(0x0))));
L_1803ff80b_10:;
wr(s->u,0,1,rd(s->u,54,1));
L_1803ff80b_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ff80b_12:;
wr(s->u,2,1,(!rd(s->u,54,1)));
L_1803ff80b_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ff80b_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,67,1)));
L_1803ff80b_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ff80b_16:;
wr(s->u,68,1,(rd(s->u,69,4)==((U)UINT64_C(0x1))));
L_1803ff80b_17:;
wr(s->u,0,1,rd(s->u,68,1));
L_1803ff80b_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ff80b_19:;
wr(s->u,2,1,(!rd(s->u,68,1)));
L_1803ff80b_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ff80b_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ff80b_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ff80b_23:;
wr(s->u,35,1,(rd(s->u,69,4)!=((U)UINT64_C(0x0))));
L_1803ff80b_24:;
wr(s->u,36,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff80b_25:;
wr(s->u,37,1,(!rd(s->u,35,1)));
L_1803ff80b_26:;
wr(s->u,38,1,(rd(s->u,37,1)&rd(s->r,519,1)));
L_1803ff80b_27:;
wr(s->u,39,1,(rd(s->u,35,1)&rd(s->u,36,1)));
L_1803ff80b_28:;
wr(s->r,519,1,(rd(s->u,38,1)|rd(s->u,39,1)));
L_1803ff80b_29:;
wr(s->u,40,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803ff80b_30:;
wr(s->u,41,1,(!rd(s->u,35,1)));
L_1803ff80b_31:;
wr(s->u,42,1,(rd(s->u,41,1)&rd(s->r,518,1)));
L_1803ff80b_32:;
wr(s->u,43,1,(rd(s->u,35,1)&rd(s->u,40,1)));
L_1803ff80b_33:;
wr(s->r,518,1,(rd(s->u,42,1)|rd(s->u,43,1)));
L_1803ff80b_34:;
wr(s->u,44,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803ff80b_35:;
wr(s->u,48,1,pop(rd(s->u,44,4),4));
L_1803ff80b_36:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803ff80b_37:;
wr(s->u,50,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803ff80b_38:;
wr(s->u,51,1,(!rd(s->u,35,1)));
L_1803ff80b_39:;
wr(s->u,52,1,(rd(s->u,51,1)&rd(s->r,514,1)));
L_1803ff80b_40:;
wr(s->u,53,1,(rd(s->u,35,1)&rd(s->u,50,1)));
L_1803ff80b_41:;
wr(s->r,514,1,(rd(s->u,52,1)|rd(s->u,53,1)));
L_1803ff80b_42:;
/* 1803ff80f: test r10d, r10d */
L_1803ff80f_0:;
L_1803ff80f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ff80f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ff80f_3:;
wr(s->u,77,4,(rd(s->r,144,4)&rd(s->r,144,4)));
L_1803ff80f_4:;
wr(s->r,519,1,(sx(rd(s->u,77,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff80f_5:;
wr(s->r,518,1,(rd(s->u,77,4)==((U)UINT64_C(0x0))));
L_1803ff80f_6:;
wr(s->u,29,4,(rd(s->u,77,4)&((U)UINT64_C(0xff))));
L_1803ff80f_7:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803ff80f_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803ff80f_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803ff80f_10:;
/* 1803ff812: je 0x180400312 */
L_1803ff812_0:;
L_1803ff812_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180400312);}
L_1803ff812_2:;
return UINT64_C(0x1803ff818);
}
uint64_t b_1803ff808(CPU*s){
/* 1803ff808: mov r10d, edx */
L_1803ff808_0:;
L_1803ff808_1:;
wr(s->r,144,4,rd(s->r,16,4));
L_1803ff808_2:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ff808_3:;
/* 1803ff80b: sar r10d, 6 */
L_1803ff80b_0:;
L_1803ff80b_1:;
wr(s->u,45,4,(((U)UINT64_C(0x6))&((U)UINT64_C(0x1f))));
L_1803ff80b_2:;
wr(s->u,49,4,rd(s->r,144,4));
L_1803ff80b_3:;
wr(s->r,144,4,((rd(s->u,45,4)>=32)?(sx(rd(s->r,144,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,144,4),4)>>rd(s->u,45,4))));
L_1803ff80b_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ff80b_5:;
wr(s->u,30,1,(rd(s->u,45,4)==((U)UINT64_C(0x0))));
L_1803ff80b_6:;
wr(s->u,31,4,(rd(s->u,45,4)-((U)UINT64_C(0x1))));
L_1803ff80b_7:;
wr(s->u,35,4,((rd(s->u,31,4)>=32)?(sx(rd(s->u,49,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,49,4),4)>>rd(s->u,31,4))));
L_1803ff80b_8:;
wr(s->u,39,4,(rd(s->u,35,4)&((U)UINT64_C(0x1))));
L_1803ff80b_9:;
wr(s->u,43,1,(rd(s->u,39,4)!=((U)UINT64_C(0x0))));
L_1803ff80b_10:;
wr(s->u,0,1,rd(s->u,30,1));
L_1803ff80b_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ff80b_12:;
wr(s->u,2,1,(!rd(s->u,30,1)));
L_1803ff80b_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ff80b_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,43,1)));
L_1803ff80b_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ff80b_16:;
wr(s->u,44,1,(rd(s->u,45,4)==((U)UINT64_C(0x1))));
L_1803ff80b_17:;
wr(s->u,0,1,rd(s->u,44,1));
L_1803ff80b_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ff80b_19:;
wr(s->u,2,1,(!rd(s->u,44,1)));
L_1803ff80b_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ff80b_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ff80b_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ff80b_23:;
wr(s->u,11,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803ff80b_24:;
wr(s->u,12,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff80b_25:;
wr(s->u,13,1,(!rd(s->u,11,1)));
L_1803ff80b_26:;
wr(s->u,14,1,(rd(s->u,13,1)&rd(s->r,519,1)));
L_1803ff80b_27:;
wr(s->u,15,1,(rd(s->u,11,1)&rd(s->u,12,1)));
L_1803ff80b_28:;
wr(s->r,519,1,(rd(s->u,14,1)|rd(s->u,15,1)));
L_1803ff80b_29:;
wr(s->u,16,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803ff80b_30:;
wr(s->u,17,1,(!rd(s->u,11,1)));
L_1803ff80b_31:;
wr(s->u,18,1,(rd(s->u,17,1)&rd(s->r,518,1)));
L_1803ff80b_32:;
wr(s->u,19,1,(rd(s->u,11,1)&rd(s->u,16,1)));
L_1803ff80b_33:;
wr(s->r,518,1,(rd(s->u,18,1)|rd(s->u,19,1)));
L_1803ff80b_34:;
wr(s->u,20,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803ff80b_35:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ff80b_36:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ff80b_37:;
wr(s->u,26,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ff80b_38:;
wr(s->u,27,1,(!rd(s->u,11,1)));
L_1803ff80b_39:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,514,1)));
L_1803ff80b_40:;
wr(s->u,29,1,(rd(s->u,11,1)&rd(s->u,26,1)));
L_1803ff80b_41:;
wr(s->r,514,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803ff80b_42:;
/* 1803ff80f: test r10d, r10d */
L_1803ff80f_0:;
L_1803ff80f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ff80f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ff80f_3:;
wr(s->u,53,4,(rd(s->r,144,4)&rd(s->r,144,4)));
L_1803ff80f_4:;
wr(s->r,519,1,(sx(rd(s->u,53,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff80f_5:;
wr(s->r,518,1,(rd(s->u,53,4)==((U)UINT64_C(0x0))));
L_1803ff80f_6:;
wr(s->u,5,4,(rd(s->u,53,4)&((U)UINT64_C(0xff))));
L_1803ff80f_7:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803ff80f_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ff80f_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ff80f_10:;
/* 1803ff812: je 0x180400312 */
L_1803ff812_0:;
L_1803ff812_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180400312);}
L_1803ff812_2:;
return UINT64_C(0x1803ff818);
}
uint64_t b_1803ff818(CPU*s){
/* 1803ff818: sar r9d, 5 */
L_1803ff818_0:;
L_1803ff818_1:;
wr(s->u,47,4,(((U)UINT64_C(0x5))&((U)UINT64_C(0x1f))));
L_1803ff818_2:;
wr(s->u,51,4,rd(s->r,136,4));
L_1803ff818_3:;
wr(s->r,136,4,((rd(s->u,47,4)>=32)?(sx(rd(s->r,136,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,136,4),4)>>rd(s->u,47,4))));
L_1803ff818_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ff818_5:;
wr(s->u,32,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803ff818_6:;
wr(s->u,33,4,(rd(s->u,47,4)-((U)UINT64_C(0x1))));
L_1803ff818_7:;
wr(s->u,37,4,((rd(s->u,33,4)>=32)?(sx(rd(s->u,51,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,51,4),4)>>rd(s->u,33,4))));
L_1803ff818_8:;
wr(s->u,41,4,(rd(s->u,37,4)&((U)UINT64_C(0x1))));
L_1803ff818_9:;
wr(s->u,45,1,(rd(s->u,41,4)!=((U)UINT64_C(0x0))));
L_1803ff818_10:;
wr(s->u,0,1,rd(s->u,32,1));
L_1803ff818_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ff818_12:;
wr(s->u,2,1,(!rd(s->u,32,1)));
L_1803ff818_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ff818_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,45,1)));
L_1803ff818_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ff818_16:;
wr(s->u,46,1,(rd(s->u,47,4)==((U)UINT64_C(0x1))));
L_1803ff818_17:;
wr(s->u,0,1,rd(s->u,46,1));
L_1803ff818_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ff818_19:;
wr(s->u,2,1,(!rd(s->u,46,1)));
L_1803ff818_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ff818_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ff818_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ff818_23:;
wr(s->u,13,1,(rd(s->u,47,4)!=((U)UINT64_C(0x0))));
L_1803ff818_24:;
wr(s->u,14,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff818_25:;
wr(s->u,15,1,(!rd(s->u,13,1)));
L_1803ff818_26:;
wr(s->u,16,1,(rd(s->u,15,1)&rd(s->r,519,1)));
L_1803ff818_27:;
wr(s->u,17,1,(rd(s->u,13,1)&rd(s->u,14,1)));
L_1803ff818_28:;
wr(s->r,519,1,(rd(s->u,16,1)|rd(s->u,17,1)));
L_1803ff818_29:;
wr(s->u,18,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803ff818_30:;
wr(s->u,19,1,(!rd(s->u,13,1)));
L_1803ff818_31:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,518,1)));
L_1803ff818_32:;
wr(s->u,21,1,(rd(s->u,13,1)&rd(s->u,18,1)));
L_1803ff818_33:;
wr(s->r,518,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803ff818_34:;
wr(s->u,22,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803ff818_35:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803ff818_36:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803ff818_37:;
wr(s->u,28,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803ff818_38:;
wr(s->u,29,1,(!rd(s->u,13,1)));
L_1803ff818_39:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,514,1)));
L_1803ff818_40:;
wr(s->u,31,1,(rd(s->u,13,1)&rd(s->u,28,1)));
L_1803ff818_41:;
wr(s->r,514,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803ff818_42:;
/* 1803ff81c: movsxd r9, r9d */
L_1803ff81c_0:;
L_1803ff81c_1:;
wr(s->r,136,8,(U)sx(rd(s->r,136,4),4));
L_1803ff81c_2:;
/* 1803ff81f: mov rbp, rcx */
L_1803ff81f_0:;
L_1803ff81f_1:;
wr(s->r,40,8,rd(s->r,8,8));
L_1803ff81f_2:;
/* 1803ff822: xor eax, eax */
L_1803ff822_0:;
L_1803ff822_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ff822_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ff822_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ff822_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ff822_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff822_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ff822_7:;
wr(s->u,7,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ff822_8:;
wr(s->u,11,1,pop(rd(s->u,7,4),4));
L_1803ff822_9:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803ff822_10:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803ff822_11:;
/* 1803ff824: test r10d, r10d */
L_1803ff824_0:;
L_1803ff824_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ff824_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ff824_3:;
wr(s->u,55,4,(rd(s->r,144,4)&rd(s->r,144,4)));
L_1803ff824_4:;
wr(s->r,519,1,(sx(rd(s->u,55,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff824_5:;
wr(s->r,518,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803ff824_6:;
wr(s->u,7,4,(rd(s->u,55,4)&((U)UINT64_C(0xff))));
L_1803ff824_7:;
wr(s->u,11,1,pop(rd(s->u,7,4),4));
L_1803ff824_8:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803ff824_9:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803ff824_10:;
/* 1803ff827: jle 0x1803ffacf */
L_1803ff827_0:;
L_1803ff827_1:;
wr(s->u,5,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ff827_2:;
wr(s->u,6,1,((rd(s->r,518,1)!=0)||(rd(s->u,5,1)!=0)));
L_1803ff827_3:;
if(rd(s->u,6,1)){return UINT64_C(0x1803ffacf);}
L_1803ff827_4:;
return UINT64_C(0x1803ff82d);
}
uint64_t b_1803ff82d(CPU*s){
/* 1803ff82d: movaps xmmword ptr [rsp + 0x60], xmm6 */
L_1803ff82d_0:;
L_1803ff82d_1:;
wr(s->u,16,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803ff82d_2:;
wr(s->u,36,16,rd(s->r,4992,16));
L_1803ff82d_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803ff82d_4:;
/* 1803ff832: movaps xmmword ptr [rsp + 0x50], xmm7 */
L_1803ff832_0:;
L_1803ff832_1:;
wr(s->u,16,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ff832_2:;
wr(s->u,36,16,rd(s->r,5056,16));
L_1803ff832_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803ff832_4:;
/* 1803ff837: movaps xmmword ptr [rsp + 0x40], xmm8 */
L_1803ff837_0:;
L_1803ff837_1:;
wr(s->u,16,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ff837_2:;
wr(s->u,36,16,rd(s->r,5120,16));
L_1803ff837_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803ff837_4:;
/* 1803ff83d: movaps xmmword ptr [rsp + 0x30], xmm9 */
L_1803ff83d_0:;
L_1803ff83d_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ff83d_2:;
wr(s->u,36,16,rd(s->r,5184,16));
L_1803ff83d_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803ff83d_4:;
/* 1803ff843: mov qword ptr [rsp + 0x20], r14 */
L_1803ff843_0:;
L_1803ff843_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ff843_2:;
wr(s->u,28,8,rd(s->r,176,8));
L_1803ff843_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ff843_4:;
/* 1803ff848: movss xmm5, dword ptr [rbp] */
L_1803ff848_0:;
L_1803ff848_1:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803ff848_2:;
wr(s->r,4928,4,rd(s->u,24,4));
L_1803ff848_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff848_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff848_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff848_6:;
/* 1803ff84d: movss xmm8, dword ptr [rbp + 0x80] */
L_1803ff84d_0:;
L_1803ff84d_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x80))));
L_1803ff84d_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff84d_3:;
wr(s->r,5120,4,rd(s->u,24,4));
L_1803ff84d_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff84d_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff84d_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff84d_7:;
/* 1803ff856: movaps xmm6, xmm8 */
L_1803ff856_0:;
L_1803ff856_1:;
wr(s->r,4992,4,rd(s->r,5120,4));
L_1803ff856_2:;
wr(s->r,4996,4,rd(s->r,5124,4));
L_1803ff856_3:;
wr(s->r,5000,4,rd(s->r,5128,4));
L_1803ff856_4:;
wr(s->r,5004,4,rd(s->r,5132,4));
L_1803ff856_5:;
/* 1803ff85a: movss xmm7, dword ptr [rbp + 4] */
L_1803ff85a_0:;
L_1803ff85a_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ff85a_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff85a_3:;
wr(s->r,5056,4,rd(s->u,24,4));
L_1803ff85a_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff85a_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff85a_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff85a_7:;
/* 1803ff85f: movaps xmm4, xmm7 */
L_1803ff85f_0:;
L_1803ff85f_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803ff85f_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803ff85f_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803ff85f_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803ff85f_5:;
/* 1803ff862: movss xmm9, dword ptr [rbp + 0x84] */
L_1803ff862_0:;
L_1803ff862_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x84))));
L_1803ff862_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff862_3:;
wr(s->r,5184,4,rd(s->u,24,4));
L_1803ff862_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ff862_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ff862_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ff862_7:;
/* 1803ff86b: movss xmm3, dword ptr [rbp + 0x100] */
L_1803ff86b_0:;
L_1803ff86b_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803ff86b_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff86b_3:;
wr(s->r,4800,4,rd(s->u,24,4));
L_1803ff86b_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff86b_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff86b_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff86b_7:;
/* 1803ff873: movaps xmm0, xmm3 */
L_1803ff873_0:;
L_1803ff873_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ff873_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ff873_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ff873_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ff873_5:;
/* 1803ff876: movss xmm2, dword ptr [rbp + 0x104] */
L_1803ff876_0:;
L_1803ff876_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803ff876_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff876_3:;
wr(s->r,4736,4,rd(s->u,24,4));
L_1803ff876_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff876_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff876_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff876_7:;
/* 1803ff87e: movaps xmm1, xmm2 */
L_1803ff87e_0:;
L_1803ff87e_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803ff87e_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803ff87e_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803ff87e_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803ff87e_5:;
/* 1803ff881: addss xmm6, xmm5 */
L_1803ff881_0:;
L_1803ff881_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff881_2:;
/* 1803ff885: addss xmm4, xmm9 */
L_1803ff885_0:;
L_1803ff885_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ff885_2:;
/* 1803ff88a: subss xmm5, xmm8 */
L_1803ff88a_0:;
L_1803ff88a_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ff88a_2:;
/* 1803ff88f: movss xmm8, dword ptr [rbp + 0x180] */
L_1803ff88f_0:;
L_1803ff88f_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x180))));
L_1803ff88f_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff88f_3:;
wr(s->r,5120,4,rd(s->u,24,4));
L_1803ff88f_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff88f_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff88f_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff88f_7:;
/* 1803ff898: subss xmm7, xmm9 */
L_1803ff898_0:;
L_1803ff898_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ff898_2:;
/* 1803ff89d: movss xmm9, dword ptr [rbp + 0x184] */
L_1803ff89d_0:;
L_1803ff89d_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x184))));
L_1803ff89d_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff89d_3:;
wr(s->r,5184,4,rd(s->u,24,4));
L_1803ff89d_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ff89d_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ff89d_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ff89d_7:;
/* 1803ff8a6: addss xmm0, xmm8 */
L_1803ff8a6_0:;
L_1803ff8a6_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff8a6_2:;
/* 1803ff8ab: addss xmm1, xmm9 */
L_1803ff8ab_0:;
L_1803ff8ab_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ff8ab_2:;
/* 1803ff8b0: subss xmm3, xmm8 */
L_1803ff8b0_0:;
L_1803ff8b0_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ff8b0_2:;
/* 1803ff8b5: movaps xmm8, xmm6 */
L_1803ff8b5_0:;
L_1803ff8b5_1:;
wr(s->r,5120,4,rd(s->r,4992,4));
L_1803ff8b5_2:;
wr(s->r,5124,4,rd(s->r,4996,4));
L_1803ff8b5_3:;
wr(s->r,5128,4,rd(s->r,5000,4));
L_1803ff8b5_4:;
wr(s->r,5132,4,rd(s->r,5004,4));
L_1803ff8b5_5:;
/* 1803ff8b9: subss xmm2, xmm9 */
L_1803ff8b9_0:;
L_1803ff8b9_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ff8b9_2:;
/* 1803ff8be: subss xmm6, xmm0 */
L_1803ff8be_0:;
L_1803ff8be_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff8be_2:;
/* 1803ff8c2: movss dword ptr [rbp + 0x100], xmm6 */
L_1803ff8c2_0:;
L_1803ff8c2_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803ff8c2_2:;
wr(s->u,24,4,rd(s->r,4992,4));
L_1803ff8c2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803ff8c2_4:;
/* 1803ff8ca: addss xmm8, xmm0 */
L_1803ff8ca_0:;
L_1803ff8ca_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff8ca_2:;
/* 1803ff8cf: movss dword ptr [rbp], xmm8 */
L_1803ff8cf_0:;
L_1803ff8cf_1:;
wr(s->u,24,4,rd(s->r,5120,4));
L_1803ff8cf_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,24,4));
L_1803ff8cf_3:;
/* 1803ff8d5: movaps xmm8, xmm4 */
L_1803ff8d5_0:;
L_1803ff8d5_1:;
wr(s->r,5120,4,rd(s->r,4864,4));
L_1803ff8d5_2:;
wr(s->r,5124,4,rd(s->r,4868,4));
L_1803ff8d5_3:;
wr(s->r,5128,4,rd(s->r,4872,4));
L_1803ff8d5_4:;
wr(s->r,5132,4,rd(s->r,4876,4));
L_1803ff8d5_5:;
/* 1803ff8d9: movaps xmm0, xmm5 */
L_1803ff8d9_0:;
L_1803ff8d9_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ff8d9_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ff8d9_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ff8d9_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ff8d9_5:;
return UINT64_C(0x1803ff8dc);
}
uint64_t b_1803ff848(CPU*s){
/* 1803ff848: movss xmm5, dword ptr [rbp] */
L_1803ff848_0:;
L_1803ff848_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803ff848_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803ff848_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff848_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff848_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff848_6:;
/* 1803ff84d: movss xmm8, dword ptr [rbp + 0x80] */
L_1803ff84d_0:;
L_1803ff84d_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x80))));
L_1803ff84d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff84d_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ff84d_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff84d_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff84d_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff84d_7:;
/* 1803ff856: movaps xmm6, xmm8 */
L_1803ff856_0:;
L_1803ff856_1:;
wr(s->r,4992,4,rd(s->r,5120,4));
L_1803ff856_2:;
wr(s->r,4996,4,rd(s->r,5124,4));
L_1803ff856_3:;
wr(s->r,5000,4,rd(s->r,5128,4));
L_1803ff856_4:;
wr(s->r,5004,4,rd(s->r,5132,4));
L_1803ff856_5:;
/* 1803ff85a: movss xmm7, dword ptr [rbp + 4] */
L_1803ff85a_0:;
L_1803ff85a_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ff85a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff85a_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803ff85a_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff85a_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff85a_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff85a_7:;
/* 1803ff85f: movaps xmm4, xmm7 */
L_1803ff85f_0:;
L_1803ff85f_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803ff85f_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803ff85f_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803ff85f_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803ff85f_5:;
/* 1803ff862: movss xmm9, dword ptr [rbp + 0x84] */
L_1803ff862_0:;
L_1803ff862_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x84))));
L_1803ff862_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff862_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803ff862_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ff862_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ff862_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ff862_7:;
/* 1803ff86b: movss xmm3, dword ptr [rbp + 0x100] */
L_1803ff86b_0:;
L_1803ff86b_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803ff86b_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff86b_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803ff86b_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff86b_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff86b_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff86b_7:;
/* 1803ff873: movaps xmm0, xmm3 */
L_1803ff873_0:;
L_1803ff873_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ff873_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ff873_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ff873_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ff873_5:;
/* 1803ff876: movss xmm2, dword ptr [rbp + 0x104] */
L_1803ff876_0:;
L_1803ff876_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803ff876_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff876_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803ff876_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff876_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff876_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff876_7:;
/* 1803ff87e: movaps xmm1, xmm2 */
L_1803ff87e_0:;
L_1803ff87e_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803ff87e_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803ff87e_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803ff87e_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803ff87e_5:;
/* 1803ff881: addss xmm6, xmm5 */
L_1803ff881_0:;
L_1803ff881_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff881_2:;
/* 1803ff885: addss xmm4, xmm9 */
L_1803ff885_0:;
L_1803ff885_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ff885_2:;
/* 1803ff88a: subss xmm5, xmm8 */
L_1803ff88a_0:;
L_1803ff88a_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ff88a_2:;
/* 1803ff88f: movss xmm8, dword ptr [rbp + 0x180] */
L_1803ff88f_0:;
L_1803ff88f_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x180))));
L_1803ff88f_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff88f_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ff88f_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff88f_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff88f_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff88f_7:;
/* 1803ff898: subss xmm7, xmm9 */
L_1803ff898_0:;
L_1803ff898_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ff898_2:;
/* 1803ff89d: movss xmm9, dword ptr [rbp + 0x184] */
L_1803ff89d_0:;
L_1803ff89d_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x184))));
L_1803ff89d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff89d_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803ff89d_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ff89d_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ff89d_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ff89d_7:;
/* 1803ff8a6: addss xmm0, xmm8 */
L_1803ff8a6_0:;
L_1803ff8a6_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff8a6_2:;
/* 1803ff8ab: addss xmm1, xmm9 */
L_1803ff8ab_0:;
L_1803ff8ab_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ff8ab_2:;
/* 1803ff8b0: subss xmm3, xmm8 */
L_1803ff8b0_0:;
L_1803ff8b0_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ff8b0_2:;
/* 1803ff8b5: movaps xmm8, xmm6 */
L_1803ff8b5_0:;
L_1803ff8b5_1:;
wr(s->r,5120,4,rd(s->r,4992,4));
L_1803ff8b5_2:;
wr(s->r,5124,4,rd(s->r,4996,4));
L_1803ff8b5_3:;
wr(s->r,5128,4,rd(s->r,5000,4));
L_1803ff8b5_4:;
wr(s->r,5132,4,rd(s->r,5004,4));
L_1803ff8b5_5:;
/* 1803ff8b9: subss xmm2, xmm9 */
L_1803ff8b9_0:;
L_1803ff8b9_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ff8b9_2:;
/* 1803ff8be: subss xmm6, xmm0 */
L_1803ff8be_0:;
L_1803ff8be_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff8be_2:;
/* 1803ff8c2: movss dword ptr [rbp + 0x100], xmm6 */
L_1803ff8c2_0:;
L_1803ff8c2_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803ff8c2_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803ff8c2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff8c2_4:;
/* 1803ff8ca: addss xmm8, xmm0 */
L_1803ff8ca_0:;
L_1803ff8ca_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff8ca_2:;
/* 1803ff8cf: movss dword ptr [rbp], xmm8 */
L_1803ff8cf_0:;
L_1803ff8cf_1:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ff8cf_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803ff8cf_3:;
/* 1803ff8d5: movaps xmm8, xmm4 */
L_1803ff8d5_0:;
L_1803ff8d5_1:;
wr(s->r,5120,4,rd(s->r,4864,4));
L_1803ff8d5_2:;
wr(s->r,5124,4,rd(s->r,4868,4));
L_1803ff8d5_3:;
wr(s->r,5128,4,rd(s->r,4872,4));
L_1803ff8d5_4:;
wr(s->r,5132,4,rd(s->r,4876,4));
L_1803ff8d5_5:;
/* 1803ff8d9: movaps xmm0, xmm5 */
L_1803ff8d9_0:;
L_1803ff8d9_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ff8d9_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ff8d9_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ff8d9_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ff8d9_5:;
/* 1803ff8dc: subss xmm4, xmm1 */
L_1803ff8dc_0:;
L_1803ff8dc_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff8dc_2:;
/* 1803ff8e0: movss dword ptr [rbp + 0x104], xmm4 */
L_1803ff8e0_0:;
L_1803ff8e0_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803ff8e0_2:;
wr(s->u,16,4,rd(s->r,4864,4));
L_1803ff8e0_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff8e0_4:;
/* 1803ff8e8: addss xmm8, xmm1 */
L_1803ff8e8_0:;
L_1803ff8e8_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff8e8_2:;
/* 1803ff8ed: movss dword ptr [rbp + 4], xmm8 */
L_1803ff8ed_0:;
L_1803ff8ed_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ff8ed_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ff8ed_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ff8ed_4:;
/* 1803ff8f3: addss xmm0, xmm2 */
L_1803ff8f3_0:;
L_1803ff8f3_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff8f3_2:;
return UINT64_C(0x1803ff8f7);
}
uint64_t b_1803ff8dc(CPU*s){
/* 1803ff8dc: subss xmm4, xmm1 */
L_1803ff8dc_0:;
L_1803ff8dc_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff8dc_2:;
/* 1803ff8e0: movss dword ptr [rbp + 0x104], xmm4 */
L_1803ff8e0_0:;
L_1803ff8e0_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803ff8e0_2:;
wr(s->u,32,4,rd(s->r,4864,4));
L_1803ff8e0_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ff8e0_4:;
/* 1803ff8e8: addss xmm8, xmm1 */
L_1803ff8e8_0:;
L_1803ff8e8_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff8e8_2:;
/* 1803ff8ed: movss dword ptr [rbp + 4], xmm8 */
L_1803ff8ed_0:;
L_1803ff8ed_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ff8ed_2:;
wr(s->u,32,4,rd(s->r,5120,4));
L_1803ff8ed_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ff8ed_4:;
/* 1803ff8f3: addss xmm0, xmm2 */
L_1803ff8f3_0:;
L_1803ff8f3_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ff8f3_2:;
/* 1803ff8f7: movss dword ptr [rbp + 0x80], xmm0 */
L_1803ff8f7_0:;
L_1803ff8f7_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x80))));
L_1803ff8f7_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff8f7_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ff8f7_4:;
/* 1803ff8ff: movaps xmm0, xmm7 */
L_1803ff8ff_0:;
L_1803ff8ff_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ff8ff_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ff8ff_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ff8ff_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ff8ff_5:;
/* 1803ff902: subss xmm5, xmm2 */
L_1803ff902_0:;
L_1803ff902_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff902_2:;
/* 1803ff906: movss dword ptr [rbp + 0x180], xmm5 */
L_1803ff906_0:;
L_1803ff906_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x180))));
L_1803ff906_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803ff906_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ff906_4:;
/* 1803ff90e: subss xmm0, xmm3 */
L_1803ff90e_0:;
L_1803ff90e_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ff90e_2:;
/* 1803ff912: movss dword ptr [rbp + 0x84], xmm0 */
L_1803ff912_0:;
L_1803ff912_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x84))));
L_1803ff912_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff912_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ff912_4:;
/* 1803ff91a: addss xmm7, xmm3 */
L_1803ff91a_0:;
L_1803ff91a_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff91a_2:;
/* 1803ff91e: movss dword ptr [rbp + 0x184], xmm7 */
L_1803ff91e_0:;
L_1803ff91e_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x184))));
L_1803ff91e_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803ff91e_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ff91e_4:;
/* 1803ff926: mov r15, r8 */
L_1803ff926_0:;
L_1803ff926_1:;
wr(s->r,184,8,rd(s->r,128,8));
L_1803ff926_2:;
/* 1803ff929: lea r14, [r8 + 8] */
L_1803ff929_0:;
L_1803ff929_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803ff929_2:;
wr(s->r,176,8,rd(s->u,0,8));
L_1803ff929_3:;
/* 1803ff92d: xor r11d, r11d */
L_1803ff92d_0:;
L_1803ff92d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ff92d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ff92d_3:;
wr(s->r,152,4,(rd(s->r,152,4)^rd(s->r,152,4)));
L_1803ff92d_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ff92d_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff92d_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803ff92d_7:;
wr(s->u,36,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803ff92d_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1803ff92d_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ff92d_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ff92d_11:;
/* 1803ff930: lea r14, [r14 + r9*4] */
L_1803ff930_0:;
L_1803ff930_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803ff930_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803ff930_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803ff930_4:;
/* 1803ff934: lea r15, [r15 + r9*4] */
L_1803ff934_0:;
L_1803ff934_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803ff934_2:;
wr(s->u,24,8,(rd(s->r,184,8)+rd(s->u,16,8)));
L_1803ff934_3:;
wr(s->r,184,8,rd(s->u,24,8));
L_1803ff934_4:;
/* 1803ff938: movss xmm3, dword ptr [r15] */
L_1803ff938_0:;
L_1803ff938_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,184,8),4));
L_1803ff938_2:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ff938_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff938_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff938_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff938_6:;
/* 1803ff93d: movss xmm1, dword ptr [r15 + 4] */
L_1803ff93d_0:;
L_1803ff93d_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803ff93d_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff93d_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ff93d_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff93d_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff93d_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff93d_7:;
/* 1803ff943: add rbp, 8 */
L_1803ff943_0:;
L_1803ff943_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803ff943_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x8)),8,0));
L_1803ff943_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803ff943_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ff943_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803ff943_6:;
wr(s->u,36,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803ff943_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ff943_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ff943_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ff943_10:;
/* 1803ff947: movss xmm2, dword ptr [rbp + 0x100] */
L_1803ff947_0:;
L_1803ff947_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803ff947_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff947_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ff947_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff947_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff947_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff947_7:;
/* 1803ff94f: movaps xmm4, xmm2 */
L_1803ff94f_0:;
L_1803ff94f_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803ff94f_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803ff94f_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803ff94f_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803ff94f_5:;
/* 1803ff952: mulss xmm2, xmm1 */
L_1803ff952_0:;
L_1803ff952_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ff952_2:;
/* 1803ff956: mulss xmm4, xmm3 */
L_1803ff956_0:;
L_1803ff956_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff956_2:;
/* 1803ff95a: movss xmm5, dword ptr [rbp + 0x104] */
L_1803ff95a_0:;
L_1803ff95a_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803ff95a_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff95a_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ff95a_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff95a_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff95a_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff95a_7:;
/* 1803ff962: movaps xmm0, xmm5 */
L_1803ff962_0:;
L_1803ff962_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ff962_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ff962_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ff962_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ff962_5:;
/* 1803ff965: mulss xmm5, xmm3 */
L_1803ff965_0:;
L_1803ff965_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff965_2:;
/* 1803ff969: mulss xmm0, xmm1 */
L_1803ff969_0:;
L_1803ff969_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ff969_2:;
/* 1803ff96d: movss xmm1, dword ptr [rbp + 0x80] */
L_1803ff96d_0:;
L_1803ff96d_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x80))));
L_1803ff96d_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff96d_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ff96d_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff96d_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff96d_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff96d_7:;
/* 1803ff975: movaps xmm6, xmm1 */
L_1803ff975_0:;
L_1803ff975_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803ff975_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803ff975_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803ff975_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803ff975_5:;
/* 1803ff978: movss xmm7, dword ptr [rbp + 0x84] */
L_1803ff978_0:;
L_1803ff978_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x84))));
L_1803ff978_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff978_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803ff978_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff978_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff978_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff978_7:;
return UINT64_C(0x1803ff980);
}
uint64_t b_1803ff8f7(CPU*s){
/* 1803ff8f7: movss dword ptr [rbp + 0x80], xmm0 */
L_1803ff8f7_0:;
L_1803ff8f7_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x80))));
L_1803ff8f7_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff8f7_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ff8f7_4:;
/* 1803ff8ff: movaps xmm0, xmm7 */
L_1803ff8ff_0:;
L_1803ff8ff_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ff8ff_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ff8ff_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ff8ff_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ff8ff_5:;
/* 1803ff902: subss xmm5, xmm2 */
L_1803ff902_0:;
L_1803ff902_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ff902_2:;
/* 1803ff906: movss dword ptr [rbp + 0x180], xmm5 */
L_1803ff906_0:;
L_1803ff906_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x180))));
L_1803ff906_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803ff906_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ff906_4:;
/* 1803ff90e: subss xmm0, xmm3 */
L_1803ff90e_0:;
L_1803ff90e_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ff90e_2:;
/* 1803ff912: movss dword ptr [rbp + 0x84], xmm0 */
L_1803ff912_0:;
L_1803ff912_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x84))));
L_1803ff912_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ff912_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ff912_4:;
/* 1803ff91a: addss xmm7, xmm3 */
L_1803ff91a_0:;
L_1803ff91a_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff91a_2:;
/* 1803ff91e: movss dword ptr [rbp + 0x184], xmm7 */
L_1803ff91e_0:;
L_1803ff91e_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x184))));
L_1803ff91e_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803ff91e_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ff91e_4:;
/* 1803ff926: mov r15, r8 */
L_1803ff926_0:;
L_1803ff926_1:;
wr(s->r,184,8,rd(s->r,128,8));
L_1803ff926_2:;
/* 1803ff929: lea r14, [r8 + 8] */
L_1803ff929_0:;
L_1803ff929_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803ff929_2:;
wr(s->r,176,8,rd(s->u,0,8));
L_1803ff929_3:;
/* 1803ff92d: xor r11d, r11d */
L_1803ff92d_0:;
L_1803ff92d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ff92d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ff92d_3:;
wr(s->r,152,4,(rd(s->r,152,4)^rd(s->r,152,4)));
L_1803ff92d_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ff92d_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff92d_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803ff92d_7:;
wr(s->u,36,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803ff92d_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1803ff92d_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ff92d_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ff92d_11:;
/* 1803ff930: lea r14, [r14 + r9*4] */
L_1803ff930_0:;
L_1803ff930_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803ff930_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803ff930_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803ff930_4:;
/* 1803ff934: lea r15, [r15 + r9*4] */
L_1803ff934_0:;
L_1803ff934_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803ff934_2:;
wr(s->u,24,8,(rd(s->r,184,8)+rd(s->u,16,8)));
L_1803ff934_3:;
wr(s->r,184,8,rd(s->u,24,8));
L_1803ff934_4:;
/* 1803ff938: movss xmm3, dword ptr [r15] */
L_1803ff938_0:;
L_1803ff938_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,184,8),4));
L_1803ff938_2:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ff938_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff938_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff938_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff938_6:;
/* 1803ff93d: movss xmm1, dword ptr [r15 + 4] */
L_1803ff93d_0:;
L_1803ff93d_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803ff93d_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff93d_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ff93d_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff93d_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff93d_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff93d_7:;
/* 1803ff943: add rbp, 8 */
L_1803ff943_0:;
L_1803ff943_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803ff943_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x8)),8,0));
L_1803ff943_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803ff943_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ff943_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803ff943_6:;
wr(s->u,36,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803ff943_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ff943_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ff943_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ff943_10:;
/* 1803ff947: movss xmm2, dword ptr [rbp + 0x100] */
L_1803ff947_0:;
L_1803ff947_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803ff947_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff947_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ff947_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff947_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff947_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff947_7:;
/* 1803ff94f: movaps xmm4, xmm2 */
L_1803ff94f_0:;
L_1803ff94f_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803ff94f_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803ff94f_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803ff94f_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803ff94f_5:;
/* 1803ff952: mulss xmm2, xmm1 */
L_1803ff952_0:;
L_1803ff952_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ff952_2:;
/* 1803ff956: mulss xmm4, xmm3 */
L_1803ff956_0:;
L_1803ff956_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff956_2:;
/* 1803ff95a: movss xmm5, dword ptr [rbp + 0x104] */
L_1803ff95a_0:;
L_1803ff95a_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803ff95a_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff95a_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ff95a_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff95a_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff95a_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff95a_7:;
/* 1803ff962: movaps xmm0, xmm5 */
L_1803ff962_0:;
L_1803ff962_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ff962_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ff962_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ff962_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ff962_5:;
/* 1803ff965: mulss xmm5, xmm3 */
L_1803ff965_0:;
L_1803ff965_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff965_2:;
/* 1803ff969: mulss xmm0, xmm1 */
L_1803ff969_0:;
L_1803ff969_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ff969_2:;
/* 1803ff96d: movss xmm1, dword ptr [rbp + 0x80] */
L_1803ff96d_0:;
L_1803ff96d_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x80))));
L_1803ff96d_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff96d_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ff96d_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff96d_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff96d_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff96d_7:;
/* 1803ff975: movaps xmm6, xmm1 */
L_1803ff975_0:;
L_1803ff975_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803ff975_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803ff975_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803ff975_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803ff975_5:;
/* 1803ff978: movss xmm7, dword ptr [rbp + 0x84] */
L_1803ff978_0:;
L_1803ff978_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x84))));
L_1803ff978_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff978_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803ff978_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff978_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff978_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff978_7:;
/* 1803ff980: movss xmm3, dword ptr [r14 + 4] */
L_1803ff980_0:;
L_1803ff980_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803ff980_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff980_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ff980_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff980_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff980_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff980_7:;
/* 1803ff986: mulss xmm1, xmm3 */
L_1803ff986_0:;
L_1803ff986_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff986_2:;
/* 1803ff98a: movss xmm8, dword ptr [rbp + 0x184] */
L_1803ff98a_0:;
L_1803ff98a_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x184))));
L_1803ff98a_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff98a_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803ff98a_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff98a_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff98a_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff98a_7:;
/* 1803ff993: subss xmm4, xmm0 */
L_1803ff993_0:;
L_1803ff993_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff993_2:;
/* 1803ff997: movaps xmm0, xmm7 */
L_1803ff997_0:;
L_1803ff997_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ff997_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ff997_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ff997_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ff997_5:;
return UINT64_C(0x1803ff99a);
}
uint64_t b_1803ff930(CPU*s){
/* 1803ff930: lea r14, [r14 + r9*4] */
L_1803ff930_0:;
L_1803ff930_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803ff930_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803ff930_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803ff930_4:;
/* 1803ff934: lea r15, [r15 + r9*4] */
L_1803ff934_0:;
L_1803ff934_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803ff934_2:;
wr(s->u,24,8,(rd(s->r,184,8)+rd(s->u,16,8)));
L_1803ff934_3:;
wr(s->r,184,8,rd(s->u,24,8));
L_1803ff934_4:;
/* 1803ff938: movss xmm3, dword ptr [r15] */
L_1803ff938_0:;
L_1803ff938_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,184,8),4));
L_1803ff938_2:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ff938_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff938_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff938_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff938_6:;
/* 1803ff93d: movss xmm1, dword ptr [r15 + 4] */
L_1803ff93d_0:;
L_1803ff93d_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803ff93d_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff93d_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ff93d_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff93d_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff93d_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff93d_7:;
/* 1803ff943: add rbp, 8 */
L_1803ff943_0:;
L_1803ff943_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803ff943_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x8)),8,0));
L_1803ff943_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803ff943_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ff943_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803ff943_6:;
wr(s->u,36,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803ff943_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ff943_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ff943_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ff943_10:;
/* 1803ff947: movss xmm2, dword ptr [rbp + 0x100] */
L_1803ff947_0:;
L_1803ff947_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803ff947_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff947_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ff947_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ff947_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ff947_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ff947_7:;
/* 1803ff94f: movaps xmm4, xmm2 */
L_1803ff94f_0:;
L_1803ff94f_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803ff94f_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803ff94f_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803ff94f_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803ff94f_5:;
/* 1803ff952: mulss xmm2, xmm1 */
L_1803ff952_0:;
L_1803ff952_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ff952_2:;
/* 1803ff956: mulss xmm4, xmm3 */
L_1803ff956_0:;
L_1803ff956_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff956_2:;
/* 1803ff95a: movss xmm5, dword ptr [rbp + 0x104] */
L_1803ff95a_0:;
L_1803ff95a_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803ff95a_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff95a_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ff95a_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff95a_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff95a_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff95a_7:;
/* 1803ff962: movaps xmm0, xmm5 */
L_1803ff962_0:;
L_1803ff962_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ff962_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ff962_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ff962_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ff962_5:;
/* 1803ff965: mulss xmm5, xmm3 */
L_1803ff965_0:;
L_1803ff965_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff965_2:;
/* 1803ff969: mulss xmm0, xmm1 */
L_1803ff969_0:;
L_1803ff969_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ff969_2:;
/* 1803ff96d: movss xmm1, dword ptr [rbp + 0x80] */
L_1803ff96d_0:;
L_1803ff96d_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x80))));
L_1803ff96d_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff96d_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ff96d_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ff96d_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ff96d_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ff96d_7:;
/* 1803ff975: movaps xmm6, xmm1 */
L_1803ff975_0:;
L_1803ff975_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803ff975_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803ff975_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803ff975_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803ff975_5:;
/* 1803ff978: movss xmm7, dword ptr [rbp + 0x84] */
L_1803ff978_0:;
L_1803ff978_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x84))));
L_1803ff978_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff978_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803ff978_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff978_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff978_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff978_7:;
/* 1803ff980: movss xmm3, dword ptr [r14 + 4] */
L_1803ff980_0:;
L_1803ff980_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803ff980_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff980_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ff980_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff980_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff980_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff980_7:;
/* 1803ff986: mulss xmm1, xmm3 */
L_1803ff986_0:;
L_1803ff986_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff986_2:;
/* 1803ff98a: movss xmm8, dword ptr [rbp + 0x184] */
L_1803ff98a_0:;
L_1803ff98a_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x184))));
L_1803ff98a_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff98a_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803ff98a_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff98a_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff98a_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff98a_7:;
/* 1803ff993: subss xmm4, xmm0 */
L_1803ff993_0:;
L_1803ff993_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff993_2:;
/* 1803ff997: movaps xmm0, xmm7 */
L_1803ff997_0:;
L_1803ff997_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ff997_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ff997_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ff997_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ff997_5:;
/* 1803ff99a: mulss xmm0, xmm3 */
L_1803ff99a_0:;
L_1803ff99a_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff99a_2:;
/* 1803ff99e: movss xmm3, dword ptr [r14 + 0xc] */
L_1803ff99e_0:;
L_1803ff99e_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803ff99e_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff99e_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ff99e_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff99e_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff99e_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff99e_7:;
/* 1803ff9a4: addss xmm2, xmm5 */
L_1803ff9a4_0:;
L_1803ff9a4_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff9a4_2:;
/* 1803ff9a8: movss xmm5, dword ptr [r14] */
L_1803ff9a8_0:;
L_1803ff9a8_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803ff9a8_2:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ff9a8_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff9a8_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff9a8_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff9a8_6:;
/* 1803ff9ad: mulss xmm6, xmm5 */
L_1803ff9ad_0:;
L_1803ff9ad_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803ff9ad_2:;
/* 1803ff9b1: mulss xmm7, xmm5 */
L_1803ff9b1_0:;
L_1803ff9b1_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803ff9b1_2:;
/* 1803ff9b5: movss xmm5, dword ptr [rbp + 0x180] */
L_1803ff9b5_0:;
L_1803ff9b5_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x180))));
L_1803ff9b5_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff9b5_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ff9b5_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff9b5_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff9b5_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff9b5_7:;
/* 1803ff9bd: movaps xmm9, xmm5 */
L_1803ff9bd_0:;
L_1803ff9bd_1:;
wr(s->r,5184,4,rd(s->r,4928,4));
L_1803ff9bd_2:;
wr(s->r,5188,4,rd(s->r,4932,4));
L_1803ff9bd_3:;
wr(s->r,5192,4,rd(s->r,4936,4));
L_1803ff9bd_4:;
wr(s->r,5196,4,rd(s->r,4940,4));
L_1803ff9bd_5:;
/* 1803ff9c1: mulss xmm5, xmm3 */
L_1803ff9c1_0:;
L_1803ff9c1_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff9c1_2:;
/* 1803ff9c5: subss xmm6, xmm0 */
L_1803ff9c5_0:;
L_1803ff9c5_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff9c5_2:;
/* 1803ff9c9: movaps xmm0, xmm8 */
L_1803ff9c9_0:;
L_1803ff9c9_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ff9c9_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ff9c9_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ff9c9_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ff9c9_5:;
return UINT64_C(0x1803ff9cd);
}
uint64_t b_1803ff980(CPU*s){
/* 1803ff980: movss xmm3, dword ptr [r14 + 4] */
L_1803ff980_0:;
L_1803ff980_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803ff980_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff980_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803ff980_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff980_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff980_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff980_7:;
/* 1803ff986: mulss xmm1, xmm3 */
L_1803ff986_0:;
L_1803ff986_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff986_2:;
/* 1803ff98a: movss xmm8, dword ptr [rbp + 0x184] */
L_1803ff98a_0:;
L_1803ff98a_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x184))));
L_1803ff98a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff98a_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ff98a_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff98a_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff98a_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff98a_7:;
/* 1803ff993: subss xmm4, xmm0 */
L_1803ff993_0:;
L_1803ff993_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff993_2:;
/* 1803ff997: movaps xmm0, xmm7 */
L_1803ff997_0:;
L_1803ff997_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ff997_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ff997_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ff997_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ff997_5:;
/* 1803ff99a: mulss xmm0, xmm3 */
L_1803ff99a_0:;
L_1803ff99a_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff99a_2:;
/* 1803ff99e: movss xmm3, dword ptr [r14 + 0xc] */
L_1803ff99e_0:;
L_1803ff99e_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803ff99e_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff99e_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803ff99e_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff99e_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff99e_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff99e_7:;
/* 1803ff9a4: addss xmm2, xmm5 */
L_1803ff9a4_0:;
L_1803ff9a4_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff9a4_2:;
/* 1803ff9a8: movss xmm5, dword ptr [r14] */
L_1803ff9a8_0:;
L_1803ff9a8_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803ff9a8_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803ff9a8_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff9a8_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff9a8_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff9a8_6:;
/* 1803ff9ad: mulss xmm6, xmm5 */
L_1803ff9ad_0:;
L_1803ff9ad_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803ff9ad_2:;
/* 1803ff9b1: mulss xmm7, xmm5 */
L_1803ff9b1_0:;
L_1803ff9b1_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803ff9b1_2:;
/* 1803ff9b5: movss xmm5, dword ptr [rbp + 0x180] */
L_1803ff9b5_0:;
L_1803ff9b5_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x180))));
L_1803ff9b5_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff9b5_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803ff9b5_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff9b5_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff9b5_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff9b5_7:;
/* 1803ff9bd: movaps xmm9, xmm5 */
L_1803ff9bd_0:;
L_1803ff9bd_1:;
wr(s->r,5184,4,rd(s->r,4928,4));
L_1803ff9bd_2:;
wr(s->r,5188,4,rd(s->r,4932,4));
L_1803ff9bd_3:;
wr(s->r,5192,4,rd(s->r,4936,4));
L_1803ff9bd_4:;
wr(s->r,5196,4,rd(s->r,4940,4));
L_1803ff9bd_5:;
/* 1803ff9c1: mulss xmm5, xmm3 */
L_1803ff9c1_0:;
L_1803ff9c1_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff9c1_2:;
/* 1803ff9c5: subss xmm6, xmm0 */
L_1803ff9c5_0:;
L_1803ff9c5_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff9c5_2:;
/* 1803ff9c9: movaps xmm0, xmm8 */
L_1803ff9c9_0:;
L_1803ff9c9_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ff9c9_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ff9c9_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ff9c9_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ff9c9_5:;
/* 1803ff9cd: mulss xmm0, xmm3 */
L_1803ff9cd_0:;
L_1803ff9cd_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff9cd_2:;
/* 1803ff9d1: movaps xmm3, xmm4 */
L_1803ff9d1_0:;
L_1803ff9d1_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803ff9d1_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803ff9d1_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803ff9d1_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803ff9d1_5:;
/* 1803ff9d4: addss xmm1, xmm7 */
L_1803ff9d4_0:;
L_1803ff9d4_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ff9d4_2:;
/* 1803ff9d8: movss xmm7, dword ptr [r14 + 8] */
L_1803ff9d8_0:;
L_1803ff9d8_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803ff9d8_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff9d8_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803ff9d8_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff9d8_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff9d8_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff9d8_7:;
/* 1803ff9de: mulss xmm9, xmm7 */
L_1803ff9de_0:;
L_1803ff9de_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ff9de_2:;
/* 1803ff9e3: mulss xmm8, xmm7 */
L_1803ff9e3_0:;
L_1803ff9e3_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ff9e3_2:;
/* 1803ff9e8: add r11d, 1 */
L_1803ff9e8_0:;
L_1803ff9e8_1:;
wr(s->r,512,1,(((rd(s->r,152,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,152,4)));
L_1803ff9e8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803ff9e8_3:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803ff9e8_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ff9e8_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff9e8_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803ff9e8_7:;
wr(s->u,20,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803ff9e8_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ff9e8_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ff9e8_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ff9e8_11:;
/* 1803ff9ec: subss xmm9, xmm0 */
L_1803ff9ec_0:;
L_1803ff9ec_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff9ec_2:;
/* 1803ff9f1: movaps xmm0, xmm2 */
L_1803ff9f1_0:;
L_1803ff9f1_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803ff9f1_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803ff9f1_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803ff9f1_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803ff9f1_5:;
/* 1803ff9f4: addss xmm5, xmm8 */
L_1803ff9f4_0:;
L_1803ff9f4_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff9f4_2:;
/* 1803ff9f9: movss xmm8, dword ptr [rbp] */
L_1803ff9f9_0:;
L_1803ff9f9_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803ff9f9_2:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ff9f9_3:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff9f9_4:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff9f9_5:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff9f9_6:;
/* 1803ff9ff: movaps xmm7, xmm8 */
L_1803ff9ff_0:;
L_1803ff9ff_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803ff9ff_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803ff9ff_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803ff9ff_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803ff9ff_5:;
/* 1803ffa03: addss xmm3, xmm9 */
L_1803ffa03_0:;
L_1803ffa03_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ffa03_2:;
/* 1803ffa08: subss xmm4, xmm9 */
L_1803ffa08_0:;
L_1803ffa08_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ffa08_2:;
/* 1803ffa0d: addss xmm0, xmm5 */
L_1803ffa0d_0:;
L_1803ffa0d_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ffa0d_2:;
/* 1803ffa11: subss xmm2, xmm5 */
L_1803ffa11_0:;
L_1803ffa11_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ffa11_2:;
return UINT64_C(0x1803ffa15);
}
uint64_t b_1803ff99a(CPU*s){
/* 1803ff99a: mulss xmm0, xmm3 */
L_1803ff99a_0:;
L_1803ff99a_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff99a_2:;
/* 1803ff99e: movss xmm3, dword ptr [r14 + 0xc] */
L_1803ff99e_0:;
L_1803ff99e_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803ff99e_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff99e_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803ff99e_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ff99e_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ff99e_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ff99e_7:;
/* 1803ff9a4: addss xmm2, xmm5 */
L_1803ff9a4_0:;
L_1803ff9a4_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff9a4_2:;
/* 1803ff9a8: movss xmm5, dword ptr [r14] */
L_1803ff9a8_0:;
L_1803ff9a8_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803ff9a8_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803ff9a8_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff9a8_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff9a8_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff9a8_6:;
/* 1803ff9ad: mulss xmm6, xmm5 */
L_1803ff9ad_0:;
L_1803ff9ad_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803ff9ad_2:;
/* 1803ff9b1: mulss xmm7, xmm5 */
L_1803ff9b1_0:;
L_1803ff9b1_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803ff9b1_2:;
/* 1803ff9b5: movss xmm5, dword ptr [rbp + 0x180] */
L_1803ff9b5_0:;
L_1803ff9b5_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x180))));
L_1803ff9b5_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ff9b5_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803ff9b5_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ff9b5_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ff9b5_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ff9b5_7:;
/* 1803ff9bd: movaps xmm9, xmm5 */
L_1803ff9bd_0:;
L_1803ff9bd_1:;
wr(s->r,5184,4,rd(s->r,4928,4));
L_1803ff9bd_2:;
wr(s->r,5188,4,rd(s->r,4932,4));
L_1803ff9bd_3:;
wr(s->r,5192,4,rd(s->r,4936,4));
L_1803ff9bd_4:;
wr(s->r,5196,4,rd(s->r,4940,4));
L_1803ff9bd_5:;
/* 1803ff9c1: mulss xmm5, xmm3 */
L_1803ff9c1_0:;
L_1803ff9c1_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff9c1_2:;
/* 1803ff9c5: subss xmm6, xmm0 */
L_1803ff9c5_0:;
L_1803ff9c5_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff9c5_2:;
/* 1803ff9c9: movaps xmm0, xmm8 */
L_1803ff9c9_0:;
L_1803ff9c9_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ff9c9_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ff9c9_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ff9c9_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ff9c9_5:;
/* 1803ff9cd: mulss xmm0, xmm3 */
L_1803ff9cd_0:;
L_1803ff9cd_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff9cd_2:;
/* 1803ff9d1: movaps xmm3, xmm4 */
L_1803ff9d1_0:;
L_1803ff9d1_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803ff9d1_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803ff9d1_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803ff9d1_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803ff9d1_5:;
/* 1803ff9d4: addss xmm1, xmm7 */
L_1803ff9d4_0:;
L_1803ff9d4_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ff9d4_2:;
/* 1803ff9d8: movss xmm7, dword ptr [r14 + 8] */
L_1803ff9d8_0:;
L_1803ff9d8_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803ff9d8_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff9d8_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803ff9d8_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff9d8_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff9d8_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff9d8_7:;
/* 1803ff9de: mulss xmm9, xmm7 */
L_1803ff9de_0:;
L_1803ff9de_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ff9de_2:;
/* 1803ff9e3: mulss xmm8, xmm7 */
L_1803ff9e3_0:;
L_1803ff9e3_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ff9e3_2:;
/* 1803ff9e8: add r11d, 1 */
L_1803ff9e8_0:;
L_1803ff9e8_1:;
wr(s->r,512,1,(((rd(s->r,152,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,152,4)));
L_1803ff9e8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803ff9e8_3:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803ff9e8_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ff9e8_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff9e8_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803ff9e8_7:;
wr(s->u,20,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803ff9e8_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ff9e8_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ff9e8_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ff9e8_11:;
/* 1803ff9ec: subss xmm9, xmm0 */
L_1803ff9ec_0:;
L_1803ff9ec_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff9ec_2:;
/* 1803ff9f1: movaps xmm0, xmm2 */
L_1803ff9f1_0:;
L_1803ff9f1_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803ff9f1_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803ff9f1_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803ff9f1_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803ff9f1_5:;
/* 1803ff9f4: addss xmm5, xmm8 */
L_1803ff9f4_0:;
L_1803ff9f4_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff9f4_2:;
/* 1803ff9f9: movss xmm8, dword ptr [rbp] */
L_1803ff9f9_0:;
L_1803ff9f9_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803ff9f9_2:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ff9f9_3:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff9f9_4:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff9f9_5:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff9f9_6:;
/* 1803ff9ff: movaps xmm7, xmm8 */
L_1803ff9ff_0:;
L_1803ff9ff_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803ff9ff_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803ff9ff_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803ff9ff_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803ff9ff_5:;
/* 1803ffa03: addss xmm3, xmm9 */
L_1803ffa03_0:;
L_1803ffa03_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ffa03_2:;
/* 1803ffa08: subss xmm4, xmm9 */
L_1803ffa08_0:;
L_1803ffa08_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ffa08_2:;
/* 1803ffa0d: addss xmm0, xmm5 */
L_1803ffa0d_0:;
L_1803ffa0d_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ffa0d_2:;
/* 1803ffa11: subss xmm2, xmm5 */
L_1803ffa11_0:;
L_1803ffa11_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ffa11_2:;
/* 1803ffa15: addss xmm7, xmm6 */
L_1803ffa15_0:;
L_1803ffa15_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803ffa15_2:;
/* 1803ffa19: subss xmm8, xmm6 */
L_1803ffa19_0:;
L_1803ffa19_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803ffa19_2:;
/* 1803ffa1e: movss xmm6, dword ptr [rbp + 4] */
L_1803ffa1e_0:;
L_1803ffa1e_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffa1e_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffa1e_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803ffa1e_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ffa1e_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ffa1e_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ffa1e_7:;
/* 1803ffa23: movaps xmm5, xmm6 */
L_1803ffa23_0:;
L_1803ffa23_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803ffa23_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803ffa23_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803ffa23_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803ffa23_5:;
/* 1803ffa26: subss xmm6, xmm1 */
L_1803ffa26_0:;
L_1803ffa26_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ffa26_2:;
return UINT64_C(0x1803ffa2a);
}
uint64_t b_1803ff9cd(CPU*s){
/* 1803ff9cd: mulss xmm0, xmm3 */
L_1803ff9cd_0:;
L_1803ff9cd_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ff9cd_2:;
/* 1803ff9d1: movaps xmm3, xmm4 */
L_1803ff9d1_0:;
L_1803ff9d1_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803ff9d1_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803ff9d1_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803ff9d1_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803ff9d1_5:;
/* 1803ff9d4: addss xmm1, xmm7 */
L_1803ff9d4_0:;
L_1803ff9d4_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ff9d4_2:;
/* 1803ff9d8: movss xmm7, dword ptr [r14 + 8] */
L_1803ff9d8_0:;
L_1803ff9d8_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803ff9d8_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff9d8_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803ff9d8_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ff9d8_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ff9d8_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ff9d8_7:;
/* 1803ff9de: mulss xmm9, xmm7 */
L_1803ff9de_0:;
L_1803ff9de_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ff9de_2:;
/* 1803ff9e3: mulss xmm8, xmm7 */
L_1803ff9e3_0:;
L_1803ff9e3_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ff9e3_2:;
/* 1803ff9e8: add r11d, 1 */
L_1803ff9e8_0:;
L_1803ff9e8_1:;
wr(s->r,512,1,(((rd(s->r,152,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,152,4)));
L_1803ff9e8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803ff9e8_3:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803ff9e8_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ff9e8_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff9e8_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803ff9e8_7:;
wr(s->u,20,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803ff9e8_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ff9e8_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ff9e8_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ff9e8_11:;
/* 1803ff9ec: subss xmm9, xmm0 */
L_1803ff9ec_0:;
L_1803ff9ec_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff9ec_2:;
/* 1803ff9f1: movaps xmm0, xmm2 */
L_1803ff9f1_0:;
L_1803ff9f1_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803ff9f1_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803ff9f1_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803ff9f1_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803ff9f1_5:;
/* 1803ff9f4: addss xmm5, xmm8 */
L_1803ff9f4_0:;
L_1803ff9f4_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff9f4_2:;
/* 1803ff9f9: movss xmm8, dword ptr [rbp] */
L_1803ff9f9_0:;
L_1803ff9f9_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803ff9f9_2:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ff9f9_3:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff9f9_4:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff9f9_5:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff9f9_6:;
/* 1803ff9ff: movaps xmm7, xmm8 */
L_1803ff9ff_0:;
L_1803ff9ff_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803ff9ff_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803ff9ff_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803ff9ff_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803ff9ff_5:;
/* 1803ffa03: addss xmm3, xmm9 */
L_1803ffa03_0:;
L_1803ffa03_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ffa03_2:;
/* 1803ffa08: subss xmm4, xmm9 */
L_1803ffa08_0:;
L_1803ffa08_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ffa08_2:;
/* 1803ffa0d: addss xmm0, xmm5 */
L_1803ffa0d_0:;
L_1803ffa0d_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ffa0d_2:;
/* 1803ffa11: subss xmm2, xmm5 */
L_1803ffa11_0:;
L_1803ffa11_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ffa11_2:;
/* 1803ffa15: addss xmm7, xmm6 */
L_1803ffa15_0:;
L_1803ffa15_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803ffa15_2:;
/* 1803ffa19: subss xmm8, xmm6 */
L_1803ffa19_0:;
L_1803ffa19_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803ffa19_2:;
/* 1803ffa1e: movss xmm6, dword ptr [rbp + 4] */
L_1803ffa1e_0:;
L_1803ffa1e_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffa1e_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffa1e_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803ffa1e_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ffa1e_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ffa1e_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ffa1e_7:;
/* 1803ffa23: movaps xmm5, xmm6 */
L_1803ffa23_0:;
L_1803ffa23_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803ffa23_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803ffa23_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803ffa23_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803ffa23_5:;
/* 1803ffa26: subss xmm6, xmm1 */
L_1803ffa26_0:;
L_1803ffa26_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ffa26_2:;
/* 1803ffa2a: cmp r11d, 0xf */
L_1803ffa2a_0:;
L_1803ffa2a_1:;
wr(s->u,26,4,rd(s->r,152,4));
L_1803ffa2a_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0xf))));
L_1803ffa2a_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0xf)),4,1));
L_1803ffa2a_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0xf))));
L_1803ffa2a_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffa2a_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803ffa2a_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803ffa2a_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ffa2a_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ffa2a_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ffa2a_11:;
/* 1803ffa2e: addss xmm5, xmm1 */
L_1803ffa2e_0:;
L_1803ffa2e_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ffa2e_2:;
/* 1803ffa32: movaps xmm1, xmm7 */
L_1803ffa32_0:;
L_1803ffa32_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803ffa32_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803ffa32_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803ffa32_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803ffa32_5:;
/* 1803ffa35: subss xmm7, xmm3 */
L_1803ffa35_0:;
L_1803ffa35_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ffa35_2:;
/* 1803ffa39: movss dword ptr [rbp + 0x100], xmm7 */
L_1803ffa39_0:;
L_1803ffa39_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803ffa39_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803ffa39_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffa39_4:;
/* 1803ffa41: addss xmm1, xmm3 */
L_1803ffa41_0:;
L_1803ffa41_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ffa41_2:;
/* 1803ffa45: movss dword ptr [rbp], xmm1 */
L_1803ffa45_0:;
L_1803ffa45_1:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ffa45_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803ffa45_3:;
/* 1803ffa4a: movaps xmm1, xmm5 */
L_1803ffa4a_0:;
L_1803ffa4a_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803ffa4a_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803ffa4a_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803ffa4a_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803ffa4a_5:;
/* 1803ffa4d: subss xmm5, xmm0 */
L_1803ffa4d_0:;
L_1803ffa4d_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffa4d_2:;
/* 1803ffa51: movss dword ptr [rbp + 0x104], xmm5 */
L_1803ffa51_0:;
L_1803ffa51_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803ffa51_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803ffa51_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffa51_4:;
/* 1803ffa59: addss xmm1, xmm0 */
L_1803ffa59_0:;
L_1803ffa59_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ffa59_2:;
return UINT64_C(0x1803ffa5d);
}
uint64_t b_1803ffa15(CPU*s){
/* 1803ffa15: addss xmm7, xmm6 */
L_1803ffa15_0:;
L_1803ffa15_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803ffa15_2:;
/* 1803ffa19: subss xmm8, xmm6 */
L_1803ffa19_0:;
L_1803ffa19_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803ffa19_2:;
/* 1803ffa1e: movss xmm6, dword ptr [rbp + 4] */
L_1803ffa1e_0:;
L_1803ffa1e_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffa1e_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffa1e_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803ffa1e_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ffa1e_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ffa1e_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ffa1e_7:;
/* 1803ffa23: movaps xmm5, xmm6 */
L_1803ffa23_0:;
L_1803ffa23_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803ffa23_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803ffa23_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803ffa23_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803ffa23_5:;
/* 1803ffa26: subss xmm6, xmm1 */
L_1803ffa26_0:;
L_1803ffa26_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ffa26_2:;
/* 1803ffa2a: cmp r11d, 0xf */
L_1803ffa2a_0:;
L_1803ffa2a_1:;
wr(s->u,26,4,rd(s->r,152,4));
L_1803ffa2a_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0xf))));
L_1803ffa2a_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0xf)),4,1));
L_1803ffa2a_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0xf))));
L_1803ffa2a_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffa2a_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803ffa2a_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803ffa2a_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ffa2a_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ffa2a_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ffa2a_11:;
/* 1803ffa2e: addss xmm5, xmm1 */
L_1803ffa2e_0:;
L_1803ffa2e_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ffa2e_2:;
/* 1803ffa32: movaps xmm1, xmm7 */
L_1803ffa32_0:;
L_1803ffa32_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803ffa32_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803ffa32_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803ffa32_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803ffa32_5:;
/* 1803ffa35: subss xmm7, xmm3 */
L_1803ffa35_0:;
L_1803ffa35_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ffa35_2:;
/* 1803ffa39: movss dword ptr [rbp + 0x100], xmm7 */
L_1803ffa39_0:;
L_1803ffa39_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803ffa39_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803ffa39_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffa39_4:;
/* 1803ffa41: addss xmm1, xmm3 */
L_1803ffa41_0:;
L_1803ffa41_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ffa41_2:;
/* 1803ffa45: movss dword ptr [rbp], xmm1 */
L_1803ffa45_0:;
L_1803ffa45_1:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ffa45_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803ffa45_3:;
/* 1803ffa4a: movaps xmm1, xmm5 */
L_1803ffa4a_0:;
L_1803ffa4a_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803ffa4a_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803ffa4a_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803ffa4a_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803ffa4a_5:;
/* 1803ffa4d: subss xmm5, xmm0 */
L_1803ffa4d_0:;
L_1803ffa4d_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffa4d_2:;
/* 1803ffa51: movss dword ptr [rbp + 0x104], xmm5 */
L_1803ffa51_0:;
L_1803ffa51_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803ffa51_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803ffa51_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffa51_4:;
/* 1803ffa59: addss xmm1, xmm0 */
L_1803ffa59_0:;
L_1803ffa59_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ffa59_2:;
/* 1803ffa5d: movss dword ptr [rbp + 4], xmm1 */
L_1803ffa5d_0:;
L_1803ffa5d_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffa5d_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ffa5d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ffa5d_4:;
/* 1803ffa62: movaps xmm0, xmm8 */
L_1803ffa62_0:;
L_1803ffa62_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ffa62_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ffa62_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ffa62_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ffa62_5:;
/* 1803ffa66: subss xmm8, xmm2 */
L_1803ffa66_0:;
L_1803ffa66_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ffa66_2:;
/* 1803ffa6b: movss dword ptr [rbp + 0x180], xmm8 */
L_1803ffa6b_0:;
L_1803ffa6b_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x180))));
L_1803ffa6b_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ffa6b_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffa6b_4:;
/* 1803ffa74: addss xmm0, xmm2 */
L_1803ffa74_0:;
L_1803ffa74_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ffa74_2:;
/* 1803ffa78: movss dword ptr [rbp + 0x80], xmm0 */
L_1803ffa78_0:;
L_1803ffa78_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x80))));
L_1803ffa78_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ffa78_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffa78_4:;
/* 1803ffa80: movaps xmm0, xmm6 */
L_1803ffa80_0:;
L_1803ffa80_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803ffa80_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803ffa80_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803ffa80_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803ffa80_5:;
/* 1803ffa83: addss xmm6, xmm4 */
L_1803ffa83_0:;
L_1803ffa83_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ffa83_2:;
/* 1803ffa87: movss dword ptr [rbp + 0x184], xmm6 */
L_1803ffa87_0:;
L_1803ffa87_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x184))));
L_1803ffa87_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803ffa87_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffa87_4:;
/* 1803ffa8f: subss xmm0, xmm4 */
L_1803ffa8f_0:;
L_1803ffa8f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ffa8f_2:;
/* 1803ffa93: movss dword ptr [rbp + 0x84], xmm0 */
L_1803ffa93_0:;
L_1803ffa93_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x84))));
L_1803ffa93_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ffa93_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffa93_4:;
/* 1803ffa9b: jb 0x1803ff930 */
L_1803ffa9b_0:;
L_1803ffa9b_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ff930);}
L_1803ffa9b_2:;
return UINT64_C(0x1803ffaa1);
}
uint64_t b_1803ffa2a(CPU*s){
/* 1803ffa2a: cmp r11d, 0xf */
L_1803ffa2a_0:;
L_1803ffa2a_1:;
wr(s->u,26,4,rd(s->r,152,4));
L_1803ffa2a_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0xf))));
L_1803ffa2a_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0xf)),4,1));
L_1803ffa2a_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0xf))));
L_1803ffa2a_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffa2a_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803ffa2a_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803ffa2a_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ffa2a_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ffa2a_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ffa2a_11:;
/* 1803ffa2e: addss xmm5, xmm1 */
L_1803ffa2e_0:;
L_1803ffa2e_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ffa2e_2:;
/* 1803ffa32: movaps xmm1, xmm7 */
L_1803ffa32_0:;
L_1803ffa32_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803ffa32_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803ffa32_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803ffa32_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803ffa32_5:;
/* 1803ffa35: subss xmm7, xmm3 */
L_1803ffa35_0:;
L_1803ffa35_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ffa35_2:;
/* 1803ffa39: movss dword ptr [rbp + 0x100], xmm7 */
L_1803ffa39_0:;
L_1803ffa39_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803ffa39_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803ffa39_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffa39_4:;
/* 1803ffa41: addss xmm1, xmm3 */
L_1803ffa41_0:;
L_1803ffa41_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ffa41_2:;
/* 1803ffa45: movss dword ptr [rbp], xmm1 */
L_1803ffa45_0:;
L_1803ffa45_1:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ffa45_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803ffa45_3:;
/* 1803ffa4a: movaps xmm1, xmm5 */
L_1803ffa4a_0:;
L_1803ffa4a_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803ffa4a_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803ffa4a_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803ffa4a_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803ffa4a_5:;
/* 1803ffa4d: subss xmm5, xmm0 */
L_1803ffa4d_0:;
L_1803ffa4d_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffa4d_2:;
/* 1803ffa51: movss dword ptr [rbp + 0x104], xmm5 */
L_1803ffa51_0:;
L_1803ffa51_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803ffa51_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803ffa51_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffa51_4:;
/* 1803ffa59: addss xmm1, xmm0 */
L_1803ffa59_0:;
L_1803ffa59_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ffa59_2:;
/* 1803ffa5d: movss dword ptr [rbp + 4], xmm1 */
L_1803ffa5d_0:;
L_1803ffa5d_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffa5d_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ffa5d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ffa5d_4:;
/* 1803ffa62: movaps xmm0, xmm8 */
L_1803ffa62_0:;
L_1803ffa62_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ffa62_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ffa62_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ffa62_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ffa62_5:;
/* 1803ffa66: subss xmm8, xmm2 */
L_1803ffa66_0:;
L_1803ffa66_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ffa66_2:;
/* 1803ffa6b: movss dword ptr [rbp + 0x180], xmm8 */
L_1803ffa6b_0:;
L_1803ffa6b_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x180))));
L_1803ffa6b_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ffa6b_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffa6b_4:;
/* 1803ffa74: addss xmm0, xmm2 */
L_1803ffa74_0:;
L_1803ffa74_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ffa74_2:;
/* 1803ffa78: movss dword ptr [rbp + 0x80], xmm0 */
L_1803ffa78_0:;
L_1803ffa78_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x80))));
L_1803ffa78_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ffa78_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffa78_4:;
/* 1803ffa80: movaps xmm0, xmm6 */
L_1803ffa80_0:;
L_1803ffa80_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803ffa80_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803ffa80_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803ffa80_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803ffa80_5:;
/* 1803ffa83: addss xmm6, xmm4 */
L_1803ffa83_0:;
L_1803ffa83_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ffa83_2:;
/* 1803ffa87: movss dword ptr [rbp + 0x184], xmm6 */
L_1803ffa87_0:;
L_1803ffa87_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x184))));
L_1803ffa87_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803ffa87_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffa87_4:;
/* 1803ffa8f: subss xmm0, xmm4 */
L_1803ffa8f_0:;
L_1803ffa8f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ffa8f_2:;
/* 1803ffa93: movss dword ptr [rbp + 0x84], xmm0 */
L_1803ffa93_0:;
L_1803ffa93_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x84))));
L_1803ffa93_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ffa93_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffa93_4:;
/* 1803ffa9b: jb 0x1803ff930 */
L_1803ffa9b_0:;
L_1803ffa9b_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ff930);}
L_1803ffa9b_2:;
return UINT64_C(0x1803ffaa1);
}
uint64_t b_1803ffa5d(CPU*s){
/* 1803ffa5d: movss dword ptr [rbp + 4], xmm1 */
L_1803ffa5d_0:;
L_1803ffa5d_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffa5d_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ffa5d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ffa5d_4:;
/* 1803ffa62: movaps xmm0, xmm8 */
L_1803ffa62_0:;
L_1803ffa62_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ffa62_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ffa62_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ffa62_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ffa62_5:;
/* 1803ffa66: subss xmm8, xmm2 */
L_1803ffa66_0:;
L_1803ffa66_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ffa66_2:;
/* 1803ffa6b: movss dword ptr [rbp + 0x180], xmm8 */
L_1803ffa6b_0:;
L_1803ffa6b_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x180))));
L_1803ffa6b_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ffa6b_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffa6b_4:;
/* 1803ffa74: addss xmm0, xmm2 */
L_1803ffa74_0:;
L_1803ffa74_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ffa74_2:;
/* 1803ffa78: movss dword ptr [rbp + 0x80], xmm0 */
L_1803ffa78_0:;
L_1803ffa78_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x80))));
L_1803ffa78_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ffa78_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffa78_4:;
/* 1803ffa80: movaps xmm0, xmm6 */
L_1803ffa80_0:;
L_1803ffa80_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803ffa80_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803ffa80_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803ffa80_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803ffa80_5:;
/* 1803ffa83: addss xmm6, xmm4 */
L_1803ffa83_0:;
L_1803ffa83_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ffa83_2:;
/* 1803ffa87: movss dword ptr [rbp + 0x184], xmm6 */
L_1803ffa87_0:;
L_1803ffa87_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x184))));
L_1803ffa87_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803ffa87_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffa87_4:;
/* 1803ffa8f: subss xmm0, xmm4 */
L_1803ffa8f_0:;
L_1803ffa8f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ffa8f_2:;
/* 1803ffa93: movss dword ptr [rbp + 0x84], xmm0 */
L_1803ffa93_0:;
L_1803ffa93_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x84))));
L_1803ffa93_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ffa93_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffa93_4:;
/* 1803ffa9b: jb 0x1803ff930 */
L_1803ffa9b_0:;
L_1803ffa9b_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ff930);}
L_1803ffa9b_2:;
return UINT64_C(0x1803ffaa1);
}
uint64_t b_1803ffaa1(CPU*s){
/* 1803ffaa1: add rbp, 0x188 */
L_1803ffaa1_0:;
L_1803ffaa1_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x188)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803ffaa1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x188)),8,0));
L_1803ffaa1_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x188))));
L_1803ffaa1_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ffaa1_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803ffaa1_6:;
wr(s->u,0,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803ffaa1_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ffaa1_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ffaa1_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ffaa1_10:;
/* 1803ffaa8: add eax, 1 */
L_1803ffaa8_0:;
L_1803ffaa8_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ffaa8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,0));
L_1803ffaa8_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x1))));
L_1803ffaa8_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ffaa8_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffaa8_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ffaa8_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ffaa8_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803ffaa8_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ffaa8_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ffaa8_11:;
/* 1803ffaab: cmp eax, r10d */
L_1803ffaab_0:;
L_1803ffaab_1:;
wr(s->u,10,4,rd(s->r,144,4));
L_1803ffaab_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,10,4)));
L_1803ffaab_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,10,4),4,1));
L_1803ffaab_4:;
wr(s->u,14,4,(rd(s->r,0,4)-rd(s->u,10,4)));
L_1803ffaab_5:;
wr(s->r,519,1,(sx(rd(s->u,14,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffaab_6:;
wr(s->r,518,1,(rd(s->u,14,4)==((U)UINT64_C(0x0))));
L_1803ffaab_7:;
wr(s->u,0,4,(rd(s->u,14,4)&((U)UINT64_C(0xff))));
L_1803ffaab_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803ffaab_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ffaab_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ffaab_11:;
/* 1803ffaae: jb 0x1803ff848 */
L_1803ffaae_0:;
L_1803ffaae_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ff848);}
L_1803ffaae_2:;
return UINT64_C(0x1803ffab4);
}
uint64_t b_1803ffab4(CPU*s){
/* 1803ffab4: movaps xmm6, xmmword ptr [rsp + 0x60] */
L_1803ffab4_0:;
L_1803ffab4_1:;
wr(s->u,5,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803ffab4_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803ffab4_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803ffab4_4:;
wr(s->r,4992,4,rd(s->u,89,4));
L_1803ffab4_5:;
wr(s->r,4996,4,rd(s->u,93,4));
L_1803ffab4_6:;
wr(s->r,5000,4,rd(s->u,97,4));
L_1803ffab4_7:;
wr(s->r,5004,4,rd(s->u,101,4));
L_1803ffab4_8:;
/* 1803ffab9: movaps xmm7, xmmword ptr [rsp + 0x50] */
L_1803ffab9_0:;
L_1803ffab9_1:;
wr(s->u,5,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ffab9_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803ffab9_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803ffab9_4:;
wr(s->r,5056,4,rd(s->u,89,4));
L_1803ffab9_5:;
wr(s->r,5060,4,rd(s->u,93,4));
L_1803ffab9_6:;
wr(s->r,5064,4,rd(s->u,97,4));
L_1803ffab9_7:;
wr(s->r,5068,4,rd(s->u,101,4));
L_1803ffab9_8:;
/* 1803ffabe: movaps xmm8, xmmword ptr [rsp + 0x40] */
L_1803ffabe_0:;
L_1803ffabe_1:;
wr(s->u,5,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ffabe_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803ffabe_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803ffabe_4:;
wr(s->r,5120,4,rd(s->u,89,4));
L_1803ffabe_5:;
wr(s->r,5124,4,rd(s->u,93,4));
L_1803ffabe_6:;
wr(s->r,5128,4,rd(s->u,97,4));
L_1803ffabe_7:;
wr(s->r,5132,4,rd(s->u,101,4));
L_1803ffabe_8:;
/* 1803ffac4: movaps xmm9, xmmword ptr [rsp + 0x30] */
L_1803ffac4_0:;
L_1803ffac4_1:;
wr(s->u,5,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ffac4_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803ffac4_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803ffac4_4:;
wr(s->r,5184,4,rd(s->u,89,4));
L_1803ffac4_5:;
wr(s->r,5188,4,rd(s->u,93,4));
L_1803ffac4_6:;
wr(s->r,5192,4,rd(s->u,97,4));
L_1803ffac4_7:;
wr(s->r,5196,4,rd(s->u,101,4));
L_1803ffac4_8:;
/* 1803ffaca: mov r14, qword ptr [rsp + 0x20] */
L_1803ffaca_0:;
L_1803ffaca_1:;
wr(s->u,5,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ffaca_2:;
wr(s->u,29,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803ffaca_3:;
wr(s->r,176,8,rd(s->u,29,8));
L_1803ffaca_4:;
/* 1803ffacf: mov r10d, edx */
L_1803ffacf_0:;
L_1803ffacf_1:;
wr(s->r,144,4,rd(s->r,16,4));
L_1803ffacf_2:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ffacf_3:;
/* 1803ffad2: sar r10d, 8 */
L_1803ffad2_0:;
L_1803ffad2_1:;
wr(s->u,77,4,(((U)UINT64_C(0x8))&((U)UINT64_C(0x1f))));
L_1803ffad2_2:;
wr(s->u,81,4,rd(s->r,144,4));
L_1803ffad2_3:;
wr(s->r,144,4,((rd(s->u,77,4)>=32)?(sx(rd(s->r,144,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,144,4),4)>>rd(s->u,77,4))));
L_1803ffad2_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ffad2_5:;
wr(s->u,62,1,(rd(s->u,77,4)==((U)UINT64_C(0x0))));
L_1803ffad2_6:;
wr(s->u,63,4,(rd(s->u,77,4)-((U)UINT64_C(0x1))));
L_1803ffad2_7:;
wr(s->u,67,4,((rd(s->u,63,4)>=32)?(sx(rd(s->u,81,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,81,4),4)>>rd(s->u,63,4))));
L_1803ffad2_8:;
wr(s->u,71,4,(rd(s->u,67,4)&((U)UINT64_C(0x1))));
L_1803ffad2_9:;
wr(s->u,75,1,(rd(s->u,71,4)!=((U)UINT64_C(0x0))));
L_1803ffad2_10:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803ffad2_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ffad2_12:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803ffad2_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ffad2_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,75,1)));
L_1803ffad2_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ffad2_16:;
wr(s->u,76,1,(rd(s->u,77,4)==((U)UINT64_C(0x1))));
L_1803ffad2_17:;
wr(s->u,0,1,rd(s->u,76,1));
L_1803ffad2_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ffad2_19:;
wr(s->u,2,1,(!rd(s->u,76,1)));
L_1803ffad2_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ffad2_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ffad2_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ffad2_23:;
wr(s->u,43,1,(rd(s->u,77,4)!=((U)UINT64_C(0x0))));
L_1803ffad2_24:;
wr(s->u,44,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffad2_25:;
wr(s->u,45,1,(!rd(s->u,43,1)));
L_1803ffad2_26:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,519,1)));
L_1803ffad2_27:;
wr(s->u,47,1,(rd(s->u,43,1)&rd(s->u,44,1)));
L_1803ffad2_28:;
wr(s->r,519,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803ffad2_29:;
wr(s->u,48,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803ffad2_30:;
wr(s->u,49,1,(!rd(s->u,43,1)));
L_1803ffad2_31:;
wr(s->u,50,1,(rd(s->u,49,1)&rd(s->r,518,1)));
L_1803ffad2_32:;
wr(s->u,51,1,(rd(s->u,43,1)&rd(s->u,48,1)));
L_1803ffad2_33:;
wr(s->r,518,1,(rd(s->u,50,1)|rd(s->u,51,1)));
L_1803ffad2_34:;
wr(s->u,52,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803ffad2_35:;
wr(s->u,56,1,pop(rd(s->u,52,4),4));
L_1803ffad2_36:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803ffad2_37:;
wr(s->u,58,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803ffad2_38:;
wr(s->u,59,1,(!rd(s->u,43,1)));
L_1803ffad2_39:;
wr(s->u,60,1,(rd(s->u,59,1)&rd(s->r,514,1)));
L_1803ffad2_40:;
wr(s->u,61,1,(rd(s->u,43,1)&rd(s->u,58,1)));
L_1803ffad2_41:;
wr(s->r,514,1,(rd(s->u,60,1)|rd(s->u,61,1)));
L_1803ffad2_42:;
/* 1803ffad6: test r10d, r10d */
L_1803ffad6_0:;
L_1803ffad6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ffad6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ffad6_3:;
wr(s->u,85,4,(rd(s->r,144,4)&rd(s->r,144,4)));
L_1803ffad6_4:;
wr(s->r,519,1,(sx(rd(s->u,85,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffad6_5:;
wr(s->r,518,1,(rd(s->u,85,4)==((U)UINT64_C(0x0))));
L_1803ffad6_6:;
wr(s->u,37,4,(rd(s->u,85,4)&((U)UINT64_C(0xff))));
L_1803ffad6_7:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803ffad6_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803ffad6_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803ffad6_10:;
/* 1803ffad9: je 0x180400312 */
L_1803ffad9_0:;
L_1803ffad9_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180400312);}
L_1803ffad9_2:;
return UINT64_C(0x1803ffadf);
}
uint64_t b_1803ffacf(CPU*s){
/* 1803ffacf: mov r10d, edx */
L_1803ffacf_0:;
L_1803ffacf_1:;
wr(s->r,144,4,rd(s->r,16,4));
L_1803ffacf_2:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ffacf_3:;
/* 1803ffad2: sar r10d, 8 */
L_1803ffad2_0:;
L_1803ffad2_1:;
wr(s->u,45,4,(((U)UINT64_C(0x8))&((U)UINT64_C(0x1f))));
L_1803ffad2_2:;
wr(s->u,49,4,rd(s->r,144,4));
L_1803ffad2_3:;
wr(s->r,144,4,((rd(s->u,45,4)>=32)?(sx(rd(s->r,144,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,144,4),4)>>rd(s->u,45,4))));
L_1803ffad2_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ffad2_5:;
wr(s->u,30,1,(rd(s->u,45,4)==((U)UINT64_C(0x0))));
L_1803ffad2_6:;
wr(s->u,31,4,(rd(s->u,45,4)-((U)UINT64_C(0x1))));
L_1803ffad2_7:;
wr(s->u,35,4,((rd(s->u,31,4)>=32)?(sx(rd(s->u,49,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,49,4),4)>>rd(s->u,31,4))));
L_1803ffad2_8:;
wr(s->u,39,4,(rd(s->u,35,4)&((U)UINT64_C(0x1))));
L_1803ffad2_9:;
wr(s->u,43,1,(rd(s->u,39,4)!=((U)UINT64_C(0x0))));
L_1803ffad2_10:;
wr(s->u,0,1,rd(s->u,30,1));
L_1803ffad2_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ffad2_12:;
wr(s->u,2,1,(!rd(s->u,30,1)));
L_1803ffad2_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ffad2_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,43,1)));
L_1803ffad2_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ffad2_16:;
wr(s->u,44,1,(rd(s->u,45,4)==((U)UINT64_C(0x1))));
L_1803ffad2_17:;
wr(s->u,0,1,rd(s->u,44,1));
L_1803ffad2_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ffad2_19:;
wr(s->u,2,1,(!rd(s->u,44,1)));
L_1803ffad2_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ffad2_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ffad2_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ffad2_23:;
wr(s->u,11,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803ffad2_24:;
wr(s->u,12,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffad2_25:;
wr(s->u,13,1,(!rd(s->u,11,1)));
L_1803ffad2_26:;
wr(s->u,14,1,(rd(s->u,13,1)&rd(s->r,519,1)));
L_1803ffad2_27:;
wr(s->u,15,1,(rd(s->u,11,1)&rd(s->u,12,1)));
L_1803ffad2_28:;
wr(s->r,519,1,(rd(s->u,14,1)|rd(s->u,15,1)));
L_1803ffad2_29:;
wr(s->u,16,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803ffad2_30:;
wr(s->u,17,1,(!rd(s->u,11,1)));
L_1803ffad2_31:;
wr(s->u,18,1,(rd(s->u,17,1)&rd(s->r,518,1)));
L_1803ffad2_32:;
wr(s->u,19,1,(rd(s->u,11,1)&rd(s->u,16,1)));
L_1803ffad2_33:;
wr(s->r,518,1,(rd(s->u,18,1)|rd(s->u,19,1)));
L_1803ffad2_34:;
wr(s->u,20,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803ffad2_35:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ffad2_36:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ffad2_37:;
wr(s->u,26,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ffad2_38:;
wr(s->u,27,1,(!rd(s->u,11,1)));
L_1803ffad2_39:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,514,1)));
L_1803ffad2_40:;
wr(s->u,29,1,(rd(s->u,11,1)&rd(s->u,26,1)));
L_1803ffad2_41:;
wr(s->r,514,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803ffad2_42:;
/* 1803ffad6: test r10d, r10d */
L_1803ffad6_0:;
L_1803ffad6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ffad6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ffad6_3:;
wr(s->u,53,4,(rd(s->r,144,4)&rd(s->r,144,4)));
L_1803ffad6_4:;
wr(s->r,519,1,(sx(rd(s->u,53,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffad6_5:;
wr(s->r,518,1,(rd(s->u,53,4)==((U)UINT64_C(0x0))));
L_1803ffad6_6:;
wr(s->u,5,4,(rd(s->u,53,4)&((U)UINT64_C(0xff))));
L_1803ffad6_7:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803ffad6_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ffad6_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ffad6_10:;
/* 1803ffad9: je 0x180400312 */
L_1803ffad9_0:;
L_1803ffad9_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180400312);}
L_1803ffad9_2:;
return UINT64_C(0x1803ffadf);
}
uint64_t b_1803ffadf(CPU*s){
/* 1803ffadf: sar r9d, 2 */
L_1803ffadf_0:;
L_1803ffadf_1:;
wr(s->u,47,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803ffadf_2:;
wr(s->u,51,4,rd(s->r,136,4));
L_1803ffadf_3:;
wr(s->r,136,4,((rd(s->u,47,4)>=32)?(sx(rd(s->r,136,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,136,4),4)>>rd(s->u,47,4))));
L_1803ffadf_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ffadf_5:;
wr(s->u,32,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803ffadf_6:;
wr(s->u,33,4,(rd(s->u,47,4)-((U)UINT64_C(0x1))));
L_1803ffadf_7:;
wr(s->u,37,4,((rd(s->u,33,4)>=32)?(sx(rd(s->u,51,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,51,4),4)>>rd(s->u,33,4))));
L_1803ffadf_8:;
wr(s->u,41,4,(rd(s->u,37,4)&((U)UINT64_C(0x1))));
L_1803ffadf_9:;
wr(s->u,45,1,(rd(s->u,41,4)!=((U)UINT64_C(0x0))));
L_1803ffadf_10:;
wr(s->u,0,1,rd(s->u,32,1));
L_1803ffadf_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ffadf_12:;
wr(s->u,2,1,(!rd(s->u,32,1)));
L_1803ffadf_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ffadf_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,45,1)));
L_1803ffadf_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ffadf_16:;
wr(s->u,46,1,(rd(s->u,47,4)==((U)UINT64_C(0x1))));
L_1803ffadf_17:;
wr(s->u,0,1,rd(s->u,46,1));
L_1803ffadf_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ffadf_19:;
wr(s->u,2,1,(!rd(s->u,46,1)));
L_1803ffadf_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ffadf_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ffadf_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ffadf_23:;
wr(s->u,13,1,(rd(s->u,47,4)!=((U)UINT64_C(0x0))));
L_1803ffadf_24:;
wr(s->u,14,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffadf_25:;
wr(s->u,15,1,(!rd(s->u,13,1)));
L_1803ffadf_26:;
wr(s->u,16,1,(rd(s->u,15,1)&rd(s->r,519,1)));
L_1803ffadf_27:;
wr(s->u,17,1,(rd(s->u,13,1)&rd(s->u,14,1)));
L_1803ffadf_28:;
wr(s->r,519,1,(rd(s->u,16,1)|rd(s->u,17,1)));
L_1803ffadf_29:;
wr(s->u,18,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803ffadf_30:;
wr(s->u,19,1,(!rd(s->u,13,1)));
L_1803ffadf_31:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,518,1)));
L_1803ffadf_32:;
wr(s->u,21,1,(rd(s->u,13,1)&rd(s->u,18,1)));
L_1803ffadf_33:;
wr(s->r,518,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803ffadf_34:;
wr(s->u,22,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803ffadf_35:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803ffadf_36:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803ffadf_37:;
wr(s->u,28,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803ffadf_38:;
wr(s->u,29,1,(!rd(s->u,13,1)));
L_1803ffadf_39:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,514,1)));
L_1803ffadf_40:;
wr(s->u,31,1,(rd(s->u,13,1)&rd(s->u,28,1)));
L_1803ffadf_41:;
wr(s->r,514,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803ffadf_42:;
/* 1803ffae3: movsxd r9, r9d */
L_1803ffae3_0:;
L_1803ffae3_1:;
wr(s->r,136,8,(U)sx(rd(s->r,136,4),4));
L_1803ffae3_2:;
/* 1803ffae6: mov rbp, rcx */
L_1803ffae6_0:;
L_1803ffae6_1:;
wr(s->r,40,8,rd(s->r,8,8));
L_1803ffae6_2:;
/* 1803ffae9: xor eax, eax */
L_1803ffae9_0:;
L_1803ffae9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ffae9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ffae9_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ffae9_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ffae9_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffae9_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ffae9_7:;
wr(s->u,7,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ffae9_8:;
wr(s->u,11,1,pop(rd(s->u,7,4),4));
L_1803ffae9_9:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803ffae9_10:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803ffae9_11:;
/* 1803ffaeb: test r10d, r10d */
L_1803ffaeb_0:;
L_1803ffaeb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ffaeb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ffaeb_3:;
wr(s->u,55,4,(rd(s->r,144,4)&rd(s->r,144,4)));
L_1803ffaeb_4:;
wr(s->r,519,1,(sx(rd(s->u,55,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffaeb_5:;
wr(s->r,518,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803ffaeb_6:;
wr(s->u,7,4,(rd(s->u,55,4)&((U)UINT64_C(0xff))));
L_1803ffaeb_7:;
wr(s->u,11,1,pop(rd(s->u,7,4),4));
L_1803ffaeb_8:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803ffaeb_9:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803ffaeb_10:;
/* 1803ffaee: jle 0x1803ffd96 */
L_1803ffaee_0:;
L_1803ffaee_1:;
wr(s->u,5,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ffaee_2:;
wr(s->u,6,1,((rd(s->r,518,1)!=0)||(rd(s->u,5,1)!=0)));
L_1803ffaee_3:;
if(rd(s->u,6,1)){return UINT64_C(0x1803ffd96);}
L_1803ffaee_4:;
return UINT64_C(0x1803ffaf4);
}
uint64_t b_1803ffaf4(CPU*s){
/* 1803ffaf4: movaps xmmword ptr [rsp + 0x60], xmm6 */
L_1803ffaf4_0:;
L_1803ffaf4_1:;
wr(s->u,16,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803ffaf4_2:;
wr(s->u,36,16,rd(s->r,4992,16));
L_1803ffaf4_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803ffaf4_4:;
/* 1803ffaf9: movaps xmmword ptr [rsp + 0x50], xmm7 */
L_1803ffaf9_0:;
L_1803ffaf9_1:;
wr(s->u,16,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ffaf9_2:;
wr(s->u,36,16,rd(s->r,5056,16));
L_1803ffaf9_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803ffaf9_4:;
/* 1803ffafe: movaps xmmword ptr [rsp + 0x40], xmm8 */
L_1803ffafe_0:;
L_1803ffafe_1:;
wr(s->u,16,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ffafe_2:;
wr(s->u,36,16,rd(s->r,5120,16));
L_1803ffafe_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803ffafe_4:;
/* 1803ffb04: movaps xmmword ptr [rsp + 0x30], xmm9 */
L_1803ffb04_0:;
L_1803ffb04_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ffb04_2:;
wr(s->u,36,16,rd(s->r,5184,16));
L_1803ffb04_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803ffb04_4:;
/* 1803ffb0a: mov qword ptr [rsp + 0x20], r14 */
L_1803ffb0a_0:;
L_1803ffb0a_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ffb0a_2:;
wr(s->u,28,8,rd(s->r,176,8));
L_1803ffb0a_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ffb0a_4:;
/* 1803ffb0f: movss xmm5, dword ptr [rbp] */
L_1803ffb0f_0:;
L_1803ffb0f_1:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803ffb0f_2:;
wr(s->r,4928,4,rd(s->u,24,4));
L_1803ffb0f_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ffb0f_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ffb0f_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ffb0f_6:;
/* 1803ffb14: movss xmm8, dword ptr [rbp + 0x200] */
L_1803ffb14_0:;
L_1803ffb14_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803ffb14_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffb14_3:;
wr(s->r,5120,4,rd(s->u,24,4));
L_1803ffb14_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ffb14_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ffb14_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ffb14_7:;
/* 1803ffb1d: movaps xmm6, xmm8 */
L_1803ffb1d_0:;
L_1803ffb1d_1:;
wr(s->r,4992,4,rd(s->r,5120,4));
L_1803ffb1d_2:;
wr(s->r,4996,4,rd(s->r,5124,4));
L_1803ffb1d_3:;
wr(s->r,5000,4,rd(s->r,5128,4));
L_1803ffb1d_4:;
wr(s->r,5004,4,rd(s->r,5132,4));
L_1803ffb1d_5:;
/* 1803ffb21: movss xmm7, dword ptr [rbp + 4] */
L_1803ffb21_0:;
L_1803ffb21_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffb21_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffb21_3:;
wr(s->r,5056,4,rd(s->u,24,4));
L_1803ffb21_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ffb21_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ffb21_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ffb21_7:;
/* 1803ffb26: movaps xmm4, xmm7 */
L_1803ffb26_0:;
L_1803ffb26_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803ffb26_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803ffb26_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803ffb26_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803ffb26_5:;
/* 1803ffb29: movss xmm9, dword ptr [rbp + 0x204] */
L_1803ffb29_0:;
L_1803ffb29_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803ffb29_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffb29_3:;
wr(s->r,5184,4,rd(s->u,24,4));
L_1803ffb29_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ffb29_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ffb29_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ffb29_7:;
/* 1803ffb32: movss xmm3, dword ptr [rbp + 0x400] */
L_1803ffb32_0:;
L_1803ffb32_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803ffb32_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffb32_3:;
wr(s->r,4800,4,rd(s->u,24,4));
L_1803ffb32_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ffb32_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ffb32_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ffb32_7:;
/* 1803ffb3a: movaps xmm0, xmm3 */
L_1803ffb3a_0:;
L_1803ffb3a_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ffb3a_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ffb3a_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ffb3a_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ffb3a_5:;
/* 1803ffb3d: movss xmm2, dword ptr [rbp + 0x404] */
L_1803ffb3d_0:;
L_1803ffb3d_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803ffb3d_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffb3d_3:;
wr(s->r,4736,4,rd(s->u,24,4));
L_1803ffb3d_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ffb3d_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ffb3d_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ffb3d_7:;
/* 1803ffb45: movaps xmm1, xmm2 */
L_1803ffb45_0:;
L_1803ffb45_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803ffb45_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803ffb45_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803ffb45_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803ffb45_5:;
/* 1803ffb48: addss xmm6, xmm5 */
L_1803ffb48_0:;
L_1803ffb48_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ffb48_2:;
/* 1803ffb4c: addss xmm4, xmm9 */
L_1803ffb4c_0:;
L_1803ffb4c_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ffb4c_2:;
/* 1803ffb51: subss xmm5, xmm8 */
L_1803ffb51_0:;
L_1803ffb51_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ffb51_2:;
/* 1803ffb56: movss xmm8, dword ptr [rbp + 0x600] */
L_1803ffb56_0:;
L_1803ffb56_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x600))));
L_1803ffb56_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffb56_3:;
wr(s->r,5120,4,rd(s->u,24,4));
L_1803ffb56_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ffb56_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ffb56_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ffb56_7:;
/* 1803ffb5f: subss xmm7, xmm9 */
L_1803ffb5f_0:;
L_1803ffb5f_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ffb5f_2:;
/* 1803ffb64: movss xmm9, dword ptr [rbp + 0x604] */
L_1803ffb64_0:;
L_1803ffb64_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x604))));
L_1803ffb64_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffb64_3:;
wr(s->r,5184,4,rd(s->u,24,4));
L_1803ffb64_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ffb64_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ffb64_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ffb64_7:;
/* 1803ffb6d: addss xmm0, xmm8 */
L_1803ffb6d_0:;
L_1803ffb6d_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ffb6d_2:;
/* 1803ffb72: addss xmm1, xmm9 */
L_1803ffb72_0:;
L_1803ffb72_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ffb72_2:;
/* 1803ffb77: subss xmm3, xmm8 */
L_1803ffb77_0:;
L_1803ffb77_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ffb77_2:;
/* 1803ffb7c: movaps xmm8, xmm6 */
L_1803ffb7c_0:;
L_1803ffb7c_1:;
wr(s->r,5120,4,rd(s->r,4992,4));
L_1803ffb7c_2:;
wr(s->r,5124,4,rd(s->r,4996,4));
L_1803ffb7c_3:;
wr(s->r,5128,4,rd(s->r,5000,4));
L_1803ffb7c_4:;
wr(s->r,5132,4,rd(s->r,5004,4));
L_1803ffb7c_5:;
/* 1803ffb80: subss xmm2, xmm9 */
L_1803ffb80_0:;
L_1803ffb80_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ffb80_2:;
/* 1803ffb85: subss xmm6, xmm0 */
L_1803ffb85_0:;
L_1803ffb85_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffb85_2:;
/* 1803ffb89: movss dword ptr [rbp + 0x400], xmm6 */
L_1803ffb89_0:;
L_1803ffb89_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803ffb89_2:;
wr(s->u,24,4,rd(s->r,4992,4));
L_1803ffb89_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803ffb89_4:;
/* 1803ffb91: addss xmm8, xmm0 */
L_1803ffb91_0:;
L_1803ffb91_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ffb91_2:;
/* 1803ffb96: movss dword ptr [rbp], xmm8 */
L_1803ffb96_0:;
L_1803ffb96_1:;
wr(s->u,24,4,rd(s->r,5120,4));
L_1803ffb96_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,24,4));
L_1803ffb96_3:;
/* 1803ffb9c: movaps xmm8, xmm4 */
L_1803ffb9c_0:;
L_1803ffb9c_1:;
wr(s->r,5120,4,rd(s->r,4864,4));
L_1803ffb9c_2:;
wr(s->r,5124,4,rd(s->r,4868,4));
L_1803ffb9c_3:;
wr(s->r,5128,4,rd(s->r,4872,4));
L_1803ffb9c_4:;
wr(s->r,5132,4,rd(s->r,4876,4));
L_1803ffb9c_5:;
/* 1803ffba0: movaps xmm0, xmm5 */
L_1803ffba0_0:;
L_1803ffba0_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ffba0_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ffba0_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ffba0_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ffba0_5:;
return UINT64_C(0x1803ffba3);
}
uint64_t b_1803ffb0f(CPU*s){
/* 1803ffb0f: movss xmm5, dword ptr [rbp] */
L_1803ffb0f_0:;
L_1803ffb0f_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803ffb0f_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803ffb0f_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ffb0f_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ffb0f_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ffb0f_6:;
/* 1803ffb14: movss xmm8, dword ptr [rbp + 0x200] */
L_1803ffb14_0:;
L_1803ffb14_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803ffb14_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffb14_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ffb14_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ffb14_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ffb14_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ffb14_7:;
/* 1803ffb1d: movaps xmm6, xmm8 */
L_1803ffb1d_0:;
L_1803ffb1d_1:;
wr(s->r,4992,4,rd(s->r,5120,4));
L_1803ffb1d_2:;
wr(s->r,4996,4,rd(s->r,5124,4));
L_1803ffb1d_3:;
wr(s->r,5000,4,rd(s->r,5128,4));
L_1803ffb1d_4:;
wr(s->r,5004,4,rd(s->r,5132,4));
L_1803ffb1d_5:;
/* 1803ffb21: movss xmm7, dword ptr [rbp + 4] */
L_1803ffb21_0:;
L_1803ffb21_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffb21_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffb21_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803ffb21_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ffb21_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ffb21_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ffb21_7:;
/* 1803ffb26: movaps xmm4, xmm7 */
L_1803ffb26_0:;
L_1803ffb26_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803ffb26_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803ffb26_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803ffb26_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803ffb26_5:;
/* 1803ffb29: movss xmm9, dword ptr [rbp + 0x204] */
L_1803ffb29_0:;
L_1803ffb29_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803ffb29_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffb29_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803ffb29_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ffb29_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ffb29_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ffb29_7:;
/* 1803ffb32: movss xmm3, dword ptr [rbp + 0x400] */
L_1803ffb32_0:;
L_1803ffb32_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803ffb32_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffb32_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803ffb32_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ffb32_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ffb32_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ffb32_7:;
/* 1803ffb3a: movaps xmm0, xmm3 */
L_1803ffb3a_0:;
L_1803ffb3a_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ffb3a_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ffb3a_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ffb3a_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ffb3a_5:;
/* 1803ffb3d: movss xmm2, dword ptr [rbp + 0x404] */
L_1803ffb3d_0:;
L_1803ffb3d_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803ffb3d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffb3d_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803ffb3d_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ffb3d_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ffb3d_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ffb3d_7:;
/* 1803ffb45: movaps xmm1, xmm2 */
L_1803ffb45_0:;
L_1803ffb45_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803ffb45_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803ffb45_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803ffb45_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803ffb45_5:;
/* 1803ffb48: addss xmm6, xmm5 */
L_1803ffb48_0:;
L_1803ffb48_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ffb48_2:;
/* 1803ffb4c: addss xmm4, xmm9 */
L_1803ffb4c_0:;
L_1803ffb4c_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ffb4c_2:;
/* 1803ffb51: subss xmm5, xmm8 */
L_1803ffb51_0:;
L_1803ffb51_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ffb51_2:;
/* 1803ffb56: movss xmm8, dword ptr [rbp + 0x600] */
L_1803ffb56_0:;
L_1803ffb56_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x600))));
L_1803ffb56_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffb56_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ffb56_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ffb56_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ffb56_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ffb56_7:;
/* 1803ffb5f: subss xmm7, xmm9 */
L_1803ffb5f_0:;
L_1803ffb5f_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ffb5f_2:;
/* 1803ffb64: movss xmm9, dword ptr [rbp + 0x604] */
L_1803ffb64_0:;
L_1803ffb64_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x604))));
L_1803ffb64_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffb64_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803ffb64_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ffb64_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ffb64_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ffb64_7:;
/* 1803ffb6d: addss xmm0, xmm8 */
L_1803ffb6d_0:;
L_1803ffb6d_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ffb6d_2:;
/* 1803ffb72: addss xmm1, xmm9 */
L_1803ffb72_0:;
L_1803ffb72_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ffb72_2:;
/* 1803ffb77: subss xmm3, xmm8 */
L_1803ffb77_0:;
L_1803ffb77_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ffb77_2:;
/* 1803ffb7c: movaps xmm8, xmm6 */
L_1803ffb7c_0:;
L_1803ffb7c_1:;
wr(s->r,5120,4,rd(s->r,4992,4));
L_1803ffb7c_2:;
wr(s->r,5124,4,rd(s->r,4996,4));
L_1803ffb7c_3:;
wr(s->r,5128,4,rd(s->r,5000,4));
L_1803ffb7c_4:;
wr(s->r,5132,4,rd(s->r,5004,4));
L_1803ffb7c_5:;
/* 1803ffb80: subss xmm2, xmm9 */
L_1803ffb80_0:;
L_1803ffb80_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ffb80_2:;
/* 1803ffb85: subss xmm6, xmm0 */
L_1803ffb85_0:;
L_1803ffb85_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffb85_2:;
/* 1803ffb89: movss dword ptr [rbp + 0x400], xmm6 */
L_1803ffb89_0:;
L_1803ffb89_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803ffb89_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803ffb89_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffb89_4:;
/* 1803ffb91: addss xmm8, xmm0 */
L_1803ffb91_0:;
L_1803ffb91_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ffb91_2:;
/* 1803ffb96: movss dword ptr [rbp], xmm8 */
L_1803ffb96_0:;
L_1803ffb96_1:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ffb96_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803ffb96_3:;
/* 1803ffb9c: movaps xmm8, xmm4 */
L_1803ffb9c_0:;
L_1803ffb9c_1:;
wr(s->r,5120,4,rd(s->r,4864,4));
L_1803ffb9c_2:;
wr(s->r,5124,4,rd(s->r,4868,4));
L_1803ffb9c_3:;
wr(s->r,5128,4,rd(s->r,4872,4));
L_1803ffb9c_4:;
wr(s->r,5132,4,rd(s->r,4876,4));
L_1803ffb9c_5:;
/* 1803ffba0: movaps xmm0, xmm5 */
L_1803ffba0_0:;
L_1803ffba0_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ffba0_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ffba0_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ffba0_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ffba0_5:;
/* 1803ffba3: subss xmm4, xmm1 */
L_1803ffba3_0:;
L_1803ffba3_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ffba3_2:;
/* 1803ffba7: movss dword ptr [rbp + 0x404], xmm4 */
L_1803ffba7_0:;
L_1803ffba7_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803ffba7_2:;
wr(s->u,16,4,rd(s->r,4864,4));
L_1803ffba7_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffba7_4:;
/* 1803ffbaf: addss xmm8, xmm1 */
L_1803ffbaf_0:;
L_1803ffbaf_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ffbaf_2:;
/* 1803ffbb4: movss dword ptr [rbp + 4], xmm8 */
L_1803ffbb4_0:;
L_1803ffbb4_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffbb4_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ffbb4_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ffbb4_4:;
/* 1803ffbba: addss xmm0, xmm2 */
L_1803ffbba_0:;
L_1803ffbba_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ffbba_2:;
return UINT64_C(0x1803ffbbe);
}
uint64_t b_1803ffba3(CPU*s){
/* 1803ffba3: subss xmm4, xmm1 */
L_1803ffba3_0:;
L_1803ffba3_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ffba3_2:;
/* 1803ffba7: movss dword ptr [rbp + 0x404], xmm4 */
L_1803ffba7_0:;
L_1803ffba7_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803ffba7_2:;
wr(s->u,32,4,rd(s->r,4864,4));
L_1803ffba7_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ffba7_4:;
/* 1803ffbaf: addss xmm8, xmm1 */
L_1803ffbaf_0:;
L_1803ffbaf_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ffbaf_2:;
/* 1803ffbb4: movss dword ptr [rbp + 4], xmm8 */
L_1803ffbb4_0:;
L_1803ffbb4_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffbb4_2:;
wr(s->u,32,4,rd(s->r,5120,4));
L_1803ffbb4_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ffbb4_4:;
/* 1803ffbba: addss xmm0, xmm2 */
L_1803ffbba_0:;
L_1803ffbba_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ffbba_2:;
/* 1803ffbbe: movss dword ptr [rbp + 0x200], xmm0 */
L_1803ffbbe_0:;
L_1803ffbbe_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803ffbbe_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ffbbe_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ffbbe_4:;
/* 1803ffbc6: movaps xmm0, xmm7 */
L_1803ffbc6_0:;
L_1803ffbc6_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ffbc6_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ffbc6_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ffbc6_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ffbc6_5:;
/* 1803ffbc9: subss xmm5, xmm2 */
L_1803ffbc9_0:;
L_1803ffbc9_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ffbc9_2:;
/* 1803ffbcd: movss dword ptr [rbp + 0x600], xmm5 */
L_1803ffbcd_0:;
L_1803ffbcd_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x600))));
L_1803ffbcd_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803ffbcd_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ffbcd_4:;
/* 1803ffbd5: subss xmm0, xmm3 */
L_1803ffbd5_0:;
L_1803ffbd5_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ffbd5_2:;
/* 1803ffbd9: movss dword ptr [rbp + 0x204], xmm0 */
L_1803ffbd9_0:;
L_1803ffbd9_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803ffbd9_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ffbd9_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ffbd9_4:;
/* 1803ffbe1: addss xmm7, xmm3 */
L_1803ffbe1_0:;
L_1803ffbe1_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ffbe1_2:;
/* 1803ffbe5: movss dword ptr [rbp + 0x604], xmm7 */
L_1803ffbe5_0:;
L_1803ffbe5_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x604))));
L_1803ffbe5_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803ffbe5_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ffbe5_4:;
/* 1803ffbed: mov r15, r8 */
L_1803ffbed_0:;
L_1803ffbed_1:;
wr(s->r,184,8,rd(s->r,128,8));
L_1803ffbed_2:;
/* 1803ffbf0: lea r14, [r8 + 8] */
L_1803ffbf0_0:;
L_1803ffbf0_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803ffbf0_2:;
wr(s->r,176,8,rd(s->u,0,8));
L_1803ffbf0_3:;
/* 1803ffbf4: xor r11d, r11d */
L_1803ffbf4_0:;
L_1803ffbf4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ffbf4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ffbf4_3:;
wr(s->r,152,4,(rd(s->r,152,4)^rd(s->r,152,4)));
L_1803ffbf4_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ffbf4_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffbf4_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803ffbf4_7:;
wr(s->u,36,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803ffbf4_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1803ffbf4_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ffbf4_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ffbf4_11:;
/* 1803ffbf7: lea r14, [r14 + r9*4] */
L_1803ffbf7_0:;
L_1803ffbf7_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803ffbf7_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803ffbf7_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803ffbf7_4:;
/* 1803ffbfb: lea r15, [r15 + r9*4] */
L_1803ffbfb_0:;
L_1803ffbfb_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803ffbfb_2:;
wr(s->u,24,8,(rd(s->r,184,8)+rd(s->u,16,8)));
L_1803ffbfb_3:;
wr(s->r,184,8,rd(s->u,24,8));
L_1803ffbfb_4:;
/* 1803ffbff: movss xmm3, dword ptr [r15] */
L_1803ffbff_0:;
L_1803ffbff_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,184,8),4));
L_1803ffbff_2:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ffbff_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ffbff_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ffbff_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ffbff_6:;
/* 1803ffc04: movss xmm1, dword ptr [r15 + 4] */
L_1803ffc04_0:;
L_1803ffc04_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803ffc04_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffc04_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ffc04_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ffc04_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ffc04_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ffc04_7:;
/* 1803ffc0a: add rbp, 8 */
L_1803ffc0a_0:;
L_1803ffc0a_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803ffc0a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x8)),8,0));
L_1803ffc0a_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803ffc0a_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ffc0a_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803ffc0a_6:;
wr(s->u,36,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803ffc0a_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ffc0a_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ffc0a_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ffc0a_10:;
/* 1803ffc0e: movss xmm2, dword ptr [rbp + 0x400] */
L_1803ffc0e_0:;
L_1803ffc0e_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803ffc0e_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffc0e_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ffc0e_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ffc0e_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ffc0e_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ffc0e_7:;
/* 1803ffc16: movaps xmm4, xmm2 */
L_1803ffc16_0:;
L_1803ffc16_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803ffc16_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803ffc16_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803ffc16_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803ffc16_5:;
/* 1803ffc19: mulss xmm2, xmm1 */
L_1803ffc19_0:;
L_1803ffc19_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ffc19_2:;
/* 1803ffc1d: mulss xmm4, xmm3 */
L_1803ffc1d_0:;
L_1803ffc1d_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffc1d_2:;
/* 1803ffc21: movss xmm5, dword ptr [rbp + 0x404] */
L_1803ffc21_0:;
L_1803ffc21_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803ffc21_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffc21_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ffc21_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ffc21_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ffc21_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ffc21_7:;
/* 1803ffc29: movaps xmm0, xmm5 */
L_1803ffc29_0:;
L_1803ffc29_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ffc29_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ffc29_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ffc29_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ffc29_5:;
/* 1803ffc2c: mulss xmm5, xmm3 */
L_1803ffc2c_0:;
L_1803ffc2c_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffc2c_2:;
/* 1803ffc30: mulss xmm0, xmm1 */
L_1803ffc30_0:;
L_1803ffc30_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ffc30_2:;
/* 1803ffc34: movss xmm1, dword ptr [rbp + 0x200] */
L_1803ffc34_0:;
L_1803ffc34_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803ffc34_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffc34_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ffc34_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ffc34_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ffc34_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ffc34_7:;
/* 1803ffc3c: movaps xmm6, xmm1 */
L_1803ffc3c_0:;
L_1803ffc3c_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803ffc3c_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803ffc3c_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803ffc3c_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803ffc3c_5:;
/* 1803ffc3f: movss xmm7, dword ptr [rbp + 0x204] */
L_1803ffc3f_0:;
L_1803ffc3f_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803ffc3f_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffc3f_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803ffc3f_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ffc3f_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ffc3f_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ffc3f_7:;
return UINT64_C(0x1803ffc47);
}
uint64_t b_1803ffbbe(CPU*s){
/* 1803ffbbe: movss dword ptr [rbp + 0x200], xmm0 */
L_1803ffbbe_0:;
L_1803ffbbe_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803ffbbe_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ffbbe_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ffbbe_4:;
/* 1803ffbc6: movaps xmm0, xmm7 */
L_1803ffbc6_0:;
L_1803ffbc6_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ffbc6_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ffbc6_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ffbc6_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ffbc6_5:;
/* 1803ffbc9: subss xmm5, xmm2 */
L_1803ffbc9_0:;
L_1803ffbc9_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ffbc9_2:;
/* 1803ffbcd: movss dword ptr [rbp + 0x600], xmm5 */
L_1803ffbcd_0:;
L_1803ffbcd_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x600))));
L_1803ffbcd_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803ffbcd_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ffbcd_4:;
/* 1803ffbd5: subss xmm0, xmm3 */
L_1803ffbd5_0:;
L_1803ffbd5_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ffbd5_2:;
/* 1803ffbd9: movss dword ptr [rbp + 0x204], xmm0 */
L_1803ffbd9_0:;
L_1803ffbd9_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803ffbd9_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ffbd9_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ffbd9_4:;
/* 1803ffbe1: addss xmm7, xmm3 */
L_1803ffbe1_0:;
L_1803ffbe1_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ffbe1_2:;
/* 1803ffbe5: movss dword ptr [rbp + 0x604], xmm7 */
L_1803ffbe5_0:;
L_1803ffbe5_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x604))));
L_1803ffbe5_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803ffbe5_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ffbe5_4:;
/* 1803ffbed: mov r15, r8 */
L_1803ffbed_0:;
L_1803ffbed_1:;
wr(s->r,184,8,rd(s->r,128,8));
L_1803ffbed_2:;
/* 1803ffbf0: lea r14, [r8 + 8] */
L_1803ffbf0_0:;
L_1803ffbf0_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803ffbf0_2:;
wr(s->r,176,8,rd(s->u,0,8));
L_1803ffbf0_3:;
/* 1803ffbf4: xor r11d, r11d */
L_1803ffbf4_0:;
L_1803ffbf4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ffbf4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ffbf4_3:;
wr(s->r,152,4,(rd(s->r,152,4)^rd(s->r,152,4)));
L_1803ffbf4_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ffbf4_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffbf4_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803ffbf4_7:;
wr(s->u,36,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803ffbf4_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1803ffbf4_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ffbf4_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ffbf4_11:;
/* 1803ffbf7: lea r14, [r14 + r9*4] */
L_1803ffbf7_0:;
L_1803ffbf7_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803ffbf7_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803ffbf7_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803ffbf7_4:;
/* 1803ffbfb: lea r15, [r15 + r9*4] */
L_1803ffbfb_0:;
L_1803ffbfb_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803ffbfb_2:;
wr(s->u,24,8,(rd(s->r,184,8)+rd(s->u,16,8)));
L_1803ffbfb_3:;
wr(s->r,184,8,rd(s->u,24,8));
L_1803ffbfb_4:;
/* 1803ffbff: movss xmm3, dword ptr [r15] */
L_1803ffbff_0:;
L_1803ffbff_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,184,8),4));
L_1803ffbff_2:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ffbff_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ffbff_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ffbff_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ffbff_6:;
/* 1803ffc04: movss xmm1, dword ptr [r15 + 4] */
L_1803ffc04_0:;
L_1803ffc04_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803ffc04_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffc04_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ffc04_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ffc04_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ffc04_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ffc04_7:;
/* 1803ffc0a: add rbp, 8 */
L_1803ffc0a_0:;
L_1803ffc0a_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803ffc0a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x8)),8,0));
L_1803ffc0a_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803ffc0a_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ffc0a_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803ffc0a_6:;
wr(s->u,36,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803ffc0a_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ffc0a_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ffc0a_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ffc0a_10:;
/* 1803ffc0e: movss xmm2, dword ptr [rbp + 0x400] */
L_1803ffc0e_0:;
L_1803ffc0e_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803ffc0e_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffc0e_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ffc0e_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ffc0e_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ffc0e_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ffc0e_7:;
/* 1803ffc16: movaps xmm4, xmm2 */
L_1803ffc16_0:;
L_1803ffc16_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803ffc16_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803ffc16_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803ffc16_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803ffc16_5:;
/* 1803ffc19: mulss xmm2, xmm1 */
L_1803ffc19_0:;
L_1803ffc19_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ffc19_2:;
/* 1803ffc1d: mulss xmm4, xmm3 */
L_1803ffc1d_0:;
L_1803ffc1d_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffc1d_2:;
/* 1803ffc21: movss xmm5, dword ptr [rbp + 0x404] */
L_1803ffc21_0:;
L_1803ffc21_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803ffc21_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffc21_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ffc21_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ffc21_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ffc21_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ffc21_7:;
/* 1803ffc29: movaps xmm0, xmm5 */
L_1803ffc29_0:;
L_1803ffc29_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ffc29_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ffc29_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ffc29_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ffc29_5:;
/* 1803ffc2c: mulss xmm5, xmm3 */
L_1803ffc2c_0:;
L_1803ffc2c_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffc2c_2:;
/* 1803ffc30: mulss xmm0, xmm1 */
L_1803ffc30_0:;
L_1803ffc30_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ffc30_2:;
/* 1803ffc34: movss xmm1, dword ptr [rbp + 0x200] */
L_1803ffc34_0:;
L_1803ffc34_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803ffc34_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffc34_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ffc34_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ffc34_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ffc34_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ffc34_7:;
/* 1803ffc3c: movaps xmm6, xmm1 */
L_1803ffc3c_0:;
L_1803ffc3c_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803ffc3c_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803ffc3c_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803ffc3c_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803ffc3c_5:;
/* 1803ffc3f: movss xmm7, dword ptr [rbp + 0x204] */
L_1803ffc3f_0:;
L_1803ffc3f_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803ffc3f_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffc3f_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803ffc3f_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ffc3f_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ffc3f_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ffc3f_7:;
/* 1803ffc47: movss xmm3, dword ptr [r14 + 4] */
L_1803ffc47_0:;
L_1803ffc47_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803ffc47_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffc47_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ffc47_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ffc47_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ffc47_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ffc47_7:;
/* 1803ffc4d: mulss xmm1, xmm3 */
L_1803ffc4d_0:;
L_1803ffc4d_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffc4d_2:;
/* 1803ffc51: movss xmm8, dword ptr [rbp + 0x604] */
L_1803ffc51_0:;
L_1803ffc51_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x604))));
L_1803ffc51_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffc51_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803ffc51_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ffc51_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ffc51_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ffc51_7:;
/* 1803ffc5a: subss xmm4, xmm0 */
L_1803ffc5a_0:;
L_1803ffc5a_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffc5a_2:;
/* 1803ffc5e: movaps xmm0, xmm7 */
L_1803ffc5e_0:;
L_1803ffc5e_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ffc5e_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ffc5e_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ffc5e_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ffc5e_5:;
return UINT64_C(0x1803ffc61);
}
uint64_t b_1803ffbf7(CPU*s){
/* 1803ffbf7: lea r14, [r14 + r9*4] */
L_1803ffbf7_0:;
L_1803ffbf7_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803ffbf7_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803ffbf7_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803ffbf7_4:;
/* 1803ffbfb: lea r15, [r15 + r9*4] */
L_1803ffbfb_0:;
L_1803ffbfb_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803ffbfb_2:;
wr(s->u,24,8,(rd(s->r,184,8)+rd(s->u,16,8)));
L_1803ffbfb_3:;
wr(s->r,184,8,rd(s->u,24,8));
L_1803ffbfb_4:;
/* 1803ffbff: movss xmm3, dword ptr [r15] */
L_1803ffbff_0:;
L_1803ffbff_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,184,8),4));
L_1803ffbff_2:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ffbff_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ffbff_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ffbff_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ffbff_6:;
/* 1803ffc04: movss xmm1, dword ptr [r15 + 4] */
L_1803ffc04_0:;
L_1803ffc04_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803ffc04_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffc04_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ffc04_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ffc04_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ffc04_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ffc04_7:;
/* 1803ffc0a: add rbp, 8 */
L_1803ffc0a_0:;
L_1803ffc0a_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803ffc0a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x8)),8,0));
L_1803ffc0a_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803ffc0a_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ffc0a_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803ffc0a_6:;
wr(s->u,36,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803ffc0a_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ffc0a_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ffc0a_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ffc0a_10:;
/* 1803ffc0e: movss xmm2, dword ptr [rbp + 0x400] */
L_1803ffc0e_0:;
L_1803ffc0e_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803ffc0e_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffc0e_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ffc0e_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ffc0e_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ffc0e_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ffc0e_7:;
/* 1803ffc16: movaps xmm4, xmm2 */
L_1803ffc16_0:;
L_1803ffc16_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803ffc16_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803ffc16_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803ffc16_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803ffc16_5:;
/* 1803ffc19: mulss xmm2, xmm1 */
L_1803ffc19_0:;
L_1803ffc19_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ffc19_2:;
/* 1803ffc1d: mulss xmm4, xmm3 */
L_1803ffc1d_0:;
L_1803ffc1d_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffc1d_2:;
/* 1803ffc21: movss xmm5, dword ptr [rbp + 0x404] */
L_1803ffc21_0:;
L_1803ffc21_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803ffc21_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffc21_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ffc21_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ffc21_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ffc21_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ffc21_7:;
/* 1803ffc29: movaps xmm0, xmm5 */
L_1803ffc29_0:;
L_1803ffc29_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ffc29_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ffc29_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ffc29_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ffc29_5:;
/* 1803ffc2c: mulss xmm5, xmm3 */
L_1803ffc2c_0:;
L_1803ffc2c_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffc2c_2:;
/* 1803ffc30: mulss xmm0, xmm1 */
L_1803ffc30_0:;
L_1803ffc30_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ffc30_2:;
/* 1803ffc34: movss xmm1, dword ptr [rbp + 0x200] */
L_1803ffc34_0:;
L_1803ffc34_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803ffc34_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffc34_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ffc34_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ffc34_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ffc34_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ffc34_7:;
/* 1803ffc3c: movaps xmm6, xmm1 */
L_1803ffc3c_0:;
L_1803ffc3c_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803ffc3c_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803ffc3c_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803ffc3c_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803ffc3c_5:;
/* 1803ffc3f: movss xmm7, dword ptr [rbp + 0x204] */
L_1803ffc3f_0:;
L_1803ffc3f_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803ffc3f_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffc3f_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803ffc3f_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ffc3f_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ffc3f_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ffc3f_7:;
/* 1803ffc47: movss xmm3, dword ptr [r14 + 4] */
L_1803ffc47_0:;
L_1803ffc47_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803ffc47_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffc47_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ffc47_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ffc47_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ffc47_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ffc47_7:;
/* 1803ffc4d: mulss xmm1, xmm3 */
L_1803ffc4d_0:;
L_1803ffc4d_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffc4d_2:;
/* 1803ffc51: movss xmm8, dword ptr [rbp + 0x604] */
L_1803ffc51_0:;
L_1803ffc51_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x604))));
L_1803ffc51_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffc51_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803ffc51_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ffc51_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ffc51_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ffc51_7:;
/* 1803ffc5a: subss xmm4, xmm0 */
L_1803ffc5a_0:;
L_1803ffc5a_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffc5a_2:;
/* 1803ffc5e: movaps xmm0, xmm7 */
L_1803ffc5e_0:;
L_1803ffc5e_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ffc5e_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ffc5e_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ffc5e_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ffc5e_5:;
/* 1803ffc61: mulss xmm0, xmm3 */
L_1803ffc61_0:;
L_1803ffc61_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffc61_2:;
/* 1803ffc65: movss xmm3, dword ptr [r14 + 0xc] */
L_1803ffc65_0:;
L_1803ffc65_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803ffc65_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffc65_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ffc65_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ffc65_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ffc65_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ffc65_7:;
/* 1803ffc6b: addss xmm2, xmm5 */
L_1803ffc6b_0:;
L_1803ffc6b_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ffc6b_2:;
/* 1803ffc6f: movss xmm5, dword ptr [r14] */
L_1803ffc6f_0:;
L_1803ffc6f_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803ffc6f_2:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ffc6f_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ffc6f_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ffc6f_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ffc6f_6:;
/* 1803ffc74: mulss xmm6, xmm5 */
L_1803ffc74_0:;
L_1803ffc74_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803ffc74_2:;
/* 1803ffc78: mulss xmm7, xmm5 */
L_1803ffc78_0:;
L_1803ffc78_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803ffc78_2:;
/* 1803ffc7c: movss xmm5, dword ptr [rbp + 0x600] */
L_1803ffc7c_0:;
L_1803ffc7c_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x600))));
L_1803ffc7c_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffc7c_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ffc7c_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ffc7c_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ffc7c_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ffc7c_7:;
/* 1803ffc84: movaps xmm9, xmm5 */
L_1803ffc84_0:;
L_1803ffc84_1:;
wr(s->r,5184,4,rd(s->r,4928,4));
L_1803ffc84_2:;
wr(s->r,5188,4,rd(s->r,4932,4));
L_1803ffc84_3:;
wr(s->r,5192,4,rd(s->r,4936,4));
L_1803ffc84_4:;
wr(s->r,5196,4,rd(s->r,4940,4));
L_1803ffc84_5:;
/* 1803ffc88: mulss xmm5, xmm3 */
L_1803ffc88_0:;
L_1803ffc88_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffc88_2:;
/* 1803ffc8c: subss xmm6, xmm0 */
L_1803ffc8c_0:;
L_1803ffc8c_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffc8c_2:;
/* 1803ffc90: movaps xmm0, xmm8 */
L_1803ffc90_0:;
L_1803ffc90_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ffc90_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ffc90_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ffc90_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ffc90_5:;
return UINT64_C(0x1803ffc94);
}
uint64_t b_1803ffc47(CPU*s){
/* 1803ffc47: movss xmm3, dword ptr [r14 + 4] */
L_1803ffc47_0:;
L_1803ffc47_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803ffc47_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffc47_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803ffc47_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ffc47_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ffc47_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ffc47_7:;
/* 1803ffc4d: mulss xmm1, xmm3 */
L_1803ffc4d_0:;
L_1803ffc4d_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffc4d_2:;
/* 1803ffc51: movss xmm8, dword ptr [rbp + 0x604] */
L_1803ffc51_0:;
L_1803ffc51_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x604))));
L_1803ffc51_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffc51_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ffc51_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ffc51_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ffc51_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ffc51_7:;
/* 1803ffc5a: subss xmm4, xmm0 */
L_1803ffc5a_0:;
L_1803ffc5a_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffc5a_2:;
/* 1803ffc5e: movaps xmm0, xmm7 */
L_1803ffc5e_0:;
L_1803ffc5e_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ffc5e_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ffc5e_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ffc5e_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ffc5e_5:;
/* 1803ffc61: mulss xmm0, xmm3 */
L_1803ffc61_0:;
L_1803ffc61_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffc61_2:;
/* 1803ffc65: movss xmm3, dword ptr [r14 + 0xc] */
L_1803ffc65_0:;
L_1803ffc65_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803ffc65_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffc65_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803ffc65_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ffc65_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ffc65_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ffc65_7:;
/* 1803ffc6b: addss xmm2, xmm5 */
L_1803ffc6b_0:;
L_1803ffc6b_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ffc6b_2:;
/* 1803ffc6f: movss xmm5, dword ptr [r14] */
L_1803ffc6f_0:;
L_1803ffc6f_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803ffc6f_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803ffc6f_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ffc6f_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ffc6f_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ffc6f_6:;
/* 1803ffc74: mulss xmm6, xmm5 */
L_1803ffc74_0:;
L_1803ffc74_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803ffc74_2:;
/* 1803ffc78: mulss xmm7, xmm5 */
L_1803ffc78_0:;
L_1803ffc78_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803ffc78_2:;
/* 1803ffc7c: movss xmm5, dword ptr [rbp + 0x600] */
L_1803ffc7c_0:;
L_1803ffc7c_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x600))));
L_1803ffc7c_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffc7c_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803ffc7c_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ffc7c_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ffc7c_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ffc7c_7:;
/* 1803ffc84: movaps xmm9, xmm5 */
L_1803ffc84_0:;
L_1803ffc84_1:;
wr(s->r,5184,4,rd(s->r,4928,4));
L_1803ffc84_2:;
wr(s->r,5188,4,rd(s->r,4932,4));
L_1803ffc84_3:;
wr(s->r,5192,4,rd(s->r,4936,4));
L_1803ffc84_4:;
wr(s->r,5196,4,rd(s->r,4940,4));
L_1803ffc84_5:;
/* 1803ffc88: mulss xmm5, xmm3 */
L_1803ffc88_0:;
L_1803ffc88_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffc88_2:;
/* 1803ffc8c: subss xmm6, xmm0 */
L_1803ffc8c_0:;
L_1803ffc8c_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffc8c_2:;
/* 1803ffc90: movaps xmm0, xmm8 */
L_1803ffc90_0:;
L_1803ffc90_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ffc90_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ffc90_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ffc90_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ffc90_5:;
/* 1803ffc94: mulss xmm0, xmm3 */
L_1803ffc94_0:;
L_1803ffc94_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffc94_2:;
/* 1803ffc98: movaps xmm3, xmm4 */
L_1803ffc98_0:;
L_1803ffc98_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803ffc98_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803ffc98_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803ffc98_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803ffc98_5:;
/* 1803ffc9b: addss xmm1, xmm7 */
L_1803ffc9b_0:;
L_1803ffc9b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ffc9b_2:;
/* 1803ffc9f: movss xmm7, dword ptr [r14 + 8] */
L_1803ffc9f_0:;
L_1803ffc9f_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803ffc9f_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffc9f_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803ffc9f_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ffc9f_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ffc9f_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ffc9f_7:;
/* 1803ffca5: mulss xmm9, xmm7 */
L_1803ffca5_0:;
L_1803ffca5_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ffca5_2:;
/* 1803ffcaa: mulss xmm8, xmm7 */
L_1803ffcaa_0:;
L_1803ffcaa_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ffcaa_2:;
/* 1803ffcaf: add r11d, 1 */
L_1803ffcaf_0:;
L_1803ffcaf_1:;
wr(s->r,512,1,(((rd(s->r,152,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,152,4)));
L_1803ffcaf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803ffcaf_3:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803ffcaf_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ffcaf_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffcaf_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803ffcaf_7:;
wr(s->u,20,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803ffcaf_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ffcaf_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ffcaf_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ffcaf_11:;
/* 1803ffcb3: subss xmm9, xmm0 */
L_1803ffcb3_0:;
L_1803ffcb3_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffcb3_2:;
/* 1803ffcb8: movaps xmm0, xmm2 */
L_1803ffcb8_0:;
L_1803ffcb8_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803ffcb8_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803ffcb8_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803ffcb8_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803ffcb8_5:;
/* 1803ffcbb: addss xmm5, xmm8 */
L_1803ffcbb_0:;
L_1803ffcbb_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ffcbb_2:;
/* 1803ffcc0: movss xmm8, dword ptr [rbp] */
L_1803ffcc0_0:;
L_1803ffcc0_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803ffcc0_2:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ffcc0_3:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ffcc0_4:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ffcc0_5:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ffcc0_6:;
/* 1803ffcc6: movaps xmm7, xmm8 */
L_1803ffcc6_0:;
L_1803ffcc6_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803ffcc6_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803ffcc6_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803ffcc6_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803ffcc6_5:;
/* 1803ffcca: addss xmm3, xmm9 */
L_1803ffcca_0:;
L_1803ffcca_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ffcca_2:;
/* 1803ffccf: subss xmm4, xmm9 */
L_1803ffccf_0:;
L_1803ffccf_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ffccf_2:;
/* 1803ffcd4: addss xmm0, xmm5 */
L_1803ffcd4_0:;
L_1803ffcd4_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ffcd4_2:;
/* 1803ffcd8: subss xmm2, xmm5 */
L_1803ffcd8_0:;
L_1803ffcd8_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ffcd8_2:;
return UINT64_C(0x1803ffcdc);
}
uint64_t b_1803ffc61(CPU*s){
/* 1803ffc61: mulss xmm0, xmm3 */
L_1803ffc61_0:;
L_1803ffc61_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffc61_2:;
/* 1803ffc65: movss xmm3, dword ptr [r14 + 0xc] */
L_1803ffc65_0:;
L_1803ffc65_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803ffc65_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffc65_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803ffc65_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ffc65_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ffc65_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ffc65_7:;
/* 1803ffc6b: addss xmm2, xmm5 */
L_1803ffc6b_0:;
L_1803ffc6b_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ffc6b_2:;
/* 1803ffc6f: movss xmm5, dword ptr [r14] */
L_1803ffc6f_0:;
L_1803ffc6f_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803ffc6f_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803ffc6f_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ffc6f_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ffc6f_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ffc6f_6:;
/* 1803ffc74: mulss xmm6, xmm5 */
L_1803ffc74_0:;
L_1803ffc74_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803ffc74_2:;
/* 1803ffc78: mulss xmm7, xmm5 */
L_1803ffc78_0:;
L_1803ffc78_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803ffc78_2:;
/* 1803ffc7c: movss xmm5, dword ptr [rbp + 0x600] */
L_1803ffc7c_0:;
L_1803ffc7c_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x600))));
L_1803ffc7c_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffc7c_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803ffc7c_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ffc7c_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ffc7c_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ffc7c_7:;
/* 1803ffc84: movaps xmm9, xmm5 */
L_1803ffc84_0:;
L_1803ffc84_1:;
wr(s->r,5184,4,rd(s->r,4928,4));
L_1803ffc84_2:;
wr(s->r,5188,4,rd(s->r,4932,4));
L_1803ffc84_3:;
wr(s->r,5192,4,rd(s->r,4936,4));
L_1803ffc84_4:;
wr(s->r,5196,4,rd(s->r,4940,4));
L_1803ffc84_5:;
/* 1803ffc88: mulss xmm5, xmm3 */
L_1803ffc88_0:;
L_1803ffc88_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffc88_2:;
/* 1803ffc8c: subss xmm6, xmm0 */
L_1803ffc8c_0:;
L_1803ffc8c_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffc8c_2:;
/* 1803ffc90: movaps xmm0, xmm8 */
L_1803ffc90_0:;
L_1803ffc90_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ffc90_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ffc90_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ffc90_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ffc90_5:;
/* 1803ffc94: mulss xmm0, xmm3 */
L_1803ffc94_0:;
L_1803ffc94_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffc94_2:;
/* 1803ffc98: movaps xmm3, xmm4 */
L_1803ffc98_0:;
L_1803ffc98_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803ffc98_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803ffc98_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803ffc98_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803ffc98_5:;
/* 1803ffc9b: addss xmm1, xmm7 */
L_1803ffc9b_0:;
L_1803ffc9b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ffc9b_2:;
/* 1803ffc9f: movss xmm7, dword ptr [r14 + 8] */
L_1803ffc9f_0:;
L_1803ffc9f_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803ffc9f_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffc9f_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803ffc9f_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ffc9f_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ffc9f_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ffc9f_7:;
/* 1803ffca5: mulss xmm9, xmm7 */
L_1803ffca5_0:;
L_1803ffca5_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ffca5_2:;
/* 1803ffcaa: mulss xmm8, xmm7 */
L_1803ffcaa_0:;
L_1803ffcaa_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ffcaa_2:;
/* 1803ffcaf: add r11d, 1 */
L_1803ffcaf_0:;
L_1803ffcaf_1:;
wr(s->r,512,1,(((rd(s->r,152,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,152,4)));
L_1803ffcaf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803ffcaf_3:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803ffcaf_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ffcaf_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffcaf_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803ffcaf_7:;
wr(s->u,20,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803ffcaf_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ffcaf_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ffcaf_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ffcaf_11:;
/* 1803ffcb3: subss xmm9, xmm0 */
L_1803ffcb3_0:;
L_1803ffcb3_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffcb3_2:;
/* 1803ffcb8: movaps xmm0, xmm2 */
L_1803ffcb8_0:;
L_1803ffcb8_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803ffcb8_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803ffcb8_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803ffcb8_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803ffcb8_5:;
/* 1803ffcbb: addss xmm5, xmm8 */
L_1803ffcbb_0:;
L_1803ffcbb_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ffcbb_2:;
/* 1803ffcc0: movss xmm8, dword ptr [rbp] */
L_1803ffcc0_0:;
L_1803ffcc0_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803ffcc0_2:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ffcc0_3:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ffcc0_4:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ffcc0_5:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ffcc0_6:;
/* 1803ffcc6: movaps xmm7, xmm8 */
L_1803ffcc6_0:;
L_1803ffcc6_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803ffcc6_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803ffcc6_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803ffcc6_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803ffcc6_5:;
/* 1803ffcca: addss xmm3, xmm9 */
L_1803ffcca_0:;
L_1803ffcca_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ffcca_2:;
/* 1803ffccf: subss xmm4, xmm9 */
L_1803ffccf_0:;
L_1803ffccf_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ffccf_2:;
/* 1803ffcd4: addss xmm0, xmm5 */
L_1803ffcd4_0:;
L_1803ffcd4_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ffcd4_2:;
/* 1803ffcd8: subss xmm2, xmm5 */
L_1803ffcd8_0:;
L_1803ffcd8_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ffcd8_2:;
/* 1803ffcdc: addss xmm7, xmm6 */
L_1803ffcdc_0:;
L_1803ffcdc_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803ffcdc_2:;
/* 1803ffce0: subss xmm8, xmm6 */
L_1803ffce0_0:;
L_1803ffce0_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803ffce0_2:;
/* 1803ffce5: movss xmm6, dword ptr [rbp + 4] */
L_1803ffce5_0:;
L_1803ffce5_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffce5_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffce5_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803ffce5_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ffce5_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ffce5_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ffce5_7:;
/* 1803ffcea: movaps xmm5, xmm6 */
L_1803ffcea_0:;
L_1803ffcea_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803ffcea_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803ffcea_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803ffcea_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803ffcea_5:;
/* 1803ffced: subss xmm6, xmm1 */
L_1803ffced_0:;
L_1803ffced_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ffced_2:;
return UINT64_C(0x1803ffcf1);
}
uint64_t b_1803ffc94(CPU*s){
/* 1803ffc94: mulss xmm0, xmm3 */
L_1803ffc94_0:;
L_1803ffc94_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffc94_2:;
/* 1803ffc98: movaps xmm3, xmm4 */
L_1803ffc98_0:;
L_1803ffc98_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803ffc98_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803ffc98_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803ffc98_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803ffc98_5:;
/* 1803ffc9b: addss xmm1, xmm7 */
L_1803ffc9b_0:;
L_1803ffc9b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ffc9b_2:;
/* 1803ffc9f: movss xmm7, dword ptr [r14 + 8] */
L_1803ffc9f_0:;
L_1803ffc9f_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803ffc9f_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffc9f_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803ffc9f_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ffc9f_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ffc9f_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ffc9f_7:;
/* 1803ffca5: mulss xmm9, xmm7 */
L_1803ffca5_0:;
L_1803ffca5_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ffca5_2:;
/* 1803ffcaa: mulss xmm8, xmm7 */
L_1803ffcaa_0:;
L_1803ffcaa_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ffcaa_2:;
/* 1803ffcaf: add r11d, 1 */
L_1803ffcaf_0:;
L_1803ffcaf_1:;
wr(s->r,512,1,(((rd(s->r,152,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,152,4)));
L_1803ffcaf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803ffcaf_3:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803ffcaf_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ffcaf_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffcaf_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803ffcaf_7:;
wr(s->u,20,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803ffcaf_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ffcaf_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ffcaf_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ffcaf_11:;
/* 1803ffcb3: subss xmm9, xmm0 */
L_1803ffcb3_0:;
L_1803ffcb3_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffcb3_2:;
/* 1803ffcb8: movaps xmm0, xmm2 */
L_1803ffcb8_0:;
L_1803ffcb8_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803ffcb8_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803ffcb8_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803ffcb8_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803ffcb8_5:;
/* 1803ffcbb: addss xmm5, xmm8 */
L_1803ffcbb_0:;
L_1803ffcbb_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ffcbb_2:;
/* 1803ffcc0: movss xmm8, dword ptr [rbp] */
L_1803ffcc0_0:;
L_1803ffcc0_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803ffcc0_2:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ffcc0_3:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ffcc0_4:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ffcc0_5:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ffcc0_6:;
/* 1803ffcc6: movaps xmm7, xmm8 */
L_1803ffcc6_0:;
L_1803ffcc6_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803ffcc6_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803ffcc6_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803ffcc6_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803ffcc6_5:;
/* 1803ffcca: addss xmm3, xmm9 */
L_1803ffcca_0:;
L_1803ffcca_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ffcca_2:;
/* 1803ffccf: subss xmm4, xmm9 */
L_1803ffccf_0:;
L_1803ffccf_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ffccf_2:;
/* 1803ffcd4: addss xmm0, xmm5 */
L_1803ffcd4_0:;
L_1803ffcd4_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ffcd4_2:;
/* 1803ffcd8: subss xmm2, xmm5 */
L_1803ffcd8_0:;
L_1803ffcd8_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ffcd8_2:;
/* 1803ffcdc: addss xmm7, xmm6 */
L_1803ffcdc_0:;
L_1803ffcdc_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803ffcdc_2:;
/* 1803ffce0: subss xmm8, xmm6 */
L_1803ffce0_0:;
L_1803ffce0_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803ffce0_2:;
/* 1803ffce5: movss xmm6, dword ptr [rbp + 4] */
L_1803ffce5_0:;
L_1803ffce5_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffce5_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffce5_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803ffce5_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ffce5_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ffce5_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ffce5_7:;
/* 1803ffcea: movaps xmm5, xmm6 */
L_1803ffcea_0:;
L_1803ffcea_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803ffcea_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803ffcea_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803ffcea_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803ffcea_5:;
/* 1803ffced: subss xmm6, xmm1 */
L_1803ffced_0:;
L_1803ffced_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ffced_2:;
/* 1803ffcf1: cmp r11d, 0x3f */
L_1803ffcf1_0:;
L_1803ffcf1_1:;
wr(s->u,26,4,rd(s->r,152,4));
L_1803ffcf1_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0x3f))));
L_1803ffcf1_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0x3f)),4,1));
L_1803ffcf1_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0x3f))));
L_1803ffcf1_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffcf1_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803ffcf1_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803ffcf1_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ffcf1_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ffcf1_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ffcf1_11:;
/* 1803ffcf5: addss xmm5, xmm1 */
L_1803ffcf5_0:;
L_1803ffcf5_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ffcf5_2:;
/* 1803ffcf9: movaps xmm1, xmm7 */
L_1803ffcf9_0:;
L_1803ffcf9_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803ffcf9_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803ffcf9_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803ffcf9_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803ffcf9_5:;
/* 1803ffcfc: subss xmm7, xmm3 */
L_1803ffcfc_0:;
L_1803ffcfc_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ffcfc_2:;
/* 1803ffd00: movss dword ptr [rbp + 0x400], xmm7 */
L_1803ffd00_0:;
L_1803ffd00_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803ffd00_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803ffd00_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffd00_4:;
/* 1803ffd08: addss xmm1, xmm3 */
L_1803ffd08_0:;
L_1803ffd08_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ffd08_2:;
/* 1803ffd0c: movss dword ptr [rbp], xmm1 */
L_1803ffd0c_0:;
L_1803ffd0c_1:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ffd0c_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803ffd0c_3:;
/* 1803ffd11: movaps xmm1, xmm5 */
L_1803ffd11_0:;
L_1803ffd11_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803ffd11_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803ffd11_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803ffd11_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803ffd11_5:;
/* 1803ffd14: subss xmm5, xmm0 */
L_1803ffd14_0:;
L_1803ffd14_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffd14_2:;
/* 1803ffd18: movss dword ptr [rbp + 0x404], xmm5 */
L_1803ffd18_0:;
L_1803ffd18_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803ffd18_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803ffd18_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffd18_4:;
/* 1803ffd20: addss xmm1, xmm0 */
L_1803ffd20_0:;
L_1803ffd20_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ffd20_2:;
return UINT64_C(0x1803ffd24);
}
uint64_t b_1803ffcdc(CPU*s){
/* 1803ffcdc: addss xmm7, xmm6 */
L_1803ffcdc_0:;
L_1803ffcdc_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803ffcdc_2:;
/* 1803ffce0: subss xmm8, xmm6 */
L_1803ffce0_0:;
L_1803ffce0_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803ffce0_2:;
/* 1803ffce5: movss xmm6, dword ptr [rbp + 4] */
L_1803ffce5_0:;
L_1803ffce5_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffce5_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffce5_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803ffce5_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ffce5_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ffce5_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ffce5_7:;
/* 1803ffcea: movaps xmm5, xmm6 */
L_1803ffcea_0:;
L_1803ffcea_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803ffcea_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803ffcea_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803ffcea_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803ffcea_5:;
/* 1803ffced: subss xmm6, xmm1 */
L_1803ffced_0:;
L_1803ffced_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ffced_2:;
/* 1803ffcf1: cmp r11d, 0x3f */
L_1803ffcf1_0:;
L_1803ffcf1_1:;
wr(s->u,26,4,rd(s->r,152,4));
L_1803ffcf1_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0x3f))));
L_1803ffcf1_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0x3f)),4,1));
L_1803ffcf1_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0x3f))));
L_1803ffcf1_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffcf1_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803ffcf1_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803ffcf1_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ffcf1_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ffcf1_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ffcf1_11:;
/* 1803ffcf5: addss xmm5, xmm1 */
L_1803ffcf5_0:;
L_1803ffcf5_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ffcf5_2:;
/* 1803ffcf9: movaps xmm1, xmm7 */
L_1803ffcf9_0:;
L_1803ffcf9_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803ffcf9_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803ffcf9_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803ffcf9_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803ffcf9_5:;
/* 1803ffcfc: subss xmm7, xmm3 */
L_1803ffcfc_0:;
L_1803ffcfc_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ffcfc_2:;
/* 1803ffd00: movss dword ptr [rbp + 0x400], xmm7 */
L_1803ffd00_0:;
L_1803ffd00_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803ffd00_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803ffd00_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffd00_4:;
/* 1803ffd08: addss xmm1, xmm3 */
L_1803ffd08_0:;
L_1803ffd08_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ffd08_2:;
/* 1803ffd0c: movss dword ptr [rbp], xmm1 */
L_1803ffd0c_0:;
L_1803ffd0c_1:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ffd0c_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803ffd0c_3:;
/* 1803ffd11: movaps xmm1, xmm5 */
L_1803ffd11_0:;
L_1803ffd11_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803ffd11_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803ffd11_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803ffd11_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803ffd11_5:;
/* 1803ffd14: subss xmm5, xmm0 */
L_1803ffd14_0:;
L_1803ffd14_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffd14_2:;
/* 1803ffd18: movss dword ptr [rbp + 0x404], xmm5 */
L_1803ffd18_0:;
L_1803ffd18_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803ffd18_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803ffd18_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffd18_4:;
/* 1803ffd20: addss xmm1, xmm0 */
L_1803ffd20_0:;
L_1803ffd20_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ffd20_2:;
/* 1803ffd24: movss dword ptr [rbp + 4], xmm1 */
L_1803ffd24_0:;
L_1803ffd24_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffd24_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ffd24_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ffd24_4:;
/* 1803ffd29: movaps xmm0, xmm8 */
L_1803ffd29_0:;
L_1803ffd29_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ffd29_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ffd29_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ffd29_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ffd29_5:;
/* 1803ffd2d: subss xmm8, xmm2 */
L_1803ffd2d_0:;
L_1803ffd2d_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ffd2d_2:;
/* 1803ffd32: movss dword ptr [rbp + 0x600], xmm8 */
L_1803ffd32_0:;
L_1803ffd32_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x600))));
L_1803ffd32_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ffd32_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffd32_4:;
/* 1803ffd3b: addss xmm0, xmm2 */
L_1803ffd3b_0:;
L_1803ffd3b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ffd3b_2:;
/* 1803ffd3f: movss dword ptr [rbp + 0x200], xmm0 */
L_1803ffd3f_0:;
L_1803ffd3f_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803ffd3f_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ffd3f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffd3f_4:;
/* 1803ffd47: movaps xmm0, xmm6 */
L_1803ffd47_0:;
L_1803ffd47_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803ffd47_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803ffd47_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803ffd47_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803ffd47_5:;
/* 1803ffd4a: addss xmm6, xmm4 */
L_1803ffd4a_0:;
L_1803ffd4a_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ffd4a_2:;
/* 1803ffd4e: movss dword ptr [rbp + 0x604], xmm6 */
L_1803ffd4e_0:;
L_1803ffd4e_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x604))));
L_1803ffd4e_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803ffd4e_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffd4e_4:;
/* 1803ffd56: subss xmm0, xmm4 */
L_1803ffd56_0:;
L_1803ffd56_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ffd56_2:;
/* 1803ffd5a: movss dword ptr [rbp + 0x204], xmm0 */
L_1803ffd5a_0:;
L_1803ffd5a_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803ffd5a_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ffd5a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffd5a_4:;
/* 1803ffd62: jb 0x1803ffbf7 */
L_1803ffd62_0:;
L_1803ffd62_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ffbf7);}
L_1803ffd62_2:;
return UINT64_C(0x1803ffd68);
}
uint64_t b_1803ffcf1(CPU*s){
/* 1803ffcf1: cmp r11d, 0x3f */
L_1803ffcf1_0:;
L_1803ffcf1_1:;
wr(s->u,26,4,rd(s->r,152,4));
L_1803ffcf1_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0x3f))));
L_1803ffcf1_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0x3f)),4,1));
L_1803ffcf1_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0x3f))));
L_1803ffcf1_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffcf1_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803ffcf1_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803ffcf1_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ffcf1_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ffcf1_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ffcf1_11:;
/* 1803ffcf5: addss xmm5, xmm1 */
L_1803ffcf5_0:;
L_1803ffcf5_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ffcf5_2:;
/* 1803ffcf9: movaps xmm1, xmm7 */
L_1803ffcf9_0:;
L_1803ffcf9_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803ffcf9_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803ffcf9_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803ffcf9_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803ffcf9_5:;
/* 1803ffcfc: subss xmm7, xmm3 */
L_1803ffcfc_0:;
L_1803ffcfc_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ffcfc_2:;
/* 1803ffd00: movss dword ptr [rbp + 0x400], xmm7 */
L_1803ffd00_0:;
L_1803ffd00_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803ffd00_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803ffd00_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffd00_4:;
/* 1803ffd08: addss xmm1, xmm3 */
L_1803ffd08_0:;
L_1803ffd08_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ffd08_2:;
/* 1803ffd0c: movss dword ptr [rbp], xmm1 */
L_1803ffd0c_0:;
L_1803ffd0c_1:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ffd0c_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803ffd0c_3:;
/* 1803ffd11: movaps xmm1, xmm5 */
L_1803ffd11_0:;
L_1803ffd11_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803ffd11_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803ffd11_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803ffd11_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803ffd11_5:;
/* 1803ffd14: subss xmm5, xmm0 */
L_1803ffd14_0:;
L_1803ffd14_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffd14_2:;
/* 1803ffd18: movss dword ptr [rbp + 0x404], xmm5 */
L_1803ffd18_0:;
L_1803ffd18_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803ffd18_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803ffd18_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffd18_4:;
/* 1803ffd20: addss xmm1, xmm0 */
L_1803ffd20_0:;
L_1803ffd20_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ffd20_2:;
/* 1803ffd24: movss dword ptr [rbp + 4], xmm1 */
L_1803ffd24_0:;
L_1803ffd24_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffd24_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ffd24_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ffd24_4:;
/* 1803ffd29: movaps xmm0, xmm8 */
L_1803ffd29_0:;
L_1803ffd29_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ffd29_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ffd29_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ffd29_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ffd29_5:;
/* 1803ffd2d: subss xmm8, xmm2 */
L_1803ffd2d_0:;
L_1803ffd2d_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ffd2d_2:;
/* 1803ffd32: movss dword ptr [rbp + 0x600], xmm8 */
L_1803ffd32_0:;
L_1803ffd32_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x600))));
L_1803ffd32_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ffd32_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffd32_4:;
/* 1803ffd3b: addss xmm0, xmm2 */
L_1803ffd3b_0:;
L_1803ffd3b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ffd3b_2:;
/* 1803ffd3f: movss dword ptr [rbp + 0x200], xmm0 */
L_1803ffd3f_0:;
L_1803ffd3f_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803ffd3f_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ffd3f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffd3f_4:;
/* 1803ffd47: movaps xmm0, xmm6 */
L_1803ffd47_0:;
L_1803ffd47_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803ffd47_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803ffd47_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803ffd47_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803ffd47_5:;
/* 1803ffd4a: addss xmm6, xmm4 */
L_1803ffd4a_0:;
L_1803ffd4a_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ffd4a_2:;
/* 1803ffd4e: movss dword ptr [rbp + 0x604], xmm6 */
L_1803ffd4e_0:;
L_1803ffd4e_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x604))));
L_1803ffd4e_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803ffd4e_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffd4e_4:;
/* 1803ffd56: subss xmm0, xmm4 */
L_1803ffd56_0:;
L_1803ffd56_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ffd56_2:;
/* 1803ffd5a: movss dword ptr [rbp + 0x204], xmm0 */
L_1803ffd5a_0:;
L_1803ffd5a_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803ffd5a_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ffd5a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffd5a_4:;
/* 1803ffd62: jb 0x1803ffbf7 */
L_1803ffd62_0:;
L_1803ffd62_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ffbf7);}
L_1803ffd62_2:;
return UINT64_C(0x1803ffd68);
}
uint64_t b_1803ffd24(CPU*s){
/* 1803ffd24: movss dword ptr [rbp + 4], xmm1 */
L_1803ffd24_0:;
L_1803ffd24_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffd24_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ffd24_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ffd24_4:;
/* 1803ffd29: movaps xmm0, xmm8 */
L_1803ffd29_0:;
L_1803ffd29_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ffd29_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ffd29_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ffd29_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ffd29_5:;
/* 1803ffd2d: subss xmm8, xmm2 */
L_1803ffd2d_0:;
L_1803ffd2d_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ffd2d_2:;
/* 1803ffd32: movss dword ptr [rbp + 0x600], xmm8 */
L_1803ffd32_0:;
L_1803ffd32_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x600))));
L_1803ffd32_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ffd32_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffd32_4:;
/* 1803ffd3b: addss xmm0, xmm2 */
L_1803ffd3b_0:;
L_1803ffd3b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ffd3b_2:;
/* 1803ffd3f: movss dword ptr [rbp + 0x200], xmm0 */
L_1803ffd3f_0:;
L_1803ffd3f_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803ffd3f_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ffd3f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffd3f_4:;
/* 1803ffd47: movaps xmm0, xmm6 */
L_1803ffd47_0:;
L_1803ffd47_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803ffd47_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803ffd47_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803ffd47_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803ffd47_5:;
/* 1803ffd4a: addss xmm6, xmm4 */
L_1803ffd4a_0:;
L_1803ffd4a_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ffd4a_2:;
/* 1803ffd4e: movss dword ptr [rbp + 0x604], xmm6 */
L_1803ffd4e_0:;
L_1803ffd4e_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x604))));
L_1803ffd4e_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803ffd4e_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffd4e_4:;
/* 1803ffd56: subss xmm0, xmm4 */
L_1803ffd56_0:;
L_1803ffd56_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803ffd56_2:;
/* 1803ffd5a: movss dword ptr [rbp + 0x204], xmm0 */
L_1803ffd5a_0:;
L_1803ffd5a_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803ffd5a_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ffd5a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffd5a_4:;
/* 1803ffd62: jb 0x1803ffbf7 */
L_1803ffd62_0:;
L_1803ffd62_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ffbf7);}
L_1803ffd62_2:;
return UINT64_C(0x1803ffd68);
}
uint64_t b_1803ffd68(CPU*s){
/* 1803ffd68: add rbp, 0x608 */
L_1803ffd68_0:;
L_1803ffd68_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x608)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803ffd68_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x608)),8,0));
L_1803ffd68_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x608))));
L_1803ffd68_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ffd68_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803ffd68_6:;
wr(s->u,0,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803ffd68_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ffd68_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ffd68_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ffd68_10:;
/* 1803ffd6f: add eax, 1 */
L_1803ffd6f_0:;
L_1803ffd6f_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ffd6f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,0));
L_1803ffd6f_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x1))));
L_1803ffd6f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ffd6f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffd6f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ffd6f_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ffd6f_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803ffd6f_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ffd6f_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ffd6f_11:;
/* 1803ffd72: cmp eax, r10d */
L_1803ffd72_0:;
L_1803ffd72_1:;
wr(s->u,10,4,rd(s->r,144,4));
L_1803ffd72_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,10,4)));
L_1803ffd72_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,10,4),4,1));
L_1803ffd72_4:;
wr(s->u,14,4,(rd(s->r,0,4)-rd(s->u,10,4)));
L_1803ffd72_5:;
wr(s->r,519,1,(sx(rd(s->u,14,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffd72_6:;
wr(s->r,518,1,(rd(s->u,14,4)==((U)UINT64_C(0x0))));
L_1803ffd72_7:;
wr(s->u,0,4,(rd(s->u,14,4)&((U)UINT64_C(0xff))));
L_1803ffd72_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803ffd72_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ffd72_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ffd72_11:;
/* 1803ffd75: jb 0x1803ffb0f */
L_1803ffd75_0:;
L_1803ffd75_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ffb0f);}
L_1803ffd75_2:;
return UINT64_C(0x1803ffd7b);
}
uint64_t b_1803ffd7b(CPU*s){
/* 1803ffd7b: movaps xmm6, xmmword ptr [rsp + 0x60] */
L_1803ffd7b_0:;
L_1803ffd7b_1:;
wr(s->u,5,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803ffd7b_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803ffd7b_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803ffd7b_4:;
wr(s->r,4992,4,rd(s->u,89,4));
L_1803ffd7b_5:;
wr(s->r,4996,4,rd(s->u,93,4));
L_1803ffd7b_6:;
wr(s->r,5000,4,rd(s->u,97,4));
L_1803ffd7b_7:;
wr(s->r,5004,4,rd(s->u,101,4));
L_1803ffd7b_8:;
/* 1803ffd80: movaps xmm7, xmmword ptr [rsp + 0x50] */
L_1803ffd80_0:;
L_1803ffd80_1:;
wr(s->u,5,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ffd80_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803ffd80_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803ffd80_4:;
wr(s->r,5056,4,rd(s->u,89,4));
L_1803ffd80_5:;
wr(s->r,5060,4,rd(s->u,93,4));
L_1803ffd80_6:;
wr(s->r,5064,4,rd(s->u,97,4));
L_1803ffd80_7:;
wr(s->r,5068,4,rd(s->u,101,4));
L_1803ffd80_8:;
/* 1803ffd85: movaps xmm8, xmmword ptr [rsp + 0x40] */
L_1803ffd85_0:;
L_1803ffd85_1:;
wr(s->u,5,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ffd85_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803ffd85_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803ffd85_4:;
wr(s->r,5120,4,rd(s->u,89,4));
L_1803ffd85_5:;
wr(s->r,5124,4,rd(s->u,93,4));
L_1803ffd85_6:;
wr(s->r,5128,4,rd(s->u,97,4));
L_1803ffd85_7:;
wr(s->r,5132,4,rd(s->u,101,4));
L_1803ffd85_8:;
/* 1803ffd8b: movaps xmm9, xmmword ptr [rsp + 0x30] */
L_1803ffd8b_0:;
L_1803ffd8b_1:;
wr(s->u,5,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ffd8b_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803ffd8b_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803ffd8b_4:;
wr(s->r,5184,4,rd(s->u,89,4));
L_1803ffd8b_5:;
wr(s->r,5188,4,rd(s->u,93,4));
L_1803ffd8b_6:;
wr(s->r,5192,4,rd(s->u,97,4));
L_1803ffd8b_7:;
wr(s->r,5196,4,rd(s->u,101,4));
L_1803ffd8b_8:;
/* 1803ffd91: mov r14, qword ptr [rsp + 0x20] */
L_1803ffd91_0:;
L_1803ffd91_1:;
wr(s->u,5,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ffd91_2:;
wr(s->u,29,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803ffd91_3:;
wr(s->r,176,8,rd(s->u,29,8));
L_1803ffd91_4:;
/* 1803ffd96: mov r10d, edx */
L_1803ffd96_0:;
L_1803ffd96_1:;
wr(s->r,144,4,rd(s->r,16,4));
L_1803ffd96_2:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ffd96_3:;
/* 1803ffd99: sar r10d, 0xa */
L_1803ffd99_0:;
L_1803ffd99_1:;
wr(s->u,77,4,(((U)UINT64_C(0xa))&((U)UINT64_C(0x1f))));
L_1803ffd99_2:;
wr(s->u,81,4,rd(s->r,144,4));
L_1803ffd99_3:;
wr(s->r,144,4,((rd(s->u,77,4)>=32)?(sx(rd(s->r,144,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,144,4),4)>>rd(s->u,77,4))));
L_1803ffd99_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ffd99_5:;
wr(s->u,62,1,(rd(s->u,77,4)==((U)UINT64_C(0x0))));
L_1803ffd99_6:;
wr(s->u,63,4,(rd(s->u,77,4)-((U)UINT64_C(0x1))));
L_1803ffd99_7:;
wr(s->u,67,4,((rd(s->u,63,4)>=32)?(sx(rd(s->u,81,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,81,4),4)>>rd(s->u,63,4))));
L_1803ffd99_8:;
wr(s->u,71,4,(rd(s->u,67,4)&((U)UINT64_C(0x1))));
L_1803ffd99_9:;
wr(s->u,75,1,(rd(s->u,71,4)!=((U)UINT64_C(0x0))));
L_1803ffd99_10:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803ffd99_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ffd99_12:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803ffd99_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ffd99_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,75,1)));
L_1803ffd99_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ffd99_16:;
wr(s->u,76,1,(rd(s->u,77,4)==((U)UINT64_C(0x1))));
L_1803ffd99_17:;
wr(s->u,0,1,rd(s->u,76,1));
L_1803ffd99_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ffd99_19:;
wr(s->u,2,1,(!rd(s->u,76,1)));
L_1803ffd99_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ffd99_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ffd99_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ffd99_23:;
wr(s->u,43,1,(rd(s->u,77,4)!=((U)UINT64_C(0x0))));
L_1803ffd99_24:;
wr(s->u,44,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffd99_25:;
wr(s->u,45,1,(!rd(s->u,43,1)));
L_1803ffd99_26:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,519,1)));
L_1803ffd99_27:;
wr(s->u,47,1,(rd(s->u,43,1)&rd(s->u,44,1)));
L_1803ffd99_28:;
wr(s->r,519,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803ffd99_29:;
wr(s->u,48,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803ffd99_30:;
wr(s->u,49,1,(!rd(s->u,43,1)));
L_1803ffd99_31:;
wr(s->u,50,1,(rd(s->u,49,1)&rd(s->r,518,1)));
L_1803ffd99_32:;
wr(s->u,51,1,(rd(s->u,43,1)&rd(s->u,48,1)));
L_1803ffd99_33:;
wr(s->r,518,1,(rd(s->u,50,1)|rd(s->u,51,1)));
L_1803ffd99_34:;
wr(s->u,52,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803ffd99_35:;
wr(s->u,56,1,pop(rd(s->u,52,4),4));
L_1803ffd99_36:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803ffd99_37:;
wr(s->u,58,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803ffd99_38:;
wr(s->u,59,1,(!rd(s->u,43,1)));
L_1803ffd99_39:;
wr(s->u,60,1,(rd(s->u,59,1)&rd(s->r,514,1)));
L_1803ffd99_40:;
wr(s->u,61,1,(rd(s->u,43,1)&rd(s->u,58,1)));
L_1803ffd99_41:;
wr(s->r,514,1,(rd(s->u,60,1)|rd(s->u,61,1)));
L_1803ffd99_42:;
/* 1803ffd9d: test r10d, r10d */
L_1803ffd9d_0:;
L_1803ffd9d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ffd9d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ffd9d_3:;
wr(s->u,85,4,(rd(s->r,144,4)&rd(s->r,144,4)));
L_1803ffd9d_4:;
wr(s->r,519,1,(sx(rd(s->u,85,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffd9d_5:;
wr(s->r,518,1,(rd(s->u,85,4)==((U)UINT64_C(0x0))));
L_1803ffd9d_6:;
wr(s->u,37,4,(rd(s->u,85,4)&((U)UINT64_C(0xff))));
L_1803ffd9d_7:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803ffd9d_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803ffd9d_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803ffd9d_10:;
/* 1803ffda0: je 0x180400312 */
L_1803ffda0_0:;
L_1803ffda0_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180400312);}
L_1803ffda0_2:;
return UINT64_C(0x1803ffda6);
}
uint64_t b_1803ffd96(CPU*s){
/* 1803ffd96: mov r10d, edx */
L_1803ffd96_0:;
L_1803ffd96_1:;
wr(s->r,144,4,rd(s->r,16,4));
L_1803ffd96_2:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ffd96_3:;
/* 1803ffd99: sar r10d, 0xa */
L_1803ffd99_0:;
L_1803ffd99_1:;
wr(s->u,45,4,(((U)UINT64_C(0xa))&((U)UINT64_C(0x1f))));
L_1803ffd99_2:;
wr(s->u,49,4,rd(s->r,144,4));
L_1803ffd99_3:;
wr(s->r,144,4,((rd(s->u,45,4)>=32)?(sx(rd(s->r,144,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,144,4),4)>>rd(s->u,45,4))));
L_1803ffd99_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ffd99_5:;
wr(s->u,30,1,(rd(s->u,45,4)==((U)UINT64_C(0x0))));
L_1803ffd99_6:;
wr(s->u,31,4,(rd(s->u,45,4)-((U)UINT64_C(0x1))));
L_1803ffd99_7:;
wr(s->u,35,4,((rd(s->u,31,4)>=32)?(sx(rd(s->u,49,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,49,4),4)>>rd(s->u,31,4))));
L_1803ffd99_8:;
wr(s->u,39,4,(rd(s->u,35,4)&((U)UINT64_C(0x1))));
L_1803ffd99_9:;
wr(s->u,43,1,(rd(s->u,39,4)!=((U)UINT64_C(0x0))));
L_1803ffd99_10:;
wr(s->u,0,1,rd(s->u,30,1));
L_1803ffd99_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ffd99_12:;
wr(s->u,2,1,(!rd(s->u,30,1)));
L_1803ffd99_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ffd99_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,43,1)));
L_1803ffd99_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ffd99_16:;
wr(s->u,44,1,(rd(s->u,45,4)==((U)UINT64_C(0x1))));
L_1803ffd99_17:;
wr(s->u,0,1,rd(s->u,44,1));
L_1803ffd99_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ffd99_19:;
wr(s->u,2,1,(!rd(s->u,44,1)));
L_1803ffd99_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ffd99_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ffd99_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ffd99_23:;
wr(s->u,11,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803ffd99_24:;
wr(s->u,12,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffd99_25:;
wr(s->u,13,1,(!rd(s->u,11,1)));
L_1803ffd99_26:;
wr(s->u,14,1,(rd(s->u,13,1)&rd(s->r,519,1)));
L_1803ffd99_27:;
wr(s->u,15,1,(rd(s->u,11,1)&rd(s->u,12,1)));
L_1803ffd99_28:;
wr(s->r,519,1,(rd(s->u,14,1)|rd(s->u,15,1)));
L_1803ffd99_29:;
wr(s->u,16,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803ffd99_30:;
wr(s->u,17,1,(!rd(s->u,11,1)));
L_1803ffd99_31:;
wr(s->u,18,1,(rd(s->u,17,1)&rd(s->r,518,1)));
L_1803ffd99_32:;
wr(s->u,19,1,(rd(s->u,11,1)&rd(s->u,16,1)));
L_1803ffd99_33:;
wr(s->r,518,1,(rd(s->u,18,1)|rd(s->u,19,1)));
L_1803ffd99_34:;
wr(s->u,20,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803ffd99_35:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ffd99_36:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ffd99_37:;
wr(s->u,26,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ffd99_38:;
wr(s->u,27,1,(!rd(s->u,11,1)));
L_1803ffd99_39:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,514,1)));
L_1803ffd99_40:;
wr(s->u,29,1,(rd(s->u,11,1)&rd(s->u,26,1)));
L_1803ffd99_41:;
wr(s->r,514,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803ffd99_42:;
/* 1803ffd9d: test r10d, r10d */
L_1803ffd9d_0:;
L_1803ffd9d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ffd9d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ffd9d_3:;
wr(s->u,53,4,(rd(s->r,144,4)&rd(s->r,144,4)));
L_1803ffd9d_4:;
wr(s->r,519,1,(sx(rd(s->u,53,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffd9d_5:;
wr(s->r,518,1,(rd(s->u,53,4)==((U)UINT64_C(0x0))));
L_1803ffd9d_6:;
wr(s->u,5,4,(rd(s->u,53,4)&((U)UINT64_C(0xff))));
L_1803ffd9d_7:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803ffd9d_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ffd9d_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ffd9d_10:;
/* 1803ffda0: je 0x180400312 */
L_1803ffda0_0:;
L_1803ffda0_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180400312);}
L_1803ffda0_2:;
return UINT64_C(0x1803ffda6);
}
uint64_t b_1803ffda6(CPU*s){
/* 1803ffda6: sar r9d, 2 */
L_1803ffda6_0:;
L_1803ffda6_1:;
wr(s->u,47,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803ffda6_2:;
wr(s->u,51,4,rd(s->r,136,4));
L_1803ffda6_3:;
wr(s->r,136,4,((rd(s->u,47,4)>=32)?(sx(rd(s->r,136,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,136,4),4)>>rd(s->u,47,4))));
L_1803ffda6_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ffda6_5:;
wr(s->u,32,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803ffda6_6:;
wr(s->u,33,4,(rd(s->u,47,4)-((U)UINT64_C(0x1))));
L_1803ffda6_7:;
wr(s->u,37,4,((rd(s->u,33,4)>=32)?(sx(rd(s->u,51,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,51,4),4)>>rd(s->u,33,4))));
L_1803ffda6_8:;
wr(s->u,41,4,(rd(s->u,37,4)&((U)UINT64_C(0x1))));
L_1803ffda6_9:;
wr(s->u,45,1,(rd(s->u,41,4)!=((U)UINT64_C(0x0))));
L_1803ffda6_10:;
wr(s->u,0,1,rd(s->u,32,1));
L_1803ffda6_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ffda6_12:;
wr(s->u,2,1,(!rd(s->u,32,1)));
L_1803ffda6_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ffda6_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,45,1)));
L_1803ffda6_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ffda6_16:;
wr(s->u,46,1,(rd(s->u,47,4)==((U)UINT64_C(0x1))));
L_1803ffda6_17:;
wr(s->u,0,1,rd(s->u,46,1));
L_1803ffda6_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ffda6_19:;
wr(s->u,2,1,(!rd(s->u,46,1)));
L_1803ffda6_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ffda6_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ffda6_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ffda6_23:;
wr(s->u,13,1,(rd(s->u,47,4)!=((U)UINT64_C(0x0))));
L_1803ffda6_24:;
wr(s->u,14,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffda6_25:;
wr(s->u,15,1,(!rd(s->u,13,1)));
L_1803ffda6_26:;
wr(s->u,16,1,(rd(s->u,15,1)&rd(s->r,519,1)));
L_1803ffda6_27:;
wr(s->u,17,1,(rd(s->u,13,1)&rd(s->u,14,1)));
L_1803ffda6_28:;
wr(s->r,519,1,(rd(s->u,16,1)|rd(s->u,17,1)));
L_1803ffda6_29:;
wr(s->u,18,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803ffda6_30:;
wr(s->u,19,1,(!rd(s->u,13,1)));
L_1803ffda6_31:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,518,1)));
L_1803ffda6_32:;
wr(s->u,21,1,(rd(s->u,13,1)&rd(s->u,18,1)));
L_1803ffda6_33:;
wr(s->r,518,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803ffda6_34:;
wr(s->u,22,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803ffda6_35:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803ffda6_36:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803ffda6_37:;
wr(s->u,28,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803ffda6_38:;
wr(s->u,29,1,(!rd(s->u,13,1)));
L_1803ffda6_39:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,514,1)));
L_1803ffda6_40:;
wr(s->u,31,1,(rd(s->u,13,1)&rd(s->u,28,1)));
L_1803ffda6_41:;
wr(s->r,514,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803ffda6_42:;
/* 1803ffdaa: movsxd r9, r9d */
L_1803ffdaa_0:;
L_1803ffdaa_1:;
wr(s->r,136,8,(U)sx(rd(s->r,136,4),4));
L_1803ffdaa_2:;
/* 1803ffdad: mov rbp, rcx */
L_1803ffdad_0:;
L_1803ffdad_1:;
wr(s->r,40,8,rd(s->r,8,8));
L_1803ffdad_2:;
/* 1803ffdb0: xor eax, eax */
L_1803ffdb0_0:;
L_1803ffdb0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ffdb0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ffdb0_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ffdb0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ffdb0_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffdb0_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ffdb0_7:;
wr(s->u,7,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ffdb0_8:;
wr(s->u,11,1,pop(rd(s->u,7,4),4));
L_1803ffdb0_9:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803ffdb0_10:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803ffdb0_11:;
/* 1803ffdb2: test r10d, r10d */
L_1803ffdb2_0:;
L_1803ffdb2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ffdb2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ffdb2_3:;
wr(s->u,55,4,(rd(s->r,144,4)&rd(s->r,144,4)));
L_1803ffdb2_4:;
wr(s->r,519,1,(sx(rd(s->u,55,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffdb2_5:;
wr(s->r,518,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803ffdb2_6:;
wr(s->u,7,4,(rd(s->u,55,4)&((U)UINT64_C(0xff))));
L_1803ffdb2_7:;
wr(s->u,11,1,pop(rd(s->u,7,4),4));
L_1803ffdb2_8:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803ffdb2_9:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803ffdb2_10:;
/* 1803ffdb5: jle 0x180400060 */
L_1803ffdb5_0:;
L_1803ffdb5_1:;
wr(s->u,5,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ffdb5_2:;
wr(s->u,6,1,((rd(s->r,518,1)!=0)||(rd(s->u,5,1)!=0)));
L_1803ffdb5_3:;
if(rd(s->u,6,1)){return UINT64_C(0x180400060);}
L_1803ffdb5_4:;
return UINT64_C(0x1803ffdbb);
}
uint64_t b_1803ffdbb(CPU*s){
/* 1803ffdbb: movaps xmmword ptr [rsp + 0x60], xmm6 */
L_1803ffdbb_0:;
L_1803ffdbb_1:;
wr(s->u,16,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803ffdbb_2:;
wr(s->u,36,16,rd(s->r,4992,16));
L_1803ffdbb_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803ffdbb_4:;
/* 1803ffdc0: movaps xmmword ptr [rsp + 0x50], xmm7 */
L_1803ffdc0_0:;
L_1803ffdc0_1:;
wr(s->u,16,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ffdc0_2:;
wr(s->u,36,16,rd(s->r,5056,16));
L_1803ffdc0_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803ffdc0_4:;
/* 1803ffdc5: movaps xmmword ptr [rsp + 0x40], xmm8 */
L_1803ffdc5_0:;
L_1803ffdc5_1:;
wr(s->u,16,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ffdc5_2:;
wr(s->u,36,16,rd(s->r,5120,16));
L_1803ffdc5_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803ffdc5_4:;
/* 1803ffdcb: movaps xmmword ptr [rsp + 0x30], xmm9 */
L_1803ffdcb_0:;
L_1803ffdcb_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ffdcb_2:;
wr(s->u,36,16,rd(s->r,5184,16));
L_1803ffdcb_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803ffdcb_4:;
/* 1803ffdd1: mov qword ptr [rsp + 0x20], r14 */
L_1803ffdd1_0:;
L_1803ffdd1_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ffdd1_2:;
wr(s->u,28,8,rd(s->r,176,8));
L_1803ffdd1_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ffdd1_4:;
/* 1803ffdd6: movss xmm5, dword ptr [rbp] */
L_1803ffdd6_0:;
L_1803ffdd6_1:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803ffdd6_2:;
wr(s->r,4928,4,rd(s->u,24,4));
L_1803ffdd6_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ffdd6_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ffdd6_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ffdd6_6:;
/* 1803ffddb: movss xmm8, dword ptr [rbp + 0x800] */
L_1803ffddb_0:;
L_1803ffddb_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_1803ffddb_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffddb_3:;
wr(s->r,5120,4,rd(s->u,24,4));
L_1803ffddb_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ffddb_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ffddb_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ffddb_7:;
/* 1803ffde4: movaps xmm6, xmm8 */
L_1803ffde4_0:;
L_1803ffde4_1:;
wr(s->r,4992,4,rd(s->r,5120,4));
L_1803ffde4_2:;
wr(s->r,4996,4,rd(s->r,5124,4));
L_1803ffde4_3:;
wr(s->r,5000,4,rd(s->r,5128,4));
L_1803ffde4_4:;
wr(s->r,5004,4,rd(s->r,5132,4));
L_1803ffde4_5:;
/* 1803ffde8: movss xmm7, dword ptr [rbp + 4] */
L_1803ffde8_0:;
L_1803ffde8_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffde8_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffde8_3:;
wr(s->r,5056,4,rd(s->u,24,4));
L_1803ffde8_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ffde8_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ffde8_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ffde8_7:;
/* 1803ffded: movaps xmm4, xmm7 */
L_1803ffded_0:;
L_1803ffded_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803ffded_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803ffded_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803ffded_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803ffded_5:;
/* 1803ffdf0: movss xmm9, dword ptr [rbp + 0x804] */
L_1803ffdf0_0:;
L_1803ffdf0_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_1803ffdf0_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffdf0_3:;
wr(s->r,5184,4,rd(s->u,24,4));
L_1803ffdf0_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ffdf0_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ffdf0_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ffdf0_7:;
/* 1803ffdf9: movss xmm3, dword ptr [rbp + 0x1000] */
L_1803ffdf9_0:;
L_1803ffdf9_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1000))));
L_1803ffdf9_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffdf9_3:;
wr(s->r,4800,4,rd(s->u,24,4));
L_1803ffdf9_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ffdf9_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ffdf9_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ffdf9_7:;
/* 1803ffe01: movaps xmm0, xmm3 */
L_1803ffe01_0:;
L_1803ffe01_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ffe01_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ffe01_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ffe01_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ffe01_5:;
/* 1803ffe04: movss xmm2, dword ptr [rbp + 0x1004] */
L_1803ffe04_0:;
L_1803ffe04_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1004))));
L_1803ffe04_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffe04_3:;
wr(s->r,4736,4,rd(s->u,24,4));
L_1803ffe04_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ffe04_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ffe04_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ffe04_7:;
/* 1803ffe0c: movaps xmm1, xmm2 */
L_1803ffe0c_0:;
L_1803ffe0c_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803ffe0c_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803ffe0c_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803ffe0c_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803ffe0c_5:;
/* 1803ffe0f: addss xmm6, xmm5 */
L_1803ffe0f_0:;
L_1803ffe0f_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ffe0f_2:;
/* 1803ffe13: addss xmm4, xmm9 */
L_1803ffe13_0:;
L_1803ffe13_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ffe13_2:;
/* 1803ffe18: subss xmm5, xmm8 */
L_1803ffe18_0:;
L_1803ffe18_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ffe18_2:;
/* 1803ffe1d: movss xmm8, dword ptr [rbp + 0x1800] */
L_1803ffe1d_0:;
L_1803ffe1d_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1800))));
L_1803ffe1d_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffe1d_3:;
wr(s->r,5120,4,rd(s->u,24,4));
L_1803ffe1d_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ffe1d_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ffe1d_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ffe1d_7:;
/* 1803ffe26: subss xmm7, xmm9 */
L_1803ffe26_0:;
L_1803ffe26_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ffe26_2:;
/* 1803ffe2b: movss xmm9, dword ptr [rbp + 0x1804] */
L_1803ffe2b_0:;
L_1803ffe2b_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1804))));
L_1803ffe2b_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffe2b_3:;
wr(s->r,5184,4,rd(s->u,24,4));
L_1803ffe2b_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ffe2b_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ffe2b_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ffe2b_7:;
/* 1803ffe34: addss xmm0, xmm8 */
L_1803ffe34_0:;
L_1803ffe34_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ffe34_2:;
/* 1803ffe39: addss xmm1, xmm9 */
L_1803ffe39_0:;
L_1803ffe39_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ffe39_2:;
/* 1803ffe3e: subss xmm3, xmm8 */
L_1803ffe3e_0:;
L_1803ffe3e_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ffe3e_2:;
/* 1803ffe43: movaps xmm8, xmm6 */
L_1803ffe43_0:;
L_1803ffe43_1:;
wr(s->r,5120,4,rd(s->r,4992,4));
L_1803ffe43_2:;
wr(s->r,5124,4,rd(s->r,4996,4));
L_1803ffe43_3:;
wr(s->r,5128,4,rd(s->r,5000,4));
L_1803ffe43_4:;
wr(s->r,5132,4,rd(s->r,5004,4));
L_1803ffe43_5:;
/* 1803ffe47: subss xmm2, xmm9 */
L_1803ffe47_0:;
L_1803ffe47_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ffe47_2:;
/* 1803ffe4c: subss xmm6, xmm0 */
L_1803ffe4c_0:;
L_1803ffe4c_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffe4c_2:;
/* 1803ffe50: movss dword ptr [rbp + 0x1000], xmm6 */
L_1803ffe50_0:;
L_1803ffe50_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1000))));
L_1803ffe50_2:;
wr(s->u,24,4,rd(s->r,4992,4));
L_1803ffe50_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803ffe50_4:;
/* 1803ffe58: addss xmm8, xmm0 */
L_1803ffe58_0:;
L_1803ffe58_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ffe58_2:;
/* 1803ffe5d: movss dword ptr [rbp], xmm8 */
L_1803ffe5d_0:;
L_1803ffe5d_1:;
wr(s->u,24,4,rd(s->r,5120,4));
L_1803ffe5d_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,24,4));
L_1803ffe5d_3:;
/* 1803ffe63: movaps xmm8, xmm4 */
L_1803ffe63_0:;
L_1803ffe63_1:;
wr(s->r,5120,4,rd(s->r,4864,4));
L_1803ffe63_2:;
wr(s->r,5124,4,rd(s->r,4868,4));
L_1803ffe63_3:;
wr(s->r,5128,4,rd(s->r,4872,4));
L_1803ffe63_4:;
wr(s->r,5132,4,rd(s->r,4876,4));
L_1803ffe63_5:;
/* 1803ffe67: movaps xmm0, xmm5 */
L_1803ffe67_0:;
L_1803ffe67_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ffe67_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ffe67_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ffe67_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ffe67_5:;
return UINT64_C(0x1803ffe6a);
}
uint64_t b_1803ffdd6(CPU*s){
/* 1803ffdd6: movss xmm5, dword ptr [rbp] */
L_1803ffdd6_0:;
L_1803ffdd6_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803ffdd6_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803ffdd6_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ffdd6_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ffdd6_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ffdd6_6:;
/* 1803ffddb: movss xmm8, dword ptr [rbp + 0x800] */
L_1803ffddb_0:;
L_1803ffddb_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_1803ffddb_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffddb_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ffddb_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ffddb_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ffddb_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ffddb_7:;
/* 1803ffde4: movaps xmm6, xmm8 */
L_1803ffde4_0:;
L_1803ffde4_1:;
wr(s->r,4992,4,rd(s->r,5120,4));
L_1803ffde4_2:;
wr(s->r,4996,4,rd(s->r,5124,4));
L_1803ffde4_3:;
wr(s->r,5000,4,rd(s->r,5128,4));
L_1803ffde4_4:;
wr(s->r,5004,4,rd(s->r,5132,4));
L_1803ffde4_5:;
/* 1803ffde8: movss xmm7, dword ptr [rbp + 4] */
L_1803ffde8_0:;
L_1803ffde8_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffde8_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffde8_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803ffde8_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ffde8_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ffde8_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ffde8_7:;
/* 1803ffded: movaps xmm4, xmm7 */
L_1803ffded_0:;
L_1803ffded_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803ffded_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803ffded_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803ffded_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803ffded_5:;
/* 1803ffdf0: movss xmm9, dword ptr [rbp + 0x804] */
L_1803ffdf0_0:;
L_1803ffdf0_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_1803ffdf0_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffdf0_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803ffdf0_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ffdf0_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ffdf0_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ffdf0_7:;
/* 1803ffdf9: movss xmm3, dword ptr [rbp + 0x1000] */
L_1803ffdf9_0:;
L_1803ffdf9_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1000))));
L_1803ffdf9_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffdf9_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803ffdf9_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ffdf9_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ffdf9_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ffdf9_7:;
/* 1803ffe01: movaps xmm0, xmm3 */
L_1803ffe01_0:;
L_1803ffe01_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ffe01_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ffe01_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ffe01_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ffe01_5:;
/* 1803ffe04: movss xmm2, dword ptr [rbp + 0x1004] */
L_1803ffe04_0:;
L_1803ffe04_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1004))));
L_1803ffe04_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffe04_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803ffe04_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ffe04_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ffe04_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ffe04_7:;
/* 1803ffe0c: movaps xmm1, xmm2 */
L_1803ffe0c_0:;
L_1803ffe0c_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803ffe0c_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803ffe0c_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803ffe0c_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803ffe0c_5:;
/* 1803ffe0f: addss xmm6, xmm5 */
L_1803ffe0f_0:;
L_1803ffe0f_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ffe0f_2:;
/* 1803ffe13: addss xmm4, xmm9 */
L_1803ffe13_0:;
L_1803ffe13_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ffe13_2:;
/* 1803ffe18: subss xmm5, xmm8 */
L_1803ffe18_0:;
L_1803ffe18_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ffe18_2:;
/* 1803ffe1d: movss xmm8, dword ptr [rbp + 0x1800] */
L_1803ffe1d_0:;
L_1803ffe1d_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1800))));
L_1803ffe1d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffe1d_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ffe1d_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ffe1d_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ffe1d_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ffe1d_7:;
/* 1803ffe26: subss xmm7, xmm9 */
L_1803ffe26_0:;
L_1803ffe26_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ffe26_2:;
/* 1803ffe2b: movss xmm9, dword ptr [rbp + 0x1804] */
L_1803ffe2b_0:;
L_1803ffe2b_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1804))));
L_1803ffe2b_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffe2b_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803ffe2b_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ffe2b_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ffe2b_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ffe2b_7:;
/* 1803ffe34: addss xmm0, xmm8 */
L_1803ffe34_0:;
L_1803ffe34_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ffe34_2:;
/* 1803ffe39: addss xmm1, xmm9 */
L_1803ffe39_0:;
L_1803ffe39_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ffe39_2:;
/* 1803ffe3e: subss xmm3, xmm8 */
L_1803ffe3e_0:;
L_1803ffe3e_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803ffe3e_2:;
/* 1803ffe43: movaps xmm8, xmm6 */
L_1803ffe43_0:;
L_1803ffe43_1:;
wr(s->r,5120,4,rd(s->r,4992,4));
L_1803ffe43_2:;
wr(s->r,5124,4,rd(s->r,4996,4));
L_1803ffe43_3:;
wr(s->r,5128,4,rd(s->r,5000,4));
L_1803ffe43_4:;
wr(s->r,5132,4,rd(s->r,5004,4));
L_1803ffe43_5:;
/* 1803ffe47: subss xmm2, xmm9 */
L_1803ffe47_0:;
L_1803ffe47_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ffe47_2:;
/* 1803ffe4c: subss xmm6, xmm0 */
L_1803ffe4c_0:;
L_1803ffe4c_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ffe4c_2:;
/* 1803ffe50: movss dword ptr [rbp + 0x1000], xmm6 */
L_1803ffe50_0:;
L_1803ffe50_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1000))));
L_1803ffe50_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803ffe50_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffe50_4:;
/* 1803ffe58: addss xmm8, xmm0 */
L_1803ffe58_0:;
L_1803ffe58_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ffe58_2:;
/* 1803ffe5d: movss dword ptr [rbp], xmm8 */
L_1803ffe5d_0:;
L_1803ffe5d_1:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ffe5d_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803ffe5d_3:;
/* 1803ffe63: movaps xmm8, xmm4 */
L_1803ffe63_0:;
L_1803ffe63_1:;
wr(s->r,5120,4,rd(s->r,4864,4));
L_1803ffe63_2:;
wr(s->r,5124,4,rd(s->r,4868,4));
L_1803ffe63_3:;
wr(s->r,5128,4,rd(s->r,4872,4));
L_1803ffe63_4:;
wr(s->r,5132,4,rd(s->r,4876,4));
L_1803ffe63_5:;
/* 1803ffe67: movaps xmm0, xmm5 */
L_1803ffe67_0:;
L_1803ffe67_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ffe67_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ffe67_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ffe67_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ffe67_5:;
/* 1803ffe6a: subss xmm4, xmm1 */
L_1803ffe6a_0:;
L_1803ffe6a_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ffe6a_2:;
/* 1803ffe6e: movss dword ptr [rbp + 0x1004], xmm4 */
L_1803ffe6e_0:;
L_1803ffe6e_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1004))));
L_1803ffe6e_2:;
wr(s->u,16,4,rd(s->r,4864,4));
L_1803ffe6e_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffe6e_4:;
/* 1803ffe76: addss xmm8, xmm1 */
L_1803ffe76_0:;
L_1803ffe76_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ffe76_2:;
/* 1803ffe7b: movss dword ptr [rbp + 4], xmm8 */
L_1803ffe7b_0:;
L_1803ffe7b_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffe7b_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ffe7b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ffe7b_4:;
/* 1803ffe81: addss xmm0, xmm2 */
L_1803ffe81_0:;
L_1803ffe81_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ffe81_2:;
return UINT64_C(0x1803ffe85);
}
uint64_t b_1803ffe6a(CPU*s){
/* 1803ffe6a: subss xmm4, xmm1 */
L_1803ffe6a_0:;
L_1803ffe6a_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ffe6a_2:;
/* 1803ffe6e: movss dword ptr [rbp + 0x1004], xmm4 */
L_1803ffe6e_0:;
L_1803ffe6e_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1004))));
L_1803ffe6e_2:;
wr(s->u,32,4,rd(s->r,4864,4));
L_1803ffe6e_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ffe6e_4:;
/* 1803ffe76: addss xmm8, xmm1 */
L_1803ffe76_0:;
L_1803ffe76_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ffe76_2:;
/* 1803ffe7b: movss dword ptr [rbp + 4], xmm8 */
L_1803ffe7b_0:;
L_1803ffe7b_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ffe7b_2:;
wr(s->u,32,4,rd(s->r,5120,4));
L_1803ffe7b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ffe7b_4:;
/* 1803ffe81: addss xmm0, xmm2 */
L_1803ffe81_0:;
L_1803ffe81_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ffe81_2:;
/* 1803ffe85: movss dword ptr [rbp + 0x800], xmm0 */
L_1803ffe85_0:;
L_1803ffe85_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_1803ffe85_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ffe85_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ffe85_4:;
/* 1803ffe8d: movaps xmm0, xmm7 */
L_1803ffe8d_0:;
L_1803ffe8d_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ffe8d_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ffe8d_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ffe8d_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ffe8d_5:;
/* 1803ffe90: subss xmm5, xmm2 */
L_1803ffe90_0:;
L_1803ffe90_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ffe90_2:;
/* 1803ffe94: movss dword ptr [rbp + 0x1800], xmm5 */
L_1803ffe94_0:;
L_1803ffe94_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1800))));
L_1803ffe94_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803ffe94_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ffe94_4:;
/* 1803ffe9c: subss xmm0, xmm3 */
L_1803ffe9c_0:;
L_1803ffe9c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ffe9c_2:;
/* 1803ffea0: movss dword ptr [rbp + 0x804], xmm0 */
L_1803ffea0_0:;
L_1803ffea0_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_1803ffea0_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ffea0_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ffea0_4:;
/* 1803ffea8: addss xmm7, xmm3 */
L_1803ffea8_0:;
L_1803ffea8_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ffea8_2:;
/* 1803ffeac: movss dword ptr [rbp + 0x1804], xmm7 */
L_1803ffeac_0:;
L_1803ffeac_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1804))));
L_1803ffeac_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803ffeac_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ffeac_4:;
/* 1803ffeb4: mov r15, r8 */
L_1803ffeb4_0:;
L_1803ffeb4_1:;
wr(s->r,184,8,rd(s->r,128,8));
L_1803ffeb4_2:;
/* 1803ffeb7: lea r14, [r8 + 8] */
L_1803ffeb7_0:;
L_1803ffeb7_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803ffeb7_2:;
wr(s->r,176,8,rd(s->u,0,8));
L_1803ffeb7_3:;
/* 1803ffebb: xor r11d, r11d */
L_1803ffebb_0:;
L_1803ffebb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ffebb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ffebb_3:;
wr(s->r,152,4,(rd(s->r,152,4)^rd(s->r,152,4)));
L_1803ffebb_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ffebb_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffebb_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803ffebb_7:;
wr(s->u,36,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803ffebb_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1803ffebb_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ffebb_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ffebb_11:;
/* 1803ffebe: lea r14, [r14 + r9*4] */
L_1803ffebe_0:;
L_1803ffebe_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803ffebe_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803ffebe_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803ffebe_4:;
/* 1803ffec2: lea r15, [r15 + r9*4] */
L_1803ffec2_0:;
L_1803ffec2_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803ffec2_2:;
wr(s->u,24,8,(rd(s->r,184,8)+rd(s->u,16,8)));
L_1803ffec2_3:;
wr(s->r,184,8,rd(s->u,24,8));
L_1803ffec2_4:;
/* 1803ffec6: movss xmm3, dword ptr [r15] */
L_1803ffec6_0:;
L_1803ffec6_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,184,8),4));
L_1803ffec6_2:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ffec6_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ffec6_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ffec6_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ffec6_6:;
/* 1803ffecb: movss xmm1, dword ptr [r15 + 4] */
L_1803ffecb_0:;
L_1803ffecb_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803ffecb_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffecb_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ffecb_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ffecb_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ffecb_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ffecb_7:;
/* 1803ffed1: add rbp, 8 */
L_1803ffed1_0:;
L_1803ffed1_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803ffed1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x8)),8,0));
L_1803ffed1_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803ffed1_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ffed1_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803ffed1_6:;
wr(s->u,36,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803ffed1_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ffed1_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ffed1_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ffed1_10:;
/* 1803ffed5: movss xmm2, dword ptr [rbp + 0x1000] */
L_1803ffed5_0:;
L_1803ffed5_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1000))));
L_1803ffed5_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffed5_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ffed5_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ffed5_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ffed5_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ffed5_7:;
/* 1803ffedd: movaps xmm4, xmm2 */
L_1803ffedd_0:;
L_1803ffedd_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803ffedd_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803ffedd_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803ffedd_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803ffedd_5:;
/* 1803ffee0: mulss xmm2, xmm1 */
L_1803ffee0_0:;
L_1803ffee0_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ffee0_2:;
/* 1803ffee4: mulss xmm4, xmm3 */
L_1803ffee4_0:;
L_1803ffee4_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffee4_2:;
/* 1803ffee8: movss xmm5, dword ptr [rbp + 0x1004] */
L_1803ffee8_0:;
L_1803ffee8_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1004))));
L_1803ffee8_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffee8_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ffee8_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ffee8_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ffee8_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ffee8_7:;
/* 1803ffef0: movaps xmm0, xmm5 */
L_1803ffef0_0:;
L_1803ffef0_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ffef0_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ffef0_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ffef0_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ffef0_5:;
/* 1803ffef3: mulss xmm5, xmm3 */
L_1803ffef3_0:;
L_1803ffef3_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffef3_2:;
/* 1803ffef7: mulss xmm0, xmm1 */
L_1803ffef7_0:;
L_1803ffef7_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ffef7_2:;
/* 1803ffefb: movss xmm1, dword ptr [rbp + 0x800] */
L_1803ffefb_0:;
L_1803ffefb_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_1803ffefb_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffefb_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ffefb_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ffefb_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ffefb_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ffefb_7:;
/* 1803fff03: movaps xmm6, xmm1 */
L_1803fff03_0:;
L_1803fff03_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fff03_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fff03_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fff03_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fff03_5:;
/* 1803fff06: movss xmm7, dword ptr [rbp + 0x804] */
L_1803fff06_0:;
L_1803fff06_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_1803fff06_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fff06_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fff06_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fff06_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fff06_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fff06_7:;
return UINT64_C(0x1803fff0e);
}
uint64_t b_1803ffe85(CPU*s){
/* 1803ffe85: movss dword ptr [rbp + 0x800], xmm0 */
L_1803ffe85_0:;
L_1803ffe85_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_1803ffe85_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ffe85_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ffe85_4:;
/* 1803ffe8d: movaps xmm0, xmm7 */
L_1803ffe8d_0:;
L_1803ffe8d_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803ffe8d_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803ffe8d_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803ffe8d_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803ffe8d_5:;
/* 1803ffe90: subss xmm5, xmm2 */
L_1803ffe90_0:;
L_1803ffe90_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ffe90_2:;
/* 1803ffe94: movss dword ptr [rbp + 0x1800], xmm5 */
L_1803ffe94_0:;
L_1803ffe94_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1800))));
L_1803ffe94_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803ffe94_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ffe94_4:;
/* 1803ffe9c: subss xmm0, xmm3 */
L_1803ffe9c_0:;
L_1803ffe9c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ffe9c_2:;
/* 1803ffea0: movss dword ptr [rbp + 0x804], xmm0 */
L_1803ffea0_0:;
L_1803ffea0_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_1803ffea0_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ffea0_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ffea0_4:;
/* 1803ffea8: addss xmm7, xmm3 */
L_1803ffea8_0:;
L_1803ffea8_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ffea8_2:;
/* 1803ffeac: movss dword ptr [rbp + 0x1804], xmm7 */
L_1803ffeac_0:;
L_1803ffeac_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1804))));
L_1803ffeac_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803ffeac_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803ffeac_4:;
/* 1803ffeb4: mov r15, r8 */
L_1803ffeb4_0:;
L_1803ffeb4_1:;
wr(s->r,184,8,rd(s->r,128,8));
L_1803ffeb4_2:;
/* 1803ffeb7: lea r14, [r8 + 8] */
L_1803ffeb7_0:;
L_1803ffeb7_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803ffeb7_2:;
wr(s->r,176,8,rd(s->u,0,8));
L_1803ffeb7_3:;
/* 1803ffebb: xor r11d, r11d */
L_1803ffebb_0:;
L_1803ffebb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ffebb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ffebb_3:;
wr(s->r,152,4,(rd(s->r,152,4)^rd(s->r,152,4)));
L_1803ffebb_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ffebb_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ffebb_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803ffebb_7:;
wr(s->u,36,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803ffebb_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1803ffebb_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ffebb_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ffebb_11:;
/* 1803ffebe: lea r14, [r14 + r9*4] */
L_1803ffebe_0:;
L_1803ffebe_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803ffebe_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803ffebe_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803ffebe_4:;
/* 1803ffec2: lea r15, [r15 + r9*4] */
L_1803ffec2_0:;
L_1803ffec2_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803ffec2_2:;
wr(s->u,24,8,(rd(s->r,184,8)+rd(s->u,16,8)));
L_1803ffec2_3:;
wr(s->r,184,8,rd(s->u,24,8));
L_1803ffec2_4:;
/* 1803ffec6: movss xmm3, dword ptr [r15] */
L_1803ffec6_0:;
L_1803ffec6_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,184,8),4));
L_1803ffec6_2:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ffec6_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ffec6_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ffec6_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ffec6_6:;
/* 1803ffecb: movss xmm1, dword ptr [r15 + 4] */
L_1803ffecb_0:;
L_1803ffecb_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803ffecb_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffecb_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ffecb_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ffecb_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ffecb_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ffecb_7:;
/* 1803ffed1: add rbp, 8 */
L_1803ffed1_0:;
L_1803ffed1_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803ffed1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x8)),8,0));
L_1803ffed1_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803ffed1_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ffed1_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803ffed1_6:;
wr(s->u,36,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803ffed1_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ffed1_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ffed1_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ffed1_10:;
/* 1803ffed5: movss xmm2, dword ptr [rbp + 0x1000] */
L_1803ffed5_0:;
L_1803ffed5_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1000))));
L_1803ffed5_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffed5_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ffed5_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ffed5_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ffed5_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ffed5_7:;
/* 1803ffedd: movaps xmm4, xmm2 */
L_1803ffedd_0:;
L_1803ffedd_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803ffedd_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803ffedd_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803ffedd_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803ffedd_5:;
/* 1803ffee0: mulss xmm2, xmm1 */
L_1803ffee0_0:;
L_1803ffee0_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ffee0_2:;
/* 1803ffee4: mulss xmm4, xmm3 */
L_1803ffee4_0:;
L_1803ffee4_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffee4_2:;
/* 1803ffee8: movss xmm5, dword ptr [rbp + 0x1004] */
L_1803ffee8_0:;
L_1803ffee8_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1004))));
L_1803ffee8_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffee8_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ffee8_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ffee8_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ffee8_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ffee8_7:;
/* 1803ffef0: movaps xmm0, xmm5 */
L_1803ffef0_0:;
L_1803ffef0_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ffef0_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ffef0_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ffef0_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ffef0_5:;
/* 1803ffef3: mulss xmm5, xmm3 */
L_1803ffef3_0:;
L_1803ffef3_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffef3_2:;
/* 1803ffef7: mulss xmm0, xmm1 */
L_1803ffef7_0:;
L_1803ffef7_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ffef7_2:;
/* 1803ffefb: movss xmm1, dword ptr [rbp + 0x800] */
L_1803ffefb_0:;
L_1803ffefb_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_1803ffefb_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffefb_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ffefb_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ffefb_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ffefb_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ffefb_7:;
/* 1803fff03: movaps xmm6, xmm1 */
L_1803fff03_0:;
L_1803fff03_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fff03_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fff03_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fff03_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fff03_5:;
/* 1803fff06: movss xmm7, dword ptr [rbp + 0x804] */
L_1803fff06_0:;
L_1803fff06_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_1803fff06_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fff06_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fff06_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fff06_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fff06_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fff06_7:;
/* 1803fff0e: movss xmm3, dword ptr [r14 + 4] */
L_1803fff0e_0:;
L_1803fff0e_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fff0e_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fff0e_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803fff0e_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fff0e_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fff0e_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fff0e_7:;
/* 1803fff14: mulss xmm1, xmm3 */
L_1803fff14_0:;
L_1803fff14_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fff14_2:;
/* 1803fff18: movss xmm8, dword ptr [rbp + 0x1804] */
L_1803fff18_0:;
L_1803fff18_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1804))));
L_1803fff18_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fff18_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803fff18_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fff18_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fff18_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fff18_7:;
/* 1803fff21: subss xmm4, xmm0 */
L_1803fff21_0:;
L_1803fff21_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fff21_2:;
/* 1803fff25: movaps xmm0, xmm7 */
L_1803fff25_0:;
L_1803fff25_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fff25_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fff25_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fff25_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fff25_5:;
return UINT64_C(0x1803fff28);
}
uint64_t b_1803ffebe(CPU*s){
/* 1803ffebe: lea r14, [r14 + r9*4] */
L_1803ffebe_0:;
L_1803ffebe_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803ffebe_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803ffebe_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803ffebe_4:;
/* 1803ffec2: lea r15, [r15 + r9*4] */
L_1803ffec2_0:;
L_1803ffec2_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803ffec2_2:;
wr(s->u,24,8,(rd(s->r,184,8)+rd(s->u,16,8)));
L_1803ffec2_3:;
wr(s->r,184,8,rd(s->u,24,8));
L_1803ffec2_4:;
/* 1803ffec6: movss xmm3, dword ptr [r15] */
L_1803ffec6_0:;
L_1803ffec6_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,184,8),4));
L_1803ffec6_2:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ffec6_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ffec6_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ffec6_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ffec6_6:;
/* 1803ffecb: movss xmm1, dword ptr [r15 + 4] */
L_1803ffecb_0:;
L_1803ffecb_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803ffecb_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ffecb_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ffecb_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ffecb_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ffecb_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ffecb_7:;
/* 1803ffed1: add rbp, 8 */
L_1803ffed1_0:;
L_1803ffed1_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803ffed1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x8)),8,0));
L_1803ffed1_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803ffed1_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ffed1_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803ffed1_6:;
wr(s->u,36,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803ffed1_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ffed1_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ffed1_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ffed1_10:;
/* 1803ffed5: movss xmm2, dword ptr [rbp + 0x1000] */
L_1803ffed5_0:;
L_1803ffed5_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1000))));
L_1803ffed5_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffed5_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ffed5_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ffed5_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ffed5_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ffed5_7:;
/* 1803ffedd: movaps xmm4, xmm2 */
L_1803ffedd_0:;
L_1803ffedd_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803ffedd_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803ffedd_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803ffedd_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803ffedd_5:;
/* 1803ffee0: mulss xmm2, xmm1 */
L_1803ffee0_0:;
L_1803ffee0_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ffee0_2:;
/* 1803ffee4: mulss xmm4, xmm3 */
L_1803ffee4_0:;
L_1803ffee4_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffee4_2:;
/* 1803ffee8: movss xmm5, dword ptr [rbp + 0x1004] */
L_1803ffee8_0:;
L_1803ffee8_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1004))));
L_1803ffee8_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffee8_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803ffee8_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ffee8_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ffee8_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ffee8_7:;
/* 1803ffef0: movaps xmm0, xmm5 */
L_1803ffef0_0:;
L_1803ffef0_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803ffef0_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803ffef0_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803ffef0_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803ffef0_5:;
/* 1803ffef3: mulss xmm5, xmm3 */
L_1803ffef3_0:;
L_1803ffef3_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ffef3_2:;
/* 1803ffef7: mulss xmm0, xmm1 */
L_1803ffef7_0:;
L_1803ffef7_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ffef7_2:;
/* 1803ffefb: movss xmm1, dword ptr [rbp + 0x800] */
L_1803ffefb_0:;
L_1803ffefb_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_1803ffefb_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ffefb_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ffefb_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ffefb_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ffefb_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ffefb_7:;
/* 1803fff03: movaps xmm6, xmm1 */
L_1803fff03_0:;
L_1803fff03_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fff03_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fff03_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fff03_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fff03_5:;
/* 1803fff06: movss xmm7, dword ptr [rbp + 0x804] */
L_1803fff06_0:;
L_1803fff06_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_1803fff06_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fff06_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fff06_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fff06_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fff06_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fff06_7:;
/* 1803fff0e: movss xmm3, dword ptr [r14 + 4] */
L_1803fff0e_0:;
L_1803fff0e_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fff0e_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fff0e_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803fff0e_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fff0e_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fff0e_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fff0e_7:;
/* 1803fff14: mulss xmm1, xmm3 */
L_1803fff14_0:;
L_1803fff14_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fff14_2:;
/* 1803fff18: movss xmm8, dword ptr [rbp + 0x1804] */
L_1803fff18_0:;
L_1803fff18_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1804))));
L_1803fff18_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fff18_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803fff18_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fff18_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fff18_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fff18_7:;
/* 1803fff21: subss xmm4, xmm0 */
L_1803fff21_0:;
L_1803fff21_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fff21_2:;
/* 1803fff25: movaps xmm0, xmm7 */
L_1803fff25_0:;
L_1803fff25_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fff25_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fff25_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fff25_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fff25_5:;
/* 1803fff28: mulss xmm0, xmm3 */
L_1803fff28_0:;
L_1803fff28_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fff28_2:;
/* 1803fff2c: movss xmm3, dword ptr [r14 + 0xc] */
L_1803fff2c_0:;
L_1803fff2c_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fff2c_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fff2c_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803fff2c_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fff2c_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fff2c_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fff2c_7:;
/* 1803fff32: addss xmm2, xmm5 */
L_1803fff32_0:;
L_1803fff32_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fff32_2:;
/* 1803fff36: movss xmm5, dword ptr [r14] */
L_1803fff36_0:;
L_1803fff36_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fff36_2:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fff36_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fff36_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fff36_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fff36_6:;
/* 1803fff3b: mulss xmm6, xmm5 */
L_1803fff3b_0:;
L_1803fff3b_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fff3b_2:;
/* 1803fff3f: mulss xmm7, xmm5 */
L_1803fff3f_0:;
L_1803fff3f_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fff3f_2:;
/* 1803fff43: movss xmm5, dword ptr [rbp + 0x1800] */
L_1803fff43_0:;
L_1803fff43_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1800))));
L_1803fff43_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fff43_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fff43_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fff43_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fff43_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fff43_7:;
/* 1803fff4b: movaps xmm9, xmm5 */
L_1803fff4b_0:;
L_1803fff4b_1:;
wr(s->r,5184,4,rd(s->r,4928,4));
L_1803fff4b_2:;
wr(s->r,5188,4,rd(s->r,4932,4));
L_1803fff4b_3:;
wr(s->r,5192,4,rd(s->r,4936,4));
L_1803fff4b_4:;
wr(s->r,5196,4,rd(s->r,4940,4));
L_1803fff4b_5:;
/* 1803fff4f: mulss xmm5, xmm3 */
L_1803fff4f_0:;
L_1803fff4f_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fff4f_2:;
/* 1803fff53: subss xmm6, xmm0 */
L_1803fff53_0:;
L_1803fff53_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fff53_2:;
/* 1803fff57: movaps xmm0, xmm8 */
L_1803fff57_0:;
L_1803fff57_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fff57_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fff57_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fff57_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fff57_5:;
return UINT64_C(0x1803fff5b);
}
uint64_t b_1803fff0e(CPU*s){
/* 1803fff0e: movss xmm3, dword ptr [r14 + 4] */
L_1803fff0e_0:;
L_1803fff0e_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fff0e_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fff0e_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fff0e_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fff0e_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fff0e_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fff0e_7:;
/* 1803fff14: mulss xmm1, xmm3 */
L_1803fff14_0:;
L_1803fff14_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fff14_2:;
/* 1803fff18: movss xmm8, dword ptr [rbp + 0x1804] */
L_1803fff18_0:;
L_1803fff18_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1804))));
L_1803fff18_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fff18_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fff18_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fff18_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fff18_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fff18_7:;
/* 1803fff21: subss xmm4, xmm0 */
L_1803fff21_0:;
L_1803fff21_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fff21_2:;
/* 1803fff25: movaps xmm0, xmm7 */
L_1803fff25_0:;
L_1803fff25_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fff25_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fff25_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fff25_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fff25_5:;
/* 1803fff28: mulss xmm0, xmm3 */
L_1803fff28_0:;
L_1803fff28_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fff28_2:;
/* 1803fff2c: movss xmm3, dword ptr [r14 + 0xc] */
L_1803fff2c_0:;
L_1803fff2c_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fff2c_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fff2c_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fff2c_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fff2c_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fff2c_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fff2c_7:;
/* 1803fff32: addss xmm2, xmm5 */
L_1803fff32_0:;
L_1803fff32_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fff32_2:;
/* 1803fff36: movss xmm5, dword ptr [r14] */
L_1803fff36_0:;
L_1803fff36_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fff36_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fff36_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fff36_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fff36_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fff36_6:;
/* 1803fff3b: mulss xmm6, xmm5 */
L_1803fff3b_0:;
L_1803fff3b_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fff3b_2:;
/* 1803fff3f: mulss xmm7, xmm5 */
L_1803fff3f_0:;
L_1803fff3f_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fff3f_2:;
/* 1803fff43: movss xmm5, dword ptr [rbp + 0x1800] */
L_1803fff43_0:;
L_1803fff43_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1800))));
L_1803fff43_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fff43_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fff43_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fff43_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fff43_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fff43_7:;
/* 1803fff4b: movaps xmm9, xmm5 */
L_1803fff4b_0:;
L_1803fff4b_1:;
wr(s->r,5184,4,rd(s->r,4928,4));
L_1803fff4b_2:;
wr(s->r,5188,4,rd(s->r,4932,4));
L_1803fff4b_3:;
wr(s->r,5192,4,rd(s->r,4936,4));
L_1803fff4b_4:;
wr(s->r,5196,4,rd(s->r,4940,4));
L_1803fff4b_5:;
/* 1803fff4f: mulss xmm5, xmm3 */
L_1803fff4f_0:;
L_1803fff4f_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fff4f_2:;
/* 1803fff53: subss xmm6, xmm0 */
L_1803fff53_0:;
L_1803fff53_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fff53_2:;
/* 1803fff57: movaps xmm0, xmm8 */
L_1803fff57_0:;
L_1803fff57_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fff57_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fff57_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fff57_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fff57_5:;
/* 1803fff5b: mulss xmm0, xmm3 */
L_1803fff5b_0:;
L_1803fff5b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fff5b_2:;
/* 1803fff5f: movaps xmm3, xmm4 */
L_1803fff5f_0:;
L_1803fff5f_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fff5f_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fff5f_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fff5f_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fff5f_5:;
/* 1803fff62: addss xmm1, xmm7 */
L_1803fff62_0:;
L_1803fff62_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fff62_2:;
/* 1803fff66: movss xmm7, dword ptr [r14 + 8] */
L_1803fff66_0:;
L_1803fff66_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803fff66_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fff66_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fff66_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fff66_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fff66_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fff66_7:;
/* 1803fff6c: mulss xmm9, xmm7 */
L_1803fff6c_0:;
L_1803fff6c_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fff6c_2:;
/* 1803fff71: mulss xmm8, xmm7 */
L_1803fff71_0:;
L_1803fff71_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fff71_2:;
/* 1803fff76: add r11d, 1 */
L_1803fff76_0:;
L_1803fff76_1:;
wr(s->r,512,1,(((rd(s->r,152,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,152,4)));
L_1803fff76_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803fff76_3:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803fff76_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fff76_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fff76_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fff76_7:;
wr(s->u,20,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fff76_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803fff76_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fff76_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fff76_11:;
/* 1803fff7a: subss xmm9, xmm0 */
L_1803fff7a_0:;
L_1803fff7a_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fff7a_2:;
/* 1803fff7f: movaps xmm0, xmm2 */
L_1803fff7f_0:;
L_1803fff7f_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fff7f_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fff7f_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fff7f_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fff7f_5:;
/* 1803fff82: addss xmm5, xmm8 */
L_1803fff82_0:;
L_1803fff82_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803fff82_2:;
/* 1803fff87: movss xmm8, dword ptr [rbp] */
L_1803fff87_0:;
L_1803fff87_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803fff87_2:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fff87_3:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fff87_4:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fff87_5:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fff87_6:;
/* 1803fff8d: movaps xmm7, xmm8 */
L_1803fff8d_0:;
L_1803fff8d_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803fff8d_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803fff8d_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803fff8d_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803fff8d_5:;
/* 1803fff91: addss xmm3, xmm9 */
L_1803fff91_0:;
L_1803fff91_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fff91_2:;
/* 1803fff96: subss xmm4, xmm9 */
L_1803fff96_0:;
L_1803fff96_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803fff96_2:;
/* 1803fff9b: addss xmm0, xmm5 */
L_1803fff9b_0:;
L_1803fff9b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fff9b_2:;
/* 1803fff9f: subss xmm2, xmm5 */
L_1803fff9f_0:;
L_1803fff9f_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fff9f_2:;
return UINT64_C(0x1803fffa3);
}
uint64_t b_1803fff28(CPU*s){
/* 1803fff28: mulss xmm0, xmm3 */
L_1803fff28_0:;
L_1803fff28_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fff28_2:;
/* 1803fff2c: movss xmm3, dword ptr [r14 + 0xc] */
L_1803fff2c_0:;
L_1803fff2c_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fff2c_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fff2c_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fff2c_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fff2c_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fff2c_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fff2c_7:;
/* 1803fff32: addss xmm2, xmm5 */
L_1803fff32_0:;
L_1803fff32_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fff32_2:;
/* 1803fff36: movss xmm5, dword ptr [r14] */
L_1803fff36_0:;
L_1803fff36_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fff36_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fff36_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fff36_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fff36_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fff36_6:;
/* 1803fff3b: mulss xmm6, xmm5 */
L_1803fff3b_0:;
L_1803fff3b_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fff3b_2:;
/* 1803fff3f: mulss xmm7, xmm5 */
L_1803fff3f_0:;
L_1803fff3f_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fff3f_2:;
/* 1803fff43: movss xmm5, dword ptr [rbp + 0x1800] */
L_1803fff43_0:;
L_1803fff43_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1800))));
L_1803fff43_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fff43_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fff43_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fff43_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fff43_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fff43_7:;
/* 1803fff4b: movaps xmm9, xmm5 */
L_1803fff4b_0:;
L_1803fff4b_1:;
wr(s->r,5184,4,rd(s->r,4928,4));
L_1803fff4b_2:;
wr(s->r,5188,4,rd(s->r,4932,4));
L_1803fff4b_3:;
wr(s->r,5192,4,rd(s->r,4936,4));
L_1803fff4b_4:;
wr(s->r,5196,4,rd(s->r,4940,4));
L_1803fff4b_5:;
/* 1803fff4f: mulss xmm5, xmm3 */
L_1803fff4f_0:;
L_1803fff4f_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fff4f_2:;
/* 1803fff53: subss xmm6, xmm0 */
L_1803fff53_0:;
L_1803fff53_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fff53_2:;
/* 1803fff57: movaps xmm0, xmm8 */
L_1803fff57_0:;
L_1803fff57_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fff57_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fff57_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fff57_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fff57_5:;
/* 1803fff5b: mulss xmm0, xmm3 */
L_1803fff5b_0:;
L_1803fff5b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fff5b_2:;
/* 1803fff5f: movaps xmm3, xmm4 */
L_1803fff5f_0:;
L_1803fff5f_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fff5f_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fff5f_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fff5f_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fff5f_5:;
/* 1803fff62: addss xmm1, xmm7 */
L_1803fff62_0:;
L_1803fff62_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fff62_2:;
/* 1803fff66: movss xmm7, dword ptr [r14 + 8] */
L_1803fff66_0:;
L_1803fff66_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803fff66_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fff66_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fff66_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fff66_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fff66_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fff66_7:;
/* 1803fff6c: mulss xmm9, xmm7 */
L_1803fff6c_0:;
L_1803fff6c_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fff6c_2:;
/* 1803fff71: mulss xmm8, xmm7 */
L_1803fff71_0:;
L_1803fff71_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fff71_2:;
/* 1803fff76: add r11d, 1 */
L_1803fff76_0:;
L_1803fff76_1:;
wr(s->r,512,1,(((rd(s->r,152,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,152,4)));
L_1803fff76_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803fff76_3:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803fff76_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fff76_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fff76_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fff76_7:;
wr(s->u,20,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fff76_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803fff76_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fff76_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fff76_11:;
/* 1803fff7a: subss xmm9, xmm0 */
L_1803fff7a_0:;
L_1803fff7a_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fff7a_2:;
/* 1803fff7f: movaps xmm0, xmm2 */
L_1803fff7f_0:;
L_1803fff7f_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fff7f_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fff7f_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fff7f_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fff7f_5:;
/* 1803fff82: addss xmm5, xmm8 */
L_1803fff82_0:;
L_1803fff82_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803fff82_2:;
/* 1803fff87: movss xmm8, dword ptr [rbp] */
L_1803fff87_0:;
L_1803fff87_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803fff87_2:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fff87_3:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fff87_4:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fff87_5:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fff87_6:;
/* 1803fff8d: movaps xmm7, xmm8 */
L_1803fff8d_0:;
L_1803fff8d_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803fff8d_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803fff8d_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803fff8d_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803fff8d_5:;
/* 1803fff91: addss xmm3, xmm9 */
L_1803fff91_0:;
L_1803fff91_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fff91_2:;
/* 1803fff96: subss xmm4, xmm9 */
L_1803fff96_0:;
L_1803fff96_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803fff96_2:;
/* 1803fff9b: addss xmm0, xmm5 */
L_1803fff9b_0:;
L_1803fff9b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fff9b_2:;
/* 1803fff9f: subss xmm2, xmm5 */
L_1803fff9f_0:;
L_1803fff9f_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fff9f_2:;
/* 1803fffa3: addss xmm7, xmm6 */
L_1803fffa3_0:;
L_1803fffa3_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fffa3_2:;
/* 1803fffa7: subss xmm8, xmm6 */
L_1803fffa7_0:;
L_1803fffa7_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803fffa7_2:;
/* 1803fffac: movss xmm6, dword ptr [rbp + 4] */
L_1803fffac_0:;
L_1803fffac_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803fffac_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fffac_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803fffac_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fffac_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fffac_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fffac_7:;
/* 1803fffb1: movaps xmm5, xmm6 */
L_1803fffb1_0:;
L_1803fffb1_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803fffb1_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803fffb1_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803fffb1_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803fffb1_5:;
/* 1803fffb4: subss xmm6, xmm1 */
L_1803fffb4_0:;
L_1803fffb4_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fffb4_2:;
return UINT64_C(0x1803fffb8);
}
uint64_t b_1803fff5b(CPU*s){
/* 1803fff5b: mulss xmm0, xmm3 */
L_1803fff5b_0:;
L_1803fff5b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fff5b_2:;
/* 1803fff5f: movaps xmm3, xmm4 */
L_1803fff5f_0:;
L_1803fff5f_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fff5f_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fff5f_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fff5f_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fff5f_5:;
/* 1803fff62: addss xmm1, xmm7 */
L_1803fff62_0:;
L_1803fff62_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fff62_2:;
/* 1803fff66: movss xmm7, dword ptr [r14 + 8] */
L_1803fff66_0:;
L_1803fff66_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803fff66_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fff66_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fff66_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fff66_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fff66_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fff66_7:;
/* 1803fff6c: mulss xmm9, xmm7 */
L_1803fff6c_0:;
L_1803fff6c_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fff6c_2:;
/* 1803fff71: mulss xmm8, xmm7 */
L_1803fff71_0:;
L_1803fff71_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fff71_2:;
/* 1803fff76: add r11d, 1 */
L_1803fff76_0:;
L_1803fff76_1:;
wr(s->r,512,1,(((rd(s->r,152,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,152,4)));
L_1803fff76_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803fff76_3:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803fff76_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fff76_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fff76_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fff76_7:;
wr(s->u,20,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fff76_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803fff76_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fff76_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fff76_11:;
/* 1803fff7a: subss xmm9, xmm0 */
L_1803fff7a_0:;
L_1803fff7a_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fff7a_2:;
/* 1803fff7f: movaps xmm0, xmm2 */
L_1803fff7f_0:;
L_1803fff7f_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fff7f_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fff7f_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fff7f_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fff7f_5:;
/* 1803fff82: addss xmm5, xmm8 */
L_1803fff82_0:;
L_1803fff82_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803fff82_2:;
/* 1803fff87: movss xmm8, dword ptr [rbp] */
L_1803fff87_0:;
L_1803fff87_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803fff87_2:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fff87_3:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fff87_4:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fff87_5:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fff87_6:;
/* 1803fff8d: movaps xmm7, xmm8 */
L_1803fff8d_0:;
L_1803fff8d_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803fff8d_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803fff8d_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803fff8d_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803fff8d_5:;
/* 1803fff91: addss xmm3, xmm9 */
L_1803fff91_0:;
L_1803fff91_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fff91_2:;
/* 1803fff96: subss xmm4, xmm9 */
L_1803fff96_0:;
L_1803fff96_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803fff96_2:;
/* 1803fff9b: addss xmm0, xmm5 */
L_1803fff9b_0:;
L_1803fff9b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fff9b_2:;
/* 1803fff9f: subss xmm2, xmm5 */
L_1803fff9f_0:;
L_1803fff9f_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fff9f_2:;
/* 1803fffa3: addss xmm7, xmm6 */
L_1803fffa3_0:;
L_1803fffa3_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fffa3_2:;
/* 1803fffa7: subss xmm8, xmm6 */
L_1803fffa7_0:;
L_1803fffa7_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803fffa7_2:;
/* 1803fffac: movss xmm6, dword ptr [rbp + 4] */
L_1803fffac_0:;
L_1803fffac_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803fffac_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fffac_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803fffac_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fffac_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fffac_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fffac_7:;
/* 1803fffb1: movaps xmm5, xmm6 */
L_1803fffb1_0:;
L_1803fffb1_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803fffb1_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803fffb1_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803fffb1_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803fffb1_5:;
/* 1803fffb4: subss xmm6, xmm1 */
L_1803fffb4_0:;
L_1803fffb4_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fffb4_2:;
/* 1803fffb8: cmp r11d, 0xff */
L_1803fffb8_0:;
L_1803fffb8_1:;
wr(s->u,26,4,rd(s->r,152,4));
L_1803fffb8_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0xff))));
L_1803fffb8_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0xff)),4,1));
L_1803fffb8_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0xff))));
L_1803fffb8_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fffb8_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803fffb8_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803fffb8_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803fffb8_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fffb8_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fffb8_11:;
/* 1803fffbf: addss xmm5, xmm1 */
L_1803fffbf_0:;
L_1803fffbf_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fffbf_2:;
/* 1803fffc3: movaps xmm1, xmm7 */
L_1803fffc3_0:;
L_1803fffc3_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803fffc3_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803fffc3_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803fffc3_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803fffc3_5:;
/* 1803fffc6: subss xmm7, xmm3 */
L_1803fffc6_0:;
L_1803fffc6_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fffc6_2:;
/* 1803fffca: movss dword ptr [rbp + 0x1000], xmm7 */
L_1803fffca_0:;
L_1803fffca_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1000))));
L_1803fffca_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803fffca_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fffca_4:;
/* 1803fffd2: addss xmm1, xmm3 */
L_1803fffd2_0:;
L_1803fffd2_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fffd2_2:;
/* 1803fffd6: movss dword ptr [rbp], xmm1 */
L_1803fffd6_0:;
L_1803fffd6_1:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fffd6_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803fffd6_3:;
/* 1803fffdb: movaps xmm1, xmm5 */
L_1803fffdb_0:;
L_1803fffdb_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803fffdb_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803fffdb_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803fffdb_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803fffdb_5:;
/* 1803fffde: subss xmm5, xmm0 */
L_1803fffde_0:;
L_1803fffde_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fffde_2:;
/* 1803fffe2: movss dword ptr [rbp + 0x1004], xmm5 */
L_1803fffe2_0:;
L_1803fffe2_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1004))));
L_1803fffe2_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803fffe2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fffe2_4:;
/* 1803fffea: addss xmm1, xmm0 */
L_1803fffea_0:;
L_1803fffea_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fffea_2:;
return UINT64_C(0x1803fffee);
}
uint64_t b_1803fffa3(CPU*s){
/* 1803fffa3: addss xmm7, xmm6 */
L_1803fffa3_0:;
L_1803fffa3_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fffa3_2:;
/* 1803fffa7: subss xmm8, xmm6 */
L_1803fffa7_0:;
L_1803fffa7_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803fffa7_2:;
/* 1803fffac: movss xmm6, dword ptr [rbp + 4] */
L_1803fffac_0:;
L_1803fffac_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803fffac_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fffac_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803fffac_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fffac_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fffac_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fffac_7:;
/* 1803fffb1: movaps xmm5, xmm6 */
L_1803fffb1_0:;
L_1803fffb1_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803fffb1_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803fffb1_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803fffb1_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803fffb1_5:;
/* 1803fffb4: subss xmm6, xmm1 */
L_1803fffb4_0:;
L_1803fffb4_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fffb4_2:;
/* 1803fffb8: cmp r11d, 0xff */
L_1803fffb8_0:;
L_1803fffb8_1:;
wr(s->u,26,4,rd(s->r,152,4));
L_1803fffb8_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0xff))));
L_1803fffb8_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0xff)),4,1));
L_1803fffb8_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0xff))));
L_1803fffb8_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fffb8_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803fffb8_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803fffb8_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803fffb8_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fffb8_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fffb8_11:;
/* 1803fffbf: addss xmm5, xmm1 */
L_1803fffbf_0:;
L_1803fffbf_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fffbf_2:;
/* 1803fffc3: movaps xmm1, xmm7 */
L_1803fffc3_0:;
L_1803fffc3_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803fffc3_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803fffc3_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803fffc3_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803fffc3_5:;
/* 1803fffc6: subss xmm7, xmm3 */
L_1803fffc6_0:;
L_1803fffc6_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fffc6_2:;
/* 1803fffca: movss dword ptr [rbp + 0x1000], xmm7 */
L_1803fffca_0:;
L_1803fffca_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1000))));
L_1803fffca_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803fffca_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fffca_4:;
/* 1803fffd2: addss xmm1, xmm3 */
L_1803fffd2_0:;
L_1803fffd2_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fffd2_2:;
/* 1803fffd6: movss dword ptr [rbp], xmm1 */
L_1803fffd6_0:;
L_1803fffd6_1:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fffd6_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803fffd6_3:;
/* 1803fffdb: movaps xmm1, xmm5 */
L_1803fffdb_0:;
L_1803fffdb_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803fffdb_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803fffdb_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803fffdb_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803fffdb_5:;
/* 1803fffde: subss xmm5, xmm0 */
L_1803fffde_0:;
L_1803fffde_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fffde_2:;
/* 1803fffe2: movss dword ptr [rbp + 0x1004], xmm5 */
L_1803fffe2_0:;
L_1803fffe2_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1004))));
L_1803fffe2_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803fffe2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fffe2_4:;
/* 1803fffea: addss xmm1, xmm0 */
L_1803fffea_0:;
L_1803fffea_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fffea_2:;
/* 1803fffee: movss dword ptr [rbp + 4], xmm1 */
L_1803fffee_0:;
L_1803fffee_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803fffee_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fffee_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fffee_4:;
/* 1803ffff3: movaps xmm0, xmm8 */
L_1803ffff3_0:;
L_1803ffff3_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ffff3_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ffff3_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ffff3_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ffff3_5:;
/* 1803ffff7: subss xmm8, xmm2 */
L_1803ffff7_0:;
L_1803ffff7_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ffff7_2:;
/* 1803ffffc: movss dword ptr [rbp + 0x1800], xmm8 */
L_1803ffffc_0:;
L_1803ffffc_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1800))));
L_1803ffffc_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ffffc_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffffc_4:;
/* 180400005: addss xmm0, xmm2 */
L_180400005_0:;
L_180400005_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_180400005_2:;
/* 180400009: movss dword ptr [rbp + 0x800], xmm0 */
L_180400009_0:;
L_180400009_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_180400009_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_180400009_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_180400009_4:;
/* 180400011: movaps xmm0, xmm6 */
L_180400011_0:;
L_180400011_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_180400011_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_180400011_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_180400011_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_180400011_5:;
/* 180400014: addss xmm6, xmm4 */
L_180400014_0:;
L_180400014_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_180400014_2:;
/* 180400018: movss dword ptr [rbp + 0x1804], xmm6 */
L_180400018_0:;
L_180400018_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1804))));
L_180400018_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_180400018_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_180400018_4:;
/* 180400020: subss xmm0, xmm4 */
L_180400020_0:;
L_180400020_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_180400020_2:;
/* 180400024: movss dword ptr [rbp + 0x804], xmm0 */
L_180400024_0:;
L_180400024_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_180400024_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_180400024_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_180400024_4:;
/* 18040002c: jb 0x1803ffebe */
L_18040002c_0:;
L_18040002c_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ffebe);}
L_18040002c_2:;
return UINT64_C(0x180400032);
}
uint64_t b_1803fffb8(CPU*s){
/* 1803fffb8: cmp r11d, 0xff */
L_1803fffb8_0:;
L_1803fffb8_1:;
wr(s->u,26,4,rd(s->r,152,4));
L_1803fffb8_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0xff))));
L_1803fffb8_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0xff)),4,1));
L_1803fffb8_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0xff))));
L_1803fffb8_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fffb8_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803fffb8_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803fffb8_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803fffb8_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fffb8_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fffb8_11:;
/* 1803fffbf: addss xmm5, xmm1 */
L_1803fffbf_0:;
L_1803fffbf_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fffbf_2:;
/* 1803fffc3: movaps xmm1, xmm7 */
L_1803fffc3_0:;
L_1803fffc3_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803fffc3_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803fffc3_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803fffc3_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803fffc3_5:;
/* 1803fffc6: subss xmm7, xmm3 */
L_1803fffc6_0:;
L_1803fffc6_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fffc6_2:;
/* 1803fffca: movss dword ptr [rbp + 0x1000], xmm7 */
L_1803fffca_0:;
L_1803fffca_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1000))));
L_1803fffca_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803fffca_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fffca_4:;
/* 1803fffd2: addss xmm1, xmm3 */
L_1803fffd2_0:;
L_1803fffd2_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fffd2_2:;
/* 1803fffd6: movss dword ptr [rbp], xmm1 */
L_1803fffd6_0:;
L_1803fffd6_1:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fffd6_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803fffd6_3:;
/* 1803fffdb: movaps xmm1, xmm5 */
L_1803fffdb_0:;
L_1803fffdb_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803fffdb_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803fffdb_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803fffdb_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803fffdb_5:;
/* 1803fffde: subss xmm5, xmm0 */
L_1803fffde_0:;
L_1803fffde_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fffde_2:;
/* 1803fffe2: movss dword ptr [rbp + 0x1004], xmm5 */
L_1803fffe2_0:;
L_1803fffe2_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1004))));
L_1803fffe2_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803fffe2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fffe2_4:;
/* 1803fffea: addss xmm1, xmm0 */
L_1803fffea_0:;
L_1803fffea_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fffea_2:;
/* 1803fffee: movss dword ptr [rbp + 4], xmm1 */
L_1803fffee_0:;
L_1803fffee_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803fffee_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fffee_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fffee_4:;
/* 1803ffff3: movaps xmm0, xmm8 */
L_1803ffff3_0:;
L_1803ffff3_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ffff3_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ffff3_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ffff3_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ffff3_5:;
/* 1803ffff7: subss xmm8, xmm2 */
L_1803ffff7_0:;
L_1803ffff7_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ffff7_2:;
/* 1803ffffc: movss dword ptr [rbp + 0x1800], xmm8 */
L_1803ffffc_0:;
L_1803ffffc_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1800))));
L_1803ffffc_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ffffc_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffffc_4:;
/* 180400005: addss xmm0, xmm2 */
L_180400005_0:;
L_180400005_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_180400005_2:;
/* 180400009: movss dword ptr [rbp + 0x800], xmm0 */
L_180400009_0:;
L_180400009_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_180400009_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_180400009_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_180400009_4:;
/* 180400011: movaps xmm0, xmm6 */
L_180400011_0:;
L_180400011_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_180400011_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_180400011_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_180400011_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_180400011_5:;
/* 180400014: addss xmm6, xmm4 */
L_180400014_0:;
L_180400014_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_180400014_2:;
/* 180400018: movss dword ptr [rbp + 0x1804], xmm6 */
L_180400018_0:;
L_180400018_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1804))));
L_180400018_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_180400018_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_180400018_4:;
/* 180400020: subss xmm0, xmm4 */
L_180400020_0:;
L_180400020_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_180400020_2:;
/* 180400024: movss dword ptr [rbp + 0x804], xmm0 */
L_180400024_0:;
L_180400024_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_180400024_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_180400024_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_180400024_4:;
/* 18040002c: jb 0x1803ffebe */
L_18040002c_0:;
L_18040002c_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ffebe);}
L_18040002c_2:;
return UINT64_C(0x180400032);
}
uint64_t b_1803fffee(CPU*s){
/* 1803fffee: movss dword ptr [rbp + 4], xmm1 */
L_1803fffee_0:;
L_1803fffee_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803fffee_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fffee_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fffee_4:;
/* 1803ffff3: movaps xmm0, xmm8 */
L_1803ffff3_0:;
L_1803ffff3_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803ffff3_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803ffff3_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803ffff3_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803ffff3_5:;
/* 1803ffff7: subss xmm8, xmm2 */
L_1803ffff7_0:;
L_1803ffff7_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ffff7_2:;
/* 1803ffffc: movss dword ptr [rbp + 0x1800], xmm8 */
L_1803ffffc_0:;
L_1803ffffc_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1800))));
L_1803ffffc_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803ffffc_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ffffc_4:;
/* 180400005: addss xmm0, xmm2 */
L_180400005_0:;
L_180400005_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_180400005_2:;
/* 180400009: movss dword ptr [rbp + 0x800], xmm0 */
L_180400009_0:;
L_180400009_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_180400009_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_180400009_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_180400009_4:;
/* 180400011: movaps xmm0, xmm6 */
L_180400011_0:;
L_180400011_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_180400011_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_180400011_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_180400011_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_180400011_5:;
/* 180400014: addss xmm6, xmm4 */
L_180400014_0:;
L_180400014_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_180400014_2:;
/* 180400018: movss dword ptr [rbp + 0x1804], xmm6 */
L_180400018_0:;
L_180400018_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x1804))));
L_180400018_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_180400018_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_180400018_4:;
/* 180400020: subss xmm0, xmm4 */
L_180400020_0:;
L_180400020_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_180400020_2:;
/* 180400024: movss dword ptr [rbp + 0x804], xmm0 */
L_180400024_0:;
L_180400024_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_180400024_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_180400024_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_180400024_4:;
/* 18040002c: jb 0x1803ffebe */
L_18040002c_0:;
L_18040002c_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ffebe);}
L_18040002c_2:;
return UINT64_C(0x180400032);
}
