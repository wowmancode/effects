#include "lift_runtime.h"
uint64_t b_1803dc00d(CPU*s){
/* 1803dc00d: mov ebx, dword ptr [rsp + 0xb0] */
L_1803dc00d_0:;
L_1803dc00d_1:;
wr(s->u,16,8,(((U)UINT64_C(0xb0))+rd(s->r,32,8)));
L_1803dc00d_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803dc00d_3:;
wr(s->r,24,4,rd(s->u,28,4));
L_1803dc00d_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc00d_5:;
/* 1803dc014: inc dword ptr [rdi + 0x4c] */
L_1803dc014_0:;
L_1803dc014_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x4c))));
L_1803dc014_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc014_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,24,4),((U)UINT64_C(0x1)),4,0));
L_1803dc014_4:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc014_5:;
wr(s->u,24,4,(rd(s->u,24,4)+((U)UINT64_C(0x1))));
L_1803dc014_6:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dc014_7:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc014_8:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc014_9:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc014_10:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803dc014_11:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc014_12:;
wr(s->u,33,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803dc014_13:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803dc014_14:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803dc014_15:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803dc014_16:;
/* 1803dc017: mov esi, 1 */
L_1803dc017_0:;
L_1803dc017_1:;
wr(s->r,48,8,((U)UINT64_C(0x1)));
L_1803dc017_2:;
/* 1803dc01c: mov dword ptr [rdi + 0xc0], esi */
L_1803dc01c_0:;
L_1803dc01c_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0xc0))));
L_1803dc01c_2:;
wr(s->u,24,4,rd(s->r,48,4));
L_1803dc01c_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803dc01c_4:;
/* 1803dc022: test ebx, ebx */
L_1803dc022_0:;
L_1803dc022_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dc022_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc022_3:;
wr(s->u,39,4,(rd(s->r,24,4)&rd(s->r,24,4)));
L_1803dc022_4:;
wr(s->r,519,1,(sx(rd(s->u,39,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc022_5:;
wr(s->r,518,1,(rd(s->u,39,4)==((U)UINT64_C(0x0))));
L_1803dc022_6:;
wr(s->u,33,4,(rd(s->u,39,4)&((U)UINT64_C(0xff))));
L_1803dc022_7:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803dc022_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803dc022_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803dc022_10:;
/* 1803dc024: jne 0x1803dc0c7 */
L_1803dc024_0:;
L_1803dc024_1:;
wr(s->u,32,1,(!rd(s->r,518,1)));
L_1803dc024_2:;
if(rd(s->u,32,1)){return UINT64_C(0x1803dc0c7);}
L_1803dc024_3:;
return UINT64_C(0x1803dc02a);
}
uint64_t b_1803dc02a(CPU*s){
/* 1803dc02a: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc02a_0:;
L_1803dc02a_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc02a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc02a_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc02a_4:;
/* 1803dc031: call 0x1803da8c0 */
L_1803dc031_0:;
L_1803dc031_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc031_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc036)));
L_1803dc031_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc031_4:;
return UINT64_C(0x1803dc036);
}
uint64_t b_1803dc036(CPU*s){
/* 1803dc036: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc036_0:;
L_1803dc036_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc036_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc036_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc036_4:;
/* 1803dc03d: mov ebx, eax */
L_1803dc03d_0:;
L_1803dc03d_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803dc03d_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc03d_3:;
/* 1803dc03f: call 0x1803da8e0 */
L_1803dc03f_0:;
L_1803dc03f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc03f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc044)));
L_1803dc03f_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dc03f_4:;
return UINT64_C(0x1803dc044);
}
uint64_t b_1803dc044(CPU*s){
/* 1803dc044: cmp ebx, eax */
L_1803dc044_0:;
L_1803dc044_1:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803dc044_2:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,8,4)));
L_1803dc044_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,8,4),4,1));
L_1803dc044_4:;
wr(s->u,12,4,(rd(s->r,24,4)-rd(s->u,8,4)));
L_1803dc044_5:;
wr(s->r,519,1,(sx(rd(s->u,12,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc044_6:;
wr(s->r,518,1,(rd(s->u,12,4)==((U)UINT64_C(0x0))));
L_1803dc044_7:;
wr(s->u,2,4,(rd(s->u,12,4)&((U)UINT64_C(0xff))));
L_1803dc044_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dc044_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dc044_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dc044_11:;
/* 1803dc046: jle 0x1803dc056 */
L_1803dc046_0:;
L_1803dc046_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc046_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803dc046_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803dc056);}
L_1803dc046_4:;
return UINT64_C(0x1803dc048);
}
uint64_t b_1803dc048(CPU*s){
/* 1803dc048: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc048_0:;
L_1803dc048_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc048_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc048_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc048_4:;
/* 1803dc04f: call 0x1803da8c0 */
L_1803dc04f_0:;
L_1803dc04f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc04f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc054)));
L_1803dc04f_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc04f_4:;
return UINT64_C(0x1803dc054);
}
uint64_t b_1803dc054(CPU*s){
/* 1803dc054: jmp 0x1803dc062 */
L_1803dc054_0:;
L_1803dc054_1:;
return UINT64_C(0x1803dc062);
L_1803dc054_2:;
return UINT64_C(0x1803dc056);
}
uint64_t b_1803dc056(CPU*s){
/* 1803dc056: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc056_0:;
L_1803dc056_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc056_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc056_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc056_4:;
/* 1803dc05d: call 0x1803da8e0 */
L_1803dc05d_0:;
L_1803dc05d_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc05d_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc062)));
L_1803dc05d_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dc05d_4:;
return UINT64_C(0x1803dc062);
}
uint64_t b_1803dc062(CPU*s){
/* 1803dc062: cmp r14d, eax */
L_1803dc062_0:;
L_1803dc062_1:;
wr(s->u,7,4,rd(s->r,0,4));
L_1803dc062_2:;
wr(s->r,512,1,(rd(s->r,176,4)<rd(s->u,7,4)));
L_1803dc062_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,176,4),rd(s->u,7,4),4,1));
L_1803dc062_4:;
wr(s->u,11,4,(rd(s->r,176,4)-rd(s->u,7,4)));
L_1803dc062_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc062_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803dc062_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803dc062_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803dc062_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803dc062_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803dc062_11:;
/* 1803dc065: jge 0x1803dc06c */
L_1803dc065_0:;
L_1803dc065_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dc065_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dc06c);}
L_1803dc065_3:;
return UINT64_C(0x1803dc067);
}
uint64_t b_1803dc067(CPU*s){
/* 1803dc067: mov eax, r14d */
L_1803dc067_0:;
L_1803dc067_1:;
wr(s->r,0,4,rd(s->r,176,4));
L_1803dc067_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc067_3:;
/* 1803dc06a: jmp 0x1803dc0a4 */
L_1803dc06a_0:;
L_1803dc06a_1:;
return UINT64_C(0x1803dc0a4);
L_1803dc06a_2:;
return UINT64_C(0x1803dc06c);
}
uint64_t b_1803dc06c(CPU*s){
/* 1803dc06c: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc06c_0:;
L_1803dc06c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc06c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc06c_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc06c_4:;
/* 1803dc073: call 0x1803da8c0 */
L_1803dc073_0:;
L_1803dc073_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc073_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc078)));
L_1803dc073_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc073_4:;
return UINT64_C(0x1803dc078);
}
uint64_t b_1803dc078(CPU*s){
/* 1803dc078: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc078_0:;
L_1803dc078_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc078_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc078_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc078_4:;
/* 1803dc07f: mov ebx, eax */
L_1803dc07f_0:;
L_1803dc07f_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803dc07f_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc07f_3:;
/* 1803dc081: call 0x1803da8e0 */
L_1803dc081_0:;
L_1803dc081_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc081_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc086)));
L_1803dc081_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dc081_4:;
return UINT64_C(0x1803dc086);
}
uint64_t b_1803dc086(CPU*s){
/* 1803dc086: cmp ebx, eax */
L_1803dc086_0:;
L_1803dc086_1:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803dc086_2:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,8,4)));
L_1803dc086_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,8,4),4,1));
L_1803dc086_4:;
wr(s->u,12,4,(rd(s->r,24,4)-rd(s->u,8,4)));
L_1803dc086_5:;
wr(s->r,519,1,(sx(rd(s->u,12,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc086_6:;
wr(s->r,518,1,(rd(s->u,12,4)==((U)UINT64_C(0x0))));
L_1803dc086_7:;
wr(s->u,2,4,(rd(s->u,12,4)&((U)UINT64_C(0xff))));
L_1803dc086_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dc086_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dc086_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dc086_11:;
/* 1803dc088: jle 0x1803dc098 */
L_1803dc088_0:;
L_1803dc088_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc088_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803dc088_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803dc098);}
L_1803dc088_4:;
return UINT64_C(0x1803dc08a);
}
uint64_t b_1803dc08a(CPU*s){
/* 1803dc08a: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc08a_0:;
L_1803dc08a_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc08a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc08a_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc08a_4:;
/* 1803dc091: call 0x1803da8c0 */
L_1803dc091_0:;
L_1803dc091_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc091_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc096)));
L_1803dc091_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc091_4:;
return UINT64_C(0x1803dc096);
}
uint64_t b_1803dc096(CPU*s){
/* 1803dc096: jmp 0x1803dc0a4 */
L_1803dc096_0:;
L_1803dc096_1:;
return UINT64_C(0x1803dc0a4);
L_1803dc096_2:;
return UINT64_C(0x1803dc098);
}
uint64_t b_1803dc098(CPU*s){
/* 1803dc098: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc098_0:;
L_1803dc098_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc098_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc098_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc098_4:;
/* 1803dc09f: call 0x1803da8e0 */
L_1803dc09f_0:;
L_1803dc09f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc09f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc0a4)));
L_1803dc09f_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dc09f_4:;
return UINT64_C(0x1803dc0a4);
}
uint64_t b_1803dc0a4(CPU*s){
/* 1803dc0a4: movss xmm7, dword ptr [rip + 0x270b98] */
L_1803dc0a4_0:;
L_1803dc0a4_1:;
wr(s->r,5056,4,mr(UINT64_C(0x18064cc44),4));
L_1803dc0a4_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803dc0a4_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803dc0a4_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803dc0a4_5:;
/* 1803dc0ac: mov rcx, qword ptr [rdi + 0x6710] */
L_1803dc0ac_0:;
L_1803dc0ac_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x6710))));
L_1803dc0ac_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc0ac_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dc0ac_4:;
/* 1803dc0b3: movss xmm2, dword ptr [rdi + 0x24] */
L_1803dc0b3_0:;
L_1803dc0b3_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x24))));
L_1803dc0b3_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc0b3_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803dc0b3_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803dc0b3_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803dc0b3_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803dc0b3_7:;
/* 1803dc0b8: mov edx, eax */
L_1803dc0b8_0:;
L_1803dc0b8_1:;
wr(s->r,16,4,rd(s->r,0,4));
L_1803dc0b8_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc0b8_3:;
/* 1803dc0ba: movaps xmm3, xmm7 */
L_1803dc0ba_0:;
L_1803dc0ba_1:;
wr(s->r,4800,4,rd(s->r,5056,4));
L_1803dc0ba_2:;
wr(s->r,4804,4,rd(s->r,5060,4));
L_1803dc0ba_3:;
wr(s->r,4808,4,rd(s->r,5064,4));
L_1803dc0ba_4:;
wr(s->r,4812,4,rd(s->r,5068,4));
L_1803dc0ba_5:;
/* 1803dc0bd: call 0x1803e1b50 */
L_1803dc0bd_0:;
L_1803dc0bd_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc0bd_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc0c2)));
L_1803dc0bd_3:;
return (uint64_t)UINT64_C(0x1803e1b50);
L_1803dc0bd_4:;
return UINT64_C(0x1803dc0c2);
}
uint64_t b_1803dc0c2(CPU*s){
/* 1803dc0c2: mov r15d, eax */
L_1803dc0c2_0:;
L_1803dc0c2_1:;
wr(s->r,184,4,rd(s->r,0,4));
L_1803dc0c2_2:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803dc0c2_3:;
/* 1803dc0c5: jmp 0x1803dc116 */
L_1803dc0c5_0:;
L_1803dc0c5_1:;
return UINT64_C(0x1803dc116);
L_1803dc0c5_2:;
return UINT64_C(0x1803dc0c7);
}
uint64_t b_1803dc0c7(CPU*s){
/* 1803dc0c7: mov eax, dword ptr [rdi + 0x80] */
L_1803dc0c7_0:;
L_1803dc0c7_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x80))));
L_1803dc0c7_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dc0c7_3:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803dc0c7_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc0c7_5:;
/* 1803dc0cd: movss xmm7, dword ptr [rip + 0x270b6f] */
L_1803dc0cd_0:;
L_1803dc0cd_1:;
wr(s->r,5056,4,mr(UINT64_C(0x18064cc44),4));
L_1803dc0cd_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803dc0cd_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803dc0cd_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803dc0cd_5:;
/* 1803dc0d5: mov rcx, qword ptr [rdi + 0x6710] */
L_1803dc0d5_0:;
L_1803dc0d5_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x6710))));
L_1803dc0d5_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc0d5_3:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803dc0d5_4:;
/* 1803dc0dc: movss xmm2, dword ptr [rdi + 0x24] */
L_1803dc0dc_0:;
L_1803dc0dc_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x24))));
L_1803dc0dc_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc0dc_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803dc0dc_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803dc0dc_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803dc0dc_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803dc0dc_7:;
/* 1803dc0e1: lea edx, [rbx + rax] */
L_1803dc0e1_0:;
L_1803dc0e1_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dc0e1_2:;
wr(s->u,24,8,(rd(s->r,24,8)+rd(s->u,16,8)));
L_1803dc0e1_3:;
wr(s->r,16,4,(rd(s->u,24,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc0e1_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc0e1_5:;
/* 1803dc0e4: movaps xmm3, xmm7 */
L_1803dc0e4_0:;
L_1803dc0e4_1:;
wr(s->r,4800,4,rd(s->r,5056,4));
L_1803dc0e4_2:;
wr(s->r,4804,4,rd(s->r,5060,4));
L_1803dc0e4_3:;
wr(s->r,4808,4,rd(s->r,5064,4));
L_1803dc0e4_4:;
wr(s->r,4812,4,rd(s->r,5068,4));
L_1803dc0e4_5:;
/* 1803dc0e7: call 0x1803e1b50 */
L_1803dc0e7_0:;
L_1803dc0e7_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc0e7_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc0ec)));
L_1803dc0e7_3:;
return (uint64_t)UINT64_C(0x1803e1b50);
L_1803dc0e7_4:;
return UINT64_C(0x1803dc0ec);
}
uint64_t b_1803dc0ec(CPU*s){
/* 1803dc0ec: cmp r14d, eax */
L_1803dc0ec_0:;
L_1803dc0ec_1:;
wr(s->u,7,4,rd(s->r,0,4));
L_1803dc0ec_2:;
wr(s->r,512,1,(rd(s->r,176,4)<rd(s->u,7,4)));
L_1803dc0ec_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,176,4),rd(s->u,7,4),4,1));
L_1803dc0ec_4:;
wr(s->u,11,4,(rd(s->r,176,4)-rd(s->u,7,4)));
L_1803dc0ec_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc0ec_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803dc0ec_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803dc0ec_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803dc0ec_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803dc0ec_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803dc0ec_11:;
/* 1803dc0ef: jge 0x1803dc0f6 */
L_1803dc0ef_0:;
L_1803dc0ef_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dc0ef_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dc0f6);}
L_1803dc0ef_3:;
return UINT64_C(0x1803dc0f1);
}
uint64_t b_1803dc0f1(CPU*s){
/* 1803dc0f1: mov r15d, r14d */
L_1803dc0f1_0:;
L_1803dc0f1_1:;
wr(s->r,184,4,rd(s->r,176,4));
L_1803dc0f1_2:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803dc0f1_3:;
/* 1803dc0f4: jmp 0x1803dc116 */
L_1803dc0f4_0:;
L_1803dc0f4_1:;
return UINT64_C(0x1803dc116);
L_1803dc0f4_2:;
return UINT64_C(0x1803dc0f6);
}
uint64_t b_1803dc0f6(CPU*s){
/* 1803dc0f6: mov eax, dword ptr [rdi + 0x80] */
L_1803dc0f6_0:;
L_1803dc0f6_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x80))));
L_1803dc0f6_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dc0f6_3:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803dc0f6_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc0f6_5:;
/* 1803dc0fc: mov rcx, qword ptr [rdi + 0x6710] */
L_1803dc0fc_0:;
L_1803dc0fc_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x6710))));
L_1803dc0fc_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc0fc_3:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803dc0fc_4:;
/* 1803dc103: movss xmm2, dword ptr [rdi + 0x24] */
L_1803dc103_0:;
L_1803dc103_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x24))));
L_1803dc103_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc103_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803dc103_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803dc103_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803dc103_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803dc103_7:;
/* 1803dc108: lea edx, [rbx + rax] */
L_1803dc108_0:;
L_1803dc108_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dc108_2:;
wr(s->u,24,8,(rd(s->r,24,8)+rd(s->u,16,8)));
L_1803dc108_3:;
wr(s->r,16,4,(rd(s->u,24,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc108_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc108_5:;
/* 1803dc10b: movaps xmm3, xmm7 */
L_1803dc10b_0:;
L_1803dc10b_1:;
wr(s->r,4800,4,rd(s->r,5056,4));
L_1803dc10b_2:;
wr(s->r,4804,4,rd(s->r,5060,4));
L_1803dc10b_3:;
wr(s->r,4808,4,rd(s->r,5064,4));
L_1803dc10b_4:;
wr(s->r,4812,4,rd(s->r,5068,4));
L_1803dc10b_5:;
/* 1803dc10e: call 0x1803e1b50 */
L_1803dc10e_0:;
L_1803dc10e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc10e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc113)));
L_1803dc10e_3:;
return (uint64_t)UINT64_C(0x1803e1b50);
L_1803dc10e_4:;
return UINT64_C(0x1803dc113);
}
uint64_t b_1803dc113(CPU*s){
/* 1803dc113: mov r15d, eax */
L_1803dc113_0:;
L_1803dc113_1:;
wr(s->r,184,4,rd(s->r,0,4));
L_1803dc113_2:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803dc113_3:;
/* 1803dc116: xor r10d, r10d */
L_1803dc116_0:;
L_1803dc116_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dc116_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc116_3:;
wr(s->r,144,4,(rd(s->r,144,4)^rd(s->r,144,4)));
L_1803dc116_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803dc116_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc116_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803dc116_7:;
wr(s->u,2,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803dc116_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dc116_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dc116_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dc116_11:;
/* 1803dc119: xor r9d, r9d */
L_1803dc119_0:;
L_1803dc119_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dc119_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc119_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803dc119_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dc119_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc119_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dc119_7:;
wr(s->u,2,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dc119_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dc119_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dc119_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dc119_11:;
/* 1803dc11c: movsxd r11, r15d */
L_1803dc11c_0:;
L_1803dc11c_1:;
wr(s->r,152,8,(U)sx(rd(s->r,184,4),4));
L_1803dc11c_2:;
/* 1803dc11f: test r15d, r15d */
L_1803dc11f_0:;
L_1803dc11f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dc11f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc11f_3:;
wr(s->u,8,4,(rd(s->r,184,4)&rd(s->r,184,4)));
L_1803dc11f_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc11f_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803dc11f_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803dc11f_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dc11f_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dc11f_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dc11f_10:;
/* 1803dc122: jle 0x1803dc159 */
L_1803dc122_0:;
L_1803dc122_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc122_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803dc122_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803dc159);}
L_1803dc122_4:;
return UINT64_C(0x1803dc124);
}
uint64_t b_1803dc116(CPU*s){
/* 1803dc116: xor r10d, r10d */
L_1803dc116_0:;
L_1803dc116_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dc116_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc116_3:;
wr(s->r,144,4,(rd(s->r,144,4)^rd(s->r,144,4)));
L_1803dc116_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803dc116_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc116_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803dc116_7:;
wr(s->u,2,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803dc116_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dc116_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dc116_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dc116_11:;
/* 1803dc119: xor r9d, r9d */
L_1803dc119_0:;
L_1803dc119_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dc119_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc119_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803dc119_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dc119_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc119_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dc119_7:;
wr(s->u,2,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dc119_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dc119_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dc119_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dc119_11:;
/* 1803dc11c: movsxd r11, r15d */
L_1803dc11c_0:;
L_1803dc11c_1:;
wr(s->r,152,8,(U)sx(rd(s->r,184,4),4));
L_1803dc11c_2:;
/* 1803dc11f: test r15d, r15d */
L_1803dc11f_0:;
L_1803dc11f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dc11f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc11f_3:;
wr(s->u,8,4,(rd(s->r,184,4)&rd(s->r,184,4)));
L_1803dc11f_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc11f_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803dc11f_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803dc11f_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dc11f_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dc11f_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dc11f_10:;
/* 1803dc122: jle 0x1803dc159 */
L_1803dc122_0:;
L_1803dc122_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc122_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803dc122_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803dc159);}
L_1803dc122_4:;
return UINT64_C(0x1803dc124);
}
uint64_t b_1803dc124(CPU*s){
/* 1803dc124: xor edx, edx */
L_1803dc124_0:;
L_1803dc124_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dc124_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc124_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dc124_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc124_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc124_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc124_7:;
wr(s->u,14,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc124_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803dc124_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803dc124_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803dc124_11:;
/* 1803dc126: cmp dword ptr [rdi + 0x30], edx */
L_1803dc126_0:;
L_1803dc126_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc126_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc126_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803dc126_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,16,4)));
L_1803dc126_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,16,4),4,1));
L_1803dc126_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,16,4)));
L_1803dc126_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc126_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803dc126_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803dc126_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803dc126_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803dc126_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803dc126_13:;
/* 1803dc129: jle 0x1803dc151 */
L_1803dc129_0:;
L_1803dc129_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc129_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803dc129_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803dc151);}
L_1803dc129_4:;
return UINT64_C(0x1803dc12b);
}
uint64_t b_1803dc12b(CPU*s){
/* 1803dc12b: mov r8, r12 */
L_1803dc12b_0:;
L_1803dc12b_1:;
wr(s->r,128,8,rd(s->r,160,8));
L_1803dc12b_2:;
/* 1803dc12e: nop  */
L_1803dc12e_0:;
L_1803dc12e_1:;
/* 1803dc130: mov rax, qword ptr [r8] */
L_1803dc130_0:;
L_1803dc130_1:;
wr(s->u,64,8,mr((uint64_t)rd(s->r,128,8),8));
L_1803dc130_2:;
wr(s->r,0,8,rd(s->u,64,8));
L_1803dc130_3:;
/* 1803dc133: mov rcx, qword ptr [rdi + 0xe0] */
L_1803dc133_0:;
L_1803dc133_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0xe0))));
L_1803dc133_2:;
wr(s->u,64,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc133_3:;
wr(s->r,8,8,rd(s->u,64,8));
L_1803dc133_4:;
/* 1803dc13a: inc edx */
L_1803dc13a_0:;
L_1803dc13a_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803dc13a_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803dc13a_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc13a_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc13a_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc13a_6:;
wr(s->u,73,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc13a_7:;
wr(s->u,81,1,pop(rd(s->u,73,4),4));
L_1803dc13a_8:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803dc13a_9:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803dc13a_10:;
/* 1803dc13c: mov eax, dword ptr [rax + r10*4] */
L_1803dc13c_0:;
L_1803dc13c_1:;
wr(s->u,16,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803dc13c_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dc13c_3:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dc13c_4:;
wr(s->r,0,4,rd(s->u,60,4));
L_1803dc13c_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc13c_6:;
/* 1803dc140: inc r9 */
L_1803dc140_0:;
L_1803dc140_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x1)),8,0));
L_1803dc140_2:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x1))));
L_1803dc140_3:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc140_4:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dc140_5:;
wr(s->u,73,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dc140_6:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803dc140_7:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803dc140_8:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803dc140_9:;
/* 1803dc143: add r8, 8 */
L_1803dc143_0:;
L_1803dc143_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803dc143_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803dc143_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803dc143_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc143_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dc143_6:;
wr(s->u,73,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dc143_7:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803dc143_8:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803dc143_9:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803dc143_10:;
/* 1803dc147: mov dword ptr [rcx + r9*4 - 4], eax */
L_1803dc147_0:;
L_1803dc147_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,8,8)));
L_1803dc147_2:;
wr(s->u,40,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803dc147_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803dc147_4:;
wr(s->u,56,4,rd(s->r,0,4));
L_1803dc147_5:;
mw((uint64_t)rd(s->u,48,8),4,rd(s->u,56,4));
L_1803dc147_6:;
/* 1803dc14c: cmp edx, dword ptr [rdi + 0x30] */
L_1803dc14c_0:;
L_1803dc14c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc14c_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc14c_3:;
wr(s->u,83,4,rd(s->u,56,4));
L_1803dc14c_4:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,83,4)));
L_1803dc14c_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,83,4),4,1));
L_1803dc14c_6:;
wr(s->u,87,4,(rd(s->r,16,4)-rd(s->u,83,4)));
L_1803dc14c_7:;
wr(s->r,519,1,(sx(rd(s->u,87,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc14c_8:;
wr(s->r,518,1,(rd(s->u,87,4)==((U)UINT64_C(0x0))));
L_1803dc14c_9:;
wr(s->u,73,4,(rd(s->u,87,4)&((U)UINT64_C(0xff))));
L_1803dc14c_10:;
wr(s->u,81,1,pop(rd(s->u,73,4),4));
L_1803dc14c_11:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803dc14c_12:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803dc14c_13:;
/* 1803dc14f: jl 0x1803dc130 */
L_1803dc14f_0:;
L_1803dc14f_1:;
wr(s->u,72,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc14f_2:;
if(rd(s->u,72,1)){goto L_1803dc130_0;}
L_1803dc14f_3:;
return UINT64_C(0x1803dc151);
}
uint64_t b_1803dc130(CPU*s){
/* 1803dc130: mov rax, qword ptr [r8] */
L_1803dc130_0:;
L_1803dc130_1:;
wr(s->u,64,8,mr((uint64_t)rd(s->r,128,8),8));
L_1803dc130_2:;
wr(s->r,0,8,rd(s->u,64,8));
L_1803dc130_3:;
/* 1803dc133: mov rcx, qword ptr [rdi + 0xe0] */
L_1803dc133_0:;
L_1803dc133_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0xe0))));
L_1803dc133_2:;
wr(s->u,64,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc133_3:;
wr(s->r,8,8,rd(s->u,64,8));
L_1803dc133_4:;
/* 1803dc13a: inc edx */
L_1803dc13a_0:;
L_1803dc13a_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803dc13a_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803dc13a_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc13a_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc13a_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc13a_6:;
wr(s->u,73,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc13a_7:;
wr(s->u,81,1,pop(rd(s->u,73,4),4));
L_1803dc13a_8:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803dc13a_9:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803dc13a_10:;
/* 1803dc13c: mov eax, dword ptr [rax + r10*4] */
L_1803dc13c_0:;
L_1803dc13c_1:;
wr(s->u,16,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803dc13c_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dc13c_3:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dc13c_4:;
wr(s->r,0,4,rd(s->u,60,4));
L_1803dc13c_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc13c_6:;
/* 1803dc140: inc r9 */
L_1803dc140_0:;
L_1803dc140_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x1)),8,0));
L_1803dc140_2:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x1))));
L_1803dc140_3:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc140_4:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dc140_5:;
wr(s->u,73,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dc140_6:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803dc140_7:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803dc140_8:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803dc140_9:;
/* 1803dc143: add r8, 8 */
L_1803dc143_0:;
L_1803dc143_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803dc143_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803dc143_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803dc143_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc143_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dc143_6:;
wr(s->u,73,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dc143_7:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803dc143_8:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803dc143_9:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803dc143_10:;
/* 1803dc147: mov dword ptr [rcx + r9*4 - 4], eax */
L_1803dc147_0:;
L_1803dc147_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,8,8)));
L_1803dc147_2:;
wr(s->u,40,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803dc147_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803dc147_4:;
wr(s->u,56,4,rd(s->r,0,4));
L_1803dc147_5:;
mw((uint64_t)rd(s->u,48,8),4,rd(s->u,56,4));
L_1803dc147_6:;
/* 1803dc14c: cmp edx, dword ptr [rdi + 0x30] */
L_1803dc14c_0:;
L_1803dc14c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc14c_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc14c_3:;
wr(s->u,83,4,rd(s->u,56,4));
L_1803dc14c_4:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,83,4)));
L_1803dc14c_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,83,4),4,1));
L_1803dc14c_6:;
wr(s->u,87,4,(rd(s->r,16,4)-rd(s->u,83,4)));
L_1803dc14c_7:;
wr(s->r,519,1,(sx(rd(s->u,87,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc14c_8:;
wr(s->r,518,1,(rd(s->u,87,4)==((U)UINT64_C(0x0))));
L_1803dc14c_9:;
wr(s->u,73,4,(rd(s->u,87,4)&((U)UINT64_C(0xff))));
L_1803dc14c_10:;
wr(s->u,81,1,pop(rd(s->u,73,4),4));
L_1803dc14c_11:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803dc14c_12:;
wr(s->r,514,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803dc14c_13:;
/* 1803dc14f: jl 0x1803dc130 */
L_1803dc14f_0:;
L_1803dc14f_1:;
wr(s->u,72,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc14f_2:;
if(rd(s->u,72,1)){goto L_1803dc130_0;}
L_1803dc14f_3:;
return UINT64_C(0x1803dc151);
}
uint64_t b_1803dc151(CPU*s){
/* 1803dc151: inc r10 */
L_1803dc151_0:;
L_1803dc151_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x1)),8,0));
L_1803dc151_2:;
wr(s->r,144,8,(rd(s->r,144,8)+((U)UINT64_C(0x1))));
L_1803dc151_3:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc151_4:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803dc151_5:;
wr(s->u,1,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803dc151_6:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803dc151_7:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803dc151_8:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803dc151_9:;
/* 1803dc154: cmp r10, r11 */
L_1803dc154_0:;
L_1803dc154_1:;
wr(s->u,11,8,rd(s->r,152,8));
L_1803dc154_2:;
wr(s->r,512,1,(rd(s->r,144,8)<rd(s->u,11,8)));
L_1803dc154_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->u,11,8),8,1));
L_1803dc154_4:;
wr(s->u,19,8,(rd(s->r,144,8)-rd(s->u,11,8)));
L_1803dc154_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc154_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803dc154_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803dc154_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803dc154_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803dc154_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803dc154_11:;
/* 1803dc157: jl 0x1803dc124 */
L_1803dc157_0:;
L_1803dc157_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc157_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dc124);}
L_1803dc157_3:;
return UINT64_C(0x1803dc159);
}
uint64_t b_1803dc159(CPU*s){
/* 1803dc159: mov rdx, qword ptr [rdi + 0xe0] */
L_1803dc159_0:;
L_1803dc159_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0xe0))));
L_1803dc159_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc159_3:;
wr(s->r,16,8,rd(s->u,32,8));
L_1803dc159_4:;
/* 1803dc160: mov eax, dword ptr [rdi + 0x30] */
L_1803dc160_0:;
L_1803dc160_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc160_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc160_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803dc160_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc160_5:;
/* 1803dc163: mov rcx, qword ptr [rdi + 0x6710] */
L_1803dc163_0:;
L_1803dc163_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x6710))));
L_1803dc163_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc163_3:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803dc163_4:;
/* 1803dc16a: movss xmm3, dword ptr [rdi + 0x24] */
L_1803dc16a_0:;
L_1803dc16a_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x24))));
L_1803dc16a_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc16a_3:;
wr(s->r,4800,4,rd(s->u,24,4));
L_1803dc16a_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803dc16a_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803dc16a_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803dc16a_7:;
/* 1803dc16f: mov dword ptr [rsp + 0x30], r15d */
L_1803dc16f_0:;
L_1803dc16f_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dc16f_2:;
wr(s->u,24,4,rd(s->r,184,4));
L_1803dc16f_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dc16f_4:;
/* 1803dc174: mov dword ptr [rsp + 0x28], eax */
L_1803dc174_0:;
L_1803dc174_1:;
wr(s->u,16,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803dc174_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803dc174_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dc174_4:;
/* 1803dc178: mov r8, rdx */
L_1803dc178_0:;
L_1803dc178_1:;
wr(s->r,128,8,rd(s->r,16,8));
L_1803dc178_2:;
/* 1803dc17b: movss dword ptr [rsp + 0x20], xmm7 */
L_1803dc17b_0:;
L_1803dc17b_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dc17b_2:;
wr(s->u,24,4,rd(s->r,5056,4));
L_1803dc17b_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dc17b_4:;
/* 1803dc181: call 0x1803e1910 */
L_1803dc181_0:;
L_1803dc181_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc181_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc186)));
L_1803dc181_3:;
return (uint64_t)UINT64_C(0x1803e1910);
L_1803dc181_4:;
return UINT64_C(0x1803dc186);
}
uint64_t b_1803dc186(CPU*s){
/* 1803dc186: mov ecx, dword ptr [rdi + 0x80] */
L_1803dc186_0:;
L_1803dc186_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x80))));
L_1803dc186_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dc186_3:;
wr(s->r,8,4,rd(s->u,20,4));
L_1803dc186_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc186_5:;
/* 1803dc18c: movss xmm2, dword ptr [rdi + 0x24] */
L_1803dc18c_0:;
L_1803dc18c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x24))));
L_1803dc18c_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc18c_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803dc18c_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803dc18c_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803dc18c_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803dc18c_7:;
/* 1803dc191: movaps xmm6, xmm7 */
L_1803dc191_0:;
L_1803dc191_1:;
wr(s->r,4992,4,rd(s->r,5056,4));
L_1803dc191_2:;
wr(s->r,4996,4,rd(s->r,5060,4));
L_1803dc191_3:;
wr(s->r,5000,4,rd(s->r,5064,4));
L_1803dc191_4:;
wr(s->r,5004,4,rd(s->r,5068,4));
L_1803dc191_5:;
/* 1803dc194: movaps xmm3, xmm7 */
L_1803dc194_0:;
L_1803dc194_1:;
wr(s->r,4800,4,rd(s->r,5056,4));
L_1803dc194_2:;
wr(s->r,4804,4,rd(s->r,5060,4));
L_1803dc194_3:;
wr(s->r,4808,4,rd(s->r,5064,4));
L_1803dc194_4:;
wr(s->r,4812,4,rd(s->r,5068,4));
L_1803dc194_5:;
/* 1803dc197: mov edx, eax */
L_1803dc197_0:;
L_1803dc197_1:;
wr(s->r,16,4,rd(s->r,0,4));
L_1803dc197_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc197_3:;
/* 1803dc199: mov ebp, eax */
L_1803dc199_0:;
L_1803dc199_1:;
wr(s->r,40,4,rd(s->r,0,4));
L_1803dc199_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803dc199_3:;
/* 1803dc19b: sar edx, 1 */
L_1803dc19b_0:;
L_1803dc19b_1:;
wr(s->u,52,4,(rd(s->r,16,4)&((U)UINT64_C(0x1))));
L_1803dc19b_2:;
wr(s->r,512,1,(rd(s->u,52,4)!=((U)UINT64_C(0x0))));
L_1803dc19b_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc19b_4:;
wr(s->r,16,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,16,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,16,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc19b_5:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc19b_6:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc19b_7:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc19b_8:;
wr(s->u,33,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc19b_9:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803dc19b_10:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803dc19b_11:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803dc19b_12:;
/* 1803dc19d: cmp ecx, edx */
L_1803dc19d_0:;
L_1803dc19d_1:;
wr(s->u,44,4,rd(s->r,16,4));
L_1803dc19d_2:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,44,4)));
L_1803dc19d_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,44,4),4,1));
L_1803dc19d_4:;
wr(s->u,48,4,(rd(s->r,8,4)-rd(s->u,44,4)));
L_1803dc19d_5:;
wr(s->r,519,1,(sx(rd(s->u,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc19d_6:;
wr(s->r,518,1,(rd(s->u,48,4)==((U)UINT64_C(0x0))));
L_1803dc19d_7:;
wr(s->u,33,4,(rd(s->u,48,4)&((U)UINT64_C(0xff))));
L_1803dc19d_8:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803dc19d_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803dc19d_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803dc19d_11:;
/* 1803dc19f: cmovl edx, ecx */
L_1803dc19f_0:;
L_1803dc19f_1:;
wr(s->u,32,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc19f_2:;
wr(s->u,39,4,rd(s->r,8,4));
L_1803dc19f_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc19f_4:;
wr(s->u,43,1,(!rd(s->u,32,1)));
L_1803dc19f_5:;
if(rd(s->u,43,1)){goto L_1803dc1a2_0;}
L_1803dc19f_6:;
wr(s->r,16,4,rd(s->u,39,4));
L_1803dc19f_7:;
/* 1803dc1a2: mov rcx, qword ptr [rdi + 0x6710] */
L_1803dc1a2_0:;
L_1803dc1a2_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x6710))));
L_1803dc1a2_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc1a2_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803dc1a2_4:;
/* 1803dc1a9: mov dword ptr [rdi + 0x80], edx */
L_1803dc1a9_0:;
L_1803dc1a9_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x80))));
L_1803dc1a9_2:;
wr(s->u,16,4,rd(s->r,16,4));
L_1803dc1a9_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dc1a9_4:;
/* 1803dc1af: sub ebp, edx */
L_1803dc1af_0:;
L_1803dc1af_1:;
wr(s->r,512,1,(rd(s->r,40,4)<rd(s->r,16,4)));
L_1803dc1af_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->r,16,4),4,1));
L_1803dc1af_3:;
wr(s->r,40,4,(rd(s->r,40,4)-rd(s->r,16,4)));
L_1803dc1af_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803dc1af_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc1af_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803dc1af_7:;
wr(s->u,33,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803dc1af_8:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803dc1af_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803dc1af_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803dc1af_11:;
/* 1803dc1b1: movd xmm0, edx */
L_1803dc1b1_0:;
L_1803dc1b1_1:;
wr(s->r,4608,16,rd(s->r,16,4));
L_1803dc1b1_2:;
/* 1803dc1b5: cvtdq2ps xmm0, xmm0 */
L_1803dc1b5_0:;
L_1803dc1b5_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dc1b5_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dc1b5_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dc1b5_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dc1b5_5:;
/* 1803dc1b8: divss xmm6, xmm0 */
L_1803dc1b8_0:;
L_1803dc1b8_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)/fv(rd(s->r,4608,4),4),4));
L_1803dc1b8_2:;
/* 1803dc1bc: call 0x1803e1b50 */
L_1803dc1bc_0:;
L_1803dc1bc_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc1bc_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc1c1)));
L_1803dc1bc_3:;
return (uint64_t)UINT64_C(0x1803e1b50);
L_1803dc1bc_4:;
return UINT64_C(0x1803dc1c1);
}
uint64_t b_1803dc1a2(CPU*s){
/* 1803dc1a2: mov rcx, qword ptr [rdi + 0x6710] */
L_1803dc1a2_0:;
L_1803dc1a2_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x6710))));
L_1803dc1a2_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc1a2_3:;
wr(s->r,8,8,rd(s->u,12,8));
L_1803dc1a2_4:;
/* 1803dc1a9: mov dword ptr [rdi + 0x80], edx */
L_1803dc1a9_0:;
L_1803dc1a9_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x80))));
L_1803dc1a9_2:;
wr(s->u,8,4,rd(s->r,16,4));
L_1803dc1a9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dc1a9_4:;
/* 1803dc1af: sub ebp, edx */
L_1803dc1af_0:;
L_1803dc1af_1:;
wr(s->r,512,1,(rd(s->r,40,4)<rd(s->r,16,4)));
L_1803dc1af_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->r,16,4),4,1));
L_1803dc1af_3:;
wr(s->r,40,4,(rd(s->r,40,4)-rd(s->r,16,4)));
L_1803dc1af_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803dc1af_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc1af_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803dc1af_7:;
wr(s->u,20,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803dc1af_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803dc1af_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dc1af_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dc1af_11:;
/* 1803dc1b1: movd xmm0, edx */
L_1803dc1b1_0:;
L_1803dc1b1_1:;
wr(s->r,4608,16,rd(s->r,16,4));
L_1803dc1b1_2:;
/* 1803dc1b5: cvtdq2ps xmm0, xmm0 */
L_1803dc1b5_0:;
L_1803dc1b5_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dc1b5_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dc1b5_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dc1b5_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dc1b5_5:;
/* 1803dc1b8: divss xmm6, xmm0 */
L_1803dc1b8_0:;
L_1803dc1b8_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)/fv(rd(s->r,4608,4),4),4));
L_1803dc1b8_2:;
/* 1803dc1bc: call 0x1803e1b50 */
L_1803dc1bc_0:;
L_1803dc1bc_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc1bc_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc1c1)));
L_1803dc1bc_3:;
return (uint64_t)UINT64_C(0x1803e1b50);
L_1803dc1bc_4:;
return UINT64_C(0x1803dc1c1);
}
uint64_t b_1803dc1c1(CPU*s){
/* 1803dc1c1: xor r12d, r12d */
L_1803dc1c1_0:;
L_1803dc1c1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dc1c1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc1c1_3:;
wr(s->r,160,4,(rd(s->r,160,4)^rd(s->r,160,4)));
L_1803dc1c1_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803dc1c1_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc1c1_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803dc1c1_7:;
wr(s->u,18,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803dc1c1_8:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803dc1c1_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803dc1c1_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803dc1c1_11:;
/* 1803dc1c4: sub r15d, eax */
L_1803dc1c4_0:;
L_1803dc1c4_1:;
wr(s->r,512,1,(rd(s->r,184,4)<rd(s->r,0,4)));
L_1803dc1c4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,4),rd(s->r,0,4),4,1));
L_1803dc1c4_3:;
wr(s->r,184,4,(rd(s->r,184,4)-rd(s->r,0,4)));
L_1803dc1c4_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803dc1c4_5:;
wr(s->r,519,1,(sx(rd(s->r,184,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc1c4_6:;
wr(s->r,518,1,(rd(s->r,184,4)==((U)UINT64_C(0x0))));
L_1803dc1c4_7:;
wr(s->u,18,4,(rd(s->r,184,4)&((U)UINT64_C(0xff))));
L_1803dc1c4_8:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803dc1c4_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803dc1c4_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803dc1c4_11:;
/* 1803dc1c7: cmp dword ptr [rdi + 0x30], r12d */
L_1803dc1c7_0:;
L_1803dc1c7_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc1c7_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc1c7_3:;
wr(s->u,24,4,rd(s->u,12,4));
L_1803dc1c7_4:;
wr(s->r,512,1,(rd(s->u,24,4)<rd(s->r,160,4)));
L_1803dc1c7_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,24,4),rd(s->r,160,4),4,1));
L_1803dc1c7_6:;
wr(s->u,28,4,(rd(s->u,24,4)-rd(s->r,160,4)));
L_1803dc1c7_7:;
wr(s->r,519,1,(sx(rd(s->u,28,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc1c7_8:;
wr(s->r,518,1,(rd(s->u,28,4)==((U)UINT64_C(0x0))));
L_1803dc1c7_9:;
wr(s->u,18,4,(rd(s->u,28,4)&((U)UINT64_C(0xff))));
L_1803dc1c7_10:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803dc1c7_11:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803dc1c7_12:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803dc1c7_13:;
/* 1803dc1cb: mov dword ptr [rdi + 0x78], r12d */
L_1803dc1cb_0:;
L_1803dc1cb_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x78))));
L_1803dc1cb_2:;
wr(s->u,8,4,rd(s->r,160,4));
L_1803dc1cb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dc1cb_4:;
/* 1803dc1cf: mov r11d, r12d */
L_1803dc1cf_0:;
L_1803dc1cf_1:;
wr(s->r,152,4,rd(s->r,160,4));
L_1803dc1cf_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dc1cf_3:;
/* 1803dc1d2: movsxd rbx, ebp */
L_1803dc1d2_0:;
L_1803dc1d2_1:;
wr(s->r,24,8,(U)sx(rd(s->r,40,4),4));
L_1803dc1d2_2:;
/* 1803dc1d5: jle 0x1803dc31c */
L_1803dc1d5_0:;
L_1803dc1d5_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc1d5_2:;
wr(s->u,17,1,((rd(s->r,518,1)!=0)||(rd(s->u,16,1)!=0)));
L_1803dc1d5_3:;
if(rd(s->u,17,1)){return UINT64_C(0x1803dc31c);}
L_1803dc1d5_4:;
return UINT64_C(0x1803dc1db);
}
uint64_t b_1803dc1db(CPU*s){
/* 1803dc1db: lea rsi, [rdi + 0x6f0] */
L_1803dc1db_0:;
L_1803dc1db_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x6f0))));
L_1803dc1db_2:;
wr(s->r,48,8,rd(s->u,0,8));
L_1803dc1db_3:;
/* 1803dc1e2: nop word ptr [rax + rax] */
L_1803dc1e2_0:;
L_1803dc1e2_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dc1e2_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803dc1e2_3:;
/* 1803dc1f0: cmp rbx, 4 */
L_1803dc1f0_0:;
L_1803dc1f0_1:;
wr(s->u,35,8,rd(s->r,24,8));
L_1803dc1f0_2:;
wr(s->r,512,1,(rd(s->u,35,8)<((U)UINT64_C(0x4))));
L_1803dc1f0_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,35,8),((U)UINT64_C(0x4)),8,1));
L_1803dc1f0_4:;
wr(s->u,43,8,(rd(s->u,35,8)-((U)UINT64_C(0x4))));
L_1803dc1f0_5:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc1f0_6:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1803dc1f0_7:;
wr(s->u,25,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1803dc1f0_8:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803dc1f0_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803dc1f0_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803dc1f0_11:;
/* 1803dc1f4: mov edx, r11d */
L_1803dc1f4_0:;
L_1803dc1f4_1:;
wr(s->r,16,4,rd(s->r,152,4));
L_1803dc1f4_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc1f4_3:;
/* 1803dc1f7: mov r10, r12 */
L_1803dc1f7_0:;
L_1803dc1f7_1:;
wr(s->r,144,8,rd(s->r,160,8));
L_1803dc1f7_2:;
/* 1803dc1fa: jl 0x1803dc27a */
L_1803dc1fa_0:;
L_1803dc1fa_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc1fa_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803dc27a);}
L_1803dc1fa_3:;
return UINT64_C(0x1803dc200);
}
uint64_t b_1803dc1f0(CPU*s){
/* 1803dc1f0: cmp rbx, 4 */
L_1803dc1f0_0:;
L_1803dc1f0_1:;
wr(s->u,11,8,rd(s->r,24,8));
L_1803dc1f0_2:;
wr(s->r,512,1,(rd(s->u,11,8)<((U)UINT64_C(0x4))));
L_1803dc1f0_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,11,8),((U)UINT64_C(0x4)),8,1));
L_1803dc1f0_4:;
wr(s->u,19,8,(rd(s->u,11,8)-((U)UINT64_C(0x4))));
L_1803dc1f0_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc1f0_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803dc1f0_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803dc1f0_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803dc1f0_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803dc1f0_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803dc1f0_11:;
/* 1803dc1f4: mov edx, r11d */
L_1803dc1f4_0:;
L_1803dc1f4_1:;
wr(s->r,16,4,rd(s->r,152,4));
L_1803dc1f4_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc1f4_3:;
/* 1803dc1f7: mov r10, r12 */
L_1803dc1f7_0:;
L_1803dc1f7_1:;
wr(s->r,144,8,rd(s->r,160,8));
L_1803dc1f7_2:;
/* 1803dc1fa: jl 0x1803dc27a */
L_1803dc1fa_0:;
L_1803dc1fa_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc1fa_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dc27a);}
L_1803dc1fa_3:;
return UINT64_C(0x1803dc200);
}
uint64_t b_1803dc200(CPU*s){
/* 1803dc200: mov r8, qword ptr [r13] */
L_1803dc200_0:;
L_1803dc200_1:;
wr(s->u,69,8,mr((uint64_t)rd(s->r,168,8),8));
L_1803dc200_2:;
wr(s->r,128,8,rd(s->u,69,8));
L_1803dc200_3:;
/* 1803dc204: lea r9, [rbx - 4] */
L_1803dc204_0:;
L_1803dc204_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dc204_2:;
wr(s->r,136,8,rd(s->u,5,8));
L_1803dc204_3:;
/* 1803dc208: shr r9, 2 */
L_1803dc208_0:;
L_1803dc208_1:;
wr(s->u,135,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803dc208_2:;
wr(s->u,139,8,rd(s->r,136,8));
L_1803dc208_3:;
wr(s->r,136,8,((rd(s->u,135,4)>=64)?0:(rd(s->r,136,8)>>rd(s->u,135,4))));
L_1803dc208_4:;
wr(s->u,111,1,(rd(s->u,135,4)==((U)UINT64_C(0x0))));
L_1803dc208_5:;
wr(s->u,112,4,(rd(s->u,135,4)-((U)UINT64_C(0x1))));
L_1803dc208_6:;
wr(s->u,116,8,((rd(s->u,112,4)>=64)?0:(rd(s->u,139,8)>>rd(s->u,112,4))));
L_1803dc208_7:;
wr(s->u,124,8,(rd(s->u,116,8)&((U)UINT64_C(0x1))));
L_1803dc208_8:;
wr(s->u,132,1,(rd(s->u,124,8)!=((U)UINT64_C(0x0))));
L_1803dc208_9:;
wr(s->u,0,1,rd(s->u,111,1));
L_1803dc208_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dc208_11:;
wr(s->u,2,1,(!rd(s->u,111,1)));
L_1803dc208_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dc208_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,132,1)));
L_1803dc208_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dc208_15:;
wr(s->u,133,1,(rd(s->u,135,4)==((U)UINT64_C(0x1))));
L_1803dc208_16:;
wr(s->u,134,1,(sx(rd(s->u,139,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc208_17:;
wr(s->u,0,1,rd(s->u,133,1));
L_1803dc208_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803dc208_19:;
wr(s->u,2,1,(!rd(s->u,133,1)));
L_1803dc208_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dc208_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,134,1)));
L_1803dc208_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dc208_23:;
wr(s->u,88,1,(rd(s->u,135,4)!=((U)UINT64_C(0x0))));
L_1803dc208_24:;
wr(s->u,89,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc208_25:;
wr(s->u,90,1,(!rd(s->u,88,1)));
L_1803dc208_26:;
wr(s->u,91,1,(rd(s->u,90,1)&rd(s->r,519,1)));
L_1803dc208_27:;
wr(s->u,92,1,(rd(s->u,88,1)&rd(s->u,89,1)));
L_1803dc208_28:;
wr(s->r,519,1,(rd(s->u,91,1)|rd(s->u,92,1)));
L_1803dc208_29:;
wr(s->u,93,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dc208_30:;
wr(s->u,94,1,(!rd(s->u,88,1)));
L_1803dc208_31:;
wr(s->u,95,1,(rd(s->u,94,1)&rd(s->r,518,1)));
L_1803dc208_32:;
wr(s->u,96,1,(rd(s->u,88,1)&rd(s->u,93,1)));
L_1803dc208_33:;
wr(s->r,518,1,(rd(s->u,95,1)|rd(s->u,96,1)));
L_1803dc208_34:;
wr(s->u,97,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dc208_35:;
wr(s->u,105,1,pop(rd(s->u,97,8),8));
L_1803dc208_36:;
wr(s->u,106,1,(rd(s->u,105,1)&((U)UINT64_C(0x1))));
L_1803dc208_37:;
wr(s->u,107,1,(rd(s->u,106,1)==((U)UINT64_C(0x0))));
L_1803dc208_38:;
wr(s->u,108,1,(!rd(s->u,88,1)));
L_1803dc208_39:;
wr(s->u,109,1,(rd(s->u,108,1)&rd(s->r,514,1)));
L_1803dc208_40:;
wr(s->u,110,1,(rd(s->u,88,1)&rd(s->u,107,1)));
L_1803dc208_41:;
wr(s->r,514,1,(rd(s->u,109,1)|rd(s->u,110,1)));
L_1803dc208_42:;
/* 1803dc20c: add r8, 8 */
L_1803dc20c_0:;
L_1803dc20c_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803dc20c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803dc20c_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803dc20c_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc20c_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dc20c_6:;
wr(s->u,78,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dc20c_7:;
wr(s->u,86,1,pop(rd(s->u,78,8),8));
L_1803dc20c_8:;
wr(s->u,87,1,(rd(s->u,86,1)&((U)UINT64_C(0x1))));
L_1803dc20c_9:;
wr(s->r,514,1,(rd(s->u,87,1)==((U)UINT64_C(0x0))));
L_1803dc20c_10:;
/* 1803dc210: inc r9 */
L_1803dc210_0:;
L_1803dc210_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x1)),8,0));
L_1803dc210_2:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x1))));
L_1803dc210_3:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc210_4:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dc210_5:;
wr(s->u,78,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dc210_6:;
wr(s->u,86,1,pop(rd(s->u,78,8),8));
L_1803dc210_7:;
wr(s->u,87,1,(rd(s->u,86,1)&((U)UINT64_C(0x1))));
L_1803dc210_8:;
wr(s->r,514,1,(rd(s->u,87,1)==((U)UINT64_C(0x0))));
L_1803dc210_9:;
/* 1803dc213: lea r10, [r9*4] */
L_1803dc213_0:;
L_1803dc213_1:;
wr(s->u,37,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803dc213_2:;
wr(s->r,144,8,rd(s->u,37,8));
L_1803dc213_3:;
/* 1803dc21b: nop dword ptr [rax + rax] */
L_1803dc21b_0:;
L_1803dc21b_1:;
wr(s->u,45,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dc21b_2:;
wr(s->u,53,8,(rd(s->r,0,8)+rd(s->u,45,8)));
L_1803dc21b_3:;
/* 1803dc220: mov rax, qword ptr [rdi + 0xe0] */
L_1803dc220_0:;
L_1803dc220_1:;
wr(s->u,13,8,(rd(s->r,56,8)+((U)UINT64_C(0xe0))));
L_1803dc220_2:;
wr(s->u,69,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803dc220_3:;
wr(s->r,0,8,rd(s->u,69,8));
L_1803dc220_4:;
/* 1803dc227: movsxd rcx, edx */
L_1803dc227_0:;
L_1803dc227_1:;
wr(s->r,8,8,(U)sx(rd(s->r,16,4),4));
L_1803dc227_2:;
/* 1803dc22a: add r8, 0x10 */
L_1803dc22a_0:;
L_1803dc22a_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803dc22a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x10)),8,0));
L_1803dc22a_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x10))));
L_1803dc22a_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc22a_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dc22a_6:;
wr(s->u,78,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dc22a_7:;
wr(s->u,86,1,pop(rd(s->u,78,8),8));
L_1803dc22a_8:;
wr(s->u,87,1,(rd(s->u,86,1)&((U)UINT64_C(0x1))));
L_1803dc22a_9:;
wr(s->r,514,1,(rd(s->u,87,1)==((U)UINT64_C(0x0))));
L_1803dc22a_10:;
/* 1803dc22e: mov ecx, dword ptr [rax + rcx*4] */
L_1803dc22e_0:;
L_1803dc22e_1:;
wr(s->u,21,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dc22e_2:;
wr(s->u,29,8,(rd(s->r,0,8)+rd(s->u,21,8)));
L_1803dc22e_3:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,29,8),4));
L_1803dc22e_4:;
wr(s->r,8,4,rd(s->u,65,4));
L_1803dc22e_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc22e_6:;
/* 1803dc231: mov dword ptr [r8 - 0x18], ecx */
L_1803dc231_0:;
L_1803dc231_1:;
wr(s->u,5,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1803dc231_2:;
wr(s->u,61,4,rd(s->r,8,4));
L_1803dc231_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,61,4));
L_1803dc231_4:;
/* 1803dc235: add edx, dword ptr [rdi + 0x30] */
L_1803dc235_0:;
L_1803dc235_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc235_2:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dc235_3:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->u,65,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803dc235_4:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dc235_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,65,4),4,0));
L_1803dc235_6:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dc235_7:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->u,65,4)));
L_1803dc235_8:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc235_9:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc235_10:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc235_11:;
wr(s->u,78,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc235_12:;
wr(s->u,86,1,pop(rd(s->u,78,4),4));
L_1803dc235_13:;
wr(s->u,87,1,(rd(s->u,86,1)&((U)UINT64_C(0x1))));
L_1803dc235_14:;
wr(s->r,514,1,(rd(s->u,87,1)==((U)UINT64_C(0x0))));
L_1803dc235_15:;
/* 1803dc238: mov rax, qword ptr [rdi + 0xe0] */
L_1803dc238_0:;
L_1803dc238_1:;
wr(s->u,13,8,(rd(s->r,56,8)+((U)UINT64_C(0xe0))));
L_1803dc238_2:;
wr(s->u,69,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803dc238_3:;
wr(s->r,0,8,rd(s->u,69,8));
L_1803dc238_4:;
/* 1803dc23f: movsxd rcx, edx */
L_1803dc23f_0:;
L_1803dc23f_1:;
wr(s->r,8,8,(U)sx(rd(s->r,16,4),4));
L_1803dc23f_2:;
/* 1803dc242: mov ecx, dword ptr [rax + rcx*4] */
L_1803dc242_0:;
L_1803dc242_1:;
wr(s->u,21,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dc242_2:;
wr(s->u,29,8,(rd(s->r,0,8)+rd(s->u,21,8)));
L_1803dc242_3:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,29,8),4));
L_1803dc242_4:;
wr(s->r,8,4,rd(s->u,65,4));
L_1803dc242_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc242_6:;
/* 1803dc245: mov dword ptr [r8 - 0x14], ecx */
L_1803dc245_0:;
L_1803dc245_1:;
wr(s->u,5,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803dc245_2:;
wr(s->u,61,4,rd(s->r,8,4));
L_1803dc245_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,61,4));
L_1803dc245_4:;
/* 1803dc249: add edx, dword ptr [rdi + 0x30] */
L_1803dc249_0:;
L_1803dc249_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc249_2:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dc249_3:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->u,65,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803dc249_4:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dc249_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,65,4),4,0));
L_1803dc249_6:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dc249_7:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->u,65,4)));
L_1803dc249_8:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc249_9:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc249_10:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc249_11:;
wr(s->u,78,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc249_12:;
wr(s->u,86,1,pop(rd(s->u,78,4),4));
L_1803dc249_13:;
wr(s->u,87,1,(rd(s->u,86,1)&((U)UINT64_C(0x1))));
L_1803dc249_14:;
wr(s->r,514,1,(rd(s->u,87,1)==((U)UINT64_C(0x0))));
L_1803dc249_15:;
/* 1803dc24c: mov rax, qword ptr [rdi + 0xe0] */
L_1803dc24c_0:;
L_1803dc24c_1:;
wr(s->u,13,8,(rd(s->r,56,8)+((U)UINT64_C(0xe0))));
L_1803dc24c_2:;
wr(s->u,69,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803dc24c_3:;
wr(s->r,0,8,rd(s->u,69,8));
L_1803dc24c_4:;
/* 1803dc253: movsxd rcx, edx */
L_1803dc253_0:;
L_1803dc253_1:;
wr(s->r,8,8,(U)sx(rd(s->r,16,4),4));
L_1803dc253_2:;
/* 1803dc256: mov ecx, dword ptr [rax + rcx*4] */
L_1803dc256_0:;
L_1803dc256_1:;
wr(s->u,21,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dc256_2:;
wr(s->u,29,8,(rd(s->r,0,8)+rd(s->u,21,8)));
L_1803dc256_3:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,29,8),4));
L_1803dc256_4:;
wr(s->r,8,4,rd(s->u,65,4));
L_1803dc256_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc256_6:;
/* 1803dc259: mov dword ptr [r8 - 0x10], ecx */
L_1803dc259_0:;
L_1803dc259_1:;
wr(s->u,5,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803dc259_2:;
wr(s->u,61,4,rd(s->r,8,4));
L_1803dc259_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,61,4));
L_1803dc259_4:;
/* 1803dc25d: add edx, dword ptr [rdi + 0x30] */
L_1803dc25d_0:;
L_1803dc25d_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc25d_2:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dc25d_3:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->u,65,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803dc25d_4:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dc25d_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,65,4),4,0));
L_1803dc25d_6:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dc25d_7:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->u,65,4)));
L_1803dc25d_8:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc25d_9:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc25d_10:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc25d_11:;
wr(s->u,78,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc25d_12:;
wr(s->u,86,1,pop(rd(s->u,78,4),4));
L_1803dc25d_13:;
wr(s->u,87,1,(rd(s->u,86,1)&((U)UINT64_C(0x1))));
L_1803dc25d_14:;
wr(s->r,514,1,(rd(s->u,87,1)==((U)UINT64_C(0x0))));
L_1803dc25d_15:;
/* 1803dc260: mov rax, qword ptr [rdi + 0xe0] */
L_1803dc260_0:;
L_1803dc260_1:;
wr(s->u,13,8,(rd(s->r,56,8)+((U)UINT64_C(0xe0))));
L_1803dc260_2:;
wr(s->u,69,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803dc260_3:;
wr(s->r,0,8,rd(s->u,69,8));
L_1803dc260_4:;
/* 1803dc267: movsxd rcx, edx */
L_1803dc267_0:;
L_1803dc267_1:;
wr(s->r,8,8,(U)sx(rd(s->r,16,4),4));
L_1803dc267_2:;
/* 1803dc26a: mov ecx, dword ptr [rax + rcx*4] */
L_1803dc26a_0:;
L_1803dc26a_1:;
wr(s->u,21,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dc26a_2:;
wr(s->u,29,8,(rd(s->r,0,8)+rd(s->u,21,8)));
L_1803dc26a_3:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,29,8),4));
L_1803dc26a_4:;
wr(s->r,8,4,rd(s->u,65,4));
L_1803dc26a_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc26a_6:;
/* 1803dc26d: mov dword ptr [r8 - 0xc], ecx */
L_1803dc26d_0:;
L_1803dc26d_1:;
wr(s->u,5,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803dc26d_2:;
wr(s->u,61,4,rd(s->r,8,4));
L_1803dc26d_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,61,4));
L_1803dc26d_4:;
/* 1803dc271: add edx, dword ptr [rdi + 0x30] */
L_1803dc271_0:;
L_1803dc271_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc271_2:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dc271_3:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->u,65,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803dc271_4:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dc271_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,65,4),4,0));
L_1803dc271_6:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dc271_7:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->u,65,4)));
L_1803dc271_8:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc271_9:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc271_10:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc271_11:;
wr(s->u,78,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc271_12:;
wr(s->u,86,1,pop(rd(s->u,78,4),4));
L_1803dc271_13:;
wr(s->u,87,1,(rd(s->u,86,1)&((U)UINT64_C(0x1))));
L_1803dc271_14:;
wr(s->r,514,1,(rd(s->u,87,1)==((U)UINT64_C(0x0))));
L_1803dc271_15:;
/* 1803dc274: sub r9, 1 */
L_1803dc274_0:;
L_1803dc274_1:;
wr(s->r,512,1,(rd(s->r,136,8)<((U)UINT64_C(0x1))));
L_1803dc274_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x1)),8,1));
L_1803dc274_3:;
wr(s->r,136,8,(rd(s->r,136,8)-((U)UINT64_C(0x1))));
L_1803dc274_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc274_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dc274_6:;
wr(s->u,78,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dc274_7:;
wr(s->u,86,1,pop(rd(s->u,78,8),8));
L_1803dc274_8:;
wr(s->u,87,1,(rd(s->u,86,1)&((U)UINT64_C(0x1))));
L_1803dc274_9:;
wr(s->r,514,1,(rd(s->u,87,1)==((U)UINT64_C(0x0))));
L_1803dc274_10:;
/* 1803dc278: jne 0x1803dc220 */
L_1803dc278_0:;
L_1803dc278_1:;
wr(s->u,77,1,(!rd(s->r,518,1)));
L_1803dc278_2:;
if(rd(s->u,77,1)){goto L_1803dc220_0;}
L_1803dc278_3:;
return UINT64_C(0x1803dc27a);
}
uint64_t b_1803dc220(CPU*s){
/* 1803dc220: mov rax, qword ptr [rdi + 0xe0] */
L_1803dc220_0:;
L_1803dc220_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0xe0))));
L_1803dc220_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc220_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dc220_4:;
/* 1803dc227: movsxd rcx, edx */
L_1803dc227_0:;
L_1803dc227_1:;
wr(s->r,8,8,(U)sx(rd(s->r,16,4),4));
L_1803dc227_2:;
/* 1803dc22a: add r8, 0x10 */
L_1803dc22a_0:;
L_1803dc22a_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803dc22a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x10)),8,0));
L_1803dc22a_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x10))));
L_1803dc22a_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc22a_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dc22a_6:;
wr(s->u,49,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dc22a_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803dc22a_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dc22a_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dc22a_10:;
/* 1803dc22e: mov ecx, dword ptr [rax + rcx*4] */
L_1803dc22e_0:;
L_1803dc22e_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dc22e_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dc22e_3:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dc22e_4:;
wr(s->r,8,4,rd(s->u,36,4));
L_1803dc22e_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc22e_6:;
/* 1803dc231: mov dword ptr [r8 - 0x18], ecx */
L_1803dc231_0:;
L_1803dc231_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1803dc231_2:;
wr(s->u,32,4,rd(s->r,8,4));
L_1803dc231_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dc231_4:;
/* 1803dc235: add edx, dword ptr [rdi + 0x30] */
L_1803dc235_0:;
L_1803dc235_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc235_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc235_3:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->u,36,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803dc235_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc235_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,36,4),4,0));
L_1803dc235_6:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc235_7:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->u,36,4)));
L_1803dc235_8:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc235_9:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc235_10:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc235_11:;
wr(s->u,49,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc235_12:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dc235_13:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dc235_14:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dc235_15:;
/* 1803dc238: mov rax, qword ptr [rdi + 0xe0] */
L_1803dc238_0:;
L_1803dc238_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0xe0))));
L_1803dc238_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc238_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dc238_4:;
/* 1803dc23f: movsxd rcx, edx */
L_1803dc23f_0:;
L_1803dc23f_1:;
wr(s->r,8,8,(U)sx(rd(s->r,16,4),4));
L_1803dc23f_2:;
/* 1803dc242: mov ecx, dword ptr [rax + rcx*4] */
L_1803dc242_0:;
L_1803dc242_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dc242_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dc242_3:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dc242_4:;
wr(s->r,8,4,rd(s->u,36,4));
L_1803dc242_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc242_6:;
/* 1803dc245: mov dword ptr [r8 - 0x14], ecx */
L_1803dc245_0:;
L_1803dc245_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803dc245_2:;
wr(s->u,32,4,rd(s->r,8,4));
L_1803dc245_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dc245_4:;
/* 1803dc249: add edx, dword ptr [rdi + 0x30] */
L_1803dc249_0:;
L_1803dc249_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc249_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc249_3:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->u,36,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803dc249_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc249_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,36,4),4,0));
L_1803dc249_6:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc249_7:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->u,36,4)));
L_1803dc249_8:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc249_9:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc249_10:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc249_11:;
wr(s->u,49,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc249_12:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dc249_13:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dc249_14:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dc249_15:;
/* 1803dc24c: mov rax, qword ptr [rdi + 0xe0] */
L_1803dc24c_0:;
L_1803dc24c_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0xe0))));
L_1803dc24c_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc24c_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dc24c_4:;
/* 1803dc253: movsxd rcx, edx */
L_1803dc253_0:;
L_1803dc253_1:;
wr(s->r,8,8,(U)sx(rd(s->r,16,4),4));
L_1803dc253_2:;
/* 1803dc256: mov ecx, dword ptr [rax + rcx*4] */
L_1803dc256_0:;
L_1803dc256_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dc256_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dc256_3:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dc256_4:;
wr(s->r,8,4,rd(s->u,36,4));
L_1803dc256_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc256_6:;
/* 1803dc259: mov dword ptr [r8 - 0x10], ecx */
L_1803dc259_0:;
L_1803dc259_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803dc259_2:;
wr(s->u,32,4,rd(s->r,8,4));
L_1803dc259_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dc259_4:;
/* 1803dc25d: add edx, dword ptr [rdi + 0x30] */
L_1803dc25d_0:;
L_1803dc25d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc25d_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc25d_3:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->u,36,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803dc25d_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc25d_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,36,4),4,0));
L_1803dc25d_6:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc25d_7:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->u,36,4)));
L_1803dc25d_8:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc25d_9:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc25d_10:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc25d_11:;
wr(s->u,49,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc25d_12:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dc25d_13:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dc25d_14:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dc25d_15:;
/* 1803dc260: mov rax, qword ptr [rdi + 0xe0] */
L_1803dc260_0:;
L_1803dc260_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0xe0))));
L_1803dc260_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc260_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dc260_4:;
/* 1803dc267: movsxd rcx, edx */
L_1803dc267_0:;
L_1803dc267_1:;
wr(s->r,8,8,(U)sx(rd(s->r,16,4),4));
L_1803dc267_2:;
/* 1803dc26a: mov ecx, dword ptr [rax + rcx*4] */
L_1803dc26a_0:;
L_1803dc26a_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dc26a_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dc26a_3:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dc26a_4:;
wr(s->r,8,4,rd(s->u,36,4));
L_1803dc26a_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc26a_6:;
/* 1803dc26d: mov dword ptr [r8 - 0xc], ecx */
L_1803dc26d_0:;
L_1803dc26d_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803dc26d_2:;
wr(s->u,32,4,rd(s->r,8,4));
L_1803dc26d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dc26d_4:;
/* 1803dc271: add edx, dword ptr [rdi + 0x30] */
L_1803dc271_0:;
L_1803dc271_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc271_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc271_3:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->u,36,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803dc271_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc271_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,36,4),4,0));
L_1803dc271_6:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc271_7:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->u,36,4)));
L_1803dc271_8:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc271_9:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc271_10:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc271_11:;
wr(s->u,49,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc271_12:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dc271_13:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dc271_14:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dc271_15:;
/* 1803dc274: sub r9, 1 */
L_1803dc274_0:;
L_1803dc274_1:;
wr(s->r,512,1,(rd(s->r,136,8)<((U)UINT64_C(0x1))));
L_1803dc274_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x1)),8,1));
L_1803dc274_3:;
wr(s->r,136,8,(rd(s->r,136,8)-((U)UINT64_C(0x1))));
L_1803dc274_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc274_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dc274_6:;
wr(s->u,49,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dc274_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803dc274_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dc274_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dc274_10:;
/* 1803dc278: jne 0x1803dc220 */
L_1803dc278_0:;
L_1803dc278_1:;
wr(s->u,48,1,(!rd(s->r,518,1)));
L_1803dc278_2:;
if(rd(s->u,48,1)){goto L_1803dc220_0;}
L_1803dc278_3:;
return UINT64_C(0x1803dc27a);
}
uint64_t b_1803dc27a(CPU*s){
/* 1803dc27a: cmp r10, rbx */
L_1803dc27a_0:;
L_1803dc27a_1:;
wr(s->u,11,8,rd(s->r,24,8));
L_1803dc27a_2:;
wr(s->r,512,1,(rd(s->r,144,8)<rd(s->u,11,8)));
L_1803dc27a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),rd(s->u,11,8),8,1));
L_1803dc27a_4:;
wr(s->u,19,8,(rd(s->r,144,8)-rd(s->u,11,8)));
L_1803dc27a_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc27a_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803dc27a_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803dc27a_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803dc27a_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803dc27a_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803dc27a_11:;
/* 1803dc27d: jge 0x1803dc2ab */
L_1803dc27d_0:;
L_1803dc27d_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dc27d_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dc2ab);}
L_1803dc27d_3:;
return UINT64_C(0x1803dc27f);
}
uint64_t b_1803dc27f(CPU*s){
/* 1803dc27f: mov rax, qword ptr [r13] */
L_1803dc27f_0:;
L_1803dc27f_1:;
wr(s->u,40,8,mr((uint64_t)rd(s->r,168,8),8));
L_1803dc27f_2:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dc27f_3:;
/* 1803dc283: mov r9, rbx */
L_1803dc283_0:;
L_1803dc283_1:;
wr(s->r,136,8,rd(s->r,24,8));
L_1803dc283_2:;
/* 1803dc286: lea r8, [rax + r10*4] */
L_1803dc286_0:;
L_1803dc286_1:;
wr(s->u,16,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803dc286_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dc286_3:;
wr(s->r,128,8,rd(s->u,24,8));
L_1803dc286_4:;
/* 1803dc28a: sub r9, r10 */
L_1803dc28a_0:;
L_1803dc28a_1:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->r,144,8)));
L_1803dc28a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->r,144,8),8,1));
L_1803dc28a_3:;
wr(s->r,136,8,(rd(s->r,136,8)-rd(s->r,144,8)));
L_1803dc28a_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc28a_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dc28a_6:;
wr(s->u,49,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dc28a_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803dc28a_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dc28a_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dc28a_10:;
/* 1803dc28d: mov rax, qword ptr [rdi + 0xe0] */
L_1803dc28d_0:;
L_1803dc28d_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0xe0))));
L_1803dc28d_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc28d_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dc28d_4:;
/* 1803dc294: movsxd rcx, edx */
L_1803dc294_0:;
L_1803dc294_1:;
wr(s->r,8,8,(U)sx(rd(s->r,16,4),4));
L_1803dc294_2:;
/* 1803dc297: add r8, 4 */
L_1803dc297_0:;
L_1803dc297_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803dc297_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x4)),8,0));
L_1803dc297_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803dc297_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc297_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dc297_6:;
wr(s->u,49,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dc297_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803dc297_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dc297_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dc297_10:;
/* 1803dc29b: mov ecx, dword ptr [rax + rcx*4] */
L_1803dc29b_0:;
L_1803dc29b_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dc29b_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dc29b_3:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dc29b_4:;
wr(s->r,8,4,rd(s->u,36,4));
L_1803dc29b_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc29b_6:;
/* 1803dc29e: mov dword ptr [r8 - 4], ecx */
L_1803dc29e_0:;
L_1803dc29e_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dc29e_2:;
wr(s->u,32,4,rd(s->r,8,4));
L_1803dc29e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dc29e_4:;
/* 1803dc2a2: add edx, dword ptr [rdi + 0x30] */
L_1803dc2a2_0:;
L_1803dc2a2_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc2a2_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc2a2_3:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->u,36,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803dc2a2_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc2a2_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,36,4),4,0));
L_1803dc2a2_6:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc2a2_7:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->u,36,4)));
L_1803dc2a2_8:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc2a2_9:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc2a2_10:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc2a2_11:;
wr(s->u,49,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc2a2_12:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dc2a2_13:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dc2a2_14:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dc2a2_15:;
/* 1803dc2a5: sub r9, 1 */
L_1803dc2a5_0:;
L_1803dc2a5_1:;
wr(s->r,512,1,(rd(s->r,136,8)<((U)UINT64_C(0x1))));
L_1803dc2a5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x1)),8,1));
L_1803dc2a5_3:;
wr(s->r,136,8,(rd(s->r,136,8)-((U)UINT64_C(0x1))));
L_1803dc2a5_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc2a5_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dc2a5_6:;
wr(s->u,49,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dc2a5_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803dc2a5_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dc2a5_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dc2a5_10:;
/* 1803dc2a9: jne 0x1803dc28d */
L_1803dc2a9_0:;
L_1803dc2a9_1:;
wr(s->u,48,1,(!rd(s->r,518,1)));
L_1803dc2a9_2:;
if(rd(s->u,48,1)){goto L_1803dc28d_0;}
L_1803dc2a9_3:;
return UINT64_C(0x1803dc2ab);
}
uint64_t b_1803dc28d(CPU*s){
/* 1803dc28d: mov rax, qword ptr [rdi + 0xe0] */
L_1803dc28d_0:;
L_1803dc28d_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0xe0))));
L_1803dc28d_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc28d_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dc28d_4:;
/* 1803dc294: movsxd rcx, edx */
L_1803dc294_0:;
L_1803dc294_1:;
wr(s->r,8,8,(U)sx(rd(s->r,16,4),4));
L_1803dc294_2:;
/* 1803dc297: add r8, 4 */
L_1803dc297_0:;
L_1803dc297_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803dc297_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x4)),8,0));
L_1803dc297_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803dc297_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc297_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dc297_6:;
wr(s->u,49,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dc297_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803dc297_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dc297_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dc297_10:;
/* 1803dc29b: mov ecx, dword ptr [rax + rcx*4] */
L_1803dc29b_0:;
L_1803dc29b_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dc29b_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dc29b_3:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dc29b_4:;
wr(s->r,8,4,rd(s->u,36,4));
L_1803dc29b_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc29b_6:;
/* 1803dc29e: mov dword ptr [r8 - 4], ecx */
L_1803dc29e_0:;
L_1803dc29e_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dc29e_2:;
wr(s->u,32,4,rd(s->r,8,4));
L_1803dc29e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dc29e_4:;
/* 1803dc2a2: add edx, dword ptr [rdi + 0x30] */
L_1803dc2a2_0:;
L_1803dc2a2_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc2a2_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc2a2_3:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->u,36,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803dc2a2_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc2a2_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,36,4),4,0));
L_1803dc2a2_6:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc2a2_7:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->u,36,4)));
L_1803dc2a2_8:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc2a2_9:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc2a2_10:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc2a2_11:;
wr(s->u,49,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc2a2_12:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dc2a2_13:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dc2a2_14:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dc2a2_15:;
/* 1803dc2a5: sub r9, 1 */
L_1803dc2a5_0:;
L_1803dc2a5_1:;
wr(s->r,512,1,(rd(s->r,136,8)<((U)UINT64_C(0x1))));
L_1803dc2a5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x1)),8,1));
L_1803dc2a5_3:;
wr(s->r,136,8,(rd(s->r,136,8)-((U)UINT64_C(0x1))));
L_1803dc2a5_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc2a5_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dc2a5_6:;
wr(s->u,49,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dc2a5_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803dc2a5_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dc2a5_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dc2a5_10:;
/* 1803dc2a9: jne 0x1803dc28d */
L_1803dc2a9_0:;
L_1803dc2a9_1:;
wr(s->u,48,1,(!rd(s->r,518,1)));
L_1803dc2a9_2:;
if(rd(s->u,48,1)){goto L_1803dc28d_0;}
L_1803dc2a9_3:;
return UINT64_C(0x1803dc2ab);
}
uint64_t b_1803dc2ab(CPU*s){
/* 1803dc2ab: mov edx, ebp */
L_1803dc2ab_0:;
L_1803dc2ab_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803dc2ab_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc2ab_3:;
/* 1803dc2ad: movaps xmm1, xmm7 */
L_1803dc2ad_0:;
L_1803dc2ad_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803dc2ad_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803dc2ad_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803dc2ad_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803dc2ad_5:;
/* 1803dc2b0: mov r9d, r12d */
L_1803dc2b0_0:;
L_1803dc2b0_1:;
wr(s->r,136,4,rd(s->r,160,4));
L_1803dc2b0_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dc2b0_3:;
/* 1803dc2b3: imul edx, dword ptr [rdi + 0x30] */
L_1803dc2b3_0:;
L_1803dc2b3_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc2b3_2:;
wr(s->u,44,8,(U)sx(rd(s->r,16,4),4));
L_1803dc2b3_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc2b3_4:;
wr(s->u,52,8,(U)sx(rd(s->u,16,4),4));
L_1803dc2b3_5:;
wr(s->u,60,8,(rd(s->u,44,8)*rd(s->u,52,8)));
L_1803dc2b3_6:;
wr(s->r,16,4,(rd(s->u,60,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc2b3_7:;
wr(s->u,68,4,(rd(s->u,60,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dc2b3_8:;
wr(s->u,28,8,(U)sx(rd(s->r,16,4),4));
L_1803dc2b3_9:;
wr(s->r,512,1,(rd(s->u,28,8)!=rd(s->u,60,8)));
L_1803dc2b3_10:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803dc2b3_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc2b3_12:;
/* 1803dc2b7: add edx, r11d */
L_1803dc2b7_0:;
L_1803dc2b7_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->r,152,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803dc2b7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->r,152,4),4,0));
L_1803dc2b7_3:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->r,152,4)));
L_1803dc2b7_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc2b7_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc2b7_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc2b7_7:;
wr(s->u,22,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc2b7_8:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803dc2b7_9:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803dc2b7_10:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803dc2b7_11:;
/* 1803dc2ba: cmp dword ptr [rdi + 0x80], r12d */
L_1803dc2ba_0:;
L_1803dc2ba_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x80))));
L_1803dc2ba_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dc2ba_3:;
wr(s->u,36,4,rd(s->u,16,4));
L_1803dc2ba_4:;
wr(s->r,512,1,(rd(s->u,36,4)<rd(s->r,160,4)));
L_1803dc2ba_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,36,4),rd(s->r,160,4),4,1));
L_1803dc2ba_6:;
wr(s->u,40,4,(rd(s->u,36,4)-rd(s->r,160,4)));
L_1803dc2ba_7:;
wr(s->r,519,1,(sx(rd(s->u,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc2ba_8:;
wr(s->r,518,1,(rd(s->u,40,4)==((U)UINT64_C(0x0))));
L_1803dc2ba_9:;
wr(s->u,22,4,(rd(s->u,40,4)&((U)UINT64_C(0xff))));
L_1803dc2ba_10:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803dc2ba_11:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803dc2ba_12:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803dc2ba_13:;
/* 1803dc2c1: jle 0x1803dc2ff */
L_1803dc2c1_0:;
L_1803dc2c1_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc2c1_2:;
wr(s->u,21,1,((rd(s->r,518,1)!=0)||(rd(s->u,20,1)!=0)));
L_1803dc2c1_3:;
if(rd(s->u,21,1)){return UINT64_C(0x1803dc2ff);}
L_1803dc2c1_4:;
return UINT64_C(0x1803dc2c3);
}
uint64_t b_1803dc2c3(CPU*s){
/* 1803dc2c3: mov r8, rsi */
L_1803dc2c3_0:;
L_1803dc2c3_1:;
wr(s->r,128,8,rd(s->r,48,8));
L_1803dc2c3_2:;
/* 1803dc2c6: nop word ptr [rax + rax] */
L_1803dc2c6_0:;
L_1803dc2c6_1:;
wr(s->u,32,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dc2c6_2:;
wr(s->u,40,8,(rd(s->r,0,8)+rd(s->u,32,8)));
L_1803dc2c6_3:;
/* 1803dc2d0: mov rax, qword ptr [rdi + 0xe0] */
L_1803dc2d0_0:;
L_1803dc2d0_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0xe0))));
L_1803dc2d0_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc2d0_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803dc2d0_4:;
/* 1803dc2d7: movsxd rcx, edx */
L_1803dc2d7_0:;
L_1803dc2d7_1:;
wr(s->r,8,8,(U)sx(rd(s->r,16,4),4));
L_1803dc2d7_2:;
/* 1803dc2da: subss xmm1, xmm6 */
L_1803dc2da_0:;
L_1803dc2da_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803dc2da_2:;
/* 1803dc2de: inc r9d */
L_1803dc2de_0:;
L_1803dc2de_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),((U)UINT64_C(0x1)),4,0));
L_1803dc2de_2:;
wr(s->r,136,4,(rd(s->r,136,4)+((U)UINT64_C(0x1))));
L_1803dc2de_3:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dc2de_4:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc2de_5:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dc2de_6:;
wr(s->u,65,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dc2de_7:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803dc2de_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803dc2de_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803dc2de_10:;
/* 1803dc2e1: add r8, 4 */
L_1803dc2e1_0:;
L_1803dc2e1_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803dc2e1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x4)),8,0));
L_1803dc2e1_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803dc2e1_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc2e1_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dc2e1_6:;
wr(s->u,65,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dc2e1_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803dc2e1_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803dc2e1_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803dc2e1_10:;
/* 1803dc2e5: movaps xmm0, xmm1 */
L_1803dc2e5_0:;
L_1803dc2e5_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803dc2e5_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803dc2e5_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803dc2e5_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803dc2e5_5:;
/* 1803dc2e8: mulss xmm0, dword ptr [rax + rcx*4] */
L_1803dc2e8_0:;
L_1803dc2e8_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dc2e8_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dc2e8_3:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dc2e8_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,48,4),4),4));
L_1803dc2e8_5:;
/* 1803dc2ed: movss dword ptr [r8 - 4], xmm0 */
L_1803dc2ed_0:;
L_1803dc2ed_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dc2ed_2:;
wr(s->u,48,4,rd(s->r,4608,4));
L_1803dc2ed_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803dc2ed_4:;
/* 1803dc2f3: add edx, dword ptr [rdi + 0x30] */
L_1803dc2f3_0:;
L_1803dc2f3_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc2f3_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc2f3_3:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->u,52,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803dc2f3_4:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc2f3_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,52,4),4,0));
L_1803dc2f3_6:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc2f3_7:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->u,52,4)));
L_1803dc2f3_8:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc2f3_9:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc2f3_10:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc2f3_11:;
wr(s->u,65,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc2f3_12:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803dc2f3_13:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803dc2f3_14:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803dc2f3_15:;
/* 1803dc2f6: cmp r9d, dword ptr [rdi + 0x80] */
L_1803dc2f6_0:;
L_1803dc2f6_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x80))));
L_1803dc2f6_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dc2f6_3:;
wr(s->u,75,4,rd(s->u,48,4));
L_1803dc2f6_4:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->u,75,4)));
L_1803dc2f6_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->u,75,4),4,1));
L_1803dc2f6_6:;
wr(s->u,79,4,(rd(s->r,136,4)-rd(s->u,75,4)));
L_1803dc2f6_7:;
wr(s->r,519,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc2f6_8:;
wr(s->r,518,1,(rd(s->u,79,4)==((U)UINT64_C(0x0))));
L_1803dc2f6_9:;
wr(s->u,65,4,(rd(s->u,79,4)&((U)UINT64_C(0xff))));
L_1803dc2f6_10:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803dc2f6_11:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803dc2f6_12:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803dc2f6_13:;
/* 1803dc2fd: jl 0x1803dc2d0 */
L_1803dc2fd_0:;
L_1803dc2fd_1:;
wr(s->u,64,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc2fd_2:;
if(rd(s->u,64,1)){goto L_1803dc2d0_0;}
L_1803dc2fd_3:;
return UINT64_C(0x1803dc2ff);
}
uint64_t b_1803dc2d0(CPU*s){
/* 1803dc2d0: mov rax, qword ptr [rdi + 0xe0] */
L_1803dc2d0_0:;
L_1803dc2d0_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0xe0))));
L_1803dc2d0_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc2d0_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dc2d0_4:;
/* 1803dc2d7: movsxd rcx, edx */
L_1803dc2d7_0:;
L_1803dc2d7_1:;
wr(s->r,8,8,(U)sx(rd(s->r,16,4),4));
L_1803dc2d7_2:;
/* 1803dc2da: subss xmm1, xmm6 */
L_1803dc2da_0:;
L_1803dc2da_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803dc2da_2:;
/* 1803dc2de: inc r9d */
L_1803dc2de_0:;
L_1803dc2de_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),((U)UINT64_C(0x1)),4,0));
L_1803dc2de_2:;
wr(s->r,136,4,(rd(s->r,136,4)+((U)UINT64_C(0x1))));
L_1803dc2de_3:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dc2de_4:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc2de_5:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dc2de_6:;
wr(s->u,49,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dc2de_7:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dc2de_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dc2de_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dc2de_10:;
/* 1803dc2e1: add r8, 4 */
L_1803dc2e1_0:;
L_1803dc2e1_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803dc2e1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x4)),8,0));
L_1803dc2e1_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803dc2e1_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc2e1_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dc2e1_6:;
wr(s->u,49,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dc2e1_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803dc2e1_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dc2e1_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dc2e1_10:;
/* 1803dc2e5: movaps xmm0, xmm1 */
L_1803dc2e5_0:;
L_1803dc2e5_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803dc2e5_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803dc2e5_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803dc2e5_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803dc2e5_5:;
/* 1803dc2e8: mulss xmm0, dword ptr [rax + rcx*4] */
L_1803dc2e8_0:;
L_1803dc2e8_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dc2e8_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dc2e8_3:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dc2e8_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,32,4),4),4));
L_1803dc2e8_5:;
/* 1803dc2ed: movss dword ptr [r8 - 4], xmm0 */
L_1803dc2ed_0:;
L_1803dc2ed_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803dc2ed_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803dc2ed_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dc2ed_4:;
/* 1803dc2f3: add edx, dword ptr [rdi + 0x30] */
L_1803dc2f3_0:;
L_1803dc2f3_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc2f3_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc2f3_3:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->u,36,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803dc2f3_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc2f3_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,36,4),4,0));
L_1803dc2f3_6:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc2f3_7:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->u,36,4)));
L_1803dc2f3_8:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc2f3_9:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc2f3_10:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc2f3_11:;
wr(s->u,49,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc2f3_12:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dc2f3_13:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dc2f3_14:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dc2f3_15:;
/* 1803dc2f6: cmp r9d, dword ptr [rdi + 0x80] */
L_1803dc2f6_0:;
L_1803dc2f6_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x80))));
L_1803dc2f6_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dc2f6_3:;
wr(s->u,59,4,rd(s->u,32,4));
L_1803dc2f6_4:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->u,59,4)));
L_1803dc2f6_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->u,59,4),4,1));
L_1803dc2f6_6:;
wr(s->u,63,4,(rd(s->r,136,4)-rd(s->u,59,4)));
L_1803dc2f6_7:;
wr(s->r,519,1,(sx(rd(s->u,63,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc2f6_8:;
wr(s->r,518,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803dc2f6_9:;
wr(s->u,49,4,(rd(s->u,63,4)&((U)UINT64_C(0xff))));
L_1803dc2f6_10:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dc2f6_11:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dc2f6_12:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dc2f6_13:;
/* 1803dc2fd: jl 0x1803dc2d0 */
L_1803dc2fd_0:;
L_1803dc2fd_1:;
wr(s->u,48,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc2fd_2:;
if(rd(s->u,48,1)){goto L_1803dc2d0_0;}
L_1803dc2fd_3:;
return UINT64_C(0x1803dc2ff);
}
uint64_t b_1803dc2ff(CPU*s){
/* 1803dc2ff: inc r11d */
L_1803dc2ff_0:;
L_1803dc2ff_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803dc2ff_2:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803dc2ff_3:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dc2ff_4:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc2ff_5:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803dc2ff_6:;
wr(s->u,13,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803dc2ff_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803dc2ff_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dc2ff_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dc2ff_10:;
/* 1803dc302: add r13, 8 */
L_1803dc302_0:;
L_1803dc302_1:;
wr(s->r,512,1,(((rd(s->r,168,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,168,8)));
L_1803dc302_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,8),((U)UINT64_C(0x8)),8,0));
L_1803dc302_3:;
wr(s->r,168,8,(rd(s->r,168,8)+((U)UINT64_C(0x8))));
L_1803dc302_4:;
wr(s->r,519,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc302_5:;
wr(s->r,518,1,(rd(s->r,168,8)==((U)UINT64_C(0x0))));
L_1803dc302_6:;
wr(s->u,13,8,(rd(s->r,168,8)&((U)UINT64_C(0xff))));
L_1803dc302_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803dc302_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dc302_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dc302_10:;
/* 1803dc306: add rsi, 0x200 */
L_1803dc306_0:;
L_1803dc306_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x200)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803dc306_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x200)),8,0));
L_1803dc306_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x200))));
L_1803dc306_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc306_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803dc306_6:;
wr(s->u,13,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803dc306_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803dc306_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dc306_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dc306_10:;
/* 1803dc30d: cmp r11d, dword ptr [rdi + 0x30] */
L_1803dc30d_0:;
L_1803dc30d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803dc30d_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc30d_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803dc30d_4:;
wr(s->r,512,1,(rd(s->r,152,4)<rd(s->u,23,4)));
L_1803dc30d_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),rd(s->u,23,4),4,1));
L_1803dc30d_6:;
wr(s->u,27,4,(rd(s->r,152,4)-rd(s->u,23,4)));
L_1803dc30d_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc30d_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803dc30d_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803dc30d_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803dc30d_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dc30d_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dc30d_13:;
/* 1803dc311: jl 0x1803dc1f0 */
L_1803dc311_0:;
L_1803dc311_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc311_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dc1f0);}
L_1803dc311_3:;
return UINT64_C(0x1803dc317);
}
uint64_t b_1803dc317(CPU*s){
/* 1803dc317: mov esi, 1 */
L_1803dc317_0:;
L_1803dc317_1:;
wr(s->r,48,8,((U)UINT64_C(0x1)));
L_1803dc317_2:;
/* 1803dc31c: movaps xmm7, xmmword ptr [rsp + 0x40] */
L_1803dc31c_0:;
L_1803dc31c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dc31c_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803dc31c_3:;
wr(s->u,50,16,rd(s->u,16,16));
L_1803dc31c_4:;
wr(s->r,5056,4,rd(s->u,50,4));
L_1803dc31c_5:;
wr(s->r,5060,4,rd(s->u,54,4));
L_1803dc31c_6:;
wr(s->r,5064,4,rd(s->u,58,4));
L_1803dc31c_7:;
wr(s->r,5068,4,rd(s->u,62,4));
L_1803dc31c_8:;
/* 1803dc321: cmp dword ptr [rdi + 0xc8], r12d */
L_1803dc321_0:;
L_1803dc321_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xc8))));
L_1803dc321_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc321_3:;
wr(s->u,42,4,rd(s->u,32,4));
L_1803dc321_4:;
wr(s->r,512,1,(rd(s->u,42,4)<rd(s->r,160,4)));
L_1803dc321_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,42,4),rd(s->r,160,4),4,1));
L_1803dc321_6:;
wr(s->u,46,4,(rd(s->u,42,4)-rd(s->r,160,4)));
L_1803dc321_7:;
wr(s->r,519,1,(sx(rd(s->u,46,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc321_8:;
wr(s->r,518,1,(rd(s->u,46,4)==((U)UINT64_C(0x0))));
L_1803dc321_9:;
wr(s->u,36,4,(rd(s->u,46,4)&((U)UINT64_C(0xff))));
L_1803dc321_10:;
wr(s->u,40,1,pop(rd(s->u,36,4),4));
L_1803dc321_11:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803dc321_12:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803dc321_13:;
/* 1803dc328: je 0x1803dc376 */
L_1803dc328_0:;
L_1803dc328_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dc376);}
L_1803dc328_2:;
return UINT64_C(0x1803dc32a);
}
uint64_t b_1803dc31c(CPU*s){
/* 1803dc31c: movaps xmm7, xmmword ptr [rsp + 0x40] */
L_1803dc31c_0:;
L_1803dc31c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dc31c_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803dc31c_3:;
wr(s->u,50,16,rd(s->u,16,16));
L_1803dc31c_4:;
wr(s->r,5056,4,rd(s->u,50,4));
L_1803dc31c_5:;
wr(s->r,5060,4,rd(s->u,54,4));
L_1803dc31c_6:;
wr(s->r,5064,4,rd(s->u,58,4));
L_1803dc31c_7:;
wr(s->r,5068,4,rd(s->u,62,4));
L_1803dc31c_8:;
/* 1803dc321: cmp dword ptr [rdi + 0xc8], r12d */
L_1803dc321_0:;
L_1803dc321_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xc8))));
L_1803dc321_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc321_3:;
wr(s->u,42,4,rd(s->u,32,4));
L_1803dc321_4:;
wr(s->r,512,1,(rd(s->u,42,4)<rd(s->r,160,4)));
L_1803dc321_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,42,4),rd(s->r,160,4),4,1));
L_1803dc321_6:;
wr(s->u,46,4,(rd(s->u,42,4)-rd(s->r,160,4)));
L_1803dc321_7:;
wr(s->r,519,1,(sx(rd(s->u,46,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc321_8:;
wr(s->r,518,1,(rd(s->u,46,4)==((U)UINT64_C(0x0))));
L_1803dc321_9:;
wr(s->u,36,4,(rd(s->u,46,4)&((U)UINT64_C(0xff))));
L_1803dc321_10:;
wr(s->u,40,1,pop(rd(s->u,36,4),4));
L_1803dc321_11:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803dc321_12:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803dc321_13:;
/* 1803dc328: je 0x1803dc376 */
L_1803dc328_0:;
L_1803dc328_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dc376);}
L_1803dc328_2:;
return UINT64_C(0x1803dc32a);
}
uint64_t b_1803dc32a(CPU*s){
/* 1803dc32a: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc32a_0:;
L_1803dc32a_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc32a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc32a_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc32a_4:;
/* 1803dc331: call 0x1803da8e0 */
L_1803dc331_0:;
L_1803dc331_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc331_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc336)));
L_1803dc331_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dc331_4:;
return UINT64_C(0x1803dc336);
}
uint64_t b_1803dc336(CPU*s){
/* 1803dc336: mov ecx, dword ptr [rdi + 0x3c] */
L_1803dc336_0:;
L_1803dc336_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c))));
L_1803dc336_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc336_3:;
wr(s->r,8,4,rd(s->u,32,4));
L_1803dc336_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc336_5:;
/* 1803dc339: sar eax, 1 */
L_1803dc339_0:;
L_1803dc339_1:;
wr(s->u,50,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dc339_2:;
wr(s->r,512,1,(rd(s->u,50,4)!=((U)UINT64_C(0x0))));
L_1803dc339_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc339_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc339_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc339_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc339_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc339_8:;
wr(s->u,44,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc339_9:;
wr(s->u,48,1,pop(rd(s->u,44,4),4));
L_1803dc339_10:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dc339_11:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dc339_12:;
/* 1803dc33b: lea edx, [rax + rcx*2] */
L_1803dc33b_0:;
L_1803dc33b_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x2))));
L_1803dc33b_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dc33b_3:;
wr(s->r,16,4,(rd(s->u,24,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc33b_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc33b_5:;
/* 1803dc33e: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc33e_0:;
L_1803dc33e_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc33e_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc33e_3:;
wr(s->r,8,8,rd(s->u,36,8));
L_1803dc33e_4:;
/* 1803dc345: neg edx */
L_1803dc345_0:;
L_1803dc345_1:;
wr(s->r,512,1,(rd(s->r,16,4)!=((U)UINT64_C(0x0))));
L_1803dc345_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,16,4),4,1));
L_1803dc345_3:;
wr(s->r,16,4,(-rd(s->r,16,4)));
L_1803dc345_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc345_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc345_6:;
wr(s->u,44,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc345_7:;
wr(s->u,48,1,pop(rd(s->u,44,4),4));
L_1803dc345_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dc345_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dc345_10:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc345_11:;
/* 1803dc347: call 0x1803da8d0 */
L_1803dc347_0:;
L_1803dc347_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc347_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc34c)));
L_1803dc347_3:;
return (uint64_t)UINT64_C(0x1803da8d0);
L_1803dc347_4:;
return UINT64_C(0x1803dc34c);
}
uint64_t b_1803dc34c(CPU*s){
/* 1803dc34c: mov eax, dword ptr [rdi + 0x3c] */
L_1803dc34c_0:;
L_1803dc34c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c))));
L_1803dc34c_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc34c_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803dc34c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc34c_5:;
/* 1803dc34f: add eax, eax */
L_1803dc34f_0:;
L_1803dc34f_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803dc34f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,0,4),4,0));
L_1803dc34f_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,0,4)));
L_1803dc34f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc34f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc34f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc34f_7:;
wr(s->u,17,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc34f_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803dc34f_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dc34f_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dc34f_11:;
/* 1803dc351: movd xmm0, eax */
L_1803dc351_0:;
L_1803dc351_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803dc351_2:;
/* 1803dc355: cvtdq2ps xmm0, xmm0 */
L_1803dc355_0:;
L_1803dc355_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dc355_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dc355_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dc355_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dc355_5:;
/* 1803dc358: movaps xmm1, xmm0 */
L_1803dc358_0:;
L_1803dc358_1:;
wr(s->r,4672,4,rd(s->r,4608,4));
L_1803dc358_2:;
wr(s->r,4676,4,rd(s->r,4612,4));
L_1803dc358_3:;
wr(s->r,4680,4,rd(s->r,4616,4));
L_1803dc358_4:;
wr(s->r,4684,4,rd(s->r,4620,4));
L_1803dc358_5:;
/* 1803dc35b: divss xmm1, dword ptr [rdi + 0x18] */
L_1803dc35b_0:;
L_1803dc35b_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803dc35b_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc35b_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->u,8,4),4),4));
L_1803dc35b_4:;
/* 1803dc360: comiss xmm0, xmm1 */
L_1803dc360_0:;
L_1803dc360_1:;
wr(s->u,23,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dc360_2:;
wr(s->u,24,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803dc360_3:;
wr(s->r,514,1,((rd(s->u,23,1)!=0)||(rd(s->u,24,1)!=0)));
L_1803dc360_4:;
wr(s->u,25,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803dc360_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,25,1)));
L_1803dc360_6:;
wr(s->u,26,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803dc360_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,26,1)));
L_1803dc360_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc360_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dc360_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dc360_11:;
/* 1803dc363: jbe 0x1803dc368 */
L_1803dc363_0:;
L_1803dc363_1:;
wr(s->u,16,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803dc363_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803dc368);}
L_1803dc363_3:;
return UINT64_C(0x1803dc365);
}
uint64_t b_1803dc365(CPU*s){
/* 1803dc365: movaps xmm1, xmm0 */
L_1803dc365_0:;
L_1803dc365_1:;
wr(s->r,4672,4,rd(s->r,4608,4));
L_1803dc365_2:;
wr(s->r,4676,4,rd(s->r,4612,4));
L_1803dc365_3:;
wr(s->r,4680,4,rd(s->r,4616,4));
L_1803dc365_4:;
wr(s->r,4684,4,rd(s->r,4620,4));
L_1803dc365_5:;
/* 1803dc368: addss xmm0, xmm1 */
L_1803dc368_0:;
L_1803dc368_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803dc368_2:;
/* 1803dc36c: divss xmm0, dword ptr [rdi + 0x24] */
L_1803dc36c_0:;
L_1803dc36c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x24))));
L_1803dc36c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc36c_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->u,8,4),4),4));
L_1803dc36c_4:;
/* 1803dc371: jmp 0x1803dc485 */
L_1803dc371_0:;
L_1803dc371_1:;
return UINT64_C(0x1803dc485);
L_1803dc371_2:;
return UINT64_C(0x1803dc376);
}
uint64_t b_1803dc368(CPU*s){
/* 1803dc368: addss xmm0, xmm1 */
L_1803dc368_0:;
L_1803dc368_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803dc368_2:;
/* 1803dc36c: divss xmm0, dword ptr [rdi + 0x24] */
L_1803dc36c_0:;
L_1803dc36c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x24))));
L_1803dc36c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc36c_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->u,8,4),4),4));
L_1803dc36c_4:;
/* 1803dc371: jmp 0x1803dc485 */
L_1803dc371_0:;
L_1803dc371_1:;
return UINT64_C(0x1803dc485);
L_1803dc371_2:;
return UINT64_C(0x1803dc376);
}
uint64_t b_1803dc376(CPU*s){
/* 1803dc376: mov eax, dword ptr [rdi + 0x3c] */
L_1803dc376_0:;
L_1803dc376_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c))));
L_1803dc376_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc376_3:;
wr(s->r,0,4,rd(s->u,32,4));
L_1803dc376_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc376_5:;
/* 1803dc379: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc379_0:;
L_1803dc379_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc379_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc379_3:;
wr(s->r,8,8,rd(s->u,36,8));
L_1803dc379_4:;
/* 1803dc380: lea edx, [r15 + rax*2] */
L_1803dc380_0:;
L_1803dc380_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x2))));
L_1803dc380_2:;
wr(s->u,24,8,(rd(s->r,184,8)+rd(s->u,16,8)));
L_1803dc380_3:;
wr(s->r,16,4,(rd(s->u,24,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc380_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc380_5:;
/* 1803dc384: neg edx */
L_1803dc384_0:;
L_1803dc384_1:;
wr(s->r,512,1,(rd(s->r,16,4)!=((U)UINT64_C(0x0))));
L_1803dc384_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,16,4),4,1));
L_1803dc384_3:;
wr(s->r,16,4,(-rd(s->r,16,4)));
L_1803dc384_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc384_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc384_6:;
wr(s->u,44,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc384_7:;
wr(s->u,48,1,pop(rd(s->u,44,4),4));
L_1803dc384_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dc384_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dc384_10:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc384_11:;
/* 1803dc386: call 0x1803da8d0 */
L_1803dc386_0:;
L_1803dc386_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc386_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc38b)));
L_1803dc386_3:;
return (uint64_t)UINT64_C(0x1803da8d0);
L_1803dc386_4:;
return UINT64_C(0x1803dc38b);
}
uint64_t b_1803dc38b(CPU*s){
/* 1803dc38b: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc38b_0:;
L_1803dc38b_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc38b_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc38b_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc38b_4:;
/* 1803dc392: call 0x1803da8c0 */
L_1803dc392_0:;
L_1803dc392_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc392_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc397)));
L_1803dc392_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc392_4:;
return UINT64_C(0x1803dc397);
}
uint64_t b_1803dc397(CPU*s){
/* 1803dc397: mov r11d, eax */
L_1803dc397_0:;
L_1803dc397_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803dc397_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dc397_3:;
/* 1803dc39a: mov eax, dword ptr [rdi + 0x3c] */
L_1803dc39a_0:;
L_1803dc39a_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c))));
L_1803dc39a_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc39a_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803dc39a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc39a_5:;
/* 1803dc39d: sar eax, 1 */
L_1803dc39d_0:;
L_1803dc39d_1:;
wr(s->u,91,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dc39d_2:;
wr(s->r,512,1,(rd(s->u,91,4)!=((U)UINT64_C(0x0))));
L_1803dc39d_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc39d_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc39d_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc39d_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc39d_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc39d_8:;
wr(s->u,13,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc39d_9:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dc39d_10:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dc39d_11:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dc39d_12:;
/* 1803dc39f: cdq  */
L_1803dc39f_0:;
L_1803dc39f_1:;
wr(s->u,19,8,(U)sx(rd(s->r,0,4),4));
L_1803dc39f_2:;
wr(s->r,16,4,(rd(s->u,19,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dc39f_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc39f_4:;
/* 1803dc3a0: idiv r11d */
L_1803dc3a0_0:;
L_1803dc3a0_1:;
wr(s->u,35,8,(U)sx(rd(s->r,152,4),4));
L_1803dc3a0_2:;
wr(s->u,43,8,rd(s->r,16,4));
L_1803dc3a0_3:;
wr(s->u,51,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,43,8)<<((U)UINT64_C(0x20)))));
L_1803dc3a0_4:;
wr(s->u,59,8,rd(s->r,0,4));
L_1803dc3a0_5:;
wr(s->u,67,8,(rd(s->u,51,8)|rd(s->u,59,8)));
L_1803dc3a0_6:;
wr(s->u,75,8,((U)(sx(rd(s->u,67,8),8)/sx(rd(s->u,35,8),8))));
L_1803dc3a0_7:;
wr(s->r,0,4,(rd(s->u,75,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc3a0_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc3a0_9:;
wr(s->u,83,8,((U)(sx(rd(s->u,67,8),8)%sx(rd(s->u,35,8),8))));
L_1803dc3a0_10:;
wr(s->r,16,4,(rd(s->u,83,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc3a0_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc3a0_12:;
/* 1803dc3a3: cmp eax, 1 */
L_1803dc3a3_0:;
L_1803dc3a3_1:;
wr(s->u,27,4,rd(s->r,0,4));
L_1803dc3a3_2:;
wr(s->r,512,1,(rd(s->u,27,4)<((U)UINT64_C(0x1))));
L_1803dc3a3_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,27,4),((U)UINT64_C(0x1)),4,1));
L_1803dc3a3_4:;
wr(s->u,31,4,(rd(s->u,27,4)-((U)UINT64_C(0x1))));
L_1803dc3a3_5:;
wr(s->r,519,1,(sx(rd(s->u,31,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc3a3_6:;
wr(s->r,518,1,(rd(s->u,31,4)==((U)UINT64_C(0x0))));
L_1803dc3a3_7:;
wr(s->u,13,4,(rd(s->u,31,4)&((U)UINT64_C(0xff))));
L_1803dc3a3_8:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dc3a3_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dc3a3_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dc3a3_11:;
/* 1803dc3a6: jl 0x1803dc3c2 */
L_1803dc3a6_0:;
L_1803dc3a6_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc3a6_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dc3c2);}
L_1803dc3a6_3:;
return UINT64_C(0x1803dc3a8);
}
uint64_t b_1803dc3a8(CPU*s){
/* 1803dc3a8: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc3a8_0:;
L_1803dc3a8_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc3a8_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc3a8_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc3a8_4:;
/* 1803dc3af: call 0x1803da8c0 */
L_1803dc3af_0:;
L_1803dc3af_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc3af_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc3b4)));
L_1803dc3af_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc3af_4:;
return UINT64_C(0x1803dc3b4);
}
uint64_t b_1803dc3b4(CPU*s){
/* 1803dc3b4: mov r11d, eax */
L_1803dc3b4_0:;
L_1803dc3b4_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803dc3b4_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dc3b4_3:;
/* 1803dc3b7: mov eax, dword ptr [rdi + 0x3c] */
L_1803dc3b7_0:;
L_1803dc3b7_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c))));
L_1803dc3b7_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc3b7_3:;
wr(s->r,0,4,rd(s->u,16,4));
L_1803dc3b7_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc3b7_5:;
/* 1803dc3ba: sar eax, 1 */
L_1803dc3ba_0:;
L_1803dc3ba_1:;
wr(s->u,98,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dc3ba_2:;
wr(s->r,512,1,(rd(s->u,98,4)!=((U)UINT64_C(0x0))));
L_1803dc3ba_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc3ba_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc3ba_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc3ba_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc3ba_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc3ba_8:;
wr(s->u,28,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc3ba_9:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dc3ba_10:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dc3ba_11:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dc3ba_12:;
/* 1803dc3bc: cdq  */
L_1803dc3bc_0:;
L_1803dc3bc_1:;
wr(s->u,34,8,(U)sx(rd(s->r,0,4),4));
L_1803dc3bc_2:;
wr(s->r,16,4,(rd(s->u,34,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dc3bc_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc3bc_4:;
/* 1803dc3bd: idiv r11d */
L_1803dc3bd_0:;
L_1803dc3bd_1:;
wr(s->u,42,8,(U)sx(rd(s->r,152,4),4));
L_1803dc3bd_2:;
wr(s->u,50,8,rd(s->r,16,4));
L_1803dc3bd_3:;
wr(s->u,58,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,50,8)<<((U)UINT64_C(0x20)))));
L_1803dc3bd_4:;
wr(s->u,66,8,rd(s->r,0,4));
L_1803dc3bd_5:;
wr(s->u,74,8,(rd(s->u,58,8)|rd(s->u,66,8)));
L_1803dc3bd_6:;
wr(s->u,82,8,((U)(sx(rd(s->u,74,8),8)/sx(rd(s->u,42,8),8))));
L_1803dc3bd_7:;
wr(s->r,0,4,(rd(s->u,82,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc3bd_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc3bd_9:;
wr(s->u,90,8,((U)(sx(rd(s->u,74,8),8)%sx(rd(s->u,42,8),8))));
L_1803dc3bd_10:;
wr(s->r,16,4,(rd(s->u,90,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc3bd_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc3bd_12:;
/* 1803dc3c0: mov esi, eax */
L_1803dc3c0_0:;
L_1803dc3c0_1:;
wr(s->r,48,4,rd(s->r,0,4));
L_1803dc3c0_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803dc3c0_3:;
/* 1803dc3c2: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc3c2_0:;
L_1803dc3c2_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc3c2_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc3c2_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dc3c2_4:;
/* 1803dc3c9: mov ebx, dword ptr [rdi + 0x80] */
L_1803dc3c9_0:;
L_1803dc3c9_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x80))));
L_1803dc3c9_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dc3c9_3:;
wr(s->r,24,4,rd(s->u,16,4));
L_1803dc3c9_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc3c9_5:;
/* 1803dc3cf: call 0x1803da8e0 */
L_1803dc3cf_0:;
L_1803dc3cf_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc3cf_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc3d4)));
L_1803dc3cf_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dc3cf_4:;
return UINT64_C(0x1803dc3d4);
}
uint64_t b_1803dc3c2(CPU*s){
/* 1803dc3c2: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc3c2_0:;
L_1803dc3c2_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc3c2_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc3c2_3:;
wr(s->r,8,8,rd(s->u,12,8));
L_1803dc3c2_4:;
/* 1803dc3c9: mov ebx, dword ptr [rdi + 0x80] */
L_1803dc3c9_0:;
L_1803dc3c9_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x80))));
L_1803dc3c9_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc3c9_3:;
wr(s->r,24,4,rd(s->u,8,4));
L_1803dc3c9_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc3c9_5:;
/* 1803dc3cf: call 0x1803da8e0 */
L_1803dc3cf_0:;
L_1803dc3cf_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc3cf_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc3d4)));
L_1803dc3cf_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dc3cf_4:;
return UINT64_C(0x1803dc3d4);
}
uint64_t b_1803dc3d4(CPU*s){
/* 1803dc3d4: imul eax, esi */
L_1803dc3d4_0:;
L_1803dc3d4_1:;
wr(s->u,25,8,(U)sx(rd(s->r,0,4),4));
L_1803dc3d4_2:;
wr(s->u,33,8,(U)sx(rd(s->r,48,4),4));
L_1803dc3d4_3:;
wr(s->u,41,8,(rd(s->u,25,8)*rd(s->u,33,8)));
L_1803dc3d4_4:;
wr(s->r,0,4,(rd(s->u,41,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc3d4_5:;
wr(s->u,49,4,(rd(s->u,41,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dc3d4_6:;
wr(s->u,9,8,(U)sx(rd(s->r,0,4),4));
L_1803dc3d4_7:;
wr(s->r,512,1,(rd(s->u,9,8)!=rd(s->u,41,8)));
L_1803dc3d4_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803dc3d4_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc3d4_10:;
/* 1803dc3d7: cmp ebx, eax */
L_1803dc3d7_0:;
L_1803dc3d7_1:;
wr(s->u,17,4,rd(s->r,0,4));
L_1803dc3d7_2:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,17,4)));
L_1803dc3d7_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,17,4),4,1));
L_1803dc3d7_4:;
wr(s->u,21,4,(rd(s->r,24,4)-rd(s->u,17,4)));
L_1803dc3d7_5:;
wr(s->r,519,1,(sx(rd(s->u,21,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc3d7_6:;
wr(s->r,518,1,(rd(s->u,21,4)==((U)UINT64_C(0x0))));
L_1803dc3d7_7:;
wr(s->u,3,4,(rd(s->u,21,4)&((U)UINT64_C(0xff))));
L_1803dc3d7_8:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803dc3d7_9:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803dc3d7_10:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803dc3d7_11:;
/* 1803dc3d9: jg 0x1803dc42a */
L_1803dc3d9_0:;
L_1803dc3d9_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803dc3d9_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dc3d9_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803dc3d9_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803dc42a);}
L_1803dc3d9_5:;
return UINT64_C(0x1803dc3db);
}
uint64_t b_1803dc3db(CPU*s){
/* 1803dc3db: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc3db_0:;
L_1803dc3db_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc3db_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc3db_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc3db_4:;
/* 1803dc3e2: call 0x1803da8c0 */
L_1803dc3e2_0:;
L_1803dc3e2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc3e2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc3e7)));
L_1803dc3e2_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc3e2_4:;
return UINT64_C(0x1803dc3e7);
}
uint64_t b_1803dc3e7(CPU*s){
/* 1803dc3e7: mov r11d, eax */
L_1803dc3e7_0:;
L_1803dc3e7_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803dc3e7_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dc3e7_3:;
/* 1803dc3ea: mov eax, dword ptr [rdi + 0x3c] */
L_1803dc3ea_0:;
L_1803dc3ea_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c))));
L_1803dc3ea_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc3ea_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803dc3ea_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc3ea_5:;
/* 1803dc3ed: sar eax, 1 */
L_1803dc3ed_0:;
L_1803dc3ed_1:;
wr(s->u,91,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dc3ed_2:;
wr(s->r,512,1,(rd(s->u,91,4)!=((U)UINT64_C(0x0))));
L_1803dc3ed_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc3ed_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc3ed_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc3ed_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc3ed_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc3ed_8:;
wr(s->u,13,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc3ed_9:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dc3ed_10:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dc3ed_11:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dc3ed_12:;
/* 1803dc3ef: cdq  */
L_1803dc3ef_0:;
L_1803dc3ef_1:;
wr(s->u,19,8,(U)sx(rd(s->r,0,4),4));
L_1803dc3ef_2:;
wr(s->r,16,4,(rd(s->u,19,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dc3ef_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc3ef_4:;
/* 1803dc3f0: idiv r11d */
L_1803dc3f0_0:;
L_1803dc3f0_1:;
wr(s->u,35,8,(U)sx(rd(s->r,152,4),4));
L_1803dc3f0_2:;
wr(s->u,43,8,rd(s->r,16,4));
L_1803dc3f0_3:;
wr(s->u,51,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,43,8)<<((U)UINT64_C(0x20)))));
L_1803dc3f0_4:;
wr(s->u,59,8,rd(s->r,0,4));
L_1803dc3f0_5:;
wr(s->u,67,8,(rd(s->u,51,8)|rd(s->u,59,8)));
L_1803dc3f0_6:;
wr(s->u,75,8,((U)(sx(rd(s->u,67,8),8)/sx(rd(s->u,35,8),8))));
L_1803dc3f0_7:;
wr(s->r,0,4,(rd(s->u,75,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc3f0_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc3f0_9:;
wr(s->u,83,8,((U)(sx(rd(s->u,67,8),8)%sx(rd(s->u,35,8),8))));
L_1803dc3f0_10:;
wr(s->r,16,4,(rd(s->u,83,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc3f0_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc3f0_12:;
/* 1803dc3f3: cmp eax, 1 */
L_1803dc3f3_0:;
L_1803dc3f3_1:;
wr(s->u,27,4,rd(s->r,0,4));
L_1803dc3f3_2:;
wr(s->r,512,1,(rd(s->u,27,4)<((U)UINT64_C(0x1))));
L_1803dc3f3_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,27,4),((U)UINT64_C(0x1)),4,1));
L_1803dc3f3_4:;
wr(s->u,31,4,(rd(s->u,27,4)-((U)UINT64_C(0x1))));
L_1803dc3f3_5:;
wr(s->r,519,1,(sx(rd(s->u,31,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc3f3_6:;
wr(s->r,518,1,(rd(s->u,31,4)==((U)UINT64_C(0x0))));
L_1803dc3f3_7:;
wr(s->u,13,4,(rd(s->u,31,4)&((U)UINT64_C(0xff))));
L_1803dc3f3_8:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dc3f3_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dc3f3_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dc3f3_11:;
/* 1803dc3f6: jge 0x1803dc3ff */
L_1803dc3f6_0:;
L_1803dc3f6_1:;
wr(s->u,12,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dc3f6_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dc3ff);}
L_1803dc3f6_3:;
return UINT64_C(0x1803dc3f8);
}
uint64_t b_1803dc3f8(CPU*s){
/* 1803dc3f8: mov esi, 1 */
L_1803dc3f8_0:;
L_1803dc3f8_1:;
wr(s->r,48,8,((U)UINT64_C(0x1)));
L_1803dc3f8_2:;
/* 1803dc3fd: jmp 0x1803dc419 */
L_1803dc3fd_0:;
L_1803dc3fd_1:;
return UINT64_C(0x1803dc419);
L_1803dc3fd_2:;
return UINT64_C(0x1803dc3ff);
}
uint64_t b_1803dc3ff(CPU*s){
/* 1803dc3ff: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc3ff_0:;
L_1803dc3ff_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc3ff_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc3ff_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc3ff_4:;
/* 1803dc406: call 0x1803da8c0 */
L_1803dc406_0:;
L_1803dc406_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc406_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc40b)));
L_1803dc406_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc406_4:;
return UINT64_C(0x1803dc40b);
}
uint64_t b_1803dc408(CPU*s){
/* 1803dc408: in al, 0xff */
L_1803dc408_0:;
L_1803dc408_1:;
lift_unsupported("in",UINT64_C(0x1803dc408));
wr(s->r,0,1,0);
L_1803dc408_2:;
/* 1803dc40a: inc dword ptr [rbx + rcx*4 - 0x28] */
L_1803dc40a_0:;
L_1803dc40a_1:;
wr(s->u,16,8,(((U)UINT64_C(0xffffffffffffffd8))+rd(s->r,24,8)));
L_1803dc40a_2:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803dc40a_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803dc40a_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803dc40a_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,40,4),((U)UINT64_C(0x1)),4,0));
L_1803dc40a_6:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803dc40a_7:;
wr(s->u,40,4,(rd(s->u,40,4)+((U)UINT64_C(0x1))));
L_1803dc40a_8:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803dc40a_9:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803dc40a_10:;
wr(s->r,519,1,(sx(rd(s->u,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc40a_11:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803dc40a_12:;
wr(s->r,518,1,(rd(s->u,40,4)==((U)UINT64_C(0x0))));
L_1803dc40a_13:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803dc40a_14:;
wr(s->u,56,4,(rd(s->u,40,4)&((U)UINT64_C(0xff))));
L_1803dc40a_15:;
wr(s->u,60,1,pop(rd(s->u,56,4),4));
L_1803dc40a_16:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803dc40a_17:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803dc40a_18:;
/* 1803dc40e: mov eax, dword ptr [rdi + 0x3c] */
L_1803dc40e_0:;
L_1803dc40e_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c))));
L_1803dc40e_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc40e_3:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803dc40e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc40e_5:;
/* 1803dc411: sar eax, 1 */
L_1803dc411_0:;
L_1803dc411_1:;
wr(s->u,126,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dc411_2:;
wr(s->r,512,1,(rd(s->u,126,4)!=((U)UINT64_C(0x0))));
L_1803dc411_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc411_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc411_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc411_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc411_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc411_8:;
wr(s->u,56,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc411_9:;
wr(s->u,60,1,pop(rd(s->u,56,4),4));
L_1803dc411_10:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803dc411_11:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803dc411_12:;
/* 1803dc413: cdq  */
L_1803dc413_0:;
L_1803dc413_1:;
wr(s->u,62,8,(U)sx(rd(s->r,0,4),4));
L_1803dc413_2:;
wr(s->r,16,4,(rd(s->u,62,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dc413_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc413_4:;
/* 1803dc414: idiv r11d */
L_1803dc414_0:;
L_1803dc414_1:;
wr(s->u,70,8,(U)sx(rd(s->r,152,4),4));
L_1803dc414_2:;
wr(s->u,78,8,rd(s->r,16,4));
L_1803dc414_3:;
wr(s->u,86,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,78,8)<<((U)UINT64_C(0x20)))));
L_1803dc414_4:;
wr(s->u,94,8,rd(s->r,0,4));
L_1803dc414_5:;
wr(s->u,102,8,(rd(s->u,86,8)|rd(s->u,94,8)));
L_1803dc414_6:;
wr(s->u,110,8,((U)(sx(rd(s->u,102,8),8)/sx(rd(s->u,70,8),8))));
L_1803dc414_7:;
wr(s->r,0,4,(rd(s->u,110,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc414_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc414_9:;
wr(s->u,118,8,((U)(sx(rd(s->u,102,8),8)%sx(rd(s->u,70,8),8))));
L_1803dc414_10:;
wr(s->r,16,4,(rd(s->u,118,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc414_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc414_12:;
/* 1803dc417: mov esi, eax */
L_1803dc417_0:;
L_1803dc417_1:;
wr(s->r,48,4,rd(s->r,0,4));
L_1803dc417_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803dc417_3:;
/* 1803dc419: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc419_0:;
L_1803dc419_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc419_2:;
wr(s->u,48,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc419_3:;
wr(s->r,8,8,rd(s->u,48,8));
L_1803dc419_4:;
/* 1803dc420: call 0x1803da8e0 */
L_1803dc420_0:;
L_1803dc420_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc420_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc425)));
L_1803dc420_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dc420_4:;
return UINT64_C(0x1803dc425);
}
uint64_t b_1803dc40b(CPU*s){
/* 1803dc40b: mov r11d, eax */
L_1803dc40b_0:;
L_1803dc40b_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803dc40b_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dc40b_3:;
/* 1803dc40e: mov eax, dword ptr [rdi + 0x3c] */
L_1803dc40e_0:;
L_1803dc40e_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c))));
L_1803dc40e_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc40e_3:;
wr(s->r,0,4,rd(s->u,16,4));
L_1803dc40e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc40e_5:;
/* 1803dc411: sar eax, 1 */
L_1803dc411_0:;
L_1803dc411_1:;
wr(s->u,98,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dc411_2:;
wr(s->r,512,1,(rd(s->u,98,4)!=((U)UINT64_C(0x0))));
L_1803dc411_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc411_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc411_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc411_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc411_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc411_8:;
wr(s->u,28,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc411_9:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dc411_10:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dc411_11:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dc411_12:;
/* 1803dc413: cdq  */
L_1803dc413_0:;
L_1803dc413_1:;
wr(s->u,34,8,(U)sx(rd(s->r,0,4),4));
L_1803dc413_2:;
wr(s->r,16,4,(rd(s->u,34,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dc413_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc413_4:;
/* 1803dc414: idiv r11d */
L_1803dc414_0:;
L_1803dc414_1:;
wr(s->u,42,8,(U)sx(rd(s->r,152,4),4));
L_1803dc414_2:;
wr(s->u,50,8,rd(s->r,16,4));
L_1803dc414_3:;
wr(s->u,58,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,50,8)<<((U)UINT64_C(0x20)))));
L_1803dc414_4:;
wr(s->u,66,8,rd(s->r,0,4));
L_1803dc414_5:;
wr(s->u,74,8,(rd(s->u,58,8)|rd(s->u,66,8)));
L_1803dc414_6:;
wr(s->u,82,8,((U)(sx(rd(s->u,74,8),8)/sx(rd(s->u,42,8),8))));
L_1803dc414_7:;
wr(s->r,0,4,(rd(s->u,82,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc414_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc414_9:;
wr(s->u,90,8,((U)(sx(rd(s->u,74,8),8)%sx(rd(s->u,42,8),8))));
L_1803dc414_10:;
wr(s->r,16,4,(rd(s->u,90,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc414_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc414_12:;
/* 1803dc417: mov esi, eax */
L_1803dc417_0:;
L_1803dc417_1:;
wr(s->r,48,4,rd(s->r,0,4));
L_1803dc417_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803dc417_3:;
/* 1803dc419: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc419_0:;
L_1803dc419_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc419_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc419_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dc419_4:;
/* 1803dc420: call 0x1803da8e0 */
L_1803dc420_0:;
L_1803dc420_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc420_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc425)));
L_1803dc420_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dc420_4:;
return UINT64_C(0x1803dc425);
}
uint64_t b_1803dc419(CPU*s){
/* 1803dc419: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc419_0:;
L_1803dc419_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc419_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc419_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc419_4:;
/* 1803dc420: call 0x1803da8e0 */
L_1803dc420_0:;
L_1803dc420_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc420_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc425)));
L_1803dc420_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dc420_4:;
return UINT64_C(0x1803dc425);
}
uint64_t b_1803dc425(CPU*s){
/* 1803dc425: mov ebx, eax */
L_1803dc425_0:;
L_1803dc425_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803dc425_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc425_3:;
/* 1803dc427: imul ebx, esi */
L_1803dc427_0:;
L_1803dc427_1:;
wr(s->u,44,8,(U)sx(rd(s->r,24,4),4));
L_1803dc427_2:;
wr(s->u,52,8,(U)sx(rd(s->r,48,4),4));
L_1803dc427_3:;
wr(s->u,60,8,(rd(s->u,44,8)*rd(s->u,52,8)));
L_1803dc427_4:;
wr(s->r,24,4,(rd(s->u,60,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc427_5:;
wr(s->u,68,4,(rd(s->u,60,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dc427_6:;
wr(s->u,28,8,(U)sx(rd(s->r,24,4),4));
L_1803dc427_7:;
wr(s->r,512,1,(rd(s->u,28,8)!=rd(s->u,60,8)));
L_1803dc427_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803dc427_9:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc427_10:;
/* 1803dc42a: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc42a_0:;
L_1803dc42a_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc42a_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc42a_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dc42a_4:;
/* 1803dc431: mov dword ptr [rdi + 0x44], ebx */
L_1803dc431_0:;
L_1803dc431_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x44))));
L_1803dc431_2:;
wr(s->u,16,4,rd(s->r,24,4));
L_1803dc431_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dc431_4:;
/* 1803dc434: mov edx, ebx */
L_1803dc434_0:;
L_1803dc434_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1803dc434_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc434_3:;
/* 1803dc436: mov rax, qword ptr [rcx] */
L_1803dc436_0:;
L_1803dc436_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dc436_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dc436_3:;
/* 1803dc439: call qword ptr [rax + 0x18] */
L_1803dc439_0:;
L_1803dc439_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x18))));
L_1803dc439_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc439_3:;
wr(s->u,36,8,rd(s->u,20,8));
L_1803dc439_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc439_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc43c)));
L_1803dc439_6:;
return (uint64_t)rd(s->u,36,8);
L_1803dc439_7:;
return UINT64_C(0x1803dc43c);
}
uint64_t b_1803dc42a(CPU*s){
/* 1803dc42a: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc42a_0:;
L_1803dc42a_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc42a_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc42a_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dc42a_4:;
/* 1803dc431: mov dword ptr [rdi + 0x44], ebx */
L_1803dc431_0:;
L_1803dc431_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x44))));
L_1803dc431_2:;
wr(s->u,16,4,rd(s->r,24,4));
L_1803dc431_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dc431_4:;
/* 1803dc434: mov edx, ebx */
L_1803dc434_0:;
L_1803dc434_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1803dc434_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc434_3:;
/* 1803dc436: mov rax, qword ptr [rcx] */
L_1803dc436_0:;
L_1803dc436_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dc436_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dc436_3:;
/* 1803dc439: call qword ptr [rax + 0x18] */
L_1803dc439_0:;
L_1803dc439_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x18))));
L_1803dc439_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc439_3:;
wr(s->u,28,8,rd(s->u,20,8));
L_1803dc439_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc439_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc43c)));
L_1803dc439_6:;
return (uint64_t)rd(s->u,28,8);
L_1803dc439_7:;
return UINT64_C(0x1803dc43c);
}
uint64_t b_1803dc43c(CPU*s){
/* 1803dc43c: mov edx, dword ptr [rdi + 0x3c] */
L_1803dc43c_0:;
L_1803dc43c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c))));
L_1803dc43c_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc43c_3:;
wr(s->r,16,4,rd(s->u,36,4));
L_1803dc43c_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc43c_5:;
/* 1803dc43f: mov dword ptr [rdi + 0x8c], r14d */
L_1803dc43f_0:;
L_1803dc43f_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x8c))));
L_1803dc43f_2:;
wr(s->u,32,4,rd(s->r,176,4));
L_1803dc43f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803dc43f_4:;
/* 1803dc446: lea ecx, [rdx + rdx] */
L_1803dc446_0:;
L_1803dc446_1:;
wr(s->u,16,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803dc446_2:;
wr(s->u,24,8,(rd(s->r,16,8)+rd(s->u,16,8)));
L_1803dc446_3:;
wr(s->r,8,4,(rd(s->u,24,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc446_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc446_5:;
/* 1803dc449: mov dword ptr [rdi + 0x88], r12d */
L_1803dc449_0:;
L_1803dc449_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x88))));
L_1803dc449_2:;
wr(s->u,32,4,rd(s->r,160,4));
L_1803dc449_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803dc449_4:;
/* 1803dc450: lea eax, [rcx + r15] */
L_1803dc450_0:;
L_1803dc450_1:;
wr(s->u,16,8,(rd(s->r,184,8)*((U)UINT64_C(0x1))));
L_1803dc450_2:;
wr(s->u,24,8,(rd(s->r,8,8)+rd(s->u,16,8)));
L_1803dc450_3:;
wr(s->r,0,4,(rd(s->u,24,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc450_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc450_5:;
/* 1803dc454: neg eax */
L_1803dc454_0:;
L_1803dc454_1:;
wr(s->r,512,1,(rd(s->r,0,4)!=((U)UINT64_C(0x0))));
L_1803dc454_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,0,4),4,1));
L_1803dc454_3:;
wr(s->r,0,4,(-rd(s->r,0,4)));
L_1803dc454_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc454_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc454_6:;
wr(s->u,42,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc454_7:;
wr(s->u,46,1,pop(rd(s->u,42,4),4));
L_1803dc454_8:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803dc454_9:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803dc454_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc454_11:;
/* 1803dc456: movd xmm1, ecx */
L_1803dc456_0:;
L_1803dc456_1:;
wr(s->r,4672,16,rd(s->r,8,4));
L_1803dc456_2:;
/* 1803dc45a: mov dword ptr [rdi + 0x84], eax */
L_1803dc45a_0:;
L_1803dc45a_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x84))));
L_1803dc45a_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dc45a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803dc45a_4:;
/* 1803dc460: cvtdq2ps xmm1, xmm1 */
L_1803dc460_0:;
L_1803dc460_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803dc460_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803dc460_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803dc460_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803dc460_5:;
/* 1803dc463: movaps xmm0, xmm1 */
L_1803dc463_0:;
L_1803dc463_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803dc463_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803dc463_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803dc463_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803dc463_5:;
/* 1803dc466: divss xmm0, dword ptr [rdi + 0x18] */
L_1803dc466_0:;
L_1803dc466_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803dc466_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc466_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->u,32,4),4),4));
L_1803dc466_4:;
/* 1803dc46b: comiss xmm1, xmm0 */
L_1803dc46b_0:;
L_1803dc46b_1:;
wr(s->u,48,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803dc46b_2:;
wr(s->u,49,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dc46b_3:;
wr(s->r,514,1,((rd(s->u,48,1)!=0)||(rd(s->u,49,1)!=0)));
L_1803dc46b_4:;
wr(s->u,50,1,(fv(rd(s->r,4672,4),4)==fv(rd(s->r,4608,4),4)));
L_1803dc46b_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,50,1)));
L_1803dc46b_6:;
wr(s->u,51,1,(fv(rd(s->r,4672,4),4)<fv(rd(s->r,4608,4),4)));
L_1803dc46b_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,51,1)));
L_1803dc46b_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc46b_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dc46b_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dc46b_11:;
/* 1803dc46e: ja 0x1803dc473 */
L_1803dc46e_0:;
L_1803dc46e_1:;
wr(s->u,40,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803dc46e_2:;
wr(s->u,41,1,(!rd(s->u,40,1)));
L_1803dc46e_3:;
if(rd(s->u,41,1)){return UINT64_C(0x1803dc473);}
L_1803dc46e_4:;
return UINT64_C(0x1803dc470);
}
uint64_t b_1803dc470(CPU*s){
/* 1803dc470: movaps xmm1, xmm0 */
L_1803dc470_0:;
L_1803dc470_1:;
wr(s->r,4672,4,rd(s->r,4608,4));
L_1803dc470_2:;
wr(s->r,4676,4,rd(s->r,4612,4));
L_1803dc470_3:;
wr(s->r,4680,4,rd(s->r,4616,4));
L_1803dc470_4:;
wr(s->r,4684,4,rd(s->r,4620,4));
L_1803dc470_5:;
/* 1803dc473: sar edx, 1 */
L_1803dc473_0:;
L_1803dc473_1:;
wr(s->u,42,4,(rd(s->r,16,4)&((U)UINT64_C(0x1))));
L_1803dc473_2:;
wr(s->r,512,1,(rd(s->u,42,4)!=((U)UINT64_C(0x0))));
L_1803dc473_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc473_4:;
wr(s->r,16,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,16,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,16,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc473_5:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc473_6:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc473_7:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc473_8:;
wr(s->u,28,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc473_9:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dc473_10:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dc473_11:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dc473_12:;
/* 1803dc475: movd xmm0, edx */
L_1803dc475_0:;
L_1803dc475_1:;
wr(s->r,4608,16,rd(s->r,16,4));
L_1803dc475_2:;
/* 1803dc479: cvtdq2ps xmm0, xmm0 */
L_1803dc479_0:;
L_1803dc479_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dc479_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dc479_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dc479_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dc479_5:;
/* 1803dc47c: addss xmm0, xmm1 */
L_1803dc47c_0:;
L_1803dc47c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803dc47c_2:;
/* 1803dc480: mulss xmm0, dword ptr [rdi + 0x24] */
L_1803dc480_0:;
L_1803dc480_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x24))));
L_1803dc480_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc480_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803dc480_4:;
/* 1803dc485: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc485_0:;
L_1803dc485_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc485_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc485_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dc485_4:;
/* 1803dc48c: cvttss2si eax, xmm0 */
L_1803dc48c_0:;
L_1803dc48c_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803dc48c_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc48c_3:;
/* 1803dc490: mov dword ptr [rdi + 0x74], eax */
L_1803dc490_0:;
L_1803dc490_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x74))));
L_1803dc490_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803dc490_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dc490_4:;
/* 1803dc493: mov rax, qword ptr [rcx] */
L_1803dc493_0:;
L_1803dc493_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dc493_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dc493_3:;
/* 1803dc496: call qword ptr [rax + 0x48] */
L_1803dc496_0:;
L_1803dc496_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x48))));
L_1803dc496_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc496_3:;
wr(s->u,34,8,rd(s->u,20,8));
L_1803dc496_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc496_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc499)));
L_1803dc496_6:;
return (uint64_t)rd(s->u,34,8);
L_1803dc496_7:;
return UINT64_C(0x1803dc499);
}
uint64_t b_1803dc473(CPU*s){
/* 1803dc473: sar edx, 1 */
L_1803dc473_0:;
L_1803dc473_1:;
wr(s->u,42,4,(rd(s->r,16,4)&((U)UINT64_C(0x1))));
L_1803dc473_2:;
wr(s->r,512,1,(rd(s->u,42,4)!=((U)UINT64_C(0x0))));
L_1803dc473_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc473_4:;
wr(s->r,16,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,16,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,16,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc473_5:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc473_6:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc473_7:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc473_8:;
wr(s->u,28,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc473_9:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dc473_10:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dc473_11:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dc473_12:;
/* 1803dc475: movd xmm0, edx */
L_1803dc475_0:;
L_1803dc475_1:;
wr(s->r,4608,16,rd(s->r,16,4));
L_1803dc475_2:;
/* 1803dc479: cvtdq2ps xmm0, xmm0 */
L_1803dc479_0:;
L_1803dc479_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dc479_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dc479_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dc479_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dc479_5:;
/* 1803dc47c: addss xmm0, xmm1 */
L_1803dc47c_0:;
L_1803dc47c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803dc47c_2:;
/* 1803dc480: mulss xmm0, dword ptr [rdi + 0x24] */
L_1803dc480_0:;
L_1803dc480_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x24))));
L_1803dc480_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc480_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803dc480_4:;
/* 1803dc485: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc485_0:;
L_1803dc485_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc485_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc485_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dc485_4:;
/* 1803dc48c: cvttss2si eax, xmm0 */
L_1803dc48c_0:;
L_1803dc48c_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803dc48c_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc48c_3:;
/* 1803dc490: mov dword ptr [rdi + 0x74], eax */
L_1803dc490_0:;
L_1803dc490_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x74))));
L_1803dc490_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803dc490_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dc490_4:;
/* 1803dc493: mov rax, qword ptr [rcx] */
L_1803dc493_0:;
L_1803dc493_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dc493_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dc493_3:;
/* 1803dc496: call qword ptr [rax + 0x48] */
L_1803dc496_0:;
L_1803dc496_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x48))));
L_1803dc496_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc496_3:;
wr(s->u,34,8,rd(s->u,20,8));
L_1803dc496_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc496_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc499)));
L_1803dc496_6:;
return (uint64_t)rd(s->u,34,8);
L_1803dc496_7:;
return UINT64_C(0x1803dc499);
}
uint64_t b_1803dc485(CPU*s){
/* 1803dc485: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc485_0:;
L_1803dc485_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc485_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc485_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dc485_4:;
/* 1803dc48c: cvttss2si eax, xmm0 */
L_1803dc48c_0:;
L_1803dc48c_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803dc48c_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc48c_3:;
/* 1803dc490: mov dword ptr [rdi + 0x74], eax */
L_1803dc490_0:;
L_1803dc490_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x74))));
L_1803dc490_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803dc490_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dc490_4:;
/* 1803dc493: mov rax, qword ptr [rcx] */
L_1803dc493_0:;
L_1803dc493_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dc493_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dc493_3:;
/* 1803dc496: call qword ptr [rax + 0x48] */
L_1803dc496_0:;
L_1803dc496_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x48))));
L_1803dc496_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc496_3:;
wr(s->u,28,8,rd(s->u,20,8));
L_1803dc496_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc496_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc499)));
L_1803dc496_6:;
return (uint64_t)rd(s->u,28,8);
L_1803dc496_7:;
return UINT64_C(0x1803dc499);
}
uint64_t b_1803dc499(CPU*s){
/* 1803dc499: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc499_0:;
L_1803dc499_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc499_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc499_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dc499_4:;
/* 1803dc4a0: movd xmm0, eax */
L_1803dc4a0_0:;
L_1803dc4a0_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803dc4a0_2:;
/* 1803dc4a4: cvtdq2ps xmm0, xmm0 */
L_1803dc4a4_0:;
L_1803dc4a4_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dc4a4_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dc4a4_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dc4a4_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dc4a4_5:;
/* 1803dc4a7: divss xmm0, dword ptr [rdi + 0x18] */
L_1803dc4a7_0:;
L_1803dc4a7_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803dc4a7_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc4a7_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->u,16,4),4),4));
L_1803dc4a7_4:;
/* 1803dc4ac: cvttss2si eax, xmm0 */
L_1803dc4ac_0:;
L_1803dc4ac_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803dc4ac_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc4ac_3:;
/* 1803dc4b0: sub dword ptr [rdi + 0x74], eax */
L_1803dc4b0_0:;
L_1803dc4b0_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x74))));
L_1803dc4b0_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc4b0_3:;
wr(s->r,512,1,(rd(s->u,16,4)<rd(s->r,0,4)));
L_1803dc4b0_4:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc4b0_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,16,4),rd(s->r,0,4),4,1));
L_1803dc4b0_6:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc4b0_7:;
wr(s->u,16,4,(rd(s->u,16,4)-rd(s->r,0,4)));
L_1803dc4b0_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dc4b0_9:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc4b0_10:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc4b0_11:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc4b0_12:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_1803dc4b0_13:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc4b0_14:;
wr(s->u,28,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_1803dc4b0_15:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dc4b0_16:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dc4b0_17:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dc4b0_18:;
/* 1803dc4b3: call 0x1803da8c0 */
L_1803dc4b3_0:;
L_1803dc4b3_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc4b3_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc4b8)));
L_1803dc4b3_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc4b3_4:;
return UINT64_C(0x1803dc4b8);
}
uint64_t b_1803dc4b8(CPU*s){
/* 1803dc4b8: movss xmm0, dword ptr [rdi + 0x18] */
L_1803dc4b8_0:;
L_1803dc4b8_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803dc4b8_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc4b8_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803dc4b8_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dc4b8_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dc4b8_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dc4b8_7:;
/* 1803dc4bd: add eax, dword ptr [rdi + 0x64] */
L_1803dc4bd_0:;
L_1803dc4bd_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x64))));
L_1803dc4bd_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc4bd_3:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->u,12,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803dc4bd_4:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc4bd_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,12,4),4,0));
L_1803dc4bd_6:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc4bd_7:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->u,12,4)));
L_1803dc4bd_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc4bd_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc4bd_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc4bd_11:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc4bd_12:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803dc4bd_13:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803dc4bd_14:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803dc4bd_15:;
/* 1803dc4c0: movd xmm1, ebp */
L_1803dc4c0_0:;
L_1803dc4c0_1:;
wr(s->r,4672,16,rd(s->r,40,4));
L_1803dc4c0_2:;
/* 1803dc4c4: mov rcx, rdi */
L_1803dc4c4_0:;
L_1803dc4c4_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803dc4c4_2:;
/* 1803dc4c7: divss xmm0, dword ptr [rdi + 0x24] */
L_1803dc4c7_0:;
L_1803dc4c7_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x24))));
L_1803dc4c7_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc4c7_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->u,8,4),4),4));
L_1803dc4c7_4:;
/* 1803dc4cc: add dword ptr [rdi + 0x74], eax */
L_1803dc4cc_0:;
L_1803dc4cc_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x74))));
L_1803dc4cc_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc4cc_3:;
wr(s->r,512,1,(((rd(s->u,8,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->u,8,4)));
L_1803dc4cc_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc4cc_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,0,4),4,0));
L_1803dc4cc_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc4cc_7:;
wr(s->u,8,4,(rd(s->u,8,4)+rd(s->r,0,4)));
L_1803dc4cc_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dc4cc_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc4cc_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc4cc_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc4cc_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803dc4cc_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc4cc_14:;
wr(s->u,24,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803dc4cc_15:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803dc4cc_16:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803dc4cc_17:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803dc4cc_18:;
/* 1803dc4cf: mov rax, qword ptr [rdi] */
L_1803dc4cf_0:;
L_1803dc4cf_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803dc4cf_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dc4cf_3:;
/* 1803dc4d2: cvtdq2ps xmm1, xmm1 */
L_1803dc4d2_0:;
L_1803dc4d2_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803dc4d2_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803dc4d2_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803dc4d2_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803dc4d2_5:;
/* 1803dc4d5: divss xmm1, xmm0 */
L_1803dc4d5_0:;
L_1803dc4d5_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4608,4),4),4));
L_1803dc4d5_2:;
/* 1803dc4d9: unpcklps xmm1, xmm1 */
L_1803dc4d9_0:;
L_1803dc4d9_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803dc4d9_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803dc4d9_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803dc4d9_4:;
/* 1803dc4dc: cvtps2pd xmm6, xmm1 */
L_1803dc4dc_0:;
L_1803dc4dc_1:;
wr(s->u,38,8,rd(s->r,4672,8));
L_1803dc4dc_2:;
wr(s->r,4992,8,fb(fv(rd(s->u,38,4),4),8));
L_1803dc4dc_3:;
wr(s->r,5000,8,fb(fv(rd(s->u,42,4),4),8));
L_1803dc4dc_4:;
/* 1803dc4df: call qword ptr [rax + 0x78] */
L_1803dc4df_0:;
L_1803dc4df_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x78))));
L_1803dc4df_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc4df_3:;
wr(s->u,30,8,rd(s->u,16,8));
L_1803dc4df_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc4df_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc4e2)));
L_1803dc4df_6:;
return (uint64_t)rd(s->u,30,8);
L_1803dc4df_7:;
return UINT64_C(0x1803dc4e2);
}
uint64_t b_1803dc4e2(CPU*s){
/* 1803dc4e2: mov r15, qword ptr [rsp + 0x60] */
L_1803dc4e2_0:;
L_1803dc4e2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dc4e2_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc4e2_3:;
wr(s->r,184,8,rd(s->u,44,8));
L_1803dc4e2_4:;
/* 1803dc4e7: mov rsi, qword ptr [rsp + 0xa0] */
L_1803dc4e7_0:;
L_1803dc4e7_1:;
wr(s->u,16,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_1803dc4e7_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dc4e7_3:;
wr(s->r,48,8,rd(s->u,44,8));
L_1803dc4e7_4:;
/* 1803dc4ef: mov rbx, qword ptr [rsp + 0x90] */
L_1803dc4ef_0:;
L_1803dc4ef_1:;
wr(s->u,16,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803dc4ef_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dc4ef_3:;
wr(s->r,24,8,rd(s->u,44,8));
L_1803dc4ef_4:;
/* 1803dc4f7: subsd xmm6, xmm0 */
L_1803dc4f7_0:;
L_1803dc4f7_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803dc4f7_2:;
/* 1803dc4fb: cvttsd2si eax, xmm6 */
L_1803dc4fb_0:;
L_1803dc4fb_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4992,8),8),4));
L_1803dc4fb_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc4fb_3:;
/* 1803dc4ff: movaps xmm6, xmmword ptr [rsp + 0x50] */
L_1803dc4ff_0:;
L_1803dc4ff_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dc4ff_2:;
wr(s->u,28,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803dc4ff_3:;
wr(s->u,70,16,rd(s->u,28,16));
L_1803dc4ff_4:;
wr(s->r,4992,4,rd(s->u,70,4));
L_1803dc4ff_5:;
wr(s->r,4996,4,rd(s->u,74,4));
L_1803dc4ff_6:;
wr(s->r,5000,4,rd(s->u,78,4));
L_1803dc4ff_7:;
wr(s->r,5004,4,rd(s->u,82,4));
L_1803dc4ff_8:;
/* 1803dc504: mov dword ptr [rdi + 0x78], eax */
L_1803dc504_0:;
L_1803dc504_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x78))));
L_1803dc504_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803dc504_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dc504_4:;
/* 1803dc507: movd xmm1, eax */
L_1803dc507_0:;
L_1803dc507_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803dc507_2:;
/* 1803dc50b: cvtdq2ps xmm1, xmm1 */
L_1803dc50b_0:;
L_1803dc50b_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803dc50b_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803dc50b_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803dc50b_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803dc50b_5:;
/* 1803dc50e: movaps xmm0, xmm1 */
L_1803dc50e_0:;
L_1803dc50e_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803dc50e_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803dc50e_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803dc50e_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803dc50e_5:;
/* 1803dc511: divss xmm0, dword ptr [rdi + 0x24] */
L_1803dc511_0:;
L_1803dc511_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x24))));
L_1803dc511_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc511_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->u,24,4),4),4));
L_1803dc511_4:;
/* 1803dc516: subss xmm1, xmm0 */
L_1803dc516_0:;
L_1803dc516_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803dc516_2:;
/* 1803dc51a: cvttss2si eax, xmm1 */
L_1803dc51a_0:;
L_1803dc51a_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dc51a_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc51a_3:;
/* 1803dc51e: mov dword ptr [rdi + 0x7c], eax */
L_1803dc51e_0:;
L_1803dc51e_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x7c))));
L_1803dc51e_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803dc51e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dc51e_4:;
/* 1803dc521: mov eax, ebp */
L_1803dc521_0:;
L_1803dc521_1:;
wr(s->r,0,4,rd(s->r,40,4));
L_1803dc521_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc521_3:;
/* 1803dc523: mov rbp, qword ptr [rsp + 0x98] */
L_1803dc523_0:;
L_1803dc523_1:;
wr(s->u,16,8,(((U)UINT64_C(0x98))+rd(s->r,32,8)));
L_1803dc523_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dc523_3:;
wr(s->r,40,8,rd(s->u,44,8));
L_1803dc523_4:;
/* 1803dc52b: add rsp, 0x68 */
L_1803dc52b_0:;
L_1803dc52b_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x68)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dc52b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x68)),8,0));
L_1803dc52b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x68))));
L_1803dc52b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc52b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dc52b_6:;
wr(s->u,52,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dc52b_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803dc52b_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803dc52b_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803dc52b_10:;
/* 1803dc52f: pop r14 */
L_1803dc52f_0:;
L_1803dc52f_1:;
wr(s->u,62,8,((U)UINT64_C(0x0)));
L_1803dc52f_2:;
wr(s->u,62,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc52f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc52f_4:;
wr(s->r,176,8,rd(s->u,62,8));
L_1803dc52f_5:;
/* 1803dc531: pop r13 */
L_1803dc531_0:;
L_1803dc531_1:;
wr(s->u,62,8,((U)UINT64_C(0x0)));
L_1803dc531_2:;
wr(s->u,62,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc531_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc531_4:;
wr(s->r,168,8,rd(s->u,62,8));
L_1803dc531_5:;
/* 1803dc533: pop r12 */
L_1803dc533_0:;
L_1803dc533_1:;
wr(s->u,62,8,((U)UINT64_C(0x0)));
L_1803dc533_2:;
wr(s->u,62,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc533_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc533_4:;
wr(s->r,160,8,rd(s->u,62,8));
L_1803dc533_5:;
/* 1803dc535: pop rdi */
L_1803dc535_0:;
L_1803dc535_1:;
wr(s->u,62,8,((U)UINT64_C(0x0)));
L_1803dc535_2:;
wr(s->u,62,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc535_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc535_4:;
wr(s->r,56,8,rd(s->u,62,8));
L_1803dc535_5:;
/* 1803dc536: ret  */
L_1803dc536_0:;
L_1803dc536_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc536_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc536_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dc536_4:;
return UINT64_C(0x1803dc537);
}
uint64_t b_1803dc540(CPU*s){
/* 1803dc540: push rbx */
L_1803dc540_0:;
L_1803dc540_1:;
wr(s->u,24,8,rd(s->r,24,8));
L_1803dc540_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc540_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803dc540_4:;
/* 1803dc542: sub rsp, 0x20 */
L_1803dc542_0:;
L_1803dc542_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803dc542_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803dc542_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803dc542_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc542_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dc542_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dc542_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803dc542_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803dc542_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803dc542_10:;
/* 1803dc546: mov rbx, rcx */
L_1803dc546_0:;
L_1803dc546_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803dc546_2:;
/* 1803dc549: mov rcx, qword ptr [rcx + 0x66f0] */
L_1803dc549_0:;
L_1803dc549_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x66f0))));
L_1803dc549_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc549_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dc549_4:;
/* 1803dc550: mov rax, qword ptr [rcx] */
L_1803dc550_0:;
L_1803dc550_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dc550_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dc550_3:;
/* 1803dc553: call qword ptr [rax + 0x60] */
L_1803dc553_0:;
L_1803dc553_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x60))));
L_1803dc553_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc553_3:;
wr(s->u,42,8,rd(s->u,16,8));
L_1803dc553_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc553_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc556)));
L_1803dc553_6:;
return (uint64_t)rd(s->u,42,8);
L_1803dc553_7:;
return UINT64_C(0x1803dc556);
}
uint64_t b_1803dc556(CPU*s){
/* 1803dc556: add eax, dword ptr [rbx + 0x78] */
L_1803dc556_0:;
L_1803dc556_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x78))));
L_1803dc556_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc556_3:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->u,8,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803dc556_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc556_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,8,4),4,0));
L_1803dc556_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc556_7:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->u,8,4)));
L_1803dc556_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc556_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc556_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc556_11:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc556_12:;
wr(s->u,20,1,pop(rd(s->u,12,4),4));
L_1803dc556_13:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dc556_14:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dc556_15:;
/* 1803dc559: movd xmm0, eax */
L_1803dc559_0:;
L_1803dc559_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803dc559_2:;
/* 1803dc55d: cvtdq2pd xmm0, xmm0 */
L_1803dc55d_0:;
L_1803dc55d_1:;
wr(s->u,30,8,rd(s->r,4608,8));
L_1803dc55d_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,30,4),4),8));
L_1803dc55d_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,34,4),4),8));
L_1803dc55d_4:;
/* 1803dc561: add rsp, 0x20 */
L_1803dc561_0:;
L_1803dc561_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dc561_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803dc561_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803dc561_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc561_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dc561_6:;
wr(s->u,12,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dc561_7:;
wr(s->u,20,1,pop(rd(s->u,12,8),8));
L_1803dc561_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dc561_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dc561_10:;
/* 1803dc565: pop rbx */
L_1803dc565_0:;
L_1803dc565_1:;
wr(s->u,22,8,((U)UINT64_C(0x0)));
L_1803dc565_2:;
wr(s->u,22,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc565_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc565_4:;
wr(s->r,24,8,rd(s->u,22,8));
L_1803dc565_5:;
/* 1803dc566: ret  */
L_1803dc566_0:;
L_1803dc566_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc566_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc566_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dc566_4:;
return UINT64_C(0x1803dc567);
}
uint64_t b_1803dc570(CPU*s){
/* 1803dc570: push rsi */
L_1803dc570_0:;
L_1803dc570_1:;
wr(s->u,40,8,rd(s->r,48,8));
L_1803dc570_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc570_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,40,8));
L_1803dc570_4:;
/* 1803dc572: sub rsp, 0x30 */
L_1803dc572_0:;
L_1803dc572_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803dc572_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803dc572_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803dc572_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc572_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dc572_6:;
wr(s->u,48,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dc572_7:;
wr(s->u,56,1,pop(rd(s->u,48,8),8));
L_1803dc572_8:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803dc572_9:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803dc572_10:;
/* 1803dc576: mov rsi, rcx */
L_1803dc576_0:;
L_1803dc576_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1803dc576_2:;
/* 1803dc579: mov rcx, qword ptr [rcx + 0x66f0] */
L_1803dc579_0:;
L_1803dc579_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x66f0))));
L_1803dc579_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc579_3:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803dc579_4:;
/* 1803dc580: mov qword ptr [rsp + 0x40], rbx */
L_1803dc580_0:;
L_1803dc580_1:;
wr(s->u,16,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dc580_2:;
wr(s->u,24,8,rd(s->r,24,8));
L_1803dc580_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803dc580_4:;
/* 1803dc585: mov rax, qword ptr [rcx] */
L_1803dc585_0:;
L_1803dc585_1:;
wr(s->u,32,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dc585_2:;
wr(s->r,0,8,rd(s->u,32,8));
L_1803dc585_3:;
/* 1803dc588: mov qword ptr [rsp + 0x20], r13 */
L_1803dc588_0:;
L_1803dc588_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dc588_2:;
wr(s->u,24,8,rd(s->r,168,8));
L_1803dc588_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803dc588_4:;
/* 1803dc58d: call qword ptr [rax + 0x48] */
L_1803dc58d_0:;
L_1803dc58d_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x48))));
L_1803dc58d_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc58d_3:;
wr(s->u,58,8,rd(s->u,32,8));
L_1803dc58d_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc58d_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc590)));
L_1803dc58d_6:;
return (uint64_t)rd(s->u,58,8);
L_1803dc58d_7:;
return UINT64_C(0x1803dc590);
}
uint64_t b_1803dc580(CPU*s){
/* 1803dc580: mov qword ptr [rsp + 0x40], rbx */
L_1803dc580_0:;
L_1803dc580_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dc580_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803dc580_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dc580_4:;
/* 1803dc585: mov rax, qword ptr [rcx] */
L_1803dc585_0:;
L_1803dc585_1:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dc585_2:;
wr(s->r,0,8,rd(s->u,24,8));
L_1803dc585_3:;
/* 1803dc588: mov qword ptr [rsp + 0x20], r13 */
L_1803dc588_0:;
L_1803dc588_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dc588_2:;
wr(s->u,16,8,rd(s->r,168,8));
L_1803dc588_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dc588_4:;
/* 1803dc58d: call qword ptr [rax + 0x48] */
L_1803dc58d_0:;
L_1803dc58d_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x48))));
L_1803dc58d_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc58d_3:;
wr(s->u,32,8,rd(s->u,24,8));
L_1803dc58d_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc58d_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc590)));
L_1803dc58d_6:;
return (uint64_t)rd(s->u,32,8);
L_1803dc58d_7:;
return UINT64_C(0x1803dc590);
}
uint64_t b_1803dc590(CPU*s){
/* 1803dc590: mov r13d, 1 */
L_1803dc590_0:;
L_1803dc590_1:;
wr(s->r,168,8,((U)UINT64_C(0x1)));
L_1803dc590_2:;
/* 1803dc596: test eax, eax */
L_1803dc596_0:;
L_1803dc596_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dc596_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc596_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803dc596_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc596_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803dc596_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803dc596_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803dc596_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803dc596_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803dc596_10:;
/* 1803dc598: jns 0x1803dc712 */
L_1803dc598_0:;
L_1803dc598_1:;
wr(s->u,0,1,(!rd(s->r,519,1)));
L_1803dc598_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dc712);}
L_1803dc598_3:;
return UINT64_C(0x1803dc59e);
}
uint64_t b_1803dc59e(CPU*s){
/* 1803dc59e: cmp dword ptr [rsi + 0xc0], 0 */
L_1803dc59e_0:;
L_1803dc59e_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xc0))));
L_1803dc59e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc59e_3:;
wr(s->u,18,4,rd(s->u,8,4));
L_1803dc59e_4:;
wr(s->r,512,1,(rd(s->u,18,4)<((U)UINT64_C(0x0))));
L_1803dc59e_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),((U)UINT64_C(0x0)),4,1));
L_1803dc59e_6:;
wr(s->u,22,4,(rd(s->u,18,4)-((U)UINT64_C(0x0))));
L_1803dc59e_7:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc59e_8:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803dc59e_9:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803dc59e_10:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803dc59e_11:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803dc59e_12:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803dc59e_13:;
/* 1803dc5a5: je 0x1803dc601 */
L_1803dc5a5_0:;
L_1803dc5a5_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dc601);}
L_1803dc5a5_2:;
return UINT64_C(0x1803dc5a7);
}
uint64_t b_1803dc5a7(CPU*s){
/* 1803dc5a7: mov ebx, dword ptr [rsi + 0x80] */
L_1803dc5a7_0:;
L_1803dc5a7_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x80))));
L_1803dc5a7_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dc5a7_3:;
wr(s->r,24,4,rd(s->u,20,4));
L_1803dc5a7_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc5a7_5:;
/* 1803dc5ad: mov rcx, qword ptr [rsi + 0x6710] */
L_1803dc5ad_0:;
L_1803dc5ad_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x6710))));
L_1803dc5ad_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc5ad_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803dc5ad_4:;
/* 1803dc5b4: movss xmm3, dword ptr [rip + 0x270688] */
L_1803dc5b4_0:;
L_1803dc5b4_1:;
wr(s->r,4800,4,mr(UINT64_C(0x18064cc44),4));
L_1803dc5b4_2:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803dc5b4_3:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803dc5b4_4:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803dc5b4_5:;
/* 1803dc5bc: movss xmm2, dword ptr [rsi + 0x24] */
L_1803dc5bc_0:;
L_1803dc5bc_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x24))));
L_1803dc5bc_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc5bc_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803dc5bc_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803dc5bc_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803dc5bc_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803dc5bc_7:;
/* 1803dc5c1: mov edx, ebx */
L_1803dc5c1_0:;
L_1803dc5c1_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1803dc5c1_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc5c1_3:;
/* 1803dc5c3: call 0x1803e1b50 */
L_1803dc5c3_0:;
L_1803dc5c3_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc5c3_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc5c8)));
L_1803dc5c3_3:;
return (uint64_t)UINT64_C(0x1803e1b50);
L_1803dc5c3_4:;
return UINT64_C(0x1803dc5c8);
}
uint64_t b_1803dc5c8(CPU*s){
/* 1803dc5c8: cmp ebx, eax */
L_1803dc5c8_0:;
L_1803dc5c8_1:;
wr(s->u,9,4,rd(s->r,0,4));
L_1803dc5c8_2:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,9,4)));
L_1803dc5c8_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,9,4),4,1));
L_1803dc5c8_4:;
wr(s->u,13,4,(rd(s->r,24,4)-rd(s->u,9,4)));
L_1803dc5c8_5:;
wr(s->r,519,1,(sx(rd(s->u,13,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc5c8_6:;
wr(s->r,518,1,(rd(s->u,13,4)==((U)UINT64_C(0x0))));
L_1803dc5c8_7:;
wr(s->u,3,4,(rd(s->u,13,4)&((U)UINT64_C(0xff))));
L_1803dc5c8_8:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803dc5c8_9:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803dc5c8_10:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803dc5c8_11:;
/* 1803dc5ca: jg 0x1803dc5e9 */
L_1803dc5ca_0:;
L_1803dc5ca_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803dc5ca_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dc5ca_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803dc5ca_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803dc5e9);}
L_1803dc5ca_5:;
return UINT64_C(0x1803dc5cc);
}
uint64_t b_1803dc5cc(CPU*s){
/* 1803dc5cc: mov rcx, qword ptr [rsi + 0x6710] */
L_1803dc5cc_0:;
L_1803dc5cc_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x6710))));
L_1803dc5cc_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc5cc_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dc5cc_4:;
/* 1803dc5d3: movss xmm3, dword ptr [rip + 0x270669] */
L_1803dc5d3_0:;
L_1803dc5d3_1:;
wr(s->r,4800,4,mr(UINT64_C(0x18064cc44),4));
L_1803dc5d3_2:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803dc5d3_3:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803dc5d3_4:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803dc5d3_5:;
/* 1803dc5db: movss xmm2, dword ptr [rsi + 0x24] */
L_1803dc5db_0:;
L_1803dc5db_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x24))));
L_1803dc5db_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc5db_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803dc5db_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803dc5db_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803dc5db_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803dc5db_7:;
/* 1803dc5e0: mov edx, ebx */
L_1803dc5e0_0:;
L_1803dc5e0_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1803dc5e0_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc5e0_3:;
/* 1803dc5e2: call 0x1803e1b50 */
L_1803dc5e2_0:;
L_1803dc5e2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc5e2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc5e7)));
L_1803dc5e2_3:;
return (uint64_t)UINT64_C(0x1803e1b50);
L_1803dc5e2_4:;
return UINT64_C(0x1803dc5e7);
}
uint64_t b_1803dc5e7(CPU*s){
/* 1803dc5e7: mov ebx, eax */
L_1803dc5e7_0:;
L_1803dc5e7_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803dc5e7_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc5e7_3:;
/* 1803dc5e9: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dc5e9_0:;
L_1803dc5e9_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dc5e9_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc5e9_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dc5e9_4:;
/* 1803dc5f0: mov edx, ebx */
L_1803dc5f0_0:;
L_1803dc5f0_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1803dc5f0_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc5f0_3:;
/* 1803dc5f2: mov r8, qword ptr [rcx] */
L_1803dc5f2_0:;
L_1803dc5f2_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dc5f2_2:;
wr(s->r,128,8,rd(s->u,16,8));
L_1803dc5f2_3:;
/* 1803dc5f5: call qword ptr [r8 + 0x18] */
L_1803dc5f5_0:;
L_1803dc5f5_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x18))));
L_1803dc5f5_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc5f5_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803dc5f5_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc5f5_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc5f9)));
L_1803dc5f5_6:;
return (uint64_t)rd(s->u,24,8);
L_1803dc5f5_7:;
return UINT64_C(0x1803dc5f9);
}
uint64_t b_1803dc5e9(CPU*s){
/* 1803dc5e9: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dc5e9_0:;
L_1803dc5e9_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dc5e9_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc5e9_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dc5e9_4:;
/* 1803dc5f0: mov edx, ebx */
L_1803dc5f0_0:;
L_1803dc5f0_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1803dc5f0_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc5f0_3:;
/* 1803dc5f2: mov r8, qword ptr [rcx] */
L_1803dc5f2_0:;
L_1803dc5f2_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dc5f2_2:;
wr(s->r,128,8,rd(s->u,16,8));
L_1803dc5f2_3:;
/* 1803dc5f5: call qword ptr [r8 + 0x18] */
L_1803dc5f5_0:;
L_1803dc5f5_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x18))));
L_1803dc5f5_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc5f5_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803dc5f5_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc5f5_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc5f9)));
L_1803dc5f5_6:;
return (uint64_t)rd(s->u,24,8);
L_1803dc5f5_7:;
return UINT64_C(0x1803dc5f9);
}
uint64_t b_1803dc5f9(CPU*s){
/* 1803dc5f9: mov dword ptr [rsi + 0x70], eax */
L_1803dc5f9_0:;
L_1803dc5f9_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x70))));
L_1803dc5f9_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803dc5f9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dc5f9_4:;
/* 1803dc5fc: jmp 0x1803dc6ea */
L_1803dc5fc_0:;
L_1803dc5fc_1:;
return UINT64_C(0x1803dc6ea);
L_1803dc5fc_2:;
return UINT64_C(0x1803dc601);
}
uint64_t b_1803dc601(CPU*s){
/* 1803dc601: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dc601_0:;
L_1803dc601_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dc601_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc601_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803dc601_4:;
/* 1803dc608: mov qword ptr [rsp + 0x48], rbp */
L_1803dc608_0:;
L_1803dc608_1:;
wr(s->u,8,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803dc608_2:;
wr(s->u,16,8,rd(s->r,40,8));
L_1803dc608_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dc608_4:;
/* 1803dc60d: mov qword ptr [rsp + 0x50], rdi */
L_1803dc60d_0:;
L_1803dc60d_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dc60d_2:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803dc60d_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dc60d_4:;
/* 1803dc612: mov qword ptr [rsp + 0x28], r12 */
L_1803dc612_0:;
L_1803dc612_1:;
wr(s->u,8,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803dc612_2:;
wr(s->u,16,8,rd(s->r,160,8));
L_1803dc612_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dc612_4:;
/* 1803dc617: call 0x1803da8c0 */
L_1803dc617_0:;
L_1803dc617_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc617_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc61c)));
L_1803dc617_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc617_4:;
return UINT64_C(0x1803dc61c);
}
uint64_t b_1803dc608(CPU*s){
/* 1803dc608: mov qword ptr [rsp + 0x48], rbp */
L_1803dc608_0:;
L_1803dc608_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803dc608_2:;
wr(s->u,8,8,rd(s->r,40,8));
L_1803dc608_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dc608_4:;
/* 1803dc60d: mov qword ptr [rsp + 0x50], rdi */
L_1803dc60d_0:;
L_1803dc60d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dc60d_2:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803dc60d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dc60d_4:;
/* 1803dc612: mov qword ptr [rsp + 0x28], r12 */
L_1803dc612_0:;
L_1803dc612_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803dc612_2:;
wr(s->u,8,8,rd(s->r,160,8));
L_1803dc612_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dc612_4:;
/* 1803dc617: call 0x1803da8c0 */
L_1803dc617_0:;
L_1803dc617_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc617_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc61c)));
L_1803dc617_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc617_4:;
return UINT64_C(0x1803dc61c);
}
uint64_t b_1803dc612(CPU*s){
/* 1803dc612: mov qword ptr [rsp + 0x28], r12 */
L_1803dc612_0:;
L_1803dc612_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803dc612_2:;
wr(s->u,8,8,rd(s->r,160,8));
L_1803dc612_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dc612_4:;
/* 1803dc617: call 0x1803da8c0 */
L_1803dc617_0:;
L_1803dc617_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc617_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc61c)));
L_1803dc617_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc617_4:;
return UINT64_C(0x1803dc61c);
}
uint64_t b_1803dc61c(CPU*s){
/* 1803dc61c: mov r11d, eax */
L_1803dc61c_0:;
L_1803dc61c_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803dc61c_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dc61c_3:;
/* 1803dc61f: mov eax, dword ptr [rsi + 0x3c] */
L_1803dc61f_0:;
L_1803dc61f_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803dc61f_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc61f_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803dc61f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc61f_5:;
/* 1803dc622: sar eax, 1 */
L_1803dc622_0:;
L_1803dc622_1:;
wr(s->u,91,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dc622_2:;
wr(s->r,512,1,(rd(s->u,91,4)!=((U)UINT64_C(0x0))));
L_1803dc622_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc622_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc622_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc622_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc622_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc622_8:;
wr(s->u,13,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc622_9:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dc622_10:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dc622_11:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dc622_12:;
/* 1803dc624: cdq  */
L_1803dc624_0:;
L_1803dc624_1:;
wr(s->u,19,8,(U)sx(rd(s->r,0,4),4));
L_1803dc624_2:;
wr(s->r,16,4,(rd(s->u,19,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dc624_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc624_4:;
/* 1803dc625: idiv r11d */
L_1803dc625_0:;
L_1803dc625_1:;
wr(s->u,35,8,(U)sx(rd(s->r,152,4),4));
L_1803dc625_2:;
wr(s->u,43,8,rd(s->r,16,4));
L_1803dc625_3:;
wr(s->u,51,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,43,8)<<((U)UINT64_C(0x20)))));
L_1803dc625_4:;
wr(s->u,59,8,rd(s->r,0,4));
L_1803dc625_5:;
wr(s->u,67,8,(rd(s->u,51,8)|rd(s->u,59,8)));
L_1803dc625_6:;
wr(s->u,75,8,((U)(sx(rd(s->u,67,8),8)/sx(rd(s->u,35,8),8))));
L_1803dc625_7:;
wr(s->r,0,4,(rd(s->u,75,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc625_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc625_9:;
wr(s->u,83,8,((U)(sx(rd(s->u,67,8),8)%sx(rd(s->u,35,8),8))));
L_1803dc625_10:;
wr(s->r,16,4,(rd(s->u,83,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc625_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc625_12:;
/* 1803dc628: cmp eax, r13d */
L_1803dc628_0:;
L_1803dc628_1:;
wr(s->u,27,4,rd(s->r,168,4));
L_1803dc628_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,27,4)));
L_1803dc628_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,27,4),4,1));
L_1803dc628_4:;
wr(s->u,31,4,(rd(s->r,0,4)-rd(s->u,27,4)));
L_1803dc628_5:;
wr(s->r,519,1,(sx(rd(s->u,31,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc628_6:;
wr(s->r,518,1,(rd(s->u,31,4)==((U)UINT64_C(0x0))));
L_1803dc628_7:;
wr(s->u,13,4,(rd(s->u,31,4)&((U)UINT64_C(0xff))));
L_1803dc628_8:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dc628_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dc628_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dc628_11:;
/* 1803dc62b: jge 0x1803dc632 */
L_1803dc62b_0:;
L_1803dc62b_1:;
wr(s->u,12,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dc62b_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dc632);}
L_1803dc62b_3:;
return UINT64_C(0x1803dc62d);
}
uint64_t b_1803dc62d(CPU*s){
/* 1803dc62d: mov r12d, r13d */
L_1803dc62d_0:;
L_1803dc62d_1:;
wr(s->r,160,4,rd(s->r,168,4));
L_1803dc62d_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803dc62d_3:;
/* 1803dc630: jmp 0x1803dc64d */
L_1803dc630_0:;
L_1803dc630_1:;
return UINT64_C(0x1803dc64d);
L_1803dc630_2:;
return UINT64_C(0x1803dc632);
}
uint64_t b_1803dc632(CPU*s){
/* 1803dc632: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dc632_0:;
L_1803dc632_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dc632_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc632_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc632_4:;
/* 1803dc639: call 0x1803da8c0 */
L_1803dc639_0:;
L_1803dc639_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc639_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc63e)));
L_1803dc639_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc639_4:;
return UINT64_C(0x1803dc63e);
}
uint64_t b_1803dc63e(CPU*s){
/* 1803dc63e: mov r11d, eax */
L_1803dc63e_0:;
L_1803dc63e_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803dc63e_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dc63e_3:;
/* 1803dc641: mov eax, dword ptr [rsi + 0x3c] */
L_1803dc641_0:;
L_1803dc641_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803dc641_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc641_3:;
wr(s->r,0,4,rd(s->u,16,4));
L_1803dc641_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc641_5:;
/* 1803dc644: sar eax, 1 */
L_1803dc644_0:;
L_1803dc644_1:;
wr(s->u,98,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dc644_2:;
wr(s->r,512,1,(rd(s->u,98,4)!=((U)UINT64_C(0x0))));
L_1803dc644_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc644_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc644_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc644_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc644_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc644_8:;
wr(s->u,28,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc644_9:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dc644_10:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dc644_11:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dc644_12:;
/* 1803dc646: cdq  */
L_1803dc646_0:;
L_1803dc646_1:;
wr(s->u,34,8,(U)sx(rd(s->r,0,4),4));
L_1803dc646_2:;
wr(s->r,16,4,(rd(s->u,34,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dc646_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc646_4:;
/* 1803dc647: idiv r11d */
L_1803dc647_0:;
L_1803dc647_1:;
wr(s->u,42,8,(U)sx(rd(s->r,152,4),4));
L_1803dc647_2:;
wr(s->u,50,8,rd(s->r,16,4));
L_1803dc647_3:;
wr(s->u,58,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,50,8)<<((U)UINT64_C(0x20)))));
L_1803dc647_4:;
wr(s->u,66,8,rd(s->r,0,4));
L_1803dc647_5:;
wr(s->u,74,8,(rd(s->u,58,8)|rd(s->u,66,8)));
L_1803dc647_6:;
wr(s->u,82,8,((U)(sx(rd(s->u,74,8),8)/sx(rd(s->u,42,8),8))));
L_1803dc647_7:;
wr(s->r,0,4,(rd(s->u,82,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc647_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc647_9:;
wr(s->u,90,8,((U)(sx(rd(s->u,74,8),8)%sx(rd(s->u,42,8),8))));
L_1803dc647_10:;
wr(s->r,16,4,(rd(s->u,90,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc647_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc647_12:;
/* 1803dc64a: mov r12d, eax */
L_1803dc64a_0:;
L_1803dc64a_1:;
wr(s->r,160,4,rd(s->r,0,4));
L_1803dc64a_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803dc64a_3:;
/* 1803dc64d: mov edi, dword ptr [rsi + 0x3c] */
L_1803dc64d_0:;
L_1803dc64d_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803dc64d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc64d_3:;
wr(s->r,56,4,rd(s->u,16,4));
L_1803dc64d_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dc64d_5:;
/* 1803dc650: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dc650_0:;
L_1803dc650_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dc650_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc650_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dc650_4:;
/* 1803dc657: mov rbx, qword ptr [rcx] */
L_1803dc657_0:;
L_1803dc657_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dc657_2:;
wr(s->r,24,8,rd(s->u,20,8));
L_1803dc657_3:;
/* 1803dc65a: mov ebp, edi */
L_1803dc65a_0:;
L_1803dc65a_1:;
wr(s->r,40,4,rd(s->r,56,4));
L_1803dc65a_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803dc65a_3:;
/* 1803dc65c: sar ebp, 1 */
L_1803dc65c_0:;
L_1803dc65c_1:;
wr(s->u,98,4,(rd(s->r,40,4)&((U)UINT64_C(0x1))));
L_1803dc65c_2:;
wr(s->r,512,1,(rd(s->u,98,4)!=((U)UINT64_C(0x0))));
L_1803dc65c_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc65c_4:;
wr(s->r,40,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,40,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,40,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc65c_5:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803dc65c_6:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc65c_7:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803dc65c_8:;
wr(s->u,28,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803dc65c_9:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dc65c_10:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dc65c_11:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dc65c_12:;
/* 1803dc65e: call 0x1803da8e0 */
L_1803dc65e_0:;
L_1803dc65e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc65e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc663)));
L_1803dc65e_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dc65e_4:;
return UINT64_C(0x1803dc663);
}
uint64_t b_1803dc64d(CPU*s){
/* 1803dc64d: mov edi, dword ptr [rsi + 0x3c] */
L_1803dc64d_0:;
L_1803dc64d_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803dc64d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc64d_3:;
wr(s->r,56,4,rd(s->u,16,4));
L_1803dc64d_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dc64d_5:;
/* 1803dc650: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dc650_0:;
L_1803dc650_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dc650_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc650_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dc650_4:;
/* 1803dc657: mov rbx, qword ptr [rcx] */
L_1803dc657_0:;
L_1803dc657_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dc657_2:;
wr(s->r,24,8,rd(s->u,20,8));
L_1803dc657_3:;
/* 1803dc65a: mov ebp, edi */
L_1803dc65a_0:;
L_1803dc65a_1:;
wr(s->r,40,4,rd(s->r,56,4));
L_1803dc65a_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803dc65a_3:;
/* 1803dc65c: sar ebp, 1 */
L_1803dc65c_0:;
L_1803dc65c_1:;
wr(s->u,34,4,(rd(s->r,40,4)&((U)UINT64_C(0x1))));
L_1803dc65c_2:;
wr(s->r,512,1,(rd(s->u,34,4)!=((U)UINT64_C(0x0))));
L_1803dc65c_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc65c_4:;
wr(s->r,40,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,40,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,40,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc65c_5:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803dc65c_6:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc65c_7:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803dc65c_8:;
wr(s->u,28,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803dc65c_9:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dc65c_10:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dc65c_11:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dc65c_12:;
/* 1803dc65e: call 0x1803da8e0 */
L_1803dc65e_0:;
L_1803dc65e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc65e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc663)));
L_1803dc65e_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dc65e_4:;
return UINT64_C(0x1803dc663);
}
uint64_t b_1803dc663(CPU*s){
/* 1803dc663: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dc663_0:;
L_1803dc663_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dc663_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc663_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dc663_4:;
/* 1803dc66a: imul eax, r12d */
L_1803dc66a_0:;
L_1803dc66a_1:;
wr(s->u,40,8,(U)sx(rd(s->r,0,4),4));
L_1803dc66a_2:;
wr(s->u,48,8,(U)sx(rd(s->r,160,4),4));
L_1803dc66a_3:;
wr(s->u,56,8,(rd(s->u,40,8)*rd(s->u,48,8)));
L_1803dc66a_4:;
wr(s->r,0,4,(rd(s->u,56,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc66a_5:;
wr(s->u,64,4,(rd(s->u,56,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dc66a_6:;
wr(s->u,24,8,(U)sx(rd(s->r,0,4),4));
L_1803dc66a_7:;
wr(s->r,512,1,(rd(s->u,24,8)!=rd(s->u,56,8)));
L_1803dc66a_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803dc66a_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc66a_10:;
/* 1803dc66e: mov edx, eax */
L_1803dc66e_0:;
L_1803dc66e_1:;
wr(s->r,16,4,rd(s->r,0,4));
L_1803dc66e_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc66e_3:;
/* 1803dc670: call qword ptr [rbx + 0x18] */
L_1803dc670_0:;
L_1803dc670_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803dc670_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc670_3:;
wr(s->u,32,8,rd(s->u,16,8));
L_1803dc670_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc670_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc673)));
L_1803dc670_6:;
return (uint64_t)rd(s->u,32,8);
L_1803dc670_7:;
return UINT64_C(0x1803dc673);
}
uint64_t b_1803dc673(CPU*s){
/* 1803dc673: mov r12, qword ptr [rsp + 0x28] */
L_1803dc673_0:;
L_1803dc673_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803dc673_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc673_3:;
wr(s->r,160,8,rd(s->u,8,8));
L_1803dc673_4:;
/* 1803dc678: add eax, edi */
L_1803dc678_0:;
L_1803dc678_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,56,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803dc678_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,56,4),4,0));
L_1803dc678_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,56,4)));
L_1803dc678_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc678_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc678_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc678_7:;
wr(s->u,18,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc678_8:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803dc678_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803dc678_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803dc678_11:;
/* 1803dc67a: cmp eax, ebp */
L_1803dc67a_0:;
L_1803dc67a_1:;
wr(s->u,24,4,rd(s->r,40,4));
L_1803dc67a_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,24,4)));
L_1803dc67a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,24,4),4,1));
L_1803dc67a_4:;
wr(s->u,28,4,(rd(s->r,0,4)-rd(s->u,24,4)));
L_1803dc67a_5:;
wr(s->r,519,1,(sx(rd(s->u,28,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc67a_6:;
wr(s->r,518,1,(rd(s->u,28,4)==((U)UINT64_C(0x0))));
L_1803dc67a_7:;
wr(s->u,18,4,(rd(s->u,28,4)&((U)UINT64_C(0xff))));
L_1803dc67a_8:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803dc67a_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803dc67a_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803dc67a_11:;
/* 1803dc67c: jle 0x1803dc6dd */
L_1803dc67c_0:;
L_1803dc67c_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc67c_2:;
wr(s->u,17,1,((rd(s->r,518,1)!=0)||(rd(s->u,16,1)!=0)));
L_1803dc67c_3:;
if(rd(s->u,17,1)){return UINT64_C(0x1803dc6dd);}
L_1803dc67c_4:;
return UINT64_C(0x1803dc67e);
}
uint64_t b_1803dc67e(CPU*s){
/* 1803dc67e: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dc67e_0:;
L_1803dc67e_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dc67e_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc67e_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc67e_4:;
/* 1803dc685: call 0x1803da8c0 */
L_1803dc685_0:;
L_1803dc685_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc685_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc68a)));
L_1803dc685_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc685_4:;
return UINT64_C(0x1803dc68a);
}
uint64_t b_1803dc68a(CPU*s){
/* 1803dc68a: mov r11d, eax */
L_1803dc68a_0:;
L_1803dc68a_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803dc68a_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dc68a_3:;
/* 1803dc68d: mov eax, dword ptr [rsi + 0x3c] */
L_1803dc68d_0:;
L_1803dc68d_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803dc68d_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc68d_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803dc68d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc68d_5:;
/* 1803dc690: sar eax, 1 */
L_1803dc690_0:;
L_1803dc690_1:;
wr(s->u,91,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dc690_2:;
wr(s->r,512,1,(rd(s->u,91,4)!=((U)UINT64_C(0x0))));
L_1803dc690_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc690_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc690_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc690_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc690_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc690_8:;
wr(s->u,13,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc690_9:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dc690_10:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dc690_11:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dc690_12:;
/* 1803dc692: cdq  */
L_1803dc692_0:;
L_1803dc692_1:;
wr(s->u,19,8,(U)sx(rd(s->r,0,4),4));
L_1803dc692_2:;
wr(s->r,16,4,(rd(s->u,19,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dc692_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc692_4:;
/* 1803dc693: idiv r11d */
L_1803dc693_0:;
L_1803dc693_1:;
wr(s->u,35,8,(U)sx(rd(s->r,152,4),4));
L_1803dc693_2:;
wr(s->u,43,8,rd(s->r,16,4));
L_1803dc693_3:;
wr(s->u,51,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,43,8)<<((U)UINT64_C(0x20)))));
L_1803dc693_4:;
wr(s->u,59,8,rd(s->r,0,4));
L_1803dc693_5:;
wr(s->u,67,8,(rd(s->u,51,8)|rd(s->u,59,8)));
L_1803dc693_6:;
wr(s->u,75,8,((U)(sx(rd(s->u,67,8),8)/sx(rd(s->u,35,8),8))));
L_1803dc693_7:;
wr(s->r,0,4,(rd(s->u,75,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc693_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc693_9:;
wr(s->u,83,8,((U)(sx(rd(s->u,67,8),8)%sx(rd(s->u,35,8),8))));
L_1803dc693_10:;
wr(s->r,16,4,(rd(s->u,83,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc693_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc693_12:;
/* 1803dc696: cmp eax, r13d */
L_1803dc696_0:;
L_1803dc696_1:;
wr(s->u,27,4,rd(s->r,168,4));
L_1803dc696_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,27,4)));
L_1803dc696_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,27,4),4,1));
L_1803dc696_4:;
wr(s->u,31,4,(rd(s->r,0,4)-rd(s->u,27,4)));
L_1803dc696_5:;
wr(s->r,519,1,(sx(rd(s->u,31,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc696_6:;
wr(s->r,518,1,(rd(s->u,31,4)==((U)UINT64_C(0x0))));
L_1803dc696_7:;
wr(s->u,13,4,(rd(s->u,31,4)&((U)UINT64_C(0xff))));
L_1803dc696_8:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dc696_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dc696_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dc696_11:;
/* 1803dc699: jge 0x1803dc6a0 */
L_1803dc699_0:;
L_1803dc699_1:;
wr(s->u,12,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dc699_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dc6a0);}
L_1803dc699_3:;
return UINT64_C(0x1803dc69b);
}
uint64_t b_1803dc69b(CPU*s){
/* 1803dc69b: mov edi, r13d */
L_1803dc69b_0:;
L_1803dc69b_1:;
wr(s->r,56,4,rd(s->r,168,4));
L_1803dc69b_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dc69b_3:;
/* 1803dc69e: jmp 0x1803dc6ba */
L_1803dc69e_0:;
L_1803dc69e_1:;
return UINT64_C(0x1803dc6ba);
L_1803dc69e_2:;
return UINT64_C(0x1803dc6a0);
}
uint64_t b_1803dc6a0(CPU*s){
/* 1803dc6a0: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dc6a0_0:;
L_1803dc6a0_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dc6a0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc6a0_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc6a0_4:;
/* 1803dc6a7: call 0x1803da8c0 */
L_1803dc6a7_0:;
L_1803dc6a7_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc6a7_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc6ac)));
L_1803dc6a7_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc6a7_4:;
return UINT64_C(0x1803dc6ac);
}
uint64_t b_1803dc6ac(CPU*s){
/* 1803dc6ac: mov r11d, eax */
L_1803dc6ac_0:;
L_1803dc6ac_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803dc6ac_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dc6ac_3:;
/* 1803dc6af: mov eax, dword ptr [rsi + 0x3c] */
L_1803dc6af_0:;
L_1803dc6af_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803dc6af_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc6af_3:;
wr(s->r,0,4,rd(s->u,16,4));
L_1803dc6af_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc6af_5:;
/* 1803dc6b2: sar eax, 1 */
L_1803dc6b2_0:;
L_1803dc6b2_1:;
wr(s->u,98,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dc6b2_2:;
wr(s->r,512,1,(rd(s->u,98,4)!=((U)UINT64_C(0x0))));
L_1803dc6b2_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc6b2_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc6b2_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc6b2_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc6b2_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc6b2_8:;
wr(s->u,28,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc6b2_9:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dc6b2_10:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dc6b2_11:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dc6b2_12:;
/* 1803dc6b4: cdq  */
L_1803dc6b4_0:;
L_1803dc6b4_1:;
wr(s->u,34,8,(U)sx(rd(s->r,0,4),4));
L_1803dc6b4_2:;
wr(s->r,16,4,(rd(s->u,34,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dc6b4_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc6b4_4:;
/* 1803dc6b5: idiv r11d */
L_1803dc6b5_0:;
L_1803dc6b5_1:;
wr(s->u,42,8,(U)sx(rd(s->r,152,4),4));
L_1803dc6b5_2:;
wr(s->u,50,8,rd(s->r,16,4));
L_1803dc6b5_3:;
wr(s->u,58,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,50,8)<<((U)UINT64_C(0x20)))));
L_1803dc6b5_4:;
wr(s->u,66,8,rd(s->r,0,4));
L_1803dc6b5_5:;
wr(s->u,74,8,(rd(s->u,58,8)|rd(s->u,66,8)));
L_1803dc6b5_6:;
wr(s->u,82,8,((U)(sx(rd(s->u,74,8),8)/sx(rd(s->u,42,8),8))));
L_1803dc6b5_7:;
wr(s->r,0,4,(rd(s->u,82,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc6b5_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc6b5_9:;
wr(s->u,90,8,((U)(sx(rd(s->u,74,8),8)%sx(rd(s->u,42,8),8))));
L_1803dc6b5_10:;
wr(s->r,16,4,(rd(s->u,90,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc6b5_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc6b5_12:;
/* 1803dc6b8: mov edi, eax */
L_1803dc6b8_0:;
L_1803dc6b8_1:;
wr(s->r,56,4,rd(s->r,0,4));
L_1803dc6b8_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dc6b8_3:;
/* 1803dc6ba: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dc6ba_0:;
L_1803dc6ba_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dc6ba_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc6ba_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dc6ba_4:;
/* 1803dc6c1: mov rbx, qword ptr [rcx] */
L_1803dc6c1_0:;
L_1803dc6c1_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dc6c1_2:;
wr(s->r,24,8,rd(s->u,20,8));
L_1803dc6c1_3:;
/* 1803dc6c4: call 0x1803da8e0 */
L_1803dc6c4_0:;
L_1803dc6c4_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc6c4_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc6c9)));
L_1803dc6c4_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dc6c4_4:;
return UINT64_C(0x1803dc6c9);
}
uint64_t b_1803dc6ba(CPU*s){
/* 1803dc6ba: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dc6ba_0:;
L_1803dc6ba_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dc6ba_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc6ba_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc6ba_4:;
/* 1803dc6c1: mov rbx, qword ptr [rcx] */
L_1803dc6c1_0:;
L_1803dc6c1_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dc6c1_2:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803dc6c1_3:;
/* 1803dc6c4: call 0x1803da8e0 */
L_1803dc6c4_0:;
L_1803dc6c4_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc6c4_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc6c9)));
L_1803dc6c4_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dc6c4_4:;
return UINT64_C(0x1803dc6c9);
}
uint64_t b_1803dc6c9(CPU*s){
/* 1803dc6c9: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dc6c9_0:;
L_1803dc6c9_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dc6c9_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc6c9_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dc6c9_4:;
/* 1803dc6d0: imul eax, edi */
L_1803dc6d0_0:;
L_1803dc6d0_1:;
wr(s->u,40,8,(U)sx(rd(s->r,0,4),4));
L_1803dc6d0_2:;
wr(s->u,48,8,(U)sx(rd(s->r,56,4),4));
L_1803dc6d0_3:;
wr(s->u,56,8,(rd(s->u,40,8)*rd(s->u,48,8)));
L_1803dc6d0_4:;
wr(s->r,0,4,(rd(s->u,56,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc6d0_5:;
wr(s->u,64,4,(rd(s->u,56,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dc6d0_6:;
wr(s->u,24,8,(U)sx(rd(s->r,0,4),4));
L_1803dc6d0_7:;
wr(s->r,512,1,(rd(s->u,24,8)!=rd(s->u,56,8)));
L_1803dc6d0_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803dc6d0_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc6d0_10:;
/* 1803dc6d3: mov edx, eax */
L_1803dc6d3_0:;
L_1803dc6d3_1:;
wr(s->r,16,4,rd(s->r,0,4));
L_1803dc6d3_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc6d3_3:;
/* 1803dc6d5: call qword ptr [rbx + 0x18] */
L_1803dc6d5_0:;
L_1803dc6d5_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803dc6d5_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc6d5_3:;
wr(s->u,32,8,rd(s->u,16,8));
L_1803dc6d5_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc6d5_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc6d8)));
L_1803dc6d5_6:;
return (uint64_t)rd(s->u,32,8);
L_1803dc6d5_7:;
return UINT64_C(0x1803dc6d8);
}
uint64_t b_1803dc6d8(CPU*s){
/* 1803dc6d8: mov ebp, eax */
L_1803dc6d8_0:;
L_1803dc6d8_1:;
wr(s->r,40,4,rd(s->r,0,4));
L_1803dc6d8_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803dc6d8_3:;
/* 1803dc6da: add ebp, dword ptr [rsi + 0x3c] */
L_1803dc6da_0:;
L_1803dc6da_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803dc6da_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc6da_3:;
wr(s->r,512,1,(((rd(s->r,40,4)+rd(s->u,28,4))&(((U)1<<32)-1))<rd(s->r,40,4)));
L_1803dc6da_4:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc6da_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->u,28,4),4,0));
L_1803dc6da_6:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc6da_7:;
wr(s->r,40,4,(rd(s->r,40,4)+rd(s->u,28,4)));
L_1803dc6da_8:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803dc6da_9:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc6da_10:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803dc6da_11:;
wr(s->u,40,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803dc6da_12:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803dc6da_13:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803dc6da_14:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803dc6da_15:;
/* 1803dc6dd: mov rdi, qword ptr [rsp + 0x50] */
L_1803dc6dd_0:;
L_1803dc6dd_1:;
wr(s->u,16,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dc6dd_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dc6dd_3:;
wr(s->r,56,8,rd(s->u,32,8));
L_1803dc6dd_4:;
/* 1803dc6e2: mov dword ptr [rsi + 0x70], ebp */
L_1803dc6e2_0:;
L_1803dc6e2_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x70))));
L_1803dc6e2_2:;
wr(s->u,24,4,rd(s->r,40,4));
L_1803dc6e2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dc6e2_4:;
/* 1803dc6e5: mov rbp, qword ptr [rsp + 0x48] */
L_1803dc6e5_0:;
L_1803dc6e5_1:;
wr(s->u,16,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803dc6e5_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dc6e5_3:;
wr(s->r,40,8,rd(s->u,32,8));
L_1803dc6e5_4:;
/* 1803dc6ea: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dc6ea_0:;
L_1803dc6ea_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dc6ea_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc6ea_3:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803dc6ea_4:;
/* 1803dc6f1: mov ebx, dword ptr [rsi + 0x70] */
L_1803dc6f1_0:;
L_1803dc6f1_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x70))));
L_1803dc6f1_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc6f1_3:;
wr(s->r,24,4,rd(s->u,28,4));
L_1803dc6f1_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc6f1_5:;
/* 1803dc6f4: mov rax, qword ptr [rcx] */
L_1803dc6f4_0:;
L_1803dc6f4_1:;
wr(s->u,32,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dc6f4_2:;
wr(s->r,0,8,rd(s->u,32,8));
L_1803dc6f4_3:;
/* 1803dc6f7: call qword ptr [rax + 0x60] */
L_1803dc6f7_0:;
L_1803dc6f7_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x60))));
L_1803dc6f7_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc6f7_3:;
wr(s->u,46,8,rd(s->u,32,8));
L_1803dc6f7_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc6f7_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc6fa)));
L_1803dc6f7_6:;
return (uint64_t)rd(s->u,46,8);
L_1803dc6f7_7:;
return UINT64_C(0x1803dc6fa);
}
uint64_t b_1803dc6dd(CPU*s){
/* 1803dc6dd: mov rdi, qword ptr [rsp + 0x50] */
L_1803dc6dd_0:;
L_1803dc6dd_1:;
wr(s->u,16,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dc6dd_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dc6dd_3:;
wr(s->r,56,8,rd(s->u,32,8));
L_1803dc6dd_4:;
/* 1803dc6e2: mov dword ptr [rsi + 0x70], ebp */
L_1803dc6e2_0:;
L_1803dc6e2_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x70))));
L_1803dc6e2_2:;
wr(s->u,24,4,rd(s->r,40,4));
L_1803dc6e2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dc6e2_4:;
/* 1803dc6e5: mov rbp, qword ptr [rsp + 0x48] */
L_1803dc6e5_0:;
L_1803dc6e5_1:;
wr(s->u,16,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803dc6e5_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dc6e5_3:;
wr(s->r,40,8,rd(s->u,32,8));
L_1803dc6e5_4:;
/* 1803dc6ea: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dc6ea_0:;
L_1803dc6ea_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dc6ea_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc6ea_3:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803dc6ea_4:;
/* 1803dc6f1: mov ebx, dword ptr [rsi + 0x70] */
L_1803dc6f1_0:;
L_1803dc6f1_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x70))));
L_1803dc6f1_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc6f1_3:;
wr(s->r,24,4,rd(s->u,28,4));
L_1803dc6f1_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc6f1_5:;
/* 1803dc6f4: mov rax, qword ptr [rcx] */
L_1803dc6f4_0:;
L_1803dc6f4_1:;
wr(s->u,32,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dc6f4_2:;
wr(s->r,0,8,rd(s->u,32,8));
L_1803dc6f4_3:;
/* 1803dc6f7: call qword ptr [rax + 0x60] */
L_1803dc6f7_0:;
L_1803dc6f7_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x60))));
L_1803dc6f7_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc6f7_3:;
wr(s->u,40,8,rd(s->u,32,8));
L_1803dc6f7_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc6f7_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc6fa)));
L_1803dc6f7_6:;
return (uint64_t)rd(s->u,40,8);
L_1803dc6f7_7:;
return UINT64_C(0x1803dc6fa);
}
uint64_t b_1803dc6ea(CPU*s){
/* 1803dc6ea: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dc6ea_0:;
L_1803dc6ea_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dc6ea_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc6ea_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dc6ea_4:;
/* 1803dc6f1: mov ebx, dword ptr [rsi + 0x70] */
L_1803dc6f1_0:;
L_1803dc6f1_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x70))));
L_1803dc6f1_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc6f1_3:;
wr(s->r,24,4,rd(s->u,16,4));
L_1803dc6f1_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc6f1_5:;
/* 1803dc6f4: mov rax, qword ptr [rcx] */
L_1803dc6f4_0:;
L_1803dc6f4_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dc6f4_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dc6f4_3:;
/* 1803dc6f7: call qword ptr [rax + 0x60] */
L_1803dc6f7_0:;
L_1803dc6f7_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x60))));
L_1803dc6f7_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc6f7_3:;
wr(s->u,28,8,rd(s->u,20,8));
L_1803dc6f7_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc6f7_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc6fa)));
L_1803dc6f7_6:;
return (uint64_t)rd(s->u,28,8);
L_1803dc6f7_7:;
return UINT64_C(0x1803dc6fa);
}
uint64_t b_1803dc6fa(CPU*s){
/* 1803dc6fa: cmp ebx, eax */
L_1803dc6fa_0:;
L_1803dc6fa_1:;
wr(s->u,9,4,rd(s->r,0,4));
L_1803dc6fa_2:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,9,4)));
L_1803dc6fa_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,9,4),4,1));
L_1803dc6fa_4:;
wr(s->u,13,4,(rd(s->r,24,4)-rd(s->u,9,4)));
L_1803dc6fa_5:;
wr(s->r,519,1,(sx(rd(s->u,13,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc6fa_6:;
wr(s->r,518,1,(rd(s->u,13,4)==((U)UINT64_C(0x0))));
L_1803dc6fa_7:;
wr(s->u,3,4,(rd(s->u,13,4)&((U)UINT64_C(0xff))));
L_1803dc6fa_8:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803dc6fa_9:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803dc6fa_10:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803dc6fa_11:;
/* 1803dc6fc: jg 0x1803dc70d */
L_1803dc6fc_0:;
L_1803dc6fc_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803dc6fc_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dc6fc_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803dc6fc_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803dc70d);}
L_1803dc6fc_5:;
return UINT64_C(0x1803dc6fe);
}
uint64_t b_1803dc6fe(CPU*s){
/* 1803dc6fe: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dc6fe_0:;
L_1803dc6fe_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dc6fe_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc6fe_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dc6fe_4:;
/* 1803dc705: mov rax, qword ptr [rcx] */
L_1803dc705_0:;
L_1803dc705_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dc705_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dc705_3:;
/* 1803dc708: call qword ptr [rax + 0x60] */
L_1803dc708_0:;
L_1803dc708_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x60))));
L_1803dc708_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc708_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803dc708_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc708_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc70b)));
L_1803dc708_6:;
return (uint64_t)rd(s->u,24,8);
L_1803dc708_7:;
return UINT64_C(0x1803dc70b);
}
uint64_t b_1803dc70b(CPU*s){
/* 1803dc70b: mov ebx, eax */
L_1803dc70b_0:;
L_1803dc70b_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803dc70b_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc70b_3:;
/* 1803dc70d: mov dword ptr [rsi + 0x70], ebx */
L_1803dc70d_0:;
L_1803dc70d_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x70))));
L_1803dc70d_2:;
wr(s->u,8,4,rd(s->r,24,4));
L_1803dc70d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dc70d_4:;
/* 1803dc710: jmp 0x1803dc738 */
L_1803dc710_0:;
L_1803dc710_1:;
return UINT64_C(0x1803dc738);
L_1803dc710_2:;
return UINT64_C(0x1803dc712);
}
uint64_t b_1803dc70d(CPU*s){
/* 1803dc70d: mov dword ptr [rsi + 0x70], ebx */
L_1803dc70d_0:;
L_1803dc70d_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x70))));
L_1803dc70d_2:;
wr(s->u,8,4,rd(s->r,24,4));
L_1803dc70d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dc70d_4:;
/* 1803dc710: jmp 0x1803dc738 */
L_1803dc710_0:;
L_1803dc710_1:;
return UINT64_C(0x1803dc738);
L_1803dc710_2:;
return UINT64_C(0x1803dc712);
}
uint64_t b_1803dc712(CPU*s){
/* 1803dc712: mov ebx, dword ptr [rsi + 0x3c] */
L_1803dc712_0:;
L_1803dc712_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803dc712_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc712_3:;
wr(s->r,24,4,rd(s->u,16,4));
L_1803dc712_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc712_5:;
/* 1803dc715: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dc715_0:;
L_1803dc715_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dc715_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc715_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dc715_4:;
/* 1803dc71c: sar ebx, 1 */
L_1803dc71c_0:;
L_1803dc71c_1:;
wr(s->u,34,4,(rd(s->r,24,4)&((U)UINT64_C(0x1))));
L_1803dc71c_2:;
wr(s->r,512,1,(rd(s->u,34,4)!=((U)UINT64_C(0x0))));
L_1803dc71c_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc71c_4:;
wr(s->r,24,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,24,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,24,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc71c_5:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc71c_6:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc71c_7:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803dc71c_8:;
wr(s->u,28,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803dc71c_9:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dc71c_10:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dc71c_11:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dc71c_12:;
/* 1803dc71e: call 0x1803da8c0 */
L_1803dc71e_0:;
L_1803dc71e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc71e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc723)));
L_1803dc71e_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc71e_4:;
return UINT64_C(0x1803dc723);
}
uint64_t b_1803dc723(CPU*s){
/* 1803dc723: cmp eax, ebx */
L_1803dc723_0:;
L_1803dc723_1:;
wr(s->u,8,4,rd(s->r,24,4));
L_1803dc723_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,8,4)));
L_1803dc723_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,8,4),4,1));
L_1803dc723_4:;
wr(s->u,12,4,(rd(s->r,0,4)-rd(s->u,8,4)));
L_1803dc723_5:;
wr(s->r,519,1,(sx(rd(s->u,12,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc723_6:;
wr(s->r,518,1,(rd(s->u,12,4)==((U)UINT64_C(0x0))));
L_1803dc723_7:;
wr(s->u,2,4,(rd(s->u,12,4)&((U)UINT64_C(0xff))));
L_1803dc723_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dc723_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dc723_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dc723_11:;
/* 1803dc725: jle 0x1803dc735 */
L_1803dc725_0:;
L_1803dc725_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc725_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803dc725_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803dc735);}
L_1803dc725_4:;
return UINT64_C(0x1803dc727);
}
uint64_t b_1803dc727(CPU*s){
/* 1803dc727: mov rcx, qword ptr [rsi + 0x66f0] */
L_1803dc727_0:;
L_1803dc727_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x66f0))));
L_1803dc727_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc727_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc727_4:;
/* 1803dc72e: call 0x1803da8c0 */
L_1803dc72e_0:;
L_1803dc72e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc72e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc733)));
L_1803dc72e_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc72e_4:;
return UINT64_C(0x1803dc733);
}
uint64_t b_1803dc733(CPU*s){
/* 1803dc733: mov ebx, eax */
L_1803dc733_0:;
L_1803dc733_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803dc733_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc733_3:;
/* 1803dc735: mov dword ptr [rsi + 0x70], ebx */
L_1803dc735_0:;
L_1803dc735_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x70))));
L_1803dc735_2:;
wr(s->u,24,4,rd(s->r,24,4));
L_1803dc735_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dc735_4:;
/* 1803dc738: mov ecx, dword ptr [rsi + 0x70] */
L_1803dc738_0:;
L_1803dc738_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x70))));
L_1803dc738_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc738_3:;
wr(s->r,8,4,rd(s->u,28,4));
L_1803dc738_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc738_5:;
/* 1803dc73b: mov eax, dword ptr [rsi + 0x3c] */
L_1803dc73b_0:;
L_1803dc73b_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803dc73b_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc73b_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803dc73b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc73b_5:;
/* 1803dc73e: mov rbx, qword ptr [rsp + 0x40] */
L_1803dc73e_0:;
L_1803dc73e_1:;
wr(s->u,16,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dc73e_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dc73e_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803dc73e_4:;
/* 1803dc743: sub ecx, dword ptr [rsi + 0x8c] */
L_1803dc743_0:;
L_1803dc743_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x8c))));
L_1803dc743_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dc743_3:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,28,4)));
L_1803dc743_4:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dc743_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,28,4),4,1));
L_1803dc743_6:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dc743_7:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->u,28,4)));
L_1803dc743_8:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc743_9:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc743_10:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dc743_11:;
wr(s->u,41,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dc743_12:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803dc743_13:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803dc743_14:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803dc743_15:;
/* 1803dc749: cmp ecx, r13d */
L_1803dc749_0:;
L_1803dc749_1:;
wr(s->u,60,4,rd(s->r,168,4));
L_1803dc749_2:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,60,4)));
L_1803dc749_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,60,4),4,1));
L_1803dc749_4:;
wr(s->u,64,4,(rd(s->r,8,4)-rd(s->u,60,4)));
L_1803dc749_5:;
wr(s->r,519,1,(sx(rd(s->u,64,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc749_6:;
wr(s->r,518,1,(rd(s->u,64,4)==((U)UINT64_C(0x0))));
L_1803dc749_7:;
wr(s->u,41,4,(rd(s->u,64,4)&((U)UINT64_C(0xff))));
L_1803dc749_8:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803dc749_9:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803dc749_10:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803dc749_11:;
/* 1803dc74c: cmovl ecx, r13d */
L_1803dc74c_0:;
L_1803dc74c_1:;
wr(s->u,40,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc74c_2:;
wr(s->u,47,4,rd(s->r,168,4));
L_1803dc74c_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc74c_4:;
wr(s->u,51,1,(!rd(s->u,40,1)));
L_1803dc74c_5:;
if(rd(s->u,51,1)){goto L_1803dc750_0;}
L_1803dc74c_6:;
wr(s->r,8,4,rd(s->u,47,4));
L_1803dc74c_7:;
/* 1803dc750: mov r13, qword ptr [rsp + 0x20] */
L_1803dc750_0:;
L_1803dc750_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dc750_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dc750_3:;
wr(s->r,168,8,rd(s->u,32,8));
L_1803dc750_4:;
/* 1803dc755: sar eax, 1 */
L_1803dc755_0:;
L_1803dc755_1:;
wr(s->u,68,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dc755_2:;
wr(s->r,512,1,(rd(s->u,68,4)!=((U)UINT64_C(0x0))));
L_1803dc755_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc755_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc755_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc755_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc755_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc755_8:;
wr(s->u,41,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc755_9:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803dc755_10:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803dc755_11:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803dc755_12:;
/* 1803dc757: movd xmm1, ecx */
L_1803dc757_0:;
L_1803dc757_1:;
wr(s->r,4672,16,rd(s->r,8,4));
L_1803dc757_2:;
/* 1803dc75b: movd xmm2, eax */
L_1803dc75b_0:;
L_1803dc75b_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803dc75b_2:;
/* 1803dc75f: cvtdq2ps xmm2, xmm2 */
L_1803dc75f_0:;
L_1803dc75f_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803dc75f_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803dc75f_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803dc75f_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803dc75f_5:;
/* 1803dc762: cvtdq2ps xmm1, xmm1 */
L_1803dc762_0:;
L_1803dc762_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803dc762_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803dc762_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803dc762_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803dc762_5:;
/* 1803dc765: divss xmm1, xmm2 */
L_1803dc765_0:;
L_1803dc765_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803dc765_2:;
/* 1803dc769: cvttss2si ecx, xmm1 */
L_1803dc769_0:;
L_1803dc769_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dc769_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc769_3:;
/* 1803dc76d: cmp ecx, 0x80000000 */
L_1803dc76d_0:;
L_1803dc76d_1:;
wr(s->u,52,4,rd(s->r,8,4));
L_1803dc76d_2:;
wr(s->r,512,1,(rd(s->u,52,4)<((U)UINT64_C(0x80000000))));
L_1803dc76d_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,52,4),((U)UINT64_C(0x80000000)),4,1));
L_1803dc76d_4:;
wr(s->u,56,4,(rd(s->u,52,4)-((U)UINT64_C(0x80000000))));
L_1803dc76d_5:;
wr(s->r,519,1,(sx(rd(s->u,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc76d_6:;
wr(s->r,518,1,(rd(s->u,56,4)==((U)UINT64_C(0x0))));
L_1803dc76d_7:;
wr(s->u,41,4,(rd(s->u,56,4)&((U)UINT64_C(0xff))));
L_1803dc76d_8:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803dc76d_9:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803dc76d_10:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803dc76d_11:;
/* 1803dc773: je 0x1803dc798 */
L_1803dc773_0:;
L_1803dc773_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dc798);}
L_1803dc773_2:;
return UINT64_C(0x1803dc775);
}
uint64_t b_1803dc735(CPU*s){
/* 1803dc735: mov dword ptr [rsi + 0x70], ebx */
L_1803dc735_0:;
L_1803dc735_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x70))));
L_1803dc735_2:;
wr(s->u,24,4,rd(s->r,24,4));
L_1803dc735_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dc735_4:;
/* 1803dc738: mov ecx, dword ptr [rsi + 0x70] */
L_1803dc738_0:;
L_1803dc738_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x70))));
L_1803dc738_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc738_3:;
wr(s->r,8,4,rd(s->u,28,4));
L_1803dc738_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc738_5:;
/* 1803dc73b: mov eax, dword ptr [rsi + 0x3c] */
L_1803dc73b_0:;
L_1803dc73b_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803dc73b_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc73b_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803dc73b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc73b_5:;
/* 1803dc73e: mov rbx, qword ptr [rsp + 0x40] */
L_1803dc73e_0:;
L_1803dc73e_1:;
wr(s->u,16,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dc73e_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dc73e_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803dc73e_4:;
/* 1803dc743: sub ecx, dword ptr [rsi + 0x8c] */
L_1803dc743_0:;
L_1803dc743_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x8c))));
L_1803dc743_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dc743_3:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,28,4)));
L_1803dc743_4:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dc743_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,28,4),4,1));
L_1803dc743_6:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dc743_7:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->u,28,4)));
L_1803dc743_8:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc743_9:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc743_10:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dc743_11:;
wr(s->u,41,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dc743_12:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803dc743_13:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803dc743_14:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803dc743_15:;
/* 1803dc749: cmp ecx, r13d */
L_1803dc749_0:;
L_1803dc749_1:;
wr(s->u,60,4,rd(s->r,168,4));
L_1803dc749_2:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,60,4)));
L_1803dc749_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,60,4),4,1));
L_1803dc749_4:;
wr(s->u,64,4,(rd(s->r,8,4)-rd(s->u,60,4)));
L_1803dc749_5:;
wr(s->r,519,1,(sx(rd(s->u,64,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc749_6:;
wr(s->r,518,1,(rd(s->u,64,4)==((U)UINT64_C(0x0))));
L_1803dc749_7:;
wr(s->u,41,4,(rd(s->u,64,4)&((U)UINT64_C(0xff))));
L_1803dc749_8:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803dc749_9:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803dc749_10:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803dc749_11:;
/* 1803dc74c: cmovl ecx, r13d */
L_1803dc74c_0:;
L_1803dc74c_1:;
wr(s->u,40,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc74c_2:;
wr(s->u,47,4,rd(s->r,168,4));
L_1803dc74c_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc74c_4:;
wr(s->u,51,1,(!rd(s->u,40,1)));
L_1803dc74c_5:;
if(rd(s->u,51,1)){goto L_1803dc750_0;}
L_1803dc74c_6:;
wr(s->r,8,4,rd(s->u,47,4));
L_1803dc74c_7:;
/* 1803dc750: mov r13, qword ptr [rsp + 0x20] */
L_1803dc750_0:;
L_1803dc750_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dc750_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dc750_3:;
wr(s->r,168,8,rd(s->u,32,8));
L_1803dc750_4:;
/* 1803dc755: sar eax, 1 */
L_1803dc755_0:;
L_1803dc755_1:;
wr(s->u,68,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dc755_2:;
wr(s->r,512,1,(rd(s->u,68,4)!=((U)UINT64_C(0x0))));
L_1803dc755_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc755_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc755_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc755_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc755_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc755_8:;
wr(s->u,41,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc755_9:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803dc755_10:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803dc755_11:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803dc755_12:;
/* 1803dc757: movd xmm1, ecx */
L_1803dc757_0:;
L_1803dc757_1:;
wr(s->r,4672,16,rd(s->r,8,4));
L_1803dc757_2:;
/* 1803dc75b: movd xmm2, eax */
L_1803dc75b_0:;
L_1803dc75b_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803dc75b_2:;
/* 1803dc75f: cvtdq2ps xmm2, xmm2 */
L_1803dc75f_0:;
L_1803dc75f_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803dc75f_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803dc75f_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803dc75f_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803dc75f_5:;
/* 1803dc762: cvtdq2ps xmm1, xmm1 */
L_1803dc762_0:;
L_1803dc762_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803dc762_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803dc762_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803dc762_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803dc762_5:;
/* 1803dc765: divss xmm1, xmm2 */
L_1803dc765_0:;
L_1803dc765_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803dc765_2:;
/* 1803dc769: cvttss2si ecx, xmm1 */
L_1803dc769_0:;
L_1803dc769_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dc769_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc769_3:;
/* 1803dc76d: cmp ecx, 0x80000000 */
L_1803dc76d_0:;
L_1803dc76d_1:;
wr(s->u,52,4,rd(s->r,8,4));
L_1803dc76d_2:;
wr(s->r,512,1,(rd(s->u,52,4)<((U)UINT64_C(0x80000000))));
L_1803dc76d_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,52,4),((U)UINT64_C(0x80000000)),4,1));
L_1803dc76d_4:;
wr(s->u,56,4,(rd(s->u,52,4)-((U)UINT64_C(0x80000000))));
L_1803dc76d_5:;
wr(s->r,519,1,(sx(rd(s->u,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc76d_6:;
wr(s->r,518,1,(rd(s->u,56,4)==((U)UINT64_C(0x0))));
L_1803dc76d_7:;
wr(s->u,41,4,(rd(s->u,56,4)&((U)UINT64_C(0xff))));
L_1803dc76d_8:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803dc76d_9:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803dc76d_10:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803dc76d_11:;
/* 1803dc773: je 0x1803dc798 */
L_1803dc773_0:;
L_1803dc773_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dc798);}
L_1803dc773_2:;
return UINT64_C(0x1803dc775);
}
uint64_t b_1803dc738(CPU*s){
/* 1803dc738: mov ecx, dword ptr [rsi + 0x70] */
L_1803dc738_0:;
L_1803dc738_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x70))));
L_1803dc738_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc738_3:;
wr(s->r,8,4,rd(s->u,24,4));
L_1803dc738_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc738_5:;
/* 1803dc73b: mov eax, dword ptr [rsi + 0x3c] */
L_1803dc73b_0:;
L_1803dc73b_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x3c))));
L_1803dc73b_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc73b_3:;
wr(s->r,0,4,rd(s->u,24,4));
L_1803dc73b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc73b_5:;
/* 1803dc73e: mov rbx, qword ptr [rsp + 0x40] */
L_1803dc73e_0:;
L_1803dc73e_1:;
wr(s->u,16,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dc73e_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dc73e_3:;
wr(s->r,24,8,rd(s->u,28,8));
L_1803dc73e_4:;
/* 1803dc743: sub ecx, dword ptr [rsi + 0x8c] */
L_1803dc743_0:;
L_1803dc743_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x8c))));
L_1803dc743_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dc743_3:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,24,4)));
L_1803dc743_4:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dc743_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,24,4),4,1));
L_1803dc743_6:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dc743_7:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->u,24,4)));
L_1803dc743_8:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc743_9:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc743_10:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dc743_11:;
wr(s->u,37,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dc743_12:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803dc743_13:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803dc743_14:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803dc743_15:;
/* 1803dc749: cmp ecx, r13d */
L_1803dc749_0:;
L_1803dc749_1:;
wr(s->u,56,4,rd(s->r,168,4));
L_1803dc749_2:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,56,4)));
L_1803dc749_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,56,4),4,1));
L_1803dc749_4:;
wr(s->u,60,4,(rd(s->r,8,4)-rd(s->u,56,4)));
L_1803dc749_5:;
wr(s->r,519,1,(sx(rd(s->u,60,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc749_6:;
wr(s->r,518,1,(rd(s->u,60,4)==((U)UINT64_C(0x0))));
L_1803dc749_7:;
wr(s->u,37,4,(rd(s->u,60,4)&((U)UINT64_C(0xff))));
L_1803dc749_8:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803dc749_9:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803dc749_10:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803dc749_11:;
/* 1803dc74c: cmovl ecx, r13d */
L_1803dc74c_0:;
L_1803dc74c_1:;
wr(s->u,36,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc74c_2:;
wr(s->u,43,4,rd(s->r,168,4));
L_1803dc74c_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc74c_4:;
wr(s->u,47,1,(!rd(s->u,36,1)));
L_1803dc74c_5:;
if(rd(s->u,47,1)){goto L_1803dc750_0;}
L_1803dc74c_6:;
wr(s->r,8,4,rd(s->u,43,4));
L_1803dc74c_7:;
/* 1803dc750: mov r13, qword ptr [rsp + 0x20] */
L_1803dc750_0:;
L_1803dc750_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dc750_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dc750_3:;
wr(s->r,168,8,rd(s->u,28,8));
L_1803dc750_4:;
/* 1803dc755: sar eax, 1 */
L_1803dc755_0:;
L_1803dc755_1:;
wr(s->u,64,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dc755_2:;
wr(s->r,512,1,(rd(s->u,64,4)!=((U)UINT64_C(0x0))));
L_1803dc755_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc755_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc755_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc755_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc755_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc755_8:;
wr(s->u,37,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc755_9:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803dc755_10:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803dc755_11:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803dc755_12:;
/* 1803dc757: movd xmm1, ecx */
L_1803dc757_0:;
L_1803dc757_1:;
wr(s->r,4672,16,rd(s->r,8,4));
L_1803dc757_2:;
/* 1803dc75b: movd xmm2, eax */
L_1803dc75b_0:;
L_1803dc75b_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803dc75b_2:;
/* 1803dc75f: cvtdq2ps xmm2, xmm2 */
L_1803dc75f_0:;
L_1803dc75f_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803dc75f_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803dc75f_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803dc75f_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803dc75f_5:;
/* 1803dc762: cvtdq2ps xmm1, xmm1 */
L_1803dc762_0:;
L_1803dc762_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803dc762_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803dc762_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803dc762_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803dc762_5:;
/* 1803dc765: divss xmm1, xmm2 */
L_1803dc765_0:;
L_1803dc765_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803dc765_2:;
/* 1803dc769: cvttss2si ecx, xmm1 */
L_1803dc769_0:;
L_1803dc769_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dc769_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc769_3:;
/* 1803dc76d: cmp ecx, 0x80000000 */
L_1803dc76d_0:;
L_1803dc76d_1:;
wr(s->u,48,4,rd(s->r,8,4));
L_1803dc76d_2:;
wr(s->r,512,1,(rd(s->u,48,4)<((U)UINT64_C(0x80000000))));
L_1803dc76d_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,48,4),((U)UINT64_C(0x80000000)),4,1));
L_1803dc76d_4:;
wr(s->u,52,4,(rd(s->u,48,4)-((U)UINT64_C(0x80000000))));
L_1803dc76d_5:;
wr(s->r,519,1,(sx(rd(s->u,52,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc76d_6:;
wr(s->r,518,1,(rd(s->u,52,4)==((U)UINT64_C(0x0))));
L_1803dc76d_7:;
wr(s->u,37,4,(rd(s->u,52,4)&((U)UINT64_C(0xff))));
L_1803dc76d_8:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803dc76d_9:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803dc76d_10:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803dc76d_11:;
/* 1803dc773: je 0x1803dc798 */
L_1803dc773_0:;
L_1803dc773_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dc798);}
L_1803dc773_2:;
return UINT64_C(0x1803dc775);
}
uint64_t b_1803dc750(CPU*s){
/* 1803dc750: mov r13, qword ptr [rsp + 0x20] */
L_1803dc750_0:;
L_1803dc750_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dc750_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc750_3:;
wr(s->r,168,8,rd(s->u,8,8));
L_1803dc750_4:;
/* 1803dc755: sar eax, 1 */
L_1803dc755_0:;
L_1803dc755_1:;
wr(s->u,30,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dc755_2:;
wr(s->r,512,1,(rd(s->u,30,4)!=((U)UINT64_C(0x0))));
L_1803dc755_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc755_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc755_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc755_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc755_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc755_8:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc755_9:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dc755_10:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dc755_11:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dc755_12:;
/* 1803dc757: movd xmm1, ecx */
L_1803dc757_0:;
L_1803dc757_1:;
wr(s->r,4672,16,rd(s->r,8,4));
L_1803dc757_2:;
/* 1803dc75b: movd xmm2, eax */
L_1803dc75b_0:;
L_1803dc75b_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803dc75b_2:;
/* 1803dc75f: cvtdq2ps xmm2, xmm2 */
L_1803dc75f_0:;
L_1803dc75f_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803dc75f_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803dc75f_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803dc75f_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803dc75f_5:;
/* 1803dc762: cvtdq2ps xmm1, xmm1 */
L_1803dc762_0:;
L_1803dc762_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803dc762_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803dc762_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803dc762_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803dc762_5:;
/* 1803dc765: divss xmm1, xmm2 */
L_1803dc765_0:;
L_1803dc765_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803dc765_2:;
/* 1803dc769: cvttss2si ecx, xmm1 */
L_1803dc769_0:;
L_1803dc769_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dc769_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc769_3:;
/* 1803dc76d: cmp ecx, 0x80000000 */
L_1803dc76d_0:;
L_1803dc76d_1:;
wr(s->u,22,4,rd(s->r,8,4));
L_1803dc76d_2:;
wr(s->r,512,1,(rd(s->u,22,4)<((U)UINT64_C(0x80000000))));
L_1803dc76d_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,22,4),((U)UINT64_C(0x80000000)),4,1));
L_1803dc76d_4:;
wr(s->u,26,4,(rd(s->u,22,4)-((U)UINT64_C(0x80000000))));
L_1803dc76d_5:;
wr(s->r,519,1,(sx(rd(s->u,26,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc76d_6:;
wr(s->r,518,1,(rd(s->u,26,4)==((U)UINT64_C(0x0))));
L_1803dc76d_7:;
wr(s->u,16,4,(rd(s->u,26,4)&((U)UINT64_C(0xff))));
L_1803dc76d_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dc76d_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dc76d_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dc76d_11:;
/* 1803dc773: je 0x1803dc798 */
L_1803dc773_0:;
L_1803dc773_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dc798);}
L_1803dc773_2:;
return UINT64_C(0x1803dc775);
}
uint64_t b_1803dc775(CPU*s){
/* 1803dc775: pxor xmm0, xmm0 */
L_1803dc775_0:;
L_1803dc775_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803dc775_2:;
/* 1803dc779: cvtsi2ss xmm0, ecx */
L_1803dc779_0:;
L_1803dc779_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803dc779_2:;
/* 1803dc77d: ucomiss xmm0, xmm1 */
L_1803dc77d_0:;
L_1803dc77d_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dc77d_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803dc77d_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803dc77d_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803dc77d_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803dc77d_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803dc77d_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dc77d_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc77d_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dc77d_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dc77d_11:;
/* 1803dc780: je 0x1803dc798 */
L_1803dc780_0:;
L_1803dc780_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dc798);}
L_1803dc780_2:;
return UINT64_C(0x1803dc782);
}
uint64_t b_1803dc782(CPU*s){
/* 1803dc782: unpcklps xmm1, xmm1 */
L_1803dc782_0:;
L_1803dc782_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803dc782_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803dc782_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803dc782_4:;
/* 1803dc785: movmskps eax, xmm1 */
L_1803dc785_0:;
L_1803dc785_1:;
wr(s->r,0,4,(((rd(s->r,4672,16)>>31)&1)<<0)|(((rd(s->r,4672,16)>>63)&1)<<1)|(((rd(s->r,4672,16)>>95)&1)<<2)|(((rd(s->r,4672,16)>>127)&1)<<3));
L_1803dc785_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc785_3:;
/* 1803dc788: pxor xmm1, xmm1 */
L_1803dc788_0:;
L_1803dc788_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803dc788_2:;
/* 1803dc78c: and eax, 1 */
L_1803dc78c_0:;
L_1803dc78c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dc78c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc78c_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dc78c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc78c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc78c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc78c_7:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc78c_8:;
wr(s->u,20,1,pop(rd(s->u,12,4),4));
L_1803dc78c_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dc78c_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dc78c_11:;
/* 1803dc78f: xor eax, 1 */
L_1803dc78f_0:;
L_1803dc78f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dc78f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc78f_3:;
wr(s->r,0,4,(rd(s->r,0,4)^((U)UINT64_C(0x1))));
L_1803dc78f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc78f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc78f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc78f_7:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc78f_8:;
wr(s->u,20,1,pop(rd(s->u,12,4),4));
L_1803dc78f_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dc78f_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dc78f_11:;
/* 1803dc792: add ecx, eax */
L_1803dc792_0:;
L_1803dc792_1:;
wr(s->r,512,1,(((rd(s->r,8,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,8,4)));
L_1803dc792_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,0));
L_1803dc792_3:;
wr(s->r,8,4,(rd(s->r,8,4)+rd(s->r,0,4)));
L_1803dc792_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dc792_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc792_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dc792_7:;
wr(s->u,12,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dc792_8:;
wr(s->u,20,1,pop(rd(s->u,12,4),4));
L_1803dc792_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dc792_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dc792_11:;
/* 1803dc794: cvtsi2ss xmm1, ecx */
L_1803dc794_0:;
L_1803dc794_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803dc794_2:;
/* 1803dc798: mulss xmm1, xmm2 */
L_1803dc798_0:;
L_1803dc798_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803dc798_2:;
/* 1803dc79c: cvttss2si eax, xmm1 */
L_1803dc79c_0:;
L_1803dc79c_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dc79c_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc79c_3:;
/* 1803dc7a0: mov dword ptr [rsi + 0x70], eax */
L_1803dc7a0_0:;
L_1803dc7a0_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x70))));
L_1803dc7a0_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803dc7a0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dc7a0_4:;
/* 1803dc7a3: add rsp, 0x30 */
L_1803dc7a3_0:;
L_1803dc7a3_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dc7a3_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803dc7a3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803dc7a3_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc7a3_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dc7a3_6:;
wr(s->u,12,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dc7a3_7:;
wr(s->u,20,1,pop(rd(s->u,12,8),8));
L_1803dc7a3_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dc7a3_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dc7a3_10:;
/* 1803dc7a7: pop rsi */
L_1803dc7a7_0:;
L_1803dc7a7_1:;
wr(s->u,22,8,((U)UINT64_C(0x0)));
L_1803dc7a7_2:;
wr(s->u,22,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc7a7_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc7a7_4:;
wr(s->r,48,8,rd(s->u,22,8));
L_1803dc7a7_5:;
/* 1803dc7a8: ret  */
L_1803dc7a8_0:;
L_1803dc7a8_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc7a8_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc7a8_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dc7a8_4:;
return UINT64_C(0x1803dc7a9);
}
uint64_t b_1803dc798(CPU*s){
/* 1803dc798: mulss xmm1, xmm2 */
L_1803dc798_0:;
L_1803dc798_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803dc798_2:;
/* 1803dc79c: cvttss2si eax, xmm1 */
L_1803dc79c_0:;
L_1803dc79c_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dc79c_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc79c_3:;
/* 1803dc7a0: mov dword ptr [rsi + 0x70], eax */
L_1803dc7a0_0:;
L_1803dc7a0_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x70))));
L_1803dc7a0_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803dc7a0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dc7a0_4:;
/* 1803dc7a3: add rsp, 0x30 */
L_1803dc7a3_0:;
L_1803dc7a3_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dc7a3_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803dc7a3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803dc7a3_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc7a3_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dc7a3_6:;
wr(s->u,12,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dc7a3_7:;
wr(s->u,20,1,pop(rd(s->u,12,8),8));
L_1803dc7a3_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dc7a3_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dc7a3_10:;
/* 1803dc7a7: pop rsi */
L_1803dc7a7_0:;
L_1803dc7a7_1:;
wr(s->u,22,8,((U)UINT64_C(0x0)));
L_1803dc7a7_2:;
wr(s->u,22,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc7a7_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc7a7_4:;
wr(s->r,48,8,rd(s->u,22,8));
L_1803dc7a7_5:;
/* 1803dc7a8: ret  */
L_1803dc7a8_0:;
L_1803dc7a8_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc7a8_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc7a8_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dc7a8_4:;
return UINT64_C(0x1803dc7a9);
}
uint64_t b_1803dc7b0(CPU*s){
/* 1803dc7b0: push rdi */
L_1803dc7b0_0:;
L_1803dc7b0_1:;
wr(s->u,44,8,rd(s->r,56,8));
L_1803dc7b0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc7b0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,44,8));
L_1803dc7b0_4:;
/* 1803dc7b2: sub rsp, 0x40 */
L_1803dc7b2_0:;
L_1803dc7b2_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x40))));
L_1803dc7b2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,1));
L_1803dc7b2_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x40))));
L_1803dc7b2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc7b2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dc7b2_6:;
wr(s->u,52,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dc7b2_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803dc7b2_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803dc7b2_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803dc7b2_10:;
/* 1803dc7b6: mov rdi, rcx */
L_1803dc7b6_0:;
L_1803dc7b6_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803dc7b6_2:;
/* 1803dc7b9: mov rcx, qword ptr [rcx + 0x66f0] */
L_1803dc7b9_0:;
L_1803dc7b9_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x66f0))));
L_1803dc7b9_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc7b9_3:;
wr(s->r,8,8,rd(s->u,36,8));
L_1803dc7b9_4:;
/* 1803dc7c0: movaps xmmword ptr [rsp + 0x20], xmm7 */
L_1803dc7c0_0:;
L_1803dc7c0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dc7c0_2:;
wr(s->u,20,16,rd(s->r,5056,16));
L_1803dc7c0_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803dc7c0_4:;
/* 1803dc7c5: movaps xmmword ptr [rsp + 0x30], xmm6 */
L_1803dc7c5_0:;
L_1803dc7c5_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dc7c5_2:;
wr(s->u,20,16,rd(s->r,4992,16));
L_1803dc7c5_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803dc7c5_4:;
/* 1803dc7ca: movss dword ptr [rsp + 0x60], xmm2 */
L_1803dc7ca_0:;
L_1803dc7ca_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dc7ca_2:;
wr(s->u,16,4,rd(s->r,4736,4));
L_1803dc7ca_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dc7ca_4:;
/* 1803dc7d0: movaps xmm6, xmm1 */
L_1803dc7d0_0:;
L_1803dc7d0_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803dc7d0_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803dc7d0_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803dc7d0_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803dc7d0_5:;
/* 1803dc7d3: call 0x1803da8c0 */
L_1803dc7d3_0:;
L_1803dc7d3_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc7d3_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc7d8)));
L_1803dc7d3_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc7d3_4:;
return UINT64_C(0x1803dc7d8);
}
uint64_t b_1803dc7c5(CPU*s){
/* 1803dc7c5: movaps xmmword ptr [rsp + 0x30], xmm6 */
L_1803dc7c5_0:;
L_1803dc7c5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dc7c5_2:;
wr(s->u,12,16,rd(s->r,4992,16));
L_1803dc7c5_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,12,16));
L_1803dc7c5_4:;
/* 1803dc7ca: movss dword ptr [rsp + 0x60], xmm2 */
L_1803dc7ca_0:;
L_1803dc7ca_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dc7ca_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803dc7ca_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dc7ca_4:;
/* 1803dc7d0: movaps xmm6, xmm1 */
L_1803dc7d0_0:;
L_1803dc7d0_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803dc7d0_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803dc7d0_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803dc7d0_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803dc7d0_5:;
/* 1803dc7d3: call 0x1803da8c0 */
L_1803dc7d3_0:;
L_1803dc7d3_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc7d3_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc7d8)));
L_1803dc7d3_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc7d3_4:;
return UINT64_C(0x1803dc7d8);
}
uint64_t b_1803dc7d8(CPU*s){
/* 1803dc7d8: mov r11d, eax */
L_1803dc7d8_0:;
L_1803dc7d8_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803dc7d8_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dc7d8_3:;
/* 1803dc7db: mov eax, dword ptr [rdi + 0x3c] */
L_1803dc7db_0:;
L_1803dc7db_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c))));
L_1803dc7db_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc7db_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803dc7db_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc7db_5:;
/* 1803dc7de: sar eax, 1 */
L_1803dc7de_0:;
L_1803dc7de_1:;
wr(s->u,91,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dc7de_2:;
wr(s->r,512,1,(rd(s->u,91,4)!=((U)UINT64_C(0x0))));
L_1803dc7de_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc7de_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc7de_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc7de_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc7de_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc7de_8:;
wr(s->u,13,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc7de_9:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dc7de_10:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dc7de_11:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dc7de_12:;
/* 1803dc7e0: cdq  */
L_1803dc7e0_0:;
L_1803dc7e0_1:;
wr(s->u,19,8,(U)sx(rd(s->r,0,4),4));
L_1803dc7e0_2:;
wr(s->r,16,4,(rd(s->u,19,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dc7e0_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc7e0_4:;
/* 1803dc7e1: idiv r11d */
L_1803dc7e1_0:;
L_1803dc7e1_1:;
wr(s->u,35,8,(U)sx(rd(s->r,152,4),4));
L_1803dc7e1_2:;
wr(s->u,43,8,rd(s->r,16,4));
L_1803dc7e1_3:;
wr(s->u,51,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,43,8)<<((U)UINT64_C(0x20)))));
L_1803dc7e1_4:;
wr(s->u,59,8,rd(s->r,0,4));
L_1803dc7e1_5:;
wr(s->u,67,8,(rd(s->u,51,8)|rd(s->u,59,8)));
L_1803dc7e1_6:;
wr(s->u,75,8,((U)(sx(rd(s->u,67,8),8)/sx(rd(s->u,35,8),8))));
L_1803dc7e1_7:;
wr(s->r,0,4,(rd(s->u,75,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc7e1_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc7e1_9:;
wr(s->u,83,8,((U)(sx(rd(s->u,67,8),8)%sx(rd(s->u,35,8),8))));
L_1803dc7e1_10:;
wr(s->r,16,4,(rd(s->u,83,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc7e1_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc7e1_12:;
/* 1803dc7e4: cmp eax, 1 */
L_1803dc7e4_0:;
L_1803dc7e4_1:;
wr(s->u,27,4,rd(s->r,0,4));
L_1803dc7e4_2:;
wr(s->r,512,1,(rd(s->u,27,4)<((U)UINT64_C(0x1))));
L_1803dc7e4_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,27,4),((U)UINT64_C(0x1)),4,1));
L_1803dc7e4_4:;
wr(s->u,31,4,(rd(s->u,27,4)-((U)UINT64_C(0x1))));
L_1803dc7e4_5:;
wr(s->r,519,1,(sx(rd(s->u,31,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc7e4_6:;
wr(s->r,518,1,(rd(s->u,31,4)==((U)UINT64_C(0x0))));
L_1803dc7e4_7:;
wr(s->u,13,4,(rd(s->u,31,4)&((U)UINT64_C(0xff))));
L_1803dc7e4_8:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dc7e4_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dc7e4_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dc7e4_11:;
/* 1803dc7e7: jl 0x1803dc7f5 */
L_1803dc7e7_0:;
L_1803dc7e7_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc7e7_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dc7f5);}
L_1803dc7e7_3:;
return UINT64_C(0x1803dc7e9);
}
uint64_t b_1803dc7e9(CPU*s){
/* 1803dc7e9: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc7e9_0:;
L_1803dc7e9_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc7e9_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc7e9_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc7e9_4:;
/* 1803dc7f0: call 0x1803da8c0 */
L_1803dc7f0_0:;
L_1803dc7f0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc7f0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc7f5)));
L_1803dc7f0_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc7f0_4:;
return UINT64_C(0x1803dc7f5);
}
uint64_t b_1803dc7f5(CPU*s){
/* 1803dc7f5: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc7f5_0:;
L_1803dc7f5_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc7f5_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc7f5_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc7f5_4:;
/* 1803dc7fc: call 0x1803da8e0 */
L_1803dc7fc_0:;
L_1803dc7fc_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc7fc_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc801)));
L_1803dc7fc_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dc7fc_4:;
return UINT64_C(0x1803dc801);
}
uint64_t b_1803dc801(CPU*s){
/* 1803dc801: mov rax, qword ptr [rdi] */
L_1803dc801_0:;
L_1803dc801_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803dc801_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dc801_3:;
/* 1803dc804: lea r8, [rsp + 0x60] */
L_1803dc804_0:;
L_1803dc804_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dc804_2:;
wr(s->r,128,8,rd(s->u,8,8));
L_1803dc804_3:;
/* 1803dc809: movss xmm0, dword ptr [rdi + 0x24] */
L_1803dc809_0:;
L_1803dc809_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x24))));
L_1803dc809_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc809_3:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803dc809_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dc809_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dc809_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dc809_7:;
/* 1803dc80e: movss xmm7, dword ptr [rdi + 0x18] */
L_1803dc80e_0:;
L_1803dc80e_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803dc80e_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc80e_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803dc80e_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803dc80e_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803dc80e_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803dc80e_7:;
/* 1803dc813: movaps xmm1, xmm6 */
L_1803dc813_0:;
L_1803dc813_1:;
wr(s->r,4672,4,rd(s->r,4992,4));
L_1803dc813_2:;
wr(s->r,4676,4,rd(s->r,4996,4));
L_1803dc813_3:;
wr(s->r,4680,4,rd(s->r,5000,4));
L_1803dc813_4:;
wr(s->r,4684,4,rd(s->r,5004,4));
L_1803dc813_5:;
/* 1803dc816: movss dword ptr [rsp + 0x50], xmm0 */
L_1803dc816_0:;
L_1803dc816_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dc816_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803dc816_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dc816_4:;
/* 1803dc81c: mov r9b, 1 */
L_1803dc81c_0:;
L_1803dc81c_1:;
wr(s->r,136,1,((U)UINT64_C(0x1)));
L_1803dc81c_2:;
/* 1803dc81f: mov rcx, rdi */
L_1803dc81f_0:;
L_1803dc81f_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803dc81f_2:;
/* 1803dc822: call qword ptr [rax + 0x68] */
L_1803dc822_0:;
L_1803dc822_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x68))));
L_1803dc822_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc822_3:;
wr(s->u,28,8,rd(s->u,20,8));
L_1803dc822_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc822_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc825)));
L_1803dc822_6:;
return (uint64_t)rd(s->u,28,8);
L_1803dc822_7:;
return UINT64_C(0x1803dc825);
}
uint64_t b_1803dc825(CPU*s){
/* 1803dc825: movaps xmm6, xmmword ptr [rsp + 0x30] */
L_1803dc825_0:;
L_1803dc825_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dc825_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dc825_3:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803dc825_4:;
wr(s->r,4992,4,rd(s->u,34,4));
L_1803dc825_5:;
wr(s->r,4996,4,rd(s->u,38,4));
L_1803dc825_6:;
wr(s->r,5000,4,rd(s->u,42,4));
L_1803dc825_7:;
wr(s->r,5004,4,rd(s->u,46,4));
L_1803dc825_8:;
/* 1803dc82a: test eax, eax */
L_1803dc82a_0:;
L_1803dc82a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dc82a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc82a_3:;
wr(s->u,30,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803dc82a_4:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc82a_5:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803dc82a_6:;
wr(s->u,24,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803dc82a_7:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803dc82a_8:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803dc82a_9:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803dc82a_10:;
/* 1803dc82c: je 0x1803dc83c */
L_1803dc82c_0:;
L_1803dc82c_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dc83c);}
L_1803dc82c_2:;
return UINT64_C(0x1803dc82e);
}
uint64_t b_1803dc82e(CPU*s){
/* 1803dc82e: or eax, 0xffffffff */
L_1803dc82e_0:;
L_1803dc82e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dc82e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc82e_3:;
wr(s->r,0,4,(rd(s->r,0,4)|((U)UINT64_C(0xffffffff))));
L_1803dc82e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc82e_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc82e_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc82e_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc82e_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803dc82e_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dc82e_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dc82e_11:;
/* 1803dc831: movaps xmm7, xmmword ptr [rsp + 0x20] */
L_1803dc831_0:;
L_1803dc831_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dc831_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dc831_3:;
wr(s->u,42,16,rd(s->u,8,16));
L_1803dc831_4:;
wr(s->r,5056,4,rd(s->u,42,4));
L_1803dc831_5:;
wr(s->r,5060,4,rd(s->u,46,4));
L_1803dc831_6:;
wr(s->r,5064,4,rd(s->u,50,4));
L_1803dc831_7:;
wr(s->r,5068,4,rd(s->u,54,4));
L_1803dc831_8:;
/* 1803dc836: add rsp, 0x40 */
L_1803dc836_0:;
L_1803dc836_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dc836_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803dc836_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803dc836_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc836_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dc836_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dc836_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803dc836_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dc836_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dc836_10:;
/* 1803dc83a: pop rdi */
L_1803dc83a_0:;
L_1803dc83a_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803dc83a_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc83a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc83a_4:;
wr(s->r,56,8,rd(s->u,34,8));
L_1803dc83a_5:;
/* 1803dc83b: ret  */
L_1803dc83b_0:;
L_1803dc83b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc83b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc83b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dc83b_4:;
return UINT64_C(0x1803dc83c);
}
uint64_t b_1803dc83c(CPU*s){
/* 1803dc83c: mov edx, dword ptr [rdi + 0x3c] */
L_1803dc83c_0:;
L_1803dc83c_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c))));
L_1803dc83c_2:;
wr(s->u,37,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dc83c_3:;
wr(s->r,16,4,rd(s->u,37,4));
L_1803dc83c_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc83c_5:;
/* 1803dc83f: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc83f_0:;
L_1803dc83f_1:;
wr(s->u,13,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc83f_2:;
wr(s->u,41,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803dc83f_3:;
wr(s->r,8,8,rd(s->u,41,8));
L_1803dc83f_4:;
/* 1803dc846: mov qword ptr [rsp + 0x58], rbx */
L_1803dc846_0:;
L_1803dc846_1:;
wr(s->u,21,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803dc846_2:;
wr(s->u,29,8,rd(s->r,24,8));
L_1803dc846_3:;
mw((uint64_t)rd(s->u,21,8),8,rd(s->u,29,8));
L_1803dc846_4:;
/* 1803dc84b: shl edx, 2 */
L_1803dc84b_0:;
L_1803dc84b_1:;
wr(s->u,87,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803dc84b_2:;
wr(s->u,91,4,rd(s->r,16,4));
L_1803dc84b_3:;
wr(s->r,16,4,((rd(s->u,87,4)>=32)?0:(rd(s->r,16,4)<<rd(s->u,87,4))));
L_1803dc84b_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc84b_5:;
wr(s->u,74,1,(rd(s->u,87,4)==((U)UINT64_C(0x0))));
L_1803dc84b_6:;
wr(s->u,75,4,(rd(s->u,87,4)-((U)UINT64_C(0x1))));
L_1803dc84b_7:;
wr(s->u,79,4,((rd(s->u,75,4)>=32)?0:(rd(s->u,91,4)<<rd(s->u,75,4))));
L_1803dc84b_8:;
wr(s->u,83,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc84b_9:;
wr(s->u,0,1,rd(s->u,74,1));
L_1803dc84b_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dc84b_11:;
wr(s->u,2,1,(!rd(s->u,74,1)));
L_1803dc84b_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dc84b_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,83,1)));
L_1803dc84b_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dc84b_15:;
wr(s->u,84,1,(rd(s->u,87,4)==((U)UINT64_C(0x1))));
L_1803dc84b_16:;
wr(s->u,85,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc84b_17:;
wr(s->u,86,1,(rd(s->r,512,1)^rd(s->u,85,1)));
L_1803dc84b_18:;
wr(s->u,0,1,rd(s->u,84,1));
L_1803dc84b_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,86,1)));
L_1803dc84b_20:;
wr(s->u,2,1,(!rd(s->u,84,1)));
L_1803dc84b_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dc84b_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dc84b_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dc84b_24:;
wr(s->u,55,1,(rd(s->u,87,4)!=((U)UINT64_C(0x0))));
L_1803dc84b_25:;
wr(s->u,56,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc84b_26:;
wr(s->u,57,1,(!rd(s->u,55,1)));
L_1803dc84b_27:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,519,1)));
L_1803dc84b_28:;
wr(s->u,59,1,(rd(s->u,55,1)&rd(s->u,56,1)));
L_1803dc84b_29:;
wr(s->r,519,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803dc84b_30:;
wr(s->u,60,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc84b_31:;
wr(s->u,61,1,(!rd(s->u,55,1)));
L_1803dc84b_32:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,518,1)));
L_1803dc84b_33:;
wr(s->u,63,1,(rd(s->u,55,1)&rd(s->u,60,1)));
L_1803dc84b_34:;
wr(s->r,518,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803dc84b_35:;
wr(s->u,64,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc84b_36:;
wr(s->u,68,1,pop(rd(s->u,64,4),4));
L_1803dc84b_37:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803dc84b_38:;
wr(s->u,70,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803dc84b_39:;
wr(s->u,71,1,(!rd(s->u,55,1)));
L_1803dc84b_40:;
wr(s->u,72,1,(rd(s->u,71,1)&rd(s->r,514,1)));
L_1803dc84b_41:;
wr(s->u,73,1,(rd(s->u,55,1)&rd(s->u,70,1)));
L_1803dc84b_42:;
wr(s->r,514,1,(rd(s->u,72,1)|rd(s->u,73,1)));
L_1803dc84b_43:;
/* 1803dc84e: neg edx */
L_1803dc84e_0:;
L_1803dc84e_1:;
wr(s->r,512,1,(rd(s->r,16,4)!=((U)UINT64_C(0x0))));
L_1803dc84e_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,16,4),4,1));
L_1803dc84e_3:;
wr(s->r,16,4,(-rd(s->r,16,4)));
L_1803dc84e_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc84e_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc84e_6:;
wr(s->u,49,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc84e_7:;
wr(s->u,53,1,pop(rd(s->u,49,4),4));
L_1803dc84e_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803dc84e_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803dc84e_10:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc84e_11:;
/* 1803dc850: call 0x1803da8d0 */
L_1803dc850_0:;
L_1803dc850_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc850_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc855)));
L_1803dc850_3:;
return (uint64_t)UINT64_C(0x1803da8d0);
L_1803dc850_4:;
return UINT64_C(0x1803dc855);
}
uint64_t b_1803dc855(CPU*s){
/* 1803dc855: mov r11, qword ptr [rdi] */
L_1803dc855_0:;
L_1803dc855_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803dc855_2:;
wr(s->r,152,8,rd(s->u,8,8));
L_1803dc855_3:;
/* 1803dc858: mov rcx, rdi */
L_1803dc858_0:;
L_1803dc858_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803dc858_2:;
/* 1803dc85b: call qword ptr [r11 + 0x50] */
L_1803dc85b_0:;
L_1803dc85b_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x50))));
L_1803dc85b_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc85b_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803dc85b_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc85b_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc85f)));
L_1803dc85b_6:;
return (uint64_t)rd(s->u,16,8);
L_1803dc85b_7:;
return UINT64_C(0x1803dc85f);
}
uint64_t b_1803dc85f(CPU*s){
/* 1803dc85f: mov rdx, qword ptr [rdi] */
L_1803dc85f_0:;
L_1803dc85f_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803dc85f_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803dc85f_3:;
/* 1803dc862: mov rcx, rdi */
L_1803dc862_0:;
L_1803dc862_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803dc862_2:;
/* 1803dc865: mov ebx, eax */
L_1803dc865_0:;
L_1803dc865_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803dc865_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc865_3:;
/* 1803dc867: call qword ptr [rdx + 0x48] */
L_1803dc867_0:;
L_1803dc867_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x48))));
L_1803dc867_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc867_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803dc867_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc867_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc86a)));
L_1803dc867_6:;
return (uint64_t)rd(s->u,16,8);
L_1803dc867_7:;
return UINT64_C(0x1803dc86a);
}
uint64_t b_1803dc86a(CPU*s){
/* 1803dc86a: cmp ebx, eax */
L_1803dc86a_0:;
L_1803dc86a_1:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803dc86a_2:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->u,8,4)));
L_1803dc86a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->u,8,4),4,1));
L_1803dc86a_4:;
wr(s->u,12,4,(rd(s->r,24,4)-rd(s->u,8,4)));
L_1803dc86a_5:;
wr(s->r,519,1,(sx(rd(s->u,12,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc86a_6:;
wr(s->r,518,1,(rd(s->u,12,4)==((U)UINT64_C(0x0))));
L_1803dc86a_7:;
wr(s->u,2,4,(rd(s->u,12,4)&((U)UINT64_C(0xff))));
L_1803dc86a_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dc86a_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dc86a_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dc86a_11:;
/* 1803dc86c: jle 0x1803dc879 */
L_1803dc86c_0:;
L_1803dc86c_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dc86c_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803dc86c_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803dc879);}
L_1803dc86c_4:;
return UINT64_C(0x1803dc86e);
}
uint64_t b_1803dc86e(CPU*s){
/* 1803dc86e: mov rax, qword ptr [rdi] */
L_1803dc86e_0:;
L_1803dc86e_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803dc86e_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803dc86e_3:;
/* 1803dc871: mov rcx, rdi */
L_1803dc871_0:;
L_1803dc871_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803dc871_2:;
/* 1803dc874: call qword ptr [rax + 0x50] */
L_1803dc874_0:;
L_1803dc874_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x50))));
L_1803dc874_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc874_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803dc874_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc874_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc877)));
L_1803dc874_6:;
return (uint64_t)rd(s->u,16,8);
L_1803dc874_7:;
return UINT64_C(0x1803dc877);
}
uint64_t b_1803dc877(CPU*s){
/* 1803dc877: jmp 0x1803dc882 */
L_1803dc877_0:;
L_1803dc877_1:;
return UINT64_C(0x1803dc882);
L_1803dc877_2:;
return UINT64_C(0x1803dc879);
}
uint64_t b_1803dc879(CPU*s){
/* 1803dc879: mov rax, qword ptr [rdi] */
L_1803dc879_0:;
L_1803dc879_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803dc879_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803dc879_3:;
/* 1803dc87c: mov rcx, rdi */
L_1803dc87c_0:;
L_1803dc87c_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803dc87c_2:;
/* 1803dc87f: call qword ptr [rax + 0x48] */
L_1803dc87f_0:;
L_1803dc87f_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x48))));
L_1803dc87f_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc87f_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803dc87f_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc87f_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc882)));
L_1803dc87f_6:;
return (uint64_t)rd(s->u,16,8);
L_1803dc87f_7:;
return UINT64_C(0x1803dc882);
}
uint64_t b_1803dc882(CPU*s){
/* 1803dc882: mov edx, dword ptr [rdi + 0x3c] */
L_1803dc882_0:;
L_1803dc882_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x3c))));
L_1803dc882_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc882_3:;
wr(s->r,16,4,rd(s->u,16,4));
L_1803dc882_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc882_5:;
/* 1803dc885: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc885_0:;
L_1803dc885_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc885_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc885_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dc885_4:;
/* 1803dc88c: mov ebx, eax */
L_1803dc88c_0:;
L_1803dc88c_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803dc88c_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc88c_3:;
/* 1803dc88e: add edx, edx */
L_1803dc88e_0:;
L_1803dc88e_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->r,16,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803dc88e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->r,16,4),4,0));
L_1803dc88e_3:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->r,16,4)));
L_1803dc88e_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc88e_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc88e_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc88e_7:;
wr(s->u,28,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc88e_8:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dc88e_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dc88e_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dc88e_11:;
/* 1803dc890: neg edx */
L_1803dc890_0:;
L_1803dc890_1:;
wr(s->r,512,1,(rd(s->r,16,4)!=((U)UINT64_C(0x0))));
L_1803dc890_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,16,4),4,1));
L_1803dc890_3:;
wr(s->r,16,4,(-rd(s->r,16,4)));
L_1803dc890_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc890_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dc890_6:;
wr(s->u,28,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dc890_7:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dc890_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dc890_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dc890_10:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc890_11:;
/* 1803dc892: call 0x1803da8d0 */
L_1803dc892_0:;
L_1803dc892_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc892_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc897)));
L_1803dc892_3:;
return (uint64_t)UINT64_C(0x1803da8d0);
L_1803dc892_4:;
return UINT64_C(0x1803dc897);
}
uint64_t b_1803dc897(CPU*s){
/* 1803dc897: mov r11, qword ptr [rdi] */
L_1803dc897_0:;
L_1803dc897_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803dc897_2:;
wr(s->r,152,8,rd(s->u,16,8));
L_1803dc897_3:;
/* 1803dc89a: lea r8, [rsp + 0x50] */
L_1803dc89a_0:;
L_1803dc89a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dc89a_2:;
wr(s->r,128,8,rd(s->u,8,8));
L_1803dc89a_3:;
/* 1803dc89f: movaps xmm1, xmm7 */
L_1803dc89f_0:;
L_1803dc89f_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803dc89f_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803dc89f_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803dc89f_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803dc89f_5:;
/* 1803dc8a2: xor r9d, r9d */
L_1803dc8a2_0:;
L_1803dc8a2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dc8a2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc8a2_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803dc8a2_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dc8a2_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc8a2_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dc8a2_7:;
wr(s->u,24,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dc8a2_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803dc8a2_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803dc8a2_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803dc8a2_11:;
/* 1803dc8a5: mov rcx, rdi */
L_1803dc8a5_0:;
L_1803dc8a5_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803dc8a5_2:;
/* 1803dc8a8: call qword ptr [r11 + 0x68] */
L_1803dc8a8_0:;
L_1803dc8a8_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x68))));
L_1803dc8a8_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc8a8_3:;
wr(s->u,30,8,rd(s->u,16,8));
L_1803dc8a8_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc8a8_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc8ac)));
L_1803dc8a8_6:;
return (uint64_t)rd(s->u,30,8);
L_1803dc8a8_7:;
return UINT64_C(0x1803dc8ac);
}
uint64_t b_1803dc8ac(CPU*s){
/* 1803dc8ac: mov rax, qword ptr [rdi] */
L_1803dc8ac_0:;
L_1803dc8ac_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803dc8ac_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dc8ac_3:;
/* 1803dc8af: mov rcx, rdi */
L_1803dc8af_0:;
L_1803dc8af_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803dc8af_2:;
/* 1803dc8b2: mov dword ptr [rdi + 0xc8], 0 */
L_1803dc8b2_0:;
L_1803dc8b2_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0xc8))));
L_1803dc8b2_2:;
wr(s->u,16,4,((U)UINT64_C(0x0)));
L_1803dc8b2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dc8b2_4:;
/* 1803dc8bc: call qword ptr [rax + 0x70] */
L_1803dc8bc_0:;
L_1803dc8bc_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x70))));
L_1803dc8bc_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc8bc_3:;
wr(s->u,28,8,rd(s->u,20,8));
L_1803dc8bc_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc8bc_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc8bf)));
L_1803dc8bc_6:;
return (uint64_t)rd(s->u,28,8);
L_1803dc8bc_7:;
return UINT64_C(0x1803dc8bf);
}
uint64_t b_1803dc8bf(CPU*s){
/* 1803dc8bf: mov eax, ebx */
L_1803dc8bf_0:;
L_1803dc8bf_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803dc8bf_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc8bf_3:;
/* 1803dc8c1: movaps xmm7, xmmword ptr [rsp + 0x20] */
L_1803dc8c1_0:;
L_1803dc8c1_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dc8c1_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dc8c1_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803dc8c1_4:;
wr(s->r,5056,4,rd(s->u,50,4));
L_1803dc8c1_5:;
wr(s->r,5060,4,rd(s->u,54,4));
L_1803dc8c1_6:;
wr(s->r,5064,4,rd(s->u,58,4));
L_1803dc8c1_7:;
wr(s->r,5068,4,rd(s->u,62,4));
L_1803dc8c1_8:;
/* 1803dc8c6: mov rbx, qword ptr [rsp + 0x58] */
L_1803dc8c6_0:;
L_1803dc8c6_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803dc8c6_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc8c6_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803dc8c6_4:;
/* 1803dc8cb: add rsp, 0x40 */
L_1803dc8cb_0:;
L_1803dc8cb_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dc8cb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803dc8cb_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803dc8cb_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc8cb_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dc8cb_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dc8cb_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803dc8cb_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803dc8cb_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803dc8cb_10:;
/* 1803dc8cf: pop rdi */
L_1803dc8cf_0:;
L_1803dc8cf_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803dc8cf_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc8cf_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc8cf_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803dc8cf_5:;
/* 1803dc8d0: ret  */
L_1803dc8d0_0:;
L_1803dc8d0_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc8d0_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc8d0_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dc8d0_4:;
return UINT64_C(0x1803dc8d1);
}
uint64_t b_1803dc8e0(CPU*s){
/* 1803dc8e0: push rdi */
L_1803dc8e0_0:;
L_1803dc8e0_1:;
wr(s->u,12,8,rd(s->r,56,8));
L_1803dc8e0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc8e0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,12,8));
L_1803dc8e0_4:;
/* 1803dc8e2: sub rsp, 0x20 */
L_1803dc8e2_0:;
L_1803dc8e2_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803dc8e2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803dc8e2_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803dc8e2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc8e2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dc8e2_6:;
wr(s->u,20,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dc8e2_7:;
wr(s->u,28,1,pop(rd(s->u,20,8),8));
L_1803dc8e2_8:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803dc8e2_9:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803dc8e2_10:;
/* 1803dc8e6: cmp dword ptr [rcx + 0xc0], 0 */
L_1803dc8e6_0:;
L_1803dc8e6_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc0))));
L_1803dc8e6_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc8e6_3:;
wr(s->u,30,4,rd(s->u,8,4));
L_1803dc8e6_4:;
wr(s->r,512,1,(rd(s->u,30,4)<((U)UINT64_C(0x0))));
L_1803dc8e6_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,30,4),((U)UINT64_C(0x0)),4,1));
L_1803dc8e6_6:;
wr(s->u,34,4,(rd(s->u,30,4)-((U)UINT64_C(0x0))));
L_1803dc8e6_7:;
wr(s->r,519,1,(sx(rd(s->u,34,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc8e6_8:;
wr(s->r,518,1,(rd(s->u,34,4)==((U)UINT64_C(0x0))));
L_1803dc8e6_9:;
wr(s->u,20,4,(rd(s->u,34,4)&((U)UINT64_C(0xff))));
L_1803dc8e6_10:;
wr(s->u,28,1,pop(rd(s->u,20,4),4));
L_1803dc8e6_11:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803dc8e6_12:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803dc8e6_13:;
/* 1803dc8ed: mov rdi, rcx */
L_1803dc8ed_0:;
L_1803dc8ed_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803dc8ed_2:;
/* 1803dc8f0: je 0x1803dc952 */
L_1803dc8f0_0:;
L_1803dc8f0_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dc952);}
L_1803dc8f0_2:;
return UINT64_C(0x1803dc8f2);
}
uint64_t b_1803dc8f2(CPU*s){
/* 1803dc8f2: mov rax, qword ptr [rcx + 0x66f0] */
L_1803dc8f2_0:;
L_1803dc8f2_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x66f0))));
L_1803dc8f2_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc8f2_3:;
wr(s->r,0,8,rd(s->u,28,8));
L_1803dc8f2_4:;
/* 1803dc8f9: mov qword ptr [rsp + 0x30], rbx */
L_1803dc8f9_0:;
L_1803dc8f9_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dc8f9_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803dc8f9_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dc8f9_4:;
/* 1803dc8fe: mov ebx, dword ptr [rax + 0x368] */
L_1803dc8fe_0:;
L_1803dc8fe_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x368))));
L_1803dc8fe_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc8fe_3:;
wr(s->r,24,4,rd(s->u,24,4));
L_1803dc8fe_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc8fe_5:;
/* 1803dc904: mov rcx, rax */
L_1803dc904_0:;
L_1803dc904_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803dc904_2:;
/* 1803dc907: call 0x1803da8c0 */
L_1803dc907_0:;
L_1803dc907_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc907_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc90c)));
L_1803dc907_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc907_4:;
return UINT64_C(0x1803dc90c);
}
uint64_t b_1803dc8f9(CPU*s){
/* 1803dc8f9: mov qword ptr [rsp + 0x30], rbx */
L_1803dc8f9_0:;
L_1803dc8f9_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dc8f9_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803dc8f9_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dc8f9_4:;
/* 1803dc8fe: mov ebx, dword ptr [rax + 0x368] */
L_1803dc8fe_0:;
L_1803dc8fe_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x368))));
L_1803dc8fe_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc8fe_3:;
wr(s->r,24,4,rd(s->u,24,4));
L_1803dc8fe_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc8fe_5:;
/* 1803dc904: mov rcx, rax */
L_1803dc904_0:;
L_1803dc904_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803dc904_2:;
/* 1803dc907: call 0x1803da8c0 */
L_1803dc907_0:;
L_1803dc907_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc907_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc90c)));
L_1803dc907_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc907_4:;
return UINT64_C(0x1803dc90c);
}
uint64_t b_1803dc90c(CPU*s){
/* 1803dc90c: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc90c_0:;
L_1803dc90c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc90c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc90c_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc90c_4:;
/* 1803dc913: mov r11d, eax */
L_1803dc913_0:;
L_1803dc913_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803dc913_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dc913_3:;
/* 1803dc916: mov eax, ebx */
L_1803dc916_0:;
L_1803dc916_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803dc916_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc916_3:;
/* 1803dc918: cdq  */
L_1803dc918_0:;
L_1803dc918_1:;
wr(s->u,22,8,(U)sx(rd(s->r,0,4),4));
L_1803dc918_2:;
wr(s->r,16,4,(rd(s->u,22,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dc918_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc918_4:;
/* 1803dc919: idiv r11d */
L_1803dc919_0:;
L_1803dc919_1:;
wr(s->u,30,8,(U)sx(rd(s->r,152,4),4));
L_1803dc919_2:;
wr(s->u,38,8,rd(s->r,16,4));
L_1803dc919_3:;
wr(s->u,46,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,38,8)<<((U)UINT64_C(0x20)))));
L_1803dc919_4:;
wr(s->u,54,8,rd(s->r,0,4));
L_1803dc919_5:;
wr(s->u,62,8,(rd(s->u,46,8)|rd(s->u,54,8)));
L_1803dc919_6:;
wr(s->u,70,8,((U)(sx(rd(s->u,62,8),8)/sx(rd(s->u,30,8),8))));
L_1803dc919_7:;
wr(s->r,0,4,(rd(s->u,70,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc919_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc919_9:;
wr(s->u,78,8,((U)(sx(rd(s->u,62,8),8)%sx(rd(s->u,30,8),8))));
L_1803dc919_10:;
wr(s->r,16,4,(rd(s->u,78,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc919_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc919_12:;
/* 1803dc91c: mov ebx, eax */
L_1803dc91c_0:;
L_1803dc91c_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803dc91c_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc91c_3:;
/* 1803dc91e: sar ebx, 1 */
L_1803dc91e_0:;
L_1803dc91e_1:;
wr(s->u,86,4,(rd(s->r,24,4)&((U)UINT64_C(0x1))));
L_1803dc91e_2:;
wr(s->r,512,1,(rd(s->u,86,4)!=((U)UINT64_C(0x0))));
L_1803dc91e_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc91e_4:;
wr(s->r,24,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,24,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,24,4),4)>>((U)UINT64_C(0x1)))));
L_1803dc91e_5:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc91e_6:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc91e_7:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803dc91e_8:;
wr(s->u,16,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803dc91e_9:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803dc91e_10:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dc91e_11:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dc91e_12:;
/* 1803dc920: call 0x1803da8c0 */
L_1803dc920_0:;
L_1803dc920_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc920_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc925)));
L_1803dc920_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc920_4:;
return UINT64_C(0x1803dc925);
}
uint64_t b_1803dc925(CPU*s){
/* 1803dc925: mov rcx, qword ptr [rdi + 0x66f0] */
L_1803dc925_0:;
L_1803dc925_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x66f0))));
L_1803dc925_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc925_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dc925_4:;
/* 1803dc92c: imul eax, ebx */
L_1803dc92c_0:;
L_1803dc92c_1:;
wr(s->u,42,8,(U)sx(rd(s->r,0,4),4));
L_1803dc92c_2:;
wr(s->u,50,8,(U)sx(rd(s->r,24,4),4));
L_1803dc92c_3:;
wr(s->u,58,8,(rd(s->u,42,8)*rd(s->u,50,8)));
L_1803dc92c_4:;
wr(s->r,0,4,(rd(s->u,58,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc92c_5:;
wr(s->u,66,4,(rd(s->u,58,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dc92c_6:;
wr(s->u,34,8,(U)sx(rd(s->r,0,4),4));
L_1803dc92c_7:;
wr(s->r,512,1,(rd(s->u,34,8)!=rd(s->u,58,8)));
L_1803dc92c_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803dc92c_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc92c_10:;
/* 1803dc92f: mov ebx, dword ptr [rdi + 0x64] */
L_1803dc92f_0:;
L_1803dc92f_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x64))));
L_1803dc92f_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc92f_3:;
wr(s->r,24,4,rd(s->u,16,4));
L_1803dc92f_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc92f_5:;
/* 1803dc932: sub ebx, eax */
L_1803dc932_0:;
L_1803dc932_1:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->r,0,4)));
L_1803dc932_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->r,0,4),4,1));
L_1803dc932_3:;
wr(s->r,24,4,(rd(s->r,24,4)-rd(s->r,0,4)));
L_1803dc932_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc932_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc932_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803dc932_7:;
wr(s->u,28,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803dc932_8:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dc932_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dc932_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dc932_11:;
/* 1803dc934: add ebx, ebx */
L_1803dc934_0:;
L_1803dc934_1:;
wr(s->r,512,1,(((rd(s->r,24,4)+rd(s->r,24,4))&(((U)1<<32)-1))<rd(s->r,24,4)));
L_1803dc934_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->r,24,4),4,0));
L_1803dc934_3:;
wr(s->r,24,4,(rd(s->r,24,4)+rd(s->r,24,4)));
L_1803dc934_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dc934_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc934_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803dc934_7:;
wr(s->u,28,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803dc934_8:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dc934_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dc934_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dc934_11:;
/* 1803dc936: call 0x1803da8c0 */
L_1803dc936_0:;
L_1803dc936_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc936_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc93b)));
L_1803dc936_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dc936_4:;
return UINT64_C(0x1803dc93b);
}
uint64_t b_1803dc93b(CPU*s){
/* 1803dc93b: mov r11d, eax */
L_1803dc93b_0:;
L_1803dc93b_1:;
wr(s->r,152,4,rd(s->r,0,4));
L_1803dc93b_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dc93b_3:;
/* 1803dc93e: mov eax, ebx */
L_1803dc93e_0:;
L_1803dc93e_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803dc93e_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc93e_3:;
/* 1803dc940: mov rbx, qword ptr [rsp + 0x30] */
L_1803dc940_0:;
L_1803dc940_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dc940_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc940_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803dc940_4:;
/* 1803dc945: cdq  */
L_1803dc945_0:;
L_1803dc945_1:;
wr(s->u,26,8,(U)sx(rd(s->r,0,4),4));
L_1803dc945_2:;
wr(s->r,16,4,(rd(s->u,26,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dc945_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc945_4:;
/* 1803dc946: idiv r11d */
L_1803dc946_0:;
L_1803dc946_1:;
wr(s->u,34,8,(U)sx(rd(s->r,152,4),4));
L_1803dc946_2:;
wr(s->u,42,8,rd(s->r,16,4));
L_1803dc946_3:;
wr(s->u,50,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,42,8)<<((U)UINT64_C(0x20)))));
L_1803dc946_4:;
wr(s->u,58,8,rd(s->r,0,4));
L_1803dc946_5:;
wr(s->u,66,8,(rd(s->u,50,8)|rd(s->u,58,8)));
L_1803dc946_6:;
wr(s->u,74,8,((U)(sx(rd(s->u,66,8),8)/sx(rd(s->u,34,8),8))));
L_1803dc946_7:;
wr(s->r,0,4,(rd(s->u,74,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc946_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc946_9:;
wr(s->u,82,8,((U)(sx(rd(s->u,66,8),8)%sx(rd(s->u,34,8),8))));
L_1803dc946_10:;
wr(s->r,16,4,(rd(s->u,82,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dc946_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc946_12:;
/* 1803dc949: add eax, 3 */
L_1803dc949_0:;
L_1803dc949_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0x3)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803dc949_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x3)),4,0));
L_1803dc949_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x3))));
L_1803dc949_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dc949_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dc949_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dc949_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dc949_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803dc949_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dc949_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dc949_11:;
/* 1803dc94c: add rsp, 0x20 */
L_1803dc94c_0:;
L_1803dc94c_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dc94c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803dc94c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803dc94c_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc94c_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dc94c_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dc94c_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dc94c_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dc94c_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dc94c_10:;
/* 1803dc950: pop rdi */
L_1803dc950_0:;
L_1803dc950_1:;
wr(s->u,90,8,((U)UINT64_C(0x0)));
L_1803dc950_2:;
wr(s->u,90,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc950_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc950_4:;
wr(s->r,56,8,rd(s->u,90,8));
L_1803dc950_5:;
/* 1803dc951: ret  */
L_1803dc951_0:;
L_1803dc951_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc951_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc951_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dc951_4:;
return UINT64_C(0x1803dc952);
}
uint64_t b_1803dc952(CPU*s){
/* 1803dc952: mov eax, 3 */
L_1803dc952_0:;
L_1803dc952_1:;
wr(s->r,0,8,((U)UINT64_C(0x3)));
L_1803dc952_2:;
/* 1803dc957: add rsp, 0x20 */
L_1803dc957_0:;
L_1803dc957_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dc957_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803dc957_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803dc957_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc957_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dc957_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dc957_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803dc957_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dc957_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dc957_10:;
/* 1803dc95b: pop rdi */
L_1803dc95b_0:;
L_1803dc95b_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803dc95b_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc95b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc95b_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803dc95b_5:;
/* 1803dc95c: ret  */
L_1803dc95c_0:;
L_1803dc95c_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dc95c_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dc95c_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dc95c_4:;
return UINT64_C(0x1803dc95d);
}
uint64_t b_1803dc960(CPU*s){
/* 1803dc960: push rbx */
L_1803dc960_0:;
L_1803dc960_1:;
wr(s->u,40,8,rd(s->r,24,8));
L_1803dc960_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc960_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,40,8));
L_1803dc960_4:;
/* 1803dc962: sub rsp, 0x30 */
L_1803dc962_0:;
L_1803dc962_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803dc962_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803dc962_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803dc962_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc962_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dc962_6:;
wr(s->u,48,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dc962_7:;
wr(s->u,56,1,pop(rd(s->u,48,8),8));
L_1803dc962_8:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803dc962_9:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803dc962_10:;
/* 1803dc966: mov rbx, rcx */
L_1803dc966_0:;
L_1803dc966_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803dc966_2:;
/* 1803dc969: mov rcx, qword ptr [rcx + 0x66f0] */
L_1803dc969_0:;
L_1803dc969_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x66f0))));
L_1803dc969_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc969_3:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803dc969_4:;
/* 1803dc970: movaps xmmword ptr [rsp + 0x20], xmm6 */
L_1803dc970_0:;
L_1803dc970_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dc970_2:;
wr(s->u,16,16,rd(s->r,4992,16));
L_1803dc970_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,16,16));
L_1803dc970_4:;
/* 1803dc975: call 0x1803da8e0 */
L_1803dc975_0:;
L_1803dc975_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc975_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc97a)));
L_1803dc975_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dc975_4:;
return UINT64_C(0x1803dc97a);
}
uint64_t b_1803dc97a(CPU*s){
/* 1803dc97a: mov rcx, qword ptr [rbx + 0x66f0] */
L_1803dc97a_0:;
L_1803dc97a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f0))));
L_1803dc97a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc97a_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc97a_4:;
/* 1803dc981: movd xmm6, eax */
L_1803dc981_0:;
L_1803dc981_1:;
wr(s->r,4992,16,rd(s->r,0,4));
L_1803dc981_2:;
/* 1803dc985: cvtdq2pd xmm6, xmm6 */
L_1803dc985_0:;
L_1803dc985_1:;
wr(s->u,16,8,rd(s->r,4992,8));
L_1803dc985_2:;
wr(s->r,4992,8,fb((double)sx(rd(s->u,16,4),4),8));
L_1803dc985_3:;
wr(s->r,5000,8,fb((double)sx(rd(s->u,20,4),4),8));
L_1803dc985_4:;
/* 1803dc989: call 0x1803da8e0 */
L_1803dc989_0:;
L_1803dc989_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc989_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc98e)));
L_1803dc989_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dc989_4:;
return UINT64_C(0x1803dc98e);
}
uint64_t b_1803dc98e(CPU*s){
/* 1803dc98e: mov rcx, qword ptr [rbx + 0x6710] */
L_1803dc98e_0:;
L_1803dc98e_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x6710))));
L_1803dc98e_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dc98e_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dc98e_4:;
/* 1803dc995: mov edx, eax */
L_1803dc995_0:;
L_1803dc995_1:;
wr(s->r,16,4,rd(s->r,0,4));
L_1803dc995_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dc995_3:;
/* 1803dc997: movss xmm3, dword ptr [rip + 0x2702a5] */
L_1803dc997_0:;
L_1803dc997_1:;
wr(s->r,4800,4,mr(UINT64_C(0x18064cc44),4));
L_1803dc997_2:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803dc997_3:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803dc997_4:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803dc997_5:;
/* 1803dc99f: movss xmm2, dword ptr [rbx + 0x24] */
L_1803dc99f_0:;
L_1803dc99f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803dc99f_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dc99f_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803dc99f_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803dc99f_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803dc99f_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803dc99f_7:;
/* 1803dc9a4: call 0x1803e1b50 */
L_1803dc9a4_0:;
L_1803dc9a4_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc9a4_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc9a9)));
L_1803dc9a4_3:;
return (uint64_t)UINT64_C(0x1803e1b50);
L_1803dc9a4_4:;
return UINT64_C(0x1803dc9a9);
}
uint64_t b_1803dc9a9(CPU*s){
/* 1803dc9a9: mov rcx, qword ptr [rbx + 0x66f0] */
L_1803dc9a9_0:;
L_1803dc9a9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f0))));
L_1803dc9a9_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dc9a9_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dc9a9_4:;
/* 1803dc9b0: movd xmm0, eax */
L_1803dc9b0_0:;
L_1803dc9b0_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803dc9b0_2:;
/* 1803dc9b4: cvtdq2pd xmm0, xmm0 */
L_1803dc9b4_0:;
L_1803dc9b4_1:;
wr(s->u,16,8,rd(s->r,4608,8));
L_1803dc9b4_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,16,4),4),8));
L_1803dc9b4_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,20,4),4),8));
L_1803dc9b4_4:;
/* 1803dc9b8: divsd xmm6, xmm0 */
L_1803dc9b8_0:;
L_1803dc9b8_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)/fv(rd(s->r,4608,8),8),8));
L_1803dc9b8_2:;
/* 1803dc9bc: call 0x1803da8e0 */
L_1803dc9bc_0:;
L_1803dc9bc_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dc9bc_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dc9c1)));
L_1803dc9bc_3:;
return (uint64_t)UINT64_C(0x1803da8e0);
L_1803dc9bc_4:;
return UINT64_C(0x1803dc9c1);
}
uint64_t b_1803dc9c1(CPU*s){
/* 1803dc9c1: xorpd xmm1, xmm1 */
L_1803dc9c1_0:;
L_1803dc9c1_1:;
wr(s->r,4672,8,(rd(s->r,4672,8)^rd(s->r,4672,8)));
L_1803dc9c1_2:;
wr(s->r,4680,8,(rd(s->r,4680,8)^rd(s->r,4680,8)));
L_1803dc9c1_3:;
/* 1803dc9c5: movd xmm0, eax */
L_1803dc9c5_0:;
L_1803dc9c5_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803dc9c5_2:;
/* 1803dc9c9: movabs rax, 0x8000000000000000 */
L_1803dc9c9_0:;
L_1803dc9c9_1:;
wr(s->r,0,8,((U)UINT64_C(0x8000000000000000)));
L_1803dc9c9_2:;
/* 1803dc9d3: cvtdq2pd xmm0, xmm0 */
L_1803dc9d3_0:;
L_1803dc9d3_1:;
wr(s->u,26,8,rd(s->r,4608,8));
L_1803dc9d3_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,26,4),4),8));
L_1803dc9d3_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,30,4),4),8));
L_1803dc9d3_4:;
/* 1803dc9d7: mulsd xmm0, xmm6 */
L_1803dc9d7_0:;
L_1803dc9d7_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4992,8),8),8));
L_1803dc9d7_2:;
/* 1803dc9db: addsd xmm0, qword ptr [rip + 0x2736dd] */
L_1803dc9db_0:;
L_1803dc9db_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(mr(UINT64_C(0x1806500c0),8),8),8));
L_1803dc9db_2:;
/* 1803dc9e3: cvttsd2si rcx, xmm0 */
L_1803dc9e3_0:;
L_1803dc9e3_1:;
wr(s->r,8,8,ftrunc(fv(rd(s->r,4608,8),8),8));
L_1803dc9e3_2:;
/* 1803dc9e8: cmp rcx, rax */
L_1803dc9e8_0:;
L_1803dc9e8_1:;
wr(s->u,10,8,rd(s->r,0,8));
L_1803dc9e8_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,10,8)));
L_1803dc9e8_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,10,8),8,1));
L_1803dc9e8_4:;
wr(s->u,18,8,(rd(s->r,8,8)-rd(s->u,10,8)));
L_1803dc9e8_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dc9e8_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803dc9e8_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803dc9e8_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803dc9e8_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dc9e8_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dc9e8_11:;
/* 1803dc9eb: je 0x1803dca17 */
L_1803dc9eb_0:;
L_1803dc9eb_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dca17);}
L_1803dc9eb_2:;
return UINT64_C(0x1803dc9ed);
}
uint64_t b_1803dc9ed(CPU*s){
/* 1803dc9ed: pxor xmm1, xmm1 */
L_1803dc9ed_0:;
L_1803dc9ed_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803dc9ed_2:;
/* 1803dc9f1: cvtsi2sd xmm1, rcx */
L_1803dc9f1_0:;
L_1803dc9f1_1:;
wr(s->r,4672,8,fb((double)sx(rd(s->r,8,8),8),8));
L_1803dc9f1_2:;
/* 1803dc9f6: ucomisd xmm1, xmm0 */
L_1803dc9f6_0:;
L_1803dc9f6_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4672,8),8)));
L_1803dc9f6_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803dc9f6_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803dc9f6_4:;
wr(s->u,2,1,(fv(rd(s->r,4672,8),8)==fv(rd(s->r,4608,8),8)));
L_1803dc9f6_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803dc9f6_6:;
wr(s->u,3,1,(fv(rd(s->r,4672,8),8)<fv(rd(s->r,4608,8),8)));
L_1803dc9f6_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dc9f6_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dc9f6_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dc9f6_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dc9f6_11:;
/* 1803dc9fa: je 0x1803dca17 */
L_1803dc9fa_0:;
L_1803dc9fa_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dca17);}
L_1803dc9fa_2:;
return UINT64_C(0x1803dc9fc);
}
uint64_t b_1803dc9fc(CPU*s){
/* 1803dc9fc: unpcklpd xmm0, xmm0 */
L_1803dc9fc_0:;
L_1803dc9fc_1:;
wr(s->r,4616,8,rd(s->r,4608,8));
L_1803dc9fc_2:;
/* 1803dca00: movmskpd eax, xmm0 */
L_1803dca00_0:;
L_1803dca00_1:;
wr(s->r,0,4,(((rd(s->r,4608,16)>>63)&1)<<0)|(((rd(s->r,4608,16)>>127)&1)<<1));
L_1803dca00_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dca00_3:;
/* 1803dca05: pxor xmm0, xmm0 */
L_1803dca05_0:;
L_1803dca05_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803dca05_2:;
/* 1803dca09: and eax, 1 */
L_1803dca09_0:;
L_1803dca09_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dca09_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dca09_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dca09_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dca09_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dca09_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dca09_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dca09_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803dca09_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dca09_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dca09_11:;
/* 1803dca0c: xor eax, 1 */
L_1803dca0c_0:;
L_1803dca0c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dca0c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dca0c_3:;
wr(s->r,0,4,(rd(s->r,0,4)^((U)UINT64_C(0x1))));
L_1803dca0c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dca0c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dca0c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dca0c_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dca0c_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803dca0c_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dca0c_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dca0c_11:;
/* 1803dca0f: add rcx, rax */
L_1803dca0f_0:;
L_1803dca0f_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803dca0f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,0,8),8,0));
L_1803dca0f_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,0,8)));
L_1803dca0f_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dca0f_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803dca0f_6:;
wr(s->u,24,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803dca0f_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803dca0f_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dca0f_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dca0f_10:;
/* 1803dca12: cvtsi2sd xmm0, rcx */
L_1803dca12_0:;
L_1803dca12_1:;
wr(s->r,4608,8,fb((double)sx(rd(s->r,8,8),8),8));
L_1803dca12_2:;
/* 1803dca17: cvttsd2si eax, xmm0 */
L_1803dca17_0:;
L_1803dca17_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,8),8),4));
L_1803dca17_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dca17_3:;
/* 1803dca1b: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803dca1b_0:;
L_1803dca1b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dca1b_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dca1b_3:;
wr(s->u,42,16,rd(s->u,8,16));
L_1803dca1b_4:;
wr(s->r,4992,4,rd(s->u,42,4));
L_1803dca1b_5:;
wr(s->r,4996,4,rd(s->u,46,4));
L_1803dca1b_6:;
wr(s->r,5000,4,rd(s->u,50,4));
L_1803dca1b_7:;
wr(s->r,5004,4,rd(s->u,54,4));
L_1803dca1b_8:;
/* 1803dca20: add rsp, 0x30 */
L_1803dca20_0:;
L_1803dca20_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dca20_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803dca20_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803dca20_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dca20_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dca20_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dca20_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803dca20_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dca20_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dca20_10:;
/* 1803dca24: pop rbx */
L_1803dca24_0:;
L_1803dca24_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803dca24_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dca24_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dca24_4:;
wr(s->r,24,8,rd(s->u,34,8));
L_1803dca24_5:;
/* 1803dca25: ret  */
L_1803dca25_0:;
L_1803dca25_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dca25_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dca25_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dca25_4:;
return UINT64_C(0x1803dca26);
}
uint64_t b_1803dca17(CPU*s){
/* 1803dca17: cvttsd2si eax, xmm0 */
L_1803dca17_0:;
L_1803dca17_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,8),8),4));
L_1803dca17_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dca17_3:;
/* 1803dca1b: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803dca1b_0:;
L_1803dca1b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dca1b_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dca1b_3:;
wr(s->u,42,16,rd(s->u,8,16));
L_1803dca1b_4:;
wr(s->r,4992,4,rd(s->u,42,4));
L_1803dca1b_5:;
wr(s->r,4996,4,rd(s->u,46,4));
L_1803dca1b_6:;
wr(s->r,5000,4,rd(s->u,50,4));
L_1803dca1b_7:;
wr(s->r,5004,4,rd(s->u,54,4));
L_1803dca1b_8:;
/* 1803dca20: add rsp, 0x30 */
L_1803dca20_0:;
L_1803dca20_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dca20_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803dca20_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803dca20_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dca20_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dca20_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dca20_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803dca20_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dca20_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dca20_10:;
/* 1803dca24: pop rbx */
L_1803dca24_0:;
L_1803dca24_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803dca24_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dca24_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dca24_4:;
wr(s->r,24,8,rd(s->u,34,8));
L_1803dca24_5:;
/* 1803dca25: ret  */
L_1803dca25_0:;
L_1803dca25_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dca25_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dca25_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dca25_4:;
return UINT64_C(0x1803dca26);
}
uint64_t b_1803dca30(CPU*s){
/* 1803dca30: mov edx, dword ptr [rcx + 0x3c] */
L_1803dca30_0:;
L_1803dca30_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x3c))));
L_1803dca30_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dca30_3:;
wr(s->r,16,4,rd(s->u,28,4));
L_1803dca30_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dca30_5:;
/* 1803dca33: mov eax, edx */
L_1803dca33_0:;
L_1803dca33_1:;
wr(s->r,0,4,rd(s->r,16,4));
L_1803dca33_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dca33_3:;
/* 1803dca35: sar eax, 1 */
L_1803dca35_0:;
L_1803dca35_1:;
wr(s->u,46,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dca35_2:;
wr(s->r,512,1,(rd(s->u,46,4)!=((U)UINT64_C(0x0))));
L_1803dca35_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dca35_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dca35_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dca35_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dca35_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dca35_8:;
wr(s->u,35,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dca35_9:;
wr(s->u,39,1,pop(rd(s->u,35,4),4));
L_1803dca35_10:;
wr(s->u,40,1,(rd(s->u,39,1)&((U)UINT64_C(0x1))));
L_1803dca35_11:;
wr(s->r,514,1,(rd(s->u,40,1)==((U)UINT64_C(0x0))));
L_1803dca35_12:;
/* 1803dca37: lea r8d, [rax + rdx*4] */
L_1803dca37_0:;
L_1803dca37_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803dca37_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803dca37_3:;
wr(s->r,128,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dca37_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dca37_5:;
/* 1803dca3b: xor eax, eax */
L_1803dca3b_0:;
L_1803dca3b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dca3b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dca3b_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dca3b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dca3b_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dca3b_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dca3b_7:;
wr(s->u,35,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dca3b_8:;
wr(s->u,39,1,pop(rd(s->u,35,4),4));
L_1803dca3b_9:;
wr(s->u,40,1,(rd(s->u,39,1)&((U)UINT64_C(0x1))));
L_1803dca3b_10:;
wr(s->r,514,1,(rd(s->u,40,1)==((U)UINT64_C(0x0))));
L_1803dca3b_11:;
/* 1803dca3d: test r8d, r8d */
L_1803dca3d_0:;
L_1803dca3d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dca3d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dca3d_3:;
wr(s->u,50,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803dca3d_4:;
wr(s->r,519,1,(sx(rd(s->u,50,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dca3d_5:;
wr(s->r,518,1,(rd(s->u,50,4)==((U)UINT64_C(0x0))));
L_1803dca3d_6:;
wr(s->u,35,4,(rd(s->u,50,4)&((U)UINT64_C(0xff))));
L_1803dca3d_7:;
wr(s->u,39,1,pop(rd(s->u,35,4),4));
L_1803dca3d_8:;
wr(s->u,40,1,(rd(s->u,39,1)&((U)UINT64_C(0x1))));
L_1803dca3d_9:;
wr(s->r,514,1,(rd(s->u,40,1)==((U)UINT64_C(0x0))));
L_1803dca3d_10:;
/* 1803dca40: cmovg eax, r8d */
L_1803dca40_0:;
L_1803dca40_1:;
wr(s->u,32,1,(!rd(s->r,518,1)));
L_1803dca40_2:;
wr(s->u,33,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dca40_3:;
wr(s->u,34,1,((rd(s->u,32,1)!=0)&&(rd(s->u,33,1)!=0)));
L_1803dca40_4:;
wr(s->u,41,4,rd(s->r,128,4));
L_1803dca40_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dca40_6:;
wr(s->u,45,1,(!rd(s->u,34,1)));
L_1803dca40_7:;
if(rd(s->u,45,1)){goto L_1803dca44_0;}
L_1803dca40_8:;
wr(s->r,0,4,rd(s->u,41,4));
L_1803dca40_9:;
/* 1803dca44: mov dword ptr [rcx + 0x70], eax */
L_1803dca44_0:;
L_1803dca44_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x70))));
L_1803dca44_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803dca44_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dca44_4:;
/* 1803dca47: ret  */
L_1803dca47_0:;
L_1803dca47_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dca47_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dca47_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dca47_4:;
return UINT64_C(0x1803dca48);
}
uint64_t b_1803dca44(CPU*s){
/* 1803dca44: mov dword ptr [rcx + 0x70], eax */
L_1803dca44_0:;
L_1803dca44_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x70))));
L_1803dca44_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803dca44_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dca44_4:;
/* 1803dca47: ret  */
L_1803dca47_0:;
L_1803dca47_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dca47_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dca47_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dca47_4:;
return UINT64_C(0x1803dca48);
}
uint64_t b_1803dca50(CPU*s){
/* 1803dca50: mov qword ptr [rsp + 0x10], rbx */
L_1803dca50_0:;
L_1803dca50_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803dca50_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803dca50_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dca50_4:;
/* 1803dca55: mov qword ptr [rsp + 0x18], rsi */
L_1803dca55_0:;
L_1803dca55_1:;
wr(s->u,8,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803dca55_2:;
wr(s->u,16,8,rd(s->r,48,8));
L_1803dca55_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dca55_4:;
/* 1803dca5a: push rdi */
L_1803dca5a_0:;
L_1803dca5a_1:;
wr(s->u,44,8,rd(s->r,56,8));
L_1803dca5a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dca5a_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,44,8));
L_1803dca5a_4:;
/* 1803dca5b: sub rsp, 0x40 */
L_1803dca5b_0:;
L_1803dca5b_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x40))));
L_1803dca5b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,1));
L_1803dca5b_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x40))));
L_1803dca5b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dca5b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dca5b_6:;
wr(s->u,52,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dca5b_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803dca5b_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803dca5b_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803dca5b_10:;
/* 1803dca5f: cmp dword ptr [rcx + 0xc0], 0 */
L_1803dca5f_0:;
L_1803dca5f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc0))));
L_1803dca5f_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dca5f_3:;
wr(s->u,62,4,rd(s->u,40,4));
L_1803dca5f_4:;
wr(s->r,512,1,(rd(s->u,62,4)<((U)UINT64_C(0x0))));
L_1803dca5f_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,62,4),((U)UINT64_C(0x0)),4,1));
L_1803dca5f_6:;
wr(s->u,66,4,(rd(s->u,62,4)-((U)UINT64_C(0x0))));
L_1803dca5f_7:;
wr(s->r,519,1,(sx(rd(s->u,66,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dca5f_8:;
wr(s->r,518,1,(rd(s->u,66,4)==((U)UINT64_C(0x0))));
L_1803dca5f_9:;
wr(s->u,52,4,(rd(s->u,66,4)&((U)UINT64_C(0xff))));
L_1803dca5f_10:;
wr(s->u,60,1,pop(rd(s->u,52,4),4));
L_1803dca5f_11:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803dca5f_12:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803dca5f_13:;
/* 1803dca66: movaps xmmword ptr [rsp + 0x30], xmm6 */
L_1803dca66_0:;
L_1803dca66_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dca66_2:;
wr(s->u,24,16,rd(s->r,4992,16));
L_1803dca66_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,24,16));
L_1803dca66_4:;
/* 1803dca6b: movzx esi, r9b */
L_1803dca6b_0:;
L_1803dca6b_1:;
wr(s->r,48,4,rd(s->r,136,1));
L_1803dca6b_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803dca6b_3:;
/* 1803dca6f: movaps xmm6, xmm2 */
L_1803dca6f_0:;
L_1803dca6f_1:;
wr(s->r,4992,4,rd(s->r,4736,4));
L_1803dca6f_2:;
wr(s->r,4996,4,rd(s->r,4740,4));
L_1803dca6f_3:;
wr(s->r,5000,4,rd(s->r,4744,4));
L_1803dca6f_4:;
wr(s->r,5004,4,rd(s->r,4748,4));
L_1803dca6f_5:;
/* 1803dca72: mov rdi, rdx */
L_1803dca72_0:;
L_1803dca72_1:;
wr(s->r,56,8,rd(s->r,16,8));
L_1803dca72_2:;
/* 1803dca75: mov rbx, rcx */
L_1803dca75_0:;
L_1803dca75_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803dca75_2:;
/* 1803dca78: je 0x1803dca84 */
L_1803dca78_0:;
L_1803dca78_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dca84);}
L_1803dca78_2:;
return UINT64_C(0x1803dca7a);
}
uint64_t b_1803dca7a(CPU*s){
/* 1803dca7a: mov eax, 0x4c4b41 */
L_1803dca7a_0:;
L_1803dca7a_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b41)));
L_1803dca7a_2:;
/* 1803dca7f: jmp 0x1803dcc1e */
L_1803dca7f_0:;
L_1803dca7f_1:;
return UINT64_C(0x1803dcc1e);
L_1803dca7f_2:;
return UINT64_C(0x1803dca84);
}
uint64_t b_1803dca84(CPU*s){
/* 1803dca84: mov rcx, qword ptr [rcx + 0x66f0] */
L_1803dca84_0:;
L_1803dca84_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x66f0))));
L_1803dca84_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dca84_3:;
wr(s->r,8,8,rd(s->u,44,8));
L_1803dca84_4:;
/* 1803dca8b: movaps xmm0, xmm2 */
L_1803dca8b_0:;
L_1803dca8b_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803dca8b_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803dca8b_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803dca8b_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803dca8b_5:;
/* 1803dca8e: movaps xmmword ptr [rsp + 0x20], xmm7 */
L_1803dca8e_0:;
L_1803dca8e_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dca8e_2:;
wr(s->u,28,16,rd(s->r,5056,16));
L_1803dca8e_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,28,16));
L_1803dca8e_4:;
/* 1803dca93: movss xmm7, dword ptr [rip + 0x2701a9] */
L_1803dca93_0:;
L_1803dca93_1:;
wr(s->r,5056,4,mr(UINT64_C(0x18064cc44),4));
L_1803dca93_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803dca93_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803dca93_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803dca93_5:;
/* 1803dca9b: xor r9d, r9d */
L_1803dca9b_0:;
L_1803dca9b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dca9b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dca9b_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803dca9b_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dca9b_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dca9b_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dca9b_7:;
wr(s->u,52,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dca9b_8:;
wr(s->u,56,1,pop(rd(s->u,52,4),4));
L_1803dca9b_9:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803dca9b_10:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803dca9b_11:;
/* 1803dca9e: mulss xmm0, dword ptr [rdx] */
L_1803dca9e_0:;
L_1803dca9e_1:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803dca9e_2:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,24,4),4),4));
L_1803dca9e_3:;
/* 1803dcaa2: lea rdx, [rsp + 0x50] */
L_1803dcaa2_0:;
L_1803dcaa2_1:;
wr(s->u,16,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dcaa2_2:;
wr(s->r,16,8,rd(s->u,16,8));
L_1803dcaa2_3:;
/* 1803dcaa7: movaps xmm2, xmm7 */
L_1803dcaa7_0:;
L_1803dcaa7_1:;
wr(s->r,4736,4,rd(s->r,5056,4));
L_1803dcaa7_2:;
wr(s->r,4740,4,rd(s->r,5060,4));
L_1803dcaa7_3:;
wr(s->r,4744,4,rd(s->r,5064,4));
L_1803dcaa7_4:;
wr(s->r,4748,4,rd(s->r,5068,4));
L_1803dcaa7_5:;
/* 1803dcaaa: movss dword ptr [rsp + 0x50], xmm0 */
L_1803dcaaa_0:;
L_1803dcaaa_1:;
wr(s->u,16,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dcaaa_2:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803dcaaa_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dcaaa_4:;
/* 1803dcab0: mov rax, qword ptr [rcx] */
L_1803dcab0_0:;
L_1803dcab0_1:;
wr(s->u,44,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dcab0_2:;
wr(s->r,0,8,rd(s->u,44,8));
L_1803dcab0_3:;
/* 1803dcab3: call qword ptr [rax + 0x28] */
L_1803dcab3_0:;
L_1803dcab3_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x28))));
L_1803dcab3_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcab3_3:;
wr(s->u,58,8,rd(s->u,44,8));
L_1803dcab3_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcab3_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dcab6)));
L_1803dcab3_6:;
return (uint64_t)rd(s->u,58,8);
L_1803dcab3_7:;
return UINT64_C(0x1803dcab6);
}
uint64_t b_1803dca8e(CPU*s){
/* 1803dca8e: movaps xmmword ptr [rsp + 0x20], xmm7 */
L_1803dca8e_0:;
L_1803dca8e_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dca8e_2:;
wr(s->u,20,16,rd(s->r,5056,16));
L_1803dca8e_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803dca8e_4:;
/* 1803dca93: movss xmm7, dword ptr [rip + 0x2701a9] */
L_1803dca93_0:;
L_1803dca93_1:;
wr(s->r,5056,4,mr(UINT64_C(0x18064cc44),4));
L_1803dca93_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803dca93_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803dca93_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803dca93_5:;
/* 1803dca9b: xor r9d, r9d */
L_1803dca9b_0:;
L_1803dca9b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dca9b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dca9b_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803dca9b_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dca9b_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dca9b_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dca9b_7:;
wr(s->u,44,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dca9b_8:;
wr(s->u,48,1,pop(rd(s->u,44,4),4));
L_1803dca9b_9:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dca9b_10:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dca9b_11:;
/* 1803dca9e: mulss xmm0, dword ptr [rdx] */
L_1803dca9e_0:;
L_1803dca9e_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803dca9e_2:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803dca9e_3:;
/* 1803dcaa2: lea rdx, [rsp + 0x50] */
L_1803dcaa2_0:;
L_1803dcaa2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dcaa2_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803dcaa2_3:;
/* 1803dcaa7: movaps xmm2, xmm7 */
L_1803dcaa7_0:;
L_1803dcaa7_1:;
wr(s->r,4736,4,rd(s->r,5056,4));
L_1803dcaa7_2:;
wr(s->r,4740,4,rd(s->r,5060,4));
L_1803dcaa7_3:;
wr(s->r,4744,4,rd(s->r,5064,4));
L_1803dcaa7_4:;
wr(s->r,4748,4,rd(s->r,5068,4));
L_1803dcaa7_5:;
/* 1803dcaaa: movss dword ptr [rsp + 0x50], xmm0 */
L_1803dcaaa_0:;
L_1803dcaaa_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dcaaa_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803dcaaa_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dcaaa_4:;
/* 1803dcab0: mov rax, qword ptr [rcx] */
L_1803dcab0_0:;
L_1803dcab0_1:;
wr(s->u,36,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dcab0_2:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803dcab0_3:;
/* 1803dcab3: call qword ptr [rax + 0x28] */
L_1803dcab3_0:;
L_1803dcab3_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x28))));
L_1803dcab3_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcab3_3:;
wr(s->u,50,8,rd(s->u,36,8));
L_1803dcab3_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcab3_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dcab6)));
L_1803dcab3_6:;
return (uint64_t)rd(s->u,50,8);
L_1803dcab3_7:;
return UINT64_C(0x1803dcab6);
}
uint64_t b_1803dcab6(CPU*s){
/* 1803dcab6: test eax, eax */
L_1803dcab6_0:;
L_1803dcab6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dcab6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcab6_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803dcab6_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dcab6_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803dcab6_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803dcab6_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803dcab6_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803dcab6_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803dcab6_10:;
/* 1803dcab8: jne 0x1803dcc19 */
L_1803dcab8_0:;
L_1803dcab8_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803dcab8_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dcc19);}
L_1803dcab8_3:;
return UINT64_C(0x1803dcabe);
}
uint64_t b_1803dcabe(CPU*s){
/* 1803dcabe: movss xmm0, dword ptr [rsp + 0x50] */
L_1803dcabe_0:;
L_1803dcabe_1:;
wr(s->u,16,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dcabe_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803dcabe_3:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803dcabe_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dcabe_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dcabe_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dcabe_7:;
/* 1803dcac4: movss dword ptr [rbx + 0x24], xmm6 */
L_1803dcac4_0:;
L_1803dcac4_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803dcac4_2:;
wr(s->u,24,4,rd(s->r,4992,4));
L_1803dcac4_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dcac4_4:;
/* 1803dcac9: movss dword ptr [rbx + 0x18], xmm0 */
L_1803dcac9_0:;
L_1803dcac9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803dcac9_2:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803dcac9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dcac9_4:;
/* 1803dcace: divss xmm0, xmm6 */
L_1803dcace_0:;
L_1803dcace_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4992,4),4),4));
L_1803dcace_2:;
/* 1803dcad2: movss dword ptr [rdi], xmm0 */
L_1803dcad2_0:;
L_1803dcad2_1:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803dcad2_2:;
mw((uint64_t)rd(s->r,56,8),4,rd(s->u,24,4));
L_1803dcad2_3:;
/* 1803dcad6: mov rcx, qword ptr [rbx + 0x66f0] */
L_1803dcad6_0:;
L_1803dcad6_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f0))));
L_1803dcad6_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dcad6_3:;
wr(s->r,8,8,rd(s->u,28,8));
L_1803dcad6_4:;
/* 1803dcadd: call 0x1803da8c0 */
L_1803dcadd_0:;
L_1803dcadd_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcadd_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dcae2)));
L_1803dcadd_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dcadd_4:;
return UINT64_C(0x1803dcae2);
}
uint64_t b_1803dcae2(CPU*s){
/* 1803dcae2: sar eax, 1 */
L_1803dcae2_0:;
L_1803dcae2_1:;
wr(s->u,18,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dcae2_2:;
wr(s->r,512,1,(rd(s->u,18,4)!=((U)UINT64_C(0x0))));
L_1803dcae2_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcae2_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dcae2_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dcae2_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dcae2_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dcae2_8:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dcae2_9:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803dcae2_10:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803dcae2_11:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803dcae2_12:;
/* 1803dcae4: mov dword ptr [rbx + 0x58], eax */
L_1803dcae4_0:;
L_1803dcae4_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x58))));
L_1803dcae4_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803dcae4_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dcae4_4:;
/* 1803dcae7: test sil, sil */
L_1803dcae7_0:;
L_1803dcae7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dcae7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcae7_3:;
wr(s->u,22,1,(rd(s->r,48,1)&rd(s->r,48,1)));
L_1803dcae7_4:;
wr(s->r,519,1,(sx(rd(s->u,22,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803dcae7_5:;
wr(s->r,518,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dcae7_6:;
wr(s->u,12,1,(rd(s->u,22,1)&((U)UINT64_C(0xff))));
L_1803dcae7_7:;
wr(s->u,16,1,pop(rd(s->u,12,1),1));
L_1803dcae7_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803dcae7_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803dcae7_10:;
/* 1803dcaea: je 0x1803dcb2e */
L_1803dcaea_0:;
L_1803dcaea_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dcb2e);}
L_1803dcaea_2:;
return UINT64_C(0x1803dcaec);
}
uint64_t b_1803dcaec(CPU*s){
/* 1803dcaec: cmp dword ptr [rbx + 0xc4], 0 */
L_1803dcaec_0:;
L_1803dcaec_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc4))));
L_1803dcaec_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcaec_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803dcaec_4:;
wr(s->r,512,1,(rd(s->u,19,4)<((U)UINT64_C(0x0))));
L_1803dcaec_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),((U)UINT64_C(0x0)),4,1));
L_1803dcaec_6:;
wr(s->u,23,4,(rd(s->u,19,4)-((U)UINT64_C(0x0))));
L_1803dcaec_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dcaec_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803dcaec_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803dcaec_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dcaec_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dcaec_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dcaec_13:;
/* 1803dcaf3: jne 0x1803dcb2e */
L_1803dcaf3_0:;
L_1803dcaf3_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803dcaf3_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dcb2e);}
L_1803dcaf3_3:;
return UINT64_C(0x1803dcaf5);
}
uint64_t b_1803dcaf5(CPU*s){
/* 1803dcaf5: mov eax, dword ptr [rbx + 0x3c] */
L_1803dcaf5_0:;
L_1803dcaf5_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803dcaf5_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcaf5_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803dcaf5_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dcaf5_5:;
/* 1803dcaf8: movaps xmm0, xmm7 */
L_1803dcaf8_0:;
L_1803dcaf8_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803dcaf8_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803dcaf8_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803dcaf8_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803dcaf8_5:;
/* 1803dcafb: add eax, eax */
L_1803dcafb_0:;
L_1803dcafb_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803dcafb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,0,4),4,0));
L_1803dcafb_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,0,4)));
L_1803dcafb_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dcafb_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dcafb_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dcafb_7:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dcafb_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803dcafb_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803dcafb_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803dcafb_11:;
/* 1803dcafd: divss xmm0, dword ptr [rbx + 0x24] */
L_1803dcafd_0:;
L_1803dcafd_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803dcafd_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcafd_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->u,16,4),4),4));
L_1803dcafd_4:;
/* 1803dcb02: movd xmm2, eax */
L_1803dcb02_0:;
L_1803dcb02_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803dcb02_2:;
/* 1803dcb06: cvtdq2pd xmm2, xmm2 */
L_1803dcb06_0:;
L_1803dcb06_1:;
wr(s->u,38,8,rd(s->r,4736,8));
L_1803dcb06_2:;
wr(s->r,4736,8,fb((double)sx(rd(s->u,38,4),4),8));
L_1803dcb06_3:;
wr(s->r,4744,8,fb((double)sx(rd(s->u,42,4),4),8));
L_1803dcb06_4:;
/* 1803dcb0a: unpcklps xmm0, xmm0 */
L_1803dcb0a_0:;
L_1803dcb0a_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803dcb0a_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803dcb0a_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803dcb0a_4:;
/* 1803dcb0d: cvtps2pd xmm1, xmm0 */
L_1803dcb0d_0:;
L_1803dcb0d_1:;
wr(s->u,46,8,rd(s->r,4608,8));
L_1803dcb0d_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,46,4),4),8));
L_1803dcb0d_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,50,4),4),8));
L_1803dcb0d_4:;
/* 1803dcb10: movsd xmm0, qword ptr [rbx + 0x98] */
L_1803dcb10_0:;
L_1803dcb10_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x98))));
L_1803dcb10_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dcb10_3:;
wr(s->r,4608,8,rd(s->u,20,8));
L_1803dcb10_4:;
wr(s->r,4616,8,((U)UINT64_C(0x0)));
L_1803dcb10_5:;
/* 1803dcb18: mulsd xmm1, xmm2 */
L_1803dcb18_0:;
L_1803dcb18_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,4736,8),8),8));
L_1803dcb18_2:;
/* 1803dcb1c: subsd xmm1, xmm2 */
L_1803dcb1c_0:;
L_1803dcb1c_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)-fv(rd(s->r,4736,8),8),8));
L_1803dcb1c_2:;
/* 1803dcb20: subsd xmm0, xmm1 */
L_1803dcb20_0:;
L_1803dcb20_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)-fv(rd(s->r,4672,8),8),8));
L_1803dcb20_2:;
/* 1803dcb24: movsd qword ptr [rbx + 0xa8], xmm0 */
L_1803dcb24_0:;
L_1803dcb24_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xa8))));
L_1803dcb24_2:;
wr(s->u,20,8,rd(s->r,4608,8));
L_1803dcb24_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dcb24_4:;
/* 1803dcb2c: jmp 0x1803dcb3c */
L_1803dcb2c_0:;
L_1803dcb2c_1:;
return UINT64_C(0x1803dcb3c);
L_1803dcb2c_2:;
return UINT64_C(0x1803dcb2e);
}
uint64_t b_1803dcb2e(CPU*s){
/* 1803dcb2e: mov rax, qword ptr [rbx + 0x98] */
L_1803dcb2e_0:;
L_1803dcb2e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x98))));
L_1803dcb2e_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcb2e_3:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dcb2e_4:;
/* 1803dcb35: mov qword ptr [rbx + 0xa8], rax */
L_1803dcb35_0:;
L_1803dcb35_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xa8))));
L_1803dcb35_2:;
wr(s->u,12,8,rd(s->r,0,8));
L_1803dcb35_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803dcb35_4:;
/* 1803dcb3c: movss xmm6, dword ptr [rdi] */
L_1803dcb3c_0:;
L_1803dcb3c_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,56,8),4));
L_1803dcb3c_2:;
wr(s->r,4992,4,rd(s->u,8,4));
L_1803dcb3c_3:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803dcb3c_4:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803dcb3c_5:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803dcb3c_6:;
/* 1803dcb40: movss xmm0, dword ptr [rip + 0x282f54] */
L_1803dcb40_0:;
L_1803dcb40_1:;
wr(s->r,4608,4,mr(UINT64_C(0x18065fa9c),4));
L_1803dcb40_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dcb40_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dcb40_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dcb40_5:;
/* 1803dcb48: comiss xmm6, xmm0 */
L_1803dcb48_0:;
L_1803dcb48_1:;
wr(s->u,29,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803dcb48_2:;
wr(s->u,30,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dcb48_3:;
wr(s->r,514,1,((rd(s->u,29,1)!=0)||(rd(s->u,30,1)!=0)));
L_1803dcb48_4:;
wr(s->u,31,1,(fv(rd(s->r,4992,4),4)==fv(rd(s->r,4608,4),4)));
L_1803dcb48_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,31,1)));
L_1803dcb48_6:;
wr(s->u,32,1,(fv(rd(s->r,4992,4),4)<fv(rd(s->r,4608,4),4)));
L_1803dcb48_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,32,1)));
L_1803dcb48_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcb48_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dcb48_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dcb48_11:;
/* 1803dcb4b: jbe 0x1803dcbb1 */
L_1803dcb4b_0:;
L_1803dcb4b_1:;
wr(s->u,28,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803dcb4b_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803dcbb1);}
L_1803dcb4b_3:;
return UINT64_C(0x1803dcb4d);
}
uint64_t b_1803dcb3c(CPU*s){
/* 1803dcb3c: movss xmm6, dword ptr [rdi] */
L_1803dcb3c_0:;
L_1803dcb3c_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,56,8),4));
L_1803dcb3c_2:;
wr(s->r,4992,4,rd(s->u,0,4));
L_1803dcb3c_3:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803dcb3c_4:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803dcb3c_5:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803dcb3c_6:;
/* 1803dcb40: movss xmm0, dword ptr [rip + 0x282f54] */
L_1803dcb40_0:;
L_1803dcb40_1:;
wr(s->r,4608,4,mr(UINT64_C(0x18065fa9c),4));
L_1803dcb40_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dcb40_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dcb40_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dcb40_5:;
/* 1803dcb48: comiss xmm6, xmm0 */
L_1803dcb48_0:;
L_1803dcb48_1:;
wr(s->u,5,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803dcb48_2:;
wr(s->u,6,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dcb48_3:;
wr(s->r,514,1,((rd(s->u,5,1)!=0)||(rd(s->u,6,1)!=0)));
L_1803dcb48_4:;
wr(s->u,7,1,(fv(rd(s->r,4992,4),4)==fv(rd(s->r,4608,4),4)));
L_1803dcb48_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,7,1)));
L_1803dcb48_6:;
wr(s->u,8,1,(fv(rd(s->r,4992,4),4)<fv(rd(s->r,4608,4),4)));
L_1803dcb48_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,8,1)));
L_1803dcb48_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcb48_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dcb48_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dcb48_11:;
/* 1803dcb4b: jbe 0x1803dcbb1 */
L_1803dcb4b_0:;
L_1803dcb4b_1:;
wr(s->u,4,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803dcb4b_2:;
if(rd(s->u,4,1)){return UINT64_C(0x1803dcbb1);}
L_1803dcb4b_3:;
return UINT64_C(0x1803dcb4d);
}
uint64_t b_1803dcb4d(CPU*s){
/* 1803dcb4d: subss xmm6, xmm0 */
L_1803dcb4d_0:;
L_1803dcb4d_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803dcb4d_2:;
/* 1803dcb51: comiss xmm6, dword ptr [rip + 0x2752e8] */
L_1803dcb51_0:;
L_1803dcb51_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803dcb51_2:;
wr(s->u,2,1,isnan(fv(mr(UINT64_C(0x180651e40),4),4)));
L_1803dcb51_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803dcb51_4:;
wr(s->u,3,1,(fv(rd(s->r,4992,4),4)==fv(mr(UINT64_C(0x180651e40),4),4)));
L_1803dcb51_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dcb51_6:;
wr(s->u,4,1,(fv(rd(s->r,4992,4),4)<fv(mr(UINT64_C(0x180651e40),4),4)));
L_1803dcb51_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803dcb51_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcb51_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dcb51_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dcb51_11:;
/* 1803dcb58: jae 0x1803dcb5f */
L_1803dcb58_0:;
L_1803dcb58_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803dcb58_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dcb5f);}
L_1803dcb58_3:;
return UINT64_C(0x1803dcb5a);
}
uint64_t b_1803dcb5a(CPU*s){
/* 1803dcb5a: movaps xmm6, xmm7 */
L_1803dcb5a_0:;
L_1803dcb5a_1:;
wr(s->r,4992,4,rd(s->r,5056,4));
L_1803dcb5a_2:;
wr(s->r,4996,4,rd(s->r,5060,4));
L_1803dcb5a_3:;
wr(s->r,5000,4,rd(s->r,5064,4));
L_1803dcb5a_4:;
wr(s->r,5004,4,rd(s->r,5068,4));
L_1803dcb5a_5:;
/* 1803dcb5d: jmp 0x1803dcb63 */
L_1803dcb5d_0:;
L_1803dcb5d_1:;
return UINT64_C(0x1803dcb63);
L_1803dcb5d_2:;
return UINT64_C(0x1803dcb5f);
}
uint64_t b_1803dcb5f(CPU*s){
/* 1803dcb5f: addss xmm6, xmm7 */
L_1803dcb5f_0:;
L_1803dcb5f_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803dcb5f_2:;
/* 1803dcb63: movaps xmm0, xmm6 */
L_1803dcb63_0:;
L_1803dcb63_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803dcb63_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803dcb63_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803dcb63_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803dcb63_5:;
/* 1803dcb66: mulss xmm0, xmm6 */
L_1803dcb66_0:;
L_1803dcb66_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803dcb66_2:;
/* 1803dcb6a: mulss xmm6, xmm0 */
L_1803dcb6a_0:;
L_1803dcb6a_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803dcb6a_2:;
/* 1803dcb6e: movss xmm0, dword ptr [rbx + 0x10] */
L_1803dcb6e_0:;
L_1803dcb6e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803dcb6e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcb6e_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803dcb6e_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dcb6e_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dcb6e_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dcb6e_7:;
/* 1803dcb73: mulss xmm6, dword ptr [rip + 0x42fd1d] */
L_1803dcb73_0:;
L_1803dcb73_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(mr(UINT64_C(0x18080c898),4),4),4));
L_1803dcb73_2:;
/* 1803dcb7b: mulss xmm0, dword ptr [rip + 0x2755e1] */
L_1803dcb7b_0:;
L_1803dcb7b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(mr(UINT64_C(0x180652164),4),4),4));
L_1803dcb7b_2:;
/* 1803dcb83: comiss xmm6, xmm0 */
L_1803dcb83_0:;
L_1803dcb83_1:;
wr(s->u,12,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803dcb83_2:;
wr(s->u,13,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dcb83_3:;
wr(s->r,514,1,((rd(s->u,12,1)!=0)||(rd(s->u,13,1)!=0)));
L_1803dcb83_4:;
wr(s->u,14,1,(fv(rd(s->r,4992,4),4)==fv(rd(s->r,4608,4),4)));
L_1803dcb83_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,14,1)));
L_1803dcb83_6:;
wr(s->u,15,1,(fv(rd(s->r,4992,4),4)<fv(rd(s->r,4608,4),4)));
L_1803dcb83_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,15,1)));
L_1803dcb83_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcb83_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dcb83_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dcb83_11:;
/* 1803dcb86: jb 0x1803dcb8b */
L_1803dcb86_0:;
L_1803dcb86_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803dcb8b);}
L_1803dcb86_2:;
return UINT64_C(0x1803dcb88);
}
uint64_t b_1803dcb63(CPU*s){
/* 1803dcb63: movaps xmm0, xmm6 */
L_1803dcb63_0:;
L_1803dcb63_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803dcb63_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803dcb63_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803dcb63_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803dcb63_5:;
/* 1803dcb66: mulss xmm0, xmm6 */
L_1803dcb66_0:;
L_1803dcb66_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803dcb66_2:;
/* 1803dcb6a: mulss xmm6, xmm0 */
L_1803dcb6a_0:;
L_1803dcb6a_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803dcb6a_2:;
/* 1803dcb6e: movss xmm0, dword ptr [rbx + 0x10] */
L_1803dcb6e_0:;
L_1803dcb6e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803dcb6e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcb6e_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803dcb6e_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dcb6e_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dcb6e_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dcb6e_7:;
/* 1803dcb73: mulss xmm6, dword ptr [rip + 0x42fd1d] */
L_1803dcb73_0:;
L_1803dcb73_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(mr(UINT64_C(0x18080c898),4),4),4));
L_1803dcb73_2:;
/* 1803dcb7b: mulss xmm0, dword ptr [rip + 0x2755e1] */
L_1803dcb7b_0:;
L_1803dcb7b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(mr(UINT64_C(0x180652164),4),4),4));
L_1803dcb7b_2:;
/* 1803dcb83: comiss xmm6, xmm0 */
L_1803dcb83_0:;
L_1803dcb83_1:;
wr(s->u,12,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803dcb83_2:;
wr(s->u,13,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dcb83_3:;
wr(s->r,514,1,((rd(s->u,12,1)!=0)||(rd(s->u,13,1)!=0)));
L_1803dcb83_4:;
wr(s->u,14,1,(fv(rd(s->r,4992,4),4)==fv(rd(s->r,4608,4),4)));
L_1803dcb83_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,14,1)));
L_1803dcb83_6:;
wr(s->u,15,1,(fv(rd(s->r,4992,4),4)<fv(rd(s->r,4608,4),4)));
L_1803dcb83_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,15,1)));
L_1803dcb83_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcb83_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dcb83_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dcb83_11:;
/* 1803dcb86: jb 0x1803dcb8b */
L_1803dcb86_0:;
L_1803dcb86_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803dcb8b);}
L_1803dcb86_2:;
return UINT64_C(0x1803dcb88);
}
uint64_t b_1803dcb88(CPU*s){
/* 1803dcb88: movaps xmm6, xmm0 */
L_1803dcb88_0:;
L_1803dcb88_1:;
wr(s->r,4992,4,rd(s->r,4608,4));
L_1803dcb88_2:;
wr(s->r,4996,4,rd(s->r,4612,4));
L_1803dcb88_3:;
wr(s->r,5000,4,rd(s->r,4616,4));
L_1803dcb88_4:;
wr(s->r,5004,4,rd(s->r,4620,4));
L_1803dcb88_5:;
/* 1803dcb8b: mov rcx, qword ptr [rbx + 0x6718] */
L_1803dcb8b_0:;
L_1803dcb8b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6718))));
L_1803dcb8b_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcb8b_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dcb8b_4:;
/* 1803dcb92: test rcx, rcx */
L_1803dcb92_0:;
L_1803dcb92_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dcb92_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcb92_3:;
wr(s->u,26,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803dcb92_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dcb92_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803dcb92_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803dcb92_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dcb92_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dcb92_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dcb92_10:;
/* 1803dcb95: je 0x1803dcb9f */
L_1803dcb95_0:;
L_1803dcb95_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dcb9f);}
L_1803dcb95_2:;
return UINT64_C(0x1803dcb97);
}
uint64_t b_1803dcb8b(CPU*s){
/* 1803dcb8b: mov rcx, qword ptr [rbx + 0x6718] */
L_1803dcb8b_0:;
L_1803dcb8b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6718))));
L_1803dcb8b_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcb8b_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dcb8b_4:;
/* 1803dcb92: test rcx, rcx */
L_1803dcb92_0:;
L_1803dcb92_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dcb92_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcb92_3:;
wr(s->u,26,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803dcb92_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dcb92_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803dcb92_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803dcb92_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dcb92_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dcb92_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dcb92_10:;
/* 1803dcb95: je 0x1803dcb9f */
L_1803dcb95_0:;
L_1803dcb95_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dcb9f);}
L_1803dcb95_2:;
return UINT64_C(0x1803dcb97);
}
uint64_t b_1803dcb97(CPU*s){
/* 1803dcb97: movaps xmm1, xmm6 */
L_1803dcb97_0:;
L_1803dcb97_1:;
wr(s->r,4672,4,rd(s->r,4992,4));
L_1803dcb97_2:;
wr(s->r,4676,4,rd(s->r,4996,4));
L_1803dcb97_3:;
wr(s->r,4680,4,rd(s->r,5000,4));
L_1803dcb97_4:;
wr(s->r,4684,4,rd(s->r,5004,4));
L_1803dcb97_5:;
/* 1803dcb9a: call 0x1803e2060 */
L_1803dcb9a_0:;
L_1803dcb9a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcb9a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dcb9f)));
L_1803dcb9a_3:;
return (uint64_t)UINT64_C(0x1803e2060);
L_1803dcb9a_4:;
return UINT64_C(0x1803dcb9f);
}
uint64_t b_1803dcb9f(CPU*s){
/* 1803dcb9f: mov rcx, qword ptr [rbx + 0x66f0] */
L_1803dcb9f_0:;
L_1803dcb9f_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f0))));
L_1803dcb9f_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dcb9f_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dcb9f_4:;
/* 1803dcba6: movaps xmm1, xmm6 */
L_1803dcba6_0:;
L_1803dcba6_1:;
wr(s->r,4672,4,rd(s->r,4992,4));
L_1803dcba6_2:;
wr(s->r,4676,4,rd(s->r,4996,4));
L_1803dcba6_3:;
wr(s->r,4680,4,rd(s->r,5000,4));
L_1803dcba6_4:;
wr(s->r,4684,4,rd(s->r,5004,4));
L_1803dcba6_5:;
/* 1803dcba9: mov rax, qword ptr [rcx] */
L_1803dcba9_0:;
L_1803dcba9_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dcba9_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dcba9_3:;
/* 1803dcbac: call qword ptr [rax + 0x58] */
L_1803dcbac_0:;
L_1803dcbac_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x58))));
L_1803dcbac_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcbac_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803dcbac_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcbac_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dcbaf)));
L_1803dcbac_6:;
return (uint64_t)rd(s->u,24,8);
L_1803dcbac_7:;
return UINT64_C(0x1803dcbaf);
}
uint64_t b_1803dcbaf(CPU*s){
/* 1803dcbaf: jmp 0x1803dcbdd */
L_1803dcbaf_0:;
L_1803dcbaf_1:;
return UINT64_C(0x1803dcbdd);
L_1803dcbaf_2:;
return UINT64_C(0x1803dcbb1);
}
uint64_t b_1803dcbb1(CPU*s){
/* 1803dcbb1: mov rcx, qword ptr [rbx + 0x6718] */
L_1803dcbb1_0:;
L_1803dcbb1_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6718))));
L_1803dcbb1_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcbb1_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dcbb1_4:;
/* 1803dcbb8: movss xmm6, dword ptr [rip + 0x42fcd8] */
L_1803dcbb8_0:;
L_1803dcbb8_1:;
wr(s->r,4992,4,mr(UINT64_C(0x18080c898),4));
L_1803dcbb8_2:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803dcbb8_3:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803dcbb8_4:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803dcbb8_5:;
/* 1803dcbc0: test rcx, rcx */
L_1803dcbc0_0:;
L_1803dcbc0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dcbc0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcbc0_3:;
wr(s->u,26,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803dcbc0_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dcbc0_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803dcbc0_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803dcbc0_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dcbc0_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dcbc0_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dcbc0_10:;
/* 1803dcbc3: je 0x1803dcbcd */
L_1803dcbc3_0:;
L_1803dcbc3_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dcbcd);}
L_1803dcbc3_2:;
return UINT64_C(0x1803dcbc5);
}
uint64_t b_1803dcbc5(CPU*s){
/* 1803dcbc5: movaps xmm1, xmm6 */
L_1803dcbc5_0:;
L_1803dcbc5_1:;
wr(s->r,4672,4,rd(s->r,4992,4));
L_1803dcbc5_2:;
wr(s->r,4676,4,rd(s->r,4996,4));
L_1803dcbc5_3:;
wr(s->r,4680,4,rd(s->r,5000,4));
L_1803dcbc5_4:;
wr(s->r,4684,4,rd(s->r,5004,4));
L_1803dcbc5_5:;
/* 1803dcbc8: call 0x1803e2060 */
L_1803dcbc8_0:;
L_1803dcbc8_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcbc8_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dcbcd)));
L_1803dcbc8_3:;
return (uint64_t)UINT64_C(0x1803e2060);
L_1803dcbc8_4:;
return UINT64_C(0x1803dcbcd);
}
uint64_t b_1803dcbcd(CPU*s){
/* 1803dcbcd: mov rcx, qword ptr [rbx + 0x66f0] */
L_1803dcbcd_0:;
L_1803dcbcd_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f0))));
L_1803dcbcd_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dcbcd_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dcbcd_4:;
/* 1803dcbd4: movaps xmm1, xmm6 */
L_1803dcbd4_0:;
L_1803dcbd4_1:;
wr(s->r,4672,4,rd(s->r,4992,4));
L_1803dcbd4_2:;
wr(s->r,4676,4,rd(s->r,4996,4));
L_1803dcbd4_3:;
wr(s->r,4680,4,rd(s->r,5000,4));
L_1803dcbd4_4:;
wr(s->r,4684,4,rd(s->r,5004,4));
L_1803dcbd4_5:;
/* 1803dcbd7: mov rax, qword ptr [rcx] */
L_1803dcbd7_0:;
L_1803dcbd7_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dcbd7_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dcbd7_3:;
/* 1803dcbda: call qword ptr [rax + 0x58] */
L_1803dcbda_0:;
L_1803dcbda_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x58))));
L_1803dcbda_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcbda_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803dcbda_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcbda_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dcbdd)));
L_1803dcbda_6:;
return (uint64_t)rd(s->u,24,8);
L_1803dcbda_7:;
return UINT64_C(0x1803dcbdd);
}
uint64_t b_1803dcbdd(CPU*s){
/* 1803dcbdd: cmp dword ptr [rbx + 0xc4], 0 */
L_1803dcbdd_0:;
L_1803dcbdd_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc4))));
L_1803dcbdd_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcbdd_3:;
wr(s->u,18,4,rd(s->u,8,4));
L_1803dcbdd_4:;
wr(s->r,512,1,(rd(s->u,18,4)<((U)UINT64_C(0x0))));
L_1803dcbdd_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),((U)UINT64_C(0x0)),4,1));
L_1803dcbdd_6:;
wr(s->u,22,4,(rd(s->u,18,4)-((U)UINT64_C(0x0))));
L_1803dcbdd_7:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dcbdd_8:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803dcbdd_9:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803dcbdd_10:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803dcbdd_11:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803dcbdd_12:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803dcbdd_13:;
/* 1803dcbe4: je 0x1803dcc17 */
L_1803dcbe4_0:;
L_1803dcbe4_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dcc17);}
L_1803dcbe4_2:;
return UINT64_C(0x1803dcbe6);
}
uint64_t b_1803dcbe6(CPU*s){
/* 1803dcbe6: movaps xmm6, xmm7 */
L_1803dcbe6_0:;
L_1803dcbe6_1:;
wr(s->r,4992,4,rd(s->r,5056,4));
L_1803dcbe6_2:;
wr(s->r,4996,4,rd(s->r,5060,4));
L_1803dcbe6_3:;
wr(s->r,5000,4,rd(s->r,5064,4));
L_1803dcbe6_4:;
wr(s->r,5004,4,rd(s->r,5068,4));
L_1803dcbe6_5:;
/* 1803dcbe9: divss xmm6, dword ptr [rbx + 0x24] */
L_1803dcbe9_0:;
L_1803dcbe9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803dcbe9_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcbe9_3:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)/fv(rd(s->u,8,4),4),4));
L_1803dcbe9_4:;
/* 1803dcbee: comiss xmm6, xmm7 */
L_1803dcbee_0:;
L_1803dcbee_1:;
wr(s->u,14,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803dcbee_2:;
wr(s->u,15,1,isnan(fv(rd(s->r,5056,4),4)));
L_1803dcbee_3:;
wr(s->r,514,1,((rd(s->u,14,1)!=0)||(rd(s->u,15,1)!=0)));
L_1803dcbee_4:;
wr(s->u,16,1,(fv(rd(s->r,4992,4),4)==fv(rd(s->r,5056,4),4)));
L_1803dcbee_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,16,1)));
L_1803dcbee_6:;
wr(s->u,17,1,(fv(rd(s->r,4992,4),4)<fv(rd(s->r,5056,4),4)));
L_1803dcbee_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,17,1)));
L_1803dcbee_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcbee_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dcbee_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dcbee_11:;
/* 1803dcbf1: ja 0x1803dcbf6 */
L_1803dcbf1_0:;
L_1803dcbf1_1:;
wr(s->u,12,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803dcbf1_2:;
wr(s->u,13,1,(!rd(s->u,12,1)));
L_1803dcbf1_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803dcbf6);}
L_1803dcbf1_4:;
return UINT64_C(0x1803dcbf3);
}
uint64_t b_1803dcbf3(CPU*s){
/* 1803dcbf3: movaps xmm6, xmm7 */
L_1803dcbf3_0:;
L_1803dcbf3_1:;
wr(s->r,4992,4,rd(s->r,5056,4));
L_1803dcbf3_2:;
wr(s->r,4996,4,rd(s->r,5060,4));
L_1803dcbf3_3:;
wr(s->r,5000,4,rd(s->r,5064,4));
L_1803dcbf3_4:;
wr(s->r,5004,4,rd(s->r,5068,4));
L_1803dcbf3_5:;
/* 1803dcbf6: mov rax, qword ptr [rbx] */
L_1803dcbf6_0:;
L_1803dcbf6_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803dcbf6_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803dcbf6_3:;
/* 1803dcbf9: mov rcx, rbx */
L_1803dcbf9_0:;
L_1803dcbf9_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dcbf9_2:;
/* 1803dcbfc: call qword ptr [rax + 0x48] */
L_1803dcbfc_0:;
L_1803dcbfc_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x48))));
L_1803dcbfc_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcbfc_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803dcbfc_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcbfc_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dcbff)));
L_1803dcbfc_6:;
return (uint64_t)rd(s->u,16,8);
L_1803dcbfc_7:;
return UINT64_C(0x1803dcbff);
}
uint64_t b_1803dcbf6(CPU*s){
/* 1803dcbf6: mov rax, qword ptr [rbx] */
L_1803dcbf6_0:;
L_1803dcbf6_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803dcbf6_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803dcbf6_3:;
/* 1803dcbf9: mov rcx, rbx */
L_1803dcbf9_0:;
L_1803dcbf9_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dcbf9_2:;
/* 1803dcbfc: call qword ptr [rax + 0x48] */
L_1803dcbfc_0:;
L_1803dcbfc_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x48))));
L_1803dcbfc_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcbfc_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803dcbfc_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcbfc_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dcbff)));
L_1803dcbfc_6:;
return (uint64_t)rd(s->u,16,8);
L_1803dcbfc_7:;
return UINT64_C(0x1803dcbff);
}
uint64_t b_1803dcbff(CPU*s){
/* 1803dcbff: mov ecx, dword ptr [rbx + 0x3c] */
L_1803dcbff_0:;
L_1803dcbff_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803dcbff_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcbff_3:;
wr(s->r,8,4,rd(s->u,52,4));
L_1803dcbff_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dcbff_5:;
/* 1803dcc02: lea eax, [rax + rcx*2] */
L_1803dcc02_0:;
L_1803dcc02_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x2))));
L_1803dcc02_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803dcc02_3:;
wr(s->r,0,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dcc02_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dcc02_5:;
/* 1803dcc05: movd xmm0, eax */
L_1803dcc05_0:;
L_1803dcc05_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803dcc05_2:;
/* 1803dcc09: cvtdq2ps xmm0, xmm0 */
L_1803dcc09_0:;
L_1803dcc09_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dcc09_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dcc09_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dcc09_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dcc09_5:;
/* 1803dcc0c: mulss xmm0, xmm6 */
L_1803dcc0c_0:;
L_1803dcc0c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803dcc0c_2:;
/* 1803dcc10: cvttss2si eax, xmm0 */
L_1803dcc10_0:;
L_1803dcc10_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803dcc10_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dcc10_3:;
/* 1803dcc14: mov dword ptr [rbx + 0x74], eax */
L_1803dcc14_0:;
L_1803dcc14_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x74))));
L_1803dcc14_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dcc14_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dcc14_4:;
/* 1803dcc17: xor eax, eax */
L_1803dcc17_0:;
L_1803dcc17_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dcc17_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcc17_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dcc17_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dcc17_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dcc17_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dcc17_7:;
wr(s->u,64,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dcc17_8:;
wr(s->u,72,1,pop(rd(s->u,64,4),4));
L_1803dcc17_9:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dcc17_10:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dcc17_11:;
/* 1803dcc19: movaps xmm7, xmmword ptr [rsp + 0x20] */
L_1803dcc19_0:;
L_1803dcc19_1:;
wr(s->u,24,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dcc19_2:;
wr(s->u,36,16,mr((uint64_t)rd(s->u,24,8),16));
L_1803dcc19_3:;
wr(s->u,82,16,rd(s->u,36,16));
L_1803dcc19_4:;
wr(s->r,5056,4,rd(s->u,82,4));
L_1803dcc19_5:;
wr(s->r,5060,4,rd(s->u,86,4));
L_1803dcc19_6:;
wr(s->r,5064,4,rd(s->u,90,4));
L_1803dcc19_7:;
wr(s->r,5068,4,rd(s->u,94,4));
L_1803dcc19_8:;
/* 1803dcc1e: mov rbx, qword ptr [rsp + 0x58] */
L_1803dcc1e_0:;
L_1803dcc1e_1:;
wr(s->u,24,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803dcc1e_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dcc1e_3:;
wr(s->r,24,8,rd(s->u,56,8));
L_1803dcc1e_4:;
/* 1803dcc23: mov rsi, qword ptr [rsp + 0x60] */
L_1803dcc23_0:;
L_1803dcc23_1:;
wr(s->u,24,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dcc23_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dcc23_3:;
wr(s->r,48,8,rd(s->u,56,8));
L_1803dcc23_4:;
/* 1803dcc28: movaps xmm6, xmmword ptr [rsp + 0x30] */
L_1803dcc28_0:;
L_1803dcc28_1:;
wr(s->u,24,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dcc28_2:;
wr(s->u,36,16,mr((uint64_t)rd(s->u,24,8),16));
L_1803dcc28_3:;
wr(s->u,82,16,rd(s->u,36,16));
L_1803dcc28_4:;
wr(s->r,4992,4,rd(s->u,82,4));
L_1803dcc28_5:;
wr(s->r,4996,4,rd(s->u,86,4));
L_1803dcc28_6:;
wr(s->r,5000,4,rd(s->u,90,4));
L_1803dcc28_7:;
wr(s->r,5004,4,rd(s->u,94,4));
L_1803dcc28_8:;
/* 1803dcc2d: add rsp, 0x40 */
L_1803dcc2d_0:;
L_1803dcc2d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dcc2d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803dcc2d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803dcc2d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dcc2d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dcc2d_6:;
wr(s->u,64,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dcc2d_7:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803dcc2d_8:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dcc2d_9:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dcc2d_10:;
/* 1803dcc31: pop rdi */
L_1803dcc31_0:;
L_1803dcc31_1:;
wr(s->u,74,8,((U)UINT64_C(0x0)));
L_1803dcc31_2:;
wr(s->u,74,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dcc31_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dcc31_4:;
wr(s->r,56,8,rd(s->u,74,8));
L_1803dcc31_5:;
/* 1803dcc32: ret  */
L_1803dcc32_0:;
L_1803dcc32_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dcc32_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dcc32_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dcc32_4:;
return UINT64_C(0x1803dcc33);
}
uint64_t b_1803dcc17(CPU*s){
/* 1803dcc17: xor eax, eax */
L_1803dcc17_0:;
L_1803dcc17_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dcc17_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcc17_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dcc17_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dcc17_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dcc17_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dcc17_7:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dcc17_8:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803dcc17_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803dcc17_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803dcc17_11:;
/* 1803dcc19: movaps xmm7, xmmword ptr [rsp + 0x20] */
L_1803dcc19_0:;
L_1803dcc19_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dcc19_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dcc19_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803dcc19_4:;
wr(s->r,5056,4,rd(s->u,50,4));
L_1803dcc19_5:;
wr(s->r,5060,4,rd(s->u,54,4));
L_1803dcc19_6:;
wr(s->r,5064,4,rd(s->u,58,4));
L_1803dcc19_7:;
wr(s->r,5068,4,rd(s->u,62,4));
L_1803dcc19_8:;
/* 1803dcc1e: mov rbx, qword ptr [rsp + 0x58] */
L_1803dcc1e_0:;
L_1803dcc1e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803dcc1e_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcc1e_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803dcc1e_4:;
/* 1803dcc23: mov rsi, qword ptr [rsp + 0x60] */
L_1803dcc23_0:;
L_1803dcc23_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dcc23_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcc23_3:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803dcc23_4:;
/* 1803dcc28: movaps xmm6, xmmword ptr [rsp + 0x30] */
L_1803dcc28_0:;
L_1803dcc28_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dcc28_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dcc28_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803dcc28_4:;
wr(s->r,4992,4,rd(s->u,50,4));
L_1803dcc28_5:;
wr(s->r,4996,4,rd(s->u,54,4));
L_1803dcc28_6:;
wr(s->r,5000,4,rd(s->u,58,4));
L_1803dcc28_7:;
wr(s->r,5004,4,rd(s->u,62,4));
L_1803dcc28_8:;
/* 1803dcc2d: add rsp, 0x40 */
L_1803dcc2d_0:;
L_1803dcc2d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dcc2d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803dcc2d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803dcc2d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dcc2d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dcc2d_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dcc2d_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803dcc2d_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803dcc2d_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803dcc2d_10:;
/* 1803dcc31: pop rdi */
L_1803dcc31_0:;
L_1803dcc31_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803dcc31_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dcc31_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dcc31_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803dcc31_5:;
/* 1803dcc32: ret  */
L_1803dcc32_0:;
L_1803dcc32_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dcc32_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dcc32_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dcc32_4:;
return UINT64_C(0x1803dcc33);
}
uint64_t b_1803dcc19(CPU*s){
/* 1803dcc19: movaps xmm7, xmmword ptr [rsp + 0x20] */
L_1803dcc19_0:;
L_1803dcc19_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dcc19_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dcc19_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803dcc19_4:;
wr(s->r,5056,4,rd(s->u,50,4));
L_1803dcc19_5:;
wr(s->r,5060,4,rd(s->u,54,4));
L_1803dcc19_6:;
wr(s->r,5064,4,rd(s->u,58,4));
L_1803dcc19_7:;
wr(s->r,5068,4,rd(s->u,62,4));
L_1803dcc19_8:;
/* 1803dcc1e: mov rbx, qword ptr [rsp + 0x58] */
L_1803dcc1e_0:;
L_1803dcc1e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803dcc1e_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcc1e_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803dcc1e_4:;
/* 1803dcc23: mov rsi, qword ptr [rsp + 0x60] */
L_1803dcc23_0:;
L_1803dcc23_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dcc23_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcc23_3:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803dcc23_4:;
/* 1803dcc28: movaps xmm6, xmmword ptr [rsp + 0x30] */
L_1803dcc28_0:;
L_1803dcc28_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dcc28_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dcc28_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803dcc28_4:;
wr(s->r,4992,4,rd(s->u,50,4));
L_1803dcc28_5:;
wr(s->r,4996,4,rd(s->u,54,4));
L_1803dcc28_6:;
wr(s->r,5000,4,rd(s->u,58,4));
L_1803dcc28_7:;
wr(s->r,5004,4,rd(s->u,62,4));
L_1803dcc28_8:;
/* 1803dcc2d: add rsp, 0x40 */
L_1803dcc2d_0:;
L_1803dcc2d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dcc2d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803dcc2d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803dcc2d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dcc2d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dcc2d_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dcc2d_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803dcc2d_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803dcc2d_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803dcc2d_10:;
/* 1803dcc31: pop rdi */
L_1803dcc31_0:;
L_1803dcc31_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803dcc31_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dcc31_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dcc31_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803dcc31_5:;
/* 1803dcc32: ret  */
L_1803dcc32_0:;
L_1803dcc32_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dcc32_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dcc32_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dcc32_4:;
return UINT64_C(0x1803dcc33);
}
uint64_t b_1803dcc1e(CPU*s){
/* 1803dcc1e: mov rbx, qword ptr [rsp + 0x58] */
L_1803dcc1e_0:;
L_1803dcc1e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803dcc1e_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcc1e_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803dcc1e_4:;
/* 1803dcc23: mov rsi, qword ptr [rsp + 0x60] */
L_1803dcc23_0:;
L_1803dcc23_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dcc23_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcc23_3:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803dcc23_4:;
/* 1803dcc28: movaps xmm6, xmmword ptr [rsp + 0x30] */
L_1803dcc28_0:;
L_1803dcc28_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dcc28_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dcc28_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803dcc28_4:;
wr(s->r,4992,4,rd(s->u,50,4));
L_1803dcc28_5:;
wr(s->r,4996,4,rd(s->u,54,4));
L_1803dcc28_6:;
wr(s->r,5000,4,rd(s->u,58,4));
L_1803dcc28_7:;
wr(s->r,5004,4,rd(s->u,62,4));
L_1803dcc28_8:;
/* 1803dcc2d: add rsp, 0x40 */
L_1803dcc2d_0:;
L_1803dcc2d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dcc2d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803dcc2d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803dcc2d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dcc2d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dcc2d_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dcc2d_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803dcc2d_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803dcc2d_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803dcc2d_10:;
/* 1803dcc31: pop rdi */
L_1803dcc31_0:;
L_1803dcc31_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803dcc31_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dcc31_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dcc31_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803dcc31_5:;
/* 1803dcc32: ret  */
L_1803dcc32_0:;
L_1803dcc32_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dcc32_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dcc32_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dcc32_4:;
return UINT64_C(0x1803dcc33);
}
uint64_t b_1803dcc40(CPU*s){
/* 1803dcc40: mov qword ptr [rsp + 0x10], rbx */
L_1803dcc40_0:;
L_1803dcc40_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803dcc40_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803dcc40_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dcc40_4:;
/* 1803dcc45: mov qword ptr [rsp + 0x18], rsi */
L_1803dcc45_0:;
L_1803dcc45_1:;
wr(s->u,8,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803dcc45_2:;
wr(s->u,16,8,rd(s->r,48,8));
L_1803dcc45_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dcc45_4:;
/* 1803dcc4a: push rdi */
L_1803dcc4a_0:;
L_1803dcc4a_1:;
wr(s->u,44,8,rd(s->r,56,8));
L_1803dcc4a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcc4a_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,44,8));
L_1803dcc4a_4:;
/* 1803dcc4b: sub rsp, 0x50 */
L_1803dcc4b_0:;
L_1803dcc4b_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x50))));
L_1803dcc4b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,1));
L_1803dcc4b_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x50))));
L_1803dcc4b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dcc4b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dcc4b_6:;
wr(s->u,52,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dcc4b_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803dcc4b_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803dcc4b_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803dcc4b_10:;
/* 1803dcc4f: cmp dword ptr [rcx + 0xc0], 0 */
L_1803dcc4f_0:;
L_1803dcc4f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc0))));
L_1803dcc4f_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcc4f_3:;
wr(s->u,62,4,rd(s->u,40,4));
L_1803dcc4f_4:;
wr(s->r,512,1,(rd(s->u,62,4)<((U)UINT64_C(0x0))));
L_1803dcc4f_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,62,4),((U)UINT64_C(0x0)),4,1));
L_1803dcc4f_6:;
wr(s->u,66,4,(rd(s->u,62,4)-((U)UINT64_C(0x0))));
L_1803dcc4f_7:;
wr(s->r,519,1,(sx(rd(s->u,66,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dcc4f_8:;
wr(s->r,518,1,(rd(s->u,66,4)==((U)UINT64_C(0x0))));
L_1803dcc4f_9:;
wr(s->u,52,4,(rd(s->u,66,4)&((U)UINT64_C(0xff))));
L_1803dcc4f_10:;
wr(s->u,60,1,pop(rd(s->u,52,4),4));
L_1803dcc4f_11:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803dcc4f_12:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803dcc4f_13:;
/* 1803dcc56: movaps xmmword ptr [rsp + 0x40], xmm6 */
L_1803dcc56_0:;
L_1803dcc56_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dcc56_2:;
wr(s->u,24,16,rd(s->r,4992,16));
L_1803dcc56_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,24,16));
L_1803dcc56_4:;
/* 1803dcc5b: movzx esi, r9b */
L_1803dcc5b_0:;
L_1803dcc5b_1:;
wr(s->r,48,4,rd(s->r,136,1));
L_1803dcc5b_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803dcc5b_3:;
/* 1803dcc5f: movaps xmm6, xmm1 */
L_1803dcc5f_0:;
L_1803dcc5f_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803dcc5f_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803dcc5f_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803dcc5f_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803dcc5f_5:;
/* 1803dcc62: mov rdi, r8 */
L_1803dcc62_0:;
L_1803dcc62_1:;
wr(s->r,56,8,rd(s->r,128,8));
L_1803dcc62_2:;
/* 1803dcc65: mov rbx, rcx */
L_1803dcc65_0:;
L_1803dcc65_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803dcc65_2:;
/* 1803dcc68: je 0x1803dcc74 */
L_1803dcc68_0:;
L_1803dcc68_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dcc74);}
L_1803dcc68_2:;
return UINT64_C(0x1803dcc6a);
}
uint64_t b_1803dcc6a(CPU*s){
/* 1803dcc6a: mov eax, 0x4c4b41 */
L_1803dcc6a_0:;
L_1803dcc6a_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b41)));
L_1803dcc6a_2:;
/* 1803dcc6f: jmp 0x1803dce23 */
L_1803dcc6f_0:;
L_1803dcc6f_1:;
return UINT64_C(0x1803dce23);
L_1803dcc6f_2:;
return UINT64_C(0x1803dcc74);
}
uint64_t b_1803dcc74(CPU*s){
/* 1803dcc74: mov rcx, qword ptr [rcx + 0x66f0] */
L_1803dcc74_0:;
L_1803dcc74_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x66f0))));
L_1803dcc74_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dcc74_3:;
wr(s->r,8,8,rd(s->u,44,8));
L_1803dcc74_4:;
/* 1803dcc7b: movaps xmmword ptr [rsp + 0x30], xmm7 */
L_1803dcc7b_0:;
L_1803dcc7b_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dcc7b_2:;
wr(s->u,28,16,rd(s->r,5056,16));
L_1803dcc7b_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,28,16));
L_1803dcc7b_4:;
/* 1803dcc80: movss xmm7, dword ptr [rip + 0x26ffbc] */
L_1803dcc80_0:;
L_1803dcc80_1:;
wr(s->r,5056,4,mr(UINT64_C(0x18064cc44),4));
L_1803dcc80_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803dcc80_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803dcc80_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803dcc80_5:;
/* 1803dcc88: movaps xmmword ptr [rsp + 0x20], xmm8 */
L_1803dcc88_0:;
L_1803dcc88_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dcc88_2:;
wr(s->u,28,16,rd(s->r,5120,16));
L_1803dcc88_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,28,16));
L_1803dcc88_4:;
/* 1803dcc8e: movaps xmm8, xmm1 */
L_1803dcc8e_0:;
L_1803dcc8e_1:;
wr(s->r,5120,4,rd(s->r,4672,4));
L_1803dcc8e_2:;
wr(s->r,5124,4,rd(s->r,4676,4));
L_1803dcc8e_3:;
wr(s->r,5128,4,rd(s->r,4680,4));
L_1803dcc8e_4:;
wr(s->r,5132,4,rd(s->r,4684,4));
L_1803dcc8e_5:;
/* 1803dcc92: lea rdx, [rsp + 0x60] */
L_1803dcc92_0:;
L_1803dcc92_1:;
wr(s->u,16,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dcc92_2:;
wr(s->r,16,8,rd(s->u,16,8));
L_1803dcc92_3:;
/* 1803dcc97: xor r9d, r9d */
L_1803dcc97_0:;
L_1803dcc97_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dcc97_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcc97_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803dcc97_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dcc97_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dcc97_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dcc97_7:;
wr(s->u,52,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dcc97_8:;
wr(s->u,56,1,pop(rd(s->u,52,4),4));
L_1803dcc97_9:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803dcc97_10:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803dcc97_11:;
/* 1803dcc9a: mulss xmm8, dword ptr [r8] */
L_1803dcc9a_0:;
L_1803dcc9a_1:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,128,8),4));
L_1803dcc9a_2:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->u,24,4),4),4));
L_1803dcc9a_3:;
/* 1803dcc9f: movaps xmm2, xmm7 */
L_1803dcc9f_0:;
L_1803dcc9f_1:;
wr(s->r,4736,4,rd(s->r,5056,4));
L_1803dcc9f_2:;
wr(s->r,4740,4,rd(s->r,5060,4));
L_1803dcc9f_3:;
wr(s->r,4744,4,rd(s->r,5064,4));
L_1803dcc9f_4:;
wr(s->r,4748,4,rd(s->r,5068,4));
L_1803dcc9f_5:;
/* 1803dcca2: movss dword ptr [rsp + 0x60], xmm8 */
L_1803dcca2_0:;
L_1803dcca2_1:;
wr(s->u,16,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dcca2_2:;
wr(s->u,24,4,rd(s->r,5120,4));
L_1803dcca2_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dcca2_4:;
/* 1803dcca9: mov rax, qword ptr [rcx] */
L_1803dcca9_0:;
L_1803dcca9_1:;
wr(s->u,44,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dcca9_2:;
wr(s->r,0,8,rd(s->u,44,8));
L_1803dcca9_3:;
/* 1803dccac: call qword ptr [rax + 0x28] */
L_1803dccac_0:;
L_1803dccac_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x28))));
L_1803dccac_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dccac_3:;
wr(s->u,58,8,rd(s->u,44,8));
L_1803dccac_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dccac_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dccaf)));
L_1803dccac_6:;
return (uint64_t)rd(s->u,58,8);
L_1803dccac_7:;
return UINT64_C(0x1803dccaf);
}
uint64_t b_1803dcc7b(CPU*s){
/* 1803dcc7b: movaps xmmword ptr [rsp + 0x30], xmm7 */
L_1803dcc7b_0:;
L_1803dcc7b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dcc7b_2:;
wr(s->u,20,16,rd(s->r,5056,16));
L_1803dcc7b_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803dcc7b_4:;
/* 1803dcc80: movss xmm7, dword ptr [rip + 0x26ffbc] */
L_1803dcc80_0:;
L_1803dcc80_1:;
wr(s->r,5056,4,mr(UINT64_C(0x18064cc44),4));
L_1803dcc80_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803dcc80_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803dcc80_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803dcc80_5:;
/* 1803dcc88: movaps xmmword ptr [rsp + 0x20], xmm8 */
L_1803dcc88_0:;
L_1803dcc88_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dcc88_2:;
wr(s->u,20,16,rd(s->r,5120,16));
L_1803dcc88_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803dcc88_4:;
/* 1803dcc8e: movaps xmm8, xmm1 */
L_1803dcc8e_0:;
L_1803dcc8e_1:;
wr(s->r,5120,4,rd(s->r,4672,4));
L_1803dcc8e_2:;
wr(s->r,5124,4,rd(s->r,4676,4));
L_1803dcc8e_3:;
wr(s->r,5128,4,rd(s->r,4680,4));
L_1803dcc8e_4:;
wr(s->r,5132,4,rd(s->r,4684,4));
L_1803dcc8e_5:;
/* 1803dcc92: lea rdx, [rsp + 0x60] */
L_1803dcc92_0:;
L_1803dcc92_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dcc92_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803dcc92_3:;
/* 1803dcc97: xor r9d, r9d */
L_1803dcc97_0:;
L_1803dcc97_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dcc97_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcc97_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803dcc97_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dcc97_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dcc97_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dcc97_7:;
wr(s->u,44,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dcc97_8:;
wr(s->u,48,1,pop(rd(s->u,44,4),4));
L_1803dcc97_9:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dcc97_10:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dcc97_11:;
/* 1803dcc9a: mulss xmm8, dword ptr [r8] */
L_1803dcc9a_0:;
L_1803dcc9a_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,128,8),4));
L_1803dcc9a_2:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->u,16,4),4),4));
L_1803dcc9a_3:;
/* 1803dcc9f: movaps xmm2, xmm7 */
L_1803dcc9f_0:;
L_1803dcc9f_1:;
wr(s->r,4736,4,rd(s->r,5056,4));
L_1803dcc9f_2:;
wr(s->r,4740,4,rd(s->r,5060,4));
L_1803dcc9f_3:;
wr(s->r,4744,4,rd(s->r,5064,4));
L_1803dcc9f_4:;
wr(s->r,4748,4,rd(s->r,5068,4));
L_1803dcc9f_5:;
/* 1803dcca2: movss dword ptr [rsp + 0x60], xmm8 */
L_1803dcca2_0:;
L_1803dcca2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dcca2_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803dcca2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dcca2_4:;
/* 1803dcca9: mov rax, qword ptr [rcx] */
L_1803dcca9_0:;
L_1803dcca9_1:;
wr(s->u,36,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dcca9_2:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803dcca9_3:;
/* 1803dccac: call qword ptr [rax + 0x28] */
L_1803dccac_0:;
L_1803dccac_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x28))));
L_1803dccac_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dccac_3:;
wr(s->u,50,8,rd(s->u,36,8));
L_1803dccac_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dccac_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dccaf)));
L_1803dccac_6:;
return (uint64_t)rd(s->u,50,8);
L_1803dccac_7:;
return UINT64_C(0x1803dccaf);
}
uint64_t b_1803dccaf(CPU*s){
/* 1803dccaf: test eax, eax */
L_1803dccaf_0:;
L_1803dccaf_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dccaf_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dccaf_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803dccaf_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dccaf_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803dccaf_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803dccaf_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803dccaf_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803dccaf_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803dccaf_10:;
/* 1803dccb1: jne 0x1803dce18 */
L_1803dccb1_0:;
L_1803dccb1_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803dccb1_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dce18);}
L_1803dccb1_3:;
return UINT64_C(0x1803dccb7);
}
uint64_t b_1803dccb7(CPU*s){
/* 1803dccb7: movss xmm1, dword ptr [rdi] */
L_1803dccb7_0:;
L_1803dccb7_1:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,56,8),4));
L_1803dccb7_2:;
wr(s->r,4672,4,rd(s->u,24,4));
L_1803dccb7_3:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803dccb7_4:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803dccb7_5:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803dccb7_6:;
/* 1803dccbb: movss xmm0, dword ptr [rsp + 0x60] */
L_1803dccbb_0:;
L_1803dccbb_1:;
wr(s->u,16,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dccbb_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803dccbb_3:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803dccbb_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dccbb_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dccbb_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dccbb_7:;
/* 1803dccc1: divss xmm1, xmm8 */
L_1803dccc1_0:;
L_1803dccc1_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,5120,4),4),4));
L_1803dccc1_2:;
/* 1803dccc6: movss dword ptr [rbx + 0x18], xmm0 */
L_1803dccc6_0:;
L_1803dccc6_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803dccc6_2:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803dccc6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dccc6_4:;
/* 1803dcccb: mulss xmm1, xmm0 */
L_1803dcccb_0:;
L_1803dcccb_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803dcccb_2:;
/* 1803dcccf: movss dword ptr [rbx + 0x24], xmm1 */
L_1803dcccf_0:;
L_1803dcccf_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803dcccf_2:;
wr(s->u,24,4,rd(s->r,4672,4));
L_1803dcccf_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dcccf_4:;
/* 1803dccd4: mov eax, dword ptr [rbx + 0x24] */
L_1803dccd4_0:;
L_1803dccd4_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803dccd4_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dccd4_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803dccd4_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dccd4_5:;
/* 1803dccd7: mov dword ptr [rdi], eax */
L_1803dccd7_0:;
L_1803dccd7_1:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803dccd7_2:;
mw((uint64_t)rd(s->r,56,8),4,rd(s->u,24,4));
L_1803dccd7_3:;
/* 1803dccd9: mov rcx, qword ptr [rbx + 0x66f0] */
L_1803dccd9_0:;
L_1803dccd9_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f0))));
L_1803dccd9_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dccd9_3:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803dccd9_4:;
/* 1803dcce0: call 0x1803da8c0 */
L_1803dcce0_0:;
L_1803dcce0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcce0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dcce5)));
L_1803dcce0_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dcce0_4:;
return UINT64_C(0x1803dcce5);
}
uint64_t b_1803dcce5(CPU*s){
/* 1803dcce5: sar eax, 1 */
L_1803dcce5_0:;
L_1803dcce5_1:;
wr(s->u,18,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dcce5_2:;
wr(s->r,512,1,(rd(s->u,18,4)!=((U)UINT64_C(0x0))));
L_1803dcce5_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcce5_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dcce5_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dcce5_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dcce5_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dcce5_8:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dcce5_9:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803dcce5_10:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803dcce5_11:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803dcce5_12:;
/* 1803dcce7: mov dword ptr [rbx + 0x58], eax */
L_1803dcce7_0:;
L_1803dcce7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x58))));
L_1803dcce7_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803dcce7_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dcce7_4:;
/* 1803dccea: test sil, sil */
L_1803dccea_0:;
L_1803dccea_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dccea_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dccea_3:;
wr(s->u,22,1,(rd(s->r,48,1)&rd(s->r,48,1)));
L_1803dccea_4:;
wr(s->r,519,1,(sx(rd(s->u,22,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803dccea_5:;
wr(s->r,518,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dccea_6:;
wr(s->u,12,1,(rd(s->u,22,1)&((U)UINT64_C(0xff))));
L_1803dccea_7:;
wr(s->u,16,1,pop(rd(s->u,12,1),1));
L_1803dccea_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803dccea_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803dccea_10:;
/* 1803dcced: je 0x1803dcd31 */
L_1803dcced_0:;
L_1803dcced_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dcd31);}
L_1803dcced_2:;
return UINT64_C(0x1803dccef);
}
uint64_t b_1803dccef(CPU*s){
/* 1803dccef: cmp dword ptr [rbx + 0xc4], 0 */
L_1803dccef_0:;
L_1803dccef_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc4))));
L_1803dccef_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dccef_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803dccef_4:;
wr(s->r,512,1,(rd(s->u,19,4)<((U)UINT64_C(0x0))));
L_1803dccef_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),((U)UINT64_C(0x0)),4,1));
L_1803dccef_6:;
wr(s->u,23,4,(rd(s->u,19,4)-((U)UINT64_C(0x0))));
L_1803dccef_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dccef_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803dccef_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803dccef_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dccef_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dccef_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dccef_13:;
/* 1803dccf6: jne 0x1803dcd31 */
L_1803dccf6_0:;
L_1803dccf6_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803dccf6_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dcd31);}
L_1803dccf6_3:;
return UINT64_C(0x1803dccf8);
}
uint64_t b_1803dccf8(CPU*s){
/* 1803dccf8: mov eax, dword ptr [rbx + 0x3c] */
L_1803dccf8_0:;
L_1803dccf8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803dccf8_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dccf8_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803dccf8_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dccf8_5:;
/* 1803dccfb: movaps xmm0, xmm7 */
L_1803dccfb_0:;
L_1803dccfb_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803dccfb_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803dccfb_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803dccfb_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803dccfb_5:;
/* 1803dccfe: add eax, eax */
L_1803dccfe_0:;
L_1803dccfe_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803dccfe_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,0,4),4,0));
L_1803dccfe_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,0,4)));
L_1803dccfe_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dccfe_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dccfe_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dccfe_7:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dccfe_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803dccfe_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803dccfe_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803dccfe_11:;
/* 1803dcd00: divss xmm0, dword ptr [rbx + 0x24] */
L_1803dcd00_0:;
L_1803dcd00_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803dcd00_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcd00_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->u,16,4),4),4));
L_1803dcd00_4:;
/* 1803dcd05: movd xmm2, eax */
L_1803dcd05_0:;
L_1803dcd05_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803dcd05_2:;
/* 1803dcd09: cvtdq2pd xmm2, xmm2 */
L_1803dcd09_0:;
L_1803dcd09_1:;
wr(s->u,38,8,rd(s->r,4736,8));
L_1803dcd09_2:;
wr(s->r,4736,8,fb((double)sx(rd(s->u,38,4),4),8));
L_1803dcd09_3:;
wr(s->r,4744,8,fb((double)sx(rd(s->u,42,4),4),8));
L_1803dcd09_4:;
/* 1803dcd0d: unpcklps xmm0, xmm0 */
L_1803dcd0d_0:;
L_1803dcd0d_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803dcd0d_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803dcd0d_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803dcd0d_4:;
/* 1803dcd10: cvtps2pd xmm1, xmm0 */
L_1803dcd10_0:;
L_1803dcd10_1:;
wr(s->u,46,8,rd(s->r,4608,8));
L_1803dcd10_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,46,4),4),8));
L_1803dcd10_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,50,4),4),8));
L_1803dcd10_4:;
/* 1803dcd13: movsd xmm0, qword ptr [rbx + 0x98] */
L_1803dcd13_0:;
L_1803dcd13_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x98))));
L_1803dcd13_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dcd13_3:;
wr(s->r,4608,8,rd(s->u,20,8));
L_1803dcd13_4:;
wr(s->r,4616,8,((U)UINT64_C(0x0)));
L_1803dcd13_5:;
/* 1803dcd1b: mulsd xmm1, xmm2 */
L_1803dcd1b_0:;
L_1803dcd1b_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,4736,8),8),8));
L_1803dcd1b_2:;
/* 1803dcd1f: subsd xmm1, xmm2 */
L_1803dcd1f_0:;
L_1803dcd1f_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)-fv(rd(s->r,4736,8),8),8));
L_1803dcd1f_2:;
/* 1803dcd23: subsd xmm0, xmm1 */
L_1803dcd23_0:;
L_1803dcd23_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)-fv(rd(s->r,4672,8),8),8));
L_1803dcd23_2:;
/* 1803dcd27: movsd qword ptr [rbx + 0xa8], xmm0 */
L_1803dcd27_0:;
L_1803dcd27_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xa8))));
L_1803dcd27_2:;
wr(s->u,20,8,rd(s->r,4608,8));
L_1803dcd27_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dcd27_4:;
/* 1803dcd2f: jmp 0x1803dcd3f */
L_1803dcd2f_0:;
L_1803dcd2f_1:;
return UINT64_C(0x1803dcd3f);
L_1803dcd2f_2:;
return UINT64_C(0x1803dcd31);
}
uint64_t b_1803dcd31(CPU*s){
/* 1803dcd31: mov rax, qword ptr [rbx + 0x98] */
L_1803dcd31_0:;
L_1803dcd31_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x98))));
L_1803dcd31_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcd31_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dcd31_4:;
/* 1803dcd38: mov qword ptr [rbx + 0xa8], rax */
L_1803dcd38_0:;
L_1803dcd38_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xa8))));
L_1803dcd38_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803dcd38_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dcd38_4:;
/* 1803dcd3f: movss xmm0, dword ptr [rip + 0x282d55] */
L_1803dcd3f_0:;
L_1803dcd3f_1:;
wr(s->r,4608,4,mr(UINT64_C(0x18065fa9c),4));
L_1803dcd3f_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dcd3f_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dcd3f_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dcd3f_5:;
/* 1803dcd47: comiss xmm6, xmm0 */
L_1803dcd47_0:;
L_1803dcd47_1:;
wr(s->u,25,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803dcd47_2:;
wr(s->u,26,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dcd47_3:;
wr(s->r,514,1,((rd(s->u,25,1)!=0)||(rd(s->u,26,1)!=0)));
L_1803dcd47_4:;
wr(s->u,27,1,(fv(rd(s->r,4992,4),4)==fv(rd(s->r,4608,4),4)));
L_1803dcd47_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,27,1)));
L_1803dcd47_6:;
wr(s->u,28,1,(fv(rd(s->r,4992,4),4)<fv(rd(s->r,4608,4),4)));
L_1803dcd47_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,28,1)));
L_1803dcd47_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcd47_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dcd47_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dcd47_11:;
/* 1803dcd4a: jbe 0x1803dcdb0 */
L_1803dcd4a_0:;
L_1803dcd4a_1:;
wr(s->u,24,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803dcd4a_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803dcdb0);}
L_1803dcd4a_3:;
return UINT64_C(0x1803dcd4c);
}
uint64_t b_1803dcd3f(CPU*s){
/* 1803dcd3f: movss xmm0, dword ptr [rip + 0x282d55] */
L_1803dcd3f_0:;
L_1803dcd3f_1:;
wr(s->r,4608,4,mr(UINT64_C(0x18065fa9c),4));
L_1803dcd3f_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dcd3f_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dcd3f_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dcd3f_5:;
/* 1803dcd47: comiss xmm6, xmm0 */
L_1803dcd47_0:;
L_1803dcd47_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803dcd47_2:;
wr(s->u,2,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dcd47_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803dcd47_4:;
wr(s->u,3,1,(fv(rd(s->r,4992,4),4)==fv(rd(s->r,4608,4),4)));
L_1803dcd47_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dcd47_6:;
wr(s->u,4,1,(fv(rd(s->r,4992,4),4)<fv(rd(s->r,4608,4),4)));
L_1803dcd47_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803dcd47_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcd47_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dcd47_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dcd47_11:;
/* 1803dcd4a: jbe 0x1803dcdb0 */
L_1803dcd4a_0:;
L_1803dcd4a_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803dcd4a_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dcdb0);}
L_1803dcd4a_3:;
return UINT64_C(0x1803dcd4c);
}
uint64_t b_1803dcd4c(CPU*s){
/* 1803dcd4c: subss xmm6, xmm0 */
L_1803dcd4c_0:;
L_1803dcd4c_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803dcd4c_2:;
/* 1803dcd50: comiss xmm6, dword ptr [rip + 0x2750e9] */
L_1803dcd50_0:;
L_1803dcd50_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803dcd50_2:;
wr(s->u,2,1,isnan(fv(mr(UINT64_C(0x180651e40),4),4)));
L_1803dcd50_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803dcd50_4:;
wr(s->u,3,1,(fv(rd(s->r,4992,4),4)==fv(mr(UINT64_C(0x180651e40),4),4)));
L_1803dcd50_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dcd50_6:;
wr(s->u,4,1,(fv(rd(s->r,4992,4),4)<fv(mr(UINT64_C(0x180651e40),4),4)));
L_1803dcd50_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803dcd50_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcd50_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dcd50_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dcd50_11:;
/* 1803dcd57: jae 0x1803dcd5e */
L_1803dcd57_0:;
L_1803dcd57_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803dcd57_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dcd5e);}
L_1803dcd57_3:;
return UINT64_C(0x1803dcd59);
}
uint64_t b_1803dcd59(CPU*s){
/* 1803dcd59: movaps xmm6, xmm7 */
L_1803dcd59_0:;
L_1803dcd59_1:;
wr(s->r,4992,4,rd(s->r,5056,4));
L_1803dcd59_2:;
wr(s->r,4996,4,rd(s->r,5060,4));
L_1803dcd59_3:;
wr(s->r,5000,4,rd(s->r,5064,4));
L_1803dcd59_4:;
wr(s->r,5004,4,rd(s->r,5068,4));
L_1803dcd59_5:;
/* 1803dcd5c: jmp 0x1803dcd62 */
L_1803dcd5c_0:;
L_1803dcd5c_1:;
return UINT64_C(0x1803dcd62);
L_1803dcd5c_2:;
return UINT64_C(0x1803dcd5e);
}
uint64_t b_1803dcd5e(CPU*s){
/* 1803dcd5e: addss xmm6, xmm7 */
L_1803dcd5e_0:;
L_1803dcd5e_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803dcd5e_2:;
/* 1803dcd62: movaps xmm0, xmm6 */
L_1803dcd62_0:;
L_1803dcd62_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803dcd62_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803dcd62_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803dcd62_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803dcd62_5:;
/* 1803dcd65: mulss xmm0, xmm6 */
L_1803dcd65_0:;
L_1803dcd65_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803dcd65_2:;
/* 1803dcd69: mulss xmm6, xmm0 */
L_1803dcd69_0:;
L_1803dcd69_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803dcd69_2:;
/* 1803dcd6d: movss xmm0, dword ptr [rbx + 0x10] */
L_1803dcd6d_0:;
L_1803dcd6d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803dcd6d_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcd6d_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803dcd6d_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dcd6d_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dcd6d_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dcd6d_7:;
/* 1803dcd72: mulss xmm6, dword ptr [rip + 0x42fb1e] */
L_1803dcd72_0:;
L_1803dcd72_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(mr(UINT64_C(0x18080c898),4),4),4));
L_1803dcd72_2:;
/* 1803dcd7a: mulss xmm0, dword ptr [rip + 0x2753e2] */
L_1803dcd7a_0:;
L_1803dcd7a_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(mr(UINT64_C(0x180652164),4),4),4));
L_1803dcd7a_2:;
/* 1803dcd82: comiss xmm6, xmm0 */
L_1803dcd82_0:;
L_1803dcd82_1:;
wr(s->u,12,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803dcd82_2:;
wr(s->u,13,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dcd82_3:;
wr(s->r,514,1,((rd(s->u,12,1)!=0)||(rd(s->u,13,1)!=0)));
L_1803dcd82_4:;
wr(s->u,14,1,(fv(rd(s->r,4992,4),4)==fv(rd(s->r,4608,4),4)));
L_1803dcd82_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,14,1)));
L_1803dcd82_6:;
wr(s->u,15,1,(fv(rd(s->r,4992,4),4)<fv(rd(s->r,4608,4),4)));
L_1803dcd82_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,15,1)));
L_1803dcd82_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcd82_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dcd82_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dcd82_11:;
/* 1803dcd85: jb 0x1803dcd8a */
L_1803dcd85_0:;
L_1803dcd85_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803dcd8a);}
L_1803dcd85_2:;
return UINT64_C(0x1803dcd87);
}
uint64_t b_1803dcd62(CPU*s){
/* 1803dcd62: movaps xmm0, xmm6 */
L_1803dcd62_0:;
L_1803dcd62_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803dcd62_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803dcd62_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803dcd62_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803dcd62_5:;
/* 1803dcd65: mulss xmm0, xmm6 */
L_1803dcd65_0:;
L_1803dcd65_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803dcd65_2:;
/* 1803dcd69: mulss xmm6, xmm0 */
L_1803dcd69_0:;
L_1803dcd69_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803dcd69_2:;
/* 1803dcd6d: movss xmm0, dword ptr [rbx + 0x10] */
L_1803dcd6d_0:;
L_1803dcd6d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803dcd6d_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcd6d_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803dcd6d_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dcd6d_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dcd6d_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dcd6d_7:;
/* 1803dcd72: mulss xmm6, dword ptr [rip + 0x42fb1e] */
L_1803dcd72_0:;
L_1803dcd72_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(mr(UINT64_C(0x18080c898),4),4),4));
L_1803dcd72_2:;
/* 1803dcd7a: mulss xmm0, dword ptr [rip + 0x2753e2] */
L_1803dcd7a_0:;
L_1803dcd7a_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(mr(UINT64_C(0x180652164),4),4),4));
L_1803dcd7a_2:;
/* 1803dcd82: comiss xmm6, xmm0 */
L_1803dcd82_0:;
L_1803dcd82_1:;
wr(s->u,12,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803dcd82_2:;
wr(s->u,13,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dcd82_3:;
wr(s->r,514,1,((rd(s->u,12,1)!=0)||(rd(s->u,13,1)!=0)));
L_1803dcd82_4:;
wr(s->u,14,1,(fv(rd(s->r,4992,4),4)==fv(rd(s->r,4608,4),4)));
L_1803dcd82_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,14,1)));
L_1803dcd82_6:;
wr(s->u,15,1,(fv(rd(s->r,4992,4),4)<fv(rd(s->r,4608,4),4)));
L_1803dcd82_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,15,1)));
L_1803dcd82_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcd82_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dcd82_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dcd82_11:;
/* 1803dcd85: jb 0x1803dcd8a */
L_1803dcd85_0:;
L_1803dcd85_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803dcd8a);}
L_1803dcd85_2:;
return UINT64_C(0x1803dcd87);
}
uint64_t b_1803dcd87(CPU*s){
/* 1803dcd87: movaps xmm6, xmm0 */
L_1803dcd87_0:;
L_1803dcd87_1:;
wr(s->r,4992,4,rd(s->r,4608,4));
L_1803dcd87_2:;
wr(s->r,4996,4,rd(s->r,4612,4));
L_1803dcd87_3:;
wr(s->r,5000,4,rd(s->r,4616,4));
L_1803dcd87_4:;
wr(s->r,5004,4,rd(s->r,4620,4));
L_1803dcd87_5:;
/* 1803dcd8a: mov rcx, qword ptr [rbx + 0x6718] */
L_1803dcd8a_0:;
L_1803dcd8a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6718))));
L_1803dcd8a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcd8a_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dcd8a_4:;
/* 1803dcd91: test rcx, rcx */
L_1803dcd91_0:;
L_1803dcd91_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dcd91_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcd91_3:;
wr(s->u,26,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803dcd91_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dcd91_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803dcd91_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803dcd91_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dcd91_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dcd91_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dcd91_10:;
/* 1803dcd94: je 0x1803dcd9e */
L_1803dcd94_0:;
L_1803dcd94_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dcd9e);}
L_1803dcd94_2:;
return UINT64_C(0x1803dcd96);
}
uint64_t b_1803dcd8a(CPU*s){
/* 1803dcd8a: mov rcx, qword ptr [rbx + 0x6718] */
L_1803dcd8a_0:;
L_1803dcd8a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6718))));
L_1803dcd8a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcd8a_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dcd8a_4:;
/* 1803dcd91: test rcx, rcx */
L_1803dcd91_0:;
L_1803dcd91_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dcd91_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcd91_3:;
wr(s->u,26,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803dcd91_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dcd91_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803dcd91_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803dcd91_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dcd91_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dcd91_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dcd91_10:;
/* 1803dcd94: je 0x1803dcd9e */
L_1803dcd94_0:;
L_1803dcd94_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dcd9e);}
L_1803dcd94_2:;
return UINT64_C(0x1803dcd96);
}
uint64_t b_1803dcd96(CPU*s){
/* 1803dcd96: movaps xmm1, xmm6 */
L_1803dcd96_0:;
L_1803dcd96_1:;
wr(s->r,4672,4,rd(s->r,4992,4));
L_1803dcd96_2:;
wr(s->r,4676,4,rd(s->r,4996,4));
L_1803dcd96_3:;
wr(s->r,4680,4,rd(s->r,5000,4));
L_1803dcd96_4:;
wr(s->r,4684,4,rd(s->r,5004,4));
L_1803dcd96_5:;
/* 1803dcd99: call 0x1803e2060 */
L_1803dcd99_0:;
L_1803dcd99_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcd99_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dcd9e)));
L_1803dcd99_3:;
return (uint64_t)UINT64_C(0x1803e2060);
L_1803dcd99_4:;
return UINT64_C(0x1803dcd9e);
}
uint64_t b_1803dcd9e(CPU*s){
/* 1803dcd9e: mov rcx, qword ptr [rbx + 0x66f0] */
L_1803dcd9e_0:;
L_1803dcd9e_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f0))));
L_1803dcd9e_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dcd9e_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dcd9e_4:;
/* 1803dcda5: movaps xmm1, xmm6 */
L_1803dcda5_0:;
L_1803dcda5_1:;
wr(s->r,4672,4,rd(s->r,4992,4));
L_1803dcda5_2:;
wr(s->r,4676,4,rd(s->r,4996,4));
L_1803dcda5_3:;
wr(s->r,4680,4,rd(s->r,5000,4));
L_1803dcda5_4:;
wr(s->r,4684,4,rd(s->r,5004,4));
L_1803dcda5_5:;
/* 1803dcda8: mov rax, qword ptr [rcx] */
L_1803dcda8_0:;
L_1803dcda8_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dcda8_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dcda8_3:;
/* 1803dcdab: call qword ptr [rax + 0x58] */
L_1803dcdab_0:;
L_1803dcdab_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x58))));
L_1803dcdab_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcdab_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803dcdab_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcdab_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dcdae)));
L_1803dcdab_6:;
return (uint64_t)rd(s->u,24,8);
L_1803dcdab_7:;
return UINT64_C(0x1803dcdae);
}
uint64_t b_1803dcdae(CPU*s){
/* 1803dcdae: jmp 0x1803dcddc */
L_1803dcdae_0:;
L_1803dcdae_1:;
return UINT64_C(0x1803dcddc);
L_1803dcdae_2:;
return UINT64_C(0x1803dcdb0);
}
uint64_t b_1803dcdb0(CPU*s){
/* 1803dcdb0: mov rcx, qword ptr [rbx + 0x6718] */
L_1803dcdb0_0:;
L_1803dcdb0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6718))));
L_1803dcdb0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcdb0_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dcdb0_4:;
/* 1803dcdb7: movss xmm6, dword ptr [rip + 0x42fad9] */
L_1803dcdb7_0:;
L_1803dcdb7_1:;
wr(s->r,4992,4,mr(UINT64_C(0x18080c898),4));
L_1803dcdb7_2:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803dcdb7_3:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803dcdb7_4:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803dcdb7_5:;
/* 1803dcdbf: test rcx, rcx */
L_1803dcdbf_0:;
L_1803dcdbf_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dcdbf_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcdbf_3:;
wr(s->u,26,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803dcdbf_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dcdbf_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803dcdbf_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803dcdbf_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dcdbf_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dcdbf_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dcdbf_10:;
/* 1803dcdc2: je 0x1803dcdcc */
L_1803dcdc2_0:;
L_1803dcdc2_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dcdcc);}
L_1803dcdc2_2:;
return UINT64_C(0x1803dcdc4);
}
uint64_t b_1803dcdc4(CPU*s){
/* 1803dcdc4: movaps xmm1, xmm6 */
L_1803dcdc4_0:;
L_1803dcdc4_1:;
wr(s->r,4672,4,rd(s->r,4992,4));
L_1803dcdc4_2:;
wr(s->r,4676,4,rd(s->r,4996,4));
L_1803dcdc4_3:;
wr(s->r,4680,4,rd(s->r,5000,4));
L_1803dcdc4_4:;
wr(s->r,4684,4,rd(s->r,5004,4));
L_1803dcdc4_5:;
/* 1803dcdc7: call 0x1803e2060 */
L_1803dcdc7_0:;
L_1803dcdc7_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcdc7_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dcdcc)));
L_1803dcdc7_3:;
return (uint64_t)UINT64_C(0x1803e2060);
L_1803dcdc7_4:;
return UINT64_C(0x1803dcdcc);
}
uint64_t b_1803dcdcc(CPU*s){
/* 1803dcdcc: mov rcx, qword ptr [rbx + 0x66f0] */
L_1803dcdcc_0:;
L_1803dcdcc_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f0))));
L_1803dcdcc_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dcdcc_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dcdcc_4:;
/* 1803dcdd3: movaps xmm1, xmm6 */
L_1803dcdd3_0:;
L_1803dcdd3_1:;
wr(s->r,4672,4,rd(s->r,4992,4));
L_1803dcdd3_2:;
wr(s->r,4676,4,rd(s->r,4996,4));
L_1803dcdd3_3:;
wr(s->r,4680,4,rd(s->r,5000,4));
L_1803dcdd3_4:;
wr(s->r,4684,4,rd(s->r,5004,4));
L_1803dcdd3_5:;
/* 1803dcdd6: mov rax, qword ptr [rcx] */
L_1803dcdd6_0:;
L_1803dcdd6_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dcdd6_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dcdd6_3:;
/* 1803dcdd9: call qword ptr [rax + 0x58] */
L_1803dcdd9_0:;
L_1803dcdd9_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x58))));
L_1803dcdd9_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcdd9_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803dcdd9_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcdd9_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dcddc)));
L_1803dcdd9_6:;
return (uint64_t)rd(s->u,24,8);
L_1803dcdd9_7:;
return UINT64_C(0x1803dcddc);
}
uint64_t b_1803dcddc(CPU*s){
/* 1803dcddc: cmp dword ptr [rbx + 0xc4], 0 */
L_1803dcddc_0:;
L_1803dcddc_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc4))));
L_1803dcddc_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcddc_3:;
wr(s->u,18,4,rd(s->u,8,4));
L_1803dcddc_4:;
wr(s->r,512,1,(rd(s->u,18,4)<((U)UINT64_C(0x0))));
L_1803dcddc_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),((U)UINT64_C(0x0)),4,1));
L_1803dcddc_6:;
wr(s->u,22,4,(rd(s->u,18,4)-((U)UINT64_C(0x0))));
L_1803dcddc_7:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dcddc_8:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803dcddc_9:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803dcddc_10:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803dcddc_11:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803dcddc_12:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803dcddc_13:;
/* 1803dcde3: je 0x1803dce16 */
L_1803dcde3_0:;
L_1803dcde3_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dce16);}
L_1803dcde3_2:;
return UINT64_C(0x1803dcde5);
}
uint64_t b_1803dcde5(CPU*s){
/* 1803dcde5: movaps xmm6, xmm7 */
L_1803dcde5_0:;
L_1803dcde5_1:;
wr(s->r,4992,4,rd(s->r,5056,4));
L_1803dcde5_2:;
wr(s->r,4996,4,rd(s->r,5060,4));
L_1803dcde5_3:;
wr(s->r,5000,4,rd(s->r,5064,4));
L_1803dcde5_4:;
wr(s->r,5004,4,rd(s->r,5068,4));
L_1803dcde5_5:;
/* 1803dcde8: divss xmm6, dword ptr [rbx + 0x24] */
L_1803dcde8_0:;
L_1803dcde8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803dcde8_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcde8_3:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)/fv(rd(s->u,8,4),4),4));
L_1803dcde8_4:;
/* 1803dcded: comiss xmm6, xmm7 */
L_1803dcded_0:;
L_1803dcded_1:;
wr(s->u,14,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803dcded_2:;
wr(s->u,15,1,isnan(fv(rd(s->r,5056,4),4)));
L_1803dcded_3:;
wr(s->r,514,1,((rd(s->u,14,1)!=0)||(rd(s->u,15,1)!=0)));
L_1803dcded_4:;
wr(s->u,16,1,(fv(rd(s->r,4992,4),4)==fv(rd(s->r,5056,4),4)));
L_1803dcded_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,16,1)));
L_1803dcded_6:;
wr(s->u,17,1,(fv(rd(s->r,4992,4),4)<fv(rd(s->r,5056,4),4)));
L_1803dcded_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,17,1)));
L_1803dcded_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcded_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dcded_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dcded_11:;
/* 1803dcdf0: ja 0x1803dcdf5 */
L_1803dcdf0_0:;
L_1803dcdf0_1:;
wr(s->u,12,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803dcdf0_2:;
wr(s->u,13,1,(!rd(s->u,12,1)));
L_1803dcdf0_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803dcdf5);}
L_1803dcdf0_4:;
return UINT64_C(0x1803dcdf2);
}
uint64_t b_1803dcdf2(CPU*s){
/* 1803dcdf2: movaps xmm6, xmm7 */
L_1803dcdf2_0:;
L_1803dcdf2_1:;
wr(s->r,4992,4,rd(s->r,5056,4));
L_1803dcdf2_2:;
wr(s->r,4996,4,rd(s->r,5060,4));
L_1803dcdf2_3:;
wr(s->r,5000,4,rd(s->r,5064,4));
L_1803dcdf2_4:;
wr(s->r,5004,4,rd(s->r,5068,4));
L_1803dcdf2_5:;
/* 1803dcdf5: mov rax, qword ptr [rbx] */
L_1803dcdf5_0:;
L_1803dcdf5_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803dcdf5_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803dcdf5_3:;
/* 1803dcdf8: mov rcx, rbx */
L_1803dcdf8_0:;
L_1803dcdf8_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dcdf8_2:;
/* 1803dcdfb: call qword ptr [rax + 0x48] */
L_1803dcdfb_0:;
L_1803dcdfb_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x48))));
L_1803dcdfb_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcdfb_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803dcdfb_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcdfb_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dcdfe)));
L_1803dcdfb_6:;
return (uint64_t)rd(s->u,16,8);
L_1803dcdfb_7:;
return UINT64_C(0x1803dcdfe);
}
uint64_t b_1803dcdf5(CPU*s){
/* 1803dcdf5: mov rax, qword ptr [rbx] */
L_1803dcdf5_0:;
L_1803dcdf5_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803dcdf5_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803dcdf5_3:;
/* 1803dcdf8: mov rcx, rbx */
L_1803dcdf8_0:;
L_1803dcdf8_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dcdf8_2:;
/* 1803dcdfb: call qword ptr [rax + 0x48] */
L_1803dcdfb_0:;
L_1803dcdfb_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x48))));
L_1803dcdfb_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcdfb_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803dcdfb_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcdfb_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dcdfe)));
L_1803dcdfb_6:;
return (uint64_t)rd(s->u,16,8);
L_1803dcdfb_7:;
return UINT64_C(0x1803dcdfe);
}
uint64_t b_1803dcdfe(CPU*s){
/* 1803dcdfe: mov ecx, dword ptr [rbx + 0x3c] */
L_1803dcdfe_0:;
L_1803dcdfe_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803dcdfe_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcdfe_3:;
wr(s->r,8,4,rd(s->u,52,4));
L_1803dcdfe_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dcdfe_5:;
/* 1803dce01: lea eax, [rax + rcx*2] */
L_1803dce01_0:;
L_1803dce01_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x2))));
L_1803dce01_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803dce01_3:;
wr(s->r,0,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dce01_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dce01_5:;
/* 1803dce04: movd xmm0, eax */
L_1803dce04_0:;
L_1803dce04_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803dce04_2:;
/* 1803dce08: cvtdq2ps xmm0, xmm0 */
L_1803dce08_0:;
L_1803dce08_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dce08_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dce08_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dce08_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dce08_5:;
/* 1803dce0b: mulss xmm0, xmm6 */
L_1803dce0b_0:;
L_1803dce0b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803dce0b_2:;
/* 1803dce0f: cvttss2si eax, xmm0 */
L_1803dce0f_0:;
L_1803dce0f_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803dce0f_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dce0f_3:;
/* 1803dce13: mov dword ptr [rbx + 0x74], eax */
L_1803dce13_0:;
L_1803dce13_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x74))));
L_1803dce13_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dce13_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803dce13_4:;
/* 1803dce16: xor eax, eax */
L_1803dce16_0:;
L_1803dce16_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dce16_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dce16_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dce16_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dce16_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dce16_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dce16_7:;
wr(s->u,64,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dce16_8:;
wr(s->u,72,1,pop(rd(s->u,64,4),4));
L_1803dce16_9:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dce16_10:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dce16_11:;
/* 1803dce18: movaps xmm7, xmmword ptr [rsp + 0x30] */
L_1803dce18_0:;
L_1803dce18_1:;
wr(s->u,24,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dce18_2:;
wr(s->u,36,16,mr((uint64_t)rd(s->u,24,8),16));
L_1803dce18_3:;
wr(s->u,82,16,rd(s->u,36,16));
L_1803dce18_4:;
wr(s->r,5056,4,rd(s->u,82,4));
L_1803dce18_5:;
wr(s->r,5060,4,rd(s->u,86,4));
L_1803dce18_6:;
wr(s->r,5064,4,rd(s->u,90,4));
L_1803dce18_7:;
wr(s->r,5068,4,rd(s->u,94,4));
L_1803dce18_8:;
/* 1803dce1d: movaps xmm8, xmmword ptr [rsp + 0x20] */
L_1803dce1d_0:;
L_1803dce1d_1:;
wr(s->u,24,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dce1d_2:;
wr(s->u,36,16,mr((uint64_t)rd(s->u,24,8),16));
L_1803dce1d_3:;
wr(s->u,82,16,rd(s->u,36,16));
L_1803dce1d_4:;
wr(s->r,5120,4,rd(s->u,82,4));
L_1803dce1d_5:;
wr(s->r,5124,4,rd(s->u,86,4));
L_1803dce1d_6:;
wr(s->r,5128,4,rd(s->u,90,4));
L_1803dce1d_7:;
wr(s->r,5132,4,rd(s->u,94,4));
L_1803dce1d_8:;
/* 1803dce23: mov rbx, qword ptr [rsp + 0x68] */
L_1803dce23_0:;
L_1803dce23_1:;
wr(s->u,24,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803dce23_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dce23_3:;
wr(s->r,24,8,rd(s->u,56,8));
L_1803dce23_4:;
/* 1803dce28: mov rsi, qword ptr [rsp + 0x70] */
L_1803dce28_0:;
L_1803dce28_1:;
wr(s->u,24,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803dce28_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dce28_3:;
wr(s->r,48,8,rd(s->u,56,8));
L_1803dce28_4:;
/* 1803dce2d: movaps xmm6, xmmword ptr [rsp + 0x40] */
L_1803dce2d_0:;
L_1803dce2d_1:;
wr(s->u,24,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dce2d_2:;
wr(s->u,36,16,mr((uint64_t)rd(s->u,24,8),16));
L_1803dce2d_3:;
wr(s->u,82,16,rd(s->u,36,16));
L_1803dce2d_4:;
wr(s->r,4992,4,rd(s->u,82,4));
L_1803dce2d_5:;
wr(s->r,4996,4,rd(s->u,86,4));
L_1803dce2d_6:;
wr(s->r,5000,4,rd(s->u,90,4));
L_1803dce2d_7:;
wr(s->r,5004,4,rd(s->u,94,4));
L_1803dce2d_8:;
/* 1803dce32: add rsp, 0x50 */
L_1803dce32_0:;
L_1803dce32_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dce32_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803dce32_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803dce32_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dce32_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dce32_6:;
wr(s->u,64,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dce32_7:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803dce32_8:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dce32_9:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dce32_10:;
/* 1803dce36: pop rdi */
L_1803dce36_0:;
L_1803dce36_1:;
wr(s->u,74,8,((U)UINT64_C(0x0)));
L_1803dce36_2:;
wr(s->u,74,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dce36_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dce36_4:;
wr(s->r,56,8,rd(s->u,74,8));
L_1803dce36_5:;
/* 1803dce37: ret  */
L_1803dce37_0:;
L_1803dce37_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dce37_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dce37_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dce37_4:;
return UINT64_C(0x1803dce38);
}
uint64_t b_1803dce16(CPU*s){
/* 1803dce16: xor eax, eax */
L_1803dce16_0:;
L_1803dce16_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dce16_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dce16_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dce16_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dce16_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dce16_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dce16_7:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dce16_8:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803dce16_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803dce16_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803dce16_11:;
/* 1803dce18: movaps xmm7, xmmword ptr [rsp + 0x30] */
L_1803dce18_0:;
L_1803dce18_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dce18_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dce18_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803dce18_4:;
wr(s->r,5056,4,rd(s->u,50,4));
L_1803dce18_5:;
wr(s->r,5060,4,rd(s->u,54,4));
L_1803dce18_6:;
wr(s->r,5064,4,rd(s->u,58,4));
L_1803dce18_7:;
wr(s->r,5068,4,rd(s->u,62,4));
L_1803dce18_8:;
/* 1803dce1d: movaps xmm8, xmmword ptr [rsp + 0x20] */
L_1803dce1d_0:;
L_1803dce1d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dce1d_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dce1d_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803dce1d_4:;
wr(s->r,5120,4,rd(s->u,50,4));
L_1803dce1d_5:;
wr(s->r,5124,4,rd(s->u,54,4));
L_1803dce1d_6:;
wr(s->r,5128,4,rd(s->u,58,4));
L_1803dce1d_7:;
wr(s->r,5132,4,rd(s->u,62,4));
L_1803dce1d_8:;
/* 1803dce23: mov rbx, qword ptr [rsp + 0x68] */
L_1803dce23_0:;
L_1803dce23_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803dce23_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dce23_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803dce23_4:;
/* 1803dce28: mov rsi, qword ptr [rsp + 0x70] */
L_1803dce28_0:;
L_1803dce28_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803dce28_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dce28_3:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803dce28_4:;
/* 1803dce2d: movaps xmm6, xmmword ptr [rsp + 0x40] */
L_1803dce2d_0:;
L_1803dce2d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dce2d_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dce2d_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803dce2d_4:;
wr(s->r,4992,4,rd(s->u,50,4));
L_1803dce2d_5:;
wr(s->r,4996,4,rd(s->u,54,4));
L_1803dce2d_6:;
wr(s->r,5000,4,rd(s->u,58,4));
L_1803dce2d_7:;
wr(s->r,5004,4,rd(s->u,62,4));
L_1803dce2d_8:;
/* 1803dce32: add rsp, 0x50 */
L_1803dce32_0:;
L_1803dce32_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dce32_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803dce32_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803dce32_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dce32_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dce32_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dce32_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803dce32_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803dce32_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803dce32_10:;
/* 1803dce36: pop rdi */
L_1803dce36_0:;
L_1803dce36_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803dce36_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dce36_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dce36_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803dce36_5:;
/* 1803dce37: ret  */
L_1803dce37_0:;
L_1803dce37_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dce37_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dce37_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dce37_4:;
return UINT64_C(0x1803dce38);
}
uint64_t b_1803dce18(CPU*s){
/* 1803dce18: movaps xmm7, xmmword ptr [rsp + 0x30] */
L_1803dce18_0:;
L_1803dce18_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dce18_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dce18_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803dce18_4:;
wr(s->r,5056,4,rd(s->u,50,4));
L_1803dce18_5:;
wr(s->r,5060,4,rd(s->u,54,4));
L_1803dce18_6:;
wr(s->r,5064,4,rd(s->u,58,4));
L_1803dce18_7:;
wr(s->r,5068,4,rd(s->u,62,4));
L_1803dce18_8:;
/* 1803dce1d: movaps xmm8, xmmword ptr [rsp + 0x20] */
L_1803dce1d_0:;
L_1803dce1d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dce1d_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dce1d_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803dce1d_4:;
wr(s->r,5120,4,rd(s->u,50,4));
L_1803dce1d_5:;
wr(s->r,5124,4,rd(s->u,54,4));
L_1803dce1d_6:;
wr(s->r,5128,4,rd(s->u,58,4));
L_1803dce1d_7:;
wr(s->r,5132,4,rd(s->u,62,4));
L_1803dce1d_8:;
/* 1803dce23: mov rbx, qword ptr [rsp + 0x68] */
L_1803dce23_0:;
L_1803dce23_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803dce23_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dce23_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803dce23_4:;
/* 1803dce28: mov rsi, qword ptr [rsp + 0x70] */
L_1803dce28_0:;
L_1803dce28_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803dce28_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dce28_3:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803dce28_4:;
/* 1803dce2d: movaps xmm6, xmmword ptr [rsp + 0x40] */
L_1803dce2d_0:;
L_1803dce2d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dce2d_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dce2d_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803dce2d_4:;
wr(s->r,4992,4,rd(s->u,50,4));
L_1803dce2d_5:;
wr(s->r,4996,4,rd(s->u,54,4));
L_1803dce2d_6:;
wr(s->r,5000,4,rd(s->u,58,4));
L_1803dce2d_7:;
wr(s->r,5004,4,rd(s->u,62,4));
L_1803dce2d_8:;
/* 1803dce32: add rsp, 0x50 */
L_1803dce32_0:;
L_1803dce32_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dce32_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803dce32_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803dce32_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dce32_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dce32_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dce32_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803dce32_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803dce32_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803dce32_10:;
/* 1803dce36: pop rdi */
L_1803dce36_0:;
L_1803dce36_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803dce36_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dce36_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dce36_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803dce36_5:;
/* 1803dce37: ret  */
L_1803dce37_0:;
L_1803dce37_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dce37_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dce37_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dce37_4:;
return UINT64_C(0x1803dce38);
}
uint64_t b_1803dce23(CPU*s){
/* 1803dce23: mov rbx, qword ptr [rsp + 0x68] */
L_1803dce23_0:;
L_1803dce23_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803dce23_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dce23_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803dce23_4:;
/* 1803dce28: mov rsi, qword ptr [rsp + 0x70] */
L_1803dce28_0:;
L_1803dce28_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803dce28_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dce28_3:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803dce28_4:;
/* 1803dce2d: movaps xmm6, xmmword ptr [rsp + 0x40] */
L_1803dce2d_0:;
L_1803dce2d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dce2d_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dce2d_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803dce2d_4:;
wr(s->r,4992,4,rd(s->u,50,4));
L_1803dce2d_5:;
wr(s->r,4996,4,rd(s->u,54,4));
L_1803dce2d_6:;
wr(s->r,5000,4,rd(s->u,58,4));
L_1803dce2d_7:;
wr(s->r,5004,4,rd(s->u,62,4));
L_1803dce2d_8:;
/* 1803dce32: add rsp, 0x50 */
L_1803dce32_0:;
L_1803dce32_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dce32_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803dce32_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803dce32_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dce32_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dce32_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dce32_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803dce32_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803dce32_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803dce32_10:;
/* 1803dce36: pop rdi */
L_1803dce36_0:;
L_1803dce36_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803dce36_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dce36_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dce36_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803dce36_5:;
/* 1803dce37: ret  */
L_1803dce37_0:;
L_1803dce37_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dce37_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dce37_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dce37_4:;
return UINT64_C(0x1803dce38);
}
uint64_t b_1803dce40(CPU*s){
/* 1803dce40: push rbx */
L_1803dce40_0:;
L_1803dce40_1:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803dce40_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dce40_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803dce40_4:;
/* 1803dce42: sub rsp, 0x20 */
L_1803dce42_0:;
L_1803dce42_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803dce42_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803dce42_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803dce42_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dce42_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dce42_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dce42_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803dce42_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dce42_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dce42_10:;
/* 1803dce46: mov rbx, rcx */
L_1803dce46_0:;
L_1803dce46_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803dce46_2:;
/* 1803dce49: mov rcx, qword ptr [rcx + 0x6718] */
L_1803dce49_0:;
L_1803dce49_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x6718))));
L_1803dce49_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dce49_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dce49_4:;
/* 1803dce50: test rcx, rcx */
L_1803dce50_0:;
L_1803dce50_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dce50_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dce50_3:;
wr(s->u,34,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803dce50_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dce50_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803dce50_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803dce50_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803dce50_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dce50_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dce50_10:;
/* 1803dce53: je 0x1803dce5a */
L_1803dce53_0:;
L_1803dce53_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dce5a);}
L_1803dce53_2:;
return UINT64_C(0x1803dce55);
}
uint64_t b_1803dce55(CPU*s){
/* 1803dce55: call 0x1803e2730 */
L_1803dce55_0:;
L_1803dce55_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dce55_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dce5a)));
L_1803dce55_3:;
return (uint64_t)UINT64_C(0x1803e2730);
L_1803dce55_4:;
return UINT64_C(0x1803dce5a);
}
uint64_t b_1803dce5a(CPU*s){
/* 1803dce5a: mov rcx, qword ptr [rbx + 0x66f0] */
L_1803dce5a_0:;
L_1803dce5a_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f0))));
L_1803dce5a_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dce5a_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dce5a_4:;
/* 1803dce61: mov rax, qword ptr [rcx] */
L_1803dce61_0:;
L_1803dce61_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dce61_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dce61_3:;
/* 1803dce64: call qword ptr [rax + 0x38] */
L_1803dce64_0:;
L_1803dce64_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x38))));
L_1803dce64_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dce64_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803dce64_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dce64_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dce67)));
L_1803dce64_6:;
return (uint64_t)rd(s->u,24,8);
L_1803dce64_7:;
return UINT64_C(0x1803dce67);
}
uint64_t b_1803dce67(CPU*s){
/* 1803dce67: mov rcx, qword ptr [rbx + 0x66f8] */
L_1803dce67_0:;
L_1803dce67_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f8))));
L_1803dce67_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dce67_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dce67_4:;
/* 1803dce6e: mov rax, qword ptr [rcx] */
L_1803dce6e_0:;
L_1803dce6e_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dce6e_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dce6e_3:;
/* 1803dce71: call qword ptr [rax + 8] */
L_1803dce71_0:;
L_1803dce71_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803dce71_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dce71_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803dce71_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dce71_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dce74)));
L_1803dce71_6:;
return (uint64_t)rd(s->u,24,8);
L_1803dce71_7:;
return UINT64_C(0x1803dce74);
}
uint64_t b_1803dce74(CPU*s){
/* 1803dce74: mov rcx, qword ptr [rbx + 0x6700] */
L_1803dce74_0:;
L_1803dce74_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6700))));
L_1803dce74_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dce74_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dce74_4:;
/* 1803dce7b: test rcx, rcx */
L_1803dce7b_0:;
L_1803dce7b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dce7b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dce7b_3:;
wr(s->u,26,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803dce7b_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dce7b_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803dce7b_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803dce7b_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dce7b_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dce7b_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dce7b_10:;
/* 1803dce7e: je 0x1803dce86 */
L_1803dce7e_0:;
L_1803dce7e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dce86);}
L_1803dce7e_2:;
return UINT64_C(0x1803dce80);
}
uint64_t b_1803dce80(CPU*s){
/* 1803dce80: mov rax, qword ptr [rcx] */
L_1803dce80_0:;
L_1803dce80_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dce80_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803dce80_3:;
/* 1803dce83: call qword ptr [rax + 8] */
L_1803dce83_0:;
L_1803dce83_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803dce83_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dce83_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803dce83_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dce83_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dce86)));
L_1803dce83_6:;
return (uint64_t)rd(s->u,16,8);
L_1803dce83_7:;
return UINT64_C(0x1803dce86);
}
uint64_t b_1803dce86(CPU*s){
/* 1803dce86: mov rcx, qword ptr [rbx + 0x6708] */
L_1803dce86_0:;
L_1803dce86_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6708))));
L_1803dce86_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dce86_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dce86_4:;
/* 1803dce8d: test rcx, rcx */
L_1803dce8d_0:;
L_1803dce8d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dce8d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dce8d_3:;
wr(s->u,26,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803dce8d_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dce8d_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803dce8d_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803dce8d_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dce8d_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dce8d_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dce8d_10:;
/* 1803dce90: je 0x1803dce98 */
L_1803dce90_0:;
L_1803dce90_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dce98);}
L_1803dce90_2:;
return UINT64_C(0x1803dce92);
}
uint64_t b_1803dce92(CPU*s){
/* 1803dce92: mov rax, qword ptr [rcx] */
L_1803dce92_0:;
L_1803dce92_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dce92_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803dce92_3:;
/* 1803dce95: call qword ptr [rax + 0x10] */
L_1803dce95_0:;
L_1803dce95_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803dce95_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dce95_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803dce95_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dce95_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dce98)));
L_1803dce95_6:;
return (uint64_t)rd(s->u,16,8);
L_1803dce95_7:;
return UINT64_C(0x1803dce98);
}
uint64_t b_1803dce98(CPU*s){
/* 1803dce98: mov rcx, qword ptr [rbx + 0x6710] */
L_1803dce98_0:;
L_1803dce98_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6710))));
L_1803dce98_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dce98_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dce98_4:;
/* 1803dce9f: call 0x1803e1b70 */
L_1803dce9f_0:;
L_1803dce9f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dce9f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dcea4)));
L_1803dce9f_3:;
return (uint64_t)UINT64_C(0x1803e1b70);
L_1803dce9f_4:;
return UINT64_C(0x1803dcea4);
}
uint64_t b_1803dcea4(CPU*s){
/* 1803dcea4: mov r11d, dword ptr [rbx + 0x3c] */
L_1803dcea4_0:;
L_1803dcea4_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803dcea4_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcea4_3:;
wr(s->r,152,4,rd(s->u,36,4));
L_1803dcea4_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dcea4_5:;
/* 1803dcea8: xor ecx, ecx */
L_1803dcea8_0:;
L_1803dcea8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dcea8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcea8_3:;
wr(s->r,8,4,(rd(s->r,8,4)^rd(s->r,8,4)));
L_1803dcea8_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dcea8_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dcea8_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dcea8_7:;
wr(s->u,40,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dcea8_8:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803dcea8_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803dcea8_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803dcea8_11:;
/* 1803dceaa: lea eax, [r11*4] */
L_1803dceaa_0:;
L_1803dceaa_1:;
wr(s->u,16,8,(rd(s->r,152,8)*((U)UINT64_C(0x4))));
L_1803dceaa_2:;
wr(s->r,0,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dceaa_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dceaa_4:;
/* 1803dceb2: mov dword ptr [rbx + 0xbc], ecx */
L_1803dceb2_0:;
L_1803dceb2_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xbc))));
L_1803dceb2_2:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803dceb2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803dceb2_4:;
/* 1803dceb8: mov dword ptr [rbx + 0xc0], ecx */
L_1803dceb8_0:;
L_1803dceb8_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xc0))));
L_1803dceb8_2:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803dceb8_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803dceb8_4:;
/* 1803dcebe: movd xmm0, r11d */
L_1803dcebe_0:;
L_1803dcebe_1:;
wr(s->r,4608,16,rd(s->r,152,4));
L_1803dcebe_2:;
/* 1803dcec3: cvtdq2ps xmm0, xmm0 */
L_1803dcec3_0:;
L_1803dcec3_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dcec3_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dcec3_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dcec3_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dcec3_5:;
/* 1803dcec6: mov dword ptr [rbx + 0x74], eax */
L_1803dcec6_0:;
L_1803dcec6_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x74))));
L_1803dcec6_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803dcec6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dcec6_4:;
/* 1803dcec9: mov dword ptr [rbx + 0xc8], ecx */
L_1803dcec9_0:;
L_1803dcec9_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xc8))));
L_1803dcec9_2:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803dcec9_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803dcec9_4:;
/* 1803dcecf: mulss xmm0, dword ptr [rip + 0x42f9c5] */
L_1803dcecf_0:;
L_1803dcecf_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(mr(UINT64_C(0x18080c89c),4),4),4));
L_1803dcecf_2:;
/* 1803dced7: mov dword ptr [rbx + 0xc4], 1 */
L_1803dced7_0:;
L_1803dced7_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xc4))));
L_1803dced7_2:;
wr(s->u,24,4,((U)UINT64_C(0x1)));
L_1803dced7_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803dced7_4:;
/* 1803dcee1: mov dword ptr [rbx + 0x4c], ecx */
L_1803dcee1_0:;
L_1803dcee1_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x4c))));
L_1803dcee1_2:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803dcee1_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dcee1_4:;
/* 1803dcee4: mov dword ptr [rbx + 0x50], ecx */
L_1803dcee4_0:;
L_1803dcee4_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x50))));
L_1803dcee4_2:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803dcee4_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dcee4_4:;
/* 1803dcee7: addss xmm0, dword ptr [rip + 0x275275] */
L_1803dcee7_0:;
L_1803dcee7_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(mr(UINT64_C(0x180652164),4),4),4));
L_1803dcee7_2:;
/* 1803dceef: mulss xmm0, dword ptr [rip + 0x27527d] */
L_1803dceef_0:;
L_1803dceef_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(mr(UINT64_C(0x180652174),4),4),4));
L_1803dceef_2:;
/* 1803dcef7: mov qword ptr [rbx + 0xd0], rcx */
L_1803dcef7_0:;
L_1803dcef7_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xd0))));
L_1803dcef7_2:;
wr(s->u,28,8,rd(s->r,8,8));
L_1803dcef7_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803dcef7_4:;
/* 1803dcefe: mov qword ptr [rbx + 0xd8], rcx */
L_1803dcefe_0:;
L_1803dcefe_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xd8))));
L_1803dcefe_2:;
wr(s->u,28,8,rd(s->r,8,8));
L_1803dcefe_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803dcefe_4:;
/* 1803dcf05: cvttss2si eax, xmm0 */
L_1803dcf05_0:;
L_1803dcf05_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803dcf05_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dcf05_3:;
/* 1803dcf09: mov dword ptr [rbx + 0x48], ecx */
L_1803dcf09_0:;
L_1803dcf09_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803dcf09_2:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803dcf09_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dcf09_4:;
/* 1803dcf0c: mov dword ptr [rbx + 0x64], ecx */
L_1803dcf0c_0:;
L_1803dcf0c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x64))));
L_1803dcf0c_2:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803dcf0c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dcf0c_4:;
/* 1803dcf0f: mov dword ptr [rbx + 0x68], ecx */
L_1803dcf0f_0:;
L_1803dcf0f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x68))));
L_1803dcf0f_2:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803dcf0f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dcf0f_4:;
/* 1803dcf12: mov dword ptr [rbx + 0x80], eax */
L_1803dcf12_0:;
L_1803dcf12_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x80))));
L_1803dcf12_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803dcf12_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803dcf12_4:;
/* 1803dcf18: mov dword ptr [rbx + 0x8c], ecx */
L_1803dcf18_0:;
L_1803dcf18_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x8c))));
L_1803dcf18_2:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803dcf18_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803dcf18_4:;
/* 1803dcf1e: mov dword ptr [rbx + 0x84], ecx */
L_1803dcf1e_0:;
L_1803dcf1e_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x84))));
L_1803dcf1e_2:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803dcf1e_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803dcf1e_4:;
/* 1803dcf24: mov dword ptr [rbx + 0x88], ecx */
L_1803dcf24_0:;
L_1803dcf24_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x88))));
L_1803dcf24_2:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803dcf24_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803dcf24_4:;
/* 1803dcf2a: mov dword ptr [rbx + 0x90], ecx */
L_1803dcf2a_0:;
L_1803dcf2a_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x90))));
L_1803dcf2a_2:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803dcf2a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803dcf2a_4:;
/* 1803dcf30: mov dword ptr [rbx + 0x1c], 0x3f800000 */
L_1803dcf30_0:;
L_1803dcf30_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x1c))));
L_1803dcf30_2:;
wr(s->u,24,4,((U)UINT64_C(0x3f800000)));
L_1803dcf30_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dcf30_4:;
/* 1803dcf37: mov dword ptr [rbx + 0x20], 0x3f800000 */
L_1803dcf37_0:;
L_1803dcf37_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803dcf37_2:;
wr(s->u,24,4,((U)UINT64_C(0x3f800000)));
L_1803dcf37_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dcf37_4:;
/* 1803dcf3e: mov dword ptr [rbx + 0x2c], 0x3f800000 */
L_1803dcf3e_0:;
L_1803dcf3e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x2c))));
L_1803dcf3e_2:;
wr(s->u,24,4,((U)UINT64_C(0x3f800000)));
L_1803dcf3e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dcf3e_4:;
/* 1803dcf45: mov dword ptr [rbx + 0x5c], 0x80 */
L_1803dcf45_0:;
L_1803dcf45_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x5c))));
L_1803dcf45_2:;
wr(s->u,24,4,((U)UINT64_C(0x80)));
L_1803dcf45_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dcf45_4:;
/* 1803dcf4c: mov qword ptr [rbx + 0x98], rcx */
L_1803dcf4c_0:;
L_1803dcf4c_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x98))));
L_1803dcf4c_2:;
wr(s->u,28,8,rd(s->r,8,8));
L_1803dcf4c_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803dcf4c_4:;
/* 1803dcf53: mov qword ptr [rbx + 0xa0], rcx */
L_1803dcf53_0:;
L_1803dcf53_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xa0))));
L_1803dcf53_2:;
wr(s->u,28,8,rd(s->r,8,8));
L_1803dcf53_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803dcf53_4:;
return UINT64_C(0x1803dcf5a);
}
uint64_t b_1803dcf5a(CPU*s){
/* 1803dcf5a: mov qword ptr [rbx + 0xa8], rcx */
L_1803dcf5a_0:;
L_1803dcf5a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xa8))));
L_1803dcf5a_2:;
wr(s->u,8,8,rd(s->r,8,8));
L_1803dcf5a_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dcf5a_4:;
/* 1803dcf61: add rsp, 0x20 */
L_1803dcf61_0:;
L_1803dcf61_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dcf61_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803dcf61_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803dcf61_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dcf61_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dcf61_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dcf61_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dcf61_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dcf61_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dcf61_10:;
/* 1803dcf65: pop rbx */
L_1803dcf65_0:;
L_1803dcf65_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803dcf65_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dcf65_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dcf65_4:;
wr(s->r,24,8,rd(s->u,26,8));
L_1803dcf65_5:;
/* 1803dcf66: ret  */
L_1803dcf66_0:;
L_1803dcf66_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dcf66_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dcf66_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dcf66_4:;
return UINT64_C(0x1803dcf67);
}
uint64_t b_1803dcf70(CPU*s){
/* 1803dcf70: mov rcx, qword ptr [rcx + 0x66f0] */
L_1803dcf70_0:;
L_1803dcf70_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x66f0))));
L_1803dcf70_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dcf70_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dcf70_4:;
/* 1803dcf77: mov rax, qword ptr [rcx] */
L_1803dcf77_0:;
L_1803dcf77_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dcf77_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dcf77_3:;
/* 1803dcf7a: jmp qword ptr [rax + 0x50] */
L_1803dcf7a_0:;
L_1803dcf7a_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x50))));
L_1803dcf7a_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dcf7a_3:;
return (uint64_t)rd(s->u,16,8);
L_1803dcf7a_4:;
return UINT64_C(0x1803dcf7e);
}
uint64_t b_1803dcf80(CPU*s){
/* 1803dcf80: movsd xmm0, qword ptr [rcx + 0xa8] */
L_1803dcf80_0:;
L_1803dcf80_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0xa8))));
L_1803dcf80_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dcf80_3:;
wr(s->r,4608,8,rd(s->u,16,8));
L_1803dcf80_4:;
wr(s->r,4616,8,((U)UINT64_C(0x0)));
L_1803dcf80_5:;
/* 1803dcf88: mov eax, dword ptr [rcx + 0x3c] */
L_1803dcf88_0:;
L_1803dcf88_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x3c))));
L_1803dcf88_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcf88_3:;
wr(s->r,0,4,rd(s->u,24,4));
L_1803dcf88_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dcf88_5:;
/* 1803dcf8b: subsd xmm0, qword ptr [rcx + 0x98] */
L_1803dcf8b_0:;
L_1803dcf8b_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x98))));
L_1803dcf8b_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dcf8b_3:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)-fv(rd(s->u,16,8),8),8));
L_1803dcf8b_4:;
/* 1803dcf93: add eax, eax */
L_1803dcf93_0:;
L_1803dcf93_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803dcf93_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,0,4),4,0));
L_1803dcf93_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,0,4)));
L_1803dcf93_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dcf93_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dcf93_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dcf93_7:;
wr(s->u,29,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dcf93_8:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803dcf93_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803dcf93_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803dcf93_11:;
/* 1803dcf95: ucomisd xmm0, qword ptr [rip + 0x271fe3] */
L_1803dcf95_0:;
L_1803dcf95_1:;
wr(s->u,35,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803dcf95_2:;
wr(s->u,36,1,isnan(fv(mr(UINT64_C(0x18064ef80),8),8)));
L_1803dcf95_3:;
wr(s->r,514,1,((rd(s->u,35,1)!=0)||(rd(s->u,36,1)!=0)));
L_1803dcf95_4:;
wr(s->u,37,1,(fv(rd(s->r,4608,8),8)==fv(mr(UINT64_C(0x18064ef80),8),8)));
L_1803dcf95_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,37,1)));
L_1803dcf95_6:;
wr(s->u,38,1,(fv(rd(s->r,4608,8),8)<fv(mr(UINT64_C(0x18064ef80),8),8)));
L_1803dcf95_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,38,1)));
L_1803dcf95_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcf95_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dcf95_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dcf95_11:;
/* 1803dcf9d: jne 0x1803dcfaf */
L_1803dcf9d_0:;
L_1803dcf9d_1:;
wr(s->u,28,1,(!rd(s->r,518,1)));
L_1803dcf9d_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803dcfaf);}
L_1803dcf9d_3:;
return UINT64_C(0x1803dcf9f);
}
uint64_t b_1803dcf9f(CPU*s){
/* 1803dcf9f: movd xmm0, eax */
L_1803dcf9f_0:;
L_1803dcf9f_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803dcf9f_2:;
/* 1803dcfa3: cvtdq2ps xmm0, xmm0 */
L_1803dcfa3_0:;
L_1803dcfa3_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dcfa3_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dcfa3_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dcfa3_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dcfa3_5:;
/* 1803dcfa6: divss xmm0, dword ptr [rcx + 0x24] */
L_1803dcfa6_0:;
L_1803dcfa6_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x24))));
L_1803dcfa6_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcfa6_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->u,8,4),4),4));
L_1803dcfa6_4:;
/* 1803dcfab: cvttss2si eax, xmm0 */
L_1803dcfab_0:;
L_1803dcfab_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803dcfab_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dcfab_3:;
/* 1803dcfaf: repz ret  */
L_1803dcfaf_0:;
L_1803dcfaf_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dcfaf_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dcfaf_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dcfaf_4:;
return UINT64_C(0x1803dcfb1);
}
uint64_t b_1803dcfaf(CPU*s){
/* 1803dcfaf: repz ret  */
L_1803dcfaf_0:;
L_1803dcfaf_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dcfaf_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dcfaf_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dcfaf_4:;
return UINT64_C(0x1803dcfb1);
}
uint64_t b_1803dcfc0(CPU*s){
/* 1803dcfc0: push rbx */
L_1803dcfc0_0:;
L_1803dcfc0_1:;
wr(s->u,28,8,rd(s->r,24,8));
L_1803dcfc0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcfc0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,28,8));
L_1803dcfc0_4:;
/* 1803dcfc2: sub rsp, 0x20 */
L_1803dcfc2_0:;
L_1803dcfc2_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803dcfc2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803dcfc2_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803dcfc2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dcfc2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dcfc2_6:;
wr(s->u,36,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dcfc2_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803dcfc2_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803dcfc2_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803dcfc2_10:;
/* 1803dcfc6: movss dword ptr [rcx + 0x2c], xmm1 */
L_1803dcfc6_0:;
L_1803dcfc6_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x2c))));
L_1803dcfc6_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803dcfc6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dcfc6_4:;
/* 1803dcfcb: mov rbx, rcx */
L_1803dcfcb_0:;
L_1803dcfcb_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803dcfcb_2:;
/* 1803dcfce: mov rcx, qword ptr [rcx + 0x6718] */
L_1803dcfce_0:;
L_1803dcfce_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x6718))));
L_1803dcfce_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dcfce_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dcfce_4:;
/* 1803dcfd5: call 0x1803e2840 */
L_1803dcfd5_0:;
L_1803dcfd5_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcfd5_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dcfda)));
L_1803dcfd5_3:;
return (uint64_t)UINT64_C(0x1803e2840);
L_1803dcfd5_4:;
return UINT64_C(0x1803dcfda);
}
uint64_t b_1803dcfda(CPU*s){
/* 1803dcfda: mov rcx, qword ptr [rbx + 0x6718] */
L_1803dcfda_0:;
L_1803dcfda_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x6718))));
L_1803dcfda_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dcfda_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dcfda_4:;
/* 1803dcfe1: movss xmm5, dword ptr [rbx + 0x2c] */
L_1803dcfe1_0:;
L_1803dcfe1_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x2c))));
L_1803dcfe1_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcfe1_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803dcfe1_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803dcfe1_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803dcfe1_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803dcfe1_7:;
/* 1803dcfe6: comiss xmm5, dword ptr [rip + 0x26fc57] */
L_1803dcfe6_0:;
L_1803dcfe6_1:;
wr(s->u,29,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803dcfe6_2:;
wr(s->u,30,1,isnan(fv(mr(UINT64_C(0x18064cc44),4),4)));
L_1803dcfe6_3:;
wr(s->r,514,1,((rd(s->u,29,1)!=0)||(rd(s->u,30,1)!=0)));
L_1803dcfe6_4:;
wr(s->u,31,1,(fv(rd(s->r,4928,4),4)==fv(mr(UINT64_C(0x18064cc44),4),4)));
L_1803dcfe6_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,31,1)));
L_1803dcfe6_6:;
wr(s->u,32,1,(fv(rd(s->r,4928,4),4)<fv(mr(UINT64_C(0x18064cc44),4),4)));
L_1803dcfe6_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,32,1)));
L_1803dcfe6_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dcfe6_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dcfe6_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dcfe6_11:;
/* 1803dcfed: jbe 0x1803dd00c */
L_1803dcfed_0:;
L_1803dcfed_1:;
wr(s->u,28,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803dcfed_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803dd00c);}
L_1803dcfed_3:;
return UINT64_C(0x1803dcfef);
}
uint64_t b_1803dcfef(CPU*s){
/* 1803dcfef: movd xmm0, dword ptr [rbx + 0x5c] */
L_1803dcfef_0:;
L_1803dcfef_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x5c))));
L_1803dcfef_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dcfef_3:;
wr(s->r,4608,16,rd(s->u,8,4));
L_1803dcfef_4:;
/* 1803dcff4: cvtdq2ps xmm0, xmm0 */
L_1803dcff4_0:;
L_1803dcff4_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dcff4_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dcff4_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dcff4_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dcff4_5:;
/* 1803dcff7: divss xmm0, xmm5 */
L_1803dcff7_0:;
L_1803dcff7_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4928,4),4),4));
L_1803dcff7_2:;
/* 1803dcffb: cvttss2si edx, xmm0 */
L_1803dcffb_0:;
L_1803dcffb_1:;
wr(s->r,16,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803dcffb_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dcffb_3:;
/* 1803dcfff: call 0x1803e2850 */
L_1803dcfff_0:;
L_1803dcfff_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dcfff_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd004)));
L_1803dcfff_3:;
return (uint64_t)UINT64_C(0x1803e2850);
L_1803dcfff_4:;
return UINT64_C(0x1803dd004);
}
