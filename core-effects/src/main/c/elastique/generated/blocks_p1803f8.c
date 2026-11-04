#include "lift_runtime.h"
uint64_t b_1803f8be0(CPU*s){
/* 1803f8be0: mov qword ptr [rsp + 8], rbx */
L_1803f8be0_0:;
L_1803f8be0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803f8be0_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803f8be0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f8be0_4:;
/* 1803f8be5: push rbp */
L_1803f8be5_0:;
L_1803f8be5_1:;
wr(s->u,16,8,rd(s->r,40,8));
L_1803f8be5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f8be5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803f8be5_4:;
/* 1803f8be6: push rsi */
L_1803f8be6_0:;
L_1803f8be6_1:;
wr(s->u,16,8,rd(s->r,48,8));
L_1803f8be6_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f8be6_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803f8be6_4:;
/* 1803f8be7: push rdi */
L_1803f8be7_0:;
L_1803f8be7_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803f8be7_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f8be7_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803f8be7_4:;
/* 1803f8be8: sub rsp, 0x30 */
L_1803f8be8_0:;
L_1803f8be8_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803f8be8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803f8be8_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803f8be8_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8be8_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f8be8_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f8be8_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803f8be8_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803f8be8_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803f8be8_10:;
/* 1803f8bec: xor ebp, ebp */
L_1803f8bec_0:;
L_1803f8bec_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8bec_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8bec_3:;
wr(s->r,40,4,(rd(s->r,40,4)^rd(s->r,40,4)));
L_1803f8bec_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803f8bec_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8bec_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803f8bec_7:;
wr(s->u,24,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803f8bec_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803f8bec_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803f8bec_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803f8bec_11:;
/* 1803f8bee: mov esi, r8d */
L_1803f8bee_0:;
L_1803f8bee_1:;
wr(s->r,48,4,rd(s->r,128,4));
L_1803f8bee_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803f8bee_3:;
/* 1803f8bf1: mov rdi, rdx */
L_1803f8bf1_0:;
L_1803f8bf1_1:;
wr(s->r,56,8,rd(s->r,16,8));
L_1803f8bf1_2:;
/* 1803f8bf4: mov rax, rcx */
L_1803f8bf4_0:;
L_1803f8bf4_1:;
wr(s->r,0,8,rd(s->r,8,8));
L_1803f8bf4_2:;
/* 1803f8bf7: test rdx, rdx */
L_1803f8bf7_0:;
L_1803f8bf7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8bf7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8bf7_3:;
wr(s->u,34,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803f8bf7_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8bf7_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803f8bf7_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803f8bf7_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803f8bf7_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803f8bf7_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803f8bf7_10:;
/* 1803f8bfa: je 0x1803f8c08 */
L_1803f8bfa_0:;
L_1803f8bfa_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f8c08);}
L_1803f8bfa_2:;
return UINT64_C(0x1803f8bfc);
}
uint64_t b_1803f8bfc(CPU*s){
/* 1803f8bfc: test rcx, rcx */
L_1803f8bfc_0:;
L_1803f8bfc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8bfc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8bfc_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803f8bfc_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8bfc_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803f8bfc_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803f8bfc_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803f8bfc_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803f8bfc_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803f8bfc_10:;
/* 1803f8bff: je 0x1803f8c08 */
L_1803f8bff_0:;
L_1803f8bff_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f8c08);}
L_1803f8bff_2:;
return UINT64_C(0x1803f8c01);
}
uint64_t b_1803f8c01(CPU*s){
/* 1803f8c01: mov ebx, ebp */
L_1803f8c01_0:;
L_1803f8c01_1:;
wr(s->r,24,4,rd(s->r,40,4));
L_1803f8c01_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803f8c01_3:;
/* 1803f8c03: test r8d, r8d */
L_1803f8c03_0:;
L_1803f8c03_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8c03_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8c03_3:;
wr(s->u,7,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803f8c03_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8c03_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803f8c03_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803f8c03_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803f8c03_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803f8c03_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803f8c03_10:;
/* 1803f8c06: jne 0x1803f8c0d */
L_1803f8c06_0:;
L_1803f8c06_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803f8c06_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803f8c0d);}
L_1803f8c06_3:;
return UINT64_C(0x1803f8c08);
}
uint64_t b_1803f8c08(CPU*s){
/* 1803f8c08: mov ebx, 0x80070057 */
L_1803f8c08_0:;
L_1803f8c08_1:;
wr(s->r,24,8,((U)UINT64_C(0x80070057)));
L_1803f8c08_2:;
/* 1803f8c0d: mov rcx, rbp */
L_1803f8c0d_0:;
L_1803f8c0d_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803f8c0d_2:;
/* 1803f8c10: mov qword ptr [rsp + 0x20], rcx */
L_1803f8c10_0:;
L_1803f8c10_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803f8c10_2:;
wr(s->u,8,8,rd(s->r,8,8));
L_1803f8c10_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f8c10_4:;
/* 1803f8c15: test ebx, ebx */
L_1803f8c15_0:;
L_1803f8c15_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8c15_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8c15_3:;
wr(s->u,22,4,(rd(s->r,24,4)&rd(s->r,24,4)));
L_1803f8c15_4:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8c15_5:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803f8c15_6:;
wr(s->u,16,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803f8c15_7:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803f8c15_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803f8c15_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803f8c15_10:;
/* 1803f8c17: js 0x1803f8c2e */
L_1803f8c17_0:;
L_1803f8c17_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803f8c2e);}
L_1803f8c17_2:;
return UINT64_C(0x1803f8c19);
}
uint64_t b_1803f8c0d(CPU*s){
/* 1803f8c0d: mov rcx, rbp */
L_1803f8c0d_0:;
L_1803f8c0d_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803f8c0d_2:;
/* 1803f8c10: mov qword ptr [rsp + 0x20], rcx */
L_1803f8c10_0:;
L_1803f8c10_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803f8c10_2:;
wr(s->u,8,8,rd(s->r,8,8));
L_1803f8c10_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f8c10_4:;
/* 1803f8c15: test ebx, ebx */
L_1803f8c15_0:;
L_1803f8c15_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8c15_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8c15_3:;
wr(s->u,22,4,(rd(s->r,24,4)&rd(s->r,24,4)));
L_1803f8c15_4:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8c15_5:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803f8c15_6:;
wr(s->u,16,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803f8c15_7:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803f8c15_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803f8c15_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803f8c15_10:;
/* 1803f8c17: js 0x1803f8c2e */
L_1803f8c17_0:;
L_1803f8c17_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803f8c2e);}
L_1803f8c17_2:;
return UINT64_C(0x1803f8c19);
}
uint64_t b_1803f8c19(CPU*s){
/* 1803f8c19: lea rcx, [rax + 0x18] */
L_1803f8c19_0:;
L_1803f8c19_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x18))));
L_1803f8c19_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803f8c19_3:;
/* 1803f8c1d: lea rdx, [rsp + 0x20] */
L_1803f8c1d_0:;
L_1803f8c1d_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803f8c1d_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803f8c1d_3:;
/* 1803f8c22: call 0x18059f120 */
L_1803f8c22_0:;
L_1803f8c22_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f8c22_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f8c27)));
L_1803f8c22_3:;
return (uint64_t)UINT64_C(0x18059f120);
L_1803f8c22_4:;
return UINT64_C(0x1803f8c27);
}
uint64_t b_1803f8c27(CPU*s){
/* 1803f8c27: mov rcx, qword ptr [rsp + 0x20] */
L_1803f8c27_0:;
L_1803f8c27_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803f8c27_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8c27_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803f8c27_4:;
/* 1803f8c2c: mov ebx, eax */
L_1803f8c2c_0:;
L_1803f8c2c_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803f8c2c_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803f8c2c_3:;
/* 1803f8c2e: mov qword ptr [rsp + 0x68], rbp */
L_1803f8c2e_0:;
L_1803f8c2e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803f8c2e_2:;
wr(s->u,8,8,rd(s->r,40,8));
L_1803f8c2e_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f8c2e_4:;
/* 1803f8c33: test ebx, ebx */
L_1803f8c33_0:;
L_1803f8c33_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8c33_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8c33_3:;
wr(s->u,30,4,(rd(s->r,24,4)&rd(s->r,24,4)));
L_1803f8c33_4:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8c33_5:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803f8c33_6:;
wr(s->u,24,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803f8c33_7:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803f8c33_8:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803f8c33_9:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803f8c33_10:;
/* 1803f8c35: js 0x1803f8cbd */
L_1803f8c35_0:;
L_1803f8c35_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803f8cbd);}
L_1803f8c35_2:;
return UINT64_C(0x1803f8c3b);
}
uint64_t b_1803f8c2e(CPU*s){
/* 1803f8c2e: mov qword ptr [rsp + 0x68], rbp */
L_1803f8c2e_0:;
L_1803f8c2e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803f8c2e_2:;
wr(s->u,8,8,rd(s->r,40,8));
L_1803f8c2e_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f8c2e_4:;
/* 1803f8c33: test ebx, ebx */
L_1803f8c33_0:;
L_1803f8c33_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8c33_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8c33_3:;
wr(s->u,22,4,(rd(s->r,24,4)&rd(s->r,24,4)));
L_1803f8c33_4:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8c33_5:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803f8c33_6:;
wr(s->u,16,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803f8c33_7:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803f8c33_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803f8c33_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803f8c33_10:;
/* 1803f8c35: js 0x1803f8cbd */
L_1803f8c35_0:;
L_1803f8c35_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803f8cbd);}
L_1803f8c35_2:;
return UINT64_C(0x1803f8c3b);
}
uint64_t b_1803f8c3b(CPU*s){
/* 1803f8c3b: mov rax, qword ptr [rcx] */
L_1803f8c3b_0:;
L_1803f8c3b_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803f8c3b_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803f8c3b_3:;
/* 1803f8c3e: lea rdx, [rsp + 0x68] */
L_1803f8c3e_0:;
L_1803f8c3e_1:;
wr(s->u,8,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803f8c3e_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803f8c3e_3:;
/* 1803f8c43: call qword ptr [rax + 0x28] */
L_1803f8c43_0:;
L_1803f8c43_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x28))));
L_1803f8c43_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8c43_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803f8c43_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f8c43_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f8c46)));
L_1803f8c43_6:;
return (uint64_t)rd(s->u,24,8);
L_1803f8c43_7:;
return UINT64_C(0x1803f8c46);
}
uint64_t b_1803f8c46(CPU*s){
/* 1803f8c46: mov ebx, eax */
L_1803f8c46_0:;
L_1803f8c46_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803f8c46_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803f8c46_3:;
/* 1803f8c48: test eax, eax */
L_1803f8c48_0:;
L_1803f8c48_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8c48_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8c48_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803f8c48_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8c48_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803f8c48_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803f8c48_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803f8c48_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803f8c48_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803f8c48_10:;
/* 1803f8c4a: js 0x1803f8ca3 */
L_1803f8c4a_0:;
L_1803f8c4a_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803f8ca3);}
L_1803f8c4a_2:;
return UINT64_C(0x1803f8c4c);
}
uint64_t b_1803f8c4c(CPU*s){
/* 1803f8c4c: mov rcx, qword ptr [rsp + 0x68] */
L_1803f8c4c_0:;
L_1803f8c4c_1:;
wr(s->u,16,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803f8c4c_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803f8c4c_3:;
wr(s->r,8,8,rd(s->u,28,8));
L_1803f8c4c_4:;
/* 1803f8c51: mov dword ptr [rsp + 0x58], ebp */
L_1803f8c51_0:;
L_1803f8c51_1:;
wr(s->u,16,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803f8c51_2:;
wr(s->u,24,4,rd(s->r,40,4));
L_1803f8c51_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803f8c51_4:;
/* 1803f8c55: lea r8, [rdi + 2] */
L_1803f8c55_0:;
L_1803f8c55_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x2))));
L_1803f8c55_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1803f8c55_3:;
/* 1803f8c59: mov rax, qword ptr [rcx] */
L_1803f8c59_0:;
L_1803f8c59_1:;
wr(s->u,28,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803f8c59_2:;
wr(s->r,0,8,rd(s->u,28,8));
L_1803f8c59_3:;
/* 1803f8c5c: lea edx, [rsi - 1] */
L_1803f8c5c_0:;
L_1803f8c5c_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803f8c5c_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803f8c5c_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f8c5c_4:;
/* 1803f8c5f: lea r9, [rsp + 0x58] */
L_1803f8c5f_0:;
L_1803f8c5f_1:;
wr(s->u,16,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803f8c5f_2:;
wr(s->r,136,8,rd(s->u,16,8));
L_1803f8c5f_3:;
/* 1803f8c64: call qword ptr [rax + 0x88] */
L_1803f8c64_0:;
L_1803f8c64_1:;
wr(s->u,8,8,(rd(s->r,0,8)+((U)UINT64_C(0x88))));
L_1803f8c64_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803f8c64_3:;
wr(s->u,36,8,rd(s->u,28,8));
L_1803f8c64_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f8c64_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f8c6a)));
L_1803f8c64_6:;
return (uint64_t)rd(s->u,36,8);
L_1803f8c64_7:;
return UINT64_C(0x1803f8c6a);
}
uint64_t b_1803f8c6a(CPU*s){
/* 1803f8c6a: mov ebx, eax */
L_1803f8c6a_0:;
L_1803f8c6a_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803f8c6a_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803f8c6a_3:;
/* 1803f8c6c: test eax, eax */
L_1803f8c6c_0:;
L_1803f8c6c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8c6c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8c6c_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803f8c6c_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8c6c_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803f8c6c_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803f8c6c_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803f8c6c_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803f8c6c_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803f8c6c_10:;
/* 1803f8c6e: js 0x1803f8ca3 */
L_1803f8c6e_0:;
L_1803f8c6e_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803f8ca3);}
L_1803f8c6e_2:;
return UINT64_C(0x1803f8c70);
}
uint64_t b_1803f8c70(CPU*s){
/* 1803f8c70: mov eax, 0x2a */
L_1803f8c70_0:;
L_1803f8c70_1:;
wr(s->r,0,8,((U)UINT64_C(0x2a)));
L_1803f8c70_2:;
/* 1803f8c75: mov edx, ebp */
L_1803f8c75_0:;
L_1803f8c75_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803f8c75_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f8c75_3:;
/* 1803f8c77: mov rcx, rbp */
L_1803f8c77_0:;
L_1803f8c77_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803f8c77_2:;
/* 1803f8c7a: mov word ptr [rdi], ax */
L_1803f8c7a_0:;
L_1803f8c7a_1:;
wr(s->u,0,2,rd(s->r,0,2));
L_1803f8c7a_2:;
mw((uint64_t)rd(s->r,56,8),2,rd(s->u,0,2));
L_1803f8c7a_3:;
/* 1803f8c7d: test ax, ax */
L_1803f8c7d_0:;
L_1803f8c7d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8c7d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8c7d_3:;
wr(s->u,6,2,(rd(s->r,0,2)&rd(s->r,0,2)));
L_1803f8c7d_4:;
wr(s->r,519,1,(sx(rd(s->u,6,2),2)<sx(((U)UINT64_C(0x0)),2)));
L_1803f8c7d_5:;
wr(s->r,518,1,(rd(s->u,6,2)==((U)UINT64_C(0x0))));
L_1803f8c7d_6:;
wr(s->u,2,2,(rd(s->u,6,2)&((U)UINT64_C(0xff))));
L_1803f8c7d_7:;
wr(s->u,4,1,pop(rd(s->u,2,2),2));
L_1803f8c7d_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803f8c7d_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803f8c7d_10:;
/* 1803f8c80: je 0x1803f8ca3 */
L_1803f8c80_0:;
L_1803f8c80_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f8ca3);}
L_1803f8c80_2:;
return UINT64_C(0x1803f8c82);
}
uint64_t b_1803f8c82(CPU*s){
/* 1803f8c82: mov rax, rdi */
L_1803f8c82_0:;
L_1803f8c82_1:;
wr(s->r,0,8,rd(s->r,56,8));
L_1803f8c82_2:;
/* 1803f8c85: cmp word ptr [rax], 0x2c */
L_1803f8c85_0:;
L_1803f8c85_1:;
wr(s->u,0,2,mr((uint64_t)rd(s->r,0,8),2));
L_1803f8c85_2:;
wr(s->u,6,2,rd(s->u,0,2));
L_1803f8c85_3:;
wr(s->r,512,1,(rd(s->u,6,2)<((U)UINT64_C(0x2c))));
L_1803f8c85_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,2),((U)UINT64_C(0x2c)),2,1));
L_1803f8c85_5:;
wr(s->u,8,2,(rd(s->u,6,2)-((U)UINT64_C(0x2c))));
L_1803f8c85_6:;
wr(s->r,519,1,(sx(rd(s->u,8,2),2)<sx(((U)UINT64_C(0x0)),2)));
L_1803f8c85_7:;
wr(s->r,518,1,(rd(s->u,8,2)==((U)UINT64_C(0x0))));
L_1803f8c85_8:;
wr(s->u,2,2,(rd(s->u,8,2)&((U)UINT64_C(0xff))));
L_1803f8c85_9:;
wr(s->u,4,1,pop(rd(s->u,2,2),2));
L_1803f8c85_10:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803f8c85_11:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803f8c85_12:;
/* 1803f8c89: je 0x1803f8c9c */
L_1803f8c89_0:;
L_1803f8c89_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f8c9c);}
L_1803f8c89_2:;
return UINT64_C(0x1803f8c8b);
}
uint64_t b_1803f8c85(CPU*s){
/* 1803f8c85: cmp word ptr [rax], 0x2c */
L_1803f8c85_0:;
L_1803f8c85_1:;
wr(s->u,0,2,mr((uint64_t)rd(s->r,0,8),2));
L_1803f8c85_2:;
wr(s->u,6,2,rd(s->u,0,2));
L_1803f8c85_3:;
wr(s->r,512,1,(rd(s->u,6,2)<((U)UINT64_C(0x2c))));
L_1803f8c85_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,2),((U)UINT64_C(0x2c)),2,1));
L_1803f8c85_5:;
wr(s->u,8,2,(rd(s->u,6,2)-((U)UINT64_C(0x2c))));
L_1803f8c85_6:;
wr(s->r,519,1,(sx(rd(s->u,8,2),2)<sx(((U)UINT64_C(0x0)),2)));
L_1803f8c85_7:;
wr(s->r,518,1,(rd(s->u,8,2)==((U)UINT64_C(0x0))));
L_1803f8c85_8:;
wr(s->u,2,2,(rd(s->u,8,2)&((U)UINT64_C(0xff))));
L_1803f8c85_9:;
wr(s->u,4,1,pop(rd(s->u,2,2),2));
L_1803f8c85_10:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803f8c85_11:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803f8c85_12:;
/* 1803f8c89: je 0x1803f8c9c */
L_1803f8c89_0:;
L_1803f8c89_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f8c9c);}
L_1803f8c89_2:;
return UINT64_C(0x1803f8c8b);
}
uint64_t b_1803f8c8b(CPU*s){
/* 1803f8c8b: inc rcx */
L_1803f8c8b_0:;
L_1803f8c8b_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x1)),8,0));
L_1803f8c8b_2:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1))));
L_1803f8c8b_3:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8c8b_4:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803f8c8b_5:;
wr(s->u,19,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803f8c8b_6:;
wr(s->u,27,1,pop(rd(s->u,19,8),8));
L_1803f8c8b_7:;
wr(s->u,28,1,(rd(s->u,27,1)&((U)UINT64_C(0x1))));
L_1803f8c8b_8:;
wr(s->r,514,1,(rd(s->u,28,1)==((U)UINT64_C(0x0))));
L_1803f8c8b_9:;
/* 1803f8c8e: inc edx */
L_1803f8c8e_0:;
L_1803f8c8e_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803f8c8e_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803f8c8e_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f8c8e_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8c8e_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803f8c8e_6:;
wr(s->u,19,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803f8c8e_7:;
wr(s->u,27,1,pop(rd(s->u,19,4),4));
L_1803f8c8e_8:;
wr(s->u,28,1,(rd(s->u,27,1)&((U)UINT64_C(0x1))));
L_1803f8c8e_9:;
wr(s->r,514,1,(rd(s->u,28,1)==((U)UINT64_C(0x0))));
L_1803f8c8e_10:;
/* 1803f8c90: cmp word ptr [rdi + rcx*2], bp */
L_1803f8c90_0:;
L_1803f8c90_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x2))));
L_1803f8c90_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803f8c90_3:;
wr(s->u,16,2,mr((uint64_t)rd(s->u,8,8),2));
L_1803f8c90_4:;
wr(s->u,29,2,rd(s->u,16,2));
L_1803f8c90_5:;
wr(s->r,512,1,(rd(s->u,29,2)<rd(s->r,40,2)));
L_1803f8c90_6:;
wr(s->r,523,1,signed_overflow(rd(s->u,29,2),rd(s->r,40,2),2,1));
L_1803f8c90_7:;
wr(s->u,31,2,(rd(s->u,29,2)-rd(s->r,40,2)));
L_1803f8c90_8:;
wr(s->r,519,1,(sx(rd(s->u,31,2),2)<sx(((U)UINT64_C(0x0)),2)));
L_1803f8c90_9:;
wr(s->r,518,1,(rd(s->u,31,2)==((U)UINT64_C(0x0))));
L_1803f8c90_10:;
wr(s->u,19,2,(rd(s->u,31,2)&((U)UINT64_C(0xff))));
L_1803f8c90_11:;
wr(s->u,27,1,pop(rd(s->u,19,2),2));
L_1803f8c90_12:;
wr(s->u,28,1,(rd(s->u,27,1)&((U)UINT64_C(0x1))));
L_1803f8c90_13:;
wr(s->r,514,1,(rd(s->u,28,1)==((U)UINT64_C(0x0))));
L_1803f8c90_14:;
/* 1803f8c94: lea rax, [rdi + rcx*2] */
L_1803f8c94_0:;
L_1803f8c94_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x2))));
L_1803f8c94_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803f8c94_3:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803f8c94_4:;
/* 1803f8c98: jne 0x1803f8c85 */
L_1803f8c98_0:;
L_1803f8c98_1:;
wr(s->u,18,1,(!rd(s->r,518,1)));
L_1803f8c98_2:;
if(rd(s->u,18,1)){return UINT64_C(0x1803f8c85);}
L_1803f8c98_3:;
return UINT64_C(0x1803f8c9a);
}
uint64_t b_1803f8c9a(CPU*s){
/* 1803f8c9a: jmp 0x1803f8ca3 */
L_1803f8c9a_0:;
L_1803f8c9a_1:;
return UINT64_C(0x1803f8ca3);
L_1803f8c9a_2:;
return UINT64_C(0x1803f8c9c);
}
uint64_t b_1803f8c9c(CPU*s){
/* 1803f8c9c: movsxd rax, edx */
L_1803f8c9c_0:;
L_1803f8c9c_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803f8c9c_2:;
/* 1803f8c9f: mov word ptr [rdi + rax*2], bp */
L_1803f8c9f_0:;
L_1803f8c9f_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x2))));
L_1803f8c9f_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803f8c9f_3:;
wr(s->u,24,2,rd(s->r,40,2));
L_1803f8c9f_4:;
mw((uint64_t)rd(s->u,8,8),2,rd(s->u,24,2));
L_1803f8c9f_5:;
/* 1803f8ca3: mov rcx, qword ptr [rsp + 0x68] */
L_1803f8ca3_0:;
L_1803f8ca3_1:;
wr(s->u,16,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803f8ca3_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803f8ca3_3:;
wr(s->r,8,8,rd(s->u,26,8));
L_1803f8ca3_4:;
/* 1803f8ca8: test rcx, rcx */
L_1803f8ca8_0:;
L_1803f8ca8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8ca8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8ca8_3:;
wr(s->u,44,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803f8ca8_4:;
wr(s->r,519,1,(sx(rd(s->u,44,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8ca8_5:;
wr(s->r,518,1,(rd(s->u,44,8)==((U)UINT64_C(0x0))));
L_1803f8ca8_6:;
wr(s->u,34,8,(rd(s->u,44,8)&((U)UINT64_C(0xff))));
L_1803f8ca8_7:;
wr(s->u,42,1,pop(rd(s->u,34,8),8));
L_1803f8ca8_8:;
wr(s->u,43,1,(rd(s->u,42,1)&((U)UINT64_C(0x1))));
L_1803f8ca8_9:;
wr(s->r,514,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803f8ca8_10:;
/* 1803f8cab: je 0x1803f8cb8 */
L_1803f8cab_0:;
L_1803f8cab_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f8cb8);}
L_1803f8cab_2:;
return UINT64_C(0x1803f8cad);
}
uint64_t b_1803f8ca3(CPU*s){
/* 1803f8ca3: mov rcx, qword ptr [rsp + 0x68] */
L_1803f8ca3_0:;
L_1803f8ca3_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803f8ca3_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8ca3_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803f8ca3_4:;
/* 1803f8ca8: test rcx, rcx */
L_1803f8ca8_0:;
L_1803f8ca8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8ca8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8ca8_3:;
wr(s->u,26,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803f8ca8_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8ca8_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803f8ca8_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803f8ca8_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f8ca8_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f8ca8_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f8ca8_10:;
/* 1803f8cab: je 0x1803f8cb8 */
L_1803f8cab_0:;
L_1803f8cab_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f8cb8);}
L_1803f8cab_2:;
return UINT64_C(0x1803f8cad);
}
uint64_t b_1803f8cad(CPU*s){
/* 1803f8cad: mov rax, qword ptr [rcx] */
L_1803f8cad_0:;
L_1803f8cad_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803f8cad_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803f8cad_3:;
/* 1803f8cb0: call qword ptr [rax + 0x10] */
L_1803f8cb0_0:;
L_1803f8cb0_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803f8cb0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8cb0_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803f8cb0_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f8cb0_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f8cb3)));
L_1803f8cb0_6:;
return (uint64_t)rd(s->u,16,8);
L_1803f8cb0_7:;
return UINT64_C(0x1803f8cb3);
}
uint64_t b_1803f8cb3(CPU*s){
/* 1803f8cb3: mov qword ptr [rsp + 0x68], rbp */
L_1803f8cb3_0:;
L_1803f8cb3_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803f8cb3_2:;
wr(s->u,8,8,rd(s->r,40,8));
L_1803f8cb3_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f8cb3_4:;
/* 1803f8cb8: mov rcx, qword ptr [rsp + 0x20] */
L_1803f8cb8_0:;
L_1803f8cb8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803f8cb8_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8cb8_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803f8cb8_4:;
/* 1803f8cbd: test rcx, rcx */
L_1803f8cbd_0:;
L_1803f8cbd_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8cbd_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8cbd_3:;
wr(s->u,34,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803f8cbd_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8cbd_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803f8cbd_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803f8cbd_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803f8cbd_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803f8cbd_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803f8cbd_10:;
/* 1803f8cc0: je 0x1803f8cc8 */
L_1803f8cc0_0:;
L_1803f8cc0_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f8cc8);}
L_1803f8cc0_2:;
return UINT64_C(0x1803f8cc2);
}
uint64_t b_1803f8cb8(CPU*s){
/* 1803f8cb8: mov rcx, qword ptr [rsp + 0x20] */
L_1803f8cb8_0:;
L_1803f8cb8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803f8cb8_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8cb8_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803f8cb8_4:;
/* 1803f8cbd: test rcx, rcx */
L_1803f8cbd_0:;
L_1803f8cbd_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8cbd_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8cbd_3:;
wr(s->u,26,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803f8cbd_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8cbd_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803f8cbd_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803f8cbd_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f8cbd_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f8cbd_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f8cbd_10:;
/* 1803f8cc0: je 0x1803f8cc8 */
L_1803f8cc0_0:;
L_1803f8cc0_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f8cc8);}
L_1803f8cc0_2:;
return UINT64_C(0x1803f8cc2);
}
uint64_t b_1803f8cbd(CPU*s){
/* 1803f8cbd: test rcx, rcx */
L_1803f8cbd_0:;
L_1803f8cbd_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8cbd_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8cbd_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803f8cbd_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8cbd_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803f8cbd_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803f8cbd_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803f8cbd_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803f8cbd_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803f8cbd_10:;
/* 1803f8cc0: je 0x1803f8cc8 */
L_1803f8cc0_0:;
L_1803f8cc0_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f8cc8);}
L_1803f8cc0_2:;
return UINT64_C(0x1803f8cc2);
}
uint64_t b_1803f8cc2(CPU*s){
/* 1803f8cc2: mov rax, qword ptr [rcx] */
L_1803f8cc2_0:;
L_1803f8cc2_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803f8cc2_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803f8cc2_3:;
/* 1803f8cc5: call qword ptr [rax + 0x10] */
L_1803f8cc5_0:;
L_1803f8cc5_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803f8cc5_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8cc5_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803f8cc5_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f8cc5_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f8cc8)));
L_1803f8cc5_6:;
return (uint64_t)rd(s->u,16,8);
L_1803f8cc5_7:;
return UINT64_C(0x1803f8cc8);
}
uint64_t b_1803f8cc8(CPU*s){
/* 1803f8cc8: mov eax, ebx */
L_1803f8cc8_0:;
L_1803f8cc8_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803f8cc8_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f8cc8_3:;
/* 1803f8cca: mov rbx, qword ptr [rsp + 0x50] */
L_1803f8cca_0:;
L_1803f8cca_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803f8cca_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8cca_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803f8cca_4:;
/* 1803f8ccf: add rsp, 0x30 */
L_1803f8ccf_0:;
L_1803f8ccf_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f8ccf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803f8ccf_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803f8ccf_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8ccf_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f8ccf_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f8ccf_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f8ccf_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f8ccf_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f8ccf_10:;
/* 1803f8cd3: pop rdi */
L_1803f8cd3_0:;
L_1803f8cd3_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803f8cd3_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f8cd3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f8cd3_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803f8cd3_5:;
/* 1803f8cd4: pop rsi */
L_1803f8cd4_0:;
L_1803f8cd4_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803f8cd4_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f8cd4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f8cd4_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1803f8cd4_5:;
/* 1803f8cd5: pop rbp */
L_1803f8cd5_0:;
L_1803f8cd5_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803f8cd5_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f8cd5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f8cd5_4:;
wr(s->r,40,8,rd(s->u,26,8));
L_1803f8cd5_5:;
/* 1803f8cd6: ret  */
L_1803f8cd6_0:;
L_1803f8cd6_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f8cd6_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f8cd6_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f8cd6_4:;
return UINT64_C(0x1803f8cd7);
}
uint64_t b_1803f8ce0(CPU*s){
/* 1803f8ce0: mov qword ptr [rsp + 0x10], rbp */
L_1803f8ce0_0:;
L_1803f8ce0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803f8ce0_2:;
wr(s->u,8,8,rd(s->r,40,8));
L_1803f8ce0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f8ce0_4:;
/* 1803f8ce5: mov qword ptr [rsp + 0x18], rsi */
L_1803f8ce5_0:;
L_1803f8ce5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803f8ce5_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803f8ce5_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f8ce5_4:;
/* 1803f8cea: push rdi */
L_1803f8cea_0:;
L_1803f8cea_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803f8cea_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f8cea_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803f8cea_4:;
/* 1803f8ceb: sub rsp, 0x20 */
L_1803f8ceb_0:;
L_1803f8ceb_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803f8ceb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803f8ceb_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803f8ceb_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8ceb_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f8ceb_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f8ceb_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803f8ceb_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803f8ceb_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803f8ceb_10:;
/* 1803f8cef: movsxd rdi, r8d */
L_1803f8cef_0:;
L_1803f8cef_1:;
wr(s->r,56,8,(U)sx(rd(s->r,128,4),4));
L_1803f8cef_2:;
/* 1803f8cf2: mov rbp, rdx */
L_1803f8cf2_0:;
L_1803f8cf2_1:;
wr(s->r,40,8,rd(s->r,16,8));
L_1803f8cf2_2:;
/* 1803f8cf5: mov rsi, rcx */
L_1803f8cf5_0:;
L_1803f8cf5_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1803f8cf5_2:;
/* 1803f8cf8: test rdx, rdx */
L_1803f8cf8_0:;
L_1803f8cf8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8cf8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8cf8_3:;
wr(s->u,34,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803f8cf8_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8cf8_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803f8cf8_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803f8cf8_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803f8cf8_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803f8cf8_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803f8cf8_10:;
/* 1803f8cfb: je 0x1803f8d99 */
L_1803f8cfb_0:;
L_1803f8cfb_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f8d99);}
L_1803f8cfb_2:;
return UINT64_C(0x1803f8d01);
}
uint64_t b_1803f8d01(CPU*s){
/* 1803f8d01: test rcx, rcx */
L_1803f8d01_0:;
L_1803f8d01_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8d01_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8d01_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803f8d01_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8d01_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803f8d01_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803f8d01_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803f8d01_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803f8d01_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803f8d01_10:;
/* 1803f8d04: je 0x1803f8d99 */
L_1803f8d04_0:;
L_1803f8d04_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f8d99);}
L_1803f8d04_2:;
return UINT64_C(0x1803f8d0a);
}
uint64_t b_1803f8d0a(CPU*s){
/* 1803f8d0a: mov qword ptr [rsp + 0x30], rbx */
L_1803f8d0a_0:;
L_1803f8d0a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803f8d0a_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803f8d0a_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f8d0a_4:;
/* 1803f8d0f: xor ebx, ebx */
L_1803f8d0f_0:;
L_1803f8d0f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8d0f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8d0f_3:;
wr(s->r,24,4,(rd(s->r,24,4)^rd(s->r,24,4)));
L_1803f8d0f_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803f8d0f_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8d0f_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803f8d0f_7:;
wr(s->u,16,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803f8d0f_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803f8d0f_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803f8d0f_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803f8d0f_11:;
/* 1803f8d11: test r8d, r8d */
L_1803f8d11_0:;
L_1803f8d11_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8d11_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8d11_3:;
wr(s->u,22,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803f8d11_4:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8d11_5:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803f8d11_6:;
wr(s->u,16,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803f8d11_7:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803f8d11_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803f8d11_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803f8d11_10:;
/* 1803f8d14: js 0x1803f8d32 */
L_1803f8d14_0:;
L_1803f8d14_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803f8d32);}
L_1803f8d14_2:;
return UINT64_C(0x1803f8d16);
}
uint64_t b_1803f8d16(CPU*s){
/* 1803f8d16: test r8d, r8d */
L_1803f8d16_0:;
L_1803f8d16_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8d16_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8d16_3:;
wr(s->u,8,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803f8d16_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8d16_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803f8d16_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803f8d16_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803f8d16_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803f8d16_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803f8d16_10:;
/* 1803f8d19: jle 0x1803f8d32 */
L_1803f8d19_0:;
L_1803f8d19_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803f8d19_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803f8d19_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803f8d32);}
L_1803f8d19_4:;
return UINT64_C(0x1803f8d1b);
}
uint64_t b_1803f8d1b(CPU*s){
/* 1803f8d1b: lea r8, [rip + 0x41551e] */
L_1803f8d1b_0:;
L_1803f8d1b_1:;
wr(s->r,128,8,((U)UINT64_C(0x18080e240)));
L_1803f8d1b_2:;
/* 1803f8d22: mov rdx, rdi */
L_1803f8d22_0:;
L_1803f8d22_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803f8d22_2:;
/* 1803f8d25: or r9, 0xffffffffffffffff */
L_1803f8d25_0:;
L_1803f8d25_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8d25_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8d25_3:;
wr(s->r,136,8,(rd(s->r,136,8)|((U)UINT64_C(0xffffffffffffffff))));
L_1803f8d25_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8d25_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803f8d25_6:;
wr(s->u,0,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803f8d25_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803f8d25_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803f8d25_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803f8d25_10:;
/* 1803f8d29: mov rcx, rbp */
L_1803f8d29_0:;
L_1803f8d29_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803f8d29_2:;
/* 1803f8d2c: call qword ptr [rip + 0x2501a6] */
L_1803f8d2c_0:;
L_1803f8d2c_1:;
wr(s->u,10,8,mr(UINT64_C(0x180648ed8),8));
L_1803f8d2c_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f8d2c_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f8d32)));
L_1803f8d2c_4:;
return (uint64_t)rd(s->u,10,8);
L_1803f8d2c_5:;
return UINT64_C(0x1803f8d32);
}
uint64_t b_1803f8d32(CPU*s){
/* 1803f8d32: mov eax, dword ptr [rsi + 0x180] */
L_1803f8d32_0:;
L_1803f8d32_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x180))));
L_1803f8d32_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803f8d32_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803f8d32_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f8d32_5:;
/* 1803f8d38: cmp eax, 0x73636178 */
L_1803f8d38_0:;
L_1803f8d38_1:;
wr(s->r,512,1,(rd(s->r,0,4)<((U)UINT64_C(0x73636178))));
L_1803f8d38_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x73636178)),4,1));
L_1803f8d38_3:;
wr(s->u,19,4,(rd(s->r,0,4)-((U)UINT64_C(0x73636178))));
L_1803f8d38_4:;
wr(s->r,519,1,(sx(rd(s->u,19,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8d38_5:;
wr(s->r,518,1,(rd(s->u,19,4)==((U)UINT64_C(0x0))));
L_1803f8d38_6:;
wr(s->u,13,4,(rd(s->u,19,4)&((U)UINT64_C(0xff))));
L_1803f8d38_7:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803f8d38_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803f8d38_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803f8d38_10:;
/* 1803f8d3d: jne 0x1803f8d75 */
L_1803f8d3d_0:;
L_1803f8d3d_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803f8d3d_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803f8d75);}
L_1803f8d3d_3:;
return UINT64_C(0x1803f8d3f);
}
uint64_t b_1803f8d3f(CPU*s){
/* 1803f8d3f: test edi, edi */
L_1803f8d3f_0:;
L_1803f8d3f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8d3f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8d3f_3:;
wr(s->u,6,4,(rd(s->r,56,4)&rd(s->r,56,4)));
L_1803f8d3f_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8d3f_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803f8d3f_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803f8d3f_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803f8d3f_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803f8d3f_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803f8d3f_10:;
/* 1803f8d41: js 0x1803f8d82 */
L_1803f8d41_0:;
L_1803f8d41_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803f8d82);}
L_1803f8d41_2:;
return UINT64_C(0x1803f8d43);
}
uint64_t b_1803f8d43(CPU*s){
/* 1803f8d43: test edi, edi */
L_1803f8d43_0:;
L_1803f8d43_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8d43_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8d43_3:;
wr(s->u,8,4,(rd(s->r,56,4)&rd(s->r,56,4)));
L_1803f8d43_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8d43_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803f8d43_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803f8d43_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803f8d43_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803f8d43_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803f8d43_10:;
/* 1803f8d45: jle 0x1803f8d82 */
L_1803f8d45_0:;
L_1803f8d45_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803f8d45_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803f8d45_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803f8d82);}
L_1803f8d45_4:;
return UINT64_C(0x1803f8d47);
}
uint64_t b_1803f8d47(CPU*s){
/* 1803f8d47: lea r8, [rip + 0x4154e2] */
L_1803f8d47_0:;
L_1803f8d47_1:;
wr(s->r,128,8,((U)UINT64_C(0x18080e230)));
L_1803f8d47_2:;
/* 1803f8d4e: mov rdx, rdi */
L_1803f8d4e_0:;
L_1803f8d4e_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803f8d4e_2:;
/* 1803f8d51: or r9, 0xffffffffffffffff */
L_1803f8d51_0:;
L_1803f8d51_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8d51_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8d51_3:;
wr(s->r,136,8,(rd(s->r,136,8)|((U)UINT64_C(0xffffffffffffffff))));
L_1803f8d51_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8d51_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803f8d51_6:;
wr(s->u,0,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803f8d51_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803f8d51_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803f8d51_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803f8d51_10:;
/* 1803f8d55: mov rcx, rbp */
L_1803f8d55_0:;
L_1803f8d55_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803f8d55_2:;
/* 1803f8d58: call qword ptr [rip + 0x25017a] */
L_1803f8d58_0:;
L_1803f8d58_1:;
wr(s->u,10,8,mr(UINT64_C(0x180648ed8),8));
L_1803f8d58_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f8d58_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f8d5e)));
L_1803f8d58_4:;
return (uint64_t)rd(s->u,10,8);
L_1803f8d58_5:;
return UINT64_C(0x1803f8d5e);
}
uint64_t b_1803f8d5e(CPU*s){
/* 1803f8d5e: mov eax, ebx */
L_1803f8d5e_0:;
L_1803f8d5e_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803f8d5e_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f8d5e_3:;
/* 1803f8d60: mov rbx, qword ptr [rsp + 0x30] */
L_1803f8d60_0:;
L_1803f8d60_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803f8d60_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8d60_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803f8d60_4:;
/* 1803f8d65: mov rbp, qword ptr [rsp + 0x38] */
L_1803f8d65_0:;
L_1803f8d65_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803f8d65_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8d65_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803f8d65_4:;
/* 1803f8d6a: mov rsi, qword ptr [rsp + 0x40] */
L_1803f8d6a_0:;
L_1803f8d6a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803f8d6a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8d6a_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803f8d6a_4:;
/* 1803f8d6f: add rsp, 0x20 */
L_1803f8d6f_0:;
L_1803f8d6f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f8d6f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803f8d6f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803f8d6f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8d6f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f8d6f_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f8d6f_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f8d6f_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f8d6f_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f8d6f_10:;
/* 1803f8d73: pop rdi */
L_1803f8d73_0:;
L_1803f8d73_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803f8d73_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f8d73_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f8d73_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803f8d73_5:;
/* 1803f8d74: ret  */
L_1803f8d74_0:;
L_1803f8d74_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f8d74_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f8d74_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f8d74_4:;
return UINT64_C(0x1803f8d75);
}
uint64_t b_1803f8d75(CPU*s){
/* 1803f8d75: mov ecx, 0x8004e0af */
L_1803f8d75_0:;
L_1803f8d75_1:;
wr(s->r,8,8,((U)UINT64_C(0x8004e0af)));
L_1803f8d75_2:;
/* 1803f8d7a: cmp eax, 0x63766178 */
L_1803f8d7a_0:;
L_1803f8d7a_1:;
wr(s->r,512,1,(rd(s->r,0,4)<((U)UINT64_C(0x63766178))));
L_1803f8d7a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x63766178)),4,1));
L_1803f8d7a_3:;
wr(s->u,32,4,(rd(s->r,0,4)-((U)UINT64_C(0x63766178))));
L_1803f8d7a_4:;
wr(s->r,519,1,(sx(rd(s->u,32,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8d7a_5:;
wr(s->r,518,1,(rd(s->u,32,4)==((U)UINT64_C(0x0))));
L_1803f8d7a_6:;
wr(s->u,17,4,(rd(s->u,32,4)&((U)UINT64_C(0xff))));
L_1803f8d7a_7:;
wr(s->u,25,1,pop(rd(s->u,17,4),4));
L_1803f8d7a_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803f8d7a_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803f8d7a_10:;
/* 1803f8d7f: cmovne ebx, ecx */
L_1803f8d7f_0:;
L_1803f8d7f_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1803f8d7f_2:;
wr(s->u,27,4,rd(s->r,8,4));
L_1803f8d7f_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803f8d7f_4:;
wr(s->u,31,1,(!rd(s->u,16,1)));
L_1803f8d7f_5:;
if(rd(s->u,31,1)){goto L_1803f8d82_0;}
L_1803f8d7f_6:;
wr(s->r,24,4,rd(s->u,27,4));
L_1803f8d7f_7:;
/* 1803f8d82: mov eax, ebx */
L_1803f8d82_0:;
L_1803f8d82_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803f8d82_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f8d82_3:;
/* 1803f8d84: mov rbx, qword ptr [rsp + 0x30] */
L_1803f8d84_0:;
L_1803f8d84_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803f8d84_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8d84_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803f8d84_4:;
/* 1803f8d89: mov rbp, qword ptr [rsp + 0x38] */
L_1803f8d89_0:;
L_1803f8d89_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803f8d89_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8d89_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803f8d89_4:;
/* 1803f8d8e: mov rsi, qword ptr [rsp + 0x40] */
L_1803f8d8e_0:;
L_1803f8d8e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803f8d8e_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8d8e_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803f8d8e_4:;
/* 1803f8d93: add rsp, 0x20 */
L_1803f8d93_0:;
L_1803f8d93_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f8d93_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803f8d93_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803f8d93_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8d93_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f8d93_6:;
wr(s->u,17,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f8d93_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803f8d93_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803f8d93_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803f8d93_10:;
/* 1803f8d97: pop rdi */
L_1803f8d97_0:;
L_1803f8d97_1:;
wr(s->u,36,8,((U)UINT64_C(0x0)));
L_1803f8d97_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f8d97_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f8d97_4:;
wr(s->r,56,8,rd(s->u,36,8));
L_1803f8d97_5:;
/* 1803f8d98: ret  */
L_1803f8d98_0:;
L_1803f8d98_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f8d98_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f8d98_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f8d98_4:;
return UINT64_C(0x1803f8d99);
}
uint64_t b_1803f8d82(CPU*s){
/* 1803f8d82: mov eax, ebx */
L_1803f8d82_0:;
L_1803f8d82_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803f8d82_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f8d82_3:;
/* 1803f8d84: mov rbx, qword ptr [rsp + 0x30] */
L_1803f8d84_0:;
L_1803f8d84_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803f8d84_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8d84_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803f8d84_4:;
/* 1803f8d89: mov rbp, qword ptr [rsp + 0x38] */
L_1803f8d89_0:;
L_1803f8d89_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803f8d89_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8d89_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803f8d89_4:;
/* 1803f8d8e: mov rsi, qword ptr [rsp + 0x40] */
L_1803f8d8e_0:;
L_1803f8d8e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803f8d8e_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8d8e_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803f8d8e_4:;
/* 1803f8d93: add rsp, 0x20 */
L_1803f8d93_0:;
L_1803f8d93_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f8d93_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803f8d93_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803f8d93_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8d93_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f8d93_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f8d93_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f8d93_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f8d93_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f8d93_10:;
/* 1803f8d97: pop rdi */
L_1803f8d97_0:;
L_1803f8d97_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803f8d97_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f8d97_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f8d97_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803f8d97_5:;
/* 1803f8d98: ret  */
L_1803f8d98_0:;
L_1803f8d98_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f8d98_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f8d98_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f8d98_4:;
return UINT64_C(0x1803f8d99);
}
uint64_t b_1803f8d99(CPU*s){
/* 1803f8d99: mov rbp, qword ptr [rsp + 0x38] */
L_1803f8d99_0:;
L_1803f8d99_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803f8d99_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8d99_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803f8d99_4:;
/* 1803f8d9e: mov rsi, qword ptr [rsp + 0x40] */
L_1803f8d9e_0:;
L_1803f8d9e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803f8d9e_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8d9e_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803f8d9e_4:;
/* 1803f8da3: mov eax, 0x80070057 */
L_1803f8da3_0:;
L_1803f8da3_1:;
wr(s->r,0,8,((U)UINT64_C(0x80070057)));
L_1803f8da3_2:;
/* 1803f8da8: add rsp, 0x20 */
L_1803f8da8_0:;
L_1803f8da8_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f8da8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803f8da8_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803f8da8_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8da8_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f8da8_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f8da8_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f8da8_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f8da8_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f8da8_10:;
/* 1803f8dac: pop rdi */
L_1803f8dac_0:;
L_1803f8dac_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803f8dac_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f8dac_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f8dac_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803f8dac_5:;
/* 1803f8dad: ret  */
L_1803f8dad_0:;
L_1803f8dad_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f8dad_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f8dad_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f8dad_4:;
return UINT64_C(0x1803f8dae);
}
uint64_t b_1803f8dd0(CPU*s){
/* 1803f8dd0: mov qword ptr [rsp + 8], rbx */
L_1803f8dd0_0:;
L_1803f8dd0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803f8dd0_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803f8dd0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f8dd0_4:;
/* 1803f8dd5: mov qword ptr [rsp + 0x10], rsi */
L_1803f8dd5_0:;
L_1803f8dd5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803f8dd5_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803f8dd5_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f8dd5_4:;
/* 1803f8dda: push rdi */
L_1803f8dda_0:;
L_1803f8dda_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803f8dda_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f8dda_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803f8dda_4:;
/* 1803f8ddb: sub rsp, 0x20 */
L_1803f8ddb_0:;
L_1803f8ddb_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803f8ddb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803f8ddb_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803f8ddb_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8ddb_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f8ddb_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f8ddb_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803f8ddb_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803f8ddb_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803f8ddb_10:;
/* 1803f8ddf: movsxd rdi, r8d */
L_1803f8ddf_0:;
L_1803f8ddf_1:;
wr(s->r,56,8,(U)sx(rd(s->r,128,4),4));
L_1803f8ddf_2:;
/* 1803f8de2: mov rsi, rdx */
L_1803f8de2_0:;
L_1803f8de2_1:;
wr(s->r,48,8,rd(s->r,16,8));
L_1803f8de2_2:;
/* 1803f8de5: mov rbx, rcx */
L_1803f8de5_0:;
L_1803f8de5_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803f8de5_2:;
/* 1803f8de8: test rdx, rdx */
L_1803f8de8_0:;
L_1803f8de8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8de8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8de8_3:;
wr(s->u,34,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803f8de8_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8de8_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803f8de8_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803f8de8_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803f8de8_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803f8de8_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803f8de8_10:;
/* 1803f8deb: je 0x1803f8e6c */
L_1803f8deb_0:;
L_1803f8deb_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f8e6c);}
L_1803f8deb_2:;
return UINT64_C(0x1803f8ded);
}
uint64_t b_1803f8ded(CPU*s){
/* 1803f8ded: test rcx, rcx */
L_1803f8ded_0:;
L_1803f8ded_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8ded_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8ded_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803f8ded_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8ded_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803f8ded_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803f8ded_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803f8ded_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803f8ded_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803f8ded_10:;
/* 1803f8df0: je 0x1803f8e6c */
L_1803f8df0_0:;
L_1803f8df0_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f8e6c);}
L_1803f8df0_2:;
return UINT64_C(0x1803f8df2);
}
uint64_t b_1803f8df2(CPU*s){
/* 1803f8df2: test r8d, r8d */
L_1803f8df2_0:;
L_1803f8df2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8df2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8df2_3:;
wr(s->u,6,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803f8df2_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8df2_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803f8df2_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803f8df2_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803f8df2_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803f8df2_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803f8df2_10:;
/* 1803f8df5: js 0x1803f8e10 */
L_1803f8df5_0:;
L_1803f8df5_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803f8e10);}
L_1803f8df5_2:;
return UINT64_C(0x1803f8df7);
}
uint64_t b_1803f8df7(CPU*s){
/* 1803f8df7: jle 0x1803f8e10 */
L_1803f8df7_0:;
L_1803f8df7_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803f8df7_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803f8df7_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803f8e10);}
L_1803f8df7_4:;
return UINT64_C(0x1803f8df9);
}
uint64_t b_1803f8df9(CPU*s){
/* 1803f8df9: lea r8, [rip + 0x414dc0] */
L_1803f8df9_0:;
L_1803f8df9_1:;
wr(s->r,128,8,((U)UINT64_C(0x18080dbc0)));
L_1803f8df9_2:;
/* 1803f8e00: mov rdx, rdi */
L_1803f8e00_0:;
L_1803f8e00_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803f8e00_2:;
/* 1803f8e03: or r9, 0xffffffffffffffff */
L_1803f8e03_0:;
L_1803f8e03_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8e03_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8e03_3:;
wr(s->r,136,8,(rd(s->r,136,8)|((U)UINT64_C(0xffffffffffffffff))));
L_1803f8e03_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8e03_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803f8e03_6:;
wr(s->u,0,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803f8e03_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803f8e03_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803f8e03_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803f8e03_10:;
/* 1803f8e07: mov rcx, rsi */
L_1803f8e07_0:;
L_1803f8e07_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1803f8e07_2:;
/* 1803f8e0a: call qword ptr [rip + 0x2500c8] */
L_1803f8e0a_0:;
L_1803f8e0a_1:;
wr(s->u,10,8,mr(UINT64_C(0x180648ed8),8));
L_1803f8e0a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f8e0a_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f8e10)));
L_1803f8e0a_4:;
return (uint64_t)rd(s->u,10,8);
L_1803f8e0a_5:;
return UINT64_C(0x1803f8e10);
}
uint64_t b_1803f8e10(CPU*s){
/* 1803f8e10: cmp dword ptr [rbx + 0x214], 0x260 */
L_1803f8e10_0:;
L_1803f8e10_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x214))));
L_1803f8e10_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803f8e10_3:;
wr(s->u,18,4,rd(s->u,8,4));
L_1803f8e10_4:;
wr(s->r,512,1,(rd(s->u,18,4)<((U)UINT64_C(0x260))));
L_1803f8e10_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),((U)UINT64_C(0x260)),4,1));
L_1803f8e10_6:;
wr(s->u,22,4,(rd(s->u,18,4)-((U)UINT64_C(0x260))));
L_1803f8e10_7:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8e10_8:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803f8e10_9:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803f8e10_10:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803f8e10_11:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803f8e10_12:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803f8e10_13:;
/* 1803f8e1a: jb 0x1803f8e57 */
L_1803f8e1a_0:;
L_1803f8e1a_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803f8e57);}
L_1803f8e1a_2:;
return UINT64_C(0x1803f8e1c);
}
uint64_t b_1803f8e1c(CPU*s){
/* 1803f8e1c: lea rax, [rbx + 0x218] */
L_1803f8e1c_0:;
L_1803f8e1c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x218))));
L_1803f8e1c_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803f8e1c_3:;
/* 1803f8e23: test rax, rax */
L_1803f8e23_0:;
L_1803f8e23_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8e23_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8e23_3:;
wr(s->u,18,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803f8e23_4:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8e23_5:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803f8e23_6:;
wr(s->u,8,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803f8e23_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803f8e23_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803f8e23_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803f8e23_10:;
/* 1803f8e26: je 0x1803f8e57 */
L_1803f8e26_0:;
L_1803f8e26_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f8e57);}
L_1803f8e26_2:;
return UINT64_C(0x1803f8e28);
}
uint64_t b_1803f8e28(CPU*s){
/* 1803f8e28: cmp dword ptr [rax], 0 */
L_1803f8e28_0:;
L_1803f8e28_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,0,8),4));
L_1803f8e28_2:;
wr(s->u,10,4,rd(s->u,0,4));
L_1803f8e28_3:;
wr(s->r,512,1,(rd(s->u,10,4)<((U)UINT64_C(0x0))));
L_1803f8e28_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,10,4),((U)UINT64_C(0x0)),4,1));
L_1803f8e28_5:;
wr(s->u,14,4,(rd(s->u,10,4)-((U)UINT64_C(0x0))));
L_1803f8e28_6:;
wr(s->r,519,1,(sx(rd(s->u,14,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8e28_7:;
wr(s->r,518,1,(rd(s->u,14,4)==((U)UINT64_C(0x0))));
L_1803f8e28_8:;
wr(s->u,4,4,(rd(s->u,14,4)&((U)UINT64_C(0xff))));
L_1803f8e28_9:;
wr(s->u,8,1,pop(rd(s->u,4,4),4));
L_1803f8e28_10:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803f8e28_11:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803f8e28_12:;
/* 1803f8e2b: je 0x1803f8e45 */
L_1803f8e2b_0:;
L_1803f8e2b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f8e45);}
L_1803f8e2b_2:;
return UINT64_C(0x1803f8e2d);
}
uint64_t b_1803f8e2d(CPU*s){
/* 1803f8e2d: cmp dword ptr [rax + 0x70], 1 */
L_1803f8e2d_0:;
L_1803f8e2d_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x70))));
L_1803f8e2d_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803f8e2d_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803f8e2d_4:;
wr(s->r,512,1,(rd(s->u,19,4)<((U)UINT64_C(0x1))));
L_1803f8e2d_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),((U)UINT64_C(0x1)),4,1));
L_1803f8e2d_6:;
wr(s->u,23,4,(rd(s->u,19,4)-((U)UINT64_C(0x1))));
L_1803f8e2d_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8e2d_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803f8e2d_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803f8e2d_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803f8e2d_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803f8e2d_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803f8e2d_13:;
/* 1803f8e31: jne 0x1803f8e45 */
L_1803f8e31_0:;
L_1803f8e31_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803f8e31_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803f8e45);}
L_1803f8e31_3:;
return UINT64_C(0x1803f8e33);
}
uint64_t b_1803f8e33(CPU*s){
/* 1803f8e33: lea rdx, [rip + 0x414d66] */
L_1803f8e33_0:;
L_1803f8e33_1:;
wr(s->r,16,8,((U)UINT64_C(0x18080dba0)));
L_1803f8e33_2:;
/* 1803f8e3a: mov r8d, edi */
L_1803f8e3a_0:;
L_1803f8e3a_1:;
wr(s->r,128,4,rd(s->r,56,4));
L_1803f8e3a_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803f8e3a_3:;
/* 1803f8e3d: mov rcx, rsi */
L_1803f8e3d_0:;
L_1803f8e3d_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1803f8e3d_2:;
/* 1803f8e40: call 0x180001f40 */
L_1803f8e40_0:;
L_1803f8e40_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f8e40_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f8e45)));
L_1803f8e40_3:;
return (uint64_t)UINT64_C(0x180001f40);
L_1803f8e40_4:;
return UINT64_C(0x1803f8e45);
}
uint64_t b_1803f8e45(CPU*s){
/* 1803f8e45: xor eax, eax */
L_1803f8e45_0:;
L_1803f8e45_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f8e45_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f8e45_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803f8e45_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f8e45_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f8e45_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803f8e45_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803f8e45_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803f8e45_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f8e45_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f8e45_11:;
/* 1803f8e47: mov rbx, qword ptr [rsp + 0x30] */
L_1803f8e47_0:;
L_1803f8e47_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803f8e47_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8e47_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803f8e47_4:;
/* 1803f8e4c: mov rsi, qword ptr [rsp + 0x38] */
L_1803f8e4c_0:;
L_1803f8e4c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803f8e4c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8e4c_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803f8e4c_4:;
/* 1803f8e51: add rsp, 0x20 */
L_1803f8e51_0:;
L_1803f8e51_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f8e51_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803f8e51_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803f8e51_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8e51_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f8e51_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f8e51_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f8e51_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f8e51_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f8e51_10:;
/* 1803f8e55: pop rdi */
L_1803f8e55_0:;
L_1803f8e55_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803f8e55_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f8e55_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f8e55_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803f8e55_5:;
/* 1803f8e56: ret  */
L_1803f8e56_0:;
L_1803f8e56_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f8e56_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f8e56_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f8e56_4:;
return UINT64_C(0x1803f8e57);
}
uint64_t b_1803f8e57(CPU*s){
/* 1803f8e57: mov eax, 0x8004e0af */
L_1803f8e57_0:;
L_1803f8e57_1:;
wr(s->r,0,8,((U)UINT64_C(0x8004e0af)));
L_1803f8e57_2:;
/* 1803f8e5c: mov rbx, qword ptr [rsp + 0x30] */
L_1803f8e5c_0:;
L_1803f8e5c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803f8e5c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8e5c_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803f8e5c_4:;
/* 1803f8e61: mov rsi, qword ptr [rsp + 0x38] */
L_1803f8e61_0:;
L_1803f8e61_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803f8e61_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8e61_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803f8e61_4:;
/* 1803f8e66: add rsp, 0x20 */
L_1803f8e66_0:;
L_1803f8e66_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f8e66_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803f8e66_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803f8e66_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8e66_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f8e66_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f8e66_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f8e66_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f8e66_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f8e66_10:;
/* 1803f8e6a: pop rdi */
L_1803f8e6a_0:;
L_1803f8e6a_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803f8e6a_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f8e6a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f8e6a_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803f8e6a_5:;
/* 1803f8e6b: ret  */
L_1803f8e6b_0:;
L_1803f8e6b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f8e6b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f8e6b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f8e6b_4:;
return UINT64_C(0x1803f8e6c);
}
uint64_t b_1803f8e6c(CPU*s){
/* 1803f8e6c: mov rbx, qword ptr [rsp + 0x30] */
L_1803f8e6c_0:;
L_1803f8e6c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803f8e6c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8e6c_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803f8e6c_4:;
/* 1803f8e71: mov rsi, qword ptr [rsp + 0x38] */
L_1803f8e71_0:;
L_1803f8e71_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803f8e71_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f8e71_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803f8e71_4:;
/* 1803f8e76: mov eax, 0x80070057 */
L_1803f8e76_0:;
L_1803f8e76_1:;
wr(s->r,0,8,((U)UINT64_C(0x80070057)));
L_1803f8e76_2:;
/* 1803f8e7b: add rsp, 0x20 */
L_1803f8e7b_0:;
L_1803f8e7b_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f8e7b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803f8e7b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803f8e7b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f8e7b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f8e7b_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f8e7b_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f8e7b_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f8e7b_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f8e7b_10:;
/* 1803f8e7f: pop rdi */
L_1803f8e7f_0:;
L_1803f8e7f_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803f8e7f_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f8e7f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f8e7f_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803f8e7f_5:;
/* 1803f8e80: ret  */
L_1803f8e80_0:;
L_1803f8e80_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f8e80_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f8e80_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f8e80_4:;
return UINT64_C(0x1803f8e81);
}
