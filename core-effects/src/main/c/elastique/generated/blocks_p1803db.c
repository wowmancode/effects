#include "lift_runtime.h"
uint64_t b_1803db080(CPU*s){
/* 1803db080: push rbx */
L_1803db080_0:;
L_1803db080_1:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803db080_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db080_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,8,8));
L_1803db080_4:;
/* 1803db082: sub rsp, 0x20 */
L_1803db082_0:;
L_1803db082_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803db082_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803db082_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803db082_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db082_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803db082_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803db082_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803db082_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803db082_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803db082_10:;
/* 1803db086: lea rax, [rip + 0x43161b] */
L_1803db086_0:;
L_1803db086_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080c6a8)));
L_1803db086_2:;
/* 1803db08d: mov rbx, rcx */
L_1803db08d_0:;
L_1803db08d_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803db08d_2:;
/* 1803db090: mov qword ptr [rcx], rax */
L_1803db090_0:;
L_1803db090_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803db090_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,0,8));
L_1803db090_3:;
/* 1803db093: test dl, 1 */
L_1803db093_0:;
L_1803db093_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db093_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db093_3:;
wr(s->u,26,1,(rd(s->r,16,1)&((U)UINT64_C(0x1))));
L_1803db093_4:;
wr(s->r,519,1,(sx(rd(s->u,26,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803db093_5:;
wr(s->r,518,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803db093_6:;
wr(s->u,16,1,(rd(s->u,26,1)&((U)UINT64_C(0xff))));
L_1803db093_7:;
wr(s->u,24,1,pop(rd(s->u,16,1),1));
L_1803db093_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803db093_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803db093_10:;
/* 1803db096: je 0x1803db09d */
L_1803db096_0:;
L_1803db096_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803db09d);}
L_1803db096_2:;
return UINT64_C(0x1803db098);
}
uint64_t b_1803db098(CPU*s){
/* 1803db098: call 0x180003160 */
L_1803db098_0:;
L_1803db098_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db098_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db09d)));
L_1803db098_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803db098_4:;
return UINT64_C(0x1803db09d);
}
uint64_t b_1803db09d(CPU*s){
/* 1803db09d: mov rax, rbx */
L_1803db09d_0:;
L_1803db09d_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803db09d_2:;
/* 1803db0a0: add rsp, 0x20 */
L_1803db0a0_0:;
L_1803db0a0_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803db0a0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803db0a0_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803db0a0_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db0a0_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803db0a0_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803db0a0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803db0a0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803db0a0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803db0a0_10:;
/* 1803db0a4: pop rbx */
L_1803db0a4_0:;
L_1803db0a4_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803db0a4_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db0a4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db0a4_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803db0a4_5:;
/* 1803db0a5: ret  */
L_1803db0a5_0:;
L_1803db0a5_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db0a5_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db0a5_3:;
return (uint64_t)rd(s->r,648,8);
L_1803db0a5_4:;
return UINT64_C(0x1803db0a6);
}
uint64_t b_1803db0c0(CPU*s){
/* 1803db0c0: mov qword ptr [rsp + 8], rcx */
L_1803db0c0_0:;
L_1803db0c0_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803db0c0_2:;
wr(s->u,24,8,rd(s->r,8,8));
L_1803db0c0_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803db0c0_4:;
/* 1803db0c5: push rdi */
L_1803db0c5_0:;
L_1803db0c5_1:;
wr(s->u,40,8,rd(s->r,56,8));
L_1803db0c5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db0c5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,40,8));
L_1803db0c5_4:;
/* 1803db0c6: sub rsp, 0x30 */
L_1803db0c6_0:;
L_1803db0c6_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803db0c6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803db0c6_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803db0c6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db0c6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803db0c6_6:;
wr(s->u,48,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803db0c6_7:;
wr(s->u,56,1,pop(rd(s->u,48,8),8));
L_1803db0c6_8:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803db0c6_9:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803db0c6_10:;
/* 1803db0ca: mov qword ptr [rsp + 0x20], 0xfffffffffffffffe */
L_1803db0ca_0:;
L_1803db0ca_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803db0ca_2:;
wr(s->u,24,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803db0ca_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803db0ca_4:;
/* 1803db0d3: mov qword ptr [rsp + 0x48], rbx */
L_1803db0d3_0:;
L_1803db0d3_1:;
wr(s->u,16,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803db0d3_2:;
wr(s->u,24,8,rd(s->r,24,8));
L_1803db0d3_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803db0d3_4:;
/* 1803db0d8: mov qword ptr [rsp + 0x50], rbp */
L_1803db0d8_0:;
L_1803db0d8_1:;
wr(s->u,16,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803db0d8_2:;
wr(s->u,24,8,rd(s->r,40,8));
L_1803db0d8_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803db0d8_4:;
/* 1803db0dd: mov qword ptr [rsp + 0x58], rsi */
L_1803db0dd_0:;
L_1803db0dd_1:;
wr(s->u,16,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803db0dd_2:;
wr(s->u,24,8,rd(s->r,48,8));
L_1803db0dd_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803db0dd_4:;
/* 1803db0e2: mov rdi, rcx */
L_1803db0e2_0:;
L_1803db0e2_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803db0e2_2:;
/* 1803db0e5: lea rax, [rip + 0x43170c] */
L_1803db0e5_0:;
L_1803db0e5_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080c7f8)));
L_1803db0e5_2:;
/* 1803db0ec: mov qword ptr [rcx], rax */
L_1803db0ec_0:;
L_1803db0ec_1:;
wr(s->u,24,8,rd(s->r,0,8));
L_1803db0ec_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,24,8));
L_1803db0ec_3:;
/* 1803db0ef: lea rax, [rip + 0x431682] */
L_1803db0ef_0:;
L_1803db0ef_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080c778)));
L_1803db0ef_2:;
/* 1803db0f6: mov qword ptr [rcx + 8], rax */
L_1803db0f6_0:;
L_1803db0f6_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803db0f6_2:;
wr(s->u,24,8,rd(s->r,0,8));
L_1803db0f6_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,24,8));
L_1803db0f6_4:;
/* 1803db0fa: mov rcx, qword ptr [rcx + 0x66f0] */
L_1803db0fa_0:;
L_1803db0fa_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x66f0))));
L_1803db0fa_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db0fa_3:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803db0fa_4:;
/* 1803db101: test rcx, rcx */
L_1803db101_0:;
L_1803db101_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db101_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db101_3:;
wr(s->u,58,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803db101_4:;
wr(s->r,519,1,(sx(rd(s->u,58,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db101_5:;
wr(s->r,518,1,(rd(s->u,58,8)==((U)UINT64_C(0x0))));
L_1803db101_6:;
wr(s->u,48,8,(rd(s->u,58,8)&((U)UINT64_C(0xff))));
L_1803db101_7:;
wr(s->u,56,1,pop(rd(s->u,48,8),8));
L_1803db101_8:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803db101_9:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803db101_10:;
/* 1803db104: je 0x1803db110 */
L_1803db104_0:;
L_1803db104_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803db110);}
L_1803db104_2:;
return UINT64_C(0x1803db106);
}
uint64_t b_1803db106(CPU*s){
/* 1803db106: mov rax, qword ptr [rcx] */
L_1803db106_0:;
L_1803db106_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803db106_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803db106_3:;
/* 1803db109: mov edx, 1 */
L_1803db109_0:;
L_1803db109_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803db109_2:;
/* 1803db10e: call qword ptr [rax] */
L_1803db10e_0:;
L_1803db10e_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803db10e_2:;
wr(s->u,8,8,rd(s->u,0,8));
L_1803db10e_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db10e_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db110)));
L_1803db10e_5:;
return (uint64_t)rd(s->u,8,8);
L_1803db10e_6:;
return UINT64_C(0x1803db110);
}
uint64_t b_1803db110(CPU*s){
/* 1803db110: mov rcx, qword ptr [rdi + 0x66f8] */
L_1803db110_0:;
L_1803db110_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f8))));
L_1803db110_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db110_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803db110_4:;
/* 1803db117: call 0x1803ddad0 */
L_1803db117_0:;
L_1803db117_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db117_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db11c)));
L_1803db117_3:;
return (uint64_t)UINT64_C(0x1803ddad0);
L_1803db117_4:;
return UINT64_C(0x1803db11c);
}
uint64_t b_1803db11c(CPU*s){
/* 1803db11c: mov rcx, qword ptr [rdi + 0x6700] */
L_1803db11c_0:;
L_1803db11c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x6700))));
L_1803db11c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db11c_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803db11c_4:;
/* 1803db123: call 0x1803dda60 */
L_1803db123_0:;
L_1803db123_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db123_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db128)));
L_1803db123_3:;
return (uint64_t)UINT64_C(0x1803dda60);
L_1803db123_4:;
return UINT64_C(0x1803db128);
}
uint64_t b_1803db128(CPU*s){
/* 1803db128: mov rcx, qword ptr [rdi + 0x6708] */
L_1803db128_0:;
L_1803db128_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x6708))));
L_1803db128_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db128_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803db128_4:;
/* 1803db12f: call 0x1803dd910 */
L_1803db12f_0:;
L_1803db12f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db12f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db134)));
L_1803db12f_3:;
return (uint64_t)UINT64_C(0x1803dd910);
L_1803db12f_4:;
return UINT64_C(0x1803db134);
}
uint64_t b_1803db134(CPU*s){
/* 1803db134: lea rcx, [rdi + 0x6718] */
L_1803db134_0:;
L_1803db134_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x6718))));
L_1803db134_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803db134_3:;
/* 1803db13b: call 0x1803e1ca0 */
L_1803db13b_0:;
L_1803db13b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db13b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db140)));
L_1803db13b_3:;
return (uint64_t)UINT64_C(0x1803e1ca0);
L_1803db13b_4:;
return UINT64_C(0x1803db140);
}
uint64_t b_1803db140(CPU*s){
/* 1803db140: lea rcx, [rdi + 0x6710] */
L_1803db140_0:;
L_1803db140_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x6710))));
L_1803db140_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803db140_3:;
/* 1803db147: call 0x1803e1b20 */
L_1803db147_0:;
L_1803db147_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db147_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db14c)));
L_1803db147_3:;
return (uint64_t)UINT64_C(0x1803e1b20);
L_1803db147_4:;
return UINT64_C(0x1803db14c);
}
uint64_t b_1803db14c(CPU*s){
/* 1803db14c: xor ebp, ebp */
L_1803db14c_0:;
L_1803db14c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db14c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db14c_3:;
wr(s->r,40,4,(rd(s->r,40,4)^rd(s->r,40,4)));
L_1803db14c_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803db14c_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db14c_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803db14c_7:;
wr(s->u,14,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803db14c_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803db14c_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803db14c_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803db14c_11:;
/* 1803db14e: cmp dword ptr [rdi + 0x30], ebp */
L_1803db14e_0:;
L_1803db14e_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803db14e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db14e_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803db14e_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,40,4)));
L_1803db14e_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,40,4),4,1));
L_1803db14e_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,40,4)));
L_1803db14e_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db14e_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803db14e_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803db14e_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803db14e_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803db14e_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803db14e_13:;
/* 1803db151: jle 0x1803db1b7 */
L_1803db151_0:;
L_1803db151_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db151_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803db151_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803db1b7);}
L_1803db151_4:;
return UINT64_C(0x1803db153);
}
uint64_t b_1803db153(CPU*s){
/* 1803db153: lea rsi, [rdi + 0x3f0] */
L_1803db153_0:;
L_1803db153_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3f0))));
L_1803db153_2:;
wr(s->r,48,8,rd(s->u,0,8));
L_1803db153_3:;
/* 1803db15a: nop word ptr [rax + rax] */
L_1803db15a_0:;
L_1803db15a_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803db15a_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803db15a_3:;
/* 1803db160: movsxd rbx, ebp */
L_1803db160_0:;
L_1803db160_1:;
wr(s->r,24,8,(U)sx(rd(s->r,40,4),4));
L_1803db160_2:;
/* 1803db163: lea rcx, [rdi + rbx*8 + 0xf0] */
L_1803db163_0:;
L_1803db163_1:;
wr(s->u,24,8,(((U)UINT64_C(0xf0))+rd(s->r,56,8)));
L_1803db163_2:;
wr(s->u,32,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803db163_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803db163_4:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803db163_5:;
/* 1803db16b: call qword ptr [rip + 0x642fef] */
L_1803db16b_0:;
L_1803db16b_1:;
wr(s->u,48,8,mr(UINT64_C(0x180a1e160),8));
L_1803db16b_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db16b_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db171)));
L_1803db16b_4:;
return (uint64_t)rd(s->u,48,8);
L_1803db16b_5:;
return UINT64_C(0x1803db171);
}
uint64_t b_1803db160(CPU*s){
/* 1803db160: movsxd rbx, ebp */
L_1803db160_0:;
L_1803db160_1:;
wr(s->r,24,8,(U)sx(rd(s->r,40,4),4));
L_1803db160_2:;
/* 1803db163: lea rcx, [rdi + rbx*8 + 0xf0] */
L_1803db163_0:;
L_1803db163_1:;
wr(s->u,0,8,(((U)UINT64_C(0xf0))+rd(s->r,56,8)));
L_1803db163_2:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803db163_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803db163_4:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803db163_5:;
/* 1803db16b: call qword ptr [rip + 0x642fef] */
L_1803db16b_0:;
L_1803db16b_1:;
wr(s->u,24,8,mr(UINT64_C(0x180a1e160),8));
L_1803db16b_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db16b_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db171)));
L_1803db16b_4:;
return (uint64_t)rd(s->u,24,8);
L_1803db16b_5:;
return UINT64_C(0x1803db171);
}
uint64_t b_1803db171(CPU*s){
/* 1803db171: lea rcx, [rdi + rbx*8 + 0x270] */
L_1803db171_0:;
L_1803db171_1:;
wr(s->u,0,8,(((U)UINT64_C(0x270))+rd(s->r,56,8)));
L_1803db171_2:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803db171_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803db171_4:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803db171_5:;
/* 1803db179: call qword ptr [rip + 0x642fe1] */
L_1803db179_0:;
L_1803db179_1:;
wr(s->u,24,8,mr(UINT64_C(0x180a1e160),8));
L_1803db179_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db179_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db17f)));
L_1803db179_4:;
return (uint64_t)rd(s->u,24,8);
L_1803db179_5:;
return UINT64_C(0x1803db17f);
}
uint64_t b_1803db17f(CPU*s){
/* 1803db17f: movsxd r11, dword ptr [rdi + 0x38] */
L_1803db17f_0:;
L_1803db17f_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_1803db17f_2:;
wr(s->u,45,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803db17f_3:;
wr(s->r,152,8,(U)sx(rd(s->u,45,4),4));
L_1803db17f_4:;
/* 1803db183: sar r11, 1 */
L_1803db183_0:;
L_1803db183_1:;
wr(s->u,107,8,(rd(s->r,152,8)&((U)UINT64_C(0x1))));
L_1803db183_2:;
wr(s->r,512,1,(rd(s->u,107,8)!=((U)UINT64_C(0x0))));
L_1803db183_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db183_4:;
wr(s->r,152,8,((((U)UINT64_C(0x1))>=64)?(sx(rd(s->r,152,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,152,8),8)>>((U)UINT64_C(0x1)))));
L_1803db183_5:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db183_6:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803db183_7:;
wr(s->u,49,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803db183_8:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803db183_9:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803db183_10:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803db183_11:;
/* 1803db186: neg r11 */
L_1803db186_0:;
L_1803db186_1:;
wr(s->r,512,1,(rd(s->r,152,8)!=((U)UINT64_C(0x0))));
L_1803db186_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,152,8),8,1));
L_1803db186_3:;
wr(s->r,152,8,(-rd(s->r,152,8)));
L_1803db186_4:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db186_5:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803db186_6:;
wr(s->u,49,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803db186_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803db186_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803db186_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803db186_10:;
/* 1803db189: shl r11, 2 */
L_1803db189_0:;
L_1803db189_1:;
wr(s->u,115,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803db189_2:;
wr(s->u,119,8,rd(s->r,152,8));
L_1803db189_3:;
wr(s->r,152,8,((rd(s->u,115,4)>=64)?0:(rd(s->r,152,8)<<rd(s->u,115,4))));
L_1803db189_4:;
wr(s->u,82,1,(rd(s->u,115,4)==((U)UINT64_C(0x0))));
L_1803db189_5:;
wr(s->u,83,4,(rd(s->u,115,4)-((U)UINT64_C(0x1))));
L_1803db189_6:;
wr(s->u,87,8,((rd(s->u,83,4)>=64)?0:(rd(s->u,119,8)<<rd(s->u,83,4))));
L_1803db189_7:;
wr(s->u,95,1,(sx(rd(s->u,87,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db189_8:;
wr(s->u,0,1,rd(s->u,82,1));
L_1803db189_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803db189_10:;
wr(s->u,2,1,(!rd(s->u,82,1)));
L_1803db189_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803db189_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,95,1)));
L_1803db189_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803db189_14:;
wr(s->u,96,1,(rd(s->u,115,4)==((U)UINT64_C(0x1))));
L_1803db189_15:;
wr(s->u,97,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db189_16:;
wr(s->u,98,1,(rd(s->r,512,1)^rd(s->u,97,1)));
L_1803db189_17:;
wr(s->u,0,1,rd(s->u,96,1));
L_1803db189_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,98,1)));
L_1803db189_19:;
wr(s->u,2,1,(!rd(s->u,96,1)));
L_1803db189_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803db189_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803db189_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803db189_23:;
wr(s->u,59,1,(rd(s->u,115,4)!=((U)UINT64_C(0x0))));
L_1803db189_24:;
wr(s->u,60,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db189_25:;
wr(s->u,61,1,(!rd(s->u,59,1)));
L_1803db189_26:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,519,1)));
L_1803db189_27:;
wr(s->u,63,1,(rd(s->u,59,1)&rd(s->u,60,1)));
L_1803db189_28:;
wr(s->r,519,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803db189_29:;
wr(s->u,64,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803db189_30:;
wr(s->u,65,1,(!rd(s->u,59,1)));
L_1803db189_31:;
wr(s->u,66,1,(rd(s->u,65,1)&rd(s->r,518,1)));
L_1803db189_32:;
wr(s->u,67,1,(rd(s->u,59,1)&rd(s->u,64,1)));
L_1803db189_33:;
wr(s->r,518,1,(rd(s->u,66,1)|rd(s->u,67,1)));
L_1803db189_34:;
wr(s->u,68,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803db189_35:;
wr(s->u,76,1,pop(rd(s->u,68,8),8));
L_1803db189_36:;
wr(s->u,77,1,(rd(s->u,76,1)&((U)UINT64_C(0x1))));
L_1803db189_37:;
wr(s->u,78,1,(rd(s->u,77,1)==((U)UINT64_C(0x0))));
L_1803db189_38:;
wr(s->u,79,1,(!rd(s->u,59,1)));
L_1803db189_39:;
wr(s->u,80,1,(rd(s->u,79,1)&rd(s->r,514,1)));
L_1803db189_40:;
wr(s->u,81,1,(rd(s->u,59,1)&rd(s->u,78,1)));
L_1803db189_41:;
wr(s->r,514,1,(rd(s->u,80,1)|rd(s->u,81,1)));
L_1803db189_42:;
/* 1803db18d: add qword ptr [rsi], r11 */
L_1803db18d_0:;
L_1803db18d_1:;
wr(s->u,37,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803db18d_2:;
wr(s->r,512,1,(((rd(s->u,37,8)+rd(s->r,152,8))&(((U)1<<64)-1))<rd(s->u,37,8)));
L_1803db18d_3:;
wr(s->u,37,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803db18d_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,37,8),rd(s->r,152,8),8,0));
L_1803db18d_5:;
wr(s->u,37,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803db18d_6:;
wr(s->u,37,8,(rd(s->u,37,8)+rd(s->r,152,8)));
L_1803db18d_7:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,37,8));
L_1803db18d_8:;
wr(s->u,37,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803db18d_9:;
wr(s->r,519,1,(sx(rd(s->u,37,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db18d_10:;
wr(s->u,37,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803db18d_11:;
wr(s->r,518,1,(rd(s->u,37,8)==((U)UINT64_C(0x0))));
L_1803db18d_12:;
wr(s->u,37,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803db18d_13:;
wr(s->u,49,8,(rd(s->u,37,8)&((U)UINT64_C(0xff))));
L_1803db18d_14:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803db18d_15:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803db18d_16:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803db18d_17:;
/* 1803db190: lea rcx, [rdi + rbx*8 + 0x3f0] */
L_1803db190_0:;
L_1803db190_1:;
wr(s->u,13,8,(((U)UINT64_C(0x3f0))+rd(s->r,56,8)));
L_1803db190_2:;
wr(s->u,21,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803db190_3:;
wr(s->u,29,8,(rd(s->u,13,8)+rd(s->u,21,8)));
L_1803db190_4:;
wr(s->r,8,8,rd(s->u,29,8));
L_1803db190_5:;
/* 1803db198: call qword ptr [rip + 0x642fc2] */
L_1803db198_0:;
L_1803db198_1:;
wr(s->u,99,8,mr(UINT64_C(0x180a1e160),8));
L_1803db198_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db198_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db19e)));
L_1803db198_4:;
return (uint64_t)rd(s->u,99,8);
L_1803db198_5:;
return UINT64_C(0x1803db19e);
}
uint64_t b_1803db19e(CPU*s){
/* 1803db19e: lea rcx, [rdi + rbx*8 + 0x570] */
L_1803db19e_0:;
L_1803db19e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x570))+rd(s->r,56,8)));
L_1803db19e_2:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803db19e_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803db19e_4:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803db19e_5:;
/* 1803db1a6: call qword ptr [rip + 0x642fb4] */
L_1803db1a6_0:;
L_1803db1a6_1:;
wr(s->u,24,8,mr(UINT64_C(0x180a1e160),8));
L_1803db1a6_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db1a6_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db1ac)));
L_1803db1a6_4:;
return (uint64_t)rd(s->u,24,8);
L_1803db1a6_5:;
return UINT64_C(0x1803db1ac);
}
uint64_t b_1803db1ac(CPU*s){
/* 1803db1ac: inc ebp */
L_1803db1ac_0:;
L_1803db1ac_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),((U)UINT64_C(0x1)),4,0));
L_1803db1ac_2:;
wr(s->r,40,4,(rd(s->r,40,4)+((U)UINT64_C(0x1))));
L_1803db1ac_3:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803db1ac_4:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db1ac_5:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803db1ac_6:;
wr(s->u,13,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803db1ac_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803db1ac_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803db1ac_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803db1ac_10:;
/* 1803db1ae: add rsi, 8 */
L_1803db1ae_0:;
L_1803db1ae_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803db1ae_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x8)),8,0));
L_1803db1ae_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x8))));
L_1803db1ae_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db1ae_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803db1ae_6:;
wr(s->u,13,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803db1ae_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803db1ae_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803db1ae_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803db1ae_10:;
/* 1803db1b2: cmp ebp, dword ptr [rdi + 0x30] */
L_1803db1b2_0:;
L_1803db1b2_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803db1b2_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db1b2_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803db1b2_4:;
wr(s->r,512,1,(rd(s->r,40,4)<rd(s->u,23,4)));
L_1803db1b2_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->u,23,4),4,1));
L_1803db1b2_6:;
wr(s->u,27,4,(rd(s->r,40,4)-rd(s->u,23,4)));
L_1803db1b2_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db1b2_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803db1b2_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803db1b2_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803db1b2_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803db1b2_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803db1b2_13:;
/* 1803db1b5: jl 0x1803db160 */
L_1803db1b5_0:;
L_1803db1b5_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db1b5_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803db160);}
L_1803db1b5_3:;
return UINT64_C(0x1803db1b7);
}
uint64_t b_1803db1b7(CPU*s){
/* 1803db1b7: lea rcx, [rdi + 0xe0] */
L_1803db1b7_0:;
L_1803db1b7_1:;
wr(s->u,13,8,(rd(s->r,56,8)+((U)UINT64_C(0xe0))));
L_1803db1b7_2:;
wr(s->r,8,8,rd(s->u,13,8));
L_1803db1b7_3:;
/* 1803db1be: mov eax, dword ptr [rdi + 0x3c] */
L_1803db1be_0:;
L_1803db1be_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c))));
L_1803db1be_2:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803db1be_3:;
wr(s->r,0,4,rd(s->u,29,4));
L_1803db1be_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db1be_5:;
/* 1803db1c1: sar eax, 1 */
L_1803db1c1_0:;
L_1803db1c1_1:;
wr(s->u,127,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803db1c1_2:;
wr(s->r,512,1,(rd(s->u,127,4)!=((U)UINT64_C(0x0))));
L_1803db1c1_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db1c1_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803db1c1_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db1c1_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db1c1_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803db1c1_8:;
wr(s->u,33,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803db1c1_9:;
wr(s->u,41,1,pop(rd(s->u,33,4),4));
L_1803db1c1_10:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803db1c1_11:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803db1c1_12:;
/* 1803db1c3: imul eax, dword ptr [rdi + 0x30] */
L_1803db1c3_0:;
L_1803db1c3_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803db1c3_2:;
wr(s->u,99,8,(U)sx(rd(s->r,0,4),4));
L_1803db1c3_3:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803db1c3_4:;
wr(s->u,107,8,(U)sx(rd(s->u,29,4),4));
L_1803db1c3_5:;
wr(s->u,115,8,(rd(s->u,99,8)*rd(s->u,107,8)));
L_1803db1c3_6:;
wr(s->r,0,4,(rd(s->u,115,8) >> (((U)UINT64_C(0x0))*8)));
L_1803db1c3_7:;
wr(s->u,123,4,(rd(s->u,115,8) >> (((U)UINT64_C(0x4))*8)));
L_1803db1c3_8:;
wr(s->u,66,8,(U)sx(rd(s->r,0,4),4));
L_1803db1c3_9:;
wr(s->r,512,1,(rd(s->u,66,8)!=rd(s->u,115,8)));
L_1803db1c3_10:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803db1c3_11:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db1c3_12:;
/* 1803db1c7: movsxd rdx, eax */
L_1803db1c7_0:;
L_1803db1c7_1:;
wr(s->r,16,8,(U)sx(rd(s->r,0,4),4));
L_1803db1c7_2:;
/* 1803db1ca: neg rdx */
L_1803db1ca_0:;
L_1803db1ca_1:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803db1ca_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,16,8),8,1));
L_1803db1ca_3:;
wr(s->r,16,8,(-rd(s->r,16,8)));
L_1803db1ca_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db1ca_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803db1ca_6:;
wr(s->u,33,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803db1ca_7:;
wr(s->u,41,1,pop(rd(s->u,33,8),8));
L_1803db1ca_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803db1ca_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803db1ca_10:;
/* 1803db1cd: shl rdx, 2 */
L_1803db1cd_0:;
L_1803db1cd_1:;
wr(s->u,131,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803db1cd_2:;
wr(s->u,135,8,rd(s->r,16,8));
L_1803db1cd_3:;
wr(s->r,16,8,((rd(s->u,131,4)>=64)?0:(rd(s->r,16,8)<<rd(s->u,131,4))));
L_1803db1cd_4:;
wr(s->u,74,1,(rd(s->u,131,4)==((U)UINT64_C(0x0))));
L_1803db1cd_5:;
wr(s->u,75,4,(rd(s->u,131,4)-((U)UINT64_C(0x1))));
L_1803db1cd_6:;
wr(s->u,79,8,((rd(s->u,75,4)>=64)?0:(rd(s->u,135,8)<<rd(s->u,75,4))));
L_1803db1cd_7:;
wr(s->u,87,1,(sx(rd(s->u,79,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db1cd_8:;
wr(s->u,0,1,rd(s->u,74,1));
L_1803db1cd_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803db1cd_10:;
wr(s->u,2,1,(!rd(s->u,74,1)));
L_1803db1cd_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803db1cd_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,87,1)));
L_1803db1cd_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803db1cd_14:;
wr(s->u,88,1,(rd(s->u,131,4)==((U)UINT64_C(0x1))));
L_1803db1cd_15:;
wr(s->u,89,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db1cd_16:;
wr(s->u,90,1,(rd(s->r,512,1)^rd(s->u,89,1)));
L_1803db1cd_17:;
wr(s->u,0,1,rd(s->u,88,1));
L_1803db1cd_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,90,1)));
L_1803db1cd_19:;
wr(s->u,2,1,(!rd(s->u,88,1)));
L_1803db1cd_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803db1cd_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803db1cd_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803db1cd_23:;
wr(s->u,43,1,(rd(s->u,131,4)!=((U)UINT64_C(0x0))));
L_1803db1cd_24:;
wr(s->u,44,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db1cd_25:;
wr(s->u,45,1,(!rd(s->u,43,1)));
L_1803db1cd_26:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,519,1)));
L_1803db1cd_27:;
wr(s->u,47,1,(rd(s->u,43,1)&rd(s->u,44,1)));
L_1803db1cd_28:;
wr(s->r,519,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803db1cd_29:;
wr(s->u,48,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803db1cd_30:;
wr(s->u,49,1,(!rd(s->u,43,1)));
L_1803db1cd_31:;
wr(s->u,50,1,(rd(s->u,49,1)&rd(s->r,518,1)));
L_1803db1cd_32:;
wr(s->u,51,1,(rd(s->u,43,1)&rd(s->u,48,1)));
L_1803db1cd_33:;
wr(s->r,518,1,(rd(s->u,50,1)|rd(s->u,51,1)));
L_1803db1cd_34:;
wr(s->u,52,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803db1cd_35:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803db1cd_36:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803db1cd_37:;
wr(s->u,62,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803db1cd_38:;
wr(s->u,63,1,(!rd(s->u,43,1)));
L_1803db1cd_39:;
wr(s->u,64,1,(rd(s->u,63,1)&rd(s->r,514,1)));
L_1803db1cd_40:;
wr(s->u,65,1,(rd(s->u,43,1)&rd(s->u,62,1)));
L_1803db1cd_41:;
wr(s->r,514,1,(rd(s->u,64,1)|rd(s->u,65,1)));
L_1803db1cd_42:;
/* 1803db1d1: add qword ptr [rcx], rdx */
L_1803db1d1_0:;
L_1803db1d1_1:;
wr(s->u,21,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803db1d1_2:;
wr(s->r,512,1,(((rd(s->u,21,8)+rd(s->r,16,8))&(((U)1<<64)-1))<rd(s->u,21,8)));
L_1803db1d1_3:;
wr(s->u,21,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803db1d1_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,21,8),rd(s->r,16,8),8,0));
L_1803db1d1_5:;
wr(s->u,21,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803db1d1_6:;
wr(s->u,21,8,(rd(s->u,21,8)+rd(s->r,16,8)));
L_1803db1d1_7:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,21,8));
L_1803db1d1_8:;
wr(s->u,21,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803db1d1_9:;
wr(s->r,519,1,(sx(rd(s->u,21,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db1d1_10:;
wr(s->u,21,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803db1d1_11:;
wr(s->r,518,1,(rd(s->u,21,8)==((U)UINT64_C(0x0))));
L_1803db1d1_12:;
wr(s->u,21,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803db1d1_13:;
wr(s->u,33,8,(rd(s->u,21,8)&((U)UINT64_C(0xff))));
L_1803db1d1_14:;
wr(s->u,41,1,pop(rd(s->u,33,8),8));
L_1803db1d1_15:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803db1d1_16:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803db1d1_17:;
/* 1803db1d4: call qword ptr [rip + 0x642f86] */
L_1803db1d4_0:;
L_1803db1d4_1:;
wr(s->u,91,8,mr(UINT64_C(0x180a1e160),8));
L_1803db1d4_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db1d4_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db1da)));
L_1803db1d4_4:;
return (uint64_t)rd(s->u,91,8);
L_1803db1d4_5:;
return UINT64_C(0x1803db1da);
}
uint64_t b_1803db1da(CPU*s){
/* 1803db1da: nop  */
L_1803db1da_0:;
L_1803db1da_1:;
/* 1803db1db: lea rax, [rip + 0x430d36] */
L_1803db1db_0:;
L_1803db1db_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080bf18)));
L_1803db1db_2:;
/* 1803db1e2: mov qword ptr [rdi + 8], rax */
L_1803db1e2_0:;
L_1803db1e2_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803db1e2_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803db1e2_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803db1e2_4:;
/* 1803db1e6: lea rax, [rip + 0x4314bb] */
L_1803db1e6_0:;
L_1803db1e6_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080c6a8)));
L_1803db1e6_2:;
/* 1803db1ed: mov qword ptr [rdi], rax */
L_1803db1ed_0:;
L_1803db1ed_1:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803db1ed_2:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,16,8));
L_1803db1ed_3:;
/* 1803db1f0: mov rbx, qword ptr [rsp + 0x48] */
L_1803db1f0_0:;
L_1803db1f0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803db1f0_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db1f0_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803db1f0_4:;
/* 1803db1f5: mov rbp, qword ptr [rsp + 0x50] */
L_1803db1f5_0:;
L_1803db1f5_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803db1f5_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db1f5_3:;
wr(s->r,40,8,rd(s->u,24,8));
L_1803db1f5_4:;
/* 1803db1fa: mov rsi, qword ptr [rsp + 0x58] */
L_1803db1fa_0:;
L_1803db1fa_1:;
wr(s->u,8,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803db1fa_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db1fa_3:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803db1fa_4:;
/* 1803db1ff: add rsp, 0x30 */
L_1803db1ff_0:;
L_1803db1ff_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803db1ff_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803db1ff_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803db1ff_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db1ff_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803db1ff_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803db1ff_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803db1ff_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803db1ff_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803db1ff_10:;
/* 1803db203: pop rdi */
L_1803db203_0:;
L_1803db203_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803db203_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db203_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db203_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803db203_5:;
/* 1803db204: ret  */
L_1803db204_0:;
L_1803db204_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db204_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db204_3:;
return (uint64_t)rd(s->r,648,8);
L_1803db204_4:;
return UINT64_C(0x1803db205);
}
uint64_t b_1803db210(CPU*s){
/* 1803db210: xor eax, eax */
L_1803db210_0:;
L_1803db210_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db210_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db210_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803db210_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db210_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db210_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803db210_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803db210_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803db210_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803db210_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803db210_11:;
/* 1803db212: ret  */
L_1803db212_0:;
L_1803db212_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db212_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db212_3:;
return (uint64_t)rd(s->r,648,8);
L_1803db212_4:;
return UINT64_C(0x1803db213);
}
uint64_t b_1803db220(CPU*s){
/* 1803db220: xor eax, eax */
L_1803db220_0:;
L_1803db220_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db220_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db220_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803db220_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db220_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db220_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803db220_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803db220_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803db220_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803db220_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803db220_11:;
/* 1803db222: ret  */
L_1803db222_0:;
L_1803db222_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db222_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db222_3:;
return (uint64_t)rd(s->r,648,8);
L_1803db222_4:;
return UINT64_C(0x1803db223);
}
uint64_t b_1803db230(CPU*s){
/* 1803db230: xor eax, eax */
L_1803db230_0:;
L_1803db230_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db230_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db230_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803db230_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db230_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db230_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803db230_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803db230_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803db230_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803db230_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803db230_11:;
/* 1803db232: ret  */
L_1803db232_0:;
L_1803db232_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db232_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db232_3:;
return (uint64_t)rd(s->r,648,8);
L_1803db232_4:;
return UINT64_C(0x1803db233);
}
uint64_t b_1803db240(CPU*s){
/* 1803db240: push rbx */
L_1803db240_0:;
L_1803db240_1:;
wr(s->u,12,8,rd(s->r,24,8));
L_1803db240_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db240_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,12,8));
L_1803db240_4:;
/* 1803db242: push rdi */
L_1803db242_0:;
L_1803db242_1:;
wr(s->u,12,8,rd(s->r,56,8));
L_1803db242_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db242_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,12,8));
L_1803db242_4:;
/* 1803db243: push r13 */
L_1803db243_0:;
L_1803db243_1:;
wr(s->u,12,8,rd(s->r,168,8));
L_1803db243_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db243_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,12,8));
L_1803db243_4:;
/* 1803db245: sub rsp, 0x330 */
L_1803db245_0:;
L_1803db245_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x330))));
L_1803db245_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x330)),8,1));
L_1803db245_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x330))));
L_1803db245_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db245_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803db245_6:;
wr(s->u,20,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803db245_7:;
wr(s->u,28,1,pop(rd(s->u,20,8),8));
L_1803db245_8:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803db245_9:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803db245_10:;
/* 1803db24c: movsxd r13, r8d */
L_1803db24c_0:;
L_1803db24c_1:;
wr(s->r,168,8,(U)sx(rd(s->r,128,4),4));
L_1803db24c_2:;
/* 1803db24f: mov rdi, rdx */
L_1803db24f_0:;
L_1803db24f_1:;
wr(s->r,56,8,rd(s->r,16,8));
L_1803db24f_2:;
/* 1803db252: mov rbx, rcx */
L_1803db252_0:;
L_1803db252_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803db252_2:;
/* 1803db255: cmp r13d, dword ptr [rcx + 0x70] */
L_1803db255_0:;
L_1803db255_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x70))));
L_1803db255_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db255_3:;
wr(s->u,30,4,rd(s->u,8,4));
L_1803db255_4:;
wr(s->r,512,1,(rd(s->r,168,4)<rd(s->u,30,4)));
L_1803db255_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,4),rd(s->u,30,4),4,1));
L_1803db255_6:;
wr(s->u,34,4,(rd(s->r,168,4)-rd(s->u,30,4)));
L_1803db255_7:;
wr(s->r,519,1,(sx(rd(s->u,34,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db255_8:;
wr(s->r,518,1,(rd(s->u,34,4)==((U)UINT64_C(0x0))));
L_1803db255_9:;
wr(s->u,20,4,(rd(s->u,34,4)&((U)UINT64_C(0xff))));
L_1803db255_10:;
wr(s->u,28,1,pop(rd(s->u,20,4),4));
L_1803db255_11:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803db255_12:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803db255_13:;
/* 1803db259: je 0x1803db26c */
L_1803db259_0:;
L_1803db259_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803db26c);}
L_1803db259_2:;
return UINT64_C(0x1803db25b);
}
uint64_t b_1803db25b(CPU*s){
/* 1803db25b: mov eax, 0x4c4b43 */
L_1803db25b_0:;
L_1803db25b_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803db25b_2:;
/* 1803db260: add rsp, 0x330 */
L_1803db260_0:;
L_1803db260_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x330)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803db260_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x330)),8,0));
L_1803db260_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x330))));
L_1803db260_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db260_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803db260_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803db260_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803db260_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803db260_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803db260_10:;
/* 1803db267: pop r13 */
L_1803db267_0:;
L_1803db267_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803db267_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db267_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db267_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803db267_5:;
/* 1803db269: pop rdi */
L_1803db269_0:;
L_1803db269_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803db269_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db269_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db269_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803db269_5:;
/* 1803db26a: pop rbx */
L_1803db26a_0:;
L_1803db26a_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803db26a_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db26a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db26a_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803db26a_5:;
/* 1803db26b: ret  */
L_1803db26b_0:;
L_1803db26b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db26b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db26b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803db26b_4:;
return UINT64_C(0x1803db26c);
}
uint64_t b_1803db26c(CPU*s){
/* 1803db26c: mov qword ptr [rsp + 0x350], rbp */
L_1803db26c_0:;
L_1803db26c_1:;
wr(s->u,16,8,(((U)UINT64_C(0x350))+rd(s->r,32,8)));
L_1803db26c_2:;
wr(s->u,28,8,rd(s->r,40,8));
L_1803db26c_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803db26c_4:;
/* 1803db274: xor ebp, ebp */
L_1803db274_0:;
L_1803db274_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db274_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db274_3:;
wr(s->r,40,4,(rd(s->r,40,4)^rd(s->r,40,4)));
L_1803db274_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803db274_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db274_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803db274_7:;
wr(s->u,42,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803db274_8:;
wr(s->u,46,1,pop(rd(s->u,42,4),4));
L_1803db274_9:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803db274_10:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803db274_11:;
/* 1803db276: cmp dword ptr [rcx + 0x90], ebp */
L_1803db276_0:;
L_1803db276_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x90))));
L_1803db276_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803db276_3:;
wr(s->u,48,4,rd(s->u,36,4));
L_1803db276_4:;
wr(s->r,512,1,(rd(s->u,48,4)<rd(s->r,40,4)));
L_1803db276_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,48,4),rd(s->r,40,4),4,1));
L_1803db276_6:;
wr(s->u,52,4,(rd(s->u,48,4)-rd(s->r,40,4)));
L_1803db276_7:;
wr(s->r,519,1,(sx(rd(s->u,52,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db276_8:;
wr(s->r,518,1,(rd(s->u,52,4)==((U)UINT64_C(0x0))));
L_1803db276_9:;
wr(s->u,42,4,(rd(s->u,52,4)&((U)UINT64_C(0xff))));
L_1803db276_10:;
wr(s->u,46,1,pop(rd(s->u,42,4),4));
L_1803db276_11:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803db276_12:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803db276_13:;
/* 1803db27c: mov dword ptr [rcx + 0x60], ebp */
L_1803db27c_0:;
L_1803db27c_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x60))));
L_1803db27c_2:;
wr(s->u,24,4,rd(s->r,40,4));
L_1803db27c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803db27c_4:;
/* 1803db27f: mov dword ptr [rcx + 0x6c], ebp */
L_1803db27f_0:;
L_1803db27f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x6c))));
L_1803db27f_2:;
wr(s->u,24,4,rd(s->r,40,4));
L_1803db27f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803db27f_4:;
/* 1803db282: jle 0x1803db315 */
L_1803db282_0:;
L_1803db282_1:;
wr(s->u,40,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db282_2:;
wr(s->u,41,1,((rd(s->r,518,1)!=0)||(rd(s->u,40,1)!=0)));
L_1803db282_3:;
if(rd(s->u,41,1)){return UINT64_C(0x1803db315);}
L_1803db282_4:;
return UINT64_C(0x1803db288);
}
uint64_t b_1803db288(CPU*s){
/* 1803db288: cmp dword ptr [rcx + 0x30], ebp */
L_1803db288_0:;
L_1803db288_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x30))));
L_1803db288_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db288_3:;
wr(s->u,36,4,rd(s->u,24,4));
L_1803db288_4:;
wr(s->r,512,1,(rd(s->u,36,4)<rd(s->r,40,4)));
L_1803db288_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,36,4),rd(s->r,40,4),4,1));
L_1803db288_6:;
wr(s->u,40,4,(rd(s->u,36,4)-rd(s->r,40,4)));
L_1803db288_7:;
wr(s->r,519,1,(sx(rd(s->u,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db288_8:;
wr(s->r,518,1,(rd(s->u,40,4)==((U)UINT64_C(0x0))));
L_1803db288_9:;
wr(s->u,30,4,(rd(s->u,40,4)&((U)UINT64_C(0xff))));
L_1803db288_10:;
wr(s->u,34,1,pop(rd(s->u,30,4),4));
L_1803db288_11:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803db288_12:;
wr(s->r,514,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803db288_13:;
/* 1803db28b: mov qword ptr [rsp + 0x358], rsi */
L_1803db28b_0:;
L_1803db28b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x358))+rd(s->r,32,8)));
L_1803db28b_2:;
wr(s->u,16,8,rd(s->r,48,8));
L_1803db28b_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803db28b_4:;
/* 1803db293: mov esi, ebp */
L_1803db293_0:;
L_1803db293_1:;
wr(s->r,48,4,rd(s->r,40,4));
L_1803db293_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803db293_3:;
/* 1803db295: jle 0x1803db2f9 */
L_1803db295_0:;
L_1803db295_1:;
wr(s->u,28,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db295_2:;
wr(s->u,29,1,((rd(s->r,518,1)!=0)||(rd(s->u,28,1)!=0)));
L_1803db295_3:;
if(rd(s->u,29,1)){return UINT64_C(0x1803db2f9);}
L_1803db295_4:;
return UINT64_C(0x1803db297);
}
uint64_t b_1803db28b(CPU*s){
/* 1803db28b: mov qword ptr [rsp + 0x358], rsi */
L_1803db28b_0:;
L_1803db28b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x358))+rd(s->r,32,8)));
L_1803db28b_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803db28b_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803db28b_4:;
/* 1803db293: mov esi, ebp */
L_1803db293_0:;
L_1803db293_1:;
wr(s->r,48,4,rd(s->r,40,4));
L_1803db293_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803db293_3:;
/* 1803db295: jle 0x1803db2f9 */
L_1803db295_0:;
L_1803db295_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db295_2:;
wr(s->u,17,1,((rd(s->r,518,1)!=0)||(rd(s->u,16,1)!=0)));
L_1803db295_3:;
if(rd(s->u,17,1)){return UINT64_C(0x1803db2f9);}
L_1803db295_4:;
return UINT64_C(0x1803db297);
}
uint64_t b_1803db297(CPU*s){
/* 1803db297: mov qword ptr [rsp + 0x360], r12 */
L_1803db297_0:;
L_1803db297_1:;
wr(s->u,29,8,(((U)UINT64_C(0x360))+rd(s->r,32,8)));
L_1803db297_2:;
wr(s->u,53,8,rd(s->r,160,8));
L_1803db297_3:;
mw((uint64_t)rd(s->u,29,8),8,rd(s->u,53,8));
L_1803db297_4:;
/* 1803db29f: mov qword ptr [rsp + 0x368], r14 */
L_1803db29f_0:;
L_1803db29f_1:;
wr(s->u,29,8,(((U)UINT64_C(0x368))+rd(s->r,32,8)));
L_1803db29f_2:;
wr(s->u,53,8,rd(s->r,176,8));
L_1803db29f_3:;
mw((uint64_t)rd(s->u,29,8),8,rd(s->u,53,8));
L_1803db29f_4:;
/* 1803db2a7: mov r14, r13 */
L_1803db2a7_0:;
L_1803db2a7_1:;
wr(s->r,176,8,rd(s->r,168,8));
L_1803db2a7_2:;
/* 1803db2aa: shl r14, 2 */
L_1803db2aa_0:;
L_1803db2aa_1:;
wr(s->u,113,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803db2aa_2:;
wr(s->u,117,8,rd(s->r,176,8));
L_1803db2aa_3:;
wr(s->r,176,8,((rd(s->u,113,4)>=64)?0:(rd(s->r,176,8)<<rd(s->u,113,4))));
L_1803db2aa_4:;
wr(s->u,96,1,(rd(s->u,113,4)==((U)UINT64_C(0x0))));
L_1803db2aa_5:;
wr(s->u,97,4,(rd(s->u,113,4)-((U)UINT64_C(0x1))));
L_1803db2aa_6:;
wr(s->u,101,8,((rd(s->u,97,4)>=64)?0:(rd(s->u,117,8)<<rd(s->u,97,4))));
L_1803db2aa_7:;
wr(s->u,109,1,(sx(rd(s->u,101,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db2aa_8:;
wr(s->u,0,1,rd(s->u,96,1));
L_1803db2aa_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803db2aa_10:;
wr(s->u,2,1,(!rd(s->u,96,1)));
L_1803db2aa_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803db2aa_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,109,1)));
L_1803db2aa_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803db2aa_14:;
wr(s->u,110,1,(rd(s->u,113,4)==((U)UINT64_C(0x1))));
L_1803db2aa_15:;
wr(s->u,111,1,(sx(rd(s->r,176,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db2aa_16:;
wr(s->u,112,1,(rd(s->r,512,1)^rd(s->u,111,1)));
L_1803db2aa_17:;
wr(s->u,0,1,rd(s->u,110,1));
L_1803db2aa_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,112,1)));
L_1803db2aa_19:;
wr(s->u,2,1,(!rd(s->u,110,1)));
L_1803db2aa_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803db2aa_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803db2aa_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803db2aa_23:;
wr(s->u,73,1,(rd(s->u,113,4)!=((U)UINT64_C(0x0))));
L_1803db2aa_24:;
wr(s->u,74,1,(sx(rd(s->r,176,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db2aa_25:;
wr(s->u,75,1,(!rd(s->u,73,1)));
L_1803db2aa_26:;
wr(s->u,76,1,(rd(s->u,75,1)&rd(s->r,519,1)));
L_1803db2aa_27:;
wr(s->u,77,1,(rd(s->u,73,1)&rd(s->u,74,1)));
L_1803db2aa_28:;
wr(s->r,519,1,(rd(s->u,76,1)|rd(s->u,77,1)));
L_1803db2aa_29:;
wr(s->u,78,1,(rd(s->r,176,8)==((U)UINT64_C(0x0))));
L_1803db2aa_30:;
wr(s->u,79,1,(!rd(s->u,73,1)));
L_1803db2aa_31:;
wr(s->u,80,1,(rd(s->u,79,1)&rd(s->r,518,1)));
L_1803db2aa_32:;
wr(s->u,81,1,(rd(s->u,73,1)&rd(s->u,78,1)));
L_1803db2aa_33:;
wr(s->r,518,1,(rd(s->u,80,1)|rd(s->u,81,1)));
L_1803db2aa_34:;
wr(s->u,82,8,(rd(s->r,176,8)&((U)UINT64_C(0xff))));
L_1803db2aa_35:;
wr(s->u,90,1,pop(rd(s->u,82,8),8));
L_1803db2aa_36:;
wr(s->u,91,1,(rd(s->u,90,1)&((U)UINT64_C(0x1))));
L_1803db2aa_37:;
wr(s->u,92,1,(rd(s->u,91,1)==((U)UINT64_C(0x0))));
L_1803db2aa_38:;
wr(s->u,93,1,(!rd(s->u,73,1)));
L_1803db2aa_39:;
wr(s->u,94,1,(rd(s->u,93,1)&rd(s->r,514,1)));
L_1803db2aa_40:;
wr(s->u,95,1,(rd(s->u,73,1)&rd(s->u,92,1)));
L_1803db2aa_41:;
wr(s->r,514,1,(rd(s->u,94,1)|rd(s->u,95,1)));
L_1803db2aa_42:;
/* 1803db2ae: lea r12, [rcx + 0x570] */
L_1803db2ae_0:;
L_1803db2ae_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x570))));
L_1803db2ae_2:;
wr(s->r,160,8,rd(s->u,5,8));
L_1803db2ae_3:;
/* 1803db2b5: nop word ptr [rax + rax] */
L_1803db2b5_0:;
L_1803db2b5_1:;
wr(s->u,37,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803db2b5_2:;
wr(s->u,45,8,(rd(s->r,0,8)+rd(s->u,37,8)));
L_1803db2b5_3:;
/* 1803db2c0: movsxd rcx, dword ptr [rbx + 0x90] */
L_1803db2c0_0:;
L_1803db2c0_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x90))));
L_1803db2c0_2:;
wr(s->u,61,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803db2c0_3:;
wr(s->r,8,8,(U)sx(rd(s->u,61,4),4));
L_1803db2c0_4:;
/* 1803db2c7: mov rax, qword ptr [r12] */
L_1803db2c7_0:;
L_1803db2c7_1:;
wr(s->u,65,8,mr((uint64_t)rd(s->r,160,8),8));
L_1803db2c7_2:;
wr(s->r,0,8,rd(s->u,65,8));
L_1803db2c7_3:;
/* 1803db2cb: mov rdx, qword ptr [rdi] */
L_1803db2cb_0:;
L_1803db2cb_1:;
wr(s->u,65,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803db2cb_2:;
wr(s->r,16,8,rd(s->u,65,8));
L_1803db2cb_3:;
/* 1803db2ce: lea rcx, [rax + rcx*4] */
L_1803db2ce_0:;
L_1803db2ce_1:;
wr(s->u,13,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803db2ce_2:;
wr(s->u,21,8,(rd(s->r,0,8)+rd(s->u,13,8)));
L_1803db2ce_3:;
wr(s->r,8,8,rd(s->u,21,8));
L_1803db2ce_4:;
/* 1803db2d2: mov r8, r14 */
L_1803db2d2_0:;
L_1803db2d2_1:;
wr(s->r,128,8,rd(s->r,176,8));
L_1803db2d2_2:;
/* 1803db2d5: call 0x18000d550 */
L_1803db2d5_0:;
L_1803db2d5_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db2d5_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db2da)));
L_1803db2d5_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803db2d5_4:;
return UINT64_C(0x1803db2da);
}
uint64_t b_1803db2c0(CPU*s){
/* 1803db2c0: movsxd rcx, dword ptr [rbx + 0x90] */
L_1803db2c0_0:;
L_1803db2c0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x90))));
L_1803db2c0_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db2c0_3:;
wr(s->r,8,8,(U)sx(rd(s->u,24,4),4));
L_1803db2c0_4:;
/* 1803db2c7: mov rax, qword ptr [r12] */
L_1803db2c7_0:;
L_1803db2c7_1:;
wr(s->u,28,8,mr((uint64_t)rd(s->r,160,8),8));
L_1803db2c7_2:;
wr(s->r,0,8,rd(s->u,28,8));
L_1803db2c7_3:;
/* 1803db2cb: mov rdx, qword ptr [rdi] */
L_1803db2cb_0:;
L_1803db2cb_1:;
wr(s->u,28,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803db2cb_2:;
wr(s->r,16,8,rd(s->u,28,8));
L_1803db2cb_3:;
/* 1803db2ce: lea rcx, [rax + rcx*4] */
L_1803db2ce_0:;
L_1803db2ce_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803db2ce_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803db2ce_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803db2ce_4:;
/* 1803db2d2: mov r8, r14 */
L_1803db2d2_0:;
L_1803db2d2_1:;
wr(s->r,128,8,rd(s->r,176,8));
L_1803db2d2_2:;
/* 1803db2d5: call 0x18000d550 */
L_1803db2d5_0:;
L_1803db2d5_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db2d5_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db2da)));
L_1803db2d5_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803db2d5_4:;
return UINT64_C(0x1803db2da);
}
uint64_t b_1803db2da(CPU*s){
/* 1803db2da: inc esi */
L_1803db2da_0:;
L_1803db2da_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),((U)UINT64_C(0x1)),4,0));
L_1803db2da_2:;
wr(s->r,48,4,(rd(s->r,48,4)+((U)UINT64_C(0x1))));
L_1803db2da_3:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803db2da_4:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db2da_5:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803db2da_6:;
wr(s->u,13,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803db2da_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803db2da_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803db2da_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803db2da_10:;
/* 1803db2dc: add rdi, 8 */
L_1803db2dc_0:;
L_1803db2dc_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803db2dc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x8)),8,0));
L_1803db2dc_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803db2dc_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db2dc_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803db2dc_6:;
wr(s->u,13,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803db2dc_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803db2dc_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803db2dc_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803db2dc_10:;
/* 1803db2e0: add r12, 8 */
L_1803db2e0_0:;
L_1803db2e0_1:;
wr(s->r,512,1,(((rd(s->r,160,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,160,8)));
L_1803db2e0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),((U)UINT64_C(0x8)),8,0));
L_1803db2e0_3:;
wr(s->r,160,8,(rd(s->r,160,8)+((U)UINT64_C(0x8))));
L_1803db2e0_4:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db2e0_5:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803db2e0_6:;
wr(s->u,13,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803db2e0_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803db2e0_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803db2e0_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803db2e0_10:;
/* 1803db2e4: cmp esi, dword ptr [rbx + 0x30] */
L_1803db2e4_0:;
L_1803db2e4_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803db2e4_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db2e4_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803db2e4_4:;
wr(s->r,512,1,(rd(s->r,48,4)<rd(s->u,23,4)));
L_1803db2e4_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),rd(s->u,23,4),4,1));
L_1803db2e4_6:;
wr(s->u,27,4,(rd(s->r,48,4)-rd(s->u,23,4)));
L_1803db2e4_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db2e4_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803db2e4_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803db2e4_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803db2e4_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803db2e4_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803db2e4_13:;
/* 1803db2e7: jl 0x1803db2c0 */
L_1803db2e7_0:;
L_1803db2e7_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db2e7_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803db2c0);}
L_1803db2e7_3:;
return UINT64_C(0x1803db2e9);
}
uint64_t b_1803db2e9(CPU*s){
/* 1803db2e9: mov r14, qword ptr [rsp + 0x368] */
L_1803db2e9_0:;
L_1803db2e9_1:;
wr(s->u,8,8,(((U)UINT64_C(0x368))+rd(s->r,32,8)));
L_1803db2e9_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db2e9_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803db2e9_4:;
/* 1803db2f1: mov r12, qword ptr [rsp + 0x360] */
L_1803db2f1_0:;
L_1803db2f1_1:;
wr(s->u,8,8,(((U)UINT64_C(0x360))+rd(s->r,32,8)));
L_1803db2f1_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db2f1_3:;
wr(s->r,160,8,rd(s->u,24,8));
L_1803db2f1_4:;
/* 1803db2f9: add r13d, dword ptr [rbx + 0x90] */
L_1803db2f9_0:;
L_1803db2f9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x90))));
L_1803db2f9_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db2f9_3:;
wr(s->r,512,1,(((rd(s->r,168,4)+rd(s->u,20,4))&(((U)1<<32)-1))<rd(s->r,168,4)));
L_1803db2f9_4:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db2f9_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,4),rd(s->u,20,4),4,0));
L_1803db2f9_6:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db2f9_7:;
wr(s->r,168,4,(rd(s->r,168,4)+rd(s->u,20,4)));
L_1803db2f9_8:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803db2f9_9:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db2f9_10:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803db2f9_11:;
wr(s->u,33,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803db2f9_12:;
wr(s->u,41,1,pop(rd(s->u,33,4),4));
L_1803db2f9_13:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803db2f9_14:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803db2f9_15:;
/* 1803db300: mov rsi, qword ptr [rsp + 0x358] */
L_1803db300_0:;
L_1803db300_1:;
wr(s->u,8,8,(((U)UINT64_C(0x358))+rd(s->r,32,8)));
L_1803db300_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db300_3:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803db300_4:;
/* 1803db308: lea rdi, [rbx + 0x570] */
L_1803db308_0:;
L_1803db308_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x570))));
L_1803db308_2:;
wr(s->r,56,8,rd(s->u,0,8));
L_1803db308_3:;
/* 1803db30f: mov dword ptr [rbx + 0x90], ebp */
L_1803db30f_0:;
L_1803db30f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x90))));
L_1803db30f_2:;
wr(s->u,16,4,rd(s->r,40,4));
L_1803db30f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803db30f_4:;
/* 1803db315: test rdi, rdi */
L_1803db315_0:;
L_1803db315_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db315_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db315_3:;
wr(s->u,43,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1803db315_4:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db315_5:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1803db315_6:;
wr(s->u,33,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1803db315_7:;
wr(s->u,41,1,pop(rd(s->u,33,8),8));
L_1803db315_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803db315_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803db315_10:;
/* 1803db318: jne 0x1803db34e */
L_1803db318_0:;
L_1803db318_1:;
wr(s->u,32,1,(!rd(s->r,518,1)));
L_1803db318_2:;
if(rd(s->u,32,1)){return UINT64_C(0x1803db34e);}
L_1803db318_3:;
return UINT64_C(0x1803db31a);
}
uint64_t b_1803db2f9(CPU*s){
/* 1803db2f9: add r13d, dword ptr [rbx + 0x90] */
L_1803db2f9_0:;
L_1803db2f9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x90))));
L_1803db2f9_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db2f9_3:;
wr(s->r,512,1,(((rd(s->r,168,4)+rd(s->u,20,4))&(((U)1<<32)-1))<rd(s->r,168,4)));
L_1803db2f9_4:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db2f9_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,4),rd(s->u,20,4),4,0));
L_1803db2f9_6:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db2f9_7:;
wr(s->r,168,4,(rd(s->r,168,4)+rd(s->u,20,4)));
L_1803db2f9_8:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803db2f9_9:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db2f9_10:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803db2f9_11:;
wr(s->u,33,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803db2f9_12:;
wr(s->u,41,1,pop(rd(s->u,33,4),4));
L_1803db2f9_13:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803db2f9_14:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803db2f9_15:;
/* 1803db300: mov rsi, qword ptr [rsp + 0x358] */
L_1803db300_0:;
L_1803db300_1:;
wr(s->u,8,8,(((U)UINT64_C(0x358))+rd(s->r,32,8)));
L_1803db300_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db300_3:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803db300_4:;
/* 1803db308: lea rdi, [rbx + 0x570] */
L_1803db308_0:;
L_1803db308_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x570))));
L_1803db308_2:;
wr(s->r,56,8,rd(s->u,0,8));
L_1803db308_3:;
/* 1803db30f: mov dword ptr [rbx + 0x90], ebp */
L_1803db30f_0:;
L_1803db30f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x90))));
L_1803db30f_2:;
wr(s->u,16,4,rd(s->r,40,4));
L_1803db30f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803db30f_4:;
/* 1803db315: test rdi, rdi */
L_1803db315_0:;
L_1803db315_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db315_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db315_3:;
wr(s->u,43,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1803db315_4:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db315_5:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1803db315_6:;
wr(s->u,33,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1803db315_7:;
wr(s->u,41,1,pop(rd(s->u,33,8),8));
L_1803db315_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803db315_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803db315_10:;
/* 1803db318: jne 0x1803db34e */
L_1803db318_0:;
L_1803db318_1:;
wr(s->u,32,1,(!rd(s->r,518,1)));
L_1803db318_2:;
if(rd(s->u,32,1)){return UINT64_C(0x1803db34e);}
L_1803db318_3:;
return UINT64_C(0x1803db31a);
}
uint64_t b_1803db315(CPU*s){
/* 1803db315: test rdi, rdi */
L_1803db315_0:;
L_1803db315_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db315_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db315_3:;
wr(s->u,11,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1803db315_4:;
wr(s->r,519,1,(sx(rd(s->u,11,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db315_5:;
wr(s->r,518,1,(rd(s->u,11,8)==((U)UINT64_C(0x0))));
L_1803db315_6:;
wr(s->u,1,8,(rd(s->u,11,8)&((U)UINT64_C(0xff))));
L_1803db315_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803db315_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803db315_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803db315_10:;
/* 1803db318: jne 0x1803db34e */
L_1803db318_0:;
L_1803db318_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803db318_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803db34e);}
L_1803db318_3:;
return UINT64_C(0x1803db31a);
}
uint64_t b_1803db31a(CPU*s){
/* 1803db31a: xorps xmm0, xmm0 */
L_1803db31a_0:;
L_1803db31a_1:;
wr(s->r,4608,4,(rd(s->r,4608,4)^rd(s->r,4608,4)));
L_1803db31a_2:;
wr(s->r,4612,4,(rd(s->r,4612,4)^rd(s->r,4612,4)));
L_1803db31a_3:;
wr(s->r,4616,4,(rd(s->r,4616,4)^rd(s->r,4616,4)));
L_1803db31a_4:;
wr(s->r,4620,4,(rd(s->r,4620,4)^rd(s->r,4620,4)));
L_1803db31a_5:;
/* 1803db31d: mov rcx, qword ptr [rbx + 0x6718] */
L_1803db31d_0:;
L_1803db31d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6718))));
L_1803db31d_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db31d_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803db31d_4:;
/* 1803db324: lea r9, [rbx + 0x270] */
L_1803db324_0:;
L_1803db324_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x270))));
L_1803db324_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1803db324_3:;
/* 1803db32b: movss dword ptr [rsp + 0x28], xmm0 */
L_1803db32b_0:;
L_1803db32b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803db32b_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803db32b_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803db32b_4:;
/* 1803db331: lea r8, [rbx + 0xf0] */
L_1803db331_0:;
L_1803db331_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xf0))));
L_1803db331_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1803db331_3:;
/* 1803db338: xor edx, edx */
L_1803db338_0:;
L_1803db338_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db338_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db338_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803db338_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803db338_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db338_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803db338_7:;
wr(s->u,28,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803db338_8:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803db338_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803db338_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803db338_11:;
/* 1803db33a: mov dword ptr [rsp + 0x20], ebp */
L_1803db33a_0:;
L_1803db33a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803db33a_2:;
wr(s->u,16,4,rd(s->r,40,4));
L_1803db33a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803db33a_4:;
/* 1803db33e: call 0x1803e2f70 */
L_1803db33e_0:;
L_1803db33e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db33e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db343)));
L_1803db33e_3:;
return (uint64_t)UINT64_C(0x1803e2f70);
L_1803db33e_4:;
return UINT64_C(0x1803db343);
}
uint64_t b_1803db343(CPU*s){
/* 1803db343: add dword ptr [rbx + 0x64], eax */
L_1803db343_0:;
L_1803db343_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x64))));
L_1803db343_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db343_3:;
wr(s->r,512,1,(((rd(s->u,8,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->u,8,4)));
L_1803db343_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db343_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,0,4),4,0));
L_1803db343_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db343_7:;
wr(s->u,8,4,(rd(s->u,8,4)+rd(s->r,0,4)));
L_1803db343_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803db343_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db343_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db343_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db343_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803db343_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db343_14:;
wr(s->u,12,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803db343_15:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803db343_16:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803db343_17:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803db343_18:;
/* 1803db346: mov dword ptr [rbx + 0x68], eax */
L_1803db346_0:;
L_1803db346_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x68))));
L_1803db346_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803db346_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803db346_4:;
/* 1803db349: jmp 0x1803db407 */
L_1803db349_0:;
L_1803db349_1:;
return UINT64_C(0x1803db407);
L_1803db349_2:;
return UINT64_C(0x1803db34e);
}
uint64_t b_1803db34e(CPU*s){
/* 1803db34e: movsxd rax, dword ptr [rbx + 0x64] */
L_1803db34e_0:;
L_1803db34e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x64))));
L_1803db34e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db34e_3:;
wr(s->r,0,8,(U)sx(rd(s->u,8,4),4));
L_1803db34e_4:;
/* 1803db352: test eax, eax */
L_1803db352_0:;
L_1803db352_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db352_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db352_3:;
wr(s->u,20,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803db352_4:;
wr(s->r,519,1,(sx(rd(s->u,20,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db352_5:;
wr(s->r,518,1,(rd(s->u,20,4)==((U)UINT64_C(0x0))));
L_1803db352_6:;
wr(s->u,14,4,(rd(s->u,20,4)&((U)UINT64_C(0xff))));
L_1803db352_7:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803db352_8:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803db352_9:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803db352_10:;
/* 1803db354: jle 0x1803db3d3 */
L_1803db354_0:;
L_1803db354_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db354_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803db354_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803db3d3);}
L_1803db354_4:;
return UINT64_C(0x1803db356);
}
uint64_t b_1803db356(CPU*s){
/* 1803db356: cmp dword ptr [rbx + 0x30], ebp */
L_1803db356_0:;
L_1803db356_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803db356_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db356_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803db356_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,40,4)));
L_1803db356_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,40,4),4,1));
L_1803db356_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,40,4)));
L_1803db356_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db356_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803db356_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803db356_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803db356_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803db356_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803db356_13:;
/* 1803db359: jle 0x1803db39e */
L_1803db359_0:;
L_1803db359_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db359_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803db359_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803db39e);}
L_1803db359_4:;
return UINT64_C(0x1803db35b);
}
uint64_t b_1803db35b(CPU*s){
/* 1803db35b: mov r10d, dword ptr [rbx + 0x30] */
L_1803db35b_0:;
L_1803db35b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803db35b_2:;
wr(s->u,88,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db35b_3:;
wr(s->r,144,4,rd(s->u,88,4));
L_1803db35b_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803db35b_5:;
/* 1803db35f: mov r9, rax */
L_1803db35f_0:;
L_1803db35f_1:;
wr(s->r,136,8,rd(s->r,0,8));
L_1803db35f_2:;
/* 1803db362: lea rdx, [rbx + 0x270] */
L_1803db362_0:;
L_1803db362_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x270))));
L_1803db362_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803db362_3:;
/* 1803db369: mov r8, rbp */
L_1803db369_0:;
L_1803db369_1:;
wr(s->r,128,8,rd(s->r,40,8));
L_1803db369_2:;
/* 1803db36c: nop dword ptr [rax] */
L_1803db36c_0:;
L_1803db36c_1:;
/* 1803db370: mov rax, qword ptr [rdx - 0x180] */
L_1803db370_0:;
L_1803db370_1:;
wr(s->u,8,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffe80))));
L_1803db370_2:;
wr(s->u,92,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db370_3:;
wr(s->r,0,8,rd(s->u,92,8));
L_1803db370_4:;
/* 1803db377: add r8, 8 */
L_1803db377_0:;
L_1803db377_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803db377_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803db377_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803db377_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db377_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803db377_6:;
wr(s->u,101,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803db377_7:;
wr(s->u,109,1,pop(rd(s->u,101,8),8));
L_1803db377_8:;
wr(s->u,110,1,(rd(s->u,109,1)&((U)UINT64_C(0x1))));
L_1803db377_9:;
wr(s->r,514,1,(rd(s->u,110,1)==((U)UINT64_C(0x0))));
L_1803db377_10:;
/* 1803db37b: add rdx, 8 */
L_1803db37b_0:;
L_1803db37b_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803db37b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x8)),8,0));
L_1803db37b_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803db37b_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db37b_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803db37b_6:;
wr(s->u,101,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803db37b_7:;
wr(s->u,109,1,pop(rd(s->u,101,8),8));
L_1803db37b_8:;
wr(s->u,110,1,(rd(s->u,109,1)&((U)UINT64_C(0x1))));
L_1803db37b_9:;
wr(s->r,514,1,(rd(s->u,110,1)==((U)UINT64_C(0x0))));
L_1803db37b_10:;
/* 1803db37f: sub r10, 1 */
L_1803db37f_0:;
L_1803db37f_1:;
wr(s->r,512,1,(rd(s->r,144,8)<((U)UINT64_C(0x1))));
L_1803db37f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x1)),8,1));
L_1803db37f_3:;
wr(s->r,144,8,(rd(s->r,144,8)-((U)UINT64_C(0x1))));
L_1803db37f_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db37f_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803db37f_6:;
wr(s->u,101,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803db37f_7:;
wr(s->u,109,1,pop(rd(s->u,101,8),8));
L_1803db37f_8:;
wr(s->u,110,1,(rd(s->u,109,1)&((U)UINT64_C(0x1))));
L_1803db37f_9:;
wr(s->r,514,1,(rd(s->u,110,1)==((U)UINT64_C(0x0))));
L_1803db37f_10:;
/* 1803db383: lea rcx, [rax + r9*4] */
L_1803db383_0:;
L_1803db383_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803db383_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803db383_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803db383_4:;
/* 1803db387: mov rax, qword ptr [rdx - 8] */
L_1803db387_0:;
L_1803db387_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803db387_2:;
wr(s->u,92,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db387_3:;
wr(s->r,0,8,rd(s->u,92,8));
L_1803db387_4:;
/* 1803db38b: mov qword ptr [rsp + r8 + 0x1a8], rcx */
L_1803db38b_0:;
L_1803db38b_1:;
wr(s->u,56,8,(((U)UINT64_C(0x1a8))+rd(s->r,32,8)));
L_1803db38b_2:;
wr(s->u,64,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803db38b_3:;
wr(s->u,72,8,(rd(s->u,56,8)+rd(s->u,64,8)));
L_1803db38b_4:;
wr(s->u,80,8,rd(s->r,8,8));
L_1803db38b_5:;
mw((uint64_t)rd(s->u,72,8),8,rd(s->u,80,8));
L_1803db38b_6:;
/* 1803db393: lea rcx, [rax + r9*4] */
L_1803db393_0:;
L_1803db393_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803db393_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803db393_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803db393_4:;
/* 1803db397: mov qword ptr [rsp + r8 + 0x28], rcx */
L_1803db397_0:;
L_1803db397_1:;
wr(s->u,32,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803db397_2:;
wr(s->u,40,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803db397_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803db397_4:;
wr(s->u,80,8,rd(s->r,8,8));
L_1803db397_5:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,80,8));
L_1803db397_6:;
/* 1803db39c: jne 0x1803db370 */
L_1803db39c_0:;
L_1803db39c_1:;
wr(s->u,100,1,(!rd(s->r,518,1)));
L_1803db39c_2:;
if(rd(s->u,100,1)){goto L_1803db370_0;}
L_1803db39c_3:;
return UINT64_C(0x1803db39e);
}
uint64_t b_1803db370(CPU*s){
/* 1803db370: mov rax, qword ptr [rdx - 0x180] */
L_1803db370_0:;
L_1803db370_1:;
wr(s->u,8,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffe80))));
L_1803db370_2:;
wr(s->u,88,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db370_3:;
wr(s->r,0,8,rd(s->u,88,8));
L_1803db370_4:;
/* 1803db377: add r8, 8 */
L_1803db377_0:;
L_1803db377_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803db377_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803db377_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803db377_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db377_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803db377_6:;
wr(s->u,97,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803db377_7:;
wr(s->u,105,1,pop(rd(s->u,97,8),8));
L_1803db377_8:;
wr(s->u,106,1,(rd(s->u,105,1)&((U)UINT64_C(0x1))));
L_1803db377_9:;
wr(s->r,514,1,(rd(s->u,106,1)==((U)UINT64_C(0x0))));
L_1803db377_10:;
/* 1803db37b: add rdx, 8 */
L_1803db37b_0:;
L_1803db37b_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803db37b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x8)),8,0));
L_1803db37b_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803db37b_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db37b_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803db37b_6:;
wr(s->u,97,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803db37b_7:;
wr(s->u,105,1,pop(rd(s->u,97,8),8));
L_1803db37b_8:;
wr(s->u,106,1,(rd(s->u,105,1)&((U)UINT64_C(0x1))));
L_1803db37b_9:;
wr(s->r,514,1,(rd(s->u,106,1)==((U)UINT64_C(0x0))));
L_1803db37b_10:;
/* 1803db37f: sub r10, 1 */
L_1803db37f_0:;
L_1803db37f_1:;
wr(s->r,512,1,(rd(s->r,144,8)<((U)UINT64_C(0x1))));
L_1803db37f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x1)),8,1));
L_1803db37f_3:;
wr(s->r,144,8,(rd(s->r,144,8)-((U)UINT64_C(0x1))));
L_1803db37f_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db37f_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803db37f_6:;
wr(s->u,97,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803db37f_7:;
wr(s->u,105,1,pop(rd(s->u,97,8),8));
L_1803db37f_8:;
wr(s->u,106,1,(rd(s->u,105,1)&((U)UINT64_C(0x1))));
L_1803db37f_9:;
wr(s->r,514,1,(rd(s->u,106,1)==((U)UINT64_C(0x0))));
L_1803db37f_10:;
/* 1803db383: lea rcx, [rax + r9*4] */
L_1803db383_0:;
L_1803db383_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803db383_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803db383_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803db383_4:;
/* 1803db387: mov rax, qword ptr [rdx - 8] */
L_1803db387_0:;
L_1803db387_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803db387_2:;
wr(s->u,88,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db387_3:;
wr(s->r,0,8,rd(s->u,88,8));
L_1803db387_4:;
/* 1803db38b: mov qword ptr [rsp + r8 + 0x1a8], rcx */
L_1803db38b_0:;
L_1803db38b_1:;
wr(s->u,56,8,(((U)UINT64_C(0x1a8))+rd(s->r,32,8)));
L_1803db38b_2:;
wr(s->u,64,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803db38b_3:;
wr(s->u,72,8,(rd(s->u,56,8)+rd(s->u,64,8)));
L_1803db38b_4:;
wr(s->u,80,8,rd(s->r,8,8));
L_1803db38b_5:;
mw((uint64_t)rd(s->u,72,8),8,rd(s->u,80,8));
L_1803db38b_6:;
/* 1803db393: lea rcx, [rax + r9*4] */
L_1803db393_0:;
L_1803db393_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803db393_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803db393_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803db393_4:;
/* 1803db397: mov qword ptr [rsp + r8 + 0x28], rcx */
L_1803db397_0:;
L_1803db397_1:;
wr(s->u,32,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803db397_2:;
wr(s->u,40,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803db397_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803db397_4:;
wr(s->u,80,8,rd(s->r,8,8));
L_1803db397_5:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,80,8));
L_1803db397_6:;
/* 1803db39c: jne 0x1803db370 */
L_1803db39c_0:;
L_1803db39c_1:;
wr(s->u,96,1,(!rd(s->r,518,1)));
L_1803db39c_2:;
if(rd(s->u,96,1)){goto L_1803db370_0;}
L_1803db39c_3:;
return UINT64_C(0x1803db39e);
}
uint64_t b_1803db39e(CPU*s){
/* 1803db39e: xorps xmm0, xmm0 */
L_1803db39e_0:;
L_1803db39e_1:;
wr(s->r,4608,4,(rd(s->r,4608,4)^rd(s->r,4608,4)));
L_1803db39e_2:;
wr(s->r,4612,4,(rd(s->r,4612,4)^rd(s->r,4612,4)));
L_1803db39e_3:;
wr(s->r,4616,4,(rd(s->r,4616,4)^rd(s->r,4616,4)));
L_1803db39e_4:;
wr(s->r,4620,4,(rd(s->r,4620,4)^rd(s->r,4620,4)));
L_1803db39e_5:;
/* 1803db3a1: mov rcx, qword ptr [rbx + 0x6718] */
L_1803db3a1_0:;
L_1803db3a1_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6718))));
L_1803db3a1_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db3a1_3:;
wr(s->r,8,8,rd(s->u,28,8));
L_1803db3a1_4:;
/* 1803db3a8: lea r9, [rsp + 0x30] */
L_1803db3a8_0:;
L_1803db3a8_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803db3a8_2:;
wr(s->r,136,8,rd(s->u,8,8));
L_1803db3a8_3:;
/* 1803db3ad: movss dword ptr [rsp + 0x28], xmm0 */
L_1803db3ad_0:;
L_1803db3ad_1:;
wr(s->u,8,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803db3ad_2:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803db3ad_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803db3ad_4:;
/* 1803db3b3: lea r8, [rsp + 0x1b0] */
L_1803db3b3_0:;
L_1803db3b3_1:;
wr(s->u,16,8,(((U)UINT64_C(0x1b0))+rd(s->r,32,8)));
L_1803db3b3_2:;
wr(s->r,128,8,rd(s->u,16,8));
L_1803db3b3_3:;
/* 1803db3bb: mov rdx, rdi */
L_1803db3bb_0:;
L_1803db3bb_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803db3bb_2:;
/* 1803db3be: mov dword ptr [rsp + 0x20], r13d */
L_1803db3be_0:;
L_1803db3be_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803db3be_2:;
wr(s->u,24,4,rd(s->r,168,4));
L_1803db3be_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803db3be_4:;
/* 1803db3c3: call 0x1803e2f70 */
L_1803db3c3_0:;
L_1803db3c3_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db3c3_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db3c8)));
L_1803db3c3_3:;
return (uint64_t)UINT64_C(0x1803e2f70);
L_1803db3c3_4:;
return UINT64_C(0x1803db3c8);
}
uint64_t b_1803db3c8(CPU*s){
/* 1803db3c8: add dword ptr [rbx + 0x64], eax */
L_1803db3c8_0:;
L_1803db3c8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x64))));
L_1803db3c8_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db3c8_3:;
wr(s->r,512,1,(((rd(s->u,8,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->u,8,4)));
L_1803db3c8_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db3c8_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,0,4),4,0));
L_1803db3c8_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db3c8_7:;
wr(s->u,8,4,(rd(s->u,8,4)+rd(s->r,0,4)));
L_1803db3c8_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803db3c8_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db3c8_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db3c8_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db3c8_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803db3c8_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db3c8_14:;
wr(s->u,16,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803db3c8_15:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803db3c8_16:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803db3c8_17:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803db3c8_18:;
/* 1803db3cb: mov eax, dword ptr [rbx + 0x64] */
L_1803db3cb_0:;
L_1803db3cb_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x64))));
L_1803db3cb_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db3cb_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803db3cb_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db3cb_5:;
/* 1803db3ce: mov dword ptr [rbx + 0x68], eax */
L_1803db3ce_0:;
L_1803db3ce_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x68))));
L_1803db3ce_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803db3ce_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803db3ce_4:;
/* 1803db3d1: jmp 0x1803db407 */
L_1803db3d1_0:;
L_1803db3d1_1:;
return UINT64_C(0x1803db407);
L_1803db3d1_2:;
return UINT64_C(0x1803db3d3);
}
uint64_t b_1803db3d3(CPU*s){
/* 1803db3d3: xorps xmm0, xmm0 */
L_1803db3d3_0:;
L_1803db3d3_1:;
wr(s->r,4608,4,(rd(s->r,4608,4)^rd(s->r,4608,4)));
L_1803db3d3_2:;
wr(s->r,4612,4,(rd(s->r,4612,4)^rd(s->r,4612,4)));
L_1803db3d3_3:;
wr(s->r,4616,4,(rd(s->r,4616,4)^rd(s->r,4616,4)));
L_1803db3d3_4:;
wr(s->r,4620,4,(rd(s->r,4620,4)^rd(s->r,4620,4)));
L_1803db3d3_5:;
/* 1803db3d6: mov rcx, qword ptr [rbx + 0x6718] */
L_1803db3d6_0:;
L_1803db3d6_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6718))));
L_1803db3d6_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db3d6_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803db3d6_4:;
/* 1803db3dd: lea r9, [rbx + 0x270] */
L_1803db3dd_0:;
L_1803db3dd_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x270))));
L_1803db3dd_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1803db3dd_3:;
/* 1803db3e4: movss dword ptr [rsp + 0x28], xmm0 */
L_1803db3e4_0:;
L_1803db3e4_1:;
wr(s->u,8,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803db3e4_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803db3e4_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803db3e4_4:;
/* 1803db3ea: lea r8, [rbx + 0xf0] */
L_1803db3ea_0:;
L_1803db3ea_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xf0))));
L_1803db3ea_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1803db3ea_3:;
/* 1803db3f1: mov rdx, rdi */
L_1803db3f1_0:;
L_1803db3f1_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803db3f1_2:;
/* 1803db3f4: mov dword ptr [rsp + 0x20], r13d */
L_1803db3f4_0:;
L_1803db3f4_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803db3f4_2:;
wr(s->u,16,4,rd(s->r,168,4));
L_1803db3f4_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803db3f4_4:;
/* 1803db3f9: call 0x1803e2f70 */
L_1803db3f9_0:;
L_1803db3f9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db3f9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db3fe)));
L_1803db3f9_3:;
return (uint64_t)UINT64_C(0x1803e2f70);
L_1803db3f9_4:;
return UINT64_C(0x1803db3fe);
}
uint64_t b_1803db3fe(CPU*s){
/* 1803db3fe: add dword ptr [rbx + 0x64], eax */
L_1803db3fe_0:;
L_1803db3fe_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x64))));
L_1803db3fe_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db3fe_3:;
wr(s->r,512,1,(((rd(s->u,8,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->u,8,4)));
L_1803db3fe_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db3fe_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,0,4),4,0));
L_1803db3fe_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db3fe_7:;
wr(s->u,8,4,(rd(s->u,8,4)+rd(s->r,0,4)));
L_1803db3fe_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803db3fe_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db3fe_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db3fe_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db3fe_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803db3fe_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db3fe_14:;
wr(s->u,17,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803db3fe_15:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803db3fe_16:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803db3fe_17:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803db3fe_18:;
/* 1803db401: mov eax, dword ptr [rbx + 0x64] */
L_1803db401_0:;
L_1803db401_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x64))));
L_1803db401_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db401_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803db401_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db401_5:;
/* 1803db404: mov dword ptr [rbx + 0x68], eax */
L_1803db404_0:;
L_1803db404_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x68))));
L_1803db404_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803db404_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803db404_4:;
/* 1803db407: cmp dword ptr [rbx + 0x4c], ebp */
L_1803db407_0:;
L_1803db407_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x4c))));
L_1803db407_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db407_3:;
wr(s->u,23,4,rd(s->u,12,4));
L_1803db407_4:;
wr(s->r,512,1,(rd(s->u,23,4)<rd(s->r,40,4)));
L_1803db407_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,23,4),rd(s->r,40,4),4,1));
L_1803db407_6:;
wr(s->u,27,4,(rd(s->u,23,4)-rd(s->r,40,4)));
L_1803db407_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db407_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803db407_9:;
wr(s->u,17,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803db407_10:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803db407_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803db407_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803db407_13:;
/* 1803db40a: jne 0x1803db47d */
L_1803db40a_0:;
L_1803db40a_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1803db40a_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803db47d);}
L_1803db40a_3:;
return UINT64_C(0x1803db40c);
}
uint64_t b_1803db407(CPU*s){
/* 1803db407: cmp dword ptr [rbx + 0x4c], ebp */
L_1803db407_0:;
L_1803db407_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x4c))));
L_1803db407_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db407_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803db407_4:;
wr(s->r,512,1,(rd(s->u,19,4)<rd(s->r,40,4)));
L_1803db407_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),rd(s->r,40,4),4,1));
L_1803db407_6:;
wr(s->u,23,4,(rd(s->u,19,4)-rd(s->r,40,4)));
L_1803db407_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db407_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803db407_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803db407_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803db407_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803db407_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803db407_13:;
/* 1803db40a: jne 0x1803db47d */
L_1803db40a_0:;
L_1803db40a_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803db40a_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803db47d);}
L_1803db40a_3:;
return UINT64_C(0x1803db40c);
}
uint64_t b_1803db40c(CPU*s){
/* 1803db40c: mov eax, dword ptr [rbx + 0x3c] */
L_1803db40c_0:;
L_1803db40c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803db40c_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db40c_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803db40c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db40c_5:;
/* 1803db40f: sar eax, 1 */
L_1803db40f_0:;
L_1803db40f_1:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803db40f_2:;
wr(s->r,512,1,(rd(s->u,32,4)!=((U)UINT64_C(0x0))));
L_1803db40f_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db40f_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803db40f_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db40f_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db40f_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803db40f_8:;
wr(s->u,18,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803db40f_9:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803db40f_10:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803db40f_11:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803db40f_12:;
/* 1803db411: sub dword ptr [rbx + 0x64], eax */
L_1803db411_0:;
L_1803db411_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x64))));
L_1803db411_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db411_3:;
wr(s->r,512,1,(rd(s->u,8,4)<rd(s->r,0,4)));
L_1803db411_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db411_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,0,4),4,1));
L_1803db411_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db411_7:;
wr(s->u,8,4,(rd(s->u,8,4)-rd(s->r,0,4)));
L_1803db411_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803db411_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db411_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db411_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db411_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803db411_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db411_14:;
wr(s->u,18,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803db411_15:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803db411_16:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803db411_17:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803db411_18:;
/* 1803db414: cmp dword ptr [rbx + 0x30], ebp */
L_1803db414_0:;
L_1803db414_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803db414_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db414_3:;
wr(s->u,24,4,rd(s->u,12,4));
L_1803db414_4:;
wr(s->r,512,1,(rd(s->u,24,4)<rd(s->r,40,4)));
L_1803db414_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,24,4),rd(s->r,40,4),4,1));
L_1803db414_6:;
wr(s->u,28,4,(rd(s->u,24,4)-rd(s->r,40,4)));
L_1803db414_7:;
wr(s->r,519,1,(sx(rd(s->u,28,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db414_8:;
wr(s->r,518,1,(rd(s->u,28,4)==((U)UINT64_C(0x0))));
L_1803db414_9:;
wr(s->u,18,4,(rd(s->u,28,4)&((U)UINT64_C(0xff))));
L_1803db414_10:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803db414_11:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803db414_12:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803db414_13:;
/* 1803db417: mov eax, dword ptr [rbx + 0x64] */
L_1803db417_0:;
L_1803db417_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x64))));
L_1803db417_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db417_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803db417_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db417_5:;
/* 1803db41a: mov dword ptr [rbx + 0x68], eax */
L_1803db41a_0:;
L_1803db41a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x68))));
L_1803db41a_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803db41a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803db41a_4:;
/* 1803db41d: jle 0x1803db475 */
L_1803db41d_0:;
L_1803db41d_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db41d_2:;
wr(s->u,17,1,((rd(s->r,518,1)!=0)||(rd(s->u,16,1)!=0)));
L_1803db41d_3:;
if(rd(s->u,17,1)){return UINT64_C(0x1803db475);}
L_1803db41d_4:;
return UINT64_C(0x1803db41f);
}
uint64_t b_1803db41f(CPU*s){
/* 1803db41f: lea rdi, [rbx + 0x270] */
L_1803db41f_0:;
L_1803db41f_1:;
wr(s->u,13,8,(rd(s->r,24,8)+((U)UINT64_C(0x270))));
L_1803db41f_2:;
wr(s->r,56,8,rd(s->u,13,8));
L_1803db41f_3:;
/* 1803db426: nop word ptr [rax + rax] */
L_1803db426_0:;
L_1803db426_1:;
wr(s->u,37,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803db426_2:;
wr(s->u,45,8,(rd(s->r,0,8)+rd(s->u,37,8)));
L_1803db426_3:;
/* 1803db430: movsxd rax, dword ptr [rbx + 0x3c] */
L_1803db430_0:;
L_1803db430_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803db430_2:;
wr(s->u,53,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803db430_3:;
wr(s->r,0,8,(U)sx(rd(s->u,53,4),4));
L_1803db430_4:;
/* 1803db434: mov rcx, qword ptr [rdi - 0x180] */
L_1803db434_0:;
L_1803db434_1:;
wr(s->u,13,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffe80))));
L_1803db434_2:;
wr(s->u,57,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803db434_3:;
wr(s->r,8,8,rd(s->u,57,8));
L_1803db434_4:;
/* 1803db43b: movsxd r8, dword ptr [rbx + 0x64] */
L_1803db43b_0:;
L_1803db43b_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x64))));
L_1803db43b_2:;
wr(s->u,53,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803db43b_3:;
wr(s->r,128,8,(U)sx(rd(s->u,53,4),4));
L_1803db43b_4:;
/* 1803db43f: sar rax, 1 */
L_1803db43f_0:;
L_1803db43f_1:;
wr(s->u,115,8,(rd(s->r,0,8)&((U)UINT64_C(0x1))));
L_1803db43f_2:;
wr(s->r,512,1,(rd(s->u,115,8)!=((U)UINT64_C(0x0))));
L_1803db43f_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db43f_4:;
wr(s->r,0,8,((((U)UINT64_C(0x1))>=64)?(sx(rd(s->r,0,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,0,8),8)>>((U)UINT64_C(0x1)))));
L_1803db43f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db43f_6:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803db43f_7:;
wr(s->u,65,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803db43f_8:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803db43f_9:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803db43f_10:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803db43f_11:;
/* 1803db442: shl r8, 2 */
L_1803db442_0:;
L_1803db442_1:;
wr(s->u,123,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803db442_2:;
wr(s->u,127,8,rd(s->r,128,8));
L_1803db442_3:;
wr(s->r,128,8,((rd(s->u,123,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,123,4))));
L_1803db442_4:;
wr(s->u,98,1,(rd(s->u,123,4)==((U)UINT64_C(0x0))));
L_1803db442_5:;
wr(s->u,99,4,(rd(s->u,123,4)-((U)UINT64_C(0x1))));
L_1803db442_6:;
wr(s->u,103,8,((rd(s->u,99,4)>=64)?0:(rd(s->u,127,8)<<rd(s->u,99,4))));
L_1803db442_7:;
wr(s->u,111,1,(sx(rd(s->u,103,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db442_8:;
wr(s->u,0,1,rd(s->u,98,1));
L_1803db442_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803db442_10:;
wr(s->u,2,1,(!rd(s->u,98,1)));
L_1803db442_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803db442_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,111,1)));
L_1803db442_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803db442_14:;
wr(s->u,112,1,(rd(s->u,123,4)==((U)UINT64_C(0x1))));
L_1803db442_15:;
wr(s->u,113,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db442_16:;
wr(s->u,114,1,(rd(s->r,512,1)^rd(s->u,113,1)));
L_1803db442_17:;
wr(s->u,0,1,rd(s->u,112,1));
L_1803db442_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,114,1)));
L_1803db442_19:;
wr(s->u,2,1,(!rd(s->u,112,1)));
L_1803db442_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803db442_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803db442_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803db442_23:;
wr(s->u,75,1,(rd(s->u,123,4)!=((U)UINT64_C(0x0))));
L_1803db442_24:;
wr(s->u,76,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db442_25:;
wr(s->u,77,1,(!rd(s->u,75,1)));
L_1803db442_26:;
wr(s->u,78,1,(rd(s->u,77,1)&rd(s->r,519,1)));
L_1803db442_27:;
wr(s->u,79,1,(rd(s->u,75,1)&rd(s->u,76,1)));
L_1803db442_28:;
wr(s->r,519,1,(rd(s->u,78,1)|rd(s->u,79,1)));
L_1803db442_29:;
wr(s->u,80,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803db442_30:;
wr(s->u,81,1,(!rd(s->u,75,1)));
L_1803db442_31:;
wr(s->u,82,1,(rd(s->u,81,1)&rd(s->r,518,1)));
L_1803db442_32:;
wr(s->u,83,1,(rd(s->u,75,1)&rd(s->u,80,1)));
L_1803db442_33:;
wr(s->r,518,1,(rd(s->u,82,1)|rd(s->u,83,1)));
L_1803db442_34:;
wr(s->u,84,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803db442_35:;
wr(s->u,92,1,pop(rd(s->u,84,8),8));
L_1803db442_36:;
wr(s->u,93,1,(rd(s->u,92,1)&((U)UINT64_C(0x1))));
L_1803db442_37:;
wr(s->u,94,1,(rd(s->u,93,1)==((U)UINT64_C(0x0))));
L_1803db442_38:;
wr(s->u,95,1,(!rd(s->u,75,1)));
L_1803db442_39:;
wr(s->u,96,1,(rd(s->u,95,1)&rd(s->r,514,1)));
L_1803db442_40:;
wr(s->u,97,1,(rd(s->u,75,1)&rd(s->u,94,1)));
L_1803db442_41:;
wr(s->r,514,1,(rd(s->u,96,1)|rd(s->u,97,1)));
L_1803db442_42:;
/* 1803db446: lea rdx, [rcx + rax*4] */
L_1803db446_0:;
L_1803db446_1:;
wr(s->u,21,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803db446_2:;
wr(s->u,29,8,(rd(s->r,8,8)+rd(s->u,21,8)));
L_1803db446_3:;
wr(s->r,16,8,rd(s->u,29,8));
L_1803db446_4:;
/* 1803db44a: call 0x180609ade */
L_1803db44a_0:;
L_1803db44a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db44a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db44f)));
L_1803db44a_3:;
return (uint64_t)UINT64_C(0x180609ade);
L_1803db44a_4:;
return UINT64_C(0x1803db44f);
}
uint64_t b_1803db430(CPU*s){
/* 1803db430: movsxd rax, dword ptr [rbx + 0x3c] */
L_1803db430_0:;
L_1803db430_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803db430_2:;
wr(s->u,37,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803db430_3:;
wr(s->r,0,8,(U)sx(rd(s->u,37,4),4));
L_1803db430_4:;
/* 1803db434: mov rcx, qword ptr [rdi - 0x180] */
L_1803db434_0:;
L_1803db434_1:;
wr(s->u,13,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffe80))));
L_1803db434_2:;
wr(s->u,41,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803db434_3:;
wr(s->r,8,8,rd(s->u,41,8));
L_1803db434_4:;
/* 1803db43b: movsxd r8, dword ptr [rbx + 0x64] */
L_1803db43b_0:;
L_1803db43b_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x64))));
L_1803db43b_2:;
wr(s->u,37,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803db43b_3:;
wr(s->r,128,8,(U)sx(rd(s->u,37,4),4));
L_1803db43b_4:;
/* 1803db43f: sar rax, 1 */
L_1803db43f_0:;
L_1803db43f_1:;
wr(s->u,99,8,(rd(s->r,0,8)&((U)UINT64_C(0x1))));
L_1803db43f_2:;
wr(s->r,512,1,(rd(s->u,99,8)!=((U)UINT64_C(0x0))));
L_1803db43f_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db43f_4:;
wr(s->r,0,8,((((U)UINT64_C(0x1))>=64)?(sx(rd(s->r,0,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,0,8),8)>>((U)UINT64_C(0x1)))));
L_1803db43f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db43f_6:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803db43f_7:;
wr(s->u,49,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803db43f_8:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803db43f_9:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803db43f_10:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803db43f_11:;
/* 1803db442: shl r8, 2 */
L_1803db442_0:;
L_1803db442_1:;
wr(s->u,107,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803db442_2:;
wr(s->u,111,8,rd(s->r,128,8));
L_1803db442_3:;
wr(s->r,128,8,((rd(s->u,107,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,107,4))));
L_1803db442_4:;
wr(s->u,82,1,(rd(s->u,107,4)==((U)UINT64_C(0x0))));
L_1803db442_5:;
wr(s->u,83,4,(rd(s->u,107,4)-((U)UINT64_C(0x1))));
L_1803db442_6:;
wr(s->u,87,8,((rd(s->u,83,4)>=64)?0:(rd(s->u,111,8)<<rd(s->u,83,4))));
L_1803db442_7:;
wr(s->u,95,1,(sx(rd(s->u,87,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db442_8:;
wr(s->u,0,1,rd(s->u,82,1));
L_1803db442_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803db442_10:;
wr(s->u,2,1,(!rd(s->u,82,1)));
L_1803db442_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803db442_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,95,1)));
L_1803db442_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803db442_14:;
wr(s->u,96,1,(rd(s->u,107,4)==((U)UINT64_C(0x1))));
L_1803db442_15:;
wr(s->u,97,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db442_16:;
wr(s->u,98,1,(rd(s->r,512,1)^rd(s->u,97,1)));
L_1803db442_17:;
wr(s->u,0,1,rd(s->u,96,1));
L_1803db442_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,98,1)));
L_1803db442_19:;
wr(s->u,2,1,(!rd(s->u,96,1)));
L_1803db442_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803db442_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803db442_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803db442_23:;
wr(s->u,59,1,(rd(s->u,107,4)!=((U)UINT64_C(0x0))));
L_1803db442_24:;
wr(s->u,60,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db442_25:;
wr(s->u,61,1,(!rd(s->u,59,1)));
L_1803db442_26:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,519,1)));
L_1803db442_27:;
wr(s->u,63,1,(rd(s->u,59,1)&rd(s->u,60,1)));
L_1803db442_28:;
wr(s->r,519,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803db442_29:;
wr(s->u,64,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803db442_30:;
wr(s->u,65,1,(!rd(s->u,59,1)));
L_1803db442_31:;
wr(s->u,66,1,(rd(s->u,65,1)&rd(s->r,518,1)));
L_1803db442_32:;
wr(s->u,67,1,(rd(s->u,59,1)&rd(s->u,64,1)));
L_1803db442_33:;
wr(s->r,518,1,(rd(s->u,66,1)|rd(s->u,67,1)));
L_1803db442_34:;
wr(s->u,68,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803db442_35:;
wr(s->u,76,1,pop(rd(s->u,68,8),8));
L_1803db442_36:;
wr(s->u,77,1,(rd(s->u,76,1)&((U)UINT64_C(0x1))));
L_1803db442_37:;
wr(s->u,78,1,(rd(s->u,77,1)==((U)UINT64_C(0x0))));
L_1803db442_38:;
wr(s->u,79,1,(!rd(s->u,59,1)));
L_1803db442_39:;
wr(s->u,80,1,(rd(s->u,79,1)&rd(s->r,514,1)));
L_1803db442_40:;
wr(s->u,81,1,(rd(s->u,59,1)&rd(s->u,78,1)));
L_1803db442_41:;
wr(s->r,514,1,(rd(s->u,80,1)|rd(s->u,81,1)));
L_1803db442_42:;
/* 1803db446: lea rdx, [rcx + rax*4] */
L_1803db446_0:;
L_1803db446_1:;
wr(s->u,21,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803db446_2:;
wr(s->u,29,8,(rd(s->r,8,8)+rd(s->u,21,8)));
L_1803db446_3:;
wr(s->r,16,8,rd(s->u,29,8));
L_1803db446_4:;
/* 1803db44a: call 0x180609ade */
L_1803db44a_0:;
L_1803db44a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db44a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db44f)));
L_1803db44a_3:;
return (uint64_t)UINT64_C(0x180609ade);
L_1803db44a_4:;
return UINT64_C(0x1803db44f);
}
uint64_t b_1803db44f(CPU*s){
/* 1803db44f: movsxd rax, dword ptr [rbx + 0x3c] */
L_1803db44f_0:;
L_1803db44f_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803db44f_2:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803db44f_3:;
wr(s->r,0,8,(U)sx(rd(s->u,29,4),4));
L_1803db44f_4:;
/* 1803db453: mov rcx, qword ptr [rdi] */
L_1803db453_0:;
L_1803db453_1:;
wr(s->u,33,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803db453_2:;
wr(s->r,8,8,rd(s->u,33,8));
L_1803db453_3:;
/* 1803db456: movsxd r8, dword ptr [rbx + 0x64] */
L_1803db456_0:;
L_1803db456_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x64))));
L_1803db456_2:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803db456_3:;
wr(s->r,128,8,(U)sx(rd(s->u,29,4),4));
L_1803db456_4:;
/* 1803db45a: sar rax, 1 */
L_1803db45a_0:;
L_1803db45a_1:;
wr(s->u,91,8,(rd(s->r,0,8)&((U)UINT64_C(0x1))));
L_1803db45a_2:;
wr(s->r,512,1,(rd(s->u,91,8)!=((U)UINT64_C(0x0))));
L_1803db45a_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db45a_4:;
wr(s->r,0,8,((((U)UINT64_C(0x1))>=64)?(sx(rd(s->r,0,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,0,8),8)>>((U)UINT64_C(0x1)))));
L_1803db45a_5:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db45a_6:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803db45a_7:;
wr(s->u,41,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803db45a_8:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803db45a_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803db45a_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803db45a_11:;
/* 1803db45d: lea rdx, [rcx + rax*4] */
L_1803db45d_0:;
L_1803db45d_1:;
wr(s->u,13,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803db45d_2:;
wr(s->u,21,8,(rd(s->r,8,8)+rd(s->u,13,8)));
L_1803db45d_3:;
wr(s->r,16,8,rd(s->u,21,8));
L_1803db45d_4:;
/* 1803db461: shl r8, 2 */
L_1803db461_0:;
L_1803db461_1:;
wr(s->u,99,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803db461_2:;
wr(s->u,103,8,rd(s->r,128,8));
L_1803db461_3:;
wr(s->r,128,8,((rd(s->u,99,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,99,4))));
L_1803db461_4:;
wr(s->u,74,1,(rd(s->u,99,4)==((U)UINT64_C(0x0))));
L_1803db461_5:;
wr(s->u,75,4,(rd(s->u,99,4)-((U)UINT64_C(0x1))));
L_1803db461_6:;
wr(s->u,79,8,((rd(s->u,75,4)>=64)?0:(rd(s->u,103,8)<<rd(s->u,75,4))));
L_1803db461_7:;
wr(s->u,87,1,(sx(rd(s->u,79,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db461_8:;
wr(s->u,0,1,rd(s->u,74,1));
L_1803db461_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803db461_10:;
wr(s->u,2,1,(!rd(s->u,74,1)));
L_1803db461_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803db461_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,87,1)));
L_1803db461_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803db461_14:;
wr(s->u,88,1,(rd(s->u,99,4)==((U)UINT64_C(0x1))));
L_1803db461_15:;
wr(s->u,89,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db461_16:;
wr(s->u,90,1,(rd(s->r,512,1)^rd(s->u,89,1)));
L_1803db461_17:;
wr(s->u,0,1,rd(s->u,88,1));
L_1803db461_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,90,1)));
L_1803db461_19:;
wr(s->u,2,1,(!rd(s->u,88,1)));
L_1803db461_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803db461_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803db461_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803db461_23:;
wr(s->u,51,1,(rd(s->u,99,4)!=((U)UINT64_C(0x0))));
L_1803db461_24:;
wr(s->u,52,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db461_25:;
wr(s->u,53,1,(!rd(s->u,51,1)));
L_1803db461_26:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,519,1)));
L_1803db461_27:;
wr(s->u,55,1,(rd(s->u,51,1)&rd(s->u,52,1)));
L_1803db461_28:;
wr(s->r,519,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1803db461_29:;
wr(s->u,56,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803db461_30:;
wr(s->u,57,1,(!rd(s->u,51,1)));
L_1803db461_31:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,518,1)));
L_1803db461_32:;
wr(s->u,59,1,(rd(s->u,51,1)&rd(s->u,56,1)));
L_1803db461_33:;
wr(s->r,518,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803db461_34:;
wr(s->u,60,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803db461_35:;
wr(s->u,68,1,pop(rd(s->u,60,8),8));
L_1803db461_36:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803db461_37:;
wr(s->u,70,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803db461_38:;
wr(s->u,71,1,(!rd(s->u,51,1)));
L_1803db461_39:;
wr(s->u,72,1,(rd(s->u,71,1)&rd(s->r,514,1)));
L_1803db461_40:;
wr(s->u,73,1,(rd(s->u,51,1)&rd(s->u,70,1)));
L_1803db461_41:;
wr(s->r,514,1,(rd(s->u,72,1)|rd(s->u,73,1)));
L_1803db461_42:;
/* 1803db465: call 0x180609ade */
L_1803db465_0:;
L_1803db465_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db465_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db46a)));
L_1803db465_3:;
return (uint64_t)UINT64_C(0x180609ade);
L_1803db465_4:;
return UINT64_C(0x1803db46a);
}
uint64_t b_1803db46a(CPU*s){
/* 1803db46a: inc ebp */
L_1803db46a_0:;
L_1803db46a_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),((U)UINT64_C(0x1)),4,0));
L_1803db46a_2:;
wr(s->r,40,4,(rd(s->r,40,4)+((U)UINT64_C(0x1))));
L_1803db46a_3:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803db46a_4:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db46a_5:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803db46a_6:;
wr(s->u,13,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803db46a_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803db46a_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803db46a_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803db46a_10:;
/* 1803db46c: add rdi, 8 */
L_1803db46c_0:;
L_1803db46c_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803db46c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x8)),8,0));
L_1803db46c_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803db46c_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db46c_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803db46c_6:;
wr(s->u,13,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803db46c_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803db46c_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803db46c_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803db46c_10:;
/* 1803db470: cmp ebp, dword ptr [rbx + 0x30] */
L_1803db470_0:;
L_1803db470_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803db470_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db470_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803db470_4:;
wr(s->r,512,1,(rd(s->r,40,4)<rd(s->u,23,4)));
L_1803db470_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->u,23,4),4,1));
L_1803db470_6:;
wr(s->u,27,4,(rd(s->r,40,4)-rd(s->u,23,4)));
L_1803db470_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db470_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803db470_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803db470_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803db470_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803db470_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803db470_13:;
/* 1803db473: jl 0x1803db430 */
L_1803db473_0:;
L_1803db473_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db473_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803db430);}
L_1803db473_3:;
return UINT64_C(0x1803db475);
}
uint64_t b_1803db475(CPU*s){
/* 1803db475: mov eax, dword ptr [rbx + 0x3c] */
L_1803db475_0:;
L_1803db475_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803db475_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db475_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1803db475_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db475_5:;
/* 1803db478: sar eax, 1 */
L_1803db478_0:;
L_1803db478_1:;
wr(s->u,50,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803db478_2:;
wr(s->r,512,1,(rd(s->u,50,4)!=((U)UINT64_C(0x0))));
L_1803db478_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db478_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803db478_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db478_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db478_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803db478_8:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803db478_9:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803db478_10:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803db478_11:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803db478_12:;
/* 1803db47a: sub dword ptr [rbx + 0x50], eax */
L_1803db47a_0:;
L_1803db47a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x50))));
L_1803db47a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db47a_3:;
wr(s->r,512,1,(rd(s->u,16,4)<rd(s->r,0,4)));
L_1803db47a_4:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db47a_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,16,4),rd(s->r,0,4),4,1));
L_1803db47a_6:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db47a_7:;
wr(s->u,16,4,(rd(s->u,16,4)-rd(s->r,0,4)));
L_1803db47a_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803db47a_9:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db47a_10:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db47a_11:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db47a_12:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_1803db47a_13:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db47a_14:;
wr(s->u,32,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_1803db47a_15:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803db47a_16:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803db47a_17:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803db47a_18:;
/* 1803db47d: xor eax, eax */
L_1803db47d_0:;
L_1803db47d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db47d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db47d_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803db47d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db47d_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db47d_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803db47d_7:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803db47d_8:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803db47d_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803db47d_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803db47d_11:;
/* 1803db47f: mov rbp, qword ptr [rsp + 0x350] */
L_1803db47f_0:;
L_1803db47f_1:;
wr(s->u,8,8,(((U)UINT64_C(0x350))+rd(s->r,32,8)));
L_1803db47f_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db47f_3:;
wr(s->r,40,8,rd(s->u,24,8));
L_1803db47f_4:;
/* 1803db487: add rsp, 0x330 */
L_1803db487_0:;
L_1803db487_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x330)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803db487_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x330)),8,0));
L_1803db487_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x330))));
L_1803db487_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db487_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803db487_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803db487_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803db487_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803db487_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803db487_10:;
/* 1803db48e: pop r13 */
L_1803db48e_0:;
L_1803db48e_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803db48e_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db48e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db48e_4:;
wr(s->r,168,8,rd(s->u,42,8));
L_1803db48e_5:;
/* 1803db490: pop rdi */
L_1803db490_0:;
L_1803db490_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803db490_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db490_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db490_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803db490_5:;
/* 1803db491: pop rbx */
L_1803db491_0:;
L_1803db491_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803db491_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db491_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db491_4:;
wr(s->r,24,8,rd(s->u,42,8));
L_1803db491_5:;
/* 1803db492: ret  */
L_1803db492_0:;
L_1803db492_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db492_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db492_3:;
return (uint64_t)rd(s->r,648,8);
L_1803db492_4:;
return UINT64_C(0x1803db493);
}
uint64_t b_1803db47d(CPU*s){
/* 1803db47d: xor eax, eax */
L_1803db47d_0:;
L_1803db47d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db47d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db47d_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803db47d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db47d_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db47d_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803db47d_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803db47d_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803db47d_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803db47d_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803db47d_11:;
/* 1803db47f: mov rbp, qword ptr [rsp + 0x350] */
L_1803db47f_0:;
L_1803db47f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x350))+rd(s->r,32,8)));
L_1803db47f_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db47f_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803db47f_4:;
/* 1803db487: add rsp, 0x330 */
L_1803db487_0:;
L_1803db487_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x330)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803db487_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x330)),8,0));
L_1803db487_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x330))));
L_1803db487_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db487_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803db487_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803db487_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803db487_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803db487_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803db487_10:;
/* 1803db48e: pop r13 */
L_1803db48e_0:;
L_1803db48e_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803db48e_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db48e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db48e_4:;
wr(s->r,168,8,rd(s->u,26,8));
L_1803db48e_5:;
/* 1803db490: pop rdi */
L_1803db490_0:;
L_1803db490_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803db490_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db490_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db490_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803db490_5:;
/* 1803db491: pop rbx */
L_1803db491_0:;
L_1803db491_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803db491_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db491_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db491_4:;
wr(s->r,24,8,rd(s->u,26,8));
L_1803db491_5:;
/* 1803db492: ret  */
L_1803db492_0:;
L_1803db492_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db492_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db492_3:;
return (uint64_t)rd(s->r,648,8);
L_1803db492_4:;
return UINT64_C(0x1803db493);
}
uint64_t b_1803db4a0(CPU*s){
/* 1803db4a0: mov qword ptr [rsp + 8], rbx */
L_1803db4a0_0:;
L_1803db4a0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803db4a0_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803db4a0_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803db4a0_4:;
/* 1803db4a5: push rdi */
L_1803db4a5_0:;
L_1803db4a5_1:;
wr(s->u,32,8,rd(s->r,56,8));
L_1803db4a5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db4a5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,32,8));
L_1803db4a5_4:;
/* 1803db4a6: sub rsp, 0x20 */
L_1803db4a6_0:;
L_1803db4a6_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803db4a6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803db4a6_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803db4a6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db4a6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803db4a6_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803db4a6_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803db4a6_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803db4a6_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803db4a6_10:;
/* 1803db4aa: mov rdi, rcx */
L_1803db4aa_0:;
L_1803db4aa_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803db4aa_2:;
/* 1803db4ad: mov rcx, qword ptr [rcx + 0x66f0] */
L_1803db4ad_0:;
L_1803db4ad_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x66f0))));
L_1803db4ad_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db4ad_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803db4ad_4:;
/* 1803db4b4: call 0x1803da8c0 */
L_1803db4b4_0:;
L_1803db4b4_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db4b4_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db4b9)));
L_1803db4b4_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803db4b4_4:;
return UINT64_C(0x1803db4b9);
}
uint64_t b_1803db4b9(CPU*s){
/* 1803db4b9: mov r11d, eax */
L_1803db4b9_0:;
L_1803db4b9_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803db4b9_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803db4b9_3:;
/* 1803db4bc: mov eax, dword ptr [rdi + 0x3c] */
L_1803db4bc_0:;
L_1803db4bc_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c))));
L_1803db4bc_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db4bc_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803db4bc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db4bc_5:;
/* 1803db4bf: sar eax, 1 */
L_1803db4bf_0:;
L_1803db4bf_1:;
wr(s->u,91,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803db4bf_2:;
wr(s->r,512,1,(rd(s->u,91,4)!=((U)UINT64_C(0x0))));
L_1803db4bf_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db4bf_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803db4bf_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db4bf_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db4bf_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803db4bf_8:;
wr(s->u,13,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803db4bf_9:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803db4bf_10:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803db4bf_11:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803db4bf_12:;
/* 1803db4c1: cdq  */
L_1803db4c1_0:;
L_1803db4c1_1:;
wr(s->u,19,8,(U)sx(rd(s->r,0,4),4));
L_1803db4c1_2:;
wr(s->r,16,4,(rd(s->u,19,8) >> (((U)UINT64_C(0x4))*8)));
L_1803db4c1_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803db4c1_4:;
/* 1803db4c2: idiv r11d */
L_1803db4c2_0:;
L_1803db4c2_1:;
wr(s->u,35,8,(U)sx(rd(s->r,152,4),4));
L_1803db4c2_2:;
wr(s->u,43,8,rd(s->r,16,4));
L_1803db4c2_3:;
wr(s->u,51,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,43,8)<<((U)UINT64_C(0x20)))));
L_1803db4c2_4:;
wr(s->u,59,8,rd(s->r,0,4));
L_1803db4c2_5:;
wr(s->u,67,8,(rd(s->u,51,8)|rd(s->u,59,8)));
L_1803db4c2_6:;
wr(s->u,75,8,((U)(sx(rd(s->u,67,8),8)/sx(rd(s->u,35,8),8))));
L_1803db4c2_7:;
wr(s->r,0,4,(rd(s->u,75,8) >> (((U)UINT64_C(0x0))*8)));
L_1803db4c2_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db4c2_9:;
wr(s->u,83,8,((U)(sx(rd(s->u,67,8),8)%sx(rd(s->u,35,8),8))));
L_1803db4c2_10:;
wr(s->r,16,4,(rd(s->u,83,8) >> (((U)UINT64_C(0x0))*8)));
L_1803db4c2_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803db4c2_12:;
/* 1803db4c5: cmp eax, 1 */
L_1803db4c5_0:;
L_1803db4c5_1:;
wr(s->u,27,4,rd(s->r,0,4));
L_1803db4c5_2:;
wr(s->r,512,1,(rd(s->u,27,4)<((U)UINT64_C(0x1))));
L_1803db4c5_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,27,4),((U)UINT64_C(0x1)),4,1));
L_1803db4c5_4:;
wr(s->u,31,4,(rd(s->u,27,4)-((U)UINT64_C(0x1))));
L_1803db4c5_5:;
wr(s->r,519,1,(sx(rd(s->u,31,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db4c5_6:;
wr(s->r,518,1,(rd(s->u,31,4)==((U)UINT64_C(0x0))));
L_1803db4c5_7:;
wr(s->u,13,4,(rd(s->u,31,4)&((U)UINT64_C(0xff))));
L_1803db4c5_8:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803db4c5_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803db4c5_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803db4c5_11:;
/* 1803db4c8: jge 0x1803db4d1 */
L_1803db4c8_0:;
L_1803db4c8_1:;
wr(s->u,12,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803db4c8_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803db4d1);}
L_1803db4c8_3:;
return UINT64_C(0x1803db4ca);
}
uint64_t b_1803db4ca(CPU*s){
/* 1803db4ca: mov ebx, 1 */
L_1803db4ca_0:;
L_1803db4ca_1:;
wr(s->r,24,8,((U)UINT64_C(0x1)));
L_1803db4ca_2:;
/* 1803db4cf: jmp 0x1803db4eb */
L_1803db4cf_0:;
L_1803db4cf_1:;
return UINT64_C(0x1803db4eb);
L_1803db4cf_2:;
return UINT64_C(0x1803db4d1);
}
uint64_t b_1803db4d1(CPU*s){
/* 1803db4d1: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803db4d1_0:;
L_1803db4d1_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803db4d1_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db4d1_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803db4d1_4:;
/* 1803db4d8: call 0x1803da8c0 */
L_1803db4d8_0:;
L_1803db4d8_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db4d8_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db4dd)));
L_1803db4d8_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803db4d8_4:;
return UINT64_C(0x1803db4dd);
}
uint64_t b_1803db4dd(CPU*s){
/* 1803db4dd: mov r11d, eax */
L_1803db4dd_0:;
L_1803db4dd_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803db4dd_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803db4dd_3:;
/* 1803db4e0: mov eax, dword ptr [rdi + 0x3c] */
L_1803db4e0_0:;
L_1803db4e0_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c))));
L_1803db4e0_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db4e0_3:;
wr(s->r,0,4,rd(s->u,16,4));
L_1803db4e0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db4e0_5:;
/* 1803db4e3: sar eax, 1 */
L_1803db4e3_0:;
L_1803db4e3_1:;
wr(s->u,98,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803db4e3_2:;
wr(s->r,512,1,(rd(s->u,98,4)!=((U)UINT64_C(0x0))));
L_1803db4e3_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db4e3_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803db4e3_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db4e3_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db4e3_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803db4e3_8:;
wr(s->u,28,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803db4e3_9:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803db4e3_10:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803db4e3_11:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803db4e3_12:;
/* 1803db4e5: cdq  */
L_1803db4e5_0:;
L_1803db4e5_1:;
wr(s->u,34,8,(U)sx(rd(s->r,0,4),4));
L_1803db4e5_2:;
wr(s->r,16,4,(rd(s->u,34,8) >> (((U)UINT64_C(0x4))*8)));
L_1803db4e5_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803db4e5_4:;
/* 1803db4e6: idiv r11d */
L_1803db4e6_0:;
L_1803db4e6_1:;
wr(s->u,42,8,(U)sx(rd(s->r,152,4),4));
L_1803db4e6_2:;
wr(s->u,50,8,rd(s->r,16,4));
L_1803db4e6_3:;
wr(s->u,58,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,50,8)<<((U)UINT64_C(0x20)))));
L_1803db4e6_4:;
wr(s->u,66,8,rd(s->r,0,4));
L_1803db4e6_5:;
wr(s->u,74,8,(rd(s->u,58,8)|rd(s->u,66,8)));
L_1803db4e6_6:;
wr(s->u,82,8,((U)(sx(rd(s->u,74,8),8)/sx(rd(s->u,42,8),8))));
L_1803db4e6_7:;
wr(s->r,0,4,(rd(s->u,82,8) >> (((U)UINT64_C(0x0))*8)));
L_1803db4e6_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db4e6_9:;
wr(s->u,90,8,((U)(sx(rd(s->u,74,8),8)%sx(rd(s->u,42,8),8))));
L_1803db4e6_10:;
wr(s->r,16,4,(rd(s->u,90,8) >> (((U)UINT64_C(0x0))*8)));
L_1803db4e6_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803db4e6_12:;
/* 1803db4e9: mov ebx, eax */
L_1803db4e9_0:;
L_1803db4e9_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803db4e9_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803db4e9_3:;
/* 1803db4eb: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803db4eb_0:;
L_1803db4eb_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803db4eb_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db4eb_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803db4eb_4:;
/* 1803db4f2: call 0x1803da8e0 */
L_1803db4f2_0:;
L_1803db4f2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db4f2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db4f7)));
L_1803db4f2_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803db4f2_4:;
return UINT64_C(0x1803db4f7);
}
uint64_t b_1803db4eb(CPU*s){
/* 1803db4eb: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803db4eb_0:;
L_1803db4eb_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803db4eb_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db4eb_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803db4eb_4:;
/* 1803db4f2: call 0x1803da8e0 */
L_1803db4f2_0:;
L_1803db4f2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db4f2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db4f7)));
L_1803db4f2_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803db4f2_4:;
return UINT64_C(0x1803db4f7);
}
uint64_t b_1803db4f7(CPU*s){
/* 1803db4f7: imul eax, ebx */
L_1803db4f7_0:;
L_1803db4f7_1:;
wr(s->u,34,8,(U)sx(rd(s->r,0,4),4));
L_1803db4f7_2:;
wr(s->u,42,8,(U)sx(rd(s->r,24,4),4));
L_1803db4f7_3:;
wr(s->u,50,8,(rd(s->u,34,8)*rd(s->u,42,8)));
L_1803db4f7_4:;
wr(s->r,0,4,(rd(s->u,50,8) >> (((U)UINT64_C(0x0))*8)));
L_1803db4f7_5:;
wr(s->u,58,4,(rd(s->u,50,8) >> (((U)UINT64_C(0x4))*8)));
L_1803db4f7_6:;
wr(s->u,26,8,(U)sx(rd(s->r,0,4),4));
L_1803db4f7_7:;
wr(s->r,512,1,(rd(s->u,26,8)!=rd(s->u,50,8)));
L_1803db4f7_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803db4f7_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db4f7_10:;
/* 1803db4fa: mov rbx, qword ptr [rsp + 0x30] */
L_1803db4fa_0:;
L_1803db4fa_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803db4fa_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db4fa_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803db4fa_4:;
/* 1803db4ff: add rsp, 0x20 */
L_1803db4ff_0:;
L_1803db4ff_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803db4ff_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803db4ff_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803db4ff_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db4ff_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803db4ff_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803db4ff_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803db4ff_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803db4ff_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803db4ff_10:;
/* 1803db503: pop rdi */
L_1803db503_0:;
L_1803db503_1:;
wr(s->u,62,8,((U)UINT64_C(0x0)));
L_1803db503_2:;
wr(s->u,62,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db503_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db503_4:;
wr(s->r,56,8,rd(s->u,62,8));
L_1803db503_5:;
/* 1803db504: ret  */
L_1803db504_0:;
L_1803db504_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db504_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db504_3:;
return (uint64_t)rd(s->r,648,8);
L_1803db504_4:;
return UINT64_C(0x1803db505);
}
uint64_t b_1803db510(CPU*s){
/* 1803db510: movsd xmm3, qword ptr [rcx + 0xa0] */
L_1803db510_0:;
L_1803db510_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xa0))));
L_1803db510_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db510_3:;
wr(s->r,4800,8,rd(s->u,8,8));
L_1803db510_4:;
wr(s->r,4808,8,((U)UINT64_C(0x0)));
L_1803db510_5:;
/* 1803db518: movsd xmm1, qword ptr [rcx + 0xa8] */
L_1803db518_0:;
L_1803db518_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xa8))));
L_1803db518_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db518_3:;
wr(s->r,4672,8,rd(s->u,8,8));
L_1803db518_4:;
wr(s->r,4680,8,((U)UINT64_C(0x0)));
L_1803db518_5:;
/* 1803db520: movapd xmm0, xmm3 */
L_1803db520_0:;
L_1803db520_1:;
wr(s->r,4608,8,rd(s->r,4800,8));
L_1803db520_2:;
wr(s->r,4616,8,rd(s->r,4808,8));
L_1803db520_3:;
/* 1803db524: subsd xmm0, xmm1 */
L_1803db524_0:;
L_1803db524_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)-fv(rd(s->r,4672,8),8),8));
L_1803db524_2:;
/* 1803db528: cvttsd2si eax, xmm0 */
L_1803db528_0:;
L_1803db528_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,8),8),4));
L_1803db528_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db528_3:;
/* 1803db52c: test eax, eax */
L_1803db52c_0:;
L_1803db52c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db52c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db52c_3:;
wr(s->u,22,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803db52c_4:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db52c_5:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803db52c_6:;
wr(s->u,16,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803db52c_7:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803db52c_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803db52c_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803db52c_10:;
/* 1803db52e: je 0x1803db59c */
L_1803db52e_0:;
L_1803db52e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803db59c);}
L_1803db52e_2:;
return UINT64_C(0x1803db530);
}
uint64_t b_1803db530(CPU*s){
/* 1803db530: addsd xmm3, qword ptr [rcx + 0xb0] */
L_1803db530_0:;
L_1803db530_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0xb0))));
L_1803db530_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db530_3:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->u,16,8),8),8));
L_1803db530_4:;
/* 1803db538: movd xmm2, dword ptr [rcx + 0x3c] */
L_1803db538_0:;
L_1803db538_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x3c))));
L_1803db538_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db538_3:;
wr(s->r,4736,16,rd(s->u,24,4));
L_1803db538_4:;
/* 1803db53d: subsd xmm3, xmm1 */
L_1803db53d_0:;
L_1803db53d_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)-fv(rd(s->r,4672,8),8),8));
L_1803db53d_2:;
/* 1803db541: cvtdq2pd xmm2, xmm2 */
L_1803db541_0:;
L_1803db541_1:;
wr(s->u,50,8,rd(s->r,4736,8));
L_1803db541_2:;
wr(s->r,4736,8,fb((double)sx(rd(s->u,50,4),4),8));
L_1803db541_3:;
wr(s->r,4744,8,fb((double)sx(rd(s->u,54,4),4),8));
L_1803db541_4:;
/* 1803db545: movapd xmm0, xmm3 */
L_1803db545_0:;
L_1803db545_1:;
wr(s->r,4608,8,rd(s->r,4800,8));
L_1803db545_2:;
wr(s->r,4616,8,rd(s->r,4808,8));
L_1803db545_3:;
/* 1803db549: andpd xmm0, xmmword ptr [rip + 0x27727f] */
L_1803db549_0:;
L_1803db549_1:;
wr(s->u,34,16,mr(UINT64_C(0x1806527d0),16));
L_1803db549_2:;
wr(s->r,4608,8,(rd(s->r,4608,8)&rd(s->u,34,8)));
L_1803db549_3:;
wr(s->r,4616,8,(rd(s->r,4616,8)&rd(s->u,42,8)));
L_1803db549_4:;
/* 1803db551: mulsd xmm0, qword ptr [rip + 0x430fa7] */
L_1803db551_0:;
L_1803db551_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(mr(UINT64_C(0x18080c500),8),8),8));
L_1803db551_2:;
/* 1803db559: comisd xmm2, xmm0 */
L_1803db559_0:;
L_1803db559_1:;
wr(s->u,30,1,isnan(fv(rd(s->r,4736,8),8)));
L_1803db559_2:;
wr(s->u,31,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803db559_3:;
wr(s->r,514,1,((rd(s->u,30,1)!=0)||(rd(s->u,31,1)!=0)));
L_1803db559_4:;
wr(s->u,32,1,(fv(rd(s->r,4736,8),8)==fv(rd(s->r,4608,8),8)));
L_1803db559_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,32,1)));
L_1803db559_6:;
wr(s->u,33,1,(fv(rd(s->r,4736,8),8)<fv(rd(s->r,4608,8),8)));
L_1803db559_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,33,1)));
L_1803db559_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db559_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803db559_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803db559_11:;
/* 1803db55d: ja 0x1803db563 */
L_1803db55d_0:;
L_1803db55d_1:;
wr(s->u,28,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803db55d_2:;
wr(s->u,29,1,(!rd(s->u,28,1)));
L_1803db55d_3:;
if(rd(s->u,29,1)){return UINT64_C(0x1803db563);}
L_1803db55d_4:;
return UINT64_C(0x1803db55f);
}
uint64_t b_1803db55f(CPU*s){
/* 1803db55f: movapd xmm2, xmm0 */
L_1803db55f_0:;
L_1803db55f_1:;
wr(s->r,4736,8,rd(s->r,4608,8));
L_1803db55f_2:;
wr(s->r,4744,8,rd(s->r,4616,8));
L_1803db55f_3:;
/* 1803db563: cvtsd2ss xmm0, xmm2 */
L_1803db563_0:;
L_1803db563_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4736,8),8),4));
L_1803db563_2:;
/* 1803db567: movss xmm2, dword ptr [rcx + 0x24] */
L_1803db567_0:;
L_1803db567_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x24))));
L_1803db567_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db567_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803db567_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803db567_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803db567_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803db567_7:;
/* 1803db56c: movss dword ptr [rcx + 0xb8], xmm0 */
L_1803db56c_0:;
L_1803db56c_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0xb8))));
L_1803db56c_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803db56c_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803db56c_4:;
/* 1803db574: unpcklps xmm0, xmm0 */
L_1803db574_0:;
L_1803db574_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803db574_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803db574_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803db574_4:;
/* 1803db577: cvtps2pd xmm1, xmm0 */
L_1803db577_0:;
L_1803db577_1:;
wr(s->u,26,8,rd(s->r,4608,8));
L_1803db577_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,26,4),4),8));
L_1803db577_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,30,4),4),8));
L_1803db577_4:;
/* 1803db57a: unpcklps xmm0, xmm0 */
L_1803db57a_0:;
L_1803db57a_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803db57a_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803db57a_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803db57a_4:;
/* 1803db57d: addsd xmm1, xmm3 */
L_1803db57d_0:;
L_1803db57d_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803db57d_2:;
/* 1803db581: cvtps2pd xmm0, xmm0 */
L_1803db581_0:;
L_1803db581_1:;
wr(s->u,26,8,rd(s->r,4608,8));
L_1803db581_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,26,4),4),8));
L_1803db581_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,30,4),4),8));
L_1803db581_4:;
/* 1803db584: divsd xmm1, xmm0 */
L_1803db584_0:;
L_1803db584_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)/fv(rd(s->r,4608,8),8),8));
L_1803db584_2:;
/* 1803db588: cvtsd2ss xmm3, xmm1 */
L_1803db588_0:;
L_1803db588_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4672,8),8),4));
L_1803db588_2:;
/* 1803db58c: mulss xmm3, xmm2 */
L_1803db58c_0:;
L_1803db58c_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803db58c_2:;
/* 1803db590: comiss xmm2, xmm3 */
L_1803db590_0:;
L_1803db590_1:;
wr(s->u,22,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803db590_2:;
wr(s->u,23,1,isnan(fv(rd(s->r,4800,4),4)));
L_1803db590_3:;
wr(s->r,514,1,((rd(s->u,22,1)!=0)||(rd(s->u,23,1)!=0)));
L_1803db590_4:;
wr(s->u,24,1,(fv(rd(s->r,4736,4),4)==fv(rd(s->r,4800,4),4)));
L_1803db590_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,24,1)));
L_1803db590_6:;
wr(s->u,25,1,(fv(rd(s->r,4736,4),4)<fv(rd(s->r,4800,4),4)));
L_1803db590_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,25,1)));
L_1803db590_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db590_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803db590_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803db590_11:;
/* 1803db593: ja 0x1803db598 */
L_1803db593_0:;
L_1803db593_1:;
wr(s->u,20,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803db593_2:;
wr(s->u,21,1,(!rd(s->u,20,1)));
L_1803db593_3:;
if(rd(s->u,21,1)){return UINT64_C(0x1803db598);}
L_1803db593_4:;
return UINT64_C(0x1803db595);
}
uint64_t b_1803db563(CPU*s){
/* 1803db563: cvtsd2ss xmm0, xmm2 */
L_1803db563_0:;
L_1803db563_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4736,8),8),4));
L_1803db563_2:;
/* 1803db567: movss xmm2, dword ptr [rcx + 0x24] */
L_1803db567_0:;
L_1803db567_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x24))));
L_1803db567_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db567_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803db567_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803db567_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803db567_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803db567_7:;
/* 1803db56c: movss dword ptr [rcx + 0xb8], xmm0 */
L_1803db56c_0:;
L_1803db56c_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0xb8))));
L_1803db56c_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803db56c_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803db56c_4:;
/* 1803db574: unpcklps xmm0, xmm0 */
L_1803db574_0:;
L_1803db574_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803db574_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803db574_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803db574_4:;
/* 1803db577: cvtps2pd xmm1, xmm0 */
L_1803db577_0:;
L_1803db577_1:;
wr(s->u,26,8,rd(s->r,4608,8));
L_1803db577_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,26,4),4),8));
L_1803db577_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,30,4),4),8));
L_1803db577_4:;
/* 1803db57a: unpcklps xmm0, xmm0 */
L_1803db57a_0:;
L_1803db57a_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803db57a_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803db57a_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803db57a_4:;
/* 1803db57d: addsd xmm1, xmm3 */
L_1803db57d_0:;
L_1803db57d_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803db57d_2:;
/* 1803db581: cvtps2pd xmm0, xmm0 */
L_1803db581_0:;
L_1803db581_1:;
wr(s->u,26,8,rd(s->r,4608,8));
L_1803db581_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,26,4),4),8));
L_1803db581_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,30,4),4),8));
L_1803db581_4:;
/* 1803db584: divsd xmm1, xmm0 */
L_1803db584_0:;
L_1803db584_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)/fv(rd(s->r,4608,8),8),8));
L_1803db584_2:;
/* 1803db588: cvtsd2ss xmm3, xmm1 */
L_1803db588_0:;
L_1803db588_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4672,8),8),4));
L_1803db588_2:;
/* 1803db58c: mulss xmm3, xmm2 */
L_1803db58c_0:;
L_1803db58c_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803db58c_2:;
/* 1803db590: comiss xmm2, xmm3 */
L_1803db590_0:;
L_1803db590_1:;
wr(s->u,22,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803db590_2:;
wr(s->u,23,1,isnan(fv(rd(s->r,4800,4),4)));
L_1803db590_3:;
wr(s->r,514,1,((rd(s->u,22,1)!=0)||(rd(s->u,23,1)!=0)));
L_1803db590_4:;
wr(s->u,24,1,(fv(rd(s->r,4736,4),4)==fv(rd(s->r,4800,4),4)));
L_1803db590_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,24,1)));
L_1803db590_6:;
wr(s->u,25,1,(fv(rd(s->r,4736,4),4)<fv(rd(s->r,4800,4),4)));
L_1803db590_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,25,1)));
L_1803db590_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db590_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803db590_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803db590_11:;
/* 1803db593: ja 0x1803db598 */
L_1803db593_0:;
L_1803db593_1:;
wr(s->u,20,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803db593_2:;
wr(s->u,21,1,(!rd(s->u,20,1)));
L_1803db593_3:;
if(rd(s->u,21,1)){return UINT64_C(0x1803db598);}
L_1803db593_4:;
return UINT64_C(0x1803db595);
}
uint64_t b_1803db595(CPU*s){
/* 1803db595: movaps xmm2, xmm3 */
L_1803db595_0:;
L_1803db595_1:;
wr(s->r,4736,4,rd(s->r,4800,4));
L_1803db595_2:;
wr(s->r,4740,4,rd(s->r,4804,4));
L_1803db595_3:;
wr(s->r,4744,4,rd(s->r,4808,4));
L_1803db595_4:;
wr(s->r,4748,4,rd(s->r,4812,4));
L_1803db595_5:;
/* 1803db598: movaps xmm0, xmm2 */
L_1803db598_0:;
L_1803db598_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803db598_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803db598_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803db598_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803db598_5:;
/* 1803db59b: ret  */
L_1803db59b_0:;
L_1803db59b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db59b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db59b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803db59b_4:;
return UINT64_C(0x1803db59c);
}
uint64_t b_1803db598(CPU*s){
/* 1803db598: movaps xmm0, xmm2 */
L_1803db598_0:;
L_1803db598_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803db598_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803db598_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803db598_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803db598_5:;
/* 1803db59b: ret  */
L_1803db59b_0:;
L_1803db59b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db59b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db59b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803db59b_4:;
return UINT64_C(0x1803db59c);
}
uint64_t b_1803db59c(CPU*s){
/* 1803db59c: movss xmm0, dword ptr [rcx + 0x24] */
L_1803db59c_0:;
L_1803db59c_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x24))));
L_1803db59c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db59c_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803db59c_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803db59c_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803db59c_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803db59c_7:;
/* 1803db5a1: ret  */
L_1803db5a1_0:;
L_1803db5a1_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803db5a1_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803db5a1_3:;
return (uint64_t)rd(s->r,648,8);
L_1803db5a1_4:;
return UINT64_C(0x1803db5a2);
}
uint64_t b_1803db5b0(CPU*s){
/* 1803db5b0: mov qword ptr [rsp + 0x10], rbx */
L_1803db5b0_0:;
L_1803db5b0_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803db5b0_2:;
wr(s->u,24,8,rd(s->r,24,8));
L_1803db5b0_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803db5b0_4:;
/* 1803db5b5: mov qword ptr [rsp + 0x18], rbp */
L_1803db5b5_0:;
L_1803db5b5_1:;
wr(s->u,16,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803db5b5_2:;
wr(s->u,24,8,rd(s->r,40,8));
L_1803db5b5_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803db5b5_4:;
/* 1803db5ba: push rsi */
L_1803db5ba_0:;
L_1803db5ba_1:;
wr(s->u,36,8,rd(s->r,48,8));
L_1803db5ba_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db5ba_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,36,8));
L_1803db5ba_4:;
/* 1803db5bb: push rdi */
L_1803db5bb_0:;
L_1803db5bb_1:;
wr(s->u,36,8,rd(s->r,56,8));
L_1803db5bb_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db5bb_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,36,8));
L_1803db5bb_4:;
/* 1803db5bc: push r12 */
L_1803db5bc_0:;
L_1803db5bc_1:;
wr(s->u,36,8,rd(s->r,160,8));
L_1803db5bc_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db5bc_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,36,8));
L_1803db5bc_4:;
/* 1803db5be: sub rsp, 0x350 */
L_1803db5be_0:;
L_1803db5be_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x350))));
L_1803db5be_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x350)),8,1));
L_1803db5be_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x350))));
L_1803db5be_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db5be_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803db5be_6:;
wr(s->u,44,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803db5be_7:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803db5be_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803db5be_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803db5be_10:;
/* 1803db5c5: mov rsi, rcx */
L_1803db5c5_0:;
L_1803db5c5_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1803db5c5_2:;
/* 1803db5c8: lea rbp, [rcx + 0xf0] */
L_1803db5c8_0:;
L_1803db5c8_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0xf0))));
L_1803db5c8_2:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803db5c8_3:;
/* 1803db5cf: mov ecx, dword ptr [rcx + 0x6c] */
L_1803db5cf_0:;
L_1803db5cf_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x6c))));
L_1803db5cf_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db5cf_3:;
wr(s->r,8,4,rd(s->u,32,4));
L_1803db5cf_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803db5cf_5:;
/* 1803db5d2: xor r12d, r12d */
L_1803db5d2_0:;
L_1803db5d2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db5d2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db5d2_3:;
wr(s->r,160,4,(rd(s->r,160,4)^rd(s->r,160,4)));
L_1803db5d2_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803db5d2_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db5d2_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803db5d2_7:;
wr(s->u,44,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803db5d2_8:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803db5d2_9:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803db5d2_10:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803db5d2_11:;
/* 1803db5d5: test ecx, ecx */
L_1803db5d5_0:;
L_1803db5d5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db5d5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db5d5_3:;
wr(s->u,54,4,(rd(s->r,8,4)&rd(s->r,8,4)));
L_1803db5d5_4:;
wr(s->r,519,1,(sx(rd(s->u,54,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db5d5_5:;
wr(s->r,518,1,(rd(s->u,54,4)==((U)UINT64_C(0x0))));
L_1803db5d5_6:;
wr(s->u,44,4,(rd(s->u,54,4)&((U)UINT64_C(0xff))));
L_1803db5d5_7:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803db5d5_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803db5d5_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803db5d5_10:;
/* 1803db5d7: je 0x1803dbc06 */
L_1803db5d7_0:;
L_1803db5d7_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dbc06);}
L_1803db5d7_2:;
return UINT64_C(0x1803db5dd);
}
uint64_t b_1803db5dd(CPU*s){
/* 1803db5dd: sub ecx, 1 */
L_1803db5dd_0:;
L_1803db5dd_1:;
wr(s->r,512,1,(rd(s->r,8,4)<((U)UINT64_C(0x1))));
L_1803db5dd_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),((U)UINT64_C(0x1)),4,1));
L_1803db5dd_3:;
wr(s->r,8,4,(rd(s->r,8,4)-((U)UINT64_C(0x1))));
L_1803db5dd_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803db5dd_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db5dd_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803db5dd_7:;
wr(s->u,0,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803db5dd_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803db5dd_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803db5dd_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803db5dd_11:;
/* 1803db5e0: je 0x1803db7c1 */
L_1803db5e0_0:;
L_1803db5e0_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803db7c1);}
L_1803db5e0_2:;
return UINT64_C(0x1803db5e6);
}
uint64_t b_1803db5e6(CPU*s){
/* 1803db5e6: cmp ecx, 1 */
L_1803db5e6_0:;
L_1803db5e6_1:;
wr(s->u,7,4,rd(s->r,8,4));
L_1803db5e6_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x1))));
L_1803db5e6_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x1)),4,1));
L_1803db5e6_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x1))));
L_1803db5e6_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db5e6_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803db5e6_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803db5e6_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803db5e6_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803db5e6_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803db5e6_11:;
/* 1803db5e9: jne 0x1803dbd35 */
L_1803db5e9_0:;
L_1803db5e9_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803db5e9_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dbd35);}
L_1803db5e9_3:;
return UINT64_C(0x1803db5ef);
}
uint64_t b_1803db5ef(CPU*s){
/* 1803db5ef: mov rcx, qword ptr [rsi + 0x6708] */
L_1803db5ef_0:;
L_1803db5ef_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x6708))));
L_1803db5ef_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db5ef_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803db5ef_4:;
/* 1803db5f6: mov r8d, dword ptr [rsi + 0x68] */
L_1803db5f6_0:;
L_1803db5f6_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x68))));
L_1803db5f6_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db5f6_3:;
wr(s->r,128,4,rd(s->u,16,4));
L_1803db5f6_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803db5f6_5:;
/* 1803db5fa: lea r9, [rsi + 0x270] */
L_1803db5fa_0:;
L_1803db5fa_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x270))));
L_1803db5fa_2:;
wr(s->r,136,8,rd(s->u,8,8));
L_1803db5fa_3:;
/* 1803db601: mov rax, qword ptr [rcx] */
L_1803db601_0:;
L_1803db601_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803db601_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803db601_3:;
/* 1803db604: lea rdx, [rsi + 0x270] */
L_1803db604_0:;
L_1803db604_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x270))));
L_1803db604_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803db604_3:;
/* 1803db60b: call qword ptr [rax + 0x20] */
L_1803db60b_0:;
L_1803db60b_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x20))));
L_1803db60b_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db60b_3:;
wr(s->u,28,8,rd(s->u,20,8));
L_1803db60b_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db60b_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db60e)));
L_1803db60b_6:;
return (uint64_t)rd(s->u,28,8);
L_1803db60b_7:;
return UINT64_C(0x1803db60e);
}
uint64_t b_1803db60e(CPU*s){
/* 1803db60e: test eax, eax */
L_1803db60e_0:;
L_1803db60e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db60e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db60e_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803db60e_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db60e_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803db60e_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803db60e_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803db60e_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803db60e_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803db60e_10:;
/* 1803db610: jns 0x1803db652 */
L_1803db610_0:;
L_1803db610_1:;
wr(s->u,0,1,(!rd(s->r,519,1)));
L_1803db610_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803db652);}
L_1803db610_3:;
return UINT64_C(0x1803db612);
}
uint64_t b_1803db612(CPU*s){
/* 1803db612: cmp dword ptr [rsi + 0xbc], r12d */
L_1803db612_0:;
L_1803db612_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xbc))));
L_1803db612_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db612_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803db612_4:;
wr(s->r,512,1,(rd(s->u,19,4)<rd(s->r,160,4)));
L_1803db612_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),rd(s->r,160,4),4,1));
L_1803db612_6:;
wr(s->u,23,4,(rd(s->u,19,4)-rd(s->r,160,4)));
L_1803db612_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db612_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803db612_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803db612_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803db612_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803db612_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803db612_13:;
/* 1803db619: jne 0x1803db652 */
L_1803db619_0:;
L_1803db619_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803db619_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803db652);}
L_1803db619_3:;
return UINT64_C(0x1803db61b);
}
uint64_t b_1803db61b(CPU*s){
/* 1803db61b: mov rcx, qword ptr [rsi + 0x6700] */
L_1803db61b_0:;
L_1803db61b_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x6700))));
L_1803db61b_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db61b_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803db61b_4:;
/* 1803db622: mov rax, qword ptr [rcx] */
L_1803db622_0:;
L_1803db622_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803db622_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803db622_3:;
/* 1803db625: call qword ptr [rax + 0x20] */
L_1803db625_0:;
L_1803db625_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x20))));
L_1803db625_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db625_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803db625_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db625_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db628)));
L_1803db625_6:;
return (uint64_t)rd(s->u,24,8);
L_1803db625_7:;
return UINT64_C(0x1803db628);
}
uint64_t b_1803db628(CPU*s){
/* 1803db628: mov rcx, qword ptr [rsi + 0x6708] */
L_1803db628_0:;
L_1803db628_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x6708))));
L_1803db628_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db628_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803db628_4:;
/* 1803db62f: mov r8d, dword ptr [rsi + 0x68] */
L_1803db62f_0:;
L_1803db62f_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x68))));
L_1803db62f_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db62f_3:;
wr(s->r,128,4,rd(s->u,16,4));
L_1803db62f_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803db62f_5:;
/* 1803db633: mov rax, qword ptr [rcx] */
L_1803db633_0:;
L_1803db633_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803db633_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803db633_3:;
/* 1803db636: lea r9, [rsi + 0x270] */
L_1803db636_0:;
L_1803db636_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x270))));
L_1803db636_2:;
wr(s->r,136,8,rd(s->u,8,8));
L_1803db636_3:;
/* 1803db63d: lea rdx, [rsi + 0x270] */
L_1803db63d_0:;
L_1803db63d_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x270))));
L_1803db63d_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803db63d_3:;
/* 1803db644: call qword ptr [rax + 0x20] */
L_1803db644_0:;
L_1803db644_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x20))));
L_1803db644_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db644_3:;
wr(s->u,28,8,rd(s->u,20,8));
L_1803db644_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db644_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db647)));
L_1803db644_6:;
return (uint64_t)rd(s->u,28,8);
L_1803db644_7:;
return UINT64_C(0x1803db647);
}
uint64_t b_1803db647(CPU*s){
/* 1803db647: mov ebx, 1 */
L_1803db647_0:;
L_1803db647_1:;
wr(s->r,24,8,((U)UINT64_C(0x1)));
L_1803db647_2:;
/* 1803db64c: mov dword ptr [rsi + 0xbc], ebx */
L_1803db64c_0:;
L_1803db64c_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xbc))));
L_1803db64c_2:;
wr(s->u,16,4,rd(s->r,24,4));
L_1803db64c_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803db64c_4:;
/* 1803db652: mov eax, dword ptr [rsi + 0x60] */
L_1803db652_0:;
L_1803db652_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x60))));
L_1803db652_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db652_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803db652_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db652_5:;
/* 1803db655: add eax, dword ptr [rsi + 0x48] */
L_1803db655_0:;
L_1803db655_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x48))));
L_1803db655_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db655_3:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->u,28,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803db655_4:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db655_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,28,4),4,0));
L_1803db655_6:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db655_7:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->u,28,4)));
L_1803db655_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db655_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db655_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803db655_11:;
wr(s->u,34,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803db655_12:;
wr(s->u,38,1,pop(rd(s->u,34,4),4));
L_1803db655_13:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803db655_14:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803db655_15:;
/* 1803db658: imul eax, dword ptr [rsi + 0x30] */
L_1803db658_0:;
L_1803db658_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803db658_2:;
wr(s->u,52,8,(U)sx(rd(s->r,0,4),4));
L_1803db658_3:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db658_4:;
wr(s->u,60,8,(U)sx(rd(s->u,28,4),4));
L_1803db658_5:;
wr(s->u,68,8,(rd(s->u,52,8)*rd(s->u,60,8)));
L_1803db658_6:;
wr(s->r,0,4,(rd(s->u,68,8) >> (((U)UINT64_C(0x0))*8)));
L_1803db658_7:;
wr(s->u,76,4,(rd(s->u,68,8) >> (((U)UINT64_C(0x4))*8)));
L_1803db658_8:;
wr(s->u,40,8,(U)sx(rd(s->r,0,4),4));
L_1803db658_9:;
wr(s->r,512,1,(rd(s->u,40,8)!=rd(s->u,68,8)));
L_1803db658_10:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803db658_11:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db658_12:;
/* 1803db65c: movsxd rdx, eax */
L_1803db65c_0:;
L_1803db65c_1:;
wr(s->r,16,8,(U)sx(rd(s->r,0,4),4));
L_1803db65c_2:;
/* 1803db65f: mov eax, dword ptr [rsi + 0x3c] */
L_1803db65f_0:;
L_1803db65f_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803db65f_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db65f_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803db65f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db65f_5:;
/* 1803db662: neg eax */
L_1803db662_0:;
L_1803db662_1:;
wr(s->r,512,1,(rd(s->r,0,4)!=((U)UINT64_C(0x0))));
L_1803db662_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,0,4),4,1));
L_1803db662_3:;
wr(s->r,0,4,(-rd(s->r,0,4)));
L_1803db662_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db662_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803db662_6:;
wr(s->u,34,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803db662_7:;
wr(s->u,38,1,pop(rd(s->u,34,4),4));
L_1803db662_8:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803db662_9:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803db662_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db662_11:;
/* 1803db664: movd xmm0, eax */
L_1803db664_0:;
L_1803db664_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803db664_2:;
/* 1803db668: cvtdq2pd xmm0, xmm0 */
L_1803db668_0:;
L_1803db668_1:;
wr(s->u,80,8,rd(s->r,4608,8));
L_1803db668_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,80,4),4),8));
L_1803db668_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,84,4),4),8));
L_1803db668_4:;
/* 1803db66c: comisd xmm0, xmmword ptr [rsi + 0xd0] */
L_1803db66c_0:;
L_1803db66c_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xd0))));
L_1803db66c_2:;
wr(s->u,48,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803db66c_3:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db66c_4:;
wr(s->u,49,1,isnan(fv(rd(s->u,20,8),8)));
L_1803db66c_5:;
wr(s->r,514,1,((rd(s->u,48,1)!=0)||(rd(s->u,49,1)!=0)));
L_1803db66c_6:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db66c_7:;
wr(s->u,50,1,(fv(rd(s->r,4608,8),8)==fv(rd(s->u,20,8),8)));
L_1803db66c_8:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,50,1)));
L_1803db66c_9:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db66c_10:;
wr(s->u,51,1,(fv(rd(s->r,4608,8),8)<fv(rd(s->u,20,8),8)));
L_1803db66c_11:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,51,1)));
L_1803db66c_12:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db66c_13:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803db66c_14:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803db66c_15:;
/* 1803db674: ja 0x1803db6e2 */
L_1803db674_0:;
L_1803db674_1:;
wr(s->u,32,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803db674_2:;
wr(s->u,33,1,(!rd(s->u,32,1)));
L_1803db674_3:;
if(rd(s->u,33,1)){return UINT64_C(0x1803db6e2);}
L_1803db674_4:;
return UINT64_C(0x1803db676);
}
uint64_t b_1803db652(CPU*s){
/* 1803db652: mov eax, dword ptr [rsi + 0x60] */
L_1803db652_0:;
L_1803db652_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x60))));
L_1803db652_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db652_3:;
wr(s->r,0,4,rd(s->u,24,4));
L_1803db652_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db652_5:;
/* 1803db655: add eax, dword ptr [rsi + 0x48] */
L_1803db655_0:;
L_1803db655_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x48))));
L_1803db655_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db655_3:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->u,24,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803db655_4:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db655_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,24,4),4,0));
L_1803db655_6:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db655_7:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->u,24,4)));
L_1803db655_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db655_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db655_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803db655_11:;
wr(s->u,30,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803db655_12:;
wr(s->u,34,1,pop(rd(s->u,30,4),4));
L_1803db655_13:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803db655_14:;
wr(s->r,514,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803db655_15:;
/* 1803db658: imul eax, dword ptr [rsi + 0x30] */
L_1803db658_0:;
L_1803db658_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803db658_2:;
wr(s->u,48,8,(U)sx(rd(s->r,0,4),4));
L_1803db658_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db658_4:;
wr(s->u,56,8,(U)sx(rd(s->u,24,4),4));
L_1803db658_5:;
wr(s->u,64,8,(rd(s->u,48,8)*rd(s->u,56,8)));
L_1803db658_6:;
wr(s->r,0,4,(rd(s->u,64,8) >> (((U)UINT64_C(0x0))*8)));
L_1803db658_7:;
wr(s->u,72,4,(rd(s->u,64,8) >> (((U)UINT64_C(0x4))*8)));
L_1803db658_8:;
wr(s->u,36,8,(U)sx(rd(s->r,0,4),4));
L_1803db658_9:;
wr(s->r,512,1,(rd(s->u,36,8)!=rd(s->u,64,8)));
L_1803db658_10:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803db658_11:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db658_12:;
/* 1803db65c: movsxd rdx, eax */
L_1803db65c_0:;
L_1803db65c_1:;
wr(s->r,16,8,(U)sx(rd(s->r,0,4),4));
L_1803db65c_2:;
/* 1803db65f: mov eax, dword ptr [rsi + 0x3c] */
L_1803db65f_0:;
L_1803db65f_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803db65f_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db65f_3:;
wr(s->r,0,4,rd(s->u,24,4));
L_1803db65f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db65f_5:;
/* 1803db662: neg eax */
L_1803db662_0:;
L_1803db662_1:;
wr(s->r,512,1,(rd(s->r,0,4)!=((U)UINT64_C(0x0))));
L_1803db662_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,0,4),4,1));
L_1803db662_3:;
wr(s->r,0,4,(-rd(s->r,0,4)));
L_1803db662_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db662_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803db662_6:;
wr(s->u,30,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803db662_7:;
wr(s->u,34,1,pop(rd(s->u,30,4),4));
L_1803db662_8:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803db662_9:;
wr(s->r,514,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803db662_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db662_11:;
/* 1803db664: movd xmm0, eax */
L_1803db664_0:;
L_1803db664_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803db664_2:;
/* 1803db668: cvtdq2pd xmm0, xmm0 */
L_1803db668_0:;
L_1803db668_1:;
wr(s->u,76,8,rd(s->r,4608,8));
L_1803db668_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,76,4),4),8));
L_1803db668_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,80,4),4),8));
L_1803db668_4:;
/* 1803db66c: comisd xmm0, xmmword ptr [rsi + 0xd0] */
L_1803db66c_0:;
L_1803db66c_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xd0))));
L_1803db66c_2:;
wr(s->u,44,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803db66c_3:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db66c_4:;
wr(s->u,45,1,isnan(fv(rd(s->u,16,8),8)));
L_1803db66c_5:;
wr(s->r,514,1,((rd(s->u,44,1)!=0)||(rd(s->u,45,1)!=0)));
L_1803db66c_6:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db66c_7:;
wr(s->u,46,1,(fv(rd(s->r,4608,8),8)==fv(rd(s->u,16,8),8)));
L_1803db66c_8:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,46,1)));
L_1803db66c_9:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db66c_10:;
wr(s->u,47,1,(fv(rd(s->r,4608,8),8)<fv(rd(s->u,16,8),8)));
L_1803db66c_11:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,47,1)));
L_1803db66c_12:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db66c_13:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803db66c_14:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803db66c_15:;
/* 1803db674: ja 0x1803db6e2 */
L_1803db674_0:;
L_1803db674_1:;
wr(s->u,28,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803db674_2:;
wr(s->u,29,1,(!rd(s->u,28,1)));
L_1803db674_3:;
if(rd(s->u,29,1)){return UINT64_C(0x1803db6e2);}
L_1803db674_4:;
return UINT64_C(0x1803db676);
}
uint64_t b_1803db676(CPU*s){
/* 1803db676: cmp dword ptr [rsi + 0x44], r12d */
L_1803db676_0:;
L_1803db676_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x44))));
L_1803db676_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db676_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803db676_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,160,4)));
L_1803db676_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,160,4),4,1));
L_1803db676_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,160,4)));
L_1803db676_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db676_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803db676_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803db676_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803db676_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803db676_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803db676_13:;
/* 1803db67a: mov r11d, r12d */
L_1803db67a_0:;
L_1803db67a_1:;
wr(s->r,152,4,rd(s->r,160,4));
L_1803db67a_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803db67a_3:;
/* 1803db67d: jle 0x1803db72f */
L_1803db67d_0:;
L_1803db67d_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db67d_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803db67d_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803db72f);}
L_1803db67d_4:;
return UINT64_C(0x1803db683);
}
uint64_t b_1803db683(CPU*s){
/* 1803db683: mov r10, r12 */
L_1803db683_0:;
L_1803db683_1:;
wr(s->r,144,8,rd(s->r,160,8));
L_1803db683_2:;
/* 1803db686: cmp dword ptr [rsi + 0x30], r12d */
L_1803db686_0:;
L_1803db686_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803db686_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db686_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803db686_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,160,4)));
L_1803db686_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,160,4),4,1));
L_1803db686_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,160,4)));
L_1803db686_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db686_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803db686_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803db686_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803db686_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803db686_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803db686_13:;
/* 1803db68a: mov r9d, r12d */
L_1803db68a_0:;
L_1803db68a_1:;
wr(s->r,136,4,rd(s->r,160,4));
L_1803db68a_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803db68a_3:;
/* 1803db68d: jle 0x1803db6d3 */
L_1803db68d_0:;
L_1803db68d_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db68d_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803db68d_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803db6d3);}
L_1803db68d_4:;
return UINT64_C(0x1803db68f);
}
uint64_t b_1803db686(CPU*s){
/* 1803db686: cmp dword ptr [rsi + 0x30], r12d */
L_1803db686_0:;
L_1803db686_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803db686_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db686_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803db686_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,160,4)));
L_1803db686_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,160,4),4,1));
L_1803db686_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,160,4)));
L_1803db686_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db686_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803db686_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803db686_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803db686_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803db686_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803db686_13:;
/* 1803db68a: mov r9d, r12d */
L_1803db68a_0:;
L_1803db68a_1:;
wr(s->r,136,4,rd(s->r,160,4));
L_1803db68a_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803db68a_3:;
/* 1803db68d: jle 0x1803db6d3 */
L_1803db68d_0:;
L_1803db68d_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db68d_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803db68d_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803db6d3);}
L_1803db68d_4:;
return UINT64_C(0x1803db68f);
}
uint64_t b_1803db68f(CPU*s){
/* 1803db68f: mov r8, rbp */
L_1803db68f_0:;
L_1803db68f_1:;
wr(s->r,128,8,rd(s->r,40,8));
L_1803db68f_2:;
/* 1803db692: nop word ptr [rax + rax] */
L_1803db692_0:;
L_1803db692_1:;
wr(s->u,56,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803db692_2:;
wr(s->u,64,8,(rd(s->r,0,8)+rd(s->u,56,8)));
L_1803db692_3:;
/* 1803db6a0: mov rax, qword ptr [r8 + 0x180] */
L_1803db6a0_0:;
L_1803db6a0_1:;
wr(s->u,8,8,(rd(s->r,128,8)+((U)UINT64_C(0x180))));
L_1803db6a0_2:;
wr(s->u,76,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db6a0_3:;
wr(s->r,0,8,rd(s->u,76,8));
L_1803db6a0_4:;
/* 1803db6a7: mov rcx, qword ptr [r8] */
L_1803db6a7_0:;
L_1803db6a7_1:;
wr(s->u,76,8,mr((uint64_t)rd(s->r,128,8),8));
L_1803db6a7_2:;
wr(s->r,8,8,rd(s->u,76,8));
L_1803db6a7_3:;
/* 1803db6aa: inc r9d */
L_1803db6aa_0:;
L_1803db6aa_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),((U)UINT64_C(0x1)),4,0));
L_1803db6aa_2:;
wr(s->r,136,4,(rd(s->r,136,4)+((U)UINT64_C(0x1))));
L_1803db6aa_3:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803db6aa_4:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db6aa_5:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803db6aa_6:;
wr(s->u,85,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803db6aa_7:;
wr(s->u,93,1,pop(rd(s->u,85,4),4));
L_1803db6aa_8:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803db6aa_9:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803db6aa_10:;
/* 1803db6ad: inc rdx */
L_1803db6ad_0:;
L_1803db6ad_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x1)),8,0));
L_1803db6ad_2:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x1))));
L_1803db6ad_3:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db6ad_4:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803db6ad_5:;
wr(s->u,85,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803db6ad_6:;
wr(s->u,93,1,pop(rd(s->u,85,8),8));
L_1803db6ad_7:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803db6ad_8:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803db6ad_9:;
/* 1803db6b0: add r8, 8 */
L_1803db6b0_0:;
L_1803db6b0_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803db6b0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803db6b0_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803db6b0_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db6b0_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803db6b0_6:;
wr(s->u,85,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803db6b0_7:;
wr(s->u,93,1,pop(rd(s->u,85,8),8));
L_1803db6b0_8:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803db6b0_9:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803db6b0_10:;
/* 1803db6b4: movss xmm0, dword ptr [rax + r10] */
L_1803db6b4_0:;
L_1803db6b4_1:;
wr(s->u,16,8,(rd(s->r,144,8)*((U)UINT64_C(0x1))));
L_1803db6b4_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803db6b4_3:;
wr(s->u,72,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803db6b4_4:;
wr(s->r,4608,4,rd(s->u,72,4));
L_1803db6b4_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803db6b4_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803db6b4_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803db6b4_8:;
/* 1803db6ba: addss xmm0, dword ptr [r10 + rcx] */
L_1803db6ba_0:;
L_1803db6ba_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803db6ba_2:;
wr(s->u,24,8,(rd(s->r,144,8)+rd(s->u,16,8)));
L_1803db6ba_3:;
wr(s->u,72,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803db6ba_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,72,4),4),4));
L_1803db6ba_5:;
/* 1803db6c0: mov rax, qword ptr [rsi + 0xe0] */
L_1803db6c0_0:;
L_1803db6c0_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xe0))));
L_1803db6c0_2:;
wr(s->u,76,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db6c0_3:;
wr(s->r,0,8,rd(s->u,76,8));
L_1803db6c0_4:;
/* 1803db6c7: movss dword ptr [rax + rdx*4 - 4], xmm0 */
L_1803db6c7_0:;
L_1803db6c7_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803db6c7_2:;
wr(s->u,40,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803db6c7_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803db6c7_4:;
wr(s->u,72,4,rd(s->r,4608,4));
L_1803db6c7_5:;
mw((uint64_t)rd(s->u,48,8),4,rd(s->u,72,4));
L_1803db6c7_6:;
/* 1803db6cd: cmp r9d, dword ptr [rsi + 0x30] */
L_1803db6cd_0:;
L_1803db6cd_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803db6cd_2:;
wr(s->u,72,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db6cd_3:;
wr(s->u,95,4,rd(s->u,72,4));
L_1803db6cd_4:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->u,95,4)));
L_1803db6cd_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->u,95,4),4,1));
L_1803db6cd_6:;
wr(s->u,99,4,(rd(s->r,136,4)-rd(s->u,95,4)));
L_1803db6cd_7:;
wr(s->r,519,1,(sx(rd(s->u,99,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db6cd_8:;
wr(s->r,518,1,(rd(s->u,99,4)==((U)UINT64_C(0x0))));
L_1803db6cd_9:;
wr(s->u,85,4,(rd(s->u,99,4)&((U)UINT64_C(0xff))));
L_1803db6cd_10:;
wr(s->u,93,1,pop(rd(s->u,85,4),4));
L_1803db6cd_11:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803db6cd_12:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803db6cd_13:;
/* 1803db6d1: jl 0x1803db6a0 */
L_1803db6d1_0:;
L_1803db6d1_1:;
wr(s->u,84,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db6d1_2:;
if(rd(s->u,84,1)){goto L_1803db6a0_0;}
L_1803db6d1_3:;
return UINT64_C(0x1803db6d3);
}
uint64_t b_1803db6a0(CPU*s){
/* 1803db6a0: mov rax, qword ptr [r8 + 0x180] */
L_1803db6a0_0:;
L_1803db6a0_1:;
wr(s->u,8,8,(rd(s->r,128,8)+((U)UINT64_C(0x180))));
L_1803db6a0_2:;
wr(s->u,60,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db6a0_3:;
wr(s->r,0,8,rd(s->u,60,8));
L_1803db6a0_4:;
/* 1803db6a7: mov rcx, qword ptr [r8] */
L_1803db6a7_0:;
L_1803db6a7_1:;
wr(s->u,60,8,mr((uint64_t)rd(s->r,128,8),8));
L_1803db6a7_2:;
wr(s->r,8,8,rd(s->u,60,8));
L_1803db6a7_3:;
/* 1803db6aa: inc r9d */
L_1803db6aa_0:;
L_1803db6aa_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),((U)UINT64_C(0x1)),4,0));
L_1803db6aa_2:;
wr(s->r,136,4,(rd(s->r,136,4)+((U)UINT64_C(0x1))));
L_1803db6aa_3:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803db6aa_4:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db6aa_5:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803db6aa_6:;
wr(s->u,69,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803db6aa_7:;
wr(s->u,77,1,pop(rd(s->u,69,4),4));
L_1803db6aa_8:;
wr(s->u,78,1,(rd(s->u,77,1)&((U)UINT64_C(0x1))));
L_1803db6aa_9:;
wr(s->r,514,1,(rd(s->u,78,1)==((U)UINT64_C(0x0))));
L_1803db6aa_10:;
/* 1803db6ad: inc rdx */
L_1803db6ad_0:;
L_1803db6ad_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x1)),8,0));
L_1803db6ad_2:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x1))));
L_1803db6ad_3:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db6ad_4:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803db6ad_5:;
wr(s->u,69,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803db6ad_6:;
wr(s->u,77,1,pop(rd(s->u,69,8),8));
L_1803db6ad_7:;
wr(s->u,78,1,(rd(s->u,77,1)&((U)UINT64_C(0x1))));
L_1803db6ad_8:;
wr(s->r,514,1,(rd(s->u,78,1)==((U)UINT64_C(0x0))));
L_1803db6ad_9:;
/* 1803db6b0: add r8, 8 */
L_1803db6b0_0:;
L_1803db6b0_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803db6b0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803db6b0_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803db6b0_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db6b0_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803db6b0_6:;
wr(s->u,69,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803db6b0_7:;
wr(s->u,77,1,pop(rd(s->u,69,8),8));
L_1803db6b0_8:;
wr(s->u,78,1,(rd(s->u,77,1)&((U)UINT64_C(0x1))));
L_1803db6b0_9:;
wr(s->r,514,1,(rd(s->u,78,1)==((U)UINT64_C(0x0))));
L_1803db6b0_10:;
/* 1803db6b4: movss xmm0, dword ptr [rax + r10] */
L_1803db6b4_0:;
L_1803db6b4_1:;
wr(s->u,16,8,(rd(s->r,144,8)*((U)UINT64_C(0x1))));
L_1803db6b4_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803db6b4_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803db6b4_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803db6b4_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803db6b4_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803db6b4_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803db6b4_8:;
/* 1803db6ba: addss xmm0, dword ptr [r10 + rcx] */
L_1803db6ba_0:;
L_1803db6ba_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803db6ba_2:;
wr(s->u,24,8,(rd(s->r,144,8)+rd(s->u,16,8)));
L_1803db6ba_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803db6ba_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,56,4),4),4));
L_1803db6ba_5:;
/* 1803db6c0: mov rax, qword ptr [rsi + 0xe0] */
L_1803db6c0_0:;
L_1803db6c0_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xe0))));
L_1803db6c0_2:;
wr(s->u,60,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db6c0_3:;
wr(s->r,0,8,rd(s->u,60,8));
L_1803db6c0_4:;
/* 1803db6c7: movss dword ptr [rax + rdx*4 - 4], xmm0 */
L_1803db6c7_0:;
L_1803db6c7_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803db6c7_2:;
wr(s->u,40,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803db6c7_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803db6c7_4:;
wr(s->u,56,4,rd(s->r,4608,4));
L_1803db6c7_5:;
mw((uint64_t)rd(s->u,48,8),4,rd(s->u,56,4));
L_1803db6c7_6:;
/* 1803db6cd: cmp r9d, dword ptr [rsi + 0x30] */
L_1803db6cd_0:;
L_1803db6cd_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803db6cd_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db6cd_3:;
wr(s->u,79,4,rd(s->u,56,4));
L_1803db6cd_4:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->u,79,4)));
L_1803db6cd_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->u,79,4),4,1));
L_1803db6cd_6:;
wr(s->u,83,4,(rd(s->r,136,4)-rd(s->u,79,4)));
L_1803db6cd_7:;
wr(s->r,519,1,(sx(rd(s->u,83,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db6cd_8:;
wr(s->r,518,1,(rd(s->u,83,4)==((U)UINT64_C(0x0))));
L_1803db6cd_9:;
wr(s->u,69,4,(rd(s->u,83,4)&((U)UINT64_C(0xff))));
L_1803db6cd_10:;
wr(s->u,77,1,pop(rd(s->u,69,4),4));
L_1803db6cd_11:;
wr(s->u,78,1,(rd(s->u,77,1)&((U)UINT64_C(0x1))));
L_1803db6cd_12:;
wr(s->r,514,1,(rd(s->u,78,1)==((U)UINT64_C(0x0))));
L_1803db6cd_13:;
/* 1803db6d1: jl 0x1803db6a0 */
L_1803db6d1_0:;
L_1803db6d1_1:;
wr(s->u,68,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db6d1_2:;
if(rd(s->u,68,1)){goto L_1803db6a0_0;}
L_1803db6d1_3:;
return UINT64_C(0x1803db6d3);
}
uint64_t b_1803db6d3(CPU*s){
/* 1803db6d3: inc r11d */
L_1803db6d3_0:;
L_1803db6d3_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803db6d3_2:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803db6d3_3:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803db6d3_4:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db6d3_5:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803db6d3_6:;
wr(s->u,13,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803db6d3_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803db6d3_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803db6d3_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803db6d3_10:;
/* 1803db6d6: add r10, 4 */
L_1803db6d6_0:;
L_1803db6d6_1:;
wr(s->r,512,1,(((rd(s->r,144,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,144,8)));
L_1803db6d6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x4)),8,0));
L_1803db6d6_3:;
wr(s->r,144,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803db6d6_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db6d6_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803db6d6_6:;
wr(s->u,13,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803db6d6_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803db6d6_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803db6d6_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803db6d6_10:;
/* 1803db6da: cmp r11d, dword ptr [rsi + 0x44] */
L_1803db6da_0:;
L_1803db6da_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x44))));
L_1803db6da_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db6da_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803db6da_4:;
wr(s->r,512,1,(rd(s->r,152,4)<rd(s->u,23,4)));
L_1803db6da_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),rd(s->u,23,4),4,1));
L_1803db6da_6:;
wr(s->u,27,4,(rd(s->r,152,4)-rd(s->u,23,4)));
L_1803db6da_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db6da_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803db6da_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803db6da_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803db6da_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803db6da_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803db6da_13:;
/* 1803db6de: jl 0x1803db686 */
L_1803db6de_0:;
L_1803db6de_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db6de_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803db686);}
L_1803db6de_3:;
return UINT64_C(0x1803db6e0);
}
uint64_t b_1803db6e0(CPU*s){
/* 1803db6e0: jmp 0x1803db72f */
L_1803db6e0_0:;
L_1803db6e0_1:;
return UINT64_C(0x1803db72f);
L_1803db6e0_2:;
return UINT64_C(0x1803db6e2);
}
uint64_t b_1803db6e2(CPU*s){
/* 1803db6e2: cmp dword ptr [rsi + 0x44], r12d */
L_1803db6e2_0:;
L_1803db6e2_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x44))));
L_1803db6e2_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db6e2_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803db6e2_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,160,4)));
L_1803db6e2_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,160,4),4,1));
L_1803db6e2_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,160,4)));
L_1803db6e2_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db6e2_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803db6e2_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803db6e2_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803db6e2_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803db6e2_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803db6e2_13:;
/* 1803db6e6: mov r11d, r12d */
L_1803db6e6_0:;
L_1803db6e6_1:;
wr(s->r,152,4,rd(s->r,160,4));
L_1803db6e6_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803db6e6_3:;
/* 1803db6e9: jle 0x1803db72f */
L_1803db6e9_0:;
L_1803db6e9_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db6e9_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803db6e9_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803db72f);}
L_1803db6e9_4:;
return UINT64_C(0x1803db6eb);
}
uint64_t b_1803db6eb(CPU*s){
/* 1803db6eb: mov r10, r12 */
L_1803db6eb_0:;
L_1803db6eb_1:;
wr(s->r,144,8,rd(s->r,160,8));
L_1803db6eb_2:;
/* 1803db6ee: nop  */
L_1803db6ee_0:;
L_1803db6ee_1:;
/* 1803db6f0: cmp dword ptr [rsi + 0x30], r12d */
L_1803db6f0_0:;
L_1803db6f0_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803db6f0_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db6f0_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803db6f0_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,160,4)));
L_1803db6f0_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,160,4),4,1));
L_1803db6f0_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,160,4)));
L_1803db6f0_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db6f0_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803db6f0_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803db6f0_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803db6f0_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803db6f0_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803db6f0_13:;
/* 1803db6f4: mov r8d, r12d */
L_1803db6f4_0:;
L_1803db6f4_1:;
wr(s->r,128,4,rd(s->r,160,4));
L_1803db6f4_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803db6f4_3:;
/* 1803db6f7: jle 0x1803db722 */
L_1803db6f7_0:;
L_1803db6f7_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db6f7_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803db6f7_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803db722);}
L_1803db6f7_4:;
return UINT64_C(0x1803db6f9);
}
uint64_t b_1803db6f0(CPU*s){
/* 1803db6f0: cmp dword ptr [rsi + 0x30], r12d */
L_1803db6f0_0:;
L_1803db6f0_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803db6f0_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db6f0_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803db6f0_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,160,4)));
L_1803db6f0_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,160,4),4,1));
L_1803db6f0_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,160,4)));
L_1803db6f0_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db6f0_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803db6f0_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803db6f0_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803db6f0_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803db6f0_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803db6f0_13:;
/* 1803db6f4: mov r8d, r12d */
L_1803db6f4_0:;
L_1803db6f4_1:;
wr(s->r,128,4,rd(s->r,160,4));
L_1803db6f4_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803db6f4_3:;
/* 1803db6f7: jle 0x1803db722 */
L_1803db6f7_0:;
L_1803db6f7_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db6f7_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803db6f7_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803db722);}
L_1803db6f7_4:;
return UINT64_C(0x1803db6f9);
}
uint64_t b_1803db6f9(CPU*s){
/* 1803db6f9: mov r9, rbp */
L_1803db6f9_0:;
L_1803db6f9_1:;
wr(s->r,136,8,rd(s->r,40,8));
L_1803db6f9_2:;
/* 1803db6fc: nop dword ptr [rax] */
L_1803db6fc_0:;
L_1803db6fc_1:;
/* 1803db700: mov rax, qword ptr [r9] */
L_1803db700_0:;
L_1803db700_1:;
wr(s->u,64,8,mr((uint64_t)rd(s->r,136,8),8));
L_1803db700_2:;
wr(s->r,0,8,rd(s->u,64,8));
L_1803db700_3:;
/* 1803db703: mov rcx, qword ptr [rsi + 0xe0] */
L_1803db703_0:;
L_1803db703_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xe0))));
L_1803db703_2:;
wr(s->u,64,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db703_3:;
wr(s->r,8,8,rd(s->u,64,8));
L_1803db703_4:;
/* 1803db70a: inc r8d */
L_1803db70a_0:;
L_1803db70a_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x1)),4,0));
L_1803db70a_2:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0x1))));
L_1803db70a_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803db70a_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db70a_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803db70a_6:;
wr(s->u,73,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803db70a_7:;
wr(s->u,81,1,pop(rd(s->u,73,4),4));
L_1803db70a_8:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803db70a_9:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803db70a_10:;
/* 1803db70d: mov eax, dword ptr [r10 + rax] */
L_1803db70d_0:;
L_1803db70d_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803db70d_2:;
wr(s->u,24,8,(rd(s->r,144,8)+rd(s->u,16,8)));
L_1803db70d_3:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803db70d_4:;
wr(s->r,0,4,rd(s->u,60,4));
L_1803db70d_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db70d_6:;
/* 1803db711: inc rdx */
L_1803db711_0:;
L_1803db711_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x1)),8,0));
L_1803db711_2:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x1))));
L_1803db711_3:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db711_4:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803db711_5:;
wr(s->u,73,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803db711_6:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803db711_7:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803db711_8:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803db711_9:;
/* 1803db714: add r9, 8 */
L_1803db714_0:;
L_1803db714_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803db714_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803db714_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803db714_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db714_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803db714_6:;
wr(s->u,73,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803db714_7:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803db714_8:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803db714_9:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803db714_10:;
/* 1803db718: mov dword ptr [rcx + rdx*4 - 4], eax */
L_1803db718_0:;
L_1803db718_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,8,8)));
L_1803db718_2:;
wr(s->u,40,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803db718_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803db718_4:;
wr(s->u,56,4,rd(s->r,0,4));
L_1803db718_5:;
mw((uint64_t)rd(s->u,48,8),4,rd(s->u,56,4));
L_1803db718_6:;
/* 1803db71c: cmp r8d, dword ptr [rsi + 0x30] */
L_1803db71c_0:;
L_1803db71c_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803db71c_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db71c_3:;
wr(s->u,83,4,rd(s->u,56,4));
L_1803db71c_4:;
wr(s->r,512,1,(rd(s->r,128,4)<rd(s->u,83,4)));
L_1803db71c_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->u,83,4),4,1));
L_1803db71c_6:;
wr(s->u,87,4,(rd(s->r,128,4)-rd(s->u,83,4)));
L_1803db71c_7:;
wr(s->r,519,1,(sx(rd(s->u,87,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db71c_8:;
wr(s->r,518,1,(rd(s->u,87,4)==((U)UINT64_C(0x0))));
L_1803db71c_9:;
wr(s->u,73,4,(rd(s->u,87,4)&((U)UINT64_C(0xff))));
L_1803db71c_10:;
wr(s->u,81,1,pop(rd(s->u,73,4),4));
L_1803db71c_11:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803db71c_12:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803db71c_13:;
/* 1803db720: jl 0x1803db700 */
L_1803db720_0:;
L_1803db720_1:;
wr(s->u,72,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db720_2:;
if(rd(s->u,72,1)){goto L_1803db700_0;}
L_1803db720_3:;
return UINT64_C(0x1803db722);
}
uint64_t b_1803db700(CPU*s){
/* 1803db700: mov rax, qword ptr [r9] */
L_1803db700_0:;
L_1803db700_1:;
wr(s->u,64,8,mr((uint64_t)rd(s->r,136,8),8));
L_1803db700_2:;
wr(s->r,0,8,rd(s->u,64,8));
L_1803db700_3:;
/* 1803db703: mov rcx, qword ptr [rsi + 0xe0] */
L_1803db703_0:;
L_1803db703_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xe0))));
L_1803db703_2:;
wr(s->u,64,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db703_3:;
wr(s->r,8,8,rd(s->u,64,8));
L_1803db703_4:;
/* 1803db70a: inc r8d */
L_1803db70a_0:;
L_1803db70a_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x1)),4,0));
L_1803db70a_2:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0x1))));
L_1803db70a_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803db70a_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db70a_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803db70a_6:;
wr(s->u,73,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803db70a_7:;
wr(s->u,81,1,pop(rd(s->u,73,4),4));
L_1803db70a_8:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803db70a_9:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803db70a_10:;
/* 1803db70d: mov eax, dword ptr [r10 + rax] */
L_1803db70d_0:;
L_1803db70d_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803db70d_2:;
wr(s->u,24,8,(rd(s->r,144,8)+rd(s->u,16,8)));
L_1803db70d_3:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803db70d_4:;
wr(s->r,0,4,rd(s->u,60,4));
L_1803db70d_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db70d_6:;
/* 1803db711: inc rdx */
L_1803db711_0:;
L_1803db711_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x1)),8,0));
L_1803db711_2:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x1))));
L_1803db711_3:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db711_4:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803db711_5:;
wr(s->u,73,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803db711_6:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803db711_7:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803db711_8:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803db711_9:;
/* 1803db714: add r9, 8 */
L_1803db714_0:;
L_1803db714_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803db714_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803db714_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803db714_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db714_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803db714_6:;
wr(s->u,73,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803db714_7:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803db714_8:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803db714_9:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803db714_10:;
/* 1803db718: mov dword ptr [rcx + rdx*4 - 4], eax */
L_1803db718_0:;
L_1803db718_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,8,8)));
L_1803db718_2:;
wr(s->u,40,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803db718_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803db718_4:;
wr(s->u,56,4,rd(s->r,0,4));
L_1803db718_5:;
mw((uint64_t)rd(s->u,48,8),4,rd(s->u,56,4));
L_1803db718_6:;
/* 1803db71c: cmp r8d, dword ptr [rsi + 0x30] */
L_1803db71c_0:;
L_1803db71c_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803db71c_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db71c_3:;
wr(s->u,83,4,rd(s->u,56,4));
L_1803db71c_4:;
wr(s->r,512,1,(rd(s->r,128,4)<rd(s->u,83,4)));
L_1803db71c_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->u,83,4),4,1));
L_1803db71c_6:;
wr(s->u,87,4,(rd(s->r,128,4)-rd(s->u,83,4)));
L_1803db71c_7:;
wr(s->r,519,1,(sx(rd(s->u,87,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db71c_8:;
wr(s->r,518,1,(rd(s->u,87,4)==((U)UINT64_C(0x0))));
L_1803db71c_9:;
wr(s->u,73,4,(rd(s->u,87,4)&((U)UINT64_C(0xff))));
L_1803db71c_10:;
wr(s->u,81,1,pop(rd(s->u,73,4),4));
L_1803db71c_11:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803db71c_12:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803db71c_13:;
/* 1803db720: jl 0x1803db700 */
L_1803db720_0:;
L_1803db720_1:;
wr(s->u,72,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db720_2:;
if(rd(s->u,72,1)){goto L_1803db700_0;}
L_1803db720_3:;
return UINT64_C(0x1803db722);
}
uint64_t b_1803db722(CPU*s){
/* 1803db722: inc r11d */
L_1803db722_0:;
L_1803db722_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803db722_2:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803db722_3:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803db722_4:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db722_5:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803db722_6:;
wr(s->u,13,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803db722_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803db722_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803db722_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803db722_10:;
/* 1803db725: add r10, 4 */
L_1803db725_0:;
L_1803db725_1:;
wr(s->r,512,1,(((rd(s->r,144,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,144,8)));
L_1803db725_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x4)),8,0));
L_1803db725_3:;
wr(s->r,144,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803db725_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803db725_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803db725_6:;
wr(s->u,13,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803db725_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803db725_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803db725_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803db725_10:;
/* 1803db729: cmp r11d, dword ptr [rsi + 0x44] */
L_1803db729_0:;
L_1803db729_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x44))));
L_1803db729_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db729_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803db729_4:;
wr(s->r,512,1,(rd(s->r,152,4)<rd(s->u,23,4)));
L_1803db729_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),rd(s->u,23,4),4,1));
L_1803db729_6:;
wr(s->u,27,4,(rd(s->r,152,4)-rd(s->u,23,4)));
L_1803db729_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db729_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803db729_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803db729_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803db729_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803db729_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803db729_13:;
/* 1803db72d: jl 0x1803db6f0 */
L_1803db72d_0:;
L_1803db72d_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803db72d_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803db6f0);}
L_1803db72d_3:;
return UINT64_C(0x1803db72f);
}
uint64_t b_1803db72f(CPU*s){
/* 1803db72f: mov r8d, dword ptr [rsi + 0x30] */
L_1803db72f_0:;
L_1803db72f_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803db72f_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db72f_3:;
wr(s->r,128,4,rd(s->u,44,4));
L_1803db72f_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803db72f_5:;
/* 1803db733: mov eax, dword ptr [rsi + 0x60] */
L_1803db733_0:;
L_1803db733_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x60))));
L_1803db733_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db733_3:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803db733_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db733_5:;
/* 1803db736: movss xmm0, dword ptr [rip + 0x271506] */
L_1803db736_0:;
L_1803db736_1:;
wr(s->r,4608,4,mr(UINT64_C(0x18064cc44),4));
L_1803db736_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803db736_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803db736_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803db736_5:;
/* 1803db73e: add eax, dword ptr [rsi + 0x48] */
L_1803db73e_0:;
L_1803db73e_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x48))));
L_1803db73e_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db73e_3:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->u,44,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803db73e_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db73e_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,44,4),4,0));
L_1803db73e_6:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db73e_7:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->u,44,4)));
L_1803db73e_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db73e_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db73e_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803db73e_11:;
wr(s->u,56,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803db73e_12:;
wr(s->u,60,1,pop(rd(s->u,56,4),4));
L_1803db73e_13:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803db73e_14:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803db73e_15:;
/* 1803db741: movss xmm3, dword ptr [rsi + 0x20] */
L_1803db741_0:;
L_1803db741_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x20))));
L_1803db741_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db741_3:;
wr(s->r,4800,4,rd(s->u,40,4));
L_1803db741_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803db741_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803db741_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803db741_7:;
/* 1803db746: imul eax, r8d */
L_1803db746_0:;
L_1803db746_1:;
wr(s->u,70,8,(U)sx(rd(s->r,0,4),4));
L_1803db746_2:;
wr(s->u,78,8,(U)sx(rd(s->r,128,4),4));
L_1803db746_3:;
wr(s->u,86,8,(rd(s->u,70,8)*rd(s->u,78,8)));
L_1803db746_4:;
wr(s->r,0,4,(rd(s->u,86,8) >> (((U)UINT64_C(0x0))*8)));
L_1803db746_5:;
wr(s->u,94,4,(rd(s->u,86,8) >> (((U)UINT64_C(0x4))*8)));
L_1803db746_6:;
wr(s->u,62,8,(U)sx(rd(s->r,0,4),4));
L_1803db746_7:;
wr(s->r,512,1,(rd(s->u,62,8)!=rd(s->u,86,8)));
L_1803db746_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803db746_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db746_10:;
/* 1803db74a: movsxd rcx, eax */
L_1803db74a_0:;
L_1803db74a_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803db74a_2:;
/* 1803db74d: mov rax, qword ptr [rsi + 0xe0] */
L_1803db74d_0:;
L_1803db74d_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xe0))));
L_1803db74d_2:;
wr(s->u,48,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db74d_3:;
wr(s->r,0,8,rd(s->u,48,8));
L_1803db74d_4:;
/* 1803db754: lea rdx, [rax + rcx*4] */
L_1803db754_0:;
L_1803db754_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803db754_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803db754_3:;
wr(s->r,16,8,rd(s->u,24,8));
L_1803db754_4:;
/* 1803db758: mov eax, dword ptr [rsi + 0x44] */
L_1803db758_0:;
L_1803db758_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x44))));
L_1803db758_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db758_3:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803db758_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db758_5:;
/* 1803db75b: mov rcx, qword ptr [rsi + 0x6710] */
L_1803db75b_0:;
L_1803db75b_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x6710))));
L_1803db75b_2:;
wr(s->u,48,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db75b_3:;
wr(s->r,8,8,rd(s->u,48,8));
L_1803db75b_4:;
/* 1803db762: mov dword ptr [rsp + 0x30], eax */
L_1803db762_0:;
L_1803db762_1:;
wr(s->u,32,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803db762_2:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803db762_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803db762_4:;
/* 1803db766: mov dword ptr [rsp + 0x28], r8d */
L_1803db766_0:;
L_1803db766_1:;
wr(s->u,32,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803db766_2:;
wr(s->u,40,4,rd(s->r,128,4));
L_1803db766_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803db766_4:;
/* 1803db76b: mov r8, rdx */
L_1803db76b_0:;
L_1803db76b_1:;
wr(s->r,128,8,rd(s->r,16,8));
L_1803db76b_2:;
/* 1803db76e: movss dword ptr [rsp + 0x20], xmm0 */
L_1803db76e_0:;
L_1803db76e_1:;
wr(s->u,32,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803db76e_2:;
wr(s->u,40,4,rd(s->r,4608,4));
L_1803db76e_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803db76e_4:;
/* 1803db774: call 0x1803e1910 */
L_1803db774_0:;
L_1803db774_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db774_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db779)));
L_1803db774_3:;
return (uint64_t)UINT64_C(0x1803e1910);
L_1803db774_4:;
return UINT64_C(0x1803db779);
}
uint64_t b_1803db779(CPU*s){
/* 1803db779: mov dword ptr [rsi + 0x64], r12d */
L_1803db779_0:;
L_1803db779_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x64))));
L_1803db779_2:;
wr(s->u,16,4,rd(s->r,160,4));
L_1803db779_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803db779_4:;
/* 1803db77d: mov dword ptr [rsi + 0x68], r12d */
L_1803db77d_0:;
L_1803db77d_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x68))));
L_1803db77d_2:;
wr(s->u,16,4,rd(s->r,160,4));
L_1803db77d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803db77d_4:;
/* 1803db781: movd xmm0, dword ptr [rsi + 0x44] */
L_1803db781_0:;
L_1803db781_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x44))));
L_1803db781_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db781_3:;
wr(s->r,4608,16,rd(s->u,28,4));
L_1803db781_4:;
/* 1803db786: movd xmm1, eax */
L_1803db786_0:;
L_1803db786_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803db786_2:;
/* 1803db78a: add dword ptr [rsi + 0x60], eax */
L_1803db78a_0:;
L_1803db78a_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x60))));
L_1803db78a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db78a_3:;
wr(s->r,512,1,(((rd(s->u,16,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->u,16,4)));
L_1803db78a_4:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db78a_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,16,4),rd(s->r,0,4),4,0));
L_1803db78a_6:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db78a_7:;
wr(s->u,16,4,(rd(s->u,16,4)+rd(s->r,0,4)));
L_1803db78a_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803db78a_9:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db78a_10:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db78a_11:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db78a_12:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_1803db78a_13:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db78a_14:;
wr(s->u,33,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_1803db78a_15:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803db78a_16:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803db78a_17:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803db78a_18:;
/* 1803db78d: cvtdq2ps xmm0, xmm0 */
L_1803db78d_0:;
L_1803db78d_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803db78d_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803db78d_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803db78d_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803db78d_5:;
/* 1803db790: divss xmm0, dword ptr [rsi + 0x20] */
L_1803db790_0:;
L_1803db790_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x20))));
L_1803db790_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db790_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->u,16,4),4),4));
L_1803db790_4:;
/* 1803db795: cvtdq2ps xmm1, xmm1 */
L_1803db795_0:;
L_1803db795_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803db795_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803db795_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803db795_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803db795_5:;
/* 1803db798: subss xmm1, xmm0 */
L_1803db798_0:;
L_1803db798_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803db798_2:;
/* 1803db79c: unpcklps xmm1, xmm1 */
L_1803db79c_0:;
L_1803db79c_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803db79c_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803db79c_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803db79c_4:;
/* 1803db79f: cvtps2pd xmm1, xmm1 */
L_1803db79f_0:;
L_1803db79f_1:;
wr(s->u,39,8,rd(s->r,4672,8));
L_1803db79f_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,39,4),4),8));
L_1803db79f_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,43,4),4),8));
L_1803db79f_4:;
/* 1803db7a2: addsd xmm1, qword ptr [rsi + 0xb0] */
L_1803db7a2_0:;
L_1803db7a2_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xb0))));
L_1803db7a2_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db7a2_3:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->u,20,8),8),8));
L_1803db7a2_4:;
/* 1803db7aa: movsd qword ptr [rsi + 0xb0], xmm1 */
L_1803db7aa_0:;
L_1803db7aa_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xb0))));
L_1803db7aa_2:;
wr(s->u,20,8,rd(s->r,4672,8));
L_1803db7aa_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803db7aa_4:;
/* 1803db7b2: jne 0x1803dbd35 */
L_1803db7b2_0:;
L_1803db7b2_1:;
wr(s->u,32,1,(!rd(s->r,518,1)));
L_1803db7b2_2:;
if(rd(s->u,32,1)){return UINT64_C(0x1803dbd35);}
L_1803db7b2_3:;
return UINT64_C(0x1803db7b8);
}
uint64_t b_1803db7b8(CPU*s){
/* 1803db7b8: or r12d, 0xffffffff */
L_1803db7b8_0:;
L_1803db7b8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db7b8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db7b8_3:;
wr(s->r,160,4,(rd(s->r,160,4)|((U)UINT64_C(0xffffffff))));
L_1803db7b8_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803db7b8_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db7b8_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803db7b8_7:;
wr(s->u,0,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803db7b8_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803db7b8_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803db7b8_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803db7b8_11:;
/* 1803db7bc: jmp 0x1803dbd35 */
L_1803db7bc_0:;
L_1803db7bc_1:;
return UINT64_C(0x1803dbd35);
L_1803db7bc_2:;
return UINT64_C(0x1803db7c1);
}
uint64_t b_1803db7c1(CPU*s){
/* 1803db7c1: movaps xmmword ptr [rsp + 0x340], xmm6 */
L_1803db7c1_0:;
L_1803db7c1_1:;
wr(s->u,8,8,(((U)UINT64_C(0x340))+rd(s->r,32,8)));
L_1803db7c1_2:;
wr(s->u,16,16,rd(s->r,4992,16));
L_1803db7c1_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,16,16));
L_1803db7c1_4:;
/* 1803db7c9: cmp dword ptr [rsi + 0x4c], r12d */
L_1803db7c9_0:;
L_1803db7c9_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x4c))));
L_1803db7c9_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db7c9_3:;
wr(s->u,43,4,rd(s->u,32,4));
L_1803db7c9_4:;
wr(s->r,512,1,(rd(s->u,43,4)<rd(s->r,160,4)));
L_1803db7c9_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,43,4),rd(s->r,160,4),4,1));
L_1803db7c9_6:;
wr(s->u,47,4,(rd(s->u,43,4)-rd(s->r,160,4)));
L_1803db7c9_7:;
wr(s->r,519,1,(sx(rd(s->u,47,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db7c9_8:;
wr(s->r,518,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803db7c9_9:;
wr(s->u,37,4,(rd(s->u,47,4)&((U)UINT64_C(0xff))));
L_1803db7c9_10:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803db7c9_11:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803db7c9_12:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803db7c9_13:;
/* 1803db7cd: jne 0x1803db7e0 */
L_1803db7cd_0:;
L_1803db7cd_1:;
wr(s->u,36,1,(!rd(s->r,518,1)));
L_1803db7cd_2:;
if(rd(s->u,36,1)){return UINT64_C(0x1803db7e0);}
L_1803db7cd_3:;
return UINT64_C(0x1803db7cf);
}
uint64_t b_1803db7cf(CPU*s){
/* 1803db7cf: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803db7cf_0:;
L_1803db7cf_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803db7cf_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db7cf_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803db7cf_4:;
/* 1803db7d6: call 0x1803da8e0 */
L_1803db7d6_0:;
L_1803db7d6_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db7d6_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db7db)));
L_1803db7d6_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803db7d6_4:;
return UINT64_C(0x1803db7db);
}
uint64_t b_1803db7db(CPU*s){
/* 1803db7db: mov dword ptr [rsi + 0x34], eax */
L_1803db7db_0:;
L_1803db7db_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x34))));
L_1803db7db_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803db7db_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803db7db_4:;
/* 1803db7de: jmp 0x1803db830 */
L_1803db7de_0:;
L_1803db7de_1:;
return UINT64_C(0x1803db830);
L_1803db7de_2:;
return UINT64_C(0x1803db7e0);
}
uint64_t b_1803db7e0(CPU*s){
/* 1803db7e0: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803db7e0_0:;
L_1803db7e0_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803db7e0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db7e0_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803db7e0_4:;
/* 1803db7e7: call 0x1803da8c0 */
L_1803db7e7_0:;
L_1803db7e7_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db7e7_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db7ec)));
L_1803db7e7_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803db7e7_4:;
return UINT64_C(0x1803db7ec);
}
uint64_t b_1803db7ec(CPU*s){
/* 1803db7ec: mov r11d, eax */
L_1803db7ec_0:;
L_1803db7ec_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803db7ec_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803db7ec_3:;
/* 1803db7ef: mov eax, dword ptr [rsi + 0x3c] */
L_1803db7ef_0:;
L_1803db7ef_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803db7ef_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db7ef_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803db7ef_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db7ef_5:;
/* 1803db7f2: sar eax, 1 */
L_1803db7f2_0:;
L_1803db7f2_1:;
wr(s->u,91,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803db7f2_2:;
wr(s->r,512,1,(rd(s->u,91,4)!=((U)UINT64_C(0x0))));
L_1803db7f2_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db7f2_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803db7f2_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db7f2_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db7f2_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803db7f2_8:;
wr(s->u,13,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803db7f2_9:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803db7f2_10:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803db7f2_11:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803db7f2_12:;
/* 1803db7f4: cdq  */
L_1803db7f4_0:;
L_1803db7f4_1:;
wr(s->u,19,8,(U)sx(rd(s->r,0,4),4));
L_1803db7f4_2:;
wr(s->r,16,4,(rd(s->u,19,8) >> (((U)UINT64_C(0x4))*8)));
L_1803db7f4_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803db7f4_4:;
/* 1803db7f5: idiv r11d */
L_1803db7f5_0:;
L_1803db7f5_1:;
wr(s->u,35,8,(U)sx(rd(s->r,152,4),4));
L_1803db7f5_2:;
wr(s->u,43,8,rd(s->r,16,4));
L_1803db7f5_3:;
wr(s->u,51,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,43,8)<<((U)UINT64_C(0x20)))));
L_1803db7f5_4:;
wr(s->u,59,8,rd(s->r,0,4));
L_1803db7f5_5:;
wr(s->u,67,8,(rd(s->u,51,8)|rd(s->u,59,8)));
L_1803db7f5_6:;
wr(s->u,75,8,((U)(sx(rd(s->u,67,8),8)/sx(rd(s->u,35,8),8))));
L_1803db7f5_7:;
wr(s->r,0,4,(rd(s->u,75,8) >> (((U)UINT64_C(0x0))*8)));
L_1803db7f5_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db7f5_9:;
wr(s->u,83,8,((U)(sx(rd(s->u,67,8),8)%sx(rd(s->u,35,8),8))));
L_1803db7f5_10:;
wr(s->r,16,4,(rd(s->u,83,8) >> (((U)UINT64_C(0x0))*8)));
L_1803db7f5_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803db7f5_12:;
/* 1803db7f8: cmp eax, 1 */
L_1803db7f8_0:;
L_1803db7f8_1:;
wr(s->u,27,4,rd(s->r,0,4));
L_1803db7f8_2:;
wr(s->r,512,1,(rd(s->u,27,4)<((U)UINT64_C(0x1))));
L_1803db7f8_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,27,4),((U)UINT64_C(0x1)),4,1));
L_1803db7f8_4:;
wr(s->u,31,4,(rd(s->u,27,4)-((U)UINT64_C(0x1))));
L_1803db7f8_5:;
wr(s->r,519,1,(sx(rd(s->u,31,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db7f8_6:;
wr(s->r,518,1,(rd(s->u,31,4)==((U)UINT64_C(0x0))));
L_1803db7f8_7:;
wr(s->u,13,4,(rd(s->u,31,4)&((U)UINT64_C(0xff))));
L_1803db7f8_8:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803db7f8_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803db7f8_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803db7f8_11:;
/* 1803db7fb: jge 0x1803db804 */
L_1803db7fb_0:;
L_1803db7fb_1:;
wr(s->u,12,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803db7fb_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803db804);}
L_1803db7fb_3:;
return UINT64_C(0x1803db7fd);
}
uint64_t b_1803db7fd(CPU*s){
/* 1803db7fd: mov ebx, 1 */
L_1803db7fd_0:;
L_1803db7fd_1:;
wr(s->r,24,8,((U)UINT64_C(0x1)));
L_1803db7fd_2:;
/* 1803db802: jmp 0x1803db81e */
L_1803db802_0:;
L_1803db802_1:;
return UINT64_C(0x1803db81e);
L_1803db802_2:;
return UINT64_C(0x1803db804);
}
uint64_t b_1803db804(CPU*s){
/* 1803db804: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803db804_0:;
L_1803db804_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803db804_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db804_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803db804_4:;
/* 1803db80b: call 0x1803da8c0 */
L_1803db80b_0:;
L_1803db80b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db80b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db810)));
L_1803db80b_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803db80b_4:;
return UINT64_C(0x1803db810);
}
uint64_t b_1803db810(CPU*s){
/* 1803db810: mov r11d, eax */
L_1803db810_0:;
L_1803db810_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803db810_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803db810_3:;
/* 1803db813: mov eax, dword ptr [rsi + 0x3c] */
L_1803db813_0:;
L_1803db813_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803db813_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db813_3:;
wr(s->r,0,4,rd(s->u,16,4));
L_1803db813_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db813_5:;
/* 1803db816: sar eax, 1 */
L_1803db816_0:;
L_1803db816_1:;
wr(s->u,98,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803db816_2:;
wr(s->r,512,1,(rd(s->u,98,4)!=((U)UINT64_C(0x0))));
L_1803db816_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db816_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803db816_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db816_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db816_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803db816_8:;
wr(s->u,28,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803db816_9:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803db816_10:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803db816_11:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803db816_12:;
/* 1803db818: cdq  */
L_1803db818_0:;
L_1803db818_1:;
wr(s->u,34,8,(U)sx(rd(s->r,0,4),4));
L_1803db818_2:;
wr(s->r,16,4,(rd(s->u,34,8) >> (((U)UINT64_C(0x4))*8)));
L_1803db818_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803db818_4:;
/* 1803db819: idiv r11d */
L_1803db819_0:;
L_1803db819_1:;
wr(s->u,42,8,(U)sx(rd(s->r,152,4),4));
L_1803db819_2:;
wr(s->u,50,8,rd(s->r,16,4));
L_1803db819_3:;
wr(s->u,58,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,50,8)<<((U)UINT64_C(0x20)))));
L_1803db819_4:;
wr(s->u,66,8,rd(s->r,0,4));
L_1803db819_5:;
wr(s->u,74,8,(rd(s->u,58,8)|rd(s->u,66,8)));
L_1803db819_6:;
wr(s->u,82,8,((U)(sx(rd(s->u,74,8),8)/sx(rd(s->u,42,8),8))));
L_1803db819_7:;
wr(s->r,0,4,(rd(s->u,82,8) >> (((U)UINT64_C(0x0))*8)));
L_1803db819_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db819_9:;
wr(s->u,90,8,((U)(sx(rd(s->u,74,8),8)%sx(rd(s->u,42,8),8))));
L_1803db819_10:;
wr(s->r,16,4,(rd(s->u,90,8) >> (((U)UINT64_C(0x0))*8)));
L_1803db819_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803db819_12:;
/* 1803db81c: mov ebx, eax */
L_1803db81c_0:;
L_1803db81c_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803db81c_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803db81c_3:;
/* 1803db81e: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803db81e_0:;
L_1803db81e_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803db81e_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db81e_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803db81e_4:;
/* 1803db825: call 0x1803da8e0 */
L_1803db825_0:;
L_1803db825_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db825_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db82a)));
L_1803db825_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803db825_4:;
return UINT64_C(0x1803db82a);
}
uint64_t b_1803db81e(CPU*s){
/* 1803db81e: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803db81e_0:;
L_1803db81e_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803db81e_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db81e_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803db81e_4:;
/* 1803db825: call 0x1803da8e0 */
L_1803db825_0:;
L_1803db825_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db825_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db82a)));
L_1803db825_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803db825_4:;
return UINT64_C(0x1803db82a);
}
uint64_t b_1803db82a(CPU*s){
/* 1803db82a: imul eax, ebx */
L_1803db82a_0:;
L_1803db82a_1:;
wr(s->u,48,8,(U)sx(rd(s->r,0,4),4));
L_1803db82a_2:;
wr(s->u,56,8,(U)sx(rd(s->r,24,4),4));
L_1803db82a_3:;
wr(s->u,64,8,(rd(s->u,48,8)*rd(s->u,56,8)));
L_1803db82a_4:;
wr(s->r,0,4,(rd(s->u,64,8) >> (((U)UINT64_C(0x0))*8)));
L_1803db82a_5:;
wr(s->u,72,4,(rd(s->u,64,8) >> (((U)UINT64_C(0x4))*8)));
L_1803db82a_6:;
wr(s->u,32,8,(U)sx(rd(s->r,0,4),4));
L_1803db82a_7:;
wr(s->r,512,1,(rd(s->u,32,8)!=rd(s->u,64,8)));
L_1803db82a_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803db82a_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db82a_10:;
/* 1803db82d: mov dword ptr [rsi + 0x34], eax */
L_1803db82d_0:;
L_1803db82d_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x34))));
L_1803db82d_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803db82d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803db82d_4:;
/* 1803db830: mov edx, dword ptr [rsi + 0x34] */
L_1803db830_0:;
L_1803db830_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x34))));
L_1803db830_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db830_3:;
wr(s->r,16,4,rd(s->u,20,4));
L_1803db830_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803db830_5:;
/* 1803db833: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803db833_0:;
L_1803db833_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803db833_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db833_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803db833_4:;
/* 1803db83a: mov dword ptr [rsi + 0x54], edx */
L_1803db83a_0:;
L_1803db83a_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x54))));
L_1803db83a_2:;
wr(s->u,16,4,rd(s->r,16,4));
L_1803db83a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803db83a_4:;
/* 1803db83d: mov rax, qword ptr [rcx] */
L_1803db83d_0:;
L_1803db83d_1:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803db83d_2:;
wr(s->r,0,8,rd(s->u,24,8));
L_1803db83d_3:;
/* 1803db840: call qword ptr [rax + 0x18] */
L_1803db840_0:;
L_1803db840_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x18))));
L_1803db840_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db840_3:;
wr(s->u,40,8,rd(s->u,24,8));
L_1803db840_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db840_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db843)));
L_1803db840_6:;
return (uint64_t)rd(s->u,40,8);
L_1803db840_7:;
return UINT64_C(0x1803db843);
}
uint64_t b_1803db830(CPU*s){
/* 1803db830: mov edx, dword ptr [rsi + 0x34] */
L_1803db830_0:;
L_1803db830_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x34))));
L_1803db830_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db830_3:;
wr(s->r,16,4,rd(s->u,20,4));
L_1803db830_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803db830_5:;
/* 1803db833: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803db833_0:;
L_1803db833_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803db833_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db833_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803db833_4:;
/* 1803db83a: mov dword ptr [rsi + 0x54], edx */
L_1803db83a_0:;
L_1803db83a_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x54))));
L_1803db83a_2:;
wr(s->u,16,4,rd(s->r,16,4));
L_1803db83a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803db83a_4:;
/* 1803db83d: mov rax, qword ptr [rcx] */
L_1803db83d_0:;
L_1803db83d_1:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803db83d_2:;
wr(s->r,0,8,rd(s->u,24,8));
L_1803db83d_3:;
/* 1803db840: call qword ptr [rax + 0x18] */
L_1803db840_0:;
L_1803db840_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x18))));
L_1803db840_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db840_3:;
wr(s->u,32,8,rd(s->u,24,8));
L_1803db840_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db840_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db843)));
L_1803db840_6:;
return (uint64_t)rd(s->u,32,8);
L_1803db840_7:;
return UINT64_C(0x1803db843);
}
uint64_t b_1803db843(CPU*s){
/* 1803db843: mov rcx, qword ptr [rsi + 0x6708] */
L_1803db843_0:;
L_1803db843_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x6708))));
L_1803db843_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db843_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803db843_4:;
/* 1803db84a: mov edx, dword ptr [rsi + 0x54] */
L_1803db84a_0:;
L_1803db84a_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x54))));
L_1803db84a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db84a_3:;
wr(s->r,16,4,rd(s->u,16,4));
L_1803db84a_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803db84a_5:;
/* 1803db84d: mov rax, qword ptr [rcx] */
L_1803db84d_0:;
L_1803db84d_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803db84d_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803db84d_3:;
/* 1803db850: call qword ptr [rax + 0x28] */
L_1803db850_0:;
L_1803db850_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x28))));
L_1803db850_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db850_3:;
wr(s->u,28,8,rd(s->u,20,8));
L_1803db850_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db850_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db853)));
L_1803db850_6:;
return (uint64_t)rd(s->u,28,8);
L_1803db850_7:;
return UINT64_C(0x1803db853);
}
uint64_t b_1803db853(CPU*s){
/* 1803db853: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803db853_0:;
L_1803db853_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803db853_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db853_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803db853_4:;
/* 1803db85a: mov rax, qword ptr [rcx] */
L_1803db85a_0:;
L_1803db85a_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803db85a_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803db85a_3:;
/* 1803db85d: call qword ptr [rax + 0x48] */
L_1803db85d_0:;
L_1803db85d_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x48))));
L_1803db85d_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db85d_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803db85d_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db85d_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db860)));
L_1803db85d_6:;
return (uint64_t)rd(s->u,24,8);
L_1803db85d_7:;
return UINT64_C(0x1803db860);
}
uint64_t b_1803db860(CPU*s){
/* 1803db860: cmp eax, dword ptr [rsi + 0x54] */
L_1803db860_0:;
L_1803db860_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x54))));
L_1803db860_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db860_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803db860_4:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,19,4)));
L_1803db860_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,19,4),4,1));
L_1803db860_6:;
wr(s->u,23,4,(rd(s->r,0,4)-rd(s->u,19,4)));
L_1803db860_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db860_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803db860_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803db860_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803db860_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803db860_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803db860_13:;
/* 1803db863: jge 0x1803db87f */
L_1803db863_0:;
L_1803db863_1:;
wr(s->u,12,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803db863_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803db87f);}
L_1803db863_3:;
return UINT64_C(0x1803db865);
}
uint64_t b_1803db865(CPU*s){
/* 1803db865: mov rcx, qword ptr [rsi + 0x6708] */
L_1803db865_0:;
L_1803db865_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x6708))));
L_1803db865_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db865_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803db865_4:;
/* 1803db86c: movss xmm1, dword ptr [rsi + 0x18] */
L_1803db86c_0:;
L_1803db86c_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x18))));
L_1803db86c_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db86c_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803db86c_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803db86c_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803db86c_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803db86c_7:;
/* 1803db871: mov rax, qword ptr [rcx] */
L_1803db871_0:;
L_1803db871_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803db871_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803db871_3:;
/* 1803db874: call qword ptr [rax + 0x48] */
L_1803db874_0:;
L_1803db874_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x48))));
L_1803db874_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db874_3:;
wr(s->u,28,8,rd(s->u,20,8));
L_1803db874_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db874_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db877)));
L_1803db874_6:;
return (uint64_t)rd(s->u,28,8);
L_1803db874_7:;
return UINT64_C(0x1803db877);
}
uint64_t b_1803db877(CPU*s){
/* 1803db877: mov r11d, dword ptr [rsi + 0x18] */
L_1803db877_0:;
L_1803db877_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x18))));
L_1803db877_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db877_3:;
wr(s->r,152,4,rd(s->u,28,4));
L_1803db877_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803db877_5:;
/* 1803db87b: mov dword ptr [rsi + 0x1c], r11d */
L_1803db87b_0:;
L_1803db87b_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x1c))));
L_1803db87b_2:;
wr(s->u,16,4,rd(s->r,152,4));
L_1803db87b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803db87b_4:;
/* 1803db87f: mov ecx, dword ptr [rsi + 0x54] */
L_1803db87f_0:;
L_1803db87f_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x54))));
L_1803db87f_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db87f_3:;
wr(s->r,8,4,rd(s->u,28,4));
L_1803db87f_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803db87f_5:;
/* 1803db882: movsd xmm0, qword ptr [rsi + 0xa0] */
L_1803db882_0:;
L_1803db882_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xa0))));
L_1803db882_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db882_3:;
wr(s->r,4608,8,rd(s->u,20,8));
L_1803db882_4:;
wr(s->r,4616,8,((U)UINT64_C(0x0)));
L_1803db882_5:;
/* 1803db88a: movss xmm6, dword ptr [rsi + 0x24] */
L_1803db88a_0:;
L_1803db88a_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x24))));
L_1803db88a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db88a_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803db88a_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803db88a_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803db88a_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803db88a_7:;
/* 1803db88f: subsd xmm0, qword ptr [rsi + 0xa8] */
L_1803db88f_0:;
L_1803db88f_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xa8))));
L_1803db88f_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db88f_3:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)-fv(rd(s->u,20,8),8),8));
L_1803db88f_4:;
/* 1803db897: movd xmm5, ecx */
L_1803db897_0:;
L_1803db897_1:;
wr(s->r,4928,16,rd(s->r,8,4));
L_1803db897_2:;
/* 1803db89b: cvttsd2si eax, xmm0 */
L_1803db89b_0:;
L_1803db89b_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,8),8),4));
L_1803db89b_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db89b_3:;
/* 1803db89f: cvtdq2ps xmm5, xmm5 */
L_1803db89f_0:;
L_1803db89f_1:;
wr(s->r,4928,4,fb((double)sx(rd(s->r,4928,4),4),4));
L_1803db89f_2:;
wr(s->r,4932,4,fb((double)sx(rd(s->r,4932,4),4),4));
L_1803db89f_3:;
wr(s->r,4936,4,fb((double)sx(rd(s->r,4936,4),4),4));
L_1803db89f_4:;
wr(s->r,4940,4,fb((double)sx(rd(s->r,4940,4),4),4));
L_1803db89f_5:;
/* 1803db8a2: movaps xmm4, xmm5 */
L_1803db8a2_0:;
L_1803db8a2_1:;
wr(s->r,4864,4,rd(s->r,4928,4));
L_1803db8a2_2:;
wr(s->r,4868,4,rd(s->r,4932,4));
L_1803db8a2_3:;
wr(s->r,4872,4,rd(s->r,4936,4));
L_1803db8a2_4:;
wr(s->r,4876,4,rd(s->r,4940,4));
L_1803db8a2_5:;
/* 1803db8a5: divss xmm4, xmm6 */
L_1803db8a5_0:;
L_1803db8a5_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)/fv(rd(s->r,4992,4),4),4));
L_1803db8a5_2:;
/* 1803db8a9: test eax, eax */
L_1803db8a9_0:;
L_1803db8a9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db8a9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db8a9_3:;
wr(s->u,38,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803db8a9_4:;
wr(s->r,519,1,(sx(rd(s->u,38,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db8a9_5:;
wr(s->r,518,1,(rd(s->u,38,4)==((U)UINT64_C(0x0))));
L_1803db8a9_6:;
wr(s->u,32,4,(rd(s->u,38,4)&((U)UINT64_C(0xff))));
L_1803db8a9_7:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803db8a9_8:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803db8a9_9:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803db8a9_10:;
/* 1803db8ab: je 0x1803db91c */
L_1803db8ab_0:;
L_1803db8ab_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803db91c);}
L_1803db8ab_2:;
return UINT64_C(0x1803db8ad);
}
uint64_t b_1803db87f(CPU*s){
/* 1803db87f: mov ecx, dword ptr [rsi + 0x54] */
L_1803db87f_0:;
L_1803db87f_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x54))));
L_1803db87f_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db87f_3:;
wr(s->r,8,4,rd(s->u,28,4));
L_1803db87f_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803db87f_5:;
/* 1803db882: movsd xmm0, qword ptr [rsi + 0xa0] */
L_1803db882_0:;
L_1803db882_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xa0))));
L_1803db882_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db882_3:;
wr(s->r,4608,8,rd(s->u,20,8));
L_1803db882_4:;
wr(s->r,4616,8,((U)UINT64_C(0x0)));
L_1803db882_5:;
/* 1803db88a: movss xmm6, dword ptr [rsi + 0x24] */
L_1803db88a_0:;
L_1803db88a_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x24))));
L_1803db88a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db88a_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803db88a_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803db88a_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803db88a_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803db88a_7:;
/* 1803db88f: subsd xmm0, qword ptr [rsi + 0xa8] */
L_1803db88f_0:;
L_1803db88f_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xa8))));
L_1803db88f_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db88f_3:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)-fv(rd(s->u,20,8),8),8));
L_1803db88f_4:;
/* 1803db897: movd xmm5, ecx */
L_1803db897_0:;
L_1803db897_1:;
wr(s->r,4928,16,rd(s->r,8,4));
L_1803db897_2:;
/* 1803db89b: cvttsd2si eax, xmm0 */
L_1803db89b_0:;
L_1803db89b_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,8),8),4));
L_1803db89b_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db89b_3:;
/* 1803db89f: cvtdq2ps xmm5, xmm5 */
L_1803db89f_0:;
L_1803db89f_1:;
wr(s->r,4928,4,fb((double)sx(rd(s->r,4928,4),4),4));
L_1803db89f_2:;
wr(s->r,4932,4,fb((double)sx(rd(s->r,4932,4),4),4));
L_1803db89f_3:;
wr(s->r,4936,4,fb((double)sx(rd(s->r,4936,4),4),4));
L_1803db89f_4:;
wr(s->r,4940,4,fb((double)sx(rd(s->r,4940,4),4),4));
L_1803db89f_5:;
/* 1803db8a2: movaps xmm4, xmm5 */
L_1803db8a2_0:;
L_1803db8a2_1:;
wr(s->r,4864,4,rd(s->r,4928,4));
L_1803db8a2_2:;
wr(s->r,4868,4,rd(s->r,4932,4));
L_1803db8a2_3:;
wr(s->r,4872,4,rd(s->r,4936,4));
L_1803db8a2_4:;
wr(s->r,4876,4,rd(s->r,4940,4));
L_1803db8a2_5:;
/* 1803db8a5: divss xmm4, xmm6 */
L_1803db8a5_0:;
L_1803db8a5_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)/fv(rd(s->r,4992,4),4),4));
L_1803db8a5_2:;
/* 1803db8a9: test eax, eax */
L_1803db8a9_0:;
L_1803db8a9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db8a9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db8a9_3:;
wr(s->u,38,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803db8a9_4:;
wr(s->r,519,1,(sx(rd(s->u,38,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db8a9_5:;
wr(s->r,518,1,(rd(s->u,38,4)==((U)UINT64_C(0x0))));
L_1803db8a9_6:;
wr(s->u,32,4,(rd(s->u,38,4)&((U)UINT64_C(0xff))));
L_1803db8a9_7:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803db8a9_8:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803db8a9_9:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803db8a9_10:;
/* 1803db8ab: je 0x1803db91c */
L_1803db8ab_0:;
L_1803db8ab_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803db91c);}
L_1803db8ab_2:;
return UINT64_C(0x1803db8ad);
}
uint64_t b_1803db8ad(CPU*s){
/* 1803db8ad: movsd xmm3, qword ptr [rsi + 0xa0] */
L_1803db8ad_0:;
L_1803db8ad_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xa0))));
L_1803db8ad_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db8ad_3:;
wr(s->r,4800,8,rd(s->u,16,8));
L_1803db8ad_4:;
wr(s->r,4808,8,((U)UINT64_C(0x0)));
L_1803db8ad_5:;
/* 1803db8b5: mov eax, dword ptr [rsi + 0x3c] */
L_1803db8b5_0:;
L_1803db8b5_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803db8b5_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db8b5_3:;
wr(s->r,0,4,rd(s->u,24,4));
L_1803db8b5_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db8b5_5:;
/* 1803db8b8: addsd xmm3, qword ptr [rsi + 0xb0] */
L_1803db8b8_0:;
L_1803db8b8_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xb0))));
L_1803db8b8_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db8b8_3:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->u,16,8),8),8));
L_1803db8b8_4:;
/* 1803db8c0: add eax, eax */
L_1803db8c0_0:;
L_1803db8c0_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803db8c0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,0,4),4,0));
L_1803db8c0_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,0,4)));
L_1803db8c0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db8c0_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db8c0_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803db8c0_7:;
wr(s->u,30,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803db8c0_8:;
wr(s->u,34,1,pop(rd(s->u,30,4),4));
L_1803db8c0_9:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803db8c0_10:;
wr(s->r,514,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803db8c0_11:;
/* 1803db8c2: subsd xmm3, qword ptr [rsi + 0xa8] */
L_1803db8c2_0:;
L_1803db8c2_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xa8))));
L_1803db8c2_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db8c2_3:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)-fv(rd(s->u,16,8),8),8));
L_1803db8c2_4:;
/* 1803db8ca: movd xmm2, eax */
L_1803db8ca_0:;
L_1803db8ca_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803db8ca_2:;
/* 1803db8ce: movapd xmm0, xmm3 */
L_1803db8ce_0:;
L_1803db8ce_1:;
wr(s->r,4608,8,rd(s->r,4800,8));
L_1803db8ce_2:;
wr(s->r,4616,8,rd(s->r,4808,8));
L_1803db8ce_3:;
/* 1803db8d2: cvtdq2ps xmm2, xmm2 */
L_1803db8d2_0:;
L_1803db8d2_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803db8d2_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803db8d2_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803db8d2_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803db8d2_5:;
/* 1803db8d5: andpd xmm0, xmmword ptr [rip + 0x276ef3] */
L_1803db8d5_0:;
L_1803db8d5_1:;
wr(s->u,40,16,mr(UINT64_C(0x1806527d0),16));
L_1803db8d5_2:;
wr(s->r,4608,8,(rd(s->r,4608,8)&rd(s->u,40,8)));
L_1803db8d5_3:;
wr(s->r,4616,8,(rd(s->r,4616,8)&rd(s->u,48,8)));
L_1803db8d5_4:;
/* 1803db8dd: mulsd xmm0, qword ptr [rip + 0x283e7b] */
L_1803db8dd_0:;
L_1803db8dd_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(mr(UINT64_C(0x18065f760),8),8),8));
L_1803db8dd_2:;
/* 1803db8e5: cvtsd2ss xmm1, xmm0 */
L_1803db8e5_0:;
L_1803db8e5_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4608,8),8),4));
L_1803db8e5_2:;
/* 1803db8e9: comiss xmm2, xmm1 */
L_1803db8e9_0:;
L_1803db8e9_1:;
wr(s->u,36,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803db8e9_2:;
wr(s->u,37,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803db8e9_3:;
wr(s->r,514,1,((rd(s->u,36,1)!=0)||(rd(s->u,37,1)!=0)));
L_1803db8e9_4:;
wr(s->u,38,1,(fv(rd(s->r,4736,4),4)==fv(rd(s->r,4672,4),4)));
L_1803db8e9_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,38,1)));
L_1803db8e9_6:;
wr(s->u,39,1,(fv(rd(s->r,4736,4),4)<fv(rd(s->r,4672,4),4)));
L_1803db8e9_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,39,1)));
L_1803db8e9_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db8e9_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803db8e9_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803db8e9_11:;
/* 1803db8ec: ja 0x1803db8f1 */
L_1803db8ec_0:;
L_1803db8ec_1:;
wr(s->u,28,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803db8ec_2:;
wr(s->u,29,1,(!rd(s->u,28,1)));
L_1803db8ec_3:;
if(rd(s->u,29,1)){return UINT64_C(0x1803db8f1);}
L_1803db8ec_4:;
return UINT64_C(0x1803db8ee);
}
uint64_t b_1803db8ee(CPU*s){
/* 1803db8ee: movaps xmm2, xmm1 */
L_1803db8ee_0:;
L_1803db8ee_1:;
wr(s->r,4736,4,rd(s->r,4672,4));
L_1803db8ee_2:;
wr(s->r,4740,4,rd(s->r,4676,4));
L_1803db8ee_3:;
wr(s->r,4744,4,rd(s->r,4680,4));
L_1803db8ee_4:;
wr(s->r,4748,4,rd(s->r,4684,4));
L_1803db8ee_5:;
/* 1803db8f1: movss dword ptr [rsi + 0xb8], xmm2 */
L_1803db8f1_0:;
L_1803db8f1_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xb8))));
L_1803db8f1_2:;
wr(s->u,16,4,rd(s->r,4736,4));
L_1803db8f1_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803db8f1_4:;
/* 1803db8f9: unpcklps xmm2, xmm2 */
L_1803db8f9_0:;
L_1803db8f9_1:;
wr(s->r,4744,4,rd(s->r,4740,4));
L_1803db8f9_2:;
wr(s->r,4748,4,rd(s->r,4740,4));
L_1803db8f9_3:;
wr(s->r,4740,4,rd(s->r,4736,4));
L_1803db8f9_4:;
/* 1803db8fc: cvtps2pd xmm1, xmm2 */
L_1803db8fc_0:;
L_1803db8fc_1:;
wr(s->u,20,8,rd(s->r,4736,8));
L_1803db8fc_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,20,4),4),8));
L_1803db8fc_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,24,4),4),8));
L_1803db8fc_4:;
/* 1803db8ff: unpcklps xmm2, xmm2 */
L_1803db8ff_0:;
L_1803db8ff_1:;
wr(s->r,4744,4,rd(s->r,4740,4));
L_1803db8ff_2:;
wr(s->r,4748,4,rd(s->r,4740,4));
L_1803db8ff_3:;
wr(s->r,4740,4,rd(s->r,4736,4));
L_1803db8ff_4:;
/* 1803db902: addsd xmm1, xmm3 */
L_1803db902_0:;
L_1803db902_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803db902_2:;
/* 1803db906: cvtps2pd xmm0, xmm2 */
L_1803db906_0:;
L_1803db906_1:;
wr(s->u,20,8,rd(s->r,4736,8));
L_1803db906_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,20,4),4),8));
L_1803db906_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,24,4),4),8));
L_1803db906_4:;
/* 1803db909: divsd xmm1, xmm0 */
L_1803db909_0:;
L_1803db909_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)/fv(rd(s->r,4608,8),8),8));
L_1803db909_2:;
/* 1803db90d: cvtsd2ss xmm1, xmm1 */
L_1803db90d_0:;
L_1803db90d_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,8),8),4));
L_1803db90d_2:;
/* 1803db911: mulss xmm1, xmm6 */
L_1803db911_0:;
L_1803db911_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803db911_2:;
/* 1803db915: movss dword ptr [rsi + 0x20], xmm1 */
L_1803db915_0:;
L_1803db915_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x20))));
L_1803db915_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803db915_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803db915_4:;
/* 1803db91a: jmp 0x1803db921 */
L_1803db91a_0:;
L_1803db91a_1:;
return UINT64_C(0x1803db921);
L_1803db91a_2:;
return UINT64_C(0x1803db91c);
}
uint64_t b_1803db8f1(CPU*s){
/* 1803db8f1: movss dword ptr [rsi + 0xb8], xmm2 */
L_1803db8f1_0:;
L_1803db8f1_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xb8))));
L_1803db8f1_2:;
wr(s->u,16,4,rd(s->r,4736,4));
L_1803db8f1_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803db8f1_4:;
/* 1803db8f9: unpcklps xmm2, xmm2 */
L_1803db8f9_0:;
L_1803db8f9_1:;
wr(s->r,4744,4,rd(s->r,4740,4));
L_1803db8f9_2:;
wr(s->r,4748,4,rd(s->r,4740,4));
L_1803db8f9_3:;
wr(s->r,4740,4,rd(s->r,4736,4));
L_1803db8f9_4:;
/* 1803db8fc: cvtps2pd xmm1, xmm2 */
L_1803db8fc_0:;
L_1803db8fc_1:;
wr(s->u,20,8,rd(s->r,4736,8));
L_1803db8fc_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,20,4),4),8));
L_1803db8fc_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,24,4),4),8));
L_1803db8fc_4:;
/* 1803db8ff: unpcklps xmm2, xmm2 */
L_1803db8ff_0:;
L_1803db8ff_1:;
wr(s->r,4744,4,rd(s->r,4740,4));
L_1803db8ff_2:;
wr(s->r,4748,4,rd(s->r,4740,4));
L_1803db8ff_3:;
wr(s->r,4740,4,rd(s->r,4736,4));
L_1803db8ff_4:;
/* 1803db902: addsd xmm1, xmm3 */
L_1803db902_0:;
L_1803db902_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803db902_2:;
/* 1803db906: cvtps2pd xmm0, xmm2 */
L_1803db906_0:;
L_1803db906_1:;
wr(s->u,20,8,rd(s->r,4736,8));
L_1803db906_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,20,4),4),8));
L_1803db906_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,24,4),4),8));
L_1803db906_4:;
/* 1803db909: divsd xmm1, xmm0 */
L_1803db909_0:;
L_1803db909_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)/fv(rd(s->r,4608,8),8),8));
L_1803db909_2:;
/* 1803db90d: cvtsd2ss xmm1, xmm1 */
L_1803db90d_0:;
L_1803db90d_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,8),8),4));
L_1803db90d_2:;
/* 1803db911: mulss xmm1, xmm6 */
L_1803db911_0:;
L_1803db911_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803db911_2:;
/* 1803db915: movss dword ptr [rsi + 0x20], xmm1 */
L_1803db915_0:;
L_1803db915_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x20))));
L_1803db915_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803db915_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803db915_4:;
/* 1803db91a: jmp 0x1803db921 */
L_1803db91a_0:;
L_1803db91a_1:;
return UINT64_C(0x1803db921);
L_1803db91a_2:;
return UINT64_C(0x1803db91c);
}
uint64_t b_1803db91c(CPU*s){
/* 1803db91c: movss dword ptr [rsi + 0x20], xmm6 */
L_1803db91c_0:;
L_1803db91c_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x20))));
L_1803db91c_2:;
wr(s->u,24,4,rd(s->r,4992,4));
L_1803db91c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803db91c_4:;
/* 1803db921: divss xmm5, dword ptr [rsi + 0x20] */
L_1803db921_0:;
L_1803db921_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x20))));
L_1803db921_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db921_3:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)/fv(rd(s->u,24,4),4),4));
L_1803db921_4:;
/* 1803db926: movaps xmm6, xmmword ptr [rsp + 0x340] */
L_1803db926_0:;
L_1803db926_1:;
wr(s->u,16,8,(((U)UINT64_C(0x340))+rd(s->r,32,8)));
L_1803db926_2:;
wr(s->u,36,16,mr((uint64_t)rd(s->u,16,8),16));
L_1803db926_3:;
wr(s->u,78,16,rd(s->u,36,16));
L_1803db926_4:;
wr(s->r,4992,4,rd(s->u,78,4));
L_1803db926_5:;
wr(s->r,4996,4,rd(s->u,82,4));
L_1803db926_6:;
wr(s->r,5000,4,rd(s->u,86,4));
L_1803db926_7:;
wr(s->r,5004,4,rd(s->u,90,4));
L_1803db926_8:;
/* 1803db92e: unpcklps xmm4, xmm4 */
L_1803db92e_0:;
L_1803db92e_1:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803db92e_2:;
wr(s->r,4876,4,rd(s->r,4868,4));
L_1803db92e_3:;
wr(s->r,4868,4,rd(s->r,4864,4));
L_1803db92e_4:;
/* 1803db931: cvtps2pd xmm0, xmm4 */
L_1803db931_0:;
L_1803db931_1:;
wr(s->u,70,8,rd(s->r,4864,8));
L_1803db931_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,70,4),4),8));
L_1803db931_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,74,4),4),8));
L_1803db931_4:;
/* 1803db934: addsd xmm0, qword ptr [rsi + 0x98] */
L_1803db934_0:;
L_1803db934_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x98))));
L_1803db934_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db934_3:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->u,28,8),8),8));
L_1803db934_4:;
/* 1803db93c: movsd qword ptr [rsi + 0x98], xmm0 */
L_1803db93c_0:;
L_1803db93c_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x98))));
L_1803db93c_2:;
wr(s->u,28,8,rd(s->r,4608,8));
L_1803db93c_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803db93c_4:;
/* 1803db944: unpcklps xmm5, xmm5 */
L_1803db944_0:;
L_1803db944_1:;
wr(s->r,4936,4,rd(s->r,4932,4));
L_1803db944_2:;
wr(s->r,4940,4,rd(s->r,4932,4));
L_1803db944_3:;
wr(s->r,4932,4,rd(s->r,4928,4));
L_1803db944_4:;
/* 1803db947: unpcklps xmm4, xmm4 */
L_1803db947_0:;
L_1803db947_1:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803db947_2:;
wr(s->r,4876,4,rd(s->r,4868,4));
L_1803db947_3:;
wr(s->r,4868,4,rd(s->r,4864,4));
L_1803db947_4:;
/* 1803db94a: cvtps2pd xmm0, xmm5 */
L_1803db94a_0:;
L_1803db94a_1:;
wr(s->u,70,8,rd(s->r,4928,8));
L_1803db94a_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,70,4),4),8));
L_1803db94a_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,74,4),4),8));
L_1803db94a_4:;
/* 1803db94d: cvtps2pd xmm1, xmm4 */
L_1803db94d_0:;
L_1803db94d_1:;
wr(s->u,70,8,rd(s->r,4864,8));
L_1803db94d_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,70,4),4),8));
L_1803db94d_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,74,4),4),8));
L_1803db94d_4:;
/* 1803db950: addsd xmm0, qword ptr [rsi + 0xa0] */
L_1803db950_0:;
L_1803db950_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xa0))));
L_1803db950_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db950_3:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->u,28,8),8),8));
L_1803db950_4:;
/* 1803db958: addsd xmm1, qword ptr [rsi + 0xa8] */
L_1803db958_0:;
L_1803db958_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xa8))));
L_1803db958_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db958_3:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->u,28,8),8),8));
L_1803db958_4:;
/* 1803db960: movsd qword ptr [rsi + 0xa0], xmm0 */
L_1803db960_0:;
L_1803db960_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xa0))));
L_1803db960_2:;
wr(s->u,28,8,rd(s->r,4608,8));
L_1803db960_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803db960_4:;
/* 1803db968: movsd qword ptr [rsi + 0xa8], xmm1 */
L_1803db968_0:;
L_1803db968_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xa8))));
L_1803db968_2:;
wr(s->u,28,8,rd(s->r,4672,8));
L_1803db968_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803db968_4:;
/* 1803db970: cmp dword ptr [rsi + 0xc0], r12d */
L_1803db970_0:;
L_1803db970_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xc0))));
L_1803db970_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803db970_3:;
wr(s->u,62,4,rd(s->u,52,4));
L_1803db970_4:;
wr(s->r,512,1,(rd(s->u,62,4)<rd(s->r,160,4)));
L_1803db970_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,62,4),rd(s->r,160,4),4,1));
L_1803db970_6:;
wr(s->u,66,4,(rd(s->u,62,4)-rd(s->r,160,4)));
L_1803db970_7:;
wr(s->r,519,1,(sx(rd(s->u,66,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db970_8:;
wr(s->r,518,1,(rd(s->u,66,4)==((U)UINT64_C(0x0))));
L_1803db970_9:;
wr(s->u,56,4,(rd(s->u,66,4)&((U)UINT64_C(0xff))));
L_1803db970_10:;
wr(s->u,60,1,pop(rd(s->u,56,4),4));
L_1803db970_11:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803db970_12:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803db970_13:;
/* 1803db977: je 0x1803dbb1b */
L_1803db977_0:;
L_1803db977_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dbb1b);}
L_1803db977_2:;
return UINT64_C(0x1803db97d);
}
uint64_t b_1803db921(CPU*s){
/* 1803db921: divss xmm5, dword ptr [rsi + 0x20] */
L_1803db921_0:;
L_1803db921_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x20))));
L_1803db921_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db921_3:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)/fv(rd(s->u,24,4),4),4));
L_1803db921_4:;
/* 1803db926: movaps xmm6, xmmword ptr [rsp + 0x340] */
L_1803db926_0:;
L_1803db926_1:;
wr(s->u,16,8,(((U)UINT64_C(0x340))+rd(s->r,32,8)));
L_1803db926_2:;
wr(s->u,36,16,mr((uint64_t)rd(s->u,16,8),16));
L_1803db926_3:;
wr(s->u,78,16,rd(s->u,36,16));
L_1803db926_4:;
wr(s->r,4992,4,rd(s->u,78,4));
L_1803db926_5:;
wr(s->r,4996,4,rd(s->u,82,4));
L_1803db926_6:;
wr(s->r,5000,4,rd(s->u,86,4));
L_1803db926_7:;
wr(s->r,5004,4,rd(s->u,90,4));
L_1803db926_8:;
/* 1803db92e: unpcklps xmm4, xmm4 */
L_1803db92e_0:;
L_1803db92e_1:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803db92e_2:;
wr(s->r,4876,4,rd(s->r,4868,4));
L_1803db92e_3:;
wr(s->r,4868,4,rd(s->r,4864,4));
L_1803db92e_4:;
/* 1803db931: cvtps2pd xmm0, xmm4 */
L_1803db931_0:;
L_1803db931_1:;
wr(s->u,70,8,rd(s->r,4864,8));
L_1803db931_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,70,4),4),8));
L_1803db931_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,74,4),4),8));
L_1803db931_4:;
/* 1803db934: addsd xmm0, qword ptr [rsi + 0x98] */
L_1803db934_0:;
L_1803db934_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x98))));
L_1803db934_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db934_3:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->u,28,8),8),8));
L_1803db934_4:;
/* 1803db93c: movsd qword ptr [rsi + 0x98], xmm0 */
L_1803db93c_0:;
L_1803db93c_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x98))));
L_1803db93c_2:;
wr(s->u,28,8,rd(s->r,4608,8));
L_1803db93c_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803db93c_4:;
/* 1803db944: unpcklps xmm5, xmm5 */
L_1803db944_0:;
L_1803db944_1:;
wr(s->r,4936,4,rd(s->r,4932,4));
L_1803db944_2:;
wr(s->r,4940,4,rd(s->r,4932,4));
L_1803db944_3:;
wr(s->r,4932,4,rd(s->r,4928,4));
L_1803db944_4:;
/* 1803db947: unpcklps xmm4, xmm4 */
L_1803db947_0:;
L_1803db947_1:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803db947_2:;
wr(s->r,4876,4,rd(s->r,4868,4));
L_1803db947_3:;
wr(s->r,4868,4,rd(s->r,4864,4));
L_1803db947_4:;
/* 1803db94a: cvtps2pd xmm0, xmm5 */
L_1803db94a_0:;
L_1803db94a_1:;
wr(s->u,70,8,rd(s->r,4928,8));
L_1803db94a_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,70,4),4),8));
L_1803db94a_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,74,4),4),8));
L_1803db94a_4:;
/* 1803db94d: cvtps2pd xmm1, xmm4 */
L_1803db94d_0:;
L_1803db94d_1:;
wr(s->u,70,8,rd(s->r,4864,8));
L_1803db94d_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,70,4),4),8));
L_1803db94d_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,74,4),4),8));
L_1803db94d_4:;
/* 1803db950: addsd xmm0, qword ptr [rsi + 0xa0] */
L_1803db950_0:;
L_1803db950_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xa0))));
L_1803db950_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db950_3:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->u,28,8),8),8));
L_1803db950_4:;
/* 1803db958: addsd xmm1, qword ptr [rsi + 0xa8] */
L_1803db958_0:;
L_1803db958_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xa8))));
L_1803db958_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db958_3:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->u,28,8),8),8));
L_1803db958_4:;
/* 1803db960: movsd qword ptr [rsi + 0xa0], xmm0 */
L_1803db960_0:;
L_1803db960_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xa0))));
L_1803db960_2:;
wr(s->u,28,8,rd(s->r,4608,8));
L_1803db960_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803db960_4:;
/* 1803db968: movsd qword ptr [rsi + 0xa8], xmm1 */
L_1803db968_0:;
L_1803db968_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xa8))));
L_1803db968_2:;
wr(s->u,28,8,rd(s->r,4672,8));
L_1803db968_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803db968_4:;
/* 1803db970: cmp dword ptr [rsi + 0xc0], r12d */
L_1803db970_0:;
L_1803db970_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xc0))));
L_1803db970_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803db970_3:;
wr(s->u,62,4,rd(s->u,52,4));
L_1803db970_4:;
wr(s->r,512,1,(rd(s->u,62,4)<rd(s->r,160,4)));
L_1803db970_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,62,4),rd(s->r,160,4),4,1));
L_1803db970_6:;
wr(s->u,66,4,(rd(s->u,62,4)-rd(s->r,160,4)));
L_1803db970_7:;
wr(s->r,519,1,(sx(rd(s->u,66,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db970_8:;
wr(s->r,518,1,(rd(s->u,66,4)==((U)UINT64_C(0x0))));
L_1803db970_9:;
wr(s->u,56,4,(rd(s->u,66,4)&((U)UINT64_C(0xff))));
L_1803db970_10:;
wr(s->u,60,1,pop(rd(s->u,56,4),4));
L_1803db970_11:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803db970_12:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803db970_13:;
/* 1803db977: je 0x1803dbb1b */
L_1803db977_0:;
L_1803db977_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dbb1b);}
L_1803db977_2:;
return UINT64_C(0x1803db97d);
}
uint64_t b_1803db97d(CPU*s){
/* 1803db97d: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803db97d_0:;
L_1803db97d_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803db97d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db97d_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803db97d_4:;
/* 1803db984: xor edx, edx */
L_1803db984_0:;
L_1803db984_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803db984_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db984_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803db984_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803db984_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db984_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803db984_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803db984_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803db984_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803db984_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803db984_11:;
/* 1803db986: call 0x1803da8d0 */
L_1803db986_0:;
L_1803db986_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db986_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db98b)));
L_1803db986_3:;
return (uint64_t)UINT64_C(0x1803da8d0);
L_1803db986_4:;
return UINT64_C(0x1803db98b);
}
uint64_t b_1803db98b(CPU*s){
/* 1803db98b: mov rbx, qword ptr [rsi + 0x66f0] */
L_1803db98b_0:;
L_1803db98b_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803db98b_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db98b_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803db98b_4:;
/* 1803db992: mov rdi, qword ptr [rbx] */
L_1803db992_0:;
L_1803db992_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803db992_2:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803db992_3:;
/* 1803db995: mov rcx, rbx */
L_1803db995_0:;
L_1803db995_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803db995_2:;
/* 1803db998: call 0x1803da8e0 */
L_1803db998_0:;
L_1803db998_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db998_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db99d)));
L_1803db998_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803db998_4:;
return UINT64_C(0x1803db99d);
}
uint64_t b_1803db99d(CPU*s){
/* 1803db99d: mov rcx, rbx */
L_1803db99d_0:;
L_1803db99d_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803db99d_2:;
/* 1803db9a0: mov edx, eax */
L_1803db9a0_0:;
L_1803db9a0_1:;
wr(s->r,16,4,rd(s->r,0,4));
L_1803db9a0_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803db9a0_3:;
/* 1803db9a2: call qword ptr [rdi + 0x18] */
L_1803db9a2_0:;
L_1803db9a2_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803db9a2_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db9a2_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803db9a2_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db9a2_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db9a5)));
L_1803db9a2_6:;
return (uint64_t)rd(s->u,16,8);
L_1803db9a2_7:;
return UINT64_C(0x1803db9a5);
}
uint64_t b_1803db9a5(CPU*s){
/* 1803db9a5: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803db9a5_0:;
L_1803db9a5_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803db9a5_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803db9a5_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803db9a5_4:;
/* 1803db9ac: mov rax, qword ptr [rcx] */
L_1803db9ac_0:;
L_1803db9ac_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803db9ac_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803db9ac_3:;
/* 1803db9af: call qword ptr [rax + 0x60] */
L_1803db9af_0:;
L_1803db9af_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x60))));
L_1803db9af_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db9af_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803db9af_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db9af_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db9b2)));
L_1803db9af_6:;
return (uint64_t)rd(s->u,24,8);
L_1803db9af_7:;
return UINT64_C(0x1803db9b2);
}
uint64_t b_1803db9b2(CPU*s){
/* 1803db9b2: movd xmm0, eax */
L_1803db9b2_0:;
L_1803db9b2_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803db9b2_2:;
/* 1803db9b6: cvtdq2pd xmm0, xmm0 */
L_1803db9b6_0:;
L_1803db9b6_1:;
wr(s->u,35,8,rd(s->r,4608,8));
L_1803db9b6_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,35,4),4),8));
L_1803db9b6_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,39,4),4),8));
L_1803db9b6_4:;
/* 1803db9ba: movsd qword ptr [rsi + 0xd0], xmm0 */
L_1803db9ba_0:;
L_1803db9ba_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xd0))));
L_1803db9ba_2:;
wr(s->u,8,8,rd(s->r,4608,8));
L_1803db9ba_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803db9ba_4:;
/* 1803db9c2: cmp dword ptr [rsi + 0x88], r12d */
L_1803db9c2_0:;
L_1803db9c2_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x88))));
L_1803db9c2_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db9c2_3:;
wr(s->u,27,4,rd(s->u,16,4));
L_1803db9c2_4:;
wr(s->r,512,1,(rd(s->u,27,4)<rd(s->r,160,4)));
L_1803db9c2_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,27,4),rd(s->r,160,4),4,1));
L_1803db9c2_6:;
wr(s->u,31,4,(rd(s->u,27,4)-rd(s->r,160,4)));
L_1803db9c2_7:;
wr(s->r,519,1,(sx(rd(s->u,31,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db9c2_8:;
wr(s->r,518,1,(rd(s->u,31,4)==((U)UINT64_C(0x0))));
L_1803db9c2_9:;
wr(s->u,21,4,(rd(s->u,31,4)&((U)UINT64_C(0xff))));
L_1803db9c2_10:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803db9c2_11:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803db9c2_12:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803db9c2_13:;
/* 1803db9c9: jne 0x1803db9fd */
L_1803db9c9_0:;
L_1803db9c9_1:;
wr(s->u,20,1,(!rd(s->r,518,1)));
L_1803db9c9_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803db9fd);}
L_1803db9c9_3:;
return UINT64_C(0x1803db9cb);
}
uint64_t b_1803db9cb(CPU*s){
/* 1803db9cb: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803db9cb_0:;
L_1803db9cb_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803db9cb_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db9cb_3:;
wr(s->r,8,8,rd(s->u,12,8));
L_1803db9cb_4:;
/* 1803db9d2: mov ebx, dword ptr [rcx + 0x368] */
L_1803db9d2_0:;
L_1803db9d2_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x368))));
L_1803db9d2_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803db9d2_3:;
wr(s->r,24,4,rd(s->u,8,4));
L_1803db9d2_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803db9d2_5:;
/* 1803db9d8: call 0x1803da8c0 */
L_1803db9d8_0:;
L_1803db9d8_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db9d8_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db9dd)));
L_1803db9d8_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803db9d8_4:;
return UINT64_C(0x1803db9dd);
}
uint64_t b_1803db9dd(CPU*s){
/* 1803db9dd: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803db9dd_0:;
L_1803db9dd_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803db9dd_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db9dd_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803db9dd_4:;
/* 1803db9e4: mov r11d, eax */
L_1803db9e4_0:;
L_1803db9e4_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803db9e4_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803db9e4_3:;
/* 1803db9e7: mov eax, ebx */
L_1803db9e7_0:;
L_1803db9e7_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803db9e7_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db9e7_3:;
/* 1803db9e9: cdq  */
L_1803db9e9_0:;
L_1803db9e9_1:;
wr(s->u,22,8,(U)sx(rd(s->r,0,4),4));
L_1803db9e9_2:;
wr(s->r,16,4,(rd(s->u,22,8) >> (((U)UINT64_C(0x4))*8)));
L_1803db9e9_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803db9e9_4:;
/* 1803db9ea: idiv r11d */
L_1803db9ea_0:;
L_1803db9ea_1:;
wr(s->u,30,8,(U)sx(rd(s->r,152,4),4));
L_1803db9ea_2:;
wr(s->u,38,8,rd(s->r,16,4));
L_1803db9ea_3:;
wr(s->u,46,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,38,8)<<((U)UINT64_C(0x20)))));
L_1803db9ea_4:;
wr(s->u,54,8,rd(s->r,0,4));
L_1803db9ea_5:;
wr(s->u,62,8,(rd(s->u,46,8)|rd(s->u,54,8)));
L_1803db9ea_6:;
wr(s->u,70,8,((U)(sx(rd(s->u,62,8),8)/sx(rd(s->u,30,8),8))));
L_1803db9ea_7:;
wr(s->r,0,4,(rd(s->u,70,8) >> (((U)UINT64_C(0x0))*8)));
L_1803db9ea_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803db9ea_9:;
wr(s->u,78,8,((U)(sx(rd(s->u,62,8),8)%sx(rd(s->u,30,8),8))));
L_1803db9ea_10:;
wr(s->r,16,4,(rd(s->u,78,8) >> (((U)UINT64_C(0x0))*8)));
L_1803db9ea_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803db9ea_12:;
/* 1803db9ed: mov ebx, eax */
L_1803db9ed_0:;
L_1803db9ed_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803db9ed_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803db9ed_3:;
/* 1803db9ef: sar ebx, 1 */
L_1803db9ef_0:;
L_1803db9ef_1:;
wr(s->u,86,4,(rd(s->r,24,4)&((U)UINT64_C(0x1))));
L_1803db9ef_2:;
wr(s->r,512,1,(rd(s->u,86,4)!=((U)UINT64_C(0x0))));
L_1803db9ef_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803db9ef_4:;
wr(s->r,24,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,24,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,24,4),4)>>((U)UINT64_C(0x1)))));
L_1803db9ef_5:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803db9ef_6:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803db9ef_7:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803db9ef_8:;
wr(s->u,16,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803db9ef_9:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803db9ef_10:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803db9ef_11:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803db9ef_12:;
/* 1803db9f1: call 0x1803da8c0 */
L_1803db9f1_0:;
L_1803db9f1_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803db9f1_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803db9f6)));
L_1803db9f1_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803db9f1_4:;
return UINT64_C(0x1803db9f6);
}
uint64_t b_1803db9f6(CPU*s){
/* 1803db9f6: mov edi, eax */
L_1803db9f6_0:;
L_1803db9f6_1:;
wr(s->r,56,4,rd(s->r,0,4));
L_1803db9f6_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803db9f6_3:;
/* 1803db9f8: imul edi, ebx */
L_1803db9f8_0:;
L_1803db9f8_1:;
wr(s->u,8,8,(U)sx(rd(s->r,56,4),4));
L_1803db9f8_2:;
wr(s->u,16,8,(U)sx(rd(s->r,24,4),4));
L_1803db9f8_3:;
wr(s->u,24,8,(rd(s->u,8,8)*rd(s->u,16,8)));
L_1803db9f8_4:;
wr(s->r,56,4,(rd(s->u,24,8) >> (((U)UINT64_C(0x0))*8)));
L_1803db9f8_5:;
wr(s->u,32,4,(rd(s->u,24,8) >> (((U)UINT64_C(0x4))*8)));
L_1803db9f8_6:;
wr(s->u,0,8,(U)sx(rd(s->r,56,4),4));
L_1803db9f8_7:;
wr(s->r,512,1,(rd(s->u,0,8)!=rd(s->u,24,8)));
L_1803db9f8_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803db9f8_9:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803db9f8_10:;
/* 1803db9fb: jmp 0x1803dba0b */
L_1803db9fb_0:;
L_1803db9fb_1:;
return UINT64_C(0x1803dba0b);
L_1803db9fb_2:;
return UINT64_C(0x1803db9fd);
}
uint64_t b_1803db9fd(CPU*s){
/* 1803db9fd: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803db9fd_0:;
L_1803db9fd_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803db9fd_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803db9fd_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803db9fd_4:;
/* 1803dba04: call 0x1803da8c0 */
L_1803dba04_0:;
L_1803dba04_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dba04_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dba09)));
L_1803dba04_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dba04_4:;
return UINT64_C(0x1803dba09);
}
uint64_t b_1803dba09(CPU*s){
/* 1803dba09: mov edi, eax */
L_1803dba09_0:;
L_1803dba09_1:;
wr(s->r,56,4,rd(s->r,0,4));
L_1803dba09_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dba09_3:;
/* 1803dba0b: cmp dword ptr [rsi + 0x30], r12d */
L_1803dba0b_0:;
L_1803dba0b_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803dba0b_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dba0b_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803dba0b_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,160,4)));
L_1803dba0b_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,160,4),4,1));
L_1803dba0b_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,160,4)));
L_1803dba0b_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dba0b_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803dba0b_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803dba0b_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803dba0b_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803dba0b_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803dba0b_13:;
/* 1803dba0f: jle 0x1803dba7a */
L_1803dba0f_0:;
L_1803dba0f_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dba0f_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803dba0f_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803dba7a);}
L_1803dba0f_4:;
return UINT64_C(0x1803dba11);
}
uint64_t b_1803dba0b(CPU*s){
/* 1803dba0b: cmp dword ptr [rsi + 0x30], r12d */
L_1803dba0b_0:;
L_1803dba0b_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803dba0b_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dba0b_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803dba0b_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,160,4)));
L_1803dba0b_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,160,4),4,1));
L_1803dba0b_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,160,4)));
L_1803dba0b_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dba0b_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803dba0b_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803dba0b_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803dba0b_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803dba0b_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803dba0b_13:;
/* 1803dba0f: jle 0x1803dba7a */
L_1803dba0f_0:;
L_1803dba0f_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dba0f_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803dba0f_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803dba7a);}
L_1803dba0f_4:;
return UINT64_C(0x1803dba11);
}
uint64_t b_1803dba11(CPU*s){
/* 1803dba11: mov r9d, dword ptr [rsi + 0x38] */
L_1803dba11_0:;
L_1803dba11_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x38))));
L_1803dba11_2:;
wr(s->u,104,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dba11_3:;
wr(s->r,136,4,rd(s->u,104,4));
L_1803dba11_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dba11_5:;
/* 1803dba15: movsxd rbx, dword ptr [rsi + 0x88] */
L_1803dba15_0:;
L_1803dba15_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x88))));
L_1803dba15_2:;
wr(s->u,104,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dba15_3:;
wr(s->r,24,8,(U)sx(rd(s->u,104,4),4));
L_1803dba15_4:;
/* 1803dba1c: mov r10d, dword ptr [rsi + 0x84] */
L_1803dba1c_0:;
L_1803dba1c_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x84))));
L_1803dba1c_2:;
wr(s->u,104,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dba1c_3:;
wr(s->r,144,4,rd(s->u,104,4));
L_1803dba1c_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803dba1c_5:;
/* 1803dba23: mov r11d, dword ptr [rsi + 0x30] */
L_1803dba23_0:;
L_1803dba23_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803dba23_2:;
wr(s->u,104,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dba23_3:;
wr(s->r,152,4,rd(s->u,104,4));
L_1803dba23_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dba23_5:;
/* 1803dba27: sar r9d, 1 */
L_1803dba27_0:;
L_1803dba27_1:;
wr(s->u,143,4,(rd(s->r,136,4)&((U)UINT64_C(0x1))));
L_1803dba27_2:;
wr(s->r,512,1,(rd(s->u,143,4)!=((U)UINT64_C(0x0))));
L_1803dba27_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dba27_4:;
wr(s->r,136,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,136,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,136,4),4)>>((U)UINT64_C(0x1)))));
L_1803dba27_5:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dba27_6:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dba27_7:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dba27_8:;
wr(s->u,120,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dba27_9:;
wr(s->u,128,1,pop(rd(s->u,120,4),4));
L_1803dba27_10:;
wr(s->u,129,1,(rd(s->u,128,1)&((U)UINT64_C(0x1))));
L_1803dba27_11:;
wr(s->r,514,1,(rd(s->u,129,1)==((U)UINT64_C(0x0))));
L_1803dba27_12:;
/* 1803dba2a: lea rdx, [rsi + 0x3f0] */
L_1803dba2a_0:;
L_1803dba2a_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x3f0))));
L_1803dba2a_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803dba2a_3:;
/* 1803dba31: neg r9d */
L_1803dba31_0:;
L_1803dba31_1:;
wr(s->r,512,1,(rd(s->r,136,4)!=((U)UINT64_C(0x0))));
L_1803dba31_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,136,4),4,1));
L_1803dba31_3:;
wr(s->r,136,4,(-rd(s->r,136,4)));
L_1803dba31_4:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dba31_5:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dba31_6:;
wr(s->u,120,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dba31_7:;
wr(s->u,128,1,pop(rd(s->u,120,4),4));
L_1803dba31_8:;
wr(s->u,129,1,(rd(s->u,128,1)&((U)UINT64_C(0x1))));
L_1803dba31_9:;
wr(s->r,514,1,(rd(s->u,129,1)==((U)UINT64_C(0x0))));
L_1803dba31_10:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dba31_11:;
/* 1803dba34: mov r8, r12 */
L_1803dba34_0:;
L_1803dba34_1:;
wr(s->r,128,8,rd(s->r,160,8));
L_1803dba34_2:;
/* 1803dba37: nop word ptr [rax + rax] */
L_1803dba37_0:;
L_1803dba37_1:;
wr(s->u,80,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dba37_2:;
wr(s->u,88,8,(rd(s->r,0,8)+rd(s->u,80,8)));
L_1803dba37_3:;
/* 1803dba40: mov rax, qword ptr [rdx - 0x300] */
L_1803dba40_0:;
L_1803dba40_1:;
wr(s->u,8,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffd00))));
L_1803dba40_2:;
wr(s->u,108,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dba40_3:;
wr(s->r,0,8,rd(s->u,108,8));
L_1803dba40_4:;
/* 1803dba47: cmp r9d, r10d */
L_1803dba47_0:;
L_1803dba47_1:;
wr(s->u,135,4,rd(s->r,144,4));
L_1803dba47_2:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->u,135,4)));
L_1803dba47_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->u,135,4),4,1));
L_1803dba47_4:;
wr(s->u,139,4,(rd(s->r,136,4)-rd(s->u,135,4)));
L_1803dba47_5:;
wr(s->r,519,1,(sx(rd(s->u,139,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dba47_6:;
wr(s->r,518,1,(rd(s->u,139,4)==((U)UINT64_C(0x0))));
L_1803dba47_7:;
wr(s->u,120,4,(rd(s->u,139,4)&((U)UINT64_C(0xff))));
L_1803dba47_8:;
wr(s->u,128,1,pop(rd(s->u,120,4),4));
L_1803dba47_9:;
wr(s->u,129,1,(rd(s->u,128,1)&((U)UINT64_C(0x1))));
L_1803dba47_10:;
wr(s->r,514,1,(rd(s->u,129,1)==((U)UINT64_C(0x0))));
L_1803dba47_11:;
/* 1803dba4a: lea rcx, [rax + rbx*4] */
L_1803dba4a_0:;
L_1803dba4a_1:;
wr(s->u,16,8,(rd(s->r,24,8)*((U)UINT64_C(0x4))));
L_1803dba4a_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dba4a_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803dba4a_4:;
/* 1803dba4e: mov eax, r10d */
L_1803dba4e_0:;
L_1803dba4e_1:;
wr(s->r,0,4,rd(s->r,144,4));
L_1803dba4e_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dba4e_3:;
/* 1803dba51: cmovg eax, r9d */
L_1803dba51_0:;
L_1803dba51_1:;
wr(s->u,117,1,(!rd(s->r,518,1)));
L_1803dba51_2:;
wr(s->u,118,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dba51_3:;
wr(s->u,119,1,((rd(s->u,117,1)!=0)&&(rd(s->u,118,1)!=0)));
L_1803dba51_4:;
wr(s->u,130,4,rd(s->r,136,4));
L_1803dba51_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dba51_6:;
wr(s->u,134,1,(!rd(s->u,119,1)));
L_1803dba51_7:;
if(rd(s->u,134,1)){goto L_1803dba55_0;}
L_1803dba51_8:;
wr(s->r,0,4,rd(s->u,130,4));
L_1803dba51_9:;
/* 1803dba55: mov qword ptr [rsp + r8 + 0x40], rcx */
L_1803dba55_0:;
L_1803dba55_1:;
wr(s->u,32,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dba55_2:;
wr(s->u,40,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803dba55_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803dba55_4:;
wr(s->u,96,8,rd(s->r,8,8));
L_1803dba55_5:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,96,8));
L_1803dba55_6:;
/* 1803dba5a: add r8, 8 */
L_1803dba5a_0:;
L_1803dba5a_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803dba5a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803dba5a_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803dba5a_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dba5a_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dba5a_6:;
wr(s->u,120,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dba5a_7:;
wr(s->u,128,1,pop(rd(s->u,120,8),8));
L_1803dba5a_8:;
wr(s->u,129,1,(rd(s->u,128,1)&((U)UINT64_C(0x1))));
L_1803dba5a_9:;
wr(s->r,514,1,(rd(s->u,129,1)==((U)UINT64_C(0x0))));
L_1803dba5a_10:;
/* 1803dba5e: movsxd rcx, eax */
L_1803dba5e_0:;
L_1803dba5e_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803dba5e_2:;
/* 1803dba61: mov rax, qword ptr [rdx] */
L_1803dba61_0:;
L_1803dba61_1:;
wr(s->u,108,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803dba61_2:;
wr(s->r,0,8,rd(s->u,108,8));
L_1803dba61_3:;
/* 1803dba64: add rdx, 8 */
L_1803dba64_0:;
L_1803dba64_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803dba64_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x8)),8,0));
L_1803dba64_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803dba64_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dba64_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803dba64_6:;
wr(s->u,120,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803dba64_7:;
wr(s->u,128,1,pop(rd(s->u,120,8),8));
L_1803dba64_8:;
wr(s->u,129,1,(rd(s->u,128,1)&((U)UINT64_C(0x1))));
L_1803dba64_9:;
wr(s->r,514,1,(rd(s->u,129,1)==((U)UINT64_C(0x0))));
L_1803dba64_10:;
/* 1803dba68: sub r11, 1 */
L_1803dba68_0:;
L_1803dba68_1:;
wr(s->r,512,1,(rd(s->r,152,8)<((U)UINT64_C(0x1))));
L_1803dba68_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),((U)UINT64_C(0x1)),8,1));
L_1803dba68_3:;
wr(s->r,152,8,(rd(s->r,152,8)-((U)UINT64_C(0x1))));
L_1803dba68_4:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dba68_5:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803dba68_6:;
wr(s->u,120,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803dba68_7:;
wr(s->u,128,1,pop(rd(s->u,120,8),8));
L_1803dba68_8:;
wr(s->u,129,1,(rd(s->u,128,1)&((U)UINT64_C(0x1))));
L_1803dba68_9:;
wr(s->r,514,1,(rd(s->u,129,1)==((U)UINT64_C(0x0))));
L_1803dba68_10:;
/* 1803dba6c: lea rcx, [rax + rcx*4] */
L_1803dba6c_0:;
L_1803dba6c_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dba6c_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dba6c_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803dba6c_4:;
/* 1803dba70: mov qword ptr [rsp + r8 + 0x1b8], rcx */
L_1803dba70_0:;
L_1803dba70_1:;
wr(s->u,56,8,(((U)UINT64_C(0x1b8))+rd(s->r,32,8)));
L_1803dba70_2:;
wr(s->u,64,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803dba70_3:;
wr(s->u,72,8,(rd(s->u,56,8)+rd(s->u,64,8)));
L_1803dba70_4:;
wr(s->u,96,8,rd(s->r,8,8));
L_1803dba70_5:;
mw((uint64_t)rd(s->u,72,8),8,rd(s->u,96,8));
L_1803dba70_6:;
/* 1803dba78: jne 0x1803dba40 */
L_1803dba78_0:;
L_1803dba78_1:;
wr(s->u,116,1,(!rd(s->r,518,1)));
L_1803dba78_2:;
if(rd(s->u,116,1)){goto L_1803dba40_0;}
L_1803dba78_3:;
return UINT64_C(0x1803dba7a);
}
uint64_t b_1803dba40(CPU*s){
/* 1803dba40: mov rax, qword ptr [rdx - 0x300] */
L_1803dba40_0:;
L_1803dba40_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffd00))));
L_1803dba40_2:;
wr(s->u,80,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dba40_3:;
wr(s->r,0,8,rd(s->u,80,8));
L_1803dba40_4:;
/* 1803dba47: cmp r9d, r10d */
L_1803dba47_0:;
L_1803dba47_1:;
wr(s->u,107,4,rd(s->r,144,4));
L_1803dba47_2:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->u,107,4)));
L_1803dba47_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->u,107,4),4,1));
L_1803dba47_4:;
wr(s->u,111,4,(rd(s->r,136,4)-rd(s->u,107,4)));
L_1803dba47_5:;
wr(s->r,519,1,(sx(rd(s->u,111,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dba47_6:;
wr(s->r,518,1,(rd(s->u,111,4)==((U)UINT64_C(0x0))));
L_1803dba47_7:;
wr(s->u,92,4,(rd(s->u,111,4)&((U)UINT64_C(0xff))));
L_1803dba47_8:;
wr(s->u,100,1,pop(rd(s->u,92,4),4));
L_1803dba47_9:;
wr(s->u,101,1,(rd(s->u,100,1)&((U)UINT64_C(0x1))));
L_1803dba47_10:;
wr(s->r,514,1,(rd(s->u,101,1)==((U)UINT64_C(0x0))));
L_1803dba47_11:;
/* 1803dba4a: lea rcx, [rax + rbx*4] */
L_1803dba4a_0:;
L_1803dba4a_1:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x4))));
L_1803dba4a_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803dba4a_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dba4a_4:;
/* 1803dba4e: mov eax, r10d */
L_1803dba4e_0:;
L_1803dba4e_1:;
wr(s->r,0,4,rd(s->r,144,4));
L_1803dba4e_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dba4e_3:;
/* 1803dba51: cmovg eax, r9d */
L_1803dba51_0:;
L_1803dba51_1:;
wr(s->u,89,1,(!rd(s->r,518,1)));
L_1803dba51_2:;
wr(s->u,90,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dba51_3:;
wr(s->u,91,1,((rd(s->u,89,1)!=0)&&(rd(s->u,90,1)!=0)));
L_1803dba51_4:;
wr(s->u,102,4,rd(s->r,136,4));
L_1803dba51_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dba51_6:;
wr(s->u,106,1,(!rd(s->u,91,1)));
L_1803dba51_7:;
if(rd(s->u,106,1)){goto L_1803dba55_0;}
L_1803dba51_8:;
wr(s->r,0,4,rd(s->u,102,4));
L_1803dba51_9:;
/* 1803dba55: mov qword ptr [rsp + r8 + 0x40], rcx */
L_1803dba55_0:;
L_1803dba55_1:;
wr(s->u,24,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dba55_2:;
wr(s->u,32,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803dba55_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803dba55_4:;
wr(s->u,72,8,rd(s->r,8,8));
L_1803dba55_5:;
mw((uint64_t)rd(s->u,40,8),8,rd(s->u,72,8));
L_1803dba55_6:;
/* 1803dba5a: add r8, 8 */
L_1803dba5a_0:;
L_1803dba5a_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803dba5a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803dba5a_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803dba5a_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dba5a_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dba5a_6:;
wr(s->u,92,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dba5a_7:;
wr(s->u,100,1,pop(rd(s->u,92,8),8));
L_1803dba5a_8:;
wr(s->u,101,1,(rd(s->u,100,1)&((U)UINT64_C(0x1))));
L_1803dba5a_9:;
wr(s->r,514,1,(rd(s->u,101,1)==((U)UINT64_C(0x0))));
L_1803dba5a_10:;
/* 1803dba5e: movsxd rcx, eax */
L_1803dba5e_0:;
L_1803dba5e_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803dba5e_2:;
/* 1803dba61: mov rax, qword ptr [rdx] */
L_1803dba61_0:;
L_1803dba61_1:;
wr(s->u,80,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803dba61_2:;
wr(s->r,0,8,rd(s->u,80,8));
L_1803dba61_3:;
/* 1803dba64: add rdx, 8 */
L_1803dba64_0:;
L_1803dba64_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803dba64_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x8)),8,0));
L_1803dba64_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803dba64_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dba64_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803dba64_6:;
wr(s->u,92,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803dba64_7:;
wr(s->u,100,1,pop(rd(s->u,92,8),8));
L_1803dba64_8:;
wr(s->u,101,1,(rd(s->u,100,1)&((U)UINT64_C(0x1))));
L_1803dba64_9:;
wr(s->r,514,1,(rd(s->u,101,1)==((U)UINT64_C(0x0))));
L_1803dba64_10:;
/* 1803dba68: sub r11, 1 */
L_1803dba68_0:;
L_1803dba68_1:;
wr(s->r,512,1,(rd(s->r,152,8)<((U)UINT64_C(0x1))));
L_1803dba68_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),((U)UINT64_C(0x1)),8,1));
L_1803dba68_3:;
wr(s->r,152,8,(rd(s->r,152,8)-((U)UINT64_C(0x1))));
L_1803dba68_4:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dba68_5:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803dba68_6:;
wr(s->u,92,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803dba68_7:;
wr(s->u,100,1,pop(rd(s->u,92,8),8));
L_1803dba68_8:;
wr(s->u,101,1,(rd(s->u,100,1)&((U)UINT64_C(0x1))));
L_1803dba68_9:;
wr(s->r,514,1,(rd(s->u,101,1)==((U)UINT64_C(0x0))));
L_1803dba68_10:;
/* 1803dba6c: lea rcx, [rax + rcx*4] */
L_1803dba6c_0:;
L_1803dba6c_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dba6c_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803dba6c_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dba6c_4:;
/* 1803dba70: mov qword ptr [rsp + r8 + 0x1b8], rcx */
L_1803dba70_0:;
L_1803dba70_1:;
wr(s->u,48,8,(((U)UINT64_C(0x1b8))+rd(s->r,32,8)));
L_1803dba70_2:;
wr(s->u,56,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803dba70_3:;
wr(s->u,64,8,(rd(s->u,48,8)+rd(s->u,56,8)));
L_1803dba70_4:;
wr(s->u,72,8,rd(s->r,8,8));
L_1803dba70_5:;
mw((uint64_t)rd(s->u,64,8),8,rd(s->u,72,8));
L_1803dba70_6:;
/* 1803dba78: jne 0x1803dba40 */
L_1803dba78_0:;
L_1803dba78_1:;
wr(s->u,88,1,(!rd(s->r,518,1)));
L_1803dba78_2:;
if(rd(s->u,88,1)){goto L_1803dba40_0;}
L_1803dba78_3:;
return UINT64_C(0x1803dba7a);
}
uint64_t b_1803dba55(CPU*s){
/* 1803dba55: mov qword ptr [rsp + r8 + 0x40], rcx */
L_1803dba55_0:;
L_1803dba55_1:;
wr(s->u,16,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dba55_2:;
wr(s->u,24,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803dba55_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803dba55_4:;
wr(s->u,64,8,rd(s->r,8,8));
L_1803dba55_5:;
mw((uint64_t)rd(s->u,32,8),8,rd(s->u,64,8));
L_1803dba55_6:;
/* 1803dba5a: add r8, 8 */
L_1803dba5a_0:;
L_1803dba5a_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803dba5a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803dba5a_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803dba5a_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dba5a_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dba5a_6:;
wr(s->u,81,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dba5a_7:;
wr(s->u,89,1,pop(rd(s->u,81,8),8));
L_1803dba5a_8:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803dba5a_9:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803dba5a_10:;
/* 1803dba5e: movsxd rcx, eax */
L_1803dba5e_0:;
L_1803dba5e_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803dba5e_2:;
/* 1803dba61: mov rax, qword ptr [rdx] */
L_1803dba61_0:;
L_1803dba61_1:;
wr(s->u,72,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803dba61_2:;
wr(s->r,0,8,rd(s->u,72,8));
L_1803dba61_3:;
/* 1803dba64: add rdx, 8 */
L_1803dba64_0:;
L_1803dba64_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803dba64_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x8)),8,0));
L_1803dba64_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803dba64_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dba64_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803dba64_6:;
wr(s->u,81,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803dba64_7:;
wr(s->u,89,1,pop(rd(s->u,81,8),8));
L_1803dba64_8:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803dba64_9:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803dba64_10:;
/* 1803dba68: sub r11, 1 */
L_1803dba68_0:;
L_1803dba68_1:;
wr(s->r,512,1,(rd(s->r,152,8)<((U)UINT64_C(0x1))));
L_1803dba68_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),((U)UINT64_C(0x1)),8,1));
L_1803dba68_3:;
wr(s->r,152,8,(rd(s->r,152,8)-((U)UINT64_C(0x1))));
L_1803dba68_4:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dba68_5:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803dba68_6:;
wr(s->u,81,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803dba68_7:;
wr(s->u,89,1,pop(rd(s->u,81,8),8));
L_1803dba68_8:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803dba68_9:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803dba68_10:;
/* 1803dba6c: lea rcx, [rax + rcx*4] */
L_1803dba6c_0:;
L_1803dba6c_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dba6c_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803dba6c_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dba6c_4:;
/* 1803dba70: mov qword ptr [rsp + r8 + 0x1b8], rcx */
L_1803dba70_0:;
L_1803dba70_1:;
wr(s->u,40,8,(((U)UINT64_C(0x1b8))+rd(s->r,32,8)));
L_1803dba70_2:;
wr(s->u,48,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803dba70_3:;
wr(s->u,56,8,(rd(s->u,40,8)+rd(s->u,48,8)));
L_1803dba70_4:;
wr(s->u,64,8,rd(s->r,8,8));
L_1803dba70_5:;
mw((uint64_t)rd(s->u,56,8),8,rd(s->u,64,8));
L_1803dba70_6:;
/* 1803dba78: jne 0x1803dba40 */
L_1803dba78_0:;
L_1803dba78_1:;
wr(s->u,80,1,(!rd(s->r,518,1)));
L_1803dba78_2:;
if(rd(s->u,80,1)){return UINT64_C(0x1803dba40);}
L_1803dba78_3:;
return UINT64_C(0x1803dba7a);
}
uint64_t b_1803dba7a(CPU*s){
/* 1803dba7a: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dba7a_0:;
L_1803dba7a_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dba7a_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dba7a_3:;
wr(s->r,8,8,rd(s->u,36,8));
L_1803dba7a_4:;
/* 1803dba81: add dword ptr [rsi + 0x88], edi */
L_1803dba81_0:;
L_1803dba81_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x88))));
L_1803dba81_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dba81_3:;
wr(s->r,512,1,(((rd(s->u,32,4)+rd(s->r,56,4))&(((U)1<<32)-1))<rd(s->u,32,4)));
L_1803dba81_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dba81_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,32,4),rd(s->r,56,4),4,0));
L_1803dba81_6:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dba81_7:;
wr(s->u,32,4,(rd(s->u,32,4)+rd(s->r,56,4)));
L_1803dba81_8:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803dba81_9:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dba81_10:;
wr(s->r,519,1,(sx(rd(s->u,32,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dba81_11:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dba81_12:;
wr(s->r,518,1,(rd(s->u,32,4)==((U)UINT64_C(0x0))));
L_1803dba81_13:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dba81_14:;
wr(s->u,44,4,(rd(s->u,32,4)&((U)UINT64_C(0xff))));
L_1803dba81_15:;
wr(s->u,48,1,pop(rd(s->u,44,4),4));
L_1803dba81_16:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dba81_17:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dba81_18:;
/* 1803dba87: lea r9, [rsp + 0x1c0] */
L_1803dba87_0:;
L_1803dba87_1:;
wr(s->u,24,8,(((U)UINT64_C(0x1c0))+rd(s->r,32,8)));
L_1803dba87_2:;
wr(s->r,136,8,rd(s->u,24,8));
L_1803dba87_3:;
/* 1803dba8f: mov rax, qword ptr [rcx] */
L_1803dba8f_0:;
L_1803dba8f_1:;
wr(s->u,36,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dba8f_2:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803dba8f_3:;
/* 1803dba92: lea rdx, [rsp + 0x40] */
L_1803dba92_0:;
L_1803dba92_1:;
wr(s->u,16,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dba92_2:;
wr(s->r,16,8,rd(s->u,16,8));
L_1803dba92_3:;
/* 1803dba97: mov r8d, edi */
L_1803dba97_0:;
L_1803dba97_1:;
wr(s->r,128,4,rd(s->r,56,4));
L_1803dba97_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dba97_3:;
/* 1803dba9a: call qword ptr [rax + 8] */
L_1803dba9a_0:;
L_1803dba9a_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803dba9a_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dba9a_3:;
wr(s->u,50,8,rd(s->u,36,8));
L_1803dba9a_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dba9a_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dba9d)));
L_1803dba9a_6:;
return (uint64_t)rd(s->u,50,8);
L_1803dba9a_7:;
return UINT64_C(0x1803dba9d);
}
uint64_t b_1803dba9d(CPU*s){
/* 1803dba9d: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dba9d_0:;
L_1803dba9d_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dba9d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dba9d_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dba9d_4:;
/* 1803dbaa4: call 0x1803da8e0 */
L_1803dbaa4_0:;
L_1803dbaa4_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbaa4_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbaa9)));
L_1803dbaa4_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dbaa4_4:;
return UINT64_C(0x1803dbaa9);
}
uint64_t b_1803dbaa9(CPU*s){
/* 1803dbaa9: add dword ptr [rsi + 0x84], eax */
L_1803dbaa9_0:;
L_1803dbaa9_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x84))));
L_1803dbaa9_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dbaa9_3:;
wr(s->r,512,1,(((rd(s->u,16,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->u,16,4)));
L_1803dbaa9_4:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dbaa9_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,16,4),rd(s->r,0,4),4,0));
L_1803dbaa9_6:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dbaa9_7:;
wr(s->u,16,4,(rd(s->u,16,4)+rd(s->r,0,4)));
L_1803dbaa9_8:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dbaa9_9:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dbaa9_10:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbaa9_11:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dbaa9_12:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_1803dbaa9_13:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dbaa9_14:;
wr(s->u,25,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_1803dbaa9_15:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803dbaa9_16:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803dbaa9_17:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803dbaa9_18:;
/* 1803dbaaf: mov eax, dword ptr [rsi + 0x64] */
L_1803dbaaf_0:;
L_1803dbaaf_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x64))));
L_1803dbaaf_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbaaf_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1803dbaaf_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dbaaf_5:;
/* 1803dbab2: cmp dword ptr [rsi + 0x88], eax */
L_1803dbab2_0:;
L_1803dbab2_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x88))));
L_1803dbab2_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dbab2_3:;
wr(s->u,31,4,rd(s->u,20,4));
L_1803dbab2_4:;
wr(s->r,512,1,(rd(s->u,31,4)<rd(s->r,0,4)));
L_1803dbab2_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,31,4),rd(s->r,0,4),4,1));
L_1803dbab2_6:;
wr(s->u,35,4,(rd(s->u,31,4)-rd(s->r,0,4)));
L_1803dbab2_7:;
wr(s->r,519,1,(sx(rd(s->u,35,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbab2_8:;
wr(s->r,518,1,(rd(s->u,35,4)==((U)UINT64_C(0x0))));
L_1803dbab2_9:;
wr(s->u,25,4,(rd(s->u,35,4)&((U)UINT64_C(0xff))));
L_1803dbab2_10:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803dbab2_11:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803dbab2_12:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803dbab2_13:;
/* 1803dbab8: jge 0x1803dbac3 */
L_1803dbab8_0:;
L_1803dbab8_1:;
wr(s->u,24,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dbab8_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803dbac3);}
L_1803dbab8_3:;
return UINT64_C(0x1803dbaba);
}
uint64_t b_1803dbaba(CPU*s){
/* 1803dbaba: add dword ptr [rsi + 0x6c], -2 */
L_1803dbaba_0:;
L_1803dbaba_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x6c))));
L_1803dbaba_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbaba_3:;
wr(s->r,512,1,(((rd(s->u,8,4)+((U)UINT64_C(0xfffffffe)))&(((U)1<<32)-1))<rd(s->u,8,4)));
L_1803dbaba_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbaba_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),((U)UINT64_C(0xfffffffe)),4,0));
L_1803dbaba_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbaba_7:;
wr(s->u,8,4,(rd(s->u,8,4)+((U)UINT64_C(0xfffffffe))));
L_1803dbaba_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dbaba_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbaba_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbaba_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbaba_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803dbaba_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbaba_14:;
wr(s->u,12,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803dbaba_15:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803dbaba_16:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803dbaba_17:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803dbaba_18:;
/* 1803dbabe: jmp 0x1803dbd35 */
L_1803dbabe_0:;
L_1803dbabe_1:;
return UINT64_C(0x1803dbd35);
L_1803dbabe_2:;
return UINT64_C(0x1803dbac3);
}
uint64_t b_1803dbac3(CPU*s){
/* 1803dbac3: mov rcx, qword ptr [rsi + 0x6708] */
L_1803dbac3_0:;
L_1803dbac3_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x6708))));
L_1803dbac3_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbac3_3:;
wr(s->r,8,8,rd(s->u,12,8));
L_1803dbac3_4:;
/* 1803dbaca: mov edx, dword ptr [rsi + 0x84] */
L_1803dbaca_0:;
L_1803dbaca_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x84))));
L_1803dbaca_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbaca_3:;
wr(s->r,16,4,rd(s->u,8,4));
L_1803dbaca_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dbaca_5:;
/* 1803dbad0: mov rax, qword ptr [rcx] */
L_1803dbad0_0:;
L_1803dbad0_1:;
wr(s->u,12,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dbad0_2:;
wr(s->r,0,8,rd(s->u,12,8));
L_1803dbad0_3:;
/* 1803dbad3: call qword ptr [rax + 0xa0] */
L_1803dbad3_0:;
L_1803dbad3_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xa0))));
L_1803dbad3_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbad3_3:;
wr(s->u,20,8,rd(s->u,12,8));
L_1803dbad3_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbad3_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbad9)));
L_1803dbad3_6:;
return (uint64_t)rd(s->u,20,8);
L_1803dbad3_7:;
return UINT64_C(0x1803dbad9);
}
uint64_t b_1803dbad9(CPU*s){
/* 1803dbad9: mov r11d, dword ptr [rsi + 0x84] */
L_1803dbad9_0:;
L_1803dbad9_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x84))));
L_1803dbad9_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dbad9_3:;
wr(s->r,152,4,rd(s->u,20,4));
L_1803dbad9_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dbad9_5:;
/* 1803dbae0: mov ebx, r12d */
L_1803dbae0_0:;
L_1803dbae0_1:;
wr(s->r,24,4,rd(s->r,160,4));
L_1803dbae0_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dbae0_3:;
/* 1803dbae3: cmp dword ptr [rsi + 0x30], ebx */
L_1803dbae3_0:;
L_1803dbae3_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803dbae3_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbae3_3:;
wr(s->u,32,4,rd(s->u,20,4));
L_1803dbae3_4:;
wr(s->r,512,1,(rd(s->u,32,4)<rd(s->r,24,4)));
L_1803dbae3_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,32,4),rd(s->r,24,4),4,1));
L_1803dbae3_6:;
wr(s->u,36,4,(rd(s->u,32,4)-rd(s->r,24,4)));
L_1803dbae3_7:;
wr(s->r,519,1,(sx(rd(s->u,36,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbae3_8:;
wr(s->r,518,1,(rd(s->u,36,4)==((U)UINT64_C(0x0))));
L_1803dbae3_9:;
wr(s->u,26,4,(rd(s->u,36,4)&((U)UINT64_C(0xff))));
L_1803dbae3_10:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803dbae3_11:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803dbae3_12:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803dbae3_13:;
/* 1803dbae6: mov dword ptr [rsi + 0x44], r11d */
L_1803dbae6_0:;
L_1803dbae6_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x44))));
L_1803dbae6_2:;
wr(s->u,16,4,rd(s->r,152,4));
L_1803dbae6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dbae6_4:;
/* 1803dbaea: jle 0x1803dbd35 */
L_1803dbaea_0:;
L_1803dbaea_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dbaea_2:;
wr(s->u,25,1,((rd(s->r,518,1)!=0)||(rd(s->u,24,1)!=0)));
L_1803dbaea_3:;
if(rd(s->u,25,1)){return UINT64_C(0x1803dbd35);}
L_1803dbaea_4:;
return UINT64_C(0x1803dbaf0);
}
uint64_t b_1803dbaf0(CPU*s){
/* 1803dbaf0: movsxd r8, dword ptr [rsi + 0x84] */
L_1803dbaf0_0:;
L_1803dbaf0_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x84))));
L_1803dbaf0_2:;
wr(s->u,13,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dbaf0_3:;
wr(s->r,128,8,(U)sx(rd(s->u,13,4),4));
L_1803dbaf0_4:;
/* 1803dbaf7: mov rdx, qword ptr [rbp + 0x300] */
L_1803dbaf7_0:;
L_1803dbaf7_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0x300))));
L_1803dbaf7_2:;
wr(s->u,17,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803dbaf7_3:;
wr(s->r,16,8,rd(s->u,17,8));
L_1803dbaf7_4:;
/* 1803dbafe: mov rcx, qword ptr [rbp] */
L_1803dbafe_0:;
L_1803dbafe_1:;
wr(s->u,17,8,mr((uint64_t)rd(s->r,40,8),8));
L_1803dbafe_2:;
wr(s->r,8,8,rd(s->u,17,8));
L_1803dbafe_3:;
/* 1803dbb02: shl r8, 2 */
L_1803dbb02_0:;
L_1803dbb02_1:;
wr(s->u,65,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803dbb02_2:;
wr(s->u,69,8,rd(s->r,128,8));
L_1803dbb02_3:;
wr(s->r,128,8,((rd(s->u,65,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,65,4))));
L_1803dbb02_4:;
wr(s->u,48,1,(rd(s->u,65,4)==((U)UINT64_C(0x0))));
L_1803dbb02_5:;
wr(s->u,49,4,(rd(s->u,65,4)-((U)UINT64_C(0x1))));
L_1803dbb02_6:;
wr(s->u,53,8,((rd(s->u,49,4)>=64)?0:(rd(s->u,69,8)<<rd(s->u,49,4))));
L_1803dbb02_7:;
wr(s->u,61,1,(sx(rd(s->u,53,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbb02_8:;
wr(s->u,0,1,rd(s->u,48,1));
L_1803dbb02_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dbb02_10:;
wr(s->u,2,1,(!rd(s->u,48,1)));
L_1803dbb02_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dbb02_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,61,1)));
L_1803dbb02_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dbb02_14:;
wr(s->u,62,1,(rd(s->u,65,4)==((U)UINT64_C(0x1))));
L_1803dbb02_15:;
wr(s->u,63,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbb02_16:;
wr(s->u,64,1,(rd(s->r,512,1)^rd(s->u,63,1)));
L_1803dbb02_17:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803dbb02_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,64,1)));
L_1803dbb02_19:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803dbb02_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dbb02_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dbb02_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dbb02_23:;
wr(s->u,25,1,(rd(s->u,65,4)!=((U)UINT64_C(0x0))));
L_1803dbb02_24:;
wr(s->u,26,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbb02_25:;
wr(s->u,27,1,(!rd(s->u,25,1)));
L_1803dbb02_26:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,519,1)));
L_1803dbb02_27:;
wr(s->u,29,1,(rd(s->u,25,1)&rd(s->u,26,1)));
L_1803dbb02_28:;
wr(s->r,519,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803dbb02_29:;
wr(s->u,30,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dbb02_30:;
wr(s->u,31,1,(!rd(s->u,25,1)));
L_1803dbb02_31:;
wr(s->u,32,1,(rd(s->u,31,1)&rd(s->r,518,1)));
L_1803dbb02_32:;
wr(s->u,33,1,(rd(s->u,25,1)&rd(s->u,30,1)));
L_1803dbb02_33:;
wr(s->r,518,1,(rd(s->u,32,1)|rd(s->u,33,1)));
L_1803dbb02_34:;
wr(s->u,34,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dbb02_35:;
wr(s->u,42,1,pop(rd(s->u,34,8),8));
L_1803dbb02_36:;
wr(s->u,43,1,(rd(s->u,42,1)&((U)UINT64_C(0x1))));
L_1803dbb02_37:;
wr(s->u,44,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803dbb02_38:;
wr(s->u,45,1,(!rd(s->u,25,1)));
L_1803dbb02_39:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,514,1)));
L_1803dbb02_40:;
wr(s->u,47,1,(rd(s->u,25,1)&rd(s->u,44,1)));
L_1803dbb02_41:;
wr(s->r,514,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803dbb02_42:;
/* 1803dbb06: call 0x18000d550 */
L_1803dbb06_0:;
L_1803dbb06_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbb06_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbb0b)));
L_1803dbb06_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803dbb06_4:;
return UINT64_C(0x1803dbb0b);
}
uint64_t b_1803dbb0b(CPU*s){
/* 1803dbb0b: inc ebx */
L_1803dbb0b_0:;
L_1803dbb0b_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0x1)),4,0));
L_1803dbb0b_2:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0x1))));
L_1803dbb0b_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dbb0b_4:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbb0b_5:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803dbb0b_6:;
wr(s->u,13,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803dbb0b_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803dbb0b_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dbb0b_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dbb0b_10:;
/* 1803dbb0d: add rbp, 8 */
L_1803dbb0d_0:;
L_1803dbb0d_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803dbb0d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x8)),8,0));
L_1803dbb0d_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803dbb0d_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbb0d_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803dbb0d_6:;
wr(s->u,13,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803dbb0d_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803dbb0d_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dbb0d_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dbb0d_10:;
/* 1803dbb11: cmp ebx, dword ptr [rsi + 0x30] */
L_1803dbb11_0:;
L_1803dbb11_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803dbb11_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbb11_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803dbb11_4:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,23,4)));
L_1803dbb11_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,23,4),4,1));
L_1803dbb11_6:;
wr(s->u,27,4,(rd(s->r,24,4)-rd(s->u,23,4)));
L_1803dbb11_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbb11_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803dbb11_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803dbb11_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803dbb11_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dbb11_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dbb11_13:;
/* 1803dbb14: jl 0x1803dbaf0 */
L_1803dbb14_0:;
L_1803dbb14_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dbb14_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dbaf0);}
L_1803dbb14_3:;
return UINT64_C(0x1803dbb16);
}
uint64_t b_1803dbb16(CPU*s){
/* 1803dbb16: jmp 0x1803dbd35 */
L_1803dbb16_0:;
L_1803dbb16_1:;
return UINT64_C(0x1803dbd35);
L_1803dbb16_2:;
return UINT64_C(0x1803dbb1b);
}
uint64_t b_1803dbb1b(CPU*s){
/* 1803dbb1b: mov dword ptr [rsi + 0x44], ecx */
L_1803dbb1b_0:;
L_1803dbb1b_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x44))));
L_1803dbb1b_2:;
wr(s->u,16,4,rd(s->r,8,4));
L_1803dbb1b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dbb1b_4:;
/* 1803dbb1e: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dbb1e_0:;
L_1803dbb1e_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dbb1e_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbb1e_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dbb1e_4:;
/* 1803dbb25: mov rax, qword ptr [rcx] */
L_1803dbb25_0:;
L_1803dbb25_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dbb25_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dbb25_3:;
/* 1803dbb28: call qword ptr [rax + 0x60] */
L_1803dbb28_0:;
L_1803dbb28_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x60))));
L_1803dbb28_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbb28_3:;
wr(s->u,28,8,rd(s->u,20,8));
L_1803dbb28_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbb28_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbb2b)));
L_1803dbb28_6:;
return (uint64_t)rd(s->u,28,8);
L_1803dbb28_7:;
return UINT64_C(0x1803dbb2b);
}
uint64_t b_1803dbb2b(CPU*s){
/* 1803dbb2b: movss xmm1, dword ptr [rsi + 0x1c] */
L_1803dbb2b_0:;
L_1803dbb2b_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x1c))));
L_1803dbb2b_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbb2b_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803dbb2b_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803dbb2b_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803dbb2b_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803dbb2b_7:;
/* 1803dbb30: movss xmm2, dword ptr [rip + 0x27110c] */
L_1803dbb30_0:;
L_1803dbb30_1:;
wr(s->r,4736,4,mr(UINT64_C(0x18064cc44),4));
L_1803dbb30_2:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803dbb30_3:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803dbb30_4:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803dbb30_5:;
/* 1803dbb38: comiss xmm1, xmm2 */
L_1803dbb38_0:;
L_1803dbb38_1:;
wr(s->u,28,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803dbb38_2:;
wr(s->u,29,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803dbb38_3:;
wr(s->r,514,1,((rd(s->u,28,1)!=0)||(rd(s->u,29,1)!=0)));
L_1803dbb38_4:;
wr(s->u,30,1,(fv(rd(s->r,4672,4),4)==fv(rd(s->r,4736,4),4)));
L_1803dbb38_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,30,1)));
L_1803dbb38_6:;
wr(s->u,31,1,(fv(rd(s->r,4672,4),4)<fv(rd(s->r,4736,4),4)));
L_1803dbb38_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,31,1)));
L_1803dbb38_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbb38_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dbb38_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dbb38_11:;
/* 1803dbb3b: movd xmm3, eax */
L_1803dbb3b_0:;
L_1803dbb3b_1:;
wr(s->r,4800,16,rd(s->r,0,4));
L_1803dbb3b_2:;
/* 1803dbb3f: cvtdq2pd xmm3, xmm3 */
L_1803dbb3f_0:;
L_1803dbb3f_1:;
wr(s->u,32,8,rd(s->r,4800,8));
L_1803dbb3f_2:;
wr(s->r,4800,8,fb((double)sx(rd(s->u,32,4),4),8));
L_1803dbb3f_3:;
wr(s->r,4808,8,fb((double)sx(rd(s->u,36,4),4),8));
L_1803dbb3f_4:;
/* 1803dbb43: movsd qword ptr [rsi + 0xd0], xmm3 */
L_1803dbb43_0:;
L_1803dbb43_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0xd0))));
L_1803dbb43_2:;
wr(s->u,20,8,rd(s->r,4800,8));
L_1803dbb43_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dbb43_4:;
/* 1803dbb4b: jb 0x1803dbb89 */
L_1803dbb4b_0:;
L_1803dbb4b_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803dbb89);}
L_1803dbb4b_2:;
return UINT64_C(0x1803dbb4d);
}
uint64_t b_1803dbb4d(CPU*s){
/* 1803dbb4d: subss xmm1, xmm2 */
L_1803dbb4d_0:;
L_1803dbb4d_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803dbb4d_2:;
/* 1803dbb51: comiss xmm1, xmm2 */
L_1803dbb51_0:;
L_1803dbb51_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803dbb51_2:;
wr(s->u,2,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803dbb51_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803dbb51_4:;
wr(s->u,3,1,(fv(rd(s->r,4672,4),4)==fv(rd(s->r,4736,4),4)));
L_1803dbb51_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dbb51_6:;
wr(s->u,4,1,(fv(rd(s->r,4672,4),4)<fv(rd(s->r,4736,4),4)));
L_1803dbb51_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803dbb51_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbb51_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dbb51_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dbb51_11:;
/* 1803dbb54: jbe 0x1803dbb60 */
L_1803dbb54_0:;
L_1803dbb54_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803dbb54_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dbb60);}
L_1803dbb54_3:;
return UINT64_C(0x1803dbb56);
}
uint64_t b_1803dbb56(CPU*s){
/* 1803dbb56: movsd xmm0, qword ptr [rip + 0x27101a] */
L_1803dbb56_0:;
L_1803dbb56_1:;
wr(s->r,4608,8,mr(UINT64_C(0x18064cb78),8));
L_1803dbb56_2:;
wr(s->r,4616,8,((U)UINT64_C(0x0)));
L_1803dbb56_3:;
/* 1803dbb5e: jmp 0x1803dbb66 */
L_1803dbb5e_0:;
L_1803dbb5e_1:;
return UINT64_C(0x1803dbb66);
L_1803dbb5e_2:;
return UINT64_C(0x1803dbb60);
}
uint64_t b_1803dbb60(CPU*s){
/* 1803dbb60: unpcklps xmm1, xmm1 */
L_1803dbb60_0:;
L_1803dbb60_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803dbb60_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803dbb60_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803dbb60_4:;
/* 1803dbb63: cvtps2pd xmm0, xmm1 */
L_1803dbb63_0:;
L_1803dbb63_1:;
wr(s->u,44,8,rd(s->r,4672,8));
L_1803dbb63_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,44,4),4),8));
L_1803dbb63_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,48,4),4),8));
L_1803dbb63_4:;
/* 1803dbb66: movd xmm1, dword ptr [rsi + 0x58] */
L_1803dbb66_0:;
L_1803dbb66_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x58))));
L_1803dbb66_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbb66_3:;
wr(s->r,4672,16,rd(s->u,16,4));
L_1803dbb66_4:;
/* 1803dbb6b: mov rcx, qword ptr [rsi + 0x6708] */
L_1803dbb6b_0:;
L_1803dbb6b_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x6708))));
L_1803dbb6b_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbb6b_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dbb6b_4:;
/* 1803dbb72: cvtdq2pd xmm1, xmm1 */
L_1803dbb72_0:;
L_1803dbb72_1:;
wr(s->u,36,8,rd(s->r,4672,8));
L_1803dbb72_2:;
wr(s->r,4672,8,fb((double)sx(rd(s->u,36,4),4),8));
L_1803dbb72_3:;
wr(s->r,4680,8,fb((double)sx(rd(s->u,40,4),4),8));
L_1803dbb72_4:;
/* 1803dbb76: mov rax, qword ptr [rcx] */
L_1803dbb76_0:;
L_1803dbb76_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dbb76_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dbb76_3:;
/* 1803dbb79: mulsd xmm1, xmm0 */
L_1803dbb79_0:;
L_1803dbb79_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803dbb79_2:;
/* 1803dbb7d: addsd xmm1, xmm3 */
L_1803dbb7d_0:;
L_1803dbb7d_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803dbb7d_2:;
/* 1803dbb81: call qword ptr [rax + 0x98] */
L_1803dbb81_0:;
L_1803dbb81_1:;
wr(s->u,8,8,(rd(s->r,0,8)+((U)UINT64_C(0x98))));
L_1803dbb81_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbb81_3:;
wr(s->u,28,8,rd(s->u,20,8));
L_1803dbb81_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbb81_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbb87)));
L_1803dbb81_6:;
return (uint64_t)rd(s->u,28,8);
L_1803dbb81_7:;
return UINT64_C(0x1803dbb87);
}
uint64_t b_1803dbb66(CPU*s){
/* 1803dbb66: movd xmm1, dword ptr [rsi + 0x58] */
L_1803dbb66_0:;
L_1803dbb66_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x58))));
L_1803dbb66_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbb66_3:;
wr(s->r,4672,16,rd(s->u,16,4));
L_1803dbb66_4:;
/* 1803dbb6b: mov rcx, qword ptr [rsi + 0x6708] */
L_1803dbb6b_0:;
L_1803dbb6b_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x6708))));
L_1803dbb6b_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbb6b_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dbb6b_4:;
/* 1803dbb72: cvtdq2pd xmm1, xmm1 */
L_1803dbb72_0:;
L_1803dbb72_1:;
wr(s->u,36,8,rd(s->r,4672,8));
L_1803dbb72_2:;
wr(s->r,4672,8,fb((double)sx(rd(s->u,36,4),4),8));
L_1803dbb72_3:;
wr(s->r,4680,8,fb((double)sx(rd(s->u,40,4),4),8));
L_1803dbb72_4:;
/* 1803dbb76: mov rax, qword ptr [rcx] */
L_1803dbb76_0:;
L_1803dbb76_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dbb76_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dbb76_3:;
/* 1803dbb79: mulsd xmm1, xmm0 */
L_1803dbb79_0:;
L_1803dbb79_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803dbb79_2:;
/* 1803dbb7d: addsd xmm1, xmm3 */
L_1803dbb7d_0:;
L_1803dbb7d_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803dbb7d_2:;
/* 1803dbb81: call qword ptr [rax + 0x98] */
L_1803dbb81_0:;
L_1803dbb81_1:;
wr(s->u,8,8,(rd(s->r,0,8)+((U)UINT64_C(0x98))));
L_1803dbb81_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbb81_3:;
wr(s->u,28,8,rd(s->u,20,8));
L_1803dbb81_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbb81_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbb87)));
L_1803dbb81_6:;
return (uint64_t)rd(s->u,28,8);
L_1803dbb81_7:;
return UINT64_C(0x1803dbb87);
}
uint64_t b_1803dbb87(CPU*s){
/* 1803dbb87: jmp 0x1803dbbca */
L_1803dbb87_0:;
L_1803dbb87_1:;
return UINT64_C(0x1803dbbca);
L_1803dbb87_2:;
return UINT64_C(0x1803dbb89);
}
uint64_t b_1803dbb89(CPU*s){
/* 1803dbb89: movaps xmm0, xmm2 */
L_1803dbb89_0:;
L_1803dbb89_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803dbb89_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803dbb89_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803dbb89_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803dbb89_5:;
/* 1803dbb8c: divss xmm0, xmm1 */
L_1803dbb8c_0:;
L_1803dbb8c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803dbb8c_2:;
/* 1803dbb90: subss xmm0, xmm2 */
L_1803dbb90_0:;
L_1803dbb90_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803dbb90_2:;
/* 1803dbb94: comiss xmm0, xmm2 */
L_1803dbb94_0:;
L_1803dbb94_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dbb94_2:;
wr(s->u,2,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803dbb94_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803dbb94_4:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4736,4),4)));
L_1803dbb94_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dbb94_6:;
wr(s->u,4,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4736,4),4)));
L_1803dbb94_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803dbb94_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbb94_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dbb94_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dbb94_11:;
/* 1803dbb97: jbe 0x1803dbba3 */
L_1803dbb97_0:;
L_1803dbb97_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803dbb97_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dbba3);}
L_1803dbb97_3:;
return UINT64_C(0x1803dbb99);
}
uint64_t b_1803dbb99(CPU*s){
/* 1803dbb99: movsd xmm2, qword ptr [rip + 0x270fd7] */
L_1803dbb99_0:;
L_1803dbb99_1:;
wr(s->r,4736,8,mr(UINT64_C(0x18064cb78),8));
L_1803dbb99_2:;
wr(s->r,4744,8,((U)UINT64_C(0x0)));
L_1803dbb99_3:;
/* 1803dbba1: jmp 0x1803dbba9 */
L_1803dbba1_0:;
L_1803dbba1_1:;
return UINT64_C(0x1803dbba9);
L_1803dbba1_2:;
return UINT64_C(0x1803dbba3);
}
uint64_t b_1803dbba3(CPU*s){
/* 1803dbba3: unpcklps xmm0, xmm0 */
L_1803dbba3_0:;
L_1803dbba3_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803dbba3_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803dbba3_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803dbba3_4:;
/* 1803dbba6: cvtps2pd xmm2, xmm0 */
L_1803dbba6_0:;
L_1803dbba6_1:;
wr(s->u,44,8,rd(s->r,4608,8));
L_1803dbba6_2:;
wr(s->r,4736,8,fb(fv(rd(s->u,44,4),4),8));
L_1803dbba6_3:;
wr(s->r,4744,8,fb(fv(rd(s->u,48,4),4),8));
L_1803dbba6_4:;
/* 1803dbba9: movd xmm1, dword ptr [rsi + 0x58] */
L_1803dbba9_0:;
L_1803dbba9_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x58))));
L_1803dbba9_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbba9_3:;
wr(s->r,4672,16,rd(s->u,16,4));
L_1803dbba9_4:;
/* 1803dbbae: mov rcx, qword ptr [rsi + 0x6708] */
L_1803dbbae_0:;
L_1803dbbae_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x6708))));
L_1803dbbae_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbbae_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dbbae_4:;
/* 1803dbbb5: cvtdq2pd xmm1, xmm1 */
L_1803dbbb5_0:;
L_1803dbbb5_1:;
wr(s->u,36,8,rd(s->r,4672,8));
L_1803dbbb5_2:;
wr(s->r,4672,8,fb((double)sx(rd(s->u,36,4),4),8));
L_1803dbbb5_3:;
wr(s->r,4680,8,fb((double)sx(rd(s->u,40,4),4),8));
L_1803dbbb5_4:;
/* 1803dbbb9: mov rax, qword ptr [rcx] */
L_1803dbbb9_0:;
L_1803dbbb9_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dbbb9_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dbbb9_3:;
/* 1803dbbbc: mulsd xmm1, xmm2 */
L_1803dbbbc_0:;
L_1803dbbbc_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,4736,8),8),8));
L_1803dbbbc_2:;
/* 1803dbbc0: addsd xmm1, xmm3 */
L_1803dbbc0_0:;
L_1803dbbc0_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803dbbc0_2:;
/* 1803dbbc4: call qword ptr [rax + 0x98] */
L_1803dbbc4_0:;
L_1803dbbc4_1:;
wr(s->u,8,8,(rd(s->r,0,8)+((U)UINT64_C(0x98))));
L_1803dbbc4_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbbc4_3:;
wr(s->u,28,8,rd(s->u,20,8));
L_1803dbbc4_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbbc4_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbbca)));
L_1803dbbc4_6:;
return (uint64_t)rd(s->u,28,8);
L_1803dbbc4_7:;
return UINT64_C(0x1803dbbca);
}
uint64_t b_1803dbba9(CPU*s){
/* 1803dbba9: movd xmm1, dword ptr [rsi + 0x58] */
L_1803dbba9_0:;
L_1803dbba9_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x58))));
L_1803dbba9_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbba9_3:;
wr(s->r,4672,16,rd(s->u,16,4));
L_1803dbba9_4:;
/* 1803dbbae: mov rcx, qword ptr [rsi + 0x6708] */
L_1803dbbae_0:;
L_1803dbbae_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x6708))));
L_1803dbbae_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbbae_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dbbae_4:;
/* 1803dbbb5: cvtdq2pd xmm1, xmm1 */
L_1803dbbb5_0:;
L_1803dbbb5_1:;
wr(s->u,36,8,rd(s->r,4672,8));
L_1803dbbb5_2:;
wr(s->r,4672,8,fb((double)sx(rd(s->u,36,4),4),8));
L_1803dbbb5_3:;
wr(s->r,4680,8,fb((double)sx(rd(s->u,40,4),4),8));
L_1803dbbb5_4:;
/* 1803dbbb9: mov rax, qword ptr [rcx] */
L_1803dbbb9_0:;
L_1803dbbb9_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dbbb9_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dbbb9_3:;
/* 1803dbbbc: mulsd xmm1, xmm2 */
L_1803dbbbc_0:;
L_1803dbbbc_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,4736,8),8),8));
L_1803dbbbc_2:;
/* 1803dbbc0: addsd xmm1, xmm3 */
L_1803dbbc0_0:;
L_1803dbbc0_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803dbbc0_2:;
/* 1803dbbc4: call qword ptr [rax + 0x98] */
L_1803dbbc4_0:;
L_1803dbbc4_1:;
wr(s->u,8,8,(rd(s->r,0,8)+((U)UINT64_C(0x98))));
L_1803dbbc4_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbbc4_3:;
wr(s->u,28,8,rd(s->u,20,8));
L_1803dbbc4_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbbc4_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbbca)));
L_1803dbbc4_6:;
return (uint64_t)rd(s->u,28,8);
L_1803dbbc4_7:;
return UINT64_C(0x1803dbbca);
}
uint64_t b_1803dbbca(CPU*s){
/* 1803dbbca: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dbbca_0:;
L_1803dbbca_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dbbca_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbbca_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dbbca_4:;
/* 1803dbbd1: mov r8d, dword ptr [rsi + 0x64] */
L_1803dbbd1_0:;
L_1803dbbd1_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x64))));
L_1803dbbd1_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbbd1_3:;
wr(s->r,128,4,rd(s->u,16,4));
L_1803dbbd1_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dbbd1_5:;
/* 1803dbbd5: mov r9, rbp */
L_1803dbbd5_0:;
L_1803dbbd5_1:;
wr(s->r,136,8,rd(s->r,40,8));
L_1803dbbd5_2:;
/* 1803dbbd8: mov rax, qword ptr [rcx] */
L_1803dbbd8_0:;
L_1803dbbd8_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dbbd8_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dbbd8_3:;
/* 1803dbbdb: mov rdx, rbp */
L_1803dbbdb_0:;
L_1803dbbdb_1:;
wr(s->r,16,8,rd(s->r,40,8));
L_1803dbbdb_2:;
/* 1803dbbde: call qword ptr [rax + 8] */
L_1803dbbde_0:;
L_1803dbbde_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803dbbde_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbbde_3:;
wr(s->u,28,8,rd(s->u,20,8));
L_1803dbbde_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbbde_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbbe1)));
L_1803dbbde_6:;
return (uint64_t)rd(s->u,28,8);
L_1803dbbde_7:;
return UINT64_C(0x1803dbbe1);
}
uint64_t b_1803dbbe1(CPU*s){
/* 1803dbbe1: cmp eax, -1 */
L_1803dbbe1_0:;
L_1803dbbe1_1:;
wr(s->u,7,4,rd(s->r,0,4));
L_1803dbbe1_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0xffffffff))));
L_1803dbbe1_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0xffffffff)),4,1));
L_1803dbbe1_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0xffffffff))));
L_1803dbbe1_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbbe1_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803dbbe1_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803dbbe1_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803dbbe1_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803dbbe1_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803dbbe1_11:;
/* 1803dbbe4: jne 0x1803dbbf4 */
L_1803dbbe4_0:;
L_1803dbbe4_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803dbbe4_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dbbf4);}
L_1803dbbe4_3:;
return UINT64_C(0x1803dbbe6);
}
uint64_t b_1803dbbe6(CPU*s){
/* 1803dbbe6: mov eax, dword ptr [rsi + 0x60] */
L_1803dbbe6_0:;
L_1803dbbe6_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x60))));
L_1803dbbe6_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbbe6_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803dbbe6_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dbbe6_5:;
/* 1803dbbe9: add dword ptr [rsi + 0x48], eax */
L_1803dbbe9_0:;
L_1803dbbe9_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x48))));
L_1803dbbe9_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbbe9_3:;
wr(s->r,512,1,(((rd(s->u,8,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->u,8,4)));
L_1803dbbe9_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbbe9_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,0,4),4,0));
L_1803dbbe9_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbbe9_7:;
wr(s->u,8,4,(rd(s->u,8,4)+rd(s->r,0,4)));
L_1803dbbe9_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dbbe9_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbbe9_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbbe9_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbbe9_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803dbbe9_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbbe9_14:;
wr(s->u,16,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803dbbe9_15:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dbbe9_16:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dbbe9_17:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dbbe9_18:;
/* 1803dbbec: or eax, 0xffffffff */
L_1803dbbec_0:;
L_1803dbbec_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dbbec_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbbec_3:;
wr(s->r,0,4,(rd(s->r,0,4)|((U)UINT64_C(0xffffffff))));
L_1803dbbec_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dbbec_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbbec_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dbbec_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dbbec_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dbbec_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dbbec_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dbbec_11:;
/* 1803dbbef: jmp 0x1803dbd3b */
L_1803dbbef_0:;
L_1803dbbef_1:;
return UINT64_C(0x1803dbd3b);
L_1803dbbef_2:;
return UINT64_C(0x1803dbbf4);
}
uint64_t b_1803dbbf4(CPU*s){
/* 1803dbbf4: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dbbf4_0:;
L_1803dbbf4_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dbbf4_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbbf4_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dbbf4_4:;
/* 1803dbbfb: mov rax, qword ptr [rcx] */
L_1803dbbfb_0:;
L_1803dbbfb_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dbbfb_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dbbfb_3:;
/* 1803dbbfe: call qword ptr [rax + 0x48] */
L_1803dbbfe_0:;
L_1803dbbfe_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x48))));
L_1803dbbfe_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbbfe_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803dbbfe_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbbfe_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbc01)));
L_1803dbbfe_6:;
return (uint64_t)rd(s->u,24,8);
L_1803dbbfe_7:;
return UINT64_C(0x1803dbc01);
}
uint64_t b_1803dbc01(CPU*s){
/* 1803dbc01: jmp 0x1803dbd35 */
L_1803dbc01_0:;
L_1803dbc01_1:;
return UINT64_C(0x1803dbd35);
L_1803dbc01_2:;
return UINT64_C(0x1803dbc06);
}
uint64_t b_1803dbc06(CPU*s){
/* 1803dbc06: cmp dword ptr [rsi + 0xc0], r12d */
L_1803dbc06_0:;
L_1803dbc06_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xc0))));
L_1803dbc06_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbc06_3:;
wr(s->u,18,4,rd(s->u,8,4));
L_1803dbc06_4:;
wr(s->r,512,1,(rd(s->u,18,4)<rd(s->r,160,4)));
L_1803dbc06_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),rd(s->r,160,4),4,1));
L_1803dbc06_6:;
wr(s->u,22,4,(rd(s->u,18,4)-rd(s->r,160,4)));
L_1803dbc06_7:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbc06_8:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803dbc06_9:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803dbc06_10:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803dbc06_11:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803dbc06_12:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803dbc06_13:;
/* 1803dbc0d: je 0x1803dbcbd */
L_1803dbc0d_0:;
L_1803dbc0d_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dbcbd);}
L_1803dbc0d_2:;
return UINT64_C(0x1803dbc13);
}
uint64_t b_1803dbc13(CPU*s){
/* 1803dbc13: cmp dword ptr [rsi + 0x88], r12d */
L_1803dbc13_0:;
L_1803dbc13_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x88))));
L_1803dbc13_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbc13_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803dbc13_4:;
wr(s->r,512,1,(rd(s->u,19,4)<rd(s->r,160,4)));
L_1803dbc13_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),rd(s->r,160,4),4,1));
L_1803dbc13_6:;
wr(s->u,23,4,(rd(s->u,19,4)-rd(s->r,160,4)));
L_1803dbc13_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbc13_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803dbc13_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803dbc13_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dbc13_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dbc13_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dbc13_13:;
/* 1803dbc1a: jne 0x1803dbc50 */
L_1803dbc1a_0:;
L_1803dbc1a_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803dbc1a_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dbc50);}
L_1803dbc1a_3:;
return UINT64_C(0x1803dbc1c);
}
uint64_t b_1803dbc1c(CPU*s){
/* 1803dbc1c: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dbc1c_0:;
L_1803dbc1c_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dbc1c_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbc1c_3:;
wr(s->r,8,8,rd(s->u,12,8));
L_1803dbc1c_4:;
/* 1803dbc23: mov ebx, dword ptr [rcx + 0x368] */
L_1803dbc23_0:;
L_1803dbc23_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x368))));
L_1803dbc23_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbc23_3:;
wr(s->r,24,4,rd(s->u,8,4));
L_1803dbc23_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dbc23_5:;
/* 1803dbc29: call 0x1803da8c0 */
L_1803dbc29_0:;
L_1803dbc29_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbc29_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbc2e)));
L_1803dbc29_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dbc29_4:;
return UINT64_C(0x1803dbc2e);
}
uint64_t b_1803dbc2e(CPU*s){
/* 1803dbc2e: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dbc2e_0:;
L_1803dbc2e_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dbc2e_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbc2e_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dbc2e_4:;
/* 1803dbc35: mov r11d, eax */
L_1803dbc35_0:;
L_1803dbc35_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803dbc35_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dbc35_3:;
/* 1803dbc38: mov eax, ebx */
L_1803dbc38_0:;
L_1803dbc38_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803dbc38_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dbc38_3:;
/* 1803dbc3a: cdq  */
L_1803dbc3a_0:;
L_1803dbc3a_1:;
wr(s->u,22,8,(U)sx(rd(s->r,0,4),4));
L_1803dbc3a_2:;
wr(s->r,16,4,(rd(s->u,22,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dbc3a_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dbc3a_4:;
/* 1803dbc3b: idiv r11d */
L_1803dbc3b_0:;
L_1803dbc3b_1:;
wr(s->u,30,8,(U)sx(rd(s->r,152,4),4));
L_1803dbc3b_2:;
wr(s->u,38,8,rd(s->r,16,4));
L_1803dbc3b_3:;
wr(s->u,46,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,38,8)<<((U)UINT64_C(0x20)))));
L_1803dbc3b_4:;
wr(s->u,54,8,rd(s->r,0,4));
L_1803dbc3b_5:;
wr(s->u,62,8,(rd(s->u,46,8)|rd(s->u,54,8)));
L_1803dbc3b_6:;
wr(s->u,70,8,((U)(sx(rd(s->u,62,8),8)/sx(rd(s->u,30,8),8))));
L_1803dbc3b_7:;
wr(s->r,0,4,(rd(s->u,70,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dbc3b_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dbc3b_9:;
wr(s->u,78,8,((U)(sx(rd(s->u,62,8),8)%sx(rd(s->u,30,8),8))));
L_1803dbc3b_10:;
wr(s->r,16,4,(rd(s->u,78,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dbc3b_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dbc3b_12:;
/* 1803dbc3e: mov ebx, eax */
L_1803dbc3e_0:;
L_1803dbc3e_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803dbc3e_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dbc3e_3:;
/* 1803dbc40: sar ebx, 1 */
L_1803dbc40_0:;
L_1803dbc40_1:;
wr(s->u,86,4,(rd(s->r,24,4)&((U)UINT64_C(0x1))));
L_1803dbc40_2:;
wr(s->r,512,1,(rd(s->u,86,4)!=((U)UINT64_C(0x0))));
L_1803dbc40_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbc40_4:;
wr(s->r,24,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,24,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,24,4),4)>>((U)UINT64_C(0x1)))));
L_1803dbc40_5:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dbc40_6:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbc40_7:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803dbc40_8:;
wr(s->u,16,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803dbc40_9:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dbc40_10:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dbc40_11:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dbc40_12:;
/* 1803dbc42: call 0x1803da8c0 */
L_1803dbc42_0:;
L_1803dbc42_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbc42_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbc47)));
L_1803dbc42_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dbc42_4:;
return UINT64_C(0x1803dbc47);
}
uint64_t b_1803dbc47(CPU*s){
/* 1803dbc47: mov r11d, eax */
L_1803dbc47_0:;
L_1803dbc47_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803dbc47_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dbc47_3:;
/* 1803dbc4a: imul r11d, ebx */
L_1803dbc4a_0:;
L_1803dbc4a_1:;
wr(s->u,8,8,(U)sx(rd(s->r,152,4),4));
L_1803dbc4a_2:;
wr(s->u,16,8,(U)sx(rd(s->r,24,4),4));
L_1803dbc4a_3:;
wr(s->u,24,8,(rd(s->u,8,8)*rd(s->u,16,8)));
L_1803dbc4a_4:;
wr(s->r,152,4,(rd(s->u,24,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dbc4a_5:;
wr(s->u,32,4,(rd(s->u,24,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dbc4a_6:;
wr(s->u,0,8,(U)sx(rd(s->r,152,4),4));
L_1803dbc4a_7:;
wr(s->r,512,1,(rd(s->u,0,8)!=rd(s->u,24,8)));
L_1803dbc4a_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803dbc4a_9:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dbc4a_10:;
/* 1803dbc4e: jmp 0x1803dbc5f */
L_1803dbc4e_0:;
L_1803dbc4e_1:;
return UINT64_C(0x1803dbc5f);
L_1803dbc4e_2:;
return UINT64_C(0x1803dbc50);
}
uint64_t b_1803dbc50(CPU*s){
/* 1803dbc50: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dbc50_0:;
L_1803dbc50_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dbc50_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbc50_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dbc50_4:;
/* 1803dbc57: call 0x1803da8c0 */
L_1803dbc57_0:;
L_1803dbc57_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbc57_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbc5c)));
L_1803dbc57_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dbc57_4:;
return UINT64_C(0x1803dbc5c);
}
uint64_t b_1803dbc5c(CPU*s){
/* 1803dbc5c: mov r11d, eax */
L_1803dbc5c_0:;
L_1803dbc5c_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803dbc5c_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dbc5c_3:;
/* 1803dbc5f: cmp dword ptr [rsi + 0x30], r12d */
L_1803dbc5f_0:;
L_1803dbc5f_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803dbc5f_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbc5f_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803dbc5f_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,160,4)));
L_1803dbc5f_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,160,4),4,1));
L_1803dbc5f_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,160,4)));
L_1803dbc5f_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbc5f_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803dbc5f_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803dbc5f_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803dbc5f_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803dbc5f_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803dbc5f_13:;
/* 1803dbc63: jle 0x1803dbc99 */
L_1803dbc63_0:;
L_1803dbc63_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dbc63_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803dbc63_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803dbc99);}
L_1803dbc63_4:;
return UINT64_C(0x1803dbc65);
}
uint64_t b_1803dbc5f(CPU*s){
/* 1803dbc5f: cmp dword ptr [rsi + 0x30], r12d */
L_1803dbc5f_0:;
L_1803dbc5f_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803dbc5f_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbc5f_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803dbc5f_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,160,4)));
L_1803dbc5f_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,160,4),4,1));
L_1803dbc5f_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,160,4)));
L_1803dbc5f_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbc5f_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803dbc5f_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803dbc5f_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803dbc5f_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803dbc5f_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803dbc5f_13:;
/* 1803dbc63: jle 0x1803dbc99 */
L_1803dbc63_0:;
L_1803dbc63_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dbc63_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803dbc63_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803dbc99);}
L_1803dbc63_4:;
return UINT64_C(0x1803dbc65);
}
uint64_t b_1803dbc65(CPU*s){
/* 1803dbc65: movsxd r10, dword ptr [rsi + 0x88] */
L_1803dbc65_0:;
L_1803dbc65_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x88))));
L_1803dbc65_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dbc65_3:;
wr(s->r,144,8,(U)sx(rd(s->u,48,4),4));
L_1803dbc65_4:;
/* 1803dbc6c: mov r9d, dword ptr [rsi + 0x30] */
L_1803dbc6c_0:;
L_1803dbc6c_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x30))));
L_1803dbc6c_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbc6c_3:;
wr(s->r,136,4,rd(s->u,48,4));
L_1803dbc6c_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dbc6c_5:;
/* 1803dbc70: lea rdx, [rsp + 0x40] */
L_1803dbc70_0:;
L_1803dbc70_1:;
wr(s->u,32,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dbc70_2:;
wr(s->r,16,8,rd(s->u,32,8));
L_1803dbc70_3:;
/* 1803dbc75: lea r8, [rsi + 0x270] */
L_1803dbc75_0:;
L_1803dbc75_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x270))));
L_1803dbc75_2:;
wr(s->r,128,8,rd(s->u,8,8));
L_1803dbc75_3:;
/* 1803dbc7c: nop dword ptr [rax] */
L_1803dbc7c_0:;
L_1803dbc7c_1:;
/* 1803dbc80: mov rax, qword ptr [r8] */
L_1803dbc80_0:;
L_1803dbc80_1:;
wr(s->u,52,8,mr((uint64_t)rd(s->r,128,8),8));
L_1803dbc80_2:;
wr(s->r,0,8,rd(s->u,52,8));
L_1803dbc80_3:;
/* 1803dbc83: add rdx, 8 */
L_1803dbc83_0:;
L_1803dbc83_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803dbc83_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x8)),8,0));
L_1803dbc83_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803dbc83_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbc83_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803dbc83_6:;
wr(s->u,61,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803dbc83_7:;
wr(s->u,69,1,pop(rd(s->u,61,8),8));
L_1803dbc83_8:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803dbc83_9:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803dbc83_10:;
/* 1803dbc87: add r8, 8 */
L_1803dbc87_0:;
L_1803dbc87_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803dbc87_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803dbc87_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803dbc87_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbc87_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dbc87_6:;
wr(s->u,61,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dbc87_7:;
wr(s->u,69,1,pop(rd(s->u,61,8),8));
L_1803dbc87_8:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803dbc87_9:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803dbc87_10:;
/* 1803dbc8b: sub r9, 1 */
L_1803dbc8b_0:;
L_1803dbc8b_1:;
wr(s->r,512,1,(rd(s->r,136,8)<((U)UINT64_C(0x1))));
L_1803dbc8b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x1)),8,1));
L_1803dbc8b_3:;
wr(s->r,136,8,(rd(s->r,136,8)-((U)UINT64_C(0x1))));
L_1803dbc8b_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbc8b_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dbc8b_6:;
wr(s->u,61,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dbc8b_7:;
wr(s->u,69,1,pop(rd(s->u,61,8),8));
L_1803dbc8b_8:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803dbc8b_9:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803dbc8b_10:;
/* 1803dbc8f: lea rcx, [rax + r10*4] */
L_1803dbc8f_0:;
L_1803dbc8f_1:;
wr(s->u,16,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803dbc8f_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dbc8f_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803dbc8f_4:;
/* 1803dbc93: mov qword ptr [rdx - 8], rcx */
L_1803dbc93_0:;
L_1803dbc93_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803dbc93_2:;
wr(s->u,40,8,rd(s->r,8,8));
L_1803dbc93_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,40,8));
L_1803dbc93_4:;
/* 1803dbc97: jne 0x1803dbc80 */
L_1803dbc97_0:;
L_1803dbc97_1:;
wr(s->u,60,1,(!rd(s->r,518,1)));
L_1803dbc97_2:;
if(rd(s->u,60,1)){goto L_1803dbc80_0;}
L_1803dbc97_3:;
return UINT64_C(0x1803dbc99);
}
uint64_t b_1803dbc80(CPU*s){
/* 1803dbc80: mov rax, qword ptr [r8] */
L_1803dbc80_0:;
L_1803dbc80_1:;
wr(s->u,32,8,mr((uint64_t)rd(s->r,128,8),8));
L_1803dbc80_2:;
wr(s->r,0,8,rd(s->u,32,8));
L_1803dbc80_3:;
/* 1803dbc83: add rdx, 8 */
L_1803dbc83_0:;
L_1803dbc83_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803dbc83_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x8)),8,0));
L_1803dbc83_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803dbc83_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbc83_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803dbc83_6:;
wr(s->u,41,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803dbc83_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803dbc83_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803dbc83_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803dbc83_10:;
/* 1803dbc87: add r8, 8 */
L_1803dbc87_0:;
L_1803dbc87_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803dbc87_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803dbc87_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803dbc87_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbc87_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dbc87_6:;
wr(s->u,41,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dbc87_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803dbc87_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803dbc87_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803dbc87_10:;
/* 1803dbc8b: sub r9, 1 */
L_1803dbc8b_0:;
L_1803dbc8b_1:;
wr(s->r,512,1,(rd(s->r,136,8)<((U)UINT64_C(0x1))));
L_1803dbc8b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x1)),8,1));
L_1803dbc8b_3:;
wr(s->r,136,8,(rd(s->r,136,8)-((U)UINT64_C(0x1))));
L_1803dbc8b_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbc8b_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dbc8b_6:;
wr(s->u,41,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dbc8b_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803dbc8b_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803dbc8b_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803dbc8b_10:;
/* 1803dbc8f: lea rcx, [rax + r10*4] */
L_1803dbc8f_0:;
L_1803dbc8f_1:;
wr(s->u,8,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803dbc8f_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803dbc8f_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dbc8f_4:;
/* 1803dbc93: mov qword ptr [rdx - 8], rcx */
L_1803dbc93_0:;
L_1803dbc93_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803dbc93_2:;
wr(s->u,24,8,rd(s->r,8,8));
L_1803dbc93_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,24,8));
L_1803dbc93_4:;
/* 1803dbc97: jne 0x1803dbc80 */
L_1803dbc97_0:;
L_1803dbc97_1:;
wr(s->u,40,1,(!rd(s->r,518,1)));
L_1803dbc97_2:;
if(rd(s->u,40,1)){goto L_1803dbc80_0;}
L_1803dbc97_3:;
return UINT64_C(0x1803dbc99);
}
uint64_t b_1803dbc99(CPU*s){
/* 1803dbc99: cmp dword ptr [rsi + 0xbc], r12d */
L_1803dbc99_0:;
L_1803dbc99_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xbc))));
L_1803dbc99_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbc99_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803dbc99_4:;
wr(s->r,512,1,(rd(s->u,19,4)<rd(s->r,160,4)));
L_1803dbc99_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),rd(s->r,160,4),4,1));
L_1803dbc99_6:;
wr(s->u,23,4,(rd(s->u,19,4)-rd(s->r,160,4)));
L_1803dbc99_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbc99_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803dbc99_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803dbc99_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dbc99_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dbc99_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dbc99_13:;
/* 1803dbca0: jne 0x1803dbd35 */
L_1803dbca0_0:;
L_1803dbca0_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803dbca0_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dbd35);}
L_1803dbca0_3:;
return UINT64_C(0x1803dbca6);
}
uint64_t b_1803dbca6(CPU*s){
/* 1803dbca6: mov rcx, qword ptr [rsi + 0x6700] */
L_1803dbca6_0:;
L_1803dbca6_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x6700))));
L_1803dbca6_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbca6_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803dbca6_4:;
/* 1803dbcad: lea rdx, [rsp + 0x40] */
L_1803dbcad_0:;
L_1803dbcad_1:;
wr(s->u,16,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dbcad_2:;
wr(s->r,16,8,rd(s->u,16,8));
L_1803dbcad_3:;
/* 1803dbcb2: mov r8d, r11d */
L_1803dbcb2_0:;
L_1803dbcb2_1:;
wr(s->r,128,4,rd(s->r,152,4));
L_1803dbcb2_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dbcb2_3:;
/* 1803dbcb5: mov rax, qword ptr [rcx] */
L_1803dbcb5_0:;
L_1803dbcb5_1:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dbcb5_2:;
wr(s->r,0,8,rd(s->u,24,8));
L_1803dbcb5_3:;
/* 1803dbcb8: call qword ptr [rax + 0x10] */
L_1803dbcb8_0:;
L_1803dbcb8_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803dbcb8_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbcb8_3:;
wr(s->u,32,8,rd(s->u,24,8));
L_1803dbcb8_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbcb8_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbcbb)));
L_1803dbcb8_6:;
return (uint64_t)rd(s->u,32,8);
L_1803dbcb8_7:;
return UINT64_C(0x1803dbcbb);
}
uint64_t b_1803dbcbb(CPU*s){
/* 1803dbcbb: jmp 0x1803dbd35 */
L_1803dbcbb_0:;
L_1803dbcbb_1:;
return UINT64_C(0x1803dbd35);
L_1803dbcbb_2:;
return UINT64_C(0x1803dbcbd);
}
uint64_t b_1803dbcbd(CPU*s){
/* 1803dbcbd: cmp dword ptr [rsi + 0xbc], r12d */
L_1803dbcbd_0:;
L_1803dbcbd_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xbc))));
L_1803dbcbd_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbcbd_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803dbcbd_4:;
wr(s->r,512,1,(rd(s->u,19,4)<rd(s->r,160,4)));
L_1803dbcbd_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),rd(s->r,160,4),4,1));
L_1803dbcbd_6:;
wr(s->u,23,4,(rd(s->u,19,4)-rd(s->r,160,4)));
L_1803dbcbd_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbcbd_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803dbcbd_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803dbcbd_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dbcbd_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dbcbd_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dbcbd_13:;
/* 1803dbcc4: jne 0x1803dbcde */
L_1803dbcc4_0:;
L_1803dbcc4_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803dbcc4_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dbcde);}
L_1803dbcc4_3:;
return UINT64_C(0x1803dbcc6);
}
uint64_t b_1803dbcc6(CPU*s){
/* 1803dbcc6: mov rcx, qword ptr [rsi + 0x6700] */
L_1803dbcc6_0:;
L_1803dbcc6_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x6700))));
L_1803dbcc6_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbcc6_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dbcc6_4:;
/* 1803dbccd: mov r8d, dword ptr [rsi + 0x68] */
L_1803dbccd_0:;
L_1803dbccd_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x68))));
L_1803dbccd_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbccd_3:;
wr(s->r,128,4,rd(s->u,16,4));
L_1803dbccd_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dbccd_5:;
/* 1803dbcd1: lea rdx, [rsi + 0x270] */
L_1803dbcd1_0:;
L_1803dbcd1_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x270))));
L_1803dbcd1_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803dbcd1_3:;
/* 1803dbcd8: mov rax, qword ptr [rcx] */
L_1803dbcd8_0:;
L_1803dbcd8_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dbcd8_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dbcd8_3:;
/* 1803dbcdb: call qword ptr [rax + 0x10] */
L_1803dbcdb_0:;
L_1803dbcdb_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803dbcdb_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbcdb_3:;
wr(s->u,28,8,rd(s->u,20,8));
L_1803dbcdb_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbcdb_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbcde)));
L_1803dbcdb_6:;
return (uint64_t)rd(s->u,28,8);
L_1803dbcdb_7:;
return UINT64_C(0x1803dbcde);
}
uint64_t b_1803dbcde(CPU*s){
/* 1803dbcde: mov rcx, qword ptr [rsi + 0x66f8] */
L_1803dbcde_0:;
L_1803dbcde_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f8))));
L_1803dbcde_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbcde_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dbcde_4:;
/* 1803dbce5: mov rax, qword ptr [rcx] */
L_1803dbce5_0:;
L_1803dbce5_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dbce5_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dbce5_3:;
/* 1803dbce8: call qword ptr [rax + 0x28] */
L_1803dbce8_0:;
L_1803dbce8_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x28))));
L_1803dbce8_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbce8_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803dbce8_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbce8_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbceb)));
L_1803dbce8_6:;
return (uint64_t)rd(s->u,24,8);
L_1803dbce8_7:;
return UINT64_C(0x1803dbceb);
}
uint64_t b_1803dbceb(CPU*s){
/* 1803dbceb: cmp eax, 0x100 */
L_1803dbceb_0:;
L_1803dbceb_1:;
wr(s->r,512,1,(rd(s->r,0,4)<((U)UINT64_C(0x100))));
L_1803dbceb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x100)),4,1));
L_1803dbceb_3:;
wr(s->u,8,4,(rd(s->r,0,4)-((U)UINT64_C(0x100))));
L_1803dbceb_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbceb_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803dbceb_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803dbceb_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dbceb_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dbceb_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dbceb_10:;
/* 1803dbcf0: jle 0x1803dbd35 */
L_1803dbcf0_0:;
L_1803dbcf0_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dbcf0_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803dbcf0_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803dbd35);}
L_1803dbcf0_4:;
return UINT64_C(0x1803dbcf2);
}
uint64_t b_1803dbcf2(CPU*s){
/* 1803dbcf2: mov rcx, qword ptr [rsi + 0x6708] */
L_1803dbcf2_0:;
L_1803dbcf2_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x6708))));
L_1803dbcf2_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbcf2_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dbcf2_4:;
/* 1803dbcf9: mov rax, qword ptr [rcx] */
L_1803dbcf9_0:;
L_1803dbcf9_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dbcf9_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803dbcf9_3:;
/* 1803dbcfc: call qword ptr [rax + 0xa8] */
L_1803dbcfc_0:;
L_1803dbcfc_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xa8))));
L_1803dbcfc_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbcfc_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803dbcfc_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbcfc_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbd02)));
L_1803dbcfc_6:;
return (uint64_t)rd(s->u,16,8);
L_1803dbcfc_7:;
return UINT64_C(0x1803dbd02);
}
uint64_t b_1803dbd02(CPU*s){
/* 1803dbd02: cmp eax, 0x80 */
L_1803dbd02_0:;
L_1803dbd02_1:;
wr(s->r,512,1,(rd(s->r,0,4)<((U)UINT64_C(0x80))));
L_1803dbd02_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x80)),4,1));
L_1803dbd02_3:;
wr(s->u,8,4,(rd(s->r,0,4)-((U)UINT64_C(0x80))));
L_1803dbd02_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbd02_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803dbd02_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803dbd02_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dbd02_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dbd02_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dbd02_10:;
/* 1803dbd07: jle 0x1803dbd35 */
L_1803dbd07_0:;
L_1803dbd07_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dbd07_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803dbd07_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803dbd35);}
L_1803dbd07_4:;
return UINT64_C(0x1803dbd09);
}
uint64_t b_1803dbd09(CPU*s){
/* 1803dbd09: mov rbx, qword ptr [rsi + 0x66f8] */
L_1803dbd09_0:;
L_1803dbd09_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f8))));
L_1803dbd09_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbd09_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803dbd09_4:;
/* 1803dbd10: mov rcx, rbx */
L_1803dbd10_0:;
L_1803dbd10_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dbd10_2:;
/* 1803dbd13: mov rdi, qword ptr [rbx] */
L_1803dbd13_0:;
L_1803dbd13_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803dbd13_2:;
wr(s->r,56,8,rd(s->u,16,8));
L_1803dbd13_3:;
/* 1803dbd16: call qword ptr [rdi + 0x28] */
L_1803dbd16_0:;
L_1803dbd16_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x28))));
L_1803dbd16_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbd16_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803dbd16_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbd16_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbd19)));
L_1803dbd16_6:;
return (uint64_t)rd(s->u,24,8);
L_1803dbd16_7:;
return UINT64_C(0x1803dbd19);
}
uint64_t b_1803dbd19(CPU*s){
/* 1803dbd19: mov rcx, rbx */
L_1803dbd19_0:;
L_1803dbd19_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dbd19_2:;
/* 1803dbd1c: lea edx, [rax - 0x80] */
L_1803dbd1c_0:;
L_1803dbd1c_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xffffffffffffff80))));
L_1803dbd1c_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dbd1c_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dbd1c_4:;
/* 1803dbd1f: call qword ptr [rdi + 0x10] */
L_1803dbd1f_0:;
L_1803dbd1f_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803dbd1f_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbd1f_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803dbd1f_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbd1f_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbd22)));
L_1803dbd1f_6:;
return (uint64_t)rd(s->u,16,8);
L_1803dbd1f_7:;
return UINT64_C(0x1803dbd22);
}
uint64_t b_1803dbd22(CPU*s){
/* 1803dbd22: mov rcx, qword ptr [rsi + 0x6708] */
L_1803dbd22_0:;
L_1803dbd22_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x6708))));
L_1803dbd22_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbd22_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dbd22_4:;
/* 1803dbd29: mov edx, 0xffffff80 */
L_1803dbd29_0:;
L_1803dbd29_1:;
wr(s->r,16,8,((U)UINT64_C(0xffffff80)));
L_1803dbd29_2:;
/* 1803dbd2e: mov r8, qword ptr [rcx] */
L_1803dbd2e_0:;
L_1803dbd2e_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dbd2e_2:;
wr(s->r,128,8,rd(s->u,16,8));
L_1803dbd2e_3:;
/* 1803dbd31: call qword ptr [r8 + 0x18] */
L_1803dbd31_0:;
L_1803dbd31_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x18))));
L_1803dbd31_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbd31_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803dbd31_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbd31_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbd35)));
L_1803dbd31_6:;
return (uint64_t)rd(s->u,24,8);
L_1803dbd31_7:;
return UINT64_C(0x1803dbd35);
}
uint64_t b_1803dbd35(CPU*s){
/* 1803dbd35: inc dword ptr [rsi + 0x6c] */
L_1803dbd35_0:;
L_1803dbd35_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x6c))));
L_1803dbd35_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbd35_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,16,4),((U)UINT64_C(0x1)),4,0));
L_1803dbd35_4:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbd35_5:;
wr(s->u,16,4,(rd(s->u,16,4)+((U)UINT64_C(0x1))));
L_1803dbd35_6:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dbd35_7:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbd35_8:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbd35_9:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbd35_10:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_1803dbd35_11:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbd35_12:;
wr(s->u,28,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_1803dbd35_13:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dbd35_14:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dbd35_15:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dbd35_16:;
/* 1803dbd38: mov eax, r12d */
L_1803dbd38_0:;
L_1803dbd38_1:;
wr(s->r,0,4,rd(s->r,160,4));
L_1803dbd38_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dbd38_3:;
/* 1803dbd3b: lea r11, [rsp + 0x350] */
L_1803dbd3b_0:;
L_1803dbd3b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x350))+rd(s->r,32,8)));
L_1803dbd3b_2:;
wr(s->r,152,8,rd(s->u,8,8));
L_1803dbd3b_3:;
/* 1803dbd43: mov rbx, qword ptr [r11 + 0x28] */
L_1803dbd43_0:;
L_1803dbd43_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x28))));
L_1803dbd43_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbd43_3:;
wr(s->r,24,8,rd(s->u,20,8));
L_1803dbd43_4:;
/* 1803dbd47: mov rbp, qword ptr [r11 + 0x30] */
L_1803dbd47_0:;
L_1803dbd47_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x30))));
L_1803dbd47_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbd47_3:;
wr(s->r,40,8,rd(s->u,20,8));
L_1803dbd47_4:;
/* 1803dbd4b: mov rsp, r11 */
L_1803dbd4b_0:;
L_1803dbd4b_1:;
wr(s->r,32,8,rd(s->r,152,8));
L_1803dbd4b_2:;
/* 1803dbd4e: pop r12 */
L_1803dbd4e_0:;
L_1803dbd4e_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803dbd4e_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbd4e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbd4e_4:;
wr(s->r,160,8,rd(s->u,34,8));
L_1803dbd4e_5:;
/* 1803dbd50: pop rdi */
L_1803dbd50_0:;
L_1803dbd50_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803dbd50_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbd50_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbd50_4:;
wr(s->r,56,8,rd(s->u,34,8));
L_1803dbd50_5:;
/* 1803dbd51: pop rsi */
L_1803dbd51_0:;
L_1803dbd51_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803dbd51_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbd51_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbd51_4:;
wr(s->r,48,8,rd(s->u,34,8));
L_1803dbd51_5:;
/* 1803dbd52: ret  */
L_1803dbd52_0:;
L_1803dbd52_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbd52_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbd52_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dbd52_4:;
return UINT64_C(0x1803dbd53);
}
uint64_t b_1803dbd3b(CPU*s){
/* 1803dbd3b: lea r11, [rsp + 0x350] */
L_1803dbd3b_0:;
L_1803dbd3b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x350))+rd(s->r,32,8)));
L_1803dbd3b_2:;
wr(s->r,152,8,rd(s->u,8,8));
L_1803dbd3b_3:;
/* 1803dbd43: mov rbx, qword ptr [r11 + 0x28] */
L_1803dbd43_0:;
L_1803dbd43_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x28))));
L_1803dbd43_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbd43_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803dbd43_4:;
/* 1803dbd47: mov rbp, qword ptr [r11 + 0x30] */
L_1803dbd47_0:;
L_1803dbd47_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x30))));
L_1803dbd47_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbd47_3:;
wr(s->r,40,8,rd(s->u,16,8));
L_1803dbd47_4:;
/* 1803dbd4b: mov rsp, r11 */
L_1803dbd4b_0:;
L_1803dbd4b_1:;
wr(s->r,32,8,rd(s->r,152,8));
L_1803dbd4b_2:;
/* 1803dbd4e: pop r12 */
L_1803dbd4e_0:;
L_1803dbd4e_1:;
wr(s->u,24,8,((U)UINT64_C(0x0)));
L_1803dbd4e_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbd4e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbd4e_4:;
wr(s->r,160,8,rd(s->u,24,8));
L_1803dbd4e_5:;
/* 1803dbd50: pop rdi */
L_1803dbd50_0:;
L_1803dbd50_1:;
wr(s->u,24,8,((U)UINT64_C(0x0)));
L_1803dbd50_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbd50_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbd50_4:;
wr(s->r,56,8,rd(s->u,24,8));
L_1803dbd50_5:;
/* 1803dbd51: pop rsi */
L_1803dbd51_0:;
L_1803dbd51_1:;
wr(s->u,24,8,((U)UINT64_C(0x0)));
L_1803dbd51_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbd51_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbd51_4:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803dbd51_5:;
/* 1803dbd52: ret  */
L_1803dbd52_0:;
L_1803dbd52_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbd52_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbd52_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dbd52_4:;
return UINT64_C(0x1803dbd53);
}
uint64_t b_1803dbd60(CPU*s){
/* 1803dbd60: mov qword ptr [rsp + 0x10], rbx */
L_1803dbd60_0:;
L_1803dbd60_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803dbd60_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803dbd60_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dbd60_4:;
/* 1803dbd65: push rsi */
L_1803dbd65_0:;
L_1803dbd65_1:;
wr(s->u,32,8,rd(s->r,48,8));
L_1803dbd65_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbd65_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,32,8));
L_1803dbd65_4:;
/* 1803dbd66: sub rsp, 0x20 */
L_1803dbd66_0:;
L_1803dbd66_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803dbd66_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803dbd66_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803dbd66_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbd66_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dbd66_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dbd66_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803dbd66_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dbd66_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dbd66_10:;
/* 1803dbd6a: mov rax, qword ptr [rcx] */
L_1803dbd6a_0:;
L_1803dbd6a_1:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dbd6a_2:;
wr(s->r,0,8,rd(s->u,24,8));
L_1803dbd6a_3:;
/* 1803dbd6d: mov rsi, r9 */
L_1803dbd6d_0:;
L_1803dbd6d_1:;
wr(s->r,48,8,rd(s->r,136,8));
L_1803dbd6d_2:;
/* 1803dbd70: mov rbx, rcx */
L_1803dbd70_0:;
L_1803dbd70_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803dbd70_2:;
/* 1803dbd73: call qword ptr [rax + 0x28] */
L_1803dbd73_0:;
L_1803dbd73_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x28))));
L_1803dbd73_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbd73_3:;
wr(s->u,50,8,rd(s->u,24,8));
L_1803dbd73_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbd73_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbd76)));
L_1803dbd73_6:;
return (uint64_t)rd(s->u,50,8);
L_1803dbd73_7:;
return UINT64_C(0x1803dbd76);
}
uint64_t b_1803dbd76(CPU*s){
/* 1803dbd76: cmp eax, -1 */
L_1803dbd76_0:;
L_1803dbd76_1:;
wr(s->u,7,4,rd(s->r,0,4));
L_1803dbd76_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0xffffffff))));
L_1803dbd76_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0xffffffff)),4,1));
L_1803dbd76_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0xffffffff))));
L_1803dbd76_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbd76_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803dbd76_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803dbd76_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803dbd76_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803dbd76_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803dbd76_11:;
/* 1803dbd79: jne 0x1803dbd88 */
L_1803dbd79_0:;
L_1803dbd79_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803dbd79_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dbd88);}
L_1803dbd79_3:;
return UINT64_C(0x1803dbd7b);
}
uint64_t b_1803dbd7b(CPU*s){
/* 1803dbd7b: or eax, eax */
L_1803dbd7b_0:;
L_1803dbd7b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dbd7b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbd7b_3:;
wr(s->r,0,4,(rd(s->r,0,4)|rd(s->r,0,4)));
L_1803dbd7b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dbd7b_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbd7b_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dbd7b_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dbd7b_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803dbd7b_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dbd7b_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dbd7b_11:;
/* 1803dbd7d: mov rbx, qword ptr [rsp + 0x38] */
L_1803dbd7d_0:;
L_1803dbd7d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803dbd7d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbd7d_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803dbd7d_4:;
/* 1803dbd82: add rsp, 0x20 */
L_1803dbd82_0:;
L_1803dbd82_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dbd82_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803dbd82_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803dbd82_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbd82_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dbd82_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dbd82_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dbd82_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dbd82_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dbd82_10:;
/* 1803dbd86: pop rsi */
L_1803dbd86_0:;
L_1803dbd86_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803dbd86_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbd86_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbd86_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1803dbd86_5:;
/* 1803dbd87: ret  */
L_1803dbd87_0:;
L_1803dbd87_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbd87_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbd87_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dbd87_4:;
return UINT64_C(0x1803dbd88);
}
uint64_t b_1803dbd88(CPU*s){
/* 1803dbd88: mov rax, qword ptr [rbx] */
L_1803dbd88_0:;
L_1803dbd88_1:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803dbd88_2:;
wr(s->r,0,8,rd(s->u,24,8));
L_1803dbd88_3:;
/* 1803dbd8b: mov rcx, rbx */
L_1803dbd8b_0:;
L_1803dbd8b_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dbd8b_2:;
/* 1803dbd8e: mov qword ptr [rsp + 0x30], rdi */
L_1803dbd8e_0:;
L_1803dbd8e_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dbd8e_2:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803dbd8e_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dbd8e_4:;
/* 1803dbd93: xor edi, edi */
L_1803dbd93_0:;
L_1803dbd93_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dbd93_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbd93_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803dbd93_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dbd93_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbd93_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803dbd93_7:;
wr(s->u,32,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803dbd93_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803dbd93_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803dbd93_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803dbd93_11:;
/* 1803dbd95: call qword ptr [rax + 0x38] */
L_1803dbd95_0:;
L_1803dbd95_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x38))));
L_1803dbd95_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbd95_3:;
wr(s->u,38,8,rd(s->u,24,8));
L_1803dbd95_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbd95_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbd98)));
L_1803dbd95_6:;
return (uint64_t)rd(s->u,38,8);
L_1803dbd95_7:;
return UINT64_C(0x1803dbd98);
}
uint64_t b_1803dbd8e(CPU*s){
/* 1803dbd8e: mov qword ptr [rsp + 0x30], rdi */
L_1803dbd8e_0:;
L_1803dbd8e_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dbd8e_2:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803dbd8e_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dbd8e_4:;
/* 1803dbd93: xor edi, edi */
L_1803dbd93_0:;
L_1803dbd93_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dbd93_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbd93_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803dbd93_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dbd93_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbd93_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803dbd93_7:;
wr(s->u,32,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803dbd93_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803dbd93_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803dbd93_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803dbd93_11:;
/* 1803dbd95: call qword ptr [rax + 0x38] */
L_1803dbd95_0:;
L_1803dbd95_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x38))));
L_1803dbd95_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbd95_3:;
wr(s->u,38,8,rd(s->u,24,8));
L_1803dbd95_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbd95_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbd98)));
L_1803dbd95_6:;
return (uint64_t)rd(s->u,38,8);
L_1803dbd95_7:;
return UINT64_C(0x1803dbd98);
}
uint64_t b_1803dbd98(CPU*s){
/* 1803dbd98: test eax, eax */
L_1803dbd98_0:;
L_1803dbd98_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dbd98_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbd98_3:;
wr(s->u,8,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803dbd98_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbd98_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803dbd98_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803dbd98_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dbd98_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dbd98_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dbd98_10:;
/* 1803dbd9a: jle 0x1803dbdbd */
L_1803dbd9a_0:;
L_1803dbd9a_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dbd9a_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803dbd9a_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803dbdbd);}
L_1803dbd9a_4:;
return UINT64_C(0x1803dbd9c);
}
uint64_t b_1803dbd9c(CPU*s){
/* 1803dbd9c: nop dword ptr [rax] */
L_1803dbd9c_0:;
L_1803dbd9c_1:;
/* 1803dbda0: mov rax, qword ptr [rbx] */
L_1803dbda0_0:;
L_1803dbda0_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803dbda0_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803dbda0_3:;
/* 1803dbda3: mov rcx, rbx */
L_1803dbda3_0:;
L_1803dbda3_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dbda3_2:;
/* 1803dbda6: call qword ptr [rax + 0x20] */
L_1803dbda6_0:;
L_1803dbda6_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x20))));
L_1803dbda6_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbda6_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803dbda6_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbda6_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbda9)));
L_1803dbda6_6:;
return (uint64_t)rd(s->u,16,8);
L_1803dbda6_7:;
return UINT64_C(0x1803dbda9);
}
uint64_t b_1803dbda0(CPU*s){
/* 1803dbda0: mov rax, qword ptr [rbx] */
L_1803dbda0_0:;
L_1803dbda0_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803dbda0_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803dbda0_3:;
/* 1803dbda3: mov rcx, rbx */
L_1803dbda3_0:;
L_1803dbda3_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dbda3_2:;
/* 1803dbda6: call qword ptr [rax + 0x20] */
L_1803dbda6_0:;
L_1803dbda6_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x20))));
L_1803dbda6_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbda6_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803dbda6_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbda6_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbda9)));
L_1803dbda6_6:;
return (uint64_t)rd(s->u,16,8);
L_1803dbda6_7:;
return UINT64_C(0x1803dbda9);
}
uint64_t b_1803dbda9(CPU*s){
/* 1803dbda9: cmp eax, -1 */
L_1803dbda9_0:;
L_1803dbda9_1:;
wr(s->u,6,4,rd(s->r,0,4));
L_1803dbda9_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0xffffffff))));
L_1803dbda9_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0xffffffff)),4,1));
L_1803dbda9_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0xffffffff))));
L_1803dbda9_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbda9_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803dbda9_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803dbda9_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803dbda9_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803dbda9_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803dbda9_11:;
/* 1803dbdac: je 0x1803dbdd9 */
L_1803dbdac_0:;
L_1803dbdac_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dbdd9);}
L_1803dbdac_2:;
return UINT64_C(0x1803dbdae);
}
uint64_t b_1803dbdae(CPU*s){
/* 1803dbdae: mov rax, qword ptr [rbx] */
L_1803dbdae_0:;
L_1803dbdae_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803dbdae_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803dbdae_3:;
/* 1803dbdb1: mov rcx, rbx */
L_1803dbdb1_0:;
L_1803dbdb1_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dbdb1_2:;
/* 1803dbdb4: inc edi */
L_1803dbdb4_0:;
L_1803dbdb4_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),((U)UINT64_C(0x1)),4,0));
L_1803dbdb4_2:;
wr(s->r,56,4,(rd(s->r,56,4)+((U)UINT64_C(0x1))));
L_1803dbdb4_3:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dbdb4_4:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbdb4_5:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803dbdb4_6:;
wr(s->u,16,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803dbdb4_7:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dbdb4_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dbdb4_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dbdb4_10:;
/* 1803dbdb6: call qword ptr [rax + 0x38] */
L_1803dbdb6_0:;
L_1803dbdb6_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x38))));
L_1803dbdb6_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbdb6_3:;
wr(s->u,22,8,rd(s->u,8,8));
L_1803dbdb6_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbdb6_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbdb9)));
L_1803dbdb6_6:;
return (uint64_t)rd(s->u,22,8);
L_1803dbdb6_7:;
return UINT64_C(0x1803dbdb9);
}
uint64_t b_1803dbdb9(CPU*s){
/* 1803dbdb9: cmp edi, eax */
L_1803dbdb9_0:;
L_1803dbdb9_1:;
wr(s->u,7,4,rd(s->r,0,4));
L_1803dbdb9_2:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->u,7,4)));
L_1803dbdb9_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->u,7,4),4,1));
L_1803dbdb9_4:;
wr(s->u,11,4,(rd(s->r,56,4)-rd(s->u,7,4)));
L_1803dbdb9_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbdb9_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803dbdb9_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803dbdb9_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803dbdb9_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803dbdb9_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803dbdb9_11:;
/* 1803dbdbb: jl 0x1803dbda0 */
L_1803dbdbb_0:;
L_1803dbdbb_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dbdbb_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dbda0);}
L_1803dbdbb_3:;
return UINT64_C(0x1803dbdbd);
}
uint64_t b_1803dbdbd(CPU*s){
/* 1803dbdbd: mov rax, qword ptr [rbx] */
L_1803dbdbd_0:;
L_1803dbdbd_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803dbdbd_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dbdbd_3:;
/* 1803dbdc0: mov rdx, rsi */
L_1803dbdc0_0:;
L_1803dbdc0_1:;
wr(s->r,16,8,rd(s->r,48,8));
L_1803dbdc0_2:;
/* 1803dbdc3: mov rcx, rbx */
L_1803dbdc3_0:;
L_1803dbdc3_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dbdc3_2:;
/* 1803dbdc6: mov rdi, qword ptr [rsp + 0x30] */
L_1803dbdc6_0:;
L_1803dbdc6_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dbdc6_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbdc6_3:;
wr(s->r,56,8,rd(s->u,16,8));
L_1803dbdc6_4:;
/* 1803dbdcb: mov rbx, qword ptr [rsp + 0x38] */
L_1803dbdcb_0:;
L_1803dbdcb_1:;
wr(s->u,8,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803dbdcb_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbdcb_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803dbdcb_4:;
/* 1803dbdd0: add rsp, 0x20 */
L_1803dbdd0_0:;
L_1803dbdd0_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dbdd0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803dbdd0_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803dbdd0_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbdd0_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dbdd0_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dbdd0_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803dbdd0_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dbdd0_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dbdd0_10:;
/* 1803dbdd4: pop rsi */
L_1803dbdd4_0:;
L_1803dbdd4_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803dbdd4_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbdd4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbdd4_4:;
wr(s->r,48,8,rd(s->u,34,8));
L_1803dbdd4_5:;
/* 1803dbdd5: jmp qword ptr [rax + 0x30] */
L_1803dbdd5_0:;
L_1803dbdd5_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x30))));
L_1803dbdd5_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbdd5_3:;
return (uint64_t)rd(s->u,16,8);
L_1803dbdd5_4:;
return UINT64_C(0x1803dbdd9);
}
uint64_t b_1803dbdd9(CPU*s){
/* 1803dbdd9: mov rdi, qword ptr [rsp + 0x30] */
L_1803dbdd9_0:;
L_1803dbdd9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dbdd9_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbdd9_3:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803dbdd9_4:;
/* 1803dbdde: mov rbx, qword ptr [rsp + 0x38] */
L_1803dbdde_0:;
L_1803dbdde_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803dbdde_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbdde_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803dbdde_4:;
/* 1803dbde3: or eax, 0xffffffff */
L_1803dbde3_0:;
L_1803dbde3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dbde3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbde3_3:;
wr(s->r,0,4,(rd(s->r,0,4)|((U)UINT64_C(0xffffffff))));
L_1803dbde3_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dbde3_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbde3_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dbde3_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dbde3_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803dbde3_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dbde3_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dbde3_11:;
/* 1803dbde6: add rsp, 0x20 */
L_1803dbde6_0:;
L_1803dbde6_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dbde6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803dbde6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803dbde6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbde6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dbde6_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dbde6_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dbde6_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dbde6_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dbde6_10:;
/* 1803dbdea: pop rsi */
L_1803dbdea_0:;
L_1803dbdea_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803dbdea_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbdea_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbdea_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1803dbdea_5:;
/* 1803dbdeb: ret  */
L_1803dbdeb_0:;
L_1803dbdeb_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbdeb_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbdeb_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dbdeb_4:;
return UINT64_C(0x1803dbdec);
}
uint64_t b_1803dbdf0(CPU*s){
/* 1803dbdf0: mov qword ptr [rsp + 8], rbx */
L_1803dbdf0_0:;
L_1803dbdf0_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803dbdf0_2:;
wr(s->u,24,8,rd(s->r,24,8));
L_1803dbdf0_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803dbdf0_4:;
/* 1803dbdf5: mov r8d, dword ptr [rcx + 0x80] */
L_1803dbdf5_0:;
L_1803dbdf5_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x80))));
L_1803dbdf5_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dbdf5_3:;
wr(s->r,128,4,rd(s->u,32,4));
L_1803dbdf5_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dbdf5_5:;
/* 1803dbdfc: movss xmm2, dword ptr [rip + 0x270e40] */
L_1803dbdfc_0:;
L_1803dbdfc_1:;
wr(s->r,4736,4,mr(UINT64_C(0x18064cc44),4));
L_1803dbdfc_2:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803dbdfc_3:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803dbdfc_4:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803dbdfc_5:;
/* 1803dbe04: xor r10d, r10d */
L_1803dbe04_0:;
L_1803dbe04_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dbe04_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbe04_3:;
wr(s->r,144,4,(rd(s->r,144,4)^rd(s->r,144,4)));
L_1803dbe04_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803dbe04_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbe04_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803dbe04_7:;
wr(s->u,38,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803dbe04_8:;
wr(s->u,42,1,pop(rd(s->u,38,4),4));
L_1803dbe04_9:;
wr(s->u,43,1,(rd(s->u,42,1)&((U)UINT64_C(0x1))));
L_1803dbe04_10:;
wr(s->r,514,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803dbe04_11:;
/* 1803dbe07: cmp dword ptr [rcx + 0x30], r10d */
L_1803dbe07_0:;
L_1803dbe07_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x30))));
L_1803dbe07_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbe07_3:;
wr(s->u,44,4,rd(s->u,32,4));
L_1803dbe07_4:;
wr(s->r,512,1,(rd(s->u,44,4)<rd(s->r,144,4)));
L_1803dbe07_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,44,4),rd(s->r,144,4),4,1));
L_1803dbe07_6:;
wr(s->u,48,4,(rd(s->u,44,4)-rd(s->r,144,4)));
L_1803dbe07_7:;
wr(s->r,519,1,(sx(rd(s->u,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbe07_8:;
wr(s->r,518,1,(rd(s->u,48,4)==((U)UINT64_C(0x0))));
L_1803dbe07_9:;
wr(s->u,38,4,(rd(s->u,48,4)&((U)UINT64_C(0xff))));
L_1803dbe07_10:;
wr(s->u,42,1,pop(rd(s->u,38,4),4));
L_1803dbe07_11:;
wr(s->u,43,1,(rd(s->u,42,1)&((U)UINT64_C(0x1))));
L_1803dbe07_12:;
wr(s->r,514,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803dbe07_13:;
/* 1803dbe0b: mov rbx, rdx */
L_1803dbe0b_0:;
L_1803dbe0b_1:;
wr(s->r,24,8,rd(s->r,16,8));
L_1803dbe0b_2:;
/* 1803dbe0e: mov r9, rcx */
L_1803dbe0e_0:;
L_1803dbe0e_1:;
wr(s->r,136,8,rd(s->r,8,8));
L_1803dbe0e_2:;
/* 1803dbe11: movd xmm0, r8d */
L_1803dbe11_0:;
L_1803dbe11_1:;
wr(s->r,4608,16,rd(s->r,128,4));
L_1803dbe11_2:;
/* 1803dbe16: cvtdq2ps xmm0, xmm0 */
L_1803dbe16_0:;
L_1803dbe16_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dbe16_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dbe16_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dbe16_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dbe16_5:;
/* 1803dbe19: divss xmm2, xmm0 */
L_1803dbe19_0:;
L_1803dbe19_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)/fv(rd(s->r,4608,4),4),4));
L_1803dbe19_2:;
/* 1803dbe1d: jle 0x1803dbe85 */
L_1803dbe1d_0:;
L_1803dbe1d_1:;
wr(s->u,36,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dbe1d_2:;
wr(s->u,37,1,((rd(s->r,518,1)!=0)||(rd(s->u,36,1)!=0)));
L_1803dbe1d_3:;
if(rd(s->u,37,1)){return UINT64_C(0x1803dbe85);}
L_1803dbe1d_4:;
return UINT64_C(0x1803dbe1f);
}
uint64_t b_1803dbe1f(CPU*s){
/* 1803dbe1f: xorps xmm3, xmm3 */
L_1803dbe1f_0:;
L_1803dbe1f_1:;
wr(s->r,4800,4,(rd(s->r,4800,4)^rd(s->r,4800,4)));
L_1803dbe1f_2:;
wr(s->r,4804,4,(rd(s->r,4804,4)^rd(s->r,4804,4)));
L_1803dbe1f_3:;
wr(s->r,4808,4,(rd(s->r,4808,4)^rd(s->r,4808,4)));
L_1803dbe1f_4:;
wr(s->r,4812,4,(rd(s->r,4812,4)^rd(s->r,4812,4)));
L_1803dbe1f_5:;
/* 1803dbe22: lea r11, [rcx + 0x6f0] */
L_1803dbe22_0:;
L_1803dbe22_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x6f0))));
L_1803dbe22_2:;
wr(s->r,152,8,rd(s->u,0,8));
L_1803dbe22_3:;
/* 1803dbe29: nop dword ptr [rax] */
L_1803dbe29_0:;
L_1803dbe29_1:;
/* 1803dbe30: xor edx, edx */
L_1803dbe30_0:;
L_1803dbe30_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dbe30_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbe30_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dbe30_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dbe30_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbe30_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dbe30_7:;
wr(s->u,10,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dbe30_8:;
wr(s->u,14,1,pop(rd(s->u,10,4),4));
L_1803dbe30_9:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_1803dbe30_10:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_1803dbe30_11:;
/* 1803dbe32: movaps xmm1, xmm3 */
L_1803dbe32_0:;
L_1803dbe32_1:;
wr(s->r,4672,4,rd(s->r,4800,4));
L_1803dbe32_2:;
wr(s->r,4676,4,rd(s->r,4804,4));
L_1803dbe32_3:;
wr(s->r,4680,4,rd(s->r,4808,4));
L_1803dbe32_4:;
wr(s->r,4684,4,rd(s->r,4812,4));
L_1803dbe32_5:;
/* 1803dbe35: test r8d, r8d */
L_1803dbe35_0:;
L_1803dbe35_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dbe35_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbe35_3:;
wr(s->u,16,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803dbe35_4:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbe35_5:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_1803dbe35_6:;
wr(s->u,10,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_1803dbe35_7:;
wr(s->u,14,1,pop(rd(s->u,10,4),4));
L_1803dbe35_8:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_1803dbe35_9:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_1803dbe35_10:;
/* 1803dbe38: jle 0x1803dbe71 */
L_1803dbe38_0:;
L_1803dbe38_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dbe38_2:;
wr(s->u,9,1,((rd(s->r,518,1)!=0)||(rd(s->u,8,1)!=0)));
L_1803dbe38_3:;
if(rd(s->u,9,1)){return UINT64_C(0x1803dbe71);}
L_1803dbe38_4:;
return UINT64_C(0x1803dbe3a);
}
uint64_t b_1803dbe30(CPU*s){
/* 1803dbe30: xor edx, edx */
L_1803dbe30_0:;
L_1803dbe30_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dbe30_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbe30_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dbe30_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dbe30_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbe30_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dbe30_7:;
wr(s->u,2,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dbe30_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dbe30_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dbe30_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dbe30_11:;
/* 1803dbe32: movaps xmm1, xmm3 */
L_1803dbe32_0:;
L_1803dbe32_1:;
wr(s->r,4672,4,rd(s->r,4800,4));
L_1803dbe32_2:;
wr(s->r,4676,4,rd(s->r,4804,4));
L_1803dbe32_3:;
wr(s->r,4680,4,rd(s->r,4808,4));
L_1803dbe32_4:;
wr(s->r,4684,4,rd(s->r,4812,4));
L_1803dbe32_5:;
/* 1803dbe35: test r8d, r8d */
L_1803dbe35_0:;
L_1803dbe35_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dbe35_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbe35_3:;
wr(s->u,8,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803dbe35_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbe35_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803dbe35_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803dbe35_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dbe35_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dbe35_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dbe35_10:;
/* 1803dbe38: jle 0x1803dbe71 */
L_1803dbe38_0:;
L_1803dbe38_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dbe38_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803dbe38_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803dbe71);}
L_1803dbe38_4:;
return UINT64_C(0x1803dbe3a);
}
uint64_t b_1803dbe3a(CPU*s){
/* 1803dbe3a: mov rax, qword ptr [rbx] */
L_1803dbe3a_0:;
L_1803dbe3a_1:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803dbe3a_2:;
wr(s->r,0,8,rd(s->u,24,8));
L_1803dbe3a_3:;
/* 1803dbe3d: mov rcx, r11 */
L_1803dbe3d_0:;
L_1803dbe3d_1:;
wr(s->r,8,8,rd(s->r,152,8));
L_1803dbe3d_2:;
/* 1803dbe40: movaps xmm0, xmm1 */
L_1803dbe40_0:;
L_1803dbe40_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803dbe40_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803dbe40_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803dbe40_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803dbe40_5:;
/* 1803dbe43: inc edx */
L_1803dbe43_0:;
L_1803dbe43_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803dbe43_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803dbe43_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dbe43_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbe43_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dbe43_6:;
wr(s->u,33,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dbe43_7:;
wr(s->u,41,1,pop(rd(s->u,33,4),4));
L_1803dbe43_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803dbe43_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803dbe43_10:;
/* 1803dbe45: add rcx, 4 */
L_1803dbe45_0:;
L_1803dbe45_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803dbe45_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x4)),8,0));
L_1803dbe45_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803dbe45_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbe45_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803dbe45_6:;
wr(s->u,33,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803dbe45_7:;
wr(s->u,41,1,pop(rd(s->u,33,8),8));
L_1803dbe45_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803dbe45_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803dbe45_10:;
/* 1803dbe49: add rax, 4 */
L_1803dbe49_0:;
L_1803dbe49_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803dbe49_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x4)),8,0));
L_1803dbe49_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x4))));
L_1803dbe49_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbe49_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803dbe49_6:;
wr(s->u,33,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803dbe49_7:;
wr(s->u,41,1,pop(rd(s->u,33,8),8));
L_1803dbe49_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803dbe49_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803dbe49_10:;
/* 1803dbe4d: addss xmm1, xmm2 */
L_1803dbe4d_0:;
L_1803dbe4d_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803dbe4d_2:;
/* 1803dbe51: mulss xmm0, dword ptr [rax - 4] */
L_1803dbe51_0:;
L_1803dbe51_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dbe51_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbe51_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803dbe51_4:;
/* 1803dbe56: movss dword ptr [rax - 4], xmm0 */
L_1803dbe56_0:;
L_1803dbe56_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dbe56_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803dbe56_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dbe56_4:;
/* 1803dbe5b: addss xmm0, dword ptr [rcx - 4] */
L_1803dbe5b_0:;
L_1803dbe5b_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dbe5b_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbe5b_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,16,4),4),4));
L_1803dbe5b_4:;
/* 1803dbe60: movss dword ptr [rax - 4], xmm0 */
L_1803dbe60_0:;
L_1803dbe60_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dbe60_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803dbe60_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dbe60_4:;
/* 1803dbe65: mov r8d, dword ptr [r9 + 0x80] */
L_1803dbe65_0:;
L_1803dbe65_1:;
wr(s->u,8,8,(rd(s->r,136,8)+((U)UINT64_C(0x80))));
L_1803dbe65_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dbe65_3:;
wr(s->r,128,4,rd(s->u,20,4));
L_1803dbe65_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dbe65_5:;
/* 1803dbe6c: cmp edx, r8d */
L_1803dbe6c_0:;
L_1803dbe6c_1:;
wr(s->u,43,4,rd(s->r,128,4));
L_1803dbe6c_2:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,43,4)));
L_1803dbe6c_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,43,4),4,1));
L_1803dbe6c_4:;
wr(s->u,47,4,(rd(s->r,16,4)-rd(s->u,43,4)));
L_1803dbe6c_5:;
wr(s->r,519,1,(sx(rd(s->u,47,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbe6c_6:;
wr(s->r,518,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803dbe6c_7:;
wr(s->u,33,4,(rd(s->u,47,4)&((U)UINT64_C(0xff))));
L_1803dbe6c_8:;
wr(s->u,41,1,pop(rd(s->u,33,4),4));
L_1803dbe6c_9:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803dbe6c_10:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803dbe6c_11:;
/* 1803dbe6f: jl 0x1803dbe40 */
L_1803dbe6f_0:;
L_1803dbe6f_1:;
wr(s->u,32,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dbe6f_2:;
if(rd(s->u,32,1)){goto L_1803dbe40_0;}
L_1803dbe6f_3:;
return UINT64_C(0x1803dbe71);
}
uint64_t b_1803dbe40(CPU*s){
/* 1803dbe40: movaps xmm0, xmm1 */
L_1803dbe40_0:;
L_1803dbe40_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803dbe40_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803dbe40_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803dbe40_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803dbe40_5:;
/* 1803dbe43: inc edx */
L_1803dbe43_0:;
L_1803dbe43_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803dbe43_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803dbe43_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dbe43_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbe43_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dbe43_6:;
wr(s->u,25,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dbe43_7:;
wr(s->u,33,1,pop(rd(s->u,25,4),4));
L_1803dbe43_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803dbe43_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803dbe43_10:;
/* 1803dbe45: add rcx, 4 */
L_1803dbe45_0:;
L_1803dbe45_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803dbe45_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x4)),8,0));
L_1803dbe45_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803dbe45_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbe45_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803dbe45_6:;
wr(s->u,25,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803dbe45_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803dbe45_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803dbe45_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803dbe45_10:;
/* 1803dbe49: add rax, 4 */
L_1803dbe49_0:;
L_1803dbe49_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803dbe49_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x4)),8,0));
L_1803dbe49_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x4))));
L_1803dbe49_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbe49_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803dbe49_6:;
wr(s->u,25,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803dbe49_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803dbe49_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803dbe49_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803dbe49_10:;
/* 1803dbe4d: addss xmm1, xmm2 */
L_1803dbe4d_0:;
L_1803dbe4d_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803dbe4d_2:;
/* 1803dbe51: mulss xmm0, dword ptr [rax - 4] */
L_1803dbe51_0:;
L_1803dbe51_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dbe51_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbe51_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803dbe51_4:;
/* 1803dbe56: movss dword ptr [rax - 4], xmm0 */
L_1803dbe56_0:;
L_1803dbe56_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dbe56_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803dbe56_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dbe56_4:;
/* 1803dbe5b: addss xmm0, dword ptr [rcx - 4] */
L_1803dbe5b_0:;
L_1803dbe5b_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dbe5b_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbe5b_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,16,4),4),4));
L_1803dbe5b_4:;
/* 1803dbe60: movss dword ptr [rax - 4], xmm0 */
L_1803dbe60_0:;
L_1803dbe60_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dbe60_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803dbe60_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dbe60_4:;
/* 1803dbe65: mov r8d, dword ptr [r9 + 0x80] */
L_1803dbe65_0:;
L_1803dbe65_1:;
wr(s->u,8,8,(rd(s->r,136,8)+((U)UINT64_C(0x80))));
L_1803dbe65_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dbe65_3:;
wr(s->r,128,4,rd(s->u,20,4));
L_1803dbe65_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dbe65_5:;
/* 1803dbe6c: cmp edx, r8d */
L_1803dbe6c_0:;
L_1803dbe6c_1:;
wr(s->u,35,4,rd(s->r,128,4));
L_1803dbe6c_2:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,35,4)));
L_1803dbe6c_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,35,4),4,1));
L_1803dbe6c_4:;
wr(s->u,39,4,(rd(s->r,16,4)-rd(s->u,35,4)));
L_1803dbe6c_5:;
wr(s->r,519,1,(sx(rd(s->u,39,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbe6c_6:;
wr(s->r,518,1,(rd(s->u,39,4)==((U)UINT64_C(0x0))));
L_1803dbe6c_7:;
wr(s->u,25,4,(rd(s->u,39,4)&((U)UINT64_C(0xff))));
L_1803dbe6c_8:;
wr(s->u,33,1,pop(rd(s->u,25,4),4));
L_1803dbe6c_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803dbe6c_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803dbe6c_11:;
/* 1803dbe6f: jl 0x1803dbe40 */
L_1803dbe6f_0:;
L_1803dbe6f_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dbe6f_2:;
if(rd(s->u,24,1)){goto L_1803dbe40_0;}
L_1803dbe6f_3:;
return UINT64_C(0x1803dbe71);
}
uint64_t b_1803dbe71(CPU*s){
/* 1803dbe71: inc r10d */
L_1803dbe71_0:;
L_1803dbe71_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x1)),4,0));
L_1803dbe71_2:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x1))));
L_1803dbe71_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803dbe71_4:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbe71_5:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803dbe71_6:;
wr(s->u,13,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803dbe71_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803dbe71_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dbe71_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dbe71_10:;
/* 1803dbe74: add rbx, 8 */
L_1803dbe74_0:;
L_1803dbe74_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803dbe74_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x8)),8,0));
L_1803dbe74_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dbe74_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbe74_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803dbe74_6:;
wr(s->u,13,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803dbe74_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803dbe74_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dbe74_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dbe74_10:;
/* 1803dbe78: add r11, 0x200 */
L_1803dbe78_0:;
L_1803dbe78_1:;
wr(s->r,512,1,(((rd(s->r,152,8)+((U)UINT64_C(0x200)))&(((U)1<<64)-1))<rd(s->r,152,8)));
L_1803dbe78_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),((U)UINT64_C(0x200)),8,0));
L_1803dbe78_3:;
wr(s->r,152,8,(rd(s->r,152,8)+((U)UINT64_C(0x200))));
L_1803dbe78_4:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbe78_5:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803dbe78_6:;
wr(s->u,13,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803dbe78_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803dbe78_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dbe78_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dbe78_10:;
/* 1803dbe7f: cmp r10d, dword ptr [r9 + 0x30] */
L_1803dbe7f_0:;
L_1803dbe7f_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x30))));
L_1803dbe7f_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbe7f_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803dbe7f_4:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->u,23,4)));
L_1803dbe7f_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->u,23,4),4,1));
L_1803dbe7f_6:;
wr(s->u,27,4,(rd(s->r,144,4)-rd(s->u,23,4)));
L_1803dbe7f_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbe7f_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803dbe7f_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803dbe7f_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803dbe7f_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dbe7f_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dbe7f_13:;
/* 1803dbe83: jl 0x1803dbe30 */
L_1803dbe83_0:;
L_1803dbe83_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dbe83_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dbe30);}
L_1803dbe83_3:;
return UINT64_C(0x1803dbe85);
}
uint64_t b_1803dbe85(CPU*s){
/* 1803dbe85: mov rbx, qword ptr [rsp + 8] */
L_1803dbe85_0:;
L_1803dbe85_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803dbe85_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbe85_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803dbe85_4:;
/* 1803dbe8a: ret  */
L_1803dbe8a_0:;
L_1803dbe8a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbe8a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbe8a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dbe8a_4:;
return UINT64_C(0x1803dbe8b);
}
uint64_t b_1803dbe90(CPU*s){
/* 1803dbe90: mov qword ptr [rsp + 8], rbx */
L_1803dbe90_0:;
L_1803dbe90_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803dbe90_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803dbe90_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dbe90_4:;
/* 1803dbe95: mov qword ptr [rsp + 0x10], rbp */
L_1803dbe95_0:;
L_1803dbe95_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803dbe95_2:;
wr(s->u,16,8,rd(s->r,40,8));
L_1803dbe95_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dbe95_4:;
/* 1803dbe9a: mov qword ptr [rsp + 0x18], rsi */
L_1803dbe9a_0:;
L_1803dbe9a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803dbe9a_2:;
wr(s->u,16,8,rd(s->r,48,8));
L_1803dbe9a_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dbe9a_4:;
/* 1803dbe9f: push rdi */
L_1803dbe9f_0:;
L_1803dbe9f_1:;
wr(s->u,48,8,rd(s->r,56,8));
L_1803dbe9f_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbe9f_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,48,8));
L_1803dbe9f_4:;
/* 1803dbea0: sub rsp, 0x30 */
L_1803dbea0_0:;
L_1803dbea0_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803dbea0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803dbea0_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803dbea0_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbea0_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dbea0_6:;
wr(s->u,56,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dbea0_7:;
wr(s->u,64,1,pop(rd(s->u,56,8),8));
L_1803dbea0_8:;
wr(s->u,65,1,(rd(s->u,64,1)&((U)UINT64_C(0x1))));
L_1803dbea0_9:;
wr(s->r,514,1,(rd(s->u,65,1)==((U)UINT64_C(0x0))));
L_1803dbea0_10:;
/* 1803dbea4: mov rbp, rcx */
L_1803dbea4_0:;
L_1803dbea4_1:;
wr(s->r,40,8,rd(s->r,8,8));
L_1803dbea4_2:;
/* 1803dbea7: mov rcx, qword ptr [rcx + 0x66f0] */
L_1803dbea7_0:;
L_1803dbea7_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x66f0))));
L_1803dbea7_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbea7_3:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803dbea7_4:;
/* 1803dbeae: mov rsi, rdx */
L_1803dbeae_0:;
L_1803dbeae_1:;
wr(s->r,48,8,rd(s->r,16,8));
L_1803dbeae_2:;
/* 1803dbeb1: xor edx, edx */
L_1803dbeb1_0:;
L_1803dbeb1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dbeb1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbeb1_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dbeb1_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dbeb1_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbeb1_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dbeb1_7:;
wr(s->u,56,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dbeb1_8:;
wr(s->u,64,1,pop(rd(s->u,56,4),4));
L_1803dbeb1_9:;
wr(s->u,65,1,(rd(s->u,64,1)&((U)UINT64_C(0x1))));
L_1803dbeb1_10:;
wr(s->r,514,1,(rd(s->u,65,1)==((U)UINT64_C(0x0))));
L_1803dbeb1_11:;
/* 1803dbeb3: movaps xmmword ptr [rsp + 0x20], xmm6 */
L_1803dbeb3_0:;
L_1803dbeb3_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dbeb3_2:;
wr(s->u,24,16,rd(s->r,4992,16));
L_1803dbeb3_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,24,16));
L_1803dbeb3_4:;
/* 1803dbeb8: mov rbx, r9 */
L_1803dbeb8_0:;
L_1803dbeb8_1:;
wr(s->r,24,8,rd(s->r,136,8));
L_1803dbeb8_2:;
/* 1803dbebb: mov edi, r8d */
L_1803dbebb_0:;
L_1803dbebb_1:;
wr(s->r,56,4,rd(s->r,128,4));
L_1803dbebb_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dbebb_3:;
/* 1803dbebe: call 0x1803da8d0 */
L_1803dbebe_0:;
L_1803dbebe_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbebe_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbec3)));
L_1803dbebe_3:;
return (uint64_t)UINT64_C(0x1803da8d0);
L_1803dbebe_4:;
return UINT64_C(0x1803dbec3);
}
uint64_t b_1803dbec3(CPU*s){
/* 1803dbec3: mov eax, dword ptr [rbp + 0x3c] */
L_1803dbec3_0:;
L_1803dbec3_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x3c))));
L_1803dbec3_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbec3_3:;
wr(s->r,0,4,rd(s->u,16,4));
L_1803dbec3_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dbec3_5:;
/* 1803dbec6: mov rcx, qword ptr [rbp + 0x66f0] */
L_1803dbec6_0:;
L_1803dbec6_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x66f0))));
L_1803dbec6_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dbec6_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dbec6_4:;
/* 1803dbecd: add eax, eax */
L_1803dbecd_0:;
L_1803dbecd_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803dbecd_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,0,4),4,0));
L_1803dbecd_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,0,4)));
L_1803dbecd_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dbecd_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbecd_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dbecd_7:;
wr(s->u,28,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dbecd_8:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dbecd_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dbecd_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dbecd_11:;
/* 1803dbecf: neg eax */
L_1803dbecf_0:;
L_1803dbecf_1:;
wr(s->r,512,1,(rd(s->r,0,4)!=((U)UINT64_C(0x0))));
L_1803dbecf_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,0,4),4,1));
L_1803dbecf_3:;
wr(s->r,0,4,(-rd(s->r,0,4)));
L_1803dbecf_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbecf_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dbecf_6:;
wr(s->u,28,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dbecf_7:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dbecf_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dbecf_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dbecf_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dbecf_11:;
/* 1803dbed1: movd xmm1, eax */
L_1803dbed1_0:;
L_1803dbed1_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803dbed1_2:;
/* 1803dbed5: cvtdq2pd xmm1, xmm1 */
L_1803dbed5_0:;
L_1803dbed5_1:;
wr(s->u,34,8,rd(s->r,4672,8));
L_1803dbed5_2:;
wr(s->r,4672,8,fb((double)sx(rd(s->u,34,4),4),8));
L_1803dbed5_3:;
wr(s->r,4680,8,fb((double)sx(rd(s->u,38,4),4),8));
L_1803dbed5_4:;
/* 1803dbed9: call 0x1803daa30 */
L_1803dbed9_0:;
L_1803dbed9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbed9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbede)));
L_1803dbed9_3:;
return (uint64_t)UINT64_C(0x1803daa30);
L_1803dbed9_4:;
return UINT64_C(0x1803dbede);
}
uint64_t b_1803dbede(CPU*s){
/* 1803dbede: mov r9, rbx */
L_1803dbede_0:;
L_1803dbede_1:;
wr(s->r,136,8,rd(s->r,24,8));
L_1803dbede_2:;
/* 1803dbee1: mov r8d, edi */
L_1803dbee1_0:;
L_1803dbee1_1:;
wr(s->r,128,4,rd(s->r,56,4));
L_1803dbee1_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dbee1_3:;
/* 1803dbee4: mov rdx, rsi */
L_1803dbee4_0:;
L_1803dbee4_1:;
wr(s->r,16,8,rd(s->r,48,8));
L_1803dbee4_2:;
/* 1803dbee7: mov rcx, rbp */
L_1803dbee7_0:;
L_1803dbee7_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803dbee7_2:;
/* 1803dbeea: call 0x1803dbd60 */
L_1803dbeea_0:;
L_1803dbeea_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbeea_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbeef)));
L_1803dbeea_3:;
return (uint64_t)UINT64_C(0x1803dbd60);
L_1803dbeea_4:;
return UINT64_C(0x1803dbeef);
}
uint64_t b_1803dbeef(CPU*s){
/* 1803dbeef: mov ebx, eax */
L_1803dbeef_0:;
L_1803dbeef_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803dbeef_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dbeef_3:;
/* 1803dbef1: xor eax, eax */
L_1803dbef1_0:;
L_1803dbef1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dbef1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbef1_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dbef1_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dbef1_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbef1_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dbef1_7:;
wr(s->u,22,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dbef1_8:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803dbef1_9:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803dbef1_10:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803dbef1_11:;
/* 1803dbef3: movss xmm0, dword ptr [rip + 0x270d49] */
L_1803dbef3_0:;
L_1803dbef3_1:;
wr(s->r,4608,4,mr(UINT64_C(0x18064cc44),4));
L_1803dbef3_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dbef3_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dbef3_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dbef3_5:;
/* 1803dbefb: mov dword ptr [rbp + 0xc0], eax */
L_1803dbefb_0:;
L_1803dbefb_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc0))));
L_1803dbefb_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803dbefb_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dbefb_4:;
/* 1803dbf01: mov dword ptr [rbp + 0xc8], eax */
L_1803dbf01_0:;
L_1803dbf01_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc8))));
L_1803dbf01_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803dbf01_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dbf01_4:;
/* 1803dbf07: movaps xmm6, xmm0 */
L_1803dbf07_0:;
L_1803dbf07_1:;
wr(s->r,4992,4,rd(s->r,4608,4));
L_1803dbf07_2:;
wr(s->r,4996,4,rd(s->r,4612,4));
L_1803dbf07_3:;
wr(s->r,5000,4,rd(s->r,4616,4));
L_1803dbf07_4:;
wr(s->r,5004,4,rd(s->r,4620,4));
L_1803dbf07_5:;
/* 1803dbf0a: divss xmm6, dword ptr [rbp + 0x24] */
L_1803dbf0a_0:;
L_1803dbf0a_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x24))));
L_1803dbf0a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbf0a_3:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)/fv(rd(s->u,16,4),4),4));
L_1803dbf0a_4:;
/* 1803dbf0f: comiss xmm6, xmm0 */
L_1803dbf0f_0:;
L_1803dbf0f_1:;
wr(s->u,28,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803dbf0f_2:;
wr(s->u,29,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dbf0f_3:;
wr(s->r,514,1,((rd(s->u,28,1)!=0)||(rd(s->u,29,1)!=0)));
L_1803dbf0f_4:;
wr(s->u,30,1,(fv(rd(s->r,4992,4),4)==fv(rd(s->r,4608,4),4)));
L_1803dbf0f_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,30,1)));
L_1803dbf0f_6:;
wr(s->u,31,1,(fv(rd(s->r,4992,4),4)<fv(rd(s->r,4608,4),4)));
L_1803dbf0f_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,31,1)));
L_1803dbf0f_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbf0f_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dbf0f_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dbf0f_11:;
/* 1803dbf12: ja 0x1803dbf17 */
L_1803dbf12_0:;
L_1803dbf12_1:;
wr(s->u,20,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803dbf12_2:;
wr(s->u,21,1,(!rd(s->u,20,1)));
L_1803dbf12_3:;
if(rd(s->u,21,1)){return UINT64_C(0x1803dbf17);}
L_1803dbf12_4:;
return UINT64_C(0x1803dbf14);
}
uint64_t b_1803dbf14(CPU*s){
/* 1803dbf14: movaps xmm6, xmm0 */
L_1803dbf14_0:;
L_1803dbf14_1:;
wr(s->r,4992,4,rd(s->r,4608,4));
L_1803dbf14_2:;
wr(s->r,4996,4,rd(s->r,4612,4));
L_1803dbf14_3:;
wr(s->r,5000,4,rd(s->r,4616,4));
L_1803dbf14_4:;
wr(s->r,5004,4,rd(s->r,4620,4));
L_1803dbf14_5:;
/* 1803dbf17: mov rax, qword ptr [rbp] */
L_1803dbf17_0:;
L_1803dbf17_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,40,8),8));
L_1803dbf17_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803dbf17_3:;
/* 1803dbf1b: mov rcx, rbp */
L_1803dbf1b_0:;
L_1803dbf1b_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803dbf1b_2:;
/* 1803dbf1e: call qword ptr [rax + 0x48] */
L_1803dbf1e_0:;
L_1803dbf1e_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x48))));
L_1803dbf1e_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbf1e_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803dbf1e_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbf1e_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbf21)));
L_1803dbf1e_6:;
return (uint64_t)rd(s->u,16,8);
L_1803dbf1e_7:;
return UINT64_C(0x1803dbf21);
}
uint64_t b_1803dbf17(CPU*s){
/* 1803dbf17: mov rax, qword ptr [rbp] */
L_1803dbf17_0:;
L_1803dbf17_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,40,8),8));
L_1803dbf17_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803dbf17_3:;
/* 1803dbf1b: mov rcx, rbp */
L_1803dbf1b_0:;
L_1803dbf1b_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803dbf1b_2:;
/* 1803dbf1e: call qword ptr [rax + 0x48] */
L_1803dbf1e_0:;
L_1803dbf1e_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x48))));
L_1803dbf1e_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbf1e_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803dbf1e_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbf1e_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbf21)));
L_1803dbf1e_6:;
return (uint64_t)rd(s->u,16,8);
L_1803dbf1e_7:;
return UINT64_C(0x1803dbf21);
}
uint64_t b_1803dbf21(CPU*s){
/* 1803dbf21: mov ecx, dword ptr [rbp + 0x3c] */
L_1803dbf21_0:;
L_1803dbf21_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x3c))));
L_1803dbf21_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbf21_3:;
wr(s->r,8,4,rd(s->u,52,4));
L_1803dbf21_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dbf21_5:;
/* 1803dbf24: mov rsi, qword ptr [rsp + 0x50] */
L_1803dbf24_0:;
L_1803dbf24_1:;
wr(s->u,24,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dbf24_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dbf24_3:;
wr(s->r,48,8,rd(s->u,56,8));
L_1803dbf24_4:;
/* 1803dbf29: lea eax, [rax + rcx*2] */
L_1803dbf29_0:;
L_1803dbf29_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x2))));
L_1803dbf29_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803dbf29_3:;
wr(s->r,0,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dbf29_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dbf29_5:;
/* 1803dbf2c: movd xmm0, eax */
L_1803dbf2c_0:;
L_1803dbf2c_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803dbf2c_2:;
/* 1803dbf30: cvtdq2ps xmm0, xmm0 */
L_1803dbf30_0:;
L_1803dbf30_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dbf30_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dbf30_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dbf30_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dbf30_5:;
/* 1803dbf33: mulss xmm0, xmm6 */
L_1803dbf33_0:;
L_1803dbf33_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803dbf33_2:;
/* 1803dbf37: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803dbf37_0:;
L_1803dbf37_1:;
wr(s->u,24,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dbf37_2:;
wr(s->u,36,16,mr((uint64_t)rd(s->u,24,8),16));
L_1803dbf37_3:;
wr(s->u,82,16,rd(s->u,36,16));
L_1803dbf37_4:;
wr(s->r,4992,4,rd(s->u,82,4));
L_1803dbf37_5:;
wr(s->r,4996,4,rd(s->u,86,4));
L_1803dbf37_6:;
wr(s->r,5000,4,rd(s->u,90,4));
L_1803dbf37_7:;
wr(s->r,5004,4,rd(s->u,94,4));
L_1803dbf37_8:;
/* 1803dbf3c: cvttss2si eax, xmm0 */
L_1803dbf3c_0:;
L_1803dbf3c_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803dbf3c_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dbf3c_3:;
/* 1803dbf40: mov dword ptr [rbp + 0x74], eax */
L_1803dbf40_0:;
L_1803dbf40_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x74))));
L_1803dbf40_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dbf40_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dbf40_4:;
/* 1803dbf43: mov rbp, qword ptr [rsp + 0x48] */
L_1803dbf43_0:;
L_1803dbf43_1:;
wr(s->u,24,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803dbf43_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dbf43_3:;
wr(s->r,40,8,rd(s->u,56,8));
L_1803dbf43_4:;
/* 1803dbf48: mov eax, ebx */
L_1803dbf48_0:;
L_1803dbf48_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803dbf48_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dbf48_3:;
/* 1803dbf4a: mov rbx, qword ptr [rsp + 0x40] */
L_1803dbf4a_0:;
L_1803dbf4a_1:;
wr(s->u,24,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dbf4a_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dbf4a_3:;
wr(s->r,24,8,rd(s->u,56,8));
L_1803dbf4a_4:;
/* 1803dbf4f: add rsp, 0x30 */
L_1803dbf4f_0:;
L_1803dbf4f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dbf4f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803dbf4f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803dbf4f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbf4f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dbf4f_6:;
wr(s->u,64,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dbf4f_7:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803dbf4f_8:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dbf4f_9:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dbf4f_10:;
/* 1803dbf53: pop rdi */
L_1803dbf53_0:;
L_1803dbf53_1:;
wr(s->u,74,8,((U)UINT64_C(0x0)));
L_1803dbf53_2:;
wr(s->u,74,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbf53_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbf53_4:;
wr(s->r,56,8,rd(s->u,74,8));
L_1803dbf53_5:;
/* 1803dbf54: ret  */
L_1803dbf54_0:;
L_1803dbf54_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbf54_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbf54_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dbf54_4:;
return UINT64_C(0x1803dbf55);
}
uint64_t b_1803dbf60(CPU*s){
/* 1803dbf60: push rdi */
L_1803dbf60_0:;
L_1803dbf60_1:;
wr(s->u,24,8,rd(s->r,56,8));
L_1803dbf60_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbf60_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803dbf60_4:;
/* 1803dbf62: push r12 */
L_1803dbf62_0:;
L_1803dbf62_1:;
wr(s->u,24,8,rd(s->r,160,8));
L_1803dbf62_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbf62_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803dbf62_4:;
/* 1803dbf64: push r13 */
L_1803dbf64_0:;
L_1803dbf64_1:;
wr(s->u,24,8,rd(s->r,168,8));
L_1803dbf64_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbf64_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803dbf64_4:;
/* 1803dbf66: push r14 */
L_1803dbf66_0:;
L_1803dbf66_1:;
wr(s->u,24,8,rd(s->r,176,8));
L_1803dbf66_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbf66_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803dbf66_4:;
/* 1803dbf68: sub rsp, 0x68 */
L_1803dbf68_0:;
L_1803dbf68_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x68))));
L_1803dbf68_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x68)),8,1));
L_1803dbf68_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x68))));
L_1803dbf68_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbf68_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dbf68_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dbf68_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803dbf68_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803dbf68_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803dbf68_10:;
/* 1803dbf6c: mov rax, qword ptr [rcx] */
L_1803dbf6c_0:;
L_1803dbf6c_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dbf6c_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dbf6c_3:;
/* 1803dbf6f: mov r14d, r8d */
L_1803dbf6f_0:;
L_1803dbf6f_1:;
wr(s->r,176,4,rd(s->r,128,4));
L_1803dbf6f_2:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803dbf6f_3:;
/* 1803dbf72: mov r8d, dword ptr [rcx + 0x3c] */
L_1803dbf72_0:;
L_1803dbf72_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x3c))));
L_1803dbf72_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbf72_3:;
wr(s->r,128,4,rd(s->u,12,4));
L_1803dbf72_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dbf72_5:;
/* 1803dbf76: mov r13, r9 */
L_1803dbf76_0:;
L_1803dbf76_1:;
wr(s->r,168,8,rd(s->r,136,8));
L_1803dbf76_2:;
/* 1803dbf79: mov r12, rdx */
L_1803dbf79_0:;
L_1803dbf79_1:;
wr(s->r,160,8,rd(s->r,16,8));
L_1803dbf79_2:;
/* 1803dbf7c: mov rdi, rcx */
L_1803dbf7c_0:;
L_1803dbf7c_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803dbf7c_2:;
/* 1803dbf7f: mov dword ptr [rcx + 0x70], r8d */
L_1803dbf7f_0:;
L_1803dbf7f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x70))));
L_1803dbf7f_2:;
wr(s->u,8,4,rd(s->r,128,4));
L_1803dbf7f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dbf7f_4:;
/* 1803dbf83: call qword ptr [rax + 0x28] */
L_1803dbf83_0:;
L_1803dbf83_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x28))));
L_1803dbf83_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dbf83_3:;
wr(s->u,42,8,rd(s->u,16,8));
L_1803dbf83_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbf83_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbf86)));
L_1803dbf83_6:;
return (uint64_t)rd(s->u,42,8);
L_1803dbf83_7:;
return UINT64_C(0x1803dbf86);
}
uint64_t b_1803dbf86(CPU*s){
/* 1803dbf86: cmp eax, -1 */
L_1803dbf86_0:;
L_1803dbf86_1:;
wr(s->u,7,4,rd(s->r,0,4));
L_1803dbf86_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0xffffffff))));
L_1803dbf86_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0xffffffff)),4,1));
L_1803dbf86_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0xffffffff))));
L_1803dbf86_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbf86_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803dbf86_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803dbf86_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803dbf86_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803dbf86_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803dbf86_11:;
/* 1803dbf89: jne 0x1803dbf99 */
L_1803dbf89_0:;
L_1803dbf89_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803dbf89_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dbf99);}
L_1803dbf89_3:;
return UINT64_C(0x1803dbf8b);
}
uint64_t b_1803dbf8b(CPU*s){
/* 1803dbf8b: or eax, eax */
L_1803dbf8b_0:;
L_1803dbf8b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dbf8b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbf8b_3:;
wr(s->r,0,4,(rd(s->r,0,4)|rd(s->r,0,4)));
L_1803dbf8b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dbf8b_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbf8b_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dbf8b_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dbf8b_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803dbf8b_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dbf8b_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dbf8b_11:;
/* 1803dbf8d: add rsp, 0x68 */
L_1803dbf8d_0:;
L_1803dbf8d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x68)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dbf8d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x68)),8,0));
L_1803dbf8d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x68))));
L_1803dbf8d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbf8d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dbf8d_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dbf8d_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803dbf8d_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dbf8d_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dbf8d_10:;
/* 1803dbf91: pop r14 */
L_1803dbf91_0:;
L_1803dbf91_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803dbf91_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbf91_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbf91_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803dbf91_5:;
/* 1803dbf93: pop r13 */
L_1803dbf93_0:;
L_1803dbf93_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803dbf93_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbf93_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbf93_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803dbf93_5:;
/* 1803dbf95: pop r12 */
L_1803dbf95_0:;
L_1803dbf95_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803dbf95_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbf95_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbf95_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803dbf95_5:;
/* 1803dbf97: pop rdi */
L_1803dbf97_0:;
L_1803dbf97_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803dbf97_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbf97_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbf97_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803dbf97_5:;
/* 1803dbf98: ret  */
L_1803dbf98_0:;
L_1803dbf98_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dbf98_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dbf98_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dbf98_4:;
return UINT64_C(0x1803dbf99);
}
uint64_t b_1803dbf99(CPU*s){
/* 1803dbf99: mov qword ptr [rsp + 0x90], rbx */
L_1803dbf99_0:;
L_1803dbf99_1:;
wr(s->u,24,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803dbf99_2:;
wr(s->u,36,8,rd(s->r,24,8));
L_1803dbf99_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,36,8));
L_1803dbf99_4:;
/* 1803dbfa1: mov qword ptr [rsp + 0x98], rbp */
L_1803dbfa1_0:;
L_1803dbfa1_1:;
wr(s->u,24,8,(((U)UINT64_C(0x98))+rd(s->r,32,8)));
L_1803dbfa1_2:;
wr(s->u,36,8,rd(s->r,40,8));
L_1803dbfa1_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,36,8));
L_1803dbfa1_4:;
/* 1803dbfa9: mov qword ptr [rsp + 0xa0], rsi */
L_1803dbfa9_0:;
L_1803dbfa9_1:;
wr(s->u,24,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_1803dbfa9_2:;
wr(s->u,36,8,rd(s->r,48,8));
L_1803dbfa9_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,36,8));
L_1803dbfa9_4:;
/* 1803dbfb1: mov qword ptr [rsp + 0x60], r15 */
L_1803dbfb1_0:;
L_1803dbfb1_1:;
wr(s->u,16,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dbfb1_2:;
wr(s->u,36,8,rd(s->r,184,8));
L_1803dbfb1_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,36,8));
L_1803dbfb1_4:;
/* 1803dbfb6: mov eax, r14d */
L_1803dbfb6_0:;
L_1803dbfb6_1:;
wr(s->r,0,4,rd(s->r,176,4));
L_1803dbfb6_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dbfb6_3:;
/* 1803dbfb9: xor ebp, ebp */
L_1803dbfb9_0:;
L_1803dbfb9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dbfb9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dbfb9_3:;
wr(s->r,40,4,(rd(s->r,40,4)^rd(s->r,40,4)));
L_1803dbfb9_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803dbfb9_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbfb9_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803dbfb9_7:;
wr(s->u,66,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803dbfb9_8:;
wr(s->u,70,1,pop(rd(s->u,66,4),4));
L_1803dbfb9_9:;
wr(s->u,71,1,(rd(s->u,70,1)&((U)UINT64_C(0x1))));
L_1803dbfb9_10:;
wr(s->r,514,1,(rd(s->u,71,1)==((U)UINT64_C(0x0))));
L_1803dbfb9_11:;
/* 1803dbfbb: sub eax, dword ptr [rdi + 0x70] */
L_1803dbfbb_0:;
L_1803dbfbb_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x70))));
L_1803dbfbb_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbfbb_3:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,60,4)));
L_1803dbfbb_4:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbfbb_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,60,4),4,1));
L_1803dbfbb_6:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbfbb_7:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->u,60,4)));
L_1803dbfbb_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dbfbb_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbfbb_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dbfbb_11:;
wr(s->u,66,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dbfbb_12:;
wr(s->u,70,1,pop(rd(s->u,66,4),4));
L_1803dbfbb_13:;
wr(s->u,71,1,(rd(s->u,70,1)&((U)UINT64_C(0x1))));
L_1803dbfbb_14:;
wr(s->r,514,1,(rd(s->u,71,1)==((U)UINT64_C(0x0))));
L_1803dbfbb_15:;
/* 1803dbfbe: cmp dword ptr [rdi + 0x30], ebp */
L_1803dbfbe_0:;
L_1803dbfbe_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dbfbe_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dbfbe_3:;
wr(s->u,72,4,rd(s->u,60,4));
L_1803dbfbe_4:;
wr(s->r,512,1,(rd(s->u,72,4)<rd(s->r,40,4)));
L_1803dbfbe_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,72,4),rd(s->r,40,4),4,1));
L_1803dbfbe_6:;
wr(s->u,76,4,(rd(s->u,72,4)-rd(s->r,40,4)));
L_1803dbfbe_7:;
wr(s->r,519,1,(sx(rd(s->u,76,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbfbe_8:;
wr(s->r,518,1,(rd(s->u,76,4)==((U)UINT64_C(0x0))));
L_1803dbfbe_9:;
wr(s->u,66,4,(rd(s->u,76,4)&((U)UINT64_C(0xff))));
L_1803dbfbe_10:;
wr(s->u,70,1,pop(rd(s->u,66,4),4));
L_1803dbfbe_11:;
wr(s->u,71,1,(rd(s->u,70,1)&((U)UINT64_C(0x1))));
L_1803dbfbe_12:;
wr(s->r,514,1,(rd(s->u,71,1)==((U)UINT64_C(0x0))));
L_1803dbfbe_13:;
/* 1803dbfc1: movaps xmmword ptr [rsp + 0x50], xmm6 */
L_1803dbfc1_0:;
L_1803dbfc1_1:;
wr(s->u,16,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dbfc1_2:;
wr(s->u,44,16,rd(s->r,4992,16));
L_1803dbfc1_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,44,16));
L_1803dbfc1_4:;
/* 1803dbfc6: movaps xmmword ptr [rsp + 0x40], xmm7 */
L_1803dbfc6_0:;
L_1803dbfc6_1:;
wr(s->u,16,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dbfc6_2:;
wr(s->u,44,16,rd(s->r,5056,16));
L_1803dbfc6_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,44,16));
L_1803dbfc6_4:;
/* 1803dbfcb: mov dword ptr [rdi + 0x90], eax */
L_1803dbfcb_0:;
L_1803dbfcb_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x90))));
L_1803dbfcb_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dbfcb_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803dbfcb_4:;
/* 1803dbfd1: jle 0x1803dc00d */
L_1803dbfd1_0:;
L_1803dbfd1_1:;
wr(s->u,64,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dbfd1_2:;
wr(s->u,65,1,((rd(s->r,518,1)!=0)||(rd(s->u,64,1)!=0)));
L_1803dbfd1_3:;
if(rd(s->u,65,1)){return UINT64_C(0x1803dc00d);}
L_1803dbfd1_4:;
return UINT64_C(0x1803dbfd3);
}
uint64_t b_1803dbfc6(CPU*s){
/* 1803dbfc6: movaps xmmword ptr [rsp + 0x40], xmm7 */
L_1803dbfc6_0:;
L_1803dbfc6_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dbfc6_2:;
wr(s->u,20,16,rd(s->r,5056,16));
L_1803dbfc6_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803dbfc6_4:;
/* 1803dbfcb: mov dword ptr [rdi + 0x90], eax */
L_1803dbfcb_0:;
L_1803dbfcb_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x90))));
L_1803dbfcb_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803dbfcb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dbfcb_4:;
/* 1803dbfd1: jle 0x1803dc00d */
L_1803dbfd1_0:;
L_1803dbfd1_1:;
wr(s->u,36,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dbfd1_2:;
wr(s->u,37,1,((rd(s->r,518,1)!=0)||(rd(s->u,36,1)!=0)));
L_1803dbfd1_3:;
if(rd(s->u,37,1)){return UINT64_C(0x1803dc00d);}
L_1803dbfd1_4:;
return UINT64_C(0x1803dbfd3);
}
uint64_t b_1803dbfd3(CPU*s){
/* 1803dbfd3: mov rbx, r12 */
L_1803dbfd3_0:;
L_1803dbfd3_1:;
wr(s->r,24,8,rd(s->r,160,8));
L_1803dbfd3_2:;
/* 1803dbfd6: lea rsi, [rdi + 0x570] */
L_1803dbfd6_0:;
L_1803dbfd6_1:;
wr(s->u,13,8,(rd(s->r,56,8)+((U)UINT64_C(0x570))));
L_1803dbfd6_2:;
wr(s->r,48,8,rd(s->u,13,8));
L_1803dbfd6_3:;
/* 1803dbfdd: nop dword ptr [rax] */
L_1803dbfdd_0:;
L_1803dbfdd_1:;
/* 1803dbfe0: movsxd rcx, dword ptr [rdi + 0x70] */
L_1803dbfe0_0:;
L_1803dbfe0_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x70))));
L_1803dbfe0_2:;
wr(s->u,37,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dbfe0_3:;
wr(s->r,8,8,(U)sx(rd(s->u,37,4),4));
L_1803dbfe0_4:;
/* 1803dbfe4: mov rax, qword ptr [rbx] */
L_1803dbfe4_0:;
L_1803dbfe4_1:;
wr(s->u,41,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803dbfe4_2:;
wr(s->r,0,8,rd(s->u,41,8));
L_1803dbfe4_3:;
/* 1803dbfe7: movsxd r8, dword ptr [rdi + 0x90] */
L_1803dbfe7_0:;
L_1803dbfe7_1:;
wr(s->u,13,8,(rd(s->r,56,8)+((U)UINT64_C(0x90))));
L_1803dbfe7_2:;
wr(s->u,37,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803dbfe7_3:;
wr(s->r,128,8,(U)sx(rd(s->u,37,4),4));
L_1803dbfe7_4:;
/* 1803dbfee: lea rdx, [rax + rcx*4] */
L_1803dbfee_0:;
L_1803dbfee_1:;
wr(s->u,21,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dbfee_2:;
wr(s->u,29,8,(rd(s->r,0,8)+rd(s->u,21,8)));
L_1803dbfee_3:;
wr(s->r,16,8,rd(s->u,29,8));
L_1803dbfee_4:;
/* 1803dbff2: mov rcx, qword ptr [rsi] */
L_1803dbff2_0:;
L_1803dbff2_1:;
wr(s->u,41,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803dbff2_2:;
wr(s->r,8,8,rd(s->u,41,8));
L_1803dbff2_3:;
/* 1803dbff5: shl r8, 2 */
L_1803dbff5_0:;
L_1803dbff5_1:;
wr(s->u,89,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803dbff5_2:;
wr(s->u,93,8,rd(s->r,128,8));
L_1803dbff5_3:;
wr(s->r,128,8,((rd(s->u,89,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,89,4))));
L_1803dbff5_4:;
wr(s->u,72,1,(rd(s->u,89,4)==((U)UINT64_C(0x0))));
L_1803dbff5_5:;
wr(s->u,73,4,(rd(s->u,89,4)-((U)UINT64_C(0x1))));
L_1803dbff5_6:;
wr(s->u,77,8,((rd(s->u,73,4)>=64)?0:(rd(s->u,93,8)<<rd(s->u,73,4))));
L_1803dbff5_7:;
wr(s->u,85,1,(sx(rd(s->u,77,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbff5_8:;
wr(s->u,0,1,rd(s->u,72,1));
L_1803dbff5_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dbff5_10:;
wr(s->u,2,1,(!rd(s->u,72,1)));
L_1803dbff5_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dbff5_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,85,1)));
L_1803dbff5_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dbff5_14:;
wr(s->u,86,1,(rd(s->u,89,4)==((U)UINT64_C(0x1))));
L_1803dbff5_15:;
wr(s->u,87,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbff5_16:;
wr(s->u,88,1,(rd(s->r,512,1)^rd(s->u,87,1)));
L_1803dbff5_17:;
wr(s->u,0,1,rd(s->u,86,1));
L_1803dbff5_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,88,1)));
L_1803dbff5_19:;
wr(s->u,2,1,(!rd(s->u,86,1)));
L_1803dbff5_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dbff5_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dbff5_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dbff5_23:;
wr(s->u,49,1,(rd(s->u,89,4)!=((U)UINT64_C(0x0))));
L_1803dbff5_24:;
wr(s->u,50,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbff5_25:;
wr(s->u,51,1,(!rd(s->u,49,1)));
L_1803dbff5_26:;
wr(s->u,52,1,(rd(s->u,51,1)&rd(s->r,519,1)));
L_1803dbff5_27:;
wr(s->u,53,1,(rd(s->u,49,1)&rd(s->u,50,1)));
L_1803dbff5_28:;
wr(s->r,519,1,(rd(s->u,52,1)|rd(s->u,53,1)));
L_1803dbff5_29:;
wr(s->u,54,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dbff5_30:;
wr(s->u,55,1,(!rd(s->u,49,1)));
L_1803dbff5_31:;
wr(s->u,56,1,(rd(s->u,55,1)&rd(s->r,518,1)));
L_1803dbff5_32:;
wr(s->u,57,1,(rd(s->u,49,1)&rd(s->u,54,1)));
L_1803dbff5_33:;
wr(s->r,518,1,(rd(s->u,56,1)|rd(s->u,57,1)));
L_1803dbff5_34:;
wr(s->u,58,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dbff5_35:;
wr(s->u,66,1,pop(rd(s->u,58,8),8));
L_1803dbff5_36:;
wr(s->u,67,1,(rd(s->u,66,1)&((U)UINT64_C(0x1))));
L_1803dbff5_37:;
wr(s->u,68,1,(rd(s->u,67,1)==((U)UINT64_C(0x0))));
L_1803dbff5_38:;
wr(s->u,69,1,(!rd(s->u,49,1)));
L_1803dbff5_39:;
wr(s->u,70,1,(rd(s->u,69,1)&rd(s->r,514,1)));
L_1803dbff5_40:;
wr(s->u,71,1,(rd(s->u,49,1)&rd(s->u,68,1)));
L_1803dbff5_41:;
wr(s->r,514,1,(rd(s->u,70,1)|rd(s->u,71,1)));
L_1803dbff5_42:;
/* 1803dbff9: call 0x18000d550 */
L_1803dbff9_0:;
L_1803dbff9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbff9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbffe)));
L_1803dbff9_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803dbff9_4:;
return UINT64_C(0x1803dbffe);
}
uint64_t b_1803dbfe0(CPU*s){
/* 1803dbfe0: movsxd rcx, dword ptr [rdi + 0x70] */
L_1803dbfe0_0:;
L_1803dbfe0_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x70))));
L_1803dbfe0_2:;
wr(s->u,37,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dbfe0_3:;
wr(s->r,8,8,(U)sx(rd(s->u,37,4),4));
L_1803dbfe0_4:;
/* 1803dbfe4: mov rax, qword ptr [rbx] */
L_1803dbfe4_0:;
L_1803dbfe4_1:;
wr(s->u,41,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803dbfe4_2:;
wr(s->r,0,8,rd(s->u,41,8));
L_1803dbfe4_3:;
/* 1803dbfe7: movsxd r8, dword ptr [rdi + 0x90] */
L_1803dbfe7_0:;
L_1803dbfe7_1:;
wr(s->u,13,8,(rd(s->r,56,8)+((U)UINT64_C(0x90))));
L_1803dbfe7_2:;
wr(s->u,37,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803dbfe7_3:;
wr(s->r,128,8,(U)sx(rd(s->u,37,4),4));
L_1803dbfe7_4:;
/* 1803dbfee: lea rdx, [rax + rcx*4] */
L_1803dbfee_0:;
L_1803dbfee_1:;
wr(s->u,21,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dbfee_2:;
wr(s->u,29,8,(rd(s->r,0,8)+rd(s->u,21,8)));
L_1803dbfee_3:;
wr(s->r,16,8,rd(s->u,29,8));
L_1803dbfee_4:;
/* 1803dbff2: mov rcx, qword ptr [rsi] */
L_1803dbff2_0:;
L_1803dbff2_1:;
wr(s->u,41,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803dbff2_2:;
wr(s->r,8,8,rd(s->u,41,8));
L_1803dbff2_3:;
/* 1803dbff5: shl r8, 2 */
L_1803dbff5_0:;
L_1803dbff5_1:;
wr(s->u,89,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803dbff5_2:;
wr(s->u,93,8,rd(s->r,128,8));
L_1803dbff5_3:;
wr(s->r,128,8,((rd(s->u,89,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,89,4))));
L_1803dbff5_4:;
wr(s->u,72,1,(rd(s->u,89,4)==((U)UINT64_C(0x0))));
L_1803dbff5_5:;
wr(s->u,73,4,(rd(s->u,89,4)-((U)UINT64_C(0x1))));
L_1803dbff5_6:;
wr(s->u,77,8,((rd(s->u,73,4)>=64)?0:(rd(s->u,93,8)<<rd(s->u,73,4))));
L_1803dbff5_7:;
wr(s->u,85,1,(sx(rd(s->u,77,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbff5_8:;
wr(s->u,0,1,rd(s->u,72,1));
L_1803dbff5_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dbff5_10:;
wr(s->u,2,1,(!rd(s->u,72,1)));
L_1803dbff5_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dbff5_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,85,1)));
L_1803dbff5_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dbff5_14:;
wr(s->u,86,1,(rd(s->u,89,4)==((U)UINT64_C(0x1))));
L_1803dbff5_15:;
wr(s->u,87,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbff5_16:;
wr(s->u,88,1,(rd(s->r,512,1)^rd(s->u,87,1)));
L_1803dbff5_17:;
wr(s->u,0,1,rd(s->u,86,1));
L_1803dbff5_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,88,1)));
L_1803dbff5_19:;
wr(s->u,2,1,(!rd(s->u,86,1)));
L_1803dbff5_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dbff5_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dbff5_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dbff5_23:;
wr(s->u,49,1,(rd(s->u,89,4)!=((U)UINT64_C(0x0))));
L_1803dbff5_24:;
wr(s->u,50,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dbff5_25:;
wr(s->u,51,1,(!rd(s->u,49,1)));
L_1803dbff5_26:;
wr(s->u,52,1,(rd(s->u,51,1)&rd(s->r,519,1)));
L_1803dbff5_27:;
wr(s->u,53,1,(rd(s->u,49,1)&rd(s->u,50,1)));
L_1803dbff5_28:;
wr(s->r,519,1,(rd(s->u,52,1)|rd(s->u,53,1)));
L_1803dbff5_29:;
wr(s->u,54,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dbff5_30:;
wr(s->u,55,1,(!rd(s->u,49,1)));
L_1803dbff5_31:;
wr(s->u,56,1,(rd(s->u,55,1)&rd(s->r,518,1)));
L_1803dbff5_32:;
wr(s->u,57,1,(rd(s->u,49,1)&rd(s->u,54,1)));
L_1803dbff5_33:;
wr(s->r,518,1,(rd(s->u,56,1)|rd(s->u,57,1)));
L_1803dbff5_34:;
wr(s->u,58,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dbff5_35:;
wr(s->u,66,1,pop(rd(s->u,58,8),8));
L_1803dbff5_36:;
wr(s->u,67,1,(rd(s->u,66,1)&((U)UINT64_C(0x1))));
L_1803dbff5_37:;
wr(s->u,68,1,(rd(s->u,67,1)==((U)UINT64_C(0x0))));
L_1803dbff5_38:;
wr(s->u,69,1,(!rd(s->u,49,1)));
L_1803dbff5_39:;
wr(s->u,70,1,(rd(s->u,69,1)&rd(s->r,514,1)));
L_1803dbff5_40:;
wr(s->u,71,1,(rd(s->u,49,1)&rd(s->u,68,1)));
L_1803dbff5_41:;
wr(s->r,514,1,(rd(s->u,70,1)|rd(s->u,71,1)));
L_1803dbff5_42:;
/* 1803dbff9: call 0x18000d550 */
L_1803dbff9_0:;
L_1803dbff9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dbff9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dbffe)));
L_1803dbff9_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803dbff9_4:;
return UINT64_C(0x1803dbffe);
}
uint64_t b_1803dbffe(CPU*s){
/* 1803dbffe: inc ebp */
L_1803dbffe_0:;
L_1803dbffe_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),((U)UINT64_C(0x1)),4,0));
L_1803dbffe_2:;
wr(s->r,40,4,(rd(s->r,40,4)+((U)UINT64_C(0x1))));
L_1803dbffe_3:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803dbffe_4:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dbffe_5:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803dbffe_6:;
wr(s->u,13,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803dbffe_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803dbffe_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dbffe_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dbffe_10:;
/* 1803dc000: add rbx, 8 */
L_1803dc000_0:;
L_1803dc000_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803dc000_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x8)),8,0));
L_1803dc000_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803dc000_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc000_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803dc000_6:;
wr(s->u,13,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803dc000_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803dc000_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dc000_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dc000_10:;
/* 1803dc004: add rsi, 8 */
L_1803dc004_0:;
L_1803dc004_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803dc004_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x8)),8,0));
L_1803dc004_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x8))));
L_1803dc004_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc004_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803dc004_6:;
wr(s->u,13,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803dc004_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803dc004_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dc004_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dc004_10:;
/* 1803dc008: cmp ebp, dword ptr [rdi + 0x30] */
L_1803dc008_0:;
L_1803dc008_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc008_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc008_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803dc008_4:;
wr(s->r,512,1,(rd(s->r,40,4)<rd(s->u,23,4)));
L_1803dc008_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->u,23,4),4,1));
L_1803dc008_6:;
wr(s->u,27,4,(rd(s->r,40,4)-rd(s->u,23,4)));
L_1803dc008_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc008_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803dc008_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803dc008_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803dc008_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dc008_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dc008_13:;
/* 1803dc00b: jl 0x1803dbfe0 */
L_1803dc00b_0:;
L_1803dc00b_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc00b_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dbfe0);}
L_1803dc00b_3:;
return UINT64_C(0x1803dc00d);
}
