#include "lift_runtime.h"
uint64_t b_1800fe790(CPU*s){
/* 1800fe790: mov qword ptr [rsp + 0x20], rbx */
L_1800fe790_0:;
L_1800fe790_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800fe790_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1800fe790_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1800fe790_4:;
/* 1800fe795: push rbp */
L_1800fe795_0:;
L_1800fe795_1:;
wr(s->u,24,8,rd(s->r,40,8));
L_1800fe795_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800fe795_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1800fe795_4:;
/* 1800fe796: push rsi */
L_1800fe796_0:;
L_1800fe796_1:;
wr(s->u,24,8,rd(s->r,48,8));
L_1800fe796_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800fe796_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1800fe796_4:;
/* 1800fe797: push rdi */
L_1800fe797_0:;
L_1800fe797_1:;
wr(s->u,24,8,rd(s->r,56,8));
L_1800fe797_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800fe797_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1800fe797_4:;
/* 1800fe798: sub rsp, 0x60 */
L_1800fe798_0:;
L_1800fe798_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x60))));
L_1800fe798_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x60)),8,1));
L_1800fe798_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x60))));
L_1800fe798_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800fe798_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800fe798_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800fe798_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1800fe798_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1800fe798_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1800fe798_10:;
/* 1800fe79c: mov rax, qword ptr [rip + 0x850635] */
L_1800fe79c_0:;
L_1800fe79c_1:;
wr(s->r,0,8,mr(UINT64_C(0x18094edd8),8));
L_1800fe79c_2:;
/* 1800fe7a3: xor rax, rsp */
L_1800fe7a3_0:;
L_1800fe7a3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fe7a3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fe7a3_3:;
wr(s->r,0,8,(rd(s->r,0,8)^rd(s->r,32,8)));
L_1800fe7a3_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800fe7a3_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1800fe7a3_6:;
wr(s->u,32,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1800fe7a3_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1800fe7a3_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1800fe7a3_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1800fe7a3_10:;
/* 1800fe7a6: mov qword ptr [rsp + 0x50], rax */
L_1800fe7a6_0:;
L_1800fe7a6_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1800fe7a6_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_1800fe7a6_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1800fe7a6_4:;
/* 1800fe7ab: xor ebp, ebp */
L_1800fe7ab_0:;
L_1800fe7ab_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fe7ab_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fe7ab_3:;
wr(s->r,40,4,(rd(s->r,40,4)^rd(s->r,40,4)));
L_1800fe7ab_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1800fe7ab_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fe7ab_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1800fe7ab_7:;
wr(s->u,32,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1800fe7ab_8:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1800fe7ab_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1800fe7ab_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1800fe7ab_11:;
/* 1800fe7ad: mov rbx, r8 */
L_1800fe7ad_0:;
L_1800fe7ad_1:;
wr(s->r,24,8,rd(s->r,128,8));
L_1800fe7ad_2:;
/* 1800fe7b0: mov rdi, rdx */
L_1800fe7b0_0:;
L_1800fe7b0_1:;
wr(s->r,56,8,rd(s->r,16,8));
L_1800fe7b0_2:;
/* 1800fe7b3: lea r9, [rsp + 0x30] */
L_1800fe7b3_0:;
L_1800fe7b3_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800fe7b3_2:;
wr(s->r,136,8,rd(s->u,8,8));
L_1800fe7b3_3:;
/* 1800fe7b8: lea rdx, [rsp + 0x40] */
L_1800fe7b8_0:;
L_1800fe7b8_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800fe7b8_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1800fe7b8_3:;
/* 1800fe7bd: lea r8d, [rbp + 0x10] */
L_1800fe7bd_0:;
L_1800fe7bd_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x10))));
L_1800fe7bd_2:;
wr(s->r,128,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1800fe7bd_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1800fe7bd_4:;
/* 1800fe7c1: mov rsi, rcx */
L_1800fe7c1_0:;
L_1800fe7c1_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1800fe7c1_2:;
/* 1800fe7c4: mov qword ptr [rsp + 0x20], rbp */
L_1800fe7c4_0:;
L_1800fe7c4_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800fe7c4_2:;
wr(s->u,16,8,rd(s->r,40,8));
L_1800fe7c4_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1800fe7c4_4:;
/* 1800fe7c9: call 0x180034740 */
L_1800fe7c9_0:;
L_1800fe7c9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800fe7c9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800fe7ce)));
L_1800fe7c9_3:;
return (uint64_t)UINT64_C(0x180034740);
L_1800fe7c9_4:;
return UINT64_C(0x1800fe7ce);
}
uint64_t b_1800fe7ce(CPU*s){
/* 1800fe7ce: test eax, eax */
L_1800fe7ce_0:;
L_1800fe7ce_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fe7ce_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fe7ce_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800fe7ce_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fe7ce_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1800fe7ce_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1800fe7ce_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800fe7ce_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800fe7ce_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800fe7ce_10:;
/* 1800fe7d0: je 0x1800fe813 */
L_1800fe7d0_0:;
L_1800fe7d0_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800fe813);}
L_1800fe7d0_2:;
return UINT64_C(0x1800fe7d2);
}
uint64_t b_1800fe7d2(CPU*s){
/* 1800fe7d2: cmp dword ptr [rsp + 0x30], 0x10 */
L_1800fe7d2_0:;
L_1800fe7d2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800fe7d2_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800fe7d2_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1800fe7d2_4:;
wr(s->r,512,1,(rd(s->u,19,4)<((U)UINT64_C(0x10))));
L_1800fe7d2_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),((U)UINT64_C(0x10)),4,1));
L_1800fe7d2_6:;
wr(s->u,23,4,(rd(s->u,19,4)-((U)UINT64_C(0x10))));
L_1800fe7d2_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fe7d2_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1800fe7d2_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1800fe7d2_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1800fe7d2_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800fe7d2_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800fe7d2_13:;
/* 1800fe7d7: jne 0x1800fe813 */
L_1800fe7d7_0:;
L_1800fe7d7_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1800fe7d7_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1800fe813);}
L_1800fe7d7_3:;
return UINT64_C(0x1800fe7d9);
}
uint64_t b_1800fe7d9(CPU*s){
/* 1800fe7d9: lea r9, [rsp + 0x30] */
L_1800fe7d9_0:;
L_1800fe7d9_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800fe7d9_2:;
wr(s->r,136,8,rd(s->u,8,8));
L_1800fe7d9_3:;
/* 1800fe7de: lea r8d, [rbp + 8] */
L_1800fe7de_0:;
L_1800fe7de_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1800fe7de_2:;
wr(s->r,128,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1800fe7de_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1800fe7de_4:;
/* 1800fe7e2: lea rdx, [rsp + 0x38] */
L_1800fe7e2_0:;
L_1800fe7e2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800fe7e2_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1800fe7e2_3:;
/* 1800fe7e7: mov rcx, rsi */
L_1800fe7e7_0:;
L_1800fe7e7_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1800fe7e7_2:;
/* 1800fe7ea: mov qword ptr [rsp + 0x20], rbp */
L_1800fe7ea_0:;
L_1800fe7ea_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800fe7ea_2:;
wr(s->u,16,8,rd(s->r,40,8));
L_1800fe7ea_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1800fe7ea_4:;
/* 1800fe7ef: call 0x180034740 */
L_1800fe7ef_0:;
L_1800fe7ef_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800fe7ef_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800fe7f4)));
L_1800fe7ef_3:;
return (uint64_t)UINT64_C(0x180034740);
L_1800fe7ef_4:;
return UINT64_C(0x1800fe7f4);
}
uint64_t b_1800fe7f4(CPU*s){
/* 1800fe7f4: test eax, eax */
L_1800fe7f4_0:;
L_1800fe7f4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fe7f4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fe7f4_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800fe7f4_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fe7f4_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1800fe7f4_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1800fe7f4_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800fe7f4_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800fe7f4_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800fe7f4_10:;
/* 1800fe7f6: je 0x1800fe813 */
L_1800fe7f6_0:;
L_1800fe7f6_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800fe813);}
L_1800fe7f6_2:;
return UINT64_C(0x1800fe7f8);
}
uint64_t b_1800fe7f8(CPU*s){
/* 1800fe7f8: cmp dword ptr [rsp + 0x30], 8 */
L_1800fe7f8_0:;
L_1800fe7f8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800fe7f8_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800fe7f8_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1800fe7f8_4:;
wr(s->r,512,1,(rd(s->u,19,4)<((U)UINT64_C(0x8))));
L_1800fe7f8_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),((U)UINT64_C(0x8)),4,1));
L_1800fe7f8_6:;
wr(s->u,23,4,(rd(s->u,19,4)-((U)UINT64_C(0x8))));
L_1800fe7f8_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fe7f8_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1800fe7f8_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1800fe7f8_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1800fe7f8_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800fe7f8_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800fe7f8_13:;
/* 1800fe7fd: jne 0x1800fe813 */
L_1800fe7fd_0:;
L_1800fe7fd_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1800fe7fd_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1800fe813);}
L_1800fe7fd_3:;
return UINT64_C(0x1800fe7ff);
}
uint64_t b_1800fe7ff(CPU*s){
/* 1800fe7ff: mov rax, qword ptr [rsp + 0x38] */
L_1800fe7ff_0:;
L_1800fe7ff_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800fe7ff_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800fe7ff_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1800fe7ff_4:;
/* 1800fe804: sub rax, 0x18 */
L_1800fe804_0:;
L_1800fe804_1:;
wr(s->r,512,1,(rd(s->r,0,8)<((U)UINT64_C(0x18))));
L_1800fe804_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x18)),8,1));
L_1800fe804_3:;
wr(s->r,0,8,(rd(s->r,0,8)-((U)UINT64_C(0x18))));
L_1800fe804_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800fe804_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1800fe804_6:;
wr(s->u,24,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1800fe804_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800fe804_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800fe804_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800fe804_10:;
/* 1800fe808: cmovs rax, rbp */
L_1800fe808_0:;
L_1800fe808_1:;
wr(s->u,34,8,rd(s->r,40,8));
L_1800fe808_2:;
wr(s->u,42,1,(!rd(s->r,519,1)));
L_1800fe808_3:;
if(rd(s->u,42,1)){goto L_1800fe80c_0;}
L_1800fe808_4:;
wr(s->r,0,8,rd(s->u,34,8));
L_1800fe808_5:;
/* 1800fe80c: mov qword ptr [rsp + 0x38], rax */
L_1800fe80c_0:;
L_1800fe80c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800fe80c_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800fe80c_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800fe80c_4:;
/* 1800fe811: jmp 0x1800fe818 */
L_1800fe811_0:;
L_1800fe811_1:;
return UINT64_C(0x1800fe818);
L_1800fe811_2:;
return UINT64_C(0x1800fe813);
}
uint64_t b_1800fe80c(CPU*s){
/* 1800fe80c: mov qword ptr [rsp + 0x38], rax */
L_1800fe80c_0:;
L_1800fe80c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800fe80c_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800fe80c_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800fe80c_4:;
/* 1800fe811: jmp 0x1800fe818 */
L_1800fe811_0:;
L_1800fe811_1:;
return UINT64_C(0x1800fe818);
L_1800fe811_2:;
return UINT64_C(0x1800fe813);
}
uint64_t b_1800fe813(CPU*s){
/* 1800fe813: mov rax, qword ptr [rsp + 0x38] */
L_1800fe813_0:;
L_1800fe813_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800fe813_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800fe813_3:;
wr(s->r,0,8,rd(s->u,8,8));
L_1800fe813_4:;
/* 1800fe818: test rdi, rdi */
L_1800fe818_0:;
L_1800fe818_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fe818_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fe818_3:;
wr(s->u,26,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1800fe818_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800fe818_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1800fe818_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1800fe818_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800fe818_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800fe818_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800fe818_10:;
/* 1800fe81b: je 0x1800fe824 */
L_1800fe81b_0:;
L_1800fe81b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800fe824);}
L_1800fe81b_2:;
return UINT64_C(0x1800fe81d);
}
uint64_t b_1800fe818(CPU*s){
/* 1800fe818: test rdi, rdi */
L_1800fe818_0:;
L_1800fe818_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fe818_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fe818_3:;
wr(s->u,10,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1800fe818_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800fe818_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800fe818_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800fe818_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800fe818_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800fe818_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800fe818_10:;
/* 1800fe81b: je 0x1800fe824 */
L_1800fe81b_0:;
L_1800fe81b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800fe824);}
L_1800fe81b_2:;
return UINT64_C(0x1800fe81d);
}
uint64_t b_1800fe81d(CPU*s){
/* 1800fe81d: add rax, -0x10 */
L_1800fe81d_0:;
L_1800fe81d_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffff0)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1800fe81d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0xfffffffffffffff0)),8,0));
L_1800fe81d_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1800fe81d_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800fe81d_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1800fe81d_6:;
wr(s->u,25,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1800fe81d_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1800fe81d_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1800fe81d_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1800fe81d_10:;
/* 1800fe821: mov qword ptr [rdi], rax */
L_1800fe821_0:;
L_1800fe821_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800fe821_2:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,8,8));
L_1800fe821_3:;
/* 1800fe824: lea rax, [rsp + 0x40] */
L_1800fe824_0:;
L_1800fe824_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800fe824_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1800fe824_3:;
/* 1800fe829: lea rcx, [rip + 0x55a7f0] */
L_1800fe829_0:;
L_1800fe829_1:;
wr(s->r,8,8,((U)UINT64_C(0x180659020)));
L_1800fe829_2:;
/* 1800fe830: mov rdx, qword ptr [rax] */
L_1800fe830_0:;
L_1800fe830_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,0,8),8));
L_1800fe830_2:;
wr(s->r,16,8,rd(s->u,16,8));
L_1800fe830_3:;
/* 1800fe833: cmp rdx, qword ptr [rcx] */
L_1800fe833_0:;
L_1800fe833_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1800fe833_2:;
wr(s->u,35,8,rd(s->u,16,8));
L_1800fe833_3:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,35,8)));
L_1800fe833_4:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,35,8),8,1));
L_1800fe833_5:;
wr(s->u,43,8,(rd(s->r,16,8)-rd(s->u,35,8)));
L_1800fe833_6:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800fe833_7:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1800fe833_8:;
wr(s->u,25,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1800fe833_9:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1800fe833_10:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1800fe833_11:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1800fe833_12:;
/* 1800fe836: jne 0x1800fe846 */
L_1800fe836_0:;
L_1800fe836_1:;
wr(s->u,24,1,(!rd(s->r,518,1)));
L_1800fe836_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1800fe846);}
L_1800fe836_3:;
return UINT64_C(0x1800fe838);
}
uint64_t b_1800fe824(CPU*s){
/* 1800fe824: lea rax, [rsp + 0x40] */
L_1800fe824_0:;
L_1800fe824_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800fe824_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1800fe824_3:;
/* 1800fe829: lea rcx, [rip + 0x55a7f0] */
L_1800fe829_0:;
L_1800fe829_1:;
wr(s->r,8,8,((U)UINT64_C(0x180659020)));
L_1800fe829_2:;
/* 1800fe830: mov rdx, qword ptr [rax] */
L_1800fe830_0:;
L_1800fe830_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,0,8),8));
L_1800fe830_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1800fe830_3:;
/* 1800fe833: cmp rdx, qword ptr [rcx] */
L_1800fe833_0:;
L_1800fe833_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1800fe833_2:;
wr(s->u,27,8,rd(s->u,8,8));
L_1800fe833_3:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,27,8)));
L_1800fe833_4:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,27,8),8,1));
L_1800fe833_5:;
wr(s->u,35,8,(rd(s->r,16,8)-rd(s->u,27,8)));
L_1800fe833_6:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800fe833_7:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1800fe833_8:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1800fe833_9:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1800fe833_10:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1800fe833_11:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1800fe833_12:;
/* 1800fe836: jne 0x1800fe846 */
L_1800fe836_0:;
L_1800fe836_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1800fe836_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1800fe846);}
L_1800fe836_3:;
return UINT64_C(0x1800fe838);
}
uint64_t b_1800fe838(CPU*s){
/* 1800fe838: mov rdx, qword ptr [rax + 8] */
L_1800fe838_0:;
L_1800fe838_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1800fe838_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800fe838_3:;
wr(s->r,16,8,rd(s->u,8,8));
L_1800fe838_4:;
/* 1800fe83c: cmp rdx, qword ptr [rcx + 8] */
L_1800fe83c_0:;
L_1800fe83c_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1800fe83c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800fe83c_3:;
wr(s->u,27,8,rd(s->u,8,8));
L_1800fe83c_4:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,27,8)));
L_1800fe83c_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,27,8),8,1));
L_1800fe83c_6:;
wr(s->u,35,8,(rd(s->r,16,8)-rd(s->u,27,8)));
L_1800fe83c_7:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800fe83c_8:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1800fe83c_9:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1800fe83c_10:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1800fe83c_11:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1800fe83c_12:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1800fe83c_13:;
/* 1800fe840: jne 0x1800fe846 */
L_1800fe840_0:;
L_1800fe840_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1800fe840_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1800fe846);}
L_1800fe840_3:;
return UINT64_C(0x1800fe842);
}
uint64_t b_1800fe842(CPU*s){
/* 1800fe842: mov eax, ebp */
L_1800fe842_0:;
L_1800fe842_1:;
wr(s->r,0,4,rd(s->r,40,4));
L_1800fe842_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800fe842_3:;
/* 1800fe844: jmp 0x1800fe84b */
L_1800fe844_0:;
L_1800fe844_1:;
return UINT64_C(0x1800fe84b);
L_1800fe844_2:;
return UINT64_C(0x1800fe846);
}
uint64_t b_1800fe846(CPU*s){
/* 1800fe846: sbb eax, eax */
L_1800fe846_0:;
L_1800fe846_1:;
wr(s->u,0,4,rd(s->r,512,1));
L_1800fe846_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,0,4)));
L_1800fe846_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,0,4),4,1));
L_1800fe846_4:;
wr(s->u,4,4,(rd(s->r,0,4)-rd(s->r,0,4)));
L_1800fe846_5:;
wr(s->u,8,1,(rd(s->u,4,4)<rd(s->u,0,4)));
L_1800fe846_6:;
wr(s->r,512,1,((rd(s->r,512,1)!=0)||(rd(s->u,8,1)!=0)));
L_1800fe846_7:;
wr(s->u,9,1,signed_overflow(rd(s->u,4,4),rd(s->u,0,4),4,1));
L_1800fe846_8:;
wr(s->r,523,1,((rd(s->r,523,1)!=0)!=(rd(s->u,9,1)!=0)));
L_1800fe846_9:;
wr(s->r,0,4,(rd(s->u,4,4)-rd(s->u,0,4)));
L_1800fe846_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800fe846_11:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fe846_12:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800fe846_13:;
wr(s->u,10,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800fe846_14:;
wr(s->u,14,1,pop(rd(s->u,10,4),4));
L_1800fe846_15:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_1800fe846_16:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_1800fe846_17:;
/* 1800fe848: sbb eax, -1 */
L_1800fe848_0:;
L_1800fe848_1:;
wr(s->u,0,4,rd(s->r,512,1));
L_1800fe848_2:;
wr(s->r,512,1,(rd(s->r,0,4)<((U)UINT64_C(0xffffffff))));
L_1800fe848_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0xffffffff)),4,1));
L_1800fe848_4:;
wr(s->u,4,4,(rd(s->r,0,4)-((U)UINT64_C(0xffffffff))));
L_1800fe848_5:;
wr(s->u,8,1,(rd(s->u,4,4)<rd(s->u,0,4)));
L_1800fe848_6:;
wr(s->r,512,1,((rd(s->r,512,1)!=0)||(rd(s->u,8,1)!=0)));
L_1800fe848_7:;
wr(s->u,9,1,signed_overflow(rd(s->u,4,4),rd(s->u,0,4),4,1));
L_1800fe848_8:;
wr(s->r,523,1,((rd(s->r,523,1)!=0)!=(rd(s->u,9,1)!=0)));
L_1800fe848_9:;
wr(s->r,0,4,(rd(s->u,4,4)-rd(s->u,0,4)));
L_1800fe848_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800fe848_11:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fe848_12:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800fe848_13:;
wr(s->u,10,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800fe848_14:;
wr(s->u,14,1,pop(rd(s->u,10,4),4));
L_1800fe848_15:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_1800fe848_16:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_1800fe848_17:;
/* 1800fe84b: test eax, eax */
L_1800fe84b_0:;
L_1800fe84b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fe84b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fe84b_3:;
wr(s->u,16,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800fe84b_4:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fe84b_5:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_1800fe84b_6:;
wr(s->u,10,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_1800fe84b_7:;
wr(s->u,14,1,pop(rd(s->u,10,4),4));
L_1800fe84b_8:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_1800fe84b_9:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_1800fe84b_10:;
/* 1800fe84d: je 0x1800fe856 */
L_1800fe84d_0:;
L_1800fe84d_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800fe856);}
L_1800fe84d_2:;
return UINT64_C(0x1800fe84f);
}
uint64_t b_1800fe84b(CPU*s){
/* 1800fe84b: test eax, eax */
L_1800fe84b_0:;
L_1800fe84b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fe84b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fe84b_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800fe84b_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fe84b_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1800fe84b_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1800fe84b_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800fe84b_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800fe84b_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800fe84b_10:;
/* 1800fe84d: je 0x1800fe856 */
L_1800fe84d_0:;
L_1800fe84d_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800fe856);}
L_1800fe84d_2:;
return UINT64_C(0x1800fe84f);
}
uint64_t b_1800fe84f(CPU*s){
/* 1800fe84f: mov eax, 0x8004e080 */
L_1800fe84f_0:;
L_1800fe84f_1:;
wr(s->r,0,8,((U)UINT64_C(0x8004e080)));
L_1800fe84f_2:;
/* 1800fe854: jmp 0x1800fe8a7 */
L_1800fe854_0:;
L_1800fe854_1:;
return UINT64_C(0x1800fe8a7);
L_1800fe854_2:;
return UINT64_C(0x1800fe856);
}
uint64_t b_1800fe856(CPU*s){
/* 1800fe856: lea r9, [rsp + 0x34] */
L_1800fe856_0:;
L_1800fe856_1:;
wr(s->u,0,8,(((U)UINT64_C(0x34))+rd(s->r,32,8)));
L_1800fe856_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1800fe856_3:;
/* 1800fe85b: lea rdx, [rsp + 0x40] */
L_1800fe85b_0:;
L_1800fe85b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800fe85b_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1800fe85b_3:;
/* 1800fe860: mov r8d, 0x10 */
L_1800fe860_0:;
L_1800fe860_1:;
wr(s->r,128,8,((U)UINT64_C(0x10)));
L_1800fe860_2:;
/* 1800fe866: mov rcx, rsi */
L_1800fe866_0:;
L_1800fe866_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1800fe866_2:;
/* 1800fe869: mov qword ptr [rsp + 0x20], rbp */
L_1800fe869_0:;
L_1800fe869_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800fe869_2:;
wr(s->u,8,8,rd(s->r,40,8));
L_1800fe869_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800fe869_4:;
/* 1800fe86e: call 0x180034740 */
L_1800fe86e_0:;
L_1800fe86e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800fe86e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800fe873)));
L_1800fe86e_3:;
return (uint64_t)UINT64_C(0x180034740);
L_1800fe86e_4:;
return UINT64_C(0x1800fe873);
}
uint64_t b_1800fe873(CPU*s){
/* 1800fe873: test eax, eax */
L_1800fe873_0:;
L_1800fe873_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fe873_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fe873_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800fe873_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fe873_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1800fe873_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1800fe873_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1800fe873_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1800fe873_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1800fe873_10:;
/* 1800fe875: jne 0x1800fe87e */
L_1800fe875_0:;
L_1800fe875_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1800fe875_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800fe87e);}
L_1800fe875_3:;
return UINT64_C(0x1800fe877);
}
uint64_t b_1800fe877(CPU*s){
/* 1800fe877: mov eax, 0x8004e008 */
L_1800fe877_0:;
L_1800fe877_1:;
wr(s->r,0,8,((U)UINT64_C(0x8004e008)));
L_1800fe877_2:;
/* 1800fe87c: jmp 0x1800fe8a7 */
L_1800fe87c_0:;
L_1800fe87c_1:;
return UINT64_C(0x1800fe8a7);
L_1800fe87c_2:;
return UINT64_C(0x1800fe87e);
}
uint64_t b_1800fe87e(CPU*s){
/* 1800fe87e: cmp dword ptr [rsp + 0x34], 0x10 */
L_1800fe87e_0:;
L_1800fe87e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x34))+rd(s->r,32,8)));
L_1800fe87e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800fe87e_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1800fe87e_4:;
wr(s->r,512,1,(rd(s->u,19,4)<((U)UINT64_C(0x10))));
L_1800fe87e_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),((U)UINT64_C(0x10)),4,1));
L_1800fe87e_6:;
wr(s->u,23,4,(rd(s->u,19,4)-((U)UINT64_C(0x10))));
L_1800fe87e_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fe87e_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1800fe87e_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1800fe87e_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1800fe87e_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800fe87e_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800fe87e_13:;
/* 1800fe883: jne 0x1800fe877 */
L_1800fe883_0:;
L_1800fe883_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1800fe883_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1800fe877);}
L_1800fe883_3:;
return UINT64_C(0x1800fe885);
}
uint64_t b_1800fe885(CPU*s){
/* 1800fe885: test rbx, rbx */
L_1800fe885_0:;
L_1800fe885_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fe885_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fe885_3:;
wr(s->u,10,8,(rd(s->r,24,8)&rd(s->r,24,8)));
L_1800fe885_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800fe885_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800fe885_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800fe885_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800fe885_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800fe885_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800fe885_10:;
/* 1800fe888: je 0x1800fe8a5 */
L_1800fe888_0:;
L_1800fe888_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800fe8a5);}
L_1800fe888_2:;
return UINT64_C(0x1800fe88a);
}
uint64_t b_1800fe88a(CPU*s){
/* 1800fe88a: lea rcx, [rsp + 0x40] */
L_1800fe88a_0:;
L_1800fe88a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800fe88a_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800fe88a_3:;
/* 1800fe88f: mov eax, dword ptr [rcx] */
L_1800fe88f_0:;
L_1800fe88f_1:;
wr(s->u,20,4,mr((uint64_t)rd(s->r,8,8),4));
L_1800fe88f_2:;
wr(s->r,0,4,rd(s->u,20,4));
L_1800fe88f_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800fe88f_4:;
/* 1800fe891: mov dword ptr [rbx], eax */
L_1800fe891_0:;
L_1800fe891_1:;
wr(s->u,16,4,rd(s->r,0,4));
L_1800fe891_2:;
mw((uint64_t)rd(s->r,24,8),4,rd(s->u,16,4));
L_1800fe891_3:;
/* 1800fe893: mov eax, dword ptr [rcx + 4] */
L_1800fe893_0:;
L_1800fe893_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1800fe893_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800fe893_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1800fe893_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800fe893_5:;
/* 1800fe896: mov dword ptr [rbx + 4], eax */
L_1800fe896_0:;
L_1800fe896_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x4))));
L_1800fe896_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1800fe896_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1800fe896_4:;
/* 1800fe899: mov eax, dword ptr [rcx + 8] */
L_1800fe899_0:;
L_1800fe899_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1800fe899_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800fe899_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1800fe899_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800fe899_5:;
/* 1800fe89c: mov dword ptr [rbx + 8], eax */
L_1800fe89c_0:;
L_1800fe89c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1800fe89c_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1800fe89c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1800fe89c_4:;
/* 1800fe89f: mov eax, dword ptr [rcx + 0xc] */
L_1800fe89f_0:;
L_1800fe89f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1800fe89f_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800fe89f_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1800fe89f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800fe89f_5:;
/* 1800fe8a2: mov dword ptr [rbx + 0xc], eax */
L_1800fe8a2_0:;
L_1800fe8a2_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1800fe8a2_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1800fe8a2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1800fe8a2_4:;
/* 1800fe8a5: xor eax, eax */
L_1800fe8a5_0:;
L_1800fe8a5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fe8a5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fe8a5_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1800fe8a5_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800fe8a5_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fe8a5_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800fe8a5_7:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800fe8a5_8:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1800fe8a5_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1800fe8a5_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1800fe8a5_11:;
/* 1800fe8a7: mov rcx, qword ptr [rsp + 0x50] */
L_1800fe8a7_0:;
L_1800fe8a7_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1800fe8a7_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1800fe8a7_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1800fe8a7_4:;
/* 1800fe8ac: xor rcx, rsp */
L_1800fe8ac_0:;
L_1800fe8ac_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fe8ac_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fe8ac_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800fe8ac_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800fe8ac_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800fe8ac_6:;
wr(s->u,32,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800fe8ac_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1800fe8ac_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1800fe8ac_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1800fe8ac_10:;
/* 1800fe8af: call 0x18000d680 */
L_1800fe8af_0:;
L_1800fe8af_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800fe8af_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800fe8b4)));
L_1800fe8af_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800fe8af_4:;
return UINT64_C(0x1800fe8b4);
}
uint64_t b_1800fe8a5(CPU*s){
/* 1800fe8a5: xor eax, eax */
L_1800fe8a5_0:;
L_1800fe8a5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fe8a5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fe8a5_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1800fe8a5_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800fe8a5_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fe8a5_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800fe8a5_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800fe8a5_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1800fe8a5_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800fe8a5_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800fe8a5_11:;
/* 1800fe8a7: mov rcx, qword ptr [rsp + 0x50] */
L_1800fe8a7_0:;
L_1800fe8a7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1800fe8a7_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800fe8a7_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800fe8a7_4:;
/* 1800fe8ac: xor rcx, rsp */
L_1800fe8ac_0:;
L_1800fe8ac_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fe8ac_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fe8ac_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800fe8ac_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800fe8ac_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800fe8ac_6:;
wr(s->u,16,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800fe8ac_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800fe8ac_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800fe8ac_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800fe8ac_10:;
/* 1800fe8af: call 0x18000d680 */
L_1800fe8af_0:;
L_1800fe8af_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800fe8af_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800fe8b4)));
L_1800fe8af_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800fe8af_4:;
return UINT64_C(0x1800fe8b4);
}
uint64_t b_1800fe8a7(CPU*s){
/* 1800fe8a7: mov rcx, qword ptr [rsp + 0x50] */
L_1800fe8a7_0:;
L_1800fe8a7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1800fe8a7_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800fe8a7_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800fe8a7_4:;
/* 1800fe8ac: xor rcx, rsp */
L_1800fe8ac_0:;
L_1800fe8ac_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fe8ac_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fe8ac_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800fe8ac_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800fe8ac_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800fe8ac_6:;
wr(s->u,16,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800fe8ac_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800fe8ac_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800fe8ac_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800fe8ac_10:;
/* 1800fe8af: call 0x18000d680 */
L_1800fe8af_0:;
L_1800fe8af_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800fe8af_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800fe8b4)));
L_1800fe8af_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800fe8af_4:;
return UINT64_C(0x1800fe8b4);
}
uint64_t b_1800fe8b4(CPU*s){
/* 1800fe8b4: mov rbx, qword ptr [rsp + 0x98] */
L_1800fe8b4_0:;
L_1800fe8b4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x98))+rd(s->r,32,8)));
L_1800fe8b4_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800fe8b4_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1800fe8b4_4:;
/* 1800fe8bc: add rsp, 0x60 */
L_1800fe8bc_0:;
L_1800fe8bc_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x60)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1800fe8bc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x60)),8,0));
L_1800fe8bc_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x60))));
L_1800fe8bc_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800fe8bc_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800fe8bc_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800fe8bc_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800fe8bc_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800fe8bc_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800fe8bc_10:;
/* 1800fe8c0: pop rdi */
L_1800fe8c0_0:;
L_1800fe8c0_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800fe8c0_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800fe8c0_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800fe8c0_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1800fe8c0_5:;
/* 1800fe8c1: pop rsi */
L_1800fe8c1_0:;
L_1800fe8c1_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800fe8c1_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800fe8c1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800fe8c1_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1800fe8c1_5:;
/* 1800fe8c2: pop rbp */
L_1800fe8c2_0:;
L_1800fe8c2_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800fe8c2_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800fe8c2_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800fe8c2_4:;
wr(s->r,40,8,rd(s->u,26,8));
L_1800fe8c2_5:;
/* 1800fe8c3: ret  */
L_1800fe8c3_0:;
L_1800fe8c3_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800fe8c3_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800fe8c3_3:;
return (uint64_t)rd(s->r,648,8);
L_1800fe8c3_4:;
return UINT64_C(0x1800fe8c4);
}
uint64_t b_1800feca0(CPU*s){
/* 1800feca0: mov qword ptr [rsp + 8], rbx */
L_1800feca0_0:;
L_1800feca0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1800feca0_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800feca0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800feca0_4:;
/* 1800feca5: push rbp */
L_1800feca5_0:;
L_1800feca5_1:;
wr(s->u,16,8,rd(s->r,40,8));
L_1800feca5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800feca5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1800feca5_4:;
/* 1800feca6: push rsi */
L_1800feca6_0:;
L_1800feca6_1:;
wr(s->u,16,8,rd(s->r,48,8));
L_1800feca6_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800feca6_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1800feca6_4:;
/* 1800feca7: push rdi */
L_1800feca7_0:;
L_1800feca7_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1800feca7_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800feca7_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1800feca7_4:;
/* 1800feca8: sub rsp, 0x40 */
L_1800feca8_0:;
L_1800feca8_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x40))));
L_1800feca8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,1));
L_1800feca8_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x40))));
L_1800feca8_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800feca8_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800feca8_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800feca8_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800feca8_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800feca8_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800feca8_10:;
/* 1800fecac: mov rbp, rdx */
L_1800fecac_0:;
L_1800fecac_1:;
wr(s->r,40,8,rd(s->r,16,8));
L_1800fecac_2:;
/* 1800fecaf: lea r8, [rsp + 0x34] */
L_1800fecaf_0:;
L_1800fecaf_1:;
wr(s->u,0,8,(((U)UINT64_C(0x34))+rd(s->r,32,8)));
L_1800fecaf_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800fecaf_3:;
/* 1800fecb4: mov r9d, 1 */
L_1800fecb4_0:;
L_1800fecb4_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1800fecb4_2:;
/* 1800fecba: xor edx, edx */
L_1800fecba_0:;
L_1800fecba_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fecba_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fecba_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1800fecba_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800fecba_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fecba_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1800fecba_7:;
wr(s->u,24,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1800fecba_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1800fecba_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800fecba_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800fecba_11:;
/* 1800fecbc: mov rdi, rcx */
L_1800fecbc_0:;
L_1800fecbc_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1800fecbc_2:;
/* 1800fecbf: mov ebx, 0x8004e009 */
L_1800fecbf_0:;
L_1800fecbf_1:;
wr(s->r,24,8,((U)UINT64_C(0x8004e009)));
L_1800fecbf_2:;
/* 1800fecc4: mov qword ptr [rsp + 0x30], 0 */
L_1800fecc4_0:;
L_1800fecc4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800fecc4_2:;
wr(s->u,8,8,((U)UINT64_C(0x0)));
L_1800fecc4_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800fecc4_4:;
/* 1800feccd: call qword ptr [rip + 0x549c1d] */
L_1800feccd_0:;
L_1800feccd_1:;
wr(s->u,34,8,mr(UINT64_C(0x1806488f0),8));
L_1800feccd_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800feccd_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800fecd3)));
L_1800feccd_4:;
return (uint64_t)rd(s->u,34,8);
L_1800feccd_5:;
return UINT64_C(0x1800fecd3);
}
uint64_t b_1800fecd3(CPU*s){
/* 1800fecd3: xor r9d, r9d */
L_1800fecd3_0:;
L_1800fecd3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fecd3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fecd3_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1800fecd3_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800fecd3_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fecd3_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1800fecd3_7:;
wr(s->u,20,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1800fecd3_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1800fecd3_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800fecd3_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800fecd3_11:;
/* 1800fecd6: lea edx, [r9 + 0x10] */
L_1800fecd6_0:;
L_1800fecd6_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x10))));
L_1800fecd6_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1800fecd6_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800fecd6_4:;
/* 1800fecda: xor r8d, r8d */
L_1800fecda_0:;
L_1800fecda_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fecda_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fecda_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1800fecda_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1800fecda_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fecda_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1800fecda_7:;
wr(s->u,20,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1800fecda_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1800fecda_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800fecda_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800fecda_11:;
/* 1800fecdd: mov rcx, rdi */
L_1800fecdd_0:;
L_1800fecdd_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800fecdd_2:;
/* 1800fece0: mov esi, eax */
L_1800fece0_0:;
L_1800fece0_1:;
wr(s->r,48,4,rd(s->r,0,4));
L_1800fece0_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1800fece0_3:;
/* 1800fece2: mov dword ptr [rsp + 0x30], eax */
L_1800fece2_0:;
L_1800fece2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800fece2_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1800fece2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1800fece2_4:;
/* 1800fece6: call qword ptr [rip + 0x549c04] */
L_1800fece6_0:;
L_1800fece6_1:;
wr(s->u,26,8,mr(UINT64_C(0x1806488f0),8));
L_1800fece6_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800fece6_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800fecec)));
L_1800fece6_4:;
return (uint64_t)rd(s->u,26,8);
L_1800fece6_5:;
return UINT64_C(0x1800fecec);
}
uint64_t b_1800fecec(CPU*s){
/* 1800fecec: lea r9, [rsp + 0x70] */
L_1800fecec_0:;
L_1800fecec_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1800fecec_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1800fecec_3:;
/* 1800fecf1: lea rdx, [rsp + 0x38] */
L_1800fecf1_0:;
L_1800fecf1_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800fecf1_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1800fecf1_3:;
/* 1800fecf6: mov r8d, 8 */
L_1800fecf6_0:;
L_1800fecf6_1:;
wr(s->r,128,8,((U)UINT64_C(0x8)));
L_1800fecf6_2:;
/* 1800fecfc: mov rcx, rdi */
L_1800fecfc_0:;
L_1800fecfc_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800fecfc_2:;
/* 1800fecff: mov qword ptr [rsp + 0x20], 0 */
L_1800fecff_0:;
L_1800fecff_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800fecff_2:;
wr(s->u,8,8,((U)UINT64_C(0x0)));
L_1800fecff_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800fecff_4:;
/* 1800fed08: call 0x180034740 */
L_1800fed08_0:;
L_1800fed08_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800fed08_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800fed0d)));
L_1800fed08_3:;
return (uint64_t)UINT64_C(0x180034740);
L_1800fed08_4:;
return UINT64_C(0x1800fed0d);
}
uint64_t b_1800fed0d(CPU*s){
/* 1800fed0d: test eax, eax */
L_1800fed0d_0:;
L_1800fed0d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fed0d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fed0d_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800fed0d_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fed0d_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1800fed0d_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1800fed0d_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800fed0d_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800fed0d_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800fed0d_10:;
/* 1800fed0f: je 0x1800fed18 */
L_1800fed0f_0:;
L_1800fed0f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800fed18);}
L_1800fed0f_2:;
return UINT64_C(0x1800fed11);
}
uint64_t b_1800fed11(CPU*s){
/* 1800fed11: cmp dword ptr [rsp + 0x70], 8 */
L_1800fed11_0:;
L_1800fed11_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1800fed11_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800fed11_3:;
wr(s->u,18,4,rd(s->u,8,4));
L_1800fed11_4:;
wr(s->r,512,1,(rd(s->u,18,4)<((U)UINT64_C(0x8))));
L_1800fed11_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),((U)UINT64_C(0x8)),4,1));
L_1800fed11_6:;
wr(s->u,22,4,(rd(s->u,18,4)-((U)UINT64_C(0x8))));
L_1800fed11_7:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fed11_8:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1800fed11_9:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1800fed11_10:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1800fed11_11:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1800fed11_12:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1800fed11_13:;
/* 1800fed16: je 0x1800fed1f */
L_1800fed16_0:;
L_1800fed16_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800fed1f);}
L_1800fed16_2:;
return UINT64_C(0x1800fed18);
}
uint64_t b_1800fed18(CPU*s){
/* 1800fed18: mov ebx, 0x8004e008 */
L_1800fed18_0:;
L_1800fed18_1:;
wr(s->r,24,8,((U)UINT64_C(0x8004e008)));
L_1800fed18_2:;
/* 1800fed1d: jmp 0x1800fed5d */
L_1800fed1d_0:;
L_1800fed1d_1:;
return UINT64_C(0x1800fed5d);
L_1800fed1d_2:;
return UINT64_C(0x1800fed1f);
}
uint64_t b_1800fed1f(CPU*s){
/* 1800fed1f: add qword ptr [rsp + 0x38], rbp */
L_1800fed1f_0:;
L_1800fed1f_1:;
wr(s->u,8,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800fed1f_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1800fed1f_3:;
wr(s->r,512,1,(((rd(s->u,16,8)+rd(s->r,40,8))&(((U)1<<64)-1))<rd(s->u,16,8)));
L_1800fed1f_4:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1800fed1f_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,16,8),rd(s->r,40,8),8,0));
L_1800fed1f_6:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1800fed1f_7:;
wr(s->u,16,8,(rd(s->u,16,8)+rd(s->r,40,8)));
L_1800fed1f_8:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1800fed1f_9:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1800fed1f_10:;
wr(s->r,519,1,(sx(rd(s->u,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800fed1f_11:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1800fed1f_12:;
wr(s->r,518,1,(rd(s->u,16,8)==((U)UINT64_C(0x0))));
L_1800fed1f_13:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1800fed1f_14:;
wr(s->u,24,8,(rd(s->u,16,8)&((U)UINT64_C(0xff))));
L_1800fed1f_15:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800fed1f_16:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800fed1f_17:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800fed1f_18:;
/* 1800fed24: xor r9d, r9d */
L_1800fed24_0:;
L_1800fed24_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fed24_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fed24_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1800fed24_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800fed24_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fed24_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1800fed24_7:;
wr(s->u,24,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1800fed24_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1800fed24_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800fed24_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800fed24_11:;
/* 1800fed27: xor r8d, r8d */
L_1800fed27_0:;
L_1800fed27_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fed27_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fed27_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1800fed27_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1800fed27_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fed27_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1800fed27_7:;
wr(s->u,24,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1800fed27_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1800fed27_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800fed27_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800fed27_11:;
/* 1800fed2a: lea edx, [r9 + 0x10] */
L_1800fed2a_0:;
L_1800fed2a_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x10))));
L_1800fed2a_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1800fed2a_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800fed2a_4:;
/* 1800fed2e: mov rcx, rdi */
L_1800fed2e_0:;
L_1800fed2e_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800fed2e_2:;
/* 1800fed31: call qword ptr [rip + 0x549bb9] */
L_1800fed31_0:;
L_1800fed31_1:;
wr(s->u,34,8,mr(UINT64_C(0x1806488f0),8));
L_1800fed31_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800fed31_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800fed37)));
L_1800fed31_4:;
return (uint64_t)rd(s->u,34,8);
L_1800fed31_5:;
return UINT64_C(0x1800fed37);
}
uint64_t b_1800fed37(CPU*s){
/* 1800fed37: lea r9, [rsp + 0x78] */
L_1800fed37_0:;
L_1800fed37_1:;
wr(s->u,0,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1800fed37_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1800fed37_3:;
/* 1800fed3c: lea rdx, [rsp + 0x38] */
L_1800fed3c_0:;
L_1800fed3c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800fed3c_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1800fed3c_3:;
/* 1800fed41: mov r8d, 8 */
L_1800fed41_0:;
L_1800fed41_1:;
wr(s->r,128,8,((U)UINT64_C(0x8)));
L_1800fed41_2:;
/* 1800fed47: mov rcx, rdi */
L_1800fed47_0:;
L_1800fed47_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800fed47_2:;
/* 1800fed4a: mov qword ptr [rsp + 0x20], 0 */
L_1800fed4a_0:;
L_1800fed4a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800fed4a_2:;
wr(s->u,8,8,((U)UINT64_C(0x0)));
L_1800fed4a_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800fed4a_4:;
/* 1800fed53: call qword ptr [rip + 0x549747] */
L_1800fed53_0:;
L_1800fed53_1:;
wr(s->u,16,8,mr(UINT64_C(0x1806484a0),8));
L_1800fed53_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800fed53_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800fed59)));
L_1800fed53_4:;
return (uint64_t)rd(s->u,16,8);
L_1800fed53_5:;
return UINT64_C(0x1800fed59);
}
uint64_t b_1800fed59(CPU*s){
/* 1800fed59: test eax, eax */
L_1800fed59_0:;
L_1800fed59_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fed59_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fed59_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800fed59_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fed59_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1800fed59_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1800fed59_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1800fed59_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1800fed59_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1800fed59_10:;
/* 1800fed5b: jne 0x1800fed89 */
L_1800fed5b_0:;
L_1800fed5b_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1800fed5b_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800fed89);}
L_1800fed5b_3:;
return UINT64_C(0x1800fed5d);
}
uint64_t b_1800fed5d(CPU*s){
/* 1800fed5d: mov rcx, qword ptr [rsp + 0x30] */
L_1800fed5d_0:;
L_1800fed5d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800fed5d_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800fed5d_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1800fed5d_4:;
/* 1800fed62: lea r8, [rsp + 0x34] */
L_1800fed62_0:;
L_1800fed62_1:;
wr(s->u,0,8,(((U)UINT64_C(0x34))+rd(s->r,32,8)));
L_1800fed62_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800fed62_3:;
/* 1800fed67: xor r9d, r9d */
L_1800fed67_0:;
L_1800fed67_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fed67_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fed67_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1800fed67_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800fed67_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fed67_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1800fed67_7:;
wr(s->u,24,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1800fed67_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1800fed67_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1800fed67_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1800fed67_11:;
/* 1800fed6a: mov qword ptr [rsp + 0x30], rcx */
L_1800fed6a_0:;
L_1800fed6a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800fed6a_2:;
wr(s->u,8,8,rd(s->r,8,8));
L_1800fed6a_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800fed6a_4:;
/* 1800fed6f: mov rcx, rdi */
L_1800fed6f_0:;
L_1800fed6f_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800fed6f_2:;
/* 1800fed72: mov edx, esi */
L_1800fed72_0:;
L_1800fed72_1:;
wr(s->r,16,4,rd(s->r,48,4));
L_1800fed72_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800fed72_3:;
/* 1800fed74: call qword ptr [rip + 0x549b76] */
L_1800fed74_0:;
L_1800fed74_1:;
wr(s->u,30,8,mr(UINT64_C(0x1806488f0),8));
L_1800fed74_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800fed74_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800fed7a)));
L_1800fed74_4:;
return (uint64_t)rd(s->u,30,8);
L_1800fed74_5:;
return UINT64_C(0x1800fed7a);
}
uint64_t b_1800fed7a(CPU*s){
/* 1800fed7a: mov eax, ebx */
L_1800fed7a_0:;
L_1800fed7a_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1800fed7a_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800fed7a_3:;
/* 1800fed7c: mov rbx, qword ptr [rsp + 0x60] */
L_1800fed7c_0:;
L_1800fed7c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1800fed7c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800fed7c_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1800fed7c_4:;
/* 1800fed81: add rsp, 0x40 */
L_1800fed81_0:;
L_1800fed81_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1800fed81_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1800fed81_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1800fed81_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800fed81_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800fed81_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800fed81_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800fed81_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800fed81_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800fed81_10:;
/* 1800fed85: pop rdi */
L_1800fed85_0:;
L_1800fed85_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800fed85_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800fed85_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800fed85_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1800fed85_5:;
/* 1800fed86: pop rsi */
L_1800fed86_0:;
L_1800fed86_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800fed86_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800fed86_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800fed86_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1800fed86_5:;
/* 1800fed87: pop rbp */
L_1800fed87_0:;
L_1800fed87_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800fed87_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800fed87_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800fed87_4:;
wr(s->r,40,8,rd(s->u,26,8));
L_1800fed87_5:;
/* 1800fed88: ret  */
L_1800fed88_0:;
L_1800fed88_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800fed88_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800fed88_3:;
return (uint64_t)rd(s->r,648,8);
L_1800fed88_4:;
return UINT64_C(0x1800fed89);
}
uint64_t b_1800fed89(CPU*s){
/* 1800fed89: mov rax, qword ptr [rsp + 0x30] */
L_1800fed89_0:;
L_1800fed89_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800fed89_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800fed89_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1800fed89_4:;
/* 1800fed8e: lea r8, [rsp + 0x34] */
L_1800fed8e_0:;
L_1800fed8e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x34))+rd(s->r,32,8)));
L_1800fed8e_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800fed8e_3:;
/* 1800fed93: xor r9d, r9d */
L_1800fed93_0:;
L_1800fed93_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fed93_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fed93_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1800fed93_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800fed93_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fed93_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1800fed93_7:;
wr(s->u,24,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1800fed93_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1800fed93_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1800fed93_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1800fed93_11:;
/* 1800fed96: mov edx, esi */
L_1800fed96_0:;
L_1800fed96_1:;
wr(s->r,16,4,rd(s->r,48,4));
L_1800fed96_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800fed96_3:;
/* 1800fed98: mov rcx, rdi */
L_1800fed98_0:;
L_1800fed98_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800fed98_2:;
/* 1800fed9b: mov qword ptr [rsp + 0x30], rax */
L_1800fed9b_0:;
L_1800fed9b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800fed9b_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800fed9b_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800fed9b_4:;
/* 1800feda0: call qword ptr [rip + 0x549b4a] */
L_1800feda0_0:;
L_1800feda0_1:;
wr(s->u,30,8,mr(UINT64_C(0x1806488f0),8));
L_1800feda0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800feda0_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800feda6)));
L_1800feda0_4:;
return (uint64_t)rd(s->u,30,8);
L_1800feda0_5:;
return UINT64_C(0x1800feda6);
}
uint64_t b_1800feda6(CPU*s){
/* 1800feda6: mov rbx, qword ptr [rsp + 0x60] */
L_1800feda6_0:;
L_1800feda6_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1800feda6_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800feda6_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1800feda6_4:;
/* 1800fedab: xor eax, eax */
L_1800fedab_0:;
L_1800fedab_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fedab_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fedab_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1800fedab_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800fedab_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fedab_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800fedab_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800fedab_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1800fedab_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800fedab_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800fedab_11:;
/* 1800fedad: add rsp, 0x40 */
L_1800fedad_0:;
L_1800fedad_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1800fedad_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1800fedad_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1800fedad_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800fedad_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800fedad_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800fedad_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800fedad_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800fedad_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800fedad_10:;
/* 1800fedb1: pop rdi */
L_1800fedb1_0:;
L_1800fedb1_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800fedb1_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800fedb1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800fedb1_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1800fedb1_5:;
/* 1800fedb2: pop rsi */
L_1800fedb2_0:;
L_1800fedb2_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800fedb2_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800fedb2_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800fedb2_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1800fedb2_5:;
/* 1800fedb3: pop rbp */
L_1800fedb3_0:;
L_1800fedb3_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800fedb3_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800fedb3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800fedb3_4:;
wr(s->r,40,8,rd(s->u,26,8));
L_1800fedb3_5:;
/* 1800fedb4: ret  */
L_1800fedb4_0:;
L_1800fedb4_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800fedb4_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800fedb4_3:;
return (uint64_t)rd(s->r,648,8);
L_1800fedb4_4:;
return UINT64_C(0x1800fedb5);
}
