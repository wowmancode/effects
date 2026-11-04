#include "lift_runtime.h"
uint64_t b_1803fa017(CPU*s){
/* 1803fa017: cvtps2pd xmm1, qword ptr [r11] */
L_1803fa017_0:;
L_1803fa017_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,152,8),8));
L_1803fa017_2:;
wr(s->u,43,8,rd(s->u,8,8));
L_1803fa017_3:;
wr(s->r,4672,8,fb(fv(rd(s->u,43,4),4),8));
L_1803fa017_4:;
wr(s->r,4680,8,fb(fv(rd(s->u,47,4),4),8));
L_1803fa017_5:;
/* 1803fa01b: movaps xmm5, xmm1 */
L_1803fa01b_0:;
L_1803fa01b_1:;
wr(s->r,4928,4,rd(s->r,4672,4));
L_1803fa01b_2:;
wr(s->r,4932,4,rd(s->r,4676,4));
L_1803fa01b_3:;
wr(s->r,4936,4,rd(s->r,4680,4));
L_1803fa01b_4:;
wr(s->r,4940,4,rd(s->r,4684,4));
L_1803fa01b_5:;
/* 1803fa01e: mulpd xmm5, xmm1 */
L_1803fa01e_0:;
L_1803fa01e_1:;
wr(s->r,4928,8,fb(fv(rd(s->r,4928,8),8)*fv(rd(s->r,4672,8),8),8));
L_1803fa01e_2:;
wr(s->r,4936,8,fb(fv(rd(s->r,4936,8),8)*fv(rd(s->r,4680,8),8),8));
L_1803fa01e_3:;
/* 1803fa022: addpd xmm2, xmm1 */
L_1803fa022_0:;
L_1803fa022_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803fa022_2:;
wr(s->r,4744,8,fb(fv(rd(s->r,4744,8),8)+fv(rd(s->r,4680,8),8),8));
L_1803fa022_3:;
/* 1803fa026: cvtps2pd xmm1, qword ptr [r11 + 8] */
L_1803fa026_0:;
L_1803fa026_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x8))));
L_1803fa026_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fa026_3:;
wr(s->u,43,8,rd(s->u,8,8));
L_1803fa026_4:;
wr(s->r,4672,8,fb(fv(rd(s->u,43,4),4),8));
L_1803fa026_5:;
wr(s->r,4680,8,fb(fv(rd(s->u,47,4),4),8));
L_1803fa026_6:;
/* 1803fa02b: addpd xmm3, xmm5 */
L_1803fa02b_0:;
L_1803fa02b_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->r,4928,8),8),8));
L_1803fa02b_2:;
wr(s->r,4808,8,fb(fv(rd(s->r,4808,8),8)+fv(rd(s->r,4936,8),8),8));
L_1803fa02b_3:;
/* 1803fa02f: movaps xmm5, xmm1 */
L_1803fa02f_0:;
L_1803fa02f_1:;
wr(s->r,4928,4,rd(s->r,4672,4));
L_1803fa02f_2:;
wr(s->r,4932,4,rd(s->r,4676,4));
L_1803fa02f_3:;
wr(s->r,4936,4,rd(s->r,4680,4));
L_1803fa02f_4:;
wr(s->r,4940,4,rd(s->r,4684,4));
L_1803fa02f_5:;
/* 1803fa032: mulpd xmm5, xmm1 */
L_1803fa032_0:;
L_1803fa032_1:;
wr(s->r,4928,8,fb(fv(rd(s->r,4928,8),8)*fv(rd(s->r,4672,8),8),8));
L_1803fa032_2:;
wr(s->r,4936,8,fb(fv(rd(s->r,4936,8),8)*fv(rd(s->r,4680,8),8),8));
L_1803fa032_3:;
/* 1803fa036: addpd xmm0, xmm1 */
L_1803fa036_0:;
L_1803fa036_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803fa036_2:;
wr(s->r,4616,8,fb(fv(rd(s->r,4616,8),8)+fv(rd(s->r,4680,8),8),8));
L_1803fa036_3:;
/* 1803fa03a: cvtps2pd xmm1, qword ptr [r11 + 0x10] */
L_1803fa03a_0:;
L_1803fa03a_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x10))));
L_1803fa03a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fa03a_3:;
wr(s->u,43,8,rd(s->u,8,8));
L_1803fa03a_4:;
wr(s->r,4672,8,fb(fv(rd(s->u,43,4),4),8));
L_1803fa03a_5:;
wr(s->r,4680,8,fb(fv(rd(s->u,47,4),4),8));
L_1803fa03a_6:;
/* 1803fa03f: addpd xmm3, xmm5 */
L_1803fa03f_0:;
L_1803fa03f_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->r,4928,8),8),8));
L_1803fa03f_2:;
wr(s->r,4808,8,fb(fv(rd(s->r,4808,8),8)+fv(rd(s->r,4936,8),8),8));
L_1803fa03f_3:;
/* 1803fa043: movaps xmm5, xmm1 */
L_1803fa043_0:;
L_1803fa043_1:;
wr(s->r,4928,4,rd(s->r,4672,4));
L_1803fa043_2:;
wr(s->r,4932,4,rd(s->r,4676,4));
L_1803fa043_3:;
wr(s->r,4936,4,rd(s->r,4680,4));
L_1803fa043_4:;
wr(s->r,4940,4,rd(s->r,4684,4));
L_1803fa043_5:;
/* 1803fa046: mulpd xmm5, xmm1 */
L_1803fa046_0:;
L_1803fa046_1:;
wr(s->r,4928,8,fb(fv(rd(s->r,4928,8),8)*fv(rd(s->r,4672,8),8),8));
L_1803fa046_2:;
wr(s->r,4936,8,fb(fv(rd(s->r,4936,8),8)*fv(rd(s->r,4680,8),8),8));
L_1803fa046_3:;
/* 1803fa04a: addpd xmm2, xmm1 */
L_1803fa04a_0:;
L_1803fa04a_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803fa04a_2:;
wr(s->r,4744,8,fb(fv(rd(s->r,4744,8),8)+fv(rd(s->r,4680,8),8),8));
L_1803fa04a_3:;
/* 1803fa04e: cvtps2pd xmm1, qword ptr [r11 + 0x18] */
L_1803fa04e_0:;
L_1803fa04e_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x18))));
L_1803fa04e_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fa04e_3:;
wr(s->u,43,8,rd(s->u,8,8));
L_1803fa04e_4:;
wr(s->r,4672,8,fb(fv(rd(s->u,43,4),4),8));
L_1803fa04e_5:;
wr(s->r,4680,8,fb(fv(rd(s->u,47,4),4),8));
L_1803fa04e_6:;
/* 1803fa053: addpd xmm3, xmm5 */
L_1803fa053_0:;
L_1803fa053_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->r,4928,8),8),8));
L_1803fa053_2:;
wr(s->r,4808,8,fb(fv(rd(s->r,4808,8),8)+fv(rd(s->r,4936,8),8),8));
L_1803fa053_3:;
/* 1803fa057: movaps xmm5, xmm1 */
L_1803fa057_0:;
L_1803fa057_1:;
wr(s->r,4928,4,rd(s->r,4672,4));
L_1803fa057_2:;
wr(s->r,4932,4,rd(s->r,4676,4));
L_1803fa057_3:;
wr(s->r,4936,4,rd(s->r,4680,4));
L_1803fa057_4:;
wr(s->r,4940,4,rd(s->r,4684,4));
L_1803fa057_5:;
/* 1803fa05a: mulpd xmm5, xmm1 */
L_1803fa05a_0:;
L_1803fa05a_1:;
wr(s->r,4928,8,fb(fv(rd(s->r,4928,8),8)*fv(rd(s->r,4672,8),8),8));
L_1803fa05a_2:;
wr(s->r,4936,8,fb(fv(rd(s->r,4936,8),8)*fv(rd(s->r,4680,8),8),8));
L_1803fa05a_3:;
/* 1803fa05e: addpd xmm0, xmm1 */
L_1803fa05e_0:;
L_1803fa05e_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803fa05e_2:;
wr(s->r,4616,8,fb(fv(rd(s->r,4616,8),8)+fv(rd(s->r,4680,8),8),8));
L_1803fa05e_3:;
/* 1803fa062: addpd xmm3, xmm5 */
L_1803fa062_0:;
L_1803fa062_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->r,4928,8),8),8));
L_1803fa062_2:;
wr(s->r,4808,8,fb(fv(rd(s->r,4808,8),8)+fv(rd(s->r,4936,8),8),8));
L_1803fa062_3:;
/* 1803fa066: add r11, 0x20 */
L_1803fa066_0:;
L_1803fa066_1:;
wr(s->r,512,1,(((rd(s->r,152,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,152,8)));
L_1803fa066_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),((U)UINT64_C(0x20)),8,0));
L_1803fa066_3:;
wr(s->r,152,8,(rd(s->r,152,8)+((U)UINT64_C(0x20))));
L_1803fa066_4:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa066_5:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803fa066_6:;
wr(s->u,17,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803fa066_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803fa066_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fa066_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fa066_10:;
/* 1803fa06a: cmp r11, r10 */
L_1803fa06a_0:;
L_1803fa06a_1:;
wr(s->u,27,8,rd(s->r,144,8));
L_1803fa06a_2:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->u,27,8)));
L_1803fa06a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->u,27,8),8,1));
L_1803fa06a_4:;
wr(s->u,35,8,(rd(s->r,152,8)-rd(s->u,27,8)));
L_1803fa06a_5:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa06a_6:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1803fa06a_7:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1803fa06a_8:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803fa06a_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fa06a_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fa06a_11:;
/* 1803fa06d: jl 0x1803fa017 */
L_1803fa06d_0:;
L_1803fa06d_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa06d_2:;
if(rd(s->u,16,1)){goto L_1803fa017_0;}
L_1803fa06d_3:;
return UINT64_C(0x1803fa06f);
}
uint64_t b_1803fa06f(CPU*s){
/* 1803fa06f: movaps xmm1, xmm3 */
L_1803fa06f_0:;
L_1803fa06f_1:;
wr(s->r,4672,4,rd(s->r,4800,4));
L_1803fa06f_2:;
wr(s->r,4676,4,rd(s->r,4804,4));
L_1803fa06f_3:;
wr(s->r,4680,4,rd(s->r,4808,4));
L_1803fa06f_4:;
wr(s->r,4684,4,rd(s->r,4812,4));
L_1803fa06f_5:;
/* 1803fa072: addpd xmm2, xmm0 */
L_1803fa072_0:;
L_1803fa072_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)+fv(rd(s->r,4608,8),8),8));
L_1803fa072_2:;
wr(s->r,4744,8,fb(fv(rd(s->r,4744,8),8)+fv(rd(s->r,4616,8),8),8));
L_1803fa072_3:;
/* 1803fa076: movaps xmm0, xmm2 */
L_1803fa076_0:;
L_1803fa076_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fa076_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fa076_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fa076_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fa076_5:;
/* 1803fa079: unpckhpd xmm1, xmm3 */
L_1803fa079_0:;
L_1803fa079_1:;
wr(s->r,4672,8,rd(s->r,4680,8));
L_1803fa079_2:;
wr(s->r,4680,8,rd(s->r,4808,8));
L_1803fa079_3:;
/* 1803fa07d: addsd xmm3, xmm1 */
L_1803fa07d_0:;
L_1803fa07d_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803fa07d_2:;
/* 1803fa081: unpckhpd xmm0, xmm2 */
L_1803fa081_0:;
L_1803fa081_1:;
wr(s->r,4608,8,rd(s->r,4616,8));
L_1803fa081_2:;
wr(s->r,4616,8,rd(s->r,4744,8));
L_1803fa081_3:;
/* 1803fa085: addsd xmm2, xmm0 */
L_1803fa085_0:;
L_1803fa085_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)+fv(rd(s->r,4608,8),8),8));
L_1803fa085_2:;
/* 1803fa089: cmp rax, rbp */
L_1803fa089_0:;
L_1803fa089_1:;
wr(s->u,11,8,rd(s->r,40,8));
L_1803fa089_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,11,8)));
L_1803fa089_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,11,8),8,1));
L_1803fa089_4:;
wr(s->u,19,8,(rd(s->r,0,8)-rd(s->u,11,8)));
L_1803fa089_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa089_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fa089_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fa089_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa089_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa089_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa089_11:;
/* 1803fa08c: jge 0x1803fa0b2 */
L_1803fa08c_0:;
L_1803fa08c_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fa08c_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa0b2);}
L_1803fa08c_3:;
return UINT64_C(0x1803fa08e);
}
uint64_t b_1803fa089(CPU*s){
/* 1803fa089: cmp rax, rbp */
L_1803fa089_0:;
L_1803fa089_1:;
wr(s->u,11,8,rd(s->r,40,8));
L_1803fa089_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,11,8)));
L_1803fa089_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,11,8),8,1));
L_1803fa089_4:;
wr(s->u,19,8,(rd(s->r,0,8)-rd(s->u,11,8)));
L_1803fa089_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa089_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fa089_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fa089_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa089_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa089_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa089_11:;
/* 1803fa08c: jge 0x1803fa0b2 */
L_1803fa08c_0:;
L_1803fa08c_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fa08c_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa0b2);}
L_1803fa08c_3:;
return UINT64_C(0x1803fa08e);
}
uint64_t b_1803fa08e(CPU*s){
/* 1803fa08e: lea rcx, [rcx + r9*4] */
L_1803fa08e_0:;
L_1803fa08e_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa08e_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa08e_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803fa08e_4:;
/* 1803fa092: movss xmm0, dword ptr [rcx + rax*4] */
L_1803fa092_0:;
L_1803fa092_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa092_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa092_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa092_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803fa092_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fa092_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fa092_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fa092_8:;
/* 1803fa097: cvtps2pd xmm1, xmm0 */
L_1803fa097_0:;
L_1803fa097_1:;
wr(s->u,47,8,rd(s->r,4608,8));
L_1803fa097_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,47,4),4),8));
L_1803fa097_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,51,4),4),8));
L_1803fa097_4:;
/* 1803fa09a: add rax, 1 */
L_1803fa09a_0:;
L_1803fa09a_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fa09a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fa09a_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fa09a_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa09a_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fa09a_6:;
wr(s->u,21,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fa09a_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa09a_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa09a_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa09a_10:;
/* 1803fa09e: cmp rax, rbp */
L_1803fa09e_0:;
L_1803fa09e_1:;
wr(s->u,31,8,rd(s->r,40,8));
L_1803fa09e_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,31,8)));
L_1803fa09e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,31,8),8,1));
L_1803fa09e_4:;
wr(s->u,39,8,(rd(s->r,0,8)-rd(s->u,31,8)));
L_1803fa09e_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa09e_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fa09e_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fa09e_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa09e_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa09e_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa09e_11:;
/* 1803fa0a1: movaps xmm5, xmm1 */
L_1803fa0a1_0:;
L_1803fa0a1_1:;
wr(s->r,4928,4,rd(s->r,4672,4));
L_1803fa0a1_2:;
wr(s->r,4932,4,rd(s->r,4676,4));
L_1803fa0a1_3:;
wr(s->r,4936,4,rd(s->r,4680,4));
L_1803fa0a1_4:;
wr(s->r,4940,4,rd(s->r,4684,4));
L_1803fa0a1_5:;
/* 1803fa0a4: mulsd xmm5, xmm1 */
L_1803fa0a4_0:;
L_1803fa0a4_1:;
wr(s->r,4928,8,fb(fv(rd(s->r,4928,8),8)*fv(rd(s->r,4672,8),8),8));
L_1803fa0a4_2:;
/* 1803fa0a8: addsd xmm2, xmm1 */
L_1803fa0a8_0:;
L_1803fa0a8_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803fa0a8_2:;
/* 1803fa0ac: addsd xmm3, xmm5 */
L_1803fa0ac_0:;
L_1803fa0ac_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->r,4928,8),8),8));
L_1803fa0ac_2:;
/* 1803fa0b0: jl 0x1803fa092 */
L_1803fa0b0_0:;
L_1803fa0b0_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa0b0_2:;
if(rd(s->u,20,1)){goto L_1803fa092_0;}
L_1803fa0b0_3:;
return UINT64_C(0x1803fa0b2);
}
uint64_t b_1803fa092(CPU*s){
/* 1803fa092: movss xmm0, dword ptr [rcx + rax*4] */
L_1803fa092_0:;
L_1803fa092_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa092_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa092_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa092_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803fa092_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fa092_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fa092_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fa092_8:;
/* 1803fa097: cvtps2pd xmm1, xmm0 */
L_1803fa097_0:;
L_1803fa097_1:;
wr(s->u,47,8,rd(s->r,4608,8));
L_1803fa097_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,47,4),4),8));
L_1803fa097_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,51,4),4),8));
L_1803fa097_4:;
/* 1803fa09a: add rax, 1 */
L_1803fa09a_0:;
L_1803fa09a_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fa09a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fa09a_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fa09a_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa09a_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fa09a_6:;
wr(s->u,21,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fa09a_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa09a_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa09a_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa09a_10:;
/* 1803fa09e: cmp rax, rbp */
L_1803fa09e_0:;
L_1803fa09e_1:;
wr(s->u,31,8,rd(s->r,40,8));
L_1803fa09e_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,31,8)));
L_1803fa09e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,31,8),8,1));
L_1803fa09e_4:;
wr(s->u,39,8,(rd(s->r,0,8)-rd(s->u,31,8)));
L_1803fa09e_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa09e_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fa09e_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fa09e_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa09e_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa09e_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa09e_11:;
/* 1803fa0a1: movaps xmm5, xmm1 */
L_1803fa0a1_0:;
L_1803fa0a1_1:;
wr(s->r,4928,4,rd(s->r,4672,4));
L_1803fa0a1_2:;
wr(s->r,4932,4,rd(s->r,4676,4));
L_1803fa0a1_3:;
wr(s->r,4936,4,rd(s->r,4680,4));
L_1803fa0a1_4:;
wr(s->r,4940,4,rd(s->r,4684,4));
L_1803fa0a1_5:;
/* 1803fa0a4: mulsd xmm5, xmm1 */
L_1803fa0a4_0:;
L_1803fa0a4_1:;
wr(s->r,4928,8,fb(fv(rd(s->r,4928,8),8)*fv(rd(s->r,4672,8),8),8));
L_1803fa0a4_2:;
/* 1803fa0a8: addsd xmm2, xmm1 */
L_1803fa0a8_0:;
L_1803fa0a8_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803fa0a8_2:;
/* 1803fa0ac: addsd xmm3, xmm5 */
L_1803fa0ac_0:;
L_1803fa0ac_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->r,4928,8),8),8));
L_1803fa0ac_2:;
/* 1803fa0b0: jl 0x1803fa092 */
L_1803fa0b0_0:;
L_1803fa0b0_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa0b0_2:;
if(rd(s->u,20,1)){goto L_1803fa092_0;}
L_1803fa0b0_3:;
return UINT64_C(0x1803fa0b2);
}
uint64_t b_1803fa0b2(CPU*s){
/* 1803fa0b2: cvtsi2sd xmm1, edx */
L_1803fa0b2_0:;
L_1803fa0b2_1:;
wr(s->r,4672,8,fb((double)sx(rd(s->r,16,4),4),8));
L_1803fa0b2_2:;
/* 1803fa0b6: mulsd xmm2, xmm2 */
L_1803fa0b6_0:;
L_1803fa0b6_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)*fv(rd(s->r,4736,8),8),8));
L_1803fa0b6_2:;
/* 1803fa0ba: mulsd xmm3, xmm1 */
L_1803fa0ba_0:;
L_1803fa0ba_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)*fv(rd(s->r,4672,8),8),8));
L_1803fa0ba_2:;
/* 1803fa0be: add edx, -1 */
L_1803fa0be_0:;
L_1803fa0be_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803fa0be_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fa0be_3:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0xffffffff))));
L_1803fa0be_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fa0be_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa0be_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fa0be_7:;
wr(s->u,1,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fa0be_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fa0be_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fa0be_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fa0be_11:;
/* 1803fa0c1: cvtsi2sd xmm0, edx */
L_1803fa0c1_0:;
L_1803fa0c1_1:;
wr(s->r,4608,8,fb((double)sx(rd(s->r,16,4),4),8));
L_1803fa0c1_2:;
/* 1803fa0c5: mulsd xmm1, xmm0 */
L_1803fa0c5_0:;
L_1803fa0c5_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803fa0c5_2:;
/* 1803fa0c9: subsd xmm3, xmm2 */
L_1803fa0c9_0:;
L_1803fa0c9_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)-fv(rd(s->r,4736,8),8),8));
L_1803fa0c9_2:;
/* 1803fa0cd: comisd xmm3, xmm4 */
L_1803fa0cd_0:;
L_1803fa0cd_1:;
wr(s->u,7,1,isnan(fv(rd(s->r,4800,8),8)));
L_1803fa0cd_2:;
wr(s->u,8,1,isnan(fv(rd(s->r,4864,8),8)));
L_1803fa0cd_3:;
wr(s->r,514,1,((rd(s->u,7,1)!=0)||(rd(s->u,8,1)!=0)));
L_1803fa0cd_4:;
wr(s->u,9,1,(fv(rd(s->r,4800,8),8)==fv(rd(s->r,4864,8),8)));
L_1803fa0cd_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,9,1)));
L_1803fa0cd_6:;
wr(s->u,10,1,(fv(rd(s->r,4800,8),8)<fv(rd(s->r,4864,8),8)));
L_1803fa0cd_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,10,1)));
L_1803fa0cd_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa0cd_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fa0cd_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fa0cd_11:;
/* 1803fa0d1: jbe 0x1803fa0db */
L_1803fa0d1_0:;
L_1803fa0d1_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fa0d1_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa0db);}
L_1803fa0d1_3:;
return UINT64_C(0x1803fa0d3);
}
uint64_t b_1803fa0d3(CPU*s){
/* 1803fa0d3: divsd xmm3, xmm1 */
L_1803fa0d3_0:;
L_1803fa0d3_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)/fv(rd(s->r,4672,8),8),8));
L_1803fa0d3_2:;
/* 1803fa0d7: sqrtsd xmm4, xmm3 */
L_1803fa0d7_0:;
L_1803fa0d7_1:;
wr(s->r,4864,8,fb(sqrt(fv(rd(s->r,4800,8),8)),8));
L_1803fa0d7_2:;
/* 1803fa0db: cvtsd2ss xmm0, xmm4 */
L_1803fa0db_0:;
L_1803fa0db_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4864,8),8),4));
L_1803fa0db_2:;
/* 1803fa0df: movss dword ptr [r8], xmm0 */
L_1803fa0df_0:;
L_1803fa0df_1:;
wr(s->u,0,4,rd(s->r,4608,4));
L_1803fa0df_2:;
mw((uint64_t)rd(s->r,128,8),4,rd(s->u,0,4));
L_1803fa0df_3:;
/* 1803fa0e4: xor eax, eax */
L_1803fa0e4_0:;
L_1803fa0e4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa0e4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa0e4_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fa0e4_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa0e4_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa0e4_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa0e4_7:;
wr(s->u,4,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa0e4_8:;
wr(s->u,12,1,pop(rd(s->u,4,4),4));
L_1803fa0e4_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fa0e4_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fa0e4_11:;
/* 1803fa0e6: add rsp, 0x50 */
L_1803fa0e6_0:;
L_1803fa0e6_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa0e6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803fa0e6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803fa0e6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa0e6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa0e6_6:;
wr(s->u,4,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa0e6_7:;
wr(s->u,12,1,pop(rd(s->u,4,8),8));
L_1803fa0e6_8:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fa0e6_9:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fa0e6_10:;
/* 1803fa0ea: pop rbp */
L_1803fa0ea_0:;
L_1803fa0ea_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fa0ea_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa0ea_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa0ea_4:;
wr(s->r,40,8,rd(s->u,14,8));
L_1803fa0ea_5:;
/* 1803fa0eb: ret  */
L_1803fa0eb_0:;
L_1803fa0eb_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa0eb_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa0eb_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa0eb_4:;
return UINT64_C(0x1803fa0ec);
}
uint64_t b_1803fa0db(CPU*s){
/* 1803fa0db: cvtsd2ss xmm0, xmm4 */
L_1803fa0db_0:;
L_1803fa0db_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4864,8),8),4));
L_1803fa0db_2:;
/* 1803fa0df: movss dword ptr [r8], xmm0 */
L_1803fa0df_0:;
L_1803fa0df_1:;
wr(s->u,0,4,rd(s->r,4608,4));
L_1803fa0df_2:;
mw((uint64_t)rd(s->r,128,8),4,rd(s->u,0,4));
L_1803fa0df_3:;
/* 1803fa0e4: xor eax, eax */
L_1803fa0e4_0:;
L_1803fa0e4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa0e4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa0e4_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fa0e4_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa0e4_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa0e4_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa0e4_7:;
wr(s->u,4,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa0e4_8:;
wr(s->u,12,1,pop(rd(s->u,4,4),4));
L_1803fa0e4_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fa0e4_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fa0e4_11:;
/* 1803fa0e6: add rsp, 0x50 */
L_1803fa0e6_0:;
L_1803fa0e6_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa0e6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803fa0e6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803fa0e6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa0e6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa0e6_6:;
wr(s->u,4,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa0e6_7:;
wr(s->u,12,1,pop(rd(s->u,4,8),8));
L_1803fa0e6_8:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fa0e6_9:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fa0e6_10:;
/* 1803fa0ea: pop rbp */
L_1803fa0ea_0:;
L_1803fa0ea_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fa0ea_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa0ea_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa0ea_4:;
wr(s->r,40,8,rd(s->u,14,8));
L_1803fa0ea_5:;
/* 1803fa0eb: ret  */
L_1803fa0eb_0:;
L_1803fa0eb_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa0eb_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa0eb_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa0eb_4:;
return UINT64_C(0x1803fa0ec);
}
uint64_t b_1803fa0ec(CPU*s){
/* 1803fa0ec: mov eax, 0xfffffffa */
L_1803fa0ec_0:;
L_1803fa0ec_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fa0ec_2:;
/* 1803fa0f1: add rsp, 0x50 */
L_1803fa0f1_0:;
L_1803fa0f1_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa0f1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803fa0f1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803fa0f1_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa0f1_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa0f1_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa0f1_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa0f1_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa0f1_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa0f1_10:;
/* 1803fa0f5: pop rbp */
L_1803fa0f5_0:;
L_1803fa0f5_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fa0f5_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa0f5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa0f5_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fa0f5_5:;
/* 1803fa0f6: ret  */
L_1803fa0f6_0:;
L_1803fa0f6_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa0f6_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa0f6_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa0f6_4:;
return UINT64_C(0x1803fa0f7);
}
uint64_t b_1803fa0f7(CPU*s){
/* 1803fa0f7: xor eax, eax */
L_1803fa0f7_0:;
L_1803fa0f7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa0f7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa0f7_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fa0f7_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa0f7_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa0f7_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa0f7_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa0f7_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fa0f7_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fa0f7_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fa0f7_11:;
/* 1803fa0f9: jmp 0x1803fa089 */
L_1803fa0f9_0:;
L_1803fa0f9_1:;
return UINT64_C(0x1803fa089);
L_1803fa0f9_2:;
return UINT64_C(0x1803fa0fb);
}
uint64_t b_1803fa0fb(CPU*s){
/* 1803fa0fb: movsxd rax, edx */
L_1803fa0fb_0:;
L_1803fa0fb_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803fa0fb_2:;
/* 1803fa0fe: jmp 0x1803f9fd2 */
L_1803fa0fe_0:;
L_1803fa0fe_1:;
return UINT64_C(0x1803f9fd2);
L_1803fa0fe_2:;
return UINT64_C(0x1803fa103);
}
uint64_t b_1803fa103(CPU*s){
/* 1803fa103: mov eax, 0xfffffff8 */
L_1803fa103_0:;
L_1803fa103_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fa103_2:;
/* 1803fa108: add rsp, 0x50 */
L_1803fa108_0:;
L_1803fa108_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa108_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803fa108_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803fa108_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa108_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa108_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa108_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa108_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa108_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa108_10:;
/* 1803fa10c: pop rbp */
L_1803fa10c_0:;
L_1803fa10c_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fa10c_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa10c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa10c_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fa10c_5:;
/* 1803fa10d: ret  */
L_1803fa10d_0:;
L_1803fa10d_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa10d_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa10d_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa10d_4:;
return UINT64_C(0x1803fa10e);
}
uint64_t b_1803fa110(CPU*s){
/* 1803fa110: push rbp */
L_1803fa110_0:;
L_1803fa110_1:;
wr(s->u,0,8,rd(s->r,40,8));
L_1803fa110_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fa110_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fa110_4:;
/* 1803fa111: sub rsp, 0x20 */
L_1803fa111_0:;
L_1803fa111_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803fa111_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803fa111_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803fa111_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa111_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa111_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa111_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fa111_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fa111_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fa111_10:;
/* 1803fa115: test rcx, rcx */
L_1803fa115_0:;
L_1803fa115_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa115_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa115_3:;
wr(s->u,18,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fa115_4:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa115_5:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803fa115_6:;
wr(s->u,8,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803fa115_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fa115_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fa115_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fa115_10:;
/* 1803fa118: je 0x1803fa253 */
L_1803fa118_0:;
L_1803fa118_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa253);}
L_1803fa118_2:;
return UINT64_C(0x1803fa11e);
}
uint64_t b_1803fa11e(CPU*s){
/* 1803fa11e: test r8, r8 */
L_1803fa11e_0:;
L_1803fa11e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa11e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa11e_3:;
wr(s->u,10,8,(rd(s->r,128,8)&rd(s->r,128,8)));
L_1803fa11e_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa11e_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fa11e_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fa11e_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa11e_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa11e_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa11e_10:;
/* 1803fa121: je 0x1803fa253 */
L_1803fa121_0:;
L_1803fa121_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa253);}
L_1803fa121_2:;
return UINT64_C(0x1803fa127);
}
uint64_t b_1803fa127(CPU*s){
/* 1803fa127: test edx, edx */
L_1803fa127_0:;
L_1803fa127_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa127_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa127_3:;
wr(s->u,8,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803fa127_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa127_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803fa127_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803fa127_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fa127_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fa127_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fa127_10:;
/* 1803fa129: jle 0x1803fa248 */
L_1803fa129_0:;
L_1803fa129_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa129_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fa129_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fa248);}
L_1803fa129_4:;
return UINT64_C(0x1803fa12f);
}
uint64_t b_1803fa12f(CPU*s){
/* 1803fa12f: xor r9d, r9d */
L_1803fa12f_0:;
L_1803fa12f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa12f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa12f_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803fa12f_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fa12f_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa12f_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803fa12f_7:;
wr(s->u,1,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803fa12f_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fa12f_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fa12f_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fa12f_11:;
/* 1803fa132: cmp edx, 4 */
L_1803fa132_0:;
L_1803fa132_1:;
wr(s->u,7,4,rd(s->r,16,4));
L_1803fa132_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x4))));
L_1803fa132_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x4)),4,1));
L_1803fa132_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x4))));
L_1803fa132_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa132_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fa132_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fa132_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fa132_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fa132_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fa132_11:;
/* 1803fa135: pxor xmm1, xmm1 */
L_1803fa135_0:;
L_1803fa135_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803fa135_2:;
/* 1803fa139: movaps xmm0, xmm1 */
L_1803fa139_0:;
L_1803fa139_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803fa139_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803fa139_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803fa139_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803fa139_5:;
/* 1803fa13c: jl 0x1803fa240 */
L_1803fa13c_0:;
L_1803fa13c_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa13c_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa240);}
L_1803fa13c_3:;
return UINT64_C(0x1803fa142);
}
uint64_t b_1803fa142(CPU*s){
/* 1803fa142: movsxd rbp, edx */
L_1803fa142_0:;
L_1803fa142_1:;
wr(s->r,40,8,(U)sx(rd(s->r,16,4),4));
L_1803fa142_2:;
/* 1803fa145: lea rax, [rbp - 4] */
L_1803fa145_0:;
L_1803fa145_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fa145_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803fa145_3:;
/* 1803fa149: movss xmm2, dword ptr [rcx + r9*4] */
L_1803fa149_0:;
L_1803fa149_1:;
wr(s->u,8,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa149_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803fa149_3:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fa149_4:;
wr(s->r,4736,4,rd(s->u,48,4));
L_1803fa149_5:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fa149_6:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fa149_7:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fa149_8:;
/* 1803fa14f: cvtps2pd xmm3, xmm2 */
L_1803fa14f_0:;
L_1803fa14f_1:;
wr(s->u,80,8,rd(s->r,4736,8));
L_1803fa14f_2:;
wr(s->r,4800,8,fb(fv(rd(s->u,80,4),4),8));
L_1803fa14f_3:;
wr(s->r,4808,8,fb(fv(rd(s->u,84,4),4),8));
L_1803fa14f_4:;
/* 1803fa152: movss xmm4, dword ptr [rcx + r9*4 + 4] */
L_1803fa152_0:;
L_1803fa152_1:;
wr(s->u,24,8,(((U)UINT64_C(0x4))+rd(s->r,8,8)));
L_1803fa152_2:;
wr(s->u,32,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa152_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803fa152_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803fa152_5:;
wr(s->r,4864,4,rd(s->u,48,4));
L_1803fa152_6:;
wr(s->r,4868,4,((U)UINT64_C(0x0)));
L_1803fa152_7:;
wr(s->r,4872,4,((U)UINT64_C(0x0)));
L_1803fa152_8:;
wr(s->r,4876,4,((U)UINT64_C(0x0)));
L_1803fa152_9:;
/* 1803fa159: cvtps2pd xmm5, xmm4 */
L_1803fa159_0:;
L_1803fa159_1:;
wr(s->u,80,8,rd(s->r,4864,8));
L_1803fa159_2:;
wr(s->r,4928,8,fb(fv(rd(s->u,80,4),4),8));
L_1803fa159_3:;
wr(s->r,4936,8,fb(fv(rd(s->u,84,4),4),8));
L_1803fa159_4:;
/* 1803fa15c: movss xmm2, dword ptr [rcx + r9*4 + 8] */
L_1803fa15c_0:;
L_1803fa15c_1:;
wr(s->u,24,8,(((U)UINT64_C(0x8))+rd(s->r,8,8)));
L_1803fa15c_2:;
wr(s->u,32,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa15c_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803fa15c_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803fa15c_5:;
wr(s->r,4736,4,rd(s->u,48,4));
L_1803fa15c_6:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fa15c_7:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fa15c_8:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fa15c_9:;
/* 1803fa163: cvtps2pd xmm2, xmm2 */
L_1803fa163_0:;
L_1803fa163_1:;
wr(s->u,80,8,rd(s->r,4736,8));
L_1803fa163_2:;
wr(s->r,4736,8,fb(fv(rd(s->u,80,4),4),8));
L_1803fa163_3:;
wr(s->r,4744,8,fb(fv(rd(s->u,84,4),4),8));
L_1803fa163_4:;
/* 1803fa166: addsd xmm1, xmm3 */
L_1803fa166_0:;
L_1803fa166_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803fa166_2:;
/* 1803fa16a: addsd xmm0, xmm5 */
L_1803fa16a_0:;
L_1803fa16a_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4928,8),8),8));
L_1803fa16a_2:;
/* 1803fa16e: addsd xmm1, xmm2 */
L_1803fa16e_0:;
L_1803fa16e_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4736,8),8),8));
L_1803fa16e_2:;
/* 1803fa172: movss xmm2, dword ptr [rcx + r9*4 + 0xc] */
L_1803fa172_0:;
L_1803fa172_1:;
wr(s->u,24,8,(((U)UINT64_C(0xc))+rd(s->r,8,8)));
L_1803fa172_2:;
wr(s->u,32,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa172_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803fa172_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803fa172_5:;
wr(s->r,4736,4,rd(s->u,48,4));
L_1803fa172_6:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fa172_7:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fa172_8:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fa172_9:;
/* 1803fa179: cvtps2pd xmm2, xmm2 */
L_1803fa179_0:;
L_1803fa179_1:;
wr(s->u,80,8,rd(s->r,4736,8));
L_1803fa179_2:;
wr(s->r,4736,8,fb(fv(rd(s->u,80,4),4),8));
L_1803fa179_3:;
wr(s->r,4744,8,fb(fv(rd(s->u,84,4),4),8));
L_1803fa179_4:;
/* 1803fa17c: add r9, 4 */
L_1803fa17c_0:;
L_1803fa17c_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803fa17c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x4)),8,0));
L_1803fa17c_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x4))));
L_1803fa17c_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa17c_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fa17c_6:;
wr(s->u,54,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fa17c_7:;
wr(s->u,62,1,pop(rd(s->u,54,8),8));
L_1803fa17c_8:;
wr(s->u,63,1,(rd(s->u,62,1)&((U)UINT64_C(0x1))));
L_1803fa17c_9:;
wr(s->r,514,1,(rd(s->u,63,1)==((U)UINT64_C(0x0))));
L_1803fa17c_10:;
/* 1803fa180: cmp r9, rax */
L_1803fa180_0:;
L_1803fa180_1:;
wr(s->u,64,8,rd(s->r,0,8));
L_1803fa180_2:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->u,64,8)));
L_1803fa180_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->u,64,8),8,1));
L_1803fa180_4:;
wr(s->u,72,8,(rd(s->r,136,8)-rd(s->u,64,8)));
L_1803fa180_5:;
wr(s->r,519,1,(sx(rd(s->u,72,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa180_6:;
wr(s->r,518,1,(rd(s->u,72,8)==((U)UINT64_C(0x0))));
L_1803fa180_7:;
wr(s->u,54,8,(rd(s->u,72,8)&((U)UINT64_C(0xff))));
L_1803fa180_8:;
wr(s->u,62,1,pop(rd(s->u,54,8),8));
L_1803fa180_9:;
wr(s->u,63,1,(rd(s->u,62,1)&((U)UINT64_C(0x1))));
L_1803fa180_10:;
wr(s->r,514,1,(rd(s->u,63,1)==((U)UINT64_C(0x0))));
L_1803fa180_11:;
/* 1803fa183: addsd xmm0, xmm2 */
L_1803fa183_0:;
L_1803fa183_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4736,8),8),8));
L_1803fa183_2:;
/* 1803fa187: jle 0x1803fa149 */
L_1803fa187_0:;
L_1803fa187_1:;
wr(s->u,52,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa187_2:;
wr(s->u,53,1,((rd(s->r,518,1)!=0)||(rd(s->u,52,1)!=0)));
L_1803fa187_3:;
if(rd(s->u,53,1)){goto L_1803fa149_0;}
L_1803fa187_4:;
return UINT64_C(0x1803fa189);
}
uint64_t b_1803fa149(CPU*s){
/* 1803fa149: movss xmm2, dword ptr [rcx + r9*4] */
L_1803fa149_0:;
L_1803fa149_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa149_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa149_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa149_4:;
wr(s->r,4736,4,rd(s->u,40,4));
L_1803fa149_5:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fa149_6:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fa149_7:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fa149_8:;
/* 1803fa14f: cvtps2pd xmm3, xmm2 */
L_1803fa14f_0:;
L_1803fa14f_1:;
wr(s->u,72,8,rd(s->r,4736,8));
L_1803fa14f_2:;
wr(s->r,4800,8,fb(fv(rd(s->u,72,4),4),8));
L_1803fa14f_3:;
wr(s->r,4808,8,fb(fv(rd(s->u,76,4),4),8));
L_1803fa14f_4:;
/* 1803fa152: movss xmm4, dword ptr [rcx + r9*4 + 4] */
L_1803fa152_0:;
L_1803fa152_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,8,8)));
L_1803fa152_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa152_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fa152_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fa152_5:;
wr(s->r,4864,4,rd(s->u,40,4));
L_1803fa152_6:;
wr(s->r,4868,4,((U)UINT64_C(0x0)));
L_1803fa152_7:;
wr(s->r,4872,4,((U)UINT64_C(0x0)));
L_1803fa152_8:;
wr(s->r,4876,4,((U)UINT64_C(0x0)));
L_1803fa152_9:;
/* 1803fa159: cvtps2pd xmm5, xmm4 */
L_1803fa159_0:;
L_1803fa159_1:;
wr(s->u,72,8,rd(s->r,4864,8));
L_1803fa159_2:;
wr(s->r,4928,8,fb(fv(rd(s->u,72,4),4),8));
L_1803fa159_3:;
wr(s->r,4936,8,fb(fv(rd(s->u,76,4),4),8));
L_1803fa159_4:;
/* 1803fa15c: movss xmm2, dword ptr [rcx + r9*4 + 8] */
L_1803fa15c_0:;
L_1803fa15c_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,8,8)));
L_1803fa15c_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa15c_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fa15c_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fa15c_5:;
wr(s->r,4736,4,rd(s->u,40,4));
L_1803fa15c_6:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fa15c_7:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fa15c_8:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fa15c_9:;
/* 1803fa163: cvtps2pd xmm2, xmm2 */
L_1803fa163_0:;
L_1803fa163_1:;
wr(s->u,72,8,rd(s->r,4736,8));
L_1803fa163_2:;
wr(s->r,4736,8,fb(fv(rd(s->u,72,4),4),8));
L_1803fa163_3:;
wr(s->r,4744,8,fb(fv(rd(s->u,76,4),4),8));
L_1803fa163_4:;
/* 1803fa166: addsd xmm1, xmm3 */
L_1803fa166_0:;
L_1803fa166_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803fa166_2:;
/* 1803fa16a: addsd xmm0, xmm5 */
L_1803fa16a_0:;
L_1803fa16a_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4928,8),8),8));
L_1803fa16a_2:;
/* 1803fa16e: addsd xmm1, xmm2 */
L_1803fa16e_0:;
L_1803fa16e_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4736,8),8),8));
L_1803fa16e_2:;
/* 1803fa172: movss xmm2, dword ptr [rcx + r9*4 + 0xc] */
L_1803fa172_0:;
L_1803fa172_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,8,8)));
L_1803fa172_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa172_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fa172_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fa172_5:;
wr(s->r,4736,4,rd(s->u,40,4));
L_1803fa172_6:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fa172_7:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fa172_8:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fa172_9:;
/* 1803fa179: cvtps2pd xmm2, xmm2 */
L_1803fa179_0:;
L_1803fa179_1:;
wr(s->u,72,8,rd(s->r,4736,8));
L_1803fa179_2:;
wr(s->r,4736,8,fb(fv(rd(s->u,72,4),4),8));
L_1803fa179_3:;
wr(s->r,4744,8,fb(fv(rd(s->u,76,4),4),8));
L_1803fa179_4:;
/* 1803fa17c: add r9, 4 */
L_1803fa17c_0:;
L_1803fa17c_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803fa17c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x4)),8,0));
L_1803fa17c_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x4))));
L_1803fa17c_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa17c_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fa17c_6:;
wr(s->u,46,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fa17c_7:;
wr(s->u,54,1,pop(rd(s->u,46,8),8));
L_1803fa17c_8:;
wr(s->u,55,1,(rd(s->u,54,1)&((U)UINT64_C(0x1))));
L_1803fa17c_9:;
wr(s->r,514,1,(rd(s->u,55,1)==((U)UINT64_C(0x0))));
L_1803fa17c_10:;
/* 1803fa180: cmp r9, rax */
L_1803fa180_0:;
L_1803fa180_1:;
wr(s->u,56,8,rd(s->r,0,8));
L_1803fa180_2:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->u,56,8)));
L_1803fa180_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->u,56,8),8,1));
L_1803fa180_4:;
wr(s->u,64,8,(rd(s->r,136,8)-rd(s->u,56,8)));
L_1803fa180_5:;
wr(s->r,519,1,(sx(rd(s->u,64,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa180_6:;
wr(s->r,518,1,(rd(s->u,64,8)==((U)UINT64_C(0x0))));
L_1803fa180_7:;
wr(s->u,46,8,(rd(s->u,64,8)&((U)UINT64_C(0xff))));
L_1803fa180_8:;
wr(s->u,54,1,pop(rd(s->u,46,8),8));
L_1803fa180_9:;
wr(s->u,55,1,(rd(s->u,54,1)&((U)UINT64_C(0x1))));
L_1803fa180_10:;
wr(s->r,514,1,(rd(s->u,55,1)==((U)UINT64_C(0x0))));
L_1803fa180_11:;
/* 1803fa183: addsd xmm0, xmm2 */
L_1803fa183_0:;
L_1803fa183_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4736,8),8),8));
L_1803fa183_2:;
/* 1803fa187: jle 0x1803fa149 */
L_1803fa187_0:;
L_1803fa187_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa187_2:;
wr(s->u,45,1,((rd(s->r,518,1)!=0)||(rd(s->u,44,1)!=0)));
L_1803fa187_3:;
if(rd(s->u,45,1)){goto L_1803fa149_0;}
L_1803fa187_4:;
return UINT64_C(0x1803fa189);
}
uint64_t b_1803fa189(CPU*s){
/* 1803fa189: mov r10d, r9d */
L_1803fa189_0:;
L_1803fa189_1:;
wr(s->r,144,4,rd(s->r,136,4));
L_1803fa189_2:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fa189_3:;
/* 1803fa18c: movsxd rax, r9d */
L_1803fa18c_0:;
L_1803fa18c_1:;
wr(s->r,0,8,(U)sx(rd(s->r,136,4),4));
L_1803fa18c_2:;
/* 1803fa18f: addsd xmm0, xmm1 */
L_1803fa18f_0:;
L_1803fa18f_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803fa18f_2:;
/* 1803fa193: cmp r9, rbp */
L_1803fa193_0:;
L_1803fa193_1:;
wr(s->u,11,8,rd(s->r,40,8));
L_1803fa193_2:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->u,11,8)));
L_1803fa193_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->u,11,8),8,1));
L_1803fa193_4:;
wr(s->u,19,8,(rd(s->r,136,8)-rd(s->u,11,8)));
L_1803fa193_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa193_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fa193_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fa193_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa193_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa193_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa193_11:;
/* 1803fa196: jge 0x1803fa223 */
L_1803fa196_0:;
L_1803fa196_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fa196_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa223);}
L_1803fa196_3:;
return UINT64_C(0x1803fa19c);
}
uint64_t b_1803fa19c(CPU*s){
/* 1803fa19c: neg r10d */
L_1803fa19c_0:;
L_1803fa19c_1:;
wr(s->r,512,1,(rd(s->r,144,4)!=((U)UINT64_C(0x0))));
L_1803fa19c_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,144,4),4,1));
L_1803fa19c_3:;
wr(s->r,144,4,(-rd(s->r,144,4)));
L_1803fa19c_4:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa19c_5:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fa19c_6:;
wr(s->u,1,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fa19c_7:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803fa19c_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa19c_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa19c_10:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fa19c_11:;
/* 1803fa19f: add r10d, edx */
L_1803fa19f_0:;
L_1803fa19f_1:;
wr(s->r,512,1,(((rd(s->r,144,4)+rd(s->r,16,4))&(((U)1<<32)-1))<rd(s->r,144,4)));
L_1803fa19f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->r,16,4),4,0));
L_1803fa19f_3:;
wr(s->r,144,4,(rd(s->r,144,4)+rd(s->r,16,4)));
L_1803fa19f_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fa19f_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa19f_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fa19f_7:;
wr(s->u,1,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fa19f_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803fa19f_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa19f_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa19f_11:;
/* 1803fa1a2: movsxd r9, r10d */
L_1803fa1a2_0:;
L_1803fa1a2_1:;
wr(s->r,136,8,(U)sx(rd(s->r,144,4),4));
L_1803fa1a2_2:;
/* 1803fa1a5: cmp r9, 8 */
L_1803fa1a5_0:;
L_1803fa1a5_1:;
wr(s->u,11,8,rd(s->r,136,8));
L_1803fa1a5_2:;
wr(s->r,512,1,(rd(s->u,11,8)<((U)UINT64_C(0x8))));
L_1803fa1a5_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,11,8),((U)UINT64_C(0x8)),8,1));
L_1803fa1a5_4:;
wr(s->u,19,8,(rd(s->u,11,8)-((U)UINT64_C(0x8))));
L_1803fa1a5_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa1a5_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fa1a5_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fa1a5_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa1a5_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa1a5_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa1a5_11:;
/* 1803fa1a9: jl 0x1803fa23c */
L_1803fa1a9_0:;
L_1803fa1a9_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa1a9_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa23c);}
L_1803fa1a9_3:;
return UINT64_C(0x1803fa1af);
}
uint64_t b_1803fa1af(CPU*s){
/* 1803fa1af: mov r10d, r9d */
L_1803fa1af_0:;
L_1803fa1af_1:;
wr(s->r,144,4,rd(s->r,136,4));
L_1803fa1af_2:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fa1af_3:;
/* 1803fa1b2: mov ebp, r10d */
L_1803fa1b2_0:;
L_1803fa1b2_1:;
wr(s->r,40,4,rd(s->r,144,4));
L_1803fa1b2_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fa1b2_3:;
/* 1803fa1b5: and ebp, 7 */
L_1803fa1b5_0:;
L_1803fa1b5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa1b5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa1b5_3:;
wr(s->r,40,4,(rd(s->r,40,4)&((U)UINT64_C(0x7))));
L_1803fa1b5_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fa1b5_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa1b5_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803fa1b5_7:;
wr(s->u,33,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803fa1b5_8:;
wr(s->u,41,1,pop(rd(s->u,33,4),4));
L_1803fa1b5_9:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803fa1b5_10:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803fa1b5_11:;
/* 1803fa1b8: sub r10d, ebp */
L_1803fa1b8_0:;
L_1803fa1b8_1:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->r,40,4)));
L_1803fa1b8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->r,40,4),4,1));
L_1803fa1b8_3:;
wr(s->r,144,4,(rd(s->r,144,4)-rd(s->r,40,4)));
L_1803fa1b8_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fa1b8_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa1b8_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fa1b8_7:;
wr(s->u,33,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fa1b8_8:;
wr(s->u,41,1,pop(rd(s->u,33,4),4));
L_1803fa1b8_9:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803fa1b8_10:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803fa1b8_11:;
/* 1803fa1bb: movsxd rbp, r10d */
L_1803fa1bb_0:;
L_1803fa1bb_1:;
wr(s->r,40,8,(U)sx(rd(s->r,144,4),4));
L_1803fa1bb_2:;
/* 1803fa1be: pxor xmm1, xmm1 */
L_1803fa1be_0:;
L_1803fa1be_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803fa1be_2:;
/* 1803fa1c2: lea r11, [rcx + rax*4] */
L_1803fa1c2_0:;
L_1803fa1c2_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa1c2_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803fa1c2_3:;
wr(s->r,152,8,rd(s->u,16,8));
L_1803fa1c2_4:;
/* 1803fa1c6: lea r10, [r11 + rbp*4] */
L_1803fa1c6_0:;
L_1803fa1c6_1:;
wr(s->u,8,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803fa1c6_2:;
wr(s->u,16,8,(rd(s->r,152,8)+rd(s->u,8,8)));
L_1803fa1c6_3:;
wr(s->r,144,8,rd(s->u,16,8));
L_1803fa1c6_4:;
/* 1803fa1ca: cvtps2pd xmm2, qword ptr [r11] */
L_1803fa1ca_0:;
L_1803fa1ca_1:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,152,8),8));
L_1803fa1ca_2:;
wr(s->u,59,8,rd(s->u,24,8));
L_1803fa1ca_3:;
wr(s->r,4736,8,fb(fv(rd(s->u,59,4),4),8));
L_1803fa1ca_4:;
wr(s->r,4744,8,fb(fv(rd(s->u,63,4),4),8));
L_1803fa1ca_5:;
/* 1803fa1ce: cvtps2pd xmm3, qword ptr [r11 + 8] */
L_1803fa1ce_0:;
L_1803fa1ce_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x8))));
L_1803fa1ce_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fa1ce_3:;
wr(s->u,59,8,rd(s->u,24,8));
L_1803fa1ce_4:;
wr(s->r,4800,8,fb(fv(rd(s->u,59,4),4),8));
L_1803fa1ce_5:;
wr(s->r,4808,8,fb(fv(rd(s->u,63,4),4),8));
L_1803fa1ce_6:;
/* 1803fa1d3: cvtps2pd xmm4, qword ptr [r11 + 0x10] */
L_1803fa1d3_0:;
L_1803fa1d3_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x10))));
L_1803fa1d3_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fa1d3_3:;
wr(s->u,59,8,rd(s->u,24,8));
L_1803fa1d3_4:;
wr(s->r,4864,8,fb(fv(rd(s->u,59,4),4),8));
L_1803fa1d3_5:;
wr(s->r,4872,8,fb(fv(rd(s->u,63,4),4),8));
L_1803fa1d3_6:;
/* 1803fa1d8: cvtps2pd xmm5, qword ptr [r11 + 0x18] */
L_1803fa1d8_0:;
L_1803fa1d8_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x18))));
L_1803fa1d8_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fa1d8_3:;
wr(s->u,59,8,rd(s->u,24,8));
L_1803fa1d8_4:;
wr(s->r,4928,8,fb(fv(rd(s->u,59,4),4),8));
L_1803fa1d8_5:;
wr(s->r,4936,8,fb(fv(rd(s->u,63,4),4),8));
L_1803fa1d8_6:;
/* 1803fa1dd: addpd xmm0, xmm2 */
L_1803fa1dd_0:;
L_1803fa1dd_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4736,8),8),8));
L_1803fa1dd_2:;
wr(s->r,4616,8,fb(fv(rd(s->r,4616,8),8)+fv(rd(s->r,4744,8),8),8));
L_1803fa1dd_3:;
/* 1803fa1e1: addpd xmm1, xmm3 */
L_1803fa1e1_0:;
L_1803fa1e1_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803fa1e1_2:;
wr(s->r,4680,8,fb(fv(rd(s->r,4680,8),8)+fv(rd(s->r,4808,8),8),8));
L_1803fa1e1_3:;
/* 1803fa1e5: addpd xmm0, xmm4 */
L_1803fa1e5_0:;
L_1803fa1e5_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4864,8),8),8));
L_1803fa1e5_2:;
wr(s->r,4616,8,fb(fv(rd(s->r,4616,8),8)+fv(rd(s->r,4872,8),8),8));
L_1803fa1e5_3:;
/* 1803fa1e9: addpd xmm1, xmm5 */
L_1803fa1e9_0:;
L_1803fa1e9_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4928,8),8),8));
L_1803fa1e9_2:;
wr(s->r,4680,8,fb(fv(rd(s->r,4680,8),8)+fv(rd(s->r,4936,8),8),8));
L_1803fa1e9_3:;
/* 1803fa1ed: add r11, 0x20 */
L_1803fa1ed_0:;
L_1803fa1ed_1:;
wr(s->r,512,1,(((rd(s->r,152,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,152,8)));
L_1803fa1ed_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),((U)UINT64_C(0x20)),8,0));
L_1803fa1ed_3:;
wr(s->r,152,8,(rd(s->r,152,8)+((U)UINT64_C(0x20))));
L_1803fa1ed_4:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa1ed_5:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803fa1ed_6:;
wr(s->u,33,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803fa1ed_7:;
wr(s->u,41,1,pop(rd(s->u,33,8),8));
L_1803fa1ed_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803fa1ed_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803fa1ed_10:;
/* 1803fa1f1: cmp r11, r10 */
L_1803fa1f1_0:;
L_1803fa1f1_1:;
wr(s->u,43,8,rd(s->r,144,8));
L_1803fa1f1_2:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->u,43,8)));
L_1803fa1f1_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->u,43,8),8,1));
L_1803fa1f1_4:;
wr(s->u,51,8,(rd(s->r,152,8)-rd(s->u,43,8)));
L_1803fa1f1_5:;
wr(s->r,519,1,(sx(rd(s->u,51,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa1f1_6:;
wr(s->r,518,1,(rd(s->u,51,8)==((U)UINT64_C(0x0))));
L_1803fa1f1_7:;
wr(s->u,33,8,(rd(s->u,51,8)&((U)UINT64_C(0xff))));
L_1803fa1f1_8:;
wr(s->u,41,1,pop(rd(s->u,33,8),8));
L_1803fa1f1_9:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803fa1f1_10:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803fa1f1_11:;
/* 1803fa1f4: jl 0x1803fa1ca */
L_1803fa1f4_0:;
L_1803fa1f4_1:;
wr(s->u,32,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa1f4_2:;
if(rd(s->u,32,1)){goto L_1803fa1ca_0;}
L_1803fa1f4_3:;
return UINT64_C(0x1803fa1f6);
}
uint64_t b_1803fa1ca(CPU*s){
/* 1803fa1ca: cvtps2pd xmm2, qword ptr [r11] */
L_1803fa1ca_0:;
L_1803fa1ca_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,152,8),8));
L_1803fa1ca_2:;
wr(s->u,43,8,rd(s->u,8,8));
L_1803fa1ca_3:;
wr(s->r,4736,8,fb(fv(rd(s->u,43,4),4),8));
L_1803fa1ca_4:;
wr(s->r,4744,8,fb(fv(rd(s->u,47,4),4),8));
L_1803fa1ca_5:;
/* 1803fa1ce: cvtps2pd xmm3, qword ptr [r11 + 8] */
L_1803fa1ce_0:;
L_1803fa1ce_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x8))));
L_1803fa1ce_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fa1ce_3:;
wr(s->u,43,8,rd(s->u,8,8));
L_1803fa1ce_4:;
wr(s->r,4800,8,fb(fv(rd(s->u,43,4),4),8));
L_1803fa1ce_5:;
wr(s->r,4808,8,fb(fv(rd(s->u,47,4),4),8));
L_1803fa1ce_6:;
/* 1803fa1d3: cvtps2pd xmm4, qword ptr [r11 + 0x10] */
L_1803fa1d3_0:;
L_1803fa1d3_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x10))));
L_1803fa1d3_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fa1d3_3:;
wr(s->u,43,8,rd(s->u,8,8));
L_1803fa1d3_4:;
wr(s->r,4864,8,fb(fv(rd(s->u,43,4),4),8));
L_1803fa1d3_5:;
wr(s->r,4872,8,fb(fv(rd(s->u,47,4),4),8));
L_1803fa1d3_6:;
/* 1803fa1d8: cvtps2pd xmm5, qword ptr [r11 + 0x18] */
L_1803fa1d8_0:;
L_1803fa1d8_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x18))));
L_1803fa1d8_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fa1d8_3:;
wr(s->u,43,8,rd(s->u,8,8));
L_1803fa1d8_4:;
wr(s->r,4928,8,fb(fv(rd(s->u,43,4),4),8));
L_1803fa1d8_5:;
wr(s->r,4936,8,fb(fv(rd(s->u,47,4),4),8));
L_1803fa1d8_6:;
/* 1803fa1dd: addpd xmm0, xmm2 */
L_1803fa1dd_0:;
L_1803fa1dd_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4736,8),8),8));
L_1803fa1dd_2:;
wr(s->r,4616,8,fb(fv(rd(s->r,4616,8),8)+fv(rd(s->r,4744,8),8),8));
L_1803fa1dd_3:;
/* 1803fa1e1: addpd xmm1, xmm3 */
L_1803fa1e1_0:;
L_1803fa1e1_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803fa1e1_2:;
wr(s->r,4680,8,fb(fv(rd(s->r,4680,8),8)+fv(rd(s->r,4808,8),8),8));
L_1803fa1e1_3:;
/* 1803fa1e5: addpd xmm0, xmm4 */
L_1803fa1e5_0:;
L_1803fa1e5_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4864,8),8),8));
L_1803fa1e5_2:;
wr(s->r,4616,8,fb(fv(rd(s->r,4616,8),8)+fv(rd(s->r,4872,8),8),8));
L_1803fa1e5_3:;
/* 1803fa1e9: addpd xmm1, xmm5 */
L_1803fa1e9_0:;
L_1803fa1e9_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4928,8),8),8));
L_1803fa1e9_2:;
wr(s->r,4680,8,fb(fv(rd(s->r,4680,8),8)+fv(rd(s->r,4936,8),8),8));
L_1803fa1e9_3:;
/* 1803fa1ed: add r11, 0x20 */
L_1803fa1ed_0:;
L_1803fa1ed_1:;
wr(s->r,512,1,(((rd(s->r,152,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,152,8)));
L_1803fa1ed_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),((U)UINT64_C(0x20)),8,0));
L_1803fa1ed_3:;
wr(s->r,152,8,(rd(s->r,152,8)+((U)UINT64_C(0x20))));
L_1803fa1ed_4:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa1ed_5:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803fa1ed_6:;
wr(s->u,17,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803fa1ed_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803fa1ed_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fa1ed_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fa1ed_10:;
/* 1803fa1f1: cmp r11, r10 */
L_1803fa1f1_0:;
L_1803fa1f1_1:;
wr(s->u,27,8,rd(s->r,144,8));
L_1803fa1f1_2:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->u,27,8)));
L_1803fa1f1_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->u,27,8),8,1));
L_1803fa1f1_4:;
wr(s->u,35,8,(rd(s->r,152,8)-rd(s->u,27,8)));
L_1803fa1f1_5:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa1f1_6:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1803fa1f1_7:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1803fa1f1_8:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803fa1f1_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fa1f1_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fa1f1_11:;
/* 1803fa1f4: jl 0x1803fa1ca */
L_1803fa1f4_0:;
L_1803fa1f4_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa1f4_2:;
if(rd(s->u,16,1)){goto L_1803fa1ca_0;}
L_1803fa1f4_3:;
return UINT64_C(0x1803fa1f6);
}
uint64_t b_1803fa1f6(CPU*s){
/* 1803fa1f6: addpd xmm0, xmm1 */
L_1803fa1f6_0:;
L_1803fa1f6_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803fa1f6_2:;
wr(s->r,4616,8,fb(fv(rd(s->r,4616,8),8)+fv(rd(s->r,4680,8),8),8));
L_1803fa1f6_3:;
/* 1803fa1fa: movaps xmm1, xmm0 */
L_1803fa1fa_0:;
L_1803fa1fa_1:;
wr(s->r,4672,4,rd(s->r,4608,4));
L_1803fa1fa_2:;
wr(s->r,4676,4,rd(s->r,4612,4));
L_1803fa1fa_3:;
wr(s->r,4680,4,rd(s->r,4616,4));
L_1803fa1fa_4:;
wr(s->r,4684,4,rd(s->r,4620,4));
L_1803fa1fa_5:;
/* 1803fa1fd: unpckhpd xmm1, xmm0 */
L_1803fa1fd_0:;
L_1803fa1fd_1:;
wr(s->r,4672,8,rd(s->r,4680,8));
L_1803fa1fd_2:;
wr(s->r,4680,8,rd(s->r,4616,8));
L_1803fa1fd_3:;
/* 1803fa201: addsd xmm0, xmm1 */
L_1803fa201_0:;
L_1803fa201_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803fa201_2:;
/* 1803fa205: cmp rbp, r9 */
L_1803fa205_0:;
L_1803fa205_1:;
wr(s->u,11,8,rd(s->r,136,8));
L_1803fa205_2:;
wr(s->r,512,1,(rd(s->r,40,8)<rd(s->u,11,8)));
L_1803fa205_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),rd(s->u,11,8),8,1));
L_1803fa205_4:;
wr(s->u,19,8,(rd(s->r,40,8)-rd(s->u,11,8)));
L_1803fa205_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa205_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fa205_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fa205_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa205_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa205_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa205_11:;
/* 1803fa208: jge 0x1803fa223 */
L_1803fa208_0:;
L_1803fa208_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fa208_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa223);}
L_1803fa208_3:;
return UINT64_C(0x1803fa20a);
}
uint64_t b_1803fa205(CPU*s){
/* 1803fa205: cmp rbp, r9 */
L_1803fa205_0:;
L_1803fa205_1:;
wr(s->u,11,8,rd(s->r,136,8));
L_1803fa205_2:;
wr(s->r,512,1,(rd(s->r,40,8)<rd(s->u,11,8)));
L_1803fa205_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),rd(s->u,11,8),8,1));
L_1803fa205_4:;
wr(s->u,19,8,(rd(s->r,40,8)-rd(s->u,11,8)));
L_1803fa205_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa205_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fa205_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fa205_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa205_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa205_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa205_11:;
/* 1803fa208: jge 0x1803fa223 */
L_1803fa208_0:;
L_1803fa208_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fa208_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa223);}
L_1803fa208_3:;
return UINT64_C(0x1803fa20a);
}
uint64_t b_1803fa20a(CPU*s){
/* 1803fa20a: lea rax, [rcx + rax*4] */
L_1803fa20a_0:;
L_1803fa20a_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa20a_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa20a_3:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803fa20a_4:;
/* 1803fa20e: movss xmm1, dword ptr [rax + rbp*4] */
L_1803fa20e_0:;
L_1803fa20e_1:;
wr(s->u,0,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803fa20e_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803fa20e_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa20e_4:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fa20e_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fa20e_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fa20e_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fa20e_8:;
/* 1803fa213: cvtps2pd xmm2, xmm1 */
L_1803fa213_0:;
L_1803fa213_1:;
wr(s->u,47,8,rd(s->r,4672,8));
L_1803fa213_2:;
wr(s->r,4736,8,fb(fv(rd(s->u,47,4),4),8));
L_1803fa213_3:;
wr(s->r,4744,8,fb(fv(rd(s->u,51,4),4),8));
L_1803fa213_4:;
/* 1803fa216: add rbp, 1 */
L_1803fa216_0:;
L_1803fa216_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803fa216_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x1)),8,0));
L_1803fa216_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x1))));
L_1803fa216_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa216_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803fa216_6:;
wr(s->u,21,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803fa216_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa216_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa216_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa216_10:;
/* 1803fa21a: cmp rbp, r9 */
L_1803fa21a_0:;
L_1803fa21a_1:;
wr(s->u,31,8,rd(s->r,136,8));
L_1803fa21a_2:;
wr(s->r,512,1,(rd(s->r,40,8)<rd(s->u,31,8)));
L_1803fa21a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),rd(s->u,31,8),8,1));
L_1803fa21a_4:;
wr(s->u,39,8,(rd(s->r,40,8)-rd(s->u,31,8)));
L_1803fa21a_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa21a_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fa21a_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fa21a_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa21a_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa21a_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa21a_11:;
/* 1803fa21d: addsd xmm0, xmm2 */
L_1803fa21d_0:;
L_1803fa21d_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4736,8),8),8));
L_1803fa21d_2:;
/* 1803fa221: jl 0x1803fa20e */
L_1803fa221_0:;
L_1803fa221_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa221_2:;
if(rd(s->u,20,1)){goto L_1803fa20e_0;}
L_1803fa221_3:;
return UINT64_C(0x1803fa223);
}
uint64_t b_1803fa20e(CPU*s){
/* 1803fa20e: movss xmm1, dword ptr [rax + rbp*4] */
L_1803fa20e_0:;
L_1803fa20e_1:;
wr(s->u,0,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803fa20e_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803fa20e_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa20e_4:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fa20e_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fa20e_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fa20e_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fa20e_8:;
/* 1803fa213: cvtps2pd xmm2, xmm1 */
L_1803fa213_0:;
L_1803fa213_1:;
wr(s->u,47,8,rd(s->r,4672,8));
L_1803fa213_2:;
wr(s->r,4736,8,fb(fv(rd(s->u,47,4),4),8));
L_1803fa213_3:;
wr(s->r,4744,8,fb(fv(rd(s->u,51,4),4),8));
L_1803fa213_4:;
/* 1803fa216: add rbp, 1 */
L_1803fa216_0:;
L_1803fa216_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803fa216_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x1)),8,0));
L_1803fa216_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x1))));
L_1803fa216_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa216_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803fa216_6:;
wr(s->u,21,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803fa216_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa216_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa216_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa216_10:;
/* 1803fa21a: cmp rbp, r9 */
L_1803fa21a_0:;
L_1803fa21a_1:;
wr(s->u,31,8,rd(s->r,136,8));
L_1803fa21a_2:;
wr(s->r,512,1,(rd(s->r,40,8)<rd(s->u,31,8)));
L_1803fa21a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),rd(s->u,31,8),8,1));
L_1803fa21a_4:;
wr(s->u,39,8,(rd(s->r,40,8)-rd(s->u,31,8)));
L_1803fa21a_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa21a_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fa21a_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fa21a_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa21a_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa21a_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa21a_11:;
/* 1803fa21d: addsd xmm0, xmm2 */
L_1803fa21d_0:;
L_1803fa21d_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4736,8),8),8));
L_1803fa21d_2:;
/* 1803fa221: jl 0x1803fa20e */
L_1803fa221_0:;
L_1803fa221_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa221_2:;
if(rd(s->u,20,1)){goto L_1803fa20e_0;}
L_1803fa221_3:;
return UINT64_C(0x1803fa223);
}
uint64_t b_1803fa223(CPU*s){
/* 1803fa223: cvtsi2sd xmm1, edx */
L_1803fa223_0:;
L_1803fa223_1:;
wr(s->r,4672,8,fb((double)sx(rd(s->r,16,4),4),8));
L_1803fa223_2:;
/* 1803fa227: divsd xmm0, xmm1 */
L_1803fa227_0:;
L_1803fa227_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)/fv(rd(s->r,4672,8),8),8));
L_1803fa227_2:;
/* 1803fa22b: cvtsd2ss xmm0, xmm0 */
L_1803fa22b_0:;
L_1803fa22b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,8),8),4));
L_1803fa22b_2:;
/* 1803fa22f: movss dword ptr [r8], xmm0 */
L_1803fa22f_0:;
L_1803fa22f_1:;
wr(s->u,0,4,rd(s->r,4608,4));
L_1803fa22f_2:;
mw((uint64_t)rd(s->r,128,8),4,rd(s->u,0,4));
L_1803fa22f_3:;
/* 1803fa234: xor eax, eax */
L_1803fa234_0:;
L_1803fa234_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa234_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa234_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fa234_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa234_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa234_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa234_7:;
wr(s->u,4,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa234_8:;
wr(s->u,12,1,pop(rd(s->u,4,4),4));
L_1803fa234_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fa234_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fa234_11:;
/* 1803fa236: add rsp, 0x20 */
L_1803fa236_0:;
L_1803fa236_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa236_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803fa236_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803fa236_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa236_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa236_6:;
wr(s->u,4,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa236_7:;
wr(s->u,12,1,pop(rd(s->u,4,8),8));
L_1803fa236_8:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fa236_9:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fa236_10:;
/* 1803fa23a: pop rbp */
L_1803fa23a_0:;
L_1803fa23a_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fa23a_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa23a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa23a_4:;
wr(s->r,40,8,rd(s->u,14,8));
L_1803fa23a_5:;
/* 1803fa23b: ret  */
L_1803fa23b_0:;
L_1803fa23b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa23b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa23b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa23b_4:;
return UINT64_C(0x1803fa23c);
}
uint64_t b_1803fa23c(CPU*s){
/* 1803fa23c: xor ebp, ebp */
L_1803fa23c_0:;
L_1803fa23c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa23c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa23c_3:;
wr(s->r,40,4,(rd(s->r,40,4)^rd(s->r,40,4)));
L_1803fa23c_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fa23c_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa23c_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803fa23c_7:;
wr(s->u,0,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803fa23c_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fa23c_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fa23c_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fa23c_11:;
/* 1803fa23e: jmp 0x1803fa205 */
L_1803fa23e_0:;
L_1803fa23e_1:;
return UINT64_C(0x1803fa205);
L_1803fa23e_2:;
return UINT64_C(0x1803fa240);
}
uint64_t b_1803fa240(CPU*s){
/* 1803fa240: movsxd rbp, edx */
L_1803fa240_0:;
L_1803fa240_1:;
wr(s->r,40,8,(U)sx(rd(s->r,16,4),4));
L_1803fa240_2:;
/* 1803fa243: jmp 0x1803fa189 */
L_1803fa243_0:;
L_1803fa243_1:;
return UINT64_C(0x1803fa189);
L_1803fa243_2:;
return UINT64_C(0x1803fa248);
}
uint64_t b_1803fa248(CPU*s){
/* 1803fa248: mov eax, 0xfffffffa */
L_1803fa248_0:;
L_1803fa248_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fa248_2:;
/* 1803fa24d: add rsp, 0x20 */
L_1803fa24d_0:;
L_1803fa24d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa24d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803fa24d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803fa24d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa24d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa24d_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa24d_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa24d_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa24d_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa24d_10:;
/* 1803fa251: pop rbp */
L_1803fa251_0:;
L_1803fa251_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fa251_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa251_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa251_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fa251_5:;
/* 1803fa252: ret  */
L_1803fa252_0:;
L_1803fa252_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa252_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa252_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa252_4:;
return UINT64_C(0x1803fa253);
}
uint64_t b_1803fa253(CPU*s){
/* 1803fa253: mov eax, 0xfffffff8 */
L_1803fa253_0:;
L_1803fa253_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fa253_2:;
/* 1803fa258: add rsp, 0x20 */
L_1803fa258_0:;
L_1803fa258_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa258_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803fa258_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803fa258_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa258_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa258_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa258_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa258_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa258_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa258_10:;
/* 1803fa25c: pop rbp */
L_1803fa25c_0:;
L_1803fa25c_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fa25c_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa25c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa25c_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fa25c_5:;
/* 1803fa25d: ret  */
L_1803fa25d_0:;
L_1803fa25d_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa25d_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa25d_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa25d_4:;
return UINT64_C(0x1803fa25e);
}
uint64_t b_1803fa260(CPU*s){
/* 1803fa260: push r14 */
L_1803fa260_0:;
L_1803fa260_1:;
wr(s->u,0,8,rd(s->r,176,8));
L_1803fa260_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fa260_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fa260_4:;
/* 1803fa262: push r12 */
L_1803fa262_0:;
L_1803fa262_1:;
wr(s->u,0,8,rd(s->r,160,8));
L_1803fa262_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fa262_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fa262_4:;
/* 1803fa264: push rsi */
L_1803fa264_0:;
L_1803fa264_1:;
wr(s->u,0,8,rd(s->r,48,8));
L_1803fa264_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fa264_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fa264_4:;
/* 1803fa265: sub rsp, 0x20 */
L_1803fa265_0:;
L_1803fa265_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803fa265_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803fa265_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803fa265_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa265_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa265_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa265_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fa265_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fa265_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fa265_10:;
/* 1803fa269: xor r11d, r11d */
L_1803fa269_0:;
L_1803fa269_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa269_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa269_3:;
wr(s->r,152,4,(rd(s->r,152,4)^rd(s->r,152,4)));
L_1803fa269_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fa269_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa269_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fa269_7:;
wr(s->u,8,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fa269_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803fa269_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fa269_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fa269_11:;
/* 1803fa26c: test rcx, rcx */
L_1803fa26c_0:;
L_1803fa26c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa26c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa26c_3:;
wr(s->u,18,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fa26c_4:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa26c_5:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803fa26c_6:;
wr(s->u,8,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803fa26c_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fa26c_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fa26c_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fa26c_10:;
/* 1803fa26f: je 0x1803fa489 */
L_1803fa26f_0:;
L_1803fa26f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa489);}
L_1803fa26f_2:;
return UINT64_C(0x1803fa275);
}
uint64_t b_1803fa275(CPU*s){
/* 1803fa275: test r8, r8 */
L_1803fa275_0:;
L_1803fa275_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa275_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa275_3:;
wr(s->u,10,8,(rd(s->r,128,8)&rd(s->r,128,8)));
L_1803fa275_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa275_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fa275_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fa275_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa275_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa275_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa275_10:;
/* 1803fa278: je 0x1803fa489 */
L_1803fa278_0:;
L_1803fa278_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa489);}
L_1803fa278_2:;
return UINT64_C(0x1803fa27e);
}
uint64_t b_1803fa27e(CPU*s){
/* 1803fa27e: test edx, edx */
L_1803fa27e_0:;
L_1803fa27e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa27e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa27e_3:;
wr(s->u,8,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803fa27e_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa27e_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803fa27e_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803fa27e_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fa27e_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fa27e_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fa27e_10:;
/* 1803fa280: jle 0x1803fa47a */
L_1803fa280_0:;
L_1803fa280_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa280_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fa280_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fa47a);}
L_1803fa280_4:;
return UINT64_C(0x1803fa286);
}
uint64_t b_1803fa286(CPU*s){
/* 1803fa286: test r9, r9 */
L_1803fa286_0:;
L_1803fa286_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa286_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa286_3:;
wr(s->u,10,8,(rd(s->r,136,8)&rd(s->r,136,8)));
L_1803fa286_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa286_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fa286_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fa286_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa286_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa286_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa286_10:;
/* 1803fa289: je 0x1803fa46b */
L_1803fa289_0:;
L_1803fa289_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa46b);}
L_1803fa289_2:;
return UINT64_C(0x1803fa28f);
}
uint64_t b_1803fa28f(CPU*s){
/* 1803fa28f: movss xmm2, dword ptr [rcx] */
L_1803fa28f_0:;
L_1803fa28f_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803fa28f_2:;
wr(s->r,4736,4,rd(s->u,0,4));
L_1803fa28f_3:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fa28f_4:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fa28f_5:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fa28f_6:;
/* 1803fa293: cmp edx, 1 */
L_1803fa293_0:;
L_1803fa293_1:;
wr(s->u,12,4,rd(s->r,16,4));
L_1803fa293_2:;
wr(s->r,512,1,(rd(s->u,12,4)<((U)UINT64_C(0x1))));
L_1803fa293_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,12,4),((U)UINT64_C(0x1)),4,1));
L_1803fa293_4:;
wr(s->u,16,4,(rd(s->u,12,4)-((U)UINT64_C(0x1))));
L_1803fa293_5:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa293_6:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_1803fa293_7:;
wr(s->u,6,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_1803fa293_8:;
wr(s->u,10,1,pop(rd(s->u,6,4),4));
L_1803fa293_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fa293_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fa293_11:;
/* 1803fa296: jle 0x1803fa453 */
L_1803fa296_0:;
L_1803fa296_1:;
wr(s->u,4,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa296_2:;
wr(s->u,5,1,((rd(s->r,518,1)!=0)||(rd(s->u,4,1)!=0)));
L_1803fa296_3:;
if(rd(s->u,5,1)){return UINT64_C(0x1803fa453);}
L_1803fa296_4:;
return UINT64_C(0x1803fa29c);
}
uint64_t b_1803fa29c(CPU*s){
/* 1803fa29c: movsxd r10, edx */
L_1803fa29c_0:;
L_1803fa29c_1:;
wr(s->r,144,8,(U)sx(rd(s->r,16,4),4));
L_1803fa29c_2:;
/* 1803fa29f: add r10, -1 */
L_1803fa29f_0:;
L_1803fa29f_1:;
wr(s->r,512,1,(((rd(s->r,144,8)+((U)UINT64_C(0xffffffffffffffff)))&(((U)1<<64)-1))<rd(s->r,144,8)));
L_1803fa29f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0xffffffffffffffff)),8,0));
L_1803fa29f_3:;
wr(s->r,144,8,(rd(s->r,144,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fa29f_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa29f_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803fa29f_6:;
wr(s->u,8,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803fa29f_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fa29f_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fa29f_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fa29f_10:;
/* 1803fa2a3: lea rdx, [rcx + 4] */
L_1803fa2a3_0:;
L_1803fa2a3_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803fa2a3_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1803fa2a3_3:;
/* 1803fa2a7: and rdx, 0xf */
L_1803fa2a7_0:;
L_1803fa2a7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa2a7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa2a7_3:;
wr(s->r,16,8,(rd(s->r,16,8)&((U)UINT64_C(0xf))));
L_1803fa2a7_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa2a7_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fa2a7_6:;
wr(s->u,8,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fa2a7_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fa2a7_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fa2a7_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fa2a7_10:;
/* 1803fa2ab: test edx, edx */
L_1803fa2ab_0:;
L_1803fa2ab_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa2ab_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa2ab_3:;
wr(s->u,18,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803fa2ab_4:;
wr(s->r,519,1,(sx(rd(s->u,18,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa2ab_5:;
wr(s->r,518,1,(rd(s->u,18,4)==((U)UINT64_C(0x0))));
L_1803fa2ab_6:;
wr(s->u,8,4,(rd(s->u,18,4)&((U)UINT64_C(0xff))));
L_1803fa2ab_7:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803fa2ab_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fa2ab_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fa2ab_10:;
/* 1803fa2ad: je 0x1803fa2c0 */
L_1803fa2ad_0:;
L_1803fa2ad_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa2c0);}
L_1803fa2ad_2:;
return UINT64_C(0x1803fa2af);
}
uint64_t b_1803fa2af(CPU*s){
/* 1803fa2af: test dl, 3 */
L_1803fa2af_0:;
L_1803fa2af_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa2af_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa2af_3:;
wr(s->u,4,1,(rd(s->r,16,1)&((U)UINT64_C(0x3))));
L_1803fa2af_4:;
wr(s->r,519,1,(sx(rd(s->u,4,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803fa2af_5:;
wr(s->r,518,1,(rd(s->u,4,1)==((U)UINT64_C(0x0))));
L_1803fa2af_6:;
wr(s->u,1,1,(rd(s->u,4,1)&((U)UINT64_C(0xff))));
L_1803fa2af_7:;
wr(s->u,2,1,pop(rd(s->u,1,1),1));
L_1803fa2af_8:;
wr(s->u,3,1,(rd(s->u,2,1)&((U)UINT64_C(0x1))));
L_1803fa2af_9:;
wr(s->r,514,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_1803fa2af_10:;
/* 1803fa2b2: jne 0x1803fa467 */
L_1803fa2b2_0:;
L_1803fa2b2_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fa2b2_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa467);}
L_1803fa2b2_3:;
return UINT64_C(0x1803fa2b8);
}
uint64_t b_1803fa2b8(CPU*s){
/* 1803fa2b8: neg edx */
L_1803fa2b8_0:;
L_1803fa2b8_1:;
wr(s->r,512,1,(rd(s->r,16,4)!=((U)UINT64_C(0x0))));
L_1803fa2b8_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,16,4),4,1));
L_1803fa2b8_3:;
wr(s->r,16,4,(-rd(s->r,16,4)));
L_1803fa2b8_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa2b8_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fa2b8_6:;
wr(s->u,14,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fa2b8_7:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fa2b8_8:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fa2b8_9:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fa2b8_10:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fa2b8_11:;
/* 1803fa2ba: add edx, 0x10 */
L_1803fa2ba_0:;
L_1803fa2ba_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+((U)UINT64_C(0x10)))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803fa2ba_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x10)),4,0));
L_1803fa2ba_3:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x10))));
L_1803fa2ba_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fa2ba_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa2ba_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fa2ba_7:;
wr(s->u,14,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fa2ba_8:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fa2ba_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fa2ba_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fa2ba_11:;
/* 1803fa2bd: shr edx, 2 */
L_1803fa2bd_0:;
L_1803fa2bd_1:;
wr(s->u,75,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803fa2bd_2:;
wr(s->u,79,4,rd(s->r,16,4));
L_1803fa2bd_3:;
wr(s->r,16,4,((rd(s->u,75,4)>=32)?0:(rd(s->r,16,4)>>rd(s->u,75,4))));
L_1803fa2bd_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fa2bd_5:;
wr(s->u,43,1,(rd(s->u,75,4)==((U)UINT64_C(0x0))));
L_1803fa2bd_6:;
wr(s->u,44,4,(rd(s->u,75,4)-((U)UINT64_C(0x1))));
L_1803fa2bd_7:;
wr(s->u,48,4,((rd(s->u,44,4)>=32)?0:(rd(s->u,79,4)>>rd(s->u,44,4))));
L_1803fa2bd_8:;
wr(s->u,52,4,(rd(s->u,48,4)&((U)UINT64_C(0x1))));
L_1803fa2bd_9:;
wr(s->u,56,1,(rd(s->u,52,4)!=((U)UINT64_C(0x0))));
L_1803fa2bd_10:;
wr(s->u,0,1,rd(s->u,43,1));
L_1803fa2bd_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fa2bd_12:;
wr(s->u,2,1,(!rd(s->u,43,1)));
L_1803fa2bd_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fa2bd_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,56,1)));
L_1803fa2bd_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fa2bd_16:;
wr(s->u,57,1,(rd(s->u,75,4)==((U)UINT64_C(0x1))));
L_1803fa2bd_17:;
wr(s->u,58,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa2bd_18:;
wr(s->u,0,1,rd(s->u,57,1));
L_1803fa2bd_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fa2bd_20:;
wr(s->u,2,1,(!rd(s->u,57,1)));
L_1803fa2bd_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fa2bd_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,58,1)));
L_1803fa2bd_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fa2bd_24:;
wr(s->u,24,1,(rd(s->u,75,4)!=((U)UINT64_C(0x0))));
L_1803fa2bd_25:;
wr(s->u,25,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa2bd_26:;
wr(s->u,26,1,(!rd(s->u,24,1)));
L_1803fa2bd_27:;
wr(s->u,27,1,(rd(s->u,26,1)&rd(s->r,519,1)));
L_1803fa2bd_28:;
wr(s->u,28,1,(rd(s->u,24,1)&rd(s->u,25,1)));
L_1803fa2bd_29:;
wr(s->r,519,1,(rd(s->u,27,1)|rd(s->u,28,1)));
L_1803fa2bd_30:;
wr(s->u,29,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fa2bd_31:;
wr(s->u,30,1,(!rd(s->u,24,1)));
L_1803fa2bd_32:;
wr(s->u,31,1,(rd(s->u,30,1)&rd(s->r,518,1)));
L_1803fa2bd_33:;
wr(s->u,32,1,(rd(s->u,24,1)&rd(s->u,29,1)));
L_1803fa2bd_34:;
wr(s->r,518,1,(rd(s->u,31,1)|rd(s->u,32,1)));
L_1803fa2bd_35:;
wr(s->u,33,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fa2bd_36:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803fa2bd_37:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803fa2bd_38:;
wr(s->u,39,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803fa2bd_39:;
wr(s->u,40,1,(!rd(s->u,24,1)));
L_1803fa2bd_40:;
wr(s->u,41,1,(rd(s->u,40,1)&rd(s->r,514,1)));
L_1803fa2bd_41:;
wr(s->u,42,1,(rd(s->u,24,1)&rd(s->u,39,1)));
L_1803fa2bd_42:;
wr(s->r,514,1,(rd(s->u,41,1)|rd(s->u,42,1)));
L_1803fa2bd_43:;
/* 1803fa2c0: movsxd rax, edx */
L_1803fa2c0_0:;
L_1803fa2c0_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803fa2c0_2:;
/* 1803fa2c3: lea rsi, [rax + 8] */
L_1803fa2c3_0:;
L_1803fa2c3_1:;
wr(s->u,5,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803fa2c3_2:;
wr(s->r,48,8,rd(s->u,5,8));
L_1803fa2c3_3:;
/* 1803fa2c7: cmp r10, rsi */
L_1803fa2c7_0:;
L_1803fa2c7_1:;
wr(s->u,59,8,rd(s->r,48,8));
L_1803fa2c7_2:;
wr(s->r,512,1,(rd(s->r,144,8)<rd(s->u,59,8)));
L_1803fa2c7_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->u,59,8),8,1));
L_1803fa2c7_4:;
wr(s->u,67,8,(rd(s->r,144,8)-rd(s->u,59,8)));
L_1803fa2c7_5:;
wr(s->r,519,1,(sx(rd(s->u,67,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa2c7_6:;
wr(s->r,518,1,(rd(s->u,67,8)==((U)UINT64_C(0x0))));
L_1803fa2c7_7:;
wr(s->u,14,8,(rd(s->u,67,8)&((U)UINT64_C(0xff))));
L_1803fa2c7_8:;
wr(s->u,22,1,pop(rd(s->u,14,8),8));
L_1803fa2c7_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fa2c7_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fa2c7_11:;
/* 1803fa2ca: jl 0x1803fa467 */
L_1803fa2ca_0:;
L_1803fa2ca_1:;
wr(s->u,13,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa2ca_2:;
if(rd(s->u,13,1)){return UINT64_C(0x1803fa467);}
L_1803fa2ca_3:;
return UINT64_C(0x1803fa2d0);
}
uint64_t b_1803fa2c0(CPU*s){
/* 1803fa2c0: movsxd rax, edx */
L_1803fa2c0_0:;
L_1803fa2c0_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803fa2c0_2:;
/* 1803fa2c3: lea rsi, [rax + 8] */
L_1803fa2c3_0:;
L_1803fa2c3_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803fa2c3_2:;
wr(s->r,48,8,rd(s->u,0,8));
L_1803fa2c3_3:;
/* 1803fa2c7: cmp r10, rsi */
L_1803fa2c7_0:;
L_1803fa2c7_1:;
wr(s->u,19,8,rd(s->r,48,8));
L_1803fa2c7_2:;
wr(s->r,512,1,(rd(s->r,144,8)<rd(s->u,19,8)));
L_1803fa2c7_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->u,19,8),8,1));
L_1803fa2c7_4:;
wr(s->u,27,8,(rd(s->r,144,8)-rd(s->u,19,8)));
L_1803fa2c7_5:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa2c7_6:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803fa2c7_7:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803fa2c7_8:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fa2c7_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fa2c7_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fa2c7_11:;
/* 1803fa2ca: jl 0x1803fa467 */
L_1803fa2ca_0:;
L_1803fa2ca_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa2ca_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803fa467);}
L_1803fa2ca_3:;
return UINT64_C(0x1803fa2d0);
}
uint64_t b_1803fa2d0(CPU*s){
/* 1803fa2d0: mov r12d, r10d */
L_1803fa2d0_0:;
L_1803fa2d0_1:;
wr(s->r,160,4,rd(s->r,144,4));
L_1803fa2d0_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fa2d0_3:;
/* 1803fa2d3: mov esi, r12d */
L_1803fa2d3_0:;
L_1803fa2d3_1:;
wr(s->r,48,4,rd(s->r,160,4));
L_1803fa2d3_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fa2d3_3:;
/* 1803fa2d6: sub esi, edx */
L_1803fa2d6_0:;
L_1803fa2d6_1:;
wr(s->r,512,1,(rd(s->r,48,4)<rd(s->r,16,4)));
L_1803fa2d6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),rd(s->r,16,4),4,1));
L_1803fa2d6_3:;
wr(s->r,48,4,(rd(s->r,48,4)-rd(s->r,16,4)));
L_1803fa2d6_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fa2d6_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa2d6_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803fa2d6_7:;
wr(s->u,2,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803fa2d6_8:;
wr(s->u,10,1,pop(rd(s->u,2,4),4));
L_1803fa2d6_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fa2d6_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fa2d6_11:;
/* 1803fa2d8: and esi, 7 */
L_1803fa2d8_0:;
L_1803fa2d8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa2d8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa2d8_3:;
wr(s->r,48,4,(rd(s->r,48,4)&((U)UINT64_C(0x7))));
L_1803fa2d8_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fa2d8_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa2d8_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803fa2d8_7:;
wr(s->u,2,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803fa2d8_8:;
wr(s->u,10,1,pop(rd(s->u,2,4),4));
L_1803fa2d8_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fa2d8_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fa2d8_11:;
/* 1803fa2db: sub r12d, esi */
L_1803fa2db_0:;
L_1803fa2db_1:;
wr(s->r,512,1,(rd(s->r,160,4)<rd(s->r,48,4)));
L_1803fa2db_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),rd(s->r,48,4),4,1));
L_1803fa2db_3:;
wr(s->r,160,4,(rd(s->r,160,4)-rd(s->r,48,4)));
L_1803fa2db_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fa2db_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa2db_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fa2db_7:;
wr(s->u,2,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fa2db_8:;
wr(s->u,10,1,pop(rd(s->u,2,4),4));
L_1803fa2db_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fa2db_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fa2db_11:;
/* 1803fa2de: movsxd rsi, r12d */
L_1803fa2de_0:;
L_1803fa2de_1:;
wr(s->r,48,8,(U)sx(rd(s->r,160,4),4));
L_1803fa2de_2:;
/* 1803fa2e1: xor r14d, r14d */
L_1803fa2e1_0:;
L_1803fa2e1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa2e1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa2e1_3:;
wr(s->r,176,4,(rd(s->r,176,4)^rd(s->r,176,4)));
L_1803fa2e1_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fa2e1_5:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa2e1_6:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803fa2e1_7:;
wr(s->u,2,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803fa2e1_8:;
wr(s->u,10,1,pop(rd(s->u,2,4),4));
L_1803fa2e1_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fa2e1_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fa2e1_11:;
/* 1803fa2e4: mov r12, rcx */
L_1803fa2e4_0:;
L_1803fa2e4_1:;
wr(s->r,160,8,rd(s->r,8,8));
L_1803fa2e4_2:;
/* 1803fa2e7: test rax, rax */
L_1803fa2e7_0:;
L_1803fa2e7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa2e7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa2e7_3:;
wr(s->u,12,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803fa2e7_4:;
wr(s->r,519,1,(sx(rd(s->u,12,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa2e7_5:;
wr(s->r,518,1,(rd(s->u,12,8)==((U)UINT64_C(0x0))));
L_1803fa2e7_6:;
wr(s->u,2,8,(rd(s->u,12,8)&((U)UINT64_C(0xff))));
L_1803fa2e7_7:;
wr(s->u,10,1,pop(rd(s->u,2,8),8));
L_1803fa2e7_8:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fa2e7_9:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fa2e7_10:;
/* 1803fa2ea: jle 0x1803fa30f */
L_1803fa2ea_0:;
L_1803fa2ea_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa2ea_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fa2ea_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fa30f);}
L_1803fa2ea_4:;
return UINT64_C(0x1803fa2ec);
}
uint64_t b_1803fa2ec(CPU*s){
/* 1803fa2ec: movss xmm0, dword ptr [r12 + 4] */
L_1803fa2ec_0:;
L_1803fa2ec_1:;
wr(s->u,0,8,(((U)UINT64_C(0x4))+rd(s->r,160,8)));
L_1803fa2ec_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fa2ec_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803fa2ec_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fa2ec_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fa2ec_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fa2ec_7:;
/* 1803fa2f3: comiss xmm0, xmm2 */
L_1803fa2f3_0:;
L_1803fa2f3_1:;
wr(s->u,13,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803fa2f3_2:;
wr(s->u,14,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803fa2f3_3:;
wr(s->r,514,1,((rd(s->u,13,1)!=0)||(rd(s->u,14,1)!=0)));
L_1803fa2f3_4:;
wr(s->u,15,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4736,4),4)));
L_1803fa2f3_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,15,1)));
L_1803fa2f3_6:;
wr(s->u,16,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4736,4),4)));
L_1803fa2f3_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,16,1)));
L_1803fa2f3_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa2f3_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fa2f3_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fa2f3_11:;
/* 1803fa2f6: jbe 0x1803fa302 */
L_1803fa2f6_0:;
L_1803fa2f6_1:;
wr(s->u,12,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fa2f6_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803fa302);}
L_1803fa2f6_3:;
return UINT64_C(0x1803fa2f8);
}
uint64_t b_1803fa2f8(CPU*s){
/* 1803fa2f8: movaps xmm2, xmm0 */
L_1803fa2f8_0:;
L_1803fa2f8_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803fa2f8_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803fa2f8_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803fa2f8_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803fa2f8_5:;
/* 1803fa2fb: mov r11d, r14d */
L_1803fa2fb_0:;
L_1803fa2fb_1:;
wr(s->r,152,4,rd(s->r,176,4));
L_1803fa2fb_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fa2fb_3:;
/* 1803fa2fe: add r11d, 1 */
L_1803fa2fe_0:;
L_1803fa2fe_1:;
wr(s->r,512,1,(((rd(s->r,152,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,152,4)));
L_1803fa2fe_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803fa2fe_3:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803fa2fe_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fa2fe_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa2fe_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fa2fe_7:;
wr(s->u,1,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fa2fe_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803fa2fe_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa2fe_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa2fe_11:;
/* 1803fa302: add r12, 4 */
L_1803fa302_0:;
L_1803fa302_1:;
wr(s->r,512,1,(((rd(s->r,160,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,160,8)));
L_1803fa302_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),((U)UINT64_C(0x4)),8,0));
L_1803fa302_3:;
wr(s->r,160,8,(rd(s->r,160,8)+((U)UINT64_C(0x4))));
L_1803fa302_4:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa302_5:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803fa302_6:;
wr(s->u,1,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803fa302_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa302_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa302_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa302_10:;
/* 1803fa306: add r14, 1 */
L_1803fa306_0:;
L_1803fa306_1:;
wr(s->r,512,1,(((rd(s->r,176,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,176,8)));
L_1803fa306_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,176,8),((U)UINT64_C(0x1)),8,0));
L_1803fa306_3:;
wr(s->r,176,8,(rd(s->r,176,8)+((U)UINT64_C(0x1))));
L_1803fa306_4:;
wr(s->r,519,1,(sx(rd(s->r,176,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa306_5:;
wr(s->r,518,1,(rd(s->r,176,8)==((U)UINT64_C(0x0))));
L_1803fa306_6:;
wr(s->u,1,8,(rd(s->r,176,8)&((U)UINT64_C(0xff))));
L_1803fa306_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa306_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa306_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa306_10:;
/* 1803fa30a: cmp r14, rax */
L_1803fa30a_0:;
L_1803fa30a_1:;
wr(s->u,11,8,rd(s->r,0,8));
L_1803fa30a_2:;
wr(s->r,512,1,(rd(s->r,176,8)<rd(s->u,11,8)));
L_1803fa30a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,176,8),rd(s->u,11,8),8,1));
L_1803fa30a_4:;
wr(s->u,19,8,(rd(s->r,176,8)-rd(s->u,11,8)));
L_1803fa30a_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa30a_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fa30a_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fa30a_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa30a_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa30a_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa30a_11:;
/* 1803fa30d: jl 0x1803fa2ec */
L_1803fa30d_0:;
L_1803fa30d_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa30d_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa2ec);}
L_1803fa30d_3:;
return UINT64_C(0x1803fa30f);
}
uint64_t b_1803fa302(CPU*s){
/* 1803fa302: add r12, 4 */
L_1803fa302_0:;
L_1803fa302_1:;
wr(s->r,512,1,(((rd(s->r,160,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,160,8)));
L_1803fa302_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),((U)UINT64_C(0x4)),8,0));
L_1803fa302_3:;
wr(s->r,160,8,(rd(s->r,160,8)+((U)UINT64_C(0x4))));
L_1803fa302_4:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa302_5:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803fa302_6:;
wr(s->u,1,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803fa302_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa302_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa302_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa302_10:;
/* 1803fa306: add r14, 1 */
L_1803fa306_0:;
L_1803fa306_1:;
wr(s->r,512,1,(((rd(s->r,176,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,176,8)));
L_1803fa306_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,176,8),((U)UINT64_C(0x1)),8,0));
L_1803fa306_3:;
wr(s->r,176,8,(rd(s->r,176,8)+((U)UINT64_C(0x1))));
L_1803fa306_4:;
wr(s->r,519,1,(sx(rd(s->r,176,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa306_5:;
wr(s->r,518,1,(rd(s->r,176,8)==((U)UINT64_C(0x0))));
L_1803fa306_6:;
wr(s->u,1,8,(rd(s->r,176,8)&((U)UINT64_C(0xff))));
L_1803fa306_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa306_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa306_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa306_10:;
/* 1803fa30a: cmp r14, rax */
L_1803fa30a_0:;
L_1803fa30a_1:;
wr(s->u,11,8,rd(s->r,0,8));
L_1803fa30a_2:;
wr(s->r,512,1,(rd(s->r,176,8)<rd(s->u,11,8)));
L_1803fa30a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,176,8),rd(s->u,11,8),8,1));
L_1803fa30a_4:;
wr(s->u,19,8,(rd(s->r,176,8)-rd(s->u,11,8)));
L_1803fa30a_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa30a_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fa30a_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fa30a_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa30a_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa30a_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa30a_11:;
/* 1803fa30d: jl 0x1803fa2ec */
L_1803fa30d_0:;
L_1803fa30d_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa30d_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa2ec);}
L_1803fa30d_3:;
return UINT64_C(0x1803fa30f);
}
uint64_t b_1803fa30f(CPU*s){
/* 1803fa30f: movdqa xmm5, xmmword ptr [rip + 0x4140c9] */
L_1803fa30f_0:;
L_1803fa30f_1:;
wr(s->r,4928,16,mr(UINT64_C(0x18080e3e0),16));
L_1803fa30f_2:;
/* 1803fa317: lea r14d, [rdx + 2] */
L_1803fa317_0:;
L_1803fa317_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x2))));
L_1803fa317_2:;
wr(s->r,176,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fa317_3:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803fa317_4:;
/* 1803fa31b: lea r12d, [rdx + 3] */
L_1803fa31b_0:;
L_1803fa31b_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x3))));
L_1803fa31b_2:;
wr(s->r,160,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fa31b_3:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fa31b_4:;
/* 1803fa31f: movd xmm1, r11d */
L_1803fa31f_0:;
L_1803fa31f_1:;
wr(s->r,4672,16,rd(s->r,152,4));
L_1803fa31f_2:;
/* 1803fa324: punpckldq xmm1, xmm1 */
L_1803fa324_0:;
L_1803fa324_1:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803fa324_2:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803fa324_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803fa324_4:;
/* 1803fa328: punpckldq xmm1, xmm1 */
L_1803fa328_0:;
L_1803fa328_1:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803fa328_2:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803fa328_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803fa328_4:;
/* 1803fa32c: movaps xmm0, xmm2 */
L_1803fa32c_0:;
L_1803fa32c_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fa32c_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fa32c_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fa32c_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fa32c_5:;
/* 1803fa32f: unpcklps xmm0, xmm0 */
L_1803fa32f_0:;
L_1803fa32f_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803fa32f_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803fa32f_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803fa32f_4:;
/* 1803fa332: unpcklps xmm0, xmm0 */
L_1803fa332_0:;
L_1803fa332_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803fa332_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803fa332_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803fa332_4:;
/* 1803fa335: lea r11d, [rdx + 1] */
L_1803fa335_0:;
L_1803fa335_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x1))));
L_1803fa335_2:;
wr(s->r,152,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fa335_3:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fa335_4:;
/* 1803fa339: add edx, 4 */
L_1803fa339_0:;
L_1803fa339_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+((U)UINT64_C(0x4)))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803fa339_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x4)),4,0));
L_1803fa339_3:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x4))));
L_1803fa339_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fa339_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa339_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fa339_7:;
wr(s->u,40,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fa339_8:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803fa339_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803fa339_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803fa339_11:;
/* 1803fa33c: movd xmm4, r11d */
L_1803fa33c_0:;
L_1803fa33c_1:;
wr(s->r,4864,16,rd(s->r,152,4));
L_1803fa33c_2:;
/* 1803fa341: movd xmm2, r12d */
L_1803fa341_0:;
L_1803fa341_1:;
wr(s->r,4736,16,rd(s->r,160,4));
L_1803fa341_2:;
/* 1803fa346: punpckldq xmm4, xmm2 */
L_1803fa346_0:;
L_1803fa346_1:;
wr(s->r,4876,4,rd(s->r,4740,4));
L_1803fa346_2:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803fa346_3:;
wr(s->r,4868,4,rd(s->r,4736,4));
L_1803fa346_4:;
/* 1803fa34a: movd xmm2, r14d */
L_1803fa34a_0:;
L_1803fa34a_1:;
wr(s->r,4736,16,rd(s->r,176,4));
L_1803fa34a_2:;
/* 1803fa34f: movd xmm3, edx */
L_1803fa34f_0:;
L_1803fa34f_1:;
wr(s->r,4800,16,rd(s->r,16,4));
L_1803fa34f_2:;
/* 1803fa353: punpckldq xmm2, xmm3 */
L_1803fa353_0:;
L_1803fa353_1:;
wr(s->r,4748,4,rd(s->r,4804,4));
L_1803fa353_2:;
wr(s->r,4744,4,rd(s->r,4740,4));
L_1803fa353_3:;
wr(s->r,4740,4,rd(s->r,4800,4));
L_1803fa353_4:;
/* 1803fa357: punpckldq xmm4, xmm2 */
L_1803fa357_0:;
L_1803fa357_1:;
wr(s->r,4876,4,rd(s->r,4740,4));
L_1803fa357_2:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803fa357_3:;
wr(s->r,4868,4,rd(s->r,4736,4));
L_1803fa357_4:;
/* 1803fa35b: lea rdx, [rcx + rax*4] */
L_1803fa35b_0:;
L_1803fa35b_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa35b_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803fa35b_3:;
wr(s->r,16,8,rd(s->u,16,8));
L_1803fa35b_4:;
/* 1803fa35f: lea rax, [rcx + rsi*4] */
L_1803fa35f_0:;
L_1803fa35f_1:;
wr(s->u,8,8,(rd(s->r,48,8)*((U)UINT64_C(0x4))));
L_1803fa35f_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803fa35f_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803fa35f_4:;
/* 1803fa363: movaps xmm3, xmmword ptr [rdx + 4] */
L_1803fa363_0:;
L_1803fa363_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803fa363_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fa363_3:;
wr(s->u,66,16,rd(s->u,24,16));
L_1803fa363_4:;
wr(s->r,4800,4,rd(s->u,66,4));
L_1803fa363_5:;
wr(s->r,4804,4,rd(s->u,70,4));
L_1803fa363_6:;
wr(s->r,4808,4,rd(s->u,74,4));
L_1803fa363_7:;
wr(s->r,4812,4,rd(s->u,78,4));
L_1803fa363_8:;
/* 1803fa367: movaps xmm2, xmm0 */
L_1803fa367_0:;
L_1803fa367_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803fa367_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803fa367_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803fa367_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803fa367_5:;
/* 1803fa36a: cmpltps xmm2, xmm3 */
L_1803fa36a_0:;
L_1803fa36a_1:;
wr(s->r,4480,4,rd(s->r,4736,4));
L_1803fa36a_2:;
wr(s->r,4484,4,rd(s->r,4740,4));
L_1803fa36a_3:;
wr(s->r,4488,4,rd(s->r,4744,4));
L_1803fa36a_4:;
wr(s->r,4492,4,rd(s->r,4748,4));
L_1803fa36a_5:;
wr(s->r,4496,4,rd(s->r,4800,4));
L_1803fa36a_6:;
wr(s->r,4500,4,rd(s->r,4804,4));
L_1803fa36a_7:;
wr(s->r,4504,4,rd(s->r,4808,4));
L_1803fa36a_8:;
wr(s->r,4508,4,rd(s->r,4812,4));
L_1803fa36a_9:;
wr(s->u,46,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803fa36a_10:;
wr(s->u,47,4,rd(s->u,46,1));
L_1803fa36a_11:;
wr(s->r,4480,4,(rd(s->u,47,4)*((U)UINT64_C(0xffffffff))));
L_1803fa36a_12:;
wr(s->u,51,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803fa36a_13:;
wr(s->u,52,4,rd(s->u,51,1));
L_1803fa36a_14:;
wr(s->r,4484,4,(rd(s->u,52,4)*((U)UINT64_C(0xffffffff))));
L_1803fa36a_15:;
wr(s->u,56,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803fa36a_16:;
wr(s->u,57,4,rd(s->u,56,1));
L_1803fa36a_17:;
wr(s->r,4488,4,(rd(s->u,57,4)*((U)UINT64_C(0xffffffff))));
L_1803fa36a_18:;
wr(s->u,61,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803fa36a_19:;
wr(s->u,62,4,rd(s->u,61,1));
L_1803fa36a_20:;
wr(s->r,4492,4,(rd(s->u,62,4)*((U)UINT64_C(0xffffffff))));
L_1803fa36a_21:;
wr(s->r,4736,4,rd(s->r,4480,4));
L_1803fa36a_22:;
wr(s->r,4740,4,rd(s->r,4484,4));
L_1803fa36a_23:;
wr(s->r,4744,4,rd(s->r,4488,4));
L_1803fa36a_24:;
wr(s->r,4748,4,rd(s->r,4492,4));
L_1803fa36a_25:;
/* 1803fa36e: maxps xmm3, xmm0 */
L_1803fa36e_0:;
L_1803fa36e_1:;
wr(s->r,4800,16,(((fv(((rd(s->r,4800,16)>>0)&UINT32_MAX),4)>fv(((rd(s->r,4608,16)>>0)&UINT32_MAX),4)?((rd(s->r,4800,16)>>0)&UINT32_MAX):((rd(s->r,4608,16)>>0)&UINT32_MAX)))<<0)|(((fv(((rd(s->r,4800,16)>>32)&UINT32_MAX),4)>fv(((rd(s->r,4608,16)>>32)&UINT32_MAX),4)?((rd(s->r,4800,16)>>32)&UINT32_MAX):((rd(s->r,4608,16)>>32)&UINT32_MAX)))<<32)|(((fv(((rd(s->r,4800,16)>>64)&UINT32_MAX),4)>fv(((rd(s->r,4608,16)>>64)&UINT32_MAX),4)?((rd(s->r,4800,16)>>64)&UINT32_MAX):((rd(s->r,4608,16)>>64)&UINT32_MAX)))<<64)|(((fv(((rd(s->r,4800,16)>>96)&UINT32_MAX),4)>fv(((rd(s->r,4608,16)>>96)&UINT32_MAX),4)?((rd(s->r,4800,16)>>96)&UINT32_MAX):((rd(s->r,4608,16)>>96)&UINT32_MAX)))<<96));
L_1803fa36e_2:;
/* 1803fa371: movaps xmm0, xmm2 */
L_1803fa371_0:;
L_1803fa371_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fa371_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fa371_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fa371_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fa371_5:;
/* 1803fa374: movdqa xmm2, xmm4 */
L_1803fa374_0:;
L_1803fa374_1:;
wr(s->r,4736,16,rd(s->r,4864,16));
L_1803fa374_2:;
/* 1803fa378: paddd xmm4, xmm5 */
L_1803fa378_0:;
L_1803fa378_1:;
wr(s->r,4864,4,(rd(s->r,4864,4)+rd(s->r,4928,4)));
L_1803fa378_2:;
wr(s->r,4868,4,(rd(s->r,4868,4)+rd(s->r,4932,4)));
L_1803fa378_3:;
wr(s->r,4872,4,(rd(s->r,4872,4)+rd(s->r,4936,4)));
L_1803fa378_4:;
wr(s->r,4876,4,(rd(s->r,4876,4)+rd(s->r,4940,4)));
L_1803fa378_5:;
/* 1803fa37c: pand xmm2, xmm0 */
L_1803fa37c_0:;
L_1803fa37c_1:;
wr(s->r,4736,16,(rd(s->r,4736,16)&rd(s->r,4608,16)));
L_1803fa37c_2:;
/* 1803fa380: pandn xmm0, xmm1 */
L_1803fa380_0:;
L_1803fa380_1:;
wr(s->u,82,16,(~rd(s->r,4608,16)));
L_1803fa380_2:;
wr(s->r,4608,16,(rd(s->u,82,16)&rd(s->r,4672,16)));
L_1803fa380_3:;
/* 1803fa384: movaps xmm1, xmm3 */
L_1803fa384_0:;
L_1803fa384_1:;
wr(s->r,4672,4,rd(s->r,4800,4));
L_1803fa384_2:;
wr(s->r,4676,4,rd(s->r,4804,4));
L_1803fa384_3:;
wr(s->r,4680,4,rd(s->r,4808,4));
L_1803fa384_4:;
wr(s->r,4684,4,rd(s->r,4812,4));
L_1803fa384_5:;
/* 1803fa387: por xmm2, xmm0 */
L_1803fa387_0:;
L_1803fa387_1:;
wr(s->r,4736,16,(rd(s->r,4736,16)|rd(s->r,4608,16)));
L_1803fa387_2:;
/* 1803fa38b: movaps xmm0, xmmword ptr [rdx + 0x14] */
L_1803fa38b_0:;
L_1803fa38b_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x14))));
L_1803fa38b_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fa38b_3:;
wr(s->u,66,16,rd(s->u,24,16));
L_1803fa38b_4:;
wr(s->r,4608,4,rd(s->u,66,4));
L_1803fa38b_5:;
wr(s->r,4612,4,rd(s->u,70,4));
L_1803fa38b_6:;
wr(s->r,4616,4,rd(s->u,74,4));
L_1803fa38b_7:;
wr(s->r,4620,4,rd(s->u,78,4));
L_1803fa38b_8:;
return UINT64_C(0x1803fa38f);
}
uint64_t b_1803fa363(CPU*s){
/* 1803fa363: movaps xmm3, xmmword ptr [rdx + 4] */
L_1803fa363_0:;
L_1803fa363_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803fa363_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fa363_3:;
wr(s->u,71,16,rd(s->u,8,16));
L_1803fa363_4:;
wr(s->r,4800,4,rd(s->u,71,4));
L_1803fa363_5:;
wr(s->r,4804,4,rd(s->u,75,4));
L_1803fa363_6:;
wr(s->r,4808,4,rd(s->u,79,4));
L_1803fa363_7:;
wr(s->r,4812,4,rd(s->u,83,4));
L_1803fa363_8:;
/* 1803fa367: movaps xmm2, xmm0 */
L_1803fa367_0:;
L_1803fa367_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803fa367_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803fa367_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803fa367_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803fa367_5:;
/* 1803fa36a: cmpltps xmm2, xmm3 */
L_1803fa36a_0:;
L_1803fa36a_1:;
wr(s->r,4480,4,rd(s->r,4736,4));
L_1803fa36a_2:;
wr(s->r,4484,4,rd(s->r,4740,4));
L_1803fa36a_3:;
wr(s->r,4488,4,rd(s->r,4744,4));
L_1803fa36a_4:;
wr(s->r,4492,4,rd(s->r,4748,4));
L_1803fa36a_5:;
wr(s->r,4496,4,rd(s->r,4800,4));
L_1803fa36a_6:;
wr(s->r,4500,4,rd(s->r,4804,4));
L_1803fa36a_7:;
wr(s->r,4504,4,rd(s->r,4808,4));
L_1803fa36a_8:;
wr(s->r,4508,4,rd(s->r,4812,4));
L_1803fa36a_9:;
wr(s->u,51,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803fa36a_10:;
wr(s->u,52,4,rd(s->u,51,1));
L_1803fa36a_11:;
wr(s->r,4480,4,(rd(s->u,52,4)*((U)UINT64_C(0xffffffff))));
L_1803fa36a_12:;
wr(s->u,56,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803fa36a_13:;
wr(s->u,57,4,rd(s->u,56,1));
L_1803fa36a_14:;
wr(s->r,4484,4,(rd(s->u,57,4)*((U)UINT64_C(0xffffffff))));
L_1803fa36a_15:;
wr(s->u,61,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803fa36a_16:;
wr(s->u,62,4,rd(s->u,61,1));
L_1803fa36a_17:;
wr(s->r,4488,4,(rd(s->u,62,4)*((U)UINT64_C(0xffffffff))));
L_1803fa36a_18:;
wr(s->u,66,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803fa36a_19:;
wr(s->u,67,4,rd(s->u,66,1));
L_1803fa36a_20:;
wr(s->r,4492,4,(rd(s->u,67,4)*((U)UINT64_C(0xffffffff))));
L_1803fa36a_21:;
wr(s->r,4736,4,rd(s->r,4480,4));
L_1803fa36a_22:;
wr(s->r,4740,4,rd(s->r,4484,4));
L_1803fa36a_23:;
wr(s->r,4744,4,rd(s->r,4488,4));
L_1803fa36a_24:;
wr(s->r,4748,4,rd(s->r,4492,4));
L_1803fa36a_25:;
/* 1803fa36e: maxps xmm3, xmm0 */
L_1803fa36e_0:;
L_1803fa36e_1:;
wr(s->r,4800,16,(((fv(((rd(s->r,4800,16)>>0)&UINT32_MAX),4)>fv(((rd(s->r,4608,16)>>0)&UINT32_MAX),4)?((rd(s->r,4800,16)>>0)&UINT32_MAX):((rd(s->r,4608,16)>>0)&UINT32_MAX)))<<0)|(((fv(((rd(s->r,4800,16)>>32)&UINT32_MAX),4)>fv(((rd(s->r,4608,16)>>32)&UINT32_MAX),4)?((rd(s->r,4800,16)>>32)&UINT32_MAX):((rd(s->r,4608,16)>>32)&UINT32_MAX)))<<32)|(((fv(((rd(s->r,4800,16)>>64)&UINT32_MAX),4)>fv(((rd(s->r,4608,16)>>64)&UINT32_MAX),4)?((rd(s->r,4800,16)>>64)&UINT32_MAX):((rd(s->r,4608,16)>>64)&UINT32_MAX)))<<64)|(((fv(((rd(s->r,4800,16)>>96)&UINT32_MAX),4)>fv(((rd(s->r,4608,16)>>96)&UINT32_MAX),4)?((rd(s->r,4800,16)>>96)&UINT32_MAX):((rd(s->r,4608,16)>>96)&UINT32_MAX)))<<96));
L_1803fa36e_2:;
/* 1803fa371: movaps xmm0, xmm2 */
L_1803fa371_0:;
L_1803fa371_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fa371_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fa371_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fa371_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fa371_5:;
/* 1803fa374: movdqa xmm2, xmm4 */
L_1803fa374_0:;
L_1803fa374_1:;
wr(s->r,4736,16,rd(s->r,4864,16));
L_1803fa374_2:;
/* 1803fa378: paddd xmm4, xmm5 */
L_1803fa378_0:;
L_1803fa378_1:;
wr(s->r,4864,4,(rd(s->r,4864,4)+rd(s->r,4928,4)));
L_1803fa378_2:;
wr(s->r,4868,4,(rd(s->r,4868,4)+rd(s->r,4932,4)));
L_1803fa378_3:;
wr(s->r,4872,4,(rd(s->r,4872,4)+rd(s->r,4936,4)));
L_1803fa378_4:;
wr(s->r,4876,4,(rd(s->r,4876,4)+rd(s->r,4940,4)));
L_1803fa378_5:;
/* 1803fa37c: pand xmm2, xmm0 */
L_1803fa37c_0:;
L_1803fa37c_1:;
wr(s->r,4736,16,(rd(s->r,4736,16)&rd(s->r,4608,16)));
L_1803fa37c_2:;
/* 1803fa380: pandn xmm0, xmm1 */
L_1803fa380_0:;
L_1803fa380_1:;
wr(s->u,87,16,(~rd(s->r,4608,16)));
L_1803fa380_2:;
wr(s->r,4608,16,(rd(s->u,87,16)&rd(s->r,4672,16)));
L_1803fa380_3:;
/* 1803fa384: movaps xmm1, xmm3 */
L_1803fa384_0:;
L_1803fa384_1:;
wr(s->r,4672,4,rd(s->r,4800,4));
L_1803fa384_2:;
wr(s->r,4676,4,rd(s->r,4804,4));
L_1803fa384_3:;
wr(s->r,4680,4,rd(s->r,4808,4));
L_1803fa384_4:;
wr(s->r,4684,4,rd(s->r,4812,4));
L_1803fa384_5:;
/* 1803fa387: por xmm2, xmm0 */
L_1803fa387_0:;
L_1803fa387_1:;
wr(s->r,4736,16,(rd(s->r,4736,16)|rd(s->r,4608,16)));
L_1803fa387_2:;
/* 1803fa38b: movaps xmm0, xmmword ptr [rdx + 0x14] */
L_1803fa38b_0:;
L_1803fa38b_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x14))));
L_1803fa38b_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fa38b_3:;
wr(s->u,71,16,rd(s->u,8,16));
L_1803fa38b_4:;
wr(s->r,4608,4,rd(s->u,71,4));
L_1803fa38b_5:;
wr(s->r,4612,4,rd(s->u,75,4));
L_1803fa38b_6:;
wr(s->r,4616,4,rd(s->u,79,4));
L_1803fa38b_7:;
wr(s->r,4620,4,rd(s->u,83,4));
L_1803fa38b_8:;
/* 1803fa38f: cmpltps xmm1, xmm0 */
L_1803fa38f_0:;
L_1803fa38f_1:;
wr(s->r,4480,4,rd(s->r,4672,4));
L_1803fa38f_2:;
wr(s->r,4484,4,rd(s->r,4676,4));
L_1803fa38f_3:;
wr(s->r,4488,4,rd(s->r,4680,4));
L_1803fa38f_4:;
wr(s->r,4492,4,rd(s->r,4684,4));
L_1803fa38f_5:;
wr(s->r,4496,4,rd(s->r,4608,4));
L_1803fa38f_6:;
wr(s->r,4500,4,rd(s->r,4612,4));
L_1803fa38f_7:;
wr(s->r,4504,4,rd(s->r,4616,4));
L_1803fa38f_8:;
wr(s->r,4508,4,rd(s->r,4620,4));
L_1803fa38f_9:;
wr(s->u,51,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803fa38f_10:;
wr(s->u,52,4,rd(s->u,51,1));
L_1803fa38f_11:;
wr(s->r,4480,4,(rd(s->u,52,4)*((U)UINT64_C(0xffffffff))));
L_1803fa38f_12:;
wr(s->u,56,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803fa38f_13:;
wr(s->u,57,4,rd(s->u,56,1));
L_1803fa38f_14:;
wr(s->r,4484,4,(rd(s->u,57,4)*((U)UINT64_C(0xffffffff))));
L_1803fa38f_15:;
wr(s->u,61,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803fa38f_16:;
wr(s->u,62,4,rd(s->u,61,1));
L_1803fa38f_17:;
wr(s->r,4488,4,(rd(s->u,62,4)*((U)UINT64_C(0xffffffff))));
L_1803fa38f_18:;
wr(s->u,66,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803fa38f_19:;
wr(s->u,67,4,rd(s->u,66,1));
L_1803fa38f_20:;
wr(s->r,4492,4,(rd(s->u,67,4)*((U)UINT64_C(0xffffffff))));
L_1803fa38f_21:;
wr(s->r,4672,4,rd(s->r,4480,4));
L_1803fa38f_22:;
wr(s->r,4676,4,rd(s->r,4484,4));
L_1803fa38f_23:;
wr(s->r,4680,4,rd(s->r,4488,4));
L_1803fa38f_24:;
wr(s->r,4684,4,rd(s->r,4492,4));
L_1803fa38f_25:;
/* 1803fa393: add rdx, 0x20 */
L_1803fa393_0:;
L_1803fa393_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803fa393_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x20)),8,0));
L_1803fa393_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x20))));
L_1803fa393_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa393_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fa393_6:;
wr(s->u,25,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fa393_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fa393_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fa393_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fa393_10:;
/* 1803fa397: maxps xmm0, xmm3 */
L_1803fa397_0:;
L_1803fa397_1:;
wr(s->r,4608,16,(((fv(((rd(s->r,4608,16)>>0)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>0)&UINT32_MAX),4)?((rd(s->r,4608,16)>>0)&UINT32_MAX):((rd(s->r,4800,16)>>0)&UINT32_MAX)))<<0)|(((fv(((rd(s->r,4608,16)>>32)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>32)&UINT32_MAX),4)?((rd(s->r,4608,16)>>32)&UINT32_MAX):((rd(s->r,4800,16)>>32)&UINT32_MAX)))<<32)|(((fv(((rd(s->r,4608,16)>>64)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>64)&UINT32_MAX),4)?((rd(s->r,4608,16)>>64)&UINT32_MAX):((rd(s->r,4800,16)>>64)&UINT32_MAX)))<<64)|(((fv(((rd(s->r,4608,16)>>96)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>96)&UINT32_MAX),4)?((rd(s->r,4608,16)>>96)&UINT32_MAX):((rd(s->r,4800,16)>>96)&UINT32_MAX)))<<96));
L_1803fa397_2:;
/* 1803fa39a: movaps xmm3, xmm1 */
L_1803fa39a_0:;
L_1803fa39a_1:;
wr(s->r,4800,4,rd(s->r,4672,4));
L_1803fa39a_2:;
wr(s->r,4804,4,rd(s->r,4676,4));
L_1803fa39a_3:;
wr(s->r,4808,4,rd(s->r,4680,4));
L_1803fa39a_4:;
wr(s->r,4812,4,rd(s->r,4684,4));
L_1803fa39a_5:;
/* 1803fa39d: movdqa xmm1, xmm3 */
L_1803fa39d_0:;
L_1803fa39d_1:;
wr(s->r,4672,16,rd(s->r,4800,16));
L_1803fa39d_2:;
/* 1803fa3a1: pandn xmm3, xmm2 */
L_1803fa3a1_0:;
L_1803fa3a1_1:;
wr(s->u,87,16,(~rd(s->r,4800,16)));
L_1803fa3a1_2:;
wr(s->r,4800,16,(rd(s->u,87,16)&rd(s->r,4736,16)));
L_1803fa3a1_3:;
/* 1803fa3a5: cmp rdx, rax */
L_1803fa3a5_0:;
L_1803fa3a5_1:;
wr(s->u,35,8,rd(s->r,0,8));
L_1803fa3a5_2:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,35,8)));
L_1803fa3a5_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,35,8),8,1));
L_1803fa3a5_4:;
wr(s->u,43,8,(rd(s->r,16,8)-rd(s->u,35,8)));
L_1803fa3a5_5:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa3a5_6:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1803fa3a5_7:;
wr(s->u,25,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1803fa3a5_8:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fa3a5_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fa3a5_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fa3a5_11:;
/* 1803fa3a8: pand xmm1, xmm4 */
L_1803fa3a8_0:;
L_1803fa3a8_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)&rd(s->r,4864,16)));
L_1803fa3a8_2:;
/* 1803fa3ac: por xmm1, xmm3 */
L_1803fa3ac_0:;
L_1803fa3ac_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)|rd(s->r,4800,16)));
L_1803fa3ac_2:;
/* 1803fa3b0: paddd xmm4, xmm5 */
L_1803fa3b0_0:;
L_1803fa3b0_1:;
wr(s->r,4864,4,(rd(s->r,4864,4)+rd(s->r,4928,4)));
L_1803fa3b0_2:;
wr(s->r,4868,4,(rd(s->r,4868,4)+rd(s->r,4932,4)));
L_1803fa3b0_3:;
wr(s->r,4872,4,(rd(s->r,4872,4)+rd(s->r,4936,4)));
L_1803fa3b0_4:;
wr(s->r,4876,4,(rd(s->r,4876,4)+rd(s->r,4940,4)));
L_1803fa3b0_5:;
/* 1803fa3b4: jl 0x1803fa363 */
L_1803fa3b4_0:;
L_1803fa3b4_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa3b4_2:;
if(rd(s->u,24,1)){goto L_1803fa363_0;}
L_1803fa3b4_3:;
return UINT64_C(0x1803fa3b6);
}
uint64_t b_1803fa38f(CPU*s){
/* 1803fa38f: cmpltps xmm1, xmm0 */
L_1803fa38f_0:;
L_1803fa38f_1:;
wr(s->r,4480,4,rd(s->r,4672,4));
L_1803fa38f_2:;
wr(s->r,4484,4,rd(s->r,4676,4));
L_1803fa38f_3:;
wr(s->r,4488,4,rd(s->r,4680,4));
L_1803fa38f_4:;
wr(s->r,4492,4,rd(s->r,4684,4));
L_1803fa38f_5:;
wr(s->r,4496,4,rd(s->r,4608,4));
L_1803fa38f_6:;
wr(s->r,4500,4,rd(s->r,4612,4));
L_1803fa38f_7:;
wr(s->r,4504,4,rd(s->r,4616,4));
L_1803fa38f_8:;
wr(s->r,4508,4,rd(s->r,4620,4));
L_1803fa38f_9:;
wr(s->u,27,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803fa38f_10:;
wr(s->u,28,4,rd(s->u,27,1));
L_1803fa38f_11:;
wr(s->r,4480,4,(rd(s->u,28,4)*((U)UINT64_C(0xffffffff))));
L_1803fa38f_12:;
wr(s->u,32,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803fa38f_13:;
wr(s->u,33,4,rd(s->u,32,1));
L_1803fa38f_14:;
wr(s->r,4484,4,(rd(s->u,33,4)*((U)UINT64_C(0xffffffff))));
L_1803fa38f_15:;
wr(s->u,37,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803fa38f_16:;
wr(s->u,38,4,rd(s->u,37,1));
L_1803fa38f_17:;
wr(s->r,4488,4,(rd(s->u,38,4)*((U)UINT64_C(0xffffffff))));
L_1803fa38f_18:;
wr(s->u,42,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803fa38f_19:;
wr(s->u,43,4,rd(s->u,42,1));
L_1803fa38f_20:;
wr(s->r,4492,4,(rd(s->u,43,4)*((U)UINT64_C(0xffffffff))));
L_1803fa38f_21:;
wr(s->r,4672,4,rd(s->r,4480,4));
L_1803fa38f_22:;
wr(s->r,4676,4,rd(s->r,4484,4));
L_1803fa38f_23:;
wr(s->r,4680,4,rd(s->r,4488,4));
L_1803fa38f_24:;
wr(s->r,4684,4,rd(s->r,4492,4));
L_1803fa38f_25:;
/* 1803fa393: add rdx, 0x20 */
L_1803fa393_0:;
L_1803fa393_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803fa393_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x20)),8,0));
L_1803fa393_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x20))));
L_1803fa393_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa393_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fa393_6:;
wr(s->u,1,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fa393_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa393_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa393_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa393_10:;
/* 1803fa397: maxps xmm0, xmm3 */
L_1803fa397_0:;
L_1803fa397_1:;
wr(s->r,4608,16,(((fv(((rd(s->r,4608,16)>>0)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>0)&UINT32_MAX),4)?((rd(s->r,4608,16)>>0)&UINT32_MAX):((rd(s->r,4800,16)>>0)&UINT32_MAX)))<<0)|(((fv(((rd(s->r,4608,16)>>32)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>32)&UINT32_MAX),4)?((rd(s->r,4608,16)>>32)&UINT32_MAX):((rd(s->r,4800,16)>>32)&UINT32_MAX)))<<32)|(((fv(((rd(s->r,4608,16)>>64)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>64)&UINT32_MAX),4)?((rd(s->r,4608,16)>>64)&UINT32_MAX):((rd(s->r,4800,16)>>64)&UINT32_MAX)))<<64)|(((fv(((rd(s->r,4608,16)>>96)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>96)&UINT32_MAX),4)?((rd(s->r,4608,16)>>96)&UINT32_MAX):((rd(s->r,4800,16)>>96)&UINT32_MAX)))<<96));
L_1803fa397_2:;
/* 1803fa39a: movaps xmm3, xmm1 */
L_1803fa39a_0:;
L_1803fa39a_1:;
wr(s->r,4800,4,rd(s->r,4672,4));
L_1803fa39a_2:;
wr(s->r,4804,4,rd(s->r,4676,4));
L_1803fa39a_3:;
wr(s->r,4808,4,rd(s->r,4680,4));
L_1803fa39a_4:;
wr(s->r,4812,4,rd(s->r,4684,4));
L_1803fa39a_5:;
/* 1803fa39d: movdqa xmm1, xmm3 */
L_1803fa39d_0:;
L_1803fa39d_1:;
wr(s->r,4672,16,rd(s->r,4800,16));
L_1803fa39d_2:;
/* 1803fa3a1: pandn xmm3, xmm2 */
L_1803fa3a1_0:;
L_1803fa3a1_1:;
wr(s->u,47,16,(~rd(s->r,4800,16)));
L_1803fa3a1_2:;
wr(s->r,4800,16,(rd(s->u,47,16)&rd(s->r,4736,16)));
L_1803fa3a1_3:;
/* 1803fa3a5: cmp rdx, rax */
L_1803fa3a5_0:;
L_1803fa3a5_1:;
wr(s->u,11,8,rd(s->r,0,8));
L_1803fa3a5_2:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,11,8)));
L_1803fa3a5_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,11,8),8,1));
L_1803fa3a5_4:;
wr(s->u,19,8,(rd(s->r,16,8)-rd(s->u,11,8)));
L_1803fa3a5_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa3a5_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fa3a5_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fa3a5_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa3a5_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa3a5_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa3a5_11:;
/* 1803fa3a8: pand xmm1, xmm4 */
L_1803fa3a8_0:;
L_1803fa3a8_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)&rd(s->r,4864,16)));
L_1803fa3a8_2:;
/* 1803fa3ac: por xmm1, xmm3 */
L_1803fa3ac_0:;
L_1803fa3ac_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)|rd(s->r,4800,16)));
L_1803fa3ac_2:;
/* 1803fa3b0: paddd xmm4, xmm5 */
L_1803fa3b0_0:;
L_1803fa3b0_1:;
wr(s->r,4864,4,(rd(s->r,4864,4)+rd(s->r,4928,4)));
L_1803fa3b0_2:;
wr(s->r,4868,4,(rd(s->r,4868,4)+rd(s->r,4932,4)));
L_1803fa3b0_3:;
wr(s->r,4872,4,(rd(s->r,4872,4)+rd(s->r,4936,4)));
L_1803fa3b0_4:;
wr(s->r,4876,4,(rd(s->r,4876,4)+rd(s->r,4940,4)));
L_1803fa3b0_5:;
/* 1803fa3b4: jl 0x1803fa363 */
L_1803fa3b4_0:;
L_1803fa3b4_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa3b4_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa363);}
L_1803fa3b4_3:;
return UINT64_C(0x1803fa3b6);
}
uint64_t b_1803fa3b6(CPU*s){
/* 1803fa3b6: movaps xmm3, xmm0 */
L_1803fa3b6_0:;
L_1803fa3b6_1:;
wr(s->r,4800,4,rd(s->r,4608,4));
L_1803fa3b6_2:;
wr(s->r,4804,4,rd(s->r,4612,4));
L_1803fa3b6_3:;
wr(s->r,4808,4,rd(s->r,4616,4));
L_1803fa3b6_4:;
wr(s->r,4812,4,rd(s->r,4620,4));
L_1803fa3b6_5:;
/* 1803fa3b9: movaps xmm2, xmm0 */
L_1803fa3b9_0:;
L_1803fa3b9_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803fa3b9_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803fa3b9_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803fa3b9_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803fa3b9_5:;
/* 1803fa3bc: movhlps xmm3, xmm0 */
L_1803fa3bc_0:;
L_1803fa3bc_1:;
wr(s->r,4800,8,rd(s->r,4616,8));
L_1803fa3bc_2:;
/* 1803fa3bf: maxps xmm2, xmm3 */
L_1803fa3bf_0:;
L_1803fa3bf_1:;
wr(s->r,4736,16,(((fv(((rd(s->r,4736,16)>>0)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>0)&UINT32_MAX),4)?((rd(s->r,4736,16)>>0)&UINT32_MAX):((rd(s->r,4800,16)>>0)&UINT32_MAX)))<<0)|(((fv(((rd(s->r,4736,16)>>32)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>32)&UINT32_MAX),4)?((rd(s->r,4736,16)>>32)&UINT32_MAX):((rd(s->r,4800,16)>>32)&UINT32_MAX)))<<32)|(((fv(((rd(s->r,4736,16)>>64)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>64)&UINT32_MAX),4)?((rd(s->r,4736,16)>>64)&UINT32_MAX):((rd(s->r,4800,16)>>64)&UINT32_MAX)))<<64)|(((fv(((rd(s->r,4736,16)>>96)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>96)&UINT32_MAX),4)?((rd(s->r,4736,16)>>96)&UINT32_MAX):((rd(s->r,4800,16)>>96)&UINT32_MAX)))<<96));
L_1803fa3bf_2:;
/* 1803fa3c2: movaps xmm4, xmm2 */
L_1803fa3c2_0:;
L_1803fa3c2_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803fa3c2_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803fa3c2_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803fa3c2_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803fa3c2_5:;
/* 1803fa3c5: shufps xmm4, xmm2, 0xf5 */
L_1803fa3c5_0:;
L_1803fa3c5_1:;
wr(s->u,148,4,rd(s->r,4736,4));
L_1803fa3c5_2:;
wr(s->u,152,4,rd(s->r,4740,4));
L_1803fa3c5_3:;
wr(s->u,156,4,rd(s->r,4744,4));
L_1803fa3c5_4:;
wr(s->u,160,4,rd(s->r,4748,4));
L_1803fa3c5_5:;
wr(s->u,164,4,rd(s->r,4864,4));
L_1803fa3c5_6:;
wr(s->u,168,4,rd(s->r,4868,4));
L_1803fa3c5_7:;
wr(s->u,172,4,rd(s->r,4872,4));
L_1803fa3c5_8:;
wr(s->u,176,4,rd(s->r,4876,4));
L_1803fa3c5_9:;
wr(s->u,100,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x0))));
L_1803fa3c5_10:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803fa3c5_11:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,164,4)));
L_1803fa3c5_12:;
wr(s->u,109,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x1))));
L_1803fa3c5_13:;
wr(s->u,110,4,rd(s->u,109,1));
L_1803fa3c5_14:;
wr(s->u,114,4,(rd(s->u,110,4)*rd(s->u,168,4)));
L_1803fa3c5_15:;
wr(s->u,118,4,(rd(s->u,105,4)+rd(s->u,114,4)));
L_1803fa3c5_16:;
wr(s->u,122,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x2))));
L_1803fa3c5_17:;
wr(s->u,123,4,rd(s->u,122,1));
L_1803fa3c5_18:;
wr(s->u,127,4,(rd(s->u,123,4)*rd(s->u,172,4)));
L_1803fa3c5_19:;
wr(s->u,131,4,(rd(s->u,118,4)+rd(s->u,127,4)));
L_1803fa3c5_20:;
wr(s->u,135,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x3))));
L_1803fa3c5_21:;
wr(s->u,136,4,rd(s->u,135,1));
L_1803fa3c5_22:;
wr(s->u,140,4,(rd(s->u,136,4)*rd(s->u,176,4)));
L_1803fa3c5_23:;
wr(s->r,4864,4,(rd(s->u,131,4)+rd(s->u,140,4)));
L_1803fa3c5_24:;
wr(s->u,100,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x0))));
L_1803fa3c5_25:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803fa3c5_26:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,164,4)));
L_1803fa3c5_27:;
wr(s->u,109,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x1))));
L_1803fa3c5_28:;
wr(s->u,110,4,rd(s->u,109,1));
L_1803fa3c5_29:;
wr(s->u,114,4,(rd(s->u,110,4)*rd(s->u,168,4)));
L_1803fa3c5_30:;
wr(s->u,118,4,(rd(s->u,105,4)+rd(s->u,114,4)));
L_1803fa3c5_31:;
wr(s->u,122,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x2))));
L_1803fa3c5_32:;
wr(s->u,123,4,rd(s->u,122,1));
L_1803fa3c5_33:;
wr(s->u,127,4,(rd(s->u,123,4)*rd(s->u,172,4)));
L_1803fa3c5_34:;
wr(s->u,131,4,(rd(s->u,118,4)+rd(s->u,127,4)));
L_1803fa3c5_35:;
wr(s->u,135,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x3))));
L_1803fa3c5_36:;
wr(s->u,136,4,rd(s->u,135,1));
L_1803fa3c5_37:;
wr(s->u,140,4,(rd(s->u,136,4)*rd(s->u,176,4)));
L_1803fa3c5_38:;
wr(s->r,4868,4,(rd(s->u,131,4)+rd(s->u,140,4)));
L_1803fa3c5_39:;
wr(s->u,100,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x0))));
L_1803fa3c5_40:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803fa3c5_41:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,148,4)));
L_1803fa3c5_42:;
wr(s->u,109,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x1))));
L_1803fa3c5_43:;
wr(s->u,110,4,rd(s->u,109,1));
L_1803fa3c5_44:;
wr(s->u,114,4,(rd(s->u,110,4)*rd(s->u,152,4)));
L_1803fa3c5_45:;
wr(s->u,118,4,(rd(s->u,105,4)+rd(s->u,114,4)));
L_1803fa3c5_46:;
wr(s->u,122,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x2))));
L_1803fa3c5_47:;
wr(s->u,123,4,rd(s->u,122,1));
L_1803fa3c5_48:;
wr(s->u,127,4,(rd(s->u,123,4)*rd(s->u,156,4)));
L_1803fa3c5_49:;
wr(s->u,131,4,(rd(s->u,118,4)+rd(s->u,127,4)));
L_1803fa3c5_50:;
wr(s->u,135,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x3))));
L_1803fa3c5_51:;
wr(s->u,136,4,rd(s->u,135,1));
L_1803fa3c5_52:;
wr(s->u,140,4,(rd(s->u,136,4)*rd(s->u,160,4)));
L_1803fa3c5_53:;
wr(s->r,4872,4,(rd(s->u,131,4)+rd(s->u,140,4)));
L_1803fa3c5_54:;
wr(s->u,100,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x0))));
L_1803fa3c5_55:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803fa3c5_56:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,148,4)));
L_1803fa3c5_57:;
wr(s->u,109,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x1))));
L_1803fa3c5_58:;
wr(s->u,110,4,rd(s->u,109,1));
L_1803fa3c5_59:;
wr(s->u,114,4,(rd(s->u,110,4)*rd(s->u,152,4)));
L_1803fa3c5_60:;
wr(s->u,118,4,(rd(s->u,105,4)+rd(s->u,114,4)));
L_1803fa3c5_61:;
wr(s->u,122,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x2))));
L_1803fa3c5_62:;
wr(s->u,123,4,rd(s->u,122,1));
L_1803fa3c5_63:;
wr(s->u,127,4,(rd(s->u,123,4)*rd(s->u,156,4)));
L_1803fa3c5_64:;
wr(s->u,131,4,(rd(s->u,118,4)+rd(s->u,127,4)));
L_1803fa3c5_65:;
wr(s->u,135,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x3))));
L_1803fa3c5_66:;
wr(s->u,136,4,rd(s->u,135,1));
L_1803fa3c5_67:;
wr(s->u,140,4,(rd(s->u,136,4)*rd(s->u,160,4)));
L_1803fa3c5_68:;
wr(s->r,4876,4,(rd(s->u,131,4)+rd(s->u,140,4)));
L_1803fa3c5_69:;
/* 1803fa3c9: maxss xmm2, xmm4 */
L_1803fa3c9_0:;
L_1803fa3c9_1:;
wr(s->u,63,1,(fv(rd(s->r,4864,4),4)<fv(rd(s->r,4736,4),4)));
L_1803fa3c9_2:;
if(rd(s->u,63,1)){goto L_1803fa3cd_0;}
L_1803fa3c9_3:;
wr(s->r,4736,4,rd(s->r,4864,4));
L_1803fa3c9_4:;
/* 1803fa3cd: movaps xmm5, xmm2 */
L_1803fa3cd_0:;
L_1803fa3cd_1:;
wr(s->r,4928,4,rd(s->r,4736,4));
L_1803fa3cd_2:;
wr(s->r,4932,4,rd(s->r,4740,4));
L_1803fa3cd_3:;
wr(s->r,4936,4,rd(s->r,4744,4));
L_1803fa3cd_4:;
wr(s->r,4940,4,rd(s->r,4748,4));
L_1803fa3cd_5:;
/* 1803fa3d0: unpcklps xmm5, xmm5 */
L_1803fa3d0_0:;
L_1803fa3d0_1:;
wr(s->r,4936,4,rd(s->r,4932,4));
L_1803fa3d0_2:;
wr(s->r,4940,4,rd(s->r,4932,4));
L_1803fa3d0_3:;
wr(s->r,4932,4,rd(s->r,4928,4));
L_1803fa3d0_4:;
/* 1803fa3d3: unpcklps xmm5, xmm5 */
L_1803fa3d3_0:;
L_1803fa3d3_1:;
wr(s->r,4936,4,rd(s->r,4932,4));
L_1803fa3d3_2:;
wr(s->r,4940,4,rd(s->r,4932,4));
L_1803fa3d3_3:;
wr(s->r,4932,4,rd(s->r,4928,4));
L_1803fa3d3_4:;
/* 1803fa3d6: cmpeqps xmm0, xmm5 */
L_1803fa3d6_0:;
L_1803fa3d6_1:;
wr(s->r,4480,4,rd(s->r,4608,4));
L_1803fa3d6_2:;
wr(s->r,4484,4,rd(s->r,4612,4));
L_1803fa3d6_3:;
wr(s->r,4488,4,rd(s->r,4616,4));
L_1803fa3d6_4:;
wr(s->r,4492,4,rd(s->r,4620,4));
L_1803fa3d6_5:;
wr(s->r,4496,4,rd(s->r,4928,4));
L_1803fa3d6_6:;
wr(s->r,4500,4,rd(s->r,4932,4));
L_1803fa3d6_7:;
wr(s->r,4504,4,rd(s->r,4936,4));
L_1803fa3d6_8:;
wr(s->r,4508,4,rd(s->r,4940,4));
L_1803fa3d6_9:;
wr(s->u,43,1,(fv(rd(s->r,4480,4),4)==fv(rd(s->r,4496,4),4)));
L_1803fa3d6_10:;
wr(s->u,44,4,rd(s->u,43,1));
L_1803fa3d6_11:;
wr(s->r,4480,4,(rd(s->u,44,4)*((U)UINT64_C(0xffffffff))));
L_1803fa3d6_12:;
wr(s->u,48,1,(fv(rd(s->r,4484,4),4)==fv(rd(s->r,4500,4),4)));
L_1803fa3d6_13:;
wr(s->u,49,4,rd(s->u,48,1));
L_1803fa3d6_14:;
wr(s->r,4484,4,(rd(s->u,49,4)*((U)UINT64_C(0xffffffff))));
L_1803fa3d6_15:;
wr(s->u,53,1,(fv(rd(s->r,4488,4),4)==fv(rd(s->r,4504,4),4)));
L_1803fa3d6_16:;
wr(s->u,54,4,rd(s->u,53,1));
L_1803fa3d6_17:;
wr(s->r,4488,4,(rd(s->u,54,4)*((U)UINT64_C(0xffffffff))));
L_1803fa3d6_18:;
wr(s->u,58,1,(fv(rd(s->r,4492,4),4)==fv(rd(s->r,4508,4),4)));
L_1803fa3d6_19:;
wr(s->u,59,4,rd(s->u,58,1));
L_1803fa3d6_20:;
wr(s->r,4492,4,(rd(s->u,59,4)*((U)UINT64_C(0xffffffff))));
L_1803fa3d6_21:;
wr(s->r,4608,4,rd(s->r,4480,4));
L_1803fa3d6_22:;
wr(s->r,4612,4,rd(s->r,4484,4));
L_1803fa3d6_23:;
wr(s->r,4616,4,rd(s->r,4488,4));
L_1803fa3d6_24:;
wr(s->r,4620,4,rd(s->r,4492,4));
L_1803fa3d6_25:;
/* 1803fa3da: pand xmm1, xmm0 */
L_1803fa3da_0:;
L_1803fa3da_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)&rd(s->r,4608,16)));
L_1803fa3da_2:;
/* 1803fa3de: pandn xmm0, xmmword ptr [rip + 0x41400a] */
L_1803fa3de_0:;
L_1803fa3de_1:;
wr(s->u,64,16,(~rd(s->r,4608,16)));
L_1803fa3de_2:;
wr(s->r,4608,16,(rd(s->u,64,16)&mr(UINT64_C(0x18080e3f0),16)));
L_1803fa3de_3:;
/* 1803fa3e6: por xmm1, xmm0 */
L_1803fa3e6_0:;
L_1803fa3e6_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)|rd(s->r,4608,16)));
L_1803fa3e6_2:;
/* 1803fa3ea: movdqa xmm0, xmm1 */
L_1803fa3ea_0:;
L_1803fa3ea_1:;
wr(s->r,4608,16,rd(s->r,4672,16));
L_1803fa3ea_2:;
/* 1803fa3ee: movdqa xmm3, xmm1 */
L_1803fa3ee_0:;
L_1803fa3ee_1:;
wr(s->r,4800,16,rd(s->r,4672,16));
L_1803fa3ee_2:;
/* 1803fa3f2: psrldq xmm0, 8 */
L_1803fa3f2_0:;
L_1803fa3f2_1:;
wr(s->u,144,4,(((U)UINT64_C(0x8))*((U)UINT64_C(0x8))));
L_1803fa3f2_2:;
wr(s->r,4608,16,((rd(s->u,144,4)>=128)?0:(rd(s->r,4608,16)>>rd(s->u,144,4))));
L_1803fa3f2_3:;
/* 1803fa3f7: pcmpgtd xmm3, xmm0 */
L_1803fa3f7_0:;
L_1803fa3f7_1:;
wr(s->u,80,1,(sx(rd(s->r,4608,4),4)<sx(rd(s->r,4800,4),4)));
L_1803fa3f7_2:;
wr(s->u,81,4,rd(s->u,80,1));
L_1803fa3f7_3:;
wr(s->r,4800,4,(rd(s->u,81,4)*((U)UINT64_C(0xffffffff))));
L_1803fa3f7_4:;
wr(s->u,85,1,(sx(rd(s->r,4612,4),4)<sx(rd(s->r,4804,4),4)));
L_1803fa3f7_5:;
wr(s->u,86,4,rd(s->u,85,1));
L_1803fa3f7_6:;
wr(s->r,4804,4,(rd(s->u,86,4)*((U)UINT64_C(0xffffffff))));
L_1803fa3f7_7:;
wr(s->u,90,1,(sx(rd(s->r,4616,4),4)<sx(rd(s->r,4808,4),4)));
L_1803fa3f7_8:;
wr(s->u,91,4,rd(s->u,90,1));
L_1803fa3f7_9:;
wr(s->r,4808,4,(rd(s->u,91,4)*((U)UINT64_C(0xffffffff))));
L_1803fa3f7_10:;
wr(s->u,95,1,(sx(rd(s->r,4620,4),4)<sx(rd(s->r,4812,4),4)));
L_1803fa3f7_11:;
wr(s->u,96,4,rd(s->u,95,1));
L_1803fa3f7_12:;
wr(s->r,4812,4,(rd(s->u,96,4)*((U)UINT64_C(0xffffffff))));
L_1803fa3f7_13:;
/* 1803fa3fb: pxor xmm0, xmm1 */
L_1803fa3fb_0:;
L_1803fa3fb_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4672,16)));
L_1803fa3fb_2:;
/* 1803fa3ff: pand xmm3, xmm0 */
L_1803fa3ff_0:;
L_1803fa3ff_1:;
wr(s->r,4800,16,(rd(s->r,4800,16)&rd(s->r,4608,16)));
L_1803fa3ff_2:;
/* 1803fa403: pxor xmm3, xmm1 */
L_1803fa403_0:;
L_1803fa403_1:;
wr(s->r,4800,16,(rd(s->r,4800,16)^rd(s->r,4672,16)));
L_1803fa403_2:;
/* 1803fa407: movdqa xmm1, xmm3 */
L_1803fa407_0:;
L_1803fa407_1:;
wr(s->r,4672,16,rd(s->r,4800,16));
L_1803fa407_2:;
/* 1803fa40b: movdqa xmm0, xmm3 */
L_1803fa40b_0:;
L_1803fa40b_1:;
wr(s->r,4608,16,rd(s->r,4800,16));
L_1803fa40b_2:;
/* 1803fa40f: psrldq xmm1, 4 */
L_1803fa40f_0:;
L_1803fa40f_1:;
wr(s->u,144,4,(((U)UINT64_C(0x4))*((U)UINT64_C(0x8))));
L_1803fa40f_2:;
wr(s->r,4672,16,((rd(s->u,144,4)>=128)?0:(rd(s->r,4672,16)>>rd(s->u,144,4))));
L_1803fa40f_3:;
/* 1803fa414: pcmpgtd xmm0, xmm1 */
L_1803fa414_0:;
L_1803fa414_1:;
wr(s->u,80,1,(sx(rd(s->r,4672,4),4)<sx(rd(s->r,4608,4),4)));
L_1803fa414_2:;
wr(s->u,81,4,rd(s->u,80,1));
L_1803fa414_3:;
wr(s->r,4608,4,(rd(s->u,81,4)*((U)UINT64_C(0xffffffff))));
L_1803fa414_4:;
wr(s->u,85,1,(sx(rd(s->r,4676,4),4)<sx(rd(s->r,4612,4),4)));
L_1803fa414_5:;
wr(s->u,86,4,rd(s->u,85,1));
L_1803fa414_6:;
wr(s->r,4612,4,(rd(s->u,86,4)*((U)UINT64_C(0xffffffff))));
L_1803fa414_7:;
wr(s->u,90,1,(sx(rd(s->r,4680,4),4)<sx(rd(s->r,4616,4),4)));
L_1803fa414_8:;
wr(s->u,91,4,rd(s->u,90,1));
L_1803fa414_9:;
wr(s->r,4616,4,(rd(s->u,91,4)*((U)UINT64_C(0xffffffff))));
L_1803fa414_10:;
wr(s->u,95,1,(sx(rd(s->r,4684,4),4)<sx(rd(s->r,4620,4),4)));
L_1803fa414_11:;
wr(s->u,96,4,rd(s->u,95,1));
L_1803fa414_12:;
wr(s->r,4620,4,(rd(s->u,96,4)*((U)UINT64_C(0xffffffff))));
L_1803fa414_13:;
/* 1803fa418: pxor xmm1, xmm3 */
L_1803fa418_0:;
L_1803fa418_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4800,16)));
L_1803fa418_2:;
/* 1803fa41c: pand xmm0, xmm1 */
L_1803fa41c_0:;
L_1803fa41c_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)&rd(s->r,4672,16)));
L_1803fa41c_2:;
/* 1803fa420: pxor xmm0, xmm3 */
L_1803fa420_0:;
L_1803fa420_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4800,16)));
L_1803fa420_2:;
/* 1803fa424: movd r11d, xmm0 */
L_1803fa424_0:;
L_1803fa424_1:;
wr(s->r,152,4,(rd(s->r,4608,16) >> (((U)UINT64_C(0x0))*8)));
L_1803fa424_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fa424_3:;
/* 1803fa429: lea rax, [rcx + rsi*4] */
L_1803fa429_0:;
L_1803fa429_1:;
wr(s->u,0,8,(rd(s->r,48,8)*((U)UINT64_C(0x4))));
L_1803fa429_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa429_3:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803fa429_4:;
/* 1803fa42d: cmp rsi, r10 */
L_1803fa42d_0:;
L_1803fa42d_1:;
wr(s->u,27,8,rd(s->r,144,8));
L_1803fa42d_2:;
wr(s->r,512,1,(rd(s->r,48,8)<rd(s->u,27,8)));
L_1803fa42d_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),rd(s->u,27,8),8,1));
L_1803fa42d_4:;
wr(s->u,35,8,(rd(s->r,48,8)-rd(s->u,27,8)));
L_1803fa42d_5:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa42d_6:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1803fa42d_7:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1803fa42d_8:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803fa42d_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fa42d_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fa42d_11:;
/* 1803fa430: jge 0x1803fa453 */
L_1803fa430_0:;
L_1803fa430_1:;
wr(s->u,16,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fa430_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803fa453);}
L_1803fa430_3:;
return UINT64_C(0x1803fa432);
}
uint64_t b_1803fa3cd(CPU*s){
/* 1803fa3cd: movaps xmm5, xmm2 */
L_1803fa3cd_0:;
L_1803fa3cd_1:;
wr(s->r,4928,4,rd(s->r,4736,4));
L_1803fa3cd_2:;
wr(s->r,4932,4,rd(s->r,4740,4));
L_1803fa3cd_3:;
wr(s->r,4936,4,rd(s->r,4744,4));
L_1803fa3cd_4:;
wr(s->r,4940,4,rd(s->r,4748,4));
L_1803fa3cd_5:;
/* 1803fa3d0: unpcklps xmm5, xmm5 */
L_1803fa3d0_0:;
L_1803fa3d0_1:;
wr(s->r,4936,4,rd(s->r,4932,4));
L_1803fa3d0_2:;
wr(s->r,4940,4,rd(s->r,4932,4));
L_1803fa3d0_3:;
wr(s->r,4932,4,rd(s->r,4928,4));
L_1803fa3d0_4:;
/* 1803fa3d3: unpcklps xmm5, xmm5 */
L_1803fa3d3_0:;
L_1803fa3d3_1:;
wr(s->r,4936,4,rd(s->r,4932,4));
L_1803fa3d3_2:;
wr(s->r,4940,4,rd(s->r,4932,4));
L_1803fa3d3_3:;
wr(s->r,4932,4,rd(s->r,4928,4));
L_1803fa3d3_4:;
/* 1803fa3d6: cmpeqps xmm0, xmm5 */
L_1803fa3d6_0:;
L_1803fa3d6_1:;
wr(s->r,4480,4,rd(s->r,4608,4));
L_1803fa3d6_2:;
wr(s->r,4484,4,rd(s->r,4612,4));
L_1803fa3d6_3:;
wr(s->r,4488,4,rd(s->r,4616,4));
L_1803fa3d6_4:;
wr(s->r,4492,4,rd(s->r,4620,4));
L_1803fa3d6_5:;
wr(s->r,4496,4,rd(s->r,4928,4));
L_1803fa3d6_6:;
wr(s->r,4500,4,rd(s->r,4932,4));
L_1803fa3d6_7:;
wr(s->r,4504,4,rd(s->r,4936,4));
L_1803fa3d6_8:;
wr(s->r,4508,4,rd(s->r,4940,4));
L_1803fa3d6_9:;
wr(s->u,43,1,(fv(rd(s->r,4480,4),4)==fv(rd(s->r,4496,4),4)));
L_1803fa3d6_10:;
wr(s->u,44,4,rd(s->u,43,1));
L_1803fa3d6_11:;
wr(s->r,4480,4,(rd(s->u,44,4)*((U)UINT64_C(0xffffffff))));
L_1803fa3d6_12:;
wr(s->u,48,1,(fv(rd(s->r,4484,4),4)==fv(rd(s->r,4500,4),4)));
L_1803fa3d6_13:;
wr(s->u,49,4,rd(s->u,48,1));
L_1803fa3d6_14:;
wr(s->r,4484,4,(rd(s->u,49,4)*((U)UINT64_C(0xffffffff))));
L_1803fa3d6_15:;
wr(s->u,53,1,(fv(rd(s->r,4488,4),4)==fv(rd(s->r,4504,4),4)));
L_1803fa3d6_16:;
wr(s->u,54,4,rd(s->u,53,1));
L_1803fa3d6_17:;
wr(s->r,4488,4,(rd(s->u,54,4)*((U)UINT64_C(0xffffffff))));
L_1803fa3d6_18:;
wr(s->u,58,1,(fv(rd(s->r,4492,4),4)==fv(rd(s->r,4508,4),4)));
L_1803fa3d6_19:;
wr(s->u,59,4,rd(s->u,58,1));
L_1803fa3d6_20:;
wr(s->r,4492,4,(rd(s->u,59,4)*((U)UINT64_C(0xffffffff))));
L_1803fa3d6_21:;
wr(s->r,4608,4,rd(s->r,4480,4));
L_1803fa3d6_22:;
wr(s->r,4612,4,rd(s->r,4484,4));
L_1803fa3d6_23:;
wr(s->r,4616,4,rd(s->r,4488,4));
L_1803fa3d6_24:;
wr(s->r,4620,4,rd(s->r,4492,4));
L_1803fa3d6_25:;
/* 1803fa3da: pand xmm1, xmm0 */
L_1803fa3da_0:;
L_1803fa3da_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)&rd(s->r,4608,16)));
L_1803fa3da_2:;
/* 1803fa3de: pandn xmm0, xmmword ptr [rip + 0x41400a] */
L_1803fa3de_0:;
L_1803fa3de_1:;
wr(s->u,63,16,(~rd(s->r,4608,16)));
L_1803fa3de_2:;
wr(s->r,4608,16,(rd(s->u,63,16)&mr(UINT64_C(0x18080e3f0),16)));
L_1803fa3de_3:;
/* 1803fa3e6: por xmm1, xmm0 */
L_1803fa3e6_0:;
L_1803fa3e6_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)|rd(s->r,4608,16)));
L_1803fa3e6_2:;
/* 1803fa3ea: movdqa xmm0, xmm1 */
L_1803fa3ea_0:;
L_1803fa3ea_1:;
wr(s->r,4608,16,rd(s->r,4672,16));
L_1803fa3ea_2:;
/* 1803fa3ee: movdqa xmm3, xmm1 */
L_1803fa3ee_0:;
L_1803fa3ee_1:;
wr(s->r,4800,16,rd(s->r,4672,16));
L_1803fa3ee_2:;
/* 1803fa3f2: psrldq xmm0, 8 */
L_1803fa3f2_0:;
L_1803fa3f2_1:;
wr(s->u,99,4,(((U)UINT64_C(0x8))*((U)UINT64_C(0x8))));
L_1803fa3f2_2:;
wr(s->r,4608,16,((rd(s->u,99,4)>=128)?0:(rd(s->r,4608,16)>>rd(s->u,99,4))));
L_1803fa3f2_3:;
/* 1803fa3f7: pcmpgtd xmm3, xmm0 */
L_1803fa3f7_0:;
L_1803fa3f7_1:;
wr(s->u,79,1,(sx(rd(s->r,4608,4),4)<sx(rd(s->r,4800,4),4)));
L_1803fa3f7_2:;
wr(s->u,80,4,rd(s->u,79,1));
L_1803fa3f7_3:;
wr(s->r,4800,4,(rd(s->u,80,4)*((U)UINT64_C(0xffffffff))));
L_1803fa3f7_4:;
wr(s->u,84,1,(sx(rd(s->r,4612,4),4)<sx(rd(s->r,4804,4),4)));
L_1803fa3f7_5:;
wr(s->u,85,4,rd(s->u,84,1));
L_1803fa3f7_6:;
wr(s->r,4804,4,(rd(s->u,85,4)*((U)UINT64_C(0xffffffff))));
L_1803fa3f7_7:;
wr(s->u,89,1,(sx(rd(s->r,4616,4),4)<sx(rd(s->r,4808,4),4)));
L_1803fa3f7_8:;
wr(s->u,90,4,rd(s->u,89,1));
L_1803fa3f7_9:;
wr(s->r,4808,4,(rd(s->u,90,4)*((U)UINT64_C(0xffffffff))));
L_1803fa3f7_10:;
wr(s->u,94,1,(sx(rd(s->r,4620,4),4)<sx(rd(s->r,4812,4),4)));
L_1803fa3f7_11:;
wr(s->u,95,4,rd(s->u,94,1));
L_1803fa3f7_12:;
wr(s->r,4812,4,(rd(s->u,95,4)*((U)UINT64_C(0xffffffff))));
L_1803fa3f7_13:;
/* 1803fa3fb: pxor xmm0, xmm1 */
L_1803fa3fb_0:;
L_1803fa3fb_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4672,16)));
L_1803fa3fb_2:;
/* 1803fa3ff: pand xmm3, xmm0 */
L_1803fa3ff_0:;
L_1803fa3ff_1:;
wr(s->r,4800,16,(rd(s->r,4800,16)&rd(s->r,4608,16)));
L_1803fa3ff_2:;
/* 1803fa403: pxor xmm3, xmm1 */
L_1803fa403_0:;
L_1803fa403_1:;
wr(s->r,4800,16,(rd(s->r,4800,16)^rd(s->r,4672,16)));
L_1803fa403_2:;
/* 1803fa407: movdqa xmm1, xmm3 */
L_1803fa407_0:;
L_1803fa407_1:;
wr(s->r,4672,16,rd(s->r,4800,16));
L_1803fa407_2:;
/* 1803fa40b: movdqa xmm0, xmm3 */
L_1803fa40b_0:;
L_1803fa40b_1:;
wr(s->r,4608,16,rd(s->r,4800,16));
L_1803fa40b_2:;
/* 1803fa40f: psrldq xmm1, 4 */
L_1803fa40f_0:;
L_1803fa40f_1:;
wr(s->u,99,4,(((U)UINT64_C(0x4))*((U)UINT64_C(0x8))));
L_1803fa40f_2:;
wr(s->r,4672,16,((rd(s->u,99,4)>=128)?0:(rd(s->r,4672,16)>>rd(s->u,99,4))));
L_1803fa40f_3:;
/* 1803fa414: pcmpgtd xmm0, xmm1 */
L_1803fa414_0:;
L_1803fa414_1:;
wr(s->u,79,1,(sx(rd(s->r,4672,4),4)<sx(rd(s->r,4608,4),4)));
L_1803fa414_2:;
wr(s->u,80,4,rd(s->u,79,1));
L_1803fa414_3:;
wr(s->r,4608,4,(rd(s->u,80,4)*((U)UINT64_C(0xffffffff))));
L_1803fa414_4:;
wr(s->u,84,1,(sx(rd(s->r,4676,4),4)<sx(rd(s->r,4612,4),4)));
L_1803fa414_5:;
wr(s->u,85,4,rd(s->u,84,1));
L_1803fa414_6:;
wr(s->r,4612,4,(rd(s->u,85,4)*((U)UINT64_C(0xffffffff))));
L_1803fa414_7:;
wr(s->u,89,1,(sx(rd(s->r,4680,4),4)<sx(rd(s->r,4616,4),4)));
L_1803fa414_8:;
wr(s->u,90,4,rd(s->u,89,1));
L_1803fa414_9:;
wr(s->r,4616,4,(rd(s->u,90,4)*((U)UINT64_C(0xffffffff))));
L_1803fa414_10:;
wr(s->u,94,1,(sx(rd(s->r,4684,4),4)<sx(rd(s->r,4620,4),4)));
L_1803fa414_11:;
wr(s->u,95,4,rd(s->u,94,1));
L_1803fa414_12:;
wr(s->r,4620,4,(rd(s->u,95,4)*((U)UINT64_C(0xffffffff))));
L_1803fa414_13:;
/* 1803fa418: pxor xmm1, xmm3 */
L_1803fa418_0:;
L_1803fa418_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4800,16)));
L_1803fa418_2:;
/* 1803fa41c: pand xmm0, xmm1 */
L_1803fa41c_0:;
L_1803fa41c_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)&rd(s->r,4672,16)));
L_1803fa41c_2:;
/* 1803fa420: pxor xmm0, xmm3 */
L_1803fa420_0:;
L_1803fa420_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4800,16)));
L_1803fa420_2:;
/* 1803fa424: movd r11d, xmm0 */
L_1803fa424_0:;
L_1803fa424_1:;
wr(s->r,152,4,(rd(s->r,4608,16) >> (((U)UINT64_C(0x0))*8)));
L_1803fa424_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fa424_3:;
/* 1803fa429: lea rax, [rcx + rsi*4] */
L_1803fa429_0:;
L_1803fa429_1:;
wr(s->u,0,8,(rd(s->r,48,8)*((U)UINT64_C(0x4))));
L_1803fa429_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa429_3:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803fa429_4:;
/* 1803fa42d: cmp rsi, r10 */
L_1803fa42d_0:;
L_1803fa42d_1:;
wr(s->u,27,8,rd(s->r,144,8));
L_1803fa42d_2:;
wr(s->r,512,1,(rd(s->r,48,8)<rd(s->u,27,8)));
L_1803fa42d_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),rd(s->u,27,8),8,1));
L_1803fa42d_4:;
wr(s->u,35,8,(rd(s->r,48,8)-rd(s->u,27,8)));
L_1803fa42d_5:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa42d_6:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1803fa42d_7:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1803fa42d_8:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803fa42d_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fa42d_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fa42d_11:;
/* 1803fa430: jge 0x1803fa453 */
L_1803fa430_0:;
L_1803fa430_1:;
wr(s->u,16,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fa430_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803fa453);}
L_1803fa430_3:;
return UINT64_C(0x1803fa432);
}
uint64_t b_1803fa429(CPU*s){
/* 1803fa429: lea rax, [rcx + rsi*4] */
L_1803fa429_0:;
L_1803fa429_1:;
wr(s->u,0,8,(rd(s->r,48,8)*((U)UINT64_C(0x4))));
L_1803fa429_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa429_3:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803fa429_4:;
/* 1803fa42d: cmp rsi, r10 */
L_1803fa42d_0:;
L_1803fa42d_1:;
wr(s->u,27,8,rd(s->r,144,8));
L_1803fa42d_2:;
wr(s->r,512,1,(rd(s->r,48,8)<rd(s->u,27,8)));
L_1803fa42d_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),rd(s->u,27,8),8,1));
L_1803fa42d_4:;
wr(s->u,35,8,(rd(s->r,48,8)-rd(s->u,27,8)));
L_1803fa42d_5:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa42d_6:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1803fa42d_7:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1803fa42d_8:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803fa42d_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fa42d_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fa42d_11:;
/* 1803fa430: jge 0x1803fa453 */
L_1803fa430_0:;
L_1803fa430_1:;
wr(s->u,16,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fa430_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803fa453);}
L_1803fa430_3:;
return UINT64_C(0x1803fa432);
}
uint64_t b_1803fa432(CPU*s){
/* 1803fa432: movss xmm0, dword ptr [rax + 4] */
L_1803fa432_0:;
L_1803fa432_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x4))));
L_1803fa432_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fa432_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803fa432_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fa432_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fa432_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fa432_7:;
/* 1803fa437: comiss xmm0, xmm2 */
L_1803fa437_0:;
L_1803fa437_1:;
wr(s->u,13,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803fa437_2:;
wr(s->u,14,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803fa437_3:;
wr(s->r,514,1,((rd(s->u,13,1)!=0)||(rd(s->u,14,1)!=0)));
L_1803fa437_4:;
wr(s->u,15,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4736,4),4)));
L_1803fa437_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,15,1)));
L_1803fa437_6:;
wr(s->u,16,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4736,4),4)));
L_1803fa437_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,16,1)));
L_1803fa437_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa437_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fa437_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fa437_11:;
/* 1803fa43a: jbe 0x1803fa446 */
L_1803fa43a_0:;
L_1803fa43a_1:;
wr(s->u,12,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fa43a_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803fa446);}
L_1803fa43a_3:;
return UINT64_C(0x1803fa43c);
}
uint64_t b_1803fa43c(CPU*s){
/* 1803fa43c: movaps xmm2, xmm0 */
L_1803fa43c_0:;
L_1803fa43c_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803fa43c_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803fa43c_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803fa43c_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803fa43c_5:;
/* 1803fa43f: mov r11d, esi */
L_1803fa43f_0:;
L_1803fa43f_1:;
wr(s->r,152,4,rd(s->r,48,4));
L_1803fa43f_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fa43f_3:;
/* 1803fa442: add r11d, 1 */
L_1803fa442_0:;
L_1803fa442_1:;
wr(s->r,512,1,(((rd(s->r,152,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,152,4)));
L_1803fa442_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803fa442_3:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803fa442_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fa442_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa442_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fa442_7:;
wr(s->u,1,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fa442_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803fa442_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa442_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa442_11:;
/* 1803fa446: add rax, 4 */
L_1803fa446_0:;
L_1803fa446_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fa446_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x4)),8,0));
L_1803fa446_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x4))));
L_1803fa446_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa446_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fa446_6:;
wr(s->u,1,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fa446_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa446_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa446_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa446_10:;
/* 1803fa44a: add rsi, 1 */
L_1803fa44a_0:;
L_1803fa44a_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803fa44a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x1)),8,0));
L_1803fa44a_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x1))));
L_1803fa44a_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa44a_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803fa44a_6:;
wr(s->u,1,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803fa44a_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa44a_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa44a_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa44a_10:;
/* 1803fa44e: cmp rsi, r10 */
L_1803fa44e_0:;
L_1803fa44e_1:;
wr(s->u,11,8,rd(s->r,144,8));
L_1803fa44e_2:;
wr(s->r,512,1,(rd(s->r,48,8)<rd(s->u,11,8)));
L_1803fa44e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),rd(s->u,11,8),8,1));
L_1803fa44e_4:;
wr(s->u,19,8,(rd(s->r,48,8)-rd(s->u,11,8)));
L_1803fa44e_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa44e_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fa44e_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fa44e_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa44e_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa44e_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa44e_11:;
/* 1803fa451: jl 0x1803fa432 */
L_1803fa451_0:;
L_1803fa451_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa451_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa432);}
L_1803fa451_3:;
return UINT64_C(0x1803fa453);
}
uint64_t b_1803fa446(CPU*s){
/* 1803fa446: add rax, 4 */
L_1803fa446_0:;
L_1803fa446_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fa446_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x4)),8,0));
L_1803fa446_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x4))));
L_1803fa446_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa446_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fa446_6:;
wr(s->u,1,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fa446_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa446_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa446_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa446_10:;
/* 1803fa44a: add rsi, 1 */
L_1803fa44a_0:;
L_1803fa44a_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803fa44a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x1)),8,0));
L_1803fa44a_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x1))));
L_1803fa44a_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa44a_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803fa44a_6:;
wr(s->u,1,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803fa44a_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa44a_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa44a_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa44a_10:;
/* 1803fa44e: cmp rsi, r10 */
L_1803fa44e_0:;
L_1803fa44e_1:;
wr(s->u,11,8,rd(s->r,144,8));
L_1803fa44e_2:;
wr(s->r,512,1,(rd(s->r,48,8)<rd(s->u,11,8)));
L_1803fa44e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),rd(s->u,11,8),8,1));
L_1803fa44e_4:;
wr(s->u,19,8,(rd(s->r,48,8)-rd(s->u,11,8)));
L_1803fa44e_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa44e_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fa44e_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fa44e_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa44e_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa44e_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa44e_11:;
/* 1803fa451: jl 0x1803fa432 */
L_1803fa451_0:;
L_1803fa451_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa451_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa432);}
L_1803fa451_3:;
return UINT64_C(0x1803fa453);
}
uint64_t b_1803fa453(CPU*s){
/* 1803fa453: movss dword ptr [r8], xmm2 */
L_1803fa453_0:;
L_1803fa453_1:;
wr(s->u,0,4,rd(s->r,4736,4));
L_1803fa453_2:;
mw((uint64_t)rd(s->r,128,8),4,rd(s->u,0,4));
L_1803fa453_3:;
/* 1803fa458: mov dword ptr [r9], r11d */
L_1803fa458_0:;
L_1803fa458_1:;
wr(s->u,0,4,rd(s->r,152,4));
L_1803fa458_2:;
mw((uint64_t)rd(s->r,136,8),4,rd(s->u,0,4));
L_1803fa458_3:;
/* 1803fa45b: xor eax, eax */
L_1803fa45b_0:;
L_1803fa45b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa45b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa45b_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fa45b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa45b_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa45b_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa45b_7:;
wr(s->u,4,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa45b_8:;
wr(s->u,12,1,pop(rd(s->u,4,4),4));
L_1803fa45b_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fa45b_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fa45b_11:;
/* 1803fa45d: add rsp, 0x20 */
L_1803fa45d_0:;
L_1803fa45d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa45d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803fa45d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803fa45d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa45d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa45d_6:;
wr(s->u,4,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa45d_7:;
wr(s->u,12,1,pop(rd(s->u,4,8),8));
L_1803fa45d_8:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fa45d_9:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fa45d_10:;
/* 1803fa461: pop rsi */
L_1803fa461_0:;
L_1803fa461_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fa461_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa461_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa461_4:;
wr(s->r,48,8,rd(s->u,14,8));
L_1803fa461_5:;
/* 1803fa462: pop r12 */
L_1803fa462_0:;
L_1803fa462_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fa462_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa462_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa462_4:;
wr(s->r,160,8,rd(s->u,14,8));
L_1803fa462_5:;
/* 1803fa464: pop r14 */
L_1803fa464_0:;
L_1803fa464_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fa464_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa464_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa464_4:;
wr(s->r,176,8,rd(s->u,14,8));
L_1803fa464_5:;
/* 1803fa466: ret  */
L_1803fa466_0:;
L_1803fa466_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa466_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa466_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa466_4:;
return UINT64_C(0x1803fa467);
}
uint64_t b_1803fa467(CPU*s){
/* 1803fa467: xor esi, esi */
L_1803fa467_0:;
L_1803fa467_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa467_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa467_3:;
wr(s->r,48,4,(rd(s->r,48,4)^rd(s->r,48,4)));
L_1803fa467_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fa467_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa467_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803fa467_7:;
wr(s->u,0,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803fa467_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fa467_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fa467_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fa467_11:;
/* 1803fa469: jmp 0x1803fa429 */
L_1803fa469_0:;
L_1803fa469_1:;
return UINT64_C(0x1803fa429);
L_1803fa469_2:;
return UINT64_C(0x1803fa46b);
}
uint64_t b_1803fa46b(CPU*s){
/* 1803fa46b: call 0x180411848 */
L_1803fa46b_0:;
L_1803fa46b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fa46b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fa470)));
L_1803fa46b_3:;
return (uint64_t)UINT64_C(0x180411848);
L_1803fa46b_4:;
return UINT64_C(0x1803fa470);
}
uint64_t b_1803fa470(CPU*s){
/* 1803fa470: add rsp, 0x20 */
L_1803fa470_0:;
L_1803fa470_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa470_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803fa470_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803fa470_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa470_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa470_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa470_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa470_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa470_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa470_10:;
/* 1803fa474: pop rsi */
L_1803fa474_0:;
L_1803fa474_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fa474_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa474_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa474_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fa474_5:;
/* 1803fa475: pop r12 */
L_1803fa475_0:;
L_1803fa475_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fa475_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa475_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa475_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fa475_5:;
/* 1803fa477: pop r14 */
L_1803fa477_0:;
L_1803fa477_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fa477_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa477_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa477_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fa477_5:;
/* 1803fa479: ret  */
L_1803fa479_0:;
L_1803fa479_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa479_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa479_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa479_4:;
return UINT64_C(0x1803fa47a);
}
uint64_t b_1803fa47a(CPU*s){
/* 1803fa47a: mov eax, 0xfffffffa */
L_1803fa47a_0:;
L_1803fa47a_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fa47a_2:;
/* 1803fa47f: add rsp, 0x20 */
L_1803fa47f_0:;
L_1803fa47f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa47f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803fa47f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803fa47f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa47f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa47f_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa47f_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa47f_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa47f_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa47f_10:;
/* 1803fa483: pop rsi */
L_1803fa483_0:;
L_1803fa483_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fa483_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa483_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa483_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fa483_5:;
/* 1803fa484: pop r12 */
L_1803fa484_0:;
L_1803fa484_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fa484_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa484_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa484_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fa484_5:;
/* 1803fa486: pop r14 */
L_1803fa486_0:;
L_1803fa486_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fa486_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa486_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa486_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fa486_5:;
/* 1803fa488: ret  */
L_1803fa488_0:;
L_1803fa488_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa488_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa488_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa488_4:;
return UINT64_C(0x1803fa489);
}
uint64_t b_1803fa489(CPU*s){
/* 1803fa489: mov eax, 0xfffffff8 */
L_1803fa489_0:;
L_1803fa489_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fa489_2:;
/* 1803fa48e: add rsp, 0x20 */
L_1803fa48e_0:;
L_1803fa48e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa48e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803fa48e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803fa48e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa48e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa48e_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa48e_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa48e_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa48e_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa48e_10:;
/* 1803fa492: pop rsi */
L_1803fa492_0:;
L_1803fa492_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fa492_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa492_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa492_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fa492_5:;
/* 1803fa493: pop r12 */
L_1803fa493_0:;
L_1803fa493_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fa493_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa493_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa493_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fa493_5:;
/* 1803fa495: pop r14 */
L_1803fa495_0:;
L_1803fa495_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fa495_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa495_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa495_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fa495_5:;
/* 1803fa497: ret  */
L_1803fa497_0:;
L_1803fa497_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa497_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa497_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa497_4:;
return UINT64_C(0x1803fa498);
}
uint64_t b_1803fa498(CPU*s){
/* 1803fa498: movsxd r8, r8d */
L_1803fa498_0:;
L_1803fa498_1:;
wr(s->r,128,8,(U)sx(rd(s->r,128,4),4));
L_1803fa498_2:;
/* 1803fa49b: test rcx, rcx */
L_1803fa49b_0:;
L_1803fa49b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa49b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa49b_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fa49b_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa49b_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fa49b_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fa49b_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa49b_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa49b_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa49b_10:;
/* 1803fa49e: je 0x1803fa4d2 */
L_1803fa49e_0:;
L_1803fa49e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa4d2);}
L_1803fa49e_2:;
return UINT64_C(0x1803fa4a0);
}
uint64_t b_1803fa4a0(CPU*s){
/* 1803fa4a0: test rdx, rdx */
L_1803fa4a0_0:;
L_1803fa4a0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa4a0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa4a0_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fa4a0_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa4a0_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fa4a0_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fa4a0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa4a0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa4a0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa4a0_10:;
/* 1803fa4a3: je 0x1803fa4d2 */
L_1803fa4a3_0:;
L_1803fa4a3_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa4d2);}
L_1803fa4a3_2:;
return UINT64_C(0x1803fa4a5);
}
uint64_t b_1803fa4a5(CPU*s){
/* 1803fa4a5: test r8, r8 */
L_1803fa4a5_0:;
L_1803fa4a5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa4a5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa4a5_3:;
wr(s->u,12,8,(rd(s->r,128,8)&rd(s->r,128,8)));
L_1803fa4a5_4:;
wr(s->r,519,1,(sx(rd(s->u,12,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa4a5_5:;
wr(s->r,518,1,(rd(s->u,12,8)==((U)UINT64_C(0x0))));
L_1803fa4a5_6:;
wr(s->u,2,8,(rd(s->u,12,8)&((U)UINT64_C(0xff))));
L_1803fa4a5_7:;
wr(s->u,10,1,pop(rd(s->u,2,8),8));
L_1803fa4a5_8:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fa4a5_9:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fa4a5_10:;
/* 1803fa4a8: jle 0x1803fa4cc */
L_1803fa4a8_0:;
L_1803fa4a8_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa4a8_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fa4a8_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fa4cc);}
L_1803fa4a8_4:;
return UINT64_C(0x1803fa4aa);
}
uint64_t b_1803fa4aa(CPU*s){
/* 1803fa4aa: mov eax, 0 */
L_1803fa4aa_0:;
L_1803fa4aa_1:;
wr(s->r,0,8,((U)UINT64_C(0x0)));
L_1803fa4aa_2:;
/* 1803fa4af: jle 0x1803fa4c9 */
L_1803fa4af_0:;
L_1803fa4af_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa4af_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fa4af_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fa4c9);}
L_1803fa4af_4:;
return UINT64_C(0x1803fa4b1);
}
uint64_t b_1803fa4b1(CPU*s){
/* 1803fa4b1: movss xmm0, dword ptr [rcx + rax*4] */
L_1803fa4b1_0:;
L_1803fa4b1_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa4b1_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa4b1_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa4b1_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803fa4b1_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fa4b1_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fa4b1_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fa4b1_8:;
/* 1803fa4b6: maxss xmm0, dword ptr [rdx + rax*4] */
L_1803fa4b6_0:;
L_1803fa4b6_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa4b6_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fa4b6_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa4b6_4:;
wr(s->u,47,4,rd(s->u,16,4));
L_1803fa4b6_5:;
wr(s->u,51,1,(fv(rd(s->u,47,4),4)<fv(rd(s->r,4608,4),4)));
L_1803fa4b6_6:;
if(rd(s->u,51,1)){goto L_1803fa4bb_0;}
L_1803fa4b6_7:;
wr(s->r,4608,4,rd(s->u,47,4));
L_1803fa4b6_8:;
/* 1803fa4bb: movss dword ptr [rdx + rax*4], xmm0 */
L_1803fa4bb_0:;
L_1803fa4bb_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa4bb_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fa4bb_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fa4bb_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fa4bb_5:;
/* 1803fa4c0: add rax, 1 */
L_1803fa4c0_0:;
L_1803fa4c0_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fa4c0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fa4c0_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fa4c0_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa4c0_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fa4c0_6:;
wr(s->u,21,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fa4c0_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa4c0_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa4c0_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa4c0_10:;
/* 1803fa4c4: cmp rax, r8 */
L_1803fa4c4_0:;
L_1803fa4c4_1:;
wr(s->u,31,8,rd(s->r,128,8));
L_1803fa4c4_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,31,8)));
L_1803fa4c4_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,31,8),8,1));
L_1803fa4c4_4:;
wr(s->u,39,8,(rd(s->r,0,8)-rd(s->u,31,8)));
L_1803fa4c4_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa4c4_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fa4c4_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fa4c4_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa4c4_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa4c4_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa4c4_11:;
/* 1803fa4c7: jl 0x1803fa4b1 */
L_1803fa4c7_0:;
L_1803fa4c7_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa4c7_2:;
if(rd(s->u,20,1)){goto L_1803fa4b1_0;}
L_1803fa4c7_3:;
return UINT64_C(0x1803fa4c9);
}
uint64_t b_1803fa4bb(CPU*s){
/* 1803fa4bb: movss dword ptr [rdx + rax*4], xmm0 */
L_1803fa4bb_0:;
L_1803fa4bb_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa4bb_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fa4bb_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fa4bb_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fa4bb_5:;
/* 1803fa4c0: add rax, 1 */
L_1803fa4c0_0:;
L_1803fa4c0_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fa4c0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fa4c0_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fa4c0_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa4c0_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fa4c0_6:;
wr(s->u,21,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fa4c0_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa4c0_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa4c0_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa4c0_10:;
/* 1803fa4c4: cmp rax, r8 */
L_1803fa4c4_0:;
L_1803fa4c4_1:;
wr(s->u,31,8,rd(s->r,128,8));
L_1803fa4c4_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,31,8)));
L_1803fa4c4_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,31,8),8,1));
L_1803fa4c4_4:;
wr(s->u,39,8,(rd(s->r,0,8)-rd(s->u,31,8)));
L_1803fa4c4_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa4c4_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fa4c4_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fa4c4_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa4c4_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa4c4_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa4c4_11:;
/* 1803fa4c7: jl 0x1803fa4b1 */
L_1803fa4c7_0:;
L_1803fa4c7_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa4c7_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fa4b1);}
L_1803fa4c7_3:;
return UINT64_C(0x1803fa4c9);
}
uint64_t b_1803fa4c9(CPU*s){
/* 1803fa4c9: xor eax, eax */
L_1803fa4c9_0:;
L_1803fa4c9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa4c9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa4c9_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fa4c9_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa4c9_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa4c9_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa4c9_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa4c9_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fa4c9_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fa4c9_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fa4c9_11:;
/* 1803fa4cb: ret  */
L_1803fa4cb_0:;
L_1803fa4cb_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa4cb_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa4cb_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa4cb_4:;
return UINT64_C(0x1803fa4cc);
}
uint64_t b_1803fa4cc(CPU*s){
/* 1803fa4cc: mov eax, 0xfffffffa */
L_1803fa4cc_0:;
L_1803fa4cc_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fa4cc_2:;
/* 1803fa4d1: ret  */
L_1803fa4d1_0:;
L_1803fa4d1_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa4d1_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa4d1_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa4d1_4:;
return UINT64_C(0x1803fa4d2);
}
uint64_t b_1803fa4d2(CPU*s){
/* 1803fa4d2: mov eax, 0xfffffff8 */
L_1803fa4d2_0:;
L_1803fa4d2_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fa4d2_2:;
/* 1803fa4d7: ret  */
L_1803fa4d7_0:;
L_1803fa4d7_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa4d7_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa4d7_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa4d7_4:;
return UINT64_C(0x1803fa4d8);
}
uint64_t b_1803fa4d8(CPU*s){
/* 1803fa4d8: test rcx, rcx */
L_1803fa4d8_0:;
L_1803fa4d8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa4d8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa4d8_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fa4d8_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa4d8_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fa4d8_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fa4d8_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa4d8_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa4d8_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa4d8_10:;
/* 1803fa4db: je 0x1803fa513 */
L_1803fa4db_0:;
L_1803fa4db_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa513);}
L_1803fa4db_2:;
return UINT64_C(0x1803fa4dd);
}
uint64_t b_1803fa4dd(CPU*s){
/* 1803fa4dd: test rdx, rdx */
L_1803fa4dd_0:;
L_1803fa4dd_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa4dd_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa4dd_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fa4dd_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa4dd_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fa4dd_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fa4dd_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa4dd_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa4dd_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa4dd_10:;
/* 1803fa4e0: je 0x1803fa513 */
L_1803fa4e0_0:;
L_1803fa4e0_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa513);}
L_1803fa4e0_2:;
return UINT64_C(0x1803fa4e2);
}
uint64_t b_1803fa4e2(CPU*s){
/* 1803fa4e2: test r8d, r8d */
L_1803fa4e2_0:;
L_1803fa4e2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa4e2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa4e2_3:;
wr(s->u,8,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fa4e2_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa4e2_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803fa4e2_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803fa4e2_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fa4e2_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fa4e2_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fa4e2_10:;
/* 1803fa4e5: jle 0x1803fa50d */
L_1803fa4e5_0:;
L_1803fa4e5_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa4e5_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fa4e5_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fa50d);}
L_1803fa4e5_4:;
return UINT64_C(0x1803fa4e7);
}
uint64_t b_1803fa4e7(CPU*s){
/* 1803fa4e7: lea eax, [r8 - 1] */
L_1803fa4e7_0:;
L_1803fa4e7_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fa4e7_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fa4e7_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa4e7_4:;
/* 1803fa4eb: cmp eax, -1 */
L_1803fa4eb_0:;
L_1803fa4eb_1:;
wr(s->u,14,4,rd(s->r,0,4));
L_1803fa4eb_2:;
wr(s->r,512,1,(rd(s->u,14,4)<((U)UINT64_C(0xffffffff))));
L_1803fa4eb_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,14,4),((U)UINT64_C(0xffffffff)),4,1));
L_1803fa4eb_4:;
wr(s->u,18,4,(rd(s->u,14,4)-((U)UINT64_C(0xffffffff))));
L_1803fa4eb_5:;
wr(s->r,519,1,(sx(rd(s->u,18,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa4eb_6:;
wr(s->r,518,1,(rd(s->u,18,4)==((U)UINT64_C(0x0))));
L_1803fa4eb_7:;
wr(s->u,8,4,(rd(s->u,18,4)&((U)UINT64_C(0xff))));
L_1803fa4eb_8:;
wr(s->u,12,1,pop(rd(s->u,8,4),4));
L_1803fa4eb_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fa4eb_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fa4eb_11:;
/* 1803fa4ee: je 0x1803fa50a */
L_1803fa4ee_0:;
L_1803fa4ee_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa50a);}
L_1803fa4ee_2:;
return UINT64_C(0x1803fa4f0);
}
uint64_t b_1803fa4f0(CPU*s){
/* 1803fa4f0: movss xmm0, dword ptr [rcx] */
L_1803fa4f0_0:;
L_1803fa4f0_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803fa4f0_2:;
wr(s->r,4608,4,rd(s->u,0,4));
L_1803fa4f0_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fa4f0_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fa4f0_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fa4f0_6:;
/* 1803fa4f4: addss xmm0, dword ptr [rdx] */
L_1803fa4f4_0:;
L_1803fa4f4_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803fa4f4_2:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,0,4),4),4));
L_1803fa4f4_3:;
/* 1803fa4f8: movss dword ptr [rdx], xmm0 */
L_1803fa4f8_0:;
L_1803fa4f8_1:;
wr(s->u,0,4,rd(s->r,4608,4));
L_1803fa4f8_2:;
mw((uint64_t)rd(s->r,16,8),4,rd(s->u,0,4));
L_1803fa4f8_3:;
/* 1803fa4fc: add rcx, 4 */
L_1803fa4fc_0:;
L_1803fa4fc_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803fa4fc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x4)),8,0));
L_1803fa4fc_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803fa4fc_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa4fc_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803fa4fc_6:;
wr(s->u,5,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803fa4fc_7:;
wr(s->u,13,1,pop(rd(s->u,5,8),8));
L_1803fa4fc_8:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa4fc_9:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa4fc_10:;
/* 1803fa500: add rdx, 4 */
L_1803fa500_0:;
L_1803fa500_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803fa500_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x4)),8,0));
L_1803fa500_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803fa500_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa500_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fa500_6:;
wr(s->u,5,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fa500_7:;
wr(s->u,13,1,pop(rd(s->u,5,8),8));
L_1803fa500_8:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa500_9:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa500_10:;
/* 1803fa504: add r8d, -1 */
L_1803fa504_0:;
L_1803fa504_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803fa504_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fa504_3:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0xffffffff))));
L_1803fa504_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fa504_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa504_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fa504_7:;
wr(s->u,5,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fa504_8:;
wr(s->u,13,1,pop(rd(s->u,5,4),4));
L_1803fa504_9:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa504_10:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa504_11:;
/* 1803fa508: jne 0x1803fa4f0 */
L_1803fa508_0:;
L_1803fa508_1:;
wr(s->u,4,1,(!rd(s->r,518,1)));
L_1803fa508_2:;
if(rd(s->u,4,1)){goto L_1803fa4f0_0;}
L_1803fa508_3:;
return UINT64_C(0x1803fa50a);
}
uint64_t b_1803fa50a(CPU*s){
/* 1803fa50a: xor eax, eax */
L_1803fa50a_0:;
L_1803fa50a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa50a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa50a_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fa50a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa50a_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa50a_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa50a_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa50a_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fa50a_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fa50a_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fa50a_11:;
/* 1803fa50c: ret  */
L_1803fa50c_0:;
L_1803fa50c_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa50c_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa50c_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa50c_4:;
return UINT64_C(0x1803fa50d);
}
uint64_t b_1803fa50d(CPU*s){
/* 1803fa50d: mov eax, 0xfffffffa */
L_1803fa50d_0:;
L_1803fa50d_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fa50d_2:;
/* 1803fa512: ret  */
L_1803fa512_0:;
L_1803fa512_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa512_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa512_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa512_4:;
return UINT64_C(0x1803fa513);
}
uint64_t b_1803fa513(CPU*s){
/* 1803fa513: mov eax, 0xfffffff8 */
L_1803fa513_0:;
L_1803fa513_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fa513_2:;
/* 1803fa518: ret  */
L_1803fa518_0:;
L_1803fa518_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa518_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa518_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa518_4:;
return UINT64_C(0x1803fa519);
}
uint64_t b_1803fa51c(CPU*s){
/* 1803fa51c: test rdx, rdx */
L_1803fa51c_0:;
L_1803fa51c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa51c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa51c_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fa51c_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa51c_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fa51c_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fa51c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa51c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa51c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa51c_10:;
/* 1803fa51f: je 0x1803fa559 */
L_1803fa51f_0:;
L_1803fa51f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa559);}
L_1803fa51f_2:;
return UINT64_C(0x1803fa521);
}
uint64_t b_1803fa521(CPU*s){
/* 1803fa521: test r8d, r8d */
L_1803fa521_0:;
L_1803fa521_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa521_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa521_3:;
wr(s->u,8,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fa521_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa521_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803fa521_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803fa521_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fa521_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fa521_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fa521_10:;
/* 1803fa524: jle 0x1803fa553 */
L_1803fa524_0:;
L_1803fa524_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa524_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fa524_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fa553);}
L_1803fa524_4:;
return UINT64_C(0x1803fa526);
}
uint64_t b_1803fa526(CPU*s){
/* 1803fa526: pxor xmm1, xmm1 */
L_1803fa526_0:;
L_1803fa526_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803fa526_2:;
/* 1803fa52a: ucomiss xmm0, xmm1 */
L_1803fa52a_0:;
L_1803fa52a_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803fa52a_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803fa52a_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803fa52a_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803fa52a_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803fa52a_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803fa52a_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803fa52a_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa52a_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fa52a_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fa52a_11:;
/* 1803fa52d: jp 0x1803fa531 */
L_1803fa52d_0:;
L_1803fa52d_1:;
if(rd(s->r,514,1)){return UINT64_C(0x1803fa531);}
L_1803fa52d_2:;
return UINT64_C(0x1803fa52f);
}
uint64_t b_1803fa52f(CPU*s){
/* 1803fa52f: je 0x1803fa550 */
L_1803fa52f_0:;
L_1803fa52f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa550);}
L_1803fa52f_2:;
return UINT64_C(0x1803fa531);
}
uint64_t b_1803fa531(CPU*s){
/* 1803fa531: lea eax, [r8 - 1] */
L_1803fa531_0:;
L_1803fa531_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fa531_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fa531_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa531_4:;
/* 1803fa535: cmp eax, -1 */
L_1803fa535_0:;
L_1803fa535_1:;
wr(s->u,14,4,rd(s->r,0,4));
L_1803fa535_2:;
wr(s->r,512,1,(rd(s->u,14,4)<((U)UINT64_C(0xffffffff))));
L_1803fa535_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,14,4),((U)UINT64_C(0xffffffff)),4,1));
L_1803fa535_4:;
wr(s->u,18,4,(rd(s->u,14,4)-((U)UINT64_C(0xffffffff))));
L_1803fa535_5:;
wr(s->r,519,1,(sx(rd(s->u,18,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa535_6:;
wr(s->r,518,1,(rd(s->u,18,4)==((U)UINT64_C(0x0))));
L_1803fa535_7:;
wr(s->u,8,4,(rd(s->u,18,4)&((U)UINT64_C(0xff))));
L_1803fa535_8:;
wr(s->u,12,1,pop(rd(s->u,8,4),4));
L_1803fa535_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fa535_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fa535_11:;
/* 1803fa538: je 0x1803fa550 */
L_1803fa538_0:;
L_1803fa538_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa550);}
L_1803fa538_2:;
return UINT64_C(0x1803fa53a);
}
uint64_t b_1803fa53a(CPU*s){
/* 1803fa53a: movss xmm1, dword ptr [rdx] */
L_1803fa53a_0:;
L_1803fa53a_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803fa53a_2:;
wr(s->r,4672,4,rd(s->u,0,4));
L_1803fa53a_3:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fa53a_4:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fa53a_5:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fa53a_6:;
/* 1803fa53e: addss xmm1, xmm0 */
L_1803fa53e_0:;
L_1803fa53e_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fa53e_2:;
/* 1803fa542: movss dword ptr [rdx], xmm1 */
L_1803fa542_0:;
L_1803fa542_1:;
wr(s->u,0,4,rd(s->r,4672,4));
L_1803fa542_2:;
mw((uint64_t)rd(s->r,16,8),4,rd(s->u,0,4));
L_1803fa542_3:;
/* 1803fa546: add rdx, 4 */
L_1803fa546_0:;
L_1803fa546_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803fa546_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x4)),8,0));
L_1803fa546_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803fa546_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa546_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fa546_6:;
wr(s->u,5,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fa546_7:;
wr(s->u,13,1,pop(rd(s->u,5,8),8));
L_1803fa546_8:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa546_9:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa546_10:;
/* 1803fa54a: add r8d, -1 */
L_1803fa54a_0:;
L_1803fa54a_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803fa54a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fa54a_3:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0xffffffff))));
L_1803fa54a_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fa54a_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa54a_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fa54a_7:;
wr(s->u,5,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fa54a_8:;
wr(s->u,13,1,pop(rd(s->u,5,4),4));
L_1803fa54a_9:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa54a_10:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa54a_11:;
/* 1803fa54e: jne 0x1803fa53a */
L_1803fa54e_0:;
L_1803fa54e_1:;
wr(s->u,4,1,(!rd(s->r,518,1)));
L_1803fa54e_2:;
if(rd(s->u,4,1)){goto L_1803fa53a_0;}
L_1803fa54e_3:;
return UINT64_C(0x1803fa550);
}
uint64_t b_1803fa550(CPU*s){
/* 1803fa550: xor eax, eax */
L_1803fa550_0:;
L_1803fa550_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa550_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa550_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fa550_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa550_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa550_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa550_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa550_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fa550_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fa550_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fa550_11:;
/* 1803fa552: ret  */
L_1803fa552_0:;
L_1803fa552_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa552_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa552_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa552_4:;
return UINT64_C(0x1803fa553);
}
uint64_t b_1803fa553(CPU*s){
/* 1803fa553: mov eax, 0xfffffffa */
L_1803fa553_0:;
L_1803fa553_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fa553_2:;
/* 1803fa558: ret  */
L_1803fa558_0:;
L_1803fa558_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa558_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa558_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa558_4:;
return UINT64_C(0x1803fa559);
}
uint64_t b_1803fa559(CPU*s){
/* 1803fa559: mov eax, 0xfffffff8 */
L_1803fa559_0:;
L_1803fa559_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fa559_2:;
/* 1803fa55e: ret  */
L_1803fa55e_0:;
L_1803fa55e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa55e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa55e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa55e_4:;
return UINT64_C(0x1803fa55f);
}
uint64_t b_1803fa560(CPU*s){
/* 1803fa560: test rcx, rcx */
L_1803fa560_0:;
L_1803fa560_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa560_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa560_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fa560_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa560_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fa560_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fa560_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa560_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa560_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa560_10:;
/* 1803fa563: je 0x1803fa59b */
L_1803fa563_0:;
L_1803fa563_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa59b);}
L_1803fa563_2:;
return UINT64_C(0x1803fa565);
}
uint64_t b_1803fa565(CPU*s){
/* 1803fa565: test rdx, rdx */
L_1803fa565_0:;
L_1803fa565_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa565_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa565_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fa565_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa565_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fa565_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fa565_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa565_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa565_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa565_10:;
/* 1803fa568: je 0x1803fa59b */
L_1803fa568_0:;
L_1803fa568_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa59b);}
L_1803fa568_2:;
return UINT64_C(0x1803fa56a);
}
uint64_t b_1803fa56a(CPU*s){
/* 1803fa56a: test r8d, r8d */
L_1803fa56a_0:;
L_1803fa56a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa56a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa56a_3:;
wr(s->u,8,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fa56a_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa56a_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803fa56a_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803fa56a_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fa56a_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fa56a_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fa56a_10:;
/* 1803fa56d: jle 0x1803fa595 */
L_1803fa56d_0:;
L_1803fa56d_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa56d_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fa56d_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fa595);}
L_1803fa56d_4:;
return UINT64_C(0x1803fa56f);
}
uint64_t b_1803fa56f(CPU*s){
/* 1803fa56f: lea eax, [r8 - 1] */
L_1803fa56f_0:;
L_1803fa56f_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fa56f_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fa56f_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa56f_4:;
/* 1803fa573: cmp eax, -1 */
L_1803fa573_0:;
L_1803fa573_1:;
wr(s->u,14,4,rd(s->r,0,4));
L_1803fa573_2:;
wr(s->r,512,1,(rd(s->u,14,4)<((U)UINT64_C(0xffffffff))));
L_1803fa573_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,14,4),((U)UINT64_C(0xffffffff)),4,1));
L_1803fa573_4:;
wr(s->u,18,4,(rd(s->u,14,4)-((U)UINT64_C(0xffffffff))));
L_1803fa573_5:;
wr(s->r,519,1,(sx(rd(s->u,18,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa573_6:;
wr(s->r,518,1,(rd(s->u,18,4)==((U)UINT64_C(0x0))));
L_1803fa573_7:;
wr(s->u,8,4,(rd(s->u,18,4)&((U)UINT64_C(0xff))));
L_1803fa573_8:;
wr(s->u,12,1,pop(rd(s->u,8,4),4));
L_1803fa573_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fa573_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fa573_11:;
/* 1803fa576: je 0x1803fa592 */
L_1803fa576_0:;
L_1803fa576_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa592);}
L_1803fa576_2:;
return UINT64_C(0x1803fa578);
}
uint64_t b_1803fa578(CPU*s){
/* 1803fa578: movss xmm0, dword ptr [rdx] */
L_1803fa578_0:;
L_1803fa578_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803fa578_2:;
wr(s->r,4608,4,rd(s->u,0,4));
L_1803fa578_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fa578_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fa578_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fa578_6:;
/* 1803fa57c: subss xmm0, dword ptr [rcx] */
L_1803fa57c_0:;
L_1803fa57c_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803fa57c_2:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->u,0,4),4),4));
L_1803fa57c_3:;
/* 1803fa580: movss dword ptr [rdx], xmm0 */
L_1803fa580_0:;
L_1803fa580_1:;
wr(s->u,0,4,rd(s->r,4608,4));
L_1803fa580_2:;
mw((uint64_t)rd(s->r,16,8),4,rd(s->u,0,4));
L_1803fa580_3:;
/* 1803fa584: add rcx, 4 */
L_1803fa584_0:;
L_1803fa584_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803fa584_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x4)),8,0));
L_1803fa584_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803fa584_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa584_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803fa584_6:;
wr(s->u,5,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803fa584_7:;
wr(s->u,13,1,pop(rd(s->u,5,8),8));
L_1803fa584_8:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa584_9:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa584_10:;
/* 1803fa588: add rdx, 4 */
L_1803fa588_0:;
L_1803fa588_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803fa588_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x4)),8,0));
L_1803fa588_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803fa588_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa588_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fa588_6:;
wr(s->u,5,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fa588_7:;
wr(s->u,13,1,pop(rd(s->u,5,8),8));
L_1803fa588_8:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa588_9:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa588_10:;
/* 1803fa58c: add r8d, -1 */
L_1803fa58c_0:;
L_1803fa58c_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803fa58c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fa58c_3:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0xffffffff))));
L_1803fa58c_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fa58c_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa58c_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fa58c_7:;
wr(s->u,5,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fa58c_8:;
wr(s->u,13,1,pop(rd(s->u,5,4),4));
L_1803fa58c_9:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa58c_10:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa58c_11:;
/* 1803fa590: jne 0x1803fa578 */
L_1803fa590_0:;
L_1803fa590_1:;
wr(s->u,4,1,(!rd(s->r,518,1)));
L_1803fa590_2:;
if(rd(s->u,4,1)){goto L_1803fa578_0;}
L_1803fa590_3:;
return UINT64_C(0x1803fa592);
}
uint64_t b_1803fa592(CPU*s){
/* 1803fa592: xor eax, eax */
L_1803fa592_0:;
L_1803fa592_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa592_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa592_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fa592_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa592_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa592_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa592_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa592_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fa592_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fa592_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fa592_11:;
/* 1803fa594: ret  */
L_1803fa594_0:;
L_1803fa594_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa594_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa594_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa594_4:;
return UINT64_C(0x1803fa595);
}
uint64_t b_1803fa595(CPU*s){
/* 1803fa595: mov eax, 0xfffffffa */
L_1803fa595_0:;
L_1803fa595_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fa595_2:;
/* 1803fa59a: ret  */
L_1803fa59a_0:;
L_1803fa59a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa59a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa59a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa59a_4:;
return UINT64_C(0x1803fa59b);
}
uint64_t b_1803fa59b(CPU*s){
/* 1803fa59b: mov eax, 0xfffffff8 */
L_1803fa59b_0:;
L_1803fa59b_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fa59b_2:;
/* 1803fa5a0: ret  */
L_1803fa5a0_0:;
L_1803fa5a0_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa5a0_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa5a0_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa5a0_4:;
return UINT64_C(0x1803fa5a1);
}
uint64_t b_1803fa5a4(CPU*s){
/* 1803fa5a4: test rcx, rcx */
L_1803fa5a4_0:;
L_1803fa5a4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa5a4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa5a4_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fa5a4_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa5a4_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fa5a4_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fa5a4_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa5a4_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa5a4_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa5a4_10:;
/* 1803fa5a7: je 0x1803fa5df */
L_1803fa5a7_0:;
L_1803fa5a7_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa5df);}
L_1803fa5a7_2:;
return UINT64_C(0x1803fa5a9);
}
uint64_t b_1803fa5a9(CPU*s){
/* 1803fa5a9: test rdx, rdx */
L_1803fa5a9_0:;
L_1803fa5a9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa5a9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa5a9_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fa5a9_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa5a9_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fa5a9_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fa5a9_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa5a9_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa5a9_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa5a9_10:;
/* 1803fa5ac: je 0x1803fa5df */
L_1803fa5ac_0:;
L_1803fa5ac_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa5df);}
L_1803fa5ac_2:;
return UINT64_C(0x1803fa5ae);
}
uint64_t b_1803fa5ae(CPU*s){
/* 1803fa5ae: test r8d, r8d */
L_1803fa5ae_0:;
L_1803fa5ae_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa5ae_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa5ae_3:;
wr(s->u,8,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fa5ae_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa5ae_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803fa5ae_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803fa5ae_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fa5ae_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fa5ae_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fa5ae_10:;
/* 1803fa5b1: jle 0x1803fa5d9 */
L_1803fa5b1_0:;
L_1803fa5b1_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa5b1_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fa5b1_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fa5d9);}
L_1803fa5b1_4:;
return UINT64_C(0x1803fa5b3);
}
uint64_t b_1803fa5b3(CPU*s){
/* 1803fa5b3: lea eax, [r8 - 1] */
L_1803fa5b3_0:;
L_1803fa5b3_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fa5b3_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fa5b3_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa5b3_4:;
/* 1803fa5b7: cmp eax, -1 */
L_1803fa5b7_0:;
L_1803fa5b7_1:;
wr(s->u,14,4,rd(s->r,0,4));
L_1803fa5b7_2:;
wr(s->r,512,1,(rd(s->u,14,4)<((U)UINT64_C(0xffffffff))));
L_1803fa5b7_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,14,4),((U)UINT64_C(0xffffffff)),4,1));
L_1803fa5b7_4:;
wr(s->u,18,4,(rd(s->u,14,4)-((U)UINT64_C(0xffffffff))));
L_1803fa5b7_5:;
wr(s->r,519,1,(sx(rd(s->u,18,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa5b7_6:;
wr(s->r,518,1,(rd(s->u,18,4)==((U)UINT64_C(0x0))));
L_1803fa5b7_7:;
wr(s->u,8,4,(rd(s->u,18,4)&((U)UINT64_C(0xff))));
L_1803fa5b7_8:;
wr(s->u,12,1,pop(rd(s->u,8,4),4));
L_1803fa5b7_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fa5b7_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fa5b7_11:;
/* 1803fa5ba: je 0x1803fa5d6 */
L_1803fa5ba_0:;
L_1803fa5ba_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa5d6);}
L_1803fa5ba_2:;
return UINT64_C(0x1803fa5bc);
}
uint64_t b_1803fa5bc(CPU*s){
/* 1803fa5bc: movss xmm0, dword ptr [rcx] */
L_1803fa5bc_0:;
L_1803fa5bc_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803fa5bc_2:;
wr(s->r,4608,4,rd(s->u,0,4));
L_1803fa5bc_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fa5bc_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fa5bc_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fa5bc_6:;
/* 1803fa5c0: mulss xmm0, dword ptr [rdx] */
L_1803fa5c0_0:;
L_1803fa5c0_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803fa5c0_2:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,0,4),4),4));
L_1803fa5c0_3:;
/* 1803fa5c4: movss dword ptr [rdx], xmm0 */
L_1803fa5c4_0:;
L_1803fa5c4_1:;
wr(s->u,0,4,rd(s->r,4608,4));
L_1803fa5c4_2:;
mw((uint64_t)rd(s->r,16,8),4,rd(s->u,0,4));
L_1803fa5c4_3:;
/* 1803fa5c8: add rcx, 4 */
L_1803fa5c8_0:;
L_1803fa5c8_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803fa5c8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x4)),8,0));
L_1803fa5c8_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803fa5c8_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa5c8_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803fa5c8_6:;
wr(s->u,5,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803fa5c8_7:;
wr(s->u,13,1,pop(rd(s->u,5,8),8));
L_1803fa5c8_8:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa5c8_9:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa5c8_10:;
/* 1803fa5cc: add rdx, 4 */
L_1803fa5cc_0:;
L_1803fa5cc_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803fa5cc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x4)),8,0));
L_1803fa5cc_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803fa5cc_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa5cc_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fa5cc_6:;
wr(s->u,5,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fa5cc_7:;
wr(s->u,13,1,pop(rd(s->u,5,8),8));
L_1803fa5cc_8:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa5cc_9:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa5cc_10:;
/* 1803fa5d0: add r8d, -1 */
L_1803fa5d0_0:;
L_1803fa5d0_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803fa5d0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fa5d0_3:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0xffffffff))));
L_1803fa5d0_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fa5d0_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa5d0_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fa5d0_7:;
wr(s->u,5,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fa5d0_8:;
wr(s->u,13,1,pop(rd(s->u,5,4),4));
L_1803fa5d0_9:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa5d0_10:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa5d0_11:;
/* 1803fa5d4: jne 0x1803fa5bc */
L_1803fa5d4_0:;
L_1803fa5d4_1:;
wr(s->u,4,1,(!rd(s->r,518,1)));
L_1803fa5d4_2:;
if(rd(s->u,4,1)){goto L_1803fa5bc_0;}
L_1803fa5d4_3:;
return UINT64_C(0x1803fa5d6);
}
uint64_t b_1803fa5d6(CPU*s){
/* 1803fa5d6: xor eax, eax */
L_1803fa5d6_0:;
L_1803fa5d6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa5d6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa5d6_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fa5d6_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa5d6_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa5d6_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa5d6_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa5d6_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fa5d6_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fa5d6_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fa5d6_11:;
/* 1803fa5d8: ret  */
L_1803fa5d8_0:;
L_1803fa5d8_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa5d8_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa5d8_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa5d8_4:;
return UINT64_C(0x1803fa5d9);
}
uint64_t b_1803fa5d9(CPU*s){
/* 1803fa5d9: mov eax, 0xfffffffa */
L_1803fa5d9_0:;
L_1803fa5d9_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fa5d9_2:;
/* 1803fa5de: ret  */
L_1803fa5de_0:;
L_1803fa5de_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa5de_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa5de_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa5de_4:;
return UINT64_C(0x1803fa5df);
}
uint64_t b_1803fa5df(CPU*s){
/* 1803fa5df: mov eax, 0xfffffff8 */
L_1803fa5df_0:;
L_1803fa5df_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fa5df_2:;
/* 1803fa5e4: ret  */
L_1803fa5e4_0:;
L_1803fa5e4_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa5e4_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa5e4_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa5e4_4:;
return UINT64_C(0x1803fa5e5);
}
uint64_t b_1803fa5e8(CPU*s){
/* 1803fa5e8: sub rsp, 0x28 */
L_1803fa5e8_0:;
L_1803fa5e8_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fa5e8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fa5e8_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fa5e8_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa5e8_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa5e8_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa5e8_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa5e8_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa5e8_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa5e8_10:;
/* 1803fa5ec: test rdx, rdx */
L_1803fa5ec_0:;
L_1803fa5ec_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa5ec_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa5ec_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fa5ec_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa5ec_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fa5ec_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fa5ec_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa5ec_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa5ec_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa5ec_10:;
/* 1803fa5ef: je 0x1803fa64c */
L_1803fa5ef_0:;
L_1803fa5ef_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa64c);}
L_1803fa5ef_2:;
return UINT64_C(0x1803fa5f1);
}
uint64_t b_1803fa5f1(CPU*s){
/* 1803fa5f1: test r8d, r8d */
L_1803fa5f1_0:;
L_1803fa5f1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa5f1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa5f1_3:;
wr(s->u,8,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fa5f1_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa5f1_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803fa5f1_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803fa5f1_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fa5f1_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fa5f1_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fa5f1_10:;
/* 1803fa5f4: jle 0x1803fa642 */
L_1803fa5f4_0:;
L_1803fa5f4_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa5f4_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fa5f4_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fa642);}
L_1803fa5f4_4:;
return UINT64_C(0x1803fa5f6);
}
uint64_t b_1803fa5f6(CPU*s){
/* 1803fa5f6: ucomiss xmm0, dword ptr [rip + 0x413e03] */
L_1803fa5f6_0:;
L_1803fa5f6_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803fa5f6_2:;
wr(s->u,1,1,isnan(fv(mr(UINT64_C(0x18080e400),4),4)));
L_1803fa5f6_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803fa5f6_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(mr(UINT64_C(0x18080e400),4),4)));
L_1803fa5f6_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803fa5f6_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(mr(UINT64_C(0x18080e400),4),4)));
L_1803fa5f6_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803fa5f6_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa5f6_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fa5f6_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fa5f6_11:;
/* 1803fa5fd: jp 0x1803fa601 */
L_1803fa5fd_0:;
L_1803fa5fd_1:;
if(rd(s->r,514,1)){return UINT64_C(0x1803fa601);}
L_1803fa5fd_2:;
return UINT64_C(0x1803fa5ff);
}
uint64_t b_1803fa5ff(CPU*s){
/* 1803fa5ff: je 0x1803fa62b */
L_1803fa5ff_0:;
L_1803fa5ff_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa62b);}
L_1803fa5ff_2:;
return UINT64_C(0x1803fa601);
}
uint64_t b_1803fa601(CPU*s){
/* 1803fa601: pxor xmm1, xmm1 */
L_1803fa601_0:;
L_1803fa601_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803fa601_2:;
/* 1803fa605: ucomiss xmm0, xmm1 */
L_1803fa605_0:;
L_1803fa605_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803fa605_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803fa605_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803fa605_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803fa605_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803fa605_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803fa605_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803fa605_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa605_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fa605_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fa605_11:;
/* 1803fa608: jp 0x1803fa60c */
L_1803fa608_0:;
L_1803fa608_1:;
if(rd(s->r,514,1)){return UINT64_C(0x1803fa60c);}
L_1803fa608_2:;
return UINT64_C(0x1803fa60a);
}
uint64_t b_1803fa60a(CPU*s){
/* 1803fa60a: je 0x1803fa632 */
L_1803fa60a_0:;
L_1803fa60a_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa632);}
L_1803fa60a_2:;
return UINT64_C(0x1803fa60c);
}
uint64_t b_1803fa60c(CPU*s){
/* 1803fa60c: lea eax, [r8 - 1] */
L_1803fa60c_0:;
L_1803fa60c_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fa60c_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fa60c_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa60c_4:;
/* 1803fa610: cmp eax, -1 */
L_1803fa610_0:;
L_1803fa610_1:;
wr(s->u,14,4,rd(s->r,0,4));
L_1803fa610_2:;
wr(s->r,512,1,(rd(s->u,14,4)<((U)UINT64_C(0xffffffff))));
L_1803fa610_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,14,4),((U)UINT64_C(0xffffffff)),4,1));
L_1803fa610_4:;
wr(s->u,18,4,(rd(s->u,14,4)-((U)UINT64_C(0xffffffff))));
L_1803fa610_5:;
wr(s->r,519,1,(sx(rd(s->u,18,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa610_6:;
wr(s->r,518,1,(rd(s->u,18,4)==((U)UINT64_C(0x0))));
L_1803fa610_7:;
wr(s->u,8,4,(rd(s->u,18,4)&((U)UINT64_C(0xff))));
L_1803fa610_8:;
wr(s->u,12,1,pop(rd(s->u,8,4),4));
L_1803fa610_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fa610_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fa610_11:;
/* 1803fa613: je 0x1803fa62b */
L_1803fa613_0:;
L_1803fa613_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa62b);}
L_1803fa613_2:;
return UINT64_C(0x1803fa615);
}
uint64_t b_1803fa615(CPU*s){
/* 1803fa615: movss xmm1, dword ptr [rdx] */
L_1803fa615_0:;
L_1803fa615_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803fa615_2:;
wr(s->r,4672,4,rd(s->u,0,4));
L_1803fa615_3:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fa615_4:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fa615_5:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fa615_6:;
/* 1803fa619: mulss xmm1, xmm0 */
L_1803fa619_0:;
L_1803fa619_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803fa619_2:;
/* 1803fa61d: movss dword ptr [rdx], xmm1 */
L_1803fa61d_0:;
L_1803fa61d_1:;
wr(s->u,0,4,rd(s->r,4672,4));
L_1803fa61d_2:;
mw((uint64_t)rd(s->r,16,8),4,rd(s->u,0,4));
L_1803fa61d_3:;
/* 1803fa621: add rdx, 4 */
L_1803fa621_0:;
L_1803fa621_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803fa621_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x4)),8,0));
L_1803fa621_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803fa621_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa621_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fa621_6:;
wr(s->u,5,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fa621_7:;
wr(s->u,13,1,pop(rd(s->u,5,8),8));
L_1803fa621_8:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa621_9:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa621_10:;
/* 1803fa625: add r8d, -1 */
L_1803fa625_0:;
L_1803fa625_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803fa625_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fa625_3:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0xffffffff))));
L_1803fa625_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fa625_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa625_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fa625_7:;
wr(s->u,5,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fa625_8:;
wr(s->u,13,1,pop(rd(s->u,5,4),4));
L_1803fa625_9:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa625_10:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa625_11:;
/* 1803fa629: jne 0x1803fa615 */
L_1803fa629_0:;
L_1803fa629_1:;
wr(s->u,4,1,(!rd(s->r,518,1)));
L_1803fa629_2:;
if(rd(s->u,4,1)){goto L_1803fa615_0;}
L_1803fa629_3:;
return UINT64_C(0x1803fa62b);
}
uint64_t b_1803fa62b(CPU*s){
/* 1803fa62b: xor eax, eax */
L_1803fa62b_0:;
L_1803fa62b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa62b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa62b_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fa62b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa62b_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa62b_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa62b_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa62b_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fa62b_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa62b_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa62b_11:;
/* 1803fa62d: add rsp, 0x28 */
L_1803fa62d_0:;
L_1803fa62d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa62d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fa62d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fa62d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa62d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa62d_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa62d_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa62d_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa62d_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa62d_10:;
/* 1803fa631: ret  */
L_1803fa631_0:;
L_1803fa631_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa631_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa631_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa631_4:;
return UINT64_C(0x1803fa632);
}
uint64_t b_1803fa632(CPU*s){
/* 1803fa632: mov rcx, rdx */
L_1803fa632_0:;
L_1803fa632_1:;
wr(s->r,8,8,rd(s->r,16,8));
L_1803fa632_2:;
/* 1803fa635: mov edx, r8d */
L_1803fa635_0:;
L_1803fa635_1:;
wr(s->r,16,4,rd(s->r,128,4));
L_1803fa635_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fa635_3:;
/* 1803fa638: call 0x1803f9ed8 */
L_1803fa638_0:;
L_1803fa638_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fa638_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fa63d)));
L_1803fa638_3:;
return (uint64_t)UINT64_C(0x1803f9ed8);
L_1803fa638_4:;
return UINT64_C(0x1803fa63d);
}
uint64_t b_1803fa63d(CPU*s){
/* 1803fa63d: add rsp, 0x28 */
L_1803fa63d_0:;
L_1803fa63d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa63d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fa63d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fa63d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa63d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa63d_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa63d_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa63d_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa63d_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa63d_10:;
/* 1803fa641: ret  */
L_1803fa641_0:;
L_1803fa641_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa641_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa641_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa641_4:;
return UINT64_C(0x1803fa642);
}
uint64_t b_1803fa642(CPU*s){
/* 1803fa642: mov eax, 0xfffffffa */
L_1803fa642_0:;
L_1803fa642_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fa642_2:;
/* 1803fa647: add rsp, 0x28 */
L_1803fa647_0:;
L_1803fa647_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa647_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fa647_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fa647_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa647_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa647_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa647_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa647_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa647_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa647_10:;
/* 1803fa64b: ret  */
L_1803fa64b_0:;
L_1803fa64b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa64b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa64b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa64b_4:;
return UINT64_C(0x1803fa64c);
}
uint64_t b_1803fa64c(CPU*s){
/* 1803fa64c: mov eax, 0xfffffff8 */
L_1803fa64c_0:;
L_1803fa64c_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fa64c_2:;
/* 1803fa651: add rsp, 0x28 */
L_1803fa651_0:;
L_1803fa651_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa651_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fa651_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fa651_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa651_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa651_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa651_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa651_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa651_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa651_10:;
/* 1803fa655: ret  */
L_1803fa655_0:;
L_1803fa655_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa655_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa655_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa655_4:;
return UINT64_C(0x1803fa656);
}
uint64_t b_1803fa658(CPU*s){
/* 1803fa658: sub rsp, 0x28 */
L_1803fa658_0:;
L_1803fa658_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fa658_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fa658_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fa658_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa658_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa658_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa658_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa658_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa658_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa658_10:;
/* 1803fa65c: mov r9d, r8d */
L_1803fa65c_0:;
L_1803fa65c_1:;
wr(s->r,136,4,rd(s->r,128,4));
L_1803fa65c_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fa65c_3:;
/* 1803fa65f: test rcx, rcx */
L_1803fa65f_0:;
L_1803fa65f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa65f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa65f_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fa65f_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa65f_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fa65f_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fa65f_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa65f_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa65f_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa65f_10:;
/* 1803fa662: je 0x1803fa685 */
L_1803fa662_0:;
L_1803fa662_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa685);}
L_1803fa662_2:;
return UINT64_C(0x1803fa664);
}
uint64_t b_1803fa664(CPU*s){
/* 1803fa664: test rdx, rdx */
L_1803fa664_0:;
L_1803fa664_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa664_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa664_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fa664_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa664_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fa664_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fa664_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa664_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa664_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa664_10:;
/* 1803fa667: je 0x1803fa685 */
L_1803fa667_0:;
L_1803fa667_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa685);}
L_1803fa667_2:;
return UINT64_C(0x1803fa669);
}
uint64_t b_1803fa669(CPU*s){
/* 1803fa669: test r9d, r9d */
L_1803fa669_0:;
L_1803fa669_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa669_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa669_3:;
wr(s->u,9,4,(rd(s->r,136,4)&rd(s->r,136,4)));
L_1803fa669_4:;
wr(s->r,519,1,(sx(rd(s->u,9,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa669_5:;
wr(s->r,518,1,(rd(s->u,9,4)==((U)UINT64_C(0x0))));
L_1803fa669_6:;
wr(s->u,3,4,(rd(s->u,9,4)&((U)UINT64_C(0xff))));
L_1803fa669_7:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fa669_8:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fa669_9:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fa669_10:;
/* 1803fa66c: jg 0x1803fa678 */
L_1803fa66c_0:;
L_1803fa66c_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fa66c_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fa66c_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fa66c_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fa678);}
L_1803fa66c_5:;
return UINT64_C(0x1803fa66e);
}
uint64_t b_1803fa66e(CPU*s){
/* 1803fa66e: mov eax, 0xfffffffa */
L_1803fa66e_0:;
L_1803fa66e_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fa66e_2:;
/* 1803fa673: add rsp, 0x28 */
L_1803fa673_0:;
L_1803fa673_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa673_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fa673_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fa673_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa673_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa673_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa673_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa673_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa673_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa673_10:;
/* 1803fa677: ret  */
L_1803fa677_0:;
L_1803fa677_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa677_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa677_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa677_4:;
return UINT64_C(0x1803fa678);
}
uint64_t b_1803fa678(CPU*s){
/* 1803fa678: mov r8, rdx */
L_1803fa678_0:;
L_1803fa678_1:;
wr(s->r,128,8,rd(s->r,16,8));
L_1803fa678_2:;
/* 1803fa67b: call 0x180411938 */
L_1803fa67b_0:;
L_1803fa67b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fa67b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fa680)));
L_1803fa67b_3:;
return (uint64_t)UINT64_C(0x180411938);
L_1803fa67b_4:;
return UINT64_C(0x1803fa680);
}
uint64_t b_1803fa680(CPU*s){
/* 1803fa680: add rsp, 0x28 */
L_1803fa680_0:;
L_1803fa680_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa680_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fa680_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fa680_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa680_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa680_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa680_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa680_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa680_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa680_10:;
/* 1803fa684: ret  */
L_1803fa684_0:;
L_1803fa684_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa684_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa684_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa684_4:;
return UINT64_C(0x1803fa685);
}
uint64_t b_1803fa685(CPU*s){
/* 1803fa685: mov eax, 0xfffffff8 */
L_1803fa685_0:;
L_1803fa685_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fa685_2:;
/* 1803fa68a: add rsp, 0x28 */
L_1803fa68a_0:;
L_1803fa68a_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa68a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fa68a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fa68a_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa68a_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa68a_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa68a_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa68a_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa68a_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa68a_10:;
/* 1803fa68e: ret  */
L_1803fa68e_0:;
L_1803fa68e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa68e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa68e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa68e_4:;
return UINT64_C(0x1803fa68f);
}
uint64_t b_1803fa690(CPU*s){
/* 1803fa690: push r13 */
L_1803fa690_0:;
L_1803fa690_1:;
wr(s->u,0,8,rd(s->r,168,8));
L_1803fa690_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fa690_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fa690_4:;
/* 1803fa692: sub rsp, 0x20 */
L_1803fa692_0:;
L_1803fa692_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803fa692_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803fa692_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803fa692_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa692_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa692_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa692_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fa692_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fa692_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fa692_10:;
/* 1803fa696: movsxd r11, r9d */
L_1803fa696_0:;
L_1803fa696_1:;
wr(s->r,152,8,(U)sx(rd(s->r,136,4),4));
L_1803fa696_2:;
/* 1803fa699: test rcx, rcx */
L_1803fa699_0:;
L_1803fa699_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa699_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa699_3:;
wr(s->u,18,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fa699_4:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa699_5:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803fa699_6:;
wr(s->u,8,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803fa699_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fa699_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fa699_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fa699_10:;
/* 1803fa69c: je 0x1803fa86c */
L_1803fa69c_0:;
L_1803fa69c_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa86c);}
L_1803fa69c_2:;
return UINT64_C(0x1803fa6a2);
}
uint64_t b_1803fa6a2(CPU*s){
/* 1803fa6a2: test rdx, rdx */
L_1803fa6a2_0:;
L_1803fa6a2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa6a2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa6a2_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fa6a2_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa6a2_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fa6a2_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fa6a2_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa6a2_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa6a2_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa6a2_10:;
/* 1803fa6a5: je 0x1803fa86c */
L_1803fa6a5_0:;
L_1803fa6a5_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa86c);}
L_1803fa6a5_2:;
return UINT64_C(0x1803fa6ab);
}
uint64_t b_1803fa6ab(CPU*s){
/* 1803fa6ab: test r8, r8 */
L_1803fa6ab_0:;
L_1803fa6ab_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa6ab_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa6ab_3:;
wr(s->u,10,8,(rd(s->r,128,8)&rd(s->r,128,8)));
L_1803fa6ab_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa6ab_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fa6ab_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fa6ab_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa6ab_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa6ab_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa6ab_10:;
/* 1803fa6ae: je 0x1803fa86c */
L_1803fa6ae_0:;
L_1803fa6ae_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa86c);}
L_1803fa6ae_2:;
return UINT64_C(0x1803fa6b4);
}
uint64_t b_1803fa6b4(CPU*s){
/* 1803fa6b4: test r11, r11 */
L_1803fa6b4_0:;
L_1803fa6b4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa6b4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa6b4_3:;
wr(s->u,12,8,(rd(s->r,152,8)&rd(s->r,152,8)));
L_1803fa6b4_4:;
wr(s->r,519,1,(sx(rd(s->u,12,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa6b4_5:;
wr(s->r,518,1,(rd(s->u,12,8)==((U)UINT64_C(0x0))));
L_1803fa6b4_6:;
wr(s->u,2,8,(rd(s->u,12,8)&((U)UINT64_C(0xff))));
L_1803fa6b4_7:;
wr(s->u,10,1,pop(rd(s->u,2,8),8));
L_1803fa6b4_8:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fa6b4_9:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fa6b4_10:;
/* 1803fa6b7: jle 0x1803fa860 */
L_1803fa6b7_0:;
L_1803fa6b7_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa6b7_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fa6b7_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fa860);}
L_1803fa6b7_4:;
return UINT64_C(0x1803fa6bd);
}
uint64_t b_1803fa6bd(CPU*s){
/* 1803fa6bd: cmp r8, rcx */
L_1803fa6bd_0:;
L_1803fa6bd_1:;
wr(s->u,11,8,rd(s->r,8,8));
L_1803fa6bd_2:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->u,11,8)));
L_1803fa6bd_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->u,11,8),8,1));
L_1803fa6bd_4:;
wr(s->u,19,8,(rd(s->r,128,8)-rd(s->u,11,8)));
L_1803fa6bd_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa6bd_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fa6bd_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fa6bd_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa6bd_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa6bd_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa6bd_11:;
/* 1803fa6c0: jbe 0x1803fa6d4 */
L_1803fa6c0_0:;
L_1803fa6c0_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fa6c0_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa6d4);}
L_1803fa6c0_3:;
return UINT64_C(0x1803fa6c2);
}
uint64_t b_1803fa6c2(CPU*s){
/* 1803fa6c2: mov rax, r11 */
L_1803fa6c2_0:;
L_1803fa6c2_1:;
wr(s->r,0,8,rd(s->r,152,8));
L_1803fa6c2_2:;
/* 1803fa6c5: shl rax, 2 */
L_1803fa6c5_0:;
L_1803fa6c5_1:;
wr(s->u,71,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803fa6c5_2:;
wr(s->u,75,8,rd(s->r,0,8));
L_1803fa6c5_3:;
wr(s->r,0,8,((rd(s->u,71,4)>=64)?0:(rd(s->r,0,8)<<rd(s->u,71,4))));
L_1803fa6c5_4:;
wr(s->u,38,1,(rd(s->u,71,4)==((U)UINT64_C(0x0))));
L_1803fa6c5_5:;
wr(s->u,39,4,(rd(s->u,71,4)-((U)UINT64_C(0x1))));
L_1803fa6c5_6:;
wr(s->u,43,8,((rd(s->u,39,4)>=64)?0:(rd(s->u,75,8)<<rd(s->u,39,4))));
L_1803fa6c5_7:;
wr(s->u,51,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa6c5_8:;
wr(s->u,0,1,rd(s->u,38,1));
L_1803fa6c5_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fa6c5_10:;
wr(s->u,2,1,(!rd(s->u,38,1)));
L_1803fa6c5_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fa6c5_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,51,1)));
L_1803fa6c5_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fa6c5_14:;
wr(s->u,52,1,(rd(s->u,71,4)==((U)UINT64_C(0x1))));
L_1803fa6c5_15:;
wr(s->u,53,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa6c5_16:;
wr(s->u,54,1,(rd(s->r,512,1)^rd(s->u,53,1)));
L_1803fa6c5_17:;
wr(s->u,0,1,rd(s->u,52,1));
L_1803fa6c5_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,54,1)));
L_1803fa6c5_19:;
wr(s->u,2,1,(!rd(s->u,52,1)));
L_1803fa6c5_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fa6c5_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fa6c5_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fa6c5_23:;
wr(s->u,15,1,(rd(s->u,71,4)!=((U)UINT64_C(0x0))));
L_1803fa6c5_24:;
wr(s->u,16,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa6c5_25:;
wr(s->u,17,1,(!rd(s->u,15,1)));
L_1803fa6c5_26:;
wr(s->u,18,1,(rd(s->u,17,1)&rd(s->r,519,1)));
L_1803fa6c5_27:;
wr(s->u,19,1,(rd(s->u,15,1)&rd(s->u,16,1)));
L_1803fa6c5_28:;
wr(s->r,519,1,(rd(s->u,18,1)|rd(s->u,19,1)));
L_1803fa6c5_29:;
wr(s->u,20,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fa6c5_30:;
wr(s->u,21,1,(!rd(s->u,15,1)));
L_1803fa6c5_31:;
wr(s->u,22,1,(rd(s->u,21,1)&rd(s->r,518,1)));
L_1803fa6c5_32:;
wr(s->u,23,1,(rd(s->u,15,1)&rd(s->u,20,1)));
L_1803fa6c5_33:;
wr(s->r,518,1,(rd(s->u,22,1)|rd(s->u,23,1)));
L_1803fa6c5_34:;
wr(s->u,24,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fa6c5_35:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803fa6c5_36:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803fa6c5_37:;
wr(s->u,34,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803fa6c5_38:;
wr(s->u,35,1,(!rd(s->u,15,1)));
L_1803fa6c5_39:;
wr(s->u,36,1,(rd(s->u,35,1)&rd(s->r,514,1)));
L_1803fa6c5_40:;
wr(s->u,37,1,(rd(s->u,15,1)&rd(s->u,34,1)));
L_1803fa6c5_41:;
wr(s->r,514,1,(rd(s->u,36,1)|rd(s->u,37,1)));
L_1803fa6c5_42:;
/* 1803fa6c9: mov r9, r8 */
L_1803fa6c9_0:;
L_1803fa6c9_1:;
wr(s->r,136,8,rd(s->r,128,8));
L_1803fa6c9_2:;
/* 1803fa6cc: sub r9, rcx */
L_1803fa6cc_0:;
L_1803fa6cc_1:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->r,8,8)));
L_1803fa6cc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->r,8,8),8,1));
L_1803fa6cc_3:;
wr(s->r,136,8,(rd(s->r,136,8)-rd(s->r,8,8)));
L_1803fa6cc_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa6cc_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fa6cc_6:;
wr(s->u,5,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fa6cc_7:;
wr(s->u,13,1,pop(rd(s->u,5,8),8));
L_1803fa6cc_8:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa6cc_9:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa6cc_10:;
/* 1803fa6cf: cmp rax, r9 */
L_1803fa6cf_0:;
L_1803fa6cf_1:;
wr(s->u,55,8,rd(s->r,136,8));
L_1803fa6cf_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,55,8)));
L_1803fa6cf_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,55,8),8,1));
L_1803fa6cf_4:;
wr(s->u,63,8,(rd(s->r,0,8)-rd(s->u,55,8)));
L_1803fa6cf_5:;
wr(s->r,519,1,(sx(rd(s->u,63,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa6cf_6:;
wr(s->r,518,1,(rd(s->u,63,8)==((U)UINT64_C(0x0))));
L_1803fa6cf_7:;
wr(s->u,5,8,(rd(s->u,63,8)&((U)UINT64_C(0xff))));
L_1803fa6cf_8:;
wr(s->u,13,1,pop(rd(s->u,5,8),8));
L_1803fa6cf_9:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa6cf_10:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa6cf_11:;
/* 1803fa6d2: jb 0x1803fa6f3 */
L_1803fa6d2_0:;
L_1803fa6d2_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fa6f3);}
L_1803fa6d2_2:;
return UINT64_C(0x1803fa6d4);
}
uint64_t b_1803fa6d4(CPU*s){
/* 1803fa6d4: cmp rcx, r8 */
L_1803fa6d4_0:;
L_1803fa6d4_1:;
wr(s->u,11,8,rd(s->r,128,8));
L_1803fa6d4_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,11,8)));
L_1803fa6d4_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,11,8),8,1));
L_1803fa6d4_4:;
wr(s->u,19,8,(rd(s->r,8,8)-rd(s->u,11,8)));
L_1803fa6d4_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa6d4_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fa6d4_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fa6d4_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa6d4_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa6d4_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa6d4_11:;
/* 1803fa6d7: jbe 0x1803fa832 */
L_1803fa6d7_0:;
L_1803fa6d7_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fa6d7_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa832);}
L_1803fa6d7_3:;
return UINT64_C(0x1803fa6dd);
}
uint64_t b_1803fa6dd(CPU*s){
/* 1803fa6dd: mov rax, r11 */
L_1803fa6dd_0:;
L_1803fa6dd_1:;
wr(s->r,0,8,rd(s->r,152,8));
L_1803fa6dd_2:;
/* 1803fa6e0: shl rax, 2 */
L_1803fa6e0_0:;
L_1803fa6e0_1:;
wr(s->u,72,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803fa6e0_2:;
wr(s->u,76,8,rd(s->r,0,8));
L_1803fa6e0_3:;
wr(s->r,0,8,((rd(s->u,72,4)>=64)?0:(rd(s->r,0,8)<<rd(s->u,72,4))));
L_1803fa6e0_4:;
wr(s->u,39,1,(rd(s->u,72,4)==((U)UINT64_C(0x0))));
L_1803fa6e0_5:;
wr(s->u,40,4,(rd(s->u,72,4)-((U)UINT64_C(0x1))));
L_1803fa6e0_6:;
wr(s->u,44,8,((rd(s->u,40,4)>=64)?0:(rd(s->u,76,8)<<rd(s->u,40,4))));
L_1803fa6e0_7:;
wr(s->u,52,1,(sx(rd(s->u,44,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa6e0_8:;
wr(s->u,0,1,rd(s->u,39,1));
L_1803fa6e0_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fa6e0_10:;
wr(s->u,2,1,(!rd(s->u,39,1)));
L_1803fa6e0_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fa6e0_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,52,1)));
L_1803fa6e0_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fa6e0_14:;
wr(s->u,53,1,(rd(s->u,72,4)==((U)UINT64_C(0x1))));
L_1803fa6e0_15:;
wr(s->u,54,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa6e0_16:;
wr(s->u,55,1,(rd(s->r,512,1)^rd(s->u,54,1)));
L_1803fa6e0_17:;
wr(s->u,0,1,rd(s->u,53,1));
L_1803fa6e0_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,55,1)));
L_1803fa6e0_19:;
wr(s->u,2,1,(!rd(s->u,53,1)));
L_1803fa6e0_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fa6e0_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fa6e0_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fa6e0_23:;
wr(s->u,16,1,(rd(s->u,72,4)!=((U)UINT64_C(0x0))));
L_1803fa6e0_24:;
wr(s->u,17,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa6e0_25:;
wr(s->u,18,1,(!rd(s->u,16,1)));
L_1803fa6e0_26:;
wr(s->u,19,1,(rd(s->u,18,1)&rd(s->r,519,1)));
L_1803fa6e0_27:;
wr(s->u,20,1,(rd(s->u,16,1)&rd(s->u,17,1)));
L_1803fa6e0_28:;
wr(s->r,519,1,(rd(s->u,19,1)|rd(s->u,20,1)));
L_1803fa6e0_29:;
wr(s->u,21,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fa6e0_30:;
wr(s->u,22,1,(!rd(s->u,16,1)));
L_1803fa6e0_31:;
wr(s->u,23,1,(rd(s->u,22,1)&rd(s->r,518,1)));
L_1803fa6e0_32:;
wr(s->u,24,1,(rd(s->u,16,1)&rd(s->u,21,1)));
L_1803fa6e0_33:;
wr(s->r,518,1,(rd(s->u,23,1)|rd(s->u,24,1)));
L_1803fa6e0_34:;
wr(s->u,25,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fa6e0_35:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fa6e0_36:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fa6e0_37:;
wr(s->u,35,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fa6e0_38:;
wr(s->u,36,1,(!rd(s->u,16,1)));
L_1803fa6e0_39:;
wr(s->u,37,1,(rd(s->u,36,1)&rd(s->r,514,1)));
L_1803fa6e0_40:;
wr(s->u,38,1,(rd(s->u,16,1)&rd(s->u,35,1)));
L_1803fa6e0_41:;
wr(s->r,514,1,(rd(s->u,37,1)|rd(s->u,38,1)));
L_1803fa6e0_42:;
/* 1803fa6e4: mov r9, rcx */
L_1803fa6e4_0:;
L_1803fa6e4_1:;
wr(s->r,136,8,rd(s->r,8,8));
L_1803fa6e4_2:;
/* 1803fa6e7: sub r9, r8 */
L_1803fa6e7_0:;
L_1803fa6e7_1:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->r,128,8)));
L_1803fa6e7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->r,128,8),8,1));
L_1803fa6e7_3:;
wr(s->r,136,8,(rd(s->r,136,8)-rd(s->r,128,8)));
L_1803fa6e7_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa6e7_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fa6e7_6:;
wr(s->u,6,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fa6e7_7:;
wr(s->u,14,1,pop(rd(s->u,6,8),8));
L_1803fa6e7_8:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_1803fa6e7_9:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_1803fa6e7_10:;
/* 1803fa6ea: cmp rax, r9 */
L_1803fa6ea_0:;
L_1803fa6ea_1:;
wr(s->u,56,8,rd(s->r,136,8));
L_1803fa6ea_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,56,8)));
L_1803fa6ea_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,56,8),8,1));
L_1803fa6ea_4:;
wr(s->u,64,8,(rd(s->r,0,8)-rd(s->u,56,8)));
L_1803fa6ea_5:;
wr(s->r,519,1,(sx(rd(s->u,64,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa6ea_6:;
wr(s->r,518,1,(rd(s->u,64,8)==((U)UINT64_C(0x0))));
L_1803fa6ea_7:;
wr(s->u,6,8,(rd(s->u,64,8)&((U)UINT64_C(0xff))));
L_1803fa6ea_8:;
wr(s->u,14,1,pop(rd(s->u,6,8),8));
L_1803fa6ea_9:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_1803fa6ea_10:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_1803fa6ea_11:;
/* 1803fa6ed: jae 0x1803fa832 */
L_1803fa6ed_0:;
L_1803fa6ed_1:;
wr(s->u,5,1,(!rd(s->r,512,1)));
L_1803fa6ed_2:;
if(rd(s->u,5,1)){return UINT64_C(0x1803fa832);}
L_1803fa6ed_3:;
return UINT64_C(0x1803fa6f3);
}
uint64_t b_1803fa6f3(CPU*s){
/* 1803fa6f3: cmp r8, rdx */
L_1803fa6f3_0:;
L_1803fa6f3_1:;
wr(s->u,11,8,rd(s->r,16,8));
L_1803fa6f3_2:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->u,11,8)));
L_1803fa6f3_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->u,11,8),8,1));
L_1803fa6f3_4:;
wr(s->u,19,8,(rd(s->r,128,8)-rd(s->u,11,8)));
L_1803fa6f3_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa6f3_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fa6f3_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fa6f3_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa6f3_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa6f3_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa6f3_11:;
/* 1803fa6f6: jbe 0x1803fa703 */
L_1803fa6f6_0:;
L_1803fa6f6_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fa6f6_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa703);}
L_1803fa6f6_3:;
return UINT64_C(0x1803fa6f8);
}
uint64_t b_1803fa6f8(CPU*s){
/* 1803fa6f8: mov r9, r8 */
L_1803fa6f8_0:;
L_1803fa6f8_1:;
wr(s->r,136,8,rd(s->r,128,8));
L_1803fa6f8_2:;
/* 1803fa6fb: sub r9, rdx */
L_1803fa6fb_0:;
L_1803fa6fb_1:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->r,16,8)));
L_1803fa6fb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->r,16,8),8,1));
L_1803fa6fb_3:;
wr(s->r,136,8,(rd(s->r,136,8)-rd(s->r,16,8)));
L_1803fa6fb_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa6fb_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fa6fb_6:;
wr(s->u,0,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fa6fb_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa6fb_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa6fb_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa6fb_10:;
/* 1803fa6fe: cmp rax, r9 */
L_1803fa6fe_0:;
L_1803fa6fe_1:;
wr(s->u,10,8,rd(s->r,136,8));
L_1803fa6fe_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,10,8)));
L_1803fa6fe_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,10,8),8,1));
L_1803fa6fe_4:;
wr(s->u,18,8,(rd(s->r,0,8)-rd(s->u,10,8)));
L_1803fa6fe_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa6fe_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803fa6fe_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803fa6fe_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa6fe_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa6fe_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa6fe_11:;
/* 1803fa701: jb 0x1803fa71b */
L_1803fa701_0:;
L_1803fa701_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fa71b);}
L_1803fa701_2:;
return UINT64_C(0x1803fa703);
}
uint64_t b_1803fa703(CPU*s){
/* 1803fa703: cmp rdx, r8 */
L_1803fa703_0:;
L_1803fa703_1:;
wr(s->u,11,8,rd(s->r,128,8));
L_1803fa703_2:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,11,8)));
L_1803fa703_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,11,8),8,1));
L_1803fa703_4:;
wr(s->u,19,8,(rd(s->r,16,8)-rd(s->u,11,8)));
L_1803fa703_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa703_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fa703_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fa703_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa703_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa703_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa703_11:;
/* 1803fa706: jbe 0x1803fa832 */
L_1803fa706_0:;
L_1803fa706_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fa706_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa832);}
L_1803fa706_3:;
return UINT64_C(0x1803fa70c);
}
uint64_t b_1803fa70c(CPU*s){
/* 1803fa70c: mov r9, rdx */
L_1803fa70c_0:;
L_1803fa70c_1:;
wr(s->r,136,8,rd(s->r,16,8));
L_1803fa70c_2:;
/* 1803fa70f: sub r9, r8 */
L_1803fa70f_0:;
L_1803fa70f_1:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->r,128,8)));
L_1803fa70f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->r,128,8),8,1));
L_1803fa70f_3:;
wr(s->r,136,8,(rd(s->r,136,8)-rd(s->r,128,8)));
L_1803fa70f_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa70f_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fa70f_6:;
wr(s->u,1,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fa70f_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa70f_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa70f_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa70f_10:;
/* 1803fa712: cmp rax, r9 */
L_1803fa712_0:;
L_1803fa712_1:;
wr(s->u,11,8,rd(s->r,136,8));
L_1803fa712_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,11,8)));
L_1803fa712_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,11,8),8,1));
L_1803fa712_4:;
wr(s->u,19,8,(rd(s->r,0,8)-rd(s->u,11,8)));
L_1803fa712_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa712_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fa712_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fa712_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa712_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa712_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa712_11:;
/* 1803fa715: jae 0x1803fa832 */
L_1803fa715_0:;
L_1803fa715_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803fa715_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa832);}
L_1803fa715_3:;
return UINT64_C(0x1803fa71b);
}
uint64_t b_1803fa71b(CPU*s){
/* 1803fa71b: mov r10, r8 */
L_1803fa71b_0:;
L_1803fa71b_1:;
wr(s->r,144,8,rd(s->r,128,8));
L_1803fa71b_2:;
/* 1803fa71e: and r10, 0xf */
L_1803fa71e_0:;
L_1803fa71e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa71e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa71e_3:;
wr(s->r,144,8,(rd(s->r,144,8)&((U)UINT64_C(0xf))));
L_1803fa71e_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa71e_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803fa71e_6:;
wr(s->u,0,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803fa71e_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa71e_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa71e_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa71e_10:;
/* 1803fa722: test r10d, r10d */
L_1803fa722_0:;
L_1803fa722_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa722_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa722_3:;
wr(s->u,10,4,(rd(s->r,144,4)&rd(s->r,144,4)));
L_1803fa722_4:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa722_5:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fa722_6:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fa722_7:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fa722_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa722_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa722_10:;
/* 1803fa725: je 0x1803fa73f */
L_1803fa725_0:;
L_1803fa725_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa73f);}
L_1803fa725_2:;
return UINT64_C(0x1803fa727);
}
uint64_t b_1803fa727(CPU*s){
/* 1803fa727: test r10d, 3 */
L_1803fa727_0:;
L_1803fa727_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa727_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa727_3:;
wr(s->u,7,4,(rd(s->r,144,4)&((U)UINT64_C(0x3))));
L_1803fa727_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa727_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803fa727_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803fa727_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fa727_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fa727_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fa727_10:;
/* 1803fa72e: jne 0x1803fa85c */
L_1803fa72e_0:;
L_1803fa72e_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fa72e_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa85c);}
L_1803fa72e_3:;
return UINT64_C(0x1803fa734);
}
uint64_t b_1803fa734(CPU*s){
/* 1803fa734: neg r10d */
L_1803fa734_0:;
L_1803fa734_1:;
wr(s->r,512,1,(rd(s->r,144,4)!=((U)UINT64_C(0x0))));
L_1803fa734_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,144,4),4,1));
L_1803fa734_3:;
wr(s->r,144,4,(-rd(s->r,144,4)));
L_1803fa734_4:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa734_5:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fa734_6:;
wr(s->u,14,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fa734_7:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fa734_8:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fa734_9:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fa734_10:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fa734_11:;
/* 1803fa737: add r10d, 0x10 */
L_1803fa737_0:;
L_1803fa737_1:;
wr(s->r,512,1,(((rd(s->r,144,4)+((U)UINT64_C(0x10)))&(((U)1<<32)-1))<rd(s->r,144,4)));
L_1803fa737_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x10)),4,0));
L_1803fa737_3:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x10))));
L_1803fa737_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fa737_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa737_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fa737_7:;
wr(s->u,14,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fa737_8:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fa737_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fa737_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fa737_11:;
/* 1803fa73b: shr r10d, 2 */
L_1803fa73b_0:;
L_1803fa73b_1:;
wr(s->u,75,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803fa73b_2:;
wr(s->u,79,4,rd(s->r,144,4));
L_1803fa73b_3:;
wr(s->r,144,4,((rd(s->u,75,4)>=32)?0:(rd(s->r,144,4)>>rd(s->u,75,4))));
L_1803fa73b_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fa73b_5:;
wr(s->u,43,1,(rd(s->u,75,4)==((U)UINT64_C(0x0))));
L_1803fa73b_6:;
wr(s->u,44,4,(rd(s->u,75,4)-((U)UINT64_C(0x1))));
L_1803fa73b_7:;
wr(s->u,48,4,((rd(s->u,44,4)>=32)?0:(rd(s->u,79,4)>>rd(s->u,44,4))));
L_1803fa73b_8:;
wr(s->u,52,4,(rd(s->u,48,4)&((U)UINT64_C(0x1))));
L_1803fa73b_9:;
wr(s->u,56,1,(rd(s->u,52,4)!=((U)UINT64_C(0x0))));
L_1803fa73b_10:;
wr(s->u,0,1,rd(s->u,43,1));
L_1803fa73b_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fa73b_12:;
wr(s->u,2,1,(!rd(s->u,43,1)));
L_1803fa73b_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fa73b_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,56,1)));
L_1803fa73b_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fa73b_16:;
wr(s->u,57,1,(rd(s->u,75,4)==((U)UINT64_C(0x1))));
L_1803fa73b_17:;
wr(s->u,58,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa73b_18:;
wr(s->u,0,1,rd(s->u,57,1));
L_1803fa73b_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fa73b_20:;
wr(s->u,2,1,(!rd(s->u,57,1)));
L_1803fa73b_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fa73b_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,58,1)));
L_1803fa73b_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fa73b_24:;
wr(s->u,24,1,(rd(s->u,75,4)!=((U)UINT64_C(0x0))));
L_1803fa73b_25:;
wr(s->u,25,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa73b_26:;
wr(s->u,26,1,(!rd(s->u,24,1)));
L_1803fa73b_27:;
wr(s->u,27,1,(rd(s->u,26,1)&rd(s->r,519,1)));
L_1803fa73b_28:;
wr(s->u,28,1,(rd(s->u,24,1)&rd(s->u,25,1)));
L_1803fa73b_29:;
wr(s->r,519,1,(rd(s->u,27,1)|rd(s->u,28,1)));
L_1803fa73b_30:;
wr(s->u,29,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fa73b_31:;
wr(s->u,30,1,(!rd(s->u,24,1)));
L_1803fa73b_32:;
wr(s->u,31,1,(rd(s->u,30,1)&rd(s->r,518,1)));
L_1803fa73b_33:;
wr(s->u,32,1,(rd(s->u,24,1)&rd(s->u,29,1)));
L_1803fa73b_34:;
wr(s->r,518,1,(rd(s->u,31,1)|rd(s->u,32,1)));
L_1803fa73b_35:;
wr(s->u,33,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fa73b_36:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803fa73b_37:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803fa73b_38:;
wr(s->u,39,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803fa73b_39:;
wr(s->u,40,1,(!rd(s->u,24,1)));
L_1803fa73b_40:;
wr(s->u,41,1,(rd(s->u,40,1)&rd(s->r,514,1)));
L_1803fa73b_41:;
wr(s->u,42,1,(rd(s->u,24,1)&rd(s->u,39,1)));
L_1803fa73b_42:;
wr(s->r,514,1,(rd(s->u,41,1)|rd(s->u,42,1)));
L_1803fa73b_43:;
/* 1803fa73f: movsxd r9, r10d */
L_1803fa73f_0:;
L_1803fa73f_1:;
wr(s->r,136,8,(U)sx(rd(s->r,144,4),4));
L_1803fa73f_2:;
/* 1803fa742: lea rax, [r9 + 8] */
L_1803fa742_0:;
L_1803fa742_1:;
wr(s->u,5,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803fa742_2:;
wr(s->r,0,8,rd(s->u,5,8));
L_1803fa742_3:;
/* 1803fa746: cmp r11, rax */
L_1803fa746_0:;
L_1803fa746_1:;
wr(s->u,59,8,rd(s->r,0,8));
L_1803fa746_2:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->u,59,8)));
L_1803fa746_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->u,59,8),8,1));
L_1803fa746_4:;
wr(s->u,67,8,(rd(s->r,152,8)-rd(s->u,59,8)));
L_1803fa746_5:;
wr(s->r,519,1,(sx(rd(s->u,67,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa746_6:;
wr(s->r,518,1,(rd(s->u,67,8)==((U)UINT64_C(0x0))));
L_1803fa746_7:;
wr(s->u,14,8,(rd(s->u,67,8)&((U)UINT64_C(0xff))));
L_1803fa746_8:;
wr(s->u,22,1,pop(rd(s->u,14,8),8));
L_1803fa746_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fa746_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fa746_11:;
/* 1803fa749: jl 0x1803fa85c */
L_1803fa749_0:;
L_1803fa749_1:;
wr(s->u,13,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa749_2:;
if(rd(s->u,13,1)){return UINT64_C(0x1803fa85c);}
L_1803fa749_3:;
return UINT64_C(0x1803fa74f);
}
uint64_t b_1803fa73f(CPU*s){
/* 1803fa73f: movsxd r9, r10d */
L_1803fa73f_0:;
L_1803fa73f_1:;
wr(s->r,136,8,(U)sx(rd(s->r,144,4),4));
L_1803fa73f_2:;
/* 1803fa742: lea rax, [r9 + 8] */
L_1803fa742_0:;
L_1803fa742_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803fa742_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803fa742_3:;
/* 1803fa746: cmp r11, rax */
L_1803fa746_0:;
L_1803fa746_1:;
wr(s->u,19,8,rd(s->r,0,8));
L_1803fa746_2:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->u,19,8)));
L_1803fa746_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->u,19,8),8,1));
L_1803fa746_4:;
wr(s->u,27,8,(rd(s->r,152,8)-rd(s->u,19,8)));
L_1803fa746_5:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa746_6:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803fa746_7:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803fa746_8:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fa746_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fa746_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fa746_11:;
/* 1803fa749: jl 0x1803fa85c */
L_1803fa749_0:;
L_1803fa749_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa749_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803fa85c);}
L_1803fa749_3:;
return UINT64_C(0x1803fa74f);
}
uint64_t b_1803fa74f(CPU*s){
/* 1803fa74f: mov r13d, r11d */
L_1803fa74f_0:;
L_1803fa74f_1:;
wr(s->r,168,4,rd(s->r,152,4));
L_1803fa74f_2:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fa74f_3:;
/* 1803fa752: mov eax, r13d */
L_1803fa752_0:;
L_1803fa752_1:;
wr(s->r,0,4,rd(s->r,168,4));
L_1803fa752_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa752_3:;
/* 1803fa755: sub eax, r10d */
L_1803fa755_0:;
L_1803fa755_1:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,144,4)));
L_1803fa755_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,144,4),4,1));
L_1803fa755_3:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->r,144,4)));
L_1803fa755_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa755_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa755_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa755_7:;
wr(s->u,2,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa755_8:;
wr(s->u,10,1,pop(rd(s->u,2,4),4));
L_1803fa755_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fa755_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fa755_11:;
/* 1803fa758: and eax, 7 */
L_1803fa758_0:;
L_1803fa758_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa758_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa758_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x7))));
L_1803fa758_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa758_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa758_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa758_7:;
wr(s->u,2,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa758_8:;
wr(s->u,10,1,pop(rd(s->u,2,4),4));
L_1803fa758_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fa758_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fa758_11:;
/* 1803fa75b: sub r13d, eax */
L_1803fa75b_0:;
L_1803fa75b_1:;
wr(s->r,512,1,(rd(s->r,168,4)<rd(s->r,0,4)));
L_1803fa75b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,4),rd(s->r,0,4),4,1));
L_1803fa75b_3:;
wr(s->r,168,4,(rd(s->r,168,4)-rd(s->r,0,4)));
L_1803fa75b_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fa75b_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa75b_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fa75b_7:;
wr(s->u,2,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fa75b_8:;
wr(s->u,10,1,pop(rd(s->u,2,4),4));
L_1803fa75b_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fa75b_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fa75b_11:;
/* 1803fa75e: movsxd rax, r13d */
L_1803fa75e_0:;
L_1803fa75e_1:;
wr(s->r,0,8,(U)sx(rd(s->r,168,4),4));
L_1803fa75e_2:;
/* 1803fa761: xor r13d, r13d */
L_1803fa761_0:;
L_1803fa761_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa761_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa761_3:;
wr(s->r,168,4,(rd(s->r,168,4)^rd(s->r,168,4)));
L_1803fa761_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fa761_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa761_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fa761_7:;
wr(s->u,2,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fa761_8:;
wr(s->u,10,1,pop(rd(s->u,2,4),4));
L_1803fa761_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fa761_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fa761_11:;
/* 1803fa764: test r9, r9 */
L_1803fa764_0:;
L_1803fa764_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa764_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa764_3:;
wr(s->u,12,8,(rd(s->r,136,8)&rd(s->r,136,8)));
L_1803fa764_4:;
wr(s->r,519,1,(sx(rd(s->u,12,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa764_5:;
wr(s->r,518,1,(rd(s->u,12,8)==((U)UINT64_C(0x0))));
L_1803fa764_6:;
wr(s->u,2,8,(rd(s->u,12,8)&((U)UINT64_C(0xff))));
L_1803fa764_7:;
wr(s->u,10,1,pop(rd(s->u,2,8),8));
L_1803fa764_8:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fa764_9:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fa764_10:;
/* 1803fa767: jle 0x1803fa78a */
L_1803fa767_0:;
L_1803fa767_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa767_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fa767_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fa78a);}
L_1803fa767_4:;
return UINT64_C(0x1803fa769);
}
uint64_t b_1803fa769(CPU*s){
/* 1803fa769: movss xmm0, dword ptr [rcx + r13*4] */
L_1803fa769_0:;
L_1803fa769_1:;
wr(s->u,0,8,(rd(s->r,168,8)*((U)UINT64_C(0x4))));
L_1803fa769_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa769_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa769_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803fa769_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fa769_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fa769_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fa769_8:;
/* 1803fa76f: mulss xmm0, dword ptr [rdx + r13*4] */
L_1803fa76f_0:;
L_1803fa76f_1:;
wr(s->u,0,8,(rd(s->r,168,8)*((U)UINT64_C(0x4))));
L_1803fa76f_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fa76f_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa76f_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803fa76f_5:;
/* 1803fa775: addss xmm0, dword ptr [r8 + r13*4] */
L_1803fa775_0:;
L_1803fa775_1:;
wr(s->u,0,8,(rd(s->r,168,8)*((U)UINT64_C(0x4))));
L_1803fa775_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fa775_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa775_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,16,4),4),4));
L_1803fa775_5:;
/* 1803fa77b: movss dword ptr [r8 + r13*4], xmm0 */
L_1803fa77b_0:;
L_1803fa77b_1:;
wr(s->u,0,8,(rd(s->r,168,8)*((U)UINT64_C(0x4))));
L_1803fa77b_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fa77b_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fa77b_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fa77b_5:;
/* 1803fa781: add r13, 1 */
L_1803fa781_0:;
L_1803fa781_1:;
wr(s->r,512,1,(((rd(s->r,168,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,168,8)));
L_1803fa781_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,8),((U)UINT64_C(0x1)),8,0));
L_1803fa781_3:;
wr(s->r,168,8,(rd(s->r,168,8)+((U)UINT64_C(0x1))));
L_1803fa781_4:;
wr(s->r,519,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa781_5:;
wr(s->r,518,1,(rd(s->r,168,8)==((U)UINT64_C(0x0))));
L_1803fa781_6:;
wr(s->u,21,8,(rd(s->r,168,8)&((U)UINT64_C(0xff))));
L_1803fa781_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa781_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa781_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa781_10:;
/* 1803fa785: cmp r13, r9 */
L_1803fa785_0:;
L_1803fa785_1:;
wr(s->u,31,8,rd(s->r,136,8));
L_1803fa785_2:;
wr(s->r,512,1,(rd(s->r,168,8)<rd(s->u,31,8)));
L_1803fa785_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,8),rd(s->u,31,8),8,1));
L_1803fa785_4:;
wr(s->u,39,8,(rd(s->r,168,8)-rd(s->u,31,8)));
L_1803fa785_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa785_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fa785_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fa785_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa785_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa785_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa785_11:;
/* 1803fa788: jl 0x1803fa769 */
L_1803fa788_0:;
L_1803fa788_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa788_2:;
if(rd(s->u,20,1)){goto L_1803fa769_0;}
L_1803fa788_3:;
return UINT64_C(0x1803fa78a);
}
uint64_t b_1803fa78a(CPU*s){
/* 1803fa78a: movsxd r10, r10d */
L_1803fa78a_0:;
L_1803fa78a_1:;
wr(s->r,144,8,(U)sx(rd(s->r,144,4),4));
L_1803fa78a_2:;
/* 1803fa78d: lea r13, [rdx + r10*4] */
L_1803fa78d_0:;
L_1803fa78d_1:;
wr(s->u,0,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fa78d_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fa78d_3:;
wr(s->r,168,8,rd(s->u,8,8));
L_1803fa78d_4:;
/* 1803fa791: test r13, 0xf */
L_1803fa791_0:;
L_1803fa791_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa791_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa791_3:;
wr(s->u,26,8,(rd(s->r,168,8)&((U)UINT64_C(0xf))));
L_1803fa791_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa791_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803fa791_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803fa791_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803fa791_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fa791_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fa791_10:;
/* 1803fa798: je 0x1803fa7d7 */
L_1803fa798_0:;
L_1803fa798_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa7d7);}
L_1803fa798_2:;
return UINT64_C(0x1803fa79a);
}
uint64_t b_1803fa79a(CPU*s){
/* 1803fa79a: movups xmm1, xmmword ptr [rcx + r9*4] */
L_1803fa79a_0:;
L_1803fa79a_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa79a_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa79a_3:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803fa79a_4:;
wr(s->u,99,16,rd(s->u,40,16));
L_1803fa79a_5:;
wr(s->r,4672,4,rd(s->u,99,4));
L_1803fa79a_6:;
wr(s->r,4676,4,rd(s->u,103,4));
L_1803fa79a_7:;
wr(s->r,4680,4,rd(s->u,107,4));
L_1803fa79a_8:;
wr(s->r,4684,4,rd(s->u,111,4));
L_1803fa79a_9:;
/* 1803fa79f: movups xmm0, xmmword ptr [rdx + r9*4] */
L_1803fa79f_0:;
L_1803fa79f_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa79f_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fa79f_3:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803fa79f_4:;
wr(s->u,99,16,rd(s->u,40,16));
L_1803fa79f_5:;
wr(s->r,4608,4,rd(s->u,99,4));
L_1803fa79f_6:;
wr(s->r,4612,4,rd(s->u,103,4));
L_1803fa79f_7:;
wr(s->r,4616,4,rd(s->u,107,4));
L_1803fa79f_8:;
wr(s->r,4620,4,rd(s->u,111,4));
L_1803fa79f_9:;
/* 1803fa7a4: mulps xmm1, xmm0 */
L_1803fa7a4_0:;
L_1803fa7a4_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803fa7a4_2:;
wr(s->r,4676,4,fb(fv(rd(s->r,4676,4),4)*fv(rd(s->r,4612,4),4),4));
L_1803fa7a4_3:;
wr(s->r,4680,4,fb(fv(rd(s->r,4680,4),4)*fv(rd(s->r,4616,4),4),4));
L_1803fa7a4_4:;
wr(s->r,4684,4,fb(fv(rd(s->r,4684,4),4)*fv(rd(s->r,4620,4),4),4));
L_1803fa7a4_5:;
/* 1803fa7a7: addps xmm1, xmmword ptr [r8 + r9*4] */
L_1803fa7a7_0:;
L_1803fa7a7_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa7a7_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fa7a7_3:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803fa7a7_4:;
wr(s->u,83,16,rd(s->u,40,16));
L_1803fa7a7_5:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->u,83,4),4),4));
L_1803fa7a7_6:;
wr(s->r,4676,4,fb(fv(rd(s->r,4676,4),4)+fv(rd(s->u,87,4),4),4));
L_1803fa7a7_7:;
wr(s->r,4680,4,fb(fv(rd(s->r,4680,4),4)+fv(rd(s->u,91,4),4),4));
L_1803fa7a7_8:;
wr(s->r,4684,4,fb(fv(rd(s->r,4684,4),4)+fv(rd(s->u,95,4),4),4));
L_1803fa7a7_9:;
/* 1803fa7ac: movaps xmmword ptr [r8 + r9*4], xmm1 */
L_1803fa7ac_0:;
L_1803fa7ac_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa7ac_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fa7ac_3:;
wr(s->u,40,16,rd(s->r,4672,16));
L_1803fa7ac_4:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,40,16));
L_1803fa7ac_5:;
/* 1803fa7b1: movups xmm3, xmmword ptr [rcx + r9*4 + 0x10] */
L_1803fa7b1_0:;
L_1803fa7b1_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,8,8)));
L_1803fa7b1_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa7b1_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fa7b1_4:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,32,8),16));
L_1803fa7b1_5:;
wr(s->u,99,16,rd(s->u,40,16));
L_1803fa7b1_6:;
wr(s->r,4800,4,rd(s->u,99,4));
L_1803fa7b1_7:;
wr(s->r,4804,4,rd(s->u,103,4));
L_1803fa7b1_8:;
wr(s->r,4808,4,rd(s->u,107,4));
L_1803fa7b1_9:;
wr(s->r,4812,4,rd(s->u,111,4));
L_1803fa7b1_10:;
/* 1803fa7b7: movups xmm2, xmmword ptr [rdx + r9*4 + 0x10] */
L_1803fa7b7_0:;
L_1803fa7b7_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,16,8)));
L_1803fa7b7_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa7b7_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fa7b7_4:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,32,8),16));
L_1803fa7b7_5:;
wr(s->u,99,16,rd(s->u,40,16));
L_1803fa7b7_6:;
wr(s->r,4736,4,rd(s->u,99,4));
L_1803fa7b7_7:;
wr(s->r,4740,4,rd(s->u,103,4));
L_1803fa7b7_8:;
wr(s->r,4744,4,rd(s->u,107,4));
L_1803fa7b7_9:;
wr(s->r,4748,4,rd(s->u,111,4));
L_1803fa7b7_10:;
/* 1803fa7bd: mulps xmm3, xmm2 */
L_1803fa7bd_0:;
L_1803fa7bd_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fa7bd_2:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)*fv(rd(s->r,4740,4),4),4));
L_1803fa7bd_3:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)*fv(rd(s->r,4744,4),4),4));
L_1803fa7bd_4:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)*fv(rd(s->r,4748,4),4),4));
L_1803fa7bd_5:;
/* 1803fa7c0: addps xmm3, xmmword ptr [r8 + r9*4 + 0x10] */
L_1803fa7c0_0:;
L_1803fa7c0_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,128,8)));
L_1803fa7c0_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa7c0_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fa7c0_4:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,32,8),16));
L_1803fa7c0_5:;
wr(s->u,83,16,rd(s->u,40,16));
L_1803fa7c0_6:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->u,83,4),4),4));
L_1803fa7c0_7:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)+fv(rd(s->u,87,4),4),4));
L_1803fa7c0_8:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)+fv(rd(s->u,91,4),4),4));
L_1803fa7c0_9:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)+fv(rd(s->u,95,4),4),4));
L_1803fa7c0_10:;
/* 1803fa7c6: movaps xmmword ptr [r8 + r9*4 + 0x10], xmm3 */
L_1803fa7c6_0:;
L_1803fa7c6_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,128,8)));
L_1803fa7c6_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa7c6_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fa7c6_4:;
wr(s->u,40,16,rd(s->r,4800,16));
L_1803fa7c6_5:;
mw((uint64_t)rd(s->u,32,8),16,rd(s->u,40,16));
L_1803fa7c6_6:;
/* 1803fa7cc: add r9, 8 */
L_1803fa7cc_0:;
L_1803fa7cc_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803fa7cc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803fa7cc_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803fa7cc_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa7cc_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fa7cc_6:;
wr(s->u,57,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fa7cc_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803fa7cc_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803fa7cc_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803fa7cc_10:;
/* 1803fa7d0: cmp r9, rax */
L_1803fa7d0_0:;
L_1803fa7d0_1:;
wr(s->u,67,8,rd(s->r,0,8));
L_1803fa7d0_2:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->u,67,8)));
L_1803fa7d0_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->u,67,8),8,1));
L_1803fa7d0_4:;
wr(s->u,75,8,(rd(s->r,136,8)-rd(s->u,67,8)));
L_1803fa7d0_5:;
wr(s->r,519,1,(sx(rd(s->u,75,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa7d0_6:;
wr(s->r,518,1,(rd(s->u,75,8)==((U)UINT64_C(0x0))));
L_1803fa7d0_7:;
wr(s->u,57,8,(rd(s->u,75,8)&((U)UINT64_C(0xff))));
L_1803fa7d0_8:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803fa7d0_9:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803fa7d0_10:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803fa7d0_11:;
/* 1803fa7d3: jl 0x1803fa79a */
L_1803fa7d3_0:;
L_1803fa7d3_1:;
wr(s->u,56,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa7d3_2:;
if(rd(s->u,56,1)){goto L_1803fa79a_0;}
L_1803fa7d3_3:;
return UINT64_C(0x1803fa7d5);
}
uint64_t b_1803fa7d5(CPU*s){
/* 1803fa7d5: jmp 0x1803fa80c */
L_1803fa7d5_0:;
L_1803fa7d5_1:;
return UINT64_C(0x1803fa80c);
L_1803fa7d5_2:;
return UINT64_C(0x1803fa7d7);
}
uint64_t b_1803fa7d7(CPU*s){
/* 1803fa7d7: movups xmm0, xmmword ptr [rcx + r9*4] */
L_1803fa7d7_0:;
L_1803fa7d7_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa7d7_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa7d7_3:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803fa7d7_4:;
wr(s->u,99,16,rd(s->u,40,16));
L_1803fa7d7_5:;
wr(s->r,4608,4,rd(s->u,99,4));
L_1803fa7d7_6:;
wr(s->r,4612,4,rd(s->u,103,4));
L_1803fa7d7_7:;
wr(s->r,4616,4,rd(s->u,107,4));
L_1803fa7d7_8:;
wr(s->r,4620,4,rd(s->u,111,4));
L_1803fa7d7_9:;
/* 1803fa7dc: mulps xmm0, xmmword ptr [rdx + r9*4] */
L_1803fa7dc_0:;
L_1803fa7dc_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa7dc_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fa7dc_3:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803fa7dc_4:;
wr(s->u,115,16,rd(s->u,40,16));
L_1803fa7dc_5:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,115,4),4),4));
L_1803fa7dc_6:;
wr(s->r,4612,4,fb(fv(rd(s->r,4612,4),4)*fv(rd(s->u,119,4),4),4));
L_1803fa7dc_7:;
wr(s->r,4616,4,fb(fv(rd(s->r,4616,4),4)*fv(rd(s->u,123,4),4),4));
L_1803fa7dc_8:;
wr(s->r,4620,4,fb(fv(rd(s->r,4620,4),4)*fv(rd(s->u,127,4),4),4));
L_1803fa7dc_9:;
/* 1803fa7e1: addps xmm0, xmmword ptr [r8 + r9*4] */
L_1803fa7e1_0:;
L_1803fa7e1_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa7e1_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fa7e1_3:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803fa7e1_4:;
wr(s->u,83,16,rd(s->u,40,16));
L_1803fa7e1_5:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,83,4),4),4));
L_1803fa7e1_6:;
wr(s->r,4612,4,fb(fv(rd(s->r,4612,4),4)+fv(rd(s->u,87,4),4),4));
L_1803fa7e1_7:;
wr(s->r,4616,4,fb(fv(rd(s->r,4616,4),4)+fv(rd(s->u,91,4),4),4));
L_1803fa7e1_8:;
wr(s->r,4620,4,fb(fv(rd(s->r,4620,4),4)+fv(rd(s->u,95,4),4),4));
L_1803fa7e1_9:;
/* 1803fa7e6: movaps xmmword ptr [r8 + r9*4], xmm0 */
L_1803fa7e6_0:;
L_1803fa7e6_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa7e6_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fa7e6_3:;
wr(s->u,40,16,rd(s->r,4608,16));
L_1803fa7e6_4:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,40,16));
L_1803fa7e6_5:;
/* 1803fa7eb: movups xmm1, xmmword ptr [rcx + r9*4 + 0x10] */
L_1803fa7eb_0:;
L_1803fa7eb_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,8,8)));
L_1803fa7eb_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa7eb_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fa7eb_4:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,32,8),16));
L_1803fa7eb_5:;
wr(s->u,99,16,rd(s->u,40,16));
L_1803fa7eb_6:;
wr(s->r,4672,4,rd(s->u,99,4));
L_1803fa7eb_7:;
wr(s->r,4676,4,rd(s->u,103,4));
L_1803fa7eb_8:;
wr(s->r,4680,4,rd(s->u,107,4));
L_1803fa7eb_9:;
wr(s->r,4684,4,rd(s->u,111,4));
L_1803fa7eb_10:;
/* 1803fa7f1: mulps xmm1, xmmword ptr [rdx + r9*4 + 0x10] */
L_1803fa7f1_0:;
L_1803fa7f1_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,16,8)));
L_1803fa7f1_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa7f1_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fa7f1_4:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,32,8),16));
L_1803fa7f1_5:;
wr(s->u,115,16,rd(s->u,40,16));
L_1803fa7f1_6:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,115,4),4),4));
L_1803fa7f1_7:;
wr(s->r,4676,4,fb(fv(rd(s->r,4676,4),4)*fv(rd(s->u,119,4),4),4));
L_1803fa7f1_8:;
wr(s->r,4680,4,fb(fv(rd(s->r,4680,4),4)*fv(rd(s->u,123,4),4),4));
L_1803fa7f1_9:;
wr(s->r,4684,4,fb(fv(rd(s->r,4684,4),4)*fv(rd(s->u,127,4),4),4));
L_1803fa7f1_10:;
/* 1803fa7f7: addps xmm1, xmmword ptr [r8 + r9*4 + 0x10] */
L_1803fa7f7_0:;
L_1803fa7f7_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,128,8)));
L_1803fa7f7_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa7f7_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fa7f7_4:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,32,8),16));
L_1803fa7f7_5:;
wr(s->u,83,16,rd(s->u,40,16));
L_1803fa7f7_6:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->u,83,4),4),4));
L_1803fa7f7_7:;
wr(s->r,4676,4,fb(fv(rd(s->r,4676,4),4)+fv(rd(s->u,87,4),4),4));
L_1803fa7f7_8:;
wr(s->r,4680,4,fb(fv(rd(s->r,4680,4),4)+fv(rd(s->u,91,4),4),4));
L_1803fa7f7_9:;
wr(s->r,4684,4,fb(fv(rd(s->r,4684,4),4)+fv(rd(s->u,95,4),4),4));
L_1803fa7f7_10:;
/* 1803fa7fd: movaps xmmword ptr [r8 + r9*4 + 0x10], xmm1 */
L_1803fa7fd_0:;
L_1803fa7fd_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,128,8)));
L_1803fa7fd_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa7fd_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fa7fd_4:;
wr(s->u,40,16,rd(s->r,4672,16));
L_1803fa7fd_5:;
mw((uint64_t)rd(s->u,32,8),16,rd(s->u,40,16));
L_1803fa7fd_6:;
/* 1803fa803: add r9, 8 */
L_1803fa803_0:;
L_1803fa803_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803fa803_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803fa803_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803fa803_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa803_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fa803_6:;
wr(s->u,57,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fa803_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803fa803_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803fa803_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803fa803_10:;
/* 1803fa807: cmp r9, rax */
L_1803fa807_0:;
L_1803fa807_1:;
wr(s->u,67,8,rd(s->r,0,8));
L_1803fa807_2:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->u,67,8)));
L_1803fa807_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->u,67,8),8,1));
L_1803fa807_4:;
wr(s->u,75,8,(rd(s->r,136,8)-rd(s->u,67,8)));
L_1803fa807_5:;
wr(s->r,519,1,(sx(rd(s->u,75,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa807_6:;
wr(s->r,518,1,(rd(s->u,75,8)==((U)UINT64_C(0x0))));
L_1803fa807_7:;
wr(s->u,57,8,(rd(s->u,75,8)&((U)UINT64_C(0xff))));
L_1803fa807_8:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803fa807_9:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803fa807_10:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803fa807_11:;
/* 1803fa80a: jl 0x1803fa7d7 */
L_1803fa80a_0:;
L_1803fa80a_1:;
wr(s->u,56,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa80a_2:;
if(rd(s->u,56,1)){goto L_1803fa7d7_0;}
L_1803fa80a_3:;
return UINT64_C(0x1803fa80c);
}
uint64_t b_1803fa80c(CPU*s){
/* 1803fa80c: cmp rax, r11 */
L_1803fa80c_0:;
L_1803fa80c_1:;
wr(s->u,11,8,rd(s->r,152,8));
L_1803fa80c_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,11,8)));
L_1803fa80c_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,11,8),8,1));
L_1803fa80c_4:;
wr(s->u,19,8,(rd(s->r,0,8)-rd(s->u,11,8)));
L_1803fa80c_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa80c_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fa80c_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fa80c_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fa80c_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fa80c_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fa80c_11:;
/* 1803fa80f: jge 0x1803fa853 */
L_1803fa80f_0:;
L_1803fa80f_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fa80f_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa853);}
L_1803fa80f_3:;
return UINT64_C(0x1803fa811);
}
uint64_t b_1803fa811(CPU*s){
/* 1803fa811: movss xmm0, dword ptr [rcx + rax*4] */
L_1803fa811_0:;
L_1803fa811_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa811_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa811_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa811_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803fa811_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fa811_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fa811_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fa811_8:;
/* 1803fa816: mulss xmm0, dword ptr [rdx + rax*4] */
L_1803fa816_0:;
L_1803fa816_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa816_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fa816_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa816_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803fa816_5:;
/* 1803fa81b: addss xmm0, dword ptr [r8 + rax*4] */
L_1803fa81b_0:;
L_1803fa81b_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa81b_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fa81b_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa81b_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,16,4),4),4));
L_1803fa81b_5:;
/* 1803fa821: movss dword ptr [r8 + rax*4], xmm0 */
L_1803fa821_0:;
L_1803fa821_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa821_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fa821_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fa821_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fa821_5:;
/* 1803fa827: add rax, 1 */
L_1803fa827_0:;
L_1803fa827_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fa827_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fa827_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fa827_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa827_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fa827_6:;
wr(s->u,21,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fa827_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa827_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa827_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa827_10:;
/* 1803fa82b: cmp rax, r11 */
L_1803fa82b_0:;
L_1803fa82b_1:;
wr(s->u,31,8,rd(s->r,152,8));
L_1803fa82b_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,31,8)));
L_1803fa82b_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,31,8),8,1));
L_1803fa82b_4:;
wr(s->u,39,8,(rd(s->r,0,8)-rd(s->u,31,8)));
L_1803fa82b_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa82b_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fa82b_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fa82b_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa82b_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa82b_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa82b_11:;
/* 1803fa82e: jl 0x1803fa811 */
L_1803fa82e_0:;
L_1803fa82e_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa82e_2:;
if(rd(s->u,20,1)){goto L_1803fa811_0;}
L_1803fa82e_3:;
return UINT64_C(0x1803fa830);
}
uint64_t b_1803fa830(CPU*s){
/* 1803fa830: jmp 0x1803fa853 */
L_1803fa830_0:;
L_1803fa830_1:;
return UINT64_C(0x1803fa853);
L_1803fa830_2:;
return UINT64_C(0x1803fa832);
}
uint64_t b_1803fa832(CPU*s){
/* 1803fa832: xor eax, eax */
L_1803fa832_0:;
L_1803fa832_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa832_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa832_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fa832_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa832_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa832_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa832_7:;
wr(s->u,21,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa832_8:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803fa832_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa832_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa832_11:;
/* 1803fa834: movss xmm0, dword ptr [rcx + rax*4] */
L_1803fa834_0:;
L_1803fa834_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa834_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa834_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa834_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803fa834_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fa834_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fa834_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fa834_8:;
/* 1803fa839: mulss xmm0, dword ptr [rdx + rax*4] */
L_1803fa839_0:;
L_1803fa839_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa839_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fa839_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa839_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803fa839_5:;
/* 1803fa83e: addss xmm0, dword ptr [r8 + rax*4] */
L_1803fa83e_0:;
L_1803fa83e_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa83e_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fa83e_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa83e_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,16,4),4),4));
L_1803fa83e_5:;
/* 1803fa844: movss dword ptr [r8 + rax*4], xmm0 */
L_1803fa844_0:;
L_1803fa844_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa844_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fa844_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fa844_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fa844_5:;
/* 1803fa84a: add rax, 1 */
L_1803fa84a_0:;
L_1803fa84a_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fa84a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fa84a_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fa84a_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa84a_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fa84a_6:;
wr(s->u,21,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fa84a_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa84a_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa84a_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa84a_10:;
/* 1803fa84e: cmp rax, r11 */
L_1803fa84e_0:;
L_1803fa84e_1:;
wr(s->u,31,8,rd(s->r,152,8));
L_1803fa84e_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,31,8)));
L_1803fa84e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,31,8),8,1));
L_1803fa84e_4:;
wr(s->u,39,8,(rd(s->r,0,8)-rd(s->u,31,8)));
L_1803fa84e_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa84e_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fa84e_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fa84e_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa84e_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa84e_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa84e_11:;
/* 1803fa851: jl 0x1803fa834 */
L_1803fa851_0:;
L_1803fa851_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa851_2:;
if(rd(s->u,20,1)){goto L_1803fa834_0;}
L_1803fa851_3:;
return UINT64_C(0x1803fa853);
}
uint64_t b_1803fa834(CPU*s){
/* 1803fa834: movss xmm0, dword ptr [rcx + rax*4] */
L_1803fa834_0:;
L_1803fa834_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa834_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa834_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa834_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803fa834_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fa834_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fa834_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fa834_8:;
/* 1803fa839: mulss xmm0, dword ptr [rdx + rax*4] */
L_1803fa839_0:;
L_1803fa839_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa839_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fa839_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa839_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803fa839_5:;
/* 1803fa83e: addss xmm0, dword ptr [r8 + rax*4] */
L_1803fa83e_0:;
L_1803fa83e_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa83e_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fa83e_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa83e_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,16,4),4),4));
L_1803fa83e_5:;
/* 1803fa844: movss dword ptr [r8 + rax*4], xmm0 */
L_1803fa844_0:;
L_1803fa844_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa844_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fa844_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fa844_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fa844_5:;
/* 1803fa84a: add rax, 1 */
L_1803fa84a_0:;
L_1803fa84a_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fa84a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fa84a_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fa84a_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa84a_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fa84a_6:;
wr(s->u,21,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fa84a_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa84a_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa84a_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa84a_10:;
/* 1803fa84e: cmp rax, r11 */
L_1803fa84e_0:;
L_1803fa84e_1:;
wr(s->u,31,8,rd(s->r,152,8));
L_1803fa84e_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,31,8)));
L_1803fa84e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,31,8),8,1));
L_1803fa84e_4:;
wr(s->u,39,8,(rd(s->r,0,8)-rd(s->u,31,8)));
L_1803fa84e_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa84e_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fa84e_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fa84e_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fa84e_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fa84e_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fa84e_11:;
/* 1803fa851: jl 0x1803fa834 */
L_1803fa851_0:;
L_1803fa851_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa851_2:;
if(rd(s->u,20,1)){goto L_1803fa834_0;}
L_1803fa851_3:;
return UINT64_C(0x1803fa853);
}
uint64_t b_1803fa853(CPU*s){
/* 1803fa853: xor eax, eax */
L_1803fa853_0:;
L_1803fa853_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa853_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa853_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fa853_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa853_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa853_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa853_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa853_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fa853_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa853_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa853_11:;
/* 1803fa855: add rsp, 0x20 */
L_1803fa855_0:;
L_1803fa855_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa855_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803fa855_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803fa855_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa855_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa855_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa855_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa855_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa855_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa855_10:;
/* 1803fa859: pop r13 */
L_1803fa859_0:;
L_1803fa859_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fa859_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa859_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa859_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fa859_5:;
/* 1803fa85b: ret  */
L_1803fa85b_0:;
L_1803fa85b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa85b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa85b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa85b_4:;
return UINT64_C(0x1803fa85c);
}
uint64_t b_1803fa85c(CPU*s){
/* 1803fa85c: xor eax, eax */
L_1803fa85c_0:;
L_1803fa85c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa85c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa85c_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fa85c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa85c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa85c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa85c_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa85c_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fa85c_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fa85c_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fa85c_11:;
/* 1803fa85e: jmp 0x1803fa80c */
L_1803fa85e_0:;
L_1803fa85e_1:;
return UINT64_C(0x1803fa80c);
L_1803fa85e_2:;
return UINT64_C(0x1803fa860);
}
uint64_t b_1803fa860(CPU*s){
/* 1803fa860: mov eax, 0xfffffffa */
L_1803fa860_0:;
L_1803fa860_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fa860_2:;
/* 1803fa865: add rsp, 0x20 */
L_1803fa865_0:;
L_1803fa865_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa865_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803fa865_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803fa865_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa865_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa865_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa865_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa865_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa865_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa865_10:;
/* 1803fa869: pop r13 */
L_1803fa869_0:;
L_1803fa869_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fa869_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa869_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa869_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fa869_5:;
/* 1803fa86b: ret  */
L_1803fa86b_0:;
L_1803fa86b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa86b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa86b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa86b_4:;
return UINT64_C(0x1803fa86c);
}
uint64_t b_1803fa86c(CPU*s){
/* 1803fa86c: mov eax, 0xfffffff8 */
L_1803fa86c_0:;
L_1803fa86c_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fa86c_2:;
/* 1803fa871: add rsp, 0x20 */
L_1803fa871_0:;
L_1803fa871_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fa871_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803fa871_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803fa871_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa871_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fa871_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fa871_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa871_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa871_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa871_10:;
/* 1803fa875: pop r13 */
L_1803fa875_0:;
L_1803fa875_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fa875_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa875_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa875_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fa875_5:;
/* 1803fa877: ret  */
L_1803fa877_0:;
L_1803fa877_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa877_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa877_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa877_4:;
return UINT64_C(0x1803fa878);
}
uint64_t b_1803fa878(CPU*s){
/* 1803fa878: test rcx, rcx */
L_1803fa878_0:;
L_1803fa878_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa878_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa878_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fa878_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa878_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fa878_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fa878_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fa878_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fa878_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fa878_10:;
/* 1803fa87b: je 0x1803fa9f1 */
L_1803fa87b_0:;
L_1803fa87b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa9f1);}
L_1803fa87b_2:;
return UINT64_C(0x1803fa881);
}
uint64_t b_1803fa881(CPU*s){
/* 1803fa881: test edx, edx */
L_1803fa881_0:;
L_1803fa881_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa881_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa881_3:;
wr(s->u,8,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803fa881_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa881_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803fa881_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803fa881_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fa881_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fa881_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fa881_10:;
/* 1803fa883: jle 0x1803fa9eb */
L_1803fa883_0:;
L_1803fa883_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa883_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fa883_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fa9eb);}
L_1803fa883_4:;
return UINT64_C(0x1803fa889);
}
uint64_t b_1803fa889(CPU*s){
/* 1803fa889: xor eax, eax */
L_1803fa889_0:;
L_1803fa889_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa889_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa889_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fa889_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa889_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa889_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa889_7:;
wr(s->u,1,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa889_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fa889_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fa889_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fa889_11:;
/* 1803fa88b: xor r9d, r9d */
L_1803fa88b_0:;
L_1803fa88b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa88b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa88b_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803fa88b_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fa88b_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa88b_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803fa88b_7:;
wr(s->u,1,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803fa88b_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fa88b_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fa88b_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fa88b_11:;
/* 1803fa88e: cmp edx, 4 */
L_1803fa88e_0:;
L_1803fa88e_1:;
wr(s->u,7,4,rd(s->r,16,4));
L_1803fa88e_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x4))));
L_1803fa88e_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x4)),4,1));
L_1803fa88e_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x4))));
L_1803fa88e_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa88e_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fa88e_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fa88e_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fa88e_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fa88e_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fa88e_11:;
/* 1803fa891: jl 0x1803fa915 */
L_1803fa891_0:;
L_1803fa891_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa891_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa915);}
L_1803fa891_3:;
return UINT64_C(0x1803fa897);
}
uint64_t b_1803fa897(CPU*s){
/* 1803fa897: mov r8d, edx */
L_1803fa897_0:;
L_1803fa897_1:;
wr(s->r,128,4,rd(s->r,16,4));
L_1803fa897_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fa897_3:;
/* 1803fa89a: sar r8d, 1 */
L_1803fa89a_0:;
L_1803fa89a_1:;
wr(s->u,126,4,(rd(s->r,128,4)&((U)UINT64_C(0x1))));
L_1803fa89a_2:;
wr(s->r,512,1,(rd(s->u,126,4)!=((U)UINT64_C(0x0))));
L_1803fa89a_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa89a_4:;
wr(s->r,128,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,128,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,128,4),4)>>((U)UINT64_C(0x1)))));
L_1803fa89a_5:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fa89a_6:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa89a_7:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fa89a_8:;
wr(s->u,49,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fa89a_9:;
wr(s->u,53,1,pop(rd(s->u,49,4),4));
L_1803fa89a_10:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803fa89a_11:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803fa89a_12:;
/* 1803fa89d: shr r8d, 0x1e */
L_1803fa89d_0:;
L_1803fa89d_1:;
wr(s->u,146,4,(((U)UINT64_C(0x1e))&((U)UINT64_C(0x1f))));
L_1803fa89d_2:;
wr(s->u,150,4,rd(s->r,128,4));
L_1803fa89d_3:;
wr(s->r,128,4,((rd(s->u,146,4)>=32)?0:(rd(s->r,128,4)>>rd(s->u,146,4))));
L_1803fa89d_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fa89d_5:;
wr(s->u,102,1,(rd(s->u,146,4)==((U)UINT64_C(0x0))));
L_1803fa89d_6:;
wr(s->u,103,4,(rd(s->u,146,4)-((U)UINT64_C(0x1))));
L_1803fa89d_7:;
wr(s->u,107,4,((rd(s->u,103,4)>=32)?0:(rd(s->u,150,4)>>rd(s->u,103,4))));
L_1803fa89d_8:;
wr(s->u,111,4,(rd(s->u,107,4)&((U)UINT64_C(0x1))));
L_1803fa89d_9:;
wr(s->u,115,1,(rd(s->u,111,4)!=((U)UINT64_C(0x0))));
L_1803fa89d_10:;
wr(s->u,0,1,rd(s->u,102,1));
L_1803fa89d_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fa89d_12:;
wr(s->u,2,1,(!rd(s->u,102,1)));
L_1803fa89d_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fa89d_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,115,1)));
L_1803fa89d_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fa89d_16:;
wr(s->u,116,1,(rd(s->u,146,4)==((U)UINT64_C(0x1))));
L_1803fa89d_17:;
wr(s->u,117,1,(sx(rd(s->u,150,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa89d_18:;
wr(s->u,0,1,rd(s->u,116,1));
L_1803fa89d_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fa89d_20:;
wr(s->u,2,1,(!rd(s->u,116,1)));
L_1803fa89d_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fa89d_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,117,1)));
L_1803fa89d_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fa89d_24:;
wr(s->u,55,1,(rd(s->u,146,4)!=((U)UINT64_C(0x0))));
L_1803fa89d_25:;
wr(s->u,56,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa89d_26:;
wr(s->u,57,1,(!rd(s->u,55,1)));
L_1803fa89d_27:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,519,1)));
L_1803fa89d_28:;
wr(s->u,59,1,(rd(s->u,55,1)&rd(s->u,56,1)));
L_1803fa89d_29:;
wr(s->r,519,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803fa89d_30:;
wr(s->u,60,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fa89d_31:;
wr(s->u,61,1,(!rd(s->u,55,1)));
L_1803fa89d_32:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,518,1)));
L_1803fa89d_33:;
wr(s->u,63,1,(rd(s->u,55,1)&rd(s->u,60,1)));
L_1803fa89d_34:;
wr(s->r,518,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803fa89d_35:;
wr(s->u,64,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fa89d_36:;
wr(s->u,68,1,pop(rd(s->u,64,4),4));
L_1803fa89d_37:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803fa89d_38:;
wr(s->u,70,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803fa89d_39:;
wr(s->u,71,1,(!rd(s->u,55,1)));
L_1803fa89d_40:;
wr(s->u,72,1,(rd(s->u,71,1)&rd(s->r,514,1)));
L_1803fa89d_41:;
wr(s->u,73,1,(rd(s->u,55,1)&rd(s->u,70,1)));
L_1803fa89d_42:;
wr(s->r,514,1,(rd(s->u,72,1)|rd(s->u,73,1)));
L_1803fa89d_43:;
/* 1803fa8a1: add r8d, edx */
L_1803fa8a1_0:;
L_1803fa8a1_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+rd(s->r,16,4))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803fa8a1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->r,16,4),4,0));
L_1803fa8a1_3:;
wr(s->r,128,4,(rd(s->r,128,4)+rd(s->r,16,4)));
L_1803fa8a1_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fa8a1_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa8a1_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fa8a1_7:;
wr(s->u,49,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fa8a1_8:;
wr(s->u,53,1,pop(rd(s->u,49,4),4));
L_1803fa8a1_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803fa8a1_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803fa8a1_11:;
/* 1803fa8a4: sar r8d, 2 */
L_1803fa8a4_0:;
L_1803fa8a4_1:;
wr(s->u,130,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803fa8a4_2:;
wr(s->u,134,4,rd(s->r,128,4));
L_1803fa8a4_3:;
wr(s->r,128,4,((rd(s->u,130,4)>=32)?(sx(rd(s->r,128,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,128,4),4)>>rd(s->u,130,4))));
L_1803fa8a4_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fa8a4_5:;
wr(s->u,87,1,(rd(s->u,130,4)==((U)UINT64_C(0x0))));
L_1803fa8a4_6:;
wr(s->u,88,4,(rd(s->u,130,4)-((U)UINT64_C(0x1))));
L_1803fa8a4_7:;
wr(s->u,92,4,((rd(s->u,88,4)>=32)?(sx(rd(s->u,134,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,134,4),4)>>rd(s->u,88,4))));
L_1803fa8a4_8:;
wr(s->u,96,4,(rd(s->u,92,4)&((U)UINT64_C(0x1))));
L_1803fa8a4_9:;
wr(s->u,100,1,(rd(s->u,96,4)!=((U)UINT64_C(0x0))));
L_1803fa8a4_10:;
wr(s->u,0,1,rd(s->u,87,1));
L_1803fa8a4_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fa8a4_12:;
wr(s->u,2,1,(!rd(s->u,87,1)));
L_1803fa8a4_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fa8a4_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,100,1)));
L_1803fa8a4_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fa8a4_16:;
wr(s->u,101,1,(rd(s->u,130,4)==((U)UINT64_C(0x1))));
L_1803fa8a4_17:;
wr(s->u,0,1,rd(s->u,101,1));
L_1803fa8a4_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fa8a4_19:;
wr(s->u,2,1,(!rd(s->u,101,1)));
L_1803fa8a4_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fa8a4_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fa8a4_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fa8a4_23:;
wr(s->u,55,1,(rd(s->u,130,4)!=((U)UINT64_C(0x0))));
L_1803fa8a4_24:;
wr(s->u,56,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa8a4_25:;
wr(s->u,57,1,(!rd(s->u,55,1)));
L_1803fa8a4_26:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,519,1)));
L_1803fa8a4_27:;
wr(s->u,59,1,(rd(s->u,55,1)&rd(s->u,56,1)));
L_1803fa8a4_28:;
wr(s->r,519,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803fa8a4_29:;
wr(s->u,60,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fa8a4_30:;
wr(s->u,61,1,(!rd(s->u,55,1)));
L_1803fa8a4_31:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,518,1)));
L_1803fa8a4_32:;
wr(s->u,63,1,(rd(s->u,55,1)&rd(s->u,60,1)));
L_1803fa8a4_33:;
wr(s->r,518,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803fa8a4_34:;
wr(s->u,64,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fa8a4_35:;
wr(s->u,68,1,pop(rd(s->u,64,4),4));
L_1803fa8a4_36:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803fa8a4_37:;
wr(s->u,70,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803fa8a4_38:;
wr(s->u,71,1,(!rd(s->u,55,1)));
L_1803fa8a4_39:;
wr(s->u,72,1,(rd(s->u,71,1)&rd(s->r,514,1)));
L_1803fa8a4_40:;
wr(s->u,73,1,(rd(s->u,55,1)&rd(s->u,70,1)));
L_1803fa8a4_41:;
wr(s->r,514,1,(rd(s->u,72,1)|rd(s->u,73,1)));
L_1803fa8a4_42:;
/* 1803fa8a8: mov eax, r9d */
L_1803fa8a8_0:;
L_1803fa8a8_1:;
wr(s->r,0,4,rd(s->r,136,4));
L_1803fa8a8_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa8a8_3:;
/* 1803fa8ab: shl eax, 2 */
L_1803fa8ab_0:;
L_1803fa8ab_1:;
wr(s->u,138,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803fa8ab_2:;
wr(s->u,142,4,rd(s->r,0,4));
L_1803fa8ab_3:;
wr(s->r,0,4,((rd(s->u,138,4)>=32)?0:(rd(s->r,0,4)<<rd(s->u,138,4))));
L_1803fa8ab_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa8ab_5:;
wr(s->u,74,1,(rd(s->u,138,4)==((U)UINT64_C(0x0))));
L_1803fa8ab_6:;
wr(s->u,75,4,(rd(s->u,138,4)-((U)UINT64_C(0x1))));
L_1803fa8ab_7:;
wr(s->u,79,4,((rd(s->u,75,4)>=32)?0:(rd(s->u,142,4)<<rd(s->u,75,4))));
L_1803fa8ab_8:;
wr(s->u,83,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa8ab_9:;
wr(s->u,0,1,rd(s->u,74,1));
L_1803fa8ab_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fa8ab_11:;
wr(s->u,2,1,(!rd(s->u,74,1)));
L_1803fa8ab_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fa8ab_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,83,1)));
L_1803fa8ab_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fa8ab_15:;
wr(s->u,84,1,(rd(s->u,138,4)==((U)UINT64_C(0x1))));
L_1803fa8ab_16:;
wr(s->u,85,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa8ab_17:;
wr(s->u,86,1,(rd(s->r,512,1)^rd(s->u,85,1)));
L_1803fa8ab_18:;
wr(s->u,0,1,rd(s->u,84,1));
L_1803fa8ab_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,86,1)));
L_1803fa8ab_20:;
wr(s->u,2,1,(!rd(s->u,84,1)));
L_1803fa8ab_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fa8ab_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fa8ab_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fa8ab_24:;
wr(s->u,55,1,(rd(s->u,138,4)!=((U)UINT64_C(0x0))));
L_1803fa8ab_25:;
wr(s->u,56,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa8ab_26:;
wr(s->u,57,1,(!rd(s->u,55,1)));
L_1803fa8ab_27:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,519,1)));
L_1803fa8ab_28:;
wr(s->u,59,1,(rd(s->u,55,1)&rd(s->u,56,1)));
L_1803fa8ab_29:;
wr(s->r,519,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803fa8ab_30:;
wr(s->u,60,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa8ab_31:;
wr(s->u,61,1,(!rd(s->u,55,1)));
L_1803fa8ab_32:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,518,1)));
L_1803fa8ab_33:;
wr(s->u,63,1,(rd(s->u,55,1)&rd(s->u,60,1)));
L_1803fa8ab_34:;
wr(s->r,518,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803fa8ab_35:;
wr(s->u,64,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa8ab_36:;
wr(s->u,68,1,pop(rd(s->u,64,4),4));
L_1803fa8ab_37:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803fa8ab_38:;
wr(s->u,70,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803fa8ab_39:;
wr(s->u,71,1,(!rd(s->u,55,1)));
L_1803fa8ab_40:;
wr(s->u,72,1,(rd(s->u,71,1)&rd(s->r,514,1)));
L_1803fa8ab_41:;
wr(s->u,73,1,(rd(s->u,55,1)&rd(s->u,70,1)));
L_1803fa8ab_42:;
wr(s->r,514,1,(rd(s->u,72,1)|rd(s->u,73,1)));
L_1803fa8ab_43:;
/* 1803fa8ae: movsxd r10, eax */
L_1803fa8ae_0:;
L_1803fa8ae_1:;
wr(s->r,144,8,(U)sx(rd(s->r,0,4),4));
L_1803fa8ae_2:;
/* 1803fa8b1: movss xmm0, dword ptr [rcx + r10*4] */
L_1803fa8b1_0:;
L_1803fa8b1_1:;
wr(s->u,5,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fa8b1_2:;
wr(s->u,13,8,(rd(s->r,8,8)+rd(s->u,5,8)));
L_1803fa8b1_3:;
wr(s->u,45,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803fa8b1_4:;
wr(s->r,4608,4,rd(s->u,45,4));
L_1803fa8b1_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fa8b1_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fa8b1_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fa8b1_8:;
/* 1803fa8b7: andps xmm0, xmmword ptr [rip + 0x413b62] */
L_1803fa8b7_0:;
L_1803fa8b7_1:;
wr(s->u,154,16,mr(UINT64_C(0x18080e420),16));
L_1803fa8b7_2:;
wr(s->r,4608,4,(rd(s->r,4608,4)&rd(s->u,154,4)));
L_1803fa8b7_3:;
wr(s->r,4612,4,(rd(s->r,4612,4)&rd(s->u,158,4)));
L_1803fa8b7_4:;
wr(s->r,4616,4,(rd(s->r,4616,4)&rd(s->u,162,4)));
L_1803fa8b7_5:;
wr(s->r,4620,4,(rd(s->r,4620,4)&rd(s->u,166,4)));
L_1803fa8b7_6:;
/* 1803fa8be: movss xmm1, dword ptr [rcx + r10*4 + 4] */
L_1803fa8be_0:;
L_1803fa8be_1:;
wr(s->u,21,8,(((U)UINT64_C(0x4))+rd(s->r,8,8)));
L_1803fa8be_2:;
wr(s->u,29,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fa8be_3:;
wr(s->u,37,8,(rd(s->u,21,8)+rd(s->u,29,8)));
L_1803fa8be_4:;
wr(s->u,45,4,mr((uint64_t)rd(s->u,37,8),4));
L_1803fa8be_5:;
wr(s->r,4672,4,rd(s->u,45,4));
L_1803fa8be_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fa8be_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fa8be_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fa8be_9:;
/* 1803fa8c5: movss xmm2, dword ptr [rcx + r10*4 + 8] */
L_1803fa8c5_0:;
L_1803fa8c5_1:;
wr(s->u,21,8,(((U)UINT64_C(0x8))+rd(s->r,8,8)));
L_1803fa8c5_2:;
wr(s->u,29,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fa8c5_3:;
wr(s->u,37,8,(rd(s->u,21,8)+rd(s->u,29,8)));
L_1803fa8c5_4:;
wr(s->u,45,4,mr((uint64_t)rd(s->u,37,8),4));
L_1803fa8c5_5:;
wr(s->r,4736,4,rd(s->u,45,4));
L_1803fa8c5_6:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fa8c5_7:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fa8c5_8:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fa8c5_9:;
/* 1803fa8cc: andps xmm1, xmmword ptr [rip + 0x413b4d] */
L_1803fa8cc_0:;
L_1803fa8cc_1:;
wr(s->u,154,16,mr(UINT64_C(0x18080e420),16));
L_1803fa8cc_2:;
wr(s->r,4672,4,(rd(s->r,4672,4)&rd(s->u,154,4)));
L_1803fa8cc_3:;
wr(s->r,4676,4,(rd(s->r,4676,4)&rd(s->u,158,4)));
L_1803fa8cc_4:;
wr(s->r,4680,4,(rd(s->r,4680,4)&rd(s->u,162,4)));
L_1803fa8cc_5:;
wr(s->r,4684,4,(rd(s->r,4684,4)&rd(s->u,166,4)));
L_1803fa8cc_6:;
/* 1803fa8d3: andps xmm2, xmmword ptr [rip + 0x413b46] */
L_1803fa8d3_0:;
L_1803fa8d3_1:;
wr(s->u,154,16,mr(UINT64_C(0x18080e420),16));
L_1803fa8d3_2:;
wr(s->r,4736,4,(rd(s->r,4736,4)&rd(s->u,154,4)));
L_1803fa8d3_3:;
wr(s->r,4740,4,(rd(s->r,4740,4)&rd(s->u,158,4)));
L_1803fa8d3_4:;
wr(s->r,4744,4,(rd(s->r,4744,4)&rd(s->u,162,4)));
L_1803fa8d3_5:;
wr(s->r,4748,4,(rd(s->r,4748,4)&rd(s->u,166,4)));
L_1803fa8d3_6:;
/* 1803fa8da: movss xmm3, dword ptr [rcx + r10*4 + 0xc] */
L_1803fa8da_0:;
L_1803fa8da_1:;
wr(s->u,21,8,(((U)UINT64_C(0xc))+rd(s->r,8,8)));
L_1803fa8da_2:;
wr(s->u,29,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fa8da_3:;
wr(s->u,37,8,(rd(s->u,21,8)+rd(s->u,29,8)));
L_1803fa8da_4:;
wr(s->u,45,4,mr((uint64_t)rd(s->u,37,8),4));
L_1803fa8da_5:;
wr(s->r,4800,4,rd(s->u,45,4));
L_1803fa8da_6:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fa8da_7:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fa8da_8:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fa8da_9:;
/* 1803fa8e1: andps xmm3, xmmword ptr [rip + 0x413b38] */
L_1803fa8e1_0:;
L_1803fa8e1_1:;
wr(s->u,154,16,mr(UINT64_C(0x18080e420),16));
L_1803fa8e1_2:;
wr(s->r,4800,4,(rd(s->r,4800,4)&rd(s->u,154,4)));
L_1803fa8e1_3:;
wr(s->r,4804,4,(rd(s->r,4804,4)&rd(s->u,158,4)));
L_1803fa8e1_4:;
wr(s->r,4808,4,(rd(s->r,4808,4)&rd(s->u,162,4)));
L_1803fa8e1_5:;
wr(s->r,4812,4,(rd(s->r,4812,4)&rd(s->u,166,4)));
L_1803fa8e1_6:;
/* 1803fa8e8: movss dword ptr [rcx + r10*4], xmm0 */
L_1803fa8e8_0:;
L_1803fa8e8_1:;
wr(s->u,5,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fa8e8_2:;
wr(s->u,13,8,(rd(s->r,8,8)+rd(s->u,5,8)));
L_1803fa8e8_3:;
wr(s->u,45,4,rd(s->r,4608,4));
L_1803fa8e8_4:;
mw((uint64_t)rd(s->u,13,8),4,rd(s->u,45,4));
L_1803fa8e8_5:;
/* 1803fa8ee: movss dword ptr [rcx + r10*4 + 4], xmm1 */
L_1803fa8ee_0:;
L_1803fa8ee_1:;
wr(s->u,21,8,(((U)UINT64_C(0x4))+rd(s->r,8,8)));
L_1803fa8ee_2:;
wr(s->u,29,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fa8ee_3:;
wr(s->u,37,8,(rd(s->u,21,8)+rd(s->u,29,8)));
L_1803fa8ee_4:;
wr(s->u,45,4,rd(s->r,4672,4));
L_1803fa8ee_5:;
mw((uint64_t)rd(s->u,37,8),4,rd(s->u,45,4));
L_1803fa8ee_6:;
/* 1803fa8f5: movss dword ptr [rcx + r10*4 + 8], xmm2 */
L_1803fa8f5_0:;
L_1803fa8f5_1:;
wr(s->u,21,8,(((U)UINT64_C(0x8))+rd(s->r,8,8)));
L_1803fa8f5_2:;
wr(s->u,29,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fa8f5_3:;
wr(s->u,37,8,(rd(s->u,21,8)+rd(s->u,29,8)));
L_1803fa8f5_4:;
wr(s->u,45,4,rd(s->r,4736,4));
L_1803fa8f5_5:;
mw((uint64_t)rd(s->u,37,8),4,rd(s->u,45,4));
L_1803fa8f5_6:;
/* 1803fa8fc: movss dword ptr [rcx + r10*4 + 0xc], xmm3 */
L_1803fa8fc_0:;
L_1803fa8fc_1:;
wr(s->u,21,8,(((U)UINT64_C(0xc))+rd(s->r,8,8)));
L_1803fa8fc_2:;
wr(s->u,29,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fa8fc_3:;
wr(s->u,37,8,(rd(s->u,21,8)+rd(s->u,29,8)));
L_1803fa8fc_4:;
wr(s->u,45,4,rd(s->r,4800,4));
L_1803fa8fc_5:;
mw((uint64_t)rd(s->u,37,8),4,rd(s->u,45,4));
L_1803fa8fc_6:;
/* 1803fa903: add eax, 4 */
L_1803fa903_0:;
L_1803fa903_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0x4)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803fa903_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x4)),4,0));
L_1803fa903_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x4))));
L_1803fa903_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa903_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa903_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa903_7:;
wr(s->u,49,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa903_8:;
wr(s->u,53,1,pop(rd(s->u,49,4),4));
L_1803fa903_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803fa903_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803fa903_11:;
/* 1803fa906: add r9d, 1 */
L_1803fa906_0:;
L_1803fa906_1:;
wr(s->r,512,1,(((rd(s->r,136,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,136,4)));
L_1803fa906_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),((U)UINT64_C(0x1)),4,0));
L_1803fa906_3:;
wr(s->r,136,4,(rd(s->r,136,4)+((U)UINT64_C(0x1))));
L_1803fa906_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fa906_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa906_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803fa906_7:;
wr(s->u,49,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803fa906_8:;
wr(s->u,53,1,pop(rd(s->u,49,4),4));
L_1803fa906_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803fa906_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803fa906_11:;
/* 1803fa90a: cmp r9d, r8d */
L_1803fa90a_0:;
L_1803fa90a_1:;
wr(s->u,118,4,rd(s->r,128,4));
L_1803fa90a_2:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->u,118,4)));
L_1803fa90a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->u,118,4),4,1));
L_1803fa90a_4:;
wr(s->u,122,4,(rd(s->r,136,4)-rd(s->u,118,4)));
L_1803fa90a_5:;
wr(s->r,519,1,(sx(rd(s->u,122,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa90a_6:;
wr(s->r,518,1,(rd(s->u,122,4)==((U)UINT64_C(0x0))));
L_1803fa90a_7:;
wr(s->u,49,4,(rd(s->u,122,4)&((U)UINT64_C(0xff))));
L_1803fa90a_8:;
wr(s->u,53,1,pop(rd(s->u,49,4),4));
L_1803fa90a_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803fa90a_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803fa90a_11:;
/* 1803fa90d: jb 0x1803fa8ae */
L_1803fa90d_0:;
L_1803fa90d_1:;
if(rd(s->r,512,1)){goto L_1803fa8ae_0;}
L_1803fa90d_2:;
return UINT64_C(0x1803fa90f);
}
uint64_t b_1803fa8ae(CPU*s){
/* 1803fa8ae: movsxd r10, eax */
L_1803fa8ae_0:;
L_1803fa8ae_1:;
wr(s->r,144,8,(U)sx(rd(s->r,0,4),4));
L_1803fa8ae_2:;
/* 1803fa8b1: movss xmm0, dword ptr [rcx + r10*4] */
L_1803fa8b1_0:;
L_1803fa8b1_1:;
wr(s->u,0,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fa8b1_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa8b1_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fa8b1_4:;
wr(s->r,4608,4,rd(s->u,40,4));
L_1803fa8b1_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fa8b1_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fa8b1_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fa8b1_8:;
/* 1803fa8b7: andps xmm0, xmmword ptr [rip + 0x413b62] */
L_1803fa8b7_0:;
L_1803fa8b7_1:;
wr(s->u,58,16,mr(UINT64_C(0x18080e420),16));
L_1803fa8b7_2:;
wr(s->r,4608,4,(rd(s->r,4608,4)&rd(s->u,58,4)));
L_1803fa8b7_3:;
wr(s->r,4612,4,(rd(s->r,4612,4)&rd(s->u,62,4)));
L_1803fa8b7_4:;
wr(s->r,4616,4,(rd(s->r,4616,4)&rd(s->u,66,4)));
L_1803fa8b7_5:;
wr(s->r,4620,4,(rd(s->r,4620,4)&rd(s->u,70,4)));
L_1803fa8b7_6:;
/* 1803fa8be: movss xmm1, dword ptr [rcx + r10*4 + 4] */
L_1803fa8be_0:;
L_1803fa8be_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,8,8)));
L_1803fa8be_2:;
wr(s->u,24,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fa8be_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fa8be_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fa8be_5:;
wr(s->r,4672,4,rd(s->u,40,4));
L_1803fa8be_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fa8be_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fa8be_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fa8be_9:;
/* 1803fa8c5: movss xmm2, dword ptr [rcx + r10*4 + 8] */
L_1803fa8c5_0:;
L_1803fa8c5_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,8,8)));
L_1803fa8c5_2:;
wr(s->u,24,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fa8c5_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fa8c5_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fa8c5_5:;
wr(s->r,4736,4,rd(s->u,40,4));
L_1803fa8c5_6:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fa8c5_7:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fa8c5_8:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fa8c5_9:;
/* 1803fa8cc: andps xmm1, xmmword ptr [rip + 0x413b4d] */
L_1803fa8cc_0:;
L_1803fa8cc_1:;
wr(s->u,58,16,mr(UINT64_C(0x18080e420),16));
L_1803fa8cc_2:;
wr(s->r,4672,4,(rd(s->r,4672,4)&rd(s->u,58,4)));
L_1803fa8cc_3:;
wr(s->r,4676,4,(rd(s->r,4676,4)&rd(s->u,62,4)));
L_1803fa8cc_4:;
wr(s->r,4680,4,(rd(s->r,4680,4)&rd(s->u,66,4)));
L_1803fa8cc_5:;
wr(s->r,4684,4,(rd(s->r,4684,4)&rd(s->u,70,4)));
L_1803fa8cc_6:;
/* 1803fa8d3: andps xmm2, xmmword ptr [rip + 0x413b46] */
L_1803fa8d3_0:;
L_1803fa8d3_1:;
wr(s->u,58,16,mr(UINT64_C(0x18080e420),16));
L_1803fa8d3_2:;
wr(s->r,4736,4,(rd(s->r,4736,4)&rd(s->u,58,4)));
L_1803fa8d3_3:;
wr(s->r,4740,4,(rd(s->r,4740,4)&rd(s->u,62,4)));
L_1803fa8d3_4:;
wr(s->r,4744,4,(rd(s->r,4744,4)&rd(s->u,66,4)));
L_1803fa8d3_5:;
wr(s->r,4748,4,(rd(s->r,4748,4)&rd(s->u,70,4)));
L_1803fa8d3_6:;
/* 1803fa8da: movss xmm3, dword ptr [rcx + r10*4 + 0xc] */
L_1803fa8da_0:;
L_1803fa8da_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,8,8)));
L_1803fa8da_2:;
wr(s->u,24,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fa8da_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fa8da_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fa8da_5:;
wr(s->r,4800,4,rd(s->u,40,4));
L_1803fa8da_6:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fa8da_7:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fa8da_8:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fa8da_9:;
/* 1803fa8e1: andps xmm3, xmmword ptr [rip + 0x413b38] */
L_1803fa8e1_0:;
L_1803fa8e1_1:;
wr(s->u,58,16,mr(UINT64_C(0x18080e420),16));
L_1803fa8e1_2:;
wr(s->r,4800,4,(rd(s->r,4800,4)&rd(s->u,58,4)));
L_1803fa8e1_3:;
wr(s->r,4804,4,(rd(s->r,4804,4)&rd(s->u,62,4)));
L_1803fa8e1_4:;
wr(s->r,4808,4,(rd(s->r,4808,4)&rd(s->u,66,4)));
L_1803fa8e1_5:;
wr(s->r,4812,4,(rd(s->r,4812,4)&rd(s->u,70,4)));
L_1803fa8e1_6:;
/* 1803fa8e8: movss dword ptr [rcx + r10*4], xmm0 */
L_1803fa8e8_0:;
L_1803fa8e8_1:;
wr(s->u,0,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fa8e8_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa8e8_3:;
wr(s->u,40,4,rd(s->r,4608,4));
L_1803fa8e8_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,40,4));
L_1803fa8e8_5:;
/* 1803fa8ee: movss dword ptr [rcx + r10*4 + 4], xmm1 */
L_1803fa8ee_0:;
L_1803fa8ee_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,8,8)));
L_1803fa8ee_2:;
wr(s->u,24,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fa8ee_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fa8ee_4:;
wr(s->u,40,4,rd(s->r,4672,4));
L_1803fa8ee_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fa8ee_6:;
/* 1803fa8f5: movss dword ptr [rcx + r10*4 + 8], xmm2 */
L_1803fa8f5_0:;
L_1803fa8f5_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,8,8)));
L_1803fa8f5_2:;
wr(s->u,24,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fa8f5_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fa8f5_4:;
wr(s->u,40,4,rd(s->r,4736,4));
L_1803fa8f5_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fa8f5_6:;
/* 1803fa8fc: movss dword ptr [rcx + r10*4 + 0xc], xmm3 */
L_1803fa8fc_0:;
L_1803fa8fc_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,8,8)));
L_1803fa8fc_2:;
wr(s->u,24,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fa8fc_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fa8fc_4:;
wr(s->u,40,4,rd(s->r,4800,4));
L_1803fa8fc_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fa8fc_6:;
/* 1803fa903: add eax, 4 */
L_1803fa903_0:;
L_1803fa903_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0x4)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803fa903_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x4)),4,0));
L_1803fa903_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x4))));
L_1803fa903_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa903_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa903_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa903_7:;
wr(s->u,44,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa903_8:;
wr(s->u,48,1,pop(rd(s->u,44,4),4));
L_1803fa903_9:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803fa903_10:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803fa903_11:;
/* 1803fa906: add r9d, 1 */
L_1803fa906_0:;
L_1803fa906_1:;
wr(s->r,512,1,(((rd(s->r,136,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,136,4)));
L_1803fa906_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),((U)UINT64_C(0x1)),4,0));
L_1803fa906_3:;
wr(s->r,136,4,(rd(s->r,136,4)+((U)UINT64_C(0x1))));
L_1803fa906_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fa906_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa906_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803fa906_7:;
wr(s->u,44,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803fa906_8:;
wr(s->u,48,1,pop(rd(s->u,44,4),4));
L_1803fa906_9:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803fa906_10:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803fa906_11:;
/* 1803fa90a: cmp r9d, r8d */
L_1803fa90a_0:;
L_1803fa90a_1:;
wr(s->u,50,4,rd(s->r,128,4));
L_1803fa90a_2:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->u,50,4)));
L_1803fa90a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->u,50,4),4,1));
L_1803fa90a_4:;
wr(s->u,54,4,(rd(s->r,136,4)-rd(s->u,50,4)));
L_1803fa90a_5:;
wr(s->r,519,1,(sx(rd(s->u,54,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa90a_6:;
wr(s->r,518,1,(rd(s->u,54,4)==((U)UINT64_C(0x0))));
L_1803fa90a_7:;
wr(s->u,44,4,(rd(s->u,54,4)&((U)UINT64_C(0xff))));
L_1803fa90a_8:;
wr(s->u,48,1,pop(rd(s->u,44,4),4));
L_1803fa90a_9:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803fa90a_10:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803fa90a_11:;
/* 1803fa90d: jb 0x1803fa8ae */
L_1803fa90d_0:;
L_1803fa90d_1:;
if(rd(s->r,512,1)){goto L_1803fa8ae_0;}
L_1803fa90d_2:;
return UINT64_C(0x1803fa90f);
}
uint64_t b_1803fa90f(CPU*s){
/* 1803fa90f: mov eax, r9d */
L_1803fa90f_0:;
L_1803fa90f_1:;
wr(s->r,0,4,rd(s->r,136,4));
L_1803fa90f_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa90f_3:;
/* 1803fa912: shl eax, 2 */
L_1803fa912_0:;
L_1803fa912_1:;
wr(s->u,52,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803fa912_2:;
wr(s->u,56,4,rd(s->r,0,4));
L_1803fa912_3:;
wr(s->r,0,4,((rd(s->u,52,4)>=32)?0:(rd(s->r,0,4)<<rd(s->u,52,4))));
L_1803fa912_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa912_5:;
wr(s->u,31,1,(rd(s->u,52,4)==((U)UINT64_C(0x0))));
L_1803fa912_6:;
wr(s->u,32,4,(rd(s->u,52,4)-((U)UINT64_C(0x1))));
L_1803fa912_7:;
wr(s->u,36,4,((rd(s->u,32,4)>=32)?0:(rd(s->u,56,4)<<rd(s->u,32,4))));
L_1803fa912_8:;
wr(s->u,40,1,(sx(rd(s->u,36,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa912_9:;
wr(s->u,0,1,rd(s->u,31,1));
L_1803fa912_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fa912_11:;
wr(s->u,2,1,(!rd(s->u,31,1)));
L_1803fa912_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fa912_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,40,1)));
L_1803fa912_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fa912_15:;
wr(s->u,41,1,(rd(s->u,52,4)==((U)UINT64_C(0x1))));
L_1803fa912_16:;
wr(s->u,42,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa912_17:;
wr(s->u,43,1,(rd(s->r,512,1)^rd(s->u,42,1)));
L_1803fa912_18:;
wr(s->u,0,1,rd(s->u,41,1));
L_1803fa912_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,43,1)));
L_1803fa912_20:;
wr(s->u,2,1,(!rd(s->u,41,1)));
L_1803fa912_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fa912_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fa912_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fa912_24:;
wr(s->u,12,1,(rd(s->u,52,4)!=((U)UINT64_C(0x0))));
L_1803fa912_25:;
wr(s->u,13,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa912_26:;
wr(s->u,14,1,(!rd(s->u,12,1)));
L_1803fa912_27:;
wr(s->u,15,1,(rd(s->u,14,1)&rd(s->r,519,1)));
L_1803fa912_28:;
wr(s->u,16,1,(rd(s->u,12,1)&rd(s->u,13,1)));
L_1803fa912_29:;
wr(s->r,519,1,(rd(s->u,15,1)|rd(s->u,16,1)));
L_1803fa912_30:;
wr(s->u,17,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa912_31:;
wr(s->u,18,1,(!rd(s->u,12,1)));
L_1803fa912_32:;
wr(s->u,19,1,(rd(s->u,18,1)&rd(s->r,518,1)));
L_1803fa912_33:;
wr(s->u,20,1,(rd(s->u,12,1)&rd(s->u,17,1)));
L_1803fa912_34:;
wr(s->r,518,1,(rd(s->u,19,1)|rd(s->u,20,1)));
L_1803fa912_35:;
wr(s->u,21,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa912_36:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803fa912_37:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fa912_38:;
wr(s->u,27,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fa912_39:;
wr(s->u,28,1,(!rd(s->u,12,1)));
L_1803fa912_40:;
wr(s->u,29,1,(rd(s->u,28,1)&rd(s->r,514,1)));
L_1803fa912_41:;
wr(s->u,30,1,(rd(s->u,12,1)&rd(s->u,27,1)));
L_1803fa912_42:;
wr(s->r,514,1,(rd(s->u,29,1)|rd(s->u,30,1)));
L_1803fa912_43:;
/* 1803fa915: movsxd r9, eax */
L_1803fa915_0:;
L_1803fa915_1:;
wr(s->r,136,8,(U)sx(rd(s->r,0,4),4));
L_1803fa915_2:;
/* 1803fa918: cmp eax, edx */
L_1803fa918_0:;
L_1803fa918_1:;
wr(s->u,44,4,rd(s->r,16,4));
L_1803fa918_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,44,4)));
L_1803fa918_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,44,4),4,1));
L_1803fa918_4:;
wr(s->u,48,4,(rd(s->r,0,4)-rd(s->u,44,4)));
L_1803fa918_5:;
wr(s->r,519,1,(sx(rd(s->u,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa918_6:;
wr(s->r,518,1,(rd(s->u,48,4)==((U)UINT64_C(0x0))));
L_1803fa918_7:;
wr(s->u,6,4,(rd(s->u,48,4)&((U)UINT64_C(0xff))));
L_1803fa918_8:;
wr(s->u,10,1,pop(rd(s->u,6,4),4));
L_1803fa918_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fa918_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fa918_11:;
/* 1803fa91a: jge 0x1803fa9e4 */
L_1803fa91a_0:;
L_1803fa91a_1:;
wr(s->u,5,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fa91a_2:;
if(rd(s->u,5,1)){return UINT64_C(0x1803fa9e4);}
L_1803fa91a_3:;
return UINT64_C(0x1803fa920);
}
uint64_t b_1803fa915(CPU*s){
/* 1803fa915: movsxd r9, eax */
L_1803fa915_0:;
L_1803fa915_1:;
wr(s->r,136,8,(U)sx(rd(s->r,0,4),4));
L_1803fa915_2:;
/* 1803fa918: cmp eax, edx */
L_1803fa918_0:;
L_1803fa918_1:;
wr(s->u,7,4,rd(s->r,16,4));
L_1803fa918_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,7,4)));
L_1803fa918_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,7,4),4,1));
L_1803fa918_4:;
wr(s->u,11,4,(rd(s->r,0,4)-rd(s->u,7,4)));
L_1803fa918_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa918_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fa918_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fa918_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fa918_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fa918_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fa918_11:;
/* 1803fa91a: jge 0x1803fa9e4 */
L_1803fa91a_0:;
L_1803fa91a_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fa91a_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa9e4);}
L_1803fa91a_3:;
return UINT64_C(0x1803fa920);
}
uint64_t b_1803fa920(CPU*s){
/* 1803fa920: sub edx, eax */
L_1803fa920_0:;
L_1803fa920_1:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->r,0,4)));
L_1803fa920_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->r,0,4),4,1));
L_1803fa920_3:;
wr(s->r,16,4,(rd(s->r,16,4)-rd(s->r,0,4)));
L_1803fa920_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fa920_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa920_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fa920_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fa920_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803fa920_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fa920_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fa920_11:;
/* 1803fa922: movsxd r8, edx */
L_1803fa922_0:;
L_1803fa922_1:;
wr(s->r,128,8,(U)sx(rd(s->r,16,4),4));
L_1803fa922_2:;
/* 1803fa925: lea rcx, [rcx + r9*4] */
L_1803fa925_0:;
L_1803fa925_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fa925_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa925_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803fa925_4:;
/* 1803fa929: mov rdx, rcx */
L_1803fa929_0:;
L_1803fa929_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1803fa929_2:;
/* 1803fa92c: and rdx, 0xf */
L_1803fa92c_0:;
L_1803fa92c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa92c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa92c_3:;
wr(s->r,16,8,(rd(s->r,16,8)&((U)UINT64_C(0xf))));
L_1803fa92c_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa92c_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fa92c_6:;
wr(s->u,16,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fa92c_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803fa92c_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fa92c_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fa92c_10:;
/* 1803fa930: test edx, edx */
L_1803fa930_0:;
L_1803fa930_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa930_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa930_3:;
wr(s->u,26,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803fa930_4:;
wr(s->r,519,1,(sx(rd(s->u,26,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa930_5:;
wr(s->r,518,1,(rd(s->u,26,4)==((U)UINT64_C(0x0))));
L_1803fa930_6:;
wr(s->u,16,4,(rd(s->u,26,4)&((U)UINT64_C(0xff))));
L_1803fa930_7:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803fa930_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fa930_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fa930_10:;
/* 1803fa932: je 0x1803fa945 */
L_1803fa932_0:;
L_1803fa932_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fa945);}
L_1803fa932_2:;
return UINT64_C(0x1803fa934);
}
uint64_t b_1803fa934(CPU*s){
/* 1803fa934: test dl, 3 */
L_1803fa934_0:;
L_1803fa934_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa934_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa934_3:;
wr(s->u,4,1,(rd(s->r,16,1)&((U)UINT64_C(0x3))));
L_1803fa934_4:;
wr(s->r,519,1,(sx(rd(s->u,4,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803fa934_5:;
wr(s->r,518,1,(rd(s->u,4,1)==((U)UINT64_C(0x0))));
L_1803fa934_6:;
wr(s->u,1,1,(rd(s->u,4,1)&((U)UINT64_C(0xff))));
L_1803fa934_7:;
wr(s->u,2,1,pop(rd(s->u,1,1),1));
L_1803fa934_8:;
wr(s->u,3,1,(rd(s->u,2,1)&((U)UINT64_C(0x1))));
L_1803fa934_9:;
wr(s->r,514,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_1803fa934_10:;
/* 1803fa937: jne 0x1803fa9e7 */
L_1803fa937_0:;
L_1803fa937_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fa937_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fa9e7);}
L_1803fa937_3:;
return UINT64_C(0x1803fa93d);
}
uint64_t b_1803fa93d(CPU*s){
/* 1803fa93d: neg edx */
L_1803fa93d_0:;
L_1803fa93d_1:;
wr(s->r,512,1,(rd(s->r,16,4)!=((U)UINT64_C(0x0))));
L_1803fa93d_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,16,4),4,1));
L_1803fa93d_3:;
wr(s->r,16,4,(-rd(s->r,16,4)));
L_1803fa93d_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa93d_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fa93d_6:;
wr(s->u,14,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fa93d_7:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fa93d_8:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fa93d_9:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fa93d_10:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fa93d_11:;
/* 1803fa93f: add edx, 0x10 */
L_1803fa93f_0:;
L_1803fa93f_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+((U)UINT64_C(0x10)))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803fa93f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x10)),4,0));
L_1803fa93f_3:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x10))));
L_1803fa93f_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fa93f_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa93f_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fa93f_7:;
wr(s->u,14,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fa93f_8:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fa93f_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fa93f_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fa93f_11:;
/* 1803fa942: shr edx, 2 */
L_1803fa942_0:;
L_1803fa942_1:;
wr(s->u,75,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803fa942_2:;
wr(s->u,79,4,rd(s->r,16,4));
L_1803fa942_3:;
wr(s->r,16,4,((rd(s->u,75,4)>=32)?0:(rd(s->r,16,4)>>rd(s->u,75,4))));
L_1803fa942_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fa942_5:;
wr(s->u,43,1,(rd(s->u,75,4)==((U)UINT64_C(0x0))));
L_1803fa942_6:;
wr(s->u,44,4,(rd(s->u,75,4)-((U)UINT64_C(0x1))));
L_1803fa942_7:;
wr(s->u,48,4,((rd(s->u,44,4)>=32)?0:(rd(s->u,79,4)>>rd(s->u,44,4))));
L_1803fa942_8:;
wr(s->u,52,4,(rd(s->u,48,4)&((U)UINT64_C(0x1))));
L_1803fa942_9:;
wr(s->u,56,1,(rd(s->u,52,4)!=((U)UINT64_C(0x0))));
L_1803fa942_10:;
wr(s->u,0,1,rd(s->u,43,1));
L_1803fa942_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fa942_12:;
wr(s->u,2,1,(!rd(s->u,43,1)));
L_1803fa942_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fa942_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,56,1)));
L_1803fa942_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fa942_16:;
wr(s->u,57,1,(rd(s->u,75,4)==((U)UINT64_C(0x1))));
L_1803fa942_17:;
wr(s->u,58,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa942_18:;
wr(s->u,0,1,rd(s->u,57,1));
L_1803fa942_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fa942_20:;
wr(s->u,2,1,(!rd(s->u,57,1)));
L_1803fa942_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fa942_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,58,1)));
L_1803fa942_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fa942_24:;
wr(s->u,24,1,(rd(s->u,75,4)!=((U)UINT64_C(0x0))));
L_1803fa942_25:;
wr(s->u,25,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa942_26:;
wr(s->u,26,1,(!rd(s->u,24,1)));
L_1803fa942_27:;
wr(s->u,27,1,(rd(s->u,26,1)&rd(s->r,519,1)));
L_1803fa942_28:;
wr(s->u,28,1,(rd(s->u,24,1)&rd(s->u,25,1)));
L_1803fa942_29:;
wr(s->r,519,1,(rd(s->u,27,1)|rd(s->u,28,1)));
L_1803fa942_30:;
wr(s->u,29,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fa942_31:;
wr(s->u,30,1,(!rd(s->u,24,1)));
L_1803fa942_32:;
wr(s->u,31,1,(rd(s->u,30,1)&rd(s->r,518,1)));
L_1803fa942_33:;
wr(s->u,32,1,(rd(s->u,24,1)&rd(s->u,29,1)));
L_1803fa942_34:;
wr(s->r,518,1,(rd(s->u,31,1)|rd(s->u,32,1)));
L_1803fa942_35:;
wr(s->u,33,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fa942_36:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803fa942_37:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803fa942_38:;
wr(s->u,39,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803fa942_39:;
wr(s->u,40,1,(!rd(s->u,24,1)));
L_1803fa942_40:;
wr(s->u,41,1,(rd(s->u,40,1)&rd(s->r,514,1)));
L_1803fa942_41:;
wr(s->u,42,1,(rd(s->u,24,1)&rd(s->u,39,1)));
L_1803fa942_42:;
wr(s->r,514,1,(rd(s->u,41,1)|rd(s->u,42,1)));
L_1803fa942_43:;
/* 1803fa945: movsxd rax, edx */
L_1803fa945_0:;
L_1803fa945_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803fa945_2:;
/* 1803fa948: lea r9, [rax + 8] */
L_1803fa948_0:;
L_1803fa948_1:;
wr(s->u,5,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803fa948_2:;
wr(s->r,136,8,rd(s->u,5,8));
L_1803fa948_3:;
/* 1803fa94c: cmp r8, r9 */
L_1803fa94c_0:;
L_1803fa94c_1:;
wr(s->u,59,8,rd(s->r,136,8));
L_1803fa94c_2:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->u,59,8)));
L_1803fa94c_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->u,59,8),8,1));
L_1803fa94c_4:;
wr(s->u,67,8,(rd(s->r,128,8)-rd(s->u,59,8)));
L_1803fa94c_5:;
wr(s->r,519,1,(sx(rd(s->u,67,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa94c_6:;
wr(s->r,518,1,(rd(s->u,67,8)==((U)UINT64_C(0x0))));
L_1803fa94c_7:;
wr(s->u,14,8,(rd(s->u,67,8)&((U)UINT64_C(0xff))));
L_1803fa94c_8:;
wr(s->u,22,1,pop(rd(s->u,14,8),8));
L_1803fa94c_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fa94c_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fa94c_11:;
/* 1803fa94f: jl 0x1803fa9e7 */
L_1803fa94f_0:;
L_1803fa94f_1:;
wr(s->u,13,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa94f_2:;
if(rd(s->u,13,1)){return UINT64_C(0x1803fa9e7);}
L_1803fa94f_3:;
return UINT64_C(0x1803fa955);
}
uint64_t b_1803fa945(CPU*s){
/* 1803fa945: movsxd rax, edx */
L_1803fa945_0:;
L_1803fa945_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803fa945_2:;
/* 1803fa948: lea r9, [rax + 8] */
L_1803fa948_0:;
L_1803fa948_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803fa948_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1803fa948_3:;
/* 1803fa94c: cmp r8, r9 */
L_1803fa94c_0:;
L_1803fa94c_1:;
wr(s->u,19,8,rd(s->r,136,8));
L_1803fa94c_2:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->u,19,8)));
L_1803fa94c_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->u,19,8),8,1));
L_1803fa94c_4:;
wr(s->u,27,8,(rd(s->r,128,8)-rd(s->u,19,8)));
L_1803fa94c_5:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa94c_6:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803fa94c_7:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803fa94c_8:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fa94c_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fa94c_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fa94c_11:;
/* 1803fa94f: jl 0x1803fa9e7 */
L_1803fa94f_0:;
L_1803fa94f_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa94f_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803fa9e7);}
L_1803fa94f_3:;
return UINT64_C(0x1803fa955);
}
uint64_t b_1803fa955(CPU*s){
/* 1803fa955: mov r9d, r8d */
L_1803fa955_0:;
L_1803fa955_1:;
wr(s->r,136,4,rd(s->r,128,4));
L_1803fa955_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fa955_3:;
/* 1803fa958: neg edx */
L_1803fa958_0:;
L_1803fa958_1:;
wr(s->r,512,1,(rd(s->r,16,4)!=((U)UINT64_C(0x0))));
L_1803fa958_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,16,4),4,1));
L_1803fa958_3:;
wr(s->r,16,4,(-rd(s->r,16,4)));
L_1803fa958_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa958_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fa958_6:;
wr(s->u,18,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fa958_7:;
wr(s->u,26,1,pop(rd(s->u,18,4),4));
L_1803fa958_8:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803fa958_9:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803fa958_10:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fa958_11:;
/* 1803fa95a: add edx, r9d */
L_1803fa95a_0:;
L_1803fa95a_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->r,136,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803fa95a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->r,136,4),4,0));
L_1803fa95a_3:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->r,136,4)));
L_1803fa95a_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fa95a_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa95a_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fa95a_7:;
wr(s->u,18,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fa95a_8:;
wr(s->u,26,1,pop(rd(s->u,18,4),4));
L_1803fa95a_9:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803fa95a_10:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803fa95a_11:;
/* 1803fa95d: and edx, 7 */
L_1803fa95d_0:;
L_1803fa95d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa95d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa95d_3:;
wr(s->r,16,4,(rd(s->r,16,4)&((U)UINT64_C(0x7))));
L_1803fa95d_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fa95d_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa95d_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fa95d_7:;
wr(s->u,18,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fa95d_8:;
wr(s->u,26,1,pop(rd(s->u,18,4),4));
L_1803fa95d_9:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803fa95d_10:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803fa95d_11:;
/* 1803fa960: sub r9d, edx */
L_1803fa960_0:;
L_1803fa960_1:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->r,16,4)));
L_1803fa960_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->r,16,4),4,1));
L_1803fa960_3:;
wr(s->r,136,4,(rd(s->r,136,4)-rd(s->r,16,4)));
L_1803fa960_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fa960_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa960_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803fa960_7:;
wr(s->u,18,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803fa960_8:;
wr(s->u,26,1,pop(rd(s->u,18,4),4));
L_1803fa960_9:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803fa960_10:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803fa960_11:;
/* 1803fa963: movsxd rdx, r9d */
L_1803fa963_0:;
L_1803fa963_1:;
wr(s->r,16,8,(U)sx(rd(s->r,136,4),4));
L_1803fa963_2:;
/* 1803fa966: mov r10, rcx */
L_1803fa966_0:;
L_1803fa966_1:;
wr(s->r,144,8,rd(s->r,8,8));
L_1803fa966_2:;
/* 1803fa969: lea r9, [rcx + rax*4] */
L_1803fa969_0:;
L_1803fa969_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa969_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa969_3:;
wr(s->r,136,8,rd(s->u,8,8));
L_1803fa969_4:;
/* 1803fa96d: test rax, rax */
L_1803fa96d_0:;
L_1803fa96d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa96d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa96d_3:;
wr(s->u,28,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803fa96d_4:;
wr(s->r,519,1,(sx(rd(s->u,28,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa96d_5:;
wr(s->r,518,1,(rd(s->u,28,8)==((U)UINT64_C(0x0))));
L_1803fa96d_6:;
wr(s->u,18,8,(rd(s->u,28,8)&((U)UINT64_C(0xff))));
L_1803fa96d_7:;
wr(s->u,26,1,pop(rd(s->u,18,8),8));
L_1803fa96d_8:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803fa96d_9:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803fa96d_10:;
/* 1803fa970: jle 0x1803fa98c */
L_1803fa970_0:;
L_1803fa970_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa970_2:;
wr(s->u,17,1,((rd(s->r,518,1)!=0)||(rd(s->u,16,1)!=0)));
L_1803fa970_3:;
if(rd(s->u,17,1)){return UINT64_C(0x1803fa98c);}
L_1803fa970_4:;
return UINT64_C(0x1803fa972);
}
uint64_t b_1803fa972(CPU*s){
/* 1803fa972: movss xmm0, dword ptr [r10] */
L_1803fa972_0:;
L_1803fa972_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,144,8),4));
L_1803fa972_2:;
wr(s->r,4608,4,rd(s->u,0,4));
L_1803fa972_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fa972_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fa972_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fa972_6:;
/* 1803fa977: andps xmm0, xmmword ptr [rip + 0x413aa2] */
L_1803fa977_0:;
L_1803fa977_1:;
wr(s->u,31,16,mr(UINT64_C(0x18080e420),16));
L_1803fa977_2:;
wr(s->r,4608,4,(rd(s->r,4608,4)&rd(s->u,31,4)));
L_1803fa977_3:;
wr(s->r,4612,4,(rd(s->r,4612,4)&rd(s->u,35,4)));
L_1803fa977_4:;
wr(s->r,4616,4,(rd(s->r,4616,4)&rd(s->u,39,4)));
L_1803fa977_5:;
wr(s->r,4620,4,(rd(s->r,4620,4)&rd(s->u,43,4)));
L_1803fa977_6:;
/* 1803fa97e: movss dword ptr [r10], xmm0 */
L_1803fa97e_0:;
L_1803fa97e_1:;
wr(s->u,0,4,rd(s->r,4608,4));
L_1803fa97e_2:;
mw((uint64_t)rd(s->r,144,8),4,rd(s->u,0,4));
L_1803fa97e_3:;
/* 1803fa983: add r10, 4 */
L_1803fa983_0:;
L_1803fa983_1:;
wr(s->r,512,1,(((rd(s->r,144,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,144,8)));
L_1803fa983_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x4)),8,0));
L_1803fa983_3:;
wr(s->r,144,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803fa983_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa983_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803fa983_6:;
wr(s->u,5,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803fa983_7:;
wr(s->u,13,1,pop(rd(s->u,5,8),8));
L_1803fa983_8:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa983_9:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa983_10:;
/* 1803fa987: cmp r10, r9 */
L_1803fa987_0:;
L_1803fa987_1:;
wr(s->u,15,8,rd(s->r,136,8));
L_1803fa987_2:;
wr(s->r,512,1,(rd(s->r,144,8)<rd(s->u,15,8)));
L_1803fa987_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->u,15,8),8,1));
L_1803fa987_4:;
wr(s->u,23,8,(rd(s->r,144,8)-rd(s->u,15,8)));
L_1803fa987_5:;
wr(s->r,519,1,(sx(rd(s->u,23,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa987_6:;
wr(s->r,518,1,(rd(s->u,23,8)==((U)UINT64_C(0x0))));
L_1803fa987_7:;
wr(s->u,5,8,(rd(s->u,23,8)&((U)UINT64_C(0xff))));
L_1803fa987_8:;
wr(s->u,13,1,pop(rd(s->u,5,8),8));
L_1803fa987_9:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa987_10:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa987_11:;
/* 1803fa98a: jl 0x1803fa972 */
L_1803fa98a_0:;
L_1803fa98a_1:;
wr(s->u,4,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa98a_2:;
if(rd(s->u,4,1)){goto L_1803fa972_0;}
L_1803fa98a_3:;
return UINT64_C(0x1803fa98c);
}
uint64_t b_1803fa98c(CPU*s){
/* 1803fa98c: lea r9, [rcx + rax*4] */
L_1803fa98c_0:;
L_1803fa98c_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fa98c_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803fa98c_3:;
wr(s->r,136,8,rd(s->u,16,8));
L_1803fa98c_4:;
/* 1803fa990: lea rax, [rcx + rdx*4] */
L_1803fa990_0:;
L_1803fa990_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803fa990_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803fa990_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803fa990_4:;
/* 1803fa994: movaps xmm0, xmmword ptr [rip + 0x413a75] */
L_1803fa994_0:;
L_1803fa994_1:;
wr(s->u,83,16,mr(UINT64_C(0x18080e410),16));
L_1803fa994_2:;
wr(s->r,4608,4,rd(s->u,83,4));
L_1803fa994_3:;
wr(s->r,4612,4,rd(s->u,87,4));
L_1803fa994_4:;
wr(s->r,4616,4,rd(s->u,91,4));
L_1803fa994_5:;
wr(s->r,4620,4,rd(s->u,95,4));
L_1803fa994_6:;
/* 1803fa99b: movaps xmm1, xmmword ptr [rip + 0x413a6e] */
L_1803fa99b_0:;
L_1803fa99b_1:;
wr(s->u,83,16,mr(UINT64_C(0x18080e410),16));
L_1803fa99b_2:;
wr(s->r,4672,4,rd(s->u,83,4));
L_1803fa99b_3:;
wr(s->r,4676,4,rd(s->u,87,4));
L_1803fa99b_4:;
wr(s->r,4680,4,rd(s->u,91,4));
L_1803fa99b_5:;
wr(s->r,4684,4,rd(s->u,95,4));
L_1803fa99b_6:;
/* 1803fa9a2: andps xmm0, xmmword ptr [r9] */
L_1803fa9a2_0:;
L_1803fa9a2_1:;
wr(s->u,24,16,mr((uint64_t)rd(s->r,136,8),16));
L_1803fa9a2_2:;
wr(s->u,67,16,rd(s->u,24,16));
L_1803fa9a2_3:;
wr(s->r,4608,4,(rd(s->r,4608,4)&rd(s->u,67,4)));
L_1803fa9a2_4:;
wr(s->r,4612,4,(rd(s->r,4612,4)&rd(s->u,71,4)));
L_1803fa9a2_5:;
wr(s->r,4616,4,(rd(s->r,4616,4)&rd(s->u,75,4)));
L_1803fa9a2_6:;
wr(s->r,4620,4,(rd(s->r,4620,4)&rd(s->u,79,4)));
L_1803fa9a2_7:;
/* 1803fa9a6: andps xmm1, xmmword ptr [r9 + 0x10] */
L_1803fa9a6_0:;
L_1803fa9a6_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x10))));
L_1803fa9a6_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fa9a6_3:;
wr(s->u,67,16,rd(s->u,24,16));
L_1803fa9a6_4:;
wr(s->r,4672,4,(rd(s->r,4672,4)&rd(s->u,67,4)));
L_1803fa9a6_5:;
wr(s->r,4676,4,(rd(s->r,4676,4)&rd(s->u,71,4)));
L_1803fa9a6_6:;
wr(s->r,4680,4,(rd(s->r,4680,4)&rd(s->u,75,4)));
L_1803fa9a6_7:;
wr(s->r,4684,4,(rd(s->r,4684,4)&rd(s->u,79,4)));
L_1803fa9a6_8:;
/* 1803fa9ab: movaps xmmword ptr [r9], xmm0 */
L_1803fa9ab_0:;
L_1803fa9ab_1:;
wr(s->u,24,16,rd(s->r,4608,16));
L_1803fa9ab_2:;
mw((uint64_t)rd(s->r,136,8),16,rd(s->u,24,16));
L_1803fa9ab_3:;
/* 1803fa9af: movaps xmmword ptr [r9 + 0x10], xmm1 */
L_1803fa9af_0:;
L_1803fa9af_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x10))));
L_1803fa9af_2:;
wr(s->u,24,16,rd(s->r,4672,16));
L_1803fa9af_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,24,16));
L_1803fa9af_4:;
/* 1803fa9b4: add r9, 0x20 */
L_1803fa9b4_0:;
L_1803fa9b4_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803fa9b4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x20)),8,0));
L_1803fa9b4_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x20))));
L_1803fa9b4_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa9b4_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fa9b4_6:;
wr(s->u,41,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fa9b4_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803fa9b4_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803fa9b4_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803fa9b4_10:;
/* 1803fa9b8: cmp r9, rax */
L_1803fa9b8_0:;
L_1803fa9b8_1:;
wr(s->u,51,8,rd(s->r,0,8));
L_1803fa9b8_2:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->u,51,8)));
L_1803fa9b8_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->u,51,8),8,1));
L_1803fa9b8_4:;
wr(s->u,59,8,(rd(s->r,136,8)-rd(s->u,51,8)));
L_1803fa9b8_5:;
wr(s->r,519,1,(sx(rd(s->u,59,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa9b8_6:;
wr(s->r,518,1,(rd(s->u,59,8)==((U)UINT64_C(0x0))));
L_1803fa9b8_7:;
wr(s->u,41,8,(rd(s->u,59,8)&((U)UINT64_C(0xff))));
L_1803fa9b8_8:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803fa9b8_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803fa9b8_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803fa9b8_11:;
/* 1803fa9bb: jl 0x1803fa994 */
L_1803fa9bb_0:;
L_1803fa9bb_1:;
wr(s->u,40,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa9bb_2:;
if(rd(s->u,40,1)){goto L_1803fa994_0;}
L_1803fa9bb_3:;
return UINT64_C(0x1803fa9bd);
}
uint64_t b_1803fa994(CPU*s){
/* 1803fa994: movaps xmm0, xmmword ptr [rip + 0x413a75] */
L_1803fa994_0:;
L_1803fa994_1:;
wr(s->u,67,16,mr(UINT64_C(0x18080e410),16));
L_1803fa994_2:;
wr(s->r,4608,4,rd(s->u,67,4));
L_1803fa994_3:;
wr(s->r,4612,4,rd(s->u,71,4));
L_1803fa994_4:;
wr(s->r,4616,4,rd(s->u,75,4));
L_1803fa994_5:;
wr(s->r,4620,4,rd(s->u,79,4));
L_1803fa994_6:;
/* 1803fa99b: movaps xmm1, xmmword ptr [rip + 0x413a6e] */
L_1803fa99b_0:;
L_1803fa99b_1:;
wr(s->u,67,16,mr(UINT64_C(0x18080e410),16));
L_1803fa99b_2:;
wr(s->r,4672,4,rd(s->u,67,4));
L_1803fa99b_3:;
wr(s->r,4676,4,rd(s->u,71,4));
L_1803fa99b_4:;
wr(s->r,4680,4,rd(s->u,75,4));
L_1803fa99b_5:;
wr(s->r,4684,4,rd(s->u,79,4));
L_1803fa99b_6:;
/* 1803fa9a2: andps xmm0, xmmword ptr [r9] */
L_1803fa9a2_0:;
L_1803fa9a2_1:;
wr(s->u,8,16,mr((uint64_t)rd(s->r,136,8),16));
L_1803fa9a2_2:;
wr(s->u,51,16,rd(s->u,8,16));
L_1803fa9a2_3:;
wr(s->r,4608,4,(rd(s->r,4608,4)&rd(s->u,51,4)));
L_1803fa9a2_4:;
wr(s->r,4612,4,(rd(s->r,4612,4)&rd(s->u,55,4)));
L_1803fa9a2_5:;
wr(s->r,4616,4,(rd(s->r,4616,4)&rd(s->u,59,4)));
L_1803fa9a2_6:;
wr(s->r,4620,4,(rd(s->r,4620,4)&rd(s->u,63,4)));
L_1803fa9a2_7:;
/* 1803fa9a6: andps xmm1, xmmword ptr [r9 + 0x10] */
L_1803fa9a6_0:;
L_1803fa9a6_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x10))));
L_1803fa9a6_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fa9a6_3:;
wr(s->u,51,16,rd(s->u,8,16));
L_1803fa9a6_4:;
wr(s->r,4672,4,(rd(s->r,4672,4)&rd(s->u,51,4)));
L_1803fa9a6_5:;
wr(s->r,4676,4,(rd(s->r,4676,4)&rd(s->u,55,4)));
L_1803fa9a6_6:;
wr(s->r,4680,4,(rd(s->r,4680,4)&rd(s->u,59,4)));
L_1803fa9a6_7:;
wr(s->r,4684,4,(rd(s->r,4684,4)&rd(s->u,63,4)));
L_1803fa9a6_8:;
/* 1803fa9ab: movaps xmmword ptr [r9], xmm0 */
L_1803fa9ab_0:;
L_1803fa9ab_1:;
wr(s->u,8,16,rd(s->r,4608,16));
L_1803fa9ab_2:;
mw((uint64_t)rd(s->r,136,8),16,rd(s->u,8,16));
L_1803fa9ab_3:;
/* 1803fa9af: movaps xmmword ptr [r9 + 0x10], xmm1 */
L_1803fa9af_0:;
L_1803fa9af_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x10))));
L_1803fa9af_2:;
wr(s->u,8,16,rd(s->r,4672,16));
L_1803fa9af_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,8,16));
L_1803fa9af_4:;
/* 1803fa9b4: add r9, 0x20 */
L_1803fa9b4_0:;
L_1803fa9b4_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803fa9b4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x20)),8,0));
L_1803fa9b4_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x20))));
L_1803fa9b4_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa9b4_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fa9b4_6:;
wr(s->u,25,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fa9b4_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fa9b4_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fa9b4_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fa9b4_10:;
/* 1803fa9b8: cmp r9, rax */
L_1803fa9b8_0:;
L_1803fa9b8_1:;
wr(s->u,35,8,rd(s->r,0,8));
L_1803fa9b8_2:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->u,35,8)));
L_1803fa9b8_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->u,35,8),8,1));
L_1803fa9b8_4:;
wr(s->u,43,8,(rd(s->r,136,8)-rd(s->u,35,8)));
L_1803fa9b8_5:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa9b8_6:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1803fa9b8_7:;
wr(s->u,25,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1803fa9b8_8:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fa9b8_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fa9b8_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fa9b8_11:;
/* 1803fa9bb: jl 0x1803fa994 */
L_1803fa9bb_0:;
L_1803fa9bb_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa9bb_2:;
if(rd(s->u,24,1)){goto L_1803fa994_0;}
L_1803fa9bb_3:;
return UINT64_C(0x1803fa9bd);
}
uint64_t b_1803fa9bd(CPU*s){
/* 1803fa9bd: lea r9, [rcx + rdx*4] */
L_1803fa9bd_0:;
L_1803fa9bd_1:;
wr(s->u,0,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803fa9bd_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa9bd_3:;
wr(s->r,136,8,rd(s->u,8,8));
L_1803fa9bd_4:;
/* 1803fa9c1: lea rax, [rcx + r8*4] */
L_1803fa9c1_0:;
L_1803fa9c1_1:;
wr(s->u,0,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803fa9c1_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fa9c1_3:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803fa9c1_4:;
/* 1803fa9c5: cmp rdx, r8 */
L_1803fa9c5_0:;
L_1803fa9c5_1:;
wr(s->u,27,8,rd(s->r,128,8));
L_1803fa9c5_2:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,27,8)));
L_1803fa9c5_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,27,8),8,1));
L_1803fa9c5_4:;
wr(s->u,35,8,(rd(s->r,16,8)-rd(s->u,27,8)));
L_1803fa9c5_5:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa9c5_6:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1803fa9c5_7:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1803fa9c5_8:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803fa9c5_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fa9c5_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fa9c5_11:;
/* 1803fa9c8: jge 0x1803fa9e4 */
L_1803fa9c8_0:;
L_1803fa9c8_1:;
wr(s->u,16,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fa9c8_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803fa9e4);}
L_1803fa9c8_3:;
return UINT64_C(0x1803fa9ca);
}
uint64_t b_1803fa9ca(CPU*s){
/* 1803fa9ca: movss xmm0, dword ptr [r9] */
L_1803fa9ca_0:;
L_1803fa9ca_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,136,8),4));
L_1803fa9ca_2:;
wr(s->r,4608,4,rd(s->u,0,4));
L_1803fa9ca_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fa9ca_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fa9ca_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fa9ca_6:;
/* 1803fa9cf: andps xmm0, xmmword ptr [rip + 0x413a4a] */
L_1803fa9cf_0:;
L_1803fa9cf_1:;
wr(s->u,31,16,mr(UINT64_C(0x18080e420),16));
L_1803fa9cf_2:;
wr(s->r,4608,4,(rd(s->r,4608,4)&rd(s->u,31,4)));
L_1803fa9cf_3:;
wr(s->r,4612,4,(rd(s->r,4612,4)&rd(s->u,35,4)));
L_1803fa9cf_4:;
wr(s->r,4616,4,(rd(s->r,4616,4)&rd(s->u,39,4)));
L_1803fa9cf_5:;
wr(s->r,4620,4,(rd(s->r,4620,4)&rd(s->u,43,4)));
L_1803fa9cf_6:;
/* 1803fa9d6: movss dword ptr [r9], xmm0 */
L_1803fa9d6_0:;
L_1803fa9d6_1:;
wr(s->u,0,4,rd(s->r,4608,4));
L_1803fa9d6_2:;
mw((uint64_t)rd(s->r,136,8),4,rd(s->u,0,4));
L_1803fa9d6_3:;
/* 1803fa9db: add r9, 4 */
L_1803fa9db_0:;
L_1803fa9db_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803fa9db_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x4)),8,0));
L_1803fa9db_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x4))));
L_1803fa9db_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa9db_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fa9db_6:;
wr(s->u,5,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fa9db_7:;
wr(s->u,13,1,pop(rd(s->u,5,8),8));
L_1803fa9db_8:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa9db_9:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa9db_10:;
/* 1803fa9df: cmp r9, rax */
L_1803fa9df_0:;
L_1803fa9df_1:;
wr(s->u,15,8,rd(s->r,0,8));
L_1803fa9df_2:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->u,15,8)));
L_1803fa9df_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->u,15,8),8,1));
L_1803fa9df_4:;
wr(s->u,23,8,(rd(s->r,136,8)-rd(s->u,15,8)));
L_1803fa9df_5:;
wr(s->r,519,1,(sx(rd(s->u,23,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fa9df_6:;
wr(s->r,518,1,(rd(s->u,23,8)==((U)UINT64_C(0x0))));
L_1803fa9df_7:;
wr(s->u,5,8,(rd(s->u,23,8)&((U)UINT64_C(0xff))));
L_1803fa9df_8:;
wr(s->u,13,1,pop(rd(s->u,5,8),8));
L_1803fa9df_9:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fa9df_10:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fa9df_11:;
/* 1803fa9e2: jl 0x1803fa9ca */
L_1803fa9e2_0:;
L_1803fa9e2_1:;
wr(s->u,4,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fa9e2_2:;
if(rd(s->u,4,1)){goto L_1803fa9ca_0;}
L_1803fa9e2_3:;
return UINT64_C(0x1803fa9e4);
}
uint64_t b_1803fa9e4(CPU*s){
/* 1803fa9e4: xor eax, eax */
L_1803fa9e4_0:;
L_1803fa9e4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa9e4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa9e4_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fa9e4_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fa9e4_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa9e4_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fa9e4_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fa9e4_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fa9e4_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fa9e4_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fa9e4_11:;
/* 1803fa9e6: ret  */
L_1803fa9e6_0:;
L_1803fa9e6_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa9e6_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa9e6_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa9e6_4:;
return UINT64_C(0x1803fa9e7);
}
uint64_t b_1803fa9e7(CPU*s){
/* 1803fa9e7: xor edx, edx */
L_1803fa9e7_0:;
L_1803fa9e7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fa9e7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fa9e7_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803fa9e7_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fa9e7_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fa9e7_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fa9e7_7:;
wr(s->u,0,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fa9e7_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fa9e7_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fa9e7_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fa9e7_11:;
/* 1803fa9e9: jmp 0x1803fa9bd */
L_1803fa9e9_0:;
L_1803fa9e9_1:;
return UINT64_C(0x1803fa9bd);
L_1803fa9e9_2:;
return UINT64_C(0x1803fa9eb);
}
uint64_t b_1803fa9eb(CPU*s){
/* 1803fa9eb: mov eax, 0xfffffffa */
L_1803fa9eb_0:;
L_1803fa9eb_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fa9eb_2:;
/* 1803fa9f0: ret  */
L_1803fa9f0_0:;
L_1803fa9f0_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa9f0_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa9f0_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa9f0_4:;
return UINT64_C(0x1803fa9f1);
}
uint64_t b_1803fa9f1(CPU*s){
/* 1803fa9f1: mov eax, 0xfffffff8 */
L_1803fa9f1_0:;
L_1803fa9f1_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fa9f1_2:;
/* 1803fa9f6: ret  */
L_1803fa9f6_0:;
L_1803fa9f6_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fa9f6_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fa9f6_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fa9f6_4:;
return UINT64_C(0x1803fa9f7);
}
uint64_t b_1803fa9f8(CPU*s){
/* 1803fa9f8: push r15 */
L_1803fa9f8_0:;
L_1803fa9f8_1:;
wr(s->u,24,8,rd(s->r,184,8));
L_1803fa9f8_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fa9f8_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803fa9f8_4:;
/* 1803fa9fa: push r14 */
L_1803fa9fa_0:;
L_1803fa9fa_1:;
wr(s->u,24,8,rd(s->r,176,8));
L_1803fa9fa_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fa9fa_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803fa9fa_4:;
/* 1803fa9fc: push r13 */
L_1803fa9fc_0:;
L_1803fa9fc_1:;
wr(s->u,24,8,rd(s->r,168,8));
L_1803fa9fc_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fa9fc_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803fa9fc_4:;
/* 1803fa9fe: push r12 */
L_1803fa9fe_0:;
L_1803fa9fe_1:;
wr(s->u,24,8,rd(s->r,160,8));
L_1803fa9fe_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fa9fe_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803fa9fe_4:;
/* 1803faa00: push rdi */
L_1803faa00_0:;
L_1803faa00_1:;
wr(s->u,24,8,rd(s->r,56,8));
L_1803faa00_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803faa00_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803faa00_4:;
/* 1803faa01: push rsi */
L_1803faa01_0:;
L_1803faa01_1:;
wr(s->u,24,8,rd(s->r,48,8));
L_1803faa01_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803faa01_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803faa01_4:;
/* 1803faa02: push rbp */
L_1803faa02_0:;
L_1803faa02_1:;
wr(s->u,24,8,rd(s->r,40,8));
L_1803faa02_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803faa02_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803faa02_4:;
/* 1803faa03: push rbx */
L_1803faa03_0:;
L_1803faa03_1:;
wr(s->u,24,8,rd(s->r,24,8));
L_1803faa03_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803faa03_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803faa03_4:;
/* 1803faa04: sub rsp, 0x238 */
L_1803faa04_0:;
L_1803faa04_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x238))));
L_1803faa04_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x238)),8,1));
L_1803faa04_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x238))));
L_1803faa04_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803faa04_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803faa04_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803faa04_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803faa04_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803faa04_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803faa04_10:;
/* 1803faa0b: movaps xmmword ptr [rsp + 0x30], xmm7 */
L_1803faa0b_0:;
L_1803faa0b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803faa0b_2:;
wr(s->u,8,16,rd(s->r,5056,16));
L_1803faa0b_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,8,16));
L_1803faa0b_4:;
/* 1803faa10: mov rbp, rcx */
L_1803faa10_0:;
L_1803faa10_1:;
wr(s->r,40,8,rd(s->r,8,8));
L_1803faa10_2:;
/* 1803faa13: movsxd rsi, edx */
L_1803faa13_0:;
L_1803faa13_1:;
wr(s->r,48,8,(U)sx(rd(s->r,16,4),4));
L_1803faa13_2:;
/* 1803faa16: test rbp, rbp */
L_1803faa16_0:;
L_1803faa16_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803faa16_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803faa16_3:;
wr(s->u,42,8,(rd(s->r,40,8)&rd(s->r,40,8)));
L_1803faa16_4:;
wr(s->r,519,1,(sx(rd(s->u,42,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803faa16_5:;
wr(s->r,518,1,(rd(s->u,42,8)==((U)UINT64_C(0x0))));
L_1803faa16_6:;
wr(s->u,32,8,(rd(s->u,42,8)&((U)UINT64_C(0xff))));
L_1803faa16_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803faa16_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803faa16_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803faa16_10:;
/* 1803faa19: je 0x1803fbc97 */
L_1803faa19_0:;
L_1803faa19_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fbc97);}
L_1803faa19_2:;
return UINT64_C(0x1803faa1f);
}
uint64_t b_1803faa1f(CPU*s){
/* 1803faa1f: test rsi, rsi */
L_1803faa1f_0:;
L_1803faa1f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803faa1f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803faa1f_3:;
wr(s->u,12,8,(rd(s->r,48,8)&rd(s->r,48,8)));
L_1803faa1f_4:;
wr(s->r,519,1,(sx(rd(s->u,12,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803faa1f_5:;
wr(s->r,518,1,(rd(s->u,12,8)==((U)UINT64_C(0x0))));
L_1803faa1f_6:;
wr(s->u,2,8,(rd(s->u,12,8)&((U)UINT64_C(0xff))));
L_1803faa1f_7:;
wr(s->u,10,1,pop(rd(s->u,2,8),8));
L_1803faa1f_8:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803faa1f_9:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803faa1f_10:;
/* 1803faa22: jle 0x1803fbb62 */
L_1803faa22_0:;
L_1803faa22_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803faa22_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803faa22_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fbb62);}
L_1803faa22_4:;
return UINT64_C(0x1803faa28);
}
uint64_t b_1803faa28(CPU*s){
/* 1803faa28: xor eax, eax */
L_1803faa28_0:;
L_1803faa28_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803faa28_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803faa28_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803faa28_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803faa28_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803faa28_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803faa28_7:;
wr(s->u,13,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803faa28_8:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803faa28_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803faa28_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803faa28_11:;
/* 1803faa2a: mov dword ptr [rsp + 0x158], eax */
L_1803faa2a_0:;
L_1803faa2a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x158))+rd(s->r,32,8)));
L_1803faa2a_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803faa2a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803faa2a_4:;
/* 1803faa31: mov dword ptr [rsp + 0x148], eax */
L_1803faa31_0:;
L_1803faa31_1:;
wr(s->u,0,8,(((U)UINT64_C(0x148))+rd(s->r,32,8)));
L_1803faa31_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803faa31_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803faa31_4:;
/* 1803faa38: mov dword ptr [rsp + 0x140], eax */
L_1803faa38_0:;
L_1803faa38_1:;
wr(s->u,0,8,(((U)UINT64_C(0x140))+rd(s->r,32,8)));
L_1803faa38_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803faa38_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803faa38_4:;
/* 1803faa3f: mov dword ptr [rsp + 0x138], eax */
L_1803faa3f_0:;
L_1803faa3f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x138))+rd(s->r,32,8)));
L_1803faa3f_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803faa3f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803faa3f_4:;
/* 1803faa46: cmp rsi, 4 */
L_1803faa46_0:;
L_1803faa46_1:;
wr(s->u,23,8,rd(s->r,48,8));
L_1803faa46_2:;
wr(s->r,512,1,(rd(s->u,23,8)<((U)UINT64_C(0x4))));
L_1803faa46_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,23,8),((U)UINT64_C(0x4)),8,1));
L_1803faa46_4:;
wr(s->u,31,8,(rd(s->u,23,8)-((U)UINT64_C(0x4))));
L_1803faa46_5:;
wr(s->r,519,1,(sx(rd(s->u,31,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803faa46_6:;
wr(s->r,518,1,(rd(s->u,31,8)==((U)UINT64_C(0x0))));
L_1803faa46_7:;
wr(s->u,13,8,(rd(s->u,31,8)&((U)UINT64_C(0xff))));
L_1803faa46_8:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803faa46_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803faa46_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803faa46_11:;
/* 1803faa4a: jl 0x1803fba70 */
L_1803faa4a_0:;
L_1803faa4a_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803faa4a_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803fba70);}
L_1803faa4a_3:;
return UINT64_C(0x1803faa50);
}
uint64_t b_1803faa50(CPU*s){
/* 1803faa50: mov rdx, qword ptr [rip + 0x4139f1] */
L_1803faa50_0:;
L_1803faa50_1:;
wr(s->r,16,8,mr(UINT64_C(0x18080e448),8));
L_1803faa50_2:;
/* 1803faa57: mov rcx, qword ptr [rip + 0x4139e2] */
L_1803faa57_0:;
L_1803faa57_1:;
wr(s->r,8,8,mr(UINT64_C(0x18080e440),8));
L_1803faa57_2:;
/* 1803faa5e: mov rbx, qword ptr [rip + 0x4139d3] */
L_1803faa5e_0:;
L_1803faa5e_1:;
wr(s->r,24,8,mr(UINT64_C(0x18080e438),8));
L_1803faa5e_2:;
/* 1803faa65: mov r8, qword ptr [rip + 0x4139c4] */
L_1803faa65_0:;
L_1803faa65_1:;
wr(s->r,128,8,mr(UINT64_C(0x18080e430),8));
L_1803faa65_2:;
/* 1803faa6c: xor eax, eax */
L_1803faa6c_0:;
L_1803faa6c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803faa6c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803faa6c_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803faa6c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803faa6c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803faa6c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803faa6c_7:;
wr(s->u,28,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803faa6c_8:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803faa6c_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803faa6c_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803faa6c_11:;
/* 1803faa6e: mov dword ptr [rsp + 0x20], eax */
L_1803faa6e_0:;
L_1803faa6e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803faa6e_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803faa6e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803faa6e_4:;
/* 1803faa72: mov dword ptr [rsp + 0x208], 0x7f800000 */
L_1803faa72_0:;
L_1803faa72_1:;
wr(s->u,8,8,(((U)UINT64_C(0x208))+rd(s->r,32,8)));
L_1803faa72_2:;
wr(s->u,16,4,((U)UINT64_C(0x7f800000)));
L_1803faa72_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803faa72_4:;
/* 1803faa7d: mov dword ptr [rsp + 0x228], eax */
L_1803faa7d_0:;
L_1803faa7d_1:;
wr(s->u,8,8,(((U)UINT64_C(0x228))+rd(s->r,32,8)));
L_1803faa7d_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803faa7d_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803faa7d_4:;
/* 1803faa84: mov dword ptr [rsp + 0x224], eax */
L_1803faa84_0:;
L_1803faa84_1:;
wr(s->u,8,8,(((U)UINT64_C(0x224))+rd(s->r,32,8)));
L_1803faa84_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803faa84_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803faa84_4:;
/* 1803faa8b: mov dword ptr [rsp + 0x220], eax */
L_1803faa8b_0:;
L_1803faa8b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x220))+rd(s->r,32,8)));
L_1803faa8b_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803faa8b_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803faa8b_4:;
/* 1803faa92: mov dword ptr [rsp + 0x21c], eax */
L_1803faa92_0:;
L_1803faa92_1:;
wr(s->u,8,8,(((U)UINT64_C(0x21c))+rd(s->r,32,8)));
L_1803faa92_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803faa92_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803faa92_4:;
/* 1803faa99: mov qword ptr [rsp + 0x198], rdx */
L_1803faa99_0:;
L_1803faa99_1:;
wr(s->u,8,8,(((U)UINT64_C(0x198))+rd(s->r,32,8)));
L_1803faa99_2:;
wr(s->u,20,8,rd(s->r,16,8));
L_1803faa99_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803faa99_4:;
/* 1803faaa1: xor eax, eax */
L_1803faaa1_0:;
L_1803faaa1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803faaa1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803faaa1_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803faaa1_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803faaa1_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803faaa1_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803faaa1_7:;
wr(s->u,28,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803faaa1_8:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803faaa1_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803faaa1_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803faaa1_11:;
/* 1803faaa3: mov qword ptr [rsp + 0x1a0], rcx */
L_1803faaa3_0:;
L_1803faaa3_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1a0))+rd(s->r,32,8)));
L_1803faaa3_2:;
wr(s->u,20,8,rd(s->r,8,8));
L_1803faaa3_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803faaa3_4:;
/* 1803faaab: mov ecx, esi */
L_1803faaab_0:;
L_1803faaab_1:;
wr(s->r,8,4,rd(s->r,48,4));
L_1803faaab_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803faaab_3:;
/* 1803faaad: mov qword ptr [rsp + 0x1a8], rbx */
L_1803faaad_0:;
L_1803faaad_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1a8))+rd(s->r,32,8)));
L_1803faaad_2:;
wr(s->u,20,8,rd(s->r,24,8));
L_1803faaad_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803faaad_4:;
/* 1803faab5: mov qword ptr [rsp + 0x1b0], r8 */
L_1803faab5_0:;
L_1803faab5_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1b0))+rd(s->r,32,8)));
L_1803faab5_2:;
wr(s->u,20,8,rd(s->r,128,8));
L_1803faab5_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803faab5_4:;
/* 1803faabd: mov ebx, ecx */
L_1803faabd_0:;
L_1803faabd_1:;
wr(s->r,24,4,rd(s->r,8,4));
L_1803faabd_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803faabd_3:;
/* 1803faabf: add ebx, -1 */
L_1803faabf_0:;
L_1803faabf_1:;
wr(s->r,512,1,(((rd(s->r,24,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,24,4)));
L_1803faabf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803faabf_3:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0xffffffff))));
L_1803faabf_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803faabf_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803faabf_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803faabf_7:;
wr(s->u,28,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803faabf_8:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803faabf_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803faabf_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803faabf_11:;
/* 1803faac2: js 0x1803fab85 */
L_1803faac2_0:;
L_1803faac2_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803fab85);}
L_1803faac2_2:;
return UINT64_C(0x1803faac8);
}
uint64_t b_1803faac8(CPU*s){
/* 1803faac8: lea rdx, [rbp + rsi*4] */
L_1803faac8_0:;
L_1803faac8_1:;
wr(s->u,8,8,(rd(s->r,48,8)*((U)UINT64_C(0x4))));
L_1803faac8_2:;
wr(s->u,16,8,(rd(s->r,40,8)+rd(s->u,8,8)));
L_1803faac8_3:;
wr(s->r,16,8,rd(s->u,16,8));
L_1803faac8_4:;
/* 1803faacd: mov r9d, dword ptr [rdx - 4] */
L_1803faacd_0:;
L_1803faacd_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803faacd_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803faacd_3:;
wr(s->r,136,4,rd(s->u,36,4));
L_1803faacd_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803faacd_5:;
/* 1803faad1: mov dword ptr [rsp + 0x21c], r9d */
L_1803faad1_0:;
L_1803faad1_1:;
wr(s->u,24,8,(((U)UINT64_C(0x21c))+rd(s->r,32,8)));
L_1803faad1_2:;
wr(s->u,32,4,rd(s->r,136,4));
L_1803faad1_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803faad1_4:;
/* 1803faad9: mov r10d, r9d */
L_1803faad9_0:;
L_1803faad9_1:;
wr(s->r,144,4,rd(s->r,136,4));
L_1803faad9_2:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803faad9_3:;
/* 1803faadc: and r10d, 0x80000000 */
L_1803faadc_0:;
L_1803faadc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803faadc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803faadc_3:;
wr(s->r,144,4,(rd(s->r,144,4)&((U)UINT64_C(0x80000000))));
L_1803faadc_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803faadc_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803faadc_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803faadc_7:;
wr(s->u,41,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803faadc_8:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803faadc_9:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803faadc_10:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803faadc_11:;
/* 1803faae3: mov r8d, r9d */
L_1803faae3_0:;
L_1803faae3_1:;
wr(s->r,128,4,rd(s->r,136,4));
L_1803faae3_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803faae3_3:;
/* 1803faae6: and r8d, 0x7fffffff */
L_1803faae6_0:;
L_1803faae6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803faae6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803faae6_3:;
wr(s->r,128,4,(rd(s->r,128,4)&((U)UINT64_C(0x7fffffff))));
L_1803faae6_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803faae6_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803faae6_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803faae6_7:;
wr(s->u,41,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803faae6_8:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803faae6_9:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803faae6_10:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803faae6_11:;
/* 1803faaed: cmp r8d, 0x800000 */
L_1803faaed_0:;
L_1803faaed_1:;
wr(s->u,47,4,rd(s->r,128,4));
L_1803faaed_2:;
wr(s->r,512,1,(rd(s->u,47,4)<((U)UINT64_C(0x800000))));
L_1803faaed_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,47,4),((U)UINT64_C(0x800000)),4,1));
L_1803faaed_4:;
wr(s->u,51,4,(rd(s->u,47,4)-((U)UINT64_C(0x800000))));
L_1803faaed_5:;
wr(s->r,519,1,(sx(rd(s->u,51,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803faaed_6:;
wr(s->r,518,1,(rd(s->u,51,4)==((U)UINT64_C(0x0))));
L_1803faaed_7:;
wr(s->u,41,4,(rd(s->u,51,4)&((U)UINT64_C(0xff))));
L_1803faaed_8:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803faaed_9:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803faaed_10:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803faaed_11:;
/* 1803faaf4: jae 0x1803faaff */
L_1803faaf4_0:;
L_1803faaf4_1:;
wr(s->u,40,1,(!rd(s->r,512,1)));
L_1803faaf4_2:;
if(rd(s->u,40,1)){return UINT64_C(0x1803faaff);}
L_1803faaf4_3:;
return UINT64_C(0x1803faaf6);
}
uint64_t b_1803faacd(CPU*s){
/* 1803faacd: mov r9d, dword ptr [rdx - 4] */
L_1803faacd_0:;
L_1803faacd_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803faacd_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803faacd_3:;
wr(s->r,136,4,rd(s->u,20,4));
L_1803faacd_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803faacd_5:;
/* 1803faad1: mov dword ptr [rsp + 0x21c], r9d */
L_1803faad1_0:;
L_1803faad1_1:;
wr(s->u,8,8,(((U)UINT64_C(0x21c))+rd(s->r,32,8)));
L_1803faad1_2:;
wr(s->u,16,4,rd(s->r,136,4));
L_1803faad1_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803faad1_4:;
/* 1803faad9: mov r10d, r9d */
L_1803faad9_0:;
L_1803faad9_1:;
wr(s->r,144,4,rd(s->r,136,4));
L_1803faad9_2:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803faad9_3:;
/* 1803faadc: and r10d, 0x80000000 */
L_1803faadc_0:;
L_1803faadc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803faadc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803faadc_3:;
wr(s->r,144,4,(rd(s->r,144,4)&((U)UINT64_C(0x80000000))));
L_1803faadc_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803faadc_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803faadc_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803faadc_7:;
wr(s->u,25,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803faadc_8:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803faadc_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803faadc_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803faadc_11:;
/* 1803faae3: mov r8d, r9d */
L_1803faae3_0:;
L_1803faae3_1:;
wr(s->r,128,4,rd(s->r,136,4));
L_1803faae3_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803faae3_3:;
/* 1803faae6: and r8d, 0x7fffffff */
L_1803faae6_0:;
L_1803faae6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803faae6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803faae6_3:;
wr(s->r,128,4,(rd(s->r,128,4)&((U)UINT64_C(0x7fffffff))));
L_1803faae6_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803faae6_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803faae6_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803faae6_7:;
wr(s->u,25,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803faae6_8:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803faae6_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803faae6_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803faae6_11:;
/* 1803faaed: cmp r8d, 0x800000 */
L_1803faaed_0:;
L_1803faaed_1:;
wr(s->u,31,4,rd(s->r,128,4));
L_1803faaed_2:;
wr(s->r,512,1,(rd(s->u,31,4)<((U)UINT64_C(0x800000))));
L_1803faaed_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,31,4),((U)UINT64_C(0x800000)),4,1));
L_1803faaed_4:;
wr(s->u,35,4,(rd(s->u,31,4)-((U)UINT64_C(0x800000))));
L_1803faaed_5:;
wr(s->r,519,1,(sx(rd(s->u,35,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803faaed_6:;
wr(s->r,518,1,(rd(s->u,35,4)==((U)UINT64_C(0x0))));
L_1803faaed_7:;
wr(s->u,25,4,(rd(s->u,35,4)&((U)UINT64_C(0xff))));
L_1803faaed_8:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803faaed_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803faaed_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803faaed_11:;
/* 1803faaf4: jae 0x1803faaff */
L_1803faaf4_0:;
L_1803faaf4_1:;
wr(s->u,24,1,(!rd(s->r,512,1)));
L_1803faaf4_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803faaff);}
L_1803faaf4_3:;
return UINT64_C(0x1803faaf6);
}
uint64_t b_1803faaf6(CPU*s){
/* 1803faaf6: mov dword ptr [rdx - 4], 0x3f800000 */
L_1803faaf6_0:;
L_1803faaf6_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803faaf6_2:;
wr(s->u,8,4,((U)UINT64_C(0x3f800000)));
L_1803faaf6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803faaf6_4:;
/* 1803faafd: jmp 0x1803fab67 */
L_1803faafd_0:;
L_1803faafd_1:;
return UINT64_C(0x1803fab67);
L_1803faafd_2:;
return UINT64_C(0x1803faaff);
}
uint64_t b_1803faaff(CPU*s){
/* 1803faaff: test r10d, r10d */
L_1803faaff_0:;
L_1803faaff_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803faaff_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803faaff_3:;
wr(s->u,6,4,(rd(s->r,144,4)&rd(s->r,144,4)));
L_1803faaff_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803faaff_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803faaff_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803faaff_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803faaff_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803faaff_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803faaff_10:;
/* 1803fab02: je 0x1803fab31 */
L_1803fab02_0:;
L_1803fab02_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fab31);}
L_1803fab02_2:;
return UINT64_C(0x1803fab04);
}
uint64_t b_1803fab04(CPU*s){
/* 1803fab04: cmp r9d, 0xc2aeac50 */
L_1803fab04_0:;
L_1803fab04_1:;
wr(s->u,6,4,rd(s->r,136,4));
L_1803fab04_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0xc2aeac50))));
L_1803fab04_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0xc2aeac50)),4,1));
L_1803fab04_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0xc2aeac50))));
L_1803fab04_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fab04_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fab04_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fab04_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fab04_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fab04_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fab04_11:;
/* 1803fab0b: jb 0x1803fab7d */
L_1803fab0b_0:;
L_1803fab0b_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fab7d);}
L_1803fab0b_2:;
return UINT64_C(0x1803fab0d);
}
uint64_t b_1803fab0d(CPU*s){
/* 1803fab0d: and r9d, 0x7fc00000 */
L_1803fab0d_0:;
L_1803fab0d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fab0d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fab0d_3:;
wr(s->r,136,4,(rd(s->r,136,4)&((U)UINT64_C(0x7fc00000))));
L_1803fab0d_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fab0d_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fab0d_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803fab0d_7:;
wr(s->u,1,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803fab0d_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fab0d_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fab0d_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fab0d_11:;
/* 1803fab14: cmp r9d, 0x7fc00000 */
L_1803fab14_0:;
L_1803fab14_1:;
wr(s->u,7,4,rd(s->r,136,4));
L_1803fab14_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x7fc00000))));
L_1803fab14_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803fab14_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x7fc00000))));
L_1803fab14_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fab14_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fab14_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fab14_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fab14_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fab14_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fab14_11:;
/* 1803fab1b: jne 0x1803fab28 */
L_1803fab1b_0:;
L_1803fab1b_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fab1b_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fab28);}
L_1803fab1b_3:;
return UINT64_C(0x1803fab1d);
}
uint64_t b_1803fab1d(CPU*s){
/* 1803fab1d: mov ebx, dword ptr [rip + 0x41413d] */
L_1803fab1d_0:;
L_1803fab1d_1:;
wr(s->r,24,4,mr(UINT64_C(0x18080ec60),4));
L_1803fab1d_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fab1d_3:;
/* 1803fab23: mov dword ptr [rdx - 4], ebx */
L_1803fab23_0:;
L_1803fab23_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fab23_2:;
wr(s->u,8,4,rd(s->r,24,4));
L_1803fab23_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fab23_4:;
/* 1803fab26: jmp 0x1803fab67 */
L_1803fab26_0:;
L_1803fab26_1:;
return UINT64_C(0x1803fab67);
L_1803fab26_2:;
return UINT64_C(0x1803fab28);
}
uint64_t b_1803fab28(CPU*s){
/* 1803fab28: mov ebx, dword ptr [rsp + 0x20] */
L_1803fab28_0:;
L_1803fab28_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fab28_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fab28_3:;
wr(s->r,24,4,rd(s->u,20,4));
L_1803fab28_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fab28_5:;
/* 1803fab2c: mov dword ptr [rdx - 4], ebx */
L_1803fab2c_0:;
L_1803fab2c_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fab2c_2:;
wr(s->u,16,4,rd(s->r,24,4));
L_1803fab2c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fab2c_4:;
/* 1803fab2f: jmp 0x1803fab67 */
L_1803fab2f_0:;
L_1803fab2f_1:;
return UINT64_C(0x1803fab67);
L_1803fab2f_2:;
return UINT64_C(0x1803fab31);
}
uint64_t b_1803fab31(CPU*s){
/* 1803fab31: cmp r9d, 0x42b17218 */
L_1803fab31_0:;
L_1803fab31_1:;
wr(s->u,6,4,rd(s->r,136,4));
L_1803fab31_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x42b17218))));
L_1803fab31_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x42b17218)),4,1));
L_1803fab31_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x42b17218))));
L_1803fab31_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fab31_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fab31_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fab31_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fab31_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fab31_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fab31_11:;
/* 1803fab38: jb 0x1803fab7d */
L_1803fab38_0:;
L_1803fab38_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fab7d);}
L_1803fab38_2:;
return UINT64_C(0x1803fab3a);
}
uint64_t b_1803fab3a(CPU*s){
/* 1803fab3a: and r9d, 0x7fc00000 */
L_1803fab3a_0:;
L_1803fab3a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fab3a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fab3a_3:;
wr(s->r,136,4,(rd(s->r,136,4)&((U)UINT64_C(0x7fc00000))));
L_1803fab3a_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fab3a_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fab3a_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803fab3a_7:;
wr(s->u,1,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803fab3a_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fab3a_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fab3a_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fab3a_11:;
/* 1803fab41: cmp r9d, 0x7fc00000 */
L_1803fab41_0:;
L_1803fab41_1:;
wr(s->u,7,4,rd(s->r,136,4));
L_1803fab41_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x7fc00000))));
L_1803fab41_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803fab41_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x7fc00000))));
L_1803fab41_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fab41_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fab41_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fab41_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fab41_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fab41_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fab41_11:;
/* 1803fab48: jne 0x1803fab5d */
L_1803fab48_0:;
L_1803fab48_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fab48_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fab5d);}
L_1803fab48_3:;
return UINT64_C(0x1803fab4a);
}
uint64_t b_1803fab4a(CPU*s){
/* 1803fab4a: pxor xmm0, xmm0 */
L_1803fab4a_0:;
L_1803fab4a_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803fab4a_2:;
/* 1803fab4e: subss xmm0, dword ptr [rip + 0x41410a] */
L_1803fab4e_0:;
L_1803fab4e_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(mr(UINT64_C(0x18080ec60),4),4),4));
L_1803fab4e_2:;
/* 1803fab56: movss dword ptr [rdx - 4], xmm0 */
L_1803fab56_0:;
L_1803fab56_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fab56_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803fab56_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fab56_4:;
/* 1803fab5b: jmp 0x1803fab67 */
L_1803fab5b_0:;
L_1803fab5b_1:;
return UINT64_C(0x1803fab67);
L_1803fab5b_2:;
return UINT64_C(0x1803fab5d);
}
uint64_t b_1803fab5d(CPU*s){
/* 1803fab5d: mov ebx, dword ptr [rsp + 0x208] */
L_1803fab5d_0:;
L_1803fab5d_1:;
wr(s->u,8,8,(((U)UINT64_C(0x208))+rd(s->r,32,8)));
L_1803fab5d_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fab5d_3:;
wr(s->r,24,4,rd(s->u,20,4));
L_1803fab5d_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fab5d_5:;
/* 1803fab64: mov dword ptr [rdx - 4], ebx */
L_1803fab64_0:;
L_1803fab64_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fab64_2:;
wr(s->u,16,4,rd(s->r,24,4));
L_1803fab64_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fab64_4:;
/* 1803fab67: lea ebx, [rcx - 2] */
L_1803fab67_0:;
L_1803fab67_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffffe))));
L_1803fab67_2:;
wr(s->r,24,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fab67_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fab67_4:;
/* 1803fab6a: sub ebx, eax */
L_1803fab6a_0:;
L_1803fab6a_1:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->r,0,4)));
L_1803fab6a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->r,0,4),4,1));
L_1803fab6a_3:;
wr(s->r,24,4,(rd(s->r,24,4)-rd(s->r,0,4)));
L_1803fab6a_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fab6a_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fab6a_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803fab6a_7:;
wr(s->u,25,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803fab6a_8:;
wr(s->u,33,1,pop(rd(s->u,25,4),4));
L_1803fab6a_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fab6a_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fab6a_11:;
/* 1803fab6c: add rdx, -4 */
L_1803fab6c_0:;
L_1803fab6c_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803fab6c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0xfffffffffffffffc)),8,0));
L_1803fab6c_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fab6c_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fab6c_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fab6c_6:;
wr(s->u,25,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fab6c_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fab6c_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fab6c_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fab6c_10:;
/* 1803fab70: add rax, 1 */
L_1803fab70_0:;
L_1803fab70_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fab70_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fab70_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fab70_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fab70_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fab70_6:;
wr(s->u,25,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fab70_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fab70_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fab70_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fab70_10:;
/* 1803fab74: cmp rax, rsi */
L_1803fab74_0:;
L_1803fab74_1:;
wr(s->u,35,8,rd(s->r,48,8));
L_1803fab74_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,35,8)));
L_1803fab74_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,35,8),8,1));
L_1803fab74_4:;
wr(s->u,43,8,(rd(s->r,0,8)-rd(s->u,35,8)));
L_1803fab74_5:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fab74_6:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1803fab74_7:;
wr(s->u,25,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1803fab74_8:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fab74_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fab74_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fab74_11:;
/* 1803fab77: jl 0x1803faacd */
L_1803fab77_0:;
L_1803fab77_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fab77_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803faacd);}
L_1803fab77_3:;
return UINT64_C(0x1803fab7d);
}
uint64_t b_1803fab67(CPU*s){
/* 1803fab67: lea ebx, [rcx - 2] */
L_1803fab67_0:;
L_1803fab67_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffffe))));
L_1803fab67_2:;
wr(s->r,24,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fab67_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fab67_4:;
/* 1803fab6a: sub ebx, eax */
L_1803fab6a_0:;
L_1803fab6a_1:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->r,0,4)));
L_1803fab6a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->r,0,4),4,1));
L_1803fab6a_3:;
wr(s->r,24,4,(rd(s->r,24,4)-rd(s->r,0,4)));
L_1803fab6a_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fab6a_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fab6a_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803fab6a_7:;
wr(s->u,9,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803fab6a_8:;
wr(s->u,17,1,pop(rd(s->u,9,4),4));
L_1803fab6a_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fab6a_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fab6a_11:;
/* 1803fab6c: add rdx, -4 */
L_1803fab6c_0:;
L_1803fab6c_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803fab6c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0xfffffffffffffffc)),8,0));
L_1803fab6c_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fab6c_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fab6c_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fab6c_6:;
wr(s->u,9,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fab6c_7:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fab6c_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fab6c_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fab6c_10:;
/* 1803fab70: add rax, 1 */
L_1803fab70_0:;
L_1803fab70_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fab70_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fab70_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fab70_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fab70_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fab70_6:;
wr(s->u,9,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fab70_7:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fab70_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fab70_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fab70_10:;
/* 1803fab74: cmp rax, rsi */
L_1803fab74_0:;
L_1803fab74_1:;
wr(s->u,19,8,rd(s->r,48,8));
L_1803fab74_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,19,8)));
L_1803fab74_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,19,8),8,1));
L_1803fab74_4:;
wr(s->u,27,8,(rd(s->r,0,8)-rd(s->u,19,8)));
L_1803fab74_5:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fab74_6:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803fab74_7:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803fab74_8:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fab74_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fab74_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fab74_11:;
/* 1803fab77: jl 0x1803faacd */
L_1803fab77_0:;
L_1803fab77_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fab77_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803faacd);}
L_1803fab77_3:;
return UINT64_C(0x1803fab7d);
}
uint64_t b_1803fab7d(CPU*s){
/* 1803fab7d: mov dword ptr [rsp + 0x158], r10d */
L_1803fab7d_0:;
L_1803fab7d_1:;
wr(s->u,21,8,(((U)UINT64_C(0x158))+rd(s->r,32,8)));
L_1803fab7d_2:;
wr(s->u,29,4,rd(s->r,144,4));
L_1803fab7d_3:;
mw((uint64_t)rd(s->u,21,8),4,rd(s->u,29,4));
L_1803fab7d_4:;
/* 1803fab85: mov rax, qword ptr [rip + 0x4138c4] */
L_1803fab85_0:;
L_1803fab85_1:;
wr(s->r,0,8,mr(UINT64_C(0x18080e450),8));
L_1803fab85_2:;
/* 1803fab8c: shr rax, 0x20 */
L_1803fab8c_0:;
L_1803fab8c_1:;
wr(s->u,90,4,(((U)UINT64_C(0x20))&((U)UINT64_C(0x3f))));
L_1803fab8c_2:;
wr(s->u,94,8,rd(s->r,0,8));
L_1803fab8c_3:;
wr(s->r,0,8,((rd(s->u,90,4)>=64)?0:(rd(s->r,0,8)>>rd(s->u,90,4))));
L_1803fab8c_4:;
wr(s->u,66,1,(rd(s->u,90,4)==((U)UINT64_C(0x0))));
L_1803fab8c_5:;
wr(s->u,67,4,(rd(s->u,90,4)-((U)UINT64_C(0x1))));
L_1803fab8c_6:;
wr(s->u,71,8,((rd(s->u,67,4)>=64)?0:(rd(s->u,94,8)>>rd(s->u,67,4))));
L_1803fab8c_7:;
wr(s->u,79,8,(rd(s->u,71,8)&((U)UINT64_C(0x1))));
L_1803fab8c_8:;
wr(s->u,87,1,(rd(s->u,79,8)!=((U)UINT64_C(0x0))));
L_1803fab8c_9:;
wr(s->u,0,1,rd(s->u,66,1));
L_1803fab8c_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fab8c_11:;
wr(s->u,2,1,(!rd(s->u,66,1)));
L_1803fab8c_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fab8c_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,87,1)));
L_1803fab8c_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fab8c_15:;
wr(s->u,88,1,(rd(s->u,90,4)==((U)UINT64_C(0x1))));
L_1803fab8c_16:;
wr(s->u,89,1,(sx(rd(s->u,94,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fab8c_17:;
wr(s->u,0,1,rd(s->u,88,1));
L_1803fab8c_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fab8c_19:;
wr(s->u,2,1,(!rd(s->u,88,1)));
L_1803fab8c_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fab8c_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,89,1)));
L_1803fab8c_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fab8c_23:;
wr(s->u,43,1,(rd(s->u,90,4)!=((U)UINT64_C(0x0))));
L_1803fab8c_24:;
wr(s->u,44,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fab8c_25:;
wr(s->u,45,1,(!rd(s->u,43,1)));
L_1803fab8c_26:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,519,1)));
L_1803fab8c_27:;
wr(s->u,47,1,(rd(s->u,43,1)&rd(s->u,44,1)));
L_1803fab8c_28:;
wr(s->r,519,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803fab8c_29:;
wr(s->u,48,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fab8c_30:;
wr(s->u,49,1,(!rd(s->u,43,1)));
L_1803fab8c_31:;
wr(s->u,50,1,(rd(s->u,49,1)&rd(s->r,518,1)));
L_1803fab8c_32:;
wr(s->u,51,1,(rd(s->u,43,1)&rd(s->u,48,1)));
L_1803fab8c_33:;
wr(s->r,518,1,(rd(s->u,50,1)|rd(s->u,51,1)));
L_1803fab8c_34:;
wr(s->u,52,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fab8c_35:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803fab8c_36:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803fab8c_37:;
wr(s->u,62,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803fab8c_38:;
wr(s->u,63,1,(!rd(s->u,43,1)));
L_1803fab8c_39:;
wr(s->u,64,1,(rd(s->u,63,1)&rd(s->r,514,1)));
L_1803fab8c_40:;
wr(s->u,65,1,(rd(s->u,43,1)&rd(s->u,62,1)));
L_1803fab8c_41:;
wr(s->r,514,1,(rd(s->u,64,1)|rd(s->u,65,1)));
L_1803fab8c_42:;
/* 1803fab90: mov edx, dword ptr [rsp + 0x158] */
L_1803fab90_0:;
L_1803fab90_1:;
wr(s->u,21,8,(((U)UINT64_C(0x158))+rd(s->r,32,8)));
L_1803fab90_2:;
wr(s->u,33,4,mr((uint64_t)rd(s->u,21,8),4));
L_1803fab90_3:;
wr(s->r,16,4,rd(s->u,33,4));
L_1803fab90_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fab90_5:;
/* 1803fab97: mov esi, ebx */
L_1803fab97_0:;
L_1803fab97_1:;
wr(s->r,48,4,rd(s->r,24,4));
L_1803fab97_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fab97_3:;
/* 1803fab99: mov dword ptr [rsp + 0xd0], eax */
L_1803fab99_0:;
L_1803fab99_1:;
wr(s->u,21,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803fab99_2:;
wr(s->u,29,4,rd(s->r,0,4));
L_1803fab99_3:;
mw((uint64_t)rd(s->u,21,8),4,rd(s->u,29,4));
L_1803fab99_4:;
/* 1803faba0: lea ecx, [rdx + rax] */
L_1803faba0_0:;
L_1803faba0_1:;
wr(s->u,5,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803faba0_2:;
wr(s->u,13,8,(rd(s->r,16,8)+rd(s->u,5,8)));
L_1803faba0_3:;
wr(s->r,8,4,(rd(s->u,13,8) >> (((U)UINT64_C(0x0))*8)));
L_1803faba0_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803faba0_5:;
/* 1803faba3: mov dword ptr [rsp + 0x150], ecx */
L_1803faba3_0:;
L_1803faba3_1:;
wr(s->u,21,8,(((U)UINT64_C(0x150))+rd(s->r,32,8)));
L_1803faba3_2:;
wr(s->u,29,4,rd(s->r,8,4));
L_1803faba3_3:;
mw((uint64_t)rd(s->u,21,8),4,rd(s->u,29,4));
L_1803faba3_4:;
/* 1803fabaa: xor eax, eax */
L_1803fabaa_0:;
L_1803fabaa_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fabaa_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fabaa_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fabaa_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fabaa_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fabaa_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fabaa_7:;
wr(s->u,37,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fabaa_8:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803fabaa_9:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803fabaa_10:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803fabaa_11:;
/* 1803fabac: add esi, -1 */
L_1803fabac_0:;
L_1803fabac_1:;
wr(s->r,512,1,(((rd(s->r,48,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,48,4)));
L_1803fabac_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fabac_3:;
wr(s->r,48,4,(rd(s->r,48,4)+((U)UINT64_C(0xffffffff))));
L_1803fabac_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fabac_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fabac_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803fabac_7:;
wr(s->u,37,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803fabac_8:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803fabac_9:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803fabac_10:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803fabac_11:;
/* 1803fabaf: movsxd rcx, esi */
L_1803fabaf_0:;
L_1803fabaf_1:;
wr(s->r,8,8,(U)sx(rd(s->r,48,4),4));
L_1803fabaf_2:;
/* 1803fabb2: js 0x1803fac73 */
L_1803fabb2_0:;
L_1803fabb2_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803fac73);}
L_1803fabb2_2:;
return UINT64_C(0x1803fabb8);
}
uint64_t b_1803fab85(CPU*s){
/* 1803fab85: mov rax, qword ptr [rip + 0x4138c4] */
L_1803fab85_0:;
L_1803fab85_1:;
wr(s->r,0,8,mr(UINT64_C(0x18080e450),8));
L_1803fab85_2:;
/* 1803fab8c: shr rax, 0x20 */
L_1803fab8c_0:;
L_1803fab8c_1:;
wr(s->u,90,4,(((U)UINT64_C(0x20))&((U)UINT64_C(0x3f))));
L_1803fab8c_2:;
wr(s->u,94,8,rd(s->r,0,8));
L_1803fab8c_3:;
wr(s->r,0,8,((rd(s->u,90,4)>=64)?0:(rd(s->r,0,8)>>rd(s->u,90,4))));
L_1803fab8c_4:;
wr(s->u,66,1,(rd(s->u,90,4)==((U)UINT64_C(0x0))));
L_1803fab8c_5:;
wr(s->u,67,4,(rd(s->u,90,4)-((U)UINT64_C(0x1))));
L_1803fab8c_6:;
wr(s->u,71,8,((rd(s->u,67,4)>=64)?0:(rd(s->u,94,8)>>rd(s->u,67,4))));
L_1803fab8c_7:;
wr(s->u,79,8,(rd(s->u,71,8)&((U)UINT64_C(0x1))));
L_1803fab8c_8:;
wr(s->u,87,1,(rd(s->u,79,8)!=((U)UINT64_C(0x0))));
L_1803fab8c_9:;
wr(s->u,0,1,rd(s->u,66,1));
L_1803fab8c_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fab8c_11:;
wr(s->u,2,1,(!rd(s->u,66,1)));
L_1803fab8c_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fab8c_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,87,1)));
L_1803fab8c_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fab8c_15:;
wr(s->u,88,1,(rd(s->u,90,4)==((U)UINT64_C(0x1))));
L_1803fab8c_16:;
wr(s->u,89,1,(sx(rd(s->u,94,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fab8c_17:;
wr(s->u,0,1,rd(s->u,88,1));
L_1803fab8c_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fab8c_19:;
wr(s->u,2,1,(!rd(s->u,88,1)));
L_1803fab8c_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fab8c_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,89,1)));
L_1803fab8c_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fab8c_23:;
wr(s->u,43,1,(rd(s->u,90,4)!=((U)UINT64_C(0x0))));
L_1803fab8c_24:;
wr(s->u,44,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fab8c_25:;
wr(s->u,45,1,(!rd(s->u,43,1)));
L_1803fab8c_26:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,519,1)));
L_1803fab8c_27:;
wr(s->u,47,1,(rd(s->u,43,1)&rd(s->u,44,1)));
L_1803fab8c_28:;
wr(s->r,519,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803fab8c_29:;
wr(s->u,48,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fab8c_30:;
wr(s->u,49,1,(!rd(s->u,43,1)));
L_1803fab8c_31:;
wr(s->u,50,1,(rd(s->u,49,1)&rd(s->r,518,1)));
L_1803fab8c_32:;
wr(s->u,51,1,(rd(s->u,43,1)&rd(s->u,48,1)));
L_1803fab8c_33:;
wr(s->r,518,1,(rd(s->u,50,1)|rd(s->u,51,1)));
L_1803fab8c_34:;
wr(s->u,52,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fab8c_35:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803fab8c_36:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803fab8c_37:;
wr(s->u,62,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803fab8c_38:;
wr(s->u,63,1,(!rd(s->u,43,1)));
L_1803fab8c_39:;
wr(s->u,64,1,(rd(s->u,63,1)&rd(s->r,514,1)));
L_1803fab8c_40:;
wr(s->u,65,1,(rd(s->u,43,1)&rd(s->u,62,1)));
L_1803fab8c_41:;
wr(s->r,514,1,(rd(s->u,64,1)|rd(s->u,65,1)));
L_1803fab8c_42:;
/* 1803fab90: mov edx, dword ptr [rsp + 0x158] */
L_1803fab90_0:;
L_1803fab90_1:;
wr(s->u,21,8,(((U)UINT64_C(0x158))+rd(s->r,32,8)));
L_1803fab90_2:;
wr(s->u,33,4,mr((uint64_t)rd(s->u,21,8),4));
L_1803fab90_3:;
wr(s->r,16,4,rd(s->u,33,4));
L_1803fab90_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fab90_5:;
/* 1803fab97: mov esi, ebx */
L_1803fab97_0:;
L_1803fab97_1:;
wr(s->r,48,4,rd(s->r,24,4));
L_1803fab97_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fab97_3:;
/* 1803fab99: mov dword ptr [rsp + 0xd0], eax */
L_1803fab99_0:;
L_1803fab99_1:;
wr(s->u,21,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803fab99_2:;
wr(s->u,29,4,rd(s->r,0,4));
L_1803fab99_3:;
mw((uint64_t)rd(s->u,21,8),4,rd(s->u,29,4));
L_1803fab99_4:;
/* 1803faba0: lea ecx, [rdx + rax] */
L_1803faba0_0:;
L_1803faba0_1:;
wr(s->u,5,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803faba0_2:;
wr(s->u,13,8,(rd(s->r,16,8)+rd(s->u,5,8)));
L_1803faba0_3:;
wr(s->r,8,4,(rd(s->u,13,8) >> (((U)UINT64_C(0x0))*8)));
L_1803faba0_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803faba0_5:;
/* 1803faba3: mov dword ptr [rsp + 0x150], ecx */
L_1803faba3_0:;
L_1803faba3_1:;
wr(s->u,21,8,(((U)UINT64_C(0x150))+rd(s->r,32,8)));
L_1803faba3_2:;
wr(s->u,29,4,rd(s->r,8,4));
L_1803faba3_3:;
mw((uint64_t)rd(s->u,21,8),4,rd(s->u,29,4));
L_1803faba3_4:;
/* 1803fabaa: xor eax, eax */
L_1803fabaa_0:;
L_1803fabaa_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fabaa_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fabaa_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fabaa_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fabaa_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fabaa_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fabaa_7:;
wr(s->u,37,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fabaa_8:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803fabaa_9:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803fabaa_10:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803fabaa_11:;
/* 1803fabac: add esi, -1 */
L_1803fabac_0:;
L_1803fabac_1:;
wr(s->r,512,1,(((rd(s->r,48,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,48,4)));
L_1803fabac_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fabac_3:;
wr(s->r,48,4,(rd(s->r,48,4)+((U)UINT64_C(0xffffffff))));
L_1803fabac_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fabac_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fabac_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803fabac_7:;
wr(s->u,37,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803fabac_8:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803fabac_9:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803fabac_10:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803fabac_11:;
/* 1803fabaf: movsxd rcx, esi */
L_1803fabaf_0:;
L_1803fabaf_1:;
wr(s->r,8,8,(U)sx(rd(s->r,48,4),4));
L_1803fabaf_2:;
/* 1803fabb2: js 0x1803fac73 */
L_1803fabb2_0:;
L_1803fabb2_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803fac73);}
L_1803fabb2_2:;
return UINT64_C(0x1803fabb8);
}
uint64_t b_1803fabb8(CPU*s){
/* 1803fabb8: lea rdx, [rbp + rcx*4] */
L_1803fabb8_0:;
L_1803fabb8_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803fabb8_2:;
wr(s->u,8,8,(rd(s->r,40,8)+rd(s->u,0,8)));
L_1803fabb8_3:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803fabb8_4:;
/* 1803fabbd: mov r8d, dword ptr [rdx] */
L_1803fabbd_0:;
L_1803fabbd_1:;
wr(s->u,28,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803fabbd_2:;
wr(s->r,128,4,rd(s->u,28,4));
L_1803fabbd_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fabbd_4:;
/* 1803fabc0: mov dword ptr [rsp + 0x220], r8d */
L_1803fabc0_0:;
L_1803fabc0_1:;
wr(s->u,16,8,(((U)UINT64_C(0x220))+rd(s->r,32,8)));
L_1803fabc0_2:;
wr(s->u,24,4,rd(s->r,128,4));
L_1803fabc0_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fabc0_4:;
/* 1803fabc8: mov r9d, r8d */
L_1803fabc8_0:;
L_1803fabc8_1:;
wr(s->r,136,4,rd(s->r,128,4));
L_1803fabc8_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fabc8_3:;
/* 1803fabcb: and r9d, 0x80000000 */
L_1803fabcb_0:;
L_1803fabcb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fabcb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fabcb_3:;
wr(s->r,136,4,(rd(s->r,136,4)&((U)UINT64_C(0x80000000))));
L_1803fabcb_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fabcb_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fabcb_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803fabcb_7:;
wr(s->u,33,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803fabcb_8:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803fabcb_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803fabcb_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803fabcb_11:;
/* 1803fabd2: mov edi, r8d */
L_1803fabd2_0:;
L_1803fabd2_1:;
wr(s->r,56,4,rd(s->r,128,4));
L_1803fabd2_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fabd2_3:;
/* 1803fabd5: and edi, 0x7fffffff */
L_1803fabd5_0:;
L_1803fabd5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fabd5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fabd5_3:;
wr(s->r,56,4,(rd(s->r,56,4)&((U)UINT64_C(0x7fffffff))));
L_1803fabd5_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fabd5_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fabd5_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803fabd5_7:;
wr(s->u,33,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803fabd5_8:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803fabd5_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803fabd5_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803fabd5_11:;
/* 1803fabdb: cmp edi, 0x800000 */
L_1803fabdb_0:;
L_1803fabdb_1:;
wr(s->u,39,4,rd(s->r,56,4));
L_1803fabdb_2:;
wr(s->r,512,1,(rd(s->u,39,4)<((U)UINT64_C(0x800000))));
L_1803fabdb_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,39,4),((U)UINT64_C(0x800000)),4,1));
L_1803fabdb_4:;
wr(s->u,43,4,(rd(s->u,39,4)-((U)UINT64_C(0x800000))));
L_1803fabdb_5:;
wr(s->r,519,1,(sx(rd(s->u,43,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fabdb_6:;
wr(s->r,518,1,(rd(s->u,43,4)==((U)UINT64_C(0x0))));
L_1803fabdb_7:;
wr(s->u,33,4,(rd(s->u,43,4)&((U)UINT64_C(0xff))));
L_1803fabdb_8:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803fabdb_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803fabdb_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803fabdb_11:;
/* 1803fabe1: jae 0x1803fabeb */
L_1803fabe1_0:;
L_1803fabe1_1:;
wr(s->u,32,1,(!rd(s->r,512,1)));
L_1803fabe1_2:;
if(rd(s->u,32,1)){return UINT64_C(0x1803fabeb);}
L_1803fabe1_3:;
return UINT64_C(0x1803fabe3);
}
uint64_t b_1803fabbd(CPU*s){
/* 1803fabbd: mov r8d, dword ptr [rdx] */
L_1803fabbd_0:;
L_1803fabbd_1:;
wr(s->u,12,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803fabbd_2:;
wr(s->r,128,4,rd(s->u,12,4));
L_1803fabbd_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fabbd_4:;
/* 1803fabc0: mov dword ptr [rsp + 0x220], r8d */
L_1803fabc0_0:;
L_1803fabc0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x220))+rd(s->r,32,8)));
L_1803fabc0_2:;
wr(s->u,8,4,rd(s->r,128,4));
L_1803fabc0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fabc0_4:;
/* 1803fabc8: mov r9d, r8d */
L_1803fabc8_0:;
L_1803fabc8_1:;
wr(s->r,136,4,rd(s->r,128,4));
L_1803fabc8_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fabc8_3:;
/* 1803fabcb: and r9d, 0x80000000 */
L_1803fabcb_0:;
L_1803fabcb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fabcb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fabcb_3:;
wr(s->r,136,4,(rd(s->r,136,4)&((U)UINT64_C(0x80000000))));
L_1803fabcb_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fabcb_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fabcb_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803fabcb_7:;
wr(s->u,17,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803fabcb_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fabcb_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fabcb_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fabcb_11:;
/* 1803fabd2: mov edi, r8d */
L_1803fabd2_0:;
L_1803fabd2_1:;
wr(s->r,56,4,rd(s->r,128,4));
L_1803fabd2_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fabd2_3:;
/* 1803fabd5: and edi, 0x7fffffff */
L_1803fabd5_0:;
L_1803fabd5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fabd5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fabd5_3:;
wr(s->r,56,4,(rd(s->r,56,4)&((U)UINT64_C(0x7fffffff))));
L_1803fabd5_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fabd5_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fabd5_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803fabd5_7:;
wr(s->u,17,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803fabd5_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fabd5_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fabd5_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fabd5_11:;
/* 1803fabdb: cmp edi, 0x800000 */
L_1803fabdb_0:;
L_1803fabdb_1:;
wr(s->u,23,4,rd(s->r,56,4));
L_1803fabdb_2:;
wr(s->r,512,1,(rd(s->u,23,4)<((U)UINT64_C(0x800000))));
L_1803fabdb_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,23,4),((U)UINT64_C(0x800000)),4,1));
L_1803fabdb_4:;
wr(s->u,27,4,(rd(s->u,23,4)-((U)UINT64_C(0x800000))));
L_1803fabdb_5:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fabdb_6:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803fabdb_7:;
wr(s->u,17,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803fabdb_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fabdb_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fabdb_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fabdb_11:;
/* 1803fabe1: jae 0x1803fabeb */
L_1803fabe1_0:;
L_1803fabe1_1:;
wr(s->u,16,1,(!rd(s->r,512,1)));
L_1803fabe1_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803fabeb);}
L_1803fabe1_3:;
return UINT64_C(0x1803fabe3);
}
uint64_t b_1803fabe3(CPU*s){
/* 1803fabe3: mov dword ptr [rdx], 0x3f800000 */
L_1803fabe3_0:;
L_1803fabe3_1:;
wr(s->u,0,4,((U)UINT64_C(0x3f800000)));
L_1803fabe3_2:;
mw((uint64_t)rd(s->r,16,8),4,rd(s->u,0,4));
L_1803fabe3_3:;
/* 1803fabe9: jmp 0x1803fac4f */
L_1803fabe9_0:;
L_1803fabe9_1:;
return UINT64_C(0x1803fac4f);
L_1803fabe9_2:;
return UINT64_C(0x1803fabeb);
}
uint64_t b_1803fabeb(CPU*s){
/* 1803fabeb: test r9d, r9d */
L_1803fabeb_0:;
L_1803fabeb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fabeb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fabeb_3:;
wr(s->u,6,4,(rd(s->r,136,4)&rd(s->r,136,4)));
L_1803fabeb_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fabeb_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803fabeb_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803fabeb_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fabeb_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fabeb_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fabeb_10:;
/* 1803fabee: je 0x1803fac1b */
L_1803fabee_0:;
L_1803fabee_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fac1b);}
L_1803fabee_2:;
return UINT64_C(0x1803fabf0);
}
uint64_t b_1803fabf0(CPU*s){
/* 1803fabf0: cmp r8d, 0xc2aeac50 */
L_1803fabf0_0:;
L_1803fabf0_1:;
wr(s->u,6,4,rd(s->r,128,4));
L_1803fabf0_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0xc2aeac50))));
L_1803fabf0_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0xc2aeac50)),4,1));
L_1803fabf0_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0xc2aeac50))));
L_1803fabf0_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fabf0_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fabf0_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fabf0_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fabf0_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fabf0_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fabf0_11:;
/* 1803fabf7: jb 0x1803fac6b */
L_1803fabf7_0:;
L_1803fabf7_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fac6b);}
L_1803fabf7_2:;
return UINT64_C(0x1803fabf9);
}
uint64_t b_1803fabf9(CPU*s){
/* 1803fabf9: and r8d, 0x7fc00000 */
L_1803fabf9_0:;
L_1803fabf9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fabf9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fabf9_3:;
wr(s->r,128,4,(rd(s->r,128,4)&((U)UINT64_C(0x7fc00000))));
L_1803fabf9_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fabf9_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fabf9_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fabf9_7:;
wr(s->u,1,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fabf9_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fabf9_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fabf9_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fabf9_11:;
/* 1803fac00: cmp r8d, 0x7fc00000 */
L_1803fac00_0:;
L_1803fac00_1:;
wr(s->u,7,4,rd(s->r,128,4));
L_1803fac00_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x7fc00000))));
L_1803fac00_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803fac00_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x7fc00000))));
L_1803fac00_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fac00_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fac00_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fac00_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fac00_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fac00_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fac00_11:;
/* 1803fac07: jne 0x1803fac13 */
L_1803fac07_0:;
L_1803fac07_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fac07_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fac13);}
L_1803fac07_3:;
return UINT64_C(0x1803fac09);
}
uint64_t b_1803fac09(CPU*s){
/* 1803fac09: mov esi, dword ptr [rip + 0x414051] */
L_1803fac09_0:;
L_1803fac09_1:;
wr(s->r,48,4,mr(UINT64_C(0x18080ec60),4));
L_1803fac09_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fac09_3:;
/* 1803fac0f: mov dword ptr [rdx], esi */
L_1803fac0f_0:;
L_1803fac0f_1:;
wr(s->u,0,4,rd(s->r,48,4));
L_1803fac0f_2:;
mw((uint64_t)rd(s->r,16,8),4,rd(s->u,0,4));
L_1803fac0f_3:;
/* 1803fac11: jmp 0x1803fac4f */
L_1803fac11_0:;
L_1803fac11_1:;
return UINT64_C(0x1803fac4f);
L_1803fac11_2:;
return UINT64_C(0x1803fac13);
}
uint64_t b_1803fac13(CPU*s){
/* 1803fac13: mov esi, dword ptr [rsp + 0x20] */
L_1803fac13_0:;
L_1803fac13_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fac13_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fac13_3:;
wr(s->r,48,4,rd(s->u,12,4));
L_1803fac13_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fac13_5:;
/* 1803fac17: mov dword ptr [rdx], esi */
L_1803fac17_0:;
L_1803fac17_1:;
wr(s->u,8,4,rd(s->r,48,4));
L_1803fac17_2:;
mw((uint64_t)rd(s->r,16,8),4,rd(s->u,8,4));
L_1803fac17_3:;
/* 1803fac19: jmp 0x1803fac4f */
L_1803fac19_0:;
L_1803fac19_1:;
return UINT64_C(0x1803fac4f);
L_1803fac19_2:;
return UINT64_C(0x1803fac1b);
}
uint64_t b_1803fac1b(CPU*s){
/* 1803fac1b: cmp r8d, 0x42b17218 */
L_1803fac1b_0:;
L_1803fac1b_1:;
wr(s->u,6,4,rd(s->r,128,4));
L_1803fac1b_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x42b17218))));
L_1803fac1b_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x42b17218)),4,1));
L_1803fac1b_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x42b17218))));
L_1803fac1b_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fac1b_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fac1b_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fac1b_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fac1b_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fac1b_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fac1b_11:;
/* 1803fac22: jb 0x1803fac6b */
L_1803fac22_0:;
L_1803fac22_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fac6b);}
L_1803fac22_2:;
return UINT64_C(0x1803fac24);
}
uint64_t b_1803fac24(CPU*s){
/* 1803fac24: and r8d, 0x7fc00000 */
L_1803fac24_0:;
L_1803fac24_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fac24_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fac24_3:;
wr(s->r,128,4,(rd(s->r,128,4)&((U)UINT64_C(0x7fc00000))));
L_1803fac24_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fac24_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fac24_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fac24_7:;
wr(s->u,1,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fac24_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fac24_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fac24_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fac24_11:;
/* 1803fac2b: cmp r8d, 0x7fc00000 */
L_1803fac2b_0:;
L_1803fac2b_1:;
wr(s->u,7,4,rd(s->r,128,4));
L_1803fac2b_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x7fc00000))));
L_1803fac2b_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803fac2b_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x7fc00000))));
L_1803fac2b_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fac2b_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fac2b_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fac2b_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fac2b_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fac2b_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fac2b_11:;
/* 1803fac32: jne 0x1803fac46 */
L_1803fac32_0:;
L_1803fac32_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fac32_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fac46);}
L_1803fac32_3:;
return UINT64_C(0x1803fac34);
}
uint64_t b_1803fac34(CPU*s){
/* 1803fac34: pxor xmm0, xmm0 */
L_1803fac34_0:;
L_1803fac34_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803fac34_2:;
/* 1803fac38: subss xmm0, dword ptr [rip + 0x414020] */
L_1803fac38_0:;
L_1803fac38_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(mr(UINT64_C(0x18080ec60),4),4),4));
L_1803fac38_2:;
/* 1803fac40: movss dword ptr [rdx], xmm0 */
L_1803fac40_0:;
L_1803fac40_1:;
wr(s->u,0,4,rd(s->r,4608,4));
L_1803fac40_2:;
mw((uint64_t)rd(s->r,16,8),4,rd(s->u,0,4));
L_1803fac40_3:;
/* 1803fac44: jmp 0x1803fac4f */
L_1803fac44_0:;
L_1803fac44_1:;
return UINT64_C(0x1803fac4f);
L_1803fac44_2:;
return UINT64_C(0x1803fac46);
}
uint64_t b_1803fac46(CPU*s){
/* 1803fac46: mov esi, dword ptr [rsp + 0x208] */
L_1803fac46_0:;
L_1803fac46_1:;
wr(s->u,8,8,(((U)UINT64_C(0x208))+rd(s->r,32,8)));
L_1803fac46_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fac46_3:;
wr(s->r,48,4,rd(s->u,20,4));
L_1803fac46_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fac46_5:;
/* 1803fac4d: mov dword ptr [rdx], esi */
L_1803fac4d_0:;
L_1803fac4d_1:;
wr(s->u,16,4,rd(s->r,48,4));
L_1803fac4d_2:;
mw((uint64_t)rd(s->r,16,8),4,rd(s->u,16,4));
L_1803fac4d_3:;
/* 1803fac4f: mov esi, ecx */
L_1803fac4f_0:;
L_1803fac4f_1:;
wr(s->r,48,4,rd(s->r,8,4));
L_1803fac4f_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fac4f_3:;
/* 1803fac51: add esi, -1 */
L_1803fac51_0:;
L_1803fac51_1:;
wr(s->r,512,1,(((rd(s->r,48,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,48,4)));
L_1803fac51_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fac51_3:;
wr(s->r,48,4,(rd(s->r,48,4)+((U)UINT64_C(0xffffffff))));
L_1803fac51_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fac51_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fac51_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803fac51_7:;
wr(s->u,25,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803fac51_8:;
wr(s->u,33,1,pop(rd(s->u,25,4),4));
L_1803fac51_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fac51_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fac51_11:;
/* 1803fac54: sub esi, eax */
L_1803fac54_0:;
L_1803fac54_1:;
wr(s->r,512,1,(rd(s->r,48,4)<rd(s->r,0,4)));
L_1803fac54_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),rd(s->r,0,4),4,1));
L_1803fac54_3:;
wr(s->r,48,4,(rd(s->r,48,4)-rd(s->r,0,4)));
L_1803fac54_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fac54_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fac54_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803fac54_7:;
wr(s->u,25,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803fac54_8:;
wr(s->u,33,1,pop(rd(s->u,25,4),4));
L_1803fac54_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fac54_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fac54_11:;
/* 1803fac56: add rdx, -4 */
L_1803fac56_0:;
L_1803fac56_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803fac56_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0xfffffffffffffffc)),8,0));
L_1803fac56_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fac56_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fac56_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fac56_6:;
wr(s->u,25,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fac56_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fac56_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fac56_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fac56_10:;
/* 1803fac5a: add rax, 1 */
L_1803fac5a_0:;
L_1803fac5a_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fac5a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fac5a_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fac5a_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fac5a_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fac5a_6:;
wr(s->u,25,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fac5a_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fac5a_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fac5a_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fac5a_10:;
/* 1803fac5e: lea rdi, [rcx + 1] */
L_1803fac5e_0:;
L_1803fac5e_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x1))));
L_1803fac5e_2:;
wr(s->r,56,8,rd(s->u,0,8));
L_1803fac5e_3:;
/* 1803fac62: cmp rax, rdi */
L_1803fac62_0:;
L_1803fac62_1:;
wr(s->u,35,8,rd(s->r,56,8));
L_1803fac62_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,35,8)));
L_1803fac62_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,35,8),8,1));
L_1803fac62_4:;
wr(s->u,43,8,(rd(s->r,0,8)-rd(s->u,35,8)));
L_1803fac62_5:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fac62_6:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1803fac62_7:;
wr(s->u,25,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1803fac62_8:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fac62_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fac62_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fac62_11:;
/* 1803fac65: jl 0x1803fabbd */
L_1803fac65_0:;
L_1803fac65_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fac65_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803fabbd);}
L_1803fac65_3:;
return UINT64_C(0x1803fac6b);
}
uint64_t b_1803fac4f(CPU*s){
/* 1803fac4f: mov esi, ecx */
L_1803fac4f_0:;
L_1803fac4f_1:;
wr(s->r,48,4,rd(s->r,8,4));
L_1803fac4f_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fac4f_3:;
/* 1803fac51: add esi, -1 */
L_1803fac51_0:;
L_1803fac51_1:;
wr(s->r,512,1,(((rd(s->r,48,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,48,4)));
L_1803fac51_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fac51_3:;
wr(s->r,48,4,(rd(s->r,48,4)+((U)UINT64_C(0xffffffff))));
L_1803fac51_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fac51_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fac51_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803fac51_7:;
wr(s->u,9,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803fac51_8:;
wr(s->u,17,1,pop(rd(s->u,9,4),4));
L_1803fac51_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fac51_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fac51_11:;
/* 1803fac54: sub esi, eax */
L_1803fac54_0:;
L_1803fac54_1:;
wr(s->r,512,1,(rd(s->r,48,4)<rd(s->r,0,4)));
L_1803fac54_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),rd(s->r,0,4),4,1));
L_1803fac54_3:;
wr(s->r,48,4,(rd(s->r,48,4)-rd(s->r,0,4)));
L_1803fac54_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fac54_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fac54_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803fac54_7:;
wr(s->u,9,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803fac54_8:;
wr(s->u,17,1,pop(rd(s->u,9,4),4));
L_1803fac54_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fac54_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fac54_11:;
/* 1803fac56: add rdx, -4 */
L_1803fac56_0:;
L_1803fac56_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803fac56_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0xfffffffffffffffc)),8,0));
L_1803fac56_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fac56_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fac56_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fac56_6:;
wr(s->u,9,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fac56_7:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fac56_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fac56_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fac56_10:;
/* 1803fac5a: add rax, 1 */
L_1803fac5a_0:;
L_1803fac5a_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fac5a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fac5a_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fac5a_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fac5a_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fac5a_6:;
wr(s->u,9,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fac5a_7:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fac5a_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fac5a_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fac5a_10:;
/* 1803fac5e: lea rdi, [rcx + 1] */
L_1803fac5e_0:;
L_1803fac5e_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x1))));
L_1803fac5e_2:;
wr(s->r,56,8,rd(s->u,0,8));
L_1803fac5e_3:;
/* 1803fac62: cmp rax, rdi */
L_1803fac62_0:;
L_1803fac62_1:;
wr(s->u,19,8,rd(s->r,56,8));
L_1803fac62_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,19,8)));
L_1803fac62_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,19,8),8,1));
L_1803fac62_4:;
wr(s->u,27,8,(rd(s->r,0,8)-rd(s->u,19,8)));
L_1803fac62_5:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fac62_6:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803fac62_7:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803fac62_8:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fac62_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fac62_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fac62_11:;
/* 1803fac65: jl 0x1803fabbd */
L_1803fac65_0:;
L_1803fac65_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fac65_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803fabbd);}
L_1803fac65_3:;
return UINT64_C(0x1803fac6b);
}
uint64_t b_1803fac6b(CPU*s){
/* 1803fac6b: mov dword ptr [rsp + 0x148], r9d */
L_1803fac6b_0:;
L_1803fac6b_1:;
wr(s->u,16,8,(((U)UINT64_C(0x148))+rd(s->r,32,8)));
L_1803fac6b_2:;
wr(s->u,24,4,rd(s->r,136,4));
L_1803fac6b_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fac6b_4:;
/* 1803fac73: mov eax, dword ptr [rsp + 0xd0] */
L_1803fac73_0:;
L_1803fac73_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803fac73_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fac73_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803fac73_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fac73_5:;
/* 1803fac7a: mov edx, dword ptr [rsp + 0x148] */
L_1803fac7a_0:;
L_1803fac7a_1:;
wr(s->u,16,8,(((U)UINT64_C(0x148))+rd(s->r,32,8)));
L_1803fac7a_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fac7a_3:;
wr(s->r,16,4,rd(s->u,28,4));
L_1803fac7a_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fac7a_5:;
/* 1803fac81: lea ecx, [rax + rdx] */
L_1803fac81_0:;
L_1803fac81_1:;
wr(s->u,0,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803fac81_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803fac81_3:;
wr(s->r,8,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fac81_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fac81_5:;
/* 1803fac84: mov dword ptr [rsp + 0x130], ecx */
L_1803fac84_0:;
L_1803fac84_1:;
wr(s->u,16,8,(((U)UINT64_C(0x130))+rd(s->r,32,8)));
L_1803fac84_2:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803fac84_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fac84_4:;
/* 1803fac8b: mov r12d, esi */
L_1803fac8b_0:;
L_1803fac8b_1:;
wr(s->r,160,4,rd(s->r,48,4));
L_1803fac8b_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fac8b_3:;
/* 1803fac8e: xor edx, edx */
L_1803fac8e_0:;
L_1803fac8e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fac8e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fac8e_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803fac8e_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fac8e_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fac8e_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fac8e_7:;
wr(s->u,32,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fac8e_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803fac8e_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803fac8e_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803fac8e_11:;
/* 1803fac90: add r12d, -1 */
L_1803fac90_0:;
L_1803fac90_1:;
wr(s->r,512,1,(((rd(s->r,160,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,160,4)));
L_1803fac90_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fac90_3:;
wr(s->r,160,4,(rd(s->r,160,4)+((U)UINT64_C(0xffffffff))));
L_1803fac90_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fac90_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fac90_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fac90_7:;
wr(s->u,32,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fac90_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803fac90_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803fac90_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803fac90_11:;
/* 1803fac94: movsxd rcx, r12d */
L_1803fac94_0:;
L_1803fac94_1:;
wr(s->r,8,8,(U)sx(rd(s->r,160,4),4));
L_1803fac94_2:;
/* 1803fac97: js 0x1803fad5b */
L_1803fac97_0:;
L_1803fac97_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803fad5b);}
L_1803fac97_2:;
return UINT64_C(0x1803fac9d);
}
uint64_t b_1803fac73(CPU*s){
/* 1803fac73: mov eax, dword ptr [rsp + 0xd0] */
L_1803fac73_0:;
L_1803fac73_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803fac73_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fac73_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803fac73_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fac73_5:;
/* 1803fac7a: mov edx, dword ptr [rsp + 0x148] */
L_1803fac7a_0:;
L_1803fac7a_1:;
wr(s->u,16,8,(((U)UINT64_C(0x148))+rd(s->r,32,8)));
L_1803fac7a_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fac7a_3:;
wr(s->r,16,4,rd(s->u,28,4));
L_1803fac7a_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fac7a_5:;
/* 1803fac81: lea ecx, [rax + rdx] */
L_1803fac81_0:;
L_1803fac81_1:;
wr(s->u,0,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803fac81_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803fac81_3:;
wr(s->r,8,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fac81_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fac81_5:;
/* 1803fac84: mov dword ptr [rsp + 0x130], ecx */
L_1803fac84_0:;
L_1803fac84_1:;
wr(s->u,16,8,(((U)UINT64_C(0x130))+rd(s->r,32,8)));
L_1803fac84_2:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803fac84_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fac84_4:;
/* 1803fac8b: mov r12d, esi */
L_1803fac8b_0:;
L_1803fac8b_1:;
wr(s->r,160,4,rd(s->r,48,4));
L_1803fac8b_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fac8b_3:;
/* 1803fac8e: xor edx, edx */
L_1803fac8e_0:;
L_1803fac8e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fac8e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fac8e_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803fac8e_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fac8e_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fac8e_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fac8e_7:;
wr(s->u,32,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fac8e_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803fac8e_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803fac8e_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803fac8e_11:;
/* 1803fac90: add r12d, -1 */
L_1803fac90_0:;
L_1803fac90_1:;
wr(s->r,512,1,(((rd(s->r,160,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,160,4)));
L_1803fac90_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fac90_3:;
wr(s->r,160,4,(rd(s->r,160,4)+((U)UINT64_C(0xffffffff))));
L_1803fac90_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fac90_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fac90_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fac90_7:;
wr(s->u,32,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fac90_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803fac90_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803fac90_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803fac90_11:;
/* 1803fac94: movsxd rcx, r12d */
L_1803fac94_0:;
L_1803fac94_1:;
wr(s->r,8,8,(U)sx(rd(s->r,160,4),4));
L_1803fac94_2:;
/* 1803fac97: js 0x1803fad5b */
L_1803fac97_0:;
L_1803fac97_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803fad5b);}
L_1803fac97_2:;
return UINT64_C(0x1803fac9d);
}
uint64_t b_1803fac9d(CPU*s){
/* 1803fac9d: lea rax, [rbp + rcx*4] */
L_1803fac9d_0:;
L_1803fac9d_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803fac9d_2:;
wr(s->u,8,8,(rd(s->r,40,8)+rd(s->u,0,8)));
L_1803fac9d_3:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803fac9d_4:;
/* 1803faca2: mov r8d, dword ptr [rax] */
L_1803faca2_0:;
L_1803faca2_1:;
wr(s->u,28,4,mr((uint64_t)rd(s->r,0,8),4));
L_1803faca2_2:;
wr(s->r,128,4,rd(s->u,28,4));
L_1803faca2_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803faca2_4:;
/* 1803faca5: mov dword ptr [rsp + 0x224], r8d */
L_1803faca5_0:;
L_1803faca5_1:;
wr(s->u,16,8,(((U)UINT64_C(0x224))+rd(s->r,32,8)));
L_1803faca5_2:;
wr(s->u,24,4,rd(s->r,128,4));
L_1803faca5_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803faca5_4:;
/* 1803facad: mov r9d, r8d */
L_1803facad_0:;
L_1803facad_1:;
wr(s->r,136,4,rd(s->r,128,4));
L_1803facad_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803facad_3:;
/* 1803facb0: and r9d, 0x80000000 */
L_1803facb0_0:;
L_1803facb0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803facb0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803facb0_3:;
wr(s->r,136,4,(rd(s->r,136,4)&((U)UINT64_C(0x80000000))));
L_1803facb0_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803facb0_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803facb0_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803facb0_7:;
wr(s->u,33,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803facb0_8:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803facb0_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803facb0_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803facb0_11:;
/* 1803facb7: mov edi, r8d */
L_1803facb7_0:;
L_1803facb7_1:;
wr(s->r,56,4,rd(s->r,128,4));
L_1803facb7_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803facb7_3:;
/* 1803facba: and edi, 0x7fffffff */
L_1803facba_0:;
L_1803facba_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803facba_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803facba_3:;
wr(s->r,56,4,(rd(s->r,56,4)&((U)UINT64_C(0x7fffffff))));
L_1803facba_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803facba_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803facba_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803facba_7:;
wr(s->u,33,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803facba_8:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803facba_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803facba_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803facba_11:;
/* 1803facc0: cmp edi, 0x800000 */
L_1803facc0_0:;
L_1803facc0_1:;
wr(s->u,39,4,rd(s->r,56,4));
L_1803facc0_2:;
wr(s->r,512,1,(rd(s->u,39,4)<((U)UINT64_C(0x800000))));
L_1803facc0_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,39,4),((U)UINT64_C(0x800000)),4,1));
L_1803facc0_4:;
wr(s->u,43,4,(rd(s->u,39,4)-((U)UINT64_C(0x800000))));
L_1803facc0_5:;
wr(s->r,519,1,(sx(rd(s->u,43,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803facc0_6:;
wr(s->r,518,1,(rd(s->u,43,4)==((U)UINT64_C(0x0))));
L_1803facc0_7:;
wr(s->u,33,4,(rd(s->u,43,4)&((U)UINT64_C(0xff))));
L_1803facc0_8:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803facc0_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803facc0_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803facc0_11:;
/* 1803facc6: jae 0x1803facd0 */
L_1803facc6_0:;
L_1803facc6_1:;
wr(s->u,32,1,(!rd(s->r,512,1)));
L_1803facc6_2:;
if(rd(s->u,32,1)){return UINT64_C(0x1803facd0);}
L_1803facc6_3:;
return UINT64_C(0x1803facc8);
}
uint64_t b_1803faca2(CPU*s){
/* 1803faca2: mov r8d, dword ptr [rax] */
L_1803faca2_0:;
L_1803faca2_1:;
wr(s->u,12,4,mr((uint64_t)rd(s->r,0,8),4));
L_1803faca2_2:;
wr(s->r,128,4,rd(s->u,12,4));
L_1803faca2_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803faca2_4:;
/* 1803faca5: mov dword ptr [rsp + 0x224], r8d */
L_1803faca5_0:;
L_1803faca5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x224))+rd(s->r,32,8)));
L_1803faca5_2:;
wr(s->u,8,4,rd(s->r,128,4));
L_1803faca5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803faca5_4:;
/* 1803facad: mov r9d, r8d */
L_1803facad_0:;
L_1803facad_1:;
wr(s->r,136,4,rd(s->r,128,4));
L_1803facad_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803facad_3:;
/* 1803facb0: and r9d, 0x80000000 */
L_1803facb0_0:;
L_1803facb0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803facb0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803facb0_3:;
wr(s->r,136,4,(rd(s->r,136,4)&((U)UINT64_C(0x80000000))));
L_1803facb0_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803facb0_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803facb0_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803facb0_7:;
wr(s->u,17,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803facb0_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803facb0_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803facb0_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803facb0_11:;
/* 1803facb7: mov edi, r8d */
L_1803facb7_0:;
L_1803facb7_1:;
wr(s->r,56,4,rd(s->r,128,4));
L_1803facb7_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803facb7_3:;
/* 1803facba: and edi, 0x7fffffff */
L_1803facba_0:;
L_1803facba_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803facba_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803facba_3:;
wr(s->r,56,4,(rd(s->r,56,4)&((U)UINT64_C(0x7fffffff))));
L_1803facba_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803facba_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803facba_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803facba_7:;
wr(s->u,17,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803facba_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803facba_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803facba_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803facba_11:;
/* 1803facc0: cmp edi, 0x800000 */
L_1803facc0_0:;
L_1803facc0_1:;
wr(s->u,23,4,rd(s->r,56,4));
L_1803facc0_2:;
wr(s->r,512,1,(rd(s->u,23,4)<((U)UINT64_C(0x800000))));
L_1803facc0_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,23,4),((U)UINT64_C(0x800000)),4,1));
L_1803facc0_4:;
wr(s->u,27,4,(rd(s->u,23,4)-((U)UINT64_C(0x800000))));
L_1803facc0_5:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803facc0_6:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803facc0_7:;
wr(s->u,17,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803facc0_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803facc0_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803facc0_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803facc0_11:;
/* 1803facc6: jae 0x1803facd0 */
L_1803facc6_0:;
L_1803facc6_1:;
wr(s->u,16,1,(!rd(s->r,512,1)));
L_1803facc6_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803facd0);}
L_1803facc6_3:;
return UINT64_C(0x1803facc8);
}
uint64_t b_1803facc8(CPU*s){
/* 1803facc8: mov dword ptr [rax], 0x3f800000 */
L_1803facc8_0:;
L_1803facc8_1:;
wr(s->u,0,4,((U)UINT64_C(0x3f800000)));
L_1803facc8_2:;
mw((uint64_t)rd(s->r,0,8),4,rd(s->u,0,4));
L_1803facc8_3:;
/* 1803facce: jmp 0x1803fad34 */
L_1803facce_0:;
L_1803facce_1:;
return UINT64_C(0x1803fad34);
L_1803facce_2:;
return UINT64_C(0x1803facd0);
}
uint64_t b_1803facd0(CPU*s){
/* 1803facd0: test r9d, r9d */
L_1803facd0_0:;
L_1803facd0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803facd0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803facd0_3:;
wr(s->u,6,4,(rd(s->r,136,4)&rd(s->r,136,4)));
L_1803facd0_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803facd0_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803facd0_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803facd0_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803facd0_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803facd0_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803facd0_10:;
/* 1803facd3: je 0x1803fad00 */
L_1803facd3_0:;
L_1803facd3_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fad00);}
L_1803facd3_2:;
return UINT64_C(0x1803facd5);
}
uint64_t b_1803facd5(CPU*s){
/* 1803facd5: cmp r8d, 0xc2aeac50 */
L_1803facd5_0:;
L_1803facd5_1:;
wr(s->u,6,4,rd(s->r,128,4));
L_1803facd5_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0xc2aeac50))));
L_1803facd5_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0xc2aeac50)),4,1));
L_1803facd5_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0xc2aeac50))));
L_1803facd5_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803facd5_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803facd5_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803facd5_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803facd5_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803facd5_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803facd5_11:;
/* 1803facdc: jb 0x1803fad53 */
L_1803facdc_0:;
L_1803facdc_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fad53);}
L_1803facdc_2:;
return UINT64_C(0x1803facde);
}
uint64_t b_1803facde(CPU*s){
/* 1803facde: and r8d, 0x7fc00000 */
L_1803facde_0:;
L_1803facde_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803facde_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803facde_3:;
wr(s->r,128,4,(rd(s->r,128,4)&((U)UINT64_C(0x7fc00000))));
L_1803facde_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803facde_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803facde_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803facde_7:;
wr(s->u,1,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803facde_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803facde_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803facde_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803facde_11:;
/* 1803face5: cmp r8d, 0x7fc00000 */
L_1803face5_0:;
L_1803face5_1:;
wr(s->u,7,4,rd(s->r,128,4));
L_1803face5_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x7fc00000))));
L_1803face5_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803face5_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x7fc00000))));
L_1803face5_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803face5_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803face5_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803face5_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803face5_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803face5_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803face5_11:;
/* 1803facec: jne 0x1803facf8 */
L_1803facec_0:;
L_1803facec_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803facec_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803facf8);}
L_1803facec_3:;
return UINT64_C(0x1803facee);
}
uint64_t b_1803facee(CPU*s){
/* 1803facee: mov edi, dword ptr [rip + 0x413f6c] */
L_1803facee_0:;
L_1803facee_1:;
wr(s->r,56,4,mr(UINT64_C(0x18080ec60),4));
L_1803facee_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803facee_3:;
/* 1803facf4: mov dword ptr [rax], edi */
L_1803facf4_0:;
L_1803facf4_1:;
wr(s->u,0,4,rd(s->r,56,4));
L_1803facf4_2:;
mw((uint64_t)rd(s->r,0,8),4,rd(s->u,0,4));
L_1803facf4_3:;
/* 1803facf6: jmp 0x1803fad34 */
L_1803facf6_0:;
L_1803facf6_1:;
return UINT64_C(0x1803fad34);
L_1803facf6_2:;
return UINT64_C(0x1803facf8);
}
uint64_t b_1803facf8(CPU*s){
/* 1803facf8: mov edi, dword ptr [rsp + 0x20] */
L_1803facf8_0:;
L_1803facf8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803facf8_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803facf8_3:;
wr(s->r,56,4,rd(s->u,12,4));
L_1803facf8_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803facf8_5:;
/* 1803facfc: mov dword ptr [rax], edi */
L_1803facfc_0:;
L_1803facfc_1:;
wr(s->u,8,4,rd(s->r,56,4));
L_1803facfc_2:;
mw((uint64_t)rd(s->r,0,8),4,rd(s->u,8,4));
L_1803facfc_3:;
/* 1803facfe: jmp 0x1803fad34 */
L_1803facfe_0:;
L_1803facfe_1:;
return UINT64_C(0x1803fad34);
L_1803facfe_2:;
return UINT64_C(0x1803fad00);
}
uint64_t b_1803fad00(CPU*s){
/* 1803fad00: cmp r8d, 0x42b17218 */
L_1803fad00_0:;
L_1803fad00_1:;
wr(s->u,6,4,rd(s->r,128,4));
L_1803fad00_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x42b17218))));
L_1803fad00_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x42b17218)),4,1));
L_1803fad00_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x42b17218))));
L_1803fad00_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fad00_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fad00_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fad00_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fad00_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fad00_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fad00_11:;
/* 1803fad07: jb 0x1803fad53 */
L_1803fad07_0:;
L_1803fad07_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fad53);}
L_1803fad07_2:;
return UINT64_C(0x1803fad09);
}
uint64_t b_1803fad09(CPU*s){
/* 1803fad09: and r8d, 0x7fc00000 */
L_1803fad09_0:;
L_1803fad09_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fad09_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fad09_3:;
wr(s->r,128,4,(rd(s->r,128,4)&((U)UINT64_C(0x7fc00000))));
L_1803fad09_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fad09_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fad09_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fad09_7:;
wr(s->u,1,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fad09_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fad09_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fad09_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fad09_11:;
/* 1803fad10: cmp r8d, 0x7fc00000 */
L_1803fad10_0:;
L_1803fad10_1:;
wr(s->u,7,4,rd(s->r,128,4));
L_1803fad10_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x7fc00000))));
L_1803fad10_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803fad10_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x7fc00000))));
L_1803fad10_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fad10_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fad10_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fad10_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fad10_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fad10_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fad10_11:;
/* 1803fad17: jne 0x1803fad2b */
L_1803fad17_0:;
L_1803fad17_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fad17_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fad2b);}
L_1803fad17_3:;
return UINT64_C(0x1803fad19);
}
uint64_t b_1803fad19(CPU*s){
/* 1803fad19: pxor xmm0, xmm0 */
L_1803fad19_0:;
L_1803fad19_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803fad19_2:;
/* 1803fad1d: subss xmm0, dword ptr [rip + 0x413f3b] */
L_1803fad1d_0:;
L_1803fad1d_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(mr(UINT64_C(0x18080ec60),4),4),4));
L_1803fad1d_2:;
/* 1803fad25: movss dword ptr [rax], xmm0 */
L_1803fad25_0:;
L_1803fad25_1:;
wr(s->u,0,4,rd(s->r,4608,4));
L_1803fad25_2:;
mw((uint64_t)rd(s->r,0,8),4,rd(s->u,0,4));
L_1803fad25_3:;
/* 1803fad29: jmp 0x1803fad34 */
L_1803fad29_0:;
L_1803fad29_1:;
return UINT64_C(0x1803fad34);
L_1803fad29_2:;
return UINT64_C(0x1803fad2b);
}
uint64_t b_1803fad2b(CPU*s){
/* 1803fad2b: mov edi, dword ptr [rsp + 0x208] */
L_1803fad2b_0:;
L_1803fad2b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x208))+rd(s->r,32,8)));
L_1803fad2b_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fad2b_3:;
wr(s->r,56,4,rd(s->u,20,4));
L_1803fad2b_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fad2b_5:;
/* 1803fad32: mov dword ptr [rax], edi */
L_1803fad32_0:;
L_1803fad32_1:;
wr(s->u,16,4,rd(s->r,56,4));
L_1803fad32_2:;
mw((uint64_t)rd(s->r,0,8),4,rd(s->u,16,4));
L_1803fad32_3:;
/* 1803fad34: mov r12d, ecx */
L_1803fad34_0:;
L_1803fad34_1:;
wr(s->r,160,4,rd(s->r,8,4));
L_1803fad34_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fad34_3:;
/* 1803fad37: add r12d, -1 */
L_1803fad37_0:;
L_1803fad37_1:;
wr(s->r,512,1,(((rd(s->r,160,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,160,4)));
L_1803fad37_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fad37_3:;
wr(s->r,160,4,(rd(s->r,160,4)+((U)UINT64_C(0xffffffff))));
L_1803fad37_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fad37_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fad37_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fad37_7:;
wr(s->u,25,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fad37_8:;
wr(s->u,33,1,pop(rd(s->u,25,4),4));
L_1803fad37_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fad37_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fad37_11:;
/* 1803fad3b: sub r12d, edx */
L_1803fad3b_0:;
L_1803fad3b_1:;
wr(s->r,512,1,(rd(s->r,160,4)<rd(s->r,16,4)));
L_1803fad3b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),rd(s->r,16,4),4,1));
L_1803fad3b_3:;
wr(s->r,160,4,(rd(s->r,160,4)-rd(s->r,16,4)));
L_1803fad3b_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fad3b_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fad3b_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fad3b_7:;
wr(s->u,25,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fad3b_8:;
wr(s->u,33,1,pop(rd(s->u,25,4),4));
L_1803fad3b_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fad3b_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fad3b_11:;
/* 1803fad3e: add rax, -4 */
L_1803fad3e_0:;
L_1803fad3e_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffffc)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fad3e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0xfffffffffffffffc)),8,0));
L_1803fad3e_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fad3e_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fad3e_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fad3e_6:;
wr(s->u,25,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fad3e_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fad3e_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fad3e_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fad3e_10:;
/* 1803fad42: add rdx, 1 */
L_1803fad42_0:;
L_1803fad42_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803fad42_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x1)),8,0));
L_1803fad42_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x1))));
L_1803fad42_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fad42_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fad42_6:;
wr(s->u,25,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fad42_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fad42_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fad42_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fad42_10:;
/* 1803fad46: lea rdi, [rcx + 1] */
L_1803fad46_0:;
L_1803fad46_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x1))));
L_1803fad46_2:;
wr(s->r,56,8,rd(s->u,0,8));
L_1803fad46_3:;
/* 1803fad4a: cmp rdx, rdi */
L_1803fad4a_0:;
L_1803fad4a_1:;
wr(s->u,35,8,rd(s->r,56,8));
L_1803fad4a_2:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,35,8)));
L_1803fad4a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,35,8),8,1));
L_1803fad4a_4:;
wr(s->u,43,8,(rd(s->r,16,8)-rd(s->u,35,8)));
L_1803fad4a_5:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fad4a_6:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1803fad4a_7:;
wr(s->u,25,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1803fad4a_8:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fad4a_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fad4a_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fad4a_11:;
/* 1803fad4d: jl 0x1803faca2 */
L_1803fad4d_0:;
L_1803fad4d_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fad4d_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803faca2);}
L_1803fad4d_3:;
return UINT64_C(0x1803fad53);
}
uint64_t b_1803fad34(CPU*s){
/* 1803fad34: mov r12d, ecx */
L_1803fad34_0:;
L_1803fad34_1:;
wr(s->r,160,4,rd(s->r,8,4));
L_1803fad34_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fad34_3:;
/* 1803fad37: add r12d, -1 */
L_1803fad37_0:;
L_1803fad37_1:;
wr(s->r,512,1,(((rd(s->r,160,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,160,4)));
L_1803fad37_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fad37_3:;
wr(s->r,160,4,(rd(s->r,160,4)+((U)UINT64_C(0xffffffff))));
L_1803fad37_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fad37_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fad37_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fad37_7:;
wr(s->u,9,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fad37_8:;
wr(s->u,17,1,pop(rd(s->u,9,4),4));
L_1803fad37_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fad37_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fad37_11:;
/* 1803fad3b: sub r12d, edx */
L_1803fad3b_0:;
L_1803fad3b_1:;
wr(s->r,512,1,(rd(s->r,160,4)<rd(s->r,16,4)));
L_1803fad3b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),rd(s->r,16,4),4,1));
L_1803fad3b_3:;
wr(s->r,160,4,(rd(s->r,160,4)-rd(s->r,16,4)));
L_1803fad3b_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fad3b_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fad3b_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fad3b_7:;
wr(s->u,9,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fad3b_8:;
wr(s->u,17,1,pop(rd(s->u,9,4),4));
L_1803fad3b_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fad3b_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fad3b_11:;
/* 1803fad3e: add rax, -4 */
L_1803fad3e_0:;
L_1803fad3e_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffffc)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fad3e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0xfffffffffffffffc)),8,0));
L_1803fad3e_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fad3e_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fad3e_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fad3e_6:;
wr(s->u,9,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fad3e_7:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fad3e_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fad3e_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fad3e_10:;
/* 1803fad42: add rdx, 1 */
L_1803fad42_0:;
L_1803fad42_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803fad42_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x1)),8,0));
L_1803fad42_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x1))));
L_1803fad42_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fad42_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fad42_6:;
wr(s->u,9,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fad42_7:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fad42_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fad42_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fad42_10:;
/* 1803fad46: lea rdi, [rcx + 1] */
L_1803fad46_0:;
L_1803fad46_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x1))));
L_1803fad46_2:;
wr(s->r,56,8,rd(s->u,0,8));
L_1803fad46_3:;
/* 1803fad4a: cmp rdx, rdi */
L_1803fad4a_0:;
L_1803fad4a_1:;
wr(s->u,19,8,rd(s->r,56,8));
L_1803fad4a_2:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,19,8)));
L_1803fad4a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,19,8),8,1));
L_1803fad4a_4:;
wr(s->u,27,8,(rd(s->r,16,8)-rd(s->u,19,8)));
L_1803fad4a_5:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fad4a_6:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803fad4a_7:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803fad4a_8:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fad4a_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fad4a_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fad4a_11:;
/* 1803fad4d: jl 0x1803faca2 */
L_1803fad4d_0:;
L_1803fad4d_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fad4d_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803faca2);}
L_1803fad4d_3:;
return UINT64_C(0x1803fad53);
}
uint64_t b_1803fad53(CPU*s){
/* 1803fad53: mov dword ptr [rsp + 0x140], r9d */
L_1803fad53_0:;
L_1803fad53_1:;
wr(s->u,16,8,(((U)UINT64_C(0x140))+rd(s->r,32,8)));
L_1803fad53_2:;
wr(s->u,24,4,rd(s->r,136,4));
L_1803fad53_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fad53_4:;
/* 1803fad5b: mov eax, dword ptr [rsp + 0xd0] */
L_1803fad5b_0:;
L_1803fad5b_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803fad5b_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fad5b_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803fad5b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fad5b_5:;
/* 1803fad62: mov edx, dword ptr [rsp + 0x140] */
L_1803fad62_0:;
L_1803fad62_1:;
wr(s->u,16,8,(((U)UINT64_C(0x140))+rd(s->r,32,8)));
L_1803fad62_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fad62_3:;
wr(s->r,16,4,rd(s->u,28,4));
L_1803fad62_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fad62_5:;
/* 1803fad69: lea ecx, [rax + rdx] */
L_1803fad69_0:;
L_1803fad69_1:;
wr(s->u,0,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803fad69_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803fad69_3:;
wr(s->r,8,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fad69_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fad69_5:;
/* 1803fad6c: mov dword ptr [rsp + 0x128], ecx */
L_1803fad6c_0:;
L_1803fad6c_1:;
wr(s->u,16,8,(((U)UINT64_C(0x128))+rd(s->r,32,8)));
L_1803fad6c_2:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803fad6c_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fad6c_4:;
/* 1803fad73: mov eax, r12d */
L_1803fad73_0:;
L_1803fad73_1:;
wr(s->r,0,4,rd(s->r,160,4));
L_1803fad73_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fad73_3:;
/* 1803fad76: xor r8d, r8d */
L_1803fad76_0:;
L_1803fad76_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fad76_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fad76_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1803fad76_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fad76_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fad76_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fad76_7:;
wr(s->u,32,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fad76_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803fad76_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803fad76_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803fad76_11:;
/* 1803fad79: add eax, -1 */
L_1803fad79_0:;
L_1803fad79_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803fad79_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fad79_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0xffffffff))));
L_1803fad79_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fad79_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fad79_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fad79_7:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fad79_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803fad79_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803fad79_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803fad79_11:;
/* 1803fad7c: movsxd r9, eax */
L_1803fad7c_0:;
L_1803fad7c_1:;
wr(s->r,136,8,(U)sx(rd(s->r,0,4),4));
L_1803fad7c_2:;
/* 1803fad7f: js 0x1803fae3f */
L_1803fad7f_0:;
L_1803fad7f_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803fae3f);}
L_1803fad7f_2:;
return UINT64_C(0x1803fad85);
}
uint64_t b_1803fad5b(CPU*s){
/* 1803fad5b: mov eax, dword ptr [rsp + 0xd0] */
L_1803fad5b_0:;
L_1803fad5b_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803fad5b_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fad5b_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803fad5b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fad5b_5:;
/* 1803fad62: mov edx, dword ptr [rsp + 0x140] */
L_1803fad62_0:;
L_1803fad62_1:;
wr(s->u,16,8,(((U)UINT64_C(0x140))+rd(s->r,32,8)));
L_1803fad62_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fad62_3:;
wr(s->r,16,4,rd(s->u,28,4));
L_1803fad62_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fad62_5:;
/* 1803fad69: lea ecx, [rax + rdx] */
L_1803fad69_0:;
L_1803fad69_1:;
wr(s->u,0,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803fad69_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803fad69_3:;
wr(s->r,8,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fad69_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fad69_5:;
/* 1803fad6c: mov dword ptr [rsp + 0x128], ecx */
L_1803fad6c_0:;
L_1803fad6c_1:;
wr(s->u,16,8,(((U)UINT64_C(0x128))+rd(s->r,32,8)));
L_1803fad6c_2:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803fad6c_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fad6c_4:;
/* 1803fad73: mov eax, r12d */
L_1803fad73_0:;
L_1803fad73_1:;
wr(s->r,0,4,rd(s->r,160,4));
L_1803fad73_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fad73_3:;
/* 1803fad76: xor r8d, r8d */
L_1803fad76_0:;
L_1803fad76_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fad76_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fad76_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1803fad76_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fad76_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fad76_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fad76_7:;
wr(s->u,32,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fad76_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803fad76_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803fad76_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803fad76_11:;
/* 1803fad79: add eax, -1 */
L_1803fad79_0:;
L_1803fad79_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803fad79_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fad79_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0xffffffff))));
L_1803fad79_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fad79_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fad79_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fad79_7:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fad79_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803fad79_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803fad79_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803fad79_11:;
/* 1803fad7c: movsxd r9, eax */
L_1803fad7c_0:;
L_1803fad7c_1:;
wr(s->r,136,8,(U)sx(rd(s->r,0,4),4));
L_1803fad7c_2:;
/* 1803fad7f: js 0x1803fae3f */
L_1803fad7f_0:;
L_1803fad7f_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803fae3f);}
L_1803fad7f_2:;
return UINT64_C(0x1803fad85);
}
uint64_t b_1803fad85(CPU*s){
/* 1803fad85: lea rcx, [rbp + r9*4] */
L_1803fad85_0:;
L_1803fad85_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fad85_2:;
wr(s->u,8,8,(rd(s->r,40,8)+rd(s->u,0,8)));
L_1803fad85_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803fad85_4:;
/* 1803fad8a: mov r10d, dword ptr [rcx] */
L_1803fad8a_0:;
L_1803fad8a_1:;
wr(s->u,28,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803fad8a_2:;
wr(s->r,144,4,rd(s->u,28,4));
L_1803fad8a_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fad8a_4:;
/* 1803fad8d: mov dword ptr [rsp + 0x228], r10d */
L_1803fad8d_0:;
L_1803fad8d_1:;
wr(s->u,16,8,(((U)UINT64_C(0x228))+rd(s->r,32,8)));
L_1803fad8d_2:;
wr(s->u,24,4,rd(s->r,144,4));
L_1803fad8d_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fad8d_4:;
/* 1803fad95: mov edx, r10d */
L_1803fad95_0:;
L_1803fad95_1:;
wr(s->r,16,4,rd(s->r,144,4));
L_1803fad95_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fad95_3:;
/* 1803fad98: and edx, 0x80000000 */
L_1803fad98_0:;
L_1803fad98_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fad98_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fad98_3:;
wr(s->r,16,4,(rd(s->r,16,4)&((U)UINT64_C(0x80000000))));
L_1803fad98_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fad98_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fad98_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fad98_7:;
wr(s->u,33,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fad98_8:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803fad98_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803fad98_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803fad98_11:;
/* 1803fad9e: mov edi, r10d */
L_1803fad9e_0:;
L_1803fad9e_1:;
wr(s->r,56,4,rd(s->r,144,4));
L_1803fad9e_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fad9e_3:;
/* 1803fada1: and edi, 0x7fffffff */
L_1803fada1_0:;
L_1803fada1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fada1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fada1_3:;
wr(s->r,56,4,(rd(s->r,56,4)&((U)UINT64_C(0x7fffffff))));
L_1803fada1_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fada1_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fada1_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803fada1_7:;
wr(s->u,33,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803fada1_8:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803fada1_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803fada1_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803fada1_11:;
/* 1803fada7: cmp edi, 0x800000 */
L_1803fada7_0:;
L_1803fada7_1:;
wr(s->u,39,4,rd(s->r,56,4));
L_1803fada7_2:;
wr(s->r,512,1,(rd(s->u,39,4)<((U)UINT64_C(0x800000))));
L_1803fada7_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,39,4),((U)UINT64_C(0x800000)),4,1));
L_1803fada7_4:;
wr(s->u,43,4,(rd(s->u,39,4)-((U)UINT64_C(0x800000))));
L_1803fada7_5:;
wr(s->r,519,1,(sx(rd(s->u,43,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fada7_6:;
wr(s->r,518,1,(rd(s->u,43,4)==((U)UINT64_C(0x0))));
L_1803fada7_7:;
wr(s->u,33,4,(rd(s->u,43,4)&((U)UINT64_C(0xff))));
L_1803fada7_8:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803fada7_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803fada7_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803fada7_11:;
/* 1803fadad: jae 0x1803fadb7 */
L_1803fadad_0:;
L_1803fadad_1:;
wr(s->u,32,1,(!rd(s->r,512,1)));
L_1803fadad_2:;
if(rd(s->u,32,1)){return UINT64_C(0x1803fadb7);}
L_1803fadad_3:;
return UINT64_C(0x1803fadaf);
}
uint64_t b_1803fad8a(CPU*s){
/* 1803fad8a: mov r10d, dword ptr [rcx] */
L_1803fad8a_0:;
L_1803fad8a_1:;
wr(s->u,12,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803fad8a_2:;
wr(s->r,144,4,rd(s->u,12,4));
L_1803fad8a_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fad8a_4:;
/* 1803fad8d: mov dword ptr [rsp + 0x228], r10d */
L_1803fad8d_0:;
L_1803fad8d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x228))+rd(s->r,32,8)));
L_1803fad8d_2:;
wr(s->u,8,4,rd(s->r,144,4));
L_1803fad8d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fad8d_4:;
/* 1803fad95: mov edx, r10d */
L_1803fad95_0:;
L_1803fad95_1:;
wr(s->r,16,4,rd(s->r,144,4));
L_1803fad95_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fad95_3:;
/* 1803fad98: and edx, 0x80000000 */
L_1803fad98_0:;
L_1803fad98_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fad98_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fad98_3:;
wr(s->r,16,4,(rd(s->r,16,4)&((U)UINT64_C(0x80000000))));
L_1803fad98_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fad98_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fad98_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fad98_7:;
wr(s->u,17,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fad98_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fad98_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fad98_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fad98_11:;
/* 1803fad9e: mov edi, r10d */
L_1803fad9e_0:;
L_1803fad9e_1:;
wr(s->r,56,4,rd(s->r,144,4));
L_1803fad9e_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fad9e_3:;
/* 1803fada1: and edi, 0x7fffffff */
L_1803fada1_0:;
L_1803fada1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fada1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fada1_3:;
wr(s->r,56,4,(rd(s->r,56,4)&((U)UINT64_C(0x7fffffff))));
L_1803fada1_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fada1_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fada1_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803fada1_7:;
wr(s->u,17,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803fada1_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fada1_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fada1_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fada1_11:;
/* 1803fada7: cmp edi, 0x800000 */
L_1803fada7_0:;
L_1803fada7_1:;
wr(s->u,23,4,rd(s->r,56,4));
L_1803fada7_2:;
wr(s->r,512,1,(rd(s->u,23,4)<((U)UINT64_C(0x800000))));
L_1803fada7_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,23,4),((U)UINT64_C(0x800000)),4,1));
L_1803fada7_4:;
wr(s->u,27,4,(rd(s->u,23,4)-((U)UINT64_C(0x800000))));
L_1803fada7_5:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fada7_6:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803fada7_7:;
wr(s->u,17,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803fada7_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fada7_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fada7_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fada7_11:;
/* 1803fadad: jae 0x1803fadb7 */
L_1803fadad_0:;
L_1803fadad_1:;
wr(s->u,16,1,(!rd(s->r,512,1)));
L_1803fadad_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803fadb7);}
L_1803fadad_3:;
return UINT64_C(0x1803fadaf);
}
uint64_t b_1803fadaf(CPU*s){
/* 1803fadaf: mov dword ptr [rcx], 0x3f800000 */
L_1803fadaf_0:;
L_1803fadaf_1:;
wr(s->u,0,4,((U)UINT64_C(0x3f800000)));
L_1803fadaf_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,0,4));
L_1803fadaf_3:;
/* 1803fadb5: jmp 0x1803fae1a */
L_1803fadb5_0:;
L_1803fadb5_1:;
return UINT64_C(0x1803fae1a);
L_1803fadb5_2:;
return UINT64_C(0x1803fadb7);
}
uint64_t b_1803fadb7(CPU*s){
/* 1803fadb7: test edx, edx */
L_1803fadb7_0:;
L_1803fadb7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fadb7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fadb7_3:;
wr(s->u,6,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803fadb7_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fadb7_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803fadb7_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803fadb7_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fadb7_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fadb7_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fadb7_10:;
/* 1803fadb9: je 0x1803fade6 */
L_1803fadb9_0:;
L_1803fadb9_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fade6);}
L_1803fadb9_2:;
return UINT64_C(0x1803fadbb);
}
uint64_t b_1803fadbb(CPU*s){
/* 1803fadbb: cmp r10d, 0xc2aeac50 */
L_1803fadbb_0:;
L_1803fadbb_1:;
wr(s->u,6,4,rd(s->r,144,4));
L_1803fadbb_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0xc2aeac50))));
L_1803fadbb_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0xc2aeac50)),4,1));
L_1803fadbb_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0xc2aeac50))));
L_1803fadbb_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fadbb_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fadbb_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fadbb_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fadbb_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fadbb_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fadbb_11:;
/* 1803fadc2: jb 0x1803fae38 */
L_1803fadc2_0:;
L_1803fadc2_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fae38);}
L_1803fadc2_2:;
return UINT64_C(0x1803fadc4);
}
uint64_t b_1803fadc4(CPU*s){
/* 1803fadc4: and r10d, 0x7fc00000 */
L_1803fadc4_0:;
L_1803fadc4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fadc4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fadc4_3:;
wr(s->r,144,4,(rd(s->r,144,4)&((U)UINT64_C(0x7fc00000))));
L_1803fadc4_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fadc4_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fadc4_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fadc4_7:;
wr(s->u,1,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fadc4_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fadc4_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fadc4_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fadc4_11:;
/* 1803fadcb: cmp r10d, 0x7fc00000 */
L_1803fadcb_0:;
L_1803fadcb_1:;
wr(s->u,7,4,rd(s->r,144,4));
L_1803fadcb_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x7fc00000))));
L_1803fadcb_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803fadcb_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x7fc00000))));
L_1803fadcb_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fadcb_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fadcb_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fadcb_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fadcb_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fadcb_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fadcb_11:;
/* 1803fadd2: jne 0x1803fadde */
L_1803fadd2_0:;
L_1803fadd2_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fadd2_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fadde);}
L_1803fadd2_3:;
return UINT64_C(0x1803fadd4);
}
uint64_t b_1803fadd4(CPU*s){
/* 1803fadd4: mov eax, dword ptr [rip + 0x413e86] */
L_1803fadd4_0:;
L_1803fadd4_1:;
wr(s->r,0,4,mr(UINT64_C(0x18080ec60),4));
L_1803fadd4_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fadd4_3:;
/* 1803fadda: mov dword ptr [rcx], eax */
L_1803fadda_0:;
L_1803fadda_1:;
wr(s->u,0,4,rd(s->r,0,4));
L_1803fadda_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,0,4));
L_1803fadda_3:;
/* 1803faddc: jmp 0x1803fae1a */
L_1803faddc_0:;
L_1803faddc_1:;
return UINT64_C(0x1803fae1a);
L_1803faddc_2:;
return UINT64_C(0x1803fadde);
}
uint64_t b_1803fadde(CPU*s){
/* 1803fadde: mov eax, dword ptr [rsp + 0x20] */
L_1803fadde_0:;
L_1803fadde_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fadde_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fadde_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803fadde_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fadde_5:;
/* 1803fade2: mov dword ptr [rcx], eax */
L_1803fade2_0:;
L_1803fade2_1:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803fade2_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,8,4));
L_1803fade2_3:;
/* 1803fade4: jmp 0x1803fae1a */
L_1803fade4_0:;
L_1803fade4_1:;
return UINT64_C(0x1803fae1a);
L_1803fade4_2:;
return UINT64_C(0x1803fade6);
}
uint64_t b_1803fade6(CPU*s){
/* 1803fade6: cmp r10d, 0x42b17218 */
L_1803fade6_0:;
L_1803fade6_1:;
wr(s->u,6,4,rd(s->r,144,4));
L_1803fade6_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x42b17218))));
L_1803fade6_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x42b17218)),4,1));
L_1803fade6_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x42b17218))));
L_1803fade6_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fade6_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fade6_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fade6_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fade6_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fade6_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fade6_11:;
/* 1803faded: jb 0x1803fae38 */
L_1803faded_0:;
L_1803faded_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fae38);}
L_1803faded_2:;
return UINT64_C(0x1803fadef);
}
uint64_t b_1803fadef(CPU*s){
/* 1803fadef: and r10d, 0x7fc00000 */
L_1803fadef_0:;
L_1803fadef_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fadef_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fadef_3:;
wr(s->r,144,4,(rd(s->r,144,4)&((U)UINT64_C(0x7fc00000))));
L_1803fadef_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fadef_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fadef_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fadef_7:;
wr(s->u,1,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fadef_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fadef_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fadef_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fadef_11:;
/* 1803fadf6: cmp r10d, 0x7fc00000 */
L_1803fadf6_0:;
L_1803fadf6_1:;
wr(s->u,7,4,rd(s->r,144,4));
L_1803fadf6_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x7fc00000))));
L_1803fadf6_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x7fc00000)),4,1));
L_1803fadf6_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x7fc00000))));
L_1803fadf6_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fadf6_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fadf6_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fadf6_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fadf6_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fadf6_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fadf6_11:;
/* 1803fadfd: jne 0x1803fae11 */
L_1803fadfd_0:;
L_1803fadfd_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fadfd_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fae11);}
L_1803fadfd_3:;
return UINT64_C(0x1803fadff);
}
uint64_t b_1803fadff(CPU*s){
/* 1803fadff: pxor xmm0, xmm0 */
L_1803fadff_0:;
L_1803fadff_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803fadff_2:;
/* 1803fae03: subss xmm0, dword ptr [rip + 0x413e55] */
L_1803fae03_0:;
L_1803fae03_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(mr(UINT64_C(0x18080ec60),4),4),4));
L_1803fae03_2:;
/* 1803fae0b: movss dword ptr [rcx], xmm0 */
L_1803fae0b_0:;
L_1803fae0b_1:;
wr(s->u,0,4,rd(s->r,4608,4));
L_1803fae0b_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,0,4));
L_1803fae0b_3:;
/* 1803fae0f: jmp 0x1803fae1a */
L_1803fae0f_0:;
L_1803fae0f_1:;
return UINT64_C(0x1803fae1a);
L_1803fae0f_2:;
return UINT64_C(0x1803fae11);
}
uint64_t b_1803fae11(CPU*s){
/* 1803fae11: mov eax, dword ptr [rsp + 0x208] */
L_1803fae11_0:;
L_1803fae11_1:;
wr(s->u,8,8,(((U)UINT64_C(0x208))+rd(s->r,32,8)));
L_1803fae11_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fae11_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1803fae11_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fae11_5:;
/* 1803fae18: mov dword ptr [rcx], eax */
L_1803fae18_0:;
L_1803fae18_1:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803fae18_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,16,4));
L_1803fae18_3:;
/* 1803fae1a: mov eax, r9d */
L_1803fae1a_0:;
L_1803fae1a_1:;
wr(s->r,0,4,rd(s->r,136,4));
L_1803fae1a_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fae1a_3:;
/* 1803fae1d: add eax, -1 */
L_1803fae1d_0:;
L_1803fae1d_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803fae1d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fae1d_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0xffffffff))));
L_1803fae1d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fae1d_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fae1d_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fae1d_7:;
wr(s->u,25,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fae1d_8:;
wr(s->u,33,1,pop(rd(s->u,25,4),4));
L_1803fae1d_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fae1d_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fae1d_11:;
/* 1803fae20: sub eax, r8d */
L_1803fae20_0:;
L_1803fae20_1:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,128,4)));
L_1803fae20_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,128,4),4,1));
L_1803fae20_3:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->r,128,4)));
L_1803fae20_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fae20_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fae20_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fae20_7:;
wr(s->u,25,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fae20_8:;
wr(s->u,33,1,pop(rd(s->u,25,4),4));
L_1803fae20_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fae20_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fae20_11:;
/* 1803fae23: add rcx, -4 */
L_1803fae23_0:;
L_1803fae23_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffffc)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803fae23_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0xfffffffffffffffc)),8,0));
L_1803fae23_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fae23_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fae23_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803fae23_6:;
wr(s->u,25,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803fae23_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fae23_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fae23_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fae23_10:;
/* 1803fae27: add r8, 1 */
L_1803fae27_0:;
L_1803fae27_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803fae27_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x1)),8,0));
L_1803fae27_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x1))));
L_1803fae27_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fae27_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803fae27_6:;
wr(s->u,25,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803fae27_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fae27_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fae27_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fae27_10:;
/* 1803fae2b: lea rdi, [r9 + 1] */
L_1803fae2b_0:;
L_1803fae2b_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x1))));
L_1803fae2b_2:;
wr(s->r,56,8,rd(s->u,0,8));
L_1803fae2b_3:;
/* 1803fae2f: cmp r8, rdi */
L_1803fae2f_0:;
L_1803fae2f_1:;
wr(s->u,35,8,rd(s->r,56,8));
L_1803fae2f_2:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->u,35,8)));
L_1803fae2f_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->u,35,8),8,1));
L_1803fae2f_4:;
wr(s->u,43,8,(rd(s->r,128,8)-rd(s->u,35,8)));
L_1803fae2f_5:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fae2f_6:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1803fae2f_7:;
wr(s->u,25,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1803fae2f_8:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fae2f_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fae2f_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fae2f_11:;
/* 1803fae32: jl 0x1803fad8a */
L_1803fae32_0:;
L_1803fae32_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fae32_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803fad8a);}
L_1803fae32_3:;
return UINT64_C(0x1803fae38);
}
uint64_t b_1803fae1a(CPU*s){
/* 1803fae1a: mov eax, r9d */
L_1803fae1a_0:;
L_1803fae1a_1:;
wr(s->r,0,4,rd(s->r,136,4));
L_1803fae1a_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fae1a_3:;
/* 1803fae1d: add eax, -1 */
L_1803fae1d_0:;
L_1803fae1d_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803fae1d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fae1d_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0xffffffff))));
L_1803fae1d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fae1d_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fae1d_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fae1d_7:;
wr(s->u,9,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fae1d_8:;
wr(s->u,17,1,pop(rd(s->u,9,4),4));
L_1803fae1d_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fae1d_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fae1d_11:;
/* 1803fae20: sub eax, r8d */
L_1803fae20_0:;
L_1803fae20_1:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,128,4)));
L_1803fae20_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,128,4),4,1));
L_1803fae20_3:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->r,128,4)));
L_1803fae20_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fae20_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fae20_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fae20_7:;
wr(s->u,9,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fae20_8:;
wr(s->u,17,1,pop(rd(s->u,9,4),4));
L_1803fae20_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fae20_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fae20_11:;
/* 1803fae23: add rcx, -4 */
L_1803fae23_0:;
L_1803fae23_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffffc)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803fae23_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0xfffffffffffffffc)),8,0));
L_1803fae23_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803fae23_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fae23_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803fae23_6:;
wr(s->u,9,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803fae23_7:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fae23_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fae23_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fae23_10:;
/* 1803fae27: add r8, 1 */
L_1803fae27_0:;
L_1803fae27_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803fae27_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x1)),8,0));
L_1803fae27_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x1))));
L_1803fae27_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fae27_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803fae27_6:;
wr(s->u,9,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803fae27_7:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fae27_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fae27_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fae27_10:;
/* 1803fae2b: lea rdi, [r9 + 1] */
L_1803fae2b_0:;
L_1803fae2b_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x1))));
L_1803fae2b_2:;
wr(s->r,56,8,rd(s->u,0,8));
L_1803fae2b_3:;
/* 1803fae2f: cmp r8, rdi */
L_1803fae2f_0:;
L_1803fae2f_1:;
wr(s->u,19,8,rd(s->r,56,8));
L_1803fae2f_2:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->u,19,8)));
L_1803fae2f_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->u,19,8),8,1));
L_1803fae2f_4:;
wr(s->u,27,8,(rd(s->r,128,8)-rd(s->u,19,8)));
L_1803fae2f_5:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fae2f_6:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803fae2f_7:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803fae2f_8:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fae2f_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fae2f_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fae2f_11:;
/* 1803fae32: jl 0x1803fad8a */
L_1803fae32_0:;
L_1803fae32_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fae32_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803fad8a);}
L_1803fae32_3:;
return UINT64_C(0x1803fae38);
}
uint64_t b_1803fae38(CPU*s){
/* 1803fae38: mov dword ptr [rsp + 0x138], edx */
L_1803fae38_0:;
L_1803fae38_1:;
wr(s->u,16,8,(((U)UINT64_C(0x138))+rd(s->r,32,8)));
L_1803fae38_2:;
wr(s->u,24,4,rd(s->r,16,4));
L_1803fae38_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fae38_4:;
/* 1803fae3f: mov edx, dword ptr [rsp + 0xd0] */
L_1803fae3f_0:;
L_1803fae3f_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803fae3f_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fae3f_3:;
wr(s->r,16,4,rd(s->u,28,4));
L_1803fae3f_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fae3f_5:;
/* 1803fae46: mov ecx, dword ptr [rsp + 0x138] */
L_1803fae46_0:;
L_1803fae46_1:;
wr(s->u,16,8,(((U)UINT64_C(0x138))+rd(s->r,32,8)));
L_1803fae46_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fae46_3:;
wr(s->r,8,4,rd(s->u,28,4));
L_1803fae46_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fae46_5:;
/* 1803fae4d: lea r8d, [rdx + rcx] */
L_1803fae4d_0:;
L_1803fae4d_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803fae4d_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fae4d_3:;
wr(s->r,128,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fae4d_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fae4d_5:;
/* 1803fae51: mov dword ptr [rsp + 0x120], r8d */
L_1803fae51_0:;
L_1803fae51_1:;
wr(s->u,16,8,(((U)UINT64_C(0x120))+rd(s->r,32,8)));
L_1803fae51_2:;
wr(s->u,24,4,rd(s->r,128,4));
L_1803fae51_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fae51_4:;
/* 1803fae59: test eax, eax */
L_1803fae59_0:;
L_1803fae59_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fae59_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fae59_3:;
wr(s->u,39,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803fae59_4:;
wr(s->r,519,1,(sx(rd(s->u,39,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fae59_5:;
wr(s->r,518,1,(rd(s->u,39,4)==((U)UINT64_C(0x0))));
L_1803fae59_6:;
wr(s->u,33,4,(rd(s->u,39,4)&((U)UINT64_C(0xff))));
L_1803fae59_7:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803fae59_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803fae59_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803fae59_10:;
/* 1803fae5b: jl 0x1803fbbc7 */
L_1803fae5b_0:;
L_1803fae5b_1:;
wr(s->u,32,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fae5b_2:;
if(rd(s->u,32,1)){return UINT64_C(0x1803fbbc7);}
L_1803fae5b_3:;
return UINT64_C(0x1803fae61);
}
uint64_t b_1803fae3f(CPU*s){
/* 1803fae3f: mov edx, dword ptr [rsp + 0xd0] */
L_1803fae3f_0:;
L_1803fae3f_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803fae3f_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fae3f_3:;
wr(s->r,16,4,rd(s->u,28,4));
L_1803fae3f_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fae3f_5:;
/* 1803fae46: mov ecx, dword ptr [rsp + 0x138] */
L_1803fae46_0:;
L_1803fae46_1:;
wr(s->u,16,8,(((U)UINT64_C(0x138))+rd(s->r,32,8)));
L_1803fae46_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fae46_3:;
wr(s->r,8,4,rd(s->u,28,4));
L_1803fae46_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fae46_5:;
/* 1803fae4d: lea r8d, [rdx + rcx] */
L_1803fae4d_0:;
L_1803fae4d_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803fae4d_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fae4d_3:;
wr(s->r,128,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fae4d_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fae4d_5:;
/* 1803fae51: mov dword ptr [rsp + 0x120], r8d */
L_1803fae51_0:;
L_1803fae51_1:;
wr(s->u,16,8,(((U)UINT64_C(0x120))+rd(s->r,32,8)));
L_1803fae51_2:;
wr(s->u,24,4,rd(s->r,128,4));
L_1803fae51_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fae51_4:;
/* 1803fae59: test eax, eax */
L_1803fae59_0:;
L_1803fae59_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fae59_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fae59_3:;
wr(s->u,39,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803fae59_4:;
wr(s->r,519,1,(sx(rd(s->u,39,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fae59_5:;
wr(s->r,518,1,(rd(s->u,39,4)==((U)UINT64_C(0x0))));
L_1803fae59_6:;
wr(s->u,33,4,(rd(s->u,39,4)&((U)UINT64_C(0xff))));
L_1803fae59_7:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803fae59_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803fae59_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803fae59_10:;
/* 1803fae5b: jl 0x1803fbbc7 */
L_1803fae5b_0:;
L_1803fae5b_1:;
wr(s->u,32,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fae5b_2:;
if(rd(s->u,32,1)){return UINT64_C(0x1803fbbc7);}
L_1803fae5b_3:;
return UINT64_C(0x1803fae61);
}
uint64_t b_1803fae61(CPU*s){
/* 1803fae61: mov edx, r8d */
L_1803fae61_0:;
L_1803fae61_1:;
wr(s->r,16,4,rd(s->r,128,4));
L_1803fae61_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fae61_3:;
/* 1803fae64: mov ecx, dword ptr [rsp + 0x128] */
L_1803fae64_0:;
L_1803fae64_1:;
wr(s->u,8,8,(((U)UINT64_C(0x128))+rd(s->r,32,8)));
L_1803fae64_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fae64_3:;
wr(s->r,8,4,rd(s->u,36,4));
L_1803fae64_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fae64_5:;
/* 1803fae6b: mov r8d, dword ptr [rsp + 0x130] */
L_1803fae6b_0:;
L_1803fae6b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x130))+rd(s->r,32,8)));
L_1803fae6b_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fae6b_3:;
wr(s->r,128,4,rd(s->u,36,4));
L_1803fae6b_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fae6b_5:;
/* 1803fae73: mov r9d, dword ptr [rsp + 0x150] */
L_1803fae73_0:;
L_1803fae73_1:;
wr(s->u,8,8,(((U)UINT64_C(0x150))+rd(s->r,32,8)));
L_1803fae73_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fae73_3:;
wr(s->r,136,4,rd(s->u,36,4));
L_1803fae73_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fae73_5:;
/* 1803fae7b: movss xmm5, dword ptr [rsp + 0x21c] */
L_1803fae7b_0:;
L_1803fae7b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x21c))+rd(s->r,32,8)));
L_1803fae7b_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fae7b_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fae7b_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fae7b_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fae7b_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fae7b_7:;
/* 1803fae84: movss xmm4, dword ptr [rsp + 0x220] */
L_1803fae84_0:;
L_1803fae84_1:;
wr(s->u,8,8,(((U)UINT64_C(0x220))+rd(s->r,32,8)));
L_1803fae84_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fae84_3:;
wr(s->r,4864,4,rd(s->u,16,4));
L_1803fae84_4:;
wr(s->r,4868,4,((U)UINT64_C(0x0)));
L_1803fae84_5:;
wr(s->r,4872,4,((U)UINT64_C(0x0)));
L_1803fae84_6:;
wr(s->r,4876,4,((U)UINT64_C(0x0)));
L_1803fae84_7:;
/* 1803fae8d: movss xmm3, dword ptr [rsp + 0x224] */
L_1803fae8d_0:;
L_1803fae8d_1:;
wr(s->u,8,8,(((U)UINT64_C(0x224))+rd(s->r,32,8)));
L_1803fae8d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fae8d_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fae8d_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fae8d_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fae8d_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fae8d_7:;
/* 1803fae96: mov r10d, dword ptr [rsp + 0x208] */
L_1803fae96_0:;
L_1803fae96_1:;
wr(s->u,8,8,(((U)UINT64_C(0x208))+rd(s->r,32,8)));
L_1803fae96_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fae96_3:;
wr(s->r,144,4,rd(s->u,36,4));
L_1803fae96_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fae96_5:;
/* 1803fae9e: movss xmm2, dword ptr [rsp + 0x228] */
L_1803fae9e_0:;
L_1803fae9e_1:;
wr(s->u,8,8,(((U)UINT64_C(0x228))+rd(s->r,32,8)));
L_1803fae9e_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fae9e_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fae9e_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fae9e_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fae9e_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fae9e_7:;
/* 1803faea7: movsd xmm0, qword ptr [rip + 0x4135c1] */
L_1803faea7_0:;
L_1803faea7_1:;
wr(s->r,4608,8,mr(UINT64_C(0x18080e470),8));
L_1803faea7_2:;
wr(s->r,4616,8,((U)UINT64_C(0x0)));
L_1803faea7_3:;
/* 1803faeaf: movsd xmm1, qword ptr [rip + 0x4135c1] */
L_1803faeaf_0:;
L_1803faeaf_1:;
wr(s->r,4672,8,mr(UINT64_C(0x18080e478),8));
L_1803faeaf_2:;
wr(s->r,4680,8,((U)UINT64_C(0x0)));
L_1803faeaf_3:;
/* 1803faeb7: movss dword ptr [rsp + 0x178], xmm2 */
L_1803faeb7_0:;
L_1803faeb7_1:;
wr(s->u,8,8,(((U)UINT64_C(0x178))+rd(s->r,32,8)));
L_1803faeb7_2:;
wr(s->u,16,4,rd(s->r,4736,4));
L_1803faeb7_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803faeb7_4:;
/* 1803faec0: movss dword ptr [rsp + 0x180], xmm3 */
L_1803faec0_0:;
L_1803faec0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x180))+rd(s->r,32,8)));
L_1803faec0_2:;
wr(s->u,16,4,rd(s->r,4800,4));
L_1803faec0_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803faec0_4:;
/* 1803faec9: movss dword ptr [rsp + 0x188], xmm4 */
L_1803faec9_0:;
L_1803faec9_1:;
wr(s->u,8,8,(((U)UINT64_C(0x188))+rd(s->r,32,8)));
L_1803faec9_2:;
wr(s->u,16,4,rd(s->r,4864,4));
L_1803faec9_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803faec9_4:;
/* 1803faed2: movss dword ptr [rsp + 0x190], xmm5 */
L_1803faed2_0:;
L_1803faed2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x190))+rd(s->r,32,8)));
L_1803faed2_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803faed2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803faed2_4:;
/* 1803faedb: movaps xmmword ptr [rsp + 0x40], xmm6 */
L_1803faedb_0:;
L_1803faedb_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803faedb_2:;
wr(s->u,20,16,rd(s->r,4992,16));
L_1803faedb_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,20,16));
L_1803faedb_4:;
/* 1803faee0: movaps xmmword ptr [rsp + 0x50], xmm8 */
L_1803faee0_0:;
L_1803faee0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803faee0_2:;
wr(s->u,20,16,rd(s->r,5120,16));
L_1803faee0_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,20,16));
L_1803faee0_4:;
/* 1803faee6: movaps xmmword ptr [rsp + 0x60], xmm9 */
L_1803faee6_0:;
L_1803faee6_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803faee6_2:;
wr(s->u,20,16,rd(s->r,5184,16));
L_1803faee6_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,20,16));
L_1803faee6_4:;
/* 1803faeec: movaps xmmword ptr [rsp + 0x70], xmm10 */
L_1803faeec_0:;
L_1803faeec_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803faeec_2:;
wr(s->u,20,16,rd(s->r,5248,16));
L_1803faeec_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,20,16));
L_1803faeec_4:;
/* 1803faef2: movaps xmmword ptr [rsp + 0x80], xmm11 */
L_1803faef2_0:;
L_1803faef2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803faef2_2:;
wr(s->u,20,16,rd(s->r,5312,16));
L_1803faef2_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803faef2_4:;
/* 1803faefb: movaps xmmword ptr [rsp + 0x90], xmm12 */
L_1803faefb_0:;
L_1803faefb_1:;
wr(s->u,8,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803faefb_2:;
wr(s->u,20,16,rd(s->r,5376,16));
L_1803faefb_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803faefb_4:;
/* 1803faf04: movaps xmmword ptr [rsp + 0xa0], xmm13 */
L_1803faf04_0:;
L_1803faf04_1:;
wr(s->u,8,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_1803faf04_2:;
wr(s->u,20,16,rd(s->r,5440,16));
L_1803faf04_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803faf04_4:;
/* 1803faf0d: movaps xmmword ptr [rsp + 0xb0], xmm14 */
L_1803faf0d_0:;
L_1803faf0d_1:;
wr(s->u,8,8,(((U)UINT64_C(0xb0))+rd(s->r,32,8)));
L_1803faf0d_2:;
wr(s->u,20,16,rd(s->r,5504,16));
L_1803faf0d_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803faf0d_4:;
/* 1803faf16: movaps xmmword ptr [rsp + 0xc0], xmm15 */
L_1803faf16_0:;
L_1803faf16_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc0))+rd(s->r,32,8)));
L_1803faf16_2:;
wr(s->u,20,16,rd(s->r,5568,16));
L_1803faf16_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803faf16_4:;
/* 1803faf1f: mov dword ptr [rsp + 0x19c], edx */
L_1803faf1f_0:;
L_1803faf1f_1:;
wr(s->u,8,8,(((U)UINT64_C(0x19c))+rd(s->r,32,8)));
L_1803faf1f_2:;
wr(s->u,16,4,rd(s->r,16,4));
L_1803faf1f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803faf1f_4:;
/* 1803faf26: mov dword ptr [rsp + 0x1a4], ecx */
L_1803faf26_0:;
L_1803faf26_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1a4))+rd(s->r,32,8)));
L_1803faf26_2:;
wr(s->u,16,4,rd(s->r,8,4));
L_1803faf26_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803faf26_4:;
/* 1803faf2d: pxor xmm7, xmm7 */
L_1803faf2d_0:;
L_1803faf2d_1:;
wr(s->r,5056,16,(rd(s->r,5056,16)^rd(s->r,5056,16)));
L_1803faf2d_2:;
/* 1803faf31: subss xmm7, dword ptr [rip + 0x413d27] */
L_1803faf31_0:;
L_1803faf31_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(mr(UINT64_C(0x18080ec60),4),4),4));
L_1803faf31_2:;
/* 1803faf39: movss dword ptr [rsp + 0x170], xmm7 */
L_1803faf39_0:;
L_1803faf39_1:;
wr(s->u,8,8,(((U)UINT64_C(0x170))+rd(s->r,32,8)));
L_1803faf39_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803faf39_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803faf39_4:;
/* 1803faf42: mov dword ptr [rsp + 0x1ac], r8d */
L_1803faf42_0:;
L_1803faf42_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1ac))+rd(s->r,32,8)));
L_1803faf42_2:;
wr(s->u,16,4,rd(s->r,128,4));
L_1803faf42_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803faf42_4:;
/* 1803faf4a: mov dword ptr [rsp + 0x1b4], r9d */
L_1803faf4a_0:;
L_1803faf4a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1b4))+rd(s->r,32,8)));
L_1803faf4a_2:;
wr(s->u,16,4,rd(s->r,136,4));
L_1803faf4a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803faf4a_4:;
/* 1803faf52: mov r9d, dword ptr [rsp + 0x20] */
L_1803faf52_0:;
L_1803faf52_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803faf52_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803faf52_3:;
wr(s->r,136,4,rd(s->u,36,4));
L_1803faf52_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803faf52_5:;
return UINT64_C(0x1803faf57);
}
uint64_t b_1803faf57(CPU*s){
/* 1803faf57: mov r8d, 0x3f800000 */
L_1803faf57_0:;
L_1803faf57_1:;
wr(s->r,128,8,((U)UINT64_C(0x3f800000)));
L_1803faf57_2:;
/* 1803faf5d: mov ecx, 0x3f800000 */
L_1803faf5d_0:;
L_1803faf5d_1:;
wr(s->r,8,8,((U)UINT64_C(0x3f800000)));
L_1803faf5d_2:;
/* 1803faf62: mov edx, 0x3f800000 */
L_1803faf62_0:;
L_1803faf62_1:;
wr(s->r,16,8,((U)UINT64_C(0x3f800000)));
L_1803faf62_2:;
/* 1803faf67: mov r11d, 0x3f800000 */
L_1803faf67_0:;
L_1803faf67_1:;
wr(s->r,152,8,((U)UINT64_C(0x3f800000)));
L_1803faf67_2:;
/* 1803faf6d: mov dword ptr [rsp + 0x168], r9d */
L_1803faf6d_0:;
L_1803faf6d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x168))+rd(s->r,32,8)));
L_1803faf6d_2:;
wr(s->u,8,4,rd(s->r,136,4));
L_1803faf6d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803faf6d_4:;
/* 1803faf75: mov dword ptr [rsp + 0x160], r10d */
L_1803faf75_0:;
L_1803faf75_1:;
wr(s->u,0,8,(((U)UINT64_C(0x160))+rd(s->r,32,8)));
L_1803faf75_2:;
wr(s->u,8,4,rd(s->r,144,4));
L_1803faf75_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803faf75_4:;
/* 1803faf7d: mov qword ptr [rsp + 0x1e8], rbp */
L_1803faf7d_0:;
L_1803faf7d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1e8))+rd(s->r,32,8)));
L_1803faf7d_2:;
wr(s->u,12,8,rd(s->r,40,8));
L_1803faf7d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803faf7d_4:;
/* 1803faf85: jmp 0x1803fafbf */
L_1803faf85_0:;
L_1803faf85_1:;
return UINT64_C(0x1803fafbf);
L_1803faf85_2:;
return UINT64_C(0x1803faf87);
}
uint64_t b_1803faf87(CPU*s){
/* 1803faf87: mov edx, dword ptr [rsp + 0x120] */
L_1803faf87_0:;
L_1803faf87_1:;
wr(s->u,0,8,(((U)UINT64_C(0x120))+rd(s->r,32,8)));
L_1803faf87_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803faf87_3:;
wr(s->r,16,4,rd(s->u,20,4));
L_1803faf87_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803faf87_5:;
/* 1803faf8e: mov ecx, dword ptr [rsp + 0x128] */
L_1803faf8e_0:;
L_1803faf8e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x128))+rd(s->r,32,8)));
L_1803faf8e_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803faf8e_3:;
wr(s->r,8,4,rd(s->u,20,4));
L_1803faf8e_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803faf8e_5:;
/* 1803faf95: mov ebp, dword ptr [rsp + 0x130] */
L_1803faf95_0:;
L_1803faf95_1:;
wr(s->u,0,8,(((U)UINT64_C(0x130))+rd(s->r,32,8)));
L_1803faf95_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803faf95_3:;
wr(s->r,40,4,rd(s->u,20,4));
L_1803faf95_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803faf95_5:;
/* 1803faf9c: mov edi, dword ptr [rsp + 0x150] */
L_1803faf9c_0:;
L_1803faf9c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x150))+rd(s->r,32,8)));
L_1803faf9c_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803faf9c_3:;
wr(s->r,56,4,rd(s->u,20,4));
L_1803faf9c_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803faf9c_5:;
/* 1803fafa3: mov dword ptr [rsp + 0x19c], edx */
L_1803fafa3_0:;
L_1803fafa3_1:;
wr(s->u,0,8,(((U)UINT64_C(0x19c))+rd(s->r,32,8)));
L_1803fafa3_2:;
wr(s->u,8,4,rd(s->r,16,4));
L_1803fafa3_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fafa3_4:;
/* 1803fafaa: mov dword ptr [rsp + 0x1a4], ecx */
L_1803fafaa_0:;
L_1803fafaa_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1a4))+rd(s->r,32,8)));
L_1803fafaa_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_1803fafaa_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fafaa_4:;
/* 1803fafb1: mov dword ptr [rsp + 0x1ac], ebp */
L_1803fafb1_0:;
L_1803fafb1_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1ac))+rd(s->r,32,8)));
L_1803fafb1_2:;
wr(s->u,8,4,rd(s->r,40,4));
L_1803fafb1_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fafb1_4:;
/* 1803fafb8: mov dword ptr [rsp + 0x1b4], edi */
L_1803fafb8_0:;
L_1803fafb8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1b4))+rd(s->r,32,8)));
L_1803fafb8_2:;
wr(s->u,8,4,rd(s->r,56,4));
L_1803fafb8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fafb8_4:;
/* 1803fafbf: movss xmm6, dword ptr [rsp + 0x190] */
L_1803fafbf_0:;
L_1803fafbf_1:;
wr(s->u,0,8,(((U)UINT64_C(0x190))+rd(s->r,32,8)));
L_1803fafbf_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fafbf_3:;
wr(s->r,4992,4,rd(s->u,8,4));
L_1803fafbf_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fafbf_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fafbf_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fafbf_7:;
/* 1803fafc8: movsd xmm3, qword ptr [rip + 0x413488] */
L_1803fafc8_0:;
L_1803fafc8_1:;
wr(s->r,4800,8,mr(UINT64_C(0x18080e458),8));
L_1803fafc8_2:;
wr(s->r,4808,8,((U)UINT64_C(0x0)));
L_1803fafc8_3:;
/* 1803fafd0: movss xmm7, dword ptr [rsp + 0x188] */
L_1803fafd0_0:;
L_1803fafd0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x188))+rd(s->r,32,8)));
L_1803fafd0_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fafd0_3:;
wr(s->r,5056,4,rd(s->u,8,4));
L_1803fafd0_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fafd0_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fafd0_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fafd0_7:;
/* 1803fafd9: movsd xmm14, qword ptr [rsp + 0x1b0] */
L_1803fafd9_0:;
L_1803fafd9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1b0))+rd(s->r,32,8)));
L_1803fafd9_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fafd9_3:;
wr(s->r,5504,8,rd(s->u,12,8));
L_1803fafd9_4:;
wr(s->r,5512,8,((U)UINT64_C(0x0)));
L_1803fafd9_5:;
/* 1803fafe3: movsxd r8, ebx */
L_1803fafe3_0:;
L_1803fafe3_1:;
wr(s->r,128,8,(U)sx(rd(s->r,24,4),4));
L_1803fafe3_2:;
/* 1803fafe6: movsd xmm15, qword ptr [rsp + 0x1a8] */
L_1803fafe6_0:;
L_1803fafe6_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1a8))+rd(s->r,32,8)));
L_1803fafe6_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fafe6_3:;
wr(s->r,5568,8,rd(s->u,12,8));
L_1803fafe6_4:;
wr(s->r,5576,8,((U)UINT64_C(0x0)));
L_1803fafe6_5:;
/* 1803faff0: mov r13d, dword ptr [rsp + 0x158] */
L_1803faff0_0:;
L_1803faff0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x158))+rd(s->r,32,8)));
L_1803faff0_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803faff0_3:;
wr(s->r,168,4,rd(s->u,20,4));
L_1803faff0_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803faff0_5:;
/* 1803faff8: mov r11d, dword ptr [rsp + 0x148] */
L_1803faff8_0:;
L_1803faff8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x148))+rd(s->r,32,8)));
L_1803faff8_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803faff8_3:;
wr(s->r,152,4,rd(s->u,20,4));
L_1803faff8_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803faff8_5:;
/* 1803fb000: mov r10d, dword ptr [rsp + 0x140] */
L_1803fb000_0:;
L_1803fb000_1:;
wr(s->u,0,8,(((U)UINT64_C(0x140))+rd(s->r,32,8)));
L_1803fb000_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb000_3:;
wr(s->r,144,4,rd(s->u,20,4));
L_1803fb000_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fb000_5:;
/* 1803fb008: mov r9d, dword ptr [rsp + 0x138] */
L_1803fb008_0:;
L_1803fb008_1:;
wr(s->u,0,8,(((U)UINT64_C(0x138))+rd(s->r,32,8)));
L_1803fb008_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb008_3:;
wr(s->r,136,4,rd(s->u,20,4));
L_1803fb008_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fb008_5:;
/* 1803fb010: mov qword ptr [rsp + 0x200], r8 */
L_1803fb010_0:;
L_1803fb010_1:;
wr(s->u,0,8,(((U)UINT64_C(0x200))+rd(s->r,32,8)));
L_1803fb010_2:;
wr(s->u,12,8,rd(s->r,128,8));
L_1803fb010_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803fb010_4:;
/* 1803fb018: cvtps2pd xmm5, xmm6 */
L_1803fb018_0:;
L_1803fb018_1:;
wr(s->u,30,8,rd(s->r,4992,8));
L_1803fb018_2:;
wr(s->r,4928,8,fb(fv(rd(s->u,30,4),4),8));
L_1803fb018_3:;
wr(s->r,4936,8,fb(fv(rd(s->u,34,4),4),8));
L_1803fb018_4:;
/* 1803fb01b: movss xmm6, dword ptr [rsp + 0x180] */
L_1803fb01b_0:;
L_1803fb01b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x180))+rd(s->r,32,8)));
L_1803fb01b_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb01b_3:;
wr(s->r,4992,4,rd(s->u,8,4));
L_1803fb01b_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fb01b_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fb01b_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fb01b_7:;
/* 1803fb024: movsxd rbx, esi */
L_1803fb024_0:;
L_1803fb024_1:;
wr(s->r,24,8,(U)sx(rd(s->r,48,4),4));
L_1803fb024_2:;
/* 1803fb027: mov qword ptr [rsp + 0x1f8], rbx */
L_1803fb027_0:;
L_1803fb027_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1f8))+rd(s->r,32,8)));
L_1803fb027_2:;
wr(s->u,12,8,rd(s->r,24,8));
L_1803fb027_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803fb027_4:;
/* 1803fb02f: movsxd r8, r12d */
L_1803fb02f_0:;
L_1803fb02f_1:;
wr(s->r,128,8,(U)sx(rd(s->r,160,4),4));
L_1803fb02f_2:;
/* 1803fb032: movsxd rsi, eax */
L_1803fb032_0:;
L_1803fb032_1:;
wr(s->r,48,8,(U)sx(rd(s->r,0,4),4));
L_1803fb032_2:;
/* 1803fb035: mov qword ptr [rsp + 0x1f0], rsi */
L_1803fb035_0:;
L_1803fb035_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1f0))+rd(s->r,32,8)));
L_1803fb035_2:;
wr(s->u,12,8,rd(s->r,48,8));
L_1803fb035_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803fb035_4:;
/* 1803fb03d: mov ebx, eax */
L_1803fb03d_0:;
L_1803fb03d_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803fb03d_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fb03d_3:;
/* 1803fb03f: movaps xmm2, xmm5 */
L_1803fb03f_0:;
L_1803fb03f_1:;
wr(s->r,4736,4,rd(s->r,4928,4));
L_1803fb03f_2:;
wr(s->r,4740,4,rd(s->r,4932,4));
L_1803fb03f_3:;
wr(s->r,4744,4,rd(s->r,4936,4));
L_1803fb03f_4:;
wr(s->r,4748,4,rd(s->r,4940,4));
L_1803fb03f_5:;
/* 1803fb042: mulsd xmm2, xmm3 */
L_1803fb042_0:;
L_1803fb042_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803fb042_2:;
/* 1803fb046: xor r12d, r12d */
L_1803fb046_0:;
L_1803fb046_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb046_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb046_3:;
wr(s->r,160,4,(rd(s->r,160,4)^rd(s->r,160,4)));
L_1803fb046_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb046_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb046_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fb046_7:;
wr(s->u,24,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fb046_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803fb046_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803fb046_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803fb046_11:;
/* 1803fb049: add ebx, -1 */
L_1803fb049_0:;
L_1803fb049_1:;
wr(s->r,512,1,(((rd(s->r,24,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,24,4)));
L_1803fb049_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fb049_3:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0xffffffff))));
L_1803fb049_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fb049_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb049_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803fb049_7:;
wr(s->u,24,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803fb049_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803fb049_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803fb049_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803fb049_11:;
/* 1803fb04c: movsxd rsi, ebx */
L_1803fb04c_0:;
L_1803fb04c_1:;
wr(s->r,48,8,(U)sx(rd(s->r,24,4),4));
L_1803fb04c_2:;
return UINT64_C(0x1803fb04f);
}
uint64_t b_1803fafbf(CPU*s){
/* 1803fafbf: movss xmm6, dword ptr [rsp + 0x190] */
L_1803fafbf_0:;
L_1803fafbf_1:;
wr(s->u,0,8,(((U)UINT64_C(0x190))+rd(s->r,32,8)));
L_1803fafbf_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fafbf_3:;
wr(s->r,4992,4,rd(s->u,8,4));
L_1803fafbf_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fafbf_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fafbf_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fafbf_7:;
/* 1803fafc8: movsd xmm3, qword ptr [rip + 0x413488] */
L_1803fafc8_0:;
L_1803fafc8_1:;
wr(s->r,4800,8,mr(UINT64_C(0x18080e458),8));
L_1803fafc8_2:;
wr(s->r,4808,8,((U)UINT64_C(0x0)));
L_1803fafc8_3:;
/* 1803fafd0: movss xmm7, dword ptr [rsp + 0x188] */
L_1803fafd0_0:;
L_1803fafd0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x188))+rd(s->r,32,8)));
L_1803fafd0_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fafd0_3:;
wr(s->r,5056,4,rd(s->u,8,4));
L_1803fafd0_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fafd0_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fafd0_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fafd0_7:;
/* 1803fafd9: movsd xmm14, qword ptr [rsp + 0x1b0] */
L_1803fafd9_0:;
L_1803fafd9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1b0))+rd(s->r,32,8)));
L_1803fafd9_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fafd9_3:;
wr(s->r,5504,8,rd(s->u,12,8));
L_1803fafd9_4:;
wr(s->r,5512,8,((U)UINT64_C(0x0)));
L_1803fafd9_5:;
/* 1803fafe3: movsxd r8, ebx */
L_1803fafe3_0:;
L_1803fafe3_1:;
wr(s->r,128,8,(U)sx(rd(s->r,24,4),4));
L_1803fafe3_2:;
/* 1803fafe6: movsd xmm15, qword ptr [rsp + 0x1a8] */
L_1803fafe6_0:;
L_1803fafe6_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1a8))+rd(s->r,32,8)));
L_1803fafe6_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fafe6_3:;
wr(s->r,5568,8,rd(s->u,12,8));
L_1803fafe6_4:;
wr(s->r,5576,8,((U)UINT64_C(0x0)));
L_1803fafe6_5:;
/* 1803faff0: mov r13d, dword ptr [rsp + 0x158] */
L_1803faff0_0:;
L_1803faff0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x158))+rd(s->r,32,8)));
L_1803faff0_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803faff0_3:;
wr(s->r,168,4,rd(s->u,20,4));
L_1803faff0_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803faff0_5:;
/* 1803faff8: mov r11d, dword ptr [rsp + 0x148] */
L_1803faff8_0:;
L_1803faff8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x148))+rd(s->r,32,8)));
L_1803faff8_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803faff8_3:;
wr(s->r,152,4,rd(s->u,20,4));
L_1803faff8_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803faff8_5:;
/* 1803fb000: mov r10d, dword ptr [rsp + 0x140] */
L_1803fb000_0:;
L_1803fb000_1:;
wr(s->u,0,8,(((U)UINT64_C(0x140))+rd(s->r,32,8)));
L_1803fb000_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb000_3:;
wr(s->r,144,4,rd(s->u,20,4));
L_1803fb000_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fb000_5:;
/* 1803fb008: mov r9d, dword ptr [rsp + 0x138] */
L_1803fb008_0:;
L_1803fb008_1:;
wr(s->u,0,8,(((U)UINT64_C(0x138))+rd(s->r,32,8)));
L_1803fb008_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb008_3:;
wr(s->r,136,4,rd(s->u,20,4));
L_1803fb008_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fb008_5:;
/* 1803fb010: mov qword ptr [rsp + 0x200], r8 */
L_1803fb010_0:;
L_1803fb010_1:;
wr(s->u,0,8,(((U)UINT64_C(0x200))+rd(s->r,32,8)));
L_1803fb010_2:;
wr(s->u,12,8,rd(s->r,128,8));
L_1803fb010_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803fb010_4:;
/* 1803fb018: cvtps2pd xmm5, xmm6 */
L_1803fb018_0:;
L_1803fb018_1:;
wr(s->u,30,8,rd(s->r,4992,8));
L_1803fb018_2:;
wr(s->r,4928,8,fb(fv(rd(s->u,30,4),4),8));
L_1803fb018_3:;
wr(s->r,4936,8,fb(fv(rd(s->u,34,4),4),8));
L_1803fb018_4:;
/* 1803fb01b: movss xmm6, dword ptr [rsp + 0x180] */
L_1803fb01b_0:;
L_1803fb01b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x180))+rd(s->r,32,8)));
L_1803fb01b_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fb01b_3:;
wr(s->r,4992,4,rd(s->u,8,4));
L_1803fb01b_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fb01b_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fb01b_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fb01b_7:;
/* 1803fb024: movsxd rbx, esi */
L_1803fb024_0:;
L_1803fb024_1:;
wr(s->r,24,8,(U)sx(rd(s->r,48,4),4));
L_1803fb024_2:;
/* 1803fb027: mov qword ptr [rsp + 0x1f8], rbx */
L_1803fb027_0:;
L_1803fb027_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1f8))+rd(s->r,32,8)));
L_1803fb027_2:;
wr(s->u,12,8,rd(s->r,24,8));
L_1803fb027_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803fb027_4:;
/* 1803fb02f: movsxd r8, r12d */
L_1803fb02f_0:;
L_1803fb02f_1:;
wr(s->r,128,8,(U)sx(rd(s->r,160,4),4));
L_1803fb02f_2:;
/* 1803fb032: movsxd rsi, eax */
L_1803fb032_0:;
L_1803fb032_1:;
wr(s->r,48,8,(U)sx(rd(s->r,0,4),4));
L_1803fb032_2:;
/* 1803fb035: mov qword ptr [rsp + 0x1f0], rsi */
L_1803fb035_0:;
L_1803fb035_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1f0))+rd(s->r,32,8)));
L_1803fb035_2:;
wr(s->u,12,8,rd(s->r,48,8));
L_1803fb035_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803fb035_4:;
/* 1803fb03d: mov ebx, eax */
L_1803fb03d_0:;
L_1803fb03d_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803fb03d_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fb03d_3:;
/* 1803fb03f: movaps xmm2, xmm5 */
L_1803fb03f_0:;
L_1803fb03f_1:;
wr(s->r,4736,4,rd(s->r,4928,4));
L_1803fb03f_2:;
wr(s->r,4740,4,rd(s->r,4932,4));
L_1803fb03f_3:;
wr(s->r,4744,4,rd(s->r,4936,4));
L_1803fb03f_4:;
wr(s->r,4748,4,rd(s->r,4940,4));
L_1803fb03f_5:;
/* 1803fb042: mulsd xmm2, xmm3 */
L_1803fb042_0:;
L_1803fb042_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803fb042_2:;
/* 1803fb046: xor r12d, r12d */
L_1803fb046_0:;
L_1803fb046_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fb046_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fb046_3:;
wr(s->r,160,4,(rd(s->r,160,4)^rd(s->r,160,4)));
L_1803fb046_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fb046_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb046_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fb046_7:;
wr(s->u,24,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fb046_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803fb046_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803fb046_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803fb046_11:;
/* 1803fb049: add ebx, -1 */
L_1803fb049_0:;
L_1803fb049_1:;
wr(s->r,512,1,(((rd(s->r,24,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,24,4)));
L_1803fb049_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fb049_3:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0xffffffff))));
L_1803fb049_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fb049_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fb049_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803fb049_7:;
wr(s->u,24,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803fb049_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803fb049_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803fb049_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803fb049_11:;
/* 1803fb04c: movsxd rsi, ebx */
L_1803fb04c_0:;
L_1803fb04c_1:;
wr(s->r,48,8,(U)sx(rd(s->r,24,4),4));
L_1803fb04c_2:;
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
wr(s->u,30,8,rd(s->r,5056,8));
L_1803fb069_2:;
wr(s->r,4864,8,fb(fv(rd(s->u,30,4),4),8));
L_1803fb069_3:;
wr(s->r,4872,8,fb(fv(rd(s->u,34,4),4),8));
L_1803fb069_4:;
/* 1803fb06c: cvtps2pd xmm11, xmm6 */
L_1803fb06c_0:;
L_1803fb06c_1:;
wr(s->u,30,8,rd(s->r,4992,8));
L_1803fb06c_2:;
wr(s->r,5312,8,fb(fv(rd(s->u,30,4),4),8));
L_1803fb06c_3:;
wr(s->r,5320,8,fb(fv(rd(s->u,34,4),4),8));
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
return UINT64_C(0x1803fb079);
}
