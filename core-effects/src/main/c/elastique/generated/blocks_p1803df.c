#include "lift_runtime.h"
uint64_t b_1803df01d(CPU*s){
/* 1803df01d: mov r10, qword ptr [rsp + 0x48] */
L_1803df01d_0:;
L_1803df01d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803df01d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df01d_3:;
wr(s->r,144,8,rd(s->u,8,8));
L_1803df01d_4:;
/* 1803df022: cmp r11, r8 */
L_1803df022_0:;
L_1803df022_1:;
wr(s->u,27,8,rd(s->r,128,8));
L_1803df022_2:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->u,27,8)));
L_1803df022_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->u,27,8),8,1));
L_1803df022_4:;
wr(s->u,35,8,(rd(s->r,152,8)-rd(s->u,27,8)));
L_1803df022_5:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df022_6:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1803df022_7:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1803df022_8:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803df022_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803df022_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803df022_11:;
/* 1803df025: jge 0x1803df0cc */
L_1803df025_0:;
L_1803df025_1:;
wr(s->u,16,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803df025_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803df0cc);}
L_1803df025_3:;
return UINT64_C(0x1803df02b);
}
uint64_t b_1803df022(CPU*s){
/* 1803df022: cmp r11, r8 */
L_1803df022_0:;
L_1803df022_1:;
wr(s->u,11,8,rd(s->r,128,8));
L_1803df022_2:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->u,11,8)));
L_1803df022_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->u,11,8),8,1));
L_1803df022_4:;
wr(s->u,19,8,(rd(s->r,152,8)-rd(s->u,11,8)));
L_1803df022_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df022_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803df022_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803df022_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803df022_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803df022_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803df022_11:;
/* 1803df025: jge 0x1803df0cc */
L_1803df025_0:;
L_1803df025_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803df025_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803df0cc);}
L_1803df025_3:;
return UINT64_C(0x1803df02b);
}
uint64_t b_1803df02b(CPU*s){
/* 1803df02b: mov r15, qword ptr [rsp + 0x30] */
L_1803df02b_0:;
L_1803df02b_1:;
wr(s->u,24,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803df02b_2:;
wr(s->u,80,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803df02b_3:;
wr(s->r,184,8,rd(s->u,80,8));
L_1803df02b_4:;
/* 1803df030: sub r10, rdi */
L_1803df030_0:;
L_1803df030_1:;
wr(s->r,512,1,(rd(s->r,144,8)<rd(s->r,56,8)));
L_1803df030_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->r,56,8),8,1));
L_1803df030_3:;
wr(s->r,144,8,(rd(s->r,144,8)-rd(s->r,56,8)));
L_1803df030_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df030_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803df030_6:;
wr(s->u,89,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803df030_7:;
wr(s->u,97,1,pop(rd(s->u,89,8),8));
L_1803df030_8:;
wr(s->u,98,1,(rd(s->u,97,1)&((U)UINT64_C(0x1))));
L_1803df030_9:;
wr(s->r,514,1,(rd(s->u,98,1)==((U)UINT64_C(0x0))));
L_1803df030_10:;
/* 1803df033: mov r9, rbp */
L_1803df033_0:;
L_1803df033_1:;
wr(s->r,136,8,rd(s->r,40,8));
L_1803df033_2:;
/* 1803df036: mov qword ptr [rsp + 0x48], r10 */
L_1803df036_0:;
L_1803df036_1:;
wr(s->u,24,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803df036_2:;
wr(s->u,68,8,rd(s->r,144,8));
L_1803df036_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,68,8));
L_1803df036_4:;
/* 1803df03b: sub r9, r12 */
L_1803df03b_0:;
L_1803df03b_1:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->r,160,8)));
L_1803df03b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->r,160,8),8,1));
L_1803df03b_3:;
wr(s->r,136,8,(rd(s->r,136,8)-rd(s->r,160,8)));
L_1803df03b_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df03b_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803df03b_6:;
wr(s->u,89,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803df03b_7:;
wr(s->u,97,1,pop(rd(s->u,89,8),8));
L_1803df03b_8:;
wr(s->u,98,1,(rd(s->u,97,1)&((U)UINT64_C(0x1))));
L_1803df03b_9:;
wr(s->r,514,1,(rd(s->u,98,1)==((U)UINT64_C(0x0))));
L_1803df03b_10:;
/* 1803df03e: mov r10, r13 */
L_1803df03e_0:;
L_1803df03e_1:;
wr(s->r,144,8,rd(s->r,168,8));
L_1803df03e_2:;
/* 1803df041: mov rbx, qword ptr [rsp + 0x48] */
L_1803df041_0:;
L_1803df041_1:;
wr(s->u,24,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803df041_2:;
wr(s->u,80,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803df041_3:;
wr(s->r,24,8,rd(s->u,80,8));
L_1803df041_4:;
/* 1803df046: lea rcx, [r12 + r11*8 + 4] */
L_1803df046_0:;
L_1803df046_1:;
wr(s->u,32,8,(((U)UINT64_C(0x4))+rd(s->r,160,8)));
L_1803df046_2:;
wr(s->u,40,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803df046_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803df046_4:;
wr(s->r,8,8,rd(s->u,48,8));
L_1803df046_5:;
/* 1803df04b: mov r12, qword ptr [rsp + 0x98] */
L_1803df04b_0:;
L_1803df04b_1:;
wr(s->u,56,8,(((U)UINT64_C(0x98))+rd(s->r,32,8)));
L_1803df04b_2:;
wr(s->u,80,8,mr((uint64_t)rd(s->u,56,8),8));
L_1803df04b_3:;
wr(s->r,160,8,rd(s->u,80,8));
L_1803df04b_4:;
/* 1803df053: sub r10, rdi */
L_1803df053_0:;
L_1803df053_1:;
wr(s->r,512,1,(rd(s->r,144,8)<rd(s->r,56,8)));
L_1803df053_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->r,56,8),8,1));
L_1803df053_3:;
wr(s->r,144,8,(rd(s->r,144,8)-rd(s->r,56,8)));
L_1803df053_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df053_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803df053_6:;
wr(s->u,89,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803df053_7:;
wr(s->u,97,1,pop(rd(s->u,89,8),8));
L_1803df053_8:;
wr(s->u,98,1,(rd(s->u,97,1)&((U)UINT64_C(0x1))));
L_1803df053_9:;
wr(s->r,514,1,(rd(s->u,98,1)==((U)UINT64_C(0x0))));
L_1803df053_10:;
/* 1803df056: lea rdx, [rdi + r11*4] */
L_1803df056_0:;
L_1803df056_1:;
wr(s->u,8,8,(rd(s->r,152,8)*((U)UINT64_C(0x4))));
L_1803df056_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803df056_3:;
wr(s->r,16,8,rd(s->u,16,8));
L_1803df056_4:;
/* 1803df05a: movsxd rax, dword ptr [rbx + rdx] */
L_1803df05a_0:;
L_1803df05a_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803df05a_2:;
wr(s->u,16,8,(rd(s->r,24,8)+rd(s->u,8,8)));
L_1803df05a_3:;
wr(s->u,76,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df05a_4:;
wr(s->r,0,8,(U)sx(rd(s->u,76,4),4));
L_1803df05a_5:;
/* 1803df05e: inc r11 */
L_1803df05e_0:;
L_1803df05e_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),((U)UINT64_C(0x1)),8,0));
L_1803df05e_2:;
wr(s->r,152,8,(rd(s->r,152,8)+((U)UINT64_C(0x1))));
L_1803df05e_3:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df05e_4:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803df05e_5:;
wr(s->u,89,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803df05e_6:;
wr(s->u,97,1,pop(rd(s->u,89,8),8));
L_1803df05e_7:;
wr(s->u,98,1,(rd(s->u,97,1)&((U)UINT64_C(0x1))));
L_1803df05e_8:;
wr(s->r,514,1,(rd(s->u,98,1)==((U)UINT64_C(0x0))));
L_1803df05e_9:;
/* 1803df061: add rcx, 8 */
L_1803df061_0:;
L_1803df061_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803df061_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,0));
L_1803df061_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803df061_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df061_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803df061_6:;
wr(s->u,89,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803df061_7:;
wr(s->u,97,1,pop(rd(s->u,89,8),8));
L_1803df061_8:;
wr(s->u,98,1,(rd(s->u,97,1)&((U)UINT64_C(0x1))));
L_1803df061_9:;
wr(s->r,514,1,(rd(s->u,98,1)==((U)UINT64_C(0x0))));
L_1803df061_10:;
/* 1803df065: add rdx, 4 */
L_1803df065_0:;
L_1803df065_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803df065_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x4)),8,0));
L_1803df065_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803df065_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df065_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803df065_6:;
wr(s->u,89,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803df065_7:;
wr(s->u,97,1,pop(rd(s->u,89,8),8));
L_1803df065_8:;
wr(s->u,98,1,(rd(s->u,97,1)&((U)UINT64_C(0x1))));
L_1803df065_9:;
wr(s->r,514,1,(rd(s->u,98,1)==((U)UINT64_C(0x0))));
L_1803df065_10:;
/* 1803df069: cmp r11, r8 */
L_1803df069_0:;
L_1803df069_1:;
wr(s->u,99,8,rd(s->r,128,8));
L_1803df069_2:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->u,99,8)));
L_1803df069_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->u,99,8),8,1));
L_1803df069_4:;
wr(s->u,107,8,(rd(s->r,152,8)-rd(s->u,99,8)));
L_1803df069_5:;
wr(s->r,519,1,(sx(rd(s->u,107,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df069_6:;
wr(s->r,518,1,(rd(s->u,107,8)==((U)UINT64_C(0x0))));
L_1803df069_7:;
wr(s->u,89,8,(rd(s->u,107,8)&((U)UINT64_C(0xff))));
L_1803df069_8:;
wr(s->u,97,1,pop(rd(s->u,89,8),8));
L_1803df069_9:;
wr(s->u,98,1,(rd(s->u,97,1)&((U)UINT64_C(0x1))));
L_1803df069_10:;
wr(s->r,514,1,(rd(s->u,98,1)==((U)UINT64_C(0x0))));
L_1803df069_11:;
/* 1803df06c: movss xmm0, dword ptr [r15 + rax*4] */
L_1803df06c_0:;
L_1803df06c_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803df06c_2:;
wr(s->u,16,8,(rd(s->r,184,8)+rd(s->u,8,8)));
L_1803df06c_3:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df06c_4:;
wr(s->r,4608,4,rd(s->u,64,4));
L_1803df06c_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df06c_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df06c_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df06c_8:;
/* 1803df072: addss xmm0, dword ptr [rdx - 4] */
L_1803df072_0:;
L_1803df072_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803df072_2:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df072_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,64,4),4),4));
L_1803df072_4:;
/* 1803df077: movss dword ptr [r10 + rdx - 4], xmm0 */
L_1803df077_0:;
L_1803df077_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,144,8)));
L_1803df077_2:;
wr(s->u,40,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803df077_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803df077_4:;
wr(s->u,64,4,rd(s->r,4608,4));
L_1803df077_5:;
mw((uint64_t)rd(s->u,48,8),4,rd(s->u,64,4));
L_1803df077_6:;
/* 1803df07e: movss xmm1, dword ptr [rcx - 0xc] */
L_1803df07e_0:;
L_1803df07e_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803df07e_2:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df07e_3:;
wr(s->r,4672,4,rd(s->u,64,4));
L_1803df07e_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803df07e_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803df07e_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803df07e_7:;
/* 1803df083: movss xmm0, dword ptr [r12 + rax*4] */
L_1803df083_0:;
L_1803df083_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803df083_2:;
wr(s->u,16,8,(rd(s->r,160,8)+rd(s->u,8,8)));
L_1803df083_3:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df083_4:;
wr(s->r,4608,4,rd(s->u,64,4));
L_1803df083_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df083_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df083_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df083_8:;
/* 1803df089: mulss xmm0, dword ptr [rcx - 8] */
L_1803df089_0:;
L_1803df089_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803df089_2:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df089_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,64,4),4),4));
L_1803df089_4:;
/* 1803df08e: mulss xmm1, dword ptr [r14 + rax*4] */
L_1803df08e_0:;
L_1803df08e_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803df08e_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803df08e_3:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df08e_4:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,64,4),4),4));
L_1803df08e_5:;
/* 1803df094: subss xmm1, xmm0 */
L_1803df094_0:;
L_1803df094_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803df094_2:;
/* 1803df098: movss dword ptr [rbp + r11*8 - 8], xmm1 */
L_1803df098_0:;
L_1803df098_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,40,8)));
L_1803df098_2:;
wr(s->u,40,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803df098_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803df098_4:;
wr(s->u,64,4,rd(s->r,4672,4));
L_1803df098_5:;
mw((uint64_t)rd(s->u,48,8),4,rd(s->u,64,4));
L_1803df098_6:;
/* 1803df09f: movss xmm2, dword ptr [rcx - 0xc] */
L_1803df09f_0:;
L_1803df09f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803df09f_2:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df09f_3:;
wr(s->r,4736,4,rd(s->u,64,4));
L_1803df09f_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803df09f_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803df09f_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803df09f_7:;
/* 1803df0a4: movss xmm0, dword ptr [r14 + rax*4] */
L_1803df0a4_0:;
L_1803df0a4_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803df0a4_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803df0a4_3:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df0a4_4:;
wr(s->r,4608,4,rd(s->u,64,4));
L_1803df0a4_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df0a4_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df0a4_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df0a4_8:;
/* 1803df0aa: mulss xmm0, dword ptr [rcx - 8] */
L_1803df0aa_0:;
L_1803df0aa_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803df0aa_2:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df0aa_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,64,4),4),4));
L_1803df0aa_4:;
/* 1803df0af: mulss xmm2, dword ptr [r12 + rax*4] */
L_1803df0af_0:;
L_1803df0af_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803df0af_2:;
wr(s->u,16,8,(rd(s->r,160,8)+rd(s->u,8,8)));
L_1803df0af_3:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df0af_4:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,64,4),4),4));
L_1803df0af_5:;
/* 1803df0b5: addss xmm2, xmm0 */
L_1803df0b5_0:;
L_1803df0b5_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803df0b5_2:;
/* 1803df0b9: movss dword ptr [r9 + rcx - 8], xmm2 */
L_1803df0b9_0:;
L_1803df0b9_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803df0b9_2:;
wr(s->u,40,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803df0b9_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803df0b9_4:;
wr(s->u,64,4,rd(s->r,4736,4));
L_1803df0b9_5:;
mw((uint64_t)rd(s->u,48,8),4,rd(s->u,64,4));
L_1803df0b9_6:;
/* 1803df0c0: jl 0x1803df05a */
L_1803df0c0_0:;
L_1803df0c0_1:;
wr(s->u,88,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df0c0_2:;
if(rd(s->u,88,1)){goto L_1803df05a_0;}
L_1803df0c0_3:;
return UINT64_C(0x1803df0c2);
}
uint64_t b_1803df05a(CPU*s){
/* 1803df05a: movsxd rax, dword ptr [rbx + rdx] */
L_1803df05a_0:;
L_1803df05a_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803df05a_2:;
wr(s->u,16,8,(rd(s->r,24,8)+rd(s->u,8,8)));
L_1803df05a_3:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df05a_4:;
wr(s->r,0,8,(U)sx(rd(s->u,52,4),4));
L_1803df05a_5:;
/* 1803df05e: inc r11 */
L_1803df05e_0:;
L_1803df05e_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),((U)UINT64_C(0x1)),8,0));
L_1803df05e_2:;
wr(s->r,152,8,(rd(s->r,152,8)+((U)UINT64_C(0x1))));
L_1803df05e_3:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df05e_4:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803df05e_5:;
wr(s->u,57,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803df05e_6:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803df05e_7:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803df05e_8:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803df05e_9:;
/* 1803df061: add rcx, 8 */
L_1803df061_0:;
L_1803df061_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803df061_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,0));
L_1803df061_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803df061_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df061_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803df061_6:;
wr(s->u,57,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803df061_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803df061_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803df061_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803df061_10:;
/* 1803df065: add rdx, 4 */
L_1803df065_0:;
L_1803df065_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803df065_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x4)),8,0));
L_1803df065_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803df065_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df065_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803df065_6:;
wr(s->u,57,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803df065_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803df065_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803df065_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803df065_10:;
/* 1803df069: cmp r11, r8 */
L_1803df069_0:;
L_1803df069_1:;
wr(s->u,67,8,rd(s->r,128,8));
L_1803df069_2:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->u,67,8)));
L_1803df069_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->u,67,8),8,1));
L_1803df069_4:;
wr(s->u,75,8,(rd(s->r,152,8)-rd(s->u,67,8)));
L_1803df069_5:;
wr(s->r,519,1,(sx(rd(s->u,75,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df069_6:;
wr(s->r,518,1,(rd(s->u,75,8)==((U)UINT64_C(0x0))));
L_1803df069_7:;
wr(s->u,57,8,(rd(s->u,75,8)&((U)UINT64_C(0xff))));
L_1803df069_8:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803df069_9:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803df069_10:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803df069_11:;
/* 1803df06c: movss xmm0, dword ptr [r15 + rax*4] */
L_1803df06c_0:;
L_1803df06c_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803df06c_2:;
wr(s->u,16,8,(rd(s->r,184,8)+rd(s->u,8,8)));
L_1803df06c_3:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df06c_4:;
wr(s->r,4608,4,rd(s->u,48,4));
L_1803df06c_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df06c_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df06c_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df06c_8:;
/* 1803df072: addss xmm0, dword ptr [rdx - 4] */
L_1803df072_0:;
L_1803df072_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803df072_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df072_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,48,4),4),4));
L_1803df072_4:;
/* 1803df077: movss dword ptr [r10 + rdx - 4], xmm0 */
L_1803df077_0:;
L_1803df077_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,144,8)));
L_1803df077_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803df077_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df077_4:;
wr(s->u,48,4,rd(s->r,4608,4));
L_1803df077_5:;
mw((uint64_t)rd(s->u,40,8),4,rd(s->u,48,4));
L_1803df077_6:;
/* 1803df07e: movss xmm1, dword ptr [rcx - 0xc] */
L_1803df07e_0:;
L_1803df07e_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803df07e_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df07e_3:;
wr(s->r,4672,4,rd(s->u,48,4));
L_1803df07e_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803df07e_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803df07e_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803df07e_7:;
/* 1803df083: movss xmm0, dword ptr [r12 + rax*4] */
L_1803df083_0:;
L_1803df083_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803df083_2:;
wr(s->u,16,8,(rd(s->r,160,8)+rd(s->u,8,8)));
L_1803df083_3:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df083_4:;
wr(s->r,4608,4,rd(s->u,48,4));
L_1803df083_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df083_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df083_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df083_8:;
/* 1803df089: mulss xmm0, dword ptr [rcx - 8] */
L_1803df089_0:;
L_1803df089_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803df089_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df089_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,48,4),4),4));
L_1803df089_4:;
/* 1803df08e: mulss xmm1, dword ptr [r14 + rax*4] */
L_1803df08e_0:;
L_1803df08e_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803df08e_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803df08e_3:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df08e_4:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,48,4),4),4));
L_1803df08e_5:;
/* 1803df094: subss xmm1, xmm0 */
L_1803df094_0:;
L_1803df094_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803df094_2:;
/* 1803df098: movss dword ptr [rbp + r11*8 - 8], xmm1 */
L_1803df098_0:;
L_1803df098_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,40,8)));
L_1803df098_2:;
wr(s->u,32,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803df098_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df098_4:;
wr(s->u,48,4,rd(s->r,4672,4));
L_1803df098_5:;
mw((uint64_t)rd(s->u,40,8),4,rd(s->u,48,4));
L_1803df098_6:;
/* 1803df09f: movss xmm2, dword ptr [rcx - 0xc] */
L_1803df09f_0:;
L_1803df09f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803df09f_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df09f_3:;
wr(s->r,4736,4,rd(s->u,48,4));
L_1803df09f_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803df09f_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803df09f_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803df09f_7:;
/* 1803df0a4: movss xmm0, dword ptr [r14 + rax*4] */
L_1803df0a4_0:;
L_1803df0a4_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803df0a4_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803df0a4_3:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df0a4_4:;
wr(s->r,4608,4,rd(s->u,48,4));
L_1803df0a4_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df0a4_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df0a4_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df0a4_8:;
/* 1803df0aa: mulss xmm0, dword ptr [rcx - 8] */
L_1803df0aa_0:;
L_1803df0aa_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803df0aa_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df0aa_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,48,4),4),4));
L_1803df0aa_4:;
/* 1803df0af: mulss xmm2, dword ptr [r12 + rax*4] */
L_1803df0af_0:;
L_1803df0af_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803df0af_2:;
wr(s->u,16,8,(rd(s->r,160,8)+rd(s->u,8,8)));
L_1803df0af_3:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df0af_4:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,48,4),4),4));
L_1803df0af_5:;
/* 1803df0b5: addss xmm2, xmm0 */
L_1803df0b5_0:;
L_1803df0b5_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803df0b5_2:;
/* 1803df0b9: movss dword ptr [r9 + rcx - 8], xmm2 */
L_1803df0b9_0:;
L_1803df0b9_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803df0b9_2:;
wr(s->u,32,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803df0b9_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df0b9_4:;
wr(s->u,48,4,rd(s->r,4736,4));
L_1803df0b9_5:;
mw((uint64_t)rd(s->u,40,8),4,rd(s->u,48,4));
L_1803df0b9_6:;
/* 1803df0c0: jl 0x1803df05a */
L_1803df0c0_0:;
L_1803df0c0_1:;
wr(s->u,56,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df0c0_2:;
if(rd(s->u,56,1)){goto L_1803df05a_0;}
L_1803df0c0_3:;
return UINT64_C(0x1803df0c2);
}
uint64_t b_1803df0c2(CPU*s){
/* 1803df0c2: mov r15d, dword ptr [rsp + 0x24] */
L_1803df0c2_0:;
L_1803df0c2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x24))+rd(s->r,32,8)));
L_1803df0c2_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df0c2_3:;
wr(s->r,184,4,rd(s->u,12,4));
L_1803df0c2_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803df0c2_5:;
/* 1803df0c7: mov rbx, qword ptr [rsp + 0x38] */
L_1803df0c7_0:;
L_1803df0c7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803df0c7_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df0c7_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803df0c7_4:;
/* 1803df0cc: movss xmm0, dword ptr [rbx] */
L_1803df0cc_0:;
L_1803df0cc_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,24,8),4));
L_1803df0cc_2:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803df0cc_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df0cc_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df0cc_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df0cc_6:;
/* 1803df0d0: call 0x180609b08 */
L_1803df0d0_0:;
L_1803df0d0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df0d0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df0d5)));
L_1803df0d0_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803df0d0_4:;
return UINT64_C(0x1803df0d5);
}
uint64_t b_1803df0cc(CPU*s){
/* 1803df0cc: movss xmm0, dword ptr [rbx] */
L_1803df0cc_0:;
L_1803df0cc_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,24,8),4));
L_1803df0cc_2:;
wr(s->r,4608,4,rd(s->u,0,4));
L_1803df0cc_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df0cc_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df0cc_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df0cc_6:;
/* 1803df0d0: call 0x180609b08 */
L_1803df0d0_0:;
L_1803df0d0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df0d0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df0d5)));
L_1803df0d0_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803df0d0_4:;
return UINT64_C(0x1803df0d5);
}
uint64_t b_1803df0d5(CPU*s){
/* 1803df0d5: mov rax, qword ptr [rsp + 0x38] */
L_1803df0d5_0:;
L_1803df0d5_1:;
wr(s->u,16,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803df0d5_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df0d5_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803df0d5_4:;
/* 1803df0da: mov r12, qword ptr [rsp + 0xa8] */
L_1803df0da_0:;
L_1803df0da_1:;
wr(s->u,24,8,(((U)UINT64_C(0xa8))+rd(s->r,32,8)));
L_1803df0da_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803df0da_3:;
wr(s->r,160,8,rd(s->u,40,8));
L_1803df0da_4:;
/* 1803df0e2: movss xmm6, dword ptr [rip + 0x276106] */
L_1803df0e2_0:;
L_1803df0e2_1:;
wr(s->r,4992,4,mr(UINT64_C(0x1806551f0),4));
L_1803df0e2_2:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803df0e2_3:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803df0e2_4:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803df0e2_5:;
/* 1803df0ea: mulss xmm0, dword ptr [r12] */
L_1803df0ea_0:;
L_1803df0ea_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,160,8),4));
L_1803df0ea_2:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,32,4),4),4));
L_1803df0ea_3:;
/* 1803df0f0: movsxd r14, dword ptr [rsp + 0x28] */
L_1803df0f0_0:;
L_1803df0f0_1:;
wr(s->u,16,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803df0f0_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df0f0_3:;
wr(s->r,176,8,(U)sx(rd(s->u,36,4),4));
L_1803df0f0_4:;
/* 1803df0f5: mulss xmm0, xmm6 */
L_1803df0f5_0:;
L_1803df0f5_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803df0f5_2:;
/* 1803df0f9: movss dword ptr [rbp], xmm0 */
L_1803df0f9_0:;
L_1803df0f9_1:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803df0f9_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,32,4));
L_1803df0f9_3:;
/* 1803df0fe: movss xmm0, dword ptr [rax + r14*4] */
L_1803df0fe_0:;
L_1803df0fe_1:;
wr(s->u,0,8,(rd(s->r,176,8)*((U)UINT64_C(0x4))));
L_1803df0fe_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803df0fe_3:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803df0fe_4:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803df0fe_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df0fe_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df0fe_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df0fe_8:;
/* 1803df104: call 0x180609b08 */
L_1803df104_0:;
L_1803df104_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df104_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df109)));
L_1803df104_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803df104_4:;
return UINT64_C(0x1803df109);
}
uint64_t b_1803df109(CPU*s){
/* 1803df109: mulss xmm0, dword ptr [r12 + r14*4] */
L_1803df109_0:;
L_1803df109_1:;
wr(s->u,8,8,(rd(s->r,176,8)*((U)UINT64_C(0x4))));
L_1803df109_2:;
wr(s->u,16,8,(rd(s->r,160,8)+rd(s->u,8,8)));
L_1803df109_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df109_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,40,4),4),4));
L_1803df109_5:;
/* 1803df10f: mulss xmm0, xmm6 */
L_1803df10f_0:;
L_1803df10f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803df10f_2:;
/* 1803df113: movaps xmm6, xmmword ptr [rsp + 0x160] */
L_1803df113_0:;
L_1803df113_1:;
wr(s->u,32,8,(((U)UINT64_C(0x160))+rd(s->r,32,8)));
L_1803df113_2:;
wr(s->u,44,16,mr((uint64_t)rd(s->u,32,8),16));
L_1803df113_3:;
wr(s->u,68,16,rd(s->u,44,16));
L_1803df113_4:;
wr(s->r,4992,4,rd(s->u,68,4));
L_1803df113_5:;
wr(s->r,4996,4,rd(s->u,72,4));
L_1803df113_6:;
wr(s->r,5000,4,rd(s->u,76,4));
L_1803df113_7:;
wr(s->r,5004,4,rd(s->u,80,4));
L_1803df113_8:;
/* 1803df11b: movss dword ptr [rbp + 4], xmm0 */
L_1803df11b_0:;
L_1803df11b_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803df11b_2:;
wr(s->u,40,4,rd(s->r,4608,4));
L_1803df11b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,40,4));
L_1803df11b_4:;
/* 1803df120: movsxd rax, r14d */
L_1803df120_0:;
L_1803df120_1:;
wr(s->r,0,8,(U)sx(rd(s->r,176,4),4));
L_1803df120_2:;
/* 1803df123: mov rdx, rdi */
L_1803df123_0:;
L_1803df123_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803df123_2:;
/* 1803df126: mov rdi, qword ptr [rsp + 0xe8] */
L_1803df126_0:;
L_1803df126_1:;
wr(s->u,32,8,(((U)UINT64_C(0xe8))+rd(s->r,32,8)));
L_1803df126_2:;
wr(s->u,60,8,mr((uint64_t)rd(s->u,32,8),8));
L_1803df126_3:;
wr(s->r,56,8,rd(s->u,60,8));
L_1803df126_4:;
/* 1803df12e: lea rbx, [rax*4] */
L_1803df12e_0:;
L_1803df12e_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803df12e_2:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803df12e_3:;
/* 1803df136: mov rcx, rdi */
L_1803df136_0:;
L_1803df136_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803df136_2:;
/* 1803df139: mov r8, rbx */
L_1803df139_0:;
L_1803df139_1:;
wr(s->r,128,8,rd(s->r,24,8));
L_1803df139_2:;
/* 1803df13c: call 0x18000d550 */
L_1803df13c_0:;
L_1803df13c_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df13c_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df141)));
L_1803df13c_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803df13c_4:;
return UINT64_C(0x1803df141);
}
uint64_t b_1803df120(CPU*s){
/* 1803df120: movsxd rax, r14d */
L_1803df120_0:;
L_1803df120_1:;
wr(s->r,0,8,(U)sx(rd(s->r,176,4),4));
L_1803df120_2:;
/* 1803df123: mov rdx, rdi */
L_1803df123_0:;
L_1803df123_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803df123_2:;
/* 1803df126: mov rdi, qword ptr [rsp + 0xe8] */
L_1803df126_0:;
L_1803df126_1:;
wr(s->u,8,8,(((U)UINT64_C(0xe8))+rd(s->r,32,8)));
L_1803df126_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803df126_3:;
wr(s->r,56,8,rd(s->u,16,8));
L_1803df126_4:;
/* 1803df12e: lea rbx, [rax*4] */
L_1803df12e_0:;
L_1803df12e_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803df12e_2:;
wr(s->r,24,8,rd(s->u,0,8));
L_1803df12e_3:;
/* 1803df136: mov rcx, rdi */
L_1803df136_0:;
L_1803df136_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803df136_2:;
/* 1803df139: mov r8, rbx */
L_1803df139_0:;
L_1803df139_1:;
wr(s->r,128,8,rd(s->r,24,8));
L_1803df139_2:;
/* 1803df13c: call 0x18000d550 */
L_1803df13c_0:;
L_1803df13c_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df13c_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df141)));
L_1803df13c_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803df13c_4:;
return UINT64_C(0x1803df141);
}
uint64_t b_1803df141(CPU*s){
/* 1803df141: test r15d, r15d */
L_1803df141_0:;
L_1803df141_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803df141_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803df141_3:;
wr(s->u,7,4,(rd(s->r,184,4)&rd(s->r,184,4)));
L_1803df141_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df141_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803df141_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803df141_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803df141_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803df141_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803df141_10:;
/* 1803df144: jne 0x1803df3c0 */
L_1803df144_0:;
L_1803df144_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803df144_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803df3c0);}
L_1803df144_3:;
return UINT64_C(0x1803df14a);
}
uint64_t b_1803df14a(CPU*s){
/* 1803df14a: mov rcx, qword ptr [rsi + 0x808] */
L_1803df14a_0:;
L_1803df14a_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x808))));
L_1803df14a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df14a_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803df14a_4:;
/* 1803df151: mov r8, rbx */
L_1803df151_0:;
L_1803df151_1:;
wr(s->r,128,8,rd(s->r,24,8));
L_1803df151_2:;
/* 1803df154: mov rdx, rdi */
L_1803df154_0:;
L_1803df154_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803df154_2:;
/* 1803df157: call 0x18000d550 */
L_1803df157_0:;
L_1803df157_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df157_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df15c)));
L_1803df157_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803df157_4:;
return UINT64_C(0x1803df15c);
}
uint64_t b_1803df15c(CPU*s){
/* 1803df15c: mov rcx, qword ptr [rsi + 0x9b8] */
L_1803df15c_0:;
L_1803df15c_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x9b8))));
L_1803df15c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df15c_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803df15c_4:;
/* 1803df163: mov r8, rbx */
L_1803df163_0:;
L_1803df163_1:;
wr(s->r,128,8,rd(s->r,24,8));
L_1803df163_2:;
/* 1803df166: mov rdx, r13 */
L_1803df166_0:;
L_1803df166_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803df166_2:;
/* 1803df169: call 0x18000d550 */
L_1803df169_0:;
L_1803df169_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df169_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df16e)));
L_1803df169_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803df169_4:;
return UINT64_C(0x1803df16e);
}
uint64_t b_1803df16e(CPU*s){
/* 1803df16e: jmp 0x1803df3c0 */
L_1803df16e_0:;
L_1803df16e_1:;
return UINT64_C(0x1803df3c0);
L_1803df16e_2:;
return UINT64_C(0x1803df173);
}
uint64_t b_1803df173(CPU*s){
/* 1803df173: test r15d, r15d */
L_1803df173_0:;
L_1803df173_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803df173_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803df173_3:;
wr(s->u,7,4,(rd(s->r,184,4)&rd(s->r,184,4)));
L_1803df173_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df173_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803df173_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803df173_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803df173_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803df173_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803df173_10:;
/* 1803df176: jne 0x1803df3c0 */
L_1803df176_0:;
L_1803df176_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803df176_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803df3c0);}
L_1803df176_3:;
return UINT64_C(0x1803df17c);
}
uint64_t b_1803df17c(CPU*s){
/* 1803df17c: mov rcx, rsi */
L_1803df17c_0:;
L_1803df17c_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1803df17c_2:;
/* 1803df17f: call 0x1803e0280 */
L_1803df17f_0:;
L_1803df17f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df17f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df184)));
L_1803df17f_3:;
return (uint64_t)UINT64_C(0x1803e0280);
L_1803df17f_4:;
return UINT64_C(0x1803df184);
}
uint64_t b_1803df184(CPU*s){
/* 1803df184: mov dword ptr [rsi + 0x38], eax */
L_1803df184_0:;
L_1803df184_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x38))));
L_1803df184_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803df184_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df184_4:;
/* 1803df187: inc dword ptr [rsi] */
L_1803df187_0:;
L_1803df187_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,48,8),4));
L_1803df187_2:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),((U)UINT64_C(0x1)),4,0));
L_1803df187_3:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,48,8),4));
L_1803df187_4:;
wr(s->u,8,4,(rd(s->u,8,4)+((U)UINT64_C(0x1))));
L_1803df187_5:;
mw((uint64_t)rd(s->r,48,8),4,rd(s->u,8,4));
L_1803df187_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,48,8),4));
L_1803df187_7:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df187_8:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,48,8),4));
L_1803df187_9:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803df187_10:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,48,8),4));
L_1803df187_11:;
wr(s->u,12,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803df187_12:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803df187_13:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803df187_14:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803df187_15:;
/* 1803df189: jmp 0x1803df3c0 */
L_1803df189_0:;
L_1803df189_1:;
return UINT64_C(0x1803df3c0);
L_1803df189_2:;
return UINT64_C(0x1803df18e);
}
uint64_t b_1803df18e(CPU*s){
/* 1803df18e: movsxd rbx, dword ptr [rsp + 0x28] */
L_1803df18e_0:;
L_1803df18e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803df18e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df18e_3:;
wr(s->r,24,8,(U)sx(rd(s->u,8,4),4));
L_1803df18e_4:;
/* 1803df193: mov rdx, r12 */
L_1803df193_0:;
L_1803df193_1:;
wr(s->r,16,8,rd(s->r,160,8));
L_1803df193_2:;
/* 1803df196: mov rcx, rdi */
L_1803df196_0:;
L_1803df196_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803df196_2:;
/* 1803df199: mov r8d, ebx */
L_1803df199_0:;
L_1803df199_1:;
wr(s->r,128,4,rd(s->r,24,4));
L_1803df199_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803df199_3:;
/* 1803df19c: call qword ptr [rip + 0x63f016] */
L_1803df19c_0:;
L_1803df19c_1:;
wr(s->u,12,8,mr(UINT64_C(0x180a1e1b8),8));
L_1803df19c_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df19c_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df1a2)));
L_1803df19c_4:;
return (uint64_t)rd(s->u,12,8);
L_1803df19c_5:;
return UINT64_C(0x1803df1a2);
}
uint64_t b_1803df1a2(CPU*s){
/* 1803df1a2: mov r13, qword ptr [rsp + 0x50] */
L_1803df1a2_0:;
L_1803df1a2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803df1a2_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df1a2_3:;
wr(s->r,168,8,rd(s->u,16,8));
L_1803df1a2_4:;
/* 1803df1a7: mov rbp, qword ptr [rsp + 0xe8] */
L_1803df1a7_0:;
L_1803df1a7_1:;
wr(s->u,8,8,(((U)UINT64_C(0xe8))+rd(s->r,32,8)));
L_1803df1a7_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803df1a7_3:;
wr(s->r,40,8,rd(s->u,16,8));
L_1803df1a7_4:;
/* 1803df1af: mov rdx, r13 */
L_1803df1af_0:;
L_1803df1af_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803df1af_2:;
/* 1803df1b2: mov rcx, rbp */
L_1803df1b2_0:;
L_1803df1b2_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803df1b2_2:;
/* 1803df1b5: mov r8d, ebx */
L_1803df1b5_0:;
L_1803df1b5_1:;
wr(s->r,128,4,rd(s->r,24,4));
L_1803df1b5_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803df1b5_3:;
/* 1803df1b8: call qword ptr [rip + 0x63ef82] */
L_1803df1b8_0:;
L_1803df1b8_1:;
wr(s->u,24,8,mr(UINT64_C(0x180a1e140),8));
L_1803df1b8_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df1b8_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df1be)));
L_1803df1b8_4:;
return (uint64_t)rd(s->u,24,8);
L_1803df1b8_5:;
return UINT64_C(0x1803df1be);
}
uint64_t b_1803df1be(CPU*s){
/* 1803df1be: mov r8d, ebx */
L_1803df1be_0:;
L_1803df1be_1:;
wr(s->r,128,4,rd(s->r,24,4));
L_1803df1be_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803df1be_3:;
/* 1803df1c1: mov rcx, rbp */
L_1803df1c1_0:;
L_1803df1c1_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803df1c1_2:;
/* 1803df1c4: movss xmm1, dword ptr [rip + 0x271304] */
L_1803df1c4_0:;
L_1803df1c4_1:;
wr(s->r,4672,4,mr(UINT64_C(0x1806504d0),4));
L_1803df1c4_2:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803df1c4_3:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803df1c4_4:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803df1c4_5:;
/* 1803df1cc: call qword ptr [rip + 0x63f00e] */
L_1803df1cc_0:;
L_1803df1cc_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1e0),8));
L_1803df1cc_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df1cc_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df1d2)));
L_1803df1cc_4:;
return (uint64_t)rd(s->u,0,8);
L_1803df1cc_5:;
return UINT64_C(0x1803df1d2);
}
uint64_t b_1803df1d2(CPU*s){
/* 1803df1d2: mov r8d, ebx */
L_1803df1d2_0:;
L_1803df1d2_1:;
wr(s->r,128,4,rd(s->r,24,4));
L_1803df1d2_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803df1d2_3:;
/* 1803df1d5: mov rdx, rdi */
L_1803df1d5_0:;
L_1803df1d5_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803df1d5_2:;
/* 1803df1d8: mov rcx, rbp */
L_1803df1d8_0:;
L_1803df1d8_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803df1d8_2:;
/* 1803df1db: call qword ptr [rip + 0x63ef5f] */
L_1803df1db_0:;
L_1803df1db_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e140),8));
L_1803df1db_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df1db_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df1e1)));
L_1803df1db_4:;
return (uint64_t)rd(s->u,0,8);
L_1803df1db_5:;
return UINT64_C(0x1803df1e1);
}
uint64_t b_1803df1e1(CPU*s){
/* 1803df1e1: mov rdx, rbp */
L_1803df1e1_0:;
L_1803df1e1_1:;
wr(s->r,16,8,rd(s->r,40,8));
L_1803df1e1_2:;
/* 1803df1e4: mov rbp, qword ptr [rsp + 0xd8] */
L_1803df1e4_0:;
L_1803df1e4_1:;
wr(s->u,0,8,(((U)UINT64_C(0xd8))+rd(s->r,32,8)));
L_1803df1e4_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df1e4_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803df1e4_4:;
/* 1803df1ec: mov rcx, rbp */
L_1803df1ec_0:;
L_1803df1ec_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803df1ec_2:;
/* 1803df1ef: mov r8d, ebx */
L_1803df1ef_0:;
L_1803df1ef_1:;
wr(s->r,128,4,rd(s->r,24,4));
L_1803df1ef_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803df1ef_3:;
/* 1803df1f2: call qword ptr [rip + 0x63ef50] */
L_1803df1f2_0:;
L_1803df1f2_1:;
wr(s->u,16,8,mr(UINT64_C(0x180a1e148),8));
L_1803df1f2_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df1f2_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df1f8)));
L_1803df1f2_4:;
return (uint64_t)rd(s->u,16,8);
L_1803df1f2_5:;
return UINT64_C(0x1803df1f8);
}
uint64_t b_1803df1f8(CPU*s){
/* 1803df1f8: mov r8d, ebx */
L_1803df1f8_0:;
L_1803df1f8_1:;
wr(s->r,128,4,rd(s->r,24,4));
L_1803df1f8_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803df1f8_3:;
/* 1803df1fb: mov rdx, r13 */
L_1803df1fb_0:;
L_1803df1fb_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803df1fb_2:;
/* 1803df1fe: mov rcx, rbp */
L_1803df1fe_0:;
L_1803df1fe_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803df1fe_2:;
/* 1803df201: call qword ptr [rip + 0x63ef39] */
L_1803df201_0:;
L_1803df201_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e140),8));
L_1803df201_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df201_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df207)));
L_1803df201_4:;
return (uint64_t)rd(s->u,0,8);
L_1803df201_5:;
return UINT64_C(0x1803df207);
}
uint64_t b_1803df207(CPU*s){
/* 1803df207: xorps xmm5, xmm5 */
L_1803df207_0:;
L_1803df207_1:;
wr(s->r,4928,4,(rd(s->r,4928,4)^rd(s->r,4928,4)));
L_1803df207_2:;
wr(s->r,4932,4,(rd(s->r,4932,4)^rd(s->r,4932,4)));
L_1803df207_3:;
wr(s->r,4936,4,(rd(s->r,4936,4)^rd(s->r,4936,4)));
L_1803df207_4:;
wr(s->r,4940,4,(rd(s->r,4940,4)^rd(s->r,4940,4)));
L_1803df207_5:;
/* 1803df20a: movss xmm1, dword ptr [rip + 0x27c2fa] */
L_1803df20a_0:;
L_1803df20a_1:;
wr(s->r,4672,4,mr(UINT64_C(0x18065b50c),4));
L_1803df20a_2:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803df20a_3:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803df20a_4:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803df20a_5:;
/* 1803df212: comiss xmm5, dword ptr [r12] */
L_1803df212_0:;
L_1803df212_1:;
wr(s->u,6,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803df212_2:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,160,8),4));
L_1803df212_3:;
wr(s->u,7,1,isnan(fv(rd(s->u,0,4),4)));
L_1803df212_4:;
wr(s->r,514,1,((rd(s->u,6,1)!=0)||(rd(s->u,7,1)!=0)));
L_1803df212_5:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,160,8),4));
L_1803df212_6:;
wr(s->u,8,1,(fv(rd(s->r,4928,4),4)==fv(rd(s->u,0,4),4)));
L_1803df212_7:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,8,1)));
L_1803df212_8:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,160,8),4));
L_1803df212_9:;
wr(s->u,9,1,(fv(rd(s->r,4928,4),4)<fv(rd(s->u,0,4),4)));
L_1803df212_10:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,9,1)));
L_1803df212_11:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803df212_12:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803df212_13:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803df212_14:;
/* 1803df217: ja 0x1803df21e */
L_1803df217_0:;
L_1803df217_1:;
wr(s->u,4,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803df217_2:;
wr(s->u,5,1,(!rd(s->u,4,1)));
L_1803df217_3:;
if(rd(s->u,5,1)){return UINT64_C(0x1803df21e);}
L_1803df217_4:;
return UINT64_C(0x1803df219);
}
uint64_t b_1803df219(CPU*s){
/* 1803df219: movaps xmm0, xmm5 */
L_1803df219_0:;
L_1803df219_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803df219_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803df219_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803df219_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803df219_5:;
/* 1803df21c: jmp 0x1803df221 */
L_1803df21c_0:;
L_1803df21c_1:;
return UINT64_C(0x1803df221);
L_1803df21c_2:;
return UINT64_C(0x1803df21e);
}
uint64_t b_1803df21e(CPU*s){
/* 1803df21e: movaps xmm0, xmm1 */
L_1803df21e_0:;
L_1803df21e_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803df21e_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803df21e_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803df21e_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803df21e_5:;
/* 1803df221: movss dword ptr [rdi], xmm0 */
L_1803df221_0:;
L_1803df221_1:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803df221_2:;
mw((uint64_t)rd(s->r,56,8),4,rd(s->u,8,4));
L_1803df221_3:;
/* 1803df225: comiss xmm5, dword ptr [r12 + 4] */
L_1803df225_0:;
L_1803df225_1:;
wr(s->u,0,8,(((U)UINT64_C(0x4))+rd(s->r,160,8)));
L_1803df225_2:;
wr(s->u,13,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803df225_3:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df225_4:;
wr(s->u,14,1,isnan(fv(rd(s->u,8,4),4)));
L_1803df225_5:;
wr(s->r,514,1,((rd(s->u,13,1)!=0)||(rd(s->u,14,1)!=0)));
L_1803df225_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df225_7:;
wr(s->u,15,1,(fv(rd(s->r,4928,4),4)==fv(rd(s->u,8,4),4)));
L_1803df225_8:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,15,1)));
L_1803df225_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df225_10:;
wr(s->u,16,1,(fv(rd(s->r,4928,4),4)<fv(rd(s->u,8,4),4)));
L_1803df225_11:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,16,1)));
L_1803df225_12:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803df225_13:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803df225_14:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803df225_15:;
/* 1803df22b: jbe 0x1803df230 */
L_1803df22b_0:;
L_1803df22b_1:;
wr(s->u,12,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803df22b_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803df230);}
L_1803df22b_3:;
return UINT64_C(0x1803df22d);
}
uint64_t b_1803df221(CPU*s){
/* 1803df221: movss dword ptr [rdi], xmm0 */
L_1803df221_0:;
L_1803df221_1:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803df221_2:;
mw((uint64_t)rd(s->r,56,8),4,rd(s->u,8,4));
L_1803df221_3:;
/* 1803df225: comiss xmm5, dword ptr [r12 + 4] */
L_1803df225_0:;
L_1803df225_1:;
wr(s->u,0,8,(((U)UINT64_C(0x4))+rd(s->r,160,8)));
L_1803df225_2:;
wr(s->u,13,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803df225_3:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df225_4:;
wr(s->u,14,1,isnan(fv(rd(s->u,8,4),4)));
L_1803df225_5:;
wr(s->r,514,1,((rd(s->u,13,1)!=0)||(rd(s->u,14,1)!=0)));
L_1803df225_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df225_7:;
wr(s->u,15,1,(fv(rd(s->r,4928,4),4)==fv(rd(s->u,8,4),4)));
L_1803df225_8:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,15,1)));
L_1803df225_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df225_10:;
wr(s->u,16,1,(fv(rd(s->r,4928,4),4)<fv(rd(s->u,8,4),4)));
L_1803df225_11:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,16,1)));
L_1803df225_12:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803df225_13:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803df225_14:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803df225_15:;
/* 1803df22b: jbe 0x1803df230 */
L_1803df22b_0:;
L_1803df22b_1:;
wr(s->u,12,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803df22b_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803df230);}
L_1803df22b_3:;
return UINT64_C(0x1803df22d);
}
uint64_t b_1803df22d(CPU*s){
/* 1803df22d: movaps xmm5, xmm1 */
L_1803df22d_0:;
L_1803df22d_1:;
wr(s->r,4928,4,rd(s->r,4672,4));
L_1803df22d_2:;
wr(s->r,4932,4,rd(s->r,4676,4));
L_1803df22d_3:;
wr(s->r,4936,4,rd(s->r,4680,4));
L_1803df22d_4:;
wr(s->r,4940,4,rd(s->r,4684,4));
L_1803df22d_5:;
/* 1803df230: movss dword ptr [rdi + rbx*4], xmm5 */
L_1803df230_0:;
L_1803df230_1:;
wr(s->u,0,8,(rd(s->r,24,8)*((U)UINT64_C(0x4))));
L_1803df230_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803df230_3:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803df230_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803df230_5:;
/* 1803df235: test r15d, r15d */
L_1803df235_0:;
L_1803df235_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803df235_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803df235_3:;
wr(s->u,27,4,(rd(s->r,184,4)&rd(s->r,184,4)));
L_1803df235_4:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df235_5:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803df235_6:;
wr(s->u,21,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803df235_7:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803df235_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803df235_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803df235_10:;
/* 1803df238: jne 0x1803df27b */
L_1803df238_0:;
L_1803df238_1:;
wr(s->u,20,1,(!rd(s->r,518,1)));
L_1803df238_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803df27b);}
L_1803df238_3:;
return UINT64_C(0x1803df23a);
}
uint64_t b_1803df230(CPU*s){
/* 1803df230: movss dword ptr [rdi + rbx*4], xmm5 */
L_1803df230_0:;
L_1803df230_1:;
wr(s->u,0,8,(rd(s->r,24,8)*((U)UINT64_C(0x4))));
L_1803df230_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803df230_3:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803df230_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803df230_5:;
/* 1803df235: test r15d, r15d */
L_1803df235_0:;
L_1803df235_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803df235_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803df235_3:;
wr(s->u,27,4,(rd(s->r,184,4)&rd(s->r,184,4)));
L_1803df235_4:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df235_5:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803df235_6:;
wr(s->u,21,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803df235_7:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803df235_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803df235_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803df235_10:;
/* 1803df238: jne 0x1803df27b */
L_1803df238_0:;
L_1803df238_1:;
wr(s->u,20,1,(!rd(s->r,518,1)));
L_1803df238_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803df27b);}
L_1803df238_3:;
return UINT64_C(0x1803df23a);
}
uint64_t b_1803df23a(CPU*s){
/* 1803df23a: mov rax, qword ptr [rsp + 0xf8] */
L_1803df23a_0:;
L_1803df23a_1:;
wr(s->u,8,8,(((U)UINT64_C(0xf8))+rd(s->r,32,8)));
L_1803df23a_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803df23a_3:;
wr(s->r,0,8,rd(s->u,24,8));
L_1803df23a_4:;
/* 1803df242: mov r8d, ebx */
L_1803df242_0:;
L_1803df242_1:;
wr(s->r,128,4,rd(s->r,24,4));
L_1803df242_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803df242_3:;
/* 1803df245: mov rdx, r12 */
L_1803df245_0:;
L_1803df245_1:;
wr(s->r,16,8,rd(s->r,160,8));
L_1803df245_2:;
/* 1803df248: mov qword ptr [rsi + 0x368], rax */
L_1803df248_0:;
L_1803df248_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x368))));
L_1803df248_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803df248_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803df248_4:;
/* 1803df24f: mov rax, qword ptr [rsp + 0xa8] */
L_1803df24f_0:;
L_1803df24f_1:;
wr(s->u,8,8,(((U)UINT64_C(0xa8))+rd(s->r,32,8)));
L_1803df24f_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803df24f_3:;
wr(s->r,0,8,rd(s->u,24,8));
L_1803df24f_4:;
/* 1803df257: mov qword ptr [rsi + 0x360], rax */
L_1803df257_0:;
L_1803df257_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x360))));
L_1803df257_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803df257_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803df257_4:;
/* 1803df25e: mov rax, qword ptr [rsp + 0x100] */
L_1803df25e_0:;
L_1803df25e_1:;
wr(s->u,8,8,(((U)UINT64_C(0x100))+rd(s->r,32,8)));
L_1803df25e_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803df25e_3:;
wr(s->r,0,8,rd(s->u,24,8));
L_1803df25e_4:;
/* 1803df266: mov rcx, rax */
L_1803df266_0:;
L_1803df266_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803df266_2:;
/* 1803df269: mov qword ptr [rsi + 0x678], rax */
L_1803df269_0:;
L_1803df269_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x678))));
L_1803df269_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803df269_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803df269_4:;
/* 1803df270: mov rdi, rax */
L_1803df270_0:;
L_1803df270_1:;
wr(s->r,56,8,rd(s->r,0,8));
L_1803df270_2:;
/* 1803df273: call qword ptr [rip + 0x63ef07] */
L_1803df273_0:;
L_1803df273_1:;
wr(s->u,32,8,mr(UINT64_C(0x180a1e180),8));
L_1803df273_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df273_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df279)));
L_1803df273_4:;
return (uint64_t)rd(s->u,32,8);
L_1803df273_5:;
return UINT64_C(0x1803df279);
}
uint64_t b_1803df279(CPU*s){
/* 1803df279: jmp 0x1803df283 */
L_1803df279_0:;
L_1803df279_1:;
return UINT64_C(0x1803df283);
L_1803df279_2:;
return UINT64_C(0x1803df27b);
}
uint64_t b_1803df27b(CPU*s){
/* 1803df27b: mov rdi, qword ptr [rsp + 0xa8] */
L_1803df27b_0:;
L_1803df27b_1:;
wr(s->u,24,8,(((U)UINT64_C(0xa8))+rd(s->r,32,8)));
L_1803df27b_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803df27b_3:;
wr(s->r,56,8,rd(s->u,36,8));
L_1803df27b_4:;
/* 1803df283: movss xmm2, dword ptr [rip + 0x42d0d5] */
L_1803df283_0:;
L_1803df283_1:;
wr(s->r,4736,4,mr(UINT64_C(0x18080c360),4));
L_1803df283_2:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803df283_3:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803df283_4:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803df283_5:;
/* 1803df28b: movss xmm0, dword ptr [r12] */
L_1803df28b_0:;
L_1803df28b_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,160,8),4));
L_1803df28b_2:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803df28b_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df28b_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df28b_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df28b_6:;
/* 1803df291: movss xmm1, dword ptr [rip + 0x272ecb] */
L_1803df291_0:;
L_1803df291_1:;
wr(s->r,4672,4,mr(UINT64_C(0x180652164),4));
L_1803df291_2:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803df291_3:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803df291_4:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803df291_5:;
/* 1803df299: andps xmm0, xmm2 */
L_1803df299_0:;
L_1803df299_1:;
wr(s->r,4608,4,(rd(s->r,4608,4)&rd(s->r,4736,4)));
L_1803df299_2:;
wr(s->r,4612,4,(rd(s->r,4612,4)&rd(s->r,4740,4)));
L_1803df299_3:;
wr(s->r,4616,4,(rd(s->r,4616,4)&rd(s->r,4744,4)));
L_1803df299_4:;
wr(s->r,4620,4,(rd(s->r,4620,4)&rd(s->r,4748,4)));
L_1803df299_5:;
/* 1803df29c: mulss xmm0, xmm1 */
L_1803df29c_0:;
L_1803df29c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803df29c_2:;
/* 1803df2a0: movss dword ptr [rdi], xmm0 */
L_1803df2a0_0:;
L_1803df2a0_1:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803df2a0_2:;
mw((uint64_t)rd(s->r,56,8),4,rd(s->u,32,4));
L_1803df2a0_3:;
/* 1803df2a4: movss xmm0, dword ptr [r12 + 4] */
L_1803df2a4_0:;
L_1803df2a4_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,160,8)));
L_1803df2a4_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df2a4_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803df2a4_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df2a4_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df2a4_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df2a4_7:;
/* 1803df2ab: andps xmm0, xmm2 */
L_1803df2ab_0:;
L_1803df2ab_1:;
wr(s->r,4608,4,(rd(s->r,4608,4)&rd(s->r,4736,4)));
L_1803df2ab_2:;
wr(s->r,4612,4,(rd(s->r,4612,4)&rd(s->r,4740,4)));
L_1803df2ab_3:;
wr(s->r,4616,4,(rd(s->r,4616,4)&rd(s->r,4744,4)));
L_1803df2ab_4:;
wr(s->r,4620,4,(rd(s->r,4620,4)&rd(s->r,4748,4)));
L_1803df2ab_5:;
/* 1803df2ae: mulss xmm0, xmm1 */
L_1803df2ae_0:;
L_1803df2ae_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803df2ae_2:;
/* 1803df2b2: movss dword ptr [rdi + rbx*4], xmm0 */
L_1803df2b2_0:;
L_1803df2b2_1:;
wr(s->u,0,8,(rd(s->r,24,8)*((U)UINT64_C(0x4))));
L_1803df2b2_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803df2b2_3:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803df2b2_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803df2b2_5:;
/* 1803df2b7: jmp 0x1803df3c0 */
L_1803df2b7_0:;
L_1803df2b7_1:;
return UINT64_C(0x1803df3c0);
L_1803df2b7_2:;
return UINT64_C(0x1803df2bc);
}
uint64_t b_1803df283(CPU*s){
/* 1803df283: movss xmm2, dword ptr [rip + 0x42d0d5] */
L_1803df283_0:;
L_1803df283_1:;
wr(s->r,4736,4,mr(UINT64_C(0x18080c360),4));
L_1803df283_2:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803df283_3:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803df283_4:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803df283_5:;
/* 1803df28b: movss xmm0, dword ptr [r12] */
L_1803df28b_0:;
L_1803df28b_1:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,160,8),4));
L_1803df28b_2:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803df28b_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df28b_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df28b_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df28b_6:;
/* 1803df291: movss xmm1, dword ptr [rip + 0x272ecb] */
L_1803df291_0:;
L_1803df291_1:;
wr(s->r,4672,4,mr(UINT64_C(0x180652164),4));
L_1803df291_2:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803df291_3:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803df291_4:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803df291_5:;
/* 1803df299: andps xmm0, xmm2 */
L_1803df299_0:;
L_1803df299_1:;
wr(s->r,4608,4,(rd(s->r,4608,4)&rd(s->r,4736,4)));
L_1803df299_2:;
wr(s->r,4612,4,(rd(s->r,4612,4)&rd(s->r,4740,4)));
L_1803df299_3:;
wr(s->r,4616,4,(rd(s->r,4616,4)&rd(s->r,4744,4)));
L_1803df299_4:;
wr(s->r,4620,4,(rd(s->r,4620,4)&rd(s->r,4748,4)));
L_1803df299_5:;
/* 1803df29c: mulss xmm0, xmm1 */
L_1803df29c_0:;
L_1803df29c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803df29c_2:;
/* 1803df2a0: movss dword ptr [rdi], xmm0 */
L_1803df2a0_0:;
L_1803df2a0_1:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803df2a0_2:;
mw((uint64_t)rd(s->r,56,8),4,rd(s->u,24,4));
L_1803df2a0_3:;
/* 1803df2a4: movss xmm0, dword ptr [r12 + 4] */
L_1803df2a4_0:;
L_1803df2a4_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,160,8)));
L_1803df2a4_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df2a4_3:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803df2a4_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df2a4_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df2a4_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df2a4_7:;
/* 1803df2ab: andps xmm0, xmm2 */
L_1803df2ab_0:;
L_1803df2ab_1:;
wr(s->r,4608,4,(rd(s->r,4608,4)&rd(s->r,4736,4)));
L_1803df2ab_2:;
wr(s->r,4612,4,(rd(s->r,4612,4)&rd(s->r,4740,4)));
L_1803df2ab_3:;
wr(s->r,4616,4,(rd(s->r,4616,4)&rd(s->r,4744,4)));
L_1803df2ab_4:;
wr(s->r,4620,4,(rd(s->r,4620,4)&rd(s->r,4748,4)));
L_1803df2ab_5:;
/* 1803df2ae: mulss xmm0, xmm1 */
L_1803df2ae_0:;
L_1803df2ae_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803df2ae_2:;
/* 1803df2b2: movss dword ptr [rdi + rbx*4], xmm0 */
L_1803df2b2_0:;
L_1803df2b2_1:;
wr(s->u,0,8,(rd(s->r,24,8)*((U)UINT64_C(0x4))));
L_1803df2b2_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803df2b2_3:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803df2b2_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803df2b2_5:;
/* 1803df2b7: jmp 0x1803df3c0 */
L_1803df2b7_0:;
L_1803df2b7_1:;
return UINT64_C(0x1803df3c0);
L_1803df2b7_2:;
return UINT64_C(0x1803df2bc);
}
uint64_t b_1803df2bc(CPU*s){
/* 1803df2bc: mov eax, dword ptr [rsp + 0xd0] */
L_1803df2bc_0:;
L_1803df2bc_1:;
wr(s->u,24,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803df2bc_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803df2bc_3:;
wr(s->r,0,4,rd(s->u,32,4));
L_1803df2bc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803df2bc_5:;
/* 1803df2c3: mov rbp, qword ptr [rsp + 0x110] */
L_1803df2c3_0:;
L_1803df2c3_1:;
wr(s->u,24,8,(((U)UINT64_C(0x110))+rd(s->r,32,8)));
L_1803df2c3_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803df2c3_3:;
wr(s->r,40,8,rd(s->u,36,8));
L_1803df2c3_4:;
/* 1803df2cb: movsxd rdi, dword ptr [rsp + 0xb8] */
L_1803df2cb_0:;
L_1803df2cb_1:;
wr(s->u,24,8,(((U)UINT64_C(0xb8))+rd(s->r,32,8)));
L_1803df2cb_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803df2cb_3:;
wr(s->r,56,8,(U)sx(rd(s->u,32,4),4));
L_1803df2cb_4:;
/* 1803df2d3: movsxd rbx, dword ptr [rsp + 0x78] */
L_1803df2d3_0:;
L_1803df2d3_1:;
wr(s->u,0,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803df2d3_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df2d3_3:;
wr(s->r,24,8,(U)sx(rd(s->u,32,4),4));
L_1803df2d3_4:;
/* 1803df2d8: sub eax, edi */
L_1803df2d8_0:;
L_1803df2d8_1:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,56,4)));
L_1803df2d8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,56,4),4,1));
L_1803df2d8_3:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->r,56,4)));
L_1803df2d8_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803df2d8_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df2d8_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803df2d8_7:;
wr(s->u,44,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803df2d8_8:;
wr(s->u,48,1,pop(rd(s->u,44,4),4));
L_1803df2d8_9:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803df2d8_10:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803df2d8_11:;
/* 1803df2da: mov rcx, rbp */
L_1803df2da_0:;
L_1803df2da_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803df2da_2:;
/* 1803df2dd: lea rdx, [rbp + rbx*4] */
L_1803df2dd_0:;
L_1803df2dd_1:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x4))));
L_1803df2dd_2:;
wr(s->u,16,8,(rd(s->r,40,8)+rd(s->u,8,8)));
L_1803df2dd_3:;
wr(s->r,16,8,rd(s->u,16,8));
L_1803df2dd_4:;
/* 1803df2e2: movsxd r8, eax */
L_1803df2e2_0:;
L_1803df2e2_1:;
wr(s->r,128,8,(U)sx(rd(s->r,0,4),4));
L_1803df2e2_2:;
/* 1803df2e5: call 0x180609ade */
L_1803df2e5_0:;
L_1803df2e5_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df2e5_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df2ea)));
L_1803df2e5_3:;
return (uint64_t)UINT64_C(0x180609ade);
L_1803df2e5_4:;
return UINT64_C(0x1803df2ea);
}
uint64_t b_1803df2ea(CPU*s){
/* 1803df2ea: mov eax, dword ptr [rsp + 0x44] */
L_1803df2ea_0:;
L_1803df2ea_1:;
wr(s->u,16,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1803df2ea_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df2ea_3:;
wr(s->r,0,4,rd(s->u,48,4));
L_1803df2ea_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803df2ea_5:;
/* 1803df2ee: mov rdx, qword ptr [rsp + 0x1c8] */
L_1803df2ee_0:;
L_1803df2ee_1:;
wr(s->u,40,8,(((U)UINT64_C(0x1c8))+rd(s->r,32,8)));
L_1803df2ee_2:;
wr(s->u,52,8,mr((uint64_t)rd(s->u,40,8),8));
L_1803df2ee_3:;
wr(s->r,16,8,rd(s->u,52,8));
L_1803df2ee_4:;
/* 1803df2f6: sub eax, ebx */
L_1803df2f6_0:;
L_1803df2f6_1:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,24,4)));
L_1803df2f6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,24,4),4,1));
L_1803df2f6_3:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->r,24,4)));
L_1803df2f6_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803df2f6_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df2f6_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803df2f6_7:;
wr(s->u,60,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803df2f6_8:;
wr(s->u,64,1,pop(rd(s->u,60,4),4));
L_1803df2f6_9:;
wr(s->u,65,1,(rd(s->u,64,1)&((U)UINT64_C(0x1))));
L_1803df2f6_10:;
wr(s->r,514,1,(rd(s->u,65,1)==((U)UINT64_C(0x0))));
L_1803df2f6_11:;
/* 1803df2f8: mov r8, rdi */
L_1803df2f8_0:;
L_1803df2f8_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803df2f8_2:;
/* 1803df2fb: cdqe  */
L_1803df2fb_0:;
L_1803df2fb_1:;
wr(s->r,0,8,(U)sx(rd(s->r,0,4),4));
L_1803df2fb_2:;
/* 1803df2fd: lea rcx, [rbp + rax*4] */
L_1803df2fd_0:;
L_1803df2fd_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803df2fd_2:;
wr(s->u,32,8,(rd(s->r,40,8)+rd(s->u,24,8)));
L_1803df2fd_3:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803df2fd_4:;
/* 1803df302: movsxd rax, r15d */
L_1803df302_0:;
L_1803df302_1:;
wr(s->r,0,8,(U)sx(rd(s->r,184,4),4));
L_1803df302_2:;
/* 1803df305: mov rdx, qword ptr [rdx + rax*8] */
L_1803df305_0:;
L_1803df305_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803df305_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803df305_3:;
wr(s->u,52,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803df305_4:;
wr(s->r,16,8,rd(s->u,52,8));
L_1803df305_5:;
/* 1803df309: call 0x18000d550 */
L_1803df309_0:;
L_1803df309_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df309_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df30e)));
L_1803df309_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803df309_4:;
return UINT64_C(0x1803df30e);
}
uint64_t b_1803df30e(CPU*s){
/* 1803df30e: cmp dword ptr [rsp + 0x1d8], 0 */
L_1803df30e_0:;
L_1803df30e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1d8))+rd(s->r,32,8)));
L_1803df30e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df30e_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803df30e_4:;
wr(s->r,512,1,(rd(s->u,19,4)<((U)UINT64_C(0x0))));
L_1803df30e_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),((U)UINT64_C(0x0)),4,1));
L_1803df30e_6:;
wr(s->u,23,4,(rd(s->u,19,4)-((U)UINT64_C(0x0))));
L_1803df30e_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df30e_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803df30e_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803df30e_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803df30e_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803df30e_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803df30e_13:;
/* 1803df316: jl 0x1803df3c0 */
L_1803df316_0:;
L_1803df316_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df316_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803df3c0);}
L_1803df316_3:;
return UINT64_C(0x1803df31c);
}
uint64_t b_1803df31c(CPU*s){
/* 1803df31c: mov r15d, dword ptr [rsp + 0x20] */
L_1803df31c_0:;
L_1803df31c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803df31c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df31c_3:;
wr(s->r,184,4,rd(s->u,8,4));
L_1803df31c_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803df31c_5:;
/* 1803df321: mov rcx, qword ptr [rsp + 0x58] */
L_1803df321_0:;
L_1803df321_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803df321_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df321_3:;
wr(s->r,8,8,rd(s->u,12,8));
L_1803df321_4:;
/* 1803df326: mov edx, r15d */
L_1803df326_0:;
L_1803df326_1:;
wr(s->r,16,4,rd(s->r,184,4));
L_1803df326_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803df326_3:;
/* 1803df329: call qword ptr [rip + 0x63ee79] */
L_1803df329_0:;
L_1803df329_1:;
wr(s->u,20,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803df329_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df329_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df32f)));
L_1803df329_4:;
return (uint64_t)rd(s->u,20,8);
L_1803df329_5:;
return UINT64_C(0x1803df32f);
}
uint64_t b_1803df32f(CPU*s){
/* 1803df32f: movsxd r11, r14d */
L_1803df32f_0:;
L_1803df32f_1:;
wr(s->r,152,8,(U)sx(rd(s->r,176,4),4));
L_1803df32f_2:;
/* 1803df332: mov rcx, r12 */
L_1803df332_0:;
L_1803df332_1:;
wr(s->r,8,8,rd(s->r,160,8));
L_1803df332_2:;
/* 1803df335: lea rdi, [r11*4] */
L_1803df335_0:;
L_1803df335_1:;
wr(s->u,16,8,(rd(s->r,152,8)*((U)UINT64_C(0x4))));
L_1803df335_2:;
wr(s->r,56,8,rd(s->u,16,8));
L_1803df335_3:;
/* 1803df33d: mov r8, rdi */
L_1803df33d_0:;
L_1803df33d_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803df33d_2:;
/* 1803df340: lea rdx, [rdi + rbp] */
L_1803df340_0:;
L_1803df340_1:;
wr(s->u,0,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803df340_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803df340_3:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803df340_4:;
/* 1803df344: call 0x18000d550 */
L_1803df344_0:;
L_1803df344_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df344_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df349)));
L_1803df344_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803df344_4:;
return UINT64_C(0x1803df349);
}
uint64_t b_1803df349(CPU*s){
/* 1803df349: mov r13, qword ptr [rsp + 0x68] */
L_1803df349_0:;
L_1803df349_1:;
wr(s->u,16,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803df349_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df349_3:;
wr(s->r,168,8,rd(s->u,24,8));
L_1803df349_4:;
/* 1803df34e: mov r8d, r14d */
L_1803df34e_0:;
L_1803df34e_1:;
wr(s->r,128,4,rd(s->r,176,4));
L_1803df34e_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803df34e_3:;
/* 1803df351: lea rdx, [rdi + r13] */
L_1803df351_0:;
L_1803df351_1:;
wr(s->u,0,8,(rd(s->r,168,8)*((U)UINT64_C(0x1))));
L_1803df351_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803df351_3:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803df351_4:;
/* 1803df355: mov rcx, r12 */
L_1803df355_0:;
L_1803df355_1:;
wr(s->r,8,8,rd(s->r,160,8));
L_1803df355_2:;
/* 1803df358: call qword ptr [rip + 0x63ee7a] */
L_1803df358_0:;
L_1803df358_1:;
wr(s->u,32,8,mr(UINT64_C(0x180a1e1d8),8));
L_1803df358_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df358_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df35e)));
L_1803df358_4:;
return (uint64_t)rd(s->u,32,8);
L_1803df358_5:;
return UINT64_C(0x1803df35e);
}
uint64_t b_1803df35e(CPU*s){
/* 1803df35e: mov eax, r15d */
L_1803df35e_0:;
L_1803df35e_1:;
wr(s->r,0,4,rd(s->r,184,4));
L_1803df35e_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803df35e_3:;
/* 1803df361: mov r8, rdi */
L_1803df361_0:;
L_1803df361_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803df361_2:;
/* 1803df364: sub eax, r14d */
L_1803df364_0:;
L_1803df364_1:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,176,4)));
L_1803df364_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,176,4),4,1));
L_1803df364_3:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->r,176,4)));
L_1803df364_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803df364_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df364_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803df364_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803df364_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803df364_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803df364_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803df364_11:;
/* 1803df367: mov rdx, rbp */
L_1803df367_0:;
L_1803df367_1:;
wr(s->r,16,8,rd(s->r,40,8));
L_1803df367_2:;
/* 1803df36a: cdqe  */
L_1803df36a_0:;
L_1803df36a_1:;
wr(s->r,0,8,(U)sx(rd(s->r,0,4),4));
L_1803df36a_2:;
/* 1803df36c: lea rbx, [r12 + rax*4] */
L_1803df36c_0:;
L_1803df36c_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803df36c_2:;
wr(s->u,8,8,(rd(s->r,160,8)+rd(s->u,0,8)));
L_1803df36c_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803df36c_4:;
/* 1803df370: mov rcx, rbx */
L_1803df370_0:;
L_1803df370_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803df370_2:;
/* 1803df373: call 0x18000d550 */
L_1803df373_0:;
L_1803df373_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df373_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df378)));
L_1803df373_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803df373_4:;
return UINT64_C(0x1803df378);
}
uint64_t b_1803df378(CPU*s){
/* 1803df378: mov r8d, r14d */
L_1803df378_0:;
L_1803df378_1:;
wr(s->r,128,4,rd(s->r,176,4));
L_1803df378_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803df378_3:;
/* 1803df37b: mov rdx, r13 */
L_1803df37b_0:;
L_1803df37b_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803df37b_2:;
/* 1803df37e: mov rcx, rbx */
L_1803df37e_0:;
L_1803df37e_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803df37e_2:;
/* 1803df381: call qword ptr [rip + 0x63ee51] */
L_1803df381_0:;
L_1803df381_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1d8),8));
L_1803df381_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df381_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df387)));
L_1803df381_4:;
return (uint64_t)rd(s->u,0,8);
L_1803df381_5:;
return UINT64_C(0x1803df387);
}
uint64_t b_1803df387(CPU*s){
/* 1803df387: mov rax, qword ptr [rsp + 0x60] */
L_1803df387_0:;
L_1803df387_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803df387_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df387_3:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803df387_4:;
/* 1803df38c: mov r8, r12 */
L_1803df38c_0:;
L_1803df38c_1:;
wr(s->r,128,8,rd(s->r,160,8));
L_1803df38c_2:;
/* 1803df38f: mov r11, qword ptr [rax] */
L_1803df38f_0:;
L_1803df38f_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803df38f_2:;
wr(s->r,152,8,rd(s->u,8,8));
L_1803df38f_3:;
/* 1803df392: mov rdx, r12 */
L_1803df392_0:;
L_1803df392_1:;
wr(s->r,16,8,rd(s->r,160,8));
L_1803df392_2:;
/* 1803df395: mov rcx, rax */
L_1803df395_0:;
L_1803df395_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803df395_2:;
/* 1803df398: call qword ptr [r11] */
L_1803df398_0:;
L_1803df398_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,152,8),8));
L_1803df398_2:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803df398_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df398_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df39b)));
L_1803df398_5:;
return (uint64_t)rd(s->u,16,8);
L_1803df398_6:;
return UINT64_C(0x1803df39b);
}
uint64_t b_1803df39b(CPU*s){
/* 1803df39b: mov r14d, dword ptr [rsp + 0x28] */
L_1803df39b_0:;
L_1803df39b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803df39b_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df39b_3:;
wr(s->r,176,4,rd(s->u,8,4));
L_1803df39b_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803df39b_5:;
/* 1803df3a0: mov r8d, r15d */
L_1803df3a0_0:;
L_1803df3a0_1:;
wr(s->r,128,4,rd(s->r,184,4));
L_1803df3a0_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803df3a0_3:;
/* 1803df3a3: movss xmm1, dword ptr [rip + 0x26d899] */
L_1803df3a3_0:;
L_1803df3a3_1:;
wr(s->r,4672,4,mr(UINT64_C(0x18064cc44),4));
L_1803df3a3_2:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803df3a3_3:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803df3a3_4:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803df3a3_5:;
/* 1803df3ab: mov rcx, r12 */
L_1803df3ab_0:;
L_1803df3ab_1:;
wr(s->r,8,8,rd(s->r,160,8));
L_1803df3ab_2:;
/* 1803df3ae: movd xmm5, r14d */
L_1803df3ae_0:;
L_1803df3ae_1:;
wr(s->r,4928,16,rd(s->r,176,4));
L_1803df3ae_2:;
/* 1803df3b3: cvtdq2ps xmm5, xmm5 */
L_1803df3b3_0:;
L_1803df3b3_1:;
wr(s->r,4928,4,fb((double)sx(rd(s->r,4928,4),4),4));
L_1803df3b3_2:;
wr(s->r,4932,4,fb((double)sx(rd(s->r,4932,4),4),4));
L_1803df3b3_3:;
wr(s->r,4936,4,fb((double)sx(rd(s->r,4936,4),4),4));
L_1803df3b3_4:;
wr(s->r,4940,4,fb((double)sx(rd(s->r,4940,4),4),4));
L_1803df3b3_5:;
/* 1803df3b6: divss xmm1, xmm5 */
L_1803df3b6_0:;
L_1803df3b6_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4928,4),4),4));
L_1803df3b6_2:;
/* 1803df3ba: call qword ptr [rip + 0x63ee20] */
L_1803df3ba_0:;
L_1803df3ba_1:;
wr(s->u,12,8,mr(UINT64_C(0x180a1e1e0),8));
L_1803df3ba_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df3ba_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df3c0)));
L_1803df3ba_4:;
return (uint64_t)rd(s->u,12,8);
L_1803df3ba_5:;
return UINT64_C(0x1803df3c0);
}
uint64_t b_1803df3c0(CPU*s){
/* 1803df3c0: mov eax, dword ptr [rsi + 8] */
L_1803df3c0_0:;
L_1803df3c0_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x8))));
L_1803df3c0_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df3c0_3:;
wr(s->r,0,4,rd(s->u,32,4));
L_1803df3c0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803df3c0_5:;
/* 1803df3c3: movaps xmm10, xmmword ptr [rsp + 0x120] */
L_1803df3c3_0:;
L_1803df3c3_1:;
wr(s->u,8,8,(((U)UINT64_C(0x120))+rd(s->r,32,8)));
L_1803df3c3_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803df3c3_3:;
wr(s->u,54,16,rd(s->u,16,16));
L_1803df3c3_4:;
wr(s->r,5248,4,rd(s->u,54,4));
L_1803df3c3_5:;
wr(s->r,5252,4,rd(s->u,58,4));
L_1803df3c3_6:;
wr(s->r,5256,4,rd(s->u,62,4));
L_1803df3c3_7:;
wr(s->r,5260,4,rd(s->u,66,4));
L_1803df3c3_8:;
/* 1803df3cc: add rsp, 0x178 */
L_1803df3cc_0:;
L_1803df3cc_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x178)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803df3cc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x178)),8,0));
L_1803df3cc_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x178))));
L_1803df3cc_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df3cc_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803df3cc_6:;
wr(s->u,36,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803df3cc_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803df3cc_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803df3cc_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803df3cc_10:;
/* 1803df3d3: pop r15 */
L_1803df3d3_0:;
L_1803df3d3_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803df3d3_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df3d3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df3d3_4:;
wr(s->r,184,8,rd(s->u,46,8));
L_1803df3d3_5:;
/* 1803df3d5: pop r14 */
L_1803df3d5_0:;
L_1803df3d5_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803df3d5_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df3d5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df3d5_4:;
wr(s->r,176,8,rd(s->u,46,8));
L_1803df3d5_5:;
/* 1803df3d7: pop r13 */
L_1803df3d7_0:;
L_1803df3d7_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803df3d7_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df3d7_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df3d7_4:;
wr(s->r,168,8,rd(s->u,46,8));
L_1803df3d7_5:;
/* 1803df3d9: pop r12 */
L_1803df3d9_0:;
L_1803df3d9_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803df3d9_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df3d9_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df3d9_4:;
wr(s->r,160,8,rd(s->u,46,8));
L_1803df3d9_5:;
/* 1803df3db: pop rdi */
L_1803df3db_0:;
L_1803df3db_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803df3db_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df3db_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df3db_4:;
wr(s->r,56,8,rd(s->u,46,8));
L_1803df3db_5:;
/* 1803df3dc: pop rsi */
L_1803df3dc_0:;
L_1803df3dc_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803df3dc_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df3dc_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df3dc_4:;
wr(s->r,48,8,rd(s->u,46,8));
L_1803df3dc_5:;
/* 1803df3dd: pop rbp */
L_1803df3dd_0:;
L_1803df3dd_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803df3dd_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df3dd_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df3dd_4:;
wr(s->r,40,8,rd(s->u,46,8));
L_1803df3dd_5:;
/* 1803df3de: pop rbx */
L_1803df3de_0:;
L_1803df3de_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803df3de_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df3de_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df3de_4:;
wr(s->r,24,8,rd(s->u,46,8));
L_1803df3de_5:;
/* 1803df3df: ret  */
L_1803df3df_0:;
L_1803df3df_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df3df_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df3df_3:;
return (uint64_t)rd(s->r,648,8);
L_1803df3df_4:;
return UINT64_C(0x1803df3e0);
}
uint64_t b_1803df408(CPU*s){
/* 1803df408: mulps xmm2, xmmword ptr [rip + 0x280695] */
L_1803df408_0:;
L_1803df408_1:;
wr(s->u,54,16,mr(UINT64_C(0x18065faa4),16));
L_1803df408_2:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,54,4),4),4));
L_1803df408_3:;
wr(s->r,4740,4,fb(fv(rd(s->r,4740,4),4)*fv(rd(s->u,58,4),4),4));
L_1803df408_4:;
wr(s->r,4744,4,fb(fv(rd(s->r,4744,4),4)*fv(rd(s->u,62,4),4),4));
L_1803df408_5:;
wr(s->r,4748,4,fb(fv(rd(s->r,4748,4),4)*fv(rd(s->u,66,4),4),4));
L_1803df408_6:;
/* 1803df40f: mulss xmm4, xmm5 */
L_1803df40f_0:;
L_1803df40f_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803df40f_2:;
/* 1803df413: movaps xmm3, xmm4 */
L_1803df413_0:;
L_1803df413_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803df413_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803df413_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803df413_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803df413_5:;
/* 1803df416: movss dword ptr [rcx + 0x28], xmm4 */
L_1803df416_0:;
L_1803df416_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x28))));
L_1803df416_2:;
wr(s->u,8,4,rd(s->r,4864,4));
L_1803df416_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df416_4:;
/* 1803df41b: mulss xmm3, xmm1 */
L_1803df41b_0:;
L_1803df41b_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803df41b_2:;
/* 1803df41f: movaps xmm0, xmm3 */
L_1803df41f_0:;
L_1803df41f_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803df41f_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803df41f_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803df41f_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803df41f_5:;
/* 1803df422: subss xmm0, xmm2 */
L_1803df422_0:;
L_1803df422_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803df422_2:;
/* 1803df426: subss xmm2, xmm3 */
L_1803df426_0:;
L_1803df426_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803df426_2:;
/* 1803df42a: addss xmm0, dword ptr [rip + 0x26d812] */
L_1803df42a_0:;
L_1803df42a_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(mr(UINT64_C(0x18064cc44),4),4),4));
L_1803df42a_2:;
/* 1803df432: movss dword ptr [rcx + 0x1c], xmm2 */
L_1803df432_0:;
L_1803df432_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x1c))));
L_1803df432_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803df432_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df432_4:;
/* 1803df437: movss dword ptr [rcx + 0x10], xmm0 */
L_1803df437_0:;
L_1803df437_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803df437_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803df437_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df437_4:;
/* 1803df43c: movaps xmm0, xmm6 */
L_1803df43c_0:;
L_1803df43c_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803df43c_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803df43c_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803df43c_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803df43c_5:;
/* 1803df43f: mulss xmm0, xmm1 */
L_1803df43f_0:;
L_1803df43f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803df43f_2:;
/* 1803df443: movaps xmm1, xmm4 */
L_1803df443_0:;
L_1803df443_1:;
wr(s->r,4672,4,rd(s->r,4864,4));
L_1803df443_2:;
wr(s->r,4676,4,rd(s->r,4868,4));
L_1803df443_3:;
wr(s->r,4680,4,rd(s->r,4872,4));
L_1803df443_4:;
wr(s->r,4684,4,rd(s->r,4876,4));
L_1803df443_5:;
/* 1803df446: subss xmm4, xmm6 */
L_1803df446_0:;
L_1803df446_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803df446_2:;
/* 1803df44a: movaps xmm6, xmmword ptr [rsp] */
L_1803df44a_0:;
L_1803df44a_1:;
wr(s->u,12,16,mr((uint64_t)rd(s->r,32,8),16));
L_1803df44a_2:;
wr(s->u,38,16,rd(s->u,12,16));
L_1803df44a_3:;
wr(s->r,4992,4,rd(s->u,38,4));
L_1803df44a_4:;
wr(s->r,4996,4,rd(s->u,42,4));
L_1803df44a_5:;
wr(s->r,5000,4,rd(s->u,46,4));
L_1803df44a_6:;
wr(s->r,5004,4,rd(s->u,50,4));
L_1803df44a_7:;
/* 1803df44e: subss xmm1, xmm0 */
L_1803df44e_0:;
L_1803df44e_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803df44e_2:;
/* 1803df452: movss dword ptr [rcx + 0x18], xmm4 */
L_1803df452_0:;
L_1803df452_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x18))));
L_1803df452_2:;
wr(s->u,8,4,rd(s->r,4864,4));
L_1803df452_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df452_4:;
/* 1803df457: addss xmm1, xmm5 */
L_1803df457_0:;
L_1803df457_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803df457_2:;
/* 1803df45b: movss dword ptr [rcx + 0x14], xmm1 */
L_1803df45b_0:;
L_1803df45b_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x14))));
L_1803df45b_2:;
wr(s->u,8,4,rd(s->r,4672,4));
L_1803df45b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df45b_4:;
/* 1803df460: add rsp, 0x18 */
L_1803df460_0:;
L_1803df460_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x18)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803df460_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x18)),8,0));
L_1803df460_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x18))));
L_1803df460_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df460_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803df460_6:;
wr(s->u,28,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803df460_7:;
wr(s->u,36,1,pop(rd(s->u,28,8),8));
L_1803df460_8:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803df460_9:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803df460_10:;
/* 1803df464: ret  */
L_1803df464_0:;
L_1803df464_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df464_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df464_3:;
return (uint64_t)rd(s->r,648,8);
L_1803df464_4:;
return UINT64_C(0x1803df465);
}
uint64_t b_1803df418(CPU*s){
/* 1803df418: adc dword ptr [rcx + 0x28], esp */
L_1803df418_0:;
L_1803df418_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x28))));
L_1803df418_2:;
wr(s->u,28,4,rd(s->r,512,1));
L_1803df418_3:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df418_4:;
wr(s->r,512,1,(((rd(s->u,8,4)+rd(s->r,32,4))&(((U)1<<32)-1))<rd(s->u,8,4)));
L_1803df418_5:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df418_6:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,32,4),4,0));
L_1803df418_7:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df418_8:;
wr(s->u,32,4,(rd(s->u,8,4)+rd(s->r,32,4)));
L_1803df418_9:;
wr(s->u,36,1,(((rd(s->u,32,4)+rd(s->u,28,4))&(((U)1<<32)-1))<rd(s->u,32,4)));
L_1803df418_10:;
wr(s->r,512,1,((rd(s->r,512,1)!=0)||(rd(s->u,36,1)!=0)));
L_1803df418_11:;
wr(s->u,37,1,signed_overflow(rd(s->u,32,4),rd(s->u,28,4),4,0));
L_1803df418_12:;
wr(s->r,523,1,((rd(s->r,523,1)!=0)!=(rd(s->u,37,1)!=0)));
L_1803df418_13:;
wr(s->u,8,4,(rd(s->u,32,4)+rd(s->u,28,4)));
L_1803df418_14:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df418_15:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df418_16:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df418_17:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df418_18:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803df418_19:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df418_20:;
wr(s->u,38,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803df418_21:;
wr(s->u,46,1,pop(rd(s->u,38,4),4));
L_1803df418_22:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803df418_23:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803df418_24:;
/* 1803df41b: mulss xmm3, xmm1 */
L_1803df41b_0:;
L_1803df41b_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803df41b_2:;
/* 1803df41f: movaps xmm0, xmm3 */
L_1803df41f_0:;
L_1803df41f_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803df41f_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803df41f_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803df41f_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803df41f_5:;
/* 1803df422: subss xmm0, xmm2 */
L_1803df422_0:;
L_1803df422_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803df422_2:;
/* 1803df426: subss xmm2, xmm3 */
L_1803df426_0:;
L_1803df426_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803df426_2:;
/* 1803df42a: addss xmm0, dword ptr [rip + 0x26d812] */
L_1803df42a_0:;
L_1803df42a_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(mr(UINT64_C(0x18064cc44),4),4),4));
L_1803df42a_2:;
/* 1803df432: movss dword ptr [rcx + 0x1c], xmm2 */
L_1803df432_0:;
L_1803df432_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x1c))));
L_1803df432_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803df432_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df432_4:;
/* 1803df437: movss dword ptr [rcx + 0x10], xmm0 */
L_1803df437_0:;
L_1803df437_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803df437_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803df437_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df437_4:;
/* 1803df43c: movaps xmm0, xmm6 */
L_1803df43c_0:;
L_1803df43c_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803df43c_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803df43c_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803df43c_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803df43c_5:;
/* 1803df43f: mulss xmm0, xmm1 */
L_1803df43f_0:;
L_1803df43f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803df43f_2:;
/* 1803df443: movaps xmm1, xmm4 */
L_1803df443_0:;
L_1803df443_1:;
wr(s->r,4672,4,rd(s->r,4864,4));
L_1803df443_2:;
wr(s->r,4676,4,rd(s->r,4868,4));
L_1803df443_3:;
wr(s->r,4680,4,rd(s->r,4872,4));
L_1803df443_4:;
wr(s->r,4684,4,rd(s->r,4876,4));
L_1803df443_5:;
/* 1803df446: subss xmm4, xmm6 */
L_1803df446_0:;
L_1803df446_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803df446_2:;
/* 1803df44a: movaps xmm6, xmmword ptr [rsp] */
L_1803df44a_0:;
L_1803df44a_1:;
wr(s->u,12,16,mr((uint64_t)rd(s->r,32,8),16));
L_1803df44a_2:;
wr(s->u,48,16,rd(s->u,12,16));
L_1803df44a_3:;
wr(s->r,4992,4,rd(s->u,48,4));
L_1803df44a_4:;
wr(s->r,4996,4,rd(s->u,52,4));
L_1803df44a_5:;
wr(s->r,5000,4,rd(s->u,56,4));
L_1803df44a_6:;
wr(s->r,5004,4,rd(s->u,60,4));
L_1803df44a_7:;
/* 1803df44e: subss xmm1, xmm0 */
L_1803df44e_0:;
L_1803df44e_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803df44e_2:;
/* 1803df452: movss dword ptr [rcx + 0x18], xmm4 */
L_1803df452_0:;
L_1803df452_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x18))));
L_1803df452_2:;
wr(s->u,8,4,rd(s->r,4864,4));
L_1803df452_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df452_4:;
/* 1803df457: addss xmm1, xmm5 */
L_1803df457_0:;
L_1803df457_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803df457_2:;
/* 1803df45b: movss dword ptr [rcx + 0x14], xmm1 */
L_1803df45b_0:;
L_1803df45b_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x14))));
L_1803df45b_2:;
wr(s->u,8,4,rd(s->r,4672,4));
L_1803df45b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df45b_4:;
/* 1803df460: add rsp, 0x18 */
L_1803df460_0:;
L_1803df460_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x18)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803df460_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x18)),8,0));
L_1803df460_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x18))));
L_1803df460_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df460_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803df460_6:;
wr(s->u,38,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803df460_7:;
wr(s->u,46,1,pop(rd(s->u,38,8),8));
L_1803df460_8:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803df460_9:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803df460_10:;
/* 1803df464: ret  */
L_1803df464_0:;
L_1803df464_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df464_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df464_3:;
return (uint64_t)rd(s->r,648,8);
L_1803df464_4:;
return UINT64_C(0x1803df465);
}
uint64_t b_1803df510(CPU*s){
/* 1803df510: mov qword ptr [rsp + 0x18], rbx */
L_1803df510_0:;
L_1803df510_1:;
wr(s->u,8,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803df510_2:;
wr(s->u,20,8,rd(s->r,24,8));
L_1803df510_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803df510_4:;
/* 1803df515: push rsi */
L_1803df515_0:;
L_1803df515_1:;
wr(s->u,28,8,rd(s->r,48,8));
L_1803df515_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df515_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,28,8));
L_1803df515_4:;
/* 1803df516: push rdi */
L_1803df516_0:;
L_1803df516_1:;
wr(s->u,28,8,rd(s->r,56,8));
L_1803df516_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df516_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,28,8));
L_1803df516_4:;
/* 1803df517: push r13 */
L_1803df517_0:;
L_1803df517_1:;
wr(s->u,28,8,rd(s->r,168,8));
L_1803df517_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df517_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,28,8));
L_1803df517_4:;
/* 1803df519: sub rsp, 0x20 */
L_1803df519_0:;
L_1803df519_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803df519_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803df519_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803df519_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df519_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803df519_6:;
wr(s->u,36,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803df519_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803df519_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803df519_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803df519_10:;
/* 1803df51d: xor edi, edi */
L_1803df51d_0:;
L_1803df51d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803df51d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803df51d_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803df51d_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803df51d_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df51d_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803df51d_7:;
wr(s->u,36,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803df51d_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1803df51d_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803df51d_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803df51d_11:;
/* 1803df51f: mov dword ptr [rcx + 0x38], edx */
L_1803df51f_0:;
L_1803df51f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x38))));
L_1803df51f_2:;
wr(s->u,16,4,rd(s->r,16,4));
L_1803df51f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803df51f_4:;
/* 1803df522: lea rax, [rip + 0x42d44f] */
L_1803df522_0:;
L_1803df522_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080c978)));
L_1803df522_2:;
/* 1803df529: mov qword ptr [rcx], rax */
L_1803df529_0:;
L_1803df529_1:;
wr(s->u,20,8,rd(s->r,0,8));
L_1803df529_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,20,8));
L_1803df529_3:;
/* 1803df52c: movsxd rdx, edx */
L_1803df52c_0:;
L_1803df52c_1:;
wr(s->r,16,8,(U)sx(rd(s->r,16,4),4));
L_1803df52c_2:;
/* 1803df52f: mov rbx, rcx */
L_1803df52f_0:;
L_1803df52f_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803df52f_2:;
/* 1803df532: mov dword ptr [rcx + 0x3c], r8d */
L_1803df532_0:;
L_1803df532_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x3c))));
L_1803df532_2:;
wr(s->u,16,4,rd(s->r,128,4));
L_1803df532_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803df532_4:;
/* 1803df536: mov qword ptr [rcx + 0x48], rdi */
L_1803df536_0:;
L_1803df536_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x48))));
L_1803df536_2:;
wr(s->u,20,8,rd(s->r,56,8));
L_1803df536_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_1803df536_4:;
/* 1803df53a: mov dword ptr [rcx + 0x34], edi */
L_1803df53a_0:;
L_1803df53a_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x34))));
L_1803df53a_2:;
wr(s->u,16,4,rd(s->r,56,4));
L_1803df53a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803df53a_4:;
/* 1803df53d: mov dword ptr [rcx + 0x40], edi */
L_1803df53d_0:;
L_1803df53d_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x40))));
L_1803df53d_2:;
wr(s->u,16,4,rd(s->r,56,4));
L_1803df53d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803df53d_4:;
/* 1803df540: mov dword ptr [rcx + 0x20], edi */
L_1803df540_0:;
L_1803df540_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x20))));
L_1803df540_2:;
wr(s->u,16,4,rd(s->r,56,4));
L_1803df540_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803df540_4:;
/* 1803df543: mov eax, 8 */
L_1803df543_0:;
L_1803df543_1:;
wr(s->r,0,8,((U)UINT64_C(0x8)));
L_1803df543_2:;
/* 1803df548: mov r13, 0xffffffffffffffff */
L_1803df548_0:;
L_1803df548_1:;
wr(s->r,168,8,((U)UINT64_C(0xffffffffffffffff)));
L_1803df548_2:;
/* 1803df54f: mov esi, r8d */
L_1803df54f_0:;
L_1803df54f_1:;
wr(s->r,48,4,rd(s->r,128,4));
L_1803df54f_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803df54f_3:;
/* 1803df552: mul rdx */
L_1803df552_0:;
L_1803df552_1:;
wr(s->u,55,16,rd(s->r,0,8));
L_1803df552_2:;
wr(s->u,71,16,rd(s->r,16,8));
L_1803df552_3:;
wr(s->u,87,16,(rd(s->u,55,16)*rd(s->u,71,16)));
L_1803df552_4:;
wr(s->r,16,8,(rd(s->u,87,16) >> (((U)UINT64_C(0x8))*8)));
L_1803df552_5:;
wr(s->r,0,8,(rd(s->u,87,16) >> (((U)UINT64_C(0x0))*8)));
L_1803df552_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803df552_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803df552_8:;
/* 1803df555: cmovo rax, r13 */
L_1803df555_0:;
L_1803df555_1:;
wr(s->u,46,8,rd(s->r,168,8));
L_1803df555_2:;
wr(s->u,54,1,(!rd(s->r,523,1)));
L_1803df555_3:;
if(rd(s->u,54,1)){goto L_1803df559_0;}
L_1803df555_4:;
wr(s->r,0,8,rd(s->u,46,8));
L_1803df555_5:;
/* 1803df559: mov rcx, rax */
L_1803df559_0:;
L_1803df559_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803df559_2:;
/* 1803df55c: call 0x180003140 */
L_1803df55c_0:;
L_1803df55c_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df55c_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df561)));
L_1803df55c_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803df55c_4:;
return UINT64_C(0x1803df561);
}
uint64_t b_1803df559(CPU*s){
/* 1803df559: mov rcx, rax */
L_1803df559_0:;
L_1803df559_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803df559_2:;
/* 1803df55c: call 0x180003140 */
L_1803df55c_0:;
L_1803df55c_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df55c_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df561)));
L_1803df55c_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803df55c_4:;
return UINT64_C(0x1803df561);
}
uint64_t b_1803df561(CPU*s){
/* 1803df561: cmp dword ptr [rbx + 0x38], edi */
L_1803df561_0:;
L_1803df561_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803df561_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df561_3:;
wr(s->u,28,4,rd(s->u,16,4));
L_1803df561_4:;
wr(s->r,512,1,(rd(s->u,28,4)<rd(s->r,56,4)));
L_1803df561_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,28,4),rd(s->r,56,4),4,1));
L_1803df561_6:;
wr(s->u,32,4,(rd(s->u,28,4)-rd(s->r,56,4)));
L_1803df561_7:;
wr(s->r,519,1,(sx(rd(s->u,32,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df561_8:;
wr(s->r,518,1,(rd(s->u,32,4)==((U)UINT64_C(0x0))));
L_1803df561_9:;
wr(s->u,22,4,(rd(s->u,32,4)&((U)UINT64_C(0xff))));
L_1803df561_10:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803df561_11:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803df561_12:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803df561_13:;
/* 1803df564: mov qword ptr [rbx + 8], rax */
L_1803df564_0:;
L_1803df564_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df564_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803df564_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803df564_4:;
/* 1803df568: jle 0x1803df5dc */
L_1803df568_0:;
L_1803df568_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df568_2:;
wr(s->u,21,1,((rd(s->r,518,1)!=0)||(rd(s->u,20,1)!=0)));
L_1803df568_3:;
if(rd(s->u,21,1)){return UINT64_C(0x1803df5dc);}
L_1803df568_4:;
return UINT64_C(0x1803df56a);
}
uint64_t b_1803df56a(CPU*s){
/* 1803df56a: lea eax, [rsi + 4] */
L_1803df56a_0:;
L_1803df56a_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x4))));
L_1803df56a_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803df56a_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803df56a_4:;
/* 1803df56d: mov qword ptr [rsp + 0x40], rbp */
L_1803df56d_0:;
L_1803df56d_1:;
wr(s->u,16,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803df56d_2:;
wr(s->u,40,8,rd(s->r,40,8));
L_1803df56d_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,40,8));
L_1803df56d_4:;
/* 1803df572: mov qword ptr [rsp + 0x48], r12 */
L_1803df572_0:;
L_1803df572_1:;
wr(s->u,16,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803df572_2:;
wr(s->u,40,8,rd(s->r,160,8));
L_1803df572_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,40,8));
L_1803df572_4:;
/* 1803df577: movsxd rbp, eax */
L_1803df577_0:;
L_1803df577_1:;
wr(s->r,40,8,(U)sx(rd(s->r,0,4),4));
L_1803df577_2:;
/* 1803df57a: mov rsi, rdi */
L_1803df57a_0:;
L_1803df57a_1:;
wr(s->r,48,8,rd(s->r,56,8));
L_1803df57a_2:;
/* 1803df57d: lea r12, [rbp*4] */
L_1803df57d_0:;
L_1803df57d_1:;
wr(s->u,8,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803df57d_2:;
wr(s->r,160,8,rd(s->u,8,8));
L_1803df57d_3:;
/* 1803df585: nop word ptr [rax + rax] */
L_1803df585_0:;
L_1803df585_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803df585_2:;
wr(s->u,32,8,(rd(s->r,0,8)+rd(s->u,24,8)));
L_1803df585_3:;
/* 1803df590: mov eax, 4 */
L_1803df590_0:;
L_1803df590_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803df590_2:;
/* 1803df595: mul rbp */
L_1803df595_0:;
L_1803df595_1:;
wr(s->u,57,16,rd(s->r,0,8));
L_1803df595_2:;
wr(s->u,73,16,rd(s->r,40,8));
L_1803df595_3:;
wr(s->u,89,16,(rd(s->u,57,16)*rd(s->u,73,16)));
L_1803df595_4:;
wr(s->r,16,8,(rd(s->u,89,16) >> (((U)UINT64_C(0x8))*8)));
L_1803df595_5:;
wr(s->r,0,8,(rd(s->u,89,16) >> (((U)UINT64_C(0x0))*8)));
L_1803df595_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803df595_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803df595_8:;
/* 1803df598: cmovo rax, r13 */
L_1803df598_0:;
L_1803df598_1:;
wr(s->u,48,8,rd(s->r,168,8));
L_1803df598_2:;
wr(s->u,56,1,(!rd(s->r,523,1)));
L_1803df598_3:;
if(rd(s->u,56,1)){goto L_1803df59c_0;}
L_1803df598_4:;
wr(s->r,0,8,rd(s->u,48,8));
L_1803df598_5:;
/* 1803df59c: mov rcx, rax */
L_1803df59c_0:;
L_1803df59c_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803df59c_2:;
/* 1803df59f: call 0x180003140 */
L_1803df59f_0:;
L_1803df59f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df59f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df5a4)));
L_1803df59f_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803df59f_4:;
return UINT64_C(0x1803df5a4);
}
uint64_t b_1803df56d(CPU*s){
/* 1803df56d: mov qword ptr [rsp + 0x40], rbp */
L_1803df56d_0:;
L_1803df56d_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803df56d_2:;
wr(s->u,32,8,rd(s->r,40,8));
L_1803df56d_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,32,8));
L_1803df56d_4:;
/* 1803df572: mov qword ptr [rsp + 0x48], r12 */
L_1803df572_0:;
L_1803df572_1:;
wr(s->u,8,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803df572_2:;
wr(s->u,32,8,rd(s->r,160,8));
L_1803df572_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,32,8));
L_1803df572_4:;
/* 1803df577: movsxd rbp, eax */
L_1803df577_0:;
L_1803df577_1:;
wr(s->r,40,8,(U)sx(rd(s->r,0,4),4));
L_1803df577_2:;
/* 1803df57a: mov rsi, rdi */
L_1803df57a_0:;
L_1803df57a_1:;
wr(s->r,48,8,rd(s->r,56,8));
L_1803df57a_2:;
/* 1803df57d: lea r12, [rbp*4] */
L_1803df57d_0:;
L_1803df57d_1:;
wr(s->u,0,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803df57d_2:;
wr(s->r,160,8,rd(s->u,0,8));
L_1803df57d_3:;
/* 1803df585: nop word ptr [rax + rax] */
L_1803df585_0:;
L_1803df585_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803df585_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803df585_3:;
/* 1803df590: mov eax, 4 */
L_1803df590_0:;
L_1803df590_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803df590_2:;
/* 1803df595: mul rbp */
L_1803df595_0:;
L_1803df595_1:;
wr(s->u,49,16,rd(s->r,0,8));
L_1803df595_2:;
wr(s->u,65,16,rd(s->r,40,8));
L_1803df595_3:;
wr(s->u,81,16,(rd(s->u,49,16)*rd(s->u,65,16)));
L_1803df595_4:;
wr(s->r,16,8,(rd(s->u,81,16) >> (((U)UINT64_C(0x8))*8)));
L_1803df595_5:;
wr(s->r,0,8,(rd(s->u,81,16) >> (((U)UINT64_C(0x0))*8)));
L_1803df595_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803df595_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803df595_8:;
/* 1803df598: cmovo rax, r13 */
L_1803df598_0:;
L_1803df598_1:;
wr(s->u,40,8,rd(s->r,168,8));
L_1803df598_2:;
wr(s->u,48,1,(!rd(s->r,523,1)));
L_1803df598_3:;
if(rd(s->u,48,1)){goto L_1803df59c_0;}
L_1803df598_4:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803df598_5:;
/* 1803df59c: mov rcx, rax */
L_1803df59c_0:;
L_1803df59c_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803df59c_2:;
/* 1803df59f: call 0x180003140 */
L_1803df59f_0:;
L_1803df59f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df59f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df5a4)));
L_1803df59f_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803df59f_4:;
return UINT64_C(0x1803df5a4);
}
uint64_t b_1803df590(CPU*s){
/* 1803df590: mov eax, 4 */
L_1803df590_0:;
L_1803df590_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803df590_2:;
/* 1803df595: mul rbp */
L_1803df595_0:;
L_1803df595_1:;
wr(s->u,9,16,rd(s->r,0,8));
L_1803df595_2:;
wr(s->u,25,16,rd(s->r,40,8));
L_1803df595_3:;
wr(s->u,41,16,(rd(s->u,9,16)*rd(s->u,25,16)));
L_1803df595_4:;
wr(s->r,16,8,(rd(s->u,41,16) >> (((U)UINT64_C(0x8))*8)));
L_1803df595_5:;
wr(s->r,0,8,(rd(s->u,41,16) >> (((U)UINT64_C(0x0))*8)));
L_1803df595_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803df595_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803df595_8:;
/* 1803df598: cmovo rax, r13 */
L_1803df598_0:;
L_1803df598_1:;
wr(s->u,0,8,rd(s->r,168,8));
L_1803df598_2:;
wr(s->u,8,1,(!rd(s->r,523,1)));
L_1803df598_3:;
if(rd(s->u,8,1)){goto L_1803df59c_0;}
L_1803df598_4:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803df598_5:;
/* 1803df59c: mov rcx, rax */
L_1803df59c_0:;
L_1803df59c_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803df59c_2:;
/* 1803df59f: call 0x180003140 */
L_1803df59f_0:;
L_1803df59f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df59f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df5a4)));
L_1803df59f_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803df59f_4:;
return UINT64_C(0x1803df5a4);
}
uint64_t b_1803df59c(CPU*s){
/* 1803df59c: mov rcx, rax */
L_1803df59c_0:;
L_1803df59c_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803df59c_2:;
/* 1803df59f: call 0x180003140 */
L_1803df59f_0:;
L_1803df59f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df59f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df5a4)));
L_1803df59f_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803df59f_4:;
return UINT64_C(0x1803df5a4);
}
uint64_t b_1803df5a4(CPU*s){
/* 1803df5a4: mov rcx, qword ptr [rbx + 8] */
L_1803df5a4_0:;
L_1803df5a4_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df5a4_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df5a4_3:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803df5a4_4:;
/* 1803df5a8: mov r8, r12 */
L_1803df5a8_0:;
L_1803df5a8_1:;
wr(s->r,128,8,rd(s->r,160,8));
L_1803df5a8_2:;
/* 1803df5ab: mov qword ptr [rsi + rcx], rax */
L_1803df5ab_0:;
L_1803df5ab_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803df5ab_2:;
wr(s->u,16,8,(rd(s->r,48,8)+rd(s->u,8,8)));
L_1803df5ab_3:;
wr(s->u,24,8,rd(s->r,0,8));
L_1803df5ab_4:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803df5ab_5:;
/* 1803df5af: mov rcx, qword ptr [rbx + 8] */
L_1803df5af_0:;
L_1803df5af_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df5af_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df5af_3:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803df5af_4:;
/* 1803df5b3: xor edx, edx */
L_1803df5b3_0:;
L_1803df5b3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803df5b3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803df5b3_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803df5b3_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803df5b3_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df5b3_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803df5b3_7:;
wr(s->u,40,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803df5b3_8:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803df5b3_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803df5b3_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803df5b3_11:;
/* 1803df5b5: mov rcx, qword ptr [rcx + rsi] */
L_1803df5b5_0:;
L_1803df5b5_1:;
wr(s->u,8,8,(rd(s->r,48,8)*((U)UINT64_C(0x1))));
L_1803df5b5_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803df5b5_3:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df5b5_4:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803df5b5_5:;
/* 1803df5b9: call 0x18000d6a6 */
L_1803df5b9_0:;
L_1803df5b9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df5b9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df5be)));
L_1803df5b9_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803df5b9_4:;
return UINT64_C(0x1803df5be);
}
uint64_t b_1803df5be(CPU*s){
/* 1803df5be: mov r11, qword ptr [rbx + 8] */
L_1803df5be_0:;
L_1803df5be_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df5be_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df5be_3:;
wr(s->r,152,8,rd(s->u,36,8));
L_1803df5be_4:;
/* 1803df5c2: inc edi */
L_1803df5c2_0:;
L_1803df5c2_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),((U)UINT64_C(0x1)),4,0));
L_1803df5c2_2:;
wr(s->r,56,4,(rd(s->r,56,4)+((U)UINT64_C(0x1))));
L_1803df5c2_3:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803df5c2_4:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df5c2_5:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803df5c2_6:;
wr(s->u,45,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803df5c2_7:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803df5c2_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803df5c2_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803df5c2_10:;
/* 1803df5c4: add qword ptr [r11 + rsi], 0x10 */
L_1803df5c4_0:;
L_1803df5c4_1:;
wr(s->u,8,8,(rd(s->r,48,8)*((U)UINT64_C(0x1))));
L_1803df5c4_2:;
wr(s->u,16,8,(rd(s->r,152,8)+rd(s->u,8,8)));
L_1803df5c4_3:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df5c4_4:;
wr(s->r,512,1,(((rd(s->u,28,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->u,28,8)));
L_1803df5c4_5:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df5c4_6:;
wr(s->r,523,1,signed_overflow(rd(s->u,28,8),((U)UINT64_C(0x10)),8,0));
L_1803df5c4_7:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df5c4_8:;
wr(s->u,28,8,(rd(s->u,28,8)+((U)UINT64_C(0x10))));
L_1803df5c4_9:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803df5c4_10:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df5c4_11:;
wr(s->r,519,1,(sx(rd(s->u,28,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df5c4_12:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df5c4_13:;
wr(s->r,518,1,(rd(s->u,28,8)==((U)UINT64_C(0x0))));
L_1803df5c4_14:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df5c4_15:;
wr(s->u,45,8,(rd(s->u,28,8)&((U)UINT64_C(0xff))));
L_1803df5c4_16:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803df5c4_17:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803df5c4_18:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803df5c4_19:;
/* 1803df5c9: add rsi, 8 */
L_1803df5c9_0:;
L_1803df5c9_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803df5c9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x8)),8,0));
L_1803df5c9_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x8))));
L_1803df5c9_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df5c9_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803df5c9_6:;
wr(s->u,45,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803df5c9_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803df5c9_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803df5c9_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803df5c9_10:;
/* 1803df5cd: cmp edi, dword ptr [rbx + 0x38] */
L_1803df5cd_0:;
L_1803df5cd_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803df5cd_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df5cd_3:;
wr(s->u,55,4,rd(s->u,24,4));
L_1803df5cd_4:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->u,55,4)));
L_1803df5cd_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->u,55,4),4,1));
L_1803df5cd_6:;
wr(s->u,59,4,(rd(s->r,56,4)-rd(s->u,55,4)));
L_1803df5cd_7:;
wr(s->r,519,1,(sx(rd(s->u,59,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df5cd_8:;
wr(s->r,518,1,(rd(s->u,59,4)==((U)UINT64_C(0x0))));
L_1803df5cd_9:;
wr(s->u,45,4,(rd(s->u,59,4)&((U)UINT64_C(0xff))));
L_1803df5cd_10:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803df5cd_11:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803df5cd_12:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803df5cd_13:;
/* 1803df5d0: jl 0x1803df590 */
L_1803df5d0_0:;
L_1803df5d0_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df5d0_2:;
if(rd(s->u,44,1)){return UINT64_C(0x1803df590);}
L_1803df5d0_3:;
return UINT64_C(0x1803df5d2);
}
uint64_t b_1803df5d2(CPU*s){
/* 1803df5d2: mov r12, qword ptr [rsp + 0x48] */
L_1803df5d2_0:;
L_1803df5d2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803df5d2_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df5d2_3:;
wr(s->r,160,8,rd(s->u,8,8));
L_1803df5d2_4:;
/* 1803df5d7: mov rbp, qword ptr [rsp + 0x40] */
L_1803df5d7_0:;
L_1803df5d7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803df5d7_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df5d7_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803df5d7_4:;
/* 1803df5dc: mov rax, rbx */
L_1803df5dc_0:;
L_1803df5dc_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803df5dc_2:;
/* 1803df5df: mov rbx, qword ptr [rsp + 0x50] */
L_1803df5df_0:;
L_1803df5df_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803df5df_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df5df_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803df5df_4:;
/* 1803df5e4: add rsp, 0x20 */
L_1803df5e4_0:;
L_1803df5e4_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803df5e4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803df5e4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803df5e4_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df5e4_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803df5e4_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803df5e4_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803df5e4_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803df5e4_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803df5e4_10:;
/* 1803df5e8: pop r13 */
L_1803df5e8_0:;
L_1803df5e8_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803df5e8_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df5e8_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df5e8_4:;
wr(s->r,168,8,rd(s->u,26,8));
L_1803df5e8_5:;
/* 1803df5ea: pop rdi */
L_1803df5ea_0:;
L_1803df5ea_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803df5ea_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df5ea_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df5ea_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803df5ea_5:;
/* 1803df5eb: pop rsi */
L_1803df5eb_0:;
L_1803df5eb_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803df5eb_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df5eb_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df5eb_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1803df5eb_5:;
/* 1803df5ec: ret  */
L_1803df5ec_0:;
L_1803df5ec_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df5ec_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df5ec_3:;
return (uint64_t)rd(s->r,648,8);
L_1803df5ec_4:;
return UINT64_C(0x1803df5ed);
}
uint64_t b_1803df5dc(CPU*s){
/* 1803df5dc: mov rax, rbx */
L_1803df5dc_0:;
L_1803df5dc_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803df5dc_2:;
/* 1803df5df: mov rbx, qword ptr [rsp + 0x50] */
L_1803df5df_0:;
L_1803df5df_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803df5df_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df5df_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803df5df_4:;
/* 1803df5e4: add rsp, 0x20 */
L_1803df5e4_0:;
L_1803df5e4_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803df5e4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803df5e4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803df5e4_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df5e4_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803df5e4_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803df5e4_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803df5e4_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803df5e4_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803df5e4_10:;
/* 1803df5e8: pop r13 */
L_1803df5e8_0:;
L_1803df5e8_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803df5e8_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df5e8_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df5e8_4:;
wr(s->r,168,8,rd(s->u,26,8));
L_1803df5e8_5:;
/* 1803df5ea: pop rdi */
L_1803df5ea_0:;
L_1803df5ea_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803df5ea_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df5ea_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df5ea_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803df5ea_5:;
/* 1803df5eb: pop rsi */
L_1803df5eb_0:;
L_1803df5eb_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803df5eb_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df5eb_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df5eb_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1803df5eb_5:;
/* 1803df5ec: ret  */
L_1803df5ec_0:;
L_1803df5ec_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df5ec_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df5ec_3:;
return (uint64_t)rd(s->r,648,8);
L_1803df5ec_4:;
return UINT64_C(0x1803df5ed);
}
uint64_t b_1803df5f0(CPU*s){
/* 1803df5f0: mov qword ptr [rsp + 0x10], rbx */
L_1803df5f0_0:;
L_1803df5f0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803df5f0_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803df5f0_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803df5f0_4:;
/* 1803df5f5: push rsi */
L_1803df5f5_0:;
L_1803df5f5_1:;
wr(s->u,30,8,rd(s->r,48,8));
L_1803df5f5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df5f5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,30,8));
L_1803df5f5_4:;
/* 1803df5f6: sub rsp, 0x20 */
L_1803df5f6_0:;
L_1803df5f6_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803df5f6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803df5f6_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803df5f6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df5f6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803df5f6_6:;
wr(s->u,38,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803df5f6_7:;
wr(s->u,46,1,pop(rd(s->u,38,8),8));
L_1803df5f6_8:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803df5f6_9:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803df5f6_10:;
/* 1803df5fa: lea rax, [rip + 0x42d377] */
L_1803df5fa_0:;
L_1803df5fa_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080c978)));
L_1803df5fa_2:;
/* 1803df601: xor esi, esi */
L_1803df601_0:;
L_1803df601_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803df601_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803df601_3:;
wr(s->r,48,4,(rd(s->r,48,4)^rd(s->r,48,4)));
L_1803df601_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803df601_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df601_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803df601_7:;
wr(s->u,38,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803df601_8:;
wr(s->u,46,1,pop(rd(s->u,38,4),4));
L_1803df601_9:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803df601_10:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803df601_11:;
/* 1803df603: mov rbx, rcx */
L_1803df603_0:;
L_1803df603_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803df603_2:;
/* 1803df606: cmp dword ptr [rcx + 0x38], esi */
L_1803df606_0:;
L_1803df606_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x38))));
L_1803df606_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df606_3:;
wr(s->u,48,4,rd(s->u,24,4));
L_1803df606_4:;
wr(s->r,512,1,(rd(s->u,48,4)<rd(s->r,48,4)));
L_1803df606_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,48,4),rd(s->r,48,4),4,1));
L_1803df606_6:;
wr(s->u,52,4,(rd(s->u,48,4)-rd(s->r,48,4)));
L_1803df606_7:;
wr(s->r,519,1,(sx(rd(s->u,52,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df606_8:;
wr(s->r,518,1,(rd(s->u,52,4)==((U)UINT64_C(0x0))));
L_1803df606_9:;
wr(s->u,38,4,(rd(s->u,52,4)&((U)UINT64_C(0xff))));
L_1803df606_10:;
wr(s->u,46,1,pop(rd(s->u,38,4),4));
L_1803df606_11:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803df606_12:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803df606_13:;
/* 1803df609: mov qword ptr [rcx], rax */
L_1803df609_0:;
L_1803df609_1:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803df609_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,16,8));
L_1803df609_3:;
/* 1803df60c: jle 0x1803df646 */
L_1803df60c_0:;
L_1803df60c_1:;
wr(s->u,28,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df60c_2:;
wr(s->u,29,1,((rd(s->r,518,1)!=0)||(rd(s->u,28,1)!=0)));
L_1803df60c_3:;
if(rd(s->u,29,1)){return UINT64_C(0x1803df646);}
L_1803df60c_4:;
return UINT64_C(0x1803df60e);
}
uint64_t b_1803df60e(CPU*s){
/* 1803df60e: mov qword ptr [rsp + 0x30], rdi */
L_1803df60e_0:;
L_1803df60e_1:;
wr(s->u,24,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803df60e_2:;
wr(s->u,48,8,rd(s->r,56,8));
L_1803df60e_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,48,8));
L_1803df60e_4:;
/* 1803df613: mov rdi, rsi */
L_1803df613_0:;
L_1803df613_1:;
wr(s->r,56,8,rd(s->r,48,8));
L_1803df613_2:;
/* 1803df616: nop word ptr [rax + rax] */
L_1803df616_0:;
L_1803df616_1:;
wr(s->u,32,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803df616_2:;
wr(s->u,40,8,(rd(s->r,0,8)+rd(s->u,32,8)));
L_1803df616_3:;
/* 1803df620: mov rax, qword ptr [rbx + 8] */
L_1803df620_0:;
L_1803df620_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df620_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df620_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803df620_4:;
/* 1803df624: add qword ptr [rax + rdi], -0x10 */
L_1803df624_0:;
L_1803df624_1:;
wr(s->u,8,8,(rd(s->r,56,8)*((U)UINT64_C(0x1))));
L_1803df624_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803df624_3:;
wr(s->u,48,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df624_4:;
wr(s->r,512,1,(((rd(s->u,48,8)+((U)UINT64_C(0xfffffffffffffff0)))&(((U)1<<64)-1))<rd(s->u,48,8)));
L_1803df624_5:;
wr(s->u,48,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df624_6:;
wr(s->r,523,1,signed_overflow(rd(s->u,48,8),((U)UINT64_C(0xfffffffffffffff0)),8,0));
L_1803df624_7:;
wr(s->u,48,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df624_8:;
wr(s->u,48,8,(rd(s->u,48,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803df624_9:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,48,8));
L_1803df624_10:;
wr(s->u,48,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df624_11:;
wr(s->r,519,1,(sx(rd(s->u,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df624_12:;
wr(s->u,48,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df624_13:;
wr(s->r,518,1,(rd(s->u,48,8)==((U)UINT64_C(0x0))));
L_1803df624_14:;
wr(s->u,48,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df624_15:;
wr(s->u,64,8,(rd(s->u,48,8)&((U)UINT64_C(0xff))));
L_1803df624_16:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803df624_17:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803df624_18:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803df624_19:;
/* 1803df629: mov rcx, qword ptr [rbx + 8] */
L_1803df629_0:;
L_1803df629_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df629_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df629_3:;
wr(s->r,8,8,rd(s->u,56,8));
L_1803df629_4:;
/* 1803df62d: mov rcx, qword ptr [rcx + rdi] */
L_1803df62d_0:;
L_1803df62d_1:;
wr(s->u,8,8,(rd(s->r,56,8)*((U)UINT64_C(0x1))));
L_1803df62d_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803df62d_3:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df62d_4:;
wr(s->r,8,8,rd(s->u,56,8));
L_1803df62d_5:;
/* 1803df631: call 0x180003160 */
L_1803df631_0:;
L_1803df631_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df631_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df636)));
L_1803df631_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803df631_4:;
return UINT64_C(0x1803df636);
}
uint64_t b_1803df620(CPU*s){
/* 1803df620: mov rax, qword ptr [rbx + 8] */
L_1803df620_0:;
L_1803df620_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df620_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df620_3:;
wr(s->r,0,8,rd(s->u,32,8));
L_1803df620_4:;
/* 1803df624: add qword ptr [rax + rdi], -0x10 */
L_1803df624_0:;
L_1803df624_1:;
wr(s->u,8,8,(rd(s->r,56,8)*((U)UINT64_C(0x1))));
L_1803df624_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803df624_3:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df624_4:;
wr(s->r,512,1,(((rd(s->u,24,8)+((U)UINT64_C(0xfffffffffffffff0)))&(((U)1<<64)-1))<rd(s->u,24,8)));
L_1803df624_5:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df624_6:;
wr(s->r,523,1,signed_overflow(rd(s->u,24,8),((U)UINT64_C(0xfffffffffffffff0)),8,0));
L_1803df624_7:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df624_8:;
wr(s->u,24,8,(rd(s->u,24,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803df624_9:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803df624_10:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df624_11:;
wr(s->r,519,1,(sx(rd(s->u,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df624_12:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df624_13:;
wr(s->r,518,1,(rd(s->u,24,8)==((U)UINT64_C(0x0))));
L_1803df624_14:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df624_15:;
wr(s->u,40,8,(rd(s->u,24,8)&((U)UINT64_C(0xff))));
L_1803df624_16:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803df624_17:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803df624_18:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803df624_19:;
/* 1803df629: mov rcx, qword ptr [rbx + 8] */
L_1803df629_0:;
L_1803df629_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df629_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df629_3:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803df629_4:;
/* 1803df62d: mov rcx, qword ptr [rcx + rdi] */
L_1803df62d_0:;
L_1803df62d_1:;
wr(s->u,8,8,(rd(s->r,56,8)*((U)UINT64_C(0x1))));
L_1803df62d_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803df62d_3:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df62d_4:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803df62d_5:;
/* 1803df631: call 0x180003160 */
L_1803df631_0:;
L_1803df631_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df631_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df636)));
L_1803df631_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803df631_4:;
return UINT64_C(0x1803df636);
}
uint64_t b_1803df636(CPU*s){
/* 1803df636: inc esi */
L_1803df636_0:;
L_1803df636_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),((U)UINT64_C(0x1)),4,0));
L_1803df636_2:;
wr(s->r,48,4,(rd(s->r,48,4)+((U)UINT64_C(0x1))));
L_1803df636_3:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803df636_4:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df636_5:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803df636_6:;
wr(s->u,13,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803df636_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803df636_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803df636_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803df636_10:;
/* 1803df638: add rdi, 8 */
L_1803df638_0:;
L_1803df638_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803df638_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x8)),8,0));
L_1803df638_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803df638_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df638_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803df638_6:;
wr(s->u,13,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803df638_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803df638_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803df638_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803df638_10:;
/* 1803df63c: cmp esi, dword ptr [rbx + 0x38] */
L_1803df63c_0:;
L_1803df63c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803df63c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df63c_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803df63c_4:;
wr(s->r,512,1,(rd(s->r,48,4)<rd(s->u,23,4)));
L_1803df63c_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),rd(s->u,23,4),4,1));
L_1803df63c_6:;
wr(s->u,27,4,(rd(s->r,48,4)-rd(s->u,23,4)));
L_1803df63c_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df63c_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803df63c_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803df63c_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803df63c_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803df63c_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803df63c_13:;
/* 1803df63f: jl 0x1803df620 */
L_1803df63f_0:;
L_1803df63f_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df63f_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803df620);}
L_1803df63f_3:;
return UINT64_C(0x1803df641);
}
uint64_t b_1803df641(CPU*s){
/* 1803df641: mov rdi, qword ptr [rsp + 0x30] */
L_1803df641_0:;
L_1803df641_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803df641_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803df641_3:;
wr(s->r,56,8,rd(s->u,16,8));
L_1803df641_4:;
/* 1803df646: mov rcx, qword ptr [rbx + 8] */
L_1803df646_0:;
L_1803df646_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df646_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df646_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803df646_4:;
/* 1803df64a: mov rbx, qword ptr [rsp + 0x38] */
L_1803df64a_0:;
L_1803df64a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803df64a_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803df64a_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803df64a_4:;
/* 1803df64f: add rsp, 0x20 */
L_1803df64f_0:;
L_1803df64f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803df64f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803df64f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803df64f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df64f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803df64f_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803df64f_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803df64f_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803df64f_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803df64f_10:;
/* 1803df653: pop rsi */
L_1803df653_0:;
L_1803df653_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803df653_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df653_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df653_4:;
wr(s->r,48,8,rd(s->u,34,8));
L_1803df653_5:;
/* 1803df654: jmp 0x180003160 */
L_1803df654_0:;
L_1803df654_1:;
return UINT64_C(0x180003160);
L_1803df654_2:;
return UINT64_C(0x1803df659);
}
uint64_t b_1803df646(CPU*s){
/* 1803df646: mov rcx, qword ptr [rbx + 8] */
L_1803df646_0:;
L_1803df646_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df646_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df646_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803df646_4:;
/* 1803df64a: mov rbx, qword ptr [rsp + 0x38] */
L_1803df64a_0:;
L_1803df64a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803df64a_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803df64a_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803df64a_4:;
/* 1803df64f: add rsp, 0x20 */
L_1803df64f_0:;
L_1803df64f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803df64f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803df64f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803df64f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df64f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803df64f_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803df64f_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803df64f_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803df64f_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803df64f_10:;
/* 1803df653: pop rsi */
L_1803df653_0:;
L_1803df653_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803df653_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df653_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df653_4:;
wr(s->r,48,8,rd(s->u,34,8));
L_1803df653_5:;
/* 1803df654: jmp 0x180003160 */
L_1803df654_0:;
L_1803df654_1:;
return UINT64_C(0x180003160);
L_1803df654_2:;
return UINT64_C(0x1803df659);
}
uint64_t b_1803df660(CPU*s){
/* 1803df660: mov rax, rsp */
L_1803df660_0:;
L_1803df660_1:;
wr(s->r,0,8,rd(s->r,32,8));
L_1803df660_2:;
/* 1803df663: mov qword ptr [rax + 0x20], r9 */
L_1803df663_0:;
L_1803df663_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x20))));
L_1803df663_2:;
wr(s->u,8,8,rd(s->r,136,8));
L_1803df663_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803df663_4:;
/* 1803df667: push rbx */
L_1803df667_0:;
L_1803df667_1:;
wr(s->u,22,8,rd(s->r,24,8));
L_1803df667_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df667_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,22,8));
L_1803df667_4:;
/* 1803df668: push rdi */
L_1803df668_0:;
L_1803df668_1:;
wr(s->u,22,8,rd(s->r,56,8));
L_1803df668_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df668_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,22,8));
L_1803df668_4:;
/* 1803df669: push r14 */
L_1803df669_0:;
L_1803df669_1:;
wr(s->u,22,8,rd(s->r,176,8));
L_1803df669_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df669_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,22,8));
L_1803df669_4:;
/* 1803df66b: push r15 */
L_1803df66b_0:;
L_1803df66b_1:;
wr(s->u,22,8,rd(s->r,184,8));
L_1803df66b_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df66b_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,22,8));
L_1803df66b_4:;
/* 1803df66d: sub rsp, 0x88 */
L_1803df66d_0:;
L_1803df66d_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x88))));
L_1803df66d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x88)),8,1));
L_1803df66d_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x88))));
L_1803df66d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df66d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803df66d_6:;
wr(s->u,30,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803df66d_7:;
wr(s->u,38,1,pop(rd(s->u,30,8),8));
L_1803df66d_8:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803df66d_9:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803df66d_10:;
/* 1803df674: xor edi, edi */
L_1803df674_0:;
L_1803df674_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803df674_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803df674_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803df674_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803df674_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df674_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803df674_7:;
wr(s->u,30,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803df674_8:;
wr(s->u,38,1,pop(rd(s->u,30,4),4));
L_1803df674_9:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803df674_10:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803df674_11:;
/* 1803df676: mov qword ptr [rax + 8], rbp */
L_1803df676_0:;
L_1803df676_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803df676_2:;
wr(s->u,8,8,rd(s->r,40,8));
L_1803df676_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803df676_4:;
/* 1803df67a: mov qword ptr [rax - 0x28], r13 */
L_1803df67a_0:;
L_1803df67a_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xffffffffffffffd8))));
L_1803df67a_2:;
wr(s->u,8,8,rd(s->r,168,8));
L_1803df67a_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803df67a_4:;
/* 1803df67e: cmp dword ptr [rcx + 0x38], edi */
L_1803df67e_0:;
L_1803df67e_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x38))));
L_1803df67e_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df67e_3:;
wr(s->u,40,4,rd(s->u,16,4));
L_1803df67e_4:;
wr(s->r,512,1,(rd(s->u,40,4)<rd(s->r,56,4)));
L_1803df67e_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,40,4),rd(s->r,56,4),4,1));
L_1803df67e_6:;
wr(s->u,44,4,(rd(s->u,40,4)-rd(s->r,56,4)));
L_1803df67e_7:;
wr(s->r,519,1,(sx(rd(s->u,44,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df67e_8:;
wr(s->r,518,1,(rd(s->u,44,4)==((U)UINT64_C(0x0))));
L_1803df67e_9:;
wr(s->u,30,4,(rd(s->u,44,4)&((U)UINT64_C(0xff))));
L_1803df67e_10:;
wr(s->u,38,1,pop(rd(s->u,30,4),4));
L_1803df67e_11:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803df67e_12:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803df67e_13:;
/* 1803df681: mov r11, r9 */
L_1803df681_0:;
L_1803df681_1:;
wr(s->r,152,8,rd(s->r,136,8));
L_1803df681_2:;
/* 1803df684: movsxd r14, r8d */
L_1803df684_0:;
L_1803df684_1:;
wr(s->r,176,8,(U)sx(rd(s->r,128,4),4));
L_1803df684_2:;
/* 1803df687: mov r13, rdx */
L_1803df687_0:;
L_1803df687_1:;
wr(s->r,168,8,rd(s->r,16,8));
L_1803df687_2:;
/* 1803df68a: mov rbx, rcx */
L_1803df68a_0:;
L_1803df68a_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803df68a_2:;
/* 1803df68d: mov r15d, edi */
L_1803df68d_0:;
L_1803df68d_1:;
wr(s->r,184,4,rd(s->r,56,4));
L_1803df68d_2:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803df68d_3:;
/* 1803df690: mov ebp, edi */
L_1803df690_0:;
L_1803df690_1:;
wr(s->r,40,4,rd(s->r,56,4));
L_1803df690_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803df690_3:;
/* 1803df692: jle 0x1803df6e7 */
L_1803df692_0:;
L_1803df692_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df692_2:;
wr(s->u,21,1,((rd(s->r,518,1)!=0)||(rd(s->u,20,1)!=0)));
L_1803df692_3:;
if(rd(s->u,21,1)){return UINT64_C(0x1803df6e7);}
L_1803df692_4:;
return UINT64_C(0x1803df694);
}
uint64_t b_1803df676(CPU*s){
/* 1803df676: mov qword ptr [rax + 8], rbp */
L_1803df676_0:;
L_1803df676_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803df676_2:;
wr(s->u,8,8,rd(s->r,40,8));
L_1803df676_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803df676_4:;
/* 1803df67a: mov qword ptr [rax - 0x28], r13 */
L_1803df67a_0:;
L_1803df67a_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xffffffffffffffd8))));
L_1803df67a_2:;
wr(s->u,8,8,rd(s->r,168,8));
L_1803df67a_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803df67a_4:;
/* 1803df67e: cmp dword ptr [rcx + 0x38], edi */
L_1803df67e_0:;
L_1803df67e_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x38))));
L_1803df67e_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df67e_3:;
wr(s->u,28,4,rd(s->u,16,4));
L_1803df67e_4:;
wr(s->r,512,1,(rd(s->u,28,4)<rd(s->r,56,4)));
L_1803df67e_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,28,4),rd(s->r,56,4),4,1));
L_1803df67e_6:;
wr(s->u,32,4,(rd(s->u,28,4)-rd(s->r,56,4)));
L_1803df67e_7:;
wr(s->r,519,1,(sx(rd(s->u,32,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df67e_8:;
wr(s->r,518,1,(rd(s->u,32,4)==((U)UINT64_C(0x0))));
L_1803df67e_9:;
wr(s->u,22,4,(rd(s->u,32,4)&((U)UINT64_C(0xff))));
L_1803df67e_10:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803df67e_11:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803df67e_12:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803df67e_13:;
/* 1803df681: mov r11, r9 */
L_1803df681_0:;
L_1803df681_1:;
wr(s->r,152,8,rd(s->r,136,8));
L_1803df681_2:;
/* 1803df684: movsxd r14, r8d */
L_1803df684_0:;
L_1803df684_1:;
wr(s->r,176,8,(U)sx(rd(s->r,128,4),4));
L_1803df684_2:;
/* 1803df687: mov r13, rdx */
L_1803df687_0:;
L_1803df687_1:;
wr(s->r,168,8,rd(s->r,16,8));
L_1803df687_2:;
/* 1803df68a: mov rbx, rcx */
L_1803df68a_0:;
L_1803df68a_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803df68a_2:;
/* 1803df68d: mov r15d, edi */
L_1803df68d_0:;
L_1803df68d_1:;
wr(s->r,184,4,rd(s->r,56,4));
L_1803df68d_2:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803df68d_3:;
/* 1803df690: mov ebp, edi */
L_1803df690_0:;
L_1803df690_1:;
wr(s->r,40,4,rd(s->r,56,4));
L_1803df690_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803df690_3:;
/* 1803df692: jle 0x1803df6e7 */
L_1803df692_0:;
L_1803df692_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df692_2:;
wr(s->u,21,1,((rd(s->r,518,1)!=0)||(rd(s->u,20,1)!=0)));
L_1803df692_3:;
if(rd(s->u,21,1)){return UINT64_C(0x1803df6e7);}
L_1803df692_4:;
return UINT64_C(0x1803df694);
}
uint64_t b_1803df694(CPU*s){
/* 1803df694: mov qword ptr [rax + 0x10], rsi */
L_1803df694_0:;
L_1803df694_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803df694_2:;
wr(s->u,48,8,rd(s->r,48,8));
L_1803df694_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,48,8));
L_1803df694_4:;
/* 1803df698: mov qword ptr [rax + 0x18], r12 */
L_1803df698_0:;
L_1803df698_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x18))));
L_1803df698_2:;
wr(s->u,48,8,rd(s->r,160,8));
L_1803df698_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,48,8));
L_1803df698_4:;
/* 1803df69c: lea r12, [r14*4] */
L_1803df69c_0:;
L_1803df69c_1:;
wr(s->u,24,8,(rd(s->r,176,8)*((U)UINT64_C(0x4))));
L_1803df69c_2:;
wr(s->r,160,8,rd(s->u,24,8));
L_1803df69c_3:;
/* 1803df6a4: mov rsi, rdi */
L_1803df6a4_0:;
L_1803df6a4_1:;
wr(s->r,48,8,rd(s->r,56,8));
L_1803df6a4_2:;
/* 1803df6a7: nop word ptr [rax + rax] */
L_1803df6a7_0:;
L_1803df6a7_1:;
wr(s->u,32,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803df6a7_2:;
wr(s->u,40,8,(rd(s->r,0,8)+rd(s->u,32,8)));
L_1803df6a7_3:;
/* 1803df6b0: mov rcx, qword ptr [rbx + 8] */
L_1803df6b0_0:;
L_1803df6b0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df6b0_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df6b0_3:;
wr(s->r,8,8,rd(s->u,56,8));
L_1803df6b0_4:;
/* 1803df6b4: mov rdx, qword ptr [rsi + r13] */
L_1803df6b4_0:;
L_1803df6b4_1:;
wr(s->u,8,8,(rd(s->r,168,8)*((U)UINT64_C(0x1))));
L_1803df6b4_2:;
wr(s->u,16,8,(rd(s->r,48,8)+rd(s->u,8,8)));
L_1803df6b4_3:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df6b4_4:;
wr(s->r,16,8,rd(s->u,56,8));
L_1803df6b4_5:;
/* 1803df6b8: mov r8, r12 */
L_1803df6b8_0:;
L_1803df6b8_1:;
wr(s->r,128,8,rd(s->r,160,8));
L_1803df6b8_2:;
/* 1803df6bb: mov rcx, qword ptr [rsi + rcx] */
L_1803df6bb_0:;
L_1803df6bb_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803df6bb_2:;
wr(s->u,16,8,(rd(s->r,48,8)+rd(s->u,8,8)));
L_1803df6bb_3:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df6bb_4:;
wr(s->r,8,8,rd(s->u,56,8));
L_1803df6bb_5:;
/* 1803df6bf: call 0x18000d550 */
L_1803df6bf_0:;
L_1803df6bf_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df6bf_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df6c4)));
L_1803df6bf_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803df6bf_4:;
return UINT64_C(0x1803df6c4);
}
uint64_t b_1803df6b0(CPU*s){
/* 1803df6b0: mov rcx, qword ptr [rbx + 8] */
L_1803df6b0_0:;
L_1803df6b0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df6b0_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df6b0_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803df6b0_4:;
/* 1803df6b4: mov rdx, qword ptr [rsi + r13] */
L_1803df6b4_0:;
L_1803df6b4_1:;
wr(s->u,8,8,(rd(s->r,168,8)*((U)UINT64_C(0x1))));
L_1803df6b4_2:;
wr(s->u,16,8,(rd(s->r,48,8)+rd(s->u,8,8)));
L_1803df6b4_3:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df6b4_4:;
wr(s->r,16,8,rd(s->u,24,8));
L_1803df6b4_5:;
/* 1803df6b8: mov r8, r12 */
L_1803df6b8_0:;
L_1803df6b8_1:;
wr(s->r,128,8,rd(s->r,160,8));
L_1803df6b8_2:;
/* 1803df6bb: mov rcx, qword ptr [rsi + rcx] */
L_1803df6bb_0:;
L_1803df6bb_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803df6bb_2:;
wr(s->u,16,8,(rd(s->r,48,8)+rd(s->u,8,8)));
L_1803df6bb_3:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df6bb_4:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803df6bb_5:;
/* 1803df6bf: call 0x18000d550 */
L_1803df6bf_0:;
L_1803df6bf_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df6bf_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df6c4)));
L_1803df6bf_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803df6bf_4:;
return UINT64_C(0x1803df6c4);
}
uint64_t b_1803df6c4(CPU*s){
/* 1803df6c4: inc ebp */
L_1803df6c4_0:;
L_1803df6c4_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),((U)UINT64_C(0x1)),4,0));
L_1803df6c4_2:;
wr(s->r,40,4,(rd(s->r,40,4)+((U)UINT64_C(0x1))));
L_1803df6c4_3:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803df6c4_4:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df6c4_5:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803df6c4_6:;
wr(s->u,13,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803df6c4_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803df6c4_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803df6c4_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803df6c4_10:;
/* 1803df6c6: add rsi, 8 */
L_1803df6c6_0:;
L_1803df6c6_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803df6c6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x8)),8,0));
L_1803df6c6_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x8))));
L_1803df6c6_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df6c6_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803df6c6_6:;
wr(s->u,13,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803df6c6_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803df6c6_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803df6c6_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803df6c6_10:;
/* 1803df6ca: cmp ebp, dword ptr [rbx + 0x38] */
L_1803df6ca_0:;
L_1803df6ca_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803df6ca_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df6ca_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803df6ca_4:;
wr(s->r,512,1,(rd(s->r,40,4)<rd(s->u,23,4)));
L_1803df6ca_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->u,23,4),4,1));
L_1803df6ca_6:;
wr(s->u,27,4,(rd(s->r,40,4)-rd(s->u,23,4)));
L_1803df6ca_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df6ca_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803df6ca_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803df6ca_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803df6ca_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803df6ca_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803df6ca_13:;
/* 1803df6cd: jl 0x1803df6b0 */
L_1803df6cd_0:;
L_1803df6cd_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df6cd_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803df6b0);}
L_1803df6cd_3:;
return UINT64_C(0x1803df6cf);
}
uint64_t b_1803df6cf(CPU*s){
/* 1803df6cf: mov r11, qword ptr [rsp + 0xc8] */
L_1803df6cf_0:;
L_1803df6cf_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc8))+rd(s->r,32,8)));
L_1803df6cf_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803df6cf_3:;
wr(s->r,152,8,rd(s->u,20,8));
L_1803df6cf_4:;
/* 1803df6d7: mov r12, qword ptr [rsp + 0xc0] */
L_1803df6d7_0:;
L_1803df6d7_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc0))+rd(s->r,32,8)));
L_1803df6d7_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803df6d7_3:;
wr(s->r,160,8,rd(s->u,20,8));
L_1803df6d7_4:;
/* 1803df6df: mov rsi, qword ptr [rsp + 0xb8] */
L_1803df6df_0:;
L_1803df6df_1:;
wr(s->u,8,8,(((U)UINT64_C(0xb8))+rd(s->r,32,8)));
L_1803df6df_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803df6df_3:;
wr(s->r,48,8,rd(s->u,20,8));
L_1803df6df_4:;
/* 1803df6e7: cmp dword ptr [rbx + 0x34], r14d */
L_1803df6e7_0:;
L_1803df6e7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803df6e7_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df6e7_3:;
wr(s->u,35,4,rd(s->u,16,4));
L_1803df6e7_4:;
wr(s->r,512,1,(rd(s->u,35,4)<rd(s->r,176,4)));
L_1803df6e7_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,35,4),rd(s->r,176,4),4,1));
L_1803df6e7_6:;
wr(s->u,39,4,(rd(s->u,35,4)-rd(s->r,176,4)));
L_1803df6e7_7:;
wr(s->r,519,1,(sx(rd(s->u,39,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df6e7_8:;
wr(s->r,518,1,(rd(s->u,39,4)==((U)UINT64_C(0x0))));
L_1803df6e7_9:;
wr(s->u,29,4,(rd(s->u,39,4)&((U)UINT64_C(0xff))));
L_1803df6e7_10:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803df6e7_11:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803df6e7_12:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803df6e7_13:;
/* 1803df6eb: mov r13, qword ptr [rsp + 0x80] */
L_1803df6eb_0:;
L_1803df6eb_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803df6eb_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803df6eb_3:;
wr(s->r,168,8,rd(s->u,20,8));
L_1803df6eb_4:;
/* 1803df6f3: mov rbp, qword ptr [rsp + 0xb0] */
L_1803df6f3_0:;
L_1803df6f3_1:;
wr(s->u,8,8,(((U)UINT64_C(0xb0))+rd(s->r,32,8)));
L_1803df6f3_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803df6f3_3:;
wr(s->r,40,8,rd(s->u,20,8));
L_1803df6f3_4:;
/* 1803df6fb: jge 0x1803df8e7 */
L_1803df6fb_0:;
L_1803df6fb_1:;
wr(s->u,28,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803df6fb_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803df8e7);}
L_1803df6fb_3:;
return UINT64_C(0x1803df701);
}
uint64_t b_1803df6e7(CPU*s){
/* 1803df6e7: cmp dword ptr [rbx + 0x34], r14d */
L_1803df6e7_0:;
L_1803df6e7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803df6e7_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df6e7_3:;
wr(s->u,35,4,rd(s->u,16,4));
L_1803df6e7_4:;
wr(s->r,512,1,(rd(s->u,35,4)<rd(s->r,176,4)));
L_1803df6e7_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,35,4),rd(s->r,176,4),4,1));
L_1803df6e7_6:;
wr(s->u,39,4,(rd(s->u,35,4)-rd(s->r,176,4)));
L_1803df6e7_7:;
wr(s->r,519,1,(sx(rd(s->u,39,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df6e7_8:;
wr(s->r,518,1,(rd(s->u,39,4)==((U)UINT64_C(0x0))));
L_1803df6e7_9:;
wr(s->u,29,4,(rd(s->u,39,4)&((U)UINT64_C(0xff))));
L_1803df6e7_10:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803df6e7_11:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803df6e7_12:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803df6e7_13:;
/* 1803df6eb: mov r13, qword ptr [rsp + 0x80] */
L_1803df6eb_0:;
L_1803df6eb_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803df6eb_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803df6eb_3:;
wr(s->r,168,8,rd(s->u,20,8));
L_1803df6eb_4:;
/* 1803df6f3: mov rbp, qword ptr [rsp + 0xb0] */
L_1803df6f3_0:;
L_1803df6f3_1:;
wr(s->u,8,8,(((U)UINT64_C(0xb0))+rd(s->r,32,8)));
L_1803df6f3_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803df6f3_3:;
wr(s->r,40,8,rd(s->u,20,8));
L_1803df6f3_4:;
/* 1803df6fb: jge 0x1803df8e7 */
L_1803df6fb_0:;
L_1803df6fb_1:;
wr(s->u,28,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803df6fb_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803df8e7);}
L_1803df6fb_3:;
return UINT64_C(0x1803df701);
}
uint64_t b_1803df701(CPU*s){
/* 1803df701: movaps xmmword ptr [rsp + 0x70], xmm6 */
L_1803df701_0:;
L_1803df701_1:;
wr(s->u,8,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803df701_2:;
wr(s->u,44,16,rd(s->r,4992,16));
L_1803df701_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,44,16));
L_1803df701_4:;
/* 1803df706: movaps xmmword ptr [rsp + 0x60], xmm7 */
L_1803df706_0:;
L_1803df706_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803df706_2:;
wr(s->u,44,16,rd(s->r,5056,16));
L_1803df706_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,44,16));
L_1803df706_4:;
/* 1803df70b: movss xmm7, dword ptr [rip + 0x275add] */
L_1803df70b_0:;
L_1803df70b_1:;
wr(s->r,5056,4,mr(UINT64_C(0x1806551f0),4));
L_1803df70b_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803df70b_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803df70b_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803df70b_5:;
/* 1803df713: mov r8, rdi */
L_1803df713_0:;
L_1803df713_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803df713_2:;
/* 1803df716: movaps xmmword ptr [rsp + 0x50], xmm8 */
L_1803df716_0:;
L_1803df716_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803df716_2:;
wr(s->u,44,16,rd(s->r,5120,16));
L_1803df716_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,44,16));
L_1803df716_4:;
/* 1803df71c: movaps xmmword ptr [rsp + 0x40], xmm9 */
L_1803df71c_0:;
L_1803df71c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803df71c_2:;
wr(s->u,44,16,rd(s->r,5184,16));
L_1803df71c_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,44,16));
L_1803df71c_4:;
/* 1803df722: movaps xmmword ptr [rsp + 0x30], xmm10 */
L_1803df722_0:;
L_1803df722_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803df722_2:;
wr(s->u,44,16,rd(s->r,5248,16));
L_1803df722_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,44,16));
L_1803df722_4:;
/* 1803df728: movss xmm9, dword ptr [rsp + 0xd0] */
L_1803df728_0:;
L_1803df728_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803df728_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df728_3:;
wr(s->r,5184,4,rd(s->u,40,4));
L_1803df728_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803df728_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803df728_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803df728_7:;
/* 1803df732: movss xmm10, dword ptr [rip + 0x280369] */
L_1803df732_0:;
L_1803df732_1:;
wr(s->r,5248,4,mr(UINT64_C(0x18065faa4),4));
L_1803df732_2:;
wr(s->r,5252,4,((U)UINT64_C(0x0)));
L_1803df732_3:;
wr(s->r,5256,4,((U)UINT64_C(0x0)));
L_1803df732_4:;
wr(s->r,5260,4,((U)UINT64_C(0x0)));
L_1803df732_5:;
/* 1803df73b: movss xmm8, dword ptr [rip + 0x272a20] */
L_1803df73b_0:;
L_1803df73b_1:;
wr(s->r,5120,4,mr(UINT64_C(0x180652164),4));
L_1803df73b_2:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803df73b_3:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803df73b_4:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803df73b_5:;
/* 1803df744: movaps xmmword ptr [rsp + 0x20], xmm11 */
L_1803df744_0:;
L_1803df744_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803df744_2:;
wr(s->u,44,16,rd(s->r,5312,16));
L_1803df744_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,44,16));
L_1803df744_4:;
/* 1803df74a: movss xmm11, dword ptr [rip + 0x26d4f1] */
L_1803df74a_0:;
L_1803df74a_1:;
wr(s->r,5312,4,mr(UINT64_C(0x18064cc44),4));
L_1803df74a_2:;
wr(s->r,5316,4,((U)UINT64_C(0x0)));
L_1803df74a_3:;
wr(s->r,5320,4,((U)UINT64_C(0x0)));
L_1803df74a_4:;
wr(s->r,5324,4,((U)UINT64_C(0x0)));
L_1803df74a_5:;
/* 1803df753: nop word ptr [rax + rax] */
L_1803df753_0:;
L_1803df753_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803df753_2:;
wr(s->u,32,8,(rd(s->r,0,8)+rd(s->u,24,8)));
L_1803df753_3:;
/* 1803df760: cmp dword ptr [rbx + 0x38], edi */
L_1803df760_0:;
L_1803df760_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803df760_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df760_3:;
wr(s->u,70,4,rd(s->u,60,4));
L_1803df760_4:;
wr(s->r,512,1,(rd(s->u,70,4)<rd(s->r,56,4)));
L_1803df760_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,70,4),rd(s->r,56,4),4,1));
L_1803df760_6:;
wr(s->u,74,4,(rd(s->u,70,4)-rd(s->r,56,4)));
L_1803df760_7:;
wr(s->r,519,1,(sx(rd(s->u,74,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df760_8:;
wr(s->r,518,1,(rd(s->u,74,4)==((U)UINT64_C(0x0))));
L_1803df760_9:;
wr(s->u,64,4,(rd(s->u,74,4)&((U)UINT64_C(0xff))));
L_1803df760_10:;
wr(s->u,68,1,pop(rd(s->u,64,4),4));
L_1803df760_11:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803df760_12:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803df760_13:;
/* 1803df763: movss xmm5, dword ptr [rbx + 0x20] */
L_1803df763_0:;
L_1803df763_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803df763_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df763_3:;
wr(s->r,4928,4,rd(s->u,40,4));
L_1803df763_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803df763_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803df763_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803df763_7:;
/* 1803df768: mov r10d, edi */
L_1803df768_0:;
L_1803df768_1:;
wr(s->r,144,4,rd(s->r,56,4));
L_1803df768_2:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803df768_3:;
/* 1803df76b: movaps xmm6, xmm5 */
L_1803df76b_0:;
L_1803df76b_1:;
wr(s->r,4992,4,rd(s->r,4928,4));
L_1803df76b_2:;
wr(s->r,4996,4,rd(s->r,4932,4));
L_1803df76b_3:;
wr(s->r,5000,4,rd(s->r,4936,4));
L_1803df76b_4:;
wr(s->r,5004,4,rd(s->r,4940,4));
L_1803df76b_5:;
/* 1803df76e: mulss xmm6, xmm5 */
L_1803df76e_0:;
L_1803df76e_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803df76e_2:;
/* 1803df772: movaps xmm4, xmm6 */
L_1803df772_0:;
L_1803df772_1:;
wr(s->r,4864,4,rd(s->r,4992,4));
L_1803df772_2:;
wr(s->r,4868,4,rd(s->r,4996,4));
L_1803df772_3:;
wr(s->r,4872,4,rd(s->r,5000,4));
L_1803df772_4:;
wr(s->r,4876,4,rd(s->r,5004,4));
L_1803df772_5:;
/* 1803df775: movaps xmm2, xmm6 */
L_1803df775_0:;
L_1803df775_1:;
wr(s->r,4736,4,rd(s->r,4992,4));
L_1803df775_2:;
wr(s->r,4740,4,rd(s->r,4996,4));
L_1803df775_3:;
wr(s->r,4744,4,rd(s->r,5000,4));
L_1803df775_4:;
wr(s->r,4748,4,rd(s->r,5004,4));
L_1803df775_5:;
/* 1803df778: movss dword ptr [rbx + 0x24], xmm6 */
L_1803df778_0:;
L_1803df778_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803df778_2:;
wr(s->u,40,4,rd(s->r,4992,4));
L_1803df778_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,40,4));
L_1803df778_4:;
/* 1803df77d: mulss xmm4, xmm5 */
L_1803df77d_0:;
L_1803df77d_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803df77d_2:;
/* 1803df781: mulss xmm2, xmm10 */
L_1803df781_0:;
L_1803df781_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,5248,4),4),4));
L_1803df781_2:;
/* 1803df786: movaps xmm3, xmm4 */
L_1803df786_0:;
L_1803df786_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803df786_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803df786_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803df786_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803df786_5:;
/* 1803df789: movaps xmm1, xmm4 */
L_1803df789_0:;
L_1803df789_1:;
wr(s->r,4672,4,rd(s->r,4864,4));
L_1803df789_2:;
wr(s->r,4676,4,rd(s->r,4868,4));
L_1803df789_3:;
wr(s->r,4680,4,rd(s->r,4872,4));
L_1803df789_4:;
wr(s->r,4684,4,rd(s->r,4876,4));
L_1803df789_5:;
/* 1803df78c: movss dword ptr [rbx + 0x28], xmm4 */
L_1803df78c_0:;
L_1803df78c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803df78c_2:;
wr(s->u,40,4,rd(s->r,4864,4));
L_1803df78c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,40,4));
L_1803df78c_4:;
/* 1803df791: mulss xmm3, xmm7 */
L_1803df791_0:;
L_1803df791_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803df791_2:;
/* 1803df795: subss xmm4, xmm6 */
L_1803df795_0:;
L_1803df795_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803df795_2:;
/* 1803df799: movss dword ptr [rbx + 0x18], xmm4 */
L_1803df799_0:;
L_1803df799_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803df799_2:;
wr(s->u,40,4,rd(s->r,4864,4));
L_1803df799_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,40,4));
L_1803df799_4:;
/* 1803df79e: movaps xmm0, xmm3 */
L_1803df79e_0:;
L_1803df79e_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803df79e_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803df79e_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803df79e_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803df79e_5:;
/* 1803df7a1: subss xmm0, xmm2 */
L_1803df7a1_0:;
L_1803df7a1_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803df7a1_2:;
/* 1803df7a5: subss xmm2, xmm3 */
L_1803df7a5_0:;
L_1803df7a5_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803df7a5_2:;
return UINT64_C(0x1803df7a9);
}
uint64_t b_1803df760(CPU*s){
/* 1803df760: cmp dword ptr [rbx + 0x38], edi */
L_1803df760_0:;
L_1803df760_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803df760_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df760_3:;
wr(s->u,24,4,rd(s->u,12,4));
L_1803df760_4:;
wr(s->r,512,1,(rd(s->u,24,4)<rd(s->r,56,4)));
L_1803df760_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,24,4),rd(s->r,56,4),4,1));
L_1803df760_6:;
wr(s->u,28,4,(rd(s->u,24,4)-rd(s->r,56,4)));
L_1803df760_7:;
wr(s->r,519,1,(sx(rd(s->u,28,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df760_8:;
wr(s->r,518,1,(rd(s->u,28,4)==((U)UINT64_C(0x0))));
L_1803df760_9:;
wr(s->u,18,4,(rd(s->u,28,4)&((U)UINT64_C(0xff))));
L_1803df760_10:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803df760_11:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803df760_12:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803df760_13:;
/* 1803df763: movss xmm5, dword ptr [rbx + 0x20] */
L_1803df763_0:;
L_1803df763_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803df763_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df763_3:;
wr(s->r,4928,4,rd(s->u,8,4));
L_1803df763_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803df763_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803df763_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803df763_7:;
/* 1803df768: mov r10d, edi */
L_1803df768_0:;
L_1803df768_1:;
wr(s->r,144,4,rd(s->r,56,4));
L_1803df768_2:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803df768_3:;
/* 1803df76b: movaps xmm6, xmm5 */
L_1803df76b_0:;
L_1803df76b_1:;
wr(s->r,4992,4,rd(s->r,4928,4));
L_1803df76b_2:;
wr(s->r,4996,4,rd(s->r,4932,4));
L_1803df76b_3:;
wr(s->r,5000,4,rd(s->r,4936,4));
L_1803df76b_4:;
wr(s->r,5004,4,rd(s->r,4940,4));
L_1803df76b_5:;
/* 1803df76e: mulss xmm6, xmm5 */
L_1803df76e_0:;
L_1803df76e_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803df76e_2:;
/* 1803df772: movaps xmm4, xmm6 */
L_1803df772_0:;
L_1803df772_1:;
wr(s->r,4864,4,rd(s->r,4992,4));
L_1803df772_2:;
wr(s->r,4868,4,rd(s->r,4996,4));
L_1803df772_3:;
wr(s->r,4872,4,rd(s->r,5000,4));
L_1803df772_4:;
wr(s->r,4876,4,rd(s->r,5004,4));
L_1803df772_5:;
/* 1803df775: movaps xmm2, xmm6 */
L_1803df775_0:;
L_1803df775_1:;
wr(s->r,4736,4,rd(s->r,4992,4));
L_1803df775_2:;
wr(s->r,4740,4,rd(s->r,4996,4));
L_1803df775_3:;
wr(s->r,4744,4,rd(s->r,5000,4));
L_1803df775_4:;
wr(s->r,4748,4,rd(s->r,5004,4));
L_1803df775_5:;
/* 1803df778: movss dword ptr [rbx + 0x24], xmm6 */
L_1803df778_0:;
L_1803df778_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803df778_2:;
wr(s->u,8,4,rd(s->r,4992,4));
L_1803df778_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df778_4:;
/* 1803df77d: mulss xmm4, xmm5 */
L_1803df77d_0:;
L_1803df77d_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803df77d_2:;
/* 1803df781: mulss xmm2, xmm10 */
L_1803df781_0:;
L_1803df781_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,5248,4),4),4));
L_1803df781_2:;
/* 1803df786: movaps xmm3, xmm4 */
L_1803df786_0:;
L_1803df786_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803df786_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803df786_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803df786_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803df786_5:;
/* 1803df789: movaps xmm1, xmm4 */
L_1803df789_0:;
L_1803df789_1:;
wr(s->r,4672,4,rd(s->r,4864,4));
L_1803df789_2:;
wr(s->r,4676,4,rd(s->r,4868,4));
L_1803df789_3:;
wr(s->r,4680,4,rd(s->r,4872,4));
L_1803df789_4:;
wr(s->r,4684,4,rd(s->r,4876,4));
L_1803df789_5:;
/* 1803df78c: movss dword ptr [rbx + 0x28], xmm4 */
L_1803df78c_0:;
L_1803df78c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803df78c_2:;
wr(s->u,8,4,rd(s->r,4864,4));
L_1803df78c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df78c_4:;
/* 1803df791: mulss xmm3, xmm7 */
L_1803df791_0:;
L_1803df791_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803df791_2:;
/* 1803df795: subss xmm4, xmm6 */
L_1803df795_0:;
L_1803df795_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803df795_2:;
/* 1803df799: movss dword ptr [rbx + 0x18], xmm4 */
L_1803df799_0:;
L_1803df799_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803df799_2:;
wr(s->u,8,4,rd(s->r,4864,4));
L_1803df799_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df799_4:;
/* 1803df79e: movaps xmm0, xmm3 */
L_1803df79e_0:;
L_1803df79e_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803df79e_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803df79e_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803df79e_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803df79e_5:;
/* 1803df7a1: subss xmm0, xmm2 */
L_1803df7a1_0:;
L_1803df7a1_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803df7a1_2:;
/* 1803df7a5: subss xmm2, xmm3 */
L_1803df7a5_0:;
L_1803df7a5_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803df7a5_2:;
/* 1803df7a9: addss xmm0, xmm11 */
L_1803df7a9_0:;
L_1803df7a9_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5312,4),4),4));
L_1803df7a9_2:;
/* 1803df7ae: movss dword ptr [rbx + 0x1c], xmm2 */
L_1803df7ae_0:;
L_1803df7ae_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x1c))));
L_1803df7ae_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803df7ae_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df7ae_4:;
/* 1803df7b3: movss dword ptr [rbx + 0x10], xmm0 */
L_1803df7b3_0:;
L_1803df7b3_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803df7b3_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803df7b3_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df7b3_4:;
/* 1803df7b8: movaps xmm0, xmm6 */
L_1803df7b8_0:;
L_1803df7b8_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803df7b8_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803df7b8_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803df7b8_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803df7b8_5:;
/* 1803df7bb: mulss xmm0, xmm7 */
L_1803df7bb_0:;
L_1803df7bb_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803df7bb_2:;
/* 1803df7bf: subss xmm1, xmm0 */
L_1803df7bf_0:;
L_1803df7bf_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803df7bf_2:;
/* 1803df7c3: addss xmm1, xmm5 */
L_1803df7c3_0:;
L_1803df7c3_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803df7c3_2:;
/* 1803df7c7: movss dword ptr [rbx + 0x14], xmm1 */
L_1803df7c7_0:;
L_1803df7c7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x14))));
L_1803df7c7_2:;
wr(s->u,8,4,rd(s->r,4672,4));
L_1803df7c7_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df7c7_4:;
/* 1803df7cc: jle 0x1803df887 */
L_1803df7cc_0:;
L_1803df7cc_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df7cc_2:;
wr(s->u,17,1,((rd(s->r,518,1)!=0)||(rd(s->u,16,1)!=0)));
L_1803df7cc_3:;
if(rd(s->u,17,1)){return UINT64_C(0x1803df887);}
L_1803df7cc_4:;
return UINT64_C(0x1803df7d2);
}
uint64_t b_1803df7a9(CPU*s){
/* 1803df7a9: addss xmm0, xmm11 */
L_1803df7a9_0:;
L_1803df7a9_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5312,4),4),4));
L_1803df7a9_2:;
/* 1803df7ae: movss dword ptr [rbx + 0x1c], xmm2 */
L_1803df7ae_0:;
L_1803df7ae_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x1c))));
L_1803df7ae_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803df7ae_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df7ae_4:;
/* 1803df7b3: movss dword ptr [rbx + 0x10], xmm0 */
L_1803df7b3_0:;
L_1803df7b3_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803df7b3_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803df7b3_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df7b3_4:;
/* 1803df7b8: movaps xmm0, xmm6 */
L_1803df7b8_0:;
L_1803df7b8_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803df7b8_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803df7b8_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803df7b8_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803df7b8_5:;
/* 1803df7bb: mulss xmm0, xmm7 */
L_1803df7bb_0:;
L_1803df7bb_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803df7bb_2:;
/* 1803df7bf: subss xmm1, xmm0 */
L_1803df7bf_0:;
L_1803df7bf_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803df7bf_2:;
/* 1803df7c3: addss xmm1, xmm5 */
L_1803df7c3_0:;
L_1803df7c3_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803df7c3_2:;
/* 1803df7c7: movss dword ptr [rbx + 0x14], xmm1 */
L_1803df7c7_0:;
L_1803df7c7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x14))));
L_1803df7c7_2:;
wr(s->u,8,4,rd(s->r,4672,4));
L_1803df7c7_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df7c7_4:;
/* 1803df7cc: jle 0x1803df887 */
L_1803df7cc_0:;
L_1803df7cc_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df7cc_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803df7cc_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803df887);}
L_1803df7cc_4:;
return UINT64_C(0x1803df7d2);
}
uint64_t b_1803df7d2(CPU*s){
/* 1803df7d2: mov r9, rdi */
L_1803df7d2_0:;
L_1803df7d2_1:;
wr(s->r,136,8,rd(s->r,56,8));
L_1803df7d2_2:;
/* 1803df7d5: nop word ptr [rax + rax] */
L_1803df7d5_0:;
L_1803df7d5_1:;
wr(s->u,48,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803df7d5_2:;
wr(s->u,56,8,(rd(s->r,0,8)+rd(s->u,48,8)));
L_1803df7d5_3:;
/* 1803df7e0: movsxd rdx, dword ptr [rbx + 0x34] */
L_1803df7e0_0:;
L_1803df7e0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803df7e0_2:;
wr(s->u,68,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df7e0_3:;
wr(s->r,16,8,(U)sx(rd(s->u,68,4),4));
L_1803df7e0_4:;
/* 1803df7e4: mov rcx, qword ptr [rbx + 8] */
L_1803df7e4_0:;
L_1803df7e4_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df7e4_2:;
wr(s->u,72,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df7e4_3:;
wr(s->r,8,8,rd(s->u,72,8));
L_1803df7e4_4:;
/* 1803df7e8: inc r10d */
L_1803df7e8_0:;
L_1803df7e8_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x1)),4,0));
L_1803df7e8_2:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x1))));
L_1803df7e8_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803df7e8_4:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df7e8_5:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803df7e8_6:;
wr(s->u,80,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803df7e8_7:;
wr(s->u,88,1,pop(rd(s->u,80,4),4));
L_1803df7e8_8:;
wr(s->u,89,1,(rd(s->u,88,1)&((U)UINT64_C(0x1))));
L_1803df7e8_9:;
wr(s->r,514,1,(rd(s->u,89,1)==((U)UINT64_C(0x0))));
L_1803df7e8_10:;
/* 1803df7eb: mov rax, qword ptr [r9 + rcx] */
L_1803df7eb_0:;
L_1803df7eb_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803df7eb_2:;
wr(s->u,16,8,(rd(s->r,136,8)+rd(s->u,8,8)));
L_1803df7eb_3:;
wr(s->u,72,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df7eb_4:;
wr(s->r,0,8,rd(s->u,72,8));
L_1803df7eb_5:;
/* 1803df7ef: add r9, 8 */
L_1803df7ef_0:;
L_1803df7ef_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803df7ef_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803df7ef_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803df7ef_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df7ef_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803df7ef_6:;
wr(s->u,80,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803df7ef_7:;
wr(s->u,88,1,pop(rd(s->u,80,8),8));
L_1803df7ef_8:;
wr(s->u,89,1,(rd(s->u,88,1)&((U)UINT64_C(0x1))));
L_1803df7ef_9:;
wr(s->r,514,1,(rd(s->u,89,1)==((U)UINT64_C(0x0))));
L_1803df7ef_10:;
/* 1803df7f3: movss xmm0, dword ptr [rax + rdx*4 - 8] */
L_1803df7f3_0:;
L_1803df7f3_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803df7f3_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803df7f3_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df7f3_4:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803df7f3_5:;
wr(s->r,4608,4,rd(s->u,64,4));
L_1803df7f3_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df7f3_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df7f3_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df7f3_9:;
/* 1803df7f9: movaps xmm3, xmm0 */
L_1803df7f9_0:;
L_1803df7f9_1:;
wr(s->r,4800,4,rd(s->r,4608,4));
L_1803df7f9_2:;
wr(s->r,4804,4,rd(s->r,4612,4));
L_1803df7f9_3:;
wr(s->r,4808,4,rd(s->r,4616,4));
L_1803df7f9_4:;
wr(s->r,4812,4,rd(s->r,4620,4));
L_1803df7f9_5:;
/* 1803df7fc: subss xmm3, dword ptr [rax + rdx*4 - 0xc] */
L_1803df7fc_0:;
L_1803df7fc_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff4))+rd(s->r,0,8)));
L_1803df7fc_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803df7fc_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df7fc_4:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803df7fc_5:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->u,64,4),4),4));
L_1803df7fc_6:;
/* 1803df802: addss xmm3, dword ptr [rax + rdx*4 - 4] */
L_1803df802_0:;
L_1803df802_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803df802_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803df802_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df802_4:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803df802_5:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->u,64,4),4),4));
L_1803df802_6:;
/* 1803df808: subss xmm3, xmm0 */
L_1803df808_0:;
L_1803df808_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803df808_2:;
/* 1803df80c: mulss xmm3, xmm8 */
L_1803df80c_0:;
L_1803df80c_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803df80c_2:;
/* 1803df811: movss dword ptr [rbx + 0x2c], xmm3 */
L_1803df811_0:;
L_1803df811_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x2c))));
L_1803df811_2:;
wr(s->u,64,4,rd(s->r,4800,4));
L_1803df811_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,64,4));
L_1803df811_4:;
/* 1803df816: mov rax, qword ptr [r9 + rcx - 8] */
L_1803df816_0:;
L_1803df816_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803df816_2:;
wr(s->u,32,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803df816_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df816_4:;
wr(s->u,72,8,mr((uint64_t)rd(s->u,40,8),8));
L_1803df816_5:;
wr(s->r,0,8,rd(s->u,72,8));
L_1803df816_6:;
/* 1803df81b: movss xmm0, dword ptr [rax + rdx*4 - 4] */
L_1803df81b_0:;
L_1803df81b_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803df81b_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803df81b_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df81b_4:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803df81b_5:;
wr(s->r,4608,4,rd(s->u,64,4));
L_1803df81b_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df81b_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df81b_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df81b_9:;
/* 1803df821: movaps xmm2, xmm0 */
L_1803df821_0:;
L_1803df821_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803df821_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803df821_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803df821_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803df821_5:;
/* 1803df824: subss xmm2, dword ptr [rax + rdx*4 - 8] */
L_1803df824_0:;
L_1803df824_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803df824_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803df824_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df824_4:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803df824_5:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->u,64,4),4),4));
L_1803df824_6:;
/* 1803df82a: addss xmm2, dword ptr [rax + rdx*4] */
L_1803df82a_0:;
L_1803df82a_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803df82a_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803df82a_3:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df82a_4:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->u,64,4),4),4));
L_1803df82a_5:;
/* 1803df82f: subss xmm2, xmm0 */
L_1803df82f_0:;
L_1803df82f_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803df82f_2:;
/* 1803df833: mulss xmm2, xmm8 */
L_1803df833_0:;
L_1803df833_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803df833_2:;
/* 1803df838: movss dword ptr [rbx + 0x30], xmm2 */
L_1803df838_0:;
L_1803df838_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803df838_2:;
wr(s->u,64,4,rd(s->r,4736,4));
L_1803df838_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,64,4));
L_1803df838_4:;
/* 1803df83d: mov rax, qword ptr [r9 + rcx - 8] */
L_1803df83d_0:;
L_1803df83d_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803df83d_2:;
wr(s->u,32,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803df83d_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df83d_4:;
wr(s->u,72,8,mr((uint64_t)rd(s->u,40,8),8));
L_1803df83d_5:;
wr(s->r,0,8,rd(s->u,72,8));
L_1803df83d_6:;
/* 1803df842: mulss xmm2, dword ptr [rbx + 0x18] */
L_1803df842_0:;
L_1803df842_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803df842_2:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df842_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,64,4),4),4));
L_1803df842_4:;
/* 1803df847: movss xmm1, dword ptr [rax + rdx*4 - 4] */
L_1803df847_0:;
L_1803df847_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803df847_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803df847_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df847_4:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803df847_5:;
wr(s->r,4672,4,rd(s->u,64,4));
L_1803df847_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803df847_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803df847_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803df847_9:;
/* 1803df84d: movss xmm0, dword ptr [rax + rdx*4 - 8] */
L_1803df84d_0:;
L_1803df84d_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803df84d_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803df84d_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df84d_4:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803df84d_5:;
wr(s->r,4608,4,rd(s->u,64,4));
L_1803df84d_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df84d_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df84d_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df84d_9:;
/* 1803df853: mov rax, qword ptr [r9 + r11 - 8] */
L_1803df853_0:;
L_1803df853_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803df853_2:;
wr(s->u,32,8,(rd(s->r,152,8)*((U)UINT64_C(0x1))));
L_1803df853_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df853_4:;
wr(s->u,72,8,mr((uint64_t)rd(s->u,40,8),8));
L_1803df853_5:;
wr(s->r,0,8,rd(s->u,72,8));
L_1803df853_6:;
/* 1803df858: mulss xmm1, dword ptr [rbx + 0x1c] */
L_1803df858_0:;
L_1803df858_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x1c))));
L_1803df858_2:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df858_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,64,4),4),4));
L_1803df858_4:;
/* 1803df85d: mulss xmm0, dword ptr [rbx + 0x10] */
L_1803df85d_0:;
L_1803df85d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803df85d_2:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df85d_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,64,4),4),4));
L_1803df85d_4:;
/* 1803df862: addss xmm1, xmm0 */
L_1803df862_0:;
L_1803df862_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803df862_2:;
/* 1803df866: movss xmm0, dword ptr [rbx + 0x14] */
L_1803df866_0:;
L_1803df866_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x14))));
L_1803df866_2:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df866_3:;
wr(s->r,4608,4,rd(s->u,64,4));
L_1803df866_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df866_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df866_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df866_7:;
/* 1803df86b: mulss xmm0, xmm3 */
L_1803df86b_0:;
L_1803df86b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803df86b_2:;
return UINT64_C(0x1803df86f);
}
uint64_t b_1803df7e0(CPU*s){
/* 1803df7e0: movsxd rdx, dword ptr [rbx + 0x34] */
L_1803df7e0_0:;
L_1803df7e0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803df7e0_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df7e0_3:;
wr(s->r,16,8,(U)sx(rd(s->u,52,4),4));
L_1803df7e0_4:;
/* 1803df7e4: mov rcx, qword ptr [rbx + 8] */
L_1803df7e4_0:;
L_1803df7e4_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df7e4_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df7e4_3:;
wr(s->r,8,8,rd(s->u,56,8));
L_1803df7e4_4:;
/* 1803df7e8: inc r10d */
L_1803df7e8_0:;
L_1803df7e8_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x1)),4,0));
L_1803df7e8_2:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x1))));
L_1803df7e8_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803df7e8_4:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df7e8_5:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803df7e8_6:;
wr(s->u,64,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803df7e8_7:;
wr(s->u,72,1,pop(rd(s->u,64,4),4));
L_1803df7e8_8:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803df7e8_9:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803df7e8_10:;
/* 1803df7eb: mov rax, qword ptr [r9 + rcx] */
L_1803df7eb_0:;
L_1803df7eb_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803df7eb_2:;
wr(s->u,16,8,(rd(s->r,136,8)+rd(s->u,8,8)));
L_1803df7eb_3:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df7eb_4:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803df7eb_5:;
/* 1803df7ef: add r9, 8 */
L_1803df7ef_0:;
L_1803df7ef_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803df7ef_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803df7ef_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803df7ef_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df7ef_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803df7ef_6:;
wr(s->u,64,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803df7ef_7:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803df7ef_8:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803df7ef_9:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803df7ef_10:;
/* 1803df7f3: movss xmm0, dword ptr [rax + rdx*4 - 8] */
L_1803df7f3_0:;
L_1803df7f3_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803df7f3_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803df7f3_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df7f3_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803df7f3_5:;
wr(s->r,4608,4,rd(s->u,48,4));
L_1803df7f3_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df7f3_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df7f3_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df7f3_9:;
/* 1803df7f9: movaps xmm3, xmm0 */
L_1803df7f9_0:;
L_1803df7f9_1:;
wr(s->r,4800,4,rd(s->r,4608,4));
L_1803df7f9_2:;
wr(s->r,4804,4,rd(s->r,4612,4));
L_1803df7f9_3:;
wr(s->r,4808,4,rd(s->r,4616,4));
L_1803df7f9_4:;
wr(s->r,4812,4,rd(s->r,4620,4));
L_1803df7f9_5:;
/* 1803df7fc: subss xmm3, dword ptr [rax + rdx*4 - 0xc] */
L_1803df7fc_0:;
L_1803df7fc_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff4))+rd(s->r,0,8)));
L_1803df7fc_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803df7fc_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df7fc_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803df7fc_5:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->u,48,4),4),4));
L_1803df7fc_6:;
/* 1803df802: addss xmm3, dword ptr [rax + rdx*4 - 4] */
L_1803df802_0:;
L_1803df802_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803df802_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803df802_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df802_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803df802_5:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->u,48,4),4),4));
L_1803df802_6:;
/* 1803df808: subss xmm3, xmm0 */
L_1803df808_0:;
L_1803df808_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803df808_2:;
/* 1803df80c: mulss xmm3, xmm8 */
L_1803df80c_0:;
L_1803df80c_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803df80c_2:;
/* 1803df811: movss dword ptr [rbx + 0x2c], xmm3 */
L_1803df811_0:;
L_1803df811_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x2c))));
L_1803df811_2:;
wr(s->u,48,4,rd(s->r,4800,4));
L_1803df811_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803df811_4:;
/* 1803df816: mov rax, qword ptr [r9 + rcx - 8] */
L_1803df816_0:;
L_1803df816_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803df816_2:;
wr(s->u,32,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803df816_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df816_4:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,40,8),8));
L_1803df816_5:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803df816_6:;
/* 1803df81b: movss xmm0, dword ptr [rax + rdx*4 - 4] */
L_1803df81b_0:;
L_1803df81b_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803df81b_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803df81b_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df81b_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803df81b_5:;
wr(s->r,4608,4,rd(s->u,48,4));
L_1803df81b_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df81b_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df81b_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df81b_9:;
/* 1803df821: movaps xmm2, xmm0 */
L_1803df821_0:;
L_1803df821_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803df821_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803df821_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803df821_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803df821_5:;
/* 1803df824: subss xmm2, dword ptr [rax + rdx*4 - 8] */
L_1803df824_0:;
L_1803df824_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803df824_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803df824_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df824_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803df824_5:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->u,48,4),4),4));
L_1803df824_6:;
/* 1803df82a: addss xmm2, dword ptr [rax + rdx*4] */
L_1803df82a_0:;
L_1803df82a_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803df82a_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803df82a_3:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803df82a_4:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->u,48,4),4),4));
L_1803df82a_5:;
/* 1803df82f: subss xmm2, xmm0 */
L_1803df82f_0:;
L_1803df82f_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803df82f_2:;
/* 1803df833: mulss xmm2, xmm8 */
L_1803df833_0:;
L_1803df833_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803df833_2:;
/* 1803df838: movss dword ptr [rbx + 0x30], xmm2 */
L_1803df838_0:;
L_1803df838_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803df838_2:;
wr(s->u,48,4,rd(s->r,4736,4));
L_1803df838_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803df838_4:;
/* 1803df83d: mov rax, qword ptr [r9 + rcx - 8] */
L_1803df83d_0:;
L_1803df83d_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803df83d_2:;
wr(s->u,32,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803df83d_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df83d_4:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,40,8),8));
L_1803df83d_5:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803df83d_6:;
/* 1803df842: mulss xmm2, dword ptr [rbx + 0x18] */
L_1803df842_0:;
L_1803df842_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803df842_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df842_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,48,4),4),4));
L_1803df842_4:;
/* 1803df847: movss xmm1, dword ptr [rax + rdx*4 - 4] */
L_1803df847_0:;
L_1803df847_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803df847_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803df847_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df847_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803df847_5:;
wr(s->r,4672,4,rd(s->u,48,4));
L_1803df847_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803df847_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803df847_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803df847_9:;
/* 1803df84d: movss xmm0, dword ptr [rax + rdx*4 - 8] */
L_1803df84d_0:;
L_1803df84d_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803df84d_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803df84d_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df84d_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803df84d_5:;
wr(s->r,4608,4,rd(s->u,48,4));
L_1803df84d_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df84d_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df84d_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df84d_9:;
/* 1803df853: mov rax, qword ptr [r9 + r11 - 8] */
L_1803df853_0:;
L_1803df853_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803df853_2:;
wr(s->u,32,8,(rd(s->r,152,8)*((U)UINT64_C(0x1))));
L_1803df853_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803df853_4:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,40,8),8));
L_1803df853_5:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803df853_6:;
/* 1803df858: mulss xmm1, dword ptr [rbx + 0x1c] */
L_1803df858_0:;
L_1803df858_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x1c))));
L_1803df858_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df858_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,48,4),4),4));
L_1803df858_4:;
/* 1803df85d: mulss xmm0, dword ptr [rbx + 0x10] */
L_1803df85d_0:;
L_1803df85d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803df85d_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df85d_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,48,4),4),4));
L_1803df85d_4:;
/* 1803df862: addss xmm1, xmm0 */
L_1803df862_0:;
L_1803df862_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803df862_2:;
/* 1803df866: movss xmm0, dword ptr [rbx + 0x14] */
L_1803df866_0:;
L_1803df866_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x14))));
L_1803df866_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df866_3:;
wr(s->r,4608,4,rd(s->u,48,4));
L_1803df866_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803df866_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803df866_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803df866_7:;
/* 1803df86b: mulss xmm0, xmm3 */
L_1803df86b_0:;
L_1803df86b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803df86b_2:;
/* 1803df86f: addss xmm1, xmm2 */
L_1803df86f_0:;
L_1803df86f_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803df86f_2:;
/* 1803df873: addss xmm1, xmm0 */
L_1803df873_0:;
L_1803df873_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803df873_2:;
return UINT64_C(0x1803df877);
}
uint64_t b_1803df86f(CPU*s){
/* 1803df86f: addss xmm1, xmm2 */
L_1803df86f_0:;
L_1803df86f_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803df86f_2:;
/* 1803df873: addss xmm1, xmm0 */
L_1803df873_0:;
L_1803df873_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803df873_2:;
/* 1803df877: movss dword ptr [r8 + rax], xmm1 */
L_1803df877_0:;
L_1803df877_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803df877_2:;
wr(s->u,16,8,(rd(s->r,128,8)+rd(s->u,8,8)));
L_1803df877_3:;
wr(s->u,24,4,rd(s->r,4672,4));
L_1803df877_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803df877_5:;
/* 1803df87d: cmp r10d, dword ptr [rbx + 0x38] */
L_1803df87d_0:;
L_1803df87d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803df87d_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df87d_3:;
wr(s->u,35,4,rd(s->u,24,4));
L_1803df87d_4:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->u,35,4)));
L_1803df87d_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->u,35,4),4,1));
L_1803df87d_6:;
wr(s->u,39,4,(rd(s->r,144,4)-rd(s->u,35,4)));
L_1803df87d_7:;
wr(s->r,519,1,(sx(rd(s->u,39,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df87d_8:;
wr(s->r,518,1,(rd(s->u,39,4)==((U)UINT64_C(0x0))));
L_1803df87d_9:;
wr(s->u,29,4,(rd(s->u,39,4)&((U)UINT64_C(0xff))));
L_1803df87d_10:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803df87d_11:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803df87d_12:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803df87d_13:;
/* 1803df881: jl 0x1803df7e0 */
L_1803df881_0:;
L_1803df881_1:;
wr(s->u,28,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df881_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803df7e0);}
L_1803df881_3:;
return UINT64_C(0x1803df887);
}
uint64_t b_1803df877(CPU*s){
/* 1803df877: movss dword ptr [r8 + rax], xmm1 */
L_1803df877_0:;
L_1803df877_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803df877_2:;
wr(s->u,16,8,(rd(s->r,128,8)+rd(s->u,8,8)));
L_1803df877_3:;
wr(s->u,24,4,rd(s->r,4672,4));
L_1803df877_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803df877_5:;
/* 1803df87d: cmp r10d, dword ptr [rbx + 0x38] */
L_1803df87d_0:;
L_1803df87d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803df87d_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df87d_3:;
wr(s->u,35,4,rd(s->u,24,4));
L_1803df87d_4:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->u,35,4)));
L_1803df87d_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->u,35,4),4,1));
L_1803df87d_6:;
wr(s->u,39,4,(rd(s->r,144,4)-rd(s->u,35,4)));
L_1803df87d_7:;
wr(s->r,519,1,(sx(rd(s->u,39,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df87d_8:;
wr(s->r,518,1,(rd(s->u,39,4)==((U)UINT64_C(0x0))));
L_1803df87d_9:;
wr(s->u,29,4,(rd(s->u,39,4)&((U)UINT64_C(0xff))));
L_1803df87d_10:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803df87d_11:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803df87d_12:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803df87d_13:;
/* 1803df881: jl 0x1803df7e0 */
L_1803df881_0:;
L_1803df881_1:;
wr(s->u,28,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df881_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803df7e0);}
L_1803df881_3:;
return UINT64_C(0x1803df887);
}
uint64_t b_1803df887(CPU*s){
/* 1803df887: unpcklps xmm9, xmm9 */
L_1803df887_0:;
L_1803df887_1:;
wr(s->r,5192,4,rd(s->r,5188,4));
L_1803df887_2:;
wr(s->r,5196,4,rd(s->r,5188,4));
L_1803df887_3:;
wr(s->r,5188,4,rd(s->r,5184,4));
L_1803df887_4:;
/* 1803df88b: inc r15d */
L_1803df88b_0:;
L_1803df88b_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,4),((U)UINT64_C(0x1)),4,0));
L_1803df88b_2:;
wr(s->r,184,4,(rd(s->r,184,4)+((U)UINT64_C(0x1))));
L_1803df88b_3:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803df88b_4:;
wr(s->r,519,1,(sx(rd(s->r,184,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df88b_5:;
wr(s->r,518,1,(rd(s->r,184,4)==((U)UINT64_C(0x0))));
L_1803df88b_6:;
wr(s->u,21,4,(rd(s->r,184,4)&((U)UINT64_C(0xff))));
L_1803df88b_7:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803df88b_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803df88b_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803df88b_10:;
/* 1803df88e: add r8, 4 */
L_1803df88e_0:;
L_1803df88e_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803df88e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x4)),8,0));
L_1803df88e_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803df88e_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df88e_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803df88e_6:;
wr(s->u,21,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803df88e_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803df88e_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803df88e_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803df88e_10:;
/* 1803df892: cvtps2pd xmm1, xmm9 */
L_1803df892_0:;
L_1803df892_1:;
wr(s->u,47,8,rd(s->r,5184,8));
L_1803df892_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,47,4),4),8));
L_1803df892_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,51,4),4),8));
L_1803df892_4:;
/* 1803df896: addsd xmm1, qword ptr [rbx + 0x48] */
L_1803df896_0:;
L_1803df896_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803df896_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df896_3:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->u,12,8),8),8));
L_1803df896_4:;
/* 1803df89b: cvttsd2si eax, xmm1 */
L_1803df89b_0:;
L_1803df89b_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4672,8),8),4));
L_1803df89b_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803df89b_3:;
/* 1803df89f: movsd qword ptr [rbx + 0x48], xmm1 */
L_1803df89f_0:;
L_1803df89f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803df89f_2:;
wr(s->u,12,8,rd(s->r,4672,8));
L_1803df89f_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803df89f_4:;
/* 1803df8a4: cmp eax, r14d */
L_1803df8a4_0:;
L_1803df8a4_1:;
wr(s->u,31,4,rd(s->r,176,4));
L_1803df8a4_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,31,4)));
L_1803df8a4_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,31,4),4,1));
L_1803df8a4_4:;
wr(s->u,35,4,(rd(s->r,0,4)-rd(s->u,31,4)));
L_1803df8a4_5:;
wr(s->r,519,1,(sx(rd(s->u,35,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df8a4_6:;
wr(s->r,518,1,(rd(s->u,35,4)==((U)UINT64_C(0x0))));
L_1803df8a4_7:;
wr(s->u,21,4,(rd(s->u,35,4)&((U)UINT64_C(0xff))));
L_1803df8a4_8:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803df8a4_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803df8a4_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803df8a4_11:;
/* 1803df8a7: movd xmm0, eax */
L_1803df8a7_0:;
L_1803df8a7_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803df8a7_2:;
/* 1803df8ab: mov dword ptr [rbx + 0x34], eax */
L_1803df8ab_0:;
L_1803df8ab_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803df8ab_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803df8ab_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df8ab_4:;
/* 1803df8ae: cvtdq2pd xmm0, xmm0 */
L_1803df8ae_0:;
L_1803df8ae_1:;
wr(s->u,39,8,rd(s->r,4608,8));
L_1803df8ae_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,39,4),4),8));
L_1803df8ae_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,43,4),4),8));
L_1803df8ae_4:;
/* 1803df8b2: subsd xmm1, xmm0 */
L_1803df8b2_0:;
L_1803df8b2_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803df8b2_2:;
/* 1803df8b6: cvtsd2ss xmm0, xmm1 */
L_1803df8b6_0:;
L_1803df8b6_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4672,8),8),4));
L_1803df8b6_2:;
/* 1803df8ba: movss dword ptr [rbx + 0x20], xmm0 */
L_1803df8ba_0:;
L_1803df8ba_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803df8ba_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803df8ba_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df8ba_4:;
/* 1803df8bf: jl 0x1803df760 */
L_1803df8bf_0:;
L_1803df8bf_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df8bf_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803df760);}
L_1803df8bf_3:;
return UINT64_C(0x1803df8c5);
}
uint64_t b_1803df8c5(CPU*s){
/* 1803df8c5: movaps xmm11, xmmword ptr [rsp + 0x20] */
L_1803df8c5_0:;
L_1803df8c5_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803df8c5_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803df8c5_3:;
wr(s->u,68,16,rd(s->u,24,16));
L_1803df8c5_4:;
wr(s->r,5312,4,rd(s->u,68,4));
L_1803df8c5_5:;
wr(s->r,5316,4,rd(s->u,72,4));
L_1803df8c5_6:;
wr(s->r,5320,4,rd(s->u,76,4));
L_1803df8c5_7:;
wr(s->r,5324,4,rd(s->u,80,4));
L_1803df8c5_8:;
/* 1803df8cb: movaps xmm10, xmmword ptr [rsp + 0x30] */
L_1803df8cb_0:;
L_1803df8cb_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803df8cb_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803df8cb_3:;
wr(s->u,68,16,rd(s->u,24,16));
L_1803df8cb_4:;
wr(s->r,5248,4,rd(s->u,68,4));
L_1803df8cb_5:;
wr(s->r,5252,4,rd(s->u,72,4));
L_1803df8cb_6:;
wr(s->r,5256,4,rd(s->u,76,4));
L_1803df8cb_7:;
wr(s->r,5260,4,rd(s->u,80,4));
L_1803df8cb_8:;
/* 1803df8d1: movaps xmm9, xmmword ptr [rsp + 0x40] */
L_1803df8d1_0:;
L_1803df8d1_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803df8d1_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803df8d1_3:;
wr(s->u,68,16,rd(s->u,24,16));
L_1803df8d1_4:;
wr(s->r,5184,4,rd(s->u,68,4));
L_1803df8d1_5:;
wr(s->r,5188,4,rd(s->u,72,4));
L_1803df8d1_6:;
wr(s->r,5192,4,rd(s->u,76,4));
L_1803df8d1_7:;
wr(s->r,5196,4,rd(s->u,80,4));
L_1803df8d1_8:;
/* 1803df8d7: movaps xmm8, xmmword ptr [rsp + 0x50] */
L_1803df8d7_0:;
L_1803df8d7_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803df8d7_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803df8d7_3:;
wr(s->u,68,16,rd(s->u,24,16));
L_1803df8d7_4:;
wr(s->r,5120,4,rd(s->u,68,4));
L_1803df8d7_5:;
wr(s->r,5124,4,rd(s->u,72,4));
L_1803df8d7_6:;
wr(s->r,5128,4,rd(s->u,76,4));
L_1803df8d7_7:;
wr(s->r,5132,4,rd(s->u,80,4));
L_1803df8d7_8:;
/* 1803df8dd: movaps xmm7, xmmword ptr [rsp + 0x60] */
L_1803df8dd_0:;
L_1803df8dd_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803df8dd_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803df8dd_3:;
wr(s->u,68,16,rd(s->u,24,16));
L_1803df8dd_4:;
wr(s->r,5056,4,rd(s->u,68,4));
L_1803df8dd_5:;
wr(s->r,5060,4,rd(s->u,72,4));
L_1803df8dd_6:;
wr(s->r,5064,4,rd(s->u,76,4));
L_1803df8dd_7:;
wr(s->r,5068,4,rd(s->u,80,4));
L_1803df8dd_8:;
/* 1803df8e2: movaps xmm6, xmmword ptr [rsp + 0x70] */
L_1803df8e2_0:;
L_1803df8e2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803df8e2_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803df8e2_3:;
wr(s->u,68,16,rd(s->u,24,16));
L_1803df8e2_4:;
wr(s->r,4992,4,rd(s->u,68,4));
L_1803df8e2_5:;
wr(s->r,4996,4,rd(s->u,72,4));
L_1803df8e2_6:;
wr(s->r,5000,4,rd(s->u,76,4));
L_1803df8e2_7:;
wr(s->r,5004,4,rd(s->u,80,4));
L_1803df8e2_8:;
/* 1803df8e7: cmp dword ptr [rbx + 0x38], edi */
L_1803df8e7_0:;
L_1803df8e7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803df8e7_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df8e7_3:;
wr(s->u,52,4,rd(s->u,40,4));
L_1803df8e7_4:;
wr(s->r,512,1,(rd(s->u,52,4)<rd(s->r,56,4)));
L_1803df8e7_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,52,4),rd(s->r,56,4),4,1));
L_1803df8e7_6:;
wr(s->u,56,4,(rd(s->u,52,4)-rd(s->r,56,4)));
L_1803df8e7_7:;
wr(s->r,519,1,(sx(rd(s->u,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df8e7_8:;
wr(s->r,518,1,(rd(s->u,56,4)==((U)UINT64_C(0x0))));
L_1803df8e7_9:;
wr(s->u,46,4,(rd(s->u,56,4)&((U)UINT64_C(0xff))));
L_1803df8e7_10:;
wr(s->u,50,1,pop(rd(s->u,46,4),4));
L_1803df8e7_11:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803df8e7_12:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803df8e7_13:;
/* 1803df8ea: movsd xmm1, qword ptr [rbx + 0x48] */
L_1803df8ea_0:;
L_1803df8ea_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803df8ea_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df8ea_3:;
wr(s->r,4672,8,rd(s->u,16,8));
L_1803df8ea_4:;
wr(s->r,4680,8,((U)UINT64_C(0x0)));
L_1803df8ea_5:;
/* 1803df8ef: movd xmm0, r14d */
L_1803df8ef_0:;
L_1803df8ef_1:;
wr(s->r,4608,16,rd(s->r,176,4));
L_1803df8ef_2:;
/* 1803df8f4: cvtdq2pd xmm0, xmm0 */
L_1803df8f4_0:;
L_1803df8f4_1:;
wr(s->u,60,8,rd(s->r,4608,8));
L_1803df8f4_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,60,4),4),8));
L_1803df8f4_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,64,4),4),8));
L_1803df8f4_4:;
/* 1803df8f8: subsd xmm1, xmm0 */
L_1803df8f8_0:;
L_1803df8f8_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803df8f8_2:;
/* 1803df8fc: movsd qword ptr [rbx + 0x48], xmm1 */
L_1803df8fc_0:;
L_1803df8fc_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803df8fc_2:;
wr(s->u,16,8,rd(s->r,4672,8));
L_1803df8fc_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803df8fc_4:;
/* 1803df901: jle 0x1803df94e */
L_1803df901_0:;
L_1803df901_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df901_2:;
wr(s->u,45,1,((rd(s->r,518,1)!=0)||(rd(s->u,44,1)!=0)));
L_1803df901_3:;
if(rd(s->u,45,1)){return UINT64_C(0x1803df94e);}
L_1803df901_4:;
return UINT64_C(0x1803df903);
}
uint64_t b_1803df8e7(CPU*s){
/* 1803df8e7: cmp dword ptr [rbx + 0x38], edi */
L_1803df8e7_0:;
L_1803df8e7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803df8e7_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df8e7_3:;
wr(s->u,28,4,rd(s->u,16,4));
L_1803df8e7_4:;
wr(s->r,512,1,(rd(s->u,28,4)<rd(s->r,56,4)));
L_1803df8e7_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,28,4),rd(s->r,56,4),4,1));
L_1803df8e7_6:;
wr(s->u,32,4,(rd(s->u,28,4)-rd(s->r,56,4)));
L_1803df8e7_7:;
wr(s->r,519,1,(sx(rd(s->u,32,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df8e7_8:;
wr(s->r,518,1,(rd(s->u,32,4)==((U)UINT64_C(0x0))));
L_1803df8e7_9:;
wr(s->u,22,4,(rd(s->u,32,4)&((U)UINT64_C(0xff))));
L_1803df8e7_10:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803df8e7_11:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803df8e7_12:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803df8e7_13:;
/* 1803df8ea: movsd xmm1, qword ptr [rbx + 0x48] */
L_1803df8ea_0:;
L_1803df8ea_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803df8ea_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df8ea_3:;
wr(s->r,4672,8,rd(s->u,8,8));
L_1803df8ea_4:;
wr(s->r,4680,8,((U)UINT64_C(0x0)));
L_1803df8ea_5:;
/* 1803df8ef: movd xmm0, r14d */
L_1803df8ef_0:;
L_1803df8ef_1:;
wr(s->r,4608,16,rd(s->r,176,4));
L_1803df8ef_2:;
/* 1803df8f4: cvtdq2pd xmm0, xmm0 */
L_1803df8f4_0:;
L_1803df8f4_1:;
wr(s->u,36,8,rd(s->r,4608,8));
L_1803df8f4_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,36,4),4),8));
L_1803df8f4_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,40,4),4),8));
L_1803df8f4_4:;
/* 1803df8f8: subsd xmm1, xmm0 */
L_1803df8f8_0:;
L_1803df8f8_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803df8f8_2:;
/* 1803df8fc: movsd qword ptr [rbx + 0x48], xmm1 */
L_1803df8fc_0:;
L_1803df8fc_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803df8fc_2:;
wr(s->u,8,8,rd(s->r,4672,8));
L_1803df8fc_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803df8fc_4:;
/* 1803df901: jle 0x1803df94e */
L_1803df901_0:;
L_1803df901_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df901_2:;
wr(s->u,21,1,((rd(s->r,518,1)!=0)||(rd(s->u,20,1)!=0)));
L_1803df901_3:;
if(rd(s->u,21,1)){return UINT64_C(0x1803df94e);}
L_1803df901_4:;
return UINT64_C(0x1803df903);
}
uint64_t b_1803df903(CPU*s){
/* 1803df903: mov r8, rdi */
L_1803df903_0:;
L_1803df903_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803df903_2:;
/* 1803df906: nop word ptr [rax + rax] */
L_1803df906_0:;
L_1803df906_1:;
wr(s->u,32,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803df906_2:;
wr(s->u,40,8,(rd(s->r,0,8)+rd(s->u,32,8)));
L_1803df906_3:;
/* 1803df910: mov rax, qword ptr [rbx + 8] */
L_1803df910_0:;
L_1803df910_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df910_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df910_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803df910_4:;
/* 1803df914: inc edi */
L_1803df914_0:;
L_1803df914_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),((U)UINT64_C(0x1)),4,0));
L_1803df914_2:;
wr(s->r,56,4,(rd(s->r,56,4)+((U)UINT64_C(0x1))));
L_1803df914_3:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803df914_4:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df914_5:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803df914_6:;
wr(s->u,65,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803df914_7:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803df914_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803df914_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803df914_10:;
/* 1803df916: add r8, 8 */
L_1803df916_0:;
L_1803df916_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803df916_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803df916_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803df916_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df916_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803df916_6:;
wr(s->u,65,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803df916_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803df916_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803df916_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803df916_10:;
/* 1803df91a: mov rcx, qword ptr [r8 + rax - 8] */
L_1803df91a_0:;
L_1803df91a_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,128,8)));
L_1803df91a_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803df91a_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803df91a_4:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803df91a_5:;
wr(s->r,8,8,rd(s->u,56,8));
L_1803df91a_6:;
/* 1803df91f: mov eax, dword ptr [rcx + r14*4 - 0xc] */
L_1803df91f_0:;
L_1803df91f_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff4))+rd(s->r,8,8)));
L_1803df91f_2:;
wr(s->u,16,8,(rd(s->r,176,8)*((U)UINT64_C(0x4))));
L_1803df91f_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803df91f_4:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803df91f_5:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803df91f_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803df91f_7:;
/* 1803df924: mov dword ptr [rcx - 0xc], eax */
L_1803df924_0:;
L_1803df924_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803df924_2:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803df924_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803df924_4:;
/* 1803df927: mov rax, qword ptr [rbx + 8] */
L_1803df927_0:;
L_1803df927_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df927_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df927_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803df927_4:;
/* 1803df92b: mov rdx, qword ptr [r8 + rax - 8] */
L_1803df92b_0:;
L_1803df92b_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,128,8)));
L_1803df92b_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803df92b_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803df92b_4:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803df92b_5:;
wr(s->r,16,8,rd(s->u,56,8));
L_1803df92b_6:;
/* 1803df930: mov ecx, dword ptr [rdx + r14*4 - 8] */
L_1803df930_0:;
L_1803df930_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,16,8)));
L_1803df930_2:;
wr(s->u,16,8,(rd(s->r,176,8)*((U)UINT64_C(0x4))));
L_1803df930_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803df930_4:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803df930_5:;
wr(s->r,8,4,rd(s->u,52,4));
L_1803df930_6:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803df930_7:;
/* 1803df935: mov dword ptr [rdx - 8], ecx */
L_1803df935_0:;
L_1803df935_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803df935_2:;
wr(s->u,48,4,rd(s->r,8,4));
L_1803df935_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803df935_4:;
/* 1803df938: mov rcx, qword ptr [rbx + 8] */
L_1803df938_0:;
L_1803df938_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df938_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df938_3:;
wr(s->r,8,8,rd(s->u,56,8));
L_1803df938_4:;
/* 1803df93c: mov rdx, qword ptr [r8 + rcx - 8] */
L_1803df93c_0:;
L_1803df93c_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,128,8)));
L_1803df93c_2:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803df93c_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803df93c_4:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803df93c_5:;
wr(s->r,16,8,rd(s->u,56,8));
L_1803df93c_6:;
/* 1803df941: mov ecx, dword ptr [rdx + r14*4 - 4] */
L_1803df941_0:;
L_1803df941_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,16,8)));
L_1803df941_2:;
wr(s->u,16,8,(rd(s->r,176,8)*((U)UINT64_C(0x4))));
L_1803df941_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803df941_4:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803df941_5:;
wr(s->r,8,4,rd(s->u,52,4));
L_1803df941_6:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803df941_7:;
/* 1803df946: mov dword ptr [rdx - 4], ecx */
L_1803df946_0:;
L_1803df946_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803df946_2:;
wr(s->u,48,4,rd(s->r,8,4));
L_1803df946_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803df946_4:;
/* 1803df949: cmp edi, dword ptr [rbx + 0x38] */
L_1803df949_0:;
L_1803df949_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803df949_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df949_3:;
wr(s->u,75,4,rd(s->u,48,4));
L_1803df949_4:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->u,75,4)));
L_1803df949_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->u,75,4),4,1));
L_1803df949_6:;
wr(s->u,79,4,(rd(s->r,56,4)-rd(s->u,75,4)));
L_1803df949_7:;
wr(s->r,519,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df949_8:;
wr(s->r,518,1,(rd(s->u,79,4)==((U)UINT64_C(0x0))));
L_1803df949_9:;
wr(s->u,65,4,(rd(s->u,79,4)&((U)UINT64_C(0xff))));
L_1803df949_10:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803df949_11:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803df949_12:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803df949_13:;
/* 1803df94c: jl 0x1803df910 */
L_1803df94c_0:;
L_1803df94c_1:;
wr(s->u,64,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df94c_2:;
if(rd(s->u,64,1)){goto L_1803df910_0;}
L_1803df94c_3:;
return UINT64_C(0x1803df94e);
}
uint64_t b_1803df910(CPU*s){
/* 1803df910: mov rax, qword ptr [rbx + 8] */
L_1803df910_0:;
L_1803df910_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df910_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df910_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803df910_4:;
/* 1803df914: inc edi */
L_1803df914_0:;
L_1803df914_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),((U)UINT64_C(0x1)),4,0));
L_1803df914_2:;
wr(s->r,56,4,(rd(s->r,56,4)+((U)UINT64_C(0x1))));
L_1803df914_3:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803df914_4:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df914_5:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803df914_6:;
wr(s->u,49,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803df914_7:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803df914_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803df914_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803df914_10:;
/* 1803df916: add r8, 8 */
L_1803df916_0:;
L_1803df916_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803df916_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803df916_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803df916_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df916_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803df916_6:;
wr(s->u,49,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803df916_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803df916_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803df916_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803df916_10:;
/* 1803df91a: mov rcx, qword ptr [r8 + rax - 8] */
L_1803df91a_0:;
L_1803df91a_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,128,8)));
L_1803df91a_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803df91a_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803df91a_4:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803df91a_5:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803df91a_6:;
/* 1803df91f: mov eax, dword ptr [rcx + r14*4 - 0xc] */
L_1803df91f_0:;
L_1803df91f_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff4))+rd(s->r,8,8)));
L_1803df91f_2:;
wr(s->u,16,8,(rd(s->r,176,8)*((U)UINT64_C(0x4))));
L_1803df91f_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803df91f_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803df91f_5:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803df91f_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803df91f_7:;
/* 1803df924: mov dword ptr [rcx - 0xc], eax */
L_1803df924_0:;
L_1803df924_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803df924_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803df924_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803df924_4:;
/* 1803df927: mov rax, qword ptr [rbx + 8] */
L_1803df927_0:;
L_1803df927_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df927_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df927_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803df927_4:;
/* 1803df92b: mov rdx, qword ptr [r8 + rax - 8] */
L_1803df92b_0:;
L_1803df92b_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,128,8)));
L_1803df92b_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803df92b_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803df92b_4:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803df92b_5:;
wr(s->r,16,8,rd(s->u,40,8));
L_1803df92b_6:;
/* 1803df930: mov ecx, dword ptr [rdx + r14*4 - 8] */
L_1803df930_0:;
L_1803df930_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,16,8)));
L_1803df930_2:;
wr(s->u,16,8,(rd(s->r,176,8)*((U)UINT64_C(0x4))));
L_1803df930_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803df930_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803df930_5:;
wr(s->r,8,4,rd(s->u,36,4));
L_1803df930_6:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803df930_7:;
/* 1803df935: mov dword ptr [rdx - 8], ecx */
L_1803df935_0:;
L_1803df935_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803df935_2:;
wr(s->u,32,4,rd(s->r,8,4));
L_1803df935_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803df935_4:;
/* 1803df938: mov rcx, qword ptr [rbx + 8] */
L_1803df938_0:;
L_1803df938_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df938_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df938_3:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803df938_4:;
/* 1803df93c: mov rdx, qword ptr [r8 + rcx - 8] */
L_1803df93c_0:;
L_1803df93c_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,128,8)));
L_1803df93c_2:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803df93c_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803df93c_4:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803df93c_5:;
wr(s->r,16,8,rd(s->u,40,8));
L_1803df93c_6:;
/* 1803df941: mov ecx, dword ptr [rdx + r14*4 - 4] */
L_1803df941_0:;
L_1803df941_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,16,8)));
L_1803df941_2:;
wr(s->u,16,8,(rd(s->r,176,8)*((U)UINT64_C(0x4))));
L_1803df941_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803df941_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803df941_5:;
wr(s->r,8,4,rd(s->u,36,4));
L_1803df941_6:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803df941_7:;
/* 1803df946: mov dword ptr [rdx - 4], ecx */
L_1803df946_0:;
L_1803df946_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803df946_2:;
wr(s->u,32,4,rd(s->r,8,4));
L_1803df946_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803df946_4:;
/* 1803df949: cmp edi, dword ptr [rbx + 0x38] */
L_1803df949_0:;
L_1803df949_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803df949_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df949_3:;
wr(s->u,59,4,rd(s->u,32,4));
L_1803df949_4:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->u,59,4)));
L_1803df949_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->u,59,4),4,1));
L_1803df949_6:;
wr(s->u,63,4,(rd(s->r,56,4)-rd(s->u,59,4)));
L_1803df949_7:;
wr(s->r,519,1,(sx(rd(s->u,63,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df949_8:;
wr(s->r,518,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803df949_9:;
wr(s->u,49,4,(rd(s->u,63,4)&((U)UINT64_C(0xff))));
L_1803df949_10:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803df949_11:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803df949_12:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803df949_13:;
/* 1803df94c: jl 0x1803df910 */
L_1803df94c_0:;
L_1803df94c_1:;
wr(s->u,48,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df94c_2:;
if(rd(s->u,48,1)){goto L_1803df910_0;}
L_1803df94c_3:;
return UINT64_C(0x1803df94e);
}
uint64_t b_1803df94e(CPU*s){
/* 1803df94e: cvttsd2si ecx, qword ptr [rbx + 0x48] */
L_1803df94e_0:;
L_1803df94e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803df94e_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df94e_3:;
wr(s->r,8,4,ftrunc(fv(rd(s->u,12,8),8),4));
L_1803df94e_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803df94e_5:;
/* 1803df953: mov eax, r15d */
L_1803df953_0:;
L_1803df953_1:;
wr(s->r,0,4,rd(s->r,184,4));
L_1803df953_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803df953_3:;
/* 1803df956: mov dword ptr [rbx + 0x34], ecx */
L_1803df956_0:;
L_1803df956_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803df956_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_1803df956_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803df956_4:;
/* 1803df959: add rsp, 0x88 */
L_1803df959_0:;
L_1803df959_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x88)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803df959_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x88)),8,0));
L_1803df959_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x88))));
L_1803df959_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df959_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803df959_6:;
wr(s->u,20,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803df959_7:;
wr(s->u,28,1,pop(rd(s->u,20,8),8));
L_1803df959_8:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803df959_9:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803df959_10:;
/* 1803df960: pop r15 */
L_1803df960_0:;
L_1803df960_1:;
wr(s->u,30,8,((U)UINT64_C(0x0)));
L_1803df960_2:;
wr(s->u,30,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df960_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df960_4:;
wr(s->r,184,8,rd(s->u,30,8));
L_1803df960_5:;
/* 1803df962: pop r14 */
L_1803df962_0:;
L_1803df962_1:;
wr(s->u,30,8,((U)UINT64_C(0x0)));
L_1803df962_2:;
wr(s->u,30,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df962_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df962_4:;
wr(s->r,176,8,rd(s->u,30,8));
L_1803df962_5:;
/* 1803df964: pop rdi */
L_1803df964_0:;
L_1803df964_1:;
wr(s->u,30,8,((U)UINT64_C(0x0)));
L_1803df964_2:;
wr(s->u,30,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df964_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df964_4:;
wr(s->r,56,8,rd(s->u,30,8));
L_1803df964_5:;
/* 1803df965: pop rbx */
L_1803df965_0:;
L_1803df965_1:;
wr(s->u,30,8,((U)UINT64_C(0x0)));
L_1803df965_2:;
wr(s->u,30,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df965_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df965_4:;
wr(s->r,24,8,rd(s->u,30,8));
L_1803df965_5:;
/* 1803df966: ret  */
L_1803df966_0:;
L_1803df966_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803df966_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803df966_3:;
return (uint64_t)rd(s->r,648,8);
L_1803df966_4:;
return UINT64_C(0x1803df967);
}
uint64_t b_1803df970(CPU*s){
/* 1803df970: mov rax, rsp */
L_1803df970_0:;
L_1803df970_1:;
wr(s->r,0,8,rd(s->r,32,8));
L_1803df970_2:;
/* 1803df973: mov qword ptr [rax + 0x20], r9 */
L_1803df973_0:;
L_1803df973_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x20))));
L_1803df973_2:;
wr(s->u,8,8,rd(s->r,136,8));
L_1803df973_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803df973_4:;
/* 1803df977: push rbx */
L_1803df977_0:;
L_1803df977_1:;
wr(s->u,22,8,rd(s->r,24,8));
L_1803df977_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df977_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,22,8));
L_1803df977_4:;
/* 1803df978: push rdi */
L_1803df978_0:;
L_1803df978_1:;
wr(s->u,22,8,rd(s->r,56,8));
L_1803df978_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df978_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,22,8));
L_1803df978_4:;
/* 1803df979: push r15 */
L_1803df979_0:;
L_1803df979_1:;
wr(s->u,22,8,rd(s->r,184,8));
L_1803df979_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df979_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,22,8));
L_1803df979_4:;
/* 1803df97b: sub rsp, 0x90 */
L_1803df97b_0:;
L_1803df97b_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x90))));
L_1803df97b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x90)),8,1));
L_1803df97b_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x90))));
L_1803df97b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df97b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803df97b_6:;
wr(s->u,30,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803df97b_7:;
wr(s->u,38,1,pop(rd(s->u,30,8),8));
L_1803df97b_8:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803df97b_9:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803df97b_10:;
/* 1803df982: mov qword ptr [rax + 8], rbp */
L_1803df982_0:;
L_1803df982_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803df982_2:;
wr(s->u,8,8,rd(s->r,40,8));
L_1803df982_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803df982_4:;
/* 1803df986: xor edi, edi */
L_1803df986_0:;
L_1803df986_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803df986_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803df986_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803df986_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803df986_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df986_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803df986_7:;
wr(s->u,30,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803df986_8:;
wr(s->u,38,1,pop(rd(s->u,30,4),4));
L_1803df986_9:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803df986_10:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803df986_11:;
/* 1803df988: mov qword ptr [rax + 0x10], rsi */
L_1803df988_0:;
L_1803df988_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803df988_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803df988_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803df988_4:;
/* 1803df98c: cmp dword ptr [rcx + 0x38], edi */
L_1803df98c_0:;
L_1803df98c_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x38))));
L_1803df98c_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df98c_3:;
wr(s->u,40,4,rd(s->u,16,4));
L_1803df98c_4:;
wr(s->r,512,1,(rd(s->u,40,4)<rd(s->r,56,4)));
L_1803df98c_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,40,4),rd(s->r,56,4),4,1));
L_1803df98c_6:;
wr(s->u,44,4,(rd(s->u,40,4)-rd(s->r,56,4)));
L_1803df98c_7:;
wr(s->r,519,1,(sx(rd(s->u,44,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df98c_8:;
wr(s->r,518,1,(rd(s->u,44,4)==((U)UINT64_C(0x0))));
L_1803df98c_9:;
wr(s->u,30,4,(rd(s->u,44,4)&((U)UINT64_C(0xff))));
L_1803df98c_10:;
wr(s->u,38,1,pop(rd(s->u,30,4),4));
L_1803df98c_11:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803df98c_12:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803df98c_13:;
/* 1803df98f: mov qword ptr [rax + 0x18], r12 */
L_1803df98f_0:;
L_1803df98f_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x18))));
L_1803df98f_2:;
wr(s->u,8,8,rd(s->r,160,8));
L_1803df98f_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803df98f_4:;
/* 1803df993: mov qword ptr [rax - 0x28], r14 */
L_1803df993_0:;
L_1803df993_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xffffffffffffffd8))));
L_1803df993_2:;
wr(s->u,8,8,rd(s->r,176,8));
L_1803df993_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803df993_4:;
/* 1803df997: mov r14, rdx */
L_1803df997_0:;
L_1803df997_1:;
wr(s->r,176,8,rd(s->r,16,8));
L_1803df997_2:;
/* 1803df99a: mov rsi, r9 */
L_1803df99a_0:;
L_1803df99a_1:;
wr(s->r,48,8,rd(s->r,136,8));
L_1803df99a_2:;
/* 1803df99d: movsxd r12, r8d */
L_1803df99d_0:;
L_1803df99d_1:;
wr(s->r,160,8,(U)sx(rd(s->r,128,4),4));
L_1803df99d_2:;
/* 1803df9a0: mov rbx, rcx */
L_1803df9a0_0:;
L_1803df9a0_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803df9a0_2:;
/* 1803df9a3: mov r15d, edi */
L_1803df9a3_0:;
L_1803df9a3_1:;
wr(s->r,184,4,rd(s->r,56,4));
L_1803df9a3_2:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803df9a3_3:;
/* 1803df9a6: mov ebp, edi */
L_1803df9a6_0:;
L_1803df9a6_1:;
wr(s->r,40,4,rd(s->r,56,4));
L_1803df9a6_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803df9a6_3:;
/* 1803df9a8: jle 0x1803df9f7 */
L_1803df9a8_0:;
L_1803df9a8_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df9a8_2:;
wr(s->u,21,1,((rd(s->r,518,1)!=0)||(rd(s->u,20,1)!=0)));
L_1803df9a8_3:;
if(rd(s->u,21,1)){return UINT64_C(0x1803df9f7);}
L_1803df9a8_4:;
return UINT64_C(0x1803df9aa);
}
uint64_t b_1803df982(CPU*s){
/* 1803df982: mov qword ptr [rax + 8], rbp */
L_1803df982_0:;
L_1803df982_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803df982_2:;
wr(s->u,8,8,rd(s->r,40,8));
L_1803df982_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803df982_4:;
/* 1803df986: xor edi, edi */
L_1803df986_0:;
L_1803df986_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803df986_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803df986_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803df986_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803df986_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df986_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803df986_7:;
wr(s->u,22,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803df986_8:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803df986_9:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803df986_10:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803df986_11:;
/* 1803df988: mov qword ptr [rax + 0x10], rsi */
L_1803df988_0:;
L_1803df988_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803df988_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803df988_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803df988_4:;
/* 1803df98c: cmp dword ptr [rcx + 0x38], edi */
L_1803df98c_0:;
L_1803df98c_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x38))));
L_1803df98c_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df98c_3:;
wr(s->u,28,4,rd(s->u,16,4));
L_1803df98c_4:;
wr(s->r,512,1,(rd(s->u,28,4)<rd(s->r,56,4)));
L_1803df98c_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,28,4),rd(s->r,56,4),4,1));
L_1803df98c_6:;
wr(s->u,32,4,(rd(s->u,28,4)-rd(s->r,56,4)));
L_1803df98c_7:;
wr(s->r,519,1,(sx(rd(s->u,32,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df98c_8:;
wr(s->r,518,1,(rd(s->u,32,4)==((U)UINT64_C(0x0))));
L_1803df98c_9:;
wr(s->u,22,4,(rd(s->u,32,4)&((U)UINT64_C(0xff))));
L_1803df98c_10:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803df98c_11:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803df98c_12:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803df98c_13:;
/* 1803df98f: mov qword ptr [rax + 0x18], r12 */
L_1803df98f_0:;
L_1803df98f_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x18))));
L_1803df98f_2:;
wr(s->u,8,8,rd(s->r,160,8));
L_1803df98f_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803df98f_4:;
/* 1803df993: mov qword ptr [rax - 0x28], r14 */
L_1803df993_0:;
L_1803df993_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xffffffffffffffd8))));
L_1803df993_2:;
wr(s->u,8,8,rd(s->r,176,8));
L_1803df993_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803df993_4:;
/* 1803df997: mov r14, rdx */
L_1803df997_0:;
L_1803df997_1:;
wr(s->r,176,8,rd(s->r,16,8));
L_1803df997_2:;
/* 1803df99a: mov rsi, r9 */
L_1803df99a_0:;
L_1803df99a_1:;
wr(s->r,48,8,rd(s->r,136,8));
L_1803df99a_2:;
/* 1803df99d: movsxd r12, r8d */
L_1803df99d_0:;
L_1803df99d_1:;
wr(s->r,160,8,(U)sx(rd(s->r,128,4),4));
L_1803df99d_2:;
/* 1803df9a0: mov rbx, rcx */
L_1803df9a0_0:;
L_1803df9a0_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803df9a0_2:;
/* 1803df9a3: mov r15d, edi */
L_1803df9a3_0:;
L_1803df9a3_1:;
wr(s->r,184,4,rd(s->r,56,4));
L_1803df9a3_2:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803df9a3_3:;
/* 1803df9a6: mov ebp, edi */
L_1803df9a6_0:;
L_1803df9a6_1:;
wr(s->r,40,4,rd(s->r,56,4));
L_1803df9a6_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803df9a6_3:;
/* 1803df9a8: jle 0x1803df9f7 */
L_1803df9a8_0:;
L_1803df9a8_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df9a8_2:;
wr(s->u,21,1,((rd(s->r,518,1)!=0)||(rd(s->u,20,1)!=0)));
L_1803df9a8_3:;
if(rd(s->u,21,1)){return UINT64_C(0x1803df9f7);}
L_1803df9a8_4:;
return UINT64_C(0x1803df9aa);
}
uint64_t b_1803df9aa(CPU*s){
/* 1803df9aa: mov qword ptr [rax - 0x20], r13 */
L_1803df9aa_0:;
L_1803df9aa_1:;
wr(s->u,5,8,(rd(s->r,0,8)+((U)UINT64_C(0xffffffffffffffe0))));
L_1803df9aa_2:;
wr(s->u,45,8,rd(s->r,168,8));
L_1803df9aa_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,45,8));
L_1803df9aa_4:;
/* 1803df9ae: mov r13, r12 */
L_1803df9ae_0:;
L_1803df9ae_1:;
wr(s->r,168,8,rd(s->r,160,8));
L_1803df9ae_2:;
/* 1803df9b1: mov rsi, rdi */
L_1803df9b1_0:;
L_1803df9b1_1:;
wr(s->r,48,8,rd(s->r,56,8));
L_1803df9b1_2:;
/* 1803df9b4: shl r13, 2 */
L_1803df9b4_0:;
L_1803df9b4_1:;
wr(s->u,105,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803df9b4_2:;
wr(s->u,109,8,rd(s->r,168,8));
L_1803df9b4_3:;
wr(s->r,168,8,((rd(s->u,105,4)>=64)?0:(rd(s->r,168,8)<<rd(s->u,105,4))));
L_1803df9b4_4:;
wr(s->u,88,1,(rd(s->u,105,4)==((U)UINT64_C(0x0))));
L_1803df9b4_5:;
wr(s->u,89,4,(rd(s->u,105,4)-((U)UINT64_C(0x1))));
L_1803df9b4_6:;
wr(s->u,93,8,((rd(s->u,89,4)>=64)?0:(rd(s->u,109,8)<<rd(s->u,89,4))));
L_1803df9b4_7:;
wr(s->u,101,1,(sx(rd(s->u,93,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df9b4_8:;
wr(s->u,0,1,rd(s->u,88,1));
L_1803df9b4_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803df9b4_10:;
wr(s->u,2,1,(!rd(s->u,88,1)));
L_1803df9b4_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803df9b4_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,101,1)));
L_1803df9b4_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803df9b4_14:;
wr(s->u,102,1,(rd(s->u,105,4)==((U)UINT64_C(0x1))));
L_1803df9b4_15:;
wr(s->u,103,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df9b4_16:;
wr(s->u,104,1,(rd(s->r,512,1)^rd(s->u,103,1)));
L_1803df9b4_17:;
wr(s->u,0,1,rd(s->u,102,1));
L_1803df9b4_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,104,1)));
L_1803df9b4_19:;
wr(s->u,2,1,(!rd(s->u,102,1)));
L_1803df9b4_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803df9b4_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803df9b4_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803df9b4_23:;
wr(s->u,65,1,(rd(s->u,105,4)!=((U)UINT64_C(0x0))));
L_1803df9b4_24:;
wr(s->u,66,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df9b4_25:;
wr(s->u,67,1,(!rd(s->u,65,1)));
L_1803df9b4_26:;
wr(s->u,68,1,(rd(s->u,67,1)&rd(s->r,519,1)));
L_1803df9b4_27:;
wr(s->u,69,1,(rd(s->u,65,1)&rd(s->u,66,1)));
L_1803df9b4_28:;
wr(s->r,519,1,(rd(s->u,68,1)|rd(s->u,69,1)));
L_1803df9b4_29:;
wr(s->u,70,1,(rd(s->r,168,8)==((U)UINT64_C(0x0))));
L_1803df9b4_30:;
wr(s->u,71,1,(!rd(s->u,65,1)));
L_1803df9b4_31:;
wr(s->u,72,1,(rd(s->u,71,1)&rd(s->r,518,1)));
L_1803df9b4_32:;
wr(s->u,73,1,(rd(s->u,65,1)&rd(s->u,70,1)));
L_1803df9b4_33:;
wr(s->r,518,1,(rd(s->u,72,1)|rd(s->u,73,1)));
L_1803df9b4_34:;
wr(s->u,74,8,(rd(s->r,168,8)&((U)UINT64_C(0xff))));
L_1803df9b4_35:;
wr(s->u,82,1,pop(rd(s->u,74,8),8));
L_1803df9b4_36:;
wr(s->u,83,1,(rd(s->u,82,1)&((U)UINT64_C(0x1))));
L_1803df9b4_37:;
wr(s->u,84,1,(rd(s->u,83,1)==((U)UINT64_C(0x0))));
L_1803df9b4_38:;
wr(s->u,85,1,(!rd(s->u,65,1)));
L_1803df9b4_39:;
wr(s->u,86,1,(rd(s->u,85,1)&rd(s->r,514,1)));
L_1803df9b4_40:;
wr(s->u,87,1,(rd(s->u,65,1)&rd(s->u,84,1)));
L_1803df9b4_41:;
wr(s->r,514,1,(rd(s->u,86,1)|rd(s->u,87,1)));
L_1803df9b4_42:;
/* 1803df9b8: nop dword ptr [rax + rax] */
L_1803df9b8_0:;
L_1803df9b8_1:;
wr(s->u,29,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803df9b8_2:;
wr(s->u,37,8,(rd(s->r,0,8)+rd(s->u,29,8)));
L_1803df9b8_3:;
/* 1803df9c0: mov rax, qword ptr [rbx + 8] */
L_1803df9c0_0:;
L_1803df9c0_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df9c0_2:;
wr(s->u,57,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803df9c0_3:;
wr(s->r,0,8,rd(s->u,57,8));
L_1803df9c0_4:;
/* 1803df9c4: movsxd rcx, dword ptr [rbx + 0x40] */
L_1803df9c4_0:;
L_1803df9c4_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x40))));
L_1803df9c4_2:;
wr(s->u,53,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803df9c4_3:;
wr(s->r,8,8,(U)sx(rd(s->u,53,4),4));
L_1803df9c4_4:;
/* 1803df9c8: mov rdx, qword ptr [rsi + r14] */
L_1803df9c8_0:;
L_1803df9c8_1:;
wr(s->u,13,8,(rd(s->r,176,8)*((U)UINT64_C(0x1))));
L_1803df9c8_2:;
wr(s->u,21,8,(rd(s->r,48,8)+rd(s->u,13,8)));
L_1803df9c8_3:;
wr(s->u,57,8,mr((uint64_t)rd(s->u,21,8),8));
L_1803df9c8_4:;
wr(s->r,16,8,rd(s->u,57,8));
L_1803df9c8_5:;
/* 1803df9cc: mov rax, qword ptr [rsi + rax] */
L_1803df9cc_0:;
L_1803df9cc_1:;
wr(s->u,13,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803df9cc_2:;
wr(s->u,21,8,(rd(s->r,48,8)+rd(s->u,13,8)));
L_1803df9cc_3:;
wr(s->u,57,8,mr((uint64_t)rd(s->u,21,8),8));
L_1803df9cc_4:;
wr(s->r,0,8,rd(s->u,57,8));
L_1803df9cc_5:;
/* 1803df9d0: mov r8, r13 */
L_1803df9d0_0:;
L_1803df9d0_1:;
wr(s->r,128,8,rd(s->r,168,8));
L_1803df9d0_2:;
/* 1803df9d3: lea rcx, [rax + rcx*4] */
L_1803df9d3_0:;
L_1803df9d3_1:;
wr(s->u,13,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803df9d3_2:;
wr(s->u,21,8,(rd(s->r,0,8)+rd(s->u,13,8)));
L_1803df9d3_3:;
wr(s->r,8,8,rd(s->u,21,8));
L_1803df9d3_4:;
/* 1803df9d7: call 0x18000d550 */
L_1803df9d7_0:;
L_1803df9d7_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df9d7_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df9dc)));
L_1803df9d7_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803df9d7_4:;
return UINT64_C(0x1803df9dc);
}
uint64_t b_1803df9c0(CPU*s){
/* 1803df9c0: mov rax, qword ptr [rbx + 8] */
L_1803df9c0_0:;
L_1803df9c0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803df9c0_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df9c0_3:;
wr(s->r,0,8,rd(s->u,28,8));
L_1803df9c0_4:;
/* 1803df9c4: movsxd rcx, dword ptr [rbx + 0x40] */
L_1803df9c4_0:;
L_1803df9c4_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x40))));
L_1803df9c4_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df9c4_3:;
wr(s->r,8,8,(U)sx(rd(s->u,24,4),4));
L_1803df9c4_4:;
/* 1803df9c8: mov rdx, qword ptr [rsi + r14] */
L_1803df9c8_0:;
L_1803df9c8_1:;
wr(s->u,8,8,(rd(s->r,176,8)*((U)UINT64_C(0x1))));
L_1803df9c8_2:;
wr(s->u,16,8,(rd(s->r,48,8)+rd(s->u,8,8)));
L_1803df9c8_3:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df9c8_4:;
wr(s->r,16,8,rd(s->u,28,8));
L_1803df9c8_5:;
/* 1803df9cc: mov rax, qword ptr [rsi + rax] */
L_1803df9cc_0:;
L_1803df9cc_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803df9cc_2:;
wr(s->u,16,8,(rd(s->r,48,8)+rd(s->u,8,8)));
L_1803df9cc_3:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803df9cc_4:;
wr(s->r,0,8,rd(s->u,28,8));
L_1803df9cc_5:;
/* 1803df9d0: mov r8, r13 */
L_1803df9d0_0:;
L_1803df9d0_1:;
wr(s->r,128,8,rd(s->r,168,8));
L_1803df9d0_2:;
/* 1803df9d3: lea rcx, [rax + rcx*4] */
L_1803df9d3_0:;
L_1803df9d3_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803df9d3_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803df9d3_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803df9d3_4:;
/* 1803df9d7: call 0x18000d550 */
L_1803df9d7_0:;
L_1803df9d7_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803df9d7_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803df9dc)));
L_1803df9d7_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803df9d7_4:;
return UINT64_C(0x1803df9dc);
}
uint64_t b_1803df9dc(CPU*s){
/* 1803df9dc: inc ebp */
L_1803df9dc_0:;
L_1803df9dc_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),((U)UINT64_C(0x1)),4,0));
L_1803df9dc_2:;
wr(s->r,40,4,(rd(s->r,40,4)+((U)UINT64_C(0x1))));
L_1803df9dc_3:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803df9dc_4:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df9dc_5:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803df9dc_6:;
wr(s->u,13,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803df9dc_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803df9dc_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803df9dc_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803df9dc_10:;
/* 1803df9de: add rsi, 8 */
L_1803df9de_0:;
L_1803df9de_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803df9de_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x8)),8,0));
L_1803df9de_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x8))));
L_1803df9de_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803df9de_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803df9de_6:;
wr(s->u,13,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803df9de_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803df9de_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803df9de_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803df9de_10:;
/* 1803df9e2: cmp ebp, dword ptr [rbx + 0x38] */
L_1803df9e2_0:;
L_1803df9e2_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803df9e2_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df9e2_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803df9e2_4:;
wr(s->r,512,1,(rd(s->r,40,4)<rd(s->u,23,4)));
L_1803df9e2_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->u,23,4),4,1));
L_1803df9e2_6:;
wr(s->u,27,4,(rd(s->r,40,4)-rd(s->u,23,4)));
L_1803df9e2_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df9e2_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803df9e2_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803df9e2_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803df9e2_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803df9e2_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803df9e2_13:;
/* 1803df9e5: jl 0x1803df9c0 */
L_1803df9e5_0:;
L_1803df9e5_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803df9e5_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803df9c0);}
L_1803df9e5_3:;
return UINT64_C(0x1803df9e7);
}
uint64_t b_1803df9e7(CPU*s){
/* 1803df9e7: mov rsi, qword ptr [rsp + 0xc8] */
L_1803df9e7_0:;
L_1803df9e7_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc8))+rd(s->r,32,8)));
L_1803df9e7_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803df9e7_3:;
wr(s->r,48,8,rd(s->u,20,8));
L_1803df9e7_4:;
/* 1803df9ef: mov r13, qword ptr [rsp + 0x88] */
L_1803df9ef_0:;
L_1803df9ef_1:;
wr(s->u,8,8,(((U)UINT64_C(0x88))+rd(s->r,32,8)));
L_1803df9ef_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803df9ef_3:;
wr(s->r,168,8,rd(s->u,20,8));
L_1803df9ef_4:;
/* 1803df9f7: add r12d, dword ptr [rbx + 0x40] */
L_1803df9f7_0:;
L_1803df9f7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x40))));
L_1803df9f7_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df9f7_3:;
wr(s->r,512,1,(((rd(s->r,160,4)+rd(s->u,16,4))&(((U)1<<32)-1))<rd(s->r,160,4)));
L_1803df9f7_4:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df9f7_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),rd(s->u,16,4),4,0));
L_1803df9f7_6:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df9f7_7:;
wr(s->r,160,4,(rd(s->r,160,4)+rd(s->u,16,4)));
L_1803df9f7_8:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803df9f7_9:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df9f7_10:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803df9f7_11:;
wr(s->u,29,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803df9f7_12:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803df9f7_13:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803df9f7_14:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803df9f7_15:;
/* 1803df9fb: movsxd r11, dword ptr [rsp + 0xd0] */
L_1803df9fb_0:;
L_1803df9fb_1:;
wr(s->u,8,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803df9fb_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803df9fb_3:;
wr(s->r,152,8,(U)sx(rd(s->u,16,4),4));
L_1803df9fb_4:;
/* 1803dfa03: mov r14, qword ptr [rsp + 0x80] */
L_1803dfa03_0:;
L_1803dfa03_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803dfa03_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dfa03_3:;
wr(s->r,176,8,rd(s->u,20,8));
L_1803dfa03_4:;
/* 1803dfa0b: cmp dword ptr [rbx + 0x34], r12d */
L_1803dfa0b_0:;
L_1803dfa0b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803dfa0b_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfa0b_3:;
wr(s->u,35,4,rd(s->u,16,4));
L_1803dfa0b_4:;
wr(s->r,512,1,(rd(s->u,35,4)<rd(s->r,160,4)));
L_1803dfa0b_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,35,4),rd(s->r,160,4),4,1));
L_1803dfa0b_6:;
wr(s->u,39,4,(rd(s->u,35,4)-rd(s->r,160,4)));
L_1803dfa0b_7:;
wr(s->r,519,1,(sx(rd(s->u,39,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfa0b_8:;
wr(s->r,518,1,(rd(s->u,39,4)==((U)UINT64_C(0x0))));
L_1803dfa0b_9:;
wr(s->u,29,4,(rd(s->u,39,4)&((U)UINT64_C(0xff))));
L_1803dfa0b_10:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803dfa0b_11:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803dfa0b_12:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803dfa0b_13:;
/* 1803dfa0f: mov rbp, qword ptr [rsp + 0xb0] */
L_1803dfa0f_0:;
L_1803dfa0f_1:;
wr(s->u,8,8,(((U)UINT64_C(0xb0))+rd(s->r,32,8)));
L_1803dfa0f_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dfa0f_3:;
wr(s->r,40,8,rd(s->u,20,8));
L_1803dfa0f_4:;
/* 1803dfa17: mov r8, rdi */
L_1803dfa17_0:;
L_1803dfa17_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803dfa17_2:;
/* 1803dfa1a: jge 0x1803dfbf2 */
L_1803dfa1a_0:;
L_1803dfa1a_1:;
wr(s->u,28,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dfa1a_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803dfbf2);}
L_1803dfa1a_3:;
return UINT64_C(0x1803dfa20);
}
uint64_t b_1803df9f7(CPU*s){
/* 1803df9f7: add r12d, dword ptr [rbx + 0x40] */
L_1803df9f7_0:;
L_1803df9f7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x40))));
L_1803df9f7_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df9f7_3:;
wr(s->r,512,1,(((rd(s->r,160,4)+rd(s->u,16,4))&(((U)1<<32)-1))<rd(s->r,160,4)));
L_1803df9f7_4:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df9f7_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),rd(s->u,16,4),4,0));
L_1803df9f7_6:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df9f7_7:;
wr(s->r,160,4,(rd(s->r,160,4)+rd(s->u,16,4)));
L_1803df9f7_8:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803df9f7_9:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803df9f7_10:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803df9f7_11:;
wr(s->u,29,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803df9f7_12:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803df9f7_13:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803df9f7_14:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803df9f7_15:;
/* 1803df9fb: movsxd r11, dword ptr [rsp + 0xd0] */
L_1803df9fb_0:;
L_1803df9fb_1:;
wr(s->u,8,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803df9fb_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803df9fb_3:;
wr(s->r,152,8,(U)sx(rd(s->u,16,4),4));
L_1803df9fb_4:;
/* 1803dfa03: mov r14, qword ptr [rsp + 0x80] */
L_1803dfa03_0:;
L_1803dfa03_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803dfa03_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dfa03_3:;
wr(s->r,176,8,rd(s->u,20,8));
L_1803dfa03_4:;
/* 1803dfa0b: cmp dword ptr [rbx + 0x34], r12d */
L_1803dfa0b_0:;
L_1803dfa0b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803dfa0b_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfa0b_3:;
wr(s->u,35,4,rd(s->u,16,4));
L_1803dfa0b_4:;
wr(s->r,512,1,(rd(s->u,35,4)<rd(s->r,160,4)));
L_1803dfa0b_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,35,4),rd(s->r,160,4),4,1));
L_1803dfa0b_6:;
wr(s->u,39,4,(rd(s->u,35,4)-rd(s->r,160,4)));
L_1803dfa0b_7:;
wr(s->r,519,1,(sx(rd(s->u,39,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfa0b_8:;
wr(s->r,518,1,(rd(s->u,39,4)==((U)UINT64_C(0x0))));
L_1803dfa0b_9:;
wr(s->u,29,4,(rd(s->u,39,4)&((U)UINT64_C(0xff))));
L_1803dfa0b_10:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803dfa0b_11:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803dfa0b_12:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803dfa0b_13:;
/* 1803dfa0f: mov rbp, qword ptr [rsp + 0xb0] */
L_1803dfa0f_0:;
L_1803dfa0f_1:;
wr(s->u,8,8,(((U)UINT64_C(0xb0))+rd(s->r,32,8)));
L_1803dfa0f_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dfa0f_3:;
wr(s->r,40,8,rd(s->u,20,8));
L_1803dfa0f_4:;
/* 1803dfa17: mov r8, rdi */
L_1803dfa17_0:;
L_1803dfa17_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803dfa17_2:;
/* 1803dfa1a: jge 0x1803dfbf2 */
L_1803dfa1a_0:;
L_1803dfa1a_1:;
wr(s->u,28,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dfa1a_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803dfbf2);}
L_1803dfa1a_3:;
return UINT64_C(0x1803dfa20);
}
uint64_t b_1803dfa20(CPU*s){
/* 1803dfa20: movaps xmmword ptr [rsp + 0x60], xmm7 */
L_1803dfa20_0:;
L_1803dfa20_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dfa20_2:;
wr(s->u,20,16,rd(s->r,5056,16));
L_1803dfa20_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,20,16));
L_1803dfa20_4:;
/* 1803dfa25: movss xmm7, dword ptr [rip + 0x2757c3] */
L_1803dfa25_0:;
L_1803dfa25_1:;
wr(s->r,5056,4,mr(UINT64_C(0x1806551f0),4));
L_1803dfa25_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803dfa25_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803dfa25_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803dfa25_5:;
/* 1803dfa2d: movaps xmmword ptr [rsp + 0x50], xmm8 */
L_1803dfa2d_0:;
L_1803dfa2d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dfa2d_2:;
wr(s->u,20,16,rd(s->r,5120,16));
L_1803dfa2d_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,20,16));
L_1803dfa2d_4:;
/* 1803dfa33: movss xmm8, dword ptr [rip + 0x272728] */
L_1803dfa33_0:;
L_1803dfa33_1:;
wr(s->r,5120,4,mr(UINT64_C(0x180652164),4));
L_1803dfa33_2:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803dfa33_3:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803dfa33_4:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803dfa33_5:;
/* 1803dfa3c: movaps xmmword ptr [rsp + 0x40], xmm9 */
L_1803dfa3c_0:;
L_1803dfa3c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dfa3c_2:;
wr(s->u,20,16,rd(s->r,5184,16));
L_1803dfa3c_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,20,16));
L_1803dfa3c_4:;
/* 1803dfa42: movss xmm9, dword ptr [rsp + 0xd8] */
L_1803dfa42_0:;
L_1803dfa42_1:;
wr(s->u,8,8,(((U)UINT64_C(0xd8))+rd(s->r,32,8)));
L_1803dfa42_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dfa42_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803dfa42_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803dfa42_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803dfa42_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803dfa42_7:;
/* 1803dfa4c: movaps xmmword ptr [rsp + 0x30], xmm10 */
L_1803dfa4c_0:;
L_1803dfa4c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dfa4c_2:;
wr(s->u,20,16,rd(s->r,5248,16));
L_1803dfa4c_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,20,16));
L_1803dfa4c_4:;
/* 1803dfa52: movss xmm10, dword ptr [rip + 0x280049] */
L_1803dfa52_0:;
L_1803dfa52_1:;
wr(s->r,5248,4,mr(UINT64_C(0x18065faa4),4));
L_1803dfa52_2:;
wr(s->r,5252,4,((U)UINT64_C(0x0)));
L_1803dfa52_3:;
wr(s->r,5256,4,((U)UINT64_C(0x0)));
L_1803dfa52_4:;
wr(s->r,5260,4,((U)UINT64_C(0x0)));
L_1803dfa52_5:;
/* 1803dfa5b: movaps xmmword ptr [rsp + 0x20], xmm11 */
L_1803dfa5b_0:;
L_1803dfa5b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dfa5b_2:;
wr(s->u,20,16,rd(s->r,5312,16));
L_1803dfa5b_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,20,16));
L_1803dfa5b_4:;
/* 1803dfa61: movss xmm11, dword ptr [rip + 0x26d1da] */
L_1803dfa61_0:;
L_1803dfa61_1:;
wr(s->r,5312,4,mr(UINT64_C(0x18064cc44),4));
L_1803dfa61_2:;
wr(s->r,5316,4,((U)UINT64_C(0x0)));
L_1803dfa61_3:;
wr(s->r,5320,4,((U)UINT64_C(0x0)));
L_1803dfa61_4:;
wr(s->r,5324,4,((U)UINT64_C(0x0)));
L_1803dfa61_5:;
/* 1803dfa6a: movaps xmmword ptr [rsp + 0x70], xmm6 */
L_1803dfa6a_0:;
L_1803dfa6a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803dfa6a_2:;
wr(s->u,20,16,rd(s->r,4992,16));
L_1803dfa6a_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,20,16));
L_1803dfa6a_4:;
/* 1803dfa6f: nop  */
L_1803dfa6f_0:;
L_1803dfa6f_1:;
/* 1803dfa70: cmp r8, r11 */
L_1803dfa70_0:;
L_1803dfa70_1:;
wr(s->u,47,8,rd(s->r,152,8));
L_1803dfa70_2:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->u,47,8)));
L_1803dfa70_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->u,47,8),8,1));
L_1803dfa70_4:;
wr(s->u,55,8,(rd(s->r,128,8)-rd(s->u,47,8)));
L_1803dfa70_5:;
wr(s->r,519,1,(sx(rd(s->u,55,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfa70_6:;
wr(s->r,518,1,(rd(s->u,55,8)==((U)UINT64_C(0x0))));
L_1803dfa70_7:;
wr(s->u,37,8,(rd(s->u,55,8)&((U)UINT64_C(0xff))));
L_1803dfa70_8:;
wr(s->u,45,1,pop(rd(s->u,37,8),8));
L_1803dfa70_9:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803dfa70_10:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803dfa70_11:;
/* 1803dfa73: jge 0x1803dfbd0 */
L_1803dfa73_0:;
L_1803dfa73_1:;
wr(s->u,36,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dfa73_2:;
if(rd(s->u,36,1)){return UINT64_C(0x1803dfbd0);}
L_1803dfa73_3:;
return UINT64_C(0x1803dfa79);
}
uint64_t b_1803dfa70(CPU*s){
/* 1803dfa70: cmp r8, r11 */
L_1803dfa70_0:;
L_1803dfa70_1:;
wr(s->u,11,8,rd(s->r,152,8));
L_1803dfa70_2:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->u,11,8)));
L_1803dfa70_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->u,11,8),8,1));
L_1803dfa70_4:;
wr(s->u,19,8,(rd(s->r,128,8)-rd(s->u,11,8)));
L_1803dfa70_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfa70_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803dfa70_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803dfa70_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803dfa70_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803dfa70_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803dfa70_11:;
/* 1803dfa73: jge 0x1803dfbd0 */
L_1803dfa73_0:;
L_1803dfa73_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dfa73_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dfbd0);}
L_1803dfa73_3:;
return UINT64_C(0x1803dfa79);
}
uint64_t b_1803dfa79(CPU*s){
/* 1803dfa79: cmp dword ptr [rbx + 0x38], edi */
L_1803dfa79_0:;
L_1803dfa79_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dfa79_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfa79_3:;
wr(s->u,24,4,rd(s->u,12,4));
L_1803dfa79_4:;
wr(s->r,512,1,(rd(s->u,24,4)<rd(s->r,56,4)));
L_1803dfa79_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,24,4),rd(s->r,56,4),4,1));
L_1803dfa79_6:;
wr(s->u,28,4,(rd(s->u,24,4)-rd(s->r,56,4)));
L_1803dfa79_7:;
wr(s->r,519,1,(sx(rd(s->u,28,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfa79_8:;
wr(s->r,518,1,(rd(s->u,28,4)==((U)UINT64_C(0x0))));
L_1803dfa79_9:;
wr(s->u,18,4,(rd(s->u,28,4)&((U)UINT64_C(0xff))));
L_1803dfa79_10:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803dfa79_11:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803dfa79_12:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803dfa79_13:;
/* 1803dfa7c: movss xmm4, dword ptr [rbx + 0x20] */
L_1803dfa7c_0:;
L_1803dfa7c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803dfa7c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfa7c_3:;
wr(s->r,4864,4,rd(s->u,8,4));
L_1803dfa7c_4:;
wr(s->r,4868,4,((U)UINT64_C(0x0)));
L_1803dfa7c_5:;
wr(s->r,4872,4,((U)UINT64_C(0x0)));
L_1803dfa7c_6:;
wr(s->r,4876,4,((U)UINT64_C(0x0)));
L_1803dfa7c_7:;
/* 1803dfa81: mov r10d, edi */
L_1803dfa81_0:;
L_1803dfa81_1:;
wr(s->r,144,4,rd(s->r,56,4));
L_1803dfa81_2:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803dfa81_3:;
/* 1803dfa84: movaps xmm6, xmm4 */
L_1803dfa84_0:;
L_1803dfa84_1:;
wr(s->r,4992,4,rd(s->r,4864,4));
L_1803dfa84_2:;
wr(s->r,4996,4,rd(s->r,4868,4));
L_1803dfa84_3:;
wr(s->r,5000,4,rd(s->r,4872,4));
L_1803dfa84_4:;
wr(s->r,5004,4,rd(s->r,4876,4));
L_1803dfa84_5:;
/* 1803dfa87: mulss xmm6, xmm4 */
L_1803dfa87_0:;
L_1803dfa87_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4864,4),4),4));
L_1803dfa87_2:;
/* 1803dfa8b: movaps xmm5, xmm6 */
L_1803dfa8b_0:;
L_1803dfa8b_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803dfa8b_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803dfa8b_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803dfa8b_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803dfa8b_5:;
/* 1803dfa8e: movaps xmm2, xmm6 */
L_1803dfa8e_0:;
L_1803dfa8e_1:;
wr(s->r,4736,4,rd(s->r,4992,4));
L_1803dfa8e_2:;
wr(s->r,4740,4,rd(s->r,4996,4));
L_1803dfa8e_3:;
wr(s->r,4744,4,rd(s->r,5000,4));
L_1803dfa8e_4:;
wr(s->r,4748,4,rd(s->r,5004,4));
L_1803dfa8e_5:;
/* 1803dfa91: movss dword ptr [rbx + 0x24], xmm6 */
L_1803dfa91_0:;
L_1803dfa91_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803dfa91_2:;
wr(s->u,8,4,rd(s->r,4992,4));
L_1803dfa91_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dfa91_4:;
/* 1803dfa96: mulss xmm5, xmm4 */
L_1803dfa96_0:;
L_1803dfa96_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4864,4),4),4));
L_1803dfa96_2:;
/* 1803dfa9a: mulss xmm2, xmm10 */
L_1803dfa9a_0:;
L_1803dfa9a_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,5248,4),4),4));
L_1803dfa9a_2:;
/* 1803dfa9f: movaps xmm3, xmm5 */
L_1803dfa9f_0:;
L_1803dfa9f_1:;
wr(s->r,4800,4,rd(s->r,4928,4));
L_1803dfa9f_2:;
wr(s->r,4804,4,rd(s->r,4932,4));
L_1803dfa9f_3:;
wr(s->r,4808,4,rd(s->r,4936,4));
L_1803dfa9f_4:;
wr(s->r,4812,4,rd(s->r,4940,4));
L_1803dfa9f_5:;
/* 1803dfaa2: movaps xmm1, xmm5 */
L_1803dfaa2_0:;
L_1803dfaa2_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803dfaa2_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803dfaa2_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803dfaa2_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803dfaa2_5:;
/* 1803dfaa5: movss dword ptr [rbx + 0x28], xmm5 */
L_1803dfaa5_0:;
L_1803dfaa5_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803dfaa5_2:;
wr(s->u,8,4,rd(s->r,4928,4));
L_1803dfaa5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dfaa5_4:;
/* 1803dfaaa: mulss xmm3, xmm7 */
L_1803dfaaa_0:;
L_1803dfaaa_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803dfaaa_2:;
/* 1803dfaae: subss xmm5, xmm6 */
L_1803dfaae_0:;
L_1803dfaae_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803dfaae_2:;
/* 1803dfab2: movss dword ptr [rbx + 0x18], xmm5 */
L_1803dfab2_0:;
L_1803dfab2_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803dfab2_2:;
wr(s->u,8,4,rd(s->r,4928,4));
L_1803dfab2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dfab2_4:;
/* 1803dfab7: movaps xmm0, xmm3 */
L_1803dfab7_0:;
L_1803dfab7_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803dfab7_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803dfab7_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803dfab7_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803dfab7_5:;
/* 1803dfaba: subss xmm0, xmm2 */
L_1803dfaba_0:;
L_1803dfaba_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803dfaba_2:;
/* 1803dfabe: subss xmm2, xmm3 */
L_1803dfabe_0:;
L_1803dfabe_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803dfabe_2:;
/* 1803dfac2: addss xmm0, xmm11 */
L_1803dfac2_0:;
L_1803dfac2_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5312,4),4),4));
L_1803dfac2_2:;
/* 1803dfac7: movss dword ptr [rbx + 0x1c], xmm2 */
L_1803dfac7_0:;
L_1803dfac7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x1c))));
L_1803dfac7_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803dfac7_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dfac7_4:;
/* 1803dfacc: movss dword ptr [rbx + 0x10], xmm0 */
L_1803dfacc_0:;
L_1803dfacc_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803dfacc_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803dfacc_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dfacc_4:;
/* 1803dfad1: movaps xmm0, xmm6 */
L_1803dfad1_0:;
L_1803dfad1_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803dfad1_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803dfad1_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803dfad1_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803dfad1_5:;
/* 1803dfad4: mulss xmm0, xmm7 */
L_1803dfad4_0:;
L_1803dfad4_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803dfad4_2:;
/* 1803dfad8: subss xmm1, xmm0 */
L_1803dfad8_0:;
L_1803dfad8_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803dfad8_2:;
/* 1803dfadc: addss xmm1, xmm4 */
L_1803dfadc_0:;
L_1803dfadc_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803dfadc_2:;
/* 1803dfae0: movss dword ptr [rbx + 0x14], xmm1 */
L_1803dfae0_0:;
L_1803dfae0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x14))));
L_1803dfae0_2:;
wr(s->u,8,4,rd(s->r,4672,4));
L_1803dfae0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dfae0_4:;
/* 1803dfae5: jle 0x1803dfb93 */
L_1803dfae5_0:;
L_1803dfae5_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dfae5_2:;
wr(s->u,17,1,((rd(s->r,518,1)!=0)||(rd(s->u,16,1)!=0)));
L_1803dfae5_3:;
if(rd(s->u,17,1)){return UINT64_C(0x1803dfb93);}
L_1803dfae5_4:;
return UINT64_C(0x1803dfaeb);
}
uint64_t b_1803dfaeb(CPU*s){
/* 1803dfaeb: mov r9, rdi */
L_1803dfaeb_0:;
L_1803dfaeb_1:;
wr(s->r,136,8,rd(s->r,56,8));
L_1803dfaeb_2:;
/* 1803dfaee: nop  */
L_1803dfaee_0:;
L_1803dfaee_1:;
/* 1803dfaf0: movsxd rdx, dword ptr [rbx + 0x34] */
L_1803dfaf0_0:;
L_1803dfaf0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803dfaf0_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfaf0_3:;
wr(s->r,16,8,(U)sx(rd(s->u,52,4),4));
L_1803dfaf0_4:;
/* 1803dfaf4: mov rcx, qword ptr [rbx + 8] */
L_1803dfaf4_0:;
L_1803dfaf4_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dfaf4_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfaf4_3:;
wr(s->r,8,8,rd(s->u,56,8));
L_1803dfaf4_4:;
/* 1803dfaf8: inc r10d */
L_1803dfaf8_0:;
L_1803dfaf8_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x1)),4,0));
L_1803dfaf8_2:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x1))));
L_1803dfaf8_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803dfaf8_4:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfaf8_5:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803dfaf8_6:;
wr(s->u,64,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803dfaf8_7:;
wr(s->u,72,1,pop(rd(s->u,64,4),4));
L_1803dfaf8_8:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dfaf8_9:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dfaf8_10:;
/* 1803dfafb: mov rax, qword ptr [r9 + rcx] */
L_1803dfafb_0:;
L_1803dfafb_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803dfafb_2:;
wr(s->u,16,8,(rd(s->r,136,8)+rd(s->u,8,8)));
L_1803dfafb_3:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dfafb_4:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803dfafb_5:;
/* 1803dfaff: add r9, 8 */
L_1803dfaff_0:;
L_1803dfaff_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803dfaff_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803dfaff_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803dfaff_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfaff_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dfaff_6:;
wr(s->u,64,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dfaff_7:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803dfaff_8:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dfaff_9:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dfaff_10:;
/* 1803dfb03: movss xmm0, dword ptr [rax + rdx*4 - 8] */
L_1803dfb03_0:;
L_1803dfb03_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803dfb03_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803dfb03_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb03_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803dfb03_5:;
wr(s->r,4608,4,rd(s->u,48,4));
L_1803dfb03_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dfb03_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dfb03_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dfb03_9:;
/* 1803dfb09: movaps xmm3, xmm0 */
L_1803dfb09_0:;
L_1803dfb09_1:;
wr(s->r,4800,4,rd(s->r,4608,4));
L_1803dfb09_2:;
wr(s->r,4804,4,rd(s->r,4612,4));
L_1803dfb09_3:;
wr(s->r,4808,4,rd(s->r,4616,4));
L_1803dfb09_4:;
wr(s->r,4812,4,rd(s->r,4620,4));
L_1803dfb09_5:;
/* 1803dfb0c: subss xmm3, dword ptr [rax + rdx*4 - 0xc] */
L_1803dfb0c_0:;
L_1803dfb0c_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff4))+rd(s->r,0,8)));
L_1803dfb0c_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803dfb0c_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb0c_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803dfb0c_5:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->u,48,4),4),4));
L_1803dfb0c_6:;
/* 1803dfb12: addss xmm3, dword ptr [rax + rdx*4 - 4] */
L_1803dfb12_0:;
L_1803dfb12_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803dfb12_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803dfb12_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb12_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803dfb12_5:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->u,48,4),4),4));
L_1803dfb12_6:;
/* 1803dfb18: subss xmm3, xmm0 */
L_1803dfb18_0:;
L_1803dfb18_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803dfb18_2:;
/* 1803dfb1c: mulss xmm3, xmm8 */
L_1803dfb1c_0:;
L_1803dfb1c_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803dfb1c_2:;
/* 1803dfb21: movss dword ptr [rbx + 0x2c], xmm3 */
L_1803dfb21_0:;
L_1803dfb21_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x2c))));
L_1803dfb21_2:;
wr(s->u,48,4,rd(s->r,4800,4));
L_1803dfb21_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803dfb21_4:;
/* 1803dfb26: mov rax, qword ptr [r9 + rcx - 8] */
L_1803dfb26_0:;
L_1803dfb26_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803dfb26_2:;
wr(s->u,32,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803dfb26_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb26_4:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,40,8),8));
L_1803dfb26_5:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803dfb26_6:;
/* 1803dfb2b: mulss xmm3, dword ptr [rbx + 0x14] */
L_1803dfb2b_0:;
L_1803dfb2b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x14))));
L_1803dfb2b_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfb2b_3:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->u,48,4),4),4));
L_1803dfb2b_4:;
/* 1803dfb30: movss xmm0, dword ptr [rax + rdx*4 - 4] */
L_1803dfb30_0:;
L_1803dfb30_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803dfb30_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803dfb30_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb30_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803dfb30_5:;
wr(s->r,4608,4,rd(s->u,48,4));
L_1803dfb30_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dfb30_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dfb30_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dfb30_9:;
/* 1803dfb36: movaps xmm2, xmm0 */
L_1803dfb36_0:;
L_1803dfb36_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803dfb36_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803dfb36_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803dfb36_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803dfb36_5:;
/* 1803dfb39: subss xmm2, dword ptr [rax + rdx*4 - 8] */
L_1803dfb39_0:;
L_1803dfb39_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803dfb39_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803dfb39_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb39_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803dfb39_5:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->u,48,4),4),4));
L_1803dfb39_6:;
/* 1803dfb3f: addss xmm2, dword ptr [rax + rdx*4] */
L_1803dfb3f_0:;
L_1803dfb3f_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803dfb3f_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803dfb3f_3:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803dfb3f_4:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->u,48,4),4),4));
L_1803dfb3f_5:;
/* 1803dfb44: subss xmm2, xmm0 */
L_1803dfb44_0:;
L_1803dfb44_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803dfb44_2:;
/* 1803dfb48: mulss xmm2, xmm8 */
L_1803dfb48_0:;
L_1803dfb48_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803dfb48_2:;
/* 1803dfb4d: movss dword ptr [rbx + 0x30], xmm2 */
L_1803dfb4d_0:;
L_1803dfb4d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dfb4d_2:;
wr(s->u,48,4,rd(s->r,4736,4));
L_1803dfb4d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803dfb4d_4:;
/* 1803dfb52: mov rax, qword ptr [r9 + rcx - 8] */
L_1803dfb52_0:;
L_1803dfb52_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803dfb52_2:;
wr(s->u,32,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803dfb52_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb52_4:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,40,8),8));
L_1803dfb52_5:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803dfb52_6:;
/* 1803dfb57: mulss xmm2, dword ptr [rbx + 0x18] */
L_1803dfb57_0:;
L_1803dfb57_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803dfb57_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfb57_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,48,4),4),4));
L_1803dfb57_4:;
/* 1803dfb5c: movss xmm1, dword ptr [rax + rdx*4 - 4] */
L_1803dfb5c_0:;
L_1803dfb5c_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803dfb5c_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803dfb5c_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb5c_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803dfb5c_5:;
wr(s->r,4672,4,rd(s->u,48,4));
L_1803dfb5c_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803dfb5c_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803dfb5c_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803dfb5c_9:;
/* 1803dfb62: movss xmm0, dword ptr [rax + rdx*4 - 8] */
L_1803dfb62_0:;
L_1803dfb62_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803dfb62_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803dfb62_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb62_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803dfb62_5:;
wr(s->r,4608,4,rd(s->u,48,4));
L_1803dfb62_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dfb62_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dfb62_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dfb62_9:;
/* 1803dfb68: mov rax, qword ptr [r9 + rsi - 8] */
L_1803dfb68_0:;
L_1803dfb68_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803dfb68_2:;
wr(s->u,32,8,(rd(s->r,48,8)*((U)UINT64_C(0x1))));
L_1803dfb68_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb68_4:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,40,8),8));
L_1803dfb68_5:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803dfb68_6:;
/* 1803dfb6d: mulss xmm1, dword ptr [rbx + 0x1c] */
L_1803dfb6d_0:;
L_1803dfb6d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x1c))));
L_1803dfb6d_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfb6d_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,48,4),4),4));
L_1803dfb6d_4:;
/* 1803dfb72: mulss xmm0, dword ptr [rbx + 0x10] */
L_1803dfb72_0:;
L_1803dfb72_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803dfb72_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfb72_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,48,4),4),4));
L_1803dfb72_4:;
/* 1803dfb77: addss xmm1, xmm0 */
L_1803dfb77_0:;
L_1803dfb77_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803dfb77_2:;
/* 1803dfb7b: addss xmm1, xmm2 */
L_1803dfb7b_0:;
L_1803dfb7b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803dfb7b_2:;
return UINT64_C(0x1803dfb7f);
}
uint64_t b_1803dfaf0(CPU*s){
/* 1803dfaf0: movsxd rdx, dword ptr [rbx + 0x34] */
L_1803dfaf0_0:;
L_1803dfaf0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803dfaf0_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfaf0_3:;
wr(s->r,16,8,(U)sx(rd(s->u,52,4),4));
L_1803dfaf0_4:;
/* 1803dfaf4: mov rcx, qword ptr [rbx + 8] */
L_1803dfaf4_0:;
L_1803dfaf4_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dfaf4_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfaf4_3:;
wr(s->r,8,8,rd(s->u,56,8));
L_1803dfaf4_4:;
/* 1803dfaf8: inc r10d */
L_1803dfaf8_0:;
L_1803dfaf8_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x1)),4,0));
L_1803dfaf8_2:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x1))));
L_1803dfaf8_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803dfaf8_4:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfaf8_5:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803dfaf8_6:;
wr(s->u,64,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803dfaf8_7:;
wr(s->u,72,1,pop(rd(s->u,64,4),4));
L_1803dfaf8_8:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dfaf8_9:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dfaf8_10:;
/* 1803dfafb: mov rax, qword ptr [r9 + rcx] */
L_1803dfafb_0:;
L_1803dfafb_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803dfafb_2:;
wr(s->u,16,8,(rd(s->r,136,8)+rd(s->u,8,8)));
L_1803dfafb_3:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dfafb_4:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803dfafb_5:;
/* 1803dfaff: add r9, 8 */
L_1803dfaff_0:;
L_1803dfaff_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803dfaff_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803dfaff_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803dfaff_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfaff_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dfaff_6:;
wr(s->u,64,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dfaff_7:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803dfaff_8:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dfaff_9:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dfaff_10:;
/* 1803dfb03: movss xmm0, dword ptr [rax + rdx*4 - 8] */
L_1803dfb03_0:;
L_1803dfb03_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803dfb03_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803dfb03_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb03_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803dfb03_5:;
wr(s->r,4608,4,rd(s->u,48,4));
L_1803dfb03_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dfb03_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dfb03_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dfb03_9:;
/* 1803dfb09: movaps xmm3, xmm0 */
L_1803dfb09_0:;
L_1803dfb09_1:;
wr(s->r,4800,4,rd(s->r,4608,4));
L_1803dfb09_2:;
wr(s->r,4804,4,rd(s->r,4612,4));
L_1803dfb09_3:;
wr(s->r,4808,4,rd(s->r,4616,4));
L_1803dfb09_4:;
wr(s->r,4812,4,rd(s->r,4620,4));
L_1803dfb09_5:;
/* 1803dfb0c: subss xmm3, dword ptr [rax + rdx*4 - 0xc] */
L_1803dfb0c_0:;
L_1803dfb0c_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff4))+rd(s->r,0,8)));
L_1803dfb0c_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803dfb0c_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb0c_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803dfb0c_5:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->u,48,4),4),4));
L_1803dfb0c_6:;
/* 1803dfb12: addss xmm3, dword ptr [rax + rdx*4 - 4] */
L_1803dfb12_0:;
L_1803dfb12_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803dfb12_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803dfb12_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb12_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803dfb12_5:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->u,48,4),4),4));
L_1803dfb12_6:;
/* 1803dfb18: subss xmm3, xmm0 */
L_1803dfb18_0:;
L_1803dfb18_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803dfb18_2:;
/* 1803dfb1c: mulss xmm3, xmm8 */
L_1803dfb1c_0:;
L_1803dfb1c_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803dfb1c_2:;
/* 1803dfb21: movss dword ptr [rbx + 0x2c], xmm3 */
L_1803dfb21_0:;
L_1803dfb21_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x2c))));
L_1803dfb21_2:;
wr(s->u,48,4,rd(s->r,4800,4));
L_1803dfb21_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803dfb21_4:;
/* 1803dfb26: mov rax, qword ptr [r9 + rcx - 8] */
L_1803dfb26_0:;
L_1803dfb26_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803dfb26_2:;
wr(s->u,32,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803dfb26_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb26_4:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,40,8),8));
L_1803dfb26_5:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803dfb26_6:;
/* 1803dfb2b: mulss xmm3, dword ptr [rbx + 0x14] */
L_1803dfb2b_0:;
L_1803dfb2b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x14))));
L_1803dfb2b_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfb2b_3:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->u,48,4),4),4));
L_1803dfb2b_4:;
/* 1803dfb30: movss xmm0, dword ptr [rax + rdx*4 - 4] */
L_1803dfb30_0:;
L_1803dfb30_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803dfb30_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803dfb30_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb30_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803dfb30_5:;
wr(s->r,4608,4,rd(s->u,48,4));
L_1803dfb30_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dfb30_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dfb30_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dfb30_9:;
/* 1803dfb36: movaps xmm2, xmm0 */
L_1803dfb36_0:;
L_1803dfb36_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803dfb36_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803dfb36_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803dfb36_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803dfb36_5:;
/* 1803dfb39: subss xmm2, dword ptr [rax + rdx*4 - 8] */
L_1803dfb39_0:;
L_1803dfb39_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803dfb39_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803dfb39_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb39_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803dfb39_5:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->u,48,4),4),4));
L_1803dfb39_6:;
/* 1803dfb3f: addss xmm2, dword ptr [rax + rdx*4] */
L_1803dfb3f_0:;
L_1803dfb3f_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803dfb3f_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803dfb3f_3:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803dfb3f_4:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->u,48,4),4),4));
L_1803dfb3f_5:;
/* 1803dfb44: subss xmm2, xmm0 */
L_1803dfb44_0:;
L_1803dfb44_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803dfb44_2:;
/* 1803dfb48: mulss xmm2, xmm8 */
L_1803dfb48_0:;
L_1803dfb48_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803dfb48_2:;
/* 1803dfb4d: movss dword ptr [rbx + 0x30], xmm2 */
L_1803dfb4d_0:;
L_1803dfb4d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dfb4d_2:;
wr(s->u,48,4,rd(s->r,4736,4));
L_1803dfb4d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803dfb4d_4:;
/* 1803dfb52: mov rax, qword ptr [r9 + rcx - 8] */
L_1803dfb52_0:;
L_1803dfb52_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803dfb52_2:;
wr(s->u,32,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803dfb52_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb52_4:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,40,8),8));
L_1803dfb52_5:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803dfb52_6:;
/* 1803dfb57: mulss xmm2, dword ptr [rbx + 0x18] */
L_1803dfb57_0:;
L_1803dfb57_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803dfb57_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfb57_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,48,4),4),4));
L_1803dfb57_4:;
/* 1803dfb5c: movss xmm1, dword ptr [rax + rdx*4 - 4] */
L_1803dfb5c_0:;
L_1803dfb5c_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803dfb5c_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803dfb5c_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb5c_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803dfb5c_5:;
wr(s->r,4672,4,rd(s->u,48,4));
L_1803dfb5c_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803dfb5c_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803dfb5c_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803dfb5c_9:;
/* 1803dfb62: movss xmm0, dword ptr [rax + rdx*4 - 8] */
L_1803dfb62_0:;
L_1803dfb62_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803dfb62_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803dfb62_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb62_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803dfb62_5:;
wr(s->r,4608,4,rd(s->u,48,4));
L_1803dfb62_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dfb62_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dfb62_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dfb62_9:;
/* 1803dfb68: mov rax, qword ptr [r9 + rsi - 8] */
L_1803dfb68_0:;
L_1803dfb68_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803dfb68_2:;
wr(s->u,32,8,(rd(s->r,48,8)*((U)UINT64_C(0x1))));
L_1803dfb68_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dfb68_4:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,40,8),8));
L_1803dfb68_5:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803dfb68_6:;
/* 1803dfb6d: mulss xmm1, dword ptr [rbx + 0x1c] */
L_1803dfb6d_0:;
L_1803dfb6d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x1c))));
L_1803dfb6d_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfb6d_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,48,4),4),4));
L_1803dfb6d_4:;
/* 1803dfb72: mulss xmm0, dword ptr [rbx + 0x10] */
L_1803dfb72_0:;
L_1803dfb72_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803dfb72_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfb72_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,48,4),4),4));
L_1803dfb72_4:;
/* 1803dfb77: addss xmm1, xmm0 */
L_1803dfb77_0:;
L_1803dfb77_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803dfb77_2:;
/* 1803dfb7b: addss xmm1, xmm2 */
L_1803dfb7b_0:;
L_1803dfb7b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803dfb7b_2:;
/* 1803dfb7f: addss xmm1, xmm3 */
L_1803dfb7f_0:;
L_1803dfb7f_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803dfb7f_2:;
/* 1803dfb83: movss dword ptr [rax + r8*4], xmm1 */
L_1803dfb83_0:;
L_1803dfb83_1:;
wr(s->u,8,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803dfb83_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803dfb83_3:;
wr(s->u,48,4,rd(s->r,4672,4));
L_1803dfb83_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,48,4));
L_1803dfb83_5:;
return UINT64_C(0x1803dfb89);
}
uint64_t b_1803dfb7f(CPU*s){
/* 1803dfb7f: addss xmm1, xmm3 */
L_1803dfb7f_0:;
L_1803dfb7f_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803dfb7f_2:;
/* 1803dfb83: movss dword ptr [rax + r8*4], xmm1 */
L_1803dfb83_0:;
L_1803dfb83_1:;
wr(s->u,8,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803dfb83_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803dfb83_3:;
wr(s->u,24,4,rd(s->r,4672,4));
L_1803dfb83_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dfb83_5:;
/* 1803dfb89: cmp r10d, dword ptr [rbx + 0x38] */
L_1803dfb89_0:;
L_1803dfb89_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dfb89_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfb89_3:;
wr(s->u,35,4,rd(s->u,24,4));
L_1803dfb89_4:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->u,35,4)));
L_1803dfb89_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->u,35,4),4,1));
L_1803dfb89_6:;
wr(s->u,39,4,(rd(s->r,144,4)-rd(s->u,35,4)));
L_1803dfb89_7:;
wr(s->r,519,1,(sx(rd(s->u,39,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfb89_8:;
wr(s->r,518,1,(rd(s->u,39,4)==((U)UINT64_C(0x0))));
L_1803dfb89_9:;
wr(s->u,29,4,(rd(s->u,39,4)&((U)UINT64_C(0xff))));
L_1803dfb89_10:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803dfb89_11:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803dfb89_12:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803dfb89_13:;
/* 1803dfb8d: jl 0x1803dfaf0 */
L_1803dfb8d_0:;
L_1803dfb8d_1:;
wr(s->u,28,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dfb8d_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803dfaf0);}
L_1803dfb8d_3:;
return UINT64_C(0x1803dfb93);
}
uint64_t b_1803dfb89(CPU*s){
/* 1803dfb89: cmp r10d, dword ptr [rbx + 0x38] */
L_1803dfb89_0:;
L_1803dfb89_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dfb89_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfb89_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803dfb89_4:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->u,19,4)));
L_1803dfb89_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->u,19,4),4,1));
L_1803dfb89_6:;
wr(s->u,23,4,(rd(s->r,144,4)-rd(s->u,19,4)));
L_1803dfb89_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfb89_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803dfb89_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803dfb89_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dfb89_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dfb89_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dfb89_13:;
/* 1803dfb8d: jl 0x1803dfaf0 */
L_1803dfb8d_0:;
L_1803dfb8d_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dfb8d_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dfaf0);}
L_1803dfb8d_3:;
return UINT64_C(0x1803dfb93);
}
uint64_t b_1803dfb93(CPU*s){
/* 1803dfb93: unpcklps xmm9, xmm9 */
L_1803dfb93_0:;
L_1803dfb93_1:;
wr(s->r,5192,4,rd(s->r,5188,4));
L_1803dfb93_2:;
wr(s->r,5196,4,rd(s->r,5188,4));
L_1803dfb93_3:;
wr(s->r,5188,4,rd(s->r,5184,4));
L_1803dfb93_4:;
/* 1803dfb97: inc r15d */
L_1803dfb97_0:;
L_1803dfb97_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,4),((U)UINT64_C(0x1)),4,0));
L_1803dfb97_2:;
wr(s->r,184,4,(rd(s->r,184,4)+((U)UINT64_C(0x1))));
L_1803dfb97_3:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803dfb97_4:;
wr(s->r,519,1,(sx(rd(s->r,184,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfb97_5:;
wr(s->r,518,1,(rd(s->r,184,4)==((U)UINT64_C(0x0))));
L_1803dfb97_6:;
wr(s->u,21,4,(rd(s->r,184,4)&((U)UINT64_C(0xff))));
L_1803dfb97_7:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803dfb97_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803dfb97_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803dfb97_10:;
/* 1803dfb9a: inc r8 */
L_1803dfb9a_0:;
L_1803dfb9a_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x1)),8,0));
L_1803dfb9a_2:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x1))));
L_1803dfb9a_3:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfb9a_4:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dfb9a_5:;
wr(s->u,21,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dfb9a_6:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803dfb9a_7:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803dfb9a_8:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803dfb9a_9:;
/* 1803dfb9d: cvtps2pd xmm1, xmm9 */
L_1803dfb9d_0:;
L_1803dfb9d_1:;
wr(s->u,47,8,rd(s->r,5184,8));
L_1803dfb9d_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,47,4),4),8));
L_1803dfb9d_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,51,4),4),8));
L_1803dfb9d_4:;
/* 1803dfba1: addsd xmm1, qword ptr [rbx + 0x48] */
L_1803dfba1_0:;
L_1803dfba1_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803dfba1_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfba1_3:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->u,12,8),8),8));
L_1803dfba1_4:;
/* 1803dfba6: cvttsd2si eax, xmm1 */
L_1803dfba6_0:;
L_1803dfba6_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4672,8),8),4));
L_1803dfba6_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfba6_3:;
/* 1803dfbaa: movsd qword ptr [rbx + 0x48], xmm1 */
L_1803dfbaa_0:;
L_1803dfbaa_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803dfbaa_2:;
wr(s->u,12,8,rd(s->r,4672,8));
L_1803dfbaa_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803dfbaa_4:;
/* 1803dfbaf: cmp eax, r12d */
L_1803dfbaf_0:;
L_1803dfbaf_1:;
wr(s->u,31,4,rd(s->r,160,4));
L_1803dfbaf_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,31,4)));
L_1803dfbaf_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,31,4),4,1));
L_1803dfbaf_4:;
wr(s->u,35,4,(rd(s->r,0,4)-rd(s->u,31,4)));
L_1803dfbaf_5:;
wr(s->r,519,1,(sx(rd(s->u,35,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfbaf_6:;
wr(s->r,518,1,(rd(s->u,35,4)==((U)UINT64_C(0x0))));
L_1803dfbaf_7:;
wr(s->u,21,4,(rd(s->u,35,4)&((U)UINT64_C(0xff))));
L_1803dfbaf_8:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803dfbaf_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803dfbaf_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803dfbaf_11:;
/* 1803dfbb2: movd xmm0, eax */
L_1803dfbb2_0:;
L_1803dfbb2_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803dfbb2_2:;
/* 1803dfbb6: mov dword ptr [rbx + 0x34], eax */
L_1803dfbb6_0:;
L_1803dfbb6_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803dfbb6_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803dfbb6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dfbb6_4:;
/* 1803dfbb9: cvtdq2pd xmm0, xmm0 */
L_1803dfbb9_0:;
L_1803dfbb9_1:;
wr(s->u,39,8,rd(s->r,4608,8));
L_1803dfbb9_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,39,4),4),8));
L_1803dfbb9_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,43,4),4),8));
L_1803dfbb9_4:;
/* 1803dfbbd: subsd xmm1, xmm0 */
L_1803dfbbd_0:;
L_1803dfbbd_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803dfbbd_2:;
/* 1803dfbc1: cvtsd2ss xmm0, xmm1 */
L_1803dfbc1_0:;
L_1803dfbc1_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4672,8),8),4));
L_1803dfbc1_2:;
/* 1803dfbc5: movss dword ptr [rbx + 0x20], xmm0 */
L_1803dfbc5_0:;
L_1803dfbc5_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803dfbc5_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803dfbc5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dfbc5_4:;
/* 1803dfbca: jl 0x1803dfa70 */
L_1803dfbca_0:;
L_1803dfbca_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dfbca_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803dfa70);}
L_1803dfbca_3:;
return UINT64_C(0x1803dfbd0);
}
uint64_t b_1803dfbd0(CPU*s){
/* 1803dfbd0: movaps xmm6, xmmword ptr [rsp + 0x70] */
L_1803dfbd0_0:;
L_1803dfbd0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803dfbd0_2:;
wr(s->u,36,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803dfbd0_3:;
wr(s->u,78,16,rd(s->u,36,16));
L_1803dfbd0_4:;
wr(s->r,4992,4,rd(s->u,78,4));
L_1803dfbd0_5:;
wr(s->r,4996,4,rd(s->u,82,4));
L_1803dfbd0_6:;
wr(s->r,5000,4,rd(s->u,86,4));
L_1803dfbd0_7:;
wr(s->r,5004,4,rd(s->u,90,4));
L_1803dfbd0_8:;
/* 1803dfbd5: movaps xmm9, xmmword ptr [rsp + 0x40] */
L_1803dfbd5_0:;
L_1803dfbd5_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dfbd5_2:;
wr(s->u,36,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803dfbd5_3:;
wr(s->u,78,16,rd(s->u,36,16));
L_1803dfbd5_4:;
wr(s->r,5184,4,rd(s->u,78,4));
L_1803dfbd5_5:;
wr(s->r,5188,4,rd(s->u,82,4));
L_1803dfbd5_6:;
wr(s->r,5192,4,rd(s->u,86,4));
L_1803dfbd5_7:;
wr(s->r,5196,4,rd(s->u,90,4));
L_1803dfbd5_8:;
/* 1803dfbdb: movaps xmm8, xmmword ptr [rsp + 0x50] */
L_1803dfbdb_0:;
L_1803dfbdb_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dfbdb_2:;
wr(s->u,36,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803dfbdb_3:;
wr(s->u,78,16,rd(s->u,36,16));
L_1803dfbdb_4:;
wr(s->r,5120,4,rd(s->u,78,4));
L_1803dfbdb_5:;
wr(s->r,5124,4,rd(s->u,82,4));
L_1803dfbdb_6:;
wr(s->r,5128,4,rd(s->u,86,4));
L_1803dfbdb_7:;
wr(s->r,5132,4,rd(s->u,90,4));
L_1803dfbdb_8:;
/* 1803dfbe1: movaps xmm7, xmmword ptr [rsp + 0x60] */
L_1803dfbe1_0:;
L_1803dfbe1_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dfbe1_2:;
wr(s->u,36,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803dfbe1_3:;
wr(s->u,78,16,rd(s->u,36,16));
L_1803dfbe1_4:;
wr(s->r,5056,4,rd(s->u,78,4));
L_1803dfbe1_5:;
wr(s->r,5060,4,rd(s->u,82,4));
L_1803dfbe1_6:;
wr(s->r,5064,4,rd(s->u,86,4));
L_1803dfbe1_7:;
wr(s->r,5068,4,rd(s->u,90,4));
L_1803dfbe1_8:;
/* 1803dfbe6: movaps xmm10, xmmword ptr [rsp + 0x30] */
L_1803dfbe6_0:;
L_1803dfbe6_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dfbe6_2:;
wr(s->u,36,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803dfbe6_3:;
wr(s->u,78,16,rd(s->u,36,16));
L_1803dfbe6_4:;
wr(s->r,5248,4,rd(s->u,78,4));
L_1803dfbe6_5:;
wr(s->r,5252,4,rd(s->u,82,4));
L_1803dfbe6_6:;
wr(s->r,5256,4,rd(s->u,86,4));
L_1803dfbe6_7:;
wr(s->r,5260,4,rd(s->u,90,4));
L_1803dfbe6_8:;
/* 1803dfbec: movaps xmm11, xmmword ptr [rsp + 0x20] */
L_1803dfbec_0:;
L_1803dfbec_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dfbec_2:;
wr(s->u,36,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803dfbec_3:;
wr(s->u,78,16,rd(s->u,36,16));
L_1803dfbec_4:;
wr(s->r,5312,4,rd(s->u,78,4));
L_1803dfbec_5:;
wr(s->r,5316,4,rd(s->u,82,4));
L_1803dfbec_6:;
wr(s->r,5320,4,rd(s->u,86,4));
L_1803dfbec_7:;
wr(s->r,5324,4,rd(s->u,90,4));
L_1803dfbec_8:;
/* 1803dfbf2: movsd xmm2, qword ptr [rbx + 0x48] */
L_1803dfbf2_0:;
L_1803dfbf2_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803dfbf2_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfbf2_3:;
wr(s->r,4736,8,rd(s->u,28,8));
L_1803dfbf2_4:;
wr(s->r,4744,8,((U)UINT64_C(0x0)));
L_1803dfbf2_5:;
/* 1803dfbf7: mov rsi, qword ptr [rsp + 0xb8] */
L_1803dfbf7_0:;
L_1803dfbf7_1:;
wr(s->u,16,8,(((U)UINT64_C(0xb8))+rd(s->r,32,8)));
L_1803dfbf7_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dfbf7_3:;
wr(s->r,48,8,rd(s->u,56,8));
L_1803dfbf7_4:;
/* 1803dfbff: mov eax, r12d */
L_1803dfbff_0:;
L_1803dfbff_1:;
wr(s->r,0,4,rd(s->r,160,4));
L_1803dfbff_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfbff_3:;
/* 1803dfc02: sub eax, dword ptr [rbx + 0x34] */
L_1803dfc02_0:;
L_1803dfc02_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803dfc02_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfc02_3:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,52,4)));
L_1803dfc02_4:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfc02_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,52,4),4,1));
L_1803dfc02_6:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfc02_7:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->u,52,4)));
L_1803dfc02_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfc02_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfc02_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dfc02_11:;
wr(s->u,64,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dfc02_12:;
wr(s->u,68,1,pop(rd(s->u,64,4),4));
L_1803dfc02_13:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803dfc02_14:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803dfc02_15:;
/* 1803dfc05: movd xmm0, r12d */
L_1803dfc05_0:;
L_1803dfc05_1:;
wr(s->r,4608,16,rd(s->r,160,4));
L_1803dfc05_2:;
/* 1803dfc0a: movsxd r8, r12d */
L_1803dfc0a_0:;
L_1803dfc0a_1:;
wr(s->r,128,8,(U)sx(rd(s->r,160,4),4));
L_1803dfc0a_2:;
/* 1803dfc0d: mov r12, qword ptr [rsp + 0xc0] */
L_1803dfc0d_0:;
L_1803dfc0d_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc0))+rd(s->r,32,8)));
L_1803dfc0d_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dfc0d_3:;
wr(s->r,160,8,rd(s->u,56,8));
L_1803dfc0d_4:;
/* 1803dfc15: mov dword ptr [rbx + 0x40], eax */
L_1803dfc15_0:;
L_1803dfc15_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x40))));
L_1803dfc15_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803dfc15_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dfc15_4:;
/* 1803dfc18: cvtdq2pd xmm0, xmm0 */
L_1803dfc18_0:;
L_1803dfc18_1:;
wr(s->u,70,8,rd(s->r,4608,8));
L_1803dfc18_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,70,4),4),8));
L_1803dfc18_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,74,4),4),8));
L_1803dfc18_4:;
/* 1803dfc1c: movd xmm1, eax */
L_1803dfc1c_0:;
L_1803dfc1c_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803dfc1c_2:;
/* 1803dfc20: subsd xmm2, xmm0 */
L_1803dfc20_0:;
L_1803dfc20_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803dfc20_2:;
/* 1803dfc24: cvtdq2pd xmm1, xmm1 */
L_1803dfc24_0:;
L_1803dfc24_1:;
wr(s->u,70,8,rd(s->r,4672,8));
L_1803dfc24_2:;
wr(s->r,4672,8,fb((double)sx(rd(s->u,70,4),4),8));
L_1803dfc24_3:;
wr(s->r,4680,8,fb((double)sx(rd(s->u,74,4),4),8));
L_1803dfc24_4:;
/* 1803dfc28: addsd xmm2, xmm1 */
L_1803dfc28_0:;
L_1803dfc28_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803dfc28_2:;
/* 1803dfc2c: movsd qword ptr [rbx + 0x48], xmm2 */
L_1803dfc2c_0:;
L_1803dfc2c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803dfc2c_2:;
wr(s->u,28,8,rd(s->r,4736,8));
L_1803dfc2c_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,28,8));
L_1803dfc2c_4:;
/* 1803dfc31: je 0x1803dfc90 */
L_1803dfc31_0:;
L_1803dfc31_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dfc90);}
L_1803dfc31_2:;
return UINT64_C(0x1803dfc33);
}
uint64_t b_1803dfbf2(CPU*s){
/* 1803dfbf2: movsd xmm2, qword ptr [rbx + 0x48] */
L_1803dfbf2_0:;
L_1803dfbf2_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803dfbf2_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfbf2_3:;
wr(s->r,4736,8,rd(s->u,20,8));
L_1803dfbf2_4:;
wr(s->r,4744,8,((U)UINT64_C(0x0)));
L_1803dfbf2_5:;
/* 1803dfbf7: mov rsi, qword ptr [rsp + 0xb8] */
L_1803dfbf7_0:;
L_1803dfbf7_1:;
wr(s->u,8,8,(((U)UINT64_C(0xb8))+rd(s->r,32,8)));
L_1803dfbf7_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dfbf7_3:;
wr(s->r,48,8,rd(s->u,32,8));
L_1803dfbf7_4:;
/* 1803dfbff: mov eax, r12d */
L_1803dfbff_0:;
L_1803dfbff_1:;
wr(s->r,0,4,rd(s->r,160,4));
L_1803dfbff_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfbff_3:;
/* 1803dfc02: sub eax, dword ptr [rbx + 0x34] */
L_1803dfc02_0:;
L_1803dfc02_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803dfc02_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfc02_3:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,28,4)));
L_1803dfc02_4:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfc02_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,28,4),4,1));
L_1803dfc02_6:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfc02_7:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->u,28,4)));
L_1803dfc02_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfc02_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfc02_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dfc02_11:;
wr(s->u,40,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dfc02_12:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803dfc02_13:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803dfc02_14:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803dfc02_15:;
/* 1803dfc05: movd xmm0, r12d */
L_1803dfc05_0:;
L_1803dfc05_1:;
wr(s->r,4608,16,rd(s->r,160,4));
L_1803dfc05_2:;
/* 1803dfc0a: movsxd r8, r12d */
L_1803dfc0a_0:;
L_1803dfc0a_1:;
wr(s->r,128,8,(U)sx(rd(s->r,160,4),4));
L_1803dfc0a_2:;
/* 1803dfc0d: mov r12, qword ptr [rsp + 0xc0] */
L_1803dfc0d_0:;
L_1803dfc0d_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc0))+rd(s->r,32,8)));
L_1803dfc0d_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dfc0d_3:;
wr(s->r,160,8,rd(s->u,32,8));
L_1803dfc0d_4:;
/* 1803dfc15: mov dword ptr [rbx + 0x40], eax */
L_1803dfc15_0:;
L_1803dfc15_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x40))));
L_1803dfc15_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803dfc15_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dfc15_4:;
/* 1803dfc18: cvtdq2pd xmm0, xmm0 */
L_1803dfc18_0:;
L_1803dfc18_1:;
wr(s->u,46,8,rd(s->r,4608,8));
L_1803dfc18_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,46,4),4),8));
L_1803dfc18_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,50,4),4),8));
L_1803dfc18_4:;
/* 1803dfc1c: movd xmm1, eax */
L_1803dfc1c_0:;
L_1803dfc1c_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803dfc1c_2:;
/* 1803dfc20: subsd xmm2, xmm0 */
L_1803dfc20_0:;
L_1803dfc20_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803dfc20_2:;
/* 1803dfc24: cvtdq2pd xmm1, xmm1 */
L_1803dfc24_0:;
L_1803dfc24_1:;
wr(s->u,46,8,rd(s->r,4672,8));
L_1803dfc24_2:;
wr(s->r,4672,8,fb((double)sx(rd(s->u,46,4),4),8));
L_1803dfc24_3:;
wr(s->r,4680,8,fb((double)sx(rd(s->u,50,4),4),8));
L_1803dfc24_4:;
/* 1803dfc28: addsd xmm2, xmm1 */
L_1803dfc28_0:;
L_1803dfc28_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803dfc28_2:;
/* 1803dfc2c: movsd qword ptr [rbx + 0x48], xmm2 */
L_1803dfc2c_0:;
L_1803dfc2c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803dfc2c_2:;
wr(s->u,20,8,rd(s->r,4736,8));
L_1803dfc2c_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_1803dfc2c_4:;
/* 1803dfc31: je 0x1803dfc90 */
L_1803dfc31_0:;
L_1803dfc31_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dfc90);}
L_1803dfc31_2:;
return UINT64_C(0x1803dfc33);
}
uint64_t b_1803dfc33(CPU*s){
/* 1803dfc33: cmp dword ptr [rbx + 0x38], edi */
L_1803dfc33_0:;
L_1803dfc33_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dfc33_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfc33_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803dfc33_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,56,4)));
L_1803dfc33_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,56,4),4,1));
L_1803dfc33_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,56,4)));
L_1803dfc33_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfc33_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803dfc33_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803dfc33_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803dfc33_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803dfc33_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803dfc33_13:;
/* 1803dfc36: jle 0x1803dfcde */
L_1803dfc36_0:;
L_1803dfc36_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dfc36_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803dfc36_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803dfcde);}
L_1803dfc36_4:;
return UINT64_C(0x1803dfc3c);
}
uint64_t b_1803dfc3c(CPU*s){
/* 1803dfc3c: mov rdx, rdi */
L_1803dfc3c_0:;
L_1803dfc3c_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803dfc3c_2:;
/* 1803dfc3f: nop  */
L_1803dfc3f_0:;
L_1803dfc3f_1:;
/* 1803dfc40: mov rax, qword ptr [rbx + 8] */
L_1803dfc40_0:;
L_1803dfc40_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dfc40_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfc40_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dfc40_4:;
/* 1803dfc44: inc edi */
L_1803dfc44_0:;
L_1803dfc44_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),((U)UINT64_C(0x1)),4,0));
L_1803dfc44_2:;
wr(s->r,56,4,(rd(s->r,56,4)+((U)UINT64_C(0x1))));
L_1803dfc44_3:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dfc44_4:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfc44_5:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803dfc44_6:;
wr(s->u,49,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803dfc44_7:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dfc44_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dfc44_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dfc44_10:;
/* 1803dfc46: add rdx, 8 */
L_1803dfc46_0:;
L_1803dfc46_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803dfc46_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x8)),8,0));
L_1803dfc46_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803dfc46_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfc46_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803dfc46_6:;
wr(s->u,49,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803dfc46_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803dfc46_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dfc46_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dfc46_10:;
/* 1803dfc4a: mov rcx, qword ptr [rdx + rax - 8] */
L_1803dfc4a_0:;
L_1803dfc4a_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,16,8)));
L_1803dfc4a_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dfc4a_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfc4a_4:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dfc4a_5:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803dfc4a_6:;
/* 1803dfc4f: mov eax, dword ptr [rcx + r8*4 - 0x10] */
L_1803dfc4f_0:;
L_1803dfc4f_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,8,8)));
L_1803dfc4f_2:;
wr(s->u,16,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803dfc4f_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfc4f_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dfc4f_5:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803dfc4f_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfc4f_7:;
/* 1803dfc54: mov dword ptr [rcx - 0xc], eax */
L_1803dfc54_0:;
L_1803dfc54_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803dfc54_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dfc54_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dfc54_4:;
/* 1803dfc57: mov rax, qword ptr [rbx + 8] */
L_1803dfc57_0:;
L_1803dfc57_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dfc57_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfc57_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dfc57_4:;
/* 1803dfc5b: mov rcx, qword ptr [rdx + rax - 8] */
L_1803dfc5b_0:;
L_1803dfc5b_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,16,8)));
L_1803dfc5b_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dfc5b_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfc5b_4:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dfc5b_5:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803dfc5b_6:;
/* 1803dfc60: mov eax, dword ptr [rcx + r8*4 - 0xc] */
L_1803dfc60_0:;
L_1803dfc60_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff4))+rd(s->r,8,8)));
L_1803dfc60_2:;
wr(s->u,16,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803dfc60_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfc60_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dfc60_5:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803dfc60_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfc60_7:;
/* 1803dfc65: mov dword ptr [rcx - 8], eax */
L_1803dfc65_0:;
L_1803dfc65_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803dfc65_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dfc65_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dfc65_4:;
/* 1803dfc68: mov rax, qword ptr [rbx + 8] */
L_1803dfc68_0:;
L_1803dfc68_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dfc68_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfc68_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dfc68_4:;
/* 1803dfc6c: mov rcx, qword ptr [rdx + rax - 8] */
L_1803dfc6c_0:;
L_1803dfc6c_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,16,8)));
L_1803dfc6c_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dfc6c_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfc6c_4:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dfc6c_5:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803dfc6c_6:;
/* 1803dfc71: mov eax, dword ptr [rcx + r8*4 - 8] */
L_1803dfc71_0:;
L_1803dfc71_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,8,8)));
L_1803dfc71_2:;
wr(s->u,16,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803dfc71_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfc71_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dfc71_5:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803dfc71_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfc71_7:;
/* 1803dfc76: mov dword ptr [rcx - 4], eax */
L_1803dfc76_0:;
L_1803dfc76_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dfc76_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dfc76_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dfc76_4:;
/* 1803dfc79: mov rax, qword ptr [rbx + 8] */
L_1803dfc79_0:;
L_1803dfc79_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dfc79_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfc79_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dfc79_4:;
/* 1803dfc7d: mov rcx, qword ptr [rdx + rax - 8] */
L_1803dfc7d_0:;
L_1803dfc7d_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,16,8)));
L_1803dfc7d_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dfc7d_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfc7d_4:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dfc7d_5:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803dfc7d_6:;
/* 1803dfc82: mov eax, dword ptr [rcx + r8*4 - 4] */
L_1803dfc82_0:;
L_1803dfc82_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,8,8)));
L_1803dfc82_2:;
wr(s->u,16,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803dfc82_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfc82_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dfc82_5:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803dfc82_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfc82_7:;
/* 1803dfc87: mov dword ptr [rcx], eax */
L_1803dfc87_0:;
L_1803dfc87_1:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dfc87_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,32,4));
L_1803dfc87_3:;
/* 1803dfc89: cmp edi, dword ptr [rbx + 0x38] */
L_1803dfc89_0:;
L_1803dfc89_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dfc89_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfc89_3:;
wr(s->u,59,4,rd(s->u,32,4));
L_1803dfc89_4:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->u,59,4)));
L_1803dfc89_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->u,59,4),4,1));
L_1803dfc89_6:;
wr(s->u,63,4,(rd(s->r,56,4)-rd(s->u,59,4)));
L_1803dfc89_7:;
wr(s->r,519,1,(sx(rd(s->u,63,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfc89_8:;
wr(s->r,518,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803dfc89_9:;
wr(s->u,49,4,(rd(s->u,63,4)&((U)UINT64_C(0xff))));
L_1803dfc89_10:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dfc89_11:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dfc89_12:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dfc89_13:;
/* 1803dfc8c: jl 0x1803dfc40 */
L_1803dfc8c_0:;
L_1803dfc8c_1:;
wr(s->u,48,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dfc8c_2:;
if(rd(s->u,48,1)){goto L_1803dfc40_0;}
L_1803dfc8c_3:;
return UINT64_C(0x1803dfc8e);
}
uint64_t b_1803dfc40(CPU*s){
/* 1803dfc40: mov rax, qword ptr [rbx + 8] */
L_1803dfc40_0:;
L_1803dfc40_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dfc40_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfc40_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dfc40_4:;
/* 1803dfc44: inc edi */
L_1803dfc44_0:;
L_1803dfc44_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),((U)UINT64_C(0x1)),4,0));
L_1803dfc44_2:;
wr(s->r,56,4,(rd(s->r,56,4)+((U)UINT64_C(0x1))));
L_1803dfc44_3:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dfc44_4:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfc44_5:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803dfc44_6:;
wr(s->u,49,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803dfc44_7:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dfc44_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dfc44_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dfc44_10:;
/* 1803dfc46: add rdx, 8 */
L_1803dfc46_0:;
L_1803dfc46_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803dfc46_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x8)),8,0));
L_1803dfc46_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803dfc46_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfc46_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803dfc46_6:;
wr(s->u,49,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803dfc46_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803dfc46_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dfc46_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dfc46_10:;
/* 1803dfc4a: mov rcx, qword ptr [rdx + rax - 8] */
L_1803dfc4a_0:;
L_1803dfc4a_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,16,8)));
L_1803dfc4a_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dfc4a_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfc4a_4:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dfc4a_5:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803dfc4a_6:;
/* 1803dfc4f: mov eax, dword ptr [rcx + r8*4 - 0x10] */
L_1803dfc4f_0:;
L_1803dfc4f_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,8,8)));
L_1803dfc4f_2:;
wr(s->u,16,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803dfc4f_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfc4f_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dfc4f_5:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803dfc4f_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfc4f_7:;
/* 1803dfc54: mov dword ptr [rcx - 0xc], eax */
L_1803dfc54_0:;
L_1803dfc54_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803dfc54_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dfc54_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dfc54_4:;
/* 1803dfc57: mov rax, qword ptr [rbx + 8] */
L_1803dfc57_0:;
L_1803dfc57_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dfc57_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfc57_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dfc57_4:;
/* 1803dfc5b: mov rcx, qword ptr [rdx + rax - 8] */
L_1803dfc5b_0:;
L_1803dfc5b_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,16,8)));
L_1803dfc5b_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dfc5b_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfc5b_4:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dfc5b_5:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803dfc5b_6:;
/* 1803dfc60: mov eax, dword ptr [rcx + r8*4 - 0xc] */
L_1803dfc60_0:;
L_1803dfc60_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff4))+rd(s->r,8,8)));
L_1803dfc60_2:;
wr(s->u,16,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803dfc60_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfc60_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dfc60_5:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803dfc60_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfc60_7:;
/* 1803dfc65: mov dword ptr [rcx - 8], eax */
L_1803dfc65_0:;
L_1803dfc65_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803dfc65_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dfc65_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dfc65_4:;
/* 1803dfc68: mov rax, qword ptr [rbx + 8] */
L_1803dfc68_0:;
L_1803dfc68_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dfc68_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfc68_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dfc68_4:;
/* 1803dfc6c: mov rcx, qword ptr [rdx + rax - 8] */
L_1803dfc6c_0:;
L_1803dfc6c_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,16,8)));
L_1803dfc6c_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dfc6c_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfc6c_4:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dfc6c_5:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803dfc6c_6:;
/* 1803dfc71: mov eax, dword ptr [rcx + r8*4 - 8] */
L_1803dfc71_0:;
L_1803dfc71_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,8,8)));
L_1803dfc71_2:;
wr(s->u,16,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803dfc71_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfc71_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dfc71_5:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803dfc71_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfc71_7:;
/* 1803dfc76: mov dword ptr [rcx - 4], eax */
L_1803dfc76_0:;
L_1803dfc76_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dfc76_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dfc76_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dfc76_4:;
/* 1803dfc79: mov rax, qword ptr [rbx + 8] */
L_1803dfc79_0:;
L_1803dfc79_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dfc79_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfc79_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dfc79_4:;
/* 1803dfc7d: mov rcx, qword ptr [rdx + rax - 8] */
L_1803dfc7d_0:;
L_1803dfc7d_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,16,8)));
L_1803dfc7d_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dfc7d_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfc7d_4:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dfc7d_5:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803dfc7d_6:;
/* 1803dfc82: mov eax, dword ptr [rcx + r8*4 - 4] */
L_1803dfc82_0:;
L_1803dfc82_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,8,8)));
L_1803dfc82_2:;
wr(s->u,16,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803dfc82_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfc82_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dfc82_5:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803dfc82_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfc82_7:;
/* 1803dfc87: mov dword ptr [rcx], eax */
L_1803dfc87_0:;
L_1803dfc87_1:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dfc87_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,32,4));
L_1803dfc87_3:;
/* 1803dfc89: cmp edi, dword ptr [rbx + 0x38] */
L_1803dfc89_0:;
L_1803dfc89_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dfc89_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfc89_3:;
wr(s->u,59,4,rd(s->u,32,4));
L_1803dfc89_4:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->u,59,4)));
L_1803dfc89_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->u,59,4),4,1));
L_1803dfc89_6:;
wr(s->u,63,4,(rd(s->r,56,4)-rd(s->u,59,4)));
L_1803dfc89_7:;
wr(s->r,519,1,(sx(rd(s->u,63,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfc89_8:;
wr(s->r,518,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803dfc89_9:;
wr(s->u,49,4,(rd(s->u,63,4)&((U)UINT64_C(0xff))));
L_1803dfc89_10:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dfc89_11:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dfc89_12:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dfc89_13:;
/* 1803dfc8c: jl 0x1803dfc40 */
L_1803dfc8c_0:;
L_1803dfc8c_1:;
wr(s->u,48,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dfc8c_2:;
if(rd(s->u,48,1)){goto L_1803dfc40_0;}
L_1803dfc8c_3:;
return UINT64_C(0x1803dfc8e);
}
uint64_t b_1803dfc8e(CPU*s){
/* 1803dfc8e: jmp 0x1803dfcde */
L_1803dfc8e_0:;
L_1803dfc8e_1:;
return UINT64_C(0x1803dfcde);
L_1803dfc8e_2:;
return UINT64_C(0x1803dfc90);
}
uint64_t b_1803dfc90(CPU*s){
/* 1803dfc90: cmp dword ptr [rbx + 0x38], edi */
L_1803dfc90_0:;
L_1803dfc90_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dfc90_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfc90_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803dfc90_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,56,4)));
L_1803dfc90_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,56,4),4,1));
L_1803dfc90_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,56,4)));
L_1803dfc90_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfc90_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803dfc90_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803dfc90_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803dfc90_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803dfc90_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803dfc90_13:;
/* 1803dfc93: jle 0x1803dfcde */
L_1803dfc93_0:;
L_1803dfc93_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dfc93_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803dfc93_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803dfcde);}
L_1803dfc93_4:;
return UINT64_C(0x1803dfc95);
}
uint64_t b_1803dfc95(CPU*s){
/* 1803dfc95: mov r9, rdi */
L_1803dfc95_0:;
L_1803dfc95_1:;
wr(s->r,136,8,rd(s->r,56,8));
L_1803dfc95_2:;
/* 1803dfc98: nop dword ptr [rax + rax] */
L_1803dfc98_0:;
L_1803dfc98_1:;
wr(s->u,32,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dfc98_2:;
wr(s->u,40,8,(rd(s->r,0,8)+rd(s->u,32,8)));
L_1803dfc98_3:;
/* 1803dfca0: mov rax, qword ptr [rbx + 8] */
L_1803dfca0_0:;
L_1803dfca0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dfca0_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfca0_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803dfca0_4:;
/* 1803dfca4: inc edi */
L_1803dfca4_0:;
L_1803dfca4_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),((U)UINT64_C(0x1)),4,0));
L_1803dfca4_2:;
wr(s->r,56,4,(rd(s->r,56,4)+((U)UINT64_C(0x1))));
L_1803dfca4_3:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dfca4_4:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfca4_5:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803dfca4_6:;
wr(s->u,65,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803dfca4_7:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803dfca4_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803dfca4_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803dfca4_10:;
/* 1803dfca6: add r9, 8 */
L_1803dfca6_0:;
L_1803dfca6_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803dfca6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803dfca6_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803dfca6_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfca6_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dfca6_6:;
wr(s->u,65,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dfca6_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803dfca6_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803dfca6_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803dfca6_10:;
/* 1803dfcaa: mov rcx, qword ptr [r9 + rax - 8] */
L_1803dfcaa_0:;
L_1803dfcaa_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803dfcaa_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dfcaa_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfcaa_4:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dfcaa_5:;
wr(s->r,8,8,rd(s->u,56,8));
L_1803dfcaa_6:;
/* 1803dfcaf: mov eax, dword ptr [rcx + r8*4 - 0xc] */
L_1803dfcaf_0:;
L_1803dfcaf_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff4))+rd(s->r,8,8)));
L_1803dfcaf_2:;
wr(s->u,16,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803dfcaf_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfcaf_4:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dfcaf_5:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803dfcaf_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfcaf_7:;
/* 1803dfcb4: mov dword ptr [rcx - 0xc], eax */
L_1803dfcb4_0:;
L_1803dfcb4_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803dfcb4_2:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803dfcb4_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803dfcb4_4:;
/* 1803dfcb7: mov rax, qword ptr [rbx + 8] */
L_1803dfcb7_0:;
L_1803dfcb7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dfcb7_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfcb7_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803dfcb7_4:;
/* 1803dfcbb: mov rdx, qword ptr [r9 + rax - 8] */
L_1803dfcbb_0:;
L_1803dfcbb_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803dfcbb_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dfcbb_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfcbb_4:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dfcbb_5:;
wr(s->r,16,8,rd(s->u,56,8));
L_1803dfcbb_6:;
/* 1803dfcc0: mov ecx, dword ptr [rdx + r8*4 - 8] */
L_1803dfcc0_0:;
L_1803dfcc0_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,16,8)));
L_1803dfcc0_2:;
wr(s->u,16,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803dfcc0_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfcc0_4:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dfcc0_5:;
wr(s->r,8,4,rd(s->u,52,4));
L_1803dfcc0_6:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dfcc0_7:;
/* 1803dfcc5: mov dword ptr [rdx - 8], ecx */
L_1803dfcc5_0:;
L_1803dfcc5_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803dfcc5_2:;
wr(s->u,48,4,rd(s->r,8,4));
L_1803dfcc5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803dfcc5_4:;
/* 1803dfcc8: mov rcx, qword ptr [rbx + 8] */
L_1803dfcc8_0:;
L_1803dfcc8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dfcc8_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfcc8_3:;
wr(s->r,8,8,rd(s->u,56,8));
L_1803dfcc8_4:;
/* 1803dfccc: mov rdx, qword ptr [r9 + rcx - 8] */
L_1803dfccc_0:;
L_1803dfccc_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803dfccc_2:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803dfccc_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfccc_4:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dfccc_5:;
wr(s->r,16,8,rd(s->u,56,8));
L_1803dfccc_6:;
/* 1803dfcd1: mov ecx, dword ptr [rdx + r8*4 - 4] */
L_1803dfcd1_0:;
L_1803dfcd1_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,16,8)));
L_1803dfcd1_2:;
wr(s->u,16,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803dfcd1_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfcd1_4:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dfcd1_5:;
wr(s->r,8,4,rd(s->u,52,4));
L_1803dfcd1_6:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dfcd1_7:;
/* 1803dfcd6: mov dword ptr [rdx - 4], ecx */
L_1803dfcd6_0:;
L_1803dfcd6_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dfcd6_2:;
wr(s->u,48,4,rd(s->r,8,4));
L_1803dfcd6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803dfcd6_4:;
/* 1803dfcd9: cmp edi, dword ptr [rbx + 0x38] */
L_1803dfcd9_0:;
L_1803dfcd9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dfcd9_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfcd9_3:;
wr(s->u,75,4,rd(s->u,48,4));
L_1803dfcd9_4:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->u,75,4)));
L_1803dfcd9_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->u,75,4),4,1));
L_1803dfcd9_6:;
wr(s->u,79,4,(rd(s->r,56,4)-rd(s->u,75,4)));
L_1803dfcd9_7:;
wr(s->r,519,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfcd9_8:;
wr(s->r,518,1,(rd(s->u,79,4)==((U)UINT64_C(0x0))));
L_1803dfcd9_9:;
wr(s->u,65,4,(rd(s->u,79,4)&((U)UINT64_C(0xff))));
L_1803dfcd9_10:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803dfcd9_11:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803dfcd9_12:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803dfcd9_13:;
/* 1803dfcdc: jl 0x1803dfca0 */
L_1803dfcdc_0:;
L_1803dfcdc_1:;
wr(s->u,64,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dfcdc_2:;
if(rd(s->u,64,1)){goto L_1803dfca0_0;}
L_1803dfcdc_3:;
return UINT64_C(0x1803dfcde);
}
uint64_t b_1803dfca0(CPU*s){
/* 1803dfca0: mov rax, qword ptr [rbx + 8] */
L_1803dfca0_0:;
L_1803dfca0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dfca0_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfca0_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dfca0_4:;
/* 1803dfca4: inc edi */
L_1803dfca4_0:;
L_1803dfca4_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),((U)UINT64_C(0x1)),4,0));
L_1803dfca4_2:;
wr(s->r,56,4,(rd(s->r,56,4)+((U)UINT64_C(0x1))));
L_1803dfca4_3:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dfca4_4:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfca4_5:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803dfca4_6:;
wr(s->u,49,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803dfca4_7:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dfca4_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dfca4_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dfca4_10:;
/* 1803dfca6: add r9, 8 */
L_1803dfca6_0:;
L_1803dfca6_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803dfca6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803dfca6_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803dfca6_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfca6_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dfca6_6:;
wr(s->u,49,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dfca6_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803dfca6_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dfca6_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dfca6_10:;
/* 1803dfcaa: mov rcx, qword ptr [r9 + rax - 8] */
L_1803dfcaa_0:;
L_1803dfcaa_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803dfcaa_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dfcaa_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfcaa_4:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dfcaa_5:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803dfcaa_6:;
/* 1803dfcaf: mov eax, dword ptr [rcx + r8*4 - 0xc] */
L_1803dfcaf_0:;
L_1803dfcaf_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff4))+rd(s->r,8,8)));
L_1803dfcaf_2:;
wr(s->u,16,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803dfcaf_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfcaf_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dfcaf_5:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803dfcaf_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfcaf_7:;
/* 1803dfcb4: mov dword ptr [rcx - 0xc], eax */
L_1803dfcb4_0:;
L_1803dfcb4_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803dfcb4_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dfcb4_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dfcb4_4:;
/* 1803dfcb7: mov rax, qword ptr [rbx + 8] */
L_1803dfcb7_0:;
L_1803dfcb7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dfcb7_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfcb7_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dfcb7_4:;
/* 1803dfcbb: mov rdx, qword ptr [r9 + rax - 8] */
L_1803dfcbb_0:;
L_1803dfcbb_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803dfcbb_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dfcbb_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfcbb_4:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dfcbb_5:;
wr(s->r,16,8,rd(s->u,40,8));
L_1803dfcbb_6:;
/* 1803dfcc0: mov ecx, dword ptr [rdx + r8*4 - 8] */
L_1803dfcc0_0:;
L_1803dfcc0_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,16,8)));
L_1803dfcc0_2:;
wr(s->u,16,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803dfcc0_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfcc0_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dfcc0_5:;
wr(s->r,8,4,rd(s->u,36,4));
L_1803dfcc0_6:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dfcc0_7:;
/* 1803dfcc5: mov dword ptr [rdx - 8], ecx */
L_1803dfcc5_0:;
L_1803dfcc5_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803dfcc5_2:;
wr(s->u,32,4,rd(s->r,8,4));
L_1803dfcc5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dfcc5_4:;
/* 1803dfcc8: mov rcx, qword ptr [rbx + 8] */
L_1803dfcc8_0:;
L_1803dfcc8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dfcc8_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfcc8_3:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803dfcc8_4:;
/* 1803dfccc: mov rdx, qword ptr [r9 + rcx - 8] */
L_1803dfccc_0:;
L_1803dfccc_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803dfccc_2:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803dfccc_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfccc_4:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dfccc_5:;
wr(s->r,16,8,rd(s->u,40,8));
L_1803dfccc_6:;
/* 1803dfcd1: mov ecx, dword ptr [rdx + r8*4 - 4] */
L_1803dfcd1_0:;
L_1803dfcd1_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,16,8)));
L_1803dfcd1_2:;
wr(s->u,16,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803dfcd1_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfcd1_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dfcd1_5:;
wr(s->r,8,4,rd(s->u,36,4));
L_1803dfcd1_6:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dfcd1_7:;
/* 1803dfcd6: mov dword ptr [rdx - 4], ecx */
L_1803dfcd6_0:;
L_1803dfcd6_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dfcd6_2:;
wr(s->u,32,4,rd(s->r,8,4));
L_1803dfcd6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dfcd6_4:;
/* 1803dfcd9: cmp edi, dword ptr [rbx + 0x38] */
L_1803dfcd9_0:;
L_1803dfcd9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dfcd9_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfcd9_3:;
wr(s->u,59,4,rd(s->u,32,4));
L_1803dfcd9_4:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->u,59,4)));
L_1803dfcd9_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->u,59,4),4,1));
L_1803dfcd9_6:;
wr(s->u,63,4,(rd(s->r,56,4)-rd(s->u,59,4)));
L_1803dfcd9_7:;
wr(s->r,519,1,(sx(rd(s->u,63,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfcd9_8:;
wr(s->r,518,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803dfcd9_9:;
wr(s->u,49,4,(rd(s->u,63,4)&((U)UINT64_C(0xff))));
L_1803dfcd9_10:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dfcd9_11:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dfcd9_12:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dfcd9_13:;
/* 1803dfcdc: jl 0x1803dfca0 */
L_1803dfcdc_0:;
L_1803dfcdc_1:;
wr(s->u,48,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dfcdc_2:;
if(rd(s->u,48,1)){goto L_1803dfca0_0;}
L_1803dfcdc_3:;
return UINT64_C(0x1803dfcde);
}
uint64_t b_1803dfcde(CPU*s){
/* 1803dfcde: cvttsd2si ecx, qword ptr [rbx + 0x48] */
L_1803dfcde_0:;
L_1803dfcde_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803dfcde_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfcde_3:;
wr(s->r,8,4,ftrunc(fv(rd(s->u,12,8),8),4));
L_1803dfcde_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dfcde_5:;
/* 1803dfce3: mov eax, r15d */
L_1803dfce3_0:;
L_1803dfce3_1:;
wr(s->r,0,4,rd(s->r,184,4));
L_1803dfce3_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfce3_3:;
/* 1803dfce6: mov dword ptr [rbx + 0x34], ecx */
L_1803dfce6_0:;
L_1803dfce6_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803dfce6_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_1803dfce6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dfce6_4:;
/* 1803dfce9: add rsp, 0x90 */
L_1803dfce9_0:;
L_1803dfce9_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x90)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dfce9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x90)),8,0));
L_1803dfce9_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x90))));
L_1803dfce9_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfce9_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dfce9_6:;
wr(s->u,20,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dfce9_7:;
wr(s->u,28,1,pop(rd(s->u,20,8),8));
L_1803dfce9_8:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803dfce9_9:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803dfce9_10:;
/* 1803dfcf0: pop r15 */
L_1803dfcf0_0:;
L_1803dfcf0_1:;
wr(s->u,30,8,((U)UINT64_C(0x0)));
L_1803dfcf0_2:;
wr(s->u,30,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dfcf0_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dfcf0_4:;
wr(s->r,184,8,rd(s->u,30,8));
L_1803dfcf0_5:;
/* 1803dfcf2: pop rdi */
L_1803dfcf2_0:;
L_1803dfcf2_1:;
wr(s->u,30,8,((U)UINT64_C(0x0)));
L_1803dfcf2_2:;
wr(s->u,30,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dfcf2_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dfcf2_4:;
wr(s->r,56,8,rd(s->u,30,8));
L_1803dfcf2_5:;
/* 1803dfcf3: pop rbx */
L_1803dfcf3_0:;
L_1803dfcf3_1:;
wr(s->u,30,8,((U)UINT64_C(0x0)));
L_1803dfcf3_2:;
wr(s->u,30,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dfcf3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dfcf3_4:;
wr(s->r,24,8,rd(s->u,30,8));
L_1803dfcf3_5:;
/* 1803dfcf4: ret  */
L_1803dfcf4_0:;
L_1803dfcf4_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dfcf4_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dfcf4_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dfcf4_4:;
return UINT64_C(0x1803dfcf5);
}
uint64_t b_1803dfd00(CPU*s){
/* 1803dfd00: xor edx, edx */
L_1803dfd00_0:;
L_1803dfd00_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dfd00_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dfd00_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dfd00_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dfd00_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfd00_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dfd00_7:;
wr(s->u,26,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dfd00_8:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803dfd00_9:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803dfd00_10:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803dfd00_11:;
/* 1803dfd02: mov r8, rcx */
L_1803dfd02_0:;
L_1803dfd02_1:;
wr(s->r,128,8,rd(s->r,8,8));
L_1803dfd02_2:;
/* 1803dfd05: cmp dword ptr [rcx + 0x38], edx */
L_1803dfd05_0:;
L_1803dfd05_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x38))));
L_1803dfd05_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfd05_3:;
wr(s->u,32,4,rd(s->u,20,4));
L_1803dfd05_4:;
wr(s->r,512,1,(rd(s->u,32,4)<rd(s->r,16,4)));
L_1803dfd05_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,32,4),rd(s->r,16,4),4,1));
L_1803dfd05_6:;
wr(s->u,36,4,(rd(s->u,32,4)-rd(s->r,16,4)));
L_1803dfd05_7:;
wr(s->r,519,1,(sx(rd(s->u,36,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfd05_8:;
wr(s->r,518,1,(rd(s->u,36,4)==((U)UINT64_C(0x0))));
L_1803dfd05_9:;
wr(s->u,26,4,(rd(s->u,36,4)&((U)UINT64_C(0xff))));
L_1803dfd05_10:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803dfd05_11:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803dfd05_12:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803dfd05_13:;
/* 1803dfd08: mov qword ptr [rcx + 0x48], rdx */
L_1803dfd08_0:;
L_1803dfd08_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x48))));
L_1803dfd08_2:;
wr(s->u,12,8,rd(s->r,16,8));
L_1803dfd08_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803dfd08_4:;
/* 1803dfd0c: mov dword ptr [rcx + 0x34], edx */
L_1803dfd0c_0:;
L_1803dfd0c_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x34))));
L_1803dfd0c_2:;
wr(s->u,8,4,rd(s->r,16,4));
L_1803dfd0c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dfd0c_4:;
/* 1803dfd0f: mov dword ptr [rcx + 0x40], edx */
L_1803dfd0f_0:;
L_1803dfd0f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x40))));
L_1803dfd0f_2:;
wr(s->u,8,4,rd(s->r,16,4));
L_1803dfd0f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dfd0f_4:;
/* 1803dfd12: mov dword ptr [rcx + 0x20], edx */
L_1803dfd12_0:;
L_1803dfd12_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x20))));
L_1803dfd12_2:;
wr(s->u,8,4,rd(s->r,16,4));
L_1803dfd12_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dfd12_4:;
/* 1803dfd15: jle 0x1803dfd40 */
L_1803dfd15_0:;
L_1803dfd15_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dfd15_2:;
wr(s->u,25,1,((rd(s->r,518,1)!=0)||(rd(s->u,24,1)!=0)));
L_1803dfd15_3:;
if(rd(s->u,25,1)){return UINT64_C(0x1803dfd40);}
L_1803dfd15_4:;
return UINT64_C(0x1803dfd17);
}
uint64_t b_1803dfd17(CPU*s){
/* 1803dfd17: mov r9, rdx */
L_1803dfd17_0:;
L_1803dfd17_1:;
wr(s->r,136,8,rd(s->r,16,8));
L_1803dfd17_2:;
/* 1803dfd1a: nop word ptr [rax + rax] */
L_1803dfd1a_0:;
L_1803dfd1a_1:;
wr(s->u,32,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dfd1a_2:;
wr(s->u,40,8,(rd(s->r,0,8)+rd(s->u,32,8)));
L_1803dfd1a_3:;
/* 1803dfd20: mov rax, qword ptr [r8 + 8] */
L_1803dfd20_0:;
L_1803dfd20_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803dfd20_2:;
wr(s->u,52,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfd20_3:;
wr(s->r,0,8,rd(s->u,52,8));
L_1803dfd20_4:;
/* 1803dfd24: inc edx */
L_1803dfd24_0:;
L_1803dfd24_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803dfd24_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803dfd24_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dfd24_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfd24_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dfd24_6:;
wr(s->u,61,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dfd24_7:;
wr(s->u,69,1,pop(rd(s->u,61,4),4));
L_1803dfd24_8:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803dfd24_9:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803dfd24_10:;
/* 1803dfd26: add r9, 8 */
L_1803dfd26_0:;
L_1803dfd26_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803dfd26_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803dfd26_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803dfd26_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfd26_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dfd26_6:;
wr(s->u,61,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dfd26_7:;
wr(s->u,69,1,pop(rd(s->u,61,8),8));
L_1803dfd26_8:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803dfd26_9:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803dfd26_10:;
/* 1803dfd2a: mov rcx, qword ptr [rax + r9 - 8] */
L_1803dfd2a_0:;
L_1803dfd2a_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803dfd2a_2:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x1))));
L_1803dfd2a_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfd2a_4:;
wr(s->u,52,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dfd2a_5:;
wr(s->r,8,8,rd(s->u,52,8));
L_1803dfd2a_6:;
/* 1803dfd2f: xor eax, eax */
L_1803dfd2f_0:;
L_1803dfd2f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dfd2f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dfd2f_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dfd2f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfd2f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfd2f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dfd2f_7:;
wr(s->u,61,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dfd2f_8:;
wr(s->u,69,1,pop(rd(s->u,61,4),4));
L_1803dfd2f_9:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803dfd2f_10:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803dfd2f_11:;
/* 1803dfd31: mov dword ptr [rcx - 0xc], eax */
L_1803dfd31_0:;
L_1803dfd31_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803dfd31_2:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803dfd31_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803dfd31_4:;
/* 1803dfd34: mov dword ptr [rcx - 8], eax */
L_1803dfd34_0:;
L_1803dfd34_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803dfd34_2:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803dfd34_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803dfd34_4:;
/* 1803dfd37: mov dword ptr [rcx - 4], eax */
L_1803dfd37_0:;
L_1803dfd37_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dfd37_2:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803dfd37_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803dfd37_4:;
/* 1803dfd3a: cmp edx, dword ptr [r8 + 0x38] */
L_1803dfd3a_0:;
L_1803dfd3a_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x38))));
L_1803dfd3a_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfd3a_3:;
wr(s->u,71,4,rd(s->u,48,4));
L_1803dfd3a_4:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,71,4)));
L_1803dfd3a_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,71,4),4,1));
L_1803dfd3a_6:;
wr(s->u,75,4,(rd(s->r,16,4)-rd(s->u,71,4)));
L_1803dfd3a_7:;
wr(s->r,519,1,(sx(rd(s->u,75,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfd3a_8:;
wr(s->r,518,1,(rd(s->u,75,4)==((U)UINT64_C(0x0))));
L_1803dfd3a_9:;
wr(s->u,61,4,(rd(s->u,75,4)&((U)UINT64_C(0xff))));
L_1803dfd3a_10:;
wr(s->u,69,1,pop(rd(s->u,61,4),4));
L_1803dfd3a_11:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803dfd3a_12:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803dfd3a_13:;
/* 1803dfd3e: jl 0x1803dfd20 */
L_1803dfd3e_0:;
L_1803dfd3e_1:;
wr(s->u,60,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dfd3e_2:;
if(rd(s->u,60,1)){goto L_1803dfd20_0;}
L_1803dfd3e_3:;
return UINT64_C(0x1803dfd40);
}
uint64_t b_1803dfd20(CPU*s){
/* 1803dfd20: mov rax, qword ptr [r8 + 8] */
L_1803dfd20_0:;
L_1803dfd20_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803dfd20_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfd20_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803dfd20_4:;
/* 1803dfd24: inc edx */
L_1803dfd24_0:;
L_1803dfd24_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803dfd24_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803dfd24_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dfd24_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfd24_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dfd24_6:;
wr(s->u,45,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dfd24_7:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803dfd24_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803dfd24_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803dfd24_10:;
/* 1803dfd26: add r9, 8 */
L_1803dfd26_0:;
L_1803dfd26_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803dfd26_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803dfd26_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803dfd26_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfd26_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dfd26_6:;
wr(s->u,45,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dfd26_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803dfd26_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803dfd26_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803dfd26_10:;
/* 1803dfd2a: mov rcx, qword ptr [rax + r9 - 8] */
L_1803dfd2a_0:;
L_1803dfd2a_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803dfd2a_2:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x1))));
L_1803dfd2a_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803dfd2a_4:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dfd2a_5:;
wr(s->r,8,8,rd(s->u,36,8));
L_1803dfd2a_6:;
/* 1803dfd2f: xor eax, eax */
L_1803dfd2f_0:;
L_1803dfd2f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dfd2f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dfd2f_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dfd2f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfd2f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfd2f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dfd2f_7:;
wr(s->u,45,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dfd2f_8:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803dfd2f_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803dfd2f_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803dfd2f_11:;
/* 1803dfd31: mov dword ptr [rcx - 0xc], eax */
L_1803dfd31_0:;
L_1803dfd31_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803dfd31_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dfd31_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dfd31_4:;
/* 1803dfd34: mov dword ptr [rcx - 8], eax */
L_1803dfd34_0:;
L_1803dfd34_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803dfd34_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dfd34_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dfd34_4:;
/* 1803dfd37: mov dword ptr [rcx - 4], eax */
L_1803dfd37_0:;
L_1803dfd37_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dfd37_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dfd37_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dfd37_4:;
/* 1803dfd3a: cmp edx, dword ptr [r8 + 0x38] */
L_1803dfd3a_0:;
L_1803dfd3a_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x38))));
L_1803dfd3a_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfd3a_3:;
wr(s->u,55,4,rd(s->u,32,4));
L_1803dfd3a_4:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,55,4)));
L_1803dfd3a_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,55,4),4,1));
L_1803dfd3a_6:;
wr(s->u,59,4,(rd(s->r,16,4)-rd(s->u,55,4)));
L_1803dfd3a_7:;
wr(s->r,519,1,(sx(rd(s->u,59,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfd3a_8:;
wr(s->r,518,1,(rd(s->u,59,4)==((U)UINT64_C(0x0))));
L_1803dfd3a_9:;
wr(s->u,45,4,(rd(s->u,59,4)&((U)UINT64_C(0xff))));
L_1803dfd3a_10:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803dfd3a_11:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803dfd3a_12:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803dfd3a_13:;
/* 1803dfd3e: jl 0x1803dfd20 */
L_1803dfd3e_0:;
L_1803dfd3e_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dfd3e_2:;
if(rd(s->u,44,1)){goto L_1803dfd20_0;}
L_1803dfd3e_3:;
return UINT64_C(0x1803dfd40);
}
uint64_t b_1803dfd40(CPU*s){
/* 1803dfd40: repz ret  */
L_1803dfd40_0:;
L_1803dfd40_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dfd40_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dfd40_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dfd40_4:;
return UINT64_C(0x1803dfd42);
}
uint64_t b_1803dfd80(CPU*s){
/* 1803dfd80: mov qword ptr [rsp + 8], rbx */
L_1803dfd80_0:;
L_1803dfd80_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803dfd80_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803dfd80_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dfd80_4:;
/* 1803dfd85: push rdi */
L_1803dfd85_0:;
L_1803dfd85_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803dfd85_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dfd85_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803dfd85_4:;
/* 1803dfd86: sub rsp, 0x20 */
L_1803dfd86_0:;
L_1803dfd86_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803dfd86_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803dfd86_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803dfd86_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfd86_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dfd86_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dfd86_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803dfd86_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dfd86_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dfd86_10:;
/* 1803dfd8a: mov ebx, edx */
L_1803dfd8a_0:;
L_1803dfd8a_1:;
wr(s->r,24,4,rd(s->r,16,4));
L_1803dfd8a_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dfd8a_3:;
/* 1803dfd8c: mov rdi, rcx */
L_1803dfd8c_0:;
L_1803dfd8c_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803dfd8c_2:;
/* 1803dfd8f: call 0x1803df5f0 */
L_1803dfd8f_0:;
L_1803dfd8f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dfd8f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dfd94)));
L_1803dfd8f_3:;
return (uint64_t)UINT64_C(0x1803df5f0);
L_1803dfd8f_4:;
return UINT64_C(0x1803dfd94);
}
uint64_t b_1803dfd94(CPU*s){
/* 1803dfd94: test bl, 1 */
L_1803dfd94_0:;
L_1803dfd94_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dfd94_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dfd94_3:;
wr(s->u,3,1,(rd(s->r,24,1)&((U)UINT64_C(0x1))));
L_1803dfd94_4:;
wr(s->r,519,1,(sx(rd(s->u,3,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803dfd94_5:;
wr(s->r,518,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_1803dfd94_6:;
wr(s->u,0,1,(rd(s->u,3,1)&((U)UINT64_C(0xff))));
L_1803dfd94_7:;
wr(s->u,1,1,pop(rd(s->u,0,1),1));
L_1803dfd94_8:;
wr(s->u,2,1,(rd(s->u,1,1)&((U)UINT64_C(0x1))));
L_1803dfd94_9:;
wr(s->r,514,1,(rd(s->u,2,1)==((U)UINT64_C(0x0))));
L_1803dfd94_10:;
/* 1803dfd97: je 0x1803dfda1 */
L_1803dfd97_0:;
L_1803dfd97_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dfda1);}
L_1803dfd97_2:;
return UINT64_C(0x1803dfd99);
}
uint64_t b_1803dfd99(CPU*s){
/* 1803dfd99: mov rcx, rdi */
L_1803dfd99_0:;
L_1803dfd99_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803dfd99_2:;
/* 1803dfd9c: call 0x180003160 */
L_1803dfd9c_0:;
L_1803dfd9c_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dfd9c_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dfda1)));
L_1803dfd9c_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803dfd9c_4:;
return UINT64_C(0x1803dfda1);
}
uint64_t b_1803dfda1(CPU*s){
/* 1803dfda1: mov rax, rdi */
L_1803dfda1_0:;
L_1803dfda1_1:;
wr(s->r,0,8,rd(s->r,56,8));
L_1803dfda1_2:;
/* 1803dfda4: mov rbx, qword ptr [rsp + 0x30] */
L_1803dfda4_0:;
L_1803dfda4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dfda4_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfda4_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803dfda4_4:;
/* 1803dfda9: add rsp, 0x20 */
L_1803dfda9_0:;
L_1803dfda9_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dfda9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803dfda9_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803dfda9_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfda9_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dfda9_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dfda9_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dfda9_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dfda9_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dfda9_10:;
/* 1803dfdad: pop rdi */
L_1803dfdad_0:;
L_1803dfdad_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803dfdad_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dfdad_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dfdad_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803dfdad_5:;
/* 1803dfdae: ret  */
L_1803dfdae_0:;
L_1803dfdae_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dfdae_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dfdae_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dfdae_4:;
return UINT64_C(0x1803dfdaf);
}
uint64_t b_1803dfe00(CPU*s){
/* 1803dfe00: push rbx */
L_1803dfe00_0:;
L_1803dfe00_1:;
wr(s->u,0,8,rd(s->r,24,8));
L_1803dfe00_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dfe00_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803dfe00_4:;
/* 1803dfe02: sub rsp, 0x20 */
L_1803dfe02_0:;
L_1803dfe02_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803dfe02_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803dfe02_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803dfe02_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfe02_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dfe02_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dfe02_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803dfe02_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803dfe02_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803dfe02_10:;
/* 1803dfe06: mov rbx, rcx */
L_1803dfe06_0:;
L_1803dfe06_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803dfe06_2:;
/* 1803dfe09: mov ecx, 0x8a28 */
L_1803dfe09_0:;
L_1803dfe09_1:;
wr(s->r,8,8,((U)UINT64_C(0x8a28)));
L_1803dfe09_2:;
/* 1803dfe0e: call 0x180609bd4 */
L_1803dfe0e_0:;
L_1803dfe0e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dfe0e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dfe13)));
L_1803dfe0e_3:;
return (uint64_t)UINT64_C(0x180609bd4);
L_1803dfe0e_4:;
return UINT64_C(0x1803dfe13);
}
uint64_t b_1803dfe13(CPU*s){
/* 1803dfe13: xor ecx, ecx */
L_1803dfe13_0:;
L_1803dfe13_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dfe13_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dfe13_3:;
wr(s->r,8,4,(rd(s->r,8,4)^rd(s->r,8,4)));
L_1803dfe13_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dfe13_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfe13_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dfe13_7:;
wr(s->u,8,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dfe13_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803dfe13_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803dfe13_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803dfe13_11:;
/* 1803dfe15: mov edx, 0xf4241 */
L_1803dfe15_0:;
L_1803dfe15_1:;
wr(s->r,16,8,((U)UINT64_C(0xf4241)));
L_1803dfe15_2:;
/* 1803dfe1a: test rax, rax */
L_1803dfe1a_0:;
L_1803dfe1a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dfe1a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dfe1a_3:;
wr(s->u,31,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803dfe1a_4:;
wr(s->r,519,1,(sx(rd(s->u,31,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfe1a_5:;
wr(s->r,518,1,(rd(s->u,31,8)==((U)UINT64_C(0x0))));
L_1803dfe1a_6:;
wr(s->u,8,8,(rd(s->u,31,8)&((U)UINT64_C(0xff))));
L_1803dfe1a_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803dfe1a_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803dfe1a_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803dfe1a_10:;
/* 1803dfe1d: mov qword ptr [rbx], rax */
L_1803dfe1d_0:;
L_1803dfe1d_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803dfe1d_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803dfe1d_3:;
/* 1803dfe20: cmove ecx, edx */
L_1803dfe20_0:;
L_1803dfe20_1:;
wr(s->u,18,4,rd(s->r,16,4));
L_1803dfe20_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dfe20_3:;
wr(s->u,22,1,(!rd(s->r,518,1)));
L_1803dfe20_4:;
if(rd(s->u,22,1)){goto L_1803dfe23_0;}
L_1803dfe20_5:;
wr(s->r,8,4,rd(s->u,18,4));
L_1803dfe20_6:;
/* 1803dfe23: mov eax, ecx */
L_1803dfe23_0:;
L_1803dfe23_1:;
wr(s->r,0,4,rd(s->r,8,4));
L_1803dfe23_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfe23_3:;
/* 1803dfe25: add rsp, 0x20 */
L_1803dfe25_0:;
L_1803dfe25_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dfe25_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803dfe25_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803dfe25_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfe25_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dfe25_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dfe25_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803dfe25_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803dfe25_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803dfe25_10:;
/* 1803dfe29: pop rbx */
L_1803dfe29_0:;
L_1803dfe29_1:;
wr(s->u,23,8,((U)UINT64_C(0x0)));
L_1803dfe29_2:;
wr(s->u,23,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dfe29_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dfe29_4:;
wr(s->r,24,8,rd(s->u,23,8));
L_1803dfe29_5:;
/* 1803dfe2a: ret  */
L_1803dfe2a_0:;
L_1803dfe2a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dfe2a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dfe2a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dfe2a_4:;
return UINT64_C(0x1803dfe2b);
}
uint64_t b_1803dfe23(CPU*s){
/* 1803dfe23: mov eax, ecx */
L_1803dfe23_0:;
L_1803dfe23_1:;
wr(s->r,0,4,rd(s->r,8,4));
L_1803dfe23_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfe23_3:;
/* 1803dfe25: add rsp, 0x20 */
L_1803dfe25_0:;
L_1803dfe25_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dfe25_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803dfe25_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803dfe25_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfe25_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dfe25_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dfe25_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803dfe25_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dfe25_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dfe25_10:;
/* 1803dfe29: pop rbx */
L_1803dfe29_0:;
L_1803dfe29_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803dfe29_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dfe29_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dfe29_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803dfe29_5:;
/* 1803dfe2a: ret  */
L_1803dfe2a_0:;
L_1803dfe2a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dfe2a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dfe2a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dfe2a_4:;
return UINT64_C(0x1803dfe2b);
}
uint64_t b_1803dfe30(CPU*s){
/* 1803dfe30: mov qword ptr [rsp + 0x18], rbx */
L_1803dfe30_0:;
L_1803dfe30_1:;
wr(s->u,8,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803dfe30_2:;
wr(s->u,20,8,rd(s->r,24,8));
L_1803dfe30_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dfe30_4:;
/* 1803dfe35: mov qword ptr [rsp + 0x20], rsi */
L_1803dfe35_0:;
L_1803dfe35_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dfe35_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803dfe35_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dfe35_4:;
/* 1803dfe3a: push rdi */
L_1803dfe3a_0:;
L_1803dfe3a_1:;
wr(s->u,34,8,rd(s->r,56,8));
L_1803dfe3a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dfe3a_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,34,8));
L_1803dfe3a_4:;
/* 1803dfe3b: push r13 */
L_1803dfe3b_0:;
L_1803dfe3b_1:;
wr(s->u,34,8,rd(s->r,168,8));
L_1803dfe3b_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dfe3b_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,34,8));
L_1803dfe3b_4:;
/* 1803dfe3d: push r14 */
L_1803dfe3d_0:;
L_1803dfe3d_1:;
wr(s->u,34,8,rd(s->r,176,8));
L_1803dfe3d_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dfe3d_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,34,8));
L_1803dfe3d_4:;
/* 1803dfe3f: sub rsp, 0x20 */
L_1803dfe3f_0:;
L_1803dfe3f_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803dfe3f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803dfe3f_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803dfe3f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfe3f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dfe3f_6:;
wr(s->u,42,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dfe3f_7:;
wr(s->u,50,1,pop(rd(s->u,42,8),8));
L_1803dfe3f_8:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803dfe3f_9:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803dfe3f_10:;
/* 1803dfe43: movsxd r14, dword ptr [rcx + 0x18] */
L_1803dfe43_0:;
L_1803dfe43_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x18))));
L_1803dfe43_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfe43_3:;
wr(s->r,176,8,(U)sx(rd(s->u,28,4),4));
L_1803dfe43_4:;
/* 1803dfe47: xor edi, edi */
L_1803dfe47_0:;
L_1803dfe47_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dfe47_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dfe47_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803dfe47_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dfe47_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfe47_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803dfe47_7:;
wr(s->u,42,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803dfe47_8:;
wr(s->u,50,1,pop(rd(s->u,42,4),4));
L_1803dfe47_9:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803dfe47_10:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803dfe47_11:;
/* 1803dfe49: mov rsi, rcx */
L_1803dfe49_0:;
L_1803dfe49_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1803dfe49_2:;
/* 1803dfe4c: mov r13d, r14d */
L_1803dfe4c_0:;
L_1803dfe4c_1:;
wr(s->r,168,4,rd(s->r,176,4));
L_1803dfe4c_2:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803dfe4c_3:;
/* 1803dfe4f: mov dword ptr [rcx], edi */
L_1803dfe4f_0:;
L_1803dfe4f_1:;
wr(s->u,16,4,rd(s->r,56,4));
L_1803dfe4f_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,16,4));
L_1803dfe4f_3:;
/* 1803dfe51: sar r13d, 1 */
L_1803dfe51_0:;
L_1803dfe51_1:;
wr(s->u,60,4,(rd(s->r,168,4)&((U)UINT64_C(0x1))));
L_1803dfe51_2:;
wr(s->r,512,1,(rd(s->u,60,4)!=((U)UINT64_C(0x0))));
L_1803dfe51_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dfe51_4:;
wr(s->r,168,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,168,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,168,4),4)>>((U)UINT64_C(0x1)))));
L_1803dfe51_5:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803dfe51_6:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfe51_7:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803dfe51_8:;
wr(s->u,42,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803dfe51_9:;
wr(s->u,50,1,pop(rd(s->u,42,4),4));
L_1803dfe51_10:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803dfe51_11:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803dfe51_12:;
/* 1803dfe54: cmp dword ptr [rcx + 0x34], edi */
L_1803dfe54_0:;
L_1803dfe54_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x34))));
L_1803dfe54_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dfe54_3:;
wr(s->u,52,4,rd(s->u,28,4));
L_1803dfe54_4:;
wr(s->r,512,1,(rd(s->u,52,4)<rd(s->r,56,4)));
L_1803dfe54_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,52,4),rd(s->r,56,4),4,1));
L_1803dfe54_6:;
wr(s->u,56,4,(rd(s->u,52,4)-rd(s->r,56,4)));
L_1803dfe54_7:;
wr(s->r,519,1,(sx(rd(s->u,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfe54_8:;
wr(s->r,518,1,(rd(s->u,56,4)==((U)UINT64_C(0x0))));
L_1803dfe54_9:;
wr(s->u,42,4,(rd(s->u,56,4)&((U)UINT64_C(0xff))));
L_1803dfe54_10:;
wr(s->u,50,1,pop(rd(s->u,42,4),4));
L_1803dfe54_11:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803dfe54_12:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803dfe54_13:;
/* 1803dfe57: mov dword ptr [rcx + 0x14], r13d */
L_1803dfe57_0:;
L_1803dfe57_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x14))));
L_1803dfe57_2:;
wr(s->u,16,4,rd(s->r,168,4));
L_1803dfe57_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dfe57_4:;
/* 1803dfe5b: jle 0x1803dff1a */
L_1803dfe5b_0:;
L_1803dfe5b_1:;
wr(s->u,32,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dfe5b_2:;
wr(s->u,33,1,((rd(s->r,518,1)!=0)||(rd(s->u,32,1)!=0)));
L_1803dfe5b_3:;
if(rd(s->u,33,1)){return UINT64_C(0x1803dff1a);}
L_1803dfe5b_4:;
return UINT64_C(0x1803dfe61);
}
uint64_t b_1803dfe61(CPU*s){
/* 1803dfe61: mov qword ptr [rsp + 0x40], rbp */
L_1803dfe61_0:;
L_1803dfe61_1:;
wr(s->u,21,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dfe61_2:;
wr(s->u,29,8,rd(s->r,40,8));
L_1803dfe61_3:;
mw((uint64_t)rd(s->u,21,8),8,rd(s->u,29,8));
L_1803dfe61_4:;
/* 1803dfe66: mov qword ptr [rsp + 0x48], r12 */
L_1803dfe66_0:;
L_1803dfe66_1:;
wr(s->u,21,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803dfe66_2:;
wr(s->u,29,8,rd(s->r,160,8));
L_1803dfe66_3:;
mw((uint64_t)rd(s->u,21,8),8,rd(s->u,29,8));
L_1803dfe66_4:;
/* 1803dfe6b: mov rbp, r14 */
L_1803dfe6b_0:;
L_1803dfe6b_1:;
wr(s->r,40,8,rd(s->r,176,8));
L_1803dfe6b_2:;
/* 1803dfe6e: movsxd r12, r13d */
L_1803dfe6e_0:;
L_1803dfe6e_1:;
wr(s->r,160,8,(U)sx(rd(s->r,168,4),4));
L_1803dfe6e_2:;
/* 1803dfe71: shl rbp, 2 */
L_1803dfe71_0:;
L_1803dfe71_1:;
wr(s->u,95,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803dfe71_2:;
wr(s->u,99,8,rd(s->r,40,8));
L_1803dfe71_3:;
wr(s->r,40,8,((rd(s->u,95,4)>=64)?0:(rd(s->r,40,8)<<rd(s->u,95,4))));
L_1803dfe71_4:;
wr(s->u,78,1,(rd(s->u,95,4)==((U)UINT64_C(0x0))));
L_1803dfe71_5:;
wr(s->u,79,4,(rd(s->u,95,4)-((U)UINT64_C(0x1))));
L_1803dfe71_6:;
wr(s->u,83,8,((rd(s->u,79,4)>=64)?0:(rd(s->u,99,8)<<rd(s->u,79,4))));
L_1803dfe71_7:;
wr(s->u,91,1,(sx(rd(s->u,83,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfe71_8:;
wr(s->u,0,1,rd(s->u,78,1));
L_1803dfe71_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dfe71_10:;
wr(s->u,2,1,(!rd(s->u,78,1)));
L_1803dfe71_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dfe71_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,91,1)));
L_1803dfe71_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dfe71_14:;
wr(s->u,92,1,(rd(s->u,95,4)==((U)UINT64_C(0x1))));
L_1803dfe71_15:;
wr(s->u,93,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfe71_16:;
wr(s->u,94,1,(rd(s->r,512,1)^rd(s->u,93,1)));
L_1803dfe71_17:;
wr(s->u,0,1,rd(s->u,92,1));
L_1803dfe71_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,94,1)));
L_1803dfe71_19:;
wr(s->u,2,1,(!rd(s->u,92,1)));
L_1803dfe71_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dfe71_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dfe71_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dfe71_23:;
wr(s->u,55,1,(rd(s->u,95,4)!=((U)UINT64_C(0x0))));
L_1803dfe71_24:;
wr(s->u,56,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfe71_25:;
wr(s->u,57,1,(!rd(s->u,55,1)));
L_1803dfe71_26:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,519,1)));
L_1803dfe71_27:;
wr(s->u,59,1,(rd(s->u,55,1)&rd(s->u,56,1)));
L_1803dfe71_28:;
wr(s->r,519,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803dfe71_29:;
wr(s->u,60,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803dfe71_30:;
wr(s->u,61,1,(!rd(s->u,55,1)));
L_1803dfe71_31:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,518,1)));
L_1803dfe71_32:;
wr(s->u,63,1,(rd(s->u,55,1)&rd(s->u,60,1)));
L_1803dfe71_33:;
wr(s->r,518,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803dfe71_34:;
wr(s->u,64,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803dfe71_35:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803dfe71_36:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dfe71_37:;
wr(s->u,74,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dfe71_38:;
wr(s->u,75,1,(!rd(s->u,55,1)));
L_1803dfe71_39:;
wr(s->u,76,1,(rd(s->u,75,1)&rd(s->r,514,1)));
L_1803dfe71_40:;
wr(s->u,77,1,(rd(s->u,55,1)&rd(s->u,74,1)));
L_1803dfe71_41:;
wr(s->r,514,1,(rd(s->u,76,1)|rd(s->u,77,1)));
L_1803dfe71_42:;
/* 1803dfe75: lea rbx, [rcx + 0x60] */
L_1803dfe75_0:;
L_1803dfe75_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x60))));
L_1803dfe75_2:;
wr(s->r,24,8,rd(s->u,5,8));
L_1803dfe75_3:;
/* 1803dfe79: shl r12, 2 */
L_1803dfe79_0:;
L_1803dfe79_1:;
wr(s->u,95,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803dfe79_2:;
wr(s->u,99,8,rd(s->r,160,8));
L_1803dfe79_3:;
wr(s->r,160,8,((rd(s->u,95,4)>=64)?0:(rd(s->r,160,8)<<rd(s->u,95,4))));
L_1803dfe79_4:;
wr(s->u,78,1,(rd(s->u,95,4)==((U)UINT64_C(0x0))));
L_1803dfe79_5:;
wr(s->u,79,4,(rd(s->u,95,4)-((U)UINT64_C(0x1))));
L_1803dfe79_6:;
wr(s->u,83,8,((rd(s->u,79,4)>=64)?0:(rd(s->u,99,8)<<rd(s->u,79,4))));
L_1803dfe79_7:;
wr(s->u,91,1,(sx(rd(s->u,83,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfe79_8:;
wr(s->u,0,1,rd(s->u,78,1));
L_1803dfe79_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dfe79_10:;
wr(s->u,2,1,(!rd(s->u,78,1)));
L_1803dfe79_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dfe79_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,91,1)));
L_1803dfe79_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dfe79_14:;
wr(s->u,92,1,(rd(s->u,95,4)==((U)UINT64_C(0x1))));
L_1803dfe79_15:;
wr(s->u,93,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfe79_16:;
wr(s->u,94,1,(rd(s->r,512,1)^rd(s->u,93,1)));
L_1803dfe79_17:;
wr(s->u,0,1,rd(s->u,92,1));
L_1803dfe79_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,94,1)));
L_1803dfe79_19:;
wr(s->u,2,1,(!rd(s->u,92,1)));
L_1803dfe79_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dfe79_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dfe79_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dfe79_23:;
wr(s->u,55,1,(rd(s->u,95,4)!=((U)UINT64_C(0x0))));
L_1803dfe79_24:;
wr(s->u,56,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfe79_25:;
wr(s->u,57,1,(!rd(s->u,55,1)));
L_1803dfe79_26:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,519,1)));
L_1803dfe79_27:;
wr(s->u,59,1,(rd(s->u,55,1)&rd(s->u,56,1)));
L_1803dfe79_28:;
wr(s->r,519,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803dfe79_29:;
wr(s->u,60,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803dfe79_30:;
wr(s->u,61,1,(!rd(s->u,55,1)));
L_1803dfe79_31:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,518,1)));
L_1803dfe79_32:;
wr(s->u,63,1,(rd(s->u,55,1)&rd(s->u,60,1)));
L_1803dfe79_33:;
wr(s->r,518,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803dfe79_34:;
wr(s->u,64,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803dfe79_35:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803dfe79_36:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dfe79_37:;
wr(s->u,74,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dfe79_38:;
wr(s->u,75,1,(!rd(s->u,55,1)));
L_1803dfe79_39:;
wr(s->u,76,1,(rd(s->u,75,1)&rd(s->r,514,1)));
L_1803dfe79_40:;
wr(s->u,77,1,(rd(s->u,55,1)&rd(s->u,74,1)));
L_1803dfe79_41:;
wr(s->r,514,1,(rd(s->u,76,1)|rd(s->u,77,1)));
L_1803dfe79_42:;
/* 1803dfe7d: nop dword ptr [rax] */
L_1803dfe7d_0:;
L_1803dfe7d_1:;
/* 1803dfe80: mov eax, dword ptr [rsi + 4] */
L_1803dfe80_0:;
L_1803dfe80_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x4))));
L_1803dfe80_2:;
wr(s->u,37,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dfe80_3:;
wr(s->r,0,4,rd(s->u,37,4));
L_1803dfe80_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfe80_5:;
/* 1803dfe83: mov rcx, qword ptr [rbx + 0x318] */
L_1803dfe83_0:;
L_1803dfe83_1:;
wr(s->u,13,8,(rd(s->r,24,8)+((U)UINT64_C(0x318))));
L_1803dfe83_2:;
wr(s->u,41,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803dfe83_3:;
wr(s->r,8,8,rd(s->u,41,8));
L_1803dfe83_4:;
/* 1803dfe8a: xor edx, edx */
L_1803dfe8a_0:;
L_1803dfe8a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dfe8a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dfe8a_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dfe8a_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dfe8a_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfe8a_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dfe8a_7:;
wr(s->u,49,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dfe8a_8:;
wr(s->u,53,1,pop(rd(s->u,49,4),4));
L_1803dfe8a_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803dfe8a_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803dfe8a_11:;
/* 1803dfe8c: add eax, eax */
L_1803dfe8c_0:;
L_1803dfe8c_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803dfe8c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,0,4),4,0));
L_1803dfe8c_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,0,4)));
L_1803dfe8c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfe8c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfe8c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dfe8c_7:;
wr(s->u,49,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dfe8c_8:;
wr(s->u,53,1,pop(rd(s->u,49,4),4));
L_1803dfe8c_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803dfe8c_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803dfe8c_11:;
/* 1803dfe8e: movsxd r8, eax */
L_1803dfe8e_0:;
L_1803dfe8e_1:;
wr(s->r,128,8,(U)sx(rd(s->r,0,4),4));
L_1803dfe8e_2:;
/* 1803dfe91: shl r8, 2 */
L_1803dfe91_0:;
L_1803dfe91_1:;
wr(s->u,95,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803dfe91_2:;
wr(s->u,99,8,rd(s->r,128,8));
L_1803dfe91_3:;
wr(s->r,128,8,((rd(s->u,95,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,95,4))));
L_1803dfe91_4:;
wr(s->u,78,1,(rd(s->u,95,4)==((U)UINT64_C(0x0))));
L_1803dfe91_5:;
wr(s->u,79,4,(rd(s->u,95,4)-((U)UINT64_C(0x1))));
L_1803dfe91_6:;
wr(s->u,83,8,((rd(s->u,79,4)>=64)?0:(rd(s->u,99,8)<<rd(s->u,79,4))));
L_1803dfe91_7:;
wr(s->u,91,1,(sx(rd(s->u,83,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfe91_8:;
wr(s->u,0,1,rd(s->u,78,1));
L_1803dfe91_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dfe91_10:;
wr(s->u,2,1,(!rd(s->u,78,1)));
L_1803dfe91_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dfe91_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,91,1)));
L_1803dfe91_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dfe91_14:;
wr(s->u,92,1,(rd(s->u,95,4)==((U)UINT64_C(0x1))));
L_1803dfe91_15:;
wr(s->u,93,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfe91_16:;
wr(s->u,94,1,(rd(s->r,512,1)^rd(s->u,93,1)));
L_1803dfe91_17:;
wr(s->u,0,1,rd(s->u,92,1));
L_1803dfe91_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,94,1)));
L_1803dfe91_19:;
wr(s->u,2,1,(!rd(s->u,92,1)));
L_1803dfe91_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dfe91_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dfe91_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dfe91_23:;
wr(s->u,55,1,(rd(s->u,95,4)!=((U)UINT64_C(0x0))));
L_1803dfe91_24:;
wr(s->u,56,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfe91_25:;
wr(s->u,57,1,(!rd(s->u,55,1)));
L_1803dfe91_26:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,519,1)));
L_1803dfe91_27:;
wr(s->u,59,1,(rd(s->u,55,1)&rd(s->u,56,1)));
L_1803dfe91_28:;
wr(s->r,519,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803dfe91_29:;
wr(s->u,60,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dfe91_30:;
wr(s->u,61,1,(!rd(s->u,55,1)));
L_1803dfe91_31:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,518,1)));
L_1803dfe91_32:;
wr(s->u,63,1,(rd(s->u,55,1)&rd(s->u,60,1)));
L_1803dfe91_33:;
wr(s->r,518,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803dfe91_34:;
wr(s->u,64,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dfe91_35:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803dfe91_36:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dfe91_37:;
wr(s->u,74,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dfe91_38:;
wr(s->u,75,1,(!rd(s->u,55,1)));
L_1803dfe91_39:;
wr(s->u,76,1,(rd(s->u,75,1)&rd(s->r,514,1)));
L_1803dfe91_40:;
wr(s->u,77,1,(rd(s->u,55,1)&rd(s->u,74,1)));
L_1803dfe91_41:;
wr(s->r,514,1,(rd(s->u,76,1)|rd(s->u,77,1)));
L_1803dfe91_42:;
/* 1803dfe95: call 0x18000d6a6 */
L_1803dfe95_0:;
L_1803dfe95_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dfe95_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dfe9a)));
L_1803dfe95_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dfe95_4:;
return UINT64_C(0x1803dfe9a);
}
uint64_t b_1803dfe80(CPU*s){
/* 1803dfe80: mov eax, dword ptr [rsi + 4] */
L_1803dfe80_0:;
L_1803dfe80_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x4))));
L_1803dfe80_2:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dfe80_3:;
wr(s->r,0,4,rd(s->u,21,4));
L_1803dfe80_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfe80_5:;
/* 1803dfe83: mov rcx, qword ptr [rbx + 0x318] */
L_1803dfe83_0:;
L_1803dfe83_1:;
wr(s->u,13,8,(rd(s->r,24,8)+((U)UINT64_C(0x318))));
L_1803dfe83_2:;
wr(s->u,25,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803dfe83_3:;
wr(s->r,8,8,rd(s->u,25,8));
L_1803dfe83_4:;
/* 1803dfe8a: xor edx, edx */
L_1803dfe8a_0:;
L_1803dfe8a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dfe8a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dfe8a_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dfe8a_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dfe8a_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfe8a_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dfe8a_7:;
wr(s->u,33,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dfe8a_8:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803dfe8a_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803dfe8a_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803dfe8a_11:;
/* 1803dfe8c: add eax, eax */
L_1803dfe8c_0:;
L_1803dfe8c_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803dfe8c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,0,4),4,0));
L_1803dfe8c_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,0,4)));
L_1803dfe8c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfe8c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfe8c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dfe8c_7:;
wr(s->u,33,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dfe8c_8:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803dfe8c_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803dfe8c_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803dfe8c_11:;
/* 1803dfe8e: movsxd r8, eax */
L_1803dfe8e_0:;
L_1803dfe8e_1:;
wr(s->r,128,8,(U)sx(rd(s->r,0,4),4));
L_1803dfe8e_2:;
/* 1803dfe91: shl r8, 2 */
L_1803dfe91_0:;
L_1803dfe91_1:;
wr(s->u,79,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803dfe91_2:;
wr(s->u,83,8,rd(s->r,128,8));
L_1803dfe91_3:;
wr(s->r,128,8,((rd(s->u,79,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,79,4))));
L_1803dfe91_4:;
wr(s->u,62,1,(rd(s->u,79,4)==((U)UINT64_C(0x0))));
L_1803dfe91_5:;
wr(s->u,63,4,(rd(s->u,79,4)-((U)UINT64_C(0x1))));
L_1803dfe91_6:;
wr(s->u,67,8,((rd(s->u,63,4)>=64)?0:(rd(s->u,83,8)<<rd(s->u,63,4))));
L_1803dfe91_7:;
wr(s->u,75,1,(sx(rd(s->u,67,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfe91_8:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803dfe91_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dfe91_10:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803dfe91_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dfe91_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,75,1)));
L_1803dfe91_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dfe91_14:;
wr(s->u,76,1,(rd(s->u,79,4)==((U)UINT64_C(0x1))));
L_1803dfe91_15:;
wr(s->u,77,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfe91_16:;
wr(s->u,78,1,(rd(s->r,512,1)^rd(s->u,77,1)));
L_1803dfe91_17:;
wr(s->u,0,1,rd(s->u,76,1));
L_1803dfe91_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,78,1)));
L_1803dfe91_19:;
wr(s->u,2,1,(!rd(s->u,76,1)));
L_1803dfe91_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dfe91_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dfe91_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dfe91_23:;
wr(s->u,39,1,(rd(s->u,79,4)!=((U)UINT64_C(0x0))));
L_1803dfe91_24:;
wr(s->u,40,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfe91_25:;
wr(s->u,41,1,(!rd(s->u,39,1)));
L_1803dfe91_26:;
wr(s->u,42,1,(rd(s->u,41,1)&rd(s->r,519,1)));
L_1803dfe91_27:;
wr(s->u,43,1,(rd(s->u,39,1)&rd(s->u,40,1)));
L_1803dfe91_28:;
wr(s->r,519,1,(rd(s->u,42,1)|rd(s->u,43,1)));
L_1803dfe91_29:;
wr(s->u,44,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dfe91_30:;
wr(s->u,45,1,(!rd(s->u,39,1)));
L_1803dfe91_31:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,518,1)));
L_1803dfe91_32:;
wr(s->u,47,1,(rd(s->u,39,1)&rd(s->u,44,1)));
L_1803dfe91_33:;
wr(s->r,518,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803dfe91_34:;
wr(s->u,48,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dfe91_35:;
wr(s->u,56,1,pop(rd(s->u,48,8),8));
L_1803dfe91_36:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803dfe91_37:;
wr(s->u,58,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803dfe91_38:;
wr(s->u,59,1,(!rd(s->u,39,1)));
L_1803dfe91_39:;
wr(s->u,60,1,(rd(s->u,59,1)&rd(s->r,514,1)));
L_1803dfe91_40:;
wr(s->u,61,1,(rd(s->u,39,1)&rd(s->u,58,1)));
L_1803dfe91_41:;
wr(s->r,514,1,(rd(s->u,60,1)|rd(s->u,61,1)));
L_1803dfe91_42:;
/* 1803dfe95: call 0x18000d6a6 */
L_1803dfe95_0:;
L_1803dfe95_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dfe95_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dfe9a)));
L_1803dfe95_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dfe95_4:;
return UINT64_C(0x1803dfe9a);
}
uint64_t b_1803dfe9a(CPU*s){
/* 1803dfe9a: mov rcx, qword ptr [rbx] */
L_1803dfe9a_0:;
L_1803dfe9a_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803dfe9a_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803dfe9a_3:;
/* 1803dfe9d: mov r8, rbp */
L_1803dfe9d_0:;
L_1803dfe9d_1:;
wr(s->r,128,8,rd(s->r,40,8));
L_1803dfe9d_2:;
/* 1803dfea0: xor edx, edx */
L_1803dfea0_0:;
L_1803dfea0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dfea0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dfea0_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dfea0_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dfea0_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfea0_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dfea0_7:;
wr(s->u,8,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dfea0_8:;
wr(s->u,12,1,pop(rd(s->u,8,4),4));
L_1803dfea0_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803dfea0_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803dfea0_11:;
/* 1803dfea2: call 0x18000d6a6 */
L_1803dfea2_0:;
L_1803dfea2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dfea2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dfea7)));
L_1803dfea2_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dfea2_4:;
return UINT64_C(0x1803dfea7);
}
uint64_t b_1803dfea7(CPU*s){
/* 1803dfea7: mov rcx, qword ptr [rbx + 0x180] */
L_1803dfea7_0:;
L_1803dfea7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x180))));
L_1803dfea7_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfea7_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dfea7_4:;
/* 1803dfeae: mov r8, rbp */
L_1803dfeae_0:;
L_1803dfeae_1:;
wr(s->r,128,8,rd(s->r,40,8));
L_1803dfeae_2:;
/* 1803dfeb1: xor edx, edx */
L_1803dfeb1_0:;
L_1803dfeb1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dfeb1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dfeb1_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dfeb1_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dfeb1_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfeb1_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dfeb1_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dfeb1_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dfeb1_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dfeb1_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dfeb1_11:;
/* 1803dfeb3: call 0x18000d6a6 */
L_1803dfeb3_0:;
L_1803dfeb3_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dfeb3_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dfeb8)));
L_1803dfeb3_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dfeb3_4:;
return UINT64_C(0x1803dfeb8);
}
uint64_t b_1803dfeb8(CPU*s){
/* 1803dfeb8: movsxd r11, dword ptr [rsi + 4] */
L_1803dfeb8_0:;
L_1803dfeb8_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x4))));
L_1803dfeb8_2:;
wr(s->u,37,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dfeb8_3:;
wr(s->r,152,8,(U)sx(rd(s->u,37,4),4));
L_1803dfeb8_4:;
/* 1803dfebc: mov rcx, qword ptr [rbx + 0x498] */
L_1803dfebc_0:;
L_1803dfebc_1:;
wr(s->u,13,8,(rd(s->r,24,8)+((U)UINT64_C(0x498))));
L_1803dfebc_2:;
wr(s->u,41,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803dfebc_3:;
wr(s->r,8,8,rd(s->u,41,8));
L_1803dfebc_4:;
/* 1803dfec3: lea eax, [r11 + r11] */
L_1803dfec3_0:;
L_1803dfec3_1:;
wr(s->u,21,8,(rd(s->r,152,8)*((U)UINT64_C(0x1))));
L_1803dfec3_2:;
wr(s->u,29,8,(rd(s->r,152,8)+rd(s->u,21,8)));
L_1803dfec3_3:;
wr(s->r,0,4,(rd(s->u,29,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dfec3_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dfec3_5:;
/* 1803dfec7: xor edx, edx */
L_1803dfec7_0:;
L_1803dfec7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dfec7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dfec7_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dfec7_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dfec7_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfec7_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dfec7_7:;
wr(s->u,49,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dfec7_8:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dfec7_9:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dfec7_10:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dfec7_11:;
/* 1803dfec9: movsxd r8, eax */
L_1803dfec9_0:;
L_1803dfec9_1:;
wr(s->r,128,8,(U)sx(rd(s->r,0,4),4));
L_1803dfec9_2:;
/* 1803dfecc: mov rax, r11 */
L_1803dfecc_0:;
L_1803dfecc_1:;
wr(s->r,0,8,rd(s->r,152,8));
L_1803dfecc_2:;
/* 1803dfecf: shl rax, 2 */
L_1803dfecf_0:;
L_1803dfecf_1:;
wr(s->u,99,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803dfecf_2:;
wr(s->u,103,8,rd(s->r,0,8));
L_1803dfecf_3:;
wr(s->r,0,8,((rd(s->u,99,4)>=64)?0:(rd(s->r,0,8)<<rd(s->u,99,4))));
L_1803dfecf_4:;
wr(s->u,82,1,(rd(s->u,99,4)==((U)UINT64_C(0x0))));
L_1803dfecf_5:;
wr(s->u,83,4,(rd(s->u,99,4)-((U)UINT64_C(0x1))));
L_1803dfecf_6:;
wr(s->u,87,8,((rd(s->u,83,4)>=64)?0:(rd(s->u,103,8)<<rd(s->u,83,4))));
L_1803dfecf_7:;
wr(s->u,95,1,(sx(rd(s->u,87,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfecf_8:;
wr(s->u,0,1,rd(s->u,82,1));
L_1803dfecf_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dfecf_10:;
wr(s->u,2,1,(!rd(s->u,82,1)));
L_1803dfecf_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dfecf_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,95,1)));
L_1803dfecf_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dfecf_14:;
wr(s->u,96,1,(rd(s->u,99,4)==((U)UINT64_C(0x1))));
L_1803dfecf_15:;
wr(s->u,97,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfecf_16:;
wr(s->u,98,1,(rd(s->r,512,1)^rd(s->u,97,1)));
L_1803dfecf_17:;
wr(s->u,0,1,rd(s->u,96,1));
L_1803dfecf_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,98,1)));
L_1803dfecf_19:;
wr(s->u,2,1,(!rd(s->u,96,1)));
L_1803dfecf_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dfecf_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dfecf_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dfecf_23:;
wr(s->u,59,1,(rd(s->u,99,4)!=((U)UINT64_C(0x0))));
L_1803dfecf_24:;
wr(s->u,60,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfecf_25:;
wr(s->u,61,1,(!rd(s->u,59,1)));
L_1803dfecf_26:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,519,1)));
L_1803dfecf_27:;
wr(s->u,63,1,(rd(s->u,59,1)&rd(s->u,60,1)));
L_1803dfecf_28:;
wr(s->r,519,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803dfecf_29:;
wr(s->u,64,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803dfecf_30:;
wr(s->u,65,1,(!rd(s->u,59,1)));
L_1803dfecf_31:;
wr(s->u,66,1,(rd(s->u,65,1)&rd(s->r,518,1)));
L_1803dfecf_32:;
wr(s->u,67,1,(rd(s->u,59,1)&rd(s->u,64,1)));
L_1803dfecf_33:;
wr(s->r,518,1,(rd(s->u,66,1)|rd(s->u,67,1)));
L_1803dfecf_34:;
wr(s->u,68,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803dfecf_35:;
wr(s->u,76,1,pop(rd(s->u,68,8),8));
L_1803dfecf_36:;
wr(s->u,77,1,(rd(s->u,76,1)&((U)UINT64_C(0x1))));
L_1803dfecf_37:;
wr(s->u,78,1,(rd(s->u,77,1)==((U)UINT64_C(0x0))));
L_1803dfecf_38:;
wr(s->u,79,1,(!rd(s->u,59,1)));
L_1803dfecf_39:;
wr(s->u,80,1,(rd(s->u,79,1)&rd(s->r,514,1)));
L_1803dfecf_40:;
wr(s->u,81,1,(rd(s->u,59,1)&rd(s->u,78,1)));
L_1803dfecf_41:;
wr(s->r,514,1,(rd(s->u,80,1)|rd(s->u,81,1)));
L_1803dfecf_42:;
/* 1803dfed3: shl r8, 2 */
L_1803dfed3_0:;
L_1803dfed3_1:;
wr(s->u,99,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803dfed3_2:;
wr(s->u,103,8,rd(s->r,128,8));
L_1803dfed3_3:;
wr(s->r,128,8,((rd(s->u,99,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,99,4))));
L_1803dfed3_4:;
wr(s->u,82,1,(rd(s->u,99,4)==((U)UINT64_C(0x0))));
L_1803dfed3_5:;
wr(s->u,83,4,(rd(s->u,99,4)-((U)UINT64_C(0x1))));
L_1803dfed3_6:;
wr(s->u,87,8,((rd(s->u,83,4)>=64)?0:(rd(s->u,103,8)<<rd(s->u,83,4))));
L_1803dfed3_7:;
wr(s->u,95,1,(sx(rd(s->u,87,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfed3_8:;
wr(s->u,0,1,rd(s->u,82,1));
L_1803dfed3_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dfed3_10:;
wr(s->u,2,1,(!rd(s->u,82,1)));
L_1803dfed3_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dfed3_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,95,1)));
L_1803dfed3_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dfed3_14:;
wr(s->u,96,1,(rd(s->u,99,4)==((U)UINT64_C(0x1))));
L_1803dfed3_15:;
wr(s->u,97,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfed3_16:;
wr(s->u,98,1,(rd(s->r,512,1)^rd(s->u,97,1)));
L_1803dfed3_17:;
wr(s->u,0,1,rd(s->u,96,1));
L_1803dfed3_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,98,1)));
L_1803dfed3_19:;
wr(s->u,2,1,(!rd(s->u,96,1)));
L_1803dfed3_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dfed3_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dfed3_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dfed3_23:;
wr(s->u,59,1,(rd(s->u,99,4)!=((U)UINT64_C(0x0))));
L_1803dfed3_24:;
wr(s->u,60,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfed3_25:;
wr(s->u,61,1,(!rd(s->u,59,1)));
L_1803dfed3_26:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,519,1)));
L_1803dfed3_27:;
wr(s->u,63,1,(rd(s->u,59,1)&rd(s->u,60,1)));
L_1803dfed3_28:;
wr(s->r,519,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803dfed3_29:;
wr(s->u,64,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dfed3_30:;
wr(s->u,65,1,(!rd(s->u,59,1)));
L_1803dfed3_31:;
wr(s->u,66,1,(rd(s->u,65,1)&rd(s->r,518,1)));
L_1803dfed3_32:;
wr(s->u,67,1,(rd(s->u,59,1)&rd(s->u,64,1)));
L_1803dfed3_33:;
wr(s->r,518,1,(rd(s->u,66,1)|rd(s->u,67,1)));
L_1803dfed3_34:;
wr(s->u,68,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dfed3_35:;
wr(s->u,76,1,pop(rd(s->u,68,8),8));
L_1803dfed3_36:;
wr(s->u,77,1,(rd(s->u,76,1)&((U)UINT64_C(0x1))));
L_1803dfed3_37:;
wr(s->u,78,1,(rd(s->u,77,1)==((U)UINT64_C(0x0))));
L_1803dfed3_38:;
wr(s->u,79,1,(!rd(s->u,59,1)));
L_1803dfed3_39:;
wr(s->u,80,1,(rd(s->u,79,1)&rd(s->r,514,1)));
L_1803dfed3_40:;
wr(s->u,81,1,(rd(s->u,59,1)&rd(s->u,78,1)));
L_1803dfed3_41:;
wr(s->r,514,1,(rd(s->u,80,1)|rd(s->u,81,1)));
L_1803dfed3_42:;
/* 1803dfed7: sub rcx, rax */
L_1803dfed7_0:;
L_1803dfed7_1:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->r,0,8)));
L_1803dfed7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,0,8),8,1));
L_1803dfed7_3:;
wr(s->r,8,8,(rd(s->r,8,8)-rd(s->r,0,8)));
L_1803dfed7_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dfed7_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803dfed7_6:;
wr(s->u,49,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803dfed7_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803dfed7_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dfed7_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dfed7_10:;
/* 1803dfeda: call 0x18000d6a6 */
L_1803dfeda_0:;
L_1803dfeda_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dfeda_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dfedf)));
L_1803dfeda_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dfeda_4:;
return UINT64_C(0x1803dfedf);
}
uint64_t b_1803dfedf(CPU*s){
/* 1803dfedf: mov rcx, qword ptr [rbx + 0x628] */
L_1803dfedf_0:;
L_1803dfedf_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x628))));
L_1803dfedf_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfedf_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dfedf_4:;
/* 1803dfee6: mov r8, r12 */
L_1803dfee6_0:;
L_1803dfee6_1:;
wr(s->r,128,8,rd(s->r,160,8));
L_1803dfee6_2:;
/* 1803dfee9: xor edx, edx */
L_1803dfee9_0:;
L_1803dfee9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dfee9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dfee9_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dfee9_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dfee9_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfee9_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dfee9_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dfee9_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dfee9_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dfee9_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dfee9_11:;
/* 1803dfeeb: call 0x18000d6a6 */
L_1803dfeeb_0:;
L_1803dfeeb_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dfeeb_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dfef0)));
L_1803dfeeb_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dfeeb_4:;
return UINT64_C(0x1803dfef0);
}
uint64_t b_1803dfef0(CPU*s){
/* 1803dfef0: mov rcx, qword ptr [rbx + 0x7d8] */
L_1803dfef0_0:;
L_1803dfef0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x7d8))));
L_1803dfef0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfef0_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dfef0_4:;
/* 1803dfef7: mov r8, r12 */
L_1803dfef7_0:;
L_1803dfef7_1:;
wr(s->r,128,8,rd(s->r,160,8));
L_1803dfef7_2:;
/* 1803dfefa: xor edx, edx */
L_1803dfefa_0:;
L_1803dfefa_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dfefa_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dfefa_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dfefa_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dfefa_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dfefa_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dfefa_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dfefa_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dfefa_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dfefa_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dfefa_11:;
/* 1803dfefc: call 0x18000d6a6 */
L_1803dfefc_0:;
L_1803dfefc_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dfefc_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dff01)));
L_1803dfefc_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dfefc_4:;
return UINT64_C(0x1803dff01);
}
uint64_t b_1803dff01(CPU*s){
/* 1803dff01: inc edi */
L_1803dff01_0:;
L_1803dff01_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),((U)UINT64_C(0x1)),4,0));
L_1803dff01_2:;
wr(s->r,56,4,(rd(s->r,56,4)+((U)UINT64_C(0x1))));
L_1803dff01_3:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dff01_4:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dff01_5:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803dff01_6:;
wr(s->u,13,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803dff01_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803dff01_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dff01_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dff01_10:;
/* 1803dff03: add rbx, 8 */
L_1803dff03_0:;
L_1803dff03_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803dff03_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x8)),8,0));
L_1803dff03_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dff03_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dff03_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803dff03_6:;
wr(s->u,13,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803dff03_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803dff03_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dff03_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dff03_10:;
/* 1803dff07: cmp edi, dword ptr [rsi + 0x34] */
L_1803dff07_0:;
L_1803dff07_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x34))));
L_1803dff07_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dff07_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803dff07_4:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->u,23,4)));
L_1803dff07_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->u,23,4),4,1));
L_1803dff07_6:;
wr(s->u,27,4,(rd(s->r,56,4)-rd(s->u,23,4)));
L_1803dff07_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dff07_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803dff07_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803dff07_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803dff07_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dff07_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dff07_13:;
/* 1803dff0a: jl 0x1803dfe80 */
L_1803dff0a_0:;
L_1803dff0a_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dff0a_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dfe80);}
L_1803dff0a_3:;
return UINT64_C(0x1803dff10);
}
uint64_t b_1803dff10(CPU*s){
/* 1803dff10: mov r12, qword ptr [rsp + 0x48] */
L_1803dff10_0:;
L_1803dff10_1:;
wr(s->u,13,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803dff10_2:;
wr(s->u,21,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803dff10_3:;
wr(s->r,160,8,rd(s->u,21,8));
L_1803dff10_4:;
/* 1803dff15: mov rbp, qword ptr [rsp + 0x40] */
L_1803dff15_0:;
L_1803dff15_1:;
wr(s->u,13,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dff15_2:;
wr(s->u,21,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803dff15_3:;
wr(s->r,40,8,rd(s->u,21,8));
L_1803dff15_4:;
/* 1803dff1a: mov rcx, qword ptr [rsi + 0x48] */
L_1803dff1a_0:;
L_1803dff1a_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x48))));
L_1803dff1a_2:;
wr(s->u,21,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803dff1a_3:;
wr(s->r,8,8,rd(s->u,21,8));
L_1803dff1a_4:;
/* 1803dff1e: movsxd rdi, r13d */
L_1803dff1e_0:;
L_1803dff1e_1:;
wr(s->r,56,8,(U)sx(rd(s->r,168,4),4));
L_1803dff1e_2:;
/* 1803dff21: xor edx, edx */
L_1803dff21_0:;
L_1803dff21_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dff21_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dff21_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dff21_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dff21_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dff21_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dff21_7:;
wr(s->u,29,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dff21_8:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803dff21_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803dff21_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803dff21_11:;
/* 1803dff23: shl rdi, 2 */
L_1803dff23_0:;
L_1803dff23_1:;
wr(s->u,75,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803dff23_2:;
wr(s->u,79,8,rd(s->r,56,8));
L_1803dff23_3:;
wr(s->r,56,8,((rd(s->u,75,4)>=64)?0:(rd(s->r,56,8)<<rd(s->u,75,4))));
L_1803dff23_4:;
wr(s->u,58,1,(rd(s->u,75,4)==((U)UINT64_C(0x0))));
L_1803dff23_5:;
wr(s->u,59,4,(rd(s->u,75,4)-((U)UINT64_C(0x1))));
L_1803dff23_6:;
wr(s->u,63,8,((rd(s->u,59,4)>=64)?0:(rd(s->u,79,8)<<rd(s->u,59,4))));
L_1803dff23_7:;
wr(s->u,71,1,(sx(rd(s->u,63,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dff23_8:;
wr(s->u,0,1,rd(s->u,58,1));
L_1803dff23_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dff23_10:;
wr(s->u,2,1,(!rd(s->u,58,1)));
L_1803dff23_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dff23_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,71,1)));
L_1803dff23_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dff23_14:;
wr(s->u,72,1,(rd(s->u,75,4)==((U)UINT64_C(0x1))));
L_1803dff23_15:;
wr(s->u,73,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dff23_16:;
wr(s->u,74,1,(rd(s->r,512,1)^rd(s->u,73,1)));
L_1803dff23_17:;
wr(s->u,0,1,rd(s->u,72,1));
L_1803dff23_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,74,1)));
L_1803dff23_19:;
wr(s->u,2,1,(!rd(s->u,72,1)));
L_1803dff23_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dff23_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dff23_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dff23_23:;
wr(s->u,35,1,(rd(s->u,75,4)!=((U)UINT64_C(0x0))));
L_1803dff23_24:;
wr(s->u,36,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dff23_25:;
wr(s->u,37,1,(!rd(s->u,35,1)));
L_1803dff23_26:;
wr(s->u,38,1,(rd(s->u,37,1)&rd(s->r,519,1)));
L_1803dff23_27:;
wr(s->u,39,1,(rd(s->u,35,1)&rd(s->u,36,1)));
L_1803dff23_28:;
wr(s->r,519,1,(rd(s->u,38,1)|rd(s->u,39,1)));
L_1803dff23_29:;
wr(s->u,40,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803dff23_30:;
wr(s->u,41,1,(!rd(s->u,35,1)));
L_1803dff23_31:;
wr(s->u,42,1,(rd(s->u,41,1)&rd(s->r,518,1)));
L_1803dff23_32:;
wr(s->u,43,1,(rd(s->u,35,1)&rd(s->u,40,1)));
L_1803dff23_33:;
wr(s->r,518,1,(rd(s->u,42,1)|rd(s->u,43,1)));
L_1803dff23_34:;
wr(s->u,44,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803dff23_35:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803dff23_36:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803dff23_37:;
wr(s->u,54,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803dff23_38:;
wr(s->u,55,1,(!rd(s->u,35,1)));
L_1803dff23_39:;
wr(s->u,56,1,(rd(s->u,55,1)&rd(s->r,514,1)));
L_1803dff23_40:;
wr(s->u,57,1,(rd(s->u,35,1)&rd(s->u,54,1)));
L_1803dff23_41:;
wr(s->r,514,1,(rd(s->u,56,1)|rd(s->u,57,1)));
L_1803dff23_42:;
/* 1803dff27: mov r8, rdi */
L_1803dff27_0:;
L_1803dff27_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803dff27_2:;
/* 1803dff2a: call 0x18000d6a6 */
L_1803dff2a_0:;
L_1803dff2a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dff2a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dff2f)));
L_1803dff2a_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dff2a_4:;
return UINT64_C(0x1803dff2f);
}
uint64_t b_1803dff1a(CPU*s){
/* 1803dff1a: mov rcx, qword ptr [rsi + 0x48] */
L_1803dff1a_0:;
L_1803dff1a_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x48))));
L_1803dff1a_2:;
wr(s->u,13,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803dff1a_3:;
wr(s->r,8,8,rd(s->u,13,8));
L_1803dff1a_4:;
/* 1803dff1e: movsxd rdi, r13d */
L_1803dff1e_0:;
L_1803dff1e_1:;
wr(s->r,56,8,(U)sx(rd(s->r,168,4),4));
L_1803dff1e_2:;
/* 1803dff21: xor edx, edx */
L_1803dff21_0:;
L_1803dff21_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dff21_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dff21_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dff21_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dff21_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dff21_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dff21_7:;
wr(s->u,21,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dff21_8:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803dff21_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803dff21_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803dff21_11:;
/* 1803dff23: shl rdi, 2 */
L_1803dff23_0:;
L_1803dff23_1:;
wr(s->u,67,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803dff23_2:;
wr(s->u,71,8,rd(s->r,56,8));
L_1803dff23_3:;
wr(s->r,56,8,((rd(s->u,67,4)>=64)?0:(rd(s->r,56,8)<<rd(s->u,67,4))));
L_1803dff23_4:;
wr(s->u,50,1,(rd(s->u,67,4)==((U)UINT64_C(0x0))));
L_1803dff23_5:;
wr(s->u,51,4,(rd(s->u,67,4)-((U)UINT64_C(0x1))));
L_1803dff23_6:;
wr(s->u,55,8,((rd(s->u,51,4)>=64)?0:(rd(s->u,71,8)<<rd(s->u,51,4))));
L_1803dff23_7:;
wr(s->u,63,1,(sx(rd(s->u,55,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dff23_8:;
wr(s->u,0,1,rd(s->u,50,1));
L_1803dff23_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dff23_10:;
wr(s->u,2,1,(!rd(s->u,50,1)));
L_1803dff23_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dff23_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,63,1)));
L_1803dff23_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dff23_14:;
wr(s->u,64,1,(rd(s->u,67,4)==((U)UINT64_C(0x1))));
L_1803dff23_15:;
wr(s->u,65,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dff23_16:;
wr(s->u,66,1,(rd(s->r,512,1)^rd(s->u,65,1)));
L_1803dff23_17:;
wr(s->u,0,1,rd(s->u,64,1));
L_1803dff23_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,66,1)));
L_1803dff23_19:;
wr(s->u,2,1,(!rd(s->u,64,1)));
L_1803dff23_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dff23_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dff23_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dff23_23:;
wr(s->u,27,1,(rd(s->u,67,4)!=((U)UINT64_C(0x0))));
L_1803dff23_24:;
wr(s->u,28,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dff23_25:;
wr(s->u,29,1,(!rd(s->u,27,1)));
L_1803dff23_26:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,519,1)));
L_1803dff23_27:;
wr(s->u,31,1,(rd(s->u,27,1)&rd(s->u,28,1)));
L_1803dff23_28:;
wr(s->r,519,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803dff23_29:;
wr(s->u,32,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803dff23_30:;
wr(s->u,33,1,(!rd(s->u,27,1)));
L_1803dff23_31:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,518,1)));
L_1803dff23_32:;
wr(s->u,35,1,(rd(s->u,27,1)&rd(s->u,32,1)));
L_1803dff23_33:;
wr(s->r,518,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803dff23_34:;
wr(s->u,36,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803dff23_35:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803dff23_36:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803dff23_37:;
wr(s->u,46,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803dff23_38:;
wr(s->u,47,1,(!rd(s->u,27,1)));
L_1803dff23_39:;
wr(s->u,48,1,(rd(s->u,47,1)&rd(s->r,514,1)));
L_1803dff23_40:;
wr(s->u,49,1,(rd(s->u,27,1)&rd(s->u,46,1)));
L_1803dff23_41:;
wr(s->r,514,1,(rd(s->u,48,1)|rd(s->u,49,1)));
L_1803dff23_42:;
/* 1803dff27: mov r8, rdi */
L_1803dff27_0:;
L_1803dff27_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803dff27_2:;
/* 1803dff2a: call 0x18000d6a6 */
L_1803dff2a_0:;
L_1803dff2a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dff2a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dff2f)));
L_1803dff2a_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dff2a_4:;
return UINT64_C(0x1803dff2f);
}
uint64_t b_1803dff2f(CPU*s){
/* 1803dff2f: mov rcx, qword ptr [rsi + 0x9c0] */
L_1803dff2f_0:;
L_1803dff2f_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x9c0))));
L_1803dff2f_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dff2f_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dff2f_4:;
/* 1803dff36: mov r8, rdi */
L_1803dff36_0:;
L_1803dff36_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803dff36_2:;
/* 1803dff39: xor edx, edx */
L_1803dff39_0:;
L_1803dff39_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dff39_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dff39_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dff39_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dff39_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dff39_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dff39_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dff39_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dff39_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dff39_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dff39_11:;
/* 1803dff3b: call 0x18000d6a6 */
L_1803dff3b_0:;
L_1803dff3b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dff3b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dff40)));
L_1803dff3b_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dff3b_4:;
return UINT64_C(0x1803dff40);
}
uint64_t b_1803dff40(CPU*s){
/* 1803dff40: mov rcx, qword ptr [rsi + 0x40] */
L_1803dff40_0:;
L_1803dff40_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x40))));
L_1803dff40_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dff40_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dff40_4:;
/* 1803dff44: mov r8, rdi */
L_1803dff44_0:;
L_1803dff44_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803dff44_2:;
/* 1803dff47: xor edx, edx */
L_1803dff47_0:;
L_1803dff47_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dff47_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dff47_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dff47_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dff47_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dff47_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dff47_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dff47_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dff47_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dff47_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dff47_11:;
/* 1803dff49: call 0x18000d6a6 */
L_1803dff49_0:;
L_1803dff49_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dff49_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dff4e)));
L_1803dff49_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dff49_4:;
return UINT64_C(0x1803dff4e);
}
uint64_t b_1803dff4e(CPU*s){
/* 1803dff4e: mov rcx, qword ptr [rsi + 0x360] */
L_1803dff4e_0:;
L_1803dff4e_1:;
wr(s->u,13,8,(rd(s->r,48,8)+((U)UINT64_C(0x360))));
L_1803dff4e_2:;
wr(s->u,21,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803dff4e_3:;
wr(s->r,8,8,rd(s->u,21,8));
L_1803dff4e_4:;
/* 1803dff55: lea r11d, [r13 + 1] */
L_1803dff55_0:;
L_1803dff55_1:;
wr(s->u,5,8,(rd(s->r,168,8)+((U)UINT64_C(0x1))));
L_1803dff55_2:;
wr(s->r,152,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dff55_3:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dff55_4:;
/* 1803dff59: movsxd rbx, r11d */
L_1803dff59_0:;
L_1803dff59_1:;
wr(s->r,24,8,(U)sx(rd(s->r,152,4),4));
L_1803dff59_2:;
/* 1803dff5c: xor edx, edx */
L_1803dff5c_0:;
L_1803dff5c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dff5c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dff5c_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dff5c_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dff5c_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dff5c_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dff5c_7:;
wr(s->u,29,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dff5c_8:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803dff5c_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803dff5c_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803dff5c_11:;
/* 1803dff5e: shl rbx, 2 */
L_1803dff5e_0:;
L_1803dff5e_1:;
wr(s->u,75,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803dff5e_2:;
wr(s->u,79,8,rd(s->r,24,8));
L_1803dff5e_3:;
wr(s->r,24,8,((rd(s->u,75,4)>=64)?0:(rd(s->r,24,8)<<rd(s->u,75,4))));
L_1803dff5e_4:;
wr(s->u,58,1,(rd(s->u,75,4)==((U)UINT64_C(0x0))));
L_1803dff5e_5:;
wr(s->u,59,4,(rd(s->u,75,4)-((U)UINT64_C(0x1))));
L_1803dff5e_6:;
wr(s->u,63,8,((rd(s->u,59,4)>=64)?0:(rd(s->u,79,8)<<rd(s->u,59,4))));
L_1803dff5e_7:;
wr(s->u,71,1,(sx(rd(s->u,63,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dff5e_8:;
wr(s->u,0,1,rd(s->u,58,1));
L_1803dff5e_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dff5e_10:;
wr(s->u,2,1,(!rd(s->u,58,1)));
L_1803dff5e_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dff5e_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,71,1)));
L_1803dff5e_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dff5e_14:;
wr(s->u,72,1,(rd(s->u,75,4)==((U)UINT64_C(0x1))));
L_1803dff5e_15:;
wr(s->u,73,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dff5e_16:;
wr(s->u,74,1,(rd(s->r,512,1)^rd(s->u,73,1)));
L_1803dff5e_17:;
wr(s->u,0,1,rd(s->u,72,1));
L_1803dff5e_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,74,1)));
L_1803dff5e_19:;
wr(s->u,2,1,(!rd(s->u,72,1)));
L_1803dff5e_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dff5e_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dff5e_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dff5e_23:;
wr(s->u,35,1,(rd(s->u,75,4)!=((U)UINT64_C(0x0))));
L_1803dff5e_24:;
wr(s->u,36,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dff5e_25:;
wr(s->u,37,1,(!rd(s->u,35,1)));
L_1803dff5e_26:;
wr(s->u,38,1,(rd(s->u,37,1)&rd(s->r,519,1)));
L_1803dff5e_27:;
wr(s->u,39,1,(rd(s->u,35,1)&rd(s->u,36,1)));
L_1803dff5e_28:;
wr(s->r,519,1,(rd(s->u,38,1)|rd(s->u,39,1)));
L_1803dff5e_29:;
wr(s->u,40,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803dff5e_30:;
wr(s->u,41,1,(!rd(s->u,35,1)));
L_1803dff5e_31:;
wr(s->u,42,1,(rd(s->u,41,1)&rd(s->r,518,1)));
L_1803dff5e_32:;
wr(s->u,43,1,(rd(s->u,35,1)&rd(s->u,40,1)));
L_1803dff5e_33:;
wr(s->r,518,1,(rd(s->u,42,1)|rd(s->u,43,1)));
L_1803dff5e_34:;
wr(s->u,44,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803dff5e_35:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803dff5e_36:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803dff5e_37:;
wr(s->u,54,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803dff5e_38:;
wr(s->u,55,1,(!rd(s->u,35,1)));
L_1803dff5e_39:;
wr(s->u,56,1,(rd(s->u,55,1)&rd(s->r,514,1)));
L_1803dff5e_40:;
wr(s->u,57,1,(rd(s->u,35,1)&rd(s->u,54,1)));
L_1803dff5e_41:;
wr(s->r,514,1,(rd(s->u,56,1)|rd(s->u,57,1)));
L_1803dff5e_42:;
/* 1803dff62: mov r8, rbx */
L_1803dff62_0:;
L_1803dff62_1:;
wr(s->r,128,8,rd(s->r,24,8));
L_1803dff62_2:;
/* 1803dff65: call 0x18000d6a6 */
L_1803dff65_0:;
L_1803dff65_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dff65_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dff6a)));
L_1803dff65_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dff65_4:;
return UINT64_C(0x1803dff6a);
}
uint64_t b_1803dff6a(CPU*s){
/* 1803dff6a: mov rcx, qword ptr [rsi + 0x368] */
L_1803dff6a_0:;
L_1803dff6a_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x368))));
L_1803dff6a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dff6a_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dff6a_4:;
/* 1803dff71: mov r8, rbx */
L_1803dff71_0:;
L_1803dff71_1:;
wr(s->r,128,8,rd(s->r,24,8));
L_1803dff71_2:;
/* 1803dff74: xor edx, edx */
L_1803dff74_0:;
L_1803dff74_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dff74_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dff74_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dff74_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dff74_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dff74_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dff74_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dff74_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dff74_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dff74_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dff74_11:;
/* 1803dff76: call 0x18000d6a6 */
L_1803dff76_0:;
L_1803dff76_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dff76_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dff7b)));
L_1803dff76_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dff76_4:;
return UINT64_C(0x1803dff7b);
}
uint64_t b_1803dff7b(CPU*s){
/* 1803dff7b: mov rcx, qword ptr [rsi + 0x678] */
L_1803dff7b_0:;
L_1803dff7b_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x678))));
L_1803dff7b_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dff7b_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dff7b_4:;
/* 1803dff82: mov r8, rbx */
L_1803dff82_0:;
L_1803dff82_1:;
wr(s->r,128,8,rd(s->r,24,8));
L_1803dff82_2:;
/* 1803dff85: xor edx, edx */
L_1803dff85_0:;
L_1803dff85_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dff85_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dff85_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dff85_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dff85_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dff85_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dff85_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dff85_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dff85_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dff85_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dff85_11:;
/* 1803dff87: call 0x18000d6a6 */
L_1803dff87_0:;
L_1803dff87_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dff87_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dff8c)));
L_1803dff87_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dff87_4:;
return UINT64_C(0x1803dff8c);
}
uint64_t b_1803dff8c(CPU*s){
/* 1803dff8c: mov rcx, qword ptr [rsi + 0x680] */
L_1803dff8c_0:;
L_1803dff8c_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x680))));
L_1803dff8c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dff8c_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dff8c_4:;
/* 1803dff93: mov r8, rbx */
L_1803dff93_0:;
L_1803dff93_1:;
wr(s->r,128,8,rd(s->r,24,8));
L_1803dff93_2:;
/* 1803dff96: xor edx, edx */
L_1803dff96_0:;
L_1803dff96_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dff96_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dff96_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dff96_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dff96_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dff96_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dff96_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dff96_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dff96_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dff96_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dff96_11:;
/* 1803dff98: call 0x18000d6a6 */
L_1803dff98_0:;
L_1803dff98_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dff98_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dff9d)));
L_1803dff98_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dff98_4:;
return UINT64_C(0x1803dff9d);
}
uint64_t b_1803dff9d(CPU*s){
/* 1803dff9d: mov rcx, qword ptr [rsi + 0x830] */
L_1803dff9d_0:;
L_1803dff9d_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x830))));
L_1803dff9d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dff9d_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dff9d_4:;
/* 1803dffa4: mov r8, rbx */
L_1803dffa4_0:;
L_1803dffa4_1:;
wr(s->r,128,8,rd(s->r,24,8));
L_1803dffa4_2:;
/* 1803dffa7: xor edx, edx */
L_1803dffa7_0:;
L_1803dffa7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dffa7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dffa7_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dffa7_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dffa7_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dffa7_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dffa7_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dffa7_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dffa7_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dffa7_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dffa7_11:;
/* 1803dffa9: call 0x18000d6a6 */
L_1803dffa9_0:;
L_1803dffa9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dffa9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dffae)));
L_1803dffa9_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dffa9_4:;
return UINT64_C(0x1803dffae);
}
uint64_t b_1803dffae(CPU*s){
/* 1803dffae: mov rcx, qword ptr [rsi + 0x9d0] */
L_1803dffae_0:;
L_1803dffae_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x9d0))));
L_1803dffae_2:;
wr(s->u,13,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803dffae_3:;
wr(s->r,8,8,rd(s->u,13,8));
L_1803dffae_4:;
/* 1803dffb5: mov rbx, r14 */
L_1803dffb5_0:;
L_1803dffb5_1:;
wr(s->r,24,8,rd(s->r,176,8));
L_1803dffb5_2:;
/* 1803dffb8: shl rbx, 2 */
L_1803dffb8_0:;
L_1803dffb8_1:;
wr(s->u,67,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803dffb8_2:;
wr(s->u,71,8,rd(s->r,24,8));
L_1803dffb8_3:;
wr(s->r,24,8,((rd(s->u,67,4)>=64)?0:(rd(s->r,24,8)<<rd(s->u,67,4))));
L_1803dffb8_4:;
wr(s->u,50,1,(rd(s->u,67,4)==((U)UINT64_C(0x0))));
L_1803dffb8_5:;
wr(s->u,51,4,(rd(s->u,67,4)-((U)UINT64_C(0x1))));
L_1803dffb8_6:;
wr(s->u,55,8,((rd(s->u,51,4)>=64)?0:(rd(s->u,71,8)<<rd(s->u,51,4))));
L_1803dffb8_7:;
wr(s->u,63,1,(sx(rd(s->u,55,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dffb8_8:;
wr(s->u,0,1,rd(s->u,50,1));
L_1803dffb8_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dffb8_10:;
wr(s->u,2,1,(!rd(s->u,50,1)));
L_1803dffb8_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dffb8_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,63,1)));
L_1803dffb8_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dffb8_14:;
wr(s->u,64,1,(rd(s->u,67,4)==((U)UINT64_C(0x1))));
L_1803dffb8_15:;
wr(s->u,65,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dffb8_16:;
wr(s->u,66,1,(rd(s->r,512,1)^rd(s->u,65,1)));
L_1803dffb8_17:;
wr(s->u,0,1,rd(s->u,64,1));
L_1803dffb8_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,66,1)));
L_1803dffb8_19:;
wr(s->u,2,1,(!rd(s->u,64,1)));
L_1803dffb8_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dffb8_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dffb8_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dffb8_23:;
wr(s->u,27,1,(rd(s->u,67,4)!=((U)UINT64_C(0x0))));
L_1803dffb8_24:;
wr(s->u,28,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dffb8_25:;
wr(s->u,29,1,(!rd(s->u,27,1)));
L_1803dffb8_26:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,519,1)));
L_1803dffb8_27:;
wr(s->u,31,1,(rd(s->u,27,1)&rd(s->u,28,1)));
L_1803dffb8_28:;
wr(s->r,519,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803dffb8_29:;
wr(s->u,32,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803dffb8_30:;
wr(s->u,33,1,(!rd(s->u,27,1)));
L_1803dffb8_31:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,518,1)));
L_1803dffb8_32:;
wr(s->u,35,1,(rd(s->u,27,1)&rd(s->u,32,1)));
L_1803dffb8_33:;
wr(s->r,518,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803dffb8_34:;
wr(s->u,36,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803dffb8_35:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803dffb8_36:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803dffb8_37:;
wr(s->u,46,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803dffb8_38:;
wr(s->u,47,1,(!rd(s->u,27,1)));
L_1803dffb8_39:;
wr(s->u,48,1,(rd(s->u,47,1)&rd(s->r,514,1)));
L_1803dffb8_40:;
wr(s->u,49,1,(rd(s->u,27,1)&rd(s->u,46,1)));
L_1803dffb8_41:;
wr(s->r,514,1,(rd(s->u,48,1)|rd(s->u,49,1)));
L_1803dffb8_42:;
/* 1803dffbc: xor edx, edx */
L_1803dffbc_0:;
L_1803dffbc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dffbc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dffbc_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dffbc_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dffbc_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dffbc_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dffbc_7:;
wr(s->u,21,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dffbc_8:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803dffbc_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803dffbc_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803dffbc_11:;
/* 1803dffbe: mov r8, rbx */
L_1803dffbe_0:;
L_1803dffbe_1:;
wr(s->r,128,8,rd(s->r,24,8));
L_1803dffbe_2:;
/* 1803dffc1: call 0x18000d6a6 */
L_1803dffc1_0:;
L_1803dffc1_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dffc1_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dffc6)));
L_1803dffc1_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dffc1_4:;
return UINT64_C(0x1803dffc6);
}
uint64_t b_1803dffc6(CPU*s){
/* 1803dffc6: mov rcx, qword ptr [rsi + 0x9d8] */
L_1803dffc6_0:;
L_1803dffc6_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x9d8))));
L_1803dffc6_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dffc6_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dffc6_4:;
/* 1803dffcd: mov r8, rdi */
L_1803dffcd_0:;
L_1803dffcd_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803dffcd_2:;
/* 1803dffd0: xor edx, edx */
L_1803dffd0_0:;
L_1803dffd0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dffd0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dffd0_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dffd0_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dffd0_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dffd0_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dffd0_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dffd0_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dffd0_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dffd0_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dffd0_11:;
/* 1803dffd2: call 0x18000d6a6 */
L_1803dffd2_0:;
L_1803dffd2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dffd2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dffd7)));
L_1803dffd2_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dffd2_4:;
return UINT64_C(0x1803dffd7);
}
uint64_t b_1803dffd7(CPU*s){
/* 1803dffd7: mov rcx, qword ptr [rsi + 0x50] */
L_1803dffd7_0:;
L_1803dffd7_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x50))));
L_1803dffd7_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dffd7_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dffd7_4:;
/* 1803dffdb: mov r8, rdi */
L_1803dffdb_0:;
L_1803dffdb_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803dffdb_2:;
/* 1803dffde: xor edx, edx */
L_1803dffde_0:;
L_1803dffde_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dffde_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dffde_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dffde_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dffde_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dffde_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dffde_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dffde_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dffde_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dffde_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dffde_11:;
/* 1803dffe0: call 0x18000d6a6 */
L_1803dffe0_0:;
L_1803dffe0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dffe0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dffe5)));
L_1803dffe0_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dffe0_4:;
return UINT64_C(0x1803dffe5);
}
uint64_t b_1803dffe5(CPU*s){
/* 1803dffe5: mov rcx, qword ptr [rsi + 0x818] */
L_1803dffe5_0:;
L_1803dffe5_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x818))));
L_1803dffe5_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dffe5_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dffe5_4:;
/* 1803dffec: mov r8, rdi */
L_1803dffec_0:;
L_1803dffec_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803dffec_2:;
/* 1803dffef: xor edx, edx */
L_1803dffef_0:;
L_1803dffef_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dffef_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dffef_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dffef_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dffef_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dffef_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dffef_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dffef_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dffef_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dffef_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dffef_11:;
/* 1803dfff1: call 0x18000d6a6 */
L_1803dfff1_0:;
L_1803dfff1_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dfff1_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dfff6)));
L_1803dfff1_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803dfff1_4:;
return UINT64_C(0x1803dfff6);
}
uint64_t b_1803dfff6(CPU*s){
/* 1803dfff6: mov rcx, qword ptr [rsi + 0x820] */
L_1803dfff6_0:;
L_1803dfff6_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x820))));
L_1803dfff6_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dfff6_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dfff6_4:;
/* 1803dfffd: mov r8, rdi */
L_1803dfffd_0:;
L_1803dfffd_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803dfffd_2:;
/* 1803e0000: xor edx, edx */
L_1803e0000_0:;
L_1803e0000_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e0000_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e0000_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803e0000_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e0000_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e0000_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803e0000_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803e0000_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803e0000_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803e0000_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803e0000_11:;
/* 1803e0002: call 0x18000d6a6 */
L_1803e0002_0:;
L_1803e0002_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e0002_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e0007)));
L_1803e0002_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803e0002_4:;
return UINT64_C(0x1803e0007);
}
