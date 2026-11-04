#include "lift_runtime.h"
uint64_t b_1803ed00c(CPU*s){
/* 1803ed00c: mov qword ptr [rsp + 0x10], rbx */
L_1803ed00c_0:;
L_1803ed00c_1:;
wr(s->u,21,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ed00c_2:;
wr(s->u,73,8,rd(s->r,24,8));
L_1803ed00c_3:;
mw((uint64_t)rd(s->u,21,8),8,rd(s->u,73,8));
L_1803ed00c_4:;
/* 1803ed011: lea rax, [r10 - 4] */
L_1803ed011_0:;
L_1803ed011_1:;
wr(s->u,5,8,(rd(s->r,144,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803ed011_2:;
wr(s->r,0,8,rd(s->u,5,8));
L_1803ed011_3:;
/* 1803ed015: mov r9, rdx */
L_1803ed015_0:;
L_1803ed015_1:;
wr(s->r,136,8,rd(s->r,16,8));
L_1803ed015_2:;
/* 1803ed018: shr rax, 2 */
L_1803ed018_0:;
L_1803ed018_1:;
wr(s->u,138,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803ed018_2:;
wr(s->u,142,8,rd(s->r,0,8));
L_1803ed018_3:;
wr(s->r,0,8,((rd(s->u,138,4)>=64)?0:(rd(s->r,0,8)>>rd(s->u,138,4))));
L_1803ed018_4:;
wr(s->u,114,1,(rd(s->u,138,4)==((U)UINT64_C(0x0))));
L_1803ed018_5:;
wr(s->u,115,4,(rd(s->u,138,4)-((U)UINT64_C(0x1))));
L_1803ed018_6:;
wr(s->u,119,8,((rd(s->u,115,4)>=64)?0:(rd(s->u,142,8)>>rd(s->u,115,4))));
L_1803ed018_7:;
wr(s->u,127,8,(rd(s->u,119,8)&((U)UINT64_C(0x1))));
L_1803ed018_8:;
wr(s->u,135,1,(rd(s->u,127,8)!=((U)UINT64_C(0x0))));
L_1803ed018_9:;
wr(s->u,0,1,rd(s->u,114,1));
L_1803ed018_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ed018_11:;
wr(s->u,2,1,(!rd(s->u,114,1)));
L_1803ed018_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ed018_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,135,1)));
L_1803ed018_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ed018_15:;
wr(s->u,136,1,(rd(s->u,138,4)==((U)UINT64_C(0x1))));
L_1803ed018_16:;
wr(s->u,137,1,(sx(rd(s->u,142,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed018_17:;
wr(s->u,0,1,rd(s->u,136,1));
L_1803ed018_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ed018_19:;
wr(s->u,2,1,(!rd(s->u,136,1)));
L_1803ed018_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ed018_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,137,1)));
L_1803ed018_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ed018_23:;
wr(s->u,91,1,(rd(s->u,138,4)!=((U)UINT64_C(0x0))));
L_1803ed018_24:;
wr(s->u,92,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed018_25:;
wr(s->u,93,1,(!rd(s->u,91,1)));
L_1803ed018_26:;
wr(s->u,94,1,(rd(s->u,93,1)&rd(s->r,519,1)));
L_1803ed018_27:;
wr(s->u,95,1,(rd(s->u,91,1)&rd(s->u,92,1)));
L_1803ed018_28:;
wr(s->r,519,1,(rd(s->u,94,1)|rd(s->u,95,1)));
L_1803ed018_29:;
wr(s->u,96,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ed018_30:;
wr(s->u,97,1,(!rd(s->u,91,1)));
L_1803ed018_31:;
wr(s->u,98,1,(rd(s->u,97,1)&rd(s->r,518,1)));
L_1803ed018_32:;
wr(s->u,99,1,(rd(s->u,91,1)&rd(s->u,96,1)));
L_1803ed018_33:;
wr(s->r,518,1,(rd(s->u,98,1)|rd(s->u,99,1)));
L_1803ed018_34:;
wr(s->u,100,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ed018_35:;
wr(s->u,108,1,pop(rd(s->u,100,8),8));
L_1803ed018_36:;
wr(s->u,109,1,(rd(s->u,108,1)&((U)UINT64_C(0x1))));
L_1803ed018_37:;
wr(s->u,110,1,(rd(s->u,109,1)==((U)UINT64_C(0x0))));
L_1803ed018_38:;
wr(s->u,111,1,(!rd(s->u,91,1)));
L_1803ed018_39:;
wr(s->u,112,1,(rd(s->u,111,1)&rd(s->r,514,1)));
L_1803ed018_40:;
wr(s->u,113,1,(rd(s->u,91,1)&rd(s->u,110,1)));
L_1803ed018_41:;
wr(s->r,514,1,(rd(s->u,112,1)|rd(s->u,113,1)));
L_1803ed018_42:;
/* 1803ed01c: sub r9, r8 */
L_1803ed01c_0:;
L_1803ed01c_1:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->r,128,8)));
L_1803ed01c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->r,128,8),8,1));
L_1803ed01c_3:;
wr(s->r,136,8,(rd(s->r,136,8)-rd(s->r,128,8)));
L_1803ed01c_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed01c_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803ed01c_6:;
wr(s->u,81,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803ed01c_7:;
wr(s->u,89,1,pop(rd(s->u,81,8),8));
L_1803ed01c_8:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803ed01c_9:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803ed01c_10:;
/* 1803ed01f: mov qword ptr [rsp], rdi */
L_1803ed01f_0:;
L_1803ed01f_1:;
wr(s->u,73,8,rd(s->r,56,8));
L_1803ed01f_2:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,73,8));
L_1803ed01f_3:;
/* 1803ed023: inc rax */
L_1803ed023_0:;
L_1803ed023_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803ed023_2:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803ed023_3:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed023_4:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ed023_5:;
wr(s->u,81,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ed023_6:;
wr(s->u,89,1,pop(rd(s->u,81,8),8));
L_1803ed023_7:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803ed023_8:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803ed023_9:;
/* 1803ed026: lea rdi, [rdx + 0xc] */
L_1803ed026_0:;
L_1803ed026_1:;
wr(s->u,5,8,(rd(s->r,16,8)+((U)UINT64_C(0xc))));
L_1803ed026_2:;
wr(s->r,56,8,rd(s->u,5,8));
L_1803ed026_3:;
/* 1803ed02a: lea rbx, [r8 + 4] */
L_1803ed02a_0:;
L_1803ed02a_1:;
wr(s->u,5,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803ed02a_2:;
wr(s->r,24,8,rd(s->u,5,8));
L_1803ed02a_3:;
/* 1803ed02e: lea r11, [rax*4] */
L_1803ed02e_0:;
L_1803ed02e_1:;
wr(s->u,13,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803ed02e_2:;
wr(s->r,152,8,rd(s->u,13,8));
L_1803ed02e_3:;
/* 1803ed036: nop word ptr [rax + rax] */
L_1803ed036_0:;
L_1803ed036_1:;
wr(s->u,53,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ed036_2:;
wr(s->u,61,8,(rd(s->r,0,8)+rd(s->u,53,8)));
L_1803ed036_3:;
/* 1803ed040: movss xmm1, dword ptr [rdi - 0xc] */
L_1803ed040_0:;
L_1803ed040_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803ed040_2:;
wr(s->u,69,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed040_3:;
wr(s->r,4672,4,rd(s->u,69,4));
L_1803ed040_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ed040_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ed040_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ed040_7:;
/* 1803ed045: movss xmm0, dword ptr [rcx + 0xc] */
L_1803ed045_0:;
L_1803ed045_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed045_2:;
wr(s->u,69,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed045_3:;
wr(s->r,4608,4,rd(s->u,69,4));
L_1803ed045_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed045_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed045_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed045_7:;
/* 1803ed04a: add rbx, 0x10 */
L_1803ed04a_0:;
L_1803ed04a_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803ed04a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x10)),8,0));
L_1803ed04a_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803ed04a_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed04a_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803ed04a_6:;
wr(s->u,81,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803ed04a_7:;
wr(s->u,89,1,pop(rd(s->u,81,8),8));
L_1803ed04a_8:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803ed04a_9:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803ed04a_10:;
/* 1803ed04e: add rdi, 0x10 */
L_1803ed04e_0:;
L_1803ed04e_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803ed04e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x10)),8,0));
L_1803ed04e_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ed04e_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed04e_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803ed04e_6:;
wr(s->u,81,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803ed04e_7:;
wr(s->u,89,1,pop(rd(s->u,81,8),8));
L_1803ed04e_8:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803ed04e_9:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803ed04e_10:;
/* 1803ed052: sub rax, 1 */
L_1803ed052_0:;
L_1803ed052_1:;
wr(s->r,512,1,(rd(s->r,0,8)<((U)UINT64_C(0x1))));
L_1803ed052_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,1));
L_1803ed052_3:;
wr(s->r,0,8,(rd(s->r,0,8)-((U)UINT64_C(0x1))));
L_1803ed052_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed052_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ed052_6:;
wr(s->u,81,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ed052_7:;
wr(s->u,89,1,pop(rd(s->u,81,8),8));
L_1803ed052_8:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803ed052_9:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803ed052_10:;
/* 1803ed056: mulss xmm0, dword ptr [rcx + 8] */
L_1803ed056_0:;
L_1803ed056_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed056_2:;
wr(s->u,69,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed056_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,69,4),4),4));
L_1803ed056_4:;
/* 1803ed05b: mulss xmm1, dword ptr [rcx + 0x10] */
L_1803ed05b_0:;
L_1803ed05b_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed05b_2:;
wr(s->u,69,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed05b_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,69,4),4),4));
L_1803ed05b_4:;
/* 1803ed060: addss xmm1, xmm0 */
L_1803ed060_0:;
L_1803ed060_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed060_2:;
/* 1803ed064: addss xmm1, xmm3 */
L_1803ed064_0:;
L_1803ed064_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ed064_2:;
/* 1803ed068: movss dword ptr [rcx + 8], xmm1 */
L_1803ed068_0:;
L_1803ed068_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed068_2:;
wr(s->u,69,4,rd(s->r,4672,4));
L_1803ed068_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,69,4));
L_1803ed068_4:;
/* 1803ed06d: movss dword ptr [rbx - 0x14], xmm1 */
L_1803ed06d_0:;
L_1803ed06d_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803ed06d_2:;
wr(s->u,69,4,rd(s->r,4672,4));
L_1803ed06d_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,69,4));
L_1803ed06d_4:;
/* 1803ed072: movss xmm2, dword ptr [r9 + rbx - 0x10] */
L_1803ed072_0:;
L_1803ed072_1:;
wr(s->u,29,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,136,8)));
L_1803ed072_2:;
wr(s->u,37,8,(rd(s->r,24,8)*((U)UINT64_C(0x1))));
L_1803ed072_3:;
wr(s->u,45,8,(rd(s->u,29,8)+rd(s->u,37,8)));
L_1803ed072_4:;
wr(s->u,69,4,mr((uint64_t)rd(s->u,45,8),4));
L_1803ed072_5:;
wr(s->r,4736,4,rd(s->u,69,4));
L_1803ed072_6:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ed072_7:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ed072_8:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ed072_9:;
/* 1803ed079: mulss xmm2, dword ptr [rcx + 0x10] */
L_1803ed079_0:;
L_1803ed079_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed079_2:;
wr(s->u,69,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed079_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,69,4),4),4));
L_1803ed079_4:;
/* 1803ed07e: movss xmm0, dword ptr [rcx + 0xc] */
L_1803ed07e_0:;
L_1803ed07e_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed07e_2:;
wr(s->u,69,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed07e_3:;
wr(s->r,4608,4,rd(s->u,69,4));
L_1803ed07e_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed07e_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed07e_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed07e_7:;
/* 1803ed083: mulss xmm0, dword ptr [rcx + 8] */
L_1803ed083_0:;
L_1803ed083_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed083_2:;
wr(s->u,69,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed083_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,69,4),4),4));
L_1803ed083_4:;
/* 1803ed088: addss xmm2, xmm0 */
L_1803ed088_0:;
L_1803ed088_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed088_2:;
/* 1803ed08c: addss xmm2, xmm3 */
L_1803ed08c_0:;
L_1803ed08c_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ed08c_2:;
/* 1803ed090: movss dword ptr [rcx + 8], xmm2 */
L_1803ed090_0:;
L_1803ed090_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed090_2:;
wr(s->u,69,4,rd(s->r,4736,4));
L_1803ed090_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,69,4));
L_1803ed090_4:;
/* 1803ed095: movss dword ptr [rbx - 0x10], xmm2 */
L_1803ed095_0:;
L_1803ed095_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803ed095_2:;
wr(s->u,69,4,rd(s->r,4736,4));
L_1803ed095_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,69,4));
L_1803ed095_4:;
/* 1803ed09a: movss xmm1, dword ptr [rdi - 0x14] */
L_1803ed09a_0:;
L_1803ed09a_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803ed09a_2:;
wr(s->u,69,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed09a_3:;
wr(s->r,4672,4,rd(s->u,69,4));
L_1803ed09a_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ed09a_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ed09a_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ed09a_7:;
/* 1803ed09f: mulss xmm1, dword ptr [rcx + 0x10] */
L_1803ed09f_0:;
L_1803ed09f_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed09f_2:;
wr(s->u,69,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed09f_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,69,4),4),4));
L_1803ed09f_4:;
return UINT64_C(0x1803ed0a4);
}
uint64_t b_1803ed040(CPU*s){
/* 1803ed040: movss xmm1, dword ptr [rdi - 0xc] */
L_1803ed040_0:;
L_1803ed040_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803ed040_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed040_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ed040_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ed040_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ed040_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ed040_7:;
/* 1803ed045: movss xmm0, dword ptr [rcx + 0xc] */
L_1803ed045_0:;
L_1803ed045_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed045_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed045_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ed045_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed045_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed045_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed045_7:;
/* 1803ed04a: add rbx, 0x10 */
L_1803ed04a_0:;
L_1803ed04a_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803ed04a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x10)),8,0));
L_1803ed04a_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803ed04a_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed04a_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803ed04a_6:;
wr(s->u,36,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803ed04a_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ed04a_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ed04a_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ed04a_10:;
/* 1803ed04e: add rdi, 0x10 */
L_1803ed04e_0:;
L_1803ed04e_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803ed04e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x10)),8,0));
L_1803ed04e_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ed04e_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed04e_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803ed04e_6:;
wr(s->u,36,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803ed04e_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ed04e_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ed04e_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ed04e_10:;
/* 1803ed052: sub rax, 1 */
L_1803ed052_0:;
L_1803ed052_1:;
wr(s->r,512,1,(rd(s->r,0,8)<((U)UINT64_C(0x1))));
L_1803ed052_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,1));
L_1803ed052_3:;
wr(s->r,0,8,(rd(s->r,0,8)-((U)UINT64_C(0x1))));
L_1803ed052_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed052_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ed052_6:;
wr(s->u,36,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ed052_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ed052_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ed052_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ed052_10:;
/* 1803ed056: mulss xmm0, dword ptr [rcx + 8] */
L_1803ed056_0:;
L_1803ed056_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed056_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed056_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ed056_4:;
/* 1803ed05b: mulss xmm1, dword ptr [rcx + 0x10] */
L_1803ed05b_0:;
L_1803ed05b_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed05b_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed05b_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ed05b_4:;
/* 1803ed060: addss xmm1, xmm0 */
L_1803ed060_0:;
L_1803ed060_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed060_2:;
/* 1803ed064: addss xmm1, xmm3 */
L_1803ed064_0:;
L_1803ed064_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ed064_2:;
/* 1803ed068: movss dword ptr [rcx + 8], xmm1 */
L_1803ed068_0:;
L_1803ed068_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed068_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803ed068_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ed068_4:;
/* 1803ed06d: movss dword ptr [rbx - 0x14], xmm1 */
L_1803ed06d_0:;
L_1803ed06d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803ed06d_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803ed06d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ed06d_4:;
/* 1803ed072: movss xmm2, dword ptr [r9 + rbx - 0x10] */
L_1803ed072_0:;
L_1803ed072_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,136,8)));
L_1803ed072_2:;
wr(s->u,16,8,(rd(s->r,24,8)*((U)UINT64_C(0x1))));
L_1803ed072_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ed072_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ed072_5:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ed072_6:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ed072_7:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ed072_8:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ed072_9:;
/* 1803ed079: mulss xmm2, dword ptr [rcx + 0x10] */
L_1803ed079_0:;
L_1803ed079_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed079_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed079_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ed079_4:;
/* 1803ed07e: movss xmm0, dword ptr [rcx + 0xc] */
L_1803ed07e_0:;
L_1803ed07e_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed07e_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed07e_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ed07e_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed07e_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed07e_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed07e_7:;
/* 1803ed083: mulss xmm0, dword ptr [rcx + 8] */
L_1803ed083_0:;
L_1803ed083_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed083_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed083_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ed083_4:;
/* 1803ed088: addss xmm2, xmm0 */
L_1803ed088_0:;
L_1803ed088_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed088_2:;
/* 1803ed08c: addss xmm2, xmm3 */
L_1803ed08c_0:;
L_1803ed08c_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ed08c_2:;
/* 1803ed090: movss dword ptr [rcx + 8], xmm2 */
L_1803ed090_0:;
L_1803ed090_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed090_2:;
wr(s->u,32,4,rd(s->r,4736,4));
L_1803ed090_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ed090_4:;
/* 1803ed095: movss dword ptr [rbx - 0x10], xmm2 */
L_1803ed095_0:;
L_1803ed095_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803ed095_2:;
wr(s->u,32,4,rd(s->r,4736,4));
L_1803ed095_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ed095_4:;
/* 1803ed09a: movss xmm1, dword ptr [rdi - 0x14] */
L_1803ed09a_0:;
L_1803ed09a_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803ed09a_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed09a_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ed09a_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ed09a_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ed09a_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ed09a_7:;
/* 1803ed09f: mulss xmm1, dword ptr [rcx + 0x10] */
L_1803ed09f_0:;
L_1803ed09f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed09f_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed09f_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ed09f_4:;
/* 1803ed0a4: movss xmm0, dword ptr [rcx + 0xc] */
L_1803ed0a4_0:;
L_1803ed0a4_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed0a4_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed0a4_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ed0a4_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed0a4_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed0a4_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed0a4_7:;
/* 1803ed0a9: mulss xmm0, dword ptr [rcx + 8] */
L_1803ed0a9_0:;
L_1803ed0a9_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed0a9_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed0a9_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ed0a9_4:;
/* 1803ed0ae: addss xmm1, xmm0 */
L_1803ed0ae_0:;
L_1803ed0ae_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed0ae_2:;
/* 1803ed0b2: addss xmm1, xmm3 */
L_1803ed0b2_0:;
L_1803ed0b2_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ed0b2_2:;
/* 1803ed0b6: movss dword ptr [rcx + 8], xmm1 */
L_1803ed0b6_0:;
L_1803ed0b6_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed0b6_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803ed0b6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ed0b6_4:;
/* 1803ed0bb: movss dword ptr [rbx - 0xc], xmm1 */
L_1803ed0bb_0:;
L_1803ed0bb_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803ed0bb_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803ed0bb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ed0bb_4:;
/* 1803ed0c0: movss xmm2, dword ptr [rcx + 0xc] */
L_1803ed0c0_0:;
L_1803ed0c0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed0c0_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed0c0_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ed0c0_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ed0c0_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ed0c0_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ed0c0_7:;
/* 1803ed0c5: mulss xmm2, dword ptr [rcx + 8] */
L_1803ed0c5_0:;
L_1803ed0c5_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed0c5_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed0c5_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ed0c5_4:;
/* 1803ed0ca: movss xmm0, dword ptr [rcx + 0x10] */
L_1803ed0ca_0:;
L_1803ed0ca_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed0ca_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed0ca_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ed0ca_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed0ca_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed0ca_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed0ca_7:;
/* 1803ed0cf: mulss xmm0, dword ptr [rdi - 0x10] */
L_1803ed0cf_0:;
L_1803ed0cf_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803ed0cf_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed0cf_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ed0cf_4:;
/* 1803ed0d4: addss xmm2, xmm0 */
L_1803ed0d4_0:;
L_1803ed0d4_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed0d4_2:;
return UINT64_C(0x1803ed0d8);
}
uint64_t b_1803ed0a4(CPU*s){
/* 1803ed0a4: movss xmm0, dword ptr [rcx + 0xc] */
L_1803ed0a4_0:;
L_1803ed0a4_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed0a4_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed0a4_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803ed0a4_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed0a4_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed0a4_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed0a4_7:;
/* 1803ed0a9: mulss xmm0, dword ptr [rcx + 8] */
L_1803ed0a9_0:;
L_1803ed0a9_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed0a9_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed0a9_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,8,4),4),4));
L_1803ed0a9_4:;
/* 1803ed0ae: addss xmm1, xmm0 */
L_1803ed0ae_0:;
L_1803ed0ae_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed0ae_2:;
/* 1803ed0b2: addss xmm1, xmm3 */
L_1803ed0b2_0:;
L_1803ed0b2_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ed0b2_2:;
/* 1803ed0b6: movss dword ptr [rcx + 8], xmm1 */
L_1803ed0b6_0:;
L_1803ed0b6_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed0b6_2:;
wr(s->u,8,4,rd(s->r,4672,4));
L_1803ed0b6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ed0b6_4:;
/* 1803ed0bb: movss dword ptr [rbx - 0xc], xmm1 */
L_1803ed0bb_0:;
L_1803ed0bb_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803ed0bb_2:;
wr(s->u,8,4,rd(s->r,4672,4));
L_1803ed0bb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ed0bb_4:;
/* 1803ed0c0: movss xmm2, dword ptr [rcx + 0xc] */
L_1803ed0c0_0:;
L_1803ed0c0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed0c0_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed0c0_3:;
wr(s->r,4736,4,rd(s->u,8,4));
L_1803ed0c0_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ed0c0_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ed0c0_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ed0c0_7:;
/* 1803ed0c5: mulss xmm2, dword ptr [rcx + 8] */
L_1803ed0c5_0:;
L_1803ed0c5_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed0c5_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed0c5_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,8,4),4),4));
L_1803ed0c5_4:;
/* 1803ed0ca: movss xmm0, dword ptr [rcx + 0x10] */
L_1803ed0ca_0:;
L_1803ed0ca_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed0ca_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed0ca_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803ed0ca_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed0ca_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed0ca_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed0ca_7:;
/* 1803ed0cf: mulss xmm0, dword ptr [rdi - 0x10] */
L_1803ed0cf_0:;
L_1803ed0cf_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803ed0cf_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed0cf_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,8,4),4),4));
L_1803ed0cf_4:;
/* 1803ed0d4: addss xmm2, xmm0 */
L_1803ed0d4_0:;
L_1803ed0d4_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed0d4_2:;
/* 1803ed0d8: addss xmm2, xmm3 */
L_1803ed0d8_0:;
L_1803ed0d8_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ed0d8_2:;
/* 1803ed0dc: movss dword ptr [rcx + 8], xmm2 */
L_1803ed0dc_0:;
L_1803ed0dc_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed0dc_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803ed0dc_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ed0dc_4:;
/* 1803ed0e1: movss dword ptr [rbx - 8], xmm2 */
L_1803ed0e1_0:;
L_1803ed0e1_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803ed0e1_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803ed0e1_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ed0e1_4:;
/* 1803ed0e6: jne 0x1803ed040 */
L_1803ed0e6_0:;
L_1803ed0e6_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803ed0e6_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803ed040);}
L_1803ed0e6_3:;
return UINT64_C(0x1803ed0ec);
}
uint64_t b_1803ed0d8(CPU*s){
/* 1803ed0d8: addss xmm2, xmm3 */
L_1803ed0d8_0:;
L_1803ed0d8_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ed0d8_2:;
/* 1803ed0dc: movss dword ptr [rcx + 8], xmm2 */
L_1803ed0dc_0:;
L_1803ed0dc_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed0dc_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803ed0dc_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ed0dc_4:;
/* 1803ed0e1: movss dword ptr [rbx - 8], xmm2 */
L_1803ed0e1_0:;
L_1803ed0e1_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803ed0e1_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803ed0e1_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ed0e1_4:;
/* 1803ed0e6: jne 0x1803ed040 */
L_1803ed0e6_0:;
L_1803ed0e6_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803ed0e6_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803ed040);}
L_1803ed0e6_3:;
return UINT64_C(0x1803ed0ec);
}
uint64_t b_1803ed0ec(CPU*s){
/* 1803ed0ec: mov rdi, qword ptr [rsp] */
L_1803ed0ec_0:;
L_1803ed0ec_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed0ec_2:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803ed0ec_3:;
/* 1803ed0f0: mov rbx, qword ptr [rsp + 0x10] */
L_1803ed0f0_0:;
L_1803ed0f0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ed0f0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed0f0_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ed0f0_4:;
/* 1803ed0f5: cmp r11, r10 */
L_1803ed0f5_0:;
L_1803ed0f5_1:;
wr(s->u,27,8,rd(s->r,144,8));
L_1803ed0f5_2:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->u,27,8)));
L_1803ed0f5_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->u,27,8),8,1));
L_1803ed0f5_4:;
wr(s->u,35,8,(rd(s->r,152,8)-rd(s->u,27,8)));
L_1803ed0f5_5:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed0f5_6:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1803ed0f5_7:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1803ed0f5_8:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803ed0f5_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803ed0f5_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ed0f5_11:;
/* 1803ed0f8: jge 0x1803ed134 */
L_1803ed0f8_0:;
L_1803ed0f8_1:;
wr(s->u,16,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803ed0f8_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803ed134);}
L_1803ed0f8_3:;
return UINT64_C(0x1803ed0fa);
}
uint64_t b_1803ed0f5(CPU*s){
/* 1803ed0f5: cmp r11, r10 */
L_1803ed0f5_0:;
L_1803ed0f5_1:;
wr(s->u,11,8,rd(s->r,144,8));
L_1803ed0f5_2:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->u,11,8)));
L_1803ed0f5_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->u,11,8),8,1));
L_1803ed0f5_4:;
wr(s->u,19,8,(rd(s->r,152,8)-rd(s->u,11,8)));
L_1803ed0f5_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed0f5_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803ed0f5_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803ed0f5_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803ed0f5_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ed0f5_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ed0f5_11:;
/* 1803ed0f8: jge 0x1803ed134 */
L_1803ed0f8_0:;
L_1803ed0f8_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803ed0f8_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ed134);}
L_1803ed0f8_3:;
return UINT64_C(0x1803ed0fa);
}
uint64_t b_1803ed0fa(CPU*s){
/* 1803ed0fa: sub rdx, r8 */
L_1803ed0fa_0:;
L_1803ed0fa_1:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->r,128,8)));
L_1803ed0fa_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->r,128,8),8,1));
L_1803ed0fa_3:;
wr(s->r,16,8,(rd(s->r,16,8)-rd(s->r,128,8)));
L_1803ed0fa_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed0fa_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803ed0fa_6:;
wr(s->u,29,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803ed0fa_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803ed0fa_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ed0fa_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ed0fa_10:;
/* 1803ed0fd: lea rax, [r8 + r11*4] */
L_1803ed0fd_0:;
L_1803ed0fd_1:;
wr(s->u,8,8,(rd(s->r,152,8)*((U)UINT64_C(0x4))));
L_1803ed0fd_2:;
wr(s->u,16,8,(rd(s->r,128,8)+rd(s->u,8,8)));
L_1803ed0fd_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803ed0fd_4:;
/* 1803ed101: sub r10, r11 */
L_1803ed101_0:;
L_1803ed101_1:;
wr(s->r,512,1,(rd(s->r,144,8)<rd(s->r,152,8)));
L_1803ed101_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->r,152,8),8,1));
L_1803ed101_3:;
wr(s->r,144,8,(rd(s->r,144,8)-rd(s->r,152,8)));
L_1803ed101_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed101_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803ed101_6:;
wr(s->u,29,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803ed101_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803ed101_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ed101_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ed101_10:;
/* 1803ed104: movss xmm1, dword ptr [rax + rdx] */
L_1803ed104_0:;
L_1803ed104_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803ed104_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803ed104_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803ed104_4:;
wr(s->r,4672,4,rd(s->u,24,4));
L_1803ed104_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ed104_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ed104_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ed104_8:;
/* 1803ed109: movss xmm0, dword ptr [rcx + 0xc] */
L_1803ed109_0:;
L_1803ed109_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed109_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed109_3:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803ed109_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed109_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed109_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed109_7:;
/* 1803ed10e: add rax, 4 */
L_1803ed10e_0:;
L_1803ed10e_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803ed10e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x4)),8,0));
L_1803ed10e_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x4))));
L_1803ed10e_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed10e_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ed10e_6:;
wr(s->u,29,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ed10e_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803ed10e_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ed10e_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ed10e_10:;
/* 1803ed112: sub r10, 1 */
L_1803ed112_0:;
L_1803ed112_1:;
wr(s->r,512,1,(rd(s->r,144,8)<((U)UINT64_C(0x1))));
L_1803ed112_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x1)),8,1));
L_1803ed112_3:;
wr(s->r,144,8,(rd(s->r,144,8)-((U)UINT64_C(0x1))));
L_1803ed112_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed112_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803ed112_6:;
wr(s->u,29,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803ed112_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803ed112_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ed112_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ed112_10:;
/* 1803ed116: mulss xmm1, dword ptr [rcx + 0x10] */
L_1803ed116_0:;
L_1803ed116_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed116_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed116_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,24,4),4),4));
L_1803ed116_4:;
/* 1803ed11b: mulss xmm0, dword ptr [rcx + 8] */
L_1803ed11b_0:;
L_1803ed11b_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed11b_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed11b_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,24,4),4),4));
L_1803ed11b_4:;
/* 1803ed120: addss xmm1, xmm0 */
L_1803ed120_0:;
L_1803ed120_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed120_2:;
/* 1803ed124: addss xmm1, xmm3 */
L_1803ed124_0:;
L_1803ed124_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ed124_2:;
/* 1803ed128: movss dword ptr [rcx + 8], xmm1 */
L_1803ed128_0:;
L_1803ed128_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed128_2:;
wr(s->u,24,4,rd(s->r,4672,4));
L_1803ed128_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803ed128_4:;
/* 1803ed12d: movss dword ptr [rax - 4], xmm1 */
L_1803ed12d_0:;
L_1803ed12d_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803ed12d_2:;
wr(s->u,24,4,rd(s->r,4672,4));
L_1803ed12d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803ed12d_4:;
/* 1803ed132: jne 0x1803ed104 */
L_1803ed132_0:;
L_1803ed132_1:;
wr(s->u,28,1,(!rd(s->r,518,1)));
L_1803ed132_2:;
if(rd(s->u,28,1)){goto L_1803ed104_0;}
L_1803ed132_3:;
return UINT64_C(0x1803ed134);
}
uint64_t b_1803ed104(CPU*s){
/* 1803ed104: movss xmm1, dword ptr [rax + rdx] */
L_1803ed104_0:;
L_1803ed104_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803ed104_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803ed104_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803ed104_4:;
wr(s->r,4672,4,rd(s->u,24,4));
L_1803ed104_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ed104_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ed104_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ed104_8:;
/* 1803ed109: movss xmm0, dword ptr [rcx + 0xc] */
L_1803ed109_0:;
L_1803ed109_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed109_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed109_3:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803ed109_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed109_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed109_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed109_7:;
/* 1803ed10e: add rax, 4 */
L_1803ed10e_0:;
L_1803ed10e_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803ed10e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x4)),8,0));
L_1803ed10e_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x4))));
L_1803ed10e_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed10e_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ed10e_6:;
wr(s->u,29,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ed10e_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803ed10e_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ed10e_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ed10e_10:;
/* 1803ed112: sub r10, 1 */
L_1803ed112_0:;
L_1803ed112_1:;
wr(s->r,512,1,(rd(s->r,144,8)<((U)UINT64_C(0x1))));
L_1803ed112_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x1)),8,1));
L_1803ed112_3:;
wr(s->r,144,8,(rd(s->r,144,8)-((U)UINT64_C(0x1))));
L_1803ed112_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed112_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803ed112_6:;
wr(s->u,29,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803ed112_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803ed112_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ed112_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ed112_10:;
/* 1803ed116: mulss xmm1, dword ptr [rcx + 0x10] */
L_1803ed116_0:;
L_1803ed116_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed116_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed116_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,24,4),4),4));
L_1803ed116_4:;
/* 1803ed11b: mulss xmm0, dword ptr [rcx + 8] */
L_1803ed11b_0:;
L_1803ed11b_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed11b_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed11b_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,24,4),4),4));
L_1803ed11b_4:;
/* 1803ed120: addss xmm1, xmm0 */
L_1803ed120_0:;
L_1803ed120_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed120_2:;
/* 1803ed124: addss xmm1, xmm3 */
L_1803ed124_0:;
L_1803ed124_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ed124_2:;
/* 1803ed128: movss dword ptr [rcx + 8], xmm1 */
L_1803ed128_0:;
L_1803ed128_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed128_2:;
wr(s->u,24,4,rd(s->r,4672,4));
L_1803ed128_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803ed128_4:;
/* 1803ed12d: movss dword ptr [rax - 4], xmm1 */
L_1803ed12d_0:;
L_1803ed12d_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803ed12d_2:;
wr(s->u,24,4,rd(s->r,4672,4));
L_1803ed12d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803ed12d_4:;
/* 1803ed132: jne 0x1803ed104 */
L_1803ed132_0:;
L_1803ed132_1:;
wr(s->u,28,1,(!rd(s->r,518,1)));
L_1803ed132_2:;
if(rd(s->u,28,1)){goto L_1803ed104_0;}
L_1803ed132_3:;
return UINT64_C(0x1803ed134);
}
uint64_t b_1803ed134(CPU*s){
/* 1803ed134: xor eax, eax */
L_1803ed134_0:;
L_1803ed134_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed134_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed134_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ed134_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed134_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed134_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ed134_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ed134_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803ed134_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ed134_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ed134_11:;
/* 1803ed136: add rsp, 8 */
L_1803ed136_0:;
L_1803ed136_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ed136_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x8)),8,0));
L_1803ed136_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed136_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed136_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed136_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed136_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ed136_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ed136_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ed136_10:;
/* 1803ed13a: ret  */
L_1803ed13a_0:;
L_1803ed13a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed13a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed13a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ed13a_4:;
return UINT64_C(0x1803ed13b);
}
uint64_t b_1803ed140(CPU*s){
/* 1803ed140: push rbx */
L_1803ed140_0:;
L_1803ed140_1:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803ed140_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed140_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,8,8));
L_1803ed140_4:;
/* 1803ed142: sub rsp, 0x20 */
L_1803ed142_0:;
L_1803ed142_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803ed142_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803ed142_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803ed142_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed142_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed142_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed142_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ed142_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ed142_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ed142_10:;
/* 1803ed146: lea rax, [rip + 0x42019b] */
L_1803ed146_0:;
L_1803ed146_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080d2e8)));
L_1803ed146_2:;
/* 1803ed14d: mov rbx, rcx */
L_1803ed14d_0:;
L_1803ed14d_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ed14d_2:;
/* 1803ed150: mov qword ptr [rcx], rax */
L_1803ed150_0:;
L_1803ed150_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803ed150_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,0,8));
L_1803ed150_3:;
/* 1803ed153: test dl, 1 */
L_1803ed153_0:;
L_1803ed153_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed153_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed153_3:;
wr(s->u,26,1,(rd(s->r,16,1)&((U)UINT64_C(0x1))));
L_1803ed153_4:;
wr(s->r,519,1,(sx(rd(s->u,26,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803ed153_5:;
wr(s->r,518,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ed153_6:;
wr(s->u,16,1,(rd(s->u,26,1)&((U)UINT64_C(0xff))));
L_1803ed153_7:;
wr(s->u,24,1,pop(rd(s->u,16,1),1));
L_1803ed153_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ed153_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ed153_10:;
/* 1803ed156: je 0x1803ed15d */
L_1803ed156_0:;
L_1803ed156_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ed15d);}
L_1803ed156_2:;
return UINT64_C(0x1803ed158);
}
uint64_t b_1803ed158(CPU*s){
/* 1803ed158: call 0x180003160 */
L_1803ed158_0:;
L_1803ed158_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed158_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed15d)));
L_1803ed158_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803ed158_4:;
return UINT64_C(0x1803ed15d);
}
uint64_t b_1803ed15d(CPU*s){
/* 1803ed15d: mov rax, rbx */
L_1803ed15d_0:;
L_1803ed15d_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803ed15d_2:;
/* 1803ed160: add rsp, 0x20 */
L_1803ed160_0:;
L_1803ed160_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ed160_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803ed160_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803ed160_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed160_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed160_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed160_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ed160_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ed160_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ed160_10:;
/* 1803ed164: pop rbx */
L_1803ed164_0:;
L_1803ed164_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803ed164_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed164_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed164_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803ed164_5:;
/* 1803ed165: ret  */
L_1803ed165_0:;
L_1803ed165_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed165_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed165_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ed165_4:;
return UINT64_C(0x1803ed166);
}
uint64_t b_1803ed1c0(CPU*s){
/* 1803ed1c0: push rbx */
L_1803ed1c0_0:;
L_1803ed1c0_1:;
wr(s->u,24,8,rd(s->r,24,8));
L_1803ed1c0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed1c0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803ed1c0_4:;
/* 1803ed1c2: sub rsp, 0x30 */
L_1803ed1c2_0:;
L_1803ed1c2_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803ed1c2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803ed1c2_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803ed1c2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed1c2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed1c2_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed1c2_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803ed1c2_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ed1c2_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ed1c2_10:;
/* 1803ed1c6: mov rbx, rcx */
L_1803ed1c6_0:;
L_1803ed1c6_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ed1c6_2:;
/* 1803ed1c9: mov ecx, 0x18 */
L_1803ed1c9_0:;
L_1803ed1c9_1:;
wr(s->r,8,8,((U)UINT64_C(0x18)));
L_1803ed1c9_2:;
/* 1803ed1ce: movaps xmmword ptr [rsp + 0x20], xmm6 */
L_1803ed1ce_0:;
L_1803ed1ce_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ed1ce_2:;
wr(s->u,8,16,rd(s->r,4992,16));
L_1803ed1ce_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,8,16));
L_1803ed1ce_4:;
/* 1803ed1d3: movaps xmm6, xmm1 */
L_1803ed1d3_0:;
L_1803ed1d3_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803ed1d3_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803ed1d3_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803ed1d3_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803ed1d3_5:;
/* 1803ed1d6: call 0x180003140 */
L_1803ed1d6_0:;
L_1803ed1d6_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed1d6_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed1db)));
L_1803ed1d6_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ed1d6_4:;
return UINT64_C(0x1803ed1db);
}
uint64_t b_1803ed1db(CPU*s){
/* 1803ed1db: test rax, rax */
L_1803ed1db_0:;
L_1803ed1db_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed1db_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed1db_3:;
wr(s->u,10,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803ed1db_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed1db_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803ed1db_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803ed1db_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ed1db_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ed1db_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ed1db_10:;
/* 1803ed1de: je 0x1803ed21e */
L_1803ed1de_0:;
L_1803ed1de_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ed21e);}
L_1803ed1de_2:;
return UINT64_C(0x1803ed1e0);
}
uint64_t b_1803ed1e0(CPU*s){
/* 1803ed1e0: movss xmm0, dword ptr [rip + 0x25fa5c] */
L_1803ed1e0_0:;
L_1803ed1e0_1:;
wr(s->r,4608,4,mr(UINT64_C(0x18064cc44),4));
L_1803ed1e0_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed1e0_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed1e0_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed1e0_5:;
/* 1803ed1e8: movss dword ptr [rax + 0xc], xmm6 */
L_1803ed1e8_0:;
L_1803ed1e8_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xc))));
L_1803ed1e8_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803ed1e8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ed1e8_4:;
/* 1803ed1ed: lea rcx, [rip + 0x420104] */
L_1803ed1ed_0:;
L_1803ed1ed_1:;
wr(s->r,8,8,((U)UINT64_C(0x18080d2f8)));
L_1803ed1ed_2:;
/* 1803ed1f4: mov qword ptr [rax], rcx */
L_1803ed1f4_0:;
L_1803ed1f4_1:;
wr(s->u,20,8,rd(s->r,8,8));
L_1803ed1f4_2:;
mw((uint64_t)rd(s->r,0,8),8,rd(s->u,20,8));
L_1803ed1f4_3:;
/* 1803ed1f7: andps xmm6, xmmword ptr [rip + 0x41f162] */
L_1803ed1f7_0:;
L_1803ed1f7_1:;
wr(s->u,62,16,mr(UINT64_C(0x18080c360),16));
L_1803ed1f7_2:;
wr(s->r,4992,4,(rd(s->r,4992,4)&rd(s->u,62,4)));
L_1803ed1f7_3:;
wr(s->r,4996,4,(rd(s->r,4996,4)&rd(s->u,66,4)));
L_1803ed1f7_4:;
wr(s->r,5000,4,(rd(s->r,5000,4)&rd(s->u,70,4)));
L_1803ed1f7_5:;
wr(s->r,5004,4,(rd(s->r,5004,4)&rd(s->u,74,4)));
L_1803ed1f7_6:;
/* 1803ed1fe: mov dword ptr [rax + 8], 0 */
L_1803ed1fe_0:;
L_1803ed1fe_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803ed1fe_2:;
wr(s->u,16,4,((U)UINT64_C(0x0)));
L_1803ed1fe_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ed1fe_4:;
/* 1803ed205: subss xmm0, xmm6 */
L_1803ed205_0:;
L_1803ed205_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803ed205_2:;
/* 1803ed209: movss dword ptr [rax + 0x10], xmm0 */
L_1803ed209_0:;
L_1803ed209_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803ed209_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ed209_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ed209_4:;
/* 1803ed20e: mov qword ptr [rbx], rax */
L_1803ed20e_0:;
L_1803ed20e_1:;
wr(s->u,20,8,rd(s->r,0,8));
L_1803ed20e_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,20,8));
L_1803ed20e_3:;
/* 1803ed211: xor eax, eax */
L_1803ed211_0:;
L_1803ed211_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed211_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed211_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ed211_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed211_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed211_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ed211_7:;
wr(s->u,44,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ed211_8:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803ed211_9:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ed211_10:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ed211_11:;
/* 1803ed213: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803ed213_0:;
L_1803ed213_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ed213_2:;
wr(s->u,28,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803ed213_3:;
wr(s->u,78,16,rd(s->u,28,16));
L_1803ed213_4:;
wr(s->r,4992,4,rd(s->u,78,4));
L_1803ed213_5:;
wr(s->r,4996,4,rd(s->u,82,4));
L_1803ed213_6:;
wr(s->r,5000,4,rd(s->u,86,4));
L_1803ed213_7:;
wr(s->r,5004,4,rd(s->u,90,4));
L_1803ed213_8:;
/* 1803ed218: add rsp, 0x30 */
L_1803ed218_0:;
L_1803ed218_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ed218_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803ed218_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803ed218_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed218_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed218_6:;
wr(s->u,44,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed218_7:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803ed218_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ed218_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ed218_10:;
/* 1803ed21c: pop rbx */
L_1803ed21c_0:;
L_1803ed21c_1:;
wr(s->u,54,8,((U)UINT64_C(0x0)));
L_1803ed21c_2:;
wr(s->u,54,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed21c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed21c_4:;
wr(s->r,24,8,rd(s->u,54,8));
L_1803ed21c_5:;
/* 1803ed21d: ret  */
L_1803ed21d_0:;
L_1803ed21d_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed21d_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed21d_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ed21d_4:;
return UINT64_C(0x1803ed21e);
}
uint64_t b_1803ed21e(CPU*s){
/* 1803ed21e: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803ed21e_0:;
L_1803ed21e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ed21e_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803ed21e_3:;
wr(s->u,50,16,rd(s->u,16,16));
L_1803ed21e_4:;
wr(s->r,4992,4,rd(s->u,50,4));
L_1803ed21e_5:;
wr(s->r,4996,4,rd(s->u,54,4));
L_1803ed21e_6:;
wr(s->r,5000,4,rd(s->u,58,4));
L_1803ed21e_7:;
wr(s->r,5004,4,rd(s->u,62,4));
L_1803ed21e_8:;
/* 1803ed223: mov qword ptr [rbx], 0 */
L_1803ed223_0:;
L_1803ed223_1:;
wr(s->u,8,8,((U)UINT64_C(0x0)));
L_1803ed223_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,8,8));
L_1803ed223_3:;
/* 1803ed22a: xor eax, eax */
L_1803ed22a_0:;
L_1803ed22a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed22a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed22a_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ed22a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed22a_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed22a_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ed22a_7:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ed22a_8:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803ed22a_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ed22a_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ed22a_11:;
/* 1803ed22c: add rsp, 0x30 */
L_1803ed22c_0:;
L_1803ed22c_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ed22c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803ed22c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803ed22c_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed22c_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed22c_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed22c_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803ed22c_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ed22c_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ed22c_10:;
/* 1803ed230: pop rbx */
L_1803ed230_0:;
L_1803ed230_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803ed230_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed230_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed230_4:;
wr(s->r,24,8,rd(s->u,42,8));
L_1803ed230_5:;
/* 1803ed231: ret  */
L_1803ed231_0:;
L_1803ed231_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed231_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed231_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ed231_4:;
return UINT64_C(0x1803ed232);
}
uint64_t b_1803ed240(CPU*s){
/* 1803ed240: sub rsp, 0x28 */
L_1803ed240_0:;
L_1803ed240_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803ed240_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803ed240_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803ed240_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed240_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed240_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed240_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ed240_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ed240_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ed240_10:;
/* 1803ed244: test rcx, rcx */
L_1803ed244_0:;
L_1803ed244_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed244_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed244_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803ed244_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed244_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803ed244_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803ed244_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ed244_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ed244_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ed244_10:;
/* 1803ed247: je 0x1803ed253 */
L_1803ed247_0:;
L_1803ed247_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ed253);}
L_1803ed247_2:;
return UINT64_C(0x1803ed249);
}
uint64_t b_1803ed249(CPU*s){
/* 1803ed249: mov rax, qword ptr [rcx] */
L_1803ed249_0:;
L_1803ed249_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803ed249_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803ed249_3:;
/* 1803ed24c: mov edx, 1 */
L_1803ed24c_0:;
L_1803ed24c_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803ed24c_2:;
/* 1803ed251: call qword ptr [rax] */
L_1803ed251_0:;
L_1803ed251_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803ed251_2:;
wr(s->u,8,8,rd(s->u,0,8));
L_1803ed251_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed251_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed253)));
L_1803ed251_5:;
return (uint64_t)rd(s->u,8,8);
L_1803ed251_6:;
return UINT64_C(0x1803ed253);
}
uint64_t b_1803ed253(CPU*s){
/* 1803ed253: xor eax, eax */
L_1803ed253_0:;
L_1803ed253_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed253_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed253_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ed253_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed253_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed253_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ed253_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ed253_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803ed253_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ed253_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ed253_11:;
/* 1803ed255: add rsp, 0x28 */
L_1803ed255_0:;
L_1803ed255_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ed255_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803ed255_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803ed255_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed255_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed255_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed255_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ed255_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ed255_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ed255_10:;
/* 1803ed259: ret  */
L_1803ed259_0:;
L_1803ed259_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed259_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed259_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ed259_4:;
return UINT64_C(0x1803ed25a);
}
uint64_t b_1803ed390(CPU*s){
/* 1803ed390: sub rsp, 8 */
L_1803ed390_0:;
L_1803ed390_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x8))));
L_1803ed390_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x8)),8,1));
L_1803ed390_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed390_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed390_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed390_6:;
wr(s->u,1,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed390_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803ed390_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ed390_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ed390_10:;
/* 1803ed394: movsxd r10, r9d */
L_1803ed394_0:;
L_1803ed394_1:;
wr(s->r,144,8,(U)sx(rd(s->r,136,4),4));
L_1803ed394_2:;
/* 1803ed397: xor r11d, r11d */
L_1803ed397_0:;
L_1803ed397_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed397_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed397_3:;
wr(s->r,152,4,(rd(s->r,152,4)^rd(s->r,152,4)));
L_1803ed397_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ed397_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed397_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803ed397_7:;
wr(s->u,1,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803ed397_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803ed397_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ed397_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ed397_11:;
/* 1803ed39a: cmp r10, 4 */
L_1803ed39a_0:;
L_1803ed39a_1:;
wr(s->u,11,8,rd(s->r,144,8));
L_1803ed39a_2:;
wr(s->r,512,1,(rd(s->u,11,8)<((U)UINT64_C(0x4))));
L_1803ed39a_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,11,8),((U)UINT64_C(0x4)),8,1));
L_1803ed39a_4:;
wr(s->u,19,8,(rd(s->u,11,8)-((U)UINT64_C(0x4))));
L_1803ed39a_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed39a_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803ed39a_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803ed39a_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803ed39a_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ed39a_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ed39a_11:;
/* 1803ed39e: jl 0x1803ed481 */
L_1803ed39e_0:;
L_1803ed39e_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ed39e_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ed481);}
L_1803ed39e_3:;
return UINT64_C(0x1803ed3a4);
}
uint64_t b_1803ed3a4(CPU*s){
/* 1803ed3a4: mov qword ptr [rsp + 0x10], rbx */
L_1803ed3a4_0:;
L_1803ed3a4_1:;
wr(s->u,21,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ed3a4_2:;
wr(s->u,57,8,rd(s->r,24,8));
L_1803ed3a4_3:;
mw((uint64_t)rd(s->u,21,8),8,rd(s->u,57,8));
L_1803ed3a4_4:;
/* 1803ed3a9: lea rax, [r10 - 4] */
L_1803ed3a9_0:;
L_1803ed3a9_1:;
wr(s->u,5,8,(rd(s->r,144,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803ed3a9_2:;
wr(s->r,0,8,rd(s->u,5,8));
L_1803ed3a9_3:;
/* 1803ed3ad: mov r9, rdx */
L_1803ed3ad_0:;
L_1803ed3ad_1:;
wr(s->r,136,8,rd(s->r,16,8));
L_1803ed3ad_2:;
/* 1803ed3b0: shr rax, 2 */
L_1803ed3b0_0:;
L_1803ed3b0_1:;
wr(s->u,122,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803ed3b0_2:;
wr(s->u,126,8,rd(s->r,0,8));
L_1803ed3b0_3:;
wr(s->r,0,8,((rd(s->u,122,4)>=64)?0:(rd(s->r,0,8)>>rd(s->u,122,4))));
L_1803ed3b0_4:;
wr(s->u,98,1,(rd(s->u,122,4)==((U)UINT64_C(0x0))));
L_1803ed3b0_5:;
wr(s->u,99,4,(rd(s->u,122,4)-((U)UINT64_C(0x1))));
L_1803ed3b0_6:;
wr(s->u,103,8,((rd(s->u,99,4)>=64)?0:(rd(s->u,126,8)>>rd(s->u,99,4))));
L_1803ed3b0_7:;
wr(s->u,111,8,(rd(s->u,103,8)&((U)UINT64_C(0x1))));
L_1803ed3b0_8:;
wr(s->u,119,1,(rd(s->u,111,8)!=((U)UINT64_C(0x0))));
L_1803ed3b0_9:;
wr(s->u,0,1,rd(s->u,98,1));
L_1803ed3b0_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ed3b0_11:;
wr(s->u,2,1,(!rd(s->u,98,1)));
L_1803ed3b0_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ed3b0_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,119,1)));
L_1803ed3b0_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ed3b0_15:;
wr(s->u,120,1,(rd(s->u,122,4)==((U)UINT64_C(0x1))));
L_1803ed3b0_16:;
wr(s->u,121,1,(sx(rd(s->u,126,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed3b0_17:;
wr(s->u,0,1,rd(s->u,120,1));
L_1803ed3b0_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ed3b0_19:;
wr(s->u,2,1,(!rd(s->u,120,1)));
L_1803ed3b0_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ed3b0_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,121,1)));
L_1803ed3b0_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ed3b0_23:;
wr(s->u,75,1,(rd(s->u,122,4)!=((U)UINT64_C(0x0))));
L_1803ed3b0_24:;
wr(s->u,76,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed3b0_25:;
wr(s->u,77,1,(!rd(s->u,75,1)));
L_1803ed3b0_26:;
wr(s->u,78,1,(rd(s->u,77,1)&rd(s->r,519,1)));
L_1803ed3b0_27:;
wr(s->u,79,1,(rd(s->u,75,1)&rd(s->u,76,1)));
L_1803ed3b0_28:;
wr(s->r,519,1,(rd(s->u,78,1)|rd(s->u,79,1)));
L_1803ed3b0_29:;
wr(s->u,80,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ed3b0_30:;
wr(s->u,81,1,(!rd(s->u,75,1)));
L_1803ed3b0_31:;
wr(s->u,82,1,(rd(s->u,81,1)&rd(s->r,518,1)));
L_1803ed3b0_32:;
wr(s->u,83,1,(rd(s->u,75,1)&rd(s->u,80,1)));
L_1803ed3b0_33:;
wr(s->r,518,1,(rd(s->u,82,1)|rd(s->u,83,1)));
L_1803ed3b0_34:;
wr(s->u,84,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ed3b0_35:;
wr(s->u,92,1,pop(rd(s->u,84,8),8));
L_1803ed3b0_36:;
wr(s->u,93,1,(rd(s->u,92,1)&((U)UINT64_C(0x1))));
L_1803ed3b0_37:;
wr(s->u,94,1,(rd(s->u,93,1)==((U)UINT64_C(0x0))));
L_1803ed3b0_38:;
wr(s->u,95,1,(!rd(s->u,75,1)));
L_1803ed3b0_39:;
wr(s->u,96,1,(rd(s->u,95,1)&rd(s->r,514,1)));
L_1803ed3b0_40:;
wr(s->u,97,1,(rd(s->u,75,1)&rd(s->u,94,1)));
L_1803ed3b0_41:;
wr(s->r,514,1,(rd(s->u,96,1)|rd(s->u,97,1)));
L_1803ed3b0_42:;
/* 1803ed3b4: sub r9, r8 */
L_1803ed3b4_0:;
L_1803ed3b4_1:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->r,128,8)));
L_1803ed3b4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->r,128,8),8,1));
L_1803ed3b4_3:;
wr(s->r,136,8,(rd(s->r,136,8)-rd(s->r,128,8)));
L_1803ed3b4_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed3b4_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803ed3b4_6:;
wr(s->u,65,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803ed3b4_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803ed3b4_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ed3b4_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ed3b4_10:;
/* 1803ed3b7: mov qword ptr [rsp], rdi */
L_1803ed3b7_0:;
L_1803ed3b7_1:;
wr(s->u,57,8,rd(s->r,56,8));
L_1803ed3b7_2:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,57,8));
L_1803ed3b7_3:;
/* 1803ed3bb: inc rax */
L_1803ed3bb_0:;
L_1803ed3bb_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803ed3bb_2:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803ed3bb_3:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed3bb_4:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ed3bb_5:;
wr(s->u,65,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ed3bb_6:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803ed3bb_7:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ed3bb_8:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ed3bb_9:;
/* 1803ed3be: lea rdi, [rdx + 0xc] */
L_1803ed3be_0:;
L_1803ed3be_1:;
wr(s->u,5,8,(rd(s->r,16,8)+((U)UINT64_C(0xc))));
L_1803ed3be_2:;
wr(s->r,56,8,rd(s->u,5,8));
L_1803ed3be_3:;
/* 1803ed3c2: lea rbx, [r8 + 4] */
L_1803ed3c2_0:;
L_1803ed3c2_1:;
wr(s->u,5,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803ed3c2_2:;
wr(s->r,24,8,rd(s->u,5,8));
L_1803ed3c2_3:;
/* 1803ed3c6: lea r11, [rax*4] */
L_1803ed3c6_0:;
L_1803ed3c6_1:;
wr(s->u,13,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803ed3c6_2:;
wr(s->r,152,8,rd(s->u,13,8));
L_1803ed3c6_3:;
/* 1803ed3ce: nop  */
L_1803ed3ce_0:;
L_1803ed3ce_1:;
/* 1803ed3d0: movss xmm1, dword ptr [rdi - 0xc] */
L_1803ed3d0_0:;
L_1803ed3d0_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803ed3d0_2:;
wr(s->u,53,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed3d0_3:;
wr(s->r,4672,4,rd(s->u,53,4));
L_1803ed3d0_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ed3d0_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ed3d0_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ed3d0_7:;
/* 1803ed3d5: movss xmm0, dword ptr [rcx + 0xc] */
L_1803ed3d5_0:;
L_1803ed3d5_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed3d5_2:;
wr(s->u,53,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed3d5_3:;
wr(s->r,4608,4,rd(s->u,53,4));
L_1803ed3d5_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed3d5_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed3d5_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed3d5_7:;
/* 1803ed3da: add rbx, 0x10 */
L_1803ed3da_0:;
L_1803ed3da_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803ed3da_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x10)),8,0));
L_1803ed3da_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803ed3da_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed3da_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803ed3da_6:;
wr(s->u,65,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803ed3da_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803ed3da_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ed3da_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ed3da_10:;
/* 1803ed3de: add rdi, 0x10 */
L_1803ed3de_0:;
L_1803ed3de_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803ed3de_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x10)),8,0));
L_1803ed3de_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ed3de_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed3de_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803ed3de_6:;
wr(s->u,65,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803ed3de_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803ed3de_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ed3de_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ed3de_10:;
/* 1803ed3e2: sub rax, 1 */
L_1803ed3e2_0:;
L_1803ed3e2_1:;
wr(s->r,512,1,(rd(s->r,0,8)<((U)UINT64_C(0x1))));
L_1803ed3e2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,1));
L_1803ed3e2_3:;
wr(s->r,0,8,(rd(s->r,0,8)-((U)UINT64_C(0x1))));
L_1803ed3e2_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed3e2_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ed3e2_6:;
wr(s->u,65,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ed3e2_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803ed3e2_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ed3e2_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ed3e2_10:;
/* 1803ed3e6: mulss xmm0, dword ptr [rcx + 8] */
L_1803ed3e6_0:;
L_1803ed3e6_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed3e6_2:;
wr(s->u,53,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed3e6_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,53,4),4),4));
L_1803ed3e6_4:;
/* 1803ed3eb: movss dword ptr [rcx + 8], xmm1 */
L_1803ed3eb_0:;
L_1803ed3eb_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed3eb_2:;
wr(s->u,53,4,rd(s->r,4672,4));
L_1803ed3eb_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,53,4));
L_1803ed3eb_4:;
/* 1803ed3f0: movaps xmm2, xmm1 */
L_1803ed3f0_0:;
L_1803ed3f0_1:;
wr(s->r,4736,4,rd(s->r,4672,4));
L_1803ed3f0_2:;
wr(s->r,4740,4,rd(s->r,4676,4));
L_1803ed3f0_3:;
wr(s->r,4744,4,rd(s->r,4680,4));
L_1803ed3f0_4:;
wr(s->r,4748,4,rd(s->r,4684,4));
L_1803ed3f0_5:;
/* 1803ed3f3: mulss xmm2, dword ptr [rcx + 0x10] */
L_1803ed3f3_0:;
L_1803ed3f3_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed3f3_2:;
wr(s->u,53,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed3f3_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,53,4),4),4));
L_1803ed3f3_4:;
/* 1803ed3f8: addss xmm2, xmm0 */
L_1803ed3f8_0:;
L_1803ed3f8_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed3f8_2:;
/* 1803ed3fc: movss dword ptr [rbx - 0x14], xmm2 */
L_1803ed3fc_0:;
L_1803ed3fc_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803ed3fc_2:;
wr(s->u,53,4,rd(s->r,4736,4));
L_1803ed3fc_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,53,4));
L_1803ed3fc_4:;
/* 1803ed401: movss xmm3, dword ptr [r9 + rbx - 0x10] */
L_1803ed401_0:;
L_1803ed401_1:;
wr(s->u,29,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,136,8)));
L_1803ed401_2:;
wr(s->u,37,8,(rd(s->r,24,8)*((U)UINT64_C(0x1))));
L_1803ed401_3:;
wr(s->u,45,8,(rd(s->u,29,8)+rd(s->u,37,8)));
L_1803ed401_4:;
wr(s->u,53,4,mr((uint64_t)rd(s->u,45,8),4));
L_1803ed401_5:;
wr(s->r,4800,4,rd(s->u,53,4));
L_1803ed401_6:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ed401_7:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ed401_8:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ed401_9:;
/* 1803ed408: movss xmm0, dword ptr [rcx + 0xc] */
L_1803ed408_0:;
L_1803ed408_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed408_2:;
wr(s->u,53,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed408_3:;
wr(s->r,4608,4,rd(s->u,53,4));
L_1803ed408_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed408_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed408_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed408_7:;
/* 1803ed40d: mulss xmm0, dword ptr [rcx + 8] */
L_1803ed40d_0:;
L_1803ed40d_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed40d_2:;
wr(s->u,53,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed40d_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,53,4),4),4));
L_1803ed40d_4:;
/* 1803ed412: movaps xmm1, xmm3 */
L_1803ed412_0:;
L_1803ed412_1:;
wr(s->r,4672,4,rd(s->r,4800,4));
L_1803ed412_2:;
wr(s->r,4676,4,rd(s->r,4804,4));
L_1803ed412_3:;
wr(s->r,4680,4,rd(s->r,4808,4));
L_1803ed412_4:;
wr(s->r,4684,4,rd(s->r,4812,4));
L_1803ed412_5:;
/* 1803ed415: mulss xmm1, dword ptr [rcx + 0x10] */
L_1803ed415_0:;
L_1803ed415_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed415_2:;
wr(s->u,53,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed415_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,53,4),4),4));
L_1803ed415_4:;
/* 1803ed41a: movss dword ptr [rcx + 8], xmm3 */
L_1803ed41a_0:;
L_1803ed41a_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed41a_2:;
wr(s->u,53,4,rd(s->r,4800,4));
L_1803ed41a_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,53,4));
L_1803ed41a_4:;
/* 1803ed41f: addss xmm1, xmm0 */
L_1803ed41f_0:;
L_1803ed41f_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed41f_2:;
/* 1803ed423: movss dword ptr [rbx - 0x10], xmm1 */
L_1803ed423_0:;
L_1803ed423_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803ed423_2:;
wr(s->u,53,4,rd(s->r,4672,4));
L_1803ed423_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,53,4));
L_1803ed423_4:;
/* 1803ed428: movss xmm2, dword ptr [rdi - 0x14] */
L_1803ed428_0:;
L_1803ed428_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803ed428_2:;
wr(s->u,53,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed428_3:;
wr(s->r,4736,4,rd(s->u,53,4));
L_1803ed428_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ed428_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ed428_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ed428_7:;
/* 1803ed42d: movss xmm0, dword ptr [rcx + 0xc] */
L_1803ed42d_0:;
L_1803ed42d_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed42d_2:;
wr(s->u,53,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed42d_3:;
wr(s->r,4608,4,rd(s->u,53,4));
L_1803ed42d_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed42d_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed42d_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed42d_7:;
return UINT64_C(0x1803ed432);
}
uint64_t b_1803ed3d0(CPU*s){
/* 1803ed3d0: movss xmm1, dword ptr [rdi - 0xc] */
L_1803ed3d0_0:;
L_1803ed3d0_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803ed3d0_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed3d0_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ed3d0_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ed3d0_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ed3d0_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ed3d0_7:;
/* 1803ed3d5: movss xmm0, dword ptr [rcx + 0xc] */
L_1803ed3d5_0:;
L_1803ed3d5_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed3d5_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed3d5_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ed3d5_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed3d5_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed3d5_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed3d5_7:;
/* 1803ed3da: add rbx, 0x10 */
L_1803ed3da_0:;
L_1803ed3da_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803ed3da_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x10)),8,0));
L_1803ed3da_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803ed3da_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed3da_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803ed3da_6:;
wr(s->u,36,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803ed3da_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ed3da_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ed3da_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ed3da_10:;
/* 1803ed3de: add rdi, 0x10 */
L_1803ed3de_0:;
L_1803ed3de_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803ed3de_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x10)),8,0));
L_1803ed3de_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ed3de_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed3de_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803ed3de_6:;
wr(s->u,36,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803ed3de_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ed3de_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ed3de_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ed3de_10:;
/* 1803ed3e2: sub rax, 1 */
L_1803ed3e2_0:;
L_1803ed3e2_1:;
wr(s->r,512,1,(rd(s->r,0,8)<((U)UINT64_C(0x1))));
L_1803ed3e2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,1));
L_1803ed3e2_3:;
wr(s->r,0,8,(rd(s->r,0,8)-((U)UINT64_C(0x1))));
L_1803ed3e2_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed3e2_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ed3e2_6:;
wr(s->u,36,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ed3e2_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ed3e2_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ed3e2_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ed3e2_10:;
/* 1803ed3e6: mulss xmm0, dword ptr [rcx + 8] */
L_1803ed3e6_0:;
L_1803ed3e6_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed3e6_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed3e6_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ed3e6_4:;
/* 1803ed3eb: movss dword ptr [rcx + 8], xmm1 */
L_1803ed3eb_0:;
L_1803ed3eb_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed3eb_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803ed3eb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ed3eb_4:;
/* 1803ed3f0: movaps xmm2, xmm1 */
L_1803ed3f0_0:;
L_1803ed3f0_1:;
wr(s->r,4736,4,rd(s->r,4672,4));
L_1803ed3f0_2:;
wr(s->r,4740,4,rd(s->r,4676,4));
L_1803ed3f0_3:;
wr(s->r,4744,4,rd(s->r,4680,4));
L_1803ed3f0_4:;
wr(s->r,4748,4,rd(s->r,4684,4));
L_1803ed3f0_5:;
/* 1803ed3f3: mulss xmm2, dword ptr [rcx + 0x10] */
L_1803ed3f3_0:;
L_1803ed3f3_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed3f3_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed3f3_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ed3f3_4:;
/* 1803ed3f8: addss xmm2, xmm0 */
L_1803ed3f8_0:;
L_1803ed3f8_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed3f8_2:;
/* 1803ed3fc: movss dword ptr [rbx - 0x14], xmm2 */
L_1803ed3fc_0:;
L_1803ed3fc_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803ed3fc_2:;
wr(s->u,32,4,rd(s->r,4736,4));
L_1803ed3fc_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ed3fc_4:;
/* 1803ed401: movss xmm3, dword ptr [r9 + rbx - 0x10] */
L_1803ed401_0:;
L_1803ed401_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,136,8)));
L_1803ed401_2:;
wr(s->u,16,8,(rd(s->r,24,8)*((U)UINT64_C(0x1))));
L_1803ed401_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ed401_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ed401_5:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803ed401_6:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ed401_7:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ed401_8:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ed401_9:;
/* 1803ed408: movss xmm0, dword ptr [rcx + 0xc] */
L_1803ed408_0:;
L_1803ed408_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed408_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed408_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ed408_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed408_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed408_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed408_7:;
/* 1803ed40d: mulss xmm0, dword ptr [rcx + 8] */
L_1803ed40d_0:;
L_1803ed40d_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed40d_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed40d_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ed40d_4:;
/* 1803ed412: movaps xmm1, xmm3 */
L_1803ed412_0:;
L_1803ed412_1:;
wr(s->r,4672,4,rd(s->r,4800,4));
L_1803ed412_2:;
wr(s->r,4676,4,rd(s->r,4804,4));
L_1803ed412_3:;
wr(s->r,4680,4,rd(s->r,4808,4));
L_1803ed412_4:;
wr(s->r,4684,4,rd(s->r,4812,4));
L_1803ed412_5:;
/* 1803ed415: mulss xmm1, dword ptr [rcx + 0x10] */
L_1803ed415_0:;
L_1803ed415_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed415_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed415_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ed415_4:;
/* 1803ed41a: movss dword ptr [rcx + 8], xmm3 */
L_1803ed41a_0:;
L_1803ed41a_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed41a_2:;
wr(s->u,32,4,rd(s->r,4800,4));
L_1803ed41a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ed41a_4:;
/* 1803ed41f: addss xmm1, xmm0 */
L_1803ed41f_0:;
L_1803ed41f_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed41f_2:;
/* 1803ed423: movss dword ptr [rbx - 0x10], xmm1 */
L_1803ed423_0:;
L_1803ed423_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803ed423_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803ed423_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ed423_4:;
/* 1803ed428: movss xmm2, dword ptr [rdi - 0x14] */
L_1803ed428_0:;
L_1803ed428_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803ed428_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed428_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803ed428_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ed428_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ed428_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ed428_7:;
/* 1803ed42d: movss xmm0, dword ptr [rcx + 0xc] */
L_1803ed42d_0:;
L_1803ed42d_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed42d_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed42d_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ed42d_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed42d_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed42d_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed42d_7:;
/* 1803ed432: mulss xmm0, dword ptr [rcx + 8] */
L_1803ed432_0:;
L_1803ed432_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed432_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed432_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ed432_4:;
/* 1803ed437: movaps xmm3, xmm2 */
L_1803ed437_0:;
L_1803ed437_1:;
wr(s->r,4800,4,rd(s->r,4736,4));
L_1803ed437_2:;
wr(s->r,4804,4,rd(s->r,4740,4));
L_1803ed437_3:;
wr(s->r,4808,4,rd(s->r,4744,4));
L_1803ed437_4:;
wr(s->r,4812,4,rd(s->r,4748,4));
L_1803ed437_5:;
/* 1803ed43a: mulss xmm3, dword ptr [rcx + 0x10] */
L_1803ed43a_0:;
L_1803ed43a_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed43a_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed43a_3:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ed43a_4:;
/* 1803ed43f: movss dword ptr [rcx + 8], xmm2 */
L_1803ed43f_0:;
L_1803ed43f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed43f_2:;
wr(s->u,32,4,rd(s->r,4736,4));
L_1803ed43f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ed43f_4:;
/* 1803ed444: addss xmm3, xmm0 */
L_1803ed444_0:;
L_1803ed444_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed444_2:;
/* 1803ed448: movss dword ptr [rbx - 0xc], xmm3 */
L_1803ed448_0:;
L_1803ed448_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803ed448_2:;
wr(s->u,32,4,rd(s->r,4800,4));
L_1803ed448_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803ed448_4:;
/* 1803ed44d: movss xmm1, dword ptr [rdi - 0x10] */
L_1803ed44d_0:;
L_1803ed44d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803ed44d_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed44d_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803ed44d_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ed44d_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ed44d_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ed44d_7:;
/* 1803ed452: movss xmm0, dword ptr [rcx + 0xc] */
L_1803ed452_0:;
L_1803ed452_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed452_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed452_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ed452_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed452_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed452_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed452_7:;
/* 1803ed457: mulss xmm0, dword ptr [rcx + 8] */
L_1803ed457_0:;
L_1803ed457_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed457_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed457_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ed457_4:;
/* 1803ed45c: movaps xmm2, xmm1 */
L_1803ed45c_0:;
L_1803ed45c_1:;
wr(s->r,4736,4,rd(s->r,4672,4));
L_1803ed45c_2:;
wr(s->r,4740,4,rd(s->r,4676,4));
L_1803ed45c_3:;
wr(s->r,4744,4,rd(s->r,4680,4));
L_1803ed45c_4:;
wr(s->r,4748,4,rd(s->r,4684,4));
L_1803ed45c_5:;
/* 1803ed45f: mulss xmm2, dword ptr [rcx + 0x10] */
L_1803ed45f_0:;
L_1803ed45f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed45f_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed45f_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ed45f_4:;
return UINT64_C(0x1803ed464);
}
uint64_t b_1803ed432(CPU*s){
/* 1803ed432: mulss xmm0, dword ptr [rcx + 8] */
L_1803ed432_0:;
L_1803ed432_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed432_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed432_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,8,4),4),4));
L_1803ed432_4:;
/* 1803ed437: movaps xmm3, xmm2 */
L_1803ed437_0:;
L_1803ed437_1:;
wr(s->r,4800,4,rd(s->r,4736,4));
L_1803ed437_2:;
wr(s->r,4804,4,rd(s->r,4740,4));
L_1803ed437_3:;
wr(s->r,4808,4,rd(s->r,4744,4));
L_1803ed437_4:;
wr(s->r,4812,4,rd(s->r,4748,4));
L_1803ed437_5:;
/* 1803ed43a: mulss xmm3, dword ptr [rcx + 0x10] */
L_1803ed43a_0:;
L_1803ed43a_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed43a_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed43a_3:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->u,8,4),4),4));
L_1803ed43a_4:;
/* 1803ed43f: movss dword ptr [rcx + 8], xmm2 */
L_1803ed43f_0:;
L_1803ed43f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed43f_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803ed43f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ed43f_4:;
/* 1803ed444: addss xmm3, xmm0 */
L_1803ed444_0:;
L_1803ed444_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed444_2:;
/* 1803ed448: movss dword ptr [rbx - 0xc], xmm3 */
L_1803ed448_0:;
L_1803ed448_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803ed448_2:;
wr(s->u,8,4,rd(s->r,4800,4));
L_1803ed448_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ed448_4:;
/* 1803ed44d: movss xmm1, dword ptr [rdi - 0x10] */
L_1803ed44d_0:;
L_1803ed44d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803ed44d_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed44d_3:;
wr(s->r,4672,4,rd(s->u,8,4));
L_1803ed44d_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ed44d_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ed44d_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ed44d_7:;
/* 1803ed452: movss xmm0, dword ptr [rcx + 0xc] */
L_1803ed452_0:;
L_1803ed452_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed452_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed452_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803ed452_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed452_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed452_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed452_7:;
/* 1803ed457: mulss xmm0, dword ptr [rcx + 8] */
L_1803ed457_0:;
L_1803ed457_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed457_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed457_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,8,4),4),4));
L_1803ed457_4:;
/* 1803ed45c: movaps xmm2, xmm1 */
L_1803ed45c_0:;
L_1803ed45c_1:;
wr(s->r,4736,4,rd(s->r,4672,4));
L_1803ed45c_2:;
wr(s->r,4740,4,rd(s->r,4676,4));
L_1803ed45c_3:;
wr(s->r,4744,4,rd(s->r,4680,4));
L_1803ed45c_4:;
wr(s->r,4748,4,rd(s->r,4684,4));
L_1803ed45c_5:;
/* 1803ed45f: mulss xmm2, dword ptr [rcx + 0x10] */
L_1803ed45f_0:;
L_1803ed45f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed45f_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed45f_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,8,4),4),4));
L_1803ed45f_4:;
/* 1803ed464: movss dword ptr [rcx + 8], xmm1 */
L_1803ed464_0:;
L_1803ed464_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed464_2:;
wr(s->u,8,4,rd(s->r,4672,4));
L_1803ed464_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ed464_4:;
/* 1803ed469: addss xmm2, xmm0 */
L_1803ed469_0:;
L_1803ed469_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed469_2:;
/* 1803ed46d: movss dword ptr [rbx - 8], xmm2 */
L_1803ed46d_0:;
L_1803ed46d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803ed46d_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803ed46d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ed46d_4:;
/* 1803ed472: jne 0x1803ed3d0 */
L_1803ed472_0:;
L_1803ed472_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803ed472_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803ed3d0);}
L_1803ed472_3:;
return UINT64_C(0x1803ed478);
}
uint64_t b_1803ed464(CPU*s){
/* 1803ed464: movss dword ptr [rcx + 8], xmm1 */
L_1803ed464_0:;
L_1803ed464_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed464_2:;
wr(s->u,8,4,rd(s->r,4672,4));
L_1803ed464_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ed464_4:;
/* 1803ed469: addss xmm2, xmm0 */
L_1803ed469_0:;
L_1803ed469_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed469_2:;
/* 1803ed46d: movss dword ptr [rbx - 8], xmm2 */
L_1803ed46d_0:;
L_1803ed46d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803ed46d_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803ed46d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ed46d_4:;
/* 1803ed472: jne 0x1803ed3d0 */
L_1803ed472_0:;
L_1803ed472_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803ed472_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803ed3d0);}
L_1803ed472_3:;
return UINT64_C(0x1803ed478);
}
uint64_t b_1803ed478(CPU*s){
/* 1803ed478: mov rdi, qword ptr [rsp] */
L_1803ed478_0:;
L_1803ed478_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed478_2:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803ed478_3:;
/* 1803ed47c: mov rbx, qword ptr [rsp + 0x10] */
L_1803ed47c_0:;
L_1803ed47c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ed47c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed47c_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ed47c_4:;
/* 1803ed481: cmp r11, r10 */
L_1803ed481_0:;
L_1803ed481_1:;
wr(s->u,27,8,rd(s->r,144,8));
L_1803ed481_2:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->u,27,8)));
L_1803ed481_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->u,27,8),8,1));
L_1803ed481_4:;
wr(s->u,35,8,(rd(s->r,152,8)-rd(s->u,27,8)));
L_1803ed481_5:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed481_6:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1803ed481_7:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1803ed481_8:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803ed481_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803ed481_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ed481_11:;
/* 1803ed484: jge 0x1803ed4bf */
L_1803ed484_0:;
L_1803ed484_1:;
wr(s->u,16,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803ed484_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803ed4bf);}
L_1803ed484_3:;
return UINT64_C(0x1803ed486);
}
uint64_t b_1803ed481(CPU*s){
/* 1803ed481: cmp r11, r10 */
L_1803ed481_0:;
L_1803ed481_1:;
wr(s->u,11,8,rd(s->r,144,8));
L_1803ed481_2:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->u,11,8)));
L_1803ed481_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->u,11,8),8,1));
L_1803ed481_4:;
wr(s->u,19,8,(rd(s->r,152,8)-rd(s->u,11,8)));
L_1803ed481_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed481_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803ed481_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803ed481_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803ed481_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ed481_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ed481_11:;
/* 1803ed484: jge 0x1803ed4bf */
L_1803ed484_0:;
L_1803ed484_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803ed484_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ed4bf);}
L_1803ed484_3:;
return UINT64_C(0x1803ed486);
}
uint64_t b_1803ed486(CPU*s){
/* 1803ed486: sub rdx, r8 */
L_1803ed486_0:;
L_1803ed486_1:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->r,128,8)));
L_1803ed486_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->r,128,8),8,1));
L_1803ed486_3:;
wr(s->r,16,8,(rd(s->r,16,8)-rd(s->r,128,8)));
L_1803ed486_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed486_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803ed486_6:;
wr(s->u,29,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803ed486_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803ed486_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ed486_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ed486_10:;
/* 1803ed489: lea rax, [r8 + r11*4] */
L_1803ed489_0:;
L_1803ed489_1:;
wr(s->u,8,8,(rd(s->r,152,8)*((U)UINT64_C(0x4))));
L_1803ed489_2:;
wr(s->u,16,8,(rd(s->r,128,8)+rd(s->u,8,8)));
L_1803ed489_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803ed489_4:;
/* 1803ed48d: sub r10, r11 */
L_1803ed48d_0:;
L_1803ed48d_1:;
wr(s->r,512,1,(rd(s->r,144,8)<rd(s->r,152,8)));
L_1803ed48d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->r,152,8),8,1));
L_1803ed48d_3:;
wr(s->r,144,8,(rd(s->r,144,8)-rd(s->r,152,8)));
L_1803ed48d_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed48d_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803ed48d_6:;
wr(s->u,29,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803ed48d_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803ed48d_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ed48d_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ed48d_10:;
/* 1803ed490: movss xmm1, dword ptr [rax + rdx] */
L_1803ed490_0:;
L_1803ed490_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803ed490_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803ed490_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803ed490_4:;
wr(s->r,4672,4,rd(s->u,24,4));
L_1803ed490_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ed490_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ed490_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ed490_8:;
/* 1803ed495: movss xmm0, dword ptr [rcx + 0xc] */
L_1803ed495_0:;
L_1803ed495_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed495_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed495_3:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803ed495_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed495_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed495_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed495_7:;
/* 1803ed49a: add rax, 4 */
L_1803ed49a_0:;
L_1803ed49a_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803ed49a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x4)),8,0));
L_1803ed49a_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x4))));
L_1803ed49a_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed49a_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ed49a_6:;
wr(s->u,29,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ed49a_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803ed49a_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ed49a_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ed49a_10:;
/* 1803ed49e: sub r10, 1 */
L_1803ed49e_0:;
L_1803ed49e_1:;
wr(s->r,512,1,(rd(s->r,144,8)<((U)UINT64_C(0x1))));
L_1803ed49e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x1)),8,1));
L_1803ed49e_3:;
wr(s->r,144,8,(rd(s->r,144,8)-((U)UINT64_C(0x1))));
L_1803ed49e_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed49e_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803ed49e_6:;
wr(s->u,29,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803ed49e_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803ed49e_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ed49e_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ed49e_10:;
/* 1803ed4a2: mulss xmm0, dword ptr [rcx + 8] */
L_1803ed4a2_0:;
L_1803ed4a2_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed4a2_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed4a2_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,24,4),4),4));
L_1803ed4a2_4:;
/* 1803ed4a7: movaps xmm2, xmm1 */
L_1803ed4a7_0:;
L_1803ed4a7_1:;
wr(s->r,4736,4,rd(s->r,4672,4));
L_1803ed4a7_2:;
wr(s->r,4740,4,rd(s->r,4676,4));
L_1803ed4a7_3:;
wr(s->r,4744,4,rd(s->r,4680,4));
L_1803ed4a7_4:;
wr(s->r,4748,4,rd(s->r,4684,4));
L_1803ed4a7_5:;
/* 1803ed4aa: movss dword ptr [rcx + 8], xmm1 */
L_1803ed4aa_0:;
L_1803ed4aa_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed4aa_2:;
wr(s->u,24,4,rd(s->r,4672,4));
L_1803ed4aa_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803ed4aa_4:;
/* 1803ed4af: mulss xmm2, dword ptr [rcx + 0x10] */
L_1803ed4af_0:;
L_1803ed4af_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed4af_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed4af_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,24,4),4),4));
L_1803ed4af_4:;
/* 1803ed4b4: addss xmm2, xmm0 */
L_1803ed4b4_0:;
L_1803ed4b4_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed4b4_2:;
/* 1803ed4b8: movss dword ptr [rax - 4], xmm2 */
L_1803ed4b8_0:;
L_1803ed4b8_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803ed4b8_2:;
wr(s->u,24,4,rd(s->r,4736,4));
L_1803ed4b8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803ed4b8_4:;
/* 1803ed4bd: jne 0x1803ed490 */
L_1803ed4bd_0:;
L_1803ed4bd_1:;
wr(s->u,28,1,(!rd(s->r,518,1)));
L_1803ed4bd_2:;
if(rd(s->u,28,1)){goto L_1803ed490_0;}
L_1803ed4bd_3:;
return UINT64_C(0x1803ed4bf);
}
uint64_t b_1803ed490(CPU*s){
/* 1803ed490: movss xmm1, dword ptr [rax + rdx] */
L_1803ed490_0:;
L_1803ed490_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803ed490_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803ed490_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803ed490_4:;
wr(s->r,4672,4,rd(s->u,24,4));
L_1803ed490_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ed490_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ed490_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ed490_8:;
/* 1803ed495: movss xmm0, dword ptr [rcx + 0xc] */
L_1803ed495_0:;
L_1803ed495_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed495_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed495_3:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803ed495_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed495_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed495_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed495_7:;
/* 1803ed49a: add rax, 4 */
L_1803ed49a_0:;
L_1803ed49a_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803ed49a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x4)),8,0));
L_1803ed49a_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x4))));
L_1803ed49a_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed49a_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ed49a_6:;
wr(s->u,29,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ed49a_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803ed49a_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ed49a_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ed49a_10:;
/* 1803ed49e: sub r10, 1 */
L_1803ed49e_0:;
L_1803ed49e_1:;
wr(s->r,512,1,(rd(s->r,144,8)<((U)UINT64_C(0x1))));
L_1803ed49e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x1)),8,1));
L_1803ed49e_3:;
wr(s->r,144,8,(rd(s->r,144,8)-((U)UINT64_C(0x1))));
L_1803ed49e_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed49e_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803ed49e_6:;
wr(s->u,29,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803ed49e_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803ed49e_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ed49e_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ed49e_10:;
/* 1803ed4a2: mulss xmm0, dword ptr [rcx + 8] */
L_1803ed4a2_0:;
L_1803ed4a2_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed4a2_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed4a2_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,24,4),4),4));
L_1803ed4a2_4:;
/* 1803ed4a7: movaps xmm2, xmm1 */
L_1803ed4a7_0:;
L_1803ed4a7_1:;
wr(s->r,4736,4,rd(s->r,4672,4));
L_1803ed4a7_2:;
wr(s->r,4740,4,rd(s->r,4676,4));
L_1803ed4a7_3:;
wr(s->r,4744,4,rd(s->r,4680,4));
L_1803ed4a7_4:;
wr(s->r,4748,4,rd(s->r,4684,4));
L_1803ed4a7_5:;
/* 1803ed4aa: movss dword ptr [rcx + 8], xmm1 */
L_1803ed4aa_0:;
L_1803ed4aa_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed4aa_2:;
wr(s->u,24,4,rd(s->r,4672,4));
L_1803ed4aa_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803ed4aa_4:;
/* 1803ed4af: mulss xmm2, dword ptr [rcx + 0x10] */
L_1803ed4af_0:;
L_1803ed4af_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ed4af_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed4af_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,24,4),4),4));
L_1803ed4af_4:;
/* 1803ed4b4: addss xmm2, xmm0 */
L_1803ed4b4_0:;
L_1803ed4b4_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ed4b4_2:;
/* 1803ed4b8: movss dword ptr [rax - 4], xmm2 */
L_1803ed4b8_0:;
L_1803ed4b8_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803ed4b8_2:;
wr(s->u,24,4,rd(s->r,4736,4));
L_1803ed4b8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803ed4b8_4:;
/* 1803ed4bd: jne 0x1803ed490 */
L_1803ed4bd_0:;
L_1803ed4bd_1:;
wr(s->u,28,1,(!rd(s->r,518,1)));
L_1803ed4bd_2:;
if(rd(s->u,28,1)){goto L_1803ed490_0;}
L_1803ed4bd_3:;
return UINT64_C(0x1803ed4bf);
}
uint64_t b_1803ed4bf(CPU*s){
/* 1803ed4bf: xor eax, eax */
L_1803ed4bf_0:;
L_1803ed4bf_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed4bf_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed4bf_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ed4bf_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed4bf_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed4bf_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ed4bf_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ed4bf_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803ed4bf_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ed4bf_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ed4bf_11:;
/* 1803ed4c1: add rsp, 8 */
L_1803ed4c1_0:;
L_1803ed4c1_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ed4c1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x8)),8,0));
L_1803ed4c1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed4c1_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed4c1_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed4c1_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed4c1_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ed4c1_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ed4c1_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ed4c1_10:;
/* 1803ed4c5: ret  */
L_1803ed4c5_0:;
L_1803ed4c5_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed4c5_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed4c5_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ed4c5_4:;
return UINT64_C(0x1803ed4c6);
}
uint64_t b_1803ed4d0(CPU*s){
/* 1803ed4d0: push rbx */
L_1803ed4d0_0:;
L_1803ed4d0_1:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803ed4d0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed4d0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,8,8));
L_1803ed4d0_4:;
/* 1803ed4d2: sub rsp, 0x20 */
L_1803ed4d2_0:;
L_1803ed4d2_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803ed4d2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803ed4d2_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803ed4d2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed4d2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed4d2_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed4d2_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ed4d2_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ed4d2_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ed4d2_10:;
/* 1803ed4d6: lea rax, [rip + 0x41fe1b] */
L_1803ed4d6_0:;
L_1803ed4d6_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080d2f8)));
L_1803ed4d6_2:;
/* 1803ed4dd: mov rbx, rcx */
L_1803ed4dd_0:;
L_1803ed4dd_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ed4dd_2:;
/* 1803ed4e0: mov qword ptr [rcx], rax */
L_1803ed4e0_0:;
L_1803ed4e0_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803ed4e0_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,0,8));
L_1803ed4e0_3:;
/* 1803ed4e3: test dl, 1 */
L_1803ed4e3_0:;
L_1803ed4e3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed4e3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed4e3_3:;
wr(s->u,26,1,(rd(s->r,16,1)&((U)UINT64_C(0x1))));
L_1803ed4e3_4:;
wr(s->r,519,1,(sx(rd(s->u,26,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803ed4e3_5:;
wr(s->r,518,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ed4e3_6:;
wr(s->u,16,1,(rd(s->u,26,1)&((U)UINT64_C(0xff))));
L_1803ed4e3_7:;
wr(s->u,24,1,pop(rd(s->u,16,1),1));
L_1803ed4e3_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ed4e3_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ed4e3_10:;
/* 1803ed4e6: je 0x1803ed4ed */
L_1803ed4e6_0:;
L_1803ed4e6_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ed4ed);}
L_1803ed4e6_2:;
return UINT64_C(0x1803ed4e8);
}
uint64_t b_1803ed4e8(CPU*s){
/* 1803ed4e8: call 0x180003160 */
L_1803ed4e8_0:;
L_1803ed4e8_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed4e8_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed4ed)));
L_1803ed4e8_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803ed4e8_4:;
return UINT64_C(0x1803ed4ed);
}
uint64_t b_1803ed4ed(CPU*s){
/* 1803ed4ed: mov rax, rbx */
L_1803ed4ed_0:;
L_1803ed4ed_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803ed4ed_2:;
/* 1803ed4f0: add rsp, 0x20 */
L_1803ed4f0_0:;
L_1803ed4f0_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ed4f0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803ed4f0_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803ed4f0_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed4f0_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed4f0_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed4f0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ed4f0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ed4f0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ed4f0_10:;
/* 1803ed4f4: pop rbx */
L_1803ed4f4_0:;
L_1803ed4f4_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803ed4f4_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed4f4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed4f4_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803ed4f4_5:;
/* 1803ed4f5: ret  */
L_1803ed4f5_0:;
L_1803ed4f5_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed4f5_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed4f5_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ed4f5_4:;
return UINT64_C(0x1803ed4f6);
}
uint64_t b_1803ed530(CPU*s){
/* 1803ed530: sub rsp, 0x28 */
L_1803ed530_0:;
L_1803ed530_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803ed530_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803ed530_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803ed530_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed530_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed530_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed530_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ed530_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ed530_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ed530_10:;
/* 1803ed534: test rcx, rcx */
L_1803ed534_0:;
L_1803ed534_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed534_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed534_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803ed534_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed534_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803ed534_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803ed534_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ed534_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ed534_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ed534_10:;
/* 1803ed537: je 0x1803ed543 */
L_1803ed537_0:;
L_1803ed537_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ed543);}
L_1803ed537_2:;
return UINT64_C(0x1803ed539);
}
uint64_t b_1803ed539(CPU*s){
/* 1803ed539: mov rax, qword ptr [rcx] */
L_1803ed539_0:;
L_1803ed539_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803ed539_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803ed539_3:;
/* 1803ed53c: mov edx, 1 */
L_1803ed53c_0:;
L_1803ed53c_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803ed53c_2:;
/* 1803ed541: call qword ptr [rax] */
L_1803ed541_0:;
L_1803ed541_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803ed541_2:;
wr(s->u,8,8,rd(s->u,0,8));
L_1803ed541_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed541_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed543)));
L_1803ed541_5:;
return (uint64_t)rd(s->u,8,8);
L_1803ed541_6:;
return UINT64_C(0x1803ed543);
}
uint64_t b_1803ed543(CPU*s){
/* 1803ed543: xor eax, eax */
L_1803ed543_0:;
L_1803ed543_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed543_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed543_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ed543_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed543_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed543_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ed543_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ed543_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803ed543_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ed543_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ed543_11:;
/* 1803ed545: add rsp, 0x28 */
L_1803ed545_0:;
L_1803ed545_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ed545_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803ed545_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803ed545_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed545_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed545_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed545_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ed545_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ed545_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ed545_10:;
/* 1803ed549: ret  */
L_1803ed549_0:;
L_1803ed549_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed549_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed549_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ed549_4:;
return UINT64_C(0x1803ed54a);
}
uint64_t b_1803ed640(CPU*s){
/* 1803ed640: mov qword ptr [rsp + 8], rbx */
L_1803ed640_0:;
L_1803ed640_1:;
wr(s->u,24,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ed640_2:;
wr(s->u,32,8,rd(s->r,24,8));
L_1803ed640_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,32,8));
L_1803ed640_4:;
/* 1803ed645: mov qword ptr [rsp + 0x10], rsi */
L_1803ed645_0:;
L_1803ed645_1:;
wr(s->u,24,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ed645_2:;
wr(s->u,32,8,rd(s->r,48,8));
L_1803ed645_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,32,8));
L_1803ed645_4:;
/* 1803ed64a: mov qword ptr [rsp + 0x18], rdi */
L_1803ed64a_0:;
L_1803ed64a_1:;
wr(s->u,24,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803ed64a_2:;
wr(s->u,32,8,rd(s->r,56,8));
L_1803ed64a_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,32,8));
L_1803ed64a_4:;
/* 1803ed64f: mov eax, dword ptr [rcx + 0xc] */
L_1803ed64f_0:;
L_1803ed64f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed64f_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed64f_3:;
wr(s->r,0,4,rd(s->u,40,4));
L_1803ed64f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed64f_5:;
/* 1803ed652: xorps xmm2, xmm2 */
L_1803ed652_0:;
L_1803ed652_1:;
wr(s->r,4736,4,(rd(s->r,4736,4)^rd(s->r,4736,4)));
L_1803ed652_2:;
wr(s->r,4740,4,(rd(s->r,4740,4)^rd(s->r,4740,4)));
L_1803ed652_3:;
wr(s->r,4744,4,(rd(s->r,4744,4)^rd(s->r,4744,4)));
L_1803ed652_4:;
wr(s->r,4748,4,(rd(s->r,4748,4)^rd(s->r,4748,4)));
L_1803ed652_5:;
/* 1803ed655: mov edi, dword ptr [rcx + 0xc] */
L_1803ed655_0:;
L_1803ed655_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed655_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed655_3:;
wr(s->r,56,4,rd(s->u,40,4));
L_1803ed655_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803ed655_5:;
/* 1803ed658: lea esi, [rax + r8] */
L_1803ed658_0:;
L_1803ed658_1:;
wr(s->u,8,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803ed658_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803ed658_3:;
wr(s->r,48,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ed658_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803ed658_5:;
/* 1803ed65c: sub eax, edx */
L_1803ed65c_0:;
L_1803ed65c_1:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,16,4)));
L_1803ed65c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,16,4),4,1));
L_1803ed65c_3:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->r,16,4)));
L_1803ed65c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed65c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed65c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ed65c_7:;
wr(s->u,45,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ed65c_8:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803ed65c_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803ed65c_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803ed65c_11:;
/* 1803ed65e: or r10d, 0xffffffff */
L_1803ed65e_0:;
L_1803ed65e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed65e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed65e_3:;
wr(s->r,144,4,(rd(s->r,144,4)|((U)UINT64_C(0xffffffff))));
L_1803ed65e_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ed65e_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed65e_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803ed65e_7:;
wr(s->u,45,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803ed65e_8:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803ed65e_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803ed65e_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803ed65e_11:;
/* 1803ed662: mov r8d, esi */
L_1803ed662_0:;
L_1803ed662_1:;
wr(s->r,128,4,rd(s->r,48,4));
L_1803ed662_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ed662_3:;
/* 1803ed665: mov rbx, rcx */
L_1803ed665_0:;
L_1803ed665_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ed665_2:;
/* 1803ed668: lea r11d, [rsi + r9] */
L_1803ed668_0:;
L_1803ed668_1:;
wr(s->u,8,8,(rd(s->r,136,8)*((U)UINT64_C(0x1))));
L_1803ed668_2:;
wr(s->u,16,8,(rd(s->r,48,8)+rd(s->u,8,8)));
L_1803ed668_3:;
wr(s->r,152,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ed668_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ed668_5:;
/* 1803ed66c: sub r8d, r9d */
L_1803ed66c_0:;
L_1803ed66c_1:;
wr(s->r,512,1,(rd(s->r,128,4)<rd(s->r,136,4)));
L_1803ed66c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->r,136,4),4,1));
L_1803ed66c_3:;
wr(s->r,128,4,(rd(s->r,128,4)-rd(s->r,136,4)));
L_1803ed66c_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ed66c_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed66c_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ed66c_7:;
wr(s->u,45,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ed66c_8:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803ed66c_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803ed66c_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803ed66c_11:;
/* 1803ed66f: cmp r8d, eax */
L_1803ed66f_0:;
L_1803ed66f_1:;
wr(s->u,51,4,rd(s->r,0,4));
L_1803ed66f_2:;
wr(s->r,512,1,(rd(s->r,128,4)<rd(s->u,51,4)));
L_1803ed66f_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->u,51,4),4,1));
L_1803ed66f_4:;
wr(s->u,55,4,(rd(s->r,128,4)-rd(s->u,51,4)));
L_1803ed66f_5:;
wr(s->r,519,1,(sx(rd(s->u,55,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed66f_6:;
wr(s->r,518,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803ed66f_7:;
wr(s->u,45,4,(rd(s->u,55,4)&((U)UINT64_C(0xff))));
L_1803ed66f_8:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803ed66f_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803ed66f_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803ed66f_11:;
/* 1803ed672: jge 0x1803ed683 */
L_1803ed672_0:;
L_1803ed672_1:;
wr(s->u,44,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803ed672_2:;
if(rd(s->u,44,1)){return UINT64_C(0x1803ed683);}
L_1803ed672_3:;
return UINT64_C(0x1803ed674);
}
uint64_t b_1803ed674(CPU*s){
/* 1803ed674: mov r8d, edi */
L_1803ed674_0:;
L_1803ed674_1:;
wr(s->r,128,4,rd(s->r,56,4));
L_1803ed674_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ed674_3:;
/* 1803ed677: sub r8d, edx */
L_1803ed677_0:;
L_1803ed677_1:;
wr(s->r,512,1,(rd(s->r,128,4)<rd(s->r,16,4)));
L_1803ed677_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->r,16,4),4,1));
L_1803ed677_3:;
wr(s->r,128,4,(rd(s->r,128,4)-rd(s->r,16,4)));
L_1803ed677_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ed677_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed677_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ed677_7:;
wr(s->u,16,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ed677_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803ed677_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803ed677_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803ed677_11:;
/* 1803ed67a: dec r8d */
L_1803ed67a_0:;
L_1803ed67a_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x1)),4,1));
L_1803ed67a_2:;
wr(s->r,128,4,(rd(s->r,128,4)-((U)UINT64_C(0x1))));
L_1803ed67a_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ed67a_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed67a_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ed67a_6:;
wr(s->u,16,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ed67a_7:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803ed67a_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803ed67a_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803ed67a_10:;
/* 1803ed67d: lea r11d, [r8 + r9*2] */
L_1803ed67d_0:;
L_1803ed67d_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x2))));
L_1803ed67d_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803ed67d_3:;
wr(s->r,152,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ed67d_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ed67d_5:;
/* 1803ed681: jmp 0x1803ed699 */
L_1803ed681_0:;
L_1803ed681_1:;
return UINT64_C(0x1803ed699);
L_1803ed681_2:;
return UINT64_C(0x1803ed683);
}
uint64_t b_1803ed683(CPU*s){
/* 1803ed683: lea eax, [rdi + rdx] */
L_1803ed683_0:;
L_1803ed683_1:;
wr(s->u,0,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803ed683_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803ed683_3:;
wr(s->r,0,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ed683_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed683_5:;
/* 1803ed686: cmp r11d, eax */
L_1803ed686_0:;
L_1803ed686_1:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803ed686_2:;
wr(s->r,512,1,(rd(s->r,152,4)<rd(s->u,24,4)));
L_1803ed686_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),rd(s->u,24,4),4,1));
L_1803ed686_4:;
wr(s->u,28,4,(rd(s->r,152,4)-rd(s->u,24,4)));
L_1803ed686_5:;
wr(s->r,519,1,(sx(rd(s->u,28,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed686_6:;
wr(s->r,518,1,(rd(s->u,28,4)==((U)UINT64_C(0x0))));
L_1803ed686_7:;
wr(s->u,18,4,(rd(s->u,28,4)&((U)UINT64_C(0xff))));
L_1803ed686_8:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803ed686_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803ed686_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803ed686_11:;
/* 1803ed689: jle 0x1803ed699 */
L_1803ed689_0:;
L_1803ed689_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ed689_2:;
wr(s->u,17,1,((rd(s->r,518,1)!=0)||(rd(s->u,16,1)!=0)));
L_1803ed689_3:;
if(rd(s->u,17,1)){return UINT64_C(0x1803ed699);}
L_1803ed689_4:;
return UINT64_C(0x1803ed68b);
}
uint64_t b_1803ed68b(CPU*s){
/* 1803ed68b: lea r11d, [rax - 1] */
L_1803ed68b_0:;
L_1803ed68b_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803ed68b_2:;
wr(s->r,152,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ed68b_3:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ed68b_4:;
/* 1803ed68f: lea eax, [r9 + r9] */
L_1803ed68f_0:;
L_1803ed68f_1:;
wr(s->u,8,8,(rd(s->r,136,8)*((U)UINT64_C(0x1))));
L_1803ed68f_2:;
wr(s->u,16,8,(rd(s->r,136,8)+rd(s->u,8,8)));
L_1803ed68f_3:;
wr(s->r,0,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ed68f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed68f_5:;
/* 1803ed693: mov r8d, r11d */
L_1803ed693_0:;
L_1803ed693_1:;
wr(s->r,128,4,rd(s->r,152,4));
L_1803ed693_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ed693_3:;
/* 1803ed696: sub r8d, eax */
L_1803ed696_0:;
L_1803ed696_1:;
wr(s->r,512,1,(rd(s->r,128,4)<rd(s->r,0,4)));
L_1803ed696_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->r,0,4),4,1));
L_1803ed696_3:;
wr(s->r,128,4,(rd(s->r,128,4)-rd(s->r,0,4)));
L_1803ed696_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ed696_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed696_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ed696_7:;
wr(s->u,27,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ed696_8:;
wr(s->u,35,1,pop(rd(s->u,27,4),4));
L_1803ed696_9:;
wr(s->u,36,1,(rd(s->u,35,1)&((U)UINT64_C(0x1))));
L_1803ed696_10:;
wr(s->r,514,1,(rd(s->u,36,1)==((U)UINT64_C(0x0))));
L_1803ed696_11:;
/* 1803ed699: movsxd rcx, r8d */
L_1803ed699_0:;
L_1803ed699_1:;
wr(s->r,8,8,(U)sx(rd(s->r,128,4),4));
L_1803ed699_2:;
/* 1803ed69c: movsxd r9, r11d */
L_1803ed69c_0:;
L_1803ed69c_1:;
wr(s->r,136,8,(U)sx(rd(s->r,152,4),4));
L_1803ed69c_2:;
/* 1803ed69f: cmp rcx, r9 */
L_1803ed69f_0:;
L_1803ed69f_1:;
wr(s->u,37,8,rd(s->r,136,8));
L_1803ed69f_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,37,8)));
L_1803ed69f_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,37,8),8,1));
L_1803ed69f_4:;
wr(s->u,45,8,(rd(s->r,8,8)-rd(s->u,37,8)));
L_1803ed69f_5:;
wr(s->r,519,1,(sx(rd(s->u,45,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed69f_6:;
wr(s->r,518,1,(rd(s->u,45,8)==((U)UINT64_C(0x0))));
L_1803ed69f_7:;
wr(s->u,27,8,(rd(s->u,45,8)&((U)UINT64_C(0xff))));
L_1803ed69f_8:;
wr(s->u,35,1,pop(rd(s->u,27,8),8));
L_1803ed69f_9:;
wr(s->u,36,1,(rd(s->u,35,1)&((U)UINT64_C(0x1))));
L_1803ed69f_10:;
wr(s->r,514,1,(rd(s->u,36,1)==((U)UINT64_C(0x0))));
L_1803ed69f_11:;
/* 1803ed6a2: jg 0x1803ed728 */
L_1803ed6a2_0:;
L_1803ed6a2_1:;
wr(s->u,24,1,(!rd(s->r,518,1)));
L_1803ed6a2_2:;
wr(s->u,25,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803ed6a2_3:;
wr(s->u,26,1,((rd(s->u,24,1)!=0)&&(rd(s->u,25,1)!=0)));
L_1803ed6a2_4:;
if(rd(s->u,26,1)){return UINT64_C(0x1803ed728);}
L_1803ed6a2_5:;
return UINT64_C(0x1803ed6a8);
}
uint64_t b_1803ed699(CPU*s){
/* 1803ed699: movsxd rcx, r8d */
L_1803ed699_0:;
L_1803ed699_1:;
wr(s->r,8,8,(U)sx(rd(s->r,128,4),4));
L_1803ed699_2:;
/* 1803ed69c: movsxd r9, r11d */
L_1803ed69c_0:;
L_1803ed69c_1:;
wr(s->r,136,8,(U)sx(rd(s->r,152,4),4));
L_1803ed69c_2:;
/* 1803ed69f: cmp rcx, r9 */
L_1803ed69f_0:;
L_1803ed69f_1:;
wr(s->u,13,8,rd(s->r,136,8));
L_1803ed69f_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,13,8)));
L_1803ed69f_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,13,8),8,1));
L_1803ed69f_4:;
wr(s->u,21,8,(rd(s->r,8,8)-rd(s->u,13,8)));
L_1803ed69f_5:;
wr(s->r,519,1,(sx(rd(s->u,21,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed69f_6:;
wr(s->r,518,1,(rd(s->u,21,8)==((U)UINT64_C(0x0))));
L_1803ed69f_7:;
wr(s->u,3,8,(rd(s->u,21,8)&((U)UINT64_C(0xff))));
L_1803ed69f_8:;
wr(s->u,11,1,pop(rd(s->u,3,8),8));
L_1803ed69f_9:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803ed69f_10:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803ed69f_11:;
/* 1803ed6a2: jg 0x1803ed728 */
L_1803ed6a2_0:;
L_1803ed6a2_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803ed6a2_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803ed6a2_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803ed6a2_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803ed728);}
L_1803ed6a2_5:;
return UINT64_C(0x1803ed6a8);
}
uint64_t b_1803ed6a8(CPU*s){
/* 1803ed6a8: mov rax, qword ptr [rbx + 0x30] */
L_1803ed6a8_0:;
L_1803ed6a8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ed6a8_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed6a8_3:;
wr(s->r,0,8,rd(s->u,28,8));
L_1803ed6a8_4:;
/* 1803ed6ac: movss xmm3, dword ptr [rip + 0x2780d0] */
L_1803ed6ac_0:;
L_1803ed6ac_1:;
wr(s->r,4800,4,mr(UINT64_C(0x180665784),4));
L_1803ed6ac_2:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ed6ac_3:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ed6ac_4:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ed6ac_5:;
/* 1803ed6b4: sub r9, rcx */
L_1803ed6b4_0:;
L_1803ed6b4_1:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->r,8,8)));
L_1803ed6b4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->r,8,8),8,1));
L_1803ed6b4_3:;
wr(s->r,136,8,(rd(s->r,136,8)-rd(s->r,8,8)));
L_1803ed6b4_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed6b4_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803ed6b4_6:;
wr(s->u,36,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803ed6b4_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ed6b4_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ed6b4_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ed6b4_10:;
/* 1803ed6b7: lea rdx, [rax + rcx*4] */
L_1803ed6b7_0:;
L_1803ed6b7_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803ed6b7_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803ed6b7_3:;
wr(s->r,16,8,rd(s->u,16,8));
L_1803ed6b7_4:;
/* 1803ed6bb: inc r9 */
L_1803ed6bb_0:;
L_1803ed6bb_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x1)),8,0));
L_1803ed6bb_2:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x1))));
L_1803ed6bb_3:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed6bb_4:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803ed6bb_5:;
wr(s->u,36,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803ed6bb_6:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ed6bb_7:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ed6bb_8:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ed6bb_9:;
/* 1803ed6be: nop  */
L_1803ed6be_0:;
L_1803ed6be_1:;
/* 1803ed6c0: movss xmm1, dword ptr [rdx] */
L_1803ed6c0_0:;
L_1803ed6c0_1:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803ed6c0_2:;
wr(s->r,4672,4,rd(s->u,24,4));
L_1803ed6c0_3:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ed6c0_4:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ed6c0_5:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ed6c0_6:;
/* 1803ed6c4: mulss xmm1, xmm3 */
L_1803ed6c4_0:;
L_1803ed6c4_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ed6c4_2:;
/* 1803ed6c8: cvttss2si ecx, xmm1 */
L_1803ed6c8_0:;
L_1803ed6c8_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803ed6c8_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ed6c8_3:;
/* 1803ed6cc: cmp ecx, 0x80000000 */
L_1803ed6cc_0:;
L_1803ed6cc_1:;
wr(s->u,46,4,rd(s->r,8,4));
L_1803ed6cc_2:;
wr(s->r,512,1,(rd(s->u,46,4)<((U)UINT64_C(0x80000000))));
L_1803ed6cc_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,46,4),((U)UINT64_C(0x80000000)),4,1));
L_1803ed6cc_4:;
wr(s->u,50,4,(rd(s->u,46,4)-((U)UINT64_C(0x80000000))));
L_1803ed6cc_5:;
wr(s->r,519,1,(sx(rd(s->u,50,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed6cc_6:;
wr(s->r,518,1,(rd(s->u,50,4)==((U)UINT64_C(0x0))));
L_1803ed6cc_7:;
wr(s->u,36,4,(rd(s->u,50,4)&((U)UINT64_C(0xff))));
L_1803ed6cc_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1803ed6cc_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ed6cc_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ed6cc_11:;
/* 1803ed6d2: je 0x1803ed6f4 */
L_1803ed6d2_0:;
L_1803ed6d2_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ed6f4);}
L_1803ed6d2_2:;
return UINT64_C(0x1803ed6d4);
}
uint64_t b_1803ed6c0(CPU*s){
/* 1803ed6c0: movss xmm1, dword ptr [rdx] */
L_1803ed6c0_0:;
L_1803ed6c0_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803ed6c0_2:;
wr(s->r,4672,4,rd(s->u,0,4));
L_1803ed6c0_3:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ed6c0_4:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ed6c0_5:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ed6c0_6:;
/* 1803ed6c4: mulss xmm1, xmm3 */
L_1803ed6c4_0:;
L_1803ed6c4_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ed6c4_2:;
/* 1803ed6c8: cvttss2si ecx, xmm1 */
L_1803ed6c8_0:;
L_1803ed6c8_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803ed6c8_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ed6c8_3:;
/* 1803ed6cc: cmp ecx, 0x80000000 */
L_1803ed6cc_0:;
L_1803ed6cc_1:;
wr(s->u,10,4,rd(s->r,8,4));
L_1803ed6cc_2:;
wr(s->r,512,1,(rd(s->u,10,4)<((U)UINT64_C(0x80000000))));
L_1803ed6cc_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,10,4),((U)UINT64_C(0x80000000)),4,1));
L_1803ed6cc_4:;
wr(s->u,14,4,(rd(s->u,10,4)-((U)UINT64_C(0x80000000))));
L_1803ed6cc_5:;
wr(s->r,519,1,(sx(rd(s->u,14,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed6cc_6:;
wr(s->r,518,1,(rd(s->u,14,4)==((U)UINT64_C(0x0))));
L_1803ed6cc_7:;
wr(s->u,4,4,(rd(s->u,14,4)&((U)UINT64_C(0xff))));
L_1803ed6cc_8:;
wr(s->u,8,1,pop(rd(s->u,4,4),4));
L_1803ed6cc_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ed6cc_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ed6cc_11:;
/* 1803ed6d2: je 0x1803ed6f4 */
L_1803ed6d2_0:;
L_1803ed6d2_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ed6f4);}
L_1803ed6d2_2:;
return UINT64_C(0x1803ed6d4);
}
uint64_t b_1803ed6d4(CPU*s){
/* 1803ed6d4: pxor xmm0, xmm0 */
L_1803ed6d4_0:;
L_1803ed6d4_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803ed6d4_2:;
/* 1803ed6d8: cvtsi2ss xmm0, ecx */
L_1803ed6d8_0:;
L_1803ed6d8_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803ed6d8_2:;
/* 1803ed6dc: ucomiss xmm0, xmm1 */
L_1803ed6dc_0:;
L_1803ed6dc_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803ed6dc_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803ed6dc_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803ed6dc_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803ed6dc_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803ed6dc_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803ed6dc_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ed6dc_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed6dc_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ed6dc_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ed6dc_11:;
/* 1803ed6df: je 0x1803ed6f4 */
L_1803ed6df_0:;
L_1803ed6df_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ed6f4);}
L_1803ed6df_2:;
return UINT64_C(0x1803ed6e1);
}
uint64_t b_1803ed6e1(CPU*s){
/* 1803ed6e1: unpcklps xmm1, xmm1 */
L_1803ed6e1_0:;
L_1803ed6e1_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803ed6e1_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803ed6e1_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803ed6e1_4:;
/* 1803ed6e4: movmskps eax, xmm1 */
L_1803ed6e4_0:;
L_1803ed6e4_1:;
wr(s->r,0,4,(((rd(s->r,4672,16)>>31)&1)<<0)|(((rd(s->r,4672,16)>>63)&1)<<1)|(((rd(s->r,4672,16)>>95)&1)<<2)|(((rd(s->r,4672,16)>>127)&1)<<3));
L_1803ed6e4_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed6e4_3:;
/* 1803ed6e7: pxor xmm1, xmm1 */
L_1803ed6e7_0:;
L_1803ed6e7_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803ed6e7_2:;
/* 1803ed6eb: and eax, 1 */
L_1803ed6eb_0:;
L_1803ed6eb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed6eb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed6eb_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803ed6eb_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed6eb_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed6eb_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ed6eb_7:;
wr(s->u,1,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ed6eb_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803ed6eb_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803ed6eb_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803ed6eb_11:;
/* 1803ed6ee: sub ecx, eax */
L_1803ed6ee_0:;
L_1803ed6ee_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,0,4)));
L_1803ed6ee_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,1));
L_1803ed6ee_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,0,4)));
L_1803ed6ee_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ed6ee_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed6ee_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ed6ee_7:;
wr(s->u,1,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ed6ee_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803ed6ee_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803ed6ee_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803ed6ee_11:;
/* 1803ed6f0: cvtsi2ss xmm1, ecx */
L_1803ed6f0_0:;
L_1803ed6f0_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803ed6f0_2:;
/* 1803ed6f4: comiss xmm1, xmm2 */
L_1803ed6f4_0:;
L_1803ed6f4_1:;
wr(s->u,7,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803ed6f4_2:;
wr(s->u,8,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803ed6f4_3:;
wr(s->r,514,1,((rd(s->u,7,1)!=0)||(rd(s->u,8,1)!=0)));
L_1803ed6f4_4:;
wr(s->u,9,1,(fv(rd(s->r,4672,4),4)==fv(rd(s->r,4736,4),4)));
L_1803ed6f4_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,9,1)));
L_1803ed6f4_6:;
wr(s->u,10,1,(fv(rd(s->r,4672,4),4)<fv(rd(s->r,4736,4),4)));
L_1803ed6f4_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,10,1)));
L_1803ed6f4_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed6f4_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ed6f4_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ed6f4_11:;
/* 1803ed6f7: jbe 0x1803ed6ff */
L_1803ed6f7_0:;
L_1803ed6f7_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803ed6f7_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ed6ff);}
L_1803ed6f7_3:;
return UINT64_C(0x1803ed6f9);
}
uint64_t b_1803ed6f4(CPU*s){
/* 1803ed6f4: comiss xmm1, xmm2 */
L_1803ed6f4_0:;
L_1803ed6f4_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803ed6f4_2:;
wr(s->u,2,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803ed6f4_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803ed6f4_4:;
wr(s->u,3,1,(fv(rd(s->r,4672,4),4)==fv(rd(s->r,4736,4),4)));
L_1803ed6f4_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ed6f4_6:;
wr(s->u,4,1,(fv(rd(s->r,4672,4),4)<fv(rd(s->r,4736,4),4)));
L_1803ed6f4_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803ed6f4_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed6f4_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ed6f4_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ed6f4_11:;
/* 1803ed6f7: jbe 0x1803ed6ff */
L_1803ed6f7_0:;
L_1803ed6f7_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803ed6f7_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ed6ff);}
L_1803ed6f7_3:;
return UINT64_C(0x1803ed6f9);
}
uint64_t b_1803ed6f9(CPU*s){
/* 1803ed6f9: movaps xmm2, xmm1 */
L_1803ed6f9_0:;
L_1803ed6f9_1:;
wr(s->r,4736,4,rd(s->r,4672,4));
L_1803ed6f9_2:;
wr(s->r,4740,4,rd(s->r,4676,4));
L_1803ed6f9_3:;
wr(s->r,4744,4,rd(s->r,4680,4));
L_1803ed6f9_4:;
wr(s->r,4748,4,rd(s->r,4684,4));
L_1803ed6f9_5:;
/* 1803ed6fc: mov r10d, r8d */
L_1803ed6fc_0:;
L_1803ed6fc_1:;
wr(s->r,144,4,rd(s->r,128,4));
L_1803ed6fc_2:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ed6fc_3:;
/* 1803ed6ff: inc r8d */
L_1803ed6ff_0:;
L_1803ed6ff_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x1)),4,0));
L_1803ed6ff_2:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0x1))));
L_1803ed6ff_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ed6ff_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed6ff_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ed6ff_6:;
wr(s->u,1,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ed6ff_7:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803ed6ff_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ed6ff_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ed6ff_10:;
/* 1803ed702: add rdx, 4 */
L_1803ed702_0:;
L_1803ed702_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803ed702_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x4)),8,0));
L_1803ed702_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803ed702_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed702_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803ed702_6:;
wr(s->u,1,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803ed702_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803ed702_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ed702_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ed702_10:;
/* 1803ed706: sub r9, 1 */
L_1803ed706_0:;
L_1803ed706_1:;
wr(s->r,512,1,(rd(s->r,136,8)<((U)UINT64_C(0x1))));
L_1803ed706_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x1)),8,1));
L_1803ed706_3:;
wr(s->r,136,8,(rd(s->r,136,8)-((U)UINT64_C(0x1))));
L_1803ed706_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed706_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803ed706_6:;
wr(s->u,1,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803ed706_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803ed706_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ed706_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ed706_10:;
/* 1803ed70a: jne 0x1803ed6c0 */
L_1803ed70a_0:;
L_1803ed70a_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803ed70a_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ed6c0);}
L_1803ed70a_3:;
return UINT64_C(0x1803ed70c);
}
uint64_t b_1803ed6ff(CPU*s){
/* 1803ed6ff: inc r8d */
L_1803ed6ff_0:;
L_1803ed6ff_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x1)),4,0));
L_1803ed6ff_2:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0x1))));
L_1803ed6ff_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ed6ff_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed6ff_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ed6ff_6:;
wr(s->u,1,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ed6ff_7:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803ed6ff_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ed6ff_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ed6ff_10:;
/* 1803ed702: add rdx, 4 */
L_1803ed702_0:;
L_1803ed702_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803ed702_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x4)),8,0));
L_1803ed702_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803ed702_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed702_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803ed702_6:;
wr(s->u,1,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803ed702_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803ed702_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ed702_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ed702_10:;
/* 1803ed706: sub r9, 1 */
L_1803ed706_0:;
L_1803ed706_1:;
wr(s->r,512,1,(rd(s->r,136,8)<((U)UINT64_C(0x1))));
L_1803ed706_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x1)),8,1));
L_1803ed706_3:;
wr(s->r,136,8,(rd(s->r,136,8)-((U)UINT64_C(0x1))));
L_1803ed706_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed706_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803ed706_6:;
wr(s->u,1,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803ed706_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803ed706_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ed706_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ed706_10:;
/* 1803ed70a: jne 0x1803ed6c0 */
L_1803ed70a_0:;
L_1803ed70a_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803ed70a_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ed6c0);}
L_1803ed70a_3:;
return UINT64_C(0x1803ed70c);
}
uint64_t b_1803ed70c(CPU*s){
/* 1803ed70c: cmp r10d, -1 */
L_1803ed70c_0:;
L_1803ed70c_1:;
wr(s->u,6,4,rd(s->r,144,4));
L_1803ed70c_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0xffffffff))));
L_1803ed70c_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0xffffffff)),4,1));
L_1803ed70c_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0xffffffff))));
L_1803ed70c_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed70c_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803ed70c_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803ed70c_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803ed70c_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803ed70c_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803ed70c_11:;
/* 1803ed710: je 0x1803ed728 */
L_1803ed710_0:;
L_1803ed710_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ed728);}
L_1803ed710_2:;
return UINT64_C(0x1803ed712);
}
uint64_t b_1803ed712(CPU*s){
/* 1803ed712: sub r10d, edi */
L_1803ed712_0:;
L_1803ed712_1:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->r,56,4)));
L_1803ed712_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->r,56,4),4,1));
L_1803ed712_3:;
wr(s->r,144,4,(rd(s->r,144,4)-rd(s->r,56,4)));
L_1803ed712_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ed712_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed712_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803ed712_7:;
wr(s->u,16,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803ed712_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803ed712_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803ed712_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803ed712_11:;
/* 1803ed715: mov eax, r10d */
L_1803ed715_0:;
L_1803ed715_1:;
wr(s->r,0,4,rd(s->r,144,4));
L_1803ed715_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed715_3:;
/* 1803ed718: mov rbx, qword ptr [rsp + 8] */
L_1803ed718_0:;
L_1803ed718_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ed718_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed718_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ed718_4:;
/* 1803ed71d: mov rsi, qword ptr [rsp + 0x10] */
L_1803ed71d_0:;
L_1803ed71d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ed71d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed71d_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803ed71d_4:;
/* 1803ed722: mov rdi, qword ptr [rsp + 0x18] */
L_1803ed722_0:;
L_1803ed722_1:;
wr(s->u,0,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803ed722_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed722_3:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803ed722_4:;
/* 1803ed727: ret  */
L_1803ed727_0:;
L_1803ed727_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed727_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed727_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ed727_4:;
return UINT64_C(0x1803ed728);
}
uint64_t b_1803ed728(CPU*s){
/* 1803ed728: mov rbx, qword ptr [rsp + 8] */
L_1803ed728_0:;
L_1803ed728_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ed728_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed728_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ed728_4:;
/* 1803ed72d: sub esi, edi */
L_1803ed72d_0:;
L_1803ed72d_1:;
wr(s->r,512,1,(rd(s->r,48,4)<rd(s->r,56,4)));
L_1803ed72d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),rd(s->r,56,4),4,1));
L_1803ed72d_3:;
wr(s->r,48,4,(rd(s->r,48,4)-rd(s->r,56,4)));
L_1803ed72d_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803ed72d_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed72d_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803ed72d_7:;
wr(s->u,16,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803ed72d_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803ed72d_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803ed72d_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803ed72d_11:;
/* 1803ed72f: mov rdi, qword ptr [rsp + 0x18] */
L_1803ed72f_0:;
L_1803ed72f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803ed72f_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed72f_3:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803ed72f_4:;
/* 1803ed734: mov eax, esi */
L_1803ed734_0:;
L_1803ed734_1:;
wr(s->r,0,4,rd(s->r,48,4));
L_1803ed734_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed734_3:;
/* 1803ed736: mov rsi, qword ptr [rsp + 0x10] */
L_1803ed736_0:;
L_1803ed736_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ed736_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed736_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803ed736_4:;
/* 1803ed73b: ret  */
L_1803ed73b_0:;
L_1803ed73b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed73b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed73b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ed73b_4:;
return UINT64_C(0x1803ed73c);
}
uint64_t b_1803ed740(CPU*s){
/* 1803ed740: mov rax, qword ptr [rcx + 0x30] */
L_1803ed740_0:;
L_1803ed740_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x30))));
L_1803ed740_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed740_3:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803ed740_4:;
/* 1803ed744: mov qword ptr [rdx], rax */
L_1803ed744_0:;
L_1803ed744_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803ed744_2:;
mw((uint64_t)rd(s->r,16,8),8,rd(s->u,8,8));
L_1803ed744_3:;
/* 1803ed747: mov eax, dword ptr [rcx + 8] */
L_1803ed747_0:;
L_1803ed747_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed747_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed747_3:;
wr(s->r,0,4,rd(s->u,16,4));
L_1803ed747_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed747_5:;
/* 1803ed74a: ret  */
L_1803ed74a_0:;
L_1803ed74a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed74a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed74a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ed74a_4:;
return UINT64_C(0x1803ed74b);
}
uint64_t b_1803ed750(CPU*s){
/* 1803ed750: mov qword ptr [rsp + 8], rbx */
L_1803ed750_0:;
L_1803ed750_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ed750_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803ed750_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ed750_4:;
/* 1803ed755: push rdi */
L_1803ed755_0:;
L_1803ed755_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803ed755_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed755_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803ed755_4:;
/* 1803ed756: sub rsp, 0x20 */
L_1803ed756_0:;
L_1803ed756_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803ed756_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803ed756_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803ed756_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed756_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed756_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed756_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ed756_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ed756_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ed756_10:;
/* 1803ed75a: movd xmm0, edx */
L_1803ed75a_0:;
L_1803ed75a_1:;
wr(s->r,4608,16,rd(s->r,16,4));
L_1803ed75a_2:;
/* 1803ed75e: lea rax, [rip + 0x41fba3] */
L_1803ed75e_0:;
L_1803ed75e_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080d308)));
L_1803ed75e_2:;
/* 1803ed765: mov rbx, rcx */
L_1803ed765_0:;
L_1803ed765_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ed765_2:;
/* 1803ed768: mov qword ptr [rcx], rax */
L_1803ed768_0:;
L_1803ed768_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803ed768_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,8,8));
L_1803ed768_3:;
/* 1803ed76b: cvtdq2ps xmm0, xmm0 */
L_1803ed76b_0:;
L_1803ed76b_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ed76b_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ed76b_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ed76b_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ed76b_5:;
/* 1803ed76e: call 0x180609c04 */
L_1803ed76e_0:;
L_1803ed76e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed76e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed773)));
L_1803ed76e_3:;
return (uint64_t)UINT64_C(0x180609c04);
L_1803ed76e_4:;
return UINT64_C(0x1803ed773);
}
uint64_t b_1803ed773(CPU*s){
/* 1803ed773: movaps xmm1, xmm0 */
L_1803ed773_0:;
L_1803ed773_1:;
wr(s->r,4672,4,rd(s->r,4608,4));
L_1803ed773_2:;
wr(s->r,4676,4,rd(s->r,4612,4));
L_1803ed773_3:;
wr(s->r,4680,4,rd(s->r,4616,4));
L_1803ed773_4:;
wr(s->r,4684,4,rd(s->r,4620,4));
L_1803ed773_5:;
/* 1803ed776: mulss xmm1, dword ptr [rip + 0x41eda2] */
L_1803ed776_0:;
L_1803ed776_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(mr(UINT64_C(0x18080c520),4),4),4));
L_1803ed776_2:;
/* 1803ed77e: cvttss2si edx, xmm1 */
L_1803ed77e_0:;
L_1803ed77e_1:;
wr(s->r,16,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803ed77e_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ed77e_3:;
/* 1803ed782: cmp edx, 0x80000000 */
L_1803ed782_0:;
L_1803ed782_1:;
wr(s->u,6,4,rd(s->r,16,4));
L_1803ed782_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x80000000))));
L_1803ed782_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x80000000)),4,1));
L_1803ed782_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x80000000))));
L_1803ed782_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed782_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803ed782_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803ed782_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803ed782_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803ed782_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803ed782_11:;
/* 1803ed788: je 0x1803ed7ad */
L_1803ed788_0:;
L_1803ed788_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ed7ad);}
L_1803ed788_2:;
return UINT64_C(0x1803ed78a);
}
uint64_t b_1803ed78a(CPU*s){
/* 1803ed78a: pxor xmm0, xmm0 */
L_1803ed78a_0:;
L_1803ed78a_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803ed78a_2:;
/* 1803ed78e: cvtsi2ss xmm0, edx */
L_1803ed78e_0:;
L_1803ed78e_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,16,4),4),4));
L_1803ed78e_2:;
/* 1803ed792: ucomiss xmm0, xmm1 */
L_1803ed792_0:;
L_1803ed792_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803ed792_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803ed792_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803ed792_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803ed792_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803ed792_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803ed792_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ed792_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed792_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ed792_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ed792_11:;
/* 1803ed795: je 0x1803ed7ad */
L_1803ed795_0:;
L_1803ed795_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ed7ad);}
L_1803ed795_2:;
return UINT64_C(0x1803ed797);
}
uint64_t b_1803ed797(CPU*s){
/* 1803ed797: unpcklps xmm1, xmm1 */
L_1803ed797_0:;
L_1803ed797_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803ed797_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803ed797_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803ed797_4:;
/* 1803ed79a: movmskps eax, xmm1 */
L_1803ed79a_0:;
L_1803ed79a_1:;
wr(s->r,0,4,(((rd(s->r,4672,16)>>31)&1)<<0)|(((rd(s->r,4672,16)>>63)&1)<<1)|(((rd(s->r,4672,16)>>95)&1)<<2)|(((rd(s->r,4672,16)>>127)&1)<<3));
L_1803ed79a_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed79a_3:;
/* 1803ed79d: pxor xmm1, xmm1 */
L_1803ed79d_0:;
L_1803ed79d_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803ed79d_2:;
/* 1803ed7a1: and eax, 1 */
L_1803ed7a1_0:;
L_1803ed7a1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed7a1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed7a1_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803ed7a1_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed7a1_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed7a1_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ed7a1_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ed7a1_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803ed7a1_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803ed7a1_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803ed7a1_11:;
/* 1803ed7a4: xor eax, 1 */
L_1803ed7a4_0:;
L_1803ed7a4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed7a4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed7a4_3:;
wr(s->r,0,4,(rd(s->r,0,4)^((U)UINT64_C(0x1))));
L_1803ed7a4_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed7a4_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed7a4_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ed7a4_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ed7a4_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803ed7a4_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803ed7a4_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803ed7a4_11:;
/* 1803ed7a7: add edx, eax */
L_1803ed7a7_0:;
L_1803ed7a7_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803ed7a7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->r,0,4),4,0));
L_1803ed7a7_3:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->r,0,4)));
L_1803ed7a7_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ed7a7_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed7a7_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ed7a7_7:;
wr(s->u,0,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ed7a7_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803ed7a7_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803ed7a7_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803ed7a7_11:;
/* 1803ed7a9: cvtsi2ss xmm1, edx */
L_1803ed7a9_0:;
L_1803ed7a9_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,16,4),4),4));
L_1803ed7a9_2:;
/* 1803ed7ad: movss xmm0, dword ptr [rip + 0x267a3b] */
L_1803ed7ad_0:;
L_1803ed7ad_1:;
wr(s->r,4608,4,mr(UINT64_C(0x1806551f0),4));
L_1803ed7ad_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed7ad_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed7ad_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed7ad_5:;
/* 1803ed7b5: call 0x180609a00 */
L_1803ed7b5_0:;
L_1803ed7b5_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed7b5_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed7ba)));
L_1803ed7b5_3:;
return (uint64_t)UINT64_C(0x180609a00);
L_1803ed7b5_4:;
return UINT64_C(0x1803ed7ba);
}
uint64_t b_1803ed7ad(CPU*s){
/* 1803ed7ad: movss xmm0, dword ptr [rip + 0x267a3b] */
L_1803ed7ad_0:;
L_1803ed7ad_1:;
wr(s->r,4608,4,mr(UINT64_C(0x1806551f0),4));
L_1803ed7ad_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed7ad_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed7ad_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed7ad_5:;
/* 1803ed7b5: call 0x180609a00 */
L_1803ed7b5_0:;
L_1803ed7b5_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed7b5_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed7ba)));
L_1803ed7b5_3:;
return (uint64_t)UINT64_C(0x180609a00);
L_1803ed7b5_4:;
return UINT64_C(0x1803ed7ba);
}
uint64_t b_1803ed7ba(CPU*s){
/* 1803ed7ba: mov rdi, 0xffffffffffffffff */
L_1803ed7ba_0:;
L_1803ed7ba_1:;
wr(s->r,56,8,((U)UINT64_C(0xffffffffffffffff)));
L_1803ed7ba_2:;
/* 1803ed7c1: addss xmm0, dword ptr [rip + 0x26499b] */
L_1803ed7c1_0:;
L_1803ed7c1_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(mr(UINT64_C(0x180652164),4),4),4));
L_1803ed7c1_2:;
/* 1803ed7c9: cvttss2si ecx, xmm0 */
L_1803ed7c9_0:;
L_1803ed7c9_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803ed7c9_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ed7c9_3:;
/* 1803ed7cd: mov eax, ecx */
L_1803ed7cd_0:;
L_1803ed7cd_1:;
wr(s->r,0,4,rd(s->r,8,4));
L_1803ed7cd_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed7cd_3:;
/* 1803ed7cf: mov dword ptr [rbx + 8], ecx */
L_1803ed7cf_0:;
L_1803ed7cf_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ed7cf_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_1803ed7cf_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ed7cf_4:;
/* 1803ed7d2: movsxd rcx, ecx */
L_1803ed7d2_0:;
L_1803ed7d2_1:;
wr(s->r,8,8,(U)sx(rd(s->r,8,4),4));
L_1803ed7d2_2:;
/* 1803ed7d5: sar eax, 1 */
L_1803ed7d5_0:;
L_1803ed7d5_1:;
wr(s->u,75,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803ed7d5_2:;
wr(s->r,512,1,(rd(s->u,75,4)!=((U)UINT64_C(0x0))));
L_1803ed7d5_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed7d5_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803ed7d5_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed7d5_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed7d5_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ed7d5_8:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ed7d5_9:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803ed7d5_10:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ed7d5_11:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ed7d5_12:;
/* 1803ed7d7: mov dword ptr [rbx + 0xc], eax */
L_1803ed7d7_0:;
L_1803ed7d7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ed7d7_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ed7d7_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ed7d7_4:;
/* 1803ed7da: mov eax, 4 */
L_1803ed7da_0:;
L_1803ed7da_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803ed7da_2:;
/* 1803ed7df: mul rcx */
L_1803ed7df_0:;
L_1803ed7df_1:;
wr(s->u,27,16,rd(s->r,0,8));
L_1803ed7df_2:;
wr(s->u,43,16,rd(s->r,8,8));
L_1803ed7df_3:;
wr(s->u,59,16,(rd(s->u,27,16)*rd(s->u,43,16)));
L_1803ed7df_4:;
wr(s->r,16,8,(rd(s->u,59,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ed7df_5:;
wr(s->r,0,8,(rd(s->u,59,16) >> (((U)UINT64_C(0x0))*8)));
L_1803ed7df_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803ed7df_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ed7df_8:;
/* 1803ed7e2: cmovo rax, rdi */
L_1803ed7e2_0:;
L_1803ed7e2_1:;
wr(s->u,18,8,rd(s->r,56,8));
L_1803ed7e2_2:;
wr(s->u,26,1,(!rd(s->r,523,1)));
L_1803ed7e2_3:;
if(rd(s->u,26,1)){goto L_1803ed7e6_0;}
L_1803ed7e2_4:;
wr(s->r,0,8,rd(s->u,18,8));
L_1803ed7e2_5:;
/* 1803ed7e6: mov rcx, rax */
L_1803ed7e6_0:;
L_1803ed7e6_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ed7e6_2:;
/* 1803ed7e9: call 0x180003140 */
L_1803ed7e9_0:;
L_1803ed7e9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed7e9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed7ee)));
L_1803ed7e9_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ed7e9_4:;
return UINT64_C(0x1803ed7ee);
}
uint64_t b_1803ed7e6(CPU*s){
/* 1803ed7e6: mov rcx, rax */
L_1803ed7e6_0:;
L_1803ed7e6_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ed7e6_2:;
/* 1803ed7e9: call 0x180003140 */
L_1803ed7e9_0:;
L_1803ed7e9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed7e9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed7ee)));
L_1803ed7e9_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ed7e9_4:;
return UINT64_C(0x1803ed7ee);
}
uint64_t b_1803ed7ee(CPU*s){
/* 1803ed7ee: movsxd rcx, dword ptr [rbx + 8] */
L_1803ed7ee_0:;
L_1803ed7ee_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ed7ee_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed7ee_3:;
wr(s->r,8,8,(U)sx(rd(s->u,16,4),4));
L_1803ed7ee_4:;
/* 1803ed7f2: mov qword ptr [rbx + 0x20], rax */
L_1803ed7f2_0:;
L_1803ed7f2_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ed7f2_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803ed7f2_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ed7f2_4:;
/* 1803ed7f6: mov eax, 4 */
L_1803ed7f6_0:;
L_1803ed7f6_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803ed7f6_2:;
/* 1803ed7fb: mul rcx */
L_1803ed7fb_0:;
L_1803ed7fb_1:;
wr(s->u,29,16,rd(s->r,0,8));
L_1803ed7fb_2:;
wr(s->u,45,16,rd(s->r,8,8));
L_1803ed7fb_3:;
wr(s->u,61,16,(rd(s->u,29,16)*rd(s->u,45,16)));
L_1803ed7fb_4:;
wr(s->r,16,8,(rd(s->u,61,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ed7fb_5:;
wr(s->r,0,8,(rd(s->u,61,16) >> (((U)UINT64_C(0x0))*8)));
L_1803ed7fb_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803ed7fb_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ed7fb_8:;
/* 1803ed7fe: cmovo rax, rdi */
L_1803ed7fe_0:;
L_1803ed7fe_1:;
wr(s->u,20,8,rd(s->r,56,8));
L_1803ed7fe_2:;
wr(s->u,28,1,(!rd(s->r,523,1)));
L_1803ed7fe_3:;
if(rd(s->u,28,1)){goto L_1803ed802_0;}
L_1803ed7fe_4:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803ed7fe_5:;
/* 1803ed802: mov rcx, rax */
L_1803ed802_0:;
L_1803ed802_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ed802_2:;
/* 1803ed805: call 0x180003140 */
L_1803ed805_0:;
L_1803ed805_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed805_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed80a)));
L_1803ed805_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ed805_4:;
return UINT64_C(0x1803ed80a);
}
uint64_t b_1803ed802(CPU*s){
/* 1803ed802: mov rcx, rax */
L_1803ed802_0:;
L_1803ed802_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ed802_2:;
/* 1803ed805: call 0x180003140 */
L_1803ed805_0:;
L_1803ed805_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed805_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed80a)));
L_1803ed805_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ed805_4:;
return UINT64_C(0x1803ed80a);
}
uint64_t b_1803ed80a(CPU*s){
/* 1803ed80a: movsxd rcx, dword ptr [rbx + 8] */
L_1803ed80a_0:;
L_1803ed80a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ed80a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed80a_3:;
wr(s->r,8,8,(U)sx(rd(s->u,16,4),4));
L_1803ed80a_4:;
/* 1803ed80e: mov qword ptr [rbx + 0x28], rax */
L_1803ed80e_0:;
L_1803ed80e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803ed80e_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803ed80e_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ed80e_4:;
/* 1803ed812: mov eax, 4 */
L_1803ed812_0:;
L_1803ed812_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803ed812_2:;
/* 1803ed817: mul rcx */
L_1803ed817_0:;
L_1803ed817_1:;
wr(s->u,29,16,rd(s->r,0,8));
L_1803ed817_2:;
wr(s->u,45,16,rd(s->r,8,8));
L_1803ed817_3:;
wr(s->u,61,16,(rd(s->u,29,16)*rd(s->u,45,16)));
L_1803ed817_4:;
wr(s->r,16,8,(rd(s->u,61,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ed817_5:;
wr(s->r,0,8,(rd(s->u,61,16) >> (((U)UINT64_C(0x0))*8)));
L_1803ed817_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803ed817_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ed817_8:;
/* 1803ed81a: cmovo rax, rdi */
L_1803ed81a_0:;
L_1803ed81a_1:;
wr(s->u,20,8,rd(s->r,56,8));
L_1803ed81a_2:;
wr(s->u,28,1,(!rd(s->r,523,1)));
L_1803ed81a_3:;
if(rd(s->u,28,1)){goto L_1803ed81e_0;}
L_1803ed81a_4:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803ed81a_5:;
/* 1803ed81e: mov rcx, rax */
L_1803ed81e_0:;
L_1803ed81e_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ed81e_2:;
/* 1803ed821: call 0x180003140 */
L_1803ed821_0:;
L_1803ed821_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed821_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed826)));
L_1803ed821_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ed821_4:;
return UINT64_C(0x1803ed826);
}
uint64_t b_1803ed81e(CPU*s){
/* 1803ed81e: mov rcx, rax */
L_1803ed81e_0:;
L_1803ed81e_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ed81e_2:;
/* 1803ed821: call 0x180003140 */
L_1803ed821_0:;
L_1803ed821_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed821_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed826)));
L_1803ed821_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ed821_4:;
return UINT64_C(0x1803ed826);
}
uint64_t b_1803ed826(CPU*s){
/* 1803ed826: mov edx, dword ptr [rbx + 8] */
L_1803ed826_0:;
L_1803ed826_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ed826_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed826_3:;
wr(s->r,16,4,rd(s->u,16,4));
L_1803ed826_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ed826_5:;
/* 1803ed829: lea rcx, [rbx + 0x10] */
L_1803ed829_0:;
L_1803ed829_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803ed829_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ed829_3:;
/* 1803ed82d: xor r8d, r8d */
L_1803ed82d_0:;
L_1803ed82d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed82d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed82d_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1803ed82d_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ed82d_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed82d_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ed82d_7:;
wr(s->u,20,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ed82d_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ed82d_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ed82d_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ed82d_11:;
/* 1803ed830: mov qword ptr [rbx + 0x30], rax */
L_1803ed830_0:;
L_1803ed830_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ed830_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803ed830_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ed830_4:;
/* 1803ed834: call 0x1803f20b0 */
L_1803ed834_0:;
L_1803ed834_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed834_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed839)));
L_1803ed834_3:;
return (uint64_t)UINT64_C(0x1803f20b0);
L_1803ed834_4:;
return UINT64_C(0x1803ed839);
}
uint64_t b_1803ed839(CPU*s){
/* 1803ed839: mov rax, rbx */
L_1803ed839_0:;
L_1803ed839_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803ed839_2:;
/* 1803ed83c: mov rbx, qword ptr [rsp + 0x30] */
L_1803ed83c_0:;
L_1803ed83c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ed83c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed83c_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ed83c_4:;
/* 1803ed841: add rsp, 0x20 */
L_1803ed841_0:;
L_1803ed841_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ed841_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803ed841_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803ed841_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed841_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed841_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed841_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ed841_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ed841_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ed841_10:;
/* 1803ed845: pop rdi */
L_1803ed845_0:;
L_1803ed845_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ed845_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed845_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed845_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803ed845_5:;
/* 1803ed846: ret  */
L_1803ed846_0:;
L_1803ed846_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed846_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed846_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ed846_4:;
return UINT64_C(0x1803ed847);
}
uint64_t b_1803ed850(CPU*s){
/* 1803ed850: mov qword ptr [rsp + 8], rbx */
L_1803ed850_0:;
L_1803ed850_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ed850_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803ed850_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803ed850_4:;
/* 1803ed855: push rdi */
L_1803ed855_0:;
L_1803ed855_1:;
wr(s->u,32,8,rd(s->r,56,8));
L_1803ed855_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed855_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,32,8));
L_1803ed855_4:;
/* 1803ed856: sub rsp, 0x20 */
L_1803ed856_0:;
L_1803ed856_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803ed856_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803ed856_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803ed856_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed856_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed856_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed856_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803ed856_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803ed856_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803ed856_10:;
/* 1803ed85a: lea rax, [rip + 0x41faa7] */
L_1803ed85a_0:;
L_1803ed85a_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080d308)));
L_1803ed85a_2:;
/* 1803ed861: mov rbx, rcx */
L_1803ed861_0:;
L_1803ed861_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ed861_2:;
/* 1803ed864: mov qword ptr [rcx], rax */
L_1803ed864_0:;
L_1803ed864_1:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803ed864_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,16,8));
L_1803ed864_3:;
/* 1803ed867: mov rcx, qword ptr [rcx + 0x20] */
L_1803ed867_0:;
L_1803ed867_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x20))));
L_1803ed867_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed867_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803ed867_4:;
/* 1803ed86b: test rcx, rcx */
L_1803ed86b_0:;
L_1803ed86b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed86b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed86b_3:;
wr(s->u,50,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803ed86b_4:;
wr(s->r,519,1,(sx(rd(s->u,50,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed86b_5:;
wr(s->r,518,1,(rd(s->u,50,8)==((U)UINT64_C(0x0))));
L_1803ed86b_6:;
wr(s->u,40,8,(rd(s->u,50,8)&((U)UINT64_C(0xff))));
L_1803ed86b_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803ed86b_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803ed86b_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803ed86b_10:;
/* 1803ed86e: je 0x1803ed875 */
L_1803ed86e_0:;
L_1803ed86e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ed875);}
L_1803ed86e_2:;
return UINT64_C(0x1803ed870);
}
uint64_t b_1803ed870(CPU*s){
/* 1803ed870: call 0x180003160 */
L_1803ed870_0:;
L_1803ed870_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed870_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed875)));
L_1803ed870_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803ed870_4:;
return UINT64_C(0x1803ed875);
}
uint64_t b_1803ed875(CPU*s){
/* 1803ed875: mov rcx, qword ptr [rbx + 0x28] */
L_1803ed875_0:;
L_1803ed875_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803ed875_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed875_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803ed875_4:;
/* 1803ed879: xor edi, edi */
L_1803ed879_0:;
L_1803ed879_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed879_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed879_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803ed879_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803ed879_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed879_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803ed879_7:;
wr(s->u,24,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803ed879_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803ed879_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ed879_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ed879_11:;
/* 1803ed87b: mov qword ptr [rbx + 0x20], rdi */
L_1803ed87b_0:;
L_1803ed87b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ed87b_2:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803ed87b_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ed87b_4:;
/* 1803ed87f: test rcx, rcx */
L_1803ed87f_0:;
L_1803ed87f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed87f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed87f_3:;
wr(s->u,34,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803ed87f_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed87f_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803ed87f_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803ed87f_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ed87f_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ed87f_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ed87f_10:;
/* 1803ed882: je 0x1803ed889 */
L_1803ed882_0:;
L_1803ed882_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ed889);}
L_1803ed882_2:;
return UINT64_C(0x1803ed884);
}
uint64_t b_1803ed884(CPU*s){
/* 1803ed884: call 0x180003160 */
L_1803ed884_0:;
L_1803ed884_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed884_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed889)));
L_1803ed884_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803ed884_4:;
return UINT64_C(0x1803ed889);
}
uint64_t b_1803ed889(CPU*s){
/* 1803ed889: mov rcx, qword ptr [rbx + 0x30] */
L_1803ed889_0:;
L_1803ed889_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ed889_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed889_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803ed889_4:;
/* 1803ed88d: mov qword ptr [rbx + 0x28], rdi */
L_1803ed88d_0:;
L_1803ed88d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803ed88d_2:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803ed88d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ed88d_4:;
/* 1803ed891: test rcx, rcx */
L_1803ed891_0:;
L_1803ed891_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed891_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed891_3:;
wr(s->u,34,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803ed891_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed891_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803ed891_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803ed891_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ed891_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ed891_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ed891_10:;
/* 1803ed894: je 0x1803ed89b */
L_1803ed894_0:;
L_1803ed894_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ed89b);}
L_1803ed894_2:;
return UINT64_C(0x1803ed896);
}
uint64_t b_1803ed896(CPU*s){
/* 1803ed896: call 0x180003160 */
L_1803ed896_0:;
L_1803ed896_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed896_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed89b)));
L_1803ed896_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803ed896_4:;
return UINT64_C(0x1803ed89b);
}
uint64_t b_1803ed89b(CPU*s){
/* 1803ed89b: mov rcx, qword ptr [rbx + 0x10] */
L_1803ed89b_0:;
L_1803ed89b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803ed89b_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed89b_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803ed89b_4:;
/* 1803ed89f: mov qword ptr [rbx + 0x30], rdi */
L_1803ed89f_0:;
L_1803ed89f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ed89f_2:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803ed89f_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ed89f_4:;
/* 1803ed8a3: test rcx, rcx */
L_1803ed8a3_0:;
L_1803ed8a3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed8a3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed8a3_3:;
wr(s->u,34,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803ed8a3_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed8a3_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803ed8a3_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803ed8a3_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ed8a3_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ed8a3_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ed8a3_10:;
/* 1803ed8a6: je 0x1803ed8ad */
L_1803ed8a6_0:;
L_1803ed8a6_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ed8ad);}
L_1803ed8a6_2:;
return UINT64_C(0x1803ed8a8);
}
uint64_t b_1803ed8a8(CPU*s){
/* 1803ed8a8: call 0x1803f1960 */
L_1803ed8a8_0:;
L_1803ed8a8_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed8a8_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed8ad)));
L_1803ed8a8_3:;
return (uint64_t)UINT64_C(0x1803f1960);
L_1803ed8a8_4:;
return UINT64_C(0x1803ed8ad);
}
uint64_t b_1803ed8ad(CPU*s){
/* 1803ed8ad: mov qword ptr [rbx + 0x10], rdi */
L_1803ed8ad_0:;
L_1803ed8ad_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803ed8ad_2:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803ed8ad_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803ed8ad_4:;
/* 1803ed8b1: mov rbx, qword ptr [rsp + 0x30] */
L_1803ed8b1_0:;
L_1803ed8b1_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ed8b1_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ed8b1_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803ed8b1_4:;
/* 1803ed8b6: add rsp, 0x20 */
L_1803ed8b6_0:;
L_1803ed8b6_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ed8b6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803ed8b6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803ed8b6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed8b6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed8b6_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed8b6_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803ed8b6_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ed8b6_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ed8b6_10:;
/* 1803ed8ba: pop rdi */
L_1803ed8ba_0:;
L_1803ed8ba_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803ed8ba_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed8ba_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed8ba_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803ed8ba_5:;
/* 1803ed8bb: ret  */
L_1803ed8bb_0:;
L_1803ed8bb_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed8bb_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed8bb_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ed8bb_4:;
return UINT64_C(0x1803ed8bc);
}
uint64_t b_1803ed8c0(CPU*s){
/* 1803ed8c0: mov qword ptr [rsp + 8], rbx */
L_1803ed8c0_0:;
L_1803ed8c0_1:;
wr(s->u,13,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ed8c0_2:;
wr(s->u,21,8,rd(s->r,24,8));
L_1803ed8c0_3:;
mw((uint64_t)rd(s->u,13,8),8,rd(s->u,21,8));
L_1803ed8c0_4:;
/* 1803ed8c5: mov qword ptr [rsp + 0x10], rbp */
L_1803ed8c5_0:;
L_1803ed8c5_1:;
wr(s->u,13,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ed8c5_2:;
wr(s->u,21,8,rd(s->r,40,8));
L_1803ed8c5_3:;
mw((uint64_t)rd(s->u,13,8),8,rd(s->u,21,8));
L_1803ed8c5_4:;
/* 1803ed8ca: mov qword ptr [rsp + 0x18], rsi */
L_1803ed8ca_0:;
L_1803ed8ca_1:;
wr(s->u,13,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803ed8ca_2:;
wr(s->u,21,8,rd(s->r,48,8));
L_1803ed8ca_3:;
mw((uint64_t)rd(s->u,13,8),8,rd(s->u,21,8));
L_1803ed8ca_4:;
/* 1803ed8cf: push rdi */
L_1803ed8cf_0:;
L_1803ed8cf_1:;
wr(s->u,41,8,rd(s->r,56,8));
L_1803ed8cf_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed8cf_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,41,8));
L_1803ed8cf_4:;
/* 1803ed8d0: sub rsp, 0x20 */
L_1803ed8d0_0:;
L_1803ed8d0_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803ed8d0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803ed8d0_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803ed8d0_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed8d0_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed8d0_6:;
wr(s->u,49,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed8d0_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803ed8d0_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803ed8d0_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803ed8d0_10:;
/* 1803ed8d4: mov rsi, r8 */
L_1803ed8d4_0:;
L_1803ed8d4_1:;
wr(s->r,48,8,rd(s->r,128,8));
L_1803ed8d4_2:;
/* 1803ed8d7: movsxd r8, dword ptr [rcx + 8] */
L_1803ed8d7_0:;
L_1803ed8d7_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed8d7_2:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed8d7_3:;
wr(s->r,128,8,(U)sx(rd(s->u,29,4),4));
L_1803ed8d7_4:;
/* 1803ed8db: mov rbp, rcx */
L_1803ed8db_0:;
L_1803ed8db_1:;
wr(s->r,40,8,rd(s->r,8,8));
L_1803ed8db_2:;
/* 1803ed8de: mov rcx, qword ptr [rcx + 0x20] */
L_1803ed8de_0:;
L_1803ed8de_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x20))));
L_1803ed8de_2:;
wr(s->u,33,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803ed8de_3:;
wr(s->r,8,8,rd(s->u,33,8));
L_1803ed8de_4:;
/* 1803ed8e2: mov rdi, rdx */
L_1803ed8e2_0:;
L_1803ed8e2_1:;
wr(s->r,56,8,rd(s->r,16,8));
L_1803ed8e2_2:;
/* 1803ed8e5: shl r8, 2 */
L_1803ed8e5_0:;
L_1803ed8e5_1:;
wr(s->u,99,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803ed8e5_2:;
wr(s->u,103,8,rd(s->r,128,8));
L_1803ed8e5_3:;
wr(s->r,128,8,((rd(s->u,99,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,99,4))));
L_1803ed8e5_4:;
wr(s->u,82,1,(rd(s->u,99,4)==((U)UINT64_C(0x0))));
L_1803ed8e5_5:;
wr(s->u,83,4,(rd(s->u,99,4)-((U)UINT64_C(0x1))));
L_1803ed8e5_6:;
wr(s->u,87,8,((rd(s->u,83,4)>=64)?0:(rd(s->u,103,8)<<rd(s->u,83,4))));
L_1803ed8e5_7:;
wr(s->u,95,1,(sx(rd(s->u,87,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed8e5_8:;
wr(s->u,0,1,rd(s->u,82,1));
L_1803ed8e5_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ed8e5_10:;
wr(s->u,2,1,(!rd(s->u,82,1)));
L_1803ed8e5_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ed8e5_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,95,1)));
L_1803ed8e5_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ed8e5_14:;
wr(s->u,96,1,(rd(s->u,99,4)==((U)UINT64_C(0x1))));
L_1803ed8e5_15:;
wr(s->u,97,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed8e5_16:;
wr(s->u,98,1,(rd(s->r,512,1)^rd(s->u,97,1)));
L_1803ed8e5_17:;
wr(s->u,0,1,rd(s->u,96,1));
L_1803ed8e5_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,98,1)));
L_1803ed8e5_19:;
wr(s->u,2,1,(!rd(s->u,96,1)));
L_1803ed8e5_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ed8e5_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ed8e5_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ed8e5_23:;
wr(s->u,59,1,(rd(s->u,99,4)!=((U)UINT64_C(0x0))));
L_1803ed8e5_24:;
wr(s->u,60,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed8e5_25:;
wr(s->u,61,1,(!rd(s->u,59,1)));
L_1803ed8e5_26:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,519,1)));
L_1803ed8e5_27:;
wr(s->u,63,1,(rd(s->u,59,1)&rd(s->u,60,1)));
L_1803ed8e5_28:;
wr(s->r,519,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803ed8e5_29:;
wr(s->u,64,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ed8e5_30:;
wr(s->u,65,1,(!rd(s->u,59,1)));
L_1803ed8e5_31:;
wr(s->u,66,1,(rd(s->u,65,1)&rd(s->r,518,1)));
L_1803ed8e5_32:;
wr(s->u,67,1,(rd(s->u,59,1)&rd(s->u,64,1)));
L_1803ed8e5_33:;
wr(s->r,518,1,(rd(s->u,66,1)|rd(s->u,67,1)));
L_1803ed8e5_34:;
wr(s->u,68,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ed8e5_35:;
wr(s->u,76,1,pop(rd(s->u,68,8),8));
L_1803ed8e5_36:;
wr(s->u,77,1,(rd(s->u,76,1)&((U)UINT64_C(0x1))));
L_1803ed8e5_37:;
wr(s->u,78,1,(rd(s->u,77,1)==((U)UINT64_C(0x0))));
L_1803ed8e5_38:;
wr(s->u,79,1,(!rd(s->u,59,1)));
L_1803ed8e5_39:;
wr(s->u,80,1,(rd(s->u,79,1)&rd(s->r,514,1)));
L_1803ed8e5_40:;
wr(s->u,81,1,(rd(s->u,59,1)&rd(s->u,78,1)));
L_1803ed8e5_41:;
wr(s->r,514,1,(rd(s->u,80,1)|rd(s->u,81,1)));
L_1803ed8e5_42:;
/* 1803ed8e9: xor edx, edx */
L_1803ed8e9_0:;
L_1803ed8e9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed8e9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed8e9_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803ed8e9_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ed8e9_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed8e9_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ed8e9_7:;
wr(s->u,49,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ed8e9_8:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803ed8e9_9:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803ed8e9_10:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803ed8e9_11:;
/* 1803ed8eb: movsxd rbx, r9d */
L_1803ed8eb_0:;
L_1803ed8eb_1:;
wr(s->r,24,8,(U)sx(rd(s->r,136,4),4));
L_1803ed8eb_2:;
/* 1803ed8ee: call 0x18000d6a6 */
L_1803ed8ee_0:;
L_1803ed8ee_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed8ee_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed8f3)));
L_1803ed8ee_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803ed8ee_4:;
return UINT64_C(0x1803ed8f3);
}
uint64_t b_1803ed8f3(CPU*s){
/* 1803ed8f3: movsxd r8, dword ptr [rbp + 8] */
L_1803ed8f3_0:;
L_1803ed8f3_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803ed8f3_2:;
wr(s->u,13,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ed8f3_3:;
wr(s->r,128,8,(U)sx(rd(s->u,13,4),4));
L_1803ed8f3_4:;
/* 1803ed8f7: mov rcx, qword ptr [rbp + 0x28] */
L_1803ed8f7_0:;
L_1803ed8f7_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x28))));
L_1803ed8f7_2:;
wr(s->u,17,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803ed8f7_3:;
wr(s->r,8,8,rd(s->u,17,8));
L_1803ed8f7_4:;
/* 1803ed8fb: shl r8, 2 */
L_1803ed8fb_0:;
L_1803ed8fb_1:;
wr(s->u,71,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803ed8fb_2:;
wr(s->u,75,8,rd(s->r,128,8));
L_1803ed8fb_3:;
wr(s->r,128,8,((rd(s->u,71,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,71,4))));
L_1803ed8fb_4:;
wr(s->u,54,1,(rd(s->u,71,4)==((U)UINT64_C(0x0))));
L_1803ed8fb_5:;
wr(s->u,55,4,(rd(s->u,71,4)-((U)UINT64_C(0x1))));
L_1803ed8fb_6:;
wr(s->u,59,8,((rd(s->u,55,4)>=64)?0:(rd(s->u,75,8)<<rd(s->u,55,4))));
L_1803ed8fb_7:;
wr(s->u,67,1,(sx(rd(s->u,59,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed8fb_8:;
wr(s->u,0,1,rd(s->u,54,1));
L_1803ed8fb_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ed8fb_10:;
wr(s->u,2,1,(!rd(s->u,54,1)));
L_1803ed8fb_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ed8fb_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,67,1)));
L_1803ed8fb_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ed8fb_14:;
wr(s->u,68,1,(rd(s->u,71,4)==((U)UINT64_C(0x1))));
L_1803ed8fb_15:;
wr(s->u,69,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed8fb_16:;
wr(s->u,70,1,(rd(s->r,512,1)^rd(s->u,69,1)));
L_1803ed8fb_17:;
wr(s->u,0,1,rd(s->u,68,1));
L_1803ed8fb_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,70,1)));
L_1803ed8fb_19:;
wr(s->u,2,1,(!rd(s->u,68,1)));
L_1803ed8fb_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ed8fb_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ed8fb_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ed8fb_23:;
wr(s->u,31,1,(rd(s->u,71,4)!=((U)UINT64_C(0x0))));
L_1803ed8fb_24:;
wr(s->u,32,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed8fb_25:;
wr(s->u,33,1,(!rd(s->u,31,1)));
L_1803ed8fb_26:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,519,1)));
L_1803ed8fb_27:;
wr(s->u,35,1,(rd(s->u,31,1)&rd(s->u,32,1)));
L_1803ed8fb_28:;
wr(s->r,519,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803ed8fb_29:;
wr(s->u,36,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ed8fb_30:;
wr(s->u,37,1,(!rd(s->u,31,1)));
L_1803ed8fb_31:;
wr(s->u,38,1,(rd(s->u,37,1)&rd(s->r,518,1)));
L_1803ed8fb_32:;
wr(s->u,39,1,(rd(s->u,31,1)&rd(s->u,36,1)));
L_1803ed8fb_33:;
wr(s->r,518,1,(rd(s->u,38,1)|rd(s->u,39,1)));
L_1803ed8fb_34:;
wr(s->u,40,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ed8fb_35:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803ed8fb_36:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803ed8fb_37:;
wr(s->u,50,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803ed8fb_38:;
wr(s->u,51,1,(!rd(s->u,31,1)));
L_1803ed8fb_39:;
wr(s->u,52,1,(rd(s->u,51,1)&rd(s->r,514,1)));
L_1803ed8fb_40:;
wr(s->u,53,1,(rd(s->u,31,1)&rd(s->u,50,1)));
L_1803ed8fb_41:;
wr(s->r,514,1,(rd(s->u,52,1)|rd(s->u,53,1)));
L_1803ed8fb_42:;
/* 1803ed8ff: xor edx, edx */
L_1803ed8ff_0:;
L_1803ed8ff_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed8ff_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed8ff_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803ed8ff_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ed8ff_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed8ff_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ed8ff_7:;
wr(s->u,25,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ed8ff_8:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803ed8ff_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803ed8ff_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803ed8ff_11:;
/* 1803ed901: call 0x18000d6a6 */
L_1803ed901_0:;
L_1803ed901_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed901_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed906)));
L_1803ed901_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803ed901_4:;
return UINT64_C(0x1803ed906);
}
uint64_t b_1803ed906(CPU*s){
/* 1803ed906: mov rcx, qword ptr [rbp + 0x20] */
L_1803ed906_0:;
L_1803ed906_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x20))));
L_1803ed906_2:;
wr(s->u,13,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803ed906_3:;
wr(s->r,8,8,rd(s->u,13,8));
L_1803ed906_4:;
/* 1803ed90a: mov r8, rbx */
L_1803ed90a_0:;
L_1803ed90a_1:;
wr(s->r,128,8,rd(s->r,24,8));
L_1803ed90a_2:;
/* 1803ed90d: shl r8, 2 */
L_1803ed90d_0:;
L_1803ed90d_1:;
wr(s->u,61,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803ed90d_2:;
wr(s->u,65,8,rd(s->r,128,8));
L_1803ed90d_3:;
wr(s->r,128,8,((rd(s->u,61,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,61,4))));
L_1803ed90d_4:;
wr(s->u,44,1,(rd(s->u,61,4)==((U)UINT64_C(0x0))));
L_1803ed90d_5:;
wr(s->u,45,4,(rd(s->u,61,4)-((U)UINT64_C(0x1))));
L_1803ed90d_6:;
wr(s->u,49,8,((rd(s->u,45,4)>=64)?0:(rd(s->u,65,8)<<rd(s->u,45,4))));
L_1803ed90d_7:;
wr(s->u,57,1,(sx(rd(s->u,49,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed90d_8:;
wr(s->u,0,1,rd(s->u,44,1));
L_1803ed90d_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ed90d_10:;
wr(s->u,2,1,(!rd(s->u,44,1)));
L_1803ed90d_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ed90d_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,57,1)));
L_1803ed90d_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ed90d_14:;
wr(s->u,58,1,(rd(s->u,61,4)==((U)UINT64_C(0x1))));
L_1803ed90d_15:;
wr(s->u,59,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed90d_16:;
wr(s->u,60,1,(rd(s->r,512,1)^rd(s->u,59,1)));
L_1803ed90d_17:;
wr(s->u,0,1,rd(s->u,58,1));
L_1803ed90d_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,60,1)));
L_1803ed90d_19:;
wr(s->u,2,1,(!rd(s->u,58,1)));
L_1803ed90d_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ed90d_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ed90d_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ed90d_23:;
wr(s->u,21,1,(rd(s->u,61,4)!=((U)UINT64_C(0x0))));
L_1803ed90d_24:;
wr(s->u,22,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed90d_25:;
wr(s->u,23,1,(!rd(s->u,21,1)));
L_1803ed90d_26:;
wr(s->u,24,1,(rd(s->u,23,1)&rd(s->r,519,1)));
L_1803ed90d_27:;
wr(s->u,25,1,(rd(s->u,21,1)&rd(s->u,22,1)));
L_1803ed90d_28:;
wr(s->r,519,1,(rd(s->u,24,1)|rd(s->u,25,1)));
L_1803ed90d_29:;
wr(s->u,26,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ed90d_30:;
wr(s->u,27,1,(!rd(s->u,21,1)));
L_1803ed90d_31:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,518,1)));
L_1803ed90d_32:;
wr(s->u,29,1,(rd(s->u,21,1)&rd(s->u,26,1)));
L_1803ed90d_33:;
wr(s->r,518,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803ed90d_34:;
wr(s->u,30,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ed90d_35:;
wr(s->u,38,1,pop(rd(s->u,30,8),8));
L_1803ed90d_36:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803ed90d_37:;
wr(s->u,40,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803ed90d_38:;
wr(s->u,41,1,(!rd(s->u,21,1)));
L_1803ed90d_39:;
wr(s->u,42,1,(rd(s->u,41,1)&rd(s->r,514,1)));
L_1803ed90d_40:;
wr(s->u,43,1,(rd(s->u,21,1)&rd(s->u,40,1)));
L_1803ed90d_41:;
wr(s->r,514,1,(rd(s->u,42,1)|rd(s->u,43,1)));
L_1803ed90d_42:;
/* 1803ed911: mov rdx, rdi */
L_1803ed911_0:;
L_1803ed911_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803ed911_2:;
/* 1803ed914: call 0x18000d550 */
L_1803ed914_0:;
L_1803ed914_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed914_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed919)));
L_1803ed914_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803ed914_4:;
return UINT64_C(0x1803ed919);
}
uint64_t b_1803ed919(CPU*s){
/* 1803ed919: movsxd r8, dword ptr [rsp + 0x50] */
L_1803ed919_0:;
L_1803ed919_1:;
wr(s->u,13,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ed919_2:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803ed919_3:;
wr(s->r,128,8,(U)sx(rd(s->u,21,4),4));
L_1803ed919_4:;
/* 1803ed91e: mov rcx, qword ptr [rbp + 0x28] */
L_1803ed91e_0:;
L_1803ed91e_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x28))));
L_1803ed91e_2:;
wr(s->u,25,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803ed91e_3:;
wr(s->r,8,8,rd(s->u,25,8));
L_1803ed91e_4:;
/* 1803ed922: shl r8, 2 */
L_1803ed922_0:;
L_1803ed922_1:;
wr(s->u,73,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803ed922_2:;
wr(s->u,77,8,rd(s->r,128,8));
L_1803ed922_3:;
wr(s->r,128,8,((rd(s->u,73,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,73,4))));
L_1803ed922_4:;
wr(s->u,56,1,(rd(s->u,73,4)==((U)UINT64_C(0x0))));
L_1803ed922_5:;
wr(s->u,57,4,(rd(s->u,73,4)-((U)UINT64_C(0x1))));
L_1803ed922_6:;
wr(s->u,61,8,((rd(s->u,57,4)>=64)?0:(rd(s->u,77,8)<<rd(s->u,57,4))));
L_1803ed922_7:;
wr(s->u,69,1,(sx(rd(s->u,61,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed922_8:;
wr(s->u,0,1,rd(s->u,56,1));
L_1803ed922_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ed922_10:;
wr(s->u,2,1,(!rd(s->u,56,1)));
L_1803ed922_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ed922_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,69,1)));
L_1803ed922_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ed922_14:;
wr(s->u,70,1,(rd(s->u,73,4)==((U)UINT64_C(0x1))));
L_1803ed922_15:;
wr(s->u,71,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed922_16:;
wr(s->u,72,1,(rd(s->r,512,1)^rd(s->u,71,1)));
L_1803ed922_17:;
wr(s->u,0,1,rd(s->u,70,1));
L_1803ed922_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,72,1)));
L_1803ed922_19:;
wr(s->u,2,1,(!rd(s->u,70,1)));
L_1803ed922_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ed922_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ed922_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ed922_23:;
wr(s->u,33,1,(rd(s->u,73,4)!=((U)UINT64_C(0x0))));
L_1803ed922_24:;
wr(s->u,34,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed922_25:;
wr(s->u,35,1,(!rd(s->u,33,1)));
L_1803ed922_26:;
wr(s->u,36,1,(rd(s->u,35,1)&rd(s->r,519,1)));
L_1803ed922_27:;
wr(s->u,37,1,(rd(s->u,33,1)&rd(s->u,34,1)));
L_1803ed922_28:;
wr(s->r,519,1,(rd(s->u,36,1)|rd(s->u,37,1)));
L_1803ed922_29:;
wr(s->u,38,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ed922_30:;
wr(s->u,39,1,(!rd(s->u,33,1)));
L_1803ed922_31:;
wr(s->u,40,1,(rd(s->u,39,1)&rd(s->r,518,1)));
L_1803ed922_32:;
wr(s->u,41,1,(rd(s->u,33,1)&rd(s->u,38,1)));
L_1803ed922_33:;
wr(s->r,518,1,(rd(s->u,40,1)|rd(s->u,41,1)));
L_1803ed922_34:;
wr(s->u,42,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ed922_35:;
wr(s->u,50,1,pop(rd(s->u,42,8),8));
L_1803ed922_36:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803ed922_37:;
wr(s->u,52,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803ed922_38:;
wr(s->u,53,1,(!rd(s->u,33,1)));
L_1803ed922_39:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,514,1)));
L_1803ed922_40:;
wr(s->u,55,1,(rd(s->u,33,1)&rd(s->u,52,1)));
L_1803ed922_41:;
wr(s->r,514,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1803ed922_42:;
/* 1803ed926: mov rdx, rsi */
L_1803ed926_0:;
L_1803ed926_1:;
wr(s->r,16,8,rd(s->r,48,8));
L_1803ed926_2:;
/* 1803ed929: call 0x18000d550 */
L_1803ed929_0:;
L_1803ed929_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed929_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed92e)));
L_1803ed929_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803ed929_4:;
return UINT64_C(0x1803ed92e);
}
uint64_t b_1803ed92e(CPU*s){
/* 1803ed92e: mov rcx, qword ptr [rbp + 0x10] */
L_1803ed92e_0:;
L_1803ed92e_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x10))));
L_1803ed92e_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed92e_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803ed92e_4:;
/* 1803ed932: mov rdx, qword ptr [rbp + 0x20] */
L_1803ed932_0:;
L_1803ed932_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x20))));
L_1803ed932_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed932_3:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803ed932_4:;
/* 1803ed936: mov rax, qword ptr [rcx] */
L_1803ed936_0:;
L_1803ed936_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803ed936_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803ed936_3:;
/* 1803ed939: call qword ptr [rax + 8] */
L_1803ed939_0:;
L_1803ed939_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803ed939_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed939_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803ed939_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed939_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed93c)));
L_1803ed939_6:;
return (uint64_t)rd(s->u,16,8);
L_1803ed939_7:;
return UINT64_C(0x1803ed93c);
}
uint64_t b_1803ed93c(CPU*s){
/* 1803ed93c: mov rcx, qword ptr [rbp + 0x10] */
L_1803ed93c_0:;
L_1803ed93c_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x10))));
L_1803ed93c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed93c_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803ed93c_4:;
/* 1803ed940: mov rdx, qword ptr [rbp + 0x28] */
L_1803ed940_0:;
L_1803ed940_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x28))));
L_1803ed940_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed940_3:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803ed940_4:;
/* 1803ed944: mov rax, qword ptr [rcx] */
L_1803ed944_0:;
L_1803ed944_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803ed944_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803ed944_3:;
/* 1803ed947: call qword ptr [rax + 8] */
L_1803ed947_0:;
L_1803ed947_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803ed947_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed947_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803ed947_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed947_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed94a)));
L_1803ed947_6:;
return (uint64_t)rd(s->u,16,8);
L_1803ed947_7:;
return UINT64_C(0x1803ed94a);
}
uint64_t b_1803ed94a(CPU*s){
/* 1803ed94a: mov rax, qword ptr [rbp] */
L_1803ed94a_0:;
L_1803ed94a_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,40,8),8));
L_1803ed94a_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803ed94a_3:;
/* 1803ed94e: mov r9, qword ptr [rbp + 0x30] */
L_1803ed94e_0:;
L_1803ed94e_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x30))));
L_1803ed94e_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed94e_3:;
wr(s->r,136,8,rd(s->u,8,8));
L_1803ed94e_4:;
/* 1803ed952: mov r8, qword ptr [rbp + 0x28] */
L_1803ed952_0:;
L_1803ed952_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x28))));
L_1803ed952_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed952_3:;
wr(s->r,128,8,rd(s->u,8,8));
L_1803ed952_4:;
/* 1803ed956: mov rdx, qword ptr [rbp + 0x20] */
L_1803ed956_0:;
L_1803ed956_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x20))));
L_1803ed956_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed956_3:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803ed956_4:;
/* 1803ed95a: mov rcx, rbp */
L_1803ed95a_0:;
L_1803ed95a_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803ed95a_2:;
/* 1803ed95d: call qword ptr [rax + 8] */
L_1803ed95d_0:;
L_1803ed95d_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803ed95d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed95d_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803ed95d_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed95d_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed960)));
L_1803ed95d_6:;
return (uint64_t)rd(s->u,16,8);
L_1803ed95d_7:;
return UINT64_C(0x1803ed960);
}
uint64_t b_1803ed960(CPU*s){
/* 1803ed960: mov rcx, qword ptr [rbp + 0x10] */
L_1803ed960_0:;
L_1803ed960_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x10))));
L_1803ed960_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed960_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803ed960_4:;
/* 1803ed964: mov rdx, qword ptr [rbp + 0x30] */
L_1803ed964_0:;
L_1803ed964_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x30))));
L_1803ed964_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed964_3:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803ed964_4:;
/* 1803ed968: mov rax, qword ptr [rcx] */
L_1803ed968_0:;
L_1803ed968_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803ed968_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803ed968_3:;
/* 1803ed96b: call qword ptr [rax + 0x10] */
L_1803ed96b_0:;
L_1803ed96b_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803ed96b_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed96b_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803ed96b_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed96b_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed96e)));
L_1803ed96b_6:;
return (uint64_t)rd(s->u,16,8);
L_1803ed96b_7:;
return UINT64_C(0x1803ed96e);
}
uint64_t b_1803ed96e(CPU*s){
/* 1803ed96e: mov rcx, qword ptr [rbp + 0x10] */
L_1803ed96e_0:;
L_1803ed96e_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x10))));
L_1803ed96e_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed96e_3:;
wr(s->r,8,8,rd(s->u,12,8));
L_1803ed96e_4:;
/* 1803ed972: mov r8d, dword ptr [rbp + 8] */
L_1803ed972_0:;
L_1803ed972_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803ed972_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed972_3:;
wr(s->r,128,4,rd(s->u,8,4));
L_1803ed972_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ed972_5:;
/* 1803ed976: mov rax, qword ptr [rcx] */
L_1803ed976_0:;
L_1803ed976_1:;
wr(s->u,12,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803ed976_2:;
wr(s->r,0,8,rd(s->u,12,8));
L_1803ed976_3:;
/* 1803ed979: mov rdx, qword ptr [rbp + 0x30] */
L_1803ed979_0:;
L_1803ed979_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x30))));
L_1803ed979_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed979_3:;
wr(s->r,16,8,rd(s->u,12,8));
L_1803ed979_4:;
/* 1803ed97d: call qword ptr [rax + 0x28] */
L_1803ed97d_0:;
L_1803ed97d_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x28))));
L_1803ed97d_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed97d_3:;
wr(s->u,20,8,rd(s->u,12,8));
L_1803ed97d_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed97d_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ed980)));
L_1803ed97d_6:;
return (uint64_t)rd(s->u,20,8);
L_1803ed97d_7:;
return UINT64_C(0x1803ed980);
}
uint64_t b_1803ed980(CPU*s){
/* 1803ed980: mov rbx, qword ptr [rsp + 0x30] */
L_1803ed980_0:;
L_1803ed980_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ed980_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed980_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ed980_4:;
/* 1803ed985: mov rbp, qword ptr [rsp + 0x38] */
L_1803ed985_0:;
L_1803ed985_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803ed985_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed985_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803ed985_4:;
/* 1803ed98a: mov rsi, qword ptr [rsp + 0x40] */
L_1803ed98a_0:;
L_1803ed98a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ed98a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ed98a_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803ed98a_4:;
/* 1803ed98f: xor eax, eax */
L_1803ed98f_0:;
L_1803ed98f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed98f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed98f_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ed98f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ed98f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed98f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ed98f_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ed98f_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803ed98f_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ed98f_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ed98f_11:;
/* 1803ed991: add rsp, 0x20 */
L_1803ed991_0:;
L_1803ed991_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ed991_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803ed991_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803ed991_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed991_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ed991_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ed991_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ed991_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ed991_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ed991_10:;
/* 1803ed995: pop rdi */
L_1803ed995_0:;
L_1803ed995_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ed995_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed995_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed995_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803ed995_5:;
/* 1803ed996: ret  */
L_1803ed996_0:;
L_1803ed996_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ed996_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ed996_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ed996_4:;
return UINT64_C(0x1803ed997);
}
uint64_t b_1803ed9a0(CPU*s){
/* 1803ed9a0: mov qword ptr [rsp + 0x20], rbp */
L_1803ed9a0_0:;
L_1803ed9a0_1:;
wr(s->u,24,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ed9a0_2:;
wr(s->u,36,8,rd(s->r,40,8));
L_1803ed9a0_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,36,8));
L_1803ed9a0_4:;
/* 1803ed9a5: push rsi */
L_1803ed9a5_0:;
L_1803ed9a5_1:;
wr(s->u,50,8,rd(s->r,48,8));
L_1803ed9a5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed9a5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,50,8));
L_1803ed9a5_4:;
/* 1803ed9a6: push r12 */
L_1803ed9a6_0:;
L_1803ed9a6_1:;
wr(s->u,50,8,rd(s->r,160,8));
L_1803ed9a6_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed9a6_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,50,8));
L_1803ed9a6_4:;
/* 1803ed9a8: push r14 */
L_1803ed9a8_0:;
L_1803ed9a8_1:;
wr(s->u,50,8,rd(s->r,176,8));
L_1803ed9a8_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ed9a8_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,50,8));
L_1803ed9a8_4:;
/* 1803ed9aa: movsxd rax, dword ptr [rcx + 8] */
L_1803ed9aa_0:;
L_1803ed9aa_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ed9aa_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed9aa_3:;
wr(s->r,0,8,(U)sx(rd(s->u,44,4),4));
L_1803ed9aa_4:;
/* 1803ed9ae: movss xmm0, dword ptr [rdx] */
L_1803ed9ae_0:;
L_1803ed9ae_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803ed9ae_2:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ed9ae_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ed9ae_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ed9ae_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ed9ae_6:;
/* 1803ed9b2: mov esi, 1 */
L_1803ed9b2_0:;
L_1803ed9b2_1:;
wr(s->r,48,8,((U)UINT64_C(0x1)));
L_1803ed9b2_2:;
/* 1803ed9b7: or r14d, 0xffffffff */
L_1803ed9b7_0:;
L_1803ed9b7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ed9b7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ed9b7_3:;
wr(s->r,176,4,(rd(s->r,176,4)|((U)UINT64_C(0xffffffff))));
L_1803ed9b7_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803ed9b7_5:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed9b7_6:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803ed9b7_7:;
wr(s->u,58,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803ed9b7_8:;
wr(s->u,62,1,pop(rd(s->u,58,4),4));
L_1803ed9b7_9:;
wr(s->u,63,1,(rd(s->u,62,1)&((U)UINT64_C(0x1))));
L_1803ed9b7_10:;
wr(s->r,514,1,(rd(s->u,63,1)==((U)UINT64_C(0x0))));
L_1803ed9b7_11:;
/* 1803ed9bb: mov rbp, rcx */
L_1803ed9bb_0:;
L_1803ed9bb_1:;
wr(s->r,40,8,rd(s->r,8,8));
L_1803ed9bb_2:;
/* 1803ed9be: lea r11, [rdx + rax*4] */
L_1803ed9be_0:;
L_1803ed9be_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803ed9be_2:;
wr(s->u,16,8,(rd(s->r,16,8)+rd(s->u,8,8)));
L_1803ed9be_3:;
wr(s->r,152,8,rd(s->u,16,8));
L_1803ed9be_4:;
/* 1803ed9c2: mulss xmm0, dword ptr [r8] */
L_1803ed9c2_0:;
L_1803ed9c2_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,128,8),4));
L_1803ed9c2_2:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,32,4),4),4));
L_1803ed9c2_3:;
/* 1803ed9c7: lea r10, [r8 + rax*4] */
L_1803ed9c7_0:;
L_1803ed9c7_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803ed9c7_2:;
wr(s->u,16,8,(rd(s->r,128,8)+rd(s->u,8,8)));
L_1803ed9c7_3:;
wr(s->r,144,8,rd(s->u,16,8));
L_1803ed9c7_4:;
/* 1803ed9cb: lea r12, [r9 + rax*4] */
L_1803ed9cb_0:;
L_1803ed9cb_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803ed9cb_2:;
wr(s->u,16,8,(rd(s->r,136,8)+rd(s->u,8,8)));
L_1803ed9cb_3:;
wr(s->r,160,8,rd(s->u,16,8));
L_1803ed9cb_4:;
/* 1803ed9cf: movss dword ptr [r9], xmm0 */
L_1803ed9cf_0:;
L_1803ed9cf_1:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ed9cf_2:;
mw((uint64_t)rd(s->r,136,8),4,rd(s->u,32,4));
L_1803ed9cf_3:;
/* 1803ed9d4: cmp dword ptr [rcx + 0xc], esi */
L_1803ed9d4_0:;
L_1803ed9d4_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ed9d4_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ed9d4_3:;
wr(s->u,64,4,rd(s->u,44,4));
L_1803ed9d4_4:;
wr(s->r,512,1,(rd(s->u,64,4)<rd(s->r,48,4)));
L_1803ed9d4_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,64,4),rd(s->r,48,4),4,1));
L_1803ed9d4_6:;
wr(s->u,68,4,(rd(s->u,64,4)-rd(s->r,48,4)));
L_1803ed9d4_7:;
wr(s->r,519,1,(sx(rd(s->u,68,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ed9d4_8:;
wr(s->r,518,1,(rd(s->u,68,4)==((U)UINT64_C(0x0))));
L_1803ed9d4_9:;
wr(s->u,58,4,(rd(s->u,68,4)&((U)UINT64_C(0xff))));
L_1803ed9d4_10:;
wr(s->u,62,1,pop(rd(s->u,58,4),4));
L_1803ed9d4_11:;
wr(s->u,63,1,(rd(s->u,62,1)&((U)UINT64_C(0x1))));
L_1803ed9d4_12:;
wr(s->r,514,1,(rd(s->u,63,1)==((U)UINT64_C(0x0))));
L_1803ed9d4_13:;
/* 1803ed9d7: jle 0x1803eda81 */
L_1803ed9d7_0:;
L_1803ed9d7_1:;
wr(s->u,48,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ed9d7_2:;
wr(s->u,49,1,((rd(s->r,518,1)!=0)||(rd(s->u,48,1)!=0)));
L_1803ed9d7_3:;
if(rd(s->u,49,1)){return UINT64_C(0x1803eda81);}
L_1803ed9d7_4:;
return UINT64_C(0x1803ed9dd);
}
uint64_t b_1803ed9dd(CPU*s){
/* 1803ed9dd: mov qword ptr [rsp + 0x20], rbx */
L_1803ed9dd_0:;
L_1803ed9dd_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ed9dd_2:;
wr(s->u,44,8,rd(s->r,24,8));
L_1803ed9dd_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,44,8));
L_1803ed9dd_4:;
/* 1803ed9e2: mov qword ptr [rsp + 0x28], rdi */
L_1803ed9e2_0:;
L_1803ed9e2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803ed9e2_2:;
wr(s->u,44,8,rd(s->r,56,8));
L_1803ed9e2_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,44,8));
L_1803ed9e2_4:;
/* 1803ed9e7: mov qword ptr [rsp + 0x30], r13 */
L_1803ed9e7_0:;
L_1803ed9e7_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ed9e7_2:;
wr(s->u,44,8,rd(s->r,168,8));
L_1803ed9e7_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,44,8));
L_1803ed9e7_4:;
/* 1803ed9ec: mov r13, r9 */
L_1803ed9ec_0:;
L_1803ed9ec_1:;
wr(s->r,168,8,rd(s->r,136,8));
L_1803ed9ec_2:;
/* 1803ed9ef: mov rbx, r11 */
L_1803ed9ef_0:;
L_1803ed9ef_1:;
wr(s->r,24,8,rd(s->r,152,8));
L_1803ed9ef_2:;
/* 1803ed9f2: mov rdi, rdx */
L_1803ed9f2_0:;
L_1803ed9f2_1:;
wr(s->r,56,8,rd(s->r,16,8));
L_1803ed9f2_2:;
/* 1803ed9f5: sub r12, r10 */
L_1803ed9f5_0:;
L_1803ed9f5_1:;
wr(s->r,512,1,(rd(s->r,160,8)<rd(s->r,144,8)));
L_1803ed9f5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),rd(s->r,144,8),8,1));
L_1803ed9f5_3:;
wr(s->r,160,8,(rd(s->r,160,8)-rd(s->r,144,8)));
L_1803ed9f5_4:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed9f5_5:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803ed9f5_6:;
wr(s->u,52,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803ed9f5_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803ed9f5_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803ed9f5_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803ed9f5_10:;
/* 1803ed9f8: sub r13, r8 */
L_1803ed9f8_0:;
L_1803ed9f8_1:;
wr(s->r,512,1,(rd(s->r,168,8)<rd(s->r,128,8)));
L_1803ed9f8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,8),rd(s->r,128,8),8,1));
L_1803ed9f8_3:;
wr(s->r,168,8,(rd(s->r,168,8)-rd(s->r,128,8)));
L_1803ed9f8_4:;
wr(s->r,519,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed9f8_5:;
wr(s->r,518,1,(rd(s->r,168,8)==((U)UINT64_C(0x0))));
L_1803ed9f8_6:;
wr(s->u,52,8,(rd(s->r,168,8)&((U)UINT64_C(0xff))));
L_1803ed9f8_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803ed9f8_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803ed9f8_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803ed9f8_10:;
/* 1803ed9fb: sub rbx, r10 */
L_1803ed9fb_0:;
L_1803ed9fb_1:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->r,144,8)));
L_1803ed9fb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->r,144,8),8,1));
L_1803ed9fb_3:;
wr(s->r,24,8,(rd(s->r,24,8)-rd(s->r,144,8)));
L_1803ed9fb_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed9fb_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803ed9fb_6:;
wr(s->u,52,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803ed9fb_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803ed9fb_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803ed9fb_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803ed9fb_10:;
/* 1803ed9fe: lea rax, [r8 + 4] */
L_1803ed9fe_0:;
L_1803ed9fe_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803ed9fe_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803ed9fe_3:;
/* 1803eda02: lea rcx, [r10 - 4] */
L_1803eda02_0:;
L_1803eda02_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803eda02_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803eda02_3:;
/* 1803eda06: sub rdi, r8 */
L_1803eda06_0:;
L_1803eda06_1:;
wr(s->r,512,1,(rd(s->r,56,8)<rd(s->r,128,8)));
L_1803eda06_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),rd(s->r,128,8),8,1));
L_1803eda06_3:;
wr(s->r,56,8,(rd(s->r,56,8)-rd(s->r,128,8)));
L_1803eda06_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eda06_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803eda06_6:;
wr(s->u,52,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803eda06_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803eda06_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803eda06_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803eda06_10:;
/* 1803eda09: nop dword ptr [rax] */
L_1803eda09_0:;
L_1803eda09_1:;
/* 1803eda10: movss xmm1, dword ptr [rax] */
L_1803eda10_0:;
L_1803eda10_1:;
wr(s->u,40,4,mr((uint64_t)rd(s->r,0,8),4));
L_1803eda10_2:;
wr(s->r,4672,4,rd(s->u,40,4));
L_1803eda10_3:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803eda10_4:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803eda10_5:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803eda10_6:;
/* 1803eda14: movss xmm0, dword ptr [rcx] */
L_1803eda14_0:;
L_1803eda14_1:;
wr(s->u,40,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803eda14_2:;
wr(s->r,4608,4,rd(s->u,40,4));
L_1803eda14_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803eda14_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803eda14_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803eda14_6:;
/* 1803eda18: movd xmm3, r14d */
L_1803eda18_0:;
L_1803eda18_1:;
wr(s->r,4800,16,rd(s->r,176,4));
L_1803eda18_2:;
/* 1803eda1d: inc esi */
L_1803eda1d_0:;
L_1803eda1d_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),((U)UINT64_C(0x1)),4,0));
L_1803eda1d_2:;
wr(s->r,48,4,(rd(s->r,48,4)+((U)UINT64_C(0x1))));
L_1803eda1d_3:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803eda1d_4:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eda1d_5:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803eda1d_6:;
wr(s->u,52,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803eda1d_7:;
wr(s->u,60,1,pop(rd(s->u,52,4),4));
L_1803eda1d_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803eda1d_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803eda1d_10:;
/* 1803eda1f: sub rcx, 4 */
L_1803eda1f_0:;
L_1803eda1f_1:;
wr(s->r,512,1,(rd(s->r,8,8)<((U)UINT64_C(0x4))));
L_1803eda1f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x4)),8,1));
L_1803eda1f_3:;
wr(s->r,8,8,(rd(s->r,8,8)-((U)UINT64_C(0x4))));
L_1803eda1f_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eda1f_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803eda1f_6:;
wr(s->u,52,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803eda1f_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803eda1f_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803eda1f_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803eda1f_10:;
/* 1803eda23: neg r14d */
L_1803eda23_0:;
L_1803eda23_1:;
wr(s->r,512,1,(rd(s->r,176,4)!=((U)UINT64_C(0x0))));
L_1803eda23_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,176,4),4,1));
L_1803eda23_3:;
wr(s->r,176,4,(-rd(s->r,176,4)));
L_1803eda23_4:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eda23_5:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803eda23_6:;
wr(s->u,52,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803eda23_7:;
wr(s->u,60,1,pop(rd(s->u,52,4),4));
L_1803eda23_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803eda23_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803eda23_10:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803eda23_11:;
/* 1803eda26: add rax, 4 */
L_1803eda26_0:;
L_1803eda26_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803eda26_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x4)),8,0));
L_1803eda26_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x4))));
L_1803eda26_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eda26_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803eda26_6:;
wr(s->u,52,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803eda26_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803eda26_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803eda26_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803eda26_10:;
/* 1803eda2a: mulss xmm0, dword ptr [rbx + rcx + 4] */
L_1803eda2a_0:;
L_1803eda2a_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,24,8)));
L_1803eda2a_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803eda2a_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803eda2a_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803eda2a_5:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,40,4),4),4));
L_1803eda2a_6:;
/* 1803eda30: mulss xmm1, dword ptr [rdi + rax - 4] */
L_1803eda30_0:;
L_1803eda30_1:;
wr(s->u,16,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,56,8)));
L_1803eda30_2:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803eda30_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803eda30_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803eda30_5:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,40,4),4),4));
L_1803eda30_6:;
/* 1803eda36: cvtdq2ps xmm3, xmm3 */
L_1803eda36_0:;
L_1803eda36_1:;
wr(s->r,4800,4,fb((double)sx(rd(s->r,4800,4),4),4));
L_1803eda36_2:;
wr(s->r,4804,4,fb((double)sx(rd(s->r,4804,4),4),4));
L_1803eda36_3:;
wr(s->r,4808,4,fb((double)sx(rd(s->r,4808,4),4),4));
L_1803eda36_4:;
wr(s->r,4812,4,fb((double)sx(rd(s->r,4812,4),4),4));
L_1803eda36_5:;
/* 1803eda39: addss xmm1, xmm0 */
L_1803eda39_0:;
L_1803eda39_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803eda39_2:;
/* 1803eda3d: mulss xmm1, xmm3 */
L_1803eda3d_0:;
L_1803eda3d_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803eda3d_2:;
/* 1803eda41: movss dword ptr [r13 + rax - 4], xmm1 */
L_1803eda41_0:;
L_1803eda41_1:;
wr(s->u,16,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,168,8)));
L_1803eda41_2:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803eda41_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803eda41_4:;
wr(s->u,40,4,rd(s->r,4672,4));
L_1803eda41_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803eda41_6:;
/* 1803eda48: movss xmm2, dword ptr [rbx + rcx + 4] */
L_1803eda48_0:;
L_1803eda48_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,24,8)));
L_1803eda48_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803eda48_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803eda48_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803eda48_5:;
wr(s->r,4736,4,rd(s->u,40,4));
L_1803eda48_6:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803eda48_7:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803eda48_8:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803eda48_9:;
/* 1803eda4e: movss xmm0, dword ptr [rcx + 4] */
L_1803eda4e_0:;
L_1803eda4e_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803eda4e_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eda4e_3:;
wr(s->r,4608,4,rd(s->u,40,4));
L_1803eda4e_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803eda4e_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803eda4e_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803eda4e_7:;
/* 1803eda53: mulss xmm2, dword ptr [rax - 4] */
L_1803eda53_0:;
L_1803eda53_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803eda53_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eda53_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,40,4),4),4));
L_1803eda53_4:;
/* 1803eda58: mulss xmm0, dword ptr [rdi + rax - 4] */
L_1803eda58_0:;
L_1803eda58_1:;
wr(s->u,16,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,56,8)));
L_1803eda58_2:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803eda58_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803eda58_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803eda58_5:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,40,4),4),4));
L_1803eda58_6:;
/* 1803eda5e: subss xmm2, xmm0 */
L_1803eda5e_0:;
L_1803eda5e_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803eda5e_2:;
/* 1803eda62: mulss xmm2, xmm3 */
L_1803eda62_0:;
L_1803eda62_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803eda62_2:;
return UINT64_C(0x1803eda66);
}
uint64_t b_1803eda10(CPU*s){
/* 1803eda10: movss xmm1, dword ptr [rax] */
L_1803eda10_0:;
L_1803eda10_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,0,8),4));
L_1803eda10_2:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803eda10_3:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803eda10_4:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803eda10_5:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803eda10_6:;
/* 1803eda14: movss xmm0, dword ptr [rcx] */
L_1803eda14_0:;
L_1803eda14_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803eda14_2:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803eda14_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803eda14_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803eda14_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803eda14_6:;
/* 1803eda18: movd xmm3, r14d */
L_1803eda18_0:;
L_1803eda18_1:;
wr(s->r,4800,16,rd(s->r,176,4));
L_1803eda18_2:;
/* 1803eda1d: inc esi */
L_1803eda1d_0:;
L_1803eda1d_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),((U)UINT64_C(0x1)),4,0));
L_1803eda1d_2:;
wr(s->r,48,4,(rd(s->r,48,4)+((U)UINT64_C(0x1))));
L_1803eda1d_3:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803eda1d_4:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eda1d_5:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803eda1d_6:;
wr(s->u,37,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803eda1d_7:;
wr(s->u,45,1,pop(rd(s->u,37,4),4));
L_1803eda1d_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803eda1d_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803eda1d_10:;
/* 1803eda1f: sub rcx, 4 */
L_1803eda1f_0:;
L_1803eda1f_1:;
wr(s->r,512,1,(rd(s->r,8,8)<((U)UINT64_C(0x4))));
L_1803eda1f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x4)),8,1));
L_1803eda1f_3:;
wr(s->r,8,8,(rd(s->r,8,8)-((U)UINT64_C(0x4))));
L_1803eda1f_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eda1f_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803eda1f_6:;
wr(s->u,37,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803eda1f_7:;
wr(s->u,45,1,pop(rd(s->u,37,8),8));
L_1803eda1f_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803eda1f_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803eda1f_10:;
/* 1803eda23: neg r14d */
L_1803eda23_0:;
L_1803eda23_1:;
wr(s->r,512,1,(rd(s->r,176,4)!=((U)UINT64_C(0x0))));
L_1803eda23_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,176,4),4,1));
L_1803eda23_3:;
wr(s->r,176,4,(-rd(s->r,176,4)));
L_1803eda23_4:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eda23_5:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803eda23_6:;
wr(s->u,37,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803eda23_7:;
wr(s->u,45,1,pop(rd(s->u,37,4),4));
L_1803eda23_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803eda23_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803eda23_10:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803eda23_11:;
/* 1803eda26: add rax, 4 */
L_1803eda26_0:;
L_1803eda26_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803eda26_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x4)),8,0));
L_1803eda26_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x4))));
L_1803eda26_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eda26_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803eda26_6:;
wr(s->u,37,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803eda26_7:;
wr(s->u,45,1,pop(rd(s->u,37,8),8));
L_1803eda26_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803eda26_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803eda26_10:;
/* 1803eda2a: mulss xmm0, dword ptr [rbx + rcx + 4] */
L_1803eda2a_0:;
L_1803eda2a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x4))+rd(s->r,24,8)));
L_1803eda2a_2:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803eda2a_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803eda2a_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803eda2a_5:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,32,4),4),4));
L_1803eda2a_6:;
/* 1803eda30: mulss xmm1, dword ptr [rdi + rax - 4] */
L_1803eda30_0:;
L_1803eda30_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,56,8)));
L_1803eda30_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803eda30_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803eda30_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803eda30_5:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,32,4),4),4));
L_1803eda30_6:;
/* 1803eda36: cvtdq2ps xmm3, xmm3 */
L_1803eda36_0:;
L_1803eda36_1:;
wr(s->r,4800,4,fb((double)sx(rd(s->r,4800,4),4),4));
L_1803eda36_2:;
wr(s->r,4804,4,fb((double)sx(rd(s->r,4804,4),4),4));
L_1803eda36_3:;
wr(s->r,4808,4,fb((double)sx(rd(s->r,4808,4),4),4));
L_1803eda36_4:;
wr(s->r,4812,4,fb((double)sx(rd(s->r,4812,4),4),4));
L_1803eda36_5:;
/* 1803eda39: addss xmm1, xmm0 */
L_1803eda39_0:;
L_1803eda39_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803eda39_2:;
/* 1803eda3d: mulss xmm1, xmm3 */
L_1803eda3d_0:;
L_1803eda3d_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803eda3d_2:;
/* 1803eda41: movss dword ptr [r13 + rax - 4], xmm1 */
L_1803eda41_0:;
L_1803eda41_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,168,8)));
L_1803eda41_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803eda41_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803eda41_4:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803eda41_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803eda41_6:;
/* 1803eda48: movss xmm2, dword ptr [rbx + rcx + 4] */
L_1803eda48_0:;
L_1803eda48_1:;
wr(s->u,8,8,(((U)UINT64_C(0x4))+rd(s->r,24,8)));
L_1803eda48_2:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803eda48_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803eda48_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803eda48_5:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803eda48_6:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803eda48_7:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803eda48_8:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803eda48_9:;
/* 1803eda4e: movss xmm0, dword ptr [rcx + 4] */
L_1803eda4e_0:;
L_1803eda4e_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803eda4e_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eda4e_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803eda4e_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803eda4e_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803eda4e_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803eda4e_7:;
/* 1803eda53: mulss xmm2, dword ptr [rax - 4] */
L_1803eda53_0:;
L_1803eda53_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803eda53_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eda53_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,32,4),4),4));
L_1803eda53_4:;
/* 1803eda58: mulss xmm0, dword ptr [rdi + rax - 4] */
L_1803eda58_0:;
L_1803eda58_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,56,8)));
L_1803eda58_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803eda58_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803eda58_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803eda58_5:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,32,4),4),4));
L_1803eda58_6:;
/* 1803eda5e: subss xmm2, xmm0 */
L_1803eda5e_0:;
L_1803eda5e_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803eda5e_2:;
/* 1803eda62: mulss xmm2, xmm3 */
L_1803eda62_0:;
L_1803eda62_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803eda62_2:;
/* 1803eda66: movss dword ptr [r12 + rcx + 4], xmm2 */
L_1803eda66_0:;
L_1803eda66_1:;
wr(s->u,8,8,(((U)UINT64_C(0x4))+rd(s->r,160,8)));
L_1803eda66_2:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803eda66_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803eda66_4:;
wr(s->u,32,4,rd(s->r,4736,4));
L_1803eda66_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803eda66_6:;
/* 1803eda6d: cmp esi, dword ptr [rbp + 0xc] */
L_1803eda6d_0:;
L_1803eda6d_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0xc))));
L_1803eda6d_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eda6d_3:;
wr(s->u,47,4,rd(s->u,32,4));
L_1803eda6d_4:;
wr(s->r,512,1,(rd(s->r,48,4)<rd(s->u,47,4)));
L_1803eda6d_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),rd(s->u,47,4),4,1));
L_1803eda6d_6:;
wr(s->u,51,4,(rd(s->r,48,4)-rd(s->u,47,4)));
L_1803eda6d_7:;
wr(s->r,519,1,(sx(rd(s->u,51,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eda6d_8:;
wr(s->r,518,1,(rd(s->u,51,4)==((U)UINT64_C(0x0))));
L_1803eda6d_9:;
wr(s->u,37,4,(rd(s->u,51,4)&((U)UINT64_C(0xff))));
L_1803eda6d_10:;
wr(s->u,45,1,pop(rd(s->u,37,4),4));
L_1803eda6d_11:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803eda6d_12:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803eda6d_13:;
/* 1803eda70: jl 0x1803eda10 */
L_1803eda70_0:;
L_1803eda70_1:;
wr(s->u,36,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803eda70_2:;
if(rd(s->u,36,1)){goto L_1803eda10_0;}
L_1803eda70_3:;
return UINT64_C(0x1803eda72);
}
uint64_t b_1803eda66(CPU*s){
/* 1803eda66: movss dword ptr [r12 + rcx + 4], xmm2 */
L_1803eda66_0:;
L_1803eda66_1:;
wr(s->u,8,8,(((U)UINT64_C(0x4))+rd(s->r,160,8)));
L_1803eda66_2:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803eda66_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803eda66_4:;
wr(s->u,32,4,rd(s->r,4736,4));
L_1803eda66_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803eda66_6:;
/* 1803eda6d: cmp esi, dword ptr [rbp + 0xc] */
L_1803eda6d_0:;
L_1803eda6d_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0xc))));
L_1803eda6d_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eda6d_3:;
wr(s->u,43,4,rd(s->u,32,4));
L_1803eda6d_4:;
wr(s->r,512,1,(rd(s->r,48,4)<rd(s->u,43,4)));
L_1803eda6d_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),rd(s->u,43,4),4,1));
L_1803eda6d_6:;
wr(s->u,47,4,(rd(s->r,48,4)-rd(s->u,43,4)));
L_1803eda6d_7:;
wr(s->r,519,1,(sx(rd(s->u,47,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eda6d_8:;
wr(s->r,518,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803eda6d_9:;
wr(s->u,37,4,(rd(s->u,47,4)&((U)UINT64_C(0xff))));
L_1803eda6d_10:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803eda6d_11:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803eda6d_12:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803eda6d_13:;
/* 1803eda70: jl 0x1803eda10 */
L_1803eda70_0:;
L_1803eda70_1:;
wr(s->u,36,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803eda70_2:;
if(rd(s->u,36,1)){return UINT64_C(0x1803eda10);}
L_1803eda70_3:;
return UINT64_C(0x1803eda72);
}
uint64_t b_1803eda72(CPU*s){
/* 1803eda72: mov r13, qword ptr [rsp + 0x30] */
L_1803eda72_0:;
L_1803eda72_1:;
wr(s->u,21,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803eda72_2:;
wr(s->u,33,8,mr((uint64_t)rd(s->u,21,8),8));
L_1803eda72_3:;
wr(s->r,168,8,rd(s->u,33,8));
L_1803eda72_4:;
/* 1803eda77: mov rdi, qword ptr [rsp + 0x28] */
L_1803eda77_0:;
L_1803eda77_1:;
wr(s->u,21,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803eda77_2:;
wr(s->u,33,8,mr((uint64_t)rd(s->u,21,8),8));
L_1803eda77_3:;
wr(s->r,56,8,rd(s->u,33,8));
L_1803eda77_4:;
/* 1803eda7c: mov rbx, qword ptr [rsp + 0x20] */
L_1803eda7c_0:;
L_1803eda7c_1:;
wr(s->u,21,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803eda7c_2:;
wr(s->u,33,8,mr((uint64_t)rd(s->u,21,8),8));
L_1803eda7c_3:;
wr(s->r,24,8,rd(s->u,33,8));
L_1803eda7c_4:;
/* 1803eda81: mov rbp, qword ptr [rsp + 0x38] */
L_1803eda81_0:;
L_1803eda81_1:;
wr(s->u,21,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803eda81_2:;
wr(s->u,33,8,mr((uint64_t)rd(s->u,21,8),8));
L_1803eda81_3:;
wr(s->r,40,8,rd(s->u,33,8));
L_1803eda81_4:;
/* 1803eda86: movsxd rax, esi */
L_1803eda86_0:;
L_1803eda86_1:;
wr(s->r,0,8,(U)sx(rd(s->r,48,4),4));
L_1803eda86_2:;
/* 1803eda89: shl rax, 2 */
L_1803eda89_0:;
L_1803eda89_1:;
wr(s->u,99,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803eda89_2:;
wr(s->u,103,8,rd(s->r,0,8));
L_1803eda89_3:;
wr(s->r,0,8,((rd(s->u,99,4)>=64)?0:(rd(s->r,0,8)<<rd(s->u,99,4))));
L_1803eda89_4:;
wr(s->u,74,1,(rd(s->u,99,4)==((U)UINT64_C(0x0))));
L_1803eda89_5:;
wr(s->u,75,4,(rd(s->u,99,4)-((U)UINT64_C(0x1))));
L_1803eda89_6:;
wr(s->u,79,8,((rd(s->u,75,4)>=64)?0:(rd(s->u,103,8)<<rd(s->u,75,4))));
L_1803eda89_7:;
wr(s->u,87,1,(sx(rd(s->u,79,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eda89_8:;
wr(s->u,0,1,rd(s->u,74,1));
L_1803eda89_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803eda89_10:;
wr(s->u,2,1,(!rd(s->u,74,1)));
L_1803eda89_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803eda89_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,87,1)));
L_1803eda89_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803eda89_14:;
wr(s->u,88,1,(rd(s->u,99,4)==((U)UINT64_C(0x1))));
L_1803eda89_15:;
wr(s->u,89,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eda89_16:;
wr(s->u,90,1,(rd(s->r,512,1)^rd(s->u,89,1)));
L_1803eda89_17:;
wr(s->u,0,1,rd(s->u,88,1));
L_1803eda89_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,90,1)));
L_1803eda89_19:;
wr(s->u,2,1,(!rd(s->u,88,1)));
L_1803eda89_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803eda89_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803eda89_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803eda89_23:;
wr(s->u,51,1,(rd(s->u,99,4)!=((U)UINT64_C(0x0))));
L_1803eda89_24:;
wr(s->u,52,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eda89_25:;
wr(s->u,53,1,(!rd(s->u,51,1)));
L_1803eda89_26:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,519,1)));
L_1803eda89_27:;
wr(s->u,55,1,(rd(s->u,51,1)&rd(s->u,52,1)));
L_1803eda89_28:;
wr(s->r,519,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1803eda89_29:;
wr(s->u,56,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803eda89_30:;
wr(s->u,57,1,(!rd(s->u,51,1)));
L_1803eda89_31:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,518,1)));
L_1803eda89_32:;
wr(s->u,59,1,(rd(s->u,51,1)&rd(s->u,56,1)));
L_1803eda89_33:;
wr(s->r,518,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803eda89_34:;
wr(s->u,60,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803eda89_35:;
wr(s->u,68,1,pop(rd(s->u,60,8),8));
L_1803eda89_36:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803eda89_37:;
wr(s->u,70,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803eda89_38:;
wr(s->u,71,1,(!rd(s->u,51,1)));
L_1803eda89_39:;
wr(s->u,72,1,(rd(s->u,71,1)&rd(s->r,514,1)));
L_1803eda89_40:;
wr(s->u,73,1,(rd(s->u,51,1)&rd(s->u,70,1)));
L_1803eda89_41:;
wr(s->r,514,1,(rd(s->u,72,1)|rd(s->u,73,1)));
L_1803eda89_42:;
/* 1803eda8d: sub r10, rax */
L_1803eda8d_0:;
L_1803eda8d_1:;
wr(s->r,512,1,(rd(s->r,144,8)<rd(s->r,0,8)));
L_1803eda8d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->r,0,8),8,1));
L_1803eda8d_3:;
wr(s->r,144,8,(rd(s->r,144,8)-rd(s->r,0,8)));
L_1803eda8d_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eda8d_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803eda8d_6:;
wr(s->u,41,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803eda8d_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803eda8d_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803eda8d_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803eda8d_10:;
/* 1803eda90: sub r11, rax */
L_1803eda90_0:;
L_1803eda90_1:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->r,0,8)));
L_1803eda90_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->r,0,8),8,1));
L_1803eda90_3:;
wr(s->r,152,8,(rd(s->r,152,8)-rd(s->r,0,8)));
L_1803eda90_4:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eda90_5:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803eda90_6:;
wr(s->u,41,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803eda90_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803eda90_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803eda90_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803eda90_10:;
/* 1803eda93: movss xmm1, dword ptr [rax + rdx] */
L_1803eda93_0:;
L_1803eda93_1:;
wr(s->u,5,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803eda93_2:;
wr(s->u,13,8,(rd(s->r,0,8)+rd(s->u,5,8)));
L_1803eda93_3:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803eda93_4:;
wr(s->r,4672,4,rd(s->u,29,4));
L_1803eda93_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803eda93_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803eda93_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803eda93_8:;
/* 1803eda98: movss xmm0, dword ptr [r10] */
L_1803eda98_0:;
L_1803eda98_1:;
wr(s->u,29,4,mr((uint64_t)rd(s->r,144,8),4));
L_1803eda98_2:;
wr(s->r,4608,4,rd(s->u,29,4));
L_1803eda98_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803eda98_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803eda98_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803eda98_6:;
/* 1803eda9d: mulss xmm1, dword ptr [rax + r8] */
L_1803eda9d_0:;
L_1803eda9d_1:;
wr(s->u,5,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803eda9d_2:;
wr(s->u,13,8,(rd(s->r,0,8)+rd(s->u,5,8)));
L_1803eda9d_3:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803eda9d_4:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,29,4),4),4));
L_1803eda9d_5:;
/* 1803edaa3: mulss xmm0, dword ptr [r11] */
L_1803edaa3_0:;
L_1803edaa3_1:;
wr(s->u,29,4,mr((uint64_t)rd(s->r,152,8),4));
L_1803edaa3_2:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,29,4),4),4));
L_1803edaa3_3:;
/* 1803edaa8: addss xmm1, xmm0 */
L_1803edaa8_0:;
L_1803edaa8_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803edaa8_2:;
/* 1803edaac: movss dword ptr [rax + r9], xmm1 */
L_1803edaac_0:;
L_1803edaac_1:;
wr(s->u,5,8,(rd(s->r,136,8)*((U)UINT64_C(0x1))));
L_1803edaac_2:;
wr(s->u,13,8,(rd(s->r,0,8)+rd(s->u,5,8)));
L_1803edaac_3:;
wr(s->u,29,4,rd(s->r,4672,4));
L_1803edaac_4:;
mw((uint64_t)rd(s->u,13,8),4,rd(s->u,29,4));
L_1803edaac_5:;
/* 1803edab2: xor eax, eax */
L_1803edab2_0:;
L_1803edab2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edab2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edab2_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803edab2_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edab2_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edab2_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edab2_7:;
wr(s->u,41,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edab2_8:;
wr(s->u,49,1,pop(rd(s->u,41,4),4));
L_1803edab2_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803edab2_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803edab2_11:;
/* 1803edab4: pop r14 */
L_1803edab4_0:;
L_1803edab4_1:;
wr(s->u,91,8,((U)UINT64_C(0x0)));
L_1803edab4_2:;
wr(s->u,91,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edab4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edab4_4:;
wr(s->r,176,8,rd(s->u,91,8));
L_1803edab4_5:;
/* 1803edab6: pop r12 */
L_1803edab6_0:;
L_1803edab6_1:;
wr(s->u,91,8,((U)UINT64_C(0x0)));
L_1803edab6_2:;
wr(s->u,91,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edab6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edab6_4:;
wr(s->r,160,8,rd(s->u,91,8));
L_1803edab6_5:;
/* 1803edab8: pop rsi */
L_1803edab8_0:;
L_1803edab8_1:;
wr(s->u,91,8,((U)UINT64_C(0x0)));
L_1803edab8_2:;
wr(s->u,91,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edab8_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edab8_4:;
wr(s->r,48,8,rd(s->u,91,8));
L_1803edab8_5:;
/* 1803edab9: ret  */
L_1803edab9_0:;
L_1803edab9_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edab9_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edab9_3:;
return (uint64_t)rd(s->r,648,8);
L_1803edab9_4:;
return UINT64_C(0x1803edaba);
}
uint64_t b_1803eda81(CPU*s){
/* 1803eda81: mov rbp, qword ptr [rsp + 0x38] */
L_1803eda81_0:;
L_1803eda81_1:;
wr(s->u,21,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803eda81_2:;
wr(s->u,33,8,mr((uint64_t)rd(s->u,21,8),8));
L_1803eda81_3:;
wr(s->r,40,8,rd(s->u,33,8));
L_1803eda81_4:;
/* 1803eda86: movsxd rax, esi */
L_1803eda86_0:;
L_1803eda86_1:;
wr(s->r,0,8,(U)sx(rd(s->r,48,4),4));
L_1803eda86_2:;
/* 1803eda89: shl rax, 2 */
L_1803eda89_0:;
L_1803eda89_1:;
wr(s->u,99,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803eda89_2:;
wr(s->u,103,8,rd(s->r,0,8));
L_1803eda89_3:;
wr(s->r,0,8,((rd(s->u,99,4)>=64)?0:(rd(s->r,0,8)<<rd(s->u,99,4))));
L_1803eda89_4:;
wr(s->u,74,1,(rd(s->u,99,4)==((U)UINT64_C(0x0))));
L_1803eda89_5:;
wr(s->u,75,4,(rd(s->u,99,4)-((U)UINT64_C(0x1))));
L_1803eda89_6:;
wr(s->u,79,8,((rd(s->u,75,4)>=64)?0:(rd(s->u,103,8)<<rd(s->u,75,4))));
L_1803eda89_7:;
wr(s->u,87,1,(sx(rd(s->u,79,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eda89_8:;
wr(s->u,0,1,rd(s->u,74,1));
L_1803eda89_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803eda89_10:;
wr(s->u,2,1,(!rd(s->u,74,1)));
L_1803eda89_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803eda89_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,87,1)));
L_1803eda89_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803eda89_14:;
wr(s->u,88,1,(rd(s->u,99,4)==((U)UINT64_C(0x1))));
L_1803eda89_15:;
wr(s->u,89,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eda89_16:;
wr(s->u,90,1,(rd(s->r,512,1)^rd(s->u,89,1)));
L_1803eda89_17:;
wr(s->u,0,1,rd(s->u,88,1));
L_1803eda89_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,90,1)));
L_1803eda89_19:;
wr(s->u,2,1,(!rd(s->u,88,1)));
L_1803eda89_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803eda89_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803eda89_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803eda89_23:;
wr(s->u,51,1,(rd(s->u,99,4)!=((U)UINT64_C(0x0))));
L_1803eda89_24:;
wr(s->u,52,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eda89_25:;
wr(s->u,53,1,(!rd(s->u,51,1)));
L_1803eda89_26:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,519,1)));
L_1803eda89_27:;
wr(s->u,55,1,(rd(s->u,51,1)&rd(s->u,52,1)));
L_1803eda89_28:;
wr(s->r,519,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1803eda89_29:;
wr(s->u,56,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803eda89_30:;
wr(s->u,57,1,(!rd(s->u,51,1)));
L_1803eda89_31:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,518,1)));
L_1803eda89_32:;
wr(s->u,59,1,(rd(s->u,51,1)&rd(s->u,56,1)));
L_1803eda89_33:;
wr(s->r,518,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803eda89_34:;
wr(s->u,60,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803eda89_35:;
wr(s->u,68,1,pop(rd(s->u,60,8),8));
L_1803eda89_36:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803eda89_37:;
wr(s->u,70,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803eda89_38:;
wr(s->u,71,1,(!rd(s->u,51,1)));
L_1803eda89_39:;
wr(s->u,72,1,(rd(s->u,71,1)&rd(s->r,514,1)));
L_1803eda89_40:;
wr(s->u,73,1,(rd(s->u,51,1)&rd(s->u,70,1)));
L_1803eda89_41:;
wr(s->r,514,1,(rd(s->u,72,1)|rd(s->u,73,1)));
L_1803eda89_42:;
/* 1803eda8d: sub r10, rax */
L_1803eda8d_0:;
L_1803eda8d_1:;
wr(s->r,512,1,(rd(s->r,144,8)<rd(s->r,0,8)));
L_1803eda8d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->r,0,8),8,1));
L_1803eda8d_3:;
wr(s->r,144,8,(rd(s->r,144,8)-rd(s->r,0,8)));
L_1803eda8d_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eda8d_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803eda8d_6:;
wr(s->u,41,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803eda8d_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803eda8d_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803eda8d_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803eda8d_10:;
/* 1803eda90: sub r11, rax */
L_1803eda90_0:;
L_1803eda90_1:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->r,0,8)));
L_1803eda90_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->r,0,8),8,1));
L_1803eda90_3:;
wr(s->r,152,8,(rd(s->r,152,8)-rd(s->r,0,8)));
L_1803eda90_4:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eda90_5:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803eda90_6:;
wr(s->u,41,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803eda90_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803eda90_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803eda90_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803eda90_10:;
/* 1803eda93: movss xmm1, dword ptr [rax + rdx] */
L_1803eda93_0:;
L_1803eda93_1:;
wr(s->u,5,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803eda93_2:;
wr(s->u,13,8,(rd(s->r,0,8)+rd(s->u,5,8)));
L_1803eda93_3:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803eda93_4:;
wr(s->r,4672,4,rd(s->u,29,4));
L_1803eda93_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803eda93_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803eda93_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803eda93_8:;
/* 1803eda98: movss xmm0, dword ptr [r10] */
L_1803eda98_0:;
L_1803eda98_1:;
wr(s->u,29,4,mr((uint64_t)rd(s->r,144,8),4));
L_1803eda98_2:;
wr(s->r,4608,4,rd(s->u,29,4));
L_1803eda98_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803eda98_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803eda98_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803eda98_6:;
/* 1803eda9d: mulss xmm1, dword ptr [rax + r8] */
L_1803eda9d_0:;
L_1803eda9d_1:;
wr(s->u,5,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803eda9d_2:;
wr(s->u,13,8,(rd(s->r,0,8)+rd(s->u,5,8)));
L_1803eda9d_3:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803eda9d_4:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,29,4),4),4));
L_1803eda9d_5:;
/* 1803edaa3: mulss xmm0, dword ptr [r11] */
L_1803edaa3_0:;
L_1803edaa3_1:;
wr(s->u,29,4,mr((uint64_t)rd(s->r,152,8),4));
L_1803edaa3_2:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,29,4),4),4));
L_1803edaa3_3:;
/* 1803edaa8: addss xmm1, xmm0 */
L_1803edaa8_0:;
L_1803edaa8_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803edaa8_2:;
/* 1803edaac: movss dword ptr [rax + r9], xmm1 */
L_1803edaac_0:;
L_1803edaac_1:;
wr(s->u,5,8,(rd(s->r,136,8)*((U)UINT64_C(0x1))));
L_1803edaac_2:;
wr(s->u,13,8,(rd(s->r,0,8)+rd(s->u,5,8)));
L_1803edaac_3:;
wr(s->u,29,4,rd(s->r,4672,4));
L_1803edaac_4:;
mw((uint64_t)rd(s->u,13,8),4,rd(s->u,29,4));
L_1803edaac_5:;
/* 1803edab2: xor eax, eax */
L_1803edab2_0:;
L_1803edab2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edab2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edab2_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803edab2_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edab2_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edab2_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edab2_7:;
wr(s->u,41,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edab2_8:;
wr(s->u,49,1,pop(rd(s->u,41,4),4));
L_1803edab2_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803edab2_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803edab2_11:;
/* 1803edab4: pop r14 */
L_1803edab4_0:;
L_1803edab4_1:;
wr(s->u,91,8,((U)UINT64_C(0x0)));
L_1803edab4_2:;
wr(s->u,91,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edab4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edab4_4:;
wr(s->r,176,8,rd(s->u,91,8));
L_1803edab4_5:;
/* 1803edab6: pop r12 */
L_1803edab6_0:;
L_1803edab6_1:;
wr(s->u,91,8,((U)UINT64_C(0x0)));
L_1803edab6_2:;
wr(s->u,91,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edab6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edab6_4:;
wr(s->r,160,8,rd(s->u,91,8));
L_1803edab6_5:;
/* 1803edab8: pop rsi */
L_1803edab8_0:;
L_1803edab8_1:;
wr(s->u,91,8,((U)UINT64_C(0x0)));
L_1803edab8_2:;
wr(s->u,91,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edab8_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edab8_4:;
wr(s->r,48,8,rd(s->u,91,8));
L_1803edab8_5:;
/* 1803edab9: ret  */
L_1803edab9_0:;
L_1803edab9_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edab9_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edab9_3:;
return (uint64_t)rd(s->r,648,8);
L_1803edab9_4:;
return UINT64_C(0x1803edaba);
}
uint64_t b_1803edac0(CPU*s){
/* 1803edac0: mov qword ptr [rsp + 8], rbx */
L_1803edac0_0:;
L_1803edac0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803edac0_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803edac0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803edac0_4:;
/* 1803edac5: push rdi */
L_1803edac5_0:;
L_1803edac5_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803edac5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803edac5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803edac5_4:;
/* 1803edac6: sub rsp, 0x20 */
L_1803edac6_0:;
L_1803edac6_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803edac6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803edac6_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803edac6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edac6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803edac6_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803edac6_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803edac6_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803edac6_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803edac6_10:;
/* 1803edaca: mov ebx, edx */
L_1803edaca_0:;
L_1803edaca_1:;
wr(s->r,24,4,rd(s->r,16,4));
L_1803edaca_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803edaca_3:;
/* 1803edacc: mov rdi, rcx */
L_1803edacc_0:;
L_1803edacc_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803edacc_2:;
/* 1803edacf: call 0x1803ed850 */
L_1803edacf_0:;
L_1803edacf_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803edacf_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803edad4)));
L_1803edacf_3:;
return (uint64_t)UINT64_C(0x1803ed850);
L_1803edacf_4:;
return UINT64_C(0x1803edad4);
}
uint64_t b_1803edad4(CPU*s){
/* 1803edad4: test bl, 1 */
L_1803edad4_0:;
L_1803edad4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edad4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edad4_3:;
wr(s->u,3,1,(rd(s->r,24,1)&((U)UINT64_C(0x1))));
L_1803edad4_4:;
wr(s->r,519,1,(sx(rd(s->u,3,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803edad4_5:;
wr(s->r,518,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_1803edad4_6:;
wr(s->u,0,1,(rd(s->u,3,1)&((U)UINT64_C(0xff))));
L_1803edad4_7:;
wr(s->u,1,1,pop(rd(s->u,0,1),1));
L_1803edad4_8:;
wr(s->u,2,1,(rd(s->u,1,1)&((U)UINT64_C(0x1))));
L_1803edad4_9:;
wr(s->r,514,1,(rd(s->u,2,1)==((U)UINT64_C(0x0))));
L_1803edad4_10:;
/* 1803edad7: je 0x1803edae1 */
L_1803edad7_0:;
L_1803edad7_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803edae1);}
L_1803edad7_2:;
return UINT64_C(0x1803edad9);
}
uint64_t b_1803edad9(CPU*s){
/* 1803edad9: mov rcx, rdi */
L_1803edad9_0:;
L_1803edad9_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803edad9_2:;
/* 1803edadc: call 0x180003160 */
L_1803edadc_0:;
L_1803edadc_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803edadc_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803edae1)));
L_1803edadc_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803edadc_4:;
return UINT64_C(0x1803edae1);
}
uint64_t b_1803edae1(CPU*s){
/* 1803edae1: mov rax, rdi */
L_1803edae1_0:;
L_1803edae1_1:;
wr(s->r,0,8,rd(s->r,56,8));
L_1803edae1_2:;
/* 1803edae4: mov rbx, qword ptr [rsp + 0x30] */
L_1803edae4_0:;
L_1803edae4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803edae4_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edae4_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803edae4_4:;
/* 1803edae9: add rsp, 0x20 */
L_1803edae9_0:;
L_1803edae9_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803edae9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803edae9_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803edae9_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edae9_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803edae9_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803edae9_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803edae9_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803edae9_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803edae9_10:;
/* 1803edaed: pop rdi */
L_1803edaed_0:;
L_1803edaed_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803edaed_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edaed_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edaed_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803edaed_5:;
/* 1803edaee: ret  */
L_1803edaee_0:;
L_1803edaee_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edaee_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edaee_3:;
return (uint64_t)rd(s->r,648,8);
L_1803edaee_4:;
return UINT64_C(0x1803edaef);
}
uint64_t b_1803edaf0(CPU*s){
/* 1803edaf0: push rdi */
L_1803edaf0_0:;
L_1803edaf0_1:;
wr(s->u,20,8,rd(s->r,56,8));
L_1803edaf0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803edaf0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,20,8));
L_1803edaf0_4:;
/* 1803edaf2: sub rsp, 0x40 */
L_1803edaf2_0:;
L_1803edaf2_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x40))));
L_1803edaf2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,1));
L_1803edaf2_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x40))));
L_1803edaf2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edaf2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803edaf2_6:;
wr(s->u,28,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803edaf2_7:;
wr(s->u,36,1,pop(rd(s->u,28,8),8));
L_1803edaf2_8:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803edaf2_9:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803edaf2_10:;
/* 1803edaf6: mov qword ptr [rsp + 0x20], 0xfffffffffffffffe */
L_1803edaf6_0:;
L_1803edaf6_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803edaf6_2:;
wr(s->u,12,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803edaf6_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803edaf6_4:;
/* 1803edaff: mov qword ptr [rsp + 0x50], rbx */
L_1803edaff_0:;
L_1803edaff_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803edaff_2:;
wr(s->u,12,8,rd(s->r,24,8));
L_1803edaff_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803edaff_4:;
/* 1803edb04: mov qword ptr [rsp + 0x58], rbp */
L_1803edb04_0:;
L_1803edb04_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803edb04_2:;
wr(s->u,12,8,rd(s->r,40,8));
L_1803edb04_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803edb04_4:;
/* 1803edb09: mov qword ptr [rsp + 0x68], rsi */
L_1803edb09_0:;
L_1803edb09_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803edb09_2:;
wr(s->u,12,8,rd(s->r,48,8));
L_1803edb09_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803edb09_4:;
/* 1803edb0e: mov ebp, edx */
L_1803edb0e_0:;
L_1803edb0e_1:;
wr(s->r,40,4,rd(s->r,16,4));
L_1803edb0e_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803edb0e_3:;
/* 1803edb10: mov rsi, rcx */
L_1803edb10_0:;
L_1803edb10_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1803edb10_2:;
/* 1803edb13: xor edi, edi */
L_1803edb13_0:;
L_1803edb13_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edb13_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edb13_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803edb13_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803edb13_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edb13_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803edb13_7:;
wr(s->u,28,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803edb13_8:;
wr(s->u,36,1,pop(rd(s->u,28,4),4));
L_1803edb13_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803edb13_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803edb13_11:;
/* 1803edb15: mov dword ptr [rsp + 0x34], edi */
L_1803edb15_0:;
L_1803edb15_1:;
wr(s->u,0,8,(((U)UINT64_C(0x34))+rd(s->r,32,8)));
L_1803edb15_2:;
wr(s->u,8,4,rd(s->r,56,4));
L_1803edb15_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803edb15_4:;
/* 1803edb19: mov eax, 1 */
L_1803edb19_0:;
L_1803edb19_1:;
wr(s->r,0,8,((U)UINT64_C(0x1)));
L_1803edb19_2:;
/* 1803edb1e: cpuid  */
L_1803edb1e_0:;
L_1803edb1e_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803edb1e_2:;
wr(s->u,58,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edb1e_3:;
if(rd(s->u,58,1)){goto L_1803edb1e_36;}
L_1803edb1e_4:;
wr(s->u,59,1,(rd(s->r,0,4)==((U)UINT64_C(0x1))));
L_1803edb1e_5:;
if(rd(s->u,59,1)){goto L_1803edb1e_38;}
L_1803edb1e_6:;
wr(s->u,60,1,(rd(s->r,0,4)==((U)UINT64_C(0x2))));
L_1803edb1e_7:;
if(rd(s->u,60,1)){goto L_1803edb1e_40;}
L_1803edb1e_8:;
wr(s->u,61,1,(rd(s->r,0,4)==((U)UINT64_C(0x3))));
L_1803edb1e_9:;
if(rd(s->u,61,1)){goto L_1803edb1e_42;}
L_1803edb1e_10:;
wr(s->u,62,1,(rd(s->r,0,4)==((U)UINT64_C(0x4))));
L_1803edb1e_11:;
if(rd(s->u,62,1)){goto L_1803edb1e_44;}
L_1803edb1e_12:;
wr(s->u,63,1,(rd(s->r,0,4)==((U)UINT64_C(0x5))));
L_1803edb1e_13:;
if(rd(s->u,63,1)){goto L_1803edb1e_46;}
L_1803edb1e_14:;
wr(s->u,64,1,(rd(s->r,0,4)==((U)UINT64_C(0x6))));
L_1803edb1e_15:;
if(rd(s->u,64,1)){goto L_1803edb1e_48;}
L_1803edb1e_16:;
wr(s->u,65,1,(rd(s->r,0,4)==((U)UINT64_C(0x7))));
L_1803edb1e_17:;
if(rd(s->u,65,1)){goto L_1803edb1e_50;}
L_1803edb1e_18:;
wr(s->u,66,1,(rd(s->r,0,4)==((U)UINT64_C(0x9))));
L_1803edb1e_19:;
if(rd(s->u,66,1)){goto L_1803edb1e_52;}
L_1803edb1e_20:;
wr(s->u,67,1,(rd(s->r,0,4)==((U)UINT64_C(0xa))));
L_1803edb1e_21:;
if(rd(s->u,67,1)){goto L_1803edb1e_54;}
L_1803edb1e_22:;
wr(s->u,68,1,(rd(s->r,0,4)==((U)UINT64_C(0xb))));
L_1803edb1e_23:;
if(rd(s->u,68,1)){goto L_1803edb1e_56;}
L_1803edb1e_24:;
wr(s->u,69,1,(rd(s->r,0,4)==((U)UINT64_C(0xd))));
L_1803edb1e_25:;
if(rd(s->u,69,1)){goto L_1803edb1e_58;}
L_1803edb1e_26:;
wr(s->u,70,1,(rd(s->r,0,4)==((U)UINT64_C(0xf))));
L_1803edb1e_27:;
if(rd(s->u,70,1)){goto L_1803edb1e_60;}
L_1803edb1e_28:;
wr(s->u,71,1,(rd(s->r,0,4)==((U)UINT64_C(0x80000002))));
L_1803edb1e_29:;
if(rd(s->u,71,1)){goto L_1803edb1e_62;}
L_1803edb1e_30:;
wr(s->u,72,1,(rd(s->r,0,4)==((U)UINT64_C(0x80000003))));
L_1803edb1e_31:;
if(rd(s->u,72,1)){goto L_1803edb1e_64;}
L_1803edb1e_32:;
wr(s->u,73,1,(rd(s->r,0,4)==((U)UINT64_C(0x80000004))));
L_1803edb1e_33:;
if(rd(s->u,73,1)){goto L_1803edb1e_66;}
L_1803edb1e_34:;
wr(s->u,50,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803edb1e_35:;
goto L_1803edb1e_68;
L_1803edb1e_36:;
wr(s->u,50,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803edb1e_37:;
goto L_1803edb1e_68;
L_1803edb1e_38:;
wr(s->u,50,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803edb1e_39:;
goto L_1803edb1e_68;
L_1803edb1e_40:;
wr(s->u,50,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803edb1e_41:;
goto L_1803edb1e_68;
L_1803edb1e_42:;
wr(s->u,50,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803edb1e_43:;
goto L_1803edb1e_68;
L_1803edb1e_44:;
wr(s->u,50,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803edb1e_45:;
goto L_1803edb1e_68;
L_1803edb1e_46:;
wr(s->u,50,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803edb1e_47:;
goto L_1803edb1e_68;
L_1803edb1e_48:;
wr(s->u,50,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803edb1e_49:;
goto L_1803edb1e_68;
L_1803edb1e_50:;
wr(s->u,50,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803edb1e_51:;
goto L_1803edb1e_68;
L_1803edb1e_52:;
wr(s->u,50,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803edb1e_53:;
goto L_1803edb1e_68;
L_1803edb1e_54:;
wr(s->u,50,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803edb1e_55:;
goto L_1803edb1e_68;
L_1803edb1e_56:;
wr(s->u,50,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803edb1e_57:;
goto L_1803edb1e_68;
L_1803edb1e_58:;
wr(s->u,50,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803edb1e_59:;
goto L_1803edb1e_68;
L_1803edb1e_60:;
wr(s->u,50,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803edb1e_61:;
goto L_1803edb1e_68;
L_1803edb1e_62:;
wr(s->u,50,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803edb1e_63:;
goto L_1803edb1e_68;
L_1803edb1e_64:;
wr(s->u,50,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803edb1e_65:;
goto L_1803edb1e_68;
L_1803edb1e_66:;
wr(s->u,50,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803edb1e_67:;
goto L_1803edb1e_68;
L_1803edb1e_68:;
wr(s->u,74,4,mr((uint64_t)rd(s->u,50,8),4));
L_1803edb1e_69:;
wr(s->r,0,8,rd(s->u,74,4));
L_1803edb1e_70:;
wr(s->u,78,8,(rd(s->u,50,8)+((U)UINT64_C(0x4))));
L_1803edb1e_71:;
wr(s->u,86,4,mr((uint64_t)rd(s->u,78,8),4));
L_1803edb1e_72:;
wr(s->r,24,8,rd(s->u,86,4));
L_1803edb1e_73:;
wr(s->u,90,8,(rd(s->u,50,8)+((U)UINT64_C(0x8))));
L_1803edb1e_74:;
wr(s->u,98,4,mr((uint64_t)rd(s->u,90,8),4));
L_1803edb1e_75:;
wr(s->r,16,8,rd(s->u,98,4));
L_1803edb1e_76:;
wr(s->u,102,8,(rd(s->u,50,8)+((U)UINT64_C(0xc))));
L_1803edb1e_77:;
wr(s->u,110,4,mr((uint64_t)rd(s->u,102,8),4));
L_1803edb1e_78:;
wr(s->r,8,8,rd(s->u,110,4));
L_1803edb1e_79:;
/* 1803edb20: mov dword ptr [rsp + 0x28], eax */
L_1803edb20_0:;
L_1803edb20_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803edb20_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803edb20_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803edb20_4:;
/* 1803edb24: mov dword ptr [rsp + 0x2c], ebx */
L_1803edb24_0:;
L_1803edb24_1:;
wr(s->u,0,8,(((U)UINT64_C(0x2c))+rd(s->r,32,8)));
L_1803edb24_2:;
wr(s->u,8,4,rd(s->r,24,4));
L_1803edb24_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803edb24_4:;
/* 1803edb28: mov dword ptr [rsp + 0x30], ecx */
L_1803edb28_0:;
L_1803edb28_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803edb28_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_1803edb28_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803edb28_4:;
/* 1803edb2c: bt edx, 0x19 */
L_1803edb2c_0:;
L_1803edb2c_1:;
wr(s->u,38,4,(((U)UINT64_C(0x19))&((U)UINT64_C(0x1f))));
L_1803edb2c_2:;
wr(s->u,42,4,((rd(s->u,38,4)>=32)?0:(rd(s->r,16,4)>>rd(s->u,38,4))));
L_1803edb2c_3:;
wr(s->u,46,4,(rd(s->u,42,4)&((U)UINT64_C(0x1))));
L_1803edb2c_4:;
wr(s->r,512,1,(rd(s->u,46,4)!=((U)UINT64_C(0x0))));
L_1803edb2c_5:;
/* 1803edb30: jb 0x1803edb5e */
L_1803edb30_0:;
L_1803edb30_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803edb5e);}
L_1803edb30_2:;
return UINT64_C(0x1803edb32);
}
uint64_t b_1803edb32(CPU*s){
/* 1803edb32: bt edx, 0x1a */
L_1803edb32_0:;
L_1803edb32_1:;
wr(s->u,0,4,(((U)UINT64_C(0x1a))&((U)UINT64_C(0x1f))));
L_1803edb32_2:;
wr(s->u,4,4,((rd(s->u,0,4)>=32)?0:(rd(s->r,16,4)>>rd(s->u,0,4))));
L_1803edb32_3:;
wr(s->u,8,4,(rd(s->u,4,4)&((U)UINT64_C(0x1))));
L_1803edb32_4:;
wr(s->r,512,1,(rd(s->u,8,4)!=((U)UINT64_C(0x0))));
L_1803edb32_5:;
/* 1803edb36: jb 0x1803edb5e */
L_1803edb36_0:;
L_1803edb36_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803edb5e);}
L_1803edb36_2:;
return UINT64_C(0x1803edb38);
}
uint64_t b_1803edb38(CPU*s){
/* 1803edb38: lea ecx, [rdi + 0x38] */
L_1803edb38_0:;
L_1803edb38_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_1803edb38_2:;
wr(s->r,8,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803edb38_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803edb38_4:;
/* 1803edb3b: call 0x180003140 */
L_1803edb3b_0:;
L_1803edb3b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803edb3b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803edb40)));
L_1803edb3b_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803edb3b_4:;
return UINT64_C(0x1803edb40);
}
uint64_t b_1803edb40(CPU*s){
/* 1803edb40: mov qword ptr [rsp + 0x60], rax */
L_1803edb40_0:;
L_1803edb40_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803edb40_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803edb40_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803edb40_4:;
/* 1803edb45: test rax, rax */
L_1803edb45_0:;
L_1803edb45_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edb45_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edb45_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803edb45_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edb45_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803edb45_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803edb45_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803edb45_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803edb45_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803edb45_10:;
/* 1803edb48: je 0x1803edb57 */
L_1803edb48_0:;
L_1803edb48_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803edb57);}
L_1803edb48_2:;
return UINT64_C(0x1803edb4a);
}
uint64_t b_1803edb4a(CPU*s){
/* 1803edb4a: mov edx, ebp */
L_1803edb4a_0:;
L_1803edb4a_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803edb4a_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803edb4a_3:;
/* 1803edb4c: mov rcx, rax */
L_1803edb4c_0:;
L_1803edb4c_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803edb4c_2:;
/* 1803edb4f: call 0x1803ed750 */
L_1803edb4f_0:;
L_1803edb4f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803edb4f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803edb54)));
L_1803edb4f_3:;
return (uint64_t)UINT64_C(0x1803ed750);
L_1803edb4f_4:;
return UINT64_C(0x1803edb54);
}
uint64_t b_1803edb54(CPU*s){
/* 1803edb54: mov rdi, rax */
L_1803edb54_0:;
L_1803edb54_1:;
wr(s->r,56,8,rd(s->r,0,8));
L_1803edb54_2:;
/* 1803edb57: mov qword ptr [rsi], rdi */
L_1803edb57_0:;
L_1803edb57_1:;
wr(s->u,0,8,rd(s->r,56,8));
L_1803edb57_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,0,8));
L_1803edb57_3:;
/* 1803edb5a: xor eax, eax */
L_1803edb5a_0:;
L_1803edb5a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edb5a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edb5a_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803edb5a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edb5a_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edb5a_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edb5a_7:;
wr(s->u,8,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edb5a_8:;
wr(s->u,12,1,pop(rd(s->u,8,4),4));
L_1803edb5a_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803edb5a_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803edb5a_11:;
/* 1803edb5c: jmp 0x1803edb84 */
L_1803edb5c_0:;
L_1803edb5c_1:;
return UINT64_C(0x1803edb84);
L_1803edb5c_2:;
return UINT64_C(0x1803edb5e);
}
uint64_t b_1803edb57(CPU*s){
/* 1803edb57: mov qword ptr [rsi], rdi */
L_1803edb57_0:;
L_1803edb57_1:;
wr(s->u,0,8,rd(s->r,56,8));
L_1803edb57_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,0,8));
L_1803edb57_3:;
/* 1803edb5a: xor eax, eax */
L_1803edb5a_0:;
L_1803edb5a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edb5a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edb5a_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803edb5a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edb5a_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edb5a_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edb5a_7:;
wr(s->u,8,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edb5a_8:;
wr(s->u,12,1,pop(rd(s->u,8,4),4));
L_1803edb5a_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803edb5a_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803edb5a_11:;
/* 1803edb5c: jmp 0x1803edb84 */
L_1803edb5c_0:;
L_1803edb5c_1:;
return UINT64_C(0x1803edb84);
L_1803edb5c_2:;
return UINT64_C(0x1803edb5e);
}
uint64_t b_1803edb5e(CPU*s){
/* 1803edb5e: mov ecx, 0x38 */
L_1803edb5e_0:;
L_1803edb5e_1:;
wr(s->r,8,8,((U)UINT64_C(0x38)));
L_1803edb5e_2:;
/* 1803edb63: call 0x180003140 */
L_1803edb63_0:;
L_1803edb63_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803edb63_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803edb68)));
L_1803edb63_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803edb63_4:;
return UINT64_C(0x1803edb68);
}
uint64_t b_1803edb68(CPU*s){
/* 1803edb68: mov qword ptr [rsp + 0x60], rax */
L_1803edb68_0:;
L_1803edb68_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803edb68_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803edb68_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803edb68_4:;
/* 1803edb6d: test rax, rax */
L_1803edb6d_0:;
L_1803edb6d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edb6d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edb6d_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803edb6d_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edb6d_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803edb6d_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803edb6d_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803edb6d_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803edb6d_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803edb6d_10:;
/* 1803edb70: je 0x1803edb7f */
L_1803edb70_0:;
L_1803edb70_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803edb7f);}
L_1803edb70_2:;
return UINT64_C(0x1803edb72);
}
uint64_t b_1803edb72(CPU*s){
/* 1803edb72: mov edx, ebp */
L_1803edb72_0:;
L_1803edb72_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803edb72_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803edb72_3:;
/* 1803edb74: mov rcx, rax */
L_1803edb74_0:;
L_1803edb74_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803edb74_2:;
/* 1803edb77: call 0x1803f21b0 */
L_1803edb77_0:;
L_1803edb77_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803edb77_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803edb7c)));
L_1803edb77_3:;
return (uint64_t)UINT64_C(0x1803f21b0);
L_1803edb77_4:;
return UINT64_C(0x1803edb7c);
}
uint64_t b_1803edb7c(CPU*s){
/* 1803edb7c: mov rdi, rax */
L_1803edb7c_0:;
L_1803edb7c_1:;
wr(s->r,56,8,rd(s->r,0,8));
L_1803edb7c_2:;
/* 1803edb7f: mov qword ptr [rsi], rdi */
L_1803edb7f_0:;
L_1803edb7f_1:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803edb7f_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,8,8));
L_1803edb7f_3:;
/* 1803edb82: xor eax, eax */
L_1803edb82_0:;
L_1803edb82_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edb82_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edb82_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803edb82_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edb82_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edb82_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edb82_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edb82_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803edb82_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803edb82_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803edb82_11:;
/* 1803edb84: mov rbx, qword ptr [rsp + 0x50] */
L_1803edb84_0:;
L_1803edb84_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803edb84_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edb84_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803edb84_4:;
/* 1803edb89: mov rbp, qword ptr [rsp + 0x58] */
L_1803edb89_0:;
L_1803edb89_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803edb89_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edb89_3:;
wr(s->r,40,8,rd(s->u,16,8));
L_1803edb89_4:;
/* 1803edb8e: mov rsi, qword ptr [rsp + 0x68] */
L_1803edb8e_0:;
L_1803edb8e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803edb8e_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edb8e_3:;
wr(s->r,48,8,rd(s->u,16,8));
L_1803edb8e_4:;
/* 1803edb93: add rsp, 0x40 */
L_1803edb93_0:;
L_1803edb93_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803edb93_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803edb93_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803edb93_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edb93_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803edb93_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803edb93_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803edb93_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803edb93_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803edb93_10:;
/* 1803edb97: pop rdi */
L_1803edb97_0:;
L_1803edb97_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803edb97_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edb97_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edb97_4:;
wr(s->r,56,8,rd(s->u,34,8));
L_1803edb97_5:;
/* 1803edb98: ret  */
L_1803edb98_0:;
L_1803edb98_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edb98_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edb98_3:;
return (uint64_t)rd(s->r,648,8);
L_1803edb98_4:;
return UINT64_C(0x1803edb99);
}
uint64_t b_1803edb7f(CPU*s){
/* 1803edb7f: mov qword ptr [rsi], rdi */
L_1803edb7f_0:;
L_1803edb7f_1:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803edb7f_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,8,8));
L_1803edb7f_3:;
/* 1803edb82: xor eax, eax */
L_1803edb82_0:;
L_1803edb82_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edb82_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edb82_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803edb82_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edb82_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edb82_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edb82_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edb82_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803edb82_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803edb82_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803edb82_11:;
/* 1803edb84: mov rbx, qword ptr [rsp + 0x50] */
L_1803edb84_0:;
L_1803edb84_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803edb84_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edb84_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803edb84_4:;
/* 1803edb89: mov rbp, qword ptr [rsp + 0x58] */
L_1803edb89_0:;
L_1803edb89_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803edb89_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edb89_3:;
wr(s->r,40,8,rd(s->u,16,8));
L_1803edb89_4:;
/* 1803edb8e: mov rsi, qword ptr [rsp + 0x68] */
L_1803edb8e_0:;
L_1803edb8e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803edb8e_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edb8e_3:;
wr(s->r,48,8,rd(s->u,16,8));
L_1803edb8e_4:;
/* 1803edb93: add rsp, 0x40 */
L_1803edb93_0:;
L_1803edb93_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803edb93_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803edb93_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803edb93_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edb93_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803edb93_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803edb93_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803edb93_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803edb93_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803edb93_10:;
/* 1803edb97: pop rdi */
L_1803edb97_0:;
L_1803edb97_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803edb97_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edb97_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edb97_4:;
wr(s->r,56,8,rd(s->u,34,8));
L_1803edb97_5:;
/* 1803edb98: ret  */
L_1803edb98_0:;
L_1803edb98_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edb98_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edb98_3:;
return (uint64_t)rd(s->r,648,8);
L_1803edb98_4:;
return UINT64_C(0x1803edb99);
}
uint64_t b_1803edb84(CPU*s){
/* 1803edb84: mov rbx, qword ptr [rsp + 0x50] */
L_1803edb84_0:;
L_1803edb84_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803edb84_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edb84_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803edb84_4:;
/* 1803edb89: mov rbp, qword ptr [rsp + 0x58] */
L_1803edb89_0:;
L_1803edb89_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803edb89_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edb89_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803edb89_4:;
/* 1803edb8e: mov rsi, qword ptr [rsp + 0x68] */
L_1803edb8e_0:;
L_1803edb8e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803edb8e_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edb8e_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803edb8e_4:;
/* 1803edb93: add rsp, 0x40 */
L_1803edb93_0:;
L_1803edb93_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803edb93_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803edb93_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803edb93_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edb93_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803edb93_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803edb93_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803edb93_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803edb93_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803edb93_10:;
/* 1803edb97: pop rdi */
L_1803edb97_0:;
L_1803edb97_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803edb97_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edb97_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edb97_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803edb97_5:;
/* 1803edb98: ret  */
L_1803edb98_0:;
L_1803edb98_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edb98_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edb98_3:;
return (uint64_t)rd(s->r,648,8);
L_1803edb98_4:;
return UINT64_C(0x1803edb99);
}
uint64_t b_1803edbf0(CPU*s){
/* 1803edbf0: mov qword ptr [rsp + 8], rbx */
L_1803edbf0_0:;
L_1803edbf0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803edbf0_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803edbf0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803edbf0_4:;
/* 1803edbf5: mov qword ptr [rsp + 0x10], rsi */
L_1803edbf5_0:;
L_1803edbf5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803edbf5_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803edbf5_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803edbf5_4:;
/* 1803edbfa: push rdi */
L_1803edbfa_0:;
L_1803edbfa_1:;
wr(s->u,34,8,rd(s->r,56,8));
L_1803edbfa_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803edbfa_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,34,8));
L_1803edbfa_4:;
/* 1803edbfb: sub rsp, 0x80 */
L_1803edbfb_0:;
L_1803edbfb_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x80))));
L_1803edbfb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x80)),8,1));
L_1803edbfb_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x80))));
L_1803edbfb_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edbfb_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803edbfb_6:;
wr(s->u,42,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803edbfb_7:;
wr(s->u,50,1,pop(rd(s->u,42,8),8));
L_1803edbfb_8:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803edbfb_9:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803edbfb_10:;
/* 1803edc02: movaps xmmword ptr [rsp + 0x70], xmm6 */
L_1803edc02_0:;
L_1803edc02_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803edc02_2:;
wr(s->u,16,16,rd(s->r,4992,16));
L_1803edc02_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,16,16));
L_1803edc02_4:;
/* 1803edc07: dec edx */
L_1803edc07_0:;
L_1803edc07_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,1));
L_1803edc07_2:;
wr(s->r,16,4,(rd(s->r,16,4)-((U)UINT64_C(0x1))));
L_1803edc07_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803edc07_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edc07_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803edc07_6:;
wr(s->u,42,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803edc07_7:;
wr(s->u,50,1,pop(rd(s->u,42,4),4));
L_1803edc07_8:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803edc07_9:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803edc07_10:;
/* 1803edc09: movaps xmmword ptr [rsp + 0x60], xmm7 */
L_1803edc09_0:;
L_1803edc09_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803edc09_2:;
wr(s->u,16,16,rd(s->r,5056,16));
L_1803edc09_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,16,16));
L_1803edc09_4:;
/* 1803edc0e: mov rdi, rcx */
L_1803edc0e_0:;
L_1803edc0e_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803edc0e_2:;
/* 1803edc11: movaps xmmword ptr [rsp + 0x50], xmm8 */
L_1803edc11_0:;
L_1803edc11_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803edc11_2:;
wr(s->u,16,16,rd(s->r,5120,16));
L_1803edc11_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,16,16));
L_1803edc11_4:;
/* 1803edc17: cmp edx, 5 */
L_1803edc17_0:;
L_1803edc17_1:;
wr(s->u,52,4,rd(s->r,16,4));
L_1803edc17_2:;
wr(s->r,512,1,(rd(s->u,52,4)<((U)UINT64_C(0x5))));
L_1803edc17_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,52,4),((U)UINT64_C(0x5)),4,1));
L_1803edc17_4:;
wr(s->u,56,4,(rd(s->u,52,4)-((U)UINT64_C(0x5))));
L_1803edc17_5:;
wr(s->r,519,1,(sx(rd(s->u,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edc17_6:;
wr(s->r,518,1,(rd(s->u,56,4)==((U)UINT64_C(0x0))));
L_1803edc17_7:;
wr(s->u,42,4,(rd(s->u,56,4)&((U)UINT64_C(0xff))));
L_1803edc17_8:;
wr(s->u,50,1,pop(rd(s->u,42,4),4));
L_1803edc17_9:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803edc17_10:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803edc17_11:;
/* 1803edc1a: ja 0x1803edf4a */
L_1803edc1a_0:;
L_1803edc1a_1:;
wr(s->u,32,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803edc1a_2:;
wr(s->u,33,1,(!rd(s->u,32,1)));
L_1803edc1a_3:;
if(rd(s->u,33,1)){return UINT64_C(0x1803edf4a);}
L_1803edc1a_4:;
return UINT64_C(0x1803edc20);
}
uint64_t b_1803edc20(CPU*s){
/* 1803edc20: lea rcx, [rip - 0x3edc27] */
L_1803edc20_0:;
L_1803edc20_1:;
wr(s->r,8,8,((U)UINT64_C(0x180000000)));
L_1803edc20_2:;
/* 1803edc27: movsxd rax, edx */
L_1803edc27_0:;
L_1803edc27_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803edc27_2:;
/* 1803edc2a: mov edx, dword ptr [rcx + rax*4 + 0x3edf90] */
L_1803edc2a_0:;
L_1803edc2a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x3edf90))+rd(s->r,8,8)));
L_1803edc2a_2:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803edc2a_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803edc2a_4:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803edc2a_5:;
wr(s->r,16,4,rd(s->u,24,4));
L_1803edc2a_6:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803edc2a_7:;
/* 1803edc31: add rdx, rcx */
L_1803edc31_0:;
L_1803edc31_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+rd(s->r,8,8))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803edc31_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->r,8,8),8,0));
L_1803edc31_3:;
wr(s->r,16,8,(rd(s->r,16,8)+rd(s->r,8,8)));
L_1803edc31_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edc31_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803edc31_6:;
wr(s->u,28,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803edc31_7:;
wr(s->u,36,1,pop(rd(s->u,28,8),8));
L_1803edc31_8:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803edc31_9:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803edc31_10:;
/* 1803edc34: jmp rdx */
L_1803edc34_0:;
L_1803edc34_1:;
return (uint64_t)rd(s->r,16,8);
L_1803edc34_2:;
return UINT64_C(0x1803edc36);
}
uint64_t b_1803edc36(CPU*s){
/* 1803edc36: mov eax, dword ptr [rdi + 0x10] */
L_1803edc36_0:;
L_1803edc36_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edc36_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edc36_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803edc36_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edc36_5:;
/* 1803edc39: xor ebx, ebx */
L_1803edc39_0:;
L_1803edc39_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edc39_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edc39_3:;
wr(s->r,24,4,(rd(s->r,24,4)^rd(s->r,24,4)));
L_1803edc39_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803edc39_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edc39_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803edc39_7:;
wr(s->u,14,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803edc39_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803edc39_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803edc39_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803edc39_11:;
/* 1803edc3b: test eax, eax */
L_1803edc3b_0:;
L_1803edc3b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edc3b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edc3b_3:;
wr(s->u,20,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803edc3b_4:;
wr(s->r,519,1,(sx(rd(s->u,20,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edc3b_5:;
wr(s->r,518,1,(rd(s->u,20,4)==((U)UINT64_C(0x0))));
L_1803edc3b_6:;
wr(s->u,14,4,(rd(s->u,20,4)&((U)UINT64_C(0xff))));
L_1803edc3b_7:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803edc3b_8:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803edc3b_9:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803edc3b_10:;
/* 1803edc3d: jle 0x1803edf6b */
L_1803edc3d_0:;
L_1803edc3d_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803edc3d_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803edc3d_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803edf6b);}
L_1803edc3d_4:;
return UINT64_C(0x1803edc43);
}
uint64_t b_1803edc43(CPU*s){
/* 1803edc43: movss xmm6, dword ptr [rip + 0x26d8c1] */
L_1803edc43_0:;
L_1803edc43_1:;
wr(s->r,4992,4,mr(UINT64_C(0x18065b50c),4));
L_1803edc43_2:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803edc43_3:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803edc43_4:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803edc43_5:;
/* 1803edc4b: mov rsi, rbx */
L_1803edc4b_0:;
L_1803edc4b_1:;
wr(s->r,48,8,rd(s->r,24,8));
L_1803edc4b_2:;
/* 1803edc4e: nop  */
L_1803edc4e_0:;
L_1803edc4e_1:;
/* 1803edc50: inc ebx */
L_1803edc50_0:;
L_1803edc50_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0x1)),4,0));
L_1803edc50_2:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0x1))));
L_1803edc50_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803edc50_4:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edc50_5:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803edc50_6:;
wr(s->u,0,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803edc50_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803edc50_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803edc50_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803edc50_10:;
/* 1803edc52: inc eax */
L_1803edc52_0:;
L_1803edc52_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,0));
L_1803edc52_2:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x1))));
L_1803edc52_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edc52_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edc52_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edc52_6:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edc52_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803edc52_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803edc52_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803edc52_10:;
/* 1803edc54: movd xmm0, ebx */
L_1803edc54_0:;
L_1803edc54_1:;
wr(s->r,4608,16,rd(s->r,24,4));
L_1803edc54_2:;
/* 1803edc58: movd xmm1, eax */
L_1803edc58_0:;
L_1803edc58_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803edc58_2:;
/* 1803edc5c: cvtdq2ps xmm0, xmm0 */
L_1803edc5c_0:;
L_1803edc5c_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803edc5c_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803edc5c_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803edc5c_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803edc5c_5:;
/* 1803edc5f: cvtdq2ps xmm1, xmm1 */
L_1803edc5f_0:;
L_1803edc5f_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803edc5f_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803edc5f_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803edc5f_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803edc5f_5:;
/* 1803edc62: mulss xmm0, xmm6 */
L_1803edc62_0:;
L_1803edc62_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803edc62_2:;
/* 1803edc66: divss xmm0, xmm1 */
L_1803edc66_0:;
L_1803edc66_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803edc66_2:;
/* 1803edc6a: call 0x180609b0e */
L_1803edc6a_0:;
L_1803edc6a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803edc6a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803edc6f)));
L_1803edc6a_3:;
return (uint64_t)UINT64_C(0x180609b0e);
L_1803edc6a_4:;
return UINT64_C(0x1803edc6f);
}
uint64_t b_1803edc50(CPU*s){
/* 1803edc50: inc ebx */
L_1803edc50_0:;
L_1803edc50_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0x1)),4,0));
L_1803edc50_2:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0x1))));
L_1803edc50_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803edc50_4:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edc50_5:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803edc50_6:;
wr(s->u,0,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803edc50_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803edc50_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803edc50_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803edc50_10:;
/* 1803edc52: inc eax */
L_1803edc52_0:;
L_1803edc52_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,0));
L_1803edc52_2:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x1))));
L_1803edc52_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edc52_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edc52_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edc52_6:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edc52_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803edc52_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803edc52_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803edc52_10:;
/* 1803edc54: movd xmm0, ebx */
L_1803edc54_0:;
L_1803edc54_1:;
wr(s->r,4608,16,rd(s->r,24,4));
L_1803edc54_2:;
/* 1803edc58: movd xmm1, eax */
L_1803edc58_0:;
L_1803edc58_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803edc58_2:;
/* 1803edc5c: cvtdq2ps xmm0, xmm0 */
L_1803edc5c_0:;
L_1803edc5c_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803edc5c_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803edc5c_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803edc5c_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803edc5c_5:;
/* 1803edc5f: cvtdq2ps xmm1, xmm1 */
L_1803edc5f_0:;
L_1803edc5f_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803edc5f_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803edc5f_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803edc5f_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803edc5f_5:;
/* 1803edc62: mulss xmm0, xmm6 */
L_1803edc62_0:;
L_1803edc62_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803edc62_2:;
/* 1803edc66: divss xmm0, xmm1 */
L_1803edc66_0:;
L_1803edc66_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803edc66_2:;
/* 1803edc6a: call 0x180609b0e */
L_1803edc6a_0:;
L_1803edc6a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803edc6a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803edc6f)));
L_1803edc6a_3:;
return (uint64_t)UINT64_C(0x180609b0e);
L_1803edc6a_4:;
return UINT64_C(0x1803edc6f);
}
uint64_t b_1803edc6f(CPU*s){
/* 1803edc6f: mov rax, qword ptr [rdi + 0x18] */
L_1803edc6f_0:;
L_1803edc6f_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803edc6f_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edc6f_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803edc6f_4:;
/* 1803edc73: add rsi, 4 */
L_1803edc73_0:;
L_1803edc73_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803edc73_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x4)),8,0));
L_1803edc73_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x4))));
L_1803edc73_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edc73_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803edc73_6:;
wr(s->u,49,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803edc73_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803edc73_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803edc73_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803edc73_10:;
/* 1803edc77: movss dword ptr [rsi + rax - 4], xmm0 */
L_1803edc77_0:;
L_1803edc77_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,48,8)));
L_1803edc77_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803edc77_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803edc77_4:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803edc77_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803edc77_6:;
/* 1803edc7d: mov eax, dword ptr [rdi + 0x10] */
L_1803edc7d_0:;
L_1803edc7d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edc7d_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edc7d_3:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803edc7d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edc7d_5:;
/* 1803edc80: cmp ebx, eax */
L_1803edc80_0:;
L_1803edc80_1:;
wr(s->u,59,4,rd(s->r,0,4));
L_1803edc80_2:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,59,4)));
L_1803edc80_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,59,4),4,1));
L_1803edc80_4:;
wr(s->u,63,4,(rd(s->r,24,4)-rd(s->u,59,4)));
L_1803edc80_5:;
wr(s->r,519,1,(sx(rd(s->u,63,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edc80_6:;
wr(s->r,518,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803edc80_7:;
wr(s->u,49,4,(rd(s->u,63,4)&((U)UINT64_C(0xff))));
L_1803edc80_8:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803edc80_9:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803edc80_10:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803edc80_11:;
/* 1803edc82: jl 0x1803edc50 */
L_1803edc82_0:;
L_1803edc82_1:;
wr(s->u,48,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803edc82_2:;
if(rd(s->u,48,1)){return UINT64_C(0x1803edc50);}
L_1803edc82_3:;
return UINT64_C(0x1803edc84);
}
uint64_t b_1803edc84(CPU*s){
/* 1803edc84: jmp 0x1803edf6b */
L_1803edc84_0:;
L_1803edc84_1:;
return UINT64_C(0x1803edf6b);
L_1803edc84_2:;
return UINT64_C(0x1803edc89);
}
uint64_t b_1803edc89(CPU*s){
/* 1803edc89: mov eax, dword ptr [rdi + 0x10] */
L_1803edc89_0:;
L_1803edc89_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edc89_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edc89_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803edc89_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edc89_5:;
/* 1803edc8c: xor ebx, ebx */
L_1803edc8c_0:;
L_1803edc8c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edc8c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edc8c_3:;
wr(s->r,24,4,(rd(s->r,24,4)^rd(s->r,24,4)));
L_1803edc8c_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803edc8c_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edc8c_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803edc8c_7:;
wr(s->u,14,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803edc8c_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803edc8c_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803edc8c_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803edc8c_11:;
/* 1803edc8e: test eax, eax */
L_1803edc8e_0:;
L_1803edc8e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edc8e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edc8e_3:;
wr(s->u,20,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803edc8e_4:;
wr(s->r,519,1,(sx(rd(s->u,20,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edc8e_5:;
wr(s->r,518,1,(rd(s->u,20,4)==((U)UINT64_C(0x0))));
L_1803edc8e_6:;
wr(s->u,14,4,(rd(s->u,20,4)&((U)UINT64_C(0xff))));
L_1803edc8e_7:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803edc8e_8:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803edc8e_9:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803edc8e_10:;
/* 1803edc90: jle 0x1803edf6b */
L_1803edc90_0:;
L_1803edc90_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803edc90_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803edc90_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803edf6b);}
L_1803edc90_4:;
return UINT64_C(0x1803edc96);
}
uint64_t b_1803edc96(CPU*s){
/* 1803edc96: movss xmm6, dword ptr [rip + 0x26d8a2] */
L_1803edc96_0:;
L_1803edc96_1:;
wr(s->r,4992,4,mr(UINT64_C(0x18065b540),4));
L_1803edc96_2:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803edc96_3:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803edc96_4:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803edc96_5:;
/* 1803edc9e: movss xmm7, dword ptr [rip + 0x25ef9e] */
L_1803edc9e_0:;
L_1803edc9e_1:;
wr(s->r,5056,4,mr(UINT64_C(0x18064cc44),4));
L_1803edc9e_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803edc9e_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803edc9e_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803edc9e_5:;
/* 1803edca6: movss xmm8, dword ptr [rip + 0x2644b5] */
L_1803edca6_0:;
L_1803edca6_1:;
wr(s->r,5120,4,mr(UINT64_C(0x180652164),4));
L_1803edca6_2:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803edca6_3:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803edca6_4:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803edca6_5:;
/* 1803edcaf: mov rsi, rbx */
L_1803edcaf_0:;
L_1803edcaf_1:;
wr(s->r,48,8,rd(s->r,24,8));
L_1803edcaf_2:;
/* 1803edcb2: nop word ptr [rax + rax] */
L_1803edcb2_0:;
L_1803edcb2_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803edcb2_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803edcb2_3:;
/* 1803edcc0: inc ebx */
L_1803edcc0_0:;
L_1803edcc0_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0x1)),4,0));
L_1803edcc0_2:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0x1))));
L_1803edcc0_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803edcc0_4:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edcc0_5:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803edcc0_6:;
wr(s->u,16,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803edcc0_7:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803edcc0_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803edcc0_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803edcc0_10:;
/* 1803edcc2: inc eax */
L_1803edcc2_0:;
L_1803edcc2_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,0));
L_1803edcc2_2:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x1))));
L_1803edcc2_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edcc2_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edcc2_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edcc2_6:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edcc2_7:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803edcc2_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803edcc2_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803edcc2_10:;
/* 1803edcc4: movd xmm0, ebx */
L_1803edcc4_0:;
L_1803edcc4_1:;
wr(s->r,4608,16,rd(s->r,24,4));
L_1803edcc4_2:;
/* 1803edcc8: movd xmm1, eax */
L_1803edcc8_0:;
L_1803edcc8_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803edcc8_2:;
/* 1803edccc: cvtdq2ps xmm0, xmm0 */
L_1803edccc_0:;
L_1803edccc_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803edccc_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803edccc_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803edccc_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803edccc_5:;
/* 1803edccf: cvtdq2ps xmm1, xmm1 */
L_1803edccf_0:;
L_1803edccf_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803edccf_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803edccf_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803edccf_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803edccf_5:;
/* 1803edcd2: mulss xmm0, xmm6 */
L_1803edcd2_0:;
L_1803edcd2_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803edcd2_2:;
/* 1803edcd6: divss xmm0, xmm1 */
L_1803edcd6_0:;
L_1803edcd6_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803edcd6_2:;
/* 1803edcda: call 0x180609b08 */
L_1803edcda_0:;
L_1803edcda_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803edcda_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803edcdf)));
L_1803edcda_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803edcda_4:;
return UINT64_C(0x1803edcdf);
}
uint64_t b_1803edcc0(CPU*s){
/* 1803edcc0: inc ebx */
L_1803edcc0_0:;
L_1803edcc0_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0x1)),4,0));
L_1803edcc0_2:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0x1))));
L_1803edcc0_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803edcc0_4:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edcc0_5:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803edcc0_6:;
wr(s->u,0,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803edcc0_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803edcc0_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803edcc0_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803edcc0_10:;
/* 1803edcc2: inc eax */
L_1803edcc2_0:;
L_1803edcc2_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,0));
L_1803edcc2_2:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x1))));
L_1803edcc2_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edcc2_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edcc2_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edcc2_6:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edcc2_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803edcc2_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803edcc2_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803edcc2_10:;
/* 1803edcc4: movd xmm0, ebx */
L_1803edcc4_0:;
L_1803edcc4_1:;
wr(s->r,4608,16,rd(s->r,24,4));
L_1803edcc4_2:;
/* 1803edcc8: movd xmm1, eax */
L_1803edcc8_0:;
L_1803edcc8_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803edcc8_2:;
/* 1803edccc: cvtdq2ps xmm0, xmm0 */
L_1803edccc_0:;
L_1803edccc_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803edccc_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803edccc_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803edccc_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803edccc_5:;
/* 1803edccf: cvtdq2ps xmm1, xmm1 */
L_1803edccf_0:;
L_1803edccf_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803edccf_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803edccf_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803edccf_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803edccf_5:;
/* 1803edcd2: mulss xmm0, xmm6 */
L_1803edcd2_0:;
L_1803edcd2_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803edcd2_2:;
/* 1803edcd6: divss xmm0, xmm1 */
L_1803edcd6_0:;
L_1803edcd6_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803edcd6_2:;
/* 1803edcda: call 0x180609b08 */
L_1803edcda_0:;
L_1803edcda_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803edcda_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803edcdf)));
L_1803edcda_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803edcda_4:;
return UINT64_C(0x1803edcdf);
}
uint64_t b_1803edcdf(CPU*s){
/* 1803edcdf: mov rax, qword ptr [rdi + 0x18] */
L_1803edcdf_0:;
L_1803edcdf_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803edcdf_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edcdf_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803edcdf_4:;
/* 1803edce3: movaps xmm1, xmm7 */
L_1803edce3_0:;
L_1803edce3_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803edce3_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803edce3_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803edce3_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803edce3_5:;
/* 1803edce6: add rsi, 4 */
L_1803edce6_0:;
L_1803edce6_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803edce6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x4)),8,0));
L_1803edce6_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x4))));
L_1803edce6_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edce6_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803edce6_6:;
wr(s->u,49,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803edce6_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803edce6_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803edce6_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803edce6_10:;
/* 1803edcea: subss xmm1, xmm0 */
L_1803edcea_0:;
L_1803edcea_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803edcea_2:;
/* 1803edcee: mulss xmm1, xmm8 */
L_1803edcee_0:;
L_1803edcee_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803edcee_2:;
/* 1803edcf3: movss dword ptr [rsi + rax - 4], xmm1 */
L_1803edcf3_0:;
L_1803edcf3_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,48,8)));
L_1803edcf3_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803edcf3_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803edcf3_4:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803edcf3_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803edcf3_6:;
/* 1803edcf9: mov eax, dword ptr [rdi + 0x10] */
L_1803edcf9_0:;
L_1803edcf9_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edcf9_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edcf9_3:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803edcf9_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edcf9_5:;
/* 1803edcfc: cmp ebx, eax */
L_1803edcfc_0:;
L_1803edcfc_1:;
wr(s->u,59,4,rd(s->r,0,4));
L_1803edcfc_2:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,59,4)));
L_1803edcfc_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,59,4),4,1));
L_1803edcfc_4:;
wr(s->u,63,4,(rd(s->r,24,4)-rd(s->u,59,4)));
L_1803edcfc_5:;
wr(s->r,519,1,(sx(rd(s->u,63,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edcfc_6:;
wr(s->r,518,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803edcfc_7:;
wr(s->u,49,4,(rd(s->u,63,4)&((U)UINT64_C(0xff))));
L_1803edcfc_8:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803edcfc_9:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803edcfc_10:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803edcfc_11:;
/* 1803edcfe: jl 0x1803edcc0 */
L_1803edcfe_0:;
L_1803edcfe_1:;
wr(s->u,48,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803edcfe_2:;
if(rd(s->u,48,1)){return UINT64_C(0x1803edcc0);}
L_1803edcfe_3:;
return UINT64_C(0x1803edd00);
}
uint64_t b_1803edd00(CPU*s){
/* 1803edd00: jmp 0x1803edf6b */
L_1803edd00_0:;
L_1803edd00_1:;
return UINT64_C(0x1803edf6b);
L_1803edd00_2:;
return UINT64_C(0x1803edd05);
}
uint64_t b_1803edd05(CPU*s){
/* 1803edd05: mov eax, dword ptr [rdi + 0x10] */
L_1803edd05_0:;
L_1803edd05_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edd05_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edd05_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803edd05_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edd05_5:;
/* 1803edd08: xor ebx, ebx */
L_1803edd08_0:;
L_1803edd08_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edd08_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edd08_3:;
wr(s->r,24,4,(rd(s->r,24,4)^rd(s->r,24,4)));
L_1803edd08_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803edd08_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edd08_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803edd08_7:;
wr(s->u,14,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803edd08_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803edd08_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803edd08_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803edd08_11:;
/* 1803edd0a: test eax, eax */
L_1803edd0a_0:;
L_1803edd0a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edd0a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edd0a_3:;
wr(s->u,20,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803edd0a_4:;
wr(s->r,519,1,(sx(rd(s->u,20,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edd0a_5:;
wr(s->r,518,1,(rd(s->u,20,4)==((U)UINT64_C(0x0))));
L_1803edd0a_6:;
wr(s->u,14,4,(rd(s->u,20,4)&((U)UINT64_C(0xff))));
L_1803edd0a_7:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803edd0a_8:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803edd0a_9:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803edd0a_10:;
/* 1803edd0c: jle 0x1803edf6b */
L_1803edd0c_0:;
L_1803edd0c_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803edd0c_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803edd0c_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803edf6b);}
L_1803edd0c_4:;
return UINT64_C(0x1803edd12);
}
uint64_t b_1803edd12(CPU*s){
/* 1803edd12: movss xmm6, dword ptr [rip + 0x26d826] */
L_1803edd12_0:;
L_1803edd12_1:;
wr(s->r,4992,4,mr(UINT64_C(0x18065b540),4));
L_1803edd12_2:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803edd12_3:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803edd12_4:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803edd12_5:;
/* 1803edd1a: movss xmm7, dword ptr [rip + 0x41f62a] */
L_1803edd1a_0:;
L_1803edd1a_1:;
wr(s->r,5056,4,mr(UINT64_C(0x18080d34c),4));
L_1803edd1a_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803edd1a_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803edd1a_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803edd1a_5:;
/* 1803edd22: movss xmm8, dword ptr [rip + 0x41f61d] */
L_1803edd22_0:;
L_1803edd22_1:;
wr(s->r,5120,4,mr(UINT64_C(0x18080d348),4));
L_1803edd22_2:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803edd22_3:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803edd22_4:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803edd22_5:;
/* 1803edd2b: mov rsi, rbx */
L_1803edd2b_0:;
L_1803edd2b_1:;
wr(s->r,48,8,rd(s->r,24,8));
L_1803edd2b_2:;
/* 1803edd2e: nop  */
L_1803edd2e_0:;
L_1803edd2e_1:;
/* 1803edd30: movd xmm0, ebx */
L_1803edd30_0:;
L_1803edd30_1:;
wr(s->r,4608,16,rd(s->r,24,4));
L_1803edd30_2:;
/* 1803edd34: dec eax */
L_1803edd34_0:;
L_1803edd34_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,1));
L_1803edd34_2:;
wr(s->r,0,4,(rd(s->r,0,4)-((U)UINT64_C(0x1))));
L_1803edd34_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edd34_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edd34_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edd34_6:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edd34_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803edd34_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803edd34_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803edd34_10:;
/* 1803edd36: movd xmm1, eax */
L_1803edd36_0:;
L_1803edd36_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803edd36_2:;
/* 1803edd3a: cvtdq2ps xmm0, xmm0 */
L_1803edd3a_0:;
L_1803edd3a_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803edd3a_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803edd3a_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803edd3a_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803edd3a_5:;
/* 1803edd3d: mulss xmm0, xmm6 */
L_1803edd3d_0:;
L_1803edd3d_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803edd3d_2:;
/* 1803edd41: cvtdq2ps xmm1, xmm1 */
L_1803edd41_0:;
L_1803edd41_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803edd41_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803edd41_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803edd41_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803edd41_5:;
/* 1803edd44: divss xmm0, xmm1 */
L_1803edd44_0:;
L_1803edd44_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803edd44_2:;
/* 1803edd48: call 0x180609b08 */
L_1803edd48_0:;
L_1803edd48_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803edd48_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803edd4d)));
L_1803edd48_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803edd48_4:;
return UINT64_C(0x1803edd4d);
}
uint64_t b_1803edd30(CPU*s){
/* 1803edd30: movd xmm0, ebx */
L_1803edd30_0:;
L_1803edd30_1:;
wr(s->r,4608,16,rd(s->r,24,4));
L_1803edd30_2:;
/* 1803edd34: dec eax */
L_1803edd34_0:;
L_1803edd34_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,1));
L_1803edd34_2:;
wr(s->r,0,4,(rd(s->r,0,4)-((U)UINT64_C(0x1))));
L_1803edd34_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edd34_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edd34_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edd34_6:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edd34_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803edd34_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803edd34_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803edd34_10:;
/* 1803edd36: movd xmm1, eax */
L_1803edd36_0:;
L_1803edd36_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803edd36_2:;
/* 1803edd3a: cvtdq2ps xmm0, xmm0 */
L_1803edd3a_0:;
L_1803edd3a_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803edd3a_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803edd3a_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803edd3a_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803edd3a_5:;
/* 1803edd3d: mulss xmm0, xmm6 */
L_1803edd3d_0:;
L_1803edd3d_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803edd3d_2:;
/* 1803edd41: cvtdq2ps xmm1, xmm1 */
L_1803edd41_0:;
L_1803edd41_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803edd41_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803edd41_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803edd41_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803edd41_5:;
/* 1803edd44: divss xmm0, xmm1 */
L_1803edd44_0:;
L_1803edd44_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803edd44_2:;
/* 1803edd48: call 0x180609b08 */
L_1803edd48_0:;
L_1803edd48_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803edd48_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803edd4d)));
L_1803edd48_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803edd48_4:;
return UINT64_C(0x1803edd4d);
}
uint64_t b_1803edd4d(CPU*s){
/* 1803edd4d: mov rax, qword ptr [rdi + 0x18] */
L_1803edd4d_0:;
L_1803edd4d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803edd4d_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edd4d_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803edd4d_4:;
/* 1803edd51: movaps xmm1, xmm8 */
L_1803edd51_0:;
L_1803edd51_1:;
wr(s->r,4672,4,rd(s->r,5120,4));
L_1803edd51_2:;
wr(s->r,4676,4,rd(s->r,5124,4));
L_1803edd51_3:;
wr(s->r,4680,4,rd(s->r,5128,4));
L_1803edd51_4:;
wr(s->r,4684,4,rd(s->r,5132,4));
L_1803edd51_5:;
/* 1803edd55: inc ebx */
L_1803edd55_0:;
L_1803edd55_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0x1)),4,0));
L_1803edd55_2:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0x1))));
L_1803edd55_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803edd55_4:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edd55_5:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803edd55_6:;
wr(s->u,49,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803edd55_7:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803edd55_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803edd55_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803edd55_10:;
/* 1803edd57: add rsi, 4 */
L_1803edd57_0:;
L_1803edd57_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803edd57_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x4)),8,0));
L_1803edd57_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x4))));
L_1803edd57_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edd57_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803edd57_6:;
wr(s->u,49,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803edd57_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803edd57_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803edd57_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803edd57_10:;
/* 1803edd5b: mulss xmm0, xmm7 */
L_1803edd5b_0:;
L_1803edd5b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803edd5b_2:;
/* 1803edd5f: subss xmm1, xmm0 */
L_1803edd5f_0:;
L_1803edd5f_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803edd5f_2:;
/* 1803edd63: movss dword ptr [rsi + rax - 4], xmm1 */
L_1803edd63_0:;
L_1803edd63_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,48,8)));
L_1803edd63_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803edd63_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803edd63_4:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803edd63_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803edd63_6:;
/* 1803edd69: mov eax, dword ptr [rdi + 0x10] */
L_1803edd69_0:;
L_1803edd69_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edd69_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edd69_3:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803edd69_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edd69_5:;
/* 1803edd6c: cmp ebx, eax */
L_1803edd6c_0:;
L_1803edd6c_1:;
wr(s->u,59,4,rd(s->r,0,4));
L_1803edd6c_2:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,59,4)));
L_1803edd6c_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,59,4),4,1));
L_1803edd6c_4:;
wr(s->u,63,4,(rd(s->r,24,4)-rd(s->u,59,4)));
L_1803edd6c_5:;
wr(s->r,519,1,(sx(rd(s->u,63,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edd6c_6:;
wr(s->r,518,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803edd6c_7:;
wr(s->u,49,4,(rd(s->u,63,4)&((U)UINT64_C(0xff))));
L_1803edd6c_8:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803edd6c_9:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803edd6c_10:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803edd6c_11:;
/* 1803edd6e: jl 0x1803edd30 */
L_1803edd6e_0:;
L_1803edd6e_1:;
wr(s->u,48,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803edd6e_2:;
if(rd(s->u,48,1)){return UINT64_C(0x1803edd30);}
L_1803edd6e_3:;
return UINT64_C(0x1803edd70);
}
uint64_t b_1803edd70(CPU*s){
/* 1803edd70: jmp 0x1803edf6b */
L_1803edd70_0:;
L_1803edd70_1:;
return UINT64_C(0x1803edf6b);
L_1803edd70_2:;
return UINT64_C(0x1803edd75);
}
uint64_t b_1803edd75(CPU*s){
/* 1803edd75: mov eax, dword ptr [rdi + 0x10] */
L_1803edd75_0:;
L_1803edd75_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edd75_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edd75_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803edd75_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edd75_5:;
/* 1803edd78: xor ebx, ebx */
L_1803edd78_0:;
L_1803edd78_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edd78_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edd78_3:;
wr(s->r,24,4,(rd(s->r,24,4)^rd(s->r,24,4)));
L_1803edd78_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803edd78_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edd78_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803edd78_7:;
wr(s->u,14,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803edd78_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803edd78_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803edd78_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803edd78_11:;
/* 1803edd7a: test eax, eax */
L_1803edd7a_0:;
L_1803edd7a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edd7a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edd7a_3:;
wr(s->u,20,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803edd7a_4:;
wr(s->r,519,1,(sx(rd(s->u,20,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edd7a_5:;
wr(s->r,518,1,(rd(s->u,20,4)==((U)UINT64_C(0x0))));
L_1803edd7a_6:;
wr(s->u,14,4,(rd(s->u,20,4)&((U)UINT64_C(0xff))));
L_1803edd7a_7:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803edd7a_8:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803edd7a_9:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803edd7a_10:;
/* 1803edd7c: jle 0x1803edf6b */
L_1803edd7c_0:;
L_1803edd7c_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803edd7c_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803edd7c_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803edf6b);}
L_1803edd7c_4:;
return UINT64_C(0x1803edd82);
}
uint64_t b_1803edd82(CPU*s){
/* 1803edd82: movss xmm8, dword ptr [rip + 0x26d7b5] */
L_1803edd82_0:;
L_1803edd82_1:;
wr(s->r,5120,4,mr(UINT64_C(0x18065b540),4));
L_1803edd82_2:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803edd82_3:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803edd82_4:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803edd82_5:;
/* 1803edd8b: movaps xmmword ptr [rsp + 0x40], xmm9 */
L_1803edd8b_0:;
L_1803edd8b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803edd8b_2:;
wr(s->u,24,16,rd(s->r,5184,16));
L_1803edd8b_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,24,16));
L_1803edd8b_4:;
/* 1803edd91: movss xmm9, dword ptr [rip + 0x2643ca] */
L_1803edd91_0:;
L_1803edd91_1:;
wr(s->r,5184,4,mr(UINT64_C(0x180652164),4));
L_1803edd91_2:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803edd91_3:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803edd91_4:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803edd91_5:;
/* 1803edd9a: movaps xmmword ptr [rsp + 0x30], xmm10 */
L_1803edd9a_0:;
L_1803edd9a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803edd9a_2:;
wr(s->u,24,16,rd(s->r,5248,16));
L_1803edd9a_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,24,16));
L_1803edd9a_4:;
/* 1803edda0: movaps xmmword ptr [rsp + 0x20], xmm11 */
L_1803edda0_0:;
L_1803edda0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803edda0_2:;
wr(s->u,24,16,rd(s->r,5312,16));
L_1803edda0_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,24,16));
L_1803edda0_4:;
/* 1803edda6: mov rsi, rbx */
L_1803edda6_0:;
L_1803edda6_1:;
wr(s->r,48,8,rd(s->r,24,8));
L_1803edda6_2:;
/* 1803edda9: movss xmm11, dword ptr [rip + 0x41f592] */
L_1803edda9_0:;
L_1803edda9_1:;
wr(s->r,5312,4,mr(UINT64_C(0x18080d344),4));
L_1803edda9_2:;
wr(s->r,5316,4,((U)UINT64_C(0x0)));
L_1803edda9_3:;
wr(s->r,5320,4,((U)UINT64_C(0x0)));
L_1803edda9_4:;
wr(s->r,5324,4,((U)UINT64_C(0x0)));
L_1803edda9_5:;
/* 1803eddb2: movss xmm10, dword ptr [rip + 0x41f585] */
L_1803eddb2_0:;
L_1803eddb2_1:;
wr(s->r,5248,4,mr(UINT64_C(0x18080d340),4));
L_1803eddb2_2:;
wr(s->r,5252,4,((U)UINT64_C(0x0)));
L_1803eddb2_3:;
wr(s->r,5256,4,((U)UINT64_C(0x0)));
L_1803eddb2_4:;
wr(s->r,5260,4,((U)UINT64_C(0x0)));
L_1803eddb2_5:;
/* 1803eddbb: nop dword ptr [rax + rax] */
L_1803eddbb_0:;
L_1803eddbb_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803eddbb_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803eddbb_3:;
/* 1803eddc0: movd xmm0, ebx */
L_1803eddc0_0:;
L_1803eddc0_1:;
wr(s->r,4608,16,rd(s->r,24,4));
L_1803eddc0_2:;
/* 1803eddc4: dec eax */
L_1803eddc4_0:;
L_1803eddc4_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,1));
L_1803eddc4_2:;
wr(s->r,0,4,(rd(s->r,0,4)-((U)UINT64_C(0x1))));
L_1803eddc4_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eddc4_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eddc4_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803eddc4_6:;
wr(s->u,40,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803eddc4_7:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803eddc4_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803eddc4_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803eddc4_10:;
/* 1803eddc6: movd xmm7, eax */
L_1803eddc6_0:;
L_1803eddc6_1:;
wr(s->r,5056,16,rd(s->r,0,4));
L_1803eddc6_2:;
/* 1803eddca: cvtdq2ps xmm0, xmm0 */
L_1803eddca_0:;
L_1803eddca_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803eddca_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803eddca_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803eddca_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803eddca_5:;
/* 1803eddcd: mulss xmm0, xmm8 */
L_1803eddcd_0:;
L_1803eddcd_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803eddcd_2:;
/* 1803eddd2: cvtdq2ps xmm7, xmm7 */
L_1803eddd2_0:;
L_1803eddd2_1:;
wr(s->r,5056,4,fb((double)sx(rd(s->r,5056,4),4),4));
L_1803eddd2_2:;
wr(s->r,5060,4,fb((double)sx(rd(s->r,5060,4),4),4));
L_1803eddd2_3:;
wr(s->r,5064,4,fb((double)sx(rd(s->r,5064,4),4),4));
L_1803eddd2_4:;
wr(s->r,5068,4,fb((double)sx(rd(s->r,5068,4),4),4));
L_1803eddd2_5:;
/* 1803eddd5: divss xmm0, xmm7 */
L_1803eddd5_0:;
L_1803eddd5_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,5056,4),4),4));
L_1803eddd5_2:;
/* 1803eddd9: call 0x180609b08 */
L_1803eddd9_0:;
L_1803eddd9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eddd9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eddde)));
L_1803eddd9_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803eddd9_4:;
return UINT64_C(0x1803eddde);
}
uint64_t b_1803edd8b(CPU*s){
/* 1803edd8b: movaps xmmword ptr [rsp + 0x40], xmm9 */
L_1803edd8b_0:;
L_1803edd8b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803edd8b_2:;
wr(s->u,24,16,rd(s->r,5184,16));
L_1803edd8b_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,24,16));
L_1803edd8b_4:;
/* 1803edd91: movss xmm9, dword ptr [rip + 0x2643ca] */
L_1803edd91_0:;
L_1803edd91_1:;
wr(s->r,5184,4,mr(UINT64_C(0x180652164),4));
L_1803edd91_2:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803edd91_3:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803edd91_4:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803edd91_5:;
/* 1803edd9a: movaps xmmword ptr [rsp + 0x30], xmm10 */
L_1803edd9a_0:;
L_1803edd9a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803edd9a_2:;
wr(s->u,24,16,rd(s->r,5248,16));
L_1803edd9a_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,24,16));
L_1803edd9a_4:;
/* 1803edda0: movaps xmmword ptr [rsp + 0x20], xmm11 */
L_1803edda0_0:;
L_1803edda0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803edda0_2:;
wr(s->u,24,16,rd(s->r,5312,16));
L_1803edda0_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,24,16));
L_1803edda0_4:;
/* 1803edda6: mov rsi, rbx */
L_1803edda6_0:;
L_1803edda6_1:;
wr(s->r,48,8,rd(s->r,24,8));
L_1803edda6_2:;
/* 1803edda9: movss xmm11, dword ptr [rip + 0x41f592] */
L_1803edda9_0:;
L_1803edda9_1:;
wr(s->r,5312,4,mr(UINT64_C(0x18080d344),4));
L_1803edda9_2:;
wr(s->r,5316,4,((U)UINT64_C(0x0)));
L_1803edda9_3:;
wr(s->r,5320,4,((U)UINT64_C(0x0)));
L_1803edda9_4:;
wr(s->r,5324,4,((U)UINT64_C(0x0)));
L_1803edda9_5:;
/* 1803eddb2: movss xmm10, dword ptr [rip + 0x41f585] */
L_1803eddb2_0:;
L_1803eddb2_1:;
wr(s->r,5248,4,mr(UINT64_C(0x18080d340),4));
L_1803eddb2_2:;
wr(s->r,5252,4,((U)UINT64_C(0x0)));
L_1803eddb2_3:;
wr(s->r,5256,4,((U)UINT64_C(0x0)));
L_1803eddb2_4:;
wr(s->r,5260,4,((U)UINT64_C(0x0)));
L_1803eddb2_5:;
/* 1803eddbb: nop dword ptr [rax + rax] */
L_1803eddbb_0:;
L_1803eddbb_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803eddbb_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803eddbb_3:;
/* 1803eddc0: movd xmm0, ebx */
L_1803eddc0_0:;
L_1803eddc0_1:;
wr(s->r,4608,16,rd(s->r,24,4));
L_1803eddc0_2:;
/* 1803eddc4: dec eax */
L_1803eddc4_0:;
L_1803eddc4_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,1));
L_1803eddc4_2:;
wr(s->r,0,4,(rd(s->r,0,4)-((U)UINT64_C(0x1))));
L_1803eddc4_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eddc4_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eddc4_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803eddc4_6:;
wr(s->u,40,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803eddc4_7:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803eddc4_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803eddc4_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803eddc4_10:;
/* 1803eddc6: movd xmm7, eax */
L_1803eddc6_0:;
L_1803eddc6_1:;
wr(s->r,5056,16,rd(s->r,0,4));
L_1803eddc6_2:;
/* 1803eddca: cvtdq2ps xmm0, xmm0 */
L_1803eddca_0:;
L_1803eddca_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803eddca_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803eddca_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803eddca_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803eddca_5:;
/* 1803eddcd: mulss xmm0, xmm8 */
L_1803eddcd_0:;
L_1803eddcd_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803eddcd_2:;
/* 1803eddd2: cvtdq2ps xmm7, xmm7 */
L_1803eddd2_0:;
L_1803eddd2_1:;
wr(s->r,5056,4,fb((double)sx(rd(s->r,5056,4),4),4));
L_1803eddd2_2:;
wr(s->r,5060,4,fb((double)sx(rd(s->r,5060,4),4),4));
L_1803eddd2_3:;
wr(s->r,5064,4,fb((double)sx(rd(s->r,5064,4),4),4));
L_1803eddd2_4:;
wr(s->r,5068,4,fb((double)sx(rd(s->r,5068,4),4),4));
L_1803eddd2_5:;
/* 1803eddd5: divss xmm0, xmm7 */
L_1803eddd5_0:;
L_1803eddd5_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,5056,4),4),4));
L_1803eddd5_2:;
/* 1803eddd9: call 0x180609b08 */
L_1803eddd9_0:;
L_1803eddd9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eddd9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eddde)));
L_1803eddd9_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803eddd9_4:;
return UINT64_C(0x1803eddde);
}
uint64_t b_1803eddc0(CPU*s){
/* 1803eddc0: movd xmm0, ebx */
L_1803eddc0_0:;
L_1803eddc0_1:;
wr(s->r,4608,16,rd(s->r,24,4));
L_1803eddc0_2:;
/* 1803eddc4: dec eax */
L_1803eddc4_0:;
L_1803eddc4_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,1));
L_1803eddc4_2:;
wr(s->r,0,4,(rd(s->r,0,4)-((U)UINT64_C(0x1))));
L_1803eddc4_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eddc4_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eddc4_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803eddc4_6:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803eddc4_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803eddc4_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803eddc4_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803eddc4_10:;
/* 1803eddc6: movd xmm7, eax */
L_1803eddc6_0:;
L_1803eddc6_1:;
wr(s->r,5056,16,rd(s->r,0,4));
L_1803eddc6_2:;
/* 1803eddca: cvtdq2ps xmm0, xmm0 */
L_1803eddca_0:;
L_1803eddca_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803eddca_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803eddca_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803eddca_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803eddca_5:;
/* 1803eddcd: mulss xmm0, xmm8 */
L_1803eddcd_0:;
L_1803eddcd_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803eddcd_2:;
/* 1803eddd2: cvtdq2ps xmm7, xmm7 */
L_1803eddd2_0:;
L_1803eddd2_1:;
wr(s->r,5056,4,fb((double)sx(rd(s->r,5056,4),4),4));
L_1803eddd2_2:;
wr(s->r,5060,4,fb((double)sx(rd(s->r,5060,4),4),4));
L_1803eddd2_3:;
wr(s->r,5064,4,fb((double)sx(rd(s->r,5064,4),4),4));
L_1803eddd2_4:;
wr(s->r,5068,4,fb((double)sx(rd(s->r,5068,4),4),4));
L_1803eddd2_5:;
/* 1803eddd5: divss xmm0, xmm7 */
L_1803eddd5_0:;
L_1803eddd5_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,5056,4),4),4));
L_1803eddd5_2:;
/* 1803eddd9: call 0x180609b08 */
L_1803eddd9_0:;
L_1803eddd9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eddd9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eddde)));
L_1803eddd9_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803eddd9_4:;
return UINT64_C(0x1803eddde);
}
uint64_t b_1803eddde(CPU*s){
/* 1803eddde: lea eax, [rbx + rbx] */
L_1803eddde_0:;
L_1803eddde_1:;
wr(s->u,0,8,(rd(s->r,24,8)*((U)UINT64_C(0x1))));
L_1803eddde_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803eddde_3:;
wr(s->r,0,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803eddde_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eddde_5:;
/* 1803edde1: movaps xmm6, xmm10 */
L_1803edde1_0:;
L_1803edde1_1:;
wr(s->r,4992,4,rd(s->r,5248,4));
L_1803edde1_2:;
wr(s->r,4996,4,rd(s->r,5252,4));
L_1803edde1_3:;
wr(s->r,5000,4,rd(s->r,5256,4));
L_1803edde1_4:;
wr(s->r,5004,4,rd(s->r,5260,4));
L_1803edde1_5:;
/* 1803edde5: mulss xmm0, xmm9 */
L_1803edde5_0:;
L_1803edde5_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5184,4),4),4));
L_1803edde5_2:;
/* 1803eddea: subss xmm6, xmm0 */
L_1803eddea_0:;
L_1803eddea_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803eddea_2:;
/* 1803eddee: movd xmm0, eax */
L_1803eddee_0:;
L_1803eddee_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803eddee_2:;
/* 1803eddf2: cvtdq2ps xmm0, xmm0 */
L_1803eddf2_0:;
L_1803eddf2_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803eddf2_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803eddf2_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803eddf2_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803eddf2_5:;
/* 1803eddf5: mulss xmm0, xmm8 */
L_1803eddf5_0:;
L_1803eddf5_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803eddf5_2:;
/* 1803eddfa: divss xmm0, xmm7 */
L_1803eddfa_0:;
L_1803eddfa_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,5056,4),4),4));
L_1803eddfa_2:;
/* 1803eddfe: call 0x180609b08 */
L_1803eddfe_0:;
L_1803eddfe_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eddfe_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ede03)));
L_1803eddfe_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803eddfe_4:;
return UINT64_C(0x1803ede03);
}
uint64_t b_1803ede03(CPU*s){
/* 1803ede03: mov rax, qword ptr [rdi + 0x18] */
L_1803ede03_0:;
L_1803ede03_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803ede03_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ede03_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803ede03_4:;
/* 1803ede07: inc ebx */
L_1803ede07_0:;
L_1803ede07_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0x1)),4,0));
L_1803ede07_2:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0x1))));
L_1803ede07_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803ede07_4:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ede07_5:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803ede07_6:;
wr(s->u,49,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803ede07_7:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803ede07_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803ede07_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803ede07_10:;
/* 1803ede09: add rsi, 4 */
L_1803ede09_0:;
L_1803ede09_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803ede09_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x4)),8,0));
L_1803ede09_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x4))));
L_1803ede09_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ede09_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803ede09_6:;
wr(s->u,49,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803ede09_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803ede09_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803ede09_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803ede09_10:;
/* 1803ede0d: mulss xmm0, xmm11 */
L_1803ede0d_0:;
L_1803ede0d_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5312,4),4),4));
L_1803ede0d_2:;
/* 1803ede12: addss xmm6, xmm0 */
L_1803ede12_0:;
L_1803ede12_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ede12_2:;
/* 1803ede16: movss dword ptr [rsi + rax - 4], xmm6 */
L_1803ede16_0:;
L_1803ede16_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,48,8)));
L_1803ede16_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ede16_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ede16_4:;
wr(s->u,32,4,rd(s->r,4992,4));
L_1803ede16_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803ede16_6:;
/* 1803ede1c: mov eax, dword ptr [rdi + 0x10] */
L_1803ede1c_0:;
L_1803ede1c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ede1c_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ede1c_3:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803ede1c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ede1c_5:;
/* 1803ede1f: cmp ebx, eax */
L_1803ede1f_0:;
L_1803ede1f_1:;
wr(s->u,59,4,rd(s->r,0,4));
L_1803ede1f_2:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,59,4)));
L_1803ede1f_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,59,4),4,1));
L_1803ede1f_4:;
wr(s->u,63,4,(rd(s->r,24,4)-rd(s->u,59,4)));
L_1803ede1f_5:;
wr(s->r,519,1,(sx(rd(s->u,63,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ede1f_6:;
wr(s->r,518,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803ede1f_7:;
wr(s->u,49,4,(rd(s->u,63,4)&((U)UINT64_C(0xff))));
L_1803ede1f_8:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803ede1f_9:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803ede1f_10:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803ede1f_11:;
/* 1803ede21: jl 0x1803eddc0 */
L_1803ede21_0:;
L_1803ede21_1:;
wr(s->u,48,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ede21_2:;
if(rd(s->u,48,1)){return UINT64_C(0x1803eddc0);}
L_1803ede21_3:;
return UINT64_C(0x1803ede23);
}
uint64_t b_1803ede23(CPU*s){
/* 1803ede23: movaps xmm11, xmmword ptr [rsp + 0x20] */
L_1803ede23_0:;
L_1803ede23_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ede23_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803ede23_3:;
wr(s->u,24,16,rd(s->u,8,16));
L_1803ede23_4:;
wr(s->r,5312,4,rd(s->u,24,4));
L_1803ede23_5:;
wr(s->r,5316,4,rd(s->u,28,4));
L_1803ede23_6:;
wr(s->r,5320,4,rd(s->u,32,4));
L_1803ede23_7:;
wr(s->r,5324,4,rd(s->u,36,4));
L_1803ede23_8:;
/* 1803ede29: movaps xmm10, xmmword ptr [rsp + 0x30] */
L_1803ede29_0:;
L_1803ede29_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ede29_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803ede29_3:;
wr(s->u,24,16,rd(s->u,8,16));
L_1803ede29_4:;
wr(s->r,5248,4,rd(s->u,24,4));
L_1803ede29_5:;
wr(s->r,5252,4,rd(s->u,28,4));
L_1803ede29_6:;
wr(s->r,5256,4,rd(s->u,32,4));
L_1803ede29_7:;
wr(s->r,5260,4,rd(s->u,36,4));
L_1803ede29_8:;
/* 1803ede2f: movaps xmm9, xmmword ptr [rsp + 0x40] */
L_1803ede2f_0:;
L_1803ede2f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ede2f_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803ede2f_3:;
wr(s->u,24,16,rd(s->u,8,16));
L_1803ede2f_4:;
wr(s->r,5184,4,rd(s->u,24,4));
L_1803ede2f_5:;
wr(s->r,5188,4,rd(s->u,28,4));
L_1803ede2f_6:;
wr(s->r,5192,4,rd(s->u,32,4));
L_1803ede2f_7:;
wr(s->r,5196,4,rd(s->u,36,4));
L_1803ede2f_8:;
/* 1803ede35: jmp 0x1803edf6b */
L_1803ede35_0:;
L_1803ede35_1:;
return UINT64_C(0x1803edf6b);
L_1803ede35_2:;
return UINT64_C(0x1803ede3a);
}
uint64_t b_1803ede3a(CPU*s){
/* 1803ede3a: xor ebx, ebx */
L_1803ede3a_0:;
L_1803ede3a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ede3a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ede3a_3:;
wr(s->r,24,4,(rd(s->r,24,4)^rd(s->r,24,4)));
L_1803ede3a_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803ede3a_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ede3a_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803ede3a_7:;
wr(s->u,14,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803ede3a_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803ede3a_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803ede3a_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803ede3a_11:;
/* 1803ede3c: test dword ptr [rdi + 0x10], 0xfffffffe */
L_1803ede3c_0:;
L_1803ede3c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ede3c_2:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ede3c_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ede3c_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ede3c_5:;
wr(s->u,20,4,(rd(s->u,8,4)&((U)UINT64_C(0xfffffffe))));
L_1803ede3c_6:;
wr(s->r,519,1,(sx(rd(s->u,20,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ede3c_7:;
wr(s->r,518,1,(rd(s->u,20,4)==((U)UINT64_C(0x0))));
L_1803ede3c_8:;
wr(s->u,14,4,(rd(s->u,20,4)&((U)UINT64_C(0xff))));
L_1803ede3c_9:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803ede3c_10:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803ede3c_11:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803ede3c_12:;
/* 1803ede43: mov r8, rbx */
L_1803ede43_0:;
L_1803ede43_1:;
wr(s->r,128,8,rd(s->r,24,8));
L_1803ede43_2:;
/* 1803ede46: jle 0x1803edf6b */
L_1803ede46_0:;
L_1803ede46_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ede46_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803ede46_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803edf6b);}
L_1803ede46_4:;
return UINT64_C(0x1803ede4c);
}
uint64_t b_1803ede4c(CPU*s){
/* 1803ede4c: movss xmm3, dword ptr [rip + 0x25edf0] */
L_1803ede4c_0:;
L_1803ede4c_1:;
wr(s->r,4800,4,mr(UINT64_C(0x18064cc44),4));
L_1803ede4c_2:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ede4c_3:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ede4c_4:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ede4c_5:;
/* 1803ede54: movss xmm4, dword ptr [rip + 0x264308] */
L_1803ede54_0:;
L_1803ede54_1:;
wr(s->r,4864,4,mr(UINT64_C(0x180652164),4));
L_1803ede54_2:;
wr(s->r,4868,4,((U)UINT64_C(0x0)));
L_1803ede54_3:;
wr(s->r,4872,4,((U)UINT64_C(0x0)));
L_1803ede54_4:;
wr(s->r,4876,4,((U)UINT64_C(0x0)));
L_1803ede54_5:;
/* 1803ede5c: nop dword ptr [rax] */
L_1803ede5c_0:;
L_1803ede5c_1:;
/* 1803ede60: mov eax, dword ptr [rdi + 0x10] */
L_1803ede60_0:;
L_1803ede60_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ede60_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ede60_3:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803ede60_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ede60_5:;
/* 1803ede63: movd xmm0, ebx */
L_1803ede63_0:;
L_1803ede63_1:;
wr(s->r,4608,16,rd(s->r,24,4));
L_1803ede63_2:;
/* 1803ede67: inc ebx */
L_1803ede67_0:;
L_1803ede67_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0x1)),4,0));
L_1803ede67_2:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0x1))));
L_1803ede67_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803ede67_4:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ede67_5:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803ede67_6:;
wr(s->u,65,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803ede67_7:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803ede67_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ede67_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ede67_10:;
/* 1803ede69: dec eax */
L_1803ede69_0:;
L_1803ede69_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,1));
L_1803ede69_2:;
wr(s->r,0,4,(rd(s->r,0,4)-((U)UINT64_C(0x1))));
L_1803ede69_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ede69_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ede69_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ede69_6:;
wr(s->u,65,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ede69_7:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803ede69_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ede69_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ede69_10:;
/* 1803ede6b: movd xmm2, eax */
L_1803ede6b_0:;
L_1803ede6b_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803ede6b_2:;
/* 1803ede6f: mov rax, qword ptr [rdi + 0x18] */
L_1803ede6f_0:;
L_1803ede6f_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803ede6f_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ede6f_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803ede6f_4:;
/* 1803ede73: cvtdq2ps xmm0, xmm0 */
L_1803ede73_0:;
L_1803ede73_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ede73_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ede73_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ede73_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ede73_5:;
/* 1803ede76: cvtdq2ps xmm2, xmm2 */
L_1803ede76_0:;
L_1803ede76_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803ede76_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803ede76_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803ede76_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803ede76_5:;
/* 1803ede79: mulss xmm2, xmm4 */
L_1803ede79_0:;
L_1803ede79_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4864,4),4),4));
L_1803ede79_2:;
/* 1803ede7d: movaps xmm1, xmm2 */
L_1803ede7d_0:;
L_1803ede7d_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803ede7d_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803ede7d_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803ede7d_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803ede7d_5:;
/* 1803ede80: subss xmm1, xmm0 */
L_1803ede80_0:;
L_1803ede80_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ede80_2:;
/* 1803ede84: movaps xmm0, xmm3 */
L_1803ede84_0:;
L_1803ede84_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ede84_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ede84_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ede84_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ede84_5:;
/* 1803ede87: divss xmm1, xmm2 */
L_1803ede87_0:;
L_1803ede87_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803ede87_2:;
/* 1803ede8b: subss xmm0, xmm1 */
L_1803ede8b_0:;
L_1803ede8b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ede8b_2:;
/* 1803ede8f: movss dword ptr [rax + r8*4], xmm0 */
L_1803ede8f_0:;
L_1803ede8f_1:;
wr(s->u,8,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803ede8f_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803ede8f_3:;
wr(s->u,48,4,rd(s->r,4608,4));
L_1803ede8f_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,48,4));
L_1803ede8f_5:;
/* 1803ede95: mov rdx, qword ptr [rdi + 0x18] */
L_1803ede95_0:;
L_1803ede95_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803ede95_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ede95_3:;
wr(s->r,16,8,rd(s->u,56,8));
L_1803ede95_4:;
/* 1803ede99: movsxd rcx, dword ptr [rdi + 0x10] */
L_1803ede99_0:;
L_1803ede99_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ede99_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ede99_3:;
wr(s->r,8,8,(U)sx(rd(s->u,52,4),4));
L_1803ede99_4:;
/* 1803ede9d: mov eax, dword ptr [rdx + r8*4] */
L_1803ede9d_0:;
L_1803ede9d_1:;
wr(s->u,8,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803ede9d_2:;
wr(s->u,16,8,(rd(s->r,16,8)+rd(s->u,8,8)));
L_1803ede9d_3:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803ede9d_4:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803ede9d_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ede9d_6:;
/* 1803edea1: sub rcx, r8 */
L_1803edea1_0:;
L_1803edea1_1:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->r,128,8)));
L_1803edea1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,128,8),8,1));
L_1803edea1_3:;
wr(s->r,8,8,(rd(s->r,8,8)-rd(s->r,128,8)));
L_1803edea1_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edea1_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803edea1_6:;
wr(s->u,65,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803edea1_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803edea1_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803edea1_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803edea1_10:;
/* 1803edea4: inc r8 */
L_1803edea4_0:;
L_1803edea4_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x1)),8,0));
L_1803edea4_2:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x1))));
L_1803edea4_3:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edea4_4:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803edea4_5:;
wr(s->u,65,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803edea4_6:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803edea4_7:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803edea4_8:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803edea4_9:;
/* 1803edea7: mov dword ptr [rdx + rcx*4 - 4], eax */
L_1803edea7_0:;
L_1803edea7_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,16,8)));
L_1803edea7_2:;
wr(s->u,32,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803edea7_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803edea7_4:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803edea7_5:;
mw((uint64_t)rd(s->u,40,8),4,rd(s->u,48,4));
L_1803edea7_6:;
/* 1803edeab: mov eax, dword ptr [rdi + 0x10] */
L_1803edeab_0:;
L_1803edeab_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edeab_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edeab_3:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803edeab_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edeab_5:;
/* 1803edeae: sar eax, 1 */
L_1803edeae_0:;
L_1803edeae_1:;
wr(s->u,83,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803edeae_2:;
wr(s->r,512,1,(rd(s->u,83,4)!=((U)UINT64_C(0x0))));
L_1803edeae_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edeae_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803edeae_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edeae_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edeae_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edeae_8:;
wr(s->u,65,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edeae_9:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803edeae_10:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803edeae_11:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803edeae_12:;
/* 1803edeb0: cmp ebx, eax */
L_1803edeb0_0:;
L_1803edeb0_1:;
wr(s->u,75,4,rd(s->r,0,4));
L_1803edeb0_2:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,75,4)));
L_1803edeb0_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,75,4),4,1));
L_1803edeb0_4:;
wr(s->u,79,4,(rd(s->r,24,4)-rd(s->u,75,4)));
L_1803edeb0_5:;
wr(s->r,519,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edeb0_6:;
wr(s->r,518,1,(rd(s->u,79,4)==((U)UINT64_C(0x0))));
L_1803edeb0_7:;
wr(s->u,65,4,(rd(s->u,79,4)&((U)UINT64_C(0xff))));
L_1803edeb0_8:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803edeb0_9:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803edeb0_10:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803edeb0_11:;
/* 1803edeb2: jl 0x1803ede60 */
L_1803edeb2_0:;
L_1803edeb2_1:;
wr(s->u,64,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803edeb2_2:;
if(rd(s->u,64,1)){goto L_1803ede60_0;}
L_1803edeb2_3:;
return UINT64_C(0x1803edeb4);
}
uint64_t b_1803ede60(CPU*s){
/* 1803ede60: mov eax, dword ptr [rdi + 0x10] */
L_1803ede60_0:;
L_1803ede60_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ede60_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ede60_3:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803ede60_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ede60_5:;
/* 1803ede63: movd xmm0, ebx */
L_1803ede63_0:;
L_1803ede63_1:;
wr(s->r,4608,16,rd(s->r,24,4));
L_1803ede63_2:;
/* 1803ede67: inc ebx */
L_1803ede67_0:;
L_1803ede67_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0x1)),4,0));
L_1803ede67_2:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0x1))));
L_1803ede67_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803ede67_4:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ede67_5:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803ede67_6:;
wr(s->u,65,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803ede67_7:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803ede67_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ede67_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ede67_10:;
/* 1803ede69: dec eax */
L_1803ede69_0:;
L_1803ede69_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,1));
L_1803ede69_2:;
wr(s->r,0,4,(rd(s->r,0,4)-((U)UINT64_C(0x1))));
L_1803ede69_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ede69_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ede69_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ede69_6:;
wr(s->u,65,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ede69_7:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803ede69_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ede69_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ede69_10:;
/* 1803ede6b: movd xmm2, eax */
L_1803ede6b_0:;
L_1803ede6b_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803ede6b_2:;
/* 1803ede6f: mov rax, qword ptr [rdi + 0x18] */
L_1803ede6f_0:;
L_1803ede6f_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803ede6f_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ede6f_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803ede6f_4:;
/* 1803ede73: cvtdq2ps xmm0, xmm0 */
L_1803ede73_0:;
L_1803ede73_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ede73_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ede73_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ede73_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ede73_5:;
/* 1803ede76: cvtdq2ps xmm2, xmm2 */
L_1803ede76_0:;
L_1803ede76_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803ede76_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803ede76_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803ede76_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803ede76_5:;
/* 1803ede79: mulss xmm2, xmm4 */
L_1803ede79_0:;
L_1803ede79_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4864,4),4),4));
L_1803ede79_2:;
/* 1803ede7d: movaps xmm1, xmm2 */
L_1803ede7d_0:;
L_1803ede7d_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803ede7d_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803ede7d_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803ede7d_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803ede7d_5:;
/* 1803ede80: subss xmm1, xmm0 */
L_1803ede80_0:;
L_1803ede80_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ede80_2:;
/* 1803ede84: movaps xmm0, xmm3 */
L_1803ede84_0:;
L_1803ede84_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ede84_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ede84_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ede84_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ede84_5:;
/* 1803ede87: divss xmm1, xmm2 */
L_1803ede87_0:;
L_1803ede87_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803ede87_2:;
/* 1803ede8b: subss xmm0, xmm1 */
L_1803ede8b_0:;
L_1803ede8b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ede8b_2:;
/* 1803ede8f: movss dword ptr [rax + r8*4], xmm0 */
L_1803ede8f_0:;
L_1803ede8f_1:;
wr(s->u,8,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803ede8f_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803ede8f_3:;
wr(s->u,48,4,rd(s->r,4608,4));
L_1803ede8f_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,48,4));
L_1803ede8f_5:;
/* 1803ede95: mov rdx, qword ptr [rdi + 0x18] */
L_1803ede95_0:;
L_1803ede95_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803ede95_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ede95_3:;
wr(s->r,16,8,rd(s->u,56,8));
L_1803ede95_4:;
/* 1803ede99: movsxd rcx, dword ptr [rdi + 0x10] */
L_1803ede99_0:;
L_1803ede99_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803ede99_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ede99_3:;
wr(s->r,8,8,(U)sx(rd(s->u,52,4),4));
L_1803ede99_4:;
/* 1803ede9d: mov eax, dword ptr [rdx + r8*4] */
L_1803ede9d_0:;
L_1803ede9d_1:;
wr(s->u,8,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803ede9d_2:;
wr(s->u,16,8,(rd(s->r,16,8)+rd(s->u,8,8)));
L_1803ede9d_3:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803ede9d_4:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803ede9d_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ede9d_6:;
/* 1803edea1: sub rcx, r8 */
L_1803edea1_0:;
L_1803edea1_1:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->r,128,8)));
L_1803edea1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,128,8),8,1));
L_1803edea1_3:;
wr(s->r,8,8,(rd(s->r,8,8)-rd(s->r,128,8)));
L_1803edea1_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edea1_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803edea1_6:;
wr(s->u,65,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803edea1_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803edea1_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803edea1_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803edea1_10:;
/* 1803edea4: inc r8 */
L_1803edea4_0:;
L_1803edea4_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x1)),8,0));
L_1803edea4_2:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x1))));
L_1803edea4_3:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edea4_4:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803edea4_5:;
wr(s->u,65,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803edea4_6:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803edea4_7:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803edea4_8:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803edea4_9:;
/* 1803edea7: mov dword ptr [rdx + rcx*4 - 4], eax */
L_1803edea7_0:;
L_1803edea7_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,16,8)));
L_1803edea7_2:;
wr(s->u,32,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803edea7_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803edea7_4:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803edea7_5:;
mw((uint64_t)rd(s->u,40,8),4,rd(s->u,48,4));
L_1803edea7_6:;
/* 1803edeab: mov eax, dword ptr [rdi + 0x10] */
L_1803edeab_0:;
L_1803edeab_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edeab_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edeab_3:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803edeab_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edeab_5:;
/* 1803edeae: sar eax, 1 */
L_1803edeae_0:;
L_1803edeae_1:;
wr(s->u,83,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803edeae_2:;
wr(s->r,512,1,(rd(s->u,83,4)!=((U)UINT64_C(0x0))));
L_1803edeae_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edeae_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803edeae_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edeae_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edeae_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edeae_8:;
wr(s->u,65,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edeae_9:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803edeae_10:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803edeae_11:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803edeae_12:;
/* 1803edeb0: cmp ebx, eax */
L_1803edeb0_0:;
L_1803edeb0_1:;
wr(s->u,75,4,rd(s->r,0,4));
L_1803edeb0_2:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,75,4)));
L_1803edeb0_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,75,4),4,1));
L_1803edeb0_4:;
wr(s->u,79,4,(rd(s->r,24,4)-rd(s->u,75,4)));
L_1803edeb0_5:;
wr(s->r,519,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edeb0_6:;
wr(s->r,518,1,(rd(s->u,79,4)==((U)UINT64_C(0x0))));
L_1803edeb0_7:;
wr(s->u,65,4,(rd(s->u,79,4)&((U)UINT64_C(0xff))));
L_1803edeb0_8:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803edeb0_9:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803edeb0_10:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803edeb0_11:;
/* 1803edeb2: jl 0x1803ede60 */
L_1803edeb2_0:;
L_1803edeb2_1:;
wr(s->u,64,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803edeb2_2:;
if(rd(s->u,64,1)){goto L_1803ede60_0;}
L_1803edeb2_3:;
return UINT64_C(0x1803edeb4);
}
uint64_t b_1803edeb4(CPU*s){
/* 1803edeb4: jmp 0x1803edf6b */
L_1803edeb4_0:;
L_1803edeb4_1:;
return UINT64_C(0x1803edf6b);
L_1803edeb4_2:;
return UINT64_C(0x1803edeb9);
}
uint64_t b_1803edeb9(CPU*s){
/* 1803edeb9: xor ebx, ebx */
L_1803edeb9_0:;
L_1803edeb9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edeb9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edeb9_3:;
wr(s->r,24,4,(rd(s->r,24,4)^rd(s->r,24,4)));
L_1803edeb9_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803edeb9_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edeb9_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803edeb9_7:;
wr(s->u,14,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803edeb9_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803edeb9_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803edeb9_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803edeb9_11:;
/* 1803edebb: test dword ptr [rdi + 0x10], 0xfffffffe */
L_1803edebb_0:;
L_1803edebb_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edebb_2:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edebb_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edebb_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edebb_5:;
wr(s->u,20,4,(rd(s->u,8,4)&((U)UINT64_C(0xfffffffe))));
L_1803edebb_6:;
wr(s->r,519,1,(sx(rd(s->u,20,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edebb_7:;
wr(s->r,518,1,(rd(s->u,20,4)==((U)UINT64_C(0x0))));
L_1803edebb_8:;
wr(s->u,14,4,(rd(s->u,20,4)&((U)UINT64_C(0xff))));
L_1803edebb_9:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803edebb_10:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803edebb_11:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803edebb_12:;
/* 1803edec2: mov r8, rbx */
L_1803edec2_0:;
L_1803edec2_1:;
wr(s->r,128,8,rd(s->r,24,8));
L_1803edec2_2:;
/* 1803edec5: jle 0x1803edf6b */
L_1803edec5_0:;
L_1803edec5_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803edec5_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803edec5_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803edf6b);}
L_1803edec5_4:;
return UINT64_C(0x1803edecb);
}
uint64_t b_1803edecb(CPU*s){
/* 1803edecb: movss xmm3, dword ptr [rip + 0x25ed71] */
L_1803edecb_0:;
L_1803edecb_1:;
wr(s->r,4800,4,mr(UINT64_C(0x18064cc44),4));
L_1803edecb_2:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803edecb_3:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803edecb_4:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803edecb_5:;
/* 1803eded3: movss xmm4, dword ptr [rip + 0x264289] */
L_1803eded3_0:;
L_1803eded3_1:;
wr(s->r,4864,4,mr(UINT64_C(0x180652164),4));
L_1803eded3_2:;
wr(s->r,4868,4,((U)UINT64_C(0x0)));
L_1803eded3_3:;
wr(s->r,4872,4,((U)UINT64_C(0x0)));
L_1803eded3_4:;
wr(s->r,4876,4,((U)UINT64_C(0x0)));
L_1803eded3_5:;
/* 1803ededb: nop dword ptr [rax + rax] */
L_1803ededb_0:;
L_1803ededb_1:;
wr(s->u,48,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ededb_2:;
wr(s->u,56,8,(rd(s->r,0,8)+rd(s->u,48,8)));
L_1803ededb_3:;
/* 1803edee0: mov eax, dword ptr [rdi + 0x10] */
L_1803edee0_0:;
L_1803edee0_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edee0_2:;
wr(s->u,68,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edee0_3:;
wr(s->r,0,4,rd(s->u,68,4));
L_1803edee0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edee0_5:;
/* 1803edee3: movd xmm0, ebx */
L_1803edee3_0:;
L_1803edee3_1:;
wr(s->r,4608,16,rd(s->r,24,4));
L_1803edee3_2:;
/* 1803edee7: inc ebx */
L_1803edee7_0:;
L_1803edee7_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0x1)),4,0));
L_1803edee7_2:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0x1))));
L_1803edee7_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803edee7_4:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edee7_5:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803edee7_6:;
wr(s->u,81,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803edee7_7:;
wr(s->u,89,1,pop(rd(s->u,81,4),4));
L_1803edee7_8:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803edee7_9:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803edee7_10:;
/* 1803edee9: dec eax */
L_1803edee9_0:;
L_1803edee9_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,1));
L_1803edee9_2:;
wr(s->r,0,4,(rd(s->r,0,4)-((U)UINT64_C(0x1))));
L_1803edee9_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edee9_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edee9_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edee9_6:;
wr(s->u,81,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edee9_7:;
wr(s->u,89,1,pop(rd(s->u,81,4),4));
L_1803edee9_8:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803edee9_9:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803edee9_10:;
/* 1803edeeb: movd xmm2, eax */
L_1803edeeb_0:;
L_1803edeeb_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803edeeb_2:;
/* 1803edeef: mov rax, qword ptr [rdi + 0x18] */
L_1803edeef_0:;
L_1803edeef_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803edeef_2:;
wr(s->u,72,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edeef_3:;
wr(s->r,0,8,rd(s->u,72,8));
L_1803edeef_4:;
/* 1803edef3: cvtdq2ps xmm0, xmm0 */
L_1803edef3_0:;
L_1803edef3_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803edef3_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803edef3_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803edef3_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803edef3_5:;
/* 1803edef6: cvtdq2ps xmm2, xmm2 */
L_1803edef6_0:;
L_1803edef6_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803edef6_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803edef6_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803edef6_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803edef6_5:;
/* 1803edef9: mulss xmm2, xmm4 */
L_1803edef9_0:;
L_1803edef9_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4864,4),4),4));
L_1803edef9_2:;
/* 1803edefd: movaps xmm1, xmm2 */
L_1803edefd_0:;
L_1803edefd_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803edefd_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803edefd_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803edefd_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803edefd_5:;
/* 1803edf00: subss xmm1, xmm0 */
L_1803edf00_0:;
L_1803edf00_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803edf00_2:;
/* 1803edf04: movaps xmm0, xmm3 */
L_1803edf04_0:;
L_1803edf04_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803edf04_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803edf04_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803edf04_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803edf04_5:;
/* 1803edf07: divss xmm1, xmm2 */
L_1803edf07_0:;
L_1803edf07_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803edf07_2:;
/* 1803edf0b: subss xmm0, xmm1 */
L_1803edf0b_0:;
L_1803edf0b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803edf0b_2:;
/* 1803edf0f: movss dword ptr [rax + r8*4], xmm0 */
L_1803edf0f_0:;
L_1803edf0f_1:;
wr(s->u,8,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803edf0f_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803edf0f_3:;
wr(s->u,64,4,rd(s->r,4608,4));
L_1803edf0f_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,64,4));
L_1803edf0f_5:;
/* 1803edf15: mov rax, qword ptr [rdi + 0x18] */
L_1803edf15_0:;
L_1803edf15_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803edf15_2:;
wr(s->u,72,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edf15_3:;
wr(s->r,0,8,rd(s->u,72,8));
L_1803edf15_4:;
/* 1803edf19: movss xmm0, dword ptr [rax + r8*4] */
L_1803edf19_0:;
L_1803edf19_1:;
wr(s->u,8,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803edf19_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803edf19_3:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803edf19_4:;
wr(s->r,4608,4,rd(s->u,64,4));
L_1803edf19_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803edf19_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803edf19_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803edf19_8:;
/* 1803edf1f: mulss xmm0, xmm0 */
L_1803edf1f_0:;
L_1803edf1f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803edf1f_2:;
/* 1803edf23: movss dword ptr [rax + r8*4], xmm0 */
L_1803edf23_0:;
L_1803edf23_1:;
wr(s->u,8,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803edf23_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803edf23_3:;
wr(s->u,64,4,rd(s->r,4608,4));
L_1803edf23_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,64,4));
L_1803edf23_5:;
/* 1803edf29: mov rdx, qword ptr [rdi + 0x18] */
L_1803edf29_0:;
L_1803edf29_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803edf29_2:;
wr(s->u,72,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edf29_3:;
wr(s->r,16,8,rd(s->u,72,8));
L_1803edf29_4:;
/* 1803edf2d: movsxd rcx, dword ptr [rdi + 0x10] */
L_1803edf2d_0:;
L_1803edf2d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edf2d_2:;
wr(s->u,68,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edf2d_3:;
wr(s->r,8,8,(U)sx(rd(s->u,68,4),4));
L_1803edf2d_4:;
/* 1803edf31: mov eax, dword ptr [rdx + r8*4] */
L_1803edf31_0:;
L_1803edf31_1:;
wr(s->u,8,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803edf31_2:;
wr(s->u,16,8,(rd(s->r,16,8)+rd(s->u,8,8)));
L_1803edf31_3:;
wr(s->u,68,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803edf31_4:;
wr(s->r,0,4,rd(s->u,68,4));
L_1803edf31_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edf31_6:;
/* 1803edf35: sub rcx, r8 */
L_1803edf35_0:;
L_1803edf35_1:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->r,128,8)));
L_1803edf35_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,128,8),8,1));
L_1803edf35_3:;
wr(s->r,8,8,(rd(s->r,8,8)-rd(s->r,128,8)));
L_1803edf35_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edf35_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803edf35_6:;
wr(s->u,81,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803edf35_7:;
wr(s->u,89,1,pop(rd(s->u,81,8),8));
L_1803edf35_8:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803edf35_9:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803edf35_10:;
/* 1803edf38: inc r8 */
L_1803edf38_0:;
L_1803edf38_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x1)),8,0));
L_1803edf38_2:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x1))));
L_1803edf38_3:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edf38_4:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803edf38_5:;
wr(s->u,81,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803edf38_6:;
wr(s->u,89,1,pop(rd(s->u,81,8),8));
L_1803edf38_7:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803edf38_8:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803edf38_9:;
/* 1803edf3b: mov dword ptr [rdx + rcx*4 - 4], eax */
L_1803edf3b_0:;
L_1803edf3b_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,16,8)));
L_1803edf3b_2:;
wr(s->u,32,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803edf3b_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803edf3b_4:;
wr(s->u,64,4,rd(s->r,0,4));
L_1803edf3b_5:;
mw((uint64_t)rd(s->u,40,8),4,rd(s->u,64,4));
L_1803edf3b_6:;
/* 1803edf3f: mov eax, dword ptr [rdi + 0x10] */
L_1803edf3f_0:;
L_1803edf3f_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edf3f_2:;
wr(s->u,68,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edf3f_3:;
wr(s->r,0,4,rd(s->u,68,4));
L_1803edf3f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edf3f_5:;
/* 1803edf42: sar eax, 1 */
L_1803edf42_0:;
L_1803edf42_1:;
wr(s->u,99,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803edf42_2:;
wr(s->r,512,1,(rd(s->u,99,4)!=((U)UINT64_C(0x0))));
L_1803edf42_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edf42_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803edf42_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edf42_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edf42_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edf42_8:;
wr(s->u,81,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edf42_9:;
wr(s->u,89,1,pop(rd(s->u,81,4),4));
L_1803edf42_10:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803edf42_11:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803edf42_12:;
/* 1803edf44: cmp ebx, eax */
L_1803edf44_0:;
L_1803edf44_1:;
wr(s->u,91,4,rd(s->r,0,4));
L_1803edf44_2:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,91,4)));
L_1803edf44_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,91,4),4,1));
L_1803edf44_4:;
wr(s->u,95,4,(rd(s->r,24,4)-rd(s->u,91,4)));
L_1803edf44_5:;
wr(s->r,519,1,(sx(rd(s->u,95,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edf44_6:;
wr(s->r,518,1,(rd(s->u,95,4)==((U)UINT64_C(0x0))));
L_1803edf44_7:;
wr(s->u,81,4,(rd(s->u,95,4)&((U)UINT64_C(0xff))));
L_1803edf44_8:;
wr(s->u,89,1,pop(rd(s->u,81,4),4));
L_1803edf44_9:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803edf44_10:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803edf44_11:;
/* 1803edf46: jl 0x1803edee0 */
L_1803edf46_0:;
L_1803edf46_1:;
wr(s->u,80,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803edf46_2:;
if(rd(s->u,80,1)){goto L_1803edee0_0;}
L_1803edf46_3:;
return UINT64_C(0x1803edf48);
}
uint64_t b_1803edee0(CPU*s){
/* 1803edee0: mov eax, dword ptr [rdi + 0x10] */
L_1803edee0_0:;
L_1803edee0_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edee0_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edee0_3:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803edee0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edee0_5:;
/* 1803edee3: movd xmm0, ebx */
L_1803edee3_0:;
L_1803edee3_1:;
wr(s->r,4608,16,rd(s->r,24,4));
L_1803edee3_2:;
/* 1803edee7: inc ebx */
L_1803edee7_0:;
L_1803edee7_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0x1)),4,0));
L_1803edee7_2:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0x1))));
L_1803edee7_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803edee7_4:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edee7_5:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803edee7_6:;
wr(s->u,65,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803edee7_7:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803edee7_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803edee7_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803edee7_10:;
/* 1803edee9: dec eax */
L_1803edee9_0:;
L_1803edee9_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,1));
L_1803edee9_2:;
wr(s->r,0,4,(rd(s->r,0,4)-((U)UINT64_C(0x1))));
L_1803edee9_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edee9_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edee9_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edee9_6:;
wr(s->u,65,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edee9_7:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803edee9_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803edee9_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803edee9_10:;
/* 1803edeeb: movd xmm2, eax */
L_1803edeeb_0:;
L_1803edeeb_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803edeeb_2:;
/* 1803edeef: mov rax, qword ptr [rdi + 0x18] */
L_1803edeef_0:;
L_1803edeef_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803edeef_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edeef_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803edeef_4:;
/* 1803edef3: cvtdq2ps xmm0, xmm0 */
L_1803edef3_0:;
L_1803edef3_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803edef3_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803edef3_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803edef3_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803edef3_5:;
/* 1803edef6: cvtdq2ps xmm2, xmm2 */
L_1803edef6_0:;
L_1803edef6_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803edef6_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803edef6_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803edef6_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803edef6_5:;
/* 1803edef9: mulss xmm2, xmm4 */
L_1803edef9_0:;
L_1803edef9_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4864,4),4),4));
L_1803edef9_2:;
/* 1803edefd: movaps xmm1, xmm2 */
L_1803edefd_0:;
L_1803edefd_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803edefd_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803edefd_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803edefd_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803edefd_5:;
/* 1803edf00: subss xmm1, xmm0 */
L_1803edf00_0:;
L_1803edf00_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803edf00_2:;
/* 1803edf04: movaps xmm0, xmm3 */
L_1803edf04_0:;
L_1803edf04_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803edf04_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803edf04_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803edf04_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803edf04_5:;
/* 1803edf07: divss xmm1, xmm2 */
L_1803edf07_0:;
L_1803edf07_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803edf07_2:;
/* 1803edf0b: subss xmm0, xmm1 */
L_1803edf0b_0:;
L_1803edf0b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803edf0b_2:;
/* 1803edf0f: movss dword ptr [rax + r8*4], xmm0 */
L_1803edf0f_0:;
L_1803edf0f_1:;
wr(s->u,8,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803edf0f_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803edf0f_3:;
wr(s->u,48,4,rd(s->r,4608,4));
L_1803edf0f_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,48,4));
L_1803edf0f_5:;
/* 1803edf15: mov rax, qword ptr [rdi + 0x18] */
L_1803edf15_0:;
L_1803edf15_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803edf15_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edf15_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803edf15_4:;
/* 1803edf19: movss xmm0, dword ptr [rax + r8*4] */
L_1803edf19_0:;
L_1803edf19_1:;
wr(s->u,8,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803edf19_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803edf19_3:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803edf19_4:;
wr(s->r,4608,4,rd(s->u,48,4));
L_1803edf19_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803edf19_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803edf19_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803edf19_8:;
/* 1803edf1f: mulss xmm0, xmm0 */
L_1803edf1f_0:;
L_1803edf1f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803edf1f_2:;
/* 1803edf23: movss dword ptr [rax + r8*4], xmm0 */
L_1803edf23_0:;
L_1803edf23_1:;
wr(s->u,8,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803edf23_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803edf23_3:;
wr(s->u,48,4,rd(s->r,4608,4));
L_1803edf23_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,48,4));
L_1803edf23_5:;
/* 1803edf29: mov rdx, qword ptr [rdi + 0x18] */
L_1803edf29_0:;
L_1803edf29_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803edf29_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edf29_3:;
wr(s->r,16,8,rd(s->u,56,8));
L_1803edf29_4:;
/* 1803edf2d: movsxd rcx, dword ptr [rdi + 0x10] */
L_1803edf2d_0:;
L_1803edf2d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edf2d_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edf2d_3:;
wr(s->r,8,8,(U)sx(rd(s->u,52,4),4));
L_1803edf2d_4:;
/* 1803edf31: mov eax, dword ptr [rdx + r8*4] */
L_1803edf31_0:;
L_1803edf31_1:;
wr(s->u,8,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803edf31_2:;
wr(s->u,16,8,(rd(s->r,16,8)+rd(s->u,8,8)));
L_1803edf31_3:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803edf31_4:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803edf31_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edf31_6:;
/* 1803edf35: sub rcx, r8 */
L_1803edf35_0:;
L_1803edf35_1:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->r,128,8)));
L_1803edf35_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,128,8),8,1));
L_1803edf35_3:;
wr(s->r,8,8,(rd(s->r,8,8)-rd(s->r,128,8)));
L_1803edf35_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edf35_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803edf35_6:;
wr(s->u,65,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803edf35_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803edf35_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803edf35_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803edf35_10:;
/* 1803edf38: inc r8 */
L_1803edf38_0:;
L_1803edf38_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x1)),8,0));
L_1803edf38_2:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x1))));
L_1803edf38_3:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edf38_4:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803edf38_5:;
wr(s->u,65,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803edf38_6:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803edf38_7:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803edf38_8:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803edf38_9:;
/* 1803edf3b: mov dword ptr [rdx + rcx*4 - 4], eax */
L_1803edf3b_0:;
L_1803edf3b_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,16,8)));
L_1803edf3b_2:;
wr(s->u,32,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803edf3b_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803edf3b_4:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803edf3b_5:;
mw((uint64_t)rd(s->u,40,8),4,rd(s->u,48,4));
L_1803edf3b_6:;
/* 1803edf3f: mov eax, dword ptr [rdi + 0x10] */
L_1803edf3f_0:;
L_1803edf3f_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edf3f_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edf3f_3:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803edf3f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edf3f_5:;
/* 1803edf42: sar eax, 1 */
L_1803edf42_0:;
L_1803edf42_1:;
wr(s->u,83,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803edf42_2:;
wr(s->r,512,1,(rd(s->u,83,4)!=((U)UINT64_C(0x0))));
L_1803edf42_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edf42_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803edf42_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edf42_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edf42_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edf42_8:;
wr(s->u,65,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edf42_9:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803edf42_10:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803edf42_11:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803edf42_12:;
/* 1803edf44: cmp ebx, eax */
L_1803edf44_0:;
L_1803edf44_1:;
wr(s->u,75,4,rd(s->r,0,4));
L_1803edf44_2:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,75,4)));
L_1803edf44_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,75,4),4,1));
L_1803edf44_4:;
wr(s->u,79,4,(rd(s->r,24,4)-rd(s->u,75,4)));
L_1803edf44_5:;
wr(s->r,519,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edf44_6:;
wr(s->r,518,1,(rd(s->u,79,4)==((U)UINT64_C(0x0))));
L_1803edf44_7:;
wr(s->u,65,4,(rd(s->u,79,4)&((U)UINT64_C(0xff))));
L_1803edf44_8:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803edf44_9:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803edf44_10:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803edf44_11:;
/* 1803edf46: jl 0x1803edee0 */
L_1803edf46_0:;
L_1803edf46_1:;
wr(s->u,64,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803edf46_2:;
if(rd(s->u,64,1)){goto L_1803edee0_0;}
L_1803edf46_3:;
return UINT64_C(0x1803edf48);
}
uint64_t b_1803edf48(CPU*s){
/* 1803edf48: jmp 0x1803edf6b */
L_1803edf48_0:;
L_1803edf48_1:;
return UINT64_C(0x1803edf6b);
L_1803edf48_2:;
return UINT64_C(0x1803edf4a);
}
uint64_t b_1803edf4a(CPU*s){
/* 1803edf4a: xor ebx, ebx */
L_1803edf4a_0:;
L_1803edf4a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edf4a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edf4a_3:;
wr(s->r,24,4,(rd(s->r,24,4)^rd(s->r,24,4)));
L_1803edf4a_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803edf4a_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edf4a_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803edf4a_7:;
wr(s->u,14,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803edf4a_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803edf4a_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803edf4a_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803edf4a_11:;
/* 1803edf4c: cmp dword ptr [rdi + 0x10], ebx */
L_1803edf4c_0:;
L_1803edf4c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edf4c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edf4c_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803edf4c_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,24,4)));
L_1803edf4c_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,24,4),4,1));
L_1803edf4c_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,24,4)));
L_1803edf4c_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edf4c_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803edf4c_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803edf4c_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803edf4c_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803edf4c_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803edf4c_13:;
/* 1803edf4f: jle 0x1803edf6b */
L_1803edf4f_0:;
L_1803edf4f_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803edf4f_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803edf4f_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803edf6b);}
L_1803edf4f_4:;
return UINT64_C(0x1803edf51);
}
uint64_t b_1803edf51(CPU*s){
/* 1803edf51: mov rcx, rbx */
L_1803edf51_0:;
L_1803edf51_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803edf51_2:;
/* 1803edf54: mov rax, qword ptr [rdi + 0x18] */
L_1803edf54_0:;
L_1803edf54_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803edf54_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edf54_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803edf54_4:;
/* 1803edf58: inc ebx */
L_1803edf58_0:;
L_1803edf58_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0x1)),4,0));
L_1803edf58_2:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0x1))));
L_1803edf58_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803edf58_4:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edf58_5:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803edf58_6:;
wr(s->u,45,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803edf58_7:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803edf58_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803edf58_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803edf58_10:;
/* 1803edf5a: add rcx, 4 */
L_1803edf5a_0:;
L_1803edf5a_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803edf5a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x4)),8,0));
L_1803edf5a_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803edf5a_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edf5a_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803edf5a_6:;
wr(s->u,45,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803edf5a_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803edf5a_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803edf5a_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803edf5a_10:;
/* 1803edf5e: mov dword ptr [rcx + rax - 4], 0x3f800000 */
L_1803edf5e_0:;
L_1803edf5e_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,8,8)));
L_1803edf5e_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803edf5e_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803edf5e_4:;
wr(s->u,32,4,((U)UINT64_C(0x3f800000)));
L_1803edf5e_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803edf5e_6:;
/* 1803edf66: cmp ebx, dword ptr [rdi + 0x10] */
L_1803edf66_0:;
L_1803edf66_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edf66_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edf66_3:;
wr(s->u,55,4,rd(s->u,32,4));
L_1803edf66_4:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,55,4)));
L_1803edf66_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,55,4),4,1));
L_1803edf66_6:;
wr(s->u,59,4,(rd(s->r,24,4)-rd(s->u,55,4)));
L_1803edf66_7:;
wr(s->r,519,1,(sx(rd(s->u,59,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edf66_8:;
wr(s->r,518,1,(rd(s->u,59,4)==((U)UINT64_C(0x0))));
L_1803edf66_9:;
wr(s->u,45,4,(rd(s->u,59,4)&((U)UINT64_C(0xff))));
L_1803edf66_10:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803edf66_11:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803edf66_12:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803edf66_13:;
/* 1803edf69: jl 0x1803edf54 */
L_1803edf69_0:;
L_1803edf69_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803edf69_2:;
if(rd(s->u,44,1)){goto L_1803edf54_0;}
L_1803edf69_3:;
return UINT64_C(0x1803edf6b);
}
uint64_t b_1803edf54(CPU*s){
/* 1803edf54: mov rax, qword ptr [rdi + 0x18] */
L_1803edf54_0:;
L_1803edf54_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803edf54_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edf54_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803edf54_4:;
/* 1803edf58: inc ebx */
L_1803edf58_0:;
L_1803edf58_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0x1)),4,0));
L_1803edf58_2:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0x1))));
L_1803edf58_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803edf58_4:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edf58_5:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803edf58_6:;
wr(s->u,45,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803edf58_7:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803edf58_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803edf58_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803edf58_10:;
/* 1803edf5a: add rcx, 4 */
L_1803edf5a_0:;
L_1803edf5a_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803edf5a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x4)),8,0));
L_1803edf5a_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803edf5a_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803edf5a_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803edf5a_6:;
wr(s->u,45,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803edf5a_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803edf5a_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803edf5a_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803edf5a_10:;
/* 1803edf5e: mov dword ptr [rcx + rax - 4], 0x3f800000 */
L_1803edf5e_0:;
L_1803edf5e_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,8,8)));
L_1803edf5e_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803edf5e_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803edf5e_4:;
wr(s->u,32,4,((U)UINT64_C(0x3f800000)));
L_1803edf5e_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803edf5e_6:;
/* 1803edf66: cmp ebx, dword ptr [rdi + 0x10] */
L_1803edf66_0:;
L_1803edf66_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803edf66_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803edf66_3:;
wr(s->u,55,4,rd(s->u,32,4));
L_1803edf66_4:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,55,4)));
L_1803edf66_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,55,4),4,1));
L_1803edf66_6:;
wr(s->u,59,4,(rd(s->r,24,4)-rd(s->u,55,4)));
L_1803edf66_7:;
wr(s->r,519,1,(sx(rd(s->u,59,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edf66_8:;
wr(s->r,518,1,(rd(s->u,59,4)==((U)UINT64_C(0x0))));
L_1803edf66_9:;
wr(s->u,45,4,(rd(s->u,59,4)&((U)UINT64_C(0xff))));
L_1803edf66_10:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803edf66_11:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803edf66_12:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803edf66_13:;
/* 1803edf69: jl 0x1803edf54 */
L_1803edf69_0:;
L_1803edf69_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803edf69_2:;
if(rd(s->u,44,1)){goto L_1803edf54_0;}
L_1803edf69_3:;
return UINT64_C(0x1803edf6b);
}
uint64_t b_1803edf6b(CPU*s){
/* 1803edf6b: movaps xmm6, xmmword ptr [rsp + 0x70] */
L_1803edf6b_0:;
L_1803edf6b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803edf6b_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803edf6b_3:;
wr(s->u,56,16,rd(s->u,24,16));
L_1803edf6b_4:;
wr(s->r,4992,4,rd(s->u,56,4));
L_1803edf6b_5:;
wr(s->r,4996,4,rd(s->u,60,4));
L_1803edf6b_6:;
wr(s->r,5000,4,rd(s->u,64,4));
L_1803edf6b_7:;
wr(s->r,5004,4,rd(s->u,68,4));
L_1803edf6b_8:;
/* 1803edf70: movaps xmm7, xmmword ptr [rsp + 0x60] */
L_1803edf70_0:;
L_1803edf70_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803edf70_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803edf70_3:;
wr(s->u,56,16,rd(s->u,24,16));
L_1803edf70_4:;
wr(s->r,5056,4,rd(s->u,56,4));
L_1803edf70_5:;
wr(s->r,5060,4,rd(s->u,60,4));
L_1803edf70_6:;
wr(s->r,5064,4,rd(s->u,64,4));
L_1803edf70_7:;
wr(s->r,5068,4,rd(s->u,68,4));
L_1803edf70_8:;
/* 1803edf75: lea r11, [rsp + 0x80] */
L_1803edf75_0:;
L_1803edf75_1:;
wr(s->u,16,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803edf75_2:;
wr(s->r,152,8,rd(s->u,16,8));
L_1803edf75_3:;
/* 1803edf7d: mov rbx, qword ptr [r11 + 0x10] */
L_1803edf7d_0:;
L_1803edf7d_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x10))));
L_1803edf7d_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edf7d_3:;
wr(s->r,24,8,rd(s->u,40,8));
L_1803edf7d_4:;
/* 1803edf81: mov rsi, qword ptr [r11 + 0x18] */
L_1803edf81_0:;
L_1803edf81_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x18))));
L_1803edf81_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803edf81_3:;
wr(s->r,48,8,rd(s->u,40,8));
L_1803edf81_4:;
/* 1803edf85: movaps xmm8, xmmword ptr [r11 - 0x30] */
L_1803edf85_0:;
L_1803edf85_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffd0))));
L_1803edf85_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803edf85_3:;
wr(s->u,56,16,rd(s->u,24,16));
L_1803edf85_4:;
wr(s->r,5120,4,rd(s->u,56,4));
L_1803edf85_5:;
wr(s->r,5124,4,rd(s->u,60,4));
L_1803edf85_6:;
wr(s->r,5128,4,rd(s->u,64,4));
L_1803edf85_7:;
wr(s->r,5132,4,rd(s->u,68,4));
L_1803edf85_8:;
/* 1803edf8a: mov rsp, r11 */
L_1803edf8a_0:;
L_1803edf8a_1:;
wr(s->r,32,8,rd(s->r,152,8));
L_1803edf8a_2:;
/* 1803edf8d: pop rdi */
L_1803edf8d_0:;
L_1803edf8d_1:;
wr(s->u,48,8,((U)UINT64_C(0x0)));
L_1803edf8d_2:;
wr(s->u,48,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edf8d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edf8d_4:;
wr(s->r,56,8,rd(s->u,48,8));
L_1803edf8d_5:;
/* 1803edf8e: ret  */
L_1803edf8e_0:;
L_1803edf8e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edf8e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edf8e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803edf8e_4:;
return UINT64_C(0x1803edf8f);
}
uint64_t b_1803edfb0(CPU*s){
/* 1803edfb0: xor r9d, r9d */
L_1803edfb0_0:;
L_1803edfb0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edfb0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edfb0_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803edfb0_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803edfb0_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edfb0_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803edfb0_7:;
wr(s->u,0,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803edfb0_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803edfb0_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803edfb0_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803edfb0_11:;
/* 1803edfb3: test edx, edx */
L_1803edfb3_0:;
L_1803edfb3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edfb3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edfb3_3:;
wr(s->u,6,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803edfb3_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edfb3_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803edfb3_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803edfb3_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803edfb3_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803edfb3_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803edfb3_10:;
/* 1803edfb5: je 0x1803edfce */
L_1803edfb5_0:;
L_1803edfb5_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803edfce);}
L_1803edfb5_2:;
return UINT64_C(0x1803edfb7);
}
uint64_t b_1803edfb7(CPU*s){
/* 1803edfb7: nop word ptr [rax + rax] */
L_1803edfb7_0:;
L_1803edfb7_1:;
wr(s->u,5,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803edfb7_2:;
wr(s->u,13,8,(rd(s->r,0,8)+rd(s->u,5,8)));
L_1803edfb7_3:;
/* 1803edfc0: inc r9d */
L_1803edfc0_0:;
L_1803edfc0_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),((U)UINT64_C(0x1)),4,0));
L_1803edfc0_2:;
wr(s->r,136,4,(rd(s->r,136,4)+((U)UINT64_C(0x1))));
L_1803edfc0_3:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803edfc0_4:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edfc0_5:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803edfc0_6:;
wr(s->u,22,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803edfc0_7:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803edfc0_8:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803edfc0_9:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803edfc0_10:;
/* 1803edfc3: mov eax, edx */
L_1803edfc3_0:;
L_1803edfc3_1:;
wr(s->r,0,4,rd(s->r,16,4));
L_1803edfc3_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edfc3_3:;
/* 1803edfc5: mov ecx, r9d */
L_1803edfc5_0:;
L_1803edfc5_1:;
wr(s->r,8,4,rd(s->r,136,4));
L_1803edfc5_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803edfc5_3:;
/* 1803edfc8: sar eax, cl */
L_1803edfc8_0:;
L_1803edfc8_1:;
wr(s->u,59,1,(rd(s->r,8,1)&((U)UINT64_C(0x1f))));
L_1803edfc8_2:;
wr(s->u,60,4,rd(s->r,0,4));
L_1803edfc8_3:;
wr(s->r,0,4,((rd(s->u,59,1)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,59,1))));
L_1803edfc8_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edfc8_5:;
wr(s->u,47,1,(rd(s->u,59,1)==((U)UINT64_C(0x0))));
L_1803edfc8_6:;
wr(s->u,48,1,(rd(s->u,59,1)-((U)UINT64_C(0x1))));
L_1803edfc8_7:;
wr(s->u,49,4,((rd(s->u,48,1)>=32)?(sx(rd(s->u,60,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,60,4),4)>>rd(s->u,48,1))));
L_1803edfc8_8:;
wr(s->u,53,4,(rd(s->u,49,4)&((U)UINT64_C(0x1))));
L_1803edfc8_9:;
wr(s->u,57,1,(rd(s->u,53,4)!=((U)UINT64_C(0x0))));
L_1803edfc8_10:;
wr(s->u,0,1,rd(s->u,47,1));
L_1803edfc8_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803edfc8_12:;
wr(s->u,2,1,(!rd(s->u,47,1)));
L_1803edfc8_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803edfc8_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,57,1)));
L_1803edfc8_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803edfc8_16:;
wr(s->u,58,1,(rd(s->u,59,1)==((U)UINT64_C(0x1))));
L_1803edfc8_17:;
wr(s->u,0,1,rd(s->u,58,1));
L_1803edfc8_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803edfc8_19:;
wr(s->u,2,1,(!rd(s->u,58,1)));
L_1803edfc8_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803edfc8_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803edfc8_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803edfc8_23:;
wr(s->u,28,1,(rd(s->u,59,1)!=((U)UINT64_C(0x0))));
L_1803edfc8_24:;
wr(s->u,29,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edfc8_25:;
wr(s->u,30,1,(!rd(s->u,28,1)));
L_1803edfc8_26:;
wr(s->u,31,1,(rd(s->u,30,1)&rd(s->r,519,1)));
L_1803edfc8_27:;
wr(s->u,32,1,(rd(s->u,28,1)&rd(s->u,29,1)));
L_1803edfc8_28:;
wr(s->r,519,1,(rd(s->u,31,1)|rd(s->u,32,1)));
L_1803edfc8_29:;
wr(s->u,33,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edfc8_30:;
wr(s->u,34,1,(!rd(s->u,28,1)));
L_1803edfc8_31:;
wr(s->u,35,1,(rd(s->u,34,1)&rd(s->r,518,1)));
L_1803edfc8_32:;
wr(s->u,36,1,(rd(s->u,28,1)&rd(s->u,33,1)));
L_1803edfc8_33:;
wr(s->r,518,1,(rd(s->u,35,1)|rd(s->u,36,1)));
L_1803edfc8_34:;
wr(s->u,37,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edfc8_35:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803edfc8_36:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803edfc8_37:;
wr(s->u,43,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803edfc8_38:;
wr(s->u,44,1,(!rd(s->u,28,1)));
L_1803edfc8_39:;
wr(s->u,45,1,(rd(s->u,44,1)&rd(s->r,514,1)));
L_1803edfc8_40:;
wr(s->u,46,1,(rd(s->u,28,1)&rd(s->u,43,1)));
L_1803edfc8_41:;
wr(s->r,514,1,(rd(s->u,45,1)|rd(s->u,46,1)));
L_1803edfc8_42:;
/* 1803edfca: test eax, eax */
L_1803edfca_0:;
L_1803edfca_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edfca_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edfca_3:;
wr(s->u,64,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803edfca_4:;
wr(s->r,519,1,(sx(rd(s->u,64,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edfca_5:;
wr(s->r,518,1,(rd(s->u,64,4)==((U)UINT64_C(0x0))));
L_1803edfca_6:;
wr(s->u,22,4,(rd(s->u,64,4)&((U)UINT64_C(0xff))));
L_1803edfca_7:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803edfca_8:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803edfca_9:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803edfca_10:;
/* 1803edfcc: jne 0x1803edfc0 */
L_1803edfcc_0:;
L_1803edfcc_1:;
wr(s->u,21,1,(!rd(s->r,518,1)));
L_1803edfcc_2:;
if(rd(s->u,21,1)){goto L_1803edfc0_0;}
L_1803edfcc_3:;
return UINT64_C(0x1803edfce);
}
uint64_t b_1803edfc0(CPU*s){
/* 1803edfc0: inc r9d */
L_1803edfc0_0:;
L_1803edfc0_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),((U)UINT64_C(0x1)),4,0));
L_1803edfc0_2:;
wr(s->r,136,4,(rd(s->r,136,4)+((U)UINT64_C(0x1))));
L_1803edfc0_3:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803edfc0_4:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edfc0_5:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803edfc0_6:;
wr(s->u,6,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803edfc0_7:;
wr(s->u,10,1,pop(rd(s->u,6,4),4));
L_1803edfc0_8:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803edfc0_9:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803edfc0_10:;
/* 1803edfc3: mov eax, edx */
L_1803edfc3_0:;
L_1803edfc3_1:;
wr(s->r,0,4,rd(s->r,16,4));
L_1803edfc3_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edfc3_3:;
/* 1803edfc5: mov ecx, r9d */
L_1803edfc5_0:;
L_1803edfc5_1:;
wr(s->r,8,4,rd(s->r,136,4));
L_1803edfc5_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803edfc5_3:;
/* 1803edfc8: sar eax, cl */
L_1803edfc8_0:;
L_1803edfc8_1:;
wr(s->u,43,1,(rd(s->r,8,1)&((U)UINT64_C(0x1f))));
L_1803edfc8_2:;
wr(s->u,44,4,rd(s->r,0,4));
L_1803edfc8_3:;
wr(s->r,0,4,((rd(s->u,43,1)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,43,1))));
L_1803edfc8_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edfc8_5:;
wr(s->u,31,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803edfc8_6:;
wr(s->u,32,1,(rd(s->u,43,1)-((U)UINT64_C(0x1))));
L_1803edfc8_7:;
wr(s->u,33,4,((rd(s->u,32,1)>=32)?(sx(rd(s->u,44,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,44,4),4)>>rd(s->u,32,1))));
L_1803edfc8_8:;
wr(s->u,37,4,(rd(s->u,33,4)&((U)UINT64_C(0x1))));
L_1803edfc8_9:;
wr(s->u,41,1,(rd(s->u,37,4)!=((U)UINT64_C(0x0))));
L_1803edfc8_10:;
wr(s->u,0,1,rd(s->u,31,1));
L_1803edfc8_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803edfc8_12:;
wr(s->u,2,1,(!rd(s->u,31,1)));
L_1803edfc8_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803edfc8_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,41,1)));
L_1803edfc8_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803edfc8_16:;
wr(s->u,42,1,(rd(s->u,43,1)==((U)UINT64_C(0x1))));
L_1803edfc8_17:;
wr(s->u,0,1,rd(s->u,42,1));
L_1803edfc8_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803edfc8_19:;
wr(s->u,2,1,(!rd(s->u,42,1)));
L_1803edfc8_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803edfc8_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803edfc8_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803edfc8_23:;
wr(s->u,12,1,(rd(s->u,43,1)!=((U)UINT64_C(0x0))));
L_1803edfc8_24:;
wr(s->u,13,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edfc8_25:;
wr(s->u,14,1,(!rd(s->u,12,1)));
L_1803edfc8_26:;
wr(s->u,15,1,(rd(s->u,14,1)&rd(s->r,519,1)));
L_1803edfc8_27:;
wr(s->u,16,1,(rd(s->u,12,1)&rd(s->u,13,1)));
L_1803edfc8_28:;
wr(s->r,519,1,(rd(s->u,15,1)|rd(s->u,16,1)));
L_1803edfc8_29:;
wr(s->u,17,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803edfc8_30:;
wr(s->u,18,1,(!rd(s->u,12,1)));
L_1803edfc8_31:;
wr(s->u,19,1,(rd(s->u,18,1)&rd(s->r,518,1)));
L_1803edfc8_32:;
wr(s->u,20,1,(rd(s->u,12,1)&rd(s->u,17,1)));
L_1803edfc8_33:;
wr(s->r,518,1,(rd(s->u,19,1)|rd(s->u,20,1)));
L_1803edfc8_34:;
wr(s->u,21,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803edfc8_35:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803edfc8_36:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803edfc8_37:;
wr(s->u,27,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803edfc8_38:;
wr(s->u,28,1,(!rd(s->u,12,1)));
L_1803edfc8_39:;
wr(s->u,29,1,(rd(s->u,28,1)&rd(s->r,514,1)));
L_1803edfc8_40:;
wr(s->u,30,1,(rd(s->u,12,1)&rd(s->u,27,1)));
L_1803edfc8_41:;
wr(s->r,514,1,(rd(s->u,29,1)|rd(s->u,30,1)));
L_1803edfc8_42:;
/* 1803edfca: test eax, eax */
L_1803edfca_0:;
L_1803edfca_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edfca_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edfca_3:;
wr(s->u,48,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803edfca_4:;
wr(s->r,519,1,(sx(rd(s->u,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edfca_5:;
wr(s->r,518,1,(rd(s->u,48,4)==((U)UINT64_C(0x0))));
L_1803edfca_6:;
wr(s->u,6,4,(rd(s->u,48,4)&((U)UINT64_C(0xff))));
L_1803edfca_7:;
wr(s->u,10,1,pop(rd(s->u,6,4),4));
L_1803edfca_8:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803edfca_9:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803edfca_10:;
/* 1803edfcc: jne 0x1803edfc0 */
L_1803edfcc_0:;
L_1803edfcc_1:;
wr(s->u,5,1,(!rd(s->r,518,1)));
L_1803edfcc_2:;
if(rd(s->u,5,1)){goto L_1803edfc0_0;}
L_1803edfcc_3:;
return UINT64_C(0x1803edfce);
}
uint64_t b_1803edfce(CPU*s){
/* 1803edfce: lea ecx, [r9 - 1] */
L_1803edfce_0:;
L_1803edfce_1:;
wr(s->u,5,8,(rd(s->r,136,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803edfce_2:;
wr(s->r,8,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803edfce_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803edfce_4:;
/* 1803edfd2: mov eax, edx */
L_1803edfd2_0:;
L_1803edfd2_1:;
wr(s->r,0,4,rd(s->r,16,4));
L_1803edfd2_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edfd2_3:;
/* 1803edfd4: mov r8d, 1 */
L_1803edfd4_0:;
L_1803edfd4_1:;
wr(s->r,128,8,((U)UINT64_C(0x1)));
L_1803edfd4_2:;
/* 1803edfda: shl r8d, cl */
L_1803edfda_0:;
L_1803edfda_1:;
wr(s->u,117,1,(rd(s->r,8,1)&((U)UINT64_C(0x1f))));
L_1803edfda_2:;
wr(s->u,118,4,rd(s->r,128,4));
L_1803edfda_3:;
wr(s->r,128,4,((rd(s->u,117,1)>=32)?0:(rd(s->r,128,4)<<rd(s->u,117,1))));
L_1803edfda_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803edfda_5:;
wr(s->u,38,1,(rd(s->u,117,1)==((U)UINT64_C(0x0))));
L_1803edfda_6:;
wr(s->u,39,1,(rd(s->u,117,1)-((U)UINT64_C(0x1))));
L_1803edfda_7:;
wr(s->u,40,4,((rd(s->u,39,1)>=32)?0:(rd(s->u,118,4)<<rd(s->u,39,1))));
L_1803edfda_8:;
wr(s->u,44,1,(sx(rd(s->u,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edfda_9:;
wr(s->u,0,1,rd(s->u,38,1));
L_1803edfda_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803edfda_11:;
wr(s->u,2,1,(!rd(s->u,38,1)));
L_1803edfda_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803edfda_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,44,1)));
L_1803edfda_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803edfda_15:;
wr(s->u,45,1,(rd(s->u,117,1)==((U)UINT64_C(0x1))));
L_1803edfda_16:;
wr(s->u,46,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edfda_17:;
wr(s->u,47,1,(rd(s->r,512,1)^rd(s->u,46,1)));
L_1803edfda_18:;
wr(s->u,0,1,rd(s->u,45,1));
L_1803edfda_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,47,1)));
L_1803edfda_20:;
wr(s->u,2,1,(!rd(s->u,45,1)));
L_1803edfda_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803edfda_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803edfda_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803edfda_24:;
wr(s->u,19,1,(rd(s->u,117,1)!=((U)UINT64_C(0x0))));
L_1803edfda_25:;
wr(s->u,20,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edfda_26:;
wr(s->u,21,1,(!rd(s->u,19,1)));
L_1803edfda_27:;
wr(s->u,22,1,(rd(s->u,21,1)&rd(s->r,519,1)));
L_1803edfda_28:;
wr(s->u,23,1,(rd(s->u,19,1)&rd(s->u,20,1)));
L_1803edfda_29:;
wr(s->r,519,1,(rd(s->u,22,1)|rd(s->u,23,1)));
L_1803edfda_30:;
wr(s->u,24,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803edfda_31:;
wr(s->u,25,1,(!rd(s->u,19,1)));
L_1803edfda_32:;
wr(s->u,26,1,(rd(s->u,25,1)&rd(s->r,518,1)));
L_1803edfda_33:;
wr(s->u,27,1,(rd(s->u,19,1)&rd(s->u,24,1)));
L_1803edfda_34:;
wr(s->r,518,1,(rd(s->u,26,1)|rd(s->u,27,1)));
L_1803edfda_35:;
wr(s->u,28,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803edfda_36:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803edfda_37:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803edfda_38:;
wr(s->u,34,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803edfda_39:;
wr(s->u,35,1,(!rd(s->u,19,1)));
L_1803edfda_40:;
wr(s->u,36,1,(rd(s->u,35,1)&rd(s->r,514,1)));
L_1803edfda_41:;
wr(s->u,37,1,(rd(s->u,19,1)&rd(s->u,34,1)));
L_1803edfda_42:;
wr(s->r,514,1,(rd(s->u,36,1)|rd(s->u,37,1)));
L_1803edfda_43:;
/* 1803edfdd: cdq  */
L_1803edfdd_0:;
L_1803edfdd_1:;
wr(s->u,48,8,(U)sx(rd(s->r,0,4),4));
L_1803edfdd_2:;
wr(s->r,16,4,(rd(s->u,48,8) >> (((U)UINT64_C(0x4))*8)));
L_1803edfdd_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803edfdd_4:;
/* 1803edfde: idiv r8d */
L_1803edfde_0:;
L_1803edfde_1:;
wr(s->u,61,8,(U)sx(rd(s->r,128,4),4));
L_1803edfde_2:;
wr(s->u,69,8,rd(s->r,16,4));
L_1803edfde_3:;
wr(s->u,77,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,69,8)<<((U)UINT64_C(0x20)))));
L_1803edfde_4:;
wr(s->u,85,8,rd(s->r,0,4));
L_1803edfde_5:;
wr(s->u,93,8,(rd(s->u,77,8)|rd(s->u,85,8)));
L_1803edfde_6:;
wr(s->u,101,8,((U)(sx(rd(s->u,93,8),8)/sx(rd(s->u,61,8),8))));
L_1803edfde_7:;
wr(s->r,0,4,(rd(s->u,101,8) >> (((U)UINT64_C(0x0))*8)));
L_1803edfde_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edfde_9:;
wr(s->u,109,8,((U)(sx(rd(s->u,93,8),8)%sx(rd(s->u,61,8),8))));
L_1803edfde_10:;
wr(s->r,16,4,(rd(s->u,109,8) >> (((U)UINT64_C(0x0))*8)));
L_1803edfde_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803edfde_12:;
/* 1803edfe1: test edx, edx */
L_1803edfe1_0:;
L_1803edfe1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803edfe1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803edfe1_3:;
wr(s->u,122,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803edfe1_4:;
wr(s->r,519,1,(sx(rd(s->u,122,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803edfe1_5:;
wr(s->r,518,1,(rd(s->u,122,4)==((U)UINT64_C(0x0))));
L_1803edfe1_6:;
wr(s->u,13,4,(rd(s->u,122,4)&((U)UINT64_C(0xff))));
L_1803edfe1_7:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803edfe1_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803edfe1_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803edfe1_10:;
/* 1803edfe3: cmove r9d, ecx */
L_1803edfe3_0:;
L_1803edfe3_1:;
wr(s->u,56,4,rd(s->r,8,4));
L_1803edfe3_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803edfe3_3:;
wr(s->u,60,1,(!rd(s->r,518,1)));
L_1803edfe3_4:;
if(rd(s->u,60,1)){goto L_1803edfe7_0;}
L_1803edfe3_5:;
wr(s->r,136,4,rd(s->u,56,4));
L_1803edfe3_6:;
/* 1803edfe7: mov eax, r9d */
L_1803edfe7_0:;
L_1803edfe7_1:;
wr(s->r,0,4,rd(s->r,136,4));
L_1803edfe7_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edfe7_3:;
/* 1803edfea: ret  */
L_1803edfea_0:;
L_1803edfea_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edfea_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edfea_3:;
return (uint64_t)rd(s->r,648,8);
L_1803edfea_4:;
return UINT64_C(0x1803edfeb);
}
uint64_t b_1803edfe7(CPU*s){
/* 1803edfe7: mov eax, r9d */
L_1803edfe7_0:;
L_1803edfe7_1:;
wr(s->r,0,4,rd(s->r,136,4));
L_1803edfe7_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803edfe7_3:;
/* 1803edfea: ret  */
L_1803edfea_0:;
L_1803edfea_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803edfea_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803edfea_3:;
return (uint64_t)rd(s->r,648,8);
L_1803edfea_4:;
return UINT64_C(0x1803edfeb);
}
