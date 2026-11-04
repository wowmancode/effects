#include "lift_runtime.h"
uint64_t b_1803fc005(CPU*s){
/* 1803fc005: movss dword ptr [r9 + rcx], xmm3 */
L_1803fc005_0:;
L_1803fc005_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803fc005_2:;
wr(s->u,8,8,(rd(s->r,136,8)+rd(s->u,0,8)));
L_1803fc005_3:;
wr(s->u,16,4,rd(s->r,4800,4));
L_1803fc005_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fc005_5:;
/* 1803fc00b: add r9, 4 */
L_1803fc00b_0:;
L_1803fc00b_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803fc00b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x4)),8,0));
L_1803fc00b_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x4))));
L_1803fc00b_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc00b_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fc00b_6:;
wr(s->u,21,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fc00b_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fc00b_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fc00b_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fc00b_10:;
/* 1803fc00f: cmp r9, rax */
L_1803fc00f_0:;
L_1803fc00f_1:;
wr(s->u,31,8,rd(s->r,0,8));
L_1803fc00f_2:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->u,31,8)));
L_1803fc00f_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->u,31,8),8,1));
L_1803fc00f_4:;
wr(s->u,39,8,(rd(s->r,136,8)-rd(s->u,31,8)));
L_1803fc00f_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc00f_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fc00f_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fc00f_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fc00f_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fc00f_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fc00f_11:;
/* 1803fc012: jl 0x1803fbffa */
L_1803fc012_0:;
L_1803fc012_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc012_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fbffa);}
L_1803fc012_3:;
return UINT64_C(0x1803fc014);
}
uint64_t b_1803fc00b(CPU*s){
/* 1803fc00b: add r9, 4 */
L_1803fc00b_0:;
L_1803fc00b_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803fc00b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x4)),8,0));
L_1803fc00b_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x4))));
L_1803fc00b_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc00b_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fc00b_6:;
wr(s->u,1,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fc00b_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fc00b_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fc00b_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fc00b_10:;
/* 1803fc00f: cmp r9, rax */
L_1803fc00f_0:;
L_1803fc00f_1:;
wr(s->u,11,8,rd(s->r,0,8));
L_1803fc00f_2:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->u,11,8)));
L_1803fc00f_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->u,11,8),8,1));
L_1803fc00f_4:;
wr(s->u,19,8,(rd(s->r,136,8)-rd(s->u,11,8)));
L_1803fc00f_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc00f_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fc00f_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fc00f_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fc00f_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fc00f_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fc00f_11:;
/* 1803fc012: jl 0x1803fbffa */
L_1803fc012_0:;
L_1803fc012_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc012_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fbffa);}
L_1803fc012_3:;
return UINT64_C(0x1803fc014);
}
uint64_t b_1803fc014(CPU*s){
/* 1803fc014: xor eax, eax */
L_1803fc014_0:;
L_1803fc014_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc014_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc014_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fc014_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc014_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc014_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fc014_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fc014_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fc014_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc014_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc014_11:;
/* 1803fc016: add rsp, 0x38 */
L_1803fc016_0:;
L_1803fc016_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc016_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803fc016_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803fc016_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc016_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc016_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc016_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc016_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc016_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc016_10:;
/* 1803fc01a: ret  */
L_1803fc01a_0:;
L_1803fc01a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc01a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc01a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc01a_4:;
return UINT64_C(0x1803fc01b);
}
uint64_t b_1803fc01b(CPU*s){
/* 1803fc01b: xor edx, edx */
L_1803fc01b_0:;
L_1803fc01b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc01b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc01b_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803fc01b_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fc01b_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc01b_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fc01b_7:;
wr(s->u,0,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fc01b_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fc01b_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fc01b_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fc01b_11:;
/* 1803fc01d: jmp 0x1803fbfe7 */
L_1803fc01d_0:;
L_1803fc01d_1:;
return UINT64_C(0x1803fbfe7);
L_1803fc01d_2:;
return UINT64_C(0x1803fc01f);
}
uint64_t b_1803fc01f(CPU*s){
/* 1803fc01f: mov eax, 0xfffffffa */
L_1803fc01f_0:;
L_1803fc01f_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fc01f_2:;
/* 1803fc024: add rsp, 0x38 */
L_1803fc024_0:;
L_1803fc024_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc024_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803fc024_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803fc024_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc024_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc024_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc024_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc024_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc024_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc024_10:;
/* 1803fc028: ret  */
L_1803fc028_0:;
L_1803fc028_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc028_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc028_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc028_4:;
return UINT64_C(0x1803fc029);
}
uint64_t b_1803fc029(CPU*s){
/* 1803fc029: mov eax, 0xfffffff8 */
L_1803fc029_0:;
L_1803fc029_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fc029_2:;
/* 1803fc02e: add rsp, 0x38 */
L_1803fc02e_0:;
L_1803fc02e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc02e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803fc02e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803fc02e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc02e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc02e_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc02e_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc02e_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc02e_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc02e_10:;
/* 1803fc032: ret  */
L_1803fc032_0:;
L_1803fc032_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc032_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc032_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc032_4:;
return UINT64_C(0x1803fc033);
}
uint64_t b_1803fc034(CPU*s){
/* 1803fc034: sub rsp, 0x28 */
L_1803fc034_0:;
L_1803fc034_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fc034_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fc034_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fc034_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc034_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc034_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc034_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc034_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc034_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc034_10:;
/* 1803fc038: test rcx, rcx */
L_1803fc038_0:;
L_1803fc038_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc038_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc038_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fc038_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc038_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc038_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc038_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc038_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc038_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc038_10:;
/* 1803fc03b: je 0x1803fc062 */
L_1803fc03b_0:;
L_1803fc03b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc062);}
L_1803fc03b_2:;
return UINT64_C(0x1803fc03d);
}
uint64_t b_1803fc03d(CPU*s){
/* 1803fc03d: test rdx, rdx */
L_1803fc03d_0:;
L_1803fc03d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc03d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc03d_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fc03d_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc03d_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc03d_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc03d_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc03d_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc03d_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc03d_10:;
/* 1803fc040: je 0x1803fc062 */
L_1803fc040_0:;
L_1803fc040_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc062);}
L_1803fc040_2:;
return UINT64_C(0x1803fc042);
}
uint64_t b_1803fc042(CPU*s){
/* 1803fc042: test r9, r9 */
L_1803fc042_0:;
L_1803fc042_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc042_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc042_3:;
wr(s->u,10,8,(rd(s->r,136,8)&rd(s->r,136,8)));
L_1803fc042_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc042_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc042_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc042_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc042_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc042_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc042_10:;
/* 1803fc045: je 0x1803fc062 */
L_1803fc045_0:;
L_1803fc045_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc062);}
L_1803fc045_2:;
return UINT64_C(0x1803fc047);
}
uint64_t b_1803fc047(CPU*s){
/* 1803fc047: test r8d, r8d */
L_1803fc047_0:;
L_1803fc047_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc047_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc047_3:;
wr(s->u,9,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fc047_4:;
wr(s->r,519,1,(sx(rd(s->u,9,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc047_5:;
wr(s->r,518,1,(rd(s->u,9,4)==((U)UINT64_C(0x0))));
L_1803fc047_6:;
wr(s->u,3,4,(rd(s->u,9,4)&((U)UINT64_C(0xff))));
L_1803fc047_7:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fc047_8:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fc047_9:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fc047_10:;
/* 1803fc04a: jg 0x1803fc056 */
L_1803fc04a_0:;
L_1803fc04a_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fc04a_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fc04a_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fc04a_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fc056);}
L_1803fc04a_5:;
return UINT64_C(0x1803fc04c);
}
uint64_t b_1803fc04c(CPU*s){
/* 1803fc04c: mov eax, 0xfffffffa */
L_1803fc04c_0:;
L_1803fc04c_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fc04c_2:;
/* 1803fc051: add rsp, 0x28 */
L_1803fc051_0:;
L_1803fc051_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc051_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fc051_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fc051_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc051_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc051_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc051_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc051_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc051_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc051_10:;
/* 1803fc055: ret  */
L_1803fc055_0:;
L_1803fc055_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc055_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc055_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc055_4:;
return UINT64_C(0x1803fc056);
}
uint64_t b_1803fc056(CPU*s){
/* 1803fc056: call 0x1804119d8 */
L_1803fc056_0:;
L_1803fc056_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc056_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc05b)));
L_1803fc056_3:;
return (uint64_t)UINT64_C(0x1804119d8);
L_1803fc056_4:;
return UINT64_C(0x1803fc05b);
}
uint64_t b_1803fc05b(CPU*s){
/* 1803fc05b: xor eax, eax */
L_1803fc05b_0:;
L_1803fc05b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc05b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc05b_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fc05b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc05b_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc05b_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fc05b_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fc05b_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fc05b_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc05b_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc05b_11:;
/* 1803fc05d: add rsp, 0x28 */
L_1803fc05d_0:;
L_1803fc05d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc05d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fc05d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fc05d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc05d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc05d_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc05d_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc05d_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc05d_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc05d_10:;
/* 1803fc061: ret  */
L_1803fc061_0:;
L_1803fc061_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc061_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc061_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc061_4:;
return UINT64_C(0x1803fc062);
}
uint64_t b_1803fc062(CPU*s){
/* 1803fc062: mov eax, 0xfffffff8 */
L_1803fc062_0:;
L_1803fc062_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fc062_2:;
/* 1803fc067: add rsp, 0x28 */
L_1803fc067_0:;
L_1803fc067_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc067_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fc067_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fc067_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc067_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc067_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc067_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc067_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc067_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc067_10:;
/* 1803fc06b: ret  */
L_1803fc06b_0:;
L_1803fc06b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc06b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc06b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc06b_4:;
return UINT64_C(0x1803fc06c);
}
uint64_t b_1803fc06c(CPU*s){
/* 1803fc06c: test rcx, rcx */
L_1803fc06c_0:;
L_1803fc06c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc06c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc06c_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fc06c_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc06c_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc06c_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc06c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc06c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc06c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc06c_10:;
/* 1803fc06f: je 0x1803fc1bf */
L_1803fc06f_0:;
L_1803fc06f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc1bf);}
L_1803fc06f_2:;
return UINT64_C(0x1803fc075);
}
uint64_t b_1803fc075(CPU*s){
/* 1803fc075: test rdx, rdx */
L_1803fc075_0:;
L_1803fc075_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc075_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc075_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fc075_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc075_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc075_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc075_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc075_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc075_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc075_10:;
/* 1803fc078: je 0x1803fc1bf */
L_1803fc078_0:;
L_1803fc078_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc1bf);}
L_1803fc078_2:;
return UINT64_C(0x1803fc07e);
}
uint64_t b_1803fc07e(CPU*s){
/* 1803fc07e: test r8d, r8d */
L_1803fc07e_0:;
L_1803fc07e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc07e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc07e_3:;
wr(s->u,8,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fc07e_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc07e_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803fc07e_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803fc07e_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fc07e_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fc07e_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fc07e_10:;
/* 1803fc081: jle 0x1803fc1c5 */
L_1803fc081_0:;
L_1803fc081_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc081_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fc081_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fc1c5);}
L_1803fc081_4:;
return UINT64_C(0x1803fc087);
}
uint64_t b_1803fc087(CPU*s){
/* 1803fc087: movss xmm0, dword ptr [rdx] */
L_1803fc087_0:;
L_1803fc087_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803fc087_2:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803fc087_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fc087_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fc087_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fc087_6:;
/* 1803fc08b: mulss xmm0, dword ptr [rcx] */
L_1803fc08b_0:;
L_1803fc08b_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803fc08b_2:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,8,4),4),4));
L_1803fc08b_3:;
/* 1803fc08f: movss dword ptr [rdx], xmm0 */
L_1803fc08f_0:;
L_1803fc08f_1:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803fc08f_2:;
mw((uint64_t)rd(s->r,16,8),4,rd(s->u,8,4));
L_1803fc08f_3:;
/* 1803fc093: lea r9, [rcx + 4] */
L_1803fc093_0:;
L_1803fc093_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803fc093_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1803fc093_3:;
/* 1803fc097: lea rax, [rdx + 4] */
L_1803fc097_0:;
L_1803fc097_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803fc097_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803fc097_3:;
/* 1803fc09b: test r8d, 1 */
L_1803fc09b_0:;
L_1803fc09b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc09b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc09b_3:;
wr(s->u,18,4,(rd(s->r,128,4)&((U)UINT64_C(0x1))));
L_1803fc09b_4:;
wr(s->r,519,1,(sx(rd(s->u,18,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc09b_5:;
wr(s->r,518,1,(rd(s->u,18,4)==((U)UINT64_C(0x0))));
L_1803fc09b_6:;
wr(s->u,12,4,(rd(s->u,18,4)&((U)UINT64_C(0xff))));
L_1803fc09b_7:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803fc09b_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fc09b_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fc09b_10:;
/* 1803fc0a2: je 0x1803fc0ad */
L_1803fc0a2_0:;
L_1803fc0a2_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc0ad);}
L_1803fc0a2_2:;
return UINT64_C(0x1803fc0a4);
}
uint64_t b_1803fc0a4(CPU*s){
/* 1803fc0a4: add r8d, -1 */
L_1803fc0a4_0:;
L_1803fc0a4_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803fc0a4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fc0a4_3:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0xffffffff))));
L_1803fc0a4_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fc0a4_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc0a4_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fc0a4_7:;
wr(s->u,0,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fc0a4_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fc0a4_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fc0a4_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fc0a4_11:;
/* 1803fc0a8: sar r8d, 1 */
L_1803fc0a8_0:;
L_1803fc0a8_1:;
wr(s->u,6,4,(rd(s->r,128,4)&((U)UINT64_C(0x1))));
L_1803fc0a8_2:;
wr(s->r,512,1,(rd(s->u,6,4)!=((U)UINT64_C(0x0))));
L_1803fc0a8_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc0a8_4:;
wr(s->r,128,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,128,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,128,4),4)>>((U)UINT64_C(0x1)))));
L_1803fc0a8_5:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fc0a8_6:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc0a8_7:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fc0a8_8:;
wr(s->u,0,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fc0a8_9:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fc0a8_10:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fc0a8_11:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fc0a8_12:;
/* 1803fc0ab: jmp 0x1803fc0c9 */
L_1803fc0ab_0:;
L_1803fc0ab_1:;
return UINT64_C(0x1803fc0c9);
L_1803fc0ab_2:;
return UINT64_C(0x1803fc0ad);
}
uint64_t b_1803fc0ad(CPU*s){
/* 1803fc0ad: movss xmm0, dword ptr [rax] */
L_1803fc0ad_0:;
L_1803fc0ad_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,0,8),4));
L_1803fc0ad_2:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803fc0ad_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fc0ad_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fc0ad_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fc0ad_6:;
/* 1803fc0b1: mulss xmm0, dword ptr [r9] */
L_1803fc0b1_0:;
L_1803fc0b1_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,136,8),4));
L_1803fc0b1_2:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,8,4),4),4));
L_1803fc0b1_3:;
/* 1803fc0b6: movss dword ptr [rax], xmm0 */
L_1803fc0b6_0:;
L_1803fc0b6_1:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803fc0b6_2:;
mw((uint64_t)rd(s->r,0,8),4,rd(s->u,8,4));
L_1803fc0b6_3:;
/* 1803fc0ba: add r8d, -2 */
L_1803fc0ba_0:;
L_1803fc0ba_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+((U)UINT64_C(0xfffffffe)))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803fc0ba_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0xfffffffe)),4,0));
L_1803fc0ba_3:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0xfffffffe))));
L_1803fc0ba_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fc0ba_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc0ba_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fc0ba_7:;
wr(s->u,14,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fc0ba_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803fc0ba_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803fc0ba_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803fc0ba_11:;
/* 1803fc0be: sar r8d, 1 */
L_1803fc0be_0:;
L_1803fc0be_1:;
wr(s->u,20,4,(rd(s->r,128,4)&((U)UINT64_C(0x1))));
L_1803fc0be_2:;
wr(s->r,512,1,(rd(s->u,20,4)!=((U)UINT64_C(0x0))));
L_1803fc0be_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc0be_4:;
wr(s->r,128,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,128,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,128,4),4)>>((U)UINT64_C(0x1)))));
L_1803fc0be_5:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fc0be_6:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc0be_7:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fc0be_8:;
wr(s->u,14,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fc0be_9:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803fc0be_10:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803fc0be_11:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803fc0be_12:;
/* 1803fc0c1: lea r9, [rcx + 8] */
L_1803fc0c1_0:;
L_1803fc0c1_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803fc0c1_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1803fc0c1_3:;
/* 1803fc0c5: lea rax, [rdx + 8] */
L_1803fc0c5_0:;
L_1803fc0c5_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803fc0c5_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803fc0c5_3:;
/* 1803fc0c9: xor ecx, ecx */
L_1803fc0c9_0:;
L_1803fc0c9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc0c9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc0c9_3:;
wr(s->r,8,4,(rd(s->r,8,4)^rd(s->r,8,4)));
L_1803fc0c9_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fc0c9_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc0c9_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803fc0c9_7:;
wr(s->u,14,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803fc0c9_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803fc0c9_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803fc0c9_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803fc0c9_11:;
/* 1803fc0cb: mov edx, r8d */
L_1803fc0cb_0:;
L_1803fc0cb_1:;
wr(s->r,16,4,rd(s->r,128,4));
L_1803fc0cb_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fc0cb_3:;
/* 1803fc0ce: and edx, 0xfffffffe */
L_1803fc0ce_0:;
L_1803fc0ce_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc0ce_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc0ce_3:;
wr(s->r,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xfffffffe))));
L_1803fc0ce_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fc0ce_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc0ce_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fc0ce_7:;
wr(s->u,14,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fc0ce_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803fc0ce_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803fc0ce_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803fc0ce_11:;
/* 1803fc0d1: jle 0x1803fc16c */
L_1803fc0d1_0:;
L_1803fc0d1_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc0d1_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803fc0d1_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803fc16c);}
L_1803fc0d1_4:;
return UINT64_C(0x1803fc0d7);
}
uint64_t b_1803fc0c9(CPU*s){
/* 1803fc0c9: xor ecx, ecx */
L_1803fc0c9_0:;
L_1803fc0c9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc0c9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc0c9_3:;
wr(s->r,8,4,(rd(s->r,8,4)^rd(s->r,8,4)));
L_1803fc0c9_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fc0c9_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc0c9_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803fc0c9_7:;
wr(s->u,2,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803fc0c9_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fc0c9_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fc0c9_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fc0c9_11:;
/* 1803fc0cb: mov edx, r8d */
L_1803fc0cb_0:;
L_1803fc0cb_1:;
wr(s->r,16,4,rd(s->r,128,4));
L_1803fc0cb_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fc0cb_3:;
/* 1803fc0ce: and edx, 0xfffffffe */
L_1803fc0ce_0:;
L_1803fc0ce_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc0ce_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc0ce_3:;
wr(s->r,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xfffffffe))));
L_1803fc0ce_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fc0ce_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc0ce_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fc0ce_7:;
wr(s->u,2,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fc0ce_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fc0ce_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fc0ce_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fc0ce_11:;
/* 1803fc0d1: jle 0x1803fc16c */
L_1803fc0d1_0:;
L_1803fc0d1_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc0d1_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fc0d1_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fc16c);}
L_1803fc0d1_4:;
return UINT64_C(0x1803fc0d7);
}
uint64_t b_1803fc0d7(CPU*s){
/* 1803fc0d7: movsxd rdx, edx */
L_1803fc0d7_0:;
L_1803fc0d7_1:;
wr(s->r,16,8,(U)sx(rd(s->r,16,4),4));
L_1803fc0d7_2:;
/* 1803fc0da: movss xmm3, dword ptr [r9 + rcx*8 + 4] */
L_1803fc0da_0:;
L_1803fc0da_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,136,8)));
L_1803fc0da_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc0da_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc0da_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fc0da_5:;
wr(s->r,4800,4,rd(s->u,40,4));
L_1803fc0da_6:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fc0da_7:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fc0da_8:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fc0da_9:;
/* 1803fc0e1: movaps xmm0, xmm3 */
L_1803fc0e1_0:;
L_1803fc0e1_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fc0e1_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fc0e1_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fc0e1_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fc0e1_5:;
/* 1803fc0e4: movss xmm5, dword ptr [r9 + rcx*8] */
L_1803fc0e4_0:;
L_1803fc0e4_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc0e4_2:;
wr(s->u,8,8,(rd(s->r,136,8)+rd(s->u,0,8)));
L_1803fc0e4_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fc0e4_4:;
wr(s->r,4928,4,rd(s->u,40,4));
L_1803fc0e4_5:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fc0e4_6:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fc0e4_7:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fc0e4_8:;
/* 1803fc0ea: movaps xmm4, xmm5 */
L_1803fc0ea_0:;
L_1803fc0ea_1:;
wr(s->r,4864,4,rd(s->r,4928,4));
L_1803fc0ea_2:;
wr(s->r,4868,4,rd(s->r,4932,4));
L_1803fc0ea_3:;
wr(s->r,4872,4,rd(s->r,4936,4));
L_1803fc0ea_4:;
wr(s->r,4876,4,rd(s->r,4940,4));
L_1803fc0ea_5:;
/* 1803fc0ed: movss xmm1, dword ptr [rax + rcx*8 + 4] */
L_1803fc0ed_0:;
L_1803fc0ed_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,0,8)));
L_1803fc0ed_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc0ed_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc0ed_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fc0ed_5:;
wr(s->r,4672,4,rd(s->u,40,4));
L_1803fc0ed_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fc0ed_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fc0ed_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fc0ed_9:;
/* 1803fc0f3: mulss xmm0, xmm1 */
L_1803fc0f3_0:;
L_1803fc0f3_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fc0f3_2:;
/* 1803fc0f7: mulss xmm5, xmm1 */
L_1803fc0f7_0:;
L_1803fc0f7_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fc0f7_2:;
/* 1803fc0fb: movss xmm2, dword ptr [rax + rcx*8] */
L_1803fc0fb_0:;
L_1803fc0fb_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc0fb_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803fc0fb_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fc0fb_4:;
wr(s->r,4736,4,rd(s->u,40,4));
L_1803fc0fb_5:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fc0fb_6:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fc0fb_7:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fc0fb_8:;
/* 1803fc100: mulss xmm4, xmm2 */
L_1803fc100_0:;
L_1803fc100_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fc100_2:;
/* 1803fc104: mulss xmm3, xmm2 */
L_1803fc104_0:;
L_1803fc104_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fc104_2:;
/* 1803fc108: movss xmm1, dword ptr [rax + rcx*8 + 0xc] */
L_1803fc108_0:;
L_1803fc108_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,0,8)));
L_1803fc108_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc108_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc108_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fc108_5:;
wr(s->r,4672,4,rd(s->u,40,4));
L_1803fc108_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fc108_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fc108_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fc108_9:;
/* 1803fc10e: movss xmm2, dword ptr [rax + rcx*8 + 8] */
L_1803fc10e_0:;
L_1803fc10e_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,0,8)));
L_1803fc10e_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc10e_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc10e_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fc10e_5:;
wr(s->r,4736,4,rd(s->u,40,4));
L_1803fc10e_6:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fc10e_7:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fc10e_8:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fc10e_9:;
/* 1803fc114: subss xmm4, xmm0 */
L_1803fc114_0:;
L_1803fc114_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fc114_2:;
/* 1803fc118: movss dword ptr [rax + rcx*8], xmm4 */
L_1803fc118_0:;
L_1803fc118_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc118_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803fc118_3:;
wr(s->u,40,4,rd(s->r,4864,4));
L_1803fc118_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,40,4));
L_1803fc118_5:;
/* 1803fc11d: addss xmm5, xmm3 */
L_1803fc11d_0:;
L_1803fc11d_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fc11d_2:;
/* 1803fc121: movss dword ptr [rax + rcx*8 + 4], xmm5 */
L_1803fc121_0:;
L_1803fc121_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,0,8)));
L_1803fc121_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc121_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc121_4:;
wr(s->u,40,4,rd(s->r,4928,4));
L_1803fc121_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fc121_6:;
/* 1803fc127: movss xmm5, dword ptr [r9 + rcx*8 + 8] */
L_1803fc127_0:;
L_1803fc127_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,136,8)));
L_1803fc127_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc127_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc127_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fc127_5:;
wr(s->r,4928,4,rd(s->u,40,4));
L_1803fc127_6:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fc127_7:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fc127_8:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fc127_9:;
/* 1803fc12e: movaps xmm4, xmm5 */
L_1803fc12e_0:;
L_1803fc12e_1:;
wr(s->r,4864,4,rd(s->r,4928,4));
L_1803fc12e_2:;
wr(s->r,4868,4,rd(s->r,4932,4));
L_1803fc12e_3:;
wr(s->r,4872,4,rd(s->r,4936,4));
L_1803fc12e_4:;
wr(s->r,4876,4,rd(s->r,4940,4));
L_1803fc12e_5:;
/* 1803fc131: mulss xmm5, xmm1 */
L_1803fc131_0:;
L_1803fc131_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fc131_2:;
/* 1803fc135: mulss xmm4, xmm2 */
L_1803fc135_0:;
L_1803fc135_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fc135_2:;
/* 1803fc139: movss xmm3, dword ptr [r9 + rcx*8 + 0xc] */
L_1803fc139_0:;
L_1803fc139_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,136,8)));
L_1803fc139_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc139_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc139_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fc139_5:;
wr(s->r,4800,4,rd(s->u,40,4));
L_1803fc139_6:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fc139_7:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fc139_8:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fc139_9:;
/* 1803fc140: movaps xmm0, xmm3 */
L_1803fc140_0:;
L_1803fc140_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fc140_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fc140_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fc140_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fc140_5:;
/* 1803fc143: mulss xmm3, xmm2 */
L_1803fc143_0:;
L_1803fc143_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fc143_2:;
/* 1803fc147: mulss xmm0, xmm1 */
L_1803fc147_0:;
L_1803fc147_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fc147_2:;
/* 1803fc14b: addss xmm5, xmm3 */
L_1803fc14b_0:;
L_1803fc14b_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fc14b_2:;
/* 1803fc14f: movss dword ptr [rax + rcx*8 + 0xc], xmm5 */
L_1803fc14f_0:;
L_1803fc14f_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,0,8)));
L_1803fc14f_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc14f_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc14f_4:;
wr(s->u,40,4,rd(s->r,4928,4));
L_1803fc14f_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fc14f_6:;
/* 1803fc155: subss xmm4, xmm0 */
L_1803fc155_0:;
L_1803fc155_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fc155_2:;
/* 1803fc159: movss dword ptr [rax + rcx*8 + 8], xmm4 */
L_1803fc159_0:;
L_1803fc159_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,0,8)));
L_1803fc159_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc159_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc159_4:;
wr(s->u,40,4,rd(s->r,4864,4));
L_1803fc159_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fc159_6:;
/* 1803fc15f: add rcx, 2 */
L_1803fc15f_0:;
L_1803fc15f_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x2)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803fc15f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x2)),8,0));
L_1803fc15f_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2))));
L_1803fc15f_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc15f_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803fc15f_6:;
wr(s->u,45,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803fc15f_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803fc15f_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803fc15f_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803fc15f_10:;
/* 1803fc163: cmp rcx, rdx */
L_1803fc163_0:;
L_1803fc163_1:;
wr(s->u,55,8,rd(s->r,16,8));
L_1803fc163_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,55,8)));
L_1803fc163_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,55,8),8,1));
L_1803fc163_4:;
wr(s->u,63,8,(rd(s->r,8,8)-rd(s->u,55,8)));
L_1803fc163_5:;
wr(s->r,519,1,(sx(rd(s->u,63,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc163_6:;
wr(s->r,518,1,(rd(s->u,63,8)==((U)UINT64_C(0x0))));
L_1803fc163_7:;
wr(s->u,45,8,(rd(s->u,63,8)&((U)UINT64_C(0xff))));
L_1803fc163_8:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803fc163_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803fc163_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803fc163_11:;
/* 1803fc166: jl 0x1803fc0da */
L_1803fc166_0:;
L_1803fc166_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc166_2:;
if(rd(s->u,44,1)){goto L_1803fc0da_0;}
L_1803fc166_3:;
return UINT64_C(0x1803fc16c);
}
uint64_t b_1803fc0da(CPU*s){
/* 1803fc0da: movss xmm3, dword ptr [r9 + rcx*8 + 4] */
L_1803fc0da_0:;
L_1803fc0da_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,136,8)));
L_1803fc0da_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc0da_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc0da_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fc0da_5:;
wr(s->r,4800,4,rd(s->u,40,4));
L_1803fc0da_6:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fc0da_7:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fc0da_8:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fc0da_9:;
/* 1803fc0e1: movaps xmm0, xmm3 */
L_1803fc0e1_0:;
L_1803fc0e1_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fc0e1_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fc0e1_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fc0e1_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fc0e1_5:;
/* 1803fc0e4: movss xmm5, dword ptr [r9 + rcx*8] */
L_1803fc0e4_0:;
L_1803fc0e4_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc0e4_2:;
wr(s->u,8,8,(rd(s->r,136,8)+rd(s->u,0,8)));
L_1803fc0e4_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fc0e4_4:;
wr(s->r,4928,4,rd(s->u,40,4));
L_1803fc0e4_5:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fc0e4_6:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fc0e4_7:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fc0e4_8:;
/* 1803fc0ea: movaps xmm4, xmm5 */
L_1803fc0ea_0:;
L_1803fc0ea_1:;
wr(s->r,4864,4,rd(s->r,4928,4));
L_1803fc0ea_2:;
wr(s->r,4868,4,rd(s->r,4932,4));
L_1803fc0ea_3:;
wr(s->r,4872,4,rd(s->r,4936,4));
L_1803fc0ea_4:;
wr(s->r,4876,4,rd(s->r,4940,4));
L_1803fc0ea_5:;
/* 1803fc0ed: movss xmm1, dword ptr [rax + rcx*8 + 4] */
L_1803fc0ed_0:;
L_1803fc0ed_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,0,8)));
L_1803fc0ed_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc0ed_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc0ed_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fc0ed_5:;
wr(s->r,4672,4,rd(s->u,40,4));
L_1803fc0ed_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fc0ed_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fc0ed_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fc0ed_9:;
/* 1803fc0f3: mulss xmm0, xmm1 */
L_1803fc0f3_0:;
L_1803fc0f3_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fc0f3_2:;
/* 1803fc0f7: mulss xmm5, xmm1 */
L_1803fc0f7_0:;
L_1803fc0f7_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fc0f7_2:;
/* 1803fc0fb: movss xmm2, dword ptr [rax + rcx*8] */
L_1803fc0fb_0:;
L_1803fc0fb_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc0fb_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803fc0fb_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fc0fb_4:;
wr(s->r,4736,4,rd(s->u,40,4));
L_1803fc0fb_5:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fc0fb_6:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fc0fb_7:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fc0fb_8:;
/* 1803fc100: mulss xmm4, xmm2 */
L_1803fc100_0:;
L_1803fc100_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fc100_2:;
/* 1803fc104: mulss xmm3, xmm2 */
L_1803fc104_0:;
L_1803fc104_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fc104_2:;
/* 1803fc108: movss xmm1, dword ptr [rax + rcx*8 + 0xc] */
L_1803fc108_0:;
L_1803fc108_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,0,8)));
L_1803fc108_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc108_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc108_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fc108_5:;
wr(s->r,4672,4,rd(s->u,40,4));
L_1803fc108_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fc108_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fc108_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fc108_9:;
/* 1803fc10e: movss xmm2, dword ptr [rax + rcx*8 + 8] */
L_1803fc10e_0:;
L_1803fc10e_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,0,8)));
L_1803fc10e_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc10e_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc10e_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fc10e_5:;
wr(s->r,4736,4,rd(s->u,40,4));
L_1803fc10e_6:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fc10e_7:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fc10e_8:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fc10e_9:;
/* 1803fc114: subss xmm4, xmm0 */
L_1803fc114_0:;
L_1803fc114_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fc114_2:;
/* 1803fc118: movss dword ptr [rax + rcx*8], xmm4 */
L_1803fc118_0:;
L_1803fc118_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc118_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803fc118_3:;
wr(s->u,40,4,rd(s->r,4864,4));
L_1803fc118_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,40,4));
L_1803fc118_5:;
/* 1803fc11d: addss xmm5, xmm3 */
L_1803fc11d_0:;
L_1803fc11d_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fc11d_2:;
/* 1803fc121: movss dword ptr [rax + rcx*8 + 4], xmm5 */
L_1803fc121_0:;
L_1803fc121_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,0,8)));
L_1803fc121_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc121_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc121_4:;
wr(s->u,40,4,rd(s->r,4928,4));
L_1803fc121_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fc121_6:;
/* 1803fc127: movss xmm5, dword ptr [r9 + rcx*8 + 8] */
L_1803fc127_0:;
L_1803fc127_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,136,8)));
L_1803fc127_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc127_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc127_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fc127_5:;
wr(s->r,4928,4,rd(s->u,40,4));
L_1803fc127_6:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fc127_7:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fc127_8:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fc127_9:;
/* 1803fc12e: movaps xmm4, xmm5 */
L_1803fc12e_0:;
L_1803fc12e_1:;
wr(s->r,4864,4,rd(s->r,4928,4));
L_1803fc12e_2:;
wr(s->r,4868,4,rd(s->r,4932,4));
L_1803fc12e_3:;
wr(s->r,4872,4,rd(s->r,4936,4));
L_1803fc12e_4:;
wr(s->r,4876,4,rd(s->r,4940,4));
L_1803fc12e_5:;
/* 1803fc131: mulss xmm5, xmm1 */
L_1803fc131_0:;
L_1803fc131_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fc131_2:;
/* 1803fc135: mulss xmm4, xmm2 */
L_1803fc135_0:;
L_1803fc135_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fc135_2:;
/* 1803fc139: movss xmm3, dword ptr [r9 + rcx*8 + 0xc] */
L_1803fc139_0:;
L_1803fc139_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,136,8)));
L_1803fc139_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc139_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc139_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fc139_5:;
wr(s->r,4800,4,rd(s->u,40,4));
L_1803fc139_6:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fc139_7:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fc139_8:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fc139_9:;
/* 1803fc140: movaps xmm0, xmm3 */
L_1803fc140_0:;
L_1803fc140_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fc140_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fc140_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fc140_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fc140_5:;
/* 1803fc143: mulss xmm3, xmm2 */
L_1803fc143_0:;
L_1803fc143_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fc143_2:;
/* 1803fc147: mulss xmm0, xmm1 */
L_1803fc147_0:;
L_1803fc147_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fc147_2:;
/* 1803fc14b: addss xmm5, xmm3 */
L_1803fc14b_0:;
L_1803fc14b_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fc14b_2:;
/* 1803fc14f: movss dword ptr [rax + rcx*8 + 0xc], xmm5 */
L_1803fc14f_0:;
L_1803fc14f_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,0,8)));
L_1803fc14f_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc14f_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc14f_4:;
wr(s->u,40,4,rd(s->r,4928,4));
L_1803fc14f_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fc14f_6:;
/* 1803fc155: subss xmm4, xmm0 */
L_1803fc155_0:;
L_1803fc155_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fc155_2:;
/* 1803fc159: movss dword ptr [rax + rcx*8 + 8], xmm4 */
L_1803fc159_0:;
L_1803fc159_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,0,8)));
L_1803fc159_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x8))));
L_1803fc159_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc159_4:;
wr(s->u,40,4,rd(s->r,4864,4));
L_1803fc159_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fc159_6:;
/* 1803fc15f: add rcx, 2 */
L_1803fc15f_0:;
L_1803fc15f_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x2)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803fc15f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x2)),8,0));
L_1803fc15f_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x2))));
L_1803fc15f_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc15f_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803fc15f_6:;
wr(s->u,45,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803fc15f_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803fc15f_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803fc15f_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803fc15f_10:;
/* 1803fc163: cmp rcx, rdx */
L_1803fc163_0:;
L_1803fc163_1:;
wr(s->u,55,8,rd(s->r,16,8));
L_1803fc163_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,55,8)));
L_1803fc163_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,55,8),8,1));
L_1803fc163_4:;
wr(s->u,63,8,(rd(s->r,8,8)-rd(s->u,55,8)));
L_1803fc163_5:;
wr(s->r,519,1,(sx(rd(s->u,63,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc163_6:;
wr(s->r,518,1,(rd(s->u,63,8)==((U)UINT64_C(0x0))));
L_1803fc163_7:;
wr(s->u,45,8,(rd(s->u,63,8)&((U)UINT64_C(0xff))));
L_1803fc163_8:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803fc163_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803fc163_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803fc163_11:;
/* 1803fc166: jl 0x1803fc0da */
L_1803fc166_0:;
L_1803fc166_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc166_2:;
if(rd(s->u,44,1)){goto L_1803fc0da_0;}
L_1803fc166_3:;
return UINT64_C(0x1803fc16c);
}
uint64_t b_1803fc16c(CPU*s){
/* 1803fc16c: test r8d, 1 */
L_1803fc16c_0:;
L_1803fc16c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc16c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc16c_3:;
wr(s->u,6,4,(rd(s->r,128,4)&((U)UINT64_C(0x1))));
L_1803fc16c_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc16c_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803fc16c_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803fc16c_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fc16c_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fc16c_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fc16c_10:;
/* 1803fc173: je 0x1803fc1bc */
L_1803fc173_0:;
L_1803fc173_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc1bc);}
L_1803fc173_2:;
return UINT64_C(0x1803fc175);
}
uint64_t b_1803fc175(CPU*s){
/* 1803fc175: movsxd rdx, r8d */
L_1803fc175_0:;
L_1803fc175_1:;
wr(s->r,16,8,(U)sx(rd(s->r,128,4),4));
L_1803fc175_2:;
/* 1803fc178: movss xmm1, dword ptr [rax + rdx*8 - 4] */
L_1803fc178_0:;
L_1803fc178_1:;
wr(s->u,0,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803fc178_2:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x8))));
L_1803fc178_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803fc178_4:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fc178_5:;
wr(s->r,4672,4,rd(s->u,24,4));
L_1803fc178_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fc178_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fc178_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fc178_9:;
/* 1803fc17e: movss xmm2, dword ptr [rax + rdx*8 - 8] */
L_1803fc17e_0:;
L_1803fc17e_1:;
wr(s->u,0,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803fc17e_2:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x8))));
L_1803fc17e_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803fc17e_4:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fc17e_5:;
wr(s->r,4736,4,rd(s->u,24,4));
L_1803fc17e_6:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fc17e_7:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fc17e_8:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fc17e_9:;
/* 1803fc184: movss xmm3, dword ptr [r9 + rdx*8 - 4] */
L_1803fc184_0:;
L_1803fc184_1:;
wr(s->u,0,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,136,8)));
L_1803fc184_2:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x8))));
L_1803fc184_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803fc184_4:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fc184_5:;
wr(s->r,4800,4,rd(s->u,24,4));
L_1803fc184_6:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fc184_7:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fc184_8:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fc184_9:;
/* 1803fc18b: movaps xmm0, xmm3 */
L_1803fc18b_0:;
L_1803fc18b_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fc18b_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fc18b_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fc18b_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fc18b_5:;
/* 1803fc18e: mulss xmm3, xmm2 */
L_1803fc18e_0:;
L_1803fc18e_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fc18e_2:;
/* 1803fc192: mulss xmm0, xmm1 */
L_1803fc192_0:;
L_1803fc192_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fc192_2:;
/* 1803fc196: movss xmm5, dword ptr [r9 + rdx*8 - 8] */
L_1803fc196_0:;
L_1803fc196_1:;
wr(s->u,0,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803fc196_2:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x8))));
L_1803fc196_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803fc196_4:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fc196_5:;
wr(s->r,4928,4,rd(s->u,24,4));
L_1803fc196_6:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fc196_7:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fc196_8:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fc196_9:;
/* 1803fc19d: movaps xmm4, xmm5 */
L_1803fc19d_0:;
L_1803fc19d_1:;
wr(s->r,4864,4,rd(s->r,4928,4));
L_1803fc19d_2:;
wr(s->r,4868,4,rd(s->r,4932,4));
L_1803fc19d_3:;
wr(s->r,4872,4,rd(s->r,4936,4));
L_1803fc19d_4:;
wr(s->r,4876,4,rd(s->r,4940,4));
L_1803fc19d_5:;
/* 1803fc1a0: mulss xmm5, xmm1 */
L_1803fc1a0_0:;
L_1803fc1a0_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fc1a0_2:;
/* 1803fc1a4: mulss xmm4, xmm2 */
L_1803fc1a4_0:;
L_1803fc1a4_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fc1a4_2:;
/* 1803fc1a8: addss xmm5, xmm3 */
L_1803fc1a8_0:;
L_1803fc1a8_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fc1a8_2:;
/* 1803fc1ac: movss dword ptr [rax + rdx*8 - 4], xmm5 */
L_1803fc1ac_0:;
L_1803fc1ac_1:;
wr(s->u,0,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803fc1ac_2:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x8))));
L_1803fc1ac_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803fc1ac_4:;
wr(s->u,24,4,rd(s->r,4928,4));
L_1803fc1ac_5:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fc1ac_6:;
/* 1803fc1b2: subss xmm4, xmm0 */
L_1803fc1b2_0:;
L_1803fc1b2_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fc1b2_2:;
/* 1803fc1b6: movss dword ptr [rax + rdx*8 - 8], xmm4 */
L_1803fc1b6_0:;
L_1803fc1b6_1:;
wr(s->u,0,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803fc1b6_2:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x8))));
L_1803fc1b6_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803fc1b6_4:;
wr(s->u,24,4,rd(s->r,4864,4));
L_1803fc1b6_5:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fc1b6_6:;
/* 1803fc1bc: xor eax, eax */
L_1803fc1bc_0:;
L_1803fc1bc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc1bc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc1bc_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fc1bc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc1bc_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc1bc_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fc1bc_7:;
wr(s->u,28,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fc1bc_8:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803fc1bc_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803fc1bc_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803fc1bc_11:;
/* 1803fc1be: ret  */
L_1803fc1be_0:;
L_1803fc1be_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc1be_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc1be_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc1be_4:;
return UINT64_C(0x1803fc1bf);
}
uint64_t b_1803fc1bc(CPU*s){
/* 1803fc1bc: xor eax, eax */
L_1803fc1bc_0:;
L_1803fc1bc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc1bc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc1bc_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fc1bc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc1bc_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc1bc_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fc1bc_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fc1bc_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fc1bc_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fc1bc_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fc1bc_11:;
/* 1803fc1be: ret  */
L_1803fc1be_0:;
L_1803fc1be_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc1be_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc1be_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc1be_4:;
return UINT64_C(0x1803fc1bf);
}
uint64_t b_1803fc1bf(CPU*s){
/* 1803fc1bf: mov eax, 0xfffffff8 */
L_1803fc1bf_0:;
L_1803fc1bf_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fc1bf_2:;
/* 1803fc1c4: ret  */
L_1803fc1c4_0:;
L_1803fc1c4_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc1c4_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc1c4_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc1c4_4:;
return UINT64_C(0x1803fc1c5);
}
uint64_t b_1803fc1c5(CPU*s){
/* 1803fc1c5: mov eax, 0xfffffffa */
L_1803fc1c5_0:;
L_1803fc1c5_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fc1c5_2:;
/* 1803fc1ca: ret  */
L_1803fc1ca_0:;
L_1803fc1ca_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc1ca_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc1ca_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc1ca_4:;
return UINT64_C(0x1803fc1cb);
}
uint64_t b_1803fc1cc(CPU*s){
/* 1803fc1cc: sub rsp, 0x48 */
L_1803fc1cc_0:;
L_1803fc1cc_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x48))));
L_1803fc1cc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,1));
L_1803fc1cc_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x48))));
L_1803fc1cc_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc1cc_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc1cc_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc1cc_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc1cc_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc1cc_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc1cc_10:;
/* 1803fc1d0: mov eax, r8d */
L_1803fc1d0_0:;
L_1803fc1d0_1:;
wr(s->r,0,4,rd(s->r,128,4));
L_1803fc1d0_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc1d0_3:;
/* 1803fc1d3: mov r8, rdx */
L_1803fc1d3_0:;
L_1803fc1d3_1:;
wr(s->r,128,8,rd(s->r,16,8));
L_1803fc1d3_2:;
/* 1803fc1d6: movsxd rdx, eax */
L_1803fc1d6_0:;
L_1803fc1d6_1:;
wr(s->r,16,8,(U)sx(rd(s->r,0,4),4));
L_1803fc1d6_2:;
/* 1803fc1d9: test rcx, rcx */
L_1803fc1d9_0:;
L_1803fc1d9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc1d9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc1d9_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fc1d9_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc1d9_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc1d9_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc1d9_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc1d9_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc1d9_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc1d9_10:;
/* 1803fc1dc: je 0x1803fc263 */
L_1803fc1dc_0:;
L_1803fc1dc_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc263);}
L_1803fc1dc_2:;
return UINT64_C(0x1803fc1e2);
}
uint64_t b_1803fc1e2(CPU*s){
/* 1803fc1e2: test r8, r8 */
L_1803fc1e2_0:;
L_1803fc1e2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc1e2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc1e2_3:;
wr(s->u,10,8,(rd(s->r,128,8)&rd(s->r,128,8)));
L_1803fc1e2_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc1e2_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc1e2_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc1e2_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc1e2_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc1e2_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc1e2_10:;
/* 1803fc1e5: je 0x1803fc263 */
L_1803fc1e5_0:;
L_1803fc1e5_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc263);}
L_1803fc1e5_2:;
return UINT64_C(0x1803fc1e7);
}
uint64_t b_1803fc1e7(CPU*s){
/* 1803fc1e7: test rdx, rdx */
L_1803fc1e7_0:;
L_1803fc1e7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc1e7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc1e7_3:;
wr(s->u,12,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fc1e7_4:;
wr(s->r,519,1,(sx(rd(s->u,12,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc1e7_5:;
wr(s->r,518,1,(rd(s->u,12,8)==((U)UINT64_C(0x0))));
L_1803fc1e7_6:;
wr(s->u,2,8,(rd(s->u,12,8)&((U)UINT64_C(0xff))));
L_1803fc1e7_7:;
wr(s->u,10,1,pop(rd(s->u,2,8),8));
L_1803fc1e7_8:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fc1e7_9:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fc1e7_10:;
/* 1803fc1ea: jle 0x1803fc259 */
L_1803fc1ea_0:;
L_1803fc1ea_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc1ea_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fc1ea_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fc259);}
L_1803fc1ea_4:;
return UINT64_C(0x1803fc1ec);
}
uint64_t b_1803fc1ec(CPU*s){
/* 1803fc1ec: mov eax, 0 */
L_1803fc1ec_0:;
L_1803fc1ec_1:;
wr(s->r,0,8,((U)UINT64_C(0x0)));
L_1803fc1ec_2:;
/* 1803fc1f1: jle 0x1803fc252 */
L_1803fc1f1_0:;
L_1803fc1f1_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc1f1_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fc1f1_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fc252);}
L_1803fc1f1_4:;
return UINT64_C(0x1803fc1f3);
}
uint64_t b_1803fc1f3(CPU*s){
/* 1803fc1f3: mov qword ptr [rsp + 0x38], rbx */
L_1803fc1f3_0:;
L_1803fc1f3_1:;
wr(s->u,8,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803fc1f3_2:;
wr(s->u,20,8,rd(s->r,24,8));
L_1803fc1f3_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803fc1f3_4:;
/* 1803fc1f8: mov rbx, rax */
L_1803fc1f8_0:;
L_1803fc1f8_1:;
wr(s->r,24,8,rd(s->r,0,8));
L_1803fc1f8_2:;
/* 1803fc1fb: mov qword ptr [rsp + 0x30], rsi */
L_1803fc1fb_0:;
L_1803fc1fb_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fc1fb_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803fc1fb_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803fc1fb_4:;
/* 1803fc200: mov qword ptr [rsp + 0x28], rdi */
L_1803fc200_0:;
L_1803fc200_1:;
wr(s->u,8,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fc200_2:;
wr(s->u,20,8,rd(s->r,56,8));
L_1803fc200_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803fc200_4:;
/* 1803fc205: mov qword ptr [rsp + 0x20], r12 */
L_1803fc205_0:;
L_1803fc205_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fc205_2:;
wr(s->u,20,8,rd(s->r,160,8));
L_1803fc205_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803fc205_4:;
/* 1803fc20a: mov rsi, rdx */
L_1803fc20a_0:;
L_1803fc20a_1:;
wr(s->r,48,8,rd(s->r,16,8));
L_1803fc20a_2:;
/* 1803fc20d: mov rdi, rcx */
L_1803fc20d_0:;
L_1803fc20d_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803fc20d_2:;
/* 1803fc210: mov r12, r8 */
L_1803fc210_0:;
L_1803fc210_1:;
wr(s->r,160,8,rd(s->r,128,8));
L_1803fc210_2:;
/* 1803fc213: movss xmm2, dword ptr [rdi + 4] */
L_1803fc213_0:;
L_1803fc213_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x4))));
L_1803fc213_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc213_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fc213_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fc213_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fc213_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fc213_7:;
/* 1803fc218: cvtps2pd xmm0, xmm2 */
L_1803fc218_0:;
L_1803fc218_1:;
wr(s->u,28,8,rd(s->r,4736,8));
L_1803fc218_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,28,4),4),8));
L_1803fc218_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,32,4),4),8));
L_1803fc218_4:;
/* 1803fc21b: movss xmm3, dword ptr [rdi] */
L_1803fc21b_0:;
L_1803fc21b_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,56,8),4));
L_1803fc21b_2:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fc21b_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fc21b_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fc21b_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fc21b_6:;
/* 1803fc21f: cvtps2pd xmm1, xmm3 */
L_1803fc21f_0:;
L_1803fc21f_1:;
wr(s->u,28,8,rd(s->r,4800,8));
L_1803fc21f_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,28,4),4),8));
L_1803fc21f_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,32,4),4),8));
L_1803fc21f_4:;
/* 1803fc222: call 0x180609bbc */
L_1803fc222_0:;
L_1803fc222_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc222_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc227)));
L_1803fc222_3:;
return (uint64_t)UINT64_C(0x180609bbc);
L_1803fc222_4:;
return UINT64_C(0x1803fc227);
}
uint64_t b_1803fc213(CPU*s){
/* 1803fc213: movss xmm2, dword ptr [rdi + 4] */
L_1803fc213_0:;
L_1803fc213_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x4))));
L_1803fc213_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc213_3:;
wr(s->r,4736,4,rd(s->u,8,4));
L_1803fc213_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fc213_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fc213_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fc213_7:;
/* 1803fc218: cvtps2pd xmm0, xmm2 */
L_1803fc218_0:;
L_1803fc218_1:;
wr(s->u,12,8,rd(s->r,4736,8));
L_1803fc218_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,12,4),4),8));
L_1803fc218_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,16,4),4),8));
L_1803fc218_4:;
/* 1803fc21b: movss xmm3, dword ptr [rdi] */
L_1803fc21b_0:;
L_1803fc21b_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,56,8),4));
L_1803fc21b_2:;
wr(s->r,4800,4,rd(s->u,8,4));
L_1803fc21b_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fc21b_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fc21b_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fc21b_6:;
/* 1803fc21f: cvtps2pd xmm1, xmm3 */
L_1803fc21f_0:;
L_1803fc21f_1:;
wr(s->u,12,8,rd(s->r,4800,8));
L_1803fc21f_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,12,4),4),8));
L_1803fc21f_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,16,4),4),8));
L_1803fc21f_4:;
/* 1803fc222: call 0x180609bbc */
L_1803fc222_0:;
L_1803fc222_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc222_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc227)));
L_1803fc222_3:;
return (uint64_t)UINT64_C(0x180609bbc);
L_1803fc222_4:;
return UINT64_C(0x1803fc227);
}
uint64_t b_1803fc227(CPU*s){
/* 1803fc227: cvtsd2ss xmm0, xmm0 */
L_1803fc227_0:;
L_1803fc227_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,8),8),4));
L_1803fc227_2:;
/* 1803fc22b: movss dword ptr [r12 + rbx*4], xmm0 */
L_1803fc22b_0:;
L_1803fc22b_1:;
wr(s->u,0,8,(rd(s->r,24,8)*((U)UINT64_C(0x4))));
L_1803fc22b_2:;
wr(s->u,8,8,(rd(s->r,160,8)+rd(s->u,0,8)));
L_1803fc22b_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fc22b_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fc22b_5:;
/* 1803fc231: add rdi, 8 */
L_1803fc231_0:;
L_1803fc231_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803fc231_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x8)),8,0));
L_1803fc231_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803fc231_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc231_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803fc231_6:;
wr(s->u,21,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803fc231_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fc231_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fc231_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fc231_10:;
/* 1803fc235: add rbx, 1 */
L_1803fc235_0:;
L_1803fc235_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803fc235_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x1)),8,0));
L_1803fc235_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x1))));
L_1803fc235_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc235_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803fc235_6:;
wr(s->u,21,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803fc235_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fc235_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fc235_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fc235_10:;
/* 1803fc239: cmp rbx, rsi */
L_1803fc239_0:;
L_1803fc239_1:;
wr(s->u,31,8,rd(s->r,48,8));
L_1803fc239_2:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->u,31,8)));
L_1803fc239_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->u,31,8),8,1));
L_1803fc239_4:;
wr(s->u,39,8,(rd(s->r,24,8)-rd(s->u,31,8)));
L_1803fc239_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc239_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fc239_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fc239_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fc239_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fc239_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fc239_11:;
/* 1803fc23c: jl 0x1803fc213 */
L_1803fc23c_0:;
L_1803fc23c_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc23c_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fc213);}
L_1803fc23c_3:;
return UINT64_C(0x1803fc23e);
}
uint64_t b_1803fc23e(CPU*s){
/* 1803fc23e: mov rbx, qword ptr [rsp + 0x38] */
L_1803fc23e_0:;
L_1803fc23e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803fc23e_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fc23e_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803fc23e_4:;
/* 1803fc243: mov rsi, qword ptr [rsp + 0x30] */
L_1803fc243_0:;
L_1803fc243_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fc243_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fc243_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803fc243_4:;
/* 1803fc248: mov rdi, qword ptr [rsp + 0x28] */
L_1803fc248_0:;
L_1803fc248_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fc248_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fc248_3:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803fc248_4:;
/* 1803fc24d: mov r12, qword ptr [rsp + 0x20] */
L_1803fc24d_0:;
L_1803fc24d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fc24d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fc24d_3:;
wr(s->r,160,8,rd(s->u,8,8));
L_1803fc24d_4:;
/* 1803fc252: xor eax, eax */
L_1803fc252_0:;
L_1803fc252_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc252_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc252_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fc252_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc252_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc252_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fc252_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fc252_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803fc252_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fc252_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fc252_11:;
/* 1803fc254: add rsp, 0x48 */
L_1803fc254_0:;
L_1803fc254_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc254_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fc254_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fc254_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc254_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc254_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc254_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803fc254_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fc254_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fc254_10:;
/* 1803fc258: ret  */
L_1803fc258_0:;
L_1803fc258_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc258_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc258_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc258_4:;
return UINT64_C(0x1803fc259);
}
uint64_t b_1803fc252(CPU*s){
/* 1803fc252: xor eax, eax */
L_1803fc252_0:;
L_1803fc252_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc252_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc252_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fc252_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc252_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc252_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fc252_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fc252_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fc252_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc252_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc252_11:;
/* 1803fc254: add rsp, 0x48 */
L_1803fc254_0:;
L_1803fc254_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc254_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fc254_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fc254_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc254_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc254_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc254_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc254_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc254_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc254_10:;
/* 1803fc258: ret  */
L_1803fc258_0:;
L_1803fc258_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc258_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc258_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc258_4:;
return UINT64_C(0x1803fc259);
}
uint64_t b_1803fc259(CPU*s){
/* 1803fc259: mov eax, 0xfffffffa */
L_1803fc259_0:;
L_1803fc259_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fc259_2:;
/* 1803fc25e: add rsp, 0x48 */
L_1803fc25e_0:;
L_1803fc25e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc25e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fc25e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fc25e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc25e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc25e_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc25e_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc25e_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc25e_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc25e_10:;
/* 1803fc262: ret  */
L_1803fc262_0:;
L_1803fc262_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc262_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc262_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc262_4:;
return UINT64_C(0x1803fc263);
}
uint64_t b_1803fc263(CPU*s){
/* 1803fc263: mov eax, 0xfffffff8 */
L_1803fc263_0:;
L_1803fc263_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fc263_2:;
/* 1803fc268: add rsp, 0x48 */
L_1803fc268_0:;
L_1803fc268_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc268_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fc268_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fc268_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc268_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc268_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc268_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc268_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc268_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc268_10:;
/* 1803fc26c: ret  */
L_1803fc26c_0:;
L_1803fc26c_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc26c_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc26c_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc26c_4:;
return UINT64_C(0x1803fc26d);
}
uint64_t b_1803fc270(CPU*s){
/* 1803fc270: sub rsp, 0x48 */
L_1803fc270_0:;
L_1803fc270_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x48))));
L_1803fc270_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,1));
L_1803fc270_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x48))));
L_1803fc270_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc270_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc270_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc270_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc270_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc270_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc270_10:;
/* 1803fc274: mov eax, r8d */
L_1803fc274_0:;
L_1803fc274_1:;
wr(s->r,0,4,rd(s->r,128,4));
L_1803fc274_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc274_3:;
/* 1803fc277: mov r8, rdx */
L_1803fc277_0:;
L_1803fc277_1:;
wr(s->r,128,8,rd(s->r,16,8));
L_1803fc277_2:;
/* 1803fc27a: movsxd rdx, eax */
L_1803fc27a_0:;
L_1803fc27a_1:;
wr(s->r,16,8,(U)sx(rd(s->r,0,4),4));
L_1803fc27a_2:;
/* 1803fc27d: test rcx, rcx */
L_1803fc27d_0:;
L_1803fc27d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc27d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc27d_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fc27d_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc27d_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc27d_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc27d_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc27d_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc27d_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc27d_10:;
/* 1803fc280: je 0x1803fc315 */
L_1803fc280_0:;
L_1803fc280_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc315);}
L_1803fc280_2:;
return UINT64_C(0x1803fc286);
}
uint64_t b_1803fc286(CPU*s){
/* 1803fc286: test r8, r8 */
L_1803fc286_0:;
L_1803fc286_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc286_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc286_3:;
wr(s->u,10,8,(rd(s->r,128,8)&rd(s->r,128,8)));
L_1803fc286_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc286_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc286_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc286_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc286_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc286_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc286_10:;
/* 1803fc289: je 0x1803fc315 */
L_1803fc289_0:;
L_1803fc289_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc315);}
L_1803fc289_2:;
return UINT64_C(0x1803fc28f);
}
uint64_t b_1803fc28f(CPU*s){
/* 1803fc28f: test rdx, rdx */
L_1803fc28f_0:;
L_1803fc28f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc28f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc28f_3:;
wr(s->u,12,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fc28f_4:;
wr(s->r,519,1,(sx(rd(s->u,12,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc28f_5:;
wr(s->r,518,1,(rd(s->u,12,8)==((U)UINT64_C(0x0))));
L_1803fc28f_6:;
wr(s->u,2,8,(rd(s->u,12,8)&((U)UINT64_C(0xff))));
L_1803fc28f_7:;
wr(s->u,10,1,pop(rd(s->u,2,8),8));
L_1803fc28f_8:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fc28f_9:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fc28f_10:;
/* 1803fc292: jle 0x1803fc30b */
L_1803fc292_0:;
L_1803fc292_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc292_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fc292_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fc30b);}
L_1803fc292_4:;
return UINT64_C(0x1803fc294);
}
uint64_t b_1803fc294(CPU*s){
/* 1803fc294: mov eax, 0 */
L_1803fc294_0:;
L_1803fc294_1:;
wr(s->r,0,8,((U)UINT64_C(0x0)));
L_1803fc294_2:;
/* 1803fc299: jle 0x1803fc304 */
L_1803fc299_0:;
L_1803fc299_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc299_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fc299_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fc304);}
L_1803fc299_4:;
return UINT64_C(0x1803fc29b);
}
uint64_t b_1803fc29b(CPU*s){
/* 1803fc29b: mov qword ptr [rsp + 0x38], rbx */
L_1803fc29b_0:;
L_1803fc29b_1:;
wr(s->u,16,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803fc29b_2:;
wr(s->u,52,8,rd(s->r,24,8));
L_1803fc29b_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,52,8));
L_1803fc29b_4:;
/* 1803fc2a0: mov rbx, rax */
L_1803fc2a0_0:;
L_1803fc2a0_1:;
wr(s->r,24,8,rd(s->r,0,8));
L_1803fc2a0_2:;
/* 1803fc2a3: mov qword ptr [rsp + 0x30], rsi */
L_1803fc2a3_0:;
L_1803fc2a3_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fc2a3_2:;
wr(s->u,52,8,rd(s->r,48,8));
L_1803fc2a3_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,52,8));
L_1803fc2a3_4:;
/* 1803fc2a8: mov qword ptr [rsp + 0x28], rdi */
L_1803fc2a8_0:;
L_1803fc2a8_1:;
wr(s->u,16,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fc2a8_2:;
wr(s->u,52,8,rd(s->r,56,8));
L_1803fc2a8_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,52,8));
L_1803fc2a8_4:;
/* 1803fc2ad: mov qword ptr [rsp + 0x20], r12 */
L_1803fc2ad_0:;
L_1803fc2ad_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fc2ad_2:;
wr(s->u,52,8,rd(s->r,160,8));
L_1803fc2ad_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,52,8));
L_1803fc2ad_4:;
/* 1803fc2b2: mov rsi, rdx */
L_1803fc2b2_0:;
L_1803fc2b2_1:;
wr(s->r,48,8,rd(s->r,16,8));
L_1803fc2b2_2:;
/* 1803fc2b5: mov rdi, rcx */
L_1803fc2b5_0:;
L_1803fc2b5_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803fc2b5_2:;
/* 1803fc2b8: mov r12, r8 */
L_1803fc2b8_0:;
L_1803fc2b8_1:;
wr(s->r,160,8,rd(s->r,128,8));
L_1803fc2b8_2:;
/* 1803fc2bb: movss xmm1, dword ptr [rdi + rbx*8] */
L_1803fc2bb_0:;
L_1803fc2bb_1:;
wr(s->u,0,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803fc2bb_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803fc2bb_3:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fc2bb_4:;
wr(s->r,4672,4,rd(s->u,48,4));
L_1803fc2bb_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fc2bb_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fc2bb_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fc2bb_8:;
/* 1803fc2c0: cvtps2pd xmm0, xmm1 */
L_1803fc2c0_0:;
L_1803fc2c0_1:;
wr(s->u,60,8,rd(s->r,4672,8));
L_1803fc2c0_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,60,4),4),8));
L_1803fc2c0_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,64,4),4),8));
L_1803fc2c0_4:;
/* 1803fc2c3: movss xmm2, dword ptr [rdi + rbx*8 + 4] */
L_1803fc2c3_0:;
L_1803fc2c3_1:;
wr(s->u,24,8,(((U)UINT64_C(0x4))+rd(s->r,56,8)));
L_1803fc2c3_2:;
wr(s->u,32,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803fc2c3_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803fc2c3_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,40,8),4));
L_1803fc2c3_5:;
wr(s->r,4736,4,rd(s->u,48,4));
L_1803fc2c3_6:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fc2c3_7:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fc2c3_8:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fc2c3_9:;
/* 1803fc2c9: cvtps2pd xmm3, xmm2 */
L_1803fc2c9_0:;
L_1803fc2c9_1:;
wr(s->u,60,8,rd(s->r,4736,8));
L_1803fc2c9_2:;
wr(s->r,4800,8,fb(fv(rd(s->u,60,4),4),8));
L_1803fc2c9_3:;
wr(s->r,4808,8,fb(fv(rd(s->u,64,4),4),8));
L_1803fc2c9_4:;
/* 1803fc2cc: mulsd xmm0, xmm0 */
L_1803fc2cc_0:;
L_1803fc2cc_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803fc2cc_2:;
/* 1803fc2d0: mulsd xmm3, xmm3 */
L_1803fc2d0_0:;
L_1803fc2d0_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803fc2d0_2:;
/* 1803fc2d4: addsd xmm0, xmm3 */
L_1803fc2d4_0:;
L_1803fc2d4_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803fc2d4_2:;
/* 1803fc2d8: call 0x180609a9c */
L_1803fc2d8_0:;
L_1803fc2d8_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc2d8_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc2dd)));
L_1803fc2d8_3:;
return (uint64_t)UINT64_C(0x180609a9c);
L_1803fc2d8_4:;
return UINT64_C(0x1803fc2dd);
}
uint64_t b_1803fc2bb(CPU*s){
/* 1803fc2bb: movss xmm1, dword ptr [rdi + rbx*8] */
L_1803fc2bb_0:;
L_1803fc2bb_1:;
wr(s->u,0,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803fc2bb_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803fc2bb_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fc2bb_4:;
wr(s->r,4672,4,rd(s->u,40,4));
L_1803fc2bb_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fc2bb_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fc2bb_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fc2bb_8:;
/* 1803fc2c0: cvtps2pd xmm0, xmm1 */
L_1803fc2c0_0:;
L_1803fc2c0_1:;
wr(s->u,44,8,rd(s->r,4672,8));
L_1803fc2c0_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,44,4),4),8));
L_1803fc2c0_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,48,4),4),8));
L_1803fc2c0_4:;
/* 1803fc2c3: movss xmm2, dword ptr [rdi + rbx*8 + 4] */
L_1803fc2c3_0:;
L_1803fc2c3_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,56,8)));
L_1803fc2c3_2:;
wr(s->u,24,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803fc2c3_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fc2c3_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fc2c3_5:;
wr(s->r,4736,4,rd(s->u,40,4));
L_1803fc2c3_6:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fc2c3_7:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fc2c3_8:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fc2c3_9:;
/* 1803fc2c9: cvtps2pd xmm3, xmm2 */
L_1803fc2c9_0:;
L_1803fc2c9_1:;
wr(s->u,44,8,rd(s->r,4736,8));
L_1803fc2c9_2:;
wr(s->r,4800,8,fb(fv(rd(s->u,44,4),4),8));
L_1803fc2c9_3:;
wr(s->r,4808,8,fb(fv(rd(s->u,48,4),4),8));
L_1803fc2c9_4:;
/* 1803fc2cc: mulsd xmm0, xmm0 */
L_1803fc2cc_0:;
L_1803fc2cc_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803fc2cc_2:;
/* 1803fc2d0: mulsd xmm3, xmm3 */
L_1803fc2d0_0:;
L_1803fc2d0_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803fc2d0_2:;
/* 1803fc2d4: addsd xmm0, xmm3 */
L_1803fc2d4_0:;
L_1803fc2d4_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803fc2d4_2:;
/* 1803fc2d8: call 0x180609a9c */
L_1803fc2d8_0:;
L_1803fc2d8_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc2d8_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc2dd)));
L_1803fc2d8_3:;
return (uint64_t)UINT64_C(0x180609a9c);
L_1803fc2d8_4:;
return UINT64_C(0x1803fc2dd);
}
uint64_t b_1803fc2dd(CPU*s){
/* 1803fc2dd: cvtsd2ss xmm0, xmm0 */
L_1803fc2dd_0:;
L_1803fc2dd_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,8),8),4));
L_1803fc2dd_2:;
/* 1803fc2e1: movss dword ptr [r12 + rbx*4], xmm0 */
L_1803fc2e1_0:;
L_1803fc2e1_1:;
wr(s->u,0,8,(rd(s->r,24,8)*((U)UINT64_C(0x4))));
L_1803fc2e1_2:;
wr(s->u,8,8,(rd(s->r,160,8)+rd(s->u,0,8)));
L_1803fc2e1_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fc2e1_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fc2e1_5:;
/* 1803fc2e7: add rbx, 1 */
L_1803fc2e7_0:;
L_1803fc2e7_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803fc2e7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x1)),8,0));
L_1803fc2e7_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x1))));
L_1803fc2e7_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc2e7_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803fc2e7_6:;
wr(s->u,21,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803fc2e7_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fc2e7_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fc2e7_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fc2e7_10:;
/* 1803fc2eb: cmp rbx, rsi */
L_1803fc2eb_0:;
L_1803fc2eb_1:;
wr(s->u,31,8,rd(s->r,48,8));
L_1803fc2eb_2:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->u,31,8)));
L_1803fc2eb_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->u,31,8),8,1));
L_1803fc2eb_4:;
wr(s->u,39,8,(rd(s->r,24,8)-rd(s->u,31,8)));
L_1803fc2eb_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc2eb_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fc2eb_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fc2eb_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fc2eb_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fc2eb_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fc2eb_11:;
/* 1803fc2ee: jl 0x1803fc2bb */
L_1803fc2ee_0:;
L_1803fc2ee_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc2ee_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fc2bb);}
L_1803fc2ee_3:;
return UINT64_C(0x1803fc2f0);
}
uint64_t b_1803fc2f0(CPU*s){
/* 1803fc2f0: mov rbx, qword ptr [rsp + 0x38] */
L_1803fc2f0_0:;
L_1803fc2f0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803fc2f0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fc2f0_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803fc2f0_4:;
/* 1803fc2f5: mov rsi, qword ptr [rsp + 0x30] */
L_1803fc2f5_0:;
L_1803fc2f5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fc2f5_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fc2f5_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803fc2f5_4:;
/* 1803fc2fa: mov rdi, qword ptr [rsp + 0x28] */
L_1803fc2fa_0:;
L_1803fc2fa_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fc2fa_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fc2fa_3:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803fc2fa_4:;
/* 1803fc2ff: mov r12, qword ptr [rsp + 0x20] */
L_1803fc2ff_0:;
L_1803fc2ff_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fc2ff_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fc2ff_3:;
wr(s->r,160,8,rd(s->u,8,8));
L_1803fc2ff_4:;
/* 1803fc304: xor eax, eax */
L_1803fc304_0:;
L_1803fc304_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc304_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc304_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fc304_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc304_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc304_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fc304_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fc304_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803fc304_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fc304_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fc304_11:;
/* 1803fc306: add rsp, 0x48 */
L_1803fc306_0:;
L_1803fc306_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc306_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fc306_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fc306_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc306_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc306_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc306_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803fc306_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fc306_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fc306_10:;
/* 1803fc30a: ret  */
L_1803fc30a_0:;
L_1803fc30a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc30a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc30a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc30a_4:;
return UINT64_C(0x1803fc30b);
}
uint64_t b_1803fc304(CPU*s){
/* 1803fc304: xor eax, eax */
L_1803fc304_0:;
L_1803fc304_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc304_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc304_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fc304_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc304_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc304_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fc304_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fc304_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fc304_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc304_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc304_11:;
/* 1803fc306: add rsp, 0x48 */
L_1803fc306_0:;
L_1803fc306_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc306_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fc306_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fc306_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc306_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc306_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc306_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc306_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc306_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc306_10:;
/* 1803fc30a: ret  */
L_1803fc30a_0:;
L_1803fc30a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc30a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc30a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc30a_4:;
return UINT64_C(0x1803fc30b);
}
uint64_t b_1803fc30b(CPU*s){
/* 1803fc30b: mov eax, 0xfffffffa */
L_1803fc30b_0:;
L_1803fc30b_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fc30b_2:;
/* 1803fc310: add rsp, 0x48 */
L_1803fc310_0:;
L_1803fc310_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc310_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fc310_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fc310_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc310_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc310_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc310_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc310_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc310_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc310_10:;
/* 1803fc314: ret  */
L_1803fc314_0:;
L_1803fc314_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc314_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc314_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc314_4:;
return UINT64_C(0x1803fc315);
}
uint64_t b_1803fc315(CPU*s){
/* 1803fc315: mov eax, 0xfffffff8 */
L_1803fc315_0:;
L_1803fc315_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fc315_2:;
/* 1803fc31a: add rsp, 0x48 */
L_1803fc31a_0:;
L_1803fc31a_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc31a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fc31a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fc31a_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc31a_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc31a_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc31a_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc31a_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc31a_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc31a_10:;
/* 1803fc31e: ret  */
L_1803fc31e_0:;
L_1803fc31e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc31e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc31e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc31e_4:;
return UINT64_C(0x1803fc31f);
}
uint64_t b_1803fc320(CPU*s){
/* 1803fc320: push r15 */
L_1803fc320_0:;
L_1803fc320_1:;
wr(s->u,0,8,rd(s->r,184,8));
L_1803fc320_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc320_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc320_4:;
/* 1803fc322: push r14 */
L_1803fc322_0:;
L_1803fc322_1:;
wr(s->u,0,8,rd(s->r,176,8));
L_1803fc322_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc322_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc322_4:;
/* 1803fc324: push r13 */
L_1803fc324_0:;
L_1803fc324_1:;
wr(s->u,0,8,rd(s->r,168,8));
L_1803fc324_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc324_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc324_4:;
/* 1803fc326: push r12 */
L_1803fc326_0:;
L_1803fc326_1:;
wr(s->u,0,8,rd(s->r,160,8));
L_1803fc326_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc326_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc326_4:;
/* 1803fc328: push rdi */
L_1803fc328_0:;
L_1803fc328_1:;
wr(s->u,0,8,rd(s->r,56,8));
L_1803fc328_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc328_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc328_4:;
/* 1803fc329: push rsi */
L_1803fc329_0:;
L_1803fc329_1:;
wr(s->u,0,8,rd(s->r,48,8));
L_1803fc329_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc329_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc329_4:;
/* 1803fc32a: push rbp */
L_1803fc32a_0:;
L_1803fc32a_1:;
wr(s->u,0,8,rd(s->r,40,8));
L_1803fc32a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc32a_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc32a_4:;
/* 1803fc32b: sub rsp, 0x30 */
L_1803fc32b_0:;
L_1803fc32b_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803fc32b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803fc32b_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803fc32b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc32b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc32b_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc32b_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fc32b_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fc32b_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fc32b_10:;
/* 1803fc32f: mov r15, r9 */
L_1803fc32f_0:;
L_1803fc32f_1:;
wr(s->r,184,8,rd(s->r,136,8));
L_1803fc32f_2:;
/* 1803fc332: mov r14, r8 */
L_1803fc332_0:;
L_1803fc332_1:;
wr(s->r,176,8,rd(s->r,128,8));
L_1803fc332_2:;
/* 1803fc335: mov r13, rdx */
L_1803fc335_0:;
L_1803fc335_1:;
wr(s->r,168,8,rd(s->r,16,8));
L_1803fc335_2:;
/* 1803fc338: mov r12, rcx */
L_1803fc338_0:;
L_1803fc338_1:;
wr(s->r,160,8,rd(s->r,8,8));
L_1803fc338_2:;
/* 1803fc33b: xor edi, edi */
L_1803fc33b_0:;
L_1803fc33b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc33b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc33b_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803fc33b_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fc33b_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc33b_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803fc33b_7:;
wr(s->u,8,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803fc33b_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803fc33b_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fc33b_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fc33b_11:;
/* 1803fc33d: test r14, r14 */
L_1803fc33d_0:;
L_1803fc33d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc33d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc33d_3:;
wr(s->u,18,8,(rd(s->r,176,8)&rd(s->r,176,8)));
L_1803fc33d_4:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc33d_5:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803fc33d_6:;
wr(s->u,8,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803fc33d_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fc33d_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fc33d_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fc33d_10:;
/* 1803fc340: je 0x1803fc58c */
L_1803fc340_0:;
L_1803fc340_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc58c);}
L_1803fc340_2:;
return UINT64_C(0x1803fc346);
}
uint64_t b_1803fc346(CPU*s){
/* 1803fc346: mov eax, dword ptr [r14] */
L_1803fc346_0:;
L_1803fc346_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fc346_2:;
wr(s->r,0,4,rd(s->u,0,4));
L_1803fc346_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc346_4:;
/* 1803fc349: cmp eax, 6 */
L_1803fc349_0:;
L_1803fc349_1:;
wr(s->u,10,4,rd(s->r,0,4));
L_1803fc349_2:;
wr(s->r,512,1,(rd(s->u,10,4)<((U)UINT64_C(0x6))));
L_1803fc349_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,10,4),((U)UINT64_C(0x6)),4,1));
L_1803fc349_4:;
wr(s->u,14,4,(rd(s->u,10,4)-((U)UINT64_C(0x6))));
L_1803fc349_5:;
wr(s->r,519,1,(sx(rd(s->u,14,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc349_6:;
wr(s->r,518,1,(rd(s->u,14,4)==((U)UINT64_C(0x0))));
L_1803fc349_7:;
wr(s->u,4,4,(rd(s->u,14,4)&((U)UINT64_C(0xff))));
L_1803fc349_8:;
wr(s->u,8,1,pop(rd(s->u,4,4),4));
L_1803fc349_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc349_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc349_11:;
/* 1803fc34c: je 0x1803fc363 */
L_1803fc34c_0:;
L_1803fc34c_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc363);}
L_1803fc34c_2:;
return UINT64_C(0x1803fc34e);
}
uint64_t b_1803fc34e(CPU*s){
/* 1803fc34e: mov eax, 0xffffffef */
L_1803fc34e_0:;
L_1803fc34e_1:;
wr(s->r,0,8,((U)UINT64_C(0xffffffef)));
L_1803fc34e_2:;
/* 1803fc353: add rsp, 0x30 */
L_1803fc353_0:;
L_1803fc353_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc353_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803fc353_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803fc353_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc353_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc353_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc353_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc353_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc353_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc353_10:;
/* 1803fc357: pop rbp */
L_1803fc357_0:;
L_1803fc357_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc357_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc357_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc357_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fc357_5:;
/* 1803fc358: pop rsi */
L_1803fc358_0:;
L_1803fc358_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc358_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc358_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc358_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fc358_5:;
/* 1803fc359: pop rdi */
L_1803fc359_0:;
L_1803fc359_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc359_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc359_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc359_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fc359_5:;
/* 1803fc35a: pop r12 */
L_1803fc35a_0:;
L_1803fc35a_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc35a_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc35a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc35a_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fc35a_5:;
/* 1803fc35c: pop r13 */
L_1803fc35c_0:;
L_1803fc35c_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc35c_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc35c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc35c_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fc35c_5:;
/* 1803fc35e: pop r14 */
L_1803fc35e_0:;
L_1803fc35e_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc35e_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc35e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc35e_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fc35e_5:;
/* 1803fc360: pop r15 */
L_1803fc360_0:;
L_1803fc360_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc360_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc360_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc360_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fc360_5:;
/* 1803fc362: ret  */
L_1803fc362_0:;
L_1803fc362_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc362_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc362_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc362_4:;
return UINT64_C(0x1803fc363);
}
uint64_t b_1803fc363(CPU*s){
/* 1803fc363: test r12, r12 */
L_1803fc363_0:;
L_1803fc363_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc363_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc363_3:;
wr(s->u,10,8,(rd(s->r,160,8)&rd(s->r,160,8)));
L_1803fc363_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc363_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc363_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc363_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc363_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc363_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc363_10:;
/* 1803fc366: je 0x1803fc58c */
L_1803fc366_0:;
L_1803fc366_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc58c);}
L_1803fc366_2:;
return UINT64_C(0x1803fc36c);
}
uint64_t b_1803fc36c(CPU*s){
/* 1803fc36c: test r13, r13 */
L_1803fc36c_0:;
L_1803fc36c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc36c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc36c_3:;
wr(s->u,10,8,(rd(s->r,168,8)&rd(s->r,168,8)));
L_1803fc36c_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc36c_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc36c_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc36c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc36c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc36c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc36c_10:;
/* 1803fc36f: je 0x1803fc58c */
L_1803fc36f_0:;
L_1803fc36f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc58c);}
L_1803fc36f_2:;
return UINT64_C(0x1803fc375);
}
uint64_t b_1803fc375(CPU*s){
/* 1803fc375: mov esi, dword ptr [r14 + 4] */
L_1803fc375_0:;
L_1803fc375_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fc375_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc375_3:;
wr(s->r,48,4,rd(s->u,8,4));
L_1803fc375_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fc375_5:;
/* 1803fc379: cmp esi, 4 */
L_1803fc379_0:;
L_1803fc379_1:;
wr(s->u,21,4,rd(s->r,48,4));
L_1803fc379_2:;
wr(s->r,512,1,(rd(s->u,21,4)<((U)UINT64_C(0x4))));
L_1803fc379_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,21,4),((U)UINT64_C(0x4)),4,1));
L_1803fc379_4:;
wr(s->u,25,4,(rd(s->u,21,4)-((U)UINT64_C(0x4))));
L_1803fc379_5:;
wr(s->r,519,1,(sx(rd(s->u,25,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc379_6:;
wr(s->r,518,1,(rd(s->u,25,4)==((U)UINT64_C(0x0))));
L_1803fc379_7:;
wr(s->u,15,4,(rd(s->u,25,4)&((U)UINT64_C(0xff))));
L_1803fc379_8:;
wr(s->u,19,1,pop(rd(s->u,15,4),4));
L_1803fc379_9:;
wr(s->u,20,1,(rd(s->u,19,1)&((U)UINT64_C(0x1))));
L_1803fc379_10:;
wr(s->r,514,1,(rd(s->u,20,1)==((U)UINT64_C(0x0))));
L_1803fc379_11:;
/* 1803fc37c: jg 0x1803fc3d0 */
L_1803fc37c_0:;
L_1803fc37c_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803fc37c_2:;
wr(s->u,13,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fc37c_3:;
wr(s->u,14,1,((rd(s->u,12,1)!=0)&&(rd(s->u,13,1)!=0)));
L_1803fc37c_4:;
if(rd(s->u,14,1)){return UINT64_C(0x1803fc3d0);}
L_1803fc37c_5:;
return UINT64_C(0x1803fc37e);
}
uint64_t b_1803fc37e(CPU*s){
/* 1803fc37e: mov eax, dword ptr [r14 + 8] */
L_1803fc37e_0:;
L_1803fc37e_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803fc37e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc37e_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803fc37e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc37e_5:;
/* 1803fc382: movsxd rbp, esi */
L_1803fc382_0:;
L_1803fc382_1:;
wr(s->r,40,8,(U)sx(rd(s->r,48,4),4));
L_1803fc382_2:;
/* 1803fc385: test eax, eax */
L_1803fc385_0:;
L_1803fc385_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc385_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc385_3:;
wr(s->u,18,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803fc385_4:;
wr(s->r,519,1,(sx(rd(s->u,18,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc385_5:;
wr(s->r,518,1,(rd(s->u,18,4)==((U)UINT64_C(0x0))));
L_1803fc385_6:;
wr(s->u,12,4,(rd(s->u,18,4)&((U)UINT64_C(0xff))));
L_1803fc385_7:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803fc385_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fc385_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fc385_10:;
/* 1803fc387: je 0x1803fc3aa */
L_1803fc387_0:;
L_1803fc387_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc3aa);}
L_1803fc387_2:;
return UINT64_C(0x1803fc389);
}
uint64_t b_1803fc389(CPU*s){
/* 1803fc389: movss xmm2, dword ptr [r14 + 0x10] */
L_1803fc389_0:;
L_1803fc389_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x10))));
L_1803fc389_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc389_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803fc389_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fc389_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fc389_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fc389_7:;
/* 1803fc38f: mov rcx, r12 */
L_1803fc38f_0:;
L_1803fc38f_1:;
wr(s->r,8,8,rd(s->r,160,8));
L_1803fc38f_2:;
/* 1803fc392: mov rdx, r13 */
L_1803fc392_0:;
L_1803fc392_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803fc392_2:;
/* 1803fc395: movd r8d, xmm2 */
L_1803fc395_0:;
L_1803fc395_1:;
wr(s->r,128,4,(rd(s->r,4736,16) >> (((U)UINT64_C(0x0))*8)));
L_1803fc395_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fc395_3:;
/* 1803fc39a: lea rax, [rip - 0x3fc3a1] */
L_1803fc39a_0:;
L_1803fc39a_1:;
wr(s->r,0,8,((U)UINT64_C(0x180000000)));
L_1803fc39a_2:;
/* 1803fc3a1: call qword ptr [rax + rbp*8 + 0x80e4c8] */
L_1803fc3a1_0:;
L_1803fc3a1_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80e4c8))+rd(s->r,0,8)));
L_1803fc3a1_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x8))));
L_1803fc3a1_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803fc3a1_4:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803fc3a1_5:;
wr(s->u,44,8,rd(s->u,36,8));
L_1803fc3a1_6:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc3a1_7:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc3a8)));
L_1803fc3a1_8:;
return (uint64_t)rd(s->u,44,8);
L_1803fc3a1_9:;
return UINT64_C(0x1803fc3a8);
}
uint64_t b_1803fc3a8(CPU*s){
/* 1803fc3a8: jmp 0x1803fc3be */
L_1803fc3a8_0:;
L_1803fc3a8_1:;
return UINT64_C(0x1803fc3be);
L_1803fc3a8_2:;
return UINT64_C(0x1803fc3aa);
}
uint64_t b_1803fc3aa(CPU*s){
/* 1803fc3aa: mov rcx, r12 */
L_1803fc3aa_0:;
L_1803fc3aa_1:;
wr(s->r,8,8,rd(s->r,160,8));
L_1803fc3aa_2:;
/* 1803fc3ad: mov rdx, r13 */
L_1803fc3ad_0:;
L_1803fc3ad_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803fc3ad_2:;
/* 1803fc3b0: lea rax, [rip - 0x3fc3b7] */
L_1803fc3b0_0:;
L_1803fc3b0_1:;
wr(s->r,0,8,((U)UINT64_C(0x180000000)));
L_1803fc3b0_2:;
/* 1803fc3b7: call qword ptr [rax + rbp*8 + 0x80e498] */
L_1803fc3b7_0:;
L_1803fc3b7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x80e498))+rd(s->r,0,8)));
L_1803fc3b7_2:;
wr(s->u,8,8,(rd(s->r,40,8)*((U)UINT64_C(0x8))));
L_1803fc3b7_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803fc3b7_4:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803fc3b7_5:;
wr(s->u,32,8,rd(s->u,24,8));
L_1803fc3b7_6:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc3b7_7:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc3be)));
L_1803fc3b7_8:;
return (uint64_t)rd(s->u,32,8);
L_1803fc3b7_9:;
return UINT64_C(0x1803fc3be);
}
uint64_t b_1803fc3be(CPU*s){
/* 1803fc3be: xor eax, eax */
L_1803fc3be_0:;
L_1803fc3be_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc3be_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc3be_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fc3be_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc3be_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc3be_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fc3be_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fc3be_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fc3be_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc3be_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc3be_11:;
/* 1803fc3c0: add rsp, 0x30 */
L_1803fc3c0_0:;
L_1803fc3c0_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc3c0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803fc3c0_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803fc3c0_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc3c0_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc3c0_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc3c0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc3c0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc3c0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc3c0_10:;
/* 1803fc3c4: pop rbp */
L_1803fc3c4_0:;
L_1803fc3c4_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc3c4_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc3c4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc3c4_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fc3c4_5:;
/* 1803fc3c5: pop rsi */
L_1803fc3c5_0:;
L_1803fc3c5_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc3c5_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc3c5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc3c5_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fc3c5_5:;
/* 1803fc3c6: pop rdi */
L_1803fc3c6_0:;
L_1803fc3c6_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc3c6_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc3c6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc3c6_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fc3c6_5:;
/* 1803fc3c7: pop r12 */
L_1803fc3c7_0:;
L_1803fc3c7_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc3c7_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc3c7_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc3c7_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fc3c7_5:;
/* 1803fc3c9: pop r13 */
L_1803fc3c9_0:;
L_1803fc3c9_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc3c9_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc3c9_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc3c9_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fc3c9_5:;
/* 1803fc3cb: pop r14 */
L_1803fc3cb_0:;
L_1803fc3cb_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc3cb_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc3cb_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc3cb_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fc3cb_5:;
/* 1803fc3cd: pop r15 */
L_1803fc3cd_0:;
L_1803fc3cd_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc3cd_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc3cd_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc3cd_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fc3cd_5:;
/* 1803fc3cf: ret  */
L_1803fc3cf_0:;
L_1803fc3cf_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc3cf_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc3cf_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc3cf_4:;
return UINT64_C(0x1803fc3d0);
}
uint64_t b_1803fc3d0(CPU*s){
/* 1803fc3d0: mov ecx, dword ptr [r14 + 0x18] */
L_1803fc3d0_0:;
L_1803fc3d0_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x18))));
L_1803fc3d0_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc3d0_3:;
wr(s->r,8,4,rd(s->u,8,4));
L_1803fc3d0_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fc3d0_5:;
/* 1803fc3d4: test ecx, ecx */
L_1803fc3d4_0:;
L_1803fc3d4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc3d4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc3d4_3:;
wr(s->u,20,4,(rd(s->r,8,4)&rd(s->r,8,4)));
L_1803fc3d4_4:;
wr(s->r,519,1,(sx(rd(s->u,20,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc3d4_5:;
wr(s->r,518,1,(rd(s->u,20,4)==((U)UINT64_C(0x0))));
L_1803fc3d4_6:;
wr(s->u,14,4,(rd(s->u,20,4)&((U)UINT64_C(0xff))));
L_1803fc3d4_7:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803fc3d4_8:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803fc3d4_9:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803fc3d4_10:;
/* 1803fc3d6: jle 0x1803fc3f2 */
L_1803fc3d6_0:;
L_1803fc3d6_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc3d6_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803fc3d6_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803fc3f2);}
L_1803fc3d6_4:;
return UINT64_C(0x1803fc3d8);
}
uint64_t b_1803fc3d8(CPU*s){
/* 1803fc3d8: test r15, r15 */
L_1803fc3d8_0:;
L_1803fc3d8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc3d8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc3d8_3:;
wr(s->u,10,8,(rd(s->r,184,8)&rd(s->r,184,8)));
L_1803fc3d8_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc3d8_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc3d8_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc3d8_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc3d8_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc3d8_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc3d8_10:;
/* 1803fc3db: je 0x1803fc566 */
L_1803fc3db_0:;
L_1803fc3db_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc566);}
L_1803fc3db_2:;
return UINT64_C(0x1803fc3e1);
}
uint64_t b_1803fc3e1(CPU*s){
/* 1803fc3e1: mov rdi, r15 */
L_1803fc3e1_0:;
L_1803fc3e1_1:;
wr(s->r,56,8,rd(s->r,184,8));
L_1803fc3e1_2:;
/* 1803fc3e4: and rdi, 0x1f */
L_1803fc3e4_0:;
L_1803fc3e4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc3e4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc3e4_3:;
wr(s->r,56,8,(rd(s->r,56,8)&((U)UINT64_C(0x1f))));
L_1803fc3e4_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc3e4_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803fc3e4_6:;
wr(s->u,16,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803fc3e4_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803fc3e4_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fc3e4_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fc3e4_10:;
/* 1803fc3e8: neg rdi */
L_1803fc3e8_0:;
L_1803fc3e8_1:;
wr(s->r,512,1,(rd(s->r,56,8)!=((U)UINT64_C(0x0))));
L_1803fc3e8_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,56,8),8,1));
L_1803fc3e8_3:;
wr(s->r,56,8,(-rd(s->r,56,8)));
L_1803fc3e8_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc3e8_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803fc3e8_6:;
wr(s->u,16,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803fc3e8_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803fc3e8_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fc3e8_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fc3e8_10:;
/* 1803fc3eb: and rdi, 0x1f */
L_1803fc3eb_0:;
L_1803fc3eb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc3eb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc3eb_3:;
wr(s->r,56,8,(rd(s->r,56,8)&((U)UINT64_C(0x1f))));
L_1803fc3eb_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc3eb_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803fc3eb_6:;
wr(s->u,16,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803fc3eb_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803fc3eb_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fc3eb_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fc3eb_10:;
/* 1803fc3ef: add rdi, r15 */
L_1803fc3ef_0:;
L_1803fc3ef_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+rd(s->r,184,8))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803fc3ef_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),rd(s->r,184,8),8,0));
L_1803fc3ef_3:;
wr(s->r,56,8,(rd(s->r,56,8)+rd(s->r,184,8)));
L_1803fc3ef_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc3ef_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803fc3ef_6:;
wr(s->u,16,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803fc3ef_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803fc3ef_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fc3ef_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fc3ef_10:;
/* 1803fc3f2: lea r9d, [rsi - 1] */
L_1803fc3f2_0:;
L_1803fc3f2_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fc3f2_2:;
wr(s->r,136,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fc3f2_3:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fc3f2_4:;
/* 1803fc3f6: mov ecx, r9d */
L_1803fc3f6_0:;
L_1803fc3f6_1:;
wr(s->r,8,4,rd(s->r,136,4));
L_1803fc3f6_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fc3f6_3:;
/* 1803fc3f9: mov ebp, 1 */
L_1803fc3f9_0:;
L_1803fc3f9_1:;
wr(s->r,40,8,((U)UINT64_C(0x1)));
L_1803fc3f9_2:;
/* 1803fc3fe: shl ebp, cl */
L_1803fc3fe_0:;
L_1803fc3fe_1:;
wr(s->u,63,1,(rd(s->r,8,1)&((U)UINT64_C(0x1f))));
L_1803fc3fe_2:;
wr(s->u,64,4,rd(s->r,40,4));
L_1803fc3fe_3:;
wr(s->r,40,4,((rd(s->u,63,1)>=32)?0:(rd(s->r,40,4)<<rd(s->u,63,1))));
L_1803fc3fe_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fc3fe_5:;
wr(s->u,45,1,(rd(s->u,63,1)==((U)UINT64_C(0x0))));
L_1803fc3fe_6:;
wr(s->u,46,1,(rd(s->u,63,1)-((U)UINT64_C(0x1))));
L_1803fc3fe_7:;
wr(s->u,47,4,((rd(s->u,46,1)>=32)?0:(rd(s->u,64,4)<<rd(s->u,46,1))));
L_1803fc3fe_8:;
wr(s->u,51,1,(sx(rd(s->u,47,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc3fe_9:;
wr(s->u,0,1,rd(s->u,45,1));
L_1803fc3fe_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fc3fe_11:;
wr(s->u,2,1,(!rd(s->u,45,1)));
L_1803fc3fe_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fc3fe_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,51,1)));
L_1803fc3fe_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fc3fe_15:;
wr(s->u,52,1,(rd(s->u,63,1)==((U)UINT64_C(0x1))));
L_1803fc3fe_16:;
wr(s->u,53,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc3fe_17:;
wr(s->u,54,1,(rd(s->r,512,1)^rd(s->u,53,1)));
L_1803fc3fe_18:;
wr(s->u,0,1,rd(s->u,52,1));
L_1803fc3fe_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,54,1)));
L_1803fc3fe_20:;
wr(s->u,2,1,(!rd(s->u,52,1)));
L_1803fc3fe_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fc3fe_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fc3fe_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fc3fe_24:;
wr(s->u,26,1,(rd(s->u,63,1)!=((U)UINT64_C(0x0))));
L_1803fc3fe_25:;
wr(s->u,27,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc3fe_26:;
wr(s->u,28,1,(!rd(s->u,26,1)));
L_1803fc3fe_27:;
wr(s->u,29,1,(rd(s->u,28,1)&rd(s->r,519,1)));
L_1803fc3fe_28:;
wr(s->u,30,1,(rd(s->u,26,1)&rd(s->u,27,1)));
L_1803fc3fe_29:;
wr(s->r,519,1,(rd(s->u,29,1)|rd(s->u,30,1)));
L_1803fc3fe_30:;
wr(s->u,31,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803fc3fe_31:;
wr(s->u,32,1,(!rd(s->u,26,1)));
L_1803fc3fe_32:;
wr(s->u,33,1,(rd(s->u,32,1)&rd(s->r,518,1)));
L_1803fc3fe_33:;
wr(s->u,34,1,(rd(s->u,26,1)&rd(s->u,31,1)));
L_1803fc3fe_34:;
wr(s->r,518,1,(rd(s->u,33,1)|rd(s->u,34,1)));
L_1803fc3fe_35:;
wr(s->u,35,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803fc3fe_36:;
wr(s->u,39,1,pop(rd(s->u,35,4),4));
L_1803fc3fe_37:;
wr(s->u,40,1,(rd(s->u,39,1)&((U)UINT64_C(0x1))));
L_1803fc3fe_38:;
wr(s->u,41,1,(rd(s->u,40,1)==((U)UINT64_C(0x0))));
L_1803fc3fe_39:;
wr(s->u,42,1,(!rd(s->u,26,1)));
L_1803fc3fe_40:;
wr(s->u,43,1,(rd(s->u,42,1)&rd(s->r,514,1)));
L_1803fc3fe_41:;
wr(s->u,44,1,(rd(s->u,26,1)&rd(s->u,41,1)));
L_1803fc3fe_42:;
wr(s->r,514,1,(rd(s->u,43,1)|rd(s->u,44,1)));
L_1803fc3fe_43:;
/* 1803fc400: cmp r9d, 5 */
L_1803fc400_0:;
L_1803fc400_1:;
wr(s->u,55,4,rd(s->r,136,4));
L_1803fc400_2:;
wr(s->r,512,1,(rd(s->u,55,4)<((U)UINT64_C(0x5))));
L_1803fc400_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,55,4),((U)UINT64_C(0x5)),4,1));
L_1803fc400_4:;
wr(s->u,59,4,(rd(s->u,55,4)-((U)UINT64_C(0x5))));
L_1803fc400_5:;
wr(s->r,519,1,(sx(rd(s->u,59,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc400_6:;
wr(s->r,518,1,(rd(s->u,59,4)==((U)UINT64_C(0x0))));
L_1803fc400_7:;
wr(s->u,16,4,(rd(s->u,59,4)&((U)UINT64_C(0xff))));
L_1803fc400_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803fc400_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fc400_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fc400_11:;
/* 1803fc404: jg 0x1803fc453 */
L_1803fc404_0:;
L_1803fc404_1:;
wr(s->u,13,1,(!rd(s->r,518,1)));
L_1803fc404_2:;
wr(s->u,14,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fc404_3:;
wr(s->u,15,1,((rd(s->u,13,1)!=0)&&(rd(s->u,14,1)!=0)));
L_1803fc404_4:;
if(rd(s->u,15,1)){return UINT64_C(0x1803fc453);}
L_1803fc404_5:;
return UINT64_C(0x1803fc406);
}
uint64_t b_1803fc3f2(CPU*s){
/* 1803fc3f2: lea r9d, [rsi - 1] */
L_1803fc3f2_0:;
L_1803fc3f2_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fc3f2_2:;
wr(s->r,136,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fc3f2_3:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fc3f2_4:;
/* 1803fc3f6: mov ecx, r9d */
L_1803fc3f6_0:;
L_1803fc3f6_1:;
wr(s->r,8,4,rd(s->r,136,4));
L_1803fc3f6_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fc3f6_3:;
/* 1803fc3f9: mov ebp, 1 */
L_1803fc3f9_0:;
L_1803fc3f9_1:;
wr(s->r,40,8,((U)UINT64_C(0x1)));
L_1803fc3f9_2:;
/* 1803fc3fe: shl ebp, cl */
L_1803fc3fe_0:;
L_1803fc3fe_1:;
wr(s->u,59,1,(rd(s->r,8,1)&((U)UINT64_C(0x1f))));
L_1803fc3fe_2:;
wr(s->u,60,4,rd(s->r,40,4));
L_1803fc3fe_3:;
wr(s->r,40,4,((rd(s->u,59,1)>=32)?0:(rd(s->r,40,4)<<rd(s->u,59,1))));
L_1803fc3fe_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fc3fe_5:;
wr(s->u,41,1,(rd(s->u,59,1)==((U)UINT64_C(0x0))));
L_1803fc3fe_6:;
wr(s->u,42,1,(rd(s->u,59,1)-((U)UINT64_C(0x1))));
L_1803fc3fe_7:;
wr(s->u,43,4,((rd(s->u,42,1)>=32)?0:(rd(s->u,60,4)<<rd(s->u,42,1))));
L_1803fc3fe_8:;
wr(s->u,47,1,(sx(rd(s->u,43,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc3fe_9:;
wr(s->u,0,1,rd(s->u,41,1));
L_1803fc3fe_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fc3fe_11:;
wr(s->u,2,1,(!rd(s->u,41,1)));
L_1803fc3fe_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fc3fe_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,47,1)));
L_1803fc3fe_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fc3fe_15:;
wr(s->u,48,1,(rd(s->u,59,1)==((U)UINT64_C(0x1))));
L_1803fc3fe_16:;
wr(s->u,49,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc3fe_17:;
wr(s->u,50,1,(rd(s->r,512,1)^rd(s->u,49,1)));
L_1803fc3fe_18:;
wr(s->u,0,1,rd(s->u,48,1));
L_1803fc3fe_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,50,1)));
L_1803fc3fe_20:;
wr(s->u,2,1,(!rd(s->u,48,1)));
L_1803fc3fe_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fc3fe_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fc3fe_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fc3fe_24:;
wr(s->u,22,1,(rd(s->u,59,1)!=((U)UINT64_C(0x0))));
L_1803fc3fe_25:;
wr(s->u,23,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc3fe_26:;
wr(s->u,24,1,(!rd(s->u,22,1)));
L_1803fc3fe_27:;
wr(s->u,25,1,(rd(s->u,24,1)&rd(s->r,519,1)));
L_1803fc3fe_28:;
wr(s->u,26,1,(rd(s->u,22,1)&rd(s->u,23,1)));
L_1803fc3fe_29:;
wr(s->r,519,1,(rd(s->u,25,1)|rd(s->u,26,1)));
L_1803fc3fe_30:;
wr(s->u,27,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803fc3fe_31:;
wr(s->u,28,1,(!rd(s->u,22,1)));
L_1803fc3fe_32:;
wr(s->u,29,1,(rd(s->u,28,1)&rd(s->r,518,1)));
L_1803fc3fe_33:;
wr(s->u,30,1,(rd(s->u,22,1)&rd(s->u,27,1)));
L_1803fc3fe_34:;
wr(s->r,518,1,(rd(s->u,29,1)|rd(s->u,30,1)));
L_1803fc3fe_35:;
wr(s->u,31,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803fc3fe_36:;
wr(s->u,35,1,pop(rd(s->u,31,4),4));
L_1803fc3fe_37:;
wr(s->u,36,1,(rd(s->u,35,1)&((U)UINT64_C(0x1))));
L_1803fc3fe_38:;
wr(s->u,37,1,(rd(s->u,36,1)==((U)UINT64_C(0x0))));
L_1803fc3fe_39:;
wr(s->u,38,1,(!rd(s->u,22,1)));
L_1803fc3fe_40:;
wr(s->u,39,1,(rd(s->u,38,1)&rd(s->r,514,1)));
L_1803fc3fe_41:;
wr(s->u,40,1,(rd(s->u,22,1)&rd(s->u,37,1)));
L_1803fc3fe_42:;
wr(s->r,514,1,(rd(s->u,39,1)|rd(s->u,40,1)));
L_1803fc3fe_43:;
/* 1803fc400: cmp r9d, 5 */
L_1803fc400_0:;
L_1803fc400_1:;
wr(s->u,51,4,rd(s->r,136,4));
L_1803fc400_2:;
wr(s->r,512,1,(rd(s->u,51,4)<((U)UINT64_C(0x5))));
L_1803fc400_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,51,4),((U)UINT64_C(0x5)),4,1));
L_1803fc400_4:;
wr(s->u,55,4,(rd(s->u,51,4)-((U)UINT64_C(0x5))));
L_1803fc400_5:;
wr(s->r,519,1,(sx(rd(s->u,55,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc400_6:;
wr(s->r,518,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803fc400_7:;
wr(s->u,16,4,(rd(s->u,55,4)&((U)UINT64_C(0xff))));
L_1803fc400_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803fc400_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803fc400_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803fc400_11:;
/* 1803fc404: jg 0x1803fc453 */
L_1803fc404_0:;
L_1803fc404_1:;
wr(s->u,13,1,(!rd(s->r,518,1)));
L_1803fc404_2:;
wr(s->u,14,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fc404_3:;
wr(s->u,15,1,((rd(s->u,13,1)!=0)&&(rd(s->u,14,1)!=0)));
L_1803fc404_4:;
if(rd(s->u,15,1)){return UINT64_C(0x1803fc453);}
L_1803fc404_5:;
return UINT64_C(0x1803fc406);
}
uint64_t b_1803fc406(CPU*s){
/* 1803fc406: mov eax, dword ptr [r14 + 8] */
L_1803fc406_0:;
L_1803fc406_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803fc406_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc406_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803fc406_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc406_5:;
/* 1803fc40a: test eax, eax */
L_1803fc40a_0:;
L_1803fc40a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc40a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc40a_3:;
wr(s->u,18,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803fc40a_4:;
wr(s->r,519,1,(sx(rd(s->u,18,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc40a_5:;
wr(s->r,518,1,(rd(s->u,18,4)==((U)UINT64_C(0x0))));
L_1803fc40a_6:;
wr(s->u,12,4,(rd(s->u,18,4)&((U)UINT64_C(0xff))));
L_1803fc40a_7:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803fc40a_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fc40a_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fc40a_10:;
/* 1803fc40c: je 0x1803fc436 */
L_1803fc40c_0:;
L_1803fc40c_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc436);}
L_1803fc40c_2:;
return UINT64_C(0x1803fc40e);
}
uint64_t b_1803fc40e(CPU*s){
/* 1803fc40e: movss xmm2, dword ptr [r14 + 0x10] */
L_1803fc40e_0:;
L_1803fc40e_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x10))));
L_1803fc40e_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc40e_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803fc40e_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fc40e_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fc40e_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fc40e_7:;
/* 1803fc414: movsxd rax, esi */
L_1803fc414_0:;
L_1803fc414_1:;
wr(s->r,0,8,(U)sx(rd(s->r,48,4),4));
L_1803fc414_2:;
/* 1803fc417: mov rcx, r12 */
L_1803fc417_0:;
L_1803fc417_1:;
wr(s->r,8,8,rd(s->r,160,8));
L_1803fc417_2:;
/* 1803fc41a: mov rdx, r13 */
L_1803fc41a_0:;
L_1803fc41a_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803fc41a_2:;
/* 1803fc41d: movd r8d, xmm2 */
L_1803fc41d_0:;
L_1803fc41d_1:;
wr(s->r,128,4,(rd(s->r,4736,16) >> (((U)UINT64_C(0x0))*8)));
L_1803fc41d_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fc41d_3:;
/* 1803fc422: lea r12, [rip - 0x3fc429] */
L_1803fc422_0:;
L_1803fc422_1:;
wr(s->r,160,8,((U)UINT64_C(0x180000000)));
L_1803fc422_2:;
/* 1803fc429: call qword ptr [r12 + rax*8 + 0x80e520] */
L_1803fc429_0:;
L_1803fc429_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80e520))+rd(s->r,160,8)));
L_1803fc429_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803fc429_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803fc429_4:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803fc429_5:;
wr(s->u,44,8,rd(s->u,36,8));
L_1803fc429_6:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc429_7:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc431)));
L_1803fc429_8:;
return (uint64_t)rd(s->u,44,8);
L_1803fc429_9:;
return UINT64_C(0x1803fc431);
}
uint64_t b_1803fc431(CPU*s){
/* 1803fc431: jmp 0x1803fc4f3 */
L_1803fc431_0:;
L_1803fc431_1:;
return UINT64_C(0x1803fc4f3);
L_1803fc431_2:;
return UINT64_C(0x1803fc436);
}
uint64_t b_1803fc436(CPU*s){
/* 1803fc436: movsxd rax, esi */
L_1803fc436_0:;
L_1803fc436_1:;
wr(s->r,0,8,(U)sx(rd(s->r,48,4),4));
L_1803fc436_2:;
/* 1803fc439: mov rcx, r12 */
L_1803fc439_0:;
L_1803fc439_1:;
wr(s->r,8,8,rd(s->r,160,8));
L_1803fc439_2:;
/* 1803fc43c: mov rdx, r13 */
L_1803fc43c_0:;
L_1803fc43c_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803fc43c_2:;
/* 1803fc43f: lea r12, [rip - 0x3fc446] */
L_1803fc43f_0:;
L_1803fc43f_1:;
wr(s->r,160,8,((U)UINT64_C(0x180000000)));
L_1803fc43f_2:;
/* 1803fc446: call qword ptr [r12 + rax*8 + 0x80e4f0] */
L_1803fc446_0:;
L_1803fc446_1:;
wr(s->u,0,8,(((U)UINT64_C(0x80e4f0))+rd(s->r,160,8)));
L_1803fc446_2:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803fc446_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803fc446_4:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803fc446_5:;
wr(s->u,32,8,rd(s->u,24,8));
L_1803fc446_6:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc446_7:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc44e)));
L_1803fc446_8:;
return (uint64_t)rd(s->u,32,8);
L_1803fc446_9:;
return UINT64_C(0x1803fc44e);
}
uint64_t b_1803fc44e(CPU*s){
/* 1803fc44e: jmp 0x1803fc4f3 */
L_1803fc44e_0:;
L_1803fc44e_1:;
return UINT64_C(0x1803fc4f3);
L_1803fc44e_2:;
return UINT64_C(0x1803fc453);
}
uint64_t b_1803fc453(CPU*s){
/* 1803fc453: cmp r9d, 0xf */
L_1803fc453_0:;
L_1803fc453_1:;
wr(s->u,8,4,rd(s->r,136,4));
L_1803fc453_2:;
wr(s->r,512,1,(rd(s->u,8,4)<((U)UINT64_C(0xf))));
L_1803fc453_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),((U)UINT64_C(0xf)),4,1));
L_1803fc453_4:;
wr(s->u,12,4,(rd(s->u,8,4)-((U)UINT64_C(0xf))));
L_1803fc453_5:;
wr(s->r,519,1,(sx(rd(s->u,12,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc453_6:;
wr(s->r,518,1,(rd(s->u,12,4)==((U)UINT64_C(0x0))));
L_1803fc453_7:;
wr(s->u,2,4,(rd(s->u,12,4)&((U)UINT64_C(0xff))));
L_1803fc453_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fc453_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fc453_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fc453_11:;
/* 1803fc457: jle 0x1803fc4b2 */
L_1803fc457_0:;
L_1803fc457_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc457_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fc457_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fc4b2);}
L_1803fc457_4:;
return UINT64_C(0x1803fc459);
}
uint64_t b_1803fc459(CPU*s){
/* 1803fc459: cmp r9d, 0x10 */
L_1803fc459_0:;
L_1803fc459_1:;
wr(s->u,9,4,rd(s->r,136,4));
L_1803fc459_2:;
wr(s->r,512,1,(rd(s->u,9,4)<((U)UINT64_C(0x10))));
L_1803fc459_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,9,4),((U)UINT64_C(0x10)),4,1));
L_1803fc459_4:;
wr(s->u,13,4,(rd(s->u,9,4)-((U)UINT64_C(0x10))));
L_1803fc459_5:;
wr(s->r,519,1,(sx(rd(s->u,13,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc459_6:;
wr(s->r,518,1,(rd(s->u,13,4)==((U)UINT64_C(0x0))));
L_1803fc459_7:;
wr(s->u,3,4,(rd(s->u,13,4)&((U)UINT64_C(0xff))));
L_1803fc459_8:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fc459_9:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fc459_10:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fc459_11:;
/* 1803fc45d: jg 0x1803fc49d */
L_1803fc45d_0:;
L_1803fc45d_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fc45d_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fc45d_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fc45d_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fc49d);}
L_1803fc45d_5:;
return UINT64_C(0x1803fc45f);
}
uint64_t b_1803fc45f(CPU*s){
/* 1803fc45f: cmp r12, r13 */
L_1803fc45f_0:;
L_1803fc45f_1:;
wr(s->u,10,8,rd(s->r,168,8));
L_1803fc45f_2:;
wr(s->r,512,1,(rd(s->r,160,8)<rd(s->u,10,8)));
L_1803fc45f_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),rd(s->u,10,8),8,1));
L_1803fc45f_4:;
wr(s->u,18,8,(rd(s->r,160,8)-rd(s->u,10,8)));
L_1803fc45f_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc45f_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803fc45f_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803fc45f_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc45f_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc45f_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc45f_11:;
/* 1803fc462: je 0x1803fc549 */
L_1803fc462_0:;
L_1803fc462_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc549);}
L_1803fc462_2:;
return UINT64_C(0x1803fc468);
}
uint64_t b_1803fc468(CPU*s){
/* 1803fc468: mov r9, qword ptr [r14 + 0x28] */
L_1803fc468_0:;
L_1803fc468_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x28))));
L_1803fc468_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fc468_3:;
wr(s->r,136,8,rd(s->u,8,8));
L_1803fc468_4:;
/* 1803fc46c: mov rcx, r12 */
L_1803fc46c_0:;
L_1803fc46c_1:;
wr(s->r,8,8,rd(s->r,160,8));
L_1803fc46c_2:;
/* 1803fc46f: mov rdx, r13 */
L_1803fc46f_0:;
L_1803fc46f_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803fc46f_2:;
/* 1803fc472: mov r8d, ebp */
L_1803fc472_0:;
L_1803fc472_1:;
wr(s->r,128,4,rd(s->r,40,4));
L_1803fc472_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fc472_3:;
/* 1803fc475: call 0x180412c40 */
L_1803fc475_0:;
L_1803fc475_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc475_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc47a)));
L_1803fc475_3:;
return (uint64_t)UINT64_C(0x180412c40);
L_1803fc475_4:;
return UINT64_C(0x1803fc47a);
}
uint64_t b_1803fc47a(CPU*s){
/* 1803fc47a: mov r8, qword ptr [r14 + 0x30] */
L_1803fc47a_0:;
L_1803fc47a_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x30))));
L_1803fc47a_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fc47a_3:;
wr(s->r,128,8,rd(s->u,20,8));
L_1803fc47a_4:;
/* 1803fc47e: mov dword ptr [rsp + 0x20], 1 */
L_1803fc47e_0:;
L_1803fc47e_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fc47e_2:;
wr(s->u,16,4,((U)UINT64_C(0x1)));
L_1803fc47e_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fc47e_4:;
/* 1803fc486: mov rcx, r13 */
L_1803fc486_0:;
L_1803fc486_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803fc486_2:;
/* 1803fc489: mov edx, ebp */
L_1803fc489_0:;
L_1803fc489_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803fc489_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fc489_3:;
/* 1803fc48b: mov r9, rdi */
L_1803fc48b_0:;
L_1803fc48b_1:;
wr(s->r,136,8,rd(s->r,56,8));
L_1803fc48b_2:;
/* 1803fc48e: call 0x18041713e */
L_1803fc48e_0:;
L_1803fc48e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc48e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc493)));
L_1803fc48e_3:;
return (uint64_t)UINT64_C(0x18041713e);
L_1803fc48e_4:;
return UINT64_C(0x1803fc493);
}
uint64_t b_1803fc493(CPU*s){
/* 1803fc493: mov eax, dword ptr [r14 + 8] */
L_1803fc493_0:;
L_1803fc493_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803fc493_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc493_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803fc493_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc493_5:;
/* 1803fc497: test eax, eax */
L_1803fc497_0:;
L_1803fc497_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc497_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc497_3:;
wr(s->u,19,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803fc497_4:;
wr(s->r,519,1,(sx(rd(s->u,19,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc497_5:;
wr(s->r,518,1,(rd(s->u,19,4)==((U)UINT64_C(0x0))));
L_1803fc497_6:;
wr(s->u,13,4,(rd(s->u,19,4)&((U)UINT64_C(0xff))));
L_1803fc497_7:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803fc497_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fc497_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fc497_10:;
/* 1803fc499: jne 0x1803fc4da */
L_1803fc499_0:;
L_1803fc499_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803fc499_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803fc4da);}
L_1803fc499_3:;
return UINT64_C(0x1803fc49b);
}
uint64_t b_1803fc49b(CPU*s){
/* 1803fc49b: jmp 0x1803fc4f3 */
L_1803fc49b_0:;
L_1803fc49b_1:;
return UINT64_C(0x1803fc4f3);
L_1803fc49b_2:;
return UINT64_C(0x1803fc49d);
}
uint64_t b_1803fc49d(CPU*s){
/* 1803fc49d: mov qword ptr [rsp + 0x20], rdi */
L_1803fc49d_0:;
L_1803fc49d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fc49d_2:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803fc49d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803fc49d_4:;
/* 1803fc4a2: mov rcx, r14 */
L_1803fc4a2_0:;
L_1803fc4a2_1:;
wr(s->r,8,8,rd(s->r,176,8));
L_1803fc4a2_2:;
/* 1803fc4a5: mov rdx, r12 */
L_1803fc4a5_0:;
L_1803fc4a5_1:;
wr(s->r,16,8,rd(s->r,160,8));
L_1803fc4a5_2:;
/* 1803fc4a8: mov r8, r13 */
L_1803fc4a8_0:;
L_1803fc4a8_1:;
wr(s->r,128,8,rd(s->r,168,8));
L_1803fc4a8_2:;
/* 1803fc4ab: call 0x1804233e0 */
L_1803fc4ab_0:;
L_1803fc4ab_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc4ab_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc4b0)));
L_1803fc4ab_3:;
return (uint64_t)UINT64_C(0x1804233e0);
L_1803fc4ab_4:;
return UINT64_C(0x1803fc4b0);
}
uint64_t b_1803fc4b0(CPU*s){
/* 1803fc4b0: jmp 0x1803fc4f3 */
L_1803fc4b0_0:;
L_1803fc4b0_1:;
return UINT64_C(0x1803fc4f3);
L_1803fc4b0_2:;
return UINT64_C(0x1803fc4b2);
}
uint64_t b_1803fc4b2(CPU*s){
/* 1803fc4b2: mov rax, qword ptr [r14 + 0x28] */
L_1803fc4b2_0:;
L_1803fc4b2_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x28))));
L_1803fc4b2_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fc4b2_3:;
wr(s->r,0,8,rd(s->u,24,8));
L_1803fc4b2_4:;
/* 1803fc4b6: mov r9, qword ptr [r14 + 0x30] */
L_1803fc4b6_0:;
L_1803fc4b6_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x30))));
L_1803fc4b6_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fc4b6_3:;
wr(s->r,136,8,rd(s->u,24,8));
L_1803fc4b6_4:;
/* 1803fc4ba: mov qword ptr [rsp + 0x20], rax */
L_1803fc4ba_0:;
L_1803fc4ba_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fc4ba_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803fc4ba_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803fc4ba_4:;
/* 1803fc4bf: mov rcx, r12 */
L_1803fc4bf_0:;
L_1803fc4bf_1:;
wr(s->r,8,8,rd(s->r,160,8));
L_1803fc4bf_2:;
/* 1803fc4c2: mov rdx, r13 */
L_1803fc4c2_0:;
L_1803fc4c2_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803fc4c2_2:;
/* 1803fc4c5: mov qword ptr [rsp + 0x28], rdi */
L_1803fc4c5_0:;
L_1803fc4c5_1:;
wr(s->u,8,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fc4c5_2:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803fc4c5_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803fc4c5_4:;
/* 1803fc4ca: mov r8d, ebp */
L_1803fc4ca_0:;
L_1803fc4ca_1:;
wr(s->r,128,4,rd(s->r,40,4));
L_1803fc4ca_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fc4ca_3:;
/* 1803fc4cd: call 0x180415400 */
L_1803fc4cd_0:;
L_1803fc4cd_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc4cd_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc4d2)));
L_1803fc4cd_3:;
return (uint64_t)UINT64_C(0x180415400);
L_1803fc4cd_4:;
return UINT64_C(0x1803fc4d2);
}
uint64_t b_1803fc4d2(CPU*s){
/* 1803fc4d2: mov eax, dword ptr [r14 + 8] */
L_1803fc4d2_0:;
L_1803fc4d2_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803fc4d2_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc4d2_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803fc4d2_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc4d2_5:;
/* 1803fc4d6: test eax, eax */
L_1803fc4d6_0:;
L_1803fc4d6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc4d6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc4d6_3:;
wr(s->u,18,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803fc4d6_4:;
wr(s->r,519,1,(sx(rd(s->u,18,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc4d6_5:;
wr(s->r,518,1,(rd(s->u,18,4)==((U)UINT64_C(0x0))));
L_1803fc4d6_6:;
wr(s->u,12,4,(rd(s->u,18,4)&((U)UINT64_C(0xff))));
L_1803fc4d6_7:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803fc4d6_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fc4d6_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fc4d6_10:;
/* 1803fc4d8: je 0x1803fc4f3 */
L_1803fc4d8_0:;
L_1803fc4d8_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc4f3);}
L_1803fc4d8_2:;
return UINT64_C(0x1803fc4da);
}
uint64_t b_1803fc4da(CPU*s){
/* 1803fc4da: movss xmm0, dword ptr [r14 + 0x10] */
L_1803fc4da_0:;
L_1803fc4da_1:;
wr(s->u,5,8,(rd(s->r,176,8)+((U)UINT64_C(0x10))));
L_1803fc4da_2:;
wr(s->u,13,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803fc4da_3:;
wr(s->r,4608,4,rd(s->u,13,4));
L_1803fc4da_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fc4da_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fc4da_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fc4da_7:;
/* 1803fc4e0: mov ecx, esi */
L_1803fc4e0_0:;
L_1803fc4e0_1:;
wr(s->r,8,4,rd(s->r,48,4));
L_1803fc4e0_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fc4e0_3:;
/* 1803fc4e2: mov r8d, 1 */
L_1803fc4e2_0:;
L_1803fc4e2_1:;
wr(s->r,128,8,((U)UINT64_C(0x1)));
L_1803fc4e2_2:;
/* 1803fc4e8: shl r8d, cl */
L_1803fc4e8_0:;
L_1803fc4e8_1:;
wr(s->u,46,1,(rd(s->r,8,1)&((U)UINT64_C(0x1f))));
L_1803fc4e8_2:;
wr(s->u,47,4,rd(s->r,128,4));
L_1803fc4e8_3:;
wr(s->r,128,4,((rd(s->u,46,1)>=32)?0:(rd(s->r,128,4)<<rd(s->u,46,1))));
L_1803fc4e8_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fc4e8_5:;
wr(s->u,36,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803fc4e8_6:;
wr(s->u,37,1,(rd(s->u,46,1)-((U)UINT64_C(0x1))));
L_1803fc4e8_7:;
wr(s->u,38,4,((rd(s->u,37,1)>=32)?0:(rd(s->u,47,4)<<rd(s->u,37,1))));
L_1803fc4e8_8:;
wr(s->u,42,1,(sx(rd(s->u,38,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc4e8_9:;
wr(s->u,0,1,rd(s->u,36,1));
L_1803fc4e8_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fc4e8_11:;
wr(s->u,2,1,(!rd(s->u,36,1)));
L_1803fc4e8_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fc4e8_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,42,1)));
L_1803fc4e8_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fc4e8_15:;
wr(s->u,43,1,(rd(s->u,46,1)==((U)UINT64_C(0x1))));
L_1803fc4e8_16:;
wr(s->u,44,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc4e8_17:;
wr(s->u,45,1,(rd(s->r,512,1)^rd(s->u,44,1)));
L_1803fc4e8_18:;
wr(s->u,0,1,rd(s->u,43,1));
L_1803fc4e8_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,45,1)));
L_1803fc4e8_20:;
wr(s->u,2,1,(!rd(s->u,43,1)));
L_1803fc4e8_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fc4e8_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fc4e8_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fc4e8_24:;
wr(s->u,17,1,(rd(s->u,46,1)!=((U)UINT64_C(0x0))));
L_1803fc4e8_25:;
wr(s->u,18,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc4e8_26:;
wr(s->u,19,1,(!rd(s->u,17,1)));
L_1803fc4e8_27:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,519,1)));
L_1803fc4e8_28:;
wr(s->u,21,1,(rd(s->u,17,1)&rd(s->u,18,1)));
L_1803fc4e8_29:;
wr(s->r,519,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803fc4e8_30:;
wr(s->u,22,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fc4e8_31:;
wr(s->u,23,1,(!rd(s->u,17,1)));
L_1803fc4e8_32:;
wr(s->u,24,1,(rd(s->u,23,1)&rd(s->r,518,1)));
L_1803fc4e8_33:;
wr(s->u,25,1,(rd(s->u,17,1)&rd(s->u,22,1)));
L_1803fc4e8_34:;
wr(s->r,518,1,(rd(s->u,24,1)|rd(s->u,25,1)));
L_1803fc4e8_35:;
wr(s->u,26,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fc4e8_36:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803fc4e8_37:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803fc4e8_38:;
wr(s->u,32,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803fc4e8_39:;
wr(s->u,33,1,(!rd(s->u,17,1)));
L_1803fc4e8_40:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,514,1)));
L_1803fc4e8_41:;
wr(s->u,35,1,(rd(s->u,17,1)&rd(s->u,32,1)));
L_1803fc4e8_42:;
wr(s->r,514,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803fc4e8_43:;
/* 1803fc4eb: mov rdx, r13 */
L_1803fc4eb_0:;
L_1803fc4eb_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803fc4eb_2:;
/* 1803fc4ee: call 0x1803fcfe0 */
L_1803fc4ee_0:;
L_1803fc4ee_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc4ee_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc4f3)));
L_1803fc4ee_3:;
return (uint64_t)UINT64_C(0x1803fcfe0);
L_1803fc4ee_4:;
return UINT64_C(0x1803fc4f3);
}
uint64_t b_1803fc4f3(CPU*s){
/* 1803fc4f3: movss xmm0, dword ptr [r13 + 4] */
L_1803fc4f3_0:;
L_1803fc4f3_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0x4))));
L_1803fc4f3_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc4f3_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803fc4f3_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fc4f3_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fc4f3_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fc4f3_7:;
/* 1803fc4f9: movss xmm2, dword ptr [r13] */
L_1803fc4f9_0:;
L_1803fc4f9_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,168,8),4));
L_1803fc4f9_2:;
wr(s->r,4736,4,rd(s->u,8,4));
L_1803fc4f9_3:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fc4f9_4:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fc4f9_5:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fc4f9_6:;
/* 1803fc4ff: movss xmm1, dword ptr [r13 + 4] */
L_1803fc4ff_0:;
L_1803fc4ff_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0x4))));
L_1803fc4ff_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc4ff_3:;
wr(s->r,4672,4,rd(s->u,8,4));
L_1803fc4ff_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fc4ff_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fc4ff_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fc4ff_7:;
/* 1803fc505: addss xmm1, xmm2 */
L_1803fc505_0:;
L_1803fc505_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fc505_2:;
/* 1803fc509: movss dword ptr [r13], xmm1 */
L_1803fc509_0:;
L_1803fc509_1:;
wr(s->u,8,4,rd(s->r,4672,4));
L_1803fc509_2:;
mw((uint64_t)rd(s->r,168,8),4,rd(s->u,8,4));
L_1803fc509_3:;
/* 1803fc50f: subss xmm2, xmm0 */
L_1803fc50f_0:;
L_1803fc50f_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fc50f_2:;
/* 1803fc513: movss dword ptr [r13 + 4], xmm2 */
L_1803fc513_0:;
L_1803fc513_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0x4))));
L_1803fc513_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803fc513_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fc513_4:;
/* 1803fc519: mov r9, qword ptr [r14 + 0x48] */
L_1803fc519_0:;
L_1803fc519_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x48))));
L_1803fc519_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fc519_3:;
wr(s->r,136,8,rd(s->u,12,8));
L_1803fc519_4:;
/* 1803fc51d: mov rcx, r13 */
L_1803fc51d_0:;
L_1803fc51d_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803fc51d_2:;
/* 1803fc520: mov edx, ebp */
L_1803fc520_0:;
L_1803fc520_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803fc520_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fc520_3:;
/* 1803fc522: mov r8d, 1 */
L_1803fc522_0:;
L_1803fc522_1:;
wr(s->r,128,8,((U)UINT64_C(0x1)));
L_1803fc522_2:;
/* 1803fc528: call 0x1804242d0 */
L_1803fc528_0:;
L_1803fc528_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc528_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc52d)));
L_1803fc528_3:;
return (uint64_t)UINT64_C(0x1804242d0);
L_1803fc528_4:;
return UINT64_C(0x1803fc52d);
}
uint64_t b_1803fc52d(CPU*s){
/* 1803fc52d: test rdi, rdi */
L_1803fc52d_0:;
L_1803fc52d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc52d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc52d_3:;
wr(s->u,10,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1803fc52d_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc52d_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc52d_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc52d_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc52d_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc52d_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc52d_10:;
/* 1803fc530: je 0x1803fc537 */
L_1803fc530_0:;
L_1803fc530_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc537);}
L_1803fc530_2:;
return UINT64_C(0x1803fc532);
}
uint64_t b_1803fc532(CPU*s){
/* 1803fc532: test r15, r15 */
L_1803fc532_0:;
L_1803fc532_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc532_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc532_3:;
wr(s->u,10,8,(rd(s->r,184,8)&rd(s->r,184,8)));
L_1803fc532_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc532_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc532_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc532_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc532_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc532_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc532_10:;
/* 1803fc535: je 0x1803fc55c */
L_1803fc535_0:;
L_1803fc535_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc55c);}
L_1803fc535_2:;
return UINT64_C(0x1803fc537);
}
uint64_t b_1803fc537(CPU*s){
/* 1803fc537: xor eax, eax */
L_1803fc537_0:;
L_1803fc537_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc537_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc537_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fc537_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc537_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc537_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fc537_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fc537_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fc537_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc537_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc537_11:;
/* 1803fc539: add rsp, 0x30 */
L_1803fc539_0:;
L_1803fc539_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc539_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803fc539_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803fc539_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc539_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc539_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc539_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc539_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc539_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc539_10:;
/* 1803fc53d: pop rbp */
L_1803fc53d_0:;
L_1803fc53d_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc53d_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc53d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc53d_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fc53d_5:;
/* 1803fc53e: pop rsi */
L_1803fc53e_0:;
L_1803fc53e_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc53e_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc53e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc53e_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fc53e_5:;
/* 1803fc53f: pop rdi */
L_1803fc53f_0:;
L_1803fc53f_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc53f_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc53f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc53f_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fc53f_5:;
/* 1803fc540: pop r12 */
L_1803fc540_0:;
L_1803fc540_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc540_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc540_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc540_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fc540_5:;
/* 1803fc542: pop r13 */
L_1803fc542_0:;
L_1803fc542_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc542_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc542_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc542_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fc542_5:;
/* 1803fc544: pop r14 */
L_1803fc544_0:;
L_1803fc544_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc544_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc544_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc544_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fc544_5:;
/* 1803fc546: pop r15 */
L_1803fc546_0:;
L_1803fc546_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc546_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc546_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc546_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fc546_5:;
/* 1803fc548: ret  */
L_1803fc548_0:;
L_1803fc548_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc548_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc548_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc548_4:;
return UINT64_C(0x1803fc549);
}
uint64_t b_1803fc549(CPU*s){
/* 1803fc549: mov r8, qword ptr [r14 + 0x28] */
L_1803fc549_0:;
L_1803fc549_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x28))));
L_1803fc549_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fc549_3:;
wr(s->r,128,8,rd(s->u,8,8));
L_1803fc549_4:;
/* 1803fc54d: mov rcx, r13 */
L_1803fc54d_0:;
L_1803fc54d_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803fc54d_2:;
/* 1803fc550: mov edx, ebp */
L_1803fc550_0:;
L_1803fc550_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803fc550_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fc550_3:;
/* 1803fc552: call 0x180412690 */
L_1803fc552_0:;
L_1803fc552_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc552_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc557)));
L_1803fc552_3:;
return (uint64_t)UINT64_C(0x180412690);
L_1803fc552_4:;
return UINT64_C(0x1803fc557);
}
uint64_t b_1803fc557(CPU*s){
/* 1803fc557: jmp 0x1803fc47a */
L_1803fc557_0:;
L_1803fc557_1:;
return UINT64_C(0x1803fc47a);
L_1803fc557_2:;
return UINT64_C(0x1803fc55c);
}
uint64_t b_1803fc55c(CPU*s){
/* 1803fc55c: mov rcx, rdi */
L_1803fc55c_0:;
L_1803fc55c_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803fc55c_2:;
/* 1803fc55f: call 0x1803fc9bc */
L_1803fc55f_0:;
L_1803fc55f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc55f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc564)));
L_1803fc55f_3:;
return (uint64_t)UINT64_C(0x1803fc9bc);
L_1803fc55f_4:;
return UINT64_C(0x1803fc564);
}
uint64_t b_1803fc564(CPU*s){
/* 1803fc564: jmp 0x1803fc537 */
L_1803fc564_0:;
L_1803fc564_1:;
return UINT64_C(0x1803fc537);
L_1803fc564_2:;
return UINT64_C(0x1803fc566);
}
uint64_t b_1803fc566(CPU*s){
/* 1803fc566: call 0x1803fc814 */
L_1803fc566_0:;
L_1803fc566_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc566_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc56b)));
L_1803fc566_3:;
return (uint64_t)UINT64_C(0x1803fc814);
L_1803fc566_4:;
return UINT64_C(0x1803fc56b);
}
uint64_t b_1803fc56b(CPU*s){
/* 1803fc56b: mov rdi, rax */
L_1803fc56b_0:;
L_1803fc56b_1:;
wr(s->r,56,8,rd(s->r,0,8));
L_1803fc56b_2:;
/* 1803fc56e: test rdi, rdi */
L_1803fc56e_0:;
L_1803fc56e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc56e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc56e_3:;
wr(s->u,11,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1803fc56e_4:;
wr(s->r,519,1,(sx(rd(s->u,11,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc56e_5:;
wr(s->r,518,1,(rd(s->u,11,8)==((U)UINT64_C(0x0))));
L_1803fc56e_6:;
wr(s->u,1,8,(rd(s->u,11,8)&((U)UINT64_C(0xff))));
L_1803fc56e_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fc56e_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fc56e_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fc56e_10:;
/* 1803fc571: jne 0x1803fc3f2 */
L_1803fc571_0:;
L_1803fc571_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fc571_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fc3f2);}
L_1803fc571_3:;
return UINT64_C(0x1803fc577);
}
uint64_t b_1803fc577(CPU*s){
/* 1803fc577: mov eax, 0xfffffff7 */
L_1803fc577_0:;
L_1803fc577_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff7)));
L_1803fc577_2:;
/* 1803fc57c: add rsp, 0x30 */
L_1803fc57c_0:;
L_1803fc57c_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc57c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803fc57c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803fc57c_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc57c_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc57c_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc57c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc57c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc57c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc57c_10:;
/* 1803fc580: pop rbp */
L_1803fc580_0:;
L_1803fc580_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc580_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc580_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc580_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fc580_5:;
/* 1803fc581: pop rsi */
L_1803fc581_0:;
L_1803fc581_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc581_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc581_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc581_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fc581_5:;
/* 1803fc582: pop rdi */
L_1803fc582_0:;
L_1803fc582_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc582_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc582_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc582_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fc582_5:;
/* 1803fc583: pop r12 */
L_1803fc583_0:;
L_1803fc583_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc583_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc583_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc583_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fc583_5:;
/* 1803fc585: pop r13 */
L_1803fc585_0:;
L_1803fc585_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc585_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc585_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc585_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fc585_5:;
/* 1803fc587: pop r14 */
L_1803fc587_0:;
L_1803fc587_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc587_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc587_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc587_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fc587_5:;
/* 1803fc589: pop r15 */
L_1803fc589_0:;
L_1803fc589_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc589_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc589_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc589_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fc589_5:;
/* 1803fc58b: ret  */
L_1803fc58b_0:;
L_1803fc58b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc58b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc58b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc58b_4:;
return UINT64_C(0x1803fc58c);
}
uint64_t b_1803fc58c(CPU*s){
/* 1803fc58c: mov eax, 0xfffffff8 */
L_1803fc58c_0:;
L_1803fc58c_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fc58c_2:;
/* 1803fc591: add rsp, 0x30 */
L_1803fc591_0:;
L_1803fc591_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc591_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803fc591_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803fc591_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc591_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc591_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc591_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc591_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc591_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc591_10:;
/* 1803fc595: pop rbp */
L_1803fc595_0:;
L_1803fc595_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc595_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc595_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc595_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fc595_5:;
/* 1803fc596: pop rsi */
L_1803fc596_0:;
L_1803fc596_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc596_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc596_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc596_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fc596_5:;
/* 1803fc597: pop rdi */
L_1803fc597_0:;
L_1803fc597_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc597_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc597_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc597_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fc597_5:;
/* 1803fc598: pop r12 */
L_1803fc598_0:;
L_1803fc598_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc598_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc598_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc598_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fc598_5:;
/* 1803fc59a: pop r13 */
L_1803fc59a_0:;
L_1803fc59a_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc59a_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc59a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc59a_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fc59a_5:;
/* 1803fc59c: pop r14 */
L_1803fc59c_0:;
L_1803fc59c_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc59c_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc59c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc59c_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fc59c_5:;
/* 1803fc59e: pop r15 */
L_1803fc59e_0:;
L_1803fc59e_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc59e_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc59e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc59e_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fc59e_5:;
/* 1803fc5a0: ret  */
L_1803fc5a0_0:;
L_1803fc5a0_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc5a0_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc5a0_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc5a0_4:;
return UINT64_C(0x1803fc5a1);
}
uint64_t b_1803fc5a4(CPU*s){
/* 1803fc5a4: push r15 */
L_1803fc5a4_0:;
L_1803fc5a4_1:;
wr(s->u,0,8,rd(s->r,184,8));
L_1803fc5a4_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc5a4_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc5a4_4:;
/* 1803fc5a6: push r14 */
L_1803fc5a6_0:;
L_1803fc5a6_1:;
wr(s->u,0,8,rd(s->r,176,8));
L_1803fc5a6_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc5a6_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc5a6_4:;
/* 1803fc5a8: push r13 */
L_1803fc5a8_0:;
L_1803fc5a8_1:;
wr(s->u,0,8,rd(s->r,168,8));
L_1803fc5a8_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc5a8_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc5a8_4:;
/* 1803fc5aa: push r12 */
L_1803fc5aa_0:;
L_1803fc5aa_1:;
wr(s->u,0,8,rd(s->r,160,8));
L_1803fc5aa_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc5aa_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc5aa_4:;
/* 1803fc5ac: push rdi */
L_1803fc5ac_0:;
L_1803fc5ac_1:;
wr(s->u,0,8,rd(s->r,56,8));
L_1803fc5ac_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc5ac_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc5ac_4:;
/* 1803fc5ad: push rsi */
L_1803fc5ad_0:;
L_1803fc5ad_1:;
wr(s->u,0,8,rd(s->r,48,8));
L_1803fc5ad_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc5ad_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc5ad_4:;
/* 1803fc5ae: push rbp */
L_1803fc5ae_0:;
L_1803fc5ae_1:;
wr(s->u,0,8,rd(s->r,40,8));
L_1803fc5ae_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc5ae_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc5ae_4:;
/* 1803fc5af: push rbx */
L_1803fc5af_0:;
L_1803fc5af_1:;
wr(s->u,0,8,rd(s->r,24,8));
L_1803fc5af_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc5af_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc5af_4:;
/* 1803fc5b0: sub rsp, 0x38 */
L_1803fc5b0_0:;
L_1803fc5b0_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x38))));
L_1803fc5b0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,1));
L_1803fc5b0_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x38))));
L_1803fc5b0_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc5b0_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc5b0_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc5b0_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fc5b0_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fc5b0_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fc5b0_10:;
/* 1803fc5b4: mov r15, r9 */
L_1803fc5b4_0:;
L_1803fc5b4_1:;
wr(s->r,184,8,rd(s->r,136,8));
L_1803fc5b4_2:;
/* 1803fc5b7: mov r14, r8 */
L_1803fc5b7_0:;
L_1803fc5b7_1:;
wr(s->r,176,8,rd(s->r,128,8));
L_1803fc5b7_2:;
/* 1803fc5ba: mov r13, rdx */
L_1803fc5ba_0:;
L_1803fc5ba_1:;
wr(s->r,168,8,rd(s->r,16,8));
L_1803fc5ba_2:;
/* 1803fc5bd: mov r12, rcx */
L_1803fc5bd_0:;
L_1803fc5bd_1:;
wr(s->r,160,8,rd(s->r,8,8));
L_1803fc5bd_2:;
/* 1803fc5c0: xor edi, edi */
L_1803fc5c0_0:;
L_1803fc5c0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc5c0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc5c0_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803fc5c0_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fc5c0_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc5c0_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803fc5c0_7:;
wr(s->u,8,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803fc5c0_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803fc5c0_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fc5c0_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fc5c0_11:;
/* 1803fc5c2: test r14, r14 */
L_1803fc5c2_0:;
L_1803fc5c2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc5c2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc5c2_3:;
wr(s->u,18,8,(rd(s->r,176,8)&rd(s->r,176,8)));
L_1803fc5c2_4:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc5c2_5:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803fc5c2_6:;
wr(s->u,8,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803fc5c2_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fc5c2_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fc5c2_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fc5c2_10:;
/* 1803fc5c5: je 0x1803fc7fd */
L_1803fc5c5_0:;
L_1803fc5c5_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc7fd);}
L_1803fc5c5_2:;
return UINT64_C(0x1803fc5cb);
}
uint64_t b_1803fc5cb(CPU*s){
/* 1803fc5cb: mov eax, dword ptr [r14] */
L_1803fc5cb_0:;
L_1803fc5cb_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fc5cb_2:;
wr(s->r,0,4,rd(s->u,0,4));
L_1803fc5cb_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc5cb_4:;
/* 1803fc5ce: cmp eax, 6 */
L_1803fc5ce_0:;
L_1803fc5ce_1:;
wr(s->u,10,4,rd(s->r,0,4));
L_1803fc5ce_2:;
wr(s->r,512,1,(rd(s->u,10,4)<((U)UINT64_C(0x6))));
L_1803fc5ce_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,10,4),((U)UINT64_C(0x6)),4,1));
L_1803fc5ce_4:;
wr(s->u,14,4,(rd(s->u,10,4)-((U)UINT64_C(0x6))));
L_1803fc5ce_5:;
wr(s->r,519,1,(sx(rd(s->u,14,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc5ce_6:;
wr(s->r,518,1,(rd(s->u,14,4)==((U)UINT64_C(0x0))));
L_1803fc5ce_7:;
wr(s->u,4,4,(rd(s->u,14,4)&((U)UINT64_C(0xff))));
L_1803fc5ce_8:;
wr(s->u,8,1,pop(rd(s->u,4,4),4));
L_1803fc5ce_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc5ce_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc5ce_11:;
/* 1803fc5d1: je 0x1803fc5e9 */
L_1803fc5d1_0:;
L_1803fc5d1_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc5e9);}
L_1803fc5d1_2:;
return UINT64_C(0x1803fc5d3);
}
uint64_t b_1803fc5d3(CPU*s){
/* 1803fc5d3: mov eax, 0xffffffef */
L_1803fc5d3_0:;
L_1803fc5d3_1:;
wr(s->r,0,8,((U)UINT64_C(0xffffffef)));
L_1803fc5d3_2:;
/* 1803fc5d8: add rsp, 0x38 */
L_1803fc5d8_0:;
L_1803fc5d8_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc5d8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803fc5d8_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803fc5d8_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc5d8_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc5d8_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc5d8_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc5d8_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc5d8_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc5d8_10:;
/* 1803fc5dc: pop rbx */
L_1803fc5dc_0:;
L_1803fc5dc_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc5dc_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc5dc_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc5dc_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803fc5dc_5:;
/* 1803fc5dd: pop rbp */
L_1803fc5dd_0:;
L_1803fc5dd_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc5dd_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc5dd_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc5dd_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fc5dd_5:;
/* 1803fc5de: pop rsi */
L_1803fc5de_0:;
L_1803fc5de_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc5de_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc5de_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc5de_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fc5de_5:;
/* 1803fc5df: pop rdi */
L_1803fc5df_0:;
L_1803fc5df_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc5df_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc5df_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc5df_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fc5df_5:;
/* 1803fc5e0: pop r12 */
L_1803fc5e0_0:;
L_1803fc5e0_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc5e0_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc5e0_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc5e0_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fc5e0_5:;
/* 1803fc5e2: pop r13 */
L_1803fc5e2_0:;
L_1803fc5e2_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc5e2_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc5e2_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc5e2_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fc5e2_5:;
/* 1803fc5e4: pop r14 */
L_1803fc5e4_0:;
L_1803fc5e4_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc5e4_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc5e4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc5e4_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fc5e4_5:;
/* 1803fc5e6: pop r15 */
L_1803fc5e6_0:;
L_1803fc5e6_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc5e6_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc5e6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc5e6_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fc5e6_5:;
/* 1803fc5e8: ret  */
L_1803fc5e8_0:;
L_1803fc5e8_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc5e8_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc5e8_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc5e8_4:;
return UINT64_C(0x1803fc5e9);
}
uint64_t b_1803fc5e9(CPU*s){
/* 1803fc5e9: test r12, r12 */
L_1803fc5e9_0:;
L_1803fc5e9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc5e9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc5e9_3:;
wr(s->u,10,8,(rd(s->r,160,8)&rd(s->r,160,8)));
L_1803fc5e9_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc5e9_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc5e9_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc5e9_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc5e9_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc5e9_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc5e9_10:;
/* 1803fc5ec: je 0x1803fc7fd */
L_1803fc5ec_0:;
L_1803fc5ec_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc7fd);}
L_1803fc5ec_2:;
return UINT64_C(0x1803fc5f2);
}
uint64_t b_1803fc5f2(CPU*s){
/* 1803fc5f2: test r13, r13 */
L_1803fc5f2_0:;
L_1803fc5f2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc5f2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc5f2_3:;
wr(s->u,10,8,(rd(s->r,168,8)&rd(s->r,168,8)));
L_1803fc5f2_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc5f2_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc5f2_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc5f2_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc5f2_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc5f2_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc5f2_10:;
/* 1803fc5f5: je 0x1803fc7fd */
L_1803fc5f5_0:;
L_1803fc5f5_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc7fd);}
L_1803fc5f5_2:;
return UINT64_C(0x1803fc5fb);
}
uint64_t b_1803fc5fb(CPU*s){
/* 1803fc5fb: mov ebp, dword ptr [r14 + 4] */
L_1803fc5fb_0:;
L_1803fc5fb_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fc5fb_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc5fb_3:;
wr(s->r,40,4,rd(s->u,8,4));
L_1803fc5fb_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fc5fb_5:;
/* 1803fc5ff: cmp ebp, 4 */
L_1803fc5ff_0:;
L_1803fc5ff_1:;
wr(s->u,21,4,rd(s->r,40,4));
L_1803fc5ff_2:;
wr(s->r,512,1,(rd(s->u,21,4)<((U)UINT64_C(0x4))));
L_1803fc5ff_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,21,4),((U)UINT64_C(0x4)),4,1));
L_1803fc5ff_4:;
wr(s->u,25,4,(rd(s->u,21,4)-((U)UINT64_C(0x4))));
L_1803fc5ff_5:;
wr(s->r,519,1,(sx(rd(s->u,25,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc5ff_6:;
wr(s->r,518,1,(rd(s->u,25,4)==((U)UINT64_C(0x0))));
L_1803fc5ff_7:;
wr(s->u,15,4,(rd(s->u,25,4)&((U)UINT64_C(0xff))));
L_1803fc5ff_8:;
wr(s->u,19,1,pop(rd(s->u,15,4),4));
L_1803fc5ff_9:;
wr(s->u,20,1,(rd(s->u,19,1)&((U)UINT64_C(0x1))));
L_1803fc5ff_10:;
wr(s->r,514,1,(rd(s->u,20,1)==((U)UINT64_C(0x0))));
L_1803fc5ff_11:;
/* 1803fc602: jg 0x1803fc657 */
L_1803fc602_0:;
L_1803fc602_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803fc602_2:;
wr(s->u,13,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fc602_3:;
wr(s->u,14,1,((rd(s->u,12,1)!=0)&&(rd(s->u,13,1)!=0)));
L_1803fc602_4:;
if(rd(s->u,14,1)){return UINT64_C(0x1803fc657);}
L_1803fc602_5:;
return UINT64_C(0x1803fc604);
}
uint64_t b_1803fc604(CPU*s){
/* 1803fc604: mov eax, dword ptr [r14 + 0xc] */
L_1803fc604_0:;
L_1803fc604_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fc604_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc604_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803fc604_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc604_5:;
/* 1803fc608: movsxd rbx, ebp */
L_1803fc608_0:;
L_1803fc608_1:;
wr(s->r,24,8,(U)sx(rd(s->r,40,4),4));
L_1803fc608_2:;
/* 1803fc60b: test eax, eax */
L_1803fc60b_0:;
L_1803fc60b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc60b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc60b_3:;
wr(s->u,18,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803fc60b_4:;
wr(s->r,519,1,(sx(rd(s->u,18,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc60b_5:;
wr(s->r,518,1,(rd(s->u,18,4)==((U)UINT64_C(0x0))));
L_1803fc60b_6:;
wr(s->u,12,4,(rd(s->u,18,4)&((U)UINT64_C(0xff))));
L_1803fc60b_7:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803fc60b_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fc60b_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fc60b_10:;
/* 1803fc60d: je 0x1803fc630 */
L_1803fc60d_0:;
L_1803fc60d_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc630);}
L_1803fc60d_2:;
return UINT64_C(0x1803fc60f);
}
uint64_t b_1803fc60f(CPU*s){
/* 1803fc60f: movss xmm2, dword ptr [r14 + 0x10] */
L_1803fc60f_0:;
L_1803fc60f_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x10))));
L_1803fc60f_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc60f_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803fc60f_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fc60f_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fc60f_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fc60f_7:;
/* 1803fc615: mov rcx, r12 */
L_1803fc615_0:;
L_1803fc615_1:;
wr(s->r,8,8,rd(s->r,160,8));
L_1803fc615_2:;
/* 1803fc618: mov rdx, r13 */
L_1803fc618_0:;
L_1803fc618_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803fc618_2:;
/* 1803fc61b: movd r8d, xmm2 */
L_1803fc61b_0:;
L_1803fc61b_1:;
wr(s->r,128,4,(rd(s->r,4736,16) >> (((U)UINT64_C(0x0))*8)));
L_1803fc61b_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fc61b_3:;
/* 1803fc620: lea rax, [rip - 0x3fc627] */
L_1803fc620_0:;
L_1803fc620_1:;
wr(s->r,0,8,((U)UINT64_C(0x180000000)));
L_1803fc620_2:;
/* 1803fc627: call qword ptr [rax + rbx*8 + 0x80e588] */
L_1803fc627_0:;
L_1803fc627_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80e588))+rd(s->r,0,8)));
L_1803fc627_2:;
wr(s->u,16,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803fc627_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803fc627_4:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803fc627_5:;
wr(s->u,44,8,rd(s->u,36,8));
L_1803fc627_6:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc627_7:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc62e)));
L_1803fc627_8:;
return (uint64_t)rd(s->u,44,8);
L_1803fc627_9:;
return UINT64_C(0x1803fc62e);
}
uint64_t b_1803fc62e(CPU*s){
/* 1803fc62e: jmp 0x1803fc644 */
L_1803fc62e_0:;
L_1803fc62e_1:;
return UINT64_C(0x1803fc644);
L_1803fc62e_2:;
return UINT64_C(0x1803fc630);
}
uint64_t b_1803fc630(CPU*s){
/* 1803fc630: mov rcx, r12 */
L_1803fc630_0:;
L_1803fc630_1:;
wr(s->r,8,8,rd(s->r,160,8));
L_1803fc630_2:;
/* 1803fc633: mov rdx, r13 */
L_1803fc633_0:;
L_1803fc633_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803fc633_2:;
/* 1803fc636: lea rax, [rip - 0x3fc63d] */
L_1803fc636_0:;
L_1803fc636_1:;
wr(s->r,0,8,((U)UINT64_C(0x180000000)));
L_1803fc636_2:;
/* 1803fc63d: call qword ptr [rax + rbx*8 + 0x80e558] */
L_1803fc63d_0:;
L_1803fc63d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x80e558))+rd(s->r,0,8)));
L_1803fc63d_2:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803fc63d_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803fc63d_4:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803fc63d_5:;
wr(s->u,32,8,rd(s->u,24,8));
L_1803fc63d_6:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc63d_7:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc644)));
L_1803fc63d_8:;
return (uint64_t)rd(s->u,32,8);
L_1803fc63d_9:;
return UINT64_C(0x1803fc644);
}
uint64_t b_1803fc644(CPU*s){
/* 1803fc644: xor eax, eax */
L_1803fc644_0:;
L_1803fc644_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc644_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc644_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fc644_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc644_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc644_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fc644_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fc644_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fc644_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc644_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc644_11:;
/* 1803fc646: add rsp, 0x38 */
L_1803fc646_0:;
L_1803fc646_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc646_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803fc646_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803fc646_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc646_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc646_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc646_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc646_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc646_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc646_10:;
/* 1803fc64a: pop rbx */
L_1803fc64a_0:;
L_1803fc64a_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc64a_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc64a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc64a_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803fc64a_5:;
/* 1803fc64b: pop rbp */
L_1803fc64b_0:;
L_1803fc64b_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc64b_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc64b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc64b_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fc64b_5:;
/* 1803fc64c: pop rsi */
L_1803fc64c_0:;
L_1803fc64c_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc64c_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc64c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc64c_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fc64c_5:;
/* 1803fc64d: pop rdi */
L_1803fc64d_0:;
L_1803fc64d_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc64d_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc64d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc64d_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fc64d_5:;
/* 1803fc64e: pop r12 */
L_1803fc64e_0:;
L_1803fc64e_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc64e_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc64e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc64e_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fc64e_5:;
/* 1803fc650: pop r13 */
L_1803fc650_0:;
L_1803fc650_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc650_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc650_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc650_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fc650_5:;
/* 1803fc652: pop r14 */
L_1803fc652_0:;
L_1803fc652_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc652_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc652_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc652_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fc652_5:;
/* 1803fc654: pop r15 */
L_1803fc654_0:;
L_1803fc654_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc654_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc654_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc654_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fc654_5:;
/* 1803fc656: ret  */
L_1803fc656_0:;
L_1803fc656_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc656_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc656_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc656_4:;
return UINT64_C(0x1803fc657);
}
uint64_t b_1803fc657(CPU*s){
/* 1803fc657: mov ecx, dword ptr [r14 + 0x18] */
L_1803fc657_0:;
L_1803fc657_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x18))));
L_1803fc657_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc657_3:;
wr(s->r,8,4,rd(s->u,8,4));
L_1803fc657_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fc657_5:;
/* 1803fc65b: test ecx, ecx */
L_1803fc65b_0:;
L_1803fc65b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc65b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc65b_3:;
wr(s->u,20,4,(rd(s->r,8,4)&rd(s->r,8,4)));
L_1803fc65b_4:;
wr(s->r,519,1,(sx(rd(s->u,20,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc65b_5:;
wr(s->r,518,1,(rd(s->u,20,4)==((U)UINT64_C(0x0))));
L_1803fc65b_6:;
wr(s->u,14,4,(rd(s->u,20,4)&((U)UINT64_C(0xff))));
L_1803fc65b_7:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803fc65b_8:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803fc65b_9:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803fc65b_10:;
/* 1803fc65d: jle 0x1803fc679 */
L_1803fc65d_0:;
L_1803fc65d_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc65d_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803fc65d_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803fc679);}
L_1803fc65d_4:;
return UINT64_C(0x1803fc65f);
}
uint64_t b_1803fc65f(CPU*s){
/* 1803fc65f: test r15, r15 */
L_1803fc65f_0:;
L_1803fc65f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc65f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc65f_3:;
wr(s->u,10,8,(rd(s->r,184,8)&rd(s->r,184,8)));
L_1803fc65f_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc65f_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc65f_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc65f_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc65f_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc65f_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc65f_10:;
/* 1803fc662: je 0x1803fc7d6 */
L_1803fc662_0:;
L_1803fc662_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc7d6);}
L_1803fc662_2:;
return UINT64_C(0x1803fc668);
}
uint64_t b_1803fc668(CPU*s){
/* 1803fc668: mov rdi, r15 */
L_1803fc668_0:;
L_1803fc668_1:;
wr(s->r,56,8,rd(s->r,184,8));
L_1803fc668_2:;
/* 1803fc66b: and rdi, 0x1f */
L_1803fc66b_0:;
L_1803fc66b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc66b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc66b_3:;
wr(s->r,56,8,(rd(s->r,56,8)&((U)UINT64_C(0x1f))));
L_1803fc66b_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc66b_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803fc66b_6:;
wr(s->u,41,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803fc66b_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803fc66b_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803fc66b_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803fc66b_10:;
/* 1803fc66f: neg rdi */
L_1803fc66f_0:;
L_1803fc66f_1:;
wr(s->r,512,1,(rd(s->r,56,8)!=((U)UINT64_C(0x0))));
L_1803fc66f_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,56,8),8,1));
L_1803fc66f_3:;
wr(s->r,56,8,(-rd(s->r,56,8)));
L_1803fc66f_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc66f_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803fc66f_6:;
wr(s->u,41,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803fc66f_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803fc66f_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803fc66f_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803fc66f_10:;
/* 1803fc672: and rdi, 0x1f */
L_1803fc672_0:;
L_1803fc672_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc672_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc672_3:;
wr(s->r,56,8,(rd(s->r,56,8)&((U)UINT64_C(0x1f))));
L_1803fc672_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc672_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803fc672_6:;
wr(s->u,41,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803fc672_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803fc672_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803fc672_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803fc672_10:;
/* 1803fc676: add rdi, r15 */
L_1803fc676_0:;
L_1803fc676_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+rd(s->r,184,8))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803fc676_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),rd(s->r,184,8),8,0));
L_1803fc676_3:;
wr(s->r,56,8,(rd(s->r,56,8)+rd(s->r,184,8)));
L_1803fc676_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc676_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803fc676_6:;
wr(s->u,41,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803fc676_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803fc676_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803fc676_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803fc676_10:;
/* 1803fc679: movss xmm2, dword ptr [r12] */
L_1803fc679_0:;
L_1803fc679_1:;
wr(s->u,21,4,mr((uint64_t)rd(s->r,160,8),4));
L_1803fc679_2:;
wr(s->r,4736,4,rd(s->u,21,4));
L_1803fc679_3:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fc679_4:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fc679_5:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fc679_6:;
/* 1803fc67f: movss xmm0, dword ptr [r12 + 4] */
L_1803fc67f_0:;
L_1803fc67f_1:;
wr(s->u,13,8,(((U)UINT64_C(0x4))+rd(s->r,160,8)));
L_1803fc67f_2:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803fc67f_3:;
wr(s->r,4608,4,rd(s->u,21,4));
L_1803fc67f_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fc67f_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fc67f_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fc67f_7:;
/* 1803fc686: movss xmm1, dword ptr [r12] */
L_1803fc686_0:;
L_1803fc686_1:;
wr(s->u,21,4,mr((uint64_t)rd(s->r,160,8),4));
L_1803fc686_2:;
wr(s->r,4672,4,rd(s->u,21,4));
L_1803fc686_3:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fc686_4:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fc686_5:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fc686_6:;
/* 1803fc68c: lea ebx, [rbp - 1] */
L_1803fc68c_0:;
L_1803fc68c_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fc68c_2:;
wr(s->r,24,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fc68c_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fc68c_4:;
/* 1803fc68f: mov ecx, ebx */
L_1803fc68f_0:;
L_1803fc68f_1:;
wr(s->r,8,4,rd(s->r,24,4));
L_1803fc68f_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fc68f_3:;
/* 1803fc691: mov esi, 1 */
L_1803fc691_0:;
L_1803fc691_1:;
wr(s->r,48,8,((U)UINT64_C(0x1)));
L_1803fc691_2:;
/* 1803fc696: shl esi, cl */
L_1803fc696_0:;
L_1803fc696_1:;
wr(s->u,80,1,(rd(s->r,8,1)&((U)UINT64_C(0x1f))));
L_1803fc696_2:;
wr(s->u,81,4,rd(s->r,48,4));
L_1803fc696_3:;
wr(s->r,48,4,((rd(s->u,80,1)>=32)?0:(rd(s->r,48,4)<<rd(s->u,80,1))));
L_1803fc696_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fc696_5:;
wr(s->u,70,1,(rd(s->u,80,1)==((U)UINT64_C(0x0))));
L_1803fc696_6:;
wr(s->u,71,1,(rd(s->u,80,1)-((U)UINT64_C(0x1))));
L_1803fc696_7:;
wr(s->u,72,4,((rd(s->u,71,1)>=32)?0:(rd(s->u,81,4)<<rd(s->u,71,1))));
L_1803fc696_8:;
wr(s->u,76,1,(sx(rd(s->u,72,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc696_9:;
wr(s->u,0,1,rd(s->u,70,1));
L_1803fc696_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fc696_11:;
wr(s->u,2,1,(!rd(s->u,70,1)));
L_1803fc696_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fc696_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,76,1)));
L_1803fc696_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fc696_15:;
wr(s->u,77,1,(rd(s->u,80,1)==((U)UINT64_C(0x1))));
L_1803fc696_16:;
wr(s->u,78,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc696_17:;
wr(s->u,79,1,(rd(s->r,512,1)^rd(s->u,78,1)));
L_1803fc696_18:;
wr(s->u,0,1,rd(s->u,77,1));
L_1803fc696_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,79,1)));
L_1803fc696_20:;
wr(s->u,2,1,(!rd(s->u,77,1)));
L_1803fc696_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fc696_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fc696_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fc696_24:;
wr(s->u,51,1,(rd(s->u,80,1)!=((U)UINT64_C(0x0))));
L_1803fc696_25:;
wr(s->u,52,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc696_26:;
wr(s->u,53,1,(!rd(s->u,51,1)));
L_1803fc696_27:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,519,1)));
L_1803fc696_28:;
wr(s->u,55,1,(rd(s->u,51,1)&rd(s->u,52,1)));
L_1803fc696_29:;
wr(s->r,519,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1803fc696_30:;
wr(s->u,56,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803fc696_31:;
wr(s->u,57,1,(!rd(s->u,51,1)));
L_1803fc696_32:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,518,1)));
L_1803fc696_33:;
wr(s->u,59,1,(rd(s->u,51,1)&rd(s->u,56,1)));
L_1803fc696_34:;
wr(s->r,518,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803fc696_35:;
wr(s->u,60,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803fc696_36:;
wr(s->u,64,1,pop(rd(s->u,60,4),4));
L_1803fc696_37:;
wr(s->u,65,1,(rd(s->u,64,1)&((U)UINT64_C(0x1))));
L_1803fc696_38:;
wr(s->u,66,1,(rd(s->u,65,1)==((U)UINT64_C(0x0))));
L_1803fc696_39:;
wr(s->u,67,1,(!rd(s->u,51,1)));
L_1803fc696_40:;
wr(s->u,68,1,(rd(s->u,67,1)&rd(s->r,514,1)));
L_1803fc696_41:;
wr(s->u,69,1,(rd(s->u,51,1)&rd(s->u,66,1)));
L_1803fc696_42:;
wr(s->r,514,1,(rd(s->u,68,1)|rd(s->u,69,1)));
L_1803fc696_43:;
/* 1803fc698: addss xmm1, xmm0 */
L_1803fc698_0:;
L_1803fc698_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fc698_2:;
/* 1803fc69c: movss dword ptr [r13], xmm1 */
L_1803fc69c_0:;
L_1803fc69c_1:;
wr(s->u,21,4,rd(s->r,4672,4));
L_1803fc69c_2:;
mw((uint64_t)rd(s->r,168,8),4,rd(s->u,21,4));
L_1803fc69c_3:;
/* 1803fc6a2: subss xmm2, xmm0 */
L_1803fc6a2_0:;
L_1803fc6a2_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fc6a2_2:;
/* 1803fc6a6: movss dword ptr [r13 + 4], xmm2 */
L_1803fc6a6_0:;
L_1803fc6a6_1:;
wr(s->u,5,8,(rd(s->r,168,8)+((U)UINT64_C(0x4))));
L_1803fc6a6_2:;
wr(s->u,21,4,rd(s->r,4736,4));
L_1803fc6a6_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,21,4));
L_1803fc6a6_4:;
/* 1803fc6ac: mov rax, qword ptr [r14 + 0x50] */
L_1803fc6ac_0:;
L_1803fc6ac_1:;
wr(s->u,5,8,(rd(s->r,176,8)+((U)UINT64_C(0x50))));
L_1803fc6ac_2:;
wr(s->u,33,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803fc6ac_3:;
wr(s->r,0,8,rd(s->u,33,8));
L_1803fc6ac_4:;
/* 1803fc6b0: mov qword ptr [rsp + 0x20], rax */
L_1803fc6b0_0:;
L_1803fc6b0_1:;
wr(s->u,13,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fc6b0_2:;
wr(s->u,25,8,rd(s->r,0,8));
L_1803fc6b0_3:;
mw((uint64_t)rd(s->u,13,8),8,rd(s->u,25,8));
L_1803fc6b0_4:;
/* 1803fc6b5: mov rcx, r12 */
L_1803fc6b5_0:;
L_1803fc6b5_1:;
wr(s->r,8,8,rd(s->r,160,8));
L_1803fc6b5_2:;
/* 1803fc6b8: mov rdx, r13 */
L_1803fc6b8_0:;
L_1803fc6b8_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803fc6b8_2:;
/* 1803fc6bb: mov r8d, esi */
L_1803fc6bb_0:;
L_1803fc6bb_1:;
wr(s->r,128,4,rd(s->r,48,4));
L_1803fc6bb_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fc6bb_3:;
/* 1803fc6be: mov r9d, 0xffffffff */
L_1803fc6be_0:;
L_1803fc6be_1:;
wr(s->r,136,8,((U)UINT64_C(0xffffffff)));
L_1803fc6be_2:;
/* 1803fc6c4: call 0x180424410 */
L_1803fc6c4_0:;
L_1803fc6c4_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc6c4_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc6c9)));
L_1803fc6c4_3:;
return (uint64_t)UINT64_C(0x180424410);
L_1803fc6c4_4:;
return UINT64_C(0x1803fc6c9);
}
uint64_t b_1803fc679(CPU*s){
/* 1803fc679: movss xmm2, dword ptr [r12] */
L_1803fc679_0:;
L_1803fc679_1:;
wr(s->u,21,4,mr((uint64_t)rd(s->r,160,8),4));
L_1803fc679_2:;
wr(s->r,4736,4,rd(s->u,21,4));
L_1803fc679_3:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fc679_4:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fc679_5:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fc679_6:;
/* 1803fc67f: movss xmm0, dword ptr [r12 + 4] */
L_1803fc67f_0:;
L_1803fc67f_1:;
wr(s->u,13,8,(((U)UINT64_C(0x4))+rd(s->r,160,8)));
L_1803fc67f_2:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803fc67f_3:;
wr(s->r,4608,4,rd(s->u,21,4));
L_1803fc67f_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fc67f_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fc67f_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fc67f_7:;
/* 1803fc686: movss xmm1, dword ptr [r12] */
L_1803fc686_0:;
L_1803fc686_1:;
wr(s->u,21,4,mr((uint64_t)rd(s->r,160,8),4));
L_1803fc686_2:;
wr(s->r,4672,4,rd(s->u,21,4));
L_1803fc686_3:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fc686_4:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fc686_5:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fc686_6:;
/* 1803fc68c: lea ebx, [rbp - 1] */
L_1803fc68c_0:;
L_1803fc68c_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fc68c_2:;
wr(s->r,24,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fc68c_3:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fc68c_4:;
/* 1803fc68f: mov ecx, ebx */
L_1803fc68f_0:;
L_1803fc68f_1:;
wr(s->r,8,4,rd(s->r,24,4));
L_1803fc68f_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fc68f_3:;
/* 1803fc691: mov esi, 1 */
L_1803fc691_0:;
L_1803fc691_1:;
wr(s->r,48,8,((U)UINT64_C(0x1)));
L_1803fc691_2:;
/* 1803fc696: shl esi, cl */
L_1803fc696_0:;
L_1803fc696_1:;
wr(s->u,70,1,(rd(s->r,8,1)&((U)UINT64_C(0x1f))));
L_1803fc696_2:;
wr(s->u,71,4,rd(s->r,48,4));
L_1803fc696_3:;
wr(s->r,48,4,((rd(s->u,70,1)>=32)?0:(rd(s->r,48,4)<<rd(s->u,70,1))));
L_1803fc696_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803fc696_5:;
wr(s->u,60,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803fc696_6:;
wr(s->u,61,1,(rd(s->u,70,1)-((U)UINT64_C(0x1))));
L_1803fc696_7:;
wr(s->u,62,4,((rd(s->u,61,1)>=32)?0:(rd(s->u,71,4)<<rd(s->u,61,1))));
L_1803fc696_8:;
wr(s->u,66,1,(sx(rd(s->u,62,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc696_9:;
wr(s->u,0,1,rd(s->u,60,1));
L_1803fc696_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fc696_11:;
wr(s->u,2,1,(!rd(s->u,60,1)));
L_1803fc696_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fc696_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,66,1)));
L_1803fc696_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fc696_15:;
wr(s->u,67,1,(rd(s->u,70,1)==((U)UINT64_C(0x1))));
L_1803fc696_16:;
wr(s->u,68,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc696_17:;
wr(s->u,69,1,(rd(s->r,512,1)^rd(s->u,68,1)));
L_1803fc696_18:;
wr(s->u,0,1,rd(s->u,67,1));
L_1803fc696_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,69,1)));
L_1803fc696_20:;
wr(s->u,2,1,(!rd(s->u,67,1)));
L_1803fc696_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fc696_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fc696_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fc696_24:;
wr(s->u,41,1,(rd(s->u,70,1)!=((U)UINT64_C(0x0))));
L_1803fc696_25:;
wr(s->u,42,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc696_26:;
wr(s->u,43,1,(!rd(s->u,41,1)));
L_1803fc696_27:;
wr(s->u,44,1,(rd(s->u,43,1)&rd(s->r,519,1)));
L_1803fc696_28:;
wr(s->u,45,1,(rd(s->u,41,1)&rd(s->u,42,1)));
L_1803fc696_29:;
wr(s->r,519,1,(rd(s->u,44,1)|rd(s->u,45,1)));
L_1803fc696_30:;
wr(s->u,46,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803fc696_31:;
wr(s->u,47,1,(!rd(s->u,41,1)));
L_1803fc696_32:;
wr(s->u,48,1,(rd(s->u,47,1)&rd(s->r,518,1)));
L_1803fc696_33:;
wr(s->u,49,1,(rd(s->u,41,1)&rd(s->u,46,1)));
L_1803fc696_34:;
wr(s->r,518,1,(rd(s->u,48,1)|rd(s->u,49,1)));
L_1803fc696_35:;
wr(s->u,50,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803fc696_36:;
wr(s->u,54,1,pop(rd(s->u,50,4),4));
L_1803fc696_37:;
wr(s->u,55,1,(rd(s->u,54,1)&((U)UINT64_C(0x1))));
L_1803fc696_38:;
wr(s->u,56,1,(rd(s->u,55,1)==((U)UINT64_C(0x0))));
L_1803fc696_39:;
wr(s->u,57,1,(!rd(s->u,41,1)));
L_1803fc696_40:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,514,1)));
L_1803fc696_41:;
wr(s->u,59,1,(rd(s->u,41,1)&rd(s->u,56,1)));
L_1803fc696_42:;
wr(s->r,514,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803fc696_43:;
/* 1803fc698: addss xmm1, xmm0 */
L_1803fc698_0:;
L_1803fc698_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fc698_2:;
/* 1803fc69c: movss dword ptr [r13], xmm1 */
L_1803fc69c_0:;
L_1803fc69c_1:;
wr(s->u,21,4,rd(s->r,4672,4));
L_1803fc69c_2:;
mw((uint64_t)rd(s->r,168,8),4,rd(s->u,21,4));
L_1803fc69c_3:;
/* 1803fc6a2: subss xmm2, xmm0 */
L_1803fc6a2_0:;
L_1803fc6a2_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fc6a2_2:;
/* 1803fc6a6: movss dword ptr [r13 + 4], xmm2 */
L_1803fc6a6_0:;
L_1803fc6a6_1:;
wr(s->u,5,8,(rd(s->r,168,8)+((U)UINT64_C(0x4))));
L_1803fc6a6_2:;
wr(s->u,21,4,rd(s->r,4736,4));
L_1803fc6a6_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,21,4));
L_1803fc6a6_4:;
/* 1803fc6ac: mov rax, qword ptr [r14 + 0x50] */
L_1803fc6ac_0:;
L_1803fc6ac_1:;
wr(s->u,5,8,(rd(s->r,176,8)+((U)UINT64_C(0x50))));
L_1803fc6ac_2:;
wr(s->u,33,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803fc6ac_3:;
wr(s->r,0,8,rd(s->u,33,8));
L_1803fc6ac_4:;
/* 1803fc6b0: mov qword ptr [rsp + 0x20], rax */
L_1803fc6b0_0:;
L_1803fc6b0_1:;
wr(s->u,13,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fc6b0_2:;
wr(s->u,25,8,rd(s->r,0,8));
L_1803fc6b0_3:;
mw((uint64_t)rd(s->u,13,8),8,rd(s->u,25,8));
L_1803fc6b0_4:;
/* 1803fc6b5: mov rcx, r12 */
L_1803fc6b5_0:;
L_1803fc6b5_1:;
wr(s->r,8,8,rd(s->r,160,8));
L_1803fc6b5_2:;
/* 1803fc6b8: mov rdx, r13 */
L_1803fc6b8_0:;
L_1803fc6b8_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803fc6b8_2:;
/* 1803fc6bb: mov r8d, esi */
L_1803fc6bb_0:;
L_1803fc6bb_1:;
wr(s->r,128,4,rd(s->r,48,4));
L_1803fc6bb_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fc6bb_3:;
/* 1803fc6be: mov r9d, 0xffffffff */
L_1803fc6be_0:;
L_1803fc6be_1:;
wr(s->r,136,8,((U)UINT64_C(0xffffffff)));
L_1803fc6be_2:;
/* 1803fc6c4: call 0x180424410 */
L_1803fc6c4_0:;
L_1803fc6c4_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc6c4_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc6c9)));
L_1803fc6c4_3:;
return (uint64_t)UINT64_C(0x180424410);
L_1803fc6c4_4:;
return UINT64_C(0x1803fc6c9);
}
uint64_t b_1803fc6c9(CPU*s){
/* 1803fc6c9: cmp ebx, 5 */
L_1803fc6c9_0:;
L_1803fc6c9_1:;
wr(s->u,9,4,rd(s->r,24,4));
L_1803fc6c9_2:;
wr(s->r,512,1,(rd(s->u,9,4)<((U)UINT64_C(0x5))));
L_1803fc6c9_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,9,4),((U)UINT64_C(0x5)),4,1));
L_1803fc6c9_4:;
wr(s->u,13,4,(rd(s->u,9,4)-((U)UINT64_C(0x5))));
L_1803fc6c9_5:;
wr(s->r,519,1,(sx(rd(s->u,13,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc6c9_6:;
wr(s->r,518,1,(rd(s->u,13,4)==((U)UINT64_C(0x0))));
L_1803fc6c9_7:;
wr(s->u,3,4,(rd(s->u,13,4)&((U)UINT64_C(0xff))));
L_1803fc6c9_8:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fc6c9_9:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fc6c9_10:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fc6c9_11:;
/* 1803fc6cc: jg 0x1803fc71b */
L_1803fc6cc_0:;
L_1803fc6cc_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fc6cc_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fc6cc_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fc6cc_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fc71b);}
L_1803fc6cc_5:;
return UINT64_C(0x1803fc6ce);
}
uint64_t b_1803fc6ce(CPU*s){
/* 1803fc6ce: mov eax, dword ptr [r14 + 0xc] */
L_1803fc6ce_0:;
L_1803fc6ce_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fc6ce_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc6ce_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803fc6ce_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc6ce_5:;
/* 1803fc6d2: test eax, eax */
L_1803fc6d2_0:;
L_1803fc6d2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc6d2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc6d2_3:;
wr(s->u,18,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803fc6d2_4:;
wr(s->r,519,1,(sx(rd(s->u,18,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc6d2_5:;
wr(s->r,518,1,(rd(s->u,18,4)==((U)UINT64_C(0x0))));
L_1803fc6d2_6:;
wr(s->u,12,4,(rd(s->u,18,4)&((U)UINT64_C(0xff))));
L_1803fc6d2_7:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803fc6d2_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fc6d2_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fc6d2_10:;
/* 1803fc6d4: je 0x1803fc6fe */
L_1803fc6d4_0:;
L_1803fc6d4_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc6fe);}
L_1803fc6d4_2:;
return UINT64_C(0x1803fc6d6);
}
uint64_t b_1803fc6d6(CPU*s){
/* 1803fc6d6: movss xmm2, dword ptr [r14 + 0x10] */
L_1803fc6d6_0:;
L_1803fc6d6_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x10))));
L_1803fc6d6_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc6d6_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803fc6d6_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fc6d6_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fc6d6_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fc6d6_7:;
/* 1803fc6dc: movsxd rax, ebp */
L_1803fc6dc_0:;
L_1803fc6dc_1:;
wr(s->r,0,8,(U)sx(rd(s->r,40,4),4));
L_1803fc6dc_2:;
/* 1803fc6df: mov rcx, r13 */
L_1803fc6df_0:;
L_1803fc6df_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803fc6df_2:;
/* 1803fc6e2: mov rdx, r13 */
L_1803fc6e2_0:;
L_1803fc6e2_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803fc6e2_2:;
/* 1803fc6e5: movd r8d, xmm2 */
L_1803fc6e5_0:;
L_1803fc6e5_1:;
wr(s->r,128,4,(rd(s->r,4736,16) >> (((U)UINT64_C(0x0))*8)));
L_1803fc6e5_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fc6e5_3:;
/* 1803fc6ea: lea r13, [rip - 0x3fc6f1] */
L_1803fc6ea_0:;
L_1803fc6ea_1:;
wr(s->r,168,8,((U)UINT64_C(0x180000000)));
L_1803fc6ea_2:;
/* 1803fc6f1: call qword ptr [r13 + rax*8 + 0x80e5e0] */
L_1803fc6f1_0:;
L_1803fc6f1_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80e5e0))+rd(s->r,168,8)));
L_1803fc6f1_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803fc6f1_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803fc6f1_4:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803fc6f1_5:;
wr(s->u,44,8,rd(s->u,36,8));
L_1803fc6f1_6:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc6f1_7:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc6f9)));
L_1803fc6f1_8:;
return (uint64_t)rd(s->u,44,8);
L_1803fc6f1_9:;
return UINT64_C(0x1803fc6f9);
}
uint64_t b_1803fc6f9(CPU*s){
/* 1803fc6f9: jmp 0x1803fc7af */
L_1803fc6f9_0:;
L_1803fc6f9_1:;
return UINT64_C(0x1803fc7af);
L_1803fc6f9_2:;
return UINT64_C(0x1803fc6fe);
}
uint64_t b_1803fc6fe(CPU*s){
/* 1803fc6fe: movsxd rax, ebp */
L_1803fc6fe_0:;
L_1803fc6fe_1:;
wr(s->r,0,8,(U)sx(rd(s->r,40,4),4));
L_1803fc6fe_2:;
/* 1803fc701: mov rcx, r13 */
L_1803fc701_0:;
L_1803fc701_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803fc701_2:;
/* 1803fc704: mov rdx, r13 */
L_1803fc704_0:;
L_1803fc704_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803fc704_2:;
/* 1803fc707: lea r13, [rip - 0x3fc70e] */
L_1803fc707_0:;
L_1803fc707_1:;
wr(s->r,168,8,((U)UINT64_C(0x180000000)));
L_1803fc707_2:;
/* 1803fc70e: call qword ptr [r13 + rax*8 + 0x80e5b0] */
L_1803fc70e_0:;
L_1803fc70e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x80e5b0))+rd(s->r,168,8)));
L_1803fc70e_2:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803fc70e_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803fc70e_4:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803fc70e_5:;
wr(s->u,32,8,rd(s->u,24,8));
L_1803fc70e_6:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc70e_7:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc716)));
L_1803fc70e_8:;
return (uint64_t)rd(s->u,32,8);
L_1803fc70e_9:;
return UINT64_C(0x1803fc716);
}
uint64_t b_1803fc716(CPU*s){
/* 1803fc716: jmp 0x1803fc7af */
L_1803fc716_0:;
L_1803fc716_1:;
return UINT64_C(0x1803fc7af);
L_1803fc716_2:;
return UINT64_C(0x1803fc71b);
}
uint64_t b_1803fc71b(CPU*s){
/* 1803fc71b: cmp ebx, 0xf */
L_1803fc71b_0:;
L_1803fc71b_1:;
wr(s->u,8,4,rd(s->r,24,4));
L_1803fc71b_2:;
wr(s->r,512,1,(rd(s->u,8,4)<((U)UINT64_C(0xf))));
L_1803fc71b_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),((U)UINT64_C(0xf)),4,1));
L_1803fc71b_4:;
wr(s->u,12,4,(rd(s->u,8,4)-((U)UINT64_C(0xf))));
L_1803fc71b_5:;
wr(s->r,519,1,(sx(rd(s->u,12,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc71b_6:;
wr(s->r,518,1,(rd(s->u,12,4)==((U)UINT64_C(0x0))));
L_1803fc71b_7:;
wr(s->u,2,4,(rd(s->u,12,4)&((U)UINT64_C(0xff))));
L_1803fc71b_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fc71b_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fc71b_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fc71b_11:;
/* 1803fc71e: jle 0x1803fc76e */
L_1803fc71e_0:;
L_1803fc71e_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc71e_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fc71e_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fc76e);}
L_1803fc71e_4:;
return UINT64_C(0x1803fc720);
}
uint64_t b_1803fc720(CPU*s){
/* 1803fc720: cmp ebx, 0x10 */
L_1803fc720_0:;
L_1803fc720_1:;
wr(s->u,9,4,rd(s->r,24,4));
L_1803fc720_2:;
wr(s->r,512,1,(rd(s->u,9,4)<((U)UINT64_C(0x10))));
L_1803fc720_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,9,4),((U)UINT64_C(0x10)),4,1));
L_1803fc720_4:;
wr(s->u,13,4,(rd(s->u,9,4)-((U)UINT64_C(0x10))));
L_1803fc720_5:;
wr(s->r,519,1,(sx(rd(s->u,13,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc720_6:;
wr(s->r,518,1,(rd(s->u,13,4)==((U)UINT64_C(0x0))));
L_1803fc720_7:;
wr(s->u,3,4,(rd(s->u,13,4)&((U)UINT64_C(0xff))));
L_1803fc720_8:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fc720_9:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fc720_10:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fc720_11:;
/* 1803fc723: jg 0x1803fc756 */
L_1803fc723_0:;
L_1803fc723_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fc723_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fc723_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fc723_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fc756);}
L_1803fc723_5:;
return UINT64_C(0x1803fc725);
}
uint64_t b_1803fc725(CPU*s){
/* 1803fc725: mov r8, qword ptr [r14 + 0x28] */
L_1803fc725_0:;
L_1803fc725_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x28))));
L_1803fc725_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fc725_3:;
wr(s->r,128,8,rd(s->u,8,8));
L_1803fc725_4:;
/* 1803fc729: mov rcx, r13 */
L_1803fc729_0:;
L_1803fc729_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803fc729_2:;
/* 1803fc72c: mov edx, esi */
L_1803fc72c_0:;
L_1803fc72c_1:;
wr(s->r,16,4,rd(s->r,48,4));
L_1803fc72c_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fc72c_3:;
/* 1803fc72e: call 0x180412690 */
L_1803fc72e_0:;
L_1803fc72e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc72e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc733)));
L_1803fc72e_3:;
return (uint64_t)UINT64_C(0x180412690);
L_1803fc72e_4:;
return UINT64_C(0x1803fc733);
}
uint64_t b_1803fc733(CPU*s){
/* 1803fc733: mov r8, qword ptr [r14 + 0x30] */
L_1803fc733_0:;
L_1803fc733_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x30))));
L_1803fc733_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fc733_3:;
wr(s->r,128,8,rd(s->u,20,8));
L_1803fc733_4:;
/* 1803fc737: mov dword ptr [rsp + 0x20], 1 */
L_1803fc737_0:;
L_1803fc737_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fc737_2:;
wr(s->u,16,4,((U)UINT64_C(0x1)));
L_1803fc737_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fc737_4:;
/* 1803fc73f: mov rcx, r13 */
L_1803fc73f_0:;
L_1803fc73f_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803fc73f_2:;
/* 1803fc742: mov edx, esi */
L_1803fc742_0:;
L_1803fc742_1:;
wr(s->r,16,4,rd(s->r,48,4));
L_1803fc742_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fc742_3:;
/* 1803fc744: mov r9, rdi */
L_1803fc744_0:;
L_1803fc744_1:;
wr(s->r,136,8,rd(s->r,56,8));
L_1803fc744_2:;
/* 1803fc747: call 0x18041af90 */
L_1803fc747_0:;
L_1803fc747_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc747_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc74c)));
L_1803fc747_3:;
return (uint64_t)UINT64_C(0x18041af90);
L_1803fc747_4:;
return UINT64_C(0x1803fc74c);
}
uint64_t b_1803fc74c(CPU*s){
/* 1803fc74c: mov eax, dword ptr [r14 + 0xc] */
L_1803fc74c_0:;
L_1803fc74c_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fc74c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc74c_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803fc74c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc74c_5:;
/* 1803fc750: test eax, eax */
L_1803fc750_0:;
L_1803fc750_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc750_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc750_3:;
wr(s->u,19,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803fc750_4:;
wr(s->r,519,1,(sx(rd(s->u,19,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc750_5:;
wr(s->r,518,1,(rd(s->u,19,4)==((U)UINT64_C(0x0))));
L_1803fc750_6:;
wr(s->u,13,4,(rd(s->u,19,4)&((U)UINT64_C(0xff))));
L_1803fc750_7:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803fc750_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fc750_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fc750_10:;
/* 1803fc752: jne 0x1803fc796 */
L_1803fc752_0:;
L_1803fc752_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803fc752_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803fc796);}
L_1803fc752_3:;
return UINT64_C(0x1803fc754);
}
uint64_t b_1803fc754(CPU*s){
/* 1803fc754: jmp 0x1803fc7af */
L_1803fc754_0:;
L_1803fc754_1:;
return UINT64_C(0x1803fc7af);
L_1803fc754_2:;
return UINT64_C(0x1803fc756);
}
uint64_t b_1803fc756(CPU*s){
/* 1803fc756: mov qword ptr [rsp + 0x20], rdi */
L_1803fc756_0:;
L_1803fc756_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fc756_2:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803fc756_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803fc756_4:;
/* 1803fc75b: mov rcx, r14 */
L_1803fc75b_0:;
L_1803fc75b_1:;
wr(s->r,8,8,rd(s->r,176,8));
L_1803fc75b_2:;
/* 1803fc75e: mov rdx, r13 */
L_1803fc75e_0:;
L_1803fc75e_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803fc75e_2:;
/* 1803fc761: mov r8, r13 */
L_1803fc761_0:;
L_1803fc761_1:;
wr(s->r,128,8,rd(s->r,168,8));
L_1803fc761_2:;
/* 1803fc764: mov r9d, ebx */
L_1803fc764_0:;
L_1803fc764_1:;
wr(s->r,136,4,rd(s->r,24,4));
L_1803fc764_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fc764_3:;
/* 1803fc767: call 0x180428840 */
L_1803fc767_0:;
L_1803fc767_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc767_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc76c)));
L_1803fc767_3:;
return (uint64_t)UINT64_C(0x180428840);
L_1803fc767_4:;
return UINT64_C(0x1803fc76c);
}
uint64_t b_1803fc76c(CPU*s){
/* 1803fc76c: jmp 0x1803fc7af */
L_1803fc76c_0:;
L_1803fc76c_1:;
return UINT64_C(0x1803fc7af);
L_1803fc76c_2:;
return UINT64_C(0x1803fc76e);
}
uint64_t b_1803fc76e(CPU*s){
/* 1803fc76e: mov rax, qword ptr [r14 + 0x28] */
L_1803fc76e_0:;
L_1803fc76e_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x28))));
L_1803fc76e_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fc76e_3:;
wr(s->r,0,8,rd(s->u,24,8));
L_1803fc76e_4:;
/* 1803fc772: mov r9, qword ptr [r14 + 0x30] */
L_1803fc772_0:;
L_1803fc772_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x30))));
L_1803fc772_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fc772_3:;
wr(s->r,136,8,rd(s->u,24,8));
L_1803fc772_4:;
/* 1803fc776: mov qword ptr [rsp + 0x20], rax */
L_1803fc776_0:;
L_1803fc776_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fc776_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803fc776_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803fc776_4:;
/* 1803fc77b: mov rcx, r13 */
L_1803fc77b_0:;
L_1803fc77b_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803fc77b_2:;
/* 1803fc77e: mov rdx, r13 */
L_1803fc77e_0:;
L_1803fc77e_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803fc77e_2:;
/* 1803fc781: mov qword ptr [rsp + 0x28], rdi */
L_1803fc781_0:;
L_1803fc781_1:;
wr(s->u,8,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fc781_2:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803fc781_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803fc781_4:;
/* 1803fc786: mov r8d, esi */
L_1803fc786_0:;
L_1803fc786_1:;
wr(s->r,128,4,rd(s->r,48,4));
L_1803fc786_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fc786_3:;
/* 1803fc789: call 0x180419250 */
L_1803fc789_0:;
L_1803fc789_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc789_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc78e)));
L_1803fc789_3:;
return (uint64_t)UINT64_C(0x180419250);
L_1803fc789_4:;
return UINT64_C(0x1803fc78e);
}
uint64_t b_1803fc78e(CPU*s){
/* 1803fc78e: mov eax, dword ptr [r14 + 0xc] */
L_1803fc78e_0:;
L_1803fc78e_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fc78e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc78e_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803fc78e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc78e_5:;
/* 1803fc792: test eax, eax */
L_1803fc792_0:;
L_1803fc792_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc792_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc792_3:;
wr(s->u,18,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803fc792_4:;
wr(s->r,519,1,(sx(rd(s->u,18,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc792_5:;
wr(s->r,518,1,(rd(s->u,18,4)==((U)UINT64_C(0x0))));
L_1803fc792_6:;
wr(s->u,12,4,(rd(s->u,18,4)&((U)UINT64_C(0xff))));
L_1803fc792_7:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803fc792_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fc792_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fc792_10:;
/* 1803fc794: je 0x1803fc7af */
L_1803fc794_0:;
L_1803fc794_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc7af);}
L_1803fc794_2:;
return UINT64_C(0x1803fc796);
}
uint64_t b_1803fc796(CPU*s){
/* 1803fc796: movss xmm0, dword ptr [r14 + 0x10] */
L_1803fc796_0:;
L_1803fc796_1:;
wr(s->u,5,8,(rd(s->r,176,8)+((U)UINT64_C(0x10))));
L_1803fc796_2:;
wr(s->u,13,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803fc796_3:;
wr(s->r,4608,4,rd(s->u,13,4));
L_1803fc796_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fc796_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fc796_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fc796_7:;
/* 1803fc79c: mov r8d, 1 */
L_1803fc79c_0:;
L_1803fc79c_1:;
wr(s->r,128,8,((U)UINT64_C(0x1)));
L_1803fc79c_2:;
/* 1803fc7a2: mov ecx, ebp */
L_1803fc7a2_0:;
L_1803fc7a2_1:;
wr(s->r,8,4,rd(s->r,40,4));
L_1803fc7a2_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fc7a2_3:;
/* 1803fc7a4: shl r8d, cl */
L_1803fc7a4_0:;
L_1803fc7a4_1:;
wr(s->u,46,1,(rd(s->r,8,1)&((U)UINT64_C(0x1f))));
L_1803fc7a4_2:;
wr(s->u,47,4,rd(s->r,128,4));
L_1803fc7a4_3:;
wr(s->r,128,4,((rd(s->u,46,1)>=32)?0:(rd(s->r,128,4)<<rd(s->u,46,1))));
L_1803fc7a4_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fc7a4_5:;
wr(s->u,36,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803fc7a4_6:;
wr(s->u,37,1,(rd(s->u,46,1)-((U)UINT64_C(0x1))));
L_1803fc7a4_7:;
wr(s->u,38,4,((rd(s->u,37,1)>=32)?0:(rd(s->u,47,4)<<rd(s->u,37,1))));
L_1803fc7a4_8:;
wr(s->u,42,1,(sx(rd(s->u,38,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc7a4_9:;
wr(s->u,0,1,rd(s->u,36,1));
L_1803fc7a4_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fc7a4_11:;
wr(s->u,2,1,(!rd(s->u,36,1)));
L_1803fc7a4_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fc7a4_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,42,1)));
L_1803fc7a4_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fc7a4_15:;
wr(s->u,43,1,(rd(s->u,46,1)==((U)UINT64_C(0x1))));
L_1803fc7a4_16:;
wr(s->u,44,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc7a4_17:;
wr(s->u,45,1,(rd(s->r,512,1)^rd(s->u,44,1)));
L_1803fc7a4_18:;
wr(s->u,0,1,rd(s->u,43,1));
L_1803fc7a4_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,45,1)));
L_1803fc7a4_20:;
wr(s->u,2,1,(!rd(s->u,43,1)));
L_1803fc7a4_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fc7a4_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fc7a4_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fc7a4_24:;
wr(s->u,17,1,(rd(s->u,46,1)!=((U)UINT64_C(0x0))));
L_1803fc7a4_25:;
wr(s->u,18,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc7a4_26:;
wr(s->u,19,1,(!rd(s->u,17,1)));
L_1803fc7a4_27:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,519,1)));
L_1803fc7a4_28:;
wr(s->u,21,1,(rd(s->u,17,1)&rd(s->u,18,1)));
L_1803fc7a4_29:;
wr(s->r,519,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803fc7a4_30:;
wr(s->u,22,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fc7a4_31:;
wr(s->u,23,1,(!rd(s->u,17,1)));
L_1803fc7a4_32:;
wr(s->u,24,1,(rd(s->u,23,1)&rd(s->r,518,1)));
L_1803fc7a4_33:;
wr(s->u,25,1,(rd(s->u,17,1)&rd(s->u,22,1)));
L_1803fc7a4_34:;
wr(s->r,518,1,(rd(s->u,24,1)|rd(s->u,25,1)));
L_1803fc7a4_35:;
wr(s->u,26,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fc7a4_36:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803fc7a4_37:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803fc7a4_38:;
wr(s->u,32,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803fc7a4_39:;
wr(s->u,33,1,(!rd(s->u,17,1)));
L_1803fc7a4_40:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,514,1)));
L_1803fc7a4_41:;
wr(s->u,35,1,(rd(s->u,17,1)&rd(s->u,32,1)));
L_1803fc7a4_42:;
wr(s->r,514,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803fc7a4_43:;
/* 1803fc7a7: mov rdx, r13 */
L_1803fc7a7_0:;
L_1803fc7a7_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803fc7a7_2:;
/* 1803fc7aa: call 0x1803fcfe0 */
L_1803fc7aa_0:;
L_1803fc7aa_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc7aa_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc7af)));
L_1803fc7aa_3:;
return (uint64_t)UINT64_C(0x1803fcfe0);
L_1803fc7aa_4:;
return UINT64_C(0x1803fc7af);
}
uint64_t b_1803fc7af(CPU*s){
/* 1803fc7af: test rdi, rdi */
L_1803fc7af_0:;
L_1803fc7af_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc7af_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc7af_3:;
wr(s->u,10,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1803fc7af_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc7af_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc7af_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc7af_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc7af_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc7af_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc7af_10:;
/* 1803fc7b2: je 0x1803fc7b9 */
L_1803fc7b2_0:;
L_1803fc7b2_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc7b9);}
L_1803fc7b2_2:;
return UINT64_C(0x1803fc7b4);
}
uint64_t b_1803fc7b4(CPU*s){
/* 1803fc7b4: test r15, r15 */
L_1803fc7b4_0:;
L_1803fc7b4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc7b4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc7b4_3:;
wr(s->u,10,8,(rd(s->r,184,8)&rd(s->r,184,8)));
L_1803fc7b4_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc7b4_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc7b4_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc7b4_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc7b4_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc7b4_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc7b4_10:;
/* 1803fc7b7: je 0x1803fc7cc */
L_1803fc7b7_0:;
L_1803fc7b7_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc7cc);}
L_1803fc7b7_2:;
return UINT64_C(0x1803fc7b9);
}
uint64_t b_1803fc7b9(CPU*s){
/* 1803fc7b9: xor eax, eax */
L_1803fc7b9_0:;
L_1803fc7b9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc7b9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc7b9_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fc7b9_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc7b9_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc7b9_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fc7b9_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fc7b9_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fc7b9_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc7b9_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc7b9_11:;
/* 1803fc7bb: add rsp, 0x38 */
L_1803fc7bb_0:;
L_1803fc7bb_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc7bb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803fc7bb_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803fc7bb_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc7bb_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc7bb_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc7bb_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc7bb_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc7bb_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc7bb_10:;
/* 1803fc7bf: pop rbx */
L_1803fc7bf_0:;
L_1803fc7bf_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc7bf_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc7bf_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc7bf_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803fc7bf_5:;
/* 1803fc7c0: pop rbp */
L_1803fc7c0_0:;
L_1803fc7c0_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc7c0_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc7c0_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc7c0_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fc7c0_5:;
/* 1803fc7c1: pop rsi */
L_1803fc7c1_0:;
L_1803fc7c1_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc7c1_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc7c1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc7c1_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fc7c1_5:;
/* 1803fc7c2: pop rdi */
L_1803fc7c2_0:;
L_1803fc7c2_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc7c2_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc7c2_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc7c2_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fc7c2_5:;
/* 1803fc7c3: pop r12 */
L_1803fc7c3_0:;
L_1803fc7c3_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc7c3_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc7c3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc7c3_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fc7c3_5:;
/* 1803fc7c5: pop r13 */
L_1803fc7c5_0:;
L_1803fc7c5_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc7c5_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc7c5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc7c5_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fc7c5_5:;
/* 1803fc7c7: pop r14 */
L_1803fc7c7_0:;
L_1803fc7c7_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc7c7_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc7c7_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc7c7_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fc7c7_5:;
/* 1803fc7c9: pop r15 */
L_1803fc7c9_0:;
L_1803fc7c9_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc7c9_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc7c9_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc7c9_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fc7c9_5:;
/* 1803fc7cb: ret  */
L_1803fc7cb_0:;
L_1803fc7cb_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc7cb_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc7cb_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc7cb_4:;
return UINT64_C(0x1803fc7cc);
}
uint64_t b_1803fc7cc(CPU*s){
/* 1803fc7cc: mov rcx, rdi */
L_1803fc7cc_0:;
L_1803fc7cc_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803fc7cc_2:;
/* 1803fc7cf: call 0x1803fc9bc */
L_1803fc7cf_0:;
L_1803fc7cf_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc7cf_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc7d4)));
L_1803fc7cf_3:;
return (uint64_t)UINT64_C(0x1803fc9bc);
L_1803fc7cf_4:;
return UINT64_C(0x1803fc7d4);
}
uint64_t b_1803fc7d4(CPU*s){
/* 1803fc7d4: jmp 0x1803fc7b9 */
L_1803fc7d4_0:;
L_1803fc7d4_1:;
return UINT64_C(0x1803fc7b9);
L_1803fc7d4_2:;
return UINT64_C(0x1803fc7d6);
}
uint64_t b_1803fc7d6(CPU*s){
/* 1803fc7d6: call 0x1803fc814 */
L_1803fc7d6_0:;
L_1803fc7d6_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc7d6_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc7db)));
L_1803fc7d6_3:;
return (uint64_t)UINT64_C(0x1803fc814);
L_1803fc7d6_4:;
return UINT64_C(0x1803fc7db);
}
uint64_t b_1803fc7db(CPU*s){
/* 1803fc7db: mov rdi, rax */
L_1803fc7db_0:;
L_1803fc7db_1:;
wr(s->r,56,8,rd(s->r,0,8));
L_1803fc7db_2:;
/* 1803fc7de: test rdi, rdi */
L_1803fc7de_0:;
L_1803fc7de_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc7de_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc7de_3:;
wr(s->u,11,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1803fc7de_4:;
wr(s->r,519,1,(sx(rd(s->u,11,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc7de_5:;
wr(s->r,518,1,(rd(s->u,11,8)==((U)UINT64_C(0x0))));
L_1803fc7de_6:;
wr(s->u,1,8,(rd(s->u,11,8)&((U)UINT64_C(0xff))));
L_1803fc7de_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fc7de_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fc7de_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fc7de_10:;
/* 1803fc7e1: jne 0x1803fc679 */
L_1803fc7e1_0:;
L_1803fc7e1_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fc7e1_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fc679);}
L_1803fc7e1_3:;
return UINT64_C(0x1803fc7e7);
}
uint64_t b_1803fc7e7(CPU*s){
/* 1803fc7e7: mov eax, 0xfffffff7 */
L_1803fc7e7_0:;
L_1803fc7e7_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff7)));
L_1803fc7e7_2:;
/* 1803fc7ec: add rsp, 0x38 */
L_1803fc7ec_0:;
L_1803fc7ec_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc7ec_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803fc7ec_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803fc7ec_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc7ec_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc7ec_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc7ec_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc7ec_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc7ec_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc7ec_10:;
/* 1803fc7f0: pop rbx */
L_1803fc7f0_0:;
L_1803fc7f0_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc7f0_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc7f0_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc7f0_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803fc7f0_5:;
/* 1803fc7f1: pop rbp */
L_1803fc7f1_0:;
L_1803fc7f1_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc7f1_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc7f1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc7f1_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fc7f1_5:;
/* 1803fc7f2: pop rsi */
L_1803fc7f2_0:;
L_1803fc7f2_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc7f2_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc7f2_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc7f2_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fc7f2_5:;
/* 1803fc7f3: pop rdi */
L_1803fc7f3_0:;
L_1803fc7f3_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc7f3_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc7f3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc7f3_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fc7f3_5:;
/* 1803fc7f4: pop r12 */
L_1803fc7f4_0:;
L_1803fc7f4_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc7f4_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc7f4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc7f4_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fc7f4_5:;
/* 1803fc7f6: pop r13 */
L_1803fc7f6_0:;
L_1803fc7f6_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc7f6_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc7f6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc7f6_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fc7f6_5:;
/* 1803fc7f8: pop r14 */
L_1803fc7f8_0:;
L_1803fc7f8_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc7f8_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc7f8_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc7f8_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fc7f8_5:;
/* 1803fc7fa: pop r15 */
L_1803fc7fa_0:;
L_1803fc7fa_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc7fa_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc7fa_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc7fa_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fc7fa_5:;
/* 1803fc7fc: ret  */
L_1803fc7fc_0:;
L_1803fc7fc_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc7fc_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc7fc_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc7fc_4:;
return UINT64_C(0x1803fc7fd);
}
uint64_t b_1803fc7fd(CPU*s){
/* 1803fc7fd: mov eax, 0xfffffff8 */
L_1803fc7fd_0:;
L_1803fc7fd_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fc7fd_2:;
/* 1803fc802: add rsp, 0x38 */
L_1803fc802_0:;
L_1803fc802_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc802_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803fc802_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803fc802_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc802_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc802_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc802_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc802_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc802_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc802_10:;
/* 1803fc806: pop rbx */
L_1803fc806_0:;
L_1803fc806_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc806_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc806_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc806_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803fc806_5:;
/* 1803fc807: pop rbp */
L_1803fc807_0:;
L_1803fc807_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc807_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc807_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc807_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fc807_5:;
/* 1803fc808: pop rsi */
L_1803fc808_0:;
L_1803fc808_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc808_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc808_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc808_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fc808_5:;
/* 1803fc809: pop rdi */
L_1803fc809_0:;
L_1803fc809_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc809_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc809_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc809_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fc809_5:;
/* 1803fc80a: pop r12 */
L_1803fc80a_0:;
L_1803fc80a_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc80a_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc80a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc80a_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fc80a_5:;
/* 1803fc80c: pop r13 */
L_1803fc80c_0:;
L_1803fc80c_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc80c_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc80c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc80c_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fc80c_5:;
/* 1803fc80e: pop r14 */
L_1803fc80e_0:;
L_1803fc80e_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc80e_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc80e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc80e_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fc80e_5:;
/* 1803fc810: pop r15 */
L_1803fc810_0:;
L_1803fc810_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc810_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc810_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc810_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fc810_5:;
/* 1803fc812: ret  */
L_1803fc812_0:;
L_1803fc812_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc812_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc812_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc812_4:;
return UINT64_C(0x1803fc813);
}
uint64_t b_1803fc814(CPU*s){
/* 1803fc814: sub rsp, 0x28 */
L_1803fc814_0:;
L_1803fc814_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fc814_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fc814_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fc814_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc814_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc814_6:;
wr(s->u,3,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc814_7:;
wr(s->u,11,1,pop(rd(s->u,3,8),8));
L_1803fc814_8:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803fc814_9:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803fc814_10:;
/* 1803fc818: test ecx, ecx */
L_1803fc818_0:;
L_1803fc818_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc818_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc818_3:;
wr(s->u,13,4,(rd(s->r,8,4)&rd(s->r,8,4)));
L_1803fc818_4:;
wr(s->r,519,1,(sx(rd(s->u,13,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc818_5:;
wr(s->r,518,1,(rd(s->u,13,4)==((U)UINT64_C(0x0))));
L_1803fc818_6:;
wr(s->u,3,4,(rd(s->u,13,4)&((U)UINT64_C(0xff))));
L_1803fc818_7:;
wr(s->u,11,1,pop(rd(s->u,3,4),4));
L_1803fc818_8:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803fc818_9:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803fc818_10:;
/* 1803fc81a: jg 0x1803fc823 */
L_1803fc81a_0:;
L_1803fc81a_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fc81a_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fc81a_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fc81a_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fc823);}
L_1803fc81a_5:;
return UINT64_C(0x1803fc81c);
}
uint64_t b_1803fc81c(CPU*s){
/* 1803fc81c: xor eax, eax */
L_1803fc81c_0:;
L_1803fc81c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc81c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc81c_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fc81c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc81c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc81c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fc81c_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fc81c_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fc81c_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc81c_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc81c_11:;
/* 1803fc81e: add rsp, 0x28 */
L_1803fc81e_0:;
L_1803fc81e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc81e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fc81e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fc81e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc81e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc81e_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc81e_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc81e_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc81e_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc81e_10:;
/* 1803fc822: ret  */
L_1803fc822_0:;
L_1803fc822_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc822_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc822_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc822_4:;
return UINT64_C(0x1803fc823);
}
uint64_t b_1803fc823(CPU*s){
/* 1803fc823: movsxd rcx, ecx */
L_1803fc823_0:;
L_1803fc823_1:;
wr(s->r,8,8,(U)sx(rd(s->r,8,4),4));
L_1803fc823_2:;
/* 1803fc826: call 0x1804111e4 */
L_1803fc826_0:;
L_1803fc826_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc826_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc82b)));
L_1803fc826_3:;
return (uint64_t)UINT64_C(0x1804111e4);
L_1803fc826_4:;
return UINT64_C(0x1803fc82b);
}
uint64_t b_1803fc82b(CPU*s){
/* 1803fc82b: add rsp, 0x28 */
L_1803fc82b_0:;
L_1803fc82b_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc82b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fc82b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fc82b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc82b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc82b_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc82b_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc82b_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc82b_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc82b_10:;
/* 1803fc82f: ret  */
L_1803fc82f_0:;
L_1803fc82f_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc82f_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc82f_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc82f_4:;
return UINT64_C(0x1803fc830);
}
uint64_t b_1803fc830(CPU*s){
/* 1803fc830: test rdx, rdx */
L_1803fc830_0:;
L_1803fc830_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc830_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc830_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fc830_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc830_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc830_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc830_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc830_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc830_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc830_10:;
/* 1803fc833: je 0x1803fc85e */
L_1803fc833_0:;
L_1803fc833_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc85e);}
L_1803fc833_2:;
return UINT64_C(0x1803fc835);
}
uint64_t b_1803fc835(CPU*s){
/* 1803fc835: test rcx, rcx */
L_1803fc835_0:;
L_1803fc835_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc835_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc835_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fc835_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc835_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc835_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc835_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc835_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc835_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc835_10:;
/* 1803fc838: je 0x1803fc85e */
L_1803fc838_0:;
L_1803fc838_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc85e);}
L_1803fc838_2:;
return UINT64_C(0x1803fc83a);
}
uint64_t b_1803fc83a(CPU*s){
/* 1803fc83a: mov eax, dword ptr [rcx] */
L_1803fc83a_0:;
L_1803fc83a_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803fc83a_2:;
wr(s->r,0,4,rd(s->u,0,4));
L_1803fc83a_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc83a_4:;
/* 1803fc83c: cmp eax, 6 */
L_1803fc83c_0:;
L_1803fc83c_1:;
wr(s->u,10,4,rd(s->r,0,4));
L_1803fc83c_2:;
wr(s->r,512,1,(rd(s->u,10,4)<((U)UINT64_C(0x6))));
L_1803fc83c_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,10,4),((U)UINT64_C(0x6)),4,1));
L_1803fc83c_4:;
wr(s->u,14,4,(rd(s->u,10,4)-((U)UINT64_C(0x6))));
L_1803fc83c_5:;
wr(s->r,519,1,(sx(rd(s->u,14,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc83c_6:;
wr(s->r,518,1,(rd(s->u,14,4)==((U)UINT64_C(0x0))));
L_1803fc83c_7:;
wr(s->u,4,4,(rd(s->u,14,4)&((U)UINT64_C(0xff))));
L_1803fc83c_8:;
wr(s->u,8,1,pop(rd(s->u,4,4),4));
L_1803fc83c_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc83c_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc83c_11:;
/* 1803fc83f: je 0x1803fc847 */
L_1803fc83f_0:;
L_1803fc83f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc847);}
L_1803fc83f_2:;
return UINT64_C(0x1803fc841);
}
uint64_t b_1803fc841(CPU*s){
/* 1803fc841: mov eax, 0xffffffef */
L_1803fc841_0:;
L_1803fc841_1:;
wr(s->r,0,8,((U)UINT64_C(0xffffffef)));
L_1803fc841_2:;
/* 1803fc846: ret  */
L_1803fc846_0:;
L_1803fc846_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc846_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc846_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc846_4:;
return UINT64_C(0x1803fc847);
}
uint64_t b_1803fc847(CPU*s){
/* 1803fc847: mov ecx, dword ptr [rcx + 0x18] */
L_1803fc847_0:;
L_1803fc847_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x18))));
L_1803fc847_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc847_3:;
wr(s->r,8,4,rd(s->u,12,4));
L_1803fc847_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fc847_5:;
/* 1803fc84a: lea r9d, [rcx + 0x20] */
L_1803fc84a_0:;
L_1803fc84a_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x20))));
L_1803fc84a_2:;
wr(s->r,136,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fc84a_3:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fc84a_4:;
/* 1803fc84e: xor r8d, r8d */
L_1803fc84e_0:;
L_1803fc84e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc84e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc84e_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1803fc84e_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fc84e_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc84e_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fc84e_7:;
wr(s->u,18,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fc84e_8:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803fc84e_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fc84e_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fc84e_11:;
/* 1803fc851: cmp ecx, 0 */
L_1803fc851_0:;
L_1803fc851_1:;
wr(s->u,29,4,rd(s->r,8,4));
L_1803fc851_2:;
wr(s->r,512,1,(rd(s->u,29,4)<((U)UINT64_C(0x0))));
L_1803fc851_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,29,4),((U)UINT64_C(0x0)),4,1));
L_1803fc851_4:;
wr(s->u,33,4,(rd(s->u,29,4)-((U)UINT64_C(0x0))));
L_1803fc851_5:;
wr(s->r,519,1,(sx(rd(s->u,33,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc851_6:;
wr(s->r,518,1,(rd(s->u,33,4)==((U)UINT64_C(0x0))));
L_1803fc851_7:;
wr(s->u,18,4,(rd(s->u,33,4)&((U)UINT64_C(0xff))));
L_1803fc851_8:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803fc851_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fc851_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fc851_11:;
/* 1803fc854: cmovle r9d, r8d */
L_1803fc854_0:;
L_1803fc854_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc854_2:;
wr(s->u,17,1,((rd(s->r,518,1)!=0)||(rd(s->u,16,1)!=0)));
L_1803fc854_3:;
wr(s->u,24,4,rd(s->r,128,4));
L_1803fc854_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fc854_5:;
wr(s->u,28,1,(!rd(s->u,17,1)));
L_1803fc854_6:;
if(rd(s->u,28,1)){goto L_1803fc858_0;}
L_1803fc854_7:;
wr(s->r,136,4,rd(s->u,24,4));
L_1803fc854_8:;
/* 1803fc858: xor eax, eax */
L_1803fc858_0:;
L_1803fc858_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc858_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc858_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fc858_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc858_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc858_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fc858_7:;
wr(s->u,18,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fc858_8:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803fc858_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fc858_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fc858_11:;
/* 1803fc85a: mov dword ptr [rdx], r9d */
L_1803fc85a_0:;
L_1803fc85a_1:;
wr(s->u,8,4,rd(s->r,136,4));
L_1803fc85a_2:;
mw((uint64_t)rd(s->r,16,8),4,rd(s->u,8,4));
L_1803fc85a_3:;
/* 1803fc85d: ret  */
L_1803fc85d_0:;
L_1803fc85d_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc85d_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc85d_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc85d_4:;
return UINT64_C(0x1803fc85e);
}
uint64_t b_1803fc858(CPU*s){
/* 1803fc858: xor eax, eax */
L_1803fc858_0:;
L_1803fc858_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc858_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc858_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fc858_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc858_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc858_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fc858_7:;
wr(s->u,4,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fc858_8:;
wr(s->u,8,1,pop(rd(s->u,4,4),4));
L_1803fc858_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc858_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc858_11:;
/* 1803fc85a: mov dword ptr [rdx], r9d */
L_1803fc85a_0:;
L_1803fc85a_1:;
wr(s->u,0,4,rd(s->r,136,4));
L_1803fc85a_2:;
mw((uint64_t)rd(s->r,16,8),4,rd(s->u,0,4));
L_1803fc85a_3:;
/* 1803fc85d: ret  */
L_1803fc85d_0:;
L_1803fc85d_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc85d_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc85d_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc85d_4:;
return UINT64_C(0x1803fc85e);
}
uint64_t b_1803fc85e(CPU*s){
/* 1803fc85e: mov eax, 0xfffffff8 */
L_1803fc85e_0:;
L_1803fc85e_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fc85e_2:;
/* 1803fc863: ret  */
L_1803fc863_0:;
L_1803fc863_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc863_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc863_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc863_4:;
return UINT64_C(0x1803fc864);
}
uint64_t b_1803fc864(CPU*s){
/* 1803fc864: push r13 */
L_1803fc864_0:;
L_1803fc864_1:;
wr(s->u,0,8,rd(s->r,168,8));
L_1803fc864_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc864_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc864_4:;
/* 1803fc866: push r12 */
L_1803fc866_0:;
L_1803fc866_1:;
wr(s->u,0,8,rd(s->r,160,8));
L_1803fc866_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc866_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc866_4:;
/* 1803fc868: push rdi */
L_1803fc868_0:;
L_1803fc868_1:;
wr(s->u,0,8,rd(s->r,56,8));
L_1803fc868_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc868_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc868_4:;
/* 1803fc869: push rsi */
L_1803fc869_0:;
L_1803fc869_1:;
wr(s->u,0,8,rd(s->r,48,8));
L_1803fc869_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc869_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc869_4:;
/* 1803fc86a: push rbp */
L_1803fc86a_0:;
L_1803fc86a_1:;
wr(s->u,0,8,rd(s->r,40,8));
L_1803fc86a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc86a_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc86a_4:;
/* 1803fc86b: push rbx */
L_1803fc86b_0:;
L_1803fc86b_1:;
wr(s->u,0,8,rd(s->r,24,8));
L_1803fc86b_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc86b_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fc86b_4:;
/* 1803fc86c: sub rsp, 0x48 */
L_1803fc86c_0:;
L_1803fc86c_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x48))));
L_1803fc86c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,1));
L_1803fc86c_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x48))));
L_1803fc86c_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc86c_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc86c_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc86c_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fc86c_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fc86c_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fc86c_10:;
/* 1803fc870: mov r12d, r9d */
L_1803fc870_0:;
L_1803fc870_1:;
wr(s->r,160,4,rd(s->r,136,4));
L_1803fc870_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fc870_3:;
/* 1803fc873: mov edi, r8d */
L_1803fc873_0:;
L_1803fc873_1:;
wr(s->r,56,4,rd(s->r,128,4));
L_1803fc873_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fc873_3:;
/* 1803fc876: mov ebp, edx */
L_1803fc876_0:;
L_1803fc876_1:;
wr(s->r,40,4,rd(s->r,16,4));
L_1803fc876_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fc876_3:;
/* 1803fc878: mov rsi, rcx */
L_1803fc878_0:;
L_1803fc878_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1803fc878_2:;
/* 1803fc87b: xor r13d, r13d */
L_1803fc87b_0:;
L_1803fc87b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc87b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc87b_3:;
wr(s->r,168,4,(rd(s->r,168,4)^rd(s->r,168,4)));
L_1803fc87b_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fc87b_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc87b_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fc87b_7:;
wr(s->u,8,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fc87b_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803fc87b_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fc87b_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fc87b_11:;
/* 1803fc87e: test rsi, rsi */
L_1803fc87e_0:;
L_1803fc87e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc87e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc87e_3:;
wr(s->u,18,8,(rd(s->r,48,8)&rd(s->r,48,8)));
L_1803fc87e_4:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc87e_5:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803fc87e_6:;
wr(s->u,8,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803fc87e_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fc87e_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fc87e_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fc87e_10:;
/* 1803fc881: je 0x1803fc957 */
L_1803fc881_0:;
L_1803fc881_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc957);}
L_1803fc881_2:;
return UINT64_C(0x1803fc887);
}
uint64_t b_1803fc887(CPU*s){
/* 1803fc887: lea rax, [rsp + 0x3c] */
L_1803fc887_0:;
L_1803fc887_1:;
wr(s->u,0,8,(((U)UINT64_C(0x3c))+rd(s->r,32,8)));
L_1803fc887_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803fc887_3:;
/* 1803fc88c: mov qword ptr [rsp + 0x20], rax */
L_1803fc88c_0:;
L_1803fc88c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fc88c_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803fc88c_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803fc88c_4:;
/* 1803fc891: lea rbx, [rsp + 0x40] */
L_1803fc891_0:;
L_1803fc891_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803fc891_2:;
wr(s->r,24,8,rd(s->u,0,8));
L_1803fc891_3:;
/* 1803fc896: mov ecx, ebp */
L_1803fc896_0:;
L_1803fc896_1:;
wr(s->r,8,4,rd(s->r,40,4));
L_1803fc896_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fc896_3:;
/* 1803fc898: mov edx, edi */
L_1803fc898_0:;
L_1803fc898_1:;
wr(s->r,16,4,rd(s->r,56,4));
L_1803fc898_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fc898_3:;
/* 1803fc89a: mov qword ptr [rsp + 0x28], rbx */
L_1803fc89a_0:;
L_1803fc89a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fc89a_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803fc89a_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803fc89a_4:;
/* 1803fc89f: lea r9, [rsp + 0x38] */
L_1803fc89f_0:;
L_1803fc89f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803fc89f_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1803fc89f_3:;
/* 1803fc8a4: mov r8d, r12d */
L_1803fc8a4_0:;
L_1803fc8a4_1:;
wr(s->r,128,4,rd(s->r,160,4));
L_1803fc8a4_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fc8a4_3:;
/* 1803fc8a7: call 0x18042d978 */
L_1803fc8a7_0:;
L_1803fc8a7_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc8a7_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc8ac)));
L_1803fc8a7_3:;
return (uint64_t)UINT64_C(0x18042d978);
L_1803fc8a7_4:;
return UINT64_C(0x1803fc8ac);
}
uint64_t b_1803fc8ac(CPU*s){
/* 1803fc8ac: test eax, eax */
L_1803fc8ac_0:;
L_1803fc8ac_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc8ac_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc8ac_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803fc8ac_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc8ac_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803fc8ac_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803fc8ac_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fc8ac_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fc8ac_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fc8ac_10:;
/* 1803fc8ae: je 0x1803fc8bd */
L_1803fc8ae_0:;
L_1803fc8ae_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc8bd);}
L_1803fc8ae_2:;
return UINT64_C(0x1803fc8b0);
}
uint64_t b_1803fc8b0(CPU*s){
/* 1803fc8b0: add rsp, 0x48 */
L_1803fc8b0_0:;
L_1803fc8b0_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc8b0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fc8b0_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fc8b0_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc8b0_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc8b0_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc8b0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc8b0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc8b0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc8b0_10:;
/* 1803fc8b4: pop rbx */
L_1803fc8b4_0:;
L_1803fc8b4_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc8b4_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc8b4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc8b4_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803fc8b4_5:;
/* 1803fc8b5: pop rbp */
L_1803fc8b5_0:;
L_1803fc8b5_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc8b5_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc8b5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc8b5_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fc8b5_5:;
/* 1803fc8b6: pop rsi */
L_1803fc8b6_0:;
L_1803fc8b6_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc8b6_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc8b6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc8b6_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fc8b6_5:;
/* 1803fc8b7: pop rdi */
L_1803fc8b7_0:;
L_1803fc8b7_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc8b7_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc8b7_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc8b7_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fc8b7_5:;
/* 1803fc8b8: pop r12 */
L_1803fc8b8_0:;
L_1803fc8b8_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc8b8_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc8b8_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc8b8_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fc8b8_5:;
/* 1803fc8ba: pop r13 */
L_1803fc8ba_0:;
L_1803fc8ba_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc8ba_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc8ba_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc8ba_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fc8ba_5:;
/* 1803fc8bc: ret  */
L_1803fc8bc_0:;
L_1803fc8bc_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc8bc_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc8bc_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc8bc_4:;
return UINT64_C(0x1803fc8bd);
}
uint64_t b_1803fc8bd(CPU*s){
/* 1803fc8bd: mov ecx, dword ptr [rsp + 0x38] */
L_1803fc8bd_0:;
L_1803fc8bd_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803fc8bd_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc8bd_3:;
wr(s->r,8,4,rd(s->u,8,4));
L_1803fc8bd_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fc8bd_5:;
/* 1803fc8c1: call 0x1803fc814 */
L_1803fc8c1_0:;
L_1803fc8c1_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc8c1_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc8c6)));
L_1803fc8c1_3:;
return (uint64_t)UINT64_C(0x1803fc814);
L_1803fc8c1_4:;
return UINT64_C(0x1803fc8c6);
}
uint64_t b_1803fc8c6(CPU*s){
/* 1803fc8c6: mov rbx, rax */
L_1803fc8c6_0:;
L_1803fc8c6_1:;
wr(s->r,24,8,rd(s->r,0,8));
L_1803fc8c6_2:;
/* 1803fc8c9: test rbx, rbx */
L_1803fc8c9_0:;
L_1803fc8c9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc8c9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc8c9_3:;
wr(s->u,10,8,(rd(s->r,24,8)&rd(s->r,24,8)));
L_1803fc8c9_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc8c9_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc8c9_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc8c9_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc8c9_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc8c9_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc8c9_10:;
/* 1803fc8cc: je 0x1803fc969 */
L_1803fc8cc_0:;
L_1803fc8cc_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc969);}
L_1803fc8cc_2:;
return UINT64_C(0x1803fc8d2);
}
uint64_t b_1803fc8d2(CPU*s){
/* 1803fc8d2: mov ecx, dword ptr [rsp + 0x3c] */
L_1803fc8d2_0:;
L_1803fc8d2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x3c))+rd(s->r,32,8)));
L_1803fc8d2_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc8d2_3:;
wr(s->r,8,4,rd(s->u,8,4));
L_1803fc8d2_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fc8d2_5:;
/* 1803fc8d6: test ecx, ecx */
L_1803fc8d6_0:;
L_1803fc8d6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc8d6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc8d6_3:;
wr(s->u,20,4,(rd(s->r,8,4)&rd(s->r,8,4)));
L_1803fc8d6_4:;
wr(s->r,519,1,(sx(rd(s->u,20,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc8d6_5:;
wr(s->r,518,1,(rd(s->u,20,4)==((U)UINT64_C(0x0))));
L_1803fc8d6_6:;
wr(s->u,14,4,(rd(s->u,20,4)&((U)UINT64_C(0xff))));
L_1803fc8d6_7:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803fc8d6_8:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803fc8d6_9:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803fc8d6_10:;
/* 1803fc8d8: jle 0x1803fc8ee */
L_1803fc8d8_0:;
L_1803fc8d8_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fc8d8_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803fc8d8_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803fc8ee);}
L_1803fc8d8_4:;
return UINT64_C(0x1803fc8da);
}
uint64_t b_1803fc8da(CPU*s){
/* 1803fc8da: call 0x1803fc814 */
L_1803fc8da_0:;
L_1803fc8da_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc8da_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc8df)));
L_1803fc8da_3:;
return (uint64_t)UINT64_C(0x1803fc814);
L_1803fc8da_4:;
return UINT64_C(0x1803fc8df);
}
uint64_t b_1803fc8df(CPU*s){
/* 1803fc8df: mov r13, rax */
L_1803fc8df_0:;
L_1803fc8df_1:;
wr(s->r,168,8,rd(s->r,0,8));
L_1803fc8df_2:;
/* 1803fc8e2: test r13, r13 */
L_1803fc8e2_0:;
L_1803fc8e2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc8e2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc8e2_3:;
wr(s->u,11,8,(rd(s->r,168,8)&rd(s->r,168,8)));
L_1803fc8e2_4:;
wr(s->r,519,1,(sx(rd(s->u,11,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc8e2_5:;
wr(s->r,518,1,(rd(s->u,11,8)==((U)UINT64_C(0x0))));
L_1803fc8e2_6:;
wr(s->u,1,8,(rd(s->u,11,8)&((U)UINT64_C(0xff))));
L_1803fc8e2_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fc8e2_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fc8e2_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fc8e2_10:;
/* 1803fc8e5: jne 0x1803fc8ee */
L_1803fc8e5_0:;
L_1803fc8e5_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fc8e5_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fc8ee);}
L_1803fc8e5_3:;
return UINT64_C(0x1803fc8e7);
}
uint64_t b_1803fc8e7(CPU*s){
/* 1803fc8e7: mov ebp, 0xfffffff7 */
L_1803fc8e7_0:;
L_1803fc8e7_1:;
wr(s->r,40,8,((U)UINT64_C(0xfffffff7)));
L_1803fc8e7_2:;
/* 1803fc8ec: jmp 0x1803fc91d */
L_1803fc8ec_0:;
L_1803fc8ec_1:;
return UINT64_C(0x1803fc91d);
L_1803fc8ec_2:;
return UINT64_C(0x1803fc8ee);
}
uint64_t b_1803fc8ee(CPU*s){
/* 1803fc8ee: mov qword ptr [rsp + 0x20], rbx */
L_1803fc8ee_0:;
L_1803fc8ee_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fc8ee_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803fc8ee_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803fc8ee_4:;
/* 1803fc8f3: mov qword ptr [rsp + 0x28], r13 */
L_1803fc8f3_0:;
L_1803fc8f3_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fc8f3_2:;
wr(s->u,8,8,rd(s->r,168,8));
L_1803fc8f3_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803fc8f3_4:;
/* 1803fc8f8: mov edx, ebp */
L_1803fc8f8_0:;
L_1803fc8f8_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803fc8f8_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fc8f8_3:;
/* 1803fc8fa: mov r8d, edi */
L_1803fc8fa_0:;
L_1803fc8fa_1:;
wr(s->r,128,4,rd(s->r,56,4));
L_1803fc8fa_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fc8fa_3:;
/* 1803fc8fd: lea rcx, [rsp + 0x30] */
L_1803fc8fd_0:;
L_1803fc8fd_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fc8fd_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803fc8fd_3:;
/* 1803fc902: mov r9d, r12d */
L_1803fc902_0:;
L_1803fc902_1:;
wr(s->r,136,4,rd(s->r,160,4));
L_1803fc902_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fc902_3:;
/* 1803fc905: call 0x18042db44 */
L_1803fc905_0:;
L_1803fc905_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc905_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc90a)));
L_1803fc905_3:;
return (uint64_t)UINT64_C(0x18042db44);
L_1803fc905_4:;
return UINT64_C(0x1803fc90a);
}
uint64_t b_1803fc90a(CPU*s){
/* 1803fc90a: mov ebp, eax */
L_1803fc90a_0:;
L_1803fc90a_1:;
wr(s->r,40,4,rd(s->r,0,4));
L_1803fc90a_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fc90a_3:;
/* 1803fc90c: test r13, r13 */
L_1803fc90c_0:;
L_1803fc90c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc90c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc90c_3:;
wr(s->u,10,8,(rd(s->r,168,8)&rd(s->r,168,8)));
L_1803fc90c_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc90c_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc90c_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc90c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc90c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc90c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc90c_10:;
/* 1803fc90f: je 0x1803fc919 */
L_1803fc90f_0:;
L_1803fc90f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc919);}
L_1803fc90f_2:;
return UINT64_C(0x1803fc911);
}
uint64_t b_1803fc911(CPU*s){
/* 1803fc911: mov rcx, r13 */
L_1803fc911_0:;
L_1803fc911_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803fc911_2:;
/* 1803fc914: call 0x1803fc9bc */
L_1803fc914_0:;
L_1803fc914_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc914_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc919)));
L_1803fc914_3:;
return (uint64_t)UINT64_C(0x1803fc9bc);
L_1803fc914_4:;
return UINT64_C(0x1803fc919);
}
uint64_t b_1803fc919(CPU*s){
/* 1803fc919: test ebp, ebp */
L_1803fc919_0:;
L_1803fc919_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc919_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc919_3:;
wr(s->u,6,4,(rd(s->r,40,4)&rd(s->r,40,4)));
L_1803fc919_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc919_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803fc919_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803fc919_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fc919_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fc919_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fc919_10:;
/* 1803fc91b: je 0x1803fc934 */
L_1803fc91b_0:;
L_1803fc91b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc934);}
L_1803fc91b_2:;
return UINT64_C(0x1803fc91d);
}
uint64_t b_1803fc91d(CPU*s){
/* 1803fc91d: mov rcx, rbx */
L_1803fc91d_0:;
L_1803fc91d_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803fc91d_2:;
/* 1803fc920: call 0x1803fc9bc */
L_1803fc920_0:;
L_1803fc920_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc920_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc925)));
L_1803fc920_3:;
return (uint64_t)UINT64_C(0x1803fc9bc);
L_1803fc920_4:;
return UINT64_C(0x1803fc925);
}
uint64_t b_1803fc925(CPU*s){
/* 1803fc925: mov eax, ebp */
L_1803fc925_0:;
L_1803fc925_1:;
wr(s->r,0,4,rd(s->r,40,4));
L_1803fc925_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc925_3:;
/* 1803fc927: add rsp, 0x48 */
L_1803fc927_0:;
L_1803fc927_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc927_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fc927_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fc927_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc927_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc927_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc927_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc927_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc927_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc927_10:;
/* 1803fc92b: pop rbx */
L_1803fc92b_0:;
L_1803fc92b_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc92b_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc92b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc92b_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803fc92b_5:;
/* 1803fc92c: pop rbp */
L_1803fc92c_0:;
L_1803fc92c_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc92c_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc92c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc92c_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fc92c_5:;
/* 1803fc92d: pop rsi */
L_1803fc92d_0:;
L_1803fc92d_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc92d_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc92d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc92d_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fc92d_5:;
/* 1803fc92e: pop rdi */
L_1803fc92e_0:;
L_1803fc92e_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc92e_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc92e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc92e_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fc92e_5:;
/* 1803fc92f: pop r12 */
L_1803fc92f_0:;
L_1803fc92f_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc92f_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc92f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc92f_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fc92f_5:;
/* 1803fc931: pop r13 */
L_1803fc931_0:;
L_1803fc931_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc931_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc931_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc931_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fc931_5:;
/* 1803fc933: ret  */
L_1803fc933_0:;
L_1803fc933_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc933_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc933_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc933_4:;
return UINT64_C(0x1803fc934);
}
uint64_t b_1803fc934(CPU*s){
/* 1803fc934: mov rdx, qword ptr [rsp + 0x30] */
L_1803fc934_0:;
L_1803fc934_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fc934_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803fc934_3:;
wr(s->r,16,8,rd(s->u,28,8));
L_1803fc934_4:;
/* 1803fc939: mov dword ptr [rdx + 0x1c], 1 */
L_1803fc939_0:;
L_1803fc939_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x1c))));
L_1803fc939_2:;
wr(s->u,16,4,((U)UINT64_C(0x1)));
L_1803fc939_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fc939_4:;
/* 1803fc940: xor eax, eax */
L_1803fc940_0:;
L_1803fc940_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc940_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc940_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fc940_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc940_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc940_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fc940_7:;
wr(s->u,36,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fc940_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1803fc940_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803fc940_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803fc940_11:;
/* 1803fc942: mov rcx, qword ptr [rsp + 0x30] */
L_1803fc942_0:;
L_1803fc942_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fc942_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803fc942_3:;
wr(s->r,8,8,rd(s->u,28,8));
L_1803fc942_4:;
/* 1803fc947: mov qword ptr [rsi], rcx */
L_1803fc947_0:;
L_1803fc947_1:;
wr(s->u,20,8,rd(s->r,8,8));
L_1803fc947_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,20,8));
L_1803fc947_3:;
/* 1803fc94a: add rsp, 0x48 */
L_1803fc94a_0:;
L_1803fc94a_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc94a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fc94a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fc94a_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc94a_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc94a_6:;
wr(s->u,36,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc94a_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803fc94a_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803fc94a_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803fc94a_10:;
/* 1803fc94e: pop rbx */
L_1803fc94e_0:;
L_1803fc94e_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803fc94e_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc94e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc94e_4:;
wr(s->r,24,8,rd(s->u,46,8));
L_1803fc94e_5:;
/* 1803fc94f: pop rbp */
L_1803fc94f_0:;
L_1803fc94f_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803fc94f_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc94f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc94f_4:;
wr(s->r,40,8,rd(s->u,46,8));
L_1803fc94f_5:;
/* 1803fc950: pop rsi */
L_1803fc950_0:;
L_1803fc950_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803fc950_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc950_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc950_4:;
wr(s->r,48,8,rd(s->u,46,8));
L_1803fc950_5:;
/* 1803fc951: pop rdi */
L_1803fc951_0:;
L_1803fc951_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803fc951_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc951_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc951_4:;
wr(s->r,56,8,rd(s->u,46,8));
L_1803fc951_5:;
/* 1803fc952: pop r12 */
L_1803fc952_0:;
L_1803fc952_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803fc952_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc952_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc952_4:;
wr(s->r,160,8,rd(s->u,46,8));
L_1803fc952_5:;
/* 1803fc954: pop r13 */
L_1803fc954_0:;
L_1803fc954_1:;
wr(s->u,46,8,((U)UINT64_C(0x0)));
L_1803fc954_2:;
wr(s->u,46,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc954_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc954_4:;
wr(s->r,168,8,rd(s->u,46,8));
L_1803fc954_5:;
/* 1803fc956: ret  */
L_1803fc956_0:;
L_1803fc956_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc956_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc956_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc956_4:;
return UINT64_C(0x1803fc957);
}
uint64_t b_1803fc957(CPU*s){
/* 1803fc957: mov eax, 0xfffffff8 */
L_1803fc957_0:;
L_1803fc957_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fc957_2:;
/* 1803fc95c: add rsp, 0x48 */
L_1803fc95c_0:;
L_1803fc95c_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc95c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fc95c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fc95c_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc95c_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc95c_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc95c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc95c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc95c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc95c_10:;
/* 1803fc960: pop rbx */
L_1803fc960_0:;
L_1803fc960_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc960_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc960_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc960_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803fc960_5:;
/* 1803fc961: pop rbp */
L_1803fc961_0:;
L_1803fc961_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc961_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc961_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc961_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fc961_5:;
/* 1803fc962: pop rsi */
L_1803fc962_0:;
L_1803fc962_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc962_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc962_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc962_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fc962_5:;
/* 1803fc963: pop rdi */
L_1803fc963_0:;
L_1803fc963_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc963_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc963_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc963_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fc963_5:;
/* 1803fc964: pop r12 */
L_1803fc964_0:;
L_1803fc964_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc964_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc964_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc964_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fc964_5:;
/* 1803fc966: pop r13 */
L_1803fc966_0:;
L_1803fc966_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc966_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc966_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc966_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fc966_5:;
/* 1803fc968: ret  */
L_1803fc968_0:;
L_1803fc968_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc968_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc968_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc968_4:;
return UINT64_C(0x1803fc969);
}
uint64_t b_1803fc969(CPU*s){
/* 1803fc969: mov eax, 0xfffffff7 */
L_1803fc969_0:;
L_1803fc969_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff7)));
L_1803fc969_2:;
/* 1803fc96e: add rsp, 0x48 */
L_1803fc96e_0:;
L_1803fc96e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc96e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fc96e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fc96e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc96e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc96e_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc96e_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc96e_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc96e_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc96e_10:;
/* 1803fc972: pop rbx */
L_1803fc972_0:;
L_1803fc972_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc972_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc972_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc972_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803fc972_5:;
/* 1803fc973: pop rbp */
L_1803fc973_0:;
L_1803fc973_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc973_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc973_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc973_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fc973_5:;
/* 1803fc974: pop rsi */
L_1803fc974_0:;
L_1803fc974_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc974_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc974_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc974_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fc974_5:;
/* 1803fc975: pop rdi */
L_1803fc975_0:;
L_1803fc975_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc975_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc975_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc975_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fc975_5:;
/* 1803fc976: pop r12 */
L_1803fc976_0:;
L_1803fc976_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc976_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc976_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc976_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fc976_5:;
/* 1803fc978: pop r13 */
L_1803fc978_0:;
L_1803fc978_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fc978_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc978_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc978_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fc978_5:;
/* 1803fc97a: ret  */
L_1803fc97a_0:;
L_1803fc97a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc97a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc97a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc97a_4:;
return UINT64_C(0x1803fc97b);
}
uint64_t b_1803fc97c(CPU*s){
/* 1803fc97c: sub rsp, 0x28 */
L_1803fc97c_0:;
L_1803fc97c_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fc97c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fc97c_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fc97c_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc97c_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc97c_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc97c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc97c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc97c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc97c_10:;
/* 1803fc980: test rcx, rcx */
L_1803fc980_0:;
L_1803fc980_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc980_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc980_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fc980_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc980_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc980_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc980_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc980_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc980_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc980_10:;
/* 1803fc983: je 0x1803fc9b2 */
L_1803fc983_0:;
L_1803fc983_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc9b2);}
L_1803fc983_2:;
return UINT64_C(0x1803fc985);
}
uint64_t b_1803fc985(CPU*s){
/* 1803fc985: mov eax, dword ptr [rcx] */
L_1803fc985_0:;
L_1803fc985_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803fc985_2:;
wr(s->r,0,4,rd(s->u,0,4));
L_1803fc985_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc985_4:;
/* 1803fc987: cmp eax, 6 */
L_1803fc987_0:;
L_1803fc987_1:;
wr(s->u,10,4,rd(s->r,0,4));
L_1803fc987_2:;
wr(s->r,512,1,(rd(s->u,10,4)<((U)UINT64_C(0x6))));
L_1803fc987_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,10,4),((U)UINT64_C(0x6)),4,1));
L_1803fc987_4:;
wr(s->u,14,4,(rd(s->u,10,4)-((U)UINT64_C(0x6))));
L_1803fc987_5:;
wr(s->r,519,1,(sx(rd(s->u,14,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc987_6:;
wr(s->r,518,1,(rd(s->u,14,4)==((U)UINT64_C(0x0))));
L_1803fc987_7:;
wr(s->u,4,4,(rd(s->u,14,4)&((U)UINT64_C(0xff))));
L_1803fc987_8:;
wr(s->u,8,1,pop(rd(s->u,4,4),4));
L_1803fc987_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc987_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc987_11:;
/* 1803fc98a: je 0x1803fc996 */
L_1803fc98a_0:;
L_1803fc98a_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc996);}
L_1803fc98a_2:;
return UINT64_C(0x1803fc98c);
}
uint64_t b_1803fc98c(CPU*s){
/* 1803fc98c: mov eax, 0xffffffef */
L_1803fc98c_0:;
L_1803fc98c_1:;
wr(s->r,0,8,((U)UINT64_C(0xffffffef)));
L_1803fc98c_2:;
/* 1803fc991: add rsp, 0x28 */
L_1803fc991_0:;
L_1803fc991_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc991_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fc991_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fc991_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc991_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc991_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc991_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc991_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc991_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc991_10:;
/* 1803fc995: ret  */
L_1803fc995_0:;
L_1803fc995_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc995_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc995_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc995_4:;
return UINT64_C(0x1803fc996);
}
uint64_t b_1803fc996(CPU*s){
/* 1803fc996: mov eax, dword ptr [rcx + 0x1c] */
L_1803fc996_0:;
L_1803fc996_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x1c))));
L_1803fc996_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fc996_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803fc996_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc996_5:;
/* 1803fc999: mov dword ptr [rcx], 0 */
L_1803fc999_0:;
L_1803fc999_1:;
wr(s->u,8,4,((U)UINT64_C(0x0)));
L_1803fc999_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,8,4));
L_1803fc999_3:;
/* 1803fc99f: cmp eax, 1 */
L_1803fc99f_0:;
L_1803fc99f_1:;
wr(s->u,22,4,rd(s->r,0,4));
L_1803fc99f_2:;
wr(s->r,512,1,(rd(s->u,22,4)<((U)UINT64_C(0x1))));
L_1803fc99f_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,22,4),((U)UINT64_C(0x1)),4,1));
L_1803fc99f_4:;
wr(s->u,26,4,(rd(s->u,22,4)-((U)UINT64_C(0x1))));
L_1803fc99f_5:;
wr(s->r,519,1,(sx(rd(s->u,26,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc99f_6:;
wr(s->r,518,1,(rd(s->u,26,4)==((U)UINT64_C(0x0))));
L_1803fc99f_7:;
wr(s->u,16,4,(rd(s->u,26,4)&((U)UINT64_C(0xff))));
L_1803fc99f_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803fc99f_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803fc99f_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803fc99f_11:;
/* 1803fc9a2: je 0x1803fc9ab */
L_1803fc9a2_0:;
L_1803fc9a2_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fc9ab);}
L_1803fc9a2_2:;
return UINT64_C(0x1803fc9a4);
}
uint64_t b_1803fc9a4(CPU*s){
/* 1803fc9a4: xor eax, eax */
L_1803fc9a4_0:;
L_1803fc9a4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc9a4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc9a4_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fc9a4_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc9a4_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc9a4_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fc9a4_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fc9a4_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fc9a4_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc9a4_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc9a4_11:;
/* 1803fc9a6: add rsp, 0x28 */
L_1803fc9a6_0:;
L_1803fc9a6_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc9a6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fc9a6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fc9a6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc9a6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc9a6_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc9a6_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc9a6_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc9a6_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc9a6_10:;
/* 1803fc9aa: ret  */
L_1803fc9aa_0:;
L_1803fc9aa_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc9aa_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc9aa_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc9aa_4:;
return UINT64_C(0x1803fc9ab);
}
uint64_t b_1803fc9ab(CPU*s){
/* 1803fc9ab: call 0x1803fc9bc */
L_1803fc9ab_0:;
L_1803fc9ab_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc9ab_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc9b0)));
L_1803fc9ab_3:;
return (uint64_t)UINT64_C(0x1803fc9bc);
L_1803fc9ab_4:;
return UINT64_C(0x1803fc9b0);
}
uint64_t b_1803fc9b0(CPU*s){
/* 1803fc9b0: jmp 0x1803fc9a4 */
L_1803fc9b0_0:;
L_1803fc9b0_1:;
return UINT64_C(0x1803fc9a4);
L_1803fc9b0_2:;
return UINT64_C(0x1803fc9b2);
}
uint64_t b_1803fc9b2(CPU*s){
/* 1803fc9b2: mov eax, 0xfffffff8 */
L_1803fc9b2_0:;
L_1803fc9b2_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fc9b2_2:;
/* 1803fc9b7: add rsp, 0x28 */
L_1803fc9b7_0:;
L_1803fc9b7_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc9b7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fc9b7_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fc9b7_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc9b7_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc9b7_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc9b7_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc9b7_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc9b7_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc9b7_10:;
/* 1803fc9bb: ret  */
L_1803fc9bb_0:;
L_1803fc9bb_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc9bb_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc9bb_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc9bb_4:;
return UINT64_C(0x1803fc9bc);
}
uint64_t b_1803fc9bc(CPU*s){
/* 1803fc9bc: sub rsp, 0x28 */
L_1803fc9bc_0:;
L_1803fc9bc_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fc9bc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fc9bc_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fc9bc_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc9bc_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc9bc_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc9bc_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc9bc_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc9bc_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc9bc_10:;
/* 1803fc9c0: call 0x1804111cc */
L_1803fc9c0_0:;
L_1803fc9c0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc9c0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc9c5)));
L_1803fc9c0_3:;
return (uint64_t)UINT64_C(0x1804111cc);
L_1803fc9c0_4:;
return UINT64_C(0x1803fc9c5);
}
uint64_t b_1803fc9c5(CPU*s){
/* 1803fc9c5: add rsp, 0x28 */
L_1803fc9c5_0:;
L_1803fc9c5_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc9c5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fc9c5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fc9c5_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc9c5_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc9c5_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc9c5_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc9c5_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc9c5_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc9c5_10:;
/* 1803fc9c9: ret  */
L_1803fc9c9_0:;
L_1803fc9c9_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc9c9_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc9c9_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc9c9_4:;
return UINT64_C(0x1803fc9ca);
}
uint64_t b_1803fc9cc(CPU*s){
/* 1803fc9cc: sub rsp, 0x28 */
L_1803fc9cc_0:;
L_1803fc9cc_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fc9cc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fc9cc_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fc9cc_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc9cc_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc9cc_6:;
wr(s->u,3,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc9cc_7:;
wr(s->u,11,1,pop(rd(s->u,3,8),8));
L_1803fc9cc_8:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803fc9cc_9:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803fc9cc_10:;
/* 1803fc9d0: test ecx, ecx */
L_1803fc9d0_0:;
L_1803fc9d0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc9d0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc9d0_3:;
wr(s->u,13,4,(rd(s->r,8,4)&rd(s->r,8,4)));
L_1803fc9d0_4:;
wr(s->r,519,1,(sx(rd(s->u,13,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc9d0_5:;
wr(s->r,518,1,(rd(s->u,13,4)==((U)UINT64_C(0x0))));
L_1803fc9d0_6:;
wr(s->u,3,4,(rd(s->u,13,4)&((U)UINT64_C(0xff))));
L_1803fc9d0_7:;
wr(s->u,11,1,pop(rd(s->u,3,4),4));
L_1803fc9d0_8:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803fc9d0_9:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803fc9d0_10:;
/* 1803fc9d2: jg 0x1803fc9db */
L_1803fc9d2_0:;
L_1803fc9d2_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fc9d2_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fc9d2_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fc9d2_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fc9db);}
L_1803fc9d2_5:;
return UINT64_C(0x1803fc9d4);
}
uint64_t b_1803fc9d4(CPU*s){
/* 1803fc9d4: xor eax, eax */
L_1803fc9d4_0:;
L_1803fc9d4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc9d4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc9d4_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fc9d4_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fc9d4_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc9d4_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fc9d4_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fc9d4_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fc9d4_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc9d4_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc9d4_11:;
/* 1803fc9d6: add rsp, 0x28 */
L_1803fc9d6_0:;
L_1803fc9d6_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc9d6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fc9d6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fc9d6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc9d6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc9d6_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc9d6_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc9d6_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc9d6_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc9d6_10:;
/* 1803fc9da: ret  */
L_1803fc9da_0:;
L_1803fc9da_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc9da_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc9da_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc9da_4:;
return UINT64_C(0x1803fc9db);
}
uint64_t b_1803fc9db(CPU*s){
/* 1803fc9db: movsxd rcx, ecx */
L_1803fc9db_0:;
L_1803fc9db_1:;
wr(s->r,8,8,(U)sx(rd(s->r,8,4),4));
L_1803fc9db_2:;
/* 1803fc9de: shl rcx, 2 */
L_1803fc9de_0:;
L_1803fc9de_1:;
wr(s->u,45,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803fc9de_2:;
wr(s->u,49,8,rd(s->r,8,8));
L_1803fc9de_3:;
wr(s->r,8,8,((rd(s->u,45,4)>=64)?0:(rd(s->r,8,8)<<rd(s->u,45,4))));
L_1803fc9de_4:;
wr(s->u,28,1,(rd(s->u,45,4)==((U)UINT64_C(0x0))));
L_1803fc9de_5:;
wr(s->u,29,4,(rd(s->u,45,4)-((U)UINT64_C(0x1))));
L_1803fc9de_6:;
wr(s->u,33,8,((rd(s->u,29,4)>=64)?0:(rd(s->u,49,8)<<rd(s->u,29,4))));
L_1803fc9de_7:;
wr(s->u,41,1,(sx(rd(s->u,33,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc9de_8:;
wr(s->u,0,1,rd(s->u,28,1));
L_1803fc9de_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fc9de_10:;
wr(s->u,2,1,(!rd(s->u,28,1)));
L_1803fc9de_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fc9de_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,41,1)));
L_1803fc9de_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fc9de_14:;
wr(s->u,42,1,(rd(s->u,45,4)==((U)UINT64_C(0x1))));
L_1803fc9de_15:;
wr(s->u,43,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc9de_16:;
wr(s->u,44,1,(rd(s->r,512,1)^rd(s->u,43,1)));
L_1803fc9de_17:;
wr(s->u,0,1,rd(s->u,42,1));
L_1803fc9de_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,44,1)));
L_1803fc9de_19:;
wr(s->u,2,1,(!rd(s->u,42,1)));
L_1803fc9de_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fc9de_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fc9de_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fc9de_23:;
wr(s->u,5,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803fc9de_24:;
wr(s->u,6,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc9de_25:;
wr(s->u,7,1,(!rd(s->u,5,1)));
L_1803fc9de_26:;
wr(s->u,8,1,(rd(s->u,7,1)&rd(s->r,519,1)));
L_1803fc9de_27:;
wr(s->u,9,1,(rd(s->u,5,1)&rd(s->u,6,1)));
L_1803fc9de_28:;
wr(s->r,519,1,(rd(s->u,8,1)|rd(s->u,9,1)));
L_1803fc9de_29:;
wr(s->u,10,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803fc9de_30:;
wr(s->u,11,1,(!rd(s->u,5,1)));
L_1803fc9de_31:;
wr(s->u,12,1,(rd(s->u,11,1)&rd(s->r,518,1)));
L_1803fc9de_32:;
wr(s->u,13,1,(rd(s->u,5,1)&rd(s->u,10,1)));
L_1803fc9de_33:;
wr(s->r,518,1,(rd(s->u,12,1)|rd(s->u,13,1)));
L_1803fc9de_34:;
wr(s->u,14,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803fc9de_35:;
wr(s->u,22,1,pop(rd(s->u,14,8),8));
L_1803fc9de_36:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fc9de_37:;
wr(s->u,24,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fc9de_38:;
wr(s->u,25,1,(!rd(s->u,5,1)));
L_1803fc9de_39:;
wr(s->u,26,1,(rd(s->u,25,1)&rd(s->r,514,1)));
L_1803fc9de_40:;
wr(s->u,27,1,(rd(s->u,5,1)&rd(s->u,24,1)));
L_1803fc9de_41:;
wr(s->r,514,1,(rd(s->u,26,1)|rd(s->u,27,1)));
L_1803fc9de_42:;
/* 1803fc9e2: call 0x1804111e4 */
L_1803fc9e2_0:;
L_1803fc9e2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fc9e2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fc9e7)));
L_1803fc9e2_3:;
return (uint64_t)UINT64_C(0x1804111e4);
L_1803fc9e2_4:;
return UINT64_C(0x1803fc9e7);
}
uint64_t b_1803fc9e7(CPU*s){
/* 1803fc9e7: add rsp, 0x28 */
L_1803fc9e7_0:;
L_1803fc9e7_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc9e7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fc9e7_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fc9e7_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc9e7_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc9e7_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc9e7_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc9e7_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc9e7_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc9e7_10:;
/* 1803fc9eb: ret  */
L_1803fc9eb_0:;
L_1803fc9eb_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fc9eb_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fc9eb_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fc9eb_4:;
return UINT64_C(0x1803fc9ec);
}
uint64_t b_1803fc9ec(CPU*s){
/* 1803fc9ec: sub rsp, 0x28 */
L_1803fc9ec_0:;
L_1803fc9ec_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fc9ec_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fc9ec_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fc9ec_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc9ec_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc9ec_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc9ec_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc9ec_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc9ec_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc9ec_10:;
/* 1803fc9f0: test rcx, rcx */
L_1803fc9f0_0:;
L_1803fc9f0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc9f0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc9f0_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fc9f0_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc9f0_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fc9f0_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fc9f0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc9f0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc9f0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc9f0_10:;
/* 1803fc9f3: je 0x1803fca12 */
L_1803fc9f3_0:;
L_1803fc9f3_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fca12);}
L_1803fc9f3_2:;
return UINT64_C(0x1803fc9f5);
}
uint64_t b_1803fc9f5(CPU*s){
/* 1803fc9f5: test edx, edx */
L_1803fc9f5_0:;
L_1803fc9f5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fc9f5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fc9f5_3:;
wr(s->u,9,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803fc9f5_4:;
wr(s->r,519,1,(sx(rd(s->u,9,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fc9f5_5:;
wr(s->r,518,1,(rd(s->u,9,4)==((U)UINT64_C(0x0))));
L_1803fc9f5_6:;
wr(s->u,3,4,(rd(s->u,9,4)&((U)UINT64_C(0xff))));
L_1803fc9f5_7:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fc9f5_8:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fc9f5_9:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fc9f5_10:;
/* 1803fc9f7: jg 0x1803fca03 */
L_1803fc9f7_0:;
L_1803fc9f7_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fc9f7_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fc9f7_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fc9f7_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fca03);}
L_1803fc9f7_5:;
return UINT64_C(0x1803fc9f9);
}
uint64_t b_1803fc9f9(CPU*s){
/* 1803fc9f9: mov eax, 0xfffffffa */
L_1803fc9f9_0:;
L_1803fc9f9_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fc9f9_2:;
/* 1803fc9fe: add rsp, 0x28 */
L_1803fc9fe_0:;
L_1803fc9fe_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fc9fe_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fc9fe_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fc9fe_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fc9fe_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fc9fe_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fc9fe_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fc9fe_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fc9fe_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fc9fe_10:;
/* 1803fca02: ret  */
L_1803fca02_0:;
L_1803fca02_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fca02_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fca02_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fca02_4:;
return UINT64_C(0x1803fca03);
}
uint64_t b_1803fca03(CPU*s){
/* 1803fca03: shl edx, 2 */
L_1803fca03_0:;
L_1803fca03_1:;
wr(s->u,37,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803fca03_2:;
wr(s->u,41,4,rd(s->r,16,4));
L_1803fca03_3:;
wr(s->r,16,4,((rd(s->u,37,4)>=32)?0:(rd(s->r,16,4)<<rd(s->u,37,4))));
L_1803fca03_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fca03_5:;
wr(s->u,24,1,(rd(s->u,37,4)==((U)UINT64_C(0x0))));
L_1803fca03_6:;
wr(s->u,25,4,(rd(s->u,37,4)-((U)UINT64_C(0x1))));
L_1803fca03_7:;
wr(s->u,29,4,((rd(s->u,25,4)>=32)?0:(rd(s->u,41,4)<<rd(s->u,25,4))));
L_1803fca03_8:;
wr(s->u,33,1,(sx(rd(s->u,29,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fca03_9:;
wr(s->u,0,1,rd(s->u,24,1));
L_1803fca03_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fca03_11:;
wr(s->u,2,1,(!rd(s->u,24,1)));
L_1803fca03_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fca03_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,33,1)));
L_1803fca03_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fca03_15:;
wr(s->u,34,1,(rd(s->u,37,4)==((U)UINT64_C(0x1))));
L_1803fca03_16:;
wr(s->u,35,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fca03_17:;
wr(s->u,36,1,(rd(s->r,512,1)^rd(s->u,35,1)));
L_1803fca03_18:;
wr(s->u,0,1,rd(s->u,34,1));
L_1803fca03_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,36,1)));
L_1803fca03_20:;
wr(s->u,2,1,(!rd(s->u,34,1)));
L_1803fca03_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fca03_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fca03_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fca03_24:;
wr(s->u,5,1,(rd(s->u,37,4)!=((U)UINT64_C(0x0))));
L_1803fca03_25:;
wr(s->u,6,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fca03_26:;
wr(s->u,7,1,(!rd(s->u,5,1)));
L_1803fca03_27:;
wr(s->u,8,1,(rd(s->u,7,1)&rd(s->r,519,1)));
L_1803fca03_28:;
wr(s->u,9,1,(rd(s->u,5,1)&rd(s->u,6,1)));
L_1803fca03_29:;
wr(s->r,519,1,(rd(s->u,8,1)|rd(s->u,9,1)));
L_1803fca03_30:;
wr(s->u,10,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fca03_31:;
wr(s->u,11,1,(!rd(s->u,5,1)));
L_1803fca03_32:;
wr(s->u,12,1,(rd(s->u,11,1)&rd(s->r,518,1)));
L_1803fca03_33:;
wr(s->u,13,1,(rd(s->u,5,1)&rd(s->u,10,1)));
L_1803fca03_34:;
wr(s->r,518,1,(rd(s->u,12,1)|rd(s->u,13,1)));
L_1803fca03_35:;
wr(s->u,14,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fca03_36:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803fca03_37:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803fca03_38:;
wr(s->u,20,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803fca03_39:;
wr(s->u,21,1,(!rd(s->u,5,1)));
L_1803fca03_40:;
wr(s->u,22,1,(rd(s->u,21,1)&rd(s->r,514,1)));
L_1803fca03_41:;
wr(s->u,23,1,(rd(s->u,5,1)&rd(s->u,20,1)));
L_1803fca03_42:;
wr(s->r,514,1,(rd(s->u,22,1)|rd(s->u,23,1)));
L_1803fca03_43:;
/* 1803fca06: call 0x18042de90 */
L_1803fca06_0:;
L_1803fca06_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fca06_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fca0b)));
L_1803fca06_3:;
return (uint64_t)UINT64_C(0x18042de90);
L_1803fca06_4:;
return UINT64_C(0x1803fca0b);
}
uint64_t b_1803fca0b(CPU*s){
/* 1803fca0b: xor eax, eax */
L_1803fca0b_0:;
L_1803fca0b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fca0b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fca0b_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fca0b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fca0b_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fca0b_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fca0b_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fca0b_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fca0b_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fca0b_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fca0b_11:;
/* 1803fca0d: add rsp, 0x28 */
L_1803fca0d_0:;
L_1803fca0d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fca0d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fca0d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fca0d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fca0d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fca0d_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fca0d_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fca0d_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fca0d_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fca0d_10:;
/* 1803fca11: ret  */
L_1803fca11_0:;
L_1803fca11_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fca11_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fca11_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fca11_4:;
return UINT64_C(0x1803fca12);
}
uint64_t b_1803fca12(CPU*s){
/* 1803fca12: mov eax, 0xfffffff8 */
L_1803fca12_0:;
L_1803fca12_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fca12_2:;
/* 1803fca17: add rsp, 0x28 */
L_1803fca17_0:;
L_1803fca17_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fca17_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fca17_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fca17_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fca17_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fca17_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fca17_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fca17_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fca17_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fca17_10:;
/* 1803fca1b: ret  */
L_1803fca1b_0:;
L_1803fca1b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fca1b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fca1b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fca1b_4:;
return UINT64_C(0x1803fca1c);
}
uint64_t b_1803fca1c(CPU*s){
/* 1803fca1c: sub rsp, 0x28 */
L_1803fca1c_0:;
L_1803fca1c_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fca1c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fca1c_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fca1c_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fca1c_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fca1c_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fca1c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fca1c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fca1c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fca1c_10:;
/* 1803fca20: test rcx, rcx */
L_1803fca20_0:;
L_1803fca20_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fca20_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fca20_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fca20_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fca20_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fca20_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fca20_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fca20_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fca20_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fca20_10:;
/* 1803fca23: je 0x1803fca45 */
L_1803fca23_0:;
L_1803fca23_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fca45);}
L_1803fca23_2:;
return UINT64_C(0x1803fca25);
}
uint64_t b_1803fca25(CPU*s){
/* 1803fca25: test r8, r8 */
L_1803fca25_0:;
L_1803fca25_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fca25_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fca25_3:;
wr(s->u,10,8,(rd(s->r,128,8)&rd(s->r,128,8)));
L_1803fca25_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fca25_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fca25_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fca25_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fca25_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fca25_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fca25_10:;
/* 1803fca28: je 0x1803fca45 */
L_1803fca28_0:;
L_1803fca28_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fca45);}
L_1803fca28_2:;
return UINT64_C(0x1803fca2a);
}
uint64_t b_1803fca2a(CPU*s){
/* 1803fca2a: cmp edx, 2 */
L_1803fca2a_0:;
L_1803fca2a_1:;
wr(s->u,7,4,rd(s->r,16,4));
L_1803fca2a_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x2))));
L_1803fca2a_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x2)),4,1));
L_1803fca2a_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x2))));
L_1803fca2a_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fca2a_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fca2a_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fca2a_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fca2a_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fca2a_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fca2a_11:;
/* 1803fca2d: jge 0x1803fca39 */
L_1803fca2d_0:;
L_1803fca2d_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fca2d_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fca39);}
L_1803fca2d_3:;
return UINT64_C(0x1803fca2f);
}
uint64_t b_1803fca2f(CPU*s){
/* 1803fca2f: mov eax, 0xfffffffa */
L_1803fca2f_0:;
L_1803fca2f_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fca2f_2:;
/* 1803fca34: add rsp, 0x28 */
L_1803fca34_0:;
L_1803fca34_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fca34_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fca34_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fca34_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fca34_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fca34_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fca34_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fca34_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fca34_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fca34_10:;
/* 1803fca38: ret  */
L_1803fca38_0:;
L_1803fca38_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fca38_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fca38_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fca38_4:;
return UINT64_C(0x1803fca39);
}
uint64_t b_1803fca39(CPU*s){
/* 1803fca39: call 0x18042e130 */
L_1803fca39_0:;
L_1803fca39_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fca39_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fca3e)));
L_1803fca39_3:;
return (uint64_t)UINT64_C(0x18042e130);
L_1803fca39_4:;
return UINT64_C(0x1803fca3e);
}
uint64_t b_1803fca3e(CPU*s){
/* 1803fca3e: xor eax, eax */
L_1803fca3e_0:;
L_1803fca3e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fca3e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fca3e_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fca3e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fca3e_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fca3e_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fca3e_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fca3e_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fca3e_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fca3e_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fca3e_11:;
/* 1803fca40: add rsp, 0x28 */
L_1803fca40_0:;
L_1803fca40_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fca40_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fca40_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fca40_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fca40_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fca40_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fca40_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fca40_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fca40_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fca40_10:;
/* 1803fca44: ret  */
L_1803fca44_0:;
L_1803fca44_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fca44_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fca44_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fca44_4:;
return UINT64_C(0x1803fca45);
}
uint64_t b_1803fca45(CPU*s){
/* 1803fca45: mov eax, 0xfffffff8 */
L_1803fca45_0:;
L_1803fca45_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fca45_2:;
/* 1803fca4a: add rsp, 0x28 */
L_1803fca4a_0:;
L_1803fca4a_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fca4a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fca4a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fca4a_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fca4a_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fca4a_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fca4a_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fca4a_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fca4a_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fca4a_10:;
/* 1803fca4e: ret  */
L_1803fca4e_0:;
L_1803fca4e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fca4e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fca4e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fca4e_4:;
return UINT64_C(0x1803fca4f);
}
uint64_t b_1803fca50(CPU*s){
/* 1803fca50: push r15 */
L_1803fca50_0:;
L_1803fca50_1:;
wr(s->u,0,8,rd(s->r,184,8));
L_1803fca50_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fca50_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fca50_4:;
/* 1803fca52: sub rsp, 0x20 */
L_1803fca52_0:;
L_1803fca52_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803fca52_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803fca52_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803fca52_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fca52_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fca52_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fca52_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fca52_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fca52_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fca52_10:;
/* 1803fca56: mov r15, r8 */
L_1803fca56_0:;
L_1803fca56_1:;
wr(s->r,184,8,rd(s->r,128,8));
L_1803fca56_2:;
/* 1803fca59: test rcx, rcx */
L_1803fca59_0:;
L_1803fca59_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fca59_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fca59_3:;
wr(s->u,18,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fca59_4:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fca59_5:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803fca59_6:;
wr(s->u,8,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803fca59_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fca59_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fca59_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fca59_10:;
/* 1803fca5c: je 0x1803fca89 */
L_1803fca5c_0:;
L_1803fca5c_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fca89);}
L_1803fca5c_2:;
return UINT64_C(0x1803fca5e);
}
uint64_t b_1803fca5e(CPU*s){
/* 1803fca5e: test r15, r15 */
L_1803fca5e_0:;
L_1803fca5e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fca5e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fca5e_3:;
wr(s->u,10,8,(rd(s->r,184,8)&rd(s->r,184,8)));
L_1803fca5e_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fca5e_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fca5e_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fca5e_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fca5e_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fca5e_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fca5e_10:;
/* 1803fca61: je 0x1803fca89 */
L_1803fca61_0:;
L_1803fca61_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fca89);}
L_1803fca61_2:;
return UINT64_C(0x1803fca63);
}
uint64_t b_1803fca63(CPU*s){
/* 1803fca63: test edx, edx */
L_1803fca63_0:;
L_1803fca63_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fca63_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fca63_3:;
wr(s->u,9,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803fca63_4:;
wr(s->r,519,1,(sx(rd(s->u,9,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fca63_5:;
wr(s->r,518,1,(rd(s->u,9,4)==((U)UINT64_C(0x0))));
L_1803fca63_6:;
wr(s->u,3,4,(rd(s->u,9,4)&((U)UINT64_C(0xff))));
L_1803fca63_7:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fca63_8:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fca63_9:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fca63_10:;
/* 1803fca65: jg 0x1803fca73 */
L_1803fca65_0:;
L_1803fca65_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fca65_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fca65_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fca65_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fca73);}
L_1803fca65_5:;
return UINT64_C(0x1803fca67);
}
uint64_t b_1803fca67(CPU*s){
/* 1803fca67: mov eax, 0xfffffffa */
L_1803fca67_0:;
L_1803fca67_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fca67_2:;
/* 1803fca6c: add rsp, 0x20 */
L_1803fca6c_0:;
L_1803fca6c_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fca6c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803fca6c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803fca6c_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fca6c_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fca6c_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fca6c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fca6c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fca6c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fca6c_10:;
/* 1803fca70: pop r15 */
L_1803fca70_0:;
L_1803fca70_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fca70_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fca70_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fca70_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fca70_5:;
/* 1803fca72: ret  */
L_1803fca72_0:;
L_1803fca72_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fca72_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fca72_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fca72_4:;
return UINT64_C(0x1803fca73);
}
uint64_t b_1803fca73(CPU*s){
/* 1803fca73: mov r8d, r9d */
L_1803fca73_0:;
L_1803fca73_1:;
wr(s->r,128,4,rd(s->r,136,4));
L_1803fca73_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fca73_3:;
/* 1803fca76: call 0x18042e150 */
L_1803fca76_0:;
L_1803fca76_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fca76_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fca7b)));
L_1803fca76_3:;
return (uint64_t)UINT64_C(0x18042e150);
L_1803fca76_4:;
return UINT64_C(0x1803fca7b);
}
uint64_t b_1803fca7b(CPU*s){
/* 1803fca7b: movss dword ptr [r15], xmm0 */
L_1803fca7b_0:;
L_1803fca7b_1:;
wr(s->u,0,4,rd(s->r,4608,4));
L_1803fca7b_2:;
mw((uint64_t)rd(s->r,184,8),4,rd(s->u,0,4));
L_1803fca7b_3:;
/* 1803fca80: xor eax, eax */
L_1803fca80_0:;
L_1803fca80_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fca80_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fca80_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fca80_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fca80_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fca80_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fca80_7:;
wr(s->u,4,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fca80_8:;
wr(s->u,12,1,pop(rd(s->u,4,4),4));
L_1803fca80_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fca80_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fca80_11:;
/* 1803fca82: add rsp, 0x20 */
L_1803fca82_0:;
L_1803fca82_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fca82_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803fca82_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803fca82_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fca82_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fca82_6:;
wr(s->u,4,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fca82_7:;
wr(s->u,12,1,pop(rd(s->u,4,8),8));
L_1803fca82_8:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fca82_9:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fca82_10:;
/* 1803fca86: pop r15 */
L_1803fca86_0:;
L_1803fca86_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fca86_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fca86_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fca86_4:;
wr(s->r,184,8,rd(s->u,14,8));
L_1803fca86_5:;
/* 1803fca88: ret  */
L_1803fca88_0:;
L_1803fca88_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fca88_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fca88_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fca88_4:;
return UINT64_C(0x1803fca89);
}
uint64_t b_1803fca89(CPU*s){
/* 1803fca89: mov eax, 0xfffffff8 */
L_1803fca89_0:;
L_1803fca89_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fca89_2:;
/* 1803fca8e: add rsp, 0x20 */
L_1803fca8e_0:;
L_1803fca8e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fca8e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803fca8e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803fca8e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fca8e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fca8e_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fca8e_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fca8e_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fca8e_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fca8e_10:;
/* 1803fca92: pop r15 */
L_1803fca92_0:;
L_1803fca92_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fca92_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fca92_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fca92_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fca92_5:;
/* 1803fca94: ret  */
L_1803fca94_0:;
L_1803fca94_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fca94_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fca94_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fca94_4:;
return UINT64_C(0x1803fca95);
}
uint64_t b_1803fca98(CPU*s){
/* 1803fca98: push r15 */
L_1803fca98_0:;
L_1803fca98_1:;
wr(s->u,0,8,rd(s->r,184,8));
L_1803fca98_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fca98_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fca98_4:;
/* 1803fca9a: push r14 */
L_1803fca9a_0:;
L_1803fca9a_1:;
wr(s->u,0,8,rd(s->r,176,8));
L_1803fca9a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fca9a_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fca9a_4:;
/* 1803fca9c: push r13 */
L_1803fca9c_0:;
L_1803fca9c_1:;
wr(s->u,0,8,rd(s->r,168,8));
L_1803fca9c_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fca9c_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fca9c_4:;
/* 1803fca9e: push r12 */
L_1803fca9e_0:;
L_1803fca9e_1:;
wr(s->u,0,8,rd(s->r,160,8));
L_1803fca9e_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fca9e_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fca9e_4:;
/* 1803fcaa0: push rdi */
L_1803fcaa0_0:;
L_1803fcaa0_1:;
wr(s->u,0,8,rd(s->r,56,8));
L_1803fcaa0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fcaa0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fcaa0_4:;
/* 1803fcaa1: push rsi */
L_1803fcaa1_0:;
L_1803fcaa1_1:;
wr(s->u,0,8,rd(s->r,48,8));
L_1803fcaa1_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fcaa1_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fcaa1_4:;
/* 1803fcaa2: push rbp */
L_1803fcaa2_0:;
L_1803fcaa2_1:;
wr(s->u,0,8,rd(s->r,40,8));
L_1803fcaa2_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fcaa2_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fcaa2_4:;
/* 1803fcaa3: push rbx */
L_1803fcaa3_0:;
L_1803fcaa3_1:;
wr(s->u,0,8,rd(s->r,24,8));
L_1803fcaa3_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fcaa3_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fcaa3_4:;
/* 1803fcaa4: sub rsp, 0x48 */
L_1803fcaa4_0:;
L_1803fcaa4_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x48))));
L_1803fcaa4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,1));
L_1803fcaa4_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x48))));
L_1803fcaa4_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcaa4_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcaa4_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcaa4_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fcaa4_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fcaa4_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fcaa4_10:;
/* 1803fcaa8: mov r12, r9 */
L_1803fcaa8_0:;
L_1803fcaa8_1:;
wr(s->r,160,8,rd(s->r,136,8));
L_1803fcaa8_2:;
/* 1803fcaab: mov rdi, r8 */
L_1803fcaab_0:;
L_1803fcaab_1:;
wr(s->r,56,8,rd(s->r,128,8));
L_1803fcaab_2:;
/* 1803fcaae: mov ebx, edx */
L_1803fcaae_0:;
L_1803fcaae_1:;
wr(s->r,24,4,rd(s->r,16,4));
L_1803fcaae_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fcaae_3:;
/* 1803fcab0: mov rsi, rcx */
L_1803fcab0_0:;
L_1803fcab0_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1803fcab0_2:;
/* 1803fcab3: xor r8d, r8d */
L_1803fcab3_0:;
L_1803fcab3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcab3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcab3_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1803fcab3_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fcab3_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcab3_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fcab3_7:;
wr(s->u,8,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fcab3_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803fcab3_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fcab3_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fcab3_11:;
/* 1803fcab6: test rsi, rsi */
L_1803fcab6_0:;
L_1803fcab6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcab6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcab6_3:;
wr(s->u,18,8,(rd(s->r,48,8)&rd(s->r,48,8)));
L_1803fcab6_4:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcab6_5:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803fcab6_6:;
wr(s->u,8,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803fcab6_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fcab6_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fcab6_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fcab6_10:;
/* 1803fcab9: je 0x1803fceb9 */
L_1803fcab9_0:;
L_1803fcab9_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fceb9);}
L_1803fcab9_2:;
return UINT64_C(0x1803fcabf);
}
uint64_t b_1803fcabf(CPU*s){
/* 1803fcabf: test rdi, rdi */
L_1803fcabf_0:;
L_1803fcabf_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcabf_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcabf_3:;
wr(s->u,10,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1803fcabf_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcabf_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fcabf_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fcabf_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcabf_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcabf_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcabf_10:;
/* 1803fcac2: je 0x1803fceb9 */
L_1803fcac2_0:;
L_1803fcac2_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fceb9);}
L_1803fcac2_2:;
return UINT64_C(0x1803fcac8);
}
uint64_t b_1803fcac8(CPU*s){
/* 1803fcac8: test ebx, ebx */
L_1803fcac8_0:;
L_1803fcac8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcac8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcac8_3:;
wr(s->u,8,4,(rd(s->r,24,4)&rd(s->r,24,4)));
L_1803fcac8_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcac8_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803fcac8_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803fcac8_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fcac8_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fcac8_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fcac8_10:;
/* 1803fcaca: jle 0x1803fcea3 */
L_1803fcaca_0:;
L_1803fcaca_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fcaca_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fcaca_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fcea3);}
L_1803fcaca_4:;
return UINT64_C(0x1803fcad0);
}
uint64_t b_1803fcad0(CPU*s){
/* 1803fcad0: test r12, r12 */
L_1803fcad0_0:;
L_1803fcad0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcad0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcad0_3:;
wr(s->u,10,8,(rd(s->r,160,8)&rd(s->r,160,8)));
L_1803fcad0_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcad0_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fcad0_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fcad0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcad0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcad0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcad0_10:;
/* 1803fcad3: je 0x1803fce85 */
L_1803fcad3_0:;
L_1803fcad3_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fce85);}
L_1803fcad3_2:;
return UINT64_C(0x1803fcad9);
}
uint64_t b_1803fcad9(CPU*s){
/* 1803fcad9: cmp ebx, 0x22 */
L_1803fcad9_0:;
L_1803fcad9_1:;
wr(s->u,7,4,rd(s->r,24,4));
L_1803fcad9_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x22))));
L_1803fcad9_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x22)),4,1));
L_1803fcad9_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x22))));
L_1803fcad9_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcad9_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fcad9_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fcad9_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fcad9_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fcad9_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fcad9_11:;
/* 1803fcadc: jge 0x1803fccb0 */
L_1803fcadc_0:;
L_1803fcadc_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fcadc_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fccb0);}
L_1803fcadc_3:;
return UINT64_C(0x1803fcae2);
}
uint64_t b_1803fcae2(CPU*s){
/* 1803fcae2: movss xmm2, dword ptr [rsi] */
L_1803fcae2_0:;
L_1803fcae2_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,48,8),4));
L_1803fcae2_2:;
wr(s->r,4736,4,rd(s->u,0,4));
L_1803fcae2_3:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fcae2_4:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fcae2_5:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fcae2_6:;
/* 1803fcae6: cmp ebx, 1 */
L_1803fcae6_0:;
L_1803fcae6_1:;
wr(s->u,12,4,rd(s->r,24,4));
L_1803fcae6_2:;
wr(s->r,512,1,(rd(s->u,12,4)<((U)UINT64_C(0x1))));
L_1803fcae6_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,12,4),((U)UINT64_C(0x1)),4,1));
L_1803fcae6_4:;
wr(s->u,16,4,(rd(s->u,12,4)-((U)UINT64_C(0x1))));
L_1803fcae6_5:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcae6_6:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_1803fcae6_7:;
wr(s->u,6,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_1803fcae6_8:;
wr(s->u,10,1,pop(rd(s->u,6,4),4));
L_1803fcae6_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fcae6_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fcae6_11:;
/* 1803fcae9: jle 0x1803fcc91 */
L_1803fcae9_0:;
L_1803fcae9_1:;
wr(s->u,4,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fcae9_2:;
wr(s->u,5,1,((rd(s->r,518,1)!=0)||(rd(s->u,4,1)!=0)));
L_1803fcae9_3:;
if(rd(s->u,5,1)){return UINT64_C(0x1803fcc91);}
L_1803fcae9_4:;
return UINT64_C(0x1803fcaef);
}
uint64_t b_1803fcaef(CPU*s){
/* 1803fcaef: movsxd rax, ebx */
L_1803fcaef_0:;
L_1803fcaef_1:;
wr(s->r,0,8,(U)sx(rd(s->r,24,4),4));
L_1803fcaef_2:;
/* 1803fcaf2: add rax, -1 */
L_1803fcaf2_0:;
L_1803fcaf2_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0xffffffffffffffff)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fcaf2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0xffffffffffffffff)),8,0));
L_1803fcaf2_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fcaf2_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcaf2_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fcaf2_6:;
wr(s->u,8,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fcaf2_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fcaf2_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fcaf2_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fcaf2_10:;
/* 1803fcaf6: lea rbp, [rsi + 4] */
L_1803fcaf6_0:;
L_1803fcaf6_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x4))));
L_1803fcaf6_2:;
wr(s->r,40,8,rd(s->u,0,8));
L_1803fcaf6_3:;
/* 1803fcafa: and rbp, 0xf */
L_1803fcafa_0:;
L_1803fcafa_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcafa_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcafa_3:;
wr(s->r,40,8,(rd(s->r,40,8)&((U)UINT64_C(0xf))));
L_1803fcafa_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcafa_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803fcafa_6:;
wr(s->u,8,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803fcafa_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fcafa_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fcafa_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fcafa_10:;
/* 1803fcafe: test ebp, ebp */
L_1803fcafe_0:;
L_1803fcafe_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcafe_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcafe_3:;
wr(s->u,18,4,(rd(s->r,40,4)&rd(s->r,40,4)));
L_1803fcafe_4:;
wr(s->r,519,1,(sx(rd(s->u,18,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcafe_5:;
wr(s->r,518,1,(rd(s->u,18,4)==((U)UINT64_C(0x0))));
L_1803fcafe_6:;
wr(s->u,8,4,(rd(s->u,18,4)&((U)UINT64_C(0xff))));
L_1803fcafe_7:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803fcafe_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fcafe_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fcafe_10:;
/* 1803fcb00: je 0x1803fcb16 */
L_1803fcb00_0:;
L_1803fcb00_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fcb16);}
L_1803fcb00_2:;
return UINT64_C(0x1803fcb02);
}
uint64_t b_1803fcb02(CPU*s){
/* 1803fcb02: test ebp, 3 */
L_1803fcb02_0:;
L_1803fcb02_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcb02_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcb02_3:;
wr(s->u,7,4,(rd(s->r,40,4)&((U)UINT64_C(0x3))));
L_1803fcb02_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcb02_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803fcb02_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803fcb02_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fcb02_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fcb02_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fcb02_10:;
/* 1803fcb08: jne 0x1803fccac */
L_1803fcb08_0:;
L_1803fcb08_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fcb08_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fccac);}
L_1803fcb08_3:;
return UINT64_C(0x1803fcb0e);
}
uint64_t b_1803fcb0e(CPU*s){
/* 1803fcb0e: neg ebp */
L_1803fcb0e_0:;
L_1803fcb0e_1:;
wr(s->r,512,1,(rd(s->r,40,4)!=((U)UINT64_C(0x0))));
L_1803fcb0e_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,40,4),4,1));
L_1803fcb0e_3:;
wr(s->r,40,4,(-rd(s->r,40,4)));
L_1803fcb0e_4:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcb0e_5:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803fcb0e_6:;
wr(s->u,14,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803fcb0e_7:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fcb0e_8:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fcb0e_9:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fcb0e_10:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fcb0e_11:;
/* 1803fcb10: add ebp, 0x10 */
L_1803fcb10_0:;
L_1803fcb10_1:;
wr(s->r,512,1,(((rd(s->r,40,4)+((U)UINT64_C(0x10)))&(((U)1<<32)-1))<rd(s->r,40,4)));
L_1803fcb10_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),((U)UINT64_C(0x10)),4,0));
L_1803fcb10_3:;
wr(s->r,40,4,(rd(s->r,40,4)+((U)UINT64_C(0x10))));
L_1803fcb10_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fcb10_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcb10_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803fcb10_7:;
wr(s->u,14,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803fcb10_8:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fcb10_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fcb10_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fcb10_11:;
/* 1803fcb13: shr ebp, 2 */
L_1803fcb13_0:;
L_1803fcb13_1:;
wr(s->u,75,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803fcb13_2:;
wr(s->u,79,4,rd(s->r,40,4));
L_1803fcb13_3:;
wr(s->r,40,4,((rd(s->u,75,4)>=32)?0:(rd(s->r,40,4)>>rd(s->u,75,4))));
L_1803fcb13_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fcb13_5:;
wr(s->u,43,1,(rd(s->u,75,4)==((U)UINT64_C(0x0))));
L_1803fcb13_6:;
wr(s->u,44,4,(rd(s->u,75,4)-((U)UINT64_C(0x1))));
L_1803fcb13_7:;
wr(s->u,48,4,((rd(s->u,44,4)>=32)?0:(rd(s->u,79,4)>>rd(s->u,44,4))));
L_1803fcb13_8:;
wr(s->u,52,4,(rd(s->u,48,4)&((U)UINT64_C(0x1))));
L_1803fcb13_9:;
wr(s->u,56,1,(rd(s->u,52,4)!=((U)UINT64_C(0x0))));
L_1803fcb13_10:;
wr(s->u,0,1,rd(s->u,43,1));
L_1803fcb13_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fcb13_12:;
wr(s->u,2,1,(!rd(s->u,43,1)));
L_1803fcb13_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fcb13_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,56,1)));
L_1803fcb13_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fcb13_16:;
wr(s->u,57,1,(rd(s->u,75,4)==((U)UINT64_C(0x1))));
L_1803fcb13_17:;
wr(s->u,58,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcb13_18:;
wr(s->u,0,1,rd(s->u,57,1));
L_1803fcb13_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fcb13_20:;
wr(s->u,2,1,(!rd(s->u,57,1)));
L_1803fcb13_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fcb13_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,58,1)));
L_1803fcb13_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fcb13_24:;
wr(s->u,24,1,(rd(s->u,75,4)!=((U)UINT64_C(0x0))));
L_1803fcb13_25:;
wr(s->u,25,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcb13_26:;
wr(s->u,26,1,(!rd(s->u,24,1)));
L_1803fcb13_27:;
wr(s->u,27,1,(rd(s->u,26,1)&rd(s->r,519,1)));
L_1803fcb13_28:;
wr(s->u,28,1,(rd(s->u,24,1)&rd(s->u,25,1)));
L_1803fcb13_29:;
wr(s->r,519,1,(rd(s->u,27,1)|rd(s->u,28,1)));
L_1803fcb13_30:;
wr(s->u,29,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803fcb13_31:;
wr(s->u,30,1,(!rd(s->u,24,1)));
L_1803fcb13_32:;
wr(s->u,31,1,(rd(s->u,30,1)&rd(s->r,518,1)));
L_1803fcb13_33:;
wr(s->u,32,1,(rd(s->u,24,1)&rd(s->u,29,1)));
L_1803fcb13_34:;
wr(s->r,518,1,(rd(s->u,31,1)|rd(s->u,32,1)));
L_1803fcb13_35:;
wr(s->u,33,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803fcb13_36:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803fcb13_37:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803fcb13_38:;
wr(s->u,39,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803fcb13_39:;
wr(s->u,40,1,(!rd(s->u,24,1)));
L_1803fcb13_40:;
wr(s->u,41,1,(rd(s->u,40,1)&rd(s->r,514,1)));
L_1803fcb13_41:;
wr(s->u,42,1,(rd(s->u,24,1)&rd(s->u,39,1)));
L_1803fcb13_42:;
wr(s->r,514,1,(rd(s->u,41,1)|rd(s->u,42,1)));
L_1803fcb13_43:;
/* 1803fcb16: movsxd rbx, ebp */
L_1803fcb16_0:;
L_1803fcb16_1:;
wr(s->r,24,8,(U)sx(rd(s->r,40,4),4));
L_1803fcb16_2:;
/* 1803fcb19: lea rdx, [rbx + 8] */
L_1803fcb19_0:;
L_1803fcb19_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803fcb19_2:;
wr(s->r,16,8,rd(s->u,5,8));
L_1803fcb19_3:;
/* 1803fcb1d: cmp rax, rdx */
L_1803fcb1d_0:;
L_1803fcb1d_1:;
wr(s->u,59,8,rd(s->r,16,8));
L_1803fcb1d_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,59,8)));
L_1803fcb1d_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,59,8),8,1));
L_1803fcb1d_4:;
wr(s->u,67,8,(rd(s->r,0,8)-rd(s->u,59,8)));
L_1803fcb1d_5:;
wr(s->r,519,1,(sx(rd(s->u,67,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcb1d_6:;
wr(s->r,518,1,(rd(s->u,67,8)==((U)UINT64_C(0x0))));
L_1803fcb1d_7:;
wr(s->u,14,8,(rd(s->u,67,8)&((U)UINT64_C(0xff))));
L_1803fcb1d_8:;
wr(s->u,22,1,pop(rd(s->u,14,8),8));
L_1803fcb1d_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fcb1d_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fcb1d_11:;
/* 1803fcb20: jl 0x1803fccac */
L_1803fcb20_0:;
L_1803fcb20_1:;
wr(s->u,13,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fcb20_2:;
if(rd(s->u,13,1)){return UINT64_C(0x1803fccac);}
L_1803fcb20_3:;
return UINT64_C(0x1803fcb26);
}
uint64_t b_1803fcb16(CPU*s){
/* 1803fcb16: movsxd rbx, ebp */
L_1803fcb16_0:;
L_1803fcb16_1:;
wr(s->r,24,8,(U)sx(rd(s->r,40,4),4));
L_1803fcb16_2:;
/* 1803fcb19: lea rdx, [rbx + 8] */
L_1803fcb19_0:;
L_1803fcb19_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803fcb19_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1803fcb19_3:;
/* 1803fcb1d: cmp rax, rdx */
L_1803fcb1d_0:;
L_1803fcb1d_1:;
wr(s->u,19,8,rd(s->r,16,8));
L_1803fcb1d_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,19,8)));
L_1803fcb1d_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,19,8),8,1));
L_1803fcb1d_4:;
wr(s->u,27,8,(rd(s->r,0,8)-rd(s->u,19,8)));
L_1803fcb1d_5:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcb1d_6:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803fcb1d_7:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803fcb1d_8:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fcb1d_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fcb1d_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fcb1d_11:;
/* 1803fcb20: jl 0x1803fccac */
L_1803fcb20_0:;
L_1803fcb20_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fcb20_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803fccac);}
L_1803fcb20_3:;
return UINT64_C(0x1803fcb26);
}
uint64_t b_1803fcb26(CPU*s){
/* 1803fcb26: mov ecx, eax */
L_1803fcb26_0:;
L_1803fcb26_1:;
wr(s->r,8,4,rd(s->r,0,4));
L_1803fcb26_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fcb26_3:;
/* 1803fcb28: mov edx, ecx */
L_1803fcb28_0:;
L_1803fcb28_1:;
wr(s->r,16,4,rd(s->r,8,4));
L_1803fcb28_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fcb28_3:;
/* 1803fcb2a: sub edx, ebp */
L_1803fcb2a_0:;
L_1803fcb2a_1:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->r,40,4)));
L_1803fcb2a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->r,40,4),4,1));
L_1803fcb2a_3:;
wr(s->r,16,4,(rd(s->r,16,4)-rd(s->r,40,4)));
L_1803fcb2a_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fcb2a_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcb2a_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fcb2a_7:;
wr(s->u,2,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fcb2a_8:;
wr(s->u,10,1,pop(rd(s->u,2,4),4));
L_1803fcb2a_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fcb2a_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fcb2a_11:;
/* 1803fcb2c: and edx, 7 */
L_1803fcb2c_0:;
L_1803fcb2c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcb2c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcb2c_3:;
wr(s->r,16,4,(rd(s->r,16,4)&((U)UINT64_C(0x7))));
L_1803fcb2c_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fcb2c_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcb2c_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fcb2c_7:;
wr(s->u,2,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fcb2c_8:;
wr(s->u,10,1,pop(rd(s->u,2,4),4));
L_1803fcb2c_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fcb2c_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fcb2c_11:;
/* 1803fcb2f: sub ecx, edx */
L_1803fcb2f_0:;
L_1803fcb2f_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,16,4)));
L_1803fcb2f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,16,4),4,1));
L_1803fcb2f_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,16,4)));
L_1803fcb2f_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fcb2f_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcb2f_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803fcb2f_7:;
wr(s->u,2,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803fcb2f_8:;
wr(s->u,10,1,pop(rd(s->u,2,4),4));
L_1803fcb2f_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fcb2f_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fcb2f_11:;
/* 1803fcb31: movsxd rcx, ecx */
L_1803fcb31_0:;
L_1803fcb31_1:;
wr(s->r,8,8,(U)sx(rd(s->r,8,4),4));
L_1803fcb31_2:;
/* 1803fcb34: xor edx, edx */
L_1803fcb34_0:;
L_1803fcb34_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcb34_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcb34_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803fcb34_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fcb34_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcb34_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fcb34_7:;
wr(s->u,2,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fcb34_8:;
wr(s->u,10,1,pop(rd(s->u,2,4),4));
L_1803fcb34_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fcb34_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fcb34_11:;
/* 1803fcb36: test rbx, rbx */
L_1803fcb36_0:;
L_1803fcb36_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcb36_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcb36_3:;
wr(s->u,12,8,(rd(s->r,24,8)&rd(s->r,24,8)));
L_1803fcb36_4:;
wr(s->r,519,1,(sx(rd(s->u,12,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcb36_5:;
wr(s->r,518,1,(rd(s->u,12,8)==((U)UINT64_C(0x0))));
L_1803fcb36_6:;
wr(s->u,2,8,(rd(s->u,12,8)&((U)UINT64_C(0xff))));
L_1803fcb36_7:;
wr(s->u,10,1,pop(rd(s->u,2,8),8));
L_1803fcb36_8:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fcb36_9:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fcb36_10:;
/* 1803fcb39: jle 0x1803fcb59 */
L_1803fcb39_0:;
L_1803fcb39_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fcb39_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fcb39_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fcb59);}
L_1803fcb39_4:;
return UINT64_C(0x1803fcb3b);
}
uint64_t b_1803fcb3b(CPU*s){
/* 1803fcb3b: movss xmm0, dword ptr [rsi + rdx*4 + 4] */
L_1803fcb3b_0:;
L_1803fcb3b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x4))+rd(s->r,48,8)));
L_1803fcb3b_2:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803fcb3b_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803fcb3b_4:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fcb3b_5:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803fcb3b_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fcb3b_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fcb3b_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fcb3b_9:;
/* 1803fcb41: comiss xmm0, xmm2 */
L_1803fcb41_0:;
L_1803fcb41_1:;
wr(s->u,29,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803fcb41_2:;
wr(s->u,30,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803fcb41_3:;
wr(s->r,514,1,((rd(s->u,29,1)!=0)||(rd(s->u,30,1)!=0)));
L_1803fcb41_4:;
wr(s->u,31,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4736,4),4)));
L_1803fcb41_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,31,1)));
L_1803fcb41_6:;
wr(s->u,32,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4736,4),4)));
L_1803fcb41_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,32,1)));
L_1803fcb41_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcb41_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fcb41_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fcb41_11:;
/* 1803fcb44: jbe 0x1803fcb50 */
L_1803fcb44_0:;
L_1803fcb44_1:;
wr(s->u,28,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fcb44_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803fcb50);}
L_1803fcb44_3:;
return UINT64_C(0x1803fcb46);
}
uint64_t b_1803fcb46(CPU*s){
/* 1803fcb46: movaps xmm2, xmm0 */
L_1803fcb46_0:;
L_1803fcb46_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803fcb46_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803fcb46_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803fcb46_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803fcb46_5:;
/* 1803fcb49: mov r8d, edx */
L_1803fcb49_0:;
L_1803fcb49_1:;
wr(s->r,128,4,rd(s->r,16,4));
L_1803fcb49_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fcb49_3:;
/* 1803fcb4c: add r8d, 1 */
L_1803fcb4c_0:;
L_1803fcb4c_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803fcb4c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x1)),4,0));
L_1803fcb4c_3:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0x1))));
L_1803fcb4c_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fcb4c_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcb4c_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fcb4c_7:;
wr(s->u,1,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fcb4c_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803fcb4c_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fcb4c_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fcb4c_11:;
/* 1803fcb50: add rdx, 1 */
L_1803fcb50_0:;
L_1803fcb50_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803fcb50_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x1)),8,0));
L_1803fcb50_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x1))));
L_1803fcb50_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcb50_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fcb50_6:;
wr(s->u,1,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fcb50_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fcb50_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fcb50_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fcb50_10:;
/* 1803fcb54: cmp rdx, rbx */
L_1803fcb54_0:;
L_1803fcb54_1:;
wr(s->u,11,8,rd(s->r,24,8));
L_1803fcb54_2:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,11,8)));
L_1803fcb54_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,11,8),8,1));
L_1803fcb54_4:;
wr(s->u,19,8,(rd(s->r,16,8)-rd(s->u,11,8)));
L_1803fcb54_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcb54_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fcb54_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fcb54_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fcb54_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fcb54_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fcb54_11:;
/* 1803fcb57: jl 0x1803fcb3b */
L_1803fcb57_0:;
L_1803fcb57_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fcb57_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fcb3b);}
L_1803fcb57_3:;
return UINT64_C(0x1803fcb59);
}
uint64_t b_1803fcb50(CPU*s){
/* 1803fcb50: add rdx, 1 */
L_1803fcb50_0:;
L_1803fcb50_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803fcb50_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x1)),8,0));
L_1803fcb50_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x1))));
L_1803fcb50_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcb50_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803fcb50_6:;
wr(s->u,1,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803fcb50_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fcb50_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fcb50_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fcb50_10:;
/* 1803fcb54: cmp rdx, rbx */
L_1803fcb54_0:;
L_1803fcb54_1:;
wr(s->u,11,8,rd(s->r,24,8));
L_1803fcb54_2:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,11,8)));
L_1803fcb54_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,11,8),8,1));
L_1803fcb54_4:;
wr(s->u,19,8,(rd(s->r,16,8)-rd(s->u,11,8)));
L_1803fcb54_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcb54_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fcb54_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fcb54_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fcb54_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fcb54_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fcb54_11:;
/* 1803fcb57: jl 0x1803fcb3b */
L_1803fcb57_0:;
L_1803fcb57_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fcb57_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fcb3b);}
L_1803fcb57_3:;
return UINT64_C(0x1803fcb59);
}
uint64_t b_1803fcb59(CPU*s){
/* 1803fcb59: movdqa xmm5, xmmword ptr [rip + 0x411abf] */
L_1803fcb59_0:;
L_1803fcb59_1:;
wr(s->r,4928,16,mr(UINT64_C(0x18080e620),16));
L_1803fcb59_2:;
/* 1803fcb61: lea edx, [rbp + 1] */
L_1803fcb61_0:;
L_1803fcb61_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x1))));
L_1803fcb61_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fcb61_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fcb61_4:;
/* 1803fcb64: lea r9d, [rbp + 2] */
L_1803fcb64_0:;
L_1803fcb64_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x2))));
L_1803fcb64_2:;
wr(s->r,136,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fcb64_3:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fcb64_4:;
/* 1803fcb68: lea rbx, [rsi + rbx*4] */
L_1803fcb68_0:;
L_1803fcb68_1:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x4))));
L_1803fcb68_2:;
wr(s->u,16,8,(rd(s->r,48,8)+rd(s->u,8,8)));
L_1803fcb68_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803fcb68_4:;
/* 1803fcb6c: movd xmm1, r8d */
L_1803fcb6c_0:;
L_1803fcb6c_1:;
wr(s->r,4672,16,rd(s->r,128,4));
L_1803fcb6c_2:;
/* 1803fcb71: punpckldq xmm1, xmm1 */
L_1803fcb71_0:;
L_1803fcb71_1:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803fcb71_2:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803fcb71_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803fcb71_4:;
/* 1803fcb75: punpckldq xmm1, xmm1 */
L_1803fcb75_0:;
L_1803fcb75_1:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803fcb75_2:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803fcb75_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803fcb75_4:;
/* 1803fcb79: lea r8d, [rbp + 3] */
L_1803fcb79_0:;
L_1803fcb79_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x3))));
L_1803fcb79_2:;
wr(s->r,128,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fcb79_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fcb79_4:;
/* 1803fcb7d: add ebp, 4 */
L_1803fcb7d_0:;
L_1803fcb7d_1:;
wr(s->r,512,1,(((rd(s->r,40,4)+((U)UINT64_C(0x4)))&(((U)1<<32)-1))<rd(s->r,40,4)));
L_1803fcb7d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),((U)UINT64_C(0x4)),4,0));
L_1803fcb7d_3:;
wr(s->r,40,4,(rd(s->r,40,4)+((U)UINT64_C(0x4))));
L_1803fcb7d_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fcb7d_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcb7d_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803fcb7d_7:;
wr(s->u,40,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803fcb7d_8:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803fcb7d_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803fcb7d_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803fcb7d_11:;
/* 1803fcb80: movaps xmm0, xmm2 */
L_1803fcb80_0:;
L_1803fcb80_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fcb80_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fcb80_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fcb80_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fcb80_5:;
/* 1803fcb83: unpcklps xmm0, xmm0 */
L_1803fcb83_0:;
L_1803fcb83_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803fcb83_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803fcb83_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803fcb83_4:;
/* 1803fcb86: unpcklps xmm0, xmm0 */
L_1803fcb86_0:;
L_1803fcb86_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803fcb86_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803fcb86_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803fcb86_4:;
/* 1803fcb89: movd xmm4, edx */
L_1803fcb89_0:;
L_1803fcb89_1:;
wr(s->r,4864,16,rd(s->r,16,4));
L_1803fcb89_2:;
/* 1803fcb8d: lea rdx, [rsi + rcx*4] */
L_1803fcb8d_0:;
L_1803fcb8d_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803fcb8d_2:;
wr(s->u,16,8,(rd(s->r,48,8)+rd(s->u,8,8)));
L_1803fcb8d_3:;
wr(s->r,16,8,rd(s->u,16,8));
L_1803fcb8d_4:;
/* 1803fcb91: movd xmm2, r8d */
L_1803fcb91_0:;
L_1803fcb91_1:;
wr(s->r,4736,16,rd(s->r,128,4));
L_1803fcb91_2:;
/* 1803fcb96: punpckldq xmm4, xmm2 */
L_1803fcb96_0:;
L_1803fcb96_1:;
wr(s->r,4876,4,rd(s->r,4740,4));
L_1803fcb96_2:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803fcb96_3:;
wr(s->r,4868,4,rd(s->r,4736,4));
L_1803fcb96_4:;
/* 1803fcb9a: movd xmm2, r9d */
L_1803fcb9a_0:;
L_1803fcb9a_1:;
wr(s->r,4736,16,rd(s->r,136,4));
L_1803fcb9a_2:;
/* 1803fcb9f: movd xmm3, ebp */
L_1803fcb9f_0:;
L_1803fcb9f_1:;
wr(s->r,4800,16,rd(s->r,40,4));
L_1803fcb9f_2:;
/* 1803fcba3: punpckldq xmm2, xmm3 */
L_1803fcba3_0:;
L_1803fcba3_1:;
wr(s->r,4748,4,rd(s->r,4804,4));
L_1803fcba3_2:;
wr(s->r,4744,4,rd(s->r,4740,4));
L_1803fcba3_3:;
wr(s->r,4740,4,rd(s->r,4800,4));
L_1803fcba3_4:;
/* 1803fcba7: punpckldq xmm4, xmm2 */
L_1803fcba7_0:;
L_1803fcba7_1:;
wr(s->r,4876,4,rd(s->r,4740,4));
L_1803fcba7_2:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803fcba7_3:;
wr(s->r,4868,4,rd(s->r,4736,4));
L_1803fcba7_4:;
/* 1803fcbab: movaps xmm3, xmmword ptr [rbx + 4] */
L_1803fcbab_0:;
L_1803fcbab_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x4))));
L_1803fcbab_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fcbab_3:;
wr(s->u,66,16,rd(s->u,24,16));
L_1803fcbab_4:;
wr(s->r,4800,4,rd(s->u,66,4));
L_1803fcbab_5:;
wr(s->r,4804,4,rd(s->u,70,4));
L_1803fcbab_6:;
wr(s->r,4808,4,rd(s->u,74,4));
L_1803fcbab_7:;
wr(s->r,4812,4,rd(s->u,78,4));
L_1803fcbab_8:;
/* 1803fcbaf: movaps xmm2, xmm0 */
L_1803fcbaf_0:;
L_1803fcbaf_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803fcbaf_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803fcbaf_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803fcbaf_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803fcbaf_5:;
/* 1803fcbb2: cmpltps xmm2, xmm3 */
L_1803fcbb2_0:;
L_1803fcbb2_1:;
wr(s->r,4480,4,rd(s->r,4736,4));
L_1803fcbb2_2:;
wr(s->r,4484,4,rd(s->r,4740,4));
L_1803fcbb2_3:;
wr(s->r,4488,4,rd(s->r,4744,4));
L_1803fcbb2_4:;
wr(s->r,4492,4,rd(s->r,4748,4));
L_1803fcbb2_5:;
wr(s->r,4496,4,rd(s->r,4800,4));
L_1803fcbb2_6:;
wr(s->r,4500,4,rd(s->r,4804,4));
L_1803fcbb2_7:;
wr(s->r,4504,4,rd(s->r,4808,4));
L_1803fcbb2_8:;
wr(s->r,4508,4,rd(s->r,4812,4));
L_1803fcbb2_9:;
wr(s->u,46,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803fcbb2_10:;
wr(s->u,47,4,rd(s->u,46,1));
L_1803fcbb2_11:;
wr(s->r,4480,4,(rd(s->u,47,4)*((U)UINT64_C(0xffffffff))));
L_1803fcbb2_12:;
wr(s->u,51,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803fcbb2_13:;
wr(s->u,52,4,rd(s->u,51,1));
L_1803fcbb2_14:;
wr(s->r,4484,4,(rd(s->u,52,4)*((U)UINT64_C(0xffffffff))));
L_1803fcbb2_15:;
wr(s->u,56,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803fcbb2_16:;
wr(s->u,57,4,rd(s->u,56,1));
L_1803fcbb2_17:;
wr(s->r,4488,4,(rd(s->u,57,4)*((U)UINT64_C(0xffffffff))));
L_1803fcbb2_18:;
wr(s->u,61,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803fcbb2_19:;
wr(s->u,62,4,rd(s->u,61,1));
L_1803fcbb2_20:;
wr(s->r,4492,4,(rd(s->u,62,4)*((U)UINT64_C(0xffffffff))));
L_1803fcbb2_21:;
wr(s->r,4736,4,rd(s->r,4480,4));
L_1803fcbb2_22:;
wr(s->r,4740,4,rd(s->r,4484,4));
L_1803fcbb2_23:;
wr(s->r,4744,4,rd(s->r,4488,4));
L_1803fcbb2_24:;
wr(s->r,4748,4,rd(s->r,4492,4));
L_1803fcbb2_25:;
/* 1803fcbb6: maxps xmm3, xmm0 */
L_1803fcbb6_0:;
L_1803fcbb6_1:;
wr(s->r,4800,16,(((fv(((rd(s->r,4800,16)>>0)&UINT32_MAX),4)>fv(((rd(s->r,4608,16)>>0)&UINT32_MAX),4)?((rd(s->r,4800,16)>>0)&UINT32_MAX):((rd(s->r,4608,16)>>0)&UINT32_MAX)))<<0)|(((fv(((rd(s->r,4800,16)>>32)&UINT32_MAX),4)>fv(((rd(s->r,4608,16)>>32)&UINT32_MAX),4)?((rd(s->r,4800,16)>>32)&UINT32_MAX):((rd(s->r,4608,16)>>32)&UINT32_MAX)))<<32)|(((fv(((rd(s->r,4800,16)>>64)&UINT32_MAX),4)>fv(((rd(s->r,4608,16)>>64)&UINT32_MAX),4)?((rd(s->r,4800,16)>>64)&UINT32_MAX):((rd(s->r,4608,16)>>64)&UINT32_MAX)))<<64)|(((fv(((rd(s->r,4800,16)>>96)&UINT32_MAX),4)>fv(((rd(s->r,4608,16)>>96)&UINT32_MAX),4)?((rd(s->r,4800,16)>>96)&UINT32_MAX):((rd(s->r,4608,16)>>96)&UINT32_MAX)))<<96));
L_1803fcbb6_2:;
/* 1803fcbb9: movaps xmm0, xmm2 */
L_1803fcbb9_0:;
L_1803fcbb9_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fcbb9_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fcbb9_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fcbb9_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fcbb9_5:;
/* 1803fcbbc: movdqa xmm2, xmm4 */
L_1803fcbbc_0:;
L_1803fcbbc_1:;
wr(s->r,4736,16,rd(s->r,4864,16));
L_1803fcbbc_2:;
/* 1803fcbc0: paddd xmm4, xmm5 */
L_1803fcbc0_0:;
L_1803fcbc0_1:;
wr(s->r,4864,4,(rd(s->r,4864,4)+rd(s->r,4928,4)));
L_1803fcbc0_2:;
wr(s->r,4868,4,(rd(s->r,4868,4)+rd(s->r,4932,4)));
L_1803fcbc0_3:;
wr(s->r,4872,4,(rd(s->r,4872,4)+rd(s->r,4936,4)));
L_1803fcbc0_4:;
wr(s->r,4876,4,(rd(s->r,4876,4)+rd(s->r,4940,4)));
L_1803fcbc0_5:;
/* 1803fcbc4: pand xmm2, xmm0 */
L_1803fcbc4_0:;
L_1803fcbc4_1:;
wr(s->r,4736,16,(rd(s->r,4736,16)&rd(s->r,4608,16)));
L_1803fcbc4_2:;
/* 1803fcbc8: pandn xmm0, xmm1 */
L_1803fcbc8_0:;
L_1803fcbc8_1:;
wr(s->u,82,16,(~rd(s->r,4608,16)));
L_1803fcbc8_2:;
wr(s->r,4608,16,(rd(s->u,82,16)&rd(s->r,4672,16)));
L_1803fcbc8_3:;
/* 1803fcbcc: movaps xmm1, xmm3 */
L_1803fcbcc_0:;
L_1803fcbcc_1:;
wr(s->r,4672,4,rd(s->r,4800,4));
L_1803fcbcc_2:;
wr(s->r,4676,4,rd(s->r,4804,4));
L_1803fcbcc_3:;
wr(s->r,4680,4,rd(s->r,4808,4));
L_1803fcbcc_4:;
wr(s->r,4684,4,rd(s->r,4812,4));
L_1803fcbcc_5:;
/* 1803fcbcf: por xmm2, xmm0 */
L_1803fcbcf_0:;
L_1803fcbcf_1:;
wr(s->r,4736,16,(rd(s->r,4736,16)|rd(s->r,4608,16)));
L_1803fcbcf_2:;
/* 1803fcbd3: movaps xmm0, xmmword ptr [rbx + 0x14] */
L_1803fcbd3_0:;
L_1803fcbd3_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x14))));
L_1803fcbd3_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fcbd3_3:;
wr(s->u,66,16,rd(s->u,24,16));
L_1803fcbd3_4:;
wr(s->r,4608,4,rd(s->u,66,4));
L_1803fcbd3_5:;
wr(s->r,4612,4,rd(s->u,70,4));
L_1803fcbd3_6:;
wr(s->r,4616,4,rd(s->u,74,4));
L_1803fcbd3_7:;
wr(s->r,4620,4,rd(s->u,78,4));
L_1803fcbd3_8:;
return UINT64_C(0x1803fcbd7);
}
uint64_t b_1803fcbab(CPU*s){
/* 1803fcbab: movaps xmm3, xmmword ptr [rbx + 4] */
L_1803fcbab_0:;
L_1803fcbab_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x4))));
L_1803fcbab_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fcbab_3:;
wr(s->u,71,16,rd(s->u,8,16));
L_1803fcbab_4:;
wr(s->r,4800,4,rd(s->u,71,4));
L_1803fcbab_5:;
wr(s->r,4804,4,rd(s->u,75,4));
L_1803fcbab_6:;
wr(s->r,4808,4,rd(s->u,79,4));
L_1803fcbab_7:;
wr(s->r,4812,4,rd(s->u,83,4));
L_1803fcbab_8:;
/* 1803fcbaf: movaps xmm2, xmm0 */
L_1803fcbaf_0:;
L_1803fcbaf_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803fcbaf_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803fcbaf_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803fcbaf_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803fcbaf_5:;
/* 1803fcbb2: cmpltps xmm2, xmm3 */
L_1803fcbb2_0:;
L_1803fcbb2_1:;
wr(s->r,4480,4,rd(s->r,4736,4));
L_1803fcbb2_2:;
wr(s->r,4484,4,rd(s->r,4740,4));
L_1803fcbb2_3:;
wr(s->r,4488,4,rd(s->r,4744,4));
L_1803fcbb2_4:;
wr(s->r,4492,4,rd(s->r,4748,4));
L_1803fcbb2_5:;
wr(s->r,4496,4,rd(s->r,4800,4));
L_1803fcbb2_6:;
wr(s->r,4500,4,rd(s->r,4804,4));
L_1803fcbb2_7:;
wr(s->r,4504,4,rd(s->r,4808,4));
L_1803fcbb2_8:;
wr(s->r,4508,4,rd(s->r,4812,4));
L_1803fcbb2_9:;
wr(s->u,51,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803fcbb2_10:;
wr(s->u,52,4,rd(s->u,51,1));
L_1803fcbb2_11:;
wr(s->r,4480,4,(rd(s->u,52,4)*((U)UINT64_C(0xffffffff))));
L_1803fcbb2_12:;
wr(s->u,56,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803fcbb2_13:;
wr(s->u,57,4,rd(s->u,56,1));
L_1803fcbb2_14:;
wr(s->r,4484,4,(rd(s->u,57,4)*((U)UINT64_C(0xffffffff))));
L_1803fcbb2_15:;
wr(s->u,61,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803fcbb2_16:;
wr(s->u,62,4,rd(s->u,61,1));
L_1803fcbb2_17:;
wr(s->r,4488,4,(rd(s->u,62,4)*((U)UINT64_C(0xffffffff))));
L_1803fcbb2_18:;
wr(s->u,66,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803fcbb2_19:;
wr(s->u,67,4,rd(s->u,66,1));
L_1803fcbb2_20:;
wr(s->r,4492,4,(rd(s->u,67,4)*((U)UINT64_C(0xffffffff))));
L_1803fcbb2_21:;
wr(s->r,4736,4,rd(s->r,4480,4));
L_1803fcbb2_22:;
wr(s->r,4740,4,rd(s->r,4484,4));
L_1803fcbb2_23:;
wr(s->r,4744,4,rd(s->r,4488,4));
L_1803fcbb2_24:;
wr(s->r,4748,4,rd(s->r,4492,4));
L_1803fcbb2_25:;
/* 1803fcbb6: maxps xmm3, xmm0 */
L_1803fcbb6_0:;
L_1803fcbb6_1:;
wr(s->r,4800,16,(((fv(((rd(s->r,4800,16)>>0)&UINT32_MAX),4)>fv(((rd(s->r,4608,16)>>0)&UINT32_MAX),4)?((rd(s->r,4800,16)>>0)&UINT32_MAX):((rd(s->r,4608,16)>>0)&UINT32_MAX)))<<0)|(((fv(((rd(s->r,4800,16)>>32)&UINT32_MAX),4)>fv(((rd(s->r,4608,16)>>32)&UINT32_MAX),4)?((rd(s->r,4800,16)>>32)&UINT32_MAX):((rd(s->r,4608,16)>>32)&UINT32_MAX)))<<32)|(((fv(((rd(s->r,4800,16)>>64)&UINT32_MAX),4)>fv(((rd(s->r,4608,16)>>64)&UINT32_MAX),4)?((rd(s->r,4800,16)>>64)&UINT32_MAX):((rd(s->r,4608,16)>>64)&UINT32_MAX)))<<64)|(((fv(((rd(s->r,4800,16)>>96)&UINT32_MAX),4)>fv(((rd(s->r,4608,16)>>96)&UINT32_MAX),4)?((rd(s->r,4800,16)>>96)&UINT32_MAX):((rd(s->r,4608,16)>>96)&UINT32_MAX)))<<96));
L_1803fcbb6_2:;
/* 1803fcbb9: movaps xmm0, xmm2 */
L_1803fcbb9_0:;
L_1803fcbb9_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fcbb9_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fcbb9_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fcbb9_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fcbb9_5:;
/* 1803fcbbc: movdqa xmm2, xmm4 */
L_1803fcbbc_0:;
L_1803fcbbc_1:;
wr(s->r,4736,16,rd(s->r,4864,16));
L_1803fcbbc_2:;
/* 1803fcbc0: paddd xmm4, xmm5 */
L_1803fcbc0_0:;
L_1803fcbc0_1:;
wr(s->r,4864,4,(rd(s->r,4864,4)+rd(s->r,4928,4)));
L_1803fcbc0_2:;
wr(s->r,4868,4,(rd(s->r,4868,4)+rd(s->r,4932,4)));
L_1803fcbc0_3:;
wr(s->r,4872,4,(rd(s->r,4872,4)+rd(s->r,4936,4)));
L_1803fcbc0_4:;
wr(s->r,4876,4,(rd(s->r,4876,4)+rd(s->r,4940,4)));
L_1803fcbc0_5:;
/* 1803fcbc4: pand xmm2, xmm0 */
L_1803fcbc4_0:;
L_1803fcbc4_1:;
wr(s->r,4736,16,(rd(s->r,4736,16)&rd(s->r,4608,16)));
L_1803fcbc4_2:;
/* 1803fcbc8: pandn xmm0, xmm1 */
L_1803fcbc8_0:;
L_1803fcbc8_1:;
wr(s->u,87,16,(~rd(s->r,4608,16)));
L_1803fcbc8_2:;
wr(s->r,4608,16,(rd(s->u,87,16)&rd(s->r,4672,16)));
L_1803fcbc8_3:;
/* 1803fcbcc: movaps xmm1, xmm3 */
L_1803fcbcc_0:;
L_1803fcbcc_1:;
wr(s->r,4672,4,rd(s->r,4800,4));
L_1803fcbcc_2:;
wr(s->r,4676,4,rd(s->r,4804,4));
L_1803fcbcc_3:;
wr(s->r,4680,4,rd(s->r,4808,4));
L_1803fcbcc_4:;
wr(s->r,4684,4,rd(s->r,4812,4));
L_1803fcbcc_5:;
/* 1803fcbcf: por xmm2, xmm0 */
L_1803fcbcf_0:;
L_1803fcbcf_1:;
wr(s->r,4736,16,(rd(s->r,4736,16)|rd(s->r,4608,16)));
L_1803fcbcf_2:;
/* 1803fcbd3: movaps xmm0, xmmword ptr [rbx + 0x14] */
L_1803fcbd3_0:;
L_1803fcbd3_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x14))));
L_1803fcbd3_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fcbd3_3:;
wr(s->u,71,16,rd(s->u,8,16));
L_1803fcbd3_4:;
wr(s->r,4608,4,rd(s->u,71,4));
L_1803fcbd3_5:;
wr(s->r,4612,4,rd(s->u,75,4));
L_1803fcbd3_6:;
wr(s->r,4616,4,rd(s->u,79,4));
L_1803fcbd3_7:;
wr(s->r,4620,4,rd(s->u,83,4));
L_1803fcbd3_8:;
/* 1803fcbd7: cmpltps xmm1, xmm0 */
L_1803fcbd7_0:;
L_1803fcbd7_1:;
wr(s->r,4480,4,rd(s->r,4672,4));
L_1803fcbd7_2:;
wr(s->r,4484,4,rd(s->r,4676,4));
L_1803fcbd7_3:;
wr(s->r,4488,4,rd(s->r,4680,4));
L_1803fcbd7_4:;
wr(s->r,4492,4,rd(s->r,4684,4));
L_1803fcbd7_5:;
wr(s->r,4496,4,rd(s->r,4608,4));
L_1803fcbd7_6:;
wr(s->r,4500,4,rd(s->r,4612,4));
L_1803fcbd7_7:;
wr(s->r,4504,4,rd(s->r,4616,4));
L_1803fcbd7_8:;
wr(s->r,4508,4,rd(s->r,4620,4));
L_1803fcbd7_9:;
wr(s->u,51,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803fcbd7_10:;
wr(s->u,52,4,rd(s->u,51,1));
L_1803fcbd7_11:;
wr(s->r,4480,4,(rd(s->u,52,4)*((U)UINT64_C(0xffffffff))));
L_1803fcbd7_12:;
wr(s->u,56,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803fcbd7_13:;
wr(s->u,57,4,rd(s->u,56,1));
L_1803fcbd7_14:;
wr(s->r,4484,4,(rd(s->u,57,4)*((U)UINT64_C(0xffffffff))));
L_1803fcbd7_15:;
wr(s->u,61,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803fcbd7_16:;
wr(s->u,62,4,rd(s->u,61,1));
L_1803fcbd7_17:;
wr(s->r,4488,4,(rd(s->u,62,4)*((U)UINT64_C(0xffffffff))));
L_1803fcbd7_18:;
wr(s->u,66,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803fcbd7_19:;
wr(s->u,67,4,rd(s->u,66,1));
L_1803fcbd7_20:;
wr(s->r,4492,4,(rd(s->u,67,4)*((U)UINT64_C(0xffffffff))));
L_1803fcbd7_21:;
wr(s->r,4672,4,rd(s->r,4480,4));
L_1803fcbd7_22:;
wr(s->r,4676,4,rd(s->r,4484,4));
L_1803fcbd7_23:;
wr(s->r,4680,4,rd(s->r,4488,4));
L_1803fcbd7_24:;
wr(s->r,4684,4,rd(s->r,4492,4));
L_1803fcbd7_25:;
/* 1803fcbdb: add rbx, 0x20 */
L_1803fcbdb_0:;
L_1803fcbdb_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803fcbdb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x20)),8,0));
L_1803fcbdb_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803fcbdb_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcbdb_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803fcbdb_6:;
wr(s->u,25,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803fcbdb_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fcbdb_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fcbdb_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fcbdb_10:;
/* 1803fcbdf: maxps xmm0, xmm3 */
L_1803fcbdf_0:;
L_1803fcbdf_1:;
wr(s->r,4608,16,(((fv(((rd(s->r,4608,16)>>0)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>0)&UINT32_MAX),4)?((rd(s->r,4608,16)>>0)&UINT32_MAX):((rd(s->r,4800,16)>>0)&UINT32_MAX)))<<0)|(((fv(((rd(s->r,4608,16)>>32)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>32)&UINT32_MAX),4)?((rd(s->r,4608,16)>>32)&UINT32_MAX):((rd(s->r,4800,16)>>32)&UINT32_MAX)))<<32)|(((fv(((rd(s->r,4608,16)>>64)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>64)&UINT32_MAX),4)?((rd(s->r,4608,16)>>64)&UINT32_MAX):((rd(s->r,4800,16)>>64)&UINT32_MAX)))<<64)|(((fv(((rd(s->r,4608,16)>>96)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>96)&UINT32_MAX),4)?((rd(s->r,4608,16)>>96)&UINT32_MAX):((rd(s->r,4800,16)>>96)&UINT32_MAX)))<<96));
L_1803fcbdf_2:;
/* 1803fcbe2: movaps xmm3, xmm1 */
L_1803fcbe2_0:;
L_1803fcbe2_1:;
wr(s->r,4800,4,rd(s->r,4672,4));
L_1803fcbe2_2:;
wr(s->r,4804,4,rd(s->r,4676,4));
L_1803fcbe2_3:;
wr(s->r,4808,4,rd(s->r,4680,4));
L_1803fcbe2_4:;
wr(s->r,4812,4,rd(s->r,4684,4));
L_1803fcbe2_5:;
/* 1803fcbe5: movdqa xmm1, xmm3 */
L_1803fcbe5_0:;
L_1803fcbe5_1:;
wr(s->r,4672,16,rd(s->r,4800,16));
L_1803fcbe5_2:;
/* 1803fcbe9: pandn xmm3, xmm2 */
L_1803fcbe9_0:;
L_1803fcbe9_1:;
wr(s->u,87,16,(~rd(s->r,4800,16)));
L_1803fcbe9_2:;
wr(s->r,4800,16,(rd(s->u,87,16)&rd(s->r,4736,16)));
L_1803fcbe9_3:;
/* 1803fcbed: cmp rbx, rdx */
L_1803fcbed_0:;
L_1803fcbed_1:;
wr(s->u,35,8,rd(s->r,16,8));
L_1803fcbed_2:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->u,35,8)));
L_1803fcbed_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->u,35,8),8,1));
L_1803fcbed_4:;
wr(s->u,43,8,(rd(s->r,24,8)-rd(s->u,35,8)));
L_1803fcbed_5:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcbed_6:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1803fcbed_7:;
wr(s->u,25,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1803fcbed_8:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fcbed_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fcbed_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fcbed_11:;
/* 1803fcbf0: pand xmm1, xmm4 */
L_1803fcbf0_0:;
L_1803fcbf0_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)&rd(s->r,4864,16)));
L_1803fcbf0_2:;
/* 1803fcbf4: por xmm1, xmm3 */
L_1803fcbf4_0:;
L_1803fcbf4_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)|rd(s->r,4800,16)));
L_1803fcbf4_2:;
/* 1803fcbf8: paddd xmm4, xmm5 */
L_1803fcbf8_0:;
L_1803fcbf8_1:;
wr(s->r,4864,4,(rd(s->r,4864,4)+rd(s->r,4928,4)));
L_1803fcbf8_2:;
wr(s->r,4868,4,(rd(s->r,4868,4)+rd(s->r,4932,4)));
L_1803fcbf8_3:;
wr(s->r,4872,4,(rd(s->r,4872,4)+rd(s->r,4936,4)));
L_1803fcbf8_4:;
wr(s->r,4876,4,(rd(s->r,4876,4)+rd(s->r,4940,4)));
L_1803fcbf8_5:;
/* 1803fcbfc: jl 0x1803fcbab */
L_1803fcbfc_0:;
L_1803fcbfc_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fcbfc_2:;
if(rd(s->u,24,1)){goto L_1803fcbab_0;}
L_1803fcbfc_3:;
return UINT64_C(0x1803fcbfe);
}
uint64_t b_1803fcbd7(CPU*s){
/* 1803fcbd7: cmpltps xmm1, xmm0 */
L_1803fcbd7_0:;
L_1803fcbd7_1:;
wr(s->r,4480,4,rd(s->r,4672,4));
L_1803fcbd7_2:;
wr(s->r,4484,4,rd(s->r,4676,4));
L_1803fcbd7_3:;
wr(s->r,4488,4,rd(s->r,4680,4));
L_1803fcbd7_4:;
wr(s->r,4492,4,rd(s->r,4684,4));
L_1803fcbd7_5:;
wr(s->r,4496,4,rd(s->r,4608,4));
L_1803fcbd7_6:;
wr(s->r,4500,4,rd(s->r,4612,4));
L_1803fcbd7_7:;
wr(s->r,4504,4,rd(s->r,4616,4));
L_1803fcbd7_8:;
wr(s->r,4508,4,rd(s->r,4620,4));
L_1803fcbd7_9:;
wr(s->u,27,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803fcbd7_10:;
wr(s->u,28,4,rd(s->u,27,1));
L_1803fcbd7_11:;
wr(s->r,4480,4,(rd(s->u,28,4)*((U)UINT64_C(0xffffffff))));
L_1803fcbd7_12:;
wr(s->u,32,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803fcbd7_13:;
wr(s->u,33,4,rd(s->u,32,1));
L_1803fcbd7_14:;
wr(s->r,4484,4,(rd(s->u,33,4)*((U)UINT64_C(0xffffffff))));
L_1803fcbd7_15:;
wr(s->u,37,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803fcbd7_16:;
wr(s->u,38,4,rd(s->u,37,1));
L_1803fcbd7_17:;
wr(s->r,4488,4,(rd(s->u,38,4)*((U)UINT64_C(0xffffffff))));
L_1803fcbd7_18:;
wr(s->u,42,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803fcbd7_19:;
wr(s->u,43,4,rd(s->u,42,1));
L_1803fcbd7_20:;
wr(s->r,4492,4,(rd(s->u,43,4)*((U)UINT64_C(0xffffffff))));
L_1803fcbd7_21:;
wr(s->r,4672,4,rd(s->r,4480,4));
L_1803fcbd7_22:;
wr(s->r,4676,4,rd(s->r,4484,4));
L_1803fcbd7_23:;
wr(s->r,4680,4,rd(s->r,4488,4));
L_1803fcbd7_24:;
wr(s->r,4684,4,rd(s->r,4492,4));
L_1803fcbd7_25:;
/* 1803fcbdb: add rbx, 0x20 */
L_1803fcbdb_0:;
L_1803fcbdb_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803fcbdb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x20)),8,0));
L_1803fcbdb_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803fcbdb_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcbdb_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803fcbdb_6:;
wr(s->u,1,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803fcbdb_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fcbdb_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fcbdb_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fcbdb_10:;
/* 1803fcbdf: maxps xmm0, xmm3 */
L_1803fcbdf_0:;
L_1803fcbdf_1:;
wr(s->r,4608,16,(((fv(((rd(s->r,4608,16)>>0)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>0)&UINT32_MAX),4)?((rd(s->r,4608,16)>>0)&UINT32_MAX):((rd(s->r,4800,16)>>0)&UINT32_MAX)))<<0)|(((fv(((rd(s->r,4608,16)>>32)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>32)&UINT32_MAX),4)?((rd(s->r,4608,16)>>32)&UINT32_MAX):((rd(s->r,4800,16)>>32)&UINT32_MAX)))<<32)|(((fv(((rd(s->r,4608,16)>>64)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>64)&UINT32_MAX),4)?((rd(s->r,4608,16)>>64)&UINT32_MAX):((rd(s->r,4800,16)>>64)&UINT32_MAX)))<<64)|(((fv(((rd(s->r,4608,16)>>96)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>96)&UINT32_MAX),4)?((rd(s->r,4608,16)>>96)&UINT32_MAX):((rd(s->r,4800,16)>>96)&UINT32_MAX)))<<96));
L_1803fcbdf_2:;
/* 1803fcbe2: movaps xmm3, xmm1 */
L_1803fcbe2_0:;
L_1803fcbe2_1:;
wr(s->r,4800,4,rd(s->r,4672,4));
L_1803fcbe2_2:;
wr(s->r,4804,4,rd(s->r,4676,4));
L_1803fcbe2_3:;
wr(s->r,4808,4,rd(s->r,4680,4));
L_1803fcbe2_4:;
wr(s->r,4812,4,rd(s->r,4684,4));
L_1803fcbe2_5:;
/* 1803fcbe5: movdqa xmm1, xmm3 */
L_1803fcbe5_0:;
L_1803fcbe5_1:;
wr(s->r,4672,16,rd(s->r,4800,16));
L_1803fcbe5_2:;
/* 1803fcbe9: pandn xmm3, xmm2 */
L_1803fcbe9_0:;
L_1803fcbe9_1:;
wr(s->u,47,16,(~rd(s->r,4800,16)));
L_1803fcbe9_2:;
wr(s->r,4800,16,(rd(s->u,47,16)&rd(s->r,4736,16)));
L_1803fcbe9_3:;
/* 1803fcbed: cmp rbx, rdx */
L_1803fcbed_0:;
L_1803fcbed_1:;
wr(s->u,11,8,rd(s->r,16,8));
L_1803fcbed_2:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->u,11,8)));
L_1803fcbed_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->u,11,8),8,1));
L_1803fcbed_4:;
wr(s->u,19,8,(rd(s->r,24,8)-rd(s->u,11,8)));
L_1803fcbed_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcbed_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fcbed_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fcbed_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fcbed_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fcbed_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fcbed_11:;
/* 1803fcbf0: pand xmm1, xmm4 */
L_1803fcbf0_0:;
L_1803fcbf0_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)&rd(s->r,4864,16)));
L_1803fcbf0_2:;
/* 1803fcbf4: por xmm1, xmm3 */
L_1803fcbf4_0:;
L_1803fcbf4_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)|rd(s->r,4800,16)));
L_1803fcbf4_2:;
/* 1803fcbf8: paddd xmm4, xmm5 */
L_1803fcbf8_0:;
L_1803fcbf8_1:;
wr(s->r,4864,4,(rd(s->r,4864,4)+rd(s->r,4928,4)));
L_1803fcbf8_2:;
wr(s->r,4868,4,(rd(s->r,4868,4)+rd(s->r,4932,4)));
L_1803fcbf8_3:;
wr(s->r,4872,4,(rd(s->r,4872,4)+rd(s->r,4936,4)));
L_1803fcbf8_4:;
wr(s->r,4876,4,(rd(s->r,4876,4)+rd(s->r,4940,4)));
L_1803fcbf8_5:;
/* 1803fcbfc: jl 0x1803fcbab */
L_1803fcbfc_0:;
L_1803fcbfc_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fcbfc_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fcbab);}
L_1803fcbfc_3:;
return UINT64_C(0x1803fcbfe);
}
uint64_t b_1803fcbfe(CPU*s){
/* 1803fcbfe: movaps xmm3, xmm0 */
L_1803fcbfe_0:;
L_1803fcbfe_1:;
wr(s->r,4800,4,rd(s->r,4608,4));
L_1803fcbfe_2:;
wr(s->r,4804,4,rd(s->r,4612,4));
L_1803fcbfe_3:;
wr(s->r,4808,4,rd(s->r,4616,4));
L_1803fcbfe_4:;
wr(s->r,4812,4,rd(s->r,4620,4));
L_1803fcbfe_5:;
/* 1803fcc01: movaps xmm2, xmm0 */
L_1803fcc01_0:;
L_1803fcc01_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803fcc01_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803fcc01_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803fcc01_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803fcc01_5:;
/* 1803fcc04: movhlps xmm3, xmm0 */
L_1803fcc04_0:;
L_1803fcc04_1:;
wr(s->r,4800,8,rd(s->r,4616,8));
L_1803fcc04_2:;
/* 1803fcc07: maxps xmm2, xmm3 */
L_1803fcc07_0:;
L_1803fcc07_1:;
wr(s->r,4736,16,(((fv(((rd(s->r,4736,16)>>0)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>0)&UINT32_MAX),4)?((rd(s->r,4736,16)>>0)&UINT32_MAX):((rd(s->r,4800,16)>>0)&UINT32_MAX)))<<0)|(((fv(((rd(s->r,4736,16)>>32)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>32)&UINT32_MAX),4)?((rd(s->r,4736,16)>>32)&UINT32_MAX):((rd(s->r,4800,16)>>32)&UINT32_MAX)))<<32)|(((fv(((rd(s->r,4736,16)>>64)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>64)&UINT32_MAX),4)?((rd(s->r,4736,16)>>64)&UINT32_MAX):((rd(s->r,4800,16)>>64)&UINT32_MAX)))<<64)|(((fv(((rd(s->r,4736,16)>>96)&UINT32_MAX),4)>fv(((rd(s->r,4800,16)>>96)&UINT32_MAX),4)?((rd(s->r,4736,16)>>96)&UINT32_MAX):((rd(s->r,4800,16)>>96)&UINT32_MAX)))<<96));
L_1803fcc07_2:;
/* 1803fcc0a: movshdup xmm4, xmm2 */
L_1803fcc0a_0:;
L_1803fcc0a_1:;
wr(s->r,4864,4,rd(s->r,4740,4));
L_1803fcc0a_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803fcc0a_3:;
wr(s->r,4872,4,rd(s->r,4748,4));
L_1803fcc0a_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803fcc0a_5:;
/* 1803fcc0e: maxss xmm2, xmm4 */
L_1803fcc0e_0:;
L_1803fcc0e_1:;
wr(s->u,47,1,(fv(rd(s->r,4864,4),4)<fv(rd(s->r,4736,4),4)));
L_1803fcc0e_2:;
if(rd(s->u,47,1)){goto L_1803fcc12_0;}
L_1803fcc0e_3:;
wr(s->r,4736,4,rd(s->r,4864,4));
L_1803fcc0e_4:;
/* 1803fcc12: movaps xmm5, xmm2 */
L_1803fcc12_0:;
L_1803fcc12_1:;
wr(s->r,4928,4,rd(s->r,4736,4));
L_1803fcc12_2:;
wr(s->r,4932,4,rd(s->r,4740,4));
L_1803fcc12_3:;
wr(s->r,4936,4,rd(s->r,4744,4));
L_1803fcc12_4:;
wr(s->r,4940,4,rd(s->r,4748,4));
L_1803fcc12_5:;
/* 1803fcc15: unpcklps xmm5, xmm5 */
L_1803fcc15_0:;
L_1803fcc15_1:;
wr(s->r,4936,4,rd(s->r,4932,4));
L_1803fcc15_2:;
wr(s->r,4940,4,rd(s->r,4932,4));
L_1803fcc15_3:;
wr(s->r,4932,4,rd(s->r,4928,4));
L_1803fcc15_4:;
/* 1803fcc18: unpcklps xmm5, xmm5 */
L_1803fcc18_0:;
L_1803fcc18_1:;
wr(s->r,4936,4,rd(s->r,4932,4));
L_1803fcc18_2:;
wr(s->r,4940,4,rd(s->r,4932,4));
L_1803fcc18_3:;
wr(s->r,4932,4,rd(s->r,4928,4));
L_1803fcc18_4:;
/* 1803fcc1b: cmpeqps xmm0, xmm5 */
L_1803fcc1b_0:;
L_1803fcc1b_1:;
wr(s->r,4480,4,rd(s->r,4608,4));
L_1803fcc1b_2:;
wr(s->r,4484,4,rd(s->r,4612,4));
L_1803fcc1b_3:;
wr(s->r,4488,4,rd(s->r,4616,4));
L_1803fcc1b_4:;
wr(s->r,4492,4,rd(s->r,4620,4));
L_1803fcc1b_5:;
wr(s->r,4496,4,rd(s->r,4928,4));
L_1803fcc1b_6:;
wr(s->r,4500,4,rd(s->r,4932,4));
L_1803fcc1b_7:;
wr(s->r,4504,4,rd(s->r,4936,4));
L_1803fcc1b_8:;
wr(s->r,4508,4,rd(s->r,4940,4));
L_1803fcc1b_9:;
wr(s->u,27,1,(fv(rd(s->r,4480,4),4)==fv(rd(s->r,4496,4),4)));
L_1803fcc1b_10:;
wr(s->u,28,4,rd(s->u,27,1));
L_1803fcc1b_11:;
wr(s->r,4480,4,(rd(s->u,28,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc1b_12:;
wr(s->u,32,1,(fv(rd(s->r,4484,4),4)==fv(rd(s->r,4500,4),4)));
L_1803fcc1b_13:;
wr(s->u,33,4,rd(s->u,32,1));
L_1803fcc1b_14:;
wr(s->r,4484,4,(rd(s->u,33,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc1b_15:;
wr(s->u,37,1,(fv(rd(s->r,4488,4),4)==fv(rd(s->r,4504,4),4)));
L_1803fcc1b_16:;
wr(s->u,38,4,rd(s->u,37,1));
L_1803fcc1b_17:;
wr(s->r,4488,4,(rd(s->u,38,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc1b_18:;
wr(s->u,42,1,(fv(rd(s->r,4492,4),4)==fv(rd(s->r,4508,4),4)));
L_1803fcc1b_19:;
wr(s->u,43,4,rd(s->u,42,1));
L_1803fcc1b_20:;
wr(s->r,4492,4,(rd(s->u,43,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc1b_21:;
wr(s->r,4608,4,rd(s->r,4480,4));
L_1803fcc1b_22:;
wr(s->r,4612,4,rd(s->r,4484,4));
L_1803fcc1b_23:;
wr(s->r,4616,4,rd(s->r,4488,4));
L_1803fcc1b_24:;
wr(s->r,4620,4,rd(s->r,4492,4));
L_1803fcc1b_25:;
/* 1803fcc1f: pand xmm1, xmm0 */
L_1803fcc1f_0:;
L_1803fcc1f_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)&rd(s->r,4608,16)));
L_1803fcc1f_2:;
/* 1803fcc23: pandn xmm0, xmmword ptr [rip + 0x411a05] */
L_1803fcc23_0:;
L_1803fcc23_1:;
wr(s->u,48,16,(~rd(s->r,4608,16)));
L_1803fcc23_2:;
wr(s->r,4608,16,(rd(s->u,48,16)&mr(UINT64_C(0x18080e630),16)));
L_1803fcc23_3:;
/* 1803fcc2b: por xmm1, xmm0 */
L_1803fcc2b_0:;
L_1803fcc2b_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)|rd(s->r,4608,16)));
L_1803fcc2b_2:;
/* 1803fcc2f: movdqa xmm0, xmm1 */
L_1803fcc2f_0:;
L_1803fcc2f_1:;
wr(s->r,4608,16,rd(s->r,4672,16));
L_1803fcc2f_2:;
/* 1803fcc33: movdqa xmm3, xmm1 */
L_1803fcc33_0:;
L_1803fcc33_1:;
wr(s->r,4800,16,rd(s->r,4672,16));
L_1803fcc33_2:;
/* 1803fcc37: psrldq xmm0, 8 */
L_1803fcc37_0:;
L_1803fcc37_1:;
wr(s->u,84,4,(((U)UINT64_C(0x8))*((U)UINT64_C(0x8))));
L_1803fcc37_2:;
wr(s->r,4608,16,((rd(s->u,84,4)>=128)?0:(rd(s->r,4608,16)>>rd(s->u,84,4))));
L_1803fcc37_3:;
/* 1803fcc3c: pcmpgtd xmm3, xmm0 */
L_1803fcc3c_0:;
L_1803fcc3c_1:;
wr(s->u,64,1,(sx(rd(s->r,4608,4),4)<sx(rd(s->r,4800,4),4)));
L_1803fcc3c_2:;
wr(s->u,65,4,rd(s->u,64,1));
L_1803fcc3c_3:;
wr(s->r,4800,4,(rd(s->u,65,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc3c_4:;
wr(s->u,69,1,(sx(rd(s->r,4612,4),4)<sx(rd(s->r,4804,4),4)));
L_1803fcc3c_5:;
wr(s->u,70,4,rd(s->u,69,1));
L_1803fcc3c_6:;
wr(s->r,4804,4,(rd(s->u,70,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc3c_7:;
wr(s->u,74,1,(sx(rd(s->r,4616,4),4)<sx(rd(s->r,4808,4),4)));
L_1803fcc3c_8:;
wr(s->u,75,4,rd(s->u,74,1));
L_1803fcc3c_9:;
wr(s->r,4808,4,(rd(s->u,75,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc3c_10:;
wr(s->u,79,1,(sx(rd(s->r,4620,4),4)<sx(rd(s->r,4812,4),4)));
L_1803fcc3c_11:;
wr(s->u,80,4,rd(s->u,79,1));
L_1803fcc3c_12:;
wr(s->r,4812,4,(rd(s->u,80,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc3c_13:;
/* 1803fcc40: pxor xmm0, xmm1 */
L_1803fcc40_0:;
L_1803fcc40_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4672,16)));
L_1803fcc40_2:;
/* 1803fcc44: pand xmm3, xmm0 */
L_1803fcc44_0:;
L_1803fcc44_1:;
wr(s->r,4800,16,(rd(s->r,4800,16)&rd(s->r,4608,16)));
L_1803fcc44_2:;
/* 1803fcc48: pxor xmm3, xmm1 */
L_1803fcc48_0:;
L_1803fcc48_1:;
wr(s->r,4800,16,(rd(s->r,4800,16)^rd(s->r,4672,16)));
L_1803fcc48_2:;
/* 1803fcc4c: movdqa xmm1, xmm3 */
L_1803fcc4c_0:;
L_1803fcc4c_1:;
wr(s->r,4672,16,rd(s->r,4800,16));
L_1803fcc4c_2:;
/* 1803fcc50: movdqa xmm0, xmm3 */
L_1803fcc50_0:;
L_1803fcc50_1:;
wr(s->r,4608,16,rd(s->r,4800,16));
L_1803fcc50_2:;
/* 1803fcc54: psrldq xmm1, 4 */
L_1803fcc54_0:;
L_1803fcc54_1:;
wr(s->u,84,4,(((U)UINT64_C(0x4))*((U)UINT64_C(0x8))));
L_1803fcc54_2:;
wr(s->r,4672,16,((rd(s->u,84,4)>=128)?0:(rd(s->r,4672,16)>>rd(s->u,84,4))));
L_1803fcc54_3:;
/* 1803fcc59: pcmpgtd xmm0, xmm1 */
L_1803fcc59_0:;
L_1803fcc59_1:;
wr(s->u,64,1,(sx(rd(s->r,4672,4),4)<sx(rd(s->r,4608,4),4)));
L_1803fcc59_2:;
wr(s->u,65,4,rd(s->u,64,1));
L_1803fcc59_3:;
wr(s->r,4608,4,(rd(s->u,65,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc59_4:;
wr(s->u,69,1,(sx(rd(s->r,4676,4),4)<sx(rd(s->r,4612,4),4)));
L_1803fcc59_5:;
wr(s->u,70,4,rd(s->u,69,1));
L_1803fcc59_6:;
wr(s->r,4612,4,(rd(s->u,70,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc59_7:;
wr(s->u,74,1,(sx(rd(s->r,4680,4),4)<sx(rd(s->r,4616,4),4)));
L_1803fcc59_8:;
wr(s->u,75,4,rd(s->u,74,1));
L_1803fcc59_9:;
wr(s->r,4616,4,(rd(s->u,75,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc59_10:;
wr(s->u,79,1,(sx(rd(s->r,4684,4),4)<sx(rd(s->r,4620,4),4)));
L_1803fcc59_11:;
wr(s->u,80,4,rd(s->u,79,1));
L_1803fcc59_12:;
wr(s->r,4620,4,(rd(s->u,80,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc59_13:;
/* 1803fcc5d: pxor xmm1, xmm3 */
L_1803fcc5d_0:;
L_1803fcc5d_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4800,16)));
L_1803fcc5d_2:;
/* 1803fcc61: pand xmm0, xmm1 */
L_1803fcc61_0:;
L_1803fcc61_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)&rd(s->r,4672,16)));
L_1803fcc61_2:;
/* 1803fcc65: pxor xmm0, xmm3 */
L_1803fcc65_0:;
L_1803fcc65_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4800,16)));
L_1803fcc65_2:;
/* 1803fcc69: movd r8d, xmm0 */
L_1803fcc69_0:;
L_1803fcc69_1:;
wr(s->r,128,4,(rd(s->r,4608,16) >> (((U)UINT64_C(0x0))*8)));
L_1803fcc69_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fcc69_3:;
/* 1803fcc6e: cmp rcx, rax */
L_1803fcc6e_0:;
L_1803fcc6e_1:;
wr(s->u,11,8,rd(s->r,0,8));
L_1803fcc6e_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,11,8)));
L_1803fcc6e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,11,8),8,1));
L_1803fcc6e_4:;
wr(s->u,19,8,(rd(s->r,8,8)-rd(s->u,11,8)));
L_1803fcc6e_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcc6e_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fcc6e_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fcc6e_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fcc6e_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fcc6e_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fcc6e_11:;
/* 1803fcc71: jge 0x1803fcc91 */
L_1803fcc71_0:;
L_1803fcc71_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fcc71_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fcc91);}
L_1803fcc71_3:;
return UINT64_C(0x1803fcc73);
}
uint64_t b_1803fcc12(CPU*s){
/* 1803fcc12: movaps xmm5, xmm2 */
L_1803fcc12_0:;
L_1803fcc12_1:;
wr(s->r,4928,4,rd(s->r,4736,4));
L_1803fcc12_2:;
wr(s->r,4932,4,rd(s->r,4740,4));
L_1803fcc12_3:;
wr(s->r,4936,4,rd(s->r,4744,4));
L_1803fcc12_4:;
wr(s->r,4940,4,rd(s->r,4748,4));
L_1803fcc12_5:;
/* 1803fcc15: unpcklps xmm5, xmm5 */
L_1803fcc15_0:;
L_1803fcc15_1:;
wr(s->r,4936,4,rd(s->r,4932,4));
L_1803fcc15_2:;
wr(s->r,4940,4,rd(s->r,4932,4));
L_1803fcc15_3:;
wr(s->r,4932,4,rd(s->r,4928,4));
L_1803fcc15_4:;
/* 1803fcc18: unpcklps xmm5, xmm5 */
L_1803fcc18_0:;
L_1803fcc18_1:;
wr(s->r,4936,4,rd(s->r,4932,4));
L_1803fcc18_2:;
wr(s->r,4940,4,rd(s->r,4932,4));
L_1803fcc18_3:;
wr(s->r,4932,4,rd(s->r,4928,4));
L_1803fcc18_4:;
/* 1803fcc1b: cmpeqps xmm0, xmm5 */
L_1803fcc1b_0:;
L_1803fcc1b_1:;
wr(s->r,4480,4,rd(s->r,4608,4));
L_1803fcc1b_2:;
wr(s->r,4484,4,rd(s->r,4612,4));
L_1803fcc1b_3:;
wr(s->r,4488,4,rd(s->r,4616,4));
L_1803fcc1b_4:;
wr(s->r,4492,4,rd(s->r,4620,4));
L_1803fcc1b_5:;
wr(s->r,4496,4,rd(s->r,4928,4));
L_1803fcc1b_6:;
wr(s->r,4500,4,rd(s->r,4932,4));
L_1803fcc1b_7:;
wr(s->r,4504,4,rd(s->r,4936,4));
L_1803fcc1b_8:;
wr(s->r,4508,4,rd(s->r,4940,4));
L_1803fcc1b_9:;
wr(s->u,27,1,(fv(rd(s->r,4480,4),4)==fv(rd(s->r,4496,4),4)));
L_1803fcc1b_10:;
wr(s->u,28,4,rd(s->u,27,1));
L_1803fcc1b_11:;
wr(s->r,4480,4,(rd(s->u,28,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc1b_12:;
wr(s->u,32,1,(fv(rd(s->r,4484,4),4)==fv(rd(s->r,4500,4),4)));
L_1803fcc1b_13:;
wr(s->u,33,4,rd(s->u,32,1));
L_1803fcc1b_14:;
wr(s->r,4484,4,(rd(s->u,33,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc1b_15:;
wr(s->u,37,1,(fv(rd(s->r,4488,4),4)==fv(rd(s->r,4504,4),4)));
L_1803fcc1b_16:;
wr(s->u,38,4,rd(s->u,37,1));
L_1803fcc1b_17:;
wr(s->r,4488,4,(rd(s->u,38,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc1b_18:;
wr(s->u,42,1,(fv(rd(s->r,4492,4),4)==fv(rd(s->r,4508,4),4)));
L_1803fcc1b_19:;
wr(s->u,43,4,rd(s->u,42,1));
L_1803fcc1b_20:;
wr(s->r,4492,4,(rd(s->u,43,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc1b_21:;
wr(s->r,4608,4,rd(s->r,4480,4));
L_1803fcc1b_22:;
wr(s->r,4612,4,rd(s->r,4484,4));
L_1803fcc1b_23:;
wr(s->r,4616,4,rd(s->r,4488,4));
L_1803fcc1b_24:;
wr(s->r,4620,4,rd(s->r,4492,4));
L_1803fcc1b_25:;
/* 1803fcc1f: pand xmm1, xmm0 */
L_1803fcc1f_0:;
L_1803fcc1f_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)&rd(s->r,4608,16)));
L_1803fcc1f_2:;
/* 1803fcc23: pandn xmm0, xmmword ptr [rip + 0x411a05] */
L_1803fcc23_0:;
L_1803fcc23_1:;
wr(s->u,47,16,(~rd(s->r,4608,16)));
L_1803fcc23_2:;
wr(s->r,4608,16,(rd(s->u,47,16)&mr(UINT64_C(0x18080e630),16)));
L_1803fcc23_3:;
/* 1803fcc2b: por xmm1, xmm0 */
L_1803fcc2b_0:;
L_1803fcc2b_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)|rd(s->r,4608,16)));
L_1803fcc2b_2:;
/* 1803fcc2f: movdqa xmm0, xmm1 */
L_1803fcc2f_0:;
L_1803fcc2f_1:;
wr(s->r,4608,16,rd(s->r,4672,16));
L_1803fcc2f_2:;
/* 1803fcc33: movdqa xmm3, xmm1 */
L_1803fcc33_0:;
L_1803fcc33_1:;
wr(s->r,4800,16,rd(s->r,4672,16));
L_1803fcc33_2:;
/* 1803fcc37: psrldq xmm0, 8 */
L_1803fcc37_0:;
L_1803fcc37_1:;
wr(s->u,83,4,(((U)UINT64_C(0x8))*((U)UINT64_C(0x8))));
L_1803fcc37_2:;
wr(s->r,4608,16,((rd(s->u,83,4)>=128)?0:(rd(s->r,4608,16)>>rd(s->u,83,4))));
L_1803fcc37_3:;
/* 1803fcc3c: pcmpgtd xmm3, xmm0 */
L_1803fcc3c_0:;
L_1803fcc3c_1:;
wr(s->u,63,1,(sx(rd(s->r,4608,4),4)<sx(rd(s->r,4800,4),4)));
L_1803fcc3c_2:;
wr(s->u,64,4,rd(s->u,63,1));
L_1803fcc3c_3:;
wr(s->r,4800,4,(rd(s->u,64,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc3c_4:;
wr(s->u,68,1,(sx(rd(s->r,4612,4),4)<sx(rd(s->r,4804,4),4)));
L_1803fcc3c_5:;
wr(s->u,69,4,rd(s->u,68,1));
L_1803fcc3c_6:;
wr(s->r,4804,4,(rd(s->u,69,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc3c_7:;
wr(s->u,73,1,(sx(rd(s->r,4616,4),4)<sx(rd(s->r,4808,4),4)));
L_1803fcc3c_8:;
wr(s->u,74,4,rd(s->u,73,1));
L_1803fcc3c_9:;
wr(s->r,4808,4,(rd(s->u,74,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc3c_10:;
wr(s->u,78,1,(sx(rd(s->r,4620,4),4)<sx(rd(s->r,4812,4),4)));
L_1803fcc3c_11:;
wr(s->u,79,4,rd(s->u,78,1));
L_1803fcc3c_12:;
wr(s->r,4812,4,(rd(s->u,79,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc3c_13:;
/* 1803fcc40: pxor xmm0, xmm1 */
L_1803fcc40_0:;
L_1803fcc40_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4672,16)));
L_1803fcc40_2:;
/* 1803fcc44: pand xmm3, xmm0 */
L_1803fcc44_0:;
L_1803fcc44_1:;
wr(s->r,4800,16,(rd(s->r,4800,16)&rd(s->r,4608,16)));
L_1803fcc44_2:;
/* 1803fcc48: pxor xmm3, xmm1 */
L_1803fcc48_0:;
L_1803fcc48_1:;
wr(s->r,4800,16,(rd(s->r,4800,16)^rd(s->r,4672,16)));
L_1803fcc48_2:;
/* 1803fcc4c: movdqa xmm1, xmm3 */
L_1803fcc4c_0:;
L_1803fcc4c_1:;
wr(s->r,4672,16,rd(s->r,4800,16));
L_1803fcc4c_2:;
/* 1803fcc50: movdqa xmm0, xmm3 */
L_1803fcc50_0:;
L_1803fcc50_1:;
wr(s->r,4608,16,rd(s->r,4800,16));
L_1803fcc50_2:;
/* 1803fcc54: psrldq xmm1, 4 */
L_1803fcc54_0:;
L_1803fcc54_1:;
wr(s->u,83,4,(((U)UINT64_C(0x4))*((U)UINT64_C(0x8))));
L_1803fcc54_2:;
wr(s->r,4672,16,((rd(s->u,83,4)>=128)?0:(rd(s->r,4672,16)>>rd(s->u,83,4))));
L_1803fcc54_3:;
/* 1803fcc59: pcmpgtd xmm0, xmm1 */
L_1803fcc59_0:;
L_1803fcc59_1:;
wr(s->u,63,1,(sx(rd(s->r,4672,4),4)<sx(rd(s->r,4608,4),4)));
L_1803fcc59_2:;
wr(s->u,64,4,rd(s->u,63,1));
L_1803fcc59_3:;
wr(s->r,4608,4,(rd(s->u,64,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc59_4:;
wr(s->u,68,1,(sx(rd(s->r,4676,4),4)<sx(rd(s->r,4612,4),4)));
L_1803fcc59_5:;
wr(s->u,69,4,rd(s->u,68,1));
L_1803fcc59_6:;
wr(s->r,4612,4,(rd(s->u,69,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc59_7:;
wr(s->u,73,1,(sx(rd(s->r,4680,4),4)<sx(rd(s->r,4616,4),4)));
L_1803fcc59_8:;
wr(s->u,74,4,rd(s->u,73,1));
L_1803fcc59_9:;
wr(s->r,4616,4,(rd(s->u,74,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc59_10:;
wr(s->u,78,1,(sx(rd(s->r,4684,4),4)<sx(rd(s->r,4620,4),4)));
L_1803fcc59_11:;
wr(s->u,79,4,rd(s->u,78,1));
L_1803fcc59_12:;
wr(s->r,4620,4,(rd(s->u,79,4)*((U)UINT64_C(0xffffffff))));
L_1803fcc59_13:;
/* 1803fcc5d: pxor xmm1, xmm3 */
L_1803fcc5d_0:;
L_1803fcc5d_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4800,16)));
L_1803fcc5d_2:;
/* 1803fcc61: pand xmm0, xmm1 */
L_1803fcc61_0:;
L_1803fcc61_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)&rd(s->r,4672,16)));
L_1803fcc61_2:;
/* 1803fcc65: pxor xmm0, xmm3 */
L_1803fcc65_0:;
L_1803fcc65_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4800,16)));
L_1803fcc65_2:;
/* 1803fcc69: movd r8d, xmm0 */
L_1803fcc69_0:;
L_1803fcc69_1:;
wr(s->r,128,4,(rd(s->r,4608,16) >> (((U)UINT64_C(0x0))*8)));
L_1803fcc69_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fcc69_3:;
/* 1803fcc6e: cmp rcx, rax */
L_1803fcc6e_0:;
L_1803fcc6e_1:;
wr(s->u,11,8,rd(s->r,0,8));
L_1803fcc6e_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,11,8)));
L_1803fcc6e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,11,8),8,1));
L_1803fcc6e_4:;
wr(s->u,19,8,(rd(s->r,8,8)-rd(s->u,11,8)));
L_1803fcc6e_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcc6e_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fcc6e_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fcc6e_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fcc6e_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fcc6e_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fcc6e_11:;
/* 1803fcc71: jge 0x1803fcc91 */
L_1803fcc71_0:;
L_1803fcc71_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fcc71_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fcc91);}
L_1803fcc71_3:;
return UINT64_C(0x1803fcc73);
}
uint64_t b_1803fcc6e(CPU*s){
/* 1803fcc6e: cmp rcx, rax */
L_1803fcc6e_0:;
L_1803fcc6e_1:;
wr(s->u,11,8,rd(s->r,0,8));
L_1803fcc6e_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,11,8)));
L_1803fcc6e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,11,8),8,1));
L_1803fcc6e_4:;
wr(s->u,19,8,(rd(s->r,8,8)-rd(s->u,11,8)));
L_1803fcc6e_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcc6e_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fcc6e_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fcc6e_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fcc6e_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fcc6e_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fcc6e_11:;
/* 1803fcc71: jge 0x1803fcc91 */
L_1803fcc71_0:;
L_1803fcc71_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fcc71_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fcc91);}
L_1803fcc71_3:;
return UINT64_C(0x1803fcc73);
}
uint64_t b_1803fcc73(CPU*s){
/* 1803fcc73: movss xmm0, dword ptr [rsi + rcx*4 + 4] */
L_1803fcc73_0:;
L_1803fcc73_1:;
wr(s->u,0,8,(((U)UINT64_C(0x4))+rd(s->r,48,8)));
L_1803fcc73_2:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803fcc73_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803fcc73_4:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fcc73_5:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803fcc73_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fcc73_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fcc73_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fcc73_9:;
/* 1803fcc79: comiss xmm0, xmm2 */
L_1803fcc79_0:;
L_1803fcc79_1:;
wr(s->u,29,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803fcc79_2:;
wr(s->u,30,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803fcc79_3:;
wr(s->r,514,1,((rd(s->u,29,1)!=0)||(rd(s->u,30,1)!=0)));
L_1803fcc79_4:;
wr(s->u,31,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4736,4),4)));
L_1803fcc79_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,31,1)));
L_1803fcc79_6:;
wr(s->u,32,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4736,4),4)));
L_1803fcc79_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,32,1)));
L_1803fcc79_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcc79_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fcc79_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fcc79_11:;
/* 1803fcc7c: jbe 0x1803fcc88 */
L_1803fcc7c_0:;
L_1803fcc7c_1:;
wr(s->u,28,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fcc7c_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803fcc88);}
L_1803fcc7c_3:;
return UINT64_C(0x1803fcc7e);
}
uint64_t b_1803fcc7e(CPU*s){
/* 1803fcc7e: movaps xmm2, xmm0 */
L_1803fcc7e_0:;
L_1803fcc7e_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803fcc7e_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803fcc7e_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803fcc7e_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803fcc7e_5:;
/* 1803fcc81: mov r8d, ecx */
L_1803fcc81_0:;
L_1803fcc81_1:;
wr(s->r,128,4,rd(s->r,8,4));
L_1803fcc81_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fcc81_3:;
/* 1803fcc84: add r8d, 1 */
L_1803fcc84_0:;
L_1803fcc84_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803fcc84_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x1)),4,0));
L_1803fcc84_3:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0x1))));
L_1803fcc84_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fcc84_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcc84_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fcc84_7:;
wr(s->u,1,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fcc84_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803fcc84_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fcc84_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fcc84_11:;
/* 1803fcc88: add rcx, 1 */
L_1803fcc88_0:;
L_1803fcc88_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803fcc88_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x1)),8,0));
L_1803fcc88_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1))));
L_1803fcc88_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcc88_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803fcc88_6:;
wr(s->u,1,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803fcc88_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fcc88_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fcc88_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fcc88_10:;
/* 1803fcc8c: cmp rcx, rax */
L_1803fcc8c_0:;
L_1803fcc8c_1:;
wr(s->u,11,8,rd(s->r,0,8));
L_1803fcc8c_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,11,8)));
L_1803fcc8c_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,11,8),8,1));
L_1803fcc8c_4:;
wr(s->u,19,8,(rd(s->r,8,8)-rd(s->u,11,8)));
L_1803fcc8c_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcc8c_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fcc8c_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fcc8c_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fcc8c_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fcc8c_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fcc8c_11:;
/* 1803fcc8f: jl 0x1803fcc73 */
L_1803fcc8f_0:;
L_1803fcc8f_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fcc8f_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fcc73);}
L_1803fcc8f_3:;
return UINT64_C(0x1803fcc91);
}
uint64_t b_1803fcc88(CPU*s){
/* 1803fcc88: add rcx, 1 */
L_1803fcc88_0:;
L_1803fcc88_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803fcc88_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x1)),8,0));
L_1803fcc88_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1))));
L_1803fcc88_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcc88_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803fcc88_6:;
wr(s->u,1,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803fcc88_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fcc88_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fcc88_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fcc88_10:;
/* 1803fcc8c: cmp rcx, rax */
L_1803fcc8c_0:;
L_1803fcc8c_1:;
wr(s->u,11,8,rd(s->r,0,8));
L_1803fcc8c_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,11,8)));
L_1803fcc8c_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,11,8),8,1));
L_1803fcc8c_4:;
wr(s->u,19,8,(rd(s->r,8,8)-rd(s->u,11,8)));
L_1803fcc8c_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcc8c_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fcc8c_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fcc8c_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fcc8c_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fcc8c_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fcc8c_11:;
/* 1803fcc8f: jl 0x1803fcc73 */
L_1803fcc8f_0:;
L_1803fcc8f_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fcc8f_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fcc73);}
L_1803fcc8f_3:;
return UINT64_C(0x1803fcc91);
}
uint64_t b_1803fcc91(CPU*s){
/* 1803fcc91: movss dword ptr [rdi], xmm2 */
L_1803fcc91_0:;
L_1803fcc91_1:;
wr(s->u,0,4,rd(s->r,4736,4));
L_1803fcc91_2:;
mw((uint64_t)rd(s->r,56,8),4,rd(s->u,0,4));
L_1803fcc91_3:;
/* 1803fcc95: mov dword ptr [r12], r8d */
L_1803fcc95_0:;
L_1803fcc95_1:;
wr(s->u,0,4,rd(s->r,128,4));
L_1803fcc95_2:;
mw((uint64_t)rd(s->r,160,8),4,rd(s->u,0,4));
L_1803fcc95_3:;
/* 1803fcc99: xor eax, eax */
L_1803fcc99_0:;
L_1803fcc99_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcc99_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcc99_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fcc99_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fcc99_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcc99_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fcc99_7:;
wr(s->u,4,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fcc99_8:;
wr(s->u,12,1,pop(rd(s->u,4,4),4));
L_1803fcc99_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fcc99_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fcc99_11:;
/* 1803fcc9b: add rsp, 0x48 */
L_1803fcc9b_0:;
L_1803fcc9b_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcc9b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fcc9b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fcc9b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcc9b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcc9b_6:;
wr(s->u,4,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcc9b_7:;
wr(s->u,12,1,pop(rd(s->u,4,8),8));
L_1803fcc9b_8:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fcc9b_9:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fcc9b_10:;
/* 1803fcc9f: pop rbx */
L_1803fcc9f_0:;
L_1803fcc9f_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fcc9f_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcc9f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcc9f_4:;
wr(s->r,24,8,rd(s->u,14,8));
L_1803fcc9f_5:;
/* 1803fcca0: pop rbp */
L_1803fcca0_0:;
L_1803fcca0_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fcca0_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcca0_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcca0_4:;
wr(s->r,40,8,rd(s->u,14,8));
L_1803fcca0_5:;
/* 1803fcca1: pop rsi */
L_1803fcca1_0:;
L_1803fcca1_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fcca1_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcca1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcca1_4:;
wr(s->r,48,8,rd(s->u,14,8));
L_1803fcca1_5:;
/* 1803fcca2: pop rdi */
L_1803fcca2_0:;
L_1803fcca2_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fcca2_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcca2_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcca2_4:;
wr(s->r,56,8,rd(s->u,14,8));
L_1803fcca2_5:;
/* 1803fcca3: pop r12 */
L_1803fcca3_0:;
L_1803fcca3_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fcca3_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcca3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcca3_4:;
wr(s->r,160,8,rd(s->u,14,8));
L_1803fcca3_5:;
/* 1803fcca5: pop r13 */
L_1803fcca5_0:;
L_1803fcca5_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fcca5_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcca5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcca5_4:;
wr(s->r,168,8,rd(s->u,14,8));
L_1803fcca5_5:;
/* 1803fcca7: pop r14 */
L_1803fcca7_0:;
L_1803fcca7_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fcca7_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcca7_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcca7_4:;
wr(s->r,176,8,rd(s->u,14,8));
L_1803fcca7_5:;
/* 1803fcca9: pop r15 */
L_1803fcca9_0:;
L_1803fcca9_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fcca9_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcca9_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcca9_4:;
wr(s->r,184,8,rd(s->u,14,8));
L_1803fcca9_5:;
/* 1803fccab: ret  */
L_1803fccab_0:;
L_1803fccab_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fccab_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fccab_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fccab_4:;
return UINT64_C(0x1803fccac);
}
uint64_t b_1803fccac(CPU*s){
/* 1803fccac: xor ecx, ecx */
L_1803fccac_0:;
L_1803fccac_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fccac_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fccac_3:;
wr(s->r,8,4,(rd(s->r,8,4)^rd(s->r,8,4)));
L_1803fccac_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fccac_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fccac_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803fccac_7:;
wr(s->u,0,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803fccac_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fccac_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fccac_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fccac_11:;
/* 1803fccae: jmp 0x1803fcc6e */
L_1803fccae_0:;
L_1803fccae_1:;
return UINT64_C(0x1803fcc6e);
L_1803fccae_2:;
return UINT64_C(0x1803fccb0);
}
uint64_t b_1803fccb0(CPU*s){
/* 1803fccb0: movss xmm2, dword ptr [rsi] */
L_1803fccb0_0:;
L_1803fccb0_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,48,8),4));
L_1803fccb0_2:;
wr(s->r,4736,4,rd(s->u,0,4));
L_1803fccb0_3:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fccb0_4:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fccb0_5:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fccb0_6:;
/* 1803fccb4: movss xmm0, dword ptr [rsi] */
L_1803fccb4_0:;
L_1803fccb4_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,48,8),4));
L_1803fccb4_2:;
wr(s->r,4608,4,rd(s->u,0,4));
L_1803fccb4_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fccb4_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fccb4_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fccb4_6:;
/* 1803fccb8: movss xmm1, dword ptr [rsi] */
L_1803fccb8_0:;
L_1803fccb8_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,48,8),4));
L_1803fccb8_2:;
wr(s->r,4672,4,rd(s->u,0,4));
L_1803fccb8_3:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fccb8_4:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fccb8_5:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fccb8_6:;
/* 1803fccbc: xor ecx, ecx */
L_1803fccbc_0:;
L_1803fccbc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fccbc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fccbc_3:;
wr(s->r,8,4,(rd(s->r,8,4)^rd(s->r,8,4)));
L_1803fccbc_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fccbc_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fccbc_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803fccbc_7:;
wr(s->u,4,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803fccbc_8:;
wr(s->u,12,1,pop(rd(s->u,4,4),4));
L_1803fccbc_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fccbc_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fccbc_11:;
/* 1803fccbe: xor ebp, ebp */
L_1803fccbe_0:;
L_1803fccbe_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fccbe_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fccbe_3:;
wr(s->r,40,4,(rd(s->r,40,4)^rd(s->r,40,4)));
L_1803fccbe_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fccbe_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fccbe_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803fccbe_7:;
wr(s->u,4,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803fccbe_8:;
wr(s->u,12,1,pop(rd(s->u,4,4),4));
L_1803fccbe_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fccbe_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fccbe_11:;
/* 1803fccc0: test rsi, 0xf */
L_1803fccc0_0:;
L_1803fccc0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fccc0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fccc0_3:;
wr(s->u,14,8,(rd(s->r,48,8)&((U)UINT64_C(0xf))));
L_1803fccc0_4:;
wr(s->r,519,1,(sx(rd(s->u,14,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fccc0_5:;
wr(s->r,518,1,(rd(s->u,14,8)==((U)UINT64_C(0x0))));
L_1803fccc0_6:;
wr(s->u,4,8,(rd(s->u,14,8)&((U)UINT64_C(0xff))));
L_1803fccc0_7:;
wr(s->u,12,1,pop(rd(s->u,4,8),8));
L_1803fccc0_8:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fccc0_9:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fccc0_10:;
/* 1803fccc7: je 0x1803fce7a */
L_1803fccc7_0:;
L_1803fccc7_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fce7a);}
L_1803fccc7_2:;
return UINT64_C(0x1803fcccd);
}
uint64_t b_1803fcccd(CPU*s){
/* 1803fcccd: xor eax, eax */
L_1803fcccd_0:;
L_1803fcccd_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcccd_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcccd_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fcccd_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fcccd_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcccd_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fcccd_7:;
wr(s->u,21,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fcccd_8:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803fcccd_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fcccd_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fcccd_11:;
/* 1803fcccf: movss xmm3, dword ptr [rsi + rcx*4] */
L_1803fcccf_0:;
L_1803fcccf_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803fcccf_2:;
wr(s->u,8,8,(rd(s->r,48,8)+rd(s->u,0,8)));
L_1803fcccf_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fcccf_4:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fcccf_5:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fcccf_6:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fcccf_7:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fcccf_8:;
/* 1803fccd4: add rax, 1 */
L_1803fccd4_0:;
L_1803fccd4_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fccd4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fccd4_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fccd4_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fccd4_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fccd4_6:;
wr(s->u,21,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fccd4_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fccd4_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fccd4_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fccd4_10:;
/* 1803fccd8: comiss xmm3, xmm2 */
L_1803fccd8_0:;
L_1803fccd8_1:;
wr(s->u,31,1,isnan(fv(rd(s->r,4800,4),4)));
L_1803fccd8_2:;
wr(s->u,32,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803fccd8_3:;
wr(s->r,514,1,((rd(s->u,31,1)!=0)||(rd(s->u,32,1)!=0)));
L_1803fccd8_4:;
wr(s->u,33,1,(fv(rd(s->r,4800,4),4)==fv(rd(s->r,4736,4),4)));
L_1803fccd8_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,33,1)));
L_1803fccd8_6:;
wr(s->u,34,1,(fv(rd(s->r,4800,4),4)<fv(rd(s->r,4736,4),4)));
L_1803fccd8_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,34,1)));
L_1803fccd8_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fccd8_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fccd8_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fccd8_11:;
/* 1803fccdb: jbe 0x1803fcce8 */
L_1803fccdb_0:;
L_1803fccdb_1:;
wr(s->u,20,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fccdb_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fcce8);}
L_1803fccdb_3:;
return UINT64_C(0x1803fccdd);
}
uint64_t b_1803fcccf(CPU*s){
/* 1803fcccf: movss xmm3, dword ptr [rsi + rcx*4] */
L_1803fcccf_0:;
L_1803fcccf_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803fcccf_2:;
wr(s->u,8,8,(rd(s->r,48,8)+rd(s->u,0,8)));
L_1803fcccf_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fcccf_4:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fcccf_5:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fcccf_6:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fcccf_7:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fcccf_8:;
/* 1803fccd4: add rax, 1 */
L_1803fccd4_0:;
L_1803fccd4_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fccd4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fccd4_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fccd4_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fccd4_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fccd4_6:;
wr(s->u,21,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fccd4_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fccd4_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fccd4_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fccd4_10:;
/* 1803fccd8: comiss xmm3, xmm2 */
L_1803fccd8_0:;
L_1803fccd8_1:;
wr(s->u,31,1,isnan(fv(rd(s->r,4800,4),4)));
L_1803fccd8_2:;
wr(s->u,32,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803fccd8_3:;
wr(s->r,514,1,((rd(s->u,31,1)!=0)||(rd(s->u,32,1)!=0)));
L_1803fccd8_4:;
wr(s->u,33,1,(fv(rd(s->r,4800,4),4)==fv(rd(s->r,4736,4),4)));
L_1803fccd8_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,33,1)));
L_1803fccd8_6:;
wr(s->u,34,1,(fv(rd(s->r,4800,4),4)<fv(rd(s->r,4736,4),4)));
L_1803fccd8_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,34,1)));
L_1803fccd8_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fccd8_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fccd8_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fccd8_11:;
/* 1803fccdb: jbe 0x1803fcce8 */
L_1803fccdb_0:;
L_1803fccdb_1:;
wr(s->u,20,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fccdb_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fcce8);}
L_1803fccdb_3:;
return UINT64_C(0x1803fccdd);
}
uint64_t b_1803fccdd(CPU*s){
/* 1803fccdd: movaps xmm2, xmm3 */
L_1803fccdd_0:;
L_1803fccdd_1:;
wr(s->r,4736,4,rd(s->r,4800,4));
L_1803fccdd_2:;
wr(s->r,4740,4,rd(s->r,4804,4));
L_1803fccdd_3:;
wr(s->r,4744,4,rd(s->r,4808,4));
L_1803fccdd_4:;
wr(s->r,4748,4,rd(s->r,4812,4));
L_1803fccdd_5:;
/* 1803fcce0: movaps xmm0, xmm3 */
L_1803fcce0_0:;
L_1803fcce0_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fcce0_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fcce0_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fcce0_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fcce0_5:;
/* 1803fcce3: movaps xmm1, xmm3 */
L_1803fcce3_0:;
L_1803fcce3_1:;
wr(s->r,4672,4,rd(s->r,4800,4));
L_1803fcce3_2:;
wr(s->r,4676,4,rd(s->r,4804,4));
L_1803fcce3_3:;
wr(s->r,4680,4,rd(s->r,4808,4));
L_1803fcce3_4:;
wr(s->r,4684,4,rd(s->r,4812,4));
L_1803fcce3_5:;
/* 1803fcce6: mov ebp, ecx */
L_1803fcce6_0:;
L_1803fcce6_1:;
wr(s->r,40,4,rd(s->r,8,4));
L_1803fcce6_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fcce6_3:;
/* 1803fcce8: add ebx, -1 */
L_1803fcce8_0:;
L_1803fcce8_1:;
wr(s->r,512,1,(((rd(s->r,24,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,24,4)));
L_1803fcce8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fcce8_3:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0xffffffff))));
L_1803fcce8_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fcce8_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcce8_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803fcce8_7:;
wr(s->u,0,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803fcce8_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fcce8_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcce8_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcce8_11:;
/* 1803fcceb: add rcx, 1 */
L_1803fcceb_0:;
L_1803fcceb_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803fcceb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x1)),8,0));
L_1803fcceb_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1))));
L_1803fcceb_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcceb_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803fcceb_6:;
wr(s->u,0,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803fcceb_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcceb_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcceb_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcceb_10:;
/* 1803fccef: test ebx, ebx */
L_1803fccef_0:;
L_1803fccef_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fccef_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fccef_3:;
wr(s->u,10,4,(rd(s->r,24,4)&rd(s->r,24,4)));
L_1803fccef_4:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fccef_5:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fccef_6:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fccef_7:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fccef_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fccef_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fccef_10:;
/* 1803fccf1: je 0x1803fce5f */
L_1803fccf1_0:;
L_1803fccf1_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fce5f);}
L_1803fccf1_2:;
return UINT64_C(0x1803fccf7);
}
uint64_t b_1803fcce8(CPU*s){
/* 1803fcce8: add ebx, -1 */
L_1803fcce8_0:;
L_1803fcce8_1:;
wr(s->r,512,1,(((rd(s->r,24,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,24,4)));
L_1803fcce8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fcce8_3:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0xffffffff))));
L_1803fcce8_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fcce8_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcce8_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803fcce8_7:;
wr(s->u,0,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803fcce8_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fcce8_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcce8_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcce8_11:;
/* 1803fcceb: add rcx, 1 */
L_1803fcceb_0:;
L_1803fcceb_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803fcceb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x1)),8,0));
L_1803fcceb_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1))));
L_1803fcceb_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcceb_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803fcceb_6:;
wr(s->u,0,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803fcceb_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcceb_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcceb_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcceb_10:;
/* 1803fccef: test ebx, ebx */
L_1803fccef_0:;
L_1803fccef_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fccef_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fccef_3:;
wr(s->u,10,4,(rd(s->r,24,4)&rd(s->r,24,4)));
L_1803fccef_4:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fccef_5:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fccef_6:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fccef_7:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fccef_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fccef_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fccef_10:;
/* 1803fccf1: je 0x1803fce5f */
L_1803fccf1_0:;
L_1803fccf1_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fce5f);}
L_1803fccf1_2:;
return UINT64_C(0x1803fccf7);
}
uint64_t b_1803fccf7(CPU*s){
/* 1803fccf7: lea rdx, [rsi + rax*4] */
L_1803fccf7_0:;
L_1803fccf7_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fccf7_2:;
wr(s->u,8,8,(rd(s->r,48,8)+rd(s->u,0,8)));
L_1803fccf7_3:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803fccf7_4:;
/* 1803fccfb: test rdx, 0xf */
L_1803fccfb_0:;
L_1803fccfb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fccfb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fccfb_3:;
wr(s->u,27,8,(rd(s->r,16,8)&((U)UINT64_C(0xf))));
L_1803fccfb_4:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fccfb_5:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803fccfb_6:;
wr(s->u,17,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803fccfb_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803fccfb_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fccfb_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fccfb_10:;
/* 1803fcd02: jne 0x1803fcccf */
L_1803fcd02_0:;
L_1803fcd02_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1803fcd02_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803fcccf);}
L_1803fcd02_3:;
return UINT64_C(0x1803fcd04);
}
uint64_t b_1803fcd04(CPU*s){
/* 1803fcd04: movss dword ptr [rsp + 0x40], xmm1 */
L_1803fcd04_0:;
L_1803fcd04_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803fcd04_2:;
wr(s->u,8,4,rd(s->r,4672,4));
L_1803fcd04_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fcd04_4:;
/* 1803fcd0a: mov r15d, ecx */
L_1803fcd0a_0:;
L_1803fcd0a_1:;
wr(s->r,184,4,rd(s->r,8,4));
L_1803fcd0a_2:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803fcd0a_3:;
/* 1803fcd0d: movsxd r14, ecx */
L_1803fcd0d_0:;
L_1803fcd0d_1:;
wr(s->r,176,8,(U)sx(rd(s->r,8,4),4));
L_1803fcd0d_2:;
/* 1803fcd10: mov r13d, ebx */
L_1803fcd10_0:;
L_1803fcd10_1:;
wr(s->r,168,4,rd(s->r,24,4));
L_1803fcd10_2:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fcd10_3:;
/* 1803fcd13: and r13d, 7 */
L_1803fcd13_0:;
L_1803fcd13_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcd13_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcd13_3:;
wr(s->r,168,4,(rd(s->r,168,4)&((U)UINT64_C(0x7))));
L_1803fcd13_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fcd13_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcd13_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fcd13_7:;
wr(s->u,14,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fcd13_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803fcd13_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803fcd13_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803fcd13_11:;
/* 1803fcd17: sub ebx, r13d */
L_1803fcd17_0:;
L_1803fcd17_1:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->r,168,4)));
L_1803fcd17_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->r,168,4),4,1));
L_1803fcd17_3:;
wr(s->r,24,4,(rd(s->r,24,4)-rd(s->r,168,4)));
L_1803fcd17_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fcd17_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcd17_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803fcd17_7:;
wr(s->u,14,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803fcd17_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803fcd17_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803fcd17_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803fcd17_11:;
/* 1803fcd1a: xor eax, eax */
L_1803fcd1a_0:;
L_1803fcd1a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcd1a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcd1a_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fcd1a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fcd1a_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcd1a_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fcd1a_7:;
wr(s->u,14,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fcd1a_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803fcd1a_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803fcd1a_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803fcd1a_11:;
/* 1803fcd1c: xor edx, edx */
L_1803fcd1c_0:;
L_1803fcd1c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcd1c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcd1c_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803fcd1c_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fcd1c_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcd1c_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fcd1c_7:;
wr(s->u,14,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fcd1c_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803fcd1c_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803fcd1c_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803fcd1c_11:;
/* 1803fcd1e: cmp ebx, 0x800 */
L_1803fcd1e_0:;
L_1803fcd1e_1:;
wr(s->u,20,4,rd(s->r,24,4));
L_1803fcd1e_2:;
wr(s->r,512,1,(rd(s->u,20,4)<((U)UINT64_C(0x800))));
L_1803fcd1e_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),((U)UINT64_C(0x800)),4,1));
L_1803fcd1e_4:;
wr(s->u,24,4,(rd(s->u,20,4)-((U)UINT64_C(0x800))));
L_1803fcd1e_5:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcd1e_6:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803fcd1e_7:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803fcd1e_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803fcd1e_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803fcd1e_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803fcd1e_11:;
/* 1803fcd24: jle 0x1803fcdea */
L_1803fcd24_0:;
L_1803fcd24_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fcd24_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803fcd24_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803fcdea);}
L_1803fcd24_4:;
return UINT64_C(0x1803fcd2a);
}
uint64_t b_1803fcd0a(CPU*s){
/* 1803fcd0a: mov r15d, ecx */
L_1803fcd0a_0:;
L_1803fcd0a_1:;
wr(s->r,184,4,rd(s->r,8,4));
L_1803fcd0a_2:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803fcd0a_3:;
/* 1803fcd0d: movsxd r14, ecx */
L_1803fcd0d_0:;
L_1803fcd0d_1:;
wr(s->r,176,8,(U)sx(rd(s->r,8,4),4));
L_1803fcd0d_2:;
/* 1803fcd10: mov r13d, ebx */
L_1803fcd10_0:;
L_1803fcd10_1:;
wr(s->r,168,4,rd(s->r,24,4));
L_1803fcd10_2:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fcd10_3:;
/* 1803fcd13: and r13d, 7 */
L_1803fcd13_0:;
L_1803fcd13_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcd13_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcd13_3:;
wr(s->r,168,4,(rd(s->r,168,4)&((U)UINT64_C(0x7))));
L_1803fcd13_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fcd13_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcd13_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fcd13_7:;
wr(s->u,2,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fcd13_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fcd13_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fcd13_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fcd13_11:;
/* 1803fcd17: sub ebx, r13d */
L_1803fcd17_0:;
L_1803fcd17_1:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->r,168,4)));
L_1803fcd17_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->r,168,4),4,1));
L_1803fcd17_3:;
wr(s->r,24,4,(rd(s->r,24,4)-rd(s->r,168,4)));
L_1803fcd17_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fcd17_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcd17_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803fcd17_7:;
wr(s->u,2,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803fcd17_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fcd17_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fcd17_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fcd17_11:;
/* 1803fcd1a: xor eax, eax */
L_1803fcd1a_0:;
L_1803fcd1a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcd1a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcd1a_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fcd1a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fcd1a_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcd1a_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fcd1a_7:;
wr(s->u,2,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fcd1a_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fcd1a_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fcd1a_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fcd1a_11:;
/* 1803fcd1c: xor edx, edx */
L_1803fcd1c_0:;
L_1803fcd1c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcd1c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcd1c_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803fcd1c_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fcd1c_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcd1c_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fcd1c_7:;
wr(s->u,2,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fcd1c_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fcd1c_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fcd1c_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fcd1c_11:;
/* 1803fcd1e: cmp ebx, 0x800 */
L_1803fcd1e_0:;
L_1803fcd1e_1:;
wr(s->u,8,4,rd(s->r,24,4));
L_1803fcd1e_2:;
wr(s->r,512,1,(rd(s->u,8,4)<((U)UINT64_C(0x800))));
L_1803fcd1e_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),((U)UINT64_C(0x800)),4,1));
L_1803fcd1e_4:;
wr(s->u,12,4,(rd(s->u,8,4)-((U)UINT64_C(0x800))));
L_1803fcd1e_5:;
wr(s->r,519,1,(sx(rd(s->u,12,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcd1e_6:;
wr(s->r,518,1,(rd(s->u,12,4)==((U)UINT64_C(0x0))));
L_1803fcd1e_7:;
wr(s->u,2,4,(rd(s->u,12,4)&((U)UINT64_C(0xff))));
L_1803fcd1e_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fcd1e_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fcd1e_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fcd1e_11:;
/* 1803fcd24: jle 0x1803fcdea */
L_1803fcd24_0:;
L_1803fcd24_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fcd24_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fcd24_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fcdea);}
L_1803fcd24_4:;
return UINT64_C(0x1803fcd2a);
}
uint64_t b_1803fcd2a(CPU*s){
/* 1803fcd2a: mov dword ptr [rsp + 0x20], r13d */
L_1803fcd2a_0:;
L_1803fcd2a_1:;
wr(s->u,29,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fcd2a_2:;
wr(s->u,77,4,rd(s->r,168,4));
L_1803fcd2a_3:;
mw((uint64_t)rd(s->u,29,8),4,rd(s->u,77,4));
L_1803fcd2a_4:;
/* 1803fcd2f: mov qword ptr [rsp + 0x28], rsi */
L_1803fcd2f_0:;
L_1803fcd2f_1:;
wr(s->u,29,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fcd2f_2:;
wr(s->u,81,8,rd(s->r,48,8));
L_1803fcd2f_3:;
mw((uint64_t)rd(s->u,29,8),8,rd(s->u,81,8));
L_1803fcd2f_4:;
/* 1803fcd34: mov qword ptr [rsp + 0x30], rdi */
L_1803fcd34_0:;
L_1803fcd34_1:;
wr(s->u,29,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fcd34_2:;
wr(s->u,81,8,rd(s->r,56,8));
L_1803fcd34_3:;
mw((uint64_t)rd(s->u,29,8),8,rd(s->u,81,8));
L_1803fcd34_4:;
/* 1803fcd39: mov edi, ebp */
L_1803fcd39_0:;
L_1803fcd39_1:;
wr(s->r,56,4,rd(s->r,40,4));
L_1803fcd39_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fcd39_3:;
/* 1803fcd3b: mov qword ptr [rsp + 0x38], r12 */
L_1803fcd3b_0:;
L_1803fcd3b_1:;
wr(s->u,29,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803fcd3b_2:;
wr(s->u,81,8,rd(s->r,160,8));
L_1803fcd3b_3:;
mw((uint64_t)rd(s->u,29,8),8,rd(s->u,81,8));
L_1803fcd3b_4:;
/* 1803fcd40: lea rcx, [rsi + r14*4] */
L_1803fcd40_0:;
L_1803fcd40_1:;
wr(s->u,13,8,(rd(s->r,176,8)*((U)UINT64_C(0x4))));
L_1803fcd40_2:;
wr(s->u,21,8,(rd(s->r,48,8)+rd(s->u,13,8)));
L_1803fcd40_3:;
wr(s->r,8,8,rd(s->u,21,8));
L_1803fcd40_4:;
/* 1803fcd44: lea r8d, [rbx - 1] */
L_1803fcd44_0:;
L_1803fcd44_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803fcd44_2:;
wr(s->r,128,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fcd44_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fcd44_4:;
/* 1803fcd48: sar r8d, 0xa */
L_1803fcd48_0:;
L_1803fcd48_1:;
wr(s->u,139,4,(((U)UINT64_C(0xa))&((U)UINT64_C(0x1f))));
L_1803fcd48_2:;
wr(s->u,143,4,rd(s->r,128,4));
L_1803fcd48_3:;
wr(s->r,128,4,((rd(s->u,139,4)>=32)?(sx(rd(s->r,128,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,128,4),4)>>rd(s->u,139,4))));
L_1803fcd48_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fcd48_5:;
wr(s->u,108,1,(rd(s->u,139,4)==((U)UINT64_C(0x0))));
L_1803fcd48_6:;
wr(s->u,109,4,(rd(s->u,139,4)-((U)UINT64_C(0x1))));
L_1803fcd48_7:;
wr(s->u,113,4,((rd(s->u,109,4)>=32)?(sx(rd(s->u,143,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,143,4),4)>>rd(s->u,109,4))));
L_1803fcd48_8:;
wr(s->u,117,4,(rd(s->u,113,4)&((U)UINT64_C(0x1))));
L_1803fcd48_9:;
wr(s->u,121,1,(rd(s->u,117,4)!=((U)UINT64_C(0x0))));
L_1803fcd48_10:;
wr(s->u,0,1,rd(s->u,108,1));
L_1803fcd48_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fcd48_12:;
wr(s->u,2,1,(!rd(s->u,108,1)));
L_1803fcd48_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fcd48_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,121,1)));
L_1803fcd48_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fcd48_16:;
wr(s->u,122,1,(rd(s->u,139,4)==((U)UINT64_C(0x1))));
L_1803fcd48_17:;
wr(s->u,0,1,rd(s->u,122,1));
L_1803fcd48_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fcd48_19:;
wr(s->u,2,1,(!rd(s->u,122,1)));
L_1803fcd48_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fcd48_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fcd48_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fcd48_23:;
wr(s->u,89,1,(rd(s->u,139,4)!=((U)UINT64_C(0x0))));
L_1803fcd48_24:;
wr(s->u,90,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcd48_25:;
wr(s->u,91,1,(!rd(s->u,89,1)));
L_1803fcd48_26:;
wr(s->u,92,1,(rd(s->u,91,1)&rd(s->r,519,1)));
L_1803fcd48_27:;
wr(s->u,93,1,(rd(s->u,89,1)&rd(s->u,90,1)));
L_1803fcd48_28:;
wr(s->r,519,1,(rd(s->u,92,1)|rd(s->u,93,1)));
L_1803fcd48_29:;
wr(s->u,94,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fcd48_30:;
wr(s->u,95,1,(!rd(s->u,89,1)));
L_1803fcd48_31:;
wr(s->u,96,1,(rd(s->u,95,1)&rd(s->r,518,1)));
L_1803fcd48_32:;
wr(s->u,97,1,(rd(s->u,89,1)&rd(s->u,94,1)));
L_1803fcd48_33:;
wr(s->r,518,1,(rd(s->u,96,1)|rd(s->u,97,1)));
L_1803fcd48_34:;
wr(s->u,98,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fcd48_35:;
wr(s->u,102,1,pop(rd(s->u,98,4),4));
L_1803fcd48_36:;
wr(s->u,103,1,(rd(s->u,102,1)&((U)UINT64_C(0x1))));
L_1803fcd48_37:;
wr(s->u,104,1,(rd(s->u,103,1)==((U)UINT64_C(0x0))));
L_1803fcd48_38:;
wr(s->u,105,1,(!rd(s->u,89,1)));
L_1803fcd48_39:;
wr(s->u,106,1,(rd(s->u,105,1)&rd(s->r,514,1)));
L_1803fcd48_40:;
wr(s->u,107,1,(rd(s->u,89,1)&rd(s->u,104,1)));
L_1803fcd48_41:;
wr(s->r,514,1,(rd(s->u,106,1)|rd(s->u,107,1)));
L_1803fcd48_42:;
/* 1803fcd4c: shr r8d, 0x15 */
L_1803fcd4c_0:;
L_1803fcd4c_1:;
wr(s->u,147,4,(((U)UINT64_C(0x15))&((U)UINT64_C(0x1f))));
L_1803fcd4c_2:;
wr(s->u,151,4,rd(s->r,128,4));
L_1803fcd4c_3:;
wr(s->r,128,4,((rd(s->u,147,4)>=32)?0:(rd(s->r,128,4)>>rd(s->u,147,4))));
L_1803fcd4c_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fcd4c_5:;
wr(s->u,123,1,(rd(s->u,147,4)==((U)UINT64_C(0x0))));
L_1803fcd4c_6:;
wr(s->u,124,4,(rd(s->u,147,4)-((U)UINT64_C(0x1))));
L_1803fcd4c_7:;
wr(s->u,128,4,((rd(s->u,124,4)>=32)?0:(rd(s->u,151,4)>>rd(s->u,124,4))));
L_1803fcd4c_8:;
wr(s->u,132,4,(rd(s->u,128,4)&((U)UINT64_C(0x1))));
L_1803fcd4c_9:;
wr(s->u,136,1,(rd(s->u,132,4)!=((U)UINT64_C(0x0))));
L_1803fcd4c_10:;
wr(s->u,0,1,rd(s->u,123,1));
L_1803fcd4c_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fcd4c_12:;
wr(s->u,2,1,(!rd(s->u,123,1)));
L_1803fcd4c_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fcd4c_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,136,1)));
L_1803fcd4c_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fcd4c_16:;
wr(s->u,137,1,(rd(s->u,147,4)==((U)UINT64_C(0x1))));
L_1803fcd4c_17:;
wr(s->u,138,1,(sx(rd(s->u,151,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcd4c_18:;
wr(s->u,0,1,rd(s->u,137,1));
L_1803fcd4c_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fcd4c_20:;
wr(s->u,2,1,(!rd(s->u,137,1)));
L_1803fcd4c_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fcd4c_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,138,1)));
L_1803fcd4c_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fcd4c_24:;
wr(s->u,89,1,(rd(s->u,147,4)!=((U)UINT64_C(0x0))));
L_1803fcd4c_25:;
wr(s->u,90,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcd4c_26:;
wr(s->u,91,1,(!rd(s->u,89,1)));
L_1803fcd4c_27:;
wr(s->u,92,1,(rd(s->u,91,1)&rd(s->r,519,1)));
L_1803fcd4c_28:;
wr(s->u,93,1,(rd(s->u,89,1)&rd(s->u,90,1)));
L_1803fcd4c_29:;
wr(s->r,519,1,(rd(s->u,92,1)|rd(s->u,93,1)));
L_1803fcd4c_30:;
wr(s->u,94,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fcd4c_31:;
wr(s->u,95,1,(!rd(s->u,89,1)));
L_1803fcd4c_32:;
wr(s->u,96,1,(rd(s->u,95,1)&rd(s->r,518,1)));
L_1803fcd4c_33:;
wr(s->u,97,1,(rd(s->u,89,1)&rd(s->u,94,1)));
L_1803fcd4c_34:;
wr(s->r,518,1,(rd(s->u,96,1)|rd(s->u,97,1)));
L_1803fcd4c_35:;
wr(s->u,98,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fcd4c_36:;
wr(s->u,102,1,pop(rd(s->u,98,4),4));
L_1803fcd4c_37:;
wr(s->u,103,1,(rd(s->u,102,1)&((U)UINT64_C(0x1))));
L_1803fcd4c_38:;
wr(s->u,104,1,(rd(s->u,103,1)==((U)UINT64_C(0x0))));
L_1803fcd4c_39:;
wr(s->u,105,1,(!rd(s->u,89,1)));
L_1803fcd4c_40:;
wr(s->u,106,1,(rd(s->u,105,1)&rd(s->r,514,1)));
L_1803fcd4c_41:;
wr(s->u,107,1,(rd(s->u,89,1)&rd(s->u,104,1)));
L_1803fcd4c_42:;
wr(s->r,514,1,(rd(s->u,106,1)|rd(s->u,107,1)));
L_1803fcd4c_43:;
/* 1803fcd50: lea r15d, [r8 + rbx - 1] */
L_1803fcd50_0:;
L_1803fcd50_1:;
wr(s->u,37,8,(((U)UINT64_C(0xffffffffffffffff))+rd(s->r,128,8)));
L_1803fcd50_2:;
wr(s->u,45,8,(rd(s->r,24,8)*((U)UINT64_C(0x1))));
L_1803fcd50_3:;
wr(s->u,53,8,(rd(s->u,37,8)+rd(s->u,45,8)));
L_1803fcd50_4:;
wr(s->r,184,4,(rd(s->u,53,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fcd50_5:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803fcd50_6:;
/* 1803fcd55: sar r15d, 0xb */
L_1803fcd55_0:;
L_1803fcd55_1:;
wr(s->u,139,4,(((U)UINT64_C(0xb))&((U)UINT64_C(0x1f))));
L_1803fcd55_2:;
wr(s->u,143,4,rd(s->r,184,4));
L_1803fcd55_3:;
wr(s->r,184,4,((rd(s->u,139,4)>=32)?(sx(rd(s->r,184,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,184,4),4)>>rd(s->u,139,4))));
L_1803fcd55_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803fcd55_5:;
wr(s->u,108,1,(rd(s->u,139,4)==((U)UINT64_C(0x0))));
L_1803fcd55_6:;
wr(s->u,109,4,(rd(s->u,139,4)-((U)UINT64_C(0x1))));
L_1803fcd55_7:;
wr(s->u,113,4,((rd(s->u,109,4)>=32)?(sx(rd(s->u,143,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,143,4),4)>>rd(s->u,109,4))));
L_1803fcd55_8:;
wr(s->u,117,4,(rd(s->u,113,4)&((U)UINT64_C(0x1))));
L_1803fcd55_9:;
wr(s->u,121,1,(rd(s->u,117,4)!=((U)UINT64_C(0x0))));
L_1803fcd55_10:;
wr(s->u,0,1,rd(s->u,108,1));
L_1803fcd55_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fcd55_12:;
wr(s->u,2,1,(!rd(s->u,108,1)));
L_1803fcd55_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fcd55_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,121,1)));
L_1803fcd55_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fcd55_16:;
wr(s->u,122,1,(rd(s->u,139,4)==((U)UINT64_C(0x1))));
L_1803fcd55_17:;
wr(s->u,0,1,rd(s->u,122,1));
L_1803fcd55_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fcd55_19:;
wr(s->u,2,1,(!rd(s->u,122,1)));
L_1803fcd55_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fcd55_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fcd55_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fcd55_23:;
wr(s->u,89,1,(rd(s->u,139,4)!=((U)UINT64_C(0x0))));
L_1803fcd55_24:;
wr(s->u,90,1,(sx(rd(s->r,184,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcd55_25:;
wr(s->u,91,1,(!rd(s->u,89,1)));
L_1803fcd55_26:;
wr(s->u,92,1,(rd(s->u,91,1)&rd(s->r,519,1)));
L_1803fcd55_27:;
wr(s->u,93,1,(rd(s->u,89,1)&rd(s->u,90,1)));
L_1803fcd55_28:;
wr(s->r,519,1,(rd(s->u,92,1)|rd(s->u,93,1)));
L_1803fcd55_29:;
wr(s->u,94,1,(rd(s->r,184,4)==((U)UINT64_C(0x0))));
L_1803fcd55_30:;
wr(s->u,95,1,(!rd(s->u,89,1)));
L_1803fcd55_31:;
wr(s->u,96,1,(rd(s->u,95,1)&rd(s->r,518,1)));
L_1803fcd55_32:;
wr(s->u,97,1,(rd(s->u,89,1)&rd(s->u,94,1)));
L_1803fcd55_33:;
wr(s->r,518,1,(rd(s->u,96,1)|rd(s->u,97,1)));
L_1803fcd55_34:;
wr(s->u,98,4,(rd(s->r,184,4)&((U)UINT64_C(0xff))));
L_1803fcd55_35:;
wr(s->u,102,1,pop(rd(s->u,98,4),4));
L_1803fcd55_36:;
wr(s->u,103,1,(rd(s->u,102,1)&((U)UINT64_C(0x1))));
L_1803fcd55_37:;
wr(s->u,104,1,(rd(s->u,103,1)==((U)UINT64_C(0x0))));
L_1803fcd55_38:;
wr(s->u,105,1,(!rd(s->u,89,1)));
L_1803fcd55_39:;
wr(s->u,106,1,(rd(s->u,105,1)&rd(s->r,514,1)));
L_1803fcd55_40:;
wr(s->u,107,1,(rd(s->u,89,1)&rd(s->u,104,1)));
L_1803fcd55_41:;
wr(s->r,514,1,(rd(s->u,106,1)|rd(s->u,107,1)));
L_1803fcd55_42:;
/* 1803fcd59: mov ebp, ebx */
L_1803fcd59_0:;
L_1803fcd59_1:;
wr(s->r,40,4,rd(s->r,24,4));
L_1803fcd59_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fcd59_3:;
/* 1803fcd5b: mov ebx, eax */
L_1803fcd5b_0:;
L_1803fcd5b_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803fcd5b_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fcd5b_3:;
/* 1803fcd5d: mov r12d, edx */
L_1803fcd5d_0:;
L_1803fcd5d_1:;
wr(s->r,160,4,rd(s->r,16,4));
L_1803fcd5d_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fcd5d_3:;
/* 1803fcd60: mov r13, rcx */
L_1803fcd60_0:;
L_1803fcd60_1:;
wr(s->r,168,8,rd(s->r,8,8));
L_1803fcd60_2:;
/* 1803fcd63: lea r8, [rsp + 0x44] */
L_1803fcd63_0:;
L_1803fcd63_1:;
wr(s->u,29,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1803fcd63_2:;
wr(s->r,128,8,rd(s->u,29,8));
L_1803fcd63_3:;
/* 1803fcd68: movsxd rsi, r12d */
L_1803fcd68_0:;
L_1803fcd68_1:;
wr(s->r,48,8,(U)sx(rd(s->r,160,4),4));
L_1803fcd68_2:;
/* 1803fcd6b: lea rsi, [r13 + rsi*4] */
L_1803fcd6b_0:;
L_1803fcd6b_1:;
wr(s->u,61,8,(rd(s->r,48,8)*((U)UINT64_C(0x4))));
L_1803fcd6b_2:;
wr(s->u,69,8,(rd(s->r,168,8)+rd(s->u,61,8)));
L_1803fcd6b_3:;
wr(s->r,48,8,rd(s->u,69,8));
L_1803fcd6b_4:;
/* 1803fcd70: mov rcx, rsi */
L_1803fcd70_0:;
L_1803fcd70_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1803fcd70_2:;
/* 1803fcd73: mov edx, 0x800 */
L_1803fcd73_0:;
L_1803fcd73_1:;
wr(s->r,16,8,((U)UINT64_C(0x800)));
L_1803fcd73_2:;
/* 1803fcd78: call 0x18042e3b0 */
L_1803fcd78_0:;
L_1803fcd78_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fcd78_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fcd7d)));
L_1803fcd78_3:;
return (uint64_t)UINT64_C(0x18042e3b0);
L_1803fcd78_4:;
return UINT64_C(0x1803fcd7d);
}
uint64_t b_1803fcd63(CPU*s){
/* 1803fcd63: lea r8, [rsp + 0x44] */
L_1803fcd63_0:;
L_1803fcd63_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1803fcd63_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1803fcd63_3:;
/* 1803fcd68: movsxd rsi, r12d */
L_1803fcd68_0:;
L_1803fcd68_1:;
wr(s->r,48,8,(U)sx(rd(s->r,160,4),4));
L_1803fcd68_2:;
/* 1803fcd6b: lea rsi, [r13 + rsi*4] */
L_1803fcd6b_0:;
L_1803fcd6b_1:;
wr(s->u,8,8,(rd(s->r,48,8)*((U)UINT64_C(0x4))));
L_1803fcd6b_2:;
wr(s->u,16,8,(rd(s->r,168,8)+rd(s->u,8,8)));
L_1803fcd6b_3:;
wr(s->r,48,8,rd(s->u,16,8));
L_1803fcd6b_4:;
/* 1803fcd70: mov rcx, rsi */
L_1803fcd70_0:;
L_1803fcd70_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1803fcd70_2:;
/* 1803fcd73: mov edx, 0x800 */
L_1803fcd73_0:;
L_1803fcd73_1:;
wr(s->r,16,8,((U)UINT64_C(0x800)));
L_1803fcd73_2:;
/* 1803fcd78: call 0x18042e3b0 */
L_1803fcd78_0:;
L_1803fcd78_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fcd78_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fcd7d)));
L_1803fcd78_3:;
return (uint64_t)UINT64_C(0x18042e3b0);
L_1803fcd78_4:;
return UINT64_C(0x1803fcd7d);
}
uint64_t b_1803fcd7d(CPU*s){
/* 1803fcd7d: movss xmm0, dword ptr [rsp + 0x44] */
L_1803fcd7d_0:;
L_1803fcd7d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1803fcd7d_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fcd7d_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803fcd7d_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fcd7d_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fcd7d_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fcd7d_7:;
/* 1803fcd83: comiss xmm0, dword ptr [rsp + 0x40] */
L_1803fcd83_0:;
L_1803fcd83_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803fcd83_2:;
wr(s->u,17,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803fcd83_3:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fcd83_4:;
wr(s->u,18,1,isnan(fv(rd(s->u,8,4),4)));
L_1803fcd83_5:;
wr(s->r,514,1,((rd(s->u,17,1)!=0)||(rd(s->u,18,1)!=0)));
L_1803fcd83_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fcd83_7:;
wr(s->u,19,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->u,8,4),4)));
L_1803fcd83_8:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,19,1)));
L_1803fcd83_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fcd83_10:;
wr(s->u,20,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->u,8,4),4)));
L_1803fcd83_11:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,20,1)));
L_1803fcd83_12:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcd83_13:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fcd83_14:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fcd83_15:;
/* 1803fcd88: mov r8d, dword ptr [rsp + 0x44] */
L_1803fcd88_0:;
L_1803fcd88_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1803fcd88_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fcd88_3:;
wr(s->r,128,4,rd(s->u,12,4));
L_1803fcd88_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fcd88_5:;
/* 1803fcd8d: jbe 0x1803fcda9 */
L_1803fcd8d_0:;
L_1803fcd8d_1:;
wr(s->u,16,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fcd8d_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803fcda9);}
L_1803fcd8d_3:;
return UINT64_C(0x1803fcd8f);
}
uint64_t b_1803fcd8f(CPU*s){
/* 1803fcd8f: mov dword ptr [rsp + 0x40], r8d */
L_1803fcd8f_0:;
L_1803fcd8f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803fcd8f_2:;
wr(s->u,8,4,rd(s->r,128,4));
L_1803fcd8f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fcd8f_4:;
/* 1803fcd94: lea rdx, [rsp + 0x40] */
L_1803fcd94_0:;
L_1803fcd94_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803fcd94_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1803fcd94_3:;
/* 1803fcd99: mov rcx, rsi */
L_1803fcd99_0:;
L_1803fcd99_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1803fcd99_2:;
/* 1803fcd9c: call 0x18042e430 */
L_1803fcd9c_0:;
L_1803fcd9c_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fcd9c_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fcda1)));
L_1803fcd9c_3:;
return (uint64_t)UINT64_C(0x18042e430);
L_1803fcd9c_4:;
return UINT64_C(0x1803fcda1);
}
uint64_t b_1803fcda1(CPU*s){
/* 1803fcda1: mov edi, eax */
L_1803fcda1_0:;
L_1803fcda1_1:;
wr(s->r,56,4,rd(s->r,0,4));
L_1803fcda1_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fcda1_3:;
/* 1803fcda3: add edi, r14d */
L_1803fcda3_0:;
L_1803fcda3_1:;
wr(s->r,512,1,(((rd(s->r,56,4)+rd(s->r,176,4))&(((U)1<<32)-1))<rd(s->r,56,4)));
L_1803fcda3_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->r,176,4),4,0));
L_1803fcda3_3:;
wr(s->r,56,4,(rd(s->r,56,4)+rd(s->r,176,4)));
L_1803fcda3_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fcda3_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcda3_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803fcda3_7:;
wr(s->u,0,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803fcda3_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fcda3_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fcda3_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fcda3_11:;
/* 1803fcda6: add edi, r12d */
L_1803fcda6_0:;
L_1803fcda6_1:;
wr(s->r,512,1,(((rd(s->r,56,4)+rd(s->r,160,4))&(((U)1<<32)-1))<rd(s->r,56,4)));
L_1803fcda6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->r,160,4),4,0));
L_1803fcda6_3:;
wr(s->r,56,4,(rd(s->r,56,4)+rd(s->r,160,4)));
L_1803fcda6_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fcda6_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcda6_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803fcda6_7:;
wr(s->u,0,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803fcda6_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fcda6_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fcda6_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fcda6_11:;
/* 1803fcda9: add r12d, 0x800 */
L_1803fcda9_0:;
L_1803fcda9_1:;
wr(s->r,512,1,(((rd(s->r,160,4)+((U)UINT64_C(0x800)))&(((U)1<<32)-1))<rd(s->r,160,4)));
L_1803fcda9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),((U)UINT64_C(0x800)),4,0));
L_1803fcda9_3:;
wr(s->r,160,4,(rd(s->r,160,4)+((U)UINT64_C(0x800))));
L_1803fcda9_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fcda9_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcda9_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fcda9_7:;
wr(s->u,0,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fcda9_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fcda9_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fcda9_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fcda9_11:;
/* 1803fcdb0: add ebx, 1 */
L_1803fcdb0_0:;
L_1803fcdb0_1:;
wr(s->r,512,1,(((rd(s->r,24,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,24,4)));
L_1803fcdb0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0x1)),4,0));
L_1803fcdb0_3:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0x1))));
L_1803fcdb0_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fcdb0_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcdb0_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803fcdb0_7:;
wr(s->u,0,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803fcdb0_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fcdb0_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fcdb0_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fcdb0_11:;
/* 1803fcdb3: cmp ebx, r15d */
L_1803fcdb3_0:;
L_1803fcdb3_1:;
wr(s->u,6,4,rd(s->r,184,4));
L_1803fcdb3_2:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,6,4)));
L_1803fcdb3_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,6,4),4,1));
L_1803fcdb3_4:;
wr(s->u,10,4,(rd(s->r,24,4)-rd(s->u,6,4)));
L_1803fcdb3_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcdb3_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fcdb3_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fcdb3_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fcdb3_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fcdb3_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fcdb3_11:;
/* 1803fcdb6: jb 0x1803fcd63 */
L_1803fcdb6_0:;
L_1803fcdb6_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fcd63);}
L_1803fcdb6_2:;
return UINT64_C(0x1803fcdb8);
}
uint64_t b_1803fcda9(CPU*s){
/* 1803fcda9: add r12d, 0x800 */
L_1803fcda9_0:;
L_1803fcda9_1:;
wr(s->r,512,1,(((rd(s->r,160,4)+((U)UINT64_C(0x800)))&(((U)1<<32)-1))<rd(s->r,160,4)));
L_1803fcda9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),((U)UINT64_C(0x800)),4,0));
L_1803fcda9_3:;
wr(s->r,160,4,(rd(s->r,160,4)+((U)UINT64_C(0x800))));
L_1803fcda9_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fcda9_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcda9_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803fcda9_7:;
wr(s->u,0,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803fcda9_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fcda9_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fcda9_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fcda9_11:;
/* 1803fcdb0: add ebx, 1 */
L_1803fcdb0_0:;
L_1803fcdb0_1:;
wr(s->r,512,1,(((rd(s->r,24,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,24,4)));
L_1803fcdb0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),((U)UINT64_C(0x1)),4,0));
L_1803fcdb0_3:;
wr(s->r,24,4,(rd(s->r,24,4)+((U)UINT64_C(0x1))));
L_1803fcdb0_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fcdb0_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcdb0_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803fcdb0_7:;
wr(s->u,0,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803fcdb0_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fcdb0_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fcdb0_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fcdb0_11:;
/* 1803fcdb3: cmp ebx, r15d */
L_1803fcdb3_0:;
L_1803fcdb3_1:;
wr(s->u,6,4,rd(s->r,184,4));
L_1803fcdb3_2:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,6,4)));
L_1803fcdb3_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,6,4),4,1));
L_1803fcdb3_4:;
wr(s->u,10,4,(rd(s->r,24,4)-rd(s->u,6,4)));
L_1803fcdb3_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcdb3_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fcdb3_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fcdb3_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fcdb3_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fcdb3_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fcdb3_11:;
/* 1803fcdb6: jb 0x1803fcd63 */
L_1803fcdb6_0:;
L_1803fcdb6_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fcd63);}
L_1803fcdb6_2:;
return UINT64_C(0x1803fcdb8);
}
uint64_t b_1803fcdb8(CPU*s){
/* 1803fcdb8: mov r13d, dword ptr [rsp + 0x20] */
L_1803fcdb8_0:;
L_1803fcdb8_1:;
wr(s->u,21,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fcdb8_2:;
wr(s->u,37,4,mr((uint64_t)rd(s->u,21,8),4));
L_1803fcdb8_3:;
wr(s->r,168,4,rd(s->u,37,4));
L_1803fcdb8_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fcdb8_5:;
/* 1803fcdbd: mov rsi, qword ptr [rsp + 0x28] */
L_1803fcdbd_0:;
L_1803fcdbd_1:;
wr(s->u,21,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803fcdbd_2:;
wr(s->u,41,8,mr((uint64_t)rd(s->u,21,8),8));
L_1803fcdbd_3:;
wr(s->r,48,8,rd(s->u,41,8));
L_1803fcdbd_4:;
/* 1803fcdc2: mov r12, qword ptr [rsp + 0x38] */
L_1803fcdc2_0:;
L_1803fcdc2_1:;
wr(s->u,21,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803fcdc2_2:;
wr(s->u,41,8,mr((uint64_t)rd(s->u,21,8),8));
L_1803fcdc2_3:;
wr(s->r,160,8,rd(s->u,41,8));
L_1803fcdc2_4:;
/* 1803fcdc7: mov eax, ebx */
L_1803fcdc7_0:;
L_1803fcdc7_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803fcdc7_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fcdc7_3:;
/* 1803fcdc9: mov ebx, ebp */
L_1803fcdc9_0:;
L_1803fcdc9_1:;
wr(s->r,24,4,rd(s->r,40,4));
L_1803fcdc9_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fcdc9_3:;
/* 1803fcdcb: mov ebp, edi */
L_1803fcdcb_0:;
L_1803fcdcb_1:;
wr(s->r,40,4,rd(s->r,56,4));
L_1803fcdcb_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fcdcb_3:;
/* 1803fcdcd: mov rdi, qword ptr [rsp + 0x30] */
L_1803fcdcd_0:;
L_1803fcdcd_1:;
wr(s->u,21,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fcdcd_2:;
wr(s->u,41,8,mr((uint64_t)rd(s->u,21,8),8));
L_1803fcdcd_3:;
wr(s->r,56,8,rd(s->u,41,8));
L_1803fcdcd_4:;
/* 1803fcdd2: mov edx, eax */
L_1803fcdd2_0:;
L_1803fcdd2_1:;
wr(s->r,16,4,rd(s->r,0,4));
L_1803fcdd2_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fcdd2_3:;
/* 1803fcdd4: shl edx, 0xb */
L_1803fcdd4_0:;
L_1803fcdd4_1:;
wr(s->u,87,4,(((U)UINT64_C(0xb))&((U)UINT64_C(0x1f))));
L_1803fcdd4_2:;
wr(s->u,91,4,rd(s->r,16,4));
L_1803fcdd4_3:;
wr(s->r,16,4,((rd(s->u,87,4)>=32)?0:(rd(s->r,16,4)<<rd(s->u,87,4))));
L_1803fcdd4_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fcdd4_5:;
wr(s->u,74,1,(rd(s->u,87,4)==((U)UINT64_C(0x0))));
L_1803fcdd4_6:;
wr(s->u,75,4,(rd(s->u,87,4)-((U)UINT64_C(0x1))));
L_1803fcdd4_7:;
wr(s->u,79,4,((rd(s->u,75,4)>=32)?0:(rd(s->u,91,4)<<rd(s->u,75,4))));
L_1803fcdd4_8:;
wr(s->u,83,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcdd4_9:;
wr(s->u,0,1,rd(s->u,74,1));
L_1803fcdd4_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fcdd4_11:;
wr(s->u,2,1,(!rd(s->u,74,1)));
L_1803fcdd4_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fcdd4_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,83,1)));
L_1803fcdd4_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fcdd4_15:;
wr(s->u,84,1,(rd(s->u,87,4)==((U)UINT64_C(0x1))));
L_1803fcdd4_16:;
wr(s->u,85,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcdd4_17:;
wr(s->u,86,1,(rd(s->r,512,1)^rd(s->u,85,1)));
L_1803fcdd4_18:;
wr(s->u,0,1,rd(s->u,84,1));
L_1803fcdd4_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,86,1)));
L_1803fcdd4_20:;
wr(s->u,2,1,(!rd(s->u,84,1)));
L_1803fcdd4_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fcdd4_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fcdd4_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fcdd4_24:;
wr(s->u,55,1,(rd(s->u,87,4)!=((U)UINT64_C(0x0))));
L_1803fcdd4_25:;
wr(s->u,56,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcdd4_26:;
wr(s->u,57,1,(!rd(s->u,55,1)));
L_1803fcdd4_27:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,519,1)));
L_1803fcdd4_28:;
wr(s->u,59,1,(rd(s->u,55,1)&rd(s->u,56,1)));
L_1803fcdd4_29:;
wr(s->r,519,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803fcdd4_30:;
wr(s->u,60,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fcdd4_31:;
wr(s->u,61,1,(!rd(s->u,55,1)));
L_1803fcdd4_32:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,518,1)));
L_1803fcdd4_33:;
wr(s->u,63,1,(rd(s->u,55,1)&rd(s->u,60,1)));
L_1803fcdd4_34:;
wr(s->r,518,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803fcdd4_35:;
wr(s->u,64,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fcdd4_36:;
wr(s->u,68,1,pop(rd(s->u,64,4),4));
L_1803fcdd4_37:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803fcdd4_38:;
wr(s->u,70,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803fcdd4_39:;
wr(s->u,71,1,(!rd(s->u,55,1)));
L_1803fcdd4_40:;
wr(s->u,72,1,(rd(s->u,71,1)&rd(s->r,514,1)));
L_1803fcdd4_41:;
wr(s->u,73,1,(rd(s->u,55,1)&rd(s->u,70,1)));
L_1803fcdd4_42:;
wr(s->r,514,1,(rd(s->u,72,1)|rd(s->u,73,1)));
L_1803fcdd4_43:;
/* 1803fcdd7: neg edx */
L_1803fcdd7_0:;
L_1803fcdd7_1:;
wr(s->r,512,1,(rd(s->r,16,4)!=((U)UINT64_C(0x0))));
L_1803fcdd7_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,16,4),4,1));
L_1803fcdd7_3:;
wr(s->r,16,4,(-rd(s->r,16,4)));
L_1803fcdd7_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcdd7_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803fcdd7_6:;
wr(s->u,49,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803fcdd7_7:;
wr(s->u,53,1,pop(rd(s->u,49,4),4));
L_1803fcdd7_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803fcdd7_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803fcdd7_10:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fcdd7_11:;
/* 1803fcdd9: add ebx, edx */
L_1803fcdd9_0:;
L_1803fcdd9_1:;
wr(s->r,512,1,(((rd(s->r,24,4)+rd(s->r,16,4))&(((U)1<<32)-1))<rd(s->r,24,4)));
L_1803fcdd9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->r,16,4),4,0));
L_1803fcdd9_3:;
wr(s->r,24,4,(rd(s->r,24,4)+rd(s->r,16,4)));
L_1803fcdd9_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fcdd9_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcdd9_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803fcdd9_7:;
wr(s->u,49,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803fcdd9_8:;
wr(s->u,53,1,pop(rd(s->u,49,4),4));
L_1803fcdd9_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803fcdd9_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803fcdd9_11:;
/* 1803fcddb: shl eax, 0xb */
L_1803fcddb_0:;
L_1803fcddb_1:;
wr(s->u,87,4,(((U)UINT64_C(0xb))&((U)UINT64_C(0x1f))));
L_1803fcddb_2:;
wr(s->u,91,4,rd(s->r,0,4));
L_1803fcddb_3:;
wr(s->r,0,4,((rd(s->u,87,4)>=32)?0:(rd(s->r,0,4)<<rd(s->u,87,4))));
L_1803fcddb_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fcddb_5:;
wr(s->u,74,1,(rd(s->u,87,4)==((U)UINT64_C(0x0))));
L_1803fcddb_6:;
wr(s->u,75,4,(rd(s->u,87,4)-((U)UINT64_C(0x1))));
L_1803fcddb_7:;
wr(s->u,79,4,((rd(s->u,75,4)>=32)?0:(rd(s->u,91,4)<<rd(s->u,75,4))));
L_1803fcddb_8:;
wr(s->u,83,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcddb_9:;
wr(s->u,0,1,rd(s->u,74,1));
L_1803fcddb_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fcddb_11:;
wr(s->u,2,1,(!rd(s->u,74,1)));
L_1803fcddb_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fcddb_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,83,1)));
L_1803fcddb_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fcddb_15:;
wr(s->u,84,1,(rd(s->u,87,4)==((U)UINT64_C(0x1))));
L_1803fcddb_16:;
wr(s->u,85,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcddb_17:;
wr(s->u,86,1,(rd(s->r,512,1)^rd(s->u,85,1)));
L_1803fcddb_18:;
wr(s->u,0,1,rd(s->u,84,1));
L_1803fcddb_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,86,1)));
L_1803fcddb_20:;
wr(s->u,2,1,(!rd(s->u,84,1)));
L_1803fcddb_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fcddb_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fcddb_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fcddb_24:;
wr(s->u,55,1,(rd(s->u,87,4)!=((U)UINT64_C(0x0))));
L_1803fcddb_25:;
wr(s->u,56,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcddb_26:;
wr(s->u,57,1,(!rd(s->u,55,1)));
L_1803fcddb_27:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,519,1)));
L_1803fcddb_28:;
wr(s->u,59,1,(rd(s->u,55,1)&rd(s->u,56,1)));
L_1803fcddb_29:;
wr(s->r,519,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803fcddb_30:;
wr(s->u,60,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fcddb_31:;
wr(s->u,61,1,(!rd(s->u,55,1)));
L_1803fcddb_32:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,518,1)));
L_1803fcddb_33:;
wr(s->u,63,1,(rd(s->u,55,1)&rd(s->u,60,1)));
L_1803fcddb_34:;
wr(s->r,518,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803fcddb_35:;
wr(s->u,64,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fcddb_36:;
wr(s->u,68,1,pop(rd(s->u,64,4),4));
L_1803fcddb_37:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803fcddb_38:;
wr(s->u,70,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803fcddb_39:;
wr(s->u,71,1,(!rd(s->u,55,1)));
L_1803fcddb_40:;
wr(s->u,72,1,(rd(s->u,71,1)&rd(s->r,514,1)));
L_1803fcddb_41:;
wr(s->u,73,1,(rd(s->u,55,1)&rd(s->u,70,1)));
L_1803fcddb_42:;
wr(s->r,514,1,(rd(s->u,72,1)|rd(s->u,73,1)));
L_1803fcddb_43:;
/* 1803fcdde: add eax, r14d */
L_1803fcdde_0:;
L_1803fcdde_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,176,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803fcdde_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,176,4),4,0));
L_1803fcdde_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,176,4)));
L_1803fcdde_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fcdde_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcdde_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fcdde_7:;
wr(s->u,49,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fcdde_8:;
wr(s->u,53,1,pop(rd(s->u,49,4),4));
L_1803fcdde_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803fcdde_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803fcdde_11:;
/* 1803fcde1: movsxd rcx, eax */
L_1803fcde1_0:;
L_1803fcde1_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803fcde1_2:;
/* 1803fcde4: mov r15d, ecx */
L_1803fcde4_0:;
L_1803fcde4_1:;
wr(s->r,184,4,rd(s->r,8,4));
L_1803fcde4_2:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803fcde4_3:;
/* 1803fcde7: mov r14, rcx */
L_1803fcde7_0:;
L_1803fcde7_1:;
wr(s->r,176,8,rd(s->r,8,8));
L_1803fcde7_2:;
/* 1803fcdea: lea r8, [rsp + 0x44] */
L_1803fcdea_0:;
L_1803fcdea_1:;
wr(s->u,21,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1803fcdea_2:;
wr(s->r,128,8,rd(s->u,21,8));
L_1803fcdea_3:;
/* 1803fcdef: lea rcx, [rsi + rcx*4] */
L_1803fcdef_0:;
L_1803fcdef_1:;
wr(s->u,5,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803fcdef_2:;
wr(s->u,13,8,(rd(s->r,48,8)+rd(s->u,5,8)));
L_1803fcdef_3:;
wr(s->r,8,8,rd(s->u,13,8));
L_1803fcdef_4:;
/* 1803fcdf3: mov qword ptr [rsp + 0x20], rcx */
L_1803fcdf3_0:;
L_1803fcdf3_1:;
wr(s->u,21,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fcdf3_2:;
wr(s->u,29,8,rd(s->r,8,8));
L_1803fcdf3_3:;
mw((uint64_t)rd(s->u,21,8),8,rd(s->u,29,8));
L_1803fcdf3_4:;
/* 1803fcdf8: mov edx, ebx */
L_1803fcdf8_0:;
L_1803fcdf8_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1803fcdf8_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fcdf8_3:;
/* 1803fcdfa: call 0x18042e3b0 */
L_1803fcdfa_0:;
L_1803fcdfa_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fcdfa_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fcdff)));
L_1803fcdfa_3:;
return (uint64_t)UINT64_C(0x18042e3b0);
L_1803fcdfa_4:;
return UINT64_C(0x1803fcdff);
}
uint64_t b_1803fcdea(CPU*s){
/* 1803fcdea: lea r8, [rsp + 0x44] */
L_1803fcdea_0:;
L_1803fcdea_1:;
wr(s->u,16,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1803fcdea_2:;
wr(s->r,128,8,rd(s->u,16,8));
L_1803fcdea_3:;
/* 1803fcdef: lea rcx, [rsi + rcx*4] */
L_1803fcdef_0:;
L_1803fcdef_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803fcdef_2:;
wr(s->u,8,8,(rd(s->r,48,8)+rd(s->u,0,8)));
L_1803fcdef_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803fcdef_4:;
/* 1803fcdf3: mov qword ptr [rsp + 0x20], rcx */
L_1803fcdf3_0:;
L_1803fcdf3_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fcdf3_2:;
wr(s->u,24,8,rd(s->r,8,8));
L_1803fcdf3_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803fcdf3_4:;
/* 1803fcdf8: mov edx, ebx */
L_1803fcdf8_0:;
L_1803fcdf8_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1803fcdf8_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fcdf8_3:;
/* 1803fcdfa: call 0x18042e3b0 */
L_1803fcdfa_0:;
L_1803fcdfa_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fcdfa_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fcdff)));
L_1803fcdfa_3:;
return (uint64_t)UINT64_C(0x18042e3b0);
L_1803fcdfa_4:;
return UINT64_C(0x1803fcdff);
}
uint64_t b_1803fcdff(CPU*s){
/* 1803fcdff: movss xmm1, dword ptr [rsp + 0x44] */
L_1803fcdff_0:;
L_1803fcdff_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1803fcdff_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fcdff_3:;
wr(s->r,4672,4,rd(s->u,8,4));
L_1803fcdff_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fcdff_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fcdff_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fcdff_7:;
/* 1803fce05: mov eax, dword ptr [rsp + 0x44] */
L_1803fce05_0:;
L_1803fce05_1:;
wr(s->u,0,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1803fce05_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fce05_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803fce05_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fce05_5:;
/* 1803fce09: movss xmm0, dword ptr [rsp + 0x40] */
L_1803fce09_0:;
L_1803fce09_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803fce09_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fce09_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803fce09_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fce09_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fce09_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fce09_7:;
/* 1803fce0f: comiss xmm1, xmm0 */
L_1803fce0f_0:;
L_1803fce0f_1:;
wr(s->u,17,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803fce0f_2:;
wr(s->u,18,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803fce0f_3:;
wr(s->r,514,1,((rd(s->u,17,1)!=0)||(rd(s->u,18,1)!=0)));
L_1803fce0f_4:;
wr(s->u,19,1,(fv(rd(s->r,4672,4),4)==fv(rd(s->r,4608,4),4)));
L_1803fce0f_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,19,1)));
L_1803fce0f_6:;
wr(s->u,20,1,(fv(rd(s->r,4672,4),4)<fv(rd(s->r,4608,4),4)));
L_1803fce0f_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,20,1)));
L_1803fce0f_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fce0f_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fce0f_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fce0f_11:;
/* 1803fce12: jbe 0x1803fce32 */
L_1803fce12_0:;
L_1803fce12_1:;
wr(s->u,16,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fce12_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803fce32);}
L_1803fce12_3:;
return UINT64_C(0x1803fce14);
}
uint64_t b_1803fce14(CPU*s){
/* 1803fce14: mov rcx, qword ptr [rsp + 0x20] */
L_1803fce14_0:;
L_1803fce14_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fce14_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fce14_3:;
wr(s->r,8,8,rd(s->u,12,8));
L_1803fce14_4:;
/* 1803fce19: mov dword ptr [rsp + 0x40], eax */
L_1803fce19_0:;
L_1803fce19_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803fce19_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803fce19_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fce19_4:;
/* 1803fce1d: lea rdx, [rsp + 0x40] */
L_1803fce1d_0:;
L_1803fce1d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803fce1d_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1803fce1d_3:;
/* 1803fce22: call 0x18042e430 */
L_1803fce22_0:;
L_1803fce22_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fce22_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fce27)));
L_1803fce22_3:;
return (uint64_t)UINT64_C(0x18042e430);
L_1803fce22_4:;
return UINT64_C(0x1803fce27);
}
uint64_t b_1803fce27(CPU*s){
/* 1803fce27: mov ebp, eax */
L_1803fce27_0:;
L_1803fce27_1:;
wr(s->r,40,4,rd(s->r,0,4));
L_1803fce27_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fce27_3:;
/* 1803fce29: movss xmm0, dword ptr [rsp + 0x40] */
L_1803fce29_0:;
L_1803fce29_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803fce29_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fce29_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803fce29_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fce29_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fce29_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fce29_7:;
/* 1803fce2f: add ebp, r15d */
L_1803fce2f_0:;
L_1803fce2f_1:;
wr(s->r,512,1,(((rd(s->r,40,4)+rd(s->r,184,4))&(((U)1<<32)-1))<rd(s->r,40,4)));
L_1803fce2f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->r,184,4),4,0));
L_1803fce2f_3:;
wr(s->r,40,4,(rd(s->r,40,4)+rd(s->r,184,4)));
L_1803fce2f_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fce2f_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fce2f_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803fce2f_7:;
wr(s->u,12,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803fce2f_8:;
wr(s->u,20,1,pop(rd(s->u,12,4),4));
L_1803fce2f_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803fce2f_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803fce2f_11:;
/* 1803fce32: movsxd rax, ebx */
L_1803fce32_0:;
L_1803fce32_1:;
wr(s->r,0,8,(U)sx(rd(s->r,24,4),4));
L_1803fce32_2:;
/* 1803fce35: add rax, r14 */
L_1803fce35_0:;
L_1803fce35_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+rd(s->r,176,8))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fce35_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->r,176,8),8,0));
L_1803fce35_3:;
wr(s->r,0,8,(rd(s->r,0,8)+rd(s->r,176,8)));
L_1803fce35_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fce35_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fce35_6:;
wr(s->u,12,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fce35_7:;
wr(s->u,20,1,pop(rd(s->u,12,8),8));
L_1803fce35_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803fce35_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803fce35_10:;
/* 1803fce38: test r13d, r13d */
L_1803fce38_0:;
L_1803fce38_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fce38_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fce38_3:;
wr(s->u,22,4,(rd(s->r,168,4)&rd(s->r,168,4)));
L_1803fce38_4:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fce38_5:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803fce38_6:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803fce38_7:;
wr(s->u,20,1,pop(rd(s->u,12,4),4));
L_1803fce38_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803fce38_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803fce38_10:;
/* 1803fce3b: je 0x1803fce5f */
L_1803fce3b_0:;
L_1803fce3b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fce5f);}
L_1803fce3b_2:;
return UINT64_C(0x1803fce3d);
}
uint64_t b_1803fce32(CPU*s){
/* 1803fce32: movsxd rax, ebx */
L_1803fce32_0:;
L_1803fce32_1:;
wr(s->r,0,8,(U)sx(rd(s->r,24,4),4));
L_1803fce32_2:;
/* 1803fce35: add rax, r14 */
L_1803fce35_0:;
L_1803fce35_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+rd(s->r,176,8))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fce35_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->r,176,8),8,0));
L_1803fce35_3:;
wr(s->r,0,8,(rd(s->r,0,8)+rd(s->r,176,8)));
L_1803fce35_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fce35_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fce35_6:;
wr(s->u,0,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fce35_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fce35_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fce35_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fce35_10:;
/* 1803fce38: test r13d, r13d */
L_1803fce38_0:;
L_1803fce38_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fce38_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fce38_3:;
wr(s->u,10,4,(rd(s->r,168,4)&rd(s->r,168,4)));
L_1803fce38_4:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fce38_5:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fce38_6:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fce38_7:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fce38_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fce38_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fce38_10:;
/* 1803fce3b: je 0x1803fce5f */
L_1803fce3b_0:;
L_1803fce3b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fce5f);}
L_1803fce3b_2:;
return UINT64_C(0x1803fce3d);
}
uint64_t b_1803fce3d(CPU*s){
/* 1803fce3d: movaps xmm1, xmm0 */
L_1803fce3d_0:;
L_1803fce3d_1:;
wr(s->r,4672,4,rd(s->r,4608,4));
L_1803fce3d_2:;
wr(s->r,4676,4,rd(s->r,4612,4));
L_1803fce3d_3:;
wr(s->r,4680,4,rd(s->r,4616,4));
L_1803fce3d_4:;
wr(s->r,4684,4,rd(s->r,4620,4));
L_1803fce3d_5:;
/* 1803fce40: movss xmm2, dword ptr [rsi + rax*4] */
L_1803fce40_0:;
L_1803fce40_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fce40_2:;
wr(s->u,8,8,(rd(s->r,48,8)+rd(s->u,0,8)));
L_1803fce40_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fce40_4:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fce40_5:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fce40_6:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fce40_7:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fce40_8:;
/* 1803fce45: comiss xmm2, xmm1 */
L_1803fce45_0:;
L_1803fce45_1:;
wr(s->u,21,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803fce45_2:;
wr(s->u,22,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803fce45_3:;
wr(s->r,514,1,((rd(s->u,21,1)!=0)||(rd(s->u,22,1)!=0)));
L_1803fce45_4:;
wr(s->u,23,1,(fv(rd(s->r,4736,4),4)==fv(rd(s->r,4672,4),4)));
L_1803fce45_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,23,1)));
L_1803fce45_6:;
wr(s->u,24,1,(fv(rd(s->r,4736,4),4)<fv(rd(s->r,4672,4),4)));
L_1803fce45_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,24,1)));
L_1803fce45_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fce45_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fce45_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fce45_11:;
/* 1803fce48: jbe 0x1803fce52 */
L_1803fce48_0:;
L_1803fce48_1:;
wr(s->u,20,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fce48_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fce52);}
L_1803fce48_3:;
return UINT64_C(0x1803fce4a);
}
uint64_t b_1803fce40(CPU*s){
/* 1803fce40: movss xmm2, dword ptr [rsi + rax*4] */
L_1803fce40_0:;
L_1803fce40_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fce40_2:;
wr(s->u,8,8,(rd(s->r,48,8)+rd(s->u,0,8)));
L_1803fce40_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fce40_4:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fce40_5:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fce40_6:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fce40_7:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fce40_8:;
/* 1803fce45: comiss xmm2, xmm1 */
L_1803fce45_0:;
L_1803fce45_1:;
wr(s->u,21,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803fce45_2:;
wr(s->u,22,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803fce45_3:;
wr(s->r,514,1,((rd(s->u,21,1)!=0)||(rd(s->u,22,1)!=0)));
L_1803fce45_4:;
wr(s->u,23,1,(fv(rd(s->r,4736,4),4)==fv(rd(s->r,4672,4),4)));
L_1803fce45_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,23,1)));
L_1803fce45_6:;
wr(s->u,24,1,(fv(rd(s->r,4736,4),4)<fv(rd(s->r,4672,4),4)));
L_1803fce45_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,24,1)));
L_1803fce45_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fce45_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fce45_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fce45_11:;
/* 1803fce48: jbe 0x1803fce52 */
L_1803fce48_0:;
L_1803fce48_1:;
wr(s->u,20,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fce48_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803fce52);}
L_1803fce48_3:;
return UINT64_C(0x1803fce4a);
}
uint64_t b_1803fce4a(CPU*s){
/* 1803fce4a: movaps xmm1, xmm2 */
L_1803fce4a_0:;
L_1803fce4a_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803fce4a_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803fce4a_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803fce4a_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803fce4a_5:;
/* 1803fce4d: movaps xmm0, xmm2 */
L_1803fce4d_0:;
L_1803fce4d_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fce4d_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fce4d_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fce4d_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fce4d_5:;
/* 1803fce50: mov ebp, eax */
L_1803fce50_0:;
L_1803fce50_1:;
wr(s->r,40,4,rd(s->r,0,4));
L_1803fce50_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fce50_3:;
/* 1803fce52: add r13d, -1 */
L_1803fce52_0:;
L_1803fce52_1:;
wr(s->r,512,1,(((rd(s->r,168,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,168,4)));
L_1803fce52_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fce52_3:;
wr(s->r,168,4,(rd(s->r,168,4)+((U)UINT64_C(0xffffffff))));
L_1803fce52_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fce52_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fce52_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fce52_7:;
wr(s->u,1,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fce52_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803fce52_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fce52_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fce52_11:;
/* 1803fce56: add rax, 1 */
L_1803fce56_0:;
L_1803fce56_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fce56_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fce56_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fce56_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fce56_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fce56_6:;
wr(s->u,1,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fce56_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fce56_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fce56_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fce56_10:;
/* 1803fce5a: test r13d, r13d */
L_1803fce5a_0:;
L_1803fce5a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fce5a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fce5a_3:;
wr(s->u,11,4,(rd(s->r,168,4)&rd(s->r,168,4)));
L_1803fce5a_4:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fce5a_5:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fce5a_6:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fce5a_7:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803fce5a_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fce5a_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fce5a_10:;
/* 1803fce5d: jne 0x1803fce40 */
L_1803fce5d_0:;
L_1803fce5d_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fce5d_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fce40);}
L_1803fce5d_3:;
return UINT64_C(0x1803fce5f);
}
uint64_t b_1803fce52(CPU*s){
/* 1803fce52: add r13d, -1 */
L_1803fce52_0:;
L_1803fce52_1:;
wr(s->r,512,1,(((rd(s->r,168,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,168,4)));
L_1803fce52_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fce52_3:;
wr(s->r,168,4,(rd(s->r,168,4)+((U)UINT64_C(0xffffffff))));
L_1803fce52_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fce52_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fce52_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fce52_7:;
wr(s->u,1,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fce52_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803fce52_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fce52_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fce52_11:;
/* 1803fce56: add rax, 1 */
L_1803fce56_0:;
L_1803fce56_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fce56_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fce56_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fce56_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fce56_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fce56_6:;
wr(s->u,1,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fce56_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fce56_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fce56_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fce56_10:;
/* 1803fce5a: test r13d, r13d */
L_1803fce5a_0:;
L_1803fce5a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fce5a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fce5a_3:;
wr(s->u,11,4,(rd(s->r,168,4)&rd(s->r,168,4)));
L_1803fce5a_4:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fce5a_5:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fce5a_6:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fce5a_7:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803fce5a_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fce5a_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fce5a_10:;
/* 1803fce5d: jne 0x1803fce40 */
L_1803fce5d_0:;
L_1803fce5d_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fce5d_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fce40);}
L_1803fce5d_3:;
return UINT64_C(0x1803fce5f);
}
uint64_t b_1803fce5f(CPU*s){
/* 1803fce5f: mov dword ptr [r12], ebp */
L_1803fce5f_0:;
L_1803fce5f_1:;
wr(s->u,0,4,rd(s->r,40,4));
L_1803fce5f_2:;
mw((uint64_t)rd(s->r,160,8),4,rd(s->u,0,4));
L_1803fce5f_3:;
/* 1803fce63: movss dword ptr [rdi], xmm0 */
L_1803fce63_0:;
L_1803fce63_1:;
wr(s->u,0,4,rd(s->r,4608,4));
L_1803fce63_2:;
mw((uint64_t)rd(s->r,56,8),4,rd(s->u,0,4));
L_1803fce63_3:;
/* 1803fce67: xor eax, eax */
L_1803fce67_0:;
L_1803fce67_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fce67_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fce67_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fce67_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fce67_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fce67_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fce67_7:;
wr(s->u,4,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fce67_8:;
wr(s->u,12,1,pop(rd(s->u,4,4),4));
L_1803fce67_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fce67_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fce67_11:;
/* 1803fce69: add rsp, 0x48 */
L_1803fce69_0:;
L_1803fce69_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fce69_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fce69_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fce69_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fce69_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fce69_6:;
wr(s->u,4,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fce69_7:;
wr(s->u,12,1,pop(rd(s->u,4,8),8));
L_1803fce69_8:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803fce69_9:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803fce69_10:;
/* 1803fce6d: pop rbx */
L_1803fce6d_0:;
L_1803fce6d_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fce6d_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fce6d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fce6d_4:;
wr(s->r,24,8,rd(s->u,14,8));
L_1803fce6d_5:;
/* 1803fce6e: pop rbp */
L_1803fce6e_0:;
L_1803fce6e_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fce6e_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fce6e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fce6e_4:;
wr(s->r,40,8,rd(s->u,14,8));
L_1803fce6e_5:;
/* 1803fce6f: pop rsi */
L_1803fce6f_0:;
L_1803fce6f_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fce6f_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fce6f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fce6f_4:;
wr(s->r,48,8,rd(s->u,14,8));
L_1803fce6f_5:;
/* 1803fce70: pop rdi */
L_1803fce70_0:;
L_1803fce70_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fce70_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fce70_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fce70_4:;
wr(s->r,56,8,rd(s->u,14,8));
L_1803fce70_5:;
/* 1803fce71: pop r12 */
L_1803fce71_0:;
L_1803fce71_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fce71_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fce71_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fce71_4:;
wr(s->r,160,8,rd(s->u,14,8));
L_1803fce71_5:;
/* 1803fce73: pop r13 */
L_1803fce73_0:;
L_1803fce73_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fce73_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fce73_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fce73_4:;
wr(s->r,168,8,rd(s->u,14,8));
L_1803fce73_5:;
/* 1803fce75: pop r14 */
L_1803fce75_0:;
L_1803fce75_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fce75_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fce75_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fce75_4:;
wr(s->r,176,8,rd(s->u,14,8));
L_1803fce75_5:;
/* 1803fce77: pop r15 */
L_1803fce77_0:;
L_1803fce77_1:;
wr(s->u,14,8,((U)UINT64_C(0x0)));
L_1803fce77_2:;
wr(s->u,14,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fce77_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fce77_4:;
wr(s->r,184,8,rd(s->u,14,8));
L_1803fce77_5:;
/* 1803fce79: ret  */
L_1803fce79_0:;
L_1803fce79_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fce79_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fce79_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fce79_4:;
return UINT64_C(0x1803fce7a);
}
uint64_t b_1803fce7a(CPU*s){
/* 1803fce7a: movss dword ptr [rsp + 0x40], xmm2 */
L_1803fce7a_0:;
L_1803fce7a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803fce7a_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803fce7a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fce7a_4:;
/* 1803fce80: jmp 0x1803fcd0a */
L_1803fce80_0:;
L_1803fce80_1:;
return UINT64_C(0x1803fcd0a);
L_1803fce80_2:;
return UINT64_C(0x1803fce85);
}
uint64_t b_1803fce85(CPU*s){
/* 1803fce85: mov rcx, rsi */
L_1803fce85_0:;
L_1803fce85_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1803fce85_2:;
/* 1803fce88: mov edx, ebx */
L_1803fce88_0:;
L_1803fce88_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1803fce88_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fce88_3:;
/* 1803fce8a: mov r8, rdi */
L_1803fce8a_0:;
L_1803fce8a_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803fce8a_2:;
/* 1803fce8d: call 0x18042e6f8 */
L_1803fce8d_0:;
L_1803fce8d_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fce8d_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fce92)));
L_1803fce8d_3:;
return (uint64_t)UINT64_C(0x18042e6f8);
L_1803fce8d_4:;
return UINT64_C(0x1803fce92);
}
uint64_t b_1803fce92(CPU*s){
/* 1803fce92: add rsp, 0x48 */
L_1803fce92_0:;
L_1803fce92_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fce92_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fce92_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fce92_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fce92_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fce92_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fce92_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fce92_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fce92_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fce92_10:;
/* 1803fce96: pop rbx */
L_1803fce96_0:;
L_1803fce96_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fce96_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fce96_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fce96_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803fce96_5:;
/* 1803fce97: pop rbp */
L_1803fce97_0:;
L_1803fce97_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fce97_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fce97_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fce97_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fce97_5:;
/* 1803fce98: pop rsi */
L_1803fce98_0:;
L_1803fce98_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fce98_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fce98_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fce98_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fce98_5:;
/* 1803fce99: pop rdi */
L_1803fce99_0:;
L_1803fce99_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fce99_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fce99_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fce99_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fce99_5:;
/* 1803fce9a: pop r12 */
L_1803fce9a_0:;
L_1803fce9a_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fce9a_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fce9a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fce9a_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fce9a_5:;
/* 1803fce9c: pop r13 */
L_1803fce9c_0:;
L_1803fce9c_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fce9c_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fce9c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fce9c_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fce9c_5:;
/* 1803fce9e: pop r14 */
L_1803fce9e_0:;
L_1803fce9e_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fce9e_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fce9e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fce9e_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fce9e_5:;
/* 1803fcea0: pop r15 */
L_1803fcea0_0:;
L_1803fcea0_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fcea0_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcea0_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcea0_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fcea0_5:;
/* 1803fcea2: ret  */
L_1803fcea2_0:;
L_1803fcea2_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcea2_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcea2_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fcea2_4:;
return UINT64_C(0x1803fcea3);
}
uint64_t b_1803fcea3(CPU*s){
/* 1803fcea3: mov eax, 0xfffffffa */
L_1803fcea3_0:;
L_1803fcea3_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fcea3_2:;
/* 1803fcea8: add rsp, 0x48 */
L_1803fcea8_0:;
L_1803fcea8_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcea8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fcea8_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fcea8_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcea8_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcea8_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcea8_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcea8_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcea8_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcea8_10:;
/* 1803fceac: pop rbx */
L_1803fceac_0:;
L_1803fceac_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fceac_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fceac_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fceac_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803fceac_5:;
/* 1803fcead: pop rbp */
L_1803fcead_0:;
L_1803fcead_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fcead_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcead_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcead_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fcead_5:;
/* 1803fceae: pop rsi */
L_1803fceae_0:;
L_1803fceae_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fceae_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fceae_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fceae_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fceae_5:;
/* 1803fceaf: pop rdi */
L_1803fceaf_0:;
L_1803fceaf_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fceaf_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fceaf_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fceaf_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fceaf_5:;
/* 1803fceb0: pop r12 */
L_1803fceb0_0:;
L_1803fceb0_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fceb0_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fceb0_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fceb0_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fceb0_5:;
/* 1803fceb2: pop r13 */
L_1803fceb2_0:;
L_1803fceb2_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fceb2_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fceb2_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fceb2_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fceb2_5:;
/* 1803fceb4: pop r14 */
L_1803fceb4_0:;
L_1803fceb4_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fceb4_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fceb4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fceb4_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fceb4_5:;
/* 1803fceb6: pop r15 */
L_1803fceb6_0:;
L_1803fceb6_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fceb6_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fceb6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fceb6_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fceb6_5:;
/* 1803fceb8: ret  */
L_1803fceb8_0:;
L_1803fceb8_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fceb8_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fceb8_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fceb8_4:;
return UINT64_C(0x1803fceb9);
}
uint64_t b_1803fceb9(CPU*s){
/* 1803fceb9: mov eax, 0xfffffff8 */
L_1803fceb9_0:;
L_1803fceb9_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fceb9_2:;
/* 1803fcebe: add rsp, 0x48 */
L_1803fcebe_0:;
L_1803fcebe_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcebe_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803fcebe_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803fcebe_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcebe_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcebe_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcebe_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcebe_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcebe_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcebe_10:;
/* 1803fcec2: pop rbx */
L_1803fcec2_0:;
L_1803fcec2_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fcec2_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcec2_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcec2_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803fcec2_5:;
/* 1803fcec3: pop rbp */
L_1803fcec3_0:;
L_1803fcec3_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fcec3_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcec3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcec3_4:;
wr(s->r,40,8,rd(s->u,10,8));
L_1803fcec3_5:;
/* 1803fcec4: pop rsi */
L_1803fcec4_0:;
L_1803fcec4_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fcec4_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcec4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcec4_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803fcec4_5:;
/* 1803fcec5: pop rdi */
L_1803fcec5_0:;
L_1803fcec5_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fcec5_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcec5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcec5_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803fcec5_5:;
/* 1803fcec6: pop r12 */
L_1803fcec6_0:;
L_1803fcec6_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fcec6_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcec6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcec6_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803fcec6_5:;
/* 1803fcec8: pop r13 */
L_1803fcec8_0:;
L_1803fcec8_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fcec8_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcec8_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcec8_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fcec8_5:;
/* 1803fceca: pop r14 */
L_1803fceca_0:;
L_1803fceca_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fceca_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fceca_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fceca_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fceca_5:;
/* 1803fcecc: pop r15 */
L_1803fcecc_0:;
L_1803fcecc_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fcecc_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcecc_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcecc_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fcecc_5:;
/* 1803fcece: ret  */
L_1803fcece_0:;
L_1803fcece_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcece_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcece_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fcece_4:;
return UINT64_C(0x1803fcecf);
}
uint64_t b_1803fced0(CPU*s){
/* 1803fced0: sub rsp, 0x28 */
L_1803fced0_0:;
L_1803fced0_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fced0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fced0_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fced0_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fced0_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fced0_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fced0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fced0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fced0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fced0_10:;
/* 1803fced4: test rcx, rcx */
L_1803fced4_0:;
L_1803fced4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fced4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fced4_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fced4_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fced4_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fced4_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fced4_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fced4_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fced4_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fced4_10:;
/* 1803fced7: je 0x1803fcef9 */
L_1803fced7_0:;
L_1803fced7_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fcef9);}
L_1803fced7_2:;
return UINT64_C(0x1803fced9);
}
uint64_t b_1803fced9(CPU*s){
/* 1803fced9: test rdx, rdx */
L_1803fced9_0:;
L_1803fced9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fced9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fced9_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fced9_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fced9_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fced9_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fced9_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fced9_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fced9_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fced9_10:;
/* 1803fcedc: je 0x1803fcef9 */
L_1803fcedc_0:;
L_1803fcedc_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fcef9);}
L_1803fcedc_2:;
return UINT64_C(0x1803fcede);
}
uint64_t b_1803fcede(CPU*s){
/* 1803fcede: test r8d, r8d */
L_1803fcede_0:;
L_1803fcede_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcede_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcede_3:;
wr(s->u,9,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fcede_4:;
wr(s->r,519,1,(sx(rd(s->u,9,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcede_5:;
wr(s->r,518,1,(rd(s->u,9,4)==((U)UINT64_C(0x0))));
L_1803fcede_6:;
wr(s->u,3,4,(rd(s->u,9,4)&((U)UINT64_C(0xff))));
L_1803fcede_7:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fcede_8:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fcede_9:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fcede_10:;
/* 1803fcee1: jg 0x1803fceed */
L_1803fcee1_0:;
L_1803fcee1_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fcee1_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fcee1_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fcee1_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fceed);}
L_1803fcee1_5:;
return UINT64_C(0x1803fcee3);
}
uint64_t b_1803fcee3(CPU*s){
/* 1803fcee3: mov eax, 0xfffffffa */
L_1803fcee3_0:;
L_1803fcee3_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fcee3_2:;
/* 1803fcee8: add rsp, 0x28 */
L_1803fcee8_0:;
L_1803fcee8_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcee8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fcee8_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fcee8_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcee8_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcee8_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcee8_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcee8_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcee8_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcee8_10:;
/* 1803fceec: ret  */
L_1803fceec_0:;
L_1803fceec_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fceec_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fceec_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fceec_4:;
return UINT64_C(0x1803fceed);
}
uint64_t b_1803fceed(CPU*s){
/* 1803fceed: call 0x18042ea00 */
L_1803fceed_0:;
L_1803fceed_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fceed_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fcef2)));
L_1803fceed_3:;
return (uint64_t)UINT64_C(0x18042ea00);
L_1803fceed_4:;
return UINT64_C(0x1803fcef2);
}
uint64_t b_1803fcef2(CPU*s){
/* 1803fcef2: xor eax, eax */
L_1803fcef2_0:;
L_1803fcef2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcef2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcef2_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fcef2_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fcef2_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcef2_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fcef2_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fcef2_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fcef2_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcef2_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcef2_11:;
/* 1803fcef4: add rsp, 0x28 */
L_1803fcef4_0:;
L_1803fcef4_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcef4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fcef4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fcef4_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcef4_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcef4_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcef4_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcef4_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcef4_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcef4_10:;
/* 1803fcef8: ret  */
L_1803fcef8_0:;
L_1803fcef8_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcef8_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcef8_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fcef8_4:;
return UINT64_C(0x1803fcef9);
}
uint64_t b_1803fcef9(CPU*s){
/* 1803fcef9: mov eax, 0xfffffff8 */
L_1803fcef9_0:;
L_1803fcef9_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fcef9_2:;
/* 1803fcefe: add rsp, 0x28 */
L_1803fcefe_0:;
L_1803fcefe_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcefe_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fcefe_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fcefe_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcefe_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcefe_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcefe_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcefe_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcefe_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcefe_10:;
/* 1803fcf02: ret  */
L_1803fcf02_0:;
L_1803fcf02_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcf02_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcf02_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fcf02_4:;
return UINT64_C(0x1803fcf03);
}
uint64_t b_1803fcf04(CPU*s){
/* 1803fcf04: sub rsp, 0x28 */
L_1803fcf04_0:;
L_1803fcf04_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fcf04_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fcf04_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fcf04_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcf04_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcf04_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcf04_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcf04_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf04_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf04_10:;
/* 1803fcf08: test rcx, rcx */
L_1803fcf08_0:;
L_1803fcf08_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcf08_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcf08_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fcf08_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcf08_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fcf08_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fcf08_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcf08_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf08_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf08_10:;
/* 1803fcf0b: je 0x1803fcf2d */
L_1803fcf0b_0:;
L_1803fcf0b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fcf2d);}
L_1803fcf0b_2:;
return UINT64_C(0x1803fcf0d);
}
uint64_t b_1803fcf0d(CPU*s){
/* 1803fcf0d: test rdx, rdx */
L_1803fcf0d_0:;
L_1803fcf0d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcf0d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcf0d_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fcf0d_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcf0d_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fcf0d_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fcf0d_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcf0d_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf0d_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf0d_10:;
/* 1803fcf10: je 0x1803fcf2d */
L_1803fcf10_0:;
L_1803fcf10_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fcf2d);}
L_1803fcf10_2:;
return UINT64_C(0x1803fcf12);
}
uint64_t b_1803fcf12(CPU*s){
/* 1803fcf12: test r8d, r8d */
L_1803fcf12_0:;
L_1803fcf12_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcf12_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcf12_3:;
wr(s->u,9,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fcf12_4:;
wr(s->r,519,1,(sx(rd(s->u,9,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcf12_5:;
wr(s->r,518,1,(rd(s->u,9,4)==((U)UINT64_C(0x0))));
L_1803fcf12_6:;
wr(s->u,3,4,(rd(s->u,9,4)&((U)UINT64_C(0xff))));
L_1803fcf12_7:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fcf12_8:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fcf12_9:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fcf12_10:;
/* 1803fcf15: jg 0x1803fcf21 */
L_1803fcf15_0:;
L_1803fcf15_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fcf15_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fcf15_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fcf15_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fcf21);}
L_1803fcf15_5:;
return UINT64_C(0x1803fcf17);
}
uint64_t b_1803fcf17(CPU*s){
/* 1803fcf17: mov eax, 0xfffffffa */
L_1803fcf17_0:;
L_1803fcf17_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fcf17_2:;
/* 1803fcf1c: add rsp, 0x28 */
L_1803fcf1c_0:;
L_1803fcf1c_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcf1c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fcf1c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fcf1c_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcf1c_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcf1c_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcf1c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcf1c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf1c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf1c_10:;
/* 1803fcf20: ret  */
L_1803fcf20_0:;
L_1803fcf20_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcf20_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcf20_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fcf20_4:;
return UINT64_C(0x1803fcf21);
}
uint64_t b_1803fcf21(CPU*s){
/* 1803fcf21: call 0x18042eccc */
L_1803fcf21_0:;
L_1803fcf21_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fcf21_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fcf26)));
L_1803fcf21_3:;
return (uint64_t)UINT64_C(0x18042eccc);
L_1803fcf21_4:;
return UINT64_C(0x1803fcf26);
}
uint64_t b_1803fcf26(CPU*s){
/* 1803fcf26: xor eax, eax */
L_1803fcf26_0:;
L_1803fcf26_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcf26_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcf26_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fcf26_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fcf26_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcf26_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fcf26_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fcf26_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fcf26_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf26_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf26_11:;
/* 1803fcf28: add rsp, 0x28 */
L_1803fcf28_0:;
L_1803fcf28_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcf28_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fcf28_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fcf28_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcf28_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcf28_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcf28_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcf28_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf28_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf28_10:;
/* 1803fcf2c: ret  */
L_1803fcf2c_0:;
L_1803fcf2c_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcf2c_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcf2c_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fcf2c_4:;
return UINT64_C(0x1803fcf2d);
}
uint64_t b_1803fcf2d(CPU*s){
/* 1803fcf2d: mov eax, 0xfffffff8 */
L_1803fcf2d_0:;
L_1803fcf2d_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fcf2d_2:;
/* 1803fcf32: add rsp, 0x28 */
L_1803fcf32_0:;
L_1803fcf32_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcf32_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fcf32_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fcf32_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcf32_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcf32_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcf32_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcf32_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf32_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf32_10:;
/* 1803fcf36: ret  */
L_1803fcf36_0:;
L_1803fcf36_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcf36_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcf36_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fcf36_4:;
return UINT64_C(0x1803fcf37);
}
uint64_t b_1803fcf38(CPU*s){
/* 1803fcf38: sub rsp, 0x28 */
L_1803fcf38_0:;
L_1803fcf38_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fcf38_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fcf38_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fcf38_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcf38_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcf38_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcf38_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcf38_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf38_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf38_10:;
/* 1803fcf3c: test rdx, rdx */
L_1803fcf3c_0:;
L_1803fcf3c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcf3c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcf3c_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fcf3c_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcf3c_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fcf3c_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fcf3c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcf3c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf3c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf3c_10:;
/* 1803fcf3f: je 0x1803fcf63 */
L_1803fcf3f_0:;
L_1803fcf3f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fcf63);}
L_1803fcf3f_2:;
return UINT64_C(0x1803fcf41);
}
uint64_t b_1803fcf41(CPU*s){
/* 1803fcf41: test r8d, r8d */
L_1803fcf41_0:;
L_1803fcf41_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcf41_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcf41_3:;
wr(s->u,8,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fcf41_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcf41_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803fcf41_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803fcf41_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fcf41_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fcf41_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fcf41_10:;
/* 1803fcf44: jle 0x1803fcf6d */
L_1803fcf44_0:;
L_1803fcf44_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fcf44_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fcf44_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fcf6d);}
L_1803fcf44_4:;
return UINT64_C(0x1803fcf46);
}
uint64_t b_1803fcf46(CPU*s){
/* 1803fcf46: xorps xmm1, xmm1 */
L_1803fcf46_0:;
L_1803fcf46_1:;
wr(s->r,4672,4,(rd(s->r,4672,4)^rd(s->r,4672,4)));
L_1803fcf46_2:;
wr(s->r,4676,4,(rd(s->r,4676,4)^rd(s->r,4676,4)));
L_1803fcf46_3:;
wr(s->r,4680,4,(rd(s->r,4680,4)^rd(s->r,4680,4)));
L_1803fcf46_4:;
wr(s->r,4684,4,(rd(s->r,4684,4)^rd(s->r,4684,4)));
L_1803fcf46_5:;
/* 1803fcf49: ucomiss xmm0, xmm1 */
L_1803fcf49_0:;
L_1803fcf49_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803fcf49_2:;
wr(s->u,2,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803fcf49_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803fcf49_4:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803fcf49_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803fcf49_6:;
wr(s->u,4,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803fcf49_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803fcf49_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcf49_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fcf49_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fcf49_11:;
/* 1803fcf4c: jne 0x1803fcf57 */
L_1803fcf4c_0:;
L_1803fcf4c_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fcf4c_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fcf57);}
L_1803fcf4c_3:;
return UINT64_C(0x1803fcf4e);
}
uint64_t b_1803fcf4e(CPU*s){
/* 1803fcf4e: jp 0x1803fcf57 */
L_1803fcf4e_0:;
L_1803fcf4e_1:;
if(rd(s->r,514,1)){return UINT64_C(0x1803fcf57);}
L_1803fcf4e_2:;
return UINT64_C(0x1803fcf50);
}
uint64_t b_1803fcf50(CPU*s){
/* 1803fcf50: xor eax, eax */
L_1803fcf50_0:;
L_1803fcf50_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcf50_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcf50_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fcf50_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fcf50_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcf50_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fcf50_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fcf50_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fcf50_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf50_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf50_11:;
/* 1803fcf52: add rsp, 0x28 */
L_1803fcf52_0:;
L_1803fcf52_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcf52_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fcf52_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fcf52_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcf52_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcf52_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcf52_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcf52_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf52_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf52_10:;
/* 1803fcf56: ret  */
L_1803fcf56_0:;
L_1803fcf56_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcf56_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcf56_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fcf56_4:;
return UINT64_C(0x1803fcf57);
}
uint64_t b_1803fcf57(CPU*s){
/* 1803fcf57: call 0x18042ede0 */
L_1803fcf57_0:;
L_1803fcf57_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fcf57_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fcf5c)));
L_1803fcf57_3:;
return (uint64_t)UINT64_C(0x18042ede0);
L_1803fcf57_4:;
return UINT64_C(0x1803fcf5c);
}
uint64_t b_1803fcf5c(CPU*s){
/* 1803fcf5c: xor eax, eax */
L_1803fcf5c_0:;
L_1803fcf5c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcf5c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcf5c_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fcf5c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fcf5c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcf5c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fcf5c_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fcf5c_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fcf5c_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf5c_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf5c_11:;
/* 1803fcf5e: add rsp, 0x28 */
L_1803fcf5e_0:;
L_1803fcf5e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcf5e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fcf5e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fcf5e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcf5e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcf5e_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcf5e_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcf5e_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf5e_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf5e_10:;
/* 1803fcf62: ret  */
L_1803fcf62_0:;
L_1803fcf62_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcf62_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcf62_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fcf62_4:;
return UINT64_C(0x1803fcf63);
}
uint64_t b_1803fcf63(CPU*s){
/* 1803fcf63: mov eax, 0xfffffff8 */
L_1803fcf63_0:;
L_1803fcf63_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fcf63_2:;
/* 1803fcf68: add rsp, 0x28 */
L_1803fcf68_0:;
L_1803fcf68_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcf68_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fcf68_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fcf68_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcf68_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcf68_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcf68_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcf68_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf68_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf68_10:;
/* 1803fcf6c: ret  */
L_1803fcf6c_0:;
L_1803fcf6c_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcf6c_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcf6c_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fcf6c_4:;
return UINT64_C(0x1803fcf6d);
}
uint64_t b_1803fcf6d(CPU*s){
/* 1803fcf6d: mov eax, 0xfffffffa */
L_1803fcf6d_0:;
L_1803fcf6d_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fcf6d_2:;
/* 1803fcf72: add rsp, 0x28 */
L_1803fcf72_0:;
L_1803fcf72_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcf72_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fcf72_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fcf72_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcf72_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcf72_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcf72_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcf72_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf72_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf72_10:;
/* 1803fcf76: ret  */
L_1803fcf76_0:;
L_1803fcf76_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcf76_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcf76_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fcf76_4:;
return UINT64_C(0x1803fcf77);
}
uint64_t b_1803fcf78(CPU*s){
/* 1803fcf78: sub rsp, 0x28 */
L_1803fcf78_0:;
L_1803fcf78_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fcf78_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fcf78_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fcf78_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcf78_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcf78_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcf78_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcf78_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf78_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf78_10:;
/* 1803fcf7c: test rcx, rcx */
L_1803fcf7c_0:;
L_1803fcf7c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcf7c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcf7c_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fcf7c_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcf7c_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fcf7c_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fcf7c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcf7c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf7c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf7c_10:;
/* 1803fcf7f: je 0x1803fcfa1 */
L_1803fcf7f_0:;
L_1803fcf7f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fcfa1);}
L_1803fcf7f_2:;
return UINT64_C(0x1803fcf81);
}
uint64_t b_1803fcf81(CPU*s){
/* 1803fcf81: test rdx, rdx */
L_1803fcf81_0:;
L_1803fcf81_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcf81_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcf81_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fcf81_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcf81_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fcf81_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fcf81_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcf81_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf81_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf81_10:;
/* 1803fcf84: je 0x1803fcfa1 */
L_1803fcf84_0:;
L_1803fcf84_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fcfa1);}
L_1803fcf84_2:;
return UINT64_C(0x1803fcf86);
}
uint64_t b_1803fcf86(CPU*s){
/* 1803fcf86: test r8d, r8d */
L_1803fcf86_0:;
L_1803fcf86_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcf86_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcf86_3:;
wr(s->u,9,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fcf86_4:;
wr(s->r,519,1,(sx(rd(s->u,9,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcf86_5:;
wr(s->r,518,1,(rd(s->u,9,4)==((U)UINT64_C(0x0))));
L_1803fcf86_6:;
wr(s->u,3,4,(rd(s->u,9,4)&((U)UINT64_C(0xff))));
L_1803fcf86_7:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fcf86_8:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fcf86_9:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fcf86_10:;
/* 1803fcf89: jg 0x1803fcf95 */
L_1803fcf89_0:;
L_1803fcf89_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fcf89_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fcf89_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fcf89_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fcf95);}
L_1803fcf89_5:;
return UINT64_C(0x1803fcf8b);
}
uint64_t b_1803fcf8b(CPU*s){
/* 1803fcf8b: mov eax, 0xfffffffa */
L_1803fcf8b_0:;
L_1803fcf8b_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fcf8b_2:;
/* 1803fcf90: add rsp, 0x28 */
L_1803fcf90_0:;
L_1803fcf90_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcf90_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fcf90_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fcf90_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcf90_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcf90_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcf90_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcf90_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf90_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf90_10:;
/* 1803fcf94: ret  */
L_1803fcf94_0:;
L_1803fcf94_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcf94_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcf94_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fcf94_4:;
return UINT64_C(0x1803fcf95);
}
uint64_t b_1803fcf95(CPU*s){
/* 1803fcf95: call 0x18042ef04 */
L_1803fcf95_0:;
L_1803fcf95_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fcf95_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fcf9a)));
L_1803fcf95_3:;
return (uint64_t)UINT64_C(0x18042ef04);
L_1803fcf95_4:;
return UINT64_C(0x1803fcf9a);
}
uint64_t b_1803fcf9a(CPU*s){
/* 1803fcf9a: xor eax, eax */
L_1803fcf9a_0:;
L_1803fcf9a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcf9a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcf9a_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fcf9a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fcf9a_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcf9a_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fcf9a_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fcf9a_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fcf9a_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf9a_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf9a_11:;
/* 1803fcf9c: add rsp, 0x28 */
L_1803fcf9c_0:;
L_1803fcf9c_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcf9c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fcf9c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fcf9c_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcf9c_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcf9c_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcf9c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcf9c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcf9c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcf9c_10:;
/* 1803fcfa0: ret  */
L_1803fcfa0_0:;
L_1803fcfa0_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcfa0_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcfa0_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fcfa0_4:;
return UINT64_C(0x1803fcfa1);
}
uint64_t b_1803fcfa1(CPU*s){
/* 1803fcfa1: mov eax, 0xfffffff8 */
L_1803fcfa1_0:;
L_1803fcfa1_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fcfa1_2:;
/* 1803fcfa6: add rsp, 0x28 */
L_1803fcfa6_0:;
L_1803fcfa6_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcfa6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fcfa6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fcfa6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcfa6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcfa6_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcfa6_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcfa6_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcfa6_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcfa6_10:;
/* 1803fcfaa: ret  */
L_1803fcfaa_0:;
L_1803fcfaa_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcfaa_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcfaa_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fcfaa_4:;
return UINT64_C(0x1803fcfab);
}
uint64_t b_1803fcfac(CPU*s){
/* 1803fcfac: sub rsp, 0x28 */
L_1803fcfac_0:;
L_1803fcfac_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fcfac_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fcfac_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fcfac_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcfac_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcfac_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcfac_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcfac_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcfac_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcfac_10:;
/* 1803fcfb0: test rcx, rcx */
L_1803fcfb0_0:;
L_1803fcfb0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcfb0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcfb0_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fcfb0_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcfb0_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fcfb0_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fcfb0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcfb0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcfb0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcfb0_10:;
/* 1803fcfb3: je 0x1803fcfd5 */
L_1803fcfb3_0:;
L_1803fcfb3_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fcfd5);}
L_1803fcfb3_2:;
return UINT64_C(0x1803fcfb5);
}
uint64_t b_1803fcfb5(CPU*s){
/* 1803fcfb5: test rdx, rdx */
L_1803fcfb5_0:;
L_1803fcfb5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcfb5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcfb5_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fcfb5_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcfb5_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fcfb5_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fcfb5_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcfb5_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcfb5_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcfb5_10:;
/* 1803fcfb8: je 0x1803fcfd5 */
L_1803fcfb8_0:;
L_1803fcfb8_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fcfd5);}
L_1803fcfb8_2:;
return UINT64_C(0x1803fcfba);
}
uint64_t b_1803fcfba(CPU*s){
/* 1803fcfba: test r8d, r8d */
L_1803fcfba_0:;
L_1803fcfba_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcfba_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcfba_3:;
wr(s->u,9,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fcfba_4:;
wr(s->r,519,1,(sx(rd(s->u,9,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcfba_5:;
wr(s->r,518,1,(rd(s->u,9,4)==((U)UINT64_C(0x0))));
L_1803fcfba_6:;
wr(s->u,3,4,(rd(s->u,9,4)&((U)UINT64_C(0xff))));
L_1803fcfba_7:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fcfba_8:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fcfba_9:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fcfba_10:;
/* 1803fcfbd: jg 0x1803fcfc9 */
L_1803fcfbd_0:;
L_1803fcfbd_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fcfbd_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fcfbd_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fcfbd_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fcfc9);}
L_1803fcfbd_5:;
return UINT64_C(0x1803fcfbf);
}
uint64_t b_1803fcfbf(CPU*s){
/* 1803fcfbf: mov eax, 0xfffffffa */
L_1803fcfbf_0:;
L_1803fcfbf_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fcfbf_2:;
/* 1803fcfc4: add rsp, 0x28 */
L_1803fcfc4_0:;
L_1803fcfc4_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcfc4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fcfc4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fcfc4_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcfc4_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcfc4_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcfc4_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcfc4_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcfc4_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcfc4_10:;
/* 1803fcfc8: ret  */
L_1803fcfc8_0:;
L_1803fcfc8_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcfc8_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcfc8_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fcfc8_4:;
return UINT64_C(0x1803fcfc9);
}
uint64_t b_1803fcfc9(CPU*s){
/* 1803fcfc9: call 0x18042f010 */
L_1803fcfc9_0:;
L_1803fcfc9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fcfc9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fcfce)));
L_1803fcfc9_3:;
return (uint64_t)UINT64_C(0x18042f010);
L_1803fcfc9_4:;
return UINT64_C(0x1803fcfce);
}
uint64_t b_1803fcfce(CPU*s){
/* 1803fcfce: xor eax, eax */
L_1803fcfce_0:;
L_1803fcfce_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcfce_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcfce_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fcfce_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fcfce_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcfce_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fcfce_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fcfce_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fcfce_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcfce_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcfce_11:;
/* 1803fcfd0: add rsp, 0x28 */
L_1803fcfd0_0:;
L_1803fcfd0_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcfd0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fcfd0_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fcfd0_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcfd0_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcfd0_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcfd0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcfd0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcfd0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcfd0_10:;
/* 1803fcfd4: ret  */
L_1803fcfd4_0:;
L_1803fcfd4_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcfd4_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcfd4_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fcfd4_4:;
return UINT64_C(0x1803fcfd5);
}
uint64_t b_1803fcfd5(CPU*s){
/* 1803fcfd5: mov eax, 0xfffffff8 */
L_1803fcfd5_0:;
L_1803fcfd5_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fcfd5_2:;
/* 1803fcfda: add rsp, 0x28 */
L_1803fcfda_0:;
L_1803fcfda_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fcfda_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fcfda_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fcfda_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcfda_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcfda_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcfda_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcfda_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcfda_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcfda_10:;
/* 1803fcfde: ret  */
L_1803fcfde_0:;
L_1803fcfde_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fcfde_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fcfde_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fcfde_4:;
return UINT64_C(0x1803fcfdf);
}
uint64_t b_1803fcfe0(CPU*s){
/* 1803fcfe0: sub rsp, 0x28 */
L_1803fcfe0_0:;
L_1803fcfe0_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fcfe0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fcfe0_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fcfe0_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcfe0_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fcfe0_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fcfe0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcfe0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcfe0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcfe0_10:;
/* 1803fcfe4: test rdx, rdx */
L_1803fcfe4_0:;
L_1803fcfe4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcfe4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcfe4_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fcfe4_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fcfe4_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fcfe4_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fcfe4_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fcfe4_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fcfe4_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fcfe4_10:;
/* 1803fcfe7: je 0x1803fd029 */
L_1803fcfe7_0:;
L_1803fcfe7_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd029);}
L_1803fcfe7_2:;
return UINT64_C(0x1803fcfe9);
}
uint64_t b_1803fcfe9(CPU*s){
/* 1803fcfe9: test r8d, r8d */
L_1803fcfe9_0:;
L_1803fcfe9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fcfe9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcfe9_3:;
wr(s->u,8,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fcfe9_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fcfe9_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803fcfe9_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803fcfe9_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fcfe9_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fcfe9_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fcfe9_10:;
/* 1803fcfec: jle 0x1803fd01f */
L_1803fcfec_0:;
L_1803fcfec_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fcfec_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fcfec_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fd01f);}
L_1803fcfec_4:;
return UINT64_C(0x1803fcfee);
}
uint64_t b_1803fcfee(CPU*s){
/* 1803fcfee: ucomiss xmm0, dword ptr [rip + 0x41164b] */
L_1803fcfee_0:;
L_1803fcfee_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803fcfee_2:;
wr(s->u,1,1,isnan(fv(mr(UINT64_C(0x18080e640),4),4)));
L_1803fcfee_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803fcfee_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(mr(UINT64_C(0x18080e640),4),4)));
L_1803fcfee_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803fcfee_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(mr(UINT64_C(0x18080e640),4),4)));
L_1803fcfee_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803fcfee_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcfee_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fcfee_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fcfee_11:;
/* 1803fcff5: jp 0x1803fcff9 */
L_1803fcff5_0:;
L_1803fcff5_1:;
if(rd(s->r,514,1)){return UINT64_C(0x1803fcff9);}
L_1803fcff5_2:;
return UINT64_C(0x1803fcff7);
}
uint64_t b_1803fcff7(CPU*s){
/* 1803fcff7: je 0x1803fd008 */
L_1803fcff7_0:;
L_1803fcff7_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd008);}
L_1803fcff7_2:;
return UINT64_C(0x1803fcff9);
}
uint64_t b_1803fcff9(CPU*s){
/* 1803fcff9: xorps xmm1, xmm1 */
L_1803fcff9_0:;
L_1803fcff9_1:;
wr(s->r,4672,4,(rd(s->r,4672,4)^rd(s->r,4672,4)));
L_1803fcff9_2:;
wr(s->r,4676,4,(rd(s->r,4676,4)^rd(s->r,4676,4)));
L_1803fcff9_3:;
wr(s->r,4680,4,(rd(s->r,4680,4)^rd(s->r,4680,4)));
L_1803fcff9_4:;
wr(s->r,4684,4,(rd(s->r,4684,4)^rd(s->r,4684,4)));
L_1803fcff9_5:;
/* 1803fcffc: ucomiss xmm0, xmm1 */
L_1803fcffc_0:;
L_1803fcffc_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803fcffc_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803fcffc_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803fcffc_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803fcffc_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803fcffc_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803fcffc_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803fcffc_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fcffc_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803fcffc_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803fcffc_11:;
/* 1803fcfff: jp 0x1803fd003 */
L_1803fcfff_0:;
L_1803fcfff_1:;
if(rd(s->r,514,1)){return UINT64_C(0x1803fd003);}
L_1803fcfff_2:;
return UINT64_C(0x1803fd001);
}
