#include "lift_runtime.h"
uint64_t b_1800ff0f0(CPU*s){
/* 1800ff0f0: push rbp */
L_1800ff0f0_0:;
L_1800ff0f0_1:;
wr(s->u,16,8,rd(s->r,40,8));
L_1800ff0f0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff0f0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1800ff0f0_4:;
/* 1800ff0f2: push rsi */
L_1800ff0f2_0:;
L_1800ff0f2_1:;
wr(s->u,16,8,rd(s->r,48,8));
L_1800ff0f2_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff0f2_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1800ff0f2_4:;
/* 1800ff0f3: push rdi */
L_1800ff0f3_0:;
L_1800ff0f3_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1800ff0f3_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff0f3_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1800ff0f3_4:;
/* 1800ff0f4: push r12 */
L_1800ff0f4_0:;
L_1800ff0f4_1:;
wr(s->u,16,8,rd(s->r,160,8));
L_1800ff0f4_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff0f4_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1800ff0f4_4:;
/* 1800ff0f6: push r13 */
L_1800ff0f6_0:;
L_1800ff0f6_1:;
wr(s->u,16,8,rd(s->r,168,8));
L_1800ff0f6_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff0f6_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1800ff0f6_4:;
/* 1800ff0f8: push r14 */
L_1800ff0f8_0:;
L_1800ff0f8_1:;
wr(s->u,16,8,rd(s->r,176,8));
L_1800ff0f8_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff0f8_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1800ff0f8_4:;
/* 1800ff0fa: sub rsp, 0x68 */
L_1800ff0fa_0:;
L_1800ff0fa_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x68))));
L_1800ff0fa_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x68)),8,1));
L_1800ff0fa_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x68))));
L_1800ff0fa_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff0fa_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800ff0fa_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800ff0fa_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff0fa_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff0fa_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff0fa_10:;
/* 1800ff0fe: mov rax, qword ptr [rip + 0x84fcd3] */
L_1800ff0fe_0:;
L_1800ff0fe_1:;
wr(s->r,0,8,mr(UINT64_C(0x18094edd8),8));
L_1800ff0fe_2:;
/* 1800ff105: xor rax, rsp */
L_1800ff105_0:;
L_1800ff105_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff105_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff105_3:;
wr(s->r,0,8,(rd(s->r,0,8)^rd(s->r,32,8)));
L_1800ff105_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff105_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1800ff105_6:;
wr(s->u,24,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1800ff105_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff105_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff105_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff105_10:;
/* 1800ff108: mov qword ptr [rsp + 0x58], rax */
L_1800ff108_0:;
L_1800ff108_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1800ff108_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800ff108_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff108_4:;
/* 1800ff10d: xor r14d, r14d */
L_1800ff10d_0:;
L_1800ff10d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff10d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff10d_3:;
wr(s->r,176,4,(rd(s->r,176,4)^rd(s->r,176,4)));
L_1800ff10d_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1800ff10d_5:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff10d_6:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1800ff10d_7:;
wr(s->u,24,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1800ff10d_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1800ff10d_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff10d_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff10d_11:;
/* 1800ff110: mov rsi, r9 */
L_1800ff110_0:;
L_1800ff110_1:;
wr(s->r,48,8,rd(s->r,136,8));
L_1800ff110_2:;
/* 1800ff113: mov r12, r8 */
L_1800ff113_0:;
L_1800ff113_1:;
wr(s->r,160,8,rd(s->r,128,8));
L_1800ff113_2:;
/* 1800ff116: mov r13, rdx */
L_1800ff116_0:;
L_1800ff116_1:;
wr(s->r,168,8,rd(s->r,16,8));
L_1800ff116_2:;
/* 1800ff119: mov rbp, rcx */
L_1800ff119_0:;
L_1800ff119_1:;
wr(s->r,40,8,rd(s->r,8,8));
L_1800ff119_2:;
/* 1800ff11c: mov rdi, r14 */
L_1800ff11c_0:;
L_1800ff11c_1:;
wr(s->r,56,8,rd(s->r,176,8));
L_1800ff11c_2:;
/* 1800ff11f: test r9, r9 */
L_1800ff11f_0:;
L_1800ff11f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff11f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff11f_3:;
wr(s->u,34,8,(rd(s->r,136,8)&rd(s->r,136,8)));
L_1800ff11f_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff11f_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1800ff11f_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1800ff11f_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff11f_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff11f_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff11f_10:;
/* 1800ff122: je 0x1800ff127 */
L_1800ff122_0:;
L_1800ff122_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff127);}
L_1800ff122_2:;
return UINT64_C(0x1800ff124);
}
uint64_t b_1800ff124(CPU*s){
/* 1800ff124: mov rdi, qword ptr [r9] */
L_1800ff124_0:;
L_1800ff124_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,136,8),8));
L_1800ff124_2:;
wr(s->r,56,8,rd(s->u,16,8));
L_1800ff124_3:;
/* 1800ff127: mov qword ptr [rsp + 0x60], rbx */
L_1800ff127_0:;
L_1800ff127_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1800ff127_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ff127_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff127_4:;
/* 1800ff12c: nop dword ptr [rax] */
L_1800ff12c_0:;
L_1800ff12c_1:;
/* 1800ff130: test rsi, rsi */
L_1800ff130_0:;
L_1800ff130_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff130_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff130_3:;
wr(s->u,34,8,(rd(s->r,48,8)&rd(s->r,48,8)));
L_1800ff130_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff130_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1800ff130_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1800ff130_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff130_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff130_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff130_10:;
/* 1800ff133: je 0x1800ff13f */
L_1800ff133_0:;
L_1800ff133_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff13f);}
L_1800ff133_2:;
return UINT64_C(0x1800ff135);
}
uint64_t b_1800ff127(CPU*s){
/* 1800ff127: mov qword ptr [rsp + 0x60], rbx */
L_1800ff127_0:;
L_1800ff127_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1800ff127_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ff127_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff127_4:;
/* 1800ff12c: nop dword ptr [rax] */
L_1800ff12c_0:;
L_1800ff12c_1:;
/* 1800ff130: test rsi, rsi */
L_1800ff130_0:;
L_1800ff130_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff130_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff130_3:;
wr(s->u,26,8,(rd(s->r,48,8)&rd(s->r,48,8)));
L_1800ff130_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff130_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1800ff130_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1800ff130_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff130_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff130_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff130_10:;
/* 1800ff133: je 0x1800ff13f */
L_1800ff133_0:;
L_1800ff133_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff13f);}
L_1800ff133_2:;
return UINT64_C(0x1800ff135);
}
uint64_t b_1800ff130(CPU*s){
/* 1800ff130: test rsi, rsi */
L_1800ff130_0:;
L_1800ff130_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff130_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff130_3:;
wr(s->u,10,8,(rd(s->r,48,8)&rd(s->r,48,8)));
L_1800ff130_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff130_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800ff130_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800ff130_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ff130_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff130_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff130_10:;
/* 1800ff133: je 0x1800ff13f */
L_1800ff133_0:;
L_1800ff133_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff13f);}
L_1800ff133_2:;
return UINT64_C(0x1800ff135);
}
uint64_t b_1800ff135(CPU*s){
/* 1800ff135: cmp rdi, 0x18 */
L_1800ff135_0:;
L_1800ff135_1:;
wr(s->u,11,8,rd(s->r,56,8));
L_1800ff135_2:;
wr(s->r,512,1,(rd(s->u,11,8)<((U)UINT64_C(0x18))));
L_1800ff135_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,11,8),((U)UINT64_C(0x18)),8,1));
L_1800ff135_4:;
wr(s->u,19,8,(rd(s->u,11,8)-((U)UINT64_C(0x18))));
L_1800ff135_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff135_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1800ff135_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1800ff135_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1800ff135_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1800ff135_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1800ff135_11:;
/* 1800ff139: jl 0x1800ff212 */
L_1800ff139_0:;
L_1800ff139_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1800ff139_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800ff212);}
L_1800ff139_3:;
return UINT64_C(0x1800ff13f);
}
uint64_t b_1800ff13f(CPU*s){
/* 1800ff13f: lea r9, [rsp + 0x30] */
L_1800ff13f_0:;
L_1800ff13f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff13f_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1800ff13f_3:;
/* 1800ff144: lea rdx, [rsp + 0x48] */
L_1800ff144_0:;
L_1800ff144_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1800ff144_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1800ff144_3:;
/* 1800ff149: mov r8d, 0x10 */
L_1800ff149_0:;
L_1800ff149_1:;
wr(s->r,128,8,((U)UINT64_C(0x10)));
L_1800ff149_2:;
/* 1800ff14f: mov rcx, rbp */
L_1800ff14f_0:;
L_1800ff14f_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1800ff14f_2:;
/* 1800ff152: mov qword ptr [rsp + 0x20], r14 */
L_1800ff152_0:;
L_1800ff152_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ff152_2:;
wr(s->u,8,8,rd(s->r,176,8));
L_1800ff152_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff152_4:;
/* 1800ff157: call 0x180034740 */
L_1800ff157_0:;
L_1800ff157_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff157_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff15c)));
L_1800ff157_3:;
return (uint64_t)UINT64_C(0x180034740);
L_1800ff157_4:;
return UINT64_C(0x1800ff15c);
}
uint64_t b_1800ff15c(CPU*s){
/* 1800ff15c: test eax, eax */
L_1800ff15c_0:;
L_1800ff15c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff15c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff15c_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff15c_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff15c_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1800ff15c_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1800ff15c_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800ff15c_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800ff15c_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800ff15c_10:;
/* 1800ff15e: je 0x1800ff231 */
L_1800ff15e_0:;
L_1800ff15e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff231);}
L_1800ff15e_2:;
return UINT64_C(0x1800ff164);
}
uint64_t b_1800ff164(CPU*s){
/* 1800ff164: cmp dword ptr [rsp + 0x30], 0x10 */
L_1800ff164_0:;
L_1800ff164_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff164_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ff164_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1800ff164_4:;
wr(s->r,512,1,(rd(s->u,19,4)<((U)UINT64_C(0x10))));
L_1800ff164_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),((U)UINT64_C(0x10)),4,1));
L_1800ff164_6:;
wr(s->u,23,4,(rd(s->u,19,4)-((U)UINT64_C(0x10))));
L_1800ff164_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff164_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1800ff164_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1800ff164_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1800ff164_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ff164_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ff164_13:;
/* 1800ff169: jne 0x1800ff231 */
L_1800ff169_0:;
L_1800ff169_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1800ff169_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1800ff231);}
L_1800ff169_3:;
return UINT64_C(0x1800ff16f);
}
uint64_t b_1800ff16f(CPU*s){
/* 1800ff16f: lea r9, [rsp + 0x30] */
L_1800ff16f_0:;
L_1800ff16f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff16f_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1800ff16f_3:;
/* 1800ff174: lea rdx, [rsp + 0x38] */
L_1800ff174_0:;
L_1800ff174_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff174_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1800ff174_3:;
/* 1800ff179: mov r8d, 8 */
L_1800ff179_0:;
L_1800ff179_1:;
wr(s->r,128,8,((U)UINT64_C(0x8)));
L_1800ff179_2:;
/* 1800ff17f: mov rcx, rbp */
L_1800ff17f_0:;
L_1800ff17f_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1800ff17f_2:;
/* 1800ff182: mov qword ptr [rsp + 0x20], r14 */
L_1800ff182_0:;
L_1800ff182_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ff182_2:;
wr(s->u,8,8,rd(s->r,176,8));
L_1800ff182_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff182_4:;
/* 1800ff187: call 0x180034740 */
L_1800ff187_0:;
L_1800ff187_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff187_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff18c)));
L_1800ff187_3:;
return (uint64_t)UINT64_C(0x180034740);
L_1800ff187_4:;
return UINT64_C(0x1800ff18c);
}
uint64_t b_1800ff18c(CPU*s){
/* 1800ff18c: test eax, eax */
L_1800ff18c_0:;
L_1800ff18c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff18c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff18c_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff18c_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff18c_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1800ff18c_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1800ff18c_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800ff18c_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800ff18c_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800ff18c_10:;
/* 1800ff18e: je 0x1800ff231 */
L_1800ff18e_0:;
L_1800ff18e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff231);}
L_1800ff18e_2:;
return UINT64_C(0x1800ff194);
}
uint64_t b_1800ff194(CPU*s){
/* 1800ff194: cmp dword ptr [rsp + 0x30], 8 */
L_1800ff194_0:;
L_1800ff194_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff194_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ff194_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1800ff194_4:;
wr(s->r,512,1,(rd(s->u,19,4)<((U)UINT64_C(0x8))));
L_1800ff194_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),((U)UINT64_C(0x8)),4,1));
L_1800ff194_6:;
wr(s->u,23,4,(rd(s->u,19,4)-((U)UINT64_C(0x8))));
L_1800ff194_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff194_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1800ff194_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1800ff194_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1800ff194_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ff194_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ff194_13:;
/* 1800ff199: jne 0x1800ff231 */
L_1800ff199_0:;
L_1800ff199_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1800ff199_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1800ff231);}
L_1800ff199_3:;
return UINT64_C(0x1800ff19f);
}
uint64_t b_1800ff19f(CPU*s){
/* 1800ff19f: mov rbx, qword ptr [rsp + 0x38] */
L_1800ff19f_0:;
L_1800ff19f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff19f_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff19f_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1800ff19f_4:;
/* 1800ff1a4: lea rax, [rsp + 0x48] */
L_1800ff1a4_0:;
L_1800ff1a4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1800ff1a4_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1800ff1a4_3:;
/* 1800ff1a9: mov rdx, qword ptr [rax] */
L_1800ff1a9_0:;
L_1800ff1a9_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,0,8),8));
L_1800ff1a9_2:;
wr(s->r,16,8,rd(s->u,16,8));
L_1800ff1a9_3:;
/* 1800ff1ac: sub rbx, 0x18 */
L_1800ff1ac_0:;
L_1800ff1ac_1:;
wr(s->r,512,1,(rd(s->r,24,8)<((U)UINT64_C(0x18))));
L_1800ff1ac_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x18)),8,1));
L_1800ff1ac_3:;
wr(s->r,24,8,(rd(s->r,24,8)-((U)UINT64_C(0x18))));
L_1800ff1ac_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff1ac_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1800ff1ac_6:;
wr(s->u,25,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1800ff1ac_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1800ff1ac_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1800ff1ac_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1800ff1ac_10:;
/* 1800ff1b0: cmovs rbx, r14 */
L_1800ff1b0_0:;
L_1800ff1b0_1:;
wr(s->u,35,8,rd(s->r,176,8));
L_1800ff1b0_2:;
wr(s->u,43,1,(!rd(s->r,519,1)));
L_1800ff1b0_3:;
if(rd(s->u,43,1)){goto L_1800ff1b4_0;}
L_1800ff1b0_4:;
wr(s->r,24,8,rd(s->u,35,8));
L_1800ff1b0_5:;
/* 1800ff1b4: sub rdi, 0x18 */
L_1800ff1b4_0:;
L_1800ff1b4_1:;
wr(s->r,512,1,(rd(s->r,56,8)<((U)UINT64_C(0x18))));
L_1800ff1b4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x18)),8,1));
L_1800ff1b4_3:;
wr(s->r,56,8,(rd(s->r,56,8)-((U)UINT64_C(0x18))));
L_1800ff1b4_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff1b4_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1800ff1b4_6:;
wr(s->u,25,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1800ff1b4_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1800ff1b4_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1800ff1b4_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1800ff1b4_10:;
/* 1800ff1b8: mov qword ptr [rsp + 0x38], rbx */
L_1800ff1b8_0:;
L_1800ff1b8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff1b8_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ff1b8_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff1b8_4:;
/* 1800ff1bd: cmp rdx, qword ptr [r13] */
L_1800ff1bd_0:;
L_1800ff1bd_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,168,8),8));
L_1800ff1bd_2:;
wr(s->u,44,8,rd(s->u,16,8));
L_1800ff1bd_3:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,44,8)));
L_1800ff1bd_4:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,44,8),8,1));
L_1800ff1bd_5:;
wr(s->u,52,8,(rd(s->r,16,8)-rd(s->u,44,8)));
L_1800ff1bd_6:;
wr(s->r,519,1,(sx(rd(s->u,52,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff1bd_7:;
wr(s->r,518,1,(rd(s->u,52,8)==((U)UINT64_C(0x0))));
L_1800ff1bd_8:;
wr(s->u,25,8,(rd(s->u,52,8)&((U)UINT64_C(0xff))));
L_1800ff1bd_9:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1800ff1bd_10:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1800ff1bd_11:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1800ff1bd_12:;
/* 1800ff1c1: jne 0x1800ff1d2 */
L_1800ff1c1_0:;
L_1800ff1c1_1:;
wr(s->u,24,1,(!rd(s->r,518,1)));
L_1800ff1c1_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1800ff1d2);}
L_1800ff1c1_3:;
return UINT64_C(0x1800ff1c3);
}
uint64_t b_1800ff1b4(CPU*s){
/* 1800ff1b4: sub rdi, 0x18 */
L_1800ff1b4_0:;
L_1800ff1b4_1:;
wr(s->r,512,1,(rd(s->r,56,8)<((U)UINT64_C(0x18))));
L_1800ff1b4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x18)),8,1));
L_1800ff1b4_3:;
wr(s->r,56,8,(rd(s->r,56,8)-((U)UINT64_C(0x18))));
L_1800ff1b4_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff1b4_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1800ff1b4_6:;
wr(s->u,25,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1800ff1b4_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1800ff1b4_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1800ff1b4_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1800ff1b4_10:;
/* 1800ff1b8: mov qword ptr [rsp + 0x38], rbx */
L_1800ff1b8_0:;
L_1800ff1b8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff1b8_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ff1b8_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff1b8_4:;
/* 1800ff1bd: cmp rdx, qword ptr [r13] */
L_1800ff1bd_0:;
L_1800ff1bd_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,168,8),8));
L_1800ff1bd_2:;
wr(s->u,35,8,rd(s->u,16,8));
L_1800ff1bd_3:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,35,8)));
L_1800ff1bd_4:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,35,8),8,1));
L_1800ff1bd_5:;
wr(s->u,43,8,(rd(s->r,16,8)-rd(s->u,35,8)));
L_1800ff1bd_6:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff1bd_7:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1800ff1bd_8:;
wr(s->u,25,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1800ff1bd_9:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1800ff1bd_10:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1800ff1bd_11:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1800ff1bd_12:;
/* 1800ff1c1: jne 0x1800ff1d2 */
L_1800ff1c1_0:;
L_1800ff1c1_1:;
wr(s->u,24,1,(!rd(s->r,518,1)));
L_1800ff1c1_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1800ff1d2);}
L_1800ff1c1_3:;
return UINT64_C(0x1800ff1c3);
}
uint64_t b_1800ff1c3(CPU*s){
/* 1800ff1c3: mov rdx, qword ptr [rax + 8] */
L_1800ff1c3_0:;
L_1800ff1c3_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1800ff1c3_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff1c3_3:;
wr(s->r,16,8,rd(s->u,8,8));
L_1800ff1c3_4:;
/* 1800ff1c7: cmp rdx, qword ptr [r13 + 8] */
L_1800ff1c7_0:;
L_1800ff1c7_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0x8))));
L_1800ff1c7_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff1c7_3:;
wr(s->u,27,8,rd(s->u,8,8));
L_1800ff1c7_4:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,27,8)));
L_1800ff1c7_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,27,8),8,1));
L_1800ff1c7_6:;
wr(s->u,35,8,(rd(s->r,16,8)-rd(s->u,27,8)));
L_1800ff1c7_7:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff1c7_8:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1800ff1c7_9:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1800ff1c7_10:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1800ff1c7_11:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1800ff1c7_12:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1800ff1c7_13:;
/* 1800ff1cb: jne 0x1800ff1d2 */
L_1800ff1cb_0:;
L_1800ff1cb_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1800ff1cb_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1800ff1d2);}
L_1800ff1cb_3:;
return UINT64_C(0x1800ff1cd);
}
uint64_t b_1800ff1cd(CPU*s){
/* 1800ff1cd: mov eax, r14d */
L_1800ff1cd_0:;
L_1800ff1cd_1:;
wr(s->r,0,4,rd(s->r,176,4));
L_1800ff1cd_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff1cd_3:;
/* 1800ff1d0: jmp 0x1800ff1d7 */
L_1800ff1d0_0:;
L_1800ff1d0_1:;
return UINT64_C(0x1800ff1d7);
L_1800ff1d0_2:;
return UINT64_C(0x1800ff1d2);
}
uint64_t b_1800ff1d2(CPU*s){
/* 1800ff1d2: sbb eax, eax */
L_1800ff1d2_0:;
L_1800ff1d2_1:;
wr(s->u,0,4,rd(s->r,512,1));
L_1800ff1d2_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,0,4)));
L_1800ff1d2_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,0,4),4,1));
L_1800ff1d2_4:;
wr(s->u,4,4,(rd(s->r,0,4)-rd(s->r,0,4)));
L_1800ff1d2_5:;
wr(s->u,8,1,(rd(s->u,4,4)<rd(s->u,0,4)));
L_1800ff1d2_6:;
wr(s->r,512,1,((rd(s->r,512,1)!=0)||(rd(s->u,8,1)!=0)));
L_1800ff1d2_7:;
wr(s->u,9,1,signed_overflow(rd(s->u,4,4),rd(s->u,0,4),4,1));
L_1800ff1d2_8:;
wr(s->r,523,1,((rd(s->r,523,1)!=0)!=(rd(s->u,9,1)!=0)));
L_1800ff1d2_9:;
wr(s->r,0,4,(rd(s->u,4,4)-rd(s->u,0,4)));
L_1800ff1d2_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff1d2_11:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff1d2_12:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ff1d2_13:;
wr(s->u,10,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ff1d2_14:;
wr(s->u,14,1,pop(rd(s->u,10,4),4));
L_1800ff1d2_15:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_1800ff1d2_16:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_1800ff1d2_17:;
/* 1800ff1d4: sbb eax, -1 */
L_1800ff1d4_0:;
L_1800ff1d4_1:;
wr(s->u,0,4,rd(s->r,512,1));
L_1800ff1d4_2:;
wr(s->r,512,1,(rd(s->r,0,4)<((U)UINT64_C(0xffffffff))));
L_1800ff1d4_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0xffffffff)),4,1));
L_1800ff1d4_4:;
wr(s->u,4,4,(rd(s->r,0,4)-((U)UINT64_C(0xffffffff))));
L_1800ff1d4_5:;
wr(s->u,8,1,(rd(s->u,4,4)<rd(s->u,0,4)));
L_1800ff1d4_6:;
wr(s->r,512,1,((rd(s->r,512,1)!=0)||(rd(s->u,8,1)!=0)));
L_1800ff1d4_7:;
wr(s->u,9,1,signed_overflow(rd(s->u,4,4),rd(s->u,0,4),4,1));
L_1800ff1d4_8:;
wr(s->r,523,1,((rd(s->r,523,1)!=0)!=(rd(s->u,9,1)!=0)));
L_1800ff1d4_9:;
wr(s->r,0,4,(rd(s->u,4,4)-rd(s->u,0,4)));
L_1800ff1d4_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff1d4_11:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff1d4_12:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ff1d4_13:;
wr(s->u,10,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ff1d4_14:;
wr(s->u,14,1,pop(rd(s->u,10,4),4));
L_1800ff1d4_15:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_1800ff1d4_16:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_1800ff1d4_17:;
/* 1800ff1d7: test eax, eax */
L_1800ff1d7_0:;
L_1800ff1d7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff1d7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff1d7_3:;
wr(s->u,16,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff1d7_4:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff1d7_5:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_1800ff1d7_6:;
wr(s->u,10,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_1800ff1d7_7:;
wr(s->u,14,1,pop(rd(s->u,10,4),4));
L_1800ff1d7_8:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_1800ff1d7_9:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_1800ff1d7_10:;
/* 1800ff1d9: je 0x1800ff21c */
L_1800ff1d9_0:;
L_1800ff1d9_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff21c);}
L_1800ff1d9_2:;
return UINT64_C(0x1800ff1db);
}
uint64_t b_1800ff1d7(CPU*s){
/* 1800ff1d7: test eax, eax */
L_1800ff1d7_0:;
L_1800ff1d7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff1d7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff1d7_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff1d7_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff1d7_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1800ff1d7_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1800ff1d7_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800ff1d7_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800ff1d7_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800ff1d7_10:;
/* 1800ff1d9: je 0x1800ff21c */
L_1800ff1d9_0:;
L_1800ff1d9_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff21c);}
L_1800ff1d9_2:;
return UINT64_C(0x1800ff1db);
}
uint64_t b_1800ff1db(CPU*s){
/* 1800ff1db: mov rax, rbx */
L_1800ff1db_0:;
L_1800ff1db_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1800ff1db_2:;
/* 1800ff1de: and eax, 7 */
L_1800ff1de_0:;
L_1800ff1de_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff1de_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff1de_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x7))));
L_1800ff1de_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff1de_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff1de_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ff1de_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ff1de_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800ff1de_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800ff1de_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800ff1de_11:;
/* 1800ff1e1: je 0x1800ff1ea */
L_1800ff1e1_0:;
L_1800ff1e1_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff1ea);}
L_1800ff1e1_2:;
return UINT64_C(0x1800ff1e3);
}
uint64_t b_1800ff1e3(CPU*s){
/* 1800ff1e3: sub rbx, rax */
L_1800ff1e3_0:;
L_1800ff1e3_1:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->r,0,8)));
L_1800ff1e3_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->r,0,8),8,1));
L_1800ff1e3_3:;
wr(s->r,24,8,(rd(s->r,24,8)-rd(s->r,0,8)));
L_1800ff1e3_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff1e3_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1800ff1e3_6:;
wr(s->u,16,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1800ff1e3_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff1e3_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff1e3_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff1e3_10:;
/* 1800ff1e6: add rbx, 8 */
L_1800ff1e6_0:;
L_1800ff1e6_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1800ff1e6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x8)),8,0));
L_1800ff1e6_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1800ff1e6_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff1e6_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1800ff1e6_6:;
wr(s->u,16,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1800ff1e6_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff1e6_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff1e6_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff1e6_10:;
/* 1800ff1ea: lea r8, [rsp + 0x44] */
L_1800ff1ea_0:;
L_1800ff1ea_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1800ff1ea_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ff1ea_3:;
/* 1800ff1ef: mov r9d, 1 */
L_1800ff1ef_0:;
L_1800ff1ef_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1800ff1ef_2:;
/* 1800ff1f5: mov edx, ebx */
L_1800ff1f5_0:;
L_1800ff1f5_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1800ff1f5_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff1f5_3:;
/* 1800ff1f7: mov rcx, rbp */
L_1800ff1f7_0:;
L_1800ff1f7_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1800ff1f7_2:;
/* 1800ff1fa: mov qword ptr [rsp + 0x40], rbx */
L_1800ff1fa_0:;
L_1800ff1fa_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff1fa_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ff1fa_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff1fa_4:;
/* 1800ff1ff: call qword ptr [rip + 0x5496eb] */
L_1800ff1ff_0:;
L_1800ff1ff_1:;
wr(s->u,26,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff1ff_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff1ff_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff205)));
L_1800ff1ff_4:;
return (uint64_t)rd(s->u,26,8);
L_1800ff1ff_5:;
return UINT64_C(0x1800ff205);
}
uint64_t b_1800ff1ea(CPU*s){
/* 1800ff1ea: lea r8, [rsp + 0x44] */
L_1800ff1ea_0:;
L_1800ff1ea_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1800ff1ea_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ff1ea_3:;
/* 1800ff1ef: mov r9d, 1 */
L_1800ff1ef_0:;
L_1800ff1ef_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1800ff1ef_2:;
/* 1800ff1f5: mov edx, ebx */
L_1800ff1f5_0:;
L_1800ff1f5_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1800ff1f5_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff1f5_3:;
/* 1800ff1f7: mov rcx, rbp */
L_1800ff1f7_0:;
L_1800ff1f7_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1800ff1f7_2:;
/* 1800ff1fa: mov qword ptr [rsp + 0x40], rbx */
L_1800ff1fa_0:;
L_1800ff1fa_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff1fa_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ff1fa_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff1fa_4:;
/* 1800ff1ff: call qword ptr [rip + 0x5496eb] */
L_1800ff1ff_0:;
L_1800ff1ff_1:;
wr(s->u,16,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff1ff_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff1ff_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff205)));
L_1800ff1ff_4:;
return (uint64_t)rd(s->u,16,8);
L_1800ff1ff_5:;
return UINT64_C(0x1800ff205);
}
uint64_t b_1800ff205(CPU*s){
/* 1800ff205: mov qword ptr [rsp + 0x38], rbx */
L_1800ff205_0:;
L_1800ff205_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff205_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ff205_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff205_4:;
/* 1800ff20a: sub rdi, rbx */
L_1800ff20a_0:;
L_1800ff20a_1:;
wr(s->r,512,1,(rd(s->r,56,8)<rd(s->r,24,8)));
L_1800ff20a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),rd(s->r,24,8),8,1));
L_1800ff20a_3:;
wr(s->r,56,8,(rd(s->r,56,8)-rd(s->r,24,8)));
L_1800ff20a_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff20a_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1800ff20a_6:;
wr(s->u,16,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1800ff20a_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff20a_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff20a_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff20a_10:;
/* 1800ff20d: jmp 0x1800ff130 */
L_1800ff20d_0:;
L_1800ff20d_1:;
return UINT64_C(0x1800ff130);
L_1800ff20d_2:;
return UINT64_C(0x1800ff212);
}
uint64_t b_1800ff212(CPU*s){
/* 1800ff212: mov qword ptr [rsi], rdi */
L_1800ff212_0:;
L_1800ff212_1:;
wr(s->u,0,8,rd(s->r,56,8));
L_1800ff212_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,0,8));
L_1800ff212_3:;
/* 1800ff215: mov eax, 0x8004e00a */
L_1800ff215_0:;
L_1800ff215_1:;
wr(s->r,0,8,((U)UINT64_C(0x8004e00a)));
L_1800ff215_2:;
/* 1800ff21a: jmp 0x1800ff236 */
L_1800ff21a_0:;
L_1800ff21a_1:;
return UINT64_C(0x1800ff236);
L_1800ff21a_2:;
return UINT64_C(0x1800ff21c);
}
uint64_t b_1800ff21c(CPU*s){
/* 1800ff21c: test r12, r12 */
L_1800ff21c_0:;
L_1800ff21c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff21c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff21c_3:;
wr(s->u,10,8,(rd(s->r,160,8)&rd(s->r,160,8)));
L_1800ff21c_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff21c_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800ff21c_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800ff21c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ff21c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff21c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff21c_10:;
/* 1800ff21f: je 0x1800ff225 */
L_1800ff21f_0:;
L_1800ff21f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff225);}
L_1800ff21f_2:;
return UINT64_C(0x1800ff221);
}
uint64_t b_1800ff221(CPU*s){
/* 1800ff221: mov qword ptr [r12], rbx */
L_1800ff221_0:;
L_1800ff221_1:;
wr(s->u,0,8,rd(s->r,24,8));
L_1800ff221_2:;
mw((uint64_t)rd(s->r,160,8),8,rd(s->u,0,8));
L_1800ff221_3:;
/* 1800ff225: test rsi, rsi */
L_1800ff225_0:;
L_1800ff225_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff225_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff225_3:;
wr(s->u,18,8,(rd(s->r,48,8)&rd(s->r,48,8)));
L_1800ff225_4:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff225_5:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1800ff225_6:;
wr(s->u,8,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1800ff225_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1800ff225_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1800ff225_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1800ff225_10:;
/* 1800ff228: je 0x1800ff22d */
L_1800ff228_0:;
L_1800ff228_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff22d);}
L_1800ff228_2:;
return UINT64_C(0x1800ff22a);
}
uint64_t b_1800ff225(CPU*s){
/* 1800ff225: test rsi, rsi */
L_1800ff225_0:;
L_1800ff225_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff225_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff225_3:;
wr(s->u,10,8,(rd(s->r,48,8)&rd(s->r,48,8)));
L_1800ff225_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff225_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800ff225_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800ff225_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ff225_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff225_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff225_10:;
/* 1800ff228: je 0x1800ff22d */
L_1800ff228_0:;
L_1800ff228_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff22d);}
L_1800ff228_2:;
return UINT64_C(0x1800ff22a);
}
uint64_t b_1800ff22a(CPU*s){
/* 1800ff22a: mov qword ptr [rsi], rdi */
L_1800ff22a_0:;
L_1800ff22a_1:;
wr(s->u,0,8,rd(s->r,56,8));
L_1800ff22a_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,0,8));
L_1800ff22a_3:;
/* 1800ff22d: xor eax, eax */
L_1800ff22d_0:;
L_1800ff22d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff22d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff22d_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1800ff22d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff22d_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff22d_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ff22d_7:;
wr(s->u,8,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ff22d_8:;
wr(s->u,12,1,pop(rd(s->u,8,4),4));
L_1800ff22d_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1800ff22d_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1800ff22d_11:;
/* 1800ff22f: jmp 0x1800ff236 */
L_1800ff22f_0:;
L_1800ff22f_1:;
return UINT64_C(0x1800ff236);
L_1800ff22f_2:;
return UINT64_C(0x1800ff231);
}
uint64_t b_1800ff22d(CPU*s){
/* 1800ff22d: xor eax, eax */
L_1800ff22d_0:;
L_1800ff22d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff22d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff22d_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1800ff22d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff22d_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff22d_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ff22d_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ff22d_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800ff22d_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800ff22d_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800ff22d_11:;
/* 1800ff22f: jmp 0x1800ff236 */
L_1800ff22f_0:;
L_1800ff22f_1:;
return UINT64_C(0x1800ff236);
L_1800ff22f_2:;
return UINT64_C(0x1800ff231);
}
uint64_t b_1800ff231(CPU*s){
/* 1800ff231: mov eax, 0x8004e008 */
L_1800ff231_0:;
L_1800ff231_1:;
wr(s->r,0,8,((U)UINT64_C(0x8004e008)));
L_1800ff231_2:;
/* 1800ff236: mov rbx, qword ptr [rsp + 0x60] */
L_1800ff236_0:;
L_1800ff236_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1800ff236_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff236_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1800ff236_4:;
/* 1800ff23b: mov rcx, qword ptr [rsp + 0x58] */
L_1800ff23b_0:;
L_1800ff23b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1800ff23b_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff23b_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800ff23b_4:;
/* 1800ff240: xor rcx, rsp */
L_1800ff240_0:;
L_1800ff240_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff240_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff240_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800ff240_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff240_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ff240_6:;
wr(s->u,16,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ff240_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff240_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff240_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff240_10:;
/* 1800ff243: call 0x18000d680 */
L_1800ff243_0:;
L_1800ff243_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff243_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff248)));
L_1800ff243_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800ff243_4:;
return UINT64_C(0x1800ff248);
}
uint64_t b_1800ff236(CPU*s){
/* 1800ff236: mov rbx, qword ptr [rsp + 0x60] */
L_1800ff236_0:;
L_1800ff236_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1800ff236_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff236_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1800ff236_4:;
/* 1800ff23b: mov rcx, qword ptr [rsp + 0x58] */
L_1800ff23b_0:;
L_1800ff23b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1800ff23b_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff23b_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800ff23b_4:;
/* 1800ff240: xor rcx, rsp */
L_1800ff240_0:;
L_1800ff240_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff240_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff240_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800ff240_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff240_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ff240_6:;
wr(s->u,16,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ff240_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff240_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff240_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff240_10:;
/* 1800ff243: call 0x18000d680 */
L_1800ff243_0:;
L_1800ff243_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff243_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff248)));
L_1800ff243_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800ff243_4:;
return UINT64_C(0x1800ff248);
}
uint64_t b_1800ff248(CPU*s){
/* 1800ff248: add rsp, 0x68 */
L_1800ff248_0:;
L_1800ff248_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x68)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1800ff248_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x68)),8,0));
L_1800ff248_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x68))));
L_1800ff248_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff248_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800ff248_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800ff248_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ff248_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff248_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff248_10:;
/* 1800ff24c: pop r14 */
L_1800ff24c_0:;
L_1800ff24c_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ff24c_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff24c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff24c_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1800ff24c_5:;
/* 1800ff24e: pop r13 */
L_1800ff24e_0:;
L_1800ff24e_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ff24e_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff24e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff24e_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1800ff24e_5:;
/* 1800ff250: pop r12 */
L_1800ff250_0:;
L_1800ff250_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ff250_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff250_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff250_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1800ff250_5:;
/* 1800ff252: pop rdi */
L_1800ff252_0:;
L_1800ff252_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ff252_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff252_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff252_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1800ff252_5:;
/* 1800ff253: pop rsi */
L_1800ff253_0:;
L_1800ff253_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ff253_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff253_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff253_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1800ff253_5:;
/* 1800ff254: pop rbp */
L_1800ff254_0:;
L_1800ff254_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ff254_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff254_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff254_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1800ff254_5:;
/* 1800ff255: ret  */
L_1800ff255_0:;
L_1800ff255_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff255_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff255_3:;
return (uint64_t)rd(s->r,648,8);
L_1800ff255_4:;
return UINT64_C(0x1800ff256);
}
uint64_t b_1800ff260(CPU*s){
/* 1800ff260: mov qword ptr [rsp + 0x10], rbx */
L_1800ff260_0:;
L_1800ff260_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1800ff260_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ff260_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff260_4:;
/* 1800ff265: push rbp */
L_1800ff265_0:;
L_1800ff265_1:;
wr(s->u,16,8,rd(s->r,40,8));
L_1800ff265_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff265_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1800ff265_4:;
/* 1800ff266: push rsi */
L_1800ff266_0:;
L_1800ff266_1:;
wr(s->u,16,8,rd(s->r,48,8));
L_1800ff266_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff266_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1800ff266_4:;
/* 1800ff267: push rdi */
L_1800ff267_0:;
L_1800ff267_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1800ff267_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff267_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1800ff267_4:;
/* 1800ff268: sub rsp, 0x50 */
L_1800ff268_0:;
L_1800ff268_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x50))));
L_1800ff268_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,1));
L_1800ff268_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x50))));
L_1800ff268_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff268_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800ff268_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800ff268_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff268_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff268_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff268_10:;
/* 1800ff26c: mov rax, qword ptr [rip + 0x84fb65] */
L_1800ff26c_0:;
L_1800ff26c_1:;
wr(s->r,0,8,mr(UINT64_C(0x18094edd8),8));
L_1800ff26c_2:;
/* 1800ff273: xor rax, rsp */
L_1800ff273_0:;
L_1800ff273_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff273_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff273_3:;
wr(s->r,0,8,(rd(s->r,0,8)^rd(s->r,32,8)));
L_1800ff273_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff273_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1800ff273_6:;
wr(s->u,24,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1800ff273_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff273_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff273_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff273_10:;
/* 1800ff276: mov qword ptr [rsp + 0x40], rax */
L_1800ff276_0:;
L_1800ff276_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff276_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800ff276_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff276_4:;
/* 1800ff27b: mov rbx, r9 */
L_1800ff27b_0:;
L_1800ff27b_1:;
wr(s->r,24,8,rd(s->r,136,8));
L_1800ff27b_2:;
/* 1800ff27e: mov rdi, r8 */
L_1800ff27e_0:;
L_1800ff27e_1:;
wr(s->r,56,8,rd(s->r,128,8));
L_1800ff27e_2:;
/* 1800ff281: mov rsi, rdx */
L_1800ff281_0:;
L_1800ff281_1:;
wr(s->r,48,8,rd(s->r,16,8));
L_1800ff281_2:;
/* 1800ff284: xor r9d, r9d */
L_1800ff284_0:;
L_1800ff284_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff284_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff284_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1800ff284_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800ff284_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff284_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1800ff284_7:;
wr(s->u,24,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1800ff284_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1800ff284_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff284_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff284_11:;
/* 1800ff287: xor r8d, r8d */
L_1800ff287_0:;
L_1800ff287_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff287_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff287_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1800ff287_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1800ff287_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff287_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1800ff287_7:;
wr(s->u,24,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1800ff287_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1800ff287_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff287_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff287_11:;
/* 1800ff28a: xor edx, edx */
L_1800ff28a_0:;
L_1800ff28a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff28a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff28a_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1800ff28a_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff28a_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff28a_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1800ff28a_7:;
wr(s->u,24,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1800ff28a_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1800ff28a_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff28a_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff28a_11:;
/* 1800ff28c: mov rbp, rcx */
L_1800ff28c_0:;
L_1800ff28c_1:;
wr(s->r,40,8,rd(s->r,8,8));
L_1800ff28c_2:;
/* 1800ff28f: call qword ptr [rip + 0x54965b] */
L_1800ff28f_0:;
L_1800ff28f_1:;
wr(s->u,34,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff28f_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff28f_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff295)));
L_1800ff28f_4:;
return (uint64_t)rd(s->u,34,8);
L_1800ff28f_5:;
return UINT64_C(0x1800ff295);
}
uint64_t b_1800ff295(CPU*s){
/* 1800ff295: lea r8, [rsp + 0x30] */
L_1800ff295_0:;
L_1800ff295_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff295_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ff295_3:;
/* 1800ff29a: lea rdx, [rsp + 0x20] */
L_1800ff29a_0:;
L_1800ff29a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ff29a_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1800ff29a_3:;
/* 1800ff29f: mov rcx, rbp */
L_1800ff29f_0:;
L_1800ff29f_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1800ff29f_2:;
/* 1800ff2a2: call 0x1800fe790 */
L_1800ff2a2_0:;
L_1800ff2a2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff2a2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff2a7)));
L_1800ff2a2_3:;
return (uint64_t)UINT64_C(0x1800fe790);
L_1800ff2a2_4:;
return UINT64_C(0x1800ff2a7);
}
uint64_t b_1800ff2a7(CPU*s){
/* 1800ff2a7: test eax, eax */
L_1800ff2a7_0:;
L_1800ff2a7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff2a7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff2a7_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff2a7_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff2a7_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1800ff2a7_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1800ff2a7_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800ff2a7_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800ff2a7_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800ff2a7_10:;
/* 1800ff2a9: js 0x1800ff316 */
L_1800ff2a9_0:;
L_1800ff2a9_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1800ff316);}
L_1800ff2a9_2:;
return UINT64_C(0x1800ff2ab);
}
uint64_t b_1800ff2ab(CPU*s){
/* 1800ff2ab: mov rax, qword ptr [rsp + 0x20] */
L_1800ff2ab_0:;
L_1800ff2ab_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ff2ab_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1800ff2ab_3:;
wr(s->r,0,8,rd(s->u,32,8));
L_1800ff2ab_4:;
/* 1800ff2b0: lea rcx, [rsp + 0x30] */
L_1800ff2b0_0:;
L_1800ff2b0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff2b0_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800ff2b0_3:;
/* 1800ff2b5: lea r9, [rsp + 0x20] */
L_1800ff2b5_0:;
L_1800ff2b5_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ff2b5_2:;
wr(s->r,136,8,rd(s->u,8,8));
L_1800ff2b5_3:;
/* 1800ff2ba: mov qword ptr [rsp + 0x20], rax */
L_1800ff2ba_0:;
L_1800ff2ba_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ff2ba_2:;
wr(s->u,20,8,rd(s->r,0,8));
L_1800ff2ba_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1800ff2ba_4:;
/* 1800ff2bf: mov eax, dword ptr [rsi] */
L_1800ff2bf_0:;
L_1800ff2bf_1:;
wr(s->u,28,4,mr((uint64_t)rd(s->r,48,8),4));
L_1800ff2bf_2:;
wr(s->r,0,4,rd(s->u,28,4));
L_1800ff2bf_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff2bf_4:;
/* 1800ff2c1: lea r8, [rsp + 0x28] */
L_1800ff2c1_0:;
L_1800ff2c1_1:;
wr(s->u,8,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1800ff2c1_2:;
wr(s->r,128,8,rd(s->u,8,8));
L_1800ff2c1_3:;
/* 1800ff2c6: mov dword ptr [rcx], eax */
L_1800ff2c6_0:;
L_1800ff2c6_1:;
wr(s->u,16,4,rd(s->r,0,4));
L_1800ff2c6_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,16,4));
L_1800ff2c6_3:;
/* 1800ff2c8: mov eax, dword ptr [rsi + 4] */
L_1800ff2c8_0:;
L_1800ff2c8_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x4))));
L_1800ff2c8_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ff2c8_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1800ff2c8_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff2c8_5:;
/* 1800ff2cb: lea rdx, [rsp + 0x30] */
L_1800ff2cb_0:;
L_1800ff2cb_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff2cb_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1800ff2cb_3:;
/* 1800ff2d0: mov dword ptr [rcx + 4], eax */
L_1800ff2d0_0:;
L_1800ff2d0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1800ff2d0_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1800ff2d0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1800ff2d0_4:;
/* 1800ff2d3: mov eax, dword ptr [rsi + 8] */
L_1800ff2d3_0:;
L_1800ff2d3_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x8))));
L_1800ff2d3_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ff2d3_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1800ff2d3_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff2d3_5:;
/* 1800ff2d6: mov dword ptr [rcx + 8], eax */
L_1800ff2d6_0:;
L_1800ff2d6_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1800ff2d6_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1800ff2d6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1800ff2d6_4:;
/* 1800ff2d9: mov eax, dword ptr [rsi + 0xc] */
L_1800ff2d9_0:;
L_1800ff2d9_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xc))));
L_1800ff2d9_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ff2d9_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1800ff2d9_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff2d9_5:;
/* 1800ff2dc: mov dword ptr [rcx + 0xc], eax */
L_1800ff2dc_0:;
L_1800ff2dc_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1800ff2dc_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1800ff2dc_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1800ff2dc_4:;
/* 1800ff2df: mov rcx, rbp */
L_1800ff2df_0:;
L_1800ff2df_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1800ff2df_2:;
/* 1800ff2e2: call 0x1800ff0f0 */
L_1800ff2e2_0:;
L_1800ff2e2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff2e2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff2e7)));
L_1800ff2e2_3:;
return (uint64_t)UINT64_C(0x1800ff0f0);
L_1800ff2e2_4:;
return UINT64_C(0x1800ff2e7);
}
uint64_t b_1800ff2e7(CPU*s){
/* 1800ff2e7: test eax, eax */
L_1800ff2e7_0:;
L_1800ff2e7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff2e7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff2e7_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff2e7_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff2e7_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1800ff2e7_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1800ff2e7_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1800ff2e7_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1800ff2e7_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1800ff2e7_10:;
/* 1800ff2e9: jns 0x1800ff2fa */
L_1800ff2e9_0:;
L_1800ff2e9_1:;
wr(s->u,0,1,(!rd(s->r,519,1)));
L_1800ff2e9_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800ff2fa);}
L_1800ff2e9_3:;
return UINT64_C(0x1800ff2eb);
}
uint64_t b_1800ff2eb(CPU*s){
/* 1800ff2eb: test rbx, rbx */
L_1800ff2eb_0:;
L_1800ff2eb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff2eb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff2eb_3:;
wr(s->u,10,8,(rd(s->r,24,8)&rd(s->r,24,8)));
L_1800ff2eb_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff2eb_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800ff2eb_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800ff2eb_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ff2eb_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff2eb_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff2eb_10:;
/* 1800ff2ee: je 0x1800ff316 */
L_1800ff2ee_0:;
L_1800ff2ee_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff316);}
L_1800ff2ee_2:;
return UINT64_C(0x1800ff2f0);
}
uint64_t b_1800ff2f0(CPU*s){
/* 1800ff2f0: mov rcx, qword ptr [rsp + 0x20] */
L_1800ff2f0_0:;
L_1800ff2f0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ff2f0_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff2f0_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1800ff2f0_4:;
/* 1800ff2f5: mov qword ptr [rbx], rcx */
L_1800ff2f5_0:;
L_1800ff2f5_1:;
wr(s->u,8,8,rd(s->r,8,8));
L_1800ff2f5_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,8,8));
L_1800ff2f5_3:;
/* 1800ff2f8: jmp 0x1800ff316 */
L_1800ff2f8_0:;
L_1800ff2f8_1:;
return UINT64_C(0x1800ff316);
L_1800ff2f8_2:;
return UINT64_C(0x1800ff2fa);
}
uint64_t b_1800ff2fa(CPU*s){
/* 1800ff2fa: test rdi, rdi */
L_1800ff2fa_0:;
L_1800ff2fa_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff2fa_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff2fa_3:;
wr(s->u,10,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1800ff2fa_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff2fa_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800ff2fa_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800ff2fa_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ff2fa_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff2fa_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff2fa_10:;
/* 1800ff2fd: je 0x1800ff307 */
L_1800ff2fd_0:;
L_1800ff2fd_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff307);}
L_1800ff2fd_2:;
return UINT64_C(0x1800ff2ff);
}
uint64_t b_1800ff2ff(CPU*s){
/* 1800ff2ff: mov rax, qword ptr [rsp + 0x28] */
L_1800ff2ff_0:;
L_1800ff2ff_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1800ff2ff_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff2ff_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1800ff2ff_4:;
/* 1800ff304: mov qword ptr [rdi], rax */
L_1800ff304_0:;
L_1800ff304_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800ff304_2:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,8,8));
L_1800ff304_3:;
/* 1800ff307: test rbx, rbx */
L_1800ff307_0:;
L_1800ff307_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff307_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff307_3:;
wr(s->u,34,8,(rd(s->r,24,8)&rd(s->r,24,8)));
L_1800ff307_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff307_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1800ff307_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1800ff307_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff307_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff307_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff307_10:;
/* 1800ff30a: je 0x1800ff314 */
L_1800ff30a_0:;
L_1800ff30a_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff314);}
L_1800ff30a_2:;
return UINT64_C(0x1800ff30c);
}
uint64_t b_1800ff307(CPU*s){
/* 1800ff307: test rbx, rbx */
L_1800ff307_0:;
L_1800ff307_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff307_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff307_3:;
wr(s->u,10,8,(rd(s->r,24,8)&rd(s->r,24,8)));
L_1800ff307_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff307_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800ff307_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800ff307_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ff307_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff307_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff307_10:;
/* 1800ff30a: je 0x1800ff314 */
L_1800ff30a_0:;
L_1800ff30a_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff314);}
L_1800ff30a_2:;
return UINT64_C(0x1800ff30c);
}
uint64_t b_1800ff30c(CPU*s){
/* 1800ff30c: mov rax, qword ptr [rsp + 0x20] */
L_1800ff30c_0:;
L_1800ff30c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ff30c_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff30c_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1800ff30c_4:;
/* 1800ff311: mov qword ptr [rbx], rax */
L_1800ff311_0:;
L_1800ff311_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800ff311_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,8,8));
L_1800ff311_3:;
/* 1800ff314: xor eax, eax */
L_1800ff314_0:;
L_1800ff314_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff314_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff314_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1800ff314_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff314_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff314_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ff314_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ff314_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1800ff314_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff314_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff314_11:;
/* 1800ff316: mov rcx, qword ptr [rsp + 0x40] */
L_1800ff316_0:;
L_1800ff316_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff316_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff316_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1800ff316_4:;
/* 1800ff31b: xor rcx, rsp */
L_1800ff31b_0:;
L_1800ff31b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff31b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff31b_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800ff31b_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff31b_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ff31b_6:;
wr(s->u,24,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ff31b_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff31b_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff31b_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff31b_10:;
/* 1800ff31e: call 0x18000d680 */
L_1800ff31e_0:;
L_1800ff31e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff31e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff323)));
L_1800ff31e_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800ff31e_4:;
return UINT64_C(0x1800ff323);
}
uint64_t b_1800ff314(CPU*s){
/* 1800ff314: xor eax, eax */
L_1800ff314_0:;
L_1800ff314_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff314_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff314_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1800ff314_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff314_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff314_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ff314_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ff314_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1800ff314_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff314_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff314_11:;
/* 1800ff316: mov rcx, qword ptr [rsp + 0x40] */
L_1800ff316_0:;
L_1800ff316_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff316_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff316_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800ff316_4:;
/* 1800ff31b: xor rcx, rsp */
L_1800ff31b_0:;
L_1800ff31b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff31b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff31b_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800ff31b_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff31b_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ff31b_6:;
wr(s->u,16,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ff31b_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff31b_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff31b_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff31b_10:;
/* 1800ff31e: call 0x18000d680 */
L_1800ff31e_0:;
L_1800ff31e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff31e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff323)));
L_1800ff31e_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800ff31e_4:;
return UINT64_C(0x1800ff323);
}
uint64_t b_1800ff316(CPU*s){
/* 1800ff316: mov rcx, qword ptr [rsp + 0x40] */
L_1800ff316_0:;
L_1800ff316_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff316_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff316_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800ff316_4:;
/* 1800ff31b: xor rcx, rsp */
L_1800ff31b_0:;
L_1800ff31b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff31b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff31b_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800ff31b_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff31b_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ff31b_6:;
wr(s->u,16,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ff31b_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff31b_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff31b_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff31b_10:;
/* 1800ff31e: call 0x18000d680 */
L_1800ff31e_0:;
L_1800ff31e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff31e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff323)));
L_1800ff31e_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800ff31e_4:;
return UINT64_C(0x1800ff323);
}
uint64_t b_1800ff323(CPU*s){
/* 1800ff323: mov rbx, qword ptr [rsp + 0x78] */
L_1800ff323_0:;
L_1800ff323_1:;
wr(s->u,0,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1800ff323_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff323_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1800ff323_4:;
/* 1800ff328: add rsp, 0x50 */
L_1800ff328_0:;
L_1800ff328_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1800ff328_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1800ff328_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1800ff328_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff328_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800ff328_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800ff328_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff328_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff328_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff328_10:;
/* 1800ff32c: pop rdi */
L_1800ff32c_0:;
L_1800ff32c_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800ff32c_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff32c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff32c_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1800ff32c_5:;
/* 1800ff32d: pop rsi */
L_1800ff32d_0:;
L_1800ff32d_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800ff32d_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff32d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff32d_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1800ff32d_5:;
/* 1800ff32e: pop rbp */
L_1800ff32e_0:;
L_1800ff32e_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800ff32e_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff32e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff32e_4:;
wr(s->r,40,8,rd(s->u,26,8));
L_1800ff32e_5:;
/* 1800ff32f: ret  */
L_1800ff32f_0:;
L_1800ff32f_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff32f_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff32f_3:;
return (uint64_t)rd(s->r,648,8);
L_1800ff32f_4:;
return UINT64_C(0x1800ff330);
}
uint64_t b_1800ff340(CPU*s){
/* 1800ff340: mov qword ptr [rsp + 0x10], rbx */
L_1800ff340_0:;
L_1800ff340_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1800ff340_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1800ff340_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1800ff340_4:;
/* 1800ff345: push rbp */
L_1800ff345_0:;
L_1800ff345_1:;
wr(s->u,24,8,rd(s->r,40,8));
L_1800ff345_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff345_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1800ff345_4:;
/* 1800ff346: push rsi */
L_1800ff346_0:;
L_1800ff346_1:;
wr(s->u,24,8,rd(s->r,48,8));
L_1800ff346_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff346_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1800ff346_4:;
/* 1800ff347: push rdi */
L_1800ff347_0:;
L_1800ff347_1:;
wr(s->u,24,8,rd(s->r,56,8));
L_1800ff347_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff347_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1800ff347_4:;
/* 1800ff348: push r12 */
L_1800ff348_0:;
L_1800ff348_1:;
wr(s->u,24,8,rd(s->r,160,8));
L_1800ff348_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff348_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1800ff348_4:;
/* 1800ff34a: push r13 */
L_1800ff34a_0:;
L_1800ff34a_1:;
wr(s->u,24,8,rd(s->r,168,8));
L_1800ff34a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff34a_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1800ff34a_4:;
/* 1800ff34c: sub rsp, 0x80 */
L_1800ff34c_0:;
L_1800ff34c_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x80))));
L_1800ff34c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x80)),8,1));
L_1800ff34c_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x80))));
L_1800ff34c_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff34c_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800ff34c_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800ff34c_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1800ff34c_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1800ff34c_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1800ff34c_10:;
/* 1800ff353: mov rax, qword ptr [rip + 0x84fa7e] */
L_1800ff353_0:;
L_1800ff353_1:;
wr(s->r,0,8,mr(UINT64_C(0x18094edd8),8));
L_1800ff353_2:;
/* 1800ff35a: xor rax, rsp */
L_1800ff35a_0:;
L_1800ff35a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff35a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff35a_3:;
wr(s->r,0,8,(rd(s->r,0,8)^rd(s->r,32,8)));
L_1800ff35a_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff35a_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1800ff35a_6:;
wr(s->u,32,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1800ff35a_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1800ff35a_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1800ff35a_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1800ff35a_10:;
/* 1800ff35d: mov qword ptr [rsp + 0x70], rax */
L_1800ff35d_0:;
L_1800ff35d_1:;
wr(s->u,8,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1800ff35d_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_1800ff35d_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1800ff35d_4:;
/* 1800ff362: mov rax, qword ptr [rip + 0x559cc7] */
L_1800ff362_0:;
L_1800ff362_1:;
wr(s->r,0,8,mr(UINT64_C(0x180659030),8));
L_1800ff362_2:;
/* 1800ff369: mov rsi, rcx */
L_1800ff369_0:;
L_1800ff369_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1800ff369_2:;
/* 1800ff36c: lea rcx, [rsp + 0x50] */
L_1800ff36c_0:;
L_1800ff36c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1800ff36c_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800ff36c_3:;
/* 1800ff371: mov qword ptr [rcx], rax */
L_1800ff371_0:;
L_1800ff371_1:;
wr(s->u,16,8,rd(s->r,0,8));
L_1800ff371_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,16,8));
L_1800ff371_3:;
/* 1800ff374: mov rax, qword ptr [rip + 0x559cbd] */
L_1800ff374_0:;
L_1800ff374_1:;
wr(s->r,0,8,mr(UINT64_C(0x180659038),8));
L_1800ff374_2:;
/* 1800ff37b: mov r12, r8 */
L_1800ff37b_0:;
L_1800ff37b_1:;
wr(s->r,160,8,rd(s->r,128,8));
L_1800ff37b_2:;
/* 1800ff37e: mov rbp, rdx */
L_1800ff37e_0:;
L_1800ff37e_1:;
wr(s->r,40,8,rd(s->r,16,8));
L_1800ff37e_2:;
/* 1800ff381: mov qword ptr [rcx + 8], rax */
L_1800ff381_0:;
L_1800ff381_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1800ff381_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_1800ff381_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1800ff381_4:;
/* 1800ff385: lea r8, [rsp + 0x30] */
L_1800ff385_0:;
L_1800ff385_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff385_2:;
wr(s->r,128,8,rd(s->u,8,8));
L_1800ff385_3:;
/* 1800ff38a: lea rdx, [rsp + 0x50] */
L_1800ff38a_0:;
L_1800ff38a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1800ff38a_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1800ff38a_3:;
/* 1800ff38f: mov rcx, rsi */
L_1800ff38f_0:;
L_1800ff38f_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1800ff38f_2:;
/* 1800ff392: mov rbx, r9 */
L_1800ff392_0:;
L_1800ff392_1:;
wr(s->r,24,8,rd(s->r,136,8));
L_1800ff392_2:;
/* 1800ff395: call 0x1800ff0f0 */
L_1800ff395_0:;
L_1800ff395_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff395_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff39a)));
L_1800ff395_3:;
return (uint64_t)UINT64_C(0x1800ff0f0);
L_1800ff395_4:;
return UINT64_C(0x1800ff39a);
}
uint64_t b_1800ff39a(CPU*s){
/* 1800ff39a: test eax, eax */
L_1800ff39a_0:;
L_1800ff39a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff39a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff39a_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff39a_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff39a_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1800ff39a_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1800ff39a_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800ff39a_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800ff39a_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800ff39a_10:;
/* 1800ff39c: js 0x1800ff4d1 */
L_1800ff39c_0:;
L_1800ff39c_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1800ff4d1);}
L_1800ff39c_2:;
return UINT64_C(0x1800ff3a2);
}
uint64_t b_1800ff3a2(CPU*s){
/* 1800ff3a2: xor r13d, r13d */
L_1800ff3a2_0:;
L_1800ff3a2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff3a2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff3a2_3:;
wr(s->r,168,4,(rd(s->r,168,4)^rd(s->r,168,4)));
L_1800ff3a2_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1800ff3a2_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff3a2_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1800ff3a2_7:;
wr(s->u,0,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1800ff3a2_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1800ff3a2_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff3a2_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff3a2_11:;
/* 1800ff3a5: test rbx, rbx */
L_1800ff3a5_0:;
L_1800ff3a5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff3a5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff3a5_3:;
wr(s->u,10,8,(rd(s->r,24,8)&rd(s->r,24,8)));
L_1800ff3a5_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff3a5_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800ff3a5_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800ff3a5_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ff3a5_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff3a5_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff3a5_10:;
/* 1800ff3a8: je 0x1800ff3b4 */
L_1800ff3a8_0:;
L_1800ff3a8_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff3b4);}
L_1800ff3a8_2:;
return UINT64_C(0x1800ff3aa);
}
uint64_t b_1800ff3a5(CPU*s){
/* 1800ff3a5: test rbx, rbx */
L_1800ff3a5_0:;
L_1800ff3a5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff3a5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff3a5_3:;
wr(s->u,10,8,(rd(s->r,24,8)&rd(s->r,24,8)));
L_1800ff3a5_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff3a5_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800ff3a5_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800ff3a5_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ff3a5_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff3a5_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff3a5_10:;
/* 1800ff3a8: je 0x1800ff3b4 */
L_1800ff3a8_0:;
L_1800ff3a8_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff3b4);}
L_1800ff3a8_2:;
return UINT64_C(0x1800ff3aa);
}
uint64_t b_1800ff3aa(CPU*s){
/* 1800ff3aa: cmp qword ptr [rbx], 8 */
L_1800ff3aa_0:;
L_1800ff3aa_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,24,8),8));
L_1800ff3aa_2:;
wr(s->u,19,8,rd(s->u,0,8));
L_1800ff3aa_3:;
wr(s->r,512,1,(rd(s->u,19,8)<((U)UINT64_C(0x8))));
L_1800ff3aa_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,8),((U)UINT64_C(0x8)),8,1));
L_1800ff3aa_5:;
wr(s->u,27,8,(rd(s->u,19,8)-((U)UINT64_C(0x8))));
L_1800ff3aa_6:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff3aa_7:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1800ff3aa_8:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1800ff3aa_9:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1800ff3aa_10:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ff3aa_11:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ff3aa_12:;
/* 1800ff3ae: jl 0x1800ff4af */
L_1800ff3ae_0:;
L_1800ff3ae_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1800ff3ae_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1800ff4af);}
L_1800ff3ae_3:;
return UINT64_C(0x1800ff3b4);
}
uint64_t b_1800ff3b4(CPU*s){
/* 1800ff3b4: lea r9, [rsp + 0x38] */
L_1800ff3b4_0:;
L_1800ff3b4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff3b4_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1800ff3b4_3:;
/* 1800ff3b9: lea rdx, [rsp + 0x60] */
L_1800ff3b9_0:;
L_1800ff3b9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1800ff3b9_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1800ff3b9_3:;
/* 1800ff3be: mov r8d, 0x10 */
L_1800ff3be_0:;
L_1800ff3be_1:;
wr(s->r,128,8,((U)UINT64_C(0x10)));
L_1800ff3be_2:;
/* 1800ff3c4: mov rcx, rsi */
L_1800ff3c4_0:;
L_1800ff3c4_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1800ff3c4_2:;
/* 1800ff3c7: mov qword ptr [rsp + 0x20], r13 */
L_1800ff3c7_0:;
L_1800ff3c7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ff3c7_2:;
wr(s->u,8,8,rd(s->r,168,8));
L_1800ff3c7_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff3c7_4:;
/* 1800ff3cc: call 0x180034740 */
L_1800ff3cc_0:;
L_1800ff3cc_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff3cc_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff3d1)));
L_1800ff3cc_3:;
return (uint64_t)UINT64_C(0x180034740);
L_1800ff3cc_4:;
return UINT64_C(0x1800ff3d1);
}
uint64_t b_1800ff3d1(CPU*s){
/* 1800ff3d1: test eax, eax */
L_1800ff3d1_0:;
L_1800ff3d1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff3d1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff3d1_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff3d1_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff3d1_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1800ff3d1_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1800ff3d1_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800ff3d1_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800ff3d1_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800ff3d1_10:;
/* 1800ff3d3: je 0x1800ff4cc */
L_1800ff3d3_0:;
L_1800ff3d3_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff4cc);}
L_1800ff3d3_2:;
return UINT64_C(0x1800ff3d9);
}
uint64_t b_1800ff3d9(CPU*s){
/* 1800ff3d9: cmp dword ptr [rsp + 0x38], 0x10 */
L_1800ff3d9_0:;
L_1800ff3d9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff3d9_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ff3d9_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1800ff3d9_4:;
wr(s->r,512,1,(rd(s->u,19,4)<((U)UINT64_C(0x10))));
L_1800ff3d9_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),((U)UINT64_C(0x10)),4,1));
L_1800ff3d9_6:;
wr(s->u,23,4,(rd(s->u,19,4)-((U)UINT64_C(0x10))));
L_1800ff3d9_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff3d9_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1800ff3d9_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1800ff3d9_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1800ff3d9_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ff3d9_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ff3d9_13:;
/* 1800ff3de: jne 0x1800ff4cc */
L_1800ff3de_0:;
L_1800ff3de_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1800ff3de_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1800ff4cc);}
L_1800ff3de_3:;
return UINT64_C(0x1800ff3e4);
}
uint64_t b_1800ff3e4(CPU*s){
/* 1800ff3e4: test rbx, rbx */
L_1800ff3e4_0:;
L_1800ff3e4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff3e4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff3e4_3:;
wr(s->u,10,8,(rd(s->r,24,8)&rd(s->r,24,8)));
L_1800ff3e4_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff3e4_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800ff3e4_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800ff3e4_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ff3e4_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff3e4_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff3e4_10:;
/* 1800ff3e7: je 0x1800ff3ed */
L_1800ff3e7_0:;
L_1800ff3e7_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff3ed);}
L_1800ff3e7_2:;
return UINT64_C(0x1800ff3e9);
}
uint64_t b_1800ff3e9(CPU*s){
/* 1800ff3e9: add qword ptr [rbx], -0x10 */
L_1800ff3e9_0:;
L_1800ff3e9_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1800ff3e9_2:;
wr(s->r,512,1,(((rd(s->u,8,8)+((U)UINT64_C(0xfffffffffffffff0)))&(((U)1<<64)-1))<rd(s->u,8,8)));
L_1800ff3e9_3:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1800ff3e9_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,8),((U)UINT64_C(0xfffffffffffffff0)),8,0));
L_1800ff3e9_5:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1800ff3e9_6:;
wr(s->u,8,8,(rd(s->u,8,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1800ff3e9_7:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,8,8));
L_1800ff3e9_8:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1800ff3e9_9:;
wr(s->r,519,1,(sx(rd(s->u,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff3e9_10:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1800ff3e9_11:;
wr(s->r,518,1,(rd(s->u,8,8)==((U)UINT64_C(0x0))));
L_1800ff3e9_12:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1800ff3e9_13:;
wr(s->u,25,8,(rd(s->u,8,8)&((U)UINT64_C(0xff))));
L_1800ff3e9_14:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1800ff3e9_15:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1800ff3e9_16:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1800ff3e9_17:;
/* 1800ff3ed: lea rax, [rsp + 0x60] */
L_1800ff3ed_0:;
L_1800ff3ed_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1800ff3ed_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1800ff3ed_3:;
/* 1800ff3f2: mov rdx, qword ptr [rax] */
L_1800ff3f2_0:;
L_1800ff3f2_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,0,8),8));
L_1800ff3f2_2:;
wr(s->r,16,8,rd(s->u,16,8));
L_1800ff3f2_3:;
/* 1800ff3f5: cmp rdx, qword ptr [rbp] */
L_1800ff3f5_0:;
L_1800ff3f5_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,40,8),8));
L_1800ff3f5_2:;
wr(s->u,35,8,rd(s->u,16,8));
L_1800ff3f5_3:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,35,8)));
L_1800ff3f5_4:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,35,8),8,1));
L_1800ff3f5_5:;
wr(s->u,43,8,(rd(s->r,16,8)-rd(s->u,35,8)));
L_1800ff3f5_6:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff3f5_7:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1800ff3f5_8:;
wr(s->u,25,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1800ff3f5_9:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1800ff3f5_10:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1800ff3f5_11:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1800ff3f5_12:;
/* 1800ff3f9: jne 0x1800ff40a */
L_1800ff3f9_0:;
L_1800ff3f9_1:;
wr(s->u,24,1,(!rd(s->r,518,1)));
L_1800ff3f9_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1800ff40a);}
L_1800ff3f9_3:;
return UINT64_C(0x1800ff3fb);
}
uint64_t b_1800ff3ed(CPU*s){
/* 1800ff3ed: lea rax, [rsp + 0x60] */
L_1800ff3ed_0:;
L_1800ff3ed_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1800ff3ed_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1800ff3ed_3:;
/* 1800ff3f2: mov rdx, qword ptr [rax] */
L_1800ff3f2_0:;
L_1800ff3f2_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,0,8),8));
L_1800ff3f2_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1800ff3f2_3:;
/* 1800ff3f5: cmp rdx, qword ptr [rbp] */
L_1800ff3f5_0:;
L_1800ff3f5_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,40,8),8));
L_1800ff3f5_2:;
wr(s->u,27,8,rd(s->u,8,8));
L_1800ff3f5_3:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,27,8)));
L_1800ff3f5_4:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,27,8),8,1));
L_1800ff3f5_5:;
wr(s->u,35,8,(rd(s->r,16,8)-rd(s->u,27,8)));
L_1800ff3f5_6:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff3f5_7:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1800ff3f5_8:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1800ff3f5_9:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1800ff3f5_10:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1800ff3f5_11:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1800ff3f5_12:;
/* 1800ff3f9: jne 0x1800ff40a */
L_1800ff3f9_0:;
L_1800ff3f9_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1800ff3f9_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1800ff40a);}
L_1800ff3f9_3:;
return UINT64_C(0x1800ff3fb);
}
uint64_t b_1800ff3fb(CPU*s){
/* 1800ff3fb: mov rdx, qword ptr [rax + 8] */
L_1800ff3fb_0:;
L_1800ff3fb_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1800ff3fb_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff3fb_3:;
wr(s->r,16,8,rd(s->u,8,8));
L_1800ff3fb_4:;
/* 1800ff3ff: cmp rdx, qword ptr [rbp + 8] */
L_1800ff3ff_0:;
L_1800ff3ff_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1800ff3ff_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff3ff_3:;
wr(s->u,27,8,rd(s->u,8,8));
L_1800ff3ff_4:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,27,8)));
L_1800ff3ff_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,27,8),8,1));
L_1800ff3ff_6:;
wr(s->u,35,8,(rd(s->r,16,8)-rd(s->u,27,8)));
L_1800ff3ff_7:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff3ff_8:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1800ff3ff_9:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1800ff3ff_10:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1800ff3ff_11:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1800ff3ff_12:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1800ff3ff_13:;
/* 1800ff403: jne 0x1800ff40a */
L_1800ff403_0:;
L_1800ff403_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1800ff403_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1800ff40a);}
L_1800ff403_3:;
return UINT64_C(0x1800ff405);
}
uint64_t b_1800ff405(CPU*s){
/* 1800ff405: mov eax, r13d */
L_1800ff405_0:;
L_1800ff405_1:;
wr(s->r,0,4,rd(s->r,168,4));
L_1800ff405_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff405_3:;
/* 1800ff408: jmp 0x1800ff40f */
L_1800ff408_0:;
L_1800ff408_1:;
return UINT64_C(0x1800ff40f);
L_1800ff408_2:;
return UINT64_C(0x1800ff40a);
}
uint64_t b_1800ff40a(CPU*s){
/* 1800ff40a: sbb eax, eax */
L_1800ff40a_0:;
L_1800ff40a_1:;
wr(s->u,0,4,rd(s->r,512,1));
L_1800ff40a_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,0,4)));
L_1800ff40a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,0,4),4,1));
L_1800ff40a_4:;
wr(s->u,4,4,(rd(s->r,0,4)-rd(s->r,0,4)));
L_1800ff40a_5:;
wr(s->u,8,1,(rd(s->u,4,4)<rd(s->u,0,4)));
L_1800ff40a_6:;
wr(s->r,512,1,((rd(s->r,512,1)!=0)||(rd(s->u,8,1)!=0)));
L_1800ff40a_7:;
wr(s->u,9,1,signed_overflow(rd(s->u,4,4),rd(s->u,0,4),4,1));
L_1800ff40a_8:;
wr(s->r,523,1,((rd(s->r,523,1)!=0)!=(rd(s->u,9,1)!=0)));
L_1800ff40a_9:;
wr(s->r,0,4,(rd(s->u,4,4)-rd(s->u,0,4)));
L_1800ff40a_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff40a_11:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff40a_12:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ff40a_13:;
wr(s->u,10,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ff40a_14:;
wr(s->u,14,1,pop(rd(s->u,10,4),4));
L_1800ff40a_15:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_1800ff40a_16:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_1800ff40a_17:;
/* 1800ff40c: sbb eax, -1 */
L_1800ff40c_0:;
L_1800ff40c_1:;
wr(s->u,0,4,rd(s->r,512,1));
L_1800ff40c_2:;
wr(s->r,512,1,(rd(s->r,0,4)<((U)UINT64_C(0xffffffff))));
L_1800ff40c_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0xffffffff)),4,1));
L_1800ff40c_4:;
wr(s->u,4,4,(rd(s->r,0,4)-((U)UINT64_C(0xffffffff))));
L_1800ff40c_5:;
wr(s->u,8,1,(rd(s->u,4,4)<rd(s->u,0,4)));
L_1800ff40c_6:;
wr(s->r,512,1,((rd(s->r,512,1)!=0)||(rd(s->u,8,1)!=0)));
L_1800ff40c_7:;
wr(s->u,9,1,signed_overflow(rd(s->u,4,4),rd(s->u,0,4),4,1));
L_1800ff40c_8:;
wr(s->r,523,1,((rd(s->r,523,1)!=0)!=(rd(s->u,9,1)!=0)));
L_1800ff40c_9:;
wr(s->r,0,4,(rd(s->u,4,4)-rd(s->u,0,4)));
L_1800ff40c_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff40c_11:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff40c_12:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ff40c_13:;
wr(s->u,10,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ff40c_14:;
wr(s->u,14,1,pop(rd(s->u,10,4),4));
L_1800ff40c_15:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_1800ff40c_16:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_1800ff40c_17:;
/* 1800ff40f: test eax, eax */
L_1800ff40f_0:;
L_1800ff40f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff40f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff40f_3:;
wr(s->u,16,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff40f_4:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff40f_5:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_1800ff40f_6:;
wr(s->u,10,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_1800ff40f_7:;
wr(s->u,14,1,pop(rd(s->u,10,4),4));
L_1800ff40f_8:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_1800ff40f_9:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_1800ff40f_10:;
/* 1800ff411: je 0x1800ff4b6 */
L_1800ff411_0:;
L_1800ff411_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff4b6);}
L_1800ff411_2:;
return UINT64_C(0x1800ff417);
}
uint64_t b_1800ff40f(CPU*s){
/* 1800ff40f: test eax, eax */
L_1800ff40f_0:;
L_1800ff40f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff40f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff40f_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff40f_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff40f_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1800ff40f_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1800ff40f_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800ff40f_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800ff40f_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800ff40f_10:;
/* 1800ff411: je 0x1800ff4b6 */
L_1800ff411_0:;
L_1800ff411_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff4b6);}
L_1800ff411_2:;
return UINT64_C(0x1800ff417);
}
uint64_t b_1800ff417(CPU*s){
/* 1800ff417: mov rdi, qword ptr [rsp + 0x30] */
L_1800ff417_0:;
L_1800ff417_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff417_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff417_3:;
wr(s->r,56,8,rd(s->u,8,8));
L_1800ff417_4:;
/* 1800ff41c: mov rcx, rdi */
L_1800ff41c_0:;
L_1800ff41c_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ff41c_2:;
/* 1800ff41f: and ecx, 7 */
L_1800ff41f_0:;
L_1800ff41f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff41f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff41f_3:;
wr(s->r,8,4,(rd(s->r,8,4)&((U)UINT64_C(0x7))));
L_1800ff41f_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1800ff41f_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff41f_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1800ff41f_7:;
wr(s->u,16,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1800ff41f_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1800ff41f_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1800ff41f_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1800ff41f_11:;
/* 1800ff422: je 0x1800ff434 */
L_1800ff422_0:;
L_1800ff422_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff434);}
L_1800ff422_2:;
return UINT64_C(0x1800ff424);
}
uint64_t b_1800ff418(CPU*s){
/* 1800ff418: mov edi, dword ptr [rsp + 0x30] */
L_1800ff418_0:;
L_1800ff418_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff418_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ff418_3:;
wr(s->r,56,4,rd(s->u,8,4));
L_1800ff418_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1800ff418_5:;
/* 1800ff41c: mov rcx, rdi */
L_1800ff41c_0:;
L_1800ff41c_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ff41c_2:;
/* 1800ff41f: and ecx, 7 */
L_1800ff41f_0:;
L_1800ff41f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff41f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff41f_3:;
wr(s->r,8,4,(rd(s->r,8,4)&((U)UINT64_C(0x7))));
L_1800ff41f_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1800ff41f_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff41f_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1800ff41f_7:;
wr(s->u,12,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1800ff41f_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1800ff41f_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1800ff41f_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1800ff41f_11:;
/* 1800ff422: je 0x1800ff434 */
L_1800ff422_0:;
L_1800ff422_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff434);}
L_1800ff422_2:;
return UINT64_C(0x1800ff424);
}
uint64_t b_1800ff419(CPU*s){
/* 1800ff419: jl 0x1800ff43f */
L_1800ff419_0:;
L_1800ff419_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1800ff419_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800ff43f);}
L_1800ff419_3:;
return UINT64_C(0x1800ff41b);
}
uint64_t b_1800ff41b(CPU*s){
/* 1800ff41b: xor byte ptr [rax - 0x75], cl */
L_1800ff41b_0:;
L_1800ff41b_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xffffffffffffff8b))));
L_1800ff41b_2:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff41b_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff41b_4:;
wr(s->u,8,1,mr((uint64_t)rd(s->u,0,8),1));
L_1800ff41b_5:;
wr(s->u,8,1,(rd(s->u,8,1)^rd(s->r,8,1)));
L_1800ff41b_6:;
mw((uint64_t)rd(s->u,0,8),1,rd(s->u,8,1));
L_1800ff41b_7:;
wr(s->u,8,1,mr((uint64_t)rd(s->u,0,8),1));
L_1800ff41b_8:;
wr(s->r,519,1,(sx(rd(s->u,8,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1800ff41b_9:;
wr(s->u,8,1,mr((uint64_t)rd(s->u,0,8),1));
L_1800ff41b_10:;
wr(s->r,518,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1800ff41b_11:;
wr(s->u,8,1,mr((uint64_t)rd(s->u,0,8),1));
L_1800ff41b_12:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0xff))));
L_1800ff41b_13:;
wr(s->u,13,1,pop(rd(s->u,9,1),1));
L_1800ff41b_14:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1800ff41b_15:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1800ff41b_16:;
/* 1800ff41e: iretd  */
L_1800ff41e_0:;
L_1800ff41e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff41e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x4))));
L_1800ff41e_3:;
wr(s->u,15,8,((U)UINT64_C(0x0)));
L_1800ff41e_4:;
wr(s->u,15,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff41e_5:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x4))));
L_1800ff41e_6:;
wr(s->r,258,2,(rd(s->u,15,8) >> (((U)UINT64_C(0x0))*8)));
L_1800ff41e_7:;
wr(s->r,640,4,mr((uint64_t)rd(s->r,32,8),4));
L_1800ff41e_8:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x4))));
L_1800ff41e_9:;
return (uint64_t)rd(s->r,648,8);
L_1800ff41e_10:;
/* 1800ff41f: and ecx, 7 */
L_1800ff41f_0:;
L_1800ff41f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff41f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff41f_3:;
wr(s->r,8,4,(rd(s->r,8,4)&((U)UINT64_C(0x7))));
L_1800ff41f_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1800ff41f_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff41f_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1800ff41f_7:;
wr(s->u,9,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1800ff41f_8:;
wr(s->u,13,1,pop(rd(s->u,9,4),4));
L_1800ff41f_9:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1800ff41f_10:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1800ff41f_11:;
/* 1800ff422: je 0x1800ff434 */
L_1800ff422_0:;
L_1800ff422_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff434);}
L_1800ff422_2:;
return UINT64_C(0x1800ff424);
}
uint64_t b_1800ff41d(CPU*s){
/* 1800ff41d: mov ecx, edi */
L_1800ff41d_0:;
L_1800ff41d_1:;
wr(s->r,8,4,rd(s->r,56,4));
L_1800ff41d_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1800ff41d_3:;
/* 1800ff41f: and ecx, 7 */
L_1800ff41f_0:;
L_1800ff41f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff41f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff41f_3:;
wr(s->r,8,4,(rd(s->r,8,4)&((U)UINT64_C(0x7))));
L_1800ff41f_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1800ff41f_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff41f_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1800ff41f_7:;
wr(s->u,0,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1800ff41f_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800ff41f_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800ff41f_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800ff41f_11:;
/* 1800ff422: je 0x1800ff434 */
L_1800ff422_0:;
L_1800ff422_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff434);}
L_1800ff422_2:;
return UINT64_C(0x1800ff424);
}
uint64_t b_1800ff424(CPU*s){
/* 1800ff424: mov eax, 8 */
L_1800ff424_0:;
L_1800ff424_1:;
wr(s->r,0,8,((U)UINT64_C(0x8)));
L_1800ff424_2:;
/* 1800ff429: sub rax, rcx */
L_1800ff429_0:;
L_1800ff429_1:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->r,8,8)));
L_1800ff429_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->r,8,8),8,1));
L_1800ff429_3:;
wr(s->r,0,8,(rd(s->r,0,8)-rd(s->r,8,8)));
L_1800ff429_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff429_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1800ff429_6:;
wr(s->u,24,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1800ff429_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff429_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff429_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff429_10:;
/* 1800ff42c: add rdi, rax */
L_1800ff42c_0:;
L_1800ff42c_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1800ff42c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),rd(s->r,0,8),8,0));
L_1800ff42c_3:;
wr(s->r,56,8,(rd(s->r,56,8)+rd(s->r,0,8)));
L_1800ff42c_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff42c_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1800ff42c_6:;
wr(s->u,24,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1800ff42c_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff42c_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff42c_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff42c_10:;
/* 1800ff42f: mov qword ptr [rsp + 0x30], rdi */
L_1800ff42f_0:;
L_1800ff42f_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff42f_2:;
wr(s->u,16,8,rd(s->r,56,8));
L_1800ff42f_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1800ff42f_4:;
/* 1800ff434: lea rcx, [rdi - 0x10] */
L_1800ff434_0:;
L_1800ff434_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1800ff434_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1800ff434_3:;
/* 1800ff438: mov rdx, rcx */
L_1800ff438_0:;
L_1800ff438_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1800ff438_2:;
/* 1800ff43b: and edx, 7 */
L_1800ff43b_0:;
L_1800ff43b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff43b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff43b_3:;
wr(s->r,16,4,(rd(s->r,16,4)&((U)UINT64_C(0x7))));
L_1800ff43b_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff43b_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff43b_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1800ff43b_7:;
wr(s->u,24,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1800ff43b_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1800ff43b_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff43b_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff43b_11:;
/* 1800ff43e: je 0x1800ff44b */
L_1800ff43e_0:;
L_1800ff43e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff44b);}
L_1800ff43e_2:;
return UINT64_C(0x1800ff440);
}
uint64_t b_1800ff42f(CPU*s){
/* 1800ff42f: mov qword ptr [rsp + 0x30], rdi */
L_1800ff42f_0:;
L_1800ff42f_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff42f_2:;
wr(s->u,16,8,rd(s->r,56,8));
L_1800ff42f_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1800ff42f_4:;
/* 1800ff434: lea rcx, [rdi - 0x10] */
L_1800ff434_0:;
L_1800ff434_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1800ff434_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1800ff434_3:;
/* 1800ff438: mov rdx, rcx */
L_1800ff438_0:;
L_1800ff438_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1800ff438_2:;
/* 1800ff43b: and edx, 7 */
L_1800ff43b_0:;
L_1800ff43b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff43b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff43b_3:;
wr(s->r,16,4,(rd(s->r,16,4)&((U)UINT64_C(0x7))));
L_1800ff43b_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff43b_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff43b_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1800ff43b_7:;
wr(s->u,24,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1800ff43b_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1800ff43b_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1800ff43b_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1800ff43b_11:;
/* 1800ff43e: je 0x1800ff44b */
L_1800ff43e_0:;
L_1800ff43e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff44b);}
L_1800ff43e_2:;
return UINT64_C(0x1800ff440);
}
uint64_t b_1800ff434(CPU*s){
/* 1800ff434: lea rcx, [rdi - 0x10] */
L_1800ff434_0:;
L_1800ff434_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1800ff434_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1800ff434_3:;
/* 1800ff438: mov rdx, rcx */
L_1800ff438_0:;
L_1800ff438_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1800ff438_2:;
/* 1800ff43b: and edx, 7 */
L_1800ff43b_0:;
L_1800ff43b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff43b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff43b_3:;
wr(s->r,16,4,(rd(s->r,16,4)&((U)UINT64_C(0x7))));
L_1800ff43b_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff43b_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff43b_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1800ff43b_7:;
wr(s->u,8,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1800ff43b_8:;
wr(s->u,12,1,pop(rd(s->u,8,4),4));
L_1800ff43b_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1800ff43b_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1800ff43b_11:;
/* 1800ff43e: je 0x1800ff44b */
L_1800ff43e_0:;
L_1800ff43e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff44b);}
L_1800ff43e_2:;
return UINT64_C(0x1800ff440);
}
uint64_t b_1800ff43f(CPU*s){
/* 1800ff43f: or edi, dword ptr [rax + 8] */
L_1800ff43f_0:;
L_1800ff43f_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1800ff43f_2:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff43f_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff43f_4:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ff43f_5:;
wr(s->r,56,4,(rd(s->r,56,4)|rd(s->u,24,4)));
L_1800ff43f_6:;
wr(s->r,56,8,rd(s->r,56,4));
L_1800ff43f_7:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff43f_8:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1800ff43f_9:;
wr(s->u,28,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1800ff43f_10:;
wr(s->u,36,1,pop(rd(s->u,28,4),4));
L_1800ff43f_11:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1800ff43f_12:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1800ff43f_13:;
/* 1800ff445: sub rax, rdx */
L_1800ff445_0:;
L_1800ff445_1:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->r,16,8)));
L_1800ff445_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->r,16,8),8,1));
L_1800ff445_3:;
wr(s->r,0,8,(rd(s->r,0,8)-rd(s->r,16,8)));
L_1800ff445_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff445_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1800ff445_6:;
wr(s->u,28,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1800ff445_7:;
wr(s->u,36,1,pop(rd(s->u,28,8),8));
L_1800ff445_8:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1800ff445_9:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1800ff445_10:;
/* 1800ff448: add rcx, rax */
L_1800ff448_0:;
L_1800ff448_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1800ff448_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,0,8),8,0));
L_1800ff448_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,0,8)));
L_1800ff448_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff448_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ff448_6:;
wr(s->u,28,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ff448_7:;
wr(s->u,36,1,pop(rd(s->u,28,8),8));
L_1800ff448_8:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1800ff448_9:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1800ff448_10:;
/* 1800ff44b: mov qword ptr [rsp + 0x40], rcx */
L_1800ff44b_0:;
L_1800ff44b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff44b_2:;
wr(s->u,16,8,rd(s->r,8,8));
L_1800ff44b_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1800ff44b_4:;
/* 1800ff450: mov edx, ecx */
L_1800ff450_0:;
L_1800ff450_1:;
wr(s->r,16,4,rd(s->r,8,4));
L_1800ff450_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff450_3:;
/* 1800ff452: lea r8, [rsp + 0x44] */
L_1800ff452_0:;
L_1800ff452_1:;
wr(s->u,8,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1800ff452_2:;
wr(s->r,128,8,rd(s->u,8,8));
L_1800ff452_3:;
/* 1800ff457: mov r9d, 1 */
L_1800ff457_0:;
L_1800ff457_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1800ff457_2:;
/* 1800ff45d: mov rcx, rsi */
L_1800ff45d_0:;
L_1800ff45d_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1800ff45d_2:;
/* 1800ff460: call qword ptr [rip + 0x54948a] */
L_1800ff460_0:;
L_1800ff460_1:;
wr(s->u,38,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff460_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff460_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff466)));
L_1800ff460_4:;
return (uint64_t)rd(s->u,38,8);
L_1800ff460_5:;
return UINT64_C(0x1800ff466);
}
uint64_t b_1800ff440(CPU*s){
/* 1800ff440: mov eax, 8 */
L_1800ff440_0:;
L_1800ff440_1:;
wr(s->r,0,8,((U)UINT64_C(0x8)));
L_1800ff440_2:;
/* 1800ff445: sub rax, rdx */
L_1800ff445_0:;
L_1800ff445_1:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->r,16,8)));
L_1800ff445_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->r,16,8),8,1));
L_1800ff445_3:;
wr(s->r,0,8,(rd(s->r,0,8)-rd(s->r,16,8)));
L_1800ff445_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff445_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1800ff445_6:;
wr(s->u,16,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1800ff445_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff445_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff445_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff445_10:;
/* 1800ff448: add rcx, rax */
L_1800ff448_0:;
L_1800ff448_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1800ff448_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,0,8),8,0));
L_1800ff448_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,0,8)));
L_1800ff448_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff448_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ff448_6:;
wr(s->u,16,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ff448_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff448_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff448_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff448_10:;
/* 1800ff44b: mov qword ptr [rsp + 0x40], rcx */
L_1800ff44b_0:;
L_1800ff44b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff44b_2:;
wr(s->u,8,8,rd(s->r,8,8));
L_1800ff44b_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff44b_4:;
/* 1800ff450: mov edx, ecx */
L_1800ff450_0:;
L_1800ff450_1:;
wr(s->r,16,4,rd(s->r,8,4));
L_1800ff450_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff450_3:;
/* 1800ff452: lea r8, [rsp + 0x44] */
L_1800ff452_0:;
L_1800ff452_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1800ff452_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ff452_3:;
/* 1800ff457: mov r9d, 1 */
L_1800ff457_0:;
L_1800ff457_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1800ff457_2:;
/* 1800ff45d: mov rcx, rsi */
L_1800ff45d_0:;
L_1800ff45d_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1800ff45d_2:;
/* 1800ff460: call qword ptr [rip + 0x54948a] */
L_1800ff460_0:;
L_1800ff460_1:;
wr(s->u,26,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff460_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff460_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff466)));
L_1800ff460_4:;
return (uint64_t)rd(s->u,26,8);
L_1800ff460_5:;
return UINT64_C(0x1800ff466);
}
uint64_t b_1800ff44b(CPU*s){
/* 1800ff44b: mov qword ptr [rsp + 0x40], rcx */
L_1800ff44b_0:;
L_1800ff44b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff44b_2:;
wr(s->u,8,8,rd(s->r,8,8));
L_1800ff44b_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff44b_4:;
/* 1800ff450: mov edx, ecx */
L_1800ff450_0:;
L_1800ff450_1:;
wr(s->r,16,4,rd(s->r,8,4));
L_1800ff450_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff450_3:;
/* 1800ff452: lea r8, [rsp + 0x44] */
L_1800ff452_0:;
L_1800ff452_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1800ff452_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ff452_3:;
/* 1800ff457: mov r9d, 1 */
L_1800ff457_0:;
L_1800ff457_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1800ff457_2:;
/* 1800ff45d: mov rcx, rsi */
L_1800ff45d_0:;
L_1800ff45d_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1800ff45d_2:;
/* 1800ff460: call qword ptr [rip + 0x54948a] */
L_1800ff460_0:;
L_1800ff460_1:;
wr(s->u,16,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff460_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff460_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff466)));
L_1800ff460_4:;
return (uint64_t)rd(s->u,16,8);
L_1800ff460_5:;
return UINT64_C(0x1800ff466);
}
uint64_t b_1800ff466(CPU*s){
/* 1800ff466: test rbx, rbx */
L_1800ff466_0:;
L_1800ff466_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff466_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff466_3:;
wr(s->u,10,8,(rd(s->r,24,8)&rd(s->r,24,8)));
L_1800ff466_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff466_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800ff466_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800ff466_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ff466_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff466_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff466_10:;
/* 1800ff469: je 0x1800ff476 */
L_1800ff469_0:;
L_1800ff469_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff476);}
L_1800ff469_2:;
return UINT64_C(0x1800ff46b);
}
uint64_t b_1800ff46b(CPU*s){
/* 1800ff46b: mov eax, 0x10 */
L_1800ff46b_0:;
L_1800ff46b_1:;
wr(s->r,0,8,((U)UINT64_C(0x10)));
L_1800ff46b_2:;
/* 1800ff470: sub rax, rdi */
L_1800ff470_0:;
L_1800ff470_1:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->r,56,8)));
L_1800ff470_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->r,56,8),8,1));
L_1800ff470_3:;
wr(s->r,0,8,(rd(s->r,0,8)-rd(s->r,56,8)));
L_1800ff470_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff470_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1800ff470_6:;
wr(s->u,24,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1800ff470_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff470_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff470_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff470_10:;
/* 1800ff473: add qword ptr [rbx], rax */
L_1800ff473_0:;
L_1800ff473_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,24,8),8));
L_1800ff473_2:;
wr(s->r,512,1,(((rd(s->u,16,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->u,16,8)));
L_1800ff473_3:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,24,8),8));
L_1800ff473_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,16,8),rd(s->r,0,8),8,0));
L_1800ff473_5:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,24,8),8));
L_1800ff473_6:;
wr(s->u,16,8,(rd(s->u,16,8)+rd(s->r,0,8)));
L_1800ff473_7:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,16,8));
L_1800ff473_8:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,24,8),8));
L_1800ff473_9:;
wr(s->r,519,1,(sx(rd(s->u,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff473_10:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,24,8),8));
L_1800ff473_11:;
wr(s->r,518,1,(rd(s->u,16,8)==((U)UINT64_C(0x0))));
L_1800ff473_12:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,24,8),8));
L_1800ff473_13:;
wr(s->u,24,8,(rd(s->u,16,8)&((U)UINT64_C(0xff))));
L_1800ff473_14:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff473_15:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff473_16:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff473_17:;
/* 1800ff476: mov rax, qword ptr [rip + 0x559bb3] */
L_1800ff476_0:;
L_1800ff476_1:;
wr(s->r,0,8,mr(UINT64_C(0x180659030),8));
L_1800ff476_2:;
/* 1800ff47d: lea rcx, [rsp + 0x50] */
L_1800ff47d_0:;
L_1800ff47d_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1800ff47d_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800ff47d_3:;
/* 1800ff482: lea r8, [rsp + 0x30] */
L_1800ff482_0:;
L_1800ff482_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff482_2:;
wr(s->r,128,8,rd(s->u,8,8));
L_1800ff482_3:;
/* 1800ff487: mov qword ptr [rcx], rax */
L_1800ff487_0:;
L_1800ff487_1:;
wr(s->u,16,8,rd(s->r,0,8));
L_1800ff487_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,16,8));
L_1800ff487_3:;
/* 1800ff48a: mov rax, qword ptr [rip + 0x559ba7] */
L_1800ff48a_0:;
L_1800ff48a_1:;
wr(s->r,0,8,mr(UINT64_C(0x180659038),8));
L_1800ff48a_2:;
/* 1800ff491: lea rdx, [rsp + 0x50] */
L_1800ff491_0:;
L_1800ff491_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1800ff491_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1800ff491_3:;
/* 1800ff496: mov qword ptr [rcx + 8], rax */
L_1800ff496_0:;
L_1800ff496_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1800ff496_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_1800ff496_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1800ff496_4:;
/* 1800ff49a: mov rcx, rsi */
L_1800ff49a_0:;
L_1800ff49a_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1800ff49a_2:;
/* 1800ff49d: mov r9, rbx */
L_1800ff49d_0:;
L_1800ff49d_1:;
wr(s->r,136,8,rd(s->r,24,8));
L_1800ff49d_2:;
/* 1800ff4a0: call 0x1800ff0f0 */
L_1800ff4a0_0:;
L_1800ff4a0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff4a0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff4a5)));
L_1800ff4a0_3:;
return (uint64_t)UINT64_C(0x1800ff0f0);
L_1800ff4a0_4:;
return UINT64_C(0x1800ff4a5);
}
uint64_t b_1800ff476(CPU*s){
/* 1800ff476: mov rax, qword ptr [rip + 0x559bb3] */
L_1800ff476_0:;
L_1800ff476_1:;
wr(s->r,0,8,mr(UINT64_C(0x180659030),8));
L_1800ff476_2:;
/* 1800ff47d: lea rcx, [rsp + 0x50] */
L_1800ff47d_0:;
L_1800ff47d_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1800ff47d_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800ff47d_3:;
/* 1800ff482: lea r8, [rsp + 0x30] */
L_1800ff482_0:;
L_1800ff482_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff482_2:;
wr(s->r,128,8,rd(s->u,8,8));
L_1800ff482_3:;
/* 1800ff487: mov qword ptr [rcx], rax */
L_1800ff487_0:;
L_1800ff487_1:;
wr(s->u,16,8,rd(s->r,0,8));
L_1800ff487_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,16,8));
L_1800ff487_3:;
/* 1800ff48a: mov rax, qword ptr [rip + 0x559ba7] */
L_1800ff48a_0:;
L_1800ff48a_1:;
wr(s->r,0,8,mr(UINT64_C(0x180659038),8));
L_1800ff48a_2:;
/* 1800ff491: lea rdx, [rsp + 0x50] */
L_1800ff491_0:;
L_1800ff491_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1800ff491_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1800ff491_3:;
/* 1800ff496: mov qword ptr [rcx + 8], rax */
L_1800ff496_0:;
L_1800ff496_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1800ff496_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_1800ff496_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1800ff496_4:;
/* 1800ff49a: mov rcx, rsi */
L_1800ff49a_0:;
L_1800ff49a_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1800ff49a_2:;
/* 1800ff49d: mov r9, rbx */
L_1800ff49d_0:;
L_1800ff49d_1:;
wr(s->r,136,8,rd(s->r,24,8));
L_1800ff49d_2:;
/* 1800ff4a0: call 0x1800ff0f0 */
L_1800ff4a0_0:;
L_1800ff4a0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff4a0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff4a5)));
L_1800ff4a0_3:;
return (uint64_t)UINT64_C(0x1800ff0f0);
L_1800ff4a0_4:;
return UINT64_C(0x1800ff4a5);
}
uint64_t b_1800ff49b(CPU*s){
/* 1800ff49b: mov ecx, esi */
L_1800ff49b_0:;
L_1800ff49b_1:;
wr(s->r,8,4,rd(s->r,48,4));
L_1800ff49b_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1800ff49b_3:;
/* 1800ff49d: mov r9, rbx */
L_1800ff49d_0:;
L_1800ff49d_1:;
wr(s->r,136,8,rd(s->r,24,8));
L_1800ff49d_2:;
/* 1800ff4a0: call 0x1800ff0f0 */
L_1800ff4a0_0:;
L_1800ff4a0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff4a0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff4a5)));
L_1800ff4a0_3:;
return (uint64_t)UINT64_C(0x1800ff0f0);
L_1800ff4a0_4:;
return UINT64_C(0x1800ff4a5);
}
uint64_t b_1800ff4a5(CPU*s){
/* 1800ff4a5: test eax, eax */
L_1800ff4a5_0:;
L_1800ff4a5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff4a5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff4a5_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff4a5_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff4a5_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1800ff4a5_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1800ff4a5_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1800ff4a5_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1800ff4a5_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1800ff4a5_10:;
/* 1800ff4a7: jns 0x1800ff3a5 */
L_1800ff4a7_0:;
L_1800ff4a7_1:;
wr(s->u,0,1,(!rd(s->r,519,1)));
L_1800ff4a7_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800ff3a5);}
L_1800ff4a7_3:;
return UINT64_C(0x1800ff4ad);
}
uint64_t b_1800ff4ad(CPU*s){
/* 1800ff4ad: jmp 0x1800ff4d1 */
L_1800ff4ad_0:;
L_1800ff4ad_1:;
return UINT64_C(0x1800ff4d1);
L_1800ff4ad_2:;
return UINT64_C(0x1800ff4af);
}
uint64_t b_1800ff4af(CPU*s){
/* 1800ff4af: mov eax, 0x8004e00a */
L_1800ff4af_0:;
L_1800ff4af_1:;
wr(s->r,0,8,((U)UINT64_C(0x8004e00a)));
L_1800ff4af_2:;
/* 1800ff4b4: jmp 0x1800ff4d1 */
L_1800ff4b4_0:;
L_1800ff4b4_1:;
return UINT64_C(0x1800ff4d1);
L_1800ff4b4_2:;
return UINT64_C(0x1800ff4b6);
}
uint64_t b_1800ff4b6(CPU*s){
/* 1800ff4b6: test r12, r12 */
L_1800ff4b6_0:;
L_1800ff4b6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff4b6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff4b6_3:;
wr(s->u,10,8,(rd(s->r,160,8)&rd(s->r,160,8)));
L_1800ff4b6_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff4b6_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800ff4b6_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800ff4b6_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ff4b6_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff4b6_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff4b6_10:;
/* 1800ff4b9: je 0x1800ff4c8 */
L_1800ff4b9_0:;
L_1800ff4b9_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff4c8);}
L_1800ff4b9_2:;
return UINT64_C(0x1800ff4bb);
}
uint64_t b_1800ff4bb(CPU*s){
/* 1800ff4bb: mov rax, qword ptr [rsp + 0x30] */
L_1800ff4bb_0:;
L_1800ff4bb_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff4bb_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff4bb_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1800ff4bb_4:;
/* 1800ff4c0: add rax, -0x10 */
L_1800ff4c0_0:;
L_1800ff4c0_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffff0)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1800ff4c0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0xfffffffffffffff0)),8,0));
L_1800ff4c0_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1800ff4c0_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff4c0_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1800ff4c0_6:;
wr(s->u,24,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1800ff4c0_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff4c0_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff4c0_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff4c0_10:;
/* 1800ff4c4: mov qword ptr [r12], rax */
L_1800ff4c4_0:;
L_1800ff4c4_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800ff4c4_2:;
mw((uint64_t)rd(s->r,160,8),8,rd(s->u,8,8));
L_1800ff4c4_3:;
/* 1800ff4c8: xor eax, eax */
L_1800ff4c8_0:;
L_1800ff4c8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff4c8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff4c8_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1800ff4c8_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff4c8_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff4c8_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ff4c8_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ff4c8_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1800ff4c8_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff4c8_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff4c8_11:;
/* 1800ff4ca: jmp 0x1800ff4d1 */
L_1800ff4ca_0:;
L_1800ff4ca_1:;
return UINT64_C(0x1800ff4d1);
L_1800ff4ca_2:;
return UINT64_C(0x1800ff4cc);
}
uint64_t b_1800ff4c8(CPU*s){
/* 1800ff4c8: xor eax, eax */
L_1800ff4c8_0:;
L_1800ff4c8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff4c8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff4c8_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1800ff4c8_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff4c8_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff4c8_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ff4c8_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ff4c8_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800ff4c8_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800ff4c8_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800ff4c8_11:;
/* 1800ff4ca: jmp 0x1800ff4d1 */
L_1800ff4ca_0:;
L_1800ff4ca_1:;
return UINT64_C(0x1800ff4d1);
L_1800ff4ca_2:;
return UINT64_C(0x1800ff4cc);
}
uint64_t b_1800ff4cc(CPU*s){
/* 1800ff4cc: mov eax, 0x8004e008 */
L_1800ff4cc_0:;
L_1800ff4cc_1:;
wr(s->r,0,8,((U)UINT64_C(0x8004e008)));
L_1800ff4cc_2:;
/* 1800ff4d1: mov rcx, qword ptr [rsp + 0x70] */
L_1800ff4d1_0:;
L_1800ff4d1_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1800ff4d1_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff4d1_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800ff4d1_4:;
/* 1800ff4d6: xor rcx, rsp */
L_1800ff4d6_0:;
L_1800ff4d6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff4d6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff4d6_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800ff4d6_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff4d6_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ff4d6_6:;
wr(s->u,16,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ff4d6_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff4d6_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff4d6_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff4d6_10:;
/* 1800ff4d9: call 0x18000d680 */
L_1800ff4d9_0:;
L_1800ff4d9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff4d9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff4de)));
L_1800ff4d9_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800ff4d9_4:;
return UINT64_C(0x1800ff4de);
}
uint64_t b_1800ff4d1(CPU*s){
/* 1800ff4d1: mov rcx, qword ptr [rsp + 0x70] */
L_1800ff4d1_0:;
L_1800ff4d1_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1800ff4d1_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff4d1_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800ff4d1_4:;
/* 1800ff4d6: xor rcx, rsp */
L_1800ff4d6_0:;
L_1800ff4d6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff4d6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff4d6_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800ff4d6_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff4d6_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ff4d6_6:;
wr(s->u,16,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ff4d6_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff4d6_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff4d6_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff4d6_10:;
/* 1800ff4d9: call 0x18000d680 */
L_1800ff4d9_0:;
L_1800ff4d9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff4d9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff4de)));
L_1800ff4d9_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800ff4d9_4:;
return UINT64_C(0x1800ff4de);
}
uint64_t b_1800ff4de(CPU*s){
/* 1800ff4de: mov rbx, qword ptr [rsp + 0xb8] */
L_1800ff4de_0:;
L_1800ff4de_1:;
wr(s->u,0,8,(((U)UINT64_C(0xb8))+rd(s->r,32,8)));
L_1800ff4de_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff4de_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1800ff4de_4:;
/* 1800ff4e6: add rsp, 0x80 */
L_1800ff4e6_0:;
L_1800ff4e6_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x80)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1800ff4e6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x80)),8,0));
L_1800ff4e6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x80))));
L_1800ff4e6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff4e6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800ff4e6_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800ff4e6_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff4e6_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff4e6_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff4e6_10:;
/* 1800ff4ed: pop r13 */
L_1800ff4ed_0:;
L_1800ff4ed_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800ff4ed_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff4ed_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff4ed_4:;
wr(s->r,168,8,rd(s->u,26,8));
L_1800ff4ed_5:;
/* 1800ff4ef: pop r12 */
L_1800ff4ef_0:;
L_1800ff4ef_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800ff4ef_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff4ef_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff4ef_4:;
wr(s->r,160,8,rd(s->u,26,8));
L_1800ff4ef_5:;
/* 1800ff4f1: pop rdi */
L_1800ff4f1_0:;
L_1800ff4f1_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800ff4f1_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff4f1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff4f1_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1800ff4f1_5:;
/* 1800ff4f2: pop rsi */
L_1800ff4f2_0:;
L_1800ff4f2_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800ff4f2_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff4f2_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff4f2_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1800ff4f2_5:;
/* 1800ff4f3: pop rbp */
L_1800ff4f3_0:;
L_1800ff4f3_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800ff4f3_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff4f3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff4f3_4:;
wr(s->r,40,8,rd(s->u,26,8));
L_1800ff4f3_5:;
/* 1800ff4f4: ret  */
L_1800ff4f4_0:;
L_1800ff4f4_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff4f4_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff4f4_3:;
return (uint64_t)rd(s->r,648,8);
L_1800ff4f4_4:;
return UINT64_C(0x1800ff4f5);
}
uint64_t b_1800ff500(CPU*s){
/* 1800ff500: mov qword ptr [rsp + 0x10], rbx */
L_1800ff500_0:;
L_1800ff500_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1800ff500_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ff500_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff500_4:;
/* 1800ff505: mov qword ptr [rsp + 0x20], rsi */
L_1800ff505_0:;
L_1800ff505_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ff505_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1800ff505_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff505_4:;
/* 1800ff50a: push rdi */
L_1800ff50a_0:;
L_1800ff50a_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1800ff50a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff50a_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1800ff50a_4:;
/* 1800ff50b: sub rsp, 0x50 */
L_1800ff50b_0:;
L_1800ff50b_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x50))));
L_1800ff50b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,1));
L_1800ff50b_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x50))));
L_1800ff50b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff50b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800ff50b_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800ff50b_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff50b_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff50b_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff50b_10:;
/* 1800ff50f: mov rax, qword ptr [rip + 0x84f8c2] */
L_1800ff50f_0:;
L_1800ff50f_1:;
wr(s->r,0,8,mr(UINT64_C(0x18094edd8),8));
L_1800ff50f_2:;
/* 1800ff516: xor rax, rsp */
L_1800ff516_0:;
L_1800ff516_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff516_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff516_3:;
wr(s->r,0,8,(rd(s->r,0,8)^rd(s->r,32,8)));
L_1800ff516_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff516_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1800ff516_6:;
wr(s->u,24,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1800ff516_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff516_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff516_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff516_10:;
/* 1800ff519: mov qword ptr [rsp + 0x40], rax */
L_1800ff519_0:;
L_1800ff519_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff519_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800ff519_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff519_4:;
/* 1800ff51e: mov rbx, r8 */
L_1800ff51e_0:;
L_1800ff51e_1:;
wr(s->r,24,8,rd(s->r,128,8));
L_1800ff51e_2:;
/* 1800ff521: mov rdi, rdx */
L_1800ff521_0:;
L_1800ff521_1:;
wr(s->r,56,8,rd(s->r,16,8));
L_1800ff521_2:;
/* 1800ff524: xor r9d, r9d */
L_1800ff524_0:;
L_1800ff524_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff524_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff524_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1800ff524_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800ff524_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff524_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1800ff524_7:;
wr(s->u,24,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1800ff524_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1800ff524_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff524_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff524_11:;
/* 1800ff527: xor r8d, r8d */
L_1800ff527_0:;
L_1800ff527_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff527_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff527_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1800ff527_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1800ff527_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff527_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1800ff527_7:;
wr(s->u,24,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1800ff527_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1800ff527_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff527_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff527_11:;
/* 1800ff52a: xor edx, edx */
L_1800ff52a_0:;
L_1800ff52a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff52a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff52a_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1800ff52a_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff52a_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff52a_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1800ff52a_7:;
wr(s->u,24,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1800ff52a_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1800ff52a_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff52a_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff52a_11:;
/* 1800ff52c: mov rsi, rcx */
L_1800ff52c_0:;
L_1800ff52c_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1800ff52c_2:;
/* 1800ff52f: call qword ptr [rip + 0x5493bb] */
L_1800ff52f_0:;
L_1800ff52f_1:;
wr(s->u,34,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff52f_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff52f_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff535)));
L_1800ff52f_4:;
return (uint64_t)rd(s->u,34,8);
L_1800ff52f_5:;
return UINT64_C(0x1800ff535);
}
uint64_t b_1800ff535(CPU*s){
/* 1800ff535: lea r8, [rsp + 0x30] */
L_1800ff535_0:;
L_1800ff535_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff535_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ff535_3:;
/* 1800ff53a: lea rdx, [rsp + 0x28] */
L_1800ff53a_0:;
L_1800ff53a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1800ff53a_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1800ff53a_3:;
/* 1800ff53f: mov rcx, rsi */
L_1800ff53f_0:;
L_1800ff53f_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1800ff53f_2:;
/* 1800ff542: call 0x1800fe790 */
L_1800ff542_0:;
L_1800ff542_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff542_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff547)));
L_1800ff542_3:;
return (uint64_t)UINT64_C(0x1800fe790);
L_1800ff542_4:;
return UINT64_C(0x1800ff547);
}
uint64_t b_1800ff547(CPU*s){
/* 1800ff547: test eax, eax */
L_1800ff547_0:;
L_1800ff547_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff547_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff547_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff547_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff547_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1800ff547_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1800ff547_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800ff547_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800ff547_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800ff547_10:;
/* 1800ff549: js 0x1800ff590 */
L_1800ff549_0:;
L_1800ff549_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1800ff590);}
L_1800ff549_2:;
return UINT64_C(0x1800ff54b);
}
uint64_t b_1800ff54b(CPU*s){
/* 1800ff54b: mov eax, dword ptr [rdi] */
L_1800ff54b_0:;
L_1800ff54b_1:;
wr(s->u,20,4,mr((uint64_t)rd(s->r,56,8),4));
L_1800ff54b_2:;
wr(s->r,0,4,rd(s->u,20,4));
L_1800ff54b_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff54b_4:;
/* 1800ff54d: lea rcx, [rsp + 0x30] */
L_1800ff54d_0:;
L_1800ff54d_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff54d_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800ff54d_3:;
/* 1800ff552: lea r9, [rsp + 0x28] */
L_1800ff552_0:;
L_1800ff552_1:;
wr(s->u,8,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1800ff552_2:;
wr(s->r,136,8,rd(s->u,8,8));
L_1800ff552_3:;
/* 1800ff557: mov dword ptr [rcx], eax */
L_1800ff557_0:;
L_1800ff557_1:;
wr(s->u,16,4,rd(s->r,0,4));
L_1800ff557_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,16,4));
L_1800ff557_3:;
/* 1800ff559: mov eax, dword ptr [rdi + 4] */
L_1800ff559_0:;
L_1800ff559_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x4))));
L_1800ff559_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ff559_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1800ff559_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff559_5:;
/* 1800ff55c: lea r8, [rsp + 0x20] */
L_1800ff55c_0:;
L_1800ff55c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ff55c_2:;
wr(s->r,128,8,rd(s->u,8,8));
L_1800ff55c_3:;
/* 1800ff561: mov dword ptr [rcx + 4], eax */
L_1800ff561_0:;
L_1800ff561_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1800ff561_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1800ff561_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1800ff561_4:;
/* 1800ff564: mov eax, dword ptr [rdi + 8] */
L_1800ff564_0:;
L_1800ff564_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1800ff564_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ff564_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1800ff564_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff564_5:;
/* 1800ff567: lea rdx, [rsp + 0x30] */
L_1800ff567_0:;
L_1800ff567_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff567_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1800ff567_3:;
/* 1800ff56c: mov dword ptr [rcx + 8], eax */
L_1800ff56c_0:;
L_1800ff56c_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1800ff56c_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1800ff56c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1800ff56c_4:;
/* 1800ff56f: mov eax, dword ptr [rdi + 0xc] */
L_1800ff56f_0:;
L_1800ff56f_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xc))));
L_1800ff56f_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ff56f_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1800ff56f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff56f_5:;
/* 1800ff572: mov dword ptr [rcx + 0xc], eax */
L_1800ff572_0:;
L_1800ff572_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1800ff572_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1800ff572_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1800ff572_4:;
/* 1800ff575: mov rcx, rsi */
L_1800ff575_0:;
L_1800ff575_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1800ff575_2:;
/* 1800ff578: call 0x1800ff340 */
L_1800ff578_0:;
L_1800ff578_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff578_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff57d)));
L_1800ff578_3:;
return (uint64_t)UINT64_C(0x1800ff340);
L_1800ff578_4:;
return UINT64_C(0x1800ff57d);
}
uint64_t b_1800ff57d(CPU*s){
/* 1800ff57d: test eax, eax */
L_1800ff57d_0:;
L_1800ff57d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff57d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff57d_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff57d_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff57d_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1800ff57d_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1800ff57d_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800ff57d_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800ff57d_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800ff57d_10:;
/* 1800ff57f: js 0x1800ff590 */
L_1800ff57f_0:;
L_1800ff57f_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1800ff590);}
L_1800ff57f_2:;
return UINT64_C(0x1800ff581);
}
uint64_t b_1800ff581(CPU*s){
/* 1800ff581: test rbx, rbx */
L_1800ff581_0:;
L_1800ff581_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff581_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff581_3:;
wr(s->u,10,8,(rd(s->r,24,8)&rd(s->r,24,8)));
L_1800ff581_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff581_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800ff581_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800ff581_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ff581_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff581_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff581_10:;
/* 1800ff584: je 0x1800ff58e */
L_1800ff584_0:;
L_1800ff584_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff58e);}
L_1800ff584_2:;
return UINT64_C(0x1800ff586);
}
uint64_t b_1800ff586(CPU*s){
/* 1800ff586: mov rax, qword ptr [rsp + 0x20] */
L_1800ff586_0:;
L_1800ff586_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ff586_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff586_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1800ff586_4:;
/* 1800ff58b: mov qword ptr [rbx], rax */
L_1800ff58b_0:;
L_1800ff58b_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800ff58b_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,8,8));
L_1800ff58b_3:;
/* 1800ff58e: xor eax, eax */
L_1800ff58e_0:;
L_1800ff58e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff58e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff58e_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1800ff58e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff58e_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff58e_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ff58e_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ff58e_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1800ff58e_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff58e_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff58e_11:;
/* 1800ff590: mov rcx, qword ptr [rsp + 0x40] */
L_1800ff590_0:;
L_1800ff590_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff590_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff590_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1800ff590_4:;
/* 1800ff595: xor rcx, rsp */
L_1800ff595_0:;
L_1800ff595_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff595_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff595_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800ff595_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff595_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ff595_6:;
wr(s->u,24,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ff595_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff595_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff595_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff595_10:;
/* 1800ff598: call 0x18000d680 */
L_1800ff598_0:;
L_1800ff598_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff598_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff59d)));
L_1800ff598_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800ff598_4:;
return UINT64_C(0x1800ff59d);
}
uint64_t b_1800ff58e(CPU*s){
/* 1800ff58e: xor eax, eax */
L_1800ff58e_0:;
L_1800ff58e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff58e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff58e_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1800ff58e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff58e_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff58e_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ff58e_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ff58e_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1800ff58e_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff58e_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff58e_11:;
/* 1800ff590: mov rcx, qword ptr [rsp + 0x40] */
L_1800ff590_0:;
L_1800ff590_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff590_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff590_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800ff590_4:;
/* 1800ff595: xor rcx, rsp */
L_1800ff595_0:;
L_1800ff595_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff595_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff595_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800ff595_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff595_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ff595_6:;
wr(s->u,16,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ff595_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff595_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff595_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff595_10:;
/* 1800ff598: call 0x18000d680 */
L_1800ff598_0:;
L_1800ff598_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff598_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff59d)));
L_1800ff598_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800ff598_4:;
return UINT64_C(0x1800ff59d);
}
uint64_t b_1800ff590(CPU*s){
/* 1800ff590: mov rcx, qword ptr [rsp + 0x40] */
L_1800ff590_0:;
L_1800ff590_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff590_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff590_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800ff590_4:;
/* 1800ff595: xor rcx, rsp */
L_1800ff595_0:;
L_1800ff595_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff595_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff595_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800ff595_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff595_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ff595_6:;
wr(s->u,16,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ff595_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff595_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff595_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff595_10:;
/* 1800ff598: call 0x18000d680 */
L_1800ff598_0:;
L_1800ff598_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff598_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff59d)));
L_1800ff598_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800ff598_4:;
return UINT64_C(0x1800ff59d);
}
uint64_t b_1800ff59d(CPU*s){
/* 1800ff59d: mov rbx, qword ptr [rsp + 0x68] */
L_1800ff59d_0:;
L_1800ff59d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1800ff59d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff59d_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1800ff59d_4:;
/* 1800ff5a2: mov rsi, qword ptr [rsp + 0x78] */
L_1800ff5a2_0:;
L_1800ff5a2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1800ff5a2_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff5a2_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1800ff5a2_4:;
/* 1800ff5a7: add rsp, 0x50 */
L_1800ff5a7_0:;
L_1800ff5a7_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1800ff5a7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1800ff5a7_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1800ff5a7_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff5a7_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800ff5a7_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800ff5a7_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff5a7_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff5a7_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff5a7_10:;
/* 1800ff5ab: pop rdi */
L_1800ff5ab_0:;
L_1800ff5ab_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800ff5ab_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff5ab_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff5ab_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1800ff5ab_5:;
/* 1800ff5ac: ret  */
L_1800ff5ac_0:;
L_1800ff5ac_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff5ac_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff5ac_3:;
return (uint64_t)rd(s->r,648,8);
L_1800ff5ac_4:;
return UINT64_C(0x1800ff5ad);
}
uint64_t b_1800ff5c0(CPU*s){
/* 1800ff5c0: push rbp */
L_1800ff5c0_0:;
L_1800ff5c0_1:;
wr(s->u,28,8,rd(s->r,40,8));
L_1800ff5c0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff5c0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,28,8));
L_1800ff5c0_4:;
/* 1800ff5c2: push rsi */
L_1800ff5c2_0:;
L_1800ff5c2_1:;
wr(s->u,28,8,rd(s->r,48,8));
L_1800ff5c2_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff5c2_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,28,8));
L_1800ff5c2_4:;
/* 1800ff5c3: push rdi */
L_1800ff5c3_0:;
L_1800ff5c3_1:;
wr(s->u,28,8,rd(s->r,56,8));
L_1800ff5c3_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff5c3_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,28,8));
L_1800ff5c3_4:;
/* 1800ff5c4: push r12 */
L_1800ff5c4_0:;
L_1800ff5c4_1:;
wr(s->u,28,8,rd(s->r,160,8));
L_1800ff5c4_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff5c4_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,28,8));
L_1800ff5c4_4:;
/* 1800ff5c6: push r13 */
L_1800ff5c6_0:;
L_1800ff5c6_1:;
wr(s->u,28,8,rd(s->r,168,8));
L_1800ff5c6_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff5c6_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,28,8));
L_1800ff5c6_4:;
/* 1800ff5c8: sub rsp, 0x70 */
L_1800ff5c8_0:;
L_1800ff5c8_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x70))));
L_1800ff5c8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x70)),8,1));
L_1800ff5c8_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x70))));
L_1800ff5c8_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff5c8_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800ff5c8_6:;
wr(s->u,36,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800ff5c8_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1800ff5c8_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1800ff5c8_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1800ff5c8_10:;
/* 1800ff5cc: mov rax, qword ptr [rip + 0x84f805] */
L_1800ff5cc_0:;
L_1800ff5cc_1:;
wr(s->r,0,8,mr(UINT64_C(0x18094edd8),8));
L_1800ff5cc_2:;
/* 1800ff5d3: xor rax, rsp */
L_1800ff5d3_0:;
L_1800ff5d3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff5d3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff5d3_3:;
wr(s->r,0,8,(rd(s->r,0,8)^rd(s->r,32,8)));
L_1800ff5d3_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff5d3_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1800ff5d3_6:;
wr(s->u,36,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1800ff5d3_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1800ff5d3_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1800ff5d3_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1800ff5d3_10:;
/* 1800ff5d6: mov qword ptr [rsp + 0x60], rax */
L_1800ff5d6_0:;
L_1800ff5d6_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1800ff5d6_2:;
wr(s->u,20,8,rd(s->r,0,8));
L_1800ff5d6_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1800ff5d6_4:;
/* 1800ff5db: xor r13d, r13d */
L_1800ff5db_0:;
L_1800ff5db_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff5db_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff5db_3:;
wr(s->r,168,4,(rd(s->r,168,4)^rd(s->r,168,4)));
L_1800ff5db_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1800ff5db_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff5db_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1800ff5db_7:;
wr(s->u,36,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1800ff5db_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1800ff5db_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1800ff5db_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1800ff5db_11:;
/* 1800ff5de: mov rdi, r8 */
L_1800ff5de_0:;
L_1800ff5de_1:;
wr(s->r,56,8,rd(s->r,128,8));
L_1800ff5de_2:;
/* 1800ff5e1: mov rbp, rdx */
L_1800ff5e1_0:;
L_1800ff5e1_1:;
wr(s->r,40,8,rd(s->r,16,8));
L_1800ff5e1_2:;
/* 1800ff5e4: mov dword ptr [rdx], r13d */
L_1800ff5e4_0:;
L_1800ff5e4_1:;
wr(s->u,16,4,rd(s->r,168,4));
L_1800ff5e4_2:;
mw((uint64_t)rd(s->r,16,8),4,rd(s->u,16,4));
L_1800ff5e4_3:;
/* 1800ff5e7: lea r8, [rsp + 0x44] */
L_1800ff5e7_0:;
L_1800ff5e7_1:;
wr(s->u,8,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1800ff5e7_2:;
wr(s->r,128,8,rd(s->u,8,8));
L_1800ff5e7_3:;
/* 1800ff5ec: lea r9d, [r13 + 1] */
L_1800ff5ec_0:;
L_1800ff5ec_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0x1))));
L_1800ff5ec_2:;
wr(s->r,136,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1800ff5ec_3:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800ff5ec_4:;
/* 1800ff5f0: xor edx, edx */
L_1800ff5f0_0:;
L_1800ff5f0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff5f0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff5f0_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1800ff5f0_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff5f0_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff5f0_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1800ff5f0_7:;
wr(s->u,36,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1800ff5f0_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1800ff5f0_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1800ff5f0_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1800ff5f0_11:;
/* 1800ff5f2: mov rsi, rcx */
L_1800ff5f2_0:;
L_1800ff5f2_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1800ff5f2_2:;
/* 1800ff5f5: mov qword ptr [rsp + 0x40], r13 */
L_1800ff5f5_0:;
L_1800ff5f5_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff5f5_2:;
wr(s->u,20,8,rd(s->r,168,8));
L_1800ff5f5_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1800ff5f5_4:;
/* 1800ff5fa: call qword ptr [rip + 0x5492f0] */
L_1800ff5fa_0:;
L_1800ff5fa_1:;
wr(s->u,46,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff5fa_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff5fa_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff600)));
L_1800ff5fa_4:;
return (uint64_t)rd(s->u,46,8);
L_1800ff5fa_5:;
return UINT64_C(0x1800ff600);
}
uint64_t b_1800ff600(CPU*s){
/* 1800ff600: mov qword ptr [rsp + 0xb8], rbx */
L_1800ff600_0:;
L_1800ff600_1:;
wr(s->u,8,8,(((U)UINT64_C(0xb8))+rd(s->r,32,8)));
L_1800ff600_2:;
wr(s->u,20,8,rd(s->r,24,8));
L_1800ff600_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1800ff600_4:;
/* 1800ff608: mov r12d, eax */
L_1800ff608_0:;
L_1800ff608_1:;
wr(s->r,160,4,rd(s->r,0,4));
L_1800ff608_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1800ff608_3:;
/* 1800ff60b: mov dword ptr [rsp + 0x40], eax */
L_1800ff60b_0:;
L_1800ff60b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff60b_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1800ff60b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1800ff60b_4:;
/* 1800ff60f: nop  */
L_1800ff60f_0:;
L_1800ff60f_1:;
/* 1800ff610: test rdi, rdi */
L_1800ff610_0:;
L_1800ff610_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff610_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff610_3:;
wr(s->u,38,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1800ff610_4:;
wr(s->r,519,1,(sx(rd(s->u,38,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff610_5:;
wr(s->r,518,1,(rd(s->u,38,8)==((U)UINT64_C(0x0))));
L_1800ff610_6:;
wr(s->u,28,8,(rd(s->u,38,8)&((U)UINT64_C(0xff))));
L_1800ff610_7:;
wr(s->u,36,1,pop(rd(s->u,28,8),8));
L_1800ff610_8:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1800ff610_9:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1800ff610_10:;
/* 1800ff613: je 0x1800ff61f */
L_1800ff613_0:;
L_1800ff613_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff61f);}
L_1800ff613_2:;
return UINT64_C(0x1800ff615);
}
uint64_t b_1800ff610(CPU*s){
/* 1800ff610: test rdi, rdi */
L_1800ff610_0:;
L_1800ff610_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff610_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff610_3:;
wr(s->u,10,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1800ff610_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff610_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800ff610_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800ff610_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ff610_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff610_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff610_10:;
/* 1800ff613: je 0x1800ff61f */
L_1800ff613_0:;
L_1800ff613_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff61f);}
L_1800ff613_2:;
return UINT64_C(0x1800ff615);
}
uint64_t b_1800ff615(CPU*s){
/* 1800ff615: cmp qword ptr [rdi], 0x18 */
L_1800ff615_0:;
L_1800ff615_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff615_2:;
wr(s->u,19,8,rd(s->u,0,8));
L_1800ff615_3:;
wr(s->r,512,1,(rd(s->u,19,8)<((U)UINT64_C(0x18))));
L_1800ff615_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,8),((U)UINT64_C(0x18)),8,1));
L_1800ff615_5:;
wr(s->u,27,8,(rd(s->u,19,8)-((U)UINT64_C(0x18))));
L_1800ff615_6:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff615_7:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1800ff615_8:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1800ff615_9:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1800ff615_10:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ff615_11:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ff615_12:;
/* 1800ff619: jl 0x1800ff6f1 */
L_1800ff619_0:;
L_1800ff619_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1800ff619_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1800ff6f1);}
L_1800ff619_3:;
return UINT64_C(0x1800ff61f);
}
uint64_t b_1800ff61f(CPU*s){
/* 1800ff61f: lea r9, [rsp + 0x30] */
L_1800ff61f_0:;
L_1800ff61f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff61f_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1800ff61f_3:;
/* 1800ff624: lea rdx, [rsp + 0x50] */
L_1800ff624_0:;
L_1800ff624_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1800ff624_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1800ff624_3:;
/* 1800ff629: mov r8d, 0x10 */
L_1800ff629_0:;
L_1800ff629_1:;
wr(s->r,128,8,((U)UINT64_C(0x10)));
L_1800ff629_2:;
/* 1800ff62f: mov rcx, rsi */
L_1800ff62f_0:;
L_1800ff62f_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1800ff62f_2:;
/* 1800ff632: mov qword ptr [rsp + 0x20], r13 */
L_1800ff632_0:;
L_1800ff632_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ff632_2:;
wr(s->u,8,8,rd(s->r,168,8));
L_1800ff632_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff632_4:;
/* 1800ff637: call 0x180034740 */
L_1800ff637_0:;
L_1800ff637_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff637_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff63c)));
L_1800ff637_3:;
return (uint64_t)UINT64_C(0x180034740);
L_1800ff637_4:;
return UINT64_C(0x1800ff63c);
}
uint64_t b_1800ff63c(CPU*s){
/* 1800ff63c: test eax, eax */
L_1800ff63c_0:;
L_1800ff63c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff63c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff63c_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff63c_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff63c_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1800ff63c_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1800ff63c_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1800ff63c_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1800ff63c_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1800ff63c_10:;
/* 1800ff63e: jne 0x1800ff647 */
L_1800ff63e_0:;
L_1800ff63e_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1800ff63e_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800ff647);}
L_1800ff63e_3:;
return UINT64_C(0x1800ff640);
}
uint64_t b_1800ff640(CPU*s){
/* 1800ff640: mov ebx, 0x8004e008 */
L_1800ff640_0:;
L_1800ff640_1:;
wr(s->r,24,8,((U)UINT64_C(0x8004e008)));
L_1800ff640_2:;
/* 1800ff645: jmp 0x1800ff6a0 */
L_1800ff645_0:;
L_1800ff645_1:;
return UINT64_C(0x1800ff6a0);
L_1800ff645_2:;
return UINT64_C(0x1800ff647);
}
uint64_t b_1800ff647(CPU*s){
/* 1800ff647: cmp dword ptr [rsp + 0x30], 0x10 */
L_1800ff647_0:;
L_1800ff647_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff647_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ff647_3:;
wr(s->u,18,4,rd(s->u,8,4));
L_1800ff647_4:;
wr(s->r,512,1,(rd(s->u,18,4)<((U)UINT64_C(0x10))));
L_1800ff647_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),((U)UINT64_C(0x10)),4,1));
L_1800ff647_6:;
wr(s->u,22,4,(rd(s->u,18,4)-((U)UINT64_C(0x10))));
L_1800ff647_7:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff647_8:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1800ff647_9:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1800ff647_10:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1800ff647_11:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1800ff647_12:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1800ff647_13:;
/* 1800ff64c: je 0x1800ff655 */
L_1800ff64c_0:;
L_1800ff64c_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff655);}
L_1800ff64c_2:;
return UINT64_C(0x1800ff64e);
}
uint64_t b_1800ff64e(CPU*s){
/* 1800ff64e: mov ebx, 0x8004e008 */
L_1800ff64e_0:;
L_1800ff64e_1:;
wr(s->r,24,8,((U)UINT64_C(0x8004e008)));
L_1800ff64e_2:;
/* 1800ff653: jmp 0x1800ff6a0 */
L_1800ff653_0:;
L_1800ff653_1:;
return UINT64_C(0x1800ff6a0);
L_1800ff653_2:;
return UINT64_C(0x1800ff655);
}
uint64_t b_1800ff655(CPU*s){
/* 1800ff655: lea r9, [rsp + 0x30] */
L_1800ff655_0:;
L_1800ff655_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff655_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1800ff655_3:;
/* 1800ff65a: lea rdx, [rsp + 0x48] */
L_1800ff65a_0:;
L_1800ff65a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1800ff65a_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1800ff65a_3:;
/* 1800ff65f: mov r8d, 8 */
L_1800ff65f_0:;
L_1800ff65f_1:;
wr(s->r,128,8,((U)UINT64_C(0x8)));
L_1800ff65f_2:;
/* 1800ff665: mov rcx, rsi */
L_1800ff665_0:;
L_1800ff665_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1800ff665_2:;
/* 1800ff668: mov qword ptr [rsp + 0x20], r13 */
L_1800ff668_0:;
L_1800ff668_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ff668_2:;
wr(s->u,8,8,rd(s->r,168,8));
L_1800ff668_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff668_4:;
/* 1800ff66d: call 0x180034740 */
L_1800ff66d_0:;
L_1800ff66d_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff66d_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff672)));
L_1800ff66d_3:;
return (uint64_t)UINT64_C(0x180034740);
L_1800ff66d_4:;
return UINT64_C(0x1800ff672);
}
uint64_t b_1800ff672(CPU*s){
/* 1800ff672: test eax, eax */
L_1800ff672_0:;
L_1800ff672_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff672_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff672_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff672_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff672_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1800ff672_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1800ff672_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1800ff672_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1800ff672_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1800ff672_10:;
/* 1800ff674: jne 0x1800ff67d */
L_1800ff674_0:;
L_1800ff674_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1800ff674_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800ff67d);}
L_1800ff674_3:;
return UINT64_C(0x1800ff676);
}
uint64_t b_1800ff676(CPU*s){
/* 1800ff676: mov ebx, 0x8004e008 */
L_1800ff676_0:;
L_1800ff676_1:;
wr(s->r,24,8,((U)UINT64_C(0x8004e008)));
L_1800ff676_2:;
/* 1800ff67b: jmp 0x1800ff6a0 */
L_1800ff67b_0:;
L_1800ff67b_1:;
return UINT64_C(0x1800ff6a0);
L_1800ff67b_2:;
return UINT64_C(0x1800ff67d);
}
uint64_t b_1800ff67d(CPU*s){
/* 1800ff67d: cmp dword ptr [rsp + 0x30], 8 */
L_1800ff67d_0:;
L_1800ff67d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff67d_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ff67d_3:;
wr(s->u,18,4,rd(s->u,8,4));
L_1800ff67d_4:;
wr(s->r,512,1,(rd(s->u,18,4)<((U)UINT64_C(0x8))));
L_1800ff67d_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),((U)UINT64_C(0x8)),4,1));
L_1800ff67d_6:;
wr(s->u,22,4,(rd(s->u,18,4)-((U)UINT64_C(0x8))));
L_1800ff67d_7:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff67d_8:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1800ff67d_9:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1800ff67d_10:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1800ff67d_11:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1800ff67d_12:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1800ff67d_13:;
/* 1800ff682: je 0x1800ff68b */
L_1800ff682_0:;
L_1800ff682_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff68b);}
L_1800ff682_2:;
return UINT64_C(0x1800ff684);
}
uint64_t b_1800ff684(CPU*s){
/* 1800ff684: mov ebx, 0x8004e008 */
L_1800ff684_0:;
L_1800ff684_1:;
wr(s->r,24,8,((U)UINT64_C(0x8004e008)));
L_1800ff684_2:;
/* 1800ff689: jmp 0x1800ff6a0 */
L_1800ff689_0:;
L_1800ff689_1:;
return UINT64_C(0x1800ff6a0);
L_1800ff689_2:;
return UINT64_C(0x1800ff68b);
}
uint64_t b_1800ff68b(CPU*s){
/* 1800ff68b: mov rax, qword ptr [rsp + 0x48] */
L_1800ff68b_0:;
L_1800ff68b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1800ff68b_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff68b_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1800ff68b_4:;
/* 1800ff690: mov ebx, r13d */
L_1800ff690_0:;
L_1800ff690_1:;
wr(s->r,24,4,rd(s->r,168,4));
L_1800ff690_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1800ff690_3:;
/* 1800ff693: sub rax, 0x18 */
L_1800ff693_0:;
L_1800ff693_1:;
wr(s->r,512,1,(rd(s->r,0,8)<((U)UINT64_C(0x18))));
L_1800ff693_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x18)),8,1));
L_1800ff693_3:;
wr(s->r,0,8,(rd(s->r,0,8)-((U)UINT64_C(0x18))));
L_1800ff693_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff693_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1800ff693_6:;
wr(s->u,24,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1800ff693_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff693_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff693_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff693_10:;
/* 1800ff697: cmovs rax, r13 */
L_1800ff697_0:;
L_1800ff697_1:;
wr(s->u,34,8,rd(s->r,168,8));
L_1800ff697_2:;
wr(s->u,42,1,(!rd(s->r,519,1)));
L_1800ff697_3:;
if(rd(s->u,42,1)){goto L_1800ff69b_0;}
L_1800ff697_4:;
wr(s->r,0,8,rd(s->u,34,8));
L_1800ff697_5:;
/* 1800ff69b: mov qword ptr [rsp + 0x48], rax */
L_1800ff69b_0:;
L_1800ff69b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1800ff69b_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800ff69b_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff69b_4:;
/* 1800ff6a0: test rdi, rdi */
L_1800ff6a0_0:;
L_1800ff6a0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff6a0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff6a0_3:;
wr(s->u,43,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1800ff6a0_4:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff6a0_5:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1800ff6a0_6:;
wr(s->u,24,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1800ff6a0_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff6a0_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff6a0_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff6a0_10:;
/* 1800ff6a3: je 0x1800ff6a9 */
L_1800ff6a3_0:;
L_1800ff6a3_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff6a9);}
L_1800ff6a3_2:;
return UINT64_C(0x1800ff6a5);
}
uint64_t b_1800ff69b(CPU*s){
/* 1800ff69b: mov qword ptr [rsp + 0x48], rax */
L_1800ff69b_0:;
L_1800ff69b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1800ff69b_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800ff69b_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff69b_4:;
/* 1800ff6a0: test rdi, rdi */
L_1800ff6a0_0:;
L_1800ff6a0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff6a0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff6a0_3:;
wr(s->u,26,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1800ff6a0_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff6a0_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1800ff6a0_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1800ff6a0_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff6a0_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff6a0_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff6a0_10:;
/* 1800ff6a3: je 0x1800ff6a9 */
L_1800ff6a3_0:;
L_1800ff6a3_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff6a9);}
L_1800ff6a3_2:;
return UINT64_C(0x1800ff6a5);
}
uint64_t b_1800ff6a0(CPU*s){
/* 1800ff6a0: test rdi, rdi */
L_1800ff6a0_0:;
L_1800ff6a0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff6a0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff6a0_3:;
wr(s->u,10,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1800ff6a0_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff6a0_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800ff6a0_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800ff6a0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ff6a0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff6a0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff6a0_10:;
/* 1800ff6a3: je 0x1800ff6a9 */
L_1800ff6a3_0:;
L_1800ff6a3_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff6a9);}
L_1800ff6a3_2:;
return UINT64_C(0x1800ff6a5);
}
uint64_t b_1800ff6a5(CPU*s){
/* 1800ff6a5: add qword ptr [rdi], -0x18 */
L_1800ff6a5_0:;
L_1800ff6a5_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff6a5_2:;
wr(s->r,512,1,(((rd(s->u,0,8)+((U)UINT64_C(0xffffffffffffffe8)))&(((U)1<<64)-1))<rd(s->u,0,8)));
L_1800ff6a5_3:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff6a5_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,0,8),((U)UINT64_C(0xffffffffffffffe8)),8,0));
L_1800ff6a5_5:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff6a5_6:;
wr(s->u,0,8,(rd(s->u,0,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1800ff6a5_7:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,0,8));
L_1800ff6a5_8:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff6a5_9:;
wr(s->r,519,1,(sx(rd(s->u,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff6a5_10:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff6a5_11:;
wr(s->r,518,1,(rd(s->u,0,8)==((U)UINT64_C(0x0))));
L_1800ff6a5_12:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff6a5_13:;
wr(s->u,9,8,(rd(s->u,0,8)&((U)UINT64_C(0xff))));
L_1800ff6a5_14:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1800ff6a5_15:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ff6a5_16:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ff6a5_17:;
/* 1800ff6a9: test ebx, ebx */
L_1800ff6a9_0:;
L_1800ff6a9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff6a9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff6a9_3:;
wr(s->u,19,4,(rd(s->r,24,4)&rd(s->r,24,4)));
L_1800ff6a9_4:;
wr(s->r,519,1,(sx(rd(s->u,19,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff6a9_5:;
wr(s->r,518,1,(rd(s->u,19,4)==((U)UINT64_C(0x0))));
L_1800ff6a9_6:;
wr(s->u,9,4,(rd(s->u,19,4)&((U)UINT64_C(0xff))));
L_1800ff6a9_7:;
wr(s->u,17,1,pop(rd(s->u,9,4),4));
L_1800ff6a9_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ff6a9_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ff6a9_10:;
/* 1800ff6ab: jne 0x1800ff713 */
L_1800ff6ab_0:;
L_1800ff6ab_1:;
wr(s->u,8,1,(!rd(s->r,518,1)));
L_1800ff6ab_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1800ff713);}
L_1800ff6ab_3:;
return UINT64_C(0x1800ff6ad);
}
uint64_t b_1800ff6a9(CPU*s){
/* 1800ff6a9: test ebx, ebx */
L_1800ff6a9_0:;
L_1800ff6a9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff6a9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff6a9_3:;
wr(s->u,7,4,(rd(s->r,24,4)&rd(s->r,24,4)));
L_1800ff6a9_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff6a9_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1800ff6a9_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1800ff6a9_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1800ff6a9_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1800ff6a9_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1800ff6a9_10:;
/* 1800ff6ab: jne 0x1800ff713 */
L_1800ff6ab_0:;
L_1800ff6ab_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1800ff6ab_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800ff713);}
L_1800ff6ab_3:;
return UINT64_C(0x1800ff6ad);
}
uint64_t b_1800ff6ad(CPU*s){
/* 1800ff6ad: mov rbx, qword ptr [rsp + 0x48] */
L_1800ff6ad_0:;
L_1800ff6ad_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1800ff6ad_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff6ad_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1800ff6ad_4:;
/* 1800ff6b2: mov rax, rbx */
L_1800ff6b2_0:;
L_1800ff6b2_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1800ff6b2_2:;
/* 1800ff6b5: and eax, 7 */
L_1800ff6b5_0:;
L_1800ff6b5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff6b5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff6b5_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x7))));
L_1800ff6b5_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff6b5_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff6b5_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ff6b5_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ff6b5_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1800ff6b5_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1800ff6b5_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1800ff6b5_11:;
/* 1800ff6b8: je 0x1800ff6c1 */
L_1800ff6b8_0:;
L_1800ff6b8_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff6c1);}
L_1800ff6b8_2:;
return UINT64_C(0x1800ff6ba);
}
uint64_t b_1800ff6ba(CPU*s){
/* 1800ff6ba: sub rbx, rax */
L_1800ff6ba_0:;
L_1800ff6ba_1:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->r,0,8)));
L_1800ff6ba_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->r,0,8),8,1));
L_1800ff6ba_3:;
wr(s->r,24,8,(rd(s->r,24,8)-rd(s->r,0,8)));
L_1800ff6ba_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff6ba_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1800ff6ba_6:;
wr(s->u,16,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1800ff6ba_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff6ba_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff6ba_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff6ba_10:;
/* 1800ff6bd: add rbx, 8 */
L_1800ff6bd_0:;
L_1800ff6bd_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1800ff6bd_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x8)),8,0));
L_1800ff6bd_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1800ff6bd_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff6bd_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1800ff6bd_6:;
wr(s->u,16,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1800ff6bd_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff6bd_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff6bd_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff6bd_10:;
/* 1800ff6c1: lea r8, [rsp + 0x3c] */
L_1800ff6c1_0:;
L_1800ff6c1_1:;
wr(s->u,0,8,(((U)UINT64_C(0x3c))+rd(s->r,32,8)));
L_1800ff6c1_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ff6c1_3:;
/* 1800ff6c6: mov r9d, 1 */
L_1800ff6c6_0:;
L_1800ff6c6_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1800ff6c6_2:;
/* 1800ff6cc: mov edx, ebx */
L_1800ff6cc_0:;
L_1800ff6cc_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1800ff6cc_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff6cc_3:;
/* 1800ff6ce: mov rcx, rsi */
L_1800ff6ce_0:;
L_1800ff6ce_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1800ff6ce_2:;
/* 1800ff6d1: mov qword ptr [rsp + 0x38], rbx */
L_1800ff6d1_0:;
L_1800ff6d1_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff6d1_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ff6d1_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff6d1_4:;
/* 1800ff6d6: call qword ptr [rip + 0x549214] */
L_1800ff6d6_0:;
L_1800ff6d6_1:;
wr(s->u,26,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff6d6_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff6d6_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff6dc)));
L_1800ff6d6_4:;
return (uint64_t)rd(s->u,26,8);
L_1800ff6d6_5:;
return UINT64_C(0x1800ff6dc);
}
uint64_t b_1800ff6c1(CPU*s){
/* 1800ff6c1: lea r8, [rsp + 0x3c] */
L_1800ff6c1_0:;
L_1800ff6c1_1:;
wr(s->u,0,8,(((U)UINT64_C(0x3c))+rd(s->r,32,8)));
L_1800ff6c1_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ff6c1_3:;
/* 1800ff6c6: mov r9d, 1 */
L_1800ff6c6_0:;
L_1800ff6c6_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1800ff6c6_2:;
/* 1800ff6cc: mov edx, ebx */
L_1800ff6cc_0:;
L_1800ff6cc_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1800ff6cc_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff6cc_3:;
/* 1800ff6ce: mov rcx, rsi */
L_1800ff6ce_0:;
L_1800ff6ce_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1800ff6ce_2:;
/* 1800ff6d1: mov qword ptr [rsp + 0x38], rbx */
L_1800ff6d1_0:;
L_1800ff6d1_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff6d1_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ff6d1_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff6d1_4:;
/* 1800ff6d6: call qword ptr [rip + 0x549214] */
L_1800ff6d6_0:;
L_1800ff6d6_1:;
wr(s->u,16,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff6d6_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff6d6_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff6dc)));
L_1800ff6d6_4:;
return (uint64_t)rd(s->u,16,8);
L_1800ff6d6_5:;
return UINT64_C(0x1800ff6dc);
}
uint64_t b_1800ff6dc(CPU*s){
/* 1800ff6dc: mov qword ptr [rsp + 0x48], rbx */
L_1800ff6dc_0:;
L_1800ff6dc_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1800ff6dc_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ff6dc_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff6dc_4:;
/* 1800ff6e1: test rdi, rdi */
L_1800ff6e1_0:;
L_1800ff6e1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff6e1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff6e1_3:;
wr(s->u,26,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1800ff6e1_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff6e1_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1800ff6e1_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1800ff6e1_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff6e1_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff6e1_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff6e1_10:;
/* 1800ff6e4: je 0x1800ff6e9 */
L_1800ff6e4_0:;
L_1800ff6e4_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff6e9);}
L_1800ff6e4_2:;
return UINT64_C(0x1800ff6e6);
}
uint64_t b_1800ff6e6(CPU*s){
/* 1800ff6e6: sub qword ptr [rdi], rbx */
L_1800ff6e6_0:;
L_1800ff6e6_1:;
wr(s->u,4,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff6e6_2:;
wr(s->r,512,1,(rd(s->u,4,8)<rd(s->r,24,8)));
L_1800ff6e6_3:;
wr(s->u,4,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff6e6_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,4,8),rd(s->r,24,8),8,1));
L_1800ff6e6_5:;
wr(s->u,4,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff6e6_6:;
wr(s->u,4,8,(rd(s->u,4,8)-rd(s->r,24,8)));
L_1800ff6e6_7:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,4,8));
L_1800ff6e6_8:;
wr(s->u,4,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff6e6_9:;
wr(s->r,519,1,(sx(rd(s->u,4,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff6e6_10:;
wr(s->u,4,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff6e6_11:;
wr(s->r,518,1,(rd(s->u,4,8)==((U)UINT64_C(0x0))));
L_1800ff6e6_12:;
wr(s->u,4,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff6e6_13:;
wr(s->u,12,8,(rd(s->u,4,8)&((U)UINT64_C(0xff))));
L_1800ff6e6_14:;
wr(s->u,20,1,pop(rd(s->u,12,8),8));
L_1800ff6e6_15:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1800ff6e6_16:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1800ff6e6_17:;
/* 1800ff6e9: inc dword ptr [rbp] */
L_1800ff6e9_0:;
L_1800ff6e9_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,40,8),4));
L_1800ff6e9_2:;
wr(s->r,523,1,signed_overflow(rd(s->u,0,4),((U)UINT64_C(0x1)),4,0));
L_1800ff6e9_3:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,40,8),4));
L_1800ff6e9_4:;
wr(s->u,0,4,(rd(s->u,0,4)+((U)UINT64_C(0x1))));
L_1800ff6e9_5:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,0,4));
L_1800ff6e9_6:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,40,8),4));
L_1800ff6e9_7:;
wr(s->r,519,1,(sx(rd(s->u,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff6e9_8:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,40,8),4));
L_1800ff6e9_9:;
wr(s->r,518,1,(rd(s->u,0,4)==((U)UINT64_C(0x0))));
L_1800ff6e9_10:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,40,8),4));
L_1800ff6e9_11:;
wr(s->u,12,4,(rd(s->u,0,4)&((U)UINT64_C(0xff))));
L_1800ff6e9_12:;
wr(s->u,20,1,pop(rd(s->u,12,4),4));
L_1800ff6e9_13:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1800ff6e9_14:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1800ff6e9_15:;
/* 1800ff6ec: jmp 0x1800ff610 */
L_1800ff6ec_0:;
L_1800ff6ec_1:;
return UINT64_C(0x1800ff610);
L_1800ff6ec_2:;
return UINT64_C(0x1800ff6f1);
}
uint64_t b_1800ff6e9(CPU*s){
/* 1800ff6e9: inc dword ptr [rbp] */
L_1800ff6e9_0:;
L_1800ff6e9_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,40,8),4));
L_1800ff6e9_2:;
wr(s->r,523,1,signed_overflow(rd(s->u,0,4),((U)UINT64_C(0x1)),4,0));
L_1800ff6e9_3:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,40,8),4));
L_1800ff6e9_4:;
wr(s->u,0,4,(rd(s->u,0,4)+((U)UINT64_C(0x1))));
L_1800ff6e9_5:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,0,4));
L_1800ff6e9_6:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,40,8),4));
L_1800ff6e9_7:;
wr(s->r,519,1,(sx(rd(s->u,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff6e9_8:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,40,8),4));
L_1800ff6e9_9:;
wr(s->r,518,1,(rd(s->u,0,4)==((U)UINT64_C(0x0))));
L_1800ff6e9_10:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,40,8),4));
L_1800ff6e9_11:;
wr(s->u,4,4,(rd(s->u,0,4)&((U)UINT64_C(0xff))));
L_1800ff6e9_12:;
wr(s->u,8,1,pop(rd(s->u,4,4),4));
L_1800ff6e9_13:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff6e9_14:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff6e9_15:;
/* 1800ff6ec: jmp 0x1800ff610 */
L_1800ff6ec_0:;
L_1800ff6ec_1:;
return UINT64_C(0x1800ff610);
L_1800ff6ec_2:;
return UINT64_C(0x1800ff6f1);
}
uint64_t b_1800ff6f1(CPU*s){
/* 1800ff6f1: mov rax, qword ptr [rsp + 0x40] */
L_1800ff6f1_0:;
L_1800ff6f1_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff6f1_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff6f1_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1800ff6f1_4:;
/* 1800ff6f6: lea r8, [rsp + 0x3c] */
L_1800ff6f6_0:;
L_1800ff6f6_1:;
wr(s->u,0,8,(((U)UINT64_C(0x3c))+rd(s->r,32,8)));
L_1800ff6f6_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ff6f6_3:;
/* 1800ff6fb: xor r9d, r9d */
L_1800ff6fb_0:;
L_1800ff6fb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff6fb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff6fb_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1800ff6fb_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800ff6fb_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff6fb_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1800ff6fb_7:;
wr(s->u,24,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1800ff6fb_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1800ff6fb_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1800ff6fb_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1800ff6fb_11:;
/* 1800ff6fe: mov edx, r12d */
L_1800ff6fe_0:;
L_1800ff6fe_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1800ff6fe_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff6fe_3:;
/* 1800ff701: mov rcx, rsi */
L_1800ff701_0:;
L_1800ff701_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1800ff701_2:;
/* 1800ff704: mov qword ptr [rsp + 0x38], rax */
L_1800ff704_0:;
L_1800ff704_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff704_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800ff704_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff704_4:;
/* 1800ff709: call qword ptr [rip + 0x5491e1] */
L_1800ff709_0:;
L_1800ff709_1:;
wr(s->u,30,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff709_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff709_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff70f)));
L_1800ff709_4:;
return (uint64_t)rd(s->u,30,8);
L_1800ff709_5:;
return UINT64_C(0x1800ff70f);
}
uint64_t b_1800ff70f(CPU*s){
/* 1800ff70f: xor eax, eax */
L_1800ff70f_0:;
L_1800ff70f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff70f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff70f_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1800ff70f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff70f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff70f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ff70f_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ff70f_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800ff70f_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800ff70f_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800ff70f_11:;
/* 1800ff711: jmp 0x1800ff733 */
L_1800ff711_0:;
L_1800ff711_1:;
return UINT64_C(0x1800ff733);
L_1800ff711_2:;
return UINT64_C(0x1800ff713);
}
uint64_t b_1800ff713(CPU*s){
/* 1800ff713: mov rcx, qword ptr [rsp + 0x40] */
L_1800ff713_0:;
L_1800ff713_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff713_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff713_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1800ff713_4:;
/* 1800ff718: lea r8, [rsp + 0x3c] */
L_1800ff718_0:;
L_1800ff718_1:;
wr(s->u,0,8,(((U)UINT64_C(0x3c))+rd(s->r,32,8)));
L_1800ff718_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ff718_3:;
/* 1800ff71d: xor r9d, r9d */
L_1800ff71d_0:;
L_1800ff71d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff71d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff71d_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1800ff71d_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800ff71d_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff71d_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1800ff71d_7:;
wr(s->u,24,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1800ff71d_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1800ff71d_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1800ff71d_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1800ff71d_11:;
/* 1800ff720: mov qword ptr [rsp + 0x38], rcx */
L_1800ff720_0:;
L_1800ff720_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff720_2:;
wr(s->u,8,8,rd(s->r,8,8));
L_1800ff720_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff720_4:;
/* 1800ff725: mov rcx, rsi */
L_1800ff725_0:;
L_1800ff725_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1800ff725_2:;
/* 1800ff728: mov edx, r12d */
L_1800ff728_0:;
L_1800ff728_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1800ff728_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff728_3:;
/* 1800ff72b: call qword ptr [rip + 0x5491bf] */
L_1800ff72b_0:;
L_1800ff72b_1:;
wr(s->u,30,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff72b_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff72b_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff731)));
L_1800ff72b_4:;
return (uint64_t)rd(s->u,30,8);
L_1800ff72b_5:;
return UINT64_C(0x1800ff731);
}
uint64_t b_1800ff731(CPU*s){
/* 1800ff731: mov eax, ebx */
L_1800ff731_0:;
L_1800ff731_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1800ff731_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff731_3:;
/* 1800ff733: mov rbx, qword ptr [rsp + 0xb8] */
L_1800ff733_0:;
L_1800ff733_1:;
wr(s->u,8,8,(((U)UINT64_C(0xb8))+rd(s->r,32,8)));
L_1800ff733_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1800ff733_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1800ff733_4:;
/* 1800ff73b: mov rcx, qword ptr [rsp + 0x60] */
L_1800ff73b_0:;
L_1800ff73b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1800ff73b_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff73b_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1800ff73b_4:;
/* 1800ff740: xor rcx, rsp */
L_1800ff740_0:;
L_1800ff740_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff740_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff740_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800ff740_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff740_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ff740_6:;
wr(s->u,24,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ff740_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff740_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff740_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff740_10:;
/* 1800ff743: call 0x18000d680 */
L_1800ff743_0:;
L_1800ff743_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff743_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff748)));
L_1800ff743_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800ff743_4:;
return UINT64_C(0x1800ff748);
}
uint64_t b_1800ff733(CPU*s){
/* 1800ff733: mov rbx, qword ptr [rsp + 0xb8] */
L_1800ff733_0:;
L_1800ff733_1:;
wr(s->u,8,8,(((U)UINT64_C(0xb8))+rd(s->r,32,8)));
L_1800ff733_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1800ff733_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1800ff733_4:;
/* 1800ff73b: mov rcx, qword ptr [rsp + 0x60] */
L_1800ff73b_0:;
L_1800ff73b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1800ff73b_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff73b_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1800ff73b_4:;
/* 1800ff740: xor rcx, rsp */
L_1800ff740_0:;
L_1800ff740_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff740_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff740_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800ff740_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff740_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ff740_6:;
wr(s->u,24,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ff740_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff740_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff740_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff740_10:;
/* 1800ff743: call 0x18000d680 */
L_1800ff743_0:;
L_1800ff743_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff743_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff748)));
L_1800ff743_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800ff743_4:;
return UINT64_C(0x1800ff748);
}
uint64_t b_1800ff748(CPU*s){
/* 1800ff748: add rsp, 0x70 */
L_1800ff748_0:;
L_1800ff748_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x70)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1800ff748_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x70)),8,0));
L_1800ff748_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x70))));
L_1800ff748_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff748_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800ff748_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800ff748_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ff748_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff748_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff748_10:;
/* 1800ff74c: pop r13 */
L_1800ff74c_0:;
L_1800ff74c_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ff74c_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff74c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff74c_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1800ff74c_5:;
/* 1800ff74e: pop r12 */
L_1800ff74e_0:;
L_1800ff74e_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ff74e_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff74e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff74e_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1800ff74e_5:;
/* 1800ff750: pop rdi */
L_1800ff750_0:;
L_1800ff750_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ff750_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff750_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff750_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1800ff750_5:;
/* 1800ff751: pop rsi */
L_1800ff751_0:;
L_1800ff751_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ff751_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff751_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff751_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1800ff751_5:;
/* 1800ff752: pop rbp */
L_1800ff752_0:;
L_1800ff752_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ff752_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff752_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff752_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1800ff752_5:;
/* 1800ff753: ret  */
L_1800ff753_0:;
L_1800ff753_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff753_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff753_3:;
return (uint64_t)rd(s->r,648,8);
L_1800ff753_4:;
return UINT64_C(0x1800ff754);
}
uint64_t b_1800ff795(CPU*s){
/* 1800ff795: test rdi, rdi */
L_1800ff795_0:;
L_1800ff795_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff795_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff795_3:;
wr(s->u,10,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1800ff795_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff795_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800ff795_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800ff795_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ff795_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff795_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff795_10:;
/* 1800ff798: je 0x1800ff7a4 */
L_1800ff798_0:;
L_1800ff798_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff7a4);}
L_1800ff798_2:;
return UINT64_C(0x1800ff79a);
}
uint64_t b_1800ff79a(CPU*s){
/* 1800ff79a: cmp qword ptr [rdi], 0x18 */
L_1800ff79a_0:;
L_1800ff79a_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff79a_2:;
wr(s->u,19,8,rd(s->u,0,8));
L_1800ff79a_3:;
wr(s->r,512,1,(rd(s->u,19,8)<((U)UINT64_C(0x18))));
L_1800ff79a_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,8),((U)UINT64_C(0x18)),8,1));
L_1800ff79a_5:;
wr(s->u,27,8,(rd(s->u,19,8)-((U)UINT64_C(0x18))));
L_1800ff79a_6:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff79a_7:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1800ff79a_8:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1800ff79a_9:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1800ff79a_10:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ff79a_11:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ff79a_12:;
/* 1800ff79e: jl 0x1800ff89b */
L_1800ff79e_0:;
L_1800ff79e_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1800ff79e_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1800ff89b);}
L_1800ff79e_3:;
return UINT64_C(0x1800ff7a4);
}
uint64_t b_1800ff7a4(CPU*s){
/* 1800ff7a4: lea r9, [rsp + 0x30] */
L_1800ff7a4_0:;
L_1800ff7a4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff7a4_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1800ff7a4_3:;
/* 1800ff7a9: lea rdx, [rsp + 0x48] */
L_1800ff7a9_0:;
L_1800ff7a9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1800ff7a9_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1800ff7a9_3:;
/* 1800ff7ae: mov r8d, 0x10 */
L_1800ff7ae_0:;
L_1800ff7ae_1:;
wr(s->r,128,8,((U)UINT64_C(0x10)));
L_1800ff7ae_2:;
/* 1800ff7b4: mov rcx, r12 */
L_1800ff7b4_0:;
L_1800ff7b4_1:;
wr(s->r,8,8,rd(s->r,160,8));
L_1800ff7b4_2:;
/* 1800ff7b7: mov qword ptr [rsp + 0x20], r13 */
L_1800ff7b7_0:;
L_1800ff7b7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ff7b7_2:;
wr(s->u,8,8,rd(s->r,168,8));
L_1800ff7b7_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff7b7_4:;
/* 1800ff7bc: call 0x180034740 */
L_1800ff7bc_0:;
L_1800ff7bc_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff7bc_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff7c1)));
L_1800ff7bc_3:;
return (uint64_t)UINT64_C(0x180034740);
L_1800ff7bc_4:;
return UINT64_C(0x1800ff7c1);
}
uint64_t b_1800ff7c1(CPU*s){
/* 1800ff7c1: test eax, eax */
L_1800ff7c1_0:;
L_1800ff7c1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff7c1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff7c1_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff7c1_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff7c1_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1800ff7c1_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1800ff7c1_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1800ff7c1_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1800ff7c1_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1800ff7c1_10:;
/* 1800ff7c3: jne 0x1800ff7cc */
L_1800ff7c3_0:;
L_1800ff7c3_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1800ff7c3_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800ff7cc);}
L_1800ff7c3_3:;
return UINT64_C(0x1800ff7c5);
}
uint64_t b_1800ff7c5(CPU*s){
/* 1800ff7c5: mov eax, 0x8004e008 */
L_1800ff7c5_0:;
L_1800ff7c5_1:;
wr(s->r,0,8,((U)UINT64_C(0x8004e008)));
L_1800ff7c5_2:;
/* 1800ff7ca: jmp 0x1800ff825 */
L_1800ff7ca_0:;
L_1800ff7ca_1:;
return UINT64_C(0x1800ff825);
L_1800ff7ca_2:;
return UINT64_C(0x1800ff7cc);
}
uint64_t b_1800ff7cc(CPU*s){
/* 1800ff7cc: cmp dword ptr [rsp + 0x30], 0x10 */
L_1800ff7cc_0:;
L_1800ff7cc_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff7cc_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ff7cc_3:;
wr(s->u,18,4,rd(s->u,8,4));
L_1800ff7cc_4:;
wr(s->r,512,1,(rd(s->u,18,4)<((U)UINT64_C(0x10))));
L_1800ff7cc_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),((U)UINT64_C(0x10)),4,1));
L_1800ff7cc_6:;
wr(s->u,22,4,(rd(s->u,18,4)-((U)UINT64_C(0x10))));
L_1800ff7cc_7:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff7cc_8:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1800ff7cc_9:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1800ff7cc_10:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1800ff7cc_11:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1800ff7cc_12:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1800ff7cc_13:;
/* 1800ff7d1: je 0x1800ff7da */
L_1800ff7d1_0:;
L_1800ff7d1_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff7da);}
L_1800ff7d1_2:;
return UINT64_C(0x1800ff7d3);
}
uint64_t b_1800ff7d3(CPU*s){
/* 1800ff7d3: mov eax, 0x8004e008 */
L_1800ff7d3_0:;
L_1800ff7d3_1:;
wr(s->r,0,8,((U)UINT64_C(0x8004e008)));
L_1800ff7d3_2:;
/* 1800ff7d8: jmp 0x1800ff825 */
L_1800ff7d8_0:;
L_1800ff7d8_1:;
return UINT64_C(0x1800ff825);
L_1800ff7d8_2:;
return UINT64_C(0x1800ff7da);
}
uint64_t b_1800ff7da(CPU*s){
/* 1800ff7da: lea r9, [rsp + 0x30] */
L_1800ff7da_0:;
L_1800ff7da_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff7da_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1800ff7da_3:;
/* 1800ff7df: lea rdx, [rsp + 0x38] */
L_1800ff7df_0:;
L_1800ff7df_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff7df_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1800ff7df_3:;
/* 1800ff7e4: mov r8d, 8 */
L_1800ff7e4_0:;
L_1800ff7e4_1:;
wr(s->r,128,8,((U)UINT64_C(0x8)));
L_1800ff7e4_2:;
/* 1800ff7ea: mov rcx, r12 */
L_1800ff7ea_0:;
L_1800ff7ea_1:;
wr(s->r,8,8,rd(s->r,160,8));
L_1800ff7ea_2:;
/* 1800ff7ed: mov qword ptr [rsp + 0x20], r13 */
L_1800ff7ed_0:;
L_1800ff7ed_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ff7ed_2:;
wr(s->u,8,8,rd(s->r,168,8));
L_1800ff7ed_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff7ed_4:;
/* 1800ff7f2: call 0x180034740 */
L_1800ff7f2_0:;
L_1800ff7f2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff7f2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff7f7)));
L_1800ff7f2_3:;
return (uint64_t)UINT64_C(0x180034740);
L_1800ff7f2_4:;
return UINT64_C(0x1800ff7f7);
}
uint64_t b_1800ff7f7(CPU*s){
/* 1800ff7f7: test eax, eax */
L_1800ff7f7_0:;
L_1800ff7f7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff7f7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff7f7_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff7f7_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff7f7_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1800ff7f7_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1800ff7f7_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1800ff7f7_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1800ff7f7_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1800ff7f7_10:;
/* 1800ff7f9: jne 0x1800ff802 */
L_1800ff7f9_0:;
L_1800ff7f9_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1800ff7f9_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800ff802);}
L_1800ff7f9_3:;
return UINT64_C(0x1800ff7fb);
}
uint64_t b_1800ff7fb(CPU*s){
/* 1800ff7fb: mov eax, 0x8004e008 */
L_1800ff7fb_0:;
L_1800ff7fb_1:;
wr(s->r,0,8,((U)UINT64_C(0x8004e008)));
L_1800ff7fb_2:;
/* 1800ff800: jmp 0x1800ff825 */
L_1800ff800_0:;
L_1800ff800_1:;
return UINT64_C(0x1800ff825);
L_1800ff800_2:;
return UINT64_C(0x1800ff802);
}
uint64_t b_1800ff800(CPU*s){
/* 1800ff800: jmp 0x1800ff825 */
L_1800ff800_0:;
L_1800ff800_1:;
return UINT64_C(0x1800ff825);
L_1800ff800_2:;
return UINT64_C(0x1800ff802);
}
uint64_t b_1800ff802(CPU*s){
/* 1800ff802: cmp dword ptr [rsp + 0x30], 8 */
L_1800ff802_0:;
L_1800ff802_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff802_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ff802_3:;
wr(s->u,18,4,rd(s->u,8,4));
L_1800ff802_4:;
wr(s->r,512,1,(rd(s->u,18,4)<((U)UINT64_C(0x8))));
L_1800ff802_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),((U)UINT64_C(0x8)),4,1));
L_1800ff802_6:;
wr(s->u,22,4,(rd(s->u,18,4)-((U)UINT64_C(0x8))));
L_1800ff802_7:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff802_8:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1800ff802_9:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1800ff802_10:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1800ff802_11:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1800ff802_12:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1800ff802_13:;
/* 1800ff807: je 0x1800ff810 */
L_1800ff807_0:;
L_1800ff807_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff810);}
L_1800ff807_2:;
return UINT64_C(0x1800ff809);
}
uint64_t b_1800ff809(CPU*s){
/* 1800ff809: mov eax, 0x8004e008 */
L_1800ff809_0:;
L_1800ff809_1:;
wr(s->r,0,8,((U)UINT64_C(0x8004e008)));
L_1800ff809_2:;
/* 1800ff80e: jmp 0x1800ff825 */
L_1800ff80e_0:;
L_1800ff80e_1:;
return UINT64_C(0x1800ff825);
L_1800ff80e_2:;
return UINT64_C(0x1800ff810);
}
uint64_t b_1800ff810(CPU*s){
/* 1800ff810: mov rax, qword ptr [rsp + 0x38] */
L_1800ff810_0:;
L_1800ff810_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff810_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff810_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1800ff810_4:;
/* 1800ff815: sub rax, 0x18 */
L_1800ff815_0:;
L_1800ff815_1:;
wr(s->r,512,1,(rd(s->r,0,8)<((U)UINT64_C(0x18))));
L_1800ff815_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x18)),8,1));
L_1800ff815_3:;
wr(s->r,0,8,(rd(s->r,0,8)-((U)UINT64_C(0x18))));
L_1800ff815_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff815_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1800ff815_6:;
wr(s->u,24,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1800ff815_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff815_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff815_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff815_10:;
/* 1800ff819: cmovs rax, r13 */
L_1800ff819_0:;
L_1800ff819_1:;
wr(s->u,34,8,rd(s->r,168,8));
L_1800ff819_2:;
wr(s->u,42,1,(!rd(s->r,519,1)));
L_1800ff819_3:;
if(rd(s->u,42,1)){goto L_1800ff81d_0;}
L_1800ff819_4:;
wr(s->r,0,8,rd(s->u,34,8));
L_1800ff819_5:;
/* 1800ff81d: mov qword ptr [rsp + 0x38], rax */
L_1800ff81d_0:;
L_1800ff81d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff81d_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800ff81d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff81d_4:;
/* 1800ff822: mov eax, r13d */
L_1800ff822_0:;
L_1800ff822_1:;
wr(s->r,0,4,rd(s->r,168,4));
L_1800ff822_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff822_3:;
/* 1800ff825: test rdi, rdi */
L_1800ff825_0:;
L_1800ff825_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff825_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff825_3:;
wr(s->u,43,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1800ff825_4:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff825_5:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1800ff825_6:;
wr(s->u,24,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1800ff825_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ff825_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ff825_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ff825_10:;
/* 1800ff828: je 0x1800ff82e */
L_1800ff828_0:;
L_1800ff828_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff82e);}
L_1800ff828_2:;
return UINT64_C(0x1800ff82a);
}
uint64_t b_1800ff81d(CPU*s){
/* 1800ff81d: mov qword ptr [rsp + 0x38], rax */
L_1800ff81d_0:;
L_1800ff81d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff81d_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800ff81d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff81d_4:;
/* 1800ff822: mov eax, r13d */
L_1800ff822_0:;
L_1800ff822_1:;
wr(s->r,0,4,rd(s->r,168,4));
L_1800ff822_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff822_3:;
/* 1800ff825: test rdi, rdi */
L_1800ff825_0:;
L_1800ff825_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff825_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff825_3:;
wr(s->u,26,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1800ff825_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff825_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1800ff825_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1800ff825_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff825_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff825_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff825_10:;
/* 1800ff828: je 0x1800ff82e */
L_1800ff828_0:;
L_1800ff828_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff82e);}
L_1800ff828_2:;
return UINT64_C(0x1800ff82a);
}
uint64_t b_1800ff825(CPU*s){
/* 1800ff825: test rdi, rdi */
L_1800ff825_0:;
L_1800ff825_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff825_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff825_3:;
wr(s->u,10,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1800ff825_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff825_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800ff825_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800ff825_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ff825_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ff825_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ff825_10:;
/* 1800ff828: je 0x1800ff82e */
L_1800ff828_0:;
L_1800ff828_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff82e);}
L_1800ff828_2:;
return UINT64_C(0x1800ff82a);
}
uint64_t b_1800ff82a(CPU*s){
/* 1800ff82a: add qword ptr [rdi], -0x18 */
L_1800ff82a_0:;
L_1800ff82a_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff82a_2:;
wr(s->r,512,1,(((rd(s->u,0,8)+((U)UINT64_C(0xffffffffffffffe8)))&(((U)1<<64)-1))<rd(s->u,0,8)));
L_1800ff82a_3:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff82a_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,0,8),((U)UINT64_C(0xffffffffffffffe8)),8,0));
L_1800ff82a_5:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff82a_6:;
wr(s->u,0,8,(rd(s->u,0,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1800ff82a_7:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,0,8));
L_1800ff82a_8:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff82a_9:;
wr(s->r,519,1,(sx(rd(s->u,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff82a_10:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff82a_11:;
wr(s->r,518,1,(rd(s->u,0,8)==((U)UINT64_C(0x0))));
L_1800ff82a_12:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff82a_13:;
wr(s->u,9,8,(rd(s->u,0,8)&((U)UINT64_C(0xff))));
L_1800ff82a_14:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1800ff82a_15:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ff82a_16:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ff82a_17:;
/* 1800ff82e: test eax, eax */
L_1800ff82e_0:;
L_1800ff82e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff82e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff82e_3:;
wr(s->u,19,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff82e_4:;
wr(s->r,519,1,(sx(rd(s->u,19,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff82e_5:;
wr(s->r,518,1,(rd(s->u,19,4)==((U)UINT64_C(0x0))));
L_1800ff82e_6:;
wr(s->u,9,4,(rd(s->u,19,4)&((U)UINT64_C(0xff))));
L_1800ff82e_7:;
wr(s->u,17,1,pop(rd(s->u,9,4),4));
L_1800ff82e_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ff82e_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ff82e_10:;
/* 1800ff830: jne 0x1800ff87a */
L_1800ff830_0:;
L_1800ff830_1:;
wr(s->u,8,1,(!rd(s->r,518,1)));
L_1800ff830_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1800ff87a);}
L_1800ff830_3:;
return UINT64_C(0x1800ff832);
}
uint64_t b_1800ff82e(CPU*s){
/* 1800ff82e: test eax, eax */
L_1800ff82e_0:;
L_1800ff82e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff82e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff82e_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff82e_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff82e_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1800ff82e_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1800ff82e_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1800ff82e_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1800ff82e_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1800ff82e_10:;
/* 1800ff830: jne 0x1800ff87a */
L_1800ff830_0:;
L_1800ff830_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1800ff830_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800ff87a);}
L_1800ff830_3:;
return UINT64_C(0x1800ff832);
}
uint64_t b_1800ff832(CPU*s){
/* 1800ff832: mov rbx, qword ptr [rsp + 0x38] */
L_1800ff832_0:;
L_1800ff832_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff832_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff832_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1800ff832_4:;
/* 1800ff837: mov rax, rbx */
L_1800ff837_0:;
L_1800ff837_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1800ff837_2:;
/* 1800ff83a: and eax, 7 */
L_1800ff83a_0:;
L_1800ff83a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff83a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff83a_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x7))));
L_1800ff83a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff83a_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff83a_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ff83a_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ff83a_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1800ff83a_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1800ff83a_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1800ff83a_11:;
/* 1800ff83d: je 0x1800ff846 */
L_1800ff83d_0:;
L_1800ff83d_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff846);}
L_1800ff83d_2:;
return UINT64_C(0x1800ff83f);
}
uint64_t b_1800ff83f(CPU*s){
/* 1800ff83f: sub rbx, rax */
L_1800ff83f_0:;
L_1800ff83f_1:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->r,0,8)));
L_1800ff83f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->r,0,8),8,1));
L_1800ff83f_3:;
wr(s->r,24,8,(rd(s->r,24,8)-rd(s->r,0,8)));
L_1800ff83f_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff83f_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1800ff83f_6:;
wr(s->u,16,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1800ff83f_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff83f_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff83f_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff83f_10:;
/* 1800ff842: add rbx, 8 */
L_1800ff842_0:;
L_1800ff842_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1800ff842_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x8)),8,0));
L_1800ff842_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1800ff842_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff842_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1800ff842_6:;
wr(s->u,16,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1800ff842_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff842_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff842_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff842_10:;
/* 1800ff846: lea r8, [rsp + 0x44] */
L_1800ff846_0:;
L_1800ff846_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1800ff846_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ff846_3:;
/* 1800ff84b: mov r9d, 1 */
L_1800ff84b_0:;
L_1800ff84b_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1800ff84b_2:;
/* 1800ff851: mov edx, ebx */
L_1800ff851_0:;
L_1800ff851_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1800ff851_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff851_3:;
/* 1800ff853: mov rcx, r12 */
L_1800ff853_0:;
L_1800ff853_1:;
wr(s->r,8,8,rd(s->r,160,8));
L_1800ff853_2:;
/* 1800ff856: mov qword ptr [rsp + 0x40], rbx */
L_1800ff856_0:;
L_1800ff856_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff856_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ff856_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff856_4:;
/* 1800ff85b: call qword ptr [rip + 0x54908f] */
L_1800ff85b_0:;
L_1800ff85b_1:;
wr(s->u,26,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff85b_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff85b_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff861)));
L_1800ff85b_4:;
return (uint64_t)rd(s->u,26,8);
L_1800ff85b_5:;
return UINT64_C(0x1800ff861);
}
uint64_t b_1800ff846(CPU*s){
/* 1800ff846: lea r8, [rsp + 0x44] */
L_1800ff846_0:;
L_1800ff846_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1800ff846_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ff846_3:;
/* 1800ff84b: mov r9d, 1 */
L_1800ff84b_0:;
L_1800ff84b_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1800ff84b_2:;
/* 1800ff851: mov edx, ebx */
L_1800ff851_0:;
L_1800ff851_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1800ff851_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff851_3:;
/* 1800ff853: mov rcx, r12 */
L_1800ff853_0:;
L_1800ff853_1:;
wr(s->r,8,8,rd(s->r,160,8));
L_1800ff853_2:;
/* 1800ff856: mov qword ptr [rsp + 0x40], rbx */
L_1800ff856_0:;
L_1800ff856_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff856_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ff856_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff856_4:;
/* 1800ff85b: call qword ptr [rip + 0x54908f] */
L_1800ff85b_0:;
L_1800ff85b_1:;
wr(s->u,16,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff85b_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff85b_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff861)));
L_1800ff85b_4:;
return (uint64_t)rd(s->u,16,8);
L_1800ff85b_5:;
return UINT64_C(0x1800ff861);
}
uint64_t b_1800ff861(CPU*s){
/* 1800ff861: mov qword ptr [rsp + 0x38], rbx */
L_1800ff861_0:;
L_1800ff861_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff861_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ff861_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff861_4:;
/* 1800ff866: test rdi, rdi */
L_1800ff866_0:;
L_1800ff866_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff866_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff866_3:;
wr(s->u,26,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1800ff866_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff866_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1800ff866_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1800ff866_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff866_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff866_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff866_10:;
/* 1800ff869: je 0x1800ff86e */
L_1800ff869_0:;
L_1800ff869_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff86e);}
L_1800ff869_2:;
return UINT64_C(0x1800ff86b);
}
uint64_t b_1800ff86b(CPU*s){
/* 1800ff86b: sub qword ptr [rdi], rbx */
L_1800ff86b_0:;
L_1800ff86b_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff86b_2:;
wr(s->r,512,1,(rd(s->u,0,8)<rd(s->r,24,8)));
L_1800ff86b_3:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff86b_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,0,8),rd(s->r,24,8),8,1));
L_1800ff86b_5:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff86b_6:;
wr(s->u,0,8,(rd(s->u,0,8)-rd(s->r,24,8)));
L_1800ff86b_7:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,0,8));
L_1800ff86b_8:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff86b_9:;
wr(s->r,519,1,(sx(rd(s->u,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff86b_10:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff86b_11:;
wr(s->r,518,1,(rd(s->u,0,8)==((U)UINT64_C(0x0))));
L_1800ff86b_12:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ff86b_13:;
wr(s->u,9,8,(rd(s->u,0,8)&((U)UINT64_C(0xff))));
L_1800ff86b_14:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1800ff86b_15:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ff86b_16:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ff86b_17:;
/* 1800ff86e: inc esi */
L_1800ff86e_0:;
L_1800ff86e_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),((U)UINT64_C(0x1)),4,0));
L_1800ff86e_2:;
wr(s->r,48,4,(rd(s->r,48,4)+((U)UINT64_C(0x1))));
L_1800ff86e_3:;
wr(s->r,48,8,rd(s->r,48,4));
L_1800ff86e_4:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff86e_5:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1800ff86e_6:;
wr(s->u,9,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1800ff86e_7:;
wr(s->u,17,1,pop(rd(s->u,9,4),4));
L_1800ff86e_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ff86e_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ff86e_10:;
/* 1800ff870: cmp ebp, esi */
L_1800ff870_0:;
L_1800ff870_1:;
wr(s->u,19,4,rd(s->r,48,4));
L_1800ff870_2:;
wr(s->r,512,1,(rd(s->r,40,4)<rd(s->u,19,4)));
L_1800ff870_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->u,19,4),4,1));
L_1800ff870_4:;
wr(s->u,23,4,(rd(s->r,40,4)-rd(s->u,19,4)));
L_1800ff870_5:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff870_6:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1800ff870_7:;
wr(s->u,9,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1800ff870_8:;
wr(s->u,17,1,pop(rd(s->u,9,4),4));
L_1800ff870_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ff870_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ff870_11:;
/* 1800ff872: jne 0x1800ff795 */
L_1800ff872_0:;
L_1800ff872_1:;
wr(s->u,8,1,(!rd(s->r,518,1)));
L_1800ff872_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1800ff795);}
L_1800ff872_3:;
return UINT64_C(0x1800ff878);
}
uint64_t b_1800ff86e(CPU*s){
/* 1800ff86e: inc esi */
L_1800ff86e_0:;
L_1800ff86e_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),((U)UINT64_C(0x1)),4,0));
L_1800ff86e_2:;
wr(s->r,48,4,(rd(s->r,48,4)+((U)UINT64_C(0x1))));
L_1800ff86e_3:;
wr(s->r,48,8,rd(s->r,48,4));
L_1800ff86e_4:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff86e_5:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1800ff86e_6:;
wr(s->u,1,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1800ff86e_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1800ff86e_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1800ff86e_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1800ff86e_10:;
/* 1800ff870: cmp ebp, esi */
L_1800ff870_0:;
L_1800ff870_1:;
wr(s->u,7,4,rd(s->r,48,4));
L_1800ff870_2:;
wr(s->r,512,1,(rd(s->r,40,4)<rd(s->u,7,4)));
L_1800ff870_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->u,7,4),4,1));
L_1800ff870_4:;
wr(s->u,11,4,(rd(s->r,40,4)-rd(s->u,7,4)));
L_1800ff870_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff870_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1800ff870_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1800ff870_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1800ff870_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1800ff870_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1800ff870_11:;
/* 1800ff872: jne 0x1800ff795 */
L_1800ff872_0:;
L_1800ff872_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1800ff872_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800ff795);}
L_1800ff872_3:;
return UINT64_C(0x1800ff878);
}
uint64_t b_1800ff878(CPU*s){
/* 1800ff878: xor eax, eax */
L_1800ff878_0:;
L_1800ff878_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff878_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff878_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1800ff878_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff878_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff878_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ff878_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ff878_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1800ff878_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff878_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff878_11:;
/* 1800ff87a: mov rcx, qword ptr [rsp + 0x58] */
L_1800ff87a_0:;
L_1800ff87a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1800ff87a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff87a_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800ff87a_4:;
/* 1800ff87f: xor rcx, rsp */
L_1800ff87f_0:;
L_1800ff87f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff87f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff87f_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800ff87f_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff87f_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ff87f_6:;
wr(s->u,16,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ff87f_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff87f_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff87f_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff87f_10:;
/* 1800ff882: call 0x18000d680 */
L_1800ff882_0:;
L_1800ff882_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff882_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff887)));
L_1800ff882_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800ff882_4:;
return UINT64_C(0x1800ff887);
}
uint64_t b_1800ff87a(CPU*s){
/* 1800ff87a: mov rcx, qword ptr [rsp + 0x58] */
L_1800ff87a_0:;
L_1800ff87a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1800ff87a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff87a_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800ff87a_4:;
/* 1800ff87f: xor rcx, rsp */
L_1800ff87f_0:;
L_1800ff87f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff87f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff87f_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800ff87f_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff87f_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ff87f_6:;
wr(s->u,16,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ff87f_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff87f_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff87f_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff87f_10:;
/* 1800ff882: call 0x18000d680 */
L_1800ff882_0:;
L_1800ff882_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff882_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff887)));
L_1800ff882_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800ff882_4:;
return UINT64_C(0x1800ff887);
}
uint64_t b_1800ff887(CPU*s){
/* 1800ff887: mov rbx, qword ptr [rsp + 0x98] */
L_1800ff887_0:;
L_1800ff887_1:;
wr(s->u,0,8,(((U)UINT64_C(0x98))+rd(s->r,32,8)));
L_1800ff887_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff887_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1800ff887_4:;
/* 1800ff88f: add rsp, 0x60 */
L_1800ff88f_0:;
L_1800ff88f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x60)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1800ff88f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x60)),8,0));
L_1800ff88f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x60))));
L_1800ff88f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff88f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800ff88f_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800ff88f_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff88f_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff88f_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff88f_10:;
/* 1800ff893: pop r13 */
L_1800ff893_0:;
L_1800ff893_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800ff893_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff893_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff893_4:;
wr(s->r,168,8,rd(s->u,26,8));
L_1800ff893_5:;
/* 1800ff895: pop r12 */
L_1800ff895_0:;
L_1800ff895_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800ff895_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff895_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff895_4:;
wr(s->r,160,8,rd(s->u,26,8));
L_1800ff895_5:;
/* 1800ff897: pop rdi */
L_1800ff897_0:;
L_1800ff897_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800ff897_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff897_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff897_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1800ff897_5:;
/* 1800ff898: pop rsi */
L_1800ff898_0:;
L_1800ff898_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800ff898_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff898_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff898_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1800ff898_5:;
/* 1800ff899: pop rbp */
L_1800ff899_0:;
L_1800ff899_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1800ff899_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff899_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff899_4:;
wr(s->r,40,8,rd(s->u,26,8));
L_1800ff899_5:;
/* 1800ff89a: ret  */
L_1800ff89a_0:;
L_1800ff89a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff89a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff89a_3:;
return (uint64_t)rd(s->r,648,8);
L_1800ff89a_4:;
return UINT64_C(0x1800ff89b);
}
uint64_t b_1800ff897(CPU*s){
/* 1800ff897: pop rdi */
L_1800ff897_0:;
L_1800ff897_1:;
wr(s->u,0,8,((U)UINT64_C(0x0)));
L_1800ff897_2:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff897_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff897_4:;
wr(s->r,56,8,rd(s->u,0,8));
L_1800ff897_5:;
/* 1800ff898: pop rsi */
L_1800ff898_0:;
L_1800ff898_1:;
wr(s->u,0,8,((U)UINT64_C(0x0)));
L_1800ff898_2:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff898_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff898_4:;
wr(s->r,48,8,rd(s->u,0,8));
L_1800ff898_5:;
/* 1800ff899: pop rbp */
L_1800ff899_0:;
L_1800ff899_1:;
wr(s->u,0,8,((U)UINT64_C(0x0)));
L_1800ff899_2:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff899_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff899_4:;
wr(s->r,40,8,rd(s->u,0,8));
L_1800ff899_5:;
/* 1800ff89a: ret  */
L_1800ff89a_0:;
L_1800ff89a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ff89a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ff89a_3:;
return (uint64_t)rd(s->r,648,8);
L_1800ff89a_4:;
return UINT64_C(0x1800ff89b);
}
uint64_t b_1800ff89b(CPU*s){
/* 1800ff89b: mov eax, 0x8004e00a */
L_1800ff89b_0:;
L_1800ff89b_1:;
wr(s->r,0,8,((U)UINT64_C(0x8004e00a)));
L_1800ff89b_2:;
/* 1800ff8a0: jmp 0x1800ff87a */
L_1800ff8a0_0:;
L_1800ff8a0_1:;
return UINT64_C(0x1800ff87a);
L_1800ff8a0_2:;
return UINT64_C(0x1800ff8a2);
}
uint64_t b_1800ff8b0(CPU*s){
/* 1800ff8b0: push rbx */
L_1800ff8b0_0:;
L_1800ff8b0_1:;
wr(s->u,0,8,rd(s->r,24,8));
L_1800ff8b0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff8b0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1800ff8b0_4:;
/* 1800ff8b2: push rsi */
L_1800ff8b2_0:;
L_1800ff8b2_1:;
wr(s->u,0,8,rd(s->r,48,8));
L_1800ff8b2_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff8b2_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1800ff8b2_4:;
/* 1800ff8b3: push rdi */
L_1800ff8b3_0:;
L_1800ff8b3_1:;
wr(s->u,0,8,rd(s->r,56,8));
L_1800ff8b3_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff8b3_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1800ff8b3_4:;
/* 1800ff8b4: push r15 */
L_1800ff8b4_0:;
L_1800ff8b4_1:;
wr(s->u,0,8,rd(s->r,184,8));
L_1800ff8b4_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff8b4_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1800ff8b4_4:;
/* 1800ff8b6: sub rsp, 0x78 */
L_1800ff8b6_0:;
L_1800ff8b6_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x78))));
L_1800ff8b6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x78)),8,1));
L_1800ff8b6_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x78))));
L_1800ff8b6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff8b6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800ff8b6_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800ff8b6_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1800ff8b6_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1800ff8b6_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1800ff8b6_10:;
/* 1800ff8ba: xor esi, esi */
L_1800ff8ba_0:;
L_1800ff8ba_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff8ba_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff8ba_3:;
wr(s->r,48,4,(rd(s->r,48,4)^rd(s->r,48,4)));
L_1800ff8ba_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1800ff8ba_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff8ba_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1800ff8ba_7:;
wr(s->u,8,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1800ff8ba_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1800ff8ba_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1800ff8ba_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1800ff8ba_11:;
/* 1800ff8bc: mov r15, r8 */
L_1800ff8bc_0:;
L_1800ff8bc_1:;
wr(s->r,184,8,rd(s->r,128,8));
L_1800ff8bc_2:;
/* 1800ff8bf: mov rbx, rdx */
L_1800ff8bf_0:;
L_1800ff8bf_1:;
wr(s->r,24,8,rd(s->r,16,8));
L_1800ff8bf_2:;
/* 1800ff8c2: mov rdi, rcx */
L_1800ff8c2_0:;
L_1800ff8c2_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1800ff8c2_2:;
/* 1800ff8c5: test r8, r8 */
L_1800ff8c5_0:;
L_1800ff8c5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff8c5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff8c5_3:;
wr(s->u,18,8,(rd(s->r,128,8)&rd(s->r,128,8)));
L_1800ff8c5_4:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff8c5_5:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1800ff8c5_6:;
wr(s->u,8,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1800ff8c5_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1800ff8c5_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1800ff8c5_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1800ff8c5_10:;
/* 1800ff8c8: je 0x1800ff8cd */
L_1800ff8c8_0:;
L_1800ff8c8_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ff8cd);}
L_1800ff8c8_2:;
return UINT64_C(0x1800ff8ca);
}
uint64_t b_1800ff8ca(CPU*s){
/* 1800ff8ca: mov qword ptr [r8], rsi */
L_1800ff8ca_0:;
L_1800ff8ca_1:;
wr(s->u,8,8,rd(s->r,48,8));
L_1800ff8ca_2:;
mw((uint64_t)rd(s->r,128,8),8,rd(s->u,8,8));
L_1800ff8ca_3:;
/* 1800ff8cd: lea r8, [rsp + 0x3c] */
L_1800ff8cd_0:;
L_1800ff8cd_1:;
wr(s->u,0,8,(((U)UINT64_C(0x3c))+rd(s->r,32,8)));
L_1800ff8cd_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ff8cd_3:;
/* 1800ff8d2: xor r9d, r9d */
L_1800ff8d2_0:;
L_1800ff8d2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff8d2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff8d2_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1800ff8d2_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800ff8d2_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff8d2_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1800ff8d2_7:;
wr(s->u,16,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1800ff8d2_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1800ff8d2_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1800ff8d2_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1800ff8d2_11:;
/* 1800ff8d5: xor edx, edx */
L_1800ff8d5_0:;
L_1800ff8d5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff8d5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff8d5_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1800ff8d5_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff8d5_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff8d5_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1800ff8d5_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1800ff8d5_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1800ff8d5_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1800ff8d5_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1800ff8d5_11:;
/* 1800ff8d7: mov qword ptr [rsp + 0x38], rsi */
L_1800ff8d7_0:;
L_1800ff8d7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff8d7_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1800ff8d7_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff8d7_4:;
/* 1800ff8dc: call qword ptr [rip + 0x54900e] */
L_1800ff8dc_0:;
L_1800ff8dc_1:;
wr(s->u,22,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff8dc_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff8dc_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff8e2)));
L_1800ff8dc_4:;
return (uint64_t)rd(s->u,22,8);
L_1800ff8dc_5:;
return UINT64_C(0x1800ff8e2);
}
uint64_t b_1800ff8cd(CPU*s){
/* 1800ff8cd: lea r8, [rsp + 0x3c] */
L_1800ff8cd_0:;
L_1800ff8cd_1:;
wr(s->u,0,8,(((U)UINT64_C(0x3c))+rd(s->r,32,8)));
L_1800ff8cd_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ff8cd_3:;
/* 1800ff8d2: xor r9d, r9d */
L_1800ff8d2_0:;
L_1800ff8d2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff8d2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff8d2_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1800ff8d2_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800ff8d2_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff8d2_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1800ff8d2_7:;
wr(s->u,16,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1800ff8d2_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1800ff8d2_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1800ff8d2_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1800ff8d2_11:;
/* 1800ff8d5: xor edx, edx */
L_1800ff8d5_0:;
L_1800ff8d5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff8d5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff8d5_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1800ff8d5_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff8d5_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff8d5_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1800ff8d5_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1800ff8d5_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1800ff8d5_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1800ff8d5_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1800ff8d5_11:;
/* 1800ff8d7: mov qword ptr [rsp + 0x38], rsi */
L_1800ff8d7_0:;
L_1800ff8d7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff8d7_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1800ff8d7_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff8d7_4:;
/* 1800ff8dc: call qword ptr [rip + 0x54900e] */
L_1800ff8dc_0:;
L_1800ff8dc_1:;
wr(s->u,22,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff8dc_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff8dc_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff8e2)));
L_1800ff8dc_4:;
return (uint64_t)rd(s->u,22,8);
L_1800ff8dc_5:;
return UINT64_C(0x1800ff8e2);
}
uint64_t b_1800ff8e2(CPU*s){
/* 1800ff8e2: lea r8, [rsp + 0x3c] */
L_1800ff8e2_0:;
L_1800ff8e2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x3c))+rd(s->r,32,8)));
L_1800ff8e2_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ff8e2_3:;
/* 1800ff8e7: mov r9d, 2 */
L_1800ff8e7_0:;
L_1800ff8e7_1:;
wr(s->r,136,8,((U)UINT64_C(0x2)));
L_1800ff8e7_2:;
/* 1800ff8ed: xor edx, edx */
L_1800ff8ed_0:;
L_1800ff8ed_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff8ed_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff8ed_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1800ff8ed_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff8ed_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff8ed_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1800ff8ed_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1800ff8ed_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1800ff8ed_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1800ff8ed_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1800ff8ed_11:;
/* 1800ff8ef: mov rcx, rdi */
L_1800ff8ef_0:;
L_1800ff8ef_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ff8ef_2:;
/* 1800ff8f2: mov qword ptr [rsp + 0x38], rsi */
L_1800ff8f2_0:;
L_1800ff8f2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff8f2_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1800ff8f2_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff8f2_4:;
/* 1800ff8f7: call qword ptr [rip + 0x548ff3] */
L_1800ff8f7_0:;
L_1800ff8f7_1:;
wr(s->u,22,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff8f7_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff8f7_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff8fd)));
L_1800ff8f7_4:;
return (uint64_t)rd(s->u,22,8);
L_1800ff8f7_5:;
return UINT64_C(0x1800ff8fd);
}
uint64_t b_1800ff8fd(CPU*s){
/* 1800ff8fd: lea r8, [rsp + 0x34] */
L_1800ff8fd_0:;
L_1800ff8fd_1:;
wr(s->u,0,8,(((U)UINT64_C(0x34))+rd(s->r,32,8)));
L_1800ff8fd_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ff8fd_3:;
/* 1800ff902: xor r9d, r9d */
L_1800ff902_0:;
L_1800ff902_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff902_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff902_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1800ff902_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800ff902_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff902_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1800ff902_7:;
wr(s->u,20,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1800ff902_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1800ff902_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff902_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff902_11:;
/* 1800ff905: xor edx, edx */
L_1800ff905_0:;
L_1800ff905_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff905_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff905_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1800ff905_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff905_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff905_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1800ff905_7:;
wr(s->u,20,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1800ff905_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1800ff905_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff905_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff905_11:;
/* 1800ff907: mov rcx, rdi */
L_1800ff907_0:;
L_1800ff907_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ff907_2:;
/* 1800ff90a: mov dword ptr [rsp + 0x38], eax */
L_1800ff90a_0:;
L_1800ff90a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff90a_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1800ff90a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1800ff90a_4:;
/* 1800ff90e: mov qword ptr [rsp + 0x30], rsi */
L_1800ff90e_0:;
L_1800ff90e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff90e_2:;
wr(s->u,12,8,rd(s->r,48,8));
L_1800ff90e_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1800ff90e_4:;
/* 1800ff913: call qword ptr [rip + 0x548fd7] */
L_1800ff913_0:;
L_1800ff913_1:;
wr(s->u,26,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff913_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff913_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff919)));
L_1800ff913_4:;
return (uint64_t)rd(s->u,26,8);
L_1800ff913_5:;
return UINT64_C(0x1800ff919);
}
uint64_t b_1800ff919(CPU*s){
/* 1800ff919: lea rdx, [rsp + 0x30] */
L_1800ff919_0:;
L_1800ff919_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff919_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1800ff919_3:;
/* 1800ff91e: xor r8d, r8d */
L_1800ff91e_0:;
L_1800ff91e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff91e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff91e_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1800ff91e_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1800ff91e_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff91e_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1800ff91e_7:;
wr(s->u,8,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1800ff91e_8:;
wr(s->u,12,1,pop(rd(s->u,8,4),4));
L_1800ff91e_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1800ff91e_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1800ff91e_11:;
/* 1800ff921: mov rcx, rdi */
L_1800ff921_0:;
L_1800ff921_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ff921_2:;
/* 1800ff924: call 0x1800fe790 */
L_1800ff924_0:;
L_1800ff924_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff924_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff929)));
L_1800ff924_3:;
return (uint64_t)UINT64_C(0x1800fe790);
L_1800ff924_4:;
return UINT64_C(0x1800ff929);
}
uint64_t b_1800ff929(CPU*s){
/* 1800ff929: test eax, eax */
L_1800ff929_0:;
L_1800ff929_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff929_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff929_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff929_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff929_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1800ff929_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1800ff929_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800ff929_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800ff929_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800ff929_10:;
/* 1800ff92b: js 0x1800ffb75 */
L_1800ff92b_0:;
L_1800ff92b_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1800ffb75);}
L_1800ff92b_2:;
return UINT64_C(0x1800ff931);
}
uint64_t b_1800ff931(CPU*s){
/* 1800ff931: mov rax, qword ptr [rsp + 0x30] */
L_1800ff931_0:;
L_1800ff931_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff931_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1800ff931_3:;
wr(s->r,0,8,rd(s->u,32,8));
L_1800ff931_4:;
/* 1800ff936: lea rcx, [rsp + 0x50] */
L_1800ff936_0:;
L_1800ff936_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1800ff936_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800ff936_3:;
/* 1800ff93b: lea r9, [rsp + 0x30] */
L_1800ff93b_0:;
L_1800ff93b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff93b_2:;
wr(s->r,136,8,rd(s->u,8,8));
L_1800ff93b_3:;
/* 1800ff940: mov qword ptr [rsp + 0x30], rax */
L_1800ff940_0:;
L_1800ff940_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff940_2:;
wr(s->u,20,8,rd(s->r,0,8));
L_1800ff940_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1800ff940_4:;
/* 1800ff945: mov eax, dword ptr [rbx] */
L_1800ff945_0:;
L_1800ff945_1:;
wr(s->u,28,4,mr((uint64_t)rd(s->r,24,8),4));
L_1800ff945_2:;
wr(s->r,0,4,rd(s->u,28,4));
L_1800ff945_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff945_4:;
/* 1800ff947: lea r8, [rsp + 0x40] */
L_1800ff947_0:;
L_1800ff947_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff947_2:;
wr(s->r,128,8,rd(s->u,8,8));
L_1800ff947_3:;
/* 1800ff94c: mov dword ptr [rcx], eax */
L_1800ff94c_0:;
L_1800ff94c_1:;
wr(s->u,16,4,rd(s->r,0,4));
L_1800ff94c_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,16,4));
L_1800ff94c_3:;
/* 1800ff94e: mov eax, dword ptr [rbx + 4] */
L_1800ff94e_0:;
L_1800ff94e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x4))));
L_1800ff94e_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ff94e_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1800ff94e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff94e_5:;
/* 1800ff951: lea rdx, [rsp + 0x50] */
L_1800ff951_0:;
L_1800ff951_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1800ff951_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1800ff951_3:;
/* 1800ff956: mov dword ptr [rcx + 4], eax */
L_1800ff956_0:;
L_1800ff956_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1800ff956_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1800ff956_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1800ff956_4:;
/* 1800ff959: mov eax, dword ptr [rbx + 8] */
L_1800ff959_0:;
L_1800ff959_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1800ff959_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ff959_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1800ff959_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff959_5:;
/* 1800ff95c: mov dword ptr [rcx + 8], eax */
L_1800ff95c_0:;
L_1800ff95c_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1800ff95c_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1800ff95c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1800ff95c_4:;
/* 1800ff95f: mov eax, dword ptr [rbx + 0xc] */
L_1800ff95f_0:;
L_1800ff95f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1800ff95f_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ff95f_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1800ff95f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff95f_5:;
/* 1800ff962: mov dword ptr [rcx + 0xc], eax */
L_1800ff962_0:;
L_1800ff962_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1800ff962_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1800ff962_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1800ff962_4:;
/* 1800ff965: mov rcx, rdi */
L_1800ff965_0:;
L_1800ff965_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ff965_2:;
/* 1800ff968: call 0x1800ff0f0 */
L_1800ff968_0:;
L_1800ff968_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff968_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff96d)));
L_1800ff968_3:;
return (uint64_t)UINT64_C(0x1800ff0f0);
L_1800ff968_4:;
return UINT64_C(0x1800ff96d);
}
uint64_t b_1800ff96d(CPU*s){
/* 1800ff96d: test eax, eax */
L_1800ff96d_0:;
L_1800ff96d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff96d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff96d_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ff96d_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff96d_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1800ff96d_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1800ff96d_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800ff96d_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800ff96d_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800ff96d_10:;
/* 1800ff96f: js 0x1800ffb75 */
L_1800ff96f_0:;
L_1800ff96f_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1800ffb75);}
L_1800ff96f_2:;
return UINT64_C(0x1800ff975);
}
uint64_t b_1800ff975(CPU*s){
/* 1800ff975: mov qword ptr [rsp + 0xa8], rbp */
L_1800ff975_0:;
L_1800ff975_1:;
wr(s->u,8,8,(((U)UINT64_C(0xa8))+rd(s->r,32,8)));
L_1800ff975_2:;
wr(s->u,16,8,rd(s->r,40,8));
L_1800ff975_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1800ff975_4:;
/* 1800ff97d: mov rbp, qword ptr [rsp + 0x40] */
L_1800ff97d_0:;
L_1800ff97d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ff97d_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ff97d_3:;
wr(s->r,40,8,rd(s->u,24,8));
L_1800ff97d_4:;
/* 1800ff982: mov qword ptr [rsp + 0x60], r14 */
L_1800ff982_0:;
L_1800ff982_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1800ff982_2:;
wr(s->u,16,8,rd(s->r,176,8));
L_1800ff982_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1800ff982_4:;
/* 1800ff987: mov ecx, ebp */
L_1800ff987_0:;
L_1800ff987_1:;
wr(s->r,8,4,rd(s->r,40,4));
L_1800ff987_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1800ff987_3:;
/* 1800ff989: and ecx, 7 */
L_1800ff989_0:;
L_1800ff989_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff989_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff989_3:;
wr(s->r,8,4,(rd(s->r,8,4)&((U)UINT64_C(0x7))));
L_1800ff989_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1800ff989_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff989_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1800ff989_7:;
wr(s->u,33,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1800ff989_8:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1800ff989_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1800ff989_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1800ff989_11:;
/* 1800ff98c: jbe 0x1800ff998 */
L_1800ff98c_0:;
L_1800ff98c_1:;
wr(s->u,32,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1800ff98c_2:;
if(rd(s->u,32,1)){return UINT64_C(0x1800ff998);}
L_1800ff98c_3:;
return UINT64_C(0x1800ff98e);
}
uint64_t b_1800ff98e(CPU*s){
/* 1800ff98e: mov eax, 8 */
L_1800ff98e_0:;
L_1800ff98e_1:;
wr(s->r,0,8,((U)UINT64_C(0x8)));
L_1800ff98e_2:;
/* 1800ff993: sub eax, ecx */
L_1800ff993_0:;
L_1800ff993_1:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,8,4)));
L_1800ff993_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,8,4),4,1));
L_1800ff993_3:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->r,8,4)));
L_1800ff993_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ff993_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff993_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ff993_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ff993_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1800ff993_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff993_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff993_11:;
/* 1800ff995: add rbp, rax */
L_1800ff995_0:;
L_1800ff995_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1800ff995_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),rd(s->r,0,8),8,0));
L_1800ff995_3:;
wr(s->r,40,8,(rd(s->r,40,8)+rd(s->r,0,8)));
L_1800ff995_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff995_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1800ff995_6:;
wr(s->u,16,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1800ff995_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ff995_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff995_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff995_10:;
/* 1800ff998: lea r8, [rsp + 0x34] */
L_1800ff998_0:;
L_1800ff998_1:;
wr(s->u,0,8,(((U)UINT64_C(0x34))+rd(s->r,32,8)));
L_1800ff998_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ff998_3:;
/* 1800ff99d: mov r9d, 1 */
L_1800ff99d_0:;
L_1800ff99d_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1800ff99d_2:;
/* 1800ff9a3: xor edx, edx */
L_1800ff9a3_0:;
L_1800ff9a3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff9a3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff9a3_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1800ff9a3_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff9a3_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff9a3_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1800ff9a3_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1800ff9a3_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1800ff9a3_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ff9a3_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ff9a3_11:;
/* 1800ff9a5: mov rcx, rdi */
L_1800ff9a5_0:;
L_1800ff9a5_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ff9a5_2:;
/* 1800ff9a8: mov qword ptr [rsp + 0x70], r12 */
L_1800ff9a8_0:;
L_1800ff9a8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1800ff9a8_2:;
wr(s->u,8,8,rd(s->r,160,8));
L_1800ff9a8_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff9a8_4:;
/* 1800ff9ad: mov qword ptr [rsp + 0x30], rsi */
L_1800ff9ad_0:;
L_1800ff9ad_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff9ad_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1800ff9ad_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff9ad_4:;
/* 1800ff9b2: mov qword ptr [rsp + 0x68], r13 */
L_1800ff9b2_0:;
L_1800ff9b2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1800ff9b2_2:;
wr(s->u,8,8,rd(s->r,168,8));
L_1800ff9b2_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff9b2_4:;
/* 1800ff9b7: call qword ptr [rip + 0x548f33] */
L_1800ff9b7_0:;
L_1800ff9b7_1:;
wr(s->u,26,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff9b7_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff9b7_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff9bd)));
L_1800ff9b7_4:;
return (uint64_t)rd(s->u,26,8);
L_1800ff9b7_5:;
return UINT64_C(0x1800ff9bd);
}
uint64_t b_1800ff998(CPU*s){
/* 1800ff998: lea r8, [rsp + 0x34] */
L_1800ff998_0:;
L_1800ff998_1:;
wr(s->u,0,8,(((U)UINT64_C(0x34))+rd(s->r,32,8)));
L_1800ff998_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ff998_3:;
/* 1800ff99d: mov r9d, 1 */
L_1800ff99d_0:;
L_1800ff99d_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1800ff99d_2:;
/* 1800ff9a3: xor edx, edx */
L_1800ff9a3_0:;
L_1800ff9a3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff9a3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff9a3_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1800ff9a3_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff9a3_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ff9a3_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1800ff9a3_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1800ff9a3_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1800ff9a3_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1800ff9a3_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1800ff9a3_11:;
/* 1800ff9a5: mov rcx, rdi */
L_1800ff9a5_0:;
L_1800ff9a5_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ff9a5_2:;
/* 1800ff9a8: mov qword ptr [rsp + 0x70], r12 */
L_1800ff9a8_0:;
L_1800ff9a8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1800ff9a8_2:;
wr(s->u,8,8,rd(s->r,160,8));
L_1800ff9a8_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff9a8_4:;
/* 1800ff9ad: mov qword ptr [rsp + 0x30], rsi */
L_1800ff9ad_0:;
L_1800ff9ad_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff9ad_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1800ff9ad_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff9ad_4:;
/* 1800ff9b2: mov qword ptr [rsp + 0x68], r13 */
L_1800ff9b2_0:;
L_1800ff9b2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1800ff9b2_2:;
wr(s->u,8,8,rd(s->r,168,8));
L_1800ff9b2_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ff9b2_4:;
/* 1800ff9b7: call qword ptr [rip + 0x548f33] */
L_1800ff9b7_0:;
L_1800ff9b7_1:;
wr(s->u,22,8,mr(UINT64_C(0x1806488f0),8));
L_1800ff9b7_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff9b7_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff9bd)));
L_1800ff9b7_4:;
return (uint64_t)rd(s->u,22,8);
L_1800ff9b7_5:;
return UINT64_C(0x1800ff9bd);
}
uint64_t b_1800ff9bd(CPU*s){
/* 1800ff9bd: mov rsi, qword ptr [rsp + 0x38] */
L_1800ff9bd_0:;
L_1800ff9bd_1:;
wr(s->u,16,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ff9bd_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,16,8),8));
L_1800ff9bd_3:;
wr(s->r,48,8,rd(s->u,28,8));
L_1800ff9bd_4:;
/* 1800ff9c2: add rbp, 0x18 */
L_1800ff9c2_0:;
L_1800ff9c2_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x18)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1800ff9c2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x18)),8,0));
L_1800ff9c2_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x18))));
L_1800ff9c2_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff9c2_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1800ff9c2_6:;
wr(s->u,38,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1800ff9c2_7:;
wr(s->u,46,1,pop(rd(s->u,38,8),8));
L_1800ff9c2_8:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1800ff9c2_9:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1800ff9c2_10:;
/* 1800ff9c6: mov dword ptr [rsp + 0x30], eax */
L_1800ff9c6_0:;
L_1800ff9c6_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff9c6_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1800ff9c6_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1800ff9c6_4:;
/* 1800ff9ca: mov r14, qword ptr [rsp + 0x30] */
L_1800ff9ca_0:;
L_1800ff9ca_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ff9ca_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,16,8),8));
L_1800ff9ca_3:;
wr(s->r,176,8,rd(s->u,28,8));
L_1800ff9ca_4:;
/* 1800ff9cf: add r14, -0x18 */
L_1800ff9cf_0:;
L_1800ff9cf_1:;
wr(s->r,512,1,(((rd(s->r,176,8)+((U)UINT64_C(0xffffffffffffffe8)))&(((U)1<<64)-1))<rd(s->r,176,8)));
L_1800ff9cf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,176,8),((U)UINT64_C(0xffffffffffffffe8)),8,0));
L_1800ff9cf_3:;
wr(s->r,176,8,(rd(s->r,176,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1800ff9cf_4:;
wr(s->r,519,1,(sx(rd(s->r,176,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff9cf_5:;
wr(s->r,518,1,(rd(s->r,176,8)==((U)UINT64_C(0x0))));
L_1800ff9cf_6:;
wr(s->u,38,8,(rd(s->r,176,8)&((U)UINT64_C(0xff))));
L_1800ff9cf_7:;
wr(s->u,46,1,pop(rd(s->u,38,8),8));
L_1800ff9cf_8:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1800ff9cf_9:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1800ff9cf_10:;
/* 1800ff9d3: lea rbx, [r14 + rbp] */
L_1800ff9d3_0:;
L_1800ff9d3_1:;
wr(s->u,0,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1800ff9d3_2:;
wr(s->u,8,8,(rd(s->r,176,8)+rd(s->u,0,8)));
L_1800ff9d3_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1800ff9d3_4:;
/* 1800ff9d7: sub rsi, rbx */
L_1800ff9d7_0:;
L_1800ff9d7_1:;
wr(s->r,512,1,(rd(s->r,48,8)<rd(s->r,24,8)));
L_1800ff9d7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),rd(s->r,24,8),8,1));
L_1800ff9d7_3:;
wr(s->r,48,8,(rd(s->r,48,8)-rd(s->r,24,8)));
L_1800ff9d7_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff9d7_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1800ff9d7_6:;
wr(s->u,38,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1800ff9d7_7:;
wr(s->u,46,1,pop(rd(s->u,38,8),8));
L_1800ff9d7_8:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1800ff9d7_9:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1800ff9d7_10:;
/* 1800ff9da: test rsi, rsi */
L_1800ff9da_0:;
L_1800ff9da_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ff9da_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ff9da_3:;
wr(s->u,48,8,(rd(s->r,48,8)&rd(s->r,48,8)));
L_1800ff9da_4:;
wr(s->r,519,1,(sx(rd(s->u,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff9da_5:;
wr(s->r,518,1,(rd(s->u,48,8)==((U)UINT64_C(0x0))));
L_1800ff9da_6:;
wr(s->u,38,8,(rd(s->u,48,8)&((U)UINT64_C(0xff))));
L_1800ff9da_7:;
wr(s->u,46,1,pop(rd(s->u,38,8),8));
L_1800ff9da_8:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1800ff9da_9:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1800ff9da_10:;
/* 1800ff9dd: jle 0x1800ffb24 */
L_1800ff9dd_0:;
L_1800ff9dd_1:;
wr(s->u,36,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1800ff9dd_2:;
wr(s->u,37,1,((rd(s->r,518,1)!=0)||(rd(s->u,36,1)!=0)));
L_1800ff9dd_3:;
if(rd(s->u,37,1)){return UINT64_C(0x1800ffb24);}
L_1800ff9dd_4:;
return UINT64_C(0x1800ff9e3);
}
uint64_t b_1800ff9e3(CPU*s){
/* 1800ff9e3: mov r12d, 0x1000 */
L_1800ff9e3_0:;
L_1800ff9e3_1:;
wr(s->r,160,8,((U)UINT64_C(0x1000)));
L_1800ff9e3_2:;
/* 1800ff9e9: mov ecx, 1 */
L_1800ff9e9_0:;
L_1800ff9e9_1:;
wr(s->r,8,8,((U)UINT64_C(0x1)));
L_1800ff9e9_2:;
/* 1800ff9ee: cmp rsi, r12 */
L_1800ff9ee_0:;
L_1800ff9ee_1:;
wr(s->u,28,8,rd(s->r,160,8));
L_1800ff9ee_2:;
wr(s->r,512,1,(rd(s->r,48,8)<rd(s->u,28,8)));
L_1800ff9ee_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),rd(s->u,28,8),8,1));
L_1800ff9ee_4:;
wr(s->u,36,8,(rd(s->r,48,8)-rd(s->u,28,8)));
L_1800ff9ee_5:;
wr(s->r,519,1,(sx(rd(s->u,36,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ff9ee_6:;
wr(s->r,518,1,(rd(s->u,36,8)==((U)UINT64_C(0x0))));
L_1800ff9ee_7:;
wr(s->u,1,8,(rd(s->u,36,8)&((U)UINT64_C(0xff))));
L_1800ff9ee_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1800ff9ee_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1800ff9ee_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1800ff9ee_11:;
/* 1800ff9f1: cmovl r12, rsi */
L_1800ff9f1_0:;
L_1800ff9f1_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1800ff9f1_2:;
wr(s->u,19,8,rd(s->r,48,8));
L_1800ff9f1_3:;
wr(s->u,27,1,(!rd(s->u,0,1)));
L_1800ff9f1_4:;
if(rd(s->u,27,1)){goto L_1800ff9f5_0;}
L_1800ff9f1_5:;
wr(s->r,160,8,rd(s->u,19,8));
L_1800ff9f1_6:;
/* 1800ff9f5: mov edx, r12d */
L_1800ff9f5_0:;
L_1800ff9f5_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1800ff9f5_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff9f5_3:;
/* 1800ff9f8: call qword ptr [rip + 0x54948a] */
L_1800ff9f8_0:;
L_1800ff9f8_1:;
wr(s->u,11,8,mr(UINT64_C(0x180648e88),8));
L_1800ff9f8_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff9f8_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff9fe)));
L_1800ff9f8_4:;
return (uint64_t)rd(s->u,11,8);
L_1800ff9f8_5:;
return UINT64_C(0x1800ff9fe);
}
uint64_t b_1800ff9f5(CPU*s){
/* 1800ff9f5: mov edx, r12d */
L_1800ff9f5_0:;
L_1800ff9f5_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1800ff9f5_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ff9f5_3:;
/* 1800ff9f8: call qword ptr [rip + 0x54948a] */
L_1800ff9f8_0:;
L_1800ff9f8_1:;
wr(s->u,0,8,mr(UINT64_C(0x180648e88),8));
L_1800ff9f8_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ff9f8_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ff9fe)));
L_1800ff9f8_4:;
return (uint64_t)rd(s->u,0,8);
L_1800ff9f8_5:;
return UINT64_C(0x1800ff9fe);
}
uint64_t b_1800ff9fe(CPU*s){
/* 1800ff9fe: mov r13, rax */
L_1800ff9fe_0:;
L_1800ff9fe_1:;
wr(s->r,168,8,rd(s->r,0,8));
L_1800ff9fe_2:;
/* 1800ffa01: test rax, rax */
L_1800ffa01_0:;
L_1800ffa01_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffa01_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffa01_3:;
wr(s->u,11,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1800ffa01_4:;
wr(s->r,519,1,(sx(rd(s->u,11,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffa01_5:;
wr(s->r,518,1,(rd(s->u,11,8)==((U)UINT64_C(0x0))));
L_1800ffa01_6:;
wr(s->u,1,8,(rd(s->u,11,8)&((U)UINT64_C(0xff))));
L_1800ffa01_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1800ffa01_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1800ffa01_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1800ffa01_10:;
/* 1800ffa04: jne 0x1800ffa10 */
L_1800ffa04_0:;
L_1800ffa04_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1800ffa04_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800ffa10);}
L_1800ffa04_3:;
return UINT64_C(0x1800ffa06);
}
uint64_t b_1800ffa06(CPU*s){
/* 1800ffa06: mov eax, 0x8007000e */
L_1800ffa06_0:;
L_1800ffa06_1:;
wr(s->r,0,8,((U)UINT64_C(0x8007000e)));
L_1800ffa06_2:;
/* 1800ffa0b: jmp 0x1800ffb5e */
L_1800ffa0b_0:;
L_1800ffa0b_1:;
return UINT64_C(0x1800ffb5e);
L_1800ffa0b_2:;
return UINT64_C(0x1800ffa10);
}
uint64_t b_1800ffa10(CPU*s){
/* 1800ffa10: lea r8, [rsp + 0x44] */
L_1800ffa10_0:;
L_1800ffa10_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1800ffa10_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ffa10_3:;
/* 1800ffa15: xor r9d, r9d */
L_1800ffa15_0:;
L_1800ffa15_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffa15_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffa15_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1800ffa15_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800ffa15_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffa15_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1800ffa15_7:;
wr(s->u,16,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1800ffa15_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1800ffa15_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1800ffa15_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1800ffa15_11:;
/* 1800ffa18: mov edx, ebx */
L_1800ffa18_0:;
L_1800ffa18_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1800ffa18_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ffa18_3:;
/* 1800ffa1a: mov rcx, rdi */
L_1800ffa1a_0:;
L_1800ffa1a_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ffa1a_2:;
/* 1800ffa1d: mov qword ptr [rsp + 0x40], rbx */
L_1800ffa1d_0:;
L_1800ffa1d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ffa1d_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ffa1d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffa1d_4:;
/* 1800ffa22: call qword ptr [rip + 0x548ec8] */
L_1800ffa22_0:;
L_1800ffa22_1:;
wr(s->u,22,8,mr(UINT64_C(0x1806488f0),8));
L_1800ffa22_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffa22_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffa28)));
L_1800ffa22_4:;
return (uint64_t)rd(s->u,22,8);
L_1800ffa22_5:;
return UINT64_C(0x1800ffa28);
}
uint64_t b_1800ffa28(CPU*s){
/* 1800ffa28: nop dword ptr [rax + rax] */
L_1800ffa28_0:;
L_1800ffa28_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1800ffa28_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1800ffa28_3:;
/* 1800ffa30: mov ebx, r12d */
L_1800ffa30_0:;
L_1800ffa30_1:;
wr(s->r,24,4,rd(s->r,160,4));
L_1800ffa30_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1800ffa30_3:;
/* 1800ffa33: cmp rsi, r12 */
L_1800ffa33_0:;
L_1800ffa33_1:;
wr(s->u,48,8,rd(s->r,160,8));
L_1800ffa33_2:;
wr(s->r,512,1,(rd(s->r,48,8)<rd(s->u,48,8)));
L_1800ffa33_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),rd(s->u,48,8),8,1));
L_1800ffa33_4:;
wr(s->u,56,8,(rd(s->r,48,8)-rd(s->u,48,8)));
L_1800ffa33_5:;
wr(s->r,519,1,(sx(rd(s->u,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffa33_6:;
wr(s->r,518,1,(rd(s->u,56,8)==((U)UINT64_C(0x0))));
L_1800ffa33_7:;
wr(s->u,33,8,(rd(s->u,56,8)&((U)UINT64_C(0xff))));
L_1800ffa33_8:;
wr(s->u,41,1,pop(rd(s->u,33,8),8));
L_1800ffa33_9:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1800ffa33_10:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1800ffa33_11:;
/* 1800ffa36: lea r9, [rsp + 0x48] */
L_1800ffa36_0:;
L_1800ffa36_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1800ffa36_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1800ffa36_3:;
/* 1800ffa3b: cmovl ebx, esi */
L_1800ffa3b_0:;
L_1800ffa3b_1:;
wr(s->u,32,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1800ffa3b_2:;
wr(s->u,43,4,rd(s->r,48,4));
L_1800ffa3b_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1800ffa3b_4:;
wr(s->u,47,1,(!rd(s->u,32,1)));
L_1800ffa3b_5:;
if(rd(s->u,47,1)){goto L_1800ffa3e_0;}
L_1800ffa3b_6:;
wr(s->r,24,4,rd(s->u,43,4));
L_1800ffa3b_7:;
/* 1800ffa3e: mov rdx, r13 */
L_1800ffa3e_0:;
L_1800ffa3e_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1800ffa3e_2:;
/* 1800ffa41: mov rcx, rdi */
L_1800ffa41_0:;
L_1800ffa41_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ffa41_2:;
/* 1800ffa44: mov r8d, ebx */
L_1800ffa44_0:;
L_1800ffa44_1:;
wr(s->r,128,4,rd(s->r,24,4));
L_1800ffa44_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1800ffa44_3:;
/* 1800ffa47: mov qword ptr [rsp + 0x20], 0 */
L_1800ffa47_0:;
L_1800ffa47_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ffa47_2:;
wr(s->u,24,8,((U)UINT64_C(0x0)));
L_1800ffa47_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,24,8));
L_1800ffa47_4:;
/* 1800ffa50: call 0x180034740 */
L_1800ffa50_0:;
L_1800ffa50_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffa50_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffa55)));
L_1800ffa50_3:;
return (uint64_t)UINT64_C(0x180034740);
L_1800ffa50_4:;
return UINT64_C(0x1800ffa55);
}
uint64_t b_1800ffa30(CPU*s){
/* 1800ffa30: mov ebx, r12d */
L_1800ffa30_0:;
L_1800ffa30_1:;
wr(s->r,24,4,rd(s->r,160,4));
L_1800ffa30_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1800ffa30_3:;
/* 1800ffa33: cmp rsi, r12 */
L_1800ffa33_0:;
L_1800ffa33_1:;
wr(s->u,32,8,rd(s->r,160,8));
L_1800ffa33_2:;
wr(s->r,512,1,(rd(s->r,48,8)<rd(s->u,32,8)));
L_1800ffa33_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),rd(s->u,32,8),8,1));
L_1800ffa33_4:;
wr(s->u,40,8,(rd(s->r,48,8)-rd(s->u,32,8)));
L_1800ffa33_5:;
wr(s->r,519,1,(sx(rd(s->u,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffa33_6:;
wr(s->r,518,1,(rd(s->u,40,8)==((U)UINT64_C(0x0))));
L_1800ffa33_7:;
wr(s->u,17,8,(rd(s->u,40,8)&((U)UINT64_C(0xff))));
L_1800ffa33_8:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1800ffa33_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1800ffa33_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1800ffa33_11:;
/* 1800ffa36: lea r9, [rsp + 0x48] */
L_1800ffa36_0:;
L_1800ffa36_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1800ffa36_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1800ffa36_3:;
/* 1800ffa3b: cmovl ebx, esi */
L_1800ffa3b_0:;
L_1800ffa3b_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1800ffa3b_2:;
wr(s->u,27,4,rd(s->r,48,4));
L_1800ffa3b_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1800ffa3b_4:;
wr(s->u,31,1,(!rd(s->u,16,1)));
L_1800ffa3b_5:;
if(rd(s->u,31,1)){goto L_1800ffa3e_0;}
L_1800ffa3b_6:;
wr(s->r,24,4,rd(s->u,27,4));
L_1800ffa3b_7:;
/* 1800ffa3e: mov rdx, r13 */
L_1800ffa3e_0:;
L_1800ffa3e_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1800ffa3e_2:;
/* 1800ffa41: mov rcx, rdi */
L_1800ffa41_0:;
L_1800ffa41_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ffa41_2:;
/* 1800ffa44: mov r8d, ebx */
L_1800ffa44_0:;
L_1800ffa44_1:;
wr(s->r,128,4,rd(s->r,24,4));
L_1800ffa44_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1800ffa44_3:;
/* 1800ffa47: mov qword ptr [rsp + 0x20], 0 */
L_1800ffa47_0:;
L_1800ffa47_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ffa47_2:;
wr(s->u,8,8,((U)UINT64_C(0x0)));
L_1800ffa47_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffa47_4:;
/* 1800ffa50: call 0x180034740 */
L_1800ffa50_0:;
L_1800ffa50_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffa50_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffa55)));
L_1800ffa50_3:;
return (uint64_t)UINT64_C(0x180034740);
L_1800ffa50_4:;
return UINT64_C(0x1800ffa55);
}
uint64_t b_1800ffa3e(CPU*s){
/* 1800ffa3e: mov rdx, r13 */
L_1800ffa3e_0:;
L_1800ffa3e_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1800ffa3e_2:;
/* 1800ffa41: mov rcx, rdi */
L_1800ffa41_0:;
L_1800ffa41_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ffa41_2:;
/* 1800ffa44: mov r8d, ebx */
L_1800ffa44_0:;
L_1800ffa44_1:;
wr(s->r,128,4,rd(s->r,24,4));
L_1800ffa44_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1800ffa44_3:;
/* 1800ffa47: mov qword ptr [rsp + 0x20], 0 */
L_1800ffa47_0:;
L_1800ffa47_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ffa47_2:;
wr(s->u,8,8,((U)UINT64_C(0x0)));
L_1800ffa47_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffa47_4:;
/* 1800ffa50: call 0x180034740 */
L_1800ffa50_0:;
L_1800ffa50_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffa50_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffa55)));
L_1800ffa50_3:;
return (uint64_t)UINT64_C(0x180034740);
L_1800ffa50_4:;
return UINT64_C(0x1800ffa55);
}
uint64_t b_1800ffa55(CPU*s){
/* 1800ffa55: cmp dword ptr [rsp + 0x48], ebx */
L_1800ffa55_0:;
L_1800ffa55_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1800ffa55_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ffa55_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1800ffa55_4:;
wr(s->r,512,1,(rd(s->u,19,4)<rd(s->r,24,4)));
L_1800ffa55_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),rd(s->r,24,4),4,1));
L_1800ffa55_6:;
wr(s->u,23,4,(rd(s->u,19,4)-rd(s->r,24,4)));
L_1800ffa55_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffa55_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1800ffa55_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1800ffa55_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1800ffa55_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ffa55_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ffa55_13:;
/* 1800ffa59: jne 0x1800ffb86 */
L_1800ffa59_0:;
L_1800ffa59_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1800ffa59_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1800ffb86);}
L_1800ffa59_3:;
return UINT64_C(0x1800ffa5f);
}
uint64_t b_1800ffa5f(CPU*s){
/* 1800ffa5f: lea r8, [rsp + 0x34] */
L_1800ffa5f_0:;
L_1800ffa5f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x34))+rd(s->r,32,8)));
L_1800ffa5f_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ffa5f_3:;
/* 1800ffa64: mov r9d, 1 */
L_1800ffa64_0:;
L_1800ffa64_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1800ffa64_2:;
/* 1800ffa6a: xor edx, edx */
L_1800ffa6a_0:;
L_1800ffa6a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffa6a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffa6a_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1800ffa6a_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ffa6a_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffa6a_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1800ffa6a_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1800ffa6a_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1800ffa6a_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1800ffa6a_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1800ffa6a_11:;
/* 1800ffa6c: mov rcx, rdi */
L_1800ffa6c_0:;
L_1800ffa6c_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ffa6c_2:;
/* 1800ffa6f: mov qword ptr [rsp + 0x30], 0 */
L_1800ffa6f_0:;
L_1800ffa6f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ffa6f_2:;
wr(s->u,8,8,((U)UINT64_C(0x0)));
L_1800ffa6f_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffa6f_4:;
/* 1800ffa78: call qword ptr [rip + 0x548e72] */
L_1800ffa78_0:;
L_1800ffa78_1:;
wr(s->u,22,8,mr(UINT64_C(0x1806488f0),8));
L_1800ffa78_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffa78_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffa7e)));
L_1800ffa78_4:;
return (uint64_t)rd(s->u,22,8);
L_1800ffa78_5:;
return UINT64_C(0x1800ffa7e);
}
uint64_t b_1800ffa7e(CPU*s){
/* 1800ffa7e: lea r8, [rsp + 0x44] */
L_1800ffa7e_0:;
L_1800ffa7e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1800ffa7e_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ffa7e_3:;
/* 1800ffa83: xor r9d, r9d */
L_1800ffa83_0:;
L_1800ffa83_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffa83_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffa83_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1800ffa83_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800ffa83_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffa83_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1800ffa83_7:;
wr(s->u,20,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1800ffa83_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1800ffa83_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ffa83_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ffa83_11:;
/* 1800ffa86: mov edx, r14d */
L_1800ffa86_0:;
L_1800ffa86_1:;
wr(s->r,16,4,rd(s->r,176,4));
L_1800ffa86_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ffa86_3:;
/* 1800ffa89: mov rcx, rdi */
L_1800ffa89_0:;
L_1800ffa89_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ffa89_2:;
/* 1800ffa8c: mov qword ptr [rsp + 0x40], r14 */
L_1800ffa8c_0:;
L_1800ffa8c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ffa8c_2:;
wr(s->u,12,8,rd(s->r,176,8));
L_1800ffa8c_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1800ffa8c_4:;
/* 1800ffa91: mov ebx, eax */
L_1800ffa91_0:;
L_1800ffa91_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1800ffa91_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1800ffa91_3:;
/* 1800ffa93: mov dword ptr [rsp + 0x30], eax */
L_1800ffa93_0:;
L_1800ffa93_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ffa93_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1800ffa93_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1800ffa93_4:;
/* 1800ffa97: call qword ptr [rip + 0x548e53] */
L_1800ffa97_0:;
L_1800ffa97_1:;
wr(s->u,26,8,mr(UINT64_C(0x1806488f0),8));
L_1800ffa97_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffa97_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffa9d)));
L_1800ffa97_4:;
return (uint64_t)rd(s->u,26,8);
L_1800ffa97_5:;
return UINT64_C(0x1800ffa9d);
}
uint64_t b_1800ffa9d(CPU*s){
/* 1800ffa9d: mov r8d, dword ptr [rsp + 0x48] */
L_1800ffa9d_0:;
L_1800ffa9d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1800ffa9d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ffa9d_3:;
wr(s->r,128,4,rd(s->u,16,4));
L_1800ffa9d_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1800ffa9d_5:;
/* 1800ffaa2: lea r9, [rsp + 0x4c] */
L_1800ffaa2_0:;
L_1800ffaa2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x4c))+rd(s->r,32,8)));
L_1800ffaa2_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1800ffaa2_3:;
/* 1800ffaa7: xor r14d, r14d */
L_1800ffaa7_0:;
L_1800ffaa7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffaa7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffaa7_3:;
wr(s->r,176,4,(rd(s->r,176,4)^rd(s->r,176,4)));
L_1800ffaa7_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1800ffaa7_5:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffaa7_6:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1800ffaa7_7:;
wr(s->u,20,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1800ffaa7_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1800ffaa7_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ffaa7_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ffaa7_11:;
/* 1800ffaaa: mov rdx, r13 */
L_1800ffaaa_0:;
L_1800ffaaa_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1800ffaaa_2:;
/* 1800ffaad: mov rcx, rdi */
L_1800ffaad_0:;
L_1800ffaad_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ffaad_2:;
/* 1800ffab0: mov qword ptr [rsp + 0x20], r14 */
L_1800ffab0_0:;
L_1800ffab0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ffab0_2:;
wr(s->u,8,8,rd(s->r,176,8));
L_1800ffab0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffab0_4:;
/* 1800ffab5: call qword ptr [rip + 0x5489e5] */
L_1800ffab5_0:;
L_1800ffab5_1:;
wr(s->u,26,8,mr(UINT64_C(0x1806484a0),8));
L_1800ffab5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffab5_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffabb)));
L_1800ffab5_4:;
return (uint64_t)rd(s->u,26,8);
L_1800ffab5_5:;
return UINT64_C(0x1800ffabb);
}
uint64_t b_1800ffabb(CPU*s){
/* 1800ffabb: mov r11d, dword ptr [rsp + 0x48] */
L_1800ffabb_0:;
L_1800ffabb_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1800ffabb_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ffabb_3:;
wr(s->r,152,4,rd(s->u,8,4));
L_1800ffabb_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1800ffabb_5:;
/* 1800ffac0: cmp dword ptr [rsp + 0x4c], r11d */
L_1800ffac0_0:;
L_1800ffac0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x4c))+rd(s->r,32,8)));
L_1800ffac0_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ffac0_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1800ffac0_4:;
wr(s->r,512,1,(rd(s->u,19,4)<rd(s->r,152,4)));
L_1800ffac0_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),rd(s->r,152,4),4,1));
L_1800ffac0_6:;
wr(s->u,23,4,(rd(s->u,19,4)-rd(s->r,152,4)));
L_1800ffac0_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffac0_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1800ffac0_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1800ffac0_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1800ffac0_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ffac0_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ffac0_13:;
/* 1800ffac5: jne 0x1800ffb7f */
L_1800ffac5_0:;
L_1800ffac5_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1800ffac5_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1800ffb7f);}
L_1800ffac5_3:;
return UINT64_C(0x1800ffacb);
}
uint64_t b_1800ffacb(CPU*s){
/* 1800ffacb: lea r9d, [r14 + 1] */
L_1800ffacb_0:;
L_1800ffacb_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x1))));
L_1800ffacb_2:;
wr(s->r,136,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1800ffacb_3:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800ffacb_4:;
/* 1800ffacf: lea r8, [rsp + 0x3c] */
L_1800ffacf_0:;
L_1800ffacf_1:;
wr(s->u,8,8,(((U)UINT64_C(0x3c))+rd(s->r,32,8)));
L_1800ffacf_2:;
wr(s->r,128,8,rd(s->u,8,8));
L_1800ffacf_3:;
/* 1800ffad4: xor edx, edx */
L_1800ffad4_0:;
L_1800ffad4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffad4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffad4_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1800ffad4_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ffad4_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffad4_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1800ffad4_7:;
wr(s->u,24,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1800ffad4_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1800ffad4_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1800ffad4_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1800ffad4_11:;
/* 1800ffad6: mov rcx, rdi */
L_1800ffad6_0:;
L_1800ffad6_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ffad6_2:;
/* 1800ffad9: mov qword ptr [rsp + 0x38], r14 */
L_1800ffad9_0:;
L_1800ffad9_1:;
wr(s->u,8,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ffad9_2:;
wr(s->u,16,8,rd(s->r,176,8));
L_1800ffad9_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1800ffad9_4:;
/* 1800ffade: call qword ptr [rip + 0x548e0c] */
L_1800ffade_0:;
L_1800ffade_1:;
wr(s->u,30,8,mr(UINT64_C(0x1806488f0),8));
L_1800ffade_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffade_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffae4)));
L_1800ffade_4:;
return (uint64_t)rd(s->u,30,8);
L_1800ffade_5:;
return UINT64_C(0x1800ffae4);
}
uint64_t b_1800ffae4(CPU*s){
/* 1800ffae4: lea r8, [rsp + 0x44] */
L_1800ffae4_0:;
L_1800ffae4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1800ffae4_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ffae4_3:;
/* 1800ffae9: xor r9d, r9d */
L_1800ffae9_0:;
L_1800ffae9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffae9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffae9_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1800ffae9_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800ffae9_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffae9_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1800ffae9_7:;
wr(s->u,28,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1800ffae9_8:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1800ffae9_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ffae9_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ffae9_11:;
/* 1800ffaec: mov dword ptr [rsp + 0x38], eax */
L_1800ffaec_0:;
L_1800ffaec_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ffaec_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1800ffaec_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1800ffaec_4:;
/* 1800ffaf0: mov rax, qword ptr [rsp + 0x30] */
L_1800ffaf0_0:;
L_1800ffaf0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ffaf0_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffaf0_3:;
wr(s->r,0,8,rd(s->u,20,8));
L_1800ffaf0_4:;
/* 1800ffaf5: mov r14, qword ptr [rsp + 0x38] */
L_1800ffaf5_0:;
L_1800ffaf5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ffaf5_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffaf5_3:;
wr(s->r,176,8,rd(s->u,20,8));
L_1800ffaf5_4:;
/* 1800ffafa: mov edx, ebx */
L_1800ffafa_0:;
L_1800ffafa_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1800ffafa_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ffafa_3:;
/* 1800ffafc: mov rcx, rdi */
L_1800ffafc_0:;
L_1800ffafc_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ffafc_2:;
/* 1800ffaff: mov qword ptr [rsp + 0x40], rax */
L_1800ffaff_0:;
L_1800ffaff_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ffaff_2:;
wr(s->u,12,8,rd(s->r,0,8));
L_1800ffaff_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1800ffaff_4:;
/* 1800ffb04: call qword ptr [rip + 0x548de6] */
L_1800ffb04_0:;
L_1800ffb04_1:;
wr(s->u,34,8,mr(UINT64_C(0x1806488f0),8));
L_1800ffb04_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffb04_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffb0a)));
L_1800ffb04_4:;
return (uint64_t)rd(s->u,34,8);
L_1800ffb04_5:;
return UINT64_C(0x1800ffb0a);
}
uint64_t b_1800ffb0a(CPU*s){
/* 1800ffb0a: mov r11d, dword ptr [rsp + 0x4c] */
L_1800ffb0a_0:;
L_1800ffb0a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x4c))+rd(s->r,32,8)));
L_1800ffb0a_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ffb0a_3:;
wr(s->r,152,4,rd(s->u,8,4));
L_1800ffb0a_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1800ffb0a_5:;
/* 1800ffb0f: sub rsi, r11 */
L_1800ffb0f_0:;
L_1800ffb0f_1:;
wr(s->r,512,1,(rd(s->r,48,8)<rd(s->r,152,8)));
L_1800ffb0f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),rd(s->r,152,8),8,1));
L_1800ffb0f_3:;
wr(s->r,48,8,(rd(s->r,48,8)-rd(s->r,152,8)));
L_1800ffb0f_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffb0f_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1800ffb0f_6:;
wr(s->u,15,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1800ffb0f_7:;
wr(s->u,23,1,pop(rd(s->u,15,8),8));
L_1800ffb0f_8:;
wr(s->u,24,1,(rd(s->u,23,1)&((U)UINT64_C(0x1))));
L_1800ffb0f_9:;
wr(s->r,514,1,(rd(s->u,24,1)==((U)UINT64_C(0x0))));
L_1800ffb0f_10:;
/* 1800ffb12: test rsi, rsi */
L_1800ffb12_0:;
L_1800ffb12_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffb12_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffb12_3:;
wr(s->u,25,8,(rd(s->r,48,8)&rd(s->r,48,8)));
L_1800ffb12_4:;
wr(s->r,519,1,(sx(rd(s->u,25,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffb12_5:;
wr(s->r,518,1,(rd(s->u,25,8)==((U)UINT64_C(0x0))));
L_1800ffb12_6:;
wr(s->u,15,8,(rd(s->u,25,8)&((U)UINT64_C(0xff))));
L_1800ffb12_7:;
wr(s->u,23,1,pop(rd(s->u,15,8),8));
L_1800ffb12_8:;
wr(s->u,24,1,(rd(s->u,23,1)&((U)UINT64_C(0x1))));
L_1800ffb12_9:;
wr(s->r,514,1,(rd(s->u,24,1)==((U)UINT64_C(0x0))));
L_1800ffb12_10:;
/* 1800ffb15: jg 0x1800ffa30 */
L_1800ffb15_0:;
L_1800ffb15_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1800ffb15_2:;
wr(s->u,13,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1800ffb15_3:;
wr(s->u,14,1,((rd(s->u,12,1)!=0)&&(rd(s->u,13,1)!=0)));
L_1800ffb15_4:;
if(rd(s->u,14,1)){return UINT64_C(0x1800ffa30);}
L_1800ffb15_5:;
return UINT64_C(0x1800ffb1b);
}
uint64_t b_1800ffb1b(CPU*s){
/* 1800ffb1b: mov rcx, r13 */
L_1800ffb1b_0:;
L_1800ffb1b_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1800ffb1b_2:;
/* 1800ffb1e: call qword ptr [rip + 0x549454] */
L_1800ffb1e_0:;
L_1800ffb1e_1:;
wr(s->u,0,8,mr(UINT64_C(0x180648f78),8));
L_1800ffb1e_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffb1e_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffb24)));
L_1800ffb1e_4:;
return (uint64_t)rd(s->u,0,8);
L_1800ffb1e_5:;
return UINT64_C(0x1800ffb24);
}
uint64_t b_1800ffb24(CPU*s){
/* 1800ffb24: lea r8, [rsp + 0x44] */
L_1800ffb24_0:;
L_1800ffb24_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1800ffb24_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ffb24_3:;
/* 1800ffb29: xor r9d, r9d */
L_1800ffb29_0:;
L_1800ffb29_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffb29_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffb29_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1800ffb29_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800ffb29_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffb29_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1800ffb29_7:;
wr(s->u,16,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1800ffb29_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1800ffb29_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1800ffb29_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1800ffb29_11:;
/* 1800ffb2c: mov edx, r14d */
L_1800ffb2c_0:;
L_1800ffb2c_1:;
wr(s->r,16,4,rd(s->r,176,4));
L_1800ffb2c_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ffb2c_3:;
/* 1800ffb2f: mov rcx, rdi */
L_1800ffb2f_0:;
L_1800ffb2f_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ffb2f_2:;
/* 1800ffb32: mov qword ptr [rsp + 0x40], r14 */
L_1800ffb32_0:;
L_1800ffb32_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ffb32_2:;
wr(s->u,8,8,rd(s->r,176,8));
L_1800ffb32_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffb32_4:;
/* 1800ffb37: call qword ptr [rip + 0x548db3] */
L_1800ffb37_0:;
L_1800ffb37_1:;
wr(s->u,22,8,mr(UINT64_C(0x1806488f0),8));
L_1800ffb37_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffb37_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffb3d)));
L_1800ffb37_4:;
return (uint64_t)rd(s->u,22,8);
L_1800ffb37_5:;
return UINT64_C(0x1800ffb3d);
}
uint64_t b_1800ffb3d(CPU*s){
/* 1800ffb3d: mov rcx, rdi */
L_1800ffb3d_0:;
L_1800ffb3d_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ffb3d_2:;
/* 1800ffb40: call qword ptr [rip + 0x548ab2] */
L_1800ffb40_0:;
L_1800ffb40_1:;
wr(s->u,0,8,mr(UINT64_C(0x1806485f8),8));
L_1800ffb40_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffb40_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffb46)));
L_1800ffb40_4:;
return (uint64_t)rd(s->u,0,8);
L_1800ffb40_5:;
return UINT64_C(0x1800ffb46);
}
uint64_t b_1800ffb46(CPU*s){
/* 1800ffb46: mov rdx, rbp */
L_1800ffb46_0:;
L_1800ffb46_1:;
wr(s->r,16,8,rd(s->r,40,8));
L_1800ffb46_2:;
/* 1800ffb49: mov rcx, rdi */
L_1800ffb49_0:;
L_1800ffb49_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1800ffb49_2:;
/* 1800ffb4c: neg rdx */
L_1800ffb4c_0:;
L_1800ffb4c_1:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1800ffb4c_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,16,8),8,1));
L_1800ffb4c_3:;
wr(s->r,16,8,(-rd(s->r,16,8)));
L_1800ffb4c_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffb4c_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1800ffb4c_6:;
wr(s->u,0,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1800ffb4c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ffb4c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ffb4c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ffb4c_10:;
/* 1800ffb4f: call 0x1800feca0 */
L_1800ffb4f_0:;
L_1800ffb4f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffb4f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffb54)));
L_1800ffb4f_3:;
return (uint64_t)UINT64_C(0x1800feca0);
L_1800ffb4f_4:;
return UINT64_C(0x1800ffb54);
}
uint64_t b_1800ffb54(CPU*s){
/* 1800ffb54: test r15, r15 */
L_1800ffb54_0:;
L_1800ffb54_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffb54_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffb54_3:;
wr(s->u,10,8,(rd(s->r,184,8)&rd(s->r,184,8)));
L_1800ffb54_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffb54_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1800ffb54_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1800ffb54_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ffb54_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ffb54_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ffb54_10:;
/* 1800ffb57: je 0x1800ffb5c */
L_1800ffb57_0:;
L_1800ffb57_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ffb5c);}
L_1800ffb57_2:;
return UINT64_C(0x1800ffb59);
}
uint64_t b_1800ffb59(CPU*s){
/* 1800ffb59: mov qword ptr [r15], rbp */
L_1800ffb59_0:;
L_1800ffb59_1:;
wr(s->u,16,8,rd(s->r,40,8));
L_1800ffb59_2:;
mw((uint64_t)rd(s->r,184,8),8,rd(s->u,16,8));
L_1800ffb59_3:;
/* 1800ffb5c: xor eax, eax */
L_1800ffb5c_0:;
L_1800ffb5c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffb5c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffb5c_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1800ffb5c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ffb5c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffb5c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ffb5c_7:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ffb5c_8:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1800ffb5c_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1800ffb5c_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1800ffb5c_11:;
/* 1800ffb5e: mov r13, qword ptr [rsp + 0x68] */
L_1800ffb5e_0:;
L_1800ffb5e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1800ffb5e_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffb5e_3:;
wr(s->r,168,8,rd(s->u,24,8));
L_1800ffb5e_4:;
/* 1800ffb63: mov r12, qword ptr [rsp + 0x70] */
L_1800ffb63_0:;
L_1800ffb63_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1800ffb63_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffb63_3:;
wr(s->r,160,8,rd(s->u,24,8));
L_1800ffb63_4:;
/* 1800ffb68: mov rbp, qword ptr [rsp + 0xa8] */
L_1800ffb68_0:;
L_1800ffb68_1:;
wr(s->u,8,8,(((U)UINT64_C(0xa8))+rd(s->r,32,8)));
L_1800ffb68_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1800ffb68_3:;
wr(s->r,40,8,rd(s->u,24,8));
L_1800ffb68_4:;
/* 1800ffb70: mov r14, qword ptr [rsp + 0x60] */
L_1800ffb70_0:;
L_1800ffb70_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1800ffb70_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffb70_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1800ffb70_4:;
/* 1800ffb75: add rsp, 0x78 */
L_1800ffb75_0:;
L_1800ffb75_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x78)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1800ffb75_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x78)),8,0));
L_1800ffb75_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x78))));
L_1800ffb75_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffb75_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800ffb75_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800ffb75_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1800ffb75_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1800ffb75_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1800ffb75_10:;
/* 1800ffb79: pop r15 */
L_1800ffb79_0:;
L_1800ffb79_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1800ffb79_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb79_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb79_4:;
wr(s->r,184,8,rd(s->u,42,8));
L_1800ffb79_5:;
/* 1800ffb7b: pop rdi */
L_1800ffb7b_0:;
L_1800ffb7b_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1800ffb7b_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb7b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb7b_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1800ffb7b_5:;
/* 1800ffb7c: pop rsi */
L_1800ffb7c_0:;
L_1800ffb7c_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1800ffb7c_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb7c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb7c_4:;
wr(s->r,48,8,rd(s->u,42,8));
L_1800ffb7c_5:;
/* 1800ffb7d: pop rbx */
L_1800ffb7d_0:;
L_1800ffb7d_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1800ffb7d_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb7d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb7d_4:;
wr(s->r,24,8,rd(s->u,42,8));
L_1800ffb7d_5:;
/* 1800ffb7e: ret  */
L_1800ffb7e_0:;
L_1800ffb7e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb7e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb7e_3:;
return (uint64_t)rd(s->r,648,8);
L_1800ffb7e_4:;
return UINT64_C(0x1800ffb7f);
}
uint64_t b_1800ffb5c(CPU*s){
/* 1800ffb5c: xor eax, eax */
L_1800ffb5c_0:;
L_1800ffb5c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffb5c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffb5c_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1800ffb5c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ffb5c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffb5c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ffb5c_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ffb5c_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1800ffb5c_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ffb5c_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ffb5c_11:;
/* 1800ffb5e: mov r13, qword ptr [rsp + 0x68] */
L_1800ffb5e_0:;
L_1800ffb5e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1800ffb5e_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffb5e_3:;
wr(s->r,168,8,rd(s->u,16,8));
L_1800ffb5e_4:;
/* 1800ffb63: mov r12, qword ptr [rsp + 0x70] */
L_1800ffb63_0:;
L_1800ffb63_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1800ffb63_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffb63_3:;
wr(s->r,160,8,rd(s->u,16,8));
L_1800ffb63_4:;
/* 1800ffb68: mov rbp, qword ptr [rsp + 0xa8] */
L_1800ffb68_0:;
L_1800ffb68_1:;
wr(s->u,8,8,(((U)UINT64_C(0xa8))+rd(s->r,32,8)));
L_1800ffb68_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1800ffb68_3:;
wr(s->r,40,8,rd(s->u,16,8));
L_1800ffb68_4:;
/* 1800ffb70: mov r14, qword ptr [rsp + 0x60] */
L_1800ffb70_0:;
L_1800ffb70_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1800ffb70_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffb70_3:;
wr(s->r,176,8,rd(s->u,16,8));
L_1800ffb70_4:;
/* 1800ffb75: add rsp, 0x78 */
L_1800ffb75_0:;
L_1800ffb75_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x78)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1800ffb75_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x78)),8,0));
L_1800ffb75_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x78))));
L_1800ffb75_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffb75_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800ffb75_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800ffb75_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ffb75_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ffb75_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ffb75_10:;
/* 1800ffb79: pop r15 */
L_1800ffb79_0:;
L_1800ffb79_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1800ffb79_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb79_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb79_4:;
wr(s->r,184,8,rd(s->u,34,8));
L_1800ffb79_5:;
/* 1800ffb7b: pop rdi */
L_1800ffb7b_0:;
L_1800ffb7b_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1800ffb7b_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb7b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb7b_4:;
wr(s->r,56,8,rd(s->u,34,8));
L_1800ffb7b_5:;
/* 1800ffb7c: pop rsi */
L_1800ffb7c_0:;
L_1800ffb7c_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1800ffb7c_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb7c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb7c_4:;
wr(s->r,48,8,rd(s->u,34,8));
L_1800ffb7c_5:;
/* 1800ffb7d: pop rbx */
L_1800ffb7d_0:;
L_1800ffb7d_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1800ffb7d_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb7d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb7d_4:;
wr(s->r,24,8,rd(s->u,34,8));
L_1800ffb7d_5:;
/* 1800ffb7e: ret  */
L_1800ffb7e_0:;
L_1800ffb7e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb7e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb7e_3:;
return (uint64_t)rd(s->r,648,8);
L_1800ffb7e_4:;
return UINT64_C(0x1800ffb7f);
}
uint64_t b_1800ffb5e(CPU*s){
/* 1800ffb5e: mov r13, qword ptr [rsp + 0x68] */
L_1800ffb5e_0:;
L_1800ffb5e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1800ffb5e_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffb5e_3:;
wr(s->r,168,8,rd(s->u,16,8));
L_1800ffb5e_4:;
/* 1800ffb63: mov r12, qword ptr [rsp + 0x70] */
L_1800ffb63_0:;
L_1800ffb63_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1800ffb63_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffb63_3:;
wr(s->r,160,8,rd(s->u,16,8));
L_1800ffb63_4:;
/* 1800ffb68: mov rbp, qword ptr [rsp + 0xa8] */
L_1800ffb68_0:;
L_1800ffb68_1:;
wr(s->u,8,8,(((U)UINT64_C(0xa8))+rd(s->r,32,8)));
L_1800ffb68_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1800ffb68_3:;
wr(s->r,40,8,rd(s->u,16,8));
L_1800ffb68_4:;
/* 1800ffb70: mov r14, qword ptr [rsp + 0x60] */
L_1800ffb70_0:;
L_1800ffb70_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1800ffb70_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffb70_3:;
wr(s->r,176,8,rd(s->u,16,8));
L_1800ffb70_4:;
/* 1800ffb75: add rsp, 0x78 */
L_1800ffb75_0:;
L_1800ffb75_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x78)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1800ffb75_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x78)),8,0));
L_1800ffb75_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x78))));
L_1800ffb75_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffb75_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800ffb75_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800ffb75_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ffb75_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ffb75_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ffb75_10:;
/* 1800ffb79: pop r15 */
L_1800ffb79_0:;
L_1800ffb79_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1800ffb79_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb79_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb79_4:;
wr(s->r,184,8,rd(s->u,34,8));
L_1800ffb79_5:;
/* 1800ffb7b: pop rdi */
L_1800ffb7b_0:;
L_1800ffb7b_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1800ffb7b_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb7b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb7b_4:;
wr(s->r,56,8,rd(s->u,34,8));
L_1800ffb7b_5:;
/* 1800ffb7c: pop rsi */
L_1800ffb7c_0:;
L_1800ffb7c_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1800ffb7c_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb7c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb7c_4:;
wr(s->r,48,8,rd(s->u,34,8));
L_1800ffb7c_5:;
/* 1800ffb7d: pop rbx */
L_1800ffb7d_0:;
L_1800ffb7d_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1800ffb7d_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb7d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb7d_4:;
wr(s->r,24,8,rd(s->u,34,8));
L_1800ffb7d_5:;
/* 1800ffb7e: ret  */
L_1800ffb7e_0:;
L_1800ffb7e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb7e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb7e_3:;
return (uint64_t)rd(s->r,648,8);
L_1800ffb7e_4:;
return UINT64_C(0x1800ffb7f);
}
uint64_t b_1800ffb75(CPU*s){
/* 1800ffb75: add rsp, 0x78 */
L_1800ffb75_0:;
L_1800ffb75_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x78)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1800ffb75_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x78)),8,0));
L_1800ffb75_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x78))));
L_1800ffb75_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffb75_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800ffb75_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800ffb75_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ffb75_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ffb75_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ffb75_10:;
/* 1800ffb79: pop r15 */
L_1800ffb79_0:;
L_1800ffb79_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ffb79_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb79_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb79_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1800ffb79_5:;
/* 1800ffb7b: pop rdi */
L_1800ffb7b_0:;
L_1800ffb7b_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ffb7b_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb7b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb7b_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1800ffb7b_5:;
/* 1800ffb7c: pop rsi */
L_1800ffb7c_0:;
L_1800ffb7c_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ffb7c_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb7c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb7c_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1800ffb7c_5:;
/* 1800ffb7d: pop rbx */
L_1800ffb7d_0:;
L_1800ffb7d_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ffb7d_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb7d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb7d_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1800ffb7d_5:;
/* 1800ffb7e: ret  */
L_1800ffb7e_0:;
L_1800ffb7e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffb7e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffb7e_3:;
return (uint64_t)rd(s->r,648,8);
L_1800ffb7e_4:;
return UINT64_C(0x1800ffb7f);
}
uint64_t b_1800ffb7f(CPU*s){
/* 1800ffb7f: mov eax, 0x8004e009 */
L_1800ffb7f_0:;
L_1800ffb7f_1:;
wr(s->r,0,8,((U)UINT64_C(0x8004e009)));
L_1800ffb7f_2:;
/* 1800ffb84: jmp 0x1800ffb5e */
L_1800ffb84_0:;
L_1800ffb84_1:;
return UINT64_C(0x1800ffb5e);
L_1800ffb84_2:;
return UINT64_C(0x1800ffb86);
}
uint64_t b_1800ffb86(CPU*s){
/* 1800ffb86: mov eax, 0x8004e008 */
L_1800ffb86_0:;
L_1800ffb86_1:;
wr(s->r,0,8,((U)UINT64_C(0x8004e008)));
L_1800ffb86_2:;
/* 1800ffb8b: jmp 0x1800ffb5e */
L_1800ffb8b_0:;
L_1800ffb8b_1:;
return UINT64_C(0x1800ffb5e);
L_1800ffb8b_2:;
return UINT64_C(0x1800ffb8d);
}
uint64_t b_1800ffba0(CPU*s){
/* 1800ffba0: push rbx */
L_1800ffba0_0:;
L_1800ffba0_1:;
wr(s->u,21,8,rd(s->r,24,8));
L_1800ffba0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffba0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,21,8));
L_1800ffba0_4:;
/* 1800ffba2: push rbp */
L_1800ffba2_0:;
L_1800ffba2_1:;
wr(s->u,21,8,rd(s->r,40,8));
L_1800ffba2_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffba2_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,21,8));
L_1800ffba2_4:;
/* 1800ffba3: push rdi */
L_1800ffba3_0:;
L_1800ffba3_1:;
wr(s->u,21,8,rd(s->r,56,8));
L_1800ffba3_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffba3_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,21,8));
L_1800ffba3_4:;
/* 1800ffba4: push r13 */
L_1800ffba4_0:;
L_1800ffba4_1:;
wr(s->u,21,8,rd(s->r,168,8));
L_1800ffba4_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffba4_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,21,8));
L_1800ffba4_4:;
/* 1800ffba6: sub rsp, 0x88 */
L_1800ffba6_0:;
L_1800ffba6_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x88))));
L_1800ffba6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x88)),8,1));
L_1800ffba6_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x88))));
L_1800ffba6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffba6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800ffba6_6:;
wr(s->u,29,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800ffba6_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1800ffba6_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1800ffba6_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1800ffba6_10:;
/* 1800ffbad: mov rax, qword ptr [rip + 0x84f224] */
L_1800ffbad_0:;
L_1800ffbad_1:;
wr(s->r,0,8,mr(UINT64_C(0x18094edd8),8));
L_1800ffbad_2:;
/* 1800ffbb4: xor rax, rsp */
L_1800ffbb4_0:;
L_1800ffbb4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffbb4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffbb4_3:;
wr(s->r,0,8,(rd(s->r,0,8)^rd(s->r,32,8)));
L_1800ffbb4_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffbb4_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1800ffbb4_6:;
wr(s->u,29,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1800ffbb4_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1800ffbb4_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1800ffbb4_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1800ffbb4_10:;
/* 1800ffbb7: mov qword ptr [rsp + 0x68], rax */
L_1800ffbb7_0:;
L_1800ffbb7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1800ffbb7_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800ffbb7_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffbb7_4:;
/* 1800ffbbc: movsxd rbx, dword ptr [rdx] */
L_1800ffbbc_0:;
L_1800ffbbc_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,16,8),4));
L_1800ffbbc_2:;
wr(s->r,24,8,(U)sx(rd(s->u,16,4),4));
L_1800ffbbc_3:;
/* 1800ffbbf: mov rdi, r8 */
L_1800ffbbf_0:;
L_1800ffbbf_1:;
wr(s->r,56,8,rd(s->r,128,8));
L_1800ffbbf_2:;
/* 1800ffbc2: mov r13, rdx */
L_1800ffbc2_0:;
L_1800ffbc2_1:;
wr(s->r,168,8,rd(s->r,16,8));
L_1800ffbc2_2:;
/* 1800ffbc5: mov rbp, rcx */
L_1800ffbc5_0:;
L_1800ffbc5_1:;
wr(s->r,40,8,rd(s->r,8,8));
L_1800ffbc5_2:;
/* 1800ffbc8: test ebx, ebx */
L_1800ffbc8_0:;
L_1800ffbc8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffbc8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffbc8_3:;
wr(s->u,39,4,(rd(s->r,24,4)&rd(s->r,24,4)));
L_1800ffbc8_4:;
wr(s->r,519,1,(sx(rd(s->u,39,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffbc8_5:;
wr(s->r,518,1,(rd(s->u,39,4)==((U)UINT64_C(0x0))));
L_1800ffbc8_6:;
wr(s->u,29,4,(rd(s->u,39,4)&((U)UINT64_C(0xff))));
L_1800ffbc8_7:;
wr(s->u,37,1,pop(rd(s->u,29,4),4));
L_1800ffbc8_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1800ffbc8_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1800ffbc8_10:;
/* 1800ffbca: jne 0x1800ffbd3 */
L_1800ffbca_0:;
L_1800ffbca_1:;
wr(s->u,20,1,(!rd(s->r,518,1)));
L_1800ffbca_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1800ffbd3);}
L_1800ffbca_3:;
return UINT64_C(0x1800ffbcc);
}
uint64_t b_1800ffbcc(CPU*s){
/* 1800ffbcc: xor eax, eax */
L_1800ffbcc_0:;
L_1800ffbcc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffbcc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffbcc_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1800ffbcc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ffbcc_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffbcc_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ffbcc_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ffbcc_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800ffbcc_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800ffbcc_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800ffbcc_11:;
/* 1800ffbce: jmp 0x1800ffe77 */
L_1800ffbce_0:;
L_1800ffbce_1:;
return UINT64_C(0x1800ffe77);
L_1800ffbce_2:;
return UINT64_C(0x1800ffbd3);
}
uint64_t b_1800ffbd3(CPU*s){
/* 1800ffbd3: mov qword ptr [rsp + 0xc8], rsi */
L_1800ffbd3_0:;
L_1800ffbd3_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc8))+rd(s->r,32,8)));
L_1800ffbd3_2:;
wr(s->u,24,8,rd(s->r,48,8));
L_1800ffbd3_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1800ffbd3_4:;
/* 1800ffbdb: mov qword ptr [rsp + 0x80], r12 */
L_1800ffbdb_0:;
L_1800ffbdb_1:;
wr(s->u,16,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1800ffbdb_2:;
wr(s->u,24,8,rd(s->r,160,8));
L_1800ffbdb_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1800ffbdb_4:;
/* 1800ffbe3: mov qword ptr [rsp + 0x78], r14 */
L_1800ffbe3_0:;
L_1800ffbe3_1:;
wr(s->u,8,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1800ffbe3_2:;
wr(s->u,24,8,rd(s->r,176,8));
L_1800ffbe3_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,24,8));
L_1800ffbe3_4:;
/* 1800ffbe8: mov qword ptr [rsp + 0x70], r15 */
L_1800ffbe8_0:;
L_1800ffbe8_1:;
wr(s->u,8,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1800ffbe8_2:;
wr(s->u,24,8,rd(s->r,184,8));
L_1800ffbe8_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,24,8));
L_1800ffbe8_4:;
/* 1800ffbed: xor r15d, r15d */
L_1800ffbed_0:;
L_1800ffbed_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffbed_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffbed_3:;
wr(s->r,184,4,(rd(s->r,184,4)^rd(s->r,184,4)));
L_1800ffbed_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1800ffbed_5:;
wr(s->r,519,1,(sx(rd(s->r,184,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffbed_6:;
wr(s->r,518,1,(rd(s->r,184,4)==((U)UINT64_C(0x0))));
L_1800ffbed_7:;
wr(s->u,32,4,(rd(s->r,184,4)&((U)UINT64_C(0xff))));
L_1800ffbed_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1800ffbed_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1800ffbed_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1800ffbed_11:;
/* 1800ffbf0: lea r8, [rsp + 0x4c] */
L_1800ffbf0_0:;
L_1800ffbf0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x4c))+rd(s->r,32,8)));
L_1800ffbf0_2:;
wr(s->r,128,8,rd(s->u,8,8));
L_1800ffbf0_3:;
/* 1800ffbf5: lea r9d, [r15 + 1] */
L_1800ffbf5_0:;
L_1800ffbf5_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x1))));
L_1800ffbf5_2:;
wr(s->r,136,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1800ffbf5_3:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800ffbf5_4:;
/* 1800ffbf9: xor edx, edx */
L_1800ffbf9_0:;
L_1800ffbf9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffbf9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffbf9_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1800ffbf9_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ffbf9_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffbf9_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1800ffbf9_7:;
wr(s->u,32,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1800ffbf9_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1800ffbf9_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1800ffbf9_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1800ffbf9_11:;
/* 1800ffbfb: mov qword ptr [rsp + 0x48], r15 */
L_1800ffbfb_0:;
L_1800ffbfb_1:;
wr(s->u,8,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1800ffbfb_2:;
wr(s->u,24,8,rd(s->r,184,8));
L_1800ffbfb_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,24,8));
L_1800ffbfb_4:;
/* 1800ffc00: call qword ptr [rip + 0x548cea] */
L_1800ffc00_0:;
L_1800ffc00_1:;
wr(s->u,38,8,mr(UINT64_C(0x1806488f0),8));
L_1800ffc00_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffc00_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffc06)));
L_1800ffc00_4:;
return (uint64_t)rd(s->u,38,8);
L_1800ffc00_5:;
return UINT64_C(0x1800ffc06);
}
uint64_t b_1800ffc06(CPU*s){
/* 1800ffc06: cmp qword ptr [rdi], 0x18 */
L_1800ffc06_0:;
L_1800ffc06_1:;
wr(s->u,12,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffc06_2:;
wr(s->u,31,8,rd(s->u,12,8));
L_1800ffc06_3:;
wr(s->r,512,1,(rd(s->u,31,8)<((U)UINT64_C(0x18))));
L_1800ffc06_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,31,8),((U)UINT64_C(0x18)),8,1));
L_1800ffc06_5:;
wr(s->u,39,8,(rd(s->u,31,8)-((U)UINT64_C(0x18))));
L_1800ffc06_6:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffc06_7:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1800ffc06_8:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1800ffc06_9:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1800ffc06_10:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1800ffc06_11:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1800ffc06_12:;
/* 1800ffc0a: mov r12, rbx */
L_1800ffc0a_0:;
L_1800ffc0a_1:;
wr(s->r,160,8,rd(s->r,24,8));
L_1800ffc0a_2:;
/* 1800ffc0d: mov r14d, eax */
L_1800ffc0d_0:;
L_1800ffc0d_1:;
wr(s->r,176,4,rd(s->r,0,4));
L_1800ffc0d_2:;
wr(s->r,176,8,rd(s->r,176,4));
L_1800ffc0d_3:;
/* 1800ffc10: mov dword ptr [rsp + 0x48], eax */
L_1800ffc10_0:;
L_1800ffc10_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1800ffc10_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1800ffc10_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1800ffc10_4:;
/* 1800ffc14: jl 0x1800ffe3d */
L_1800ffc14_0:;
L_1800ffc14_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1800ffc14_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1800ffe3d);}
L_1800ffc14_3:;
return UINT64_C(0x1800ffc1a);
}
uint64_t b_1800ffc1a(CPU*s){
/* 1800ffc1a: nop word ptr [rax + rax] */
L_1800ffc1a_0:;
L_1800ffc1a_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1800ffc1a_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1800ffc1a_3:;
/* 1800ffc20: lea r9, [rsp + 0x38] */
L_1800ffc20_0:;
L_1800ffc20_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ffc20_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1800ffc20_3:;
/* 1800ffc25: lea rdx, [rsp + 0x58] */
L_1800ffc25_0:;
L_1800ffc25_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1800ffc25_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1800ffc25_3:;
/* 1800ffc2a: mov r8d, 0x10 */
L_1800ffc2a_0:;
L_1800ffc2a_1:;
wr(s->r,128,8,((U)UINT64_C(0x10)));
L_1800ffc2a_2:;
/* 1800ffc30: mov rcx, rbp */
L_1800ffc30_0:;
L_1800ffc30_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1800ffc30_2:;
/* 1800ffc33: mov qword ptr [rsp + 0x20], r15 */
L_1800ffc33_0:;
L_1800ffc33_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ffc33_2:;
wr(s->u,24,8,rd(s->r,184,8));
L_1800ffc33_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,24,8));
L_1800ffc33_4:;
/* 1800ffc38: call 0x180034740 */
L_1800ffc38_0:;
L_1800ffc38_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffc38_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffc3d)));
L_1800ffc38_3:;
return (uint64_t)UINT64_C(0x180034740);
L_1800ffc38_4:;
return UINT64_C(0x1800ffc3d);
}
uint64_t b_1800ffc20(CPU*s){
/* 1800ffc20: lea r9, [rsp + 0x38] */
L_1800ffc20_0:;
L_1800ffc20_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ffc20_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1800ffc20_3:;
/* 1800ffc25: lea rdx, [rsp + 0x58] */
L_1800ffc25_0:;
L_1800ffc25_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1800ffc25_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1800ffc25_3:;
/* 1800ffc2a: mov r8d, 0x10 */
L_1800ffc2a_0:;
L_1800ffc2a_1:;
wr(s->r,128,8,((U)UINT64_C(0x10)));
L_1800ffc2a_2:;
/* 1800ffc30: mov rcx, rbp */
L_1800ffc30_0:;
L_1800ffc30_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1800ffc30_2:;
/* 1800ffc33: mov qword ptr [rsp + 0x20], r15 */
L_1800ffc33_0:;
L_1800ffc33_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ffc33_2:;
wr(s->u,8,8,rd(s->r,184,8));
L_1800ffc33_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffc33_4:;
/* 1800ffc38: call 0x180034740 */
L_1800ffc38_0:;
L_1800ffc38_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffc38_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffc3d)));
L_1800ffc38_3:;
return (uint64_t)UINT64_C(0x180034740);
L_1800ffc38_4:;
return UINT64_C(0x1800ffc3d);
}
uint64_t b_1800ffc3d(CPU*s){
/* 1800ffc3d: test eax, eax */
L_1800ffc3d_0:;
L_1800ffc3d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffc3d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffc3d_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ffc3d_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffc3d_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1800ffc3d_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1800ffc3d_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1800ffc3d_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1800ffc3d_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1800ffc3d_10:;
/* 1800ffc3f: jne 0x1800ffc48 */
L_1800ffc3f_0:;
L_1800ffc3f_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1800ffc3f_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800ffc48);}
L_1800ffc3f_3:;
return UINT64_C(0x1800ffc41);
}
uint64_t b_1800ffc41(CPU*s){
/* 1800ffc41: mov eax, 0x8004e008 */
L_1800ffc41_0:;
L_1800ffc41_1:;
wr(s->r,0,8,((U)UINT64_C(0x8004e008)));
L_1800ffc41_2:;
/* 1800ffc46: jmp 0x1800ffca1 */
L_1800ffc46_0:;
L_1800ffc46_1:;
return UINT64_C(0x1800ffca1);
L_1800ffc46_2:;
return UINT64_C(0x1800ffc48);
}
uint64_t b_1800ffc48(CPU*s){
/* 1800ffc48: cmp dword ptr [rsp + 0x38], 0x10 */
L_1800ffc48_0:;
L_1800ffc48_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ffc48_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ffc48_3:;
wr(s->u,18,4,rd(s->u,8,4));
L_1800ffc48_4:;
wr(s->r,512,1,(rd(s->u,18,4)<((U)UINT64_C(0x10))));
L_1800ffc48_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),((U)UINT64_C(0x10)),4,1));
L_1800ffc48_6:;
wr(s->u,22,4,(rd(s->u,18,4)-((U)UINT64_C(0x10))));
L_1800ffc48_7:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffc48_8:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1800ffc48_9:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1800ffc48_10:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1800ffc48_11:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1800ffc48_12:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1800ffc48_13:;
/* 1800ffc4d: je 0x1800ffc56 */
L_1800ffc4d_0:;
L_1800ffc4d_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ffc56);}
L_1800ffc4d_2:;
return UINT64_C(0x1800ffc4f);
}
uint64_t b_1800ffc4f(CPU*s){
/* 1800ffc4f: mov eax, 0x8004e008 */
L_1800ffc4f_0:;
L_1800ffc4f_1:;
wr(s->r,0,8,((U)UINT64_C(0x8004e008)));
L_1800ffc4f_2:;
/* 1800ffc54: jmp 0x1800ffca1 */
L_1800ffc54_0:;
L_1800ffc54_1:;
return UINT64_C(0x1800ffca1);
L_1800ffc54_2:;
return UINT64_C(0x1800ffc56);
}
uint64_t b_1800ffc56(CPU*s){
/* 1800ffc56: lea r9, [rsp + 0x38] */
L_1800ffc56_0:;
L_1800ffc56_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ffc56_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1800ffc56_3:;
/* 1800ffc5b: lea rdx, [rsp + 0x30] */
L_1800ffc5b_0:;
L_1800ffc5b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ffc5b_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1800ffc5b_3:;
/* 1800ffc60: mov r8d, 8 */
L_1800ffc60_0:;
L_1800ffc60_1:;
wr(s->r,128,8,((U)UINT64_C(0x8)));
L_1800ffc60_2:;
/* 1800ffc66: mov rcx, rbp */
L_1800ffc66_0:;
L_1800ffc66_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1800ffc66_2:;
/* 1800ffc69: mov qword ptr [rsp + 0x20], r15 */
L_1800ffc69_0:;
L_1800ffc69_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ffc69_2:;
wr(s->u,8,8,rd(s->r,184,8));
L_1800ffc69_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffc69_4:;
/* 1800ffc6e: call 0x180034740 */
L_1800ffc6e_0:;
L_1800ffc6e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffc6e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffc73)));
L_1800ffc6e_3:;
return (uint64_t)UINT64_C(0x180034740);
L_1800ffc6e_4:;
return UINT64_C(0x1800ffc73);
}
uint64_t b_1800ffc73(CPU*s){
/* 1800ffc73: test eax, eax */
L_1800ffc73_0:;
L_1800ffc73_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffc73_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffc73_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ffc73_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffc73_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1800ffc73_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1800ffc73_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1800ffc73_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1800ffc73_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1800ffc73_10:;
/* 1800ffc75: jne 0x1800ffc7e */
L_1800ffc75_0:;
L_1800ffc75_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1800ffc75_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800ffc7e);}
L_1800ffc75_3:;
return UINT64_C(0x1800ffc77);
}
uint64_t b_1800ffc77(CPU*s){
/* 1800ffc77: mov eax, 0x8004e008 */
L_1800ffc77_0:;
L_1800ffc77_1:;
wr(s->r,0,8,((U)UINT64_C(0x8004e008)));
L_1800ffc77_2:;
/* 1800ffc7c: jmp 0x1800ffca1 */
L_1800ffc7c_0:;
L_1800ffc7c_1:;
return UINT64_C(0x1800ffca1);
L_1800ffc7c_2:;
return UINT64_C(0x1800ffc7e);
}
uint64_t b_1800ffc7e(CPU*s){
/* 1800ffc7e: cmp dword ptr [rsp + 0x38], 8 */
L_1800ffc7e_0:;
L_1800ffc7e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1800ffc7e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ffc7e_3:;
wr(s->u,18,4,rd(s->u,8,4));
L_1800ffc7e_4:;
wr(s->r,512,1,(rd(s->u,18,4)<((U)UINT64_C(0x8))));
L_1800ffc7e_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),((U)UINT64_C(0x8)),4,1));
L_1800ffc7e_6:;
wr(s->u,22,4,(rd(s->u,18,4)-((U)UINT64_C(0x8))));
L_1800ffc7e_7:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffc7e_8:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1800ffc7e_9:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1800ffc7e_10:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1800ffc7e_11:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1800ffc7e_12:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1800ffc7e_13:;
/* 1800ffc83: je 0x1800ffc8c */
L_1800ffc83_0:;
L_1800ffc83_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ffc8c);}
L_1800ffc83_2:;
return UINT64_C(0x1800ffc85);
}
uint64_t b_1800ffc85(CPU*s){
/* 1800ffc85: mov eax, 0x8004e008 */
L_1800ffc85_0:;
L_1800ffc85_1:;
wr(s->r,0,8,((U)UINT64_C(0x8004e008)));
L_1800ffc85_2:;
/* 1800ffc8a: jmp 0x1800ffca1 */
L_1800ffc8a_0:;
L_1800ffc8a_1:;
return UINT64_C(0x1800ffca1);
L_1800ffc8a_2:;
return UINT64_C(0x1800ffc8c);
}
uint64_t b_1800ffc8c(CPU*s){
/* 1800ffc8c: mov rax, qword ptr [rsp + 0x30] */
L_1800ffc8c_0:;
L_1800ffc8c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ffc8c_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffc8c_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1800ffc8c_4:;
/* 1800ffc91: sub rax, 0x18 */
L_1800ffc91_0:;
L_1800ffc91_1:;
wr(s->r,512,1,(rd(s->r,0,8)<((U)UINT64_C(0x18))));
L_1800ffc91_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x18)),8,1));
L_1800ffc91_3:;
wr(s->r,0,8,(rd(s->r,0,8)-((U)UINT64_C(0x18))));
L_1800ffc91_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffc91_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1800ffc91_6:;
wr(s->u,25,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1800ffc91_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1800ffc91_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1800ffc91_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1800ffc91_10:;
/* 1800ffc95: cmovs rax, r15 */
L_1800ffc95_0:;
L_1800ffc95_1:;
wr(s->u,35,8,rd(s->r,184,8));
L_1800ffc95_2:;
wr(s->u,43,1,(!rd(s->r,519,1)));
L_1800ffc95_3:;
if(rd(s->u,43,1)){goto L_1800ffc99_0;}
L_1800ffc95_4:;
wr(s->r,0,8,rd(s->u,35,8));
L_1800ffc95_5:;
/* 1800ffc99: mov qword ptr [rsp + 0x30], rax */
L_1800ffc99_0:;
L_1800ffc99_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ffc99_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800ffc99_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffc99_4:;
/* 1800ffc9e: mov eax, r15d */
L_1800ffc9e_0:;
L_1800ffc9e_1:;
wr(s->r,0,4,rd(s->r,184,4));
L_1800ffc9e_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ffc9e_3:;
/* 1800ffca1: add qword ptr [rdi], -0x18 */
L_1800ffca1_0:;
L_1800ffca1_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffca1_2:;
wr(s->r,512,1,(((rd(s->u,8,8)+((U)UINT64_C(0xffffffffffffffe8)))&(((U)1<<64)-1))<rd(s->u,8,8)));
L_1800ffca1_3:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffca1_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,8),((U)UINT64_C(0xffffffffffffffe8)),8,0));
L_1800ffca1_5:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffca1_6:;
wr(s->u,8,8,(rd(s->u,8,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1800ffca1_7:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,8,8));
L_1800ffca1_8:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffca1_9:;
wr(s->r,519,1,(sx(rd(s->u,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffca1_10:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffca1_11:;
wr(s->r,518,1,(rd(s->u,8,8)==((U)UINT64_C(0x0))));
L_1800ffca1_12:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffca1_13:;
wr(s->u,25,8,(rd(s->u,8,8)&((U)UINT64_C(0xff))));
L_1800ffca1_14:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1800ffca1_15:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1800ffca1_16:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1800ffca1_17:;
/* 1800ffca5: test eax, eax */
L_1800ffca5_0:;
L_1800ffca5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffca5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffca5_3:;
wr(s->u,44,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ffca5_4:;
wr(s->r,519,1,(sx(rd(s->u,44,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffca5_5:;
wr(s->r,518,1,(rd(s->u,44,4)==((U)UINT64_C(0x0))));
L_1800ffca5_6:;
wr(s->u,25,4,(rd(s->u,44,4)&((U)UINT64_C(0xff))));
L_1800ffca5_7:;
wr(s->u,33,1,pop(rd(s->u,25,4),4));
L_1800ffca5_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1800ffca5_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1800ffca5_10:;
/* 1800ffca7: jne 0x1800ffe5d */
L_1800ffca7_0:;
L_1800ffca7_1:;
wr(s->u,24,1,(!rd(s->r,518,1)));
L_1800ffca7_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1800ffe5d);}
L_1800ffca7_3:;
return UINT64_C(0x1800ffcad);
}
uint64_t b_1800ffc99(CPU*s){
/* 1800ffc99: mov qword ptr [rsp + 0x30], rax */
L_1800ffc99_0:;
L_1800ffc99_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ffc99_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800ffc99_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffc99_4:;
/* 1800ffc9e: mov eax, r15d */
L_1800ffc9e_0:;
L_1800ffc9e_1:;
wr(s->r,0,4,rd(s->r,184,4));
L_1800ffc9e_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ffc9e_3:;
/* 1800ffca1: add qword ptr [rdi], -0x18 */
L_1800ffca1_0:;
L_1800ffca1_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffca1_2:;
wr(s->r,512,1,(((rd(s->u,8,8)+((U)UINT64_C(0xffffffffffffffe8)))&(((U)1<<64)-1))<rd(s->u,8,8)));
L_1800ffca1_3:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffca1_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,8),((U)UINT64_C(0xffffffffffffffe8)),8,0));
L_1800ffca1_5:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffca1_6:;
wr(s->u,8,8,(rd(s->u,8,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1800ffca1_7:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,8,8));
L_1800ffca1_8:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffca1_9:;
wr(s->r,519,1,(sx(rd(s->u,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffca1_10:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffca1_11:;
wr(s->r,518,1,(rd(s->u,8,8)==((U)UINT64_C(0x0))));
L_1800ffca1_12:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffca1_13:;
wr(s->u,17,8,(rd(s->u,8,8)&((U)UINT64_C(0xff))));
L_1800ffca1_14:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1800ffca1_15:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1800ffca1_16:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1800ffca1_17:;
/* 1800ffca5: test eax, eax */
L_1800ffca5_0:;
L_1800ffca5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffca5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffca5_3:;
wr(s->u,27,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ffca5_4:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffca5_5:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1800ffca5_6:;
wr(s->u,17,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1800ffca5_7:;
wr(s->u,25,1,pop(rd(s->u,17,4),4));
L_1800ffca5_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1800ffca5_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1800ffca5_10:;
/* 1800ffca7: jne 0x1800ffe5d */
L_1800ffca7_0:;
L_1800ffca7_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1800ffca7_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1800ffe5d);}
L_1800ffca7_3:;
return UINT64_C(0x1800ffcad);
}
uint64_t b_1800ffca1(CPU*s){
/* 1800ffca1: add qword ptr [rdi], -0x18 */
L_1800ffca1_0:;
L_1800ffca1_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffca1_2:;
wr(s->r,512,1,(((rd(s->u,0,8)+((U)UINT64_C(0xffffffffffffffe8)))&(((U)1<<64)-1))<rd(s->u,0,8)));
L_1800ffca1_3:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffca1_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,0,8),((U)UINT64_C(0xffffffffffffffe8)),8,0));
L_1800ffca1_5:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffca1_6:;
wr(s->u,0,8,(rd(s->u,0,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1800ffca1_7:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,0,8));
L_1800ffca1_8:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffca1_9:;
wr(s->r,519,1,(sx(rd(s->u,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffca1_10:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffca1_11:;
wr(s->r,518,1,(rd(s->u,0,8)==((U)UINT64_C(0x0))));
L_1800ffca1_12:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffca1_13:;
wr(s->u,9,8,(rd(s->u,0,8)&((U)UINT64_C(0xff))));
L_1800ffca1_14:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1800ffca1_15:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ffca1_16:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ffca1_17:;
/* 1800ffca5: test eax, eax */
L_1800ffca5_0:;
L_1800ffca5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffca5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffca5_3:;
wr(s->u,19,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ffca5_4:;
wr(s->r,519,1,(sx(rd(s->u,19,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffca5_5:;
wr(s->r,518,1,(rd(s->u,19,4)==((U)UINT64_C(0x0))));
L_1800ffca5_6:;
wr(s->u,9,4,(rd(s->u,19,4)&((U)UINT64_C(0xff))));
L_1800ffca5_7:;
wr(s->u,17,1,pop(rd(s->u,9,4),4));
L_1800ffca5_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ffca5_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ffca5_10:;
/* 1800ffca7: jne 0x1800ffe5d */
L_1800ffca7_0:;
L_1800ffca7_1:;
wr(s->u,8,1,(!rd(s->r,518,1)));
L_1800ffca7_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1800ffe5d);}
L_1800ffca7_3:;
return UINT64_C(0x1800ffcad);
}
uint64_t b_1800ffcad(CPU*s){
/* 1800ffcad: lea rax, [rip + 0x55938c] */
L_1800ffcad_0:;
L_1800ffcad_1:;
wr(s->r,0,8,((U)UINT64_C(0x180659040)));
L_1800ffcad_2:;
/* 1800ffcb4: lea rcx, [rsp + 0x58] */
L_1800ffcb4_0:;
L_1800ffcb4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1800ffcb4_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1800ffcb4_3:;
/* 1800ffcb9: mov rdx, qword ptr [rax] */
L_1800ffcb9_0:;
L_1800ffcb9_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,0,8),8));
L_1800ffcb9_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1800ffcb9_3:;
/* 1800ffcbc: cmp rdx, qword ptr [rcx] */
L_1800ffcbc_0:;
L_1800ffcbc_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1800ffcbc_2:;
wr(s->u,27,8,rd(s->u,8,8));
L_1800ffcbc_3:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,27,8)));
L_1800ffcbc_4:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,27,8),8,1));
L_1800ffcbc_5:;
wr(s->u,35,8,(rd(s->r,16,8)-rd(s->u,27,8)));
L_1800ffcbc_6:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffcbc_7:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1800ffcbc_8:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1800ffcbc_9:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1800ffcbc_10:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1800ffcbc_11:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1800ffcbc_12:;
/* 1800ffcbf: jne 0x1800ffcd0 */
L_1800ffcbf_0:;
L_1800ffcbf_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1800ffcbf_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1800ffcd0);}
L_1800ffcbf_3:;
return UINT64_C(0x1800ffcc1);
}
uint64_t b_1800ffcc1(CPU*s){
/* 1800ffcc1: mov rdx, qword ptr [rax + 8] */
L_1800ffcc1_0:;
L_1800ffcc1_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1800ffcc1_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffcc1_3:;
wr(s->r,16,8,rd(s->u,8,8));
L_1800ffcc1_4:;
/* 1800ffcc5: cmp rdx, qword ptr [rcx + 8] */
L_1800ffcc5_0:;
L_1800ffcc5_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1800ffcc5_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffcc5_3:;
wr(s->u,27,8,rd(s->u,8,8));
L_1800ffcc5_4:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,27,8)));
L_1800ffcc5_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,27,8),8,1));
L_1800ffcc5_6:;
wr(s->u,35,8,(rd(s->r,16,8)-rd(s->u,27,8)));
L_1800ffcc5_7:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffcc5_8:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1800ffcc5_9:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1800ffcc5_10:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1800ffcc5_11:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1800ffcc5_12:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1800ffcc5_13:;
/* 1800ffcc9: jne 0x1800ffcd0 */
L_1800ffcc9_0:;
L_1800ffcc9_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1800ffcc9_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1800ffcd0);}
L_1800ffcc9_3:;
return UINT64_C(0x1800ffccb);
}
uint64_t b_1800ffccb(CPU*s){
/* 1800ffccb: mov eax, r15d */
L_1800ffccb_0:;
L_1800ffccb_1:;
wr(s->r,0,4,rd(s->r,184,4));
L_1800ffccb_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ffccb_3:;
/* 1800ffcce: jmp 0x1800ffcd5 */
L_1800ffcce_0:;
L_1800ffcce_1:;
return UINT64_C(0x1800ffcd5);
L_1800ffcce_2:;
return UINT64_C(0x1800ffcd0);
}
uint64_t b_1800ffcd0(CPU*s){
/* 1800ffcd0: sbb eax, eax */
L_1800ffcd0_0:;
L_1800ffcd0_1:;
wr(s->u,1,4,rd(s->r,512,1));
L_1800ffcd0_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,0,4)));
L_1800ffcd0_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,0,4),4,1));
L_1800ffcd0_4:;
wr(s->u,5,4,(rd(s->r,0,4)-rd(s->r,0,4)));
L_1800ffcd0_5:;
wr(s->u,9,1,(rd(s->u,5,4)<rd(s->u,1,4)));
L_1800ffcd0_6:;
wr(s->r,512,1,((rd(s->r,512,1)!=0)||(rd(s->u,9,1)!=0)));
L_1800ffcd0_7:;
wr(s->u,10,1,signed_overflow(rd(s->u,5,4),rd(s->u,1,4),4,1));
L_1800ffcd0_8:;
wr(s->r,523,1,((rd(s->r,523,1)!=0)!=(rd(s->u,10,1)!=0)));
L_1800ffcd0_9:;
wr(s->r,0,4,(rd(s->u,5,4)-rd(s->u,1,4)));
L_1800ffcd0_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ffcd0_11:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffcd0_12:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ffcd0_13:;
wr(s->u,11,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ffcd0_14:;
wr(s->u,15,1,pop(rd(s->u,11,4),4));
L_1800ffcd0_15:;
wr(s->u,16,1,(rd(s->u,15,1)&((U)UINT64_C(0x1))));
L_1800ffcd0_16:;
wr(s->r,514,1,(rd(s->u,16,1)==((U)UINT64_C(0x0))));
L_1800ffcd0_17:;
/* 1800ffcd2: sbb eax, -1 */
L_1800ffcd2_0:;
L_1800ffcd2_1:;
wr(s->u,1,4,rd(s->r,512,1));
L_1800ffcd2_2:;
wr(s->r,512,1,(rd(s->r,0,4)<((U)UINT64_C(0xffffffff))));
L_1800ffcd2_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0xffffffff)),4,1));
L_1800ffcd2_4:;
wr(s->u,5,4,(rd(s->r,0,4)-((U)UINT64_C(0xffffffff))));
L_1800ffcd2_5:;
wr(s->u,9,1,(rd(s->u,5,4)<rd(s->u,1,4)));
L_1800ffcd2_6:;
wr(s->r,512,1,((rd(s->r,512,1)!=0)||(rd(s->u,9,1)!=0)));
L_1800ffcd2_7:;
wr(s->u,10,1,signed_overflow(rd(s->u,5,4),rd(s->u,1,4),4,1));
L_1800ffcd2_8:;
wr(s->r,523,1,((rd(s->r,523,1)!=0)!=(rd(s->u,10,1)!=0)));
L_1800ffcd2_9:;
wr(s->r,0,4,(rd(s->u,5,4)-rd(s->u,1,4)));
L_1800ffcd2_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ffcd2_11:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffcd2_12:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ffcd2_13:;
wr(s->u,11,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ffcd2_14:;
wr(s->u,15,1,pop(rd(s->u,11,4),4));
L_1800ffcd2_15:;
wr(s->u,16,1,(rd(s->u,15,1)&((U)UINT64_C(0x1))));
L_1800ffcd2_16:;
wr(s->r,514,1,(rd(s->u,16,1)==((U)UINT64_C(0x0))));
L_1800ffcd2_17:;
/* 1800ffcd5: test eax, eax */
L_1800ffcd5_0:;
L_1800ffcd5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffcd5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffcd5_3:;
wr(s->u,17,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ffcd5_4:;
wr(s->r,519,1,(sx(rd(s->u,17,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffcd5_5:;
wr(s->r,518,1,(rd(s->u,17,4)==((U)UINT64_C(0x0))));
L_1800ffcd5_6:;
wr(s->u,11,4,(rd(s->u,17,4)&((U)UINT64_C(0xff))));
L_1800ffcd5_7:;
wr(s->u,15,1,pop(rd(s->u,11,4),4));
L_1800ffcd5_8:;
wr(s->u,16,1,(rd(s->u,15,1)&((U)UINT64_C(0x1))));
L_1800ffcd5_9:;
wr(s->r,514,1,(rd(s->u,16,1)==((U)UINT64_C(0x0))));
L_1800ffcd5_10:;
/* 1800ffcd7: jne 0x1800ffdfc */
L_1800ffcd7_0:;
L_1800ffcd7_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1800ffcd7_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800ffdfc);}
L_1800ffcd7_3:;
return UINT64_C(0x1800ffcdd);
}
uint64_t b_1800ffcd5(CPU*s){
/* 1800ffcd5: test eax, eax */
L_1800ffcd5_0:;
L_1800ffcd5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffcd5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffcd5_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ffcd5_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffcd5_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1800ffcd5_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1800ffcd5_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1800ffcd5_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1800ffcd5_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1800ffcd5_10:;
/* 1800ffcd7: jne 0x1800ffdfc */
L_1800ffcd7_0:;
L_1800ffcd7_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1800ffcd7_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800ffdfc);}
L_1800ffcd7_3:;
return UINT64_C(0x1800ffcdd);
}
uint64_t b_1800ffcdd(CPU*s){
/* 1800ffcdd: lea r9, [rsp + 0x50] */
L_1800ffcdd_0:;
L_1800ffcdd_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1800ffcdd_2:;
wr(s->r,136,8,rd(s->u,8,8));
L_1800ffcdd_3:;
/* 1800ffce2: lea r8d, [rax + 4] */
L_1800ffce2_0:;
L_1800ffce2_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x4))));
L_1800ffce2_2:;
wr(s->r,128,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1800ffce2_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1800ffce2_4:;
/* 1800ffce6: lea rdx, [rsp + 0x54] */
L_1800ffce6_0:;
L_1800ffce6_1:;
wr(s->u,8,8,(((U)UINT64_C(0x54))+rd(s->r,32,8)));
L_1800ffce6_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1800ffce6_3:;
/* 1800ffceb: mov rcx, rbp */
L_1800ffceb_0:;
L_1800ffceb_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1800ffceb_2:;
/* 1800ffcee: mov qword ptr [rsp + 0x20], r15 */
L_1800ffcee_0:;
L_1800ffcee_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1800ffcee_2:;
wr(s->u,16,8,rd(s->r,184,8));
L_1800ffcee_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1800ffcee_4:;
/* 1800ffcf3: call 0x180034740 */
L_1800ffcf3_0:;
L_1800ffcf3_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffcf3_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffcf8)));
L_1800ffcf3_3:;
return (uint64_t)UINT64_C(0x180034740);
L_1800ffcf3_4:;
return UINT64_C(0x1800ffcf8);
}
uint64_t b_1800ffcf8(CPU*s){
/* 1800ffcf8: test eax, eax */
L_1800ffcf8_0:;
L_1800ffcf8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffcf8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffcf8_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ffcf8_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffcf8_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1800ffcf8_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1800ffcf8_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1800ffcf8_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1800ffcf8_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1800ffcf8_10:;
/* 1800ffcfa: je 0x1800ffe9f */
L_1800ffcfa_0:;
L_1800ffcfa_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ffe9f);}
L_1800ffcfa_2:;
return UINT64_C(0x1800ffd00);
}
uint64_t b_1800ffd00(CPU*s){
/* 1800ffd00: cmp dword ptr [rsp + 0x50], 4 */
L_1800ffd00_0:;
L_1800ffd00_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1800ffd00_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ffd00_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1800ffd00_4:;
wr(s->r,512,1,(rd(s->u,19,4)<((U)UINT64_C(0x4))));
L_1800ffd00_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),((U)UINT64_C(0x4)),4,1));
L_1800ffd00_6:;
wr(s->u,23,4,(rd(s->u,19,4)-((U)UINT64_C(0x4))));
L_1800ffd00_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffd00_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1800ffd00_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1800ffd00_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1800ffd00_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ffd00_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ffd00_13:;
/* 1800ffd05: jne 0x1800ffe98 */
L_1800ffd05_0:;
L_1800ffd05_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1800ffd05_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1800ffe98);}
L_1800ffd05_3:;
return UINT64_C(0x1800ffd0b);
}
uint64_t b_1800ffd0b(CPU*s){
/* 1800ffd0b: mov rbx, r15 */
L_1800ffd0b_0:;
L_1800ffd0b_1:;
wr(s->r,24,8,rd(s->r,184,8));
L_1800ffd0b_2:;
/* 1800ffd0e: test r12, r12 */
L_1800ffd0e_0:;
L_1800ffd0e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffd0e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffd0e_3:;
wr(s->u,12,8,(rd(s->r,160,8)&rd(s->r,160,8)));
L_1800ffd0e_4:;
wr(s->r,519,1,(sx(rd(s->u,12,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffd0e_5:;
wr(s->r,518,1,(rd(s->u,12,8)==((U)UINT64_C(0x0))));
L_1800ffd0e_6:;
wr(s->u,2,8,(rd(s->u,12,8)&((U)UINT64_C(0xff))));
L_1800ffd0e_7:;
wr(s->u,10,1,pop(rd(s->u,2,8),8));
L_1800ffd0e_8:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1800ffd0e_9:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1800ffd0e_10:;
/* 1800ffd11: jle 0x1800ffd30 */
L_1800ffd11_0:;
L_1800ffd11_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1800ffd11_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1800ffd11_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1800ffd30);}
L_1800ffd11_4:;
return UINT64_C(0x1800ffd13);
}
uint64_t b_1800ffd13(CPU*s){
/* 1800ffd13: mov rax, qword ptr [r13 + 8] */
L_1800ffd13_0:;
L_1800ffd13_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0x8))));
L_1800ffd13_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffd13_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1800ffd13_4:;
/* 1800ffd17: mov ecx, dword ptr [rsp + 0x54] */
L_1800ffd17_0:;
L_1800ffd17_1:;
wr(s->u,8,8,(((U)UINT64_C(0x54))+rd(s->r,32,8)));
L_1800ffd17_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1800ffd17_3:;
wr(s->r,8,4,rd(s->u,36,4));
L_1800ffd17_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1800ffd17_5:;
/* 1800ffd1b: nop dword ptr [rax + rax] */
L_1800ffd1b_0:;
L_1800ffd1b_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1800ffd1b_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1800ffd1b_3:;
/* 1800ffd20: cmp ecx, dword ptr [rax] */
L_1800ffd20_0:;
L_1800ffd20_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,0,8),4));
L_1800ffd20_2:;
wr(s->u,54,4,rd(s->u,32,4));
L_1800ffd20_3:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,54,4)));
L_1800ffd20_4:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,54,4),4,1));
L_1800ffd20_5:;
wr(s->u,58,4,(rd(s->r,8,4)-rd(s->u,54,4)));
L_1800ffd20_6:;
wr(s->r,519,1,(sx(rd(s->u,58,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffd20_7:;
wr(s->r,518,1,(rd(s->u,58,4)==((U)UINT64_C(0x0))));
L_1800ffd20_8:;
wr(s->u,48,4,(rd(s->u,58,4)&((U)UINT64_C(0xff))));
L_1800ffd20_9:;
wr(s->u,52,1,pop(rd(s->u,48,4),4));
L_1800ffd20_10:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1800ffd20_11:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1800ffd20_12:;
/* 1800ffd22: je 0x1800ffd82 */
L_1800ffd22_0:;
L_1800ffd22_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ffd82);}
L_1800ffd22_2:;
return UINT64_C(0x1800ffd24);
}
uint64_t b_1800ffd20(CPU*s){
/* 1800ffd20: cmp ecx, dword ptr [rax] */
L_1800ffd20_0:;
L_1800ffd20_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,0,8),4));
L_1800ffd20_2:;
wr(s->u,10,4,rd(s->u,0,4));
L_1800ffd20_3:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,10,4)));
L_1800ffd20_4:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,10,4),4,1));
L_1800ffd20_5:;
wr(s->u,14,4,(rd(s->r,8,4)-rd(s->u,10,4)));
L_1800ffd20_6:;
wr(s->r,519,1,(sx(rd(s->u,14,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffd20_7:;
wr(s->r,518,1,(rd(s->u,14,4)==((U)UINT64_C(0x0))));
L_1800ffd20_8:;
wr(s->u,4,4,(rd(s->u,14,4)&((U)UINT64_C(0xff))));
L_1800ffd20_9:;
wr(s->u,8,1,pop(rd(s->u,4,4),4));
L_1800ffd20_10:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ffd20_11:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ffd20_12:;
/* 1800ffd22: je 0x1800ffd82 */
L_1800ffd22_0:;
L_1800ffd22_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ffd82);}
L_1800ffd22_2:;
return UINT64_C(0x1800ffd24);
}
uint64_t b_1800ffd24(CPU*s){
/* 1800ffd24: inc rbx */
L_1800ffd24_0:;
L_1800ffd24_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x1)),8,0));
L_1800ffd24_2:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x1))));
L_1800ffd24_3:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffd24_4:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1800ffd24_5:;
wr(s->u,1,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1800ffd24_6:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1800ffd24_7:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1800ffd24_8:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1800ffd24_9:;
/* 1800ffd27: add rax, 0x10 */
L_1800ffd27_0:;
L_1800ffd27_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1800ffd27_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x10)),8,0));
L_1800ffd27_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1800ffd27_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffd27_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1800ffd27_6:;
wr(s->u,1,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1800ffd27_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1800ffd27_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1800ffd27_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1800ffd27_10:;
/* 1800ffd2b: cmp rbx, r12 */
L_1800ffd2b_0:;
L_1800ffd2b_1:;
wr(s->u,11,8,rd(s->r,160,8));
L_1800ffd2b_2:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->u,11,8)));
L_1800ffd2b_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->u,11,8),8,1));
L_1800ffd2b_4:;
wr(s->u,19,8,(rd(s->r,24,8)-rd(s->u,11,8)));
L_1800ffd2b_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffd2b_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1800ffd2b_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1800ffd2b_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1800ffd2b_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1800ffd2b_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1800ffd2b_11:;
/* 1800ffd2e: jl 0x1800ffd20 */
L_1800ffd2e_0:;
L_1800ffd2e_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1800ffd2e_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800ffd20);}
L_1800ffd2e_3:;
return UINT64_C(0x1800ffd30);
}
uint64_t b_1800ffd30(CPU*s){
/* 1800ffd30: mov r9d, 1 */
L_1800ffd30_0:;
L_1800ffd30_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1800ffd30_2:;
/* 1800ffd36: xor r8d, r8d */
L_1800ffd36_0:;
L_1800ffd36_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffd36_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffd36_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1800ffd36_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1800ffd36_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffd36_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1800ffd36_7:;
wr(s->u,8,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1800ffd36_8:;
wr(s->u,12,1,pop(rd(s->u,8,4),4));
L_1800ffd36_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1800ffd36_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1800ffd36_11:;
/* 1800ffd39: mov rcx, rbp */
L_1800ffd39_0:;
L_1800ffd39_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1800ffd39_2:;
/* 1800ffd3c: lea edx, [r9 - 5] */
L_1800ffd3c_0:;
L_1800ffd3c_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0xfffffffffffffffb))));
L_1800ffd3c_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1800ffd3c_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ffd3c_4:;
/* 1800ffd40: call qword ptr [rip + 0x548baa] */
L_1800ffd40_0:;
L_1800ffd40_1:;
wr(s->u,14,8,mr(UINT64_C(0x1806488f0),8));
L_1800ffd40_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffd40_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffd46)));
L_1800ffd40_4:;
return (uint64_t)rd(s->u,14,8);
L_1800ffd40_5:;
return UINT64_C(0x1800ffd46);
}
uint64_t b_1800ffd46(CPU*s){
/* 1800ffd46: mov rbx, qword ptr [rsp + 0x30] */
L_1800ffd46_0:;
L_1800ffd46_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ffd46_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffd46_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1800ffd46_4:;
/* 1800ffd4b: mov rax, rbx */
L_1800ffd4b_0:;
L_1800ffd4b_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1800ffd4b_2:;
/* 1800ffd4e: and eax, 7 */
L_1800ffd4e_0:;
L_1800ffd4e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffd4e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffd4e_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x7))));
L_1800ffd4e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ffd4e_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffd4e_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ffd4e_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ffd4e_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1800ffd4e_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1800ffd4e_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1800ffd4e_11:;
/* 1800ffd51: je 0x1800ffd5a */
L_1800ffd51_0:;
L_1800ffd51_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ffd5a);}
L_1800ffd51_2:;
return UINT64_C(0x1800ffd53);
}
uint64_t b_1800ffd53(CPU*s){
/* 1800ffd53: sub rbx, rax */
L_1800ffd53_0:;
L_1800ffd53_1:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->r,0,8)));
L_1800ffd53_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->r,0,8),8,1));
L_1800ffd53_3:;
wr(s->r,24,8,(rd(s->r,24,8)-rd(s->r,0,8)));
L_1800ffd53_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffd53_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1800ffd53_6:;
wr(s->u,16,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1800ffd53_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ffd53_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ffd53_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ffd53_10:;
/* 1800ffd56: add rbx, 8 */
L_1800ffd56_0:;
L_1800ffd56_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1800ffd56_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x8)),8,0));
L_1800ffd56_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1800ffd56_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffd56_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1800ffd56_6:;
wr(s->u,16,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1800ffd56_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ffd56_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ffd56_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ffd56_10:;
/* 1800ffd5a: lea r8, [rsp + 0x44] */
L_1800ffd5a_0:;
L_1800ffd5a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1800ffd5a_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ffd5a_3:;
/* 1800ffd5f: mov r9d, 1 */
L_1800ffd5f_0:;
L_1800ffd5f_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1800ffd5f_2:;
/* 1800ffd65: mov edx, ebx */
L_1800ffd65_0:;
L_1800ffd65_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1800ffd65_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ffd65_3:;
/* 1800ffd67: mov rcx, rbp */
L_1800ffd67_0:;
L_1800ffd67_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1800ffd67_2:;
/* 1800ffd6a: mov qword ptr [rsp + 0x40], rbx */
L_1800ffd6a_0:;
L_1800ffd6a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ffd6a_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ffd6a_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffd6a_4:;
/* 1800ffd6f: call qword ptr [rip + 0x548b7b] */
L_1800ffd6f_0:;
L_1800ffd6f_1:;
wr(s->u,26,8,mr(UINT64_C(0x1806488f0),8));
L_1800ffd6f_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffd6f_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffd75)));
L_1800ffd6f_4:;
return (uint64_t)rd(s->u,26,8);
L_1800ffd6f_5:;
return UINT64_C(0x1800ffd75);
}
uint64_t b_1800ffd5a(CPU*s){
/* 1800ffd5a: lea r8, [rsp + 0x44] */
L_1800ffd5a_0:;
L_1800ffd5a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1800ffd5a_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ffd5a_3:;
/* 1800ffd5f: mov r9d, 1 */
L_1800ffd5f_0:;
L_1800ffd5f_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1800ffd5f_2:;
/* 1800ffd65: mov edx, ebx */
L_1800ffd65_0:;
L_1800ffd65_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1800ffd65_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ffd65_3:;
/* 1800ffd67: mov rcx, rbp */
L_1800ffd67_0:;
L_1800ffd67_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1800ffd67_2:;
/* 1800ffd6a: mov qword ptr [rsp + 0x40], rbx */
L_1800ffd6a_0:;
L_1800ffd6a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ffd6a_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ffd6a_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffd6a_4:;
/* 1800ffd6f: call qword ptr [rip + 0x548b7b] */
L_1800ffd6f_0:;
L_1800ffd6f_1:;
wr(s->u,16,8,mr(UINT64_C(0x1806488f0),8));
L_1800ffd6f_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffd6f_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffd75)));
L_1800ffd6f_4:;
return (uint64_t)rd(s->u,16,8);
L_1800ffd6f_5:;
return UINT64_C(0x1800ffd75);
}
uint64_t b_1800ffd75(CPU*s){
/* 1800ffd75: sub qword ptr [rdi], rbx */
L_1800ffd75_0:;
L_1800ffd75_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffd75_2:;
wr(s->r,512,1,(rd(s->u,8,8)<rd(s->r,24,8)));
L_1800ffd75_3:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffd75_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,8),rd(s->r,24,8),8,1));
L_1800ffd75_5:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffd75_6:;
wr(s->u,8,8,(rd(s->u,8,8)-rd(s->r,24,8)));
L_1800ffd75_7:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,8,8));
L_1800ffd75_8:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffd75_9:;
wr(s->r,519,1,(sx(rd(s->u,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffd75_10:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffd75_11:;
wr(s->r,518,1,(rd(s->u,8,8)==((U)UINT64_C(0x0))));
L_1800ffd75_12:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffd75_13:;
wr(s->u,16,8,(rd(s->u,8,8)&((U)UINT64_C(0xff))));
L_1800ffd75_14:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ffd75_15:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ffd75_16:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ffd75_17:;
/* 1800ffd78: mov qword ptr [rsp + 0x30], rbx */
L_1800ffd78_0:;
L_1800ffd78_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ffd78_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ffd78_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffd78_4:;
/* 1800ffd7d: jmp 0x1800ffe33 */
L_1800ffd7d_0:;
L_1800ffd7d_1:;
return UINT64_C(0x1800ffe33);
L_1800ffd7d_2:;
return UINT64_C(0x1800ffd82);
}
uint64_t b_1800ffd82(CPU*s){
/* 1800ffd82: mov esi, dword ptr [rsp + 0x30] */
L_1800ffd82_0:;
L_1800ffd82_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ffd82_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1800ffd82_3:;
wr(s->r,48,4,rd(s->u,8,4));
L_1800ffd82_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1800ffd82_5:;
/* 1800ffd86: mov ecx, 0x42 */
L_1800ffd86_0:;
L_1800ffd86_1:;
wr(s->r,8,8,((U)UINT64_C(0x42)));
L_1800ffd86_2:;
/* 1800ffd8b: add rbx, rbx */
L_1800ffd8b_0:;
L_1800ffd8b_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+rd(s->r,24,8))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1800ffd8b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->r,24,8),8,0));
L_1800ffd8b_3:;
wr(s->r,24,8,(rd(s->r,24,8)+rd(s->r,24,8)));
L_1800ffd8b_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffd8b_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1800ffd8b_6:;
wr(s->u,12,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1800ffd8b_7:;
wr(s->u,20,1,pop(rd(s->u,12,8),8));
L_1800ffd8b_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1800ffd8b_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1800ffd8b_10:;
/* 1800ffd8e: add esi, -4 */
L_1800ffd8e_0:;
L_1800ffd8e_1:;
wr(s->r,512,1,(((rd(s->r,48,4)+((U)UINT64_C(0xfffffffc)))&(((U)1<<32)-1))<rd(s->r,48,4)));
L_1800ffd8e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),((U)UINT64_C(0xfffffffc)),4,0));
L_1800ffd8e_3:;
wr(s->r,48,4,(rd(s->r,48,4)+((U)UINT64_C(0xfffffffc))));
L_1800ffd8e_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1800ffd8e_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffd8e_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1800ffd8e_7:;
wr(s->u,12,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1800ffd8e_8:;
wr(s->u,20,1,pop(rd(s->u,12,4),4));
L_1800ffd8e_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1800ffd8e_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1800ffd8e_11:;
/* 1800ffd91: mov edx, esi */
L_1800ffd91_0:;
L_1800ffd91_1:;
wr(s->r,16,4,rd(s->r,48,4));
L_1800ffd91_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ffd91_3:;
/* 1800ffd93: call qword ptr [rip + 0x54874f] */
L_1800ffd93_0:;
L_1800ffd93_1:;
wr(s->u,22,8,mr(UINT64_C(0x1806484e8),8));
L_1800ffd93_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffd93_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffd99)));
L_1800ffd93_4:;
return (uint64_t)rd(s->u,22,8);
L_1800ffd93_5:;
return UINT64_C(0x1800ffd99);
}
uint64_t b_1800ffd99(CPU*s){
/* 1800ffd99: mov rcx, rax */
L_1800ffd99_0:;
L_1800ffd99_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1800ffd99_2:;
/* 1800ffd9c: call qword ptr [rip + 0x54874e] */
L_1800ffd9c_0:;
L_1800ffd9c_1:;
wr(s->u,0,8,mr(UINT64_C(0x1806484f0),8));
L_1800ffd9c_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffd9c_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffda2)));
L_1800ffd9c_4:;
return (uint64_t)rd(s->u,0,8);
L_1800ffd9c_5:;
return UINT64_C(0x1800ffda2);
}
uint64_t b_1800ffda2(CPU*s){
/* 1800ffda2: mov rcx, qword ptr [r13 + 8] */
L_1800ffda2_0:;
L_1800ffda2_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0x8))));
L_1800ffda2_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffda2_3:;
wr(s->r,8,8,rd(s->u,40,8));
L_1800ffda2_4:;
/* 1800ffda6: mov qword ptr [rcx + rbx*8 + 8], rax */
L_1800ffda6_0:;
L_1800ffda6_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,8,8)));
L_1800ffda6_2:;
wr(s->u,16,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1800ffda6_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1800ffda6_4:;
wr(s->u,32,8,rd(s->r,0,8));
L_1800ffda6_5:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,32,8));
L_1800ffda6_6:;
/* 1800ffdab: mov rax, qword ptr [r13 + 8] */
L_1800ffdab_0:;
L_1800ffdab_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0x8))));
L_1800ffdab_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffdab_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1800ffdab_4:;
/* 1800ffdaf: cmp qword ptr [rax + rbx*8 + 8], r15 */
L_1800ffdaf_0:;
L_1800ffdaf_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,0,8)));
L_1800ffdaf_2:;
wr(s->u,16,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1800ffdaf_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1800ffdaf_4:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,24,8),8));
L_1800ffdaf_5:;
wr(s->u,58,8,rd(s->u,40,8));
L_1800ffdaf_6:;
wr(s->r,512,1,(rd(s->u,58,8)<rd(s->r,184,8)));
L_1800ffdaf_7:;
wr(s->r,523,1,signed_overflow(rd(s->u,58,8),rd(s->r,184,8),8,1));
L_1800ffdaf_8:;
wr(s->u,66,8,(rd(s->u,58,8)-rd(s->r,184,8)));
L_1800ffdaf_9:;
wr(s->r,519,1,(sx(rd(s->u,66,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffdaf_10:;
wr(s->r,518,1,(rd(s->u,66,8)==((U)UINT64_C(0x0))));
L_1800ffdaf_11:;
wr(s->u,48,8,(rd(s->u,66,8)&((U)UINT64_C(0xff))));
L_1800ffdaf_12:;
wr(s->u,56,1,pop(rd(s->u,48,8),8));
L_1800ffdaf_13:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1800ffdaf_14:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1800ffdaf_15:;
/* 1800ffdb4: je 0x1800ffe91 */
L_1800ffdb4_0:;
L_1800ffdb4_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ffe91);}
L_1800ffdb4_2:;
return UINT64_C(0x1800ffdba);
}
uint64_t b_1800ffdba(CPU*s){
/* 1800ffdba: mov dword ptr [rax + rbx*8 + 4], esi */
L_1800ffdba_0:;
L_1800ffdba_1:;
wr(s->u,8,8,(((U)UINT64_C(0x4))+rd(s->r,0,8)));
L_1800ffdba_2:;
wr(s->u,16,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1800ffdba_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1800ffdba_4:;
wr(s->u,32,4,rd(s->r,48,4));
L_1800ffdba_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1800ffdba_6:;
/* 1800ffdbe: mov rdx, qword ptr [r13 + 8] */
L_1800ffdbe_0:;
L_1800ffdbe_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0x8))));
L_1800ffdbe_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffdbe_3:;
wr(s->r,16,8,rd(s->u,36,8));
L_1800ffdbe_4:;
/* 1800ffdc2: mov r8d, esi */
L_1800ffdc2_0:;
L_1800ffdc2_1:;
wr(s->r,128,4,rd(s->r,48,4));
L_1800ffdc2_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1800ffdc2_3:;
/* 1800ffdc5: mov rdx, qword ptr [rdx + rbx*8 + 8] */
L_1800ffdc5_0:;
L_1800ffdc5_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,16,8)));
L_1800ffdc5_2:;
wr(s->u,16,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1800ffdc5_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1800ffdc5_4:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,24,8),8));
L_1800ffdc5_5:;
wr(s->r,16,8,rd(s->u,36,8));
L_1800ffdc5_6:;
/* 1800ffdca: mov rcx, rbp */
L_1800ffdca_0:;
L_1800ffdca_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1800ffdca_2:;
/* 1800ffdcd: call 0x1802c70b0 */
L_1800ffdcd_0:;
L_1800ffdcd_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffdcd_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffdd2)));
L_1800ffdcd_3:;
return (uint64_t)UINT64_C(0x1802c70b0);
L_1800ffdcd_4:;
return UINT64_C(0x1800ffdd2);
}
uint64_t b_1800ffdd2(CPU*s){
/* 1800ffdd2: mov ebx, eax */
L_1800ffdd2_0:;
L_1800ffdd2_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1800ffdd2_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1800ffdd2_3:;
/* 1800ffdd4: test eax, eax */
L_1800ffdd4_0:;
L_1800ffdd4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffdd4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffdd4_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1800ffdd4_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffdd4_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1800ffdd4_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1800ffdd4_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1800ffdd4_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1800ffdd4_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1800ffdd4_10:;
/* 1800ffdd6: jne 0x1800ffea4 */
L_1800ffdd6_0:;
L_1800ffdd6_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1800ffdd6_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1800ffea4);}
L_1800ffdd6_3:;
return UINT64_C(0x1800ffddc);
}
uint64_t b_1800ffddc(CPU*s){
/* 1800ffddc: mov rcx, qword ptr [rsp + 0x30] */
L_1800ffddc_0:;
L_1800ffddc_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ffddc_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffddc_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800ffddc_4:;
/* 1800ffde1: mov edx, ecx */
L_1800ffde1_0:;
L_1800ffde1_1:;
wr(s->r,16,4,rd(s->r,8,4));
L_1800ffde1_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ffde1_3:;
/* 1800ffde3: and edx, 7 */
L_1800ffde3_0:;
L_1800ffde3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffde3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffde3_3:;
wr(s->r,16,4,(rd(s->r,16,4)&((U)UINT64_C(0x7))));
L_1800ffde3_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ffde3_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffde3_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1800ffde3_7:;
wr(s->u,17,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1800ffde3_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1800ffde3_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1800ffde3_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1800ffde3_11:;
/* 1800ffde6: jbe 0x1800ffdf7 */
L_1800ffde6_0:;
L_1800ffde6_1:;
wr(s->u,16,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1800ffde6_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1800ffdf7);}
L_1800ffde6_3:;
return UINT64_C(0x1800ffde8);
}
uint64_t b_1800ffde8(CPU*s){
/* 1800ffde8: mov eax, 8 */
L_1800ffde8_0:;
L_1800ffde8_1:;
wr(s->r,0,8,((U)UINT64_C(0x8)));
L_1800ffde8_2:;
/* 1800ffded: sub eax, edx */
L_1800ffded_0:;
L_1800ffded_1:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,16,4)));
L_1800ffded_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,16,4),4,1));
L_1800ffded_3:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->r,16,4)));
L_1800ffded_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ffded_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffded_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ffded_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ffded_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1800ffded_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ffded_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ffded_11:;
/* 1800ffdef: add rcx, rax */
L_1800ffdef_0:;
L_1800ffdef_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1800ffdef_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,0,8),8,0));
L_1800ffdef_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,0,8)));
L_1800ffdef_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffdef_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ffdef_6:;
wr(s->u,16,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ffdef_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ffdef_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ffdef_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ffdef_10:;
/* 1800ffdf2: mov qword ptr [rsp + 0x30], rcx */
L_1800ffdf2_0:;
L_1800ffdf2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ffdf2_2:;
wr(s->u,8,8,rd(s->r,8,8));
L_1800ffdf2_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffdf2_4:;
/* 1800ffdf7: sub qword ptr [rdi], rcx */
L_1800ffdf7_0:;
L_1800ffdf7_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffdf7_2:;
wr(s->r,512,1,(rd(s->u,8,8)<rd(s->r,8,8)));
L_1800ffdf7_3:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffdf7_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,8),rd(s->r,8,8),8,1));
L_1800ffdf7_5:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffdf7_6:;
wr(s->u,8,8,(rd(s->u,8,8)-rd(s->r,8,8)));
L_1800ffdf7_7:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,8,8));
L_1800ffdf7_8:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffdf7_9:;
wr(s->r,519,1,(sx(rd(s->u,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffdf7_10:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffdf7_11:;
wr(s->r,518,1,(rd(s->u,8,8)==((U)UINT64_C(0x0))));
L_1800ffdf7_12:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffdf7_13:;
wr(s->u,16,8,(rd(s->u,8,8)&((U)UINT64_C(0xff))));
L_1800ffdf7_14:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ffdf7_15:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ffdf7_16:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ffdf7_17:;
/* 1800ffdfa: jmp 0x1800ffe33 */
L_1800ffdfa_0:;
L_1800ffdfa_1:;
return UINT64_C(0x1800ffe33);
L_1800ffdfa_2:;
return UINT64_C(0x1800ffdfc);
}
uint64_t b_1800ffdf7(CPU*s){
/* 1800ffdf7: sub qword ptr [rdi], rcx */
L_1800ffdf7_0:;
L_1800ffdf7_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffdf7_2:;
wr(s->r,512,1,(rd(s->u,0,8)<rd(s->r,8,8)));
L_1800ffdf7_3:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffdf7_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,0,8),rd(s->r,8,8),8,1));
L_1800ffdf7_5:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffdf7_6:;
wr(s->u,0,8,(rd(s->u,0,8)-rd(s->r,8,8)));
L_1800ffdf7_7:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,0,8));
L_1800ffdf7_8:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffdf7_9:;
wr(s->r,519,1,(sx(rd(s->u,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffdf7_10:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffdf7_11:;
wr(s->r,518,1,(rd(s->u,0,8)==((U)UINT64_C(0x0))));
L_1800ffdf7_12:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffdf7_13:;
wr(s->u,8,8,(rd(s->u,0,8)&((U)UINT64_C(0xff))));
L_1800ffdf7_14:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1800ffdf7_15:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1800ffdf7_16:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1800ffdf7_17:;
/* 1800ffdfa: jmp 0x1800ffe33 */
L_1800ffdfa_0:;
L_1800ffdfa_1:;
return UINT64_C(0x1800ffe33);
L_1800ffdfa_2:;
return UINT64_C(0x1800ffdfc);
}
uint64_t b_1800ffdfc(CPU*s){
/* 1800ffdfc: mov rbx, qword ptr [rsp + 0x30] */
L_1800ffdfc_0:;
L_1800ffdfc_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ffdfc_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffdfc_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1800ffdfc_4:;
/* 1800ffe01: mov rax, rbx */
L_1800ffe01_0:;
L_1800ffe01_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1800ffe01_2:;
/* 1800ffe04: and eax, 7 */
L_1800ffe04_0:;
L_1800ffe04_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffe04_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffe04_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x7))));
L_1800ffe04_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ffe04_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffe04_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ffe04_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ffe04_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1800ffe04_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1800ffe04_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1800ffe04_11:;
/* 1800ffe07: je 0x1800ffe10 */
L_1800ffe07_0:;
L_1800ffe07_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1800ffe10);}
L_1800ffe07_2:;
return UINT64_C(0x1800ffe09);
}
uint64_t b_1800ffe09(CPU*s){
/* 1800ffe09: sub rbx, rax */
L_1800ffe09_0:;
L_1800ffe09_1:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->r,0,8)));
L_1800ffe09_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->r,0,8),8,1));
L_1800ffe09_3:;
wr(s->r,24,8,(rd(s->r,24,8)-rd(s->r,0,8)));
L_1800ffe09_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffe09_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1800ffe09_6:;
wr(s->u,16,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1800ffe09_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ffe09_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ffe09_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ffe09_10:;
/* 1800ffe0c: add rbx, 8 */
L_1800ffe0c_0:;
L_1800ffe0c_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1800ffe0c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x8)),8,0));
L_1800ffe0c_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1800ffe0c_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffe0c_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1800ffe0c_6:;
wr(s->u,16,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1800ffe0c_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ffe0c_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ffe0c_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ffe0c_10:;
/* 1800ffe10: lea r8, [rsp + 0x44] */
L_1800ffe10_0:;
L_1800ffe10_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1800ffe10_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ffe10_3:;
/* 1800ffe15: mov r9d, 1 */
L_1800ffe15_0:;
L_1800ffe15_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1800ffe15_2:;
/* 1800ffe1b: mov edx, ebx */
L_1800ffe1b_0:;
L_1800ffe1b_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1800ffe1b_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ffe1b_3:;
/* 1800ffe1d: mov rcx, rbp */
L_1800ffe1d_0:;
L_1800ffe1d_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1800ffe1d_2:;
/* 1800ffe20: mov qword ptr [rsp + 0x40], rbx */
L_1800ffe20_0:;
L_1800ffe20_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ffe20_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ffe20_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffe20_4:;
/* 1800ffe25: call qword ptr [rip + 0x548ac5] */
L_1800ffe25_0:;
L_1800ffe25_1:;
wr(s->u,26,8,mr(UINT64_C(0x1806488f0),8));
L_1800ffe25_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffe25_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffe2b)));
L_1800ffe25_4:;
return (uint64_t)rd(s->u,26,8);
L_1800ffe25_5:;
return UINT64_C(0x1800ffe2b);
}
uint64_t b_1800ffe10(CPU*s){
/* 1800ffe10: lea r8, [rsp + 0x44] */
L_1800ffe10_0:;
L_1800ffe10_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1800ffe10_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ffe10_3:;
/* 1800ffe15: mov r9d, 1 */
L_1800ffe15_0:;
L_1800ffe15_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1800ffe15_2:;
/* 1800ffe1b: mov edx, ebx */
L_1800ffe1b_0:;
L_1800ffe1b_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1800ffe1b_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ffe1b_3:;
/* 1800ffe1d: mov rcx, rbp */
L_1800ffe1d_0:;
L_1800ffe1d_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1800ffe1d_2:;
/* 1800ffe20: mov qword ptr [rsp + 0x40], rbx */
L_1800ffe20_0:;
L_1800ffe20_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ffe20_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ffe20_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffe20_4:;
/* 1800ffe25: call qword ptr [rip + 0x548ac5] */
L_1800ffe25_0:;
L_1800ffe25_1:;
wr(s->u,16,8,mr(UINT64_C(0x1806488f0),8));
L_1800ffe25_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffe25_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffe2b)));
L_1800ffe25_4:;
return (uint64_t)rd(s->u,16,8);
L_1800ffe25_5:;
return UINT64_C(0x1800ffe2b);
}
uint64_t b_1800ffe2b(CPU*s){
/* 1800ffe2b: sub qword ptr [rdi], rbx */
L_1800ffe2b_0:;
L_1800ffe2b_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffe2b_2:;
wr(s->r,512,1,(rd(s->u,8,8)<rd(s->r,24,8)));
L_1800ffe2b_3:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffe2b_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,8),rd(s->r,24,8),8,1));
L_1800ffe2b_5:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffe2b_6:;
wr(s->u,8,8,(rd(s->u,8,8)-rd(s->r,24,8)));
L_1800ffe2b_7:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,8,8));
L_1800ffe2b_8:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffe2b_9:;
wr(s->r,519,1,(sx(rd(s->u,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffe2b_10:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffe2b_11:;
wr(s->r,518,1,(rd(s->u,8,8)==((U)UINT64_C(0x0))));
L_1800ffe2b_12:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffe2b_13:;
wr(s->u,25,8,(rd(s->u,8,8)&((U)UINT64_C(0xff))));
L_1800ffe2b_14:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1800ffe2b_15:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1800ffe2b_16:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1800ffe2b_17:;
/* 1800ffe2e: mov qword ptr [rsp + 0x30], rbx */
L_1800ffe2e_0:;
L_1800ffe2e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1800ffe2e_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1800ffe2e_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffe2e_4:;
/* 1800ffe33: cmp qword ptr [rdi], 0x18 */
L_1800ffe33_0:;
L_1800ffe33_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffe33_2:;
wr(s->u,35,8,rd(s->u,16,8));
L_1800ffe33_3:;
wr(s->r,512,1,(rd(s->u,35,8)<((U)UINT64_C(0x18))));
L_1800ffe33_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,35,8),((U)UINT64_C(0x18)),8,1));
L_1800ffe33_5:;
wr(s->u,43,8,(rd(s->u,35,8)-((U)UINT64_C(0x18))));
L_1800ffe33_6:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffe33_7:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1800ffe33_8:;
wr(s->u,25,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1800ffe33_9:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1800ffe33_10:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1800ffe33_11:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1800ffe33_12:;
/* 1800ffe37: jge 0x1800ffc20 */
L_1800ffe37_0:;
L_1800ffe37_1:;
wr(s->u,24,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1800ffe37_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1800ffc20);}
L_1800ffe37_3:;
return UINT64_C(0x1800ffe3d);
}
uint64_t b_1800ffe33(CPU*s){
/* 1800ffe33: cmp qword ptr [rdi], 0x18 */
L_1800ffe33_0:;
L_1800ffe33_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,56,8),8));
L_1800ffe33_2:;
wr(s->u,19,8,rd(s->u,0,8));
L_1800ffe33_3:;
wr(s->r,512,1,(rd(s->u,19,8)<((U)UINT64_C(0x18))));
L_1800ffe33_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,8),((U)UINT64_C(0x18)),8,1));
L_1800ffe33_5:;
wr(s->u,27,8,(rd(s->u,19,8)-((U)UINT64_C(0x18))));
L_1800ffe33_6:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffe33_7:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1800ffe33_8:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1800ffe33_9:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1800ffe33_10:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1800ffe33_11:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1800ffe33_12:;
/* 1800ffe37: jge 0x1800ffc20 */
L_1800ffe37_0:;
L_1800ffe37_1:;
wr(s->u,8,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1800ffe37_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1800ffc20);}
L_1800ffe37_3:;
return UINT64_C(0x1800ffe3d);
}
uint64_t b_1800ffe3d(CPU*s){
/* 1800ffe3d: mov rax, qword ptr [rsp + 0x48] */
L_1800ffe3d_0:;
L_1800ffe3d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1800ffe3d_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffe3d_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1800ffe3d_4:;
/* 1800ffe42: lea r8, [rsp + 0x44] */
L_1800ffe42_0:;
L_1800ffe42_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1800ffe42_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ffe42_3:;
/* 1800ffe47: xor r9d, r9d */
L_1800ffe47_0:;
L_1800ffe47_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffe47_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffe47_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1800ffe47_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800ffe47_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffe47_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1800ffe47_7:;
wr(s->u,24,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1800ffe47_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1800ffe47_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1800ffe47_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1800ffe47_11:;
/* 1800ffe4a: mov edx, r14d */
L_1800ffe4a_0:;
L_1800ffe4a_1:;
wr(s->r,16,4,rd(s->r,176,4));
L_1800ffe4a_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ffe4a_3:;
/* 1800ffe4d: mov rcx, rbp */
L_1800ffe4d_0:;
L_1800ffe4d_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1800ffe4d_2:;
/* 1800ffe50: mov qword ptr [rsp + 0x40], rax */
L_1800ffe50_0:;
L_1800ffe50_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ffe50_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1800ffe50_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffe50_4:;
/* 1800ffe55: call qword ptr [rip + 0x548a95] */
L_1800ffe55_0:;
L_1800ffe55_1:;
wr(s->u,30,8,mr(UINT64_C(0x1806488f0),8));
L_1800ffe55_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffe55_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffe5b)));
L_1800ffe55_4:;
return (uint64_t)rd(s->u,30,8);
L_1800ffe55_5:;
return UINT64_C(0x1800ffe5b);
}
uint64_t b_1800ffe5b(CPU*s){
/* 1800ffe5b: xor eax, eax */
L_1800ffe5b_0:;
L_1800ffe5b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffe5b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffe5b_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1800ffe5b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ffe5b_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffe5b_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1800ffe5b_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1800ffe5b_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1800ffe5b_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ffe5b_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ffe5b_11:;
/* 1800ffe5d: mov r14, qword ptr [rsp + 0x78] */
L_1800ffe5d_0:;
L_1800ffe5d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1800ffe5d_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffe5d_3:;
wr(s->r,176,8,rd(s->u,16,8));
L_1800ffe5d_4:;
/* 1800ffe62: mov r12, qword ptr [rsp + 0x80] */
L_1800ffe62_0:;
L_1800ffe62_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1800ffe62_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1800ffe62_3:;
wr(s->r,160,8,rd(s->u,16,8));
L_1800ffe62_4:;
/* 1800ffe6a: mov rsi, qword ptr [rsp + 0xc8] */
L_1800ffe6a_0:;
L_1800ffe6a_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc8))+rd(s->r,32,8)));
L_1800ffe6a_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1800ffe6a_3:;
wr(s->r,48,8,rd(s->u,16,8));
L_1800ffe6a_4:;
/* 1800ffe72: mov r15, qword ptr [rsp + 0x70] */
L_1800ffe72_0:;
L_1800ffe72_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1800ffe72_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffe72_3:;
wr(s->r,184,8,rd(s->u,16,8));
L_1800ffe72_4:;
/* 1800ffe77: mov rcx, qword ptr [rsp + 0x68] */
L_1800ffe77_0:;
L_1800ffe77_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1800ffe77_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffe77_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1800ffe77_4:;
/* 1800ffe7c: xor rcx, rsp */
L_1800ffe7c_0:;
L_1800ffe7c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffe7c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffe7c_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800ffe7c_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffe7c_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ffe7c_6:;
wr(s->u,24,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ffe7c_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ffe7c_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ffe7c_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ffe7c_10:;
/* 1800ffe7f: call 0x18000d680 */
L_1800ffe7f_0:;
L_1800ffe7f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffe7f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffe84)));
L_1800ffe7f_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800ffe7f_4:;
return UINT64_C(0x1800ffe84);
}
uint64_t b_1800ffe5d(CPU*s){
/* 1800ffe5d: mov r14, qword ptr [rsp + 0x78] */
L_1800ffe5d_0:;
L_1800ffe5d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1800ffe5d_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffe5d_3:;
wr(s->r,176,8,rd(s->u,16,8));
L_1800ffe5d_4:;
/* 1800ffe62: mov r12, qword ptr [rsp + 0x80] */
L_1800ffe62_0:;
L_1800ffe62_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1800ffe62_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1800ffe62_3:;
wr(s->r,160,8,rd(s->u,16,8));
L_1800ffe62_4:;
/* 1800ffe6a: mov rsi, qword ptr [rsp + 0xc8] */
L_1800ffe6a_0:;
L_1800ffe6a_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc8))+rd(s->r,32,8)));
L_1800ffe6a_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1800ffe6a_3:;
wr(s->r,48,8,rd(s->u,16,8));
L_1800ffe6a_4:;
/* 1800ffe72: mov r15, qword ptr [rsp + 0x70] */
L_1800ffe72_0:;
L_1800ffe72_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1800ffe72_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffe72_3:;
wr(s->r,184,8,rd(s->u,16,8));
L_1800ffe72_4:;
/* 1800ffe77: mov rcx, qword ptr [rsp + 0x68] */
L_1800ffe77_0:;
L_1800ffe77_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1800ffe77_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffe77_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1800ffe77_4:;
/* 1800ffe7c: xor rcx, rsp */
L_1800ffe7c_0:;
L_1800ffe7c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffe7c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffe7c_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800ffe7c_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffe7c_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ffe7c_6:;
wr(s->u,24,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ffe7c_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1800ffe7c_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1800ffe7c_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1800ffe7c_10:;
/* 1800ffe7f: call 0x18000d680 */
L_1800ffe7f_0:;
L_1800ffe7f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffe7f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffe84)));
L_1800ffe7f_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800ffe7f_4:;
return UINT64_C(0x1800ffe84);
}
uint64_t b_1800ffe77(CPU*s){
/* 1800ffe77: mov rcx, qword ptr [rsp + 0x68] */
L_1800ffe77_0:;
L_1800ffe77_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1800ffe77_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffe77_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1800ffe77_4:;
/* 1800ffe7c: xor rcx, rsp */
L_1800ffe7c_0:;
L_1800ffe7c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffe7c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffe7c_3:;
wr(s->r,8,8,(rd(s->r,8,8)^rd(s->r,32,8)));
L_1800ffe7c_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffe7c_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1800ffe7c_6:;
wr(s->u,16,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1800ffe7c_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1800ffe7c_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1800ffe7c_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1800ffe7c_10:;
/* 1800ffe7f: call 0x18000d680 */
L_1800ffe7f_0:;
L_1800ffe7f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffe7f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffe84)));
L_1800ffe7f_3:;
return (uint64_t)UINT64_C(0x18000d680);
L_1800ffe7f_4:;
return UINT64_C(0x1800ffe84);
}
uint64_t b_1800ffe84(CPU*s){
/* 1800ffe84: add rsp, 0x88 */
L_1800ffe84_0:;
L_1800ffe84_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x88)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1800ffe84_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x88)),8,0));
L_1800ffe84_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x88))));
L_1800ffe84_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffe84_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800ffe84_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800ffe84_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1800ffe84_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1800ffe84_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1800ffe84_10:;
/* 1800ffe8b: pop r13 */
L_1800ffe8b_0:;
L_1800ffe8b_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ffe8b_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffe8b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffe8b_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1800ffe8b_5:;
/* 1800ffe8d: pop rdi */
L_1800ffe8d_0:;
L_1800ffe8d_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ffe8d_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffe8d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffe8d_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1800ffe8d_5:;
/* 1800ffe8e: pop rbp */
L_1800ffe8e_0:;
L_1800ffe8e_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ffe8e_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffe8e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffe8e_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1800ffe8e_5:;
/* 1800ffe8f: pop rbx */
L_1800ffe8f_0:;
L_1800ffe8f_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1800ffe8f_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffe8f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffe8f_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1800ffe8f_5:;
/* 1800ffe90: ret  */
L_1800ffe90_0:;
L_1800ffe90_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1800ffe90_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1800ffe90_3:;
return (uint64_t)rd(s->r,648,8);
L_1800ffe90_4:;
return UINT64_C(0x1800ffe91);
}
uint64_t b_1800ffe91(CPU*s){
/* 1800ffe91: mov ebx, 0x8007000e */
L_1800ffe91_0:;
L_1800ffe91_1:;
wr(s->r,24,8,((U)UINT64_C(0x8007000e)));
L_1800ffe91_2:;
/* 1800ffe96: jmp 0x1800ffea4 */
L_1800ffe96_0:;
L_1800ffe96_1:;
return UINT64_C(0x1800ffea4);
L_1800ffe96_2:;
return UINT64_C(0x1800ffe98);
}
uint64_t b_1800ffe98(CPU*s){
/* 1800ffe98: mov ebx, 0x8004e008 */
L_1800ffe98_0:;
L_1800ffe98_1:;
wr(s->r,24,8,((U)UINT64_C(0x8004e008)));
L_1800ffe98_2:;
/* 1800ffe9d: jmp 0x1800ffea4 */
L_1800ffe9d_0:;
L_1800ffe9d_1:;
return UINT64_C(0x1800ffea4);
L_1800ffe9d_2:;
return UINT64_C(0x1800ffe9f);
}
uint64_t b_1800ffe9f(CPU*s){
/* 1800ffe9f: mov ebx, 0x8004e008 */
L_1800ffe9f_0:;
L_1800ffe9f_1:;
wr(s->r,24,8,((U)UINT64_C(0x8004e008)));
L_1800ffe9f_2:;
/* 1800ffea4: mov rcx, r13 */
L_1800ffea4_0:;
L_1800ffea4_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1800ffea4_2:;
/* 1800ffea7: call 0x1802c7920 */
L_1800ffea7_0:;
L_1800ffea7_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffea7_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffeac)));
L_1800ffea7_3:;
return (uint64_t)UINT64_C(0x1802c7920);
L_1800ffea7_4:;
return UINT64_C(0x1800ffeac);
}
uint64_t b_1800ffea4(CPU*s){
/* 1800ffea4: mov rcx, r13 */
L_1800ffea4_0:;
L_1800ffea4_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1800ffea4_2:;
/* 1800ffea7: call 0x1802c7920 */
L_1800ffea7_0:;
L_1800ffea7_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffea7_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffeac)));
L_1800ffea7_3:;
return (uint64_t)UINT64_C(0x1802c7920);
L_1800ffea7_4:;
return UINT64_C(0x1800ffeac);
}
uint64_t b_1800ffeac(CPU*s){
/* 1800ffeac: mov r11, qword ptr [rsp + 0x48] */
L_1800ffeac_0:;
L_1800ffeac_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1800ffeac_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1800ffeac_3:;
wr(s->r,152,8,rd(s->u,16,8));
L_1800ffeac_4:;
/* 1800ffeb1: lea r8, [rsp + 0x44] */
L_1800ffeb1_0:;
L_1800ffeb1_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1800ffeb1_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1800ffeb1_3:;
/* 1800ffeb6: xor r9d, r9d */
L_1800ffeb6_0:;
L_1800ffeb6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffeb6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffeb6_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1800ffeb6_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1800ffeb6_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800ffeb6_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1800ffeb6_7:;
wr(s->u,24,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1800ffeb6_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1800ffeb6_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1800ffeb6_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1800ffeb6_11:;
/* 1800ffeb9: mov edx, r14d */
L_1800ffeb9_0:;
L_1800ffeb9_1:;
wr(s->r,16,4,rd(s->r,176,4));
L_1800ffeb9_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1800ffeb9_3:;
/* 1800ffebc: mov rcx, rbp */
L_1800ffebc_0:;
L_1800ffebc_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1800ffebc_2:;
/* 1800ffebf: mov qword ptr [rsp + 0x40], r11 */
L_1800ffebf_0:;
L_1800ffebf_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1800ffebf_2:;
wr(s->u,8,8,rd(s->r,152,8));
L_1800ffebf_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1800ffebf_4:;
/* 1800ffec4: call qword ptr [rip + 0x548a26] */
L_1800ffec4_0:;
L_1800ffec4_1:;
wr(s->u,30,8,mr(UINT64_C(0x1806488f0),8));
L_1800ffec4_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800ffec4_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800ffeca)));
L_1800ffec4_4:;
return (uint64_t)rd(s->u,30,8);
L_1800ffec4_5:;
return UINT64_C(0x1800ffeca);
}
uint64_t b_1800ffeca(CPU*s){
/* 1800ffeca: mov eax, ebx */
L_1800ffeca_0:;
L_1800ffeca_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1800ffeca_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1800ffeca_3:;
/* 1800ffecc: jmp 0x1800ffe5d */
L_1800ffecc_0:;
L_1800ffecc_1:;
return UINT64_C(0x1800ffe5d);
L_1800ffecc_2:;
return UINT64_C(0x1800ffece);
}
uint64_t b_1800fffd0(CPU*s){
/* 1800fffd0: push rbx */
L_1800fffd0_0:;
L_1800fffd0_1:;
wr(s->u,0,8,rd(s->r,24,8));
L_1800fffd0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800fffd0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1800fffd0_4:;
/* 1800fffd2: sub rsp, 0xc0 */
L_1800fffd2_0:;
L_1800fffd2_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0xc0))));
L_1800fffd2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0xc0)),8,1));
L_1800fffd2_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0xc0))));
L_1800fffd2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800fffd2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1800fffd2_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1800fffd2_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1800fffd2_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1800fffd2_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1800fffd2_10:;
/* 1800fffd9: mov edx, 0x1f58 */
L_1800fffd9_0:;
L_1800fffd9_1:;
wr(s->r,16,8,((U)UINT64_C(0x1f58)));
L_1800fffd9_2:;
/* 1800fffde: xor ecx, ecx */
L_1800fffde_0:;
L_1800fffde_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800fffde_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800fffde_3:;
wr(s->r,8,4,(rd(s->r,8,4)^rd(s->r,8,4)));
L_1800fffde_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1800fffde_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1800fffde_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1800fffde_7:;
wr(s->u,8,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1800fffde_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1800fffde_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1800fffde_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1800fffde_11:;
/* 1800fffe0: call qword ptr [rip + 0x548502] */
L_1800fffe0_0:;
L_1800fffe0_1:;
wr(s->u,18,8,mr(UINT64_C(0x1806484e8),8));
L_1800fffe0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800fffe0_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800fffe6)));
L_1800fffe0_4:;
return (uint64_t)rd(s->u,18,8);
L_1800fffe0_5:;
return UINT64_C(0x1800fffe6);
}
uint64_t b_1800fffe6(CPU*s){
/* 1800fffe6: mov rcx, rax */
L_1800fffe6_0:;
L_1800fffe6_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1800fffe6_2:;
/* 1800fffe9: call qword ptr [rip + 0x548501] */
L_1800fffe9_0:;
L_1800fffe9_1:;
wr(s->u,0,8,mr(UINT64_C(0x1806484f0),8));
L_1800fffe9_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1800fffe9_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1800fffef)));
L_1800fffe9_4:;
return (uint64_t)rd(s->u,0,8);
L_1800fffe9_5:;
return UINT64_C(0x1800fffef);
}
uint64_t b_1800fffef(CPU*s){
/* 1800fffef: mov rbx, rax */
L_1800fffef_0:;
L_1800fffef_1:;
wr(s->r,24,8,rd(s->r,0,8));
L_1800fffef_2:;
/* 1800ffff2: mov qword ptr [rip + 0x86d5cf], rax */
L_1800ffff2_0:;
L_1800ffff2_1:;
mw(UINT64_C(0x18096d5c8),8,rd(s->r,0,8));
L_1800ffff2_2:;
/* 1800ffff9: test rax, rax */
L_1800ffff9_0:;
L_1800ffff9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1800ffff9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1800ffff9_3:;
wr(s->u,11,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1800ffff9_4:;
wr(s->r,519,1,(sx(rd(s->u,11,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1800ffff9_5:;
wr(s->r,518,1,(rd(s->u,11,8)==((U)UINT64_C(0x0))));
L_1800ffff9_6:;
wr(s->u,1,8,(rd(s->u,11,8)&((U)UINT64_C(0xff))));
L_1800ffff9_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1800ffff9_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1800ffff9_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1800ffff9_10:;
/* 1800ffffc: jne 0x18010000c */
L_1800ffffc_0:;
L_1800ffffc_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1800ffffc_2:;
if(rd(s->u,0,1)){return UINT64_C(0x18010000c);}
L_1800ffffc_3:;
return UINT64_C(0x1800ffffe);
}
uint64_t b_1800ffffe(CPU*s){
/* 1800ffffe: mov eax, 0x8007000e */
L_1800ffffe_0:;
L_1800ffffe_1:;
wr(s->r,0,8,((U)UINT64_C(0x8007000e)));
L_1800ffffe_2:;
/* 180100003: add rsp, 0xc0 */
L_180100003_0:;
L_180100003_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0xc0)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_180100003_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0xc0)),8,0));
L_180100003_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0xc0))));
L_180100003_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_180100003_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_180100003_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_180100003_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_180100003_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_180100003_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_180100003_10:;
/* 18010000a: pop rbx */
L_18010000a_0:;
L_18010000a_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_18010000a_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_18010000a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_18010000a_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_18010000a_5:;
/* 18010000b: ret  */
L_18010000b_0:;
L_18010000b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_18010000b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_18010000b_3:;
return (uint64_t)rd(s->r,648,8);
L_18010000b_4:;
return UINT64_C(0x18010000c);
}
