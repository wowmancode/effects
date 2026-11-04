#include "lift_runtime.h"
uint64_t b_180032dd0(CPU*s){
/* 180032dd0: push rbx */
L_180032dd0_0:;
L_180032dd0_1:;
wr(s->u,24,8,rd(s->r,24,8));
L_180032dd0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_180032dd0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_180032dd0_4:;
/* 180032dd2: push rsi */
L_180032dd2_0:;
L_180032dd2_1:;
wr(s->u,24,8,rd(s->r,48,8));
L_180032dd2_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_180032dd2_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_180032dd2_4:;
/* 180032dd3: push rdi */
L_180032dd3_0:;
L_180032dd3_1:;
wr(s->u,24,8,rd(s->r,56,8));
L_180032dd3_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_180032dd3_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_180032dd3_4:;
/* 180032dd4: push r12 */
L_180032dd4_0:;
L_180032dd4_1:;
wr(s->u,24,8,rd(s->r,160,8));
L_180032dd4_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_180032dd4_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_180032dd4_4:;
/* 180032dd6: push r13 */
L_180032dd6_0:;
L_180032dd6_1:;
wr(s->u,24,8,rd(s->r,168,8));
L_180032dd6_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_180032dd6_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_180032dd6_4:;
/* 180032dd8: push r14 */
L_180032dd8_0:;
L_180032dd8_1:;
wr(s->u,24,8,rd(s->r,176,8));
L_180032dd8_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_180032dd8_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_180032dd8_4:;
/* 180032dda: push r15 */
L_180032dda_0:;
L_180032dda_1:;
wr(s->u,24,8,rd(s->r,184,8));
L_180032dda_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_180032dda_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_180032dda_4:;
/* 180032ddc: sub rsp, 0xe0 */
L_180032ddc_0:;
L_180032ddc_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0xe0))));
L_180032ddc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0xe0)),8,1));
L_180032ddc_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0xe0))));
L_180032ddc_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_180032ddc_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_180032ddc_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_180032ddc_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_180032ddc_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_180032ddc_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_180032ddc_10:;
/* 180032de3: mov rax, qword ptr [rip + 0x91bfee] */
L_180032de3_0:;
L_180032de3_1:;
wr(s->r,0,8,mr(UINT64_C(0x18094edd8),8));
L_180032de3_2:;
/* 180032dea: xor rax, rsp */
L_180032dea_0:;
L_180032dea_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032dea_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032dea_3:;
wr(s->r,0,8,(rd(s->r,0,8)^rd(s->r,32,8)));
L_180032dea_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_180032dea_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_180032dea_6:;
wr(s->u,32,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_180032dea_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_180032dea_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_180032dea_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_180032dea_10:;
/* 180032ded: mov qword ptr [rsp + 0xd0], rax */
L_180032ded_0:;
L_180032ded_1:;
wr(s->u,8,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_180032ded_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_180032ded_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_180032ded_4:;
/* 180032df5: mov rbx, rcx */
L_180032df5_0:;
L_180032df5_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_180032df5_2:;
/* 180032df8: mov qword ptr [rsp + 0x68], rdx */
L_180032df8_0:;
L_180032df8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_180032df8_2:;
wr(s->u,16,8,rd(s->r,16,8));
L_180032df8_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_180032df8_4:;
/* 180032dfd: mov qword ptr [rsp + 0x60], r8 */
L_180032dfd_0:;
L_180032dfd_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_180032dfd_2:;
wr(s->u,16,8,rd(s->r,128,8));
L_180032dfd_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_180032dfd_4:;
/* 180032e02: lea rcx, [rsp + 0x70] */
L_180032e02_0:;
L_180032e02_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_180032e02_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_180032e02_3:;
/* 180032e07: call qword ptr [rip + 0x615a83] */
L_180032e07_0:;
L_180032e07_1:;
wr(s->u,42,8,mr(UINT64_C(0x180648890),8));
L_180032e07_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_180032e07_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x180032e0d)));
L_180032e07_4:;
return (uint64_t)rd(s->u,42,8);
L_180032e07_5:;
return UINT64_C(0x180032e0d);
}
uint64_t b_180032e0d(CPU*s){
/* 180032e0d: xor r14d, r14d */
L_180032e0d_0:;
L_180032e0d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032e0d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032e0d_3:;
wr(s->r,176,4,(rd(s->r,176,4)^rd(s->r,176,4)));
L_180032e0d_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_180032e0d_5:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032e0d_6:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_180032e0d_7:;
wr(s->u,24,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_180032e0d_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_180032e0d_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_180032e0d_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_180032e0d_11:;
/* 180032e10: mov esi, r14d */
L_180032e10_0:;
L_180032e10_1:;
wr(s->r,48,4,rd(s->r,176,4));
L_180032e10_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_180032e10_3:;
/* 180032e13: mov dword ptr [rsp + 0x2c], r14d */
L_180032e13_0:;
L_180032e13_1:;
wr(s->u,0,8,(((U)UINT64_C(0x2c))+rd(s->r,32,8)));
L_180032e13_2:;
wr(s->u,16,4,rd(s->r,176,4));
L_180032e13_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_180032e13_4:;
/* 180032e18: mov edi, r14d */
L_180032e18_0:;
L_180032e18_1:;
wr(s->r,56,4,rd(s->r,176,4));
L_180032e18_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_180032e18_3:;
/* 180032e1b: mov r12d, r14d */
L_180032e1b_0:;
L_180032e1b_1:;
wr(s->r,160,4,rd(s->r,176,4));
L_180032e1b_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_180032e1b_3:;
/* 180032e1e: mov dword ptr [rsp + 0x24], r14d */
L_180032e1e_0:;
L_180032e1e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x24))+rd(s->r,32,8)));
L_180032e1e_2:;
wr(s->u,16,4,rd(s->r,176,4));
L_180032e1e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_180032e1e_4:;
/* 180032e23: mov eax, dword ptr [rsp + 0x90] */
L_180032e23_0:;
L_180032e23_1:;
wr(s->u,8,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_180032e23_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_180032e23_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_180032e23_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_180032e23_5:;
/* 180032e2a: mov dword ptr [rbx], eax */
L_180032e2a_0:;
L_180032e2a_1:;
wr(s->u,16,4,rd(s->r,0,4));
L_180032e2a_2:;
mw((uint64_t)rd(s->r,24,8),4,rd(s->u,16,4));
L_180032e2a_3:;
/* 180032e2c: xor eax, eax */
L_180032e2c_0:;
L_180032e2c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032e2c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032e2c_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_180032e2c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_180032e2c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032e2c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_180032e2c_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_180032e2c_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_180032e2c_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_180032e2c_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_180032e2c_11:;
/* 180032e2e: mov dword ptr [rsp + 0x54], eax */
L_180032e2e_0:;
L_180032e2e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x54))+rd(s->r,32,8)));
L_180032e2e_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_180032e2e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_180032e2e_4:;
/* 180032e32: mov dword ptr [rsp + 0x58], eax */
L_180032e32_0:;
L_180032e32_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_180032e32_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_180032e32_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_180032e32_4:;
/* 180032e36: mov dword ptr [rsp + 0x5c], eax */
L_180032e36_0:;
L_180032e36_1:;
wr(s->u,0,8,(((U)UINT64_C(0x5c))+rd(s->r,32,8)));
L_180032e36_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_180032e36_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_180032e36_4:;
/* 180032e3a: mov eax, dword ptr [rsp + 0x94] */
L_180032e3a_0:;
L_180032e3a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x94))+rd(s->r,32,8)));
L_180032e3a_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_180032e3a_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_180032e3a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_180032e3a_5:;
/* 180032e41: sub eax, 0x1e6 */
L_180032e41_0:;
L_180032e41_1:;
wr(s->r,512,1,(rd(s->r,0,4)<((U)UINT64_C(0x1e6))));
L_180032e41_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1e6)),4,1));
L_180032e41_3:;
wr(s->r,0,4,(rd(s->r,0,4)-((U)UINT64_C(0x1e6))));
L_180032e41_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_180032e41_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032e41_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_180032e41_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_180032e41_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_180032e41_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_180032e41_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_180032e41_11:;
/* 180032e46: je 0x180032e64 */
L_180032e46_0:;
L_180032e46_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180032e64);}
L_180032e46_2:;
return UINT64_C(0x180032e48);
}
uint64_t b_180032e48(CPU*s){
/* 180032e48: cmp eax, 0x64 */
L_180032e48_0:;
L_180032e48_1:;
wr(s->u,6,4,rd(s->r,0,4));
L_180032e48_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x64))));
L_180032e48_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x64)),4,1));
L_180032e48_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x64))));
L_180032e48_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032e48_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_180032e48_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_180032e48_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_180032e48_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_180032e48_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_180032e48_11:;
/* 180032e4b: je 0x180032e57 */
L_180032e4b_0:;
L_180032e4b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180032e57);}
L_180032e4b_2:;
return UINT64_C(0x180032e4d);
}
uint64_t b_180032e4d(CPU*s){
/* 180032e4d: mov r13d, r14d */
L_180032e4d_0:;
L_180032e4d_1:;
wr(s->r,168,4,rd(s->r,176,4));
L_180032e4d_2:;
wr(s->r,168,8,rd(s->r,168,4));
L_180032e4d_3:;
/* 180032e50: mov dword ptr [rsp + 0x28], r14d */
L_180032e50_0:;
L_180032e50_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_180032e50_2:;
wr(s->u,8,4,rd(s->r,176,4));
L_180032e50_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032e50_4:;
/* 180032e55: jmp 0x180032e6f */
L_180032e55_0:;
L_180032e55_1:;
return UINT64_C(0x180032e6f);
L_180032e55_2:;
return UINT64_C(0x180032e57);
}
uint64_t b_180032e57(CPU*s){
/* 180032e57: mov r13d, 2 */
L_180032e57_0:;
L_180032e57_1:;
wr(s->r,168,8,((U)UINT64_C(0x2)));
L_180032e57_2:;
/* 180032e5d: mov dword ptr [rsp + 0x28], r13d */
L_180032e5d_0:;
L_180032e5d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_180032e5d_2:;
wr(s->u,8,4,rd(s->r,168,4));
L_180032e5d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032e5d_4:;
/* 180032e62: jmp 0x180032e6f */
L_180032e62_0:;
L_180032e62_1:;
return UINT64_C(0x180032e6f);
L_180032e62_2:;
return UINT64_C(0x180032e64);
}
uint64_t b_180032e64(CPU*s){
/* 180032e64: mov r13d, 1 */
L_180032e64_0:;
L_180032e64_1:;
wr(s->r,168,8,((U)UINT64_C(0x1)));
L_180032e64_2:;
/* 180032e6a: mov dword ptr [rsp + 0x28], r13d */
L_180032e6a_0:;
L_180032e6a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_180032e6a_2:;
wr(s->u,16,4,rd(s->r,168,4));
L_180032e6a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_180032e6a_4:;
/* 180032e6f: mov r15d, r14d */
L_180032e6f_0:;
L_180032e6f_1:;
wr(s->r,184,4,rd(s->r,176,4));
L_180032e6f_2:;
wr(s->r,184,8,rd(s->r,184,4));
L_180032e6f_3:;
/* 180032e72: mov dword ptr [rsp + 0x3c], r14d */
L_180032e72_0:;
L_180032e72_1:;
wr(s->u,0,8,(((U)UINT64_C(0x3c))+rd(s->r,32,8)));
L_180032e72_2:;
wr(s->u,16,4,rd(s->r,176,4));
L_180032e72_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_180032e72_4:;
/* 180032e77: mov ebx, r14d */
L_180032e77_0:;
L_180032e77_1:;
wr(s->r,24,4,rd(s->r,176,4));
L_180032e77_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_180032e77_3:;
/* 180032e7a: mov dword ptr [rsp + 0x30], ebx */
L_180032e7a_0:;
L_180032e7a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_180032e7a_2:;
wr(s->u,16,4,rd(s->r,24,4));
L_180032e7a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_180032e7a_4:;
/* 180032e7e: mov dword ptr [rsp + 0x40], 0xffffffff */
L_180032e7e_0:;
L_180032e7e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_180032e7e_2:;
wr(s->u,16,4,((U)UINT64_C(0xffffffff)));
L_180032e7e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_180032e7e_4:;
/* 180032e86: xor eax, eax */
L_180032e86_0:;
L_180032e86_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032e86_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032e86_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_180032e86_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_180032e86_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032e86_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_180032e86_7:;
wr(s->u,20,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_180032e86_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_180032e86_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_180032e86_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_180032e86_11:;
/* 180032e88: mov dword ptr [rsp + 0x44], eax */
L_180032e88_0:;
L_180032e88_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_180032e88_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_180032e88_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_180032e88_4:;
/* 180032e8c: mov dword ptr [rsp + 0x48], eax */
L_180032e8c_0:;
L_180032e8c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_180032e8c_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_180032e8c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_180032e8c_4:;
/* 180032e90: mov dword ptr [rsp + 0x4c], eax */
L_180032e90_0:;
L_180032e90_1:;
wr(s->u,0,8,(((U)UINT64_C(0x4c))+rd(s->r,32,8)));
L_180032e90_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_180032e90_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_180032e90_4:;
/* 180032e94: lea rcx, [rsp + 0xa0] */
L_180032e94_0:;
L_180032e94_1:;
wr(s->u,8,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_180032e94_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_180032e94_3:;
/* 180032e9c: call qword ptr [rip + 0x6159ee] */
L_180032e9c_0:;
L_180032e9c_1:;
wr(s->u,26,8,mr(UINT64_C(0x180648890),8));
L_180032e9c_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_180032e9c_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x180032ea2)));
L_180032e9c_4:;
return (uint64_t)rd(s->u,26,8);
L_180032e9c_5:;
return UINT64_C(0x180032ea2);
}
uint64_t b_180032e6f(CPU*s){
/* 180032e6f: mov r15d, r14d */
L_180032e6f_0:;
L_180032e6f_1:;
wr(s->r,184,4,rd(s->r,176,4));
L_180032e6f_2:;
wr(s->r,184,8,rd(s->r,184,4));
L_180032e6f_3:;
/* 180032e72: mov dword ptr [rsp + 0x3c], r14d */
L_180032e72_0:;
L_180032e72_1:;
wr(s->u,0,8,(((U)UINT64_C(0x3c))+rd(s->r,32,8)));
L_180032e72_2:;
wr(s->u,16,4,rd(s->r,176,4));
L_180032e72_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_180032e72_4:;
/* 180032e77: mov ebx, r14d */
L_180032e77_0:;
L_180032e77_1:;
wr(s->r,24,4,rd(s->r,176,4));
L_180032e77_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_180032e77_3:;
/* 180032e7a: mov dword ptr [rsp + 0x30], ebx */
L_180032e7a_0:;
L_180032e7a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_180032e7a_2:;
wr(s->u,16,4,rd(s->r,24,4));
L_180032e7a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_180032e7a_4:;
/* 180032e7e: mov dword ptr [rsp + 0x40], 0xffffffff */
L_180032e7e_0:;
L_180032e7e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_180032e7e_2:;
wr(s->u,16,4,((U)UINT64_C(0xffffffff)));
L_180032e7e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_180032e7e_4:;
/* 180032e86: xor eax, eax */
L_180032e86_0:;
L_180032e86_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032e86_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032e86_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_180032e86_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_180032e86_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032e86_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_180032e86_7:;
wr(s->u,20,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_180032e86_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_180032e86_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_180032e86_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_180032e86_11:;
/* 180032e88: mov dword ptr [rsp + 0x44], eax */
L_180032e88_0:;
L_180032e88_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_180032e88_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_180032e88_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_180032e88_4:;
/* 180032e8c: mov dword ptr [rsp + 0x48], eax */
L_180032e8c_0:;
L_180032e8c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_180032e8c_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_180032e8c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_180032e8c_4:;
/* 180032e90: mov dword ptr [rsp + 0x4c], eax */
L_180032e90_0:;
L_180032e90_1:;
wr(s->u,0,8,(((U)UINT64_C(0x4c))+rd(s->r,32,8)));
L_180032e90_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_180032e90_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_180032e90_4:;
/* 180032e94: lea rcx, [rsp + 0xa0] */
L_180032e94_0:;
L_180032e94_1:;
wr(s->u,8,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_180032e94_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_180032e94_3:;
/* 180032e9c: call qword ptr [rip + 0x6159ee] */
L_180032e9c_0:;
L_180032e9c_1:;
wr(s->u,26,8,mr(UINT64_C(0x180648890),8));
L_180032e9c_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_180032e9c_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x180032ea2)));
L_180032e9c_4:;
return (uint64_t)rd(s->u,26,8);
L_180032e9c_5:;
return UINT64_C(0x180032ea2);
}
uint64_t b_180032ea2(CPU*s){
/* 180032ea2: mov r11d, dword ptr [rsp + 0xc4] */
L_180032ea2_0:;
L_180032ea2_1:;
wr(s->u,0,8,(((U)UINT64_C(0xc4))+rd(s->r,32,8)));
L_180032ea2_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_180032ea2_3:;
wr(s->r,152,4,rd(s->u,8,4));
L_180032ea2_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_180032ea2_5:;
/* 180032eaa: cmp r11d, 0x24a */
L_180032eaa_0:;
L_180032eaa_1:;
wr(s->u,18,4,rd(s->r,152,4));
L_180032eaa_2:;
wr(s->r,512,1,(rd(s->u,18,4)<((U)UINT64_C(0x24a))));
L_180032eaa_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),((U)UINT64_C(0x24a)),4,1));
L_180032eaa_4:;
wr(s->u,22,4,(rd(s->u,18,4)-((U)UINT64_C(0x24a))));
L_180032eaa_5:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032eaa_6:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_180032eaa_7:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_180032eaa_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_180032eaa_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_180032eaa_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_180032eaa_11:;
/* 180032eb1: je 0x180032ebc */
L_180032eb1_0:;
L_180032eb1_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180032ebc);}
L_180032eb1_2:;
return UINT64_C(0x180032eb3);
}
uint64_t b_180032eb3(CPU*s){
/* 180032eb3: cmp r11d, 0x21d8 */
L_180032eb3_0:;
L_180032eb3_1:;
wr(s->u,7,4,rd(s->r,152,4));
L_180032eb3_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x21d8))));
L_180032eb3_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x21d8)),4,1));
L_180032eb3_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x21d8))));
L_180032eb3_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032eb3_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_180032eb3_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_180032eb3_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_180032eb3_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_180032eb3_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_180032eb3_11:;
/* 180032eba: jne 0x180032ed6 */
L_180032eba_0:;
L_180032eba_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_180032eba_2:;
if(rd(s->u,0,1)){return UINT64_C(0x180032ed6);}
L_180032eba_3:;
return UINT64_C(0x180032ebc);
}
uint64_t b_180032ebc(CPU*s){
/* 180032ebc: xor eax, eax */
L_180032ebc_0:;
L_180032ebc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032ebc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032ebc_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_180032ebc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_180032ebc_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032ebc_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_180032ebc_7:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_180032ebc_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_180032ebc_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_180032ebc_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_180032ebc_11:;
/* 180032ebe: xor ecx, ecx */
L_180032ebe_0:;
L_180032ebe_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032ebe_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032ebe_3:;
wr(s->r,8,4,(rd(s->r,8,4)^rd(s->r,8,4)));
L_180032ebe_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_180032ebe_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032ebe_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_180032ebe_7:;
wr(s->u,12,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_180032ebe_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_180032ebe_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_180032ebe_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_180032ebe_11:;
/* 180032ec0: cpuid  */
L_180032ec0_0:;
L_180032ec0_1:;
wr(s->u,18,8,((U)UINT64_C(0x0)));
L_180032ec0_2:;
wr(s->u,26,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_180032ec0_3:;
if(rd(s->u,26,1)){goto L_180032ec0_36;}
L_180032ec0_4:;
wr(s->u,27,1,(rd(s->r,0,4)==((U)UINT64_C(0x1))));
L_180032ec0_5:;
if(rd(s->u,27,1)){goto L_180032ec0_38;}
L_180032ec0_6:;
wr(s->u,28,1,(rd(s->r,0,4)==((U)UINT64_C(0x2))));
L_180032ec0_7:;
if(rd(s->u,28,1)){goto L_180032ec0_40;}
L_180032ec0_8:;
wr(s->u,29,1,(rd(s->r,0,4)==((U)UINT64_C(0x3))));
L_180032ec0_9:;
if(rd(s->u,29,1)){goto L_180032ec0_42;}
L_180032ec0_10:;
wr(s->u,30,1,(rd(s->r,0,4)==((U)UINT64_C(0x4))));
L_180032ec0_11:;
if(rd(s->u,30,1)){goto L_180032ec0_44;}
L_180032ec0_12:;
wr(s->u,31,1,(rd(s->r,0,4)==((U)UINT64_C(0x5))));
L_180032ec0_13:;
if(rd(s->u,31,1)){goto L_180032ec0_46;}
L_180032ec0_14:;
wr(s->u,32,1,(rd(s->r,0,4)==((U)UINT64_C(0x6))));
L_180032ec0_15:;
if(rd(s->u,32,1)){goto L_180032ec0_48;}
L_180032ec0_16:;
wr(s->u,33,1,(rd(s->r,0,4)==((U)UINT64_C(0x7))));
L_180032ec0_17:;
if(rd(s->u,33,1)){goto L_180032ec0_50;}
L_180032ec0_18:;
wr(s->u,34,1,(rd(s->r,0,4)==((U)UINT64_C(0x9))));
L_180032ec0_19:;
if(rd(s->u,34,1)){goto L_180032ec0_52;}
L_180032ec0_20:;
wr(s->u,35,1,(rd(s->r,0,4)==((U)UINT64_C(0xa))));
L_180032ec0_21:;
if(rd(s->u,35,1)){goto L_180032ec0_54;}
L_180032ec0_22:;
wr(s->u,36,1,(rd(s->r,0,4)==((U)UINT64_C(0xb))));
L_180032ec0_23:;
if(rd(s->u,36,1)){goto L_180032ec0_56;}
L_180032ec0_24:;
wr(s->u,37,1,(rd(s->r,0,4)==((U)UINT64_C(0xd))));
L_180032ec0_25:;
if(rd(s->u,37,1)){goto L_180032ec0_58;}
L_180032ec0_26:;
wr(s->u,38,1,(rd(s->r,0,4)==((U)UINT64_C(0xf))));
L_180032ec0_27:;
if(rd(s->u,38,1)){goto L_180032ec0_60;}
L_180032ec0_28:;
wr(s->u,39,1,(rd(s->r,0,4)==((U)UINT64_C(0x80000002))));
L_180032ec0_29:;
if(rd(s->u,39,1)){goto L_180032ec0_62;}
L_180032ec0_30:;
wr(s->u,40,1,(rd(s->r,0,4)==((U)UINT64_C(0x80000003))));
L_180032ec0_31:;
if(rd(s->u,40,1)){goto L_180032ec0_64;}
L_180032ec0_32:;
wr(s->u,41,1,(rd(s->r,0,4)==((U)UINT64_C(0x80000004))));
L_180032ec0_33:;
if(rd(s->u,41,1)){goto L_180032ec0_66;}
L_180032ec0_34:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ec0_35:;
goto L_180032ec0_68;
L_180032ec0_36:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ec0_37:;
goto L_180032ec0_68;
L_180032ec0_38:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ec0_39:;
goto L_180032ec0_68;
L_180032ec0_40:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ec0_41:;
goto L_180032ec0_68;
L_180032ec0_42:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ec0_43:;
goto L_180032ec0_68;
L_180032ec0_44:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ec0_45:;
goto L_180032ec0_68;
L_180032ec0_46:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ec0_47:;
goto L_180032ec0_68;
L_180032ec0_48:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ec0_49:;
goto L_180032ec0_68;
L_180032ec0_50:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ec0_51:;
goto L_180032ec0_68;
L_180032ec0_52:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ec0_53:;
goto L_180032ec0_68;
L_180032ec0_54:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ec0_55:;
goto L_180032ec0_68;
L_180032ec0_56:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ec0_57:;
goto L_180032ec0_68;
L_180032ec0_58:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ec0_59:;
goto L_180032ec0_68;
L_180032ec0_60:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ec0_61:;
goto L_180032ec0_68;
L_180032ec0_62:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ec0_63:;
goto L_180032ec0_68;
L_180032ec0_64:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ec0_65:;
goto L_180032ec0_68;
L_180032ec0_66:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ec0_67:;
goto L_180032ec0_68;
L_180032ec0_68:;
wr(s->u,42,4,mr((uint64_t)rd(s->u,18,8),4));
L_180032ec0_69:;
wr(s->r,0,8,rd(s->u,42,4));
L_180032ec0_70:;
wr(s->u,46,8,(rd(s->u,18,8)+((U)UINT64_C(0x4))));
L_180032ec0_71:;
wr(s->u,54,4,mr((uint64_t)rd(s->u,46,8),4));
L_180032ec0_72:;
wr(s->r,24,8,rd(s->u,54,4));
L_180032ec0_73:;
wr(s->u,58,8,(rd(s->u,18,8)+((U)UINT64_C(0x8))));
L_180032ec0_74:;
wr(s->u,66,4,mr((uint64_t)rd(s->u,58,8),4));
L_180032ec0_75:;
wr(s->r,16,8,rd(s->u,66,4));
L_180032ec0_76:;
wr(s->u,70,8,(rd(s->u,18,8)+((U)UINT64_C(0xc))));
L_180032ec0_77:;
wr(s->u,78,4,mr((uint64_t)rd(s->u,70,8),4));
L_180032ec0_78:;
wr(s->r,8,8,rd(s->u,78,4));
L_180032ec0_79:;
/* 180032ec2: mov dword ptr [rsp + 0x40], eax */
L_180032ec2_0:;
L_180032ec2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_180032ec2_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_180032ec2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032ec2_4:;
/* 180032ec6: mov dword ptr [rsp + 0x44], ebx */
L_180032ec6_0:;
L_180032ec6_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_180032ec6_2:;
wr(s->u,8,4,rd(s->r,24,4));
L_180032ec6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032ec6_4:;
/* 180032eca: mov dword ptr [rsp + 0x48], ecx */
L_180032eca_0:;
L_180032eca_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_180032eca_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_180032eca_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032eca_4:;
/* 180032ece: mov dword ptr [rsp + 0x4c], edx */
L_180032ece_0:;
L_180032ece_1:;
wr(s->u,0,8,(((U)UINT64_C(0x4c))+rd(s->r,32,8)));
L_180032ece_2:;
wr(s->u,8,4,rd(s->r,16,4));
L_180032ece_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032ece_4:;
/* 180032ed2: mov ebx, esi */
L_180032ed2_0:;
L_180032ed2_1:;
wr(s->r,24,4,rd(s->r,48,4));
L_180032ed2_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_180032ed2_3:;
/* 180032ed4: jmp 0x180032ed9 */
L_180032ed4_0:;
L_180032ed4_1:;
return UINT64_C(0x180032ed9);
L_180032ed4_2:;
return UINT64_C(0x180032ed6);
}
uint64_t b_180032ed6(CPU*s){
/* 180032ed6: or eax, 0xffffffff */
L_180032ed6_0:;
L_180032ed6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032ed6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032ed6_3:;
wr(s->r,0,4,(rd(s->r,0,4)|((U)UINT64_C(0xffffffff))));
L_180032ed6_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_180032ed6_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032ed6_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_180032ed6_7:;
wr(s->u,1,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_180032ed6_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_180032ed6_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_180032ed6_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_180032ed6_11:;
/* 180032ed9: cmp eax, 1 */
L_180032ed9_0:;
L_180032ed9_1:;
wr(s->u,7,4,rd(s->r,0,4));
L_180032ed9_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x1))));
L_180032ed9_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x1)),4,1));
L_180032ed9_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x1))));
L_180032ed9_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032ed9_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_180032ed9_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_180032ed9_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_180032ed9_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_180032ed9_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_180032ed9_11:;
/* 180032edc: jl 0x180032f04 */
L_180032edc_0:;
L_180032edc_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_180032edc_2:;
if(rd(s->u,0,1)){return UINT64_C(0x180032f04);}
L_180032edc_3:;
return UINT64_C(0x180032ede);
}
uint64_t b_180032ed9(CPU*s){
/* 180032ed9: cmp eax, 1 */
L_180032ed9_0:;
L_180032ed9_1:;
wr(s->u,7,4,rd(s->r,0,4));
L_180032ed9_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x1))));
L_180032ed9_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x1)),4,1));
L_180032ed9_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x1))));
L_180032ed9_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032ed9_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_180032ed9_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_180032ed9_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_180032ed9_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_180032ed9_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_180032ed9_11:;
/* 180032edc: jl 0x180032f04 */
L_180032edc_0:;
L_180032edc_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_180032edc_2:;
if(rd(s->u,0,1)){return UINT64_C(0x180032f04);}
L_180032edc_3:;
return UINT64_C(0x180032ede);
}
uint64_t b_180032ede(CPU*s){
/* 180032ede: mov eax, 1 */
L_180032ede_0:;
L_180032ede_1:;
wr(s->r,0,8,((U)UINT64_C(0x1)));
L_180032ede_2:;
/* 180032ee3: xor ecx, ecx */
L_180032ee3_0:;
L_180032ee3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032ee3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032ee3_3:;
wr(s->r,8,4,(rd(s->r,8,4)^rd(s->r,8,4)));
L_180032ee3_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_180032ee3_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032ee3_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_180032ee3_7:;
wr(s->u,12,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_180032ee3_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_180032ee3_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_180032ee3_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_180032ee3_11:;
/* 180032ee5: cpuid  */
L_180032ee5_0:;
L_180032ee5_1:;
wr(s->u,18,8,((U)UINT64_C(0x0)));
L_180032ee5_2:;
wr(s->u,26,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_180032ee5_3:;
if(rd(s->u,26,1)){goto L_180032ee5_36;}
L_180032ee5_4:;
wr(s->u,27,1,(rd(s->r,0,4)==((U)UINT64_C(0x1))));
L_180032ee5_5:;
if(rd(s->u,27,1)){goto L_180032ee5_38;}
L_180032ee5_6:;
wr(s->u,28,1,(rd(s->r,0,4)==((U)UINT64_C(0x2))));
L_180032ee5_7:;
if(rd(s->u,28,1)){goto L_180032ee5_40;}
L_180032ee5_8:;
wr(s->u,29,1,(rd(s->r,0,4)==((U)UINT64_C(0x3))));
L_180032ee5_9:;
if(rd(s->u,29,1)){goto L_180032ee5_42;}
L_180032ee5_10:;
wr(s->u,30,1,(rd(s->r,0,4)==((U)UINT64_C(0x4))));
L_180032ee5_11:;
if(rd(s->u,30,1)){goto L_180032ee5_44;}
L_180032ee5_12:;
wr(s->u,31,1,(rd(s->r,0,4)==((U)UINT64_C(0x5))));
L_180032ee5_13:;
if(rd(s->u,31,1)){goto L_180032ee5_46;}
L_180032ee5_14:;
wr(s->u,32,1,(rd(s->r,0,4)==((U)UINT64_C(0x6))));
L_180032ee5_15:;
if(rd(s->u,32,1)){goto L_180032ee5_48;}
L_180032ee5_16:;
wr(s->u,33,1,(rd(s->r,0,4)==((U)UINT64_C(0x7))));
L_180032ee5_17:;
if(rd(s->u,33,1)){goto L_180032ee5_50;}
L_180032ee5_18:;
wr(s->u,34,1,(rd(s->r,0,4)==((U)UINT64_C(0x9))));
L_180032ee5_19:;
if(rd(s->u,34,1)){goto L_180032ee5_52;}
L_180032ee5_20:;
wr(s->u,35,1,(rd(s->r,0,4)==((U)UINT64_C(0xa))));
L_180032ee5_21:;
if(rd(s->u,35,1)){goto L_180032ee5_54;}
L_180032ee5_22:;
wr(s->u,36,1,(rd(s->r,0,4)==((U)UINT64_C(0xb))));
L_180032ee5_23:;
if(rd(s->u,36,1)){goto L_180032ee5_56;}
L_180032ee5_24:;
wr(s->u,37,1,(rd(s->r,0,4)==((U)UINT64_C(0xd))));
L_180032ee5_25:;
if(rd(s->u,37,1)){goto L_180032ee5_58;}
L_180032ee5_26:;
wr(s->u,38,1,(rd(s->r,0,4)==((U)UINT64_C(0xf))));
L_180032ee5_27:;
if(rd(s->u,38,1)){goto L_180032ee5_60;}
L_180032ee5_28:;
wr(s->u,39,1,(rd(s->r,0,4)==((U)UINT64_C(0x80000002))));
L_180032ee5_29:;
if(rd(s->u,39,1)){goto L_180032ee5_62;}
L_180032ee5_30:;
wr(s->u,40,1,(rd(s->r,0,4)==((U)UINT64_C(0x80000003))));
L_180032ee5_31:;
if(rd(s->u,40,1)){goto L_180032ee5_64;}
L_180032ee5_32:;
wr(s->u,41,1,(rd(s->r,0,4)==((U)UINT64_C(0x80000004))));
L_180032ee5_33:;
if(rd(s->u,41,1)){goto L_180032ee5_66;}
L_180032ee5_34:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ee5_35:;
goto L_180032ee5_68;
L_180032ee5_36:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ee5_37:;
goto L_180032ee5_68;
L_180032ee5_38:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ee5_39:;
goto L_180032ee5_68;
L_180032ee5_40:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ee5_41:;
goto L_180032ee5_68;
L_180032ee5_42:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ee5_43:;
goto L_180032ee5_68;
L_180032ee5_44:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ee5_45:;
goto L_180032ee5_68;
L_180032ee5_46:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ee5_47:;
goto L_180032ee5_68;
L_180032ee5_48:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ee5_49:;
goto L_180032ee5_68;
L_180032ee5_50:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ee5_51:;
goto L_180032ee5_68;
L_180032ee5_52:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ee5_53:;
goto L_180032ee5_68;
L_180032ee5_54:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ee5_55:;
goto L_180032ee5_68;
L_180032ee5_56:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ee5_57:;
goto L_180032ee5_68;
L_180032ee5_58:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ee5_59:;
goto L_180032ee5_68;
L_180032ee5_60:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ee5_61:;
goto L_180032ee5_68;
L_180032ee5_62:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ee5_63:;
goto L_180032ee5_68;
L_180032ee5_64:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ee5_65:;
goto L_180032ee5_68;
L_180032ee5_66:;
wr(s->u,18,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_180032ee5_67:;
goto L_180032ee5_68;
L_180032ee5_68:;
wr(s->u,42,4,mr((uint64_t)rd(s->u,18,8),4));
L_180032ee5_69:;
wr(s->r,0,8,rd(s->u,42,4));
L_180032ee5_70:;
wr(s->u,46,8,(rd(s->u,18,8)+((U)UINT64_C(0x4))));
L_180032ee5_71:;
wr(s->u,54,4,mr((uint64_t)rd(s->u,46,8),4));
L_180032ee5_72:;
wr(s->r,24,8,rd(s->u,54,4));
L_180032ee5_73:;
wr(s->u,58,8,(rd(s->u,18,8)+((U)UINT64_C(0x8))));
L_180032ee5_74:;
wr(s->u,66,4,mr((uint64_t)rd(s->u,58,8),4));
L_180032ee5_75:;
wr(s->r,16,8,rd(s->u,66,4));
L_180032ee5_76:;
wr(s->u,70,8,(rd(s->u,18,8)+((U)UINT64_C(0xc))));
L_180032ee5_77:;
wr(s->u,78,4,mr((uint64_t)rd(s->u,70,8),4));
L_180032ee5_78:;
wr(s->r,8,8,rd(s->u,78,4));
L_180032ee5_79:;
/* 180032ee7: mov r15d, edx */
L_180032ee7_0:;
L_180032ee7_1:;
wr(s->r,184,4,rd(s->r,16,4));
L_180032ee7_2:;
wr(s->r,184,8,rd(s->r,184,4));
L_180032ee7_3:;
/* 180032eea: mov dword ptr [rsp + 0x50], eax */
L_180032eea_0:;
L_180032eea_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_180032eea_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_180032eea_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032eea_4:;
/* 180032eee: mov dword ptr [rsp + 0x54], ebx */
L_180032eee_0:;
L_180032eee_1:;
wr(s->u,0,8,(((U)UINT64_C(0x54))+rd(s->r,32,8)));
L_180032eee_2:;
wr(s->u,8,4,rd(s->r,24,4));
L_180032eee_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032eee_4:;
/* 180032ef2: mov ebx, ecx */
L_180032ef2_0:;
L_180032ef2_1:;
wr(s->r,24,4,rd(s->r,8,4));
L_180032ef2_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_180032ef2_3:;
/* 180032ef4: mov dword ptr [rsp + 0x58], ecx */
L_180032ef4_0:;
L_180032ef4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_180032ef4_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_180032ef4_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032ef4_4:;
/* 180032ef8: mov dword ptr [rsp + 0x5c], edx */
L_180032ef8_0:;
L_180032ef8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x5c))+rd(s->r,32,8)));
L_180032ef8_2:;
wr(s->u,8,4,rd(s->r,16,4));
L_180032ef8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032ef8_4:;
/* 180032efc: mov dword ptr [rsp + 0x3c], edx */
L_180032efc_0:;
L_180032efc_1:;
wr(s->u,0,8,(((U)UINT64_C(0x3c))+rd(s->r,32,8)));
L_180032efc_2:;
wr(s->u,8,4,rd(s->r,16,4));
L_180032efc_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032efc_4:;
/* 180032f00: mov dword ptr [rsp + 0x30], ecx */
L_180032f00_0:;
L_180032f00_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_180032f00_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_180032f00_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032f00_4:;
/* 180032f04: mov eax, r15d */
L_180032f04_0:;
L_180032f04_1:;
wr(s->r,0,4,rd(s->r,184,4));
L_180032f04_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_180032f04_3:;
/* 180032f07: and eax, 0x10 */
L_180032f07_0:;
L_180032f07_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032f07_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032f07_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x10))));
L_180032f07_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_180032f07_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032f07_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_180032f07_7:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_180032f07_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_180032f07_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_180032f07_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_180032f07_11:;
/* 180032f0a: test al, al */
L_180032f0a_0:;
L_180032f0a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032f0a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032f0a_3:;
wr(s->u,82,1,(rd(s->r,0,1)&rd(s->r,0,1)));
L_180032f0a_4:;
wr(s->r,519,1,(sx(rd(s->u,82,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_180032f0a_5:;
wr(s->r,518,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_180032f0a_6:;
wr(s->u,12,1,(rd(s->u,82,1)&((U)UINT64_C(0xff))));
L_180032f0a_7:;
wr(s->u,16,1,pop(rd(s->u,12,1),1));
L_180032f0a_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_180032f0a_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_180032f0a_10:;
/* 180032f0c: je 0x180032f19 */
L_180032f0c_0:;
L_180032f0c_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180032f19);}
L_180032f0c_2:;
return UINT64_C(0x180032f0e);
}
uint64_t b_180032f04(CPU*s){
/* 180032f04: mov eax, r15d */
L_180032f04_0:;
L_180032f04_1:;
wr(s->r,0,4,rd(s->r,184,4));
L_180032f04_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_180032f04_3:;
/* 180032f07: and eax, 0x10 */
L_180032f07_0:;
L_180032f07_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032f07_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032f07_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x10))));
L_180032f07_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_180032f07_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032f07_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_180032f07_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_180032f07_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_180032f07_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_180032f07_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_180032f07_11:;
/* 180032f0a: test al, al */
L_180032f0a_0:;
L_180032f0a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032f0a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032f0a_3:;
wr(s->u,6,1,(rd(s->r,0,1)&rd(s->r,0,1)));
L_180032f0a_4:;
wr(s->r,519,1,(sx(rd(s->u,6,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_180032f0a_5:;
wr(s->r,518,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_180032f0a_6:;
wr(s->u,0,1,(rd(s->u,6,1)&((U)UINT64_C(0xff))));
L_180032f0a_7:;
wr(s->u,4,1,pop(rd(s->u,0,1),1));
L_180032f0a_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_180032f0a_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_180032f0a_10:;
/* 180032f0c: je 0x180032f19 */
L_180032f0c_0:;
L_180032f0c_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180032f19);}
L_180032f0c_2:;
return UINT64_C(0x180032f0e);
}
uint64_t b_180032f0e(CPU*s){
/* 180032f0e: mov esi, 0x4000 */
L_180032f0e_0:;
L_180032f0e_1:;
wr(s->r,48,8,((U)UINT64_C(0x4000)));
L_180032f0e_2:;
/* 180032f13: mov edi, esi */
L_180032f13_0:;
L_180032f13_1:;
wr(s->r,56,4,rd(s->r,48,4));
L_180032f13_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_180032f13_3:;
/* 180032f15: mov dword ptr [rsp + 0x2c], esi */
L_180032f15_0:;
L_180032f15_1:;
wr(s->u,0,8,(((U)UINT64_C(0x2c))+rd(s->r,32,8)));
L_180032f15_2:;
wr(s->u,8,4,rd(s->r,48,4));
L_180032f15_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032f15_4:;
/* 180032f19: bt r15d, 0xf */
L_180032f19_0:;
L_180032f19_1:;
wr(s->u,13,4,(((U)UINT64_C(0xf))&((U)UINT64_C(0x1f))));
L_180032f19_2:;
wr(s->u,17,4,((rd(s->u,13,4)>=32)?0:(rd(s->r,184,4)>>rd(s->u,13,4))));
L_180032f19_3:;
wr(s->u,21,4,(rd(s->u,17,4)&((U)UINT64_C(0x1))));
L_180032f19_4:;
wr(s->r,512,1,(rd(s->u,21,4)!=((U)UINT64_C(0x0))));
L_180032f19_5:;
/* 180032f1e: jae 0x180032f4d */
L_180032f1e_0:;
L_180032f1e_1:;
wr(s->u,12,1,(!rd(s->r,512,1)));
L_180032f1e_2:;
if(rd(s->u,12,1)){return UINT64_C(0x180032f4d);}
L_180032f1e_3:;
return UINT64_C(0x180032f20);
}
uint64_t b_180032f19(CPU*s){
/* 180032f19: bt r15d, 0xf */
L_180032f19_0:;
L_180032f19_1:;
wr(s->u,1,4,(((U)UINT64_C(0xf))&((U)UINT64_C(0x1f))));
L_180032f19_2:;
wr(s->u,5,4,((rd(s->u,1,4)>=32)?0:(rd(s->r,184,4)>>rd(s->u,1,4))));
L_180032f19_3:;
wr(s->u,9,4,(rd(s->u,5,4)&((U)UINT64_C(0x1))));
L_180032f19_4:;
wr(s->r,512,1,(rd(s->u,9,4)!=((U)UINT64_C(0x0))));
L_180032f19_5:;
/* 180032f1e: jae 0x180032f4d */
L_180032f1e_0:;
L_180032f1e_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_180032f1e_2:;
if(rd(s->u,0,1)){return UINT64_C(0x180032f4d);}
L_180032f1e_3:;
return UINT64_C(0x180032f20);
}
uint64_t b_180032f20(CPU*s){
/* 180032f20: bts edi, 0xc */
L_180032f20_0:;
L_180032f20_1:;
wr(s->u,18,4,(((U)UINT64_C(0xc))&((U)UINT64_C(0x1f))));
L_180032f20_2:;
wr(s->u,22,4,((rd(s->u,18,4)>=32)?0:(rd(s->r,56,4)>>rd(s->u,18,4))));
L_180032f20_3:;
wr(s->u,26,4,(rd(s->u,22,4)&((U)UINT64_C(0x1))));
L_180032f20_4:;
wr(s->r,512,1,(rd(s->u,26,4)!=((U)UINT64_C(0x0))));
L_180032f20_5:;
wr(s->u,30,4,((rd(s->u,18,4)>=32)?0:(((U)UINT64_C(0x1))<<rd(s->u,18,4))));
L_180032f20_6:;
wr(s->r,56,4,(rd(s->r,56,4)|rd(s->u,30,4)));
L_180032f20_7:;
wr(s->r,56,8,rd(s->r,56,4));
L_180032f20_8:;
/* 180032f24: bts esi, 0xc */
L_180032f24_0:;
L_180032f24_1:;
wr(s->u,18,4,(((U)UINT64_C(0xc))&((U)UINT64_C(0x1f))));
L_180032f24_2:;
wr(s->u,22,4,((rd(s->u,18,4)>=32)?0:(rd(s->r,48,4)>>rd(s->u,18,4))));
L_180032f24_3:;
wr(s->u,26,4,(rd(s->u,22,4)&((U)UINT64_C(0x1))));
L_180032f24_4:;
wr(s->r,512,1,(rd(s->u,26,4)!=((U)UINT64_C(0x0))));
L_180032f24_5:;
wr(s->u,30,4,((rd(s->u,18,4)>=32)?0:(((U)UINT64_C(0x1))<<rd(s->u,18,4))));
L_180032f24_6:;
wr(s->r,48,4,(rd(s->r,48,4)|rd(s->u,30,4)));
L_180032f24_7:;
wr(s->r,48,8,rd(s->r,48,4));
L_180032f24_8:;
/* 180032f28: mov dword ptr [rsp + 0x2c], esi */
L_180032f28_0:;
L_180032f28_1:;
wr(s->u,0,8,(((U)UINT64_C(0x2c))+rd(s->r,32,8)));
L_180032f28_2:;
wr(s->u,8,4,rd(s->r,48,4));
L_180032f28_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032f28_4:;
/* 180032f2c: mov eax, r15d */
L_180032f2c_0:;
L_180032f2c_1:;
wr(s->r,0,4,rd(s->r,184,4));
L_180032f2c_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_180032f2c_3:;
/* 180032f2f: and eax, 1 */
L_180032f2f_0:;
L_180032f2f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032f2f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032f2f_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_180032f2f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_180032f2f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032f2f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_180032f2f_7:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_180032f2f_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_180032f2f_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_180032f2f_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_180032f2f_11:;
/* 180032f32: test al, al */
L_180032f32_0:;
L_180032f32_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032f32_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032f32_3:;
wr(s->u,34,1,(rd(s->r,0,1)&rd(s->r,0,1)));
L_180032f32_4:;
wr(s->r,519,1,(sx(rd(s->u,34,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_180032f32_5:;
wr(s->r,518,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_180032f32_6:;
wr(s->u,12,1,(rd(s->u,34,1)&((U)UINT64_C(0xff))));
L_180032f32_7:;
wr(s->u,16,1,pop(rd(s->u,12,1),1));
L_180032f32_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_180032f32_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_180032f32_10:;
/* 180032f34: je 0x180032f4d */
L_180032f34_0:;
L_180032f34_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180032f4d);}
L_180032f34_2:;
return UINT64_C(0x180032f36);
}
uint64_t b_180032f36(CPU*s){
/* 180032f36: bts edi, 0xd */
L_180032f36_0:;
L_180032f36_1:;
wr(s->u,25,4,(((U)UINT64_C(0xd))&((U)UINT64_C(0x1f))));
L_180032f36_2:;
wr(s->u,29,4,((rd(s->u,25,4)>=32)?0:(rd(s->r,56,4)>>rd(s->u,25,4))));
L_180032f36_3:;
wr(s->u,33,4,(rd(s->u,29,4)&((U)UINT64_C(0x1))));
L_180032f36_4:;
wr(s->r,512,1,(rd(s->u,33,4)!=((U)UINT64_C(0x0))));
L_180032f36_5:;
wr(s->u,37,4,((rd(s->u,25,4)>=32)?0:(((U)UINT64_C(0x1))<<rd(s->u,25,4))));
L_180032f36_6:;
wr(s->r,56,4,(rd(s->r,56,4)|rd(s->u,37,4)));
L_180032f36_7:;
wr(s->r,56,8,rd(s->r,56,4));
L_180032f36_8:;
/* 180032f3a: bts esi, 0xd */
L_180032f3a_0:;
L_180032f3a_1:;
wr(s->u,25,4,(((U)UINT64_C(0xd))&((U)UINT64_C(0x1f))));
L_180032f3a_2:;
wr(s->u,29,4,((rd(s->u,25,4)>=32)?0:(rd(s->r,48,4)>>rd(s->u,25,4))));
L_180032f3a_3:;
wr(s->u,33,4,(rd(s->u,29,4)&((U)UINT64_C(0x1))));
L_180032f3a_4:;
wr(s->r,512,1,(rd(s->u,33,4)!=((U)UINT64_C(0x0))));
L_180032f3a_5:;
wr(s->u,37,4,((rd(s->u,25,4)>=32)?0:(((U)UINT64_C(0x1))<<rd(s->u,25,4))));
L_180032f3a_6:;
wr(s->r,48,4,(rd(s->r,48,4)|rd(s->u,37,4)));
L_180032f3a_7:;
wr(s->r,48,8,rd(s->r,48,4));
L_180032f3a_8:;
/* 180032f3e: mov dword ptr [rsp + 0x2c], esi */
L_180032f3e_0:;
L_180032f3e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x2c))+rd(s->r,32,8)));
L_180032f3e_2:;
wr(s->u,8,4,rd(s->r,48,4));
L_180032f3e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032f3e_4:;
/* 180032f42: mov r13d, 3 */
L_180032f42_0:;
L_180032f42_1:;
wr(s->r,168,8,((U)UINT64_C(0x3)));
L_180032f42_2:;
/* 180032f48: mov dword ptr [rsp + 0x28], r13d */
L_180032f48_0:;
L_180032f48_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_180032f48_2:;
wr(s->u,8,4,rd(s->r,168,4));
L_180032f48_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032f48_4:;
/* 180032f4d: bt r15d, 0x17 */
L_180032f4d_0:;
L_180032f4d_1:;
wr(s->u,13,4,(((U)UINT64_C(0x17))&((U)UINT64_C(0x1f))));
L_180032f4d_2:;
wr(s->u,17,4,((rd(s->u,13,4)>=32)?0:(rd(s->r,184,4)>>rd(s->u,13,4))));
L_180032f4d_3:;
wr(s->u,21,4,(rd(s->u,17,4)&((U)UINT64_C(0x1))));
L_180032f4d_4:;
wr(s->r,512,1,(rd(s->u,21,4)!=((U)UINT64_C(0x0))));
L_180032f4d_5:;
/* 180032f52: jae 0x180032f62 */
L_180032f52_0:;
L_180032f52_1:;
wr(s->u,12,1,(!rd(s->r,512,1)));
L_180032f52_2:;
if(rd(s->u,12,1)){return UINT64_C(0x180032f62);}
L_180032f52_3:;
return UINT64_C(0x180032f54);
}
uint64_t b_180032f4d(CPU*s){
/* 180032f4d: bt r15d, 0x17 */
L_180032f4d_0:;
L_180032f4d_1:;
wr(s->u,1,4,(((U)UINT64_C(0x17))&((U)UINT64_C(0x1f))));
L_180032f4d_2:;
wr(s->u,5,4,((rd(s->u,1,4)>=32)?0:(rd(s->r,184,4)>>rd(s->u,1,4))));
L_180032f4d_3:;
wr(s->u,9,4,(rd(s->u,5,4)&((U)UINT64_C(0x1))));
L_180032f4d_4:;
wr(s->r,512,1,(rd(s->u,9,4)!=((U)UINT64_C(0x0))));
L_180032f4d_5:;
/* 180032f52: jae 0x180032f62 */
L_180032f52_0:;
L_180032f52_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_180032f52_2:;
if(rd(s->u,0,1)){return UINT64_C(0x180032f62);}
L_180032f52_3:;
return UINT64_C(0x180032f54);
}
uint64_t b_180032f54(CPU*s){
/* 180032f54: or edi, 0x10 */
L_180032f54_0:;
L_180032f54_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032f54_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032f54_3:;
wr(s->r,56,4,(rd(s->r,56,4)|((U)UINT64_C(0x10))));
L_180032f54_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_180032f54_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032f54_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_180032f54_7:;
wr(s->u,12,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_180032f54_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_180032f54_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_180032f54_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_180032f54_11:;
/* 180032f57: mov r12d, 0x10 */
L_180032f57_0:;
L_180032f57_1:;
wr(s->r,160,8,((U)UINT64_C(0x10)));
L_180032f57_2:;
/* 180032f5d: mov dword ptr [rsp + 0x24], r12d */
L_180032f5d_0:;
L_180032f5d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x24))+rd(s->r,32,8)));
L_180032f5d_2:;
wr(s->u,8,4,rd(s->r,160,4));
L_180032f5d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032f5d_4:;
/* 180032f62: mov dword ptr [rsp + 0x20], r14d */
L_180032f62_0:;
L_180032f62_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_180032f62_2:;
wr(s->u,8,4,rd(s->r,176,4));
L_180032f62_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032f62_4:;
/* 180032f67: call 0x1803f9600 */
L_180032f67_0:;
L_180032f67_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_180032f67_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x180032f6c)));
L_180032f67_3:;
return (uint64_t)UINT64_C(0x1803f9600);
L_180032f67_4:;
return UINT64_C(0x180032f6c);
}
uint64_t b_180032f62(CPU*s){
/* 180032f62: mov dword ptr [rsp + 0x20], r14d */
L_180032f62_0:;
L_180032f62_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_180032f62_2:;
wr(s->u,8,4,rd(s->r,176,4));
L_180032f62_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032f62_4:;
/* 180032f67: call 0x1803f9600 */
L_180032f67_0:;
L_180032f67_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_180032f67_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x180032f6c)));
L_180032f67_3:;
return (uint64_t)UINT64_C(0x1803f9600);
L_180032f67_4:;
return UINT64_C(0x180032f6c);
}
uint64_t b_180032f6c(CPU*s){
/* 180032f6c: bt r15d, 0x19 */
L_180032f6c_0:;
L_180032f6c_1:;
wr(s->u,1,4,(((U)UINT64_C(0x19))&((U)UINT64_C(0x1f))));
L_180032f6c_2:;
wr(s->u,5,4,((rd(s->u,1,4)>=32)?0:(rd(s->r,184,4)>>rd(s->u,1,4))));
L_180032f6c_3:;
wr(s->u,9,4,(rd(s->u,5,4)&((U)UINT64_C(0x1))));
L_180032f6c_4:;
wr(s->r,512,1,(rd(s->u,9,4)!=((U)UINT64_C(0x0))));
L_180032f6c_5:;
/* 180032f71: jae 0x180032fef */
L_180032f71_0:;
L_180032f71_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_180032f71_2:;
if(rd(s->u,0,1)){return UINT64_C(0x180032fef);}
L_180032f71_3:;
return UINT64_C(0x180032f73);
}
uint64_t b_180032f73(CPU*s){
/* 180032f73: or edi, 0x20 */
L_180032f73_0:;
L_180032f73_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032f73_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032f73_3:;
wr(s->r,56,4,(rd(s->r,56,4)|((U)UINT64_C(0x20))));
L_180032f73_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_180032f73_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032f73_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_180032f73_7:;
wr(s->u,12,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_180032f73_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_180032f73_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_180032f73_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_180032f73_11:;
/* 180032f76: mov dword ptr [rsp + 0x38], edi */
L_180032f76_0:;
L_180032f76_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_180032f76_2:;
wr(s->u,8,4,rd(s->r,56,4));
L_180032f76_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032f76_4:;
/* 180032f7a: mov r14d, 1 */
L_180032f7a_0:;
L_180032f7a_1:;
wr(s->r,176,8,((U)UINT64_C(0x1)));
L_180032f7a_2:;
/* 180032f80: mov dword ptr [rsp + 0x20], r14d */
L_180032f80_0:;
L_180032f80_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_180032f80_2:;
wr(s->u,8,4,rd(s->r,176,4));
L_180032f80_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032f80_4:;
/* 180032f85: or r12d, 0x20 */
L_180032f85_0:;
L_180032f85_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032f85_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032f85_3:;
wr(s->r,160,4,(rd(s->r,160,4)|((U)UINT64_C(0x20))));
L_180032f85_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_180032f85_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032f85_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_180032f85_7:;
wr(s->u,12,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_180032f85_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_180032f85_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_180032f85_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_180032f85_11:;
/* 180032f89: mov dword ptr [rsp + 0x24], r12d */
L_180032f89_0:;
L_180032f89_1:;
wr(s->u,0,8,(((U)UINT64_C(0x24))+rd(s->r,32,8)));
L_180032f89_2:;
wr(s->u,8,4,rd(s->r,160,4));
L_180032f89_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032f89_4:;
/* 180032f8e: jmp 0x180032fcf */
L_180032f8e_0:;
L_180032f8e_1:;
return UINT64_C(0x180032fcf);
L_180032f8e_2:;
return UINT64_C(0x180032f90);
}
uint64_t b_180032fcf(CPU*s){
/* 180032fcf: test r14d, r14d */
L_180032fcf_0:;
L_180032fcf_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032fcf_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032fcf_3:;
wr(s->u,6,4,(rd(s->r,176,4)&rd(s->r,176,4)));
L_180032fcf_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032fcf_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_180032fcf_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_180032fcf_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_180032fcf_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_180032fcf_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_180032fcf_10:;
/* 180032fd2: je 0x180032fd7 */
L_180032fd2_0:;
L_180032fd2_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180032fd7);}
L_180032fd2_2:;
return UINT64_C(0x180032fd4);
}
uint64_t b_180032fd4(CPU*s){
/* 180032fd4: or esi, 0x20 */
L_180032fd4_0:;
L_180032fd4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032fd4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032fd4_3:;
wr(s->r,48,4,(rd(s->r,48,4)|((U)UINT64_C(0x20))));
L_180032fd4_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_180032fd4_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032fd4_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_180032fd4_7:;
wr(s->u,0,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_180032fd4_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_180032fd4_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_180032fd4_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_180032fd4_11:;
/* 180032fd7: test sil, 0x20 */
L_180032fd7_0:;
L_180032fd7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032fd7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032fd7_3:;
wr(s->u,6,1,(rd(s->r,48,1)&((U)UINT64_C(0x20))));
L_180032fd7_4:;
wr(s->r,519,1,(sx(rd(s->u,6,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_180032fd7_5:;
wr(s->r,518,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_180032fd7_6:;
wr(s->u,0,1,(rd(s->u,6,1)&((U)UINT64_C(0xff))));
L_180032fd7_7:;
wr(s->u,4,1,pop(rd(s->u,0,1),1));
L_180032fd7_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_180032fd7_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_180032fd7_10:;
/* 180032fdb: je 0x180032fef */
L_180032fdb_0:;
L_180032fdb_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180032fef);}
L_180032fdb_2:;
return UINT64_C(0x180032fdd);
}
uint64_t b_180032fd7(CPU*s){
/* 180032fd7: test sil, 0x20 */
L_180032fd7_0:;
L_180032fd7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032fd7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032fd7_3:;
wr(s->u,3,1,(rd(s->r,48,1)&((U)UINT64_C(0x20))));
L_180032fd7_4:;
wr(s->r,519,1,(sx(rd(s->u,3,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_180032fd7_5:;
wr(s->r,518,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_180032fd7_6:;
wr(s->u,0,1,(rd(s->u,3,1)&((U)UINT64_C(0xff))));
L_180032fd7_7:;
wr(s->u,1,1,pop(rd(s->u,0,1),1));
L_180032fd7_8:;
wr(s->u,2,1,(rd(s->u,1,1)&((U)UINT64_C(0x1))));
L_180032fd7_9:;
wr(s->r,514,1,(rd(s->u,2,1)==((U)UINT64_C(0x0))));
L_180032fd7_10:;
/* 180032fdb: je 0x180032fef */
L_180032fdb_0:;
L_180032fdb_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180032fef);}
L_180032fdb_2:;
return UINT64_C(0x180032fdd);
}
uint64_t b_180032fdd(CPU*s){
/* 180032fdd: mov eax, 5 */
L_180032fdd_0:;
L_180032fdd_1:;
wr(s->r,0,8,((U)UINT64_C(0x5)));
L_180032fdd_2:;
/* 180032fe2: cmp r13d, 4 */
L_180032fe2_0:;
L_180032fe2_1:;
wr(s->u,23,4,rd(s->r,168,4));
L_180032fe2_2:;
wr(s->r,512,1,(rd(s->u,23,4)<((U)UINT64_C(0x4))));
L_180032fe2_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,23,4),((U)UINT64_C(0x4)),4,1));
L_180032fe2_4:;
wr(s->u,27,4,(rd(s->u,23,4)-((U)UINT64_C(0x4))));
L_180032fe2_5:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032fe2_6:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_180032fe2_7:;
wr(s->u,12,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_180032fe2_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_180032fe2_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_180032fe2_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_180032fe2_11:;
/* 180032fe6: cmove r13d, eax */
L_180032fe6_0:;
L_180032fe6_1:;
wr(s->u,18,4,rd(s->r,0,4));
L_180032fe6_2:;
wr(s->r,168,8,rd(s->r,168,4));
L_180032fe6_3:;
wr(s->u,22,1,(!rd(s->r,518,1)));
L_180032fe6_4:;
if(rd(s->u,22,1)){goto L_180032fea_0;}
L_180032fe6_5:;
wr(s->r,168,4,rd(s->u,18,4));
L_180032fe6_6:;
/* 180032fea: mov dword ptr [rsp + 0x28], r13d */
L_180032fea_0:;
L_180032fea_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_180032fea_2:;
wr(s->u,8,4,rd(s->r,168,4));
L_180032fea_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032fea_4:;
/* 180032fef: test r14d, r14d */
L_180032fef_0:;
L_180032fef_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032fef_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032fef_3:;
wr(s->u,31,4,(rd(s->r,176,4)&rd(s->r,176,4)));
L_180032fef_4:;
wr(s->r,519,1,(sx(rd(s->u,31,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032fef_5:;
wr(s->r,518,1,(rd(s->u,31,4)==((U)UINT64_C(0x0))));
L_180032fef_6:;
wr(s->u,12,4,(rd(s->u,31,4)&((U)UINT64_C(0xff))));
L_180032fef_7:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_180032fef_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_180032fef_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_180032fef_10:;
/* 180032ff2: je 0x180033047 */
L_180032ff2_0:;
L_180032ff2_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180033047);}
L_180032ff2_2:;
return UINT64_C(0x180032ff4);
}
uint64_t b_180032fea(CPU*s){
/* 180032fea: mov dword ptr [rsp + 0x28], r13d */
L_180032fea_0:;
L_180032fea_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_180032fea_2:;
wr(s->u,8,4,rd(s->r,168,4));
L_180032fea_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032fea_4:;
/* 180032fef: test r14d, r14d */
L_180032fef_0:;
L_180032fef_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032fef_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032fef_3:;
wr(s->u,18,4,(rd(s->r,176,4)&rd(s->r,176,4)));
L_180032fef_4:;
wr(s->r,519,1,(sx(rd(s->u,18,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032fef_5:;
wr(s->r,518,1,(rd(s->u,18,4)==((U)UINT64_C(0x0))));
L_180032fef_6:;
wr(s->u,12,4,(rd(s->u,18,4)&((U)UINT64_C(0xff))));
L_180032fef_7:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_180032fef_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_180032fef_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_180032fef_10:;
/* 180032ff2: je 0x180033047 */
L_180032ff2_0:;
L_180032ff2_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180033047);}
L_180032ff2_2:;
return UINT64_C(0x180032ff4);
}
uint64_t b_180032fef(CPU*s){
/* 180032fef: test r14d, r14d */
L_180032fef_0:;
L_180032fef_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032fef_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032fef_3:;
wr(s->u,6,4,(rd(s->r,176,4)&rd(s->r,176,4)));
L_180032fef_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180032fef_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_180032fef_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_180032fef_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_180032fef_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_180032fef_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_180032fef_10:;
/* 180032ff2: je 0x180033047 */
L_180032ff2_0:;
L_180032ff2_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180033047);}
L_180032ff2_2:;
return UINT64_C(0x180032ff4);
}
uint64_t b_180032ff4(CPU*s){
/* 180032ff4: test sil, 0x20 */
L_180032ff4_0:;
L_180032ff4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180032ff4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180032ff4_3:;
wr(s->u,3,1,(rd(s->r,48,1)&((U)UINT64_C(0x20))));
L_180032ff4_4:;
wr(s->r,519,1,(sx(rd(s->u,3,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_180032ff4_5:;
wr(s->r,518,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_180032ff4_6:;
wr(s->u,0,1,(rd(s->u,3,1)&((U)UINT64_C(0xff))));
L_180032ff4_7:;
wr(s->u,1,1,pop(rd(s->u,0,1),1));
L_180032ff4_8:;
wr(s->u,2,1,(rd(s->u,1,1)&((U)UINT64_C(0x1))));
L_180032ff4_9:;
wr(s->r,514,1,(rd(s->u,2,1)==((U)UINT64_C(0x0))));
L_180032ff4_10:;
/* 180032ff8: je 0x180033047 */
L_180032ff8_0:;
L_180032ff8_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180033047);}
L_180032ff8_2:;
return UINT64_C(0x180032ffa);
}
uint64_t b_180032ffa(CPU*s){
/* 180032ffa: bts edi, 0x11 */
L_180032ffa_0:;
L_180032ffa_1:;
wr(s->u,22,4,(((U)UINT64_C(0x11))&((U)UINT64_C(0x1f))));
L_180032ffa_2:;
wr(s->u,26,4,((rd(s->u,22,4)>=32)?0:(rd(s->r,56,4)>>rd(s->u,22,4))));
L_180032ffa_3:;
wr(s->u,30,4,(rd(s->u,26,4)&((U)UINT64_C(0x1))));
L_180032ffa_4:;
wr(s->r,512,1,(rd(s->u,30,4)!=((U)UINT64_C(0x0))));
L_180032ffa_5:;
wr(s->u,34,4,((rd(s->u,22,4)>=32)?0:(((U)UINT64_C(0x1))<<rd(s->u,22,4))));
L_180032ffa_6:;
wr(s->r,56,4,(rd(s->r,56,4)|rd(s->u,34,4)));
L_180032ffa_7:;
wr(s->r,56,8,rd(s->r,56,4));
L_180032ffa_8:;
/* 180032ffe: mov dword ptr [rsp + 0x38], edi */
L_180032ffe_0:;
L_180032ffe_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_180032ffe_2:;
wr(s->u,8,4,rd(s->r,56,4));
L_180032ffe_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180032ffe_4:;
/* 180033002: bts esi, 0x11 */
L_180033002_0:;
L_180033002_1:;
wr(s->u,22,4,(((U)UINT64_C(0x11))&((U)UINT64_C(0x1f))));
L_180033002_2:;
wr(s->u,26,4,((rd(s->u,22,4)>=32)?0:(rd(s->r,48,4)>>rd(s->u,22,4))));
L_180033002_3:;
wr(s->u,30,4,(rd(s->u,26,4)&((U)UINT64_C(0x1))));
L_180033002_4:;
wr(s->r,512,1,(rd(s->u,30,4)!=((U)UINT64_C(0x0))));
L_180033002_5:;
wr(s->u,34,4,((rd(s->u,22,4)>=32)?0:(((U)UINT64_C(0x1))<<rd(s->u,22,4))));
L_180033002_6:;
wr(s->r,48,4,(rd(s->r,48,4)|rd(s->u,34,4)));
L_180033002_7:;
wr(s->r,48,8,rd(s->r,48,4));
L_180033002_8:;
/* 180033006: mov dword ptr [rsp + 0x2c], esi */
L_180033006_0:;
L_180033006_1:;
wr(s->u,0,8,(((U)UINT64_C(0x2c))+rd(s->r,32,8)));
L_180033006_2:;
wr(s->u,8,4,rd(s->r,48,4));
L_180033006_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180033006_4:;
/* 18003300a: stmxcsr dword ptr [rsp + 0x34] */
L_18003300a_0:;
L_18003300a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x34))+rd(s->r,32,8)));
L_18003300a_2:;
wr(s->u,8,4,rd(s->r,4244,4));
L_18003300a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_18003300a_4:;
/* 18003300f: mov eax, dword ptr [rsp + 0x34] */
L_18003300f_0:;
L_18003300f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x34))+rd(s->r,32,8)));
L_18003300f_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_18003300f_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_18003300f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_18003300f_5:;
/* 180033013: or eax, 0x8040 */
L_180033013_0:;
L_180033013_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_180033013_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_180033013_3:;
wr(s->r,0,4,(rd(s->r,0,4)|((U)UINT64_C(0x8040))));
L_180033013_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_180033013_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_180033013_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_180033013_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_180033013_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_180033013_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_180033013_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_180033013_11:;
/* 180033018: mov dword ptr [rsp + 0x34], eax */
L_180033018_0:;
L_180033018_1:;
wr(s->u,0,8,(((U)UINT64_C(0x34))+rd(s->r,32,8)));
L_180033018_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_180033018_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_180033018_4:;
/* 18003301c: ldmxcsr dword ptr [rsp + 0x34] */
L_18003301c_0:;
L_18003301c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x34))+rd(s->r,32,8)));
L_18003301c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_18003301c_3:;
wr(s->r,4244,4,rd(s->u,8,4));
L_18003301c_4:;
/* 180033021: jmp 0x180033047 */
L_180033021_0:;
L_180033021_1:;
return UINT64_C(0x180033047);
L_180033021_2:;
return UINT64_C(0x180033023);
}
