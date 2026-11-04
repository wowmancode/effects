#include "lift_runtime.h"
uint64_t b_18000e0e4(CPU*s){
/* 18000e0e4: jmp qword ptr [rip + 0x63aa4e] */
L_18000e0e4_0:;
L_18000e0e4_1:;
return (uint64_t)mr(UINT64_C(0x180648b38),8);
L_18000e0e4_2:;
return UINT64_C(0x18000e0ea);
}
uint64_t b_18000e160(CPU*s){
/* 18000e160: mov qword ptr [rsp + 8], rbx */
L_18000e160_0:;
L_18000e160_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_18000e160_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_18000e160_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_18000e160_4:;
/* 18000e165: push rdi */
L_18000e165_0:;
L_18000e165_1:;
wr(s->u,40,8,rd(s->r,56,8));
L_18000e165_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18000e165_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,40,8));
L_18000e165_4:;
/* 18000e166: sub rsp, 0x40 */
L_18000e166_0:;
L_18000e166_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x40))));
L_18000e166_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,1));
L_18000e166_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x40))));
L_18000e166_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_18000e166_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_18000e166_6:;
wr(s->u,48,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_18000e166_7:;
wr(s->u,56,1,pop(rd(s->u,48,8),8));
L_18000e166_8:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_18000e166_9:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_18000e166_10:;
/* 18000e16a: xor edx, edx */
L_18000e16a_0:;
L_18000e16a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_18000e16a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_18000e16a_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_18000e16a_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_18000e16a_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_18000e16a_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_18000e16a_7:;
wr(s->u,48,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_18000e16a_8:;
wr(s->u,56,1,pop(rd(s->u,48,4),4));
L_18000e16a_9:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_18000e16a_10:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_18000e16a_11:;
/* 18000e16c: mov ebx, r8d */
L_18000e16c_0:;
L_18000e16c_1:;
wr(s->r,24,4,rd(s->r,128,4));
L_18000e16c_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_18000e16c_3:;
/* 18000e16f: movaps xmmword ptr [rsp + 0x30], xmm6 */
L_18000e16f_0:;
L_18000e16f_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_18000e16f_2:;
wr(s->u,24,16,rd(s->r,4992,16));
L_18000e16f_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,24,16));
L_18000e16f_4:;
/* 18000e174: lea r8d, [rdx + 0x40] */
L_18000e174_0:;
L_18000e174_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x40))));
L_18000e174_2:;
wr(s->r,128,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_18000e174_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_18000e174_4:;
/* 18000e178: movaps xmmword ptr [rsp + 0x20], xmm7 */
L_18000e178_0:;
L_18000e178_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_18000e178_2:;
wr(s->u,24,16,rd(s->r,5056,16));
L_18000e178_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,24,16));
L_18000e178_4:;
/* 18000e17d: movapd xmm6, xmm1 */
L_18000e17d_0:;
L_18000e17d_1:;
wr(s->r,4992,8,rd(s->r,4672,8));
L_18000e17d_2:;
wr(s->r,5000,8,rd(s->r,4680,8));
L_18000e17d_3:;
/* 18000e181: movapd xmm7, xmm3 */
L_18000e181_0:;
L_18000e181_1:;
wr(s->r,5056,8,rd(s->r,4800,8));
L_18000e181_2:;
wr(s->r,5064,8,rd(s->r,4808,8));
L_18000e181_3:;
/* 18000e185: mov rdi, rcx */
L_18000e185_0:;
L_18000e185_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_18000e185_2:;
/* 18000e188: call 0x18000d6a6 */
L_18000e188_0:;
L_18000e188_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18000e188_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x18000e18d)));
L_18000e188_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_18000e188_4:;
return UINT64_C(0x18000e18d);
}
uint64_t b_18000e18d(CPU*s){
/* 18000e18d: xor eax, eax */
L_18000e18d_0:;
L_18000e18d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_18000e18d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_18000e18d_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_18000e18d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_18000e18d_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_18000e18d_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_18000e18d_7:;
wr(s->u,22,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_18000e18d_8:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_18000e18d_9:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_18000e18d_10:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_18000e18d_11:;
/* 18000e18f: mov dword ptr [rdi], 0x40 */
L_18000e18f_0:;
L_18000e18f_1:;
wr(s->u,8,4,((U)UINT64_C(0x40)));
L_18000e18f_2:;
mw((uint64_t)rd(s->r,56,8),4,rd(s->u,8,4));
L_18000e18f_3:;
/* 18000e195: mov dword ptr [rdi + 4], 0xffffffff */
L_18000e195_0:;
L_18000e195_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x4))));
L_18000e195_2:;
wr(s->u,8,4,((U)UINT64_C(0xffffffff)));
L_18000e195_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_18000e195_4:;
/* 18000e19c: movsd qword ptr [rdi + 0x10], xmm6 */
L_18000e19c_0:;
L_18000e19c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_18000e19c_2:;
wr(s->u,12,8,rd(s->r,4992,8));
L_18000e19c_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_18000e19c_4:;
/* 18000e1a1: comisd xmm7, xmmword ptr [rip + 0x640dd7] */
L_18000e1a1_0:;
L_18000e1a1_1:;
wr(s->u,28,1,isnan(fv(rd(s->r,5056,8),8)));
L_18000e1a1_2:;
wr(s->u,29,1,isnan(fv(mr(UINT64_C(0x18064ef80),8),8)));
L_18000e1a1_3:;
wr(s->r,514,1,((rd(s->u,28,1)!=0)||(rd(s->u,29,1)!=0)));
L_18000e1a1_4:;
wr(s->u,30,1,(fv(rd(s->r,5056,8),8)==fv(mr(UINT64_C(0x18064ef80),8),8)));
L_18000e1a1_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,30,1)));
L_18000e1a1_6:;
wr(s->u,31,1,(fv(rd(s->r,5056,8),8)<fv(mr(UINT64_C(0x18064ef80),8),8)));
L_18000e1a1_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,31,1)));
L_18000e1a1_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_18000e1a1_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_18000e1a1_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_18000e1a1_11:;
/* 18000e1a9: mov dword ptr [rdi + 8], eax */
L_18000e1a9_0:;
L_18000e1a9_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_18000e1a9_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_18000e1a9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_18000e1a9_4:;
/* 18000e1ac: mov dword ptr [rdi + 0xc], ebx */
L_18000e1ac_0:;
L_18000e1ac_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xc))));
L_18000e1ac_2:;
wr(s->u,8,4,rd(s->r,24,4));
L_18000e1ac_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_18000e1ac_4:;
/* 18000e1af: ja 0x18000e1b9 */
L_18000e1af_0:;
L_18000e1af_1:;
wr(s->u,20,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_18000e1af_2:;
wr(s->u,21,1,(!rd(s->u,20,1)));
L_18000e1af_3:;
if(rd(s->u,21,1)){return UINT64_C(0x18000e1b9);}
L_18000e1af_4:;
return UINT64_C(0x18000e1b1);
}
uint64_t b_18000e1b1(CPU*s){
/* 18000e1b1: movsd xmm7, qword ptr [rip + 0x63e9bf] */
L_18000e1b1_0:;
L_18000e1b1_1:;
wr(s->r,5056,8,mr(UINT64_C(0x18064cb78),8));
L_18000e1b1_2:;
wr(s->r,5064,8,((U)UINT64_C(0x0)));
L_18000e1b1_3:;
/* 18000e1b9: mov rbx, qword ptr [rsp + 0x50] */
L_18000e1b9_0:;
L_18000e1b9_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_18000e1b9_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_18000e1b9_3:;
wr(s->r,24,8,rd(s->u,44,8));
L_18000e1b9_4:;
/* 18000e1be: movaps xmm6, xmmword ptr [rsp + 0x30] */
L_18000e1be_0:;
L_18000e1be_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_18000e1be_2:;
wr(s->u,28,16,mr((uint64_t)rd(s->u,8,8),16));
L_18000e1be_3:;
wr(s->u,70,16,rd(s->u,28,16));
L_18000e1be_4:;
wr(s->r,4992,4,rd(s->u,70,4));
L_18000e1be_5:;
wr(s->r,4996,4,rd(s->u,74,4));
L_18000e1be_6:;
wr(s->r,5000,4,rd(s->u,78,4));
L_18000e1be_7:;
wr(s->r,5004,4,rd(s->u,82,4));
L_18000e1be_8:;
/* 18000e1c3: movsd qword ptr [rdi + 0x18], xmm7 */
L_18000e1c3_0:;
L_18000e1c3_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_18000e1c3_2:;
wr(s->u,20,8,rd(s->r,5056,8));
L_18000e1c3_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_18000e1c3_4:;
/* 18000e1c8: movaps xmm7, xmmword ptr [rsp + 0x20] */
L_18000e1c8_0:;
L_18000e1c8_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_18000e1c8_2:;
wr(s->u,28,16,mr((uint64_t)rd(s->u,8,8),16));
L_18000e1c8_3:;
wr(s->u,70,16,rd(s->u,28,16));
L_18000e1c8_4:;
wr(s->r,5056,4,rd(s->u,70,4));
L_18000e1c8_5:;
wr(s->r,5060,4,rd(s->u,74,4));
L_18000e1c8_6:;
wr(s->r,5064,4,rd(s->u,78,4));
L_18000e1c8_7:;
wr(s->r,5068,4,rd(s->u,82,4));
L_18000e1c8_8:;
/* 18000e1cd: mov qword ptr [rdi + 0x20], rax */
L_18000e1cd_0:;
L_18000e1cd_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x20))));
L_18000e1cd_2:;
wr(s->u,20,8,rd(s->r,0,8));
L_18000e1cd_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_18000e1cd_4:;
/* 18000e1d1: mov dword ptr [rdi + 0x28], eax */
L_18000e1d1_0:;
L_18000e1d1_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x28))));
L_18000e1d1_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_18000e1d1_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_18000e1d1_4:;
/* 18000e1d4: mov dword ptr [rdi + 0x2c], eax */
L_18000e1d4_0:;
L_18000e1d4_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x2c))));
L_18000e1d4_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_18000e1d4_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_18000e1d4_4:;
/* 18000e1d7: mov qword ptr [rdi + 0x30], rax */
L_18000e1d7_0:;
L_18000e1d7_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_18000e1d7_2:;
wr(s->u,20,8,rd(s->r,0,8));
L_18000e1d7_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_18000e1d7_4:;
/* 18000e1db: mov qword ptr [rdi + 0x38], rax */
L_18000e1db_0:;
L_18000e1db_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_18000e1db_2:;
wr(s->u,20,8,rd(s->r,0,8));
L_18000e1db_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_18000e1db_4:;
/* 18000e1df: add rsp, 0x40 */
L_18000e1df_0:;
L_18000e1df_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_18000e1df_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_18000e1df_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_18000e1df_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_18000e1df_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_18000e1df_6:;
wr(s->u,52,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_18000e1df_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_18000e1df_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_18000e1df_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_18000e1df_10:;
/* 18000e1e3: pop rdi */
L_18000e1e3_0:;
L_18000e1e3_1:;
wr(s->u,62,8,((U)UINT64_C(0x0)));
L_18000e1e3_2:;
wr(s->u,62,8,mr((uint64_t)rd(s->r,32,8),8));
L_18000e1e3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_18000e1e3_4:;
wr(s->r,56,8,rd(s->u,62,8));
L_18000e1e3_5:;
/* 18000e1e4: ret  */
L_18000e1e4_0:;
L_18000e1e4_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_18000e1e4_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_18000e1e4_3:;
return (uint64_t)rd(s->r,648,8);
L_18000e1e4_4:;
return UINT64_C(0x18000e1e5);
}
uint64_t b_18000e1b9(CPU*s){
/* 18000e1b9: mov rbx, qword ptr [rsp + 0x50] */
L_18000e1b9_0:;
L_18000e1b9_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_18000e1b9_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_18000e1b9_3:;
wr(s->r,24,8,rd(s->u,44,8));
L_18000e1b9_4:;
/* 18000e1be: movaps xmm6, xmmword ptr [rsp + 0x30] */
L_18000e1be_0:;
L_18000e1be_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_18000e1be_2:;
wr(s->u,28,16,mr((uint64_t)rd(s->u,8,8),16));
L_18000e1be_3:;
wr(s->u,70,16,rd(s->u,28,16));
L_18000e1be_4:;
wr(s->r,4992,4,rd(s->u,70,4));
L_18000e1be_5:;
wr(s->r,4996,4,rd(s->u,74,4));
L_18000e1be_6:;
wr(s->r,5000,4,rd(s->u,78,4));
L_18000e1be_7:;
wr(s->r,5004,4,rd(s->u,82,4));
L_18000e1be_8:;
/* 18000e1c3: movsd qword ptr [rdi + 0x18], xmm7 */
L_18000e1c3_0:;
L_18000e1c3_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_18000e1c3_2:;
wr(s->u,20,8,rd(s->r,5056,8));
L_18000e1c3_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_18000e1c3_4:;
/* 18000e1c8: movaps xmm7, xmmword ptr [rsp + 0x20] */
L_18000e1c8_0:;
L_18000e1c8_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_18000e1c8_2:;
wr(s->u,28,16,mr((uint64_t)rd(s->u,8,8),16));
L_18000e1c8_3:;
wr(s->u,70,16,rd(s->u,28,16));
L_18000e1c8_4:;
wr(s->r,5056,4,rd(s->u,70,4));
L_18000e1c8_5:;
wr(s->r,5060,4,rd(s->u,74,4));
L_18000e1c8_6:;
wr(s->r,5064,4,rd(s->u,78,4));
L_18000e1c8_7:;
wr(s->r,5068,4,rd(s->u,82,4));
L_18000e1c8_8:;
/* 18000e1cd: mov qword ptr [rdi + 0x20], rax */
L_18000e1cd_0:;
L_18000e1cd_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x20))));
L_18000e1cd_2:;
wr(s->u,20,8,rd(s->r,0,8));
L_18000e1cd_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_18000e1cd_4:;
/* 18000e1d1: mov dword ptr [rdi + 0x28], eax */
L_18000e1d1_0:;
L_18000e1d1_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x28))));
L_18000e1d1_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_18000e1d1_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_18000e1d1_4:;
/* 18000e1d4: mov dword ptr [rdi + 0x2c], eax */
L_18000e1d4_0:;
L_18000e1d4_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x2c))));
L_18000e1d4_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_18000e1d4_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_18000e1d4_4:;
/* 18000e1d7: mov qword ptr [rdi + 0x30], rax */
L_18000e1d7_0:;
L_18000e1d7_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_18000e1d7_2:;
wr(s->u,20,8,rd(s->r,0,8));
L_18000e1d7_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_18000e1d7_4:;
/* 18000e1db: mov qword ptr [rdi + 0x38], rax */
L_18000e1db_0:;
L_18000e1db_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_18000e1db_2:;
wr(s->u,20,8,rd(s->r,0,8));
L_18000e1db_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_18000e1db_4:;
/* 18000e1df: add rsp, 0x40 */
L_18000e1df_0:;
L_18000e1df_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_18000e1df_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_18000e1df_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_18000e1df_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_18000e1df_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_18000e1df_6:;
wr(s->u,52,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_18000e1df_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_18000e1df_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_18000e1df_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_18000e1df_10:;
/* 18000e1e3: pop rdi */
L_18000e1e3_0:;
L_18000e1e3_1:;
wr(s->u,62,8,((U)UINT64_C(0x0)));
L_18000e1e3_2:;
wr(s->u,62,8,mr((uint64_t)rd(s->r,32,8),8));
L_18000e1e3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_18000e1e3_4:;
wr(s->r,56,8,rd(s->u,62,8));
L_18000e1e3_5:;
/* 18000e1e4: ret  */
L_18000e1e4_0:;
L_18000e1e4_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_18000e1e4_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_18000e1e4_3:;
return (uint64_t)rd(s->r,648,8);
L_18000e1e4_4:;
return UINT64_C(0x18000e1e5);
}
