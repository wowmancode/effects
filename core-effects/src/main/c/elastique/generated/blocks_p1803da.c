#include "lift_runtime.h"
uint64_t b_1803da02f(CPU*s){
/* 1803da02f: movss dword ptr [rbx + 0x31c], xmm6 */
L_1803da02f_0:;
L_1803da02f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x31c))));
L_1803da02f_2:;
wr(s->u,8,4,rd(s->r,4992,4));
L_1803da02f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da02f_4:;
/* 1803da037: movss xmm2, dword ptr [rbx + 0x31c] */
L_1803da037_0:;
L_1803da037_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x31c))));
L_1803da037_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da037_3:;
wr(s->r,4736,4,rd(s->u,8,4));
L_1803da037_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803da037_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803da037_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803da037_7:;
/* 1803da03f: unpcklps xmm4, xmm4 */
L_1803da03f_0:;
L_1803da03f_1:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803da03f_2:;
wr(s->r,4876,4,rd(s->r,4868,4));
L_1803da03f_3:;
wr(s->r,4868,4,rd(s->r,4864,4));
L_1803da03f_4:;
/* 1803da042: ucomiss xmm2, dword ptr [rip + 0x272bfb] */
L_1803da042_0:;
L_1803da042_1:;
wr(s->u,21,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803da042_2:;
wr(s->u,22,1,isnan(fv(mr(UINT64_C(0x18064cc44),4),4)));
L_1803da042_3:;
wr(s->r,514,1,((rd(s->u,21,1)!=0)||(rd(s->u,22,1)!=0)));
L_1803da042_4:;
wr(s->u,23,1,(fv(rd(s->r,4736,4),4)==fv(mr(UINT64_C(0x18064cc44),4),4)));
L_1803da042_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,23,1)));
L_1803da042_6:;
wr(s->u,24,1,(fv(rd(s->r,4736,4),4)<fv(mr(UINT64_C(0x18064cc44),4),4)));
L_1803da042_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,24,1)));
L_1803da042_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da042_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da042_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da042_11:;
/* 1803da049: cvtps2pd xmm0, xmm4 */
L_1803da049_0:;
L_1803da049_1:;
wr(s->u,25,8,rd(s->r,4864,8));
L_1803da049_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,25,4),4),8));
L_1803da049_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,29,4),4),8));
L_1803da049_4:;
/* 1803da04c: divss xmm5, xmm2 */
L_1803da04c_0:;
L_1803da04c_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803da04c_2:;
/* 1803da050: addsd xmm0, qword ptr [rbx + 0x3a0] */
L_1803da050_0:;
L_1803da050_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3a0))));
L_1803da050_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da050_3:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->u,12,8),8),8));
L_1803da050_4:;
/* 1803da058: unpcklps xmm5, xmm5 */
L_1803da058_0:;
L_1803da058_1:;
wr(s->r,4936,4,rd(s->r,4932,4));
L_1803da058_2:;
wr(s->r,4940,4,rd(s->r,4932,4));
L_1803da058_3:;
wr(s->r,4932,4,rd(s->r,4928,4));
L_1803da058_4:;
/* 1803da05b: unpcklps xmm4, xmm4 */
L_1803da05b_0:;
L_1803da05b_1:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803da05b_2:;
wr(s->r,4876,4,rd(s->r,4868,4));
L_1803da05b_3:;
wr(s->r,4868,4,rd(s->r,4864,4));
L_1803da05b_4:;
/* 1803da05e: movsd qword ptr [rbx + 0x3a0], xmm0 */
L_1803da05e_0:;
L_1803da05e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3a0))));
L_1803da05e_2:;
wr(s->u,12,8,rd(s->r,4608,8));
L_1803da05e_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803da05e_4:;
/* 1803da066: cvtps2pd xmm0, xmm5 */
L_1803da066_0:;
L_1803da066_1:;
wr(s->u,25,8,rd(s->r,4928,8));
L_1803da066_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,25,4),4),8));
L_1803da066_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,29,4),4),8));
L_1803da066_4:;
/* 1803da069: cvtps2pd xmm1, xmm4 */
L_1803da069_0:;
L_1803da069_1:;
wr(s->u,25,8,rd(s->r,4864,8));
L_1803da069_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,25,4),4),8));
L_1803da069_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,29,4),4),8));
L_1803da069_4:;
/* 1803da06c: addsd xmm0, xmm7 */
L_1803da06c_0:;
L_1803da06c_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,5056,8),8),8));
L_1803da06c_2:;
/* 1803da070: addsd xmm1, xmm8 */
L_1803da070_0:;
L_1803da070_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,5120,8),8),8));
L_1803da070_2:;
/* 1803da075: movsd qword ptr [rbx + 0x3a8], xmm0 */
L_1803da075_0:;
L_1803da075_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3a8))));
L_1803da075_2:;
wr(s->u,12,8,rd(s->r,4608,8));
L_1803da075_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803da075_4:;
/* 1803da07d: movsd qword ptr [rbx + 0x3b0], xmm1 */
L_1803da07d_0:;
L_1803da07d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3b0))));
L_1803da07d_2:;
wr(s->u,12,8,rd(s->r,4672,8));
L_1803da07d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803da07d_4:;
/* 1803da085: jne 0x1803da090 */
L_1803da085_0:;
L_1803da085_1:;
wr(s->u,20,1,(!rd(s->r,518,1)));
L_1803da085_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803da090);}
L_1803da085_3:;
return UINT64_C(0x1803da087);
}
uint64_t b_1803da037(CPU*s){
/* 1803da037: movss xmm2, dword ptr [rbx + 0x31c] */
L_1803da037_0:;
L_1803da037_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x31c))));
L_1803da037_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da037_3:;
wr(s->r,4736,4,rd(s->u,8,4));
L_1803da037_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803da037_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803da037_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803da037_7:;
/* 1803da03f: unpcklps xmm4, xmm4 */
L_1803da03f_0:;
L_1803da03f_1:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803da03f_2:;
wr(s->r,4876,4,rd(s->r,4868,4));
L_1803da03f_3:;
wr(s->r,4868,4,rd(s->r,4864,4));
L_1803da03f_4:;
/* 1803da042: ucomiss xmm2, dword ptr [rip + 0x272bfb] */
L_1803da042_0:;
L_1803da042_1:;
wr(s->u,21,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803da042_2:;
wr(s->u,22,1,isnan(fv(mr(UINT64_C(0x18064cc44),4),4)));
L_1803da042_3:;
wr(s->r,514,1,((rd(s->u,21,1)!=0)||(rd(s->u,22,1)!=0)));
L_1803da042_4:;
wr(s->u,23,1,(fv(rd(s->r,4736,4),4)==fv(mr(UINT64_C(0x18064cc44),4),4)));
L_1803da042_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,23,1)));
L_1803da042_6:;
wr(s->u,24,1,(fv(rd(s->r,4736,4),4)<fv(mr(UINT64_C(0x18064cc44),4),4)));
L_1803da042_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,24,1)));
L_1803da042_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da042_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da042_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da042_11:;
/* 1803da049: cvtps2pd xmm0, xmm4 */
L_1803da049_0:;
L_1803da049_1:;
wr(s->u,25,8,rd(s->r,4864,8));
L_1803da049_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,25,4),4),8));
L_1803da049_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,29,4),4),8));
L_1803da049_4:;
/* 1803da04c: divss xmm5, xmm2 */
L_1803da04c_0:;
L_1803da04c_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803da04c_2:;
/* 1803da050: addsd xmm0, qword ptr [rbx + 0x3a0] */
L_1803da050_0:;
L_1803da050_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3a0))));
L_1803da050_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da050_3:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->u,12,8),8),8));
L_1803da050_4:;
/* 1803da058: unpcklps xmm5, xmm5 */
L_1803da058_0:;
L_1803da058_1:;
wr(s->r,4936,4,rd(s->r,4932,4));
L_1803da058_2:;
wr(s->r,4940,4,rd(s->r,4932,4));
L_1803da058_3:;
wr(s->r,4932,4,rd(s->r,4928,4));
L_1803da058_4:;
/* 1803da05b: unpcklps xmm4, xmm4 */
L_1803da05b_0:;
L_1803da05b_1:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803da05b_2:;
wr(s->r,4876,4,rd(s->r,4868,4));
L_1803da05b_3:;
wr(s->r,4868,4,rd(s->r,4864,4));
L_1803da05b_4:;
/* 1803da05e: movsd qword ptr [rbx + 0x3a0], xmm0 */
L_1803da05e_0:;
L_1803da05e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3a0))));
L_1803da05e_2:;
wr(s->u,12,8,rd(s->r,4608,8));
L_1803da05e_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803da05e_4:;
/* 1803da066: cvtps2pd xmm0, xmm5 */
L_1803da066_0:;
L_1803da066_1:;
wr(s->u,25,8,rd(s->r,4928,8));
L_1803da066_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,25,4),4),8));
L_1803da066_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,29,4),4),8));
L_1803da066_4:;
/* 1803da069: cvtps2pd xmm1, xmm4 */
L_1803da069_0:;
L_1803da069_1:;
wr(s->u,25,8,rd(s->r,4864,8));
L_1803da069_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,25,4),4),8));
L_1803da069_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,29,4),4),8));
L_1803da069_4:;
/* 1803da06c: addsd xmm0, xmm7 */
L_1803da06c_0:;
L_1803da06c_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,5056,8),8),8));
L_1803da06c_2:;
/* 1803da070: addsd xmm1, xmm8 */
L_1803da070_0:;
L_1803da070_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,5120,8),8),8));
L_1803da070_2:;
/* 1803da075: movsd qword ptr [rbx + 0x3a8], xmm0 */
L_1803da075_0:;
L_1803da075_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3a8))));
L_1803da075_2:;
wr(s->u,12,8,rd(s->r,4608,8));
L_1803da075_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803da075_4:;
/* 1803da07d: movsd qword ptr [rbx + 0x3b0], xmm1 */
L_1803da07d_0:;
L_1803da07d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3b0))));
L_1803da07d_2:;
wr(s->u,12,8,rd(s->r,4672,8));
L_1803da07d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803da07d_4:;
/* 1803da085: jne 0x1803da090 */
L_1803da085_0:;
L_1803da085_1:;
wr(s->u,20,1,(!rd(s->r,518,1)));
L_1803da085_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803da090);}
L_1803da085_3:;
return UINT64_C(0x1803da087);
}
uint64_t b_1803da087(CPU*s){
/* 1803da087: cmp dword ptr [rbx + 0x398], r14d */
L_1803da087_0:;
L_1803da087_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x398))));
L_1803da087_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da087_3:;
wr(s->u,18,4,rd(s->u,8,4));
L_1803da087_4:;
wr(s->r,512,1,(rd(s->u,18,4)<rd(s->r,176,4)));
L_1803da087_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),rd(s->r,176,4),4,1));
L_1803da087_6:;
wr(s->u,22,4,(rd(s->u,18,4)-rd(s->r,176,4)));
L_1803da087_7:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da087_8:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803da087_9:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803da087_10:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803da087_11:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803da087_12:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803da087_13:;
/* 1803da08e: je 0x1803da0b1 */
L_1803da08e_0:;
L_1803da08e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803da0b1);}
L_1803da08e_2:;
return UINT64_C(0x1803da090);
}
uint64_t b_1803da090(CPU*s){
/* 1803da090: mov r8d, ecx */
L_1803da090_0:;
L_1803da090_1:;
wr(s->r,128,4,rd(s->r,8,4));
L_1803da090_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803da090_3:;
/* 1803da093: mov rcx, qword ptr [rbx + 0x3c8] */
L_1803da093_0:;
L_1803da093_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c8))));
L_1803da093_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da093_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803da093_4:;
/* 1803da09a: lea r9, [rsp + 0x30] */
L_1803da09a_0:;
L_1803da09a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803da09a_2:;
wr(s->r,136,8,rd(s->u,8,8));
L_1803da09a_3:;
/* 1803da09f: movss dword ptr [rsp + 0x20], xmm2 */
L_1803da09f_0:;
L_1803da09f_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803da09f_2:;
wr(s->u,16,4,rd(s->r,4736,4));
L_1803da09f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803da09f_4:;
/* 1803da0a5: lea rdx, [rsp + 0x30] */
L_1803da0a5_0:;
L_1803da0a5_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803da0a5_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803da0a5_3:;
/* 1803da0aa: call 0x1803df660 */
L_1803da0aa_0:;
L_1803da0aa_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da0aa_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da0af)));
L_1803da0aa_3:;
return (uint64_t)UINT64_C(0x1803df660);
L_1803da0aa_4:;
return UINT64_C(0x1803da0af);
}
uint64_t b_1803da0af(CPU*s){
/* 1803da0af: mov ecx, eax */
L_1803da0af_0:;
L_1803da0af_1:;
wr(s->r,8,4,rd(s->r,0,4));
L_1803da0af_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da0af_3:;
/* 1803da0b1: movd xmm0, dword ptr [rbx + 0x364] */
L_1803da0b1_0:;
L_1803da0b1_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x364))));
L_1803da0b1_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0b1_3:;
wr(s->r,4608,16,rd(s->u,20,4));
L_1803da0b1_4:;
/* 1803da0b9: add dword ptr [rbx + 0x354], ecx */
L_1803da0b9_0:;
L_1803da0b9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x354))));
L_1803da0b9_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0b9_3:;
wr(s->r,512,1,(((rd(s->u,8,4)+rd(s->r,8,4))&(((U)1<<32)-1))<rd(s->u,8,4)));
L_1803da0b9_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0b9_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,8,4),4,0));
L_1803da0b9_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0b9_7:;
wr(s->u,8,4,(rd(s->u,8,4)+rd(s->r,8,4)));
L_1803da0b9_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da0b9_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0b9_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da0b9_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0b9_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803da0b9_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0b9_14:;
wr(s->u,26,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803da0b9_15:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803da0b9_16:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803da0b9_17:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803da0b9_18:;
/* 1803da0bf: add dword ptr [rbx + 0x350], ecx */
L_1803da0bf_0:;
L_1803da0bf_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x350))));
L_1803da0bf_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0bf_3:;
wr(s->r,512,1,(((rd(s->u,8,4)+rd(s->r,8,4))&(((U)1<<32)-1))<rd(s->u,8,4)));
L_1803da0bf_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0bf_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,8,4),4,0));
L_1803da0bf_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0bf_7:;
wr(s->u,8,4,(rd(s->u,8,4)+rd(s->r,8,4)));
L_1803da0bf_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da0bf_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0bf_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da0bf_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0bf_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803da0bf_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0bf_14:;
wr(s->u,26,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803da0bf_15:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803da0bf_16:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803da0bf_17:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803da0bf_18:;
/* 1803da0c5: mov edx, dword ptr [rbx + 0x354] */
L_1803da0c5_0:;
L_1803da0c5_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x354))));
L_1803da0c5_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0c5_3:;
wr(s->r,16,4,rd(s->u,20,4));
L_1803da0c5_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803da0c5_5:;
/* 1803da0cb: mov eax, dword ptr [rbx + 0x350] */
L_1803da0cb_0:;
L_1803da0cb_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x350))));
L_1803da0cb_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0cb_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1803da0cb_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da0cb_5:;
/* 1803da0d1: movd xmm1, ecx */
L_1803da0d1_0:;
L_1803da0d1_1:;
wr(s->r,4672,16,rd(s->r,8,4));
L_1803da0d1_2:;
/* 1803da0d5: cvtdq2ps xmm0, xmm0 */
L_1803da0d5_0:;
L_1803da0d5_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803da0d5_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803da0d5_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803da0d5_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803da0d5_5:;
/* 1803da0d8: cmp edx, r13d */
L_1803da0d8_0:;
L_1803da0d8_1:;
wr(s->u,32,4,rd(s->r,168,4));
L_1803da0d8_2:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,32,4)));
L_1803da0d8_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,32,4),4,1));
L_1803da0d8_4:;
wr(s->u,36,4,(rd(s->r,16,4)-rd(s->u,32,4)));
L_1803da0d8_5:;
wr(s->r,519,1,(sx(rd(s->u,36,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da0d8_6:;
wr(s->r,518,1,(rd(s->u,36,4)==((U)UINT64_C(0x0))));
L_1803da0d8_7:;
wr(s->u,26,4,(rd(s->u,36,4)&((U)UINT64_C(0xff))));
L_1803da0d8_8:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803da0d8_9:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803da0d8_10:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803da0d8_11:;
/* 1803da0db: divss xmm0, dword ptr [rbx + 0x31c] */
L_1803da0db_0:;
L_1803da0db_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x31c))));
L_1803da0db_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0db_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->u,8,4),4),4));
L_1803da0db_4:;
/* 1803da0e3: cvtdq2ps xmm1, xmm1 */
L_1803da0e3_0:;
L_1803da0e3_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803da0e3_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803da0e3_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803da0e3_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803da0e3_5:;
/* 1803da0e6: subss xmm1, xmm0 */
L_1803da0e6_0:;
L_1803da0e6_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803da0e6_2:;
/* 1803da0ea: movd xmm0, dword ptr [rbx + 0x360] */
L_1803da0ea_0:;
L_1803da0ea_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x360))));
L_1803da0ea_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0ea_3:;
wr(s->r,4608,16,rd(s->u,20,4));
L_1803da0ea_4:;
/* 1803da0f2: cvtdq2pd xmm0, xmm0 */
L_1803da0f2_0:;
L_1803da0f2_1:;
wr(s->u,40,8,rd(s->r,4608,8));
L_1803da0f2_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,40,4),4),8));
L_1803da0f2_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,44,4),4),8));
L_1803da0f2_4:;
/* 1803da0f6: unpcklps xmm1, xmm1 */
L_1803da0f6_0:;
L_1803da0f6_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803da0f6_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803da0f6_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803da0f6_4:;
/* 1803da0f9: addsd xmm0, qword ptr [rbx + 0x388] */
L_1803da0f9_0:;
L_1803da0f9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x388))));
L_1803da0f9_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da0f9_3:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->u,12,8),8),8));
L_1803da0f9_4:;
/* 1803da101: cvtps2pd xmm1, xmm1 */
L_1803da101_0:;
L_1803da101_1:;
wr(s->u,48,8,rd(s->r,4672,8));
L_1803da101_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,48,4),4),8));
L_1803da101_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,52,4),4),8));
L_1803da101_4:;
/* 1803da104: addsd xmm1, qword ptr [rbx + 0x3b8] */
L_1803da104_0:;
L_1803da104_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3b8))));
L_1803da104_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da104_3:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->u,12,8),8),8));
L_1803da104_4:;
/* 1803da10c: movsd qword ptr [rbx + 0x388], xmm0 */
L_1803da10c_0:;
L_1803da10c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x388))));
L_1803da10c_2:;
wr(s->u,12,8,rd(s->r,4608,8));
L_1803da10c_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803da10c_4:;
/* 1803da114: movsd qword ptr [rbx + 0x3b8], xmm1 */
L_1803da114_0:;
L_1803da114_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3b8))));
L_1803da114_2:;
wr(s->u,12,8,rd(s->r,4672,8));
L_1803da114_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803da114_4:;
/* 1803da11c: jle 0x1803da129 */
L_1803da11c_0:;
L_1803da11c_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803da11c_2:;
wr(s->u,25,1,((rd(s->r,518,1)!=0)||(rd(s->u,24,1)!=0)));
L_1803da11c_3:;
if(rd(s->u,25,1)){return UINT64_C(0x1803da129);}
L_1803da11c_4:;
return UINT64_C(0x1803da11e);
}
uint64_t b_1803da0b1(CPU*s){
/* 1803da0b1: movd xmm0, dword ptr [rbx + 0x364] */
L_1803da0b1_0:;
L_1803da0b1_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x364))));
L_1803da0b1_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0b1_3:;
wr(s->r,4608,16,rd(s->u,20,4));
L_1803da0b1_4:;
/* 1803da0b9: add dword ptr [rbx + 0x354], ecx */
L_1803da0b9_0:;
L_1803da0b9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x354))));
L_1803da0b9_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0b9_3:;
wr(s->r,512,1,(((rd(s->u,8,4)+rd(s->r,8,4))&(((U)1<<32)-1))<rd(s->u,8,4)));
L_1803da0b9_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0b9_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,8,4),4,0));
L_1803da0b9_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0b9_7:;
wr(s->u,8,4,(rd(s->u,8,4)+rd(s->r,8,4)));
L_1803da0b9_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da0b9_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0b9_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da0b9_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0b9_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803da0b9_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0b9_14:;
wr(s->u,26,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803da0b9_15:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803da0b9_16:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803da0b9_17:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803da0b9_18:;
/* 1803da0bf: add dword ptr [rbx + 0x350], ecx */
L_1803da0bf_0:;
L_1803da0bf_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x350))));
L_1803da0bf_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0bf_3:;
wr(s->r,512,1,(((rd(s->u,8,4)+rd(s->r,8,4))&(((U)1<<32)-1))<rd(s->u,8,4)));
L_1803da0bf_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0bf_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,8,4),4,0));
L_1803da0bf_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0bf_7:;
wr(s->u,8,4,(rd(s->u,8,4)+rd(s->r,8,4)));
L_1803da0bf_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da0bf_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0bf_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da0bf_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0bf_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803da0bf_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0bf_14:;
wr(s->u,26,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803da0bf_15:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803da0bf_16:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803da0bf_17:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803da0bf_18:;
/* 1803da0c5: mov edx, dword ptr [rbx + 0x354] */
L_1803da0c5_0:;
L_1803da0c5_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x354))));
L_1803da0c5_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0c5_3:;
wr(s->r,16,4,rd(s->u,20,4));
L_1803da0c5_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803da0c5_5:;
/* 1803da0cb: mov eax, dword ptr [rbx + 0x350] */
L_1803da0cb_0:;
L_1803da0cb_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x350))));
L_1803da0cb_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0cb_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1803da0cb_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da0cb_5:;
/* 1803da0d1: movd xmm1, ecx */
L_1803da0d1_0:;
L_1803da0d1_1:;
wr(s->r,4672,16,rd(s->r,8,4));
L_1803da0d1_2:;
/* 1803da0d5: cvtdq2ps xmm0, xmm0 */
L_1803da0d5_0:;
L_1803da0d5_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803da0d5_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803da0d5_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803da0d5_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803da0d5_5:;
/* 1803da0d8: cmp edx, r13d */
L_1803da0d8_0:;
L_1803da0d8_1:;
wr(s->u,32,4,rd(s->r,168,4));
L_1803da0d8_2:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,32,4)));
L_1803da0d8_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,32,4),4,1));
L_1803da0d8_4:;
wr(s->u,36,4,(rd(s->r,16,4)-rd(s->u,32,4)));
L_1803da0d8_5:;
wr(s->r,519,1,(sx(rd(s->u,36,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da0d8_6:;
wr(s->r,518,1,(rd(s->u,36,4)==((U)UINT64_C(0x0))));
L_1803da0d8_7:;
wr(s->u,26,4,(rd(s->u,36,4)&((U)UINT64_C(0xff))));
L_1803da0d8_8:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803da0d8_9:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803da0d8_10:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803da0d8_11:;
/* 1803da0db: divss xmm0, dword ptr [rbx + 0x31c] */
L_1803da0db_0:;
L_1803da0db_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x31c))));
L_1803da0db_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0db_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->u,8,4),4),4));
L_1803da0db_4:;
/* 1803da0e3: cvtdq2ps xmm1, xmm1 */
L_1803da0e3_0:;
L_1803da0e3_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803da0e3_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803da0e3_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803da0e3_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803da0e3_5:;
/* 1803da0e6: subss xmm1, xmm0 */
L_1803da0e6_0:;
L_1803da0e6_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803da0e6_2:;
/* 1803da0ea: movd xmm0, dword ptr [rbx + 0x360] */
L_1803da0ea_0:;
L_1803da0ea_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x360))));
L_1803da0ea_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da0ea_3:;
wr(s->r,4608,16,rd(s->u,20,4));
L_1803da0ea_4:;
/* 1803da0f2: cvtdq2pd xmm0, xmm0 */
L_1803da0f2_0:;
L_1803da0f2_1:;
wr(s->u,40,8,rd(s->r,4608,8));
L_1803da0f2_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,40,4),4),8));
L_1803da0f2_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,44,4),4),8));
L_1803da0f2_4:;
/* 1803da0f6: unpcklps xmm1, xmm1 */
L_1803da0f6_0:;
L_1803da0f6_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803da0f6_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803da0f6_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803da0f6_4:;
/* 1803da0f9: addsd xmm0, qword ptr [rbx + 0x388] */
L_1803da0f9_0:;
L_1803da0f9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x388))));
L_1803da0f9_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da0f9_3:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->u,12,8),8),8));
L_1803da0f9_4:;
/* 1803da101: cvtps2pd xmm1, xmm1 */
L_1803da101_0:;
L_1803da101_1:;
wr(s->u,48,8,rd(s->r,4672,8));
L_1803da101_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,48,4),4),8));
L_1803da101_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,52,4),4),8));
L_1803da101_4:;
/* 1803da104: addsd xmm1, qword ptr [rbx + 0x3b8] */
L_1803da104_0:;
L_1803da104_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3b8))));
L_1803da104_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da104_3:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->u,12,8),8),8));
L_1803da104_4:;
/* 1803da10c: movsd qword ptr [rbx + 0x388], xmm0 */
L_1803da10c_0:;
L_1803da10c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x388))));
L_1803da10c_2:;
wr(s->u,12,8,rd(s->r,4608,8));
L_1803da10c_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803da10c_4:;
/* 1803da114: movsd qword ptr [rbx + 0x3b8], xmm1 */
L_1803da114_0:;
L_1803da114_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3b8))));
L_1803da114_2:;
wr(s->u,12,8,rd(s->r,4672,8));
L_1803da114_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803da114_4:;
/* 1803da11c: jle 0x1803da129 */
L_1803da11c_0:;
L_1803da11c_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803da11c_2:;
wr(s->u,25,1,((rd(s->r,518,1)!=0)||(rd(s->u,24,1)!=0)));
L_1803da11c_3:;
if(rd(s->u,25,1)){return UINT64_C(0x1803da129);}
L_1803da11c_4:;
return UINT64_C(0x1803da11e);
}
uint64_t b_1803da11e(CPU*s){
/* 1803da11e: sub eax, edx */
L_1803da11e_0:;
L_1803da11e_1:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,16,4)));
L_1803da11e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,16,4),4,1));
L_1803da11e_3:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->r,16,4)));
L_1803da11e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da11e_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da11e_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da11e_7:;
wr(s->u,49,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da11e_8:;
wr(s->u,53,1,pop(rd(s->u,49,4),4));
L_1803da11e_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803da11e_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803da11e_11:;
/* 1803da120: add eax, r13d */
L_1803da120_0:;
L_1803da120_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,168,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803da120_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,168,4),4,0));
L_1803da120_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,168,4)));
L_1803da120_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da120_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da120_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da120_7:;
wr(s->u,49,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da120_8:;
wr(s->u,53,1,pop(rd(s->u,49,4),4));
L_1803da120_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803da120_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803da120_11:;
/* 1803da123: mov dword ptr [rbx + 0x350], eax */
L_1803da123_0:;
L_1803da123_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x350))));
L_1803da123_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803da123_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da123_4:;
/* 1803da129: mov r13, qword ptr [rsp + 0x228] */
L_1803da129_0:;
L_1803da129_1:;
wr(s->u,8,8,(((U)UINT64_C(0x228))+rd(s->r,32,8)));
L_1803da129_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da129_3:;
wr(s->r,168,8,rd(s->u,40,8));
L_1803da129_4:;
/* 1803da131: mov r8d, dword ptr [rbx + 0x344] */
L_1803da131_0:;
L_1803da131_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x344))));
L_1803da131_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da131_3:;
wr(s->r,128,4,rd(s->u,36,4));
L_1803da131_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803da131_5:;
/* 1803da138: movaps xmm12, xmmword ptr [rsp + 0x1b0] */
L_1803da138_0:;
L_1803da138_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1b0))+rd(s->r,32,8)));
L_1803da138_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da138_3:;
wr(s->u,63,16,rd(s->u,20,16));
L_1803da138_4:;
wr(s->r,5376,4,rd(s->u,63,4));
L_1803da138_5:;
wr(s->r,5380,4,rd(s->u,67,4));
L_1803da138_6:;
wr(s->r,5384,4,rd(s->u,71,4));
L_1803da138_7:;
wr(s->r,5388,4,rd(s->u,75,4));
L_1803da138_8:;
/* 1803da141: movaps xmm11, xmmword ptr [rsp + 0x1c0] */
L_1803da141_0:;
L_1803da141_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1c0))+rd(s->r,32,8)));
L_1803da141_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da141_3:;
wr(s->u,63,16,rd(s->u,20,16));
L_1803da141_4:;
wr(s->r,5312,4,rd(s->u,63,4));
L_1803da141_5:;
wr(s->r,5316,4,rd(s->u,67,4));
L_1803da141_6:;
wr(s->r,5320,4,rd(s->u,71,4));
L_1803da141_7:;
wr(s->r,5324,4,rd(s->u,75,4));
L_1803da141_8:;
/* 1803da14a: cmp dword ptr [rbx + 0x350], r8d */
L_1803da14a_0:;
L_1803da14a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x350))));
L_1803da14a_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da14a_3:;
wr(s->u,55,4,rd(s->u,36,4));
L_1803da14a_4:;
wr(s->r,512,1,(rd(s->u,55,4)<rd(s->r,128,4)));
L_1803da14a_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,55,4),rd(s->r,128,4),4,1));
L_1803da14a_6:;
wr(s->u,59,4,(rd(s->u,55,4)-rd(s->r,128,4)));
L_1803da14a_7:;
wr(s->r,519,1,(sx(rd(s->u,59,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da14a_8:;
wr(s->r,518,1,(rd(s->u,59,4)==((U)UINT64_C(0x0))));
L_1803da14a_9:;
wr(s->u,49,4,(rd(s->u,59,4)&((U)UINT64_C(0xff))));
L_1803da14a_10:;
wr(s->u,53,1,pop(rd(s->u,49,4),4));
L_1803da14a_11:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803da14a_12:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803da14a_13:;
/* 1803da151: mov r14, qword ptr [rsp + 0x220] */
L_1803da151_0:;
L_1803da151_1:;
wr(s->u,8,8,(((U)UINT64_C(0x220))+rd(s->r,32,8)));
L_1803da151_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da151_3:;
wr(s->r,176,8,rd(s->u,40,8));
L_1803da151_4:;
/* 1803da159: mov r12, qword ptr [rsp + 0x230] */
L_1803da159_0:;
L_1803da159_1:;
wr(s->u,8,8,(((U)UINT64_C(0x230))+rd(s->r,32,8)));
L_1803da159_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da159_3:;
wr(s->r,160,8,rd(s->u,40,8));
L_1803da159_4:;
/* 1803da161: movaps xmm10, xmmword ptr [rsp + 0x1d0] */
L_1803da161_0:;
L_1803da161_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1d0))+rd(s->r,32,8)));
L_1803da161_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da161_3:;
wr(s->u,63,16,rd(s->u,20,16));
L_1803da161_4:;
wr(s->r,5248,4,rd(s->u,63,4));
L_1803da161_5:;
wr(s->r,5252,4,rd(s->u,67,4));
L_1803da161_6:;
wr(s->r,5256,4,rd(s->u,71,4));
L_1803da161_7:;
wr(s->r,5260,4,rd(s->u,75,4));
L_1803da161_8:;
/* 1803da16a: movaps xmm9, xmmword ptr [rsp + 0x1e0] */
L_1803da16a_0:;
L_1803da16a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1e0))+rd(s->r,32,8)));
L_1803da16a_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da16a_3:;
wr(s->u,63,16,rd(s->u,20,16));
L_1803da16a_4:;
wr(s->r,5184,4,rd(s->u,63,4));
L_1803da16a_5:;
wr(s->r,5188,4,rd(s->u,67,4));
L_1803da16a_6:;
wr(s->r,5192,4,rd(s->u,71,4));
L_1803da16a_7:;
wr(s->r,5196,4,rd(s->u,75,4));
L_1803da16a_8:;
/* 1803da173: movaps xmm8, xmmword ptr [rsp + 0x1f0] */
L_1803da173_0:;
L_1803da173_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1f0))+rd(s->r,32,8)));
L_1803da173_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da173_3:;
wr(s->u,63,16,rd(s->u,20,16));
L_1803da173_4:;
wr(s->r,5120,4,rd(s->u,63,4));
L_1803da173_5:;
wr(s->r,5124,4,rd(s->u,67,4));
L_1803da173_6:;
wr(s->r,5128,4,rd(s->u,71,4));
L_1803da173_7:;
wr(s->r,5132,4,rd(s->u,75,4));
L_1803da173_8:;
/* 1803da17c: mov rdi, qword ptr [rsp + 0x260] */
L_1803da17c_0:;
L_1803da17c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x260))+rd(s->r,32,8)));
L_1803da17c_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da17c_3:;
wr(s->r,56,8,rd(s->u,40,8));
L_1803da17c_4:;
/* 1803da184: mov rsi, qword ptr [rsp + 0x258] */
L_1803da184_0:;
L_1803da184_1:;
wr(s->u,8,8,(((U)UINT64_C(0x258))+rd(s->r,32,8)));
L_1803da184_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da184_3:;
wr(s->r,48,8,rd(s->u,40,8));
L_1803da184_4:;
/* 1803da18c: mov rbp, qword ptr [rsp + 0x250] */
L_1803da18c_0:;
L_1803da18c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x250))+rd(s->r,32,8)));
L_1803da18c_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da18c_3:;
wr(s->r,40,8,rd(s->u,40,8));
L_1803da18c_4:;
/* 1803da194: movaps xmm7, xmmword ptr [rsp + 0x200] */
L_1803da194_0:;
L_1803da194_1:;
wr(s->u,8,8,(((U)UINT64_C(0x200))+rd(s->r,32,8)));
L_1803da194_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da194_3:;
wr(s->u,63,16,rd(s->u,20,16));
L_1803da194_4:;
wr(s->r,5056,4,rd(s->u,63,4));
L_1803da194_5:;
wr(s->r,5060,4,rd(s->u,67,4));
L_1803da194_6:;
wr(s->r,5064,4,rd(s->u,71,4));
L_1803da194_7:;
wr(s->r,5068,4,rd(s->u,75,4));
L_1803da194_8:;
/* 1803da19c: movaps xmm6, xmmword ptr [rsp + 0x210] */
L_1803da19c_0:;
L_1803da19c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x210))+rd(s->r,32,8)));
L_1803da19c_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da19c_3:;
wr(s->u,63,16,rd(s->u,20,16));
L_1803da19c_4:;
wr(s->r,4992,4,rd(s->u,63,4));
L_1803da19c_5:;
wr(s->r,4996,4,rd(s->u,67,4));
L_1803da19c_6:;
wr(s->r,5000,4,rd(s->u,71,4));
L_1803da19c_7:;
wr(s->r,5004,4,rd(s->u,75,4));
L_1803da19c_8:;
/* 1803da1a4: jl 0x1803da1be */
L_1803da1a4_0:;
L_1803da1a4_1:;
wr(s->u,48,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803da1a4_2:;
if(rd(s->u,48,1)){return UINT64_C(0x1803da1be);}
L_1803da1a4_3:;
return UINT64_C(0x1803da1a6);
}
uint64_t b_1803da129(CPU*s){
/* 1803da129: mov r13, qword ptr [rsp + 0x228] */
L_1803da129_0:;
L_1803da129_1:;
wr(s->u,8,8,(((U)UINT64_C(0x228))+rd(s->r,32,8)));
L_1803da129_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da129_3:;
wr(s->r,168,8,rd(s->u,36,8));
L_1803da129_4:;
/* 1803da131: mov r8d, dword ptr [rbx + 0x344] */
L_1803da131_0:;
L_1803da131_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x344))));
L_1803da131_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da131_3:;
wr(s->r,128,4,rd(s->u,32,4));
L_1803da131_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803da131_5:;
/* 1803da138: movaps xmm12, xmmword ptr [rsp + 0x1b0] */
L_1803da138_0:;
L_1803da138_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1b0))+rd(s->r,32,8)));
L_1803da138_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da138_3:;
wr(s->u,59,16,rd(s->u,16,16));
L_1803da138_4:;
wr(s->r,5376,4,rd(s->u,59,4));
L_1803da138_5:;
wr(s->r,5380,4,rd(s->u,63,4));
L_1803da138_6:;
wr(s->r,5384,4,rd(s->u,67,4));
L_1803da138_7:;
wr(s->r,5388,4,rd(s->u,71,4));
L_1803da138_8:;
/* 1803da141: movaps xmm11, xmmword ptr [rsp + 0x1c0] */
L_1803da141_0:;
L_1803da141_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1c0))+rd(s->r,32,8)));
L_1803da141_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da141_3:;
wr(s->u,59,16,rd(s->u,16,16));
L_1803da141_4:;
wr(s->r,5312,4,rd(s->u,59,4));
L_1803da141_5:;
wr(s->r,5316,4,rd(s->u,63,4));
L_1803da141_6:;
wr(s->r,5320,4,rd(s->u,67,4));
L_1803da141_7:;
wr(s->r,5324,4,rd(s->u,71,4));
L_1803da141_8:;
/* 1803da14a: cmp dword ptr [rbx + 0x350], r8d */
L_1803da14a_0:;
L_1803da14a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x350))));
L_1803da14a_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da14a_3:;
wr(s->u,51,4,rd(s->u,32,4));
L_1803da14a_4:;
wr(s->r,512,1,(rd(s->u,51,4)<rd(s->r,128,4)));
L_1803da14a_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,51,4),rd(s->r,128,4),4,1));
L_1803da14a_6:;
wr(s->u,55,4,(rd(s->u,51,4)-rd(s->r,128,4)));
L_1803da14a_7:;
wr(s->r,519,1,(sx(rd(s->u,55,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da14a_8:;
wr(s->r,518,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803da14a_9:;
wr(s->u,45,4,(rd(s->u,55,4)&((U)UINT64_C(0xff))));
L_1803da14a_10:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803da14a_11:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803da14a_12:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803da14a_13:;
/* 1803da151: mov r14, qword ptr [rsp + 0x220] */
L_1803da151_0:;
L_1803da151_1:;
wr(s->u,8,8,(((U)UINT64_C(0x220))+rd(s->r,32,8)));
L_1803da151_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da151_3:;
wr(s->r,176,8,rd(s->u,36,8));
L_1803da151_4:;
/* 1803da159: mov r12, qword ptr [rsp + 0x230] */
L_1803da159_0:;
L_1803da159_1:;
wr(s->u,8,8,(((U)UINT64_C(0x230))+rd(s->r,32,8)));
L_1803da159_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da159_3:;
wr(s->r,160,8,rd(s->u,36,8));
L_1803da159_4:;
/* 1803da161: movaps xmm10, xmmword ptr [rsp + 0x1d0] */
L_1803da161_0:;
L_1803da161_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1d0))+rd(s->r,32,8)));
L_1803da161_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da161_3:;
wr(s->u,59,16,rd(s->u,16,16));
L_1803da161_4:;
wr(s->r,5248,4,rd(s->u,59,4));
L_1803da161_5:;
wr(s->r,5252,4,rd(s->u,63,4));
L_1803da161_6:;
wr(s->r,5256,4,rd(s->u,67,4));
L_1803da161_7:;
wr(s->r,5260,4,rd(s->u,71,4));
L_1803da161_8:;
/* 1803da16a: movaps xmm9, xmmword ptr [rsp + 0x1e0] */
L_1803da16a_0:;
L_1803da16a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1e0))+rd(s->r,32,8)));
L_1803da16a_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da16a_3:;
wr(s->u,59,16,rd(s->u,16,16));
L_1803da16a_4:;
wr(s->r,5184,4,rd(s->u,59,4));
L_1803da16a_5:;
wr(s->r,5188,4,rd(s->u,63,4));
L_1803da16a_6:;
wr(s->r,5192,4,rd(s->u,67,4));
L_1803da16a_7:;
wr(s->r,5196,4,rd(s->u,71,4));
L_1803da16a_8:;
/* 1803da173: movaps xmm8, xmmword ptr [rsp + 0x1f0] */
L_1803da173_0:;
L_1803da173_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1f0))+rd(s->r,32,8)));
L_1803da173_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da173_3:;
wr(s->u,59,16,rd(s->u,16,16));
L_1803da173_4:;
wr(s->r,5120,4,rd(s->u,59,4));
L_1803da173_5:;
wr(s->r,5124,4,rd(s->u,63,4));
L_1803da173_6:;
wr(s->r,5128,4,rd(s->u,67,4));
L_1803da173_7:;
wr(s->r,5132,4,rd(s->u,71,4));
L_1803da173_8:;
/* 1803da17c: mov rdi, qword ptr [rsp + 0x260] */
L_1803da17c_0:;
L_1803da17c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x260))+rd(s->r,32,8)));
L_1803da17c_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da17c_3:;
wr(s->r,56,8,rd(s->u,36,8));
L_1803da17c_4:;
/* 1803da184: mov rsi, qword ptr [rsp + 0x258] */
L_1803da184_0:;
L_1803da184_1:;
wr(s->u,8,8,(((U)UINT64_C(0x258))+rd(s->r,32,8)));
L_1803da184_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da184_3:;
wr(s->r,48,8,rd(s->u,36,8));
L_1803da184_4:;
/* 1803da18c: mov rbp, qword ptr [rsp + 0x250] */
L_1803da18c_0:;
L_1803da18c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x250))+rd(s->r,32,8)));
L_1803da18c_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da18c_3:;
wr(s->r,40,8,rd(s->u,36,8));
L_1803da18c_4:;
/* 1803da194: movaps xmm7, xmmword ptr [rsp + 0x200] */
L_1803da194_0:;
L_1803da194_1:;
wr(s->u,8,8,(((U)UINT64_C(0x200))+rd(s->r,32,8)));
L_1803da194_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da194_3:;
wr(s->u,59,16,rd(s->u,16,16));
L_1803da194_4:;
wr(s->r,5056,4,rd(s->u,59,4));
L_1803da194_5:;
wr(s->r,5060,4,rd(s->u,63,4));
L_1803da194_6:;
wr(s->r,5064,4,rd(s->u,67,4));
L_1803da194_7:;
wr(s->r,5068,4,rd(s->u,71,4));
L_1803da194_8:;
/* 1803da19c: movaps xmm6, xmmword ptr [rsp + 0x210] */
L_1803da19c_0:;
L_1803da19c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x210))+rd(s->r,32,8)));
L_1803da19c_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da19c_3:;
wr(s->u,59,16,rd(s->u,16,16));
L_1803da19c_4:;
wr(s->r,4992,4,rd(s->u,59,4));
L_1803da19c_5:;
wr(s->r,4996,4,rd(s->u,63,4));
L_1803da19c_6:;
wr(s->r,5000,4,rd(s->u,67,4));
L_1803da19c_7:;
wr(s->r,5004,4,rd(s->u,71,4));
L_1803da19c_8:;
/* 1803da1a4: jl 0x1803da1be */
L_1803da1a4_0:;
L_1803da1a4_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803da1a4_2:;
if(rd(s->u,44,1)){return UINT64_C(0x1803da1be);}
L_1803da1a4_3:;
return UINT64_C(0x1803da1a6);
}
uint64_t b_1803da131(CPU*s){
/* 1803da131: mov r8d, dword ptr [rbx + 0x344] */
L_1803da131_0:;
L_1803da131_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x344))));
L_1803da131_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da131_3:;
wr(s->r,128,4,rd(s->u,32,4));
L_1803da131_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803da131_5:;
/* 1803da138: movaps xmm12, xmmword ptr [rsp + 0x1b0] */
L_1803da138_0:;
L_1803da138_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1b0))+rd(s->r,32,8)));
L_1803da138_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da138_3:;
wr(s->u,59,16,rd(s->u,16,16));
L_1803da138_4:;
wr(s->r,5376,4,rd(s->u,59,4));
L_1803da138_5:;
wr(s->r,5380,4,rd(s->u,63,4));
L_1803da138_6:;
wr(s->r,5384,4,rd(s->u,67,4));
L_1803da138_7:;
wr(s->r,5388,4,rd(s->u,71,4));
L_1803da138_8:;
/* 1803da141: movaps xmm11, xmmword ptr [rsp + 0x1c0] */
L_1803da141_0:;
L_1803da141_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1c0))+rd(s->r,32,8)));
L_1803da141_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da141_3:;
wr(s->u,59,16,rd(s->u,16,16));
L_1803da141_4:;
wr(s->r,5312,4,rd(s->u,59,4));
L_1803da141_5:;
wr(s->r,5316,4,rd(s->u,63,4));
L_1803da141_6:;
wr(s->r,5320,4,rd(s->u,67,4));
L_1803da141_7:;
wr(s->r,5324,4,rd(s->u,71,4));
L_1803da141_8:;
/* 1803da14a: cmp dword ptr [rbx + 0x350], r8d */
L_1803da14a_0:;
L_1803da14a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x350))));
L_1803da14a_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da14a_3:;
wr(s->u,51,4,rd(s->u,32,4));
L_1803da14a_4:;
wr(s->r,512,1,(rd(s->u,51,4)<rd(s->r,128,4)));
L_1803da14a_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,51,4),rd(s->r,128,4),4,1));
L_1803da14a_6:;
wr(s->u,55,4,(rd(s->u,51,4)-rd(s->r,128,4)));
L_1803da14a_7:;
wr(s->r,519,1,(sx(rd(s->u,55,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da14a_8:;
wr(s->r,518,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803da14a_9:;
wr(s->u,45,4,(rd(s->u,55,4)&((U)UINT64_C(0xff))));
L_1803da14a_10:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803da14a_11:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803da14a_12:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803da14a_13:;
/* 1803da151: mov r14, qword ptr [rsp + 0x220] */
L_1803da151_0:;
L_1803da151_1:;
wr(s->u,8,8,(((U)UINT64_C(0x220))+rd(s->r,32,8)));
L_1803da151_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da151_3:;
wr(s->r,176,8,rd(s->u,36,8));
L_1803da151_4:;
/* 1803da159: mov r12, qword ptr [rsp + 0x230] */
L_1803da159_0:;
L_1803da159_1:;
wr(s->u,8,8,(((U)UINT64_C(0x230))+rd(s->r,32,8)));
L_1803da159_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da159_3:;
wr(s->r,160,8,rd(s->u,36,8));
L_1803da159_4:;
/* 1803da161: movaps xmm10, xmmword ptr [rsp + 0x1d0] */
L_1803da161_0:;
L_1803da161_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1d0))+rd(s->r,32,8)));
L_1803da161_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da161_3:;
wr(s->u,59,16,rd(s->u,16,16));
L_1803da161_4:;
wr(s->r,5248,4,rd(s->u,59,4));
L_1803da161_5:;
wr(s->r,5252,4,rd(s->u,63,4));
L_1803da161_6:;
wr(s->r,5256,4,rd(s->u,67,4));
L_1803da161_7:;
wr(s->r,5260,4,rd(s->u,71,4));
L_1803da161_8:;
/* 1803da16a: movaps xmm9, xmmword ptr [rsp + 0x1e0] */
L_1803da16a_0:;
L_1803da16a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1e0))+rd(s->r,32,8)));
L_1803da16a_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da16a_3:;
wr(s->u,59,16,rd(s->u,16,16));
L_1803da16a_4:;
wr(s->r,5184,4,rd(s->u,59,4));
L_1803da16a_5:;
wr(s->r,5188,4,rd(s->u,63,4));
L_1803da16a_6:;
wr(s->r,5192,4,rd(s->u,67,4));
L_1803da16a_7:;
wr(s->r,5196,4,rd(s->u,71,4));
L_1803da16a_8:;
/* 1803da173: movaps xmm8, xmmword ptr [rsp + 0x1f0] */
L_1803da173_0:;
L_1803da173_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1f0))+rd(s->r,32,8)));
L_1803da173_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da173_3:;
wr(s->u,59,16,rd(s->u,16,16));
L_1803da173_4:;
wr(s->r,5120,4,rd(s->u,59,4));
L_1803da173_5:;
wr(s->r,5124,4,rd(s->u,63,4));
L_1803da173_6:;
wr(s->r,5128,4,rd(s->u,67,4));
L_1803da173_7:;
wr(s->r,5132,4,rd(s->u,71,4));
L_1803da173_8:;
/* 1803da17c: mov rdi, qword ptr [rsp + 0x260] */
L_1803da17c_0:;
L_1803da17c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x260))+rd(s->r,32,8)));
L_1803da17c_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da17c_3:;
wr(s->r,56,8,rd(s->u,36,8));
L_1803da17c_4:;
/* 1803da184: mov rsi, qword ptr [rsp + 0x258] */
L_1803da184_0:;
L_1803da184_1:;
wr(s->u,8,8,(((U)UINT64_C(0x258))+rd(s->r,32,8)));
L_1803da184_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da184_3:;
wr(s->r,48,8,rd(s->u,36,8));
L_1803da184_4:;
/* 1803da18c: mov rbp, qword ptr [rsp + 0x250] */
L_1803da18c_0:;
L_1803da18c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x250))+rd(s->r,32,8)));
L_1803da18c_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da18c_3:;
wr(s->r,40,8,rd(s->u,36,8));
L_1803da18c_4:;
/* 1803da194: movaps xmm7, xmmword ptr [rsp + 0x200] */
L_1803da194_0:;
L_1803da194_1:;
wr(s->u,8,8,(((U)UINT64_C(0x200))+rd(s->r,32,8)));
L_1803da194_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da194_3:;
wr(s->u,59,16,rd(s->u,16,16));
L_1803da194_4:;
wr(s->r,5056,4,rd(s->u,59,4));
L_1803da194_5:;
wr(s->r,5060,4,rd(s->u,63,4));
L_1803da194_6:;
wr(s->r,5064,4,rd(s->u,67,4));
L_1803da194_7:;
wr(s->r,5068,4,rd(s->u,71,4));
L_1803da194_8:;
/* 1803da19c: movaps xmm6, xmmword ptr [rsp + 0x210] */
L_1803da19c_0:;
L_1803da19c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x210))+rd(s->r,32,8)));
L_1803da19c_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da19c_3:;
wr(s->u,59,16,rd(s->u,16,16));
L_1803da19c_4:;
wr(s->r,4992,4,rd(s->u,59,4));
L_1803da19c_5:;
wr(s->r,4996,4,rd(s->u,63,4));
L_1803da19c_6:;
wr(s->r,5000,4,rd(s->u,67,4));
L_1803da19c_7:;
wr(s->r,5004,4,rd(s->u,71,4));
L_1803da19c_8:;
/* 1803da1a4: jl 0x1803da1be */
L_1803da1a4_0:;
L_1803da1a4_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803da1a4_2:;
if(rd(s->u,44,1)){return UINT64_C(0x1803da1be);}
L_1803da1a4_3:;
return UINT64_C(0x1803da1a6);
}
uint64_t b_1803da1a6(CPU*s){
/* 1803da1a6: mov rdx, r15 */
L_1803da1a6_0:;
L_1803da1a6_1:;
wr(s->r,16,8,rd(s->r,184,8));
L_1803da1a6_2:;
/* 1803da1a9: mov rcx, rbx */
L_1803da1a9_0:;
L_1803da1a9_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803da1a9_2:;
/* 1803da1ac: call 0x1803d9370 */
L_1803da1ac_0:;
L_1803da1ac_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da1ac_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da1b1)));
L_1803da1ac_3:;
return (uint64_t)UINT64_C(0x1803d9370);
L_1803da1ac_4:;
return UINT64_C(0x1803da1b1);
}
uint64_t b_1803da1b1(CPU*s){
/* 1803da1b1: xor eax, eax */
L_1803da1b1_0:;
L_1803da1b1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da1b1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da1b1_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803da1b1_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da1b1_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da1b1_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da1b1_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da1b1_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803da1b1_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803da1b1_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803da1b1_11:;
/* 1803da1b3: add rsp, 0x238 */
L_1803da1b3_0:;
L_1803da1b3_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x238)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803da1b3_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x238)),8,0));
L_1803da1b3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x238))));
L_1803da1b3_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da1b3_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da1b3_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da1b3_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803da1b3_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803da1b3_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803da1b3_10:;
/* 1803da1ba: pop r15 */
L_1803da1ba_0:;
L_1803da1ba_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803da1ba_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da1ba_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da1ba_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803da1ba_5:;
/* 1803da1bc: pop rbx */
L_1803da1bc_0:;
L_1803da1bc_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803da1bc_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da1bc_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da1bc_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803da1bc_5:;
/* 1803da1bd: ret  */
L_1803da1bd_0:;
L_1803da1bd_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da1bd_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da1bd_3:;
return (uint64_t)rd(s->r,648,8);
L_1803da1bd_4:;
return UINT64_C(0x1803da1be);
}
uint64_t b_1803da1be(CPU*s){
/* 1803da1be: or eax, 0xffffffff */
L_1803da1be_0:;
L_1803da1be_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da1be_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da1be_3:;
wr(s->r,0,4,(rd(s->r,0,4)|((U)UINT64_C(0xffffffff))));
L_1803da1be_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da1be_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da1be_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da1be_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da1be_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803da1be_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803da1be_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803da1be_11:;
/* 1803da1c1: add rsp, 0x238 */
L_1803da1c1_0:;
L_1803da1c1_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x238)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803da1c1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x238)),8,0));
L_1803da1c1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x238))));
L_1803da1c1_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da1c1_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da1c1_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da1c1_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803da1c1_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803da1c1_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803da1c1_10:;
/* 1803da1c8: pop r15 */
L_1803da1c8_0:;
L_1803da1c8_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803da1c8_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da1c8_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da1c8_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803da1c8_5:;
/* 1803da1ca: pop rbx */
L_1803da1ca_0:;
L_1803da1ca_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803da1ca_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da1ca_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da1ca_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803da1ca_5:;
/* 1803da1cb: ret  */
L_1803da1cb_0:;
L_1803da1cb_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da1cb_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da1cb_3:;
return (uint64_t)rd(s->r,648,8);
L_1803da1cb_4:;
return UINT64_C(0x1803da1cc);
}
uint64_t b_1803da1d0(CPU*s){
/* 1803da1d0: mov qword ptr [rsp + 0x10], rsi */
L_1803da1d0_0:;
L_1803da1d0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803da1d0_2:;
wr(s->u,16,8,rd(s->r,48,8));
L_1803da1d0_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803da1d0_4:;
/* 1803da1d5: push rdi */
L_1803da1d5_0:;
L_1803da1d5_1:;
wr(s->u,32,8,rd(s->r,56,8));
L_1803da1d5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da1d5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,32,8));
L_1803da1d5_4:;
/* 1803da1d6: sub rsp, 0x20 */
L_1803da1d6_0:;
L_1803da1d6_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803da1d6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803da1d6_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803da1d6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da1d6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da1d6_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da1d6_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803da1d6_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803da1d6_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803da1d6_10:;
/* 1803da1da: mov rax, qword ptr [rcx] */
L_1803da1da_0:;
L_1803da1da_1:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803da1da_2:;
wr(s->r,0,8,rd(s->u,24,8));
L_1803da1da_3:;
/* 1803da1dd: mov rsi, rdx */
L_1803da1dd_0:;
L_1803da1dd_1:;
wr(s->r,48,8,rd(s->r,16,8));
L_1803da1dd_2:;
/* 1803da1e0: mov rdi, rcx */
L_1803da1e0_0:;
L_1803da1e0_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803da1e0_2:;
/* 1803da1e3: call qword ptr [rax + 0x10] */
L_1803da1e3_0:;
L_1803da1e3_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803da1e3_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da1e3_3:;
wr(s->u,50,8,rd(s->u,24,8));
L_1803da1e3_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da1e3_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da1e6)));
L_1803da1e3_6:;
return (uint64_t)rd(s->u,50,8);
L_1803da1e3_7:;
return UINT64_C(0x1803da1e6);
}
uint64_t b_1803da1e6(CPU*s){
/* 1803da1e6: mov r11, qword ptr [rdi] */
L_1803da1e6_0:;
L_1803da1e6_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803da1e6_2:;
wr(s->r,152,8,rd(s->u,8,8));
L_1803da1e6_3:;
/* 1803da1e9: mov r9, rsi */
L_1803da1e9_0:;
L_1803da1e9_1:;
wr(s->r,136,8,rd(s->r,48,8));
L_1803da1e9_2:;
/* 1803da1ec: xor r8d, r8d */
L_1803da1ec_0:;
L_1803da1ec_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da1ec_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da1ec_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1803da1ec_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803da1ec_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da1ec_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803da1ec_7:;
wr(s->u,16,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803da1ec_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803da1ec_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803da1ec_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803da1ec_11:;
/* 1803da1ef: xor edx, edx */
L_1803da1ef_0:;
L_1803da1ef_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da1ef_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da1ef_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803da1ef_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803da1ef_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da1ef_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803da1ef_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803da1ef_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803da1ef_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803da1ef_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803da1ef_11:;
/* 1803da1f1: mov rcx, rdi */
L_1803da1f1_0:;
L_1803da1f1_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803da1f1_2:;
/* 1803da1f4: call qword ptr [r11 + 8] */
L_1803da1f4_0:;
L_1803da1f4_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x8))));
L_1803da1f4_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da1f4_3:;
wr(s->u,22,8,rd(s->u,8,8));
L_1803da1f4_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da1f4_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da1f8)));
L_1803da1f4_6:;
return (uint64_t)rd(s->u,22,8);
L_1803da1f4_7:;
return UINT64_C(0x1803da1f8);
}
uint64_t b_1803da1f8(CPU*s){
/* 1803da1f8: cmp eax, -1 */
L_1803da1f8_0:;
L_1803da1f8_1:;
wr(s->u,6,4,rd(s->r,0,4));
L_1803da1f8_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0xffffffff))));
L_1803da1f8_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0xffffffff)),4,1));
L_1803da1f8_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0xffffffff))));
L_1803da1f8_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da1f8_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803da1f8_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803da1f8_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803da1f8_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803da1f8_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803da1f8_11:;
/* 1803da1fb: je 0x1803da20e */
L_1803da1fb_0:;
L_1803da1fb_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803da20e);}
L_1803da1fb_2:;
return UINT64_C(0x1803da1fd);
}
uint64_t b_1803da1fd(CPU*s){
/* 1803da1fd: mov eax, dword ptr [rdi + 0x344] */
L_1803da1fd_0:;
L_1803da1fd_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x344))));
L_1803da1fd_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da1fd_3:;
wr(s->r,0,4,rd(s->u,16,4));
L_1803da1fd_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da1fd_5:;
/* 1803da203: mov rsi, qword ptr [rsp + 0x38] */
L_1803da203_0:;
L_1803da203_1:;
wr(s->u,8,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803da203_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da203_3:;
wr(s->r,48,8,rd(s->u,20,8));
L_1803da203_4:;
/* 1803da208: add rsp, 0x20 */
L_1803da208_0:;
L_1803da208_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803da208_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803da208_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803da208_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da208_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da208_6:;
wr(s->u,28,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da208_7:;
wr(s->u,36,1,pop(rd(s->u,28,8),8));
L_1803da208_8:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803da208_9:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803da208_10:;
/* 1803da20c: pop rdi */
L_1803da20c_0:;
L_1803da20c_1:;
wr(s->u,38,8,((U)UINT64_C(0x0)));
L_1803da20c_2:;
wr(s->u,38,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da20c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da20c_4:;
wr(s->r,56,8,rd(s->u,38,8));
L_1803da20c_5:;
/* 1803da20d: ret  */
L_1803da20d_0:;
L_1803da20d_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da20d_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da20d_3:;
return (uint64_t)rd(s->r,648,8);
L_1803da20d_4:;
return UINT64_C(0x1803da20e);
}
uint64_t b_1803da20e(CPU*s){
/* 1803da20e: mov eax, dword ptr [rdi + 0x350] */
L_1803da20e_0:;
L_1803da20e_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x350))));
L_1803da20e_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da20e_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803da20e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da20e_5:;
/* 1803da214: cmp eax, dword ptr [rdi + 0x344] */
L_1803da214_0:;
L_1803da214_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x344))));
L_1803da214_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da214_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803da214_4:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,23,4)));
L_1803da214_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,23,4),4,1));
L_1803da214_6:;
wr(s->u,27,4,(rd(s->r,0,4)-rd(s->u,23,4)));
L_1803da214_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da214_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803da214_9:;
wr(s->u,17,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803da214_10:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803da214_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803da214_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803da214_13:;
/* 1803da21a: jge 0x1803da247 */
L_1803da21a_0:;
L_1803da21a_1:;
wr(s->u,16,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803da21a_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803da247);}
L_1803da21a_3:;
return UINT64_C(0x1803da21c);
}
uint64_t b_1803da21c(CPU*s){
/* 1803da21c: test eax, eax */
L_1803da21c_0:;
L_1803da21c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da21c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da21c_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803da21c_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da21c_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803da21c_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803da21c_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803da21c_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803da21c_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803da21c_10:;
/* 1803da21e: js 0x1803da247 */
L_1803da21e_0:;
L_1803da21e_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803da247);}
L_1803da21e_2:;
return UINT64_C(0x1803da220);
}
uint64_t b_1803da220(CPU*s){
/* 1803da220: mov r8d, eax */
L_1803da220_0:;
L_1803da220_1:;
wr(s->r,128,4,rd(s->r,0,4));
L_1803da220_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803da220_3:;
/* 1803da223: mov rdx, rsi */
L_1803da223_0:;
L_1803da223_1:;
wr(s->r,16,8,rd(s->r,48,8));
L_1803da223_2:;
/* 1803da226: mov rcx, rdi */
L_1803da226_0:;
L_1803da226_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803da226_2:;
/* 1803da229: mov qword ptr [rsp + 0x30], rbx */
L_1803da229_0:;
L_1803da229_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803da229_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803da229_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803da229_4:;
/* 1803da22e: mov ebx, eax */
L_1803da22e_0:;
L_1803da22e_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803da22e_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803da22e_3:;
/* 1803da230: call 0x1803d9370 */
L_1803da230_0:;
L_1803da230_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da230_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da235)));
L_1803da230_3:;
return (uint64_t)UINT64_C(0x1803d9370);
L_1803da230_4:;
return UINT64_C(0x1803da235);
}
uint64_t b_1803da229(CPU*s){
/* 1803da229: mov qword ptr [rsp + 0x30], rbx */
L_1803da229_0:;
L_1803da229_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803da229_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803da229_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803da229_4:;
/* 1803da22e: mov ebx, eax */
L_1803da22e_0:;
L_1803da22e_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803da22e_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803da22e_3:;
/* 1803da230: call 0x1803d9370 */
L_1803da230_0:;
L_1803da230_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da230_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da235)));
L_1803da230_3:;
return (uint64_t)UINT64_C(0x1803d9370);
L_1803da230_4:;
return UINT64_C(0x1803da235);
}
uint64_t b_1803da235(CPU*s){
/* 1803da235: mov eax, ebx */
L_1803da235_0:;
L_1803da235_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803da235_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da235_3:;
/* 1803da237: mov rbx, qword ptr [rsp + 0x30] */
L_1803da237_0:;
L_1803da237_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803da237_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da237_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803da237_4:;
/* 1803da23c: mov rsi, qword ptr [rsp + 0x38] */
L_1803da23c_0:;
L_1803da23c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803da23c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da23c_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803da23c_4:;
/* 1803da241: add rsp, 0x20 */
L_1803da241_0:;
L_1803da241_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803da241_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803da241_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803da241_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da241_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da241_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da241_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803da241_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803da241_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803da241_10:;
/* 1803da245: pop rdi */
L_1803da245_0:;
L_1803da245_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803da245_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da245_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da245_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803da245_5:;
/* 1803da246: ret  */
L_1803da246_0:;
L_1803da246_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da246_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da246_3:;
return (uint64_t)rd(s->r,648,8);
L_1803da246_4:;
return UINT64_C(0x1803da247);
}
uint64_t b_1803da247(CPU*s){
/* 1803da247: or eax, 0xffffffff */
L_1803da247_0:;
L_1803da247_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da247_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da247_3:;
wr(s->r,0,4,(rd(s->r,0,4)|((U)UINT64_C(0xffffffff))));
L_1803da247_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da247_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da247_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da247_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da247_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803da247_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803da247_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803da247_11:;
/* 1803da24a: mov rsi, qword ptr [rsp + 0x38] */
L_1803da24a_0:;
L_1803da24a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803da24a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da24a_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803da24a_4:;
/* 1803da24f: add rsp, 0x20 */
L_1803da24f_0:;
L_1803da24f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803da24f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803da24f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803da24f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da24f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da24f_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da24f_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803da24f_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803da24f_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803da24f_10:;
/* 1803da253: pop rdi */
L_1803da253_0:;
L_1803da253_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803da253_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da253_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da253_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803da253_5:;
/* 1803da254: ret  */
L_1803da254_0:;
L_1803da254_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da254_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da254_3:;
return (uint64_t)rd(s->r,648,8);
L_1803da254_4:;
return UINT64_C(0x1803da255);
}
uint64_t b_1803da260(CPU*s){
/* 1803da260: mov qword ptr [rsp + 8], rbx */
L_1803da260_0:;
L_1803da260_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803da260_2:;
wr(s->u,12,8,rd(s->r,24,8));
L_1803da260_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803da260_4:;
/* 1803da265: mov qword ptr [rsp + 0x10], rsi */
L_1803da265_0:;
L_1803da265_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803da265_2:;
wr(s->u,12,8,rd(s->r,48,8));
L_1803da265_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803da265_4:;
/* 1803da26a: push rdi */
L_1803da26a_0:;
L_1803da26a_1:;
wr(s->u,20,8,rd(s->r,56,8));
L_1803da26a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da26a_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,20,8));
L_1803da26a_4:;
/* 1803da26b: sub rsp, 0x50 */
L_1803da26b_0:;
L_1803da26b_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x50))));
L_1803da26b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,1));
L_1803da26b_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x50))));
L_1803da26b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da26b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da26b_6:;
wr(s->u,28,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da26b_7:;
wr(s->u,36,1,pop(rd(s->u,28,8),8));
L_1803da26b_8:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803da26b_9:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803da26b_10:;
/* 1803da26f: movaps xmm0, xmm2 */
L_1803da26f_0:;
L_1803da26f_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803da26f_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803da26f_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803da26f_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803da26f_5:;
/* 1803da272: movzx esi, r9b */
L_1803da272_0:;
L_1803da272_1:;
wr(s->r,48,4,rd(s->r,136,1));
L_1803da272_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803da272_3:;
/* 1803da276: mov rdi, rdx */
L_1803da276_0:;
L_1803da276_1:;
wr(s->r,56,8,rd(s->r,16,8));
L_1803da276_2:;
/* 1803da279: mov rbx, rcx */
L_1803da279_0:;
L_1803da279_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803da279_2:;
/* 1803da27c: mulss xmm0, dword ptr [rdx] */
L_1803da27c_0:;
L_1803da27c_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803da27c_2:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,8,4),4),4));
L_1803da27c_3:;
/* 1803da280: comiss xmm0, dword ptr [rip + 0x27867d] */
L_1803da280_0:;
L_1803da280_1:;
wr(s->u,38,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803da280_2:;
wr(s->u,39,1,isnan(fv(mr(UINT64_C(0x180652904),4),4)));
L_1803da280_3:;
wr(s->r,514,1,((rd(s->u,38,1)!=0)||(rd(s->u,39,1)!=0)));
L_1803da280_4:;
wr(s->u,40,1,(fv(rd(s->r,4608,4),4)==fv(mr(UINT64_C(0x180652904),4),4)));
L_1803da280_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,40,1)));
L_1803da280_6:;
wr(s->u,41,1,(fv(rd(s->r,4608,4),4)<fv(mr(UINT64_C(0x180652904),4),4)));
L_1803da280_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,41,1)));
L_1803da280_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da280_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da280_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da280_11:;
/* 1803da287: jb 0x1803da568 */
L_1803da287_0:;
L_1803da287_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803da568);}
L_1803da287_2:;
return UINT64_C(0x1803da28d);
}
uint64_t b_1803da28d(CPU*s){
/* 1803da28d: comiss xmm0, dword ptr [rip + 0x28b548] */
L_1803da28d_0:;
L_1803da28d_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803da28d_2:;
wr(s->u,3,1,isnan(fv(mr(UINT64_C(0x1806657dc),4),4)));
L_1803da28d_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803da28d_4:;
wr(s->u,4,1,(fv(rd(s->r,4608,4),4)==fv(mr(UINT64_C(0x1806657dc),4),4)));
L_1803da28d_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803da28d_6:;
wr(s->u,5,1,(fv(rd(s->r,4608,4),4)<fv(mr(UINT64_C(0x1806657dc),4),4)));
L_1803da28d_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803da28d_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da28d_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da28d_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da28d_11:;
/* 1803da294: ja 0x1803da568 */
L_1803da294_0:;
L_1803da294_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803da294_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803da294_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803da568);}
L_1803da294_4:;
return UINT64_C(0x1803da29a);
}
uint64_t b_1803da29a(CPU*s){
/* 1803da29a: movd xmm0, dword ptr [rcx + 0x368] */
L_1803da29a_0:;
L_1803da29a_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x368))));
L_1803da29a_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da29a_3:;
wr(s->r,4608,16,rd(s->u,36,4));
L_1803da29a_4:;
/* 1803da2a2: movaps xmmword ptr [rsp + 0x40], xmm7 */
L_1803da2a2_0:;
L_1803da2a2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803da2a2_2:;
wr(s->u,20,16,rd(s->r,5056,16));
L_1803da2a2_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803da2a2_4:;
/* 1803da2a7: movss xmm7, dword ptr [rip + 0x272995] */
L_1803da2a7_0:;
L_1803da2a7_1:;
wr(s->r,5056,4,mr(UINT64_C(0x18064cc44),4));
L_1803da2a7_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803da2a7_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803da2a7_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803da2a7_5:;
/* 1803da2af: movss dword ptr [rcx + 0x318], xmm2 */
L_1803da2af_0:;
L_1803da2af_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x318))));
L_1803da2af_2:;
wr(s->u,16,4,rd(s->r,4736,4));
L_1803da2af_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da2af_4:;
/* 1803da2b7: cvtdq2ps xmm0, xmm0 */
L_1803da2b7_0:;
L_1803da2b7_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803da2b7_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803da2b7_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803da2b7_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803da2b7_5:;
/* 1803da2ba: movaps xmmword ptr [rsp + 0x30], xmm8 */
L_1803da2ba_0:;
L_1803da2ba_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803da2ba_2:;
wr(s->u,20,16,rd(s->r,5120,16));
L_1803da2ba_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803da2ba_4:;
/* 1803da2c0: movaps xmm8, xmm7 */
L_1803da2c0_0:;
L_1803da2c0_1:;
wr(s->r,5120,4,rd(s->r,5056,4));
L_1803da2c0_2:;
wr(s->r,5124,4,rd(s->r,5060,4));
L_1803da2c0_3:;
wr(s->r,5128,4,rd(s->r,5064,4));
L_1803da2c0_4:;
wr(s->r,5132,4,rd(s->r,5068,4));
L_1803da2c0_5:;
/* 1803da2c4: addss xmm0, xmm7 */
L_1803da2c4_0:;
L_1803da2c4_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803da2c4_2:;
/* 1803da2c8: divss xmm8, xmm2 */
L_1803da2c8_0:;
L_1803da2c8_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803da2c8_2:;
/* 1803da2cd: movss dword ptr [rcx + 0x320], xmm8 */
L_1803da2cd_0:;
L_1803da2cd_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x320))));
L_1803da2cd_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803da2cd_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da2cd_4:;
/* 1803da2d6: mulss xmm2, dword ptr [rdx] */
L_1803da2d6_0:;
L_1803da2d6_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803da2d6_2:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,16,4),4),4));
L_1803da2d6_3:;
/* 1803da2da: movss dword ptr [rcx + 0x310], xmm2 */
L_1803da2da_0:;
L_1803da2da_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x310))));
L_1803da2da_2:;
wr(s->u,16,4,rd(s->r,4736,4));
L_1803da2da_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da2da_4:;
/* 1803da2e2: call 0x180609c04 */
L_1803da2e2_0:;
L_1803da2e2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da2e2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da2e7)));
L_1803da2e2_3:;
return (uint64_t)UINT64_C(0x180609c04);
L_1803da2e2_4:;
return UINT64_C(0x1803da2e7);
}
uint64_t b_1803da2a2(CPU*s){
/* 1803da2a2: movaps xmmword ptr [rsp + 0x40], xmm7 */
L_1803da2a2_0:;
L_1803da2a2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803da2a2_2:;
wr(s->u,20,16,rd(s->r,5056,16));
L_1803da2a2_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803da2a2_4:;
/* 1803da2a7: movss xmm7, dword ptr [rip + 0x272995] */
L_1803da2a7_0:;
L_1803da2a7_1:;
wr(s->r,5056,4,mr(UINT64_C(0x18064cc44),4));
L_1803da2a7_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803da2a7_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803da2a7_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803da2a7_5:;
/* 1803da2af: movss dword ptr [rcx + 0x318], xmm2 */
L_1803da2af_0:;
L_1803da2af_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x318))));
L_1803da2af_2:;
wr(s->u,16,4,rd(s->r,4736,4));
L_1803da2af_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da2af_4:;
/* 1803da2b7: cvtdq2ps xmm0, xmm0 */
L_1803da2b7_0:;
L_1803da2b7_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803da2b7_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803da2b7_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803da2b7_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803da2b7_5:;
/* 1803da2ba: movaps xmmword ptr [rsp + 0x30], xmm8 */
L_1803da2ba_0:;
L_1803da2ba_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803da2ba_2:;
wr(s->u,20,16,rd(s->r,5120,16));
L_1803da2ba_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803da2ba_4:;
/* 1803da2c0: movaps xmm8, xmm7 */
L_1803da2c0_0:;
L_1803da2c0_1:;
wr(s->r,5120,4,rd(s->r,5056,4));
L_1803da2c0_2:;
wr(s->r,5124,4,rd(s->r,5060,4));
L_1803da2c0_3:;
wr(s->r,5128,4,rd(s->r,5064,4));
L_1803da2c0_4:;
wr(s->r,5132,4,rd(s->r,5068,4));
L_1803da2c0_5:;
/* 1803da2c4: addss xmm0, xmm7 */
L_1803da2c4_0:;
L_1803da2c4_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803da2c4_2:;
/* 1803da2c8: divss xmm8, xmm2 */
L_1803da2c8_0:;
L_1803da2c8_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803da2c8_2:;
/* 1803da2cd: movss dword ptr [rcx + 0x320], xmm8 */
L_1803da2cd_0:;
L_1803da2cd_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x320))));
L_1803da2cd_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803da2cd_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da2cd_4:;
/* 1803da2d6: mulss xmm2, dword ptr [rdx] */
L_1803da2d6_0:;
L_1803da2d6_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803da2d6_2:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,16,4),4),4));
L_1803da2d6_3:;
/* 1803da2da: movss dword ptr [rcx + 0x310], xmm2 */
L_1803da2da_0:;
L_1803da2da_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x310))));
L_1803da2da_2:;
wr(s->u,16,4,rd(s->r,4736,4));
L_1803da2da_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da2da_4:;
/* 1803da2e2: call 0x180609c04 */
L_1803da2e2_0:;
L_1803da2e2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da2e2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da2e7)));
L_1803da2e2_3:;
return (uint64_t)UINT64_C(0x180609c04);
L_1803da2e2_4:;
return UINT64_C(0x1803da2e7);
}
uint64_t b_1803da2e7(CPU*s){
/* 1803da2e7: movaps xmm1, xmm0 */
L_1803da2e7_0:;
L_1803da2e7_1:;
wr(s->r,4672,4,rd(s->r,4608,4));
L_1803da2e7_2:;
wr(s->r,4676,4,rd(s->r,4612,4));
L_1803da2e7_3:;
wr(s->r,4680,4,rd(s->r,4616,4));
L_1803da2e7_4:;
wr(s->r,4684,4,rd(s->r,4620,4));
L_1803da2e7_5:;
/* 1803da2ea: mulss xmm1, dword ptr [rip + 0x43222e] */
L_1803da2ea_0:;
L_1803da2ea_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(mr(UINT64_C(0x18080c520),4),4),4));
L_1803da2ea_2:;
/* 1803da2f2: cvttss2si ecx, xmm1 */
L_1803da2f2_0:;
L_1803da2f2_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803da2f2_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da2f2_3:;
/* 1803da2f6: cmp ecx, 0x80000000 */
L_1803da2f6_0:;
L_1803da2f6_1:;
wr(s->u,6,4,rd(s->r,8,4));
L_1803da2f6_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x80000000))));
L_1803da2f6_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x80000000)),4,1));
L_1803da2f6_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x80000000))));
L_1803da2f6_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da2f6_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803da2f6_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803da2f6_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803da2f6_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803da2f6_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803da2f6_11:;
/* 1803da2fc: je 0x1803da31e */
L_1803da2fc_0:;
L_1803da2fc_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803da31e);}
L_1803da2fc_2:;
return UINT64_C(0x1803da2fe);
}
uint64_t b_1803da2fe(CPU*s){
/* 1803da2fe: pxor xmm0, xmm0 */
L_1803da2fe_0:;
L_1803da2fe_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803da2fe_2:;
/* 1803da302: cvtsi2ss xmm0, ecx */
L_1803da302_0:;
L_1803da302_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803da302_2:;
/* 1803da306: ucomiss xmm0, xmm1 */
L_1803da306_0:;
L_1803da306_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803da306_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803da306_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803da306_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803da306_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803da306_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803da306_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803da306_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da306_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da306_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da306_11:;
/* 1803da309: je 0x1803da31e */
L_1803da309_0:;
L_1803da309_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803da31e);}
L_1803da309_2:;
return UINT64_C(0x1803da30b);
}
uint64_t b_1803da30b(CPU*s){
/* 1803da30b: unpcklps xmm1, xmm1 */
L_1803da30b_0:;
L_1803da30b_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803da30b_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803da30b_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803da30b_4:;
/* 1803da30e: movmskps eax, xmm1 */
L_1803da30e_0:;
L_1803da30e_1:;
wr(s->r,0,4,(((rd(s->r,4672,16)>>31)&1)<<0)|(((rd(s->r,4672,16)>>63)&1)<<1)|(((rd(s->r,4672,16)>>95)&1)<<2)|(((rd(s->r,4672,16)>>127)&1)<<3));
L_1803da30e_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da30e_3:;
/* 1803da311: pxor xmm1, xmm1 */
L_1803da311_0:;
L_1803da311_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803da311_2:;
/* 1803da315: and eax, 1 */
L_1803da315_0:;
L_1803da315_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da315_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da315_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803da315_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da315_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da315_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da315_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da315_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803da315_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803da315_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803da315_11:;
/* 1803da318: sub ecx, eax */
L_1803da318_0:;
L_1803da318_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,0,4)));
L_1803da318_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,1));
L_1803da318_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,0,4)));
L_1803da318_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da318_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da318_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803da318_7:;
wr(s->u,0,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803da318_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803da318_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803da318_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803da318_11:;
/* 1803da31a: cvtsi2ss xmm1, ecx */
L_1803da31a_0:;
L_1803da31a_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803da31a_2:;
/* 1803da31e: movss xmm0, dword ptr [rip + 0x27aeca] */
L_1803da31e_0:;
L_1803da31e_1:;
wr(s->r,4608,4,mr(UINT64_C(0x1806551f0),4));
L_1803da31e_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803da31e_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803da31e_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803da31e_5:;
/* 1803da326: call 0x180609a00 */
L_1803da326_0:;
L_1803da326_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da326_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da32b)));
L_1803da326_3:;
return (uint64_t)UINT64_C(0x180609a00);
L_1803da326_4:;
return UINT64_C(0x1803da32b);
}
uint64_t b_1803da31e(CPU*s){
/* 1803da31e: movss xmm0, dword ptr [rip + 0x27aeca] */
L_1803da31e_0:;
L_1803da31e_1:;
wr(s->r,4608,4,mr(UINT64_C(0x1806551f0),4));
L_1803da31e_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803da31e_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803da31e_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803da31e_5:;
/* 1803da326: call 0x180609a00 */
L_1803da326_0:;
L_1803da326_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da326_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da32b)));
L_1803da326_3:;
return (uint64_t)UINT64_C(0x180609a00);
L_1803da326_4:;
return UINT64_C(0x1803da32b);
}
uint64_t b_1803da32b(CPU*s){
/* 1803da32b: mov ecx, dword ptr [rbx + 0x394] */
L_1803da32b_0:;
L_1803da32b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x394))));
L_1803da32b_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da32b_3:;
wr(s->r,8,4,rd(s->u,12,4));
L_1803da32b_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da32b_5:;
/* 1803da331: cvttss2si eax, xmm0 */
L_1803da331_0:;
L_1803da331_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803da331_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da331_3:;
/* 1803da335: mov dword ptr [rbx + 0x360], eax */
L_1803da335_0:;
L_1803da335_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x360))));
L_1803da335_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803da335_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da335_4:;
/* 1803da33b: test ecx, ecx */
L_1803da33b_0:;
L_1803da33b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da33b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da33b_3:;
wr(s->u,22,4,(rd(s->r,8,4)&rd(s->r,8,4)));
L_1803da33b_4:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da33b_5:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803da33b_6:;
wr(s->u,16,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803da33b_7:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803da33b_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803da33b_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803da33b_10:;
/* 1803da33d: je 0x1803da34a */
L_1803da33d_0:;
L_1803da33d_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803da34a);}
L_1803da33d_2:;
return UINT64_C(0x1803da33f);
}
uint64_t b_1803da33f(CPU*s){
/* 1803da33f: sar eax, 2 */
L_1803da33f_0:;
L_1803da33f_1:;
wr(s->u,51,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803da33f_2:;
wr(s->u,55,4,rd(s->r,0,4));
L_1803da33f_3:;
wr(s->r,0,4,((rd(s->u,51,4)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,51,4))));
L_1803da33f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da33f_5:;
wr(s->u,36,1,(rd(s->u,51,4)==((U)UINT64_C(0x0))));
L_1803da33f_6:;
wr(s->u,37,4,(rd(s->u,51,4)-((U)UINT64_C(0x1))));
L_1803da33f_7:;
wr(s->u,41,4,((rd(s->u,37,4)>=32)?(sx(rd(s->u,55,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,55,4),4)>>rd(s->u,37,4))));
L_1803da33f_8:;
wr(s->u,45,4,(rd(s->u,41,4)&((U)UINT64_C(0x1))));
L_1803da33f_9:;
wr(s->u,49,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803da33f_10:;
wr(s->u,0,1,rd(s->u,36,1));
L_1803da33f_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803da33f_12:;
wr(s->u,2,1,(!rd(s->u,36,1)));
L_1803da33f_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da33f_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,49,1)));
L_1803da33f_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da33f_16:;
wr(s->u,50,1,(rd(s->u,51,4)==((U)UINT64_C(0x1))));
L_1803da33f_17:;
wr(s->u,0,1,rd(s->u,50,1));
L_1803da33f_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803da33f_19:;
wr(s->u,2,1,(!rd(s->u,50,1)));
L_1803da33f_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da33f_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803da33f_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da33f_23:;
wr(s->u,17,1,(rd(s->u,51,4)!=((U)UINT64_C(0x0))));
L_1803da33f_24:;
wr(s->u,18,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da33f_25:;
wr(s->u,19,1,(!rd(s->u,17,1)));
L_1803da33f_26:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,519,1)));
L_1803da33f_27:;
wr(s->u,21,1,(rd(s->u,17,1)&rd(s->u,18,1)));
L_1803da33f_28:;
wr(s->r,519,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803da33f_29:;
wr(s->u,22,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da33f_30:;
wr(s->u,23,1,(!rd(s->u,17,1)));
L_1803da33f_31:;
wr(s->u,24,1,(rd(s->u,23,1)&rd(s->r,518,1)));
L_1803da33f_32:;
wr(s->u,25,1,(rd(s->u,17,1)&rd(s->u,22,1)));
L_1803da33f_33:;
wr(s->r,518,1,(rd(s->u,24,1)|rd(s->u,25,1)));
L_1803da33f_34:;
wr(s->u,26,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da33f_35:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803da33f_36:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803da33f_37:;
wr(s->u,32,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803da33f_38:;
wr(s->u,33,1,(!rd(s->u,17,1)));
L_1803da33f_39:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,514,1)));
L_1803da33f_40:;
wr(s->u,35,1,(rd(s->u,17,1)&rd(s->u,32,1)));
L_1803da33f_41:;
wr(s->r,514,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803da33f_42:;
/* 1803da342: mov dword ptr [rbx + 0x358], eax */
L_1803da342_0:;
L_1803da342_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da342_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803da342_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803da342_4:;
/* 1803da348: jmp 0x1803da353 */
L_1803da348_0:;
L_1803da348_1:;
return UINT64_C(0x1803da353);
L_1803da348_2:;
return UINT64_C(0x1803da34a);
}
uint64_t b_1803da34a(CPU*s){
/* 1803da34a: sar eax, 2 */
L_1803da34a_0:;
L_1803da34a_1:;
wr(s->u,57,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803da34a_2:;
wr(s->u,61,4,rd(s->r,0,4));
L_1803da34a_3:;
wr(s->r,0,4,((rd(s->u,57,4)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,57,4))));
L_1803da34a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da34a_5:;
wr(s->u,38,1,(rd(s->u,57,4)==((U)UINT64_C(0x0))));
L_1803da34a_6:;
wr(s->u,39,4,(rd(s->u,57,4)-((U)UINT64_C(0x1))));
L_1803da34a_7:;
wr(s->u,43,4,((rd(s->u,39,4)>=32)?(sx(rd(s->u,61,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,61,4),4)>>rd(s->u,39,4))));
L_1803da34a_8:;
wr(s->u,47,4,(rd(s->u,43,4)&((U)UINT64_C(0x1))));
L_1803da34a_9:;
wr(s->u,51,1,(rd(s->u,47,4)!=((U)UINT64_C(0x0))));
L_1803da34a_10:;
wr(s->u,0,1,rd(s->u,38,1));
L_1803da34a_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803da34a_12:;
wr(s->u,2,1,(!rd(s->u,38,1)));
L_1803da34a_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da34a_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,51,1)));
L_1803da34a_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da34a_16:;
wr(s->u,52,1,(rd(s->u,57,4)==((U)UINT64_C(0x1))));
L_1803da34a_17:;
wr(s->u,0,1,rd(s->u,52,1));
L_1803da34a_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803da34a_19:;
wr(s->u,2,1,(!rd(s->u,52,1)));
L_1803da34a_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da34a_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803da34a_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da34a_23:;
wr(s->u,19,1,(rd(s->u,57,4)!=((U)UINT64_C(0x0))));
L_1803da34a_24:;
wr(s->u,20,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da34a_25:;
wr(s->u,21,1,(!rd(s->u,19,1)));
L_1803da34a_26:;
wr(s->u,22,1,(rd(s->u,21,1)&rd(s->r,519,1)));
L_1803da34a_27:;
wr(s->u,23,1,(rd(s->u,19,1)&rd(s->u,20,1)));
L_1803da34a_28:;
wr(s->r,519,1,(rd(s->u,22,1)|rd(s->u,23,1)));
L_1803da34a_29:;
wr(s->u,24,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da34a_30:;
wr(s->u,25,1,(!rd(s->u,19,1)));
L_1803da34a_31:;
wr(s->u,26,1,(rd(s->u,25,1)&rd(s->r,518,1)));
L_1803da34a_32:;
wr(s->u,27,1,(rd(s->u,19,1)&rd(s->u,24,1)));
L_1803da34a_33:;
wr(s->r,518,1,(rd(s->u,26,1)|rd(s->u,27,1)));
L_1803da34a_34:;
wr(s->u,28,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da34a_35:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803da34a_36:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803da34a_37:;
wr(s->u,34,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803da34a_38:;
wr(s->u,35,1,(!rd(s->u,19,1)));
L_1803da34a_39:;
wr(s->u,36,1,(rd(s->u,35,1)&rd(s->r,514,1)));
L_1803da34a_40:;
wr(s->u,37,1,(rd(s->u,19,1)&rd(s->u,34,1)));
L_1803da34a_41:;
wr(s->r,514,1,(rd(s->u,36,1)|rd(s->u,37,1)));
L_1803da34a_42:;
/* 1803da34d: mov dword ptr [rbx + 0x358], eax */
L_1803da34d_0:;
L_1803da34d_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da34d_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803da34d_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803da34d_4:;
/* 1803da353: movss xmm1, dword ptr [rbx + 0x310] */
L_1803da353_0:;
L_1803da353_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x310))));
L_1803da353_2:;
wr(s->u,13,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803da353_3:;
wr(s->r,4672,4,rd(s->u,13,4));
L_1803da353_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803da353_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803da353_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803da353_7:;
/* 1803da35b: comiss xmm1, dword ptr [rip + 0x28117e] */
L_1803da35b_0:;
L_1803da35b_1:;
wr(s->u,53,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803da35b_2:;
wr(s->u,54,1,isnan(fv(mr(UINT64_C(0x18065b4e0),4),4)));
L_1803da35b_3:;
wr(s->r,514,1,((rd(s->u,53,1)!=0)||(rd(s->u,54,1)!=0)));
L_1803da35b_4:;
wr(s->u,55,1,(fv(rd(s->r,4672,4),4)==fv(mr(UINT64_C(0x18065b4e0),4),4)));
L_1803da35b_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,55,1)));
L_1803da35b_6:;
wr(s->u,56,1,(fv(rd(s->r,4672,4),4)<fv(mr(UINT64_C(0x18065b4e0),4),4)));
L_1803da35b_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,56,1)));
L_1803da35b_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da35b_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da35b_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da35b_11:;
/* 1803da362: ja 0x1803da37a */
L_1803da362_0:;
L_1803da362_1:;
wr(s->u,17,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803da362_2:;
wr(s->u,18,1,(!rd(s->u,17,1)));
L_1803da362_3:;
if(rd(s->u,18,1)){return UINT64_C(0x1803da37a);}
L_1803da362_4:;
return UINT64_C(0x1803da364);
}
uint64_t b_1803da353(CPU*s){
/* 1803da353: movss xmm1, dword ptr [rbx + 0x310] */
L_1803da353_0:;
L_1803da353_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x310))));
L_1803da353_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da353_3:;
wr(s->r,4672,4,rd(s->u,8,4));
L_1803da353_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803da353_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803da353_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803da353_7:;
/* 1803da35b: comiss xmm1, dword ptr [rip + 0x28117e] */
L_1803da35b_0:;
L_1803da35b_1:;
wr(s->u,14,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803da35b_2:;
wr(s->u,15,1,isnan(fv(mr(UINT64_C(0x18065b4e0),4),4)));
L_1803da35b_3:;
wr(s->r,514,1,((rd(s->u,14,1)!=0)||(rd(s->u,15,1)!=0)));
L_1803da35b_4:;
wr(s->u,16,1,(fv(rd(s->r,4672,4),4)==fv(mr(UINT64_C(0x18065b4e0),4),4)));
L_1803da35b_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,16,1)));
L_1803da35b_6:;
wr(s->u,17,1,(fv(rd(s->r,4672,4),4)<fv(mr(UINT64_C(0x18065b4e0),4),4)));
L_1803da35b_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,17,1)));
L_1803da35b_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da35b_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da35b_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da35b_11:;
/* 1803da362: ja 0x1803da37a */
L_1803da362_0:;
L_1803da362_1:;
wr(s->u,12,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803da362_2:;
wr(s->u,13,1,(!rd(s->u,12,1)));
L_1803da362_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803da37a);}
L_1803da362_4:;
return UINT64_C(0x1803da364);
}
uint64_t b_1803da364(CPU*s){
/* 1803da364: test ecx, ecx */
L_1803da364_0:;
L_1803da364_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da364_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da364_3:;
wr(s->u,6,4,(rd(s->r,8,4)&rd(s->r,8,4)));
L_1803da364_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da364_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803da364_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803da364_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803da364_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803da364_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803da364_10:;
/* 1803da366: je 0x1803da372 */
L_1803da366_0:;
L_1803da366_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803da372);}
L_1803da366_2:;
return UINT64_C(0x1803da368);
}
uint64_t b_1803da368(CPU*s){
/* 1803da368: sar eax, 1 */
L_1803da368_0:;
L_1803da368_1:;
wr(s->u,18,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803da368_2:;
wr(s->r,512,1,(rd(s->u,18,4)!=((U)UINT64_C(0x0))));
L_1803da368_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da368_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803da368_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da368_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da368_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da368_8:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da368_9:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803da368_10:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803da368_11:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803da368_12:;
/* 1803da36a: mov dword ptr [rbx + 0x358], eax */
L_1803da36a_0:;
L_1803da36a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da36a_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803da36a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da36a_4:;
/* 1803da370: jmp 0x1803da3e0 */
L_1803da370_0:;
L_1803da370_1:;
return UINT64_C(0x1803da3e0);
L_1803da370_2:;
return UINT64_C(0x1803da372);
}
uint64_t b_1803da372(CPU*s){
/* 1803da372: mov dword ptr [rbx + 0x358], eax */
L_1803da372_0:;
L_1803da372_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da372_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803da372_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da372_4:;
/* 1803da378: jmp 0x1803da3e0 */
L_1803da378_0:;
L_1803da378_1:;
return UINT64_C(0x1803da3e0);
L_1803da378_2:;
return UINT64_C(0x1803da37a);
}
uint64_t b_1803da37a(CPU*s){
/* 1803da37a: unpcklps xmm1, xmm1 */
L_1803da37a_0:;
L_1803da37a_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803da37a_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803da37a_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803da37a_4:;
/* 1803da37d: cvtps2pd xmm0, xmm1 */
L_1803da37d_0:;
L_1803da37d_1:;
wr(s->u,6,8,rd(s->r,4672,8));
L_1803da37d_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,6,4),4),8));
L_1803da37d_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,10,4),4),8));
L_1803da37d_4:;
/* 1803da380: comisd xmm0, xmmword ptr [rip + 0x274c18] */
L_1803da380_0:;
L_1803da380_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803da380_2:;
wr(s->u,3,1,isnan(fv(mr(UINT64_C(0x18064efa0),8),8)));
L_1803da380_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803da380_4:;
wr(s->u,4,1,(fv(rd(s->r,4608,8),8)==fv(mr(UINT64_C(0x18064efa0),8),8)));
L_1803da380_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803da380_6:;
wr(s->u,5,1,(fv(rd(s->r,4608,8),8)<fv(mr(UINT64_C(0x18064efa0),8),8)));
L_1803da380_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803da380_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da380_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da380_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da380_11:;
/* 1803da388: ja 0x1803da394 */
L_1803da388_0:;
L_1803da388_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803da388_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803da388_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803da394);}
L_1803da388_4:;
return UINT64_C(0x1803da38a);
}
uint64_t b_1803da38a(CPU*s){
/* 1803da38a: sar eax, 1 */
L_1803da38a_0:;
L_1803da38a_1:;
wr(s->u,18,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803da38a_2:;
wr(s->r,512,1,(rd(s->u,18,4)!=((U)UINT64_C(0x0))));
L_1803da38a_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da38a_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803da38a_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da38a_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da38a_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da38a_8:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da38a_9:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803da38a_10:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803da38a_11:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803da38a_12:;
/* 1803da38c: mov dword ptr [rbx + 0x358], eax */
L_1803da38c_0:;
L_1803da38c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da38c_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803da38c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da38c_4:;
/* 1803da392: jmp 0x1803da3e0 */
L_1803da392_0:;
L_1803da392_1:;
return UINT64_C(0x1803da3e0);
L_1803da392_2:;
return UINT64_C(0x1803da394);
}
uint64_t b_1803da394(CPU*s){
/* 1803da394: unpcklps xmm1, xmm1 */
L_1803da394_0:;
L_1803da394_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803da394_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803da394_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803da394_4:;
/* 1803da397: cvtps2pd xmm0, xmm1 */
L_1803da397_0:;
L_1803da397_1:;
wr(s->u,6,8,rd(s->r,4672,8));
L_1803da397_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,6,4),4),8));
L_1803da397_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,10,4),4),8));
L_1803da397_4:;
/* 1803da39a: comisd xmm0, xmmword ptr [rip + 0x432176] */
L_1803da39a_0:;
L_1803da39a_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803da39a_2:;
wr(s->u,3,1,isnan(fv(mr(UINT64_C(0x18080c518),8),8)));
L_1803da39a_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803da39a_4:;
wr(s->u,4,1,(fv(rd(s->r,4608,8),8)==fv(mr(UINT64_C(0x18080c518),8),8)));
L_1803da39a_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803da39a_6:;
wr(s->u,5,1,(fv(rd(s->r,4608,8),8)<fv(mr(UINT64_C(0x18080c518),8),8)));
L_1803da39a_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803da39a_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da39a_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da39a_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da39a_11:;
/* 1803da3a2: ja 0x1803da3af */
L_1803da3a2_0:;
L_1803da3a2_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803da3a2_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803da3a2_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803da3af);}
L_1803da3a2_4:;
return UINT64_C(0x1803da3a4);
}
uint64_t b_1803da3a4(CPU*s){
/* 1803da3a4: sar eax, 2 */
L_1803da3a4_0:;
L_1803da3a4_1:;
wr(s->u,51,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803da3a4_2:;
wr(s->u,55,4,rd(s->r,0,4));
L_1803da3a4_3:;
wr(s->r,0,4,((rd(s->u,51,4)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,51,4))));
L_1803da3a4_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da3a4_5:;
wr(s->u,36,1,(rd(s->u,51,4)==((U)UINT64_C(0x0))));
L_1803da3a4_6:;
wr(s->u,37,4,(rd(s->u,51,4)-((U)UINT64_C(0x1))));
L_1803da3a4_7:;
wr(s->u,41,4,((rd(s->u,37,4)>=32)?(sx(rd(s->u,55,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,55,4),4)>>rd(s->u,37,4))));
L_1803da3a4_8:;
wr(s->u,45,4,(rd(s->u,41,4)&((U)UINT64_C(0x1))));
L_1803da3a4_9:;
wr(s->u,49,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803da3a4_10:;
wr(s->u,0,1,rd(s->u,36,1));
L_1803da3a4_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803da3a4_12:;
wr(s->u,2,1,(!rd(s->u,36,1)));
L_1803da3a4_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da3a4_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,49,1)));
L_1803da3a4_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da3a4_16:;
wr(s->u,50,1,(rd(s->u,51,4)==((U)UINT64_C(0x1))));
L_1803da3a4_17:;
wr(s->u,0,1,rd(s->u,50,1));
L_1803da3a4_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803da3a4_19:;
wr(s->u,2,1,(!rd(s->u,50,1)));
L_1803da3a4_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da3a4_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803da3a4_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da3a4_23:;
wr(s->u,17,1,(rd(s->u,51,4)!=((U)UINT64_C(0x0))));
L_1803da3a4_24:;
wr(s->u,18,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da3a4_25:;
wr(s->u,19,1,(!rd(s->u,17,1)));
L_1803da3a4_26:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,519,1)));
L_1803da3a4_27:;
wr(s->u,21,1,(rd(s->u,17,1)&rd(s->u,18,1)));
L_1803da3a4_28:;
wr(s->r,519,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803da3a4_29:;
wr(s->u,22,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da3a4_30:;
wr(s->u,23,1,(!rd(s->u,17,1)));
L_1803da3a4_31:;
wr(s->u,24,1,(rd(s->u,23,1)&rd(s->r,518,1)));
L_1803da3a4_32:;
wr(s->u,25,1,(rd(s->u,17,1)&rd(s->u,22,1)));
L_1803da3a4_33:;
wr(s->r,518,1,(rd(s->u,24,1)|rd(s->u,25,1)));
L_1803da3a4_34:;
wr(s->u,26,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da3a4_35:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803da3a4_36:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803da3a4_37:;
wr(s->u,32,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803da3a4_38:;
wr(s->u,33,1,(!rd(s->u,17,1)));
L_1803da3a4_39:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,514,1)));
L_1803da3a4_40:;
wr(s->u,35,1,(rd(s->u,17,1)&rd(s->u,32,1)));
L_1803da3a4_41:;
wr(s->r,514,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803da3a4_42:;
/* 1803da3a7: mov dword ptr [rbx + 0x358], eax */
L_1803da3a7_0:;
L_1803da3a7_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da3a7_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803da3a7_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803da3a7_4:;
/* 1803da3ad: jmp 0x1803da3e0 */
L_1803da3ad_0:;
L_1803da3ad_1:;
return UINT64_C(0x1803da3e0);
L_1803da3ad_2:;
return UINT64_C(0x1803da3af);
}
uint64_t b_1803da3af(CPU*s){
/* 1803da3af: unpcklps xmm1, xmm1 */
L_1803da3af_0:;
L_1803da3af_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803da3af_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803da3af_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803da3af_4:;
/* 1803da3b2: cvtps2pd xmm0, xmm1 */
L_1803da3b2_0:;
L_1803da3b2_1:;
wr(s->u,6,8,rd(s->r,4672,8));
L_1803da3b2_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,6,4),4),8));
L_1803da3b2_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,10,4),4),8));
L_1803da3b2_4:;
/* 1803da3b5: comisd xmm0, xmmword ptr [rip + 0x432153] */
L_1803da3b5_0:;
L_1803da3b5_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803da3b5_2:;
wr(s->u,3,1,isnan(fv(mr(UINT64_C(0x18080c510),8),8)));
L_1803da3b5_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803da3b5_4:;
wr(s->u,4,1,(fv(rd(s->r,4608,8),8)==fv(mr(UINT64_C(0x18080c510),8),8)));
L_1803da3b5_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803da3b5_6:;
wr(s->u,5,1,(fv(rd(s->r,4608,8),8)<fv(mr(UINT64_C(0x18080c510),8),8)));
L_1803da3b5_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803da3b5_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da3b5_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da3b5_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da3b5_11:;
/* 1803da3bd: ja 0x1803da3ca */
L_1803da3bd_0:;
L_1803da3bd_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803da3bd_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803da3bd_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803da3ca);}
L_1803da3bd_4:;
return UINT64_C(0x1803da3bf);
}
uint64_t b_1803da3bf(CPU*s){
/* 1803da3bf: sar eax, 3 */
L_1803da3bf_0:;
L_1803da3bf_1:;
wr(s->u,51,4,(((U)UINT64_C(0x3))&((U)UINT64_C(0x1f))));
L_1803da3bf_2:;
wr(s->u,55,4,rd(s->r,0,4));
L_1803da3bf_3:;
wr(s->r,0,4,((rd(s->u,51,4)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,51,4))));
L_1803da3bf_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da3bf_5:;
wr(s->u,36,1,(rd(s->u,51,4)==((U)UINT64_C(0x0))));
L_1803da3bf_6:;
wr(s->u,37,4,(rd(s->u,51,4)-((U)UINT64_C(0x1))));
L_1803da3bf_7:;
wr(s->u,41,4,((rd(s->u,37,4)>=32)?(sx(rd(s->u,55,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,55,4),4)>>rd(s->u,37,4))));
L_1803da3bf_8:;
wr(s->u,45,4,(rd(s->u,41,4)&((U)UINT64_C(0x1))));
L_1803da3bf_9:;
wr(s->u,49,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803da3bf_10:;
wr(s->u,0,1,rd(s->u,36,1));
L_1803da3bf_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803da3bf_12:;
wr(s->u,2,1,(!rd(s->u,36,1)));
L_1803da3bf_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da3bf_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,49,1)));
L_1803da3bf_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da3bf_16:;
wr(s->u,50,1,(rd(s->u,51,4)==((U)UINT64_C(0x1))));
L_1803da3bf_17:;
wr(s->u,0,1,rd(s->u,50,1));
L_1803da3bf_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803da3bf_19:;
wr(s->u,2,1,(!rd(s->u,50,1)));
L_1803da3bf_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da3bf_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803da3bf_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da3bf_23:;
wr(s->u,17,1,(rd(s->u,51,4)!=((U)UINT64_C(0x0))));
L_1803da3bf_24:;
wr(s->u,18,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da3bf_25:;
wr(s->u,19,1,(!rd(s->u,17,1)));
L_1803da3bf_26:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,519,1)));
L_1803da3bf_27:;
wr(s->u,21,1,(rd(s->u,17,1)&rd(s->u,18,1)));
L_1803da3bf_28:;
wr(s->r,519,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803da3bf_29:;
wr(s->u,22,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da3bf_30:;
wr(s->u,23,1,(!rd(s->u,17,1)));
L_1803da3bf_31:;
wr(s->u,24,1,(rd(s->u,23,1)&rd(s->r,518,1)));
L_1803da3bf_32:;
wr(s->u,25,1,(rd(s->u,17,1)&rd(s->u,22,1)));
L_1803da3bf_33:;
wr(s->r,518,1,(rd(s->u,24,1)|rd(s->u,25,1)));
L_1803da3bf_34:;
wr(s->u,26,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da3bf_35:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803da3bf_36:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803da3bf_37:;
wr(s->u,32,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803da3bf_38:;
wr(s->u,33,1,(!rd(s->u,17,1)));
L_1803da3bf_39:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,514,1)));
L_1803da3bf_40:;
wr(s->u,35,1,(rd(s->u,17,1)&rd(s->u,32,1)));
L_1803da3bf_41:;
wr(s->r,514,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803da3bf_42:;
/* 1803da3c2: mov dword ptr [rbx + 0x358], eax */
L_1803da3c2_0:;
L_1803da3c2_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da3c2_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803da3c2_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803da3c2_4:;
/* 1803da3c8: jmp 0x1803da3e0 */
L_1803da3c8_0:;
L_1803da3c8_1:;
return UINT64_C(0x1803da3e0);
L_1803da3c8_2:;
return UINT64_C(0x1803da3ca);
}
uint64_t b_1803da3ca(CPU*s){
/* 1803da3ca: comiss xmm1, dword ptr [rip + 0x28b40b] */
L_1803da3ca_0:;
L_1803da3ca_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803da3ca_2:;
wr(s->u,3,1,isnan(fv(mr(UINT64_C(0x1806657dc),4),4)));
L_1803da3ca_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803da3ca_4:;
wr(s->u,4,1,(fv(rd(s->r,4672,4),4)==fv(mr(UINT64_C(0x1806657dc),4),4)));
L_1803da3ca_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803da3ca_6:;
wr(s->u,5,1,(fv(rd(s->r,4672,4),4)<fv(mr(UINT64_C(0x1806657dc),4),4)));
L_1803da3ca_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803da3ca_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da3ca_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da3ca_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da3ca_11:;
/* 1803da3d1: ja 0x1803da561 */
L_1803da3d1_0:;
L_1803da3d1_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803da3d1_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803da3d1_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803da561);}
L_1803da3d1_4:;
return UINT64_C(0x1803da3d7);
}
uint64_t b_1803da3d7(CPU*s){
/* 1803da3d7: sar eax, 4 */
L_1803da3d7_0:;
L_1803da3d7_1:;
wr(s->u,78,4,(((U)UINT64_C(0x4))&((U)UINT64_C(0x1f))));
L_1803da3d7_2:;
wr(s->u,82,4,rd(s->r,0,4));
L_1803da3d7_3:;
wr(s->r,0,4,((rd(s->u,78,4)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,78,4))));
L_1803da3d7_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da3d7_5:;
wr(s->u,55,1,(rd(s->u,78,4)==((U)UINT64_C(0x0))));
L_1803da3d7_6:;
wr(s->u,56,4,(rd(s->u,78,4)-((U)UINT64_C(0x1))));
L_1803da3d7_7:;
wr(s->u,60,4,((rd(s->u,56,4)>=32)?(sx(rd(s->u,82,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,82,4),4)>>rd(s->u,56,4))));
L_1803da3d7_8:;
wr(s->u,64,4,(rd(s->u,60,4)&((U)UINT64_C(0x1))));
L_1803da3d7_9:;
wr(s->u,68,1,(rd(s->u,64,4)!=((U)UINT64_C(0x0))));
L_1803da3d7_10:;
wr(s->u,0,1,rd(s->u,55,1));
L_1803da3d7_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803da3d7_12:;
wr(s->u,2,1,(!rd(s->u,55,1)));
L_1803da3d7_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da3d7_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,68,1)));
L_1803da3d7_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da3d7_16:;
wr(s->u,69,1,(rd(s->u,78,4)==((U)UINT64_C(0x1))));
L_1803da3d7_17:;
wr(s->u,0,1,rd(s->u,69,1));
L_1803da3d7_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803da3d7_19:;
wr(s->u,2,1,(!rd(s->u,69,1)));
L_1803da3d7_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da3d7_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803da3d7_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da3d7_23:;
wr(s->u,36,1,(rd(s->u,78,4)!=((U)UINT64_C(0x0))));
L_1803da3d7_24:;
wr(s->u,37,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da3d7_25:;
wr(s->u,38,1,(!rd(s->u,36,1)));
L_1803da3d7_26:;
wr(s->u,39,1,(rd(s->u,38,1)&rd(s->r,519,1)));
L_1803da3d7_27:;
wr(s->u,40,1,(rd(s->u,36,1)&rd(s->u,37,1)));
L_1803da3d7_28:;
wr(s->r,519,1,(rd(s->u,39,1)|rd(s->u,40,1)));
L_1803da3d7_29:;
wr(s->u,41,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da3d7_30:;
wr(s->u,42,1,(!rd(s->u,36,1)));
L_1803da3d7_31:;
wr(s->u,43,1,(rd(s->u,42,1)&rd(s->r,518,1)));
L_1803da3d7_32:;
wr(s->u,44,1,(rd(s->u,36,1)&rd(s->u,41,1)));
L_1803da3d7_33:;
wr(s->r,518,1,(rd(s->u,43,1)|rd(s->u,44,1)));
L_1803da3d7_34:;
wr(s->u,45,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da3d7_35:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803da3d7_36:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803da3d7_37:;
wr(s->u,51,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803da3d7_38:;
wr(s->u,52,1,(!rd(s->u,36,1)));
L_1803da3d7_39:;
wr(s->u,53,1,(rd(s->u,52,1)&rd(s->r,514,1)));
L_1803da3d7_40:;
wr(s->u,54,1,(rd(s->u,36,1)&rd(s->u,51,1)));
L_1803da3d7_41:;
wr(s->r,514,1,(rd(s->u,53,1)|rd(s->u,54,1)));
L_1803da3d7_42:;
/* 1803da3da: mov dword ptr [rbx + 0x358], eax */
L_1803da3da_0:;
L_1803da3da_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da3da_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803da3da_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803da3da_4:;
/* 1803da3e0: movd xmm1, dword ptr [rbx + 0x358] */
L_1803da3e0_0:;
L_1803da3e0_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da3e0_2:;
wr(s->u,25,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803da3e0_3:;
wr(s->r,4672,16,rd(s->u,25,4));
L_1803da3e0_4:;
/* 1803da3e8: cvtdq2ps xmm1, xmm1 */
L_1803da3e8_0:;
L_1803da3e8_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803da3e8_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803da3e8_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803da3e8_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803da3e8_5:;
/* 1803da3eb: movaps xmm0, xmm1 */
L_1803da3eb_0:;
L_1803da3eb_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803da3eb_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803da3eb_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803da3eb_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803da3eb_5:;
/* 1803da3ee: mulss xmm0, dword ptr [rbx + 0x310] */
L_1803da3ee_0:;
L_1803da3ee_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x310))));
L_1803da3ee_2:;
wr(s->u,13,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803da3ee_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,13,4),4),4));
L_1803da3ee_4:;
/* 1803da3f6: cvttss2si eax, xmm0 */
L_1803da3f6_0:;
L_1803da3f6_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803da3f6_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da3f6_3:;
/* 1803da3fa: movaps xmm0, xmm7 */
L_1803da3fa_0:;
L_1803da3fa_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803da3fa_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803da3fa_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803da3fa_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803da3fa_5:;
/* 1803da3fd: and eax, 0xfffffffe */
L_1803da3fd_0:;
L_1803da3fd_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da3fd_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da3fd_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xfffffffe))));
L_1803da3fd_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da3fd_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da3fd_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da3fd_7:;
wr(s->u,30,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da3fd_8:;
wr(s->u,34,1,pop(rd(s->u,30,4),4));
L_1803da3fd_9:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803da3fd_10:;
wr(s->r,514,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803da3fd_11:;
/* 1803da400: mov dword ptr [rbx + 0x35c], eax */
L_1803da400_0:;
L_1803da400_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x35c))));
L_1803da400_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803da400_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803da400_4:;
/* 1803da406: movd xmm2, eax */
L_1803da406_0:;
L_1803da406_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803da406_2:;
/* 1803da40a: cvtdq2ps xmm2, xmm2 */
L_1803da40a_0:;
L_1803da40a_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803da40a_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803da40a_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803da40a_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803da40a_5:;
/* 1803da40d: divss xmm2, xmm1 */
L_1803da40d_0:;
L_1803da40d_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803da40d_2:;
/* 1803da411: divss xmm0, xmm2 */
L_1803da411_0:;
L_1803da411_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803da411_2:;
/* 1803da415: movss dword ptr [rbx + 0x310], xmm2 */
L_1803da415_0:;
L_1803da415_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x310))));
L_1803da415_2:;
wr(s->u,13,4,rd(s->r,4736,4));
L_1803da415_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803da415_4:;
/* 1803da41d: unpcklps xmm0, xmm0 */
L_1803da41d_0:;
L_1803da41d_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803da41d_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803da41d_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803da41d_4:;
/* 1803da420: mulss xmm2, xmm8 */
L_1803da420_0:;
L_1803da420_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803da420_2:;
/* 1803da425: cvtps2pd xmm0, xmm0 */
L_1803da425_0:;
L_1803da425_1:;
wr(s->u,86,8,rd(s->r,4608,8));
L_1803da425_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,86,4),4),8));
L_1803da425_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,90,4),4),8));
L_1803da425_4:;
/* 1803da428: movsd qword ptr [rbx + 0x328], xmm0 */
L_1803da428_0:;
L_1803da428_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x328))));
L_1803da428_2:;
wr(s->u,17,8,rd(s->r,4608,8));
L_1803da428_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,17,8));
L_1803da428_4:;
/* 1803da430: movss dword ptr [rdi], xmm2 */
L_1803da430_0:;
L_1803da430_1:;
wr(s->u,13,4,rd(s->r,4736,4));
L_1803da430_2:;
mw((uint64_t)rd(s->r,56,8),4,rd(s->u,13,4));
L_1803da430_3:;
/* 1803da434: xor edi, edi */
L_1803da434_0:;
L_1803da434_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da434_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da434_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803da434_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803da434_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da434_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803da434_7:;
wr(s->u,30,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803da434_8:;
wr(s->u,34,1,pop(rd(s->u,30,4),4));
L_1803da434_9:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803da434_10:;
wr(s->r,514,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803da434_11:;
/* 1803da436: cmp dword ptr [rbx + 0x390], 1 */
L_1803da436_0:;
L_1803da436_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x390))));
L_1803da436_2:;
wr(s->u,25,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803da436_3:;
wr(s->u,70,4,rd(s->u,25,4));
L_1803da436_4:;
wr(s->r,512,1,(rd(s->u,70,4)<((U)UINT64_C(0x1))));
L_1803da436_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,70,4),((U)UINT64_C(0x1)),4,1));
L_1803da436_6:;
wr(s->u,74,4,(rd(s->u,70,4)-((U)UINT64_C(0x1))));
L_1803da436_7:;
wr(s->r,519,1,(sx(rd(s->u,74,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da436_8:;
wr(s->r,518,1,(rd(s->u,74,4)==((U)UINT64_C(0x0))));
L_1803da436_9:;
wr(s->u,30,4,(rd(s->u,74,4)&((U)UINT64_C(0xff))));
L_1803da436_10:;
wr(s->u,34,1,pop(rd(s->u,30,4),4));
L_1803da436_11:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803da436_12:;
wr(s->r,514,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803da436_13:;
/* 1803da43d: jne 0x1803da4a5 */
L_1803da43d_0:;
L_1803da43d_1:;
wr(s->u,29,1,(!rd(s->r,518,1)));
L_1803da43d_2:;
if(rd(s->u,29,1)){return UINT64_C(0x1803da4a5);}
L_1803da43d_3:;
return UINT64_C(0x1803da43f);
}
uint64_t b_1803da3e0(CPU*s){
/* 1803da3e0: movd xmm1, dword ptr [rbx + 0x358] */
L_1803da3e0_0:;
L_1803da3e0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da3e0_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da3e0_3:;
wr(s->r,4672,16,rd(s->u,20,4));
L_1803da3e0_4:;
/* 1803da3e8: cvtdq2ps xmm1, xmm1 */
L_1803da3e8_0:;
L_1803da3e8_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803da3e8_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803da3e8_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803da3e8_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803da3e8_5:;
/* 1803da3eb: movaps xmm0, xmm1 */
L_1803da3eb_0:;
L_1803da3eb_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803da3eb_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803da3eb_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803da3eb_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803da3eb_5:;
/* 1803da3ee: mulss xmm0, dword ptr [rbx + 0x310] */
L_1803da3ee_0:;
L_1803da3ee_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x310))));
L_1803da3ee_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da3ee_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,8,4),4),4));
L_1803da3ee_4:;
/* 1803da3f6: cvttss2si eax, xmm0 */
L_1803da3f6_0:;
L_1803da3f6_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803da3f6_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da3f6_3:;
/* 1803da3fa: movaps xmm0, xmm7 */
L_1803da3fa_0:;
L_1803da3fa_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803da3fa_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803da3fa_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803da3fa_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803da3fa_5:;
/* 1803da3fd: and eax, 0xfffffffe */
L_1803da3fd_0:;
L_1803da3fd_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da3fd_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da3fd_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xfffffffe))));
L_1803da3fd_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da3fd_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da3fd_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da3fd_7:;
wr(s->u,25,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da3fd_8:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803da3fd_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803da3fd_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803da3fd_11:;
/* 1803da400: mov dword ptr [rbx + 0x35c], eax */
L_1803da400_0:;
L_1803da400_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x35c))));
L_1803da400_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803da400_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da400_4:;
/* 1803da406: movd xmm2, eax */
L_1803da406_0:;
L_1803da406_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803da406_2:;
/* 1803da40a: cvtdq2ps xmm2, xmm2 */
L_1803da40a_0:;
L_1803da40a_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803da40a_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803da40a_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803da40a_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803da40a_5:;
/* 1803da40d: divss xmm2, xmm1 */
L_1803da40d_0:;
L_1803da40d_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803da40d_2:;
/* 1803da411: divss xmm0, xmm2 */
L_1803da411_0:;
L_1803da411_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803da411_2:;
/* 1803da415: movss dword ptr [rbx + 0x310], xmm2 */
L_1803da415_0:;
L_1803da415_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x310))));
L_1803da415_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803da415_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da415_4:;
/* 1803da41d: unpcklps xmm0, xmm0 */
L_1803da41d_0:;
L_1803da41d_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803da41d_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803da41d_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803da41d_4:;
/* 1803da420: mulss xmm2, xmm8 */
L_1803da420_0:;
L_1803da420_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803da420_2:;
/* 1803da425: cvtps2pd xmm0, xmm0 */
L_1803da425_0:;
L_1803da425_1:;
wr(s->u,39,8,rd(s->r,4608,8));
L_1803da425_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,39,4),4),8));
L_1803da425_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,43,4),4),8));
L_1803da425_4:;
/* 1803da428: movsd qword ptr [rbx + 0x328], xmm0 */
L_1803da428_0:;
L_1803da428_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x328))));
L_1803da428_2:;
wr(s->u,12,8,rd(s->r,4608,8));
L_1803da428_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803da428_4:;
/* 1803da430: movss dword ptr [rdi], xmm2 */
L_1803da430_0:;
L_1803da430_1:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803da430_2:;
mw((uint64_t)rd(s->r,56,8),4,rd(s->u,8,4));
L_1803da430_3:;
/* 1803da434: xor edi, edi */
L_1803da434_0:;
L_1803da434_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da434_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da434_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803da434_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803da434_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da434_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803da434_7:;
wr(s->u,25,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803da434_8:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803da434_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803da434_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803da434_11:;
/* 1803da436: cmp dword ptr [rbx + 0x390], 1 */
L_1803da436_0:;
L_1803da436_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x390))));
L_1803da436_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da436_3:;
wr(s->u,31,4,rd(s->u,20,4));
L_1803da436_4:;
wr(s->r,512,1,(rd(s->u,31,4)<((U)UINT64_C(0x1))));
L_1803da436_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,31,4),((U)UINT64_C(0x1)),4,1));
L_1803da436_6:;
wr(s->u,35,4,(rd(s->u,31,4)-((U)UINT64_C(0x1))));
L_1803da436_7:;
wr(s->r,519,1,(sx(rd(s->u,35,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da436_8:;
wr(s->r,518,1,(rd(s->u,35,4)==((U)UINT64_C(0x0))));
L_1803da436_9:;
wr(s->u,25,4,(rd(s->u,35,4)&((U)UINT64_C(0xff))));
L_1803da436_10:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803da436_11:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803da436_12:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803da436_13:;
/* 1803da43d: jne 0x1803da4a5 */
L_1803da43d_0:;
L_1803da43d_1:;
wr(s->u,24,1,(!rd(s->r,518,1)));
L_1803da43d_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803da4a5);}
L_1803da43d_3:;
return UINT64_C(0x1803da43f);
}
uint64_t b_1803da43f(CPU*s){
/* 1803da43f: test sil, sil */
L_1803da43f_0:;
L_1803da43f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da43f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da43f_3:;
wr(s->u,3,1,(rd(s->r,48,1)&rd(s->r,48,1)));
L_1803da43f_4:;
wr(s->r,519,1,(sx(rd(s->u,3,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803da43f_5:;
wr(s->r,518,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_1803da43f_6:;
wr(s->u,0,1,(rd(s->u,3,1)&((U)UINT64_C(0xff))));
L_1803da43f_7:;
wr(s->u,1,1,pop(rd(s->u,0,1),1));
L_1803da43f_8:;
wr(s->u,2,1,(rd(s->u,1,1)&((U)UINT64_C(0x1))));
L_1803da43f_9:;
wr(s->r,514,1,(rd(s->u,2,1)==((U)UINT64_C(0x0))));
L_1803da43f_10:;
/* 1803da442: je 0x1803da456 */
L_1803da442_0:;
L_1803da442_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803da456);}
L_1803da442_2:;
return UINT64_C(0x1803da444);
}
uint64_t b_1803da444(CPU*s){
/* 1803da444: mov ecx, dword ptr [rbx + 0x368] */
L_1803da444_0:;
L_1803da444_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x368))));
L_1803da444_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da444_3:;
wr(s->r,8,4,rd(s->u,12,4));
L_1803da444_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da444_5:;
/* 1803da44a: sar ecx, 1 */
L_1803da44a_0:;
L_1803da44a_1:;
wr(s->u,22,4,(rd(s->r,8,4)&((U)UINT64_C(0x1))));
L_1803da44a_2:;
wr(s->r,512,1,(rd(s->u,22,4)!=((U)UINT64_C(0x0))));
L_1803da44a_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da44a_4:;
wr(s->r,8,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,8,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,8,4),4)>>((U)UINT64_C(0x1)))));
L_1803da44a_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da44a_6:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da44a_7:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803da44a_8:;
wr(s->u,16,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803da44a_9:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803da44a_10:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803da44a_11:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803da44a_12:;
/* 1803da44c: neg ecx */
L_1803da44c_0:;
L_1803da44c_1:;
wr(s->r,512,1,(rd(s->r,8,4)!=((U)UINT64_C(0x0))));
L_1803da44c_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,8,4),4,1));
L_1803da44c_3:;
wr(s->r,8,4,(-rd(s->r,8,4)));
L_1803da44c_4:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da44c_5:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803da44c_6:;
wr(s->u,16,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803da44c_7:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803da44c_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803da44c_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803da44c_10:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da44c_11:;
/* 1803da44e: mov dword ptr [rbx + 0x350], ecx */
L_1803da44e_0:;
L_1803da44e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x350))));
L_1803da44e_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_1803da44e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da44e_4:;
/* 1803da454: jmp 0x1803da479 */
L_1803da454_0:;
L_1803da454_1:;
return UINT64_C(0x1803da479);
L_1803da454_2:;
return UINT64_C(0x1803da456);
}
uint64_t b_1803da456(CPU*s){
/* 1803da456: mov ecx, dword ptr [rbx + 0x368] */
L_1803da456_0:;
L_1803da456_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x368))));
L_1803da456_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da456_3:;
wr(s->r,8,4,rd(s->u,36,4));
L_1803da456_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da456_5:;
/* 1803da45c: sar ecx, 1 */
L_1803da45c_0:;
L_1803da45c_1:;
wr(s->u,54,4,(rd(s->r,8,4)&((U)UINT64_C(0x1))));
L_1803da45c_2:;
wr(s->r,512,1,(rd(s->u,54,4)!=((U)UINT64_C(0x0))));
L_1803da45c_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da45c_4:;
wr(s->r,8,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,8,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,8,4),4)>>((U)UINT64_C(0x1)))));
L_1803da45c_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da45c_6:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da45c_7:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803da45c_8:;
wr(s->u,48,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803da45c_9:;
wr(s->u,52,1,pop(rd(s->u,48,4),4));
L_1803da45c_10:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803da45c_11:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803da45c_12:;
/* 1803da45e: neg ecx */
L_1803da45e_0:;
L_1803da45e_1:;
wr(s->r,512,1,(rd(s->r,8,4)!=((U)UINT64_C(0x0))));
L_1803da45e_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,8,4),4,1));
L_1803da45e_3:;
wr(s->r,8,4,(-rd(s->r,8,4)));
L_1803da45e_4:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da45e_5:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803da45e_6:;
wr(s->u,48,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803da45e_7:;
wr(s->u,52,1,pop(rd(s->u,48,4),4));
L_1803da45e_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803da45e_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803da45e_10:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da45e_11:;
/* 1803da460: movd xmm0, ecx */
L_1803da460_0:;
L_1803da460_1:;
wr(s->r,4608,16,rd(s->r,8,4));
L_1803da460_2:;
/* 1803da464: cvtdq2ps xmm0, xmm0 */
L_1803da464_0:;
L_1803da464_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803da464_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803da464_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803da464_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803da464_5:;
/* 1803da467: divss xmm0, dword ptr [rbx + 0x318] */
L_1803da467_0:;
L_1803da467_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x318))));
L_1803da467_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da467_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->u,24,4),4),4));
L_1803da467_4:;
/* 1803da46f: cvttss2si eax, xmm0 */
L_1803da46f_0:;
L_1803da46f_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803da46f_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da46f_3:;
/* 1803da473: mov dword ptr [rbx + 0x350], eax */
L_1803da473_0:;
L_1803da473_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x350))));
L_1803da473_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803da473_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da473_4:;
/* 1803da479: movd xmm0, ecx */
L_1803da479_0:;
L_1803da479_1:;
wr(s->r,4608,16,rd(s->r,8,4));
L_1803da479_2:;
/* 1803da47d: mov dword ptr [rbx + 0x37c], edi */
L_1803da47d_0:;
L_1803da47d_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x37c))));
L_1803da47d_2:;
wr(s->u,24,4,rd(s->r,56,4));
L_1803da47d_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da47d_4:;
/* 1803da483: cvtdq2pd xmm0, xmm0 */
L_1803da483_0:;
L_1803da483_1:;
wr(s->u,58,8,rd(s->r,4608,8));
L_1803da483_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,58,4),4),8));
L_1803da483_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,62,4),4),8));
L_1803da483_4:;
/* 1803da487: cvttsd2si eax, xmm0 */
L_1803da487_0:;
L_1803da487_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,8),8),4));
L_1803da487_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da487_3:;
/* 1803da48b: movsd qword ptr [rbx + 0x388], xmm0 */
L_1803da48b_0:;
L_1803da48b_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x388))));
L_1803da48b_2:;
wr(s->u,28,8,rd(s->r,4608,8));
L_1803da48b_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803da48b_4:;
/* 1803da493: mov dword ptr [rbx + 0x378], eax */
L_1803da493_0:;
L_1803da493_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x378))));
L_1803da493_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803da493_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da493_4:;
/* 1803da499: mov eax, dword ptr [rbx + 0x35c] */
L_1803da499_0:;
L_1803da499_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x35c))));
L_1803da499_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da499_3:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803da499_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da499_5:;
/* 1803da49f: mov dword ptr [rbx + 0x364], eax */
L_1803da49f_0:;
L_1803da49f_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x364))));
L_1803da49f_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803da49f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da49f_4:;
/* 1803da4a5: mov r8d, dword ptr [rbx + 0x35c] */
L_1803da4a5_0:;
L_1803da4a5_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x35c))));
L_1803da4a5_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da4a5_3:;
wr(s->r,128,4,rd(s->u,36,4));
L_1803da4a5_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803da4a5_5:;
/* 1803da4ac: movss xmm0, dword ptr [rbx + 0x310] */
L_1803da4ac_0:;
L_1803da4ac_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x310))));
L_1803da4ac_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da4ac_3:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803da4ac_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803da4ac_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803da4ac_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803da4ac_7:;
/* 1803da4b4: mov r9d, dword ptr [rbx + 0x358] */
L_1803da4b4_0:;
L_1803da4b4_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da4b4_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da4b4_3:;
wr(s->r,136,4,rd(s->u,36,4));
L_1803da4b4_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803da4b4_5:;
/* 1803da4bb: mov edx, dword ptr [rbx + 0x368] */
L_1803da4bb_0:;
L_1803da4bb_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x368))));
L_1803da4bb_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da4bb_3:;
wr(s->r,16,4,rd(s->u,36,4));
L_1803da4bb_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803da4bb_5:;
/* 1803da4c1: mov rcx, qword ptr [rbx + 8] */
L_1803da4c1_0:;
L_1803da4c1_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803da4c1_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da4c1_3:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803da4c1_4:;
/* 1803da4c5: movss dword ptr [rsp + 0x28], xmm0 */
L_1803da4c5_0:;
L_1803da4c5_1:;
wr(s->u,16,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803da4c5_2:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803da4c5_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803da4c5_4:;
/* 1803da4cb: mov dword ptr [rsp + 0x20], r8d */
L_1803da4cb_0:;
L_1803da4cb_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803da4cb_2:;
wr(s->u,24,4,rd(s->r,128,4));
L_1803da4cb_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803da4cb_4:;
/* 1803da4d0: call 0x1803e0060 */
L_1803da4d0_0:;
L_1803da4d0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da4d0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da4d5)));
L_1803da4d0_3:;
return (uint64_t)UINT64_C(0x1803e0060);
L_1803da4d0_4:;
return UINT64_C(0x1803da4d5);
}
uint64_t b_1803da479(CPU*s){
/* 1803da479: movd xmm0, ecx */
L_1803da479_0:;
L_1803da479_1:;
wr(s->r,4608,16,rd(s->r,8,4));
L_1803da479_2:;
/* 1803da47d: mov dword ptr [rbx + 0x37c], edi */
L_1803da47d_0:;
L_1803da47d_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x37c))));
L_1803da47d_2:;
wr(s->u,24,4,rd(s->r,56,4));
L_1803da47d_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da47d_4:;
/* 1803da483: cvtdq2pd xmm0, xmm0 */
L_1803da483_0:;
L_1803da483_1:;
wr(s->u,48,8,rd(s->r,4608,8));
L_1803da483_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,48,4),4),8));
L_1803da483_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,52,4),4),8));
L_1803da483_4:;
/* 1803da487: cvttsd2si eax, xmm0 */
L_1803da487_0:;
L_1803da487_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,8),8),4));
L_1803da487_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da487_3:;
/* 1803da48b: movsd qword ptr [rbx + 0x388], xmm0 */
L_1803da48b_0:;
L_1803da48b_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x388))));
L_1803da48b_2:;
wr(s->u,28,8,rd(s->r,4608,8));
L_1803da48b_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803da48b_4:;
/* 1803da493: mov dword ptr [rbx + 0x378], eax */
L_1803da493_0:;
L_1803da493_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x378))));
L_1803da493_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803da493_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da493_4:;
/* 1803da499: mov eax, dword ptr [rbx + 0x35c] */
L_1803da499_0:;
L_1803da499_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x35c))));
L_1803da499_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da499_3:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803da499_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da499_5:;
/* 1803da49f: mov dword ptr [rbx + 0x364], eax */
L_1803da49f_0:;
L_1803da49f_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x364))));
L_1803da49f_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803da49f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da49f_4:;
/* 1803da4a5: mov r8d, dword ptr [rbx + 0x35c] */
L_1803da4a5_0:;
L_1803da4a5_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x35c))));
L_1803da4a5_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da4a5_3:;
wr(s->r,128,4,rd(s->u,36,4));
L_1803da4a5_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803da4a5_5:;
/* 1803da4ac: movss xmm0, dword ptr [rbx + 0x310] */
L_1803da4ac_0:;
L_1803da4ac_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x310))));
L_1803da4ac_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da4ac_3:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803da4ac_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803da4ac_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803da4ac_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803da4ac_7:;
/* 1803da4b4: mov r9d, dword ptr [rbx + 0x358] */
L_1803da4b4_0:;
L_1803da4b4_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da4b4_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da4b4_3:;
wr(s->r,136,4,rd(s->u,36,4));
L_1803da4b4_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803da4b4_5:;
/* 1803da4bb: mov edx, dword ptr [rbx + 0x368] */
L_1803da4bb_0:;
L_1803da4bb_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x368))));
L_1803da4bb_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da4bb_3:;
wr(s->r,16,4,rd(s->u,36,4));
L_1803da4bb_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803da4bb_5:;
/* 1803da4c1: mov rcx, qword ptr [rbx + 8] */
L_1803da4c1_0:;
L_1803da4c1_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803da4c1_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da4c1_3:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803da4c1_4:;
/* 1803da4c5: movss dword ptr [rsp + 0x28], xmm0 */
L_1803da4c5_0:;
L_1803da4c5_1:;
wr(s->u,16,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803da4c5_2:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803da4c5_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803da4c5_4:;
/* 1803da4cb: mov dword ptr [rsp + 0x20], r8d */
L_1803da4cb_0:;
L_1803da4cb_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803da4cb_2:;
wr(s->u,24,4,rd(s->r,128,4));
L_1803da4cb_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803da4cb_4:;
/* 1803da4d0: call 0x1803e0060 */
L_1803da4d0_0:;
L_1803da4d0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da4d0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da4d5)));
L_1803da4d0_3:;
return (uint64_t)UINT64_C(0x1803e0060);
L_1803da4d0_4:;
return UINT64_C(0x1803da4d5);
}
uint64_t b_1803da4a5(CPU*s){
/* 1803da4a5: mov r8d, dword ptr [rbx + 0x35c] */
L_1803da4a5_0:;
L_1803da4a5_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x35c))));
L_1803da4a5_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da4a5_3:;
wr(s->r,128,4,rd(s->u,28,4));
L_1803da4a5_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803da4a5_5:;
/* 1803da4ac: movss xmm0, dword ptr [rbx + 0x310] */
L_1803da4ac_0:;
L_1803da4ac_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x310))));
L_1803da4ac_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da4ac_3:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803da4ac_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803da4ac_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803da4ac_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803da4ac_7:;
/* 1803da4b4: mov r9d, dword ptr [rbx + 0x358] */
L_1803da4b4_0:;
L_1803da4b4_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da4b4_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da4b4_3:;
wr(s->r,136,4,rd(s->u,28,4));
L_1803da4b4_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803da4b4_5:;
/* 1803da4bb: mov edx, dword ptr [rbx + 0x368] */
L_1803da4bb_0:;
L_1803da4bb_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x368))));
L_1803da4bb_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da4bb_3:;
wr(s->r,16,4,rd(s->u,28,4));
L_1803da4bb_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803da4bb_5:;
/* 1803da4c1: mov rcx, qword ptr [rbx + 8] */
L_1803da4c1_0:;
L_1803da4c1_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803da4c1_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da4c1_3:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803da4c1_4:;
/* 1803da4c5: movss dword ptr [rsp + 0x28], xmm0 */
L_1803da4c5_0:;
L_1803da4c5_1:;
wr(s->u,16,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803da4c5_2:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803da4c5_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803da4c5_4:;
/* 1803da4cb: mov dword ptr [rsp + 0x20], r8d */
L_1803da4cb_0:;
L_1803da4cb_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803da4cb_2:;
wr(s->u,24,4,rd(s->r,128,4));
L_1803da4cb_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803da4cb_4:;
/* 1803da4d0: call 0x1803e0060 */
L_1803da4d0_0:;
L_1803da4d0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da4d0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da4d5)));
L_1803da4d0_3:;
return (uint64_t)UINT64_C(0x1803e0060);
L_1803da4d0_4:;
return UINT64_C(0x1803da4d5);
}
uint64_t b_1803da4d5(CPU*s){
/* 1803da4d5: mov r11d, dword ptr [rbx + 0x358] */
L_1803da4d5_0:;
L_1803da4d5_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da4d5_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da4d5_3:;
wr(s->r,152,4,rd(s->u,12,4));
L_1803da4d5_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803da4d5_5:;
/* 1803da4dc: mov eax, dword ptr [rbx + 0x35c] */
L_1803da4dc_0:;
L_1803da4dc_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x35c))));
L_1803da4dc_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da4dc_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803da4dc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da4dc_5:;
/* 1803da4e2: mov dword ptr [rbx + 0x360], r11d */
L_1803da4e2_0:;
L_1803da4e2_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x360))));
L_1803da4e2_2:;
wr(s->u,8,4,rd(s->r,152,4));
L_1803da4e2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da4e2_4:;
/* 1803da4e9: mov dword ptr [rbx + 0x364], eax */
L_1803da4e9_0:;
L_1803da4e9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x364))));
L_1803da4e9_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803da4e9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da4e9_4:;
/* 1803da4ef: test sil, sil */
L_1803da4ef_0:;
L_1803da4ef_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da4ef_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da4ef_3:;
wr(s->u,19,1,(rd(s->r,48,1)&rd(s->r,48,1)));
L_1803da4ef_4:;
wr(s->r,519,1,(sx(rd(s->u,19,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803da4ef_5:;
wr(s->r,518,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803da4ef_6:;
wr(s->u,16,1,(rd(s->u,19,1)&((U)UINT64_C(0xff))));
L_1803da4ef_7:;
wr(s->u,17,1,pop(rd(s->u,16,1),1));
L_1803da4ef_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803da4ef_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803da4ef_10:;
/* 1803da4f2: je 0x1803da530 */
L_1803da4f2_0:;
L_1803da4f2_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803da530);}
L_1803da4f2_2:;
return UINT64_C(0x1803da4f4);
}
uint64_t b_1803da4f4(CPU*s){
/* 1803da4f4: divss xmm7, dword ptr [rbx + 0x318] */
L_1803da4f4_0:;
L_1803da4f4_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x318))));
L_1803da4f4_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da4f4_3:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)/fv(rd(s->u,8,4),4),4));
L_1803da4f4_4:;
/* 1803da4fc: mov eax, dword ptr [rbx + 0x368] */
L_1803da4fc_0:;
L_1803da4fc_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x368))));
L_1803da4fc_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da4fc_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1803da4fc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da4fc_5:;
/* 1803da502: sar eax, 1 */
L_1803da502_0:;
L_1803da502_1:;
wr(s->u,30,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803da502_2:;
wr(s->r,512,1,(rd(s->u,30,4)!=((U)UINT64_C(0x0))));
L_1803da502_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da502_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803da502_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da502_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da502_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da502_8:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da502_9:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803da502_10:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803da502_11:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803da502_12:;
/* 1803da504: movd xmm0, eax */
L_1803da504_0:;
L_1803da504_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803da504_2:;
/* 1803da508: unpcklps xmm7, xmm7 */
L_1803da508_0:;
L_1803da508_1:;
wr(s->r,5064,4,rd(s->r,5060,4));
L_1803da508_2:;
wr(s->r,5068,4,rd(s->r,5060,4));
L_1803da508_3:;
wr(s->r,5060,4,rd(s->r,5056,4));
L_1803da508_4:;
/* 1803da50b: cvtdq2pd xmm0, xmm0 */
L_1803da50b_0:;
L_1803da50b_1:;
wr(s->u,34,8,rd(s->r,4608,8));
L_1803da50b_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,34,4),4),8));
L_1803da50b_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,38,4),4),8));
L_1803da50b_4:;
/* 1803da50f: cvtps2pd xmm1, xmm7 */
L_1803da50f_0:;
L_1803da50f_1:;
wr(s->u,42,8,rd(s->r,5056,8));
L_1803da50f_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,42,4),4),8));
L_1803da50f_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,46,4),4),8));
L_1803da50f_4:;
/* 1803da512: mulsd xmm1, xmm0 */
L_1803da512_0:;
L_1803da512_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803da512_2:;
/* 1803da516: subsd xmm1, xmm0 */
L_1803da516_0:;
L_1803da516_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803da516_2:;
/* 1803da51a: movsd xmm0, qword ptr [rbx + 0x3a0] */
L_1803da51a_0:;
L_1803da51a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3a0))));
L_1803da51a_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da51a_3:;
wr(s->r,4608,8,rd(s->u,12,8));
L_1803da51a_4:;
wr(s->r,4616,8,((U)UINT64_C(0x0)));
L_1803da51a_5:;
/* 1803da522: subsd xmm0, xmm1 */
L_1803da522_0:;
L_1803da522_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)-fv(rd(s->r,4672,8),8),8));
L_1803da522_2:;
/* 1803da526: movsd qword ptr [rbx + 0x3b0], xmm0 */
L_1803da526_0:;
L_1803da526_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3b0))));
L_1803da526_2:;
wr(s->u,12,8,rd(s->r,4608,8));
L_1803da526_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803da526_4:;
/* 1803da52e: jmp 0x1803da53e */
L_1803da52e_0:;
L_1803da52e_1:;
return UINT64_C(0x1803da53e);
L_1803da52e_2:;
return UINT64_C(0x1803da530);
}
uint64_t b_1803da530(CPU*s){
/* 1803da530: mov rax, qword ptr [rbx + 0x3a0] */
L_1803da530_0:;
L_1803da530_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3a0))));
L_1803da530_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da530_3:;
wr(s->r,0,8,rd(s->u,44,8));
L_1803da530_4:;
/* 1803da537: mov qword ptr [rbx + 0x3b0], rax */
L_1803da537_0:;
L_1803da537_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3b0))));
L_1803da537_2:;
wr(s->u,20,8,rd(s->r,0,8));
L_1803da537_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_1803da537_4:;
/* 1803da53e: mov dword ptr [rbx + 0x398], edi */
L_1803da53e_0:;
L_1803da53e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x398))));
L_1803da53e_2:;
wr(s->u,16,4,rd(s->r,56,4));
L_1803da53e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da53e_4:;
/* 1803da544: xor eax, eax */
L_1803da544_0:;
L_1803da544_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da544_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da544_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803da544_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da544_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da544_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da544_7:;
wr(s->u,52,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da544_8:;
wr(s->u,60,1,pop(rd(s->u,52,4),4));
L_1803da544_9:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803da544_10:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803da544_11:;
/* 1803da546: movaps xmm7, xmmword ptr [rsp + 0x40] */
L_1803da546_0:;
L_1803da546_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803da546_2:;
wr(s->u,28,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da546_3:;
wr(s->u,70,16,rd(s->u,28,16));
L_1803da546_4:;
wr(s->r,5056,4,rd(s->u,70,4));
L_1803da546_5:;
wr(s->r,5060,4,rd(s->u,74,4));
L_1803da546_6:;
wr(s->r,5064,4,rd(s->u,78,4));
L_1803da546_7:;
wr(s->r,5068,4,rd(s->u,82,4));
L_1803da546_8:;
/* 1803da54b: movaps xmm8, xmmword ptr [rsp + 0x30] */
L_1803da54b_0:;
L_1803da54b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803da54b_2:;
wr(s->u,28,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da54b_3:;
wr(s->u,70,16,rd(s->u,28,16));
L_1803da54b_4:;
wr(s->r,5120,4,rd(s->u,70,4));
L_1803da54b_5:;
wr(s->r,5124,4,rd(s->u,74,4));
L_1803da54b_6:;
wr(s->r,5128,4,rd(s->u,78,4));
L_1803da54b_7:;
wr(s->r,5132,4,rd(s->u,82,4));
L_1803da54b_8:;
/* 1803da551: mov rbx, qword ptr [rsp + 0x60] */
L_1803da551_0:;
L_1803da551_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803da551_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da551_3:;
wr(s->r,24,8,rd(s->u,44,8));
L_1803da551_4:;
/* 1803da556: mov rsi, qword ptr [rsp + 0x68] */
L_1803da556_0:;
L_1803da556_1:;
wr(s->u,8,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803da556_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da556_3:;
wr(s->r,48,8,rd(s->u,44,8));
L_1803da556_4:;
/* 1803da55b: add rsp, 0x50 */
L_1803da55b_0:;
L_1803da55b_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803da55b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803da55b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803da55b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da55b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da55b_6:;
wr(s->u,52,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da55b_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803da55b_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803da55b_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803da55b_10:;
/* 1803da55f: pop rdi */
L_1803da55f_0:;
L_1803da55f_1:;
wr(s->u,62,8,((U)UINT64_C(0x0)));
L_1803da55f_2:;
wr(s->u,62,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da55f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da55f_4:;
wr(s->r,56,8,rd(s->u,62,8));
L_1803da55f_5:;
/* 1803da560: ret  */
L_1803da560_0:;
L_1803da560_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da560_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da560_3:;
return (uint64_t)rd(s->r,648,8);
L_1803da560_4:;
return UINT64_C(0x1803da561);
}
uint64_t b_1803da53e(CPU*s){
/* 1803da53e: mov dword ptr [rbx + 0x398], edi */
L_1803da53e_0:;
L_1803da53e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x398))));
L_1803da53e_2:;
wr(s->u,16,4,rd(s->r,56,4));
L_1803da53e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da53e_4:;
/* 1803da544: xor eax, eax */
L_1803da544_0:;
L_1803da544_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da544_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da544_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803da544_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da544_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da544_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da544_7:;
wr(s->u,44,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da544_8:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803da544_9:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803da544_10:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803da544_11:;
/* 1803da546: movaps xmm7, xmmword ptr [rsp + 0x40] */
L_1803da546_0:;
L_1803da546_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803da546_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da546_3:;
wr(s->u,62,16,rd(s->u,20,16));
L_1803da546_4:;
wr(s->r,5056,4,rd(s->u,62,4));
L_1803da546_5:;
wr(s->r,5060,4,rd(s->u,66,4));
L_1803da546_6:;
wr(s->r,5064,4,rd(s->u,70,4));
L_1803da546_7:;
wr(s->r,5068,4,rd(s->u,74,4));
L_1803da546_8:;
/* 1803da54b: movaps xmm8, xmmword ptr [rsp + 0x30] */
L_1803da54b_0:;
L_1803da54b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803da54b_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da54b_3:;
wr(s->u,62,16,rd(s->u,20,16));
L_1803da54b_4:;
wr(s->r,5120,4,rd(s->u,62,4));
L_1803da54b_5:;
wr(s->r,5124,4,rd(s->u,66,4));
L_1803da54b_6:;
wr(s->r,5128,4,rd(s->u,70,4));
L_1803da54b_7:;
wr(s->r,5132,4,rd(s->u,74,4));
L_1803da54b_8:;
/* 1803da551: mov rbx, qword ptr [rsp + 0x60] */
L_1803da551_0:;
L_1803da551_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803da551_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da551_3:;
wr(s->r,24,8,rd(s->u,36,8));
L_1803da551_4:;
/* 1803da556: mov rsi, qword ptr [rsp + 0x68] */
L_1803da556_0:;
L_1803da556_1:;
wr(s->u,8,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803da556_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da556_3:;
wr(s->r,48,8,rd(s->u,36,8));
L_1803da556_4:;
/* 1803da55b: add rsp, 0x50 */
L_1803da55b_0:;
L_1803da55b_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803da55b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803da55b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803da55b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da55b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da55b_6:;
wr(s->u,44,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da55b_7:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803da55b_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803da55b_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803da55b_10:;
/* 1803da55f: pop rdi */
L_1803da55f_0:;
L_1803da55f_1:;
wr(s->u,54,8,((U)UINT64_C(0x0)));
L_1803da55f_2:;
wr(s->u,54,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da55f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da55f_4:;
wr(s->r,56,8,rd(s->u,54,8));
L_1803da55f_5:;
/* 1803da560: ret  */
L_1803da560_0:;
L_1803da560_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da560_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da560_3:;
return (uint64_t)rd(s->r,648,8);
L_1803da560_4:;
return UINT64_C(0x1803da561);
}
uint64_t b_1803da546(CPU*s){
/* 1803da546: movaps xmm7, xmmword ptr [rsp + 0x40] */
L_1803da546_0:;
L_1803da546_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803da546_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803da546_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803da546_4:;
wr(s->r,5056,4,rd(s->u,50,4));
L_1803da546_5:;
wr(s->r,5060,4,rd(s->u,54,4));
L_1803da546_6:;
wr(s->r,5064,4,rd(s->u,58,4));
L_1803da546_7:;
wr(s->r,5068,4,rd(s->u,62,4));
L_1803da546_8:;
/* 1803da54b: movaps xmm8, xmmword ptr [rsp + 0x30] */
L_1803da54b_0:;
L_1803da54b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803da54b_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803da54b_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803da54b_4:;
wr(s->r,5120,4,rd(s->u,50,4));
L_1803da54b_5:;
wr(s->r,5124,4,rd(s->u,54,4));
L_1803da54b_6:;
wr(s->r,5128,4,rd(s->u,58,4));
L_1803da54b_7:;
wr(s->r,5132,4,rd(s->u,62,4));
L_1803da54b_8:;
/* 1803da551: mov rbx, qword ptr [rsp + 0x60] */
L_1803da551_0:;
L_1803da551_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803da551_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da551_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803da551_4:;
/* 1803da556: mov rsi, qword ptr [rsp + 0x68] */
L_1803da556_0:;
L_1803da556_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803da556_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da556_3:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803da556_4:;
/* 1803da55b: add rsp, 0x50 */
L_1803da55b_0:;
L_1803da55b_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803da55b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803da55b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803da55b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da55b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da55b_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da55b_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803da55b_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803da55b_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803da55b_10:;
/* 1803da55f: pop rdi */
L_1803da55f_0:;
L_1803da55f_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803da55f_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da55f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da55f_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803da55f_5:;
/* 1803da560: ret  */
L_1803da560_0:;
L_1803da560_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da560_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da560_3:;
return (uint64_t)rd(s->r,648,8);
L_1803da560_4:;
return UINT64_C(0x1803da561);
}
uint64_t b_1803da561(CPU*s){
/* 1803da561: mov eax, 0x4c4b43 */
L_1803da561_0:;
L_1803da561_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803da561_2:;
/* 1803da566: jmp 0x1803da546 */
L_1803da566_0:;
L_1803da566_1:;
return UINT64_C(0x1803da546);
L_1803da566_2:;
return UINT64_C(0x1803da568);
}
uint64_t b_1803da568(CPU*s){
/* 1803da568: mov rbx, qword ptr [rsp + 0x60] */
L_1803da568_0:;
L_1803da568_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803da568_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da568_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803da568_4:;
/* 1803da56d: mov rsi, qword ptr [rsp + 0x68] */
L_1803da56d_0:;
L_1803da56d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803da56d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da56d_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803da56d_4:;
/* 1803da572: mov eax, 0x4c4b43 */
L_1803da572_0:;
L_1803da572_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803da572_2:;
/* 1803da577: add rsp, 0x50 */
L_1803da577_0:;
L_1803da577_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803da577_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803da577_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803da577_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da577_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da577_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da577_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803da577_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803da577_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803da577_10:;
/* 1803da57b: pop rdi */
L_1803da57b_0:;
L_1803da57b_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803da57b_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da57b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da57b_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803da57b_5:;
/* 1803da57c: ret  */
L_1803da57c_0:;
L_1803da57c_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da57c_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da57c_3:;
return (uint64_t)rd(s->r,648,8);
L_1803da57c_4:;
return UINT64_C(0x1803da57d);
}
uint64_t b_1803da580(CPU*s){
/* 1803da580: mov qword ptr [rsp + 8], rbx */
L_1803da580_0:;
L_1803da580_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803da580_2:;
wr(s->u,12,8,rd(s->r,24,8));
L_1803da580_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803da580_4:;
/* 1803da585: mov qword ptr [rsp + 0x10], rsi */
L_1803da585_0:;
L_1803da585_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803da585_2:;
wr(s->u,12,8,rd(s->r,48,8));
L_1803da585_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803da585_4:;
/* 1803da58a: push rdi */
L_1803da58a_0:;
L_1803da58a_1:;
wr(s->u,36,8,rd(s->r,56,8));
L_1803da58a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da58a_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,36,8));
L_1803da58a_4:;
/* 1803da58b: sub rsp, 0x60 */
L_1803da58b_0:;
L_1803da58b_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x60))));
L_1803da58b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x60)),8,1));
L_1803da58b_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x60))));
L_1803da58b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da58b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da58b_6:;
wr(s->u,44,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da58b_7:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803da58b_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803da58b_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803da58b_10:;
/* 1803da58f: movss xmm2, dword ptr [r8] */
L_1803da58f_0:;
L_1803da58f_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,128,8),4));
L_1803da58f_2:;
wr(s->r,4736,4,rd(s->u,8,4));
L_1803da58f_3:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803da58f_4:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803da58f_5:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803da58f_6:;
/* 1803da594: movaps xmmword ptr [rsp + 0x30], xmm9 */
L_1803da594_0:;
L_1803da594_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803da594_2:;
wr(s->u,20,16,rd(s->r,5184,16));
L_1803da594_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,20,16));
L_1803da594_4:;
/* 1803da59a: movaps xmm9, xmm1 */
L_1803da59a_0:;
L_1803da59a_1:;
wr(s->r,5184,4,rd(s->r,4672,4));
L_1803da59a_2:;
wr(s->r,5188,4,rd(s->r,4676,4));
L_1803da59a_3:;
wr(s->r,5192,4,rd(s->r,4680,4));
L_1803da59a_4:;
wr(s->r,5196,4,rd(s->r,4684,4));
L_1803da59a_5:;
/* 1803da59e: movzx esi, r9b */
L_1803da59e_0:;
L_1803da59e_1:;
wr(s->r,48,4,rd(s->r,136,1));
L_1803da59e_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803da59e_3:;
/* 1803da5a2: mov rdi, r8 */
L_1803da5a2_0:;
L_1803da5a2_1:;
wr(s->r,56,8,rd(s->r,128,8));
L_1803da5a2_2:;
/* 1803da5a5: mov rbx, rcx */
L_1803da5a5_0:;
L_1803da5a5_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803da5a5_2:;
/* 1803da5a8: movaps xmm0, xmm2 */
L_1803da5a8_0:;
L_1803da5a8_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803da5a8_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803da5a8_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803da5a8_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803da5a8_5:;
/* 1803da5ab: mulss xmm0, xmm9 */
L_1803da5ab_0:;
L_1803da5ab_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5184,4),4),4));
L_1803da5ab_2:;
/* 1803da5b0: comiss xmm0, dword ptr [rip + 0x27834d] */
L_1803da5b0_0:;
L_1803da5b0_1:;
wr(s->u,54,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803da5b0_2:;
wr(s->u,55,1,isnan(fv(mr(UINT64_C(0x180652904),4),4)));
L_1803da5b0_3:;
wr(s->r,514,1,((rd(s->u,54,1)!=0)||(rd(s->u,55,1)!=0)));
L_1803da5b0_4:;
wr(s->u,56,1,(fv(rd(s->r,4608,4),4)==fv(mr(UINT64_C(0x180652904),4),4)));
L_1803da5b0_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,56,1)));
L_1803da5b0_6:;
wr(s->u,57,1,(fv(rd(s->r,4608,4),4)<fv(mr(UINT64_C(0x180652904),4),4)));
L_1803da5b0_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,57,1)));
L_1803da5b0_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da5b0_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da5b0_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da5b0_11:;
/* 1803da5b7: jb 0x1803da8b8 */
L_1803da5b7_0:;
L_1803da5b7_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803da8b8);}
L_1803da5b7_2:;
return UINT64_C(0x1803da5bd);
}
uint64_t b_1803da5bd(CPU*s){
/* 1803da5bd: comiss xmm0, dword ptr [rip + 0x28b218] */
L_1803da5bd_0:;
L_1803da5bd_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803da5bd_2:;
wr(s->u,3,1,isnan(fv(mr(UINT64_C(0x1806657dc),4),4)));
L_1803da5bd_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803da5bd_4:;
wr(s->u,4,1,(fv(rd(s->r,4608,4),4)==fv(mr(UINT64_C(0x1806657dc),4),4)));
L_1803da5bd_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803da5bd_6:;
wr(s->u,5,1,(fv(rd(s->r,4608,4),4)<fv(mr(UINT64_C(0x1806657dc),4),4)));
L_1803da5bd_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803da5bd_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da5bd_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da5bd_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da5bd_11:;
/* 1803da5c4: ja 0x1803da8b8 */
L_1803da5c4_0:;
L_1803da5c4_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803da5c4_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803da5c4_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803da8b8);}
L_1803da5c4_4:;
return UINT64_C(0x1803da5ca);
}
uint64_t b_1803da5ca(CPU*s){
/* 1803da5ca: movaps xmmword ptr [rsp + 0x50], xmm6 */
L_1803da5ca_0:;
L_1803da5ca_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803da5ca_2:;
wr(s->u,20,16,rd(s->r,4992,16));
L_1803da5ca_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803da5ca_4:;
/* 1803da5cf: movss dword ptr [rcx + 0x318], xmm2 */
L_1803da5cf_0:;
L_1803da5cf_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x318))));
L_1803da5cf_2:;
wr(s->u,16,4,rd(s->r,4736,4));
L_1803da5cf_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da5cf_4:;
/* 1803da5d7: movaps xmmword ptr [rsp + 0x40], xmm8 */
L_1803da5d7_0:;
L_1803da5d7_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803da5d7_2:;
wr(s->u,20,16,rd(s->r,5120,16));
L_1803da5d7_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803da5d7_4:;
/* 1803da5dd: movss xmm8, dword ptr [rip + 0x27265e] */
L_1803da5dd_0:;
L_1803da5dd_1:;
wr(s->r,5120,4,mr(UINT64_C(0x18064cc44),4));
L_1803da5dd_2:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803da5dd_3:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803da5dd_4:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803da5dd_5:;
/* 1803da5e6: movaps xmm0, xmm8 */
L_1803da5e6_0:;
L_1803da5e6_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803da5e6_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803da5e6_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803da5e6_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803da5e6_5:;
/* 1803da5ea: movaps xmm6, xmm1 */
L_1803da5ea_0:;
L_1803da5ea_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803da5ea_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803da5ea_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803da5ea_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803da5ea_5:;
/* 1803da5ed: divss xmm0, dword ptr [r8] */
L_1803da5ed_0:;
L_1803da5ed_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,128,8),4));
L_1803da5ed_2:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->u,16,4),4),4));
L_1803da5ed_3:;
/* 1803da5f2: mulss xmm6, xmm2 */
L_1803da5f2_0:;
L_1803da5f2_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803da5f2_2:;
/* 1803da5f6: movss dword ptr [rcx + 0x310], xmm6 */
L_1803da5f6_0:;
L_1803da5f6_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x310))));
L_1803da5f6_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803da5f6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da5f6_4:;
/* 1803da5fe: movss dword ptr [rcx + 0x320], xmm0 */
L_1803da5fe_0:;
L_1803da5fe_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x320))));
L_1803da5fe_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803da5fe_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da5fe_4:;
/* 1803da606: movd xmm0, dword ptr [rcx + 0x368] */
L_1803da606_0:;
L_1803da606_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x368))));
L_1803da606_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da606_3:;
wr(s->r,4608,16,rd(s->u,36,4));
L_1803da606_4:;
/* 1803da60e: cvtdq2ps xmm0, xmm0 */
L_1803da60e_0:;
L_1803da60e_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803da60e_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803da60e_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803da60e_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803da60e_5:;
/* 1803da611: addss xmm0, xmm8 */
L_1803da611_0:;
L_1803da611_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803da611_2:;
/* 1803da616: call 0x180609c04 */
L_1803da616_0:;
L_1803da616_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da616_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da61b)));
L_1803da616_3:;
return (uint64_t)UINT64_C(0x180609c04);
L_1803da616_4:;
return UINT64_C(0x1803da61b);
}
uint64_t b_1803da61b(CPU*s){
/* 1803da61b: movaps xmm1, xmm0 */
L_1803da61b_0:;
L_1803da61b_1:;
wr(s->r,4672,4,rd(s->r,4608,4));
L_1803da61b_2:;
wr(s->r,4676,4,rd(s->r,4612,4));
L_1803da61b_3:;
wr(s->r,4680,4,rd(s->r,4616,4));
L_1803da61b_4:;
wr(s->r,4684,4,rd(s->r,4620,4));
L_1803da61b_5:;
/* 1803da61e: mulss xmm1, dword ptr [rip + 0x431efa] */
L_1803da61e_0:;
L_1803da61e_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(mr(UINT64_C(0x18080c520),4),4),4));
L_1803da61e_2:;
/* 1803da626: cvttss2si ecx, xmm1 */
L_1803da626_0:;
L_1803da626_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803da626_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da626_3:;
/* 1803da62a: cmp ecx, 0x80000000 */
L_1803da62a_0:;
L_1803da62a_1:;
wr(s->u,6,4,rd(s->r,8,4));
L_1803da62a_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x80000000))));
L_1803da62a_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x80000000)),4,1));
L_1803da62a_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x80000000))));
L_1803da62a_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da62a_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803da62a_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803da62a_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803da62a_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803da62a_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803da62a_11:;
/* 1803da630: je 0x1803da652 */
L_1803da630_0:;
L_1803da630_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803da652);}
L_1803da630_2:;
return UINT64_C(0x1803da632);
}
uint64_t b_1803da632(CPU*s){
/* 1803da632: pxor xmm0, xmm0 */
L_1803da632_0:;
L_1803da632_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803da632_2:;
/* 1803da636: cvtsi2ss xmm0, ecx */
L_1803da636_0:;
L_1803da636_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803da636_2:;
/* 1803da63a: ucomiss xmm0, xmm1 */
L_1803da63a_0:;
L_1803da63a_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803da63a_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803da63a_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803da63a_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803da63a_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803da63a_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803da63a_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803da63a_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da63a_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da63a_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da63a_11:;
/* 1803da63d: je 0x1803da652 */
L_1803da63d_0:;
L_1803da63d_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803da652);}
L_1803da63d_2:;
return UINT64_C(0x1803da63f);
}
uint64_t b_1803da63f(CPU*s){
/* 1803da63f: unpcklps xmm1, xmm1 */
L_1803da63f_0:;
L_1803da63f_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803da63f_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803da63f_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803da63f_4:;
/* 1803da642: movmskps eax, xmm1 */
L_1803da642_0:;
L_1803da642_1:;
wr(s->r,0,4,(((rd(s->r,4672,16)>>31)&1)<<0)|(((rd(s->r,4672,16)>>63)&1)<<1)|(((rd(s->r,4672,16)>>95)&1)<<2)|(((rd(s->r,4672,16)>>127)&1)<<3));
L_1803da642_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da642_3:;
/* 1803da645: pxor xmm1, xmm1 */
L_1803da645_0:;
L_1803da645_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803da645_2:;
/* 1803da649: and eax, 1 */
L_1803da649_0:;
L_1803da649_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da649_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da649_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803da649_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da649_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da649_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da649_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da649_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803da649_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803da649_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803da649_11:;
/* 1803da64c: sub ecx, eax */
L_1803da64c_0:;
L_1803da64c_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,0,4)));
L_1803da64c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,1));
L_1803da64c_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,0,4)));
L_1803da64c_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da64c_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da64c_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803da64c_7:;
wr(s->u,0,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803da64c_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803da64c_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803da64c_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803da64c_11:;
/* 1803da64e: cvtsi2ss xmm1, ecx */
L_1803da64e_0:;
L_1803da64e_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803da64e_2:;
/* 1803da652: movss xmm0, dword ptr [rip + 0x27ab96] */
L_1803da652_0:;
L_1803da652_1:;
wr(s->r,4608,4,mr(UINT64_C(0x1806551f0),4));
L_1803da652_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803da652_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803da652_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803da652_5:;
/* 1803da65a: call 0x180609a00 */
L_1803da65a_0:;
L_1803da65a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da65a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da65f)));
L_1803da65a_3:;
return (uint64_t)UINT64_C(0x180609a00);
L_1803da65a_4:;
return UINT64_C(0x1803da65f);
}
uint64_t b_1803da652(CPU*s){
/* 1803da652: movss xmm0, dword ptr [rip + 0x27ab96] */
L_1803da652_0:;
L_1803da652_1:;
wr(s->r,4608,4,mr(UINT64_C(0x1806551f0),4));
L_1803da652_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803da652_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803da652_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803da652_5:;
/* 1803da65a: call 0x180609a00 */
L_1803da65a_0:;
L_1803da65a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da65a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da65f)));
L_1803da65a_3:;
return (uint64_t)UINT64_C(0x180609a00);
L_1803da65a_4:;
return UINT64_C(0x1803da65f);
}
uint64_t b_1803da65f(CPU*s){
/* 1803da65f: mov ecx, dword ptr [rbx + 0x394] */
L_1803da65f_0:;
L_1803da65f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x394))));
L_1803da65f_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da65f_3:;
wr(s->r,8,4,rd(s->u,12,4));
L_1803da65f_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da65f_5:;
/* 1803da665: cvttss2si eax, xmm0 */
L_1803da665_0:;
L_1803da665_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803da665_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da665_3:;
/* 1803da669: mov dword ptr [rbx + 0x360], eax */
L_1803da669_0:;
L_1803da669_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x360))));
L_1803da669_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803da669_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da669_4:;
/* 1803da66f: test ecx, ecx */
L_1803da66f_0:;
L_1803da66f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da66f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da66f_3:;
wr(s->u,22,4,(rd(s->r,8,4)&rd(s->r,8,4)));
L_1803da66f_4:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da66f_5:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803da66f_6:;
wr(s->u,16,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803da66f_7:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803da66f_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803da66f_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803da66f_10:;
/* 1803da671: je 0x1803da67e */
L_1803da671_0:;
L_1803da671_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803da67e);}
L_1803da671_2:;
return UINT64_C(0x1803da673);
}
uint64_t b_1803da673(CPU*s){
/* 1803da673: sar eax, 2 */
L_1803da673_0:;
L_1803da673_1:;
wr(s->u,51,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803da673_2:;
wr(s->u,55,4,rd(s->r,0,4));
L_1803da673_3:;
wr(s->r,0,4,((rd(s->u,51,4)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,51,4))));
L_1803da673_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da673_5:;
wr(s->u,36,1,(rd(s->u,51,4)==((U)UINT64_C(0x0))));
L_1803da673_6:;
wr(s->u,37,4,(rd(s->u,51,4)-((U)UINT64_C(0x1))));
L_1803da673_7:;
wr(s->u,41,4,((rd(s->u,37,4)>=32)?(sx(rd(s->u,55,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,55,4),4)>>rd(s->u,37,4))));
L_1803da673_8:;
wr(s->u,45,4,(rd(s->u,41,4)&((U)UINT64_C(0x1))));
L_1803da673_9:;
wr(s->u,49,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803da673_10:;
wr(s->u,0,1,rd(s->u,36,1));
L_1803da673_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803da673_12:;
wr(s->u,2,1,(!rd(s->u,36,1)));
L_1803da673_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da673_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,49,1)));
L_1803da673_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da673_16:;
wr(s->u,50,1,(rd(s->u,51,4)==((U)UINT64_C(0x1))));
L_1803da673_17:;
wr(s->u,0,1,rd(s->u,50,1));
L_1803da673_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803da673_19:;
wr(s->u,2,1,(!rd(s->u,50,1)));
L_1803da673_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da673_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803da673_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da673_23:;
wr(s->u,17,1,(rd(s->u,51,4)!=((U)UINT64_C(0x0))));
L_1803da673_24:;
wr(s->u,18,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da673_25:;
wr(s->u,19,1,(!rd(s->u,17,1)));
L_1803da673_26:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,519,1)));
L_1803da673_27:;
wr(s->u,21,1,(rd(s->u,17,1)&rd(s->u,18,1)));
L_1803da673_28:;
wr(s->r,519,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803da673_29:;
wr(s->u,22,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da673_30:;
wr(s->u,23,1,(!rd(s->u,17,1)));
L_1803da673_31:;
wr(s->u,24,1,(rd(s->u,23,1)&rd(s->r,518,1)));
L_1803da673_32:;
wr(s->u,25,1,(rd(s->u,17,1)&rd(s->u,22,1)));
L_1803da673_33:;
wr(s->r,518,1,(rd(s->u,24,1)|rd(s->u,25,1)));
L_1803da673_34:;
wr(s->u,26,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da673_35:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803da673_36:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803da673_37:;
wr(s->u,32,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803da673_38:;
wr(s->u,33,1,(!rd(s->u,17,1)));
L_1803da673_39:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,514,1)));
L_1803da673_40:;
wr(s->u,35,1,(rd(s->u,17,1)&rd(s->u,32,1)));
L_1803da673_41:;
wr(s->r,514,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803da673_42:;
/* 1803da676: mov dword ptr [rbx + 0x358], eax */
L_1803da676_0:;
L_1803da676_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da676_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803da676_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803da676_4:;
/* 1803da67c: jmp 0x1803da687 */
L_1803da67c_0:;
L_1803da67c_1:;
return UINT64_C(0x1803da687);
L_1803da67c_2:;
return UINT64_C(0x1803da67e);
}
uint64_t b_1803da67e(CPU*s){
/* 1803da67e: sar eax, 2 */
L_1803da67e_0:;
L_1803da67e_1:;
wr(s->u,57,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803da67e_2:;
wr(s->u,61,4,rd(s->r,0,4));
L_1803da67e_3:;
wr(s->r,0,4,((rd(s->u,57,4)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,57,4))));
L_1803da67e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da67e_5:;
wr(s->u,38,1,(rd(s->u,57,4)==((U)UINT64_C(0x0))));
L_1803da67e_6:;
wr(s->u,39,4,(rd(s->u,57,4)-((U)UINT64_C(0x1))));
L_1803da67e_7:;
wr(s->u,43,4,((rd(s->u,39,4)>=32)?(sx(rd(s->u,61,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,61,4),4)>>rd(s->u,39,4))));
L_1803da67e_8:;
wr(s->u,47,4,(rd(s->u,43,4)&((U)UINT64_C(0x1))));
L_1803da67e_9:;
wr(s->u,51,1,(rd(s->u,47,4)!=((U)UINT64_C(0x0))));
L_1803da67e_10:;
wr(s->u,0,1,rd(s->u,38,1));
L_1803da67e_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803da67e_12:;
wr(s->u,2,1,(!rd(s->u,38,1)));
L_1803da67e_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da67e_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,51,1)));
L_1803da67e_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da67e_16:;
wr(s->u,52,1,(rd(s->u,57,4)==((U)UINT64_C(0x1))));
L_1803da67e_17:;
wr(s->u,0,1,rd(s->u,52,1));
L_1803da67e_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803da67e_19:;
wr(s->u,2,1,(!rd(s->u,52,1)));
L_1803da67e_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da67e_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803da67e_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da67e_23:;
wr(s->u,19,1,(rd(s->u,57,4)!=((U)UINT64_C(0x0))));
L_1803da67e_24:;
wr(s->u,20,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da67e_25:;
wr(s->u,21,1,(!rd(s->u,19,1)));
L_1803da67e_26:;
wr(s->u,22,1,(rd(s->u,21,1)&rd(s->r,519,1)));
L_1803da67e_27:;
wr(s->u,23,1,(rd(s->u,19,1)&rd(s->u,20,1)));
L_1803da67e_28:;
wr(s->r,519,1,(rd(s->u,22,1)|rd(s->u,23,1)));
L_1803da67e_29:;
wr(s->u,24,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da67e_30:;
wr(s->u,25,1,(!rd(s->u,19,1)));
L_1803da67e_31:;
wr(s->u,26,1,(rd(s->u,25,1)&rd(s->r,518,1)));
L_1803da67e_32:;
wr(s->u,27,1,(rd(s->u,19,1)&rd(s->u,24,1)));
L_1803da67e_33:;
wr(s->r,518,1,(rd(s->u,26,1)|rd(s->u,27,1)));
L_1803da67e_34:;
wr(s->u,28,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da67e_35:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803da67e_36:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803da67e_37:;
wr(s->u,34,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803da67e_38:;
wr(s->u,35,1,(!rd(s->u,19,1)));
L_1803da67e_39:;
wr(s->u,36,1,(rd(s->u,35,1)&rd(s->r,514,1)));
L_1803da67e_40:;
wr(s->u,37,1,(rd(s->u,19,1)&rd(s->u,34,1)));
L_1803da67e_41:;
wr(s->r,514,1,(rd(s->u,36,1)|rd(s->u,37,1)));
L_1803da67e_42:;
/* 1803da681: mov dword ptr [rbx + 0x358], eax */
L_1803da681_0:;
L_1803da681_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da681_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803da681_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803da681_4:;
/* 1803da687: comiss xmm6, dword ptr [rip + 0x280e52] */
L_1803da687_0:;
L_1803da687_1:;
wr(s->u,53,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803da687_2:;
wr(s->u,54,1,isnan(fv(mr(UINT64_C(0x18065b4e0),4),4)));
L_1803da687_3:;
wr(s->r,514,1,((rd(s->u,53,1)!=0)||(rd(s->u,54,1)!=0)));
L_1803da687_4:;
wr(s->u,55,1,(fv(rd(s->r,4992,4),4)==fv(mr(UINT64_C(0x18065b4e0),4),4)));
L_1803da687_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,55,1)));
L_1803da687_6:;
wr(s->u,56,1,(fv(rd(s->r,4992,4),4)<fv(mr(UINT64_C(0x18065b4e0),4),4)));
L_1803da687_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,56,1)));
L_1803da687_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da687_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da687_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da687_11:;
/* 1803da68e: ja 0x1803da6a6 */
L_1803da68e_0:;
L_1803da68e_1:;
wr(s->u,17,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803da68e_2:;
wr(s->u,18,1,(!rd(s->u,17,1)));
L_1803da68e_3:;
if(rd(s->u,18,1)){return UINT64_C(0x1803da6a6);}
L_1803da68e_4:;
return UINT64_C(0x1803da690);
}
uint64_t b_1803da687(CPU*s){
/* 1803da687: comiss xmm6, dword ptr [rip + 0x280e52] */
L_1803da687_0:;
L_1803da687_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803da687_2:;
wr(s->u,3,1,isnan(fv(mr(UINT64_C(0x18065b4e0),4),4)));
L_1803da687_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803da687_4:;
wr(s->u,4,1,(fv(rd(s->r,4992,4),4)==fv(mr(UINT64_C(0x18065b4e0),4),4)));
L_1803da687_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803da687_6:;
wr(s->u,5,1,(fv(rd(s->r,4992,4),4)<fv(mr(UINT64_C(0x18065b4e0),4),4)));
L_1803da687_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803da687_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da687_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da687_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da687_11:;
/* 1803da68e: ja 0x1803da6a6 */
L_1803da68e_0:;
L_1803da68e_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803da68e_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803da68e_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803da6a6);}
L_1803da68e_4:;
return UINT64_C(0x1803da690);
}
uint64_t b_1803da690(CPU*s){
/* 1803da690: test ecx, ecx */
L_1803da690_0:;
L_1803da690_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da690_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da690_3:;
wr(s->u,6,4,(rd(s->r,8,4)&rd(s->r,8,4)));
L_1803da690_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da690_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803da690_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803da690_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803da690_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803da690_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803da690_10:;
/* 1803da692: je 0x1803da69e */
L_1803da692_0:;
L_1803da692_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803da69e);}
L_1803da692_2:;
return UINT64_C(0x1803da694);
}
uint64_t b_1803da694(CPU*s){
/* 1803da694: sar eax, 1 */
L_1803da694_0:;
L_1803da694_1:;
wr(s->u,18,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803da694_2:;
wr(s->r,512,1,(rd(s->u,18,4)!=((U)UINT64_C(0x0))));
L_1803da694_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da694_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803da694_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da694_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da694_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da694_8:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da694_9:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803da694_10:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803da694_11:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803da694_12:;
/* 1803da696: mov dword ptr [rbx + 0x358], eax */
L_1803da696_0:;
L_1803da696_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da696_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803da696_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da696_4:;
/* 1803da69c: jmp 0x1803da70c */
L_1803da69c_0:;
L_1803da69c_1:;
return UINT64_C(0x1803da70c);
L_1803da69c_2:;
return UINT64_C(0x1803da69e);
}
uint64_t b_1803da69e(CPU*s){
/* 1803da69e: mov dword ptr [rbx + 0x358], eax */
L_1803da69e_0:;
L_1803da69e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da69e_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803da69e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da69e_4:;
/* 1803da6a4: jmp 0x1803da70c */
L_1803da6a4_0:;
L_1803da6a4_1:;
return UINT64_C(0x1803da70c);
L_1803da6a4_2:;
return UINT64_C(0x1803da6a6);
}
uint64_t b_1803da6a6(CPU*s){
/* 1803da6a6: unpcklps xmm6, xmm6 */
L_1803da6a6_0:;
L_1803da6a6_1:;
wr(s->r,5000,4,rd(s->r,4996,4));
L_1803da6a6_2:;
wr(s->r,5004,4,rd(s->r,4996,4));
L_1803da6a6_3:;
wr(s->r,4996,4,rd(s->r,4992,4));
L_1803da6a6_4:;
/* 1803da6a9: cvtps2pd xmm0, xmm6 */
L_1803da6a9_0:;
L_1803da6a9_1:;
wr(s->u,6,8,rd(s->r,4992,8));
L_1803da6a9_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,6,4),4),8));
L_1803da6a9_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,10,4),4),8));
L_1803da6a9_4:;
/* 1803da6ac: comisd xmm0, xmmword ptr [rip + 0x2748ec] */
L_1803da6ac_0:;
L_1803da6ac_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803da6ac_2:;
wr(s->u,3,1,isnan(fv(mr(UINT64_C(0x18064efa0),8),8)));
L_1803da6ac_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803da6ac_4:;
wr(s->u,4,1,(fv(rd(s->r,4608,8),8)==fv(mr(UINT64_C(0x18064efa0),8),8)));
L_1803da6ac_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803da6ac_6:;
wr(s->u,5,1,(fv(rd(s->r,4608,8),8)<fv(mr(UINT64_C(0x18064efa0),8),8)));
L_1803da6ac_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803da6ac_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da6ac_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da6ac_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da6ac_11:;
/* 1803da6b4: ja 0x1803da6c0 */
L_1803da6b4_0:;
L_1803da6b4_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803da6b4_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803da6b4_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803da6c0);}
L_1803da6b4_4:;
return UINT64_C(0x1803da6b6);
}
uint64_t b_1803da6b6(CPU*s){
/* 1803da6b6: sar eax, 1 */
L_1803da6b6_0:;
L_1803da6b6_1:;
wr(s->u,18,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803da6b6_2:;
wr(s->r,512,1,(rd(s->u,18,4)!=((U)UINT64_C(0x0))));
L_1803da6b6_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da6b6_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803da6b6_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da6b6_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da6b6_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da6b6_8:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da6b6_9:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803da6b6_10:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803da6b6_11:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803da6b6_12:;
/* 1803da6b8: mov dword ptr [rbx + 0x358], eax */
L_1803da6b8_0:;
L_1803da6b8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da6b8_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803da6b8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da6b8_4:;
/* 1803da6be: jmp 0x1803da70c */
L_1803da6be_0:;
L_1803da6be_1:;
return UINT64_C(0x1803da70c);
L_1803da6be_2:;
return UINT64_C(0x1803da6c0);
}
uint64_t b_1803da6c0(CPU*s){
/* 1803da6c0: unpcklps xmm6, xmm6 */
L_1803da6c0_0:;
L_1803da6c0_1:;
wr(s->r,5000,4,rd(s->r,4996,4));
L_1803da6c0_2:;
wr(s->r,5004,4,rd(s->r,4996,4));
L_1803da6c0_3:;
wr(s->r,4996,4,rd(s->r,4992,4));
L_1803da6c0_4:;
/* 1803da6c3: cvtps2pd xmm0, xmm6 */
L_1803da6c3_0:;
L_1803da6c3_1:;
wr(s->u,6,8,rd(s->r,4992,8));
L_1803da6c3_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,6,4),4),8));
L_1803da6c3_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,10,4),4),8));
L_1803da6c3_4:;
/* 1803da6c6: comisd xmm0, xmmword ptr [rip + 0x431e4a] */
L_1803da6c6_0:;
L_1803da6c6_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803da6c6_2:;
wr(s->u,3,1,isnan(fv(mr(UINT64_C(0x18080c518),8),8)));
L_1803da6c6_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803da6c6_4:;
wr(s->u,4,1,(fv(rd(s->r,4608,8),8)==fv(mr(UINT64_C(0x18080c518),8),8)));
L_1803da6c6_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803da6c6_6:;
wr(s->u,5,1,(fv(rd(s->r,4608,8),8)<fv(mr(UINT64_C(0x18080c518),8),8)));
L_1803da6c6_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803da6c6_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da6c6_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da6c6_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da6c6_11:;
/* 1803da6ce: ja 0x1803da6db */
L_1803da6ce_0:;
L_1803da6ce_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803da6ce_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803da6ce_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803da6db);}
L_1803da6ce_4:;
return UINT64_C(0x1803da6d0);
}
uint64_t b_1803da6d0(CPU*s){
/* 1803da6d0: sar eax, 2 */
L_1803da6d0_0:;
L_1803da6d0_1:;
wr(s->u,51,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803da6d0_2:;
wr(s->u,55,4,rd(s->r,0,4));
L_1803da6d0_3:;
wr(s->r,0,4,((rd(s->u,51,4)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,51,4))));
L_1803da6d0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da6d0_5:;
wr(s->u,36,1,(rd(s->u,51,4)==((U)UINT64_C(0x0))));
L_1803da6d0_6:;
wr(s->u,37,4,(rd(s->u,51,4)-((U)UINT64_C(0x1))));
L_1803da6d0_7:;
wr(s->u,41,4,((rd(s->u,37,4)>=32)?(sx(rd(s->u,55,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,55,4),4)>>rd(s->u,37,4))));
L_1803da6d0_8:;
wr(s->u,45,4,(rd(s->u,41,4)&((U)UINT64_C(0x1))));
L_1803da6d0_9:;
wr(s->u,49,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803da6d0_10:;
wr(s->u,0,1,rd(s->u,36,1));
L_1803da6d0_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803da6d0_12:;
wr(s->u,2,1,(!rd(s->u,36,1)));
L_1803da6d0_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da6d0_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,49,1)));
L_1803da6d0_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da6d0_16:;
wr(s->u,50,1,(rd(s->u,51,4)==((U)UINT64_C(0x1))));
L_1803da6d0_17:;
wr(s->u,0,1,rd(s->u,50,1));
L_1803da6d0_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803da6d0_19:;
wr(s->u,2,1,(!rd(s->u,50,1)));
L_1803da6d0_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da6d0_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803da6d0_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da6d0_23:;
wr(s->u,17,1,(rd(s->u,51,4)!=((U)UINT64_C(0x0))));
L_1803da6d0_24:;
wr(s->u,18,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da6d0_25:;
wr(s->u,19,1,(!rd(s->u,17,1)));
L_1803da6d0_26:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,519,1)));
L_1803da6d0_27:;
wr(s->u,21,1,(rd(s->u,17,1)&rd(s->u,18,1)));
L_1803da6d0_28:;
wr(s->r,519,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803da6d0_29:;
wr(s->u,22,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da6d0_30:;
wr(s->u,23,1,(!rd(s->u,17,1)));
L_1803da6d0_31:;
wr(s->u,24,1,(rd(s->u,23,1)&rd(s->r,518,1)));
L_1803da6d0_32:;
wr(s->u,25,1,(rd(s->u,17,1)&rd(s->u,22,1)));
L_1803da6d0_33:;
wr(s->r,518,1,(rd(s->u,24,1)|rd(s->u,25,1)));
L_1803da6d0_34:;
wr(s->u,26,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da6d0_35:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803da6d0_36:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803da6d0_37:;
wr(s->u,32,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803da6d0_38:;
wr(s->u,33,1,(!rd(s->u,17,1)));
L_1803da6d0_39:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,514,1)));
L_1803da6d0_40:;
wr(s->u,35,1,(rd(s->u,17,1)&rd(s->u,32,1)));
L_1803da6d0_41:;
wr(s->r,514,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803da6d0_42:;
/* 1803da6d3: mov dword ptr [rbx + 0x358], eax */
L_1803da6d3_0:;
L_1803da6d3_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da6d3_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803da6d3_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803da6d3_4:;
/* 1803da6d9: jmp 0x1803da70c */
L_1803da6d9_0:;
L_1803da6d9_1:;
return UINT64_C(0x1803da70c);
L_1803da6d9_2:;
return UINT64_C(0x1803da6db);
}
uint64_t b_1803da6db(CPU*s){
/* 1803da6db: unpcklps xmm6, xmm6 */
L_1803da6db_0:;
L_1803da6db_1:;
wr(s->r,5000,4,rd(s->r,4996,4));
L_1803da6db_2:;
wr(s->r,5004,4,rd(s->r,4996,4));
L_1803da6db_3:;
wr(s->r,4996,4,rd(s->r,4992,4));
L_1803da6db_4:;
/* 1803da6de: cvtps2pd xmm0, xmm6 */
L_1803da6de_0:;
L_1803da6de_1:;
wr(s->u,6,8,rd(s->r,4992,8));
L_1803da6de_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,6,4),4),8));
L_1803da6de_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,10,4),4),8));
L_1803da6de_4:;
/* 1803da6e1: comisd xmm0, xmmword ptr [rip + 0x431e27] */
L_1803da6e1_0:;
L_1803da6e1_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803da6e1_2:;
wr(s->u,3,1,isnan(fv(mr(UINT64_C(0x18080c510),8),8)));
L_1803da6e1_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803da6e1_4:;
wr(s->u,4,1,(fv(rd(s->r,4608,8),8)==fv(mr(UINT64_C(0x18080c510),8),8)));
L_1803da6e1_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803da6e1_6:;
wr(s->u,5,1,(fv(rd(s->r,4608,8),8)<fv(mr(UINT64_C(0x18080c510),8),8)));
L_1803da6e1_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803da6e1_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da6e1_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da6e1_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da6e1_11:;
/* 1803da6e9: ja 0x1803da6f6 */
L_1803da6e9_0:;
L_1803da6e9_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803da6e9_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803da6e9_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803da6f6);}
L_1803da6e9_4:;
return UINT64_C(0x1803da6eb);
}
uint64_t b_1803da6eb(CPU*s){
/* 1803da6eb: sar eax, 3 */
L_1803da6eb_0:;
L_1803da6eb_1:;
wr(s->u,51,4,(((U)UINT64_C(0x3))&((U)UINT64_C(0x1f))));
L_1803da6eb_2:;
wr(s->u,55,4,rd(s->r,0,4));
L_1803da6eb_3:;
wr(s->r,0,4,((rd(s->u,51,4)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,51,4))));
L_1803da6eb_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da6eb_5:;
wr(s->u,36,1,(rd(s->u,51,4)==((U)UINT64_C(0x0))));
L_1803da6eb_6:;
wr(s->u,37,4,(rd(s->u,51,4)-((U)UINT64_C(0x1))));
L_1803da6eb_7:;
wr(s->u,41,4,((rd(s->u,37,4)>=32)?(sx(rd(s->u,55,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,55,4),4)>>rd(s->u,37,4))));
L_1803da6eb_8:;
wr(s->u,45,4,(rd(s->u,41,4)&((U)UINT64_C(0x1))));
L_1803da6eb_9:;
wr(s->u,49,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803da6eb_10:;
wr(s->u,0,1,rd(s->u,36,1));
L_1803da6eb_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803da6eb_12:;
wr(s->u,2,1,(!rd(s->u,36,1)));
L_1803da6eb_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da6eb_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,49,1)));
L_1803da6eb_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da6eb_16:;
wr(s->u,50,1,(rd(s->u,51,4)==((U)UINT64_C(0x1))));
L_1803da6eb_17:;
wr(s->u,0,1,rd(s->u,50,1));
L_1803da6eb_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803da6eb_19:;
wr(s->u,2,1,(!rd(s->u,50,1)));
L_1803da6eb_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da6eb_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803da6eb_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da6eb_23:;
wr(s->u,17,1,(rd(s->u,51,4)!=((U)UINT64_C(0x0))));
L_1803da6eb_24:;
wr(s->u,18,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da6eb_25:;
wr(s->u,19,1,(!rd(s->u,17,1)));
L_1803da6eb_26:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,519,1)));
L_1803da6eb_27:;
wr(s->u,21,1,(rd(s->u,17,1)&rd(s->u,18,1)));
L_1803da6eb_28:;
wr(s->r,519,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803da6eb_29:;
wr(s->u,22,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da6eb_30:;
wr(s->u,23,1,(!rd(s->u,17,1)));
L_1803da6eb_31:;
wr(s->u,24,1,(rd(s->u,23,1)&rd(s->r,518,1)));
L_1803da6eb_32:;
wr(s->u,25,1,(rd(s->u,17,1)&rd(s->u,22,1)));
L_1803da6eb_33:;
wr(s->r,518,1,(rd(s->u,24,1)|rd(s->u,25,1)));
L_1803da6eb_34:;
wr(s->u,26,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da6eb_35:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803da6eb_36:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803da6eb_37:;
wr(s->u,32,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803da6eb_38:;
wr(s->u,33,1,(!rd(s->u,17,1)));
L_1803da6eb_39:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,514,1)));
L_1803da6eb_40:;
wr(s->u,35,1,(rd(s->u,17,1)&rd(s->u,32,1)));
L_1803da6eb_41:;
wr(s->r,514,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803da6eb_42:;
/* 1803da6ee: mov dword ptr [rbx + 0x358], eax */
L_1803da6ee_0:;
L_1803da6ee_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da6ee_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803da6ee_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803da6ee_4:;
/* 1803da6f4: jmp 0x1803da70c */
L_1803da6f4_0:;
L_1803da6f4_1:;
return UINT64_C(0x1803da70c);
L_1803da6f4_2:;
return UINT64_C(0x1803da6f6);
}
uint64_t b_1803da6f6(CPU*s){
/* 1803da6f6: comiss xmm6, dword ptr [rip + 0x28b0df] */
L_1803da6f6_0:;
L_1803da6f6_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803da6f6_2:;
wr(s->u,3,1,isnan(fv(mr(UINT64_C(0x1806657dc),4),4)));
L_1803da6f6_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803da6f6_4:;
wr(s->u,4,1,(fv(rd(s->r,4992,4),4)==fv(mr(UINT64_C(0x1806657dc),4),4)));
L_1803da6f6_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803da6f6_6:;
wr(s->u,5,1,(fv(rd(s->r,4992,4),4)<fv(mr(UINT64_C(0x1806657dc),4),4)));
L_1803da6f6_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803da6f6_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da6f6_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803da6f6_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803da6f6_11:;
/* 1803da6fd: ja 0x1803da8b1 */
L_1803da6fd_0:;
L_1803da6fd_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803da6fd_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803da6fd_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803da8b1);}
L_1803da6fd_4:;
return UINT64_C(0x1803da703);
}
uint64_t b_1803da703(CPU*s){
/* 1803da703: sar eax, 4 */
L_1803da703_0:;
L_1803da703_1:;
wr(s->u,78,4,(((U)UINT64_C(0x4))&((U)UINT64_C(0x1f))));
L_1803da703_2:;
wr(s->u,82,4,rd(s->r,0,4));
L_1803da703_3:;
wr(s->r,0,4,((rd(s->u,78,4)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,78,4))));
L_1803da703_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da703_5:;
wr(s->u,55,1,(rd(s->u,78,4)==((U)UINT64_C(0x0))));
L_1803da703_6:;
wr(s->u,56,4,(rd(s->u,78,4)-((U)UINT64_C(0x1))));
L_1803da703_7:;
wr(s->u,60,4,((rd(s->u,56,4)>=32)?(sx(rd(s->u,82,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,82,4),4)>>rd(s->u,56,4))));
L_1803da703_8:;
wr(s->u,64,4,(rd(s->u,60,4)&((U)UINT64_C(0x1))));
L_1803da703_9:;
wr(s->u,68,1,(rd(s->u,64,4)!=((U)UINT64_C(0x0))));
L_1803da703_10:;
wr(s->u,0,1,rd(s->u,55,1));
L_1803da703_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803da703_12:;
wr(s->u,2,1,(!rd(s->u,55,1)));
L_1803da703_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da703_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,68,1)));
L_1803da703_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da703_16:;
wr(s->u,69,1,(rd(s->u,78,4)==((U)UINT64_C(0x1))));
L_1803da703_17:;
wr(s->u,0,1,rd(s->u,69,1));
L_1803da703_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803da703_19:;
wr(s->u,2,1,(!rd(s->u,69,1)));
L_1803da703_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803da703_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803da703_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803da703_23:;
wr(s->u,36,1,(rd(s->u,78,4)!=((U)UINT64_C(0x0))));
L_1803da703_24:;
wr(s->u,37,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da703_25:;
wr(s->u,38,1,(!rd(s->u,36,1)));
L_1803da703_26:;
wr(s->u,39,1,(rd(s->u,38,1)&rd(s->r,519,1)));
L_1803da703_27:;
wr(s->u,40,1,(rd(s->u,36,1)&rd(s->u,37,1)));
L_1803da703_28:;
wr(s->r,519,1,(rd(s->u,39,1)|rd(s->u,40,1)));
L_1803da703_29:;
wr(s->u,41,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da703_30:;
wr(s->u,42,1,(!rd(s->u,36,1)));
L_1803da703_31:;
wr(s->u,43,1,(rd(s->u,42,1)&rd(s->r,518,1)));
L_1803da703_32:;
wr(s->u,44,1,(rd(s->u,36,1)&rd(s->u,41,1)));
L_1803da703_33:;
wr(s->r,518,1,(rd(s->u,43,1)|rd(s->u,44,1)));
L_1803da703_34:;
wr(s->u,45,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da703_35:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803da703_36:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803da703_37:;
wr(s->u,51,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803da703_38:;
wr(s->u,52,1,(!rd(s->u,36,1)));
L_1803da703_39:;
wr(s->u,53,1,(rd(s->u,52,1)&rd(s->r,514,1)));
L_1803da703_40:;
wr(s->u,54,1,(rd(s->u,36,1)&rd(s->u,51,1)));
L_1803da703_41:;
wr(s->r,514,1,(rd(s->u,53,1)|rd(s->u,54,1)));
L_1803da703_42:;
/* 1803da706: mov dword ptr [rbx + 0x358], eax */
L_1803da706_0:;
L_1803da706_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da706_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803da706_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803da706_4:;
/* 1803da70c: movd xmm1, dword ptr [rbx + 0x358] */
L_1803da70c_0:;
L_1803da70c_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da70c_2:;
wr(s->u,25,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803da70c_3:;
wr(s->r,4672,16,rd(s->u,25,4));
L_1803da70c_4:;
/* 1803da714: cvtdq2ps xmm1, xmm1 */
L_1803da714_0:;
L_1803da714_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803da714_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803da714_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803da714_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803da714_5:;
/* 1803da717: movaps xmm0, xmm1 */
L_1803da717_0:;
L_1803da717_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803da717_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803da717_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803da717_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803da717_5:;
/* 1803da71a: mulss xmm0, xmm6 */
L_1803da71a_0:;
L_1803da71a_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803da71a_2:;
/* 1803da71e: cvttss2si eax, xmm0 */
L_1803da71e_0:;
L_1803da71e_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803da71e_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da71e_3:;
/* 1803da722: movaps xmm0, xmm8 */
L_1803da722_0:;
L_1803da722_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803da722_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803da722_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803da722_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803da722_5:;
/* 1803da726: and eax, 0xfffffffe */
L_1803da726_0:;
L_1803da726_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da726_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da726_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xfffffffe))));
L_1803da726_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da726_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da726_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da726_7:;
wr(s->u,30,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da726_8:;
wr(s->u,34,1,pop(rd(s->u,30,4),4));
L_1803da726_9:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803da726_10:;
wr(s->r,514,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803da726_11:;
/* 1803da729: mov dword ptr [rbx + 0x35c], eax */
L_1803da729_0:;
L_1803da729_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x35c))));
L_1803da729_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803da729_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803da729_4:;
/* 1803da72f: movd xmm2, eax */
L_1803da72f_0:;
L_1803da72f_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803da72f_2:;
/* 1803da733: cvtdq2ps xmm2, xmm2 */
L_1803da733_0:;
L_1803da733_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803da733_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803da733_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803da733_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803da733_5:;
/* 1803da736: divss xmm2, xmm1 */
L_1803da736_0:;
L_1803da736_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803da736_2:;
/* 1803da73a: divss xmm0, xmm2 */
L_1803da73a_0:;
L_1803da73a_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803da73a_2:;
/* 1803da73e: movss dword ptr [rbx + 0x310], xmm2 */
L_1803da73e_0:;
L_1803da73e_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x310))));
L_1803da73e_2:;
wr(s->u,13,4,rd(s->r,4736,4));
L_1803da73e_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803da73e_4:;
/* 1803da746: divss xmm2, xmm9 */
L_1803da746_0:;
L_1803da746_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)/fv(rd(s->r,5184,4),4),4));
L_1803da746_2:;
/* 1803da74b: unpcklps xmm0, xmm0 */
L_1803da74b_0:;
L_1803da74b_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803da74b_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803da74b_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803da74b_4:;
/* 1803da74e: cvtps2pd xmm0, xmm0 */
L_1803da74e_0:;
L_1803da74e_1:;
wr(s->u,86,8,rd(s->r,4608,8));
L_1803da74e_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,86,4),4),8));
L_1803da74e_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,90,4),4),8));
L_1803da74e_4:;
/* 1803da751: movsd qword ptr [rbx + 0x328], xmm0 */
L_1803da751_0:;
L_1803da751_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x328))));
L_1803da751_2:;
wr(s->u,17,8,rd(s->r,4608,8));
L_1803da751_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,17,8));
L_1803da751_4:;
/* 1803da759: movaps xmm0, xmm8 */
L_1803da759_0:;
L_1803da759_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803da759_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803da759_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803da759_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803da759_5:;
/* 1803da75d: divss xmm0, xmm2 */
L_1803da75d_0:;
L_1803da75d_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803da75d_2:;
/* 1803da761: movss dword ptr [rbx + 0x318], xmm2 */
L_1803da761_0:;
L_1803da761_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x318))));
L_1803da761_2:;
wr(s->u,13,4,rd(s->r,4736,4));
L_1803da761_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803da761_4:;
/* 1803da769: movss dword ptr [rbx + 0x320], xmm0 */
L_1803da769_0:;
L_1803da769_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x320))));
L_1803da769_2:;
wr(s->u,13,4,rd(s->r,4608,4));
L_1803da769_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803da769_4:;
/* 1803da771: movss dword ptr [rdi], xmm2 */
L_1803da771_0:;
L_1803da771_1:;
wr(s->u,13,4,rd(s->r,4736,4));
L_1803da771_2:;
mw((uint64_t)rd(s->r,56,8),4,rd(s->u,13,4));
L_1803da771_3:;
/* 1803da775: cmp dword ptr [rbx + 0x390], 1 */
L_1803da775_0:;
L_1803da775_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x390))));
L_1803da775_2:;
wr(s->u,25,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803da775_3:;
wr(s->u,70,4,rd(s->u,25,4));
L_1803da775_4:;
wr(s->r,512,1,(rd(s->u,70,4)<((U)UINT64_C(0x1))));
L_1803da775_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,70,4),((U)UINT64_C(0x1)),4,1));
L_1803da775_6:;
wr(s->u,74,4,(rd(s->u,70,4)-((U)UINT64_C(0x1))));
L_1803da775_7:;
wr(s->r,519,1,(sx(rd(s->u,74,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da775_8:;
wr(s->r,518,1,(rd(s->u,74,4)==((U)UINT64_C(0x0))));
L_1803da775_9:;
wr(s->u,30,4,(rd(s->u,74,4)&((U)UINT64_C(0xff))));
L_1803da775_10:;
wr(s->u,34,1,pop(rd(s->u,30,4),4));
L_1803da775_11:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803da775_12:;
wr(s->r,514,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803da775_13:;
/* 1803da77c: jne 0x1803da7e8 */
L_1803da77c_0:;
L_1803da77c_1:;
wr(s->u,29,1,(!rd(s->r,518,1)));
L_1803da77c_2:;
if(rd(s->u,29,1)){return UINT64_C(0x1803da7e8);}
L_1803da77c_3:;
return UINT64_C(0x1803da77e);
}
uint64_t b_1803da70c(CPU*s){
/* 1803da70c: movd xmm1, dword ptr [rbx + 0x358] */
L_1803da70c_0:;
L_1803da70c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da70c_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da70c_3:;
wr(s->r,4672,16,rd(s->u,20,4));
L_1803da70c_4:;
/* 1803da714: cvtdq2ps xmm1, xmm1 */
L_1803da714_0:;
L_1803da714_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803da714_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803da714_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803da714_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803da714_5:;
/* 1803da717: movaps xmm0, xmm1 */
L_1803da717_0:;
L_1803da717_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803da717_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803da717_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803da717_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803da717_5:;
/* 1803da71a: mulss xmm0, xmm6 */
L_1803da71a_0:;
L_1803da71a_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803da71a_2:;
/* 1803da71e: cvttss2si eax, xmm0 */
L_1803da71e_0:;
L_1803da71e_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803da71e_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da71e_3:;
/* 1803da722: movaps xmm0, xmm8 */
L_1803da722_0:;
L_1803da722_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803da722_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803da722_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803da722_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803da722_5:;
/* 1803da726: and eax, 0xfffffffe */
L_1803da726_0:;
L_1803da726_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da726_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da726_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xfffffffe))));
L_1803da726_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da726_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da726_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da726_7:;
wr(s->u,25,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da726_8:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803da726_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803da726_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803da726_11:;
/* 1803da729: mov dword ptr [rbx + 0x35c], eax */
L_1803da729_0:;
L_1803da729_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x35c))));
L_1803da729_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803da729_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da729_4:;
/* 1803da72f: movd xmm2, eax */
L_1803da72f_0:;
L_1803da72f_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803da72f_2:;
/* 1803da733: cvtdq2ps xmm2, xmm2 */
L_1803da733_0:;
L_1803da733_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803da733_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803da733_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803da733_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803da733_5:;
/* 1803da736: divss xmm2, xmm1 */
L_1803da736_0:;
L_1803da736_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803da736_2:;
/* 1803da73a: divss xmm0, xmm2 */
L_1803da73a_0:;
L_1803da73a_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803da73a_2:;
/* 1803da73e: movss dword ptr [rbx + 0x310], xmm2 */
L_1803da73e_0:;
L_1803da73e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x310))));
L_1803da73e_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803da73e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da73e_4:;
/* 1803da746: divss xmm2, xmm9 */
L_1803da746_0:;
L_1803da746_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)/fv(rd(s->r,5184,4),4),4));
L_1803da746_2:;
/* 1803da74b: unpcklps xmm0, xmm0 */
L_1803da74b_0:;
L_1803da74b_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803da74b_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803da74b_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803da74b_4:;
/* 1803da74e: cvtps2pd xmm0, xmm0 */
L_1803da74e_0:;
L_1803da74e_1:;
wr(s->u,39,8,rd(s->r,4608,8));
L_1803da74e_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,39,4),4),8));
L_1803da74e_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,43,4),4),8));
L_1803da74e_4:;
/* 1803da751: movsd qword ptr [rbx + 0x328], xmm0 */
L_1803da751_0:;
L_1803da751_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x328))));
L_1803da751_2:;
wr(s->u,12,8,rd(s->r,4608,8));
L_1803da751_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803da751_4:;
/* 1803da759: movaps xmm0, xmm8 */
L_1803da759_0:;
L_1803da759_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803da759_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803da759_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803da759_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803da759_5:;
/* 1803da75d: divss xmm0, xmm2 */
L_1803da75d_0:;
L_1803da75d_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803da75d_2:;
/* 1803da761: movss dword ptr [rbx + 0x318], xmm2 */
L_1803da761_0:;
L_1803da761_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x318))));
L_1803da761_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803da761_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da761_4:;
/* 1803da769: movss dword ptr [rbx + 0x320], xmm0 */
L_1803da769_0:;
L_1803da769_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x320))));
L_1803da769_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803da769_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da769_4:;
/* 1803da771: movss dword ptr [rdi], xmm2 */
L_1803da771_0:;
L_1803da771_1:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803da771_2:;
mw((uint64_t)rd(s->r,56,8),4,rd(s->u,8,4));
L_1803da771_3:;
/* 1803da775: cmp dword ptr [rbx + 0x390], 1 */
L_1803da775_0:;
L_1803da775_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x390))));
L_1803da775_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da775_3:;
wr(s->u,31,4,rd(s->u,20,4));
L_1803da775_4:;
wr(s->r,512,1,(rd(s->u,31,4)<((U)UINT64_C(0x1))));
L_1803da775_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,31,4),((U)UINT64_C(0x1)),4,1));
L_1803da775_6:;
wr(s->u,35,4,(rd(s->u,31,4)-((U)UINT64_C(0x1))));
L_1803da775_7:;
wr(s->r,519,1,(sx(rd(s->u,35,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da775_8:;
wr(s->r,518,1,(rd(s->u,35,4)==((U)UINT64_C(0x0))));
L_1803da775_9:;
wr(s->u,25,4,(rd(s->u,35,4)&((U)UINT64_C(0xff))));
L_1803da775_10:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803da775_11:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803da775_12:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803da775_13:;
/* 1803da77c: jne 0x1803da7e8 */
L_1803da77c_0:;
L_1803da77c_1:;
wr(s->u,24,1,(!rd(s->r,518,1)));
L_1803da77c_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803da7e8);}
L_1803da77c_3:;
return UINT64_C(0x1803da77e);
}
uint64_t b_1803da77e(CPU*s){
/* 1803da77e: test sil, sil */
L_1803da77e_0:;
L_1803da77e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da77e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da77e_3:;
wr(s->u,3,1,(rd(s->r,48,1)&rd(s->r,48,1)));
L_1803da77e_4:;
wr(s->r,519,1,(sx(rd(s->u,3,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803da77e_5:;
wr(s->r,518,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_1803da77e_6:;
wr(s->u,0,1,(rd(s->u,3,1)&((U)UINT64_C(0xff))));
L_1803da77e_7:;
wr(s->u,1,1,pop(rd(s->u,0,1),1));
L_1803da77e_8:;
wr(s->u,2,1,(rd(s->u,1,1)&((U)UINT64_C(0x1))));
L_1803da77e_9:;
wr(s->r,514,1,(rd(s->u,2,1)==((U)UINT64_C(0x0))));
L_1803da77e_10:;
/* 1803da781: je 0x1803da795 */
L_1803da781_0:;
L_1803da781_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803da795);}
L_1803da781_2:;
return UINT64_C(0x1803da783);
}
uint64_t b_1803da783(CPU*s){
/* 1803da783: mov ecx, dword ptr [rbx + 0x368] */
L_1803da783_0:;
L_1803da783_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x368))));
L_1803da783_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da783_3:;
wr(s->r,8,4,rd(s->u,12,4));
L_1803da783_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da783_5:;
/* 1803da789: sar ecx, 1 */
L_1803da789_0:;
L_1803da789_1:;
wr(s->u,22,4,(rd(s->r,8,4)&((U)UINT64_C(0x1))));
L_1803da789_2:;
wr(s->r,512,1,(rd(s->u,22,4)!=((U)UINT64_C(0x0))));
L_1803da789_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da789_4:;
wr(s->r,8,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,8,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,8,4),4)>>((U)UINT64_C(0x1)))));
L_1803da789_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da789_6:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da789_7:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803da789_8:;
wr(s->u,16,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803da789_9:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803da789_10:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803da789_11:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803da789_12:;
/* 1803da78b: neg ecx */
L_1803da78b_0:;
L_1803da78b_1:;
wr(s->r,512,1,(rd(s->r,8,4)!=((U)UINT64_C(0x0))));
L_1803da78b_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,8,4),4,1));
L_1803da78b_3:;
wr(s->r,8,4,(-rd(s->r,8,4)));
L_1803da78b_4:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da78b_5:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803da78b_6:;
wr(s->u,16,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803da78b_7:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803da78b_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803da78b_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803da78b_10:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da78b_11:;
/* 1803da78d: mov dword ptr [rbx + 0x350], ecx */
L_1803da78d_0:;
L_1803da78d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x350))));
L_1803da78d_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_1803da78d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da78d_4:;
/* 1803da793: jmp 0x1803da7b8 */
L_1803da793_0:;
L_1803da793_1:;
return UINT64_C(0x1803da7b8);
L_1803da793_2:;
return UINT64_C(0x1803da795);
}
uint64_t b_1803da795(CPU*s){
/* 1803da795: mov ecx, dword ptr [rbx + 0x368] */
L_1803da795_0:;
L_1803da795_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x368))));
L_1803da795_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da795_3:;
wr(s->r,8,4,rd(s->u,36,4));
L_1803da795_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da795_5:;
/* 1803da79b: sar ecx, 1 */
L_1803da79b_0:;
L_1803da79b_1:;
wr(s->u,54,4,(rd(s->r,8,4)&((U)UINT64_C(0x1))));
L_1803da79b_2:;
wr(s->r,512,1,(rd(s->u,54,4)!=((U)UINT64_C(0x0))));
L_1803da79b_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da79b_4:;
wr(s->r,8,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,8,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,8,4),4)>>((U)UINT64_C(0x1)))));
L_1803da79b_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da79b_6:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da79b_7:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803da79b_8:;
wr(s->u,48,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803da79b_9:;
wr(s->u,52,1,pop(rd(s->u,48,4),4));
L_1803da79b_10:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803da79b_11:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803da79b_12:;
/* 1803da79d: neg ecx */
L_1803da79d_0:;
L_1803da79d_1:;
wr(s->r,512,1,(rd(s->r,8,4)!=((U)UINT64_C(0x0))));
L_1803da79d_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,8,4),4,1));
L_1803da79d_3:;
wr(s->r,8,4,(-rd(s->r,8,4)));
L_1803da79d_4:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da79d_5:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803da79d_6:;
wr(s->u,48,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803da79d_7:;
wr(s->u,52,1,pop(rd(s->u,48,4),4));
L_1803da79d_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803da79d_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803da79d_10:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803da79d_11:;
/* 1803da79f: movd xmm0, ecx */
L_1803da79f_0:;
L_1803da79f_1:;
wr(s->r,4608,16,rd(s->r,8,4));
L_1803da79f_2:;
/* 1803da7a3: cvtdq2ps xmm0, xmm0 */
L_1803da7a3_0:;
L_1803da7a3_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803da7a3_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803da7a3_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803da7a3_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803da7a3_5:;
/* 1803da7a6: divss xmm0, dword ptr [rbx + 0x318] */
L_1803da7a6_0:;
L_1803da7a6_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x318))));
L_1803da7a6_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da7a6_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->u,24,4),4),4));
L_1803da7a6_4:;
/* 1803da7ae: cvttss2si eax, xmm0 */
L_1803da7ae_0:;
L_1803da7ae_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803da7ae_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da7ae_3:;
/* 1803da7b2: mov dword ptr [rbx + 0x350], eax */
L_1803da7b2_0:;
L_1803da7b2_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x350))));
L_1803da7b2_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803da7b2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da7b2_4:;
/* 1803da7b8: movd xmm0, ecx */
L_1803da7b8_0:;
L_1803da7b8_1:;
wr(s->r,4608,16,rd(s->r,8,4));
L_1803da7b8_2:;
/* 1803da7bc: mov dword ptr [rbx + 0x37c], 0 */
L_1803da7bc_0:;
L_1803da7bc_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x37c))));
L_1803da7bc_2:;
wr(s->u,24,4,((U)UINT64_C(0x0)));
L_1803da7bc_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da7bc_4:;
/* 1803da7c6: cvtdq2pd xmm0, xmm0 */
L_1803da7c6_0:;
L_1803da7c6_1:;
wr(s->u,58,8,rd(s->r,4608,8));
L_1803da7c6_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,58,4),4),8));
L_1803da7c6_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,62,4),4),8));
L_1803da7c6_4:;
/* 1803da7ca: cvttsd2si eax, xmm0 */
L_1803da7ca_0:;
L_1803da7ca_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,8),8),4));
L_1803da7ca_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da7ca_3:;
/* 1803da7ce: movsd qword ptr [rbx + 0x388], xmm0 */
L_1803da7ce_0:;
L_1803da7ce_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x388))));
L_1803da7ce_2:;
wr(s->u,28,8,rd(s->r,4608,8));
L_1803da7ce_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803da7ce_4:;
/* 1803da7d6: mov dword ptr [rbx + 0x378], eax */
L_1803da7d6_0:;
L_1803da7d6_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x378))));
L_1803da7d6_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803da7d6_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da7d6_4:;
/* 1803da7dc: mov eax, dword ptr [rbx + 0x35c] */
L_1803da7dc_0:;
L_1803da7dc_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x35c))));
L_1803da7dc_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da7dc_3:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803da7dc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da7dc_5:;
/* 1803da7e2: mov dword ptr [rbx + 0x364], eax */
L_1803da7e2_0:;
L_1803da7e2_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x364))));
L_1803da7e2_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803da7e2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da7e2_4:;
/* 1803da7e8: mov r8d, dword ptr [rbx + 0x35c] */
L_1803da7e8_0:;
L_1803da7e8_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x35c))));
L_1803da7e8_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da7e8_3:;
wr(s->r,128,4,rd(s->u,36,4));
L_1803da7e8_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803da7e8_5:;
/* 1803da7ef: movss xmm0, dword ptr [rbx + 0x310] */
L_1803da7ef_0:;
L_1803da7ef_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x310))));
L_1803da7ef_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da7ef_3:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803da7ef_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803da7ef_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803da7ef_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803da7ef_7:;
/* 1803da7f7: mov r9d, dword ptr [rbx + 0x358] */
L_1803da7f7_0:;
L_1803da7f7_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da7f7_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da7f7_3:;
wr(s->r,136,4,rd(s->u,36,4));
L_1803da7f7_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803da7f7_5:;
/* 1803da7fe: mov edx, dword ptr [rbx + 0x368] */
L_1803da7fe_0:;
L_1803da7fe_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x368))));
L_1803da7fe_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da7fe_3:;
wr(s->r,16,4,rd(s->u,36,4));
L_1803da7fe_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803da7fe_5:;
/* 1803da804: mov rcx, qword ptr [rbx + 8] */
L_1803da804_0:;
L_1803da804_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803da804_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da804_3:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803da804_4:;
/* 1803da808: movss dword ptr [rsp + 0x28], xmm0 */
L_1803da808_0:;
L_1803da808_1:;
wr(s->u,16,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803da808_2:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803da808_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803da808_4:;
/* 1803da80e: mov dword ptr [rsp + 0x20], r8d */
L_1803da80e_0:;
L_1803da80e_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803da80e_2:;
wr(s->u,24,4,rd(s->r,128,4));
L_1803da80e_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803da80e_4:;
/* 1803da813: call 0x1803e0060 */
L_1803da813_0:;
L_1803da813_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da813_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da818)));
L_1803da813_3:;
return (uint64_t)UINT64_C(0x1803e0060);
L_1803da813_4:;
return UINT64_C(0x1803da818);
}
uint64_t b_1803da7b8(CPU*s){
/* 1803da7b8: movd xmm0, ecx */
L_1803da7b8_0:;
L_1803da7b8_1:;
wr(s->r,4608,16,rd(s->r,8,4));
L_1803da7b8_2:;
/* 1803da7bc: mov dword ptr [rbx + 0x37c], 0 */
L_1803da7bc_0:;
L_1803da7bc_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x37c))));
L_1803da7bc_2:;
wr(s->u,24,4,((U)UINT64_C(0x0)));
L_1803da7bc_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da7bc_4:;
/* 1803da7c6: cvtdq2pd xmm0, xmm0 */
L_1803da7c6_0:;
L_1803da7c6_1:;
wr(s->u,48,8,rd(s->r,4608,8));
L_1803da7c6_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,48,4),4),8));
L_1803da7c6_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,52,4),4),8));
L_1803da7c6_4:;
/* 1803da7ca: cvttsd2si eax, xmm0 */
L_1803da7ca_0:;
L_1803da7ca_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,8),8),4));
L_1803da7ca_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da7ca_3:;
/* 1803da7ce: movsd qword ptr [rbx + 0x388], xmm0 */
L_1803da7ce_0:;
L_1803da7ce_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x388))));
L_1803da7ce_2:;
wr(s->u,28,8,rd(s->r,4608,8));
L_1803da7ce_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803da7ce_4:;
/* 1803da7d6: mov dword ptr [rbx + 0x378], eax */
L_1803da7d6_0:;
L_1803da7d6_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x378))));
L_1803da7d6_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803da7d6_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da7d6_4:;
/* 1803da7dc: mov eax, dword ptr [rbx + 0x35c] */
L_1803da7dc_0:;
L_1803da7dc_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x35c))));
L_1803da7dc_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da7dc_3:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803da7dc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da7dc_5:;
/* 1803da7e2: mov dword ptr [rbx + 0x364], eax */
L_1803da7e2_0:;
L_1803da7e2_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x364))));
L_1803da7e2_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803da7e2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da7e2_4:;
/* 1803da7e8: mov r8d, dword ptr [rbx + 0x35c] */
L_1803da7e8_0:;
L_1803da7e8_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x35c))));
L_1803da7e8_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da7e8_3:;
wr(s->r,128,4,rd(s->u,36,4));
L_1803da7e8_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803da7e8_5:;
/* 1803da7ef: movss xmm0, dword ptr [rbx + 0x310] */
L_1803da7ef_0:;
L_1803da7ef_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x310))));
L_1803da7ef_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da7ef_3:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803da7ef_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803da7ef_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803da7ef_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803da7ef_7:;
/* 1803da7f7: mov r9d, dword ptr [rbx + 0x358] */
L_1803da7f7_0:;
L_1803da7f7_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da7f7_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da7f7_3:;
wr(s->r,136,4,rd(s->u,36,4));
L_1803da7f7_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803da7f7_5:;
/* 1803da7fe: mov edx, dword ptr [rbx + 0x368] */
L_1803da7fe_0:;
L_1803da7fe_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x368))));
L_1803da7fe_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da7fe_3:;
wr(s->r,16,4,rd(s->u,36,4));
L_1803da7fe_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803da7fe_5:;
/* 1803da804: mov rcx, qword ptr [rbx + 8] */
L_1803da804_0:;
L_1803da804_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803da804_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da804_3:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803da804_4:;
/* 1803da808: movss dword ptr [rsp + 0x28], xmm0 */
L_1803da808_0:;
L_1803da808_1:;
wr(s->u,16,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803da808_2:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803da808_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803da808_4:;
/* 1803da80e: mov dword ptr [rsp + 0x20], r8d */
L_1803da80e_0:;
L_1803da80e_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803da80e_2:;
wr(s->u,24,4,rd(s->r,128,4));
L_1803da80e_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803da80e_4:;
/* 1803da813: call 0x1803e0060 */
L_1803da813_0:;
L_1803da813_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da813_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da818)));
L_1803da813_3:;
return (uint64_t)UINT64_C(0x1803e0060);
L_1803da813_4:;
return UINT64_C(0x1803da818);
}
uint64_t b_1803da7e8(CPU*s){
/* 1803da7e8: mov r8d, dword ptr [rbx + 0x35c] */
L_1803da7e8_0:;
L_1803da7e8_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x35c))));
L_1803da7e8_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da7e8_3:;
wr(s->r,128,4,rd(s->u,28,4));
L_1803da7e8_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803da7e8_5:;
/* 1803da7ef: movss xmm0, dword ptr [rbx + 0x310] */
L_1803da7ef_0:;
L_1803da7ef_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x310))));
L_1803da7ef_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da7ef_3:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803da7ef_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803da7ef_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803da7ef_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803da7ef_7:;
/* 1803da7f7: mov r9d, dword ptr [rbx + 0x358] */
L_1803da7f7_0:;
L_1803da7f7_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da7f7_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da7f7_3:;
wr(s->r,136,4,rd(s->u,28,4));
L_1803da7f7_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803da7f7_5:;
/* 1803da7fe: mov edx, dword ptr [rbx + 0x368] */
L_1803da7fe_0:;
L_1803da7fe_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x368))));
L_1803da7fe_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da7fe_3:;
wr(s->r,16,4,rd(s->u,28,4));
L_1803da7fe_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803da7fe_5:;
/* 1803da804: mov rcx, qword ptr [rbx + 8] */
L_1803da804_0:;
L_1803da804_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803da804_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da804_3:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803da804_4:;
/* 1803da808: movss dword ptr [rsp + 0x28], xmm0 */
L_1803da808_0:;
L_1803da808_1:;
wr(s->u,16,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803da808_2:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803da808_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803da808_4:;
/* 1803da80e: mov dword ptr [rsp + 0x20], r8d */
L_1803da80e_0:;
L_1803da80e_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803da80e_2:;
wr(s->u,24,4,rd(s->r,128,4));
L_1803da80e_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803da80e_4:;
/* 1803da813: call 0x1803e0060 */
L_1803da813_0:;
L_1803da813_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da813_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da818)));
L_1803da813_3:;
return (uint64_t)UINT64_C(0x1803e0060);
L_1803da813_4:;
return UINT64_C(0x1803da818);
}
uint64_t b_1803da818(CPU*s){
/* 1803da818: mov r11d, dword ptr [rbx + 0x358] */
L_1803da818_0:;
L_1803da818_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x358))));
L_1803da818_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da818_3:;
wr(s->r,152,4,rd(s->u,12,4));
L_1803da818_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803da818_5:;
/* 1803da81f: mov eax, dword ptr [rbx + 0x35c] */
L_1803da81f_0:;
L_1803da81f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x35c))));
L_1803da81f_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da81f_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803da81f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da81f_5:;
/* 1803da825: mov dword ptr [rbx + 0x360], r11d */
L_1803da825_0:;
L_1803da825_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x360))));
L_1803da825_2:;
wr(s->u,8,4,rd(s->r,152,4));
L_1803da825_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da825_4:;
/* 1803da82c: mov dword ptr [rbx + 0x364], eax */
L_1803da82c_0:;
L_1803da82c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x364))));
L_1803da82c_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803da82c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da82c_4:;
/* 1803da832: test sil, sil */
L_1803da832_0:;
L_1803da832_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da832_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da832_3:;
wr(s->u,19,1,(rd(s->r,48,1)&rd(s->r,48,1)));
L_1803da832_4:;
wr(s->r,519,1,(sx(rd(s->u,19,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803da832_5:;
wr(s->r,518,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803da832_6:;
wr(s->u,16,1,(rd(s->u,19,1)&((U)UINT64_C(0xff))));
L_1803da832_7:;
wr(s->u,17,1,pop(rd(s->u,16,1),1));
L_1803da832_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803da832_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803da832_10:;
/* 1803da835: je 0x1803da876 */
L_1803da835_0:;
L_1803da835_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803da876);}
L_1803da835_2:;
return UINT64_C(0x1803da837);
}
uint64_t b_1803da837(CPU*s){
/* 1803da837: divss xmm8, dword ptr [rbx + 0x318] */
L_1803da837_0:;
L_1803da837_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x318))));
L_1803da837_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da837_3:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)/fv(rd(s->u,8,4),4),4));
L_1803da837_4:;
/* 1803da840: mov eax, dword ptr [rbx + 0x368] */
L_1803da840_0:;
L_1803da840_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x368))));
L_1803da840_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da840_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1803da840_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da840_5:;
/* 1803da846: sar eax, 1 */
L_1803da846_0:;
L_1803da846_1:;
wr(s->u,30,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803da846_2:;
wr(s->r,512,1,(rd(s->u,30,4)!=((U)UINT64_C(0x0))));
L_1803da846_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da846_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803da846_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da846_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da846_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da846_8:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da846_9:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803da846_10:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803da846_11:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803da846_12:;
/* 1803da848: movd xmm0, eax */
L_1803da848_0:;
L_1803da848_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803da848_2:;
/* 1803da84c: unpcklps xmm8, xmm8 */
L_1803da84c_0:;
L_1803da84c_1:;
wr(s->r,5128,4,rd(s->r,5124,4));
L_1803da84c_2:;
wr(s->r,5132,4,rd(s->r,5124,4));
L_1803da84c_3:;
wr(s->r,5124,4,rd(s->r,5120,4));
L_1803da84c_4:;
/* 1803da850: cvtdq2pd xmm0, xmm0 */
L_1803da850_0:;
L_1803da850_1:;
wr(s->u,34,8,rd(s->r,4608,8));
L_1803da850_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,34,4),4),8));
L_1803da850_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,38,4),4),8));
L_1803da850_4:;
/* 1803da854: cvtps2pd xmm1, xmm8 */
L_1803da854_0:;
L_1803da854_1:;
wr(s->u,42,8,rd(s->r,5120,8));
L_1803da854_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,42,4),4),8));
L_1803da854_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,46,4),4),8));
L_1803da854_4:;
/* 1803da858: mulsd xmm1, xmm0 */
L_1803da858_0:;
L_1803da858_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803da858_2:;
/* 1803da85c: subsd xmm1, xmm0 */
L_1803da85c_0:;
L_1803da85c_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803da85c_2:;
/* 1803da860: movsd xmm0, qword ptr [rbx + 0x3a0] */
L_1803da860_0:;
L_1803da860_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3a0))));
L_1803da860_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da860_3:;
wr(s->r,4608,8,rd(s->u,12,8));
L_1803da860_4:;
wr(s->r,4616,8,((U)UINT64_C(0x0)));
L_1803da860_5:;
/* 1803da868: subsd xmm0, xmm1 */
L_1803da868_0:;
L_1803da868_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)-fv(rd(s->r,4672,8),8),8));
L_1803da868_2:;
/* 1803da86c: movsd qword ptr [rbx + 0x3b0], xmm0 */
L_1803da86c_0:;
L_1803da86c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3b0))));
L_1803da86c_2:;
wr(s->u,12,8,rd(s->r,4608,8));
L_1803da86c_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803da86c_4:;
/* 1803da874: jmp 0x1803da884 */
L_1803da874_0:;
L_1803da874_1:;
return UINT64_C(0x1803da884);
L_1803da874_2:;
return UINT64_C(0x1803da876);
}
uint64_t b_1803da876(CPU*s){
/* 1803da876: mov rax, qword ptr [rbx + 0x3a0] */
L_1803da876_0:;
L_1803da876_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3a0))));
L_1803da876_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da876_3:;
wr(s->r,0,8,rd(s->u,44,8));
L_1803da876_4:;
/* 1803da87d: mov qword ptr [rbx + 0x3b0], rax */
L_1803da87d_0:;
L_1803da87d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3b0))));
L_1803da87d_2:;
wr(s->u,20,8,rd(s->r,0,8));
L_1803da87d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_1803da87d_4:;
/* 1803da884: mov dword ptr [rbx + 0x398], 1 */
L_1803da884_0:;
L_1803da884_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x398))));
L_1803da884_2:;
wr(s->u,16,4,((U)UINT64_C(0x1)));
L_1803da884_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da884_4:;
/* 1803da88e: xor eax, eax */
L_1803da88e_0:;
L_1803da88e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da88e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da88e_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803da88e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da88e_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da88e_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da88e_7:;
wr(s->u,52,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da88e_8:;
wr(s->u,60,1,pop(rd(s->u,52,4),4));
L_1803da88e_9:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803da88e_10:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803da88e_11:;
/* 1803da890: movaps xmm6, xmmword ptr [rsp + 0x50] */
L_1803da890_0:;
L_1803da890_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803da890_2:;
wr(s->u,28,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da890_3:;
wr(s->u,70,16,rd(s->u,28,16));
L_1803da890_4:;
wr(s->r,4992,4,rd(s->u,70,4));
L_1803da890_5:;
wr(s->r,4996,4,rd(s->u,74,4));
L_1803da890_6:;
wr(s->r,5000,4,rd(s->u,78,4));
L_1803da890_7:;
wr(s->r,5004,4,rd(s->u,82,4));
L_1803da890_8:;
/* 1803da895: movaps xmm8, xmmword ptr [rsp + 0x40] */
L_1803da895_0:;
L_1803da895_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803da895_2:;
wr(s->u,28,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da895_3:;
wr(s->u,70,16,rd(s->u,28,16));
L_1803da895_4:;
wr(s->r,5120,4,rd(s->u,70,4));
L_1803da895_5:;
wr(s->r,5124,4,rd(s->u,74,4));
L_1803da895_6:;
wr(s->r,5128,4,rd(s->u,78,4));
L_1803da895_7:;
wr(s->r,5132,4,rd(s->u,82,4));
L_1803da895_8:;
/* 1803da89b: mov rbx, qword ptr [rsp + 0x70] */
L_1803da89b_0:;
L_1803da89b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803da89b_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da89b_3:;
wr(s->r,24,8,rd(s->u,44,8));
L_1803da89b_4:;
/* 1803da8a0: mov rsi, qword ptr [rsp + 0x78] */
L_1803da8a0_0:;
L_1803da8a0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803da8a0_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da8a0_3:;
wr(s->r,48,8,rd(s->u,44,8));
L_1803da8a0_4:;
/* 1803da8a5: movaps xmm9, xmmword ptr [rsp + 0x30] */
L_1803da8a5_0:;
L_1803da8a5_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803da8a5_2:;
wr(s->u,28,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da8a5_3:;
wr(s->u,70,16,rd(s->u,28,16));
L_1803da8a5_4:;
wr(s->r,5184,4,rd(s->u,70,4));
L_1803da8a5_5:;
wr(s->r,5188,4,rd(s->u,74,4));
L_1803da8a5_6:;
wr(s->r,5192,4,rd(s->u,78,4));
L_1803da8a5_7:;
wr(s->r,5196,4,rd(s->u,82,4));
L_1803da8a5_8:;
/* 1803da8ab: add rsp, 0x60 */
L_1803da8ab_0:;
L_1803da8ab_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x60)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803da8ab_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x60)),8,0));
L_1803da8ab_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x60))));
L_1803da8ab_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da8ab_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da8ab_6:;
wr(s->u,52,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da8ab_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803da8ab_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803da8ab_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803da8ab_10:;
/* 1803da8af: pop rdi */
L_1803da8af_0:;
L_1803da8af_1:;
wr(s->u,62,8,((U)UINT64_C(0x0)));
L_1803da8af_2:;
wr(s->u,62,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da8af_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da8af_4:;
wr(s->r,56,8,rd(s->u,62,8));
L_1803da8af_5:;
/* 1803da8b0: ret  */
L_1803da8b0_0:;
L_1803da8b0_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da8b0_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da8b0_3:;
return (uint64_t)rd(s->r,648,8);
L_1803da8b0_4:;
return UINT64_C(0x1803da8b1);
}
uint64_t b_1803da884(CPU*s){
/* 1803da884: mov dword ptr [rbx + 0x398], 1 */
L_1803da884_0:;
L_1803da884_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x398))));
L_1803da884_2:;
wr(s->u,16,4,((U)UINT64_C(0x1)));
L_1803da884_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da884_4:;
/* 1803da88e: xor eax, eax */
L_1803da88e_0:;
L_1803da88e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da88e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da88e_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803da88e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da88e_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da88e_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da88e_7:;
wr(s->u,44,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da88e_8:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803da88e_9:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803da88e_10:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803da88e_11:;
/* 1803da890: movaps xmm6, xmmword ptr [rsp + 0x50] */
L_1803da890_0:;
L_1803da890_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803da890_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da890_3:;
wr(s->u,62,16,rd(s->u,20,16));
L_1803da890_4:;
wr(s->r,4992,4,rd(s->u,62,4));
L_1803da890_5:;
wr(s->r,4996,4,rd(s->u,66,4));
L_1803da890_6:;
wr(s->r,5000,4,rd(s->u,70,4));
L_1803da890_7:;
wr(s->r,5004,4,rd(s->u,74,4));
L_1803da890_8:;
/* 1803da895: movaps xmm8, xmmword ptr [rsp + 0x40] */
L_1803da895_0:;
L_1803da895_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803da895_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da895_3:;
wr(s->u,62,16,rd(s->u,20,16));
L_1803da895_4:;
wr(s->r,5120,4,rd(s->u,62,4));
L_1803da895_5:;
wr(s->r,5124,4,rd(s->u,66,4));
L_1803da895_6:;
wr(s->r,5128,4,rd(s->u,70,4));
L_1803da895_7:;
wr(s->r,5132,4,rd(s->u,74,4));
L_1803da895_8:;
/* 1803da89b: mov rbx, qword ptr [rsp + 0x70] */
L_1803da89b_0:;
L_1803da89b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803da89b_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da89b_3:;
wr(s->r,24,8,rd(s->u,36,8));
L_1803da89b_4:;
/* 1803da8a0: mov rsi, qword ptr [rsp + 0x78] */
L_1803da8a0_0:;
L_1803da8a0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803da8a0_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da8a0_3:;
wr(s->r,48,8,rd(s->u,36,8));
L_1803da8a0_4:;
/* 1803da8a5: movaps xmm9, xmmword ptr [rsp + 0x30] */
L_1803da8a5_0:;
L_1803da8a5_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803da8a5_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803da8a5_3:;
wr(s->u,62,16,rd(s->u,20,16));
L_1803da8a5_4:;
wr(s->r,5184,4,rd(s->u,62,4));
L_1803da8a5_5:;
wr(s->r,5188,4,rd(s->u,66,4));
L_1803da8a5_6:;
wr(s->r,5192,4,rd(s->u,70,4));
L_1803da8a5_7:;
wr(s->r,5196,4,rd(s->u,74,4));
L_1803da8a5_8:;
/* 1803da8ab: add rsp, 0x60 */
L_1803da8ab_0:;
L_1803da8ab_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x60)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803da8ab_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x60)),8,0));
L_1803da8ab_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x60))));
L_1803da8ab_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da8ab_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da8ab_6:;
wr(s->u,44,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da8ab_7:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803da8ab_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803da8ab_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803da8ab_10:;
/* 1803da8af: pop rdi */
L_1803da8af_0:;
L_1803da8af_1:;
wr(s->u,54,8,((U)UINT64_C(0x0)));
L_1803da8af_2:;
wr(s->u,54,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da8af_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da8af_4:;
wr(s->r,56,8,rd(s->u,54,8));
L_1803da8af_5:;
/* 1803da8b0: ret  */
L_1803da8b0_0:;
L_1803da8b0_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da8b0_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da8b0_3:;
return (uint64_t)rd(s->r,648,8);
L_1803da8b0_4:;
return UINT64_C(0x1803da8b1);
}
uint64_t b_1803da890(CPU*s){
/* 1803da890: movaps xmm6, xmmword ptr [rsp + 0x50] */
L_1803da890_0:;
L_1803da890_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803da890_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803da890_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803da890_4:;
wr(s->r,4992,4,rd(s->u,50,4));
L_1803da890_5:;
wr(s->r,4996,4,rd(s->u,54,4));
L_1803da890_6:;
wr(s->r,5000,4,rd(s->u,58,4));
L_1803da890_7:;
wr(s->r,5004,4,rd(s->u,62,4));
L_1803da890_8:;
/* 1803da895: movaps xmm8, xmmword ptr [rsp + 0x40] */
L_1803da895_0:;
L_1803da895_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803da895_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803da895_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803da895_4:;
wr(s->r,5120,4,rd(s->u,50,4));
L_1803da895_5:;
wr(s->r,5124,4,rd(s->u,54,4));
L_1803da895_6:;
wr(s->r,5128,4,rd(s->u,58,4));
L_1803da895_7:;
wr(s->r,5132,4,rd(s->u,62,4));
L_1803da895_8:;
/* 1803da89b: mov rbx, qword ptr [rsp + 0x70] */
L_1803da89b_0:;
L_1803da89b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803da89b_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da89b_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803da89b_4:;
/* 1803da8a0: mov rsi, qword ptr [rsp + 0x78] */
L_1803da8a0_0:;
L_1803da8a0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803da8a0_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da8a0_3:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803da8a0_4:;
/* 1803da8a5: movaps xmm9, xmmword ptr [rsp + 0x30] */
L_1803da8a5_0:;
L_1803da8a5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803da8a5_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803da8a5_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803da8a5_4:;
wr(s->r,5184,4,rd(s->u,50,4));
L_1803da8a5_5:;
wr(s->r,5188,4,rd(s->u,54,4));
L_1803da8a5_6:;
wr(s->r,5192,4,rd(s->u,58,4));
L_1803da8a5_7:;
wr(s->r,5196,4,rd(s->u,62,4));
L_1803da8a5_8:;
/* 1803da8ab: add rsp, 0x60 */
L_1803da8ab_0:;
L_1803da8ab_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x60)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803da8ab_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x60)),8,0));
L_1803da8ab_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x60))));
L_1803da8ab_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da8ab_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da8ab_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da8ab_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803da8ab_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803da8ab_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803da8ab_10:;
/* 1803da8af: pop rdi */
L_1803da8af_0:;
L_1803da8af_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803da8af_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da8af_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da8af_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803da8af_5:;
/* 1803da8b0: ret  */
L_1803da8b0_0:;
L_1803da8b0_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da8b0_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da8b0_3:;
return (uint64_t)rd(s->r,648,8);
L_1803da8b0_4:;
return UINT64_C(0x1803da8b1);
}
uint64_t b_1803da89b(CPU*s){
/* 1803da89b: mov rbx, qword ptr [rsp + 0x70] */
L_1803da89b_0:;
L_1803da89b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803da89b_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da89b_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803da89b_4:;
/* 1803da8a0: mov rsi, qword ptr [rsp + 0x78] */
L_1803da8a0_0:;
L_1803da8a0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803da8a0_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da8a0_3:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803da8a0_4:;
/* 1803da8a5: movaps xmm9, xmmword ptr [rsp + 0x30] */
L_1803da8a5_0:;
L_1803da8a5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803da8a5_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803da8a5_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803da8a5_4:;
wr(s->r,5184,4,rd(s->u,50,4));
L_1803da8a5_5:;
wr(s->r,5188,4,rd(s->u,54,4));
L_1803da8a5_6:;
wr(s->r,5192,4,rd(s->u,58,4));
L_1803da8a5_7:;
wr(s->r,5196,4,rd(s->u,62,4));
L_1803da8a5_8:;
/* 1803da8ab: add rsp, 0x60 */
L_1803da8ab_0:;
L_1803da8ab_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x60)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803da8ab_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x60)),8,0));
L_1803da8ab_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x60))));
L_1803da8ab_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da8ab_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da8ab_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da8ab_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803da8ab_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803da8ab_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803da8ab_10:;
/* 1803da8af: pop rdi */
L_1803da8af_0:;
L_1803da8af_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803da8af_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da8af_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da8af_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803da8af_5:;
/* 1803da8b0: ret  */
L_1803da8b0_0:;
L_1803da8b0_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da8b0_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da8b0_3:;
return (uint64_t)rd(s->r,648,8);
L_1803da8b0_4:;
return UINT64_C(0x1803da8b1);
}
uint64_t b_1803da8b1(CPU*s){
/* 1803da8b1: mov eax, 0x4c4b43 */
L_1803da8b1_0:;
L_1803da8b1_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803da8b1_2:;
/* 1803da8b6: jmp 0x1803da890 */
L_1803da8b6_0:;
L_1803da8b6_1:;
return UINT64_C(0x1803da890);
L_1803da8b6_2:;
return UINT64_C(0x1803da8b8);
}
uint64_t b_1803da8b8(CPU*s){
/* 1803da8b8: mov eax, 0x4c4b43 */
L_1803da8b8_0:;
L_1803da8b8_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803da8b8_2:;
/* 1803da8bd: jmp 0x1803da89b */
L_1803da8bd_0:;
L_1803da8bd_1:;
return UINT64_C(0x1803da89b);
L_1803da8bd_2:;
return UINT64_C(0x1803da8bf);
}
uint64_t b_1803da8c0(CPU*s){
/* 1803da8c0: mov eax, dword ptr [rcx + 0x358] */
L_1803da8c0_0:;
L_1803da8c0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x358))));
L_1803da8c0_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da8c0_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803da8c0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da8c0_5:;
/* 1803da8c6: ret  */
L_1803da8c6_0:;
L_1803da8c6_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da8c6_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da8c6_3:;
return (uint64_t)rd(s->r,648,8);
L_1803da8c6_4:;
return UINT64_C(0x1803da8c7);
}
uint64_t b_1803da8d0(CPU*s){
/* 1803da8d0: mov dword ptr [rcx + 0x350], edx */
L_1803da8d0_0:;
L_1803da8d0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x350))));
L_1803da8d0_2:;
wr(s->u,8,4,rd(s->r,16,4));
L_1803da8d0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803da8d0_4:;
/* 1803da8d6: ret  */
L_1803da8d6_0:;
L_1803da8d6_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da8d6_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da8d6_3:;
return (uint64_t)rd(s->r,648,8);
L_1803da8d6_4:;
return UINT64_C(0x1803da8d7);
}
uint64_t b_1803da8e0(CPU*s){
/* 1803da8e0: mov eax, dword ptr [rcx + 0x35c] */
L_1803da8e0_0:;
L_1803da8e0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x35c))));
L_1803da8e0_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da8e0_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803da8e0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da8e0_5:;
/* 1803da8e6: ret  */
L_1803da8e6_0:;
L_1803da8e6_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da8e6_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da8e6_3:;
return (uint64_t)rd(s->r,648,8);
L_1803da8e6_4:;
return UINT64_C(0x1803da8e7);
}
uint64_t b_1803da8f0(CPU*s){
/* 1803da8f0: mov qword ptr [rsp + 8], rbx */
L_1803da8f0_0:;
L_1803da8f0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803da8f0_2:;
wr(s->u,20,8,rd(s->r,24,8));
L_1803da8f0_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803da8f0_4:;
/* 1803da8f5: push rdi */
L_1803da8f5_0:;
L_1803da8f5_1:;
wr(s->u,36,8,rd(s->r,56,8));
L_1803da8f5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da8f5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,36,8));
L_1803da8f5_4:;
/* 1803da8f6: sub rsp, 0x20 */
L_1803da8f6_0:;
L_1803da8f6_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803da8f6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803da8f6_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803da8f6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da8f6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da8f6_6:;
wr(s->u,44,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da8f6_7:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803da8f6_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803da8f6_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803da8f6_10:;
/* 1803da8fa: xor edi, edi */
L_1803da8fa_0:;
L_1803da8fa_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803da8fa_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da8fa_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803da8fa_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803da8fa_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da8fa_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803da8fa_7:;
wr(s->u,44,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803da8fa_8:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803da8fa_9:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803da8fa_10:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803da8fa_11:;
/* 1803da8fc: mov rbx, rcx */
L_1803da8fc_0:;
L_1803da8fc_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803da8fc_2:;
/* 1803da8ff: mov dword ptr [rcx + 0x390], 1 */
L_1803da8ff_0:;
L_1803da8ff_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x390))));
L_1803da8ff_2:;
wr(s->u,16,4,((U)UINT64_C(0x1)));
L_1803da8ff_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da8ff_4:;
/* 1803da909: mov dword ptr [rcx + 0x34c], edi */
L_1803da909_0:;
L_1803da909_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x34c))));
L_1803da909_2:;
wr(s->u,16,4,rd(s->r,56,4));
L_1803da909_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da909_4:;
/* 1803da90f: mov dword ptr [rcx + 0x350], edi */
L_1803da90f_0:;
L_1803da90f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x350))));
L_1803da90f_2:;
wr(s->u,16,4,rd(s->r,56,4));
L_1803da90f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da90f_4:;
/* 1803da915: mov dword ptr [rcx + 0x354], edi */
L_1803da915_0:;
L_1803da915_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x354))));
L_1803da915_2:;
wr(s->u,16,4,rd(s->r,56,4));
L_1803da915_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da915_4:;
/* 1803da91b: mov dword ptr [rcx + 0x36c], edi */
L_1803da91b_0:;
L_1803da91b_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x36c))));
L_1803da91b_2:;
wr(s->u,16,4,rd(s->r,56,4));
L_1803da91b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da91b_4:;
/* 1803da921: mov dword ptr [rcx + 0x380], edi */
L_1803da921_0:;
L_1803da921_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x380))));
L_1803da921_2:;
wr(s->u,16,4,rd(s->r,56,4));
L_1803da921_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803da921_4:;
/* 1803da927: mov rcx, qword ptr [rcx + 0x3c8] */
L_1803da927_0:;
L_1803da927_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x3c8))));
L_1803da927_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da927_3:;
wr(s->r,8,8,rd(s->u,28,8));
L_1803da927_4:;
/* 1803da92e: call 0x1803dfd00 */
L_1803da92e_0:;
L_1803da92e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da92e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803da933)));
L_1803da92e_3:;
return (uint64_t)UINT64_C(0x1803dfd00);
L_1803da92e_4:;
return UINT64_C(0x1803da933);
}
uint64_t b_1803da933(CPU*s){
/* 1803da933: mov rcx, qword ptr [rbx + 8] */
L_1803da933_0:;
L_1803da933_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803da933_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803da933_3:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803da933_4:;
/* 1803da937: movabs rax, 0x3ff0000000000000 */
L_1803da937_0:;
L_1803da937_1:;
wr(s->r,0,8,((U)UINT64_C(0x3ff0000000000000)));
L_1803da937_2:;
/* 1803da941: mov qword ptr [rbx + 0x328], rax */
L_1803da941_0:;
L_1803da941_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x328))));
L_1803da941_2:;
wr(s->u,28,8,rd(s->r,0,8));
L_1803da941_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803da941_4:;
/* 1803da948: mov qword ptr [rbx + 0x330], rax */
L_1803da948_0:;
L_1803da948_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x330))));
L_1803da948_2:;
wr(s->u,28,8,rd(s->r,0,8));
L_1803da948_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803da948_4:;
/* 1803da94f: mov eax, dword ptr [rbx + 0x368] */
L_1803da94f_0:;
L_1803da94f_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x368))));
L_1803da94f_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da94f_3:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803da94f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da94f_5:;
/* 1803da955: sar eax, 1 */
L_1803da955_0:;
L_1803da955_1:;
wr(s->u,66,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803da955_2:;
wr(s->r,512,1,(rd(s->u,66,4)!=((U)UINT64_C(0x0))));
L_1803da955_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803da955_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803da955_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da955_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803da955_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803da955_8:;
wr(s->u,48,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803da955_9:;
wr(s->u,56,1,pop(rd(s->u,48,4),4));
L_1803da955_10:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803da955_11:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803da955_12:;
/* 1803da957: mov dword ptr [rbx + 0x350], edi */
L_1803da957_0:;
L_1803da957_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x350))));
L_1803da957_2:;
wr(s->u,24,4,rd(s->r,56,4));
L_1803da957_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da957_4:;
/* 1803da95d: mov qword ptr [rbx + 0x388], rdi */
L_1803da95d_0:;
L_1803da95d_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x388))));
L_1803da95d_2:;
wr(s->u,28,8,rd(s->r,56,8));
L_1803da95d_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803da95d_4:;
/* 1803da964: mov dword ptr [rbx + 0x378], edi */
L_1803da964_0:;
L_1803da964_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x378))));
L_1803da964_2:;
wr(s->u,24,4,rd(s->r,56,4));
L_1803da964_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da964_4:;
/* 1803da96a: mov dword ptr [rbx + 0x37c], edi */
L_1803da96a_0:;
L_1803da96a_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x37c))));
L_1803da96a_2:;
wr(s->u,24,4,rd(s->r,56,4));
L_1803da96a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da96a_4:;
/* 1803da970: mov dword ptr [rbx + 0x318], 0x3f800000 */
L_1803da970_0:;
L_1803da970_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x318))));
L_1803da970_2:;
wr(s->u,24,4,((U)UINT64_C(0x3f800000)));
L_1803da970_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da970_4:;
/* 1803da97a: movd xmm0, eax */
L_1803da97a_0:;
L_1803da97a_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803da97a_2:;
/* 1803da97e: cvtdq2ps xmm0, xmm0 */
L_1803da97e_0:;
L_1803da97e_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803da97e_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803da97e_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803da97e_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803da97e_5:;
/* 1803da981: mov dword ptr [rbx + 0x320], 0x3f800000 */
L_1803da981_0:;
L_1803da981_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x320))));
L_1803da981_2:;
wr(s->u,24,4,((U)UINT64_C(0x3f800000)));
L_1803da981_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da981_4:;
/* 1803da98b: mov dword ptr [rbx + 0x398], edi */
L_1803da98b_0:;
L_1803da98b_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x398))));
L_1803da98b_2:;
wr(s->u,24,4,rd(s->r,56,4));
L_1803da98b_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da98b_4:;
/* 1803da991: mov dword ptr [rbx + 0x31c], 0x3f800000 */
L_1803da991_0:;
L_1803da991_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x31c))));
L_1803da991_2:;
wr(s->u,24,4,((U)UINT64_C(0x3f800000)));
L_1803da991_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da991_4:;
/* 1803da99b: movss dword ptr [rbx + 0x3c0], xmm0 */
L_1803da99b_0:;
L_1803da99b_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c0))));
L_1803da99b_2:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803da99b_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803da99b_4:;
/* 1803da9a3: mov qword ptr [rbx + 0x3a0], rdi */
L_1803da9a3_0:;
L_1803da9a3_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x3a0))));
L_1803da9a3_2:;
wr(s->u,28,8,rd(s->r,56,8));
L_1803da9a3_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803da9a3_4:;
/* 1803da9aa: mov qword ptr [rbx + 0x3a8], rdi */
L_1803da9aa_0:;
L_1803da9aa_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x3a8))));
L_1803da9aa_2:;
wr(s->u,28,8,rd(s->r,56,8));
L_1803da9aa_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803da9aa_4:;
/* 1803da9b1: mov qword ptr [rbx + 0x3b0], rdi */
L_1803da9b1_0:;
L_1803da9b1_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x3b0))));
L_1803da9b1_2:;
wr(s->u,28,8,rd(s->r,56,8));
L_1803da9b1_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803da9b1_4:;
/* 1803da9b8: mov qword ptr [rbx + 0x3b8], rdi */
L_1803da9b8_0:;
L_1803da9b8_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x3b8))));
L_1803da9b8_2:;
wr(s->u,28,8,rd(s->r,56,8));
L_1803da9b8_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803da9b8_4:;
/* 1803da9bf: mov rbx, qword ptr [rsp + 0x30] */
L_1803da9bf_0:;
L_1803da9bf_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803da9bf_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803da9bf_3:;
wr(s->r,24,8,rd(s->u,40,8));
L_1803da9bf_4:;
/* 1803da9c4: add rsp, 0x20 */
L_1803da9c4_0:;
L_1803da9c4_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803da9c4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803da9c4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803da9c4_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da9c4_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da9c4_6:;
wr(s->u,48,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da9c4_7:;
wr(s->u,56,1,pop(rd(s->u,48,8),8));
L_1803da9c4_8:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803da9c4_9:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803da9c4_10:;
/* 1803da9c8: pop rdi */
L_1803da9c8_0:;
L_1803da9c8_1:;
wr(s->u,58,8,((U)UINT64_C(0x0)));
L_1803da9c8_2:;
wr(s->u,58,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da9c8_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da9c8_4:;
wr(s->r,56,8,rd(s->u,58,8));
L_1803da9c8_5:;
/* 1803da9c9: jmp 0x1803dfe30 */
L_1803da9c9_0:;
L_1803da9c9_1:;
return UINT64_C(0x1803dfe30);
L_1803da9c9_2:;
return UINT64_C(0x1803da9ce);
}
uint64_t b_1803da9d0(CPU*s){
/* 1803da9d0: mov eax, dword ptr [rcx + 0x350] */
L_1803da9d0_0:;
L_1803da9d0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x350))));
L_1803da9d0_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803da9d0_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803da9d0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803da9d0_5:;
/* 1803da9d6: ret  */
L_1803da9d6_0:;
L_1803da9d6_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803da9d6_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803da9d6_3:;
return (uint64_t)rd(s->r,648,8);
L_1803da9d6_4:;
return UINT64_C(0x1803da9d7);
}
uint64_t b_1803da9e0(CPU*s){
/* 1803da9e0: push rbx */
L_1803da9e0_0:;
L_1803da9e0_1:;
wr(s->u,60,8,rd(s->r,24,8));
L_1803da9e0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803da9e0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,60,8));
L_1803da9e0_4:;
/* 1803da9e2: sub rsp, 0x30 */
L_1803da9e2_0:;
L_1803da9e2_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803da9e2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803da9e2_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803da9e2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803da9e2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803da9e2_6:;
wr(s->u,68,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803da9e2_7:;
wr(s->u,76,1,pop(rd(s->u,68,8),8));
L_1803da9e2_8:;
wr(s->u,77,1,(rd(s->u,76,1)&((U)UINT64_C(0x1))));
L_1803da9e2_9:;
wr(s->r,514,1,(rd(s->u,77,1)==((U)UINT64_C(0x0))));
L_1803da9e2_10:;
/* 1803da9e6: mov rax, qword ptr [rcx] */
L_1803da9e6_0:;
L_1803da9e6_1:;
wr(s->u,52,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803da9e6_2:;
wr(s->r,0,8,rd(s->u,52,8));
L_1803da9e6_3:;
/* 1803da9e9: movaps xmmword ptr [rsp + 0x20], xmm6 */
L_1803da9e9_0:;
L_1803da9e9_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803da9e9_2:;
wr(s->u,32,16,rd(s->r,4992,16));
L_1803da9e9_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,32,16));
L_1803da9e9_4:;
/* 1803da9ee: movd xmm6, dword ptr [rcx + 0x37c] */
L_1803da9ee_0:;
L_1803da9ee_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x37c))));
L_1803da9ee_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803da9ee_3:;
wr(s->r,4992,16,rd(s->u,48,4));
L_1803da9ee_4:;
/* 1803da9f6: mov rbx, rcx */
L_1803da9f6_0:;
L_1803da9f6_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803da9f6_2:;
/* 1803da9f9: cvtdq2pd xmm6, xmm6 */
L_1803da9f9_0:;
L_1803da9f9_1:;
wr(s->u,86,8,rd(s->r,4992,8));
L_1803da9f9_2:;
wr(s->r,4992,8,fb((double)sx(rd(s->u,86,4),4),8));
L_1803da9f9_3:;
wr(s->r,5000,8,fb((double)sx(rd(s->u,90,4),4),8));
L_1803da9f9_4:;
/* 1803da9fd: addsd xmm6, qword ptr [rcx + 0x388] */
L_1803da9fd_0:;
L_1803da9fd_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x388))));
L_1803da9fd_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803da9fd_3:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)+fv(rd(s->u,24,8),8),8));
L_1803da9fd_4:;
/* 1803daa05: call qword ptr [rax + 0x48] */
L_1803daa05_0:;
L_1803daa05_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x48))));
L_1803daa05_2:;
wr(s->u,52,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803daa05_3:;
wr(s->u,78,8,rd(s->u,52,8));
L_1803daa05_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803daa05_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803daa08)));
L_1803daa05_6:;
return (uint64_t)rd(s->u,78,8);
L_1803daa05_7:;
return UINT64_C(0x1803daa08);
}
uint64_t b_1803daa08(CPU*s){
/* 1803daa08: movd xmm0, eax */
L_1803daa08_0:;
L_1803daa08_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803daa08_2:;
/* 1803daa0c: cvtdq2pd xmm0, xmm0 */
L_1803daa0c_0:;
L_1803daa0c_1:;
wr(s->u,58,8,rd(s->r,4608,8));
L_1803daa0c_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,58,4),4),8));
L_1803daa0c_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,62,4),4),8));
L_1803daa0c_4:;
/* 1803daa10: mulsd xmm0, qword ptr [rbx + 0x330] */
L_1803daa10_0:;
L_1803daa10_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x330))));
L_1803daa10_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803daa10_3:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->u,16,8),8),8));
L_1803daa10_4:;
/* 1803daa18: subsd xmm6, xmm0 */
L_1803daa18_0:;
L_1803daa18_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803daa18_2:;
/* 1803daa1c: cvttsd2si eax, xmm6 */
L_1803daa1c_0:;
L_1803daa1c_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4992,8),8),4));
L_1803daa1c_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803daa1c_3:;
/* 1803daa20: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803daa20_0:;
L_1803daa20_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803daa20_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803daa20_3:;
wr(s->u,66,16,rd(s->u,24,16));
L_1803daa20_4:;
wr(s->r,4992,4,rd(s->u,66,4));
L_1803daa20_5:;
wr(s->r,4996,4,rd(s->u,70,4));
L_1803daa20_6:;
wr(s->r,5000,4,rd(s->u,74,4));
L_1803daa20_7:;
wr(s->r,5004,4,rd(s->u,78,4));
L_1803daa20_8:;
/* 1803daa25: add rsp, 0x30 */
L_1803daa25_0:;
L_1803daa25_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803daa25_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803daa25_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803daa25_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803daa25_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803daa25_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803daa25_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803daa25_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803daa25_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803daa25_10:;
/* 1803daa29: pop rbx */
L_1803daa29_0:;
L_1803daa29_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803daa29_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803daa29_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803daa29_4:;
wr(s->r,24,8,rd(s->u,50,8));
L_1803daa29_5:;
/* 1803daa2a: ret  */
L_1803daa2a_0:;
L_1803daa2a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803daa2a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803daa2a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803daa2a_4:;
return UINT64_C(0x1803daa2b);
}
uint64_t b_1803daa30(CPU*s){
/* 1803daa30: movsd qword ptr [rcx + 0x388], xmm1 */
L_1803daa30_0:;
L_1803daa30_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x388))));
L_1803daa30_2:;
wr(s->u,8,8,rd(s->r,4672,8));
L_1803daa30_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803daa30_4:;
/* 1803daa38: ret  */
L_1803daa38_0:;
L_1803daa38_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803daa38_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803daa38_3:;
return (uint64_t)rd(s->r,648,8);
L_1803daa38_4:;
return UINT64_C(0x1803daa39);
}
uint64_t b_1803daa60(CPU*s){
/* 1803daa60: sub rsp, 0x28 */
L_1803daa60_0:;
L_1803daa60_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803daa60_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803daa60_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803daa60_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803daa60_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803daa60_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803daa60_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803daa60_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803daa60_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803daa60_10:;
/* 1803daa64: mov edx, dword ptr [rcx + 0x374] */
L_1803daa64_0:;
L_1803daa64_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x374))));
L_1803daa64_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803daa64_3:;
wr(s->r,16,4,rd(s->u,12,4));
L_1803daa64_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803daa64_5:;
/* 1803daa6a: divss xmm1, dword ptr [rcx + 0x324] */
L_1803daa6a_0:;
L_1803daa6a_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x324))));
L_1803daa6a_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803daa6a_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->u,8,4),4),4));
L_1803daa6a_4:;
/* 1803daa72: mov r9, rcx */
L_1803daa72_0:;
L_1803daa72_1:;
wr(s->r,136,8,rd(s->r,8,8));
L_1803daa72_2:;
/* 1803daa75: imul edx, dword ptr [rcx + 0x368] */
L_1803daa75_0:;
L_1803daa75_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x368))));
L_1803daa75_2:;
wr(s->u,42,8,(U)sx(rd(s->r,16,4),4));
L_1803daa75_3:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803daa75_4:;
wr(s->u,50,8,(U)sx(rd(s->u,12,4),4));
L_1803daa75_5:;
wr(s->u,58,8,(rd(s->u,42,8)*rd(s->u,50,8)));
L_1803daa75_6:;
wr(s->r,16,4,(rd(s->u,58,8) >> (((U)UINT64_C(0x0))*8)));
L_1803daa75_7:;
wr(s->u,66,4,(rd(s->u,58,8) >> (((U)UINT64_C(0x4))*8)));
L_1803daa75_8:;
wr(s->u,26,8,(U)sx(rd(s->r,16,4),4));
L_1803daa75_9:;
wr(s->r,512,1,(rd(s->u,26,8)!=rd(s->u,58,8)));
L_1803daa75_10:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803daa75_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803daa75_12:;
/* 1803daa7c: movd xmm0, edx */
L_1803daa7c_0:;
L_1803daa7c_1:;
wr(s->r,4608,16,rd(s->r,16,4));
L_1803daa7c_2:;
/* 1803daa80: cvtdq2ps xmm0, xmm0 */
L_1803daa80_0:;
L_1803daa80_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803daa80_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803daa80_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803daa80_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803daa80_5:;
/* 1803daa83: mulss xmm1, xmm0 */
L_1803daa83_0:;
L_1803daa83_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803daa83_2:;
/* 1803daa87: cvttss2si r8d, xmm1 */
L_1803daa87_0:;
L_1803daa87_1:;
wr(s->r,128,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803daa87_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803daa87_3:;
/* 1803daa8c: cmp r8d, 0x80000000 */
L_1803daa8c_0:;
L_1803daa8c_1:;
wr(s->u,34,4,rd(s->r,128,4));
L_1803daa8c_2:;
wr(s->r,512,1,(rd(s->u,34,4)<((U)UINT64_C(0x80000000))));
L_1803daa8c_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,34,4),((U)UINT64_C(0x80000000)),4,1));
L_1803daa8c_4:;
wr(s->u,38,4,(rd(s->u,34,4)-((U)UINT64_C(0x80000000))));
L_1803daa8c_5:;
wr(s->r,519,1,(sx(rd(s->u,38,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daa8c_6:;
wr(s->r,518,1,(rd(s->u,38,4)==((U)UINT64_C(0x0))));
L_1803daa8c_7:;
wr(s->u,16,4,(rd(s->u,38,4)&((U)UINT64_C(0xff))));
L_1803daa8c_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803daa8c_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803daa8c_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803daa8c_11:;
/* 1803daa93: je 0x1803daabb */
L_1803daa93_0:;
L_1803daa93_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803daabb);}
L_1803daa93_2:;
return UINT64_C(0x1803daa95);
}
uint64_t b_1803daa95(CPU*s){
/* 1803daa95: pxor xmm0, xmm0 */
L_1803daa95_0:;
L_1803daa95_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803daa95_2:;
/* 1803daa99: cvtsi2ss xmm0, r8d */
L_1803daa99_0:;
L_1803daa99_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,128,4),4),4));
L_1803daa99_2:;
/* 1803daa9e: ucomiss xmm0, xmm1 */
L_1803daa9e_0:;
L_1803daa9e_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803daa9e_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803daa9e_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803daa9e_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803daa9e_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803daa9e_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803daa9e_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803daa9e_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803daa9e_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803daa9e_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803daa9e_11:;
/* 1803daaa1: je 0x1803daabb */
L_1803daaa1_0:;
L_1803daaa1_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803daabb);}
L_1803daaa1_2:;
return UINT64_C(0x1803daaa3);
}
uint64_t b_1803daaa3(CPU*s){
/* 1803daaa3: unpcklps xmm1, xmm1 */
L_1803daaa3_0:;
L_1803daaa3_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803daaa3_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803daaa3_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803daaa3_4:;
/* 1803daaa6: movmskps eax, xmm1 */
L_1803daaa6_0:;
L_1803daaa6_1:;
wr(s->r,0,4,(((rd(s->r,4672,16)>>31)&1)<<0)|(((rd(s->r,4672,16)>>63)&1)<<1)|(((rd(s->r,4672,16)>>95)&1)<<2)|(((rd(s->r,4672,16)>>127)&1)<<3));
L_1803daaa6_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803daaa6_3:;
/* 1803daaa9: pxor xmm1, xmm1 */
L_1803daaa9_0:;
L_1803daaa9_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803daaa9_2:;
/* 1803daaad: and eax, 1 */
L_1803daaad_0:;
L_1803daaad_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803daaad_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803daaad_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803daaad_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803daaad_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daaad_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803daaad_7:;
wr(s->u,14,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803daaad_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803daaad_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803daaad_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803daaad_11:;
/* 1803daab0: xor eax, 1 */
L_1803daab0_0:;
L_1803daab0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803daab0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803daab0_3:;
wr(s->r,0,4,(rd(s->r,0,4)^((U)UINT64_C(0x1))));
L_1803daab0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803daab0_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daab0_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803daab0_7:;
wr(s->u,14,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803daab0_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803daab0_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803daab0_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803daab0_11:;
/* 1803daab3: add r8d, eax */
L_1803daab3_0:;
L_1803daab3_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803daab3_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->r,0,4),4,0));
L_1803daab3_3:;
wr(s->r,128,4,(rd(s->r,128,4)+rd(s->r,0,4)));
L_1803daab3_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803daab3_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daab3_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803daab3_7:;
wr(s->u,14,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803daab3_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803daab3_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803daab3_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803daab3_11:;
/* 1803daab6: cvtsi2ss xmm1, r8d */
L_1803daab6_0:;
L_1803daab6_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,128,4),4),4));
L_1803daab6_2:;
/* 1803daabb: cvttss2si ecx, xmm1 */
L_1803daabb_0:;
L_1803daabb_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803daabb_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803daabb_3:;
/* 1803daabf: sar edx, 1 */
L_1803daabf_0:;
L_1803daabf_1:;
wr(s->u,33,4,(rd(s->r,16,4)&((U)UINT64_C(0x1))));
L_1803daabf_2:;
wr(s->r,512,1,(rd(s->u,33,4)!=((U)UINT64_C(0x0))));
L_1803daabf_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803daabf_4:;
wr(s->r,16,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,16,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,16,4),4)>>((U)UINT64_C(0x1)))));
L_1803daabf_5:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803daabf_6:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daabf_7:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803daabf_8:;
wr(s->u,14,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803daabf_9:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803daabf_10:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803daabf_11:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803daabf_12:;
/* 1803daac1: mov eax, edx */
L_1803daac1_0:;
L_1803daac1_1:;
wr(s->r,0,4,rd(s->r,16,4));
L_1803daac1_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803daac1_3:;
/* 1803daac3: cmp ecx, edx */
L_1803daac3_0:;
L_1803daac3_1:;
wr(s->u,25,4,rd(s->r,16,4));
L_1803daac3_2:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,25,4)));
L_1803daac3_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,25,4),4,1));
L_1803daac3_4:;
wr(s->u,29,4,(rd(s->r,8,4)-rd(s->u,25,4)));
L_1803daac3_5:;
wr(s->r,519,1,(sx(rd(s->u,29,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daac3_6:;
wr(s->r,518,1,(rd(s->u,29,4)==((U)UINT64_C(0x0))));
L_1803daac3_7:;
wr(s->u,14,4,(rd(s->u,29,4)&((U)UINT64_C(0xff))));
L_1803daac3_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803daac3_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803daac3_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803daac3_11:;
/* 1803daac5: mov dword ptr [r9 + 0x384], ecx */
L_1803daac5_0:;
L_1803daac5_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x384))));
L_1803daac5_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_1803daac5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803daac5_4:;
/* 1803daacc: cmovl eax, ecx */
L_1803daacc_0:;
L_1803daacc_1:;
wr(s->u,13,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803daacc_2:;
wr(s->u,20,4,rd(s->r,8,4));
L_1803daacc_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803daacc_4:;
wr(s->u,24,1,(!rd(s->u,13,1)));
L_1803daacc_5:;
if(rd(s->u,24,1)){goto L_1803daacf_0;}
L_1803daacc_6:;
wr(s->r,0,4,rd(s->u,20,4));
L_1803daacc_7:;
/* 1803daacf: test eax, eax */
L_1803daacf_0:;
L_1803daacf_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803daacf_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803daacf_3:;
wr(s->u,37,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803daacf_4:;
wr(s->r,519,1,(sx(rd(s->u,37,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daacf_5:;
wr(s->r,518,1,(rd(s->u,37,4)==((U)UINT64_C(0x0))));
L_1803daacf_6:;
wr(s->u,14,4,(rd(s->u,37,4)&((U)UINT64_C(0xff))));
L_1803daacf_7:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803daacf_8:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803daacf_9:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803daacf_10:;
/* 1803daad1: jns 0x1803daad7 */
L_1803daad1_0:;
L_1803daad1_1:;
wr(s->u,12,1,(!rd(s->r,519,1)));
L_1803daad1_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803daad7);}
L_1803daad1_3:;
return UINT64_C(0x1803daad3);
}
uint64_t b_1803daabb(CPU*s){
/* 1803daabb: cvttss2si ecx, xmm1 */
L_1803daabb_0:;
L_1803daabb_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803daabb_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803daabb_3:;
/* 1803daabf: sar edx, 1 */
L_1803daabf_0:;
L_1803daabf_1:;
wr(s->u,33,4,(rd(s->r,16,4)&((U)UINT64_C(0x1))));
L_1803daabf_2:;
wr(s->r,512,1,(rd(s->u,33,4)!=((U)UINT64_C(0x0))));
L_1803daabf_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803daabf_4:;
wr(s->r,16,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,16,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,16,4),4)>>((U)UINT64_C(0x1)))));
L_1803daabf_5:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803daabf_6:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daabf_7:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803daabf_8:;
wr(s->u,14,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803daabf_9:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803daabf_10:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803daabf_11:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803daabf_12:;
/* 1803daac1: mov eax, edx */
L_1803daac1_0:;
L_1803daac1_1:;
wr(s->r,0,4,rd(s->r,16,4));
L_1803daac1_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803daac1_3:;
/* 1803daac3: cmp ecx, edx */
L_1803daac3_0:;
L_1803daac3_1:;
wr(s->u,25,4,rd(s->r,16,4));
L_1803daac3_2:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,25,4)));
L_1803daac3_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,25,4),4,1));
L_1803daac3_4:;
wr(s->u,29,4,(rd(s->r,8,4)-rd(s->u,25,4)));
L_1803daac3_5:;
wr(s->r,519,1,(sx(rd(s->u,29,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daac3_6:;
wr(s->r,518,1,(rd(s->u,29,4)==((U)UINT64_C(0x0))));
L_1803daac3_7:;
wr(s->u,14,4,(rd(s->u,29,4)&((U)UINT64_C(0xff))));
L_1803daac3_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803daac3_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803daac3_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803daac3_11:;
/* 1803daac5: mov dword ptr [r9 + 0x384], ecx */
L_1803daac5_0:;
L_1803daac5_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x384))));
L_1803daac5_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_1803daac5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803daac5_4:;
/* 1803daacc: cmovl eax, ecx */
L_1803daacc_0:;
L_1803daacc_1:;
wr(s->u,13,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803daacc_2:;
wr(s->u,20,4,rd(s->r,8,4));
L_1803daacc_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803daacc_4:;
wr(s->u,24,1,(!rd(s->u,13,1)));
L_1803daacc_5:;
if(rd(s->u,24,1)){goto L_1803daacf_0;}
L_1803daacc_6:;
wr(s->r,0,4,rd(s->u,20,4));
L_1803daacc_7:;
/* 1803daacf: test eax, eax */
L_1803daacf_0:;
L_1803daacf_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803daacf_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803daacf_3:;
wr(s->u,37,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803daacf_4:;
wr(s->r,519,1,(sx(rd(s->u,37,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daacf_5:;
wr(s->r,518,1,(rd(s->u,37,4)==((U)UINT64_C(0x0))));
L_1803daacf_6:;
wr(s->u,14,4,(rd(s->u,37,4)&((U)UINT64_C(0xff))));
L_1803daacf_7:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803daacf_8:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803daacf_9:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803daacf_10:;
/* 1803daad1: jns 0x1803daad7 */
L_1803daad1_0:;
L_1803daad1_1:;
wr(s->u,12,1,(!rd(s->r,519,1)));
L_1803daad1_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803daad7);}
L_1803daad1_3:;
return UINT64_C(0x1803daad3);
}
uint64_t b_1803daacf(CPU*s){
/* 1803daacf: test eax, eax */
L_1803daacf_0:;
L_1803daacf_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803daacf_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803daacf_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803daacf_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daacf_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803daacf_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803daacf_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803daacf_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803daacf_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803daacf_10:;
/* 1803daad1: jns 0x1803daad7 */
L_1803daad1_0:;
L_1803daad1_1:;
wr(s->u,0,1,(!rd(s->r,519,1)));
L_1803daad1_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803daad7);}
L_1803daad1_3:;
return UINT64_C(0x1803daad3);
}
uint64_t b_1803daad3(CPU*s){
/* 1803daad3: xor edx, edx */
L_1803daad3_0:;
L_1803daad3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803daad3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803daad3_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803daad3_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803daad3_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daad3_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803daad3_7:;
wr(s->u,0,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803daad3_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803daad3_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803daad3_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803daad3_11:;
/* 1803daad5: jmp 0x1803daadc */
L_1803daad5_0:;
L_1803daad5_1:;
return UINT64_C(0x1803daadc);
L_1803daad5_2:;
return UINT64_C(0x1803daad7);
}
uint64_t b_1803daad7(CPU*s){
/* 1803daad7: cmp ecx, edx */
L_1803daad7_0:;
L_1803daad7_1:;
wr(s->u,40,4,rd(s->r,16,4));
L_1803daad7_2:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,40,4)));
L_1803daad7_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,40,4),4,1));
L_1803daad7_4:;
wr(s->u,44,4,(rd(s->r,8,4)-rd(s->u,40,4)));
L_1803daad7_5:;
wr(s->r,519,1,(sx(rd(s->u,44,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daad7_6:;
wr(s->r,518,1,(rd(s->u,44,4)==((U)UINT64_C(0x0))));
L_1803daad7_7:;
wr(s->u,29,4,(rd(s->u,44,4)&((U)UINT64_C(0xff))));
L_1803daad7_8:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803daad7_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803daad7_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803daad7_11:;
/* 1803daad9: cmovl edx, ecx */
L_1803daad9_0:;
L_1803daad9_1:;
wr(s->u,28,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803daad9_2:;
wr(s->u,35,4,rd(s->r,8,4));
L_1803daad9_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803daad9_4:;
wr(s->u,39,1,(!rd(s->u,28,1)));
L_1803daad9_5:;
if(rd(s->u,39,1)){goto L_1803daadc_0;}
L_1803daad9_6:;
wr(s->r,16,4,rd(s->u,35,4));
L_1803daad9_7:;
/* 1803daadc: mov rcx, qword ptr [r9 + 8] */
L_1803daadc_0:;
L_1803daadc_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803daadc_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803daadc_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803daadc_4:;
/* 1803daae0: mov dword ptr [r9 + 0x384], edx */
L_1803daae0_0:;
L_1803daae0_1:;
wr(s->u,8,8,(rd(s->r,136,8)+((U)UINT64_C(0x384))));
L_1803daae0_2:;
wr(s->u,16,4,rd(s->r,16,4));
L_1803daae0_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803daae0_4:;
/* 1803daae7: call 0x1803e0050 */
L_1803daae7_0:;
L_1803daae7_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803daae7_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803daaec)));
L_1803daae7_3:;
return (uint64_t)UINT64_C(0x1803e0050);
L_1803daae7_4:;
return UINT64_C(0x1803daaec);
}
uint64_t b_1803daadc(CPU*s){
/* 1803daadc: mov rcx, qword ptr [r9 + 8] */
L_1803daadc_0:;
L_1803daadc_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803daadc_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803daadc_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803daadc_4:;
/* 1803daae0: mov dword ptr [r9 + 0x384], edx */
L_1803daae0_0:;
L_1803daae0_1:;
wr(s->u,8,8,(rd(s->r,136,8)+((U)UINT64_C(0x384))));
L_1803daae0_2:;
wr(s->u,16,4,rd(s->r,16,4));
L_1803daae0_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803daae0_4:;
/* 1803daae7: call 0x1803e0050 */
L_1803daae7_0:;
L_1803daae7_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803daae7_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803daaec)));
L_1803daae7_3:;
return (uint64_t)UINT64_C(0x1803e0050);
L_1803daae7_4:;
return UINT64_C(0x1803daaec);
}
uint64_t b_1803daaec(CPU*s){
/* 1803daaec: xor eax, eax */
L_1803daaec_0:;
L_1803daaec_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803daaec_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803daaec_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803daaec_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803daaec_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daaec_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803daaec_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803daaec_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803daaec_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803daaec_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803daaec_11:;
/* 1803daaee: add rsp, 0x28 */
L_1803daaee_0:;
L_1803daaee_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803daaee_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803daaee_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803daaee_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803daaee_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803daaee_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803daaee_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803daaee_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803daaee_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803daaee_10:;
/* 1803daaf2: ret  */
L_1803daaf2_0:;
L_1803daaf2_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803daaf2_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803daaf2_3:;
return (uint64_t)rd(s->r,648,8);
L_1803daaf2_4:;
return UINT64_C(0x1803daaf3);
}
uint64_t b_1803dab00(CPU*s){
/* 1803dab00: cmp dword ptr [rcx + 0x338], 2 */
L_1803dab00_0:;
L_1803dab00_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x338))));
L_1803dab00_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dab00_3:;
wr(s->u,18,4,rd(s->u,8,4));
L_1803dab00_4:;
wr(s->r,512,1,(rd(s->u,18,4)<((U)UINT64_C(0x2))));
L_1803dab00_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),((U)UINT64_C(0x2)),4,1));
L_1803dab00_6:;
wr(s->u,22,4,(rd(s->u,18,4)-((U)UINT64_C(0x2))));
L_1803dab00_7:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dab00_8:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803dab00_9:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803dab00_10:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803dab00_11:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803dab00_12:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803dab00_13:;
/* 1803dab07: je 0x1803dab0f */
L_1803dab07_0:;
L_1803dab07_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dab0f);}
L_1803dab07_2:;
return UINT64_C(0x1803dab09);
}
uint64_t b_1803dab09(CPU*s){
/* 1803dab09: mov eax, 0x4c4b42 */
L_1803dab09_0:;
L_1803dab09_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b42)));
L_1803dab09_2:;
/* 1803dab0e: ret  */
L_1803dab0e_0:;
L_1803dab0e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dab0e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dab0e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dab0e_4:;
return UINT64_C(0x1803dab0f);
}
uint64_t b_1803dab0f(CPU*s){
/* 1803dab0f: mov dword ptr [rcx + 0x3d0], edx */
L_1803dab0f_0:;
L_1803dab0f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x3d0))));
L_1803dab0f_2:;
wr(s->u,8,4,rd(s->r,16,4));
L_1803dab0f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dab0f_4:;
/* 1803dab15: xor eax, eax */
L_1803dab15_0:;
L_1803dab15_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dab15_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dab15_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dab15_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dab15_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dab15_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dab15_7:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dab15_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803dab15_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803dab15_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803dab15_11:;
/* 1803dab17: ret  */
L_1803dab17_0:;
L_1803dab17_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dab17_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dab17_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dab17_4:;
return UINT64_C(0x1803dab18);
}
uint64_t b_1803dab20(CPU*s){
/* 1803dab20: mov rax, rsp */
L_1803dab20_0:;
L_1803dab20_1:;
wr(s->r,0,8,rd(s->r,32,8));
L_1803dab20_2:;
/* 1803dab23: mov qword ptr [rax + 8], rcx */
L_1803dab23_0:;
L_1803dab23_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803dab23_2:;
wr(s->u,16,8,rd(s->r,8,8));
L_1803dab23_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803dab23_4:;
/* 1803dab27: push rdi */
L_1803dab27_0:;
L_1803dab27_1:;
wr(s->u,25,8,rd(s->r,56,8));
L_1803dab27_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dab27_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,25,8));
L_1803dab27_4:;
/* 1803dab28: push r12 */
L_1803dab28_0:;
L_1803dab28_1:;
wr(s->u,25,8,rd(s->r,160,8));
L_1803dab28_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dab28_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,25,8));
L_1803dab28_4:;
/* 1803dab2a: push r13 */
L_1803dab2a_0:;
L_1803dab2a_1:;
wr(s->u,25,8,rd(s->r,168,8));
L_1803dab2a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dab2a_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,25,8));
L_1803dab2a_4:;
/* 1803dab2c: sub rsp, 0x50 */
L_1803dab2c_0:;
L_1803dab2c_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x50))));
L_1803dab2c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,1));
L_1803dab2c_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x50))));
L_1803dab2c_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dab2c_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dab2c_6:;
wr(s->u,33,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dab2c_7:;
wr(s->u,41,1,pop(rd(s->u,33,8),8));
L_1803dab2c_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803dab2c_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803dab2c_10:;
/* 1803dab30: mov qword ptr [rsp + 0x40], 0xfffffffffffffffe */
L_1803dab30_0:;
L_1803dab30_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dab30_2:;
wr(s->u,16,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803dab30_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dab30_4:;
/* 1803dab39: mov qword ptr [rax + 0x10], rbx */
L_1803dab39_0:;
L_1803dab39_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803dab39_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803dab39_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803dab39_4:;
/* 1803dab3d: mov qword ptr [rax + 0x18], rbp */
L_1803dab3d_0:;
L_1803dab3d_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x18))));
L_1803dab3d_2:;
wr(s->u,16,8,rd(s->r,40,8));
L_1803dab3d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803dab3d_4:;
/* 1803dab41: mov qword ptr [rax + 0x20], rsi */
L_1803dab41_0:;
L_1803dab41_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x20))));
L_1803dab41_2:;
wr(s->u,16,8,rd(s->r,48,8));
L_1803dab41_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803dab41_4:;
/* 1803dab45: mov rdi, rcx */
L_1803dab45_0:;
L_1803dab45_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803dab45_2:;
/* 1803dab48: lea rax, [rip + 0x431ab9] */
L_1803dab48_0:;
L_1803dab48_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080c608)));
L_1803dab48_2:;
/* 1803dab4f: mov qword ptr [rcx], rax */
L_1803dab4f_0:;
L_1803dab4f_1:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803dab4f_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,16,8));
L_1803dab4f_3:;
/* 1803dab52: comiss xmm3, dword ptr [rip + 0x4319ff] */
L_1803dab52_0:;
L_1803dab52_1:;
wr(s->u,43,1,isnan(fv(rd(s->r,4800,4),4)));
L_1803dab52_2:;
wr(s->u,44,1,isnan(fv(mr(UINT64_C(0x18080c558),4),4)));
L_1803dab52_3:;
wr(s->r,514,1,((rd(s->u,43,1)!=0)||(rd(s->u,44,1)!=0)));
L_1803dab52_4:;
wr(s->u,45,1,(fv(rd(s->r,4800,4),4)==fv(mr(UINT64_C(0x18080c558),4),4)));
L_1803dab52_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,45,1)));
L_1803dab52_6:;
wr(s->u,46,1,(fv(rd(s->r,4800,4),4)<fv(mr(UINT64_C(0x18080c558),4),4)));
L_1803dab52_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,46,1)));
L_1803dab52_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dab52_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dab52_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dab52_11:;
/* 1803dab59: jae 0x1803dab67 */
L_1803dab59_0:;
L_1803dab59_1:;
wr(s->u,24,1,(!rd(s->r,512,1)));
L_1803dab59_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803dab67);}
L_1803dab59_3:;
return UINT64_C(0x1803dab5b);
}
uint64_t b_1803dab5b(CPU*s){
/* 1803dab5b: mov dword ptr [rcx + 0x368], 0x800 */
L_1803dab5b_0:;
L_1803dab5b_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x368))));
L_1803dab5b_2:;
wr(s->u,8,4,((U)UINT64_C(0x800)));
L_1803dab5b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dab5b_4:;
/* 1803dab65: jmp 0x1803dabb0 */
L_1803dab65_0:;
L_1803dab65_1:;
return UINT64_C(0x1803dabb0);
L_1803dab65_2:;
return UINT64_C(0x1803dab67);
}
uint64_t b_1803dab67(CPU*s){
/* 1803dab67: comiss xmm3, dword ptr [rip + 0x4317ba] */
L_1803dab67_0:;
L_1803dab67_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4800,4),4)));
L_1803dab67_2:;
wr(s->u,2,1,isnan(fv(mr(UINT64_C(0x18080c328),4),4)));
L_1803dab67_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803dab67_4:;
wr(s->u,3,1,(fv(rd(s->r,4800,4),4)==fv(mr(UINT64_C(0x18080c328),4),4)));
L_1803dab67_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dab67_6:;
wr(s->u,4,1,(fv(rd(s->r,4800,4),4)<fv(mr(UINT64_C(0x18080c328),4),4)));
L_1803dab67_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803dab67_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dab67_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dab67_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dab67_11:;
/* 1803dab6e: jae 0x1803dab7c */
L_1803dab6e_0:;
L_1803dab6e_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803dab6e_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dab7c);}
L_1803dab6e_3:;
return UINT64_C(0x1803dab70);
}
uint64_t b_1803dab70(CPU*s){
/* 1803dab70: mov dword ptr [rcx + 0x368], 0x1000 */
L_1803dab70_0:;
L_1803dab70_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x368))));
L_1803dab70_2:;
wr(s->u,8,4,((U)UINT64_C(0x1000)));
L_1803dab70_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dab70_4:;
/* 1803dab7a: jmp 0x1803dabb0 */
L_1803dab7a_0:;
L_1803dab7a_1:;
return UINT64_C(0x1803dabb0);
L_1803dab7a_2:;
return UINT64_C(0x1803dab7c);
}
uint64_t b_1803dab7c(CPU*s){
/* 1803dab7c: comiss xmm3, dword ptr [rip + 0x4317a1] */
L_1803dab7c_0:;
L_1803dab7c_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4800,4),4)));
L_1803dab7c_2:;
wr(s->u,2,1,isnan(fv(mr(UINT64_C(0x18080c324),4),4)));
L_1803dab7c_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803dab7c_4:;
wr(s->u,3,1,(fv(rd(s->r,4800,4),4)==fv(mr(UINT64_C(0x18080c324),4),4)));
L_1803dab7c_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dab7c_6:;
wr(s->u,4,1,(fv(rd(s->r,4800,4),4)<fv(mr(UINT64_C(0x18080c324),4),4)));
L_1803dab7c_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803dab7c_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dab7c_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dab7c_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dab7c_11:;
/* 1803dab83: jae 0x1803dab91 */
L_1803dab83_0:;
L_1803dab83_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803dab83_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dab91);}
L_1803dab83_3:;
return UINT64_C(0x1803dab85);
}
uint64_t b_1803dab85(CPU*s){
/* 1803dab85: mov dword ptr [rcx + 0x368], 0x2000 */
L_1803dab85_0:;
L_1803dab85_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x368))));
L_1803dab85_2:;
wr(s->u,8,4,((U)UINT64_C(0x2000)));
L_1803dab85_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dab85_4:;
/* 1803dab8f: jmp 0x1803dabb0 */
L_1803dab8f_0:;
L_1803dab8f_1:;
return UINT64_C(0x1803dabb0);
L_1803dab8f_2:;
return UINT64_C(0x1803dab91);
}
uint64_t b_1803dab91(CPU*s){
/* 1803dab91: comiss xmm3, dword ptr [rip + 0x431788] */
L_1803dab91_0:;
L_1803dab91_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4800,4),4)));
L_1803dab91_2:;
wr(s->u,2,1,isnan(fv(mr(UINT64_C(0x18080c320),4),4)));
L_1803dab91_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803dab91_4:;
wr(s->u,3,1,(fv(rd(s->r,4800,4),4)==fv(mr(UINT64_C(0x18080c320),4),4)));
L_1803dab91_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dab91_6:;
wr(s->u,4,1,(fv(rd(s->r,4800,4),4)<fv(mr(UINT64_C(0x18080c320),4),4)));
L_1803dab91_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803dab91_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dab91_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dab91_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dab91_11:;
/* 1803dab98: jae 0x1803daba6 */
L_1803dab98_0:;
L_1803dab98_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803dab98_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803daba6);}
L_1803dab98_3:;
return UINT64_C(0x1803dab9a);
}
uint64_t b_1803dab9a(CPU*s){
/* 1803dab9a: mov dword ptr [rcx + 0x368], 0x4000 */
L_1803dab9a_0:;
L_1803dab9a_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x368))));
L_1803dab9a_2:;
wr(s->u,8,4,((U)UINT64_C(0x4000)));
L_1803dab9a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dab9a_4:;
/* 1803daba4: jmp 0x1803dabb0 */
L_1803daba4_0:;
L_1803daba4_1:;
return UINT64_C(0x1803dabb0);
L_1803daba4_2:;
return UINT64_C(0x1803daba6);
}
uint64_t b_1803daba6(CPU*s){
/* 1803daba6: mov dword ptr [rcx + 0x368], 0x8000 */
L_1803daba6_0:;
L_1803daba6_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x368))));
L_1803daba6_2:;
wr(s->u,16,4,((U)UINT64_C(0x8000)));
L_1803daba6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803daba6_4:;
/* 1803dabb0: movss dword ptr [rcx + 0x324], xmm3 */
L_1803dabb0_0:;
L_1803dabb0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x324))));
L_1803dabb0_2:;
wr(s->u,16,4,rd(s->r,4800,4));
L_1803dabb0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dabb0_4:;
/* 1803dabb8: mov dword ptr [rcx + 0x374], 1 */
L_1803dabb8_0:;
L_1803dabb8_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x374))));
L_1803dabb8_2:;
wr(s->u,16,4,((U)UINT64_C(0x1)));
L_1803dabb8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dabb8_4:;
/* 1803dabc2: xor r12d, r12d */
L_1803dabc2_0:;
L_1803dabc2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dabc2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dabc2_3:;
wr(s->r,160,4,(rd(s->r,160,4)^rd(s->r,160,4)));
L_1803dabc2_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803dabc2_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dabc2_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803dabc2_7:;
wr(s->u,25,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803dabc2_8:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803dabc2_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803dabc2_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803dabc2_11:;
/* 1803dabc5: cmp dword ptr [rsp + 0x90], 2 */
L_1803dabc5_0:;
L_1803dabc5_1:;
wr(s->u,8,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803dabc5_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dabc5_3:;
wr(s->u,31,4,rd(s->u,20,4));
L_1803dabc5_4:;
wr(s->r,512,1,(rd(s->u,31,4)<((U)UINT64_C(0x2))));
L_1803dabc5_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,31,4),((U)UINT64_C(0x2)),4,1));
L_1803dabc5_6:;
wr(s->u,35,4,(rd(s->u,31,4)-((U)UINT64_C(0x2))));
L_1803dabc5_7:;
wr(s->r,519,1,(sx(rd(s->u,35,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dabc5_8:;
wr(s->r,518,1,(rd(s->u,35,4)==((U)UINT64_C(0x0))));
L_1803dabc5_9:;
wr(s->u,25,4,(rd(s->u,35,4)&((U)UINT64_C(0xff))));
L_1803dabc5_10:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803dabc5_11:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803dabc5_12:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803dabc5_13:;
/* 1803dabcd: jne 0x1803dabe5 */
L_1803dabcd_0:;
L_1803dabcd_1:;
wr(s->u,24,1,(!rd(s->r,518,1)));
L_1803dabcd_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803dabe5);}
L_1803dabcd_3:;
return UINT64_C(0x1803dabcf);
}
uint64_t b_1803dabb0(CPU*s){
/* 1803dabb0: movss dword ptr [rcx + 0x324], xmm3 */
L_1803dabb0_0:;
L_1803dabb0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x324))));
L_1803dabb0_2:;
wr(s->u,16,4,rd(s->r,4800,4));
L_1803dabb0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dabb0_4:;
/* 1803dabb8: mov dword ptr [rcx + 0x374], 1 */
L_1803dabb8_0:;
L_1803dabb8_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x374))));
L_1803dabb8_2:;
wr(s->u,16,4,((U)UINT64_C(0x1)));
L_1803dabb8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dabb8_4:;
/* 1803dabc2: xor r12d, r12d */
L_1803dabc2_0:;
L_1803dabc2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dabc2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dabc2_3:;
wr(s->r,160,4,(rd(s->r,160,4)^rd(s->r,160,4)));
L_1803dabc2_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803dabc2_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dabc2_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803dabc2_7:;
wr(s->u,25,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803dabc2_8:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803dabc2_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803dabc2_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803dabc2_11:;
/* 1803dabc5: cmp dword ptr [rsp + 0x90], 2 */
L_1803dabc5_0:;
L_1803dabc5_1:;
wr(s->u,8,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803dabc5_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dabc5_3:;
wr(s->u,31,4,rd(s->u,20,4));
L_1803dabc5_4:;
wr(s->r,512,1,(rd(s->u,31,4)<((U)UINT64_C(0x2))));
L_1803dabc5_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,31,4),((U)UINT64_C(0x2)),4,1));
L_1803dabc5_6:;
wr(s->u,35,4,(rd(s->u,31,4)-((U)UINT64_C(0x2))));
L_1803dabc5_7:;
wr(s->r,519,1,(sx(rd(s->u,35,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dabc5_8:;
wr(s->r,518,1,(rd(s->u,35,4)==((U)UINT64_C(0x0))));
L_1803dabc5_9:;
wr(s->u,25,4,(rd(s->u,35,4)&((U)UINT64_C(0xff))));
L_1803dabc5_10:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803dabc5_11:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803dabc5_12:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803dabc5_13:;
/* 1803dabcd: jne 0x1803dabe5 */
L_1803dabcd_0:;
L_1803dabcd_1:;
wr(s->u,24,1,(!rd(s->r,518,1)));
L_1803dabcd_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803dabe5);}
L_1803dabcd_3:;
return UINT64_C(0x1803dabcf);
}
uint64_t b_1803dabcf(CPU*s){
/* 1803dabcf: mov dword ptr [rcx + 0x394], 1 */
L_1803dabcf_0:;
L_1803dabcf_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x394))));
L_1803dabcf_2:;
wr(s->u,8,4,((U)UINT64_C(0x1)));
L_1803dabcf_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dabcf_4:;
/* 1803dabd9: mov dword ptr [rcx + 0x374], 1 */
L_1803dabd9_0:;
L_1803dabd9_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x374))));
L_1803dabd9_2:;
wr(s->u,8,4,((U)UINT64_C(0x1)));
L_1803dabd9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dabd9_4:;
/* 1803dabe3: jmp 0x1803dabec */
L_1803dabe3_0:;
L_1803dabe3_1:;
return UINT64_C(0x1803dabec);
L_1803dabe3_2:;
return UINT64_C(0x1803dabe5);
}
uint64_t b_1803dabe5(CPU*s){
/* 1803dabe5: mov dword ptr [rcx + 0x394], r12d */
L_1803dabe5_0:;
L_1803dabe5_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x394))));
L_1803dabe5_2:;
wr(s->u,8,4,rd(s->r,160,4));
L_1803dabe5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dabe5_4:;
/* 1803dabec: cmp r8d, 2 */
L_1803dabec_0:;
L_1803dabec_1:;
wr(s->u,20,4,rd(s->r,128,4));
L_1803dabec_2:;
wr(s->r,512,1,(rd(s->u,20,4)<((U)UINT64_C(0x2))));
L_1803dabec_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),((U)UINT64_C(0x2)),4,1));
L_1803dabec_4:;
wr(s->u,24,4,(rd(s->u,20,4)-((U)UINT64_C(0x2))));
L_1803dabec_5:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dabec_6:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803dabec_7:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803dabec_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803dabec_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803dabec_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803dabec_11:;
/* 1803dabf0: jle 0x1803dabfe */
L_1803dabf0_0:;
L_1803dabf0_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dabf0_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803dabf0_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803dabfe);}
L_1803dabf0_4:;
return UINT64_C(0x1803dabf2);
}
uint64_t b_1803dabec(CPU*s){
/* 1803dabec: cmp r8d, 2 */
L_1803dabec_0:;
L_1803dabec_1:;
wr(s->u,8,4,rd(s->r,128,4));
L_1803dabec_2:;
wr(s->r,512,1,(rd(s->u,8,4)<((U)UINT64_C(0x2))));
L_1803dabec_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),((U)UINT64_C(0x2)),4,1));
L_1803dabec_4:;
wr(s->u,12,4,(rd(s->u,8,4)-((U)UINT64_C(0x2))));
L_1803dabec_5:;
wr(s->r,519,1,(sx(rd(s->u,12,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dabec_6:;
wr(s->r,518,1,(rd(s->u,12,4)==((U)UINT64_C(0x0))));
L_1803dabec_7:;
wr(s->u,2,4,(rd(s->u,12,4)&((U)UINT64_C(0xff))));
L_1803dabec_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dabec_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dabec_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dabec_11:;
/* 1803dabf0: jle 0x1803dabfe */
L_1803dabf0_0:;
L_1803dabf0_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dabf0_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803dabf0_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803dabfe);}
L_1803dabf0_4:;
return UINT64_C(0x1803dabf2);
}
uint64_t b_1803dabf2(CPU*s){
/* 1803dabf2: lea eax, [r8 + 1] */
L_1803dabf2_0:;
L_1803dabf2_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x1))));
L_1803dabf2_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dabf2_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dabf2_4:;
/* 1803dabf6: mov dword ptr [rcx + 0x338], eax */
L_1803dabf6_0:;
L_1803dabf6_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x338))));
L_1803dabf6_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803dabf6_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dabf6_4:;
/* 1803dabfc: jmp 0x1803dac05 */
L_1803dabfc_0:;
L_1803dabfc_1:;
return UINT64_C(0x1803dac05);
L_1803dabfc_2:;
return UINT64_C(0x1803dabfe);
}
uint64_t b_1803dabfe(CPU*s){
/* 1803dabfe: mov dword ptr [rcx + 0x338], r8d */
L_1803dabfe_0:;
L_1803dabfe_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x338))));
L_1803dabfe_2:;
wr(s->u,13,4,rd(s->r,128,4));
L_1803dabfe_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dabfe_4:;
/* 1803dac05: mov ecx, dword ptr [rcx + 0x368] */
L_1803dac05_0:;
L_1803dac05_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x368))));
L_1803dac05_2:;
wr(s->u,17,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dac05_3:;
wr(s->r,8,4,rd(s->u,17,4));
L_1803dac05_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dac05_5:;
/* 1803dac0b: mov eax, ecx */
L_1803dac0b_0:;
L_1803dac0b_1:;
wr(s->r,0,4,rd(s->r,8,4));
L_1803dac0b_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dac0b_3:;
/* 1803dac0d: shl eax, 4 */
L_1803dac0d_0:;
L_1803dac0d_1:;
wr(s->u,63,4,(((U)UINT64_C(0x4))&((U)UINT64_C(0x1f))));
L_1803dac0d_2:;
wr(s->u,67,4,rd(s->r,0,4));
L_1803dac0d_3:;
wr(s->r,0,4,((rd(s->u,63,4)>=32)?0:(rd(s->r,0,4)<<rd(s->u,63,4))));
L_1803dac0d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dac0d_5:;
wr(s->u,46,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803dac0d_6:;
wr(s->u,47,4,(rd(s->u,63,4)-((U)UINT64_C(0x1))));
L_1803dac0d_7:;
wr(s->u,51,4,((rd(s->u,47,4)>=32)?0:(rd(s->u,67,4)<<rd(s->u,47,4))));
L_1803dac0d_8:;
wr(s->u,55,1,(sx(rd(s->u,51,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dac0d_9:;
wr(s->u,0,1,rd(s->u,46,1));
L_1803dac0d_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dac0d_11:;
wr(s->u,2,1,(!rd(s->u,46,1)));
L_1803dac0d_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dac0d_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,55,1)));
L_1803dac0d_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dac0d_15:;
wr(s->u,56,1,(rd(s->u,63,4)==((U)UINT64_C(0x1))));
L_1803dac0d_16:;
wr(s->u,57,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dac0d_17:;
wr(s->u,58,1,(rd(s->r,512,1)^rd(s->u,57,1)));
L_1803dac0d_18:;
wr(s->u,0,1,rd(s->u,56,1));
L_1803dac0d_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,58,1)));
L_1803dac0d_20:;
wr(s->u,2,1,(!rd(s->u,56,1)));
L_1803dac0d_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dac0d_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dac0d_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dac0d_24:;
wr(s->u,27,1,(rd(s->u,63,4)!=((U)UINT64_C(0x0))));
L_1803dac0d_25:;
wr(s->u,28,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dac0d_26:;
wr(s->u,29,1,(!rd(s->u,27,1)));
L_1803dac0d_27:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,519,1)));
L_1803dac0d_28:;
wr(s->u,31,1,(rd(s->u,27,1)&rd(s->u,28,1)));
L_1803dac0d_29:;
wr(s->r,519,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803dac0d_30:;
wr(s->u,32,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dac0d_31:;
wr(s->u,33,1,(!rd(s->u,27,1)));
L_1803dac0d_32:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,518,1)));
L_1803dac0d_33:;
wr(s->u,35,1,(rd(s->u,27,1)&rd(s->u,32,1)));
L_1803dac0d_34:;
wr(s->r,518,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803dac0d_35:;
wr(s->u,36,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dac0d_36:;
wr(s->u,40,1,pop(rd(s->u,36,4),4));
L_1803dac0d_37:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803dac0d_38:;
wr(s->u,42,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803dac0d_39:;
wr(s->u,43,1,(!rd(s->u,27,1)));
L_1803dac0d_40:;
wr(s->u,44,1,(rd(s->u,43,1)&rd(s->r,514,1)));
L_1803dac0d_41:;
wr(s->u,45,1,(rd(s->u,27,1)&rd(s->u,42,1)));
L_1803dac0d_42:;
wr(s->r,514,1,(rd(s->u,44,1)|rd(s->u,45,1)));
L_1803dac0d_43:;
/* 1803dac10: mov dword ptr [rdi + 0x33c], eax */
L_1803dac10_0:;
L_1803dac10_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x33c))));
L_1803dac10_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803dac10_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dac10_4:;
/* 1803dac16: mov dword ptr [rdi + 0x340], eax */
L_1803dac16_0:;
L_1803dac16_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x340))));
L_1803dac16_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803dac16_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dac16_4:;
/* 1803dac1c: mov dword ptr [rdi + 0x344], edx */
L_1803dac1c_0:;
L_1803dac1c_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x344))));
L_1803dac1c_2:;
wr(s->u,13,4,rd(s->r,16,4));
L_1803dac1c_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dac1c_4:;
/* 1803dac22: mov dword ptr [rdi + 0x310], 0x3f800000 */
L_1803dac22_0:;
L_1803dac22_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x310))));
L_1803dac22_2:;
wr(s->u,13,4,((U)UINT64_C(0x3f800000)));
L_1803dac22_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dac22_4:;
/* 1803dac2c: mov dword ptr [rdi + 0x378], r12d */
L_1803dac2c_0:;
L_1803dac2c_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x378))));
L_1803dac2c_2:;
wr(s->u,13,4,rd(s->r,160,4));
L_1803dac2c_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dac2c_4:;
/* 1803dac33: mov dword ptr [rdi + 0x37c], r12d */
L_1803dac33_0:;
L_1803dac33_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x37c))));
L_1803dac33_2:;
wr(s->u,13,4,rd(s->r,160,4));
L_1803dac33_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dac33_4:;
/* 1803dac3a: mov ebx, ecx */
L_1803dac3a_0:;
L_1803dac3a_1:;
wr(s->r,24,4,rd(s->r,8,4));
L_1803dac3a_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dac3a_3:;
/* 1803dac3c: sar ebx, 1 */
L_1803dac3c_0:;
L_1803dac3c_1:;
wr(s->u,59,4,(rd(s->r,24,4)&((U)UINT64_C(0x1))));
L_1803dac3c_2:;
wr(s->r,512,1,(rd(s->u,59,4)!=((U)UINT64_C(0x0))));
L_1803dac3c_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dac3c_4:;
wr(s->r,24,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,24,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,24,4),4)>>((U)UINT64_C(0x1)))));
L_1803dac3c_5:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dac3c_6:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dac3c_7:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803dac3c_8:;
wr(s->u,21,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803dac3c_9:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803dac3c_10:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803dac3c_11:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803dac3c_12:;
/* 1803dac3e: mov dword ptr [rdi + 0x384], ebx */
L_1803dac3e_0:;
L_1803dac3e_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x384))));
L_1803dac3e_2:;
wr(s->u,13,4,rd(s->r,24,4));
L_1803dac3e_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dac3e_4:;
/* 1803dac44: mov dword ptr [rdi + 0x34c], r12d */
L_1803dac44_0:;
L_1803dac44_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x34c))));
L_1803dac44_2:;
wr(s->u,13,4,rd(s->r,160,4));
L_1803dac44_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dac44_4:;
/* 1803dac4b: movd xmm0, ecx */
L_1803dac4b_0:;
L_1803dac4b_1:;
wr(s->r,4608,16,rd(s->r,8,4));
L_1803dac4b_2:;
/* 1803dac4f: cvtdq2ps xmm0, xmm0 */
L_1803dac4f_0:;
L_1803dac4f_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dac4f_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dac4f_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dac4f_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dac4f_5:;
/* 1803dac52: addss xmm0, dword ptr [rip + 0x271fea] */
L_1803dac52_0:;
L_1803dac52_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(mr(UINT64_C(0x18064cc44),4),4),4));
L_1803dac52_2:;
/* 1803dac5a: call 0x180609c04 */
L_1803dac5a_0:;
L_1803dac5a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dac5a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dac5f)));
L_1803dac5a_3:;
return (uint64_t)UINT64_C(0x180609c04);
L_1803dac5a_4:;
return UINT64_C(0x1803dac5f);
}
uint64_t b_1803dac05(CPU*s){
/* 1803dac05: mov ecx, dword ptr [rcx + 0x368] */
L_1803dac05_0:;
L_1803dac05_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x368))));
L_1803dac05_2:;
wr(s->u,17,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dac05_3:;
wr(s->r,8,4,rd(s->u,17,4));
L_1803dac05_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dac05_5:;
/* 1803dac0b: mov eax, ecx */
L_1803dac0b_0:;
L_1803dac0b_1:;
wr(s->r,0,4,rd(s->r,8,4));
L_1803dac0b_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dac0b_3:;
/* 1803dac0d: shl eax, 4 */
L_1803dac0d_0:;
L_1803dac0d_1:;
wr(s->u,63,4,(((U)UINT64_C(0x4))&((U)UINT64_C(0x1f))));
L_1803dac0d_2:;
wr(s->u,67,4,rd(s->r,0,4));
L_1803dac0d_3:;
wr(s->r,0,4,((rd(s->u,63,4)>=32)?0:(rd(s->r,0,4)<<rd(s->u,63,4))));
L_1803dac0d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dac0d_5:;
wr(s->u,46,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803dac0d_6:;
wr(s->u,47,4,(rd(s->u,63,4)-((U)UINT64_C(0x1))));
L_1803dac0d_7:;
wr(s->u,51,4,((rd(s->u,47,4)>=32)?0:(rd(s->u,67,4)<<rd(s->u,47,4))));
L_1803dac0d_8:;
wr(s->u,55,1,(sx(rd(s->u,51,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dac0d_9:;
wr(s->u,0,1,rd(s->u,46,1));
L_1803dac0d_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dac0d_11:;
wr(s->u,2,1,(!rd(s->u,46,1)));
L_1803dac0d_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dac0d_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,55,1)));
L_1803dac0d_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dac0d_15:;
wr(s->u,56,1,(rd(s->u,63,4)==((U)UINT64_C(0x1))));
L_1803dac0d_16:;
wr(s->u,57,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dac0d_17:;
wr(s->u,58,1,(rd(s->r,512,1)^rd(s->u,57,1)));
L_1803dac0d_18:;
wr(s->u,0,1,rd(s->u,56,1));
L_1803dac0d_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,58,1)));
L_1803dac0d_20:;
wr(s->u,2,1,(!rd(s->u,56,1)));
L_1803dac0d_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dac0d_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dac0d_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dac0d_24:;
wr(s->u,27,1,(rd(s->u,63,4)!=((U)UINT64_C(0x0))));
L_1803dac0d_25:;
wr(s->u,28,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dac0d_26:;
wr(s->u,29,1,(!rd(s->u,27,1)));
L_1803dac0d_27:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,519,1)));
L_1803dac0d_28:;
wr(s->u,31,1,(rd(s->u,27,1)&rd(s->u,28,1)));
L_1803dac0d_29:;
wr(s->r,519,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803dac0d_30:;
wr(s->u,32,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dac0d_31:;
wr(s->u,33,1,(!rd(s->u,27,1)));
L_1803dac0d_32:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,518,1)));
L_1803dac0d_33:;
wr(s->u,35,1,(rd(s->u,27,1)&rd(s->u,32,1)));
L_1803dac0d_34:;
wr(s->r,518,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803dac0d_35:;
wr(s->u,36,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dac0d_36:;
wr(s->u,40,1,pop(rd(s->u,36,4),4));
L_1803dac0d_37:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803dac0d_38:;
wr(s->u,42,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803dac0d_39:;
wr(s->u,43,1,(!rd(s->u,27,1)));
L_1803dac0d_40:;
wr(s->u,44,1,(rd(s->u,43,1)&rd(s->r,514,1)));
L_1803dac0d_41:;
wr(s->u,45,1,(rd(s->u,27,1)&rd(s->u,42,1)));
L_1803dac0d_42:;
wr(s->r,514,1,(rd(s->u,44,1)|rd(s->u,45,1)));
L_1803dac0d_43:;
/* 1803dac10: mov dword ptr [rdi + 0x33c], eax */
L_1803dac10_0:;
L_1803dac10_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x33c))));
L_1803dac10_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803dac10_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dac10_4:;
/* 1803dac16: mov dword ptr [rdi + 0x340], eax */
L_1803dac16_0:;
L_1803dac16_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x340))));
L_1803dac16_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803dac16_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dac16_4:;
/* 1803dac1c: mov dword ptr [rdi + 0x344], edx */
L_1803dac1c_0:;
L_1803dac1c_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x344))));
L_1803dac1c_2:;
wr(s->u,13,4,rd(s->r,16,4));
L_1803dac1c_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dac1c_4:;
/* 1803dac22: mov dword ptr [rdi + 0x310], 0x3f800000 */
L_1803dac22_0:;
L_1803dac22_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x310))));
L_1803dac22_2:;
wr(s->u,13,4,((U)UINT64_C(0x3f800000)));
L_1803dac22_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dac22_4:;
/* 1803dac2c: mov dword ptr [rdi + 0x378], r12d */
L_1803dac2c_0:;
L_1803dac2c_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x378))));
L_1803dac2c_2:;
wr(s->u,13,4,rd(s->r,160,4));
L_1803dac2c_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dac2c_4:;
/* 1803dac33: mov dword ptr [rdi + 0x37c], r12d */
L_1803dac33_0:;
L_1803dac33_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x37c))));
L_1803dac33_2:;
wr(s->u,13,4,rd(s->r,160,4));
L_1803dac33_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dac33_4:;
/* 1803dac3a: mov ebx, ecx */
L_1803dac3a_0:;
L_1803dac3a_1:;
wr(s->r,24,4,rd(s->r,8,4));
L_1803dac3a_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dac3a_3:;
/* 1803dac3c: sar ebx, 1 */
L_1803dac3c_0:;
L_1803dac3c_1:;
wr(s->u,59,4,(rd(s->r,24,4)&((U)UINT64_C(0x1))));
L_1803dac3c_2:;
wr(s->r,512,1,(rd(s->u,59,4)!=((U)UINT64_C(0x0))));
L_1803dac3c_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dac3c_4:;
wr(s->r,24,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,24,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,24,4),4)>>((U)UINT64_C(0x1)))));
L_1803dac3c_5:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dac3c_6:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dac3c_7:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803dac3c_8:;
wr(s->u,21,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803dac3c_9:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803dac3c_10:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803dac3c_11:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803dac3c_12:;
/* 1803dac3e: mov dword ptr [rdi + 0x384], ebx */
L_1803dac3e_0:;
L_1803dac3e_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x384))));
L_1803dac3e_2:;
wr(s->u,13,4,rd(s->r,24,4));
L_1803dac3e_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dac3e_4:;
/* 1803dac44: mov dword ptr [rdi + 0x34c], r12d */
L_1803dac44_0:;
L_1803dac44_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x34c))));
L_1803dac44_2:;
wr(s->u,13,4,rd(s->r,160,4));
L_1803dac44_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dac44_4:;
/* 1803dac4b: movd xmm0, ecx */
L_1803dac4b_0:;
L_1803dac4b_1:;
wr(s->r,4608,16,rd(s->r,8,4));
L_1803dac4b_2:;
/* 1803dac4f: cvtdq2ps xmm0, xmm0 */
L_1803dac4f_0:;
L_1803dac4f_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dac4f_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dac4f_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dac4f_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dac4f_5:;
/* 1803dac52: addss xmm0, dword ptr [rip + 0x271fea] */
L_1803dac52_0:;
L_1803dac52_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(mr(UINT64_C(0x18064cc44),4),4),4));
L_1803dac52_2:;
/* 1803dac5a: call 0x180609c04 */
L_1803dac5a_0:;
L_1803dac5a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dac5a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dac5f)));
L_1803dac5a_3:;
return (uint64_t)UINT64_C(0x180609c04);
L_1803dac5a_4:;
return UINT64_C(0x1803dac5f);
}
uint64_t b_1803dac5f(CPU*s){
/* 1803dac5f: movaps xmm1, xmm0 */
L_1803dac5f_0:;
L_1803dac5f_1:;
wr(s->r,4672,4,rd(s->r,4608,4));
L_1803dac5f_2:;
wr(s->r,4676,4,rd(s->r,4612,4));
L_1803dac5f_3:;
wr(s->r,4680,4,rd(s->r,4616,4));
L_1803dac5f_4:;
wr(s->r,4684,4,rd(s->r,4620,4));
L_1803dac5f_5:;
/* 1803dac62: mulss xmm1, dword ptr [rip + 0x4318b6] */
L_1803dac62_0:;
L_1803dac62_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(mr(UINT64_C(0x18080c520),4),4),4));
L_1803dac62_2:;
/* 1803dac6a: cvttss2si ecx, xmm1 */
L_1803dac6a_0:;
L_1803dac6a_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dac6a_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dac6a_3:;
/* 1803dac6e: cmp ecx, 0x80000000 */
L_1803dac6e_0:;
L_1803dac6e_1:;
wr(s->u,6,4,rd(s->r,8,4));
L_1803dac6e_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x80000000))));
L_1803dac6e_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x80000000)),4,1));
L_1803dac6e_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x80000000))));
L_1803dac6e_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dac6e_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803dac6e_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803dac6e_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803dac6e_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803dac6e_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803dac6e_11:;
/* 1803dac74: je 0x1803dac96 */
L_1803dac74_0:;
L_1803dac74_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dac96);}
L_1803dac74_2:;
return UINT64_C(0x1803dac76);
}
uint64_t b_1803dac76(CPU*s){
/* 1803dac76: pxor xmm0, xmm0 */
L_1803dac76_0:;
L_1803dac76_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803dac76_2:;
/* 1803dac7a: cvtsi2ss xmm0, ecx */
L_1803dac7a_0:;
L_1803dac7a_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803dac7a_2:;
/* 1803dac7e: ucomiss xmm0, xmm1 */
L_1803dac7e_0:;
L_1803dac7e_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dac7e_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803dac7e_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803dac7e_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803dac7e_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803dac7e_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803dac7e_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dac7e_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dac7e_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dac7e_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dac7e_11:;
/* 1803dac81: je 0x1803dac96 */
L_1803dac81_0:;
L_1803dac81_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dac96);}
L_1803dac81_2:;
return UINT64_C(0x1803dac83);
}
uint64_t b_1803dac83(CPU*s){
/* 1803dac83: unpcklps xmm1, xmm1 */
L_1803dac83_0:;
L_1803dac83_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803dac83_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803dac83_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803dac83_4:;
/* 1803dac86: movmskps eax, xmm1 */
L_1803dac86_0:;
L_1803dac86_1:;
wr(s->r,0,4,(((rd(s->r,4672,16)>>31)&1)<<0)|(((rd(s->r,4672,16)>>63)&1)<<1)|(((rd(s->r,4672,16)>>95)&1)<<2)|(((rd(s->r,4672,16)>>127)&1)<<3));
L_1803dac86_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dac86_3:;
/* 1803dac89: and eax, 1 */
L_1803dac89_0:;
L_1803dac89_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dac89_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dac89_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dac89_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dac89_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dac89_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dac89_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dac89_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803dac89_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803dac89_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803dac89_11:;
/* 1803dac8c: sub ecx, eax */
L_1803dac8c_0:;
L_1803dac8c_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,0,4)));
L_1803dac8c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,1));
L_1803dac8c_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,0,4)));
L_1803dac8c_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dac8c_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dac8c_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dac8c_7:;
wr(s->u,0,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dac8c_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803dac8c_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803dac8c_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803dac8c_11:;
/* 1803dac8e: pxor xmm1, xmm1 */
L_1803dac8e_0:;
L_1803dac8e_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803dac8e_2:;
/* 1803dac92: cvtsi2ss xmm1, ecx */
L_1803dac92_0:;
L_1803dac92_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803dac92_2:;
/* 1803dac96: movss xmm0, dword ptr [rip + 0x27a552] */
L_1803dac96_0:;
L_1803dac96_1:;
wr(s->r,4608,4,mr(UINT64_C(0x1806551f0),4));
L_1803dac96_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dac96_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dac96_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dac96_5:;
/* 1803dac9e: call 0x180609a00 */
L_1803dac9e_0:;
L_1803dac9e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dac9e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803daca3)));
L_1803dac9e_3:;
return (uint64_t)UINT64_C(0x180609a00);
L_1803dac9e_4:;
return UINT64_C(0x1803daca3);
}
uint64_t b_1803dac96(CPU*s){
/* 1803dac96: movss xmm0, dword ptr [rip + 0x27a552] */
L_1803dac96_0:;
L_1803dac96_1:;
wr(s->r,4608,4,mr(UINT64_C(0x1806551f0),4));
L_1803dac96_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dac96_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dac96_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dac96_5:;
/* 1803dac9e: call 0x180609a00 */
L_1803dac9e_0:;
L_1803dac9e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dac9e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803daca3)));
L_1803dac9e_3:;
return (uint64_t)UINT64_C(0x180609a00);
L_1803dac9e_4:;
return UINT64_C(0x1803daca3);
}
uint64_t b_1803daca3(CPU*s){
/* 1803daca3: cvttss2si edx, xmm0 */
L_1803daca3_0:;
L_1803daca3_1:;
wr(s->r,16,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803daca3_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803daca3_3:;
/* 1803daca7: mov dword ptr [rdi + 0x360], edx */
L_1803daca7_0:;
L_1803daca7_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x360))));
L_1803daca7_2:;
wr(s->u,8,4,rd(s->r,16,4));
L_1803daca7_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803daca7_4:;
/* 1803dacad: cmp dword ptr [rdi + 0x394], r12d */
L_1803dacad_0:;
L_1803dacad_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x394))));
L_1803dacad_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dacad_3:;
wr(s->u,22,4,rd(s->u,12,4));
L_1803dacad_4:;
wr(s->r,512,1,(rd(s->u,22,4)<rd(s->r,160,4)));
L_1803dacad_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,22,4),rd(s->r,160,4),4,1));
L_1803dacad_6:;
wr(s->u,26,4,(rd(s->u,22,4)-rd(s->r,160,4)));
L_1803dacad_7:;
wr(s->r,519,1,(sx(rd(s->u,26,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dacad_8:;
wr(s->r,518,1,(rd(s->u,26,4)==((U)UINT64_C(0x0))));
L_1803dacad_9:;
wr(s->u,16,4,(rd(s->u,26,4)&((U)UINT64_C(0xff))));
L_1803dacad_10:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dacad_11:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dacad_12:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dacad_13:;
/* 1803dacb4: je 0x1803dacc3 */
L_1803dacb4_0:;
L_1803dacb4_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dacc3);}
L_1803dacb4_2:;
return UINT64_C(0x1803dacb6);
}
uint64_t b_1803dacb6(CPU*s){
/* 1803dacb6: mov eax, edx */
L_1803dacb6_0:;
L_1803dacb6_1:;
wr(s->r,0,4,rd(s->r,16,4));
L_1803dacb6_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dacb6_3:;
/* 1803dacb8: sar eax, 3 */
L_1803dacb8_0:;
L_1803dacb8_1:;
wr(s->u,51,4,(((U)UINT64_C(0x3))&((U)UINT64_C(0x1f))));
L_1803dacb8_2:;
wr(s->u,55,4,rd(s->r,0,4));
L_1803dacb8_3:;
wr(s->r,0,4,((rd(s->u,51,4)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,51,4))));
L_1803dacb8_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dacb8_5:;
wr(s->u,36,1,(rd(s->u,51,4)==((U)UINT64_C(0x0))));
L_1803dacb8_6:;
wr(s->u,37,4,(rd(s->u,51,4)-((U)UINT64_C(0x1))));
L_1803dacb8_7:;
wr(s->u,41,4,((rd(s->u,37,4)>=32)?(sx(rd(s->u,55,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,55,4),4)>>rd(s->u,37,4))));
L_1803dacb8_8:;
wr(s->u,45,4,(rd(s->u,41,4)&((U)UINT64_C(0x1))));
L_1803dacb8_9:;
wr(s->u,49,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803dacb8_10:;
wr(s->u,0,1,rd(s->u,36,1));
L_1803dacb8_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dacb8_12:;
wr(s->u,2,1,(!rd(s->u,36,1)));
L_1803dacb8_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dacb8_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,49,1)));
L_1803dacb8_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dacb8_16:;
wr(s->u,50,1,(rd(s->u,51,4)==((U)UINT64_C(0x1))));
L_1803dacb8_17:;
wr(s->u,0,1,rd(s->u,50,1));
L_1803dacb8_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803dacb8_19:;
wr(s->u,2,1,(!rd(s->u,50,1)));
L_1803dacb8_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dacb8_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dacb8_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dacb8_23:;
wr(s->u,17,1,(rd(s->u,51,4)!=((U)UINT64_C(0x0))));
L_1803dacb8_24:;
wr(s->u,18,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dacb8_25:;
wr(s->u,19,1,(!rd(s->u,17,1)));
L_1803dacb8_26:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,519,1)));
L_1803dacb8_27:;
wr(s->u,21,1,(rd(s->u,17,1)&rd(s->u,18,1)));
L_1803dacb8_28:;
wr(s->r,519,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803dacb8_29:;
wr(s->u,22,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dacb8_30:;
wr(s->u,23,1,(!rd(s->u,17,1)));
L_1803dacb8_31:;
wr(s->u,24,1,(rd(s->u,23,1)&rd(s->r,518,1)));
L_1803dacb8_32:;
wr(s->u,25,1,(rd(s->u,17,1)&rd(s->u,22,1)));
L_1803dacb8_33:;
wr(s->r,518,1,(rd(s->u,24,1)|rd(s->u,25,1)));
L_1803dacb8_34:;
wr(s->u,26,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dacb8_35:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803dacb8_36:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803dacb8_37:;
wr(s->u,32,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803dacb8_38:;
wr(s->u,33,1,(!rd(s->u,17,1)));
L_1803dacb8_39:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,514,1)));
L_1803dacb8_40:;
wr(s->u,35,1,(rd(s->u,17,1)&rd(s->u,32,1)));
L_1803dacb8_41:;
wr(s->r,514,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803dacb8_42:;
/* 1803dacbb: mov dword ptr [rdi + 0x358], eax */
L_1803dacbb_0:;
L_1803dacbb_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x358))));
L_1803dacbb_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803dacbb_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dacbb_4:;
/* 1803dacc1: jmp 0x1803dacce */
L_1803dacc1_0:;
L_1803dacc1_1:;
return UINT64_C(0x1803dacce);
L_1803dacc1_2:;
return UINT64_C(0x1803dacc3);
}
uint64_t b_1803dacc3(CPU*s){
/* 1803dacc3: mov eax, edx */
L_1803dacc3_0:;
L_1803dacc3_1:;
wr(s->r,0,4,rd(s->r,16,4));
L_1803dacc3_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dacc3_3:;
/* 1803dacc5: sar eax, 2 */
L_1803dacc5_0:;
L_1803dacc5_1:;
wr(s->u,169,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803dacc5_2:;
wr(s->u,173,4,rd(s->r,0,4));
L_1803dacc5_3:;
wr(s->r,0,4,((rd(s->u,169,4)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,169,4))));
L_1803dacc5_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dacc5_5:;
wr(s->u,62,1,(rd(s->u,169,4)==((U)UINT64_C(0x0))));
L_1803dacc5_6:;
wr(s->u,63,4,(rd(s->u,169,4)-((U)UINT64_C(0x1))));
L_1803dacc5_7:;
wr(s->u,67,4,((rd(s->u,63,4)>=32)?(sx(rd(s->u,173,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,173,4),4)>>rd(s->u,63,4))));
L_1803dacc5_8:;
wr(s->u,71,4,(rd(s->u,67,4)&((U)UINT64_C(0x1))));
L_1803dacc5_9:;
wr(s->u,75,1,(rd(s->u,71,4)!=((U)UINT64_C(0x0))));
L_1803dacc5_10:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803dacc5_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dacc5_12:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803dacc5_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dacc5_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,75,1)));
L_1803dacc5_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dacc5_16:;
wr(s->u,76,1,(rd(s->u,169,4)==((U)UINT64_C(0x1))));
L_1803dacc5_17:;
wr(s->u,0,1,rd(s->u,76,1));
L_1803dacc5_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803dacc5_19:;
wr(s->u,2,1,(!rd(s->u,76,1)));
L_1803dacc5_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dacc5_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dacc5_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dacc5_23:;
wr(s->u,35,1,(rd(s->u,169,4)!=((U)UINT64_C(0x0))));
L_1803dacc5_24:;
wr(s->u,36,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dacc5_25:;
wr(s->u,37,1,(!rd(s->u,35,1)));
L_1803dacc5_26:;
wr(s->u,38,1,(rd(s->u,37,1)&rd(s->r,519,1)));
L_1803dacc5_27:;
wr(s->u,39,1,(rd(s->u,35,1)&rd(s->u,36,1)));
L_1803dacc5_28:;
wr(s->r,519,1,(rd(s->u,38,1)|rd(s->u,39,1)));
L_1803dacc5_29:;
wr(s->u,40,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dacc5_30:;
wr(s->u,41,1,(!rd(s->u,35,1)));
L_1803dacc5_31:;
wr(s->u,42,1,(rd(s->u,41,1)&rd(s->r,518,1)));
L_1803dacc5_32:;
wr(s->u,43,1,(rd(s->u,35,1)&rd(s->u,40,1)));
L_1803dacc5_33:;
wr(s->r,518,1,(rd(s->u,42,1)|rd(s->u,43,1)));
L_1803dacc5_34:;
wr(s->u,44,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dacc5_35:;
wr(s->u,48,1,pop(rd(s->u,44,4),4));
L_1803dacc5_36:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dacc5_37:;
wr(s->u,50,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dacc5_38:;
wr(s->u,51,1,(!rd(s->u,35,1)));
L_1803dacc5_39:;
wr(s->u,52,1,(rd(s->u,51,1)&rd(s->r,514,1)));
L_1803dacc5_40:;
wr(s->u,53,1,(rd(s->u,35,1)&rd(s->u,50,1)));
L_1803dacc5_41:;
wr(s->r,514,1,(rd(s->u,52,1)|rd(s->u,53,1)));
L_1803dacc5_42:;
/* 1803dacc8: mov dword ptr [rdi + 0x358], eax */
L_1803dacc8_0:;
L_1803dacc8_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x358))));
L_1803dacc8_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803dacc8_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dacc8_4:;
/* 1803dacce: mov ecx, dword ptr [rdi + 0x358] */
L_1803dacce_0:;
L_1803dacce_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x358))));
L_1803dacce_2:;
wr(s->u,25,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dacce_3:;
wr(s->r,8,4,rd(s->u,25,4));
L_1803dacce_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dacce_5:;
/* 1803dacd4: movd xmm1, ecx */
L_1803dacd4_0:;
L_1803dacd4_1:;
wr(s->r,4672,16,rd(s->r,8,4));
L_1803dacd4_2:;
/* 1803dacd8: cvtdq2ps xmm1, xmm1 */
L_1803dacd8_0:;
L_1803dacd8_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803dacd8_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803dacd8_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803dacd8_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803dacd8_5:;
/* 1803dacdb: cvttss2si r8d, xmm1 */
L_1803dacdb_0:;
L_1803dacdb_1:;
wr(s->r,128,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dacdb_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dacdb_3:;
/* 1803dace0: and r8d, 0xfffffffe */
L_1803dace0_0:;
L_1803dace0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dace0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dace0_3:;
wr(s->r,128,4,(rd(s->r,128,4)&((U)UINT64_C(0xfffffffe))));
L_1803dace0_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dace0_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dace0_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803dace0_7:;
wr(s->u,29,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803dace0_8:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803dace0_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803dace0_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803dace0_11:;
/* 1803dace4: mov dword ptr [rdi + 0x35c], r8d */
L_1803dace4_0:;
L_1803dace4_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x35c))));
L_1803dace4_2:;
wr(s->u,13,4,rd(s->r,128,4));
L_1803dace4_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dace4_4:;
/* 1803daceb: movd xmm0, r8d */
L_1803daceb_0:;
L_1803daceb_1:;
wr(s->r,4608,16,rd(s->r,128,4));
L_1803daceb_2:;
/* 1803dacf0: cvtdq2ps xmm0, xmm0 */
L_1803dacf0_0:;
L_1803dacf0_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dacf0_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dacf0_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dacf0_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dacf0_5:;
/* 1803dacf3: divss xmm0, xmm1 */
L_1803dacf3_0:;
L_1803dacf3_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803dacf3_2:;
/* 1803dacf7: movss dword ptr [rdi + 0x310], xmm0 */
L_1803dacf7_0:;
L_1803dacf7_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x310))));
L_1803dacf7_2:;
wr(s->u,13,4,rd(s->r,4608,4));
L_1803dacf7_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dacf7_4:;
/* 1803dacff: mov dword ptr [rdi + 0x318], 0x3f800000 */
L_1803dacff_0:;
L_1803dacff_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x318))));
L_1803dacff_2:;
wr(s->u,13,4,((U)UINT64_C(0x3f800000)));
L_1803dacff_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dacff_4:;
/* 1803dad09: mov dword ptr [rdi + 0x320], 0x3f800000 */
L_1803dad09_0:;
L_1803dad09_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x320))));
L_1803dad09_2:;
wr(s->u,13,4,((U)UINT64_C(0x3f800000)));
L_1803dad09_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dad09_4:;
/* 1803dad13: movabs rax, 0x3ff0000000000000 */
L_1803dad13_0:;
L_1803dad13_1:;
wr(s->r,0,8,((U)UINT64_C(0x3ff0000000000000)));
L_1803dad13_2:;
/* 1803dad1d: mov qword ptr [rdi + 0x328], rax */
L_1803dad1d_0:;
L_1803dad1d_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x328))));
L_1803dad1d_2:;
wr(s->u,17,8,rd(s->r,0,8));
L_1803dad1d_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,17,8));
L_1803dad1d_4:;
/* 1803dad24: mov qword ptr [rdi + 0x330], rax */
L_1803dad24_0:;
L_1803dad24_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x330))));
L_1803dad24_2:;
wr(s->u,17,8,rd(s->r,0,8));
L_1803dad24_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,17,8));
L_1803dad24_4:;
/* 1803dad2b: mov dword ptr [rdi + 0x390], 1 */
L_1803dad2b_0:;
L_1803dad2b_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x390))));
L_1803dad2b_2:;
wr(s->u,13,4,((U)UINT64_C(0x1)));
L_1803dad2b_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dad2b_4:;
/* 1803dad35: mov eax, r8d */
L_1803dad35_0:;
L_1803dad35_1:;
wr(s->r,0,4,rd(s->r,128,4));
L_1803dad35_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad35_3:;
/* 1803dad38: imul eax, edx */
L_1803dad38_0:;
L_1803dad38_1:;
wr(s->u,141,8,(U)sx(rd(s->r,0,4),4));
L_1803dad38_2:;
wr(s->u,149,8,(U)sx(rd(s->r,16,4),4));
L_1803dad38_3:;
wr(s->u,157,8,(rd(s->u,141,8)*rd(s->u,149,8)));
L_1803dad38_4:;
wr(s->r,0,4,(rd(s->u,157,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dad38_5:;
wr(s->u,165,4,(rd(s->u,157,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dad38_6:;
wr(s->u,54,8,(U)sx(rd(s->r,0,4),4));
L_1803dad38_7:;
wr(s->r,512,1,(rd(s->u,54,8)!=rd(s->u,157,8)));
L_1803dad38_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803dad38_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad38_10:;
/* 1803dad3b: cdq  */
L_1803dad3b_0:;
L_1803dad3b_1:;
wr(s->u,77,8,(U)sx(rd(s->r,0,4),4));
L_1803dad3b_2:;
wr(s->r,16,4,(rd(s->u,77,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dad3b_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dad3b_4:;
/* 1803dad3c: idiv ecx */
L_1803dad3c_0:;
L_1803dad3c_1:;
wr(s->u,85,8,(U)sx(rd(s->r,8,4),4));
L_1803dad3c_2:;
wr(s->u,93,8,rd(s->r,16,4));
L_1803dad3c_3:;
wr(s->u,101,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,93,8)<<((U)UINT64_C(0x20)))));
L_1803dad3c_4:;
wr(s->u,109,8,rd(s->r,0,4));
L_1803dad3c_5:;
wr(s->u,117,8,(rd(s->u,101,8)|rd(s->u,109,8)));
L_1803dad3c_6:;
wr(s->u,125,8,((U)(sx(rd(s->u,117,8),8)/sx(rd(s->u,85,8),8))));
L_1803dad3c_7:;
wr(s->r,0,4,(rd(s->u,125,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dad3c_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad3c_9:;
wr(s->u,133,8,((U)(sx(rd(s->u,117,8),8)%sx(rd(s->u,85,8),8))));
L_1803dad3c_10:;
wr(s->r,16,4,(rd(s->u,133,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dad3c_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dad3c_12:;
/* 1803dad3e: mov dword ptr [rdi + 0x364], eax */
L_1803dad3e_0:;
L_1803dad3e_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x364))));
L_1803dad3e_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803dad3e_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dad3e_4:;
/* 1803dad44: mov eax, ebx */
L_1803dad44_0:;
L_1803dad44_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803dad44_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad44_3:;
/* 1803dad46: cdq  */
L_1803dad46_0:;
L_1803dad46_1:;
wr(s->u,77,8,(U)sx(rd(s->r,0,4),4));
L_1803dad46_2:;
wr(s->r,16,4,(rd(s->u,77,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dad46_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dad46_4:;
/* 1803dad47: idiv ecx */
L_1803dad47_0:;
L_1803dad47_1:;
wr(s->u,85,8,(U)sx(rd(s->r,8,4),4));
L_1803dad47_2:;
wr(s->u,93,8,rd(s->r,16,4));
L_1803dad47_3:;
wr(s->u,101,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,93,8)<<((U)UINT64_C(0x20)))));
L_1803dad47_4:;
wr(s->u,109,8,rd(s->r,0,4));
L_1803dad47_5:;
wr(s->u,117,8,(rd(s->u,101,8)|rd(s->u,109,8)));
L_1803dad47_6:;
wr(s->u,125,8,((U)(sx(rd(s->u,117,8),8)/sx(rd(s->u,85,8),8))));
L_1803dad47_7:;
wr(s->r,0,4,(rd(s->u,125,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dad47_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad47_9:;
wr(s->u,133,8,((U)(sx(rd(s->u,117,8),8)%sx(rd(s->u,85,8),8))));
L_1803dad47_10:;
wr(s->r,16,4,(rd(s->u,133,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dad47_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dad47_12:;
/* 1803dad49: dec eax */
L_1803dad49_0:;
L_1803dad49_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,1));
L_1803dad49_2:;
wr(s->r,0,4,(rd(s->r,0,4)-((U)UINT64_C(0x1))));
L_1803dad49_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad49_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dad49_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dad49_6:;
wr(s->u,29,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dad49_7:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803dad49_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803dad49_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803dad49_10:;
/* 1803dad4b: imul eax, r8d */
L_1803dad4b_0:;
L_1803dad4b_1:;
wr(s->u,141,8,(U)sx(rd(s->r,0,4),4));
L_1803dad4b_2:;
wr(s->u,149,8,(U)sx(rd(s->r,128,4),4));
L_1803dad4b_3:;
wr(s->u,157,8,(rd(s->u,141,8)*rd(s->u,149,8)));
L_1803dad4b_4:;
wr(s->r,0,4,(rd(s->u,157,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dad4b_5:;
wr(s->u,165,4,(rd(s->u,157,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dad4b_6:;
wr(s->u,54,8,(U)sx(rd(s->r,0,4),4));
L_1803dad4b_7:;
wr(s->r,512,1,(rd(s->u,54,8)!=rd(s->u,157,8)));
L_1803dad4b_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803dad4b_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad4b_10:;
/* 1803dad4f: add eax, ebx */
L_1803dad4f_0:;
L_1803dad4f_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,24,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803dad4f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,24,4),4,0));
L_1803dad4f_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,24,4)));
L_1803dad4f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad4f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dad4f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dad4f_7:;
wr(s->u,29,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dad4f_8:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803dad4f_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803dad4f_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803dad4f_11:;
/* 1803dad51: neg eax */
L_1803dad51_0:;
L_1803dad51_1:;
wr(s->r,512,1,(rd(s->r,0,4)!=((U)UINT64_C(0x0))));
L_1803dad51_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,0,4),4,1));
L_1803dad51_3:;
wr(s->r,0,4,(-rd(s->r,0,4)));
L_1803dad51_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dad51_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dad51_6:;
wr(s->u,29,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dad51_7:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803dad51_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803dad51_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803dad51_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad51_11:;
/* 1803dad53: mov dword ptr [rdi + 0x350], eax */
L_1803dad53_0:;
L_1803dad53_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x350))));
L_1803dad53_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803dad53_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803dad53_4:;
return UINT64_C(0x1803dad59);
}
uint64_t b_1803dacce(CPU*s){
/* 1803dacce: mov ecx, dword ptr [rdi + 0x358] */
L_1803dacce_0:;
L_1803dacce_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x358))));
L_1803dacce_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dacce_3:;
wr(s->r,8,4,rd(s->u,20,4));
L_1803dacce_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dacce_5:;
/* 1803dacd4: movd xmm1, ecx */
L_1803dacd4_0:;
L_1803dacd4_1:;
wr(s->r,4672,16,rd(s->r,8,4));
L_1803dacd4_2:;
/* 1803dacd8: cvtdq2ps xmm1, xmm1 */
L_1803dacd8_0:;
L_1803dacd8_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803dacd8_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803dacd8_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803dacd8_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803dacd8_5:;
/* 1803dacdb: cvttss2si r8d, xmm1 */
L_1803dacdb_0:;
L_1803dacdb_1:;
wr(s->r,128,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dacdb_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dacdb_3:;
/* 1803dace0: and r8d, 0xfffffffe */
L_1803dace0_0:;
L_1803dace0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dace0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dace0_3:;
wr(s->r,128,4,(rd(s->r,128,4)&((U)UINT64_C(0xfffffffe))));
L_1803dace0_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dace0_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dace0_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803dace0_7:;
wr(s->u,24,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803dace0_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803dace0_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803dace0_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803dace0_11:;
/* 1803dace4: mov dword ptr [rdi + 0x35c], r8d */
L_1803dace4_0:;
L_1803dace4_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x35c))));
L_1803dace4_2:;
wr(s->u,8,4,rd(s->r,128,4));
L_1803dace4_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dace4_4:;
/* 1803daceb: movd xmm0, r8d */
L_1803daceb_0:;
L_1803daceb_1:;
wr(s->r,4608,16,rd(s->r,128,4));
L_1803daceb_2:;
/* 1803dacf0: cvtdq2ps xmm0, xmm0 */
L_1803dacf0_0:;
L_1803dacf0_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dacf0_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dacf0_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dacf0_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dacf0_5:;
/* 1803dacf3: divss xmm0, xmm1 */
L_1803dacf3_0:;
L_1803dacf3_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803dacf3_2:;
/* 1803dacf7: movss dword ptr [rdi + 0x310], xmm0 */
L_1803dacf7_0:;
L_1803dacf7_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x310))));
L_1803dacf7_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803dacf7_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dacf7_4:;
/* 1803dacff: mov dword ptr [rdi + 0x318], 0x3f800000 */
L_1803dacff_0:;
L_1803dacff_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x318))));
L_1803dacff_2:;
wr(s->u,8,4,((U)UINT64_C(0x3f800000)));
L_1803dacff_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dacff_4:;
/* 1803dad09: mov dword ptr [rdi + 0x320], 0x3f800000 */
L_1803dad09_0:;
L_1803dad09_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x320))));
L_1803dad09_2:;
wr(s->u,8,4,((U)UINT64_C(0x3f800000)));
L_1803dad09_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dad09_4:;
/* 1803dad13: movabs rax, 0x3ff0000000000000 */
L_1803dad13_0:;
L_1803dad13_1:;
wr(s->r,0,8,((U)UINT64_C(0x3ff0000000000000)));
L_1803dad13_2:;
/* 1803dad1d: mov qword ptr [rdi + 0x328], rax */
L_1803dad1d_0:;
L_1803dad1d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x328))));
L_1803dad1d_2:;
wr(s->u,12,8,rd(s->r,0,8));
L_1803dad1d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803dad1d_4:;
/* 1803dad24: mov qword ptr [rdi + 0x330], rax */
L_1803dad24_0:;
L_1803dad24_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x330))));
L_1803dad24_2:;
wr(s->u,12,8,rd(s->r,0,8));
L_1803dad24_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803dad24_4:;
/* 1803dad2b: mov dword ptr [rdi + 0x390], 1 */
L_1803dad2b_0:;
L_1803dad2b_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x390))));
L_1803dad2b_2:;
wr(s->u,8,4,((U)UINT64_C(0x1)));
L_1803dad2b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dad2b_4:;
/* 1803dad35: mov eax, r8d */
L_1803dad35_0:;
L_1803dad35_1:;
wr(s->r,0,4,rd(s->r,128,4));
L_1803dad35_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad35_3:;
/* 1803dad38: imul eax, edx */
L_1803dad38_0:;
L_1803dad38_1:;
wr(s->u,102,8,(U)sx(rd(s->r,0,4),4));
L_1803dad38_2:;
wr(s->u,110,8,(U)sx(rd(s->r,16,4),4));
L_1803dad38_3:;
wr(s->u,118,8,(rd(s->u,102,8)*rd(s->u,110,8)));
L_1803dad38_4:;
wr(s->r,0,4,(rd(s->u,118,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dad38_5:;
wr(s->u,126,4,(rd(s->u,118,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dad38_6:;
wr(s->u,30,8,(U)sx(rd(s->r,0,4),4));
L_1803dad38_7:;
wr(s->r,512,1,(rd(s->u,30,8)!=rd(s->u,118,8)));
L_1803dad38_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803dad38_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad38_10:;
/* 1803dad3b: cdq  */
L_1803dad3b_0:;
L_1803dad3b_1:;
wr(s->u,38,8,(U)sx(rd(s->r,0,4),4));
L_1803dad3b_2:;
wr(s->r,16,4,(rd(s->u,38,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dad3b_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dad3b_4:;
/* 1803dad3c: idiv ecx */
L_1803dad3c_0:;
L_1803dad3c_1:;
wr(s->u,46,8,(U)sx(rd(s->r,8,4),4));
L_1803dad3c_2:;
wr(s->u,54,8,rd(s->r,16,4));
L_1803dad3c_3:;
wr(s->u,62,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,54,8)<<((U)UINT64_C(0x20)))));
L_1803dad3c_4:;
wr(s->u,70,8,rd(s->r,0,4));
L_1803dad3c_5:;
wr(s->u,78,8,(rd(s->u,62,8)|rd(s->u,70,8)));
L_1803dad3c_6:;
wr(s->u,86,8,((U)(sx(rd(s->u,78,8),8)/sx(rd(s->u,46,8),8))));
L_1803dad3c_7:;
wr(s->r,0,4,(rd(s->u,86,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dad3c_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad3c_9:;
wr(s->u,94,8,((U)(sx(rd(s->u,78,8),8)%sx(rd(s->u,46,8),8))));
L_1803dad3c_10:;
wr(s->r,16,4,(rd(s->u,94,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dad3c_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dad3c_12:;
/* 1803dad3e: mov dword ptr [rdi + 0x364], eax */
L_1803dad3e_0:;
L_1803dad3e_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x364))));
L_1803dad3e_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803dad3e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dad3e_4:;
/* 1803dad44: mov eax, ebx */
L_1803dad44_0:;
L_1803dad44_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803dad44_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad44_3:;
/* 1803dad46: cdq  */
L_1803dad46_0:;
L_1803dad46_1:;
wr(s->u,38,8,(U)sx(rd(s->r,0,4),4));
L_1803dad46_2:;
wr(s->r,16,4,(rd(s->u,38,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dad46_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dad46_4:;
/* 1803dad47: idiv ecx */
L_1803dad47_0:;
L_1803dad47_1:;
wr(s->u,46,8,(U)sx(rd(s->r,8,4),4));
L_1803dad47_2:;
wr(s->u,54,8,rd(s->r,16,4));
L_1803dad47_3:;
wr(s->u,62,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,54,8)<<((U)UINT64_C(0x20)))));
L_1803dad47_4:;
wr(s->u,70,8,rd(s->r,0,4));
L_1803dad47_5:;
wr(s->u,78,8,(rd(s->u,62,8)|rd(s->u,70,8)));
L_1803dad47_6:;
wr(s->u,86,8,((U)(sx(rd(s->u,78,8),8)/sx(rd(s->u,46,8),8))));
L_1803dad47_7:;
wr(s->r,0,4,(rd(s->u,86,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dad47_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad47_9:;
wr(s->u,94,8,((U)(sx(rd(s->u,78,8),8)%sx(rd(s->u,46,8),8))));
L_1803dad47_10:;
wr(s->r,16,4,(rd(s->u,94,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dad47_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dad47_12:;
/* 1803dad49: dec eax */
L_1803dad49_0:;
L_1803dad49_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,1));
L_1803dad49_2:;
wr(s->r,0,4,(rd(s->r,0,4)-((U)UINT64_C(0x1))));
L_1803dad49_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad49_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dad49_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dad49_6:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dad49_7:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803dad49_8:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803dad49_9:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803dad49_10:;
/* 1803dad4b: imul eax, r8d */
L_1803dad4b_0:;
L_1803dad4b_1:;
wr(s->u,102,8,(U)sx(rd(s->r,0,4),4));
L_1803dad4b_2:;
wr(s->u,110,8,(U)sx(rd(s->r,128,4),4));
L_1803dad4b_3:;
wr(s->u,118,8,(rd(s->u,102,8)*rd(s->u,110,8)));
L_1803dad4b_4:;
wr(s->r,0,4,(rd(s->u,118,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dad4b_5:;
wr(s->u,126,4,(rd(s->u,118,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dad4b_6:;
wr(s->u,30,8,(U)sx(rd(s->r,0,4),4));
L_1803dad4b_7:;
wr(s->r,512,1,(rd(s->u,30,8)!=rd(s->u,118,8)));
L_1803dad4b_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803dad4b_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad4b_10:;
/* 1803dad4f: add eax, ebx */
L_1803dad4f_0:;
L_1803dad4f_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,24,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803dad4f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,24,4),4,0));
L_1803dad4f_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,24,4)));
L_1803dad4f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad4f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dad4f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dad4f_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dad4f_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803dad4f_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803dad4f_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803dad4f_11:;
/* 1803dad51: neg eax */
L_1803dad51_0:;
L_1803dad51_1:;
wr(s->r,512,1,(rd(s->r,0,4)!=((U)UINT64_C(0x0))));
L_1803dad51_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,0,4),4,1));
L_1803dad51_3:;
wr(s->r,0,4,(-rd(s->r,0,4)));
L_1803dad51_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dad51_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dad51_6:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dad51_7:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803dad51_8:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803dad51_9:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803dad51_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad51_11:;
/* 1803dad53: mov dword ptr [rdi + 0x350], eax */
L_1803dad53_0:;
L_1803dad53_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x350))));
L_1803dad53_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803dad53_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dad53_4:;
/* 1803dad59: mov dword ptr [rdi + 0x354], r12d */
L_1803dad59_0:;
L_1803dad59_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x354))));
L_1803dad59_2:;
wr(s->u,8,4,rd(s->r,160,4));
L_1803dad59_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dad59_4:;
/* 1803dad60: movd xmm0, eax */
L_1803dad60_0:;
L_1803dad60_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803dad60_2:;
/* 1803dad64: cvtdq2pd xmm0, xmm0 */
L_1803dad64_0:;
L_1803dad64_1:;
wr(s->u,130,8,rd(s->r,4608,8));
L_1803dad64_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,130,4),4),8));
L_1803dad64_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,134,4),4),8));
L_1803dad64_4:;
return UINT64_C(0x1803dad68);
}
uint64_t b_1803dad59(CPU*s){
/* 1803dad59: mov dword ptr [rdi + 0x354], r12d */
L_1803dad59_0:;
L_1803dad59_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x354))));
L_1803dad59_2:;
wr(s->u,8,4,rd(s->r,160,4));
L_1803dad59_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dad59_4:;
/* 1803dad60: movd xmm0, eax */
L_1803dad60_0:;
L_1803dad60_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803dad60_2:;
/* 1803dad64: cvtdq2pd xmm0, xmm0 */
L_1803dad64_0:;
L_1803dad64_1:;
wr(s->u,38,8,rd(s->r,4608,8));
L_1803dad64_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,38,4),4),8));
L_1803dad64_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,42,4),4),8));
L_1803dad64_4:;
/* 1803dad68: movsd qword ptr [rdi + 0x388], xmm0 */
L_1803dad68_0:;
L_1803dad68_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x388))));
L_1803dad68_2:;
wr(s->u,12,8,rd(s->r,4608,8));
L_1803dad68_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803dad68_4:;
/* 1803dad70: mov ecx, dword ptr [rdi + 0x338] */
L_1803dad70_0:;
L_1803dad70_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x338))));
L_1803dad70_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dad70_3:;
wr(s->r,8,4,rd(s->u,20,4));
L_1803dad70_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dad70_5:;
/* 1803dad76: cmp ecx, 1 */
L_1803dad76_0:;
L_1803dad76_1:;
wr(s->u,30,4,rd(s->r,8,4));
L_1803dad76_2:;
wr(s->r,512,1,(rd(s->u,30,4)<((U)UINT64_C(0x1))));
L_1803dad76_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,30,4),((U)UINT64_C(0x1)),4,1));
L_1803dad76_4:;
wr(s->u,34,4,(rd(s->u,30,4)-((U)UINT64_C(0x1))));
L_1803dad76_5:;
wr(s->r,519,1,(sx(rd(s->u,34,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dad76_6:;
wr(s->r,518,1,(rd(s->u,34,4)==((U)UINT64_C(0x0))));
L_1803dad76_7:;
wr(s->u,24,4,(rd(s->u,34,4)&((U)UINT64_C(0xff))));
L_1803dad76_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803dad76_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803dad76_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803dad76_11:;
/* 1803dad79: je 0x1803dad9b */
L_1803dad79_0:;
L_1803dad79_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dad9b);}
L_1803dad79_2:;
return UINT64_C(0x1803dad7b);
}
uint64_t b_1803dad68(CPU*s){
/* 1803dad68: movsd qword ptr [rdi + 0x388], xmm0 */
L_1803dad68_0:;
L_1803dad68_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x388))));
L_1803dad68_2:;
wr(s->u,8,8,rd(s->r,4608,8));
L_1803dad68_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dad68_4:;
/* 1803dad70: mov ecx, dword ptr [rdi + 0x338] */
L_1803dad70_0:;
L_1803dad70_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x338))));
L_1803dad70_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dad70_3:;
wr(s->r,8,4,rd(s->u,16,4));
L_1803dad70_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dad70_5:;
/* 1803dad76: cmp ecx, 1 */
L_1803dad76_0:;
L_1803dad76_1:;
wr(s->u,26,4,rd(s->r,8,4));
L_1803dad76_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0x1))));
L_1803dad76_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0x1)),4,1));
L_1803dad76_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0x1))));
L_1803dad76_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dad76_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803dad76_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803dad76_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803dad76_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dad76_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dad76_11:;
/* 1803dad79: je 0x1803dad9b */
L_1803dad79_0:;
L_1803dad79_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dad9b);}
L_1803dad79_2:;
return UINT64_C(0x1803dad7b);
}
uint64_t b_1803dad7b(CPU*s){
/* 1803dad7b: lea eax, [rcx - 1] */
L_1803dad7b_0:;
L_1803dad7b_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803dad7b_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dad7b_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dad7b_4:;
/* 1803dad7e: movd xmm0, eax */
L_1803dad7e_0:;
L_1803dad7e_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803dad7e_2:;
/* 1803dad82: cvtdq2ps xmm0, xmm0 */
L_1803dad82_0:;
L_1803dad82_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dad82_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dad82_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dad82_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dad82_5:;
/* 1803dad85: movss xmm1, dword ptr [rip + 0x271eb7] */
L_1803dad85_0:;
L_1803dad85_1:;
wr(s->r,4672,4,mr(UINT64_C(0x18064cc44),4));
L_1803dad85_2:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803dad85_3:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803dad85_4:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803dad85_5:;
/* 1803dad8d: divss xmm1, xmm0 */
L_1803dad8d_0:;
L_1803dad8d_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4608,4),4),4));
L_1803dad8d_2:;
/* 1803dad91: movss dword ptr [rdi + 0x314], xmm1 */
L_1803dad91_0:;
L_1803dad91_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x314))));
L_1803dad91_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803dad91_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dad91_4:;
/* 1803dad99: jmp 0x1803dada5 */
L_1803dad99_0:;
L_1803dad99_1:;
return UINT64_C(0x1803dada5);
L_1803dad99_2:;
return UINT64_C(0x1803dad9b);
}
uint64_t b_1803dad9b(CPU*s){
/* 1803dad9b: mov dword ptr [rdi + 0x314], 0x3f800000 */
L_1803dad9b_0:;
L_1803dad9b_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x314))));
L_1803dad9b_2:;
wr(s->u,32,4,((U)UINT64_C(0x3f800000)));
L_1803dad9b_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803dad9b_4:;
/* 1803dada5: mov dword ptr [rdi + 0x36c], r12d */
L_1803dada5_0:;
L_1803dada5_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x36c))));
L_1803dada5_2:;
wr(s->u,32,4,rd(s->r,160,4));
L_1803dada5_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803dada5_4:;
/* 1803dadac: lea eax, [rcx + rcx*4] */
L_1803dadac_0:;
L_1803dadac_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dadac_2:;
wr(s->u,24,8,(rd(s->r,8,8)+rd(s->u,16,8)));
L_1803dadac_3:;
wr(s->r,0,4,(rd(s->u,24,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dadac_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dadac_5:;
/* 1803dadaf: mov dword ptr [rdi + 0x370], eax */
L_1803dadaf_0:;
L_1803dadaf_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x370))));
L_1803dadaf_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dadaf_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803dadaf_4:;
/* 1803dadb5: mov dword ptr [rdi + 0x398], r12d */
L_1803dadb5_0:;
L_1803dadb5_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x398))));
L_1803dadb5_2:;
wr(s->u,32,4,rd(s->r,160,4));
L_1803dadb5_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803dadb5_4:;
/* 1803dadbc: mov dword ptr [rdi + 0x3d0], r12d */
L_1803dadbc_0:;
L_1803dadbc_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x3d0))));
L_1803dadbc_2:;
wr(s->u,32,4,rd(s->r,160,4));
L_1803dadbc_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803dadbc_4:;
/* 1803dadc3: lea rcx, [rdi + 8] */
L_1803dadc3_0:;
L_1803dadc3_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803dadc3_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803dadc3_3:;
/* 1803dadc7: call 0x1803dfe00 */
L_1803dadc7_0:;
L_1803dadc7_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dadc7_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dadcc)));
L_1803dadc7_3:;
return (uint64_t)UINT64_C(0x1803dfe00);
L_1803dadc7_4:;
return UINT64_C(0x1803dadcc);
}
uint64_t b_1803dada5(CPU*s){
/* 1803dada5: mov dword ptr [rdi + 0x36c], r12d */
L_1803dada5_0:;
L_1803dada5_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x36c))));
L_1803dada5_2:;
wr(s->u,32,4,rd(s->r,160,4));
L_1803dada5_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803dada5_4:;
/* 1803dadac: lea eax, [rcx + rcx*4] */
L_1803dadac_0:;
L_1803dadac_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dadac_2:;
wr(s->u,24,8,(rd(s->r,8,8)+rd(s->u,16,8)));
L_1803dadac_3:;
wr(s->r,0,4,(rd(s->u,24,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dadac_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dadac_5:;
/* 1803dadaf: mov dword ptr [rdi + 0x370], eax */
L_1803dadaf_0:;
L_1803dadaf_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x370))));
L_1803dadaf_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dadaf_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803dadaf_4:;
/* 1803dadb5: mov dword ptr [rdi + 0x398], r12d */
L_1803dadb5_0:;
L_1803dadb5_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x398))));
L_1803dadb5_2:;
wr(s->u,32,4,rd(s->r,160,4));
L_1803dadb5_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803dadb5_4:;
/* 1803dadbc: mov dword ptr [rdi + 0x3d0], r12d */
L_1803dadbc_0:;
L_1803dadbc_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x3d0))));
L_1803dadbc_2:;
wr(s->u,32,4,rd(s->r,160,4));
L_1803dadbc_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803dadbc_4:;
/* 1803dadc3: lea rcx, [rdi + 8] */
L_1803dadc3_0:;
L_1803dadc3_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803dadc3_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803dadc3_3:;
/* 1803dadc7: call 0x1803dfe00 */
L_1803dadc7_0:;
L_1803dadc7_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dadc7_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dadcc)));
L_1803dadc7_3:;
return (uint64_t)UINT64_C(0x1803dfe00);
L_1803dadc7_4:;
return UINT64_C(0x1803dadcc);
}
uint64_t b_1803dadcc(CPU*s){
/* 1803dadcc: mov r8d, dword ptr [rdi + 0x35c] */
L_1803dadcc_0:;
L_1803dadcc_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x35c))));
L_1803dadcc_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dadcc_3:;
wr(s->r,128,4,rd(s->u,28,4));
L_1803dadcc_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dadcc_5:;
/* 1803dadd3: mov eax, dword ptr [rdi + 0x338] */
L_1803dadd3_0:;
L_1803dadd3_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x338))));
L_1803dadd3_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dadd3_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803dadd3_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dadd3_5:;
/* 1803dadd9: mov dword ptr [rsp + 0x38], eax */
L_1803dadd9_0:;
L_1803dadd9_1:;
wr(s->u,16,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803dadd9_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803dadd9_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dadd9_4:;
/* 1803daddd: movss xmm0, dword ptr [rdi + 0x310] */
L_1803daddd_0:;
L_1803daddd_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x310))));
L_1803daddd_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803daddd_3:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803daddd_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803daddd_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803daddd_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803daddd_7:;
/* 1803dade5: movss dword ptr [rsp + 0x30], xmm0 */
L_1803dade5_0:;
L_1803dade5_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dade5_2:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803dade5_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dade5_4:;
/* 1803dadeb: mov eax, dword ptr [rdi + 0x374] */
L_1803dadeb_0:;
L_1803dadeb_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x374))));
L_1803dadeb_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dadeb_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803dadeb_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dadeb_5:;
/* 1803dadf1: mov dword ptr [rsp + 0x28], eax */
L_1803dadf1_0:;
L_1803dadf1_1:;
wr(s->u,16,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803dadf1_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803dadf1_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dadf1_4:;
/* 1803dadf5: mov dword ptr [rsp + 0x20], r8d */
L_1803dadf5_0:;
L_1803dadf5_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dadf5_2:;
wr(s->u,24,4,rd(s->r,128,4));
L_1803dadf5_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dadf5_4:;
/* 1803dadfa: mov r9d, dword ptr [rdi + 0x358] */
L_1803dadfa_0:;
L_1803dadfa_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x358))));
L_1803dadfa_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dadfa_3:;
wr(s->r,136,4,rd(s->u,28,4));
L_1803dadfa_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dadfa_5:;
/* 1803dae01: mov edx, dword ptr [rdi + 0x368] */
L_1803dae01_0:;
L_1803dae01_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x368))));
L_1803dae01_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dae01_3:;
wr(s->r,16,4,rd(s->u,28,4));
L_1803dae01_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dae01_5:;
/* 1803dae07: mov rcx, qword ptr [rdi + 8] */
L_1803dae07_0:;
L_1803dae07_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803dae07_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dae07_3:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803dae07_4:;
/* 1803dae0b: call 0x1803de130 */
L_1803dae0b_0:;
L_1803dae0b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dae0b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dae10)));
L_1803dae0b_3:;
return (uint64_t)UINT64_C(0x1803de130);
L_1803dae0b_4:;
return UINT64_C(0x1803dae10);
}
uint64_t b_1803dae10(CPU*s){
/* 1803dae10: mov ebp, r12d */
L_1803dae10_0:;
L_1803dae10_1:;
wr(s->r,40,4,rd(s->r,160,4));
L_1803dae10_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803dae10_3:;
/* 1803dae13: cmp dword ptr [rdi + 0x338], r12d */
L_1803dae13_0:;
L_1803dae13_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x338))));
L_1803dae13_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dae13_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803dae13_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,160,4)));
L_1803dae13_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,160,4),4,1));
L_1803dae13_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,160,4)));
L_1803dae13_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dae13_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803dae13_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803dae13_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803dae13_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803dae13_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803dae13_13:;
/* 1803dae1a: jle 0x1803daede */
L_1803dae1a_0:;
L_1803dae1a_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dae1a_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803dae1a_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803daede);}
L_1803dae1a_4:;
return UINT64_C(0x1803dae20);
}
uint64_t b_1803dae20(CPU*s){
/* 1803dae20: lea rbx, [rdi + 0x190] */
L_1803dae20_0:;
L_1803dae20_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x190))));
L_1803dae20_2:;
wr(s->r,24,8,rd(s->u,0,8));
L_1803dae20_3:;
/* 1803dae27: or r13, 0xffffffffffffffff */
L_1803dae27_0:;
L_1803dae27_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dae27_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dae27_3:;
wr(s->r,168,8,(rd(s->r,168,8)|((U)UINT64_C(0xffffffffffffffff))));
L_1803dae27_4:;
wr(s->r,519,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dae27_5:;
wr(s->r,518,1,(rd(s->r,168,8)==((U)UINT64_C(0x0))));
L_1803dae27_6:;
wr(s->u,36,8,(rd(s->r,168,8)&((U)UINT64_C(0xff))));
L_1803dae27_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803dae27_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803dae27_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803dae27_10:;
/* 1803dae2b: nop dword ptr [rax + rax] */
L_1803dae2b_0:;
L_1803dae2b_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dae2b_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803dae2b_3:;
/* 1803dae30: mov qword ptr [rbx - 0x180], r12 */
L_1803dae30_0:;
L_1803dae30_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffe80))));
L_1803dae30_2:;
wr(s->u,24,8,rd(s->r,160,8));
L_1803dae30_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,24,8));
L_1803dae30_4:;
/* 1803dae37: movsxd rcx, dword ptr [rdi + 0x33c] */
L_1803dae37_0:;
L_1803dae37_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x33c))));
L_1803dae37_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dae37_3:;
wr(s->r,8,8,(U)sx(rd(s->u,32,4),4));
L_1803dae37_4:;
/* 1803dae3e: mov eax, 4 */
L_1803dae3e_0:;
L_1803dae3e_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803dae3e_2:;
/* 1803dae43: mul rcx */
L_1803dae43_0:;
L_1803dae43_1:;
wr(s->u,55,16,rd(s->r,0,8));
L_1803dae43_2:;
wr(s->u,71,16,rd(s->r,8,8));
L_1803dae43_3:;
wr(s->u,87,16,(rd(s->u,55,16)*rd(s->u,71,16)));
L_1803dae43_4:;
wr(s->r,16,8,(rd(s->u,87,16) >> (((U)UINT64_C(0x8))*8)));
L_1803dae43_5:;
wr(s->r,0,8,(rd(s->u,87,16) >> (((U)UINT64_C(0x0))*8)));
L_1803dae43_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803dae43_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803dae43_8:;
/* 1803dae46: cmovo rax, r13 */
L_1803dae46_0:;
L_1803dae46_1:;
wr(s->u,46,8,rd(s->r,168,8));
L_1803dae46_2:;
wr(s->u,54,1,(!rd(s->r,523,1)));
L_1803dae46_3:;
if(rd(s->u,54,1)){goto L_1803dae4a_0;}
L_1803dae46_4:;
wr(s->r,0,8,rd(s->u,46,8));
L_1803dae46_5:;
/* 1803dae4a: mov rcx, rax */
L_1803dae4a_0:;
L_1803dae4a_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803dae4a_2:;
/* 1803dae4d: call 0x180003140 */
L_1803dae4d_0:;
L_1803dae4d_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dae4d_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dae52)));
L_1803dae4d_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803dae4d_4:;
return UINT64_C(0x1803dae52);
}
uint64_t b_1803dae30(CPU*s){
/* 1803dae30: mov qword ptr [rbx - 0x180], r12 */
L_1803dae30_0:;
L_1803dae30_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffe80))));
L_1803dae30_2:;
wr(s->u,8,8,rd(s->r,160,8));
L_1803dae30_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dae30_4:;
/* 1803dae37: movsxd rcx, dword ptr [rdi + 0x33c] */
L_1803dae37_0:;
L_1803dae37_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x33c))));
L_1803dae37_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dae37_3:;
wr(s->r,8,8,(U)sx(rd(s->u,16,4),4));
L_1803dae37_4:;
/* 1803dae3e: mov eax, 4 */
L_1803dae3e_0:;
L_1803dae3e_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803dae3e_2:;
/* 1803dae43: mul rcx */
L_1803dae43_0:;
L_1803dae43_1:;
wr(s->u,29,16,rd(s->r,0,8));
L_1803dae43_2:;
wr(s->u,45,16,rd(s->r,8,8));
L_1803dae43_3:;
wr(s->u,61,16,(rd(s->u,29,16)*rd(s->u,45,16)));
L_1803dae43_4:;
wr(s->r,16,8,(rd(s->u,61,16) >> (((U)UINT64_C(0x8))*8)));
L_1803dae43_5:;
wr(s->r,0,8,(rd(s->u,61,16) >> (((U)UINT64_C(0x0))*8)));
L_1803dae43_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803dae43_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803dae43_8:;
/* 1803dae46: cmovo rax, r13 */
L_1803dae46_0:;
L_1803dae46_1:;
wr(s->u,20,8,rd(s->r,168,8));
L_1803dae46_2:;
wr(s->u,28,1,(!rd(s->r,523,1)));
L_1803dae46_3:;
if(rd(s->u,28,1)){goto L_1803dae4a_0;}
L_1803dae46_4:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dae46_5:;
/* 1803dae4a: mov rcx, rax */
L_1803dae4a_0:;
L_1803dae4a_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803dae4a_2:;
/* 1803dae4d: call 0x180003140 */
L_1803dae4d_0:;
L_1803dae4d_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dae4d_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dae52)));
L_1803dae4d_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803dae4d_4:;
return UINT64_C(0x1803dae52);
}
uint64_t b_1803dae4a(CPU*s){
/* 1803dae4a: mov rcx, rax */
L_1803dae4a_0:;
L_1803dae4a_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803dae4a_2:;
/* 1803dae4d: call 0x180003140 */
L_1803dae4d_0:;
L_1803dae4d_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dae4d_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dae52)));
L_1803dae4d_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803dae4d_4:;
return UINT64_C(0x1803dae52);
}
uint64_t b_1803dae52(CPU*s){
/* 1803dae52: mov qword ptr [rbx - 0x180], rax */
L_1803dae52_0:;
L_1803dae52_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffe80))));
L_1803dae52_2:;
wr(s->u,13,8,rd(s->r,0,8));
L_1803dae52_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,13,8));
L_1803dae52_4:;
/* 1803dae59: movsxd r8, dword ptr [rdi + 0x33c] */
L_1803dae59_0:;
L_1803dae59_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x33c))));
L_1803dae59_2:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dae59_3:;
wr(s->r,128,8,(U)sx(rd(s->u,21,4),4));
L_1803dae59_4:;
/* 1803dae60: shl r8, 2 */
L_1803dae60_0:;
L_1803dae60_1:;
wr(s->u,71,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803dae60_2:;
wr(s->u,75,8,rd(s->r,128,8));
L_1803dae60_3:;
wr(s->r,128,8,((rd(s->u,71,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,71,4))));
L_1803dae60_4:;
wr(s->u,54,1,(rd(s->u,71,4)==((U)UINT64_C(0x0))));
L_1803dae60_5:;
wr(s->u,55,4,(rd(s->u,71,4)-((U)UINT64_C(0x1))));
L_1803dae60_6:;
wr(s->u,59,8,((rd(s->u,55,4)>=64)?0:(rd(s->u,75,8)<<rd(s->u,55,4))));
L_1803dae60_7:;
wr(s->u,67,1,(sx(rd(s->u,59,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dae60_8:;
wr(s->u,0,1,rd(s->u,54,1));
L_1803dae60_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dae60_10:;
wr(s->u,2,1,(!rd(s->u,54,1)));
L_1803dae60_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dae60_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,67,1)));
L_1803dae60_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dae60_14:;
wr(s->u,68,1,(rd(s->u,71,4)==((U)UINT64_C(0x1))));
L_1803dae60_15:;
wr(s->u,69,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dae60_16:;
wr(s->u,70,1,(rd(s->r,512,1)^rd(s->u,69,1)));
L_1803dae60_17:;
wr(s->u,0,1,rd(s->u,68,1));
L_1803dae60_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,70,1)));
L_1803dae60_19:;
wr(s->u,2,1,(!rd(s->u,68,1)));
L_1803dae60_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dae60_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dae60_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dae60_23:;
wr(s->u,31,1,(rd(s->u,71,4)!=((U)UINT64_C(0x0))));
L_1803dae60_24:;
wr(s->u,32,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dae60_25:;
wr(s->u,33,1,(!rd(s->u,31,1)));
L_1803dae60_26:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,519,1)));
L_1803dae60_27:;
wr(s->u,35,1,(rd(s->u,31,1)&rd(s->u,32,1)));
L_1803dae60_28:;
wr(s->r,519,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803dae60_29:;
wr(s->u,36,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dae60_30:;
wr(s->u,37,1,(!rd(s->u,31,1)));
L_1803dae60_31:;
wr(s->u,38,1,(rd(s->u,37,1)&rd(s->r,518,1)));
L_1803dae60_32:;
wr(s->u,39,1,(rd(s->u,31,1)&rd(s->u,36,1)));
L_1803dae60_33:;
wr(s->r,518,1,(rd(s->u,38,1)|rd(s->u,39,1)));
L_1803dae60_34:;
wr(s->u,40,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dae60_35:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803dae60_36:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dae60_37:;
wr(s->u,50,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dae60_38:;
wr(s->u,51,1,(!rd(s->u,31,1)));
L_1803dae60_39:;
wr(s->u,52,1,(rd(s->u,51,1)&rd(s->r,514,1)));
L_1803dae60_40:;
wr(s->u,53,1,(rd(s->u,31,1)&rd(s->u,50,1)));
L_1803dae60_41:;
wr(s->r,514,1,(rd(s->u,52,1)|rd(s->u,53,1)));
L_1803dae60_42:;
/* 1803dae64: xor edx, edx */
L_1803dae64_0:;
L_1803dae64_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dae64_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dae64_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dae64_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dae64_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dae64_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dae64_7:;
wr(s->u,25,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dae64_8:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803dae64_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803dae64_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803dae64_11:;
/* 1803dae66: mov rcx, rax */
L_1803dae66_0:;
L_1803dae66_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803dae66_2:;
/* 1803dae69: call 0x18000d6a6 */
L_1803dae69_0:;
L_1803dae69_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dae69_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dae6e)));
L_1803dae69_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dae69_4:;
return UINT64_C(0x1803dae6e);
}
uint64_t b_1803dae6e(CPU*s){
/* 1803dae6e: mov qword ptr [rbx], r12 */
L_1803dae6e_0:;
L_1803dae6e_1:;
wr(s->u,13,8,rd(s->r,160,8));
L_1803dae6e_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,13,8));
L_1803dae6e_3:;
/* 1803dae71: mov eax, dword ptr [rdi + 0x368] */
L_1803dae71_0:;
L_1803dae71_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x368))));
L_1803dae71_2:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dae71_3:;
wr(s->r,0,4,rd(s->u,21,4));
L_1803dae71_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dae71_5:;
/* 1803dae77: shl eax, 4 */
L_1803dae77_0:;
L_1803dae77_1:;
wr(s->u,120,4,(((U)UINT64_C(0x4))&((U)UINT64_C(0x1f))));
L_1803dae77_2:;
wr(s->u,124,4,rd(s->r,0,4));
L_1803dae77_3:;
wr(s->r,0,4,((rd(s->u,120,4)>=32)?0:(rd(s->r,0,4)<<rd(s->u,120,4))));
L_1803dae77_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dae77_5:;
wr(s->u,50,1,(rd(s->u,120,4)==((U)UINT64_C(0x0))));
L_1803dae77_6:;
wr(s->u,51,4,(rd(s->u,120,4)-((U)UINT64_C(0x1))));
L_1803dae77_7:;
wr(s->u,55,4,((rd(s->u,51,4)>=32)?0:(rd(s->u,124,4)<<rd(s->u,51,4))));
L_1803dae77_8:;
wr(s->u,59,1,(sx(rd(s->u,55,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dae77_9:;
wr(s->u,0,1,rd(s->u,50,1));
L_1803dae77_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dae77_11:;
wr(s->u,2,1,(!rd(s->u,50,1)));
L_1803dae77_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dae77_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,59,1)));
L_1803dae77_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dae77_15:;
wr(s->u,60,1,(rd(s->u,120,4)==((U)UINT64_C(0x1))));
L_1803dae77_16:;
wr(s->u,61,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dae77_17:;
wr(s->u,62,1,(rd(s->r,512,1)^rd(s->u,61,1)));
L_1803dae77_18:;
wr(s->u,0,1,rd(s->u,60,1));
L_1803dae77_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,62,1)));
L_1803dae77_20:;
wr(s->u,2,1,(!rd(s->u,60,1)));
L_1803dae77_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dae77_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dae77_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dae77_24:;
wr(s->u,31,1,(rd(s->u,120,4)!=((U)UINT64_C(0x0))));
L_1803dae77_25:;
wr(s->u,32,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dae77_26:;
wr(s->u,33,1,(!rd(s->u,31,1)));
L_1803dae77_27:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,519,1)));
L_1803dae77_28:;
wr(s->u,35,1,(rd(s->u,31,1)&rd(s->u,32,1)));
L_1803dae77_29:;
wr(s->r,519,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803dae77_30:;
wr(s->u,36,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dae77_31:;
wr(s->u,37,1,(!rd(s->u,31,1)));
L_1803dae77_32:;
wr(s->u,38,1,(rd(s->u,37,1)&rd(s->r,518,1)));
L_1803dae77_33:;
wr(s->u,39,1,(rd(s->u,31,1)&rd(s->u,36,1)));
L_1803dae77_34:;
wr(s->r,518,1,(rd(s->u,38,1)|rd(s->u,39,1)));
L_1803dae77_35:;
wr(s->u,40,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dae77_36:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803dae77_37:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803dae77_38:;
wr(s->u,46,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803dae77_39:;
wr(s->u,47,1,(!rd(s->u,31,1)));
L_1803dae77_40:;
wr(s->u,48,1,(rd(s->u,47,1)&rd(s->r,514,1)));
L_1803dae77_41:;
wr(s->u,49,1,(rd(s->u,31,1)&rd(s->u,46,1)));
L_1803dae77_42:;
wr(s->r,514,1,(rd(s->u,48,1)|rd(s->u,49,1)));
L_1803dae77_43:;
/* 1803dae7a: add eax, dword ptr [rdi + 0x340] */
L_1803dae7a_0:;
L_1803dae7a_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x340))));
L_1803dae7a_2:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dae7a_3:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->u,21,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803dae7a_4:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dae7a_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,21,4),4,0));
L_1803dae7a_6:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dae7a_7:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->u,21,4)));
L_1803dae7a_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dae7a_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dae7a_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dae7a_11:;
wr(s->u,25,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dae7a_12:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803dae7a_13:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803dae7a_14:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803dae7a_15:;
/* 1803dae80: movsxd rcx, eax */
L_1803dae80_0:;
L_1803dae80_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803dae80_2:;
/* 1803dae83: mov eax, 4 */
L_1803dae83_0:;
L_1803dae83_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803dae83_2:;
/* 1803dae88: mul rcx */
L_1803dae88_0:;
L_1803dae88_1:;
wr(s->u,72,16,rd(s->r,0,8));
L_1803dae88_2:;
wr(s->u,88,16,rd(s->r,8,8));
L_1803dae88_3:;
wr(s->u,104,16,(rd(s->u,72,16)*rd(s->u,88,16)));
L_1803dae88_4:;
wr(s->r,16,8,(rd(s->u,104,16) >> (((U)UINT64_C(0x8))*8)));
L_1803dae88_5:;
wr(s->r,0,8,(rd(s->u,104,16) >> (((U)UINT64_C(0x0))*8)));
L_1803dae88_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803dae88_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803dae88_8:;
/* 1803dae8b: cmovo rax, r13 */
L_1803dae8b_0:;
L_1803dae8b_1:;
wr(s->u,63,8,rd(s->r,168,8));
L_1803dae8b_2:;
wr(s->u,71,1,(!rd(s->r,523,1)));
L_1803dae8b_3:;
if(rd(s->u,71,1)){goto L_1803dae8f_0;}
L_1803dae8b_4:;
wr(s->r,0,8,rd(s->u,63,8));
L_1803dae8b_5:;
/* 1803dae8f: mov rcx, rax */
L_1803dae8f_0:;
L_1803dae8f_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803dae8f_2:;
/* 1803dae92: call 0x180003140 */
L_1803dae92_0:;
L_1803dae92_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dae92_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dae97)));
L_1803dae92_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803dae92_4:;
return UINT64_C(0x1803dae97);
}
uint64_t b_1803dae8f(CPU*s){
/* 1803dae8f: mov rcx, rax */
L_1803dae8f_0:;
L_1803dae8f_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803dae8f_2:;
/* 1803dae92: call 0x180003140 */
L_1803dae92_0:;
L_1803dae92_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dae92_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dae97)));
L_1803dae92_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803dae92_4:;
return UINT64_C(0x1803dae97);
}
uint64_t b_1803dae97(CPU*s){
/* 1803dae97: mov qword ptr [rbx], rax */
L_1803dae97_0:;
L_1803dae97_1:;
wr(s->u,13,8,rd(s->r,0,8));
L_1803dae97_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,13,8));
L_1803dae97_3:;
/* 1803dae9a: mov ecx, dword ptr [rdi + 0x368] */
L_1803dae9a_0:;
L_1803dae9a_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x368))));
L_1803dae9a_2:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dae9a_3:;
wr(s->r,8,4,rd(s->u,21,4));
L_1803dae9a_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dae9a_5:;
/* 1803daea0: shl ecx, 4 */
L_1803daea0_0:;
L_1803daea0_1:;
wr(s->u,71,4,(((U)UINT64_C(0x4))&((U)UINT64_C(0x1f))));
L_1803daea0_2:;
wr(s->u,75,4,rd(s->r,8,4));
L_1803daea0_3:;
wr(s->r,8,4,((rd(s->u,71,4)>=32)?0:(rd(s->r,8,4)<<rd(s->u,71,4))));
L_1803daea0_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803daea0_5:;
wr(s->u,54,1,(rd(s->u,71,4)==((U)UINT64_C(0x0))));
L_1803daea0_6:;
wr(s->u,55,4,(rd(s->u,71,4)-((U)UINT64_C(0x1))));
L_1803daea0_7:;
wr(s->u,59,4,((rd(s->u,55,4)>=32)?0:(rd(s->u,75,4)<<rd(s->u,55,4))));
L_1803daea0_8:;
wr(s->u,67,1,(sx(rd(s->u,59,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daea0_9:;
wr(s->u,0,1,rd(s->u,54,1));
L_1803daea0_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803daea0_11:;
wr(s->u,2,1,(!rd(s->u,54,1)));
L_1803daea0_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803daea0_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,67,1)));
L_1803daea0_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803daea0_15:;
wr(s->u,68,1,(rd(s->u,71,4)==((U)UINT64_C(0x1))));
L_1803daea0_16:;
wr(s->u,69,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daea0_17:;
wr(s->u,70,1,(rd(s->r,512,1)^rd(s->u,69,1)));
L_1803daea0_18:;
wr(s->u,0,1,rd(s->u,68,1));
L_1803daea0_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,70,1)));
L_1803daea0_20:;
wr(s->u,2,1,(!rd(s->u,68,1)));
L_1803daea0_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803daea0_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803daea0_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803daea0_24:;
wr(s->u,31,1,(rd(s->u,71,4)!=((U)UINT64_C(0x0))));
L_1803daea0_25:;
wr(s->u,32,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daea0_26:;
wr(s->u,33,1,(!rd(s->u,31,1)));
L_1803daea0_27:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,519,1)));
L_1803daea0_28:;
wr(s->u,35,1,(rd(s->u,31,1)&rd(s->u,32,1)));
L_1803daea0_29:;
wr(s->r,519,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803daea0_30:;
wr(s->u,36,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803daea0_31:;
wr(s->u,37,1,(!rd(s->u,31,1)));
L_1803daea0_32:;
wr(s->u,38,1,(rd(s->u,37,1)&rd(s->r,518,1)));
L_1803daea0_33:;
wr(s->u,39,1,(rd(s->u,31,1)&rd(s->u,36,1)));
L_1803daea0_34:;
wr(s->r,518,1,(rd(s->u,38,1)|rd(s->u,39,1)));
L_1803daea0_35:;
wr(s->u,40,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803daea0_36:;
wr(s->u,48,1,pop(rd(s->u,40,4),4));
L_1803daea0_37:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803daea0_38:;
wr(s->u,50,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803daea0_39:;
wr(s->u,51,1,(!rd(s->u,31,1)));
L_1803daea0_40:;
wr(s->u,52,1,(rd(s->u,51,1)&rd(s->r,514,1)));
L_1803daea0_41:;
wr(s->u,53,1,(rd(s->u,31,1)&rd(s->u,50,1)));
L_1803daea0_42:;
wr(s->r,514,1,(rd(s->u,52,1)|rd(s->u,53,1)));
L_1803daea0_43:;
/* 1803daea3: add ecx, dword ptr [rdi + 0x340] */
L_1803daea3_0:;
L_1803daea3_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x340))));
L_1803daea3_2:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803daea3_3:;
wr(s->r,512,1,(((rd(s->r,8,4)+rd(s->u,21,4))&(((U)1<<32)-1))<rd(s->r,8,4)));
L_1803daea3_4:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803daea3_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,21,4),4,0));
L_1803daea3_6:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803daea3_7:;
wr(s->r,8,4,(rd(s->r,8,4)+rd(s->u,21,4)));
L_1803daea3_8:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803daea3_9:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daea3_10:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803daea3_11:;
wr(s->u,25,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803daea3_12:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803daea3_13:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803daea3_14:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803daea3_15:;
/* 1803daea9: movsxd r8, ecx */
L_1803daea9_0:;
L_1803daea9_1:;
wr(s->r,128,8,(U)sx(rd(s->r,8,4),4));
L_1803daea9_2:;
/* 1803daeac: shl r8, 2 */
L_1803daeac_0:;
L_1803daeac_1:;
wr(s->u,79,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803daeac_2:;
wr(s->u,83,8,rd(s->r,128,8));
L_1803daeac_3:;
wr(s->r,128,8,((rd(s->u,79,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,79,4))));
L_1803daeac_4:;
wr(s->u,54,1,(rd(s->u,79,4)==((U)UINT64_C(0x0))));
L_1803daeac_5:;
wr(s->u,55,4,(rd(s->u,79,4)-((U)UINT64_C(0x1))));
L_1803daeac_6:;
wr(s->u,59,8,((rd(s->u,55,4)>=64)?0:(rd(s->u,83,8)<<rd(s->u,55,4))));
L_1803daeac_7:;
wr(s->u,67,1,(sx(rd(s->u,59,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803daeac_8:;
wr(s->u,0,1,rd(s->u,54,1));
L_1803daeac_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803daeac_10:;
wr(s->u,2,1,(!rd(s->u,54,1)));
L_1803daeac_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803daeac_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,67,1)));
L_1803daeac_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803daeac_14:;
wr(s->u,68,1,(rd(s->u,79,4)==((U)UINT64_C(0x1))));
L_1803daeac_15:;
wr(s->u,69,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803daeac_16:;
wr(s->u,70,1,(rd(s->r,512,1)^rd(s->u,69,1)));
L_1803daeac_17:;
wr(s->u,0,1,rd(s->u,68,1));
L_1803daeac_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,70,1)));
L_1803daeac_19:;
wr(s->u,2,1,(!rd(s->u,68,1)));
L_1803daeac_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803daeac_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803daeac_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803daeac_23:;
wr(s->u,31,1,(rd(s->u,79,4)!=((U)UINT64_C(0x0))));
L_1803daeac_24:;
wr(s->u,32,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803daeac_25:;
wr(s->u,33,1,(!rd(s->u,31,1)));
L_1803daeac_26:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,519,1)));
L_1803daeac_27:;
wr(s->u,35,1,(rd(s->u,31,1)&rd(s->u,32,1)));
L_1803daeac_28:;
wr(s->r,519,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803daeac_29:;
wr(s->u,36,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803daeac_30:;
wr(s->u,37,1,(!rd(s->u,31,1)));
L_1803daeac_31:;
wr(s->u,38,1,(rd(s->u,37,1)&rd(s->r,518,1)));
L_1803daeac_32:;
wr(s->u,39,1,(rd(s->u,31,1)&rd(s->u,36,1)));
L_1803daeac_33:;
wr(s->r,518,1,(rd(s->u,38,1)|rd(s->u,39,1)));
L_1803daeac_34:;
wr(s->u,40,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803daeac_35:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803daeac_36:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803daeac_37:;
wr(s->u,50,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803daeac_38:;
wr(s->u,51,1,(!rd(s->u,31,1)));
L_1803daeac_39:;
wr(s->u,52,1,(rd(s->u,51,1)&rd(s->r,514,1)));
L_1803daeac_40:;
wr(s->u,53,1,(rd(s->u,31,1)&rd(s->u,50,1)));
L_1803daeac_41:;
wr(s->r,514,1,(rd(s->u,52,1)|rd(s->u,53,1)));
L_1803daeac_42:;
/* 1803daeb0: xor edx, edx */
L_1803daeb0_0:;
L_1803daeb0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803daeb0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803daeb0_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803daeb0_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803daeb0_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daeb0_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803daeb0_7:;
wr(s->u,25,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803daeb0_8:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803daeb0_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803daeb0_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803daeb0_11:;
/* 1803daeb2: mov rcx, rax */
L_1803daeb2_0:;
L_1803daeb2_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803daeb2_2:;
/* 1803daeb5: call 0x18000d6a6 */
L_1803daeb5_0:;
L_1803daeb5_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803daeb5_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803daeba)));
L_1803daeb5_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803daeb5_4:;
return UINT64_C(0x1803daeba);
}
uint64_t b_1803daeba(CPU*s){
/* 1803daeba: mov eax, dword ptr [rdi + 0x368] */
L_1803daeba_0:;
L_1803daeba_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x368))));
L_1803daeba_2:;
wr(s->u,25,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803daeba_3:;
wr(s->r,0,4,rd(s->u,25,4));
L_1803daeba_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803daeba_5:;
/* 1803daec0: shl eax, 4 */
L_1803daec0_0:;
L_1803daec0_1:;
wr(s->u,88,4,(((U)UINT64_C(0x4))&((U)UINT64_C(0x1f))));
L_1803daec0_2:;
wr(s->u,92,4,rd(s->r,0,4));
L_1803daec0_3:;
wr(s->r,0,4,((rd(s->u,88,4)>=32)?0:(rd(s->r,0,4)<<rd(s->u,88,4))));
L_1803daec0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803daec0_5:;
wr(s->u,63,1,(rd(s->u,88,4)==((U)UINT64_C(0x0))));
L_1803daec0_6:;
wr(s->u,64,4,(rd(s->u,88,4)-((U)UINT64_C(0x1))));
L_1803daec0_7:;
wr(s->u,68,4,((rd(s->u,64,4)>=32)?0:(rd(s->u,92,4)<<rd(s->u,64,4))));
L_1803daec0_8:;
wr(s->u,76,1,(sx(rd(s->u,68,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daec0_9:;
wr(s->u,0,1,rd(s->u,63,1));
L_1803daec0_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803daec0_11:;
wr(s->u,2,1,(!rd(s->u,63,1)));
L_1803daec0_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803daec0_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,76,1)));
L_1803daec0_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803daec0_15:;
wr(s->u,77,1,(rd(s->u,88,4)==((U)UINT64_C(0x1))));
L_1803daec0_16:;
wr(s->u,78,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daec0_17:;
wr(s->u,79,1,(rd(s->r,512,1)^rd(s->u,78,1)));
L_1803daec0_18:;
wr(s->u,0,1,rd(s->u,77,1));
L_1803daec0_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,79,1)));
L_1803daec0_20:;
wr(s->u,2,1,(!rd(s->u,77,1)));
L_1803daec0_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803daec0_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803daec0_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803daec0_24:;
wr(s->u,40,1,(rd(s->u,88,4)!=((U)UINT64_C(0x0))));
L_1803daec0_25:;
wr(s->u,41,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daec0_26:;
wr(s->u,42,1,(!rd(s->u,40,1)));
L_1803daec0_27:;
wr(s->u,43,1,(rd(s->u,42,1)&rd(s->r,519,1)));
L_1803daec0_28:;
wr(s->u,44,1,(rd(s->u,40,1)&rd(s->u,41,1)));
L_1803daec0_29:;
wr(s->r,519,1,(rd(s->u,43,1)|rd(s->u,44,1)));
L_1803daec0_30:;
wr(s->u,45,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803daec0_31:;
wr(s->u,46,1,(!rd(s->u,40,1)));
L_1803daec0_32:;
wr(s->u,47,1,(rd(s->u,46,1)&rd(s->r,518,1)));
L_1803daec0_33:;
wr(s->u,48,1,(rd(s->u,40,1)&rd(s->u,45,1)));
L_1803daec0_34:;
wr(s->r,518,1,(rd(s->u,47,1)|rd(s->u,48,1)));
L_1803daec0_35:;
wr(s->u,49,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803daec0_36:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803daec0_37:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803daec0_38:;
wr(s->u,59,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803daec0_39:;
wr(s->u,60,1,(!rd(s->u,40,1)));
L_1803daec0_40:;
wr(s->u,61,1,(rd(s->u,60,1)&rd(s->r,514,1)));
L_1803daec0_41:;
wr(s->u,62,1,(rd(s->u,40,1)&rd(s->u,59,1)));
L_1803daec0_42:;
wr(s->r,514,1,(rd(s->u,61,1)|rd(s->u,62,1)));
L_1803daec0_43:;
/* 1803daec3: cdqe  */
L_1803daec3_0:;
L_1803daec3_1:;
wr(s->r,0,8,(U)sx(rd(s->r,0,4),4));
L_1803daec3_2:;
/* 1803daec5: shl rax, 2 */
L_1803daec5_0:;
L_1803daec5_1:;
wr(s->u,96,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803daec5_2:;
wr(s->u,100,8,rd(s->r,0,8));
L_1803daec5_3:;
wr(s->r,0,8,((rd(s->u,96,4)>=64)?0:(rd(s->r,0,8)<<rd(s->u,96,4))));
L_1803daec5_4:;
wr(s->u,63,1,(rd(s->u,96,4)==((U)UINT64_C(0x0))));
L_1803daec5_5:;
wr(s->u,64,4,(rd(s->u,96,4)-((U)UINT64_C(0x1))));
L_1803daec5_6:;
wr(s->u,68,8,((rd(s->u,64,4)>=64)?0:(rd(s->u,100,8)<<rd(s->u,64,4))));
L_1803daec5_7:;
wr(s->u,76,1,(sx(rd(s->u,68,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803daec5_8:;
wr(s->u,0,1,rd(s->u,63,1));
L_1803daec5_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803daec5_10:;
wr(s->u,2,1,(!rd(s->u,63,1)));
L_1803daec5_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803daec5_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,76,1)));
L_1803daec5_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803daec5_14:;
wr(s->u,77,1,(rd(s->u,96,4)==((U)UINT64_C(0x1))));
L_1803daec5_15:;
wr(s->u,78,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803daec5_16:;
wr(s->u,79,1,(rd(s->r,512,1)^rd(s->u,78,1)));
L_1803daec5_17:;
wr(s->u,0,1,rd(s->u,77,1));
L_1803daec5_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,79,1)));
L_1803daec5_19:;
wr(s->u,2,1,(!rd(s->u,77,1)));
L_1803daec5_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803daec5_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803daec5_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803daec5_23:;
wr(s->u,40,1,(rd(s->u,96,4)!=((U)UINT64_C(0x0))));
L_1803daec5_24:;
wr(s->u,41,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803daec5_25:;
wr(s->u,42,1,(!rd(s->u,40,1)));
L_1803daec5_26:;
wr(s->u,43,1,(rd(s->u,42,1)&rd(s->r,519,1)));
L_1803daec5_27:;
wr(s->u,44,1,(rd(s->u,40,1)&rd(s->u,41,1)));
L_1803daec5_28:;
wr(s->r,519,1,(rd(s->u,43,1)|rd(s->u,44,1)));
L_1803daec5_29:;
wr(s->u,45,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803daec5_30:;
wr(s->u,46,1,(!rd(s->u,40,1)));
L_1803daec5_31:;
wr(s->u,47,1,(rd(s->u,46,1)&rd(s->r,518,1)));
L_1803daec5_32:;
wr(s->u,48,1,(rd(s->u,40,1)&rd(s->u,45,1)));
L_1803daec5_33:;
wr(s->r,518,1,(rd(s->u,47,1)|rd(s->u,48,1)));
L_1803daec5_34:;
wr(s->u,49,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803daec5_35:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803daec5_36:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803daec5_37:;
wr(s->u,59,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803daec5_38:;
wr(s->u,60,1,(!rd(s->u,40,1)));
L_1803daec5_39:;
wr(s->u,61,1,(rd(s->u,60,1)&rd(s->r,514,1)));
L_1803daec5_40:;
wr(s->u,62,1,(rd(s->u,40,1)&rd(s->u,59,1)));
L_1803daec5_41:;
wr(s->r,514,1,(rd(s->u,61,1)|rd(s->u,62,1)));
L_1803daec5_42:;
/* 1803daec9: add qword ptr [rbx], rax */
L_1803daec9_0:;
L_1803daec9_1:;
wr(s->u,17,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803daec9_2:;
wr(s->r,512,1,(((rd(s->u,17,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->u,17,8)));
L_1803daec9_3:;
wr(s->u,17,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803daec9_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,17,8),rd(s->r,0,8),8,0));
L_1803daec9_5:;
wr(s->u,17,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803daec9_6:;
wr(s->u,17,8,(rd(s->u,17,8)+rd(s->r,0,8)));
L_1803daec9_7:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,17,8));
L_1803daec9_8:;
wr(s->u,17,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803daec9_9:;
wr(s->r,519,1,(sx(rd(s->u,17,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803daec9_10:;
wr(s->u,17,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803daec9_11:;
wr(s->r,518,1,(rd(s->u,17,8)==((U)UINT64_C(0x0))));
L_1803daec9_12:;
wr(s->u,17,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803daec9_13:;
wr(s->u,30,8,(rd(s->u,17,8)&((U)UINT64_C(0xff))));
L_1803daec9_14:;
wr(s->u,38,1,pop(rd(s->u,30,8),8));
L_1803daec9_15:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803daec9_16:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803daec9_17:;
/* 1803daecc: inc ebp */
L_1803daecc_0:;
L_1803daecc_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),((U)UINT64_C(0x1)),4,0));
L_1803daecc_2:;
wr(s->r,40,4,(rd(s->r,40,4)+((U)UINT64_C(0x1))));
L_1803daecc_3:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803daecc_4:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daecc_5:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803daecc_6:;
wr(s->u,30,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803daecc_7:;
wr(s->u,38,1,pop(rd(s->u,30,4),4));
L_1803daecc_8:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803daecc_9:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803daecc_10:;
/* 1803daece: add rbx, 8 */
L_1803daece_0:;
L_1803daece_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803daece_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x8)),8,0));
L_1803daece_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803daece_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803daece_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803daece_6:;
wr(s->u,30,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803daece_7:;
wr(s->u,38,1,pop(rd(s->u,30,8),8));
L_1803daece_8:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803daece_9:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803daece_10:;
/* 1803daed2: cmp ebp, dword ptr [rdi + 0x338] */
L_1803daed2_0:;
L_1803daed2_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x338))));
L_1803daed2_2:;
wr(s->u,13,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803daed2_3:;
wr(s->u,80,4,rd(s->u,13,4));
L_1803daed2_4:;
wr(s->r,512,1,(rd(s->r,40,4)<rd(s->u,80,4)));
L_1803daed2_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->u,80,4),4,1));
L_1803daed2_6:;
wr(s->u,84,4,(rd(s->r,40,4)-rd(s->u,80,4)));
L_1803daed2_7:;
wr(s->r,519,1,(sx(rd(s->u,84,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daed2_8:;
wr(s->r,518,1,(rd(s->u,84,4)==((U)UINT64_C(0x0))));
L_1803daed2_9:;
wr(s->u,30,4,(rd(s->u,84,4)&((U)UINT64_C(0xff))));
L_1803daed2_10:;
wr(s->u,38,1,pop(rd(s->u,30,4),4));
L_1803daed2_11:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803daed2_12:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803daed2_13:;
/* 1803daed8: jl 0x1803dae30 */
L_1803daed8_0:;
L_1803daed8_1:;
wr(s->u,29,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803daed8_2:;
if(rd(s->u,29,1)){return UINT64_C(0x1803dae30);}
L_1803daed8_3:;
return UINT64_C(0x1803daede);
}
uint64_t b_1803daede(CPU*s){
/* 1803daede: mov ecx, 0x50 */
L_1803daede_0:;
L_1803daede_1:;
wr(s->r,8,8,((U)UINT64_C(0x50)));
L_1803daede_2:;
/* 1803daee3: call 0x180003140 */
L_1803daee3_0:;
L_1803daee3_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803daee3_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803daee8)));
L_1803daee3_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803daee3_4:;
return UINT64_C(0x1803daee8);
}
uint64_t b_1803daee8(CPU*s){
/* 1803daee8: mov qword ptr [rsp + 0x48], rax */
L_1803daee8_0:;
L_1803daee8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803daee8_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803daee8_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803daee8_4:;
/* 1803daeed: test rax, rax */
L_1803daeed_0:;
L_1803daeed_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803daeed_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803daeed_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803daeed_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803daeed_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803daeed_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803daeed_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803daeed_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803daeed_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803daeed_10:;
/* 1803daef0: je 0x1803daf08 */
L_1803daef0_0:;
L_1803daef0_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803daf08);}
L_1803daef0_2:;
return UINT64_C(0x1803daef2);
}
uint64_t b_1803daef2(CPU*s){
/* 1803daef2: mov r8d, 0x4000 */
L_1803daef2_0:;
L_1803daef2_1:;
wr(s->r,128,8,((U)UINT64_C(0x4000)));
L_1803daef2_2:;
/* 1803daef8: mov edx, dword ptr [rdi + 0x338] */
L_1803daef8_0:;
L_1803daef8_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x338))));
L_1803daef8_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803daef8_3:;
wr(s->r,16,4,rd(s->u,8,4));
L_1803daef8_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803daef8_5:;
/* 1803daefe: mov rcx, rax */
L_1803daefe_0:;
L_1803daefe_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803daefe_2:;
/* 1803daf01: call 0x1803df510 */
L_1803daf01_0:;
L_1803daf01_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803daf01_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803daf06)));
L_1803daf01_3:;
return (uint64_t)UINT64_C(0x1803df510);
L_1803daf01_4:;
return UINT64_C(0x1803daf06);
}
uint64_t b_1803daf06(CPU*s){
/* 1803daf06: jmp 0x1803daf0b */
L_1803daf06_0:;
L_1803daf06_1:;
return UINT64_C(0x1803daf0b);
L_1803daf06_2:;
return UINT64_C(0x1803daf08);
}
uint64_t b_1803daf08(CPU*s){
/* 1803daf08: mov rax, r12 */
L_1803daf08_0:;
L_1803daf08_1:;
wr(s->r,0,8,rd(s->r,160,8));
L_1803daf08_2:;
/* 1803daf0b: mov qword ptr [rdi + 0x3c8], rax */
L_1803daf0b_0:;
L_1803daf0b_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c8))));
L_1803daf0b_2:;
wr(s->u,12,8,rd(s->r,0,8));
L_1803daf0b_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803daf0b_4:;
/* 1803daf12: mov dword ptr [rdi + 0x310], 0x3f800000 */
L_1803daf12_0:;
L_1803daf12_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x310))));
L_1803daf12_2:;
wr(s->u,8,4,((U)UINT64_C(0x3f800000)));
L_1803daf12_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803daf12_4:;
/* 1803daf1c: mov dword ptr [rdi + 0x318], 0x3f800000 */
L_1803daf1c_0:;
L_1803daf1c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x318))));
L_1803daf1c_2:;
wr(s->u,8,4,((U)UINT64_C(0x3f800000)));
L_1803daf1c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803daf1c_4:;
/* 1803daf26: mov dword ptr [rdi + 0x31c], 0x3f800000 */
L_1803daf26_0:;
L_1803daf26_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x31c))));
L_1803daf26_2:;
wr(s->u,8,4,((U)UINT64_C(0x3f800000)));
L_1803daf26_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803daf26_4:;
/* 1803daf30: mov qword ptr [rdi + 0x3a0], r12 */
L_1803daf30_0:;
L_1803daf30_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3a0))));
L_1803daf30_2:;
wr(s->u,12,8,rd(s->r,160,8));
L_1803daf30_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803daf30_4:;
/* 1803daf37: mov qword ptr [rdi + 0x3a8], r12 */
L_1803daf37_0:;
L_1803daf37_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3a8))));
L_1803daf37_2:;
wr(s->u,12,8,rd(s->r,160,8));
L_1803daf37_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803daf37_4:;
/* 1803daf3e: mov qword ptr [rdi + 0x3b0], r12 */
L_1803daf3e_0:;
L_1803daf3e_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3b0))));
L_1803daf3e_2:;
wr(s->u,12,8,rd(s->r,160,8));
L_1803daf3e_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803daf3e_4:;
/* 1803daf45: mov qword ptr [rdi + 0x3b8], r12 */
L_1803daf45_0:;
L_1803daf45_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3b8))));
L_1803daf45_2:;
wr(s->u,12,8,rd(s->r,160,8));
L_1803daf45_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803daf45_4:;
/* 1803daf4c: mov eax, dword ptr [rdi + 0x368] */
L_1803daf4c_0:;
L_1803daf4c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x368))));
L_1803daf4c_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803daf4c_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1803daf4c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803daf4c_5:;
/* 1803daf52: sar eax, 1 */
L_1803daf52_0:;
L_1803daf52_1:;
wr(s->u,30,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803daf52_2:;
wr(s->r,512,1,(rd(s->u,30,4)!=((U)UINT64_C(0x0))));
L_1803daf52_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803daf52_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803daf52_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803daf52_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daf52_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803daf52_8:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803daf52_9:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803daf52_10:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803daf52_11:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803daf52_12:;
/* 1803daf54: movd xmm0, eax */
L_1803daf54_0:;
L_1803daf54_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803daf54_2:;
/* 1803daf58: cvtdq2ps xmm0, xmm0 */
L_1803daf58_0:;
L_1803daf58_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803daf58_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803daf58_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803daf58_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803daf58_5:;
/* 1803daf5b: movss dword ptr [rdi + 0x3c0], xmm0 */
L_1803daf5b_0:;
L_1803daf5b_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c0))));
L_1803daf5b_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803daf5b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803daf5b_4:;
/* 1803daf63: xor r9d, r9d */
L_1803daf63_0:;
L_1803daf63_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803daf63_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803daf63_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803daf63_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803daf63_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daf63_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803daf63_7:;
wr(s->u,24,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803daf63_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803daf63_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803daf63_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803daf63_11:;
/* 1803daf66: movss xmm2, dword ptr [rip + 0x271cd6] */
L_1803daf66_0:;
L_1803daf66_1:;
wr(s->r,4736,4,mr(UINT64_C(0x18064cc44),4));
L_1803daf66_2:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803daf66_3:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803daf66_4:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803daf66_5:;
/* 1803daf6e: lea rdx, [rdi + 0x310] */
L_1803daf6e_0:;
L_1803daf6e_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x310))));
L_1803daf6e_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1803daf6e_3:;
/* 1803daf75: mov rcx, rdi */
L_1803daf75_0:;
L_1803daf75_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803daf75_2:;
/* 1803daf78: call 0x1803da260 */
L_1803daf78_0:;
L_1803daf78_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803daf78_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803daf7d)));
L_1803daf78_3:;
return (uint64_t)UINT64_C(0x1803da260);
L_1803daf78_4:;
return UINT64_C(0x1803daf7d);
}
uint64_t b_1803daf0b(CPU*s){
/* 1803daf0b: mov qword ptr [rdi + 0x3c8], rax */
L_1803daf0b_0:;
L_1803daf0b_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c8))));
L_1803daf0b_2:;
wr(s->u,12,8,rd(s->r,0,8));
L_1803daf0b_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803daf0b_4:;
/* 1803daf12: mov dword ptr [rdi + 0x310], 0x3f800000 */
L_1803daf12_0:;
L_1803daf12_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x310))));
L_1803daf12_2:;
wr(s->u,8,4,((U)UINT64_C(0x3f800000)));
L_1803daf12_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803daf12_4:;
/* 1803daf1c: mov dword ptr [rdi + 0x318], 0x3f800000 */
L_1803daf1c_0:;
L_1803daf1c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x318))));
L_1803daf1c_2:;
wr(s->u,8,4,((U)UINT64_C(0x3f800000)));
L_1803daf1c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803daf1c_4:;
/* 1803daf26: mov dword ptr [rdi + 0x31c], 0x3f800000 */
L_1803daf26_0:;
L_1803daf26_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x31c))));
L_1803daf26_2:;
wr(s->u,8,4,((U)UINT64_C(0x3f800000)));
L_1803daf26_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803daf26_4:;
/* 1803daf30: mov qword ptr [rdi + 0x3a0], r12 */
L_1803daf30_0:;
L_1803daf30_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3a0))));
L_1803daf30_2:;
wr(s->u,12,8,rd(s->r,160,8));
L_1803daf30_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803daf30_4:;
/* 1803daf37: mov qword ptr [rdi + 0x3a8], r12 */
L_1803daf37_0:;
L_1803daf37_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3a8))));
L_1803daf37_2:;
wr(s->u,12,8,rd(s->r,160,8));
L_1803daf37_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803daf37_4:;
/* 1803daf3e: mov qword ptr [rdi + 0x3b0], r12 */
L_1803daf3e_0:;
L_1803daf3e_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3b0))));
L_1803daf3e_2:;
wr(s->u,12,8,rd(s->r,160,8));
L_1803daf3e_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803daf3e_4:;
/* 1803daf45: mov qword ptr [rdi + 0x3b8], r12 */
L_1803daf45_0:;
L_1803daf45_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3b8))));
L_1803daf45_2:;
wr(s->u,12,8,rd(s->r,160,8));
L_1803daf45_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803daf45_4:;
/* 1803daf4c: mov eax, dword ptr [rdi + 0x368] */
L_1803daf4c_0:;
L_1803daf4c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x368))));
L_1803daf4c_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803daf4c_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1803daf4c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803daf4c_5:;
/* 1803daf52: sar eax, 1 */
L_1803daf52_0:;
L_1803daf52_1:;
wr(s->u,30,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803daf52_2:;
wr(s->r,512,1,(rd(s->u,30,4)!=((U)UINT64_C(0x0))));
L_1803daf52_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803daf52_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803daf52_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803daf52_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daf52_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803daf52_8:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803daf52_9:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803daf52_10:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803daf52_11:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803daf52_12:;
/* 1803daf54: movd xmm0, eax */
L_1803daf54_0:;
L_1803daf54_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803daf54_2:;
/* 1803daf58: cvtdq2ps xmm0, xmm0 */
L_1803daf58_0:;
L_1803daf58_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803daf58_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803daf58_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803daf58_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803daf58_5:;
/* 1803daf5b: movss dword ptr [rdi + 0x3c0], xmm0 */
L_1803daf5b_0:;
L_1803daf5b_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c0))));
L_1803daf5b_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803daf5b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803daf5b_4:;
/* 1803daf63: xor r9d, r9d */
L_1803daf63_0:;
L_1803daf63_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803daf63_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803daf63_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803daf63_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803daf63_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803daf63_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803daf63_7:;
wr(s->u,24,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803daf63_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803daf63_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803daf63_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803daf63_11:;
/* 1803daf66: movss xmm2, dword ptr [rip + 0x271cd6] */
L_1803daf66_0:;
L_1803daf66_1:;
wr(s->r,4736,4,mr(UINT64_C(0x18064cc44),4));
L_1803daf66_2:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803daf66_3:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803daf66_4:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803daf66_5:;
/* 1803daf6e: lea rdx, [rdi + 0x310] */
L_1803daf6e_0:;
L_1803daf6e_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x310))));
L_1803daf6e_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1803daf6e_3:;
/* 1803daf75: mov rcx, rdi */
L_1803daf75_0:;
L_1803daf75_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803daf75_2:;
/* 1803daf78: call 0x1803da260 */
L_1803daf78_0:;
L_1803daf78_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803daf78_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803daf7d)));
L_1803daf78_3:;
return (uint64_t)UINT64_C(0x1803da260);
L_1803daf78_4:;
return UINT64_C(0x1803daf7d);
}
uint64_t b_1803daf7d(CPU*s){
/* 1803daf7d: mov rcx, rdi */
L_1803daf7d_0:;
L_1803daf7d_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803daf7d_2:;
/* 1803daf80: call 0x1803da8f0 */
L_1803daf80_0:;
L_1803daf80_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803daf80_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803daf85)));
L_1803daf80_3:;
return (uint64_t)UINT64_C(0x1803da8f0);
L_1803daf80_4:;
return UINT64_C(0x1803daf85);
}
uint64_t b_1803daf85(CPU*s){
/* 1803daf85: nop  */
L_1803daf85_0:;
L_1803daf85_1:;
/* 1803daf86: mov rax, rdi */
L_1803daf86_0:;
L_1803daf86_1:;
wr(s->r,0,8,rd(s->r,56,8));
L_1803daf86_2:;
/* 1803daf89: lea r11, [rsp + 0x50] */
L_1803daf89_0:;
L_1803daf89_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803daf89_2:;
wr(s->r,152,8,rd(s->u,8,8));
L_1803daf89_3:;
/* 1803daf8e: mov rbx, qword ptr [r11 + 0x28] */
L_1803daf8e_0:;
L_1803daf8e_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x28))));
L_1803daf8e_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803daf8e_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803daf8e_4:;
/* 1803daf92: mov rbp, qword ptr [r11 + 0x30] */
L_1803daf92_0:;
L_1803daf92_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x30))));
L_1803daf92_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803daf92_3:;
wr(s->r,40,8,rd(s->u,16,8));
L_1803daf92_4:;
/* 1803daf96: mov rsi, qword ptr [r11 + 0x38] */
L_1803daf96_0:;
L_1803daf96_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x38))));
L_1803daf96_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803daf96_3:;
wr(s->r,48,8,rd(s->u,16,8));
L_1803daf96_4:;
/* 1803daf9a: mov rsp, r11 */
L_1803daf9a_0:;
L_1803daf9a_1:;
wr(s->r,32,8,rd(s->r,152,8));
L_1803daf9a_2:;
/* 1803daf9d: pop r13 */
L_1803daf9d_0:;
L_1803daf9d_1:;
wr(s->u,24,8,((U)UINT64_C(0x0)));
L_1803daf9d_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803daf9d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803daf9d_4:;
wr(s->r,168,8,rd(s->u,24,8));
L_1803daf9d_5:;
/* 1803daf9f: pop r12 */
L_1803daf9f_0:;
L_1803daf9f_1:;
wr(s->u,24,8,((U)UINT64_C(0x0)));
L_1803daf9f_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803daf9f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803daf9f_4:;
wr(s->r,160,8,rd(s->u,24,8));
L_1803daf9f_5:;
/* 1803dafa1: pop rdi */
L_1803dafa1_0:;
L_1803dafa1_1:;
wr(s->u,24,8,((U)UINT64_C(0x0)));
L_1803dafa1_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dafa1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dafa1_4:;
wr(s->r,56,8,rd(s->u,24,8));
L_1803dafa1_5:;
/* 1803dafa2: ret  */
L_1803dafa2_0:;
L_1803dafa2_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dafa2_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dafa2_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dafa2_4:;
return UINT64_C(0x1803dafa3);
}
uint64_t b_1803dafb0(CPU*s){
/* 1803dafb0: mov qword ptr [rsp + 8], rbx */
L_1803dafb0_0:;
L_1803dafb0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803dafb0_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803dafb0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dafb0_4:;
/* 1803dafb5: push rdi */
L_1803dafb5_0:;
L_1803dafb5_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803dafb5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dafb5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803dafb5_4:;
/* 1803dafb6: sub rsp, 0x20 */
L_1803dafb6_0:;
L_1803dafb6_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803dafb6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803dafb6_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803dafb6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dafb6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dafb6_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dafb6_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803dafb6_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dafb6_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dafb6_10:;
/* 1803dafba: mov ebx, edx */
L_1803dafba_0:;
L_1803dafba_1:;
wr(s->r,24,4,rd(s->r,16,4));
L_1803dafba_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dafba_3:;
/* 1803dafbc: mov rdi, rcx */
L_1803dafbc_0:;
L_1803dafbc_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803dafbc_2:;
/* 1803dafbf: call 0x1803d8e10 */
L_1803dafbf_0:;
L_1803dafbf_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dafbf_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dafc4)));
L_1803dafbf_3:;
return (uint64_t)UINT64_C(0x1803d8e10);
L_1803dafbf_4:;
return UINT64_C(0x1803dafc4);
}
uint64_t b_1803dafc4(CPU*s){
/* 1803dafc4: test bl, 1 */
L_1803dafc4_0:;
L_1803dafc4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dafc4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dafc4_3:;
wr(s->u,3,1,(rd(s->r,24,1)&((U)UINT64_C(0x1))));
L_1803dafc4_4:;
wr(s->r,519,1,(sx(rd(s->u,3,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803dafc4_5:;
wr(s->r,518,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_1803dafc4_6:;
wr(s->u,0,1,(rd(s->u,3,1)&((U)UINT64_C(0xff))));
L_1803dafc4_7:;
wr(s->u,1,1,pop(rd(s->u,0,1),1));
L_1803dafc4_8:;
wr(s->u,2,1,(rd(s->u,1,1)&((U)UINT64_C(0x1))));
L_1803dafc4_9:;
wr(s->r,514,1,(rd(s->u,2,1)==((U)UINT64_C(0x0))));
L_1803dafc4_10:;
/* 1803dafc7: je 0x1803dafd1 */
L_1803dafc7_0:;
L_1803dafc7_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dafd1);}
L_1803dafc7_2:;
return UINT64_C(0x1803dafc9);
}
uint64_t b_1803dafc9(CPU*s){
/* 1803dafc9: mov rcx, rdi */
L_1803dafc9_0:;
L_1803dafc9_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803dafc9_2:;
/* 1803dafcc: call 0x180003160 */
L_1803dafcc_0:;
L_1803dafcc_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dafcc_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dafd1)));
L_1803dafcc_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803dafcc_4:;
return UINT64_C(0x1803dafd1);
}
uint64_t b_1803dafd1(CPU*s){
/* 1803dafd1: mov rax, rdi */
L_1803dafd1_0:;
L_1803dafd1_1:;
wr(s->r,0,8,rd(s->r,56,8));
L_1803dafd1_2:;
/* 1803dafd4: mov rbx, qword ptr [rsp + 0x30] */
L_1803dafd4_0:;
L_1803dafd4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dafd4_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dafd4_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803dafd4_4:;
/* 1803dafd9: add rsp, 0x20 */
L_1803dafd9_0:;
L_1803dafd9_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dafd9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803dafd9_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803dafd9_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dafd9_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dafd9_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dafd9_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dafd9_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dafd9_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dafd9_10:;
/* 1803dafdd: pop rdi */
L_1803dafdd_0:;
L_1803dafdd_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803dafdd_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dafdd_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dafdd_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803dafdd_5:;
/* 1803dafde: ret  */
L_1803dafde_0:;
L_1803dafde_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dafde_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dafde_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dafde_4:;
return UINT64_C(0x1803dafdf);
}
