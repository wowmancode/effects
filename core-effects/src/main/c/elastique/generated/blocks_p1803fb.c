#include "lift_runtime.h"
uint64_t b_1803fb04f(CPU*s){
/* 1803fb04f: addsd xmm2, xmm14 */
L_1803fb04f_0:;
L_1803fb04f_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)+fv(rd(s->r,5504,8),8),8));
L_1803fb04f_2:;
/* 1803fb054: movsd qword ptr [rsp + 0x1b8], xmm2 */
L_1803fb054_0:;
L_1803fb054_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1b8))+rd(s->r,32,8)));
L_1803fb054_2:;
wr(s->u,12,8,rd(s->r,4736,8));
L_1803fb054_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803fb054_4:;
/* 1803fb05d: mov edi, dword ptr [rsp + 0x1b8] */
L_1803fb05d_0:;
L_1803fb05d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1b8))+rd(s->r,32,8)));
L_1803fb05d_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb05d_3:;
wr(s->r,56,4,rd(s->u,20,4));
L_1803fb05d_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fb05d_5:;
/* 1803fb064: subsd xmm2, xmm14 */
L_1803fb064_0:;
L_1803fb064_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)-fv(rd(s->r,5504,8),8),8));
L_1803fb064_2:;
/* 1803fb069: cvtps2pd xmm4, xmm7 */
L_1803fb069_0:;
L_1803fb069_1:;
wr(s->u,24,8,rd(s->r,5056,8));
L_1803fb069_2:;
wr(s->r,4864,8,fb(fv(rd(s->u,24,4),4),8));
L_1803fb069_3:;
wr(s->r,4872,8,fb(fv(rd(s->u,28,4),4),8));
L_1803fb069_4:;
/* 1803fb06c: cvtps2pd xmm11, xmm6 */
L_1803fb06c_0:;
L_1803fb06c_1:;
wr(s->u,24,8,rd(s->r,4992,8));
L_1803fb06c_2:;
wr(s->r,5312,8,fb(fv(rd(s->u,24,4),4),8));
L_1803fb06c_3:;
wr(s->r,5320,8,fb(fv(rd(s->u,28,4),4),8));
L_1803fb06c_4:;
/* 1803fb070: movaps xmm9, xmm4 */
L_1803fb070_0:;
L_1803fb070_1:;
wr(s->r,5184,4,rd(s->r,4864,4));
L_1803fb070_2:;
wr(s->r,5188,4,rd(s->r,4868,4));
L_1803fb070_3:;
wr(s->r,5192,4,rd(s->r,4872,4));
L_1803fb070_4:;
wr(s->r,5196,4,rd(s->r,4876,4));
L_1803fb070_5:;
/* 1803fb074: mulsd xmm9, xmm3 */
L_1803fb074_0:;
L_1803fb074_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803fb074_2:;
/* 1803fb079: movss xmm6, dword ptr [rsp + 0x178] */
L_1803fb079_0:;
L_1803fb079_1:;
wr(s->u,0,8,(((U)UINT64_C(0x178))+rd(s->r,32,8)));
L_1803fb079_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb079_3:;
wr(s->r,4992,4,rd(s->u,8,4));
L_1803fb079_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fb079_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fb079_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fb079_7:;
/* 1803fb082: addsd xmm9, xmm15 */
L_1803fb082_0:;
L_1803fb082_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)+fv(rd(s->r,5568,8),8),8));
L_1803fb082_2:;
/* 1803fb087: movsd qword ptr [rsp + 0x1c0], xmm9 */
L_1803fb087_0:;
L_1803fb087_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1c0))+rd(s->r,32,8)));
L_1803fb087_2:;
wr(s->u,12,8,rd(s->r,5184,8));
L_1803fb087_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803fb087_4:;
/* 1803fb091: mov ebp, dword ptr [rsp + 0x1c0] */
L_1803fb091_0:;
L_1803fb091_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1c0))+rd(s->r,32,8)));
L_1803fb091_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb091_3:;
wr(s->r,40,4,rd(s->u,20,4));
L_1803fb091_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fb091_5:;
/* 1803fb098: subsd xmm9, xmm15 */
L_1803fb098_0:;
L_1803fb098_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)-fv(rd(s->r,5568,8),8),8));
L_1803fb098_2:;
/* 1803fb09d: movaps xmm8, xmm11 */
L_1803fb09d_0:;
L_1803fb09d_1:;
wr(s->r,5120,4,rd(s->r,5312,4));
L_1803fb09d_2:;
wr(s->r,5124,4,rd(s->r,5316,4));
L_1803fb09d_3:;
wr(s->r,5128,4,rd(s->r,5320,4));
L_1803fb09d_4:;
wr(s->r,5132,4,rd(s->r,5324,4));
L_1803fb09d_5:;
/* 1803fb0a1: mulsd xmm8, xmm3 */
L_1803fb0a1_0:;
L_1803fb0a1_1:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803fb0a1_2:;
/* 1803fb0a6: cvtps2pd xmm10, xmm6 */
L_1803fb0a6_0:;
L_1803fb0a6_1:;
wr(s->u,24,8,rd(s->r,4992,8));
L_1803fb0a6_2:;
wr(s->r,5248,8,fb(fv(rd(s->u,24,4),4),8));
L_1803fb0a6_3:;
wr(s->r,5256,8,fb(fv(rd(s->u,28,4),4),8));
L_1803fb0a6_4:;
/* 1803fb0aa: movsd xmm6, qword ptr [rsp + 0x198] */
L_1803fb0aa_0:;
L_1803fb0aa_1:;
wr(s->u,0,8,(((U)UINT64_C(0x198))+rd(s->r,32,8)));
L_1803fb0aa_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fb0aa_3:;
wr(s->r,4992,8,rd(s->u,12,8));
L_1803fb0aa_4:;
wr(s->r,5000,8,((U)UINT64_C(0x0)));
L_1803fb0aa_5:;
/* 1803fb0b3: movaps xmm7, xmm10 */
L_1803fb0b3_0:;
L_1803fb0b3_1:;
wr(s->r,5056,4,rd(s->r,5248,4));
L_1803fb0b3_2:;
wr(s->r,5060,4,rd(s->r,5252,4));
L_1803fb0b3_3:;
wr(s->r,5064,4,rd(s->r,5256,4));
L_1803fb0b3_4:;
wr(s->r,5068,4,rd(s->r,5260,4));
L_1803fb0b3_5:;
/* 1803fb0b7: mulsd xmm7, xmm3 */
L_1803fb0b7_0:;
L_1803fb0b7_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803fb0b7_2:;
/* 1803fb0bb: addsd xmm7, xmm6 */
L_1803fb0bb_0:;
L_1803fb0bb_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)+fv(rd(s->r,4992,8),8),8));
L_1803fb0bb_2:;
/* 1803fb0bf: movsd xmm3, qword ptr [rsp + 0x1a0] */
L_1803fb0bf_0:;
L_1803fb0bf_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1a0))+rd(s->r,32,8)));
L_1803fb0bf_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fb0bf_3:;
wr(s->r,4800,8,rd(s->u,12,8));
L_1803fb0bf_4:;
wr(s->r,4808,8,((U)UINT64_C(0x0)));
L_1803fb0bf_5:;
/* 1803fb0c8: movsd qword ptr [rsp + 0x1d0], xmm7 */
L_1803fb0c8_0:;
L_1803fb0c8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1d0))+rd(s->r,32,8)));
L_1803fb0c8_2:;
wr(s->u,12,8,rd(s->r,5056,8));
L_1803fb0c8_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803fb0c8_4:;
/* 1803fb0d1: mov edx, dword ptr [rsp + 0x1d0] */
L_1803fb0d1_0:;
L_1803fb0d1_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1d0))+rd(s->r,32,8)));
L_1803fb0d1_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb0d1_3:;
wr(s->r,16,4,rd(s->u,20,4));
L_1803fb0d1_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fb0d1_5:;
/* 1803fb0d8: addsd xmm8, xmm3 */
L_1803fb0d8_0:;
L_1803fb0d8_1:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803fb0d8_2:;
/* 1803fb0dd: movsd qword ptr [rsp + 0x1c8], xmm8 */
L_1803fb0dd_0:;
L_1803fb0dd_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1c8))+rd(s->r,32,8)));
L_1803fb0dd_2:;
wr(s->u,12,8,rd(s->r,5120,8));
L_1803fb0dd_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803fb0dd_4:;
/* 1803fb0e7: mov ecx, dword ptr [rsp + 0x1c8] */
L_1803fb0e7_0:;
L_1803fb0e7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1c8))+rd(s->r,32,8)));
L_1803fb0e7_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb0e7_3:;
wr(s->r,8,4,rd(s->u,20,4));
L_1803fb0e7_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fb0e7_5:;
/* 1803fb0ee: subsd xmm8, xmm3 */
L_1803fb0ee_0:;
L_1803fb0ee_1:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)-fv(rd(s->r,4800,8),8),8));
L_1803fb0ee_2:;
/* 1803fb0f3: movsd xmm3, qword ptr [rip + 0x413365] */
L_1803fb0f3_0:;
L_1803fb0f3_1:;
wr(s->r,4800,8,mr(UINT64_C(0x18080e460),8));
L_1803fb0f3_2:;
wr(s->r,4808,8,((U)UINT64_C(0x0)));
L_1803fb0f3_3:;
/* 1803fb0fb: mulsd xmm2, xmm3 */
L_1803fb0fb_0:;
L_1803fb0fb_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803fb0fb_2:;
/* 1803fb0ff: mulsd xmm9, xmm3 */
L_1803fb0ff_0:;
L_1803fb0ff_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803fb0ff_2:;
/* 1803fb104: mulsd xmm8, xmm3 */
L_1803fb104_0:;
L_1803fb104_1:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803fb104_2:;
/* 1803fb109: subsd xmm7, xmm6 */
L_1803fb109_0:;
L_1803fb109_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)-fv(rd(s->r,4992,8),8),8));
L_1803fb109_2:;
return UINT64_C(0x1803fb10d);
}
uint64_t b_1803fb079(CPU*s){
/* 1803fb079: movss xmm6, dword ptr [rsp + 0x178] */
L_1803fb079_0:;
L_1803fb079_1:;
wr(s->u,0,8,(((U)UINT64_C(0x178))+rd(s->r,32,8)));
L_1803fb079_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb079_3:;
wr(s->r,4992,4,rd(s->u,8,4));
L_1803fb079_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fb079_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fb079_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fb079_7:;
/* 1803fb082: addsd xmm9, xmm15 */
L_1803fb082_0:;
L_1803fb082_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)+fv(rd(s->r,5568,8),8),8));
L_1803fb082_2:;
/* 1803fb087: movsd qword ptr [rsp + 0x1c0], xmm9 */
L_1803fb087_0:;
L_1803fb087_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1c0))+rd(s->r,32,8)));
L_1803fb087_2:;
wr(s->u,12,8,rd(s->r,5184,8));
L_1803fb087_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803fb087_4:;
/* 1803fb091: mov ebp, dword ptr [rsp + 0x1c0] */
L_1803fb091_0:;
L_1803fb091_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1c0))+rd(s->r,32,8)));
L_1803fb091_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb091_3:;
wr(s->r,40,4,rd(s->u,20,4));
L_1803fb091_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fb091_5:;
/* 1803fb098: subsd xmm9, xmm15 */
L_1803fb098_0:;
L_1803fb098_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)-fv(rd(s->r,5568,8),8),8));
L_1803fb098_2:;
/* 1803fb09d: movaps xmm8, xmm11 */
L_1803fb09d_0:;
L_1803fb09d_1:;
wr(s->r,5120,4,rd(s->r,5312,4));
L_1803fb09d_2:;
wr(s->r,5124,4,rd(s->r,5316,4));
L_1803fb09d_3:;
wr(s->r,5128,4,rd(s->r,5320,4));
L_1803fb09d_4:;
wr(s->r,5132,4,rd(s->r,5324,4));
L_1803fb09d_5:;
/* 1803fb0a1: mulsd xmm8, xmm3 */
L_1803fb0a1_0:;
L_1803fb0a1_1:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803fb0a1_2:;
/* 1803fb0a6: cvtps2pd xmm10, xmm6 */
L_1803fb0a6_0:;
L_1803fb0a6_1:;
wr(s->u,24,8,rd(s->r,4992,8));
L_1803fb0a6_2:;
wr(s->r,5248,8,fb(fv(rd(s->u,24,4),4),8));
L_1803fb0a6_3:;
wr(s->r,5256,8,fb(fv(rd(s->u,28,4),4),8));
L_1803fb0a6_4:;
/* 1803fb0aa: movsd xmm6, qword ptr [rsp + 0x198] */
L_1803fb0aa_0:;
L_1803fb0aa_1:;
wr(s->u,0,8,(((U)UINT64_C(0x198))+rd(s->r,32,8)));
L_1803fb0aa_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fb0aa_3:;
wr(s->r,4992,8,rd(s->u,12,8));
L_1803fb0aa_4:;
wr(s->r,5000,8,((U)UINT64_C(0x0)));
L_1803fb0aa_5:;
/* 1803fb0b3: movaps xmm7, xmm10 */
L_1803fb0b3_0:;
L_1803fb0b3_1:;
wr(s->r,5056,4,rd(s->r,5248,4));
L_1803fb0b3_2:;
wr(s->r,5060,4,rd(s->r,5252,4));
L_1803fb0b3_3:;
wr(s->r,5064,4,rd(s->r,5256,4));
L_1803fb0b3_4:;
wr(s->r,5068,4,rd(s->r,5260,4));
L_1803fb0b3_5:;
/* 1803fb0b7: mulsd xmm7, xmm3 */
L_1803fb0b7_0:;
L_1803fb0b7_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803fb0b7_2:;
/* 1803fb0bb: addsd xmm7, xmm6 */
L_1803fb0bb_0:;
L_1803fb0bb_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)+fv(rd(s->r,4992,8),8),8));
L_1803fb0bb_2:;
/* 1803fb0bf: movsd xmm3, qword ptr [rsp + 0x1a0] */
L_1803fb0bf_0:;
L_1803fb0bf_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1a0))+rd(s->r,32,8)));
L_1803fb0bf_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fb0bf_3:;
wr(s->r,4800,8,rd(s->u,12,8));
L_1803fb0bf_4:;
wr(s->r,4808,8,((U)UINT64_C(0x0)));
L_1803fb0bf_5:;
/* 1803fb0c8: movsd qword ptr [rsp + 0x1d0], xmm7 */
L_1803fb0c8_0:;
L_1803fb0c8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1d0))+rd(s->r,32,8)));
L_1803fb0c8_2:;
wr(s->u,12,8,rd(s->r,5056,8));
L_1803fb0c8_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803fb0c8_4:;
/* 1803fb0d1: mov edx, dword ptr [rsp + 0x1d0] */
L_1803fb0d1_0:;
L_1803fb0d1_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1d0))+rd(s->r,32,8)));
L_1803fb0d1_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb0d1_3:;
wr(s->r,16,4,rd(s->u,20,4));
L_1803fb0d1_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fb0d1_5:;
/* 1803fb0d8: addsd xmm8, xmm3 */
L_1803fb0d8_0:;
L_1803fb0d8_1:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803fb0d8_2:;
/* 1803fb0dd: movsd qword ptr [rsp + 0x1c8], xmm8 */
L_1803fb0dd_0:;
L_1803fb0dd_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1c8))+rd(s->r,32,8)));
L_1803fb0dd_2:;
wr(s->u,12,8,rd(s->r,5120,8));
L_1803fb0dd_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803fb0dd_4:;
/* 1803fb0e7: mov ecx, dword ptr [rsp + 0x1c8] */
L_1803fb0e7_0:;
L_1803fb0e7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1c8))+rd(s->r,32,8)));
L_1803fb0e7_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb0e7_3:;
wr(s->r,8,4,rd(s->u,20,4));
L_1803fb0e7_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fb0e7_5:;
/* 1803fb0ee: subsd xmm8, xmm3 */
L_1803fb0ee_0:;
L_1803fb0ee_1:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)-fv(rd(s->r,4800,8),8),8));
L_1803fb0ee_2:;
/* 1803fb0f3: movsd xmm3, qword ptr [rip + 0x413365] */
L_1803fb0f3_0:;
L_1803fb0f3_1:;
wr(s->r,4800,8,mr(UINT64_C(0x18080e460),8));
L_1803fb0f3_2:;
wr(s->r,4808,8,((U)UINT64_C(0x0)));
L_1803fb0f3_3:;
/* 1803fb0fb: mulsd xmm2, xmm3 */
L_1803fb0fb_0:;
L_1803fb0fb_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803fb0fb_2:;
/* 1803fb0ff: mulsd xmm9, xmm3 */
L_1803fb0ff_0:;
L_1803fb0ff_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803fb0ff_2:;
/* 1803fb104: mulsd xmm8, xmm3 */
L_1803fb104_0:;
L_1803fb104_1:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803fb104_2:;
/* 1803fb109: subsd xmm7, xmm6 */
L_1803fb109_0:;
L_1803fb109_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)-fv(rd(s->r,4992,8),8),8));
L_1803fb109_2:;
/* 1803fb10d: mulsd xmm7, xmm3 */
L_1803fb10d_0:;
L_1803fb10d_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803fb10d_2:;
/* 1803fb111: movsd xmm6, qword ptr [rip + 0x41334f] */
L_1803fb111_0:;
L_1803fb111_1:;
wr(s->r,4992,8,mr(UINT64_C(0x18080e468),8));
L_1803fb111_2:;
wr(s->r,5000,8,((U)UINT64_C(0x0)));
L_1803fb111_3:;
/* 1803fb119: subsd xmm5, xmm2 */
L_1803fb119_0:;
L_1803fb119_1:;
wr(s->r,4928,8,fb(fv(rd(s->r,4928,8),8)-fv(rd(s->r,4736,8),8),8));
L_1803fb119_2:;
/* 1803fb11d: movaps xmm12, xmm5 */
L_1803fb11d_0:;
L_1803fb11d_1:;
wr(s->r,5376,4,rd(s->r,4928,4));
L_1803fb11d_2:;
wr(s->r,5380,4,rd(s->r,4932,4));
L_1803fb11d_3:;
wr(s->r,5384,4,rd(s->r,4936,4));
L_1803fb11d_4:;
wr(s->r,5388,4,rd(s->r,4940,4));
L_1803fb11d_5:;
/* 1803fb121: mulsd xmm12, xmm5 */
L_1803fb121_0:;
L_1803fb121_1:;
wr(s->r,5376,8,fb(fv(rd(s->r,5376,8),8)*fv(rd(s->r,4928,8),8),8));
L_1803fb121_2:;
/* 1803fb126: subsd xmm4, xmm9 */
L_1803fb126_0:;
L_1803fb126_1:;
wr(s->r,4864,8,fb(fv(rd(s->r,4864,8),8)-fv(rd(s->r,5184,8),8),8));
L_1803fb126_2:;
/* 1803fb12b: movaps xmm13, xmm4 */
L_1803fb12b_0:;
L_1803fb12b_1:;
wr(s->r,5440,4,rd(s->r,4864,4));
L_1803fb12b_2:;
wr(s->r,5444,4,rd(s->r,4868,4));
L_1803fb12b_3:;
wr(s->r,5448,4,rd(s->r,4872,4));
L_1803fb12b_4:;
wr(s->r,5452,4,rd(s->r,4876,4));
L_1803fb12b_5:;
/* 1803fb12f: mulsd xmm13, xmm4 */
L_1803fb12f_0:;
L_1803fb12f_1:;
wr(s->r,5440,8,fb(fv(rd(s->r,5440,8),8)*fv(rd(s->r,4864,8),8),8));
L_1803fb12f_2:;
return UINT64_C(0x1803fb134);
}
uint64_t b_1803fb10d(CPU*s){
/* 1803fb10d: mulsd xmm7, xmm3 */
L_1803fb10d_0:;
L_1803fb10d_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803fb10d_2:;
/* 1803fb111: movsd xmm6, qword ptr [rip + 0x41334f] */
L_1803fb111_0:;
L_1803fb111_1:;
wr(s->r,4992,8,mr(UINT64_C(0x18080e468),8));
L_1803fb111_2:;
wr(s->r,5000,8,((U)UINT64_C(0x0)));
L_1803fb111_3:;
/* 1803fb119: subsd xmm5, xmm2 */
L_1803fb119_0:;
L_1803fb119_1:;
wr(s->r,4928,8,fb(fv(rd(s->r,4928,8),8)-fv(rd(s->r,4736,8),8),8));
L_1803fb119_2:;
/* 1803fb11d: movaps xmm12, xmm5 */
L_1803fb11d_0:;
L_1803fb11d_1:;
wr(s->r,5376,4,rd(s->r,4928,4));
L_1803fb11d_2:;
wr(s->r,5380,4,rd(s->r,4932,4));
L_1803fb11d_3:;
wr(s->r,5384,4,rd(s->r,4936,4));
L_1803fb11d_4:;
wr(s->r,5388,4,rd(s->r,4940,4));
L_1803fb11d_5:;
/* 1803fb121: mulsd xmm12, xmm5 */
L_1803fb121_0:;
L_1803fb121_1:;
wr(s->r,5376,8,fb(fv(rd(s->r,5376,8),8)*fv(rd(s->r,4928,8),8),8));
L_1803fb121_2:;
/* 1803fb126: subsd xmm4, xmm9 */
L_1803fb126_0:;
L_1803fb126_1:;
wr(s->r,4864,8,fb(fv(rd(s->r,4864,8),8)-fv(rd(s->r,5184,8),8),8));
L_1803fb126_2:;
/* 1803fb12b: movaps xmm13, xmm4 */
L_1803fb12b_0:;
L_1803fb12b_1:;
wr(s->r,5440,4,rd(s->r,4864,4));
L_1803fb12b_2:;
wr(s->r,5444,4,rd(s->r,4868,4));
L_1803fb12b_3:;
wr(s->r,5448,4,rd(s->r,4872,4));
L_1803fb12b_4:;
wr(s->r,5452,4,rd(s->r,4876,4));
L_1803fb12b_5:;
/* 1803fb12f: mulsd xmm13, xmm4 */
L_1803fb12f_0:;
L_1803fb12f_1:;
wr(s->r,5440,8,fb(fv(rd(s->r,5440,8),8)*fv(rd(s->r,4864,8),8),8));
L_1803fb12f_2:;
/* 1803fb134: movsd xmm9, qword ptr [rip + 0x41332b] */
L_1803fb134_0:;
L_1803fb134_1:;
wr(s->r,5184,8,mr(UINT64_C(0x18080e468),8));
L_1803fb134_2:;
wr(s->r,5192,8,((U)UINT64_C(0x0)));
L_1803fb134_3:;
/* 1803fb13d: subsd xmm11, xmm8 */
L_1803fb13d_0:;
L_1803fb13d_1:;
wr(s->r,5312,8,fb(fv(rd(s->r,5312,8),8)-fv(rd(s->r,5120,8),8),8));
L_1803fb13d_2:;
/* 1803fb142: movaps xmm14, xmm11 */
L_1803fb142_0:;
L_1803fb142_1:;
wr(s->r,5504,4,rd(s->r,5312,4));
L_1803fb142_2:;
wr(s->r,5508,4,rd(s->r,5316,4));
L_1803fb142_3:;
wr(s->r,5512,4,rd(s->r,5320,4));
L_1803fb142_4:;
wr(s->r,5516,4,rd(s->r,5324,4));
L_1803fb142_5:;
/* 1803fb146: mulsd xmm14, xmm11 */
L_1803fb146_0:;
L_1803fb146_1:;
wr(s->r,5504,8,fb(fv(rd(s->r,5504,8),8)*fv(rd(s->r,5312,8),8),8));
L_1803fb146_2:;
/* 1803fb14b: movsd xmm8, qword ptr [rip + 0x413314] */
L_1803fb14b_0:;
L_1803fb14b_1:;
wr(s->r,5120,8,mr(UINT64_C(0x18080e468),8));
L_1803fb14b_2:;
wr(s->r,5128,8,((U)UINT64_C(0x0)));
L_1803fb14b_3:;
/* 1803fb154: subsd xmm10, xmm7 */
L_1803fb154_0:;
L_1803fb154_1:;
wr(s->r,5248,8,fb(fv(rd(s->r,5248,8),8)-fv(rd(s->r,5056,8),8),8));
L_1803fb154_2:;
/* 1803fb159: movaps xmm15, xmm10 */
L_1803fb159_0:;
L_1803fb159_1:;
wr(s->r,5568,4,rd(s->r,5248,4));
L_1803fb159_2:;
wr(s->r,5572,4,rd(s->r,5252,4));
L_1803fb159_3:;
wr(s->r,5576,4,rd(s->r,5256,4));
L_1803fb159_4:;
wr(s->r,5580,4,rd(s->r,5260,4));
L_1803fb159_5:;
/* 1803fb15d: mulsd xmm15, xmm10 */
L_1803fb15d_0:;
L_1803fb15d_1:;
wr(s->r,5568,8,fb(fv(rd(s->r,5568,8),8)*fv(rd(s->r,5248,8),8),8));
L_1803fb15d_2:;
/* 1803fb162: addsd xmm8, xmm12 */
L_1803fb162_0:;
L_1803fb162_1:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)+fv(rd(s->r,5376,8),8),8));
L_1803fb162_2:;
/* 1803fb167: mulsd xmm8, xmm0 */
L_1803fb167_0:;
L_1803fb167_1:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803fb167_2:;
/* 1803fb16c: movsd xmm7, qword ptr [rip + 0x4132f4] */
L_1803fb16c_0:;
L_1803fb16c_1:;
wr(s->r,5056,8,mr(UINT64_C(0x18080e468),8));
L_1803fb16c_2:;
wr(s->r,5064,8,((U)UINT64_C(0x0)));
L_1803fb16c_3:;
/* 1803fb174: addsd xmm9, xmm13 */
L_1803fb174_0:;
L_1803fb174_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)+fv(rd(s->r,5440,8),8),8));
L_1803fb174_2:;
/* 1803fb179: mulsd xmm9, xmm0 */
L_1803fb179_0:;
L_1803fb179_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803fb179_2:;
/* 1803fb17e: addsd xmm12, xmm1 */
L_1803fb17e_0:;
L_1803fb17e_1:;
wr(s->r,5376,8,fb(fv(rd(s->r,5376,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803fb17e_2:;
/* 1803fb183: mulsd xmm12, xmm5 */
L_1803fb183_0:;
L_1803fb183_1:;
wr(s->r,5376,8,fb(fv(rd(s->r,5376,8),8)*fv(rd(s->r,4928,8),8),8));
L_1803fb183_2:;
/* 1803fb188: movaps xmm5, xmm0 */
L_1803fb188_0:;
L_1803fb188_1:;
wr(s->r,4928,4,rd(s->r,4608,4));
L_1803fb188_2:;
wr(s->r,4932,4,rd(s->r,4612,4));
L_1803fb188_3:;
wr(s->r,4936,4,rd(s->r,4616,4));
L_1803fb188_4:;
wr(s->r,4940,4,rd(s->r,4620,4));
L_1803fb188_5:;
/* 1803fb18b: movaps xmm2, xmm12 */
L_1803fb18b_0:;
L_1803fb18b_1:;
wr(s->r,4736,4,rd(s->r,5376,4));
L_1803fb18b_2:;
wr(s->r,4740,4,rd(s->r,5380,4));
L_1803fb18b_3:;
wr(s->r,4744,4,rd(s->r,5384,4));
L_1803fb18b_4:;
wr(s->r,4748,4,rd(s->r,5388,4));
L_1803fb18b_5:;
/* 1803fb18f: addsd xmm13, xmm1 */
L_1803fb18f_0:;
L_1803fb18f_1:;
wr(s->r,5440,8,fb(fv(rd(s->r,5440,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803fb18f_2:;
/* 1803fb194: mulsd xmm13, xmm4 */
L_1803fb194_0:;
L_1803fb194_1:;
wr(s->r,5440,8,fb(fv(rd(s->r,5440,8),8)*fv(rd(s->r,4864,8),8),8));
L_1803fb194_2:;
/* 1803fb199: movaps xmm4, xmm0 */
L_1803fb199_0:;
L_1803fb199_1:;
wr(s->r,4864,4,rd(s->r,4608,4));
L_1803fb199_2:;
wr(s->r,4868,4,rd(s->r,4612,4));
L_1803fb199_3:;
wr(s->r,4872,4,rd(s->r,4616,4));
L_1803fb199_4:;
wr(s->r,4876,4,rd(s->r,4620,4));
L_1803fb199_5:;
/* 1803fb19c: movaps xmm3, xmm13 */
L_1803fb19c_0:;
L_1803fb19c_1:;
wr(s->r,4800,4,rd(s->r,5440,4));
L_1803fb19c_2:;
wr(s->r,4804,4,rd(s->r,5444,4));
L_1803fb19c_3:;
wr(s->r,4808,4,rd(s->r,5448,4));
L_1803fb19c_4:;
wr(s->r,4812,4,rd(s->r,5452,4));
L_1803fb19c_5:;
/* 1803fb1a0: addsd xmm2, xmm8 */
L_1803fb1a0_0:;
L_1803fb1a0_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)+fv(rd(s->r,5120,8),8),8));
L_1803fb1a0_2:;
/* 1803fb1a5: addsd xmm6, xmm14 */
L_1803fb1a5_0:;
L_1803fb1a5_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)+fv(rd(s->r,5504,8),8),8));
L_1803fb1a5_2:;
/* 1803fb1aa: mulsd xmm4, xmm6 */
L_1803fb1aa_0:;
L_1803fb1aa_1:;
wr(s->r,4864,8,fb(fv(rd(s->r,4864,8),8)*fv(rd(s->r,4992,8),8),8));
L_1803fb1aa_2:;
return UINT64_C(0x1803fb1ae);
}
uint64_t b_1803fb134(CPU*s){
/* 1803fb134: movsd xmm9, qword ptr [rip + 0x41332b] */
L_1803fb134_0:;
L_1803fb134_1:;
wr(s->r,5184,8,mr(UINT64_C(0x18080e468),8));
L_1803fb134_2:;
wr(s->r,5192,8,((U)UINT64_C(0x0)));
L_1803fb134_3:;
/* 1803fb13d: subsd xmm11, xmm8 */
L_1803fb13d_0:;
L_1803fb13d_1:;
wr(s->r,5312,8,fb(fv(rd(s->r,5312,8),8)-fv(rd(s->r,5120,8),8),8));
L_1803fb13d_2:;
/* 1803fb142: movaps xmm14, xmm11 */
L_1803fb142_0:;
L_1803fb142_1:;
wr(s->r,5504,4,rd(s->r,5312,4));
L_1803fb142_2:;
wr(s->r,5508,4,rd(s->r,5316,4));
L_1803fb142_3:;
wr(s->r,5512,4,rd(s->r,5320,4));
L_1803fb142_4:;
wr(s->r,5516,4,rd(s->r,5324,4));
L_1803fb142_5:;
/* 1803fb146: mulsd xmm14, xmm11 */
L_1803fb146_0:;
L_1803fb146_1:;
wr(s->r,5504,8,fb(fv(rd(s->r,5504,8),8)*fv(rd(s->r,5312,8),8),8));
L_1803fb146_2:;
/* 1803fb14b: movsd xmm8, qword ptr [rip + 0x413314] */
L_1803fb14b_0:;
L_1803fb14b_1:;
wr(s->r,5120,8,mr(UINT64_C(0x18080e468),8));
L_1803fb14b_2:;
wr(s->r,5128,8,((U)UINT64_C(0x0)));
L_1803fb14b_3:;
/* 1803fb154: subsd xmm10, xmm7 */
L_1803fb154_0:;
L_1803fb154_1:;
wr(s->r,5248,8,fb(fv(rd(s->r,5248,8),8)-fv(rd(s->r,5056,8),8),8));
L_1803fb154_2:;
/* 1803fb159: movaps xmm15, xmm10 */
L_1803fb159_0:;
L_1803fb159_1:;
wr(s->r,5568,4,rd(s->r,5248,4));
L_1803fb159_2:;
wr(s->r,5572,4,rd(s->r,5252,4));
L_1803fb159_3:;
wr(s->r,5576,4,rd(s->r,5256,4));
L_1803fb159_4:;
wr(s->r,5580,4,rd(s->r,5260,4));
L_1803fb159_5:;
/* 1803fb15d: mulsd xmm15, xmm10 */
L_1803fb15d_0:;
L_1803fb15d_1:;
wr(s->r,5568,8,fb(fv(rd(s->r,5568,8),8)*fv(rd(s->r,5248,8),8),8));
L_1803fb15d_2:;
/* 1803fb162: addsd xmm8, xmm12 */
L_1803fb162_0:;
L_1803fb162_1:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)+fv(rd(s->r,5376,8),8),8));
L_1803fb162_2:;
/* 1803fb167: mulsd xmm8, xmm0 */
L_1803fb167_0:;
L_1803fb167_1:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803fb167_2:;
/* 1803fb16c: movsd xmm7, qword ptr [rip + 0x4132f4] */
L_1803fb16c_0:;
L_1803fb16c_1:;
wr(s->r,5056,8,mr(UINT64_C(0x18080e468),8));
L_1803fb16c_2:;
wr(s->r,5064,8,((U)UINT64_C(0x0)));
L_1803fb16c_3:;
/* 1803fb174: addsd xmm9, xmm13 */
L_1803fb174_0:;
L_1803fb174_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)+fv(rd(s->r,5440,8),8),8));
L_1803fb174_2:;
/* 1803fb179: mulsd xmm9, xmm0 */
L_1803fb179_0:;
L_1803fb179_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803fb179_2:;
/* 1803fb17e: addsd xmm12, xmm1 */
L_1803fb17e_0:;
L_1803fb17e_1:;
wr(s->r,5376,8,fb(fv(rd(s->r,5376,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803fb17e_2:;
/* 1803fb183: mulsd xmm12, xmm5 */
L_1803fb183_0:;
L_1803fb183_1:;
wr(s->r,5376,8,fb(fv(rd(s->r,5376,8),8)*fv(rd(s->r,4928,8),8),8));
L_1803fb183_2:;
/* 1803fb188: movaps xmm5, xmm0 */
L_1803fb188_0:;
L_1803fb188_1:;
wr(s->r,4928,4,rd(s->r,4608,4));
L_1803fb188_2:;
wr(s->r,4932,4,rd(s->r,4612,4));
L_1803fb188_3:;
wr(s->r,4936,4,rd(s->r,4616,4));
L_1803fb188_4:;
wr(s->r,4940,4,rd(s->r,4620,4));
L_1803fb188_5:;
/* 1803fb18b: movaps xmm2, xmm12 */
L_1803fb18b_0:;
L_1803fb18b_1:;
wr(s->r,4736,4,rd(s->r,5376,4));
L_1803fb18b_2:;
wr(s->r,4740,4,rd(s->r,5380,4));
L_1803fb18b_3:;
wr(s->r,4744,4,rd(s->r,5384,4));
L_1803fb18b_4:;
wr(s->r,4748,4,rd(s->r,5388,4));
L_1803fb18b_5:;
/* 1803fb18f: addsd xmm13, xmm1 */
L_1803fb18f_0:;
L_1803fb18f_1:;
wr(s->r,5440,8,fb(fv(rd(s->r,5440,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803fb18f_2:;
/* 1803fb194: mulsd xmm13, xmm4 */
L_1803fb194_0:;
L_1803fb194_1:;
wr(s->r,5440,8,fb(fv(rd(s->r,5440,8),8)*fv(rd(s->r,4864,8),8),8));
L_1803fb194_2:;
/* 1803fb199: movaps xmm4, xmm0 */
L_1803fb199_0:;
L_1803fb199_1:;
wr(s->r,4864,4,rd(s->r,4608,4));
L_1803fb199_2:;
wr(s->r,4868,4,rd(s->r,4612,4));
L_1803fb199_3:;
wr(s->r,4872,4,rd(s->r,4616,4));
L_1803fb199_4:;
wr(s->r,4876,4,rd(s->r,4620,4));
L_1803fb199_5:;
/* 1803fb19c: movaps xmm3, xmm13 */
L_1803fb19c_0:;
L_1803fb19c_1:;
wr(s->r,4800,4,rd(s->r,5440,4));
L_1803fb19c_2:;
wr(s->r,4804,4,rd(s->r,5444,4));
L_1803fb19c_3:;
wr(s->r,4808,4,rd(s->r,5448,4));
L_1803fb19c_4:;
wr(s->r,4812,4,rd(s->r,5452,4));
L_1803fb19c_5:;
/* 1803fb1a0: addsd xmm2, xmm8 */
L_1803fb1a0_0:;
L_1803fb1a0_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)+fv(rd(s->r,5120,8),8),8));
L_1803fb1a0_2:;
/* 1803fb1a5: addsd xmm6, xmm14 */
L_1803fb1a5_0:;
L_1803fb1a5_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)+fv(rd(s->r,5504,8),8),8));
L_1803fb1a5_2:;
/* 1803fb1aa: mulsd xmm4, xmm6 */
L_1803fb1aa_0:;
L_1803fb1aa_1:;
wr(s->r,4864,8,fb(fv(rd(s->r,4864,8),8)*fv(rd(s->r,4992,8),8),8));
L_1803fb1aa_2:;
/* 1803fb1ae: mulsd xmm6, xmm0 */
L_1803fb1ae_0:;
L_1803fb1ae_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803fb1ae_2:;
/* 1803fb1b2: addsd xmm3, xmm9 */
L_1803fb1b2_0:;
L_1803fb1b2_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->r,5184,8),8),8));
L_1803fb1b2_2:;
/* 1803fb1b7: addsd xmm7, xmm15 */
L_1803fb1b7_0:;
L_1803fb1b7_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)+fv(rd(s->r,5568,8),8),8));
L_1803fb1b7_2:;
/* 1803fb1bc: mulsd xmm5, xmm7 */
L_1803fb1bc_0:;
L_1803fb1bc_1:;
wr(s->r,4928,8,fb(fv(rd(s->r,4928,8),8)*fv(rd(s->r,5056,8),8),8));
L_1803fb1bc_2:;
/* 1803fb1c0: mulsd xmm7, xmm0 */
L_1803fb1c0_0:;
L_1803fb1c0_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803fb1c0_2:;
/* 1803fb1c4: addsd xmm14, xmm1 */
L_1803fb1c4_0:;
L_1803fb1c4_1:;
wr(s->r,5504,8,fb(fv(rd(s->r,5504,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803fb1c4_2:;
/* 1803fb1c9: mulsd xmm14, xmm11 */
L_1803fb1c9_0:;
L_1803fb1c9_1:;
wr(s->r,5504,8,fb(fv(rd(s->r,5504,8),8)*fv(rd(s->r,5312,8),8),8));
L_1803fb1c9_2:;
/* 1803fb1ce: addsd xmm15, xmm1 */
L_1803fb1ce_0:;
L_1803fb1ce_1:;
wr(s->r,5568,8,fb(fv(rd(s->r,5568,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803fb1ce_2:;
return UINT64_C(0x1803fb1d3);
}
uint64_t b_1803fb1ae(CPU*s){
/* 1803fb1ae: mulsd xmm6, xmm0 */
L_1803fb1ae_0:;
L_1803fb1ae_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803fb1ae_2:;
/* 1803fb1b2: addsd xmm3, xmm9 */
L_1803fb1b2_0:;
L_1803fb1b2_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->r,5184,8),8),8));
L_1803fb1b2_2:;
/* 1803fb1b7: addsd xmm7, xmm15 */
L_1803fb1b7_0:;
L_1803fb1b7_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)+fv(rd(s->r,5568,8),8),8));
L_1803fb1b7_2:;
/* 1803fb1bc: mulsd xmm5, xmm7 */
L_1803fb1bc_0:;
L_1803fb1bc_1:;
wr(s->r,4928,8,fb(fv(rd(s->r,4928,8),8)*fv(rd(s->r,5056,8),8),8));
L_1803fb1bc_2:;
/* 1803fb1c0: mulsd xmm7, xmm0 */
L_1803fb1c0_0:;
L_1803fb1c0_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803fb1c0_2:;
/* 1803fb1c4: addsd xmm14, xmm1 */
L_1803fb1c4_0:;
L_1803fb1c4_1:;
wr(s->r,5504,8,fb(fv(rd(s->r,5504,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803fb1c4_2:;
/* 1803fb1c9: mulsd xmm14, xmm11 */
L_1803fb1c9_0:;
L_1803fb1c9_1:;
wr(s->r,5504,8,fb(fv(rd(s->r,5504,8),8)*fv(rd(s->r,5312,8),8),8));
L_1803fb1c9_2:;
/* 1803fb1ce: addsd xmm15, xmm1 */
L_1803fb1ce_0:;
L_1803fb1ce_1:;
wr(s->r,5568,8,fb(fv(rd(s->r,5568,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803fb1ce_2:;
/* 1803fb1d3: mulsd xmm15, xmm10 */
L_1803fb1d3_0:;
L_1803fb1d3_1:;
wr(s->r,5568,8,fb(fv(rd(s->r,5568,8),8)*fv(rd(s->r,5248,8),8),8));
L_1803fb1d3_2:;
/* 1803fb1d8: addsd xmm4, xmm14 */
L_1803fb1d8_0:;
L_1803fb1d8_1:;
wr(s->r,4864,8,fb(fv(rd(s->r,4864,8),8)+fv(rd(s->r,5504,8),8),8));
L_1803fb1d8_2:;
/* 1803fb1dd: movsd xmm10, qword ptr [rip + 0x4132a2] */
L_1803fb1dd_0:;
L_1803fb1dd_1:;
wr(s->r,5248,8,mr(UINT64_C(0x18080e488),8));
L_1803fb1dd_2:;
wr(s->r,5256,8,((U)UINT64_C(0x0)));
L_1803fb1dd_3:;
/* 1803fb1e6: addsd xmm5, xmm15 */
L_1803fb1e6_0:;
L_1803fb1e6_1:;
wr(s->r,4928,8,fb(fv(rd(s->r,4928,8),8)+fv(rd(s->r,5568,8),8),8));
L_1803fb1e6_2:;
/* 1803fb1eb: subsd xmm8, xmm12 */
L_1803fb1eb_0:;
L_1803fb1eb_1:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)-fv(rd(s->r,5376,8),8),8));
L_1803fb1eb_2:;
/* 1803fb1f0: movaps xmm12, xmm8 */
L_1803fb1f0_0:;
L_1803fb1f0_1:;
wr(s->r,5376,4,rd(s->r,5120,4));
L_1803fb1f0_2:;
wr(s->r,5380,4,rd(s->r,5124,4));
L_1803fb1f0_3:;
wr(s->r,5384,4,rd(s->r,5128,4));
L_1803fb1f0_4:;
wr(s->r,5388,4,rd(s->r,5132,4));
L_1803fb1f0_5:;
/* 1803fb1f4: subsd xmm9, xmm13 */
L_1803fb1f4_0:;
L_1803fb1f4_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)-fv(rd(s->r,5440,8),8),8));
L_1803fb1f4_2:;
/* 1803fb1f9: mulsd xmm12, xmm9 */
L_1803fb1f9_0:;
L_1803fb1f9_1:;
wr(s->r,5376,8,fb(fv(rd(s->r,5376,8),8)*fv(rd(s->r,5184,8),8),8));
L_1803fb1f9_2:;
/* 1803fb1fe: movaps xmm13, xmm12 */
L_1803fb1fe_0:;
L_1803fb1fe_1:;
wr(s->r,5440,4,rd(s->r,5376,4));
L_1803fb1fe_2:;
wr(s->r,5444,4,rd(s->r,5380,4));
L_1803fb1fe_3:;
wr(s->r,5448,4,rd(s->r,5384,4));
L_1803fb1fe_4:;
wr(s->r,5452,4,rd(s->r,5388,4));
L_1803fb1fe_5:;
/* 1803fb202: subsd xmm6, xmm14 */
L_1803fb202_0:;
L_1803fb202_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)-fv(rd(s->r,5504,8),8),8));
L_1803fb202_2:;
/* 1803fb207: movaps xmm11, xmm6 */
L_1803fb207_0:;
L_1803fb207_1:;
wr(s->r,5312,4,rd(s->r,4992,4));
L_1803fb207_2:;
wr(s->r,5316,4,rd(s->r,4996,4));
L_1803fb207_3:;
wr(s->r,5320,4,rd(s->r,5000,4));
L_1803fb207_4:;
wr(s->r,5324,4,rd(s->r,5004,4));
L_1803fb207_5:;
/* 1803fb20b: subsd xmm7, xmm15 */
L_1803fb20b_0:;
L_1803fb20b_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)-fv(rd(s->r,5568,8),8),8));
L_1803fb20b_2:;
/* 1803fb210: mulsd xmm11, xmm7 */
L_1803fb210_0:;
L_1803fb210_1:;
wr(s->r,5312,8,fb(fv(rd(s->r,5312,8),8)*fv(rd(s->r,5056,8),8),8));
L_1803fb210_2:;
/* 1803fb215: mulsd xmm13, xmm11 */
L_1803fb215_0:;
L_1803fb215_1:;
wr(s->r,5440,8,fb(fv(rd(s->r,5440,8),8)*fv(rd(s->r,5312,8),8),8));
L_1803fb215_2:;
/* 1803fb21a: divsd xmm10, xmm13 */
L_1803fb21a_0:;
L_1803fb21a_1:;
wr(s->r,5248,8,fb(fv(rd(s->r,5248,8),8)/fv(rd(s->r,5440,8),8),8));
L_1803fb21a_2:;
/* 1803fb21f: js 0x1803fb3a7 */
L_1803fb21f_0:;
L_1803fb21f_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803fb3a7);}
L_1803fb21f_2:;
return UINT64_C(0x1803fb225);
}
uint64_t b_1803fb1d3(CPU*s){
/* 1803fb1d3: mulsd xmm15, xmm10 */
L_1803fb1d3_0:;
L_1803fb1d3_1:;
wr(s->r,5568,8,fb(fv(rd(s->r,5568,8),8)*fv(rd(s->r,5248,8),8),8));
L_1803fb1d3_2:;
/* 1803fb1d8: addsd xmm4, xmm14 */
L_1803fb1d8_0:;
L_1803fb1d8_1:;
wr(s->r,4864,8,fb(fv(rd(s->r,4864,8),8)+fv(rd(s->r,5504,8),8),8));
L_1803fb1d8_2:;
/* 1803fb1dd: movsd xmm10, qword ptr [rip + 0x4132a2] */
L_1803fb1dd_0:;
L_1803fb1dd_1:;
wr(s->r,5248,8,mr(UINT64_C(0x18080e488),8));
L_1803fb1dd_2:;
wr(s->r,5256,8,((U)UINT64_C(0x0)));
L_1803fb1dd_3:;
/* 1803fb1e6: addsd xmm5, xmm15 */
L_1803fb1e6_0:;
L_1803fb1e6_1:;
wr(s->r,4928,8,fb(fv(rd(s->r,4928,8),8)+fv(rd(s->r,5568,8),8),8));
L_1803fb1e6_2:;
/* 1803fb1eb: subsd xmm8, xmm12 */
L_1803fb1eb_0:;
L_1803fb1eb_1:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)-fv(rd(s->r,5376,8),8),8));
L_1803fb1eb_2:;
/* 1803fb1f0: movaps xmm12, xmm8 */
L_1803fb1f0_0:;
L_1803fb1f0_1:;
wr(s->r,5376,4,rd(s->r,5120,4));
L_1803fb1f0_2:;
wr(s->r,5380,4,rd(s->r,5124,4));
L_1803fb1f0_3:;
wr(s->r,5384,4,rd(s->r,5128,4));
L_1803fb1f0_4:;
wr(s->r,5388,4,rd(s->r,5132,4));
L_1803fb1f0_5:;
/* 1803fb1f4: subsd xmm9, xmm13 */
L_1803fb1f4_0:;
L_1803fb1f4_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)-fv(rd(s->r,5440,8),8),8));
L_1803fb1f4_2:;
/* 1803fb1f9: mulsd xmm12, xmm9 */
L_1803fb1f9_0:;
L_1803fb1f9_1:;
wr(s->r,5376,8,fb(fv(rd(s->r,5376,8),8)*fv(rd(s->r,5184,8),8),8));
L_1803fb1f9_2:;
/* 1803fb1fe: movaps xmm13, xmm12 */
L_1803fb1fe_0:;
L_1803fb1fe_1:;
wr(s->r,5440,4,rd(s->r,5376,4));
L_1803fb1fe_2:;
wr(s->r,5444,4,rd(s->r,5380,4));
L_1803fb1fe_3:;
wr(s->r,5448,4,rd(s->r,5384,4));
L_1803fb1fe_4:;
wr(s->r,5452,4,rd(s->r,5388,4));
L_1803fb1fe_5:;
/* 1803fb202: subsd xmm6, xmm14 */
L_1803fb202_0:;
L_1803fb202_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)-fv(rd(s->r,5504,8),8),8));
L_1803fb202_2:;
/* 1803fb207: movaps xmm11, xmm6 */
L_1803fb207_0:;
L_1803fb207_1:;
wr(s->r,5312,4,rd(s->r,4992,4));
L_1803fb207_2:;
wr(s->r,5316,4,rd(s->r,4996,4));
L_1803fb207_3:;
wr(s->r,5320,4,rd(s->r,5000,4));
L_1803fb207_4:;
wr(s->r,5324,4,rd(s->r,5004,4));
L_1803fb207_5:;
/* 1803fb20b: subsd xmm7, xmm15 */
L_1803fb20b_0:;
L_1803fb20b_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)-fv(rd(s->r,5568,8),8),8));
L_1803fb20b_2:;
/* 1803fb210: mulsd xmm11, xmm7 */
L_1803fb210_0:;
L_1803fb210_1:;
wr(s->r,5312,8,fb(fv(rd(s->r,5312,8),8)*fv(rd(s->r,5056,8),8),8));
L_1803fb210_2:;
/* 1803fb215: mulsd xmm13, xmm11 */
L_1803fb215_0:;
L_1803fb215_1:;
wr(s->r,5440,8,fb(fv(rd(s->r,5440,8),8)*fv(rd(s->r,5312,8),8),8));
L_1803fb215_2:;
/* 1803fb21a: divsd xmm10, xmm13 */
L_1803fb21a_0:;
L_1803fb21a_1:;
wr(s->r,5248,8,fb(fv(rd(s->r,5248,8),8)/fv(rd(s->r,5440,8),8),8));
L_1803fb21a_2:;
/* 1803fb21f: js 0x1803fb3a7 */
L_1803fb21f_0:;
L_1803fb21f_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803fb3a7);}
L_1803fb21f_2:;
return UINT64_C(0x1803fb225);
}
uint64_t b_1803fb225(CPU*s){
/* 1803fb225: mov rax, qword ptr [rsp + 0x1e8] */
L_1803fb225_0:;
L_1803fb225_1:;
wr(s->u,24,8,(((U)UINT64_C(0x1e8))+rd(s->r,32,8)));
L_1803fb225_2:;
wr(s->u,48,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803fb225_3:;
wr(s->r,0,8,rd(s->u,48,8));
L_1803fb225_4:;
/* 1803fb22d: movss xmm14, dword ptr [rsp + 0x170] */
L_1803fb22d_0:;
L_1803fb22d_1:;
wr(s->u,24,8,(((U)UINT64_C(0x170))+rd(s->r,32,8)));
L_1803fb22d_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803fb22d_3:;
wr(s->r,5504,4,rd(s->u,32,4));
L_1803fb22d_4:;
wr(s->r,5508,4,((U)UINT64_C(0x0)));
L_1803fb22d_5:;
wr(s->r,5512,4,((U)UINT64_C(0x0)));
L_1803fb22d_6:;
wr(s->r,5516,4,((U)UINT64_C(0x0)));
L_1803fb22d_7:;
/* 1803fb237: mov dword ptr [rsp + 0xd8], edi */
L_1803fb237_0:;
L_1803fb237_1:;
wr(s->u,24,8,(((U)UINT64_C(0xd8))+rd(s->r,32,8)));
L_1803fb237_2:;
wr(s->u,32,4,rd(s->r,56,4));
L_1803fb237_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803fb237_4:;
/* 1803fb23e: mov qword ptr [rsp + 0x118], r8 */
L_1803fb23e_0:;
L_1803fb23e_1:;
wr(s->u,24,8,(((U)UINT64_C(0x118))+rd(s->r,32,8)));
L_1803fb23e_2:;
wr(s->u,36,8,rd(s->r,128,8));
L_1803fb23e_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,36,8));
L_1803fb23e_4:;
/* 1803fb246: mov r8d, dword ptr [rsp + 0x168] */
L_1803fb246_0:;
L_1803fb246_1:;
wr(s->u,24,8,(((U)UINT64_C(0x168))+rd(s->r,32,8)));
L_1803fb246_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803fb246_3:;
wr(s->r,128,4,rd(s->u,44,4));
L_1803fb246_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fb246_5:;
/* 1803fb24e: mov dword ptr [rsp + 0xe0], r9d */
L_1803fb24e_0:;
L_1803fb24e_1:;
wr(s->u,24,8,(((U)UINT64_C(0xe0))+rd(s->r,32,8)));
L_1803fb24e_2:;
wr(s->u,32,4,rd(s->r,136,4));
L_1803fb24e_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803fb24e_4:;
/* 1803fb256: mov r9d, dword ptr [rip + 0x413a03] */
L_1803fb256_0:;
L_1803fb256_1:;
wr(s->r,136,4,mr(UINT64_C(0x18080ec60),4));
L_1803fb256_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fb256_3:;
/* 1803fb25d: mov dword ptr [rsp + 0xe8], r10d */
L_1803fb25d_0:;
L_1803fb25d_1:;
wr(s->u,24,8,(((U)UINT64_C(0xe8))+rd(s->r,32,8)));
L_1803fb25d_2:;
wr(s->u,32,4,rd(s->r,144,4));
L_1803fb25d_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803fb25d_4:;
/* 1803fb265: mov r10d, dword ptr [rsp + 0x160] */
L_1803fb265_0:;
L_1803fb265_1:;
wr(s->u,24,8,(((U)UINT64_C(0x160))+rd(s->r,32,8)));
L_1803fb265_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803fb265_3:;
wr(s->r,144,4,rd(s->u,44,4));
L_1803fb265_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fb265_5:;
/* 1803fb26d: mov dword ptr [rsp + 0xf0], r11d */
L_1803fb26d_0:;
L_1803fb26d_1:;
wr(s->u,24,8,(((U)UINT64_C(0xf0))+rd(s->r,32,8)));
L_1803fb26d_2:;
wr(s->u,32,4,rd(s->r,152,4));
L_1803fb26d_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803fb26d_4:;
/* 1803fb275: lea r14, [rax + rsi*4] */
L_1803fb275_0:;
L_1803fb275_1:;
wr(s->u,0,8,(rd(s->r,48,8)*((U)UINT64_C(0x4))));
L_1803fb275_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803fb275_3:;
wr(s->r,176,8,rd(s->u,8,8));
L_1803fb275_4:;
/* 1803fb279: mov qword ptr [rsp + 0x28], r14 */
L_1803fb279_0:;
L_1803fb279_1:;
wr(s->u,16,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fb279_2:;
wr(s->u,36,8,rd(s->r,176,8));
L_1803fb279_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,36,8));
L_1803fb279_4:;
/* 1803fb27e: mov r11, qword ptr [rsp + 0x28] */
L_1803fb27e_0:;
L_1803fb27e_1:;
wr(s->u,16,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fb27e_2:;
wr(s->u,48,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803fb27e_3:;
wr(s->r,152,8,rd(s->u,48,8));
L_1803fb27e_4:;
/* 1803fb283: mov dword ptr [rsp + 0xf8], r13d */
L_1803fb283_0:;
L_1803fb283_1:;
wr(s->u,24,8,(((U)UINT64_C(0xf8))+rd(s->r,32,8)));
L_1803fb283_2:;
wr(s->u,32,4,rd(s->r,168,4));
L_1803fb283_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803fb283_4:;
/* 1803fb28b: movsxd rax, ebx */
L_1803fb28b_0:;
L_1803fb28b_1:;
wr(s->r,0,8,(U)sx(rd(s->r,24,4),4));
L_1803fb28b_2:;
/* 1803fb28e: mov edi, 0x3f800000 */
L_1803fb28e_0:;
L_1803fb28e_1:;
wr(s->r,56,8,((U)UINT64_C(0x3f800000)));
L_1803fb28e_2:;
/* 1803fb293: add rax, 1 */
L_1803fb293_0:;
L_1803fb293_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fb293_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fb293_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fb293_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb293_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fb293_6:;
wr(s->u,57,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fb293_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803fb293_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803fb293_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803fb293_10:;
/* 1803fb297: movss xmm13, dword ptr [r11] */
L_1803fb297_0:;
L_1803fb297_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,152,8),4));
L_1803fb297_2:;
wr(s->r,5440,4,rd(s->u,32,4));
L_1803fb297_3:;
wr(s->r,5444,4,((U)UINT64_C(0x0)));
L_1803fb297_4:;
wr(s->r,5448,4,((U)UINT64_C(0x0)));
L_1803fb297_5:;
wr(s->r,5452,4,((U)UINT64_C(0x0)));
L_1803fb297_6:;
/* 1803fb29c: movss dword ptr [rsp + 0x21c], xmm13 */
L_1803fb29c_0:;
L_1803fb29c_1:;
wr(s->u,24,8,(((U)UINT64_C(0x21c))+rd(s->r,32,8)));
L_1803fb29c_2:;
wr(s->u,32,4,rd(s->r,5440,4));
L_1803fb29c_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803fb29c_4:;
/* 1803fb2a6: mov r15d, dword ptr [rsp + 0x21c] */
L_1803fb2a6_0:;
L_1803fb2a6_1:;
wr(s->u,24,8,(((U)UINT64_C(0x21c))+rd(s->r,32,8)));
L_1803fb2a6_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803fb2a6_3:;
wr(s->r,184,4,rd(s->u,44,4));
L_1803fb2a6_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803fb2a6_5:;
/* 1803fb2ae: mov r13d, r15d */
L_1803fb2ae_0:;
L_1803fb2ae_1:;
wr(s->r,168,4,rd(s->r,184,4));
L_1803fb2ae_2:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb2ae_3:;
/* 1803fb2b1: and r13d, 0x80000000 */
L_1803fb2b1_0:;
L_1803fb2b1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb2b1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb2b1_3:;
wr(s->r,168,4,(rd(s->r,168,4)&((U)UINT64_C(0x80000000))));
L_1803fb2b1_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb2b1_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb2b1_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fb2b1_7:;
wr(s->u,57,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fb2b1_8:;
wr(s->u,65,1,pop(rd(s->u,57,4),4));
L_1803fb2b1_9:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803fb2b1_10:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803fb2b1_11:;
/* 1803fb2b8: mov r14d, r15d */
L_1803fb2b8_0:;
L_1803fb2b8_1:;
wr(s->r,176,4,rd(s->r,184,4));
L_1803fb2b8_2:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb2b8_3:;
/* 1803fb2bb: and r14d, 0x7fffffff */
L_1803fb2bb_0:;
L_1803fb2bb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb2bb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb2bb_3:;
wr(s->r,176,4,(rd(s->r,176,4)&((U)UINT64_C(0x7fffffff))));
L_1803fb2bb_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb2bb_5:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb2bb_6:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803fb2bb_7:;
wr(s->u,57,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803fb2bb_8:;
wr(s->u,65,1,pop(rd(s->u,57,4),4));
L_1803fb2bb_9:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803fb2bb_10:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803fb2bb_11:;
/* 1803fb2c2: cmp r14d, 0x800000 */
L_1803fb2c2_0:;
L_1803fb2c2_1:;
wr(s->u,67,4,rd(s->r,176,4));
L_1803fb2c2_2:;
wr(s->r,512,1,(rd(s->u,67,4)<((U)UINT64_C(0x800000))));
L_1803fb2c2_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,67,4),((U)UINT64_C(0x800000)),4,1));
L_1803fb2c2_4:;
wr(s->u,71,4,(rd(s->u,67,4)-((U)UINT64_C(0x800000))));
L_1803fb2c2_5:;
wr(s->r,519,1,(sx(rd(s->u,71,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb2c2_6:;
wr(s->r,518,1,(rd(s->u,71,4)==((U)UINT64_C(0x0))));
L_1803fb2c2_7:;
wr(s->u,57,4,(rd(s->u,71,4)&((U)UINT64_C(0xff))));
L_1803fb2c2_8:;
wr(s->u,65,1,pop(rd(s->u,57,4),4));
L_1803fb2c2_9:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803fb2c2_10:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803fb2c2_11:;
/* 1803fb2c9: jae 0x1803fb2d0 */
L_1803fb2c9_0:;
L_1803fb2c9_1:;
wr(s->u,56,1,(!rd(s->r,512,1)));
L_1803fb2c9_2:;
if(rd(s->u,56,1)){return UINT64_C(0x1803fb2d0);}
L_1803fb2c9_3:;
return UINT64_C(0x1803fb2cb);
}
uint64_t b_1803fb297(CPU*s){
/* 1803fb297: movss xmm13, dword ptr [r11] */
L_1803fb297_0:;
L_1803fb297_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,152,8),4));
L_1803fb297_2:;
wr(s->r,5440,4,rd(s->u,8,4));
L_1803fb297_3:;
wr(s->r,5444,4,((U)UINT64_C(0x0)));
L_1803fb297_4:;
wr(s->r,5448,4,((U)UINT64_C(0x0)));
L_1803fb297_5:;
wr(s->r,5452,4,((U)UINT64_C(0x0)));
L_1803fb297_6:;
/* 1803fb29c: movss dword ptr [rsp + 0x21c], xmm13 */
L_1803fb29c_0:;
L_1803fb29c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x21c))+rd(s->r,32,8)));
L_1803fb29c_2:;
wr(s->u,8,4,rd(s->r,5440,4));
L_1803fb29c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fb29c_4:;
/* 1803fb2a6: mov r15d, dword ptr [rsp + 0x21c] */
L_1803fb2a6_0:;
L_1803fb2a6_1:;
wr(s->u,0,8,(((U)UINT64_C(0x21c))+rd(s->r,32,8)));
L_1803fb2a6_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb2a6_3:;
wr(s->r,184,4,rd(s->u,12,4));
L_1803fb2a6_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803fb2a6_5:;
/* 1803fb2ae: mov r13d, r15d */
L_1803fb2ae_0:;
L_1803fb2ae_1:;
wr(s->r,168,4,rd(s->r,184,4));
L_1803fb2ae_2:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb2ae_3:;
/* 1803fb2b1: and r13d, 0x80000000 */
L_1803fb2b1_0:;
L_1803fb2b1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb2b1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb2b1_3:;
wr(s->r,168,4,(rd(s->r,168,4)&((U)UINT64_C(0x80000000))));
L_1803fb2b1_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb2b1_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb2b1_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fb2b1_7:;
wr(s->u,17,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fb2b1_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fb2b1_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb2b1_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb2b1_11:;
/* 1803fb2b8: mov r14d, r15d */
L_1803fb2b8_0:;
L_1803fb2b8_1:;
wr(s->r,176,4,rd(s->r,184,4));
L_1803fb2b8_2:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb2b8_3:;
/* 1803fb2bb: and r14d, 0x7fffffff */
L_1803fb2bb_0:;
L_1803fb2bb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb2bb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb2bb_3:;
wr(s->r,176,4,(rd(s->r,176,4)&((U)UINT64_C(0x7fffffff))));
L_1803fb2bb_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb2bb_5:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb2bb_6:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803fb2bb_7:;
wr(s->u,17,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803fb2bb_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fb2bb_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb2bb_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb2bb_11:;
/* 1803fb2c2: cmp r14d, 0x800000 */
L_1803fb2c2_0:;
L_1803fb2c2_1:;
wr(s->u,23,4,rd(s->r,176,4));
L_1803fb2c2_2:;
wr(s->r,512,1,(rd(s->u,23,4)<((U)UINT64_C(0x800000))));
L_1803fb2c2_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,23,4),((U)UINT64_C(0x800000)),4,1));
L_1803fb2c2_4:;
wr(s->u,27,4,(rd(s->u,23,4)-((U)UINT64_C(0x800000))));
L_1803fb2c2_5:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb2c2_6:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803fb2c2_7:;
wr(s->u,17,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803fb2c2_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fb2c2_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb2c2_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb2c2_11:;
/* 1803fb2c9: jae 0x1803fb2d0 */
L_1803fb2c9_0:;
L_1803fb2c9_1:;
wr(s->u,16,1,(!rd(s->r,512,1)));
L_1803fb2c9_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803fb2d0);}
L_1803fb2c9_3:;
return UINT64_C(0x1803fb2cb);
}
uint64_t b_1803fb2cb(CPU*s){
/* 1803fb2cb: mov dword ptr [r11], edi */
L_1803fb2cb_0:;
L_1803fb2cb_1:;
wr(s->u,0,4,rd(s->r,56,4));
L_1803fb2cb_2:;
mw((uint64_t)rd(s->r,152,8),4,rd(s->u,0,4));
L_1803fb2cb_3:;
/* 1803fb2ce: jmp 0x1803fb31b */
L_1803fb2ce_0:;
L_1803fb2ce_1:;
return UINT64_C(0x1803fb31b);
L_1803fb2ce_2:;
return UINT64_C(0x1803fb2d0);
}
uint64_t b_1803fb2d0(CPU*s){
/* 1803fb2d0: test r13d, r13d */
L_1803fb2d0_0:;
L_1803fb2d0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb2d0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb2d0_3:;
wr(s->u,6,4,(rd(s->r,168,4)&rd(s->r,168,4)));
L_1803fb2d0_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb2d0_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803fb2d0_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803fb2d0_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fb2d0_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fb2d0_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fb2d0_10:;
/* 1803fb2d3: je 0x1803fb2f8 */
L_1803fb2d3_0:;
L_1803fb2d3_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fb2f8);}
L_1803fb2d3_2:;
return UINT64_C(0x1803fb2d5);
}
uint64_t b_1803fb2d5(CPU*s){
/* 1803fb2d5: cmp r15d, 0xc2aeac50 */
L_1803fb2d5_0:;
L_1803fb2d5_1:;
wr(s->u,6,4,rd(s->r,184,4));
L_1803fb2d5_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0xc2aeac50))));
L_1803fb2d5_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0xc2aeac50)),4,1));
L_1803fb2d5_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0xc2aeac50))));
L_1803fb2d5_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb2d5_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fb2d5_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fb2d5_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fb2d5_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fb2d5_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fb2d5_11:;
/* 1803fb2dc: jb 0x1803fb332 */
L_1803fb2dc_0:;
L_1803fb2dc_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fb332);}
L_1803fb2dc_2:;
return UINT64_C(0x1803fb2de);
}
uint64_t b_1803fb2de(CPU*s){
/* 1803fb2de: and r15d, 0x7fc00000 */
L_1803fb2de_0:;
L_1803fb2de_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb2de_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb2de_3:;
wr(s->r,184,4,(rd(s->r,184,4)&((U)UINT64_C(0x7fc00000))));
L_1803fb2de_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803fb2de_5:;
wr(s->r,519,1,(sx(rd(s->r,184,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb2de_6:;
wr(s->r,518,1,(rd(s->r,184,4)==((U)UINT64_C(0x0))));
L_1803fb2de_7:;
wr(s->u,1,4,(rd(s->r,184,4)&((U)UINT64_C(0xff))));
L_1803fb2de_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fb2de_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fb2de_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fb2de_11:;
/* 1803fb2e5: cmp r15d, 0x7fc00000 */
L_1803fb2e5_0:;
L_1803fb2e5_1:;
wr(s->u,7,4,rd(s->r,184,4));
L_1803fb2e5_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x7fc00000))));
L_1803fb2e5_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803fb2e5_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x7fc00000))));
L_1803fb2e5_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb2e5_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fb2e5_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fb2e5_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fb2e5_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fb2e5_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fb2e5_11:;
/* 1803fb2ec: jne 0x1803fb2f3 */
L_1803fb2ec_0:;
L_1803fb2ec_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fb2ec_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fb2f3);}
L_1803fb2ec_3:;
return UINT64_C(0x1803fb2ee);
}
uint64_t b_1803fb2ee(CPU*s){
/* 1803fb2ee: mov dword ptr [r11], r9d */
L_1803fb2ee_0:;
L_1803fb2ee_1:;
wr(s->u,0,4,rd(s->r,136,4));
L_1803fb2ee_2:;
mw((uint64_t)rd(s->r,152,8),4,rd(s->u,0,4));
L_1803fb2ee_3:;
/* 1803fb2f1: jmp 0x1803fb31b */
L_1803fb2f1_0:;
L_1803fb2f1_1:;
return UINT64_C(0x1803fb31b);
L_1803fb2f1_2:;
return UINT64_C(0x1803fb2f3);
}
uint64_t b_1803fb2f3(CPU*s){
/* 1803fb2f3: mov dword ptr [r11], r8d */
L_1803fb2f3_0:;
L_1803fb2f3_1:;
wr(s->u,0,4,rd(s->r,128,4));
L_1803fb2f3_2:;
mw((uint64_t)rd(s->r,152,8),4,rd(s->u,0,4));
L_1803fb2f3_3:;
/* 1803fb2f6: jmp 0x1803fb31b */
L_1803fb2f6_0:;
L_1803fb2f6_1:;
return UINT64_C(0x1803fb31b);
L_1803fb2f6_2:;
return UINT64_C(0x1803fb2f8);
}
uint64_t b_1803fb2f8(CPU*s){
/* 1803fb2f8: cmp r15d, 0x42b17218 */
L_1803fb2f8_0:;
L_1803fb2f8_1:;
wr(s->u,6,4,rd(s->r,184,4));
L_1803fb2f8_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x42b17218))));
L_1803fb2f8_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x42b17218)),4,1));
L_1803fb2f8_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x42b17218))));
L_1803fb2f8_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb2f8_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fb2f8_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fb2f8_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fb2f8_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fb2f8_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fb2f8_11:;
/* 1803fb2ff: jb 0x1803fb332 */
L_1803fb2ff_0:;
L_1803fb2ff_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fb332);}
L_1803fb2ff_2:;
return UINT64_C(0x1803fb301);
}
uint64_t b_1803fb301(CPU*s){
/* 1803fb301: and r15d, 0x7fc00000 */
L_1803fb301_0:;
L_1803fb301_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb301_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb301_3:;
wr(s->r,184,4,(rd(s->r,184,4)&((U)UINT64_C(0x7fc00000))));
L_1803fb301_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803fb301_5:;
wr(s->r,519,1,(sx(rd(s->r,184,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb301_6:;
wr(s->r,518,1,(rd(s->r,184,4)==((U)UINT64_C(0x0))));
L_1803fb301_7:;
wr(s->u,1,4,(rd(s->r,184,4)&((U)UINT64_C(0xff))));
L_1803fb301_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fb301_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fb301_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fb301_11:;
/* 1803fb308: cmp r15d, 0x7fc00000 */
L_1803fb308_0:;
L_1803fb308_1:;
wr(s->u,7,4,rd(s->r,184,4));
L_1803fb308_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x7fc00000))));
L_1803fb308_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803fb308_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x7fc00000))));
L_1803fb308_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb308_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fb308_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fb308_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fb308_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fb308_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fb308_11:;
/* 1803fb30f: jne 0x1803fb318 */
L_1803fb30f_0:;
L_1803fb30f_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fb30f_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fb318);}
L_1803fb30f_3:;
return UINT64_C(0x1803fb311);
}
uint64_t b_1803fb311(CPU*s){
/* 1803fb311: movss dword ptr [r11], xmm14 */
L_1803fb311_0:;
L_1803fb311_1:;
wr(s->u,0,4,rd(s->r,5504,4));
L_1803fb311_2:;
mw((uint64_t)rd(s->r,152,8),4,rd(s->u,0,4));
L_1803fb311_3:;
/* 1803fb316: jmp 0x1803fb31b */
L_1803fb316_0:;
L_1803fb316_1:;
return UINT64_C(0x1803fb31b);
L_1803fb316_2:;
return UINT64_C(0x1803fb318);
}
uint64_t b_1803fb318(CPU*s){
/* 1803fb318: mov dword ptr [r11], r10d */
L_1803fb318_0:;
L_1803fb318_1:;
wr(s->u,8,4,rd(s->r,144,4));
L_1803fb318_2:;
mw((uint64_t)rd(s->r,152,8),4,rd(s->u,8,4));
L_1803fb318_3:;
/* 1803fb31b: lea ebx, [rsi - 1] */
L_1803fb31b_0:;
L_1803fb31b_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fb31b_2:;
wr(s->r,24,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fb31b_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fb31b_4:;
/* 1803fb31e: sub ebx, r12d */
L_1803fb31e_0:;
L_1803fb31e_1:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->r,160,4)));
L_1803fb31e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->r,160,4),4,1));
L_1803fb31e_3:;
wr(s->r,24,4,(rd(s->r,24,4)-rd(s->r,160,4)));
L_1803fb31e_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fb31e_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb31e_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803fb31e_7:;
wr(s->u,13,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803fb31e_8:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803fb31e_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb31e_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb31e_11:;
/* 1803fb321: add r11, -4 */
L_1803fb321_0:;
L_1803fb321_1:;
wr(s->r,512,1,(((rd(s->r,152,8)+((U)UINT64_C(0xfffffffffffffffc)))&(((U)1<<64)-1))<rd(s->r,152,8)));
L_1803fb321_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),((U)UINT64_C(0xfffffffffffffffc)),8,0));
L_1803fb321_3:;
wr(s->r,152,8,(rd(s->r,152,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fb321_4:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb321_5:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803fb321_6:;
wr(s->u,13,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803fb321_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803fb321_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb321_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb321_10:;
/* 1803fb325: add r12, 1 */
L_1803fb325_0:;
L_1803fb325_1:;
wr(s->r,512,1,(((rd(s->r,160,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,160,8)));
L_1803fb325_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),((U)UINT64_C(0x1)),8,0));
L_1803fb325_3:;
wr(s->r,160,8,(rd(s->r,160,8)+((U)UINT64_C(0x1))));
L_1803fb325_4:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb325_5:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803fb325_6:;
wr(s->u,13,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803fb325_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803fb325_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb325_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb325_10:;
/* 1803fb329: cmp r12, rax */
L_1803fb329_0:;
L_1803fb329_1:;
wr(s->u,23,8,rd(s->r,0,8));
L_1803fb329_2:;
wr(s->r,512,1,(rd(s->r,160,8)<rd(s->u,23,8)));
L_1803fb329_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),rd(s->u,23,8),8,1));
L_1803fb329_4:;
wr(s->u,31,8,(rd(s->r,160,8)-rd(s->u,23,8)));
L_1803fb329_5:;
wr(s->r,519,1,(sx(rd(s->u,31,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb329_6:;
wr(s->r,518,1,(rd(s->u,31,8)==((U)UINT64_C(0x0))));
L_1803fb329_7:;
wr(s->u,13,8,(rd(s->u,31,8)&((U)UINT64_C(0xff))));
L_1803fb329_8:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803fb329_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb329_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb329_11:;
/* 1803fb32c: jl 0x1803fb297 */
L_1803fb32c_0:;
L_1803fb32c_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fb32c_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803fb297);}
L_1803fb32c_3:;
return UINT64_C(0x1803fb332);
}
uint64_t b_1803fb31b(CPU*s){
/* 1803fb31b: lea ebx, [rsi - 1] */
L_1803fb31b_0:;
L_1803fb31b_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fb31b_2:;
wr(s->r,24,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fb31b_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fb31b_4:;
/* 1803fb31e: sub ebx, r12d */
L_1803fb31e_0:;
L_1803fb31e_1:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->r,160,4)));
L_1803fb31e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->r,160,4),4,1));
L_1803fb31e_3:;
wr(s->r,24,4,(rd(s->r,24,4)-rd(s->r,160,4)));
L_1803fb31e_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fb31e_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb31e_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803fb31e_7:;
wr(s->u,9,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803fb31e_8:;
wr(s->u,17,1,pop(rd(s->u,9,4),4));
L_1803fb31e_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fb31e_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fb31e_11:;
/* 1803fb321: add r11, -4 */
L_1803fb321_0:;
L_1803fb321_1:;
wr(s->r,512,1,(((rd(s->r,152,8)+((U)UINT64_C(0xfffffffffffffffc)))&(((U)1<<64)-1))<rd(s->r,152,8)));
L_1803fb321_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),((U)UINT64_C(0xfffffffffffffffc)),8,0));
L_1803fb321_3:;
wr(s->r,152,8,(rd(s->r,152,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fb321_4:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb321_5:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803fb321_6:;
wr(s->u,9,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803fb321_7:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fb321_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fb321_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fb321_10:;
/* 1803fb325: add r12, 1 */
L_1803fb325_0:;
L_1803fb325_1:;
wr(s->r,512,1,(((rd(s->r,160,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,160,8)));
L_1803fb325_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),((U)UINT64_C(0x1)),8,0));
L_1803fb325_3:;
wr(s->r,160,8,(rd(s->r,160,8)+((U)UINT64_C(0x1))));
L_1803fb325_4:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb325_5:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803fb325_6:;
wr(s->u,9,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803fb325_7:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fb325_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fb325_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fb325_10:;
/* 1803fb329: cmp r12, rax */
L_1803fb329_0:;
L_1803fb329_1:;
wr(s->u,19,8,rd(s->r,0,8));
L_1803fb329_2:;
wr(s->r,512,1,(rd(s->r,160,8)<rd(s->u,19,8)));
L_1803fb329_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),rd(s->u,19,8),8,1));
L_1803fb329_4:;
wr(s->u,27,8,(rd(s->r,160,8)-rd(s->u,19,8)));
L_1803fb329_5:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb329_6:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803fb329_7:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803fb329_8:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fb329_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fb329_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fb329_11:;
/* 1803fb32c: jl 0x1803fb297 */
L_1803fb32c_0:;
L_1803fb32c_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fb32c_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803fb297);}
L_1803fb32c_3:;
return UINT64_C(0x1803fb332);
}
uint64_t b_1803fb332(CPU*s){
/* 1803fb332: mov edi, dword ptr [rsp + 0xd8] */
L_1803fb332_0:;
L_1803fb332_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd8))+rd(s->r,32,8)));
L_1803fb332_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb332_3:;
wr(s->r,56,4,rd(s->u,28,4));
L_1803fb332_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fb332_5:;
/* 1803fb339: mov r9d, dword ptr [rsp + 0xe0] */
L_1803fb339_0:;
L_1803fb339_1:;
wr(s->u,16,8,(((U)UINT64_C(0xe0))+rd(s->r,32,8)));
L_1803fb339_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb339_3:;
wr(s->r,136,4,rd(s->u,28,4));
L_1803fb339_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fb339_5:;
/* 1803fb341: mov r11d, dword ptr [rsp + 0xf0] */
L_1803fb341_0:;
L_1803fb341_1:;
wr(s->u,16,8,(((U)UINT64_C(0xf0))+rd(s->r,32,8)));
L_1803fb341_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb341_3:;
wr(s->r,152,4,rd(s->u,28,4));
L_1803fb341_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fb341_5:;
/* 1803fb349: mov eax, dword ptr [rsp + 0xd0] */
L_1803fb349_0:;
L_1803fb349_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803fb349_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb349_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803fb349_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fb349_5:;
/* 1803fb350: movss dword ptr [rsp + 0x170], xmm14 */
L_1803fb350_0:;
L_1803fb350_1:;
wr(s->u,16,8,(((U)UINT64_C(0x170))+rd(s->r,32,8)));
L_1803fb350_2:;
wr(s->u,24,4,rd(s->r,5504,4));
L_1803fb350_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb350_4:;
/* 1803fb35a: movss dword ptr [rsp + 0x190], xmm13 */
L_1803fb35a_0:;
L_1803fb35a_1:;
wr(s->u,16,8,(((U)UINT64_C(0x190))+rd(s->r,32,8)));
L_1803fb35a_2:;
wr(s->u,24,4,rd(s->r,5440,4));
L_1803fb35a_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb35a_4:;
/* 1803fb364: mov dword ptr [rsp + 0x168], r8d */
L_1803fb364_0:;
L_1803fb364_1:;
wr(s->u,16,8,(((U)UINT64_C(0x168))+rd(s->r,32,8)));
L_1803fb364_2:;
wr(s->u,24,4,rd(s->r,128,4));
L_1803fb364_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb364_4:;
/* 1803fb36c: mov r8, qword ptr [rsp + 0x118] */
L_1803fb36c_0:;
L_1803fb36c_1:;
wr(s->u,16,8,(((U)UINT64_C(0x118))+rd(s->r,32,8)));
L_1803fb36c_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803fb36c_3:;
wr(s->r,128,8,rd(s->u,32,8));
L_1803fb36c_4:;
/* 1803fb374: mov dword ptr [rsp + 0x160], r10d */
L_1803fb374_0:;
L_1803fb374_1:;
wr(s->u,16,8,(((U)UINT64_C(0x160))+rd(s->r,32,8)));
L_1803fb374_2:;
wr(s->u,24,4,rd(s->r,144,4));
L_1803fb374_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb374_4:;
/* 1803fb37c: mov r10d, dword ptr [rsp + 0xe8] */
L_1803fb37c_0:;
L_1803fb37c_1:;
wr(s->u,16,8,(((U)UINT64_C(0xe8))+rd(s->r,32,8)));
L_1803fb37c_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb37c_3:;
wr(s->r,144,4,rd(s->u,28,4));
L_1803fb37c_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fb37c_5:;
/* 1803fb384: mov dword ptr [rsp + 0x158], r13d */
L_1803fb384_0:;
L_1803fb384_1:;
wr(s->u,16,8,(((U)UINT64_C(0x158))+rd(s->r,32,8)));
L_1803fb384_2:;
wr(s->u,24,4,rd(s->r,168,4));
L_1803fb384_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb384_4:;
/* 1803fb38c: mov r13d, dword ptr [rsp + 0xf8] */
L_1803fb38c_0:;
L_1803fb38c_1:;
wr(s->u,16,8,(((U)UINT64_C(0xf8))+rd(s->r,32,8)));
L_1803fb38c_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb38c_3:;
wr(s->r,168,4,rd(s->u,28,4));
L_1803fb38c_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb38c_5:;
/* 1803fb394: mov esi, dword ptr [rsp + 0x158] */
L_1803fb394_0:;
L_1803fb394_1:;
wr(s->u,16,8,(((U)UINT64_C(0x158))+rd(s->r,32,8)));
L_1803fb394_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb394_3:;
wr(s->r,48,4,rd(s->u,28,4));
L_1803fb394_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fb394_5:;
/* 1803fb39b: lea r12d, [rax + rsi] */
L_1803fb39b_0:;
L_1803fb39b_1:;
wr(s->u,0,8,(rd(s->r,48,8)*((U)UINT64_C(0x1))));
L_1803fb39b_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803fb39b_3:;
wr(s->r,160,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fb39b_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb39b_5:;
/* 1803fb39f: mov dword ptr [rsp + 0x150], r12d */
L_1803fb39f_0:;
L_1803fb39f_1:;
wr(s->u,16,8,(((U)UINT64_C(0x150))+rd(s->r,32,8)));
L_1803fb39f_2:;
wr(s->u,24,4,rd(s->r,160,4));
L_1803fb39f_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb39f_4:;
/* 1803fb3a7: mov esi, ebx */
L_1803fb3a7_0:;
L_1803fb3a7_1:;
wr(s->r,48,4,rd(s->r,24,4));
L_1803fb3a7_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fb3a7_3:;
/* 1803fb3a9: xor r12d, r12d */
L_1803fb3a9_0:;
L_1803fb3a9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb3a9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb3a9_3:;
wr(s->r,160,4,(rd(s->r,160,4)^rd(s->r,160,4)));
L_1803fb3a9_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb3a9_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb3a9_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fb3a9_7:;
wr(s->u,40,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fb3a9_8:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803fb3a9_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803fb3a9_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803fb3a9_11:;
/* 1803fb3ac: add esi, -1 */
L_1803fb3ac_0:;
L_1803fb3ac_1:;
wr(s->r,512,1,(((rd(s->r,48,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,48,4)));
L_1803fb3ac_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fb3ac_3:;
wr(s->r,48,4,(rd(s->r,48,4)+((U)UINT64_C(0xffffffff))));
L_1803fb3ac_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fb3ac_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb3ac_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803fb3ac_7:;
wr(s->u,40,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803fb3ac_8:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803fb3ac_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803fb3ac_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803fb3ac_11:;
/* 1803fb3af: movsxd rax, esi */
L_1803fb3af_0:;
L_1803fb3af_1:;
wr(s->r,0,8,(U)sx(rd(s->r,48,4),4));
L_1803fb3af_2:;
/* 1803fb3b2: js 0x1803fb550 */
L_1803fb3b2_0:;
L_1803fb3b2_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803fb550);}
L_1803fb3b2_2:;
return UINT64_C(0x1803fb3b8);
}
uint64_t b_1803fb3a7(CPU*s){
/* 1803fb3a7: mov esi, ebx */
L_1803fb3a7_0:;
L_1803fb3a7_1:;
wr(s->r,48,4,rd(s->r,24,4));
L_1803fb3a7_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fb3a7_3:;
/* 1803fb3a9: xor r12d, r12d */
L_1803fb3a9_0:;
L_1803fb3a9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb3a9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb3a9_3:;
wr(s->r,160,4,(rd(s->r,160,4)^rd(s->r,160,4)));
L_1803fb3a9_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb3a9_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb3a9_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fb3a9_7:;
wr(s->u,0,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fb3a9_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fb3a9_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fb3a9_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fb3a9_11:;
/* 1803fb3ac: add esi, -1 */
L_1803fb3ac_0:;
L_1803fb3ac_1:;
wr(s->r,512,1,(((rd(s->r,48,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,48,4)));
L_1803fb3ac_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fb3ac_3:;
wr(s->r,48,4,(rd(s->r,48,4)+((U)UINT64_C(0xffffffff))));
L_1803fb3ac_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fb3ac_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb3ac_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803fb3ac_7:;
wr(s->u,0,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803fb3ac_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fb3ac_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fb3ac_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fb3ac_11:;
/* 1803fb3af: movsxd rax, esi */
L_1803fb3af_0:;
L_1803fb3af_1:;
wr(s->r,0,8,(U)sx(rd(s->r,48,4),4));
L_1803fb3af_2:;
/* 1803fb3b2: js 0x1803fb550 */
L_1803fb3b2_0:;
L_1803fb3b2_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803fb550);}
L_1803fb3b2_2:;
return UINT64_C(0x1803fb3b8);
}
uint64_t b_1803fb3b8(CPU*s){
/* 1803fb3b8: mov r15, qword ptr [rsp + 0x1e8] */
L_1803fb3b8_0:;
L_1803fb3b8_1:;
wr(s->u,32,8,(((U)UINT64_C(0x1e8))+rd(s->r,32,8)));
L_1803fb3b8_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,32,8),8));
L_1803fb3b8_3:;
wr(s->r,184,8,rd(s->u,56,8));
L_1803fb3b8_4:;
/* 1803fb3c0: movss xmm14, dword ptr [rsp + 0x170] */
L_1803fb3c0_0:;
L_1803fb3c0_1:;
wr(s->u,32,8,(((U)UINT64_C(0x170))+rd(s->r,32,8)));
L_1803fb3c0_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fb3c0_3:;
wr(s->r,5504,4,rd(s->u,40,4));
L_1803fb3c0_4:;
wr(s->r,5508,4,((U)UINT64_C(0x0)));
L_1803fb3c0_5:;
wr(s->r,5512,4,((U)UINT64_C(0x0)));
L_1803fb3c0_6:;
wr(s->r,5516,4,((U)UINT64_C(0x0)));
L_1803fb3c0_7:;
/* 1803fb3ca: mov dword ptr [rsp + 0xd8], edi */
L_1803fb3ca_0:;
L_1803fb3ca_1:;
wr(s->u,32,8,(((U)UINT64_C(0xd8))+rd(s->r,32,8)));
L_1803fb3ca_2:;
wr(s->u,40,4,rd(s->r,56,4));
L_1803fb3ca_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb3ca_4:;
/* 1803fb3d1: mov qword ptr [rsp + 0x118], r8 */
L_1803fb3d1_0:;
L_1803fb3d1_1:;
wr(s->u,32,8,(((U)UINT64_C(0x118))+rd(s->r,32,8)));
L_1803fb3d1_2:;
wr(s->u,44,8,rd(s->r,128,8));
L_1803fb3d1_3:;
mw((uint64_t)rd(s->u,32,8),8,rd(s->u,44,8));
L_1803fb3d1_4:;
/* 1803fb3d9: mov r8d, dword ptr [rsp + 0x168] */
L_1803fb3d9_0:;
L_1803fb3d9_1:;
wr(s->u,32,8,(((U)UINT64_C(0x168))+rd(s->r,32,8)));
L_1803fb3d9_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fb3d9_3:;
wr(s->r,128,4,rd(s->u,52,4));
L_1803fb3d9_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fb3d9_5:;
/* 1803fb3e1: mov dword ptr [rsp + 0xe0], r9d */
L_1803fb3e1_0:;
L_1803fb3e1_1:;
wr(s->u,32,8,(((U)UINT64_C(0xe0))+rd(s->r,32,8)));
L_1803fb3e1_2:;
wr(s->u,40,4,rd(s->r,136,4));
L_1803fb3e1_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb3e1_4:;
/* 1803fb3e9: mov r9d, dword ptr [rip + 0x413870] */
L_1803fb3e9_0:;
L_1803fb3e9_1:;
wr(s->r,136,4,mr(UINT64_C(0x18080ec60),4));
L_1803fb3e9_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fb3e9_3:;
/* 1803fb3f0: mov dword ptr [rsp + 0xe8], r10d */
L_1803fb3f0_0:;
L_1803fb3f0_1:;
wr(s->u,32,8,(((U)UINT64_C(0xe8))+rd(s->r,32,8)));
L_1803fb3f0_2:;
wr(s->u,40,4,rd(s->r,144,4));
L_1803fb3f0_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb3f0_4:;
/* 1803fb3f8: mov r10d, dword ptr [rsp + 0x160] */
L_1803fb3f8_0:;
L_1803fb3f8_1:;
wr(s->u,32,8,(((U)UINT64_C(0x160))+rd(s->r,32,8)));
L_1803fb3f8_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fb3f8_3:;
wr(s->r,144,4,rd(s->u,52,4));
L_1803fb3f8_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fb3f8_5:;
/* 1803fb400: mov dword ptr [rsp + 0xf0], r11d */
L_1803fb400_0:;
L_1803fb400_1:;
wr(s->u,32,8,(((U)UINT64_C(0xf0))+rd(s->r,32,8)));
L_1803fb400_2:;
wr(s->u,40,4,rd(s->r,152,4));
L_1803fb400_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb400_4:;
/* 1803fb408: lea r14, [rax + 1] */
L_1803fb408_0:;
L_1803fb408_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fb408_2:;
wr(s->r,176,8,rd(s->u,0,8));
L_1803fb408_3:;
/* 1803fb40c: mov qword ptr [rsp + 0x20], r14 */
L_1803fb40c_0:;
L_1803fb40c_1:;
wr(s->u,24,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fb40c_2:;
wr(s->u,44,8,rd(s->r,176,8));
L_1803fb40c_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,44,8));
L_1803fb40c_4:;
/* 1803fb411: mov dword ptr [rsp + 0xf8], r13d */
L_1803fb411_0:;
L_1803fb411_1:;
wr(s->u,32,8,(((U)UINT64_C(0xf8))+rd(s->r,32,8)));
L_1803fb411_2:;
wr(s->u,40,4,rd(s->r,168,4));
L_1803fb411_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb411_4:;
/* 1803fb419: mov dword ptr [rsp + 0x100], ebx */
L_1803fb419_0:;
L_1803fb419_1:;
wr(s->u,32,8,(((U)UINT64_C(0x100))+rd(s->r,32,8)));
L_1803fb419_2:;
wr(s->u,40,4,rd(s->r,24,4));
L_1803fb419_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb419_4:;
/* 1803fb420: mov rbx, qword ptr [rsp + 0x20] */
L_1803fb420_0:;
L_1803fb420_1:;
wr(s->u,24,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fb420_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803fb420_3:;
wr(s->r,24,8,rd(s->u,56,8));
L_1803fb420_4:;
/* 1803fb425: mov edi, 0x3f800000 */
L_1803fb425_0:;
L_1803fb425_1:;
wr(s->r,56,8,((U)UINT64_C(0x3f800000)));
L_1803fb425_2:;
/* 1803fb42a: lea r14, [r15 + rax*4] */
L_1803fb42a_0:;
L_1803fb42a_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fb42a_2:;
wr(s->u,16,8,(rd(s->r,184,8)+rd(s->u,8,8)));
L_1803fb42a_3:;
wr(s->r,176,8,rd(s->u,16,8));
L_1803fb42a_4:;
/* 1803fb42e: mov qword ptr [rsp + 0x28], r14 */
L_1803fb42e_0:;
L_1803fb42e_1:;
wr(s->u,24,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fb42e_2:;
wr(s->u,44,8,rd(s->r,176,8));
L_1803fb42e_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,44,8));
L_1803fb42e_4:;
/* 1803fb433: mov r11, qword ptr [rsp + 0x28] */
L_1803fb433_0:;
L_1803fb433_1:;
wr(s->u,24,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fb433_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803fb433_3:;
wr(s->r,152,8,rd(s->u,56,8));
L_1803fb433_4:;
/* 1803fb438: movss xmm13, dword ptr [r11] */
L_1803fb438_0:;
L_1803fb438_1:;
wr(s->u,40,4,mr((uint64_t)rd(s->r,152,8),4));
L_1803fb438_2:;
wr(s->r,5440,4,rd(s->u,40,4));
L_1803fb438_3:;
wr(s->r,5444,4,((U)UINT64_C(0x0)));
L_1803fb438_4:;
wr(s->r,5448,4,((U)UINT64_C(0x0)));
L_1803fb438_5:;
wr(s->r,5452,4,((U)UINT64_C(0x0)));
L_1803fb438_6:;
/* 1803fb43d: movss dword ptr [rsp + 0x220], xmm13 */
L_1803fb43d_0:;
L_1803fb43d_1:;
wr(s->u,32,8,(((U)UINT64_C(0x220))+rd(s->r,32,8)));
L_1803fb43d_2:;
wr(s->u,40,4,rd(s->r,5440,4));
L_1803fb43d_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb43d_4:;
/* 1803fb447: mov r15d, dword ptr [rsp + 0x220] */
L_1803fb447_0:;
L_1803fb447_1:;
wr(s->u,32,8,(((U)UINT64_C(0x220))+rd(s->r,32,8)));
L_1803fb447_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fb447_3:;
wr(s->r,184,4,rd(s->u,52,4));
L_1803fb447_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803fb447_5:;
/* 1803fb44f: mov r13d, r15d */
L_1803fb44f_0:;
L_1803fb44f_1:;
wr(s->r,168,4,rd(s->r,184,4));
L_1803fb44f_2:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb44f_3:;
/* 1803fb452: and r13d, 0x80000000 */
L_1803fb452_0:;
L_1803fb452_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb452_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb452_3:;
wr(s->r,168,4,(rd(s->r,168,4)&((U)UINT64_C(0x80000000))));
L_1803fb452_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb452_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb452_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fb452_7:;
wr(s->u,65,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fb452_8:;
wr(s->u,69,1,pop(rd(s->u,65,4),4));
L_1803fb452_9:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803fb452_10:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803fb452_11:;
/* 1803fb459: mov r14d, r15d */
L_1803fb459_0:;
L_1803fb459_1:;
wr(s->r,176,4,rd(s->r,184,4));
L_1803fb459_2:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb459_3:;
/* 1803fb45c: and r14d, 0x7fffffff */
L_1803fb45c_0:;
L_1803fb45c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb45c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb45c_3:;
wr(s->r,176,4,(rd(s->r,176,4)&((U)UINT64_C(0x7fffffff))));
L_1803fb45c_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb45c_5:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb45c_6:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803fb45c_7:;
wr(s->u,65,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803fb45c_8:;
wr(s->u,69,1,pop(rd(s->u,65,4),4));
L_1803fb45c_9:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803fb45c_10:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803fb45c_11:;
/* 1803fb463: cmp r14d, 0x800000 */
L_1803fb463_0:;
L_1803fb463_1:;
wr(s->u,71,4,rd(s->r,176,4));
L_1803fb463_2:;
wr(s->r,512,1,(rd(s->u,71,4)<((U)UINT64_C(0x800000))));
L_1803fb463_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,71,4),((U)UINT64_C(0x800000)),4,1));
L_1803fb463_4:;
wr(s->u,75,4,(rd(s->u,71,4)-((U)UINT64_C(0x800000))));
L_1803fb463_5:;
wr(s->r,519,1,(sx(rd(s->u,75,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb463_6:;
wr(s->r,518,1,(rd(s->u,75,4)==((U)UINT64_C(0x0))));
L_1803fb463_7:;
wr(s->u,65,4,(rd(s->u,75,4)&((U)UINT64_C(0xff))));
L_1803fb463_8:;
wr(s->u,69,1,pop(rd(s->u,65,4),4));
L_1803fb463_9:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803fb463_10:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803fb463_11:;
/* 1803fb46a: jae 0x1803fb471 */
L_1803fb46a_0:;
L_1803fb46a_1:;
wr(s->u,64,1,(!rd(s->r,512,1)));
L_1803fb46a_2:;
if(rd(s->u,64,1)){return UINT64_C(0x1803fb471);}
L_1803fb46a_3:;
return UINT64_C(0x1803fb46c);
}
uint64_t b_1803fb438(CPU*s){
/* 1803fb438: movss xmm13, dword ptr [r11] */
L_1803fb438_0:;
L_1803fb438_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,152,8),4));
L_1803fb438_2:;
wr(s->r,5440,4,rd(s->u,8,4));
L_1803fb438_3:;
wr(s->r,5444,4,((U)UINT64_C(0x0)));
L_1803fb438_4:;
wr(s->r,5448,4,((U)UINT64_C(0x0)));
L_1803fb438_5:;
wr(s->r,5452,4,((U)UINT64_C(0x0)));
L_1803fb438_6:;
/* 1803fb43d: movss dword ptr [rsp + 0x220], xmm13 */
L_1803fb43d_0:;
L_1803fb43d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x220))+rd(s->r,32,8)));
L_1803fb43d_2:;
wr(s->u,8,4,rd(s->r,5440,4));
L_1803fb43d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fb43d_4:;
/* 1803fb447: mov r15d, dword ptr [rsp + 0x220] */
L_1803fb447_0:;
L_1803fb447_1:;
wr(s->u,0,8,(((U)UINT64_C(0x220))+rd(s->r,32,8)));
L_1803fb447_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb447_3:;
wr(s->r,184,4,rd(s->u,12,4));
L_1803fb447_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803fb447_5:;
/* 1803fb44f: mov r13d, r15d */
L_1803fb44f_0:;
L_1803fb44f_1:;
wr(s->r,168,4,rd(s->r,184,4));
L_1803fb44f_2:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb44f_3:;
/* 1803fb452: and r13d, 0x80000000 */
L_1803fb452_0:;
L_1803fb452_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb452_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb452_3:;
wr(s->r,168,4,(rd(s->r,168,4)&((U)UINT64_C(0x80000000))));
L_1803fb452_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb452_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb452_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fb452_7:;
wr(s->u,17,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fb452_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fb452_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb452_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb452_11:;
/* 1803fb459: mov r14d, r15d */
L_1803fb459_0:;
L_1803fb459_1:;
wr(s->r,176,4,rd(s->r,184,4));
L_1803fb459_2:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb459_3:;
/* 1803fb45c: and r14d, 0x7fffffff */
L_1803fb45c_0:;
L_1803fb45c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb45c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb45c_3:;
wr(s->r,176,4,(rd(s->r,176,4)&((U)UINT64_C(0x7fffffff))));
L_1803fb45c_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb45c_5:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb45c_6:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803fb45c_7:;
wr(s->u,17,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803fb45c_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fb45c_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb45c_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb45c_11:;
/* 1803fb463: cmp r14d, 0x800000 */
L_1803fb463_0:;
L_1803fb463_1:;
wr(s->u,23,4,rd(s->r,176,4));
L_1803fb463_2:;
wr(s->r,512,1,(rd(s->u,23,4)<((U)UINT64_C(0x800000))));
L_1803fb463_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,23,4),((U)UINT64_C(0x800000)),4,1));
L_1803fb463_4:;
wr(s->u,27,4,(rd(s->u,23,4)-((U)UINT64_C(0x800000))));
L_1803fb463_5:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb463_6:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803fb463_7:;
wr(s->u,17,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803fb463_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fb463_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb463_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb463_11:;
/* 1803fb46a: jae 0x1803fb471 */
L_1803fb46a_0:;
L_1803fb46a_1:;
wr(s->u,16,1,(!rd(s->r,512,1)));
L_1803fb46a_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803fb471);}
L_1803fb46a_3:;
return UINT64_C(0x1803fb46c);
}
uint64_t b_1803fb46c(CPU*s){
/* 1803fb46c: mov dword ptr [r11], edi */
L_1803fb46c_0:;
L_1803fb46c_1:;
wr(s->u,0,4,rd(s->r,56,4));
L_1803fb46c_2:;
mw((uint64_t)rd(s->r,152,8),4,rd(s->u,0,4));
L_1803fb46c_3:;
/* 1803fb46f: jmp 0x1803fb4bc */
L_1803fb46f_0:;
L_1803fb46f_1:;
return UINT64_C(0x1803fb4bc);
L_1803fb46f_2:;
return UINT64_C(0x1803fb471);
}
uint64_t b_1803fb471(CPU*s){
/* 1803fb471: test r13d, r13d */
L_1803fb471_0:;
L_1803fb471_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb471_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb471_3:;
wr(s->u,6,4,(rd(s->r,168,4)&rd(s->r,168,4)));
L_1803fb471_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb471_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803fb471_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803fb471_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fb471_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fb471_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fb471_10:;
/* 1803fb474: je 0x1803fb499 */
L_1803fb474_0:;
L_1803fb474_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fb499);}
L_1803fb474_2:;
return UINT64_C(0x1803fb476);
}
uint64_t b_1803fb476(CPU*s){
/* 1803fb476: cmp r15d, 0xc2aeac50 */
L_1803fb476_0:;
L_1803fb476_1:;
wr(s->u,6,4,rd(s->r,184,4));
L_1803fb476_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0xc2aeac50))));
L_1803fb476_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0xc2aeac50)),4,1));
L_1803fb476_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0xc2aeac50))));
L_1803fb476_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb476_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fb476_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fb476_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fb476_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fb476_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fb476_11:;
/* 1803fb47d: jb 0x1803fb4d3 */
L_1803fb47d_0:;
L_1803fb47d_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fb4d3);}
L_1803fb47d_2:;
return UINT64_C(0x1803fb47f);
}
uint64_t b_1803fb47f(CPU*s){
/* 1803fb47f: and r15d, 0x7fc00000 */
L_1803fb47f_0:;
L_1803fb47f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb47f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb47f_3:;
wr(s->r,184,4,(rd(s->r,184,4)&((U)UINT64_C(0x7fc00000))));
L_1803fb47f_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803fb47f_5:;
wr(s->r,519,1,(sx(rd(s->r,184,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb47f_6:;
wr(s->r,518,1,(rd(s->r,184,4)==((U)UINT64_C(0x0))));
L_1803fb47f_7:;
wr(s->u,1,4,(rd(s->r,184,4)&((U)UINT64_C(0xff))));
L_1803fb47f_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fb47f_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fb47f_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fb47f_11:;
/* 1803fb486: cmp r15d, 0x7fc00000 */
L_1803fb486_0:;
L_1803fb486_1:;
wr(s->u,7,4,rd(s->r,184,4));
L_1803fb486_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x7fc00000))));
L_1803fb486_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803fb486_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x7fc00000))));
L_1803fb486_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb486_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fb486_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fb486_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fb486_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fb486_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fb486_11:;
/* 1803fb48d: jne 0x1803fb494 */
L_1803fb48d_0:;
L_1803fb48d_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fb48d_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fb494);}
L_1803fb48d_3:;
return UINT64_C(0x1803fb48f);
}
uint64_t b_1803fb48f(CPU*s){
/* 1803fb48f: mov dword ptr [r11], r9d */
L_1803fb48f_0:;
L_1803fb48f_1:;
wr(s->u,0,4,rd(s->r,136,4));
L_1803fb48f_2:;
mw((uint64_t)rd(s->r,152,8),4,rd(s->u,0,4));
L_1803fb48f_3:;
/* 1803fb492: jmp 0x1803fb4bc */
L_1803fb492_0:;
L_1803fb492_1:;
return UINT64_C(0x1803fb4bc);
L_1803fb492_2:;
return UINT64_C(0x1803fb494);
}
uint64_t b_1803fb494(CPU*s){
/* 1803fb494: mov dword ptr [r11], r8d */
L_1803fb494_0:;
L_1803fb494_1:;
wr(s->u,0,4,rd(s->r,128,4));
L_1803fb494_2:;
mw((uint64_t)rd(s->r,152,8),4,rd(s->u,0,4));
L_1803fb494_3:;
/* 1803fb497: jmp 0x1803fb4bc */
L_1803fb497_0:;
L_1803fb497_1:;
return UINT64_C(0x1803fb4bc);
L_1803fb497_2:;
return UINT64_C(0x1803fb499);
}
uint64_t b_1803fb499(CPU*s){
/* 1803fb499: cmp r15d, 0x42b17218 */
L_1803fb499_0:;
L_1803fb499_1:;
wr(s->u,6,4,rd(s->r,184,4));
L_1803fb499_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x42b17218))));
L_1803fb499_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x42b17218)),4,1));
L_1803fb499_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x42b17218))));
L_1803fb499_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb499_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fb499_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fb499_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fb499_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fb499_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fb499_11:;
/* 1803fb4a0: jb 0x1803fb4d3 */
L_1803fb4a0_0:;
L_1803fb4a0_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fb4d3);}
L_1803fb4a0_2:;
return UINT64_C(0x1803fb4a2);
}
uint64_t b_1803fb4a2(CPU*s){
/* 1803fb4a2: and r15d, 0x7fc00000 */
L_1803fb4a2_0:;
L_1803fb4a2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb4a2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb4a2_3:;
wr(s->r,184,4,(rd(s->r,184,4)&((U)UINT64_C(0x7fc00000))));
L_1803fb4a2_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803fb4a2_5:;
wr(s->r,519,1,(sx(rd(s->r,184,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb4a2_6:;
wr(s->r,518,1,(rd(s->r,184,4)==((U)UINT64_C(0x0))));
L_1803fb4a2_7:;
wr(s->u,1,4,(rd(s->r,184,4)&((U)UINT64_C(0xff))));
L_1803fb4a2_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fb4a2_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fb4a2_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fb4a2_11:;
/* 1803fb4a9: cmp r15d, 0x7fc00000 */
L_1803fb4a9_0:;
L_1803fb4a9_1:;
wr(s->u,7,4,rd(s->r,184,4));
L_1803fb4a9_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x7fc00000))));
L_1803fb4a9_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803fb4a9_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x7fc00000))));
L_1803fb4a9_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb4a9_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fb4a9_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fb4a9_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fb4a9_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fb4a9_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fb4a9_11:;
/* 1803fb4b0: jne 0x1803fb4b9 */
L_1803fb4b0_0:;
L_1803fb4b0_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fb4b0_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fb4b9);}
L_1803fb4b0_3:;
return UINT64_C(0x1803fb4b2);
}
uint64_t b_1803fb4b2(CPU*s){
/* 1803fb4b2: movss dword ptr [r11], xmm14 */
L_1803fb4b2_0:;
L_1803fb4b2_1:;
wr(s->u,0,4,rd(s->r,5504,4));
L_1803fb4b2_2:;
mw((uint64_t)rd(s->r,152,8),4,rd(s->u,0,4));
L_1803fb4b2_3:;
/* 1803fb4b7: jmp 0x1803fb4bc */
L_1803fb4b7_0:;
L_1803fb4b7_1:;
return UINT64_C(0x1803fb4bc);
L_1803fb4b7_2:;
return UINT64_C(0x1803fb4b9);
}
uint64_t b_1803fb4b9(CPU*s){
/* 1803fb4b9: mov dword ptr [r11], r10d */
L_1803fb4b9_0:;
L_1803fb4b9_1:;
wr(s->u,8,4,rd(s->r,144,4));
L_1803fb4b9_2:;
mw((uint64_t)rd(s->r,152,8),4,rd(s->u,8,4));
L_1803fb4b9_3:;
/* 1803fb4bc: lea esi, [rax - 1] */
L_1803fb4bc_0:;
L_1803fb4bc_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fb4bc_2:;
wr(s->r,48,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fb4bc_3:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fb4bc_4:;
/* 1803fb4bf: sub esi, r12d */
L_1803fb4bf_0:;
L_1803fb4bf_1:;
wr(s->r,512,1,(rd(s->r,48,4)<rd(s->r,160,4)));
L_1803fb4bf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),rd(s->r,160,4),4,1));
L_1803fb4bf_3:;
wr(s->r,48,4,(rd(s->r,48,4)-rd(s->r,160,4)));
L_1803fb4bf_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fb4bf_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb4bf_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803fb4bf_7:;
wr(s->u,13,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803fb4bf_8:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803fb4bf_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb4bf_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb4bf_11:;
/* 1803fb4c2: add r11, -4 */
L_1803fb4c2_0:;
L_1803fb4c2_1:;
wr(s->r,512,1,(((rd(s->r,152,8)+((U)UINT64_C(0xfffffffffffffffc)))&(((U)1<<64)-1))<rd(s->r,152,8)));
L_1803fb4c2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),((U)UINT64_C(0xfffffffffffffffc)),8,0));
L_1803fb4c2_3:;
wr(s->r,152,8,(rd(s->r,152,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fb4c2_4:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb4c2_5:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803fb4c2_6:;
wr(s->u,13,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803fb4c2_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803fb4c2_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb4c2_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb4c2_10:;
/* 1803fb4c6: add r12, 1 */
L_1803fb4c6_0:;
L_1803fb4c6_1:;
wr(s->r,512,1,(((rd(s->r,160,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,160,8)));
L_1803fb4c6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),((U)UINT64_C(0x1)),8,0));
L_1803fb4c6_3:;
wr(s->r,160,8,(rd(s->r,160,8)+((U)UINT64_C(0x1))));
L_1803fb4c6_4:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb4c6_5:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803fb4c6_6:;
wr(s->u,13,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803fb4c6_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803fb4c6_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb4c6_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb4c6_10:;
/* 1803fb4ca: cmp r12, rbx */
L_1803fb4ca_0:;
L_1803fb4ca_1:;
wr(s->u,23,8,rd(s->r,24,8));
L_1803fb4ca_2:;
wr(s->r,512,1,(rd(s->r,160,8)<rd(s->u,23,8)));
L_1803fb4ca_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),rd(s->u,23,8),8,1));
L_1803fb4ca_4:;
wr(s->u,31,8,(rd(s->r,160,8)-rd(s->u,23,8)));
L_1803fb4ca_5:;
wr(s->r,519,1,(sx(rd(s->u,31,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb4ca_6:;
wr(s->r,518,1,(rd(s->u,31,8)==((U)UINT64_C(0x0))));
L_1803fb4ca_7:;
wr(s->u,13,8,(rd(s->u,31,8)&((U)UINT64_C(0xff))));
L_1803fb4ca_8:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803fb4ca_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb4ca_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb4ca_11:;
/* 1803fb4cd: jl 0x1803fb438 */
L_1803fb4cd_0:;
L_1803fb4cd_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fb4cd_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803fb438);}
L_1803fb4cd_3:;
return UINT64_C(0x1803fb4d3);
}
uint64_t b_1803fb4bc(CPU*s){
/* 1803fb4bc: lea esi, [rax - 1] */
L_1803fb4bc_0:;
L_1803fb4bc_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fb4bc_2:;
wr(s->r,48,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fb4bc_3:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fb4bc_4:;
/* 1803fb4bf: sub esi, r12d */
L_1803fb4bf_0:;
L_1803fb4bf_1:;
wr(s->r,512,1,(rd(s->r,48,4)<rd(s->r,160,4)));
L_1803fb4bf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),rd(s->r,160,4),4,1));
L_1803fb4bf_3:;
wr(s->r,48,4,(rd(s->r,48,4)-rd(s->r,160,4)));
L_1803fb4bf_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fb4bf_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb4bf_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803fb4bf_7:;
wr(s->u,9,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803fb4bf_8:;
wr(s->u,17,1,pop(rd(s->u,9,4),4));
L_1803fb4bf_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fb4bf_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fb4bf_11:;
/* 1803fb4c2: add r11, -4 */
L_1803fb4c2_0:;
L_1803fb4c2_1:;
wr(s->r,512,1,(((rd(s->r,152,8)+((U)UINT64_C(0xfffffffffffffffc)))&(((U)1<<64)-1))<rd(s->r,152,8)));
L_1803fb4c2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),((U)UINT64_C(0xfffffffffffffffc)),8,0));
L_1803fb4c2_3:;
wr(s->r,152,8,(rd(s->r,152,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fb4c2_4:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb4c2_5:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803fb4c2_6:;
wr(s->u,9,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803fb4c2_7:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fb4c2_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fb4c2_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fb4c2_10:;
/* 1803fb4c6: add r12, 1 */
L_1803fb4c6_0:;
L_1803fb4c6_1:;
wr(s->r,512,1,(((rd(s->r,160,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,160,8)));
L_1803fb4c6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),((U)UINT64_C(0x1)),8,0));
L_1803fb4c6_3:;
wr(s->r,160,8,(rd(s->r,160,8)+((U)UINT64_C(0x1))));
L_1803fb4c6_4:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb4c6_5:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803fb4c6_6:;
wr(s->u,9,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803fb4c6_7:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fb4c6_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fb4c6_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fb4c6_10:;
/* 1803fb4ca: cmp r12, rbx */
L_1803fb4ca_0:;
L_1803fb4ca_1:;
wr(s->u,19,8,rd(s->r,24,8));
L_1803fb4ca_2:;
wr(s->r,512,1,(rd(s->r,160,8)<rd(s->u,19,8)));
L_1803fb4ca_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),rd(s->u,19,8),8,1));
L_1803fb4ca_4:;
wr(s->u,27,8,(rd(s->r,160,8)-rd(s->u,19,8)));
L_1803fb4ca_5:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb4ca_6:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803fb4ca_7:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803fb4ca_8:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fb4ca_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fb4ca_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fb4ca_11:;
/* 1803fb4cd: jl 0x1803fb438 */
L_1803fb4cd_0:;
L_1803fb4cd_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fb4cd_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803fb438);}
L_1803fb4cd_3:;
return UINT64_C(0x1803fb4d3);
}
uint64_t b_1803fb4d3(CPU*s){
/* 1803fb4d3: mov edi, dword ptr [rsp + 0xd8] */
L_1803fb4d3_0:;
L_1803fb4d3_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd8))+rd(s->r,32,8)));
L_1803fb4d3_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb4d3_3:;
wr(s->r,56,4,rd(s->u,36,4));
L_1803fb4d3_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fb4d3_5:;
/* 1803fb4da: mov r9d, dword ptr [rsp + 0xe0] */
L_1803fb4da_0:;
L_1803fb4da_1:;
wr(s->u,16,8,(((U)UINT64_C(0xe0))+rd(s->r,32,8)));
L_1803fb4da_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb4da_3:;
wr(s->r,136,4,rd(s->u,36,4));
L_1803fb4da_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fb4da_5:;
/* 1803fb4e2: mov r11d, dword ptr [rsp + 0xf0] */
L_1803fb4e2_0:;
L_1803fb4e2_1:;
wr(s->u,16,8,(((U)UINT64_C(0xf0))+rd(s->r,32,8)));
L_1803fb4e2_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb4e2_3:;
wr(s->r,152,4,rd(s->u,36,4));
L_1803fb4e2_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fb4e2_5:;
/* 1803fb4ea: mov ebx, dword ptr [rsp + 0x100] */
L_1803fb4ea_0:;
L_1803fb4ea_1:;
wr(s->u,16,8,(((U)UINT64_C(0x100))+rd(s->r,32,8)));
L_1803fb4ea_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb4ea_3:;
wr(s->r,24,4,rd(s->u,36,4));
L_1803fb4ea_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fb4ea_5:;
/* 1803fb4f1: mov eax, dword ptr [rsp + 0xd0] */
L_1803fb4f1_0:;
L_1803fb4f1_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803fb4f1_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb4f1_3:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803fb4f1_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fb4f1_5:;
/* 1803fb4f8: movss dword ptr [rsp + 0x170], xmm14 */
L_1803fb4f8_0:;
L_1803fb4f8_1:;
wr(s->u,16,8,(((U)UINT64_C(0x170))+rd(s->r,32,8)));
L_1803fb4f8_2:;
wr(s->u,24,4,rd(s->r,5504,4));
L_1803fb4f8_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb4f8_4:;
/* 1803fb502: movss dword ptr [rsp + 0x188], xmm13 */
L_1803fb502_0:;
L_1803fb502_1:;
wr(s->u,16,8,(((U)UINT64_C(0x188))+rd(s->r,32,8)));
L_1803fb502_2:;
wr(s->u,24,4,rd(s->r,5440,4));
L_1803fb502_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb502_4:;
/* 1803fb50c: mov dword ptr [rsp + 0x168], r8d */
L_1803fb50c_0:;
L_1803fb50c_1:;
wr(s->u,16,8,(((U)UINT64_C(0x168))+rd(s->r,32,8)));
L_1803fb50c_2:;
wr(s->u,24,4,rd(s->r,128,4));
L_1803fb50c_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb50c_4:;
/* 1803fb514: mov r8, qword ptr [rsp + 0x118] */
L_1803fb514_0:;
L_1803fb514_1:;
wr(s->u,16,8,(((U)UINT64_C(0x118))+rd(s->r,32,8)));
L_1803fb514_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803fb514_3:;
wr(s->r,128,8,rd(s->u,40,8));
L_1803fb514_4:;
/* 1803fb51c: mov dword ptr [rsp + 0x160], r10d */
L_1803fb51c_0:;
L_1803fb51c_1:;
wr(s->u,16,8,(((U)UINT64_C(0x160))+rd(s->r,32,8)));
L_1803fb51c_2:;
wr(s->u,24,4,rd(s->r,144,4));
L_1803fb51c_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb51c_4:;
/* 1803fb524: mov r10d, dword ptr [rsp + 0xe8] */
L_1803fb524_0:;
L_1803fb524_1:;
wr(s->u,16,8,(((U)UINT64_C(0xe8))+rd(s->r,32,8)));
L_1803fb524_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb524_3:;
wr(s->r,144,4,rd(s->u,36,4));
L_1803fb524_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fb524_5:;
/* 1803fb52c: mov dword ptr [rsp + 0x148], r13d */
L_1803fb52c_0:;
L_1803fb52c_1:;
wr(s->u,16,8,(((U)UINT64_C(0x148))+rd(s->r,32,8)));
L_1803fb52c_2:;
wr(s->u,24,4,rd(s->r,168,4));
L_1803fb52c_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb52c_4:;
/* 1803fb534: mov r13d, dword ptr [rsp + 0xf8] */
L_1803fb534_0:;
L_1803fb534_1:;
wr(s->u,16,8,(((U)UINT64_C(0xf8))+rd(s->r,32,8)));
L_1803fb534_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb534_3:;
wr(s->r,168,4,rd(s->u,36,4));
L_1803fb534_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb534_5:;
/* 1803fb53c: mov r12d, dword ptr [rsp + 0x148] */
L_1803fb53c_0:;
L_1803fb53c_1:;
wr(s->u,16,8,(((U)UINT64_C(0x148))+rd(s->r,32,8)));
L_1803fb53c_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb53c_3:;
wr(s->r,160,4,rd(s->u,36,4));
L_1803fb53c_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb53c_5:;
/* 1803fb544: lea r14d, [rax + r12] */
L_1803fb544_0:;
L_1803fb544_1:;
wr(s->u,0,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803fb544_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803fb544_3:;
wr(s->r,176,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fb544_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb544_5:;
/* 1803fb548: mov dword ptr [rsp + 0x130], r14d */
L_1803fb548_0:;
L_1803fb548_1:;
wr(s->u,16,8,(((U)UINT64_C(0x130))+rd(s->r,32,8)));
L_1803fb548_2:;
wr(s->u,24,4,rd(s->r,176,4));
L_1803fb548_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb548_4:;
/* 1803fb550: mov r12d, esi */
L_1803fb550_0:;
L_1803fb550_1:;
wr(s->r,160,4,rd(s->r,48,4));
L_1803fb550_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb550_3:;
/* 1803fb553: xor r14d, r14d */
L_1803fb553_0:;
L_1803fb553_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb553_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb553_3:;
wr(s->r,176,4,(rd(s->r,176,4)^rd(s->r,176,4)));
L_1803fb553_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb553_5:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb553_6:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803fb553_7:;
wr(s->u,48,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803fb553_8:;
wr(s->u,52,1,pop(rd(s->u,48,4),4));
L_1803fb553_9:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803fb553_10:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803fb553_11:;
/* 1803fb556: add r12d, -1 */
L_1803fb556_0:;
L_1803fb556_1:;
wr(s->r,512,1,(((rd(s->r,160,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,160,4)));
L_1803fb556_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fb556_3:;
wr(s->r,160,4,(rd(s->r,160,4)+((U)UINT64_C(0xffffffff))));
L_1803fb556_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb556_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb556_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fb556_7:;
wr(s->u,48,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fb556_8:;
wr(s->u,52,1,pop(rd(s->u,48,4),4));
L_1803fb556_9:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803fb556_10:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803fb556_11:;
/* 1803fb55a: movsxd rax, r12d */
L_1803fb55a_0:;
L_1803fb55a_1:;
wr(s->r,0,8,(U)sx(rd(s->r,160,4),4));
L_1803fb55a_2:;
/* 1803fb55d: mov qword ptr [rsp + 0x1d8], r14 */
L_1803fb55d_0:;
L_1803fb55d_1:;
wr(s->u,16,8,(((U)UINT64_C(0x1d8))+rd(s->r,32,8)));
L_1803fb55d_2:;
wr(s->u,28,8,rd(s->r,176,8));
L_1803fb55d_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803fb55d_4:;
/* 1803fb565: js 0x1803fb719 */
L_1803fb565_0:;
L_1803fb565_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803fb719);}
L_1803fb565_2:;
return UINT64_C(0x1803fb56b);
}
uint64_t b_1803fb550(CPU*s){
/* 1803fb550: mov r12d, esi */
L_1803fb550_0:;
L_1803fb550_1:;
wr(s->r,160,4,rd(s->r,48,4));
L_1803fb550_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb550_3:;
/* 1803fb553: xor r14d, r14d */
L_1803fb553_0:;
L_1803fb553_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb553_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb553_3:;
wr(s->r,176,4,(rd(s->r,176,4)^rd(s->r,176,4)));
L_1803fb553_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb553_5:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb553_6:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803fb553_7:;
wr(s->u,16,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803fb553_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803fb553_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803fb553_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803fb553_11:;
/* 1803fb556: add r12d, -1 */
L_1803fb556_0:;
L_1803fb556_1:;
wr(s->r,512,1,(((rd(s->r,160,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,160,4)));
L_1803fb556_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fb556_3:;
wr(s->r,160,4,(rd(s->r,160,4)+((U)UINT64_C(0xffffffff))));
L_1803fb556_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb556_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb556_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fb556_7:;
wr(s->u,16,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fb556_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803fb556_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803fb556_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803fb556_11:;
/* 1803fb55a: movsxd rax, r12d */
L_1803fb55a_0:;
L_1803fb55a_1:;
wr(s->r,0,8,(U)sx(rd(s->r,160,4),4));
L_1803fb55a_2:;
/* 1803fb55d: mov qword ptr [rsp + 0x1d8], r14 */
L_1803fb55d_0:;
L_1803fb55d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1d8))+rd(s->r,32,8)));
L_1803fb55d_2:;
wr(s->u,8,8,rd(s->r,176,8));
L_1803fb55d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803fb55d_4:;
/* 1803fb565: js 0x1803fb719 */
L_1803fb565_0:;
L_1803fb565_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803fb719);}
L_1803fb565_2:;
return UINT64_C(0x1803fb56b);
}
uint64_t b_1803fb56b(CPU*s){
/* 1803fb56b: mov r15, qword ptr [rsp + 0x1e8] */
L_1803fb56b_0:;
L_1803fb56b_1:;
wr(s->u,32,8,(((U)UINT64_C(0x1e8))+rd(s->r,32,8)));
L_1803fb56b_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,32,8),8));
L_1803fb56b_3:;
wr(s->r,184,8,rd(s->u,56,8));
L_1803fb56b_4:;
/* 1803fb573: movss xmm14, dword ptr [rsp + 0x170] */
L_1803fb573_0:;
L_1803fb573_1:;
wr(s->u,32,8,(((U)UINT64_C(0x170))+rd(s->r,32,8)));
L_1803fb573_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fb573_3:;
wr(s->r,5504,4,rd(s->u,40,4));
L_1803fb573_4:;
wr(s->r,5508,4,((U)UINT64_C(0x0)));
L_1803fb573_5:;
wr(s->r,5512,4,((U)UINT64_C(0x0)));
L_1803fb573_6:;
wr(s->r,5516,4,((U)UINT64_C(0x0)));
L_1803fb573_7:;
/* 1803fb57d: mov dword ptr [rsp + 0xd8], edi */
L_1803fb57d_0:;
L_1803fb57d_1:;
wr(s->u,32,8,(((U)UINT64_C(0xd8))+rd(s->r,32,8)));
L_1803fb57d_2:;
wr(s->u,40,4,rd(s->r,56,4));
L_1803fb57d_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb57d_4:;
/* 1803fb584: mov qword ptr [rsp + 0x118], r8 */
L_1803fb584_0:;
L_1803fb584_1:;
wr(s->u,32,8,(((U)UINT64_C(0x118))+rd(s->r,32,8)));
L_1803fb584_2:;
wr(s->u,44,8,rd(s->r,128,8));
L_1803fb584_3:;
mw((uint64_t)rd(s->u,32,8),8,rd(s->u,44,8));
L_1803fb584_4:;
/* 1803fb58c: mov r8d, dword ptr [rsp + 0x168] */
L_1803fb58c_0:;
L_1803fb58c_1:;
wr(s->u,32,8,(((U)UINT64_C(0x168))+rd(s->r,32,8)));
L_1803fb58c_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fb58c_3:;
wr(s->r,128,4,rd(s->u,52,4));
L_1803fb58c_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fb58c_5:;
/* 1803fb594: mov dword ptr [rsp + 0xe0], r9d */
L_1803fb594_0:;
L_1803fb594_1:;
wr(s->u,32,8,(((U)UINT64_C(0xe0))+rd(s->r,32,8)));
L_1803fb594_2:;
wr(s->u,40,4,rd(s->r,136,4));
L_1803fb594_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb594_4:;
/* 1803fb59c: mov r9d, dword ptr [rip + 0x4136bd] */
L_1803fb59c_0:;
L_1803fb59c_1:;
wr(s->r,136,4,mr(UINT64_C(0x18080ec60),4));
L_1803fb59c_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fb59c_3:;
/* 1803fb5a3: mov dword ptr [rsp + 0xe8], r10d */
L_1803fb5a3_0:;
L_1803fb5a3_1:;
wr(s->u,32,8,(((U)UINT64_C(0xe8))+rd(s->r,32,8)));
L_1803fb5a3_2:;
wr(s->u,40,4,rd(s->r,144,4));
L_1803fb5a3_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb5a3_4:;
/* 1803fb5ab: mov r10d, dword ptr [rsp + 0x160] */
L_1803fb5ab_0:;
L_1803fb5ab_1:;
wr(s->u,32,8,(((U)UINT64_C(0x160))+rd(s->r,32,8)));
L_1803fb5ab_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fb5ab_3:;
wr(s->r,144,4,rd(s->u,52,4));
L_1803fb5ab_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fb5ab_5:;
/* 1803fb5b3: mov dword ptr [rsp + 0xf0], r11d */
L_1803fb5b3_0:;
L_1803fb5b3_1:;
wr(s->u,32,8,(((U)UINT64_C(0xf0))+rd(s->r,32,8)));
L_1803fb5b3_2:;
wr(s->u,40,4,rd(s->r,152,4));
L_1803fb5b3_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb5b3_4:;
/* 1803fb5bb: lea r14, [rax + 1] */
L_1803fb5bb_0:;
L_1803fb5bb_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fb5bb_2:;
wr(s->r,176,8,rd(s->u,0,8));
L_1803fb5bb_3:;
/* 1803fb5bf: mov qword ptr [rsp + 0x20], r14 */
L_1803fb5bf_0:;
L_1803fb5bf_1:;
wr(s->u,24,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fb5bf_2:;
wr(s->u,44,8,rd(s->r,176,8));
L_1803fb5bf_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,44,8));
L_1803fb5bf_4:;
/* 1803fb5c4: mov dword ptr [rsp + 0xf8], r13d */
L_1803fb5c4_0:;
L_1803fb5c4_1:;
wr(s->u,32,8,(((U)UINT64_C(0xf8))+rd(s->r,32,8)));
L_1803fb5c4_2:;
wr(s->u,40,4,rd(s->r,168,4));
L_1803fb5c4_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb5c4_4:;
/* 1803fb5cc: mov dword ptr [rsp + 0x108], esi */
L_1803fb5cc_0:;
L_1803fb5cc_1:;
wr(s->u,32,8,(((U)UINT64_C(0x108))+rd(s->r,32,8)));
L_1803fb5cc_2:;
wr(s->u,40,4,rd(s->r,48,4));
L_1803fb5cc_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb5cc_4:;
/* 1803fb5d3: mov rsi, qword ptr [rsp + 0x20] */
L_1803fb5d3_0:;
L_1803fb5d3_1:;
wr(s->u,24,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fb5d3_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803fb5d3_3:;
wr(s->r,48,8,rd(s->u,56,8));
L_1803fb5d3_4:;
/* 1803fb5d8: mov dword ptr [rsp + 0x100], ebx */
L_1803fb5d8_0:;
L_1803fb5d8_1:;
wr(s->u,32,8,(((U)UINT64_C(0x100))+rd(s->r,32,8)));
L_1803fb5d8_2:;
wr(s->u,40,4,rd(s->r,24,4));
L_1803fb5d8_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb5d8_4:;
/* 1803fb5df: mov edi, 0x3f800000 */
L_1803fb5df_0:;
L_1803fb5df_1:;
wr(s->r,56,8,((U)UINT64_C(0x3f800000)));
L_1803fb5df_2:;
/* 1803fb5e4: lea r14, [r15 + rax*4] */
L_1803fb5e4_0:;
L_1803fb5e4_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fb5e4_2:;
wr(s->u,16,8,(rd(s->r,184,8)+rd(s->u,8,8)));
L_1803fb5e4_3:;
wr(s->r,176,8,rd(s->u,16,8));
L_1803fb5e4_4:;
/* 1803fb5e8: mov r15, qword ptr [rsp + 0x1d8] */
L_1803fb5e8_0:;
L_1803fb5e8_1:;
wr(s->u,32,8,(((U)UINT64_C(0x1d8))+rd(s->r,32,8)));
L_1803fb5e8_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,32,8),8));
L_1803fb5e8_3:;
wr(s->r,184,8,rd(s->u,56,8));
L_1803fb5e8_4:;
/* 1803fb5f0: mov qword ptr [rsp + 0x28], r14 */
L_1803fb5f0_0:;
L_1803fb5f0_1:;
wr(s->u,24,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fb5f0_2:;
wr(s->u,44,8,rd(s->r,176,8));
L_1803fb5f0_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,44,8));
L_1803fb5f0_4:;
/* 1803fb5f5: mov rbx, qword ptr [rsp + 0x28] */
L_1803fb5f5_0:;
L_1803fb5f5_1:;
wr(s->u,24,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fb5f5_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803fb5f5_3:;
wr(s->r,24,8,rd(s->u,56,8));
L_1803fb5f5_4:;
/* 1803fb5fa: movss xmm13, dword ptr [rbx] */
L_1803fb5fa_0:;
L_1803fb5fa_1:;
wr(s->u,40,4,mr((uint64_t)rd(s->r,24,8),4));
L_1803fb5fa_2:;
wr(s->r,5440,4,rd(s->u,40,4));
L_1803fb5fa_3:;
wr(s->r,5444,4,((U)UINT64_C(0x0)));
L_1803fb5fa_4:;
wr(s->r,5448,4,((U)UINT64_C(0x0)));
L_1803fb5fa_5:;
wr(s->r,5452,4,((U)UINT64_C(0x0)));
L_1803fb5fa_6:;
/* 1803fb5ff: movss dword ptr [rsp + 0x224], xmm13 */
L_1803fb5ff_0:;
L_1803fb5ff_1:;
wr(s->u,32,8,(((U)UINT64_C(0x224))+rd(s->r,32,8)));
L_1803fb5ff_2:;
wr(s->u,40,4,rd(s->r,5440,4));
L_1803fb5ff_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb5ff_4:;
/* 1803fb609: mov r14d, dword ptr [rsp + 0x224] */
L_1803fb609_0:;
L_1803fb609_1:;
wr(s->u,32,8,(((U)UINT64_C(0x224))+rd(s->r,32,8)));
L_1803fb609_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fb609_3:;
wr(s->r,176,4,rd(s->u,52,4));
L_1803fb609_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb609_5:;
/* 1803fb611: mov r11d, r14d */
L_1803fb611_0:;
L_1803fb611_1:;
wr(s->r,152,4,rd(s->r,176,4));
L_1803fb611_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fb611_3:;
/* 1803fb614: and r11d, 0x80000000 */
L_1803fb614_0:;
L_1803fb614_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb614_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb614_3:;
wr(s->r,152,4,(rd(s->r,152,4)&((U)UINT64_C(0x80000000))));
L_1803fb614_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fb614_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb614_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fb614_7:;
wr(s->u,65,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fb614_8:;
wr(s->u,69,1,pop(rd(s->u,65,4),4));
L_1803fb614_9:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803fb614_10:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803fb614_11:;
/* 1803fb61b: mov r13d, r14d */
L_1803fb61b_0:;
L_1803fb61b_1:;
wr(s->r,168,4,rd(s->r,176,4));
L_1803fb61b_2:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb61b_3:;
/* 1803fb61e: and r13d, 0x7fffffff */
L_1803fb61e_0:;
L_1803fb61e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb61e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb61e_3:;
wr(s->r,168,4,(rd(s->r,168,4)&((U)UINT64_C(0x7fffffff))));
L_1803fb61e_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb61e_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb61e_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fb61e_7:;
wr(s->u,65,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fb61e_8:;
wr(s->u,69,1,pop(rd(s->u,65,4),4));
L_1803fb61e_9:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803fb61e_10:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803fb61e_11:;
/* 1803fb625: cmp r13d, 0x800000 */
L_1803fb625_0:;
L_1803fb625_1:;
wr(s->u,71,4,rd(s->r,168,4));
L_1803fb625_2:;
wr(s->r,512,1,(rd(s->u,71,4)<((U)UINT64_C(0x800000))));
L_1803fb625_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,71,4),((U)UINT64_C(0x800000)),4,1));
L_1803fb625_4:;
wr(s->u,75,4,(rd(s->u,71,4)-((U)UINT64_C(0x800000))));
L_1803fb625_5:;
wr(s->r,519,1,(sx(rd(s->u,75,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb625_6:;
wr(s->r,518,1,(rd(s->u,75,4)==((U)UINT64_C(0x0))));
L_1803fb625_7:;
wr(s->u,65,4,(rd(s->u,75,4)&((U)UINT64_C(0xff))));
L_1803fb625_8:;
wr(s->u,69,1,pop(rd(s->u,65,4),4));
L_1803fb625_9:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803fb625_10:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803fb625_11:;
/* 1803fb62c: jae 0x1803fb632 */
L_1803fb62c_0:;
L_1803fb62c_1:;
wr(s->u,64,1,(!rd(s->r,512,1)));
L_1803fb62c_2:;
if(rd(s->u,64,1)){return UINT64_C(0x1803fb632);}
L_1803fb62c_3:;
return UINT64_C(0x1803fb62e);
}
uint64_t b_1803fb5fa(CPU*s){
/* 1803fb5fa: movss xmm13, dword ptr [rbx] */
L_1803fb5fa_0:;
L_1803fb5fa_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,24,8),4));
L_1803fb5fa_2:;
wr(s->r,5440,4,rd(s->u,8,4));
L_1803fb5fa_3:;
wr(s->r,5444,4,((U)UINT64_C(0x0)));
L_1803fb5fa_4:;
wr(s->r,5448,4,((U)UINT64_C(0x0)));
L_1803fb5fa_5:;
wr(s->r,5452,4,((U)UINT64_C(0x0)));
L_1803fb5fa_6:;
/* 1803fb5ff: movss dword ptr [rsp + 0x224], xmm13 */
L_1803fb5ff_0:;
L_1803fb5ff_1:;
wr(s->u,0,8,(((U)UINT64_C(0x224))+rd(s->r,32,8)));
L_1803fb5ff_2:;
wr(s->u,8,4,rd(s->r,5440,4));
L_1803fb5ff_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fb5ff_4:;
/* 1803fb609: mov r14d, dword ptr [rsp + 0x224] */
L_1803fb609_0:;
L_1803fb609_1:;
wr(s->u,0,8,(((U)UINT64_C(0x224))+rd(s->r,32,8)));
L_1803fb609_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb609_3:;
wr(s->r,176,4,rd(s->u,12,4));
L_1803fb609_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb609_5:;
/* 1803fb611: mov r11d, r14d */
L_1803fb611_0:;
L_1803fb611_1:;
wr(s->r,152,4,rd(s->r,176,4));
L_1803fb611_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fb611_3:;
/* 1803fb614: and r11d, 0x80000000 */
L_1803fb614_0:;
L_1803fb614_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb614_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb614_3:;
wr(s->r,152,4,(rd(s->r,152,4)&((U)UINT64_C(0x80000000))));
L_1803fb614_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fb614_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb614_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fb614_7:;
wr(s->u,17,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fb614_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fb614_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb614_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb614_11:;
/* 1803fb61b: mov r13d, r14d */
L_1803fb61b_0:;
L_1803fb61b_1:;
wr(s->r,168,4,rd(s->r,176,4));
L_1803fb61b_2:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb61b_3:;
/* 1803fb61e: and r13d, 0x7fffffff */
L_1803fb61e_0:;
L_1803fb61e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb61e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb61e_3:;
wr(s->r,168,4,(rd(s->r,168,4)&((U)UINT64_C(0x7fffffff))));
L_1803fb61e_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb61e_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb61e_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fb61e_7:;
wr(s->u,17,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fb61e_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fb61e_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb61e_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb61e_11:;
/* 1803fb625: cmp r13d, 0x800000 */
L_1803fb625_0:;
L_1803fb625_1:;
wr(s->u,23,4,rd(s->r,168,4));
L_1803fb625_2:;
wr(s->r,512,1,(rd(s->u,23,4)<((U)UINT64_C(0x800000))));
L_1803fb625_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,23,4),((U)UINT64_C(0x800000)),4,1));
L_1803fb625_4:;
wr(s->u,27,4,(rd(s->u,23,4)-((U)UINT64_C(0x800000))));
L_1803fb625_5:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb625_6:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803fb625_7:;
wr(s->u,17,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803fb625_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fb625_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb625_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb625_11:;
/* 1803fb62c: jae 0x1803fb632 */
L_1803fb62c_0:;
L_1803fb62c_1:;
wr(s->u,16,1,(!rd(s->r,512,1)));
L_1803fb62c_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803fb632);}
L_1803fb62c_3:;
return UINT64_C(0x1803fb62e);
}
uint64_t b_1803fb62e(CPU*s){
/* 1803fb62e: mov dword ptr [rbx], edi */
L_1803fb62e_0:;
L_1803fb62e_1:;
wr(s->u,0,4,rd(s->r,56,4));
L_1803fb62e_2:;
mw((uint64_t)rd(s->r,24,8),4,rd(s->u,0,4));
L_1803fb62e_3:;
/* 1803fb630: jmp 0x1803fb67d */
L_1803fb630_0:;
L_1803fb630_1:;
return UINT64_C(0x1803fb67d);
L_1803fb630_2:;
return UINT64_C(0x1803fb632);
}
uint64_t b_1803fb632(CPU*s){
/* 1803fb632: test r11d, r11d */
L_1803fb632_0:;
L_1803fb632_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb632_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb632_3:;
wr(s->u,6,4,(rd(s->r,152,4)&rd(s->r,152,4)));
L_1803fb632_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb632_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803fb632_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803fb632_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fb632_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fb632_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fb632_10:;
/* 1803fb635: je 0x1803fb65a */
L_1803fb635_0:;
L_1803fb635_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fb65a);}
L_1803fb635_2:;
return UINT64_C(0x1803fb637);
}
uint64_t b_1803fb637(CPU*s){
/* 1803fb637: cmp r14d, 0xc2aeac50 */
L_1803fb637_0:;
L_1803fb637_1:;
wr(s->u,6,4,rd(s->r,176,4));
L_1803fb637_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0xc2aeac50))));
L_1803fb637_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0xc2aeac50)),4,1));
L_1803fb637_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0xc2aeac50))));
L_1803fb637_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb637_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fb637_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fb637_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fb637_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fb637_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fb637_11:;
/* 1803fb63e: jb 0x1803fb695 */
L_1803fb63e_0:;
L_1803fb63e_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fb695);}
L_1803fb63e_2:;
return UINT64_C(0x1803fb640);
}
uint64_t b_1803fb640(CPU*s){
/* 1803fb640: and r14d, 0x7fc00000 */
L_1803fb640_0:;
L_1803fb640_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb640_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb640_3:;
wr(s->r,176,4,(rd(s->r,176,4)&((U)UINT64_C(0x7fc00000))));
L_1803fb640_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb640_5:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb640_6:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803fb640_7:;
wr(s->u,1,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803fb640_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fb640_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fb640_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fb640_11:;
/* 1803fb647: cmp r14d, 0x7fc00000 */
L_1803fb647_0:;
L_1803fb647_1:;
wr(s->u,7,4,rd(s->r,176,4));
L_1803fb647_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x7fc00000))));
L_1803fb647_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803fb647_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x7fc00000))));
L_1803fb647_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb647_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fb647_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fb647_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fb647_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fb647_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fb647_11:;
/* 1803fb64e: jne 0x1803fb655 */
L_1803fb64e_0:;
L_1803fb64e_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fb64e_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fb655);}
L_1803fb64e_3:;
return UINT64_C(0x1803fb650);
}
uint64_t b_1803fb650(CPU*s){
/* 1803fb650: mov dword ptr [rbx], r9d */
L_1803fb650_0:;
L_1803fb650_1:;
wr(s->u,0,4,rd(s->r,136,4));
L_1803fb650_2:;
mw((uint64_t)rd(s->r,24,8),4,rd(s->u,0,4));
L_1803fb650_3:;
/* 1803fb653: jmp 0x1803fb67d */
L_1803fb653_0:;
L_1803fb653_1:;
return UINT64_C(0x1803fb67d);
L_1803fb653_2:;
return UINT64_C(0x1803fb655);
}
uint64_t b_1803fb655(CPU*s){
/* 1803fb655: mov dword ptr [rbx], r8d */
L_1803fb655_0:;
L_1803fb655_1:;
wr(s->u,0,4,rd(s->r,128,4));
L_1803fb655_2:;
mw((uint64_t)rd(s->r,24,8),4,rd(s->u,0,4));
L_1803fb655_3:;
/* 1803fb658: jmp 0x1803fb67d */
L_1803fb658_0:;
L_1803fb658_1:;
return UINT64_C(0x1803fb67d);
L_1803fb658_2:;
return UINT64_C(0x1803fb65a);
}
uint64_t b_1803fb65a(CPU*s){
/* 1803fb65a: cmp r14d, 0x42b17218 */
L_1803fb65a_0:;
L_1803fb65a_1:;
wr(s->u,6,4,rd(s->r,176,4));
L_1803fb65a_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x42b17218))));
L_1803fb65a_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x42b17218)),4,1));
L_1803fb65a_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x42b17218))));
L_1803fb65a_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb65a_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fb65a_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fb65a_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fb65a_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fb65a_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fb65a_11:;
/* 1803fb661: jb 0x1803fb695 */
L_1803fb661_0:;
L_1803fb661_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fb695);}
L_1803fb661_2:;
return UINT64_C(0x1803fb663);
}
uint64_t b_1803fb663(CPU*s){
/* 1803fb663: and r14d, 0x7fc00000 */
L_1803fb663_0:;
L_1803fb663_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb663_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb663_3:;
wr(s->r,176,4,(rd(s->r,176,4)&((U)UINT64_C(0x7fc00000))));
L_1803fb663_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb663_5:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb663_6:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803fb663_7:;
wr(s->u,1,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803fb663_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fb663_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fb663_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fb663_11:;
/* 1803fb66a: cmp r14d, 0x7fc00000 */
L_1803fb66a_0:;
L_1803fb66a_1:;
wr(s->u,7,4,rd(s->r,176,4));
L_1803fb66a_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x7fc00000))));
L_1803fb66a_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803fb66a_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x7fc00000))));
L_1803fb66a_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb66a_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fb66a_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fb66a_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fb66a_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fb66a_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fb66a_11:;
/* 1803fb671: jne 0x1803fb67a */
L_1803fb671_0:;
L_1803fb671_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fb671_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fb67a);}
L_1803fb671_3:;
return UINT64_C(0x1803fb673);
}
uint64_t b_1803fb673(CPU*s){
/* 1803fb673: movss dword ptr [rbx], xmm14 */
L_1803fb673_0:;
L_1803fb673_1:;
wr(s->u,0,4,rd(s->r,5504,4));
L_1803fb673_2:;
mw((uint64_t)rd(s->r,24,8),4,rd(s->u,0,4));
L_1803fb673_3:;
/* 1803fb678: jmp 0x1803fb67d */
L_1803fb678_0:;
L_1803fb678_1:;
return UINT64_C(0x1803fb67d);
L_1803fb678_2:;
return UINT64_C(0x1803fb67a);
}
uint64_t b_1803fb67a(CPU*s){
/* 1803fb67a: mov dword ptr [rbx], r10d */
L_1803fb67a_0:;
L_1803fb67a_1:;
wr(s->u,8,4,rd(s->r,144,4));
L_1803fb67a_2:;
mw((uint64_t)rd(s->r,24,8),4,rd(s->u,8,4));
L_1803fb67a_3:;
/* 1803fb67d: lea r12d, [rax - 1] */
L_1803fb67d_0:;
L_1803fb67d_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fb67d_2:;
wr(s->r,160,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fb67d_3:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb67d_4:;
/* 1803fb681: sub r12d, r15d */
L_1803fb681_0:;
L_1803fb681_1:;
wr(s->r,512,1,(rd(s->r,160,4)<rd(s->r,184,4)));
L_1803fb681_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),rd(s->r,184,4),4,1));
L_1803fb681_3:;
wr(s->r,160,4,(rd(s->r,160,4)-rd(s->r,184,4)));
L_1803fb681_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb681_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb681_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fb681_7:;
wr(s->u,13,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fb681_8:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803fb681_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb681_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb681_11:;
/* 1803fb684: add rbx, -4 */
L_1803fb684_0:;
L_1803fb684_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffffc)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803fb684_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0xfffffffffffffffc)),8,0));
L_1803fb684_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fb684_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb684_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803fb684_6:;
wr(s->u,13,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803fb684_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803fb684_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb684_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb684_10:;
/* 1803fb688: add r15, 1 */
L_1803fb688_0:;
L_1803fb688_1:;
wr(s->r,512,1,(((rd(s->r,184,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,184,8)));
L_1803fb688_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,8),((U)UINT64_C(0x1)),8,0));
L_1803fb688_3:;
wr(s->r,184,8,(rd(s->r,184,8)+((U)UINT64_C(0x1))));
L_1803fb688_4:;
wr(s->r,519,1,(sx(rd(s->r,184,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb688_5:;
wr(s->r,518,1,(rd(s->r,184,8)==((U)UINT64_C(0x0))));
L_1803fb688_6:;
wr(s->u,13,8,(rd(s->r,184,8)&((U)UINT64_C(0xff))));
L_1803fb688_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803fb688_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb688_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb688_10:;
/* 1803fb68c: cmp r15, rsi */
L_1803fb68c_0:;
L_1803fb68c_1:;
wr(s->u,23,8,rd(s->r,48,8));
L_1803fb68c_2:;
wr(s->r,512,1,(rd(s->r,184,8)<rd(s->u,23,8)));
L_1803fb68c_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,8),rd(s->u,23,8),8,1));
L_1803fb68c_4:;
wr(s->u,31,8,(rd(s->r,184,8)-rd(s->u,23,8)));
L_1803fb68c_5:;
wr(s->r,519,1,(sx(rd(s->u,31,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb68c_6:;
wr(s->r,518,1,(rd(s->u,31,8)==((U)UINT64_C(0x0))));
L_1803fb68c_7:;
wr(s->u,13,8,(rd(s->u,31,8)&((U)UINT64_C(0xff))));
L_1803fb68c_8:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803fb68c_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb68c_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb68c_11:;
/* 1803fb68f: jl 0x1803fb5fa */
L_1803fb68f_0:;
L_1803fb68f_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fb68f_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803fb5fa);}
L_1803fb68f_3:;
return UINT64_C(0x1803fb695);
}
uint64_t b_1803fb67d(CPU*s){
/* 1803fb67d: lea r12d, [rax - 1] */
L_1803fb67d_0:;
L_1803fb67d_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fb67d_2:;
wr(s->r,160,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fb67d_3:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb67d_4:;
/* 1803fb681: sub r12d, r15d */
L_1803fb681_0:;
L_1803fb681_1:;
wr(s->r,512,1,(rd(s->r,160,4)<rd(s->r,184,4)));
L_1803fb681_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),rd(s->r,184,4),4,1));
L_1803fb681_3:;
wr(s->r,160,4,(rd(s->r,160,4)-rd(s->r,184,4)));
L_1803fb681_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb681_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb681_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fb681_7:;
wr(s->u,9,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fb681_8:;
wr(s->u,17,1,pop(rd(s->u,9,4),4));
L_1803fb681_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fb681_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fb681_11:;
/* 1803fb684: add rbx, -4 */
L_1803fb684_0:;
L_1803fb684_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffffc)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803fb684_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0xfffffffffffffffc)),8,0));
L_1803fb684_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fb684_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb684_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803fb684_6:;
wr(s->u,9,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803fb684_7:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fb684_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fb684_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fb684_10:;
/* 1803fb688: add r15, 1 */
L_1803fb688_0:;
L_1803fb688_1:;
wr(s->r,512,1,(((rd(s->r,184,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,184,8)));
L_1803fb688_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,8),((U)UINT64_C(0x1)),8,0));
L_1803fb688_3:;
wr(s->r,184,8,(rd(s->r,184,8)+((U)UINT64_C(0x1))));
L_1803fb688_4:;
wr(s->r,519,1,(sx(rd(s->r,184,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb688_5:;
wr(s->r,518,1,(rd(s->r,184,8)==((U)UINT64_C(0x0))));
L_1803fb688_6:;
wr(s->u,9,8,(rd(s->r,184,8)&((U)UINT64_C(0xff))));
L_1803fb688_7:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fb688_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fb688_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fb688_10:;
/* 1803fb68c: cmp r15, rsi */
L_1803fb68c_0:;
L_1803fb68c_1:;
wr(s->u,19,8,rd(s->r,48,8));
L_1803fb68c_2:;
wr(s->r,512,1,(rd(s->r,184,8)<rd(s->u,19,8)));
L_1803fb68c_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,8),rd(s->u,19,8),8,1));
L_1803fb68c_4:;
wr(s->u,27,8,(rd(s->r,184,8)-rd(s->u,19,8)));
L_1803fb68c_5:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb68c_6:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803fb68c_7:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803fb68c_8:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fb68c_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fb68c_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fb68c_11:;
/* 1803fb68f: jl 0x1803fb5fa */
L_1803fb68f_0:;
L_1803fb68f_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fb68f_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803fb5fa);}
L_1803fb68f_3:;
return UINT64_C(0x1803fb695);
}
uint64_t b_1803fb695(CPU*s){
/* 1803fb695: mov edi, dword ptr [rsp + 0xd8] */
L_1803fb695_0:;
L_1803fb695_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd8))+rd(s->r,32,8)));
L_1803fb695_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb695_3:;
wr(s->r,56,4,rd(s->u,36,4));
L_1803fb695_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fb695_5:;
/* 1803fb69c: mov r9d, dword ptr [rsp + 0xe0] */
L_1803fb69c_0:;
L_1803fb69c_1:;
wr(s->u,16,8,(((U)UINT64_C(0xe0))+rd(s->r,32,8)));
L_1803fb69c_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb69c_3:;
wr(s->r,136,4,rd(s->u,36,4));
L_1803fb69c_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fb69c_5:;
/* 1803fb6a4: mov r13d, dword ptr [rsp + 0xf8] */
L_1803fb6a4_0:;
L_1803fb6a4_1:;
wr(s->u,16,8,(((U)UINT64_C(0xf8))+rd(s->r,32,8)));
L_1803fb6a4_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb6a4_3:;
wr(s->r,168,4,rd(s->u,36,4));
L_1803fb6a4_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb6a4_5:;
/* 1803fb6ac: mov esi, dword ptr [rsp + 0x108] */
L_1803fb6ac_0:;
L_1803fb6ac_1:;
wr(s->u,16,8,(((U)UINT64_C(0x108))+rd(s->r,32,8)));
L_1803fb6ac_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb6ac_3:;
wr(s->r,48,4,rd(s->u,36,4));
L_1803fb6ac_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fb6ac_5:;
/* 1803fb6b3: mov ebx, dword ptr [rsp + 0x100] */
L_1803fb6b3_0:;
L_1803fb6b3_1:;
wr(s->u,16,8,(((U)UINT64_C(0x100))+rd(s->r,32,8)));
L_1803fb6b3_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb6b3_3:;
wr(s->r,24,4,rd(s->u,36,4));
L_1803fb6b3_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fb6b3_5:;
/* 1803fb6ba: mov eax, dword ptr [rsp + 0xd0] */
L_1803fb6ba_0:;
L_1803fb6ba_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803fb6ba_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb6ba_3:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803fb6ba_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fb6ba_5:;
/* 1803fb6c1: movss dword ptr [rsp + 0x170], xmm14 */
L_1803fb6c1_0:;
L_1803fb6c1_1:;
wr(s->u,16,8,(((U)UINT64_C(0x170))+rd(s->r,32,8)));
L_1803fb6c1_2:;
wr(s->u,24,4,rd(s->r,5504,4));
L_1803fb6c1_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb6c1_4:;
/* 1803fb6cb: movss dword ptr [rsp + 0x180], xmm13 */
L_1803fb6cb_0:;
L_1803fb6cb_1:;
wr(s->u,16,8,(((U)UINT64_C(0x180))+rd(s->r,32,8)));
L_1803fb6cb_2:;
wr(s->u,24,4,rd(s->r,5440,4));
L_1803fb6cb_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb6cb_4:;
/* 1803fb6d5: mov dword ptr [rsp + 0x168], r8d */
L_1803fb6d5_0:;
L_1803fb6d5_1:;
wr(s->u,16,8,(((U)UINT64_C(0x168))+rd(s->r,32,8)));
L_1803fb6d5_2:;
wr(s->u,24,4,rd(s->r,128,4));
L_1803fb6d5_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb6d5_4:;
/* 1803fb6dd: mov r8, qword ptr [rsp + 0x118] */
L_1803fb6dd_0:;
L_1803fb6dd_1:;
wr(s->u,16,8,(((U)UINT64_C(0x118))+rd(s->r,32,8)));
L_1803fb6dd_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803fb6dd_3:;
wr(s->r,128,8,rd(s->u,40,8));
L_1803fb6dd_4:;
/* 1803fb6e5: mov dword ptr [rsp + 0x160], r10d */
L_1803fb6e5_0:;
L_1803fb6e5_1:;
wr(s->u,16,8,(((U)UINT64_C(0x160))+rd(s->r,32,8)));
L_1803fb6e5_2:;
wr(s->u,24,4,rd(s->r,144,4));
L_1803fb6e5_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb6e5_4:;
/* 1803fb6ed: mov r10d, dword ptr [rsp + 0xe8] */
L_1803fb6ed_0:;
L_1803fb6ed_1:;
wr(s->u,16,8,(((U)UINT64_C(0xe8))+rd(s->r,32,8)));
L_1803fb6ed_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb6ed_3:;
wr(s->r,144,4,rd(s->u,36,4));
L_1803fb6ed_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fb6ed_5:;
/* 1803fb6f5: mov dword ptr [rsp + 0x140], r11d */
L_1803fb6f5_0:;
L_1803fb6f5_1:;
wr(s->u,16,8,(((U)UINT64_C(0x140))+rd(s->r,32,8)));
L_1803fb6f5_2:;
wr(s->u,24,4,rd(s->r,152,4));
L_1803fb6f5_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb6f5_4:;
/* 1803fb6fd: mov r11d, dword ptr [rsp + 0xf0] */
L_1803fb6fd_0:;
L_1803fb6fd_1:;
wr(s->u,16,8,(((U)UINT64_C(0xf0))+rd(s->r,32,8)));
L_1803fb6fd_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb6fd_3:;
wr(s->r,152,4,rd(s->u,36,4));
L_1803fb6fd_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fb6fd_5:;
/* 1803fb705: mov r14d, dword ptr [rsp + 0x140] */
L_1803fb705_0:;
L_1803fb705_1:;
wr(s->u,16,8,(((U)UINT64_C(0x140))+rd(s->r,32,8)));
L_1803fb705_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb705_3:;
wr(s->r,176,4,rd(s->u,36,4));
L_1803fb705_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb705_5:;
/* 1803fb70d: lea r15d, [rax + r14] */
L_1803fb70d_0:;
L_1803fb70d_1:;
wr(s->u,0,8,(rd(s->r,176,8)*((U)UINT64_C(0x1))));
L_1803fb70d_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803fb70d_3:;
wr(s->r,184,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fb70d_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803fb70d_5:;
/* 1803fb711: mov dword ptr [rsp + 0x128], r15d */
L_1803fb711_0:;
L_1803fb711_1:;
wr(s->u,16,8,(((U)UINT64_C(0x128))+rd(s->r,32,8)));
L_1803fb711_2:;
wr(s->u,24,4,rd(s->r,184,4));
L_1803fb711_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb711_4:;
/* 1803fb719: mov eax, r12d */
L_1803fb719_0:;
L_1803fb719_1:;
wr(s->r,0,4,rd(s->r,160,4));
L_1803fb719_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fb719_3:;
/* 1803fb71c: xor r15d, r15d */
L_1803fb71c_0:;
L_1803fb71c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb71c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb71c_3:;
wr(s->r,184,4,(rd(s->r,184,4)^rd(s->r,184,4)));
L_1803fb71c_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803fb71c_5:;
wr(s->r,519,1,(sx(rd(s->r,184,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb71c_6:;
wr(s->r,518,1,(rd(s->r,184,4)==((U)UINT64_C(0x0))));
L_1803fb71c_7:;
wr(s->u,48,4,(rd(s->r,184,4)&((U)UINT64_C(0xff))));
L_1803fb71c_8:;
wr(s->u,52,1,pop(rd(s->u,48,4),4));
L_1803fb71c_9:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803fb71c_10:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803fb71c_11:;
/* 1803fb71f: add eax, -1 */
L_1803fb71f_0:;
L_1803fb71f_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803fb71f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fb71f_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0xffffffff))));
L_1803fb71f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fb71f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb71f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fb71f_7:;
wr(s->u,48,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fb71f_8:;
wr(s->u,52,1,pop(rd(s->u,48,4),4));
L_1803fb71f_9:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803fb71f_10:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803fb71f_11:;
/* 1803fb722: movsxd r14, eax */
L_1803fb722_0:;
L_1803fb722_1:;
wr(s->r,176,8,(U)sx(rd(s->r,0,4),4));
L_1803fb722_2:;
/* 1803fb725: mov qword ptr [rsp + 0x1e0], r14 */
L_1803fb725_0:;
L_1803fb725_1:;
wr(s->u,16,8,(((U)UINT64_C(0x1e0))+rd(s->r,32,8)));
L_1803fb725_2:;
wr(s->u,28,8,rd(s->r,176,8));
L_1803fb725_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803fb725_4:;
/* 1803fb72d: mov qword ptr [rsp + 0x1d8], r15 */
L_1803fb72d_0:;
L_1803fb72d_1:;
wr(s->u,16,8,(((U)UINT64_C(0x1d8))+rd(s->r,32,8)));
L_1803fb72d_2:;
wr(s->u,28,8,rd(s->r,184,8));
L_1803fb72d_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803fb72d_4:;
/* 1803fb735: js 0x1803fb90e */
L_1803fb735_0:;
L_1803fb735_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803fb90e);}
L_1803fb735_2:;
return UINT64_C(0x1803fb73b);
}
uint64_t b_1803fb719(CPU*s){
/* 1803fb719: mov eax, r12d */
L_1803fb719_0:;
L_1803fb719_1:;
wr(s->r,0,4,rd(s->r,160,4));
L_1803fb719_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fb719_3:;
/* 1803fb71c: xor r15d, r15d */
L_1803fb71c_0:;
L_1803fb71c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb71c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb71c_3:;
wr(s->r,184,4,(rd(s->r,184,4)^rd(s->r,184,4)));
L_1803fb71c_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803fb71c_5:;
wr(s->r,519,1,(sx(rd(s->r,184,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb71c_6:;
wr(s->r,518,1,(rd(s->r,184,4)==((U)UINT64_C(0x0))));
L_1803fb71c_7:;
wr(s->u,16,4,(rd(s->r,184,4)&((U)UINT64_C(0xff))));
L_1803fb71c_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803fb71c_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803fb71c_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803fb71c_11:;
/* 1803fb71f: add eax, -1 */
L_1803fb71f_0:;
L_1803fb71f_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803fb71f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fb71f_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0xffffffff))));
L_1803fb71f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fb71f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb71f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fb71f_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fb71f_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803fb71f_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803fb71f_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803fb71f_11:;
/* 1803fb722: movsxd r14, eax */
L_1803fb722_0:;
L_1803fb722_1:;
wr(s->r,176,8,(U)sx(rd(s->r,0,4),4));
L_1803fb722_2:;
/* 1803fb725: mov qword ptr [rsp + 0x1e0], r14 */
L_1803fb725_0:;
L_1803fb725_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1e0))+rd(s->r,32,8)));
L_1803fb725_2:;
wr(s->u,8,8,rd(s->r,176,8));
L_1803fb725_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803fb725_4:;
/* 1803fb72d: mov qword ptr [rsp + 0x1d8], r15 */
L_1803fb72d_0:;
L_1803fb72d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1d8))+rd(s->r,32,8)));
L_1803fb72d_2:;
wr(s->u,8,8,rd(s->r,184,8));
L_1803fb72d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803fb72d_4:;
/* 1803fb735: js 0x1803fb90e */
L_1803fb735_0:;
L_1803fb735_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803fb90e);}
L_1803fb735_2:;
return UINT64_C(0x1803fb73b);
}
uint64_t b_1803fb73b(CPU*s){
/* 1803fb73b: mov r14, qword ptr [rsp + 0x1e0] */
L_1803fb73b_0:;
L_1803fb73b_1:;
wr(s->u,32,8,(((U)UINT64_C(0x1e0))+rd(s->r,32,8)));
L_1803fb73b_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,32,8),8));
L_1803fb73b_3:;
wr(s->r,176,8,rd(s->u,56,8));
L_1803fb73b_4:;
/* 1803fb743: movss xmm14, dword ptr [rsp + 0x170] */
L_1803fb743_0:;
L_1803fb743_1:;
wr(s->u,32,8,(((U)UINT64_C(0x170))+rd(s->r,32,8)));
L_1803fb743_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fb743_3:;
wr(s->r,5504,4,rd(s->u,40,4));
L_1803fb743_4:;
wr(s->r,5508,4,((U)UINT64_C(0x0)));
L_1803fb743_5:;
wr(s->r,5512,4,((U)UINT64_C(0x0)));
L_1803fb743_6:;
wr(s->r,5516,4,((U)UINT64_C(0x0)));
L_1803fb743_7:;
/* 1803fb74d: mov dword ptr [rsp + 0xd8], edi */
L_1803fb74d_0:;
L_1803fb74d_1:;
wr(s->u,32,8,(((U)UINT64_C(0xd8))+rd(s->r,32,8)));
L_1803fb74d_2:;
wr(s->u,40,4,rd(s->r,56,4));
L_1803fb74d_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb74d_4:;
/* 1803fb754: mov qword ptr [rsp + 0x118], r8 */
L_1803fb754_0:;
L_1803fb754_1:;
wr(s->u,32,8,(((U)UINT64_C(0x118))+rd(s->r,32,8)));
L_1803fb754_2:;
wr(s->u,44,8,rd(s->r,128,8));
L_1803fb754_3:;
mw((uint64_t)rd(s->u,32,8),8,rd(s->u,44,8));
L_1803fb754_4:;
/* 1803fb75c: mov dword ptr [rsp + 0xe0], r9d */
L_1803fb75c_0:;
L_1803fb75c_1:;
wr(s->u,32,8,(((U)UINT64_C(0xe0))+rd(s->r,32,8)));
L_1803fb75c_2:;
wr(s->u,40,4,rd(s->r,136,4));
L_1803fb75c_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb75c_4:;
/* 1803fb764: mov r9d, dword ptr [rsp + 0x168] */
L_1803fb764_0:;
L_1803fb764_1:;
wr(s->u,32,8,(((U)UINT64_C(0x168))+rd(s->r,32,8)));
L_1803fb764_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fb764_3:;
wr(s->r,136,4,rd(s->u,52,4));
L_1803fb764_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fb764_5:;
/* 1803fb76c: lea r15, [r14 + 1] */
L_1803fb76c_0:;
L_1803fb76c_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x1))));
L_1803fb76c_2:;
wr(s->r,184,8,rd(s->u,0,8));
L_1803fb76c_3:;
/* 1803fb770: mov qword ptr [rsp + 0x28], r15 */
L_1803fb770_0:;
L_1803fb770_1:;
wr(s->u,24,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fb770_2:;
wr(s->u,44,8,rd(s->r,184,8));
L_1803fb770_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,44,8));
L_1803fb770_4:;
/* 1803fb775: mov r15, qword ptr [rsp + 0x1e8] */
L_1803fb775_0:;
L_1803fb775_1:;
wr(s->u,32,8,(((U)UINT64_C(0x1e8))+rd(s->r,32,8)));
L_1803fb775_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,32,8),8));
L_1803fb775_3:;
wr(s->r,184,8,rd(s->u,56,8));
L_1803fb775_4:;
/* 1803fb77d: mov rdi, qword ptr [rsp + 0x28] */
L_1803fb77d_0:;
L_1803fb77d_1:;
wr(s->u,24,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fb77d_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803fb77d_3:;
wr(s->r,56,8,rd(s->u,56,8));
L_1803fb77d_4:;
/* 1803fb782: lea r15, [r15 + r14*4] */
L_1803fb782_0:;
L_1803fb782_1:;
wr(s->u,8,8,(rd(s->r,176,8)*((U)UINT64_C(0x4))));
L_1803fb782_2:;
wr(s->u,16,8,(rd(s->r,184,8)+rd(s->u,8,8)));
L_1803fb782_3:;
wr(s->r,184,8,rd(s->u,16,8));
L_1803fb782_4:;
/* 1803fb786: mov qword ptr [rsp + 0x20], r15 */
L_1803fb786_0:;
L_1803fb786_1:;
wr(s->u,24,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fb786_2:;
wr(s->u,44,8,rd(s->r,184,8));
L_1803fb786_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,44,8));
L_1803fb786_4:;
/* 1803fb78b: mov r15, qword ptr [rsp + 0x1d8] */
L_1803fb78b_0:;
L_1803fb78b_1:;
wr(s->u,32,8,(((U)UINT64_C(0x1d8))+rd(s->r,32,8)));
L_1803fb78b_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,32,8),8));
L_1803fb78b_3:;
wr(s->r,184,8,rd(s->u,56,8));
L_1803fb78b_4:;
/* 1803fb793: mov dword ptr [rsp + 0x120], r14d */
L_1803fb793_0:;
L_1803fb793_1:;
wr(s->u,32,8,(((U)UINT64_C(0x120))+rd(s->r,32,8)));
L_1803fb793_2:;
wr(s->u,40,4,rd(s->r,176,4));
L_1803fb793_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb793_4:;
/* 1803fb79b: mov dword ptr [rsp + 0xe8], r10d */
L_1803fb79b_0:;
L_1803fb79b_1:;
wr(s->u,32,8,(((U)UINT64_C(0xe8))+rd(s->r,32,8)));
L_1803fb79b_2:;
wr(s->u,40,4,rd(s->r,144,4));
L_1803fb79b_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb79b_4:;
/* 1803fb7a3: mov r10d, dword ptr [rip + 0x4134b6] */
L_1803fb7a3_0:;
L_1803fb7a3_1:;
wr(s->r,144,4,mr(UINT64_C(0x18080ec60),4));
L_1803fb7a3_2:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fb7a3_3:;
/* 1803fb7aa: mov dword ptr [rsp + 0xf0], r11d */
L_1803fb7aa_0:;
L_1803fb7aa_1:;
wr(s->u,32,8,(((U)UINT64_C(0xf0))+rd(s->r,32,8)));
L_1803fb7aa_2:;
wr(s->u,40,4,rd(s->r,152,4));
L_1803fb7aa_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb7aa_4:;
/* 1803fb7b2: mov r11d, dword ptr [rsp + 0x160] */
L_1803fb7b2_0:;
L_1803fb7b2_1:;
wr(s->u,32,8,(((U)UINT64_C(0x160))+rd(s->r,32,8)));
L_1803fb7b2_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fb7b2_3:;
wr(s->r,152,4,rd(s->u,52,4));
L_1803fb7b2_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fb7b2_5:;
/* 1803fb7ba: mov dword ptr [rsp + 0xf8], r13d */
L_1803fb7ba_0:;
L_1803fb7ba_1:;
wr(s->u,32,8,(((U)UINT64_C(0xf8))+rd(s->r,32,8)));
L_1803fb7ba_2:;
wr(s->u,40,4,rd(s->r,168,4));
L_1803fb7ba_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb7ba_4:;
/* 1803fb7c2: mov dword ptr [rsp + 0x110], r12d */
L_1803fb7c2_0:;
L_1803fb7c2_1:;
wr(s->u,32,8,(((U)UINT64_C(0x110))+rd(s->r,32,8)));
L_1803fb7c2_2:;
wr(s->u,40,4,rd(s->r,160,4));
L_1803fb7c2_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb7c2_4:;
/* 1803fb7ca: mov dword ptr [rsp + 0x108], esi */
L_1803fb7ca_0:;
L_1803fb7ca_1:;
wr(s->u,32,8,(((U)UINT64_C(0x108))+rd(s->r,32,8)));
L_1803fb7ca_2:;
wr(s->u,40,4,rd(s->r,48,4));
L_1803fb7ca_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb7ca_4:;
/* 1803fb7d1: mov rsi, qword ptr [rsp + 0x20] */
L_1803fb7d1_0:;
L_1803fb7d1_1:;
wr(s->u,24,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fb7d1_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803fb7d1_3:;
wr(s->r,48,8,rd(s->u,56,8));
L_1803fb7d1_4:;
/* 1803fb7d6: mov dword ptr [rsp + 0x100], ebx */
L_1803fb7d6_0:;
L_1803fb7d6_1:;
wr(s->u,32,8,(((U)UINT64_C(0x100))+rd(s->r,32,8)));
L_1803fb7d6_2:;
wr(s->u,40,4,rd(s->r,24,4));
L_1803fb7d6_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb7d6_4:;
/* 1803fb7dd: mov ebx, r14d */
L_1803fb7dd_0:;
L_1803fb7dd_1:;
wr(s->r,24,4,rd(s->r,176,4));
L_1803fb7dd_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fb7dd_3:;
/* 1803fb7e0: mov r8d, 0x3f800000 */
L_1803fb7e0_0:;
L_1803fb7e0_1:;
wr(s->r,128,8,((U)UINT64_C(0x3f800000)));
L_1803fb7e0_2:;
/* 1803fb7e6: movss xmm13, dword ptr [rsi] */
L_1803fb7e6_0:;
L_1803fb7e6_1:;
wr(s->u,40,4,mr((uint64_t)rd(s->r,48,8),4));
L_1803fb7e6_2:;
wr(s->r,5440,4,rd(s->u,40,4));
L_1803fb7e6_3:;
wr(s->r,5444,4,((U)UINT64_C(0x0)));
L_1803fb7e6_4:;
wr(s->r,5448,4,((U)UINT64_C(0x0)));
L_1803fb7e6_5:;
wr(s->r,5452,4,((U)UINT64_C(0x0)));
L_1803fb7e6_6:;
/* 1803fb7eb: movss dword ptr [rsp + 0x228], xmm13 */
L_1803fb7eb_0:;
L_1803fb7eb_1:;
wr(s->u,32,8,(((U)UINT64_C(0x228))+rd(s->r,32,8)));
L_1803fb7eb_2:;
wr(s->u,40,4,rd(s->r,5440,4));
L_1803fb7eb_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fb7eb_4:;
/* 1803fb7f5: mov r14d, dword ptr [rsp + 0x228] */
L_1803fb7f5_0:;
L_1803fb7f5_1:;
wr(s->u,32,8,(((U)UINT64_C(0x228))+rd(s->r,32,8)));
L_1803fb7f5_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fb7f5_3:;
wr(s->r,176,4,rd(s->u,52,4));
L_1803fb7f5_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb7f5_5:;
/* 1803fb7fd: mov r12d, r14d */
L_1803fb7fd_0:;
L_1803fb7fd_1:;
wr(s->r,160,4,rd(s->r,176,4));
L_1803fb7fd_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb7fd_3:;
/* 1803fb800: and r12d, 0x80000000 */
L_1803fb800_0:;
L_1803fb800_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb800_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb800_3:;
wr(s->r,160,4,(rd(s->r,160,4)&((U)UINT64_C(0x80000000))));
L_1803fb800_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb800_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb800_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fb800_7:;
wr(s->u,64,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fb800_8:;
wr(s->u,68,1,pop(rd(s->u,64,4),4));
L_1803fb800_9:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803fb800_10:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803fb800_11:;
/* 1803fb807: mov r13d, r14d */
L_1803fb807_0:;
L_1803fb807_1:;
wr(s->r,168,4,rd(s->r,176,4));
L_1803fb807_2:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb807_3:;
/* 1803fb80a: and r13d, 0x7fffffff */
L_1803fb80a_0:;
L_1803fb80a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb80a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb80a_3:;
wr(s->r,168,4,(rd(s->r,168,4)&((U)UINT64_C(0x7fffffff))));
L_1803fb80a_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb80a_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb80a_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fb80a_7:;
wr(s->u,64,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fb80a_8:;
wr(s->u,68,1,pop(rd(s->u,64,4),4));
L_1803fb80a_9:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803fb80a_10:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803fb80a_11:;
return UINT64_C(0x1803fb811);
}
uint64_t b_1803fb7e6(CPU*s){
/* 1803fb7e6: movss xmm13, dword ptr [rsi] */
L_1803fb7e6_0:;
L_1803fb7e6_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,48,8),4));
L_1803fb7e6_2:;
wr(s->r,5440,4,rd(s->u,8,4));
L_1803fb7e6_3:;
wr(s->r,5444,4,((U)UINT64_C(0x0)));
L_1803fb7e6_4:;
wr(s->r,5448,4,((U)UINT64_C(0x0)));
L_1803fb7e6_5:;
wr(s->r,5452,4,((U)UINT64_C(0x0)));
L_1803fb7e6_6:;
/* 1803fb7eb: movss dword ptr [rsp + 0x228], xmm13 */
L_1803fb7eb_0:;
L_1803fb7eb_1:;
wr(s->u,0,8,(((U)UINT64_C(0x228))+rd(s->r,32,8)));
L_1803fb7eb_2:;
wr(s->u,8,4,rd(s->r,5440,4));
L_1803fb7eb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fb7eb_4:;
/* 1803fb7f5: mov r14d, dword ptr [rsp + 0x228] */
L_1803fb7f5_0:;
L_1803fb7f5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x228))+rd(s->r,32,8)));
L_1803fb7f5_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb7f5_3:;
wr(s->r,176,4,rd(s->u,12,4));
L_1803fb7f5_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb7f5_5:;
/* 1803fb7fd: mov r12d, r14d */
L_1803fb7fd_0:;
L_1803fb7fd_1:;
wr(s->r,160,4,rd(s->r,176,4));
L_1803fb7fd_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb7fd_3:;
/* 1803fb800: and r12d, 0x80000000 */
L_1803fb800_0:;
L_1803fb800_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb800_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb800_3:;
wr(s->r,160,4,(rd(s->r,160,4)&((U)UINT64_C(0x80000000))));
L_1803fb800_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb800_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb800_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fb800_7:;
wr(s->u,17,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fb800_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fb800_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb800_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb800_11:;
/* 1803fb807: mov r13d, r14d */
L_1803fb807_0:;
L_1803fb807_1:;
wr(s->r,168,4,rd(s->r,176,4));
L_1803fb807_2:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb807_3:;
/* 1803fb80a: and r13d, 0x7fffffff */
L_1803fb80a_0:;
L_1803fb80a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb80a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb80a_3:;
wr(s->r,168,4,(rd(s->r,168,4)&((U)UINT64_C(0x7fffffff))));
L_1803fb80a_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb80a_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb80a_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fb80a_7:;
wr(s->u,17,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fb80a_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fb80a_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb80a_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb80a_11:;
/* 1803fb811: cmp r13d, 0x800000 */
L_1803fb811_0:;
L_1803fb811_1:;
wr(s->u,23,4,rd(s->r,168,4));
L_1803fb811_2:;
wr(s->r,512,1,(rd(s->u,23,4)<((U)UINT64_C(0x800000))));
L_1803fb811_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,23,4),((U)UINT64_C(0x800000)),4,1));
L_1803fb811_4:;
wr(s->u,27,4,(rd(s->u,23,4)-((U)UINT64_C(0x800000))));
L_1803fb811_5:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb811_6:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803fb811_7:;
wr(s->u,17,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803fb811_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fb811_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb811_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb811_11:;
/* 1803fb818: jae 0x1803fb81f */
L_1803fb818_0:;
L_1803fb818_1:;
wr(s->u,16,1,(!rd(s->r,512,1)));
L_1803fb818_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803fb81f);}
L_1803fb818_3:;
return UINT64_C(0x1803fb81a);
}
uint64_t b_1803fb811(CPU*s){
/* 1803fb811: cmp r13d, 0x800000 */
L_1803fb811_0:;
L_1803fb811_1:;
wr(s->u,7,4,rd(s->r,168,4));
L_1803fb811_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x800000))));
L_1803fb811_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x800000)),4,1));
L_1803fb811_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x800000))));
L_1803fb811_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb811_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fb811_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fb811_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fb811_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fb811_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fb811_11:;
/* 1803fb818: jae 0x1803fb81f */
L_1803fb818_0:;
L_1803fb818_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803fb818_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fb81f);}
L_1803fb818_3:;
return UINT64_C(0x1803fb81a);
}
uint64_t b_1803fb81a(CPU*s){
/* 1803fb81a: mov dword ptr [rsi], r8d */
L_1803fb81a_0:;
L_1803fb81a_1:;
wr(s->u,0,4,rd(s->r,128,4));
L_1803fb81a_2:;
mw((uint64_t)rd(s->r,48,8),4,rd(s->u,0,4));
L_1803fb81a_3:;
/* 1803fb81d: jmp 0x1803fb86a */
L_1803fb81d_0:;
L_1803fb81d_1:;
return UINT64_C(0x1803fb86a);
L_1803fb81d_2:;
return UINT64_C(0x1803fb81f);
}
uint64_t b_1803fb81f(CPU*s){
/* 1803fb81f: test r12d, r12d */
L_1803fb81f_0:;
L_1803fb81f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb81f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb81f_3:;
wr(s->u,6,4,(rd(s->r,160,4)&rd(s->r,160,4)));
L_1803fb81f_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb81f_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803fb81f_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803fb81f_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fb81f_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fb81f_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fb81f_10:;
/* 1803fb822: je 0x1803fb847 */
L_1803fb822_0:;
L_1803fb822_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fb847);}
L_1803fb822_2:;
return UINT64_C(0x1803fb824);
}
uint64_t b_1803fb824(CPU*s){
/* 1803fb824: cmp r14d, 0xc2aeac50 */
L_1803fb824_0:;
L_1803fb824_1:;
wr(s->u,6,4,rd(s->r,176,4));
L_1803fb824_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0xc2aeac50))));
L_1803fb824_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0xc2aeac50)),4,1));
L_1803fb824_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0xc2aeac50))));
L_1803fb824_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb824_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fb824_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fb824_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fb824_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fb824_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fb824_11:;
/* 1803fb82b: jb 0x1803fb881 */
L_1803fb82b_0:;
L_1803fb82b_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fb881);}
L_1803fb82b_2:;
return UINT64_C(0x1803fb82d);
}
uint64_t b_1803fb82d(CPU*s){
/* 1803fb82d: and r14d, 0x7fc00000 */
L_1803fb82d_0:;
L_1803fb82d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb82d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb82d_3:;
wr(s->r,176,4,(rd(s->r,176,4)&((U)UINT64_C(0x7fc00000))));
L_1803fb82d_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb82d_5:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb82d_6:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803fb82d_7:;
wr(s->u,1,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803fb82d_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fb82d_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fb82d_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fb82d_11:;
/* 1803fb834: cmp r14d, 0x7fc00000 */
L_1803fb834_0:;
L_1803fb834_1:;
wr(s->u,7,4,rd(s->r,176,4));
L_1803fb834_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x7fc00000))));
L_1803fb834_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803fb834_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x7fc00000))));
L_1803fb834_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb834_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fb834_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fb834_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fb834_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fb834_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fb834_11:;
/* 1803fb83b: jne 0x1803fb842 */
L_1803fb83b_0:;
L_1803fb83b_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fb83b_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fb842);}
L_1803fb83b_3:;
return UINT64_C(0x1803fb83d);
}
uint64_t b_1803fb83d(CPU*s){
/* 1803fb83d: mov dword ptr [rsi], r10d */
L_1803fb83d_0:;
L_1803fb83d_1:;
wr(s->u,0,4,rd(s->r,144,4));
L_1803fb83d_2:;
mw((uint64_t)rd(s->r,48,8),4,rd(s->u,0,4));
L_1803fb83d_3:;
/* 1803fb840: jmp 0x1803fb86a */
L_1803fb840_0:;
L_1803fb840_1:;
return UINT64_C(0x1803fb86a);
L_1803fb840_2:;
return UINT64_C(0x1803fb842);
}
uint64_t b_1803fb842(CPU*s){
/* 1803fb842: mov dword ptr [rsi], r9d */
L_1803fb842_0:;
L_1803fb842_1:;
wr(s->u,0,4,rd(s->r,136,4));
L_1803fb842_2:;
mw((uint64_t)rd(s->r,48,8),4,rd(s->u,0,4));
L_1803fb842_3:;
/* 1803fb845: jmp 0x1803fb86a */
L_1803fb845_0:;
L_1803fb845_1:;
return UINT64_C(0x1803fb86a);
L_1803fb845_2:;
return UINT64_C(0x1803fb847);
}
uint64_t b_1803fb847(CPU*s){
/* 1803fb847: cmp r14d, 0x42b17218 */
L_1803fb847_0:;
L_1803fb847_1:;
wr(s->u,6,4,rd(s->r,176,4));
L_1803fb847_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x42b17218))));
L_1803fb847_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x42b17218)),4,1));
L_1803fb847_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x42b17218))));
L_1803fb847_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb847_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fb847_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fb847_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fb847_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fb847_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fb847_11:;
/* 1803fb84e: jb 0x1803fb881 */
L_1803fb84e_0:;
L_1803fb84e_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fb881);}
L_1803fb84e_2:;
return UINT64_C(0x1803fb850);
}
uint64_t b_1803fb850(CPU*s){
/* 1803fb850: and r14d, 0x7fc00000 */
L_1803fb850_0:;
L_1803fb850_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb850_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb850_3:;
wr(s->r,176,4,(rd(s->r,176,4)&((U)UINT64_C(0x7fc00000))));
L_1803fb850_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb850_5:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb850_6:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803fb850_7:;
wr(s->u,1,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803fb850_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fb850_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fb850_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fb850_11:;
/* 1803fb857: cmp r14d, 0x7fc00000 */
L_1803fb857_0:;
L_1803fb857_1:;
wr(s->u,7,4,rd(s->r,176,4));
L_1803fb857_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x7fc00000))));
L_1803fb857_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803fb857_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x7fc00000))));
L_1803fb857_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb857_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fb857_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fb857_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fb857_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fb857_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fb857_11:;
/* 1803fb85e: jne 0x1803fb867 */
L_1803fb85e_0:;
L_1803fb85e_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fb85e_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fb867);}
L_1803fb85e_3:;
return UINT64_C(0x1803fb860);
}
uint64_t b_1803fb860(CPU*s){
/* 1803fb860: movss dword ptr [rsi], xmm14 */
L_1803fb860_0:;
L_1803fb860_1:;
wr(s->u,0,4,rd(s->r,5504,4));
L_1803fb860_2:;
mw((uint64_t)rd(s->r,48,8),4,rd(s->u,0,4));
L_1803fb860_3:;
/* 1803fb865: jmp 0x1803fb86a */
L_1803fb865_0:;
L_1803fb865_1:;
return UINT64_C(0x1803fb86a);
L_1803fb865_2:;
return UINT64_C(0x1803fb867);
}
uint64_t b_1803fb867(CPU*s){
/* 1803fb867: mov dword ptr [rsi], r11d */
L_1803fb867_0:;
L_1803fb867_1:;
wr(s->u,8,4,rd(s->r,152,4));
L_1803fb867_2:;
mw((uint64_t)rd(s->r,48,8),4,rd(s->u,8,4));
L_1803fb867_3:;
/* 1803fb86a: lea eax, [rbx - 1] */
L_1803fb86a_0:;
L_1803fb86a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fb86a_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fb86a_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fb86a_4:;
/* 1803fb86d: sub eax, r15d */
L_1803fb86d_0:;
L_1803fb86d_1:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,184,4)));
L_1803fb86d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,184,4),4,1));
L_1803fb86d_3:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->r,184,4)));
L_1803fb86d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fb86d_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb86d_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fb86d_7:;
wr(s->u,13,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fb86d_8:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803fb86d_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb86d_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb86d_11:;
/* 1803fb870: add rsi, -4 */
L_1803fb870_0:;
L_1803fb870_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0xfffffffffffffffc)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803fb870_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0xfffffffffffffffc)),8,0));
L_1803fb870_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fb870_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb870_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803fb870_6:;
wr(s->u,13,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803fb870_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803fb870_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb870_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb870_10:;
/* 1803fb874: add r15, 1 */
L_1803fb874_0:;
L_1803fb874_1:;
wr(s->r,512,1,(((rd(s->r,184,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,184,8)));
L_1803fb874_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,8),((U)UINT64_C(0x1)),8,0));
L_1803fb874_3:;
wr(s->r,184,8,(rd(s->r,184,8)+((U)UINT64_C(0x1))));
L_1803fb874_4:;
wr(s->r,519,1,(sx(rd(s->r,184,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb874_5:;
wr(s->r,518,1,(rd(s->r,184,8)==((U)UINT64_C(0x0))));
L_1803fb874_6:;
wr(s->u,13,8,(rd(s->r,184,8)&((U)UINT64_C(0xff))));
L_1803fb874_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803fb874_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb874_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb874_10:;
/* 1803fb878: cmp r15, rdi */
L_1803fb878_0:;
L_1803fb878_1:;
wr(s->u,23,8,rd(s->r,56,8));
L_1803fb878_2:;
wr(s->r,512,1,(rd(s->r,184,8)<rd(s->u,23,8)));
L_1803fb878_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,8),rd(s->u,23,8),8,1));
L_1803fb878_4:;
wr(s->u,31,8,(rd(s->r,184,8)-rd(s->u,23,8)));
L_1803fb878_5:;
wr(s->r,519,1,(sx(rd(s->u,31,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb878_6:;
wr(s->r,518,1,(rd(s->u,31,8)==((U)UINT64_C(0x0))));
L_1803fb878_7:;
wr(s->u,13,8,(rd(s->u,31,8)&((U)UINT64_C(0xff))));
L_1803fb878_8:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803fb878_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb878_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb878_11:;
/* 1803fb87b: jl 0x1803fb7e6 */
L_1803fb87b_0:;
L_1803fb87b_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fb87b_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803fb7e6);}
L_1803fb87b_3:;
return UINT64_C(0x1803fb881);
}
uint64_t b_1803fb86a(CPU*s){
/* 1803fb86a: lea eax, [rbx - 1] */
L_1803fb86a_0:;
L_1803fb86a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fb86a_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fb86a_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fb86a_4:;
/* 1803fb86d: sub eax, r15d */
L_1803fb86d_0:;
L_1803fb86d_1:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,184,4)));
L_1803fb86d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,184,4),4,1));
L_1803fb86d_3:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->r,184,4)));
L_1803fb86d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fb86d_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb86d_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fb86d_7:;
wr(s->u,9,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fb86d_8:;
wr(s->u,17,1,pop(rd(s->u,9,4),4));
L_1803fb86d_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fb86d_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fb86d_11:;
/* 1803fb870: add rsi, -4 */
L_1803fb870_0:;
L_1803fb870_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0xfffffffffffffffc)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803fb870_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0xfffffffffffffffc)),8,0));
L_1803fb870_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fb870_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb870_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803fb870_6:;
wr(s->u,9,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803fb870_7:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fb870_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fb870_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fb870_10:;
/* 1803fb874: add r15, 1 */
L_1803fb874_0:;
L_1803fb874_1:;
wr(s->r,512,1,(((rd(s->r,184,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,184,8)));
L_1803fb874_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,8),((U)UINT64_C(0x1)),8,0));
L_1803fb874_3:;
wr(s->r,184,8,(rd(s->r,184,8)+((U)UINT64_C(0x1))));
L_1803fb874_4:;
wr(s->r,519,1,(sx(rd(s->r,184,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb874_5:;
wr(s->r,518,1,(rd(s->r,184,8)==((U)UINT64_C(0x0))));
L_1803fb874_6:;
wr(s->u,9,8,(rd(s->r,184,8)&((U)UINT64_C(0xff))));
L_1803fb874_7:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fb874_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fb874_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fb874_10:;
/* 1803fb878: cmp r15, rdi */
L_1803fb878_0:;
L_1803fb878_1:;
wr(s->u,19,8,rd(s->r,56,8));
L_1803fb878_2:;
wr(s->r,512,1,(rd(s->r,184,8)<rd(s->u,19,8)));
L_1803fb878_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,8),rd(s->u,19,8),8,1));
L_1803fb878_4:;
wr(s->u,27,8,(rd(s->r,184,8)-rd(s->u,19,8)));
L_1803fb878_5:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fb878_6:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803fb878_7:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803fb878_8:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fb878_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fb878_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fb878_11:;
/* 1803fb87b: jl 0x1803fb7e6 */
L_1803fb87b_0:;
L_1803fb87b_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fb87b_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803fb7e6);}
L_1803fb87b_3:;
return UINT64_C(0x1803fb881);
}
uint64_t b_1803fb881(CPU*s){
/* 1803fb881: mov edi, dword ptr [rsp + 0xd8] */
L_1803fb881_0:;
L_1803fb881_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd8))+rd(s->r,32,8)));
L_1803fb881_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb881_3:;
wr(s->r,56,4,rd(s->u,28,4));
L_1803fb881_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fb881_5:;
/* 1803fb888: mov r8, qword ptr [rsp + 0x118] */
L_1803fb888_0:;
L_1803fb888_1:;
wr(s->u,16,8,(((U)UINT64_C(0x118))+rd(s->r,32,8)));
L_1803fb888_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803fb888_3:;
wr(s->r,128,8,rd(s->u,32,8));
L_1803fb888_4:;
/* 1803fb890: mov r10d, dword ptr [rsp + 0xe8] */
L_1803fb890_0:;
L_1803fb890_1:;
wr(s->u,16,8,(((U)UINT64_C(0xe8))+rd(s->r,32,8)));
L_1803fb890_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb890_3:;
wr(s->r,144,4,rd(s->u,28,4));
L_1803fb890_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fb890_5:;
/* 1803fb898: mov r13d, dword ptr [rsp + 0xf8] */
L_1803fb898_0:;
L_1803fb898_1:;
wr(s->u,16,8,(((U)UINT64_C(0xf8))+rd(s->r,32,8)));
L_1803fb898_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb898_3:;
wr(s->r,168,4,rd(s->u,28,4));
L_1803fb898_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb898_5:;
/* 1803fb8a0: mov esi, dword ptr [rsp + 0x108] */
L_1803fb8a0_0:;
L_1803fb8a0_1:;
wr(s->u,16,8,(((U)UINT64_C(0x108))+rd(s->r,32,8)));
L_1803fb8a0_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb8a0_3:;
wr(s->r,48,4,rd(s->u,28,4));
L_1803fb8a0_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fb8a0_5:;
/* 1803fb8a7: mov ebx, dword ptr [rsp + 0x100] */
L_1803fb8a7_0:;
L_1803fb8a7_1:;
wr(s->u,16,8,(((U)UINT64_C(0x100))+rd(s->r,32,8)));
L_1803fb8a7_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb8a7_3:;
wr(s->r,24,4,rd(s->u,28,4));
L_1803fb8a7_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fb8a7_5:;
/* 1803fb8ae: mov r14d, dword ptr [rsp + 0xd0] */
L_1803fb8ae_0:;
L_1803fb8ae_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803fb8ae_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb8ae_3:;
wr(s->r,176,4,rd(s->u,28,4));
L_1803fb8ae_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb8ae_5:;
/* 1803fb8b6: movss dword ptr [rsp + 0x170], xmm14 */
L_1803fb8b6_0:;
L_1803fb8b6_1:;
wr(s->u,16,8,(((U)UINT64_C(0x170))+rd(s->r,32,8)));
L_1803fb8b6_2:;
wr(s->u,24,4,rd(s->r,5504,4));
L_1803fb8b6_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb8b6_4:;
/* 1803fb8c0: movss dword ptr [rsp + 0x178], xmm13 */
L_1803fb8c0_0:;
L_1803fb8c0_1:;
wr(s->u,16,8,(((U)UINT64_C(0x178))+rd(s->r,32,8)));
L_1803fb8c0_2:;
wr(s->u,24,4,rd(s->r,5440,4));
L_1803fb8c0_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb8c0_4:;
/* 1803fb8ca: mov dword ptr [rsp + 0x168], r9d */
L_1803fb8ca_0:;
L_1803fb8ca_1:;
wr(s->u,16,8,(((U)UINT64_C(0x168))+rd(s->r,32,8)));
L_1803fb8ca_2:;
wr(s->u,24,4,rd(s->r,136,4));
L_1803fb8ca_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb8ca_4:;
/* 1803fb8d2: mov r9d, dword ptr [rsp + 0xe0] */
L_1803fb8d2_0:;
L_1803fb8d2_1:;
wr(s->u,16,8,(((U)UINT64_C(0xe0))+rd(s->r,32,8)));
L_1803fb8d2_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb8d2_3:;
wr(s->r,136,4,rd(s->u,28,4));
L_1803fb8d2_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fb8d2_5:;
/* 1803fb8da: mov dword ptr [rsp + 0x160], r11d */
L_1803fb8da_0:;
L_1803fb8da_1:;
wr(s->u,16,8,(((U)UINT64_C(0x160))+rd(s->r,32,8)));
L_1803fb8da_2:;
wr(s->u,24,4,rd(s->r,152,4));
L_1803fb8da_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb8da_4:;
/* 1803fb8e2: mov r11d, dword ptr [rsp + 0xf0] */
L_1803fb8e2_0:;
L_1803fb8e2_1:;
wr(s->u,16,8,(((U)UINT64_C(0xf0))+rd(s->r,32,8)));
L_1803fb8e2_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb8e2_3:;
wr(s->r,152,4,rd(s->u,28,4));
L_1803fb8e2_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fb8e2_5:;
/* 1803fb8ea: mov dword ptr [rsp + 0x138], r12d */
L_1803fb8ea_0:;
L_1803fb8ea_1:;
wr(s->u,16,8,(((U)UINT64_C(0x138))+rd(s->r,32,8)));
L_1803fb8ea_2:;
wr(s->u,24,4,rd(s->r,160,4));
L_1803fb8ea_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb8ea_4:;
/* 1803fb8f2: mov r12d, dword ptr [rsp + 0x110] */
L_1803fb8f2_0:;
L_1803fb8f2_1:;
wr(s->u,16,8,(((U)UINT64_C(0x110))+rd(s->r,32,8)));
L_1803fb8f2_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb8f2_3:;
wr(s->r,160,4,rd(s->u,28,4));
L_1803fb8f2_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb8f2_5:;
/* 1803fb8fa: mov r15d, dword ptr [rsp + 0x138] */
L_1803fb8fa_0:;
L_1803fb8fa_1:;
wr(s->u,16,8,(((U)UINT64_C(0x138))+rd(s->r,32,8)));
L_1803fb8fa_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fb8fa_3:;
wr(s->r,184,4,rd(s->u,28,4));
L_1803fb8fa_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803fb8fa_5:;
/* 1803fb902: lea r14d, [r14 + r15] */
L_1803fb902_0:;
L_1803fb902_1:;
wr(s->u,0,8,(rd(s->r,184,8)*((U)UINT64_C(0x1))));
L_1803fb902_2:;
wr(s->u,8,8,(rd(s->r,176,8)+rd(s->u,0,8)));
L_1803fb902_3:;
wr(s->r,176,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fb902_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fb902_5:;
/* 1803fb906: mov dword ptr [rsp + 0x120], r14d */
L_1803fb906_0:;
L_1803fb906_1:;
wr(s->u,16,8,(((U)UINT64_C(0x120))+rd(s->r,32,8)));
L_1803fb906_2:;
wr(s->u,24,4,rd(s->r,176,4));
L_1803fb906_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb906_4:;
/* 1803fb90e: cvtsd2ss xmm2, xmm2 */
L_1803fb90e_0:;
L_1803fb90e_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,8),8),4));
L_1803fb90e_2:;
/* 1803fb912: cvtsd2ss xmm3, xmm3 */
L_1803fb912_0:;
L_1803fb912_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,8),8),4));
L_1803fb912_2:;
/* 1803fb916: cvtsd2ss xmm4, xmm4 */
L_1803fb916_0:;
L_1803fb916_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,8),8),4));
L_1803fb916_2:;
/* 1803fb91a: cvtsd2ss xmm5, xmm5 */
L_1803fb91a_0:;
L_1803fb91a_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,8),8),4));
L_1803fb91a_2:;
/* 1803fb91e: mulsd xmm11, xmm10 */
L_1803fb91e_0:;
L_1803fb91e_1:;
wr(s->r,5312,8,fb(fv(rd(s->r,5312,8),8)*fv(rd(s->r,5248,8),8),8));
L_1803fb91e_2:;
/* 1803fb923: mulsd xmm12, xmm10 */
L_1803fb923_0:;
L_1803fb923_1:;
wr(s->r,5376,8,fb(fv(rd(s->r,5376,8),8)*fv(rd(s->r,5248,8),8),8));
L_1803fb923_2:;
/* 1803fb928: mulsd xmm9, xmm11 */
L_1803fb928_0:;
L_1803fb928_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)*fv(rd(s->r,5312,8),8),8));
L_1803fb928_2:;
/* 1803fb92d: cvtsd2ss xmm9, xmm9 */
L_1803fb92d_0:;
L_1803fb92d_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,8),8),4));
L_1803fb92d_2:;
/* 1803fb932: mulsd xmm11, xmm8 */
L_1803fb932_0:;
L_1803fb932_1:;
wr(s->r,5312,8,fb(fv(rd(s->r,5312,8),8)*fv(rd(s->r,5120,8),8),8));
L_1803fb932_2:;
/* 1803fb937: cvtsd2ss xmm8, xmm11 */
L_1803fb937_0:;
L_1803fb937_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5312,8),8),4));
L_1803fb937_2:;
/* 1803fb93c: mulss xmm9, xmm2 */
L_1803fb93c_0:;
L_1803fb93c_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fb93c_2:;
/* 1803fb941: movss dword ptr [rsp + 0x20c], xmm9 */
L_1803fb941_0:;
L_1803fb941_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20c))+rd(s->r,32,8)));
L_1803fb941_2:;
wr(s->u,24,4,rd(s->r,5184,4));
L_1803fb941_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb941_4:;
/* 1803fb94b: mulss xmm8, xmm3 */
L_1803fb94b_0:;
L_1803fb94b_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fb94b_2:;
/* 1803fb950: movss dword ptr [rsp + 0x210], xmm8 */
L_1803fb950_0:;
L_1803fb950_1:;
wr(s->u,16,8,(((U)UINT64_C(0x210))+rd(s->r,32,8)));
L_1803fb950_2:;
wr(s->u,24,4,rd(s->r,5120,4));
L_1803fb950_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fb950_4:;
return UINT64_C(0x1803fb95a);
}
uint64_t b_1803fb90e(CPU*s){
/* 1803fb90e: cvtsd2ss xmm2, xmm2 */
L_1803fb90e_0:;
L_1803fb90e_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,8),8),4));
L_1803fb90e_2:;
/* 1803fb912: cvtsd2ss xmm3, xmm3 */
L_1803fb912_0:;
L_1803fb912_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,8),8),4));
L_1803fb912_2:;
/* 1803fb916: cvtsd2ss xmm4, xmm4 */
L_1803fb916_0:;
L_1803fb916_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,8),8),4));
L_1803fb916_2:;
/* 1803fb91a: cvtsd2ss xmm5, xmm5 */
L_1803fb91a_0:;
L_1803fb91a_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,8),8),4));
L_1803fb91a_2:;
/* 1803fb91e: mulsd xmm11, xmm10 */
L_1803fb91e_0:;
L_1803fb91e_1:;
wr(s->r,5312,8,fb(fv(rd(s->r,5312,8),8)*fv(rd(s->r,5248,8),8),8));
L_1803fb91e_2:;
/* 1803fb923: mulsd xmm12, xmm10 */
L_1803fb923_0:;
L_1803fb923_1:;
wr(s->r,5376,8,fb(fv(rd(s->r,5376,8),8)*fv(rd(s->r,5248,8),8),8));
L_1803fb923_2:;
/* 1803fb928: mulsd xmm9, xmm11 */
L_1803fb928_0:;
L_1803fb928_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)*fv(rd(s->r,5312,8),8),8));
L_1803fb928_2:;
/* 1803fb92d: cvtsd2ss xmm9, xmm9 */
L_1803fb92d_0:;
L_1803fb92d_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,8),8),4));
L_1803fb92d_2:;
/* 1803fb932: mulsd xmm11, xmm8 */
L_1803fb932_0:;
L_1803fb932_1:;
wr(s->r,5312,8,fb(fv(rd(s->r,5312,8),8)*fv(rd(s->r,5120,8),8),8));
L_1803fb932_2:;
/* 1803fb937: cvtsd2ss xmm8, xmm11 */
L_1803fb937_0:;
L_1803fb937_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5312,8),8),4));
L_1803fb937_2:;
/* 1803fb93c: mulss xmm9, xmm2 */
L_1803fb93c_0:;
L_1803fb93c_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fb93c_2:;
/* 1803fb941: movss dword ptr [rsp + 0x20c], xmm9 */
L_1803fb941_0:;
L_1803fb941_1:;
wr(s->u,5,8,(((U)UINT64_C(0x20c))+rd(s->r,32,8)));
L_1803fb941_2:;
wr(s->u,13,4,rd(s->r,5184,4));
L_1803fb941_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803fb941_4:;
/* 1803fb94b: mulss xmm8, xmm3 */
L_1803fb94b_0:;
L_1803fb94b_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fb94b_2:;
/* 1803fb950: movss dword ptr [rsp + 0x210], xmm8 */
L_1803fb950_0:;
L_1803fb950_1:;
wr(s->u,5,8,(((U)UINT64_C(0x210))+rd(s->r,32,8)));
L_1803fb950_2:;
wr(s->u,13,4,rd(s->r,5120,4));
L_1803fb950_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803fb950_4:;
/* 1803fb95a: mulsd xmm7, xmm12 */
L_1803fb95a_0:;
L_1803fb95a_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)*fv(rd(s->r,5376,8),8),8));
L_1803fb95a_2:;
/* 1803fb95f: cvtsd2ss xmm7, xmm7 */
L_1803fb95f_0:;
L_1803fb95f_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,8),8),4));
L_1803fb95f_2:;
/* 1803fb963: mulsd xmm12, xmm6 */
L_1803fb963_0:;
L_1803fb963_1:;
wr(s->r,5376,8,fb(fv(rd(s->r,5376,8),8)*fv(rd(s->r,4992,8),8),8));
L_1803fb963_2:;
/* 1803fb968: cvtsd2ss xmm6, xmm12 */
L_1803fb968_0:;
L_1803fb968_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,5376,8),8),4));
L_1803fb968_2:;
/* 1803fb96d: mulss xmm7, xmm4 */
L_1803fb96d_0:;
L_1803fb96d_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4864,4),4),4));
L_1803fb96d_2:;
/* 1803fb971: movss dword ptr [rsp + 0x214], xmm7 */
L_1803fb971_0:;
L_1803fb971_1:;
wr(s->u,5,8,(((U)UINT64_C(0x214))+rd(s->r,32,8)));
L_1803fb971_2:;
wr(s->u,13,4,rd(s->r,5056,4));
L_1803fb971_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803fb971_4:;
/* 1803fb97a: mulss xmm6, xmm5 */
L_1803fb97a_0:;
L_1803fb97a_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fb97a_2:;
/* 1803fb97e: movss dword ptr [rsp + 0x218], xmm6 */
L_1803fb97e_0:;
L_1803fb97e_1:;
wr(s->u,5,8,(((U)UINT64_C(0x218))+rd(s->r,32,8)));
L_1803fb97e_2:;
wr(s->u,13,4,rd(s->r,4992,4));
L_1803fb97e_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803fb97e_4:;
/* 1803fb987: shl edi, 0x17 */
L_1803fb987_0:;
L_1803fb987_1:;
wr(s->u,55,4,(((U)UINT64_C(0x17))&((U)UINT64_C(0x1f))));
L_1803fb987_2:;
wr(s->u,59,4,rd(s->r,56,4));
L_1803fb987_3:;
wr(s->r,56,4,((rd(s->u,55,4)>=32)?0:(rd(s->r,56,4)<<rd(s->u,55,4))));
L_1803fb987_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fb987_5:;
wr(s->u,42,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803fb987_6:;
wr(s->u,43,4,(rd(s->u,55,4)-((U)UINT64_C(0x1))));
L_1803fb987_7:;
wr(s->u,47,4,((rd(s->u,43,4)>=32)?0:(rd(s->u,59,4)<<rd(s->u,43,4))));
L_1803fb987_8:;
wr(s->u,51,1,(sx(rd(s->u,47,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb987_9:;
wr(s->u,0,1,rd(s->u,42,1));
L_1803fb987_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fb987_11:;
wr(s->u,2,1,(!rd(s->u,42,1)));
L_1803fb987_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fb987_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,51,1)));
L_1803fb987_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fb987_15:;
wr(s->u,52,1,(rd(s->u,55,4)==((U)UINT64_C(0x1))));
L_1803fb987_16:;
wr(s->u,53,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb987_17:;
wr(s->u,54,1,(rd(s->r,512,1)^rd(s->u,53,1)));
L_1803fb987_18:;
wr(s->u,0,1,rd(s->u,52,1));
L_1803fb987_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,54,1)));
L_1803fb987_20:;
wr(s->u,2,1,(!rd(s->u,52,1)));
L_1803fb987_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fb987_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fb987_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fb987_24:;
wr(s->u,23,1,(rd(s->u,55,4)!=((U)UINT64_C(0x0))));
L_1803fb987_25:;
wr(s->u,24,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb987_26:;
wr(s->u,25,1,(!rd(s->u,23,1)));
L_1803fb987_27:;
wr(s->u,26,1,(rd(s->u,25,1)&rd(s->r,519,1)));
L_1803fb987_28:;
wr(s->u,27,1,(rd(s->u,23,1)&rd(s->u,24,1)));
L_1803fb987_29:;
wr(s->r,519,1,(rd(s->u,26,1)|rd(s->u,27,1)));
L_1803fb987_30:;
wr(s->u,28,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803fb987_31:;
wr(s->u,29,1,(!rd(s->u,23,1)));
L_1803fb987_32:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,518,1)));
L_1803fb987_33:;
wr(s->u,31,1,(rd(s->u,23,1)&rd(s->u,28,1)));
L_1803fb987_34:;
wr(s->r,518,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803fb987_35:;
wr(s->u,32,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803fb987_36:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803fb987_37:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803fb987_38:;
wr(s->u,38,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803fb987_39:;
wr(s->u,39,1,(!rd(s->u,23,1)));
L_1803fb987_40:;
wr(s->u,40,1,(rd(s->u,39,1)&rd(s->r,514,1)));
L_1803fb987_41:;
wr(s->u,41,1,(rd(s->u,23,1)&rd(s->u,38,1)));
L_1803fb987_42:;
wr(s->r,514,1,(rd(s->u,40,1)|rd(s->u,41,1)));
L_1803fb987_43:;
/* 1803fb98a: test r13d, r13d */
L_1803fb98a_0:;
L_1803fb98a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb98a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb98a_3:;
wr(s->u,63,4,(rd(s->r,168,4)&rd(s->r,168,4)));
L_1803fb98a_4:;
wr(s->r,519,1,(sx(rd(s->u,63,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb98a_5:;
wr(s->r,518,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803fb98a_6:;
wr(s->u,17,4,(rd(s->u,63,4)&((U)UINT64_C(0xff))));
L_1803fb98a_7:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fb98a_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb98a_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb98a_10:;
/* 1803fb98d: je 0x1803fb99c */
L_1803fb98d_0:;
L_1803fb98d_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fb99c);}
L_1803fb98d_2:;
return UINT64_C(0x1803fb98f);
}
uint64_t b_1803fb95a(CPU*s){
/* 1803fb95a: mulsd xmm7, xmm12 */
L_1803fb95a_0:;
L_1803fb95a_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)*fv(rd(s->r,5376,8),8),8));
L_1803fb95a_2:;
/* 1803fb95f: cvtsd2ss xmm7, xmm7 */
L_1803fb95f_0:;
L_1803fb95f_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,8),8),4));
L_1803fb95f_2:;
/* 1803fb963: mulsd xmm12, xmm6 */
L_1803fb963_0:;
L_1803fb963_1:;
wr(s->r,5376,8,fb(fv(rd(s->r,5376,8),8)*fv(rd(s->r,4992,8),8),8));
L_1803fb963_2:;
/* 1803fb968: cvtsd2ss xmm6, xmm12 */
L_1803fb968_0:;
L_1803fb968_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,5376,8),8),4));
L_1803fb968_2:;
/* 1803fb96d: mulss xmm7, xmm4 */
L_1803fb96d_0:;
L_1803fb96d_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4864,4),4),4));
L_1803fb96d_2:;
/* 1803fb971: movss dword ptr [rsp + 0x214], xmm7 */
L_1803fb971_0:;
L_1803fb971_1:;
wr(s->u,5,8,(((U)UINT64_C(0x214))+rd(s->r,32,8)));
L_1803fb971_2:;
wr(s->u,13,4,rd(s->r,5056,4));
L_1803fb971_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803fb971_4:;
/* 1803fb97a: mulss xmm6, xmm5 */
L_1803fb97a_0:;
L_1803fb97a_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fb97a_2:;
/* 1803fb97e: movss dword ptr [rsp + 0x218], xmm6 */
L_1803fb97e_0:;
L_1803fb97e_1:;
wr(s->u,5,8,(((U)UINT64_C(0x218))+rd(s->r,32,8)));
L_1803fb97e_2:;
wr(s->u,13,4,rd(s->r,4992,4));
L_1803fb97e_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803fb97e_4:;
/* 1803fb987: shl edi, 0x17 */
L_1803fb987_0:;
L_1803fb987_1:;
wr(s->u,55,4,(((U)UINT64_C(0x17))&((U)UINT64_C(0x1f))));
L_1803fb987_2:;
wr(s->u,59,4,rd(s->r,56,4));
L_1803fb987_3:;
wr(s->r,56,4,((rd(s->u,55,4)>=32)?0:(rd(s->r,56,4)<<rd(s->u,55,4))));
L_1803fb987_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fb987_5:;
wr(s->u,42,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803fb987_6:;
wr(s->u,43,4,(rd(s->u,55,4)-((U)UINT64_C(0x1))));
L_1803fb987_7:;
wr(s->u,47,4,((rd(s->u,43,4)>=32)?0:(rd(s->u,59,4)<<rd(s->u,43,4))));
L_1803fb987_8:;
wr(s->u,51,1,(sx(rd(s->u,47,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb987_9:;
wr(s->u,0,1,rd(s->u,42,1));
L_1803fb987_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fb987_11:;
wr(s->u,2,1,(!rd(s->u,42,1)));
L_1803fb987_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fb987_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,51,1)));
L_1803fb987_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fb987_15:;
wr(s->u,52,1,(rd(s->u,55,4)==((U)UINT64_C(0x1))));
L_1803fb987_16:;
wr(s->u,53,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb987_17:;
wr(s->u,54,1,(rd(s->r,512,1)^rd(s->u,53,1)));
L_1803fb987_18:;
wr(s->u,0,1,rd(s->u,52,1));
L_1803fb987_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,54,1)));
L_1803fb987_20:;
wr(s->u,2,1,(!rd(s->u,52,1)));
L_1803fb987_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fb987_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fb987_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fb987_24:;
wr(s->u,23,1,(rd(s->u,55,4)!=((U)UINT64_C(0x0))));
L_1803fb987_25:;
wr(s->u,24,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb987_26:;
wr(s->u,25,1,(!rd(s->u,23,1)));
L_1803fb987_27:;
wr(s->u,26,1,(rd(s->u,25,1)&rd(s->r,519,1)));
L_1803fb987_28:;
wr(s->u,27,1,(rd(s->u,23,1)&rd(s->u,24,1)));
L_1803fb987_29:;
wr(s->r,519,1,(rd(s->u,26,1)|rd(s->u,27,1)));
L_1803fb987_30:;
wr(s->u,28,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803fb987_31:;
wr(s->u,29,1,(!rd(s->u,23,1)));
L_1803fb987_32:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,518,1)));
L_1803fb987_33:;
wr(s->u,31,1,(rd(s->u,23,1)&rd(s->u,28,1)));
L_1803fb987_34:;
wr(s->r,518,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803fb987_35:;
wr(s->u,32,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803fb987_36:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803fb987_37:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803fb987_38:;
wr(s->u,38,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803fb987_39:;
wr(s->u,39,1,(!rd(s->u,23,1)));
L_1803fb987_40:;
wr(s->u,40,1,(rd(s->u,39,1)&rd(s->r,514,1)));
L_1803fb987_41:;
wr(s->u,41,1,(rd(s->u,23,1)&rd(s->u,38,1)));
L_1803fb987_42:;
wr(s->r,514,1,(rd(s->u,40,1)|rd(s->u,41,1)));
L_1803fb987_43:;
/* 1803fb98a: test r13d, r13d */
L_1803fb98a_0:;
L_1803fb98a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb98a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb98a_3:;
wr(s->u,63,4,(rd(s->r,168,4)&rd(s->r,168,4)));
L_1803fb98a_4:;
wr(s->r,519,1,(sx(rd(s->u,63,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb98a_5:;
wr(s->r,518,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803fb98a_6:;
wr(s->u,17,4,(rd(s->u,63,4)&((U)UINT64_C(0xff))));
L_1803fb98a_7:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fb98a_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb98a_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb98a_10:;
/* 1803fb98d: je 0x1803fb99c */
L_1803fb98d_0:;
L_1803fb98d_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fb99c);}
L_1803fb98d_2:;
return UINT64_C(0x1803fb98f);
}
uint64_t b_1803fb98f(CPU*s){
/* 1803fb98f: mov r13d, dword ptr [rsp + 0x20c] */
L_1803fb98f_0:;
L_1803fb98f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20c))+rd(s->r,32,8)));
L_1803fb98f_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb98f_3:;
wr(s->r,168,4,rd(s->u,8,4));
L_1803fb98f_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb98f_5:;
/* 1803fb997: sub r13d, edi */
L_1803fb997_0:;
L_1803fb997_1:;
wr(s->r,512,1,(rd(s->r,168,4)<rd(s->r,56,4)));
L_1803fb997_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,4),rd(s->r,56,4),4,1));
L_1803fb997_3:;
wr(s->r,168,4,(rd(s->r,168,4)-rd(s->r,56,4)));
L_1803fb997_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb997_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb997_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fb997_7:;
wr(s->u,12,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fb997_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803fb997_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fb997_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fb997_11:;
/* 1803fb99a: jmp 0x1803fb9a7 */
L_1803fb99a_0:;
L_1803fb99a_1:;
return UINT64_C(0x1803fb9a7);
L_1803fb99a_2:;
return UINT64_C(0x1803fb99c);
}
uint64_t b_1803fb99c(CPU*s){
/* 1803fb99c: mov r13d, dword ptr [rsp + 0x20c] */
L_1803fb99c_0:;
L_1803fb99c_1:;
wr(s->u,5,8,(((U)UINT64_C(0x20c))+rd(s->r,32,8)));
L_1803fb99c_2:;
wr(s->u,17,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803fb99c_3:;
wr(s->r,168,4,rd(s->u,17,4));
L_1803fb99c_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb99c_5:;
/* 1803fb9a4: add r13d, edi */
L_1803fb9a4_0:;
L_1803fb9a4_1:;
wr(s->r,512,1,(((rd(s->r,168,4)+rd(s->r,56,4))&(((U)1<<32)-1))<rd(s->r,168,4)));
L_1803fb9a4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,4),rd(s->r,56,4),4,0));
L_1803fb9a4_3:;
wr(s->r,168,4,(rd(s->r,168,4)+rd(s->r,56,4)));
L_1803fb9a4_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fb9a4_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9a4_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fb9a4_7:;
wr(s->u,21,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fb9a4_8:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803fb9a4_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fb9a4_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fb9a4_11:;
/* 1803fb9a7: mov dword ptr [rsp + 0x20c], r13d */
L_1803fb9a7_0:;
L_1803fb9a7_1:;
wr(s->u,5,8,(((U)UINT64_C(0x20c))+rd(s->r,32,8)));
L_1803fb9a7_2:;
wr(s->u,13,4,rd(s->r,168,4));
L_1803fb9a7_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803fb9a7_4:;
/* 1803fb9af: shl ebp, 0x17 */
L_1803fb9af_0:;
L_1803fb9af_1:;
wr(s->u,59,4,(((U)UINT64_C(0x17))&((U)UINT64_C(0x1f))));
L_1803fb9af_2:;
wr(s->u,63,4,rd(s->r,40,4));
L_1803fb9af_3:;
wr(s->r,40,4,((rd(s->u,59,4)>=32)?0:(rd(s->r,40,4)<<rd(s->u,59,4))));
L_1803fb9af_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fb9af_5:;
wr(s->u,46,1,(rd(s->u,59,4)==((U)UINT64_C(0x0))));
L_1803fb9af_6:;
wr(s->u,47,4,(rd(s->u,59,4)-((U)UINT64_C(0x1))));
L_1803fb9af_7:;
wr(s->u,51,4,((rd(s->u,47,4)>=32)?0:(rd(s->u,63,4)<<rd(s->u,47,4))));
L_1803fb9af_8:;
wr(s->u,55,1,(sx(rd(s->u,51,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9af_9:;
wr(s->u,0,1,rd(s->u,46,1));
L_1803fb9af_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fb9af_11:;
wr(s->u,2,1,(!rd(s->u,46,1)));
L_1803fb9af_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fb9af_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,55,1)));
L_1803fb9af_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fb9af_15:;
wr(s->u,56,1,(rd(s->u,59,4)==((U)UINT64_C(0x1))));
L_1803fb9af_16:;
wr(s->u,57,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9af_17:;
wr(s->u,58,1,(rd(s->r,512,1)^rd(s->u,57,1)));
L_1803fb9af_18:;
wr(s->u,0,1,rd(s->u,56,1));
L_1803fb9af_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,58,1)));
L_1803fb9af_20:;
wr(s->u,2,1,(!rd(s->u,56,1)));
L_1803fb9af_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fb9af_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fb9af_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fb9af_24:;
wr(s->u,27,1,(rd(s->u,59,4)!=((U)UINT64_C(0x0))));
L_1803fb9af_25:;
wr(s->u,28,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9af_26:;
wr(s->u,29,1,(!rd(s->u,27,1)));
L_1803fb9af_27:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,519,1)));
L_1803fb9af_28:;
wr(s->u,31,1,(rd(s->u,27,1)&rd(s->u,28,1)));
L_1803fb9af_29:;
wr(s->r,519,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803fb9af_30:;
wr(s->u,32,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803fb9af_31:;
wr(s->u,33,1,(!rd(s->u,27,1)));
L_1803fb9af_32:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,518,1)));
L_1803fb9af_33:;
wr(s->u,35,1,(rd(s->u,27,1)&rd(s->u,32,1)));
L_1803fb9af_34:;
wr(s->r,518,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803fb9af_35:;
wr(s->u,36,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803fb9af_36:;
wr(s->u,40,1,pop(rd(s->u,36,4),4));
L_1803fb9af_37:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803fb9af_38:;
wr(s->u,42,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803fb9af_39:;
wr(s->u,43,1,(!rd(s->u,27,1)));
L_1803fb9af_40:;
wr(s->u,44,1,(rd(s->u,43,1)&rd(s->r,514,1)));
L_1803fb9af_41:;
wr(s->u,45,1,(rd(s->u,27,1)&rd(s->u,42,1)));
L_1803fb9af_42:;
wr(s->r,514,1,(rd(s->u,44,1)|rd(s->u,45,1)));
L_1803fb9af_43:;
/* 1803fb9b2: test r11d, r11d */
L_1803fb9b2_0:;
L_1803fb9b2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb9b2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb9b2_3:;
wr(s->u,67,4,(rd(s->r,152,4)&rd(s->r,152,4)));
L_1803fb9b2_4:;
wr(s->r,519,1,(sx(rd(s->u,67,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9b2_5:;
wr(s->r,518,1,(rd(s->u,67,4)==((U)UINT64_C(0x0))));
L_1803fb9b2_6:;
wr(s->u,21,4,(rd(s->u,67,4)&((U)UINT64_C(0xff))));
L_1803fb9b2_7:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803fb9b2_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fb9b2_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fb9b2_10:;
/* 1803fb9b5: je 0x1803fb9c2 */
L_1803fb9b5_0:;
L_1803fb9b5_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fb9c2);}
L_1803fb9b5_2:;
return UINT64_C(0x1803fb9b7);
}
uint64_t b_1803fb9a7(CPU*s){
/* 1803fb9a7: mov dword ptr [rsp + 0x20c], r13d */
L_1803fb9a7_0:;
L_1803fb9a7_1:;
wr(s->u,5,8,(((U)UINT64_C(0x20c))+rd(s->r,32,8)));
L_1803fb9a7_2:;
wr(s->u,13,4,rd(s->r,168,4));
L_1803fb9a7_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803fb9a7_4:;
/* 1803fb9af: shl ebp, 0x17 */
L_1803fb9af_0:;
L_1803fb9af_1:;
wr(s->u,55,4,(((U)UINT64_C(0x17))&((U)UINT64_C(0x1f))));
L_1803fb9af_2:;
wr(s->u,59,4,rd(s->r,40,4));
L_1803fb9af_3:;
wr(s->r,40,4,((rd(s->u,55,4)>=32)?0:(rd(s->r,40,4)<<rd(s->u,55,4))));
L_1803fb9af_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fb9af_5:;
wr(s->u,42,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803fb9af_6:;
wr(s->u,43,4,(rd(s->u,55,4)-((U)UINT64_C(0x1))));
L_1803fb9af_7:;
wr(s->u,47,4,((rd(s->u,43,4)>=32)?0:(rd(s->u,59,4)<<rd(s->u,43,4))));
L_1803fb9af_8:;
wr(s->u,51,1,(sx(rd(s->u,47,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9af_9:;
wr(s->u,0,1,rd(s->u,42,1));
L_1803fb9af_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fb9af_11:;
wr(s->u,2,1,(!rd(s->u,42,1)));
L_1803fb9af_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fb9af_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,51,1)));
L_1803fb9af_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fb9af_15:;
wr(s->u,52,1,(rd(s->u,55,4)==((U)UINT64_C(0x1))));
L_1803fb9af_16:;
wr(s->u,53,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9af_17:;
wr(s->u,54,1,(rd(s->r,512,1)^rd(s->u,53,1)));
L_1803fb9af_18:;
wr(s->u,0,1,rd(s->u,52,1));
L_1803fb9af_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,54,1)));
L_1803fb9af_20:;
wr(s->u,2,1,(!rd(s->u,52,1)));
L_1803fb9af_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fb9af_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fb9af_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fb9af_24:;
wr(s->u,23,1,(rd(s->u,55,4)!=((U)UINT64_C(0x0))));
L_1803fb9af_25:;
wr(s->u,24,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9af_26:;
wr(s->u,25,1,(!rd(s->u,23,1)));
L_1803fb9af_27:;
wr(s->u,26,1,(rd(s->u,25,1)&rd(s->r,519,1)));
L_1803fb9af_28:;
wr(s->u,27,1,(rd(s->u,23,1)&rd(s->u,24,1)));
L_1803fb9af_29:;
wr(s->r,519,1,(rd(s->u,26,1)|rd(s->u,27,1)));
L_1803fb9af_30:;
wr(s->u,28,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803fb9af_31:;
wr(s->u,29,1,(!rd(s->u,23,1)));
L_1803fb9af_32:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,518,1)));
L_1803fb9af_33:;
wr(s->u,31,1,(rd(s->u,23,1)&rd(s->u,28,1)));
L_1803fb9af_34:;
wr(s->r,518,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803fb9af_35:;
wr(s->u,32,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803fb9af_36:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803fb9af_37:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803fb9af_38:;
wr(s->u,38,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803fb9af_39:;
wr(s->u,39,1,(!rd(s->u,23,1)));
L_1803fb9af_40:;
wr(s->u,40,1,(rd(s->u,39,1)&rd(s->r,514,1)));
L_1803fb9af_41:;
wr(s->u,41,1,(rd(s->u,23,1)&rd(s->u,38,1)));
L_1803fb9af_42:;
wr(s->r,514,1,(rd(s->u,40,1)|rd(s->u,41,1)));
L_1803fb9af_43:;
/* 1803fb9b2: test r11d, r11d */
L_1803fb9b2_0:;
L_1803fb9b2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb9b2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb9b2_3:;
wr(s->u,63,4,(rd(s->r,152,4)&rd(s->r,152,4)));
L_1803fb9b2_4:;
wr(s->r,519,1,(sx(rd(s->u,63,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9b2_5:;
wr(s->r,518,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803fb9b2_6:;
wr(s->u,17,4,(rd(s->u,63,4)&((U)UINT64_C(0xff))));
L_1803fb9b2_7:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fb9b2_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb9b2_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb9b2_10:;
/* 1803fb9b5: je 0x1803fb9c2 */
L_1803fb9b5_0:;
L_1803fb9b5_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fb9c2);}
L_1803fb9b5_2:;
return UINT64_C(0x1803fb9b7);
}
uint64_t b_1803fb9b7(CPU*s){
/* 1803fb9b7: mov edi, dword ptr [rsp + 0x210] */
L_1803fb9b7_0:;
L_1803fb9b7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x210))+rd(s->r,32,8)));
L_1803fb9b7_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb9b7_3:;
wr(s->r,56,4,rd(s->u,8,4));
L_1803fb9b7_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fb9b7_5:;
/* 1803fb9be: sub edi, ebp */
L_1803fb9be_0:;
L_1803fb9be_1:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->r,40,4)));
L_1803fb9be_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->r,40,4),4,1));
L_1803fb9be_3:;
wr(s->r,56,4,(rd(s->r,56,4)-rd(s->r,40,4)));
L_1803fb9be_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fb9be_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9be_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803fb9be_7:;
wr(s->u,12,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803fb9be_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803fb9be_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fb9be_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fb9be_11:;
/* 1803fb9c0: jmp 0x1803fb9cb */
L_1803fb9c0_0:;
L_1803fb9c0_1:;
return UINT64_C(0x1803fb9cb);
L_1803fb9c0_2:;
return UINT64_C(0x1803fb9c2);
}
uint64_t b_1803fb9c2(CPU*s){
/* 1803fb9c2: mov edi, dword ptr [rsp + 0x210] */
L_1803fb9c2_0:;
L_1803fb9c2_1:;
wr(s->u,5,8,(((U)UINT64_C(0x210))+rd(s->r,32,8)));
L_1803fb9c2_2:;
wr(s->u,17,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803fb9c2_3:;
wr(s->r,56,4,rd(s->u,17,4));
L_1803fb9c2_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fb9c2_5:;
/* 1803fb9c9: add edi, ebp */
L_1803fb9c9_0:;
L_1803fb9c9_1:;
wr(s->r,512,1,(((rd(s->r,56,4)+rd(s->r,40,4))&(((U)1<<32)-1))<rd(s->r,56,4)));
L_1803fb9c9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->r,40,4),4,0));
L_1803fb9c9_3:;
wr(s->r,56,4,(rd(s->r,56,4)+rd(s->r,40,4)));
L_1803fb9c9_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fb9c9_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9c9_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803fb9c9_7:;
wr(s->u,21,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803fb9c9_8:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803fb9c9_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fb9c9_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fb9c9_11:;
/* 1803fb9cb: mov dword ptr [rsp + 0x210], edi */
L_1803fb9cb_0:;
L_1803fb9cb_1:;
wr(s->u,5,8,(((U)UINT64_C(0x210))+rd(s->r,32,8)));
L_1803fb9cb_2:;
wr(s->u,13,4,rd(s->r,56,4));
L_1803fb9cb_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803fb9cb_4:;
/* 1803fb9d2: shl ecx, 0x17 */
L_1803fb9d2_0:;
L_1803fb9d2_1:;
wr(s->u,59,4,(((U)UINT64_C(0x17))&((U)UINT64_C(0x1f))));
L_1803fb9d2_2:;
wr(s->u,63,4,rd(s->r,8,4));
L_1803fb9d2_3:;
wr(s->r,8,4,((rd(s->u,59,4)>=32)?0:(rd(s->r,8,4)<<rd(s->u,59,4))));
L_1803fb9d2_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fb9d2_5:;
wr(s->u,46,1,(rd(s->u,59,4)==((U)UINT64_C(0x0))));
L_1803fb9d2_6:;
wr(s->u,47,4,(rd(s->u,59,4)-((U)UINT64_C(0x1))));
L_1803fb9d2_7:;
wr(s->u,51,4,((rd(s->u,47,4)>=32)?0:(rd(s->u,63,4)<<rd(s->u,47,4))));
L_1803fb9d2_8:;
wr(s->u,55,1,(sx(rd(s->u,51,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9d2_9:;
wr(s->u,0,1,rd(s->u,46,1));
L_1803fb9d2_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fb9d2_11:;
wr(s->u,2,1,(!rd(s->u,46,1)));
L_1803fb9d2_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fb9d2_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,55,1)));
L_1803fb9d2_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fb9d2_15:;
wr(s->u,56,1,(rd(s->u,59,4)==((U)UINT64_C(0x1))));
L_1803fb9d2_16:;
wr(s->u,57,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9d2_17:;
wr(s->u,58,1,(rd(s->r,512,1)^rd(s->u,57,1)));
L_1803fb9d2_18:;
wr(s->u,0,1,rd(s->u,56,1));
L_1803fb9d2_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,58,1)));
L_1803fb9d2_20:;
wr(s->u,2,1,(!rd(s->u,56,1)));
L_1803fb9d2_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fb9d2_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fb9d2_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fb9d2_24:;
wr(s->u,27,1,(rd(s->u,59,4)!=((U)UINT64_C(0x0))));
L_1803fb9d2_25:;
wr(s->u,28,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9d2_26:;
wr(s->u,29,1,(!rd(s->u,27,1)));
L_1803fb9d2_27:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,519,1)));
L_1803fb9d2_28:;
wr(s->u,31,1,(rd(s->u,27,1)&rd(s->u,28,1)));
L_1803fb9d2_29:;
wr(s->r,519,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803fb9d2_30:;
wr(s->u,32,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803fb9d2_31:;
wr(s->u,33,1,(!rd(s->u,27,1)));
L_1803fb9d2_32:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,518,1)));
L_1803fb9d2_33:;
wr(s->u,35,1,(rd(s->u,27,1)&rd(s->u,32,1)));
L_1803fb9d2_34:;
wr(s->r,518,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803fb9d2_35:;
wr(s->u,36,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803fb9d2_36:;
wr(s->u,40,1,pop(rd(s->u,36,4),4));
L_1803fb9d2_37:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803fb9d2_38:;
wr(s->u,42,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803fb9d2_39:;
wr(s->u,43,1,(!rd(s->u,27,1)));
L_1803fb9d2_40:;
wr(s->u,44,1,(rd(s->u,43,1)&rd(s->r,514,1)));
L_1803fb9d2_41:;
wr(s->u,45,1,(rd(s->u,27,1)&rd(s->u,42,1)));
L_1803fb9d2_42:;
wr(s->r,514,1,(rd(s->u,44,1)|rd(s->u,45,1)));
L_1803fb9d2_43:;
/* 1803fb9d5: test r10d, r10d */
L_1803fb9d5_0:;
L_1803fb9d5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb9d5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb9d5_3:;
wr(s->u,67,4,(rd(s->r,144,4)&rd(s->r,144,4)));
L_1803fb9d5_4:;
wr(s->r,519,1,(sx(rd(s->u,67,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9d5_5:;
wr(s->r,518,1,(rd(s->u,67,4)==((U)UINT64_C(0x0))));
L_1803fb9d5_6:;
wr(s->u,21,4,(rd(s->u,67,4)&((U)UINT64_C(0xff))));
L_1803fb9d5_7:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803fb9d5_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fb9d5_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fb9d5_10:;
/* 1803fb9d8: je 0x1803fb9e5 */
L_1803fb9d8_0:;
L_1803fb9d8_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fb9e5);}
L_1803fb9d8_2:;
return UINT64_C(0x1803fb9da);
}
uint64_t b_1803fb9cb(CPU*s){
/* 1803fb9cb: mov dword ptr [rsp + 0x210], edi */
L_1803fb9cb_0:;
L_1803fb9cb_1:;
wr(s->u,5,8,(((U)UINT64_C(0x210))+rd(s->r,32,8)));
L_1803fb9cb_2:;
wr(s->u,13,4,rd(s->r,56,4));
L_1803fb9cb_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803fb9cb_4:;
/* 1803fb9d2: shl ecx, 0x17 */
L_1803fb9d2_0:;
L_1803fb9d2_1:;
wr(s->u,55,4,(((U)UINT64_C(0x17))&((U)UINT64_C(0x1f))));
L_1803fb9d2_2:;
wr(s->u,59,4,rd(s->r,8,4));
L_1803fb9d2_3:;
wr(s->r,8,4,((rd(s->u,55,4)>=32)?0:(rd(s->r,8,4)<<rd(s->u,55,4))));
L_1803fb9d2_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fb9d2_5:;
wr(s->u,42,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803fb9d2_6:;
wr(s->u,43,4,(rd(s->u,55,4)-((U)UINT64_C(0x1))));
L_1803fb9d2_7:;
wr(s->u,47,4,((rd(s->u,43,4)>=32)?0:(rd(s->u,59,4)<<rd(s->u,43,4))));
L_1803fb9d2_8:;
wr(s->u,51,1,(sx(rd(s->u,47,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9d2_9:;
wr(s->u,0,1,rd(s->u,42,1));
L_1803fb9d2_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fb9d2_11:;
wr(s->u,2,1,(!rd(s->u,42,1)));
L_1803fb9d2_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fb9d2_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,51,1)));
L_1803fb9d2_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fb9d2_15:;
wr(s->u,52,1,(rd(s->u,55,4)==((U)UINT64_C(0x1))));
L_1803fb9d2_16:;
wr(s->u,53,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9d2_17:;
wr(s->u,54,1,(rd(s->r,512,1)^rd(s->u,53,1)));
L_1803fb9d2_18:;
wr(s->u,0,1,rd(s->u,52,1));
L_1803fb9d2_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,54,1)));
L_1803fb9d2_20:;
wr(s->u,2,1,(!rd(s->u,52,1)));
L_1803fb9d2_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fb9d2_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fb9d2_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fb9d2_24:;
wr(s->u,23,1,(rd(s->u,55,4)!=((U)UINT64_C(0x0))));
L_1803fb9d2_25:;
wr(s->u,24,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9d2_26:;
wr(s->u,25,1,(!rd(s->u,23,1)));
L_1803fb9d2_27:;
wr(s->u,26,1,(rd(s->u,25,1)&rd(s->r,519,1)));
L_1803fb9d2_28:;
wr(s->u,27,1,(rd(s->u,23,1)&rd(s->u,24,1)));
L_1803fb9d2_29:;
wr(s->r,519,1,(rd(s->u,26,1)|rd(s->u,27,1)));
L_1803fb9d2_30:;
wr(s->u,28,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803fb9d2_31:;
wr(s->u,29,1,(!rd(s->u,23,1)));
L_1803fb9d2_32:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,518,1)));
L_1803fb9d2_33:;
wr(s->u,31,1,(rd(s->u,23,1)&rd(s->u,28,1)));
L_1803fb9d2_34:;
wr(s->r,518,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803fb9d2_35:;
wr(s->u,32,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803fb9d2_36:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803fb9d2_37:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803fb9d2_38:;
wr(s->u,38,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803fb9d2_39:;
wr(s->u,39,1,(!rd(s->u,23,1)));
L_1803fb9d2_40:;
wr(s->u,40,1,(rd(s->u,39,1)&rd(s->r,514,1)));
L_1803fb9d2_41:;
wr(s->u,41,1,(rd(s->u,23,1)&rd(s->u,38,1)));
L_1803fb9d2_42:;
wr(s->r,514,1,(rd(s->u,40,1)|rd(s->u,41,1)));
L_1803fb9d2_43:;
/* 1803fb9d5: test r10d, r10d */
L_1803fb9d5_0:;
L_1803fb9d5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb9d5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb9d5_3:;
wr(s->u,63,4,(rd(s->r,144,4)&rd(s->r,144,4)));
L_1803fb9d5_4:;
wr(s->r,519,1,(sx(rd(s->u,63,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9d5_5:;
wr(s->r,518,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803fb9d5_6:;
wr(s->u,17,4,(rd(s->u,63,4)&((U)UINT64_C(0xff))));
L_1803fb9d5_7:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fb9d5_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb9d5_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb9d5_10:;
/* 1803fb9d8: je 0x1803fb9e5 */
L_1803fb9d8_0:;
L_1803fb9d8_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fb9e5);}
L_1803fb9d8_2:;
return UINT64_C(0x1803fb9da);
}
uint64_t b_1803fb9da(CPU*s){
/* 1803fb9da: mov ebp, dword ptr [rsp + 0x214] */
L_1803fb9da_0:;
L_1803fb9da_1:;
wr(s->u,0,8,(((U)UINT64_C(0x214))+rd(s->r,32,8)));
L_1803fb9da_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb9da_3:;
wr(s->r,40,4,rd(s->u,8,4));
L_1803fb9da_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fb9da_5:;
/* 1803fb9e1: sub ebp, ecx */
L_1803fb9e1_0:;
L_1803fb9e1_1:;
wr(s->r,512,1,(rd(s->r,40,4)<rd(s->r,8,4)));
L_1803fb9e1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->r,8,4),4,1));
L_1803fb9e1_3:;
wr(s->r,40,4,(rd(s->r,40,4)-rd(s->r,8,4)));
L_1803fb9e1_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fb9e1_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9e1_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803fb9e1_7:;
wr(s->u,12,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803fb9e1_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803fb9e1_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fb9e1_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fb9e1_11:;
/* 1803fb9e3: jmp 0x1803fb9ee */
L_1803fb9e3_0:;
L_1803fb9e3_1:;
return UINT64_C(0x1803fb9ee);
L_1803fb9e3_2:;
return UINT64_C(0x1803fb9e5);
}
uint64_t b_1803fb9e5(CPU*s){
/* 1803fb9e5: mov ebp, dword ptr [rsp + 0x214] */
L_1803fb9e5_0:;
L_1803fb9e5_1:;
wr(s->u,5,8,(((U)UINT64_C(0x214))+rd(s->r,32,8)));
L_1803fb9e5_2:;
wr(s->u,17,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803fb9e5_3:;
wr(s->r,40,4,rd(s->u,17,4));
L_1803fb9e5_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fb9e5_5:;
/* 1803fb9ec: add ebp, ecx */
L_1803fb9ec_0:;
L_1803fb9ec_1:;
wr(s->r,512,1,(((rd(s->r,40,4)+rd(s->r,8,4))&(((U)1<<32)-1))<rd(s->r,40,4)));
L_1803fb9ec_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->r,8,4),4,0));
L_1803fb9ec_3:;
wr(s->r,40,4,(rd(s->r,40,4)+rd(s->r,8,4)));
L_1803fb9ec_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fb9ec_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9ec_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803fb9ec_7:;
wr(s->u,21,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803fb9ec_8:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803fb9ec_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fb9ec_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fb9ec_11:;
/* 1803fb9ee: mov dword ptr [rsp + 0x214], ebp */
L_1803fb9ee_0:;
L_1803fb9ee_1:;
wr(s->u,5,8,(((U)UINT64_C(0x214))+rd(s->r,32,8)));
L_1803fb9ee_2:;
wr(s->u,13,4,rd(s->r,40,4));
L_1803fb9ee_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803fb9ee_4:;
/* 1803fb9f5: shl edx, 0x17 */
L_1803fb9f5_0:;
L_1803fb9f5_1:;
wr(s->u,59,4,(((U)UINT64_C(0x17))&((U)UINT64_C(0x1f))));
L_1803fb9f5_2:;
wr(s->u,63,4,rd(s->r,16,4));
L_1803fb9f5_3:;
wr(s->r,16,4,((rd(s->u,59,4)>=32)?0:(rd(s->r,16,4)<<rd(s->u,59,4))));
L_1803fb9f5_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fb9f5_5:;
wr(s->u,46,1,(rd(s->u,59,4)==((U)UINT64_C(0x0))));
L_1803fb9f5_6:;
wr(s->u,47,4,(rd(s->u,59,4)-((U)UINT64_C(0x1))));
L_1803fb9f5_7:;
wr(s->u,51,4,((rd(s->u,47,4)>=32)?0:(rd(s->u,63,4)<<rd(s->u,47,4))));
L_1803fb9f5_8:;
wr(s->u,55,1,(sx(rd(s->u,51,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9f5_9:;
wr(s->u,0,1,rd(s->u,46,1));
L_1803fb9f5_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fb9f5_11:;
wr(s->u,2,1,(!rd(s->u,46,1)));
L_1803fb9f5_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fb9f5_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,55,1)));
L_1803fb9f5_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fb9f5_15:;
wr(s->u,56,1,(rd(s->u,59,4)==((U)UINT64_C(0x1))));
L_1803fb9f5_16:;
wr(s->u,57,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9f5_17:;
wr(s->u,58,1,(rd(s->r,512,1)^rd(s->u,57,1)));
L_1803fb9f5_18:;
wr(s->u,0,1,rd(s->u,56,1));
L_1803fb9f5_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,58,1)));
L_1803fb9f5_20:;
wr(s->u,2,1,(!rd(s->u,56,1)));
L_1803fb9f5_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fb9f5_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fb9f5_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fb9f5_24:;
wr(s->u,27,1,(rd(s->u,59,4)!=((U)UINT64_C(0x0))));
L_1803fb9f5_25:;
wr(s->u,28,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9f5_26:;
wr(s->u,29,1,(!rd(s->u,27,1)));
L_1803fb9f5_27:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,519,1)));
L_1803fb9f5_28:;
wr(s->u,31,1,(rd(s->u,27,1)&rd(s->u,28,1)));
L_1803fb9f5_29:;
wr(s->r,519,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803fb9f5_30:;
wr(s->u,32,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fb9f5_31:;
wr(s->u,33,1,(!rd(s->u,27,1)));
L_1803fb9f5_32:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,518,1)));
L_1803fb9f5_33:;
wr(s->u,35,1,(rd(s->u,27,1)&rd(s->u,32,1)));
L_1803fb9f5_34:;
wr(s->r,518,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803fb9f5_35:;
wr(s->u,36,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fb9f5_36:;
wr(s->u,40,1,pop(rd(s->u,36,4),4));
L_1803fb9f5_37:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803fb9f5_38:;
wr(s->u,42,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803fb9f5_39:;
wr(s->u,43,1,(!rd(s->u,27,1)));
L_1803fb9f5_40:;
wr(s->u,44,1,(rd(s->u,43,1)&rd(s->r,514,1)));
L_1803fb9f5_41:;
wr(s->u,45,1,(rd(s->u,27,1)&rd(s->u,42,1)));
L_1803fb9f5_42:;
wr(s->r,514,1,(rd(s->u,44,1)|rd(s->u,45,1)));
L_1803fb9f5_43:;
/* 1803fb9f8: test r9d, r9d */
L_1803fb9f8_0:;
L_1803fb9f8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb9f8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb9f8_3:;
wr(s->u,67,4,(rd(s->r,136,4)&rd(s->r,136,4)));
L_1803fb9f8_4:;
wr(s->r,519,1,(sx(rd(s->u,67,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9f8_5:;
wr(s->r,518,1,(rd(s->u,67,4)==((U)UINT64_C(0x0))));
L_1803fb9f8_6:;
wr(s->u,21,4,(rd(s->u,67,4)&((U)UINT64_C(0xff))));
L_1803fb9f8_7:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803fb9f8_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fb9f8_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fb9f8_10:;
/* 1803fb9fb: je 0x1803fba0a */
L_1803fb9fb_0:;
L_1803fb9fb_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fba0a);}
L_1803fb9fb_2:;
return UINT64_C(0x1803fb9fd);
}
uint64_t b_1803fb9ee(CPU*s){
/* 1803fb9ee: mov dword ptr [rsp + 0x214], ebp */
L_1803fb9ee_0:;
L_1803fb9ee_1:;
wr(s->u,5,8,(((U)UINT64_C(0x214))+rd(s->r,32,8)));
L_1803fb9ee_2:;
wr(s->u,13,4,rd(s->r,40,4));
L_1803fb9ee_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803fb9ee_4:;
/* 1803fb9f5: shl edx, 0x17 */
L_1803fb9f5_0:;
L_1803fb9f5_1:;
wr(s->u,55,4,(((U)UINT64_C(0x17))&((U)UINT64_C(0x1f))));
L_1803fb9f5_2:;
wr(s->u,59,4,rd(s->r,16,4));
L_1803fb9f5_3:;
wr(s->r,16,4,((rd(s->u,55,4)>=32)?0:(rd(s->r,16,4)<<rd(s->u,55,4))));
L_1803fb9f5_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fb9f5_5:;
wr(s->u,42,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803fb9f5_6:;
wr(s->u,43,4,(rd(s->u,55,4)-((U)UINT64_C(0x1))));
L_1803fb9f5_7:;
wr(s->u,47,4,((rd(s->u,43,4)>=32)?0:(rd(s->u,59,4)<<rd(s->u,43,4))));
L_1803fb9f5_8:;
wr(s->u,51,1,(sx(rd(s->u,47,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9f5_9:;
wr(s->u,0,1,rd(s->u,42,1));
L_1803fb9f5_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fb9f5_11:;
wr(s->u,2,1,(!rd(s->u,42,1)));
L_1803fb9f5_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fb9f5_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,51,1)));
L_1803fb9f5_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fb9f5_15:;
wr(s->u,52,1,(rd(s->u,55,4)==((U)UINT64_C(0x1))));
L_1803fb9f5_16:;
wr(s->u,53,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9f5_17:;
wr(s->u,54,1,(rd(s->r,512,1)^rd(s->u,53,1)));
L_1803fb9f5_18:;
wr(s->u,0,1,rd(s->u,52,1));
L_1803fb9f5_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,54,1)));
L_1803fb9f5_20:;
wr(s->u,2,1,(!rd(s->u,52,1)));
L_1803fb9f5_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fb9f5_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fb9f5_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fb9f5_24:;
wr(s->u,23,1,(rd(s->u,55,4)!=((U)UINT64_C(0x0))));
L_1803fb9f5_25:;
wr(s->u,24,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9f5_26:;
wr(s->u,25,1,(!rd(s->u,23,1)));
L_1803fb9f5_27:;
wr(s->u,26,1,(rd(s->u,25,1)&rd(s->r,519,1)));
L_1803fb9f5_28:;
wr(s->u,27,1,(rd(s->u,23,1)&rd(s->u,24,1)));
L_1803fb9f5_29:;
wr(s->r,519,1,(rd(s->u,26,1)|rd(s->u,27,1)));
L_1803fb9f5_30:;
wr(s->u,28,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fb9f5_31:;
wr(s->u,29,1,(!rd(s->u,23,1)));
L_1803fb9f5_32:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,518,1)));
L_1803fb9f5_33:;
wr(s->u,31,1,(rd(s->u,23,1)&rd(s->u,28,1)));
L_1803fb9f5_34:;
wr(s->r,518,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803fb9f5_35:;
wr(s->u,32,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fb9f5_36:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803fb9f5_37:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803fb9f5_38:;
wr(s->u,38,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803fb9f5_39:;
wr(s->u,39,1,(!rd(s->u,23,1)));
L_1803fb9f5_40:;
wr(s->u,40,1,(rd(s->u,39,1)&rd(s->r,514,1)));
L_1803fb9f5_41:;
wr(s->u,41,1,(rd(s->u,23,1)&rd(s->u,38,1)));
L_1803fb9f5_42:;
wr(s->r,514,1,(rd(s->u,40,1)|rd(s->u,41,1)));
L_1803fb9f5_43:;
/* 1803fb9f8: test r9d, r9d */
L_1803fb9f8_0:;
L_1803fb9f8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb9f8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb9f8_3:;
wr(s->u,63,4,(rd(s->r,136,4)&rd(s->r,136,4)));
L_1803fb9f8_4:;
wr(s->r,519,1,(sx(rd(s->u,63,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb9f8_5:;
wr(s->r,518,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803fb9f8_6:;
wr(s->u,17,4,(rd(s->u,63,4)&((U)UINT64_C(0xff))));
L_1803fb9f8_7:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fb9f8_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fb9f8_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fb9f8_10:;
/* 1803fb9fb: je 0x1803fba0a */
L_1803fb9fb_0:;
L_1803fb9fb_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fba0a);}
L_1803fb9fb_2:;
return UINT64_C(0x1803fb9fd);
}
uint64_t b_1803fb9fd(CPU*s){
/* 1803fb9fd: mov r10d, dword ptr [rsp + 0x218] */
L_1803fb9fd_0:;
L_1803fb9fd_1:;
wr(s->u,0,8,(((U)UINT64_C(0x218))+rd(s->r,32,8)));
L_1803fb9fd_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb9fd_3:;
wr(s->r,144,4,rd(s->u,8,4));
L_1803fb9fd_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fb9fd_5:;
/* 1803fba05: sub r10d, edx */
L_1803fba05_0:;
L_1803fba05_1:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->r,16,4)));
L_1803fba05_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->r,16,4),4,1));
L_1803fba05_3:;
wr(s->r,144,4,(rd(s->r,144,4)-rd(s->r,16,4)));
L_1803fba05_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fba05_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fba05_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fba05_7:;
wr(s->u,12,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fba05_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803fba05_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fba05_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fba05_11:;
/* 1803fba08: jmp 0x1803fba15 */
L_1803fba08_0:;
L_1803fba08_1:;
return UINT64_C(0x1803fba15);
L_1803fba08_2:;
return UINT64_C(0x1803fba0a);
}
uint64_t b_1803fba0a(CPU*s){
/* 1803fba0a: mov r10d, dword ptr [rsp + 0x218] */
L_1803fba0a_0:;
L_1803fba0a_1:;
wr(s->u,16,8,(((U)UINT64_C(0x218))+rd(s->r,32,8)));
L_1803fba0a_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fba0a_3:;
wr(s->r,144,4,rd(s->u,28,4));
L_1803fba0a_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fba0a_5:;
/* 1803fba12: add r10d, edx */
L_1803fba12_0:;
L_1803fba12_1:;
wr(s->r,512,1,(((rd(s->r,144,4)+rd(s->r,16,4))&(((U)1<<32)-1))<rd(s->r,144,4)));
L_1803fba12_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->r,16,4),4,0));
L_1803fba12_3:;
wr(s->r,144,4,(rd(s->r,144,4)+rd(s->r,16,4)));
L_1803fba12_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fba12_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fba12_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fba12_7:;
wr(s->u,41,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fba12_8:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803fba12_9:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803fba12_10:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803fba12_11:;
/* 1803fba15: mov edx, dword ptr [rsp + 0x20c] */
L_1803fba15_0:;
L_1803fba15_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20c))+rd(s->r,32,8)));
L_1803fba15_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fba15_3:;
wr(s->r,16,4,rd(s->u,28,4));
L_1803fba15_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fba15_5:;
/* 1803fba1c: mov r11, qword ptr [rsp + 0x1e8] */
L_1803fba1c_0:;
L_1803fba1c_1:;
wr(s->u,16,8,(((U)UINT64_C(0x1e8))+rd(s->r,32,8)));
L_1803fba1c_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803fba1c_3:;
wr(s->r,152,8,rd(s->u,32,8));
L_1803fba1c_4:;
/* 1803fba24: mov rcx, qword ptr [rsp + 0x200] */
L_1803fba24_0:;
L_1803fba24_1:;
wr(s->u,16,8,(((U)UINT64_C(0x200))+rd(s->r,32,8)));
L_1803fba24_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803fba24_3:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803fba24_4:;
/* 1803fba2c: mov ebp, dword ptr [rsp + 0x210] */
L_1803fba2c_0:;
L_1803fba2c_1:;
wr(s->u,16,8,(((U)UINT64_C(0x210))+rd(s->r,32,8)));
L_1803fba2c_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fba2c_3:;
wr(s->r,40,4,rd(s->u,28,4));
L_1803fba2c_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fba2c_5:;
/* 1803fba33: mov rdi, qword ptr [rsp + 0x1f8] */
L_1803fba33_0:;
L_1803fba33_1:;
wr(s->u,16,8,(((U)UINT64_C(0x1f8))+rd(s->r,32,8)));
L_1803fba33_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803fba33_3:;
wr(s->r,56,8,rd(s->u,32,8));
L_1803fba33_4:;
/* 1803fba3b: mov r9d, dword ptr [rsp + 0x214] */
L_1803fba3b_0:;
L_1803fba3b_1:;
wr(s->u,16,8,(((U)UINT64_C(0x214))+rd(s->r,32,8)));
L_1803fba3b_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fba3b_3:;
wr(s->r,136,4,rd(s->u,28,4));
L_1803fba3b_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fba3b_5:;
/* 1803fba43: mov dword ptr [rsp + 0x218], r10d */
L_1803fba43_0:;
L_1803fba43_1:;
wr(s->u,16,8,(((U)UINT64_C(0x218))+rd(s->r,32,8)));
L_1803fba43_2:;
wr(s->u,24,4,rd(s->r,144,4));
L_1803fba43_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fba43_4:;
/* 1803fba4b: mov dword ptr [r11 + rcx*4], edx */
L_1803fba4b_0:;
L_1803fba4b_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803fba4b_2:;
wr(s->u,8,8,(rd(s->r,152,8)+rd(s->u,0,8)));
L_1803fba4b_3:;
wr(s->u,24,4,rd(s->r,16,4));
L_1803fba4b_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803fba4b_5:;
/* 1803fba4f: test eax, eax */
L_1803fba4f_0:;
L_1803fba4f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fba4f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fba4f_3:;
wr(s->u,47,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803fba4f_4:;
wr(s->r,519,1,(sx(rd(s->u,47,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fba4f_5:;
wr(s->r,518,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803fba4f_6:;
wr(s->u,41,4,(rd(s->u,47,4)&((U)UINT64_C(0xff))));
L_1803fba4f_7:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803fba4f_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803fba4f_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803fba4f_10:;
/* 1803fba51: mov dword ptr [r11 + rdi*4], ebp */
L_1803fba51_0:;
L_1803fba51_1:;
wr(s->u,0,8,(rd(s->r,56,8)*((U)UINT64_C(0x4))));
L_1803fba51_2:;
wr(s->u,8,8,(rd(s->r,152,8)+rd(s->u,0,8)));
L_1803fba51_3:;
wr(s->u,24,4,rd(s->r,40,4));
L_1803fba51_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803fba51_5:;
/* 1803fba55: mov dword ptr [r11 + r8*4], r9d */
L_1803fba55_0:;
L_1803fba55_1:;
wr(s->u,0,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803fba55_2:;
wr(s->u,8,8,(rd(s->r,152,8)+rd(s->u,0,8)));
L_1803fba55_3:;
wr(s->u,24,4,rd(s->r,136,4));
L_1803fba55_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803fba55_5:;
/* 1803fba59: mov r8, qword ptr [rsp + 0x1f0] */
L_1803fba59_0:;
L_1803fba59_1:;
wr(s->u,16,8,(((U)UINT64_C(0x1f0))+rd(s->r,32,8)));
L_1803fba59_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803fba59_3:;
wr(s->r,128,8,rd(s->u,32,8));
L_1803fba59_4:;
/* 1803fba61: mov dword ptr [r11 + r8*4], r10d */
L_1803fba61_0:;
L_1803fba61_1:;
wr(s->u,0,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803fba61_2:;
wr(s->u,8,8,(rd(s->r,152,8)+rd(s->u,0,8)));
L_1803fba61_3:;
wr(s->u,24,4,rd(s->r,144,4));
L_1803fba61_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803fba61_5:;
/* 1803fba65: jge 0x1803faf87 */
L_1803fba65_0:;
L_1803fba65_1:;
wr(s->u,40,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fba65_2:;
if(rd(s->u,40,1)){return UINT64_C(0x1803faf87);}
L_1803fba65_3:;
return UINT64_C(0x1803fba6b);
}
uint64_t b_1803fba15(CPU*s){
/* 1803fba15: mov edx, dword ptr [rsp + 0x20c] */
L_1803fba15_0:;
L_1803fba15_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20c))+rd(s->r,32,8)));
L_1803fba15_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fba15_3:;
wr(s->r,16,4,rd(s->u,28,4));
L_1803fba15_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fba15_5:;
/* 1803fba1c: mov r11, qword ptr [rsp + 0x1e8] */
L_1803fba1c_0:;
L_1803fba1c_1:;
wr(s->u,16,8,(((U)UINT64_C(0x1e8))+rd(s->r,32,8)));
L_1803fba1c_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803fba1c_3:;
wr(s->r,152,8,rd(s->u,32,8));
L_1803fba1c_4:;
/* 1803fba24: mov rcx, qword ptr [rsp + 0x200] */
L_1803fba24_0:;
L_1803fba24_1:;
wr(s->u,16,8,(((U)UINT64_C(0x200))+rd(s->r,32,8)));
L_1803fba24_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803fba24_3:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803fba24_4:;
/* 1803fba2c: mov ebp, dword ptr [rsp + 0x210] */
L_1803fba2c_0:;
L_1803fba2c_1:;
wr(s->u,16,8,(((U)UINT64_C(0x210))+rd(s->r,32,8)));
L_1803fba2c_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fba2c_3:;
wr(s->r,40,4,rd(s->u,28,4));
L_1803fba2c_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fba2c_5:;
/* 1803fba33: mov rdi, qword ptr [rsp + 0x1f8] */
L_1803fba33_0:;
L_1803fba33_1:;
wr(s->u,16,8,(((U)UINT64_C(0x1f8))+rd(s->r,32,8)));
L_1803fba33_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803fba33_3:;
wr(s->r,56,8,rd(s->u,32,8));
L_1803fba33_4:;
/* 1803fba3b: mov r9d, dword ptr [rsp + 0x214] */
L_1803fba3b_0:;
L_1803fba3b_1:;
wr(s->u,16,8,(((U)UINT64_C(0x214))+rd(s->r,32,8)));
L_1803fba3b_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fba3b_3:;
wr(s->r,136,4,rd(s->u,28,4));
L_1803fba3b_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fba3b_5:;
/* 1803fba43: mov dword ptr [rsp + 0x218], r10d */
L_1803fba43_0:;
L_1803fba43_1:;
wr(s->u,16,8,(((U)UINT64_C(0x218))+rd(s->r,32,8)));
L_1803fba43_2:;
wr(s->u,24,4,rd(s->r,144,4));
L_1803fba43_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fba43_4:;
/* 1803fba4b: mov dword ptr [r11 + rcx*4], edx */
L_1803fba4b_0:;
L_1803fba4b_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803fba4b_2:;
wr(s->u,8,8,(rd(s->r,152,8)+rd(s->u,0,8)));
L_1803fba4b_3:;
wr(s->u,24,4,rd(s->r,16,4));
L_1803fba4b_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803fba4b_5:;
/* 1803fba4f: test eax, eax */
L_1803fba4f_0:;
L_1803fba4f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fba4f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fba4f_3:;
wr(s->u,47,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803fba4f_4:;
wr(s->r,519,1,(sx(rd(s->u,47,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fba4f_5:;
wr(s->r,518,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803fba4f_6:;
wr(s->u,41,4,(rd(s->u,47,4)&((U)UINT64_C(0xff))));
L_1803fba4f_7:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803fba4f_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803fba4f_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803fba4f_10:;
/* 1803fba51: mov dword ptr [r11 + rdi*4], ebp */
L_1803fba51_0:;
L_1803fba51_1:;
wr(s->u,0,8,(rd(s->r,56,8)*((U)UINT64_C(0x4))));
L_1803fba51_2:;
wr(s->u,8,8,(rd(s->r,152,8)+rd(s->u,0,8)));
L_1803fba51_3:;
wr(s->u,24,4,rd(s->r,40,4));
L_1803fba51_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803fba51_5:;
/* 1803fba55: mov dword ptr [r11 + r8*4], r9d */
L_1803fba55_0:;
L_1803fba55_1:;
wr(s->u,0,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803fba55_2:;
wr(s->u,8,8,(rd(s->r,152,8)+rd(s->u,0,8)));
L_1803fba55_3:;
wr(s->u,24,4,rd(s->r,136,4));
L_1803fba55_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803fba55_5:;
/* 1803fba59: mov r8, qword ptr [rsp + 0x1f0] */
L_1803fba59_0:;
L_1803fba59_1:;
wr(s->u,16,8,(((U)UINT64_C(0x1f0))+rd(s->r,32,8)));
L_1803fba59_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803fba59_3:;
wr(s->r,128,8,rd(s->u,32,8));
L_1803fba59_4:;
/* 1803fba61: mov dword ptr [r11 + r8*4], r10d */
L_1803fba61_0:;
L_1803fba61_1:;
wr(s->u,0,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803fba61_2:;
wr(s->u,8,8,(rd(s->r,152,8)+rd(s->u,0,8)));
L_1803fba61_3:;
wr(s->u,24,4,rd(s->r,144,4));
L_1803fba61_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803fba61_5:;
/* 1803fba65: jge 0x1803faf87 */
L_1803fba65_0:;
L_1803fba65_1:;
wr(s->u,40,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fba65_2:;
if(rd(s->u,40,1)){return UINT64_C(0x1803faf87);}
L_1803fba65_3:;
return UINT64_C(0x1803fba6b);
}
uint64_t b_1803fba6b(CPU*s){
/* 1803fba6b: jmp 0x1803fbb7b */
L_1803fba6b_0:;
L_1803fba6b_1:;
return UINT64_C(0x1803fbb7b);
L_1803fba6b_2:;
return UINT64_C(0x1803fba70);
}
uint64_t b_1803fba70(CPU*s){
/* 1803fba70: shl rsi, 2 */
L_1803fba70_0:;
L_1803fba70_1:;
wr(s->u,96,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803fba70_2:;
wr(s->u,100,8,rd(s->r,48,8));
L_1803fba70_3:;
wr(s->r,48,8,((rd(s->u,96,4)>=64)?0:(rd(s->r,48,8)<<rd(s->u,96,4))));
L_1803fba70_4:;
wr(s->u,75,1,(rd(s->u,96,4)==((U)UINT64_C(0x0))));
L_1803fba70_5:;
wr(s->u,76,4,(rd(s->u,96,4)-((U)UINT64_C(0x1))));
L_1803fba70_6:;
wr(s->u,80,8,((rd(s->u,76,4)>=64)?0:(rd(s->u,100,8)<<rd(s->u,76,4))));
L_1803fba70_7:;
wr(s->u,88,1,(sx(rd(s->u,80,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fba70_8:;
wr(s->u,0,1,rd(s->u,75,1));
L_1803fba70_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fba70_10:;
wr(s->u,2,1,(!rd(s->u,75,1)));
L_1803fba70_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fba70_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,88,1)));
L_1803fba70_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fba70_14:;
wr(s->u,89,1,(rd(s->u,96,4)==((U)UINT64_C(0x1))));
L_1803fba70_15:;
wr(s->u,90,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fba70_16:;
wr(s->u,91,1,(rd(s->r,512,1)^rd(s->u,90,1)));
L_1803fba70_17:;
wr(s->u,0,1,rd(s->u,89,1));
L_1803fba70_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,91,1)));
L_1803fba70_19:;
wr(s->u,2,1,(!rd(s->u,89,1)));
L_1803fba70_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fba70_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fba70_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fba70_23:;
wr(s->u,52,1,(rd(s->u,96,4)!=((U)UINT64_C(0x0))));
L_1803fba70_24:;
wr(s->u,53,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fba70_25:;
wr(s->u,54,1,(!rd(s->u,52,1)));
L_1803fba70_26:;
wr(s->u,55,1,(rd(s->u,54,1)&rd(s->r,519,1)));
L_1803fba70_27:;
wr(s->u,56,1,(rd(s->u,52,1)&rd(s->u,53,1)));
L_1803fba70_28:;
wr(s->r,519,1,(rd(s->u,55,1)|rd(s->u,56,1)));
L_1803fba70_29:;
wr(s->u,57,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803fba70_30:;
wr(s->u,58,1,(!rd(s->u,52,1)));
L_1803fba70_31:;
wr(s->u,59,1,(rd(s->u,58,1)&rd(s->r,518,1)));
L_1803fba70_32:;
wr(s->u,60,1,(rd(s->u,52,1)&rd(s->u,57,1)));
L_1803fba70_33:;
wr(s->r,518,1,(rd(s->u,59,1)|rd(s->u,60,1)));
L_1803fba70_34:;
wr(s->u,61,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803fba70_35:;
wr(s->u,69,1,pop(rd(s->u,61,8),8));
L_1803fba70_36:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803fba70_37:;
wr(s->u,71,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803fba70_38:;
wr(s->u,72,1,(!rd(s->u,52,1)));
L_1803fba70_39:;
wr(s->u,73,1,(rd(s->u,72,1)&rd(s->r,514,1)));
L_1803fba70_40:;
wr(s->u,74,1,(rd(s->u,52,1)&rd(s->u,71,1)));
L_1803fba70_41:;
wr(s->r,514,1,(rd(s->u,73,1)|rd(s->u,74,1)));
L_1803fba70_42:;
/* 1803fba74: mov dword ptr [rsp + 0x208], 0x7f800000 */
L_1803fba74_0:;
L_1803fba74_1:;
wr(s->u,29,8,(((U)UINT64_C(0x208))+rd(s->r,32,8)));
L_1803fba74_2:;
wr(s->u,37,4,((U)UINT64_C(0x7f800000)));
L_1803fba74_3:;
mw((uint64_t)rd(s->u,29,8),4,rd(s->u,37,4));
L_1803fba74_4:;
/* 1803fba7f: xor r12d, r12d */
L_1803fba7f_0:;
L_1803fba7f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fba7f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fba7f_3:;
wr(s->r,160,4,(rd(s->r,160,4)^rd(s->r,160,4)));
L_1803fba7f_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fba7f_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fba7f_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fba7f_7:;
wr(s->u,46,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fba7f_8:;
wr(s->u,50,1,pop(rd(s->u,46,4),4));
L_1803fba7f_9:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803fba7f_10:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803fba7f_11:;
/* 1803fba82: mov ebx, 0x3f800000 */
L_1803fba82_0:;
L_1803fba82_1:;
wr(s->r,24,8,((U)UINT64_C(0x3f800000)));
L_1803fba82_2:;
/* 1803fba87: xor eax, eax */
L_1803fba87_0:;
L_1803fba87_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fba87_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fba87_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fba87_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fba87_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fba87_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fba87_7:;
wr(s->u,46,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fba87_8:;
wr(s->u,50,1,pop(rd(s->u,46,4),4));
L_1803fba87_9:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803fba87_10:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803fba87_11:;
/* 1803fba89: mov dword ptr [rsp + 0x20], eax */
L_1803fba89_0:;
L_1803fba89_1:;
wr(s->u,21,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fba89_2:;
wr(s->u,37,4,rd(s->r,0,4));
L_1803fba89_3:;
mw((uint64_t)rd(s->u,21,8),4,rd(s->u,37,4));
L_1803fba89_4:;
/* 1803fba8d: mov dword ptr [rsp + 0x21c], eax */
L_1803fba8d_0:;
L_1803fba8d_1:;
wr(s->u,29,8,(((U)UINT64_C(0x21c))+rd(s->r,32,8)));
L_1803fba8d_2:;
wr(s->u,37,4,rd(s->r,0,4));
L_1803fba8d_3:;
mw((uint64_t)rd(s->u,29,8),4,rd(s->u,37,4));
L_1803fba8d_4:;
/* 1803fba94: movss xmm0, dword ptr [r12 + rbp] */
L_1803fba94_0:;
L_1803fba94_1:;
wr(s->u,5,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803fba94_2:;
wr(s->u,13,8,(rd(s->r,160,8)+rd(s->u,5,8)));
L_1803fba94_3:;
wr(s->u,37,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803fba94_4:;
wr(s->r,4608,4,rd(s->u,37,4));
L_1803fba94_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fba94_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fba94_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fba94_8:;
/* 1803fba9a: mov ecx, dword ptr [r12 + rbp] */
L_1803fba9a_0:;
L_1803fba9a_1:;
wr(s->u,5,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803fba9a_2:;
wr(s->u,13,8,(rd(s->r,160,8)+rd(s->u,5,8)));
L_1803fba9a_3:;
wr(s->u,41,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803fba9a_4:;
wr(s->r,8,4,rd(s->u,41,4));
L_1803fba9a_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fba9a_6:;
/* 1803fba9e: mov dword ptr [rsp + 0x21c], ecx */
L_1803fba9e_0:;
L_1803fba9e_1:;
wr(s->u,29,8,(((U)UINT64_C(0x21c))+rd(s->r,32,8)));
L_1803fba9e_2:;
wr(s->u,37,4,rd(s->r,8,4));
L_1803fba9e_3:;
mw((uint64_t)rd(s->u,29,8),4,rd(s->u,37,4));
L_1803fba9e_4:;
/* 1803fbaa5: mov edx, ecx */
L_1803fbaa5_0:;
L_1803fbaa5_1:;
wr(s->r,16,4,rd(s->r,8,4));
L_1803fbaa5_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fbaa5_3:;
/* 1803fbaa7: and edx, 0x80000000 */
L_1803fbaa7_0:;
L_1803fbaa7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbaa7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbaa7_3:;
wr(s->r,16,4,(rd(s->r,16,4)&((U)UINT64_C(0x80000000))));
L_1803fbaa7_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fbaa7_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbaa7_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fbaa7_7:;
wr(s->u,46,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fbaa7_8:;
wr(s->u,50,1,pop(rd(s->u,46,4),4));
L_1803fbaa7_9:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803fbaa7_10:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803fbaa7_11:;
/* 1803fbaad: mov eax, ecx */
L_1803fbaad_0:;
L_1803fbaad_1:;
wr(s->r,0,4,rd(s->r,8,4));
L_1803fbaad_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fbaad_3:;
/* 1803fbaaf: and eax, 0x7fffffff */
L_1803fbaaf_0:;
L_1803fbaaf_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbaaf_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbaaf_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x7fffffff))));
L_1803fbaaf_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fbaaf_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbaaf_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fbaaf_7:;
wr(s->u,46,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fbaaf_8:;
wr(s->u,50,1,pop(rd(s->u,46,4),4));
L_1803fbaaf_9:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803fbaaf_10:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803fbaaf_11:;
/* 1803fbab4: cmp eax, 0x800000 */
L_1803fbab4_0:;
L_1803fbab4_1:;
wr(s->r,512,1,(rd(s->r,0,4)<((U)UINT64_C(0x800000))));
L_1803fbab4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x800000)),4,1));
L_1803fbab4_3:;
wr(s->u,92,4,(rd(s->r,0,4)-((U)UINT64_C(0x800000))));
L_1803fbab4_4:;
wr(s->r,519,1,(sx(rd(s->u,92,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbab4_5:;
wr(s->r,518,1,(rd(s->u,92,4)==((U)UINT64_C(0x0))));
L_1803fbab4_6:;
wr(s->u,46,4,(rd(s->u,92,4)&((U)UINT64_C(0xff))));
L_1803fbab4_7:;
wr(s->u,50,1,pop(rd(s->u,46,4),4));
L_1803fbab4_8:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803fbab4_9:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803fbab4_10:;
/* 1803fbab9: jae 0x1803fbac1 */
L_1803fbab9_0:;
L_1803fbab9_1:;
wr(s->u,45,1,(!rd(s->r,512,1)));
L_1803fbab9_2:;
if(rd(s->u,45,1)){return UINT64_C(0x1803fbac1);}
L_1803fbab9_3:;
return UINT64_C(0x1803fbabb);
}
uint64_t b_1803fba94(CPU*s){
/* 1803fba94: movss xmm0, dword ptr [r12 + rbp] */
L_1803fba94_0:;
L_1803fba94_1:;
wr(s->u,0,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803fba94_2:;
wr(s->u,8,8,(rd(s->r,160,8)+rd(s->u,0,8)));
L_1803fba94_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fba94_4:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803fba94_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fba94_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fba94_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fba94_8:;
/* 1803fba9a: mov ecx, dword ptr [r12 + rbp] */
L_1803fba9a_0:;
L_1803fba9a_1:;
wr(s->u,0,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803fba9a_2:;
wr(s->u,8,8,(rd(s->r,160,8)+rd(s->u,0,8)));
L_1803fba9a_3:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fba9a_4:;
wr(s->r,8,4,rd(s->u,28,4));
L_1803fba9a_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fba9a_6:;
/* 1803fba9e: mov dword ptr [rsp + 0x21c], ecx */
L_1803fba9e_0:;
L_1803fba9e_1:;
wr(s->u,16,8,(((U)UINT64_C(0x21c))+rd(s->r,32,8)));
L_1803fba9e_2:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803fba9e_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fba9e_4:;
/* 1803fbaa5: mov edx, ecx */
L_1803fbaa5_0:;
L_1803fbaa5_1:;
wr(s->r,16,4,rd(s->r,8,4));
L_1803fbaa5_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fbaa5_3:;
/* 1803fbaa7: and edx, 0x80000000 */
L_1803fbaa7_0:;
L_1803fbaa7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbaa7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbaa7_3:;
wr(s->r,16,4,(rd(s->r,16,4)&((U)UINT64_C(0x80000000))));
L_1803fbaa7_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fbaa7_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbaa7_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fbaa7_7:;
wr(s->u,33,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fbaa7_8:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803fbaa7_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803fbaa7_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803fbaa7_11:;
/* 1803fbaad: mov eax, ecx */
L_1803fbaad_0:;
L_1803fbaad_1:;
wr(s->r,0,4,rd(s->r,8,4));
L_1803fbaad_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fbaad_3:;
/* 1803fbaaf: and eax, 0x7fffffff */
L_1803fbaaf_0:;
L_1803fbaaf_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbaaf_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbaaf_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x7fffffff))));
L_1803fbaaf_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fbaaf_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbaaf_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fbaaf_7:;
wr(s->u,33,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fbaaf_8:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803fbaaf_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803fbaaf_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803fbaaf_11:;
/* 1803fbab4: cmp eax, 0x800000 */
L_1803fbab4_0:;
L_1803fbab4_1:;
wr(s->r,512,1,(rd(s->r,0,4)<((U)UINT64_C(0x800000))));
L_1803fbab4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x800000)),4,1));
L_1803fbab4_3:;
wr(s->u,39,4,(rd(s->r,0,4)-((U)UINT64_C(0x800000))));
L_1803fbab4_4:;
wr(s->r,519,1,(sx(rd(s->u,39,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbab4_5:;
wr(s->r,518,1,(rd(s->u,39,4)==((U)UINT64_C(0x0))));
L_1803fbab4_6:;
wr(s->u,33,4,(rd(s->u,39,4)&((U)UINT64_C(0xff))));
L_1803fbab4_7:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803fbab4_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803fbab4_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803fbab4_10:;
/* 1803fbab9: jae 0x1803fbac1 */
L_1803fbab9_0:;
L_1803fbab9_1:;
wr(s->u,32,1,(!rd(s->r,512,1)));
L_1803fbab9_2:;
if(rd(s->u,32,1)){return UINT64_C(0x1803fbac1);}
L_1803fbab9_3:;
return UINT64_C(0x1803fbabb);
}
uint64_t b_1803fbabb(CPU*s){
/* 1803fbabb: mov dword ptr [r12 + rbp], ebx */
L_1803fbabb_0:;
L_1803fbabb_1:;
wr(s->u,0,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803fbabb_2:;
wr(s->u,8,8,(rd(s->r,160,8)+rd(s->u,0,8)));
L_1803fbabb_3:;
wr(s->u,16,4,rd(s->r,24,4));
L_1803fbabb_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fbabb_5:;
/* 1803fbabf: jmp 0x1803fbb3a */
L_1803fbabf_0:;
L_1803fbabf_1:;
return UINT64_C(0x1803fbb3a);
L_1803fbabf_2:;
return UINT64_C(0x1803fbac1);
}
uint64_t b_1803fbac1(CPU*s){
/* 1803fbac1: test edx, edx */
L_1803fbac1_0:;
L_1803fbac1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbac1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbac1_3:;
wr(s->u,6,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803fbac1_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbac1_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803fbac1_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803fbac1_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fbac1_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fbac1_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fbac1_10:;
/* 1803fbac3: je 0x1803fbaf1 */
L_1803fbac3_0:;
L_1803fbac3_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fbaf1);}
L_1803fbac3_2:;
return UINT64_C(0x1803fbac5);
}
uint64_t b_1803fbac5(CPU*s){
/* 1803fbac5: cmp ecx, 0xc2aeac50 */
L_1803fbac5_0:;
L_1803fbac5_1:;
wr(s->u,6,4,rd(s->r,8,4));
L_1803fbac5_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0xc2aeac50))));
L_1803fbac5_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0xc2aeac50)),4,1));
L_1803fbac5_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0xc2aeac50))));
L_1803fbac5_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbac5_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fbac5_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fbac5_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fbac5_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fbac5_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fbac5_11:;
/* 1803fbacb: jb 0x1803fbb28 */
L_1803fbacb_0:;
L_1803fbacb_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fbb28);}
L_1803fbacb_2:;
return UINT64_C(0x1803fbacd);
}
uint64_t b_1803fbacd(CPU*s){
/* 1803fbacd: and ecx, 0x7fc00000 */
L_1803fbacd_0:;
L_1803fbacd_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbacd_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbacd_3:;
wr(s->r,8,4,(rd(s->r,8,4)&((U)UINT64_C(0x7fc00000))));
L_1803fbacd_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fbacd_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbacd_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803fbacd_7:;
wr(s->u,1,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803fbacd_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fbacd_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fbacd_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fbacd_11:;
/* 1803fbad3: cmp ecx, 0x7fc00000 */
L_1803fbad3_0:;
L_1803fbad3_1:;
wr(s->u,7,4,rd(s->r,8,4));
L_1803fbad3_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x7fc00000))));
L_1803fbad3_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803fbad3_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x7fc00000))));
L_1803fbad3_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbad3_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fbad3_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fbad3_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fbad3_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fbad3_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fbad3_11:;
/* 1803fbad9: jne 0x1803fbae7 */
L_1803fbad9_0:;
L_1803fbad9_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fbad9_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fbae7);}
L_1803fbad9_3:;
return UINT64_C(0x1803fbadb);
}
uint64_t b_1803fbadb(CPU*s){
/* 1803fbadb: mov eax, dword ptr [rip + 0x41317f] */
L_1803fbadb_0:;
L_1803fbadb_1:;
wr(s->r,0,4,mr(UINT64_C(0x18080ec60),4));
L_1803fbadb_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fbadb_3:;
/* 1803fbae1: mov dword ptr [r12 + rbp], eax */
L_1803fbae1_0:;
L_1803fbae1_1:;
wr(s->u,0,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803fbae1_2:;
wr(s->u,8,8,(rd(s->r,160,8)+rd(s->u,0,8)));
L_1803fbae1_3:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803fbae1_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fbae1_5:;
/* 1803fbae5: jmp 0x1803fbb3a */
L_1803fbae5_0:;
L_1803fbae5_1:;
return UINT64_C(0x1803fbb3a);
L_1803fbae5_2:;
return UINT64_C(0x1803fbae7);
}
uint64_t b_1803fbae7(CPU*s){
/* 1803fbae7: mov eax, dword ptr [rsp + 0x20] */
L_1803fbae7_0:;
L_1803fbae7_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fbae7_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fbae7_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803fbae7_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fbae7_5:;
/* 1803fbaeb: mov dword ptr [r12 + rbp], eax */
L_1803fbaeb_0:;
L_1803fbaeb_1:;
wr(s->u,0,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803fbaeb_2:;
wr(s->u,8,8,(rd(s->r,160,8)+rd(s->u,0,8)));
L_1803fbaeb_3:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803fbaeb_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803fbaeb_5:;
/* 1803fbaef: jmp 0x1803fbb3a */
L_1803fbaef_0:;
L_1803fbaef_1:;
return UINT64_C(0x1803fbb3a);
L_1803fbaef_2:;
return UINT64_C(0x1803fbaf1);
}
uint64_t b_1803fbaf1(CPU*s){
/* 1803fbaf1: cmp ecx, 0x42b17218 */
L_1803fbaf1_0:;
L_1803fbaf1_1:;
wr(s->u,6,4,rd(s->r,8,4));
L_1803fbaf1_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x42b17218))));
L_1803fbaf1_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x42b17218)),4,1));
L_1803fbaf1_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x42b17218))));
L_1803fbaf1_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbaf1_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fbaf1_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fbaf1_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fbaf1_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fbaf1_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fbaf1_11:;
/* 1803fbaf7: jb 0x1803fbb28 */
L_1803fbaf7_0:;
L_1803fbaf7_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fbb28);}
L_1803fbaf7_2:;
return UINT64_C(0x1803fbaf9);
}
uint64_t b_1803fbaf9(CPU*s){
/* 1803fbaf9: and ecx, 0x7fc00000 */
L_1803fbaf9_0:;
L_1803fbaf9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbaf9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbaf9_3:;
wr(s->r,8,4,(rd(s->r,8,4)&((U)UINT64_C(0x7fc00000))));
L_1803fbaf9_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fbaf9_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbaf9_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803fbaf9_7:;
wr(s->u,1,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803fbaf9_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fbaf9_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fbaf9_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fbaf9_11:;
/* 1803fbaff: cmp ecx, 0x7fc00000 */
L_1803fbaff_0:;
L_1803fbaff_1:;
wr(s->u,7,4,rd(s->r,8,4));
L_1803fbaff_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x7fc00000))));
L_1803fbaff_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803fbaff_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x7fc00000))));
L_1803fbaff_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbaff_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fbaff_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fbaff_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fbaff_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fbaff_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fbaff_11:;
/* 1803fbb05: jne 0x1803fbb1b */
L_1803fbb05_0:;
L_1803fbb05_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fbb05_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fbb1b);}
L_1803fbb05_3:;
return UINT64_C(0x1803fbb07);
}
uint64_t b_1803fbb07(CPU*s){
/* 1803fbb07: pxor xmm0, xmm0 */
L_1803fbb07_0:;
L_1803fbb07_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803fbb07_2:;
/* 1803fbb0b: subss xmm0, dword ptr [rip + 0x41314d] */
L_1803fbb0b_0:;
L_1803fbb0b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(mr(UINT64_C(0x18080ec60),4),4),4));
L_1803fbb0b_2:;
/* 1803fbb13: movss dword ptr [r12 + rbp], xmm0 */
L_1803fbb13_0:;
L_1803fbb13_1:;
wr(s->u,0,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803fbb13_2:;
wr(s->u,8,8,(rd(s->r,160,8)+rd(s->u,0,8)));
L_1803fbb13_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fbb13_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fbb13_5:;
/* 1803fbb19: jmp 0x1803fbb3a */
L_1803fbb19_0:;
L_1803fbb19_1:;
return UINT64_C(0x1803fbb3a);
L_1803fbb19_2:;
return UINT64_C(0x1803fbb1b);
}
uint64_t b_1803fbb1b(CPU*s){
/* 1803fbb1b: mov eax, dword ptr [rsp + 0x208] */
L_1803fbb1b_0:;
L_1803fbb1b_1:;
wr(s->u,16,8,(((U)UINT64_C(0x208))+rd(s->r,32,8)));
L_1803fbb1b_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fbb1b_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803fbb1b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fbb1b_5:;
/* 1803fbb22: mov dword ptr [r12 + rbp], eax */
L_1803fbb22_0:;
L_1803fbb22_1:;
wr(s->u,0,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803fbb22_2:;
wr(s->u,8,8,(rd(s->r,160,8)+rd(s->u,0,8)));
L_1803fbb22_3:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803fbb22_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803fbb22_5:;
/* 1803fbb26: jmp 0x1803fbb3a */
L_1803fbb26_0:;
L_1803fbb26_1:;
return UINT64_C(0x1803fbb3a);
L_1803fbb26_2:;
return UINT64_C(0x1803fbb28);
}
uint64_t b_1803fbb28(CPU*s){
/* 1803fbb28: cvtps2pd xmm0, xmm0 */
L_1803fbb28_0:;
L_1803fbb28_1:;
wr(s->u,0,8,rd(s->r,4608,8));
L_1803fbb28_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,0,4),4),8));
L_1803fbb28_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,4,4),4),8));
L_1803fbb28_4:;
/* 1803fbb2b: call 0x180609aae */
L_1803fbb2b_0:;
L_1803fbb2b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fbb2b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fbb30)));
L_1803fbb2b_3:;
return (uint64_t)UINT64_C(0x180609aae);
L_1803fbb2b_4:;
return UINT64_C(0x1803fbb30);
}
uint64_t b_1803fbb30(CPU*s){
/* 1803fbb30: cvtsd2ss xmm0, xmm0 */
L_1803fbb30_0:;
L_1803fbb30_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,8),8),4));
L_1803fbb30_2:;
/* 1803fbb34: movss dword ptr [r12 + rbp], xmm0 */
L_1803fbb34_0:;
L_1803fbb34_1:;
wr(s->u,0,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803fbb34_2:;
wr(s->u,8,8,(rd(s->r,160,8)+rd(s->u,0,8)));
L_1803fbb34_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fbb34_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fbb34_5:;
/* 1803fbb3a: add r12, 4 */
L_1803fbb3a_0:;
L_1803fbb3a_1:;
wr(s->r,512,1,(((rd(s->r,160,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,160,8)));
L_1803fbb3a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),((U)UINT64_C(0x4)),8,0));
L_1803fbb3a_3:;
wr(s->r,160,8,(rd(s->r,160,8)+((U)UINT64_C(0x4))));
L_1803fbb3a_4:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbb3a_5:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803fbb3a_6:;
wr(s->u,21,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803fbb3a_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fbb3a_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fbb3a_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fbb3a_10:;
/* 1803fbb3e: cmp r12, rsi */
L_1803fbb3e_0:;
L_1803fbb3e_1:;
wr(s->u,31,8,rd(s->r,48,8));
L_1803fbb3e_2:;
wr(s->r,512,1,(rd(s->r,160,8)<rd(s->u,31,8)));
L_1803fbb3e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),rd(s->u,31,8),8,1));
L_1803fbb3e_4:;
wr(s->u,39,8,(rd(s->r,160,8)-rd(s->u,31,8)));
L_1803fbb3e_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbb3e_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fbb3e_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fbb3e_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fbb3e_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fbb3e_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fbb3e_11:;
/* 1803fbb41: jl 0x1803fba94 */
L_1803fbb41_0:;
L_1803fbb41_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbb41_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fba94);}
L_1803fbb41_3:;
return UINT64_C(0x1803fbb47);
}
uint64_t b_1803fbb3a(CPU*s){
/* 1803fbb3a: add r12, 4 */
L_1803fbb3a_0:;
L_1803fbb3a_1:;
wr(s->r,512,1,(((rd(s->r,160,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,160,8)));
L_1803fbb3a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),((U)UINT64_C(0x4)),8,0));
L_1803fbb3a_3:;
wr(s->r,160,8,(rd(s->r,160,8)+((U)UINT64_C(0x4))));
L_1803fbb3a_4:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbb3a_5:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803fbb3a_6:;
wr(s->u,1,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803fbb3a_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fbb3a_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fbb3a_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fbb3a_10:;
/* 1803fbb3e: cmp r12, rsi */
L_1803fbb3e_0:;
L_1803fbb3e_1:;
wr(s->u,11,8,rd(s->r,48,8));
L_1803fbb3e_2:;
wr(s->r,512,1,(rd(s->r,160,8)<rd(s->u,11,8)));
L_1803fbb3e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),rd(s->u,11,8),8,1));
L_1803fbb3e_4:;
wr(s->u,19,8,(rd(s->r,160,8)-rd(s->u,11,8)));
L_1803fbb3e_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbb3e_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fbb3e_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fbb3e_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fbb3e_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fbb3e_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fbb3e_11:;
/* 1803fbb41: jl 0x1803fba94 */
L_1803fbb41_0:;
L_1803fbb41_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbb41_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fba94);}
L_1803fbb41_3:;
return UINT64_C(0x1803fbb47);
}
uint64_t b_1803fbb47(CPU*s){
/* 1803fbb47: movaps xmm7, xmmword ptr [rsp + 0x30] */
L_1803fbb47_0:;
L_1803fbb47_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fbb47_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fbb47_3:;
wr(s->u,42,16,rd(s->u,8,16));
L_1803fbb47_4:;
wr(s->r,5056,4,rd(s->u,42,4));
L_1803fbb47_5:;
wr(s->r,5060,4,rd(s->u,46,4));
L_1803fbb47_6:;
wr(s->r,5064,4,rd(s->u,50,4));
L_1803fbb47_7:;
wr(s->r,5068,4,rd(s->u,54,4));
L_1803fbb47_8:;
/* 1803fbb4c: xor eax, eax */
L_1803fbb4c_0:;
L_1803fbb4c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbb4c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbb4c_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fbb4c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fbb4c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbb4c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fbb4c_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fbb4c_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803fbb4c_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803fbb4c_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803fbb4c_11:;
/* 1803fbb4e: add rsp, 0x238 */
L_1803fbb4e_0:;
L_1803fbb4e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x238)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fbb4e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x238)),8,0));
L_1803fbb4e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x238))));
L_1803fbb4e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbb4e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fbb4e_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fbb4e_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803fbb4e_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803fbb4e_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803fbb4e_10:;
/* 1803fbb55: pop rbx */
L_1803fbb55_0:;
L_1803fbb55_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803fbb55_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbb55_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbb55_4:;
wr(s->r,24,8,rd(s->u,34,8));
L_1803fbb55_5:;
/* 1803fbb56: pop rbp */
L_1803fbb56_0:;
L_1803fbb56_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803fbb56_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbb56_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbb56_4:;
wr(s->r,40,8,rd(s->u,34,8));
L_1803fbb56_5:;
/* 1803fbb57: pop rsi */
L_1803fbb57_0:;
L_1803fbb57_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803fbb57_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbb57_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbb57_4:;
wr(s->r,48,8,rd(s->u,34,8));
L_1803fbb57_5:;
/* 1803fbb58: pop rdi */
L_1803fbb58_0:;
L_1803fbb58_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803fbb58_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbb58_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbb58_4:;
wr(s->r,56,8,rd(s->u,34,8));
L_1803fbb58_5:;
/* 1803fbb59: pop r12 */
L_1803fbb59_0:;
L_1803fbb59_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803fbb59_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbb59_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbb59_4:;
wr(s->r,160,8,rd(s->u,34,8));
L_1803fbb59_5:;
/* 1803fbb5b: pop r13 */
L_1803fbb5b_0:;
L_1803fbb5b_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803fbb5b_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbb5b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbb5b_4:;
wr(s->r,168,8,rd(s->u,34,8));
L_1803fbb5b_5:;
/* 1803fbb5d: pop r14 */
L_1803fbb5d_0:;
L_1803fbb5d_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803fbb5d_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbb5d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbb5d_4:;
wr(s->r,176,8,rd(s->u,34,8));
L_1803fbb5d_5:;
/* 1803fbb5f: pop r15 */
L_1803fbb5f_0:;
L_1803fbb5f_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803fbb5f_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbb5f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbb5f_4:;
wr(s->r,184,8,rd(s->u,34,8));
L_1803fbb5f_5:;
/* 1803fbb61: ret  */
L_1803fbb61_0:;
L_1803fbb61_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbb61_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbb61_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fbb61_4:;
return UINT64_C(0x1803fbb62);
}
uint64_t b_1803fbb62(CPU*s){
/* 1803fbb62: mov eax, 0xfffffffa */
L_1803fbb62_0:;
L_1803fbb62_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fbb62_2:;
/* 1803fbb67: add rsp, 0x238 */
L_1803fbb67_0:;
L_1803fbb67_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x238)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fbb67_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x238)),8,0));
L_1803fbb67_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x238))));
L_1803fbb67_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbb67_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fbb67_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fbb67_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fbb67_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbb67_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbb67_10:;
/* 1803fbb6e: pop rbx */
L_1803fbb6e_0:;
L_1803fbb6e_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fbb6e_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbb6e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbb6e_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803fbb6e_5:;
/* 1803fbb6f: pop rbp */
L_1803fbb6f_0:;
L_1803fbb6f_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fbb6f_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbb6f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbb6f_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fbb6f_5:;
/* 1803fbb70: pop rsi */
L_1803fbb70_0:;
L_1803fbb70_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fbb70_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbb70_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbb70_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fbb70_5:;
/* 1803fbb71: pop rdi */
L_1803fbb71_0:;
L_1803fbb71_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fbb71_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbb71_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbb71_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fbb71_5:;
/* 1803fbb72: pop r12 */
L_1803fbb72_0:;
L_1803fbb72_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fbb72_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbb72_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbb72_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fbb72_5:;
/* 1803fbb74: pop r13 */
L_1803fbb74_0:;
L_1803fbb74_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fbb74_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbb74_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbb74_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fbb74_5:;
/* 1803fbb76: pop r14 */
L_1803fbb76_0:;
L_1803fbb76_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fbb76_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbb76_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbb76_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fbb76_5:;
/* 1803fbb78: pop r15 */
L_1803fbb78_0:;
L_1803fbb78_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fbb78_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbb78_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbb78_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fbb78_5:;
/* 1803fbb7a: ret  */
L_1803fbb7a_0:;
L_1803fbb7a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbb7a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbb7a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fbb7a_4:;
return UINT64_C(0x1803fbb7b);
}
uint64_t b_1803fbb7b(CPU*s){
/* 1803fbb7b: movaps xmm6, xmmword ptr [rsp + 0x40] */
L_1803fbb7b_0:;
L_1803fbb7b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803fbb7b_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fbb7b_3:;
wr(s->u,51,16,rd(s->u,16,16));
L_1803fbb7b_4:;
wr(s->r,4992,4,rd(s->u,51,4));
L_1803fbb7b_5:;
wr(s->r,4996,4,rd(s->u,55,4));
L_1803fbb7b_6:;
wr(s->r,5000,4,rd(s->u,59,4));
L_1803fbb7b_7:;
wr(s->r,5004,4,rd(s->u,63,4));
L_1803fbb7b_8:;
/* 1803fbb80: movaps xmm8, xmmword ptr [rsp + 0x50] */
L_1803fbb80_0:;
L_1803fbb80_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803fbb80_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fbb80_3:;
wr(s->u,51,16,rd(s->u,16,16));
L_1803fbb80_4:;
wr(s->r,5120,4,rd(s->u,51,4));
L_1803fbb80_5:;
wr(s->r,5124,4,rd(s->u,55,4));
L_1803fbb80_6:;
wr(s->r,5128,4,rd(s->u,59,4));
L_1803fbb80_7:;
wr(s->r,5132,4,rd(s->u,63,4));
L_1803fbb80_8:;
/* 1803fbb86: movaps xmm9, xmmword ptr [rsp + 0x60] */
L_1803fbb86_0:;
L_1803fbb86_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803fbb86_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fbb86_3:;
wr(s->u,51,16,rd(s->u,16,16));
L_1803fbb86_4:;
wr(s->r,5184,4,rd(s->u,51,4));
L_1803fbb86_5:;
wr(s->r,5188,4,rd(s->u,55,4));
L_1803fbb86_6:;
wr(s->r,5192,4,rd(s->u,59,4));
L_1803fbb86_7:;
wr(s->r,5196,4,rd(s->u,63,4));
L_1803fbb86_8:;
/* 1803fbb8c: movaps xmm10, xmmword ptr [rsp + 0x70] */
L_1803fbb8c_0:;
L_1803fbb8c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803fbb8c_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fbb8c_3:;
wr(s->u,51,16,rd(s->u,16,16));
L_1803fbb8c_4:;
wr(s->r,5248,4,rd(s->u,51,4));
L_1803fbb8c_5:;
wr(s->r,5252,4,rd(s->u,55,4));
L_1803fbb8c_6:;
wr(s->r,5256,4,rd(s->u,59,4));
L_1803fbb8c_7:;
wr(s->r,5260,4,rd(s->u,63,4));
L_1803fbb8c_8:;
/* 1803fbb92: movaps xmm11, xmmword ptr [rsp + 0x80] */
L_1803fbb92_0:;
L_1803fbb92_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803fbb92_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803fbb92_3:;
wr(s->u,51,16,rd(s->u,16,16));
L_1803fbb92_4:;
wr(s->r,5312,4,rd(s->u,51,4));
L_1803fbb92_5:;
wr(s->r,5316,4,rd(s->u,55,4));
L_1803fbb92_6:;
wr(s->r,5320,4,rd(s->u,59,4));
L_1803fbb92_7:;
wr(s->r,5324,4,rd(s->u,63,4));
L_1803fbb92_8:;
/* 1803fbb9b: movaps xmm12, xmmword ptr [rsp + 0x90] */
L_1803fbb9b_0:;
L_1803fbb9b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803fbb9b_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803fbb9b_3:;
wr(s->u,51,16,rd(s->u,16,16));
L_1803fbb9b_4:;
wr(s->r,5376,4,rd(s->u,51,4));
L_1803fbb9b_5:;
wr(s->r,5380,4,rd(s->u,55,4));
L_1803fbb9b_6:;
wr(s->r,5384,4,rd(s->u,59,4));
L_1803fbb9b_7:;
wr(s->r,5388,4,rd(s->u,63,4));
L_1803fbb9b_8:;
/* 1803fbba4: movaps xmm13, xmmword ptr [rsp + 0xa0] */
L_1803fbba4_0:;
L_1803fbba4_1:;
wr(s->u,8,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_1803fbba4_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803fbba4_3:;
wr(s->u,51,16,rd(s->u,16,16));
L_1803fbba4_4:;
wr(s->r,5440,4,rd(s->u,51,4));
L_1803fbba4_5:;
wr(s->r,5444,4,rd(s->u,55,4));
L_1803fbba4_6:;
wr(s->r,5448,4,rd(s->u,59,4));
L_1803fbba4_7:;
wr(s->r,5452,4,rd(s->u,63,4));
L_1803fbba4_8:;
/* 1803fbbad: movaps xmm14, xmmword ptr [rsp + 0xb0] */
L_1803fbbad_0:;
L_1803fbbad_1:;
wr(s->u,8,8,(((U)UINT64_C(0xb0))+rd(s->r,32,8)));
L_1803fbbad_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803fbbad_3:;
wr(s->u,51,16,rd(s->u,16,16));
L_1803fbbad_4:;
wr(s->r,5504,4,rd(s->u,51,4));
L_1803fbbad_5:;
wr(s->r,5508,4,rd(s->u,55,4));
L_1803fbbad_6:;
wr(s->r,5512,4,rd(s->u,59,4));
L_1803fbbad_7:;
wr(s->r,5516,4,rd(s->u,63,4));
L_1803fbbad_8:;
/* 1803fbbb6: movaps xmm15, xmmword ptr [rsp + 0xc0] */
L_1803fbbb6_0:;
L_1803fbbb6_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc0))+rd(s->r,32,8)));
L_1803fbbb6_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803fbbb6_3:;
wr(s->u,51,16,rd(s->u,16,16));
L_1803fbbb6_4:;
wr(s->r,5568,4,rd(s->u,51,4));
L_1803fbbb6_5:;
wr(s->r,5572,4,rd(s->u,55,4));
L_1803fbbb6_6:;
wr(s->r,5576,4,rd(s->u,59,4));
L_1803fbbb6_7:;
wr(s->r,5580,4,rd(s->u,63,4));
L_1803fbbb6_8:;
/* 1803fbbbf: mov rbp, qword ptr [rsp + 0x1e8] */
L_1803fbbbf_0:;
L_1803fbbbf_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1e8))+rd(s->r,32,8)));
L_1803fbbbf_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803fbbbf_3:;
wr(s->r,40,8,rd(s->u,32,8));
L_1803fbbbf_4:;
/* 1803fbbc7: test ebx, ebx */
L_1803fbbc7_0:;
L_1803fbbc7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbbc7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbbc7_3:;
wr(s->u,47,4,(rd(s->r,24,4)&rd(s->r,24,4)));
L_1803fbbc7_4:;
wr(s->r,519,1,(sx(rd(s->u,47,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbbc7_5:;
wr(s->r,518,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803fbbc7_6:;
wr(s->u,41,4,(rd(s->u,47,4)&((U)UINT64_C(0xff))));
L_1803fbbc7_7:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803fbbc7_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803fbbc7_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803fbbc7_10:;
/* 1803fbbc9: jl 0x1803fbc7c */
L_1803fbbc9_0:;
L_1803fbbc9_1:;
wr(s->u,40,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbbc9_2:;
if(rd(s->u,40,1)){return UINT64_C(0x1803fbc7c);}
L_1803fbbc9_3:;
return UINT64_C(0x1803fbbcf);
}
uint64_t b_1803fbbc7(CPU*s){
/* 1803fbbc7: test ebx, ebx */
L_1803fbbc7_0:;
L_1803fbbc7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbbc7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbbc7_3:;
wr(s->u,7,4,(rd(s->r,24,4)&rd(s->r,24,4)));
L_1803fbbc7_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbbc7_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803fbbc7_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803fbbc7_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fbbc7_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fbbc7_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fbbc7_10:;
/* 1803fbbc9: jl 0x1803fbc7c */
L_1803fbbc9_0:;
L_1803fbbc9_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbbc9_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fbc7c);}
L_1803fbbc9_3:;
return UINT64_C(0x1803fbbcf);
}
uint64_t b_1803fbbcf(CPU*s){
/* 1803fbbcf: movss xmm0, dword ptr [rsp + 0x21c] */
L_1803fbbcf_0:;
L_1803fbbcf_1:;
wr(s->u,0,8,(((U)UINT64_C(0x21c))+rd(s->r,32,8)));
L_1803fbbcf_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fbbcf_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803fbbcf_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fbbcf_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fbbcf_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fbbcf_7:;
/* 1803fbbd8: cvtps2pd xmm0, xmm0 */
L_1803fbbd8_0:;
L_1803fbbd8_1:;
wr(s->u,17,8,rd(s->r,4608,8));
L_1803fbbd8_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,17,4),4),8));
L_1803fbbd8_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,21,4),4),8));
L_1803fbbd8_4:;
/* 1803fbbdb: movsd xmm7, qword ptr [rip + 0x41289d] */
L_1803fbbdb_0:;
L_1803fbbdb_1:;
wr(s->r,5056,8,mr(UINT64_C(0x18080e480),8));
L_1803fbbdb_2:;
wr(s->r,5064,8,((U)UINT64_C(0x0)));
L_1803fbbdb_3:;
/* 1803fbbe3: comisd xmm0, xmm7 */
L_1803fbbe3_0:;
L_1803fbbe3_1:;
wr(s->u,13,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803fbbe3_2:;
wr(s->u,14,1,isnan(fv(rd(s->r,5056,8),8)));
L_1803fbbe3_3:;
wr(s->r,514,1,((rd(s->u,13,1)!=0)||(rd(s->u,14,1)!=0)));
L_1803fbbe3_4:;
wr(s->u,15,1,(fv(rd(s->r,4608,8),8)==fv(rd(s->r,5056,8),8)));
L_1803fbbe3_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,15,1)));
L_1803fbbe3_6:;
wr(s->u,16,1,(fv(rd(s->r,4608,8),8)<fv(rd(s->r,5056,8),8)));
L_1803fbbe3_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,16,1)));
L_1803fbbe3_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbbe3_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fbbe3_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fbbe3_11:;
/* 1803fbbe7: jbe 0x1803fbbf9 */
L_1803fbbe7_0:;
L_1803fbbe7_1:;
wr(s->u,12,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fbbe7_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803fbbf9);}
L_1803fbbe7_3:;
return UINT64_C(0x1803fbbe9);
}
uint64_t b_1803fbbe9(CPU*s){
/* 1803fbbe9: mov eax, dword ptr [rsp + 0x208] */
L_1803fbbe9_0:;
L_1803fbbe9_1:;
wr(s->u,16,8,(((U)UINT64_C(0x208))+rd(s->r,32,8)));
L_1803fbbe9_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fbbe9_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803fbbe9_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fbbe9_5:;
/* 1803fbbf0: movsxd rdx, ebx */
L_1803fbbf0_0:;
L_1803fbbf0_1:;
wr(s->r,16,8,(U)sx(rd(s->r,24,4),4));
L_1803fbbf0_2:;
/* 1803fbbf3: mov dword ptr [rbp + rdx*4], eax */
L_1803fbbf3_0:;
L_1803fbbf3_1:;
wr(s->u,0,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803fbbf3_2:;
wr(s->u,8,8,(rd(s->r,40,8)+rd(s->u,0,8)));
L_1803fbbf3_3:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803fbbf3_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803fbbf3_5:;
/* 1803fbbf7: jmp 0x1803fbc0b */
L_1803fbbf7_0:;
L_1803fbbf7_1:;
return UINT64_C(0x1803fbc0b);
L_1803fbbf7_2:;
return UINT64_C(0x1803fbbf9);
}
uint64_t b_1803fbbf9(CPU*s){
/* 1803fbbf9: call 0x180609aae */
L_1803fbbf9_0:;
L_1803fbbf9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fbbf9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fbbfe)));
L_1803fbbf9_3:;
return (uint64_t)UINT64_C(0x180609aae);
L_1803fbbf9_4:;
return UINT64_C(0x1803fbbfe);
}
uint64_t b_1803fbbfe(CPU*s){
/* 1803fbbfe: cvtsd2ss xmm0, xmm0 */
L_1803fbbfe_0:;
L_1803fbbfe_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,8),8),4));
L_1803fbbfe_2:;
/* 1803fbc02: movsxd rax, ebx */
L_1803fbc02_0:;
L_1803fbc02_1:;
wr(s->r,0,8,(U)sx(rd(s->r,24,4),4));
L_1803fbc02_2:;
/* 1803fbc05: movss dword ptr [rbp + rax*4], xmm0 */
L_1803fbc05_0:;
L_1803fbc05_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fbc05_2:;
wr(s->u,8,8,(rd(s->r,40,8)+rd(s->u,0,8)));
L_1803fbc05_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fbc05_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fbc05_5:;
/* 1803fbc0b: test esi, esi */
L_1803fbc0b_0:;
L_1803fbc0b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbc0b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbc0b_3:;
wr(s->u,27,4,(rd(s->r,48,4)&rd(s->r,48,4)));
L_1803fbc0b_4:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbc0b_5:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803fbc0b_6:;
wr(s->u,21,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803fbc0b_7:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803fbc0b_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fbc0b_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fbc0b_10:;
/* 1803fbc0d: jl 0x1803fbc7c */
L_1803fbc0d_0:;
L_1803fbc0d_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbc0d_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fbc7c);}
L_1803fbc0d_3:;
return UINT64_C(0x1803fbc0f);
}
uint64_t b_1803fbc0b(CPU*s){
/* 1803fbc0b: test esi, esi */
L_1803fbc0b_0:;
L_1803fbc0b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbc0b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbc0b_3:;
wr(s->u,7,4,(rd(s->r,48,4)&rd(s->r,48,4)));
L_1803fbc0b_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbc0b_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803fbc0b_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803fbc0b_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fbc0b_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fbc0b_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fbc0b_10:;
/* 1803fbc0d: jl 0x1803fbc7c */
L_1803fbc0d_0:;
L_1803fbc0d_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbc0d_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fbc7c);}
L_1803fbc0d_3:;
return UINT64_C(0x1803fbc0f);
}
uint64_t b_1803fbc0f(CPU*s){
/* 1803fbc0f: movss xmm0, dword ptr [rsp + 0x220] */
L_1803fbc0f_0:;
L_1803fbc0f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x220))+rd(s->r,32,8)));
L_1803fbc0f_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fbc0f_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803fbc0f_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fbc0f_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fbc0f_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fbc0f_7:;
/* 1803fbc18: cvtps2pd xmm0, xmm0 */
L_1803fbc18_0:;
L_1803fbc18_1:;
wr(s->u,17,8,rd(s->r,4608,8));
L_1803fbc18_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,17,4),4),8));
L_1803fbc18_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,21,4),4),8));
L_1803fbc18_4:;
/* 1803fbc1b: comisd xmm0, xmm7 */
L_1803fbc1b_0:;
L_1803fbc1b_1:;
wr(s->u,13,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803fbc1b_2:;
wr(s->u,14,1,isnan(fv(rd(s->r,5056,8),8)));
L_1803fbc1b_3:;
wr(s->r,514,1,((rd(s->u,13,1)!=0)||(rd(s->u,14,1)!=0)));
L_1803fbc1b_4:;
wr(s->u,15,1,(fv(rd(s->r,4608,8),8)==fv(rd(s->r,5056,8),8)));
L_1803fbc1b_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,15,1)));
L_1803fbc1b_6:;
wr(s->u,16,1,(fv(rd(s->r,4608,8),8)<fv(rd(s->r,5056,8),8)));
L_1803fbc1b_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,16,1)));
L_1803fbc1b_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbc1b_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fbc1b_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fbc1b_11:;
/* 1803fbc1f: jbe 0x1803fbc31 */
L_1803fbc1f_0:;
L_1803fbc1f_1:;
wr(s->u,12,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fbc1f_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803fbc31);}
L_1803fbc1f_3:;
return UINT64_C(0x1803fbc21);
}
uint64_t b_1803fbc21(CPU*s){
/* 1803fbc21: mov eax, dword ptr [rsp + 0x208] */
L_1803fbc21_0:;
L_1803fbc21_1:;
wr(s->u,16,8,(((U)UINT64_C(0x208))+rd(s->r,32,8)));
L_1803fbc21_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fbc21_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803fbc21_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fbc21_5:;
/* 1803fbc28: movsxd rdx, esi */
L_1803fbc28_0:;
L_1803fbc28_1:;
wr(s->r,16,8,(U)sx(rd(s->r,48,4),4));
L_1803fbc28_2:;
/* 1803fbc2b: mov dword ptr [rbp + rdx*4], eax */
L_1803fbc2b_0:;
L_1803fbc2b_1:;
wr(s->u,0,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803fbc2b_2:;
wr(s->u,8,8,(rd(s->r,40,8)+rd(s->u,0,8)));
L_1803fbc2b_3:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803fbc2b_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803fbc2b_5:;
/* 1803fbc2f: jmp 0x1803fbc43 */
L_1803fbc2f_0:;
L_1803fbc2f_1:;
return UINT64_C(0x1803fbc43);
L_1803fbc2f_2:;
return UINT64_C(0x1803fbc31);
}
uint64_t b_1803fbc31(CPU*s){
/* 1803fbc31: call 0x180609aae */
L_1803fbc31_0:;
L_1803fbc31_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fbc31_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fbc36)));
L_1803fbc31_3:;
return (uint64_t)UINT64_C(0x180609aae);
L_1803fbc31_4:;
return UINT64_C(0x1803fbc36);
}
uint64_t b_1803fbc36(CPU*s){
/* 1803fbc36: cvtsd2ss xmm0, xmm0 */
L_1803fbc36_0:;
L_1803fbc36_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,8),8),4));
L_1803fbc36_2:;
/* 1803fbc3a: movsxd rax, esi */
L_1803fbc3a_0:;
L_1803fbc3a_1:;
wr(s->r,0,8,(U)sx(rd(s->r,48,4),4));
L_1803fbc3a_2:;
/* 1803fbc3d: movss dword ptr [rbp + rax*4], xmm0 */
L_1803fbc3d_0:;
L_1803fbc3d_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fbc3d_2:;
wr(s->u,8,8,(rd(s->r,40,8)+rd(s->u,0,8)));
L_1803fbc3d_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fbc3d_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fbc3d_5:;
/* 1803fbc43: test r12d, r12d */
L_1803fbc43_0:;
L_1803fbc43_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbc43_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbc43_3:;
wr(s->u,27,4,(rd(s->r,160,4)&rd(s->r,160,4)));
L_1803fbc43_4:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbc43_5:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803fbc43_6:;
wr(s->u,21,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803fbc43_7:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803fbc43_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fbc43_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fbc43_10:;
/* 1803fbc46: jl 0x1803fbc7c */
L_1803fbc46_0:;
L_1803fbc46_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbc46_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fbc7c);}
L_1803fbc46_3:;
return UINT64_C(0x1803fbc48);
}
uint64_t b_1803fbc43(CPU*s){
/* 1803fbc43: test r12d, r12d */
L_1803fbc43_0:;
L_1803fbc43_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbc43_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbc43_3:;
wr(s->u,7,4,(rd(s->r,160,4)&rd(s->r,160,4)));
L_1803fbc43_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbc43_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803fbc43_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803fbc43_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fbc43_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fbc43_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fbc43_10:;
/* 1803fbc46: jl 0x1803fbc7c */
L_1803fbc46_0:;
L_1803fbc46_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbc46_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fbc7c);}
L_1803fbc46_3:;
return UINT64_C(0x1803fbc48);
}
uint64_t b_1803fbc48(CPU*s){
/* 1803fbc48: movss xmm0, dword ptr [rsp + 0x224] */
L_1803fbc48_0:;
L_1803fbc48_1:;
wr(s->u,0,8,(((U)UINT64_C(0x224))+rd(s->r,32,8)));
L_1803fbc48_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fbc48_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803fbc48_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fbc48_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fbc48_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fbc48_7:;
/* 1803fbc51: cvtps2pd xmm0, xmm0 */
L_1803fbc51_0:;
L_1803fbc51_1:;
wr(s->u,17,8,rd(s->r,4608,8));
L_1803fbc51_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,17,4),4),8));
L_1803fbc51_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,21,4),4),8));
L_1803fbc51_4:;
/* 1803fbc54: comisd xmm0, xmm7 */
L_1803fbc54_0:;
L_1803fbc54_1:;
wr(s->u,13,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803fbc54_2:;
wr(s->u,14,1,isnan(fv(rd(s->r,5056,8),8)));
L_1803fbc54_3:;
wr(s->r,514,1,((rd(s->u,13,1)!=0)||(rd(s->u,14,1)!=0)));
L_1803fbc54_4:;
wr(s->u,15,1,(fv(rd(s->r,4608,8),8)==fv(rd(s->r,5056,8),8)));
L_1803fbc54_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,15,1)));
L_1803fbc54_6:;
wr(s->u,16,1,(fv(rd(s->r,4608,8),8)<fv(rd(s->r,5056,8),8)));
L_1803fbc54_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,16,1)));
L_1803fbc54_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbc54_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fbc54_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fbc54_11:;
/* 1803fbc58: jbe 0x1803fbc6a */
L_1803fbc58_0:;
L_1803fbc58_1:;
wr(s->u,12,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fbc58_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803fbc6a);}
L_1803fbc58_3:;
return UINT64_C(0x1803fbc5a);
}
uint64_t b_1803fbc5a(CPU*s){
/* 1803fbc5a: mov eax, dword ptr [rsp + 0x208] */
L_1803fbc5a_0:;
L_1803fbc5a_1:;
wr(s->u,16,8,(((U)UINT64_C(0x208))+rd(s->r,32,8)));
L_1803fbc5a_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fbc5a_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803fbc5a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fbc5a_5:;
/* 1803fbc61: movsxd rdx, r12d */
L_1803fbc61_0:;
L_1803fbc61_1:;
wr(s->r,16,8,(U)sx(rd(s->r,160,4),4));
L_1803fbc61_2:;
/* 1803fbc64: mov dword ptr [rbp + rdx*4], eax */
L_1803fbc64_0:;
L_1803fbc64_1:;
wr(s->u,0,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803fbc64_2:;
wr(s->u,8,8,(rd(s->r,40,8)+rd(s->u,0,8)));
L_1803fbc64_3:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803fbc64_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803fbc64_5:;
/* 1803fbc68: jmp 0x1803fbc7c */
L_1803fbc68_0:;
L_1803fbc68_1:;
return UINT64_C(0x1803fbc7c);
L_1803fbc68_2:;
return UINT64_C(0x1803fbc6a);
}
uint64_t b_1803fbc6a(CPU*s){
/* 1803fbc6a: call 0x180609aae */
L_1803fbc6a_0:;
L_1803fbc6a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fbc6a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fbc6f)));
L_1803fbc6a_3:;
return (uint64_t)UINT64_C(0x180609aae);
L_1803fbc6a_4:;
return UINT64_C(0x1803fbc6f);
}
uint64_t b_1803fbc6f(CPU*s){
/* 1803fbc6f: cvtsd2ss xmm0, xmm0 */
L_1803fbc6f_0:;
L_1803fbc6f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,8),8),4));
L_1803fbc6f_2:;
/* 1803fbc73: movsxd rax, r12d */
L_1803fbc73_0:;
L_1803fbc73_1:;
wr(s->r,0,8,(U)sx(rd(s->r,160,4),4));
L_1803fbc73_2:;
/* 1803fbc76: movss dword ptr [rbp + rax*4], xmm0 */
L_1803fbc76_0:;
L_1803fbc76_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fbc76_2:;
wr(s->u,16,8,(rd(s->r,40,8)+rd(s->u,8,8)));
L_1803fbc76_3:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803fbc76_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fbc76_5:;
/* 1803fbc7c: movaps xmm7, xmmword ptr [rsp + 0x30] */
L_1803fbc7c_0:;
L_1803fbc7c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fbc7c_2:;
wr(s->u,28,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fbc7c_3:;
wr(s->u,62,16,rd(s->u,28,16));
L_1803fbc7c_4:;
wr(s->r,5056,4,rd(s->u,62,4));
L_1803fbc7c_5:;
wr(s->r,5060,4,rd(s->u,66,4));
L_1803fbc7c_6:;
wr(s->r,5064,4,rd(s->u,70,4));
L_1803fbc7c_7:;
wr(s->r,5068,4,rd(s->u,74,4));
L_1803fbc7c_8:;
/* 1803fbc81: xor eax, eax */
L_1803fbc81_0:;
L_1803fbc81_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbc81_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbc81_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fbc81_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fbc81_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbc81_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fbc81_7:;
wr(s->u,44,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fbc81_8:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803fbc81_9:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803fbc81_10:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803fbc81_11:;
/* 1803fbc83: add rsp, 0x238 */
L_1803fbc83_0:;
L_1803fbc83_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x238)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fbc83_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x238)),8,0));
L_1803fbc83_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x238))));
L_1803fbc83_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbc83_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fbc83_6:;
wr(s->u,44,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fbc83_7:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803fbc83_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803fbc83_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803fbc83_10:;
/* 1803fbc8a: pop rbx */
L_1803fbc8a_0:;
L_1803fbc8a_1:;
wr(s->u,54,8,((U)UINT64_C(0x0)));
L_1803fbc8a_2:;
wr(s->u,54,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbc8a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbc8a_4:;
wr(s->r,24,8,rd(s->u,54,8));
L_1803fbc8a_5:;
/* 1803fbc8b: pop rbp */
L_1803fbc8b_0:;
L_1803fbc8b_1:;
wr(s->u,54,8,((U)UINT64_C(0x0)));
L_1803fbc8b_2:;
wr(s->u,54,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbc8b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbc8b_4:;
wr(s->r,40,8,rd(s->u,54,8));
L_1803fbc8b_5:;
/* 1803fbc8c: pop rsi */
L_1803fbc8c_0:;
L_1803fbc8c_1:;
wr(s->u,54,8,((U)UINT64_C(0x0)));
L_1803fbc8c_2:;
wr(s->u,54,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbc8c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbc8c_4:;
wr(s->r,48,8,rd(s->u,54,8));
L_1803fbc8c_5:;
/* 1803fbc8d: pop rdi */
L_1803fbc8d_0:;
L_1803fbc8d_1:;
wr(s->u,54,8,((U)UINT64_C(0x0)));
L_1803fbc8d_2:;
wr(s->u,54,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbc8d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbc8d_4:;
wr(s->r,56,8,rd(s->u,54,8));
L_1803fbc8d_5:;
/* 1803fbc8e: pop r12 */
L_1803fbc8e_0:;
L_1803fbc8e_1:;
wr(s->u,54,8,((U)UINT64_C(0x0)));
L_1803fbc8e_2:;
wr(s->u,54,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbc8e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbc8e_4:;
wr(s->r,160,8,rd(s->u,54,8));
L_1803fbc8e_5:;
/* 1803fbc90: pop r13 */
L_1803fbc90_0:;
L_1803fbc90_1:;
wr(s->u,54,8,((U)UINT64_C(0x0)));
L_1803fbc90_2:;
wr(s->u,54,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbc90_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbc90_4:;
wr(s->r,168,8,rd(s->u,54,8));
L_1803fbc90_5:;
/* 1803fbc92: pop r14 */
L_1803fbc92_0:;
L_1803fbc92_1:;
wr(s->u,54,8,((U)UINT64_C(0x0)));
L_1803fbc92_2:;
wr(s->u,54,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbc92_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbc92_4:;
wr(s->r,176,8,rd(s->u,54,8));
L_1803fbc92_5:;
/* 1803fbc94: pop r15 */
L_1803fbc94_0:;
L_1803fbc94_1:;
wr(s->u,54,8,((U)UINT64_C(0x0)));
L_1803fbc94_2:;
wr(s->u,54,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbc94_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbc94_4:;
wr(s->r,184,8,rd(s->u,54,8));
L_1803fbc94_5:;
/* 1803fbc96: ret  */
L_1803fbc96_0:;
L_1803fbc96_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbc96_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbc96_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fbc96_4:;
return UINT64_C(0x1803fbc97);
}
uint64_t b_1803fbc7c(CPU*s){
/* 1803fbc7c: movaps xmm7, xmmword ptr [rsp + 0x30] */
L_1803fbc7c_0:;
L_1803fbc7c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fbc7c_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fbc7c_3:;
wr(s->u,42,16,rd(s->u,8,16));
L_1803fbc7c_4:;
wr(s->r,5056,4,rd(s->u,42,4));
L_1803fbc7c_5:;
wr(s->r,5060,4,rd(s->u,46,4));
L_1803fbc7c_6:;
wr(s->r,5064,4,rd(s->u,50,4));
L_1803fbc7c_7:;
wr(s->r,5068,4,rd(s->u,54,4));
L_1803fbc7c_8:;
/* 1803fbc81: xor eax, eax */
L_1803fbc81_0:;
L_1803fbc81_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbc81_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbc81_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fbc81_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fbc81_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbc81_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fbc81_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fbc81_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803fbc81_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803fbc81_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803fbc81_11:;
/* 1803fbc83: add rsp, 0x238 */
L_1803fbc83_0:;
L_1803fbc83_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x238)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fbc83_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x238)),8,0));
L_1803fbc83_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x238))));
L_1803fbc83_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbc83_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fbc83_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fbc83_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803fbc83_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803fbc83_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803fbc83_10:;
/* 1803fbc8a: pop rbx */
L_1803fbc8a_0:;
L_1803fbc8a_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803fbc8a_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbc8a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbc8a_4:;
wr(s->r,24,8,rd(s->u,34,8));
L_1803fbc8a_5:;
/* 1803fbc8b: pop rbp */
L_1803fbc8b_0:;
L_1803fbc8b_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803fbc8b_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbc8b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbc8b_4:;
wr(s->r,40,8,rd(s->u,34,8));
L_1803fbc8b_5:;
/* 1803fbc8c: pop rsi */
L_1803fbc8c_0:;
L_1803fbc8c_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803fbc8c_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbc8c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbc8c_4:;
wr(s->r,48,8,rd(s->u,34,8));
L_1803fbc8c_5:;
/* 1803fbc8d: pop rdi */
L_1803fbc8d_0:;
L_1803fbc8d_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803fbc8d_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbc8d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbc8d_4:;
wr(s->r,56,8,rd(s->u,34,8));
L_1803fbc8d_5:;
/* 1803fbc8e: pop r12 */
L_1803fbc8e_0:;
L_1803fbc8e_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803fbc8e_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbc8e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbc8e_4:;
wr(s->r,160,8,rd(s->u,34,8));
L_1803fbc8e_5:;
/* 1803fbc90: pop r13 */
L_1803fbc90_0:;
L_1803fbc90_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803fbc90_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbc90_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbc90_4:;
wr(s->r,168,8,rd(s->u,34,8));
L_1803fbc90_5:;
/* 1803fbc92: pop r14 */
L_1803fbc92_0:;
L_1803fbc92_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803fbc92_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbc92_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbc92_4:;
wr(s->r,176,8,rd(s->u,34,8));
L_1803fbc92_5:;
/* 1803fbc94: pop r15 */
L_1803fbc94_0:;
L_1803fbc94_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803fbc94_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbc94_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbc94_4:;
wr(s->r,184,8,rd(s->u,34,8));
L_1803fbc94_5:;
/* 1803fbc96: ret  */
L_1803fbc96_0:;
L_1803fbc96_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbc96_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbc96_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fbc96_4:;
return UINT64_C(0x1803fbc97);
}
uint64_t b_1803fbc97(CPU*s){
/* 1803fbc97: mov eax, 0xfffffff8 */
L_1803fbc97_0:;
L_1803fbc97_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fbc97_2:;
/* 1803fbc9c: add rsp, 0x238 */
L_1803fbc9c_0:;
L_1803fbc9c_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x238)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fbc9c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x238)),8,0));
L_1803fbc9c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x238))));
L_1803fbc9c_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbc9c_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fbc9c_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fbc9c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fbc9c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbc9c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbc9c_10:;
/* 1803fbca3: pop rbx */
L_1803fbca3_0:;
L_1803fbca3_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fbca3_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbca3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbca3_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803fbca3_5:;
/* 1803fbca4: pop rbp */
L_1803fbca4_0:;
L_1803fbca4_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fbca4_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbca4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbca4_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fbca4_5:;
/* 1803fbca5: pop rsi */
L_1803fbca5_0:;
L_1803fbca5_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fbca5_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbca5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbca5_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fbca5_5:;
/* 1803fbca6: pop rdi */
L_1803fbca6_0:;
L_1803fbca6_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fbca6_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbca6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbca6_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fbca6_5:;
/* 1803fbca7: pop r12 */
L_1803fbca7_0:;
L_1803fbca7_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fbca7_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbca7_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbca7_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fbca7_5:;
/* 1803fbca9: pop r13 */
L_1803fbca9_0:;
L_1803fbca9_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fbca9_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbca9_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbca9_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fbca9_5:;
/* 1803fbcab: pop r14 */
L_1803fbcab_0:;
L_1803fbcab_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fbcab_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbcab_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbcab_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fbcab_5:;
/* 1803fbcad: pop r15 */
L_1803fbcad_0:;
L_1803fbcad_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fbcad_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbcad_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbcad_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fbcad_5:;
/* 1803fbcaf: ret  */
L_1803fbcaf_0:;
L_1803fbcaf_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbcaf_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbcaf_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fbcaf_4:;
return UINT64_C(0x1803fbcb0);
}
uint64_t b_1803fbcb0(CPU*s){
/* 1803fbcb0: sub rsp, 0x48 */
L_1803fbcb0_0:;
L_1803fbcb0_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x48))));
L_1803fbcb0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,1));
L_1803fbcb0_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x48))));
L_1803fbcb0_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbcb0_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fbcb0_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fbcb0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fbcb0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbcb0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbcb0_10:;
/* 1803fbcb4: mov r8, rcx */
L_1803fbcb4_0:;
L_1803fbcb4_1:;
wr(s->r,128,8,rd(s->r,8,8));
L_1803fbcb4_2:;
/* 1803fbcb7: movsxd rdx, edx */
L_1803fbcb7_0:;
L_1803fbcb7_1:;
wr(s->r,16,8,(U)sx(rd(s->r,16,4),4));
L_1803fbcb7_2:;
/* 1803fbcba: test r8, r8 */
L_1803fbcba_0:;
L_1803fbcba_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbcba_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbcba_3:;
wr(s->u,10,8,(rd(s->r,128,8)&rd(s->r,128,8)));
L_1803fbcba_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbcba_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fbcba_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fbcba_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fbcba_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbcba_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbcba_10:;
/* 1803fbcbd: je 0x1803fbdd1 */
L_1803fbcbd_0:;
L_1803fbcbd_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fbdd1);}
L_1803fbcbd_2:;
return UINT64_C(0x1803fbcc3);
}
uint64_t b_1803fbcc3(CPU*s){
/* 1803fbcc3: test rdx, rdx */
L_1803fbcc3_0:;
L_1803fbcc3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbcc3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbcc3_3:;
wr(s->u,13,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fbcc3_4:;
wr(s->r,519,1,(sx(rd(s->u,13,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbcc3_5:;
wr(s->r,518,1,(rd(s->u,13,8)==((U)UINT64_C(0x0))));
L_1803fbcc3_6:;
wr(s->u,3,8,(rd(s->u,13,8)&((U)UINT64_C(0xff))));
L_1803fbcc3_7:;
wr(s->u,11,1,pop(rd(s->u,3,8),8));
L_1803fbcc3_8:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803fbcc3_9:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803fbcc3_10:;
/* 1803fbcc6: jg 0x1803fbcd2 */
L_1803fbcc6_0:;
L_1803fbcc6_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fbcc6_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fbcc6_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fbcc6_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fbcd2);}
L_1803fbcc6_5:;
return UINT64_C(0x1803fbcc8);
}
uint64_t b_1803fbcc8(CPU*s){
/* 1803fbcc8: mov eax, 0xfffffffa */
L_1803fbcc8_0:;
L_1803fbcc8_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fbcc8_2:;
/* 1803fbccd: add rsp, 0x48 */
L_1803fbccd_0:;
L_1803fbccd_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fbccd_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fbccd_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fbccd_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbccd_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fbccd_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fbccd_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fbccd_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbccd_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbccd_10:;
/* 1803fbcd1: ret  */
L_1803fbcd1_0:;
L_1803fbcd1_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbcd1_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbcd1_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fbcd1_4:;
return UINT64_C(0x1803fbcd2);
}
uint64_t b_1803fbcd2(CPU*s){
/* 1803fbcd2: shl rdx, 2 */
L_1803fbcd2_0:;
L_1803fbcd2_1:;
wr(s->u,107,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803fbcd2_2:;
wr(s->u,111,8,rd(s->r,16,8));
L_1803fbcd2_3:;
wr(s->r,16,8,((rd(s->u,107,4)>=64)?0:(rd(s->r,16,8)<<rd(s->u,107,4))));
L_1803fbcd2_4:;
wr(s->u,74,1,(rd(s->u,107,4)==((U)UINT64_C(0x0))));
L_1803fbcd2_5:;
wr(s->u,75,4,(rd(s->u,107,4)-((U)UINT64_C(0x1))));
L_1803fbcd2_6:;
wr(s->u,79,8,((rd(s->u,75,4)>=64)?0:(rd(s->u,111,8)<<rd(s->u,75,4))));
L_1803fbcd2_7:;
wr(s->u,87,1,(sx(rd(s->u,79,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbcd2_8:;
wr(s->u,0,1,rd(s->u,74,1));
L_1803fbcd2_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fbcd2_10:;
wr(s->u,2,1,(!rd(s->u,74,1)));
L_1803fbcd2_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbcd2_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,87,1)));
L_1803fbcd2_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbcd2_14:;
wr(s->u,88,1,(rd(s->u,107,4)==((U)UINT64_C(0x1))));
L_1803fbcd2_15:;
wr(s->u,89,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbcd2_16:;
wr(s->u,90,1,(rd(s->r,512,1)^rd(s->u,89,1)));
L_1803fbcd2_17:;
wr(s->u,0,1,rd(s->u,88,1));
L_1803fbcd2_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,90,1)));
L_1803fbcd2_19:;
wr(s->u,2,1,(!rd(s->u,88,1)));
L_1803fbcd2_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbcd2_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fbcd2_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbcd2_23:;
wr(s->u,51,1,(rd(s->u,107,4)!=((U)UINT64_C(0x0))));
L_1803fbcd2_24:;
wr(s->u,52,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbcd2_25:;
wr(s->u,53,1,(!rd(s->u,51,1)));
L_1803fbcd2_26:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,519,1)));
L_1803fbcd2_27:;
wr(s->u,55,1,(rd(s->u,51,1)&rd(s->u,52,1)));
L_1803fbcd2_28:;
wr(s->r,519,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1803fbcd2_29:;
wr(s->u,56,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fbcd2_30:;
wr(s->u,57,1,(!rd(s->u,51,1)));
L_1803fbcd2_31:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,518,1)));
L_1803fbcd2_32:;
wr(s->u,59,1,(rd(s->u,51,1)&rd(s->u,56,1)));
L_1803fbcd2_33:;
wr(s->r,518,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803fbcd2_34:;
wr(s->u,60,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fbcd2_35:;
wr(s->u,68,1,pop(rd(s->u,60,8),8));
L_1803fbcd2_36:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803fbcd2_37:;
wr(s->u,70,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803fbcd2_38:;
wr(s->u,71,1,(!rd(s->u,51,1)));
L_1803fbcd2_39:;
wr(s->u,72,1,(rd(s->u,71,1)&rd(s->r,514,1)));
L_1803fbcd2_40:;
wr(s->u,73,1,(rd(s->u,51,1)&rd(s->u,70,1)));
L_1803fbcd2_41:;
wr(s->r,514,1,(rd(s->u,72,1)|rd(s->u,73,1)));
L_1803fbcd2_42:;
/* 1803fbcd6: mov dword ptr [rsp + 0x40], 0xff800000 */
L_1803fbcd6_0:;
L_1803fbcd6_1:;
wr(s->u,21,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803fbcd6_2:;
wr(s->u,29,4,((U)UINT64_C(0xff800000)));
L_1803fbcd6_3:;
mw((uint64_t)rd(s->u,21,8),4,rd(s->u,29,4));
L_1803fbcd6_4:;
/* 1803fbcde: xor eax, eax */
L_1803fbcde_0:;
L_1803fbcde_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbcde_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbcde_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fbcde_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fbcde_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbcde_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fbcde_7:;
wr(s->u,45,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fbcde_8:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803fbcde_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803fbcde_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803fbcde_11:;
/* 1803fbce0: mov qword ptr [rsp + 0x38], rbx */
L_1803fbce0_0:;
L_1803fbce0_1:;
wr(s->u,21,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803fbce0_2:;
wr(s->u,33,8,rd(s->r,24,8));
L_1803fbce0_3:;
mw((uint64_t)rd(s->u,21,8),8,rd(s->u,33,8));
L_1803fbce0_4:;
/* 1803fbce5: mov ebx, eax */
L_1803fbce5_0:;
L_1803fbce5_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803fbce5_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fbce5_3:;
/* 1803fbce7: mov qword ptr [rsp + 0x30], rsi */
L_1803fbce7_0:;
L_1803fbce7_1:;
wr(s->u,21,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fbce7_2:;
wr(s->u,33,8,rd(s->r,48,8));
L_1803fbce7_3:;
mw((uint64_t)rd(s->u,21,8),8,rd(s->u,33,8));
L_1803fbce7_4:;
/* 1803fbcec: mov qword ptr [rsp + 0x28], rdi */
L_1803fbcec_0:;
L_1803fbcec_1:;
wr(s->u,21,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fbcec_2:;
wr(s->u,33,8,rd(s->r,56,8));
L_1803fbcec_3:;
mw((uint64_t)rd(s->u,21,8),8,rd(s->u,33,8));
L_1803fbcec_4:;
/* 1803fbcf1: mov qword ptr [rsp + 0x20], r12 */
L_1803fbcf1_0:;
L_1803fbcf1_1:;
wr(s->u,21,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fbcf1_2:;
wr(s->u,33,8,rd(s->r,160,8));
L_1803fbcf1_3:;
mw((uint64_t)rd(s->u,21,8),8,rd(s->u,33,8));
L_1803fbcf1_4:;
/* 1803fbcf6: xor ecx, ecx */
L_1803fbcf6_0:;
L_1803fbcf6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbcf6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbcf6_3:;
wr(s->r,8,4,(rd(s->r,8,4)^rd(s->r,8,4)));
L_1803fbcf6_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fbcf6_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbcf6_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803fbcf6_7:;
wr(s->u,45,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803fbcf6_8:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803fbcf6_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803fbcf6_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803fbcf6_11:;
/* 1803fbcf8: mov rsi, rdx */
L_1803fbcf8_0:;
L_1803fbcf8_1:;
wr(s->r,48,8,rd(s->r,16,8));
L_1803fbcf8_2:;
/* 1803fbcfb: mov rdi, rcx */
L_1803fbcfb_0:;
L_1803fbcfb_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803fbcfb_2:;
/* 1803fbcfe: mov r12, r8 */
L_1803fbcfe_0:;
L_1803fbcfe_1:;
wr(s->r,160,8,rd(s->r,128,8));
L_1803fbcfe_2:;
/* 1803fbd01: movss xmm0, dword ptr [rdi + r12] */
L_1803fbd01_0:;
L_1803fbd01_1:;
wr(s->u,5,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803fbd01_2:;
wr(s->u,13,8,(rd(s->r,56,8)+rd(s->u,5,8)));
L_1803fbd01_3:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803fbd01_4:;
wr(s->r,4608,4,rd(s->u,29,4));
L_1803fbd01_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fbd01_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fbd01_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fbd01_8:;
/* 1803fbd07: mov r9d, dword ptr [rdi + r12] */
L_1803fbd07_0:;
L_1803fbd07_1:;
wr(s->u,5,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803fbd07_2:;
wr(s->u,13,8,(rd(s->r,56,8)+rd(s->u,5,8)));
L_1803fbd07_3:;
wr(s->u,41,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803fbd07_4:;
wr(s->r,136,4,rd(s->u,41,4));
L_1803fbd07_5:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fbd07_6:;
/* 1803fbd0b: mov dword ptr [rsp + 0x44], r9d */
L_1803fbd0b_0:;
L_1803fbd0b_1:;
wr(s->u,21,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1803fbd0b_2:;
wr(s->u,29,4,rd(s->r,136,4));
L_1803fbd0b_3:;
mw((uint64_t)rd(s->u,21,8),4,rd(s->u,29,4));
L_1803fbd0b_4:;
/* 1803fbd10: shr r9d, 0x18 */
L_1803fbd10_0:;
L_1803fbd10_1:;
wr(s->u,119,4,(((U)UINT64_C(0x18))&((U)UINT64_C(0x1f))));
L_1803fbd10_2:;
wr(s->u,123,4,rd(s->r,136,4));
L_1803fbd10_3:;
wr(s->r,136,4,((rd(s->u,119,4)>=32)?0:(rd(s->r,136,4)>>rd(s->u,119,4))));
L_1803fbd10_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fbd10_5:;
wr(s->u,91,1,(rd(s->u,119,4)==((U)UINT64_C(0x0))));
L_1803fbd10_6:;
wr(s->u,92,4,(rd(s->u,119,4)-((U)UINT64_C(0x1))));
L_1803fbd10_7:;
wr(s->u,96,4,((rd(s->u,92,4)>=32)?0:(rd(s->u,123,4)>>rd(s->u,92,4))));
L_1803fbd10_8:;
wr(s->u,100,4,(rd(s->u,96,4)&((U)UINT64_C(0x1))));
L_1803fbd10_9:;
wr(s->u,104,1,(rd(s->u,100,4)!=((U)UINT64_C(0x0))));
L_1803fbd10_10:;
wr(s->u,0,1,rd(s->u,91,1));
L_1803fbd10_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fbd10_12:;
wr(s->u,2,1,(!rd(s->u,91,1)));
L_1803fbd10_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbd10_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,104,1)));
L_1803fbd10_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbd10_16:;
wr(s->u,105,1,(rd(s->u,119,4)==((U)UINT64_C(0x1))));
L_1803fbd10_17:;
wr(s->u,106,1,(sx(rd(s->u,123,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbd10_18:;
wr(s->u,0,1,rd(s->u,105,1));
L_1803fbd10_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fbd10_20:;
wr(s->u,2,1,(!rd(s->u,105,1)));
L_1803fbd10_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbd10_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,106,1)));
L_1803fbd10_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbd10_24:;
wr(s->u,51,1,(rd(s->u,119,4)!=((U)UINT64_C(0x0))));
L_1803fbd10_25:;
wr(s->u,52,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbd10_26:;
wr(s->u,53,1,(!rd(s->u,51,1)));
L_1803fbd10_27:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,519,1)));
L_1803fbd10_28:;
wr(s->u,55,1,(rd(s->u,51,1)&rd(s->u,52,1)));
L_1803fbd10_29:;
wr(s->r,519,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1803fbd10_30:;
wr(s->u,56,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803fbd10_31:;
wr(s->u,57,1,(!rd(s->u,51,1)));
L_1803fbd10_32:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,518,1)));
L_1803fbd10_33:;
wr(s->u,59,1,(rd(s->u,51,1)&rd(s->u,56,1)));
L_1803fbd10_34:;
wr(s->r,518,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803fbd10_35:;
wr(s->u,60,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803fbd10_36:;
wr(s->u,68,1,pop(rd(s->u,60,4),4));
L_1803fbd10_37:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803fbd10_38:;
wr(s->u,70,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803fbd10_39:;
wr(s->u,71,1,(!rd(s->u,51,1)));
L_1803fbd10_40:;
wr(s->u,72,1,(rd(s->u,71,1)&rd(s->r,514,1)));
L_1803fbd10_41:;
wr(s->u,73,1,(rd(s->u,51,1)&rd(s->u,70,1)));
L_1803fbd10_42:;
wr(s->r,514,1,(rd(s->u,72,1)|rd(s->u,73,1)));
L_1803fbd10_43:;
/* 1803fbd14: test r9d, 0x80 */
L_1803fbd14_0:;
L_1803fbd14_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbd14_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbd14_3:;
wr(s->u,127,4,(rd(s->r,136,4)&((U)UINT64_C(0x80))));
L_1803fbd14_4:;
wr(s->r,519,1,(sx(rd(s->u,127,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbd14_5:;
wr(s->r,518,1,(rd(s->u,127,4)==((U)UINT64_C(0x0))));
L_1803fbd14_6:;
wr(s->u,45,4,(rd(s->u,127,4)&((U)UINT64_C(0xff))));
L_1803fbd14_7:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803fbd14_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803fbd14_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803fbd14_10:;
/* 1803fbd1b: je 0x1803fbd37 */
L_1803fbd1b_0:;
L_1803fbd1b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fbd37);}
L_1803fbd1b_2:;
return UINT64_C(0x1803fbd1d);
}
uint64_t b_1803fbd01(CPU*s){
/* 1803fbd01: movss xmm0, dword ptr [rdi + r12] */
L_1803fbd01_0:;
L_1803fbd01_1:;
wr(s->u,5,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803fbd01_2:;
wr(s->u,13,8,(rd(s->r,56,8)+rd(s->u,5,8)));
L_1803fbd01_3:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803fbd01_4:;
wr(s->r,4608,4,rd(s->u,29,4));
L_1803fbd01_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fbd01_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fbd01_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fbd01_8:;
/* 1803fbd07: mov r9d, dword ptr [rdi + r12] */
L_1803fbd07_0:;
L_1803fbd07_1:;
wr(s->u,5,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803fbd07_2:;
wr(s->u,13,8,(rd(s->r,56,8)+rd(s->u,5,8)));
L_1803fbd07_3:;
wr(s->u,33,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803fbd07_4:;
wr(s->r,136,4,rd(s->u,33,4));
L_1803fbd07_5:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fbd07_6:;
/* 1803fbd0b: mov dword ptr [rsp + 0x44], r9d */
L_1803fbd0b_0:;
L_1803fbd0b_1:;
wr(s->u,21,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1803fbd0b_2:;
wr(s->u,29,4,rd(s->r,136,4));
L_1803fbd0b_3:;
mw((uint64_t)rd(s->u,21,8),4,rd(s->u,29,4));
L_1803fbd0b_4:;
/* 1803fbd10: shr r9d, 0x18 */
L_1803fbd10_0:;
L_1803fbd10_1:;
wr(s->u,78,4,(((U)UINT64_C(0x18))&((U)UINT64_C(0x1f))));
L_1803fbd10_2:;
wr(s->u,82,4,rd(s->r,136,4));
L_1803fbd10_3:;
wr(s->r,136,4,((rd(s->u,78,4)>=32)?0:(rd(s->r,136,4)>>rd(s->u,78,4))));
L_1803fbd10_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fbd10_5:;
wr(s->u,62,1,(rd(s->u,78,4)==((U)UINT64_C(0x0))));
L_1803fbd10_6:;
wr(s->u,63,4,(rd(s->u,78,4)-((U)UINT64_C(0x1))));
L_1803fbd10_7:;
wr(s->u,67,4,((rd(s->u,63,4)>=32)?0:(rd(s->u,82,4)>>rd(s->u,63,4))));
L_1803fbd10_8:;
wr(s->u,71,4,(rd(s->u,67,4)&((U)UINT64_C(0x1))));
L_1803fbd10_9:;
wr(s->u,75,1,(rd(s->u,71,4)!=((U)UINT64_C(0x0))));
L_1803fbd10_10:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803fbd10_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fbd10_12:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803fbd10_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbd10_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,75,1)));
L_1803fbd10_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbd10_16:;
wr(s->u,76,1,(rd(s->u,78,4)==((U)UINT64_C(0x1))));
L_1803fbd10_17:;
wr(s->u,77,1,(sx(rd(s->u,82,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbd10_18:;
wr(s->u,0,1,rd(s->u,76,1));
L_1803fbd10_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fbd10_20:;
wr(s->u,2,1,(!rd(s->u,76,1)));
L_1803fbd10_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbd10_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,77,1)));
L_1803fbd10_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbd10_24:;
wr(s->u,43,1,(rd(s->u,78,4)!=((U)UINT64_C(0x0))));
L_1803fbd10_25:;
wr(s->u,44,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbd10_26:;
wr(s->u,45,1,(!rd(s->u,43,1)));
L_1803fbd10_27:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,519,1)));
L_1803fbd10_28:;
wr(s->u,47,1,(rd(s->u,43,1)&rd(s->u,44,1)));
L_1803fbd10_29:;
wr(s->r,519,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803fbd10_30:;
wr(s->u,48,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803fbd10_31:;
wr(s->u,49,1,(!rd(s->u,43,1)));
L_1803fbd10_32:;
wr(s->u,50,1,(rd(s->u,49,1)&rd(s->r,518,1)));
L_1803fbd10_33:;
wr(s->u,51,1,(rd(s->u,43,1)&rd(s->u,48,1)));
L_1803fbd10_34:;
wr(s->r,518,1,(rd(s->u,50,1)|rd(s->u,51,1)));
L_1803fbd10_35:;
wr(s->u,52,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803fbd10_36:;
wr(s->u,56,1,pop(rd(s->u,52,4),4));
L_1803fbd10_37:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803fbd10_38:;
wr(s->u,58,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803fbd10_39:;
wr(s->u,59,1,(!rd(s->u,43,1)));
L_1803fbd10_40:;
wr(s->u,60,1,(rd(s->u,59,1)&rd(s->r,514,1)));
L_1803fbd10_41:;
wr(s->u,61,1,(rd(s->u,43,1)&rd(s->u,58,1)));
L_1803fbd10_42:;
wr(s->r,514,1,(rd(s->u,60,1)|rd(s->u,61,1)));
L_1803fbd10_43:;
/* 1803fbd14: test r9d, 0x80 */
L_1803fbd14_0:;
L_1803fbd14_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbd14_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbd14_3:;
wr(s->u,86,4,(rd(s->r,136,4)&((U)UINT64_C(0x80))));
L_1803fbd14_4:;
wr(s->r,519,1,(sx(rd(s->u,86,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbd14_5:;
wr(s->r,518,1,(rd(s->u,86,4)==((U)UINT64_C(0x0))));
L_1803fbd14_6:;
wr(s->u,37,4,(rd(s->u,86,4)&((U)UINT64_C(0xff))));
L_1803fbd14_7:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803fbd14_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803fbd14_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803fbd14_10:;
/* 1803fbd1b: je 0x1803fbd37 */
L_1803fbd1b_0:;
L_1803fbd1b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fbd37);}
L_1803fbd1b_2:;
return UINT64_C(0x1803fbd1d);
}
uint64_t b_1803fbd1d(CPU*s){
/* 1803fbd1d: mov r9d, dword ptr [rip + 0x412f3c] */
L_1803fbd1d_0:;
L_1803fbd1d_1:;
wr(s->r,136,4,mr(UINT64_C(0x18080ec60),4));
L_1803fbd1d_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fbd1d_3:;
/* 1803fbd24: mov dword ptr [rdi + r12], r9d */
L_1803fbd24_0:;
L_1803fbd24_1:;
wr(s->u,0,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803fbd24_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803fbd24_3:;
wr(s->u,16,4,rd(s->r,136,4));
L_1803fbd24_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fbd24_5:;
/* 1803fbd28: mov r10d, 4 */
L_1803fbd28_0:;
L_1803fbd28_1:;
wr(s->r,144,8,((U)UINT64_C(0x4)));
L_1803fbd28_2:;
/* 1803fbd2e: cmp ebx, 0 */
L_1803fbd2e_0:;
L_1803fbd2e_1:;
wr(s->u,31,4,rd(s->r,24,4));
L_1803fbd2e_2:;
wr(s->r,512,1,(rd(s->u,31,4)<((U)UINT64_C(0x0))));
L_1803fbd2e_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,31,4),((U)UINT64_C(0x0)),4,1));
L_1803fbd2e_4:;
wr(s->u,35,4,(rd(s->u,31,4)-((U)UINT64_C(0x0))));
L_1803fbd2e_5:;
wr(s->r,519,1,(sx(rd(s->u,35,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbd2e_6:;
wr(s->r,518,1,(rd(s->u,35,4)==((U)UINT64_C(0x0))));
L_1803fbd2e_7:;
wr(s->u,20,4,(rd(s->u,35,4)&((U)UINT64_C(0xff))));
L_1803fbd2e_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803fbd2e_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fbd2e_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fbd2e_11:;
/* 1803fbd31: cmove ebx, r10d */
L_1803fbd31_0:;
L_1803fbd31_1:;
wr(s->u,26,4,rd(s->r,144,4));
L_1803fbd31_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fbd31_3:;
wr(s->u,30,1,(!rd(s->r,518,1)));
L_1803fbd31_4:;
if(rd(s->u,30,1)){goto L_1803fbd35_0;}
L_1803fbd31_5:;
wr(s->r,24,4,rd(s->u,26,4));
L_1803fbd31_6:;
/* 1803fbd35: jmp 0x1803fbd76 */
L_1803fbd35_0:;
L_1803fbd35_1:;
return UINT64_C(0x1803fbd76);
L_1803fbd35_2:;
return UINT64_C(0x1803fbd37);
}
uint64_t b_1803fbd35(CPU*s){
/* 1803fbd35: jmp 0x1803fbd76 */
L_1803fbd35_0:;
L_1803fbd35_1:;
return UINT64_C(0x1803fbd76);
L_1803fbd35_2:;
return UINT64_C(0x1803fbd37);
}
uint64_t b_1803fbd37(CPU*s){
/* 1803fbd37: mov r9d, dword ptr [rsp + 0x44] */
L_1803fbd37_0:;
L_1803fbd37_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1803fbd37_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fbd37_3:;
wr(s->r,136,4,rd(s->u,8,4));
L_1803fbd37_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fbd37_5:;
/* 1803fbd3c: and r9d, 0x7fc00000 */
L_1803fbd3c_0:;
L_1803fbd3c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbd3c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbd3c_3:;
wr(s->r,136,4,(rd(s->r,136,4)&((U)UINT64_C(0x7fc00000))));
L_1803fbd3c_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fbd3c_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbd3c_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803fbd3c_7:;
wr(s->u,13,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803fbd3c_8:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803fbd3c_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fbd3c_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fbd3c_11:;
/* 1803fbd43: cmp r9d, 0x7fc00000 */
L_1803fbd43_0:;
L_1803fbd43_1:;
wr(s->u,19,4,rd(s->r,136,4));
L_1803fbd43_2:;
wr(s->r,512,1,(rd(s->u,19,4)<((U)UINT64_C(0x7fc00000))));
L_1803fbd43_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803fbd43_4:;
wr(s->u,23,4,(rd(s->u,19,4)-((U)UINT64_C(0x7fc00000))));
L_1803fbd43_5:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbd43_6:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803fbd43_7:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803fbd43_8:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803fbd43_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fbd43_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fbd43_11:;
/* 1803fbd4a: jne 0x1803fbd60 */
L_1803fbd4a_0:;
L_1803fbd4a_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803fbd4a_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803fbd60);}
L_1803fbd4a_3:;
return UINT64_C(0x1803fbd4c);
}
uint64_t b_1803fbd4c(CPU*s){
/* 1803fbd4c: pxor xmm0, xmm0 */
L_1803fbd4c_0:;
L_1803fbd4c_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803fbd4c_2:;
/* 1803fbd50: subss xmm0, dword ptr [rip + 0x412f08] */
L_1803fbd50_0:;
L_1803fbd50_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(mr(UINT64_C(0x18080ec60),4),4),4));
L_1803fbd50_2:;
/* 1803fbd58: movss dword ptr [rdi + r12], xmm0 */
L_1803fbd58_0:;
L_1803fbd58_1:;
wr(s->u,0,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803fbd58_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803fbd58_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fbd58_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fbd58_5:;
/* 1803fbd5e: jmp 0x1803fbd76 */
L_1803fbd5e_0:;
L_1803fbd5e_1:;
return UINT64_C(0x1803fbd76);
L_1803fbd5e_2:;
return UINT64_C(0x1803fbd60);
}
uint64_t b_1803fbd60(CPU*s){
/* 1803fbd60: pxor xmm1, xmm1 */
L_1803fbd60_0:;
L_1803fbd60_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803fbd60_2:;
/* 1803fbd64: ucomiss xmm0, xmm1 */
L_1803fbd64_0:;
L_1803fbd64_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803fbd64_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803fbd64_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803fbd64_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803fbd64_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803fbd64_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803fbd64_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803fbd64_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbd64_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fbd64_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fbd64_11:;
/* 1803fbd67: jp 0x1803fbd6b */
L_1803fbd67_0:;
L_1803fbd67_1:;
if(rd(s->r,514,1)){return UINT64_C(0x1803fbd6b);}
L_1803fbd67_2:;
return UINT64_C(0x1803fbd69);
}
uint64_t b_1803fbd69(CPU*s){
/* 1803fbd69: je 0x1803fbdb9 */
L_1803fbd69_0:;
L_1803fbd69_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fbdb9);}
L_1803fbd69_2:;
return UINT64_C(0x1803fbd6b);
}
uint64_t b_1803fbd6b(CPU*s){
/* 1803fbd6b: call 0x180609c04 */
L_1803fbd6b_0:;
L_1803fbd6b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fbd6b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fbd70)));
L_1803fbd6b_3:;
return (uint64_t)UINT64_C(0x180609c04);
L_1803fbd6b_4:;
return UINT64_C(0x1803fbd70);
}
uint64_t b_1803fbd70(CPU*s){
/* 1803fbd70: movss dword ptr [rdi + r12], xmm0 */
L_1803fbd70_0:;
L_1803fbd70_1:;
wr(s->u,0,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803fbd70_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803fbd70_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fbd70_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fbd70_5:;
/* 1803fbd76: add rdi, 4 */
L_1803fbd76_0:;
L_1803fbd76_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803fbd76_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x4)),8,0));
L_1803fbd76_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x4))));
L_1803fbd76_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbd76_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803fbd76_6:;
wr(s->u,21,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803fbd76_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fbd76_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fbd76_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fbd76_10:;
/* 1803fbd7a: cmp rdi, rsi */
L_1803fbd7a_0:;
L_1803fbd7a_1:;
wr(s->u,31,8,rd(s->r,48,8));
L_1803fbd7a_2:;
wr(s->r,512,1,(rd(s->r,56,8)<rd(s->u,31,8)));
L_1803fbd7a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),rd(s->u,31,8),8,1));
L_1803fbd7a_4:;
wr(s->u,39,8,(rd(s->r,56,8)-rd(s->u,31,8)));
L_1803fbd7a_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbd7a_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fbd7a_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fbd7a_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fbd7a_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fbd7a_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fbd7a_11:;
/* 1803fbd7d: jl 0x1803fbd01 */
L_1803fbd7d_0:;
L_1803fbd7d_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbd7d_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fbd01);}
L_1803fbd7d_3:;
return UINT64_C(0x1803fbd7f);
}
uint64_t b_1803fbd76(CPU*s){
/* 1803fbd76: add rdi, 4 */
L_1803fbd76_0:;
L_1803fbd76_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803fbd76_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x4)),8,0));
L_1803fbd76_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x4))));
L_1803fbd76_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbd76_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803fbd76_6:;
wr(s->u,1,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803fbd76_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fbd76_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fbd76_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fbd76_10:;
/* 1803fbd7a: cmp rdi, rsi */
L_1803fbd7a_0:;
L_1803fbd7a_1:;
wr(s->u,11,8,rd(s->r,48,8));
L_1803fbd7a_2:;
wr(s->r,512,1,(rd(s->r,56,8)<rd(s->u,11,8)));
L_1803fbd7a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),rd(s->u,11,8),8,1));
L_1803fbd7a_4:;
wr(s->u,19,8,(rd(s->r,56,8)-rd(s->u,11,8)));
L_1803fbd7a_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbd7a_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fbd7a_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fbd7a_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fbd7a_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fbd7a_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fbd7a_11:;
/* 1803fbd7d: jl 0x1803fbd01 */
L_1803fbd7d_0:;
L_1803fbd7d_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbd7d_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fbd01);}
L_1803fbd7d_3:;
return UINT64_C(0x1803fbd7f);
}
uint64_t b_1803fbd7f(CPU*s){
/* 1803fbd7f: mov rsi, qword ptr [rsp + 0x30] */
L_1803fbd7f_0:;
L_1803fbd7f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fbd7f_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fbd7f_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803fbd7f_4:;
/* 1803fbd84: mov rdi, qword ptr [rsp + 0x28] */
L_1803fbd84_0:;
L_1803fbd84_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fbd84_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fbd84_3:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803fbd84_4:;
/* 1803fbd89: mov r12, qword ptr [rsp + 0x20] */
L_1803fbd89_0:;
L_1803fbd89_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fbd89_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fbd89_3:;
wr(s->r,160,8,rd(s->u,8,8));
L_1803fbd89_4:;
/* 1803fbd8e: mov eax, ebx */
L_1803fbd8e_0:;
L_1803fbd8e_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803fbd8e_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fbd8e_3:;
/* 1803fbd90: test eax, eax */
L_1803fbd90_0:;
L_1803fbd90_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbd90_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbd90_3:;
wr(s->u,23,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803fbd90_4:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbd90_5:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803fbd90_6:;
wr(s->u,17,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803fbd90_7:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fbd90_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fbd90_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fbd90_10:;
/* 1803fbd92: mov rbx, qword ptr [rsp + 0x38] */
L_1803fbd92_0:;
L_1803fbd92_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803fbd92_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fbd92_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803fbd92_4:;
/* 1803fbd97: jne 0x1803fbda0 */
L_1803fbd97_0:;
L_1803fbd97_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1803fbd97_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803fbda0);}
L_1803fbd97_3:;
return UINT64_C(0x1803fbd99);
}
uint64_t b_1803fbd99(CPU*s){
/* 1803fbd99: xor eax, eax */
L_1803fbd99_0:;
L_1803fbd99_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbd99_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbd99_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fbd99_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fbd99_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbd99_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fbd99_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fbd99_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fbd99_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbd99_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbd99_11:;
/* 1803fbd9b: add rsp, 0x48 */
L_1803fbd9b_0:;
L_1803fbd9b_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fbd9b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fbd9b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fbd9b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbd9b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fbd9b_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fbd9b_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fbd9b_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbd9b_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbd9b_10:;
/* 1803fbd9f: ret  */
L_1803fbd9f_0:;
L_1803fbd9f_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbd9f_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbd9f_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fbd9f_4:;
return UINT64_C(0x1803fbda0);
}
uint64_t b_1803fbda0(CPU*s){
/* 1803fbda0: cmp eax, 2 */
L_1803fbda0_0:;
L_1803fbda0_1:;
wr(s->u,7,4,rd(s->r,0,4));
L_1803fbda0_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x2))));
L_1803fbda0_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x2)),4,1));
L_1803fbda0_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x2))));
L_1803fbda0_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbda0_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fbda0_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fbda0_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fbda0_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fbda0_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fbda0_11:;
/* 1803fbda3: jne 0x1803fbdaf */
L_1803fbda3_0:;
L_1803fbda3_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fbda3_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fbdaf);}
L_1803fbda3_3:;
return UINT64_C(0x1803fbda5);
}
uint64_t b_1803fbda5(CPU*s){
/* 1803fbda5: mov eax, 7 */
L_1803fbda5_0:;
L_1803fbda5_1:;
wr(s->r,0,8,((U)UINT64_C(0x7)));
L_1803fbda5_2:;
/* 1803fbdaa: add rsp, 0x48 */
L_1803fbdaa_0:;
L_1803fbdaa_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fbdaa_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fbdaa_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fbdaa_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbdaa_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fbdaa_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fbdaa_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fbdaa_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbdaa_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbdaa_10:;
/* 1803fbdae: ret  */
L_1803fbdae_0:;
L_1803fbdae_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbdae_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbdae_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fbdae_4:;
return UINT64_C(0x1803fbdaf);
}
uint64_t b_1803fbdaf(CPU*s){
/* 1803fbdaf: mov eax, 8 */
L_1803fbdaf_0:;
L_1803fbdaf_1:;
wr(s->r,0,8,((U)UINT64_C(0x8)));
L_1803fbdaf_2:;
/* 1803fbdb4: add rsp, 0x48 */
L_1803fbdb4_0:;
L_1803fbdb4_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fbdb4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fbdb4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fbdb4_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbdb4_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fbdb4_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fbdb4_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fbdb4_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbdb4_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbdb4_10:;
/* 1803fbdb8: ret  */
L_1803fbdb8_0:;
L_1803fbdb8_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbdb8_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbdb8_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fbdb8_4:;
return UINT64_C(0x1803fbdb9);
}
uint64_t b_1803fbdb9(CPU*s){
/* 1803fbdb9: mov r9d, dword ptr [rsp + 0x40] */
L_1803fbdb9_0:;
L_1803fbdb9_1:;
wr(s->u,16,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803fbdb9_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fbdb9_3:;
wr(s->r,136,4,rd(s->u,28,4));
L_1803fbdb9_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fbdb9_5:;
/* 1803fbdbe: mov dword ptr [rdi + r12], r9d */
L_1803fbdbe_0:;
L_1803fbdbe_1:;
wr(s->u,0,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803fbdbe_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803fbdbe_3:;
wr(s->u,24,4,rd(s->r,136,4));
L_1803fbdbe_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803fbdbe_5:;
/* 1803fbdc2: mov r10d, 2 */
L_1803fbdc2_0:;
L_1803fbdc2_1:;
wr(s->r,144,8,((U)UINT64_C(0x2)));
L_1803fbdc2_2:;
/* 1803fbdc8: cmp ebx, 0 */
L_1803fbdc8_0:;
L_1803fbdc8_1:;
wr(s->u,43,4,rd(s->r,24,4));
L_1803fbdc8_2:;
wr(s->r,512,1,(rd(s->u,43,4)<((U)UINT64_C(0x0))));
L_1803fbdc8_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,43,4),((U)UINT64_C(0x0)),4,1));
L_1803fbdc8_4:;
wr(s->u,47,4,(rd(s->u,43,4)-((U)UINT64_C(0x0))));
L_1803fbdc8_5:;
wr(s->r,519,1,(sx(rd(s->u,47,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbdc8_6:;
wr(s->r,518,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803fbdc8_7:;
wr(s->u,32,4,(rd(s->u,47,4)&((U)UINT64_C(0xff))));
L_1803fbdc8_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803fbdc8_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803fbdc8_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803fbdc8_11:;
/* 1803fbdcb: cmove ebx, r10d */
L_1803fbdcb_0:;
L_1803fbdcb_1:;
wr(s->u,38,4,rd(s->r,144,4));
L_1803fbdcb_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fbdcb_3:;
wr(s->u,42,1,(!rd(s->r,518,1)));
L_1803fbdcb_4:;
if(rd(s->u,42,1)){goto L_1803fbdcf_0;}
L_1803fbdcb_5:;
wr(s->r,24,4,rd(s->u,38,4));
L_1803fbdcb_6:;
/* 1803fbdcf: jmp 0x1803fbd76 */
L_1803fbdcf_0:;
L_1803fbdcf_1:;
return UINT64_C(0x1803fbd76);
L_1803fbdcf_2:;
return UINT64_C(0x1803fbdd1);
}
uint64_t b_1803fbdcf(CPU*s){
/* 1803fbdcf: jmp 0x1803fbd76 */
L_1803fbdcf_0:;
L_1803fbdcf_1:;
return UINT64_C(0x1803fbd76);
L_1803fbdcf_2:;
return UINT64_C(0x1803fbdd1);
}
uint64_t b_1803fbdd1(CPU*s){
/* 1803fbdd1: mov eax, 0xfffffff8 */
L_1803fbdd1_0:;
L_1803fbdd1_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fbdd1_2:;
/* 1803fbdd6: add rsp, 0x48 */
L_1803fbdd6_0:;
L_1803fbdd6_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fbdd6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fbdd6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fbdd6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbdd6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fbdd6_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fbdd6_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fbdd6_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbdd6_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbdd6_10:;
/* 1803fbdda: ret  */
L_1803fbdda_0:;
L_1803fbdda_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbdda_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbdda_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fbdda_4:;
return UINT64_C(0x1803fbddb);
}
uint64_t b_1803fbddc(CPU*s){
/* 1803fbddc: sub rsp, 0x38 */
L_1803fbddc_0:;
L_1803fbddc_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x38))));
L_1803fbddc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,1));
L_1803fbddc_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x38))));
L_1803fbddc_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbddc_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fbddc_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fbddc_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fbddc_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbddc_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbddc_10:;
/* 1803fbde0: test rcx, rcx */
L_1803fbde0_0:;
L_1803fbde0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbde0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbde0_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fbde0_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbde0_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fbde0_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fbde0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fbde0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbde0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbde0_10:;
/* 1803fbde3: je 0x1803fbef9 */
L_1803fbde3_0:;
L_1803fbde3_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fbef9);}
L_1803fbde3_2:;
return UINT64_C(0x1803fbde9);
}
uint64_t b_1803fbde9(CPU*s){
/* 1803fbde9: test edx, edx */
L_1803fbde9_0:;
L_1803fbde9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbde9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbde9_3:;
wr(s->u,8,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803fbde9_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbde9_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803fbde9_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803fbde9_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fbde9_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fbde9_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fbde9_10:;
/* 1803fbdeb: jle 0x1803fbeef */
L_1803fbdeb_0:;
L_1803fbdeb_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbdeb_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fbdeb_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fbeef);}
L_1803fbdeb_4:;
return UINT64_C(0x1803fbdf1);
}
uint64_t b_1803fbdf1(CPU*s){
/* 1803fbdf1: movsxd r8, edx */
L_1803fbdf1_0:;
L_1803fbdf1_1:;
wr(s->r,128,8,(U)sx(rd(s->r,16,4),4));
L_1803fbdf1_2:;
/* 1803fbdf4: mov rdx, rcx */
L_1803fbdf4_0:;
L_1803fbdf4_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1803fbdf4_2:;
/* 1803fbdf7: and rdx, 0xf */
L_1803fbdf7_0:;
L_1803fbdf7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbdf7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbdf7_3:;
wr(s->r,16,8,(rd(s->r,16,8)&((U)UINT64_C(0xf))));
L_1803fbdf7_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbdf7_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fbdf7_6:;
wr(s->u,0,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fbdf7_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fbdf7_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbdf7_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbdf7_10:;
/* 1803fbdfb: test edx, edx */
L_1803fbdfb_0:;
L_1803fbdfb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbdfb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbdfb_3:;
wr(s->u,10,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803fbdfb_4:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbdfb_5:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fbdfb_6:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fbdfb_7:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fbdfb_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbdfb_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbdfb_10:;
/* 1803fbdfd: je 0x1803fbe10 */
L_1803fbdfd_0:;
L_1803fbdfd_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fbe10);}
L_1803fbdfd_2:;
return UINT64_C(0x1803fbdff);
}
uint64_t b_1803fbdff(CPU*s){
/* 1803fbdff: test dl, 3 */
L_1803fbdff_0:;
L_1803fbdff_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbdff_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbdff_3:;
wr(s->u,4,1,(rd(s->r,16,1)&((U)UINT64_C(0x3))));
L_1803fbdff_4:;
wr(s->r,519,1,(sx(rd(s->u,4,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803fbdff_5:;
wr(s->r,518,1,(rd(s->u,4,1)==((U)UINT64_C(0x0))));
L_1803fbdff_6:;
wr(s->u,1,1,(rd(s->u,4,1)&((U)UINT64_C(0xff))));
L_1803fbdff_7:;
wr(s->u,2,1,pop(rd(s->u,1,1),1));
L_1803fbdff_8:;
wr(s->u,3,1,(rd(s->u,2,1)&((U)UINT64_C(0x1))));
L_1803fbdff_9:;
wr(s->r,514,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_1803fbdff_10:;
/* 1803fbe02: jne 0x1803fbeeb */
L_1803fbe02_0:;
L_1803fbe02_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fbe02_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fbeeb);}
L_1803fbe02_3:;
return UINT64_C(0x1803fbe08);
}
uint64_t b_1803fbe08(CPU*s){
/* 1803fbe08: neg edx */
L_1803fbe08_0:;
L_1803fbe08_1:;
wr(s->r,512,1,(rd(s->r,16,4)!=((U)UINT64_C(0x0))));
L_1803fbe08_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,16,4),4,1));
L_1803fbe08_3:;
wr(s->r,16,4,(-rd(s->r,16,4)));
L_1803fbe08_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbe08_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fbe08_6:;
wr(s->u,14,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fbe08_7:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fbe08_8:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fbe08_9:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fbe08_10:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fbe08_11:;
/* 1803fbe0a: add edx, 0x10 */
L_1803fbe0a_0:;
L_1803fbe0a_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+((U)UINT64_C(0x10)))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803fbe0a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x10)),4,0));
L_1803fbe0a_3:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x10))));
L_1803fbe0a_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fbe0a_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbe0a_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fbe0a_7:;
wr(s->u,14,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fbe0a_8:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fbe0a_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fbe0a_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fbe0a_11:;
/* 1803fbe0d: shr edx, 2 */
L_1803fbe0d_0:;
L_1803fbe0d_1:;
wr(s->u,75,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803fbe0d_2:;
wr(s->u,79,4,rd(s->r,16,4));
L_1803fbe0d_3:;
wr(s->r,16,4,((rd(s->u,75,4)>=32)?0:(rd(s->r,16,4)>>rd(s->u,75,4))));
L_1803fbe0d_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fbe0d_5:;
wr(s->u,43,1,(rd(s->u,75,4)==((U)UINT64_C(0x0))));
L_1803fbe0d_6:;
wr(s->u,44,4,(rd(s->u,75,4)-((U)UINT64_C(0x1))));
L_1803fbe0d_7:;
wr(s->u,48,4,((rd(s->u,44,4)>=32)?0:(rd(s->u,79,4)>>rd(s->u,44,4))));
L_1803fbe0d_8:;
wr(s->u,52,4,(rd(s->u,48,4)&((U)UINT64_C(0x1))));
L_1803fbe0d_9:;
wr(s->u,56,1,(rd(s->u,52,4)!=((U)UINT64_C(0x0))));
L_1803fbe0d_10:;
wr(s->u,0,1,rd(s->u,43,1));
L_1803fbe0d_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fbe0d_12:;
wr(s->u,2,1,(!rd(s->u,43,1)));
L_1803fbe0d_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbe0d_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,56,1)));
L_1803fbe0d_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbe0d_16:;
wr(s->u,57,1,(rd(s->u,75,4)==((U)UINT64_C(0x1))));
L_1803fbe0d_17:;
wr(s->u,58,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbe0d_18:;
wr(s->u,0,1,rd(s->u,57,1));
L_1803fbe0d_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fbe0d_20:;
wr(s->u,2,1,(!rd(s->u,57,1)));
L_1803fbe0d_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbe0d_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,58,1)));
L_1803fbe0d_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbe0d_24:;
wr(s->u,24,1,(rd(s->u,75,4)!=((U)UINT64_C(0x0))));
L_1803fbe0d_25:;
wr(s->u,25,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbe0d_26:;
wr(s->u,26,1,(!rd(s->u,24,1)));
L_1803fbe0d_27:;
wr(s->u,27,1,(rd(s->u,26,1)&rd(s->r,519,1)));
L_1803fbe0d_28:;
wr(s->u,28,1,(rd(s->u,24,1)&rd(s->u,25,1)));
L_1803fbe0d_29:;
wr(s->r,519,1,(rd(s->u,27,1)|rd(s->u,28,1)));
L_1803fbe0d_30:;
wr(s->u,29,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fbe0d_31:;
wr(s->u,30,1,(!rd(s->u,24,1)));
L_1803fbe0d_32:;
wr(s->u,31,1,(rd(s->u,30,1)&rd(s->r,518,1)));
L_1803fbe0d_33:;
wr(s->u,32,1,(rd(s->u,24,1)&rd(s->u,29,1)));
L_1803fbe0d_34:;
wr(s->r,518,1,(rd(s->u,31,1)|rd(s->u,32,1)));
L_1803fbe0d_35:;
wr(s->u,33,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fbe0d_36:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803fbe0d_37:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803fbe0d_38:;
wr(s->u,39,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803fbe0d_39:;
wr(s->u,40,1,(!rd(s->u,24,1)));
L_1803fbe0d_40:;
wr(s->u,41,1,(rd(s->u,40,1)&rd(s->r,514,1)));
L_1803fbe0d_41:;
wr(s->u,42,1,(rd(s->u,24,1)&rd(s->u,39,1)));
L_1803fbe0d_42:;
wr(s->r,514,1,(rd(s->u,41,1)|rd(s->u,42,1)));
L_1803fbe0d_43:;
/* 1803fbe10: movsxd rax, edx */
L_1803fbe10_0:;
L_1803fbe10_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803fbe10_2:;
/* 1803fbe13: lea r9, [rax + 8] */
L_1803fbe13_0:;
L_1803fbe13_1:;
wr(s->u,5,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803fbe13_2:;
wr(s->r,136,8,rd(s->u,5,8));
L_1803fbe13_3:;
/* 1803fbe17: cmp r8, r9 */
L_1803fbe17_0:;
L_1803fbe17_1:;
wr(s->u,59,8,rd(s->r,136,8));
L_1803fbe17_2:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->u,59,8)));
L_1803fbe17_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->u,59,8),8,1));
L_1803fbe17_4:;
wr(s->u,67,8,(rd(s->r,128,8)-rd(s->u,59,8)));
L_1803fbe17_5:;
wr(s->r,519,1,(sx(rd(s->u,67,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbe17_6:;
wr(s->r,518,1,(rd(s->u,67,8)==((U)UINT64_C(0x0))));
L_1803fbe17_7:;
wr(s->u,14,8,(rd(s->u,67,8)&((U)UINT64_C(0xff))));
L_1803fbe17_8:;
wr(s->u,22,1,pop(rd(s->u,14,8),8));
L_1803fbe17_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fbe17_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fbe17_11:;
/* 1803fbe1a: jl 0x1803fbeeb */
L_1803fbe1a_0:;
L_1803fbe1a_1:;
wr(s->u,13,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbe1a_2:;
if(rd(s->u,13,1)){return UINT64_C(0x1803fbeeb);}
L_1803fbe1a_3:;
return UINT64_C(0x1803fbe20);
}
uint64_t b_1803fbe10(CPU*s){
/* 1803fbe10: movsxd rax, edx */
L_1803fbe10_0:;
L_1803fbe10_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803fbe10_2:;
/* 1803fbe13: lea r9, [rax + 8] */
L_1803fbe13_0:;
L_1803fbe13_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803fbe13_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1803fbe13_3:;
/* 1803fbe17: cmp r8, r9 */
L_1803fbe17_0:;
L_1803fbe17_1:;
wr(s->u,19,8,rd(s->r,136,8));
L_1803fbe17_2:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->u,19,8)));
L_1803fbe17_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->u,19,8),8,1));
L_1803fbe17_4:;
wr(s->u,27,8,(rd(s->r,128,8)-rd(s->u,19,8)));
L_1803fbe17_5:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbe17_6:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803fbe17_7:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803fbe17_8:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fbe17_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fbe17_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fbe17_11:;
/* 1803fbe1a: jl 0x1803fbeeb */
L_1803fbe1a_0:;
L_1803fbe1a_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbe1a_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803fbeeb);}
L_1803fbe1a_3:;
return UINT64_C(0x1803fbe20);
}
uint64_t b_1803fbe20(CPU*s){
/* 1803fbe20: mov r9d, r8d */
L_1803fbe20_0:;
L_1803fbe20_1:;
wr(s->r,136,4,rd(s->r,128,4));
L_1803fbe20_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fbe20_3:;
/* 1803fbe23: neg edx */
L_1803fbe23_0:;
L_1803fbe23_1:;
wr(s->r,512,1,(rd(s->r,16,4)!=((U)UINT64_C(0x0))));
L_1803fbe23_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,16,4),4,1));
L_1803fbe23_3:;
wr(s->r,16,4,(-rd(s->r,16,4)));
L_1803fbe23_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbe23_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fbe23_6:;
wr(s->u,7,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fbe23_7:;
wr(s->u,15,1,pop(rd(s->u,7,4),4));
L_1803fbe23_8:;
wr(s->u,16,1,(rd(s->u,15,1)&((U)UINT64_C(0x1))));
L_1803fbe23_9:;
wr(s->r,514,1,(rd(s->u,16,1)==((U)UINT64_C(0x0))));
L_1803fbe23_10:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fbe23_11:;
/* 1803fbe25: add edx, r9d */
L_1803fbe25_0:;
L_1803fbe25_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->r,136,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803fbe25_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->r,136,4),4,0));
L_1803fbe25_3:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->r,136,4)));
L_1803fbe25_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fbe25_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbe25_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fbe25_7:;
wr(s->u,7,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fbe25_8:;
wr(s->u,15,1,pop(rd(s->u,7,4),4));
L_1803fbe25_9:;
wr(s->u,16,1,(rd(s->u,15,1)&((U)UINT64_C(0x1))));
L_1803fbe25_10:;
wr(s->r,514,1,(rd(s->u,16,1)==((U)UINT64_C(0x0))));
L_1803fbe25_11:;
/* 1803fbe28: and edx, 7 */
L_1803fbe28_0:;
L_1803fbe28_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbe28_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbe28_3:;
wr(s->r,16,4,(rd(s->r,16,4)&((U)UINT64_C(0x7))));
L_1803fbe28_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fbe28_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbe28_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fbe28_7:;
wr(s->u,7,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fbe28_8:;
wr(s->u,15,1,pop(rd(s->u,7,4),4));
L_1803fbe28_9:;
wr(s->u,16,1,(rd(s->u,15,1)&((U)UINT64_C(0x1))));
L_1803fbe28_10:;
wr(s->r,514,1,(rd(s->u,16,1)==((U)UINT64_C(0x0))));
L_1803fbe28_11:;
/* 1803fbe2b: sub r9d, edx */
L_1803fbe2b_0:;
L_1803fbe2b_1:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->r,16,4)));
L_1803fbe2b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->r,16,4),4,1));
L_1803fbe2b_3:;
wr(s->r,136,4,(rd(s->r,136,4)-rd(s->r,16,4)));
L_1803fbe2b_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fbe2b_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbe2b_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803fbe2b_7:;
wr(s->u,7,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803fbe2b_8:;
wr(s->u,15,1,pop(rd(s->u,7,4),4));
L_1803fbe2b_9:;
wr(s->u,16,1,(rd(s->u,15,1)&((U)UINT64_C(0x1))));
L_1803fbe2b_10:;
wr(s->r,514,1,(rd(s->u,16,1)==((U)UINT64_C(0x0))));
L_1803fbe2b_11:;
/* 1803fbe2e: movsxd rdx, r9d */
L_1803fbe2e_0:;
L_1803fbe2e_1:;
wr(s->r,16,8,(U)sx(rd(s->r,136,4),4));
L_1803fbe2e_2:;
/* 1803fbe31: xor r10d, r10d */
L_1803fbe31_0:;
L_1803fbe31_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbe31_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbe31_3:;
wr(s->r,144,4,(rd(s->r,144,4)^rd(s->r,144,4)));
L_1803fbe31_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fbe31_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbe31_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fbe31_7:;
wr(s->u,7,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fbe31_8:;
wr(s->u,15,1,pop(rd(s->u,7,4),4));
L_1803fbe31_9:;
wr(s->u,16,1,(rd(s->u,15,1)&((U)UINT64_C(0x1))));
L_1803fbe31_10:;
wr(s->r,514,1,(rd(s->u,16,1)==((U)UINT64_C(0x0))));
L_1803fbe31_11:;
/* 1803fbe34: mov r9, rax */
L_1803fbe34_0:;
L_1803fbe34_1:;
wr(s->r,136,8,rd(s->r,0,8));
L_1803fbe34_2:;
/* 1803fbe37: shl r9, 2 */
L_1803fbe37_0:;
L_1803fbe37_1:;
wr(s->u,57,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803fbe37_2:;
wr(s->u,61,8,rd(s->r,136,8));
L_1803fbe37_3:;
wr(s->r,136,8,((rd(s->u,57,4)>=64)?0:(rd(s->r,136,8)<<rd(s->u,57,4))));
L_1803fbe37_4:;
wr(s->u,40,1,(rd(s->u,57,4)==((U)UINT64_C(0x0))));
L_1803fbe37_5:;
wr(s->u,41,4,(rd(s->u,57,4)-((U)UINT64_C(0x1))));
L_1803fbe37_6:;
wr(s->u,45,8,((rd(s->u,41,4)>=64)?0:(rd(s->u,61,8)<<rd(s->u,41,4))));
L_1803fbe37_7:;
wr(s->u,53,1,(sx(rd(s->u,45,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbe37_8:;
wr(s->u,0,1,rd(s->u,40,1));
L_1803fbe37_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fbe37_10:;
wr(s->u,2,1,(!rd(s->u,40,1)));
L_1803fbe37_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbe37_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,53,1)));
L_1803fbe37_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbe37_14:;
wr(s->u,54,1,(rd(s->u,57,4)==((U)UINT64_C(0x1))));
L_1803fbe37_15:;
wr(s->u,55,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbe37_16:;
wr(s->u,56,1,(rd(s->r,512,1)^rd(s->u,55,1)));
L_1803fbe37_17:;
wr(s->u,0,1,rd(s->u,54,1));
L_1803fbe37_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,56,1)));
L_1803fbe37_19:;
wr(s->u,2,1,(!rd(s->u,54,1)));
L_1803fbe37_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbe37_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fbe37_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbe37_23:;
wr(s->u,17,1,(rd(s->u,57,4)!=((U)UINT64_C(0x0))));
L_1803fbe37_24:;
wr(s->u,18,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbe37_25:;
wr(s->u,19,1,(!rd(s->u,17,1)));
L_1803fbe37_26:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,519,1)));
L_1803fbe37_27:;
wr(s->u,21,1,(rd(s->u,17,1)&rd(s->u,18,1)));
L_1803fbe37_28:;
wr(s->r,519,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803fbe37_29:;
wr(s->u,22,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fbe37_30:;
wr(s->u,23,1,(!rd(s->u,17,1)));
L_1803fbe37_31:;
wr(s->u,24,1,(rd(s->u,23,1)&rd(s->r,518,1)));
L_1803fbe37_32:;
wr(s->u,25,1,(rd(s->u,17,1)&rd(s->u,22,1)));
L_1803fbe37_33:;
wr(s->r,518,1,(rd(s->u,24,1)|rd(s->u,25,1)));
L_1803fbe37_34:;
wr(s->u,26,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fbe37_35:;
wr(s->u,34,1,pop(rd(s->u,26,8),8));
L_1803fbe37_36:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803fbe37_37:;
wr(s->u,36,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803fbe37_38:;
wr(s->u,37,1,(!rd(s->u,17,1)));
L_1803fbe37_39:;
wr(s->u,38,1,(rd(s->u,37,1)&rd(s->r,514,1)));
L_1803fbe37_40:;
wr(s->u,39,1,(rd(s->u,17,1)&rd(s->u,36,1)));
L_1803fbe37_41:;
wr(s->r,514,1,(rd(s->u,38,1)|rd(s->u,39,1)));
L_1803fbe37_42:;
/* 1803fbe3b: test rax, rax */
L_1803fbe3b_0:;
L_1803fbe3b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbe3b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbe3b_3:;
wr(s->u,69,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803fbe3b_4:;
wr(s->r,519,1,(sx(rd(s->u,69,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbe3b_5:;
wr(s->r,518,1,(rd(s->u,69,8)==((U)UINT64_C(0x0))));
L_1803fbe3b_6:;
wr(s->u,7,8,(rd(s->u,69,8)&((U)UINT64_C(0xff))));
L_1803fbe3b_7:;
wr(s->u,15,1,pop(rd(s->u,7,8),8));
L_1803fbe3b_8:;
wr(s->u,16,1,(rd(s->u,15,1)&((U)UINT64_C(0x1))));
L_1803fbe3b_9:;
wr(s->r,514,1,(rd(s->u,16,1)==((U)UINT64_C(0x0))));
L_1803fbe3b_10:;
/* 1803fbe3e: jle 0x1803fbe56 */
L_1803fbe3e_0:;
L_1803fbe3e_1:;
wr(s->u,5,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbe3e_2:;
wr(s->u,6,1,((rd(s->r,518,1)!=0)||(rd(s->u,5,1)!=0)));
L_1803fbe3e_3:;
if(rd(s->u,6,1)){return UINT64_C(0x1803fbe56);}
L_1803fbe3e_4:;
return UINT64_C(0x1803fbe40);
}
uint64_t b_1803fbe40(CPU*s){
/* 1803fbe40: comiss xmm2, dword ptr [r10 + rcx] */
L_1803fbe40_0:;
L_1803fbe40_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803fbe40_2:;
wr(s->u,8,8,(rd(s->r,144,8)+rd(s->u,0,8)));
L_1803fbe40_3:;
wr(s->u,21,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803fbe40_4:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fbe40_5:;
wr(s->u,22,1,isnan(fv(rd(s->u,16,4),4)));
L_1803fbe40_6:;
wr(s->r,514,1,((rd(s->u,21,1)!=0)||(rd(s->u,22,1)!=0)));
L_1803fbe40_7:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fbe40_8:;
wr(s->u,23,1,(fv(rd(s->r,4736,4),4)==fv(rd(s->u,16,4),4)));
L_1803fbe40_9:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,23,1)));
L_1803fbe40_10:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fbe40_11:;
wr(s->u,24,1,(fv(rd(s->r,4736,4),4)<fv(rd(s->u,16,4),4)));
L_1803fbe40_12:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,24,1)));
L_1803fbe40_13:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbe40_14:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fbe40_15:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fbe40_16:;
/* 1803fbe45: jbe 0x1803fbe4d */
L_1803fbe45_0:;
L_1803fbe45_1:;
wr(s->u,20,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fbe45_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fbe4d);}
L_1803fbe45_3:;
return UINT64_C(0x1803fbe47);
}
uint64_t b_1803fbe47(CPU*s){
/* 1803fbe47: movss dword ptr [r10 + rcx], xmm3 */
L_1803fbe47_0:;
L_1803fbe47_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803fbe47_2:;
wr(s->u,8,8,(rd(s->r,144,8)+rd(s->u,0,8)));
L_1803fbe47_3:;
wr(s->u,16,4,rd(s->r,4800,4));
L_1803fbe47_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fbe47_5:;
/* 1803fbe4d: add r10, 4 */
L_1803fbe4d_0:;
L_1803fbe4d_1:;
wr(s->r,512,1,(((rd(s->r,144,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,144,8)));
L_1803fbe4d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x4)),8,0));
L_1803fbe4d_3:;
wr(s->r,144,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803fbe4d_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbe4d_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803fbe4d_6:;
wr(s->u,21,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803fbe4d_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fbe4d_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fbe4d_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fbe4d_10:;
/* 1803fbe51: cmp r10, r9 */
L_1803fbe51_0:;
L_1803fbe51_1:;
wr(s->u,31,8,rd(s->r,136,8));
L_1803fbe51_2:;
wr(s->r,512,1,(rd(s->r,144,8)<rd(s->u,31,8)));
L_1803fbe51_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->u,31,8),8,1));
L_1803fbe51_4:;
wr(s->u,39,8,(rd(s->r,144,8)-rd(s->u,31,8)));
L_1803fbe51_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbe51_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fbe51_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fbe51_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fbe51_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fbe51_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fbe51_11:;
/* 1803fbe54: jl 0x1803fbe40 */
L_1803fbe54_0:;
L_1803fbe54_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbe54_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fbe40);}
L_1803fbe54_3:;
return UINT64_C(0x1803fbe56);
}
uint64_t b_1803fbe4d(CPU*s){
/* 1803fbe4d: add r10, 4 */
L_1803fbe4d_0:;
L_1803fbe4d_1:;
wr(s->r,512,1,(((rd(s->r,144,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,144,8)));
L_1803fbe4d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x4)),8,0));
L_1803fbe4d_3:;
wr(s->r,144,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803fbe4d_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbe4d_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803fbe4d_6:;
wr(s->u,1,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803fbe4d_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fbe4d_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fbe4d_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fbe4d_10:;
/* 1803fbe51: cmp r10, r9 */
L_1803fbe51_0:;
L_1803fbe51_1:;
wr(s->u,11,8,rd(s->r,136,8));
L_1803fbe51_2:;
wr(s->r,512,1,(rd(s->r,144,8)<rd(s->u,11,8)));
L_1803fbe51_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->u,11,8),8,1));
L_1803fbe51_4:;
wr(s->u,19,8,(rd(s->r,144,8)-rd(s->u,11,8)));
L_1803fbe51_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbe51_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fbe51_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fbe51_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fbe51_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fbe51_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fbe51_11:;
/* 1803fbe54: jl 0x1803fbe40 */
L_1803fbe54_0:;
L_1803fbe54_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbe54_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fbe40);}
L_1803fbe54_3:;
return UINT64_C(0x1803fbe56);
}
uint64_t b_1803fbe56(CPU*s){
/* 1803fbe56: movaps xmmword ptr [rsp + 0x20], xmm6 */
L_1803fbe56_0:;
L_1803fbe56_1:;
wr(s->u,24,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fbe56_2:;
wr(s->u,32,16,rd(s->r,4992,16));
L_1803fbe56_3:;
mw((uint64_t)rd(s->u,24,8),16,rd(s->u,32,16));
L_1803fbe56_4:;
/* 1803fbe5b: lea r9, [rcx + rax*4] */
L_1803fbe5b_0:;
L_1803fbe5b_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fbe5b_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803fbe5b_3:;
wr(s->r,136,8,rd(s->u,16,8));
L_1803fbe5b_4:;
/* 1803fbe5f: lea rax, [rcx + rdx*4] */
L_1803fbe5f_0:;
L_1803fbe5f_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803fbe5f_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803fbe5f_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803fbe5f_4:;
/* 1803fbe63: movaps xmm1, xmm2 */
L_1803fbe63_0:;
L_1803fbe63_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803fbe63_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803fbe63_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803fbe63_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803fbe63_5:;
/* 1803fbe66: unpcklps xmm1, xmm1 */
L_1803fbe66_0:;
L_1803fbe66_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803fbe66_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803fbe66_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803fbe66_4:;
/* 1803fbe69: unpcklps xmm1, xmm1 */
L_1803fbe69_0:;
L_1803fbe69_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803fbe69_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803fbe69_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803fbe69_4:;
/* 1803fbe6c: movaps xmm0, xmm3 */
L_1803fbe6c_0:;
L_1803fbe6c_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fbe6c_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fbe6c_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fbe6c_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fbe6c_5:;
/* 1803fbe6f: unpcklps xmm0, xmm0 */
L_1803fbe6f_0:;
L_1803fbe6f_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803fbe6f_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803fbe6f_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803fbe6f_4:;
/* 1803fbe72: unpcklps xmm0, xmm0 */
L_1803fbe72_0:;
L_1803fbe72_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803fbe72_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803fbe72_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803fbe72_4:;
/* 1803fbe75: movaps xmm4, xmmword ptr [r9] */
L_1803fbe75_0:;
L_1803fbe75_1:;
wr(s->u,32,16,mr((uint64_t)rd(s->r,136,8),16));
L_1803fbe75_2:;
wr(s->u,111,16,rd(s->u,32,16));
L_1803fbe75_3:;
wr(s->r,4864,4,rd(s->u,111,4));
L_1803fbe75_4:;
wr(s->r,4868,4,rd(s->u,115,4));
L_1803fbe75_5:;
wr(s->r,4872,4,rd(s->u,119,4));
L_1803fbe75_6:;
wr(s->r,4876,4,rd(s->u,123,4));
L_1803fbe75_7:;
/* 1803fbe79: movaps xmm6, xmm0 */
L_1803fbe79_0:;
L_1803fbe79_1:;
wr(s->r,4992,4,rd(s->r,4608,4));
L_1803fbe79_2:;
wr(s->r,4996,4,rd(s->r,4612,4));
L_1803fbe79_3:;
wr(s->r,5000,4,rd(s->r,4616,4));
L_1803fbe79_4:;
wr(s->r,5004,4,rd(s->r,4620,4));
L_1803fbe79_5:;
/* 1803fbe7c: movaps xmm5, xmm4 */
L_1803fbe7c_0:;
L_1803fbe7c_1:;
wr(s->r,4928,4,rd(s->r,4864,4));
L_1803fbe7c_2:;
wr(s->r,4932,4,rd(s->r,4868,4));
L_1803fbe7c_3:;
wr(s->r,4936,4,rd(s->r,4872,4));
L_1803fbe7c_4:;
wr(s->r,4940,4,rd(s->r,4876,4));
L_1803fbe7c_5:;
/* 1803fbe7f: cmpltps xmm5, xmm1 */
L_1803fbe7f_0:;
L_1803fbe7f_1:;
wr(s->r,4480,4,rd(s->r,4928,4));
L_1803fbe7f_2:;
wr(s->r,4484,4,rd(s->r,4932,4));
L_1803fbe7f_3:;
wr(s->r,4488,4,rd(s->r,4936,4));
L_1803fbe7f_4:;
wr(s->r,4492,4,rd(s->r,4940,4));
L_1803fbe7f_5:;
wr(s->r,4496,4,rd(s->r,4672,4));
L_1803fbe7f_6:;
wr(s->r,4500,4,rd(s->r,4676,4));
L_1803fbe7f_7:;
wr(s->r,4504,4,rd(s->r,4680,4));
L_1803fbe7f_8:;
wr(s->r,4508,4,rd(s->r,4684,4));
L_1803fbe7f_9:;
wr(s->u,91,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803fbe7f_10:;
wr(s->u,92,4,rd(s->u,91,1));
L_1803fbe7f_11:;
wr(s->r,4480,4,(rd(s->u,92,4)*((U)UINT64_C(0xffffffff))));
L_1803fbe7f_12:;
wr(s->u,96,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803fbe7f_13:;
wr(s->u,97,4,rd(s->u,96,1));
L_1803fbe7f_14:;
wr(s->r,4484,4,(rd(s->u,97,4)*((U)UINT64_C(0xffffffff))));
L_1803fbe7f_15:;
wr(s->u,101,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803fbe7f_16:;
wr(s->u,102,4,rd(s->u,101,1));
L_1803fbe7f_17:;
wr(s->r,4488,4,(rd(s->u,102,4)*((U)UINT64_C(0xffffffff))));
L_1803fbe7f_18:;
wr(s->u,106,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803fbe7f_19:;
wr(s->u,107,4,rd(s->u,106,1));
L_1803fbe7f_20:;
wr(s->r,4492,4,(rd(s->u,107,4)*((U)UINT64_C(0xffffffff))));
L_1803fbe7f_21:;
wr(s->r,4928,4,rd(s->r,4480,4));
L_1803fbe7f_22:;
wr(s->r,4932,4,rd(s->r,4484,4));
L_1803fbe7f_23:;
wr(s->r,4936,4,rd(s->r,4488,4));
L_1803fbe7f_24:;
wr(s->r,4940,4,rd(s->r,4492,4));
L_1803fbe7f_25:;
/* 1803fbe83: andps xmm6, xmm5 */
L_1803fbe83_0:;
L_1803fbe83_1:;
wr(s->r,4992,4,(rd(s->r,4992,4)&rd(s->r,4928,4)));
L_1803fbe83_2:;
wr(s->r,4996,4,(rd(s->r,4996,4)&rd(s->r,4932,4)));
L_1803fbe83_3:;
wr(s->r,5000,4,(rd(s->r,5000,4)&rd(s->r,4936,4)));
L_1803fbe83_4:;
wr(s->r,5004,4,(rd(s->r,5004,4)&rd(s->r,4940,4)));
L_1803fbe83_5:;
/* 1803fbe86: andnps xmm5, xmm4 */
L_1803fbe86_0:;
L_1803fbe86_1:;
wr(s->u,75,4,(~rd(s->r,4928,4)));
L_1803fbe86_2:;
wr(s->r,4928,4,(rd(s->u,75,4)&rd(s->r,4864,4)));
L_1803fbe86_3:;
wr(s->u,79,4,(~rd(s->r,4932,4)));
L_1803fbe86_4:;
wr(s->r,4932,4,(rd(s->u,79,4)&rd(s->r,4868,4)));
L_1803fbe86_5:;
wr(s->u,83,4,(~rd(s->r,4936,4)));
L_1803fbe86_6:;
wr(s->r,4936,4,(rd(s->u,83,4)&rd(s->r,4872,4)));
L_1803fbe86_7:;
wr(s->u,87,4,(~rd(s->r,4940,4)));
L_1803fbe86_8:;
wr(s->r,4940,4,(rd(s->u,87,4)&rd(s->r,4876,4)));
L_1803fbe86_9:;
/* 1803fbe89: movaps xmm4, xmmword ptr [r9 + 0x10] */
L_1803fbe89_0:;
L_1803fbe89_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x10))));
L_1803fbe89_2:;
wr(s->u,32,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fbe89_3:;
wr(s->u,111,16,rd(s->u,32,16));
L_1803fbe89_4:;
wr(s->r,4864,4,rd(s->u,111,4));
L_1803fbe89_5:;
wr(s->r,4868,4,rd(s->u,115,4));
L_1803fbe89_6:;
wr(s->r,4872,4,rd(s->u,119,4));
L_1803fbe89_7:;
wr(s->r,4876,4,rd(s->u,123,4));
L_1803fbe89_8:;
/* 1803fbe8e: orps xmm6, xmm5 */
L_1803fbe8e_0:;
L_1803fbe8e_1:;
wr(s->r,4992,16,(rd(s->r,4992,16)|rd(s->r,4928,16)));
L_1803fbe8e_2:;
/* 1803fbe91: movaps xmmword ptr [r9], xmm6 */
L_1803fbe91_0:;
L_1803fbe91_1:;
wr(s->u,32,16,rd(s->r,4992,16));
L_1803fbe91_2:;
mw((uint64_t)rd(s->r,136,8),16,rd(s->u,32,16));
L_1803fbe91_3:;
/* 1803fbe95: movaps xmm5, xmm4 */
L_1803fbe95_0:;
L_1803fbe95_1:;
wr(s->r,4928,4,rd(s->r,4864,4));
L_1803fbe95_2:;
wr(s->r,4932,4,rd(s->r,4868,4));
L_1803fbe95_3:;
wr(s->r,4936,4,rd(s->r,4872,4));
L_1803fbe95_4:;
wr(s->r,4940,4,rd(s->r,4876,4));
L_1803fbe95_5:;
/* 1803fbe98: movaps xmm6, xmm0 */
L_1803fbe98_0:;
L_1803fbe98_1:;
wr(s->r,4992,4,rd(s->r,4608,4));
L_1803fbe98_2:;
wr(s->r,4996,4,rd(s->r,4612,4));
L_1803fbe98_3:;
wr(s->r,5000,4,rd(s->r,4616,4));
L_1803fbe98_4:;
wr(s->r,5004,4,rd(s->r,4620,4));
L_1803fbe98_5:;
/* 1803fbe9b: cmpltps xmm5, xmm1 */
L_1803fbe9b_0:;
L_1803fbe9b_1:;
wr(s->r,4480,4,rd(s->r,4928,4));
L_1803fbe9b_2:;
wr(s->r,4484,4,rd(s->r,4932,4));
L_1803fbe9b_3:;
wr(s->r,4488,4,rd(s->r,4936,4));
L_1803fbe9b_4:;
wr(s->r,4492,4,rd(s->r,4940,4));
L_1803fbe9b_5:;
wr(s->r,4496,4,rd(s->r,4672,4));
L_1803fbe9b_6:;
wr(s->r,4500,4,rd(s->r,4676,4));
L_1803fbe9b_7:;
wr(s->r,4504,4,rd(s->r,4680,4));
L_1803fbe9b_8:;
wr(s->r,4508,4,rd(s->r,4684,4));
L_1803fbe9b_9:;
wr(s->u,91,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803fbe9b_10:;
wr(s->u,92,4,rd(s->u,91,1));
L_1803fbe9b_11:;
wr(s->r,4480,4,(rd(s->u,92,4)*((U)UINT64_C(0xffffffff))));
L_1803fbe9b_12:;
wr(s->u,96,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803fbe9b_13:;
wr(s->u,97,4,rd(s->u,96,1));
L_1803fbe9b_14:;
wr(s->r,4484,4,(rd(s->u,97,4)*((U)UINT64_C(0xffffffff))));
L_1803fbe9b_15:;
wr(s->u,101,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803fbe9b_16:;
wr(s->u,102,4,rd(s->u,101,1));
L_1803fbe9b_17:;
wr(s->r,4488,4,(rd(s->u,102,4)*((U)UINT64_C(0xffffffff))));
L_1803fbe9b_18:;
wr(s->u,106,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803fbe9b_19:;
wr(s->u,107,4,rd(s->u,106,1));
L_1803fbe9b_20:;
wr(s->r,4492,4,(rd(s->u,107,4)*((U)UINT64_C(0xffffffff))));
L_1803fbe9b_21:;
wr(s->r,4928,4,rd(s->r,4480,4));
L_1803fbe9b_22:;
wr(s->r,4932,4,rd(s->r,4484,4));
L_1803fbe9b_23:;
wr(s->r,4936,4,rd(s->r,4488,4));
L_1803fbe9b_24:;
wr(s->r,4940,4,rd(s->r,4492,4));
L_1803fbe9b_25:;
/* 1803fbe9f: andps xmm6, xmm5 */
L_1803fbe9f_0:;
L_1803fbe9f_1:;
wr(s->r,4992,4,(rd(s->r,4992,4)&rd(s->r,4928,4)));
L_1803fbe9f_2:;
wr(s->r,4996,4,(rd(s->r,4996,4)&rd(s->r,4932,4)));
L_1803fbe9f_3:;
wr(s->r,5000,4,(rd(s->r,5000,4)&rd(s->r,4936,4)));
L_1803fbe9f_4:;
wr(s->r,5004,4,(rd(s->r,5004,4)&rd(s->r,4940,4)));
L_1803fbe9f_5:;
/* 1803fbea2: andnps xmm5, xmm4 */
L_1803fbea2_0:;
L_1803fbea2_1:;
wr(s->u,75,4,(~rd(s->r,4928,4)));
L_1803fbea2_2:;
wr(s->r,4928,4,(rd(s->u,75,4)&rd(s->r,4864,4)));
L_1803fbea2_3:;
wr(s->u,79,4,(~rd(s->r,4932,4)));
L_1803fbea2_4:;
wr(s->r,4932,4,(rd(s->u,79,4)&rd(s->r,4868,4)));
L_1803fbea2_5:;
wr(s->u,83,4,(~rd(s->r,4936,4)));
L_1803fbea2_6:;
wr(s->r,4936,4,(rd(s->u,83,4)&rd(s->r,4872,4)));
L_1803fbea2_7:;
wr(s->u,87,4,(~rd(s->r,4940,4)));
L_1803fbea2_8:;
wr(s->r,4940,4,(rd(s->u,87,4)&rd(s->r,4876,4)));
L_1803fbea2_9:;
/* 1803fbea5: orps xmm6, xmm5 */
L_1803fbea5_0:;
L_1803fbea5_1:;
wr(s->r,4992,16,(rd(s->r,4992,16)|rd(s->r,4928,16)));
L_1803fbea5_2:;
/* 1803fbea8: movaps xmmword ptr [r9 + 0x10], xmm6 */
L_1803fbea8_0:;
L_1803fbea8_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x10))));
L_1803fbea8_2:;
wr(s->u,32,16,rd(s->r,4992,16));
L_1803fbea8_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,32,16));
L_1803fbea8_4:;
/* 1803fbead: add r9, 0x20 */
L_1803fbead_0:;
L_1803fbead_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803fbead_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x20)),8,0));
L_1803fbead_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x20))));
L_1803fbead_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbead_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fbead_6:;
wr(s->u,49,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fbead_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803fbead_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803fbead_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803fbead_10:;
/* 1803fbeb1: cmp r9, rax */
L_1803fbeb1_0:;
L_1803fbeb1_1:;
wr(s->u,59,8,rd(s->r,0,8));
L_1803fbeb1_2:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->u,59,8)));
L_1803fbeb1_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->u,59,8),8,1));
L_1803fbeb1_4:;
wr(s->u,67,8,(rd(s->r,136,8)-rd(s->u,59,8)));
L_1803fbeb1_5:;
wr(s->r,519,1,(sx(rd(s->u,67,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbeb1_6:;
wr(s->r,518,1,(rd(s->u,67,8)==((U)UINT64_C(0x0))));
L_1803fbeb1_7:;
wr(s->u,49,8,(rd(s->u,67,8)&((U)UINT64_C(0xff))));
L_1803fbeb1_8:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803fbeb1_9:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803fbeb1_10:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803fbeb1_11:;
/* 1803fbeb4: jl 0x1803fbe75 */
L_1803fbeb4_0:;
L_1803fbeb4_1:;
wr(s->u,48,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbeb4_2:;
if(rd(s->u,48,1)){goto L_1803fbe75_0;}
L_1803fbeb4_3:;
return UINT64_C(0x1803fbeb6);
}
uint64_t b_1803fbe75(CPU*s){
/* 1803fbe75: movaps xmm4, xmmword ptr [r9] */
L_1803fbe75_0:;
L_1803fbe75_1:;
wr(s->u,8,16,mr((uint64_t)rd(s->r,136,8),16));
L_1803fbe75_2:;
wr(s->u,87,16,rd(s->u,8,16));
L_1803fbe75_3:;
wr(s->r,4864,4,rd(s->u,87,4));
L_1803fbe75_4:;
wr(s->r,4868,4,rd(s->u,91,4));
L_1803fbe75_5:;
wr(s->r,4872,4,rd(s->u,95,4));
L_1803fbe75_6:;
wr(s->r,4876,4,rd(s->u,99,4));
L_1803fbe75_7:;
/* 1803fbe79: movaps xmm6, xmm0 */
L_1803fbe79_0:;
L_1803fbe79_1:;
wr(s->r,4992,4,rd(s->r,4608,4));
L_1803fbe79_2:;
wr(s->r,4996,4,rd(s->r,4612,4));
L_1803fbe79_3:;
wr(s->r,5000,4,rd(s->r,4616,4));
L_1803fbe79_4:;
wr(s->r,5004,4,rd(s->r,4620,4));
L_1803fbe79_5:;
/* 1803fbe7c: movaps xmm5, xmm4 */
L_1803fbe7c_0:;
L_1803fbe7c_1:;
wr(s->r,4928,4,rd(s->r,4864,4));
L_1803fbe7c_2:;
wr(s->r,4932,4,rd(s->r,4868,4));
L_1803fbe7c_3:;
wr(s->r,4936,4,rd(s->r,4872,4));
L_1803fbe7c_4:;
wr(s->r,4940,4,rd(s->r,4876,4));
L_1803fbe7c_5:;
/* 1803fbe7f: cmpltps xmm5, xmm1 */
L_1803fbe7f_0:;
L_1803fbe7f_1:;
wr(s->r,4480,4,rd(s->r,4928,4));
L_1803fbe7f_2:;
wr(s->r,4484,4,rd(s->r,4932,4));
L_1803fbe7f_3:;
wr(s->r,4488,4,rd(s->r,4936,4));
L_1803fbe7f_4:;
wr(s->r,4492,4,rd(s->r,4940,4));
L_1803fbe7f_5:;
wr(s->r,4496,4,rd(s->r,4672,4));
L_1803fbe7f_6:;
wr(s->r,4500,4,rd(s->r,4676,4));
L_1803fbe7f_7:;
wr(s->r,4504,4,rd(s->r,4680,4));
L_1803fbe7f_8:;
wr(s->r,4508,4,rd(s->r,4684,4));
L_1803fbe7f_9:;
wr(s->u,67,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803fbe7f_10:;
wr(s->u,68,4,rd(s->u,67,1));
L_1803fbe7f_11:;
wr(s->r,4480,4,(rd(s->u,68,4)*((U)UINT64_C(0xffffffff))));
L_1803fbe7f_12:;
wr(s->u,72,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803fbe7f_13:;
wr(s->u,73,4,rd(s->u,72,1));
L_1803fbe7f_14:;
wr(s->r,4484,4,(rd(s->u,73,4)*((U)UINT64_C(0xffffffff))));
L_1803fbe7f_15:;
wr(s->u,77,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803fbe7f_16:;
wr(s->u,78,4,rd(s->u,77,1));
L_1803fbe7f_17:;
wr(s->r,4488,4,(rd(s->u,78,4)*((U)UINT64_C(0xffffffff))));
L_1803fbe7f_18:;
wr(s->u,82,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803fbe7f_19:;
wr(s->u,83,4,rd(s->u,82,1));
L_1803fbe7f_20:;
wr(s->r,4492,4,(rd(s->u,83,4)*((U)UINT64_C(0xffffffff))));
L_1803fbe7f_21:;
wr(s->r,4928,4,rd(s->r,4480,4));
L_1803fbe7f_22:;
wr(s->r,4932,4,rd(s->r,4484,4));
L_1803fbe7f_23:;
wr(s->r,4936,4,rd(s->r,4488,4));
L_1803fbe7f_24:;
wr(s->r,4940,4,rd(s->r,4492,4));
L_1803fbe7f_25:;
/* 1803fbe83: andps xmm6, xmm5 */
L_1803fbe83_0:;
L_1803fbe83_1:;
wr(s->r,4992,4,(rd(s->r,4992,4)&rd(s->r,4928,4)));
L_1803fbe83_2:;
wr(s->r,4996,4,(rd(s->r,4996,4)&rd(s->r,4932,4)));
L_1803fbe83_3:;
wr(s->r,5000,4,(rd(s->r,5000,4)&rd(s->r,4936,4)));
L_1803fbe83_4:;
wr(s->r,5004,4,(rd(s->r,5004,4)&rd(s->r,4940,4)));
L_1803fbe83_5:;
/* 1803fbe86: andnps xmm5, xmm4 */
L_1803fbe86_0:;
L_1803fbe86_1:;
wr(s->u,51,4,(~rd(s->r,4928,4)));
L_1803fbe86_2:;
wr(s->r,4928,4,(rd(s->u,51,4)&rd(s->r,4864,4)));
L_1803fbe86_3:;
wr(s->u,55,4,(~rd(s->r,4932,4)));
L_1803fbe86_4:;
wr(s->r,4932,4,(rd(s->u,55,4)&rd(s->r,4868,4)));
L_1803fbe86_5:;
wr(s->u,59,4,(~rd(s->r,4936,4)));
L_1803fbe86_6:;
wr(s->r,4936,4,(rd(s->u,59,4)&rd(s->r,4872,4)));
L_1803fbe86_7:;
wr(s->u,63,4,(~rd(s->r,4940,4)));
L_1803fbe86_8:;
wr(s->r,4940,4,(rd(s->u,63,4)&rd(s->r,4876,4)));
L_1803fbe86_9:;
/* 1803fbe89: movaps xmm4, xmmword ptr [r9 + 0x10] */
L_1803fbe89_0:;
L_1803fbe89_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x10))));
L_1803fbe89_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fbe89_3:;
wr(s->u,87,16,rd(s->u,8,16));
L_1803fbe89_4:;
wr(s->r,4864,4,rd(s->u,87,4));
L_1803fbe89_5:;
wr(s->r,4868,4,rd(s->u,91,4));
L_1803fbe89_6:;
wr(s->r,4872,4,rd(s->u,95,4));
L_1803fbe89_7:;
wr(s->r,4876,4,rd(s->u,99,4));
L_1803fbe89_8:;
/* 1803fbe8e: orps xmm6, xmm5 */
L_1803fbe8e_0:;
L_1803fbe8e_1:;
wr(s->r,4992,16,(rd(s->r,4992,16)|rd(s->r,4928,16)));
L_1803fbe8e_2:;
/* 1803fbe91: movaps xmmword ptr [r9], xmm6 */
L_1803fbe91_0:;
L_1803fbe91_1:;
wr(s->u,8,16,rd(s->r,4992,16));
L_1803fbe91_2:;
mw((uint64_t)rd(s->r,136,8),16,rd(s->u,8,16));
L_1803fbe91_3:;
/* 1803fbe95: movaps xmm5, xmm4 */
L_1803fbe95_0:;
L_1803fbe95_1:;
wr(s->r,4928,4,rd(s->r,4864,4));
L_1803fbe95_2:;
wr(s->r,4932,4,rd(s->r,4868,4));
L_1803fbe95_3:;
wr(s->r,4936,4,rd(s->r,4872,4));
L_1803fbe95_4:;
wr(s->r,4940,4,rd(s->r,4876,4));
L_1803fbe95_5:;
/* 1803fbe98: movaps xmm6, xmm0 */
L_1803fbe98_0:;
L_1803fbe98_1:;
wr(s->r,4992,4,rd(s->r,4608,4));
L_1803fbe98_2:;
wr(s->r,4996,4,rd(s->r,4612,4));
L_1803fbe98_3:;
wr(s->r,5000,4,rd(s->r,4616,4));
L_1803fbe98_4:;
wr(s->r,5004,4,rd(s->r,4620,4));
L_1803fbe98_5:;
/* 1803fbe9b: cmpltps xmm5, xmm1 */
L_1803fbe9b_0:;
L_1803fbe9b_1:;
wr(s->r,4480,4,rd(s->r,4928,4));
L_1803fbe9b_2:;
wr(s->r,4484,4,rd(s->r,4932,4));
L_1803fbe9b_3:;
wr(s->r,4488,4,rd(s->r,4936,4));
L_1803fbe9b_4:;
wr(s->r,4492,4,rd(s->r,4940,4));
L_1803fbe9b_5:;
wr(s->r,4496,4,rd(s->r,4672,4));
L_1803fbe9b_6:;
wr(s->r,4500,4,rd(s->r,4676,4));
L_1803fbe9b_7:;
wr(s->r,4504,4,rd(s->r,4680,4));
L_1803fbe9b_8:;
wr(s->r,4508,4,rd(s->r,4684,4));
L_1803fbe9b_9:;
wr(s->u,67,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803fbe9b_10:;
wr(s->u,68,4,rd(s->u,67,1));
L_1803fbe9b_11:;
wr(s->r,4480,4,(rd(s->u,68,4)*((U)UINT64_C(0xffffffff))));
L_1803fbe9b_12:;
wr(s->u,72,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803fbe9b_13:;
wr(s->u,73,4,rd(s->u,72,1));
L_1803fbe9b_14:;
wr(s->r,4484,4,(rd(s->u,73,4)*((U)UINT64_C(0xffffffff))));
L_1803fbe9b_15:;
wr(s->u,77,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803fbe9b_16:;
wr(s->u,78,4,rd(s->u,77,1));
L_1803fbe9b_17:;
wr(s->r,4488,4,(rd(s->u,78,4)*((U)UINT64_C(0xffffffff))));
L_1803fbe9b_18:;
wr(s->u,82,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803fbe9b_19:;
wr(s->u,83,4,rd(s->u,82,1));
L_1803fbe9b_20:;
wr(s->r,4492,4,(rd(s->u,83,4)*((U)UINT64_C(0xffffffff))));
L_1803fbe9b_21:;
wr(s->r,4928,4,rd(s->r,4480,4));
L_1803fbe9b_22:;
wr(s->r,4932,4,rd(s->r,4484,4));
L_1803fbe9b_23:;
wr(s->r,4936,4,rd(s->r,4488,4));
L_1803fbe9b_24:;
wr(s->r,4940,4,rd(s->r,4492,4));
L_1803fbe9b_25:;
/* 1803fbe9f: andps xmm6, xmm5 */
L_1803fbe9f_0:;
L_1803fbe9f_1:;
wr(s->r,4992,4,(rd(s->r,4992,4)&rd(s->r,4928,4)));
L_1803fbe9f_2:;
wr(s->r,4996,4,(rd(s->r,4996,4)&rd(s->r,4932,4)));
L_1803fbe9f_3:;
wr(s->r,5000,4,(rd(s->r,5000,4)&rd(s->r,4936,4)));
L_1803fbe9f_4:;
wr(s->r,5004,4,(rd(s->r,5004,4)&rd(s->r,4940,4)));
L_1803fbe9f_5:;
/* 1803fbea2: andnps xmm5, xmm4 */
L_1803fbea2_0:;
L_1803fbea2_1:;
wr(s->u,51,4,(~rd(s->r,4928,4)));
L_1803fbea2_2:;
wr(s->r,4928,4,(rd(s->u,51,4)&rd(s->r,4864,4)));
L_1803fbea2_3:;
wr(s->u,55,4,(~rd(s->r,4932,4)));
L_1803fbea2_4:;
wr(s->r,4932,4,(rd(s->u,55,4)&rd(s->r,4868,4)));
L_1803fbea2_5:;
wr(s->u,59,4,(~rd(s->r,4936,4)));
L_1803fbea2_6:;
wr(s->r,4936,4,(rd(s->u,59,4)&rd(s->r,4872,4)));
L_1803fbea2_7:;
wr(s->u,63,4,(~rd(s->r,4940,4)));
L_1803fbea2_8:;
wr(s->r,4940,4,(rd(s->u,63,4)&rd(s->r,4876,4)));
L_1803fbea2_9:;
/* 1803fbea5: orps xmm6, xmm5 */
L_1803fbea5_0:;
L_1803fbea5_1:;
wr(s->r,4992,16,(rd(s->r,4992,16)|rd(s->r,4928,16)));
L_1803fbea5_2:;
/* 1803fbea8: movaps xmmword ptr [r9 + 0x10], xmm6 */
L_1803fbea8_0:;
L_1803fbea8_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x10))));
L_1803fbea8_2:;
wr(s->u,8,16,rd(s->r,4992,16));
L_1803fbea8_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,8,16));
L_1803fbea8_4:;
/* 1803fbead: add r9, 0x20 */
L_1803fbead_0:;
L_1803fbead_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803fbead_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x20)),8,0));
L_1803fbead_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x20))));
L_1803fbead_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbead_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fbead_6:;
wr(s->u,25,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fbead_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fbead_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fbead_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fbead_10:;
/* 1803fbeb1: cmp r9, rax */
L_1803fbeb1_0:;
L_1803fbeb1_1:;
wr(s->u,35,8,rd(s->r,0,8));
L_1803fbeb1_2:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->u,35,8)));
L_1803fbeb1_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->u,35,8),8,1));
L_1803fbeb1_4:;
wr(s->u,43,8,(rd(s->r,136,8)-rd(s->u,35,8)));
L_1803fbeb1_5:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbeb1_6:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1803fbeb1_7:;
wr(s->u,25,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1803fbeb1_8:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fbeb1_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fbeb1_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fbeb1_11:;
/* 1803fbeb4: jl 0x1803fbe75 */
L_1803fbeb4_0:;
L_1803fbeb4_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbeb4_2:;
if(rd(s->u,24,1)){goto L_1803fbe75_0;}
L_1803fbeb4_3:;
return UINT64_C(0x1803fbeb6);
}
uint64_t b_1803fbeb6(CPU*s){
/* 1803fbeb6: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803fbeb6_0:;
L_1803fbeb6_1:;
wr(s->u,5,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fbeb6_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803fbeb6_3:;
wr(s->u,108,16,rd(s->u,13,16));
L_1803fbeb6_4:;
wr(s->r,4992,4,rd(s->u,108,4));
L_1803fbeb6_5:;
wr(s->r,4996,4,rd(s->u,112,4));
L_1803fbeb6_6:;
wr(s->r,5000,4,rd(s->u,116,4));
L_1803fbeb6_7:;
wr(s->r,5004,4,rd(s->u,120,4));
L_1803fbeb6_8:;
/* 1803fbebb: mov r9, rdx */
L_1803fbebb_0:;
L_1803fbebb_1:;
wr(s->r,136,8,rd(s->r,16,8));
L_1803fbebb_2:;
/* 1803fbebe: shl r9, 2 */
L_1803fbebe_0:;
L_1803fbebe_1:;
wr(s->u,96,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803fbebe_2:;
wr(s->u,100,8,rd(s->r,136,8));
L_1803fbebe_3:;
wr(s->r,136,8,((rd(s->u,96,4)>=64)?0:(rd(s->r,136,8)<<rd(s->u,96,4))));
L_1803fbebe_4:;
wr(s->u,63,1,(rd(s->u,96,4)==((U)UINT64_C(0x0))));
L_1803fbebe_5:;
wr(s->u,64,4,(rd(s->u,96,4)-((U)UINT64_C(0x1))));
L_1803fbebe_6:;
wr(s->u,68,8,((rd(s->u,64,4)>=64)?0:(rd(s->u,100,8)<<rd(s->u,64,4))));
L_1803fbebe_7:;
wr(s->u,76,1,(sx(rd(s->u,68,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbebe_8:;
wr(s->u,0,1,rd(s->u,63,1));
L_1803fbebe_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fbebe_10:;
wr(s->u,2,1,(!rd(s->u,63,1)));
L_1803fbebe_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbebe_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,76,1)));
L_1803fbebe_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbebe_14:;
wr(s->u,77,1,(rd(s->u,96,4)==((U)UINT64_C(0x1))));
L_1803fbebe_15:;
wr(s->u,78,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbebe_16:;
wr(s->u,79,1,(rd(s->r,512,1)^rd(s->u,78,1)));
L_1803fbebe_17:;
wr(s->u,0,1,rd(s->u,77,1));
L_1803fbebe_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,79,1)));
L_1803fbebe_19:;
wr(s->u,2,1,(!rd(s->u,77,1)));
L_1803fbebe_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbebe_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fbebe_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbebe_23:;
wr(s->u,40,1,(rd(s->u,96,4)!=((U)UINT64_C(0x0))));
L_1803fbebe_24:;
wr(s->u,41,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbebe_25:;
wr(s->u,42,1,(!rd(s->u,40,1)));
L_1803fbebe_26:;
wr(s->u,43,1,(rd(s->u,42,1)&rd(s->r,519,1)));
L_1803fbebe_27:;
wr(s->u,44,1,(rd(s->u,40,1)&rd(s->u,41,1)));
L_1803fbebe_28:;
wr(s->r,519,1,(rd(s->u,43,1)|rd(s->u,44,1)));
L_1803fbebe_29:;
wr(s->u,45,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fbebe_30:;
wr(s->u,46,1,(!rd(s->u,40,1)));
L_1803fbebe_31:;
wr(s->u,47,1,(rd(s->u,46,1)&rd(s->r,518,1)));
L_1803fbebe_32:;
wr(s->u,48,1,(rd(s->u,40,1)&rd(s->u,45,1)));
L_1803fbebe_33:;
wr(s->r,518,1,(rd(s->u,47,1)|rd(s->u,48,1)));
L_1803fbebe_34:;
wr(s->u,49,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fbebe_35:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803fbebe_36:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803fbebe_37:;
wr(s->u,59,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803fbebe_38:;
wr(s->u,60,1,(!rd(s->u,40,1)));
L_1803fbebe_39:;
wr(s->u,61,1,(rd(s->u,60,1)&rd(s->r,514,1)));
L_1803fbebe_40:;
wr(s->u,62,1,(rd(s->u,40,1)&rd(s->u,59,1)));
L_1803fbebe_41:;
wr(s->r,514,1,(rd(s->u,61,1)|rd(s->u,62,1)));
L_1803fbebe_42:;
/* 1803fbec2: mov rax, r8 */
L_1803fbec2_0:;
L_1803fbec2_1:;
wr(s->r,0,8,rd(s->r,128,8));
L_1803fbec2_2:;
/* 1803fbec5: shl rax, 2 */
L_1803fbec5_0:;
L_1803fbec5_1:;
wr(s->u,96,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803fbec5_2:;
wr(s->u,100,8,rd(s->r,0,8));
L_1803fbec5_3:;
wr(s->r,0,8,((rd(s->u,96,4)>=64)?0:(rd(s->r,0,8)<<rd(s->u,96,4))));
L_1803fbec5_4:;
wr(s->u,63,1,(rd(s->u,96,4)==((U)UINT64_C(0x0))));
L_1803fbec5_5:;
wr(s->u,64,4,(rd(s->u,96,4)-((U)UINT64_C(0x1))));
L_1803fbec5_6:;
wr(s->u,68,8,((rd(s->u,64,4)>=64)?0:(rd(s->u,100,8)<<rd(s->u,64,4))));
L_1803fbec5_7:;
wr(s->u,76,1,(sx(rd(s->u,68,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbec5_8:;
wr(s->u,0,1,rd(s->u,63,1));
L_1803fbec5_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fbec5_10:;
wr(s->u,2,1,(!rd(s->u,63,1)));
L_1803fbec5_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbec5_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,76,1)));
L_1803fbec5_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbec5_14:;
wr(s->u,77,1,(rd(s->u,96,4)==((U)UINT64_C(0x1))));
L_1803fbec5_15:;
wr(s->u,78,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbec5_16:;
wr(s->u,79,1,(rd(s->r,512,1)^rd(s->u,78,1)));
L_1803fbec5_17:;
wr(s->u,0,1,rd(s->u,77,1));
L_1803fbec5_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,79,1)));
L_1803fbec5_19:;
wr(s->u,2,1,(!rd(s->u,77,1)));
L_1803fbec5_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbec5_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fbec5_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbec5_23:;
wr(s->u,40,1,(rd(s->u,96,4)!=((U)UINT64_C(0x0))));
L_1803fbec5_24:;
wr(s->u,41,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbec5_25:;
wr(s->u,42,1,(!rd(s->u,40,1)));
L_1803fbec5_26:;
wr(s->u,43,1,(rd(s->u,42,1)&rd(s->r,519,1)));
L_1803fbec5_27:;
wr(s->u,44,1,(rd(s->u,40,1)&rd(s->u,41,1)));
L_1803fbec5_28:;
wr(s->r,519,1,(rd(s->u,43,1)|rd(s->u,44,1)));
L_1803fbec5_29:;
wr(s->u,45,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fbec5_30:;
wr(s->u,46,1,(!rd(s->u,40,1)));
L_1803fbec5_31:;
wr(s->u,47,1,(rd(s->u,46,1)&rd(s->r,518,1)));
L_1803fbec5_32:;
wr(s->u,48,1,(rd(s->u,40,1)&rd(s->u,45,1)));
L_1803fbec5_33:;
wr(s->r,518,1,(rd(s->u,47,1)|rd(s->u,48,1)));
L_1803fbec5_34:;
wr(s->u,49,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fbec5_35:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803fbec5_36:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803fbec5_37:;
wr(s->u,59,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803fbec5_38:;
wr(s->u,60,1,(!rd(s->u,40,1)));
L_1803fbec5_39:;
wr(s->u,61,1,(rd(s->u,60,1)&rd(s->r,514,1)));
L_1803fbec5_40:;
wr(s->u,62,1,(rd(s->u,40,1)&rd(s->u,59,1)));
L_1803fbec5_41:;
wr(s->r,514,1,(rd(s->u,61,1)|rd(s->u,62,1)));
L_1803fbec5_42:;
/* 1803fbec9: cmp rdx, r8 */
L_1803fbec9_0:;
L_1803fbec9_1:;
wr(s->u,80,8,rd(s->r,128,8));
L_1803fbec9_2:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,80,8)));
L_1803fbec9_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,80,8),8,1));
L_1803fbec9_4:;
wr(s->u,88,8,(rd(s->r,16,8)-rd(s->u,80,8)));
L_1803fbec9_5:;
wr(s->r,519,1,(sx(rd(s->u,88,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbec9_6:;
wr(s->r,518,1,(rd(s->u,88,8)==((U)UINT64_C(0x0))));
L_1803fbec9_7:;
wr(s->u,30,8,(rd(s->u,88,8)&((U)UINT64_C(0xff))));
L_1803fbec9_8:;
wr(s->u,38,1,pop(rd(s->u,30,8),8));
L_1803fbec9_9:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803fbec9_10:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803fbec9_11:;
/* 1803fbecc: jge 0x1803fbee4 */
L_1803fbecc_0:;
L_1803fbecc_1:;
wr(s->u,29,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fbecc_2:;
if(rd(s->u,29,1)){return UINT64_C(0x1803fbee4);}
L_1803fbecc_3:;
return UINT64_C(0x1803fbece);
}
uint64_t b_1803fbebb(CPU*s){
/* 1803fbebb: mov r9, rdx */
L_1803fbebb_0:;
L_1803fbebb_1:;
wr(s->r,136,8,rd(s->r,16,8));
L_1803fbebb_2:;
/* 1803fbebe: shl r9, 2 */
L_1803fbebe_0:;
L_1803fbebe_1:;
wr(s->u,72,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803fbebe_2:;
wr(s->u,76,8,rd(s->r,136,8));
L_1803fbebe_3:;
wr(s->r,136,8,((rd(s->u,72,4)>=64)?0:(rd(s->r,136,8)<<rd(s->u,72,4))));
L_1803fbebe_4:;
wr(s->u,39,1,(rd(s->u,72,4)==((U)UINT64_C(0x0))));
L_1803fbebe_5:;
wr(s->u,40,4,(rd(s->u,72,4)-((U)UINT64_C(0x1))));
L_1803fbebe_6:;
wr(s->u,44,8,((rd(s->u,40,4)>=64)?0:(rd(s->u,76,8)<<rd(s->u,40,4))));
L_1803fbebe_7:;
wr(s->u,52,1,(sx(rd(s->u,44,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbebe_8:;
wr(s->u,0,1,rd(s->u,39,1));
L_1803fbebe_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fbebe_10:;
wr(s->u,2,1,(!rd(s->u,39,1)));
L_1803fbebe_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbebe_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,52,1)));
L_1803fbebe_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbebe_14:;
wr(s->u,53,1,(rd(s->u,72,4)==((U)UINT64_C(0x1))));
L_1803fbebe_15:;
wr(s->u,54,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbebe_16:;
wr(s->u,55,1,(rd(s->r,512,1)^rd(s->u,54,1)));
L_1803fbebe_17:;
wr(s->u,0,1,rd(s->u,53,1));
L_1803fbebe_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,55,1)));
L_1803fbebe_19:;
wr(s->u,2,1,(!rd(s->u,53,1)));
L_1803fbebe_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbebe_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fbebe_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbebe_23:;
wr(s->u,16,1,(rd(s->u,72,4)!=((U)UINT64_C(0x0))));
L_1803fbebe_24:;
wr(s->u,17,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbebe_25:;
wr(s->u,18,1,(!rd(s->u,16,1)));
L_1803fbebe_26:;
wr(s->u,19,1,(rd(s->u,18,1)&rd(s->r,519,1)));
L_1803fbebe_27:;
wr(s->u,20,1,(rd(s->u,16,1)&rd(s->u,17,1)));
L_1803fbebe_28:;
wr(s->r,519,1,(rd(s->u,19,1)|rd(s->u,20,1)));
L_1803fbebe_29:;
wr(s->u,21,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fbebe_30:;
wr(s->u,22,1,(!rd(s->u,16,1)));
L_1803fbebe_31:;
wr(s->u,23,1,(rd(s->u,22,1)&rd(s->r,518,1)));
L_1803fbebe_32:;
wr(s->u,24,1,(rd(s->u,16,1)&rd(s->u,21,1)));
L_1803fbebe_33:;
wr(s->r,518,1,(rd(s->u,23,1)|rd(s->u,24,1)));
L_1803fbebe_34:;
wr(s->u,25,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fbebe_35:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fbebe_36:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fbebe_37:;
wr(s->u,35,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fbebe_38:;
wr(s->u,36,1,(!rd(s->u,16,1)));
L_1803fbebe_39:;
wr(s->u,37,1,(rd(s->u,36,1)&rd(s->r,514,1)));
L_1803fbebe_40:;
wr(s->u,38,1,(rd(s->u,16,1)&rd(s->u,35,1)));
L_1803fbebe_41:;
wr(s->r,514,1,(rd(s->u,37,1)|rd(s->u,38,1)));
L_1803fbebe_42:;
/* 1803fbec2: mov rax, r8 */
L_1803fbec2_0:;
L_1803fbec2_1:;
wr(s->r,0,8,rd(s->r,128,8));
L_1803fbec2_2:;
/* 1803fbec5: shl rax, 2 */
L_1803fbec5_0:;
L_1803fbec5_1:;
wr(s->u,72,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803fbec5_2:;
wr(s->u,76,8,rd(s->r,0,8));
L_1803fbec5_3:;
wr(s->r,0,8,((rd(s->u,72,4)>=64)?0:(rd(s->r,0,8)<<rd(s->u,72,4))));
L_1803fbec5_4:;
wr(s->u,39,1,(rd(s->u,72,4)==((U)UINT64_C(0x0))));
L_1803fbec5_5:;
wr(s->u,40,4,(rd(s->u,72,4)-((U)UINT64_C(0x1))));
L_1803fbec5_6:;
wr(s->u,44,8,((rd(s->u,40,4)>=64)?0:(rd(s->u,76,8)<<rd(s->u,40,4))));
L_1803fbec5_7:;
wr(s->u,52,1,(sx(rd(s->u,44,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbec5_8:;
wr(s->u,0,1,rd(s->u,39,1));
L_1803fbec5_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fbec5_10:;
wr(s->u,2,1,(!rd(s->u,39,1)));
L_1803fbec5_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbec5_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,52,1)));
L_1803fbec5_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbec5_14:;
wr(s->u,53,1,(rd(s->u,72,4)==((U)UINT64_C(0x1))));
L_1803fbec5_15:;
wr(s->u,54,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbec5_16:;
wr(s->u,55,1,(rd(s->r,512,1)^rd(s->u,54,1)));
L_1803fbec5_17:;
wr(s->u,0,1,rd(s->u,53,1));
L_1803fbec5_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,55,1)));
L_1803fbec5_19:;
wr(s->u,2,1,(!rd(s->u,53,1)));
L_1803fbec5_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbec5_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fbec5_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbec5_23:;
wr(s->u,16,1,(rd(s->u,72,4)!=((U)UINT64_C(0x0))));
L_1803fbec5_24:;
wr(s->u,17,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbec5_25:;
wr(s->u,18,1,(!rd(s->u,16,1)));
L_1803fbec5_26:;
wr(s->u,19,1,(rd(s->u,18,1)&rd(s->r,519,1)));
L_1803fbec5_27:;
wr(s->u,20,1,(rd(s->u,16,1)&rd(s->u,17,1)));
L_1803fbec5_28:;
wr(s->r,519,1,(rd(s->u,19,1)|rd(s->u,20,1)));
L_1803fbec5_29:;
wr(s->u,21,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fbec5_30:;
wr(s->u,22,1,(!rd(s->u,16,1)));
L_1803fbec5_31:;
wr(s->u,23,1,(rd(s->u,22,1)&rd(s->r,518,1)));
L_1803fbec5_32:;
wr(s->u,24,1,(rd(s->u,16,1)&rd(s->u,21,1)));
L_1803fbec5_33:;
wr(s->r,518,1,(rd(s->u,23,1)|rd(s->u,24,1)));
L_1803fbec5_34:;
wr(s->u,25,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fbec5_35:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fbec5_36:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fbec5_37:;
wr(s->u,35,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fbec5_38:;
wr(s->u,36,1,(!rd(s->u,16,1)));
L_1803fbec5_39:;
wr(s->u,37,1,(rd(s->u,36,1)&rd(s->r,514,1)));
L_1803fbec5_40:;
wr(s->u,38,1,(rd(s->u,16,1)&rd(s->u,35,1)));
L_1803fbec5_41:;
wr(s->r,514,1,(rd(s->u,37,1)|rd(s->u,38,1)));
L_1803fbec5_42:;
/* 1803fbec9: cmp rdx, r8 */
L_1803fbec9_0:;
L_1803fbec9_1:;
wr(s->u,56,8,rd(s->r,128,8));
L_1803fbec9_2:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,56,8)));
L_1803fbec9_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,56,8),8,1));
L_1803fbec9_4:;
wr(s->u,64,8,(rd(s->r,16,8)-rd(s->u,56,8)));
L_1803fbec9_5:;
wr(s->r,519,1,(sx(rd(s->u,64,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbec9_6:;
wr(s->r,518,1,(rd(s->u,64,8)==((U)UINT64_C(0x0))));
L_1803fbec9_7:;
wr(s->u,6,8,(rd(s->u,64,8)&((U)UINT64_C(0xff))));
L_1803fbec9_8:;
wr(s->u,14,1,pop(rd(s->u,6,8),8));
L_1803fbec9_9:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_1803fbec9_10:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_1803fbec9_11:;
/* 1803fbecc: jge 0x1803fbee4 */
L_1803fbecc_0:;
L_1803fbecc_1:;
wr(s->u,5,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fbecc_2:;
if(rd(s->u,5,1)){return UINT64_C(0x1803fbee4);}
L_1803fbecc_3:;
return UINT64_C(0x1803fbece);
}
uint64_t b_1803fbece(CPU*s){
/* 1803fbece: comiss xmm2, dword ptr [r9 + rcx] */
L_1803fbece_0:;
L_1803fbece_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803fbece_2:;
wr(s->u,8,8,(rd(s->r,136,8)+rd(s->u,0,8)));
L_1803fbece_3:;
wr(s->u,21,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803fbece_4:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fbece_5:;
wr(s->u,22,1,isnan(fv(rd(s->u,16,4),4)));
L_1803fbece_6:;
wr(s->r,514,1,((rd(s->u,21,1)!=0)||(rd(s->u,22,1)!=0)));
L_1803fbece_7:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fbece_8:;
wr(s->u,23,1,(fv(rd(s->r,4736,4),4)==fv(rd(s->u,16,4),4)));
L_1803fbece_9:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,23,1)));
L_1803fbece_10:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fbece_11:;
wr(s->u,24,1,(fv(rd(s->r,4736,4),4)<fv(rd(s->u,16,4),4)));
L_1803fbece_12:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,24,1)));
L_1803fbece_13:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbece_14:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fbece_15:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fbece_16:;
/* 1803fbed3: jbe 0x1803fbedb */
L_1803fbed3_0:;
L_1803fbed3_1:;
wr(s->u,20,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fbed3_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fbedb);}
L_1803fbed3_3:;
return UINT64_C(0x1803fbed5);
}
uint64_t b_1803fbed5(CPU*s){
/* 1803fbed5: movss dword ptr [r9 + rcx], xmm3 */
L_1803fbed5_0:;
L_1803fbed5_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803fbed5_2:;
wr(s->u,8,8,(rd(s->r,136,8)+rd(s->u,0,8)));
L_1803fbed5_3:;
wr(s->u,16,4,rd(s->r,4800,4));
L_1803fbed5_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fbed5_5:;
/* 1803fbedb: add r9, 4 */
L_1803fbedb_0:;
L_1803fbedb_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803fbedb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x4)),8,0));
L_1803fbedb_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x4))));
L_1803fbedb_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbedb_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fbedb_6:;
wr(s->u,21,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fbedb_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fbedb_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fbedb_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fbedb_10:;
/* 1803fbedf: cmp r9, rax */
L_1803fbedf_0:;
L_1803fbedf_1:;
wr(s->u,31,8,rd(s->r,0,8));
L_1803fbedf_2:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->u,31,8)));
L_1803fbedf_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->u,31,8),8,1));
L_1803fbedf_4:;
wr(s->u,39,8,(rd(s->r,136,8)-rd(s->u,31,8)));
L_1803fbedf_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbedf_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fbedf_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fbedf_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fbedf_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fbedf_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fbedf_11:;
/* 1803fbee2: jl 0x1803fbece */
L_1803fbee2_0:;
L_1803fbee2_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbee2_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fbece);}
L_1803fbee2_3:;
return UINT64_C(0x1803fbee4);
}
uint64_t b_1803fbedb(CPU*s){
/* 1803fbedb: add r9, 4 */
L_1803fbedb_0:;
L_1803fbedb_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803fbedb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x4)),8,0));
L_1803fbedb_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x4))));
L_1803fbedb_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbedb_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fbedb_6:;
wr(s->u,1,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fbedb_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fbedb_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fbedb_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fbedb_10:;
/* 1803fbedf: cmp r9, rax */
L_1803fbedf_0:;
L_1803fbedf_1:;
wr(s->u,11,8,rd(s->r,0,8));
L_1803fbedf_2:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->u,11,8)));
L_1803fbedf_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->u,11,8),8,1));
L_1803fbedf_4:;
wr(s->u,19,8,(rd(s->r,136,8)-rd(s->u,11,8)));
L_1803fbedf_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbedf_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fbedf_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fbedf_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fbedf_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fbedf_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fbedf_11:;
/* 1803fbee2: jl 0x1803fbece */
L_1803fbee2_0:;
L_1803fbee2_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbee2_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fbece);}
L_1803fbee2_3:;
return UINT64_C(0x1803fbee4);
}
uint64_t b_1803fbee4(CPU*s){
/* 1803fbee4: xor eax, eax */
L_1803fbee4_0:;
L_1803fbee4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbee4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbee4_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fbee4_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fbee4_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbee4_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fbee4_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fbee4_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fbee4_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbee4_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbee4_11:;
/* 1803fbee6: add rsp, 0x38 */
L_1803fbee6_0:;
L_1803fbee6_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fbee6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803fbee6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803fbee6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbee6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fbee6_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fbee6_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fbee6_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbee6_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbee6_10:;
/* 1803fbeea: ret  */
L_1803fbeea_0:;
L_1803fbeea_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbeea_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbeea_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fbeea_4:;
return UINT64_C(0x1803fbeeb);
}
uint64_t b_1803fbeeb(CPU*s){
/* 1803fbeeb: xor edx, edx */
L_1803fbeeb_0:;
L_1803fbeeb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbeeb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbeeb_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803fbeeb_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fbeeb_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbeeb_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fbeeb_7:;
wr(s->u,0,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fbeeb_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fbeeb_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fbeeb_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fbeeb_11:;
/* 1803fbeed: jmp 0x1803fbebb */
L_1803fbeed_0:;
L_1803fbeed_1:;
return UINT64_C(0x1803fbebb);
L_1803fbeed_2:;
return UINT64_C(0x1803fbeef);
}
uint64_t b_1803fbeef(CPU*s){
/* 1803fbeef: mov eax, 0xfffffffa */
L_1803fbeef_0:;
L_1803fbeef_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fbeef_2:;
/* 1803fbef4: add rsp, 0x38 */
L_1803fbef4_0:;
L_1803fbef4_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fbef4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803fbef4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803fbef4_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbef4_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fbef4_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fbef4_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fbef4_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbef4_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbef4_10:;
/* 1803fbef8: ret  */
L_1803fbef8_0:;
L_1803fbef8_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbef8_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbef8_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fbef8_4:;
return UINT64_C(0x1803fbef9);
}
uint64_t b_1803fbef9(CPU*s){
/* 1803fbef9: mov eax, 0xfffffff8 */
L_1803fbef9_0:;
L_1803fbef9_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fbef9_2:;
/* 1803fbefe: add rsp, 0x38 */
L_1803fbefe_0:;
L_1803fbefe_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fbefe_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803fbefe_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803fbefe_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbefe_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fbefe_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fbefe_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fbefe_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbefe_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbefe_10:;
/* 1803fbf02: ret  */
L_1803fbf02_0:;
L_1803fbf02_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fbf02_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fbf02_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fbf02_4:;
return UINT64_C(0x1803fbf03);
}
uint64_t b_1803fbf04(CPU*s){
/* 1803fbf04: sub rsp, 0x38 */
L_1803fbf04_0:;
L_1803fbf04_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x38))));
L_1803fbf04_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,1));
L_1803fbf04_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x38))));
L_1803fbf04_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbf04_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fbf04_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fbf04_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fbf04_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbf04_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbf04_10:;
/* 1803fbf08: test rcx, rcx */
L_1803fbf08_0:;
L_1803fbf08_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbf08_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbf08_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fbf08_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbf08_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fbf08_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fbf08_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fbf08_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbf08_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbf08_10:;
/* 1803fbf0b: je 0x1803fc029 */
L_1803fbf0b_0:;
L_1803fbf0b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc029);}
L_1803fbf0b_2:;
return UINT64_C(0x1803fbf11);
}
uint64_t b_1803fbf11(CPU*s){
/* 1803fbf11: test edx, edx */
L_1803fbf11_0:;
L_1803fbf11_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbf11_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbf11_3:;
wr(s->u,8,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803fbf11_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbf11_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803fbf11_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803fbf11_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fbf11_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fbf11_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fbf11_10:;
/* 1803fbf13: jle 0x1803fc01f */
L_1803fbf13_0:;
L_1803fbf13_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbf13_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fbf13_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fc01f);}
L_1803fbf13_4:;
return UINT64_C(0x1803fbf19);
}
uint64_t b_1803fbf19(CPU*s){
/* 1803fbf19: movsxd r8, edx */
L_1803fbf19_0:;
L_1803fbf19_1:;
wr(s->r,128,8,(U)sx(rd(s->r,16,4),4));
L_1803fbf19_2:;
/* 1803fbf1c: mov rdx, rcx */
L_1803fbf1c_0:;
L_1803fbf1c_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1803fbf1c_2:;
/* 1803fbf1f: and rdx, 0xf */
L_1803fbf1f_0:;
L_1803fbf1f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbf1f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbf1f_3:;
wr(s->r,16,8,(rd(s->r,16,8)&((U)UINT64_C(0xf))));
L_1803fbf1f_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbf1f_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fbf1f_6:;
wr(s->u,0,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fbf1f_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fbf1f_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbf1f_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbf1f_10:;
/* 1803fbf23: test edx, edx */
L_1803fbf23_0:;
L_1803fbf23_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbf23_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbf23_3:;
wr(s->u,10,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803fbf23_4:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbf23_5:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fbf23_6:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fbf23_7:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fbf23_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fbf23_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fbf23_10:;
/* 1803fbf25: je 0x1803fbf38 */
L_1803fbf25_0:;
L_1803fbf25_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fbf38);}
L_1803fbf25_2:;
return UINT64_C(0x1803fbf27);
}
uint64_t b_1803fbf27(CPU*s){
/* 1803fbf27: test dl, 3 */
L_1803fbf27_0:;
L_1803fbf27_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbf27_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbf27_3:;
wr(s->u,4,1,(rd(s->r,16,1)&((U)UINT64_C(0x3))));
L_1803fbf27_4:;
wr(s->r,519,1,(sx(rd(s->u,4,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803fbf27_5:;
wr(s->r,518,1,(rd(s->u,4,1)==((U)UINT64_C(0x0))));
L_1803fbf27_6:;
wr(s->u,1,1,(rd(s->u,4,1)&((U)UINT64_C(0xff))));
L_1803fbf27_7:;
wr(s->u,2,1,pop(rd(s->u,1,1),1));
L_1803fbf27_8:;
wr(s->u,3,1,(rd(s->u,2,1)&((U)UINT64_C(0x1))));
L_1803fbf27_9:;
wr(s->r,514,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_1803fbf27_10:;
/* 1803fbf2a: jne 0x1803fc01b */
L_1803fbf2a_0:;
L_1803fbf2a_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fbf2a_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fc01b);}
L_1803fbf2a_3:;
return UINT64_C(0x1803fbf30);
}
uint64_t b_1803fbf30(CPU*s){
/* 1803fbf30: neg edx */
L_1803fbf30_0:;
L_1803fbf30_1:;
wr(s->r,512,1,(rd(s->r,16,4)!=((U)UINT64_C(0x0))));
L_1803fbf30_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,16,4),4,1));
L_1803fbf30_3:;
wr(s->r,16,4,(-rd(s->r,16,4)));
L_1803fbf30_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbf30_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fbf30_6:;
wr(s->u,14,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fbf30_7:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fbf30_8:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fbf30_9:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fbf30_10:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fbf30_11:;
/* 1803fbf32: add edx, 0x10 */
L_1803fbf32_0:;
L_1803fbf32_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+((U)UINT64_C(0x10)))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803fbf32_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x10)),4,0));
L_1803fbf32_3:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x10))));
L_1803fbf32_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fbf32_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbf32_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fbf32_7:;
wr(s->u,14,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fbf32_8:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fbf32_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fbf32_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fbf32_11:;
/* 1803fbf35: shr edx, 2 */
L_1803fbf35_0:;
L_1803fbf35_1:;
wr(s->u,75,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803fbf35_2:;
wr(s->u,79,4,rd(s->r,16,4));
L_1803fbf35_3:;
wr(s->r,16,4,((rd(s->u,75,4)>=32)?0:(rd(s->r,16,4)>>rd(s->u,75,4))));
L_1803fbf35_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fbf35_5:;
wr(s->u,43,1,(rd(s->u,75,4)==((U)UINT64_C(0x0))));
L_1803fbf35_6:;
wr(s->u,44,4,(rd(s->u,75,4)-((U)UINT64_C(0x1))));
L_1803fbf35_7:;
wr(s->u,48,4,((rd(s->u,44,4)>=32)?0:(rd(s->u,79,4)>>rd(s->u,44,4))));
L_1803fbf35_8:;
wr(s->u,52,4,(rd(s->u,48,4)&((U)UINT64_C(0x1))));
L_1803fbf35_9:;
wr(s->u,56,1,(rd(s->u,52,4)!=((U)UINT64_C(0x0))));
L_1803fbf35_10:;
wr(s->u,0,1,rd(s->u,43,1));
L_1803fbf35_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fbf35_12:;
wr(s->u,2,1,(!rd(s->u,43,1)));
L_1803fbf35_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbf35_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,56,1)));
L_1803fbf35_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbf35_16:;
wr(s->u,57,1,(rd(s->u,75,4)==((U)UINT64_C(0x1))));
L_1803fbf35_17:;
wr(s->u,58,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbf35_18:;
wr(s->u,0,1,rd(s->u,57,1));
L_1803fbf35_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fbf35_20:;
wr(s->u,2,1,(!rd(s->u,57,1)));
L_1803fbf35_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbf35_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,58,1)));
L_1803fbf35_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbf35_24:;
wr(s->u,24,1,(rd(s->u,75,4)!=((U)UINT64_C(0x0))));
L_1803fbf35_25:;
wr(s->u,25,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbf35_26:;
wr(s->u,26,1,(!rd(s->u,24,1)));
L_1803fbf35_27:;
wr(s->u,27,1,(rd(s->u,26,1)&rd(s->r,519,1)));
L_1803fbf35_28:;
wr(s->u,28,1,(rd(s->u,24,1)&rd(s->u,25,1)));
L_1803fbf35_29:;
wr(s->r,519,1,(rd(s->u,27,1)|rd(s->u,28,1)));
L_1803fbf35_30:;
wr(s->u,29,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fbf35_31:;
wr(s->u,30,1,(!rd(s->u,24,1)));
L_1803fbf35_32:;
wr(s->u,31,1,(rd(s->u,30,1)&rd(s->r,518,1)));
L_1803fbf35_33:;
wr(s->u,32,1,(rd(s->u,24,1)&rd(s->u,29,1)));
L_1803fbf35_34:;
wr(s->r,518,1,(rd(s->u,31,1)|rd(s->u,32,1)));
L_1803fbf35_35:;
wr(s->u,33,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fbf35_36:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803fbf35_37:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803fbf35_38:;
wr(s->u,39,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803fbf35_39:;
wr(s->u,40,1,(!rd(s->u,24,1)));
L_1803fbf35_40:;
wr(s->u,41,1,(rd(s->u,40,1)&rd(s->r,514,1)));
L_1803fbf35_41:;
wr(s->u,42,1,(rd(s->u,24,1)&rd(s->u,39,1)));
L_1803fbf35_42:;
wr(s->r,514,1,(rd(s->u,41,1)|rd(s->u,42,1)));
L_1803fbf35_43:;
/* 1803fbf38: movsxd rax, edx */
L_1803fbf38_0:;
L_1803fbf38_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803fbf38_2:;
/* 1803fbf3b: lea r9, [rax + 8] */
L_1803fbf3b_0:;
L_1803fbf3b_1:;
wr(s->u,5,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803fbf3b_2:;
wr(s->r,136,8,rd(s->u,5,8));
L_1803fbf3b_3:;
/* 1803fbf3f: cmp r8, r9 */
L_1803fbf3f_0:;
L_1803fbf3f_1:;
wr(s->u,59,8,rd(s->r,136,8));
L_1803fbf3f_2:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->u,59,8)));
L_1803fbf3f_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->u,59,8),8,1));
L_1803fbf3f_4:;
wr(s->u,67,8,(rd(s->r,128,8)-rd(s->u,59,8)));
L_1803fbf3f_5:;
wr(s->r,519,1,(sx(rd(s->u,67,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbf3f_6:;
wr(s->r,518,1,(rd(s->u,67,8)==((U)UINT64_C(0x0))));
L_1803fbf3f_7:;
wr(s->u,14,8,(rd(s->u,67,8)&((U)UINT64_C(0xff))));
L_1803fbf3f_8:;
wr(s->u,22,1,pop(rd(s->u,14,8),8));
L_1803fbf3f_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fbf3f_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fbf3f_11:;
/* 1803fbf42: jl 0x1803fc01b */
L_1803fbf42_0:;
L_1803fbf42_1:;
wr(s->u,13,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbf42_2:;
if(rd(s->u,13,1)){return UINT64_C(0x1803fc01b);}
L_1803fbf42_3:;
return UINT64_C(0x1803fbf48);
}
uint64_t b_1803fbf38(CPU*s){
/* 1803fbf38: movsxd rax, edx */
L_1803fbf38_0:;
L_1803fbf38_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803fbf38_2:;
/* 1803fbf3b: lea r9, [rax + 8] */
L_1803fbf3b_0:;
L_1803fbf3b_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803fbf3b_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1803fbf3b_3:;
/* 1803fbf3f: cmp r8, r9 */
L_1803fbf3f_0:;
L_1803fbf3f_1:;
wr(s->u,19,8,rd(s->r,136,8));
L_1803fbf3f_2:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->u,19,8)));
L_1803fbf3f_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->u,19,8),8,1));
L_1803fbf3f_4:;
wr(s->u,27,8,(rd(s->r,128,8)-rd(s->u,19,8)));
L_1803fbf3f_5:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbf3f_6:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803fbf3f_7:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803fbf3f_8:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fbf3f_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fbf3f_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fbf3f_11:;
/* 1803fbf42: jl 0x1803fc01b */
L_1803fbf42_0:;
L_1803fbf42_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbf42_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803fc01b);}
L_1803fbf42_3:;
return UINT64_C(0x1803fbf48);
}
uint64_t b_1803fbf48(CPU*s){
/* 1803fbf48: mov r9d, r8d */
L_1803fbf48_0:;
L_1803fbf48_1:;
wr(s->r,136,4,rd(s->r,128,4));
L_1803fbf48_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fbf48_3:;
/* 1803fbf4b: neg edx */
L_1803fbf4b_0:;
L_1803fbf4b_1:;
wr(s->r,512,1,(rd(s->r,16,4)!=((U)UINT64_C(0x0))));
L_1803fbf4b_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,16,4),4,1));
L_1803fbf4b_3:;
wr(s->r,16,4,(-rd(s->r,16,4)));
L_1803fbf4b_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbf4b_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fbf4b_6:;
wr(s->u,7,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fbf4b_7:;
wr(s->u,15,1,pop(rd(s->u,7,4),4));
L_1803fbf4b_8:;
wr(s->u,16,1,(rd(s->u,15,1)&((U)UINT64_C(0x1))));
L_1803fbf4b_9:;
wr(s->r,514,1,(rd(s->u,16,1)==((U)UINT64_C(0x0))));
L_1803fbf4b_10:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fbf4b_11:;
/* 1803fbf4d: add edx, r9d */
L_1803fbf4d_0:;
L_1803fbf4d_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->r,136,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803fbf4d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->r,136,4),4,0));
L_1803fbf4d_3:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->r,136,4)));
L_1803fbf4d_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fbf4d_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbf4d_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fbf4d_7:;
wr(s->u,7,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fbf4d_8:;
wr(s->u,15,1,pop(rd(s->u,7,4),4));
L_1803fbf4d_9:;
wr(s->u,16,1,(rd(s->u,15,1)&((U)UINT64_C(0x1))));
L_1803fbf4d_10:;
wr(s->r,514,1,(rd(s->u,16,1)==((U)UINT64_C(0x0))));
L_1803fbf4d_11:;
/* 1803fbf50: and edx, 7 */
L_1803fbf50_0:;
L_1803fbf50_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbf50_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbf50_3:;
wr(s->r,16,4,(rd(s->r,16,4)&((U)UINT64_C(0x7))));
L_1803fbf50_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fbf50_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbf50_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fbf50_7:;
wr(s->u,7,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fbf50_8:;
wr(s->u,15,1,pop(rd(s->u,7,4),4));
L_1803fbf50_9:;
wr(s->u,16,1,(rd(s->u,15,1)&((U)UINT64_C(0x1))));
L_1803fbf50_10:;
wr(s->r,514,1,(rd(s->u,16,1)==((U)UINT64_C(0x0))));
L_1803fbf50_11:;
/* 1803fbf53: sub r9d, edx */
L_1803fbf53_0:;
L_1803fbf53_1:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->r,16,4)));
L_1803fbf53_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->r,16,4),4,1));
L_1803fbf53_3:;
wr(s->r,136,4,(rd(s->r,136,4)-rd(s->r,16,4)));
L_1803fbf53_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fbf53_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbf53_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803fbf53_7:;
wr(s->u,7,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803fbf53_8:;
wr(s->u,15,1,pop(rd(s->u,7,4),4));
L_1803fbf53_9:;
wr(s->u,16,1,(rd(s->u,15,1)&((U)UINT64_C(0x1))));
L_1803fbf53_10:;
wr(s->r,514,1,(rd(s->u,16,1)==((U)UINT64_C(0x0))));
L_1803fbf53_11:;
/* 1803fbf56: movsxd rdx, r9d */
L_1803fbf56_0:;
L_1803fbf56_1:;
wr(s->r,16,8,(U)sx(rd(s->r,136,4),4));
L_1803fbf56_2:;
/* 1803fbf59: xor r10d, r10d */
L_1803fbf59_0:;
L_1803fbf59_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbf59_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbf59_3:;
wr(s->r,144,4,(rd(s->r,144,4)^rd(s->r,144,4)));
L_1803fbf59_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fbf59_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fbf59_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fbf59_7:;
wr(s->u,7,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fbf59_8:;
wr(s->u,15,1,pop(rd(s->u,7,4),4));
L_1803fbf59_9:;
wr(s->u,16,1,(rd(s->u,15,1)&((U)UINT64_C(0x1))));
L_1803fbf59_10:;
wr(s->r,514,1,(rd(s->u,16,1)==((U)UINT64_C(0x0))));
L_1803fbf59_11:;
/* 1803fbf5c: mov r9, rax */
L_1803fbf5c_0:;
L_1803fbf5c_1:;
wr(s->r,136,8,rd(s->r,0,8));
L_1803fbf5c_2:;
/* 1803fbf5f: shl r9, 2 */
L_1803fbf5f_0:;
L_1803fbf5f_1:;
wr(s->u,57,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803fbf5f_2:;
wr(s->u,61,8,rd(s->r,136,8));
L_1803fbf5f_3:;
wr(s->r,136,8,((rd(s->u,57,4)>=64)?0:(rd(s->r,136,8)<<rd(s->u,57,4))));
L_1803fbf5f_4:;
wr(s->u,40,1,(rd(s->u,57,4)==((U)UINT64_C(0x0))));
L_1803fbf5f_5:;
wr(s->u,41,4,(rd(s->u,57,4)-((U)UINT64_C(0x1))));
L_1803fbf5f_6:;
wr(s->u,45,8,((rd(s->u,41,4)>=64)?0:(rd(s->u,61,8)<<rd(s->u,41,4))));
L_1803fbf5f_7:;
wr(s->u,53,1,(sx(rd(s->u,45,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbf5f_8:;
wr(s->u,0,1,rd(s->u,40,1));
L_1803fbf5f_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fbf5f_10:;
wr(s->u,2,1,(!rd(s->u,40,1)));
L_1803fbf5f_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbf5f_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,53,1)));
L_1803fbf5f_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbf5f_14:;
wr(s->u,54,1,(rd(s->u,57,4)==((U)UINT64_C(0x1))));
L_1803fbf5f_15:;
wr(s->u,55,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbf5f_16:;
wr(s->u,56,1,(rd(s->r,512,1)^rd(s->u,55,1)));
L_1803fbf5f_17:;
wr(s->u,0,1,rd(s->u,54,1));
L_1803fbf5f_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,56,1)));
L_1803fbf5f_19:;
wr(s->u,2,1,(!rd(s->u,54,1)));
L_1803fbf5f_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbf5f_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fbf5f_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbf5f_23:;
wr(s->u,17,1,(rd(s->u,57,4)!=((U)UINT64_C(0x0))));
L_1803fbf5f_24:;
wr(s->u,18,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbf5f_25:;
wr(s->u,19,1,(!rd(s->u,17,1)));
L_1803fbf5f_26:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,519,1)));
L_1803fbf5f_27:;
wr(s->u,21,1,(rd(s->u,17,1)&rd(s->u,18,1)));
L_1803fbf5f_28:;
wr(s->r,519,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803fbf5f_29:;
wr(s->u,22,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fbf5f_30:;
wr(s->u,23,1,(!rd(s->u,17,1)));
L_1803fbf5f_31:;
wr(s->u,24,1,(rd(s->u,23,1)&rd(s->r,518,1)));
L_1803fbf5f_32:;
wr(s->u,25,1,(rd(s->u,17,1)&rd(s->u,22,1)));
L_1803fbf5f_33:;
wr(s->r,518,1,(rd(s->u,24,1)|rd(s->u,25,1)));
L_1803fbf5f_34:;
wr(s->u,26,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fbf5f_35:;
wr(s->u,34,1,pop(rd(s->u,26,8),8));
L_1803fbf5f_36:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803fbf5f_37:;
wr(s->u,36,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803fbf5f_38:;
wr(s->u,37,1,(!rd(s->u,17,1)));
L_1803fbf5f_39:;
wr(s->u,38,1,(rd(s->u,37,1)&rd(s->r,514,1)));
L_1803fbf5f_40:;
wr(s->u,39,1,(rd(s->u,17,1)&rd(s->u,36,1)));
L_1803fbf5f_41:;
wr(s->r,514,1,(rd(s->u,38,1)|rd(s->u,39,1)));
L_1803fbf5f_42:;
/* 1803fbf63: test rax, rax */
L_1803fbf63_0:;
L_1803fbf63_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fbf63_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbf63_3:;
wr(s->u,69,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803fbf63_4:;
wr(s->r,519,1,(sx(rd(s->u,69,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbf63_5:;
wr(s->r,518,1,(rd(s->u,69,8)==((U)UINT64_C(0x0))));
L_1803fbf63_6:;
wr(s->u,7,8,(rd(s->u,69,8)&((U)UINT64_C(0xff))));
L_1803fbf63_7:;
wr(s->u,15,1,pop(rd(s->u,7,8),8));
L_1803fbf63_8:;
wr(s->u,16,1,(rd(s->u,15,1)&((U)UINT64_C(0x1))));
L_1803fbf63_9:;
wr(s->r,514,1,(rd(s->u,16,1)==((U)UINT64_C(0x0))));
L_1803fbf63_10:;
/* 1803fbf66: jle 0x1803fbf82 */
L_1803fbf66_0:;
L_1803fbf66_1:;
wr(s->u,5,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbf66_2:;
wr(s->u,6,1,((rd(s->r,518,1)!=0)||(rd(s->u,5,1)!=0)));
L_1803fbf66_3:;
if(rd(s->u,6,1)){return UINT64_C(0x1803fbf82);}
L_1803fbf66_4:;
return UINT64_C(0x1803fbf68);
}
uint64_t b_1803fbf68(CPU*s){
/* 1803fbf68: movss xmm0, dword ptr [r10 + rcx] */
L_1803fbf68_0:;
L_1803fbf68_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803fbf68_2:;
wr(s->u,8,8,(rd(s->r,144,8)+rd(s->u,0,8)));
L_1803fbf68_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fbf68_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803fbf68_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fbf68_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fbf68_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fbf68_8:;
/* 1803fbf6e: comiss xmm0, xmm2 */
L_1803fbf6e_0:;
L_1803fbf6e_1:;
wr(s->u,21,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803fbf6e_2:;
wr(s->u,22,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803fbf6e_3:;
wr(s->r,514,1,((rd(s->u,21,1)!=0)||(rd(s->u,22,1)!=0)));
L_1803fbf6e_4:;
wr(s->u,23,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4736,4),4)));
L_1803fbf6e_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,23,1)));
L_1803fbf6e_6:;
wr(s->u,24,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4736,4),4)));
L_1803fbf6e_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,24,1)));
L_1803fbf6e_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fbf6e_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fbf6e_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fbf6e_11:;
/* 1803fbf71: jbe 0x1803fbf79 */
L_1803fbf71_0:;
L_1803fbf71_1:;
wr(s->u,20,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fbf71_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fbf79);}
L_1803fbf71_3:;
return UINT64_C(0x1803fbf73);
}
uint64_t b_1803fbf73(CPU*s){
/* 1803fbf73: movss dword ptr [r10 + rcx], xmm3 */
L_1803fbf73_0:;
L_1803fbf73_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803fbf73_2:;
wr(s->u,8,8,(rd(s->r,144,8)+rd(s->u,0,8)));
L_1803fbf73_3:;
wr(s->u,16,4,rd(s->r,4800,4));
L_1803fbf73_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fbf73_5:;
/* 1803fbf79: add r10, 4 */
L_1803fbf79_0:;
L_1803fbf79_1:;
wr(s->r,512,1,(((rd(s->r,144,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,144,8)));
L_1803fbf79_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x4)),8,0));
L_1803fbf79_3:;
wr(s->r,144,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803fbf79_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbf79_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803fbf79_6:;
wr(s->u,21,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803fbf79_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fbf79_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fbf79_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fbf79_10:;
/* 1803fbf7d: cmp r10, r9 */
L_1803fbf7d_0:;
L_1803fbf7d_1:;
wr(s->u,31,8,rd(s->r,136,8));
L_1803fbf7d_2:;
wr(s->r,512,1,(rd(s->r,144,8)<rd(s->u,31,8)));
L_1803fbf7d_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->u,31,8),8,1));
L_1803fbf7d_4:;
wr(s->u,39,8,(rd(s->r,144,8)-rd(s->u,31,8)));
L_1803fbf7d_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbf7d_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fbf7d_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fbf7d_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fbf7d_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fbf7d_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fbf7d_11:;
/* 1803fbf80: jl 0x1803fbf68 */
L_1803fbf80_0:;
L_1803fbf80_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbf80_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fbf68);}
L_1803fbf80_3:;
return UINT64_C(0x1803fbf82);
}
uint64_t b_1803fbf79(CPU*s){
/* 1803fbf79: add r10, 4 */
L_1803fbf79_0:;
L_1803fbf79_1:;
wr(s->r,512,1,(((rd(s->r,144,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,144,8)));
L_1803fbf79_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x4)),8,0));
L_1803fbf79_3:;
wr(s->r,144,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803fbf79_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbf79_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803fbf79_6:;
wr(s->u,1,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803fbf79_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fbf79_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fbf79_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fbf79_10:;
/* 1803fbf7d: cmp r10, r9 */
L_1803fbf7d_0:;
L_1803fbf7d_1:;
wr(s->u,11,8,rd(s->r,136,8));
L_1803fbf7d_2:;
wr(s->r,512,1,(rd(s->r,144,8)<rd(s->u,11,8)));
L_1803fbf7d_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->u,11,8),8,1));
L_1803fbf7d_4:;
wr(s->u,19,8,(rd(s->r,144,8)-rd(s->u,11,8)));
L_1803fbf7d_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbf7d_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fbf7d_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fbf7d_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fbf7d_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fbf7d_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fbf7d_11:;
/* 1803fbf80: jl 0x1803fbf68 */
L_1803fbf80_0:;
L_1803fbf80_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbf80_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fbf68);}
L_1803fbf80_3:;
return UINT64_C(0x1803fbf82);
}
uint64_t b_1803fbf82(CPU*s){
/* 1803fbf82: movaps xmmword ptr [rsp + 0x20], xmm6 */
L_1803fbf82_0:;
L_1803fbf82_1:;
wr(s->u,24,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fbf82_2:;
wr(s->u,32,16,rd(s->r,4992,16));
L_1803fbf82_3:;
mw((uint64_t)rd(s->u,24,8),16,rd(s->u,32,16));
L_1803fbf82_4:;
/* 1803fbf87: lea r9, [rcx + rax*4] */
L_1803fbf87_0:;
L_1803fbf87_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fbf87_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803fbf87_3:;
wr(s->r,136,8,rd(s->u,16,8));
L_1803fbf87_4:;
/* 1803fbf8b: lea rax, [rcx + rdx*4] */
L_1803fbf8b_0:;
L_1803fbf8b_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803fbf8b_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803fbf8b_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803fbf8b_4:;
/* 1803fbf8f: movaps xmm1, xmm2 */
L_1803fbf8f_0:;
L_1803fbf8f_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803fbf8f_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803fbf8f_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803fbf8f_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803fbf8f_5:;
/* 1803fbf92: unpcklps xmm1, xmm1 */
L_1803fbf92_0:;
L_1803fbf92_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803fbf92_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803fbf92_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803fbf92_4:;
/* 1803fbf95: unpcklps xmm1, xmm1 */
L_1803fbf95_0:;
L_1803fbf95_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803fbf95_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803fbf95_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803fbf95_4:;
/* 1803fbf98: movaps xmm0, xmm3 */
L_1803fbf98_0:;
L_1803fbf98_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fbf98_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fbf98_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fbf98_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fbf98_5:;
/* 1803fbf9b: unpcklps xmm0, xmm0 */
L_1803fbf9b_0:;
L_1803fbf9b_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803fbf9b_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803fbf9b_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803fbf9b_4:;
/* 1803fbf9e: unpcklps xmm0, xmm0 */
L_1803fbf9e_0:;
L_1803fbf9e_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803fbf9e_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803fbf9e_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803fbf9e_4:;
/* 1803fbfa1: movaps xmm4, xmmword ptr [r9] */
L_1803fbfa1_0:;
L_1803fbfa1_1:;
wr(s->u,32,16,mr((uint64_t)rd(s->r,136,8),16));
L_1803fbfa1_2:;
wr(s->u,111,16,rd(s->u,32,16));
L_1803fbfa1_3:;
wr(s->r,4864,4,rd(s->u,111,4));
L_1803fbfa1_4:;
wr(s->r,4868,4,rd(s->u,115,4));
L_1803fbfa1_5:;
wr(s->r,4872,4,rd(s->u,119,4));
L_1803fbfa1_6:;
wr(s->r,4876,4,rd(s->u,123,4));
L_1803fbfa1_7:;
/* 1803fbfa5: movaps xmm5, xmm1 */
L_1803fbfa5_0:;
L_1803fbfa5_1:;
wr(s->r,4928,4,rd(s->r,4672,4));
L_1803fbfa5_2:;
wr(s->r,4932,4,rd(s->r,4676,4));
L_1803fbfa5_3:;
wr(s->r,4936,4,rd(s->r,4680,4));
L_1803fbfa5_4:;
wr(s->r,4940,4,rd(s->r,4684,4));
L_1803fbfa5_5:;
/* 1803fbfa8: movaps xmm6, xmm0 */
L_1803fbfa8_0:;
L_1803fbfa8_1:;
wr(s->r,4992,4,rd(s->r,4608,4));
L_1803fbfa8_2:;
wr(s->r,4996,4,rd(s->r,4612,4));
L_1803fbfa8_3:;
wr(s->r,5000,4,rd(s->r,4616,4));
L_1803fbfa8_4:;
wr(s->r,5004,4,rd(s->r,4620,4));
L_1803fbfa8_5:;
/* 1803fbfab: cmpltps xmm5, xmm4 */
L_1803fbfab_0:;
L_1803fbfab_1:;
wr(s->r,4480,4,rd(s->r,4928,4));
L_1803fbfab_2:;
wr(s->r,4484,4,rd(s->r,4932,4));
L_1803fbfab_3:;
wr(s->r,4488,4,rd(s->r,4936,4));
L_1803fbfab_4:;
wr(s->r,4492,4,rd(s->r,4940,4));
L_1803fbfab_5:;
wr(s->r,4496,4,rd(s->r,4864,4));
L_1803fbfab_6:;
wr(s->r,4500,4,rd(s->r,4868,4));
L_1803fbfab_7:;
wr(s->r,4504,4,rd(s->r,4872,4));
L_1803fbfab_8:;
wr(s->r,4508,4,rd(s->r,4876,4));
L_1803fbfab_9:;
wr(s->u,91,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803fbfab_10:;
wr(s->u,92,4,rd(s->u,91,1));
L_1803fbfab_11:;
wr(s->r,4480,4,(rd(s->u,92,4)*((U)UINT64_C(0xffffffff))));
L_1803fbfab_12:;
wr(s->u,96,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803fbfab_13:;
wr(s->u,97,4,rd(s->u,96,1));
L_1803fbfab_14:;
wr(s->r,4484,4,(rd(s->u,97,4)*((U)UINT64_C(0xffffffff))));
L_1803fbfab_15:;
wr(s->u,101,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803fbfab_16:;
wr(s->u,102,4,rd(s->u,101,1));
L_1803fbfab_17:;
wr(s->r,4488,4,(rd(s->u,102,4)*((U)UINT64_C(0xffffffff))));
L_1803fbfab_18:;
wr(s->u,106,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803fbfab_19:;
wr(s->u,107,4,rd(s->u,106,1));
L_1803fbfab_20:;
wr(s->r,4492,4,(rd(s->u,107,4)*((U)UINT64_C(0xffffffff))));
L_1803fbfab_21:;
wr(s->r,4928,4,rd(s->r,4480,4));
L_1803fbfab_22:;
wr(s->r,4932,4,rd(s->r,4484,4));
L_1803fbfab_23:;
wr(s->r,4936,4,rd(s->r,4488,4));
L_1803fbfab_24:;
wr(s->r,4940,4,rd(s->r,4492,4));
L_1803fbfab_25:;
/* 1803fbfaf: andps xmm6, xmm5 */
L_1803fbfaf_0:;
L_1803fbfaf_1:;
wr(s->r,4992,4,(rd(s->r,4992,4)&rd(s->r,4928,4)));
L_1803fbfaf_2:;
wr(s->r,4996,4,(rd(s->r,4996,4)&rd(s->r,4932,4)));
L_1803fbfaf_3:;
wr(s->r,5000,4,(rd(s->r,5000,4)&rd(s->r,4936,4)));
L_1803fbfaf_4:;
wr(s->r,5004,4,(rd(s->r,5004,4)&rd(s->r,4940,4)));
L_1803fbfaf_5:;
/* 1803fbfb2: andnps xmm5, xmm4 */
L_1803fbfb2_0:;
L_1803fbfb2_1:;
wr(s->u,75,4,(~rd(s->r,4928,4)));
L_1803fbfb2_2:;
wr(s->r,4928,4,(rd(s->u,75,4)&rd(s->r,4864,4)));
L_1803fbfb2_3:;
wr(s->u,79,4,(~rd(s->r,4932,4)));
L_1803fbfb2_4:;
wr(s->r,4932,4,(rd(s->u,79,4)&rd(s->r,4868,4)));
L_1803fbfb2_5:;
wr(s->u,83,4,(~rd(s->r,4936,4)));
L_1803fbfb2_6:;
wr(s->r,4936,4,(rd(s->u,83,4)&rd(s->r,4872,4)));
L_1803fbfb2_7:;
wr(s->u,87,4,(~rd(s->r,4940,4)));
L_1803fbfb2_8:;
wr(s->r,4940,4,(rd(s->u,87,4)&rd(s->r,4876,4)));
L_1803fbfb2_9:;
/* 1803fbfb5: movaps xmm4, xmmword ptr [r9 + 0x10] */
L_1803fbfb5_0:;
L_1803fbfb5_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x10))));
L_1803fbfb5_2:;
wr(s->u,32,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fbfb5_3:;
wr(s->u,111,16,rd(s->u,32,16));
L_1803fbfb5_4:;
wr(s->r,4864,4,rd(s->u,111,4));
L_1803fbfb5_5:;
wr(s->r,4868,4,rd(s->u,115,4));
L_1803fbfb5_6:;
wr(s->r,4872,4,rd(s->u,119,4));
L_1803fbfb5_7:;
wr(s->r,4876,4,rd(s->u,123,4));
L_1803fbfb5_8:;
/* 1803fbfba: orps xmm6, xmm5 */
L_1803fbfba_0:;
L_1803fbfba_1:;
wr(s->r,4992,16,(rd(s->r,4992,16)|rd(s->r,4928,16)));
L_1803fbfba_2:;
/* 1803fbfbd: movaps xmmword ptr [r9], xmm6 */
L_1803fbfbd_0:;
L_1803fbfbd_1:;
wr(s->u,32,16,rd(s->r,4992,16));
L_1803fbfbd_2:;
mw((uint64_t)rd(s->r,136,8),16,rd(s->u,32,16));
L_1803fbfbd_3:;
/* 1803fbfc1: movaps xmm5, xmm1 */
L_1803fbfc1_0:;
L_1803fbfc1_1:;
wr(s->r,4928,4,rd(s->r,4672,4));
L_1803fbfc1_2:;
wr(s->r,4932,4,rd(s->r,4676,4));
L_1803fbfc1_3:;
wr(s->r,4936,4,rd(s->r,4680,4));
L_1803fbfc1_4:;
wr(s->r,4940,4,rd(s->r,4684,4));
L_1803fbfc1_5:;
/* 1803fbfc4: movaps xmm6, xmm0 */
L_1803fbfc4_0:;
L_1803fbfc4_1:;
wr(s->r,4992,4,rd(s->r,4608,4));
L_1803fbfc4_2:;
wr(s->r,4996,4,rd(s->r,4612,4));
L_1803fbfc4_3:;
wr(s->r,5000,4,rd(s->r,4616,4));
L_1803fbfc4_4:;
wr(s->r,5004,4,rd(s->r,4620,4));
L_1803fbfc4_5:;
/* 1803fbfc7: cmpltps xmm5, xmm4 */
L_1803fbfc7_0:;
L_1803fbfc7_1:;
wr(s->r,4480,4,rd(s->r,4928,4));
L_1803fbfc7_2:;
wr(s->r,4484,4,rd(s->r,4932,4));
L_1803fbfc7_3:;
wr(s->r,4488,4,rd(s->r,4936,4));
L_1803fbfc7_4:;
wr(s->r,4492,4,rd(s->r,4940,4));
L_1803fbfc7_5:;
wr(s->r,4496,4,rd(s->r,4864,4));
L_1803fbfc7_6:;
wr(s->r,4500,4,rd(s->r,4868,4));
L_1803fbfc7_7:;
wr(s->r,4504,4,rd(s->r,4872,4));
L_1803fbfc7_8:;
wr(s->r,4508,4,rd(s->r,4876,4));
L_1803fbfc7_9:;
wr(s->u,91,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803fbfc7_10:;
wr(s->u,92,4,rd(s->u,91,1));
L_1803fbfc7_11:;
wr(s->r,4480,4,(rd(s->u,92,4)*((U)UINT64_C(0xffffffff))));
L_1803fbfc7_12:;
wr(s->u,96,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803fbfc7_13:;
wr(s->u,97,4,rd(s->u,96,1));
L_1803fbfc7_14:;
wr(s->r,4484,4,(rd(s->u,97,4)*((U)UINT64_C(0xffffffff))));
L_1803fbfc7_15:;
wr(s->u,101,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803fbfc7_16:;
wr(s->u,102,4,rd(s->u,101,1));
L_1803fbfc7_17:;
wr(s->r,4488,4,(rd(s->u,102,4)*((U)UINT64_C(0xffffffff))));
L_1803fbfc7_18:;
wr(s->u,106,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803fbfc7_19:;
wr(s->u,107,4,rd(s->u,106,1));
L_1803fbfc7_20:;
wr(s->r,4492,4,(rd(s->u,107,4)*((U)UINT64_C(0xffffffff))));
L_1803fbfc7_21:;
wr(s->r,4928,4,rd(s->r,4480,4));
L_1803fbfc7_22:;
wr(s->r,4932,4,rd(s->r,4484,4));
L_1803fbfc7_23:;
wr(s->r,4936,4,rd(s->r,4488,4));
L_1803fbfc7_24:;
wr(s->r,4940,4,rd(s->r,4492,4));
L_1803fbfc7_25:;
/* 1803fbfcb: andps xmm6, xmm5 */
L_1803fbfcb_0:;
L_1803fbfcb_1:;
wr(s->r,4992,4,(rd(s->r,4992,4)&rd(s->r,4928,4)));
L_1803fbfcb_2:;
wr(s->r,4996,4,(rd(s->r,4996,4)&rd(s->r,4932,4)));
L_1803fbfcb_3:;
wr(s->r,5000,4,(rd(s->r,5000,4)&rd(s->r,4936,4)));
L_1803fbfcb_4:;
wr(s->r,5004,4,(rd(s->r,5004,4)&rd(s->r,4940,4)));
L_1803fbfcb_5:;
/* 1803fbfce: andnps xmm5, xmm4 */
L_1803fbfce_0:;
L_1803fbfce_1:;
wr(s->u,75,4,(~rd(s->r,4928,4)));
L_1803fbfce_2:;
wr(s->r,4928,4,(rd(s->u,75,4)&rd(s->r,4864,4)));
L_1803fbfce_3:;
wr(s->u,79,4,(~rd(s->r,4932,4)));
L_1803fbfce_4:;
wr(s->r,4932,4,(rd(s->u,79,4)&rd(s->r,4868,4)));
L_1803fbfce_5:;
wr(s->u,83,4,(~rd(s->r,4936,4)));
L_1803fbfce_6:;
wr(s->r,4936,4,(rd(s->u,83,4)&rd(s->r,4872,4)));
L_1803fbfce_7:;
wr(s->u,87,4,(~rd(s->r,4940,4)));
L_1803fbfce_8:;
wr(s->r,4940,4,(rd(s->u,87,4)&rd(s->r,4876,4)));
L_1803fbfce_9:;
/* 1803fbfd1: orps xmm6, xmm5 */
L_1803fbfd1_0:;
L_1803fbfd1_1:;
wr(s->r,4992,16,(rd(s->r,4992,16)|rd(s->r,4928,16)));
L_1803fbfd1_2:;
/* 1803fbfd4: movaps xmmword ptr [r9 + 0x10], xmm6 */
L_1803fbfd4_0:;
L_1803fbfd4_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x10))));
L_1803fbfd4_2:;
wr(s->u,32,16,rd(s->r,4992,16));
L_1803fbfd4_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,32,16));
L_1803fbfd4_4:;
/* 1803fbfd9: add r9, 0x20 */
L_1803fbfd9_0:;
L_1803fbfd9_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803fbfd9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x20)),8,0));
L_1803fbfd9_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x20))));
L_1803fbfd9_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbfd9_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fbfd9_6:;
wr(s->u,49,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fbfd9_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803fbfd9_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803fbfd9_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803fbfd9_10:;
/* 1803fbfdd: cmp r9, rax */
L_1803fbfdd_0:;
L_1803fbfdd_1:;
wr(s->u,59,8,rd(s->r,0,8));
L_1803fbfdd_2:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->u,59,8)));
L_1803fbfdd_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->u,59,8),8,1));
L_1803fbfdd_4:;
wr(s->u,67,8,(rd(s->r,136,8)-rd(s->u,59,8)));
L_1803fbfdd_5:;
wr(s->r,519,1,(sx(rd(s->u,67,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbfdd_6:;
wr(s->r,518,1,(rd(s->u,67,8)==((U)UINT64_C(0x0))));
L_1803fbfdd_7:;
wr(s->u,49,8,(rd(s->u,67,8)&((U)UINT64_C(0xff))));
L_1803fbfdd_8:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803fbfdd_9:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803fbfdd_10:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803fbfdd_11:;
/* 1803fbfe0: jl 0x1803fbfa1 */
L_1803fbfe0_0:;
L_1803fbfe0_1:;
wr(s->u,48,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbfe0_2:;
if(rd(s->u,48,1)){goto L_1803fbfa1_0;}
L_1803fbfe0_3:;
return UINT64_C(0x1803fbfe2);
}
uint64_t b_1803fbfa1(CPU*s){
/* 1803fbfa1: movaps xmm4, xmmword ptr [r9] */
L_1803fbfa1_0:;
L_1803fbfa1_1:;
wr(s->u,8,16,mr((uint64_t)rd(s->r,136,8),16));
L_1803fbfa1_2:;
wr(s->u,87,16,rd(s->u,8,16));
L_1803fbfa1_3:;
wr(s->r,4864,4,rd(s->u,87,4));
L_1803fbfa1_4:;
wr(s->r,4868,4,rd(s->u,91,4));
L_1803fbfa1_5:;
wr(s->r,4872,4,rd(s->u,95,4));
L_1803fbfa1_6:;
wr(s->r,4876,4,rd(s->u,99,4));
L_1803fbfa1_7:;
/* 1803fbfa5: movaps xmm5, xmm1 */
L_1803fbfa5_0:;
L_1803fbfa5_1:;
wr(s->r,4928,4,rd(s->r,4672,4));
L_1803fbfa5_2:;
wr(s->r,4932,4,rd(s->r,4676,4));
L_1803fbfa5_3:;
wr(s->r,4936,4,rd(s->r,4680,4));
L_1803fbfa5_4:;
wr(s->r,4940,4,rd(s->r,4684,4));
L_1803fbfa5_5:;
/* 1803fbfa8: movaps xmm6, xmm0 */
L_1803fbfa8_0:;
L_1803fbfa8_1:;
wr(s->r,4992,4,rd(s->r,4608,4));
L_1803fbfa8_2:;
wr(s->r,4996,4,rd(s->r,4612,4));
L_1803fbfa8_3:;
wr(s->r,5000,4,rd(s->r,4616,4));
L_1803fbfa8_4:;
wr(s->r,5004,4,rd(s->r,4620,4));
L_1803fbfa8_5:;
/* 1803fbfab: cmpltps xmm5, xmm4 */
L_1803fbfab_0:;
L_1803fbfab_1:;
wr(s->r,4480,4,rd(s->r,4928,4));
L_1803fbfab_2:;
wr(s->r,4484,4,rd(s->r,4932,4));
L_1803fbfab_3:;
wr(s->r,4488,4,rd(s->r,4936,4));
L_1803fbfab_4:;
wr(s->r,4492,4,rd(s->r,4940,4));
L_1803fbfab_5:;
wr(s->r,4496,4,rd(s->r,4864,4));
L_1803fbfab_6:;
wr(s->r,4500,4,rd(s->r,4868,4));
L_1803fbfab_7:;
wr(s->r,4504,4,rd(s->r,4872,4));
L_1803fbfab_8:;
wr(s->r,4508,4,rd(s->r,4876,4));
L_1803fbfab_9:;
wr(s->u,67,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803fbfab_10:;
wr(s->u,68,4,rd(s->u,67,1));
L_1803fbfab_11:;
wr(s->r,4480,4,(rd(s->u,68,4)*((U)UINT64_C(0xffffffff))));
L_1803fbfab_12:;
wr(s->u,72,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803fbfab_13:;
wr(s->u,73,4,rd(s->u,72,1));
L_1803fbfab_14:;
wr(s->r,4484,4,(rd(s->u,73,4)*((U)UINT64_C(0xffffffff))));
L_1803fbfab_15:;
wr(s->u,77,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803fbfab_16:;
wr(s->u,78,4,rd(s->u,77,1));
L_1803fbfab_17:;
wr(s->r,4488,4,(rd(s->u,78,4)*((U)UINT64_C(0xffffffff))));
L_1803fbfab_18:;
wr(s->u,82,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803fbfab_19:;
wr(s->u,83,4,rd(s->u,82,1));
L_1803fbfab_20:;
wr(s->r,4492,4,(rd(s->u,83,4)*((U)UINT64_C(0xffffffff))));
L_1803fbfab_21:;
wr(s->r,4928,4,rd(s->r,4480,4));
L_1803fbfab_22:;
wr(s->r,4932,4,rd(s->r,4484,4));
L_1803fbfab_23:;
wr(s->r,4936,4,rd(s->r,4488,4));
L_1803fbfab_24:;
wr(s->r,4940,4,rd(s->r,4492,4));
L_1803fbfab_25:;
/* 1803fbfaf: andps xmm6, xmm5 */
L_1803fbfaf_0:;
L_1803fbfaf_1:;
wr(s->r,4992,4,(rd(s->r,4992,4)&rd(s->r,4928,4)));
L_1803fbfaf_2:;
wr(s->r,4996,4,(rd(s->r,4996,4)&rd(s->r,4932,4)));
L_1803fbfaf_3:;
wr(s->r,5000,4,(rd(s->r,5000,4)&rd(s->r,4936,4)));
L_1803fbfaf_4:;
wr(s->r,5004,4,(rd(s->r,5004,4)&rd(s->r,4940,4)));
L_1803fbfaf_5:;
/* 1803fbfb2: andnps xmm5, xmm4 */
L_1803fbfb2_0:;
L_1803fbfb2_1:;
wr(s->u,51,4,(~rd(s->r,4928,4)));
L_1803fbfb2_2:;
wr(s->r,4928,4,(rd(s->u,51,4)&rd(s->r,4864,4)));
L_1803fbfb2_3:;
wr(s->u,55,4,(~rd(s->r,4932,4)));
L_1803fbfb2_4:;
wr(s->r,4932,4,(rd(s->u,55,4)&rd(s->r,4868,4)));
L_1803fbfb2_5:;
wr(s->u,59,4,(~rd(s->r,4936,4)));
L_1803fbfb2_6:;
wr(s->r,4936,4,(rd(s->u,59,4)&rd(s->r,4872,4)));
L_1803fbfb2_7:;
wr(s->u,63,4,(~rd(s->r,4940,4)));
L_1803fbfb2_8:;
wr(s->r,4940,4,(rd(s->u,63,4)&rd(s->r,4876,4)));
L_1803fbfb2_9:;
/* 1803fbfb5: movaps xmm4, xmmword ptr [r9 + 0x10] */
L_1803fbfb5_0:;
L_1803fbfb5_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x10))));
L_1803fbfb5_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fbfb5_3:;
wr(s->u,87,16,rd(s->u,8,16));
L_1803fbfb5_4:;
wr(s->r,4864,4,rd(s->u,87,4));
L_1803fbfb5_5:;
wr(s->r,4868,4,rd(s->u,91,4));
L_1803fbfb5_6:;
wr(s->r,4872,4,rd(s->u,95,4));
L_1803fbfb5_7:;
wr(s->r,4876,4,rd(s->u,99,4));
L_1803fbfb5_8:;
/* 1803fbfba: orps xmm6, xmm5 */
L_1803fbfba_0:;
L_1803fbfba_1:;
wr(s->r,4992,16,(rd(s->r,4992,16)|rd(s->r,4928,16)));
L_1803fbfba_2:;
/* 1803fbfbd: movaps xmmword ptr [r9], xmm6 */
L_1803fbfbd_0:;
L_1803fbfbd_1:;
wr(s->u,8,16,rd(s->r,4992,16));
L_1803fbfbd_2:;
mw((uint64_t)rd(s->r,136,8),16,rd(s->u,8,16));
L_1803fbfbd_3:;
/* 1803fbfc1: movaps xmm5, xmm1 */
L_1803fbfc1_0:;
L_1803fbfc1_1:;
wr(s->r,4928,4,rd(s->r,4672,4));
L_1803fbfc1_2:;
wr(s->r,4932,4,rd(s->r,4676,4));
L_1803fbfc1_3:;
wr(s->r,4936,4,rd(s->r,4680,4));
L_1803fbfc1_4:;
wr(s->r,4940,4,rd(s->r,4684,4));
L_1803fbfc1_5:;
/* 1803fbfc4: movaps xmm6, xmm0 */
L_1803fbfc4_0:;
L_1803fbfc4_1:;
wr(s->r,4992,4,rd(s->r,4608,4));
L_1803fbfc4_2:;
wr(s->r,4996,4,rd(s->r,4612,4));
L_1803fbfc4_3:;
wr(s->r,5000,4,rd(s->r,4616,4));
L_1803fbfc4_4:;
wr(s->r,5004,4,rd(s->r,4620,4));
L_1803fbfc4_5:;
/* 1803fbfc7: cmpltps xmm5, xmm4 */
L_1803fbfc7_0:;
L_1803fbfc7_1:;
wr(s->r,4480,4,rd(s->r,4928,4));
L_1803fbfc7_2:;
wr(s->r,4484,4,rd(s->r,4932,4));
L_1803fbfc7_3:;
wr(s->r,4488,4,rd(s->r,4936,4));
L_1803fbfc7_4:;
wr(s->r,4492,4,rd(s->r,4940,4));
L_1803fbfc7_5:;
wr(s->r,4496,4,rd(s->r,4864,4));
L_1803fbfc7_6:;
wr(s->r,4500,4,rd(s->r,4868,4));
L_1803fbfc7_7:;
wr(s->r,4504,4,rd(s->r,4872,4));
L_1803fbfc7_8:;
wr(s->r,4508,4,rd(s->r,4876,4));
L_1803fbfc7_9:;
wr(s->u,67,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803fbfc7_10:;
wr(s->u,68,4,rd(s->u,67,1));
L_1803fbfc7_11:;
wr(s->r,4480,4,(rd(s->u,68,4)*((U)UINT64_C(0xffffffff))));
L_1803fbfc7_12:;
wr(s->u,72,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803fbfc7_13:;
wr(s->u,73,4,rd(s->u,72,1));
L_1803fbfc7_14:;
wr(s->r,4484,4,(rd(s->u,73,4)*((U)UINT64_C(0xffffffff))));
L_1803fbfc7_15:;
wr(s->u,77,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803fbfc7_16:;
wr(s->u,78,4,rd(s->u,77,1));
L_1803fbfc7_17:;
wr(s->r,4488,4,(rd(s->u,78,4)*((U)UINT64_C(0xffffffff))));
L_1803fbfc7_18:;
wr(s->u,82,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803fbfc7_19:;
wr(s->u,83,4,rd(s->u,82,1));
L_1803fbfc7_20:;
wr(s->r,4492,4,(rd(s->u,83,4)*((U)UINT64_C(0xffffffff))));
L_1803fbfc7_21:;
wr(s->r,4928,4,rd(s->r,4480,4));
L_1803fbfc7_22:;
wr(s->r,4932,4,rd(s->r,4484,4));
L_1803fbfc7_23:;
wr(s->r,4936,4,rd(s->r,4488,4));
L_1803fbfc7_24:;
wr(s->r,4940,4,rd(s->r,4492,4));
L_1803fbfc7_25:;
/* 1803fbfcb: andps xmm6, xmm5 */
L_1803fbfcb_0:;
L_1803fbfcb_1:;
wr(s->r,4992,4,(rd(s->r,4992,4)&rd(s->r,4928,4)));
L_1803fbfcb_2:;
wr(s->r,4996,4,(rd(s->r,4996,4)&rd(s->r,4932,4)));
L_1803fbfcb_3:;
wr(s->r,5000,4,(rd(s->r,5000,4)&rd(s->r,4936,4)));
L_1803fbfcb_4:;
wr(s->r,5004,4,(rd(s->r,5004,4)&rd(s->r,4940,4)));
L_1803fbfcb_5:;
/* 1803fbfce: andnps xmm5, xmm4 */
L_1803fbfce_0:;
L_1803fbfce_1:;
wr(s->u,51,4,(~rd(s->r,4928,4)));
L_1803fbfce_2:;
wr(s->r,4928,4,(rd(s->u,51,4)&rd(s->r,4864,4)));
L_1803fbfce_3:;
wr(s->u,55,4,(~rd(s->r,4932,4)));
L_1803fbfce_4:;
wr(s->r,4932,4,(rd(s->u,55,4)&rd(s->r,4868,4)));
L_1803fbfce_5:;
wr(s->u,59,4,(~rd(s->r,4936,4)));
L_1803fbfce_6:;
wr(s->r,4936,4,(rd(s->u,59,4)&rd(s->r,4872,4)));
L_1803fbfce_7:;
wr(s->u,63,4,(~rd(s->r,4940,4)));
L_1803fbfce_8:;
wr(s->r,4940,4,(rd(s->u,63,4)&rd(s->r,4876,4)));
L_1803fbfce_9:;
/* 1803fbfd1: orps xmm6, xmm5 */
L_1803fbfd1_0:;
L_1803fbfd1_1:;
wr(s->r,4992,16,(rd(s->r,4992,16)|rd(s->r,4928,16)));
L_1803fbfd1_2:;
/* 1803fbfd4: movaps xmmword ptr [r9 + 0x10], xmm6 */
L_1803fbfd4_0:;
L_1803fbfd4_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x10))));
L_1803fbfd4_2:;
wr(s->u,8,16,rd(s->r,4992,16));
L_1803fbfd4_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,8,16));
L_1803fbfd4_4:;
/* 1803fbfd9: add r9, 0x20 */
L_1803fbfd9_0:;
L_1803fbfd9_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803fbfd9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x20)),8,0));
L_1803fbfd9_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x20))));
L_1803fbfd9_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbfd9_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fbfd9_6:;
wr(s->u,25,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fbfd9_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fbfd9_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fbfd9_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fbfd9_10:;
/* 1803fbfdd: cmp r9, rax */
L_1803fbfdd_0:;
L_1803fbfdd_1:;
wr(s->u,35,8,rd(s->r,0,8));
L_1803fbfdd_2:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->u,35,8)));
L_1803fbfdd_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->u,35,8),8,1));
L_1803fbfdd_4:;
wr(s->u,43,8,(rd(s->r,136,8)-rd(s->u,35,8)));
L_1803fbfdd_5:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbfdd_6:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1803fbfdd_7:;
wr(s->u,25,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1803fbfdd_8:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fbfdd_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fbfdd_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fbfdd_11:;
/* 1803fbfe0: jl 0x1803fbfa1 */
L_1803fbfe0_0:;
L_1803fbfe0_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fbfe0_2:;
if(rd(s->u,24,1)){goto L_1803fbfa1_0;}
L_1803fbfe0_3:;
return UINT64_C(0x1803fbfe2);
}
uint64_t b_1803fbfe2(CPU*s){
/* 1803fbfe2: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803fbfe2_0:;
L_1803fbfe2_1:;
wr(s->u,5,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fbfe2_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803fbfe2_3:;
wr(s->u,108,16,rd(s->u,13,16));
L_1803fbfe2_4:;
wr(s->r,4992,4,rd(s->u,108,4));
L_1803fbfe2_5:;
wr(s->r,4996,4,rd(s->u,112,4));
L_1803fbfe2_6:;
wr(s->r,5000,4,rd(s->u,116,4));
L_1803fbfe2_7:;
wr(s->r,5004,4,rd(s->u,120,4));
L_1803fbfe2_8:;
/* 1803fbfe7: mov r9, rdx */
L_1803fbfe7_0:;
L_1803fbfe7_1:;
wr(s->r,136,8,rd(s->r,16,8));
L_1803fbfe7_2:;
/* 1803fbfea: shl r9, 2 */
L_1803fbfea_0:;
L_1803fbfea_1:;
wr(s->u,96,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803fbfea_2:;
wr(s->u,100,8,rd(s->r,136,8));
L_1803fbfea_3:;
wr(s->r,136,8,((rd(s->u,96,4)>=64)?0:(rd(s->r,136,8)<<rd(s->u,96,4))));
L_1803fbfea_4:;
wr(s->u,63,1,(rd(s->u,96,4)==((U)UINT64_C(0x0))));
L_1803fbfea_5:;
wr(s->u,64,4,(rd(s->u,96,4)-((U)UINT64_C(0x1))));
L_1803fbfea_6:;
wr(s->u,68,8,((rd(s->u,64,4)>=64)?0:(rd(s->u,100,8)<<rd(s->u,64,4))));
L_1803fbfea_7:;
wr(s->u,76,1,(sx(rd(s->u,68,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbfea_8:;
wr(s->u,0,1,rd(s->u,63,1));
L_1803fbfea_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fbfea_10:;
wr(s->u,2,1,(!rd(s->u,63,1)));
L_1803fbfea_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbfea_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,76,1)));
L_1803fbfea_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbfea_14:;
wr(s->u,77,1,(rd(s->u,96,4)==((U)UINT64_C(0x1))));
L_1803fbfea_15:;
wr(s->u,78,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbfea_16:;
wr(s->u,79,1,(rd(s->r,512,1)^rd(s->u,78,1)));
L_1803fbfea_17:;
wr(s->u,0,1,rd(s->u,77,1));
L_1803fbfea_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,79,1)));
L_1803fbfea_19:;
wr(s->u,2,1,(!rd(s->u,77,1)));
L_1803fbfea_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbfea_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fbfea_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbfea_23:;
wr(s->u,40,1,(rd(s->u,96,4)!=((U)UINT64_C(0x0))));
L_1803fbfea_24:;
wr(s->u,41,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbfea_25:;
wr(s->u,42,1,(!rd(s->u,40,1)));
L_1803fbfea_26:;
wr(s->u,43,1,(rd(s->u,42,1)&rd(s->r,519,1)));
L_1803fbfea_27:;
wr(s->u,44,1,(rd(s->u,40,1)&rd(s->u,41,1)));
L_1803fbfea_28:;
wr(s->r,519,1,(rd(s->u,43,1)|rd(s->u,44,1)));
L_1803fbfea_29:;
wr(s->u,45,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fbfea_30:;
wr(s->u,46,1,(!rd(s->u,40,1)));
L_1803fbfea_31:;
wr(s->u,47,1,(rd(s->u,46,1)&rd(s->r,518,1)));
L_1803fbfea_32:;
wr(s->u,48,1,(rd(s->u,40,1)&rd(s->u,45,1)));
L_1803fbfea_33:;
wr(s->r,518,1,(rd(s->u,47,1)|rd(s->u,48,1)));
L_1803fbfea_34:;
wr(s->u,49,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fbfea_35:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803fbfea_36:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803fbfea_37:;
wr(s->u,59,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803fbfea_38:;
wr(s->u,60,1,(!rd(s->u,40,1)));
L_1803fbfea_39:;
wr(s->u,61,1,(rd(s->u,60,1)&rd(s->r,514,1)));
L_1803fbfea_40:;
wr(s->u,62,1,(rd(s->u,40,1)&rd(s->u,59,1)));
L_1803fbfea_41:;
wr(s->r,514,1,(rd(s->u,61,1)|rd(s->u,62,1)));
L_1803fbfea_42:;
/* 1803fbfee: mov rax, r8 */
L_1803fbfee_0:;
L_1803fbfee_1:;
wr(s->r,0,8,rd(s->r,128,8));
L_1803fbfee_2:;
/* 1803fbff1: shl rax, 2 */
L_1803fbff1_0:;
L_1803fbff1_1:;
wr(s->u,96,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803fbff1_2:;
wr(s->u,100,8,rd(s->r,0,8));
L_1803fbff1_3:;
wr(s->r,0,8,((rd(s->u,96,4)>=64)?0:(rd(s->r,0,8)<<rd(s->u,96,4))));
L_1803fbff1_4:;
wr(s->u,63,1,(rd(s->u,96,4)==((U)UINT64_C(0x0))));
L_1803fbff1_5:;
wr(s->u,64,4,(rd(s->u,96,4)-((U)UINT64_C(0x1))));
L_1803fbff1_6:;
wr(s->u,68,8,((rd(s->u,64,4)>=64)?0:(rd(s->u,100,8)<<rd(s->u,64,4))));
L_1803fbff1_7:;
wr(s->u,76,1,(sx(rd(s->u,68,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbff1_8:;
wr(s->u,0,1,rd(s->u,63,1));
L_1803fbff1_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fbff1_10:;
wr(s->u,2,1,(!rd(s->u,63,1)));
L_1803fbff1_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbff1_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,76,1)));
L_1803fbff1_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbff1_14:;
wr(s->u,77,1,(rd(s->u,96,4)==((U)UINT64_C(0x1))));
L_1803fbff1_15:;
wr(s->u,78,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbff1_16:;
wr(s->u,79,1,(rd(s->r,512,1)^rd(s->u,78,1)));
L_1803fbff1_17:;
wr(s->u,0,1,rd(s->u,77,1));
L_1803fbff1_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,79,1)));
L_1803fbff1_19:;
wr(s->u,2,1,(!rd(s->u,77,1)));
L_1803fbff1_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbff1_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fbff1_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbff1_23:;
wr(s->u,40,1,(rd(s->u,96,4)!=((U)UINT64_C(0x0))));
L_1803fbff1_24:;
wr(s->u,41,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbff1_25:;
wr(s->u,42,1,(!rd(s->u,40,1)));
L_1803fbff1_26:;
wr(s->u,43,1,(rd(s->u,42,1)&rd(s->r,519,1)));
L_1803fbff1_27:;
wr(s->u,44,1,(rd(s->u,40,1)&rd(s->u,41,1)));
L_1803fbff1_28:;
wr(s->r,519,1,(rd(s->u,43,1)|rd(s->u,44,1)));
L_1803fbff1_29:;
wr(s->u,45,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fbff1_30:;
wr(s->u,46,1,(!rd(s->u,40,1)));
L_1803fbff1_31:;
wr(s->u,47,1,(rd(s->u,46,1)&rd(s->r,518,1)));
L_1803fbff1_32:;
wr(s->u,48,1,(rd(s->u,40,1)&rd(s->u,45,1)));
L_1803fbff1_33:;
wr(s->r,518,1,(rd(s->u,47,1)|rd(s->u,48,1)));
L_1803fbff1_34:;
wr(s->u,49,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fbff1_35:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803fbff1_36:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803fbff1_37:;
wr(s->u,59,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803fbff1_38:;
wr(s->u,60,1,(!rd(s->u,40,1)));
L_1803fbff1_39:;
wr(s->u,61,1,(rd(s->u,60,1)&rd(s->r,514,1)));
L_1803fbff1_40:;
wr(s->u,62,1,(rd(s->u,40,1)&rd(s->u,59,1)));
L_1803fbff1_41:;
wr(s->r,514,1,(rd(s->u,61,1)|rd(s->u,62,1)));
L_1803fbff1_42:;
/* 1803fbff5: cmp rdx, r8 */
L_1803fbff5_0:;
L_1803fbff5_1:;
wr(s->u,80,8,rd(s->r,128,8));
L_1803fbff5_2:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,80,8)));
L_1803fbff5_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,80,8),8,1));
L_1803fbff5_4:;
wr(s->u,88,8,(rd(s->r,16,8)-rd(s->u,80,8)));
L_1803fbff5_5:;
wr(s->r,519,1,(sx(rd(s->u,88,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbff5_6:;
wr(s->r,518,1,(rd(s->u,88,8)==((U)UINT64_C(0x0))));
L_1803fbff5_7:;
wr(s->u,30,8,(rd(s->u,88,8)&((U)UINT64_C(0xff))));
L_1803fbff5_8:;
wr(s->u,38,1,pop(rd(s->u,30,8),8));
L_1803fbff5_9:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803fbff5_10:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803fbff5_11:;
/* 1803fbff8: jge 0x1803fc014 */
L_1803fbff8_0:;
L_1803fbff8_1:;
wr(s->u,29,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fbff8_2:;
if(rd(s->u,29,1)){return UINT64_C(0x1803fc014);}
L_1803fbff8_3:;
return UINT64_C(0x1803fbffa);
}
uint64_t b_1803fbfe7(CPU*s){
/* 1803fbfe7: mov r9, rdx */
L_1803fbfe7_0:;
L_1803fbfe7_1:;
wr(s->r,136,8,rd(s->r,16,8));
L_1803fbfe7_2:;
/* 1803fbfea: shl r9, 2 */
L_1803fbfea_0:;
L_1803fbfea_1:;
wr(s->u,72,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803fbfea_2:;
wr(s->u,76,8,rd(s->r,136,8));
L_1803fbfea_3:;
wr(s->r,136,8,((rd(s->u,72,4)>=64)?0:(rd(s->r,136,8)<<rd(s->u,72,4))));
L_1803fbfea_4:;
wr(s->u,39,1,(rd(s->u,72,4)==((U)UINT64_C(0x0))));
L_1803fbfea_5:;
wr(s->u,40,4,(rd(s->u,72,4)-((U)UINT64_C(0x1))));
L_1803fbfea_6:;
wr(s->u,44,8,((rd(s->u,40,4)>=64)?0:(rd(s->u,76,8)<<rd(s->u,40,4))));
L_1803fbfea_7:;
wr(s->u,52,1,(sx(rd(s->u,44,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbfea_8:;
wr(s->u,0,1,rd(s->u,39,1));
L_1803fbfea_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fbfea_10:;
wr(s->u,2,1,(!rd(s->u,39,1)));
L_1803fbfea_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbfea_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,52,1)));
L_1803fbfea_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbfea_14:;
wr(s->u,53,1,(rd(s->u,72,4)==((U)UINT64_C(0x1))));
L_1803fbfea_15:;
wr(s->u,54,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbfea_16:;
wr(s->u,55,1,(rd(s->r,512,1)^rd(s->u,54,1)));
L_1803fbfea_17:;
wr(s->u,0,1,rd(s->u,53,1));
L_1803fbfea_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,55,1)));
L_1803fbfea_19:;
wr(s->u,2,1,(!rd(s->u,53,1)));
L_1803fbfea_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbfea_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fbfea_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbfea_23:;
wr(s->u,16,1,(rd(s->u,72,4)!=((U)UINT64_C(0x0))));
L_1803fbfea_24:;
wr(s->u,17,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbfea_25:;
wr(s->u,18,1,(!rd(s->u,16,1)));
L_1803fbfea_26:;
wr(s->u,19,1,(rd(s->u,18,1)&rd(s->r,519,1)));
L_1803fbfea_27:;
wr(s->u,20,1,(rd(s->u,16,1)&rd(s->u,17,1)));
L_1803fbfea_28:;
wr(s->r,519,1,(rd(s->u,19,1)|rd(s->u,20,1)));
L_1803fbfea_29:;
wr(s->u,21,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fbfea_30:;
wr(s->u,22,1,(!rd(s->u,16,1)));
L_1803fbfea_31:;
wr(s->u,23,1,(rd(s->u,22,1)&rd(s->r,518,1)));
L_1803fbfea_32:;
wr(s->u,24,1,(rd(s->u,16,1)&rd(s->u,21,1)));
L_1803fbfea_33:;
wr(s->r,518,1,(rd(s->u,23,1)|rd(s->u,24,1)));
L_1803fbfea_34:;
wr(s->u,25,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fbfea_35:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fbfea_36:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fbfea_37:;
wr(s->u,35,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fbfea_38:;
wr(s->u,36,1,(!rd(s->u,16,1)));
L_1803fbfea_39:;
wr(s->u,37,1,(rd(s->u,36,1)&rd(s->r,514,1)));
L_1803fbfea_40:;
wr(s->u,38,1,(rd(s->u,16,1)&rd(s->u,35,1)));
L_1803fbfea_41:;
wr(s->r,514,1,(rd(s->u,37,1)|rd(s->u,38,1)));
L_1803fbfea_42:;
/* 1803fbfee: mov rax, r8 */
L_1803fbfee_0:;
L_1803fbfee_1:;
wr(s->r,0,8,rd(s->r,128,8));
L_1803fbfee_2:;
/* 1803fbff1: shl rax, 2 */
L_1803fbff1_0:;
L_1803fbff1_1:;
wr(s->u,72,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803fbff1_2:;
wr(s->u,76,8,rd(s->r,0,8));
L_1803fbff1_3:;
wr(s->r,0,8,((rd(s->u,72,4)>=64)?0:(rd(s->r,0,8)<<rd(s->u,72,4))));
L_1803fbff1_4:;
wr(s->u,39,1,(rd(s->u,72,4)==((U)UINT64_C(0x0))));
L_1803fbff1_5:;
wr(s->u,40,4,(rd(s->u,72,4)-((U)UINT64_C(0x1))));
L_1803fbff1_6:;
wr(s->u,44,8,((rd(s->u,40,4)>=64)?0:(rd(s->u,76,8)<<rd(s->u,40,4))));
L_1803fbff1_7:;
wr(s->u,52,1,(sx(rd(s->u,44,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbff1_8:;
wr(s->u,0,1,rd(s->u,39,1));
L_1803fbff1_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fbff1_10:;
wr(s->u,2,1,(!rd(s->u,39,1)));
L_1803fbff1_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbff1_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,52,1)));
L_1803fbff1_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbff1_14:;
wr(s->u,53,1,(rd(s->u,72,4)==((U)UINT64_C(0x1))));
L_1803fbff1_15:;
wr(s->u,54,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbff1_16:;
wr(s->u,55,1,(rd(s->r,512,1)^rd(s->u,54,1)));
L_1803fbff1_17:;
wr(s->u,0,1,rd(s->u,53,1));
L_1803fbff1_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,55,1)));
L_1803fbff1_19:;
wr(s->u,2,1,(!rd(s->u,53,1)));
L_1803fbff1_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fbff1_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fbff1_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fbff1_23:;
wr(s->u,16,1,(rd(s->u,72,4)!=((U)UINT64_C(0x0))));
L_1803fbff1_24:;
wr(s->u,17,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbff1_25:;
wr(s->u,18,1,(!rd(s->u,16,1)));
L_1803fbff1_26:;
wr(s->u,19,1,(rd(s->u,18,1)&rd(s->r,519,1)));
L_1803fbff1_27:;
wr(s->u,20,1,(rd(s->u,16,1)&rd(s->u,17,1)));
L_1803fbff1_28:;
wr(s->r,519,1,(rd(s->u,19,1)|rd(s->u,20,1)));
L_1803fbff1_29:;
wr(s->u,21,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fbff1_30:;
wr(s->u,22,1,(!rd(s->u,16,1)));
L_1803fbff1_31:;
wr(s->u,23,1,(rd(s->u,22,1)&rd(s->r,518,1)));
L_1803fbff1_32:;
wr(s->u,24,1,(rd(s->u,16,1)&rd(s->u,21,1)));
L_1803fbff1_33:;
wr(s->r,518,1,(rd(s->u,23,1)|rd(s->u,24,1)));
L_1803fbff1_34:;
wr(s->u,25,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fbff1_35:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fbff1_36:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fbff1_37:;
wr(s->u,35,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fbff1_38:;
wr(s->u,36,1,(!rd(s->u,16,1)));
L_1803fbff1_39:;
wr(s->u,37,1,(rd(s->u,36,1)&rd(s->r,514,1)));
L_1803fbff1_40:;
wr(s->u,38,1,(rd(s->u,16,1)&rd(s->u,35,1)));
L_1803fbff1_41:;
wr(s->r,514,1,(rd(s->u,37,1)|rd(s->u,38,1)));
L_1803fbff1_42:;
/* 1803fbff5: cmp rdx, r8 */
L_1803fbff5_0:;
L_1803fbff5_1:;
wr(s->u,56,8,rd(s->r,128,8));
L_1803fbff5_2:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,56,8)));
L_1803fbff5_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,56,8),8,1));
L_1803fbff5_4:;
wr(s->u,64,8,(rd(s->r,16,8)-rd(s->u,56,8)));
L_1803fbff5_5:;
wr(s->r,519,1,(sx(rd(s->u,64,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fbff5_6:;
wr(s->r,518,1,(rd(s->u,64,8)==((U)UINT64_C(0x0))));
L_1803fbff5_7:;
wr(s->u,6,8,(rd(s->u,64,8)&((U)UINT64_C(0xff))));
L_1803fbff5_8:;
wr(s->u,14,1,pop(rd(s->u,6,8),8));
L_1803fbff5_9:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_1803fbff5_10:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_1803fbff5_11:;
/* 1803fbff8: jge 0x1803fc014 */
L_1803fbff8_0:;
L_1803fbff8_1:;
wr(s->u,5,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fbff8_2:;
if(rd(s->u,5,1)){return UINT64_C(0x1803fc014);}
L_1803fbff8_3:;
return UINT64_C(0x1803fbffa);
}
uint64_t b_1803fbffa(CPU*s){
/* 1803fbffa: movss xmm0, dword ptr [r9 + rcx] */
L_1803fbffa_0:;
L_1803fbffa_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803fbffa_2:;
wr(s->u,8,8,(rd(s->r,136,8)+rd(s->u,0,8)));
L_1803fbffa_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fbffa_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803fbffa_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fbffa_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fbffa_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fbffa_8:;
/* 1803fc000: comiss xmm0, xmm2 */
L_1803fc000_0:;
L_1803fc000_1:;
wr(s->u,21,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803fc000_2:;
wr(s->u,22,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803fc000_3:;
wr(s->r,514,1,((rd(s->u,21,1)!=0)||(rd(s->u,22,1)!=0)));
L_1803fc000_4:;
wr(s->u,23,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4736,4),4)));
L_1803fc000_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,23,1)));
L_1803fc000_6:;
wr(s->u,24,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4736,4),4)));
L_1803fc000_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,24,1)));
L_1803fc000_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc000_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fc000_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fc000_11:;
/* 1803fc003: jbe 0x1803fc00b */
L_1803fc003_0:;
L_1803fc003_1:;
wr(s->u,20,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fc003_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fc00b);}
L_1803fc003_3:;
return UINT64_C(0x1803fc005);
}
