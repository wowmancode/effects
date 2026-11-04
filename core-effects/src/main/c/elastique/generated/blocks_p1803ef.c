#include "lift_runtime.h"
uint64_t b_1803ef00d(CPU*s){
/* 1803ef00d: mov rsi, qword ptr [rsp + 0x18] */
L_1803ef00d_0:;
L_1803ef00d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803ef00d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ef00d_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803ef00d_4:;
/* 1803ef012: mov rbp, qword ptr [rsp + 0x10] */
L_1803ef012_0:;
L_1803ef012_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ef012_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ef012_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803ef012_4:;
/* 1803ef017: mov eax, r10d */
L_1803ef017_0:;
L_1803ef017_1:;
wr(s->r,0,4,rd(s->r,144,4));
L_1803ef017_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef017_3:;
/* 1803ef01a: mov rbx, qword ptr [rsp + 0x20] */
L_1803ef01a_0:;
L_1803ef01a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ef01a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ef01a_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ef01a_4:;
/* 1803ef01f: pop rdi */
L_1803ef01f_0:;
L_1803ef01f_1:;
wr(s->u,16,8,((U)UINT64_C(0x0)));
L_1803ef01f_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef01f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef01f_4:;
wr(s->r,56,8,rd(s->u,16,8));
L_1803ef01f_5:;
/* 1803ef020: ret  */
L_1803ef020_0:;
L_1803ef020_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef020_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef020_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ef020_4:;
return UINT64_C(0x1803ef021);
}
uint64_t b_1803ef017(CPU*s){
/* 1803ef017: mov eax, r10d */
L_1803ef017_0:;
L_1803ef017_1:;
wr(s->r,0,4,rd(s->r,144,4));
L_1803ef017_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef017_3:;
/* 1803ef01a: mov rbx, qword ptr [rsp + 0x20] */
L_1803ef01a_0:;
L_1803ef01a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ef01a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ef01a_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ef01a_4:;
/* 1803ef01f: pop rdi */
L_1803ef01f_0:;
L_1803ef01f_1:;
wr(s->u,16,8,((U)UINT64_C(0x0)));
L_1803ef01f_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef01f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef01f_4:;
wr(s->r,56,8,rd(s->u,16,8));
L_1803ef01f_5:;
/* 1803ef020: ret  */
L_1803ef020_0:;
L_1803ef020_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef020_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef020_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ef020_4:;
return UINT64_C(0x1803ef021);
}
uint64_t b_1803ef030(CPU*s){
/* 1803ef030: mov qword ptr [rsp + 0x10], rdx */
L_1803ef030_0:;
L_1803ef030_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ef030_2:;
wr(s->u,20,8,rd(s->r,16,8));
L_1803ef030_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_1803ef030_4:;
/* 1803ef035: push r12 */
L_1803ef035_0:;
L_1803ef035_1:;
wr(s->u,46,8,rd(s->r,160,8));
L_1803ef035_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef035_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,46,8));
L_1803ef035_4:;
/* 1803ef037: push r13 */
L_1803ef037_0:;
L_1803ef037_1:;
wr(s->u,46,8,rd(s->r,168,8));
L_1803ef037_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef037_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,46,8));
L_1803ef037_4:;
/* 1803ef039: sub rsp, 0xa8 */
L_1803ef039_0:;
L_1803ef039_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0xa8))));
L_1803ef039_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0xa8)),8,1));
L_1803ef039_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0xa8))));
L_1803ef039_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef039_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ef039_6:;
wr(s->u,54,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ef039_7:;
wr(s->u,62,1,pop(rd(s->u,54,8),8));
L_1803ef039_8:;
wr(s->u,63,1,(rd(s->u,62,1)&((U)UINT64_C(0x1))));
L_1803ef039_9:;
wr(s->r,514,1,(rd(s->u,63,1)==((U)UINT64_C(0x0))));
L_1803ef039_10:;
/* 1803ef040: movss xmm2, dword ptr [rip + 0x25dbfc] */
L_1803ef040_0:;
L_1803ef040_1:;
wr(s->r,4736,4,mr(UINT64_C(0x18064cc44),4));
L_1803ef040_2:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ef040_3:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ef040_4:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ef040_5:;
/* 1803ef048: movss xmm0, dword ptr [rsp + 0xf0] */
L_1803ef048_0:;
L_1803ef048_1:;
wr(s->u,8,8,(((U)UINT64_C(0xf0))+rd(s->r,32,8)));
L_1803ef048_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ef048_3:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803ef048_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ef048_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ef048_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ef048_7:;
/* 1803ef051: movaps xmmword ptr [rsp + 0x70], xmm6 */
L_1803ef051_0:;
L_1803ef051_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803ef051_2:;
wr(s->u,28,16,rd(s->r,4992,16));
L_1803ef051_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,28,16));
L_1803ef051_4:;
/* 1803ef056: movaps xmm6, xmm2 */
L_1803ef056_0:;
L_1803ef056_1:;
wr(s->r,4992,4,rd(s->r,4736,4));
L_1803ef056_2:;
wr(s->r,4996,4,rd(s->r,4740,4));
L_1803ef056_3:;
wr(s->r,5000,4,rd(s->r,4744,4));
L_1803ef056_4:;
wr(s->r,5004,4,rd(s->r,4748,4));
L_1803ef056_5:;
/* 1803ef059: movaps xmm1, xmm3 */
L_1803ef059_0:;
L_1803ef059_1:;
wr(s->r,4672,4,rd(s->r,4800,4));
L_1803ef059_2:;
wr(s->r,4676,4,rd(s->r,4804,4));
L_1803ef059_3:;
wr(s->r,4680,4,rd(s->r,4808,4));
L_1803ef059_4:;
wr(s->r,4684,4,rd(s->r,4812,4));
L_1803ef059_5:;
/* 1803ef05c: movaps xmmword ptr [rsp + 0x60], xmm7 */
L_1803ef05c_0:;
L_1803ef05c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803ef05c_2:;
wr(s->u,28,16,rd(s->r,5056,16));
L_1803ef05c_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,28,16));
L_1803ef05c_4:;
/* 1803ef061: mov r12, r8 */
L_1803ef061_0:;
L_1803ef061_1:;
wr(s->r,160,8,rd(s->r,128,8));
L_1803ef061_2:;
/* 1803ef064: mov r13, rcx */
L_1803ef064_0:;
L_1803ef064_1:;
wr(s->r,168,8,rd(s->r,8,8));
L_1803ef064_2:;
/* 1803ef067: mulss xmm0, dword ptr [rip + 0x2701c5] */
L_1803ef067_0:;
L_1803ef067_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(mr(UINT64_C(0x18065f234),4),4),4));
L_1803ef067_2:;
/* 1803ef06f: divss xmm6, xmm3 */
L_1803ef06f_0:;
L_1803ef06f_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)/fv(rd(s->r,4800,4),4),4));
L_1803ef06f_2:;
/* 1803ef073: movaps xmmword ptr [rsp + 0x50], xmm8 */
L_1803ef073_0:;
L_1803ef073_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ef073_2:;
wr(s->u,28,16,rd(s->r,5120,16));
L_1803ef073_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,28,16));
L_1803ef073_4:;
/* 1803ef079: cvttss2si rax, xmm0 */
L_1803ef079_0:;
L_1803ef079_1:;
wr(s->r,0,8,ftrunc(fv(rd(s->r,4608,4),4),8));
L_1803ef079_2:;
/* 1803ef07e: movss xmm0, dword ptr [rip + 0x26c48a] */
L_1803ef07e_0:;
L_1803ef07e_1:;
wr(s->r,4608,4,mr(UINT64_C(0x18065b510),4));
L_1803ef07e_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ef07e_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ef07e_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ef07e_5:;
/* 1803ef086: mov qword ptr [rsp + 0xc0], rax */
L_1803ef086_0:;
L_1803ef086_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc0))+rd(s->r,32,8)));
L_1803ef086_2:;
wr(s->u,20,8,rd(s->r,0,8));
L_1803ef086_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803ef086_4:;
/* 1803ef08e: mulss xmm1, xmm0 */
L_1803ef08e_0:;
L_1803ef08e_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803ef08e_2:;
/* 1803ef092: unpcklps xmm6, xmm6 */
L_1803ef092_0:;
L_1803ef092_1:;
wr(s->r,5000,4,rd(s->r,4996,4));
L_1803ef092_2:;
wr(s->r,5004,4,rd(s->r,4996,4));
L_1803ef092_3:;
wr(s->r,4996,4,rd(s->r,4992,4));
L_1803ef092_4:;
/* 1803ef095: cvtps2pd xmm8, xmm6 */
L_1803ef095_0:;
L_1803ef095_1:;
wr(s->u,68,8,rd(s->r,4992,8));
L_1803ef095_2:;
wr(s->r,5120,8,fb(fv(rd(s->u,68,4),4),8));
L_1803ef095_3:;
wr(s->r,5128,8,fb(fv(rd(s->u,72,4),4),8));
L_1803ef095_4:;
/* 1803ef099: comiss xmm1, xmm0 */
L_1803ef099_0:;
L_1803ef099_1:;
wr(s->u,64,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803ef099_2:;
wr(s->u,65,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803ef099_3:;
wr(s->r,514,1,((rd(s->u,64,1)!=0)||(rd(s->u,65,1)!=0)));
L_1803ef099_4:;
wr(s->u,66,1,(fv(rd(s->r,4672,4),4)==fv(rd(s->r,4608,4),4)));
L_1803ef099_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,66,1)));
L_1803ef099_6:;
wr(s->u,67,1,(fv(rd(s->r,4672,4),4)<fv(rd(s->r,4608,4),4)));
L_1803ef099_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,67,1)));
L_1803ef099_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef099_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ef099_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ef099_11:;
/* 1803ef09c: ja 0x1803ef0a1 */
L_1803ef09c_0:;
L_1803ef09c_1:;
wr(s->u,44,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803ef09c_2:;
wr(s->u,45,1,(!rd(s->u,44,1)));
L_1803ef09c_3:;
if(rd(s->u,45,1)){return UINT64_C(0x1803ef0a1);}
L_1803ef09c_4:;
return UINT64_C(0x1803ef09e);
}
uint64_t b_1803ef09e(CPU*s){
/* 1803ef09e: movaps xmm0, xmm1 */
L_1803ef09e_0:;
L_1803ef09e_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803ef09e_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803ef09e_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803ef09e_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803ef09e_5:;
/* 1803ef0a1: comiss xmm3, xmm2 */
L_1803ef0a1_0:;
L_1803ef0a1_1:;
wr(s->u,36,1,isnan(fv(rd(s->r,4800,4),4)));
L_1803ef0a1_2:;
wr(s->u,37,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803ef0a1_3:;
wr(s->r,514,1,((rd(s->u,36,1)!=0)||(rd(s->u,37,1)!=0)));
L_1803ef0a1_4:;
wr(s->u,38,1,(fv(rd(s->r,4800,4),4)==fv(rd(s->r,4736,4),4)));
L_1803ef0a1_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,38,1)));
L_1803ef0a1_6:;
wr(s->u,39,1,(fv(rd(s->r,4800,4),4)<fv(rd(s->r,4736,4),4)));
L_1803ef0a1_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,39,1)));
L_1803ef0a1_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef0a1_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ef0a1_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ef0a1_11:;
/* 1803ef0a4: mulss xmm0, dword ptr [rip + 0x2630c8] */
L_1803ef0a4_0:;
L_1803ef0a4_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(mr(UINT64_C(0x180652174),4),4),4));
L_1803ef0a4_2:;
/* 1803ef0ac: movss xmm7, dword ptr [rip + 0x2630b0] */
L_1803ef0ac_0:;
L_1803ef0ac_1:;
wr(s->r,5056,4,mr(UINT64_C(0x180652164),4));
L_1803ef0ac_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ef0ac_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ef0ac_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ef0ac_5:;
/* 1803ef0b4: mov qword ptr [rsp + 0xd8], rbx */
L_1803ef0b4_0:;
L_1803ef0b4_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd8))+rd(s->r,32,8)));
L_1803ef0b4_2:;
wr(s->u,28,8,rd(s->r,24,8));
L_1803ef0b4_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ef0b4_4:;
/* 1803ef0bc: mov qword ptr [rsp + 0xa0], rbp */
L_1803ef0bc_0:;
L_1803ef0bc_1:;
wr(s->u,16,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_1803ef0bc_2:;
wr(s->u,28,8,rd(s->r,40,8));
L_1803ef0bc_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ef0bc_4:;
/* 1803ef0c4: mov qword ptr [rsp + 0x98], rsi */
L_1803ef0c4_0:;
L_1803ef0c4_1:;
wr(s->u,16,8,(((U)UINT64_C(0x98))+rd(s->r,32,8)));
L_1803ef0c4_2:;
wr(s->u,28,8,rd(s->r,48,8));
L_1803ef0c4_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ef0c4_4:;
/* 1803ef0cc: mov qword ptr [rsp + 0x90], rdi */
L_1803ef0cc_0:;
L_1803ef0cc_1:;
wr(s->u,16,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803ef0cc_2:;
wr(s->u,28,8,rd(s->r,56,8));
L_1803ef0cc_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ef0cc_4:;
/* 1803ef0d4: mov qword ptr [rsp + 0x88], r14 */
L_1803ef0d4_0:;
L_1803ef0d4_1:;
wr(s->u,16,8,(((U)UINT64_C(0x88))+rd(s->r,32,8)));
L_1803ef0d4_2:;
wr(s->u,28,8,rd(s->r,176,8));
L_1803ef0d4_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ef0d4_4:;
/* 1803ef0dc: mov qword ptr [rsp + 0x20], r8 */
L_1803ef0dc_0:;
L_1803ef0dc_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ef0dc_2:;
wr(s->u,28,8,rd(s->r,128,8));
L_1803ef0dc_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803ef0dc_4:;
/* 1803ef0e1: addss xmm0, xmm7 */
L_1803ef0e1_0:;
L_1803ef0e1_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ef0e1_2:;
/* 1803ef0e5: cvttss2si rax, xmm0 */
L_1803ef0e5_0:;
L_1803ef0e5_1:;
wr(s->r,0,8,ftrunc(fv(rd(s->r,4608,4),4),8));
L_1803ef0e5_2:;
/* 1803ef0ea: mov dword ptr [rcx + 0x20], eax */
L_1803ef0ea_0:;
L_1803ef0ea_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x20))));
L_1803ef0ea_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803ef0ea_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803ef0ea_4:;
/* 1803ef0ed: mov qword ptr [rsp + 0x80], r15 */
L_1803ef0ed_0:;
L_1803ef0ed_1:;
wr(s->u,16,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803ef0ed_2:;
wr(s->u,28,8,rd(s->r,184,8));
L_1803ef0ed_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ef0ed_4:;
/* 1803ef0f5: jb 0x1803ef21d */
L_1803ef0f5_0:;
L_1803ef0f5_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ef21d);}
L_1803ef0f5_2:;
return UINT64_C(0x1803ef0fb);
}
uint64_t b_1803ef0a1(CPU*s){
/* 1803ef0a1: comiss xmm3, xmm2 */
L_1803ef0a1_0:;
L_1803ef0a1_1:;
wr(s->u,36,1,isnan(fv(rd(s->r,4800,4),4)));
L_1803ef0a1_2:;
wr(s->u,37,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803ef0a1_3:;
wr(s->r,514,1,((rd(s->u,36,1)!=0)||(rd(s->u,37,1)!=0)));
L_1803ef0a1_4:;
wr(s->u,38,1,(fv(rd(s->r,4800,4),4)==fv(rd(s->r,4736,4),4)));
L_1803ef0a1_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,38,1)));
L_1803ef0a1_6:;
wr(s->u,39,1,(fv(rd(s->r,4800,4),4)<fv(rd(s->r,4736,4),4)));
L_1803ef0a1_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,39,1)));
L_1803ef0a1_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef0a1_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ef0a1_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ef0a1_11:;
/* 1803ef0a4: mulss xmm0, dword ptr [rip + 0x2630c8] */
L_1803ef0a4_0:;
L_1803ef0a4_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(mr(UINT64_C(0x180652174),4),4),4));
L_1803ef0a4_2:;
/* 1803ef0ac: movss xmm7, dword ptr [rip + 0x2630b0] */
L_1803ef0ac_0:;
L_1803ef0ac_1:;
wr(s->r,5056,4,mr(UINT64_C(0x180652164),4));
L_1803ef0ac_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ef0ac_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ef0ac_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ef0ac_5:;
/* 1803ef0b4: mov qword ptr [rsp + 0xd8], rbx */
L_1803ef0b4_0:;
L_1803ef0b4_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd8))+rd(s->r,32,8)));
L_1803ef0b4_2:;
wr(s->u,28,8,rd(s->r,24,8));
L_1803ef0b4_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ef0b4_4:;
/* 1803ef0bc: mov qword ptr [rsp + 0xa0], rbp */
L_1803ef0bc_0:;
L_1803ef0bc_1:;
wr(s->u,16,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_1803ef0bc_2:;
wr(s->u,28,8,rd(s->r,40,8));
L_1803ef0bc_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ef0bc_4:;
/* 1803ef0c4: mov qword ptr [rsp + 0x98], rsi */
L_1803ef0c4_0:;
L_1803ef0c4_1:;
wr(s->u,16,8,(((U)UINT64_C(0x98))+rd(s->r,32,8)));
L_1803ef0c4_2:;
wr(s->u,28,8,rd(s->r,48,8));
L_1803ef0c4_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ef0c4_4:;
/* 1803ef0cc: mov qword ptr [rsp + 0x90], rdi */
L_1803ef0cc_0:;
L_1803ef0cc_1:;
wr(s->u,16,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803ef0cc_2:;
wr(s->u,28,8,rd(s->r,56,8));
L_1803ef0cc_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ef0cc_4:;
/* 1803ef0d4: mov qword ptr [rsp + 0x88], r14 */
L_1803ef0d4_0:;
L_1803ef0d4_1:;
wr(s->u,16,8,(((U)UINT64_C(0x88))+rd(s->r,32,8)));
L_1803ef0d4_2:;
wr(s->u,28,8,rd(s->r,176,8));
L_1803ef0d4_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ef0d4_4:;
/* 1803ef0dc: mov qword ptr [rsp + 0x20], r8 */
L_1803ef0dc_0:;
L_1803ef0dc_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ef0dc_2:;
wr(s->u,28,8,rd(s->r,128,8));
L_1803ef0dc_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803ef0dc_4:;
/* 1803ef0e1: addss xmm0, xmm7 */
L_1803ef0e1_0:;
L_1803ef0e1_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ef0e1_2:;
/* 1803ef0e5: cvttss2si rax, xmm0 */
L_1803ef0e5_0:;
L_1803ef0e5_1:;
wr(s->r,0,8,ftrunc(fv(rd(s->r,4608,4),4),8));
L_1803ef0e5_2:;
/* 1803ef0ea: mov dword ptr [rcx + 0x20], eax */
L_1803ef0ea_0:;
L_1803ef0ea_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x20))));
L_1803ef0ea_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803ef0ea_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803ef0ea_4:;
/* 1803ef0ed: mov qword ptr [rsp + 0x80], r15 */
L_1803ef0ed_0:;
L_1803ef0ed_1:;
wr(s->u,16,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803ef0ed_2:;
wr(s->u,28,8,rd(s->r,184,8));
L_1803ef0ed_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ef0ed_4:;
/* 1803ef0f5: jb 0x1803ef21d */
L_1803ef0f5_0:;
L_1803ef0f5_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ef21d);}
L_1803ef0f5_2:;
return UINT64_C(0x1803ef0fb);
}
uint64_t b_1803ef0fb(CPU*s){
/* 1803ef0fb: movd xmm1, dword ptr [rsp + 0xe8] */
L_1803ef0fb_0:;
L_1803ef0fb_1:;
wr(s->u,0,8,(((U)UINT64_C(0xe8))+rd(s->r,32,8)));
L_1803ef0fb_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef0fb_3:;
wr(s->r,4672,16,rd(s->u,8,4));
L_1803ef0fb_4:;
/* 1803ef104: cvtdq2ps xmm1, xmm1 */
L_1803ef104_0:;
L_1803ef104_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803ef104_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803ef104_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803ef104_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803ef104_5:;
/* 1803ef107: mulss xmm1, xmm3 */
L_1803ef107_0:;
L_1803ef107_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ef107_2:;
/* 1803ef10b: mulss xmm1, dword ptr [rip + 0x275f65] */
L_1803ef10b_0:;
L_1803ef10b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(mr(UINT64_C(0x180665078),4),4),4));
L_1803ef10b_2:;
/* 1803ef113: addss xmm1, xmm7 */
L_1803ef113_0:;
L_1803ef113_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ef113_2:;
/* 1803ef117: cvttss2si ecx, xmm1 */
L_1803ef117_0:;
L_1803ef117_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803ef117_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef117_3:;
/* 1803ef11b: cmp ecx, 0x80000000 */
L_1803ef11b_0:;
L_1803ef11b_1:;
wr(s->u,18,4,rd(s->r,8,4));
L_1803ef11b_2:;
wr(s->r,512,1,(rd(s->u,18,4)<((U)UINT64_C(0x80000000))));
L_1803ef11b_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),((U)UINT64_C(0x80000000)),4,1));
L_1803ef11b_4:;
wr(s->u,22,4,(rd(s->u,18,4)-((U)UINT64_C(0x80000000))));
L_1803ef11b_5:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef11b_6:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803ef11b_7:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803ef11b_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803ef11b_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ef11b_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ef11b_11:;
/* 1803ef121: je 0x1803ef143 */
L_1803ef121_0:;
L_1803ef121_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ef143);}
L_1803ef121_2:;
return UINT64_C(0x1803ef123);
}
uint64_t b_1803ef123(CPU*s){
/* 1803ef123: pxor xmm0, xmm0 */
L_1803ef123_0:;
L_1803ef123_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803ef123_2:;
/* 1803ef127: cvtsi2ss xmm0, ecx */
L_1803ef127_0:;
L_1803ef127_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803ef127_2:;
/* 1803ef12b: ucomiss xmm0, xmm1 */
L_1803ef12b_0:;
L_1803ef12b_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803ef12b_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803ef12b_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803ef12b_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803ef12b_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803ef12b_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803ef12b_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ef12b_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef12b_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ef12b_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ef12b_11:;
/* 1803ef12e: je 0x1803ef143 */
L_1803ef12e_0:;
L_1803ef12e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ef143);}
L_1803ef12e_2:;
return UINT64_C(0x1803ef130);
}
uint64_t b_1803ef130(CPU*s){
/* 1803ef130: unpcklps xmm1, xmm1 */
L_1803ef130_0:;
L_1803ef130_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803ef130_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803ef130_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803ef130_4:;
/* 1803ef133: movmskps eax, xmm1 */
L_1803ef133_0:;
L_1803ef133_1:;
wr(s->r,0,4,(((rd(s->r,4672,16)>>31)&1)<<0)|(((rd(s->r,4672,16)>>63)&1)<<1)|(((rd(s->r,4672,16)>>95)&1)<<2)|(((rd(s->r,4672,16)>>127)&1)<<3));
L_1803ef133_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef133_3:;
/* 1803ef136: pxor xmm1, xmm1 */
L_1803ef136_0:;
L_1803ef136_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803ef136_2:;
/* 1803ef13a: and eax, 1 */
L_1803ef13a_0:;
L_1803ef13a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef13a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef13a_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803ef13a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef13a_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef13a_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ef13a_7:;
wr(s->u,18,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ef13a_8:;
wr(s->u,26,1,pop(rd(s->u,18,4),4));
L_1803ef13a_9:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803ef13a_10:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803ef13a_11:;
/* 1803ef13d: sub ecx, eax */
L_1803ef13d_0:;
L_1803ef13d_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,0,4)));
L_1803ef13d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,1));
L_1803ef13d_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,0,4)));
L_1803ef13d_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef13d_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef13d_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ef13d_7:;
wr(s->u,18,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ef13d_8:;
wr(s->u,26,1,pop(rd(s->u,18,4),4));
L_1803ef13d_9:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803ef13d_10:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803ef13d_11:;
/* 1803ef13f: cvtsi2ss xmm1, ecx */
L_1803ef13f_0:;
L_1803ef13f_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803ef13f_2:;
/* 1803ef143: cvttss2si eax, xmm1 */
L_1803ef143_0:;
L_1803ef143_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803ef143_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef143_3:;
/* 1803ef147: cdqe  */
L_1803ef147_0:;
L_1803ef147_1:;
wr(s->r,0,8,(U)sx(rd(s->r,0,4),4));
L_1803ef147_2:;
/* 1803ef149: mov qword ptr [rsp + 0xd0], rax */
L_1803ef149_0:;
L_1803ef149_1:;
wr(s->u,0,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803ef149_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803ef149_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ef149_4:;
/* 1803ef151: test rax, rax */
L_1803ef151_0:;
L_1803ef151_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef151_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef151_3:;
wr(s->u,28,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803ef151_4:;
wr(s->r,519,1,(sx(rd(s->u,28,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef151_5:;
wr(s->r,518,1,(rd(s->u,28,8)==((U)UINT64_C(0x0))));
L_1803ef151_6:;
wr(s->u,18,8,(rd(s->u,28,8)&((U)UINT64_C(0xff))));
L_1803ef151_7:;
wr(s->u,26,1,pop(rd(s->u,18,8),8));
L_1803ef151_8:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803ef151_9:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803ef151_10:;
/* 1803ef154: jle 0x1803ef3a2 */
L_1803ef154_0:;
L_1803ef154_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ef154_2:;
wr(s->u,17,1,((rd(s->r,518,1)!=0)||(rd(s->u,16,1)!=0)));
L_1803ef154_3:;
if(rd(s->u,17,1)){return UINT64_C(0x1803ef3a2);}
L_1803ef154_4:;
return UINT64_C(0x1803ef15a);
}
uint64_t b_1803ef143(CPU*s){
/* 1803ef143: cvttss2si eax, xmm1 */
L_1803ef143_0:;
L_1803ef143_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803ef143_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef143_3:;
/* 1803ef147: cdqe  */
L_1803ef147_0:;
L_1803ef147_1:;
wr(s->r,0,8,(U)sx(rd(s->r,0,4),4));
L_1803ef147_2:;
/* 1803ef149: mov qword ptr [rsp + 0xd0], rax */
L_1803ef149_0:;
L_1803ef149_1:;
wr(s->u,0,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803ef149_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803ef149_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ef149_4:;
/* 1803ef151: test rax, rax */
L_1803ef151_0:;
L_1803ef151_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef151_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef151_3:;
wr(s->u,28,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803ef151_4:;
wr(s->r,519,1,(sx(rd(s->u,28,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef151_5:;
wr(s->r,518,1,(rd(s->u,28,8)==((U)UINT64_C(0x0))));
L_1803ef151_6:;
wr(s->u,18,8,(rd(s->u,28,8)&((U)UINT64_C(0xff))));
L_1803ef151_7:;
wr(s->u,26,1,pop(rd(s->u,18,8),8));
L_1803ef151_8:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803ef151_9:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803ef151_10:;
/* 1803ef154: jle 0x1803ef3a2 */
L_1803ef154_0:;
L_1803ef154_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ef154_2:;
wr(s->u,17,1,((rd(s->r,518,1)!=0)||(rd(s->u,16,1)!=0)));
L_1803ef154_3:;
if(rd(s->u,17,1)){return UINT64_C(0x1803ef3a2);}
L_1803ef154_4:;
return UINT64_C(0x1803ef15a);
}
uint64_t b_1803ef15a(CPU*s){
/* 1803ef15a: mov r14, qword ptr [rsp + 0xe0] */
L_1803ef15a_0:;
L_1803ef15a_1:;
wr(s->u,29,8,(((U)UINT64_C(0xe0))+rd(s->r,32,8)));
L_1803ef15a_2:;
wr(s->u,49,8,mr((uint64_t)rd(s->u,29,8),8));
L_1803ef15a_3:;
wr(s->r,176,8,rd(s->u,49,8));
L_1803ef15a_4:;
/* 1803ef162: movsd xmm6, qword ptr [rip + 0x261356] */
L_1803ef162_0:;
L_1803ef162_1:;
wr(s->r,4992,8,mr(UINT64_C(0x1806504c0),8));
L_1803ef162_2:;
wr(s->r,5000,8,((U)UINT64_C(0x0)));
L_1803ef162_3:;
/* 1803ef16a: xor r15d, r15d */
L_1803ef16a_0:;
L_1803ef16a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef16a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef16a_3:;
wr(s->r,184,4,(rd(s->r,184,4)^rd(s->r,184,4)));
L_1803ef16a_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803ef16a_5:;
wr(s->r,519,1,(sx(rd(s->r,184,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef16a_6:;
wr(s->r,518,1,(rd(s->r,184,4)==((U)UINT64_C(0x0))));
L_1803ef16a_7:;
wr(s->u,57,4,(rd(s->r,184,4)&((U)UINT64_C(0xff))));
L_1803ef16a_8:;
wr(s->u,61,1,pop(rd(s->u,57,4),4));
L_1803ef16a_9:;
wr(s->u,62,1,(rd(s->u,61,1)&((U)UINT64_C(0x1))));
L_1803ef16a_10:;
wr(s->r,514,1,(rd(s->u,62,1)==((U)UINT64_C(0x0))));
L_1803ef16a_11:;
/* 1803ef16d: nop dword ptr [rax] */
L_1803ef16d_0:;
L_1803ef16d_1:;
/* 1803ef170: movsxd rcx, dword ptr [r13 + 0x38] */
L_1803ef170_0:;
L_1803ef170_1:;
wr(s->u,5,8,(rd(s->r,168,8)+((U)UINT64_C(0x38))));
L_1803ef170_2:;
wr(s->u,45,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ef170_3:;
wr(s->r,8,8,(U)sx(rd(s->u,45,4),4));
L_1803ef170_4:;
/* 1803ef174: movsd xmm0, qword ptr [r14] */
L_1803ef174_0:;
L_1803ef174_1:;
wr(s->u,37,8,mr((uint64_t)rd(s->r,176,8),8));
L_1803ef174_2:;
wr(s->r,4608,8,rd(s->u,37,8));
L_1803ef174_3:;
wr(s->r,4616,8,((U)UINT64_C(0x0)));
L_1803ef174_4:;
/* 1803ef179: mov ebx, dword ptr [r13 + 0x20] */
L_1803ef179_0:;
L_1803ef179_1:;
wr(s->u,5,8,(rd(s->r,168,8)+((U)UINT64_C(0x20))));
L_1803ef179_2:;
wr(s->u,45,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ef179_3:;
wr(s->r,24,4,rd(s->u,45,4));
L_1803ef179_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803ef179_5:;
/* 1803ef17d: mov r9d, ebx */
L_1803ef17d_0:;
L_1803ef17d_1:;
wr(s->r,136,4,rd(s->r,24,4));
L_1803ef17d_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ef17d_3:;
/* 1803ef180: mulsd xmm0, xmm6 */
L_1803ef180_0:;
L_1803ef180_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4992,8),8),8));
L_1803ef180_2:;
/* 1803ef184: cvttsd2si rbp, xmm0 */
L_1803ef184_0:;
L_1803ef184_1:;
wr(s->r,40,8,ftrunc(fv(rd(s->r,4608,8),8),8));
L_1803ef184_2:;
/* 1803ef189: mov r8d, ebp */
L_1803ef189_0:;
L_1803ef189_1:;
wr(s->r,128,4,rd(s->r,40,4));
L_1803ef189_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef189_3:;
/* 1803ef18c: mov rax, rbp */
L_1803ef18c_0:;
L_1803ef18c_1:;
wr(s->r,0,8,rd(s->r,40,8));
L_1803ef18c_2:;
/* 1803ef18f: sar rax, 0xf */
L_1803ef18f_0:;
L_1803ef18f_1:;
wr(s->u,181,4,(((U)UINT64_C(0xf))&((U)UINT64_C(0x3f))));
L_1803ef18f_2:;
wr(s->u,185,8,rd(s->r,0,8));
L_1803ef18f_3:;
wr(s->r,0,8,((rd(s->u,181,4)>=64)?(sx(rd(s->r,0,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,0,8),8)>>rd(s->u,181,4))));
L_1803ef18f_4:;
wr(s->u,102,1,(rd(s->u,181,4)==((U)UINT64_C(0x0))));
L_1803ef18f_5:;
wr(s->u,103,4,(rd(s->u,181,4)-((U)UINT64_C(0x1))));
L_1803ef18f_6:;
wr(s->u,107,8,((rd(s->u,103,4)>=64)?(sx(rd(s->u,185,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->u,185,8),8)>>rd(s->u,103,4))));
L_1803ef18f_7:;
wr(s->u,115,8,(rd(s->u,107,8)&((U)UINT64_C(0x1))));
L_1803ef18f_8:;
wr(s->u,123,1,(rd(s->u,115,8)!=((U)UINT64_C(0x0))));
L_1803ef18f_9:;
wr(s->u,0,1,rd(s->u,102,1));
L_1803ef18f_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ef18f_11:;
wr(s->u,2,1,(!rd(s->u,102,1)));
L_1803ef18f_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef18f_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,123,1)));
L_1803ef18f_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef18f_15:;
wr(s->u,124,1,(rd(s->u,181,4)==((U)UINT64_C(0x1))));
L_1803ef18f_16:;
wr(s->u,0,1,rd(s->u,124,1));
L_1803ef18f_17:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ef18f_18:;
wr(s->u,2,1,(!rd(s->u,124,1)));
L_1803ef18f_19:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef18f_20:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ef18f_21:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef18f_22:;
wr(s->u,63,1,(rd(s->u,181,4)!=((U)UINT64_C(0x0))));
L_1803ef18f_23:;
wr(s->u,64,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef18f_24:;
wr(s->u,65,1,(!rd(s->u,63,1)));
L_1803ef18f_25:;
wr(s->u,66,1,(rd(s->u,65,1)&rd(s->r,519,1)));
L_1803ef18f_26:;
wr(s->u,67,1,(rd(s->u,63,1)&rd(s->u,64,1)));
L_1803ef18f_27:;
wr(s->r,519,1,(rd(s->u,66,1)|rd(s->u,67,1)));
L_1803ef18f_28:;
wr(s->u,68,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ef18f_29:;
wr(s->u,69,1,(!rd(s->u,63,1)));
L_1803ef18f_30:;
wr(s->u,70,1,(rd(s->u,69,1)&rd(s->r,518,1)));
L_1803ef18f_31:;
wr(s->u,71,1,(rd(s->u,63,1)&rd(s->u,68,1)));
L_1803ef18f_32:;
wr(s->r,518,1,(rd(s->u,70,1)|rd(s->u,71,1)));
L_1803ef18f_33:;
wr(s->u,72,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ef18f_34:;
wr(s->u,80,1,pop(rd(s->u,72,8),8));
L_1803ef18f_35:;
wr(s->u,81,1,(rd(s->u,80,1)&((U)UINT64_C(0x1))));
L_1803ef18f_36:;
wr(s->u,82,1,(rd(s->u,81,1)==((U)UINT64_C(0x0))));
L_1803ef18f_37:;
wr(s->u,83,1,(!rd(s->u,63,1)));
L_1803ef18f_38:;
wr(s->u,84,1,(rd(s->u,83,1)&rd(s->r,514,1)));
L_1803ef18f_39:;
wr(s->u,85,1,(rd(s->u,63,1)&rd(s->u,82,1)));
L_1803ef18f_40:;
wr(s->r,514,1,(rd(s->u,84,1)|rd(s->u,85,1)));
L_1803ef18f_41:;
/* 1803ef193: neg r8d */
L_1803ef193_0:;
L_1803ef193_1:;
wr(s->r,512,1,(rd(s->r,128,4)!=((U)UINT64_C(0x0))));
L_1803ef193_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,128,4),4,1));
L_1803ef193_3:;
wr(s->r,128,4,(-rd(s->r,128,4)));
L_1803ef193_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef193_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ef193_6:;
wr(s->u,57,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ef193_7:;
wr(s->u,61,1,pop(rd(s->u,57,4),4));
L_1803ef193_8:;
wr(s->u,62,1,(rd(s->u,61,1)&((U)UINT64_C(0x1))));
L_1803ef193_9:;
wr(s->r,514,1,(rd(s->u,62,1)==((U)UINT64_C(0x0))));
L_1803ef193_10:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef193_11:;
/* 1803ef196: and r8d, 0x7fff */
L_1803ef196_0:;
L_1803ef196_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef196_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef196_3:;
wr(s->r,128,4,(rd(s->r,128,4)&((U)UINT64_C(0x7fff))));
L_1803ef196_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef196_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef196_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ef196_7:;
wr(s->u,57,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ef196_8:;
wr(s->u,61,1,pop(rd(s->u,57,4),4));
L_1803ef196_9:;
wr(s->u,62,1,(rd(s->u,61,1)&((U)UINT64_C(0x1))));
L_1803ef196_10:;
wr(s->r,514,1,(rd(s->u,62,1)==((U)UINT64_C(0x0))));
L_1803ef196_11:;
/* 1803ef19d: imul rax, rcx */
L_1803ef19d_0:;
L_1803ef19d_1:;
wr(s->u,125,16,(U)sx(rd(s->r,0,8),8));
L_1803ef19d_2:;
wr(s->u,141,16,(U)sx(rd(s->r,8,8),8));
L_1803ef19d_3:;
wr(s->u,157,16,(rd(s->u,125,16)*rd(s->u,141,16)));
L_1803ef19d_4:;
wr(s->r,0,8,(rd(s->r,0,8)*rd(s->r,8,8)));
L_1803ef19d_5:;
wr(s->u,173,8,(rd(s->u,157,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef19d_6:;
wr(s->u,86,16,(U)sx(rd(s->r,0,8),8));
L_1803ef19d_7:;
wr(s->r,512,1,(rd(s->u,86,16)!=rd(s->u,157,16)));
L_1803ef19d_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef19d_9:;
/* 1803ef1a1: lea rdi, [rdx + rax*2] */
L_1803ef1a1_0:;
L_1803ef1a1_1:;
wr(s->u,13,8,(rd(s->r,0,8)*((U)UINT64_C(0x2))));
L_1803ef1a1_2:;
wr(s->u,21,8,(rd(s->r,16,8)+rd(s->u,13,8)));
L_1803ef1a1_3:;
wr(s->r,56,8,rd(s->u,21,8));
L_1803ef1a1_4:;
/* 1803ef1a5: lea rdx, [rdi + rcx*2] */
L_1803ef1a5_0:;
L_1803ef1a5_1:;
wr(s->u,13,8,(rd(s->r,8,8)*((U)UINT64_C(0x2))));
L_1803ef1a5_2:;
wr(s->u,21,8,(rd(s->r,56,8)+rd(s->u,13,8)));
L_1803ef1a5_3:;
wr(s->r,16,8,rd(s->u,21,8));
L_1803ef1a5_4:;
/* 1803ef1a9: mov rcx, r13 */
L_1803ef1a9_0:;
L_1803ef1a9_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803ef1a9_2:;
/* 1803ef1ac: call 0x1803eeec0 */
L_1803ef1ac_0:;
L_1803ef1ac_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef1ac_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef1b1)));
L_1803ef1ac_3:;
return (uint64_t)UINT64_C(0x1803eeec0);
L_1803ef1ac_4:;
return UINT64_C(0x1803ef1b1);
}
uint64_t b_1803ef170(CPU*s){
/* 1803ef170: movsxd rcx, dword ptr [r13 + 0x38] */
L_1803ef170_0:;
L_1803ef170_1:;
wr(s->u,5,8,(rd(s->r,168,8)+((U)UINT64_C(0x38))));
L_1803ef170_2:;
wr(s->u,37,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ef170_3:;
wr(s->r,8,8,(U)sx(rd(s->u,37,4),4));
L_1803ef170_4:;
/* 1803ef174: movsd xmm0, qword ptr [r14] */
L_1803ef174_0:;
L_1803ef174_1:;
wr(s->u,29,8,mr((uint64_t)rd(s->r,176,8),8));
L_1803ef174_2:;
wr(s->r,4608,8,rd(s->u,29,8));
L_1803ef174_3:;
wr(s->r,4616,8,((U)UINT64_C(0x0)));
L_1803ef174_4:;
/* 1803ef179: mov ebx, dword ptr [r13 + 0x20] */
L_1803ef179_0:;
L_1803ef179_1:;
wr(s->u,5,8,(rd(s->r,168,8)+((U)UINT64_C(0x20))));
L_1803ef179_2:;
wr(s->u,37,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ef179_3:;
wr(s->r,24,4,rd(s->u,37,4));
L_1803ef179_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803ef179_5:;
/* 1803ef17d: mov r9d, ebx */
L_1803ef17d_0:;
L_1803ef17d_1:;
wr(s->r,136,4,rd(s->r,24,4));
L_1803ef17d_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ef17d_3:;
/* 1803ef180: mulsd xmm0, xmm6 */
L_1803ef180_0:;
L_1803ef180_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4992,8),8),8));
L_1803ef180_2:;
/* 1803ef184: cvttsd2si rbp, xmm0 */
L_1803ef184_0:;
L_1803ef184_1:;
wr(s->r,40,8,ftrunc(fv(rd(s->r,4608,8),8),8));
L_1803ef184_2:;
/* 1803ef189: mov r8d, ebp */
L_1803ef189_0:;
L_1803ef189_1:;
wr(s->r,128,4,rd(s->r,40,4));
L_1803ef189_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef189_3:;
/* 1803ef18c: mov rax, rbp */
L_1803ef18c_0:;
L_1803ef18c_1:;
wr(s->r,0,8,rd(s->r,40,8));
L_1803ef18c_2:;
/* 1803ef18f: sar rax, 0xf */
L_1803ef18f_0:;
L_1803ef18f_1:;
wr(s->u,165,4,(((U)UINT64_C(0xf))&((U)UINT64_C(0x3f))));
L_1803ef18f_2:;
wr(s->u,169,8,rd(s->r,0,8));
L_1803ef18f_3:;
wr(s->r,0,8,((rd(s->u,165,4)>=64)?(sx(rd(s->r,0,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,0,8),8)>>rd(s->u,165,4))));
L_1803ef18f_4:;
wr(s->u,86,1,(rd(s->u,165,4)==((U)UINT64_C(0x0))));
L_1803ef18f_5:;
wr(s->u,87,4,(rd(s->u,165,4)-((U)UINT64_C(0x1))));
L_1803ef18f_6:;
wr(s->u,91,8,((rd(s->u,87,4)>=64)?(sx(rd(s->u,169,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->u,169,8),8)>>rd(s->u,87,4))));
L_1803ef18f_7:;
wr(s->u,99,8,(rd(s->u,91,8)&((U)UINT64_C(0x1))));
L_1803ef18f_8:;
wr(s->u,107,1,(rd(s->u,99,8)!=((U)UINT64_C(0x0))));
L_1803ef18f_9:;
wr(s->u,0,1,rd(s->u,86,1));
L_1803ef18f_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ef18f_11:;
wr(s->u,2,1,(!rd(s->u,86,1)));
L_1803ef18f_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef18f_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,107,1)));
L_1803ef18f_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef18f_15:;
wr(s->u,108,1,(rd(s->u,165,4)==((U)UINT64_C(0x1))));
L_1803ef18f_16:;
wr(s->u,0,1,rd(s->u,108,1));
L_1803ef18f_17:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ef18f_18:;
wr(s->u,2,1,(!rd(s->u,108,1)));
L_1803ef18f_19:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef18f_20:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ef18f_21:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef18f_22:;
wr(s->u,47,1,(rd(s->u,165,4)!=((U)UINT64_C(0x0))));
L_1803ef18f_23:;
wr(s->u,48,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef18f_24:;
wr(s->u,49,1,(!rd(s->u,47,1)));
L_1803ef18f_25:;
wr(s->u,50,1,(rd(s->u,49,1)&rd(s->r,519,1)));
L_1803ef18f_26:;
wr(s->u,51,1,(rd(s->u,47,1)&rd(s->u,48,1)));
L_1803ef18f_27:;
wr(s->r,519,1,(rd(s->u,50,1)|rd(s->u,51,1)));
L_1803ef18f_28:;
wr(s->u,52,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ef18f_29:;
wr(s->u,53,1,(!rd(s->u,47,1)));
L_1803ef18f_30:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,518,1)));
L_1803ef18f_31:;
wr(s->u,55,1,(rd(s->u,47,1)&rd(s->u,52,1)));
L_1803ef18f_32:;
wr(s->r,518,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1803ef18f_33:;
wr(s->u,56,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ef18f_34:;
wr(s->u,64,1,pop(rd(s->u,56,8),8));
L_1803ef18f_35:;
wr(s->u,65,1,(rd(s->u,64,1)&((U)UINT64_C(0x1))));
L_1803ef18f_36:;
wr(s->u,66,1,(rd(s->u,65,1)==((U)UINT64_C(0x0))));
L_1803ef18f_37:;
wr(s->u,67,1,(!rd(s->u,47,1)));
L_1803ef18f_38:;
wr(s->u,68,1,(rd(s->u,67,1)&rd(s->r,514,1)));
L_1803ef18f_39:;
wr(s->u,69,1,(rd(s->u,47,1)&rd(s->u,66,1)));
L_1803ef18f_40:;
wr(s->r,514,1,(rd(s->u,68,1)|rd(s->u,69,1)));
L_1803ef18f_41:;
/* 1803ef193: neg r8d */
L_1803ef193_0:;
L_1803ef193_1:;
wr(s->r,512,1,(rd(s->r,128,4)!=((U)UINT64_C(0x0))));
L_1803ef193_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,128,4),4,1));
L_1803ef193_3:;
wr(s->r,128,4,(-rd(s->r,128,4)));
L_1803ef193_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef193_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ef193_6:;
wr(s->u,41,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ef193_7:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803ef193_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803ef193_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803ef193_10:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef193_11:;
/* 1803ef196: and r8d, 0x7fff */
L_1803ef196_0:;
L_1803ef196_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef196_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef196_3:;
wr(s->r,128,4,(rd(s->r,128,4)&((U)UINT64_C(0x7fff))));
L_1803ef196_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef196_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef196_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ef196_7:;
wr(s->u,41,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ef196_8:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803ef196_9:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803ef196_10:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803ef196_11:;
/* 1803ef19d: imul rax, rcx */
L_1803ef19d_0:;
L_1803ef19d_1:;
wr(s->u,109,16,(U)sx(rd(s->r,0,8),8));
L_1803ef19d_2:;
wr(s->u,125,16,(U)sx(rd(s->r,8,8),8));
L_1803ef19d_3:;
wr(s->u,141,16,(rd(s->u,109,16)*rd(s->u,125,16)));
L_1803ef19d_4:;
wr(s->r,0,8,(rd(s->r,0,8)*rd(s->r,8,8)));
L_1803ef19d_5:;
wr(s->u,157,8,(rd(s->u,141,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef19d_6:;
wr(s->u,70,16,(U)sx(rd(s->r,0,8),8));
L_1803ef19d_7:;
wr(s->r,512,1,(rd(s->u,70,16)!=rd(s->u,141,16)));
L_1803ef19d_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef19d_9:;
/* 1803ef1a1: lea rdi, [rdx + rax*2] */
L_1803ef1a1_0:;
L_1803ef1a1_1:;
wr(s->u,13,8,(rd(s->r,0,8)*((U)UINT64_C(0x2))));
L_1803ef1a1_2:;
wr(s->u,21,8,(rd(s->r,16,8)+rd(s->u,13,8)));
L_1803ef1a1_3:;
wr(s->r,56,8,rd(s->u,21,8));
L_1803ef1a1_4:;
/* 1803ef1a5: lea rdx, [rdi + rcx*2] */
L_1803ef1a5_0:;
L_1803ef1a5_1:;
wr(s->u,13,8,(rd(s->r,8,8)*((U)UINT64_C(0x2))));
L_1803ef1a5_2:;
wr(s->u,21,8,(rd(s->r,56,8)+rd(s->u,13,8)));
L_1803ef1a5_3:;
wr(s->r,16,8,rd(s->u,21,8));
L_1803ef1a5_4:;
/* 1803ef1a9: mov rcx, r13 */
L_1803ef1a9_0:;
L_1803ef1a9_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803ef1a9_2:;
/* 1803ef1ac: call 0x1803eeec0 */
L_1803ef1ac_0:;
L_1803ef1ac_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef1ac_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef1b1)));
L_1803ef1ac_3:;
return (uint64_t)UINT64_C(0x1803eeec0);
L_1803ef1ac_4:;
return UINT64_C(0x1803ef1b1);
}
uint64_t b_1803ef1b1(CPU*s){
/* 1803ef1b1: and ebp, 0x7fff */
L_1803ef1b1_0:;
L_1803ef1b1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef1b1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef1b1_3:;
wr(s->r,40,4,(rd(s->r,40,4)&((U)UINT64_C(0x7fff))));
L_1803ef1b1_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803ef1b1_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef1b1_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803ef1b1_7:;
wr(s->u,0,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803ef1b1_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803ef1b1_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803ef1b1_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803ef1b1_11:;
/* 1803ef1b7: mov r9d, ebx */
L_1803ef1b7_0:;
L_1803ef1b7_1:;
wr(s->r,136,4,rd(s->r,24,4));
L_1803ef1b7_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ef1b7_3:;
/* 1803ef1ba: mov rdx, rdi */
L_1803ef1ba_0:;
L_1803ef1ba_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803ef1ba_2:;
/* 1803ef1bd: mov rcx, r13 */
L_1803ef1bd_0:;
L_1803ef1bd_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803ef1bd_2:;
/* 1803ef1c0: mov r8d, ebp */
L_1803ef1c0_0:;
L_1803ef1c0_1:;
wr(s->r,128,4,rd(s->r,40,4));
L_1803ef1c0_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef1c0_3:;
/* 1803ef1c3: movsxd rsi, eax */
L_1803ef1c3_0:;
L_1803ef1c3_1:;
wr(s->r,48,8,(U)sx(rd(s->r,0,4),4));
L_1803ef1c3_2:;
/* 1803ef1c6: call 0x1803eef80 */
L_1803ef1c6_0:;
L_1803ef1c6_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef1c6_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef1cb)));
L_1803ef1c6_3:;
return (uint64_t)UINT64_C(0x1803eef80);
L_1803ef1c6_4:;
return UINT64_C(0x1803ef1cb);
}
uint64_t b_1803ef1cb(CPU*s){
/* 1803ef1cb: mov rdx, qword ptr [rsp + 0xc8] */
L_1803ef1cb_0:;
L_1803ef1cb_1:;
wr(s->u,29,8,(((U)UINT64_C(0xc8))+rd(s->r,32,8)));
L_1803ef1cb_2:;
wr(s->u,51,8,mr((uint64_t)rd(s->u,29,8),8));
L_1803ef1cb_3:;
wr(s->r,16,8,rd(s->u,51,8));
L_1803ef1cb_4:;
/* 1803ef1d3: movapd xmm0, xmm8 */
L_1803ef1d3_0:;
L_1803ef1d3_1:;
wr(s->r,4608,8,rd(s->r,5120,8));
L_1803ef1d3_2:;
wr(s->r,4616,8,rd(s->r,5128,8));
L_1803ef1d3_3:;
/* 1803ef1d8: movsxd rcx, eax */
L_1803ef1d8_0:;
L_1803ef1d8_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803ef1d8_2:;
/* 1803ef1db: add r15, 0x64 */
L_1803ef1db_0:;
L_1803ef1db_1:;
wr(s->r,512,1,(((rd(s->r,184,8)+((U)UINT64_C(0x64)))&(((U)1<<64)-1))<rd(s->r,184,8)));
L_1803ef1db_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,8),((U)UINT64_C(0x64)),8,0));
L_1803ef1db_3:;
wr(s->r,184,8,(rd(s->r,184,8)+((U)UINT64_C(0x64))));
L_1803ef1db_4:;
wr(s->r,519,1,(sx(rd(s->r,184,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef1db_5:;
wr(s->r,518,1,(rd(s->r,184,8)==((U)UINT64_C(0x0))));
L_1803ef1db_6:;
wr(s->u,60,8,(rd(s->r,184,8)&((U)UINT64_C(0xff))));
L_1803ef1db_7:;
wr(s->u,68,1,pop(rd(s->u,60,8),8));
L_1803ef1db_8:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803ef1db_9:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803ef1db_10:;
/* 1803ef1df: add rsi, rcx */
L_1803ef1df_0:;
L_1803ef1df_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+rd(s->r,8,8))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803ef1df_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),rd(s->r,8,8),8,0));
L_1803ef1df_3:;
wr(s->r,48,8,(rd(s->r,48,8)+rd(s->r,8,8)));
L_1803ef1df_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef1df_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803ef1df_6:;
wr(s->u,60,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803ef1df_7:;
wr(s->u,68,1,pop(rd(s->u,60,8),8));
L_1803ef1df_8:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803ef1df_9:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803ef1df_10:;
/* 1803ef1e2: sar rsi, 7 */
L_1803ef1e2_0:;
L_1803ef1e2_1:;
wr(s->u,204,4,(((U)UINT64_C(0x7))&((U)UINT64_C(0x3f))));
L_1803ef1e2_2:;
wr(s->u,208,8,rd(s->r,48,8));
L_1803ef1e2_3:;
wr(s->r,48,8,((rd(s->u,204,4)>=64)?(sx(rd(s->r,48,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,48,8),8)>>rd(s->u,204,4))));
L_1803ef1e2_4:;
wr(s->u,109,1,(rd(s->u,204,4)==((U)UINT64_C(0x0))));
L_1803ef1e2_5:;
wr(s->u,110,4,(rd(s->u,204,4)-((U)UINT64_C(0x1))));
L_1803ef1e2_6:;
wr(s->u,114,8,((rd(s->u,110,4)>=64)?(sx(rd(s->u,208,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->u,208,8),8)>>rd(s->u,110,4))));
L_1803ef1e2_7:;
wr(s->u,122,8,(rd(s->u,114,8)&((U)UINT64_C(0x1))));
L_1803ef1e2_8:;
wr(s->u,130,1,(rd(s->u,122,8)!=((U)UINT64_C(0x0))));
L_1803ef1e2_9:;
wr(s->u,0,1,rd(s->u,109,1));
L_1803ef1e2_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ef1e2_11:;
wr(s->u,2,1,(!rd(s->u,109,1)));
L_1803ef1e2_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef1e2_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,130,1)));
L_1803ef1e2_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef1e2_15:;
wr(s->u,131,1,(rd(s->u,204,4)==((U)UINT64_C(0x1))));
L_1803ef1e2_16:;
wr(s->u,0,1,rd(s->u,131,1));
L_1803ef1e2_17:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ef1e2_18:;
wr(s->u,2,1,(!rd(s->u,131,1)));
L_1803ef1e2_19:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef1e2_20:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ef1e2_21:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef1e2_22:;
wr(s->u,70,1,(rd(s->u,204,4)!=((U)UINT64_C(0x0))));
L_1803ef1e2_23:;
wr(s->u,71,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef1e2_24:;
wr(s->u,72,1,(!rd(s->u,70,1)));
L_1803ef1e2_25:;
wr(s->u,73,1,(rd(s->u,72,1)&rd(s->r,519,1)));
L_1803ef1e2_26:;
wr(s->u,74,1,(rd(s->u,70,1)&rd(s->u,71,1)));
L_1803ef1e2_27:;
wr(s->r,519,1,(rd(s->u,73,1)|rd(s->u,74,1)));
L_1803ef1e2_28:;
wr(s->u,75,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803ef1e2_29:;
wr(s->u,76,1,(!rd(s->u,70,1)));
L_1803ef1e2_30:;
wr(s->u,77,1,(rd(s->u,76,1)&rd(s->r,518,1)));
L_1803ef1e2_31:;
wr(s->u,78,1,(rd(s->u,70,1)&rd(s->u,75,1)));
L_1803ef1e2_32:;
wr(s->r,518,1,(rd(s->u,77,1)|rd(s->u,78,1)));
L_1803ef1e2_33:;
wr(s->u,79,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803ef1e2_34:;
wr(s->u,87,1,pop(rd(s->u,79,8),8));
L_1803ef1e2_35:;
wr(s->u,88,1,(rd(s->u,87,1)&((U)UINT64_C(0x1))));
L_1803ef1e2_36:;
wr(s->u,89,1,(rd(s->u,88,1)==((U)UINT64_C(0x0))));
L_1803ef1e2_37:;
wr(s->u,90,1,(!rd(s->u,70,1)));
L_1803ef1e2_38:;
wr(s->u,91,1,(rd(s->u,90,1)&rd(s->r,514,1)));
L_1803ef1e2_39:;
wr(s->u,92,1,(rd(s->u,70,1)&rd(s->u,89,1)));
L_1803ef1e2_40:;
wr(s->r,514,1,(rd(s->u,91,1)|rd(s->u,92,1)));
L_1803ef1e2_41:;
/* 1803ef1e6: imul rsi, qword ptr [rsp + 0xc0] */
L_1803ef1e6_0:;
L_1803ef1e6_1:;
wr(s->u,29,8,(((U)UINT64_C(0xc0))+rd(s->r,32,8)));
L_1803ef1e6_2:;
wr(s->u,148,16,(U)sx(rd(s->r,48,8),8));
L_1803ef1e6_3:;
wr(s->u,51,8,mr((uint64_t)rd(s->u,29,8),8));
L_1803ef1e6_4:;
wr(s->u,164,16,(U)sx(rd(s->u,51,8),8));
L_1803ef1e6_5:;
wr(s->u,180,16,(rd(s->u,148,16)*rd(s->u,164,16)));
L_1803ef1e6_6:;
wr(s->u,51,8,mr((uint64_t)rd(s->u,29,8),8));
L_1803ef1e6_7:;
wr(s->r,48,8,(rd(s->r,48,8)*rd(s->u,51,8)));
L_1803ef1e6_8:;
wr(s->u,196,8,(rd(s->u,180,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef1e6_9:;
wr(s->u,93,16,(U)sx(rd(s->r,48,8),8));
L_1803ef1e6_10:;
wr(s->r,512,1,(rd(s->u,93,16)!=rd(s->u,180,16)));
L_1803ef1e6_11:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef1e6_12:;
/* 1803ef1ef: sar rsi, 0xf */
L_1803ef1ef_0:;
L_1803ef1ef_1:;
wr(s->u,204,4,(((U)UINT64_C(0xf))&((U)UINT64_C(0x3f))));
L_1803ef1ef_2:;
wr(s->u,208,8,rd(s->r,48,8));
L_1803ef1ef_3:;
wr(s->r,48,8,((rd(s->u,204,4)>=64)?(sx(rd(s->r,48,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,48,8),8)>>rd(s->u,204,4))));
L_1803ef1ef_4:;
wr(s->u,109,1,(rd(s->u,204,4)==((U)UINT64_C(0x0))));
L_1803ef1ef_5:;
wr(s->u,110,4,(rd(s->u,204,4)-((U)UINT64_C(0x1))));
L_1803ef1ef_6:;
wr(s->u,114,8,((rd(s->u,110,4)>=64)?(sx(rd(s->u,208,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->u,208,8),8)>>rd(s->u,110,4))));
L_1803ef1ef_7:;
wr(s->u,122,8,(rd(s->u,114,8)&((U)UINT64_C(0x1))));
L_1803ef1ef_8:;
wr(s->u,130,1,(rd(s->u,122,8)!=((U)UINT64_C(0x0))));
L_1803ef1ef_9:;
wr(s->u,0,1,rd(s->u,109,1));
L_1803ef1ef_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ef1ef_11:;
wr(s->u,2,1,(!rd(s->u,109,1)));
L_1803ef1ef_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef1ef_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,130,1)));
L_1803ef1ef_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef1ef_15:;
wr(s->u,131,1,(rd(s->u,204,4)==((U)UINT64_C(0x1))));
L_1803ef1ef_16:;
wr(s->u,0,1,rd(s->u,131,1));
L_1803ef1ef_17:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ef1ef_18:;
wr(s->u,2,1,(!rd(s->u,131,1)));
L_1803ef1ef_19:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef1ef_20:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ef1ef_21:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef1ef_22:;
wr(s->u,70,1,(rd(s->u,204,4)!=((U)UINT64_C(0x0))));
L_1803ef1ef_23:;
wr(s->u,71,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef1ef_24:;
wr(s->u,72,1,(!rd(s->u,70,1)));
L_1803ef1ef_25:;
wr(s->u,73,1,(rd(s->u,72,1)&rd(s->r,519,1)));
L_1803ef1ef_26:;
wr(s->u,74,1,(rd(s->u,70,1)&rd(s->u,71,1)));
L_1803ef1ef_27:;
wr(s->r,519,1,(rd(s->u,73,1)|rd(s->u,74,1)));
L_1803ef1ef_28:;
wr(s->u,75,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803ef1ef_29:;
wr(s->u,76,1,(!rd(s->u,70,1)));
L_1803ef1ef_30:;
wr(s->u,77,1,(rd(s->u,76,1)&rd(s->r,518,1)));
L_1803ef1ef_31:;
wr(s->u,78,1,(rd(s->u,70,1)&rd(s->u,75,1)));
L_1803ef1ef_32:;
wr(s->r,518,1,(rd(s->u,77,1)|rd(s->u,78,1)));
L_1803ef1ef_33:;
wr(s->u,79,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803ef1ef_34:;
wr(s->u,87,1,pop(rd(s->u,79,8),8));
L_1803ef1ef_35:;
wr(s->u,88,1,(rd(s->u,87,1)&((U)UINT64_C(0x1))));
L_1803ef1ef_36:;
wr(s->u,89,1,(rd(s->u,88,1)==((U)UINT64_C(0x0))));
L_1803ef1ef_37:;
wr(s->u,90,1,(!rd(s->u,70,1)));
L_1803ef1ef_38:;
wr(s->u,91,1,(rd(s->u,90,1)&rd(s->r,514,1)));
L_1803ef1ef_39:;
wr(s->u,92,1,(rd(s->u,70,1)&rd(s->u,89,1)));
L_1803ef1ef_40:;
wr(s->r,514,1,(rd(s->u,91,1)|rd(s->u,92,1)));
L_1803ef1ef_41:;
/* 1803ef1f3: cmp r15, qword ptr [rsp + 0xd0] */
L_1803ef1f3_0:;
L_1803ef1f3_1:;
wr(s->u,29,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803ef1f3_2:;
wr(s->u,51,8,mr((uint64_t)rd(s->u,29,8),8));
L_1803ef1f3_3:;
wr(s->u,132,8,rd(s->u,51,8));
L_1803ef1f3_4:;
wr(s->r,512,1,(rd(s->r,184,8)<rd(s->u,132,8)));
L_1803ef1f3_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,8),rd(s->u,132,8),8,1));
L_1803ef1f3_6:;
wr(s->u,140,8,(rd(s->r,184,8)-rd(s->u,132,8)));
L_1803ef1f3_7:;
wr(s->r,519,1,(sx(rd(s->u,140,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef1f3_8:;
wr(s->r,518,1,(rd(s->u,140,8)==((U)UINT64_C(0x0))));
L_1803ef1f3_9:;
wr(s->u,60,8,(rd(s->u,140,8)&((U)UINT64_C(0xff))));
L_1803ef1f3_10:;
wr(s->u,68,1,pop(rd(s->u,60,8),8));
L_1803ef1f3_11:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803ef1f3_12:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803ef1f3_13:;
/* 1803ef1fb: mov word ptr [r12], si */
L_1803ef1fb_0:;
L_1803ef1fb_1:;
wr(s->u,37,2,rd(s->r,48,2));
L_1803ef1fb_2:;
mw((uint64_t)rd(s->r,160,8),2,rd(s->u,37,2));
L_1803ef1fb_3:;
/* 1803ef200: movsxd rax, dword ptr [r13 + 0x38] */
L_1803ef200_0:;
L_1803ef200_1:;
wr(s->u,5,8,(rd(s->r,168,8)+((U)UINT64_C(0x38))));
L_1803ef200_2:;
wr(s->u,47,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ef200_3:;
wr(s->r,0,8,(U)sx(rd(s->u,47,4),4));
L_1803ef200_4:;
/* 1803ef204: addsd xmm0, qword ptr [r14] */
L_1803ef204_0:;
L_1803ef204_1:;
wr(s->u,39,8,mr((uint64_t)rd(s->r,176,8),8));
L_1803ef204_2:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->u,39,8),8),8));
L_1803ef204_3:;
/* 1803ef209: lea r12, [r12 + rax*2] */
L_1803ef209_0:;
L_1803ef209_1:;
wr(s->u,13,8,(rd(s->r,0,8)*((U)UINT64_C(0x2))));
L_1803ef209_2:;
wr(s->u,21,8,(rd(s->r,160,8)+rd(s->u,13,8)));
L_1803ef209_3:;
wr(s->r,160,8,rd(s->u,21,8));
L_1803ef209_4:;
/* 1803ef20d: movsd qword ptr [r14], xmm0 */
L_1803ef20d_0:;
L_1803ef20d_1:;
wr(s->u,39,8,rd(s->r,4608,8));
L_1803ef20d_2:;
mw((uint64_t)rd(s->r,176,8),8,rd(s->u,39,8));
L_1803ef20d_3:;
/* 1803ef212: jl 0x1803ef170 */
L_1803ef212_0:;
L_1803ef212_1:;
wr(s->u,59,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ef212_2:;
if(rd(s->u,59,1)){return UINT64_C(0x1803ef170);}
L_1803ef212_3:;
return UINT64_C(0x1803ef218);
}
uint64_t b_1803ef218(CPU*s){
/* 1803ef218: jmp 0x1803ef3a2 */
L_1803ef218_0:;
L_1803ef218_1:;
return UINT64_C(0x1803ef3a2);
L_1803ef218_2:;
return UINT64_C(0x1803ef21d);
}
uint64_t b_1803ef21d(CPU*s){
/* 1803ef21d: mov r14d, dword ptr [rsp + 0xe8] */
L_1803ef21d_0:;
L_1803ef21d_1:;
wr(s->u,8,8,(((U)UINT64_C(0xe8))+rd(s->r,32,8)));
L_1803ef21d_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ef21d_3:;
wr(s->r,176,4,rd(s->u,32,4));
L_1803ef21d_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803ef21d_5:;
/* 1803ef225: xor r15d, r15d */
L_1803ef225_0:;
L_1803ef225_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef225_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef225_3:;
wr(s->r,184,4,(rd(s->r,184,4)^rd(s->r,184,4)));
L_1803ef225_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803ef225_5:;
wr(s->r,519,1,(sx(rd(s->r,184,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef225_6:;
wr(s->r,518,1,(rd(s->r,184,4)==((U)UINT64_C(0x0))));
L_1803ef225_7:;
wr(s->u,36,4,(rd(s->r,184,4)&((U)UINT64_C(0xff))));
L_1803ef225_8:;
wr(s->u,40,1,pop(rd(s->u,36,4),4));
L_1803ef225_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ef225_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ef225_11:;
/* 1803ef228: pxor xmm0, xmm0 */
L_1803ef228_0:;
L_1803ef228_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803ef228_2:;
/* 1803ef22c: cvtsi2ss xmm0, r15 */
L_1803ef22c_0:;
L_1803ef22c_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,184,8),8),4));
L_1803ef22c_2:;
/* 1803ef231: movaps xmm1, xmm6 */
L_1803ef231_0:;
L_1803ef231_1:;
wr(s->r,4672,4,rd(s->r,4992,4));
L_1803ef231_2:;
wr(s->r,4676,4,rd(s->r,4996,4));
L_1803ef231_3:;
wr(s->r,4680,4,rd(s->r,5000,4));
L_1803ef231_4:;
wr(s->r,4684,4,rd(s->r,5004,4));
L_1803ef231_5:;
/* 1803ef234: movaps xmmword ptr [rsp + 0x40], xmm9 */
L_1803ef234_0:;
L_1803ef234_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ef234_2:;
wr(s->u,16,16,rd(s->r,5184,16));
L_1803ef234_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,16,16));
L_1803ef234_4:;
/* 1803ef23a: imul r14d, r14d, 0x64 */
L_1803ef23a_0:;
L_1803ef23a_1:;
wr(s->u,58,8,(U)sx(rd(s->r,176,4),4));
L_1803ef23a_2:;
wr(s->u,66,8,(U)sx(((U)UINT64_C(0x64)),4));
L_1803ef23a_3:;
wr(s->u,74,8,(rd(s->u,58,8)*rd(s->u,66,8)));
L_1803ef23a_4:;
wr(s->r,176,4,(rd(s->u,74,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef23a_5:;
wr(s->u,82,4,(rd(s->u,74,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ef23a_6:;
wr(s->u,42,8,(U)sx(rd(s->r,176,4),4));
L_1803ef23a_7:;
wr(s->r,512,1,(rd(s->u,42,8)!=rd(s->u,74,8)));
L_1803ef23a_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef23a_9:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803ef23a_10:;
/* 1803ef23e: movss xmm9, dword ptr [rip + 0x275e31] */
L_1803ef23e_0:;
L_1803ef23e_1:;
wr(s->r,5184,4,mr(UINT64_C(0x180665078),4));
L_1803ef23e_2:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ef23e_3:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ef23e_4:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ef23e_5:;
/* 1803ef247: mulss xmm1, xmm0 */
L_1803ef247_0:;
L_1803ef247_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803ef247_2:;
/* 1803ef24b: mulss xmm1, xmm9 */
L_1803ef24b_0:;
L_1803ef24b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,5184,4),4),4));
L_1803ef24b_2:;
/* 1803ef250: addss xmm1, xmm7 */
L_1803ef250_0:;
L_1803ef250_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ef250_2:;
/* 1803ef254: cvttss2si ecx, xmm1 */
L_1803ef254_0:;
L_1803ef254_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803ef254_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef254_3:;
/* 1803ef258: cmp ecx, 0x80000000 */
L_1803ef258_0:;
L_1803ef258_1:;
wr(s->u,50,4,rd(s->r,8,4));
L_1803ef258_2:;
wr(s->r,512,1,(rd(s->u,50,4)<((U)UINT64_C(0x80000000))));
L_1803ef258_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,50,4),((U)UINT64_C(0x80000000)),4,1));
L_1803ef258_4:;
wr(s->u,54,4,(rd(s->u,50,4)-((U)UINT64_C(0x80000000))));
L_1803ef258_5:;
wr(s->r,519,1,(sx(rd(s->u,54,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef258_6:;
wr(s->r,518,1,(rd(s->u,54,4)==((U)UINT64_C(0x0))));
L_1803ef258_7:;
wr(s->u,36,4,(rd(s->u,54,4)&((U)UINT64_C(0xff))));
L_1803ef258_8:;
wr(s->u,40,1,pop(rd(s->u,36,4),4));
L_1803ef258_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ef258_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ef258_11:;
/* 1803ef25e: je 0x1803ef280 */
L_1803ef25e_0:;
L_1803ef25e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ef280);}
L_1803ef25e_2:;
return UINT64_C(0x1803ef260);
}
uint64_t b_1803ef234(CPU*s){
/* 1803ef234: movaps xmmword ptr [rsp + 0x40], xmm9 */
L_1803ef234_0:;
L_1803ef234_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ef234_2:;
wr(s->u,8,16,rd(s->r,5184,16));
L_1803ef234_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,8,16));
L_1803ef234_4:;
/* 1803ef23a: imul r14d, r14d, 0x64 */
L_1803ef23a_0:;
L_1803ef23a_1:;
wr(s->u,46,8,(U)sx(rd(s->r,176,4),4));
L_1803ef23a_2:;
wr(s->u,54,8,(U)sx(((U)UINT64_C(0x64)),4));
L_1803ef23a_3:;
wr(s->u,62,8,(rd(s->u,46,8)*rd(s->u,54,8)));
L_1803ef23a_4:;
wr(s->r,176,4,(rd(s->u,62,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef23a_5:;
wr(s->u,70,4,(rd(s->u,62,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ef23a_6:;
wr(s->u,30,8,(U)sx(rd(s->r,176,4),4));
L_1803ef23a_7:;
wr(s->r,512,1,(rd(s->u,30,8)!=rd(s->u,62,8)));
L_1803ef23a_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef23a_9:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803ef23a_10:;
/* 1803ef23e: movss xmm9, dword ptr [rip + 0x275e31] */
L_1803ef23e_0:;
L_1803ef23e_1:;
wr(s->r,5184,4,mr(UINT64_C(0x180665078),4));
L_1803ef23e_2:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803ef23e_3:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803ef23e_4:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803ef23e_5:;
/* 1803ef247: mulss xmm1, xmm0 */
L_1803ef247_0:;
L_1803ef247_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803ef247_2:;
/* 1803ef24b: mulss xmm1, xmm9 */
L_1803ef24b_0:;
L_1803ef24b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,5184,4),4),4));
L_1803ef24b_2:;
/* 1803ef250: addss xmm1, xmm7 */
L_1803ef250_0:;
L_1803ef250_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ef250_2:;
/* 1803ef254: cvttss2si ecx, xmm1 */
L_1803ef254_0:;
L_1803ef254_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803ef254_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef254_3:;
/* 1803ef258: cmp ecx, 0x80000000 */
L_1803ef258_0:;
L_1803ef258_1:;
wr(s->u,38,4,rd(s->r,8,4));
L_1803ef258_2:;
wr(s->r,512,1,(rd(s->u,38,4)<((U)UINT64_C(0x80000000))));
L_1803ef258_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,38,4),((U)UINT64_C(0x80000000)),4,1));
L_1803ef258_4:;
wr(s->u,42,4,(rd(s->u,38,4)-((U)UINT64_C(0x80000000))));
L_1803ef258_5:;
wr(s->r,519,1,(sx(rd(s->u,42,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef258_6:;
wr(s->r,518,1,(rd(s->u,42,4)==((U)UINT64_C(0x0))));
L_1803ef258_7:;
wr(s->u,24,4,(rd(s->u,42,4)&((U)UINT64_C(0xff))));
L_1803ef258_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803ef258_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803ef258_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803ef258_11:;
/* 1803ef25e: je 0x1803ef280 */
L_1803ef25e_0:;
L_1803ef25e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ef280);}
L_1803ef25e_2:;
return UINT64_C(0x1803ef260);
}
uint64_t b_1803ef260(CPU*s){
/* 1803ef260: pxor xmm0, xmm0 */
L_1803ef260_0:;
L_1803ef260_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803ef260_2:;
/* 1803ef264: cvtsi2ss xmm0, ecx */
L_1803ef264_0:;
L_1803ef264_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803ef264_2:;
/* 1803ef268: ucomiss xmm0, xmm1 */
L_1803ef268_0:;
L_1803ef268_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803ef268_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803ef268_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803ef268_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803ef268_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803ef268_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803ef268_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ef268_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef268_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ef268_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ef268_11:;
/* 1803ef26b: je 0x1803ef280 */
L_1803ef26b_0:;
L_1803ef26b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ef280);}
L_1803ef26b_2:;
return UINT64_C(0x1803ef26d);
}
uint64_t b_1803ef26d(CPU*s){
/* 1803ef26d: unpcklps xmm1, xmm1 */
L_1803ef26d_0:;
L_1803ef26d_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803ef26d_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803ef26d_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803ef26d_4:;
/* 1803ef270: movmskps eax, xmm1 */
L_1803ef270_0:;
L_1803ef270_1:;
wr(s->r,0,4,(((rd(s->r,4672,16)>>31)&1)<<0)|(((rd(s->r,4672,16)>>63)&1)<<1)|(((rd(s->r,4672,16)>>95)&1)<<2)|(((rd(s->r,4672,16)>>127)&1)<<3));
L_1803ef270_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef270_3:;
/* 1803ef273: pxor xmm1, xmm1 */
L_1803ef273_0:;
L_1803ef273_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803ef273_2:;
/* 1803ef277: and eax, 1 */
L_1803ef277_0:;
L_1803ef277_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef277_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef277_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803ef277_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef277_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef277_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ef277_7:;
wr(s->u,1,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ef277_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803ef277_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803ef277_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803ef277_11:;
/* 1803ef27a: sub ecx, eax */
L_1803ef27a_0:;
L_1803ef27a_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,0,4)));
L_1803ef27a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,1));
L_1803ef27a_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,0,4)));
L_1803ef27a_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef27a_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef27a_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ef27a_7:;
wr(s->u,1,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ef27a_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803ef27a_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803ef27a_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803ef27a_11:;
/* 1803ef27c: cvtsi2ss xmm1, ecx */
L_1803ef27c_0:;
L_1803ef27c_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803ef27c_2:;
/* 1803ef280: cvttss2si eax, xmm1 */
L_1803ef280_0:;
L_1803ef280_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803ef280_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef280_3:;
/* 1803ef284: cmp eax, r14d */
L_1803ef284_0:;
L_1803ef284_1:;
wr(s->u,7,4,rd(s->r,176,4));
L_1803ef284_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,7,4)));
L_1803ef284_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,7,4),4,1));
L_1803ef284_4:;
wr(s->u,11,4,(rd(s->r,0,4)-rd(s->u,7,4)));
L_1803ef284_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef284_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803ef284_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803ef284_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803ef284_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803ef284_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803ef284_11:;
/* 1803ef287: jge 0x1803ef39c */
L_1803ef287_0:;
L_1803ef287_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803ef287_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ef39c);}
L_1803ef287_3:;
return UINT64_C(0x1803ef28d);
}
uint64_t b_1803ef280(CPU*s){
/* 1803ef280: cvttss2si eax, xmm1 */
L_1803ef280_0:;
L_1803ef280_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803ef280_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef280_3:;
/* 1803ef284: cmp eax, r14d */
L_1803ef284_0:;
L_1803ef284_1:;
wr(s->u,7,4,rd(s->r,176,4));
L_1803ef284_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,7,4)));
L_1803ef284_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,7,4),4,1));
L_1803ef284_4:;
wr(s->u,11,4,(rd(s->r,0,4)-rd(s->u,7,4)));
L_1803ef284_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef284_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803ef284_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803ef284_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803ef284_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803ef284_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803ef284_11:;
/* 1803ef287: jge 0x1803ef39c */
L_1803ef287_0:;
L_1803ef287_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803ef287_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ef39c);}
L_1803ef287_3:;
return UINT64_C(0x1803ef28d);
}
uint64_t b_1803ef28d(CPU*s){
/* 1803ef28d: movaps xmmword ptr [rsp + 0x30], xmm10 */
L_1803ef28d_0:;
L_1803ef28d_1:;
wr(s->u,29,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ef28d_2:;
wr(s->u,53,16,rd(s->r,5248,16));
L_1803ef28d_3:;
mw((uint64_t)rd(s->u,29,8),16,rd(s->u,53,16));
L_1803ef28d_4:;
/* 1803ef293: movsd xmm10, qword ptr [rip + 0x261224] */
L_1803ef293_0:;
L_1803ef293_1:;
wr(s->r,5248,8,mr(UINT64_C(0x1806504c0),8));
L_1803ef293_2:;
wr(s->r,5256,8,((U)UINT64_C(0x0)));
L_1803ef293_3:;
/* 1803ef29c: nop dword ptr [rax] */
L_1803ef29c_0:;
L_1803ef29c_1:;
/* 1803ef2a0: movsxd rcx, dword ptr [r13 + 0x38] */
L_1803ef2a0_0:;
L_1803ef2a0_1:;
wr(s->u,5,8,(rd(s->r,168,8)+((U)UINT64_C(0x38))));
L_1803ef2a0_2:;
wr(s->u,69,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ef2a0_3:;
wr(s->r,8,8,(U)sx(rd(s->u,69,4),4));
L_1803ef2a0_4:;
/* 1803ef2a4: mov rax, qword ptr [rsp + 0xe0] */
L_1803ef2a4_0:;
L_1803ef2a4_1:;
wr(s->u,37,8,(((U)UINT64_C(0xe0))+rd(s->r,32,8)));
L_1803ef2a4_2:;
wr(s->u,73,8,mr((uint64_t)rd(s->u,37,8),8));
L_1803ef2a4_3:;
wr(s->r,0,8,rd(s->u,73,8));
L_1803ef2a4_4:;
/* 1803ef2ac: mov ebx, dword ptr [r13 + 0x20] */
L_1803ef2ac_0:;
L_1803ef2ac_1:;
wr(s->u,5,8,(rd(s->r,168,8)+((U)UINT64_C(0x20))));
L_1803ef2ac_2:;
wr(s->u,69,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ef2ac_3:;
wr(s->r,24,4,rd(s->u,69,4));
L_1803ef2ac_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803ef2ac_5:;
/* 1803ef2b0: movsd xmm0, qword ptr [rax] */
L_1803ef2b0_0:;
L_1803ef2b0_1:;
wr(s->u,45,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803ef2b0_2:;
wr(s->r,4608,8,rd(s->u,45,8));
L_1803ef2b0_3:;
wr(s->r,4616,8,((U)UINT64_C(0x0)));
L_1803ef2b0_4:;
/* 1803ef2b4: mov r9d, ebx */
L_1803ef2b4_0:;
L_1803ef2b4_1:;
wr(s->r,136,4,rd(s->r,24,4));
L_1803ef2b4_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ef2b4_3:;
/* 1803ef2b7: mulsd xmm0, xmm10 */
L_1803ef2b7_0:;
L_1803ef2b7_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,5248,8),8),8));
L_1803ef2b7_2:;
/* 1803ef2bc: cvttsd2si rbp, xmm0 */
L_1803ef2bc_0:;
L_1803ef2bc_1:;
wr(s->r,40,8,ftrunc(fv(rd(s->r,4608,8),8),8));
L_1803ef2bc_2:;
/* 1803ef2c1: mov r8d, ebp */
L_1803ef2c1_0:;
L_1803ef2c1_1:;
wr(s->r,128,4,rd(s->r,40,4));
L_1803ef2c1_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef2c1_3:;
/* 1803ef2c4: mov rax, rbp */
L_1803ef2c4_0:;
L_1803ef2c4_1:;
wr(s->r,0,8,rd(s->r,40,8));
L_1803ef2c4_2:;
/* 1803ef2c7: sar rax, 0xf */
L_1803ef2c7_0:;
L_1803ef2c7_1:;
wr(s->u,205,4,(((U)UINT64_C(0xf))&((U)UINT64_C(0x3f))));
L_1803ef2c7_2:;
wr(s->u,209,8,rd(s->r,0,8));
L_1803ef2c7_3:;
wr(s->r,0,8,((rd(s->u,205,4)>=64)?(sx(rd(s->r,0,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,0,8),8)>>rd(s->u,205,4))));
L_1803ef2c7_4:;
wr(s->u,126,1,(rd(s->u,205,4)==((U)UINT64_C(0x0))));
L_1803ef2c7_5:;
wr(s->u,127,4,(rd(s->u,205,4)-((U)UINT64_C(0x1))));
L_1803ef2c7_6:;
wr(s->u,131,8,((rd(s->u,127,4)>=64)?(sx(rd(s->u,209,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->u,209,8),8)>>rd(s->u,127,4))));
L_1803ef2c7_7:;
wr(s->u,139,8,(rd(s->u,131,8)&((U)UINT64_C(0x1))));
L_1803ef2c7_8:;
wr(s->u,147,1,(rd(s->u,139,8)!=((U)UINT64_C(0x0))));
L_1803ef2c7_9:;
wr(s->u,0,1,rd(s->u,126,1));
L_1803ef2c7_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ef2c7_11:;
wr(s->u,2,1,(!rd(s->u,126,1)));
L_1803ef2c7_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef2c7_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,147,1)));
L_1803ef2c7_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef2c7_15:;
wr(s->u,148,1,(rd(s->u,205,4)==((U)UINT64_C(0x1))));
L_1803ef2c7_16:;
wr(s->u,0,1,rd(s->u,148,1));
L_1803ef2c7_17:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ef2c7_18:;
wr(s->u,2,1,(!rd(s->u,148,1)));
L_1803ef2c7_19:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef2c7_20:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ef2c7_21:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef2c7_22:;
wr(s->u,87,1,(rd(s->u,205,4)!=((U)UINT64_C(0x0))));
L_1803ef2c7_23:;
wr(s->u,88,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef2c7_24:;
wr(s->u,89,1,(!rd(s->u,87,1)));
L_1803ef2c7_25:;
wr(s->u,90,1,(rd(s->u,89,1)&rd(s->r,519,1)));
L_1803ef2c7_26:;
wr(s->u,91,1,(rd(s->u,87,1)&rd(s->u,88,1)));
L_1803ef2c7_27:;
wr(s->r,519,1,(rd(s->u,90,1)|rd(s->u,91,1)));
L_1803ef2c7_28:;
wr(s->u,92,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ef2c7_29:;
wr(s->u,93,1,(!rd(s->u,87,1)));
L_1803ef2c7_30:;
wr(s->u,94,1,(rd(s->u,93,1)&rd(s->r,518,1)));
L_1803ef2c7_31:;
wr(s->u,95,1,(rd(s->u,87,1)&rd(s->u,92,1)));
L_1803ef2c7_32:;
wr(s->r,518,1,(rd(s->u,94,1)|rd(s->u,95,1)));
L_1803ef2c7_33:;
wr(s->u,96,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ef2c7_34:;
wr(s->u,104,1,pop(rd(s->u,96,8),8));
L_1803ef2c7_35:;
wr(s->u,105,1,(rd(s->u,104,1)&((U)UINT64_C(0x1))));
L_1803ef2c7_36:;
wr(s->u,106,1,(rd(s->u,105,1)==((U)UINT64_C(0x0))));
L_1803ef2c7_37:;
wr(s->u,107,1,(!rd(s->u,87,1)));
L_1803ef2c7_38:;
wr(s->u,108,1,(rd(s->u,107,1)&rd(s->r,514,1)));
L_1803ef2c7_39:;
wr(s->u,109,1,(rd(s->u,87,1)&rd(s->u,106,1)));
L_1803ef2c7_40:;
wr(s->r,514,1,(rd(s->u,108,1)|rd(s->u,109,1)));
L_1803ef2c7_41:;
/* 1803ef2cb: neg r8d */
L_1803ef2cb_0:;
L_1803ef2cb_1:;
wr(s->r,512,1,(rd(s->r,128,4)!=((U)UINT64_C(0x0))));
L_1803ef2cb_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,128,4),4,1));
L_1803ef2cb_3:;
wr(s->r,128,4,(-rd(s->r,128,4)));
L_1803ef2cb_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef2cb_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ef2cb_6:;
wr(s->u,81,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ef2cb_7:;
wr(s->u,85,1,pop(rd(s->u,81,4),4));
L_1803ef2cb_8:;
wr(s->u,86,1,(rd(s->u,85,1)&((U)UINT64_C(0x1))));
L_1803ef2cb_9:;
wr(s->r,514,1,(rd(s->u,86,1)==((U)UINT64_C(0x0))));
L_1803ef2cb_10:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef2cb_11:;
/* 1803ef2ce: and r8d, 0x7fff */
L_1803ef2ce_0:;
L_1803ef2ce_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef2ce_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef2ce_3:;
wr(s->r,128,4,(rd(s->r,128,4)&((U)UINT64_C(0x7fff))));
L_1803ef2ce_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef2ce_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef2ce_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ef2ce_7:;
wr(s->u,81,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ef2ce_8:;
wr(s->u,85,1,pop(rd(s->u,81,4),4));
L_1803ef2ce_9:;
wr(s->u,86,1,(rd(s->u,85,1)&((U)UINT64_C(0x1))));
L_1803ef2ce_10:;
wr(s->r,514,1,(rd(s->u,86,1)==((U)UINT64_C(0x0))));
L_1803ef2ce_11:;
/* 1803ef2d5: imul rax, rcx */
L_1803ef2d5_0:;
L_1803ef2d5_1:;
wr(s->u,149,16,(U)sx(rd(s->r,0,8),8));
L_1803ef2d5_2:;
wr(s->u,165,16,(U)sx(rd(s->r,8,8),8));
L_1803ef2d5_3:;
wr(s->u,181,16,(rd(s->u,149,16)*rd(s->u,165,16)));
L_1803ef2d5_4:;
wr(s->r,0,8,(rd(s->r,0,8)*rd(s->r,8,8)));
L_1803ef2d5_5:;
wr(s->u,197,8,(rd(s->u,181,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef2d5_6:;
wr(s->u,110,16,(U)sx(rd(s->r,0,8),8));
L_1803ef2d5_7:;
wr(s->r,512,1,(rd(s->u,110,16)!=rd(s->u,181,16)));
L_1803ef2d5_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef2d5_9:;
/* 1803ef2d9: lea rdi, [rdx + rax*2] */
L_1803ef2d9_0:;
L_1803ef2d9_1:;
wr(s->u,13,8,(rd(s->r,0,8)*((U)UINT64_C(0x2))));
L_1803ef2d9_2:;
wr(s->u,21,8,(rd(s->r,16,8)+rd(s->u,13,8)));
L_1803ef2d9_3:;
wr(s->r,56,8,rd(s->u,21,8));
L_1803ef2d9_4:;
/* 1803ef2dd: lea rdx, [rdi + rcx*2] */
L_1803ef2dd_0:;
L_1803ef2dd_1:;
wr(s->u,13,8,(rd(s->r,8,8)*((U)UINT64_C(0x2))));
L_1803ef2dd_2:;
wr(s->u,21,8,(rd(s->r,56,8)+rd(s->u,13,8)));
L_1803ef2dd_3:;
wr(s->r,16,8,rd(s->u,21,8));
L_1803ef2dd_4:;
/* 1803ef2e1: mov rcx, r13 */
L_1803ef2e1_0:;
L_1803ef2e1_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803ef2e1_2:;
/* 1803ef2e4: call 0x1803eeec0 */
L_1803ef2e4_0:;
L_1803ef2e4_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef2e4_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef2e9)));
L_1803ef2e4_3:;
return (uint64_t)UINT64_C(0x1803eeec0);
L_1803ef2e4_4:;
return UINT64_C(0x1803ef2e9);
}
uint64_t b_1803ef2a0(CPU*s){
/* 1803ef2a0: movsxd rcx, dword ptr [r13 + 0x38] */
L_1803ef2a0_0:;
L_1803ef2a0_1:;
wr(s->u,5,8,(rd(s->r,168,8)+((U)UINT64_C(0x38))));
L_1803ef2a0_2:;
wr(s->u,45,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ef2a0_3:;
wr(s->r,8,8,(U)sx(rd(s->u,45,4),4));
L_1803ef2a0_4:;
/* 1803ef2a4: mov rax, qword ptr [rsp + 0xe0] */
L_1803ef2a4_0:;
L_1803ef2a4_1:;
wr(s->u,29,8,(((U)UINT64_C(0xe0))+rd(s->r,32,8)));
L_1803ef2a4_2:;
wr(s->u,49,8,mr((uint64_t)rd(s->u,29,8),8));
L_1803ef2a4_3:;
wr(s->r,0,8,rd(s->u,49,8));
L_1803ef2a4_4:;
/* 1803ef2ac: mov ebx, dword ptr [r13 + 0x20] */
L_1803ef2ac_0:;
L_1803ef2ac_1:;
wr(s->u,5,8,(rd(s->r,168,8)+((U)UINT64_C(0x20))));
L_1803ef2ac_2:;
wr(s->u,45,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ef2ac_3:;
wr(s->r,24,4,rd(s->u,45,4));
L_1803ef2ac_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803ef2ac_5:;
/* 1803ef2b0: movsd xmm0, qword ptr [rax] */
L_1803ef2b0_0:;
L_1803ef2b0_1:;
wr(s->u,37,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803ef2b0_2:;
wr(s->r,4608,8,rd(s->u,37,8));
L_1803ef2b0_3:;
wr(s->r,4616,8,((U)UINT64_C(0x0)));
L_1803ef2b0_4:;
/* 1803ef2b4: mov r9d, ebx */
L_1803ef2b4_0:;
L_1803ef2b4_1:;
wr(s->r,136,4,rd(s->r,24,4));
L_1803ef2b4_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ef2b4_3:;
/* 1803ef2b7: mulsd xmm0, xmm10 */
L_1803ef2b7_0:;
L_1803ef2b7_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,5248,8),8),8));
L_1803ef2b7_2:;
/* 1803ef2bc: cvttsd2si rbp, xmm0 */
L_1803ef2bc_0:;
L_1803ef2bc_1:;
wr(s->r,40,8,ftrunc(fv(rd(s->r,4608,8),8),8));
L_1803ef2bc_2:;
/* 1803ef2c1: mov r8d, ebp */
L_1803ef2c1_0:;
L_1803ef2c1_1:;
wr(s->r,128,4,rd(s->r,40,4));
L_1803ef2c1_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef2c1_3:;
/* 1803ef2c4: mov rax, rbp */
L_1803ef2c4_0:;
L_1803ef2c4_1:;
wr(s->r,0,8,rd(s->r,40,8));
L_1803ef2c4_2:;
/* 1803ef2c7: sar rax, 0xf */
L_1803ef2c7_0:;
L_1803ef2c7_1:;
wr(s->u,181,4,(((U)UINT64_C(0xf))&((U)UINT64_C(0x3f))));
L_1803ef2c7_2:;
wr(s->u,185,8,rd(s->r,0,8));
L_1803ef2c7_3:;
wr(s->r,0,8,((rd(s->u,181,4)>=64)?(sx(rd(s->r,0,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,0,8),8)>>rd(s->u,181,4))));
L_1803ef2c7_4:;
wr(s->u,102,1,(rd(s->u,181,4)==((U)UINT64_C(0x0))));
L_1803ef2c7_5:;
wr(s->u,103,4,(rd(s->u,181,4)-((U)UINT64_C(0x1))));
L_1803ef2c7_6:;
wr(s->u,107,8,((rd(s->u,103,4)>=64)?(sx(rd(s->u,185,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->u,185,8),8)>>rd(s->u,103,4))));
L_1803ef2c7_7:;
wr(s->u,115,8,(rd(s->u,107,8)&((U)UINT64_C(0x1))));
L_1803ef2c7_8:;
wr(s->u,123,1,(rd(s->u,115,8)!=((U)UINT64_C(0x0))));
L_1803ef2c7_9:;
wr(s->u,0,1,rd(s->u,102,1));
L_1803ef2c7_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ef2c7_11:;
wr(s->u,2,1,(!rd(s->u,102,1)));
L_1803ef2c7_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef2c7_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,123,1)));
L_1803ef2c7_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef2c7_15:;
wr(s->u,124,1,(rd(s->u,181,4)==((U)UINT64_C(0x1))));
L_1803ef2c7_16:;
wr(s->u,0,1,rd(s->u,124,1));
L_1803ef2c7_17:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ef2c7_18:;
wr(s->u,2,1,(!rd(s->u,124,1)));
L_1803ef2c7_19:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef2c7_20:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ef2c7_21:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef2c7_22:;
wr(s->u,63,1,(rd(s->u,181,4)!=((U)UINT64_C(0x0))));
L_1803ef2c7_23:;
wr(s->u,64,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef2c7_24:;
wr(s->u,65,1,(!rd(s->u,63,1)));
L_1803ef2c7_25:;
wr(s->u,66,1,(rd(s->u,65,1)&rd(s->r,519,1)));
L_1803ef2c7_26:;
wr(s->u,67,1,(rd(s->u,63,1)&rd(s->u,64,1)));
L_1803ef2c7_27:;
wr(s->r,519,1,(rd(s->u,66,1)|rd(s->u,67,1)));
L_1803ef2c7_28:;
wr(s->u,68,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ef2c7_29:;
wr(s->u,69,1,(!rd(s->u,63,1)));
L_1803ef2c7_30:;
wr(s->u,70,1,(rd(s->u,69,1)&rd(s->r,518,1)));
L_1803ef2c7_31:;
wr(s->u,71,1,(rd(s->u,63,1)&rd(s->u,68,1)));
L_1803ef2c7_32:;
wr(s->r,518,1,(rd(s->u,70,1)|rd(s->u,71,1)));
L_1803ef2c7_33:;
wr(s->u,72,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ef2c7_34:;
wr(s->u,80,1,pop(rd(s->u,72,8),8));
L_1803ef2c7_35:;
wr(s->u,81,1,(rd(s->u,80,1)&((U)UINT64_C(0x1))));
L_1803ef2c7_36:;
wr(s->u,82,1,(rd(s->u,81,1)==((U)UINT64_C(0x0))));
L_1803ef2c7_37:;
wr(s->u,83,1,(!rd(s->u,63,1)));
L_1803ef2c7_38:;
wr(s->u,84,1,(rd(s->u,83,1)&rd(s->r,514,1)));
L_1803ef2c7_39:;
wr(s->u,85,1,(rd(s->u,63,1)&rd(s->u,82,1)));
L_1803ef2c7_40:;
wr(s->r,514,1,(rd(s->u,84,1)|rd(s->u,85,1)));
L_1803ef2c7_41:;
/* 1803ef2cb: neg r8d */
L_1803ef2cb_0:;
L_1803ef2cb_1:;
wr(s->r,512,1,(rd(s->r,128,4)!=((U)UINT64_C(0x0))));
L_1803ef2cb_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,128,4),4,1));
L_1803ef2cb_3:;
wr(s->r,128,4,(-rd(s->r,128,4)));
L_1803ef2cb_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef2cb_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ef2cb_6:;
wr(s->u,57,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ef2cb_7:;
wr(s->u,61,1,pop(rd(s->u,57,4),4));
L_1803ef2cb_8:;
wr(s->u,62,1,(rd(s->u,61,1)&((U)UINT64_C(0x1))));
L_1803ef2cb_9:;
wr(s->r,514,1,(rd(s->u,62,1)==((U)UINT64_C(0x0))));
L_1803ef2cb_10:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef2cb_11:;
/* 1803ef2ce: and r8d, 0x7fff */
L_1803ef2ce_0:;
L_1803ef2ce_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef2ce_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef2ce_3:;
wr(s->r,128,4,(rd(s->r,128,4)&((U)UINT64_C(0x7fff))));
L_1803ef2ce_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef2ce_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef2ce_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ef2ce_7:;
wr(s->u,57,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ef2ce_8:;
wr(s->u,61,1,pop(rd(s->u,57,4),4));
L_1803ef2ce_9:;
wr(s->u,62,1,(rd(s->u,61,1)&((U)UINT64_C(0x1))));
L_1803ef2ce_10:;
wr(s->r,514,1,(rd(s->u,62,1)==((U)UINT64_C(0x0))));
L_1803ef2ce_11:;
/* 1803ef2d5: imul rax, rcx */
L_1803ef2d5_0:;
L_1803ef2d5_1:;
wr(s->u,125,16,(U)sx(rd(s->r,0,8),8));
L_1803ef2d5_2:;
wr(s->u,141,16,(U)sx(rd(s->r,8,8),8));
L_1803ef2d5_3:;
wr(s->u,157,16,(rd(s->u,125,16)*rd(s->u,141,16)));
L_1803ef2d5_4:;
wr(s->r,0,8,(rd(s->r,0,8)*rd(s->r,8,8)));
L_1803ef2d5_5:;
wr(s->u,173,8,(rd(s->u,157,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef2d5_6:;
wr(s->u,86,16,(U)sx(rd(s->r,0,8),8));
L_1803ef2d5_7:;
wr(s->r,512,1,(rd(s->u,86,16)!=rd(s->u,157,16)));
L_1803ef2d5_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef2d5_9:;
/* 1803ef2d9: lea rdi, [rdx + rax*2] */
L_1803ef2d9_0:;
L_1803ef2d9_1:;
wr(s->u,13,8,(rd(s->r,0,8)*((U)UINT64_C(0x2))));
L_1803ef2d9_2:;
wr(s->u,21,8,(rd(s->r,16,8)+rd(s->u,13,8)));
L_1803ef2d9_3:;
wr(s->r,56,8,rd(s->u,21,8));
L_1803ef2d9_4:;
/* 1803ef2dd: lea rdx, [rdi + rcx*2] */
L_1803ef2dd_0:;
L_1803ef2dd_1:;
wr(s->u,13,8,(rd(s->r,8,8)*((U)UINT64_C(0x2))));
L_1803ef2dd_2:;
wr(s->u,21,8,(rd(s->r,56,8)+rd(s->u,13,8)));
L_1803ef2dd_3:;
wr(s->r,16,8,rd(s->u,21,8));
L_1803ef2dd_4:;
/* 1803ef2e1: mov rcx, r13 */
L_1803ef2e1_0:;
L_1803ef2e1_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803ef2e1_2:;
/* 1803ef2e4: call 0x1803eeec0 */
L_1803ef2e4_0:;
L_1803ef2e4_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef2e4_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef2e9)));
L_1803ef2e4_3:;
return (uint64_t)UINT64_C(0x1803eeec0);
L_1803ef2e4_4:;
return UINT64_C(0x1803ef2e9);
}
uint64_t b_1803ef2e9(CPU*s){
/* 1803ef2e9: and ebp, 0x7fff */
L_1803ef2e9_0:;
L_1803ef2e9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef2e9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef2e9_3:;
wr(s->r,40,4,(rd(s->r,40,4)&((U)UINT64_C(0x7fff))));
L_1803ef2e9_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803ef2e9_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef2e9_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803ef2e9_7:;
wr(s->u,0,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803ef2e9_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803ef2e9_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803ef2e9_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803ef2e9_11:;
/* 1803ef2ef: mov r9d, ebx */
L_1803ef2ef_0:;
L_1803ef2ef_1:;
wr(s->r,136,4,rd(s->r,24,4));
L_1803ef2ef_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ef2ef_3:;
/* 1803ef2f2: mov rdx, rdi */
L_1803ef2f2_0:;
L_1803ef2f2_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803ef2f2_2:;
/* 1803ef2f5: mov rcx, r13 */
L_1803ef2f5_0:;
L_1803ef2f5_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803ef2f5_2:;
/* 1803ef2f8: mov r8d, ebp */
L_1803ef2f8_0:;
L_1803ef2f8_1:;
wr(s->r,128,4,rd(s->r,40,4));
L_1803ef2f8_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef2f8_3:;
/* 1803ef2fb: movsxd rsi, eax */
L_1803ef2fb_0:;
L_1803ef2fb_1:;
wr(s->r,48,8,(U)sx(rd(s->r,0,4),4));
L_1803ef2fb_2:;
/* 1803ef2fe: call 0x1803eef80 */
L_1803ef2fe_0:;
L_1803ef2fe_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef2fe_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef303)));
L_1803ef2fe_3:;
return (uint64_t)UINT64_C(0x1803eef80);
L_1803ef2fe_4:;
return UINT64_C(0x1803ef303);
}
uint64_t b_1803ef303(CPU*s){
/* 1803ef303: inc r15 */
L_1803ef303_0:;
L_1803ef303_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,8),((U)UINT64_C(0x1)),8,0));
L_1803ef303_2:;
wr(s->r,184,8,(rd(s->r,184,8)+((U)UINT64_C(0x1))));
L_1803ef303_3:;
wr(s->r,519,1,(sx(rd(s->r,184,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef303_4:;
wr(s->r,518,1,(rd(s->r,184,8)==((U)UINT64_C(0x0))));
L_1803ef303_5:;
wr(s->u,59,8,(rd(s->r,184,8)&((U)UINT64_C(0xff))));
L_1803ef303_6:;
wr(s->u,67,1,pop(rd(s->u,59,8),8));
L_1803ef303_7:;
wr(s->u,68,1,(rd(s->u,67,1)&((U)UINT64_C(0x1))));
L_1803ef303_8:;
wr(s->r,514,1,(rd(s->u,68,1)==((U)UINT64_C(0x0))));
L_1803ef303_9:;
/* 1803ef306: movsxd rcx, eax */
L_1803ef306_0:;
L_1803ef306_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803ef306_2:;
/* 1803ef309: movapd xmm0, xmm8 */
L_1803ef309_0:;
L_1803ef309_1:;
wr(s->r,4608,8,rd(s->r,5120,8));
L_1803ef309_2:;
wr(s->r,4616,8,rd(s->r,5128,8));
L_1803ef309_3:;
/* 1803ef30e: add rsi, rcx */
L_1803ef30e_0:;
L_1803ef30e_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+rd(s->r,8,8))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803ef30e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),rd(s->r,8,8),8,0));
L_1803ef30e_3:;
wr(s->r,48,8,(rd(s->r,48,8)+rd(s->r,8,8)));
L_1803ef30e_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef30e_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803ef30e_6:;
wr(s->u,59,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803ef30e_7:;
wr(s->u,67,1,pop(rd(s->u,59,8),8));
L_1803ef30e_8:;
wr(s->u,68,1,(rd(s->u,67,1)&((U)UINT64_C(0x1))));
L_1803ef30e_9:;
wr(s->r,514,1,(rd(s->u,68,1)==((U)UINT64_C(0x0))));
L_1803ef30e_10:;
/* 1803ef311: sar rsi, 7 */
L_1803ef311_0:;
L_1803ef311_1:;
wr(s->u,195,4,(((U)UINT64_C(0x7))&((U)UINT64_C(0x3f))));
L_1803ef311_2:;
wr(s->u,199,8,rd(s->r,48,8));
L_1803ef311_3:;
wr(s->r,48,8,((rd(s->u,195,4)>=64)?(sx(rd(s->r,48,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,48,8),8)>>rd(s->u,195,4))));
L_1803ef311_4:;
wr(s->u,108,1,(rd(s->u,195,4)==((U)UINT64_C(0x0))));
L_1803ef311_5:;
wr(s->u,109,4,(rd(s->u,195,4)-((U)UINT64_C(0x1))));
L_1803ef311_6:;
wr(s->u,113,8,((rd(s->u,109,4)>=64)?(sx(rd(s->u,199,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->u,199,8),8)>>rd(s->u,109,4))));
L_1803ef311_7:;
wr(s->u,121,8,(rd(s->u,113,8)&((U)UINT64_C(0x1))));
L_1803ef311_8:;
wr(s->u,129,1,(rd(s->u,121,8)!=((U)UINT64_C(0x0))));
L_1803ef311_9:;
wr(s->u,0,1,rd(s->u,108,1));
L_1803ef311_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ef311_11:;
wr(s->u,2,1,(!rd(s->u,108,1)));
L_1803ef311_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef311_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,129,1)));
L_1803ef311_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef311_15:;
wr(s->u,130,1,(rd(s->u,195,4)==((U)UINT64_C(0x1))));
L_1803ef311_16:;
wr(s->u,0,1,rd(s->u,130,1));
L_1803ef311_17:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ef311_18:;
wr(s->u,2,1,(!rd(s->u,130,1)));
L_1803ef311_19:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef311_20:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ef311_21:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef311_22:;
wr(s->u,69,1,(rd(s->u,195,4)!=((U)UINT64_C(0x0))));
L_1803ef311_23:;
wr(s->u,70,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef311_24:;
wr(s->u,71,1,(!rd(s->u,69,1)));
L_1803ef311_25:;
wr(s->u,72,1,(rd(s->u,71,1)&rd(s->r,519,1)));
L_1803ef311_26:;
wr(s->u,73,1,(rd(s->u,69,1)&rd(s->u,70,1)));
L_1803ef311_27:;
wr(s->r,519,1,(rd(s->u,72,1)|rd(s->u,73,1)));
L_1803ef311_28:;
wr(s->u,74,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803ef311_29:;
wr(s->u,75,1,(!rd(s->u,69,1)));
L_1803ef311_30:;
wr(s->u,76,1,(rd(s->u,75,1)&rd(s->r,518,1)));
L_1803ef311_31:;
wr(s->u,77,1,(rd(s->u,69,1)&rd(s->u,74,1)));
L_1803ef311_32:;
wr(s->r,518,1,(rd(s->u,76,1)|rd(s->u,77,1)));
L_1803ef311_33:;
wr(s->u,78,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803ef311_34:;
wr(s->u,86,1,pop(rd(s->u,78,8),8));
L_1803ef311_35:;
wr(s->u,87,1,(rd(s->u,86,1)&((U)UINT64_C(0x1))));
L_1803ef311_36:;
wr(s->u,88,1,(rd(s->u,87,1)==((U)UINT64_C(0x0))));
L_1803ef311_37:;
wr(s->u,89,1,(!rd(s->u,69,1)));
L_1803ef311_38:;
wr(s->u,90,1,(rd(s->u,89,1)&rd(s->r,514,1)));
L_1803ef311_39:;
wr(s->u,91,1,(rd(s->u,69,1)&rd(s->u,88,1)));
L_1803ef311_40:;
wr(s->r,514,1,(rd(s->u,90,1)|rd(s->u,91,1)));
L_1803ef311_41:;
/* 1803ef315: pxor xmm1, xmm1 */
L_1803ef315_0:;
L_1803ef315_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803ef315_2:;
/* 1803ef319: cvtsi2ss xmm1, r15 */
L_1803ef319_0:;
L_1803ef319_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,184,8),8),4));
L_1803ef319_2:;
/* 1803ef31e: imul rsi, qword ptr [rsp + 0xc0] */
L_1803ef31e_0:;
L_1803ef31e_1:;
wr(s->u,29,8,(((U)UINT64_C(0xc0))+rd(s->r,32,8)));
L_1803ef31e_2:;
wr(s->u,139,16,(U)sx(rd(s->r,48,8),8));
L_1803ef31e_3:;
wr(s->u,51,8,mr((uint64_t)rd(s->u,29,8),8));
L_1803ef31e_4:;
wr(s->u,155,16,(U)sx(rd(s->u,51,8),8));
L_1803ef31e_5:;
wr(s->u,171,16,(rd(s->u,139,16)*rd(s->u,155,16)));
L_1803ef31e_6:;
wr(s->u,51,8,mr((uint64_t)rd(s->u,29,8),8));
L_1803ef31e_7:;
wr(s->r,48,8,(rd(s->r,48,8)*rd(s->u,51,8)));
L_1803ef31e_8:;
wr(s->u,187,8,(rd(s->u,171,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef31e_9:;
wr(s->u,92,16,(U)sx(rd(s->r,48,8),8));
L_1803ef31e_10:;
wr(s->r,512,1,(rd(s->u,92,16)!=rd(s->u,171,16)));
L_1803ef31e_11:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef31e_12:;
/* 1803ef327: mulss xmm1, xmm6 */
L_1803ef327_0:;
L_1803ef327_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803ef327_2:;
/* 1803ef32b: sar rsi, 0xf */
L_1803ef32b_0:;
L_1803ef32b_1:;
wr(s->u,195,4,(((U)UINT64_C(0xf))&((U)UINT64_C(0x3f))));
L_1803ef32b_2:;
wr(s->u,199,8,rd(s->r,48,8));
L_1803ef32b_3:;
wr(s->r,48,8,((rd(s->u,195,4)>=64)?(sx(rd(s->r,48,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,48,8),8)>>rd(s->u,195,4))));
L_1803ef32b_4:;
wr(s->u,108,1,(rd(s->u,195,4)==((U)UINT64_C(0x0))));
L_1803ef32b_5:;
wr(s->u,109,4,(rd(s->u,195,4)-((U)UINT64_C(0x1))));
L_1803ef32b_6:;
wr(s->u,113,8,((rd(s->u,109,4)>=64)?(sx(rd(s->u,199,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->u,199,8),8)>>rd(s->u,109,4))));
L_1803ef32b_7:;
wr(s->u,121,8,(rd(s->u,113,8)&((U)UINT64_C(0x1))));
L_1803ef32b_8:;
wr(s->u,129,1,(rd(s->u,121,8)!=((U)UINT64_C(0x0))));
L_1803ef32b_9:;
wr(s->u,0,1,rd(s->u,108,1));
L_1803ef32b_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ef32b_11:;
wr(s->u,2,1,(!rd(s->u,108,1)));
L_1803ef32b_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef32b_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,129,1)));
L_1803ef32b_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef32b_15:;
wr(s->u,130,1,(rd(s->u,195,4)==((U)UINT64_C(0x1))));
L_1803ef32b_16:;
wr(s->u,0,1,rd(s->u,130,1));
L_1803ef32b_17:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ef32b_18:;
wr(s->u,2,1,(!rd(s->u,130,1)));
L_1803ef32b_19:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef32b_20:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ef32b_21:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef32b_22:;
wr(s->u,69,1,(rd(s->u,195,4)!=((U)UINT64_C(0x0))));
L_1803ef32b_23:;
wr(s->u,70,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef32b_24:;
wr(s->u,71,1,(!rd(s->u,69,1)));
L_1803ef32b_25:;
wr(s->u,72,1,(rd(s->u,71,1)&rd(s->r,519,1)));
L_1803ef32b_26:;
wr(s->u,73,1,(rd(s->u,69,1)&rd(s->u,70,1)));
L_1803ef32b_27:;
wr(s->r,519,1,(rd(s->u,72,1)|rd(s->u,73,1)));
L_1803ef32b_28:;
wr(s->u,74,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803ef32b_29:;
wr(s->u,75,1,(!rd(s->u,69,1)));
L_1803ef32b_30:;
wr(s->u,76,1,(rd(s->u,75,1)&rd(s->r,518,1)));
L_1803ef32b_31:;
wr(s->u,77,1,(rd(s->u,69,1)&rd(s->u,74,1)));
L_1803ef32b_32:;
wr(s->r,518,1,(rd(s->u,76,1)|rd(s->u,77,1)));
L_1803ef32b_33:;
wr(s->u,78,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803ef32b_34:;
wr(s->u,86,1,pop(rd(s->u,78,8),8));
L_1803ef32b_35:;
wr(s->u,87,1,(rd(s->u,86,1)&((U)UINT64_C(0x1))));
L_1803ef32b_36:;
wr(s->u,88,1,(rd(s->u,87,1)==((U)UINT64_C(0x0))));
L_1803ef32b_37:;
wr(s->u,89,1,(!rd(s->u,69,1)));
L_1803ef32b_38:;
wr(s->u,90,1,(rd(s->u,89,1)&rd(s->r,514,1)));
L_1803ef32b_39:;
wr(s->u,91,1,(rd(s->u,69,1)&rd(s->u,88,1)));
L_1803ef32b_40:;
wr(s->r,514,1,(rd(s->u,90,1)|rd(s->u,91,1)));
L_1803ef32b_41:;
/* 1803ef32f: mulss xmm1, xmm9 */
L_1803ef32f_0:;
L_1803ef32f_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,5184,4),4),4));
L_1803ef32f_2:;
/* 1803ef334: mov word ptr [r12], si */
L_1803ef334_0:;
L_1803ef334_1:;
wr(s->u,37,2,rd(s->r,48,2));
L_1803ef334_2:;
mw((uint64_t)rd(s->r,160,8),2,rd(s->u,37,2));
L_1803ef334_3:;
/* 1803ef339: movsxd rax, dword ptr [r13 + 0x38] */
L_1803ef339_0:;
L_1803ef339_1:;
wr(s->u,5,8,(rd(s->r,168,8)+((U)UINT64_C(0x38))));
L_1803ef339_2:;
wr(s->u,47,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ef339_3:;
wr(s->r,0,8,(U)sx(rd(s->u,47,4),4));
L_1803ef339_4:;
/* 1803ef33d: lea r12, [r12 + rax*2] */
L_1803ef33d_0:;
L_1803ef33d_1:;
wr(s->u,13,8,(rd(s->r,0,8)*((U)UINT64_C(0x2))));
L_1803ef33d_2:;
wr(s->u,21,8,(rd(s->r,160,8)+rd(s->u,13,8)));
L_1803ef33d_3:;
wr(s->r,160,8,rd(s->u,21,8));
L_1803ef33d_4:;
/* 1803ef341: mov rax, qword ptr [rsp + 0xe0] */
L_1803ef341_0:;
L_1803ef341_1:;
wr(s->u,29,8,(((U)UINT64_C(0xe0))+rd(s->r,32,8)));
L_1803ef341_2:;
wr(s->u,51,8,mr((uint64_t)rd(s->u,29,8),8));
L_1803ef341_3:;
wr(s->r,0,8,rd(s->u,51,8));
L_1803ef341_4:;
/* 1803ef349: addss xmm1, xmm7 */
L_1803ef349_0:;
L_1803ef349_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803ef349_2:;
/* 1803ef34d: cvttss2si ecx, xmm1 */
L_1803ef34d_0:;
L_1803ef34d_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803ef34d_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef34d_3:;
/* 1803ef351: addsd xmm0, qword ptr [rax] */
L_1803ef351_0:;
L_1803ef351_1:;
wr(s->u,39,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803ef351_2:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->u,39,8),8),8));
L_1803ef351_3:;
/* 1803ef355: movsd qword ptr [rax], xmm0 */
L_1803ef355_0:;
L_1803ef355_1:;
wr(s->u,39,8,rd(s->r,4608,8));
L_1803ef355_2:;
mw((uint64_t)rd(s->r,0,8),8,rd(s->u,39,8));
L_1803ef355_3:;
/* 1803ef359: cmp ecx, 0x80000000 */
L_1803ef359_0:;
L_1803ef359_1:;
wr(s->u,131,4,rd(s->r,8,4));
L_1803ef359_2:;
wr(s->r,512,1,(rd(s->u,131,4)<((U)UINT64_C(0x80000000))));
L_1803ef359_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,131,4),((U)UINT64_C(0x80000000)),4,1));
L_1803ef359_4:;
wr(s->u,135,4,(rd(s->u,131,4)-((U)UINT64_C(0x80000000))));
L_1803ef359_5:;
wr(s->r,519,1,(sx(rd(s->u,135,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef359_6:;
wr(s->r,518,1,(rd(s->u,135,4)==((U)UINT64_C(0x0))));
L_1803ef359_7:;
wr(s->u,59,4,(rd(s->u,135,4)&((U)UINT64_C(0xff))));
L_1803ef359_8:;
wr(s->u,67,1,pop(rd(s->u,59,4),4));
L_1803ef359_9:;
wr(s->u,68,1,(rd(s->u,67,1)&((U)UINT64_C(0x1))));
L_1803ef359_10:;
wr(s->r,514,1,(rd(s->u,68,1)==((U)UINT64_C(0x0))));
L_1803ef359_11:;
/* 1803ef35f: je 0x1803ef381 */
L_1803ef35f_0:;
L_1803ef35f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ef381);}
L_1803ef35f_2:;
return UINT64_C(0x1803ef361);
}
uint64_t b_1803ef361(CPU*s){
/* 1803ef361: pxor xmm0, xmm0 */
L_1803ef361_0:;
L_1803ef361_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803ef361_2:;
/* 1803ef365: cvtsi2ss xmm0, ecx */
L_1803ef365_0:;
L_1803ef365_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803ef365_2:;
/* 1803ef369: ucomiss xmm0, xmm1 */
L_1803ef369_0:;
L_1803ef369_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803ef369_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803ef369_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803ef369_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803ef369_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803ef369_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803ef369_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ef369_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef369_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ef369_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ef369_11:;
/* 1803ef36c: je 0x1803ef381 */
L_1803ef36c_0:;
L_1803ef36c_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ef381);}
L_1803ef36c_2:;
return UINT64_C(0x1803ef36e);
}
uint64_t b_1803ef36e(CPU*s){
/* 1803ef36e: unpcklps xmm1, xmm1 */
L_1803ef36e_0:;
L_1803ef36e_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803ef36e_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803ef36e_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803ef36e_4:;
/* 1803ef371: movmskps eax, xmm1 */
L_1803ef371_0:;
L_1803ef371_1:;
wr(s->r,0,4,(((rd(s->r,4672,16)>>31)&1)<<0)|(((rd(s->r,4672,16)>>63)&1)<<1)|(((rd(s->r,4672,16)>>95)&1)<<2)|(((rd(s->r,4672,16)>>127)&1)<<3));
L_1803ef371_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef371_3:;
/* 1803ef374: pxor xmm1, xmm1 */
L_1803ef374_0:;
L_1803ef374_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803ef374_2:;
/* 1803ef378: and eax, 1 */
L_1803ef378_0:;
L_1803ef378_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef378_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef378_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803ef378_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef378_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef378_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ef378_7:;
wr(s->u,17,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ef378_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803ef378_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ef378_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ef378_11:;
/* 1803ef37b: sub ecx, eax */
L_1803ef37b_0:;
L_1803ef37b_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,0,4)));
L_1803ef37b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,1));
L_1803ef37b_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,0,4)));
L_1803ef37b_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef37b_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef37b_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ef37b_7:;
wr(s->u,17,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ef37b_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803ef37b_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ef37b_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ef37b_11:;
/* 1803ef37d: cvtsi2ss xmm1, ecx */
L_1803ef37d_0:;
L_1803ef37d_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803ef37d_2:;
/* 1803ef381: mov rdx, qword ptr [rsp + 0xc8] */
L_1803ef381_0:;
L_1803ef381_1:;
wr(s->u,0,8,(((U)UINT64_C(0xc8))+rd(s->r,32,8)));
L_1803ef381_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ef381_3:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803ef381_4:;
/* 1803ef389: cvttss2si eax, xmm1 */
L_1803ef389_0:;
L_1803ef389_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803ef389_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef389_3:;
/* 1803ef38d: cmp eax, r14d */
L_1803ef38d_0:;
L_1803ef38d_1:;
wr(s->u,23,4,rd(s->r,176,4));
L_1803ef38d_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,23,4)));
L_1803ef38d_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,23,4),4,1));
L_1803ef38d_4:;
wr(s->u,27,4,(rd(s->r,0,4)-rd(s->u,23,4)));
L_1803ef38d_5:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef38d_6:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803ef38d_7:;
wr(s->u,17,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803ef38d_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803ef38d_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ef38d_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ef38d_11:;
/* 1803ef390: jl 0x1803ef2a0 */
L_1803ef390_0:;
L_1803ef390_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ef390_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803ef2a0);}
L_1803ef390_3:;
return UINT64_C(0x1803ef396);
}
uint64_t b_1803ef381(CPU*s){
/* 1803ef381: mov rdx, qword ptr [rsp + 0xc8] */
L_1803ef381_0:;
L_1803ef381_1:;
wr(s->u,0,8,(((U)UINT64_C(0xc8))+rd(s->r,32,8)));
L_1803ef381_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ef381_3:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803ef381_4:;
/* 1803ef389: cvttss2si eax, xmm1 */
L_1803ef389_0:;
L_1803ef389_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803ef389_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef389_3:;
/* 1803ef38d: cmp eax, r14d */
L_1803ef38d_0:;
L_1803ef38d_1:;
wr(s->u,23,4,rd(s->r,176,4));
L_1803ef38d_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,23,4)));
L_1803ef38d_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,23,4),4,1));
L_1803ef38d_4:;
wr(s->u,27,4,(rd(s->r,0,4)-rd(s->u,23,4)));
L_1803ef38d_5:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef38d_6:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803ef38d_7:;
wr(s->u,17,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803ef38d_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803ef38d_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ef38d_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ef38d_11:;
/* 1803ef390: jl 0x1803ef2a0 */
L_1803ef390_0:;
L_1803ef390_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ef390_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803ef2a0);}
L_1803ef390_3:;
return UINT64_C(0x1803ef396);
}
uint64_t b_1803ef396(CPU*s){
/* 1803ef396: movaps xmm10, xmmword ptr [rsp + 0x30] */
L_1803ef396_0:;
L_1803ef396_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ef396_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803ef396_3:;
wr(s->u,206,16,rd(s->u,24,16));
L_1803ef396_4:;
wr(s->r,5248,4,rd(s->u,206,4));
L_1803ef396_5:;
wr(s->r,5252,4,rd(s->u,210,4));
L_1803ef396_6:;
wr(s->r,5256,4,rd(s->u,214,4));
L_1803ef396_7:;
wr(s->r,5260,4,rd(s->u,218,4));
L_1803ef396_8:;
/* 1803ef39c: movaps xmm9, xmmword ptr [rsp + 0x40] */
L_1803ef39c_0:;
L_1803ef39c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ef39c_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803ef39c_3:;
wr(s->u,206,16,rd(s->u,24,16));
L_1803ef39c_4:;
wr(s->r,5184,4,rd(s->u,206,4));
L_1803ef39c_5:;
wr(s->r,5188,4,rd(s->u,210,4));
L_1803ef39c_6:;
wr(s->r,5192,4,rd(s->u,214,4));
L_1803ef39c_7:;
wr(s->r,5196,4,rd(s->u,218,4));
L_1803ef39c_8:;
/* 1803ef3a2: sub r12, qword ptr [rsp + 0x20] */
L_1803ef3a2_0:;
L_1803ef3a2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ef3a2_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef3a2_3:;
wr(s->r,512,1,(rd(s->r,160,8)<rd(s->u,44,8)));
L_1803ef3a2_4:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef3a2_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),rd(s->u,44,8),8,1));
L_1803ef3a2_6:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef3a2_7:;
wr(s->r,160,8,(rd(s->r,160,8)-rd(s->u,44,8)));
L_1803ef3a2_8:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef3a2_9:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803ef3a2_10:;
wr(s->u,52,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803ef3a2_11:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803ef3a2_12:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803ef3a2_13:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803ef3a2_14:;
/* 1803ef3a7: movsxd rcx, dword ptr [r13 + 0x38] */
L_1803ef3a7_0:;
L_1803ef3a7_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0x38))));
L_1803ef3a7_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef3a7_3:;
wr(s->r,8,8,(U)sx(rd(s->u,40,4),4));
L_1803ef3a7_4:;
/* 1803ef3ab: mov r15, qword ptr [rsp + 0x80] */
L_1803ef3ab_0:;
L_1803ef3ab_1:;
wr(s->u,16,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803ef3ab_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ef3ab_3:;
wr(s->r,184,8,rd(s->u,44,8));
L_1803ef3ab_4:;
/* 1803ef3b3: movaps xmm6, xmmword ptr [rsp + 0x70] */
L_1803ef3b3_0:;
L_1803ef3b3_1:;
wr(s->u,8,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803ef3b3_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803ef3b3_3:;
wr(s->u,206,16,rd(s->u,24,16));
L_1803ef3b3_4:;
wr(s->r,4992,4,rd(s->u,206,4));
L_1803ef3b3_5:;
wr(s->r,4996,4,rd(s->u,210,4));
L_1803ef3b3_6:;
wr(s->r,5000,4,rd(s->u,214,4));
L_1803ef3b3_7:;
wr(s->r,5004,4,rd(s->u,218,4));
L_1803ef3b3_8:;
/* 1803ef3b8: movaps xmm7, xmmword ptr [rsp + 0x60] */
L_1803ef3b8_0:;
L_1803ef3b8_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803ef3b8_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803ef3b8_3:;
wr(s->u,206,16,rd(s->u,24,16));
L_1803ef3b8_4:;
wr(s->r,5056,4,rd(s->u,206,4));
L_1803ef3b8_5:;
wr(s->r,5060,4,rd(s->u,210,4));
L_1803ef3b8_6:;
wr(s->r,5064,4,rd(s->u,214,4));
L_1803ef3b8_7:;
wr(s->r,5068,4,rd(s->u,218,4));
L_1803ef3b8_8:;
/* 1803ef3bd: movaps xmm8, xmmword ptr [rsp + 0x50] */
L_1803ef3bd_0:;
L_1803ef3bd_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ef3bd_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803ef3bd_3:;
wr(s->u,206,16,rd(s->u,24,16));
L_1803ef3bd_4:;
wr(s->r,5120,4,rd(s->u,206,4));
L_1803ef3bd_5:;
wr(s->r,5124,4,rd(s->u,210,4));
L_1803ef3bd_6:;
wr(s->r,5128,4,rd(s->u,214,4));
L_1803ef3bd_7:;
wr(s->r,5132,4,rd(s->u,218,4));
L_1803ef3bd_8:;
/* 1803ef3c3: mov r14, qword ptr [rsp + 0x88] */
L_1803ef3c3_0:;
L_1803ef3c3_1:;
wr(s->u,16,8,(((U)UINT64_C(0x88))+rd(s->r,32,8)));
L_1803ef3c3_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ef3c3_3:;
wr(s->r,176,8,rd(s->u,44,8));
L_1803ef3c3_4:;
/* 1803ef3cb: mov rdi, qword ptr [rsp + 0x90] */
L_1803ef3cb_0:;
L_1803ef3cb_1:;
wr(s->u,16,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803ef3cb_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ef3cb_3:;
wr(s->r,56,8,rd(s->u,44,8));
L_1803ef3cb_4:;
/* 1803ef3d3: mov rsi, qword ptr [rsp + 0x98] */
L_1803ef3d3_0:;
L_1803ef3d3_1:;
wr(s->u,16,8,(((U)UINT64_C(0x98))+rd(s->r,32,8)));
L_1803ef3d3_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ef3d3_3:;
wr(s->r,48,8,rd(s->u,44,8));
L_1803ef3d3_4:;
/* 1803ef3db: mov rbp, qword ptr [rsp + 0xa0] */
L_1803ef3db_0:;
L_1803ef3db_1:;
wr(s->u,16,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_1803ef3db_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ef3db_3:;
wr(s->r,40,8,rd(s->u,44,8));
L_1803ef3db_4:;
/* 1803ef3e3: mov rbx, qword ptr [rsp + 0xd8] */
L_1803ef3e3_0:;
L_1803ef3e3_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd8))+rd(s->r,32,8)));
L_1803ef3e3_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ef3e3_3:;
wr(s->r,24,8,rd(s->u,44,8));
L_1803ef3e3_4:;
/* 1803ef3eb: sar r12, 1 */
L_1803ef3eb_0:;
L_1803ef3eb_1:;
wr(s->u,198,8,(rd(s->r,160,8)&((U)UINT64_C(0x1))));
L_1803ef3eb_2:;
wr(s->r,512,1,(rd(s->u,198,8)!=((U)UINT64_C(0x0))));
L_1803ef3eb_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef3eb_4:;
wr(s->r,160,8,((((U)UINT64_C(0x1))>=64)?(sx(rd(s->r,160,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,160,8),8)>>((U)UINT64_C(0x1)))));
L_1803ef3eb_5:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef3eb_6:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803ef3eb_7:;
wr(s->u,52,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803ef3eb_8:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803ef3eb_9:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803ef3eb_10:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803ef3eb_11:;
/* 1803ef3ee: mov rax, r12 */
L_1803ef3ee_0:;
L_1803ef3ee_1:;
wr(s->r,0,8,rd(s->r,160,8));
L_1803ef3ee_2:;
/* 1803ef3f1: cqo  */
L_1803ef3f1_0:;
L_1803ef3f1_1:;
wr(s->u,62,16,(U)sx(rd(s->r,0,8),8));
L_1803ef3f1_2:;
wr(s->r,16,8,(rd(s->u,62,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef3f1_3:;
/* 1803ef3f3: idiv rcx */
L_1803ef3f3_0:;
L_1803ef3f3_1:;
wr(s->u,78,16,(U)sx(rd(s->r,8,8),8));
L_1803ef3f3_2:;
wr(s->u,94,16,rd(s->r,16,8));
L_1803ef3f3_3:;
wr(s->u,110,16,((((U)UINT64_C(0x40))>=128)?0:(rd(s->u,94,16)<<((U)UINT64_C(0x40)))));
L_1803ef3f3_4:;
wr(s->u,126,16,rd(s->r,0,8));
L_1803ef3f3_5:;
wr(s->u,142,16,(rd(s->u,110,16)|rd(s->u,126,16)));
L_1803ef3f3_6:;
wr(s->u,158,16,((U)(sx(rd(s->u,142,16),16)/sx(rd(s->u,78,16),16))));
L_1803ef3f3_7:;
wr(s->r,0,8,(rd(s->u,158,16) >> (((U)UINT64_C(0x0))*8)));
L_1803ef3f3_8:;
wr(s->u,174,16,((U)(sx(rd(s->u,142,16),16)%sx(rd(s->u,78,16),16))));
L_1803ef3f3_9:;
wr(s->r,16,8,(rd(s->u,174,16) >> (((U)UINT64_C(0x0))*8)));
L_1803ef3f3_10:;
/* 1803ef3f6: add rsp, 0xa8 */
L_1803ef3f6_0:;
L_1803ef3f6_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0xa8)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ef3f6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0xa8)),8,0));
L_1803ef3f6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0xa8))));
L_1803ef3f6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef3f6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ef3f6_6:;
wr(s->u,52,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ef3f6_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803ef3f6_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803ef3f6_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803ef3f6_10:;
/* 1803ef3fd: pop r13 */
L_1803ef3fd_0:;
L_1803ef3fd_1:;
wr(s->u,190,8,((U)UINT64_C(0x0)));
L_1803ef3fd_2:;
wr(s->u,190,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef3fd_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef3fd_4:;
wr(s->r,168,8,rd(s->u,190,8));
L_1803ef3fd_5:;
/* 1803ef3ff: pop r12 */
L_1803ef3ff_0:;
L_1803ef3ff_1:;
wr(s->u,190,8,((U)UINT64_C(0x0)));
L_1803ef3ff_2:;
wr(s->u,190,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef3ff_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef3ff_4:;
wr(s->r,160,8,rd(s->u,190,8));
L_1803ef3ff_5:;
/* 1803ef401: ret  */
L_1803ef401_0:;
L_1803ef401_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef401_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef401_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ef401_4:;
return UINT64_C(0x1803ef402);
}
uint64_t b_1803ef39c(CPU*s){
/* 1803ef39c: movaps xmm9, xmmword ptr [rsp + 0x40] */
L_1803ef39c_0:;
L_1803ef39c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ef39c_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803ef39c_3:;
wr(s->u,206,16,rd(s->u,24,16));
L_1803ef39c_4:;
wr(s->r,5184,4,rd(s->u,206,4));
L_1803ef39c_5:;
wr(s->r,5188,4,rd(s->u,210,4));
L_1803ef39c_6:;
wr(s->r,5192,4,rd(s->u,214,4));
L_1803ef39c_7:;
wr(s->r,5196,4,rd(s->u,218,4));
L_1803ef39c_8:;
/* 1803ef3a2: sub r12, qword ptr [rsp + 0x20] */
L_1803ef3a2_0:;
L_1803ef3a2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ef3a2_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef3a2_3:;
wr(s->r,512,1,(rd(s->r,160,8)<rd(s->u,44,8)));
L_1803ef3a2_4:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef3a2_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),rd(s->u,44,8),8,1));
L_1803ef3a2_6:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef3a2_7:;
wr(s->r,160,8,(rd(s->r,160,8)-rd(s->u,44,8)));
L_1803ef3a2_8:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef3a2_9:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803ef3a2_10:;
wr(s->u,52,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803ef3a2_11:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803ef3a2_12:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803ef3a2_13:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803ef3a2_14:;
/* 1803ef3a7: movsxd rcx, dword ptr [r13 + 0x38] */
L_1803ef3a7_0:;
L_1803ef3a7_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0x38))));
L_1803ef3a7_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef3a7_3:;
wr(s->r,8,8,(U)sx(rd(s->u,40,4),4));
L_1803ef3a7_4:;
/* 1803ef3ab: mov r15, qword ptr [rsp + 0x80] */
L_1803ef3ab_0:;
L_1803ef3ab_1:;
wr(s->u,16,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803ef3ab_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ef3ab_3:;
wr(s->r,184,8,rd(s->u,44,8));
L_1803ef3ab_4:;
/* 1803ef3b3: movaps xmm6, xmmword ptr [rsp + 0x70] */
L_1803ef3b3_0:;
L_1803ef3b3_1:;
wr(s->u,8,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803ef3b3_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803ef3b3_3:;
wr(s->u,206,16,rd(s->u,24,16));
L_1803ef3b3_4:;
wr(s->r,4992,4,rd(s->u,206,4));
L_1803ef3b3_5:;
wr(s->r,4996,4,rd(s->u,210,4));
L_1803ef3b3_6:;
wr(s->r,5000,4,rd(s->u,214,4));
L_1803ef3b3_7:;
wr(s->r,5004,4,rd(s->u,218,4));
L_1803ef3b3_8:;
/* 1803ef3b8: movaps xmm7, xmmword ptr [rsp + 0x60] */
L_1803ef3b8_0:;
L_1803ef3b8_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803ef3b8_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803ef3b8_3:;
wr(s->u,206,16,rd(s->u,24,16));
L_1803ef3b8_4:;
wr(s->r,5056,4,rd(s->u,206,4));
L_1803ef3b8_5:;
wr(s->r,5060,4,rd(s->u,210,4));
L_1803ef3b8_6:;
wr(s->r,5064,4,rd(s->u,214,4));
L_1803ef3b8_7:;
wr(s->r,5068,4,rd(s->u,218,4));
L_1803ef3b8_8:;
/* 1803ef3bd: movaps xmm8, xmmword ptr [rsp + 0x50] */
L_1803ef3bd_0:;
L_1803ef3bd_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ef3bd_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803ef3bd_3:;
wr(s->u,206,16,rd(s->u,24,16));
L_1803ef3bd_4:;
wr(s->r,5120,4,rd(s->u,206,4));
L_1803ef3bd_5:;
wr(s->r,5124,4,rd(s->u,210,4));
L_1803ef3bd_6:;
wr(s->r,5128,4,rd(s->u,214,4));
L_1803ef3bd_7:;
wr(s->r,5132,4,rd(s->u,218,4));
L_1803ef3bd_8:;
/* 1803ef3c3: mov r14, qword ptr [rsp + 0x88] */
L_1803ef3c3_0:;
L_1803ef3c3_1:;
wr(s->u,16,8,(((U)UINT64_C(0x88))+rd(s->r,32,8)));
L_1803ef3c3_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ef3c3_3:;
wr(s->r,176,8,rd(s->u,44,8));
L_1803ef3c3_4:;
/* 1803ef3cb: mov rdi, qword ptr [rsp + 0x90] */
L_1803ef3cb_0:;
L_1803ef3cb_1:;
wr(s->u,16,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803ef3cb_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ef3cb_3:;
wr(s->r,56,8,rd(s->u,44,8));
L_1803ef3cb_4:;
/* 1803ef3d3: mov rsi, qword ptr [rsp + 0x98] */
L_1803ef3d3_0:;
L_1803ef3d3_1:;
wr(s->u,16,8,(((U)UINT64_C(0x98))+rd(s->r,32,8)));
L_1803ef3d3_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ef3d3_3:;
wr(s->r,48,8,rd(s->u,44,8));
L_1803ef3d3_4:;
/* 1803ef3db: mov rbp, qword ptr [rsp + 0xa0] */
L_1803ef3db_0:;
L_1803ef3db_1:;
wr(s->u,16,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_1803ef3db_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ef3db_3:;
wr(s->r,40,8,rd(s->u,44,8));
L_1803ef3db_4:;
/* 1803ef3e3: mov rbx, qword ptr [rsp + 0xd8] */
L_1803ef3e3_0:;
L_1803ef3e3_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd8))+rd(s->r,32,8)));
L_1803ef3e3_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ef3e3_3:;
wr(s->r,24,8,rd(s->u,44,8));
L_1803ef3e3_4:;
/* 1803ef3eb: sar r12, 1 */
L_1803ef3eb_0:;
L_1803ef3eb_1:;
wr(s->u,198,8,(rd(s->r,160,8)&((U)UINT64_C(0x1))));
L_1803ef3eb_2:;
wr(s->r,512,1,(rd(s->u,198,8)!=((U)UINT64_C(0x0))));
L_1803ef3eb_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef3eb_4:;
wr(s->r,160,8,((((U)UINT64_C(0x1))>=64)?(sx(rd(s->r,160,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,160,8),8)>>((U)UINT64_C(0x1)))));
L_1803ef3eb_5:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef3eb_6:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803ef3eb_7:;
wr(s->u,52,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803ef3eb_8:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803ef3eb_9:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803ef3eb_10:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803ef3eb_11:;
/* 1803ef3ee: mov rax, r12 */
L_1803ef3ee_0:;
L_1803ef3ee_1:;
wr(s->r,0,8,rd(s->r,160,8));
L_1803ef3ee_2:;
/* 1803ef3f1: cqo  */
L_1803ef3f1_0:;
L_1803ef3f1_1:;
wr(s->u,62,16,(U)sx(rd(s->r,0,8),8));
L_1803ef3f1_2:;
wr(s->r,16,8,(rd(s->u,62,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef3f1_3:;
/* 1803ef3f3: idiv rcx */
L_1803ef3f3_0:;
L_1803ef3f3_1:;
wr(s->u,78,16,(U)sx(rd(s->r,8,8),8));
L_1803ef3f3_2:;
wr(s->u,94,16,rd(s->r,16,8));
L_1803ef3f3_3:;
wr(s->u,110,16,((((U)UINT64_C(0x40))>=128)?0:(rd(s->u,94,16)<<((U)UINT64_C(0x40)))));
L_1803ef3f3_4:;
wr(s->u,126,16,rd(s->r,0,8));
L_1803ef3f3_5:;
wr(s->u,142,16,(rd(s->u,110,16)|rd(s->u,126,16)));
L_1803ef3f3_6:;
wr(s->u,158,16,((U)(sx(rd(s->u,142,16),16)/sx(rd(s->u,78,16),16))));
L_1803ef3f3_7:;
wr(s->r,0,8,(rd(s->u,158,16) >> (((U)UINT64_C(0x0))*8)));
L_1803ef3f3_8:;
wr(s->u,174,16,((U)(sx(rd(s->u,142,16),16)%sx(rd(s->u,78,16),16))));
L_1803ef3f3_9:;
wr(s->r,16,8,(rd(s->u,174,16) >> (((U)UINT64_C(0x0))*8)));
L_1803ef3f3_10:;
/* 1803ef3f6: add rsp, 0xa8 */
L_1803ef3f6_0:;
L_1803ef3f6_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0xa8)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ef3f6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0xa8)),8,0));
L_1803ef3f6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0xa8))));
L_1803ef3f6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef3f6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ef3f6_6:;
wr(s->u,52,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ef3f6_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803ef3f6_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803ef3f6_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803ef3f6_10:;
/* 1803ef3fd: pop r13 */
L_1803ef3fd_0:;
L_1803ef3fd_1:;
wr(s->u,190,8,((U)UINT64_C(0x0)));
L_1803ef3fd_2:;
wr(s->u,190,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef3fd_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef3fd_4:;
wr(s->r,168,8,rd(s->u,190,8));
L_1803ef3fd_5:;
/* 1803ef3ff: pop r12 */
L_1803ef3ff_0:;
L_1803ef3ff_1:;
wr(s->u,190,8,((U)UINT64_C(0x0)));
L_1803ef3ff_2:;
wr(s->u,190,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef3ff_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef3ff_4:;
wr(s->r,160,8,rd(s->u,190,8));
L_1803ef3ff_5:;
/* 1803ef401: ret  */
L_1803ef401_0:;
L_1803ef401_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef401_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef401_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ef401_4:;
return UINT64_C(0x1803ef402);
}
uint64_t b_1803ef3a2(CPU*s){
/* 1803ef3a2: sub r12, qword ptr [rsp + 0x20] */
L_1803ef3a2_0:;
L_1803ef3a2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ef3a2_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef3a2_3:;
wr(s->r,512,1,(rd(s->r,160,8)<rd(s->u,44,8)));
L_1803ef3a2_4:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef3a2_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),rd(s->u,44,8),8,1));
L_1803ef3a2_6:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef3a2_7:;
wr(s->r,160,8,(rd(s->r,160,8)-rd(s->u,44,8)));
L_1803ef3a2_8:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef3a2_9:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803ef3a2_10:;
wr(s->u,52,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803ef3a2_11:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803ef3a2_12:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803ef3a2_13:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803ef3a2_14:;
/* 1803ef3a7: movsxd rcx, dword ptr [r13 + 0x38] */
L_1803ef3a7_0:;
L_1803ef3a7_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0x38))));
L_1803ef3a7_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef3a7_3:;
wr(s->r,8,8,(U)sx(rd(s->u,40,4),4));
L_1803ef3a7_4:;
/* 1803ef3ab: mov r15, qword ptr [rsp + 0x80] */
L_1803ef3ab_0:;
L_1803ef3ab_1:;
wr(s->u,16,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803ef3ab_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ef3ab_3:;
wr(s->r,184,8,rd(s->u,44,8));
L_1803ef3ab_4:;
/* 1803ef3b3: movaps xmm6, xmmword ptr [rsp + 0x70] */
L_1803ef3b3_0:;
L_1803ef3b3_1:;
wr(s->u,8,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803ef3b3_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803ef3b3_3:;
wr(s->u,206,16,rd(s->u,24,16));
L_1803ef3b3_4:;
wr(s->r,4992,4,rd(s->u,206,4));
L_1803ef3b3_5:;
wr(s->r,4996,4,rd(s->u,210,4));
L_1803ef3b3_6:;
wr(s->r,5000,4,rd(s->u,214,4));
L_1803ef3b3_7:;
wr(s->r,5004,4,rd(s->u,218,4));
L_1803ef3b3_8:;
/* 1803ef3b8: movaps xmm7, xmmword ptr [rsp + 0x60] */
L_1803ef3b8_0:;
L_1803ef3b8_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803ef3b8_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803ef3b8_3:;
wr(s->u,206,16,rd(s->u,24,16));
L_1803ef3b8_4:;
wr(s->r,5056,4,rd(s->u,206,4));
L_1803ef3b8_5:;
wr(s->r,5060,4,rd(s->u,210,4));
L_1803ef3b8_6:;
wr(s->r,5064,4,rd(s->u,214,4));
L_1803ef3b8_7:;
wr(s->r,5068,4,rd(s->u,218,4));
L_1803ef3b8_8:;
/* 1803ef3bd: movaps xmm8, xmmword ptr [rsp + 0x50] */
L_1803ef3bd_0:;
L_1803ef3bd_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ef3bd_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803ef3bd_3:;
wr(s->u,206,16,rd(s->u,24,16));
L_1803ef3bd_4:;
wr(s->r,5120,4,rd(s->u,206,4));
L_1803ef3bd_5:;
wr(s->r,5124,4,rd(s->u,210,4));
L_1803ef3bd_6:;
wr(s->r,5128,4,rd(s->u,214,4));
L_1803ef3bd_7:;
wr(s->r,5132,4,rd(s->u,218,4));
L_1803ef3bd_8:;
/* 1803ef3c3: mov r14, qword ptr [rsp + 0x88] */
L_1803ef3c3_0:;
L_1803ef3c3_1:;
wr(s->u,16,8,(((U)UINT64_C(0x88))+rd(s->r,32,8)));
L_1803ef3c3_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ef3c3_3:;
wr(s->r,176,8,rd(s->u,44,8));
L_1803ef3c3_4:;
/* 1803ef3cb: mov rdi, qword ptr [rsp + 0x90] */
L_1803ef3cb_0:;
L_1803ef3cb_1:;
wr(s->u,16,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803ef3cb_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ef3cb_3:;
wr(s->r,56,8,rd(s->u,44,8));
L_1803ef3cb_4:;
/* 1803ef3d3: mov rsi, qword ptr [rsp + 0x98] */
L_1803ef3d3_0:;
L_1803ef3d3_1:;
wr(s->u,16,8,(((U)UINT64_C(0x98))+rd(s->r,32,8)));
L_1803ef3d3_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ef3d3_3:;
wr(s->r,48,8,rd(s->u,44,8));
L_1803ef3d3_4:;
/* 1803ef3db: mov rbp, qword ptr [rsp + 0xa0] */
L_1803ef3db_0:;
L_1803ef3db_1:;
wr(s->u,16,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_1803ef3db_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ef3db_3:;
wr(s->r,40,8,rd(s->u,44,8));
L_1803ef3db_4:;
/* 1803ef3e3: mov rbx, qword ptr [rsp + 0xd8] */
L_1803ef3e3_0:;
L_1803ef3e3_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd8))+rd(s->r,32,8)));
L_1803ef3e3_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ef3e3_3:;
wr(s->r,24,8,rd(s->u,44,8));
L_1803ef3e3_4:;
/* 1803ef3eb: sar r12, 1 */
L_1803ef3eb_0:;
L_1803ef3eb_1:;
wr(s->u,198,8,(rd(s->r,160,8)&((U)UINT64_C(0x1))));
L_1803ef3eb_2:;
wr(s->r,512,1,(rd(s->u,198,8)!=((U)UINT64_C(0x0))));
L_1803ef3eb_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef3eb_4:;
wr(s->r,160,8,((((U)UINT64_C(0x1))>=64)?(sx(rd(s->r,160,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,160,8),8)>>((U)UINT64_C(0x1)))));
L_1803ef3eb_5:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef3eb_6:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803ef3eb_7:;
wr(s->u,52,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803ef3eb_8:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803ef3eb_9:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803ef3eb_10:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803ef3eb_11:;
/* 1803ef3ee: mov rax, r12 */
L_1803ef3ee_0:;
L_1803ef3ee_1:;
wr(s->r,0,8,rd(s->r,160,8));
L_1803ef3ee_2:;
/* 1803ef3f1: cqo  */
L_1803ef3f1_0:;
L_1803ef3f1_1:;
wr(s->u,62,16,(U)sx(rd(s->r,0,8),8));
L_1803ef3f1_2:;
wr(s->r,16,8,(rd(s->u,62,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef3f1_3:;
/* 1803ef3f3: idiv rcx */
L_1803ef3f3_0:;
L_1803ef3f3_1:;
wr(s->u,78,16,(U)sx(rd(s->r,8,8),8));
L_1803ef3f3_2:;
wr(s->u,94,16,rd(s->r,16,8));
L_1803ef3f3_3:;
wr(s->u,110,16,((((U)UINT64_C(0x40))>=128)?0:(rd(s->u,94,16)<<((U)UINT64_C(0x40)))));
L_1803ef3f3_4:;
wr(s->u,126,16,rd(s->r,0,8));
L_1803ef3f3_5:;
wr(s->u,142,16,(rd(s->u,110,16)|rd(s->u,126,16)));
L_1803ef3f3_6:;
wr(s->u,158,16,((U)(sx(rd(s->u,142,16),16)/sx(rd(s->u,78,16),16))));
L_1803ef3f3_7:;
wr(s->r,0,8,(rd(s->u,158,16) >> (((U)UINT64_C(0x0))*8)));
L_1803ef3f3_8:;
wr(s->u,174,16,((U)(sx(rd(s->u,142,16),16)%sx(rd(s->u,78,16),16))));
L_1803ef3f3_9:;
wr(s->r,16,8,(rd(s->u,174,16) >> (((U)UINT64_C(0x0))*8)));
L_1803ef3f3_10:;
/* 1803ef3f6: add rsp, 0xa8 */
L_1803ef3f6_0:;
L_1803ef3f6_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0xa8)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ef3f6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0xa8)),8,0));
L_1803ef3f6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0xa8))));
L_1803ef3f6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef3f6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ef3f6_6:;
wr(s->u,52,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ef3f6_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803ef3f6_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803ef3f6_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803ef3f6_10:;
/* 1803ef3fd: pop r13 */
L_1803ef3fd_0:;
L_1803ef3fd_1:;
wr(s->u,190,8,((U)UINT64_C(0x0)));
L_1803ef3fd_2:;
wr(s->u,190,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef3fd_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef3fd_4:;
wr(s->r,168,8,rd(s->u,190,8));
L_1803ef3fd_5:;
/* 1803ef3ff: pop r12 */
L_1803ef3ff_0:;
L_1803ef3ff_1:;
wr(s->u,190,8,((U)UINT64_C(0x0)));
L_1803ef3ff_2:;
wr(s->u,190,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef3ff_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef3ff_4:;
wr(s->r,160,8,rd(s->u,190,8));
L_1803ef3ff_5:;
/* 1803ef401: ret  */
L_1803ef401_0:;
L_1803ef401_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef401_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef401_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ef401_4:;
return UINT64_C(0x1803ef402);
}
uint64_t b_1803ef410(CPU*s){
/* 1803ef410: push rbx */
L_1803ef410_0:;
L_1803ef410_1:;
wr(s->u,36,8,rd(s->r,24,8));
L_1803ef410_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef410_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,36,8));
L_1803ef410_4:;
/* 1803ef412: sub rsp, 0x20 */
L_1803ef412_0:;
L_1803ef412_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803ef412_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803ef412_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803ef412_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef412_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ef412_6:;
wr(s->u,44,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ef412_7:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803ef412_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ef412_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ef412_10:;
/* 1803ef416: mov rbx, rcx */
L_1803ef416_0:;
L_1803ef416_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ef416_2:;
/* 1803ef419: mov rcx, qword ptr [rcx + 0x88] */
L_1803ef419_0:;
L_1803ef419_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x88))));
L_1803ef419_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef419_3:;
wr(s->r,8,8,rd(s->u,28,8));
L_1803ef419_4:;
/* 1803ef420: xor edx, edx */
L_1803ef420_0:;
L_1803ef420_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef420_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef420_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803ef420_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ef420_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef420_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ef420_7:;
wr(s->u,44,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ef420_8:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803ef420_9:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ef420_10:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ef420_11:;
/* 1803ef422: mov eax, dword ptr [rbx + 0x3c] */
L_1803ef422_0:;
L_1803ef422_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803ef422_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef422_3:;
wr(s->r,0,4,rd(s->u,24,4));
L_1803ef422_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef422_5:;
/* 1803ef425: mov qword ptr [rbx + 0x80], rcx */
L_1803ef425_0:;
L_1803ef425_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x80))));
L_1803ef425_2:;
wr(s->u,16,8,rd(s->r,8,8));
L_1803ef425_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803ef425_4:;
/* 1803ef42c: add eax, dword ptr [rbx + 0x34] */
L_1803ef42c_0:;
L_1803ef42c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803ef42c_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef42c_3:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->u,24,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ef42c_4:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef42c_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,24,4),4,0));
L_1803ef42c_6:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef42c_7:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->u,24,4)));
L_1803ef42c_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef42c_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef42c_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ef42c_11:;
wr(s->u,44,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ef42c_12:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803ef42c_13:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ef42c_14:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ef42c_15:;
/* 1803ef42f: movsxd r8, eax */
L_1803ef42f_0:;
L_1803ef42f_1:;
wr(s->r,128,8,(U)sx(rd(s->r,0,4),4));
L_1803ef42f_2:;
/* 1803ef432: add r8, r8 */
L_1803ef432_0:;
L_1803ef432_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+rd(s->r,128,8))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803ef432_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->r,128,8),8,0));
L_1803ef432_3:;
wr(s->r,128,8,(rd(s->r,128,8)+rd(s->r,128,8)));
L_1803ef432_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef432_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ef432_6:;
wr(s->u,44,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ef432_7:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803ef432_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ef432_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ef432_10:;
/* 1803ef435: call 0x18000d6a6 */
L_1803ef435_0:;
L_1803ef435_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef435_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef43a)));
L_1803ef435_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803ef435_4:;
return UINT64_C(0x1803ef43a);
}
uint64_t b_1803ef43a(CPU*s){
/* 1803ef43a: mov eax, dword ptr [rbx + 0x2c] */
L_1803ef43a_0:;
L_1803ef43a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x2c))));
L_1803ef43a_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef43a_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803ef43a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef43a_5:;
/* 1803ef43d: movsxd r11, dword ptr [rbx + 0x34] */
L_1803ef43d_0:;
L_1803ef43d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803ef43d_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef43d_3:;
wr(s->r,152,8,(U)sx(rd(s->u,28,4),4));
L_1803ef43d_4:;
/* 1803ef441: add eax, eax */
L_1803ef441_0:;
L_1803ef441_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ef441_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,0,4),4,0));
L_1803ef441_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,0,4)));
L_1803ef441_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef441_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef441_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ef441_7:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ef441_8:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803ef441_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ef441_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ef441_11:;
/* 1803ef443: xor ecx, ecx */
L_1803ef443_0:;
L_1803ef443_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef443_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef443_3:;
wr(s->r,8,4,(rd(s->r,8,4)^rd(s->r,8,4)));
L_1803ef443_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef443_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef443_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ef443_7:;
wr(s->u,32,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ef443_8:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803ef443_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ef443_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ef443_11:;
/* 1803ef445: add r11, r11 */
L_1803ef445_0:;
L_1803ef445_1:;
wr(s->r,512,1,(((rd(s->r,152,8)+rd(s->r,152,8))&(((U)1<<64)-1))<rd(s->r,152,8)));
L_1803ef445_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->r,152,8),8,0));
L_1803ef445_3:;
wr(s->r,152,8,(rd(s->r,152,8)+rd(s->r,152,8)));
L_1803ef445_4:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef445_5:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803ef445_6:;
wr(s->u,32,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803ef445_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803ef445_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ef445_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ef445_10:;
/* 1803ef448: add qword ptr [rbx + 0x80], r11 */
L_1803ef448_0:;
L_1803ef448_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x80))));
L_1803ef448_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef448_3:;
wr(s->r,512,1,(((rd(s->u,20,8)+rd(s->r,152,8))&(((U)1<<64)-1))<rd(s->u,20,8)));
L_1803ef448_4:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef448_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,8),rd(s->r,152,8),8,0));
L_1803ef448_6:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef448_7:;
wr(s->u,20,8,(rd(s->u,20,8)+rd(s->r,152,8)));
L_1803ef448_8:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803ef448_9:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef448_10:;
wr(s->r,519,1,(sx(rd(s->u,20,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef448_11:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef448_12:;
wr(s->r,518,1,(rd(s->u,20,8)==((U)UINT64_C(0x0))));
L_1803ef448_13:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef448_14:;
wr(s->u,32,8,(rd(s->u,20,8)&((U)UINT64_C(0xff))));
L_1803ef448_15:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803ef448_16:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ef448_17:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ef448_18:;
/* 1803ef44f: mov dword ptr [rbx + 0x10], eax */
L_1803ef44f_0:;
L_1803ef44f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803ef44f_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803ef44f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ef44f_4:;
/* 1803ef452: mov dword ptr [rbx + 0x18], eax */
L_1803ef452_0:;
L_1803ef452_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803ef452_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803ef452_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ef452_4:;
/* 1803ef455: movd xmm0, eax */
L_1803ef455_0:;
L_1803ef455_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803ef455_2:;
/* 1803ef459: mov dword ptr [rbx + 0x14], eax */
L_1803ef459_0:;
L_1803ef459_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x14))));
L_1803ef459_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803ef459_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ef459_4:;
/* 1803ef45c: mov dword ptr [rbx + 0x24], 0x100 */
L_1803ef45c_0:;
L_1803ef45c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803ef45c_2:;
wr(s->u,16,4,((U)UINT64_C(0x100)));
L_1803ef45c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ef45c_4:;
/* 1803ef463: mov dword ptr [rbx + 0xc], ecx */
L_1803ef463_0:;
L_1803ef463_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ef463_2:;
wr(s->u,16,4,rd(s->r,8,4));
L_1803ef463_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ef463_4:;
/* 1803ef466: cvtdq2pd xmm0, xmm0 */
L_1803ef466_0:;
L_1803ef466_1:;
wr(s->u,50,8,rd(s->r,4608,8));
L_1803ef466_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,50,4),4),8));
L_1803ef466_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,54,4),4),8));
L_1803ef466_4:;
/* 1803ef46a: movsd qword ptr [rbx + 0x50], xmm0 */
L_1803ef46a_0:;
L_1803ef46a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x50))));
L_1803ef46a_2:;
wr(s->u,20,8,rd(s->r,4608,8));
L_1803ef46a_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_1803ef46a_4:;
/* 1803ef46f: mov dword ptr [rbx + 0x28], ecx */
L_1803ef46f_0:;
L_1803ef46f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803ef46f_2:;
wr(s->u,16,4,rd(s->r,8,4));
L_1803ef46f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ef46f_4:;
/* 1803ef472: mov dword ptr [rbx + 0x30], ecx */
L_1803ef472_0:;
L_1803ef472_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ef472_2:;
wr(s->u,16,4,rd(s->r,8,4));
L_1803ef472_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ef472_4:;
/* 1803ef475: mov dword ptr [rbx + 0x40], 1 */
L_1803ef475_0:;
L_1803ef475_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x40))));
L_1803ef475_2:;
wr(s->u,16,4,((U)UINT64_C(0x1)));
L_1803ef475_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ef475_4:;
/* 1803ef47c: xor eax, eax */
L_1803ef47c_0:;
L_1803ef47c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef47c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef47c_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ef47c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef47c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef47c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ef47c_7:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ef47c_8:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803ef47c_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ef47c_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ef47c_11:;
/* 1803ef47e: add rsp, 0x20 */
L_1803ef47e_0:;
L_1803ef47e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ef47e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803ef47e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803ef47e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef47e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ef47e_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ef47e_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803ef47e_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ef47e_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ef47e_10:;
/* 1803ef482: pop rbx */
L_1803ef482_0:;
L_1803ef482_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803ef482_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef482_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef482_4:;
wr(s->r,24,8,rd(s->u,42,8));
L_1803ef482_5:;
/* 1803ef483: ret  */
L_1803ef483_0:;
L_1803ef483_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef483_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef483_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ef483_4:;
return UINT64_C(0x1803ef484);
}
uint64_t b_1803ef490(CPU*s){
/* 1803ef490: mov qword ptr [rsp + 8], rcx */
L_1803ef490_0:;
L_1803ef490_1:;
wr(s->u,13,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ef490_2:;
wr(s->u,25,8,rd(s->r,8,8));
L_1803ef490_3:;
mw((uint64_t)rd(s->u,13,8),8,rd(s->u,25,8));
L_1803ef490_4:;
/* 1803ef495: push rdi */
L_1803ef495_0:;
L_1803ef495_1:;
wr(s->u,33,8,rd(s->r,56,8));
L_1803ef495_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef495_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,33,8));
L_1803ef495_4:;
/* 1803ef496: push r12 */
L_1803ef496_0:;
L_1803ef496_1:;
wr(s->u,33,8,rd(s->r,160,8));
L_1803ef496_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef496_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,33,8));
L_1803ef496_4:;
/* 1803ef498: push r13 */
L_1803ef498_0:;
L_1803ef498_1:;
wr(s->u,33,8,rd(s->r,168,8));
L_1803ef498_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef498_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,33,8));
L_1803ef498_4:;
/* 1803ef49a: sub rsp, 0x30 */
L_1803ef49a_0:;
L_1803ef49a_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803ef49a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803ef49a_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803ef49a_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef49a_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ef49a_6:;
wr(s->u,41,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ef49a_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803ef49a_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803ef49a_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803ef49a_10:;
/* 1803ef49e: mov qword ptr [rsp + 0x20], 0xfffffffffffffffe */
L_1803ef49e_0:;
L_1803ef49e_1:;
wr(s->u,13,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ef49e_2:;
wr(s->u,25,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803ef49e_3:;
mw((uint64_t)rd(s->u,13,8),8,rd(s->u,25,8));
L_1803ef49e_4:;
/* 1803ef4a7: mov qword ptr [rsp + 0x58], rbx */
L_1803ef4a7_0:;
L_1803ef4a7_1:;
wr(s->u,13,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803ef4a7_2:;
wr(s->u,25,8,rd(s->r,24,8));
L_1803ef4a7_3:;
mw((uint64_t)rd(s->u,13,8),8,rd(s->u,25,8));
L_1803ef4a7_4:;
/* 1803ef4ac: mov qword ptr [rsp + 0x60], rbp */
L_1803ef4ac_0:;
L_1803ef4ac_1:;
wr(s->u,13,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803ef4ac_2:;
wr(s->u,25,8,rd(s->r,40,8));
L_1803ef4ac_3:;
mw((uint64_t)rd(s->u,13,8),8,rd(s->u,25,8));
L_1803ef4ac_4:;
/* 1803ef4b1: mov qword ptr [rsp + 0x68], rsi */
L_1803ef4b1_0:;
L_1803ef4b1_1:;
wr(s->u,13,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803ef4b1_2:;
wr(s->u,25,8,rd(s->r,48,8));
L_1803ef4b1_3:;
mw((uint64_t)rd(s->u,13,8),8,rd(s->u,25,8));
L_1803ef4b1_4:;
/* 1803ef4b6: mov esi, r9d */
L_1803ef4b6_0:;
L_1803ef4b6_1:;
wr(s->r,48,4,rd(s->r,136,4));
L_1803ef4b6_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803ef4b6_3:;
/* 1803ef4b9: mov edi, r8d */
L_1803ef4b9_0:;
L_1803ef4b9_1:;
wr(s->r,56,4,rd(s->r,128,4));
L_1803ef4b9_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803ef4b9_3:;
/* 1803ef4bc: mov ebx, edx */
L_1803ef4bc_0:;
L_1803ef4bc_1:;
wr(s->r,24,4,rd(s->r,16,4));
L_1803ef4bc_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803ef4bc_3:;
/* 1803ef4be: mov rbp, rcx */
L_1803ef4be_0:;
L_1803ef4be_1:;
wr(s->r,40,8,rd(s->r,8,8));
L_1803ef4be_2:;
/* 1803ef4c1: xor r13d, r13d */
L_1803ef4c1_0:;
L_1803ef4c1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef4c1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef4c1_3:;
wr(s->r,168,4,(rd(s->r,168,4)^rd(s->r,168,4)));
L_1803ef4c1_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803ef4c1_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef4c1_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803ef4c1_7:;
wr(s->u,41,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803ef4c1_8:;
wr(s->u,49,1,pop(rd(s->u,41,4),4));
L_1803ef4c1_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803ef4c1_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803ef4c1_11:;
/* 1803ef4c4: mov qword ptr [rcx + 0x68], r13 */
L_1803ef4c4_0:;
L_1803ef4c4_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x68))));
L_1803ef4c4_2:;
wr(s->u,25,8,rd(s->r,168,8));
L_1803ef4c4_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,25,8));
L_1803ef4c4_4:;
/* 1803ef4c8: lea rax, [rip + 0x41df59] */
L_1803ef4c8_0:;
L_1803ef4c8_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080d428)));
L_1803ef4c8_2:;
/* 1803ef4cf: mov qword ptr [rcx], rax */
L_1803ef4cf_0:;
L_1803ef4cf_1:;
wr(s->u,25,8,rd(s->r,0,8));
L_1803ef4cf_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,25,8));
L_1803ef4cf_3:;
/* 1803ef4d2: mov eax, edx */
L_1803ef4d2_0:;
L_1803ef4d2_1:;
wr(s->r,0,4,rd(s->r,16,4));
L_1803ef4d2_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef4d2_3:;
/* 1803ef4d4: shl eax, 8 */
L_1803ef4d4_0:;
L_1803ef4d4_1:;
wr(s->u,140,4,(((U)UINT64_C(0x8))&((U)UINT64_C(0x1f))));
L_1803ef4d4_2:;
wr(s->u,144,4,rd(s->r,0,4));
L_1803ef4d4_3:;
wr(s->r,0,4,((rd(s->u,140,4)>=32)?0:(rd(s->r,0,4)<<rd(s->u,140,4))));
L_1803ef4d4_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef4d4_5:;
wr(s->u,70,1,(rd(s->u,140,4)==((U)UINT64_C(0x0))));
L_1803ef4d4_6:;
wr(s->u,71,4,(rd(s->u,140,4)-((U)UINT64_C(0x1))));
L_1803ef4d4_7:;
wr(s->u,75,4,((rd(s->u,71,4)>=32)?0:(rd(s->u,144,4)<<rd(s->u,71,4))));
L_1803ef4d4_8:;
wr(s->u,79,1,(sx(rd(s->u,75,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef4d4_9:;
wr(s->u,0,1,rd(s->u,70,1));
L_1803ef4d4_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ef4d4_11:;
wr(s->u,2,1,(!rd(s->u,70,1)));
L_1803ef4d4_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef4d4_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,79,1)));
L_1803ef4d4_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef4d4_15:;
wr(s->u,80,1,(rd(s->u,140,4)==((U)UINT64_C(0x1))));
L_1803ef4d4_16:;
wr(s->u,81,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef4d4_17:;
wr(s->u,82,1,(rd(s->r,512,1)^rd(s->u,81,1)));
L_1803ef4d4_18:;
wr(s->u,0,1,rd(s->u,80,1));
L_1803ef4d4_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,82,1)));
L_1803ef4d4_20:;
wr(s->u,2,1,(!rd(s->u,80,1)));
L_1803ef4d4_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef4d4_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ef4d4_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef4d4_24:;
wr(s->u,51,1,(rd(s->u,140,4)!=((U)UINT64_C(0x0))));
L_1803ef4d4_25:;
wr(s->u,52,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef4d4_26:;
wr(s->u,53,1,(!rd(s->u,51,1)));
L_1803ef4d4_27:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,519,1)));
L_1803ef4d4_28:;
wr(s->u,55,1,(rd(s->u,51,1)&rd(s->u,52,1)));
L_1803ef4d4_29:;
wr(s->r,519,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1803ef4d4_30:;
wr(s->u,56,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ef4d4_31:;
wr(s->u,57,1,(!rd(s->u,51,1)));
L_1803ef4d4_32:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,518,1)));
L_1803ef4d4_33:;
wr(s->u,59,1,(rd(s->u,51,1)&rd(s->u,56,1)));
L_1803ef4d4_34:;
wr(s->r,518,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803ef4d4_35:;
wr(s->u,60,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ef4d4_36:;
wr(s->u,64,1,pop(rd(s->u,60,4),4));
L_1803ef4d4_37:;
wr(s->u,65,1,(rd(s->u,64,1)&((U)UINT64_C(0x1))));
L_1803ef4d4_38:;
wr(s->u,66,1,(rd(s->u,65,1)==((U)UINT64_C(0x0))));
L_1803ef4d4_39:;
wr(s->u,67,1,(!rd(s->u,51,1)));
L_1803ef4d4_40:;
wr(s->u,68,1,(rd(s->u,67,1)&rd(s->r,514,1)));
L_1803ef4d4_41:;
wr(s->u,69,1,(rd(s->u,51,1)&rd(s->u,66,1)));
L_1803ef4d4_42:;
wr(s->r,514,1,(rd(s->u,68,1)|rd(s->u,69,1)));
L_1803ef4d4_43:;
/* 1803ef4d7: mov dword ptr [rcx + 8], eax */
L_1803ef4d7_0:;
L_1803ef4d7_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ef4d7_2:;
wr(s->u,21,4,rd(s->r,0,4));
L_1803ef4d7_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,21,4));
L_1803ef4d7_4:;
/* 1803ef4da: movsxd rcx, eax */
L_1803ef4da_0:;
L_1803ef4da_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803ef4da_2:;
/* 1803ef4dd: mov eax, 2 */
L_1803ef4dd_0:;
L_1803ef4dd_1:;
wr(s->r,0,8,((U)UINT64_C(0x2)));
L_1803ef4dd_2:;
/* 1803ef4e2: mul rcx */
L_1803ef4e2_0:;
L_1803ef4e2_1:;
wr(s->u,92,16,rd(s->r,0,8));
L_1803ef4e2_2:;
wr(s->u,108,16,rd(s->r,8,8));
L_1803ef4e2_3:;
wr(s->u,124,16,(rd(s->u,92,16)*rd(s->u,108,16)));
L_1803ef4e2_4:;
wr(s->r,16,8,(rd(s->u,124,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef4e2_5:;
wr(s->r,0,8,(rd(s->u,124,16) >> (((U)UINT64_C(0x0))*8)));
L_1803ef4e2_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803ef4e2_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef4e2_8:;
/* 1803ef4e5: mov r12, 0xffffffffffffffff */
L_1803ef4e5_0:;
L_1803ef4e5_1:;
wr(s->r,160,8,((U)UINT64_C(0xffffffffffffffff)));
L_1803ef4e5_2:;
/* 1803ef4ec: cmovo rax, r12 */
L_1803ef4ec_0:;
L_1803ef4ec_1:;
wr(s->u,83,8,rd(s->r,160,8));
L_1803ef4ec_2:;
wr(s->u,91,1,(!rd(s->r,523,1)));
L_1803ef4ec_3:;
if(rd(s->u,91,1)){goto L_1803ef4f0_0;}
L_1803ef4ec_4:;
wr(s->r,0,8,rd(s->u,83,8));
L_1803ef4ec_5:;
/* 1803ef4f0: mov rcx, rax */
L_1803ef4f0_0:;
L_1803ef4f0_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ef4f0_2:;
/* 1803ef4f3: call 0x180003140 */
L_1803ef4f3_0:;
L_1803ef4f3_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef4f3_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef4f8)));
L_1803ef4f3_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ef4f3_4:;
return UINT64_C(0x1803ef4f8);
}
uint64_t b_1803ef4f0(CPU*s){
/* 1803ef4f0: mov rcx, rax */
L_1803ef4f0_0:;
L_1803ef4f0_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ef4f0_2:;
/* 1803ef4f3: call 0x180003140 */
L_1803ef4f3_0:;
L_1803ef4f3_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef4f3_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef4f8)));
L_1803ef4f3_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ef4f3_4:;
return UINT64_C(0x1803ef4f8);
}
uint64_t b_1803ef4f8(CPU*s){
/* 1803ef4f8: mov qword ptr [rbp + 0x70], rax */
L_1803ef4f8_0:;
L_1803ef4f8_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x70))));
L_1803ef4f8_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803ef4f8_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ef4f8_4:;
/* 1803ef4fc: movsxd rcx, dword ptr [rbp + 8] */
L_1803ef4fc_0:;
L_1803ef4fc_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803ef4fc_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef4fc_3:;
wr(s->r,8,8,(U)sx(rd(s->u,16,4),4));
L_1803ef4fc_4:;
/* 1803ef500: mov eax, 2 */
L_1803ef500_0:;
L_1803ef500_1:;
wr(s->r,0,8,((U)UINT64_C(0x2)));
L_1803ef500_2:;
/* 1803ef505: mul rcx */
L_1803ef505_0:;
L_1803ef505_1:;
wr(s->u,29,16,rd(s->r,0,8));
L_1803ef505_2:;
wr(s->u,45,16,rd(s->r,8,8));
L_1803ef505_3:;
wr(s->u,61,16,(rd(s->u,29,16)*rd(s->u,45,16)));
L_1803ef505_4:;
wr(s->r,16,8,(rd(s->u,61,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef505_5:;
wr(s->r,0,8,(rd(s->u,61,16) >> (((U)UINT64_C(0x0))*8)));
L_1803ef505_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803ef505_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef505_8:;
/* 1803ef508: cmovo rax, r12 */
L_1803ef508_0:;
L_1803ef508_1:;
wr(s->u,20,8,rd(s->r,160,8));
L_1803ef508_2:;
wr(s->u,28,1,(!rd(s->r,523,1)));
L_1803ef508_3:;
if(rd(s->u,28,1)){goto L_1803ef50c_0;}
L_1803ef508_4:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803ef508_5:;
/* 1803ef50c: mov rcx, rax */
L_1803ef50c_0:;
L_1803ef50c_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ef50c_2:;
/* 1803ef50f: call 0x180003140 */
L_1803ef50f_0:;
L_1803ef50f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef50f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef514)));
L_1803ef50f_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ef50f_4:;
return UINT64_C(0x1803ef514);
}
uint64_t b_1803ef50c(CPU*s){
/* 1803ef50c: mov rcx, rax */
L_1803ef50c_0:;
L_1803ef50c_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ef50c_2:;
/* 1803ef50f: call 0x180003140 */
L_1803ef50f_0:;
L_1803ef50f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef50f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef514)));
L_1803ef50f_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ef50f_4:;
return UINT64_C(0x1803ef514);
}
uint64_t b_1803ef514(CPU*s){
/* 1803ef514: mov qword ptr [rbp + 0x78], rax */
L_1803ef514_0:;
L_1803ef514_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x78))));
L_1803ef514_2:;
wr(s->u,33,8,rd(s->r,0,8));
L_1803ef514_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,33,8));
L_1803ef514_4:;
/* 1803ef518: xor ecx, ecx */
L_1803ef518_0:;
L_1803ef518_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef518_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef518_3:;
wr(s->r,8,4,(rd(s->r,8,4)^rd(s->r,8,4)));
L_1803ef518_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef518_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef518_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ef518_7:;
wr(s->u,53,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ef518_8:;
wr(s->u,57,1,pop(rd(s->u,53,4),4));
L_1803ef518_9:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803ef518_10:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803ef518_11:;
/* 1803ef51a: mov rax, qword ptr [rbp + 0x70] */
L_1803ef51a_0:;
L_1803ef51a_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x70))));
L_1803ef51a_2:;
wr(s->u,45,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803ef51a_3:;
wr(s->r,0,8,rd(s->u,45,8));
L_1803ef51a_4:;
/* 1803ef51e: mov qword ptr [rax], rcx */
L_1803ef51e_0:;
L_1803ef51e_1:;
wr(s->u,33,8,rd(s->r,8,8));
L_1803ef51e_2:;
mw((uint64_t)rd(s->r,0,8),8,rd(s->u,33,8));
L_1803ef51e_3:;
/* 1803ef521: mov rax, qword ptr [rbp + 0x78] */
L_1803ef521_0:;
L_1803ef521_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x78))));
L_1803ef521_2:;
wr(s->u,45,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803ef521_3:;
wr(s->r,0,8,rd(s->u,45,8));
L_1803ef521_4:;
/* 1803ef525: mov qword ptr [rax], rcx */
L_1803ef525_0:;
L_1803ef525_1:;
wr(s->u,33,8,rd(s->r,8,8));
L_1803ef525_2:;
mw((uint64_t)rd(s->r,0,8),8,rd(s->u,33,8));
L_1803ef525_3:;
/* 1803ef528: mov eax, dword ptr [rbp + 8] */
L_1803ef528_0:;
L_1803ef528_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803ef528_2:;
wr(s->u,41,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ef528_3:;
wr(s->r,0,4,rd(s->u,41,4));
L_1803ef528_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef528_5:;
/* 1803ef52b: cdq  */
L_1803ef52b_0:;
L_1803ef52b_1:;
wr(s->u,101,8,(U)sx(rd(s->r,0,4),4));
L_1803ef52b_2:;
wr(s->r,16,4,(rd(s->u,101,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ef52b_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ef52b_4:;
/* 1803ef52c: and edx, 0x7f */
L_1803ef52c_0:;
L_1803ef52c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef52c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef52c_3:;
wr(s->r,16,4,(rd(s->r,16,4)&((U)UINT64_C(0x7f))));
L_1803ef52c_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ef52c_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef52c_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ef52c_7:;
wr(s->u,53,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ef52c_8:;
wr(s->u,57,1,pop(rd(s->u,53,4),4));
L_1803ef52c_9:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803ef52c_10:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803ef52c_11:;
/* 1803ef52f: add edx, eax */
L_1803ef52f_0:;
L_1803ef52f_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803ef52f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->r,0,4),4,0));
L_1803ef52f_3:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->r,0,4)));
L_1803ef52f_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ef52f_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef52f_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ef52f_7:;
wr(s->u,53,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ef52f_8:;
wr(s->u,57,1,pop(rd(s->u,53,4),4));
L_1803ef52f_9:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803ef52f_10:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803ef52f_11:;
/* 1803ef531: sar edx, 7 */
L_1803ef531_0:;
L_1803ef531_1:;
wr(s->u,169,4,(((U)UINT64_C(0x7))&((U)UINT64_C(0x1f))));
L_1803ef531_2:;
wr(s->u,173,4,rd(s->r,16,4));
L_1803ef531_3:;
wr(s->r,16,4,((rd(s->u,169,4)>=32)?(sx(rd(s->r,16,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,16,4),4)>>rd(s->u,169,4))));
L_1803ef531_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ef531_5:;
wr(s->u,86,1,(rd(s->u,169,4)==((U)UINT64_C(0x0))));
L_1803ef531_6:;
wr(s->u,87,4,(rd(s->u,169,4)-((U)UINT64_C(0x1))));
L_1803ef531_7:;
wr(s->u,91,4,((rd(s->u,87,4)>=32)?(sx(rd(s->u,173,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,173,4),4)>>rd(s->u,87,4))));
L_1803ef531_8:;
wr(s->u,95,4,(rd(s->u,91,4)&((U)UINT64_C(0x1))));
L_1803ef531_9:;
wr(s->u,99,1,(rd(s->u,95,4)!=((U)UINT64_C(0x0))));
L_1803ef531_10:;
wr(s->u,0,1,rd(s->u,86,1));
L_1803ef531_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ef531_12:;
wr(s->u,2,1,(!rd(s->u,86,1)));
L_1803ef531_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef531_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,99,1)));
L_1803ef531_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef531_16:;
wr(s->u,100,1,(rd(s->u,169,4)==((U)UINT64_C(0x1))));
L_1803ef531_17:;
wr(s->u,0,1,rd(s->u,100,1));
L_1803ef531_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ef531_19:;
wr(s->u,2,1,(!rd(s->u,100,1)));
L_1803ef531_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ef531_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ef531_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ef531_23:;
wr(s->u,59,1,(rd(s->u,169,4)!=((U)UINT64_C(0x0))));
L_1803ef531_24:;
wr(s->u,60,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef531_25:;
wr(s->u,61,1,(!rd(s->u,59,1)));
L_1803ef531_26:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,519,1)));
L_1803ef531_27:;
wr(s->u,63,1,(rd(s->u,59,1)&rd(s->u,60,1)));
L_1803ef531_28:;
wr(s->r,519,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803ef531_29:;
wr(s->u,64,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ef531_30:;
wr(s->u,65,1,(!rd(s->u,59,1)));
L_1803ef531_31:;
wr(s->u,66,1,(rd(s->u,65,1)&rd(s->r,518,1)));
L_1803ef531_32:;
wr(s->u,67,1,(rd(s->u,59,1)&rd(s->u,64,1)));
L_1803ef531_33:;
wr(s->r,518,1,(rd(s->u,66,1)|rd(s->u,67,1)));
L_1803ef531_34:;
wr(s->u,68,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ef531_35:;
wr(s->u,72,1,pop(rd(s->u,68,4),4));
L_1803ef531_36:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803ef531_37:;
wr(s->u,74,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803ef531_38:;
wr(s->u,75,1,(!rd(s->u,59,1)));
L_1803ef531_39:;
wr(s->u,76,1,(rd(s->u,75,1)&rd(s->r,514,1)));
L_1803ef531_40:;
wr(s->u,77,1,(rd(s->u,59,1)&rd(s->u,74,1)));
L_1803ef531_41:;
wr(s->r,514,1,(rd(s->u,76,1)|rd(s->u,77,1)));
L_1803ef531_42:;
/* 1803ef534: add edx, 2 */
L_1803ef534_0:;
L_1803ef534_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+((U)UINT64_C(0x2)))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803ef534_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x2)),4,0));
L_1803ef534_3:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x2))));
L_1803ef534_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ef534_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef534_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ef534_7:;
wr(s->u,53,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ef534_8:;
wr(s->u,57,1,pop(rd(s->u,53,4),4));
L_1803ef534_9:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803ef534_10:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803ef534_11:;
/* 1803ef537: sar edx, 1 */
L_1803ef537_0:;
L_1803ef537_1:;
wr(s->u,165,4,(rd(s->r,16,4)&((U)UINT64_C(0x1))));
L_1803ef537_2:;
wr(s->r,512,1,(rd(s->u,165,4)!=((U)UINT64_C(0x0))));
L_1803ef537_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef537_4:;
wr(s->r,16,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,16,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,16,4),4)>>((U)UINT64_C(0x1)))));
L_1803ef537_5:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ef537_6:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef537_7:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ef537_8:;
wr(s->u,53,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ef537_9:;
wr(s->u,57,1,pop(rd(s->u,53,4),4));
L_1803ef537_10:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803ef537_11:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803ef537_12:;
/* 1803ef539: mov dword ptr [rbp + 0x2c], edx */
L_1803ef539_0:;
L_1803ef539_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x2c))));
L_1803ef539_2:;
wr(s->u,29,4,rd(s->r,16,4));
L_1803ef539_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,29,4));
L_1803ef539_4:;
/* 1803ef53c: lea ecx, [rdx + rdx] */
L_1803ef53c_0:;
L_1803ef53c_1:;
wr(s->u,13,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803ef53c_2:;
wr(s->u,21,8,(rd(s->r,16,8)+rd(s->u,13,8)));
L_1803ef53c_3:;
wr(s->r,8,4,(rd(s->u,21,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef53c_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef53c_5:;
/* 1803ef53f: mov dword ptr [rbp + 0x10], ecx */
L_1803ef53f_0:;
L_1803ef53f_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x10))));
L_1803ef53f_2:;
wr(s->u,29,4,rd(s->r,8,4));
L_1803ef53f_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,29,4));
L_1803ef53f_4:;
/* 1803ef542: mov dword ptr [rbp + 0x18], ecx */
L_1803ef542_0:;
L_1803ef542_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x18))));
L_1803ef542_2:;
wr(s->u,29,4,rd(s->r,8,4));
L_1803ef542_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,29,4));
L_1803ef542_4:;
/* 1803ef545: mov dword ptr [rbp + 0x14], ecx */
L_1803ef545_0:;
L_1803ef545_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x14))));
L_1803ef545_2:;
wr(s->u,29,4,rd(s->r,8,4));
L_1803ef545_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,29,4));
L_1803ef545_4:;
/* 1803ef548: mov dword ptr [rbp + 0x24], 0x100 */
L_1803ef548_0:;
L_1803ef548_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x24))));
L_1803ef548_2:;
wr(s->u,29,4,((U)UINT64_C(0x100)));
L_1803ef548_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,29,4));
L_1803ef548_4:;
/* 1803ef54f: mov dword ptr [rbp + 0x48], 0x41100000 */
L_1803ef54f_0:;
L_1803ef54f_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x48))));
L_1803ef54f_2:;
wr(s->u,29,4,((U)UINT64_C(0x41100000)));
L_1803ef54f_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,29,4));
L_1803ef54f_4:;
/* 1803ef556: movd xmm0, ebx */
L_1803ef556_0:;
L_1803ef556_1:;
wr(s->r,4608,16,rd(s->r,24,4));
L_1803ef556_2:;
/* 1803ef55a: cvtdq2ps xmm0, xmm0 */
L_1803ef55a_0:;
L_1803ef55a_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ef55a_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ef55a_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ef55a_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ef55a_5:;
/* 1803ef55d: mulss xmm0, dword ptr [rip + 0x41de8b] */
L_1803ef55d_0:;
L_1803ef55d_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(mr(UINT64_C(0x18080d3f0),4),4),4));
L_1803ef55d_2:;
/* 1803ef565: addss xmm0, dword ptr [rip + 0x26bfc7] */
L_1803ef565_0:;
L_1803ef565_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(mr(UINT64_C(0x18065b534),4),4),4));
L_1803ef565_2:;
/* 1803ef56d: movss dword ptr [rbp + 0x44], xmm0 */
L_1803ef56d_0:;
L_1803ef56d_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x44))));
L_1803ef56d_2:;
wr(s->u,29,4,rd(s->r,4608,4));
L_1803ef56d_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,29,4));
L_1803ef56d_4:;
/* 1803ef572: mov dword ptr [rbp + 0x30], r13d */
L_1803ef572_0:;
L_1803ef572_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x30))));
L_1803ef572_2:;
wr(s->u,29,4,rd(s->r,168,4));
L_1803ef572_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,29,4));
L_1803ef572_4:;
/* 1803ef576: mov dword ptr [rbp + 0x28], r13d */
L_1803ef576_0:;
L_1803ef576_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x28))));
L_1803ef576_2:;
wr(s->u,29,4,rd(s->r,168,4));
L_1803ef576_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,29,4));
L_1803ef576_4:;
/* 1803ef57a: imul edx, edx, 0x3e8 */
L_1803ef57a_0:;
L_1803ef57a_1:;
wr(s->u,137,8,(U)sx(rd(s->r,16,4),4));
L_1803ef57a_2:;
wr(s->u,145,8,(U)sx(((U)UINT64_C(0x3e8)),4));
L_1803ef57a_3:;
wr(s->u,153,8,(rd(s->u,137,8)*rd(s->u,145,8)));
L_1803ef57a_4:;
wr(s->r,16,4,(rd(s->u,153,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef57a_5:;
wr(s->u,161,4,(rd(s->u,153,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ef57a_6:;
wr(s->u,78,8,(U)sx(rd(s->r,16,4),4));
L_1803ef57a_7:;
wr(s->r,512,1,(rd(s->u,78,8)!=rd(s->u,153,8)));
L_1803ef57a_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef57a_9:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ef57a_10:;
/* 1803ef580: inc edx */
L_1803ef580_0:;
L_1803ef580_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803ef580_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803ef580_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ef580_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef580_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ef580_6:;
wr(s->u,53,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ef580_7:;
wr(s->u,57,1,pop(rd(s->u,53,4),4));
L_1803ef580_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803ef580_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803ef580_10:;
/* 1803ef582: imul edx, esi */
L_1803ef582_0:;
L_1803ef582_1:;
wr(s->u,109,8,(U)sx(rd(s->r,16,4),4));
L_1803ef582_2:;
wr(s->u,117,8,(U)sx(rd(s->r,48,4),4));
L_1803ef582_3:;
wr(s->u,125,8,(rd(s->u,109,8)*rd(s->u,117,8)));
L_1803ef582_4:;
wr(s->r,16,4,(rd(s->u,125,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef582_5:;
wr(s->u,133,4,(rd(s->u,125,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ef582_6:;
wr(s->u,78,8,(U)sx(rd(s->r,16,4),4));
L_1803ef582_7:;
wr(s->r,512,1,(rd(s->u,78,8)!=rd(s->u,125,8)));
L_1803ef582_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef582_9:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ef582_10:;
/* 1803ef585: mov dword ptr [rbp + 0x34], edx */
L_1803ef585_0:;
L_1803ef585_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x34))));
L_1803ef585_2:;
wr(s->u,29,4,rd(s->r,16,4));
L_1803ef585_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,29,4));
L_1803ef585_4:;
/* 1803ef588: add ecx, edi */
L_1803ef588_0:;
L_1803ef588_1:;
wr(s->r,512,1,(((rd(s->r,8,4)+rd(s->r,56,4))&(((U)1<<32)-1))<rd(s->r,8,4)));
L_1803ef588_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,56,4),4,0));
L_1803ef588_3:;
wr(s->r,8,4,(rd(s->r,8,4)+rd(s->r,56,4)));
L_1803ef588_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef588_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef588_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ef588_7:;
wr(s->u,53,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ef588_8:;
wr(s->u,57,1,pop(rd(s->u,53,4),4));
L_1803ef588_9:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803ef588_10:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803ef588_11:;
return UINT64_C(0x1803ef58a);
}
uint64_t b_1803ef58a(CPU*s){
/* 1803ef58a: imul ecx, esi */
L_1803ef58a_0:;
L_1803ef58a_1:;
wr(s->u,42,8,(U)sx(rd(s->r,8,4),4));
L_1803ef58a_2:;
wr(s->u,50,8,(U)sx(rd(s->r,48,4),4));
L_1803ef58a_3:;
wr(s->u,58,8,(rd(s->u,42,8)*rd(s->u,50,8)));
L_1803ef58a_4:;
wr(s->r,8,4,(rd(s->u,58,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef58a_5:;
wr(s->u,66,4,(rd(s->u,58,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ef58a_6:;
wr(s->u,34,8,(U)sx(rd(s->r,8,4),4));
L_1803ef58a_7:;
wr(s->r,512,1,(rd(s->u,34,8)!=rd(s->u,58,8)));
L_1803ef58a_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef58a_9:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef58a_10:;
/* 1803ef58d: add ecx, edx */
L_1803ef58d_0:;
L_1803ef58d_1:;
wr(s->r,512,1,(((rd(s->r,8,4)+rd(s->r,16,4))&(((U)1<<32)-1))<rd(s->r,8,4)));
L_1803ef58d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,16,4),4,0));
L_1803ef58d_3:;
wr(s->r,8,4,(rd(s->r,8,4)+rd(s->r,16,4)));
L_1803ef58d_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef58d_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef58d_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ef58d_7:;
wr(s->u,28,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ef58d_8:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803ef58d_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ef58d_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ef58d_11:;
/* 1803ef58f: mov dword ptr [rbp + 0x3c], ecx */
L_1803ef58f_0:;
L_1803ef58f_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x3c))));
L_1803ef58f_2:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803ef58f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803ef58f_4:;
/* 1803ef592: lea eax, [rcx + rdx] */
L_1803ef592_0:;
L_1803ef592_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803ef592_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803ef592_3:;
wr(s->r,0,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef592_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef592_5:;
/* 1803ef595: movsxd rcx, eax */
L_1803ef595_0:;
L_1803ef595_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803ef595_2:;
/* 1803ef598: lea edx, [r13 + 2] */
L_1803ef598_0:;
L_1803ef598_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0x2))));
L_1803ef598_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef598_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ef598_4:;
/* 1803ef59c: call 0x1806099ee */
L_1803ef59c_0:;
L_1803ef59c_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef59c_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef5a1)));
L_1803ef59c_3:;
return (uint64_t)UINT64_C(0x1806099ee);
L_1803ef59c_4:;
return UINT64_C(0x1803ef5a1);
}
uint64_t b_1803ef5a1(CPU*s){
/* 1803ef5a1: mov qword ptr [rbp + 0x88], rax */
L_1803ef5a1_0:;
L_1803ef5a1_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x88))));
L_1803ef5a1_2:;
wr(s->u,44,8,rd(s->r,0,8));
L_1803ef5a1_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,44,8));
L_1803ef5a1_4:;
/* 1803ef5a8: movsxd rcx, dword ptr [rbp + 0x34] */
L_1803ef5a8_0:;
L_1803ef5a8_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x34))));
L_1803ef5a8_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef5a8_3:;
wr(s->r,8,8,(U)sx(rd(s->u,52,4),4));
L_1803ef5a8_4:;
/* 1803ef5ac: lea rax, [rax + rcx*2] */
L_1803ef5ac_0:;
L_1803ef5ac_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x2))));
L_1803ef5ac_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803ef5ac_3:;
wr(s->r,0,8,rd(s->u,24,8));
L_1803ef5ac_4:;
/* 1803ef5b0: mov qword ptr [rbp + 0x80], rax */
L_1803ef5b0_0:;
L_1803ef5b0_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x80))));
L_1803ef5b0_2:;
wr(s->u,44,8,rd(s->r,0,8));
L_1803ef5b0_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,44,8));
L_1803ef5b0_4:;
/* 1803ef5b7: movd xmm0, dword ptr [rbp + 0x10] */
L_1803ef5b7_0:;
L_1803ef5b7_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x10))));
L_1803ef5b7_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef5b7_3:;
wr(s->r,4608,16,rd(s->u,52,4));
L_1803ef5b7_4:;
/* 1803ef5bc: cvtdq2pd xmm0, xmm0 */
L_1803ef5bc_0:;
L_1803ef5bc_1:;
wr(s->u,56,8,rd(s->r,4608,8));
L_1803ef5bc_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,56,4),4),8));
L_1803ef5bc_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,60,4),4),8));
L_1803ef5bc_4:;
/* 1803ef5c0: movsd qword ptr [rbp + 0x50], xmm0 */
L_1803ef5c0_0:;
L_1803ef5c0_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x50))));
L_1803ef5c0_2:;
wr(s->u,44,8,rd(s->r,4608,8));
L_1803ef5c0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,44,8));
L_1803ef5c0_4:;
/* 1803ef5c5: mov dword ptr [rbp + 0x40], 1 */
L_1803ef5c5_0:;
L_1803ef5c5_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x40))));
L_1803ef5c5_2:;
wr(s->u,40,4,((U)UINT64_C(0x1)));
L_1803ef5c5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,40,4));
L_1803ef5c5_4:;
/* 1803ef5cc: mov eax, dword ptr [rsp + 0x70] */
L_1803ef5cc_0:;
L_1803ef5cc_1:;
wr(s->u,32,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803ef5cc_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803ef5cc_3:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803ef5cc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef5cc_5:;
/* 1803ef5d0: mov dword ptr [rbp + 0x58], eax */
L_1803ef5d0_0:;
L_1803ef5d0_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x58))));
L_1803ef5d0_2:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803ef5d0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,40,4));
L_1803ef5d0_4:;
/* 1803ef5d3: mov dword ptr [rbp + 0x5c], 1 */
L_1803ef5d3_0:;
L_1803ef5d3_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x5c))));
L_1803ef5d3_2:;
wr(s->u,40,4,((U)UINT64_C(0x1)));
L_1803ef5d3_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,40,4));
L_1803ef5d3_4:;
/* 1803ef5da: mov edx, dword ptr [rbp + 8] */
L_1803ef5da_0:;
L_1803ef5da_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803ef5da_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef5da_3:;
wr(s->r,16,4,rd(s->u,52,4));
L_1803ef5da_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ef5da_5:;
/* 1803ef5dd: mov rcx, rbp */
L_1803ef5dd_0:;
L_1803ef5dd_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803ef5dd_2:;
/* 1803ef5e0: call 0x1803eed70 */
L_1803ef5e0_0:;
L_1803ef5e0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef5e0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef5e5)));
L_1803ef5e0_3:;
return (uint64_t)UINT64_C(0x1803eed70);
L_1803ef5e0_4:;
return UINT64_C(0x1803ef5e5);
}
uint64_t b_1803ef5e5(CPU*s){
/* 1803ef5e5: mov dword ptr [rbp + 0x60], r13d */
L_1803ef5e5_0:;
L_1803ef5e5_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x60))));
L_1803ef5e5_2:;
wr(s->u,8,4,rd(s->r,168,4));
L_1803ef5e5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef5e5_4:;
/* 1803ef5e9: mov dword ptr [rbp + 0x64], 0x200 */
L_1803ef5e9_0:;
L_1803ef5e9_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x64))));
L_1803ef5e9_2:;
wr(s->u,8,4,((U)UINT64_C(0x200)));
L_1803ef5e9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef5e9_4:;
/* 1803ef5f0: lea edx, [r13 + 2] */
L_1803ef5f0_0:;
L_1803ef5f0_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0x2))));
L_1803ef5f0_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef5f0_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ef5f0_4:;
/* 1803ef5f4: mov ecx, 0x200 */
L_1803ef5f4_0:;
L_1803ef5f4_1:;
wr(s->r,8,8,((U)UINT64_C(0x200)));
L_1803ef5f4_2:;
/* 1803ef5f9: call 0x1806099ee */
L_1803ef5f9_0:;
L_1803ef5f9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef5f9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef5fe)));
L_1803ef5f9_3:;
return (uint64_t)UINT64_C(0x1806099ee);
L_1803ef5f9_4:;
return UINT64_C(0x1803ef5fe);
}
uint64_t b_1803ef5fe(CPU*s){
/* 1803ef5fe: mov qword ptr [rbp + 0x68], rax */
L_1803ef5fe_0:;
L_1803ef5fe_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x68))));
L_1803ef5fe_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803ef5fe_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803ef5fe_4:;
/* 1803ef602: mov rax, rbp */
L_1803ef602_0:;
L_1803ef602_1:;
wr(s->r,0,8,rd(s->r,40,8));
L_1803ef602_2:;
/* 1803ef605: mov rbx, qword ptr [rsp + 0x58] */
L_1803ef605_0:;
L_1803ef605_1:;
wr(s->u,8,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803ef605_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef605_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803ef605_4:;
/* 1803ef60a: mov rbp, qword ptr [rsp + 0x60] */
L_1803ef60a_0:;
L_1803ef60a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803ef60a_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef60a_3:;
wr(s->r,40,8,rd(s->u,24,8));
L_1803ef60a_4:;
/* 1803ef60f: mov rsi, qword ptr [rsp + 0x68] */
L_1803ef60f_0:;
L_1803ef60f_1:;
wr(s->u,8,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803ef60f_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef60f_3:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803ef60f_4:;
/* 1803ef614: add rsp, 0x30 */
L_1803ef614_0:;
L_1803ef614_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ef614_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803ef614_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803ef614_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef614_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ef614_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ef614_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803ef614_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ef614_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ef614_10:;
/* 1803ef618: pop r13 */
L_1803ef618_0:;
L_1803ef618_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803ef618_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef618_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef618_4:;
wr(s->r,168,8,rd(s->u,42,8));
L_1803ef618_5:;
/* 1803ef61a: pop r12 */
L_1803ef61a_0:;
L_1803ef61a_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803ef61a_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef61a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef61a_4:;
wr(s->r,160,8,rd(s->u,42,8));
L_1803ef61a_5:;
/* 1803ef61c: pop rdi */
L_1803ef61c_0:;
L_1803ef61c_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803ef61c_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef61c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef61c_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803ef61c_5:;
/* 1803ef61d: ret  */
L_1803ef61d_0:;
L_1803ef61d_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef61d_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef61d_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ef61d_4:;
return UINT64_C(0x1803ef61e);
}
uint64_t b_1803ef620(CPU*s){
/* 1803ef620: mov qword ptr [rsp + 8], rbx */
L_1803ef620_0:;
L_1803ef620_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ef620_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803ef620_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ef620_4:;
/* 1803ef625: push rdi */
L_1803ef625_0:;
L_1803ef625_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803ef625_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef625_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803ef625_4:;
/* 1803ef626: sub rsp, 0x20 */
L_1803ef626_0:;
L_1803ef626_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803ef626_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803ef626_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803ef626_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef626_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ef626_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ef626_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ef626_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ef626_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ef626_10:;
/* 1803ef62a: mov ebx, edx */
L_1803ef62a_0:;
L_1803ef62a_1:;
wr(s->r,24,4,rd(s->r,16,4));
L_1803ef62a_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803ef62a_3:;
/* 1803ef62c: mov rdi, rcx */
L_1803ef62c_0:;
L_1803ef62c_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803ef62c_2:;
/* 1803ef62f: call 0x1803eed00 */
L_1803ef62f_0:;
L_1803ef62f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef62f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef634)));
L_1803ef62f_3:;
return (uint64_t)UINT64_C(0x1803eed00);
L_1803ef62f_4:;
return UINT64_C(0x1803ef634);
}
uint64_t b_1803ef634(CPU*s){
/* 1803ef634: test bl, 1 */
L_1803ef634_0:;
L_1803ef634_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef634_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef634_3:;
wr(s->u,3,1,(rd(s->r,24,1)&((U)UINT64_C(0x1))));
L_1803ef634_4:;
wr(s->r,519,1,(sx(rd(s->u,3,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803ef634_5:;
wr(s->r,518,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_1803ef634_6:;
wr(s->u,0,1,(rd(s->u,3,1)&((U)UINT64_C(0xff))));
L_1803ef634_7:;
wr(s->u,1,1,pop(rd(s->u,0,1),1));
L_1803ef634_8:;
wr(s->u,2,1,(rd(s->u,1,1)&((U)UINT64_C(0x1))));
L_1803ef634_9:;
wr(s->r,514,1,(rd(s->u,2,1)==((U)UINT64_C(0x0))));
L_1803ef634_10:;
/* 1803ef637: je 0x1803ef641 */
L_1803ef637_0:;
L_1803ef637_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ef641);}
L_1803ef637_2:;
return UINT64_C(0x1803ef639);
}
uint64_t b_1803ef639(CPU*s){
/* 1803ef639: mov rcx, rdi */
L_1803ef639_0:;
L_1803ef639_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803ef639_2:;
/* 1803ef63c: call 0x180003160 */
L_1803ef63c_0:;
L_1803ef63c_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef63c_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef641)));
L_1803ef63c_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803ef63c_4:;
return UINT64_C(0x1803ef641);
}
uint64_t b_1803ef641(CPU*s){
/* 1803ef641: mov rax, rdi */
L_1803ef641_0:;
L_1803ef641_1:;
wr(s->r,0,8,rd(s->r,56,8));
L_1803ef641_2:;
/* 1803ef644: mov rbx, qword ptr [rsp + 0x30] */
L_1803ef644_0:;
L_1803ef644_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ef644_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ef644_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ef644_4:;
/* 1803ef649: add rsp, 0x20 */
L_1803ef649_0:;
L_1803ef649_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ef649_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803ef649_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803ef649_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef649_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ef649_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ef649_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ef649_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ef649_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ef649_10:;
/* 1803ef64d: pop rdi */
L_1803ef64d_0:;
L_1803ef64d_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ef64d_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef64d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef64d_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803ef64d_5:;
/* 1803ef64e: ret  */
L_1803ef64e_0:;
L_1803ef64e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef64e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef64e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ef64e_4:;
return UINT64_C(0x1803ef64f);
}
uint64_t b_1803ef650(CPU*s){
/* 1803ef650: mov qword ptr [rsp + 8], rbx */
L_1803ef650_0:;
L_1803ef650_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ef650_2:;
wr(s->u,28,8,rd(s->r,24,8));
L_1803ef650_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803ef650_4:;
/* 1803ef655: mov qword ptr [rsp + 0x10], rbp */
L_1803ef655_0:;
L_1803ef655_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ef655_2:;
wr(s->u,28,8,rd(s->r,40,8));
L_1803ef655_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803ef655_4:;
/* 1803ef65a: mov qword ptr [rsp + 0x18], rsi */
L_1803ef65a_0:;
L_1803ef65a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803ef65a_2:;
wr(s->u,28,8,rd(s->r,48,8));
L_1803ef65a_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803ef65a_4:;
/* 1803ef65f: push rdi */
L_1803ef65f_0:;
L_1803ef65f_1:;
wr(s->u,57,8,rd(s->r,56,8));
L_1803ef65f_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef65f_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,57,8));
L_1803ef65f_4:;
/* 1803ef660: push r12 */
L_1803ef660_0:;
L_1803ef660_1:;
wr(s->u,57,8,rd(s->r,160,8));
L_1803ef660_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef660_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,57,8));
L_1803ef660_4:;
/* 1803ef662: push r13 */
L_1803ef662_0:;
L_1803ef662_1:;
wr(s->u,57,8,rd(s->r,168,8));
L_1803ef662_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef662_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,57,8));
L_1803ef662_4:;
/* 1803ef664: sub rsp, 0x70 */
L_1803ef664_0:;
L_1803ef664_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x70))));
L_1803ef664_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x70)),8,1));
L_1803ef664_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x70))));
L_1803ef664_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef664_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ef664_6:;
wr(s->u,65,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ef664_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803ef664_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ef664_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ef664_10:;
/* 1803ef668: movss xmm5, dword ptr [rip + 0x25d5d4] */
L_1803ef668_0:;
L_1803ef668_1:;
wr(s->r,4928,4,mr(UINT64_C(0x18064cc44),4));
L_1803ef668_2:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ef668_3:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ef668_4:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ef668_5:;
/* 1803ef670: movaps xmmword ptr [rsp + 0x60], xmm6 */
L_1803ef670_0:;
L_1803ef670_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803ef670_2:;
wr(s->u,36,16,rd(s->r,4992,16));
L_1803ef670_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,36,16));
L_1803ef670_4:;
/* 1803ef675: movss xmm6, dword ptr [rsp + 0xb0] */
L_1803ef675_0:;
L_1803ef675_1:;
wr(s->u,16,8,(((U)UINT64_C(0xb0))+rd(s->r,32,8)));
L_1803ef675_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803ef675_3:;
wr(s->r,4992,4,rd(s->u,24,4));
L_1803ef675_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ef675_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ef675_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ef675_7:;
/* 1803ef67e: movaps xmmword ptr [rsp + 0x50], xmm7 */
L_1803ef67e_0:;
L_1803ef67e_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ef67e_2:;
wr(s->u,36,16,rd(s->r,5056,16));
L_1803ef67e_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,36,16));
L_1803ef67e_4:;
/* 1803ef683: movaps xmm2, xmm5 */
L_1803ef683_0:;
L_1803ef683_1:;
wr(s->r,4736,4,rd(s->r,4928,4));
L_1803ef683_2:;
wr(s->r,4740,4,rd(s->r,4932,4));
L_1803ef683_3:;
wr(s->r,4744,4,rd(s->r,4936,4));
L_1803ef683_4:;
wr(s->r,4748,4,rd(s->r,4940,4));
L_1803ef683_5:;
/* 1803ef686: mov rdi, rcx */
L_1803ef686_0:;
L_1803ef686_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803ef686_2:;
/* 1803ef689: movsxd rcx, dword ptr [rcx + 0x10] */
L_1803ef689_0:;
L_1803ef689_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ef689_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef689_3:;
wr(s->r,8,8,(U)sx(rd(s->u,52,4),4));
L_1803ef689_4:;
/* 1803ef68d: xor r12d, r12d */
L_1803ef68d_0:;
L_1803ef68d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef68d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef68d_3:;
wr(s->r,160,4,(rd(s->r,160,4)^rd(s->r,160,4)));
L_1803ef68d_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803ef68d_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef68d_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803ef68d_7:;
wr(s->u,65,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803ef68d_8:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803ef68d_9:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ef68d_10:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ef68d_11:;
/* 1803ef690: mov r13, r8 */
L_1803ef690_0:;
L_1803ef690_1:;
wr(s->r,168,8,rd(s->r,128,8));
L_1803ef690_2:;
/* 1803ef693: mov r11, rdx */
L_1803ef693_0:;
L_1803ef693_1:;
wr(s->r,152,8,rd(s->r,16,8));
L_1803ef693_2:;
/* 1803ef696: mov r10, rcx */
L_1803ef696_0:;
L_1803ef696_1:;
wr(s->r,144,8,rd(s->r,8,8));
L_1803ef696_2:;
/* 1803ef699: movss xmm7, dword ptr [rip + 0x41d4df] */
L_1803ef699_0:;
L_1803ef699_1:;
wr(s->r,5056,4,mr(UINT64_C(0x18080cb80),4));
L_1803ef699_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803ef699_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803ef699_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803ef699_5:;
/* 1803ef6a1: divss xmm6, xmm3 */
L_1803ef6a1_0:;
L_1803ef6a1_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)/fv(rd(s->r,4800,4),4),4));
L_1803ef6a1_2:;
/* 1803ef6a5: movsd xmm3, qword ptr [rip + 0x25d4cb] */
L_1803ef6a5_0:;
L_1803ef6a5_1:;
wr(s->r,4800,8,mr(UINT64_C(0x18064cb78),8));
L_1803ef6a5_2:;
wr(s->r,4808,8,((U)UINT64_C(0x0)));
L_1803ef6a5_3:;
/* 1803ef6ad: movaps xmmword ptr [rsp + 0x40], xmm8 */
L_1803ef6ad_0:;
L_1803ef6ad_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ef6ad_2:;
wr(s->u,36,16,rd(s->r,5120,16));
L_1803ef6ad_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,36,16));
L_1803ef6ad_4:;
/* 1803ef6b3: divss xmm2, xmm6 */
L_1803ef6b3_0:;
L_1803ef6b3_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)/fv(rd(s->r,4992,4),4),4));
L_1803ef6b3_2:;
/* 1803ef6b7: comiss xmm2, xmm5 */
L_1803ef6b7_0:;
L_1803ef6b7_1:;
wr(s->u,75,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803ef6b7_2:;
wr(s->u,76,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803ef6b7_3:;
wr(s->r,514,1,((rd(s->u,75,1)!=0)||(rd(s->u,76,1)!=0)));
L_1803ef6b7_4:;
wr(s->u,77,1,(fv(rd(s->r,4736,4),4)==fv(rd(s->r,4928,4),4)));
L_1803ef6b7_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,77,1)));
L_1803ef6b7_6:;
wr(s->u,78,1,(fv(rd(s->r,4736,4),4)<fv(rd(s->r,4928,4),4)));
L_1803ef6b7_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,78,1)));
L_1803ef6b7_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef6b7_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ef6b7_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ef6b7_11:;
/* 1803ef6ba: jae 0x1803ef6c2 */
L_1803ef6ba_0:;
L_1803ef6ba_1:;
wr(s->u,56,1,(!rd(s->r,512,1)));
L_1803ef6ba_2:;
if(rd(s->u,56,1)){return UINT64_C(0x1803ef6c2);}
L_1803ef6ba_3:;
return UINT64_C(0x1803ef6bc);
}
uint64_t b_1803ef6bc(CPU*s){
/* 1803ef6bc: movapd xmm4, xmm3 */
L_1803ef6bc_0:;
L_1803ef6bc_1:;
wr(s->r,4864,8,rd(s->r,4800,8));
L_1803ef6bc_2:;
wr(s->r,4872,8,rd(s->r,4808,8));
L_1803ef6bc_3:;
/* 1803ef6c0: jmp 0x1803ef6c8 */
L_1803ef6c0_0:;
L_1803ef6c0_1:;
return UINT64_C(0x1803ef6c8);
L_1803ef6c0_2:;
return UINT64_C(0x1803ef6c2);
}
uint64_t b_1803ef6c2(CPU*s){
/* 1803ef6c2: unpcklps xmm2, xmm2 */
L_1803ef6c2_0:;
L_1803ef6c2_1:;
wr(s->r,4744,4,rd(s->r,4740,4));
L_1803ef6c2_2:;
wr(s->r,4748,4,rd(s->r,4740,4));
L_1803ef6c2_3:;
wr(s->r,4740,4,rd(s->r,4736,4));
L_1803ef6c2_4:;
/* 1803ef6c5: cvtps2pd xmm4, xmm2 */
L_1803ef6c5_0:;
L_1803ef6c5_1:;
wr(s->u,37,8,rd(s->r,4736,8));
L_1803ef6c5_2:;
wr(s->r,4864,8,fb(fv(rd(s->u,37,4),4),8));
L_1803ef6c5_3:;
wr(s->r,4872,8,fb(fv(rd(s->u,41,4),4),8));
L_1803ef6c5_4:;
/* 1803ef6c8: movd xmm1, dword ptr [rdi + 0x2c] */
L_1803ef6c8_0:;
L_1803ef6c8_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x2c))));
L_1803ef6c8_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef6c8_3:;
wr(s->r,4672,16,rd(s->u,8,4));
L_1803ef6c8_4:;
/* 1803ef6cd: cvtdq2pd xmm1, xmm1 */
L_1803ef6cd_0:;
L_1803ef6cd_1:;
wr(s->u,29,8,rd(s->r,4672,8));
L_1803ef6cd_2:;
wr(s->r,4672,8,fb((double)sx(rd(s->u,29,4),4),8));
L_1803ef6cd_3:;
wr(s->r,4680,8,fb((double)sx(rd(s->u,33,4),4),8));
L_1803ef6cd_4:;
/* 1803ef6d1: movapd xmm0, xmm1 */
L_1803ef6d1_0:;
L_1803ef6d1_1:;
wr(s->r,4608,8,rd(s->r,4672,8));
L_1803ef6d1_2:;
wr(s->r,4616,8,rd(s->r,4680,8));
L_1803ef6d1_3:;
/* 1803ef6d5: mulsd xmm0, xmm4 */
L_1803ef6d5_0:;
L_1803ef6d5_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4864,8),8),8));
L_1803ef6d5_2:;
/* 1803ef6d9: addsd xmm0, xmm3 */
L_1803ef6d9_0:;
L_1803ef6d9_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803ef6d9_2:;
/* 1803ef6dd: cvttsd2si eax, xmm0 */
L_1803ef6dd_0:;
L_1803ef6dd_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,8),8),4));
L_1803ef6dd_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef6dd_3:;
/* 1803ef6e1: cmp ecx, eax */
L_1803ef6e1_0:;
L_1803ef6e1_1:;
wr(s->u,21,4,rd(s->r,0,4));
L_1803ef6e1_2:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,21,4)));
L_1803ef6e1_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,21,4),4,1));
L_1803ef6e1_4:;
wr(s->u,25,4,(rd(s->r,8,4)-rd(s->u,21,4)));
L_1803ef6e1_5:;
wr(s->r,519,1,(sx(rd(s->u,25,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef6e1_6:;
wr(s->r,518,1,(rd(s->u,25,4)==((U)UINT64_C(0x0))));
L_1803ef6e1_7:;
wr(s->u,15,4,(rd(s->u,25,4)&((U)UINT64_C(0xff))));
L_1803ef6e1_8:;
wr(s->u,19,1,pop(rd(s->u,15,4),4));
L_1803ef6e1_9:;
wr(s->u,20,1,(rd(s->u,19,1)&((U)UINT64_C(0x1))));
L_1803ef6e1_10:;
wr(s->r,514,1,(rd(s->u,20,1)==((U)UINT64_C(0x0))));
L_1803ef6e1_11:;
/* 1803ef6e3: jg 0x1803ef702 */
L_1803ef6e3_0:;
L_1803ef6e3_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803ef6e3_2:;
wr(s->u,13,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803ef6e3_3:;
wr(s->u,14,1,((rd(s->u,12,1)!=0)&&(rd(s->u,13,1)!=0)));
L_1803ef6e3_4:;
if(rd(s->u,14,1)){return UINT64_C(0x1803ef702);}
L_1803ef6e3_5:;
return UINT64_C(0x1803ef6e5);
}
uint64_t b_1803ef6c8(CPU*s){
/* 1803ef6c8: movd xmm1, dword ptr [rdi + 0x2c] */
L_1803ef6c8_0:;
L_1803ef6c8_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x2c))));
L_1803ef6c8_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef6c8_3:;
wr(s->r,4672,16,rd(s->u,8,4));
L_1803ef6c8_4:;
/* 1803ef6cd: cvtdq2pd xmm1, xmm1 */
L_1803ef6cd_0:;
L_1803ef6cd_1:;
wr(s->u,29,8,rd(s->r,4672,8));
L_1803ef6cd_2:;
wr(s->r,4672,8,fb((double)sx(rd(s->u,29,4),4),8));
L_1803ef6cd_3:;
wr(s->r,4680,8,fb((double)sx(rd(s->u,33,4),4),8));
L_1803ef6cd_4:;
/* 1803ef6d1: movapd xmm0, xmm1 */
L_1803ef6d1_0:;
L_1803ef6d1_1:;
wr(s->r,4608,8,rd(s->r,4672,8));
L_1803ef6d1_2:;
wr(s->r,4616,8,rd(s->r,4680,8));
L_1803ef6d1_3:;
/* 1803ef6d5: mulsd xmm0, xmm4 */
L_1803ef6d5_0:;
L_1803ef6d5_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4864,8),8),8));
L_1803ef6d5_2:;
/* 1803ef6d9: addsd xmm0, xmm3 */
L_1803ef6d9_0:;
L_1803ef6d9_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803ef6d9_2:;
/* 1803ef6dd: cvttsd2si eax, xmm0 */
L_1803ef6dd_0:;
L_1803ef6dd_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,8),8),4));
L_1803ef6dd_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef6dd_3:;
/* 1803ef6e1: cmp ecx, eax */
L_1803ef6e1_0:;
L_1803ef6e1_1:;
wr(s->u,21,4,rd(s->r,0,4));
L_1803ef6e1_2:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,21,4)));
L_1803ef6e1_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,21,4),4,1));
L_1803ef6e1_4:;
wr(s->u,25,4,(rd(s->r,8,4)-rd(s->u,21,4)));
L_1803ef6e1_5:;
wr(s->r,519,1,(sx(rd(s->u,25,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef6e1_6:;
wr(s->r,518,1,(rd(s->u,25,4)==((U)UINT64_C(0x0))));
L_1803ef6e1_7:;
wr(s->u,15,4,(rd(s->u,25,4)&((U)UINT64_C(0xff))));
L_1803ef6e1_8:;
wr(s->u,19,1,pop(rd(s->u,15,4),4));
L_1803ef6e1_9:;
wr(s->u,20,1,(rd(s->u,19,1)&((U)UINT64_C(0x1))));
L_1803ef6e1_10:;
wr(s->r,514,1,(rd(s->u,20,1)==((U)UINT64_C(0x0))));
L_1803ef6e1_11:;
/* 1803ef6e3: jg 0x1803ef702 */
L_1803ef6e3_0:;
L_1803ef6e3_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803ef6e3_2:;
wr(s->u,13,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803ef6e3_3:;
wr(s->u,14,1,((rd(s->u,12,1)!=0)&&(rd(s->u,13,1)!=0)));
L_1803ef6e3_4:;
if(rd(s->u,14,1)){return UINT64_C(0x1803ef702);}
L_1803ef6e3_5:;
return UINT64_C(0x1803ef6e5);
}
uint64_t b_1803ef6e5(CPU*s){
/* 1803ef6e5: comiss xmm2, xmm5 */
L_1803ef6e5_0:;
L_1803ef6e5_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803ef6e5_2:;
wr(s->u,2,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803ef6e5_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803ef6e5_4:;
wr(s->u,3,1,(fv(rd(s->r,4736,4),4)==fv(rd(s->r,4928,4),4)));
L_1803ef6e5_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ef6e5_6:;
wr(s->u,4,1,(fv(rd(s->r,4736,4),4)<fv(rd(s->r,4928,4),4)));
L_1803ef6e5_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803ef6e5_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef6e5_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ef6e5_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ef6e5_11:;
/* 1803ef6e8: jae 0x1803ef6f0 */
L_1803ef6e8_0:;
L_1803ef6e8_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803ef6e8_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ef6f0);}
L_1803ef6e8_3:;
return UINT64_C(0x1803ef6ea);
}
uint64_t b_1803ef6ea(CPU*s){
/* 1803ef6ea: movapd xmm0, xmm3 */
L_1803ef6ea_0:;
L_1803ef6ea_1:;
wr(s->r,4608,8,rd(s->r,4800,8));
L_1803ef6ea_2:;
wr(s->r,4616,8,rd(s->r,4808,8));
L_1803ef6ea_3:;
/* 1803ef6ee: jmp 0x1803ef6f6 */
L_1803ef6ee_0:;
L_1803ef6ee_1:;
return UINT64_C(0x1803ef6f6);
L_1803ef6ee_2:;
return UINT64_C(0x1803ef6f0);
}
uint64_t b_1803ef6f0(CPU*s){
/* 1803ef6f0: unpcklps xmm2, xmm2 */
L_1803ef6f0_0:;
L_1803ef6f0_1:;
wr(s->r,4744,4,rd(s->r,4740,4));
L_1803ef6f0_2:;
wr(s->r,4748,4,rd(s->r,4740,4));
L_1803ef6f0_3:;
wr(s->r,4740,4,rd(s->r,4736,4));
L_1803ef6f0_4:;
/* 1803ef6f3: cvtps2pd xmm0, xmm2 */
L_1803ef6f3_0:;
L_1803ef6f3_1:;
wr(s->u,50,8,rd(s->r,4736,8));
L_1803ef6f3_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,50,4),4),8));
L_1803ef6f3_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,54,4),4),8));
L_1803ef6f3_4:;
/* 1803ef6f6: mulsd xmm1, xmm0 */
L_1803ef6f6_0:;
L_1803ef6f6_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803ef6f6_2:;
/* 1803ef6fa: addsd xmm1, xmm3 */
L_1803ef6fa_0:;
L_1803ef6fa_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803ef6fa_2:;
/* 1803ef6fe: cvttsd2si ecx, xmm1 */
L_1803ef6fe_0:;
L_1803ef6fe_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,8),8),4));
L_1803ef6fe_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef6fe_3:;
/* 1803ef702: movsxd r9, dword ptr [rsp + 0xb8] */
L_1803ef702_0:;
L_1803ef702_1:;
wr(s->u,8,8,(((U)UINT64_C(0xb8))+rd(s->r,32,8)));
L_1803ef702_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ef702_3:;
wr(s->r,136,8,(U)sx(rd(s->u,20,4),4));
L_1803ef702_4:;
/* 1803ef70a: movsxd rdx, ecx */
L_1803ef70a_0:;
L_1803ef70a_1:;
wr(s->r,16,8,(U)sx(rd(s->r,8,4),4));
L_1803ef70a_2:;
/* 1803ef70d: mov dword ptr [rdi + 0x10], ecx */
L_1803ef70d_0:;
L_1803ef70d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ef70d_2:;
wr(s->u,16,4,rd(s->r,8,4));
L_1803ef70d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ef70d_4:;
/* 1803ef710: mov dword ptr [rdi + 0x38], r9d */
L_1803ef710_0:;
L_1803ef710_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_1803ef710_2:;
wr(s->u,16,4,rd(s->r,136,4));
L_1803ef710_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ef710_4:;
/* 1803ef714: cmp rdx, r10 */
L_1803ef714_0:;
L_1803ef714_1:;
wr(s->u,34,8,rd(s->r,144,8));
L_1803ef714_2:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,34,8)));
L_1803ef714_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,34,8),8,1));
L_1803ef714_4:;
wr(s->u,42,8,(rd(s->r,16,8)-rd(s->u,34,8)));
L_1803ef714_5:;
wr(s->r,519,1,(sx(rd(s->u,42,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef714_6:;
wr(s->r,518,1,(rd(s->u,42,8)==((U)UINT64_C(0x0))));
L_1803ef714_7:;
wr(s->u,24,8,(rd(s->u,42,8)&((U)UINT64_C(0xff))));
L_1803ef714_8:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ef714_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ef714_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ef714_11:;
/* 1803ef717: je 0x1803ef750 */
L_1803ef717_0:;
L_1803ef717_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ef750);}
L_1803ef717_2:;
return UINT64_C(0x1803ef719);
}
uint64_t b_1803ef6f6(CPU*s){
/* 1803ef6f6: mulsd xmm1, xmm0 */
L_1803ef6f6_0:;
L_1803ef6f6_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803ef6f6_2:;
/* 1803ef6fa: addsd xmm1, xmm3 */
L_1803ef6fa_0:;
L_1803ef6fa_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803ef6fa_2:;
/* 1803ef6fe: cvttsd2si ecx, xmm1 */
L_1803ef6fe_0:;
L_1803ef6fe_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,8),8),4));
L_1803ef6fe_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef6fe_3:;
/* 1803ef702: movsxd r9, dword ptr [rsp + 0xb8] */
L_1803ef702_0:;
L_1803ef702_1:;
wr(s->u,8,8,(((U)UINT64_C(0xb8))+rd(s->r,32,8)));
L_1803ef702_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ef702_3:;
wr(s->r,136,8,(U)sx(rd(s->u,20,4),4));
L_1803ef702_4:;
/* 1803ef70a: movsxd rdx, ecx */
L_1803ef70a_0:;
L_1803ef70a_1:;
wr(s->r,16,8,(U)sx(rd(s->r,8,4),4));
L_1803ef70a_2:;
/* 1803ef70d: mov dword ptr [rdi + 0x10], ecx */
L_1803ef70d_0:;
L_1803ef70d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ef70d_2:;
wr(s->u,16,4,rd(s->r,8,4));
L_1803ef70d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ef70d_4:;
/* 1803ef710: mov dword ptr [rdi + 0x38], r9d */
L_1803ef710_0:;
L_1803ef710_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_1803ef710_2:;
wr(s->u,16,4,rd(s->r,136,4));
L_1803ef710_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ef710_4:;
/* 1803ef714: cmp rdx, r10 */
L_1803ef714_0:;
L_1803ef714_1:;
wr(s->u,34,8,rd(s->r,144,8));
L_1803ef714_2:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,34,8)));
L_1803ef714_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,34,8),8,1));
L_1803ef714_4:;
wr(s->u,42,8,(rd(s->r,16,8)-rd(s->u,34,8)));
L_1803ef714_5:;
wr(s->r,519,1,(sx(rd(s->u,42,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef714_6:;
wr(s->r,518,1,(rd(s->u,42,8)==((U)UINT64_C(0x0))));
L_1803ef714_7:;
wr(s->u,24,8,(rd(s->u,42,8)&((U)UINT64_C(0xff))));
L_1803ef714_8:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ef714_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ef714_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ef714_11:;
/* 1803ef717: je 0x1803ef750 */
L_1803ef717_0:;
L_1803ef717_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ef750);}
L_1803ef717_2:;
return UINT64_C(0x1803ef719);
}
uint64_t b_1803ef702(CPU*s){
/* 1803ef702: movsxd r9, dword ptr [rsp + 0xb8] */
L_1803ef702_0:;
L_1803ef702_1:;
wr(s->u,8,8,(((U)UINT64_C(0xb8))+rd(s->r,32,8)));
L_1803ef702_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ef702_3:;
wr(s->r,136,8,(U)sx(rd(s->u,20,4),4));
L_1803ef702_4:;
/* 1803ef70a: movsxd rdx, ecx */
L_1803ef70a_0:;
L_1803ef70a_1:;
wr(s->r,16,8,(U)sx(rd(s->r,8,4),4));
L_1803ef70a_2:;
/* 1803ef70d: mov dword ptr [rdi + 0x10], ecx */
L_1803ef70d_0:;
L_1803ef70d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ef70d_2:;
wr(s->u,16,4,rd(s->r,8,4));
L_1803ef70d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ef70d_4:;
/* 1803ef710: mov dword ptr [rdi + 0x38], r9d */
L_1803ef710_0:;
L_1803ef710_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_1803ef710_2:;
wr(s->u,16,4,rd(s->r,136,4));
L_1803ef710_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ef710_4:;
/* 1803ef714: cmp rdx, r10 */
L_1803ef714_0:;
L_1803ef714_1:;
wr(s->u,34,8,rd(s->r,144,8));
L_1803ef714_2:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,34,8)));
L_1803ef714_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,34,8),8,1));
L_1803ef714_4:;
wr(s->u,42,8,(rd(s->r,16,8)-rd(s->u,34,8)));
L_1803ef714_5:;
wr(s->r,519,1,(sx(rd(s->u,42,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef714_6:;
wr(s->r,518,1,(rd(s->u,42,8)==((U)UINT64_C(0x0))));
L_1803ef714_7:;
wr(s->u,24,8,(rd(s->u,42,8)&((U)UINT64_C(0xff))));
L_1803ef714_8:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ef714_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ef714_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ef714_11:;
/* 1803ef717: je 0x1803ef750 */
L_1803ef717_0:;
L_1803ef717_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ef750);}
L_1803ef717_2:;
return UINT64_C(0x1803ef719);
}
uint64_t b_1803ef719(CPU*s){
/* 1803ef719: sub rdx, r10 */
L_1803ef719_0:;
L_1803ef719_1:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->r,144,8)));
L_1803ef719_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->r,144,8),8,1));
L_1803ef719_3:;
wr(s->r,16,8,(rd(s->r,16,8)-rd(s->r,144,8)));
L_1803ef719_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef719_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803ef719_6:;
wr(s->u,29,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803ef719_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803ef719_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ef719_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ef719_10:;
/* 1803ef71c: pxor xmm0, xmm0 */
L_1803ef71c_0:;
L_1803ef71c_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803ef71c_2:;
/* 1803ef720: mov rax, r9 */
L_1803ef720_0:;
L_1803ef720_1:;
wr(s->r,0,8,rd(s->r,136,8));
L_1803ef720_2:;
/* 1803ef723: add dword ptr [rdi + 0x14], edx */
L_1803ef723_0:;
L_1803ef723_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x14))));
L_1803ef723_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef723_3:;
wr(s->r,512,1,(((rd(s->u,16,4)+rd(s->r,16,4))&(((U)1<<32)-1))<rd(s->u,16,4)));
L_1803ef723_4:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef723_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,16,4),rd(s->r,16,4),4,0));
L_1803ef723_6:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef723_7:;
wr(s->u,16,4,(rd(s->u,16,4)+rd(s->r,16,4)));
L_1803ef723_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ef723_9:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef723_10:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef723_11:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef723_12:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_1803ef723_13:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef723_14:;
wr(s->u,29,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_1803ef723_15:;
wr(s->u,37,1,pop(rd(s->u,29,4),4));
L_1803ef723_16:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ef723_17:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ef723_18:;
/* 1803ef726: add dword ptr [rdi + 0x18], edx */
L_1803ef726_0:;
L_1803ef726_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803ef726_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef726_3:;
wr(s->r,512,1,(((rd(s->u,16,4)+rd(s->r,16,4))&(((U)1<<32)-1))<rd(s->u,16,4)));
L_1803ef726_4:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef726_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,16,4),rd(s->r,16,4),4,0));
L_1803ef726_6:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef726_7:;
wr(s->u,16,4,(rd(s->u,16,4)+rd(s->r,16,4)));
L_1803ef726_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ef726_9:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef726_10:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef726_11:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef726_12:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_1803ef726_13:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef726_14:;
wr(s->u,29,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_1803ef726_15:;
wr(s->u,37,1,pop(rd(s->u,29,4),4));
L_1803ef726_16:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ef726_17:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ef726_18:;
/* 1803ef729: cvtsi2sd xmm0, rdx */
L_1803ef729_0:;
L_1803ef729_1:;
wr(s->r,4608,8,fb((double)sx(rd(s->r,16,8),8),8));
L_1803ef729_2:;
/* 1803ef72e: imul rax, rdx */
L_1803ef72e_0:;
L_1803ef72e_1:;
wr(s->u,87,16,(U)sx(rd(s->r,0,8),8));
L_1803ef72e_2:;
wr(s->u,103,16,(U)sx(rd(s->r,16,8),8));
L_1803ef72e_3:;
wr(s->u,119,16,(rd(s->u,87,16)*rd(s->u,103,16)));
L_1803ef72e_4:;
wr(s->r,0,8,(rd(s->r,0,8)*rd(s->r,16,8)));
L_1803ef72e_5:;
wr(s->u,135,8,(rd(s->u,119,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef72e_6:;
wr(s->u,39,16,(U)sx(rd(s->r,0,8),8));
L_1803ef72e_7:;
wr(s->r,512,1,(rd(s->u,39,16)!=rd(s->u,119,16)));
L_1803ef72e_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef72e_9:;
/* 1803ef732: neg rax */
L_1803ef732_0:;
L_1803ef732_1:;
wr(s->r,512,1,(rd(s->r,0,8)!=((U)UINT64_C(0x0))));
L_1803ef732_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,0,8),8,1));
L_1803ef732_3:;
wr(s->r,0,8,(-rd(s->r,0,8)));
L_1803ef732_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef732_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ef732_6:;
wr(s->u,29,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ef732_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803ef732_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ef732_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ef732_10:;
/* 1803ef735: imul edx, r9d */
L_1803ef735_0:;
L_1803ef735_1:;
wr(s->u,59,8,(U)sx(rd(s->r,16,4),4));
L_1803ef735_2:;
wr(s->u,67,8,(U)sx(rd(s->r,136,4),4));
L_1803ef735_3:;
wr(s->u,75,8,(rd(s->u,59,8)*rd(s->u,67,8)));
L_1803ef735_4:;
wr(s->r,16,4,(rd(s->u,75,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef735_5:;
wr(s->u,83,4,(rd(s->u,75,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ef735_6:;
wr(s->u,39,8,(U)sx(rd(s->r,16,4),4));
L_1803ef735_7:;
wr(s->r,512,1,(rd(s->u,39,8)!=rd(s->u,75,8)));
L_1803ef735_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef735_9:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ef735_10:;
/* 1803ef739: add rax, rax */
L_1803ef739_0:;
L_1803ef739_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803ef739_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->r,0,8),8,0));
L_1803ef739_3:;
wr(s->r,0,8,(rd(s->r,0,8)+rd(s->r,0,8)));
L_1803ef739_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef739_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ef739_6:;
wr(s->u,29,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ef739_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803ef739_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ef739_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ef739_10:;
/* 1803ef73c: add qword ptr [rdi + 0x80], rax */
L_1803ef73c_0:;
L_1803ef73c_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x80))));
L_1803ef73c_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef73c_3:;
wr(s->r,512,1,(((rd(s->u,20,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->u,20,8)));
L_1803ef73c_4:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef73c_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,8),rd(s->r,0,8),8,0));
L_1803ef73c_6:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef73c_7:;
wr(s->u,20,8,(rd(s->u,20,8)+rd(s->r,0,8)));
L_1803ef73c_8:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803ef73c_9:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef73c_10:;
wr(s->r,519,1,(sx(rd(s->u,20,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef73c_11:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef73c_12:;
wr(s->r,518,1,(rd(s->u,20,8)==((U)UINT64_C(0x0))));
L_1803ef73c_13:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef73c_14:;
wr(s->u,29,8,(rd(s->u,20,8)&((U)UINT64_C(0xff))));
L_1803ef73c_15:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803ef73c_16:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ef73c_17:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ef73c_18:;
/* 1803ef743: add dword ptr [rdi + 0x30], edx */
L_1803ef743_0:;
L_1803ef743_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803ef743_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef743_3:;
wr(s->r,512,1,(((rd(s->u,16,4)+rd(s->r,16,4))&(((U)1<<32)-1))<rd(s->u,16,4)));
L_1803ef743_4:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef743_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,16,4),rd(s->r,16,4),4,0));
L_1803ef743_6:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef743_7:;
wr(s->u,16,4,(rd(s->u,16,4)+rd(s->r,16,4)));
L_1803ef743_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ef743_9:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef743_10:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef743_11:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef743_12:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_1803ef743_13:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef743_14:;
wr(s->u,29,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_1803ef743_15:;
wr(s->u,37,1,pop(rd(s->u,29,4),4));
L_1803ef743_16:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ef743_17:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ef743_18:;
/* 1803ef746: addsd xmm0, qword ptr [rdi + 0x50] */
L_1803ef746_0:;
L_1803ef746_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x50))));
L_1803ef746_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ef746_3:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->u,20,8),8),8));
L_1803ef746_4:;
/* 1803ef74b: movsd qword ptr [rdi + 0x50], xmm0 */
L_1803ef74b_0:;
L_1803ef74b_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x50))));
L_1803ef74b_2:;
wr(s->u,20,8,rd(s->r,4608,8));
L_1803ef74b_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_1803ef74b_4:;
/* 1803ef750: comiss xmm6, xmm5 */
L_1803ef750_0:;
L_1803ef750_1:;
wr(s->u,55,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803ef750_2:;
wr(s->u,56,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803ef750_3:;
wr(s->r,514,1,((rd(s->u,55,1)!=0)||(rd(s->u,56,1)!=0)));
L_1803ef750_4:;
wr(s->u,57,1,(fv(rd(s->r,4992,4),4)==fv(rd(s->r,4928,4),4)));
L_1803ef750_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,57,1)));
L_1803ef750_6:;
wr(s->u,58,1,(fv(rd(s->r,4992,4),4)<fv(rd(s->r,4928,4),4)));
L_1803ef750_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,58,1)));
L_1803ef750_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef750_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ef750_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ef750_11:;
/* 1803ef753: jae 0x1803ef75f */
L_1803ef753_0:;
L_1803ef753_1:;
wr(s->u,28,1,(!rd(s->r,512,1)));
L_1803ef753_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803ef75f);}
L_1803ef753_3:;
return UINT64_C(0x1803ef755);
}
uint64_t b_1803ef750(CPU*s){
/* 1803ef750: comiss xmm6, xmm5 */
L_1803ef750_0:;
L_1803ef750_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803ef750_2:;
wr(s->u,2,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803ef750_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803ef750_4:;
wr(s->u,3,1,(fv(rd(s->r,4992,4),4)==fv(rd(s->r,4928,4),4)));
L_1803ef750_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ef750_6:;
wr(s->u,4,1,(fv(rd(s->r,4992,4),4)<fv(rd(s->r,4928,4),4)));
L_1803ef750_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803ef750_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef750_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ef750_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ef750_11:;
/* 1803ef753: jae 0x1803ef75f */
L_1803ef753_0:;
L_1803ef753_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803ef753_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ef75f);}
L_1803ef753_3:;
return UINT64_C(0x1803ef755);
}
uint64_t b_1803ef755(CPU*s){
/* 1803ef755: movaps xmm0, xmm6 */
L_1803ef755_0:;
L_1803ef755_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803ef755_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803ef755_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803ef755_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803ef755_5:;
/* 1803ef758: mulss xmm0, xmm7 */
L_1803ef758_0:;
L_1803ef758_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ef758_2:;
/* 1803ef75c: movaps xmm7, xmm0 */
L_1803ef75c_0:;
L_1803ef75c_1:;
wr(s->r,5056,4,rd(s->r,4608,4));
L_1803ef75c_2:;
wr(s->r,5060,4,rd(s->r,4612,4));
L_1803ef75c_3:;
wr(s->r,5064,4,rd(s->r,4616,4));
L_1803ef75c_4:;
wr(s->r,5068,4,rd(s->r,4620,4));
L_1803ef75c_5:;
/* 1803ef75f: mov eax, dword ptr [rdi + 0x14] */
L_1803ef75f_0:;
L_1803ef75f_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x14))));
L_1803ef75f_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef75f_3:;
wr(s->r,0,4,rd(s->u,40,4));
L_1803ef75f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef75f_5:;
/* 1803ef762: mov ebx, dword ptr [rsp + 0xc0] */
L_1803ef762_0:;
L_1803ef762_1:;
wr(s->u,32,8,(((U)UINT64_C(0xc0))+rd(s->r,32,8)));
L_1803ef762_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803ef762_3:;
wr(s->r,24,4,rd(s->u,40,4));
L_1803ef762_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803ef762_5:;
/* 1803ef769: mov r8, r9 */
L_1803ef769_0:;
L_1803ef769_1:;
wr(s->r,128,8,rd(s->r,136,8));
L_1803ef769_2:;
/* 1803ef76c: add eax, dword ptr [rdi + 0x28] */
L_1803ef76c_0:;
L_1803ef76c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x28))));
L_1803ef76c_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef76c_3:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->u,40,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ef76c_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef76c_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,40,4),4,0));
L_1803ef76c_6:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef76c_7:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->u,40,4)));
L_1803ef76c_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef76c_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef76c_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ef76c_11:;
wr(s->u,52,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ef76c_12:;
wr(s->u,60,1,pop(rd(s->u,52,4),4));
L_1803ef76c_13:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803ef76c_14:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803ef76c_15:;
/* 1803ef76f: mov rdx, r11 */
L_1803ef76f_0:;
L_1803ef76f_1:;
wr(s->r,16,8,rd(s->r,152,8));
L_1803ef76f_2:;
/* 1803ef772: imul r8, rbx */
L_1803ef772_0:;
L_1803ef772_1:;
wr(s->u,106,16,(U)sx(rd(s->r,128,8),8));
L_1803ef772_2:;
wr(s->u,122,16,(U)sx(rd(s->r,24,8),8));
L_1803ef772_3:;
wr(s->u,138,16,(rd(s->u,106,16)*rd(s->u,122,16)));
L_1803ef772_4:;
wr(s->r,128,8,(rd(s->r,128,8)*rd(s->r,24,8)));
L_1803ef772_5:;
wr(s->u,154,8,(rd(s->u,138,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef772_6:;
wr(s->u,62,16,(U)sx(rd(s->r,128,8),8));
L_1803ef772_7:;
wr(s->r,512,1,(rd(s->u,62,16)!=rd(s->u,138,16)));
L_1803ef772_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef772_9:;
/* 1803ef776: add r8, r8 */
L_1803ef776_0:;
L_1803ef776_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+rd(s->r,128,8))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803ef776_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->r,128,8),8,0));
L_1803ef776_3:;
wr(s->r,128,8,(rd(s->r,128,8)+rd(s->r,128,8)));
L_1803ef776_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef776_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ef776_6:;
wr(s->u,52,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ef776_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803ef776_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803ef776_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803ef776_10:;
/* 1803ef779: imul eax, r9d */
L_1803ef779_0:;
L_1803ef779_1:;
wr(s->u,78,8,(U)sx(rd(s->r,0,4),4));
L_1803ef779_2:;
wr(s->u,86,8,(U)sx(rd(s->r,136,4),4));
L_1803ef779_3:;
wr(s->u,94,8,(rd(s->u,78,8)*rd(s->u,86,8)));
L_1803ef779_4:;
wr(s->r,0,4,(rd(s->u,94,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef779_5:;
wr(s->u,102,4,(rd(s->u,94,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ef779_6:;
wr(s->u,62,8,(U)sx(rd(s->r,0,4),4));
L_1803ef779_7:;
wr(s->r,512,1,(rd(s->u,62,8)!=rd(s->u,94,8)));
L_1803ef779_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef779_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef779_10:;
/* 1803ef77d: movsxd rcx, eax */
L_1803ef77d_0:;
L_1803ef77d_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803ef77d_2:;
/* 1803ef780: mov rax, qword ptr [rdi + 0x80] */
L_1803ef780_0:;
L_1803ef780_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x80))));
L_1803ef780_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef780_3:;
wr(s->r,0,8,rd(s->u,44,8));
L_1803ef780_4:;
/* 1803ef787: lea rcx, [rax + rcx*2] */
L_1803ef787_0:;
L_1803ef787_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x2))));
L_1803ef787_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803ef787_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803ef787_4:;
/* 1803ef78b: call 0x18000d550 */
L_1803ef78b_0:;
L_1803ef78b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef78b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef790)));
L_1803ef78b_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803ef78b_4:;
return UINT64_C(0x1803ef790);
}
uint64_t b_1803ef75f(CPU*s){
/* 1803ef75f: mov eax, dword ptr [rdi + 0x14] */
L_1803ef75f_0:;
L_1803ef75f_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x14))));
L_1803ef75f_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef75f_3:;
wr(s->r,0,4,rd(s->u,40,4));
L_1803ef75f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef75f_5:;
/* 1803ef762: mov ebx, dword ptr [rsp + 0xc0] */
L_1803ef762_0:;
L_1803ef762_1:;
wr(s->u,32,8,(((U)UINT64_C(0xc0))+rd(s->r,32,8)));
L_1803ef762_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803ef762_3:;
wr(s->r,24,4,rd(s->u,40,4));
L_1803ef762_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803ef762_5:;
/* 1803ef769: mov r8, r9 */
L_1803ef769_0:;
L_1803ef769_1:;
wr(s->r,128,8,rd(s->r,136,8));
L_1803ef769_2:;
/* 1803ef76c: add eax, dword ptr [rdi + 0x28] */
L_1803ef76c_0:;
L_1803ef76c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x28))));
L_1803ef76c_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef76c_3:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->u,40,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ef76c_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef76c_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,40,4),4,0));
L_1803ef76c_6:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef76c_7:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->u,40,4)));
L_1803ef76c_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef76c_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef76c_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ef76c_11:;
wr(s->u,52,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ef76c_12:;
wr(s->u,60,1,pop(rd(s->u,52,4),4));
L_1803ef76c_13:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803ef76c_14:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803ef76c_15:;
/* 1803ef76f: mov rdx, r11 */
L_1803ef76f_0:;
L_1803ef76f_1:;
wr(s->r,16,8,rd(s->r,152,8));
L_1803ef76f_2:;
/* 1803ef772: imul r8, rbx */
L_1803ef772_0:;
L_1803ef772_1:;
wr(s->u,106,16,(U)sx(rd(s->r,128,8),8));
L_1803ef772_2:;
wr(s->u,122,16,(U)sx(rd(s->r,24,8),8));
L_1803ef772_3:;
wr(s->u,138,16,(rd(s->u,106,16)*rd(s->u,122,16)));
L_1803ef772_4:;
wr(s->r,128,8,(rd(s->r,128,8)*rd(s->r,24,8)));
L_1803ef772_5:;
wr(s->u,154,8,(rd(s->u,138,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef772_6:;
wr(s->u,62,16,(U)sx(rd(s->r,128,8),8));
L_1803ef772_7:;
wr(s->r,512,1,(rd(s->u,62,16)!=rd(s->u,138,16)));
L_1803ef772_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef772_9:;
/* 1803ef776: add r8, r8 */
L_1803ef776_0:;
L_1803ef776_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+rd(s->r,128,8))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803ef776_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->r,128,8),8,0));
L_1803ef776_3:;
wr(s->r,128,8,(rd(s->r,128,8)+rd(s->r,128,8)));
L_1803ef776_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef776_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ef776_6:;
wr(s->u,52,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ef776_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803ef776_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803ef776_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803ef776_10:;
/* 1803ef779: imul eax, r9d */
L_1803ef779_0:;
L_1803ef779_1:;
wr(s->u,78,8,(U)sx(rd(s->r,0,4),4));
L_1803ef779_2:;
wr(s->u,86,8,(U)sx(rd(s->r,136,4),4));
L_1803ef779_3:;
wr(s->u,94,8,(rd(s->u,78,8)*rd(s->u,86,8)));
L_1803ef779_4:;
wr(s->r,0,4,(rd(s->u,94,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef779_5:;
wr(s->u,102,4,(rd(s->u,94,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ef779_6:;
wr(s->u,62,8,(U)sx(rd(s->r,0,4),4));
L_1803ef779_7:;
wr(s->r,512,1,(rd(s->u,62,8)!=rd(s->u,94,8)));
L_1803ef779_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef779_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef779_10:;
/* 1803ef77d: movsxd rcx, eax */
L_1803ef77d_0:;
L_1803ef77d_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803ef77d_2:;
/* 1803ef780: mov rax, qword ptr [rdi + 0x80] */
L_1803ef780_0:;
L_1803ef780_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x80))));
L_1803ef780_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef780_3:;
wr(s->r,0,8,rd(s->u,44,8));
L_1803ef780_4:;
/* 1803ef787: lea rcx, [rax + rcx*2] */
L_1803ef787_0:;
L_1803ef787_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x2))));
L_1803ef787_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803ef787_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803ef787_4:;
/* 1803ef78b: call 0x18000d550 */
L_1803ef78b_0:;
L_1803ef78b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef78b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef790)));
L_1803ef78b_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803ef78b_4:;
return UINT64_C(0x1803ef790);
}
uint64_t b_1803ef790(CPU*s){
/* 1803ef790: add dword ptr [rdi + 0x28], ebx */
L_1803ef790_0:;
L_1803ef790_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x28))));
L_1803ef790_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef790_3:;
wr(s->r,512,1,(((rd(s->u,8,4)+rd(s->r,24,4))&(((U)1<<32)-1))<rd(s->u,8,4)));
L_1803ef790_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef790_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,24,4),4,0));
L_1803ef790_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef790_7:;
wr(s->u,8,4,(rd(s->u,8,4)+rd(s->r,24,4)));
L_1803ef790_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef790_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef790_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef790_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef790_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803ef790_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef790_14:;
wr(s->u,16,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803ef790_15:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803ef790_16:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803ef790_17:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803ef790_18:;
/* 1803ef793: mov ecx, dword ptr [rdi + 0x28] */
L_1803ef793_0:;
L_1803ef793_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x28))));
L_1803ef793_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef793_3:;
wr(s->r,8,4,rd(s->u,12,4));
L_1803ef793_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef793_5:;
/* 1803ef796: mov rbp, rcx */
L_1803ef796_0:;
L_1803ef796_1:;
wr(s->r,40,8,rd(s->r,8,8));
L_1803ef796_2:;
/* 1803ef799: mov dword ptr [rdi + 0x1c], r12d */
L_1803ef799_0:;
L_1803ef799_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x1c))));
L_1803ef799_2:;
wr(s->u,8,4,rd(s->r,160,4));
L_1803ef799_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef799_4:;
/* 1803ef79d: cmp dword ptr [rdi + 0x40], r12d */
L_1803ef79d_0:;
L_1803ef79d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x40))));
L_1803ef79d_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef79d_3:;
wr(s->u,22,4,rd(s->u,12,4));
L_1803ef79d_4:;
wr(s->r,512,1,(rd(s->u,22,4)<rd(s->r,160,4)));
L_1803ef79d_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,22,4),rd(s->r,160,4),4,1));
L_1803ef79d_6:;
wr(s->u,26,4,(rd(s->u,22,4)-rd(s->r,160,4)));
L_1803ef79d_7:;
wr(s->r,519,1,(sx(rd(s->u,26,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef79d_8:;
wr(s->r,518,1,(rd(s->u,26,4)==((U)UINT64_C(0x0))));
L_1803ef79d_9:;
wr(s->u,16,4,(rd(s->u,26,4)&((U)UINT64_C(0xff))));
L_1803ef79d_10:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803ef79d_11:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803ef79d_12:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803ef79d_13:;
/* 1803ef7a1: je 0x1803ef7ae */
L_1803ef7a1_0:;
L_1803ef7a1_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ef7ae);}
L_1803ef7a1_2:;
return UINT64_C(0x1803ef7a3);
}
uint64_t b_1803ef7a3(CPU*s){
/* 1803ef7a3: movsxd rax, dword ptr [rdi + 0x10] */
L_1803ef7a3_0:;
L_1803ef7a3_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ef7a3_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef7a3_3:;
wr(s->r,0,8,(U)sx(rd(s->u,20,4),4));
L_1803ef7a3_4:;
/* 1803ef7a7: mov dword ptr [rdi + 0x40], r12d */
L_1803ef7a7_0:;
L_1803ef7a7_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x40))));
L_1803ef7a7_2:;
wr(s->u,8,4,rd(s->r,160,4));
L_1803ef7a7_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef7a7_4:;
/* 1803ef7ab: sub rbp, rax */
L_1803ef7ab_0:;
L_1803ef7ab_1:;
wr(s->r,512,1,(rd(s->r,40,8)<rd(s->r,0,8)));
L_1803ef7ab_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),rd(s->r,0,8),8,1));
L_1803ef7ab_3:;
wr(s->r,40,8,(rd(s->r,40,8)-rd(s->r,0,8)));
L_1803ef7ab_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef7ab_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803ef7ab_6:;
wr(s->u,26,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803ef7ab_7:;
wr(s->u,34,1,pop(rd(s->u,26,8),8));
L_1803ef7ab_8:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803ef7ab_9:;
wr(s->r,514,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803ef7ab_10:;
/* 1803ef7ae: add ecx, dword ptr [rdi + 0x14] */
L_1803ef7ae_0:;
L_1803ef7ae_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x14))));
L_1803ef7ae_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef7ae_3:;
wr(s->r,512,1,(((rd(s->r,8,4)+rd(s->u,20,4))&(((U)1<<32)-1))<rd(s->r,8,4)));
L_1803ef7ae_4:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef7ae_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,20,4),4,0));
L_1803ef7ae_6:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef7ae_7:;
wr(s->r,8,4,(rd(s->r,8,4)+rd(s->u,20,4)));
L_1803ef7ae_8:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef7ae_9:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef7ae_10:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ef7ae_11:;
wr(s->u,26,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ef7ae_12:;
wr(s->u,34,1,pop(rd(s->u,26,4),4));
L_1803ef7ae_13:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803ef7ae_14:;
wr(s->r,514,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803ef7ae_15:;
/* 1803ef7b1: movsd xmm8, qword ptr [rdi + 0x50] */
L_1803ef7b1_0:;
L_1803ef7b1_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x50))));
L_1803ef7b1_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ef7b1_3:;
wr(s->r,5120,8,rd(s->u,12,8));
L_1803ef7b1_4:;
wr(s->r,5128,8,((U)UINT64_C(0x0)));
L_1803ef7b1_5:;
/* 1803ef7b7: lea rsi, [rdi + 0x50] */
L_1803ef7b7_0:;
L_1803ef7b7_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x50))));
L_1803ef7b7_2:;
wr(s->r,48,8,rd(s->u,0,8));
L_1803ef7b7_3:;
/* 1803ef7bb: xor ebx, ebx */
L_1803ef7bb_0:;
L_1803ef7bb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef7bb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef7bb_3:;
wr(s->r,24,4,(rd(s->r,24,4)^rd(s->r,24,4)));
L_1803ef7bb_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803ef7bb_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef7bb_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803ef7bb_7:;
wr(s->u,26,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803ef7bb_8:;
wr(s->u,34,1,pop(rd(s->u,26,4),4));
L_1803ef7bb_9:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803ef7bb_10:;
wr(s->r,514,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803ef7bb_11:;
/* 1803ef7bd: mov dword ptr [rdi + 0x28], ecx */
L_1803ef7bd_0:;
L_1803ef7bd_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x28))));
L_1803ef7bd_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_1803ef7bd_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef7bd_4:;
/* 1803ef7c0: cmp dword ptr [rdi + 0x38], ebx */
L_1803ef7c0_0:;
L_1803ef7c0_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_1803ef7c0_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef7c0_3:;
wr(s->u,36,4,rd(s->u,20,4));
L_1803ef7c0_4:;
wr(s->r,512,1,(rd(s->u,36,4)<rd(s->r,24,4)));
L_1803ef7c0_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,36,4),rd(s->r,24,4),4,1));
L_1803ef7c0_6:;
wr(s->u,40,4,(rd(s->u,36,4)-rd(s->r,24,4)));
L_1803ef7c0_7:;
wr(s->r,519,1,(sx(rd(s->u,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef7c0_8:;
wr(s->r,518,1,(rd(s->u,40,4)==((U)UINT64_C(0x0))));
L_1803ef7c0_9:;
wr(s->u,26,4,(rd(s->u,40,4)&((U)UINT64_C(0xff))));
L_1803ef7c0_10:;
wr(s->u,34,1,pop(rd(s->u,26,4),4));
L_1803ef7c0_11:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803ef7c0_12:;
wr(s->r,514,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803ef7c0_13:;
/* 1803ef7c3: jle 0x1803ef80e */
L_1803ef7c3_0:;
L_1803ef7c3_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ef7c3_2:;
wr(s->u,25,1,((rd(s->r,518,1)!=0)||(rd(s->u,24,1)!=0)));
L_1803ef7c3_3:;
if(rd(s->u,25,1)){return UINT64_C(0x1803ef80e);}
L_1803ef7c3_4:;
return UINT64_C(0x1803ef7c5);
}
uint64_t b_1803ef7ae(CPU*s){
/* 1803ef7ae: add ecx, dword ptr [rdi + 0x14] */
L_1803ef7ae_0:;
L_1803ef7ae_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x14))));
L_1803ef7ae_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef7ae_3:;
wr(s->r,512,1,(((rd(s->r,8,4)+rd(s->u,20,4))&(((U)1<<32)-1))<rd(s->r,8,4)));
L_1803ef7ae_4:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef7ae_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,20,4),4,0));
L_1803ef7ae_6:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef7ae_7:;
wr(s->r,8,4,(rd(s->r,8,4)+rd(s->u,20,4)));
L_1803ef7ae_8:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef7ae_9:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef7ae_10:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ef7ae_11:;
wr(s->u,26,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ef7ae_12:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803ef7ae_13:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803ef7ae_14:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803ef7ae_15:;
/* 1803ef7b1: movsd xmm8, qword ptr [rdi + 0x50] */
L_1803ef7b1_0:;
L_1803ef7b1_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x50))));
L_1803ef7b1_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ef7b1_3:;
wr(s->r,5120,8,rd(s->u,12,8));
L_1803ef7b1_4:;
wr(s->r,5128,8,((U)UINT64_C(0x0)));
L_1803ef7b1_5:;
/* 1803ef7b7: lea rsi, [rdi + 0x50] */
L_1803ef7b7_0:;
L_1803ef7b7_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x50))));
L_1803ef7b7_2:;
wr(s->r,48,8,rd(s->u,0,8));
L_1803ef7b7_3:;
/* 1803ef7bb: xor ebx, ebx */
L_1803ef7bb_0:;
L_1803ef7bb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef7bb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef7bb_3:;
wr(s->r,24,4,(rd(s->r,24,4)^rd(s->r,24,4)));
L_1803ef7bb_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803ef7bb_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef7bb_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803ef7bb_7:;
wr(s->u,26,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803ef7bb_8:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803ef7bb_9:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803ef7bb_10:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803ef7bb_11:;
/* 1803ef7bd: mov dword ptr [rdi + 0x28], ecx */
L_1803ef7bd_0:;
L_1803ef7bd_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x28))));
L_1803ef7bd_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_1803ef7bd_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef7bd_4:;
/* 1803ef7c0: cmp dword ptr [rdi + 0x38], ebx */
L_1803ef7c0_0:;
L_1803ef7c0_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_1803ef7c0_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef7c0_3:;
wr(s->u,32,4,rd(s->u,20,4));
L_1803ef7c0_4:;
wr(s->r,512,1,(rd(s->u,32,4)<rd(s->r,24,4)));
L_1803ef7c0_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,32,4),rd(s->r,24,4),4,1));
L_1803ef7c0_6:;
wr(s->u,36,4,(rd(s->u,32,4)-rd(s->r,24,4)));
L_1803ef7c0_7:;
wr(s->r,519,1,(sx(rd(s->u,36,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef7c0_8:;
wr(s->r,518,1,(rd(s->u,36,4)==((U)UINT64_C(0x0))));
L_1803ef7c0_9:;
wr(s->u,26,4,(rd(s->u,36,4)&((U)UINT64_C(0xff))));
L_1803ef7c0_10:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803ef7c0_11:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803ef7c0_12:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803ef7c0_13:;
/* 1803ef7c3: jle 0x1803ef80e */
L_1803ef7c3_0:;
L_1803ef7c3_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ef7c3_2:;
wr(s->u,25,1,((rd(s->r,518,1)!=0)||(rd(s->u,24,1)!=0)));
L_1803ef7c3_3:;
if(rd(s->u,25,1)){return UINT64_C(0x1803ef80e);}
L_1803ef7c3_4:;
return UINT64_C(0x1803ef7c5);
}
uint64_t b_1803ef7c5(CPU*s){
/* 1803ef7c5: nop word ptr [rax + rax] */
L_1803ef7c5_0:;
L_1803ef7c5_1:;
wr(s->u,48,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ef7c5_2:;
wr(s->u,56,8,(rd(s->r,0,8)+rd(s->u,48,8)));
L_1803ef7c5_3:;
/* 1803ef7d0: mov rax, qword ptr [rdi + 0x80] */
L_1803ef7d0_0:;
L_1803ef7d0_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x80))));
L_1803ef7d0_2:;
wr(s->u,76,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ef7d0_3:;
wr(s->r,0,8,rd(s->u,76,8));
L_1803ef7d0_4:;
/* 1803ef7d7: movss dword ptr [rsp + 0x30], xmm7 */
L_1803ef7d7_0:;
L_1803ef7d7_1:;
wr(s->u,24,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ef7d7_2:;
wr(s->u,64,4,rd(s->r,5056,4));
L_1803ef7d7_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,64,4));
L_1803ef7d7_4:;
/* 1803ef7dd: lea r8, [r13 + rbx*2] */
L_1803ef7dd_0:;
L_1803ef7dd_1:;
wr(s->u,32,8,(rd(s->r,24,8)*((U)UINT64_C(0x2))));
L_1803ef7dd_2:;
wr(s->u,40,8,(rd(s->r,168,8)+rd(s->u,32,8)));
L_1803ef7dd_3:;
wr(s->r,128,8,rd(s->u,40,8));
L_1803ef7dd_4:;
/* 1803ef7e2: lea rdx, [rax + rbx*2] */
L_1803ef7e2_0:;
L_1803ef7e2_1:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x2))));
L_1803ef7e2_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803ef7e2_3:;
wr(s->r,16,8,rd(s->u,16,8));
L_1803ef7e2_4:;
/* 1803ef7e6: movaps xmm3, xmm6 */
L_1803ef7e6_0:;
L_1803ef7e6_1:;
wr(s->r,4800,4,rd(s->r,4992,4));
L_1803ef7e6_2:;
wr(s->r,4804,4,rd(s->r,4996,4));
L_1803ef7e6_3:;
wr(s->r,4808,4,rd(s->r,5000,4));
L_1803ef7e6_4:;
wr(s->r,4812,4,rd(s->r,5004,4));
L_1803ef7e6_5:;
/* 1803ef7e9: mov rcx, rdi */
L_1803ef7e9_0:;
L_1803ef7e9_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803ef7e9_2:;
/* 1803ef7ec: movsd qword ptr [rsi], xmm8 */
L_1803ef7ec_0:;
L_1803ef7ec_1:;
wr(s->u,68,8,rd(s->r,5120,8));
L_1803ef7ec_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,68,8));
L_1803ef7ec_3:;
/* 1803ef7f1: mov dword ptr [rsp + 0x28], ebp */
L_1803ef7f1_0:;
L_1803ef7f1_1:;
wr(s->u,24,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803ef7f1_2:;
wr(s->u,64,4,rd(s->r,40,4));
L_1803ef7f1_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,64,4));
L_1803ef7f1_4:;
/* 1803ef7f5: mov qword ptr [rsp + 0x20], rsi */
L_1803ef7f5_0:;
L_1803ef7f5_1:;
wr(s->u,24,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ef7f5_2:;
wr(s->u,68,8,rd(s->r,48,8));
L_1803ef7f5_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,68,8));
L_1803ef7f5_4:;
/* 1803ef7fa: call 0x1803ef030 */
L_1803ef7fa_0:;
L_1803ef7fa_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef7fa_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef7ff)));
L_1803ef7fa_3:;
return (uint64_t)UINT64_C(0x1803ef030);
L_1803ef7fa_4:;
return UINT64_C(0x1803ef7ff);
}
uint64_t b_1803ef7d0(CPU*s){
/* 1803ef7d0: mov rax, qword ptr [rdi + 0x80] */
L_1803ef7d0_0:;
L_1803ef7d0_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x80))));
L_1803ef7d0_2:;
wr(s->u,60,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ef7d0_3:;
wr(s->r,0,8,rd(s->u,60,8));
L_1803ef7d0_4:;
/* 1803ef7d7: movss dword ptr [rsp + 0x30], xmm7 */
L_1803ef7d7_0:;
L_1803ef7d7_1:;
wr(s->u,24,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ef7d7_2:;
wr(s->u,48,4,rd(s->r,5056,4));
L_1803ef7d7_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,48,4));
L_1803ef7d7_4:;
/* 1803ef7dd: lea r8, [r13 + rbx*2] */
L_1803ef7dd_0:;
L_1803ef7dd_1:;
wr(s->u,32,8,(rd(s->r,24,8)*((U)UINT64_C(0x2))));
L_1803ef7dd_2:;
wr(s->u,40,8,(rd(s->r,168,8)+rd(s->u,32,8)));
L_1803ef7dd_3:;
wr(s->r,128,8,rd(s->u,40,8));
L_1803ef7dd_4:;
/* 1803ef7e2: lea rdx, [rax + rbx*2] */
L_1803ef7e2_0:;
L_1803ef7e2_1:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x2))));
L_1803ef7e2_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803ef7e2_3:;
wr(s->r,16,8,rd(s->u,16,8));
L_1803ef7e2_4:;
/* 1803ef7e6: movaps xmm3, xmm6 */
L_1803ef7e6_0:;
L_1803ef7e6_1:;
wr(s->r,4800,4,rd(s->r,4992,4));
L_1803ef7e6_2:;
wr(s->r,4804,4,rd(s->r,4996,4));
L_1803ef7e6_3:;
wr(s->r,4808,4,rd(s->r,5000,4));
L_1803ef7e6_4:;
wr(s->r,4812,4,rd(s->r,5004,4));
L_1803ef7e6_5:;
/* 1803ef7e9: mov rcx, rdi */
L_1803ef7e9_0:;
L_1803ef7e9_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803ef7e9_2:;
/* 1803ef7ec: movsd qword ptr [rsi], xmm8 */
L_1803ef7ec_0:;
L_1803ef7ec_1:;
wr(s->u,52,8,rd(s->r,5120,8));
L_1803ef7ec_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,52,8));
L_1803ef7ec_3:;
/* 1803ef7f1: mov dword ptr [rsp + 0x28], ebp */
L_1803ef7f1_0:;
L_1803ef7f1_1:;
wr(s->u,24,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803ef7f1_2:;
wr(s->u,48,4,rd(s->r,40,4));
L_1803ef7f1_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,48,4));
L_1803ef7f1_4:;
/* 1803ef7f5: mov qword ptr [rsp + 0x20], rsi */
L_1803ef7f5_0:;
L_1803ef7f5_1:;
wr(s->u,24,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ef7f5_2:;
wr(s->u,52,8,rd(s->r,48,8));
L_1803ef7f5_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,52,8));
L_1803ef7f5_4:;
/* 1803ef7fa: call 0x1803ef030 */
L_1803ef7fa_0:;
L_1803ef7fa_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef7fa_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef7ff)));
L_1803ef7fa_3:;
return (uint64_t)UINT64_C(0x1803ef030);
L_1803ef7fa_4:;
return UINT64_C(0x1803ef7ff);
}
uint64_t b_1803ef7ff(CPU*s){
/* 1803ef7ff: movsxd r12, eax */
L_1803ef7ff_0:;
L_1803ef7ff_1:;
wr(s->r,160,8,(U)sx(rd(s->r,0,4),4));
L_1803ef7ff_2:;
/* 1803ef802: movsxd rax, dword ptr [rdi + 0x38] */
L_1803ef802_0:;
L_1803ef802_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_1803ef802_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef802_3:;
wr(s->r,0,8,(U)sx(rd(s->u,8,4),4));
L_1803ef802_4:;
/* 1803ef806: inc rbx */
L_1803ef806_0:;
L_1803ef806_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x1)),8,0));
L_1803ef806_2:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x1))));
L_1803ef806_3:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef806_4:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803ef806_5:;
wr(s->u,13,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803ef806_6:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803ef806_7:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ef806_8:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ef806_9:;
/* 1803ef809: cmp rbx, rax */
L_1803ef809_0:;
L_1803ef809_1:;
wr(s->u,23,8,rd(s->r,0,8));
L_1803ef809_2:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->u,23,8)));
L_1803ef809_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->u,23,8),8,1));
L_1803ef809_4:;
wr(s->u,31,8,(rd(s->r,24,8)-rd(s->u,23,8)));
L_1803ef809_5:;
wr(s->r,519,1,(sx(rd(s->u,31,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef809_6:;
wr(s->r,518,1,(rd(s->u,31,8)==((U)UINT64_C(0x0))));
L_1803ef809_7:;
wr(s->u,13,8,(rd(s->u,31,8)&((U)UINT64_C(0xff))));
L_1803ef809_8:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803ef809_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ef809_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ef809_11:;
/* 1803ef80c: jl 0x1803ef7d0 */
L_1803ef80c_0:;
L_1803ef80c_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ef80c_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803ef7d0);}
L_1803ef80c_3:;
return UINT64_C(0x1803ef80e);
}
uint64_t b_1803ef80e(CPU*s){
/* 1803ef80e: movsxd r8, dword ptr [rdi + 0x10] */
L_1803ef80e_0:;
L_1803ef80e_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ef80e_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef80e_3:;
wr(s->r,128,8,(U)sx(rd(s->u,36,4),4));
L_1803ef80e_4:;
/* 1803ef812: movsd xmm2, qword ptr [rsi] */
L_1803ef812_0:;
L_1803ef812_1:;
wr(s->u,28,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803ef812_2:;
wr(s->r,4736,8,rd(s->u,28,8));
L_1803ef812_3:;
wr(s->r,4744,8,((U)UINT64_C(0x0)));
L_1803ef812_4:;
/* 1803ef816: add dword ptr [rdi + 0x18], ebp */
L_1803ef816_0:;
L_1803ef816_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803ef816_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef816_3:;
wr(s->r,512,1,(((rd(s->u,24,4)+rd(s->r,40,4))&(((U)1<<32)-1))<rd(s->u,24,4)));
L_1803ef816_4:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef816_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,24,4),rd(s->r,40,4),4,0));
L_1803ef816_6:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef816_7:;
wr(s->u,24,4,(rd(s->u,24,4)+rd(s->r,40,4)));
L_1803ef816_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803ef816_9:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef816_10:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef816_11:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef816_12:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803ef816_13:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef816_14:;
wr(s->u,40,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803ef816_15:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803ef816_16:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ef816_17:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ef816_18:;
/* 1803ef819: add dword ptr [rdi + 0x1c], r12d */
L_1803ef819_0:;
L_1803ef819_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x1c))));
L_1803ef819_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef819_3:;
wr(s->r,512,1,(((rd(s->u,24,4)+rd(s->r,160,4))&(((U)1<<32)-1))<rd(s->u,24,4)));
L_1803ef819_4:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef819_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,24,4),rd(s->r,160,4),4,0));
L_1803ef819_6:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef819_7:;
wr(s->u,24,4,(rd(s->u,24,4)+rd(s->r,160,4)));
L_1803ef819_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803ef819_9:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef819_10:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef819_11:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef819_12:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803ef819_13:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef819_14:;
wr(s->u,40,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803ef819_15:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803ef819_16:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ef819_17:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ef819_18:;
/* 1803ef81d: mov ecx, dword ptr [rdi + 0x18] */
L_1803ef81d_0:;
L_1803ef81d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803ef81d_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef81d_3:;
wr(s->r,8,4,rd(s->u,36,4));
L_1803ef81d_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef81d_5:;
/* 1803ef820: pxor xmm0, xmm0 */
L_1803ef820_0:;
L_1803ef820_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803ef820_2:;
/* 1803ef824: cvtsi2sd xmm0, rbp */
L_1803ef824_0:;
L_1803ef824_1:;
wr(s->r,4608,8,fb((double)sx(rd(s->r,40,8),8),8));
L_1803ef824_2:;
/* 1803ef829: lea r11d, [r8 + r8] */
L_1803ef829_0:;
L_1803ef829_1:;
wr(s->u,8,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803ef829_2:;
wr(s->u,16,8,(rd(s->r,128,8)+rd(s->u,8,8)));
L_1803ef829_3:;
wr(s->r,152,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef829_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ef829_5:;
/* 1803ef82d: subsd xmm2, xmm0 */
L_1803ef82d_0:;
L_1803ef82d_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803ef82d_2:;
/* 1803ef831: movd xmm0, r8d */
L_1803ef831_0:;
L_1803ef831_1:;
wr(s->r,4608,16,rd(s->r,128,4));
L_1803ef831_2:;
/* 1803ef836: movapd xmm1, xmm2 */
L_1803ef836_0:;
L_1803ef836_1:;
wr(s->r,4672,8,rd(s->r,4736,8));
L_1803ef836_2:;
wr(s->r,4680,8,rd(s->r,4744,8));
L_1803ef836_3:;
/* 1803ef83a: movsd qword ptr [rsi], xmm2 */
L_1803ef83a_0:;
L_1803ef83a_1:;
wr(s->u,28,8,rd(s->r,4736,8));
L_1803ef83a_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,28,8));
L_1803ef83a_3:;
/* 1803ef83e: lea eax, [r11 + rbp] */
L_1803ef83e_0:;
L_1803ef83e_1:;
wr(s->u,8,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803ef83e_2:;
wr(s->u,16,8,(rd(s->r,152,8)+rd(s->u,8,8)));
L_1803ef83e_3:;
wr(s->r,0,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef83e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef83e_5:;
/* 1803ef842: sub dword ptr [rdi + 0x28], eax */
L_1803ef842_0:;
L_1803ef842_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x28))));
L_1803ef842_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef842_3:;
wr(s->r,512,1,(rd(s->u,24,4)<rd(s->r,0,4)));
L_1803ef842_4:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef842_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,24,4),rd(s->r,0,4),4,1));
L_1803ef842_6:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef842_7:;
wr(s->u,24,4,(rd(s->u,24,4)-rd(s->r,0,4)));
L_1803ef842_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803ef842_9:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef842_10:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef842_11:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef842_12:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803ef842_13:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef842_14:;
wr(s->u,40,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803ef842_15:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803ef842_16:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ef842_17:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ef842_18:;
/* 1803ef845: cvtdq2pd xmm0, xmm0 */
L_1803ef845_0:;
L_1803ef845_1:;
wr(s->u,50,8,rd(s->r,4608,8));
L_1803ef845_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,50,4),4),8));
L_1803ef845_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,54,4),4),8));
L_1803ef845_4:;
/* 1803ef849: subsd xmm1, xmm0 */
L_1803ef849_0:;
L_1803ef849_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803ef849_2:;
/* 1803ef84d: cvttsd2si eax, xmm1 */
L_1803ef84d_0:;
L_1803ef84d_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4672,8),8),4));
L_1803ef84d_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef84d_3:;
/* 1803ef851: mov dword ptr [rdi + 0xc], eax */
L_1803ef851_0:;
L_1803ef851_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xc))));
L_1803ef851_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803ef851_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803ef851_4:;
/* 1803ef854: test eax, eax */
L_1803ef854_0:;
L_1803ef854_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef854_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef854_3:;
wr(s->u,46,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803ef854_4:;
wr(s->r,519,1,(sx(rd(s->u,46,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef854_5:;
wr(s->r,518,1,(rd(s->u,46,4)==((U)UINT64_C(0x0))));
L_1803ef854_6:;
wr(s->u,40,4,(rd(s->u,46,4)&((U)UINT64_C(0xff))));
L_1803ef854_7:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803ef854_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ef854_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ef854_10:;
/* 1803ef856: je 0x1803ef86d */
L_1803ef856_0:;
L_1803ef856_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ef86d);}
L_1803ef856_2:;
return UINT64_C(0x1803ef858);
}
uint64_t b_1803ef858(CPU*s){
/* 1803ef858: movd xmm0, eax */
L_1803ef858_0:;
L_1803ef858_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803ef858_2:;
/* 1803ef85c: add eax, ecx */
L_1803ef85c_0:;
L_1803ef85c_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,8,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ef85c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,8,4),4,0));
L_1803ef85c_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,8,4)));
L_1803ef85c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef85c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef85c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ef85c_7:;
wr(s->u,25,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ef85c_8:;
wr(s->u,33,1,pop(rd(s->u,25,4),4));
L_1803ef85c_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803ef85c_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803ef85c_11:;
/* 1803ef85e: mov dword ptr [rdi + 0x18], eax */
L_1803ef85e_0:;
L_1803ef85e_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803ef85e_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ef85e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef85e_4:;
/* 1803ef861: cvtdq2pd xmm0, xmm0 */
L_1803ef861_0:;
L_1803ef861_1:;
wr(s->u,151,8,rd(s->r,4608,8));
L_1803ef861_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,151,4),4),8));
L_1803ef861_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,155,4),4),8));
L_1803ef861_4:;
/* 1803ef865: subsd xmm2, xmm0 */
L_1803ef865_0:;
L_1803ef865_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803ef865_2:;
/* 1803ef869: movsd qword ptr [rsi], xmm2 */
L_1803ef869_0:;
L_1803ef869_1:;
wr(s->u,12,8,rd(s->r,4736,8));
L_1803ef869_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,12,8));
L_1803ef869_3:;
/* 1803ef86d: movsxd rcx, dword ptr [rdi + 0x38] */
L_1803ef86d_0:;
L_1803ef86d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_1803ef86d_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef86d_3:;
wr(s->r,8,8,(U)sx(rd(s->u,20,4),4));
L_1803ef86d_4:;
/* 1803ef871: movsxd rdx, dword ptr [rdi + 0x28] */
L_1803ef871_0:;
L_1803ef871_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x28))));
L_1803ef871_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef871_3:;
wr(s->r,16,8,(U)sx(rd(s->u,20,4),4));
L_1803ef871_4:;
/* 1803ef875: mov eax, ecx */
L_1803ef875_0:;
L_1803ef875_1:;
wr(s->r,0,4,rd(s->r,8,4));
L_1803ef875_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef875_3:;
/* 1803ef877: mov r9, rcx */
L_1803ef877_0:;
L_1803ef877_1:;
wr(s->r,136,8,rd(s->r,8,8));
L_1803ef877_2:;
/* 1803ef87a: movsxd rcx, r11d */
L_1803ef87a_0:;
L_1803ef87a_1:;
wr(s->r,8,8,(U)sx(rd(s->r,152,4),4));
L_1803ef87a_2:;
/* 1803ef87d: add rcx, rbp */
L_1803ef87d_0:;
L_1803ef87d_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,40,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ef87d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,40,8),8,0));
L_1803ef87d_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,40,8)));
L_1803ef87d_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef87d_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ef87d_6:;
wr(s->u,25,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ef87d_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803ef87d_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803ef87d_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803ef87d_10:;
/* 1803ef880: imul eax, r8d */
L_1803ef880_0:;
L_1803ef880_1:;
wr(s->u,67,8,(U)sx(rd(s->r,0,4),4));
L_1803ef880_2:;
wr(s->u,75,8,(U)sx(rd(s->r,128,4),4));
L_1803ef880_3:;
wr(s->u,83,8,(rd(s->u,67,8)*rd(s->u,75,8)));
L_1803ef880_4:;
wr(s->r,0,4,(rd(s->u,83,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef880_5:;
wr(s->u,91,4,(rd(s->u,83,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ef880_6:;
wr(s->u,35,8,(U)sx(rd(s->r,0,4),4));
L_1803ef880_7:;
wr(s->r,512,1,(rd(s->u,35,8)!=rd(s->u,83,8)));
L_1803ef880_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef880_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef880_10:;
/* 1803ef884: neg eax */
L_1803ef884_0:;
L_1803ef884_1:;
wr(s->r,512,1,(rd(s->r,0,4)!=((U)UINT64_C(0x0))));
L_1803ef884_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,0,4),4,1));
L_1803ef884_3:;
wr(s->r,0,4,(-rd(s->r,0,4)));
L_1803ef884_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef884_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ef884_6:;
wr(s->u,25,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ef884_7:;
wr(s->u,33,1,pop(rd(s->u,25,4),4));
L_1803ef884_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803ef884_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803ef884_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef884_11:;
/* 1803ef886: movsxd r10, eax */
L_1803ef886_0:;
L_1803ef886_1:;
wr(s->r,144,8,(U)sx(rd(s->r,0,4),4));
L_1803ef886_2:;
/* 1803ef889: movsxd rax, dword ptr [rdi + 0x18] */
L_1803ef889_0:;
L_1803ef889_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803ef889_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef889_3:;
wr(s->r,0,8,(U)sx(rd(s->u,20,4),4));
L_1803ef889_4:;
/* 1803ef88d: sub rdx, rax */
L_1803ef88d_0:;
L_1803ef88d_1:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->r,0,8)));
L_1803ef88d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->r,0,8),8,1));
L_1803ef88d_3:;
wr(s->r,16,8,(rd(s->r,16,8)-rd(s->r,0,8)));
L_1803ef88d_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef88d_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803ef88d_6:;
wr(s->u,25,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803ef88d_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803ef88d_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803ef88d_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803ef88d_10:;
/* 1803ef890: add rcx, rdx */
L_1803ef890_0:;
L_1803ef890_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,16,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ef890_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,16,8),8,0));
L_1803ef890_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,16,8)));
L_1803ef890_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef890_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ef890_6:;
wr(s->u,25,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ef890_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803ef890_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803ef890_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803ef890_10:;
/* 1803ef893: add rcx, r8 */
L_1803ef893_0:;
L_1803ef893_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,128,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ef893_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,128,8),8,0));
L_1803ef893_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,128,8)));
L_1803ef893_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef893_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ef893_6:;
wr(s->u,25,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ef893_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803ef893_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803ef893_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803ef893_10:;
/* 1803ef896: imul rcx, r9 */
L_1803ef896_0:;
L_1803ef896_1:;
wr(s->u,95,16,(U)sx(rd(s->r,8,8),8));
L_1803ef896_2:;
wr(s->u,111,16,(U)sx(rd(s->r,136,8),8));
L_1803ef896_3:;
wr(s->u,127,16,(rd(s->u,95,16)*rd(s->u,111,16)));
L_1803ef896_4:;
wr(s->r,8,8,(rd(s->r,8,8)*rd(s->r,136,8)));
L_1803ef896_5:;
wr(s->u,143,8,(rd(s->u,127,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef896_6:;
wr(s->u,35,16,(U)sx(rd(s->r,8,8),8));
L_1803ef896_7:;
wr(s->r,512,1,(rd(s->u,35,16)!=rd(s->u,127,16)));
L_1803ef896_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef896_9:;
/* 1803ef89a: cmp r10, rcx */
L_1803ef89a_0:;
L_1803ef89a_1:;
wr(s->u,51,8,rd(s->r,8,8));
L_1803ef89a_2:;
wr(s->r,512,1,(rd(s->r,144,8)<rd(s->u,51,8)));
L_1803ef89a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->u,51,8),8,1));
L_1803ef89a_4:;
wr(s->u,59,8,(rd(s->r,144,8)-rd(s->u,51,8)));
L_1803ef89a_5:;
wr(s->r,519,1,(sx(rd(s->u,59,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef89a_6:;
wr(s->r,518,1,(rd(s->u,59,8)==((U)UINT64_C(0x0))));
L_1803ef89a_7:;
wr(s->u,25,8,(rd(s->u,59,8)&((U)UINT64_C(0xff))));
L_1803ef89a_8:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803ef89a_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803ef89a_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803ef89a_11:;
/* 1803ef89d: jge 0x1803ef91e */
L_1803ef89d_0:;
L_1803ef89d_1:;
wr(s->u,24,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803ef89d_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803ef91e);}
L_1803ef89d_3:;
return UINT64_C(0x1803ef89f);
}
uint64_t b_1803ef86d(CPU*s){
/* 1803ef86d: movsxd rcx, dword ptr [rdi + 0x38] */
L_1803ef86d_0:;
L_1803ef86d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_1803ef86d_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef86d_3:;
wr(s->r,8,8,(U)sx(rd(s->u,8,4),4));
L_1803ef86d_4:;
/* 1803ef871: movsxd rdx, dword ptr [rdi + 0x28] */
L_1803ef871_0:;
L_1803ef871_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x28))));
L_1803ef871_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef871_3:;
wr(s->r,16,8,(U)sx(rd(s->u,8,4),4));
L_1803ef871_4:;
/* 1803ef875: mov eax, ecx */
L_1803ef875_0:;
L_1803ef875_1:;
wr(s->r,0,4,rd(s->r,8,4));
L_1803ef875_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef875_3:;
/* 1803ef877: mov r9, rcx */
L_1803ef877_0:;
L_1803ef877_1:;
wr(s->r,136,8,rd(s->r,8,8));
L_1803ef877_2:;
/* 1803ef87a: movsxd rcx, r11d */
L_1803ef87a_0:;
L_1803ef87a_1:;
wr(s->r,8,8,(U)sx(rd(s->r,152,4),4));
L_1803ef87a_2:;
/* 1803ef87d: add rcx, rbp */
L_1803ef87d_0:;
L_1803ef87d_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,40,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ef87d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,40,8),8,0));
L_1803ef87d_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,40,8)));
L_1803ef87d_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef87d_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ef87d_6:;
wr(s->u,13,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ef87d_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803ef87d_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ef87d_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ef87d_10:;
/* 1803ef880: imul eax, r8d */
L_1803ef880_0:;
L_1803ef880_1:;
wr(s->u,55,8,(U)sx(rd(s->r,0,4),4));
L_1803ef880_2:;
wr(s->u,63,8,(U)sx(rd(s->r,128,4),4));
L_1803ef880_3:;
wr(s->u,71,8,(rd(s->u,55,8)*rd(s->u,63,8)));
L_1803ef880_4:;
wr(s->r,0,4,(rd(s->u,71,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef880_5:;
wr(s->u,79,4,(rd(s->u,71,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ef880_6:;
wr(s->u,23,8,(U)sx(rd(s->r,0,4),4));
L_1803ef880_7:;
wr(s->r,512,1,(rd(s->u,23,8)!=rd(s->u,71,8)));
L_1803ef880_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef880_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef880_10:;
/* 1803ef884: neg eax */
L_1803ef884_0:;
L_1803ef884_1:;
wr(s->r,512,1,(rd(s->r,0,4)!=((U)UINT64_C(0x0))));
L_1803ef884_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,0,4),4,1));
L_1803ef884_3:;
wr(s->r,0,4,(-rd(s->r,0,4)));
L_1803ef884_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef884_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ef884_6:;
wr(s->u,13,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ef884_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803ef884_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ef884_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ef884_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef884_11:;
/* 1803ef886: movsxd r10, eax */
L_1803ef886_0:;
L_1803ef886_1:;
wr(s->r,144,8,(U)sx(rd(s->r,0,4),4));
L_1803ef886_2:;
/* 1803ef889: movsxd rax, dword ptr [rdi + 0x18] */
L_1803ef889_0:;
L_1803ef889_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803ef889_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef889_3:;
wr(s->r,0,8,(U)sx(rd(s->u,8,4),4));
L_1803ef889_4:;
/* 1803ef88d: sub rdx, rax */
L_1803ef88d_0:;
L_1803ef88d_1:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->r,0,8)));
L_1803ef88d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->r,0,8),8,1));
L_1803ef88d_3:;
wr(s->r,16,8,(rd(s->r,16,8)-rd(s->r,0,8)));
L_1803ef88d_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef88d_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803ef88d_6:;
wr(s->u,13,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803ef88d_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803ef88d_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ef88d_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ef88d_10:;
/* 1803ef890: add rcx, rdx */
L_1803ef890_0:;
L_1803ef890_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,16,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ef890_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,16,8),8,0));
L_1803ef890_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,16,8)));
L_1803ef890_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef890_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ef890_6:;
wr(s->u,13,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ef890_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803ef890_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ef890_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ef890_10:;
/* 1803ef893: add rcx, r8 */
L_1803ef893_0:;
L_1803ef893_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,128,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ef893_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,128,8),8,0));
L_1803ef893_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,128,8)));
L_1803ef893_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef893_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ef893_6:;
wr(s->u,13,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ef893_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803ef893_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ef893_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ef893_10:;
/* 1803ef896: imul rcx, r9 */
L_1803ef896_0:;
L_1803ef896_1:;
wr(s->u,83,16,(U)sx(rd(s->r,8,8),8));
L_1803ef896_2:;
wr(s->u,99,16,(U)sx(rd(s->r,136,8),8));
L_1803ef896_3:;
wr(s->u,115,16,(rd(s->u,83,16)*rd(s->u,99,16)));
L_1803ef896_4:;
wr(s->r,8,8,(rd(s->r,8,8)*rd(s->r,136,8)));
L_1803ef896_5:;
wr(s->u,131,8,(rd(s->u,115,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef896_6:;
wr(s->u,23,16,(U)sx(rd(s->r,8,8),8));
L_1803ef896_7:;
wr(s->r,512,1,(rd(s->u,23,16)!=rd(s->u,115,16)));
L_1803ef896_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef896_9:;
/* 1803ef89a: cmp r10, rcx */
L_1803ef89a_0:;
L_1803ef89a_1:;
wr(s->u,39,8,rd(s->r,8,8));
L_1803ef89a_2:;
wr(s->r,512,1,(rd(s->r,144,8)<rd(s->u,39,8)));
L_1803ef89a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->u,39,8),8,1));
L_1803ef89a_4:;
wr(s->u,47,8,(rd(s->r,144,8)-rd(s->u,39,8)));
L_1803ef89a_5:;
wr(s->r,519,1,(sx(rd(s->u,47,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef89a_6:;
wr(s->r,518,1,(rd(s->u,47,8)==((U)UINT64_C(0x0))));
L_1803ef89a_7:;
wr(s->u,13,8,(rd(s->u,47,8)&((U)UINT64_C(0xff))));
L_1803ef89a_8:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803ef89a_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ef89a_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ef89a_11:;
/* 1803ef89d: jge 0x1803ef91e */
L_1803ef89d_0:;
L_1803ef89d_1:;
wr(s->u,12,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803ef89d_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803ef91e);}
L_1803ef89d_3:;
return UINT64_C(0x1803ef89f);
}
uint64_t b_1803ef89f(CPU*s){
/* 1803ef89f: nop  */
L_1803ef89f_0:;
L_1803ef89f_1:;
/* 1803ef8a0: xor r8d, r8d */
L_1803ef8a0_0:;
L_1803ef8a0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef8a0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef8a0_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1803ef8a0_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef8a0_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef8a0_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ef8a0_7:;
wr(s->u,2,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ef8a0_8:;
wr(s->u,10,1,pop(rd(s->u,2,4),4));
L_1803ef8a0_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803ef8a0_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803ef8a0_11:;
/* 1803ef8a3: test r9, r9 */
L_1803ef8a3_0:;
L_1803ef8a3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef8a3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef8a3_3:;
wr(s->u,12,8,(rd(s->r,136,8)&rd(s->r,136,8)));
L_1803ef8a3_4:;
wr(s->r,519,1,(sx(rd(s->u,12,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef8a3_5:;
wr(s->r,518,1,(rd(s->u,12,8)==((U)UINT64_C(0x0))));
L_1803ef8a3_6:;
wr(s->u,2,8,(rd(s->u,12,8)&((U)UINT64_C(0xff))));
L_1803ef8a3_7:;
wr(s->u,10,1,pop(rd(s->u,2,8),8));
L_1803ef8a3_8:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803ef8a3_9:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803ef8a3_10:;
/* 1803ef8a6: jle 0x1803ef8ea */
L_1803ef8a6_0:;
L_1803ef8a6_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ef8a6_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803ef8a6_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803ef8ea);}
L_1803ef8a6_4:;
return UINT64_C(0x1803ef8a8);
}
uint64_t b_1803ef8a0(CPU*s){
/* 1803ef8a0: xor r8d, r8d */
L_1803ef8a0_0:;
L_1803ef8a0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef8a0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef8a0_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1803ef8a0_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef8a0_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef8a0_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ef8a0_7:;
wr(s->u,2,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ef8a0_8:;
wr(s->u,10,1,pop(rd(s->u,2,4),4));
L_1803ef8a0_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803ef8a0_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803ef8a0_11:;
/* 1803ef8a3: test r9, r9 */
L_1803ef8a3_0:;
L_1803ef8a3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef8a3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef8a3_3:;
wr(s->u,12,8,(rd(s->r,136,8)&rd(s->r,136,8)));
L_1803ef8a3_4:;
wr(s->r,519,1,(sx(rd(s->u,12,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef8a3_5:;
wr(s->r,518,1,(rd(s->u,12,8)==((U)UINT64_C(0x0))));
L_1803ef8a3_6:;
wr(s->u,2,8,(rd(s->u,12,8)&((U)UINT64_C(0xff))));
L_1803ef8a3_7:;
wr(s->u,10,1,pop(rd(s->u,2,8),8));
L_1803ef8a3_8:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803ef8a3_9:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803ef8a3_10:;
/* 1803ef8a6: jle 0x1803ef8ea */
L_1803ef8a6_0:;
L_1803ef8a6_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ef8a6_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803ef8a6_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803ef8ea);}
L_1803ef8a6_4:;
return UINT64_C(0x1803ef8a8);
}
uint64_t b_1803ef8a8(CPU*s){
/* 1803ef8a8: lea r9, [r10 + r10] */
L_1803ef8a8_0:;
L_1803ef8a8_1:;
wr(s->u,16,8,(rd(s->r,144,8)*((U)UINT64_C(0x1))));
L_1803ef8a8_2:;
wr(s->u,24,8,(rd(s->r,144,8)+rd(s->u,16,8)));
L_1803ef8a8_3:;
wr(s->r,136,8,rd(s->u,24,8));
L_1803ef8a8_4:;
/* 1803ef8ac: nop dword ptr [rax] */
L_1803ef8ac_0:;
L_1803ef8ac_1:;
/* 1803ef8b0: movsxd rax, dword ptr [rdi + 0x10] */
L_1803ef8b0_0:;
L_1803ef8b0_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ef8b0_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef8b0_3:;
wr(s->r,0,8,(U)sx(rd(s->u,60,4),4));
L_1803ef8b0_4:;
/* 1803ef8b4: movsxd rcx, dword ptr [rdi + 0x18] */
L_1803ef8b4_0:;
L_1803ef8b4_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803ef8b4_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef8b4_3:;
wr(s->r,8,8,(U)sx(rd(s->u,60,4),4));
L_1803ef8b4_4:;
/* 1803ef8b8: mov rdx, qword ptr [rdi + 0x80] */
L_1803ef8b8_0:;
L_1803ef8b8_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x80))));
L_1803ef8b8_2:;
wr(s->u,64,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef8b8_3:;
wr(s->r,16,8,rd(s->u,64,8));
L_1803ef8b8_4:;
/* 1803ef8bf: sub rcx, rax */
L_1803ef8bf_0:;
L_1803ef8bf_1:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->r,0,8)));
L_1803ef8bf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,0,8),8,1));
L_1803ef8bf_3:;
wr(s->r,8,8,(rd(s->r,8,8)-rd(s->r,0,8)));
L_1803ef8bf_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef8bf_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ef8bf_6:;
wr(s->u,73,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ef8bf_7:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803ef8bf_8:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803ef8bf_9:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803ef8bf_10:;
/* 1803ef8c2: movsxd rax, dword ptr [rdi + 0x38] */
L_1803ef8c2_0:;
L_1803ef8c2_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_1803ef8c2_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef8c2_3:;
wr(s->r,0,8,(U)sx(rd(s->u,60,4),4));
L_1803ef8c2_4:;
/* 1803ef8c6: add r9, 2 */
L_1803ef8c6_0:;
L_1803ef8c6_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x2)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803ef8c6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x2)),8,0));
L_1803ef8c6_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x2))));
L_1803ef8c6_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef8c6_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803ef8c6_6:;
wr(s->u,73,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803ef8c6_7:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803ef8c6_8:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803ef8c6_9:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803ef8c6_10:;
/* 1803ef8ca: imul rcx, rax */
L_1803ef8ca_0:;
L_1803ef8ca_1:;
wr(s->u,115,16,(U)sx(rd(s->r,8,8),8));
L_1803ef8ca_2:;
wr(s->u,131,16,(U)sx(rd(s->r,0,8),8));
L_1803ef8ca_3:;
wr(s->u,147,16,(rd(s->u,115,16)*rd(s->u,131,16)));
L_1803ef8ca_4:;
wr(s->r,8,8,(rd(s->r,8,8)*rd(s->r,0,8)));
L_1803ef8ca_5:;
wr(s->u,163,8,(rd(s->u,147,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef8ca_6:;
wr(s->u,83,16,(U)sx(rd(s->r,8,8),8));
L_1803ef8ca_7:;
wr(s->r,512,1,(rd(s->u,83,16)!=rd(s->u,147,16)));
L_1803ef8ca_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef8ca_9:;
/* 1803ef8ce: add rcx, r10 */
L_1803ef8ce_0:;
L_1803ef8ce_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,144,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ef8ce_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,144,8),8,0));
L_1803ef8ce_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,144,8)));
L_1803ef8ce_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef8ce_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ef8ce_6:;
wr(s->u,73,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ef8ce_7:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803ef8ce_8:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803ef8ce_9:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803ef8ce_10:;
/* 1803ef8d1: add rcx, r8 */
L_1803ef8d1_0:;
L_1803ef8d1_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,128,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ef8d1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,128,8),8,0));
L_1803ef8d1_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,128,8)));
L_1803ef8d1_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef8d1_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ef8d1_6:;
wr(s->u,73,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ef8d1_7:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803ef8d1_8:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803ef8d1_9:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803ef8d1_10:;
/* 1803ef8d4: inc r8 */
L_1803ef8d4_0:;
L_1803ef8d4_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x1)),8,0));
L_1803ef8d4_2:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x1))));
L_1803ef8d4_3:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef8d4_4:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ef8d4_5:;
wr(s->u,73,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ef8d4_6:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803ef8d4_7:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803ef8d4_8:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803ef8d4_9:;
/* 1803ef8d7: movzx eax, word ptr [rdx + rcx*2] */
L_1803ef8d7_0:;
L_1803ef8d7_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x2))));
L_1803ef8d7_2:;
wr(s->u,24,8,(rd(s->r,16,8)+rd(s->u,16,8)));
L_1803ef8d7_3:;
wr(s->u,58,2,mr((uint64_t)rd(s->u,24,8),2));
L_1803ef8d7_4:;
wr(s->r,0,4,rd(s->u,58,2));
L_1803ef8d7_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef8d7_6:;
/* 1803ef8db: mov word ptr [r9 + rdx - 2], ax */
L_1803ef8db_0:;
L_1803ef8db_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffffe))+rd(s->r,136,8)));
L_1803ef8db_2:;
wr(s->u,40,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803ef8db_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803ef8db_4:;
wr(s->u,56,2,rd(s->r,0,2));
L_1803ef8db_5:;
mw((uint64_t)rd(s->u,48,8),2,rd(s->u,56,2));
L_1803ef8db_6:;
/* 1803ef8e1: movsxd rax, dword ptr [rdi + 0x38] */
L_1803ef8e1_0:;
L_1803ef8e1_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_1803ef8e1_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef8e1_3:;
wr(s->r,0,8,(U)sx(rd(s->u,60,4),4));
L_1803ef8e1_4:;
/* 1803ef8e5: cmp r8, rax */
L_1803ef8e5_0:;
L_1803ef8e5_1:;
wr(s->u,99,8,rd(s->r,0,8));
L_1803ef8e5_2:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->u,99,8)));
L_1803ef8e5_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->u,99,8),8,1));
L_1803ef8e5_4:;
wr(s->u,107,8,(rd(s->r,128,8)-rd(s->u,99,8)));
L_1803ef8e5_5:;
wr(s->r,519,1,(sx(rd(s->u,107,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef8e5_6:;
wr(s->r,518,1,(rd(s->u,107,8)==((U)UINT64_C(0x0))));
L_1803ef8e5_7:;
wr(s->u,73,8,(rd(s->u,107,8)&((U)UINT64_C(0xff))));
L_1803ef8e5_8:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803ef8e5_9:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803ef8e5_10:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803ef8e5_11:;
/* 1803ef8e8: jl 0x1803ef8b0 */
L_1803ef8e8_0:;
L_1803ef8e8_1:;
wr(s->u,72,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ef8e8_2:;
if(rd(s->u,72,1)){goto L_1803ef8b0_0;}
L_1803ef8e8_3:;
return UINT64_C(0x1803ef8ea);
}
uint64_t b_1803ef8b0(CPU*s){
/* 1803ef8b0: movsxd rax, dword ptr [rdi + 0x10] */
L_1803ef8b0_0:;
L_1803ef8b0_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ef8b0_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef8b0_3:;
wr(s->r,0,8,(U)sx(rd(s->u,60,4),4));
L_1803ef8b0_4:;
/* 1803ef8b4: movsxd rcx, dword ptr [rdi + 0x18] */
L_1803ef8b4_0:;
L_1803ef8b4_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803ef8b4_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef8b4_3:;
wr(s->r,8,8,(U)sx(rd(s->u,60,4),4));
L_1803ef8b4_4:;
/* 1803ef8b8: mov rdx, qword ptr [rdi + 0x80] */
L_1803ef8b8_0:;
L_1803ef8b8_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x80))));
L_1803ef8b8_2:;
wr(s->u,64,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ef8b8_3:;
wr(s->r,16,8,rd(s->u,64,8));
L_1803ef8b8_4:;
/* 1803ef8bf: sub rcx, rax */
L_1803ef8bf_0:;
L_1803ef8bf_1:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->r,0,8)));
L_1803ef8bf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,0,8),8,1));
L_1803ef8bf_3:;
wr(s->r,8,8,(rd(s->r,8,8)-rd(s->r,0,8)));
L_1803ef8bf_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef8bf_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ef8bf_6:;
wr(s->u,73,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ef8bf_7:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803ef8bf_8:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803ef8bf_9:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803ef8bf_10:;
/* 1803ef8c2: movsxd rax, dword ptr [rdi + 0x38] */
L_1803ef8c2_0:;
L_1803ef8c2_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_1803ef8c2_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef8c2_3:;
wr(s->r,0,8,(U)sx(rd(s->u,60,4),4));
L_1803ef8c2_4:;
/* 1803ef8c6: add r9, 2 */
L_1803ef8c6_0:;
L_1803ef8c6_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x2)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803ef8c6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x2)),8,0));
L_1803ef8c6_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x2))));
L_1803ef8c6_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef8c6_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803ef8c6_6:;
wr(s->u,73,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803ef8c6_7:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803ef8c6_8:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803ef8c6_9:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803ef8c6_10:;
/* 1803ef8ca: imul rcx, rax */
L_1803ef8ca_0:;
L_1803ef8ca_1:;
wr(s->u,115,16,(U)sx(rd(s->r,8,8),8));
L_1803ef8ca_2:;
wr(s->u,131,16,(U)sx(rd(s->r,0,8),8));
L_1803ef8ca_3:;
wr(s->u,147,16,(rd(s->u,115,16)*rd(s->u,131,16)));
L_1803ef8ca_4:;
wr(s->r,8,8,(rd(s->r,8,8)*rd(s->r,0,8)));
L_1803ef8ca_5:;
wr(s->u,163,8,(rd(s->u,147,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef8ca_6:;
wr(s->u,83,16,(U)sx(rd(s->r,8,8),8));
L_1803ef8ca_7:;
wr(s->r,512,1,(rd(s->u,83,16)!=rd(s->u,147,16)));
L_1803ef8ca_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef8ca_9:;
/* 1803ef8ce: add rcx, r10 */
L_1803ef8ce_0:;
L_1803ef8ce_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,144,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ef8ce_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,144,8),8,0));
L_1803ef8ce_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,144,8)));
L_1803ef8ce_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef8ce_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ef8ce_6:;
wr(s->u,73,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ef8ce_7:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803ef8ce_8:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803ef8ce_9:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803ef8ce_10:;
/* 1803ef8d1: add rcx, r8 */
L_1803ef8d1_0:;
L_1803ef8d1_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,128,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ef8d1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,128,8),8,0));
L_1803ef8d1_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,128,8)));
L_1803ef8d1_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef8d1_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ef8d1_6:;
wr(s->u,73,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ef8d1_7:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803ef8d1_8:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803ef8d1_9:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803ef8d1_10:;
/* 1803ef8d4: inc r8 */
L_1803ef8d4_0:;
L_1803ef8d4_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x1)),8,0));
L_1803ef8d4_2:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x1))));
L_1803ef8d4_3:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef8d4_4:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ef8d4_5:;
wr(s->u,73,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ef8d4_6:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803ef8d4_7:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803ef8d4_8:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803ef8d4_9:;
/* 1803ef8d7: movzx eax, word ptr [rdx + rcx*2] */
L_1803ef8d7_0:;
L_1803ef8d7_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x2))));
L_1803ef8d7_2:;
wr(s->u,24,8,(rd(s->r,16,8)+rd(s->u,16,8)));
L_1803ef8d7_3:;
wr(s->u,58,2,mr((uint64_t)rd(s->u,24,8),2));
L_1803ef8d7_4:;
wr(s->r,0,4,rd(s->u,58,2));
L_1803ef8d7_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef8d7_6:;
/* 1803ef8db: mov word ptr [r9 + rdx - 2], ax */
L_1803ef8db_0:;
L_1803ef8db_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffffe))+rd(s->r,136,8)));
L_1803ef8db_2:;
wr(s->u,40,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803ef8db_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803ef8db_4:;
wr(s->u,56,2,rd(s->r,0,2));
L_1803ef8db_5:;
mw((uint64_t)rd(s->u,48,8),2,rd(s->u,56,2));
L_1803ef8db_6:;
/* 1803ef8e1: movsxd rax, dword ptr [rdi + 0x38] */
L_1803ef8e1_0:;
L_1803ef8e1_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_1803ef8e1_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef8e1_3:;
wr(s->r,0,8,(U)sx(rd(s->u,60,4),4));
L_1803ef8e1_4:;
/* 1803ef8e5: cmp r8, rax */
L_1803ef8e5_0:;
L_1803ef8e5_1:;
wr(s->u,99,8,rd(s->r,0,8));
L_1803ef8e5_2:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->u,99,8)));
L_1803ef8e5_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->u,99,8),8,1));
L_1803ef8e5_4:;
wr(s->u,107,8,(rd(s->r,128,8)-rd(s->u,99,8)));
L_1803ef8e5_5:;
wr(s->r,519,1,(sx(rd(s->u,107,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef8e5_6:;
wr(s->r,518,1,(rd(s->u,107,8)==((U)UINT64_C(0x0))));
L_1803ef8e5_7:;
wr(s->u,73,8,(rd(s->u,107,8)&((U)UINT64_C(0xff))));
L_1803ef8e5_8:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803ef8e5_9:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803ef8e5_10:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803ef8e5_11:;
/* 1803ef8e8: jl 0x1803ef8b0 */
L_1803ef8e8_0:;
L_1803ef8e8_1:;
wr(s->u,72,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ef8e8_2:;
if(rd(s->u,72,1)){goto L_1803ef8b0_0;}
L_1803ef8e8_3:;
return UINT64_C(0x1803ef8ea);
}
uint64_t b_1803ef8ea(CPU*s){
/* 1803ef8ea: movsxd rcx, dword ptr [rdi + 0x10] */
L_1803ef8ea_0:;
L_1803ef8ea_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ef8ea_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef8ea_3:;
wr(s->r,8,8,(U)sx(rd(s->u,40,4),4));
L_1803ef8ea_4:;
/* 1803ef8ee: movsxd r9, dword ptr [rdi + 0x38] */
L_1803ef8ee_0:;
L_1803ef8ee_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_1803ef8ee_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef8ee_3:;
wr(s->r,136,8,(U)sx(rd(s->u,40,4),4));
L_1803ef8ee_4:;
/* 1803ef8f2: lea eax, [rcx + rcx] */
L_1803ef8f2_0:;
L_1803ef8f2_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803ef8f2_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803ef8f2_3:;
wr(s->r,0,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef8f2_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef8f2_5:;
/* 1803ef8f5: add r10, r9 */
L_1803ef8f5_0:;
L_1803ef8f5_1:;
wr(s->r,512,1,(((rd(s->r,144,8)+rd(s->r,136,8))&(((U)1<<64)-1))<rd(s->r,144,8)));
L_1803ef8f5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->r,136,8),8,0));
L_1803ef8f5_3:;
wr(s->r,144,8,(rd(s->r,144,8)+rd(s->r,136,8)));
L_1803ef8f5_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef8f5_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803ef8f5_6:;
wr(s->u,45,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803ef8f5_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803ef8f5_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803ef8f5_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803ef8f5_10:;
/* 1803ef8f8: movsxd rdx, eax */
L_1803ef8f8_0:;
L_1803ef8f8_1:;
wr(s->r,16,8,(U)sx(rd(s->r,0,4),4));
L_1803ef8f8_2:;
/* 1803ef8fb: movsxd rax, dword ptr [rdi + 0x18] */
L_1803ef8fb_0:;
L_1803ef8fb_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803ef8fb_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef8fb_3:;
wr(s->r,0,8,(U)sx(rd(s->u,40,4),4));
L_1803ef8fb_4:;
/* 1803ef8ff: sub rdx, rax */
L_1803ef8ff_0:;
L_1803ef8ff_1:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->r,0,8)));
L_1803ef8ff_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->r,0,8),8,1));
L_1803ef8ff_3:;
wr(s->r,16,8,(rd(s->r,16,8)-rd(s->r,0,8)));
L_1803ef8ff_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef8ff_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803ef8ff_6:;
wr(s->u,45,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803ef8ff_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803ef8ff_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803ef8ff_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803ef8ff_10:;
/* 1803ef902: lea rax, [rbp + rcx] */
L_1803ef902_0:;
L_1803ef902_1:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803ef902_2:;
wr(s->u,32,8,(rd(s->r,40,8)+rd(s->u,24,8)));
L_1803ef902_3:;
wr(s->r,0,8,rd(s->u,32,8));
L_1803ef902_4:;
/* 1803ef907: movsxd rcx, dword ptr [rdi + 0x28] */
L_1803ef907_0:;
L_1803ef907_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x28))));
L_1803ef907_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef907_3:;
wr(s->r,8,8,(U)sx(rd(s->u,40,4),4));
L_1803ef907_4:;
/* 1803ef90b: add rax, rdx */
L_1803ef90b_0:;
L_1803ef90b_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+rd(s->r,16,8))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803ef90b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->r,16,8),8,0));
L_1803ef90b_3:;
wr(s->r,0,8,(rd(s->r,0,8)+rd(s->r,16,8)));
L_1803ef90b_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef90b_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ef90b_6:;
wr(s->u,45,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ef90b_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803ef90b_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803ef90b_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803ef90b_10:;
/* 1803ef90e: add rcx, rax */
L_1803ef90e_0:;
L_1803ef90e_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ef90e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,0,8),8,0));
L_1803ef90e_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,0,8)));
L_1803ef90e_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef90e_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ef90e_6:;
wr(s->u,45,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ef90e_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803ef90e_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803ef90e_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803ef90e_10:;
/* 1803ef911: movsxd rax, dword ptr [rdi + 0x38] */
L_1803ef911_0:;
L_1803ef911_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_1803ef911_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef911_3:;
wr(s->r,0,8,(U)sx(rd(s->u,40,4),4));
L_1803ef911_4:;
/* 1803ef915: imul rcx, rax */
L_1803ef915_0:;
L_1803ef915_1:;
wr(s->u,87,16,(U)sx(rd(s->r,8,8),8));
L_1803ef915_2:;
wr(s->u,103,16,(U)sx(rd(s->r,0,8),8));
L_1803ef915_3:;
wr(s->u,119,16,(rd(s->u,87,16)*rd(s->u,103,16)));
L_1803ef915_4:;
wr(s->r,8,8,(rd(s->r,8,8)*rd(s->r,0,8)));
L_1803ef915_5:;
wr(s->u,135,8,(rd(s->u,119,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ef915_6:;
wr(s->u,55,16,(U)sx(rd(s->r,8,8),8));
L_1803ef915_7:;
wr(s->r,512,1,(rd(s->u,55,16)!=rd(s->u,119,16)));
L_1803ef915_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef915_9:;
/* 1803ef919: cmp r10, rcx */
L_1803ef919_0:;
L_1803ef919_1:;
wr(s->u,71,8,rd(s->r,8,8));
L_1803ef919_2:;
wr(s->r,512,1,(rd(s->r,144,8)<rd(s->u,71,8)));
L_1803ef919_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->u,71,8),8,1));
L_1803ef919_4:;
wr(s->u,79,8,(rd(s->r,144,8)-rd(s->u,71,8)));
L_1803ef919_5:;
wr(s->r,519,1,(sx(rd(s->u,79,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef919_6:;
wr(s->r,518,1,(rd(s->u,79,8)==((U)UINT64_C(0x0))));
L_1803ef919_7:;
wr(s->u,45,8,(rd(s->u,79,8)&((U)UINT64_C(0xff))));
L_1803ef919_8:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803ef919_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803ef919_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803ef919_11:;
/* 1803ef91c: jl 0x1803ef8a0 */
L_1803ef91c_0:;
L_1803ef91c_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ef91c_2:;
if(rd(s->u,44,1)){return UINT64_C(0x1803ef8a0);}
L_1803ef91c_3:;
return UINT64_C(0x1803ef91e);
}
uint64_t b_1803ef91e(CPU*s){
/* 1803ef91e: mov ecx, dword ptr [rdi + 0x10] */
L_1803ef91e_0:;
L_1803ef91e_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ef91e_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef91e_3:;
wr(s->r,8,4,rd(s->u,52,4));
L_1803ef91e_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ef91e_5:;
/* 1803ef921: movaps xmm6, xmmword ptr [rsp + 0x60] */
L_1803ef921_0:;
L_1803ef921_1:;
wr(s->u,24,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803ef921_2:;
wr(s->u,36,16,mr((uint64_t)rd(s->u,24,8),16));
L_1803ef921_3:;
wr(s->u,78,16,rd(s->u,36,16));
L_1803ef921_4:;
wr(s->r,4992,4,rd(s->u,78,4));
L_1803ef921_5:;
wr(s->r,4996,4,rd(s->u,82,4));
L_1803ef921_6:;
wr(s->r,5000,4,rd(s->u,86,4));
L_1803ef921_7:;
wr(s->r,5004,4,rd(s->u,90,4));
L_1803ef921_8:;
/* 1803ef926: movaps xmm7, xmmword ptr [rsp + 0x50] */
L_1803ef926_0:;
L_1803ef926_1:;
wr(s->u,24,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ef926_2:;
wr(s->u,36,16,mr((uint64_t)rd(s->u,24,8),16));
L_1803ef926_3:;
wr(s->u,78,16,rd(s->u,36,16));
L_1803ef926_4:;
wr(s->r,5056,4,rd(s->u,78,4));
L_1803ef926_5:;
wr(s->r,5060,4,rd(s->u,82,4));
L_1803ef926_6:;
wr(s->r,5064,4,rd(s->u,86,4));
L_1803ef926_7:;
wr(s->r,5068,4,rd(s->u,90,4));
L_1803ef926_8:;
/* 1803ef92b: lea r11, [rsp + 0x70] */
L_1803ef92b_0:;
L_1803ef92b_1:;
wr(s->u,24,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803ef92b_2:;
wr(s->r,152,8,rd(s->u,24,8));
L_1803ef92b_3:;
/* 1803ef930: lea eax, [rcx + rcx*2] */
L_1803ef930_0:;
L_1803ef930_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x2))));
L_1803ef930_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803ef930_3:;
wr(s->r,0,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef930_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef930_5:;
/* 1803ef933: sub eax, dword ptr [rdi + 0x18] */
L_1803ef933_0:;
L_1803ef933_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803ef933_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef933_3:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,52,4)));
L_1803ef933_4:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef933_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,52,4),4,1));
L_1803ef933_6:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef933_7:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->u,52,4)));
L_1803ef933_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef933_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef933_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ef933_11:;
wr(s->u,64,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ef933_12:;
wr(s->u,68,1,pop(rd(s->u,64,4),4));
L_1803ef933_13:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803ef933_14:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803ef933_15:;
/* 1803ef936: mov rbx, qword ptr [r11 + 0x20] */
L_1803ef936_0:;
L_1803ef936_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x20))));
L_1803ef936_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ef936_3:;
wr(s->r,24,8,rd(s->u,56,8));
L_1803ef936_4:;
/* 1803ef93a: mov rsi, qword ptr [r11 + 0x30] */
L_1803ef93a_0:;
L_1803ef93a_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x30))));
L_1803ef93a_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ef93a_3:;
wr(s->r,48,8,rd(s->u,56,8));
L_1803ef93a_4:;
/* 1803ef93e: movaps xmm8, xmmword ptr [r11 - 0x30] */
L_1803ef93e_0:;
L_1803ef93e_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffd0))));
L_1803ef93e_2:;
wr(s->u,36,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803ef93e_3:;
wr(s->u,78,16,rd(s->u,36,16));
L_1803ef93e_4:;
wr(s->r,5120,4,rd(s->u,78,4));
L_1803ef93e_5:;
wr(s->r,5124,4,rd(s->u,82,4));
L_1803ef93e_6:;
wr(s->r,5128,4,rd(s->u,86,4));
L_1803ef93e_7:;
wr(s->r,5132,4,rd(s->u,90,4));
L_1803ef93e_8:;
/* 1803ef943: add eax, ebp */
L_1803ef943_0:;
L_1803ef943_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,40,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ef943_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,40,4),4,0));
L_1803ef943_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,40,4)));
L_1803ef943_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef943_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef943_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ef943_7:;
wr(s->u,64,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ef943_8:;
wr(s->u,68,1,pop(rd(s->u,64,4),4));
L_1803ef943_9:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803ef943_10:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803ef943_11:;
/* 1803ef945: mov rbp, qword ptr [r11 + 0x28] */
L_1803ef945_0:;
L_1803ef945_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x28))));
L_1803ef945_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ef945_3:;
wr(s->r,40,8,rd(s->u,56,8));
L_1803ef945_4:;
/* 1803ef949: mov dword ptr [rdi + 0x18], ecx */
L_1803ef949_0:;
L_1803ef949_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803ef949_2:;
wr(s->u,32,4,rd(s->r,8,4));
L_1803ef949_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ef949_4:;
/* 1803ef94c: mov dword ptr [rdi + 0x14], eax */
L_1803ef94c_0:;
L_1803ef94c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x14))));
L_1803ef94c_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803ef94c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ef94c_4:;
/* 1803ef94f: mov eax, dword ptr [rdi + 0x1c] */
L_1803ef94f_0:;
L_1803ef94f_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x1c))));
L_1803ef94f_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ef94f_3:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803ef94f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef94f_5:;
/* 1803ef952: mov rsp, r11 */
L_1803ef952_0:;
L_1803ef952_1:;
wr(s->r,32,8,rd(s->r,152,8));
L_1803ef952_2:;
/* 1803ef955: pop r13 */
L_1803ef955_0:;
L_1803ef955_1:;
wr(s->u,70,8,((U)UINT64_C(0x0)));
L_1803ef955_2:;
wr(s->u,70,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef955_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef955_4:;
wr(s->r,168,8,rd(s->u,70,8));
L_1803ef955_5:;
/* 1803ef957: pop r12 */
L_1803ef957_0:;
L_1803ef957_1:;
wr(s->u,70,8,((U)UINT64_C(0x0)));
L_1803ef957_2:;
wr(s->u,70,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef957_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef957_4:;
wr(s->r,160,8,rd(s->u,70,8));
L_1803ef957_5:;
/* 1803ef959: pop rdi */
L_1803ef959_0:;
L_1803ef959_1:;
wr(s->u,70,8,((U)UINT64_C(0x0)));
L_1803ef959_2:;
wr(s->u,70,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef959_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef959_4:;
wr(s->r,56,8,rd(s->u,70,8));
L_1803ef959_5:;
/* 1803ef95a: ret  */
L_1803ef95a_0:;
L_1803ef95a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ef95a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ef95a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ef95a_4:;
return UINT64_C(0x1803ef95b);
}
uint64_t b_1803ef970(CPU*s){
/* 1803ef970: mov rax, rsp */
L_1803ef970_0:;
L_1803ef970_1:;
wr(s->r,0,8,rd(s->r,32,8));
L_1803ef970_2:;
/* 1803ef973: push rbx */
L_1803ef973_0:;
L_1803ef973_1:;
wr(s->u,36,8,rd(s->r,24,8));
L_1803ef973_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef973_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,36,8));
L_1803ef973_4:;
/* 1803ef974: push rbp */
L_1803ef974_0:;
L_1803ef974_1:;
wr(s->u,36,8,rd(s->r,40,8));
L_1803ef974_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef974_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,36,8));
L_1803ef974_4:;
/* 1803ef975: push rsi */
L_1803ef975_0:;
L_1803ef975_1:;
wr(s->u,36,8,rd(s->r,48,8));
L_1803ef975_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef975_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,36,8));
L_1803ef975_4:;
/* 1803ef976: sub rsp, 0x50 */
L_1803ef976_0:;
L_1803ef976_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x50))));
L_1803ef976_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,1));
L_1803ef976_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x50))));
L_1803ef976_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef976_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ef976_6:;
wr(s->u,44,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ef976_7:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803ef976_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ef976_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ef976_10:;
/* 1803ef97a: movss xmm1, dword ptr [rip + 0x41dafe] */
L_1803ef97a_0:;
L_1803ef97a_1:;
wr(s->r,4672,4,mr(UINT64_C(0x18080d480),4));
L_1803ef97a_2:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ef97a_3:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ef97a_4:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ef97a_5:;
/* 1803ef982: movaps xmmword ptr [rax - 0x28], xmm6 */
L_1803ef982_0:;
L_1803ef982_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xffffffffffffffd8))));
L_1803ef982_2:;
wr(s->u,20,16,rd(s->r,4992,16));
L_1803ef982_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,20,16));
L_1803ef982_4:;
/* 1803ef986: movaps xmmword ptr [rax - 0x38], xmm7 */
L_1803ef986_0:;
L_1803ef986_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xffffffffffffffc8))));
L_1803ef986_2:;
wr(s->u,20,16,rd(s->r,5056,16));
L_1803ef986_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,20,16));
L_1803ef986_4:;
/* 1803ef98a: mov qword ptr [rax + 8], rdi */
L_1803ef98a_0:;
L_1803ef98a_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803ef98a_2:;
wr(s->u,12,8,rd(s->r,56,8));
L_1803ef98a_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803ef98a_4:;
/* 1803ef98e: mov qword ptr [rax + 0x10], r12 */
L_1803ef98e_0:;
L_1803ef98e_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803ef98e_2:;
wr(s->u,12,8,rd(s->r,160,8));
L_1803ef98e_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803ef98e_4:;
/* 1803ef992: mov qword ptr [rax + 0x20], r14 */
L_1803ef992_0:;
L_1803ef992_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x20))));
L_1803ef992_2:;
wr(s->u,12,8,rd(s->r,176,8));
L_1803ef992_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803ef992_4:;
/* 1803ef996: lea rax, [rip + 0x41dadb] */
L_1803ef996_0:;
L_1803ef996_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080d478)));
L_1803ef996_2:;
/* 1803ef99d: mov dword ptr [rcx + 0x3c], r8d */
L_1803ef99d_0:;
L_1803ef99d_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x3c))));
L_1803ef99d_2:;
wr(s->u,8,4,rd(s->r,128,4));
L_1803ef99d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef99d_4:;
/* 1803ef9a1: mov dword ptr [rcx + 0x38], edx */
L_1803ef9a1_0:;
L_1803ef9a1_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x38))));
L_1803ef9a1_2:;
wr(s->u,8,4,rd(s->r,16,4));
L_1803ef9a1_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef9a1_4:;
/* 1803ef9a4: mov qword ptr [rcx], rax */
L_1803ef9a4_0:;
L_1803ef9a4_1:;
wr(s->u,12,8,rd(s->r,0,8));
L_1803ef9a4_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,12,8));
L_1803ef9a4_3:;
/* 1803ef9a7: mov eax, r8d */
L_1803ef9a7_0:;
L_1803ef9a7_1:;
wr(s->r,0,4,rd(s->r,128,4));
L_1803ef9a7_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef9a7_3:;
/* 1803ef9aa: xor edx, edx */
L_1803ef9aa_0:;
L_1803ef9aa_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef9aa_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef9aa_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803ef9aa_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ef9aa_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef9aa_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ef9aa_7:;
wr(s->u,44,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ef9aa_8:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803ef9aa_9:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ef9aa_10:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ef9aa_11:;
/* 1803ef9ac: mov rsi, rcx */
L_1803ef9ac_0:;
L_1803ef9ac_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1803ef9ac_2:;
/* 1803ef9af: mov dword ptr [rcx + 0x40], r9d */
L_1803ef9af_0:;
L_1803ef9af_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x40))));
L_1803ef9af_2:;
wr(s->u,8,4,rd(s->r,136,4));
L_1803ef9af_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef9af_4:;
/* 1803ef9b3: mov dword ptr [rcx + 0x34], 0x3727c5ac */
L_1803ef9b3_0:;
L_1803ef9b3_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x34))));
L_1803ef9b3_2:;
wr(s->u,8,4,((U)UINT64_C(0x3727c5ac)));
L_1803ef9b3_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef9b3_4:;
/* 1803ef9ba: imul r8d, r8d, 0x1c */
L_1803ef9ba_0:;
L_1803ef9ba_1:;
wr(s->u,62,8,(U)sx(rd(s->r,128,4),4));
L_1803ef9ba_2:;
wr(s->u,70,8,(U)sx(((U)UINT64_C(0x1c)),4));
L_1803ef9ba_3:;
wr(s->u,78,8,(rd(s->u,62,8)*rd(s->u,70,8)));
L_1803ef9ba_4:;
wr(s->r,128,4,(rd(s->u,78,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef9ba_5:;
wr(s->u,86,4,(rd(s->u,78,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ef9ba_6:;
wr(s->u,54,8,(U)sx(rd(s->r,128,4),4));
L_1803ef9ba_7:;
wr(s->r,512,1,(rd(s->u,54,8)!=rd(s->u,78,8)));
L_1803ef9ba_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef9ba_9:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef9ba_10:;
/* 1803ef9be: imul eax, eax, 0x2c */
L_1803ef9be_0:;
L_1803ef9be_1:;
wr(s->u,62,8,(U)sx(rd(s->r,0,4),4));
L_1803ef9be_2:;
wr(s->u,70,8,(U)sx(((U)UINT64_C(0x2c)),4));
L_1803ef9be_3:;
wr(s->u,78,8,(rd(s->u,62,8)*rd(s->u,70,8)));
L_1803ef9be_4:;
wr(s->r,0,4,(rd(s->u,78,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef9be_5:;
wr(s->u,86,4,(rd(s->u,78,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ef9be_6:;
wr(s->u,54,8,(U)sx(rd(s->r,0,4),4));
L_1803ef9be_7:;
wr(s->r,512,1,(rd(s->u,54,8)!=rd(s->u,78,8)));
L_1803ef9be_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef9be_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef9be_10:;
/* 1803ef9c1: movd xmm0, eax */
L_1803ef9c1_0:;
L_1803ef9c1_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803ef9c1_2:;
/* 1803ef9c5: add rcx, 8 */
L_1803ef9c5_0:;
L_1803ef9c5_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ef9c5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,0));
L_1803ef9c5_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ef9c5_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef9c5_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ef9c5_6:;
wr(s->u,44,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ef9c5_7:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803ef9c5_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ef9c5_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ef9c5_10:;
/* 1803ef9c9: cvtdq2ps xmm0, xmm0 */
L_1803ef9c9_0:;
L_1803ef9c9_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ef9c9_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ef9c9_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ef9c9_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ef9c9_5:;
/* 1803ef9cc: mulss xmm0, xmm1 */
L_1803ef9cc_0:;
L_1803ef9cc_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ef9cc_2:;
/* 1803ef9d0: cvttss2si eax, xmm0 */
L_1803ef9d0_0:;
L_1803ef9d0_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803ef9d0_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef9d0_3:;
/* 1803ef9d4: movd xmm0, r8d */
L_1803ef9d4_0:;
L_1803ef9d4_1:;
wr(s->r,4608,16,rd(s->r,128,4));
L_1803ef9d4_2:;
/* 1803ef9d9: lea r8d, [rdx + 0x2c] */
L_1803ef9d9_0:;
L_1803ef9d9_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x2c))));
L_1803ef9d9_2:;
wr(s->r,128,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef9d9_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef9d9_4:;
/* 1803ef9dd: cvtdq2ps xmm0, xmm0 */
L_1803ef9dd_0:;
L_1803ef9dd_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ef9dd_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ef9dd_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ef9dd_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ef9dd_5:;
/* 1803ef9e0: mov dword ptr [rcx + 0x3c], eax */
L_1803ef9e0_0:;
L_1803ef9e0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x3c))));
L_1803ef9e0_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ef9e0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef9e0_4:;
/* 1803ef9e3: mulss xmm0, xmm1 */
L_1803ef9e3_0:;
L_1803ef9e3_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ef9e3_2:;
return UINT64_C(0x1803ef9e7);
}
uint64_t b_1803ef98a(CPU*s){
/* 1803ef98a: mov qword ptr [rax + 8], rdi */
L_1803ef98a_0:;
L_1803ef98a_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803ef98a_2:;
wr(s->u,12,8,rd(s->r,56,8));
L_1803ef98a_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803ef98a_4:;
/* 1803ef98e: mov qword ptr [rax + 0x10], r12 */
L_1803ef98e_0:;
L_1803ef98e_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803ef98e_2:;
wr(s->u,12,8,rd(s->r,160,8));
L_1803ef98e_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803ef98e_4:;
/* 1803ef992: mov qword ptr [rax + 0x20], r14 */
L_1803ef992_0:;
L_1803ef992_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x20))));
L_1803ef992_2:;
wr(s->u,12,8,rd(s->r,176,8));
L_1803ef992_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803ef992_4:;
/* 1803ef996: lea rax, [rip + 0x41dadb] */
L_1803ef996_0:;
L_1803ef996_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080d478)));
L_1803ef996_2:;
/* 1803ef99d: mov dword ptr [rcx + 0x3c], r8d */
L_1803ef99d_0:;
L_1803ef99d_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x3c))));
L_1803ef99d_2:;
wr(s->u,8,4,rd(s->r,128,4));
L_1803ef99d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef99d_4:;
/* 1803ef9a1: mov dword ptr [rcx + 0x38], edx */
L_1803ef9a1_0:;
L_1803ef9a1_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x38))));
L_1803ef9a1_2:;
wr(s->u,8,4,rd(s->r,16,4));
L_1803ef9a1_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef9a1_4:;
/* 1803ef9a4: mov qword ptr [rcx], rax */
L_1803ef9a4_0:;
L_1803ef9a4_1:;
wr(s->u,12,8,rd(s->r,0,8));
L_1803ef9a4_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,12,8));
L_1803ef9a4_3:;
/* 1803ef9a7: mov eax, r8d */
L_1803ef9a7_0:;
L_1803ef9a7_1:;
wr(s->r,0,4,rd(s->r,128,4));
L_1803ef9a7_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef9a7_3:;
/* 1803ef9aa: xor edx, edx */
L_1803ef9aa_0:;
L_1803ef9aa_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef9aa_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef9aa_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803ef9aa_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ef9aa_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef9aa_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ef9aa_7:;
wr(s->u,20,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ef9aa_8:;
wr(s->u,28,1,pop(rd(s->u,20,4),4));
L_1803ef9aa_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803ef9aa_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803ef9aa_11:;
/* 1803ef9ac: mov rsi, rcx */
L_1803ef9ac_0:;
L_1803ef9ac_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1803ef9ac_2:;
/* 1803ef9af: mov dword ptr [rcx + 0x40], r9d */
L_1803ef9af_0:;
L_1803ef9af_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x40))));
L_1803ef9af_2:;
wr(s->u,8,4,rd(s->r,136,4));
L_1803ef9af_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef9af_4:;
/* 1803ef9b3: mov dword ptr [rcx + 0x34], 0x3727c5ac */
L_1803ef9b3_0:;
L_1803ef9b3_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x34))));
L_1803ef9b3_2:;
wr(s->u,8,4,((U)UINT64_C(0x3727c5ac)));
L_1803ef9b3_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef9b3_4:;
/* 1803ef9ba: imul r8d, r8d, 0x1c */
L_1803ef9ba_0:;
L_1803ef9ba_1:;
wr(s->u,38,8,(U)sx(rd(s->r,128,4),4));
L_1803ef9ba_2:;
wr(s->u,46,8,(U)sx(((U)UINT64_C(0x1c)),4));
L_1803ef9ba_3:;
wr(s->u,54,8,(rd(s->u,38,8)*rd(s->u,46,8)));
L_1803ef9ba_4:;
wr(s->r,128,4,(rd(s->u,54,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef9ba_5:;
wr(s->u,62,4,(rd(s->u,54,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ef9ba_6:;
wr(s->u,30,8,(U)sx(rd(s->r,128,4),4));
L_1803ef9ba_7:;
wr(s->r,512,1,(rd(s->u,30,8)!=rd(s->u,54,8)));
L_1803ef9ba_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef9ba_9:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef9ba_10:;
/* 1803ef9be: imul eax, eax, 0x2c */
L_1803ef9be_0:;
L_1803ef9be_1:;
wr(s->u,38,8,(U)sx(rd(s->r,0,4),4));
L_1803ef9be_2:;
wr(s->u,46,8,(U)sx(((U)UINT64_C(0x2c)),4));
L_1803ef9be_3:;
wr(s->u,54,8,(rd(s->u,38,8)*rd(s->u,46,8)));
L_1803ef9be_4:;
wr(s->r,0,4,(rd(s->u,54,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef9be_5:;
wr(s->u,62,4,(rd(s->u,54,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ef9be_6:;
wr(s->u,30,8,(U)sx(rd(s->r,0,4),4));
L_1803ef9be_7:;
wr(s->r,512,1,(rd(s->u,30,8)!=rd(s->u,54,8)));
L_1803ef9be_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ef9be_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef9be_10:;
/* 1803ef9c1: movd xmm0, eax */
L_1803ef9c1_0:;
L_1803ef9c1_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803ef9c1_2:;
/* 1803ef9c5: add rcx, 8 */
L_1803ef9c5_0:;
L_1803ef9c5_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ef9c5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,0));
L_1803ef9c5_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ef9c5_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ef9c5_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ef9c5_6:;
wr(s->u,20,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ef9c5_7:;
wr(s->u,28,1,pop(rd(s->u,20,8),8));
L_1803ef9c5_8:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803ef9c5_9:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803ef9c5_10:;
/* 1803ef9c9: cvtdq2ps xmm0, xmm0 */
L_1803ef9c9_0:;
L_1803ef9c9_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ef9c9_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ef9c9_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ef9c9_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ef9c9_5:;
/* 1803ef9cc: mulss xmm0, xmm1 */
L_1803ef9cc_0:;
L_1803ef9cc_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ef9cc_2:;
/* 1803ef9d0: cvttss2si eax, xmm0 */
L_1803ef9d0_0:;
L_1803ef9d0_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803ef9d0_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef9d0_3:;
/* 1803ef9d4: movd xmm0, r8d */
L_1803ef9d4_0:;
L_1803ef9d4_1:;
wr(s->r,4608,16,rd(s->r,128,4));
L_1803ef9d4_2:;
/* 1803ef9d9: lea r8d, [rdx + 0x2c] */
L_1803ef9d9_0:;
L_1803ef9d9_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x2c))));
L_1803ef9d9_2:;
wr(s->r,128,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ef9d9_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ef9d9_4:;
/* 1803ef9dd: cvtdq2ps xmm0, xmm0 */
L_1803ef9dd_0:;
L_1803ef9dd_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ef9dd_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ef9dd_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ef9dd_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ef9dd_5:;
/* 1803ef9e0: mov dword ptr [rcx + 0x3c], eax */
L_1803ef9e0_0:;
L_1803ef9e0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x3c))));
L_1803ef9e0_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ef9e0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef9e0_4:;
/* 1803ef9e3: mulss xmm0, xmm1 */
L_1803ef9e3_0:;
L_1803ef9e3_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ef9e3_2:;
/* 1803ef9e7: cvttss2si eax, xmm0 */
L_1803ef9e7_0:;
L_1803ef9e7_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803ef9e7_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef9e7_3:;
/* 1803ef9eb: mov dword ptr [rcx + 0x40], eax */
L_1803ef9eb_0:;
L_1803ef9eb_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x40))));
L_1803ef9eb_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ef9eb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef9eb_4:;
/* 1803ef9ee: call 0x18000d6a6 */
L_1803ef9ee_0:;
L_1803ef9ee_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef9ee_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef9f3)));
L_1803ef9ee_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803ef9ee_4:;
return UINT64_C(0x1803ef9f3);
}
uint64_t b_1803ef9e7(CPU*s){
/* 1803ef9e7: cvttss2si eax, xmm0 */
L_1803ef9e7_0:;
L_1803ef9e7_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803ef9e7_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ef9e7_3:;
/* 1803ef9eb: mov dword ptr [rcx + 0x40], eax */
L_1803ef9eb_0:;
L_1803ef9eb_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x40))));
L_1803ef9eb_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ef9eb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ef9eb_4:;
/* 1803ef9ee: call 0x18000d6a6 */
L_1803ef9ee_0:;
L_1803ef9ee_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ef9ee_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ef9f3)));
L_1803ef9ee_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803ef9ee_4:;
return UINT64_C(0x1803ef9f3);
}
uint64_t b_1803ef9f3(CPU*s){
/* 1803ef9f3: mov edi, dword ptr [rsi + 0x3c] */
L_1803ef9f3_0:;
L_1803ef9f3_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803ef9f3_2:;
wr(s->u,33,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ef9f3_3:;
wr(s->r,56,4,rd(s->u,33,4));
L_1803ef9f3_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803ef9f3_5:;
/* 1803ef9f6: xor ebp, ebp */
L_1803ef9f6_0:;
L_1803ef9f6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ef9f6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ef9f6_3:;
wr(s->r,40,4,(rd(s->r,40,4)^rd(s->r,40,4)));
L_1803ef9f6_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803ef9f6_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ef9f6_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803ef9f6_7:;
wr(s->u,37,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803ef9f6_8:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803ef9f6_9:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803ef9f6_10:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803ef9f6_11:;
/* 1803ef9f8: movabs rax, 0x43dc000043dc0000 */
L_1803ef9f8_0:;
L_1803ef9f8_1:;
wr(s->r,0,8,((U)UINT64_C(0x43dc000043dc0000)));
L_1803ef9f8_2:;
/* 1803efa02: mov dword ptr [rsi + 0x88], 0x43dc0000 */
L_1803efa02_0:;
L_1803efa02_1:;
wr(s->u,13,8,(rd(s->r,48,8)+((U)UINT64_C(0x88))));
L_1803efa02_2:;
wr(s->u,21,4,((U)UINT64_C(0x43dc0000)));
L_1803efa02_3:;
mw((uint64_t)rd(s->u,13,8),4,rd(s->u,21,4));
L_1803efa02_4:;
/* 1803efa0c: mov qword ptr [rsi + 0x60], rbp */
L_1803efa0c_0:;
L_1803efa0c_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x60))));
L_1803efa0c_2:;
wr(s->u,25,8,rd(s->r,40,8));
L_1803efa0c_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,25,8));
L_1803efa0c_4:;
/* 1803efa10: mov qword ptr [rsi + 0x50], rbp */
L_1803efa10_0:;
L_1803efa10_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x50))));
L_1803efa10_2:;
wr(s->u,25,8,rd(s->r,40,8));
L_1803efa10_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,25,8));
L_1803efa10_4:;
/* 1803efa14: mov qword ptr [rsi + 0x58], rbp */
L_1803efa14_0:;
L_1803efa14_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x58))));
L_1803efa14_2:;
wr(s->u,25,8,rd(s->r,40,8));
L_1803efa14_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,25,8));
L_1803efa14_4:;
/* 1803efa18: mov qword ptr [rsi + 0x68], rbp */
L_1803efa18_0:;
L_1803efa18_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x68))));
L_1803efa18_2:;
wr(s->u,25,8,rd(s->r,40,8));
L_1803efa18_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,25,8));
L_1803efa18_4:;
/* 1803efa1c: mov qword ptr [rsi + 0x70], rbp */
L_1803efa1c_0:;
L_1803efa1c_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x70))));
L_1803efa1c_2:;
wr(s->u,25,8,rd(s->r,40,8));
L_1803efa1c_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,25,8));
L_1803efa1c_4:;
/* 1803efa20: mov qword ptr [rsi + 0x78], rbp */
L_1803efa20_0:;
L_1803efa20_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x78))));
L_1803efa20_2:;
wr(s->u,25,8,rd(s->r,40,8));
L_1803efa20_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,25,8));
L_1803efa20_4:;
/* 1803efa24: mov qword ptr [rsi + 0x8c], rax */
L_1803efa24_0:;
L_1803efa24_1:;
wr(s->u,13,8,(rd(s->r,48,8)+((U)UINT64_C(0x8c))));
L_1803efa24_2:;
wr(s->u,25,8,rd(s->r,0,8));
L_1803efa24_3:;
mw((uint64_t)rd(s->u,13,8),8,rd(s->u,25,8));
L_1803efa24_4:;
/* 1803efa2b: mov qword ptr [rsi + 0x94], rax */
L_1803efa2b_0:;
L_1803efa2b_1:;
wr(s->u,13,8,(rd(s->r,48,8)+((U)UINT64_C(0x94))));
L_1803efa2b_2:;
wr(s->u,25,8,rd(s->r,0,8));
L_1803efa2b_3:;
mw((uint64_t)rd(s->u,13,8),8,rd(s->u,25,8));
L_1803efa2b_4:;
/* 1803efa32: mov qword ptr [rsi + 0x9c], rax */
L_1803efa32_0:;
L_1803efa32_1:;
wr(s->u,13,8,(rd(s->r,48,8)+((U)UINT64_C(0x9c))));
L_1803efa32_2:;
wr(s->u,25,8,rd(s->r,0,8));
L_1803efa32_3:;
mw((uint64_t)rd(s->u,13,8),8,rd(s->u,25,8));
L_1803efa32_4:;
/* 1803efa39: mov qword ptr [rsi + 0xa4], rax */
L_1803efa39_0:;
L_1803efa39_1:;
wr(s->u,13,8,(rd(s->r,48,8)+((U)UINT64_C(0xa4))));
L_1803efa39_2:;
wr(s->u,25,8,rd(s->r,0,8));
L_1803efa39_3:;
mw((uint64_t)rd(s->u,13,8),8,rd(s->u,25,8));
L_1803efa39_4:;
/* 1803efa40: mov dword ptr [rsi + 0xac], eax */
L_1803efa40_0:;
L_1803efa40_1:;
wr(s->u,13,8,(rd(s->r,48,8)+((U)UINT64_C(0xac))));
L_1803efa40_2:;
wr(s->u,21,4,rd(s->r,0,4));
L_1803efa40_3:;
mw((uint64_t)rd(s->u,13,8),4,rd(s->u,21,4));
L_1803efa40_4:;
/* 1803efa46: movsxd rcx, dword ptr [rsi + 0x40] */
L_1803efa46_0:;
L_1803efa46_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x40))));
L_1803efa46_2:;
wr(s->u,33,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803efa46_3:;
wr(s->r,8,8,(U)sx(rd(s->u,33,4),4));
L_1803efa46_4:;
/* 1803efa4a: sar edi, 3 */
L_1803efa4a_0:;
L_1803efa4a_1:;
wr(s->u,134,4,(((U)UINT64_C(0x3))&((U)UINT64_C(0x1f))));
L_1803efa4a_2:;
wr(s->u,138,4,rd(s->r,56,4));
L_1803efa4a_3:;
wr(s->r,56,4,((rd(s->u,134,4)>=32)?(sx(rd(s->r,56,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,56,4),4)>>rd(s->u,134,4))));
L_1803efa4a_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803efa4a_5:;
wr(s->u,62,1,(rd(s->u,134,4)==((U)UINT64_C(0x0))));
L_1803efa4a_6:;
wr(s->u,63,4,(rd(s->u,134,4)-((U)UINT64_C(0x1))));
L_1803efa4a_7:;
wr(s->u,67,4,((rd(s->u,63,4)>=32)?(sx(rd(s->u,138,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,138,4),4)>>rd(s->u,63,4))));
L_1803efa4a_8:;
wr(s->u,71,4,(rd(s->u,67,4)&((U)UINT64_C(0x1))));
L_1803efa4a_9:;
wr(s->u,75,1,(rd(s->u,71,4)!=((U)UINT64_C(0x0))));
L_1803efa4a_10:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803efa4a_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803efa4a_12:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803efa4a_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803efa4a_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,75,1)));
L_1803efa4a_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803efa4a_16:;
wr(s->u,76,1,(rd(s->u,134,4)==((U)UINT64_C(0x1))));
L_1803efa4a_17:;
wr(s->u,0,1,rd(s->u,76,1));
L_1803efa4a_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803efa4a_19:;
wr(s->u,2,1,(!rd(s->u,76,1)));
L_1803efa4a_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803efa4a_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803efa4a_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803efa4a_23:;
wr(s->u,43,1,(rd(s->u,134,4)!=((U)UINT64_C(0x0))));
L_1803efa4a_24:;
wr(s->u,44,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efa4a_25:;
wr(s->u,45,1,(!rd(s->u,43,1)));
L_1803efa4a_26:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,519,1)));
L_1803efa4a_27:;
wr(s->u,47,1,(rd(s->u,43,1)&rd(s->u,44,1)));
L_1803efa4a_28:;
wr(s->r,519,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803efa4a_29:;
wr(s->u,48,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803efa4a_30:;
wr(s->u,49,1,(!rd(s->u,43,1)));
L_1803efa4a_31:;
wr(s->u,50,1,(rd(s->u,49,1)&rd(s->r,518,1)));
L_1803efa4a_32:;
wr(s->u,51,1,(rd(s->u,43,1)&rd(s->u,48,1)));
L_1803efa4a_33:;
wr(s->r,518,1,(rd(s->u,50,1)|rd(s->u,51,1)));
L_1803efa4a_34:;
wr(s->u,52,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803efa4a_35:;
wr(s->u,56,1,pop(rd(s->u,52,4),4));
L_1803efa4a_36:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803efa4a_37:;
wr(s->u,58,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803efa4a_38:;
wr(s->u,59,1,(!rd(s->u,43,1)));
L_1803efa4a_39:;
wr(s->u,60,1,(rd(s->u,59,1)&rd(s->r,514,1)));
L_1803efa4a_40:;
wr(s->u,61,1,(rd(s->u,43,1)&rd(s->u,58,1)));
L_1803efa4a_41:;
wr(s->r,514,1,(rd(s->u,60,1)|rd(s->u,61,1)));
L_1803efa4a_42:;
/* 1803efa4d: mov eax, 4 */
L_1803efa4d_0:;
L_1803efa4d_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803efa4d_2:;
/* 1803efa52: mov r12, 0xffffffffffffffff */
L_1803efa52_0:;
L_1803efa52_1:;
wr(s->r,160,8,((U)UINT64_C(0xffffffffffffffff)));
L_1803efa52_2:;
/* 1803efa59: dec edi */
L_1803efa59_0:;
L_1803efa59_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),((U)UINT64_C(0x1)),4,1));
L_1803efa59_2:;
wr(s->r,56,4,(rd(s->r,56,4)-((U)UINT64_C(0x1))));
L_1803efa59_3:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803efa59_4:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efa59_5:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803efa59_6:;
wr(s->u,37,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803efa59_7:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803efa59_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803efa59_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803efa59_10:;
/* 1803efa5b: mov dword ptr [rsi + 0xb0], 0x43dc0000 */
L_1803efa5b_0:;
L_1803efa5b_1:;
wr(s->u,13,8,(rd(s->r,48,8)+((U)UINT64_C(0xb0))));
L_1803efa5b_2:;
wr(s->u,21,4,((U)UINT64_C(0x43dc0000)));
L_1803efa5b_3:;
mw((uint64_t)rd(s->u,13,8),4,rd(s->u,21,4));
L_1803efa5b_4:;
/* 1803efa65: mov dword ptr [rsi + 0xb4], 0x43dc0000 */
L_1803efa65_0:;
L_1803efa65_1:;
wr(s->u,13,8,(rd(s->r,48,8)+((U)UINT64_C(0xb4))));
L_1803efa65_2:;
wr(s->u,21,4,((U)UINT64_C(0x43dc0000)));
L_1803efa65_3:;
mw((uint64_t)rd(s->u,13,8),4,rd(s->u,21,4));
L_1803efa65_4:;
/* 1803efa6f: mul rcx */
L_1803efa6f_0:;
L_1803efa6f_1:;
wr(s->u,86,16,rd(s->r,0,8));
L_1803efa6f_2:;
wr(s->u,102,16,rd(s->r,8,8));
L_1803efa6f_3:;
wr(s->u,118,16,(rd(s->u,86,16)*rd(s->u,102,16)));
L_1803efa6f_4:;
wr(s->r,16,8,(rd(s->u,118,16) >> (((U)UINT64_C(0x8))*8)));
L_1803efa6f_5:;
wr(s->r,0,8,(rd(s->u,118,16) >> (((U)UINT64_C(0x0))*8)));
L_1803efa6f_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803efa6f_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803efa6f_8:;
/* 1803efa72: cmovo rax, r12 */
L_1803efa72_0:;
L_1803efa72_1:;
wr(s->u,77,8,rd(s->r,160,8));
L_1803efa72_2:;
wr(s->u,85,1,(!rd(s->r,523,1)));
L_1803efa72_3:;
if(rd(s->u,85,1)){goto L_1803efa76_0;}
L_1803efa72_4:;
wr(s->r,0,8,rd(s->u,77,8));
L_1803efa72_5:;
/* 1803efa76: mov dword ptr [rsi + 0xbc], ebp */
L_1803efa76_0:;
L_1803efa76_1:;
wr(s->u,13,8,(rd(s->r,48,8)+((U)UINT64_C(0xbc))));
L_1803efa76_2:;
wr(s->u,21,4,rd(s->r,40,4));
L_1803efa76_3:;
mw((uint64_t)rd(s->u,13,8),4,rd(s->u,21,4));
L_1803efa76_4:;
/* 1803efa7c: mov rcx, rax */
L_1803efa7c_0:;
L_1803efa7c_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803efa7c_2:;
/* 1803efa7f: call 0x180003140 */
L_1803efa7f_0:;
L_1803efa7f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efa7f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efa84)));
L_1803efa7f_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803efa7f_4:;
return UINT64_C(0x1803efa84);
}
uint64_t b_1803efa76(CPU*s){
/* 1803efa76: mov dword ptr [rsi + 0xbc], ebp */
L_1803efa76_0:;
L_1803efa76_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xbc))));
L_1803efa76_2:;
wr(s->u,8,4,rd(s->r,40,4));
L_1803efa76_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803efa76_4:;
/* 1803efa7c: mov rcx, rax */
L_1803efa7c_0:;
L_1803efa7c_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803efa7c_2:;
/* 1803efa7f: call 0x180003140 */
L_1803efa7f_0:;
L_1803efa7f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efa7f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efa84)));
L_1803efa7f_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803efa7f_4:;
return UINT64_C(0x1803efa84);
}
uint64_t b_1803efa84(CPU*s){
/* 1803efa84: mov qword ptr [rsi + 0x60], rax */
L_1803efa84_0:;
L_1803efa84_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x60))));
L_1803efa84_2:;
wr(s->u,32,8,rd(s->r,0,8));
L_1803efa84_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,32,8));
L_1803efa84_4:;
/* 1803efa88: lea eax, [rdi + rdi + 1] */
L_1803efa88_0:;
L_1803efa88_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1))+rd(s->r,56,8)));
L_1803efa88_2:;
wr(s->u,16,8,(rd(s->r,56,8)*((U)UINT64_C(0x1))));
L_1803efa88_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803efa88_4:;
wr(s->r,0,4,(rd(s->u,24,8) >> (((U)UINT64_C(0x0))*8)));
L_1803efa88_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803efa88_6:;
/* 1803efa8c: movsxd rbx, eax */
L_1803efa8c_0:;
L_1803efa8c_1:;
wr(s->r,24,8,(U)sx(rd(s->r,0,4),4));
L_1803efa8c_2:;
/* 1803efa8f: mov eax, 4 */
L_1803efa8f_0:;
L_1803efa8f_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803efa8f_2:;
/* 1803efa94: mul rbx */
L_1803efa94_0:;
L_1803efa94_1:;
wr(s->u,49,16,rd(s->r,0,8));
L_1803efa94_2:;
wr(s->u,65,16,rd(s->r,24,8));
L_1803efa94_3:;
wr(s->u,81,16,(rd(s->u,49,16)*rd(s->u,65,16)));
L_1803efa94_4:;
wr(s->r,16,8,(rd(s->u,81,16) >> (((U)UINT64_C(0x8))*8)));
L_1803efa94_5:;
wr(s->r,0,8,(rd(s->u,81,16) >> (((U)UINT64_C(0x0))*8)));
L_1803efa94_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803efa94_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803efa94_8:;
/* 1803efa97: cmovo rax, r12 */
L_1803efa97_0:;
L_1803efa97_1:;
wr(s->u,40,8,rd(s->r,160,8));
L_1803efa97_2:;
wr(s->u,48,1,(!rd(s->r,523,1)));
L_1803efa97_3:;
if(rd(s->u,48,1)){goto L_1803efa9b_0;}
L_1803efa97_4:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803efa97_5:;
/* 1803efa9b: mov rcx, rax */
L_1803efa9b_0:;
L_1803efa9b_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803efa9b_2:;
/* 1803efa9e: call 0x180003140 */
L_1803efa9e_0:;
L_1803efa9e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efa9e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efaa3)));
L_1803efa9e_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803efa9e_4:;
return UINT64_C(0x1803efaa3);
}
uint64_t b_1803efa9b(CPU*s){
/* 1803efa9b: mov rcx, rax */
L_1803efa9b_0:;
L_1803efa9b_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803efa9b_2:;
/* 1803efa9e: call 0x180003140 */
L_1803efa9e_0:;
L_1803efa9e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efa9e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efaa3)));
L_1803efa9e_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803efa9e_4:;
return UINT64_C(0x1803efaa3);
}
uint64_t b_1803efaa3(CPU*s){
/* 1803efaa3: mov qword ptr [rsi + 0x50], rax */
L_1803efaa3_0:;
L_1803efaa3_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x50))));
L_1803efaa3_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803efaa3_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803efaa3_4:;
/* 1803efaa7: mov eax, 4 */
L_1803efaa7_0:;
L_1803efaa7_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803efaa7_2:;
/* 1803efaac: mul rbx */
L_1803efaac_0:;
L_1803efaac_1:;
wr(s->u,25,16,rd(s->r,0,8));
L_1803efaac_2:;
wr(s->u,41,16,rd(s->r,24,8));
L_1803efaac_3:;
wr(s->u,57,16,(rd(s->u,25,16)*rd(s->u,41,16)));
L_1803efaac_4:;
wr(s->r,16,8,(rd(s->u,57,16) >> (((U)UINT64_C(0x8))*8)));
L_1803efaac_5:;
wr(s->r,0,8,(rd(s->u,57,16) >> (((U)UINT64_C(0x0))*8)));
L_1803efaac_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803efaac_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803efaac_8:;
/* 1803efaaf: cmovo rax, r12 */
L_1803efaaf_0:;
L_1803efaaf_1:;
wr(s->u,16,8,rd(s->r,160,8));
L_1803efaaf_2:;
wr(s->u,24,1,(!rd(s->r,523,1)));
L_1803efaaf_3:;
if(rd(s->u,24,1)){goto L_1803efab3_0;}
L_1803efaaf_4:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803efaaf_5:;
/* 1803efab3: mov rcx, rax */
L_1803efab3_0:;
L_1803efab3_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803efab3_2:;
/* 1803efab6: call 0x180003140 */
L_1803efab6_0:;
L_1803efab6_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efab6_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efabb)));
L_1803efab6_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803efab6_4:;
return UINT64_C(0x1803efabb);
}
uint64_t b_1803efab3(CPU*s){
/* 1803efab3: mov rcx, rax */
L_1803efab3_0:;
L_1803efab3_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803efab3_2:;
/* 1803efab6: call 0x180003140 */
L_1803efab6_0:;
L_1803efab6_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efab6_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efabb)));
L_1803efab6_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803efab6_4:;
return UINT64_C(0x1803efabb);
}
uint64_t b_1803efabb(CPU*s){
/* 1803efabb: movsxd rcx, dword ptr [rsi + 0x3c] */
L_1803efabb_0:;
L_1803efabb_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803efabb_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803efabb_3:;
wr(s->r,8,8,(U)sx(rd(s->u,16,4),4));
L_1803efabb_4:;
/* 1803efabf: mov qword ptr [rsi + 0x58], rax */
L_1803efabf_0:;
L_1803efabf_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x58))));
L_1803efabf_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803efabf_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803efabf_4:;
/* 1803efac3: mov eax, 4 */
L_1803efac3_0:;
L_1803efac3_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803efac3_2:;
/* 1803efac8: mul rcx */
L_1803efac8_0:;
L_1803efac8_1:;
wr(s->u,29,16,rd(s->r,0,8));
L_1803efac8_2:;
wr(s->u,45,16,rd(s->r,8,8));
L_1803efac8_3:;
wr(s->u,61,16,(rd(s->u,29,16)*rd(s->u,45,16)));
L_1803efac8_4:;
wr(s->r,16,8,(rd(s->u,61,16) >> (((U)UINT64_C(0x8))*8)));
L_1803efac8_5:;
wr(s->r,0,8,(rd(s->u,61,16) >> (((U)UINT64_C(0x0))*8)));
L_1803efac8_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803efac8_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803efac8_8:;
/* 1803efacb: cmovo rax, r12 */
L_1803efacb_0:;
L_1803efacb_1:;
wr(s->u,20,8,rd(s->r,160,8));
L_1803efacb_2:;
wr(s->u,28,1,(!rd(s->r,523,1)));
L_1803efacb_3:;
if(rd(s->u,28,1)){goto L_1803efacf_0;}
L_1803efacb_4:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803efacb_5:;
/* 1803efacf: mov rcx, rax */
L_1803efacf_0:;
L_1803efacf_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803efacf_2:;
/* 1803efad2: call 0x180003140 */
L_1803efad2_0:;
L_1803efad2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efad2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efad7)));
L_1803efad2_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803efad2_4:;
return UINT64_C(0x1803efad7);
}
uint64_t b_1803efacf(CPU*s){
/* 1803efacf: mov rcx, rax */
L_1803efacf_0:;
L_1803efacf_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803efacf_2:;
/* 1803efad2: call 0x180003140 */
L_1803efad2_0:;
L_1803efad2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efad2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efad7)));
L_1803efad2_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803efad2_4:;
return UINT64_C(0x1803efad7);
}
uint64_t b_1803efad7(CPU*s){
/* 1803efad7: movsxd rcx, dword ptr [rsi + 0x3c] */
L_1803efad7_0:;
L_1803efad7_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803efad7_2:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803efad7_3:;
wr(s->r,8,8,(U)sx(rd(s->u,21,4),4));
L_1803efad7_4:;
/* 1803efadb: shl rcx, 2 */
L_1803efadb_0:;
L_1803efadb_1:;
wr(s->u,65,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803efadb_2:;
wr(s->u,69,8,rd(s->r,8,8));
L_1803efadb_3:;
wr(s->r,8,8,((rd(s->u,65,4)>=64)?0:(rd(s->r,8,8)<<rd(s->u,65,4))));
L_1803efadb_4:;
wr(s->u,48,1,(rd(s->u,65,4)==((U)UINT64_C(0x0))));
L_1803efadb_5:;
wr(s->u,49,4,(rd(s->u,65,4)-((U)UINT64_C(0x1))));
L_1803efadb_6:;
wr(s->u,53,8,((rd(s->u,49,4)>=64)?0:(rd(s->u,69,8)<<rd(s->u,49,4))));
L_1803efadb_7:;
wr(s->u,61,1,(sx(rd(s->u,53,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efadb_8:;
wr(s->u,0,1,rd(s->u,48,1));
L_1803efadb_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803efadb_10:;
wr(s->u,2,1,(!rd(s->u,48,1)));
L_1803efadb_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803efadb_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,61,1)));
L_1803efadb_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803efadb_14:;
wr(s->u,62,1,(rd(s->u,65,4)==((U)UINT64_C(0x1))));
L_1803efadb_15:;
wr(s->u,63,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efadb_16:;
wr(s->u,64,1,(rd(s->r,512,1)^rd(s->u,63,1)));
L_1803efadb_17:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803efadb_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,64,1)));
L_1803efadb_19:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803efadb_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803efadb_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803efadb_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803efadb_23:;
wr(s->u,25,1,(rd(s->u,65,4)!=((U)UINT64_C(0x0))));
L_1803efadb_24:;
wr(s->u,26,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efadb_25:;
wr(s->u,27,1,(!rd(s->u,25,1)));
L_1803efadb_26:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,519,1)));
L_1803efadb_27:;
wr(s->u,29,1,(rd(s->u,25,1)&rd(s->u,26,1)));
L_1803efadb_28:;
wr(s->r,519,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803efadb_29:;
wr(s->u,30,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803efadb_30:;
wr(s->u,31,1,(!rd(s->u,25,1)));
L_1803efadb_31:;
wr(s->u,32,1,(rd(s->u,31,1)&rd(s->r,518,1)));
L_1803efadb_32:;
wr(s->u,33,1,(rd(s->u,25,1)&rd(s->u,30,1)));
L_1803efadb_33:;
wr(s->r,518,1,(rd(s->u,32,1)|rd(s->u,33,1)));
L_1803efadb_34:;
wr(s->u,34,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803efadb_35:;
wr(s->u,42,1,pop(rd(s->u,34,8),8));
L_1803efadb_36:;
wr(s->u,43,1,(rd(s->u,42,1)&((U)UINT64_C(0x1))));
L_1803efadb_37:;
wr(s->u,44,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803efadb_38:;
wr(s->u,45,1,(!rd(s->u,25,1)));
L_1803efadb_39:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,514,1)));
L_1803efadb_40:;
wr(s->u,47,1,(rd(s->u,25,1)&rd(s->u,44,1)));
L_1803efadb_41:;
wr(s->r,514,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803efadb_42:;
/* 1803efadf: mov qword ptr [rsi + 0x78], rax */
L_1803efadf_0:;
L_1803efadf_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x78))));
L_1803efadf_2:;
wr(s->u,13,8,rd(s->r,0,8));
L_1803efadf_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,13,8));
L_1803efadf_4:;
/* 1803efae3: lea edx, [rbp + 0x10] */
L_1803efae3_0:;
L_1803efae3_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x10))));
L_1803efae3_2:;
wr(s->r,16,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803efae3_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803efae3_4:;
/* 1803efae6: call 0x180609c10 */
L_1803efae6_0:;
L_1803efae6_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efae6_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efaeb)));
L_1803efae6_3:;
return (uint64_t)UINT64_C(0x180609c10);
L_1803efae6_4:;
return UINT64_C(0x1803efaeb);
}
uint64_t b_1803efaeb(CPU*s){
/* 1803efaeb: mov ecx, dword ptr [rsi + 0x3c] */
L_1803efaeb_0:;
L_1803efaeb_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803efaeb_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803efaeb_3:;
wr(s->r,8,4,rd(s->u,16,4));
L_1803efaeb_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803efaeb_5:;
/* 1803efaee: sar ecx, 1 */
L_1803efaee_0:;
L_1803efaee_1:;
wr(s->u,83,4,(rd(s->r,8,4)&((U)UINT64_C(0x1))));
L_1803efaee_2:;
wr(s->r,512,1,(rd(s->u,83,4)!=((U)UINT64_C(0x0))));
L_1803efaee_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efaee_4:;
wr(s->r,8,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,8,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,8,4),4)>>((U)UINT64_C(0x1)))));
L_1803efaee_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803efaee_6:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efaee_7:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803efaee_8:;
wr(s->u,20,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803efaee_9:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803efaee_10:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803efaee_11:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803efaee_12:;
/* 1803efaf0: mov qword ptr [rsi + 0x68], rax */
L_1803efaf0_0:;
L_1803efaf0_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x68))));
L_1803efaf0_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803efaf0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803efaf0_4:;
/* 1803efaf4: mov eax, 4 */
L_1803efaf4_0:;
L_1803efaf4_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803efaf4_2:;
/* 1803efaf9: movsxd rdx, ecx */
L_1803efaf9_0:;
L_1803efaf9_1:;
wr(s->r,16,8,(U)sx(rd(s->r,8,4),4));
L_1803efaf9_2:;
/* 1803efafc: mul rdx */
L_1803efafc_0:;
L_1803efafc_1:;
wr(s->u,35,16,rd(s->r,0,8));
L_1803efafc_2:;
wr(s->u,51,16,rd(s->r,16,8));
L_1803efafc_3:;
wr(s->u,67,16,(rd(s->u,35,16)*rd(s->u,51,16)));
L_1803efafc_4:;
wr(s->r,16,8,(rd(s->u,67,16) >> (((U)UINT64_C(0x8))*8)));
L_1803efafc_5:;
wr(s->r,0,8,(rd(s->u,67,16) >> (((U)UINT64_C(0x0))*8)));
L_1803efafc_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803efafc_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803efafc_8:;
/* 1803efaff: cmovo rax, r12 */
L_1803efaff_0:;
L_1803efaff_1:;
wr(s->u,26,8,rd(s->r,160,8));
L_1803efaff_2:;
wr(s->u,34,1,(!rd(s->r,523,1)));
L_1803efaff_3:;
if(rd(s->u,34,1)){goto L_1803efb03_0;}
L_1803efaff_4:;
wr(s->r,0,8,rd(s->u,26,8));
L_1803efaff_5:;
/* 1803efb03: mov rcx, rax */
L_1803efb03_0:;
L_1803efb03_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803efb03_2:;
/* 1803efb06: call 0x180003140 */
L_1803efb06_0:;
L_1803efb06_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efb06_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efb0b)));
L_1803efb06_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803efb06_4:;
return UINT64_C(0x1803efb0b);
}
uint64_t b_1803efb03(CPU*s){
/* 1803efb03: mov rcx, rax */
L_1803efb03_0:;
L_1803efb03_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803efb03_2:;
/* 1803efb06: call 0x180003140 */
L_1803efb06_0:;
L_1803efb06_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efb06_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efb0b)));
L_1803efb06_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803efb06_4:;
return UINT64_C(0x1803efb0b);
}
uint64_t b_1803efb0b(CPU*s){
/* 1803efb0b: movsxd rcx, dword ptr [rsi + 0x3c] */
L_1803efb0b_0:;
L_1803efb0b_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803efb0b_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803efb0b_3:;
wr(s->r,8,8,(U)sx(rd(s->u,16,4),4));
L_1803efb0b_4:;
/* 1803efb0f: mov qword ptr [rsi + 0x70], rax */
L_1803efb0f_0:;
L_1803efb0f_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x70))));
L_1803efb0f_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803efb0f_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803efb0f_4:;
/* 1803efb13: mov eax, 4 */
L_1803efb13_0:;
L_1803efb13_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803efb13_2:;
/* 1803efb18: mul rcx */
L_1803efb18_0:;
L_1803efb18_1:;
wr(s->u,29,16,rd(s->r,0,8));
L_1803efb18_2:;
wr(s->u,45,16,rd(s->r,8,8));
L_1803efb18_3:;
wr(s->u,61,16,(rd(s->u,29,16)*rd(s->u,45,16)));
L_1803efb18_4:;
wr(s->r,16,8,(rd(s->u,61,16) >> (((U)UINT64_C(0x8))*8)));
L_1803efb18_5:;
wr(s->r,0,8,(rd(s->u,61,16) >> (((U)UINT64_C(0x0))*8)));
L_1803efb18_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803efb18_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803efb18_8:;
/* 1803efb1b: cmovo rax, r12 */
L_1803efb1b_0:;
L_1803efb1b_1:;
wr(s->u,20,8,rd(s->r,160,8));
L_1803efb1b_2:;
wr(s->u,28,1,(!rd(s->r,523,1)));
L_1803efb1b_3:;
if(rd(s->u,28,1)){goto L_1803efb1f_0;}
L_1803efb1b_4:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803efb1b_5:;
/* 1803efb1f: mov rcx, rax */
L_1803efb1f_0:;
L_1803efb1f_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803efb1f_2:;
/* 1803efb22: call 0x180003140 */
L_1803efb22_0:;
L_1803efb22_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efb22_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efb27)));
L_1803efb22_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803efb22_4:;
return UINT64_C(0x1803efb27);
}
uint64_t b_1803efb1f(CPU*s){
/* 1803efb1f: mov rcx, rax */
L_1803efb1f_0:;
L_1803efb1f_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803efb1f_2:;
/* 1803efb22: call 0x180003140 */
L_1803efb22_0:;
L_1803efb22_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efb22_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efb27)));
L_1803efb22_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803efb22_4:;
return UINT64_C(0x1803efb27);
}
uint64_t b_1803efb27(CPU*s){
/* 1803efb27: mov rbx, rbp */
L_1803efb27_0:;
L_1803efb27_1:;
wr(s->r,24,8,rd(s->r,40,8));
L_1803efb27_2:;
/* 1803efb2a: movsxd r14, edi */
L_1803efb2a_0:;
L_1803efb2a_1:;
wr(s->r,176,8,(U)sx(rd(s->r,56,4),4));
L_1803efb2a_2:;
/* 1803efb2d: mov qword ptr [rsi + 0x80], rax */
L_1803efb2d_0:;
L_1803efb2d_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x80))));
L_1803efb2d_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803efb2d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803efb2d_4:;
/* 1803efb34: test edi, edi */
L_1803efb34_0:;
L_1803efb34_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803efb34_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efb34_3:;
wr(s->u,24,4,(rd(s->r,56,4)&rd(s->r,56,4)));
L_1803efb34_4:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efb34_5:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803efb34_6:;
wr(s->u,18,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803efb34_7:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803efb34_8:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803efb34_9:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803efb34_10:;
/* 1803efb36: jle 0x1803efc1c */
L_1803efb36_0:;
L_1803efb36_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803efb36_2:;
wr(s->u,17,1,((rd(s->r,518,1)!=0)||(rd(s->u,16,1)!=0)));
L_1803efb36_3:;
if(rd(s->u,17,1)){return UINT64_C(0x1803efc1c);}
L_1803efb36_4:;
return UINT64_C(0x1803efb3c);
}
uint64_t b_1803efb3c(CPU*s){
/* 1803efb3c: movss xmm7, dword ptr [rip + 0x26b9c8] */
L_1803efb3c_0:;
L_1803efb3c_1:;
wr(s->r,5056,4,mr(UINT64_C(0x18065b50c),4));
L_1803efb3c_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803efb3c_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803efb3c_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803efb3c_5:;
/* 1803efb44: mov qword ptr [rsp + 0x80], r13 */
L_1803efb44_0:;
L_1803efb44_1:;
wr(s->u,16,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803efb44_2:;
wr(s->u,24,8,rd(s->r,168,8));
L_1803efb44_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803efb44_4:;
/* 1803efb4c: mov r12d, 1 */
L_1803efb4c_0:;
L_1803efb4c_1:;
wr(s->r,160,8,((U)UINT64_C(0x1)));
L_1803efb4c_2:;
/* 1803efb52: lea r13d, [rbp + 3] */
L_1803efb52_0:;
L_1803efb52_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x3))));
L_1803efb52_2:;
wr(s->r,168,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803efb52_3:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803efb52_4:;
/* 1803efb56: lea rdi, [r14*4] */
L_1803efb56_0:;
L_1803efb56_1:;
wr(s->u,8,8,(rd(s->r,176,8)*((U)UINT64_C(0x4))));
L_1803efb56_2:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803efb56_3:;
/* 1803efb5e: nop  */
L_1803efb5e_0:;
L_1803efb5e_1:;
/* 1803efb60: mov eax, dword ptr [rsi + 0x3c] */
L_1803efb60_0:;
L_1803efb60_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803efb60_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803efb60_3:;
wr(s->r,0,4,rd(s->u,32,4));
L_1803efb60_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803efb60_5:;
/* 1803efb63: movd xmm6, r12d */
L_1803efb63_0:;
L_1803efb63_1:;
wr(s->r,4992,16,rd(s->r,160,4));
L_1803efb63_2:;
/* 1803efb68: sar eax, 1 */
L_1803efb68_0:;
L_1803efb68_1:;
wr(s->u,42,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803efb68_2:;
wr(s->r,512,1,(rd(s->u,42,4)!=((U)UINT64_C(0x0))));
L_1803efb68_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efb68_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803efb68_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803efb68_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efb68_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803efb68_8:;
wr(s->u,36,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803efb68_9:;
wr(s->u,40,1,pop(rd(s->u,36,4),4));
L_1803efb68_10:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803efb68_11:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803efb68_12:;
/* 1803efb6a: movd xmm1, eax */
L_1803efb6a_0:;
L_1803efb6a_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803efb6a_2:;
/* 1803efb6e: cvtdq2ps xmm6, xmm6 */
L_1803efb6e_0:;
L_1803efb6e_1:;
wr(s->r,4992,4,fb((double)sx(rd(s->r,4992,4),4),4));
L_1803efb6e_2:;
wr(s->r,4996,4,fb((double)sx(rd(s->r,4996,4),4),4));
L_1803efb6e_3:;
wr(s->r,5000,4,fb((double)sx(rd(s->r,5000,4),4),4));
L_1803efb6e_4:;
wr(s->r,5004,4,fb((double)sx(rd(s->r,5004,4),4),4));
L_1803efb6e_5:;
/* 1803efb71: mulss xmm6, xmm7 */
L_1803efb71_0:;
L_1803efb71_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803efb71_2:;
/* 1803efb75: cvtdq2ps xmm1, xmm1 */
L_1803efb75_0:;
L_1803efb75_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803efb75_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803efb75_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803efb75_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803efb75_5:;
/* 1803efb78: movaps xmm0, xmm6 */
L_1803efb78_0:;
L_1803efb78_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803efb78_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803efb78_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803efb78_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803efb78_5:;
/* 1803efb7b: divss xmm0, xmm1 */
L_1803efb7b_0:;
L_1803efb7b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803efb7b_2:;
/* 1803efb7f: call 0x180609b0e */
L_1803efb7f_0:;
L_1803efb7f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efb7f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efb84)));
L_1803efb7f_3:;
return (uint64_t)UINT64_C(0x180609b0e);
L_1803efb7f_4:;
return UINT64_C(0x1803efb84);
}
uint64_t b_1803efb44(CPU*s){
/* 1803efb44: mov qword ptr [rsp + 0x80], r13 */
L_1803efb44_0:;
L_1803efb44_1:;
wr(s->u,16,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803efb44_2:;
wr(s->u,24,8,rd(s->r,168,8));
L_1803efb44_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803efb44_4:;
/* 1803efb4c: mov r12d, 1 */
L_1803efb4c_0:;
L_1803efb4c_1:;
wr(s->r,160,8,((U)UINT64_C(0x1)));
L_1803efb4c_2:;
/* 1803efb52: lea r13d, [rbp + 3] */
L_1803efb52_0:;
L_1803efb52_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x3))));
L_1803efb52_2:;
wr(s->r,168,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803efb52_3:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803efb52_4:;
/* 1803efb56: lea rdi, [r14*4] */
L_1803efb56_0:;
L_1803efb56_1:;
wr(s->u,8,8,(rd(s->r,176,8)*((U)UINT64_C(0x4))));
L_1803efb56_2:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803efb56_3:;
/* 1803efb5e: nop  */
L_1803efb5e_0:;
L_1803efb5e_1:;
/* 1803efb60: mov eax, dword ptr [rsi + 0x3c] */
L_1803efb60_0:;
L_1803efb60_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803efb60_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803efb60_3:;
wr(s->r,0,4,rd(s->u,32,4));
L_1803efb60_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803efb60_5:;
/* 1803efb63: movd xmm6, r12d */
L_1803efb63_0:;
L_1803efb63_1:;
wr(s->r,4992,16,rd(s->r,160,4));
L_1803efb63_2:;
/* 1803efb68: sar eax, 1 */
L_1803efb68_0:;
L_1803efb68_1:;
wr(s->u,42,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803efb68_2:;
wr(s->r,512,1,(rd(s->u,42,4)!=((U)UINT64_C(0x0))));
L_1803efb68_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efb68_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803efb68_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803efb68_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efb68_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803efb68_8:;
wr(s->u,36,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803efb68_9:;
wr(s->u,40,1,pop(rd(s->u,36,4),4));
L_1803efb68_10:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803efb68_11:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803efb68_12:;
/* 1803efb6a: movd xmm1, eax */
L_1803efb6a_0:;
L_1803efb6a_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803efb6a_2:;
/* 1803efb6e: cvtdq2ps xmm6, xmm6 */
L_1803efb6e_0:;
L_1803efb6e_1:;
wr(s->r,4992,4,fb((double)sx(rd(s->r,4992,4),4),4));
L_1803efb6e_2:;
wr(s->r,4996,4,fb((double)sx(rd(s->r,4996,4),4),4));
L_1803efb6e_3:;
wr(s->r,5000,4,fb((double)sx(rd(s->r,5000,4),4),4));
L_1803efb6e_4:;
wr(s->r,5004,4,fb((double)sx(rd(s->r,5004,4),4),4));
L_1803efb6e_5:;
/* 1803efb71: mulss xmm6, xmm7 */
L_1803efb71_0:;
L_1803efb71_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803efb71_2:;
/* 1803efb75: cvtdq2ps xmm1, xmm1 */
L_1803efb75_0:;
L_1803efb75_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803efb75_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803efb75_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803efb75_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803efb75_5:;
/* 1803efb78: movaps xmm0, xmm6 */
L_1803efb78_0:;
L_1803efb78_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803efb78_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803efb78_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803efb78_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803efb78_5:;
/* 1803efb7b: divss xmm0, xmm1 */
L_1803efb7b_0:;
L_1803efb7b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803efb7b_2:;
/* 1803efb7f: call 0x180609b0e */
L_1803efb7f_0:;
L_1803efb7f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efb7f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efb84)));
L_1803efb7f_3:;
return (uint64_t)UINT64_C(0x180609b0e);
L_1803efb7f_4:;
return UINT64_C(0x1803efb84);
}
uint64_t b_1803efb60(CPU*s){
/* 1803efb60: mov eax, dword ptr [rsi + 0x3c] */
L_1803efb60_0:;
L_1803efb60_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803efb60_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803efb60_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803efb60_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803efb60_5:;
/* 1803efb63: movd xmm6, r12d */
L_1803efb63_0:;
L_1803efb63_1:;
wr(s->r,4992,16,rd(s->r,160,4));
L_1803efb63_2:;
/* 1803efb68: sar eax, 1 */
L_1803efb68_0:;
L_1803efb68_1:;
wr(s->u,18,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803efb68_2:;
wr(s->r,512,1,(rd(s->u,18,4)!=((U)UINT64_C(0x0))));
L_1803efb68_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efb68_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803efb68_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803efb68_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efb68_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803efb68_8:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803efb68_9:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803efb68_10:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803efb68_11:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803efb68_12:;
/* 1803efb6a: movd xmm1, eax */
L_1803efb6a_0:;
L_1803efb6a_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803efb6a_2:;
/* 1803efb6e: cvtdq2ps xmm6, xmm6 */
L_1803efb6e_0:;
L_1803efb6e_1:;
wr(s->r,4992,4,fb((double)sx(rd(s->r,4992,4),4),4));
L_1803efb6e_2:;
wr(s->r,4996,4,fb((double)sx(rd(s->r,4996,4),4),4));
L_1803efb6e_3:;
wr(s->r,5000,4,fb((double)sx(rd(s->r,5000,4),4),4));
L_1803efb6e_4:;
wr(s->r,5004,4,fb((double)sx(rd(s->r,5004,4),4),4));
L_1803efb6e_5:;
/* 1803efb71: mulss xmm6, xmm7 */
L_1803efb71_0:;
L_1803efb71_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803efb71_2:;
/* 1803efb75: cvtdq2ps xmm1, xmm1 */
L_1803efb75_0:;
L_1803efb75_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803efb75_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803efb75_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803efb75_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803efb75_5:;
/* 1803efb78: movaps xmm0, xmm6 */
L_1803efb78_0:;
L_1803efb78_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803efb78_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803efb78_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803efb78_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803efb78_5:;
/* 1803efb7b: divss xmm0, xmm1 */
L_1803efb7b_0:;
L_1803efb7b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803efb7b_2:;
/* 1803efb7f: call 0x180609b0e */
L_1803efb7f_0:;
L_1803efb7f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efb7f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efb84)));
L_1803efb7f_3:;
return (uint64_t)UINT64_C(0x180609b0e);
L_1803efb7f_4:;
return UINT64_C(0x1803efb84);
}
uint64_t b_1803efb84(CPU*s){
/* 1803efb84: mov rax, qword ptr [rsi + 0x50] */
L_1803efb84_0:;
L_1803efb84_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x50))));
L_1803efb84_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efb84_3:;
wr(s->r,0,8,rd(s->u,32,8));
L_1803efb84_4:;
/* 1803efb88: movss dword ptr [rax + rbx*4], xmm0 */
L_1803efb88_0:;
L_1803efb88_1:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x4))));
L_1803efb88_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803efb88_3:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803efb88_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803efb88_5:;
/* 1803efb8d: mov eax, dword ptr [rsi + 0x3c] */
L_1803efb8d_0:;
L_1803efb8d_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803efb8d_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803efb8d_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803efb8d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803efb8d_5:;
/* 1803efb90: sar eax, 1 */
L_1803efb90_0:;
L_1803efb90_1:;
wr(s->u,46,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803efb90_2:;
wr(s->r,512,1,(rd(s->u,46,4)!=((U)UINT64_C(0x0))));
L_1803efb90_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efb90_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803efb90_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803efb90_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efb90_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803efb90_8:;
wr(s->u,40,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803efb90_9:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803efb90_10:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803efb90_11:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803efb90_12:;
/* 1803efb92: movd xmm0, eax */
L_1803efb92_0:;
L_1803efb92_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803efb92_2:;
/* 1803efb96: cvtdq2ps xmm0, xmm0 */
L_1803efb96_0:;
L_1803efb96_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803efb96_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803efb96_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803efb96_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803efb96_5:;
/* 1803efb99: divss xmm6, xmm0 */
L_1803efb99_0:;
L_1803efb99_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)/fv(rd(s->r,4608,4),4),4));
L_1803efb99_2:;
/* 1803efb9d: movaps xmm0, xmm6 */
L_1803efb9d_0:;
L_1803efb9d_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803efb9d_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803efb9d_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803efb9d_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803efb9d_5:;
/* 1803efba0: call 0x180609b08 */
L_1803efba0_0:;
L_1803efba0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efba0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efba5)));
L_1803efba0_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803efba0_4:;
return UINT64_C(0x1803efba5);
}
uint64_t b_1803efba5(CPU*s){
/* 1803efba5: mov rax, qword ptr [rsi + 0x58] */
L_1803efba5_0:;
L_1803efba5_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x58))));
L_1803efba5_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efba5_3:;
wr(s->r,0,8,rd(s->u,32,8));
L_1803efba5_4:;
/* 1803efba9: movd xmm6, r13d */
L_1803efba9_0:;
L_1803efba9_1:;
wr(s->r,4992,16,rd(s->r,168,4));
L_1803efba9_2:;
/* 1803efbae: movss dword ptr [rax + rbx*4], xmm0 */
L_1803efbae_0:;
L_1803efbae_1:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x4))));
L_1803efbae_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803efbae_3:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803efbae_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803efbae_5:;
/* 1803efbb3: mov eax, dword ptr [rsi + 0x3c] */
L_1803efbb3_0:;
L_1803efbb3_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803efbb3_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803efbb3_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803efbb3_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803efbb3_5:;
/* 1803efbb6: sar eax, 1 */
L_1803efbb6_0:;
L_1803efbb6_1:;
wr(s->u,46,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803efbb6_2:;
wr(s->r,512,1,(rd(s->u,46,4)!=((U)UINT64_C(0x0))));
L_1803efbb6_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efbb6_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803efbb6_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803efbb6_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efbb6_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803efbb6_8:;
wr(s->u,40,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803efbb6_9:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803efbb6_10:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803efbb6_11:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803efbb6_12:;
/* 1803efbb8: cvtdq2ps xmm6, xmm6 */
L_1803efbb8_0:;
L_1803efbb8_1:;
wr(s->r,4992,4,fb((double)sx(rd(s->r,4992,4),4),4));
L_1803efbb8_2:;
wr(s->r,4996,4,fb((double)sx(rd(s->r,4996,4),4),4));
L_1803efbb8_3:;
wr(s->r,5000,4,fb((double)sx(rd(s->r,5000,4),4),4));
L_1803efbb8_4:;
wr(s->r,5004,4,fb((double)sx(rd(s->r,5004,4),4),4));
L_1803efbb8_5:;
/* 1803efbbb: mulss xmm6, xmm7 */
L_1803efbbb_0:;
L_1803efbbb_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803efbbb_2:;
/* 1803efbbf: movd xmm1, eax */
L_1803efbbf_0:;
L_1803efbbf_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803efbbf_2:;
/* 1803efbc3: movaps xmm0, xmm6 */
L_1803efbc3_0:;
L_1803efbc3_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803efbc3_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803efbc3_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803efbc3_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803efbc3_5:;
/* 1803efbc6: cvtdq2ps xmm1, xmm1 */
L_1803efbc6_0:;
L_1803efbc6_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803efbc6_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803efbc6_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803efbc6_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803efbc6_5:;
/* 1803efbc9: divss xmm0, xmm1 */
L_1803efbc9_0:;
L_1803efbc9_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803efbc9_2:;
/* 1803efbcd: call 0x180609b0e */
L_1803efbcd_0:;
L_1803efbcd_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efbcd_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efbd2)));
L_1803efbcd_3:;
return (uint64_t)UINT64_C(0x180609b0e);
L_1803efbcd_4:;
return UINT64_C(0x1803efbd2);
}
uint64_t b_1803efbd2(CPU*s){
/* 1803efbd2: mov rax, qword ptr [rsi + 0x50] */
L_1803efbd2_0:;
L_1803efbd2_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x50))));
L_1803efbd2_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efbd2_3:;
wr(s->r,0,8,rd(s->u,32,8));
L_1803efbd2_4:;
/* 1803efbd6: movss dword ptr [rdi + rax], xmm0 */
L_1803efbd6_0:;
L_1803efbd6_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803efbd6_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803efbd6_3:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803efbd6_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803efbd6_5:;
/* 1803efbdb: mov eax, dword ptr [rsi + 0x3c] */
L_1803efbdb_0:;
L_1803efbdb_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803efbdb_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803efbdb_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803efbdb_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803efbdb_5:;
/* 1803efbde: sar eax, 1 */
L_1803efbde_0:;
L_1803efbde_1:;
wr(s->u,46,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803efbde_2:;
wr(s->r,512,1,(rd(s->u,46,4)!=((U)UINT64_C(0x0))));
L_1803efbde_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efbde_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803efbde_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803efbde_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efbde_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803efbde_8:;
wr(s->u,40,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803efbde_9:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803efbde_10:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803efbde_11:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803efbde_12:;
/* 1803efbe0: movd xmm1, eax */
L_1803efbe0_0:;
L_1803efbe0_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803efbe0_2:;
/* 1803efbe4: cvtdq2ps xmm1, xmm1 */
L_1803efbe4_0:;
L_1803efbe4_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803efbe4_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803efbe4_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803efbe4_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803efbe4_5:;
/* 1803efbe7: divss xmm6, xmm1 */
L_1803efbe7_0:;
L_1803efbe7_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803efbe7_2:;
/* 1803efbeb: movaps xmm0, xmm6 */
L_1803efbeb_0:;
L_1803efbeb_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803efbeb_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803efbeb_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803efbeb_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803efbeb_5:;
/* 1803efbee: call 0x180609b08 */
L_1803efbee_0:;
L_1803efbee_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efbee_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efbf3)));
L_1803efbee_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803efbee_4:;
return UINT64_C(0x1803efbf3);
}
uint64_t b_1803efbf3(CPU*s){
/* 1803efbf3: mov rax, qword ptr [rsi + 0x58] */
L_1803efbf3_0:;
L_1803efbf3_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x58))));
L_1803efbf3_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efbf3_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803efbf3_4:;
/* 1803efbf7: inc rbx */
L_1803efbf7_0:;
L_1803efbf7_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x1)),8,0));
L_1803efbf7_2:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x1))));
L_1803efbf7_3:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efbf7_4:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803efbf7_5:;
wr(s->u,45,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803efbf7_6:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803efbf7_7:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803efbf7_8:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803efbf7_9:;
/* 1803efbfa: add rdi, 4 */
L_1803efbfa_0:;
L_1803efbfa_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803efbfa_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x4)),8,0));
L_1803efbfa_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x4))));
L_1803efbfa_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efbfa_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803efbfa_6:;
wr(s->u,45,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803efbfa_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803efbfa_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803efbfa_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803efbfa_10:;
/* 1803efbfe: inc r12d */
L_1803efbfe_0:;
L_1803efbfe_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),((U)UINT64_C(0x1)),4,0));
L_1803efbfe_2:;
wr(s->r,160,4,(rd(s->r,160,4)+((U)UINT64_C(0x1))));
L_1803efbfe_3:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803efbfe_4:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efbfe_5:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803efbfe_6:;
wr(s->u,45,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803efbfe_7:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803efbfe_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803efbfe_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803efbfe_10:;
/* 1803efc01: add r13d, 3 */
L_1803efc01_0:;
L_1803efc01_1:;
wr(s->r,512,1,(((rd(s->r,168,4)+((U)UINT64_C(0x3)))&(((U)1<<32)-1))<rd(s->r,168,4)));
L_1803efc01_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,4),((U)UINT64_C(0x3)),4,0));
L_1803efc01_3:;
wr(s->r,168,4,(rd(s->r,168,4)+((U)UINT64_C(0x3))));
L_1803efc01_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803efc01_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efc01_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803efc01_7:;
wr(s->u,45,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803efc01_8:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803efc01_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803efc01_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803efc01_11:;
/* 1803efc05: movss dword ptr [rdi + rax - 4], xmm0 */
L_1803efc05_0:;
L_1803efc05_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,56,8)));
L_1803efc05_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803efc05_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803efc05_4:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803efc05_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803efc05_6:;
/* 1803efc0b: cmp rbx, r14 */
L_1803efc0b_0:;
L_1803efc0b_1:;
wr(s->u,55,8,rd(s->r,176,8));
L_1803efc0b_2:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->u,55,8)));
L_1803efc0b_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->u,55,8),8,1));
L_1803efc0b_4:;
wr(s->u,63,8,(rd(s->r,24,8)-rd(s->u,55,8)));
L_1803efc0b_5:;
wr(s->r,519,1,(sx(rd(s->u,63,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efc0b_6:;
wr(s->r,518,1,(rd(s->u,63,8)==((U)UINT64_C(0x0))));
L_1803efc0b_7:;
wr(s->u,45,8,(rd(s->u,63,8)&((U)UINT64_C(0xff))));
L_1803efc0b_8:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803efc0b_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803efc0b_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803efc0b_11:;
/* 1803efc0e: jl 0x1803efb60 */
L_1803efc0e_0:;
L_1803efc0e_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803efc0e_2:;
if(rd(s->u,44,1)){return UINT64_C(0x1803efb60);}
L_1803efc0e_3:;
return UINT64_C(0x1803efc14);
}
uint64_t b_1803efc14(CPU*s){
/* 1803efc14: mov r13, qword ptr [rsp + 0x80] */
L_1803efc14_0:;
L_1803efc14_1:;
wr(s->u,13,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803efc14_2:;
wr(s->u,25,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803efc14_3:;
wr(s->r,168,8,rd(s->u,25,8));
L_1803efc14_4:;
/* 1803efc1c: movsxd r8, dword ptr [rsi + 0x40] */
L_1803efc1c_0:;
L_1803efc1c_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x40))));
L_1803efc1c_2:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803efc1c_3:;
wr(s->r,128,8,(U)sx(rd(s->u,21,4),4));
L_1803efc1c_4:;
/* 1803efc20: mov rcx, qword ptr [rsi + 0x60] */
L_1803efc20_0:;
L_1803efc20_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x60))));
L_1803efc20_2:;
wr(s->u,25,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803efc20_3:;
wr(s->r,8,8,rd(s->u,25,8));
L_1803efc20_4:;
/* 1803efc24: xor edx, edx */
L_1803efc24_0:;
L_1803efc24_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803efc24_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efc24_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803efc24_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803efc24_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efc24_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803efc24_7:;
wr(s->u,33,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803efc24_8:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803efc24_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803efc24_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803efc24_11:;
/* 1803efc26: shl r8, 2 */
L_1803efc26_0:;
L_1803efc26_1:;
wr(s->u,79,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803efc26_2:;
wr(s->u,83,8,rd(s->r,128,8));
L_1803efc26_3:;
wr(s->r,128,8,((rd(s->u,79,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,79,4))));
L_1803efc26_4:;
wr(s->u,62,1,(rd(s->u,79,4)==((U)UINT64_C(0x0))));
L_1803efc26_5:;
wr(s->u,63,4,(rd(s->u,79,4)-((U)UINT64_C(0x1))));
L_1803efc26_6:;
wr(s->u,67,8,((rd(s->u,63,4)>=64)?0:(rd(s->u,83,8)<<rd(s->u,63,4))));
L_1803efc26_7:;
wr(s->u,75,1,(sx(rd(s->u,67,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efc26_8:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803efc26_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803efc26_10:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803efc26_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803efc26_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,75,1)));
L_1803efc26_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803efc26_14:;
wr(s->u,76,1,(rd(s->u,79,4)==((U)UINT64_C(0x1))));
L_1803efc26_15:;
wr(s->u,77,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efc26_16:;
wr(s->u,78,1,(rd(s->r,512,1)^rd(s->u,77,1)));
L_1803efc26_17:;
wr(s->u,0,1,rd(s->u,76,1));
L_1803efc26_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,78,1)));
L_1803efc26_19:;
wr(s->u,2,1,(!rd(s->u,76,1)));
L_1803efc26_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803efc26_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803efc26_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803efc26_23:;
wr(s->u,39,1,(rd(s->u,79,4)!=((U)UINT64_C(0x0))));
L_1803efc26_24:;
wr(s->u,40,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efc26_25:;
wr(s->u,41,1,(!rd(s->u,39,1)));
L_1803efc26_26:;
wr(s->u,42,1,(rd(s->u,41,1)&rd(s->r,519,1)));
L_1803efc26_27:;
wr(s->u,43,1,(rd(s->u,39,1)&rd(s->u,40,1)));
L_1803efc26_28:;
wr(s->r,519,1,(rd(s->u,42,1)|rd(s->u,43,1)));
L_1803efc26_29:;
wr(s->u,44,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803efc26_30:;
wr(s->u,45,1,(!rd(s->u,39,1)));
L_1803efc26_31:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,518,1)));
L_1803efc26_32:;
wr(s->u,47,1,(rd(s->u,39,1)&rd(s->u,44,1)));
L_1803efc26_33:;
wr(s->r,518,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803efc26_34:;
wr(s->u,48,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803efc26_35:;
wr(s->u,56,1,pop(rd(s->u,48,8),8));
L_1803efc26_36:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803efc26_37:;
wr(s->u,58,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803efc26_38:;
wr(s->u,59,1,(!rd(s->u,39,1)));
L_1803efc26_39:;
wr(s->u,60,1,(rd(s->u,59,1)&rd(s->r,514,1)));
L_1803efc26_40:;
wr(s->u,61,1,(rd(s->u,39,1)&rd(s->u,58,1)));
L_1803efc26_41:;
wr(s->r,514,1,(rd(s->u,60,1)|rd(s->u,61,1)));
L_1803efc26_42:;
/* 1803efc2a: call 0x18000d6a6 */
L_1803efc2a_0:;
L_1803efc2a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efc2a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efc2f)));
L_1803efc2a_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803efc2a_4:;
return UINT64_C(0x1803efc2f);
}
uint64_t b_1803efc1c(CPU*s){
/* 1803efc1c: movsxd r8, dword ptr [rsi + 0x40] */
L_1803efc1c_0:;
L_1803efc1c_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x40))));
L_1803efc1c_2:;
wr(s->u,13,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803efc1c_3:;
wr(s->r,128,8,(U)sx(rd(s->u,13,4),4));
L_1803efc1c_4:;
/* 1803efc20: mov rcx, qword ptr [rsi + 0x60] */
L_1803efc20_0:;
L_1803efc20_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x60))));
L_1803efc20_2:;
wr(s->u,17,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803efc20_3:;
wr(s->r,8,8,rd(s->u,17,8));
L_1803efc20_4:;
/* 1803efc24: xor edx, edx */
L_1803efc24_0:;
L_1803efc24_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803efc24_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efc24_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803efc24_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803efc24_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efc24_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803efc24_7:;
wr(s->u,25,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803efc24_8:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803efc24_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803efc24_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803efc24_11:;
/* 1803efc26: shl r8, 2 */
L_1803efc26_0:;
L_1803efc26_1:;
wr(s->u,71,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803efc26_2:;
wr(s->u,75,8,rd(s->r,128,8));
L_1803efc26_3:;
wr(s->r,128,8,((rd(s->u,71,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,71,4))));
L_1803efc26_4:;
wr(s->u,54,1,(rd(s->u,71,4)==((U)UINT64_C(0x0))));
L_1803efc26_5:;
wr(s->u,55,4,(rd(s->u,71,4)-((U)UINT64_C(0x1))));
L_1803efc26_6:;
wr(s->u,59,8,((rd(s->u,55,4)>=64)?0:(rd(s->u,75,8)<<rd(s->u,55,4))));
L_1803efc26_7:;
wr(s->u,67,1,(sx(rd(s->u,59,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efc26_8:;
wr(s->u,0,1,rd(s->u,54,1));
L_1803efc26_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803efc26_10:;
wr(s->u,2,1,(!rd(s->u,54,1)));
L_1803efc26_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803efc26_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,67,1)));
L_1803efc26_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803efc26_14:;
wr(s->u,68,1,(rd(s->u,71,4)==((U)UINT64_C(0x1))));
L_1803efc26_15:;
wr(s->u,69,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efc26_16:;
wr(s->u,70,1,(rd(s->r,512,1)^rd(s->u,69,1)));
L_1803efc26_17:;
wr(s->u,0,1,rd(s->u,68,1));
L_1803efc26_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,70,1)));
L_1803efc26_19:;
wr(s->u,2,1,(!rd(s->u,68,1)));
L_1803efc26_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803efc26_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803efc26_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803efc26_23:;
wr(s->u,31,1,(rd(s->u,71,4)!=((U)UINT64_C(0x0))));
L_1803efc26_24:;
wr(s->u,32,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efc26_25:;
wr(s->u,33,1,(!rd(s->u,31,1)));
L_1803efc26_26:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,519,1)));
L_1803efc26_27:;
wr(s->u,35,1,(rd(s->u,31,1)&rd(s->u,32,1)));
L_1803efc26_28:;
wr(s->r,519,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803efc26_29:;
wr(s->u,36,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803efc26_30:;
wr(s->u,37,1,(!rd(s->u,31,1)));
L_1803efc26_31:;
wr(s->u,38,1,(rd(s->u,37,1)&rd(s->r,518,1)));
L_1803efc26_32:;
wr(s->u,39,1,(rd(s->u,31,1)&rd(s->u,36,1)));
L_1803efc26_33:;
wr(s->r,518,1,(rd(s->u,38,1)|rd(s->u,39,1)));
L_1803efc26_34:;
wr(s->u,40,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803efc26_35:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803efc26_36:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803efc26_37:;
wr(s->u,50,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803efc26_38:;
wr(s->u,51,1,(!rd(s->u,31,1)));
L_1803efc26_39:;
wr(s->u,52,1,(rd(s->u,51,1)&rd(s->r,514,1)));
L_1803efc26_40:;
wr(s->u,53,1,(rd(s->u,31,1)&rd(s->u,50,1)));
L_1803efc26_41:;
wr(s->r,514,1,(rd(s->u,52,1)|rd(s->u,53,1)));
L_1803efc26_42:;
/* 1803efc2a: call 0x18000d6a6 */
L_1803efc2a_0:;
L_1803efc2a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efc2a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efc2f)));
L_1803efc2a_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803efc2a_4:;
return UINT64_C(0x1803efc2f);
}
uint64_t b_1803efc2f(CPU*s){
/* 1803efc2f: mov edx, dword ptr [rsi + 0x3c] */
L_1803efc2f_0:;
L_1803efc2f_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803efc2f_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803efc2f_3:;
wr(s->r,16,4,rd(s->u,16,4));
L_1803efc2f_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803efc2f_5:;
/* 1803efc32: lea rcx, [rsi + 0xc0] */
L_1803efc32_0:;
L_1803efc32_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xc0))));
L_1803efc32_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803efc32_3:;
/* 1803efc39: xor r8d, r8d */
L_1803efc39_0:;
L_1803efc39_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803efc39_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efc39_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1803efc39_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803efc39_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efc39_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803efc39_7:;
wr(s->u,20,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803efc39_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803efc39_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803efc39_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803efc39_11:;
/* 1803efc3c: call 0x1803f20b0 */
L_1803efc3c_0:;
L_1803efc3c_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efc3c_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efc41)));
L_1803efc3c_3:;
return (uint64_t)UINT64_C(0x1803f20b0);
L_1803efc3c_4:;
return UINT64_C(0x1803efc41);
}
uint64_t b_1803efc41(CPU*s){
/* 1803efc41: mov edx, dword ptr [rsi + 0x3c] */
L_1803efc41_0:;
L_1803efc41_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803efc41_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803efc41_3:;
wr(s->r,16,4,rd(s->u,16,4));
L_1803efc41_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803efc41_5:;
/* 1803efc44: lea rcx, [rsi + 0xc8] */
L_1803efc44_0:;
L_1803efc44_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xc8))));
L_1803efc44_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803efc44_3:;
/* 1803efc4b: call 0x1803edaf0 */
L_1803efc4b_0:;
L_1803efc4b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efc4b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efc50)));
L_1803efc4b_3:;
return (uint64_t)UINT64_C(0x1803edaf0);
L_1803efc4b_4:;
return UINT64_C(0x1803efc50);
}
uint64_t b_1803efc50(CPU*s){
/* 1803efc50: cmp dword ptr [rsi + 0x40], ebp */
L_1803efc50_0:;
L_1803efc50_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x40))));
L_1803efc50_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803efc50_3:;
wr(s->u,44,4,rd(s->u,24,4));
L_1803efc50_4:;
wr(s->r,512,1,(rd(s->u,44,4)<rd(s->r,40,4)));
L_1803efc50_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,44,4),rd(s->r,40,4),4,1));
L_1803efc50_6:;
wr(s->u,48,4,(rd(s->u,44,4)-rd(s->r,40,4)));
L_1803efc50_7:;
wr(s->r,519,1,(sx(rd(s->u,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efc50_8:;
wr(s->r,518,1,(rd(s->u,48,4)==((U)UINT64_C(0x0))));
L_1803efc50_9:;
wr(s->u,38,4,(rd(s->u,48,4)&((U)UINT64_C(0xff))));
L_1803efc50_10:;
wr(s->u,42,1,pop(rd(s->u,38,4),4));
L_1803efc50_11:;
wr(s->u,43,1,(rd(s->u,42,1)&((U)UINT64_C(0x1))));
L_1803efc50_12:;
wr(s->r,514,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803efc50_13:;
/* 1803efc53: mov r14, qword ptr [rsp + 0x88] */
L_1803efc53_0:;
L_1803efc53_1:;
wr(s->u,16,8,(((U)UINT64_C(0x88))+rd(s->r,32,8)));
L_1803efc53_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803efc53_3:;
wr(s->r,176,8,rd(s->u,28,8));
L_1803efc53_4:;
/* 1803efc5b: mov r12, qword ptr [rsp + 0x78] */
L_1803efc5b_0:;
L_1803efc5b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803efc5b_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803efc5b_3:;
wr(s->r,160,8,rd(s->u,28,8));
L_1803efc5b_4:;
/* 1803efc60: mov rdi, qword ptr [rsp + 0x70] */
L_1803efc60_0:;
L_1803efc60_1:;
wr(s->u,8,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803efc60_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803efc60_3:;
wr(s->r,56,8,rd(s->u,28,8));
L_1803efc60_4:;
/* 1803efc65: jle 0x1803efce3 */
L_1803efc65_0:;
L_1803efc65_1:;
wr(s->u,36,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803efc65_2:;
wr(s->u,37,1,((rd(s->r,518,1)!=0)||(rd(s->u,36,1)!=0)));
L_1803efc65_3:;
if(rd(s->u,37,1)){return UINT64_C(0x1803efce3);}
L_1803efc65_4:;
return UINT64_C(0x1803efc6b);
}
uint64_t b_1803efc6b(CPU*s){
/* 1803efc6b: movss xmm7, dword ptr [rip + 0x26b8cd] */
L_1803efc6b_0:;
L_1803efc6b_1:;
wr(s->r,5056,4,mr(UINT64_C(0x18065b540),4));
L_1803efc6b_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803efc6b_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803efc6b_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803efc6b_5:;
/* 1803efc73: movsd xmm6, qword ptr [rip + 0x25cefd] */
L_1803efc73_0:;
L_1803efc73_1:;
wr(s->r,4992,8,mr(UINT64_C(0x18064cb78),8));
L_1803efc73_2:;
wr(s->r,5000,8,((U)UINT64_C(0x0)));
L_1803efc73_3:;
/* 1803efc7b: movaps xmmword ptr [rsp + 0x20], xmm8 */
L_1803efc7b_0:;
L_1803efc7b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803efc7b_2:;
wr(s->u,16,16,rd(s->r,5120,16));
L_1803efc7b_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,16,16));
L_1803efc7b_4:;
/* 1803efc81: mov rbx, rbp */
L_1803efc81_0:;
L_1803efc81_1:;
wr(s->r,24,8,rd(s->r,40,8));
L_1803efc81_2:;
/* 1803efc84: movsd xmm8, qword ptr [rip + 0x260433] */
L_1803efc84_0:;
L_1803efc84_1:;
wr(s->r,5120,8,mr(UINT64_C(0x1806500c0),8));
L_1803efc84_2:;
wr(s->r,5128,8,((U)UINT64_C(0x0)));
L_1803efc84_3:;
/* 1803efc8d: nop dword ptr [rax] */
L_1803efc8d_0:;
L_1803efc8d_1:;
/* 1803efc90: movd xmm1, dword ptr [rsi + 0x40] */
L_1803efc90_0:;
L_1803efc90_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x40))));
L_1803efc90_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803efc90_3:;
wr(s->r,4672,16,rd(s->u,32,4));
L_1803efc90_4:;
/* 1803efc95: movd xmm0, ebp */
L_1803efc95_0:;
L_1803efc95_1:;
wr(s->r,4608,16,rd(s->r,40,4));
L_1803efc95_2:;
/* 1803efc99: cvtdq2pd xmm1, xmm1 */
L_1803efc99_0:;
L_1803efc99_1:;
wr(s->u,36,8,rd(s->r,4672,8));
L_1803efc99_2:;
wr(s->r,4672,8,fb((double)sx(rd(s->u,36,4),4),8));
L_1803efc99_3:;
wr(s->r,4680,8,fb((double)sx(rd(s->u,40,4),4),8));
L_1803efc99_4:;
/* 1803efc9d: cvtdq2ps xmm0, xmm0 */
L_1803efc9d_0:;
L_1803efc9d_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803efc9d_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803efc9d_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803efc9d_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803efc9d_5:;
/* 1803efca0: subsd xmm1, xmm6 */
L_1803efca0_0:;
L_1803efca0_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)-fv(rd(s->r,4992,8),8),8));
L_1803efca0_2:;
/* 1803efca4: mulss xmm0, xmm7 */
L_1803efca4_0:;
L_1803efca4_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803efca4_2:;
/* 1803efca8: unpcklps xmm0, xmm0 */
L_1803efca8_0:;
L_1803efca8_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803efca8_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803efca8_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803efca8_4:;
/* 1803efcab: cvtps2pd xmm0, xmm0 */
L_1803efcab_0:;
L_1803efcab_1:;
wr(s->u,44,8,rd(s->r,4608,8));
L_1803efcab_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,44,4),4),8));
L_1803efcab_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,48,4),4),8));
L_1803efcab_4:;
/* 1803efcae: divsd xmm0, xmm1 */
L_1803efcae_0:;
L_1803efcae_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)/fv(rd(s->r,4672,8),8),8));
L_1803efcae_2:;
/* 1803efcb2: call 0x180609aa2 */
L_1803efcb2_0:;
L_1803efcb2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efcb2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efcb7)));
L_1803efcb2_3:;
return (uint64_t)UINT64_C(0x180609aa2);
L_1803efcb2_4:;
return UINT64_C(0x1803efcb7);
}
uint64_t b_1803efc7b(CPU*s){
/* 1803efc7b: movaps xmmword ptr [rsp + 0x20], xmm8 */
L_1803efc7b_0:;
L_1803efc7b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803efc7b_2:;
wr(s->u,16,16,rd(s->r,5120,16));
L_1803efc7b_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,16,16));
L_1803efc7b_4:;
/* 1803efc81: mov rbx, rbp */
L_1803efc81_0:;
L_1803efc81_1:;
wr(s->r,24,8,rd(s->r,40,8));
L_1803efc81_2:;
/* 1803efc84: movsd xmm8, qword ptr [rip + 0x260433] */
L_1803efc84_0:;
L_1803efc84_1:;
wr(s->r,5120,8,mr(UINT64_C(0x1806500c0),8));
L_1803efc84_2:;
wr(s->r,5128,8,((U)UINT64_C(0x0)));
L_1803efc84_3:;
/* 1803efc8d: nop dword ptr [rax] */
L_1803efc8d_0:;
L_1803efc8d_1:;
/* 1803efc90: movd xmm1, dword ptr [rsi + 0x40] */
L_1803efc90_0:;
L_1803efc90_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x40))));
L_1803efc90_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803efc90_3:;
wr(s->r,4672,16,rd(s->u,32,4));
L_1803efc90_4:;
/* 1803efc95: movd xmm0, ebp */
L_1803efc95_0:;
L_1803efc95_1:;
wr(s->r,4608,16,rd(s->r,40,4));
L_1803efc95_2:;
/* 1803efc99: cvtdq2pd xmm1, xmm1 */
L_1803efc99_0:;
L_1803efc99_1:;
wr(s->u,36,8,rd(s->r,4672,8));
L_1803efc99_2:;
wr(s->r,4672,8,fb((double)sx(rd(s->u,36,4),4),8));
L_1803efc99_3:;
wr(s->r,4680,8,fb((double)sx(rd(s->u,40,4),4),8));
L_1803efc99_4:;
/* 1803efc9d: cvtdq2ps xmm0, xmm0 */
L_1803efc9d_0:;
L_1803efc9d_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803efc9d_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803efc9d_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803efc9d_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803efc9d_5:;
/* 1803efca0: subsd xmm1, xmm6 */
L_1803efca0_0:;
L_1803efca0_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)-fv(rd(s->r,4992,8),8),8));
L_1803efca0_2:;
/* 1803efca4: mulss xmm0, xmm7 */
L_1803efca4_0:;
L_1803efca4_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803efca4_2:;
/* 1803efca8: unpcklps xmm0, xmm0 */
L_1803efca8_0:;
L_1803efca8_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803efca8_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803efca8_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803efca8_4:;
/* 1803efcab: cvtps2pd xmm0, xmm0 */
L_1803efcab_0:;
L_1803efcab_1:;
wr(s->u,44,8,rd(s->r,4608,8));
L_1803efcab_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,44,4),4),8));
L_1803efcab_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,48,4),4),8));
L_1803efcab_4:;
/* 1803efcae: divsd xmm0, xmm1 */
L_1803efcae_0:;
L_1803efcae_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)/fv(rd(s->r,4672,8),8),8));
L_1803efcae_2:;
/* 1803efcb2: call 0x180609aa2 */
L_1803efcb2_0:;
L_1803efcb2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efcb2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efcb7)));
L_1803efcb2_3:;
return (uint64_t)UINT64_C(0x180609aa2);
L_1803efcb2_4:;
return UINT64_C(0x1803efcb7);
}
uint64_t b_1803efc90(CPU*s){
/* 1803efc90: movd xmm1, dword ptr [rsi + 0x40] */
L_1803efc90_0:;
L_1803efc90_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x40))));
L_1803efc90_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803efc90_3:;
wr(s->r,4672,16,rd(s->u,8,4));
L_1803efc90_4:;
/* 1803efc95: movd xmm0, ebp */
L_1803efc95_0:;
L_1803efc95_1:;
wr(s->r,4608,16,rd(s->r,40,4));
L_1803efc95_2:;
/* 1803efc99: cvtdq2pd xmm1, xmm1 */
L_1803efc99_0:;
L_1803efc99_1:;
wr(s->u,12,8,rd(s->r,4672,8));
L_1803efc99_2:;
wr(s->r,4672,8,fb((double)sx(rd(s->u,12,4),4),8));
L_1803efc99_3:;
wr(s->r,4680,8,fb((double)sx(rd(s->u,16,4),4),8));
L_1803efc99_4:;
/* 1803efc9d: cvtdq2ps xmm0, xmm0 */
L_1803efc9d_0:;
L_1803efc9d_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803efc9d_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803efc9d_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803efc9d_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803efc9d_5:;
/* 1803efca0: subsd xmm1, xmm6 */
L_1803efca0_0:;
L_1803efca0_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)-fv(rd(s->r,4992,8),8),8));
L_1803efca0_2:;
/* 1803efca4: mulss xmm0, xmm7 */
L_1803efca4_0:;
L_1803efca4_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803efca4_2:;
/* 1803efca8: unpcklps xmm0, xmm0 */
L_1803efca8_0:;
L_1803efca8_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803efca8_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803efca8_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803efca8_4:;
/* 1803efcab: cvtps2pd xmm0, xmm0 */
L_1803efcab_0:;
L_1803efcab_1:;
wr(s->u,20,8,rd(s->r,4608,8));
L_1803efcab_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,20,4),4),8));
L_1803efcab_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,24,4),4),8));
L_1803efcab_4:;
/* 1803efcae: divsd xmm0, xmm1 */
L_1803efcae_0:;
L_1803efcae_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)/fv(rd(s->r,4672,8),8),8));
L_1803efcae_2:;
/* 1803efcb2: call 0x180609aa2 */
L_1803efcb2_0:;
L_1803efcb2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efcb2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efcb7)));
L_1803efcb2_3:;
return (uint64_t)UINT64_C(0x180609aa2);
L_1803efcb2_4:;
return UINT64_C(0x1803efcb7);
}
uint64_t b_1803efcb7(CPU*s){
/* 1803efcb7: mov rax, qword ptr [rsi + 0x60] */
L_1803efcb7_0:;
L_1803efcb7_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x60))));
L_1803efcb7_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efcb7_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803efcb7_4:;
/* 1803efcbb: movapd xmm1, xmm6 */
L_1803efcbb_0:;
L_1803efcbb_1:;
wr(s->r,4672,8,rd(s->r,4992,8));
L_1803efcbb_2:;
wr(s->r,4680,8,rd(s->r,5000,8));
L_1803efcbb_3:;
/* 1803efcbf: inc ebp */
L_1803efcbf_0:;
L_1803efcbf_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),((U)UINT64_C(0x1)),4,0));
L_1803efcbf_2:;
wr(s->r,40,4,(rd(s->r,40,4)+((U)UINT64_C(0x1))));
L_1803efcbf_3:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803efcbf_4:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efcbf_5:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803efcbf_6:;
wr(s->u,45,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803efcbf_7:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803efcbf_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803efcbf_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803efcbf_10:;
/* 1803efcc1: add rbx, 4 */
L_1803efcc1_0:;
L_1803efcc1_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803efcc1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x4)),8,0));
L_1803efcc1_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x4))));
L_1803efcc1_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efcc1_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803efcc1_6:;
wr(s->u,45,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803efcc1_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803efcc1_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803efcc1_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803efcc1_10:;
/* 1803efcc5: subsd xmm1, xmm0 */
L_1803efcc5_0:;
L_1803efcc5_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803efcc5_2:;
/* 1803efcc9: mulsd xmm1, xmm8 */
L_1803efcc9_0:;
L_1803efcc9_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,5120,8),8),8));
L_1803efcc9_2:;
/* 1803efcce: cvtsd2ss xmm0, xmm1 */
L_1803efcce_0:;
L_1803efcce_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4672,8),8),4));
L_1803efcce_2:;
/* 1803efcd2: movss dword ptr [rbx + rax - 4], xmm0 */
L_1803efcd2_0:;
L_1803efcd2_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,24,8)));
L_1803efcd2_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803efcd2_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803efcd2_4:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803efcd2_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803efcd2_6:;
/* 1803efcd8: cmp ebp, dword ptr [rsi + 0x40] */
L_1803efcd8_0:;
L_1803efcd8_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x40))));
L_1803efcd8_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803efcd8_3:;
wr(s->u,55,4,rd(s->u,32,4));
L_1803efcd8_4:;
wr(s->r,512,1,(rd(s->r,40,4)<rd(s->u,55,4)));
L_1803efcd8_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->u,55,4),4,1));
L_1803efcd8_6:;
wr(s->u,59,4,(rd(s->r,40,4)-rd(s->u,55,4)));
L_1803efcd8_7:;
wr(s->r,519,1,(sx(rd(s->u,59,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efcd8_8:;
wr(s->r,518,1,(rd(s->u,59,4)==((U)UINT64_C(0x0))));
L_1803efcd8_9:;
wr(s->u,45,4,(rd(s->u,59,4)&((U)UINT64_C(0xff))));
L_1803efcd8_10:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803efcd8_11:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803efcd8_12:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803efcd8_13:;
/* 1803efcdb: jl 0x1803efc90 */
L_1803efcdb_0:;
L_1803efcdb_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803efcdb_2:;
if(rd(s->u,44,1)){return UINT64_C(0x1803efc90);}
L_1803efcdb_3:;
return UINT64_C(0x1803efcdd);
}
uint64_t b_1803efcdd(CPU*s){
/* 1803efcdd: movaps xmm8, xmmword ptr [rsp + 0x20] */
L_1803efcdd_0:;
L_1803efcdd_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803efcdd_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803efcdd_3:;
wr(s->u,54,16,rd(s->u,20,16));
L_1803efcdd_4:;
wr(s->r,5120,4,rd(s->u,54,4));
L_1803efcdd_5:;
wr(s->r,5124,4,rd(s->u,58,4));
L_1803efcdd_6:;
wr(s->r,5128,4,rd(s->u,62,4));
L_1803efcdd_7:;
wr(s->r,5132,4,rd(s->u,66,4));
L_1803efcdd_8:;
/* 1803efce3: movaps xmm6, xmmword ptr [rsp + 0x40] */
L_1803efce3_0:;
L_1803efce3_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803efce3_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803efce3_3:;
wr(s->u,54,16,rd(s->u,20,16));
L_1803efce3_4:;
wr(s->r,4992,4,rd(s->u,54,4));
L_1803efce3_5:;
wr(s->r,4996,4,rd(s->u,58,4));
L_1803efce3_6:;
wr(s->r,5000,4,rd(s->u,62,4));
L_1803efce3_7:;
wr(s->r,5004,4,rd(s->u,66,4));
L_1803efce3_8:;
/* 1803efce8: movaps xmm7, xmmword ptr [rsp + 0x30] */
L_1803efce8_0:;
L_1803efce8_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803efce8_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803efce8_3:;
wr(s->u,54,16,rd(s->u,20,16));
L_1803efce8_4:;
wr(s->r,5056,4,rd(s->u,54,4));
L_1803efce8_5:;
wr(s->r,5060,4,rd(s->u,58,4));
L_1803efce8_6:;
wr(s->r,5064,4,rd(s->u,62,4));
L_1803efce8_7:;
wr(s->r,5068,4,rd(s->u,66,4));
L_1803efce8_8:;
/* 1803efced: mov rax, rsi */
L_1803efced_0:;
L_1803efced_1:;
wr(s->r,0,8,rd(s->r,48,8));
L_1803efced_2:;
/* 1803efcf0: mov dword ptr [rsi + 0xb8], 0x40a00000 */
L_1803efcf0_0:;
L_1803efcf0_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xb8))));
L_1803efcf0_2:;
wr(s->u,16,4,((U)UINT64_C(0x40a00000)));
L_1803efcf0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803efcf0_4:;
/* 1803efcfa: add rsp, 0x50 */
L_1803efcfa_0:;
L_1803efcfa_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803efcfa_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803efcfa_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803efcfa_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efcfa_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803efcfa_6:;
wr(s->u,36,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803efcfa_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803efcfa_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803efcfa_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803efcfa_10:;
/* 1803efcfe: pop rsi */
L_1803efcfe_0:;
L_1803efcfe_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803efcfe_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efcfe_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efcfe_4:;
wr(s->r,48,8,rd(s->u,46,8));
L_1803efcfe_5:;
/* 1803efcff: pop rbp */
L_1803efcff_0:;
L_1803efcff_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803efcff_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efcff_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efcff_4:;
wr(s->r,40,8,rd(s->u,46,8));
L_1803efcff_5:;
/* 1803efd00: pop rbx */
L_1803efd00_0:;
L_1803efd00_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803efd00_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efd00_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efd00_4:;
wr(s->r,24,8,rd(s->u,46,8));
L_1803efd00_5:;
/* 1803efd01: ret  */
L_1803efd01_0:;
L_1803efd01_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efd01_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efd01_3:;
return (uint64_t)rd(s->r,648,8);
L_1803efd01_4:;
return UINT64_C(0x1803efd02);
}
uint64_t b_1803efce3(CPU*s){
/* 1803efce3: movaps xmm6, xmmword ptr [rsp + 0x40] */
L_1803efce3_0:;
L_1803efce3_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803efce3_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803efce3_3:;
wr(s->u,54,16,rd(s->u,20,16));
L_1803efce3_4:;
wr(s->r,4992,4,rd(s->u,54,4));
L_1803efce3_5:;
wr(s->r,4996,4,rd(s->u,58,4));
L_1803efce3_6:;
wr(s->r,5000,4,rd(s->u,62,4));
L_1803efce3_7:;
wr(s->r,5004,4,rd(s->u,66,4));
L_1803efce3_8:;
/* 1803efce8: movaps xmm7, xmmword ptr [rsp + 0x30] */
L_1803efce8_0:;
L_1803efce8_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803efce8_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803efce8_3:;
wr(s->u,54,16,rd(s->u,20,16));
L_1803efce8_4:;
wr(s->r,5056,4,rd(s->u,54,4));
L_1803efce8_5:;
wr(s->r,5060,4,rd(s->u,58,4));
L_1803efce8_6:;
wr(s->r,5064,4,rd(s->u,62,4));
L_1803efce8_7:;
wr(s->r,5068,4,rd(s->u,66,4));
L_1803efce8_8:;
/* 1803efced: mov rax, rsi */
L_1803efced_0:;
L_1803efced_1:;
wr(s->r,0,8,rd(s->r,48,8));
L_1803efced_2:;
/* 1803efcf0: mov dword ptr [rsi + 0xb8], 0x40a00000 */
L_1803efcf0_0:;
L_1803efcf0_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xb8))));
L_1803efcf0_2:;
wr(s->u,16,4,((U)UINT64_C(0x40a00000)));
L_1803efcf0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803efcf0_4:;
/* 1803efcfa: add rsp, 0x50 */
L_1803efcfa_0:;
L_1803efcfa_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803efcfa_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803efcfa_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803efcfa_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efcfa_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803efcfa_6:;
wr(s->u,36,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803efcfa_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803efcfa_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803efcfa_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803efcfa_10:;
/* 1803efcfe: pop rsi */
L_1803efcfe_0:;
L_1803efcfe_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803efcfe_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efcfe_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efcfe_4:;
wr(s->r,48,8,rd(s->u,46,8));
L_1803efcfe_5:;
/* 1803efcff: pop rbp */
L_1803efcff_0:;
L_1803efcff_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803efcff_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efcff_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efcff_4:;
wr(s->r,40,8,rd(s->u,46,8));
L_1803efcff_5:;
/* 1803efd00: pop rbx */
L_1803efd00_0:;
L_1803efd00_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803efd00_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efd00_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efd00_4:;
wr(s->r,24,8,rd(s->u,46,8));
L_1803efd00_5:;
/* 1803efd01: ret  */
L_1803efd01_0:;
L_1803efd01_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efd01_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efd01_3:;
return (uint64_t)rd(s->r,648,8);
L_1803efd01_4:;
return UINT64_C(0x1803efd02);
}
uint64_t b_1803efd10(CPU*s){
/* 1803efd10: mov qword ptr [rsp + 8], rbx */
L_1803efd10_0:;
L_1803efd10_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803efd10_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803efd10_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803efd10_4:;
/* 1803efd15: push rdi */
L_1803efd15_0:;
L_1803efd15_1:;
wr(s->u,32,8,rd(s->r,56,8));
L_1803efd15_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efd15_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,32,8));
L_1803efd15_4:;
/* 1803efd16: sub rsp, 0x20 */
L_1803efd16_0:;
L_1803efd16_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803efd16_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803efd16_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803efd16_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efd16_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803efd16_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803efd16_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803efd16_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803efd16_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803efd16_10:;
/* 1803efd1a: lea rax, [rip + 0x41d757] */
L_1803efd1a_0:;
L_1803efd1a_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080d478)));
L_1803efd1a_2:;
/* 1803efd21: mov rbx, rcx */
L_1803efd21_0:;
L_1803efd21_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803efd21_2:;
/* 1803efd24: mov qword ptr [rcx], rax */
L_1803efd24_0:;
L_1803efd24_1:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803efd24_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,16,8));
L_1803efd24_3:;
/* 1803efd27: mov rcx, qword ptr [rcx + 0x50] */
L_1803efd27_0:;
L_1803efd27_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x50))));
L_1803efd27_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efd27_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803efd27_4:;
/* 1803efd2b: test rcx, rcx */
L_1803efd2b_0:;
L_1803efd2b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803efd2b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efd2b_3:;
wr(s->u,50,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803efd2b_4:;
wr(s->r,519,1,(sx(rd(s->u,50,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efd2b_5:;
wr(s->r,518,1,(rd(s->u,50,8)==((U)UINT64_C(0x0))));
L_1803efd2b_6:;
wr(s->u,40,8,(rd(s->u,50,8)&((U)UINT64_C(0xff))));
L_1803efd2b_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803efd2b_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803efd2b_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803efd2b_10:;
/* 1803efd2e: je 0x1803efd35 */
L_1803efd2e_0:;
L_1803efd2e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803efd35);}
L_1803efd2e_2:;
return UINT64_C(0x1803efd30);
}
uint64_t b_1803efd30(CPU*s){
/* 1803efd30: call 0x180003160 */
L_1803efd30_0:;
L_1803efd30_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efd30_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efd35)));
L_1803efd30_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803efd30_4:;
return UINT64_C(0x1803efd35);
}
uint64_t b_1803efd35(CPU*s){
/* 1803efd35: mov rcx, qword ptr [rbx + 0x58] */
L_1803efd35_0:;
L_1803efd35_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x58))));
L_1803efd35_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efd35_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803efd35_4:;
/* 1803efd39: xor edi, edi */
L_1803efd39_0:;
L_1803efd39_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803efd39_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efd39_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803efd39_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803efd39_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efd39_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803efd39_7:;
wr(s->u,24,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803efd39_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803efd39_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803efd39_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803efd39_11:;
/* 1803efd3b: mov qword ptr [rbx + 0x50], rdi */
L_1803efd3b_0:;
L_1803efd3b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x50))));
L_1803efd3b_2:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803efd3b_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803efd3b_4:;
/* 1803efd3f: test rcx, rcx */
L_1803efd3f_0:;
L_1803efd3f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803efd3f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efd3f_3:;
wr(s->u,34,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803efd3f_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efd3f_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803efd3f_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803efd3f_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803efd3f_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803efd3f_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803efd3f_10:;
/* 1803efd42: je 0x1803efd49 */
L_1803efd42_0:;
L_1803efd42_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803efd49);}
L_1803efd42_2:;
return UINT64_C(0x1803efd44);
}
uint64_t b_1803efd44(CPU*s){
/* 1803efd44: call 0x180003160 */
L_1803efd44_0:;
L_1803efd44_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efd44_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efd49)));
L_1803efd44_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803efd44_4:;
return UINT64_C(0x1803efd49);
}
uint64_t b_1803efd49(CPU*s){
/* 1803efd49: mov rcx, qword ptr [rbx + 0x60] */
L_1803efd49_0:;
L_1803efd49_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x60))));
L_1803efd49_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efd49_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803efd49_4:;
/* 1803efd4d: mov qword ptr [rbx + 0x58], rdi */
L_1803efd4d_0:;
L_1803efd4d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x58))));
L_1803efd4d_2:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803efd4d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803efd4d_4:;
/* 1803efd51: test rcx, rcx */
L_1803efd51_0:;
L_1803efd51_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803efd51_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efd51_3:;
wr(s->u,34,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803efd51_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efd51_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803efd51_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803efd51_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803efd51_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803efd51_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803efd51_10:;
/* 1803efd54: je 0x1803efd5b */
L_1803efd54_0:;
L_1803efd54_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803efd5b);}
L_1803efd54_2:;
return UINT64_C(0x1803efd56);
}
uint64_t b_1803efd56(CPU*s){
/* 1803efd56: call 0x180003160 */
L_1803efd56_0:;
L_1803efd56_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efd56_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efd5b)));
L_1803efd56_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803efd56_4:;
return UINT64_C(0x1803efd5b);
}
uint64_t b_1803efd5b(CPU*s){
/* 1803efd5b: mov rcx, qword ptr [rbx + 0x68] */
L_1803efd5b_0:;
L_1803efd5b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x68))));
L_1803efd5b_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efd5b_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803efd5b_4:;
/* 1803efd5f: mov qword ptr [rbx + 0x60], rdi */
L_1803efd5f_0:;
L_1803efd5f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x60))));
L_1803efd5f_2:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803efd5f_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803efd5f_4:;
/* 1803efd63: test rcx, rcx */
L_1803efd63_0:;
L_1803efd63_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803efd63_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efd63_3:;
wr(s->u,34,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803efd63_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efd63_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803efd63_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803efd63_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803efd63_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803efd63_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803efd63_10:;
/* 1803efd66: je 0x1803efd6d */
L_1803efd66_0:;
L_1803efd66_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803efd6d);}
L_1803efd66_2:;
return UINT64_C(0x1803efd68);
}
uint64_t b_1803efd68(CPU*s){
/* 1803efd68: call 0x180609c16 */
L_1803efd68_0:;
L_1803efd68_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efd68_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efd6d)));
L_1803efd68_3:;
return (uint64_t)UINT64_C(0x180609c16);
L_1803efd68_4:;
return UINT64_C(0x1803efd6d);
}
uint64_t b_1803efd6d(CPU*s){
/* 1803efd6d: mov rcx, qword ptr [rbx + 0x78] */
L_1803efd6d_0:;
L_1803efd6d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x78))));
L_1803efd6d_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efd6d_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803efd6d_4:;
/* 1803efd71: mov qword ptr [rbx + 0x68], rdi */
L_1803efd71_0:;
L_1803efd71_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x68))));
L_1803efd71_2:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803efd71_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803efd71_4:;
/* 1803efd75: test rcx, rcx */
L_1803efd75_0:;
L_1803efd75_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803efd75_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efd75_3:;
wr(s->u,34,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803efd75_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efd75_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803efd75_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803efd75_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803efd75_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803efd75_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803efd75_10:;
/* 1803efd78: je 0x1803efd7f */
L_1803efd78_0:;
L_1803efd78_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803efd7f);}
L_1803efd78_2:;
return UINT64_C(0x1803efd7a);
}
uint64_t b_1803efd7a(CPU*s){
/* 1803efd7a: call 0x180003160 */
L_1803efd7a_0:;
L_1803efd7a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efd7a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efd7f)));
L_1803efd7a_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803efd7a_4:;
return UINT64_C(0x1803efd7f);
}
uint64_t b_1803efd7f(CPU*s){
/* 1803efd7f: mov rcx, qword ptr [rbx + 0x70] */
L_1803efd7f_0:;
L_1803efd7f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x70))));
L_1803efd7f_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efd7f_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803efd7f_4:;
/* 1803efd83: mov qword ptr [rbx + 0x78], rdi */
L_1803efd83_0:;
L_1803efd83_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x78))));
L_1803efd83_2:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803efd83_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803efd83_4:;
/* 1803efd87: test rcx, rcx */
L_1803efd87_0:;
L_1803efd87_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803efd87_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efd87_3:;
wr(s->u,34,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803efd87_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efd87_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803efd87_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803efd87_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803efd87_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803efd87_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803efd87_10:;
/* 1803efd8a: je 0x1803efd91 */
L_1803efd8a_0:;
L_1803efd8a_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803efd91);}
L_1803efd8a_2:;
return UINT64_C(0x1803efd8c);
}
uint64_t b_1803efd8c(CPU*s){
/* 1803efd8c: call 0x180003160 */
L_1803efd8c_0:;
L_1803efd8c_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efd8c_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efd91)));
L_1803efd8c_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803efd8c_4:;
return UINT64_C(0x1803efd91);
}
uint64_t b_1803efd91(CPU*s){
/* 1803efd91: mov rcx, qword ptr [rbx + 0x80] */
L_1803efd91_0:;
L_1803efd91_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x80))));
L_1803efd91_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803efd91_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803efd91_4:;
/* 1803efd98: mov qword ptr [rbx + 0x70], rdi */
L_1803efd98_0:;
L_1803efd98_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x70))));
L_1803efd98_2:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803efd98_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803efd98_4:;
/* 1803efd9c: test rcx, rcx */
L_1803efd9c_0:;
L_1803efd9c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803efd9c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efd9c_3:;
wr(s->u,42,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803efd9c_4:;
wr(s->r,519,1,(sx(rd(s->u,42,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efd9c_5:;
wr(s->r,518,1,(rd(s->u,42,8)==((U)UINT64_C(0x0))));
L_1803efd9c_6:;
wr(s->u,32,8,(rd(s->u,42,8)&((U)UINT64_C(0xff))));
L_1803efd9c_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803efd9c_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803efd9c_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803efd9c_10:;
/* 1803efd9f: je 0x1803efda6 */
L_1803efd9f_0:;
L_1803efd9f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803efda6);}
L_1803efd9f_2:;
return UINT64_C(0x1803efda1);
}
uint64_t b_1803efda1(CPU*s){
/* 1803efda1: call 0x180003160 */
L_1803efda1_0:;
L_1803efda1_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efda1_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efda6)));
L_1803efda1_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803efda1_4:;
return UINT64_C(0x1803efda6);
}
uint64_t b_1803efda6(CPU*s){
/* 1803efda6: mov rcx, qword ptr [rbx + 0xc0] */
L_1803efda6_0:;
L_1803efda6_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc0))));
L_1803efda6_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efda6_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803efda6_4:;
/* 1803efdad: mov qword ptr [rbx + 0x80], rdi */
L_1803efdad_0:;
L_1803efdad_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x80))));
L_1803efdad_2:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803efdad_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803efdad_4:;
/* 1803efdb4: call 0x1803f1960 */
L_1803efdb4_0:;
L_1803efdb4_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efdb4_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efdb9)));
L_1803efdb4_3:;
return (uint64_t)UINT64_C(0x1803f1960);
L_1803efdb4_4:;
return UINT64_C(0x1803efdb9);
}
uint64_t b_1803efdb9(CPU*s){
/* 1803efdb9: mov rcx, qword ptr [rbx + 0xc8] */
L_1803efdb9_0:;
L_1803efdb9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc8))));
L_1803efdb9_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efdb9_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803efdb9_4:;
/* 1803efdc0: mov rbx, qword ptr [rsp + 0x30] */
L_1803efdc0_0:;
L_1803efdc0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803efdc0_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803efdc0_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803efdc0_4:;
/* 1803efdc5: add rsp, 0x20 */
L_1803efdc5_0:;
L_1803efdc5_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803efdc5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803efdc5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803efdc5_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efdc5_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803efdc5_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803efdc5_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803efdc5_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803efdc5_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803efdc5_10:;
/* 1803efdc9: pop rdi */
L_1803efdc9_0:;
L_1803efdc9_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803efdc9_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efdc9_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efdc9_4:;
wr(s->r,56,8,rd(s->u,34,8));
L_1803efdc9_5:;
/* 1803efdca: jmp 0x1803ed530 */
L_1803efdca_0:;
L_1803efdca_1:;
return UINT64_C(0x1803ed530);
L_1803efdca_2:;
return UINT64_C(0x1803efdcf);
}
uint64_t b_1803efdd0(CPU*s){
/* 1803efdd0: push rsi */
L_1803efdd0_0:;
L_1803efdd0_1:;
wr(s->u,16,8,rd(s->r,48,8));
L_1803efdd0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efdd0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803efdd0_4:;
/* 1803efdd2: push rdi */
L_1803efdd2_0:;
L_1803efdd2_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803efdd2_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efdd2_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803efdd2_4:;
/* 1803efdd3: push r12 */
L_1803efdd3_0:;
L_1803efdd3_1:;
wr(s->u,16,8,rd(s->r,160,8));
L_1803efdd3_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efdd3_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803efdd3_4:;
/* 1803efdd5: sub rsp, 0x30 */
L_1803efdd5_0:;
L_1803efdd5_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803efdd5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803efdd5_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803efdd5_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efdd5_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803efdd5_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803efdd5_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803efdd5_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803efdd5_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803efdd5_10:;
/* 1803efdd9: mov qword ptr [rsp + 0x20], 0xfffffffffffffffe */
L_1803efdd9_0:;
L_1803efdd9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803efdd9_2:;
wr(s->u,8,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803efdd9_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803efdd9_4:;
/* 1803efde2: mov qword ptr [rsp + 0x58], rbx */
L_1803efde2_0:;
L_1803efde2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803efde2_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803efde2_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803efde2_4:;
/* 1803efde7: mov qword ptr [rsp + 0x60], rbp */
L_1803efde7_0:;
L_1803efde7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803efde7_2:;
wr(s->u,8,8,rd(s->r,40,8));
L_1803efde7_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803efde7_4:;
/* 1803efdec: mov esi, r9d */
L_1803efdec_0:;
L_1803efdec_1:;
wr(s->r,48,4,rd(s->r,136,4));
L_1803efdec_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803efdec_3:;
/* 1803efdef: mov ebp, r8d */
L_1803efdef_0:;
L_1803efdef_1:;
wr(s->r,40,4,rd(s->r,128,4));
L_1803efdef_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803efdef_3:;
/* 1803efdf2: mov r12d, edx */
L_1803efdf2_0:;
L_1803efdf2_1:;
wr(s->r,160,4,rd(s->r,16,4));
L_1803efdf2_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803efdf2_3:;
/* 1803efdf5: mov rdi, rcx */
L_1803efdf5_0:;
L_1803efdf5_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803efdf5_2:;
/* 1803efdf8: xor ebx, ebx */
L_1803efdf8_0:;
L_1803efdf8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803efdf8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efdf8_3:;
wr(s->r,24,4,(rd(s->r,24,4)^rd(s->r,24,4)));
L_1803efdf8_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803efdf8_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efdf8_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803efdf8_7:;
wr(s->u,24,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803efdf8_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803efdf8_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803efdf8_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803efdf8_11:;
/* 1803efdfa: mov qword ptr [rcx], rbx */
L_1803efdfa_0:;
L_1803efdfa_1:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803efdfa_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,8,8));
L_1803efdfa_3:;
/* 1803efdfd: mov ecx, 0xd8 */
L_1803efdfd_0:;
L_1803efdfd_1:;
wr(s->r,8,8,((U)UINT64_C(0xd8)));
L_1803efdfd_2:;
/* 1803efe02: call 0x180003140 */
L_1803efe02_0:;
L_1803efe02_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efe02_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efe07)));
L_1803efe02_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803efe02_4:;
return UINT64_C(0x1803efe07);
}
uint64_t b_1803efe07(CPU*s){
/* 1803efe07: mov qword ptr [rsp + 0x50], rax */
L_1803efe07_0:;
L_1803efe07_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803efe07_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803efe07_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803efe07_4:;
/* 1803efe0c: test rax, rax */
L_1803efe0c_0:;
L_1803efe0c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803efe0c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efe0c_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803efe0c_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efe0c_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803efe0c_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803efe0c_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803efe0c_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803efe0c_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803efe0c_10:;
/* 1803efe0f: je 0x1803efe24 */
L_1803efe0f_0:;
L_1803efe0f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803efe24);}
L_1803efe0f_2:;
return UINT64_C(0x1803efe11);
}
uint64_t b_1803efe11(CPU*s){
/* 1803efe11: mov r9d, esi */
L_1803efe11_0:;
L_1803efe11_1:;
wr(s->r,136,4,rd(s->r,48,4));
L_1803efe11_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803efe11_3:;
/* 1803efe14: mov r8d, ebp */
L_1803efe14_0:;
L_1803efe14_1:;
wr(s->r,128,4,rd(s->r,40,4));
L_1803efe14_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803efe14_3:;
/* 1803efe17: mov edx, r12d */
L_1803efe17_0:;
L_1803efe17_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1803efe17_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803efe17_3:;
/* 1803efe1a: mov rcx, rax */
L_1803efe1a_0:;
L_1803efe1a_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803efe1a_2:;
/* 1803efe1d: call 0x1803ef970 */
L_1803efe1d_0:;
L_1803efe1d_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efe1d_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efe22)));
L_1803efe1d_3:;
return (uint64_t)UINT64_C(0x1803ef970);
L_1803efe1d_4:;
return UINT64_C(0x1803efe22);
}
uint64_t b_1803efe22(CPU*s){
/* 1803efe22: jmp 0x1803efe27 */
L_1803efe22_0:;
L_1803efe22_1:;
return UINT64_C(0x1803efe27);
L_1803efe22_2:;
return UINT64_C(0x1803efe24);
}
uint64_t b_1803efe24(CPU*s){
/* 1803efe24: mov rax, rbx */
L_1803efe24_0:;
L_1803efe24_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803efe24_2:;
/* 1803efe27: mov qword ptr [rdi], rax */
L_1803efe27_0:;
L_1803efe27_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803efe27_2:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,8,8));
L_1803efe27_3:;
/* 1803efe2a: mov ecx, 0xf4241 */
L_1803efe2a_0:;
L_1803efe2a_1:;
wr(s->r,8,8,((U)UINT64_C(0xf4241)));
L_1803efe2a_2:;
/* 1803efe2f: test rax, rax */
L_1803efe2f_0:;
L_1803efe2f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803efe2f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efe2f_3:;
wr(s->u,47,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803efe2f_4:;
wr(s->r,519,1,(sx(rd(s->u,47,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efe2f_5:;
wr(s->r,518,1,(rd(s->u,47,8)==((U)UINT64_C(0x0))));
L_1803efe2f_6:;
wr(s->u,24,8,(rd(s->u,47,8)&((U)UINT64_C(0xff))));
L_1803efe2f_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803efe2f_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803efe2f_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803efe2f_10:;
/* 1803efe32: cmove ebx, ecx */
L_1803efe32_0:;
L_1803efe32_1:;
wr(s->u,34,4,rd(s->r,8,4));
L_1803efe32_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803efe32_3:;
wr(s->u,38,1,(!rd(s->r,518,1)));
L_1803efe32_4:;
if(rd(s->u,38,1)){goto L_1803efe35_0;}
L_1803efe32_5:;
wr(s->r,24,4,rd(s->u,34,4));
L_1803efe32_6:;
/* 1803efe35: mov eax, ebx */
L_1803efe35_0:;
L_1803efe35_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803efe35_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803efe35_3:;
/* 1803efe37: mov rbx, qword ptr [rsp + 0x58] */
L_1803efe37_0:;
L_1803efe37_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803efe37_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efe37_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803efe37_4:;
/* 1803efe3c: mov rbp, qword ptr [rsp + 0x60] */
L_1803efe3c_0:;
L_1803efe3c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803efe3c_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efe3c_3:;
wr(s->r,40,8,rd(s->u,16,8));
L_1803efe3c_4:;
/* 1803efe41: add rsp, 0x30 */
L_1803efe41_0:;
L_1803efe41_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803efe41_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803efe41_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803efe41_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efe41_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803efe41_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803efe41_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803efe41_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803efe41_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803efe41_10:;
/* 1803efe45: pop r12 */
L_1803efe45_0:;
L_1803efe45_1:;
wr(s->u,39,8,((U)UINT64_C(0x0)));
L_1803efe45_2:;
wr(s->u,39,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efe45_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efe45_4:;
wr(s->r,160,8,rd(s->u,39,8));
L_1803efe45_5:;
/* 1803efe47: pop rdi */
L_1803efe47_0:;
L_1803efe47_1:;
wr(s->u,39,8,((U)UINT64_C(0x0)));
L_1803efe47_2:;
wr(s->u,39,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efe47_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efe47_4:;
wr(s->r,56,8,rd(s->u,39,8));
L_1803efe47_5:;
/* 1803efe48: pop rsi */
L_1803efe48_0:;
L_1803efe48_1:;
wr(s->u,39,8,((U)UINT64_C(0x0)));
L_1803efe48_2:;
wr(s->u,39,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efe48_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efe48_4:;
wr(s->r,48,8,rd(s->u,39,8));
L_1803efe48_5:;
/* 1803efe49: ret  */
L_1803efe49_0:;
L_1803efe49_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efe49_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efe49_3:;
return (uint64_t)rd(s->r,648,8);
L_1803efe49_4:;
return UINT64_C(0x1803efe4a);
}
uint64_t b_1803efe27(CPU*s){
/* 1803efe27: mov qword ptr [rdi], rax */
L_1803efe27_0:;
L_1803efe27_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803efe27_2:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,8,8));
L_1803efe27_3:;
/* 1803efe2a: mov ecx, 0xf4241 */
L_1803efe2a_0:;
L_1803efe2a_1:;
wr(s->r,8,8,((U)UINT64_C(0xf4241)));
L_1803efe2a_2:;
/* 1803efe2f: test rax, rax */
L_1803efe2f_0:;
L_1803efe2f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803efe2f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efe2f_3:;
wr(s->u,47,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803efe2f_4:;
wr(s->r,519,1,(sx(rd(s->u,47,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efe2f_5:;
wr(s->r,518,1,(rd(s->u,47,8)==((U)UINT64_C(0x0))));
L_1803efe2f_6:;
wr(s->u,24,8,(rd(s->u,47,8)&((U)UINT64_C(0xff))));
L_1803efe2f_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803efe2f_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803efe2f_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803efe2f_10:;
/* 1803efe32: cmove ebx, ecx */
L_1803efe32_0:;
L_1803efe32_1:;
wr(s->u,34,4,rd(s->r,8,4));
L_1803efe32_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803efe32_3:;
wr(s->u,38,1,(!rd(s->r,518,1)));
L_1803efe32_4:;
if(rd(s->u,38,1)){goto L_1803efe35_0;}
L_1803efe32_5:;
wr(s->r,24,4,rd(s->u,34,4));
L_1803efe32_6:;
/* 1803efe35: mov eax, ebx */
L_1803efe35_0:;
L_1803efe35_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803efe35_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803efe35_3:;
/* 1803efe37: mov rbx, qword ptr [rsp + 0x58] */
L_1803efe37_0:;
L_1803efe37_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803efe37_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efe37_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803efe37_4:;
/* 1803efe3c: mov rbp, qword ptr [rsp + 0x60] */
L_1803efe3c_0:;
L_1803efe3c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803efe3c_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efe3c_3:;
wr(s->r,40,8,rd(s->u,16,8));
L_1803efe3c_4:;
/* 1803efe41: add rsp, 0x30 */
L_1803efe41_0:;
L_1803efe41_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803efe41_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803efe41_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803efe41_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efe41_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803efe41_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803efe41_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803efe41_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803efe41_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803efe41_10:;
/* 1803efe45: pop r12 */
L_1803efe45_0:;
L_1803efe45_1:;
wr(s->u,39,8,((U)UINT64_C(0x0)));
L_1803efe45_2:;
wr(s->u,39,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efe45_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efe45_4:;
wr(s->r,160,8,rd(s->u,39,8));
L_1803efe45_5:;
/* 1803efe47: pop rdi */
L_1803efe47_0:;
L_1803efe47_1:;
wr(s->u,39,8,((U)UINT64_C(0x0)));
L_1803efe47_2:;
wr(s->u,39,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efe47_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efe47_4:;
wr(s->r,56,8,rd(s->u,39,8));
L_1803efe47_5:;
/* 1803efe48: pop rsi */
L_1803efe48_0:;
L_1803efe48_1:;
wr(s->u,39,8,((U)UINT64_C(0x0)));
L_1803efe48_2:;
wr(s->u,39,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efe48_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efe48_4:;
wr(s->r,48,8,rd(s->u,39,8));
L_1803efe48_5:;
/* 1803efe49: ret  */
L_1803efe49_0:;
L_1803efe49_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efe49_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efe49_3:;
return (uint64_t)rd(s->r,648,8);
L_1803efe49_4:;
return UINT64_C(0x1803efe4a);
}
uint64_t b_1803efe35(CPU*s){
/* 1803efe35: mov eax, ebx */
L_1803efe35_0:;
L_1803efe35_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803efe35_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803efe35_3:;
/* 1803efe37: mov rbx, qword ptr [rsp + 0x58] */
L_1803efe37_0:;
L_1803efe37_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803efe37_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efe37_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803efe37_4:;
/* 1803efe3c: mov rbp, qword ptr [rsp + 0x60] */
L_1803efe3c_0:;
L_1803efe3c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803efe3c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803efe3c_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803efe3c_4:;
/* 1803efe41: add rsp, 0x30 */
L_1803efe41_0:;
L_1803efe41_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803efe41_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803efe41_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803efe41_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efe41_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803efe41_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803efe41_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803efe41_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803efe41_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803efe41_10:;
/* 1803efe45: pop r12 */
L_1803efe45_0:;
L_1803efe45_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803efe45_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efe45_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efe45_4:;
wr(s->r,160,8,rd(s->u,26,8));
L_1803efe45_5:;
/* 1803efe47: pop rdi */
L_1803efe47_0:;
L_1803efe47_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803efe47_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efe47_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efe47_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803efe47_5:;
/* 1803efe48: pop rsi */
L_1803efe48_0:;
L_1803efe48_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803efe48_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efe48_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efe48_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1803efe48_5:;
/* 1803efe49: ret  */
L_1803efe49_0:;
L_1803efe49_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efe49_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efe49_3:;
return (uint64_t)rd(s->r,648,8);
L_1803efe49_4:;
return UINT64_C(0x1803efe4a);
}
uint64_t b_1803efe50(CPU*s){
/* 1803efe50: push rbx */
L_1803efe50_0:;
L_1803efe50_1:;
wr(s->u,9,8,rd(s->r,24,8));
L_1803efe50_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efe50_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,9,8));
L_1803efe50_4:;
/* 1803efe52: sub rsp, 0x20 */
L_1803efe52_0:;
L_1803efe52_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803efe52_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803efe52_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803efe52_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efe52_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803efe52_6:;
wr(s->u,17,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803efe52_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803efe52_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803efe52_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803efe52_10:;
/* 1803efe56: mov rbx, rcx */
L_1803efe56_0:;
L_1803efe56_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803efe56_2:;
/* 1803efe59: mov rcx, qword ptr [rcx] */
L_1803efe59_0:;
L_1803efe59_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803efe59_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803efe59_3:;
/* 1803efe5c: test rcx, rcx */
L_1803efe5c_0:;
L_1803efe5c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803efe5c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efe5c_3:;
wr(s->u,27,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803efe5c_4:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efe5c_5:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803efe5c_6:;
wr(s->u,17,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803efe5c_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803efe5c_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803efe5c_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803efe5c_10:;
/* 1803efe5f: jne 0x1803efe6c */
L_1803efe5f_0:;
L_1803efe5f_1:;
wr(s->u,8,1,(!rd(s->r,518,1)));
L_1803efe5f_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803efe6c);}
L_1803efe5f_3:;
return UINT64_C(0x1803efe61);
}
uint64_t b_1803efe61(CPU*s){
/* 1803efe61: mov eax, 0x4c4b43 */
L_1803efe61_0:;
L_1803efe61_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803efe61_2:;
/* 1803efe66: add rsp, 0x20 */
L_1803efe66_0:;
L_1803efe66_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803efe66_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803efe66_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803efe66_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efe66_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803efe66_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803efe66_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803efe66_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803efe66_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803efe66_10:;
/* 1803efe6a: pop rbx */
L_1803efe6a_0:;
L_1803efe6a_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803efe6a_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efe6a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efe6a_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803efe6a_5:;
/* 1803efe6b: ret  */
L_1803efe6b_0:;
L_1803efe6b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efe6b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efe6b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803efe6b_4:;
return UINT64_C(0x1803efe6c);
}
uint64_t b_1803efe6c(CPU*s){
/* 1803efe6c: mov rax, qword ptr [rcx] */
L_1803efe6c_0:;
L_1803efe6c_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803efe6c_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803efe6c_3:;
/* 1803efe6f: mov edx, 1 */
L_1803efe6f_0:;
L_1803efe6f_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803efe6f_2:;
/* 1803efe74: call qword ptr [rax] */
L_1803efe74_0:;
L_1803efe74_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803efe74_2:;
wr(s->u,8,8,rd(s->u,0,8));
L_1803efe74_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803efe74_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803efe76)));
L_1803efe74_5:;
return (uint64_t)rd(s->u,8,8);
L_1803efe74_6:;
return UINT64_C(0x1803efe76);
}
uint64_t b_1803efe76(CPU*s){
/* 1803efe76: mov qword ptr [rbx], 0 */
L_1803efe76_0:;
L_1803efe76_1:;
wr(s->u,0,8,((U)UINT64_C(0x0)));
L_1803efe76_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803efe76_3:;
/* 1803efe7d: xor eax, eax */
L_1803efe7d_0:;
L_1803efe7d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803efe7d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803efe7d_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803efe7d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803efe7d_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803efe7d_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803efe7d_7:;
wr(s->u,8,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803efe7d_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803efe7d_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803efe7d_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803efe7d_11:;
/* 1803efe7f: add rsp, 0x20 */
L_1803efe7f_0:;
L_1803efe7f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803efe7f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803efe7f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803efe7f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803efe7f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803efe7f_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803efe7f_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803efe7f_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803efe7f_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803efe7f_10:;
/* 1803efe83: pop rbx */
L_1803efe83_0:;
L_1803efe83_1:;
wr(s->u,18,8,((U)UINT64_C(0x0)));
L_1803efe83_2:;
wr(s->u,18,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efe83_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efe83_4:;
wr(s->r,24,8,rd(s->u,18,8));
L_1803efe83_5:;
/* 1803efe84: ret  */
L_1803efe84_0:;
L_1803efe84_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803efe84_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803efe84_3:;
return (uint64_t)rd(s->r,648,8);
L_1803efe84_4:;
return UINT64_C(0x1803efe85);
}
