#include "lift_runtime.h"
uint64_t b_1803ec000(CPU*s){
/* 1803ec000: mov qword ptr [rsp + 8], rbx */
L_1803ec000_0:;
L_1803ec000_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ec000_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803ec000_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803ec000_4:;
/* 1803ec005: mov qword ptr [rsp + 0x10], rsi */
L_1803ec005_0:;
L_1803ec005_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ec005_2:;
wr(s->u,16,8,rd(s->r,48,8));
L_1803ec005_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803ec005_4:;
/* 1803ec00a: push rdi */
L_1803ec00a_0:;
L_1803ec00a_1:;
wr(s->u,24,8,rd(s->r,56,8));
L_1803ec00a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec00a_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803ec00a_4:;
/* 1803ec00b: sub rsp, 0x20 */
L_1803ec00b_0:;
L_1803ec00b_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803ec00b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803ec00b_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803ec00b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec00b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec00b_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec00b_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803ec00b_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ec00b_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ec00b_10:;
/* 1803ec00f: lea rax, [rip + 0x421232] */
L_1803ec00f_0:;
L_1803ec00f_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080d248)));
L_1803ec00f_2:;
/* 1803ec016: mov rdi, rcx */
L_1803ec016_0:;
L_1803ec016_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803ec016_2:;
/* 1803ec019: add rcx, 0x20 */
L_1803ec019_0:;
L_1803ec019_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ec019_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x20)),8,0));
L_1803ec019_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x20))));
L_1803ec019_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec019_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ec019_6:;
wr(s->u,32,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ec019_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803ec019_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ec019_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ec019_10:;
/* 1803ec01d: mov qword ptr [rcx - 0x20], rax */
L_1803ec01d_0:;
L_1803ec01d_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xffffffffffffffe0))));
L_1803ec01d_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803ec01d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803ec01d_4:;
/* 1803ec021: call qword ptr [rip + 0x632139] */
L_1803ec021_0:;
L_1803ec021_1:;
wr(s->u,42,8,mr(UINT64_C(0x180a1e160),8));
L_1803ec021_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec021_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec027)));
L_1803ec021_4:;
return (uint64_t)rd(s->u,42,8);
L_1803ec021_5:;
return UINT64_C(0x1803ec027);
}
uint64_t b_1803ec027(CPU*s){
/* 1803ec027: lea rcx, [rdi + 0x28] */
L_1803ec027_0:;
L_1803ec027_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x28))));
L_1803ec027_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ec027_3:;
/* 1803ec02b: xor esi, esi */
L_1803ec02b_0:;
L_1803ec02b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec02b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec02b_3:;
wr(s->r,48,4,(rd(s->r,48,4)^rd(s->r,48,4)));
L_1803ec02b_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803ec02b_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec02b_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803ec02b_7:;
wr(s->u,16,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803ec02b_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803ec02b_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803ec02b_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803ec02b_11:;
/* 1803ec02d: mov qword ptr [rdi + 0x20], rsi */
L_1803ec02d_0:;
L_1803ec02d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x20))));
L_1803ec02d_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803ec02d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ec02d_4:;
/* 1803ec031: call qword ptr [rip + 0x632129] */
L_1803ec031_0:;
L_1803ec031_1:;
wr(s->u,22,8,mr(UINT64_C(0x180a1e160),8));
L_1803ec031_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec031_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec037)));
L_1803ec031_4:;
return (uint64_t)rd(s->u,22,8);
L_1803ec031_5:;
return UINT64_C(0x1803ec037);
}
uint64_t b_1803ec037(CPU*s){
/* 1803ec037: lea rcx, [rdi + 0x30] */
L_1803ec037_0:;
L_1803ec037_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803ec037_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ec037_3:;
/* 1803ec03b: mov qword ptr [rdi + 0x28], rsi */
L_1803ec03b_0:;
L_1803ec03b_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x28))));
L_1803ec03b_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803ec03b_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ec03b_4:;
/* 1803ec03f: call qword ptr [rip + 0x63211b] */
L_1803ec03f_0:;
L_1803ec03f_1:;
wr(s->u,16,8,mr(UINT64_C(0x180a1e160),8));
L_1803ec03f_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec03f_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec045)));
L_1803ec03f_4:;
return (uint64_t)rd(s->u,16,8);
L_1803ec03f_5:;
return UINT64_C(0x1803ec045);
}
uint64_t b_1803ec045(CPU*s){
/* 1803ec045: lea rcx, [rdi + 0x38] */
L_1803ec045_0:;
L_1803ec045_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_1803ec045_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ec045_3:;
/* 1803ec049: mov qword ptr [rdi + 0x30], rsi */
L_1803ec049_0:;
L_1803ec049_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803ec049_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803ec049_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ec049_4:;
/* 1803ec04d: call qword ptr [rip + 0x63215d] */
L_1803ec04d_0:;
L_1803ec04d_1:;
wr(s->u,16,8,mr(UINT64_C(0x180a1e1b0),8));
L_1803ec04d_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec04d_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec053)));
L_1803ec04d_4:;
return (uint64_t)rd(s->u,16,8);
L_1803ec04d_5:;
return UINT64_C(0x1803ec053);
}
uint64_t b_1803ec053(CPU*s){
/* 1803ec053: mov rbx, qword ptr [rsp + 0x30] */
L_1803ec053_0:;
L_1803ec053_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ec053_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ec053_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803ec053_4:;
/* 1803ec058: mov qword ptr [rdi + 0x38], rsi */
L_1803ec058_0:;
L_1803ec058_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x38))));
L_1803ec058_2:;
wr(s->u,16,8,rd(s->r,48,8));
L_1803ec058_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803ec058_4:;
/* 1803ec05c: mov rsi, qword ptr [rsp + 0x38] */
L_1803ec05c_0:;
L_1803ec05c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803ec05c_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ec05c_3:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803ec05c_4:;
/* 1803ec061: add rsp, 0x20 */
L_1803ec061_0:;
L_1803ec061_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ec061_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803ec061_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803ec061_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec061_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec061_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec061_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803ec061_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ec061_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ec061_10:;
/* 1803ec065: pop rdi */
L_1803ec065_0:;
L_1803ec065_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803ec065_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec065_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec065_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803ec065_5:;
/* 1803ec066: ret  */
L_1803ec066_0:;
L_1803ec066_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec066_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec066_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ec066_4:;
return UINT64_C(0x1803ec067);
}
uint64_t b_1803ec070(CPU*s){
/* 1803ec070: push rdi */
L_1803ec070_0:;
L_1803ec070_1:;
wr(s->u,24,8,rd(s->r,56,8));
L_1803ec070_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec070_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803ec070_4:;
/* 1803ec072: sub rsp, 0x30 */
L_1803ec072_0:;
L_1803ec072_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803ec072_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803ec072_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803ec072_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec072_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec072_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec072_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803ec072_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ec072_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ec072_10:;
/* 1803ec076: mov qword ptr [rsp + 0x20], 0xfffffffffffffffe */
L_1803ec076_0:;
L_1803ec076_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ec076_2:;
wr(s->u,16,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803ec076_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803ec076_4:;
/* 1803ec07f: mov qword ptr [rsp + 0x48], rbx */
L_1803ec07f_0:;
L_1803ec07f_1:;
wr(s->u,8,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803ec07f_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803ec07f_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803ec07f_4:;
/* 1803ec084: mov qword ptr [rsp + 0x50], rsi */
L_1803ec084_0:;
L_1803ec084_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ec084_2:;
wr(s->u,16,8,rd(s->r,48,8));
L_1803ec084_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803ec084_4:;
/* 1803ec089: mov esi, edx */
L_1803ec089_0:;
L_1803ec089_1:;
wr(s->r,48,4,rd(s->r,16,4));
L_1803ec089_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803ec089_3:;
/* 1803ec08b: mov rdi, rcx */
L_1803ec08b_0:;
L_1803ec08b_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803ec08b_2:;
/* 1803ec08e: xor ebx, ebx */
L_1803ec08e_0:;
L_1803ec08e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec08e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec08e_3:;
wr(s->r,24,4,(rd(s->r,24,4)^rd(s->r,24,4)));
L_1803ec08e_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803ec08e_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec08e_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803ec08e_7:;
wr(s->u,32,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803ec08e_8:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803ec08e_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ec08e_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ec08e_11:;
/* 1803ec090: mov qword ptr [rcx], rbx */
L_1803ec090_0:;
L_1803ec090_1:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803ec090_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,16,8));
L_1803ec090_3:;
/* 1803ec093: lea ecx, [rbx + 0x40] */
L_1803ec093_0:;
L_1803ec093_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x40))));
L_1803ec093_2:;
wr(s->r,8,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ec093_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ec093_4:;
/* 1803ec096: call 0x180003140 */
L_1803ec096_0:;
L_1803ec096_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec096_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec09b)));
L_1803ec096_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ec096_4:;
return UINT64_C(0x1803ec09b);
}
uint64_t b_1803ec09b(CPU*s){
/* 1803ec09b: mov qword ptr [rsp + 0x40], rax */
L_1803ec09b_0:;
L_1803ec09b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ec09b_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803ec09b_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ec09b_4:;
/* 1803ec0a0: test rax, rax */
L_1803ec0a0_0:;
L_1803ec0a0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec0a0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec0a0_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803ec0a0_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec0a0_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803ec0a0_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803ec0a0_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ec0a0_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ec0a0_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ec0a0_10:;
/* 1803ec0a3: je 0x1803ec0b1 */
L_1803ec0a3_0:;
L_1803ec0a3_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ec0b1);}
L_1803ec0a3_2:;
return UINT64_C(0x1803ec0a5);
}
uint64_t b_1803ec0a5(CPU*s){
/* 1803ec0a5: mov edx, esi */
L_1803ec0a5_0:;
L_1803ec0a5_1:;
wr(s->r,16,4,rd(s->r,48,4));
L_1803ec0a5_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ec0a5_3:;
/* 1803ec0a7: mov rcx, rax */
L_1803ec0a7_0:;
L_1803ec0a7_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ec0a7_2:;
/* 1803ec0aa: call 0x1803ebf40 */
L_1803ec0aa_0:;
L_1803ec0aa_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec0aa_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec0af)));
L_1803ec0aa_3:;
return (uint64_t)UINT64_C(0x1803ebf40);
L_1803ec0aa_4:;
return UINT64_C(0x1803ec0af);
}
uint64_t b_1803ec0af(CPU*s){
/* 1803ec0af: jmp 0x1803ec0b4 */
L_1803ec0af_0:;
L_1803ec0af_1:;
return UINT64_C(0x1803ec0b4);
L_1803ec0af_2:;
return UINT64_C(0x1803ec0b1);
}
uint64_t b_1803ec0b1(CPU*s){
/* 1803ec0b1: mov rax, rbx */
L_1803ec0b1_0:;
L_1803ec0b1_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803ec0b1_2:;
/* 1803ec0b4: mov qword ptr [rdi], rax */
L_1803ec0b4_0:;
L_1803ec0b4_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803ec0b4_2:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,8,8));
L_1803ec0b4_3:;
/* 1803ec0b7: mov ecx, 0xf4241 */
L_1803ec0b7_0:;
L_1803ec0b7_1:;
wr(s->r,8,8,((U)UINT64_C(0xf4241)));
L_1803ec0b7_2:;
/* 1803ec0bc: test rax, rax */
L_1803ec0bc_0:;
L_1803ec0bc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec0bc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec0bc_3:;
wr(s->u,47,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803ec0bc_4:;
wr(s->r,519,1,(sx(rd(s->u,47,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec0bc_5:;
wr(s->r,518,1,(rd(s->u,47,8)==((U)UINT64_C(0x0))));
L_1803ec0bc_6:;
wr(s->u,24,8,(rd(s->u,47,8)&((U)UINT64_C(0xff))));
L_1803ec0bc_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ec0bc_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ec0bc_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ec0bc_10:;
/* 1803ec0bf: cmove ebx, ecx */
L_1803ec0bf_0:;
L_1803ec0bf_1:;
wr(s->u,34,4,rd(s->r,8,4));
L_1803ec0bf_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803ec0bf_3:;
wr(s->u,38,1,(!rd(s->r,518,1)));
L_1803ec0bf_4:;
if(rd(s->u,38,1)){goto L_1803ec0c2_0;}
L_1803ec0bf_5:;
wr(s->r,24,4,rd(s->u,34,4));
L_1803ec0bf_6:;
/* 1803ec0c2: mov eax, ebx */
L_1803ec0c2_0:;
L_1803ec0c2_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803ec0c2_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec0c2_3:;
/* 1803ec0c4: mov rbx, qword ptr [rsp + 0x48] */
L_1803ec0c4_0:;
L_1803ec0c4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803ec0c4_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec0c4_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803ec0c4_4:;
/* 1803ec0c9: mov rsi, qword ptr [rsp + 0x50] */
L_1803ec0c9_0:;
L_1803ec0c9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ec0c9_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec0c9_3:;
wr(s->r,48,8,rd(s->u,16,8));
L_1803ec0c9_4:;
/* 1803ec0ce: add rsp, 0x30 */
L_1803ec0ce_0:;
L_1803ec0ce_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ec0ce_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803ec0ce_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803ec0ce_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec0ce_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec0ce_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec0ce_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ec0ce_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ec0ce_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ec0ce_10:;
/* 1803ec0d2: pop rdi */
L_1803ec0d2_0:;
L_1803ec0d2_1:;
wr(s->u,39,8,((U)UINT64_C(0x0)));
L_1803ec0d2_2:;
wr(s->u,39,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec0d2_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec0d2_4:;
wr(s->r,56,8,rd(s->u,39,8));
L_1803ec0d2_5:;
/* 1803ec0d3: ret  */
L_1803ec0d3_0:;
L_1803ec0d3_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec0d3_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec0d3_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ec0d3_4:;
return UINT64_C(0x1803ec0d4);
}
uint64_t b_1803ec0b4(CPU*s){
/* 1803ec0b4: mov qword ptr [rdi], rax */
L_1803ec0b4_0:;
L_1803ec0b4_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803ec0b4_2:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,8,8));
L_1803ec0b4_3:;
/* 1803ec0b7: mov ecx, 0xf4241 */
L_1803ec0b7_0:;
L_1803ec0b7_1:;
wr(s->r,8,8,((U)UINT64_C(0xf4241)));
L_1803ec0b7_2:;
/* 1803ec0bc: test rax, rax */
L_1803ec0bc_0:;
L_1803ec0bc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec0bc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec0bc_3:;
wr(s->u,47,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803ec0bc_4:;
wr(s->r,519,1,(sx(rd(s->u,47,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec0bc_5:;
wr(s->r,518,1,(rd(s->u,47,8)==((U)UINT64_C(0x0))));
L_1803ec0bc_6:;
wr(s->u,24,8,(rd(s->u,47,8)&((U)UINT64_C(0xff))));
L_1803ec0bc_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ec0bc_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ec0bc_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ec0bc_10:;
/* 1803ec0bf: cmove ebx, ecx */
L_1803ec0bf_0:;
L_1803ec0bf_1:;
wr(s->u,34,4,rd(s->r,8,4));
L_1803ec0bf_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803ec0bf_3:;
wr(s->u,38,1,(!rd(s->r,518,1)));
L_1803ec0bf_4:;
if(rd(s->u,38,1)){goto L_1803ec0c2_0;}
L_1803ec0bf_5:;
wr(s->r,24,4,rd(s->u,34,4));
L_1803ec0bf_6:;
/* 1803ec0c2: mov eax, ebx */
L_1803ec0c2_0:;
L_1803ec0c2_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803ec0c2_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec0c2_3:;
/* 1803ec0c4: mov rbx, qword ptr [rsp + 0x48] */
L_1803ec0c4_0:;
L_1803ec0c4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803ec0c4_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec0c4_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803ec0c4_4:;
/* 1803ec0c9: mov rsi, qword ptr [rsp + 0x50] */
L_1803ec0c9_0:;
L_1803ec0c9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ec0c9_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec0c9_3:;
wr(s->r,48,8,rd(s->u,16,8));
L_1803ec0c9_4:;
/* 1803ec0ce: add rsp, 0x30 */
L_1803ec0ce_0:;
L_1803ec0ce_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ec0ce_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803ec0ce_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803ec0ce_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec0ce_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec0ce_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec0ce_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ec0ce_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ec0ce_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ec0ce_10:;
/* 1803ec0d2: pop rdi */
L_1803ec0d2_0:;
L_1803ec0d2_1:;
wr(s->u,39,8,((U)UINT64_C(0x0)));
L_1803ec0d2_2:;
wr(s->u,39,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec0d2_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec0d2_4:;
wr(s->r,56,8,rd(s->u,39,8));
L_1803ec0d2_5:;
/* 1803ec0d3: ret  */
L_1803ec0d3_0:;
L_1803ec0d3_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec0d3_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec0d3_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ec0d3_4:;
return UINT64_C(0x1803ec0d4);
}
uint64_t b_1803ec0c2(CPU*s){
/* 1803ec0c2: mov eax, ebx */
L_1803ec0c2_0:;
L_1803ec0c2_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803ec0c2_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec0c2_3:;
/* 1803ec0c4: mov rbx, qword ptr [rsp + 0x48] */
L_1803ec0c4_0:;
L_1803ec0c4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803ec0c4_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec0c4_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ec0c4_4:;
/* 1803ec0c9: mov rsi, qword ptr [rsp + 0x50] */
L_1803ec0c9_0:;
L_1803ec0c9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ec0c9_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec0c9_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803ec0c9_4:;
/* 1803ec0ce: add rsp, 0x30 */
L_1803ec0ce_0:;
L_1803ec0ce_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ec0ce_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803ec0ce_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803ec0ce_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec0ce_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec0ce_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec0ce_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ec0ce_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ec0ce_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ec0ce_10:;
/* 1803ec0d2: pop rdi */
L_1803ec0d2_0:;
L_1803ec0d2_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ec0d2_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec0d2_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec0d2_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803ec0d2_5:;
/* 1803ec0d3: ret  */
L_1803ec0d3_0:;
L_1803ec0d3_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec0d3_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec0d3_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ec0d3_4:;
return UINT64_C(0x1803ec0d4);
}
uint64_t b_1803ec0e0(CPU*s){
/* 1803ec0e0: push rbx */
L_1803ec0e0_0:;
L_1803ec0e0_1:;
wr(s->u,9,8,rd(s->r,24,8));
L_1803ec0e0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec0e0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,9,8));
L_1803ec0e0_4:;
/* 1803ec0e2: sub rsp, 0x20 */
L_1803ec0e2_0:;
L_1803ec0e2_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803ec0e2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803ec0e2_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803ec0e2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec0e2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec0e2_6:;
wr(s->u,17,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec0e2_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803ec0e2_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803ec0e2_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ec0e2_10:;
/* 1803ec0e6: mov rbx, rcx */
L_1803ec0e6_0:;
L_1803ec0e6_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ec0e6_2:;
/* 1803ec0e9: mov rcx, qword ptr [rcx] */
L_1803ec0e9_0:;
L_1803ec0e9_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803ec0e9_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ec0e9_3:;
/* 1803ec0ec: test rcx, rcx */
L_1803ec0ec_0:;
L_1803ec0ec_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec0ec_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec0ec_3:;
wr(s->u,27,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803ec0ec_4:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec0ec_5:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803ec0ec_6:;
wr(s->u,17,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803ec0ec_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803ec0ec_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803ec0ec_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ec0ec_10:;
/* 1803ec0ef: jne 0x1803ec0fc */
L_1803ec0ef_0:;
L_1803ec0ef_1:;
wr(s->u,8,1,(!rd(s->r,518,1)));
L_1803ec0ef_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803ec0fc);}
L_1803ec0ef_3:;
return UINT64_C(0x1803ec0f1);
}
uint64_t b_1803ec0f1(CPU*s){
/* 1803ec0f1: mov eax, 0x4c4b43 */
L_1803ec0f1_0:;
L_1803ec0f1_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803ec0f1_2:;
/* 1803ec0f6: add rsp, 0x20 */
L_1803ec0f6_0:;
L_1803ec0f6_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ec0f6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803ec0f6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803ec0f6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec0f6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec0f6_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec0f6_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ec0f6_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ec0f6_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ec0f6_10:;
/* 1803ec0fa: pop rbx */
L_1803ec0fa_0:;
L_1803ec0fa_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803ec0fa_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec0fa_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec0fa_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803ec0fa_5:;
/* 1803ec0fb: ret  */
L_1803ec0fb_0:;
L_1803ec0fb_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec0fb_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec0fb_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ec0fb_4:;
return UINT64_C(0x1803ec0fc);
}
uint64_t b_1803ec0fc(CPU*s){
/* 1803ec0fc: mov rax, qword ptr [rcx] */
L_1803ec0fc_0:;
L_1803ec0fc_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803ec0fc_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803ec0fc_3:;
/* 1803ec0ff: mov edx, 1 */
L_1803ec0ff_0:;
L_1803ec0ff_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803ec0ff_2:;
/* 1803ec104: call qword ptr [rax] */
L_1803ec104_0:;
L_1803ec104_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803ec104_2:;
wr(s->u,8,8,rd(s->u,0,8));
L_1803ec104_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec104_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec106)));
L_1803ec104_5:;
return (uint64_t)rd(s->u,8,8);
L_1803ec104_6:;
return UINT64_C(0x1803ec106);
}
uint64_t b_1803ec106(CPU*s){
/* 1803ec106: mov qword ptr [rbx], 0 */
L_1803ec106_0:;
L_1803ec106_1:;
wr(s->u,0,8,((U)UINT64_C(0x0)));
L_1803ec106_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803ec106_3:;
/* 1803ec10d: xor eax, eax */
L_1803ec10d_0:;
L_1803ec10d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec10d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec10d_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ec10d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec10d_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec10d_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ec10d_7:;
wr(s->u,8,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ec10d_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803ec10d_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ec10d_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ec10d_11:;
/* 1803ec10f: add rsp, 0x20 */
L_1803ec10f_0:;
L_1803ec10f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ec10f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803ec10f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803ec10f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec10f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec10f_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec10f_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803ec10f_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ec10f_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ec10f_10:;
/* 1803ec113: pop rbx */
L_1803ec113_0:;
L_1803ec113_1:;
wr(s->u,18,8,((U)UINT64_C(0x0)));
L_1803ec113_2:;
wr(s->u,18,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec113_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec113_4:;
wr(s->r,24,8,rd(s->u,18,8));
L_1803ec113_5:;
/* 1803ec114: ret  */
L_1803ec114_0:;
L_1803ec114_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec114_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec114_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ec114_4:;
return UINT64_C(0x1803ec115);
}
uint64_t b_1803ec120(CPU*s){
/* 1803ec120: mov qword ptr [rsp + 0x10], rbx */
L_1803ec120_0:;
L_1803ec120_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ec120_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803ec120_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803ec120_4:;
/* 1803ec125: push rdi */
L_1803ec125_0:;
L_1803ec125_1:;
wr(s->u,31,8,rd(s->r,56,8));
L_1803ec125_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec125_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,31,8));
L_1803ec125_4:;
/* 1803ec126: sub rsp, 0x30 */
L_1803ec126_0:;
L_1803ec126_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803ec126_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803ec126_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803ec126_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec126_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec126_6:;
wr(s->u,39,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec126_7:;
wr(s->u,47,1,pop(rd(s->u,39,8),8));
L_1803ec126_8:;
wr(s->u,48,1,(rd(s->u,47,1)&((U)UINT64_C(0x1))));
L_1803ec126_9:;
wr(s->r,514,1,(rd(s->u,48,1)==((U)UINT64_C(0x0))));
L_1803ec126_10:;
/* 1803ec12a: mov r8d, dword ptr [rcx + 8] */
L_1803ec12a_0:;
L_1803ec12a_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ec12a_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec12a_3:;
wr(s->r,128,4,rd(s->u,24,4));
L_1803ec12a_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ec12a_5:;
/* 1803ec12e: mov rbx, rcx */
L_1803ec12e_0:;
L_1803ec12e_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ec12e_2:;
/* 1803ec131: mov ecx, r8d */
L_1803ec131_0:;
L_1803ec131_1:;
wr(s->r,8,4,rd(s->r,128,4));
L_1803ec131_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ec131_3:;
/* 1803ec134: sar ecx, 1 */
L_1803ec134_0:;
L_1803ec134_1:;
wr(s->u,62,4,(rd(s->r,8,4)&((U)UINT64_C(0x1))));
L_1803ec134_2:;
wr(s->r,512,1,(rd(s->u,62,4)!=((U)UINT64_C(0x0))));
L_1803ec134_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec134_4:;
wr(s->r,8,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,8,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,8,4),4)>>((U)UINT64_C(0x1)))));
L_1803ec134_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ec134_6:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec134_7:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ec134_8:;
wr(s->u,39,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ec134_9:;
wr(s->u,47,1,pop(rd(s->u,39,4),4));
L_1803ec134_10:;
wr(s->u,48,1,(rd(s->u,47,1)&((U)UINT64_C(0x1))));
L_1803ec134_11:;
wr(s->r,514,1,(rd(s->u,48,1)==((U)UINT64_C(0x0))));
L_1803ec134_12:;
/* 1803ec136: cmp edx, ecx */
L_1803ec136_0:;
L_1803ec136_1:;
wr(s->u,54,4,rd(s->r,8,4));
L_1803ec136_2:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,54,4)));
L_1803ec136_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,54,4),4,1));
L_1803ec136_4:;
wr(s->u,58,4,(rd(s->r,16,4)-rd(s->u,54,4)));
L_1803ec136_5:;
wr(s->r,519,1,(sx(rd(s->u,58,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec136_6:;
wr(s->r,518,1,(rd(s->u,58,4)==((U)UINT64_C(0x0))));
L_1803ec136_7:;
wr(s->u,39,4,(rd(s->u,58,4)&((U)UINT64_C(0xff))));
L_1803ec136_8:;
wr(s->u,47,1,pop(rd(s->u,39,4),4));
L_1803ec136_9:;
wr(s->u,48,1,(rd(s->u,47,1)&((U)UINT64_C(0x1))));
L_1803ec136_10:;
wr(s->r,514,1,(rd(s->u,48,1)==((U)UINT64_C(0x0))));
L_1803ec136_11:;
/* 1803ec138: mov eax, ecx */
L_1803ec138_0:;
L_1803ec138_1:;
wr(s->r,0,4,rd(s->r,8,4));
L_1803ec138_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec138_3:;
/* 1803ec13a: cmovl eax, edx */
L_1803ec13a_0:;
L_1803ec13a_1:;
wr(s->u,28,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec13a_2:;
wr(s->u,49,4,rd(s->r,16,4));
L_1803ec13a_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec13a_4:;
wr(s->u,53,1,(!rd(s->u,28,1)));
L_1803ec13a_5:;
if(rd(s->u,53,1)){goto L_1803ec13d_0;}
L_1803ec13a_6:;
wr(s->r,0,4,rd(s->u,49,4));
L_1803ec13a_7:;
/* 1803ec13d: xor edi, edi */
L_1803ec13d_0:;
L_1803ec13d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec13d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec13d_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803ec13d_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803ec13d_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec13d_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803ec13d_7:;
wr(s->u,39,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803ec13d_8:;
wr(s->u,47,1,pop(rd(s->u,39,4),4));
L_1803ec13d_9:;
wr(s->u,48,1,(rd(s->u,47,1)&((U)UINT64_C(0x1))));
L_1803ec13d_10:;
wr(s->r,514,1,(rd(s->u,48,1)==((U)UINT64_C(0x0))));
L_1803ec13d_11:;
/* 1803ec13f: test eax, eax */
L_1803ec13f_0:;
L_1803ec13f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec13f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec13f_3:;
wr(s->u,66,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803ec13f_4:;
wr(s->r,519,1,(sx(rd(s->u,66,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec13f_5:;
wr(s->r,518,1,(rd(s->u,66,4)==((U)UINT64_C(0x0))));
L_1803ec13f_6:;
wr(s->u,39,4,(rd(s->u,66,4)&((U)UINT64_C(0xff))));
L_1803ec13f_7:;
wr(s->u,47,1,pop(rd(s->u,39,4),4));
L_1803ec13f_8:;
wr(s->u,48,1,(rd(s->u,47,1)&((U)UINT64_C(0x1))));
L_1803ec13f_9:;
wr(s->r,514,1,(rd(s->u,48,1)==((U)UINT64_C(0x0))));
L_1803ec13f_10:;
/* 1803ec141: jle 0x1803ec14a */
L_1803ec141_0:;
L_1803ec141_1:;
wr(s->u,29,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec141_2:;
wr(s->u,30,1,((rd(s->r,518,1)!=0)||(rd(s->u,29,1)!=0)));
L_1803ec141_3:;
if(rd(s->u,30,1)){return UINT64_C(0x1803ec14a);}
L_1803ec141_4:;
return UINT64_C(0x1803ec143);
}
uint64_t b_1803ec13d(CPU*s){
/* 1803ec13d: xor edi, edi */
L_1803ec13d_0:;
L_1803ec13d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec13d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec13d_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803ec13d_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803ec13d_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec13d_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803ec13d_7:;
wr(s->u,2,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803ec13d_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803ec13d_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803ec13d_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803ec13d_11:;
/* 1803ec13f: test eax, eax */
L_1803ec13f_0:;
L_1803ec13f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec13f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec13f_3:;
wr(s->u,8,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803ec13f_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec13f_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803ec13f_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803ec13f_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803ec13f_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803ec13f_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803ec13f_10:;
/* 1803ec141: jle 0x1803ec14a */
L_1803ec141_0:;
L_1803ec141_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec141_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803ec141_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803ec14a);}
L_1803ec141_4:;
return UINT64_C(0x1803ec143);
}
uint64_t b_1803ec143(CPU*s){
/* 1803ec143: cmp edx, ecx */
L_1803ec143_0:;
L_1803ec143_1:;
wr(s->u,12,4,rd(s->r,8,4));
L_1803ec143_2:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,12,4)));
L_1803ec143_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,12,4),4,1));
L_1803ec143_4:;
wr(s->u,16,4,(rd(s->r,16,4)-rd(s->u,12,4)));
L_1803ec143_5:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec143_6:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_1803ec143_7:;
wr(s->u,1,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_1803ec143_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803ec143_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803ec143_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803ec143_11:;
/* 1803ec145: cmovl ecx, edx */
L_1803ec145_0:;
L_1803ec145_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec145_2:;
wr(s->u,7,4,rd(s->r,16,4));
L_1803ec145_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ec145_4:;
wr(s->u,11,1,(!rd(s->u,0,1)));
L_1803ec145_5:;
if(rd(s->u,11,1)){goto L_1803ec148_0;}
L_1803ec145_6:;
wr(s->r,8,4,rd(s->u,7,4));
L_1803ec145_7:;
/* 1803ec148: jmp 0x1803ec14c */
L_1803ec148_0:;
L_1803ec148_1:;
return UINT64_C(0x1803ec14c);
L_1803ec148_2:;
return UINT64_C(0x1803ec14a);
}
uint64_t b_1803ec148(CPU*s){
/* 1803ec148: jmp 0x1803ec14c */
L_1803ec148_0:;
L_1803ec148_1:;
return UINT64_C(0x1803ec14c);
L_1803ec148_2:;
return UINT64_C(0x1803ec14a);
}
uint64_t b_1803ec14a(CPU*s){
/* 1803ec14a: mov ecx, edi */
L_1803ec14a_0:;
L_1803ec14a_1:;
wr(s->r,8,4,rd(s->r,56,4));
L_1803ec14a_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ec14a_3:;
/* 1803ec14c: mov eax, dword ptr [rbx + 0x10] */
L_1803ec14c_0:;
L_1803ec14c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803ec14c_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec14c_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803ec14c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec14c_5:;
/* 1803ec14f: mov dword ptr [rbx + 0xc], ecx */
L_1803ec14f_0:;
L_1803ec14f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ec14f_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_1803ec14f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ec14f_4:;
/* 1803ec152: test eax, eax */
L_1803ec152_0:;
L_1803ec152_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec152_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec152_3:;
wr(s->u,24,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803ec152_4:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec152_5:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803ec152_6:;
wr(s->u,18,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803ec152_7:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803ec152_8:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803ec152_9:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803ec152_10:;
/* 1803ec154: jle 0x1803ec268 */
L_1803ec154_0:;
L_1803ec154_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec154_2:;
wr(s->u,17,1,((rd(s->r,518,1)!=0)||(rd(s->u,16,1)!=0)));
L_1803ec154_3:;
if(rd(s->u,17,1)){return UINT64_C(0x1803ec268);}
L_1803ec154_4:;
return UINT64_C(0x1803ec15a);
}
uint64_t b_1803ec14c(CPU*s){
/* 1803ec14c: mov eax, dword ptr [rbx + 0x10] */
L_1803ec14c_0:;
L_1803ec14c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803ec14c_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec14c_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803ec14c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec14c_5:;
/* 1803ec14f: mov dword ptr [rbx + 0xc], ecx */
L_1803ec14f_0:;
L_1803ec14f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ec14f_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_1803ec14f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ec14f_4:;
/* 1803ec152: test eax, eax */
L_1803ec152_0:;
L_1803ec152_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec152_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec152_3:;
wr(s->u,24,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803ec152_4:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec152_5:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803ec152_6:;
wr(s->u,18,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803ec152_7:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803ec152_8:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803ec152_9:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803ec152_10:;
/* 1803ec154: jle 0x1803ec268 */
L_1803ec154_0:;
L_1803ec154_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec154_2:;
wr(s->u,17,1,((rd(s->r,518,1)!=0)||(rd(s->u,16,1)!=0)));
L_1803ec154_3:;
if(rd(s->u,17,1)){return UINT64_C(0x1803ec268);}
L_1803ec154_4:;
return UINT64_C(0x1803ec15a);
}
uint64_t b_1803ec15a(CPU*s){
/* 1803ec15a: cmp eax, 4 */
L_1803ec15a_0:;
L_1803ec15a_1:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803ec15a_2:;
wr(s->r,512,1,(rd(s->u,40,4)<((U)UINT64_C(0x4))));
L_1803ec15a_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,40,4),((U)UINT64_C(0x4)),4,1));
L_1803ec15a_4:;
wr(s->u,44,4,(rd(s->u,40,4)-((U)UINT64_C(0x4))));
L_1803ec15a_5:;
wr(s->r,519,1,(sx(rd(s->u,44,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec15a_6:;
wr(s->r,518,1,(rd(s->u,44,4)==((U)UINT64_C(0x0))));
L_1803ec15a_7:;
wr(s->u,34,4,(rd(s->u,44,4)&((U)UINT64_C(0xff))));
L_1803ec15a_8:;
wr(s->u,38,1,pop(rd(s->u,34,4),4));
L_1803ec15a_9:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803ec15a_10:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803ec15a_11:;
/* 1803ec15d: mov qword ptr [rsp + 0x40], rsi */
L_1803ec15d_0:;
L_1803ec15d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ec15d_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803ec15d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ec15d_4:;
/* 1803ec162: movaps xmmword ptr [rsp + 0x20], xmm6 */
L_1803ec162_0:;
L_1803ec162_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ec162_2:;
wr(s->u,16,16,rd(s->r,4992,16));
L_1803ec162_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,16,16));
L_1803ec162_4:;
/* 1803ec167: jle 0x1803ec1ed */
L_1803ec167_0:;
L_1803ec167_1:;
wr(s->u,32,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec167_2:;
wr(s->u,33,1,((rd(s->r,518,1)!=0)||(rd(s->u,32,1)!=0)));
L_1803ec167_3:;
if(rd(s->u,33,1)){return UINT64_C(0x1803ec1ed);}
L_1803ec167_4:;
return UINT64_C(0x1803ec16d);
}
uint64_t b_1803ec15d(CPU*s){
/* 1803ec15d: mov qword ptr [rsp + 0x40], rsi */
L_1803ec15d_0:;
L_1803ec15d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ec15d_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803ec15d_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ec15d_4:;
/* 1803ec162: movaps xmmword ptr [rsp + 0x20], xmm6 */
L_1803ec162_0:;
L_1803ec162_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ec162_2:;
wr(s->u,16,16,rd(s->r,4992,16));
L_1803ec162_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,16,16));
L_1803ec162_4:;
/* 1803ec167: jle 0x1803ec1ed */
L_1803ec167_0:;
L_1803ec167_1:;
wr(s->u,32,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec167_2:;
wr(s->u,33,1,((rd(s->r,518,1)!=0)||(rd(s->u,32,1)!=0)));
L_1803ec167_3:;
if(rd(s->u,33,1)){return UINT64_C(0x1803ec1ed);}
L_1803ec167_4:;
return UINT64_C(0x1803ec16d);
}
uint64_t b_1803ec16d(CPU*s){
/* 1803ec16d: add eax, -6 */
L_1803ec16d_0:;
L_1803ec16d_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0xfffffffa)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ec16d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0xfffffffa)),4,0));
L_1803ec16d_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0xfffffffa))));
L_1803ec16d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec16d_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec16d_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ec16d_7:;
wr(s->u,2,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ec16d_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803ec16d_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803ec16d_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803ec16d_11:;
/* 1803ec170: cmp eax, 2 */
L_1803ec170_0:;
L_1803ec170_1:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ec170_2:;
wr(s->r,512,1,(rd(s->u,8,4)<((U)UINT64_C(0x2))));
L_1803ec170_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),((U)UINT64_C(0x2)),4,1));
L_1803ec170_4:;
wr(s->u,12,4,(rd(s->u,8,4)-((U)UINT64_C(0x2))));
L_1803ec170_5:;
wr(s->r,519,1,(sx(rd(s->u,12,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec170_6:;
wr(s->r,518,1,(rd(s->u,12,4)==((U)UINT64_C(0x0))));
L_1803ec170_7:;
wr(s->u,2,4,(rd(s->u,12,4)&((U)UINT64_C(0xff))));
L_1803ec170_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803ec170_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803ec170_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803ec170_11:;
/* 1803ec173: ja 0x1803ec25e */
L_1803ec173_0:;
L_1803ec173_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803ec173_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803ec173_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803ec25e);}
L_1803ec173_4:;
return UINT64_C(0x1803ec179);
}
uint64_t b_1803ec179(CPU*s){
/* 1803ec179: mov rcx, qword ptr [rbx + 0x30] */
L_1803ec179_0:;
L_1803ec179_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ec179_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec179_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803ec179_4:;
/* 1803ec17d: mov edx, r8d */
L_1803ec17d_0:;
L_1803ec17d_1:;
wr(s->r,16,4,rd(s->r,128,4));
L_1803ec17d_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ec17d_3:;
/* 1803ec180: call qword ptr [rip + 0x632022] */
L_1803ec180_0:;
L_1803ec180_1:;
wr(s->u,16,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803ec180_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec180_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec186)));
L_1803ec180_4:;
return (uint64_t)rd(s->u,16,8);
L_1803ec180_5:;
return UINT64_C(0x1803ec186);
}
uint64_t b_1803ec186(CPU*s){
/* 1803ec186: cmp dword ptr [rbx + 0xc], edi */
L_1803ec186_0:;
L_1803ec186_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ec186_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec186_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803ec186_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,56,4)));
L_1803ec186_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,56,4),4,1));
L_1803ec186_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,56,4)));
L_1803ec186_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec186_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803ec186_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803ec186_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803ec186_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803ec186_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803ec186_13:;
/* 1803ec189: jle 0x1803ec25e */
L_1803ec189_0:;
L_1803ec189_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec189_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803ec189_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803ec25e);}
L_1803ec189_4:;
return UINT64_C(0x1803ec18f);
}
uint64_t b_1803ec18f(CPU*s){
/* 1803ec18f: movss xmm6, dword ptr [rip + 0x26f375] */
L_1803ec18f_0:;
L_1803ec18f_1:;
wr(s->r,4992,4,mr(UINT64_C(0x18065b50c),4));
L_1803ec18f_2:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ec18f_3:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ec18f_4:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ec18f_5:;
/* 1803ec197: mov rsi, rdi */
L_1803ec197_0:;
L_1803ec197_1:;
wr(s->r,48,8,rd(s->r,56,8));
L_1803ec197_2:;
/* 1803ec19a: nop word ptr [rax + rax] */
L_1803ec19a_0:;
L_1803ec19a_1:;
wr(s->u,32,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ec19a_2:;
wr(s->u,40,8,(rd(s->r,0,8)+rd(s->u,32,8)));
L_1803ec19a_3:;
/* 1803ec1a0: mov eax, dword ptr [rbx + 0xc] */
L_1803ec1a0_0:;
L_1803ec1a0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ec1a0_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec1a0_3:;
wr(s->r,0,4,rd(s->u,48,4));
L_1803ec1a0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec1a0_5:;
/* 1803ec1a3: movd xmm0, edi */
L_1803ec1a3_0:;
L_1803ec1a3_1:;
wr(s->r,4608,16,rd(s->r,56,4));
L_1803ec1a3_2:;
/* 1803ec1a7: lea eax, [rax + rax - 1] */
L_1803ec1a7_0:;
L_1803ec1a7_1:;
wr(s->u,8,8,(((U)UINT64_C(0xffffffffffffffff))+rd(s->r,0,8)));
L_1803ec1a7_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ec1a7_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ec1a7_4:;
wr(s->r,0,4,(rd(s->u,24,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ec1a7_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec1a7_6:;
/* 1803ec1ab: movd xmm1, eax */
L_1803ec1ab_0:;
L_1803ec1ab_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803ec1ab_2:;
/* 1803ec1af: cvtdq2ps xmm0, xmm0 */
L_1803ec1af_0:;
L_1803ec1af_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ec1af_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ec1af_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ec1af_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ec1af_5:;
/* 1803ec1b2: mulss xmm0, xmm6 */
L_1803ec1b2_0:;
L_1803ec1b2_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803ec1b2_2:;
/* 1803ec1b6: cvtdq2ps xmm1, xmm1 */
L_1803ec1b6_0:;
L_1803ec1b6_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803ec1b6_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803ec1b6_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803ec1b6_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803ec1b6_5:;
/* 1803ec1b9: divss xmm0, xmm1 */
L_1803ec1b9_0:;
L_1803ec1b9_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803ec1b9_2:;
/* 1803ec1bd: call 0x180609b08 */
L_1803ec1bd_0:;
L_1803ec1bd_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec1bd_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec1c2)));
L_1803ec1bd_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803ec1bd_4:;
return UINT64_C(0x1803ec1c2);
}
uint64_t b_1803ec1a0(CPU*s){
/* 1803ec1a0: mov eax, dword ptr [rbx + 0xc] */
L_1803ec1a0_0:;
L_1803ec1a0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ec1a0_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec1a0_3:;
wr(s->r,0,4,rd(s->u,32,4));
L_1803ec1a0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec1a0_5:;
/* 1803ec1a3: movd xmm0, edi */
L_1803ec1a3_0:;
L_1803ec1a3_1:;
wr(s->r,4608,16,rd(s->r,56,4));
L_1803ec1a3_2:;
/* 1803ec1a7: lea eax, [rax + rax - 1] */
L_1803ec1a7_0:;
L_1803ec1a7_1:;
wr(s->u,8,8,(((U)UINT64_C(0xffffffffffffffff))+rd(s->r,0,8)));
L_1803ec1a7_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ec1a7_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ec1a7_4:;
wr(s->r,0,4,(rd(s->u,24,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ec1a7_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec1a7_6:;
/* 1803ec1ab: movd xmm1, eax */
L_1803ec1ab_0:;
L_1803ec1ab_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803ec1ab_2:;
/* 1803ec1af: cvtdq2ps xmm0, xmm0 */
L_1803ec1af_0:;
L_1803ec1af_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ec1af_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ec1af_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ec1af_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ec1af_5:;
/* 1803ec1b2: mulss xmm0, xmm6 */
L_1803ec1b2_0:;
L_1803ec1b2_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803ec1b2_2:;
/* 1803ec1b6: cvtdq2ps xmm1, xmm1 */
L_1803ec1b6_0:;
L_1803ec1b6_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803ec1b6_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803ec1b6_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803ec1b6_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803ec1b6_5:;
/* 1803ec1b9: divss xmm0, xmm1 */
L_1803ec1b9_0:;
L_1803ec1b9_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803ec1b9_2:;
/* 1803ec1bd: call 0x180609b08 */
L_1803ec1bd_0:;
L_1803ec1bd_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec1bd_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec1c2)));
L_1803ec1bd_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803ec1bd_4:;
return UINT64_C(0x1803ec1c2);
}
uint64_t b_1803ec1c2(CPU*s){
/* 1803ec1c2: mov rax, qword ptr [rbx + 0x30] */
L_1803ec1c2_0:;
L_1803ec1c2_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ec1c2_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec1c2_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803ec1c2_4:;
/* 1803ec1c6: inc edi */
L_1803ec1c6_0:;
L_1803ec1c6_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),((U)UINT64_C(0x1)),4,0));
L_1803ec1c6_2:;
wr(s->r,56,4,(rd(s->r,56,4)+((U)UINT64_C(0x1))));
L_1803ec1c6_3:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803ec1c6_4:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec1c6_5:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803ec1c6_6:;
wr(s->u,45,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803ec1c6_7:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803ec1c6_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803ec1c6_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803ec1c6_10:;
/* 1803ec1c8: add rsi, 4 */
L_1803ec1c8_0:;
L_1803ec1c8_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803ec1c8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x4)),8,0));
L_1803ec1c8_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x4))));
L_1803ec1c8_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec1c8_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803ec1c8_6:;
wr(s->u,45,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803ec1c8_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803ec1c8_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803ec1c8_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803ec1c8_10:;
/* 1803ec1cc: movss dword ptr [rsi + rax - 4], xmm0 */
L_1803ec1cc_0:;
L_1803ec1cc_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,48,8)));
L_1803ec1cc_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ec1cc_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ec1cc_4:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ec1cc_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803ec1cc_6:;
/* 1803ec1d2: mov rax, qword ptr [rbx + 0x30] */
L_1803ec1d2_0:;
L_1803ec1d2_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ec1d2_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec1d2_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803ec1d2_4:;
/* 1803ec1d6: movss xmm0, dword ptr [rax + rsi - 4] */
L_1803ec1d6_0:;
L_1803ec1d6_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803ec1d6_2:;
wr(s->u,16,8,(rd(s->r,48,8)*((U)UINT64_C(0x1))));
L_1803ec1d6_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ec1d6_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ec1d6_5:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ec1d6_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ec1d6_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ec1d6_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ec1d6_9:;
/* 1803ec1dc: mulss xmm0, xmm0 */
L_1803ec1dc_0:;
L_1803ec1dc_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803ec1dc_2:;
/* 1803ec1e0: movss dword ptr [rax + rsi - 4], xmm0 */
L_1803ec1e0_0:;
L_1803ec1e0_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803ec1e0_2:;
wr(s->u,16,8,(rd(s->r,48,8)*((U)UINT64_C(0x1))));
L_1803ec1e0_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ec1e0_4:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ec1e0_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803ec1e0_6:;
/* 1803ec1e6: cmp edi, dword ptr [rbx + 0xc] */
L_1803ec1e6_0:;
L_1803ec1e6_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ec1e6_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec1e6_3:;
wr(s->u,55,4,rd(s->u,32,4));
L_1803ec1e6_4:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->u,55,4)));
L_1803ec1e6_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->u,55,4),4,1));
L_1803ec1e6_6:;
wr(s->u,59,4,(rd(s->r,56,4)-rd(s->u,55,4)));
L_1803ec1e6_7:;
wr(s->r,519,1,(sx(rd(s->u,59,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec1e6_8:;
wr(s->r,518,1,(rd(s->u,59,4)==((U)UINT64_C(0x0))));
L_1803ec1e6_9:;
wr(s->u,45,4,(rd(s->u,59,4)&((U)UINT64_C(0xff))));
L_1803ec1e6_10:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803ec1e6_11:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803ec1e6_12:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803ec1e6_13:;
/* 1803ec1e9: jl 0x1803ec1a0 */
L_1803ec1e9_0:;
L_1803ec1e9_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec1e9_2:;
if(rd(s->u,44,1)){return UINT64_C(0x1803ec1a0);}
L_1803ec1e9_3:;
return UINT64_C(0x1803ec1eb);
}
uint64_t b_1803ec1eb(CPU*s){
/* 1803ec1eb: jmp 0x1803ec25e */
L_1803ec1eb_0:;
L_1803ec1eb_1:;
return UINT64_C(0x1803ec25e);
L_1803ec1eb_2:;
return UINT64_C(0x1803ec1ed);
}
uint64_t b_1803ec1ed(CPU*s){
/* 1803ec1ed: mov rcx, qword ptr [rbx + 0x30] */
L_1803ec1ed_0:;
L_1803ec1ed_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ec1ed_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec1ed_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803ec1ed_4:;
/* 1803ec1f1: mov edx, r8d */
L_1803ec1f1_0:;
L_1803ec1f1_1:;
wr(s->r,16,4,rd(s->r,128,4));
L_1803ec1f1_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ec1f1_3:;
/* 1803ec1f4: call qword ptr [rip + 0x631fae] */
L_1803ec1f4_0:;
L_1803ec1f4_1:;
wr(s->u,16,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803ec1f4_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec1f4_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec1fa)));
L_1803ec1f4_4:;
return (uint64_t)rd(s->u,16,8);
L_1803ec1f4_5:;
return UINT64_C(0x1803ec1fa);
}
uint64_t b_1803ec1fa(CPU*s){
/* 1803ec1fa: shl dword ptr [rbx + 0xc], 1 */
L_1803ec1fa_0:;
L_1803ec1fa_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ec1fa_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec1fa_3:;
wr(s->r,512,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec1fa_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec1fa_5:;
wr(s->u,8,4,((((U)UINT64_C(0x1))>=32)?0:(rd(s->u,8,4)<<((U)UINT64_C(0x1)))));
L_1803ec1fa_6:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ec1fa_7:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec1fa_8:;
wr(s->u,28,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec1fa_9:;
wr(s->r,523,1,(rd(s->r,512,1)^rd(s->u,28,1)));
L_1803ec1fa_10:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec1fa_11:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec1fa_12:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec1fa_13:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803ec1fa_14:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec1fa_15:;
wr(s->u,14,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803ec1fa_16:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803ec1fa_17:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803ec1fa_18:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803ec1fa_19:;
/* 1803ec1fd: cmp dword ptr [rbx + 0xc], edi */
L_1803ec1fd_0:;
L_1803ec1fd_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ec1fd_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec1fd_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803ec1fd_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,56,4)));
L_1803ec1fd_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,56,4),4,1));
L_1803ec1fd_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,56,4)));
L_1803ec1fd_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec1fd_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803ec1fd_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803ec1fd_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803ec1fd_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803ec1fd_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803ec1fd_13:;
/* 1803ec200: jle 0x1803ec25e */
L_1803ec200_0:;
L_1803ec200_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec200_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803ec200_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803ec25e);}
L_1803ec200_4:;
return UINT64_C(0x1803ec202);
}
uint64_t b_1803ec202(CPU*s){
/* 1803ec202: movss xmm6, dword ptr [rip + 0x26f302] */
L_1803ec202_0:;
L_1803ec202_1:;
wr(s->r,4992,4,mr(UINT64_C(0x18065b50c),4));
L_1803ec202_2:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ec202_3:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ec202_4:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ec202_5:;
/* 1803ec20a: mov rsi, rdi */
L_1803ec20a_0:;
L_1803ec20a_1:;
wr(s->r,48,8,rd(s->r,56,8));
L_1803ec20a_2:;
/* 1803ec20d: nop dword ptr [rax] */
L_1803ec20d_0:;
L_1803ec20d_1:;
/* 1803ec210: mov eax, edi */
L_1803ec210_0:;
L_1803ec210_1:;
wr(s->r,0,4,rd(s->r,56,4));
L_1803ec210_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec210_3:;
/* 1803ec212: sar eax, 1 */
L_1803ec212_0:;
L_1803ec212_1:;
wr(s->u,18,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803ec212_2:;
wr(s->r,512,1,(rd(s->u,18,4)!=((U)UINT64_C(0x0))));
L_1803ec212_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec212_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803ec212_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec212_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec212_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ec212_8:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ec212_9:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803ec212_10:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ec212_11:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ec212_12:;
/* 1803ec214: movd xmm0, eax */
L_1803ec214_0:;
L_1803ec214_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803ec214_2:;
/* 1803ec218: mov eax, dword ptr [rbx + 0xc] */
L_1803ec218_0:;
L_1803ec218_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ec218_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec218_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803ec218_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec218_5:;
/* 1803ec21b: dec eax */
L_1803ec21b_0:;
L_1803ec21b_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,1));
L_1803ec21b_2:;
wr(s->r,0,4,(rd(s->r,0,4)-((U)UINT64_C(0x1))));
L_1803ec21b_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec21b_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec21b_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ec21b_6:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ec21b_7:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803ec21b_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ec21b_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ec21b_10:;
/* 1803ec21d: movd xmm1, eax */
L_1803ec21d_0:;
L_1803ec21d_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803ec21d_2:;
/* 1803ec221: cvtdq2ps xmm0, xmm0 */
L_1803ec221_0:;
L_1803ec221_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ec221_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ec221_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ec221_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ec221_5:;
/* 1803ec224: mulss xmm0, xmm6 */
L_1803ec224_0:;
L_1803ec224_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803ec224_2:;
/* 1803ec228: cvtdq2ps xmm1, xmm1 */
L_1803ec228_0:;
L_1803ec228_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803ec228_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803ec228_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803ec228_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803ec228_5:;
/* 1803ec22b: divss xmm0, xmm1 */
L_1803ec22b_0:;
L_1803ec22b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803ec22b_2:;
/* 1803ec22f: call 0x180609b08 */
L_1803ec22f_0:;
L_1803ec22f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec22f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec234)));
L_1803ec22f_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803ec22f_4:;
return UINT64_C(0x1803ec234);
}
uint64_t b_1803ec210(CPU*s){
/* 1803ec210: mov eax, edi */
L_1803ec210_0:;
L_1803ec210_1:;
wr(s->r,0,4,rd(s->r,56,4));
L_1803ec210_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec210_3:;
/* 1803ec212: sar eax, 1 */
L_1803ec212_0:;
L_1803ec212_1:;
wr(s->u,18,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803ec212_2:;
wr(s->r,512,1,(rd(s->u,18,4)!=((U)UINT64_C(0x0))));
L_1803ec212_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec212_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803ec212_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec212_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec212_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ec212_8:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ec212_9:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803ec212_10:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ec212_11:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ec212_12:;
/* 1803ec214: movd xmm0, eax */
L_1803ec214_0:;
L_1803ec214_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803ec214_2:;
/* 1803ec218: mov eax, dword ptr [rbx + 0xc] */
L_1803ec218_0:;
L_1803ec218_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ec218_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec218_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803ec218_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec218_5:;
/* 1803ec21b: dec eax */
L_1803ec21b_0:;
L_1803ec21b_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,1));
L_1803ec21b_2:;
wr(s->r,0,4,(rd(s->r,0,4)-((U)UINT64_C(0x1))));
L_1803ec21b_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec21b_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec21b_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ec21b_6:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ec21b_7:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803ec21b_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ec21b_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ec21b_10:;
/* 1803ec21d: movd xmm1, eax */
L_1803ec21d_0:;
L_1803ec21d_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803ec21d_2:;
/* 1803ec221: cvtdq2ps xmm0, xmm0 */
L_1803ec221_0:;
L_1803ec221_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ec221_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ec221_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ec221_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ec221_5:;
/* 1803ec224: mulss xmm0, xmm6 */
L_1803ec224_0:;
L_1803ec224_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803ec224_2:;
/* 1803ec228: cvtdq2ps xmm1, xmm1 */
L_1803ec228_0:;
L_1803ec228_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803ec228_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803ec228_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803ec228_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803ec228_5:;
/* 1803ec22b: divss xmm0, xmm1 */
L_1803ec22b_0:;
L_1803ec22b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803ec22b_2:;
/* 1803ec22f: call 0x180609b08 */
L_1803ec22f_0:;
L_1803ec22f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec22f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec234)));
L_1803ec22f_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803ec22f_4:;
return UINT64_C(0x1803ec234);
}
uint64_t b_1803ec234(CPU*s){
/* 1803ec234: mov rax, qword ptr [rbx + 0x30] */
L_1803ec234_0:;
L_1803ec234_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ec234_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec234_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803ec234_4:;
/* 1803ec238: add edi, 2 */
L_1803ec238_0:;
L_1803ec238_1:;
wr(s->r,512,1,(((rd(s->r,56,4)+((U)UINT64_C(0x2)))&(((U)1<<32)-1))<rd(s->r,56,4)));
L_1803ec238_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),((U)UINT64_C(0x2)),4,0));
L_1803ec238_3:;
wr(s->r,56,4,(rd(s->r,56,4)+((U)UINT64_C(0x2))));
L_1803ec238_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803ec238_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec238_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803ec238_7:;
wr(s->u,45,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803ec238_8:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803ec238_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803ec238_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803ec238_11:;
/* 1803ec23b: add rsi, 8 */
L_1803ec23b_0:;
L_1803ec23b_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803ec23b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x8)),8,0));
L_1803ec23b_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x8))));
L_1803ec23b_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec23b_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803ec23b_6:;
wr(s->u,45,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803ec23b_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803ec23b_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803ec23b_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803ec23b_10:;
/* 1803ec23f: movss dword ptr [rsi + rax - 8], xmm0 */
L_1803ec23f_0:;
L_1803ec23f_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,48,8)));
L_1803ec23f_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ec23f_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ec23f_4:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ec23f_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803ec23f_6:;
/* 1803ec245: mov rax, qword ptr [rbx + 0x30] */
L_1803ec245_0:;
L_1803ec245_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ec245_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec245_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803ec245_4:;
/* 1803ec249: movss xmm0, dword ptr [rax + rsi - 8] */
L_1803ec249_0:;
L_1803ec249_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803ec249_2:;
wr(s->u,16,8,(rd(s->r,48,8)*((U)UINT64_C(0x1))));
L_1803ec249_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ec249_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ec249_5:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803ec249_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ec249_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ec249_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ec249_9:;
/* 1803ec24f: mulss xmm0, xmm0 */
L_1803ec24f_0:;
L_1803ec24f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803ec24f_2:;
/* 1803ec253: movss dword ptr [rax + rsi - 8], xmm0 */
L_1803ec253_0:;
L_1803ec253_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803ec253_2:;
wr(s->u,16,8,(rd(s->r,48,8)*((U)UINT64_C(0x1))));
L_1803ec253_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ec253_4:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803ec253_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803ec253_6:;
/* 1803ec259: cmp edi, dword ptr [rbx + 0xc] */
L_1803ec259_0:;
L_1803ec259_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ec259_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec259_3:;
wr(s->u,55,4,rd(s->u,32,4));
L_1803ec259_4:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->u,55,4)));
L_1803ec259_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->u,55,4),4,1));
L_1803ec259_6:;
wr(s->u,59,4,(rd(s->r,56,4)-rd(s->u,55,4)));
L_1803ec259_7:;
wr(s->r,519,1,(sx(rd(s->u,59,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec259_8:;
wr(s->r,518,1,(rd(s->u,59,4)==((U)UINT64_C(0x0))));
L_1803ec259_9:;
wr(s->u,45,4,(rd(s->u,59,4)&((U)UINT64_C(0xff))));
L_1803ec259_10:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803ec259_11:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803ec259_12:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803ec259_13:;
/* 1803ec25c: jl 0x1803ec210 */
L_1803ec25c_0:;
L_1803ec25c_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec25c_2:;
if(rd(s->u,44,1)){return UINT64_C(0x1803ec210);}
L_1803ec25c_3:;
return UINT64_C(0x1803ec25e);
}
uint64_t b_1803ec25e(CPU*s){
/* 1803ec25e: mov rsi, qword ptr [rsp + 0x40] */
L_1803ec25e_0:;
L_1803ec25e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ec25e_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec25e_3:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803ec25e_4:;
/* 1803ec263: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803ec263_0:;
L_1803ec263_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ec263_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803ec263_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803ec263_4:;
wr(s->r,4992,4,rd(s->u,50,4));
L_1803ec263_5:;
wr(s->r,4996,4,rd(s->u,54,4));
L_1803ec263_6:;
wr(s->r,5000,4,rd(s->u,58,4));
L_1803ec263_7:;
wr(s->r,5004,4,rd(s->u,62,4));
L_1803ec263_8:;
/* 1803ec268: mov rbx, qword ptr [rsp + 0x48] */
L_1803ec268_0:;
L_1803ec268_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803ec268_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec268_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803ec268_4:;
/* 1803ec26d: add rsp, 0x30 */
L_1803ec26d_0:;
L_1803ec26d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ec26d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803ec26d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803ec26d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec26d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec26d_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec26d_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803ec26d_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ec26d_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ec26d_10:;
/* 1803ec271: pop rdi */
L_1803ec271_0:;
L_1803ec271_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803ec271_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec271_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec271_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803ec271_5:;
/* 1803ec272: ret  */
L_1803ec272_0:;
L_1803ec272_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec272_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec272_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ec272_4:;
return UINT64_C(0x1803ec273);
}
uint64_t b_1803ec268(CPU*s){
/* 1803ec268: mov rbx, qword ptr [rsp + 0x48] */
L_1803ec268_0:;
L_1803ec268_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803ec268_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec268_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ec268_4:;
/* 1803ec26d: add rsp, 0x30 */
L_1803ec26d_0:;
L_1803ec26d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ec26d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803ec26d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803ec26d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec26d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec26d_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec26d_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ec26d_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ec26d_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ec26d_10:;
/* 1803ec271: pop rdi */
L_1803ec271_0:;
L_1803ec271_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ec271_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec271_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec271_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803ec271_5:;
/* 1803ec272: ret  */
L_1803ec272_0:;
L_1803ec272_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec272_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec272_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ec272_4:;
return UINT64_C(0x1803ec273);
}
uint64_t b_1803ec390(CPU*s){
/* 1803ec390: mov qword ptr [rsp + 8], rbx */
L_1803ec390_0:;
L_1803ec390_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ec390_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803ec390_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ec390_4:;
/* 1803ec395: push rdi */
L_1803ec395_0:;
L_1803ec395_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803ec395_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec395_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803ec395_4:;
/* 1803ec396: sub rsp, 0x20 */
L_1803ec396_0:;
L_1803ec396_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803ec396_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803ec396_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803ec396_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec396_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec396_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec396_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ec396_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ec396_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ec396_10:;
/* 1803ec39a: mov ebx, edx */
L_1803ec39a_0:;
L_1803ec39a_1:;
wr(s->r,24,4,rd(s->r,16,4));
L_1803ec39a_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803ec39a_3:;
/* 1803ec39c: mov rdi, rcx */
L_1803ec39c_0:;
L_1803ec39c_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803ec39c_2:;
/* 1803ec39f: call 0x1803ec000 */
L_1803ec39f_0:;
L_1803ec39f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec39f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec3a4)));
L_1803ec39f_3:;
return (uint64_t)UINT64_C(0x1803ec000);
L_1803ec39f_4:;
return UINT64_C(0x1803ec3a4);
}
uint64_t b_1803ec3a4(CPU*s){
/* 1803ec3a4: test bl, 1 */
L_1803ec3a4_0:;
L_1803ec3a4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec3a4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec3a4_3:;
wr(s->u,3,1,(rd(s->r,24,1)&((U)UINT64_C(0x1))));
L_1803ec3a4_4:;
wr(s->r,519,1,(sx(rd(s->u,3,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803ec3a4_5:;
wr(s->r,518,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_1803ec3a4_6:;
wr(s->u,0,1,(rd(s->u,3,1)&((U)UINT64_C(0xff))));
L_1803ec3a4_7:;
wr(s->u,1,1,pop(rd(s->u,0,1),1));
L_1803ec3a4_8:;
wr(s->u,2,1,(rd(s->u,1,1)&((U)UINT64_C(0x1))));
L_1803ec3a4_9:;
wr(s->r,514,1,(rd(s->u,2,1)==((U)UINT64_C(0x0))));
L_1803ec3a4_10:;
/* 1803ec3a7: je 0x1803ec3b1 */
L_1803ec3a7_0:;
L_1803ec3a7_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ec3b1);}
L_1803ec3a7_2:;
return UINT64_C(0x1803ec3a9);
}
uint64_t b_1803ec3a9(CPU*s){
/* 1803ec3a9: mov rcx, rdi */
L_1803ec3a9_0:;
L_1803ec3a9_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803ec3a9_2:;
/* 1803ec3ac: call 0x180003160 */
L_1803ec3ac_0:;
L_1803ec3ac_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec3ac_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec3b1)));
L_1803ec3ac_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803ec3ac_4:;
return UINT64_C(0x1803ec3b1);
}
uint64_t b_1803ec3b1(CPU*s){
/* 1803ec3b1: mov rax, rdi */
L_1803ec3b1_0:;
L_1803ec3b1_1:;
wr(s->r,0,8,rd(s->r,56,8));
L_1803ec3b1_2:;
/* 1803ec3b4: mov rbx, qword ptr [rsp + 0x30] */
L_1803ec3b4_0:;
L_1803ec3b4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ec3b4_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec3b4_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ec3b4_4:;
/* 1803ec3b9: add rsp, 0x20 */
L_1803ec3b9_0:;
L_1803ec3b9_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ec3b9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803ec3b9_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803ec3b9_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec3b9_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec3b9_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec3b9_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ec3b9_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ec3b9_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ec3b9_10:;
/* 1803ec3bd: pop rdi */
L_1803ec3bd_0:;
L_1803ec3bd_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ec3bd_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec3bd_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec3bd_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803ec3bd_5:;
/* 1803ec3be: ret  */
L_1803ec3be_0:;
L_1803ec3be_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec3be_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec3be_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ec3be_4:;
return UINT64_C(0x1803ec3bf);
}
uint64_t b_1803ec3c0(CPU*s){
/* 1803ec3c0: mov qword ptr [rsp + 0x18], rbx */
L_1803ec3c0_0:;
L_1803ec3c0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803ec3c0_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803ec3c0_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803ec3c0_4:;
/* 1803ec3c5: mov qword ptr [rsp + 0x20], rsi */
L_1803ec3c5_0:;
L_1803ec3c5_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ec3c5_2:;
wr(s->u,16,8,rd(s->r,48,8));
L_1803ec3c5_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803ec3c5_4:;
/* 1803ec3ca: push rdi */
L_1803ec3ca_0:;
L_1803ec3ca_1:;
wr(s->u,44,8,rd(s->r,56,8));
L_1803ec3ca_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec3ca_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,44,8));
L_1803ec3ca_4:;
/* 1803ec3cb: sub rsp, 0x30 */
L_1803ec3cb_0:;
L_1803ec3cb_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803ec3cb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803ec3cb_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803ec3cb_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec3cb_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec3cb_6:;
wr(s->u,52,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec3cb_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803ec3cb_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803ec3cb_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803ec3cb_10:;
/* 1803ec3cf: mov r9d, dword ptr [rcx + 8] */
L_1803ec3cf_0:;
L_1803ec3cf_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ec3cf_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec3cf_3:;
wr(s->r,136,4,rd(s->u,40,4));
L_1803ec3cf_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ec3cf_5:;
/* 1803ec3d3: movss xmm1, dword ptr [rip + 0x4205a5] */
L_1803ec3d3_0:;
L_1803ec3d3_1:;
wr(s->r,4672,4,mr(UINT64_C(0x18080c980),4));
L_1803ec3d3_2:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ec3d3_3:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ec3d3_4:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ec3d3_5:;
/* 1803ec3db: movaps xmmword ptr [rsp + 0x20], xmm6 */
L_1803ec3db_0:;
L_1803ec3db_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ec3db_2:;
wr(s->u,24,16,rd(s->r,4992,16));
L_1803ec3db_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,24,16));
L_1803ec3db_4:;
/* 1803ec3e0: movss xmm6, dword ptr [rip + 0x26085c] */
L_1803ec3e0_0:;
L_1803ec3e0_1:;
wr(s->r,4992,4,mr(UINT64_C(0x18064cc44),4));
L_1803ec3e0_2:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ec3e0_3:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ec3e0_4:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ec3e0_5:;
/* 1803ec3e8: mov rbx, rcx */
L_1803ec3e8_0:;
L_1803ec3e8_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ec3e8_2:;
/* 1803ec3eb: movaps xmm2, xmm1 */
L_1803ec3eb_0:;
L_1803ec3eb_1:;
wr(s->r,4736,4,rd(s->r,4672,4));
L_1803ec3eb_2:;
wr(s->r,4740,4,rd(s->r,4676,4));
L_1803ec3eb_3:;
wr(s->r,4744,4,rd(s->r,4680,4));
L_1803ec3eb_4:;
wr(s->r,4748,4,rd(s->r,4684,4));
L_1803ec3eb_5:;
/* 1803ec3ee: mov rcx, rdx */
L_1803ec3ee_0:;
L_1803ec3ee_1:;
wr(s->r,8,8,rd(s->r,16,8));
L_1803ec3ee_2:;
/* 1803ec3f1: mov rsi, r8 */
L_1803ec3f1_0:;
L_1803ec3f1_1:;
wr(s->r,48,8,rd(s->r,128,8));
L_1803ec3f1_2:;
/* 1803ec3f4: mov rdi, rdx */
L_1803ec3f4_0:;
L_1803ec3f4_1:;
wr(s->r,56,8,rd(s->r,16,8));
L_1803ec3f4_2:;
/* 1803ec3f7: movd xmm0, r9d */
L_1803ec3f7_0:;
L_1803ec3f7_1:;
wr(s->r,4608,16,rd(s->r,136,4));
L_1803ec3f7_2:;
/* 1803ec3fc: cvtdq2ps xmm0, xmm0 */
L_1803ec3fc_0:;
L_1803ec3fc_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ec3fc_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ec3fc_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ec3fc_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ec3fc_5:;
/* 1803ec3ff: divss xmm6, xmm0 */
L_1803ec3ff_0:;
L_1803ec3ff_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)/fv(rd(s->r,4608,4),4),4));
L_1803ec3ff_2:;
/* 1803ec403: call qword ptr [rip + 0x631d67] */
L_1803ec403_0:;
L_1803ec403_1:;
wr(s->u,62,8,mr(UINT64_C(0x180a1e170),8));
L_1803ec403_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec403_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec409)));
L_1803ec403_4:;
return (uint64_t)rd(s->u,62,8);
L_1803ec403_5:;
return UINT64_C(0x1803ec409);
}
uint64_t b_1803ec409(CPU*s){
/* 1803ec409: mov ecx, dword ptr [rbx + 8] */
L_1803ec409_0:;
L_1803ec409_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec409_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec409_3:;
wr(s->r,8,4,rd(s->u,20,4));
L_1803ec409_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ec409_5:;
/* 1803ec40c: mov eax, ecx */
L_1803ec40c_0:;
L_1803ec40c_1:;
wr(s->r,0,4,rd(s->r,8,4));
L_1803ec40c_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec40c_3:;
/* 1803ec40e: mov r11d, 1 */
L_1803ec40e_0:;
L_1803ec40e_1:;
wr(s->r,152,8,((U)UINT64_C(0x1)));
L_1803ec40e_2:;
/* 1803ec414: and eax, 0xfffffffe */
L_1803ec414_0:;
L_1803ec414_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec414_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec414_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xfffffffe))));
L_1803ec414_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec414_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec414_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ec414_7:;
wr(s->u,26,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ec414_8:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803ec414_9:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803ec414_10:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803ec414_11:;
/* 1803ec417: mov dword ptr [rsp + 0x40], r11d */
L_1803ec417_0:;
L_1803ec417_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ec417_2:;
wr(s->u,16,4,rd(s->r,152,4));
L_1803ec417_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ec417_4:;
/* 1803ec41c: cmp eax, 2 */
L_1803ec41c_0:;
L_1803ec41c_1:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803ec41c_2:;
wr(s->r,512,1,(rd(s->u,32,4)<((U)UINT64_C(0x2))));
L_1803ec41c_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,32,4),((U)UINT64_C(0x2)),4,1));
L_1803ec41c_4:;
wr(s->u,36,4,(rd(s->u,32,4)-((U)UINT64_C(0x2))));
L_1803ec41c_5:;
wr(s->r,519,1,(sx(rd(s->u,36,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec41c_6:;
wr(s->r,518,1,(rd(s->u,36,4)==((U)UINT64_C(0x0))));
L_1803ec41c_7:;
wr(s->u,26,4,(rd(s->u,36,4)&((U)UINT64_C(0xff))));
L_1803ec41c_8:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803ec41c_9:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803ec41c_10:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803ec41c_11:;
/* 1803ec41f: jle 0x1803ec449 */
L_1803ec41f_0:;
L_1803ec41f_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec41f_2:;
wr(s->u,25,1,((rd(s->r,518,1)!=0)||(rd(s->u,24,1)!=0)));
L_1803ec41f_3:;
if(rd(s->u,25,1)){return UINT64_C(0x1803ec449);}
L_1803ec41f_4:;
return UINT64_C(0x1803ec421);
}
uint64_t b_1803ec421(CPU*s){
/* 1803ec421: movsxd rax, r11d */
L_1803ec421_0:;
L_1803ec421_1:;
wr(s->r,0,8,(U)sx(rd(s->r,152,4),4));
L_1803ec421_2:;
/* 1803ec424: movsxd rcx, ecx */
L_1803ec424_0:;
L_1803ec424_1:;
wr(s->r,8,8,(U)sx(rd(s->r,8,4),4));
L_1803ec424_2:;
/* 1803ec427: sub rcx, rax */
L_1803ec427_0:;
L_1803ec427_1:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->r,0,8)));
L_1803ec427_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,0,8),8,1));
L_1803ec427_3:;
wr(s->r,8,8,(rd(s->r,8,8)-rd(s->r,0,8)));
L_1803ec427_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec427_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ec427_6:;
wr(s->u,41,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ec427_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803ec427_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803ec427_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803ec427_10:;
/* 1803ec42a: mov eax, dword ptr [rdi + rax*4] */
L_1803ec42a_0:;
L_1803ec42a_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803ec42a_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803ec42a_3:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803ec42a_4:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803ec42a_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec42a_6:;
/* 1803ec42d: mov dword ptr [rdi + rcx*4], eax */
L_1803ec42d_0:;
L_1803ec42d_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803ec42d_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803ec42d_3:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803ec42d_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,32,4));
L_1803ec42d_5:;
/* 1803ec430: mov r11d, dword ptr [rsp + 0x40] */
L_1803ec430_0:;
L_1803ec430_1:;
wr(s->u,24,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ec430_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ec430_3:;
wr(s->r,152,4,rd(s->u,36,4));
L_1803ec430_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ec430_5:;
/* 1803ec435: mov ecx, dword ptr [rbx + 8] */
L_1803ec435_0:;
L_1803ec435_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec435_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec435_3:;
wr(s->r,8,4,rd(s->u,36,4));
L_1803ec435_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ec435_5:;
/* 1803ec438: inc r11d */
L_1803ec438_0:;
L_1803ec438_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803ec438_2:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803ec438_3:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ec438_4:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec438_5:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803ec438_6:;
wr(s->u,41,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803ec438_7:;
wr(s->u,49,1,pop(rd(s->u,41,4),4));
L_1803ec438_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803ec438_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803ec438_10:;
/* 1803ec43b: mov eax, ecx */
L_1803ec43b_0:;
L_1803ec43b_1:;
wr(s->r,0,4,rd(s->r,8,4));
L_1803ec43b_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec43b_3:;
/* 1803ec43d: sar eax, 1 */
L_1803ec43d_0:;
L_1803ec43d_1:;
wr(s->u,59,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803ec43d_2:;
wr(s->r,512,1,(rd(s->u,59,4)!=((U)UINT64_C(0x0))));
L_1803ec43d_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec43d_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803ec43d_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec43d_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec43d_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ec43d_8:;
wr(s->u,41,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ec43d_9:;
wr(s->u,49,1,pop(rd(s->u,41,4),4));
L_1803ec43d_10:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803ec43d_11:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803ec43d_12:;
/* 1803ec43f: mov dword ptr [rsp + 0x40], r11d */
L_1803ec43f_0:;
L_1803ec43f_1:;
wr(s->u,24,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ec43f_2:;
wr(s->u,32,4,rd(s->r,152,4));
L_1803ec43f_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803ec43f_4:;
/* 1803ec444: cmp r11d, eax */
L_1803ec444_0:;
L_1803ec444_1:;
wr(s->u,51,4,rd(s->r,0,4));
L_1803ec444_2:;
wr(s->r,512,1,(rd(s->r,152,4)<rd(s->u,51,4)));
L_1803ec444_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),rd(s->u,51,4),4,1));
L_1803ec444_4:;
wr(s->u,55,4,(rd(s->r,152,4)-rd(s->u,51,4)));
L_1803ec444_5:;
wr(s->r,519,1,(sx(rd(s->u,55,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec444_6:;
wr(s->r,518,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803ec444_7:;
wr(s->u,41,4,(rd(s->u,55,4)&((U)UINT64_C(0xff))));
L_1803ec444_8:;
wr(s->u,49,1,pop(rd(s->u,41,4),4));
L_1803ec444_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803ec444_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803ec444_11:;
/* 1803ec447: jl 0x1803ec421 */
L_1803ec447_0:;
L_1803ec447_1:;
wr(s->u,40,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec447_2:;
if(rd(s->u,40,1)){goto L_1803ec421_0;}
L_1803ec447_3:;
return UINT64_C(0x1803ec449);
}
uint64_t b_1803ec449(CPU*s){
/* 1803ec449: movsxd rcx, dword ptr [rbx + 8] */
L_1803ec449_0:;
L_1803ec449_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec449_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec449_3:;
wr(s->r,8,8,(U)sx(rd(s->u,60,4),4));
L_1803ec449_4:;
/* 1803ec44d: movss xmm0, dword ptr [rip + 0x420e23] */
L_1803ec44d_0:;
L_1803ec44d_1:;
wr(s->r,4608,4,mr(UINT64_C(0x18080d278),4));
L_1803ec44d_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ec44d_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ec44d_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ec44d_5:;
/* 1803ec455: sar rcx, 1 */
L_1803ec455_0:;
L_1803ec455_1:;
wr(s->u,90,8,(rd(s->r,8,8)&((U)UINT64_C(0x1))));
L_1803ec455_2:;
wr(s->r,512,1,(rd(s->u,90,8)!=((U)UINT64_C(0x0))));
L_1803ec455_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec455_4:;
wr(s->r,8,8,((((U)UINT64_C(0x1))>=64)?(sx(rd(s->r,8,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,8,8),8)>>((U)UINT64_C(0x1)))));
L_1803ec455_5:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec455_6:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ec455_7:;
wr(s->u,72,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ec455_8:;
wr(s->u,80,1,pop(rd(s->u,72,8),8));
L_1803ec455_9:;
wr(s->u,81,1,(rd(s->u,80,1)&((U)UINT64_C(0x1))));
L_1803ec455_10:;
wr(s->r,514,1,(rd(s->u,81,1)==((U)UINT64_C(0x0))));
L_1803ec455_11:;
/* 1803ec458: mov eax, dword ptr [rdi + rcx*4 - 4] */
L_1803ec458_0:;
L_1803ec458_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,56,8)));
L_1803ec458_2:;
wr(s->u,40,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803ec458_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803ec458_4:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,48,8),4));
L_1803ec458_5:;
wr(s->r,0,4,rd(s->u,60,4));
L_1803ec458_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec458_7:;
/* 1803ec45c: mov dword ptr [rdi + rcx*4], eax */
L_1803ec45c_0:;
L_1803ec45c_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803ec45c_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803ec45c_3:;
wr(s->u,56,4,rd(s->r,0,4));
L_1803ec45c_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,56,4));
L_1803ec45c_5:;
/* 1803ec45f: mov edx, dword ptr [rbx + 8] */
L_1803ec45f_0:;
L_1803ec45f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec45f_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec45f_3:;
wr(s->r,16,4,rd(s->u,60,4));
L_1803ec45f_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ec45f_5:;
/* 1803ec462: mov rcx, qword ptr [rbx + 0x28] */
L_1803ec462_0:;
L_1803ec462_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803ec462_2:;
wr(s->u,64,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec462_3:;
wr(s->r,8,8,rd(s->u,64,8));
L_1803ec462_4:;
/* 1803ec466: movss dword ptr [rsp + 0x48], xmm0 */
L_1803ec466_0:;
L_1803ec466_1:;
wr(s->u,24,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803ec466_2:;
wr(s->u,56,4,rd(s->r,4608,4));
L_1803ec466_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,56,4));
L_1803ec466_4:;
/* 1803ec46c: call qword ptr [rip + 0x631d36] */
L_1803ec46c_0:;
L_1803ec46c_1:;
wr(s->u,82,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803ec46c_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec46c_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec472)));
L_1803ec46c_4:;
return (uint64_t)rd(s->u,82,8);
L_1803ec46c_5:;
return UINT64_C(0x1803ec472);
}
uint64_t b_1803ec472(CPU*s){
/* 1803ec472: movss xmm0, dword ptr [rsp + 0x48] */
L_1803ec472_0:;
L_1803ec472_1:;
wr(s->u,8,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803ec472_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ec472_3:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803ec472_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ec472_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ec472_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ec472_7:;
/* 1803ec478: comiss xmm0, dword ptr [rbx + 0x14] */
L_1803ec478_0:;
L_1803ec478_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x14))));
L_1803ec478_2:;
wr(s->u,21,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803ec478_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec478_4:;
wr(s->u,22,1,isnan(fv(rd(s->u,16,4),4)));
L_1803ec478_5:;
wr(s->r,514,1,((rd(s->u,21,1)!=0)||(rd(s->u,22,1)!=0)));
L_1803ec478_6:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec478_7:;
wr(s->u,23,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->u,16,4),4)));
L_1803ec478_8:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,23,1)));
L_1803ec478_9:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec478_10:;
wr(s->u,24,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->u,16,4),4)));
L_1803ec478_11:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,24,1)));
L_1803ec478_12:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec478_13:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ec478_14:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ec478_15:;
/* 1803ec47c: jbe 0x1803ec569 */
L_1803ec47c_0:;
L_1803ec47c_1:;
wr(s->u,20,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803ec47c_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803ec569);}
L_1803ec47c_3:;
return UINT64_C(0x1803ec482);
}
uint64_t b_1803ec482(CPU*s){
/* 1803ec482: nop word ptr [rax + rax] */
L_1803ec482_0:;
L_1803ec482_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ec482_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803ec482_3:;
/* 1803ec490: mov rcx, qword ptr [rbx + 0x38] */
L_1803ec490_0:;
L_1803ec490_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803ec490_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec490_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803ec490_4:;
/* 1803ec494: mov rdx, qword ptr [rbx + 0x20] */
L_1803ec494_0:;
L_1803ec494_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ec494_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec494_3:;
wr(s->r,16,8,rd(s->u,24,8));
L_1803ec494_4:;
/* 1803ec498: mov r8, rdi */
L_1803ec498_0:;
L_1803ec498_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803ec498_2:;
/* 1803ec49b: mov rax, qword ptr [rcx] */
L_1803ec49b_0:;
L_1803ec49b_1:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803ec49b_2:;
wr(s->r,0,8,rd(s->u,24,8));
L_1803ec49b_3:;
/* 1803ec49e: call qword ptr [rax] */
L_1803ec49e_0:;
L_1803ec49e_1:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803ec49e_2:;
wr(s->u,32,8,rd(s->u,24,8));
L_1803ec49e_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec49e_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec4a0)));
L_1803ec49e_5:;
return (uint64_t)rd(s->u,32,8);
L_1803ec49e_6:;
return UINT64_C(0x1803ec4a0);
}
uint64_t b_1803ec490(CPU*s){
/* 1803ec490: mov rcx, qword ptr [rbx + 0x38] */
L_1803ec490_0:;
L_1803ec490_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803ec490_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec490_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803ec490_4:;
/* 1803ec494: mov rdx, qword ptr [rbx + 0x20] */
L_1803ec494_0:;
L_1803ec494_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ec494_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec494_3:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803ec494_4:;
/* 1803ec498: mov r8, rdi */
L_1803ec498_0:;
L_1803ec498_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803ec498_2:;
/* 1803ec49b: mov rax, qword ptr [rcx] */
L_1803ec49b_0:;
L_1803ec49b_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803ec49b_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803ec49b_3:;
/* 1803ec49e: call qword ptr [rax] */
L_1803ec49e_0:;
L_1803ec49e_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803ec49e_2:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803ec49e_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec49e_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec4a0)));
L_1803ec49e_5:;
return (uint64_t)rd(s->u,16,8);
L_1803ec49e_6:;
return UINT64_C(0x1803ec4a0);
}
uint64_t b_1803ec4a0(CPU*s){
/* 1803ec4a0: mov r8d, dword ptr [rbx + 8] */
L_1803ec4a0_0:;
L_1803ec4a0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec4a0_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec4a0_3:;
wr(s->r,128,4,rd(s->u,8,4));
L_1803ec4a0_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ec4a0_5:;
/* 1803ec4a4: mov rdx, qword ptr [rbx + 0x28] */
L_1803ec4a4_0:;
L_1803ec4a4_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803ec4a4_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec4a4_3:;
wr(s->r,16,8,rd(s->u,12,8));
L_1803ec4a4_4:;
/* 1803ec4a8: mov rcx, qword ptr [rbx + 0x20] */
L_1803ec4a8_0:;
L_1803ec4a8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ec4a8_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec4a8_3:;
wr(s->r,8,8,rd(s->u,12,8));
L_1803ec4a8_4:;
/* 1803ec4ac: call qword ptr [rip + 0x631c7e] */
L_1803ec4ac_0:;
L_1803ec4ac_1:;
wr(s->u,20,8,mr(UINT64_C(0x180a1e130),8));
L_1803ec4ac_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec4ac_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec4b2)));
L_1803ec4ac_4:;
return (uint64_t)rd(s->u,20,8);
L_1803ec4ac_5:;
return UINT64_C(0x1803ec4b2);
}
uint64_t b_1803ec4b2(CPU*s){
/* 1803ec4b2: mov r8d, dword ptr [rbx + 8] */
L_1803ec4b2_0:;
L_1803ec4b2_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec4b2_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec4b2_3:;
wr(s->r,128,4,rd(s->u,8,4));
L_1803ec4b2_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ec4b2_5:;
/* 1803ec4b6: mov rdx, qword ptr [rbx + 0x30] */
L_1803ec4b6_0:;
L_1803ec4b6_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ec4b6_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec4b6_3:;
wr(s->r,16,8,rd(s->u,12,8));
L_1803ec4b6_4:;
/* 1803ec4ba: mov rcx, qword ptr [rbx + 0x20] */
L_1803ec4ba_0:;
L_1803ec4ba_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ec4ba_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec4ba_3:;
wr(s->r,8,8,rd(s->u,12,8));
L_1803ec4ba_4:;
/* 1803ec4be: call qword ptr [rip + 0x631d14] */
L_1803ec4be_0:;
L_1803ec4be_1:;
wr(s->u,20,8,mr(UINT64_C(0x180a1e1d8),8));
L_1803ec4be_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec4be_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec4c4)));
L_1803ec4be_4:;
return (uint64_t)rd(s->u,20,8);
L_1803ec4be_5:;
return UINT64_C(0x1803ec4c4);
}
uint64_t b_1803ec4c4(CPU*s){
/* 1803ec4c4: mov r8d, dword ptr [rbx + 8] */
L_1803ec4c4_0:;
L_1803ec4c4_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec4c4_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec4c4_3:;
wr(s->r,128,4,rd(s->u,8,4));
L_1803ec4c4_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ec4c4_5:;
/* 1803ec4c8: mov rdx, qword ptr [rbx + 0x28] */
L_1803ec4c8_0:;
L_1803ec4c8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803ec4c8_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec4c8_3:;
wr(s->r,16,8,rd(s->u,12,8));
L_1803ec4c8_4:;
/* 1803ec4cc: mov rcx, qword ptr [rbx + 0x20] */
L_1803ec4cc_0:;
L_1803ec4cc_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ec4cc_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec4cc_3:;
wr(s->r,8,8,rd(s->u,12,8));
L_1803ec4cc_4:;
/* 1803ec4d0: call qword ptr [rip + 0x631c6a] */
L_1803ec4d0_0:;
L_1803ec4d0_1:;
wr(s->u,20,8,mr(UINT64_C(0x180a1e140),8));
L_1803ec4d0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec4d0_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec4d6)));
L_1803ec4d0_4:;
return (uint64_t)rd(s->u,20,8);
L_1803ec4d0_5:;
return UINT64_C(0x1803ec4d6);
}
uint64_t b_1803ec4d6(CPU*s){
/* 1803ec4d6: movsxd r8, dword ptr [rbx + 8] */
L_1803ec4d6_0:;
L_1803ec4d6_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec4d6_2:;
wr(s->u,13,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ec4d6_3:;
wr(s->r,128,8,(U)sx(rd(s->u,13,4),4));
L_1803ec4d6_4:;
/* 1803ec4da: mov rdx, qword ptr [rbx + 0x20] */
L_1803ec4da_0:;
L_1803ec4da_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ec4da_2:;
wr(s->u,17,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803ec4da_3:;
wr(s->r,16,8,rd(s->u,17,8));
L_1803ec4da_4:;
/* 1803ec4de: mov rcx, qword ptr [rbx + 0x28] */
L_1803ec4de_0:;
L_1803ec4de_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803ec4de_2:;
wr(s->u,17,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803ec4de_3:;
wr(s->r,8,8,rd(s->u,17,8));
L_1803ec4de_4:;
/* 1803ec4e2: shl r8, 2 */
L_1803ec4e2_0:;
L_1803ec4e2_1:;
wr(s->u,65,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803ec4e2_2:;
wr(s->u,69,8,rd(s->r,128,8));
L_1803ec4e2_3:;
wr(s->r,128,8,((rd(s->u,65,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,65,4))));
L_1803ec4e2_4:;
wr(s->u,48,1,(rd(s->u,65,4)==((U)UINT64_C(0x0))));
L_1803ec4e2_5:;
wr(s->u,49,4,(rd(s->u,65,4)-((U)UINT64_C(0x1))));
L_1803ec4e2_6:;
wr(s->u,53,8,((rd(s->u,49,4)>=64)?0:(rd(s->u,69,8)<<rd(s->u,49,4))));
L_1803ec4e2_7:;
wr(s->u,61,1,(sx(rd(s->u,53,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec4e2_8:;
wr(s->u,0,1,rd(s->u,48,1));
L_1803ec4e2_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ec4e2_10:;
wr(s->u,2,1,(!rd(s->u,48,1)));
L_1803ec4e2_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec4e2_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,61,1)));
L_1803ec4e2_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec4e2_14:;
wr(s->u,62,1,(rd(s->u,65,4)==((U)UINT64_C(0x1))));
L_1803ec4e2_15:;
wr(s->u,63,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec4e2_16:;
wr(s->u,64,1,(rd(s->r,512,1)^rd(s->u,63,1)));
L_1803ec4e2_17:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803ec4e2_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,64,1)));
L_1803ec4e2_19:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803ec4e2_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec4e2_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ec4e2_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec4e2_23:;
wr(s->u,25,1,(rd(s->u,65,4)!=((U)UINT64_C(0x0))));
L_1803ec4e2_24:;
wr(s->u,26,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec4e2_25:;
wr(s->u,27,1,(!rd(s->u,25,1)));
L_1803ec4e2_26:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,519,1)));
L_1803ec4e2_27:;
wr(s->u,29,1,(rd(s->u,25,1)&rd(s->u,26,1)));
L_1803ec4e2_28:;
wr(s->r,519,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803ec4e2_29:;
wr(s->u,30,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ec4e2_30:;
wr(s->u,31,1,(!rd(s->u,25,1)));
L_1803ec4e2_31:;
wr(s->u,32,1,(rd(s->u,31,1)&rd(s->r,518,1)));
L_1803ec4e2_32:;
wr(s->u,33,1,(rd(s->u,25,1)&rd(s->u,30,1)));
L_1803ec4e2_33:;
wr(s->r,518,1,(rd(s->u,32,1)|rd(s->u,33,1)));
L_1803ec4e2_34:;
wr(s->u,34,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ec4e2_35:;
wr(s->u,42,1,pop(rd(s->u,34,8),8));
L_1803ec4e2_36:;
wr(s->u,43,1,(rd(s->u,42,1)&((U)UINT64_C(0x1))));
L_1803ec4e2_37:;
wr(s->u,44,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803ec4e2_38:;
wr(s->u,45,1,(!rd(s->u,25,1)));
L_1803ec4e2_39:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,514,1)));
L_1803ec4e2_40:;
wr(s->u,47,1,(rd(s->u,25,1)&rd(s->u,44,1)));
L_1803ec4e2_41:;
wr(s->r,514,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803ec4e2_42:;
/* 1803ec4e6: call 0x18000d550 */
L_1803ec4e6_0:;
L_1803ec4e6_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec4e6_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec4eb)));
L_1803ec4e6_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803ec4e6_4:;
return UINT64_C(0x1803ec4eb);
}
uint64_t b_1803ec4eb(CPU*s){
/* 1803ec4eb: mov rcx, qword ptr [rbx + 0x38] */
L_1803ec4eb_0:;
L_1803ec4eb_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803ec4eb_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec4eb_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803ec4eb_4:;
/* 1803ec4ef: mov r8, qword ptr [rbx + 0x20] */
L_1803ec4ef_0:;
L_1803ec4ef_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ec4ef_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec4ef_3:;
wr(s->r,128,8,rd(s->u,8,8));
L_1803ec4ef_4:;
/* 1803ec4f3: mov rax, qword ptr [rcx] */
L_1803ec4f3_0:;
L_1803ec4f3_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803ec4f3_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803ec4f3_3:;
/* 1803ec4f6: mov rdx, rsi */
L_1803ec4f6_0:;
L_1803ec4f6_1:;
wr(s->r,16,8,rd(s->r,48,8));
L_1803ec4f6_2:;
/* 1803ec4f9: call qword ptr [rax + 8] */
L_1803ec4f9_0:;
L_1803ec4f9_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803ec4f9_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec4f9_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803ec4f9_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec4f9_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec4fc)));
L_1803ec4f9_6:;
return (uint64_t)rd(s->u,16,8);
L_1803ec4f9_7:;
return UINT64_C(0x1803ec4fc);
}
uint64_t b_1803ec4fc(CPU*s){
/* 1803ec4fc: mov r8d, dword ptr [rbx + 8] */
L_1803ec4fc_0:;
L_1803ec4fc_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec4fc_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec4fc_3:;
wr(s->r,128,4,rd(s->u,8,4));
L_1803ec4fc_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ec4fc_5:;
/* 1803ec500: mov rcx, rsi */
L_1803ec500_0:;
L_1803ec500_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1803ec500_2:;
/* 1803ec503: movaps xmm1, xmm6 */
L_1803ec503_0:;
L_1803ec503_1:;
wr(s->r,4672,4,rd(s->r,4992,4));
L_1803ec503_2:;
wr(s->r,4676,4,rd(s->r,4996,4));
L_1803ec503_3:;
wr(s->r,4680,4,rd(s->r,5000,4));
L_1803ec503_4:;
wr(s->r,4684,4,rd(s->r,5004,4));
L_1803ec503_5:;
/* 1803ec506: call qword ptr [rip + 0x631cd4] */
L_1803ec506_0:;
L_1803ec506_1:;
wr(s->u,12,8,mr(UINT64_C(0x180a1e1e0),8));
L_1803ec506_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec506_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec50c)));
L_1803ec506_4:;
return (uint64_t)rd(s->u,12,8);
L_1803ec506_5:;
return UINT64_C(0x1803ec50c);
}
uint64_t b_1803ec50c(CPU*s){
/* 1803ec50c: mov r8d, dword ptr [rbx + 8] */
L_1803ec50c_0:;
L_1803ec50c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec50c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec50c_3:;
wr(s->r,128,4,rd(s->u,8,4));
L_1803ec50c_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ec50c_5:;
/* 1803ec510: mov rdx, rsi */
L_1803ec510_0:;
L_1803ec510_1:;
wr(s->r,16,8,rd(s->r,48,8));
L_1803ec510_2:;
/* 1803ec513: mov rcx, rdi */
L_1803ec513_0:;
L_1803ec513_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803ec513_2:;
/* 1803ec516: call qword ptr [rip + 0x631cac] */
L_1803ec516_0:;
L_1803ec516_1:;
wr(s->u,12,8,mr(UINT64_C(0x180a1e1c8),8));
L_1803ec516_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec516_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec51c)));
L_1803ec516_4:;
return (uint64_t)rd(s->u,12,8);
L_1803ec516_5:;
return UINT64_C(0x1803ec51c);
}
uint64_t b_1803ec51c(CPU*s){
/* 1803ec51c: movsxd r8, dword ptr [rbx + 8] */
L_1803ec51c_0:;
L_1803ec51c_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec51c_2:;
wr(s->u,13,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ec51c_3:;
wr(s->r,128,8,(U)sx(rd(s->u,13,4),4));
L_1803ec51c_4:;
/* 1803ec520: mov rcx, qword ptr [rbx + 0x20] */
L_1803ec520_0:;
L_1803ec520_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ec520_2:;
wr(s->u,17,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803ec520_3:;
wr(s->r,8,8,rd(s->u,17,8));
L_1803ec520_4:;
/* 1803ec524: shl r8, 2 */
L_1803ec524_0:;
L_1803ec524_1:;
wr(s->u,65,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803ec524_2:;
wr(s->u,69,8,rd(s->r,128,8));
L_1803ec524_3:;
wr(s->r,128,8,((rd(s->u,65,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,65,4))));
L_1803ec524_4:;
wr(s->u,48,1,(rd(s->u,65,4)==((U)UINT64_C(0x0))));
L_1803ec524_5:;
wr(s->u,49,4,(rd(s->u,65,4)-((U)UINT64_C(0x1))));
L_1803ec524_6:;
wr(s->u,53,8,((rd(s->u,49,4)>=64)?0:(rd(s->u,69,8)<<rd(s->u,49,4))));
L_1803ec524_7:;
wr(s->u,61,1,(sx(rd(s->u,53,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec524_8:;
wr(s->u,0,1,rd(s->u,48,1));
L_1803ec524_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ec524_10:;
wr(s->u,2,1,(!rd(s->u,48,1)));
L_1803ec524_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec524_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,61,1)));
L_1803ec524_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec524_14:;
wr(s->u,62,1,(rd(s->u,65,4)==((U)UINT64_C(0x1))));
L_1803ec524_15:;
wr(s->u,63,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec524_16:;
wr(s->u,64,1,(rd(s->r,512,1)^rd(s->u,63,1)));
L_1803ec524_17:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803ec524_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,64,1)));
L_1803ec524_19:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803ec524_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec524_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ec524_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec524_23:;
wr(s->u,25,1,(rd(s->u,65,4)!=((U)UINT64_C(0x0))));
L_1803ec524_24:;
wr(s->u,26,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec524_25:;
wr(s->u,27,1,(!rd(s->u,25,1)));
L_1803ec524_26:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,519,1)));
L_1803ec524_27:;
wr(s->u,29,1,(rd(s->u,25,1)&rd(s->u,26,1)));
L_1803ec524_28:;
wr(s->r,519,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803ec524_29:;
wr(s->u,30,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ec524_30:;
wr(s->u,31,1,(!rd(s->u,25,1)));
L_1803ec524_31:;
wr(s->u,32,1,(rd(s->u,31,1)&rd(s->r,518,1)));
L_1803ec524_32:;
wr(s->u,33,1,(rd(s->u,25,1)&rd(s->u,30,1)));
L_1803ec524_33:;
wr(s->r,518,1,(rd(s->u,32,1)|rd(s->u,33,1)));
L_1803ec524_34:;
wr(s->u,34,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ec524_35:;
wr(s->u,42,1,pop(rd(s->u,34,8),8));
L_1803ec524_36:;
wr(s->u,43,1,(rd(s->u,42,1)&((U)UINT64_C(0x1))));
L_1803ec524_37:;
wr(s->u,44,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803ec524_38:;
wr(s->u,45,1,(!rd(s->u,25,1)));
L_1803ec524_39:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,514,1)));
L_1803ec524_40:;
wr(s->u,47,1,(rd(s->u,25,1)&rd(s->u,44,1)));
L_1803ec524_41:;
wr(s->r,514,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803ec524_42:;
/* 1803ec528: mov rdx, rdi */
L_1803ec528_0:;
L_1803ec528_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803ec528_2:;
/* 1803ec52b: call 0x18000d550 */
L_1803ec52b_0:;
L_1803ec52b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec52b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec530)));
L_1803ec52b_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803ec52b_4:;
return UINT64_C(0x1803ec530);
}
uint64_t b_1803ec530(CPU*s){
/* 1803ec530: mov r8d, dword ptr [rbx + 8] */
L_1803ec530_0:;
L_1803ec530_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec530_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec530_3:;
wr(s->r,128,4,rd(s->u,8,4));
L_1803ec530_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ec530_5:;
/* 1803ec534: mov rcx, qword ptr [rbx + 0x20] */
L_1803ec534_0:;
L_1803ec534_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ec534_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec534_3:;
wr(s->r,8,8,rd(s->u,12,8));
L_1803ec534_4:;
/* 1803ec538: mov rdx, rsi */
L_1803ec538_0:;
L_1803ec538_1:;
wr(s->r,16,8,rd(s->r,48,8));
L_1803ec538_2:;
/* 1803ec53b: call qword ptr [rip + 0x631bef] */
L_1803ec53b_0:;
L_1803ec53b_1:;
wr(s->u,20,8,mr(UINT64_C(0x180a1e130),8));
L_1803ec53b_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec53b_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec541)));
L_1803ec53b_4:;
return (uint64_t)rd(s->u,20,8);
L_1803ec53b_5:;
return UINT64_C(0x1803ec541);
}
uint64_t b_1803ec541(CPU*s){
/* 1803ec541: mov r9d, dword ptr [rbx + 8] */
L_1803ec541_0:;
L_1803ec541_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec541_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec541_3:;
wr(s->r,136,4,rd(s->u,16,4));
L_1803ec541_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ec541_5:;
/* 1803ec545: mov rcx, qword ptr [rbx + 0x20] */
L_1803ec545_0:;
L_1803ec545_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ec545_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec545_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803ec545_4:;
/* 1803ec549: lea r8, [rsp + 0x40] */
L_1803ec549_0:;
L_1803ec549_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ec549_2:;
wr(s->r,128,8,rd(s->u,8,8));
L_1803ec549_3:;
/* 1803ec54e: lea rdx, [rsp + 0x48] */
L_1803ec54e_0:;
L_1803ec54e_1:;
wr(s->u,8,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803ec54e_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803ec54e_3:;
/* 1803ec553: call qword ptr [rip + 0x631c8f] */
L_1803ec553_0:;
L_1803ec553_1:;
wr(s->u,28,8,mr(UINT64_C(0x180a1e1e8),8));
L_1803ec553_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec553_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec559)));
L_1803ec553_4:;
return (uint64_t)rd(s->u,28,8);
L_1803ec553_5:;
return UINT64_C(0x1803ec559);
}
uint64_t b_1803ec559(CPU*s){
/* 1803ec559: movss xmm5, dword ptr [rsp + 0x48] */
L_1803ec559_0:;
L_1803ec559_1:;
wr(s->u,8,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803ec559_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ec559_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803ec559_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ec559_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ec559_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ec559_7:;
/* 1803ec55f: comiss xmm5, dword ptr [rbx + 0x14] */
L_1803ec55f_0:;
L_1803ec55f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x14))));
L_1803ec55f_2:;
wr(s->u,22,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803ec55f_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec55f_4:;
wr(s->u,23,1,isnan(fv(rd(s->u,16,4),4)));
L_1803ec55f_5:;
wr(s->r,514,1,((rd(s->u,22,1)!=0)||(rd(s->u,23,1)!=0)));
L_1803ec55f_6:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec55f_7:;
wr(s->u,24,1,(fv(rd(s->r,4928,4),4)==fv(rd(s->u,16,4),4)));
L_1803ec55f_8:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,24,1)));
L_1803ec55f_9:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec55f_10:;
wr(s->u,25,1,(fv(rd(s->r,4928,4),4)<fv(rd(s->u,16,4),4)));
L_1803ec55f_11:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,25,1)));
L_1803ec55f_12:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec55f_13:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ec55f_14:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ec55f_15:;
/* 1803ec563: ja 0x1803ec490 */
L_1803ec563_0:;
L_1803ec563_1:;
wr(s->u,20,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803ec563_2:;
wr(s->u,21,1,(!rd(s->u,20,1)));
L_1803ec563_3:;
if(rd(s->u,21,1)){return UINT64_C(0x1803ec490);}
L_1803ec563_4:;
return UINT64_C(0x1803ec569);
}
uint64_t b_1803ec569(CPU*s){
/* 1803ec569: call 0x1803e10a0 */
L_1803ec569_0:;
L_1803ec569_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec569_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec56e)));
L_1803ec569_3:;
return (uint64_t)UINT64_C(0x1803e10a0);
L_1803ec569_4:;
return UINT64_C(0x1803ec56e);
}
uint64_t b_1803ec56e(CPU*s){
/* 1803ec56e: test eax, eax */
L_1803ec56e_0:;
L_1803ec56e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec56e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec56e_3:;
wr(s->u,8,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803ec56e_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec56e_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803ec56e_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803ec56e_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803ec56e_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803ec56e_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803ec56e_10:;
/* 1803ec570: jle 0x1803ec5e1 */
L_1803ec570_0:;
L_1803ec570_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec570_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803ec570_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803ec5e1);}
L_1803ec570_4:;
return UINT64_C(0x1803ec572);
}
uint64_t b_1803ec572(CPU*s){
/* 1803ec572: cmp eax, 4 */
L_1803ec572_0:;
L_1803ec572_1:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ec572_2:;
wr(s->r,512,1,(rd(s->u,8,4)<((U)UINT64_C(0x4))));
L_1803ec572_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),((U)UINT64_C(0x4)),4,1));
L_1803ec572_4:;
wr(s->u,12,4,(rd(s->u,8,4)-((U)UINT64_C(0x4))));
L_1803ec572_5:;
wr(s->r,519,1,(sx(rd(s->u,12,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec572_6:;
wr(s->r,518,1,(rd(s->u,12,4)==((U)UINT64_C(0x0))));
L_1803ec572_7:;
wr(s->u,2,4,(rd(s->u,12,4)&((U)UINT64_C(0xff))));
L_1803ec572_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803ec572_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803ec572_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803ec572_11:;
/* 1803ec575: jle 0x1803ec599 */
L_1803ec575_0:;
L_1803ec575_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec575_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803ec575_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803ec599);}
L_1803ec575_4:;
return UINT64_C(0x1803ec577);
}
uint64_t b_1803ec577(CPU*s){
/* 1803ec577: add eax, -6 */
L_1803ec577_0:;
L_1803ec577_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0xfffffffa)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ec577_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0xfffffffa)),4,0));
L_1803ec577_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0xfffffffa))));
L_1803ec577_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec577_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec577_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ec577_7:;
wr(s->u,2,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ec577_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803ec577_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803ec577_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803ec577_11:;
/* 1803ec57a: cmp eax, 2 */
L_1803ec57a_0:;
L_1803ec57a_1:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ec57a_2:;
wr(s->r,512,1,(rd(s->u,8,4)<((U)UINT64_C(0x2))));
L_1803ec57a_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),((U)UINT64_C(0x2)),4,1));
L_1803ec57a_4:;
wr(s->u,12,4,(rd(s->u,8,4)-((U)UINT64_C(0x2))));
L_1803ec57a_5:;
wr(s->r,519,1,(sx(rd(s->u,12,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec57a_6:;
wr(s->r,518,1,(rd(s->u,12,4)==((U)UINT64_C(0x0))));
L_1803ec57a_7:;
wr(s->u,2,4,(rd(s->u,12,4)&((U)UINT64_C(0xff))));
L_1803ec57a_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803ec57a_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803ec57a_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803ec57a_11:;
/* 1803ec57d: ja 0x1803ec5e1 */
L_1803ec57d_0:;
L_1803ec57d_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803ec57d_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803ec57d_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803ec5e1);}
L_1803ec57d_4:;
return UINT64_C(0x1803ec57f);
}
uint64_t b_1803ec57f(CPU*s){
/* 1803ec57f: movsxd rcx, dword ptr [rbx + 8] */
L_1803ec57f_0:;
L_1803ec57f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec57f_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec57f_3:;
wr(s->r,8,8,(U)sx(rd(s->u,24,4),4));
L_1803ec57f_4:;
/* 1803ec583: mov rdx, rsi */
L_1803ec583_0:;
L_1803ec583_1:;
wr(s->r,16,8,rd(s->r,48,8));
L_1803ec583_2:;
/* 1803ec586: mov eax, ecx */
L_1803ec586_0:;
L_1803ec586_1:;
wr(s->r,0,4,rd(s->r,8,4));
L_1803ec586_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec586_3:;
/* 1803ec588: sar eax, 1 */
L_1803ec588_0:;
L_1803ec588_1:;
wr(s->u,38,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803ec588_2:;
wr(s->r,512,1,(rd(s->u,38,4)!=((U)UINT64_C(0x0))));
L_1803ec588_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec588_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803ec588_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec588_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec588_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ec588_8:;
wr(s->u,28,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ec588_9:;
wr(s->u,36,1,pop(rd(s->u,28,4),4));
L_1803ec588_10:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803ec588_11:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803ec588_12:;
/* 1803ec58a: movsxd r8, eax */
L_1803ec58a_0:;
L_1803ec58a_1:;
wr(s->r,128,8,(U)sx(rd(s->r,0,4),4));
L_1803ec58a_2:;
/* 1803ec58d: mov rax, rcx */
L_1803ec58d_0:;
L_1803ec58d_1:;
wr(s->r,0,8,rd(s->r,8,8));
L_1803ec58d_2:;
/* 1803ec590: sar rax, 1 */
L_1803ec590_0:;
L_1803ec590_1:;
wr(s->u,42,8,(rd(s->r,0,8)&((U)UINT64_C(0x1))));
L_1803ec590_2:;
wr(s->r,512,1,(rd(s->u,42,8)!=((U)UINT64_C(0x0))));
L_1803ec590_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec590_4:;
wr(s->r,0,8,((((U)UINT64_C(0x1))>=64)?(sx(rd(s->r,0,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,0,8),8)>>((U)UINT64_C(0x1)))));
L_1803ec590_5:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec590_6:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ec590_7:;
wr(s->u,28,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ec590_8:;
wr(s->u,36,1,pop(rd(s->u,28,8),8));
L_1803ec590_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803ec590_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803ec590_11:;
/* 1803ec593: lea rcx, [rsi + rax*4] */
L_1803ec593_0:;
L_1803ec593_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803ec593_2:;
wr(s->u,16,8,(rd(s->r,48,8)+rd(s->u,8,8)));
L_1803ec593_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803ec593_4:;
/* 1803ec597: jmp 0x1803ec5d8 */
L_1803ec597_0:;
L_1803ec597_1:;
return UINT64_C(0x1803ec5d8);
L_1803ec597_2:;
return UINT64_C(0x1803ec599);
}
uint64_t b_1803ec599(CPU*s){
/* 1803ec599: xor edx, edx */
L_1803ec599_0:;
L_1803ec599_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec599_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec599_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803ec599_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ec599_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec599_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ec599_7:;
wr(s->u,14,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ec599_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803ec599_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803ec599_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803ec599_11:;
/* 1803ec59b: cmp dword ptr [rbx + 8], edx */
L_1803ec59b_0:;
L_1803ec59b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec59b_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec59b_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803ec59b_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,16,4)));
L_1803ec59b_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,16,4),4,1));
L_1803ec59b_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,16,4)));
L_1803ec59b_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec59b_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803ec59b_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803ec59b_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803ec59b_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803ec59b_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803ec59b_13:;
/* 1803ec59e: jle 0x1803ec5cd */
L_1803ec59e_0:;
L_1803ec59e_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec59e_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803ec59e_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803ec5cd);}
L_1803ec59e_4:;
return UINT64_C(0x1803ec5a0);
}
uint64_t b_1803ec5a0(CPU*s){
/* 1803ec5a0: mov r8, rdx */
L_1803ec5a0_0:;
L_1803ec5a0_1:;
wr(s->r,128,8,rd(s->r,16,8));
L_1803ec5a0_2:;
/* 1803ec5a3: nop word ptr [rax + rax] */
L_1803ec5a3_0:;
L_1803ec5a3_1:;
wr(s->u,48,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ec5a3_2:;
wr(s->u,56,8,(rd(s->r,0,8)+rd(s->u,48,8)));
L_1803ec5a3_3:;
/* 1803ec5b0: mov rcx, qword ptr [rbx + 0x20] */
L_1803ec5b0_0:;
L_1803ec5b0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ec5b0_2:;
wr(s->u,72,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec5b0_3:;
wr(s->r,8,8,rd(s->u,72,8));
L_1803ec5b0_4:;
/* 1803ec5b4: movsxd rax, edx */
L_1803ec5b4_0:;
L_1803ec5b4_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803ec5b4_2:;
/* 1803ec5b7: inc edx */
L_1803ec5b7_0:;
L_1803ec5b7_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803ec5b7_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803ec5b7_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ec5b7_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec5b7_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ec5b7_6:;
wr(s->u,81,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ec5b7_7:;
wr(s->u,89,1,pop(rd(s->u,81,4),4));
L_1803ec5b7_8:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803ec5b7_9:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803ec5b7_10:;
/* 1803ec5b9: sar rax, 1 */
L_1803ec5b9_0:;
L_1803ec5b9_1:;
wr(s->u,99,8,(rd(s->r,0,8)&((U)UINT64_C(0x1))));
L_1803ec5b9_2:;
wr(s->r,512,1,(rd(s->u,99,8)!=((U)UINT64_C(0x0))));
L_1803ec5b9_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec5b9_4:;
wr(s->r,0,8,((((U)UINT64_C(0x1))>=64)?(sx(rd(s->r,0,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,0,8),8)>>((U)UINT64_C(0x1)))));
L_1803ec5b9_5:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec5b9_6:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ec5b9_7:;
wr(s->u,81,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ec5b9_8:;
wr(s->u,89,1,pop(rd(s->u,81,8),8));
L_1803ec5b9_9:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803ec5b9_10:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803ec5b9_11:;
/* 1803ec5bc: add r8, 4 */
L_1803ec5bc_0:;
L_1803ec5bc_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803ec5bc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x4)),8,0));
L_1803ec5bc_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803ec5bc_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec5bc_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ec5bc_6:;
wr(s->u,81,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ec5bc_7:;
wr(s->u,89,1,pop(rd(s->u,81,8),8));
L_1803ec5bc_8:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803ec5bc_9:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803ec5bc_10:;
/* 1803ec5c0: mov eax, dword ptr [rsi + rax*4] */
L_1803ec5c0_0:;
L_1803ec5c0_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803ec5c0_2:;
wr(s->u,16,8,(rd(s->r,48,8)+rd(s->u,8,8)));
L_1803ec5c0_3:;
wr(s->u,68,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803ec5c0_4:;
wr(s->r,0,4,rd(s->u,68,4));
L_1803ec5c0_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec5c0_6:;
/* 1803ec5c3: mov dword ptr [r8 + rcx - 4], eax */
L_1803ec5c3_0:;
L_1803ec5c3_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,128,8)));
L_1803ec5c3_2:;
wr(s->u,32,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803ec5c3_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803ec5c3_4:;
wr(s->u,64,4,rd(s->r,0,4));
L_1803ec5c3_5:;
mw((uint64_t)rd(s->u,40,8),4,rd(s->u,64,4));
L_1803ec5c3_6:;
/* 1803ec5c8: cmp edx, dword ptr [rbx + 8] */
L_1803ec5c8_0:;
L_1803ec5c8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec5c8_2:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec5c8_3:;
wr(s->u,91,4,rd(s->u,64,4));
L_1803ec5c8_4:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,91,4)));
L_1803ec5c8_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,91,4),4,1));
L_1803ec5c8_6:;
wr(s->u,95,4,(rd(s->r,16,4)-rd(s->u,91,4)));
L_1803ec5c8_7:;
wr(s->r,519,1,(sx(rd(s->u,95,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec5c8_8:;
wr(s->r,518,1,(rd(s->u,95,4)==((U)UINT64_C(0x0))));
L_1803ec5c8_9:;
wr(s->u,81,4,(rd(s->u,95,4)&((U)UINT64_C(0xff))));
L_1803ec5c8_10:;
wr(s->u,89,1,pop(rd(s->u,81,4),4));
L_1803ec5c8_11:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803ec5c8_12:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803ec5c8_13:;
/* 1803ec5cb: jl 0x1803ec5b0 */
L_1803ec5cb_0:;
L_1803ec5cb_1:;
wr(s->u,80,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec5cb_2:;
if(rd(s->u,80,1)){goto L_1803ec5b0_0;}
L_1803ec5cb_3:;
return UINT64_C(0x1803ec5cd);
}
uint64_t b_1803ec5b0(CPU*s){
/* 1803ec5b0: mov rcx, qword ptr [rbx + 0x20] */
L_1803ec5b0_0:;
L_1803ec5b0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ec5b0_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec5b0_3:;
wr(s->r,8,8,rd(s->u,56,8));
L_1803ec5b0_4:;
/* 1803ec5b4: movsxd rax, edx */
L_1803ec5b4_0:;
L_1803ec5b4_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803ec5b4_2:;
/* 1803ec5b7: inc edx */
L_1803ec5b7_0:;
L_1803ec5b7_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803ec5b7_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803ec5b7_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ec5b7_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec5b7_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ec5b7_6:;
wr(s->u,65,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ec5b7_7:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803ec5b7_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ec5b7_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ec5b7_10:;
/* 1803ec5b9: sar rax, 1 */
L_1803ec5b9_0:;
L_1803ec5b9_1:;
wr(s->u,83,8,(rd(s->r,0,8)&((U)UINT64_C(0x1))));
L_1803ec5b9_2:;
wr(s->r,512,1,(rd(s->u,83,8)!=((U)UINT64_C(0x0))));
L_1803ec5b9_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec5b9_4:;
wr(s->r,0,8,((((U)UINT64_C(0x1))>=64)?(sx(rd(s->r,0,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,0,8),8)>>((U)UINT64_C(0x1)))));
L_1803ec5b9_5:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec5b9_6:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ec5b9_7:;
wr(s->u,65,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ec5b9_8:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803ec5b9_9:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ec5b9_10:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ec5b9_11:;
/* 1803ec5bc: add r8, 4 */
L_1803ec5bc_0:;
L_1803ec5bc_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803ec5bc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x4)),8,0));
L_1803ec5bc_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803ec5bc_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec5bc_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ec5bc_6:;
wr(s->u,65,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ec5bc_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803ec5bc_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ec5bc_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ec5bc_10:;
/* 1803ec5c0: mov eax, dword ptr [rsi + rax*4] */
L_1803ec5c0_0:;
L_1803ec5c0_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803ec5c0_2:;
wr(s->u,16,8,(rd(s->r,48,8)+rd(s->u,8,8)));
L_1803ec5c0_3:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803ec5c0_4:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803ec5c0_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec5c0_6:;
/* 1803ec5c3: mov dword ptr [r8 + rcx - 4], eax */
L_1803ec5c3_0:;
L_1803ec5c3_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,128,8)));
L_1803ec5c3_2:;
wr(s->u,32,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803ec5c3_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803ec5c3_4:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803ec5c3_5:;
mw((uint64_t)rd(s->u,40,8),4,rd(s->u,48,4));
L_1803ec5c3_6:;
/* 1803ec5c8: cmp edx, dword ptr [rbx + 8] */
L_1803ec5c8_0:;
L_1803ec5c8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec5c8_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec5c8_3:;
wr(s->u,75,4,rd(s->u,48,4));
L_1803ec5c8_4:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,75,4)));
L_1803ec5c8_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,75,4),4,1));
L_1803ec5c8_6:;
wr(s->u,79,4,(rd(s->r,16,4)-rd(s->u,75,4)));
L_1803ec5c8_7:;
wr(s->r,519,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec5c8_8:;
wr(s->r,518,1,(rd(s->u,79,4)==((U)UINT64_C(0x0))));
L_1803ec5c8_9:;
wr(s->u,65,4,(rd(s->u,79,4)&((U)UINT64_C(0xff))));
L_1803ec5c8_10:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803ec5c8_11:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ec5c8_12:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ec5c8_13:;
/* 1803ec5cb: jl 0x1803ec5b0 */
L_1803ec5cb_0:;
L_1803ec5cb_1:;
wr(s->u,64,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ec5cb_2:;
if(rd(s->u,64,1)){goto L_1803ec5b0_0;}
L_1803ec5cb_3:;
return UINT64_C(0x1803ec5cd);
}
uint64_t b_1803ec5cd(CPU*s){
/* 1803ec5cd: movsxd r8, dword ptr [rbx + 8] */
L_1803ec5cd_0:;
L_1803ec5cd_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec5cd_2:;
wr(s->u,13,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ec5cd_3:;
wr(s->r,128,8,(U)sx(rd(s->u,13,4),4));
L_1803ec5cd_4:;
/* 1803ec5d1: mov rdx, qword ptr [rbx + 0x20] */
L_1803ec5d1_0:;
L_1803ec5d1_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ec5d1_2:;
wr(s->u,17,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803ec5d1_3:;
wr(s->r,16,8,rd(s->u,17,8));
L_1803ec5d1_4:;
/* 1803ec5d5: mov rcx, rsi */
L_1803ec5d5_0:;
L_1803ec5d5_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1803ec5d5_2:;
/* 1803ec5d8: shl r8, 2 */
L_1803ec5d8_0:;
L_1803ec5d8_1:;
wr(s->u,65,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803ec5d8_2:;
wr(s->u,69,8,rd(s->r,128,8));
L_1803ec5d8_3:;
wr(s->r,128,8,((rd(s->u,65,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,65,4))));
L_1803ec5d8_4:;
wr(s->u,48,1,(rd(s->u,65,4)==((U)UINT64_C(0x0))));
L_1803ec5d8_5:;
wr(s->u,49,4,(rd(s->u,65,4)-((U)UINT64_C(0x1))));
L_1803ec5d8_6:;
wr(s->u,53,8,((rd(s->u,49,4)>=64)?0:(rd(s->u,69,8)<<rd(s->u,49,4))));
L_1803ec5d8_7:;
wr(s->u,61,1,(sx(rd(s->u,53,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec5d8_8:;
wr(s->u,0,1,rd(s->u,48,1));
L_1803ec5d8_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ec5d8_10:;
wr(s->u,2,1,(!rd(s->u,48,1)));
L_1803ec5d8_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec5d8_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,61,1)));
L_1803ec5d8_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec5d8_14:;
wr(s->u,62,1,(rd(s->u,65,4)==((U)UINT64_C(0x1))));
L_1803ec5d8_15:;
wr(s->u,63,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec5d8_16:;
wr(s->u,64,1,(rd(s->r,512,1)^rd(s->u,63,1)));
L_1803ec5d8_17:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803ec5d8_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,64,1)));
L_1803ec5d8_19:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803ec5d8_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec5d8_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ec5d8_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec5d8_23:;
wr(s->u,25,1,(rd(s->u,65,4)!=((U)UINT64_C(0x0))));
L_1803ec5d8_24:;
wr(s->u,26,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec5d8_25:;
wr(s->u,27,1,(!rd(s->u,25,1)));
L_1803ec5d8_26:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,519,1)));
L_1803ec5d8_27:;
wr(s->u,29,1,(rd(s->u,25,1)&rd(s->u,26,1)));
L_1803ec5d8_28:;
wr(s->r,519,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803ec5d8_29:;
wr(s->u,30,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ec5d8_30:;
wr(s->u,31,1,(!rd(s->u,25,1)));
L_1803ec5d8_31:;
wr(s->u,32,1,(rd(s->u,31,1)&rd(s->r,518,1)));
L_1803ec5d8_32:;
wr(s->u,33,1,(rd(s->u,25,1)&rd(s->u,30,1)));
L_1803ec5d8_33:;
wr(s->r,518,1,(rd(s->u,32,1)|rd(s->u,33,1)));
L_1803ec5d8_34:;
wr(s->u,34,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ec5d8_35:;
wr(s->u,42,1,pop(rd(s->u,34,8),8));
L_1803ec5d8_36:;
wr(s->u,43,1,(rd(s->u,42,1)&((U)UINT64_C(0x1))));
L_1803ec5d8_37:;
wr(s->u,44,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803ec5d8_38:;
wr(s->u,45,1,(!rd(s->u,25,1)));
L_1803ec5d8_39:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,514,1)));
L_1803ec5d8_40:;
wr(s->u,47,1,(rd(s->u,25,1)&rd(s->u,44,1)));
L_1803ec5d8_41:;
wr(s->r,514,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803ec5d8_42:;
/* 1803ec5dc: call 0x18000d550 */
L_1803ec5dc_0:;
L_1803ec5dc_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec5dc_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec5e1)));
L_1803ec5dc_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803ec5dc_4:;
return UINT64_C(0x1803ec5e1);
}
uint64_t b_1803ec5d8(CPU*s){
/* 1803ec5d8: shl r8, 2 */
L_1803ec5d8_0:;
L_1803ec5d8_1:;
wr(s->u,45,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803ec5d8_2:;
wr(s->u,49,8,rd(s->r,128,8));
L_1803ec5d8_3:;
wr(s->r,128,8,((rd(s->u,45,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,45,4))));
L_1803ec5d8_4:;
wr(s->u,28,1,(rd(s->u,45,4)==((U)UINT64_C(0x0))));
L_1803ec5d8_5:;
wr(s->u,29,4,(rd(s->u,45,4)-((U)UINT64_C(0x1))));
L_1803ec5d8_6:;
wr(s->u,33,8,((rd(s->u,29,4)>=64)?0:(rd(s->u,49,8)<<rd(s->u,29,4))));
L_1803ec5d8_7:;
wr(s->u,41,1,(sx(rd(s->u,33,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec5d8_8:;
wr(s->u,0,1,rd(s->u,28,1));
L_1803ec5d8_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ec5d8_10:;
wr(s->u,2,1,(!rd(s->u,28,1)));
L_1803ec5d8_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec5d8_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,41,1)));
L_1803ec5d8_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec5d8_14:;
wr(s->u,42,1,(rd(s->u,45,4)==((U)UINT64_C(0x1))));
L_1803ec5d8_15:;
wr(s->u,43,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec5d8_16:;
wr(s->u,44,1,(rd(s->r,512,1)^rd(s->u,43,1)));
L_1803ec5d8_17:;
wr(s->u,0,1,rd(s->u,42,1));
L_1803ec5d8_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,44,1)));
L_1803ec5d8_19:;
wr(s->u,2,1,(!rd(s->u,42,1)));
L_1803ec5d8_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec5d8_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ec5d8_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec5d8_23:;
wr(s->u,5,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803ec5d8_24:;
wr(s->u,6,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec5d8_25:;
wr(s->u,7,1,(!rd(s->u,5,1)));
L_1803ec5d8_26:;
wr(s->u,8,1,(rd(s->u,7,1)&rd(s->r,519,1)));
L_1803ec5d8_27:;
wr(s->u,9,1,(rd(s->u,5,1)&rd(s->u,6,1)));
L_1803ec5d8_28:;
wr(s->r,519,1,(rd(s->u,8,1)|rd(s->u,9,1)));
L_1803ec5d8_29:;
wr(s->u,10,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ec5d8_30:;
wr(s->u,11,1,(!rd(s->u,5,1)));
L_1803ec5d8_31:;
wr(s->u,12,1,(rd(s->u,11,1)&rd(s->r,518,1)));
L_1803ec5d8_32:;
wr(s->u,13,1,(rd(s->u,5,1)&rd(s->u,10,1)));
L_1803ec5d8_33:;
wr(s->r,518,1,(rd(s->u,12,1)|rd(s->u,13,1)));
L_1803ec5d8_34:;
wr(s->u,14,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ec5d8_35:;
wr(s->u,22,1,pop(rd(s->u,14,8),8));
L_1803ec5d8_36:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803ec5d8_37:;
wr(s->u,24,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803ec5d8_38:;
wr(s->u,25,1,(!rd(s->u,5,1)));
L_1803ec5d8_39:;
wr(s->u,26,1,(rd(s->u,25,1)&rd(s->r,514,1)));
L_1803ec5d8_40:;
wr(s->u,27,1,(rd(s->u,5,1)&rd(s->u,24,1)));
L_1803ec5d8_41:;
wr(s->r,514,1,(rd(s->u,26,1)|rd(s->u,27,1)));
L_1803ec5d8_42:;
/* 1803ec5dc: call 0x18000d550 */
L_1803ec5dc_0:;
L_1803ec5dc_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec5dc_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec5e1)));
L_1803ec5dc_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803ec5dc_4:;
return UINT64_C(0x1803ec5e1);
}
uint64_t b_1803ec5e1(CPU*s){
/* 1803ec5e1: mov edx, dword ptr [rbx + 8] */
L_1803ec5e1_0:;
L_1803ec5e1_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec5e1_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec5e1_3:;
wr(s->r,16,4,rd(s->u,8,4));
L_1803ec5e1_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ec5e1_5:;
/* 1803ec5e4: mov rcx, rsi */
L_1803ec5e4_0:;
L_1803ec5e4_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1803ec5e4_2:;
/* 1803ec5e7: call qword ptr [rip + 0x631b3b] */
L_1803ec5e7_0:;
L_1803ec5e7_1:;
wr(s->u,12,8,mr(UINT64_C(0x180a1e128),8));
L_1803ec5e7_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec5e7_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec5ed)));
L_1803ec5e7_4:;
return (uint64_t)rd(s->u,12,8);
L_1803ec5e7_5:;
return UINT64_C(0x1803ec5ed);
}
uint64_t b_1803ec5ed(CPU*s){
/* 1803ec5ed: mov rbx, qword ptr [rsp + 0x50] */
L_1803ec5ed_0:;
L_1803ec5ed_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ec5ed_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec5ed_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803ec5ed_4:;
/* 1803ec5f2: mov rsi, qword ptr [rsp + 0x58] */
L_1803ec5f2_0:;
L_1803ec5f2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803ec5f2_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec5f2_3:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803ec5f2_4:;
/* 1803ec5f7: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803ec5f7_0:;
L_1803ec5f7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ec5f7_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803ec5f7_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803ec5f7_4:;
wr(s->r,4992,4,rd(s->u,50,4));
L_1803ec5f7_5:;
wr(s->r,4996,4,rd(s->u,54,4));
L_1803ec5f7_6:;
wr(s->r,5000,4,rd(s->u,58,4));
L_1803ec5f7_7:;
wr(s->r,5004,4,rd(s->u,62,4));
L_1803ec5f7_8:;
/* 1803ec5fc: add rsp, 0x30 */
L_1803ec5fc_0:;
L_1803ec5fc_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ec5fc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803ec5fc_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803ec5fc_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec5fc_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec5fc_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec5fc_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803ec5fc_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ec5fc_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ec5fc_10:;
/* 1803ec600: pop rdi */
L_1803ec600_0:;
L_1803ec600_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803ec600_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec600_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec600_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803ec600_5:;
/* 1803ec601: ret  */
L_1803ec601_0:;
L_1803ec601_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec601_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec601_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ec601_4:;
return UINT64_C(0x1803ec602);
}
uint64_t b_1803ec680(CPU*s){
/* 1803ec680: push rbx */
L_1803ec680_0:;
L_1803ec680_1:;
wr(s->u,9,8,rd(s->r,24,8));
L_1803ec680_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec680_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,9,8));
L_1803ec680_4:;
/* 1803ec682: sub rsp, 0x20 */
L_1803ec682_0:;
L_1803ec682_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803ec682_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803ec682_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803ec682_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec682_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec682_6:;
wr(s->u,17,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec682_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803ec682_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803ec682_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ec682_10:;
/* 1803ec686: mov rbx, rcx */
L_1803ec686_0:;
L_1803ec686_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ec686_2:;
/* 1803ec689: mov rcx, qword ptr [rcx] */
L_1803ec689_0:;
L_1803ec689_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803ec689_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ec689_3:;
/* 1803ec68c: test rcx, rcx */
L_1803ec68c_0:;
L_1803ec68c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec68c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec68c_3:;
wr(s->u,27,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803ec68c_4:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec68c_5:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803ec68c_6:;
wr(s->u,17,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803ec68c_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803ec68c_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803ec68c_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ec68c_10:;
/* 1803ec68f: jne 0x1803ec69c */
L_1803ec68f_0:;
L_1803ec68f_1:;
wr(s->u,8,1,(!rd(s->r,518,1)));
L_1803ec68f_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803ec69c);}
L_1803ec68f_3:;
return UINT64_C(0x1803ec691);
}
uint64_t b_1803ec691(CPU*s){
/* 1803ec691: mov eax, 0x4c4b43 */
L_1803ec691_0:;
L_1803ec691_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803ec691_2:;
/* 1803ec696: add rsp, 0x20 */
L_1803ec696_0:;
L_1803ec696_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ec696_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803ec696_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803ec696_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec696_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec696_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec696_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ec696_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ec696_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ec696_10:;
/* 1803ec69a: pop rbx */
L_1803ec69a_0:;
L_1803ec69a_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803ec69a_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec69a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec69a_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803ec69a_5:;
/* 1803ec69b: ret  */
L_1803ec69b_0:;
L_1803ec69b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec69b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec69b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ec69b_4:;
return UINT64_C(0x1803ec69c);
}
uint64_t b_1803ec69c(CPU*s){
/* 1803ec69c: add rcx, 8 */
L_1803ec69c_0:;
L_1803ec69c_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ec69c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,0));
L_1803ec69c_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ec69c_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec69c_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ec69c_6:;
wr(s->u,0,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ec69c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ec69c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ec69c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ec69c_10:;
/* 1803ec6a0: call 0x1803f15b0 */
L_1803ec6a0_0:;
L_1803ec6a0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec6a0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec6a5)));
L_1803ec6a0_3:;
return (uint64_t)UINT64_C(0x1803f15b0);
L_1803ec6a0_4:;
return UINT64_C(0x1803ec6a5);
}
uint64_t b_1803ec6a5(CPU*s){
/* 1803ec6a5: mov rcx, qword ptr [rbx] */
L_1803ec6a5_0:;
L_1803ec6a5_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803ec6a5_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ec6a5_3:;
/* 1803ec6a8: add rcx, 0x10 */
L_1803ec6a8_0:;
L_1803ec6a8_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ec6a8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x10)),8,0));
L_1803ec6a8_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ec6a8_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec6a8_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ec6a8_6:;
wr(s->u,8,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ec6a8_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803ec6a8_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ec6a8_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ec6a8_10:;
/* 1803ec6ac: call 0x1803efe50 */
L_1803ec6ac_0:;
L_1803ec6ac_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec6ac_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec6b1)));
L_1803ec6ac_3:;
return (uint64_t)UINT64_C(0x1803efe50);
L_1803ec6ac_4:;
return UINT64_C(0x1803ec6b1);
}
uint64_t b_1803ec6b1(CPU*s){
/* 1803ec6b1: mov rcx, qword ptr [rbx] */
L_1803ec6b1_0:;
L_1803ec6b1_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803ec6b1_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ec6b1_3:;
/* 1803ec6b4: test rcx, rcx */
L_1803ec6b4_0:;
L_1803ec6b4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec6b4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec6b4_3:;
wr(s->u,18,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803ec6b4_4:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec6b4_5:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803ec6b4_6:;
wr(s->u,8,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803ec6b4_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803ec6b4_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ec6b4_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ec6b4_10:;
/* 1803ec6b7: je 0x1803ec6c3 */
L_1803ec6b7_0:;
L_1803ec6b7_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ec6c3);}
L_1803ec6b7_2:;
return UINT64_C(0x1803ec6b9);
}
uint64_t b_1803ec6b9(CPU*s){
/* 1803ec6b9: mov rax, qword ptr [rcx] */
L_1803ec6b9_0:;
L_1803ec6b9_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803ec6b9_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803ec6b9_3:;
/* 1803ec6bc: mov edx, 1 */
L_1803ec6bc_0:;
L_1803ec6bc_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803ec6bc_2:;
/* 1803ec6c1: call qword ptr [rax] */
L_1803ec6c1_0:;
L_1803ec6c1_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803ec6c1_2:;
wr(s->u,8,8,rd(s->u,0,8));
L_1803ec6c1_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec6c1_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec6c3)));
L_1803ec6c1_5:;
return (uint64_t)rd(s->u,8,8);
L_1803ec6c1_6:;
return UINT64_C(0x1803ec6c3);
}
uint64_t b_1803ec6c3(CPU*s){
/* 1803ec6c3: mov qword ptr [rbx], 0 */
L_1803ec6c3_0:;
L_1803ec6c3_1:;
wr(s->u,0,8,((U)UINT64_C(0x0)));
L_1803ec6c3_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803ec6c3_3:;
/* 1803ec6ca: xor eax, eax */
L_1803ec6ca_0:;
L_1803ec6ca_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec6ca_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec6ca_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ec6ca_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec6ca_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec6ca_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ec6ca_7:;
wr(s->u,8,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ec6ca_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803ec6ca_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ec6ca_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ec6ca_11:;
/* 1803ec6cc: add rsp, 0x20 */
L_1803ec6cc_0:;
L_1803ec6cc_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ec6cc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803ec6cc_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803ec6cc_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec6cc_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec6cc_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec6cc_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803ec6cc_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ec6cc_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ec6cc_10:;
/* 1803ec6d0: pop rbx */
L_1803ec6d0_0:;
L_1803ec6d0_1:;
wr(s->u,18,8,((U)UINT64_C(0x0)));
L_1803ec6d0_2:;
wr(s->u,18,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec6d0_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec6d0_4:;
wr(s->r,24,8,rd(s->u,18,8));
L_1803ec6d0_5:;
/* 1803ec6d1: ret  */
L_1803ec6d1_0:;
L_1803ec6d1_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec6d1_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec6d1_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ec6d1_4:;
return UINT64_C(0x1803ec6d2);
}
uint64_t b_1803ec710(CPU*s){
/* 1803ec710: mov rax, qword ptr [rcx + 8] */
L_1803ec710_0:;
L_1803ec710_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ec710_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec710_3:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803ec710_4:;
/* 1803ec714: test rax, rax */
L_1803ec714_0:;
L_1803ec714_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec714_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec714_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803ec714_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec714_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803ec714_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803ec714_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ec714_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ec714_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ec714_10:;
/* 1803ec717: je 0x1803ec724 */
L_1803ec717_0:;
L_1803ec717_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ec724);}
L_1803ec717_2:;
return UINT64_C(0x1803ec719);
}
uint64_t b_1803ec719(CPU*s){
/* 1803ec719: mov edx, dword ptr [rcx + 0x24] */
L_1803ec719_0:;
L_1803ec719_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x24))));
L_1803ec719_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec719_3:;
wr(s->r,16,4,rd(s->u,8,4));
L_1803ec719_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ec719_5:;
/* 1803ec71c: mov rcx, rax */
L_1803ec71c_0:;
L_1803ec71c_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ec71c_2:;
/* 1803ec71f: jmp 0x1803f16a0 */
L_1803ec71f_0:;
L_1803ec71f_1:;
return UINT64_C(0x1803f16a0);
L_1803ec71f_2:;
return UINT64_C(0x1803ec724);
}
uint64_t b_1803ec724(CPU*s){
/* 1803ec724: xor eax, eax */
L_1803ec724_0:;
L_1803ec724_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec724_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec724_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ec724_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec724_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec724_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ec724_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ec724_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803ec724_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803ec724_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803ec724_11:;
/* 1803ec726: ret  */
L_1803ec726_0:;
L_1803ec726_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec726_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec726_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ec726_4:;
return UINT64_C(0x1803ec727);
}
uint64_t b_1803ec730(CPU*s){
/* 1803ec730: mov qword ptr [rsp + 8], rbx */
L_1803ec730_0:;
L_1803ec730_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ec730_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803ec730_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ec730_4:;
/* 1803ec735: push rdi */
L_1803ec735_0:;
L_1803ec735_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803ec735_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec735_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803ec735_4:;
/* 1803ec736: sub rsp, 0x20 */
L_1803ec736_0:;
L_1803ec736_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803ec736_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803ec736_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803ec736_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec736_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec736_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec736_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ec736_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ec736_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ec736_10:;
/* 1803ec73a: xor edi, edi */
L_1803ec73a_0:;
L_1803ec73a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec73a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec73a_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803ec73a_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803ec73a_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec73a_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803ec73a_7:;
wr(s->u,24,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803ec73a_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803ec73a_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ec73a_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ec73a_11:;
/* 1803ec73c: mov rbx, rcx */
L_1803ec73c_0:;
L_1803ec73c_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ec73c_2:;
/* 1803ec73f: mov r10d, edi */
L_1803ec73f_0:;
L_1803ec73f_1:;
wr(s->r,144,4,rd(s->r,56,4));
L_1803ec73f_2:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ec73f_3:;
/* 1803ec742: test edx, edx */
L_1803ec742_0:;
L_1803ec742_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec742_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec742_3:;
wr(s->u,34,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803ec742_4:;
wr(s->r,519,1,(sx(rd(s->u,34,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec742_5:;
wr(s->r,518,1,(rd(s->u,34,4)==((U)UINT64_C(0x0))));
L_1803ec742_6:;
wr(s->u,24,4,(rd(s->u,34,4)&((U)UINT64_C(0xff))));
L_1803ec742_7:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803ec742_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ec742_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ec742_10:;
/* 1803ec744: je 0x1803ec75e */
L_1803ec744_0:;
L_1803ec744_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ec75e);}
L_1803ec744_2:;
return UINT64_C(0x1803ec746);
}
uint64_t b_1803ec746(CPU*s){
/* 1803ec746: nop word ptr [rax + rax] */
L_1803ec746_0:;
L_1803ec746_1:;
wr(s->u,5,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ec746_2:;
wr(s->u,13,8,(rd(s->r,0,8)+rd(s->u,5,8)));
L_1803ec746_3:;
/* 1803ec750: inc r10d */
L_1803ec750_0:;
L_1803ec750_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x1)),4,0));
L_1803ec750_2:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x1))));
L_1803ec750_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ec750_4:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec750_5:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803ec750_6:;
wr(s->u,22,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803ec750_7:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803ec750_8:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803ec750_9:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803ec750_10:;
/* 1803ec753: mov eax, edx */
L_1803ec753_0:;
L_1803ec753_1:;
wr(s->r,0,4,rd(s->r,16,4));
L_1803ec753_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec753_3:;
/* 1803ec755: mov ecx, r10d */
L_1803ec755_0:;
L_1803ec755_1:;
wr(s->r,8,4,rd(s->r,144,4));
L_1803ec755_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ec755_3:;
/* 1803ec758: sar eax, cl */
L_1803ec758_0:;
L_1803ec758_1:;
wr(s->u,59,1,(rd(s->r,8,1)&((U)UINT64_C(0x1f))));
L_1803ec758_2:;
wr(s->u,60,4,rd(s->r,0,4));
L_1803ec758_3:;
wr(s->r,0,4,((rd(s->u,59,1)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,59,1))));
L_1803ec758_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec758_5:;
wr(s->u,47,1,(rd(s->u,59,1)==((U)UINT64_C(0x0))));
L_1803ec758_6:;
wr(s->u,48,1,(rd(s->u,59,1)-((U)UINT64_C(0x1))));
L_1803ec758_7:;
wr(s->u,49,4,((rd(s->u,48,1)>=32)?(sx(rd(s->u,60,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,60,4),4)>>rd(s->u,48,1))));
L_1803ec758_8:;
wr(s->u,53,4,(rd(s->u,49,4)&((U)UINT64_C(0x1))));
L_1803ec758_9:;
wr(s->u,57,1,(rd(s->u,53,4)!=((U)UINT64_C(0x0))));
L_1803ec758_10:;
wr(s->u,0,1,rd(s->u,47,1));
L_1803ec758_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ec758_12:;
wr(s->u,2,1,(!rd(s->u,47,1)));
L_1803ec758_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec758_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,57,1)));
L_1803ec758_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec758_16:;
wr(s->u,58,1,(rd(s->u,59,1)==((U)UINT64_C(0x1))));
L_1803ec758_17:;
wr(s->u,0,1,rd(s->u,58,1));
L_1803ec758_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ec758_19:;
wr(s->u,2,1,(!rd(s->u,58,1)));
L_1803ec758_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec758_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ec758_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec758_23:;
wr(s->u,28,1,(rd(s->u,59,1)!=((U)UINT64_C(0x0))));
L_1803ec758_24:;
wr(s->u,29,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec758_25:;
wr(s->u,30,1,(!rd(s->u,28,1)));
L_1803ec758_26:;
wr(s->u,31,1,(rd(s->u,30,1)&rd(s->r,519,1)));
L_1803ec758_27:;
wr(s->u,32,1,(rd(s->u,28,1)&rd(s->u,29,1)));
L_1803ec758_28:;
wr(s->r,519,1,(rd(s->u,31,1)|rd(s->u,32,1)));
L_1803ec758_29:;
wr(s->u,33,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ec758_30:;
wr(s->u,34,1,(!rd(s->u,28,1)));
L_1803ec758_31:;
wr(s->u,35,1,(rd(s->u,34,1)&rd(s->r,518,1)));
L_1803ec758_32:;
wr(s->u,36,1,(rd(s->u,28,1)&rd(s->u,33,1)));
L_1803ec758_33:;
wr(s->r,518,1,(rd(s->u,35,1)|rd(s->u,36,1)));
L_1803ec758_34:;
wr(s->u,37,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ec758_35:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803ec758_36:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803ec758_37:;
wr(s->u,43,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803ec758_38:;
wr(s->u,44,1,(!rd(s->u,28,1)));
L_1803ec758_39:;
wr(s->u,45,1,(rd(s->u,44,1)&rd(s->r,514,1)));
L_1803ec758_40:;
wr(s->u,46,1,(rd(s->u,28,1)&rd(s->u,43,1)));
L_1803ec758_41:;
wr(s->r,514,1,(rd(s->u,45,1)|rd(s->u,46,1)));
L_1803ec758_42:;
/* 1803ec75a: test eax, eax */
L_1803ec75a_0:;
L_1803ec75a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec75a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec75a_3:;
wr(s->u,64,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803ec75a_4:;
wr(s->r,519,1,(sx(rd(s->u,64,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec75a_5:;
wr(s->r,518,1,(rd(s->u,64,4)==((U)UINT64_C(0x0))));
L_1803ec75a_6:;
wr(s->u,22,4,(rd(s->u,64,4)&((U)UINT64_C(0xff))));
L_1803ec75a_7:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803ec75a_8:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803ec75a_9:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803ec75a_10:;
/* 1803ec75c: jne 0x1803ec750 */
L_1803ec75c_0:;
L_1803ec75c_1:;
wr(s->u,21,1,(!rd(s->r,518,1)));
L_1803ec75c_2:;
if(rd(s->u,21,1)){goto L_1803ec750_0;}
L_1803ec75c_3:;
return UINT64_C(0x1803ec75e);
}
uint64_t b_1803ec750(CPU*s){
/* 1803ec750: inc r10d */
L_1803ec750_0:;
L_1803ec750_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x1)),4,0));
L_1803ec750_2:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x1))));
L_1803ec750_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ec750_4:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec750_5:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803ec750_6:;
wr(s->u,6,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803ec750_7:;
wr(s->u,10,1,pop(rd(s->u,6,4),4));
L_1803ec750_8:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803ec750_9:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803ec750_10:;
/* 1803ec753: mov eax, edx */
L_1803ec753_0:;
L_1803ec753_1:;
wr(s->r,0,4,rd(s->r,16,4));
L_1803ec753_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec753_3:;
/* 1803ec755: mov ecx, r10d */
L_1803ec755_0:;
L_1803ec755_1:;
wr(s->r,8,4,rd(s->r,144,4));
L_1803ec755_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ec755_3:;
/* 1803ec758: sar eax, cl */
L_1803ec758_0:;
L_1803ec758_1:;
wr(s->u,43,1,(rd(s->r,8,1)&((U)UINT64_C(0x1f))));
L_1803ec758_2:;
wr(s->u,44,4,rd(s->r,0,4));
L_1803ec758_3:;
wr(s->r,0,4,((rd(s->u,43,1)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,43,1))));
L_1803ec758_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec758_5:;
wr(s->u,31,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803ec758_6:;
wr(s->u,32,1,(rd(s->u,43,1)-((U)UINT64_C(0x1))));
L_1803ec758_7:;
wr(s->u,33,4,((rd(s->u,32,1)>=32)?(sx(rd(s->u,44,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,44,4),4)>>rd(s->u,32,1))));
L_1803ec758_8:;
wr(s->u,37,4,(rd(s->u,33,4)&((U)UINT64_C(0x1))));
L_1803ec758_9:;
wr(s->u,41,1,(rd(s->u,37,4)!=((U)UINT64_C(0x0))));
L_1803ec758_10:;
wr(s->u,0,1,rd(s->u,31,1));
L_1803ec758_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ec758_12:;
wr(s->u,2,1,(!rd(s->u,31,1)));
L_1803ec758_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec758_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,41,1)));
L_1803ec758_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec758_16:;
wr(s->u,42,1,(rd(s->u,43,1)==((U)UINT64_C(0x1))));
L_1803ec758_17:;
wr(s->u,0,1,rd(s->u,42,1));
L_1803ec758_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ec758_19:;
wr(s->u,2,1,(!rd(s->u,42,1)));
L_1803ec758_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec758_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ec758_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec758_23:;
wr(s->u,12,1,(rd(s->u,43,1)!=((U)UINT64_C(0x0))));
L_1803ec758_24:;
wr(s->u,13,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec758_25:;
wr(s->u,14,1,(!rd(s->u,12,1)));
L_1803ec758_26:;
wr(s->u,15,1,(rd(s->u,14,1)&rd(s->r,519,1)));
L_1803ec758_27:;
wr(s->u,16,1,(rd(s->u,12,1)&rd(s->u,13,1)));
L_1803ec758_28:;
wr(s->r,519,1,(rd(s->u,15,1)|rd(s->u,16,1)));
L_1803ec758_29:;
wr(s->u,17,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ec758_30:;
wr(s->u,18,1,(!rd(s->u,12,1)));
L_1803ec758_31:;
wr(s->u,19,1,(rd(s->u,18,1)&rd(s->r,518,1)));
L_1803ec758_32:;
wr(s->u,20,1,(rd(s->u,12,1)&rd(s->u,17,1)));
L_1803ec758_33:;
wr(s->r,518,1,(rd(s->u,19,1)|rd(s->u,20,1)));
L_1803ec758_34:;
wr(s->u,21,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ec758_35:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803ec758_36:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803ec758_37:;
wr(s->u,27,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ec758_38:;
wr(s->u,28,1,(!rd(s->u,12,1)));
L_1803ec758_39:;
wr(s->u,29,1,(rd(s->u,28,1)&rd(s->r,514,1)));
L_1803ec758_40:;
wr(s->u,30,1,(rd(s->u,12,1)&rd(s->u,27,1)));
L_1803ec758_41:;
wr(s->r,514,1,(rd(s->u,29,1)|rd(s->u,30,1)));
L_1803ec758_42:;
/* 1803ec75a: test eax, eax */
L_1803ec75a_0:;
L_1803ec75a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec75a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec75a_3:;
wr(s->u,48,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803ec75a_4:;
wr(s->r,519,1,(sx(rd(s->u,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec75a_5:;
wr(s->r,518,1,(rd(s->u,48,4)==((U)UINT64_C(0x0))));
L_1803ec75a_6:;
wr(s->u,6,4,(rd(s->u,48,4)&((U)UINT64_C(0xff))));
L_1803ec75a_7:;
wr(s->u,10,1,pop(rd(s->u,6,4),4));
L_1803ec75a_8:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803ec75a_9:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803ec75a_10:;
/* 1803ec75c: jne 0x1803ec750 */
L_1803ec75c_0:;
L_1803ec75c_1:;
wr(s->u,5,1,(!rd(s->r,518,1)));
L_1803ec75c_2:;
if(rd(s->u,5,1)){goto L_1803ec750_0;}
L_1803ec75c_3:;
return UINT64_C(0x1803ec75e);
}
uint64_t b_1803ec75e(CPU*s){
/* 1803ec75e: lea ecx, [r10 - 1] */
L_1803ec75e_0:;
L_1803ec75e_1:;
wr(s->u,5,8,(rd(s->r,144,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803ec75e_2:;
wr(s->r,8,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ec75e_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ec75e_4:;
/* 1803ec762: mov eax, edx */
L_1803ec762_0:;
L_1803ec762_1:;
wr(s->r,0,4,rd(s->r,16,4));
L_1803ec762_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec762_3:;
/* 1803ec764: mov r9d, 1 */
L_1803ec764_0:;
L_1803ec764_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1803ec764_2:;
/* 1803ec76a: cdq  */
L_1803ec76a_0:;
L_1803ec76a_1:;
wr(s->u,60,8,(U)sx(rd(s->r,0,4),4));
L_1803ec76a_2:;
wr(s->r,16,4,(rd(s->u,60,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ec76a_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ec76a_4:;
/* 1803ec76b: mov r8d, r9d */
L_1803ec76b_0:;
L_1803ec76b_1:;
wr(s->r,128,4,rd(s->r,136,4));
L_1803ec76b_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ec76b_3:;
/* 1803ec76e: mov dword ptr [rbx], edi */
L_1803ec76e_0:;
L_1803ec76e_1:;
wr(s->u,13,4,rd(s->r,56,4));
L_1803ec76e_2:;
mw((uint64_t)rd(s->r,24,8),4,rd(s->u,13,4));
L_1803ec76e_3:;
/* 1803ec770: shl r8d, cl */
L_1803ec770_0:;
L_1803ec770_1:;
wr(s->u,186,1,(rd(s->r,8,1)&((U)UINT64_C(0x1f))));
L_1803ec770_2:;
wr(s->u,187,4,rd(s->r,128,4));
L_1803ec770_3:;
wr(s->r,128,4,((rd(s->u,186,1)>=32)?0:(rd(s->r,128,4)<<rd(s->u,186,1))));
L_1803ec770_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ec770_5:;
wr(s->u,50,1,(rd(s->u,186,1)==((U)UINT64_C(0x0))));
L_1803ec770_6:;
wr(s->u,51,1,(rd(s->u,186,1)-((U)UINT64_C(0x1))));
L_1803ec770_7:;
wr(s->u,52,4,((rd(s->u,51,1)>=32)?0:(rd(s->u,187,4)<<rd(s->u,51,1))));
L_1803ec770_8:;
wr(s->u,56,1,(sx(rd(s->u,52,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec770_9:;
wr(s->u,0,1,rd(s->u,50,1));
L_1803ec770_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ec770_11:;
wr(s->u,2,1,(!rd(s->u,50,1)));
L_1803ec770_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec770_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,56,1)));
L_1803ec770_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec770_15:;
wr(s->u,57,1,(rd(s->u,186,1)==((U)UINT64_C(0x1))));
L_1803ec770_16:;
wr(s->u,58,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec770_17:;
wr(s->u,59,1,(rd(s->r,512,1)^rd(s->u,58,1)));
L_1803ec770_18:;
wr(s->u,0,1,rd(s->u,57,1));
L_1803ec770_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,59,1)));
L_1803ec770_20:;
wr(s->u,2,1,(!rd(s->u,57,1)));
L_1803ec770_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec770_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ec770_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec770_24:;
wr(s->u,31,1,(rd(s->u,186,1)!=((U)UINT64_C(0x0))));
L_1803ec770_25:;
wr(s->u,32,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec770_26:;
wr(s->u,33,1,(!rd(s->u,31,1)));
L_1803ec770_27:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,519,1)));
L_1803ec770_28:;
wr(s->u,35,1,(rd(s->u,31,1)&rd(s->u,32,1)));
L_1803ec770_29:;
wr(s->r,519,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803ec770_30:;
wr(s->u,36,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ec770_31:;
wr(s->u,37,1,(!rd(s->u,31,1)));
L_1803ec770_32:;
wr(s->u,38,1,(rd(s->u,37,1)&rd(s->r,518,1)));
L_1803ec770_33:;
wr(s->u,39,1,(rd(s->u,31,1)&rd(s->u,36,1)));
L_1803ec770_34:;
wr(s->r,518,1,(rd(s->u,38,1)|rd(s->u,39,1)));
L_1803ec770_35:;
wr(s->u,40,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ec770_36:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803ec770_37:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ec770_38:;
wr(s->u,46,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ec770_39:;
wr(s->u,47,1,(!rd(s->u,31,1)));
L_1803ec770_40:;
wr(s->u,48,1,(rd(s->u,47,1)&rd(s->r,514,1)));
L_1803ec770_41:;
wr(s->u,49,1,(rd(s->u,31,1)&rd(s->u,46,1)));
L_1803ec770_42:;
wr(s->r,514,1,(rd(s->u,48,1)|rd(s->u,49,1)));
L_1803ec770_43:;
/* 1803ec773: mov dword ptr [rbx + 4], edi */
L_1803ec773_0:;
L_1803ec773_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x4))));
L_1803ec773_2:;
wr(s->u,13,4,rd(s->r,56,4));
L_1803ec773_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803ec773_4:;
/* 1803ec776: mov dword ptr [rbx + 8], edi */
L_1803ec776_0:;
L_1803ec776_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ec776_2:;
wr(s->u,13,4,rd(s->r,56,4));
L_1803ec776_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803ec776_4:;
/* 1803ec779: mov qword ptr [rbx + 0x18], rdi */
L_1803ec779_0:;
L_1803ec779_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803ec779_2:;
wr(s->u,17,8,rd(s->r,56,8));
L_1803ec779_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,17,8));
L_1803ec779_4:;
/* 1803ec77d: idiv r8d */
L_1803ec77d_0:;
L_1803ec77d_1:;
wr(s->u,82,8,(U)sx(rd(s->r,128,4),4));
L_1803ec77d_2:;
wr(s->u,90,8,rd(s->r,16,4));
L_1803ec77d_3:;
wr(s->u,98,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,90,8)<<((U)UINT64_C(0x20)))));
L_1803ec77d_4:;
wr(s->u,106,8,rd(s->r,0,4));
L_1803ec77d_5:;
wr(s->u,114,8,(rd(s->u,98,8)|rd(s->u,106,8)));
L_1803ec77d_6:;
wr(s->u,122,8,((U)(sx(rd(s->u,114,8),8)/sx(rd(s->u,82,8),8))));
L_1803ec77d_7:;
wr(s->r,0,4,(rd(s->u,122,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ec77d_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec77d_9:;
wr(s->u,130,8,((U)(sx(rd(s->u,114,8),8)%sx(rd(s->u,82,8),8))));
L_1803ec77d_10:;
wr(s->r,16,4,(rd(s->u,130,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ec77d_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ec77d_12:;
/* 1803ec780: test edx, edx */
L_1803ec780_0:;
L_1803ec780_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec780_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec780_3:;
wr(s->u,191,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803ec780_4:;
wr(s->r,519,1,(sx(rd(s->u,191,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec780_5:;
wr(s->r,518,1,(rd(s->u,191,4)==((U)UINT64_C(0x0))));
L_1803ec780_6:;
wr(s->u,25,4,(rd(s->u,191,4)&((U)UINT64_C(0xff))));
L_1803ec780_7:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803ec780_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803ec780_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803ec780_10:;
/* 1803ec782: cmove r10d, ecx */
L_1803ec782_0:;
L_1803ec782_1:;
wr(s->u,68,4,rd(s->r,8,4));
L_1803ec782_2:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ec782_3:;
wr(s->u,72,1,(!rd(s->r,518,1)));
L_1803ec782_4:;
if(rd(s->u,72,1)){goto L_1803ec786_0;}
L_1803ec782_5:;
wr(s->r,144,4,rd(s->u,68,4));
L_1803ec782_6:;
/* 1803ec786: mov ecx, r10d */
L_1803ec786_0:;
L_1803ec786_1:;
wr(s->r,8,4,rd(s->r,144,4));
L_1803ec786_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ec786_3:;
/* 1803ec789: shl r9d, cl */
L_1803ec789_0:;
L_1803ec789_1:;
wr(s->u,186,1,(rd(s->r,8,1)&((U)UINT64_C(0x1f))));
L_1803ec789_2:;
wr(s->u,187,4,rd(s->r,136,4));
L_1803ec789_3:;
wr(s->r,136,4,((rd(s->u,186,1)>=32)?0:(rd(s->r,136,4)<<rd(s->u,186,1))));
L_1803ec789_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ec789_5:;
wr(s->u,50,1,(rd(s->u,186,1)==((U)UINT64_C(0x0))));
L_1803ec789_6:;
wr(s->u,51,1,(rd(s->u,186,1)-((U)UINT64_C(0x1))));
L_1803ec789_7:;
wr(s->u,52,4,((rd(s->u,51,1)>=32)?0:(rd(s->u,187,4)<<rd(s->u,51,1))));
L_1803ec789_8:;
wr(s->u,56,1,(sx(rd(s->u,52,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec789_9:;
wr(s->u,0,1,rd(s->u,50,1));
L_1803ec789_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ec789_11:;
wr(s->u,2,1,(!rd(s->u,50,1)));
L_1803ec789_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec789_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,56,1)));
L_1803ec789_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec789_15:;
wr(s->u,57,1,(rd(s->u,186,1)==((U)UINT64_C(0x1))));
L_1803ec789_16:;
wr(s->u,58,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec789_17:;
wr(s->u,59,1,(rd(s->r,512,1)^rd(s->u,58,1)));
L_1803ec789_18:;
wr(s->u,0,1,rd(s->u,57,1));
L_1803ec789_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,59,1)));
L_1803ec789_20:;
wr(s->u,2,1,(!rd(s->u,57,1)));
L_1803ec789_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec789_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ec789_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec789_24:;
wr(s->u,31,1,(rd(s->u,186,1)!=((U)UINT64_C(0x0))));
L_1803ec789_25:;
wr(s->u,32,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec789_26:;
wr(s->u,33,1,(!rd(s->u,31,1)));
L_1803ec789_27:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,519,1)));
L_1803ec789_28:;
wr(s->u,35,1,(rd(s->u,31,1)&rd(s->u,32,1)));
L_1803ec789_29:;
wr(s->r,519,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803ec789_30:;
wr(s->u,36,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803ec789_31:;
wr(s->u,37,1,(!rd(s->u,31,1)));
L_1803ec789_32:;
wr(s->u,38,1,(rd(s->u,37,1)&rd(s->r,518,1)));
L_1803ec789_33:;
wr(s->u,39,1,(rd(s->u,31,1)&rd(s->u,36,1)));
L_1803ec789_34:;
wr(s->r,518,1,(rd(s->u,38,1)|rd(s->u,39,1)));
L_1803ec789_35:;
wr(s->u,40,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803ec789_36:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803ec789_37:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ec789_38:;
wr(s->u,46,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ec789_39:;
wr(s->u,47,1,(!rd(s->u,31,1)));
L_1803ec789_40:;
wr(s->u,48,1,(rd(s->u,47,1)&rd(s->r,514,1)));
L_1803ec789_41:;
wr(s->u,49,1,(rd(s->u,31,1)&rd(s->u,46,1)));
L_1803ec789_42:;
wr(s->r,514,1,(rd(s->u,48,1)|rd(s->u,49,1)));
L_1803ec789_43:;
/* 1803ec78c: mov ecx, r9d */
L_1803ec78c_0:;
L_1803ec78c_1:;
wr(s->r,8,4,rd(s->r,136,4));
L_1803ec78c_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ec78c_3:;
/* 1803ec78f: lea eax, [r9 - 1] */
L_1803ec78f_0:;
L_1803ec78f_1:;
wr(s->u,5,8,(rd(s->r,136,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803ec78f_2:;
wr(s->r,0,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ec78f_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec78f_4:;
/* 1803ec793: mov dword ptr [rbx + 0xc], ecx */
L_1803ec793_0:;
L_1803ec793_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ec793_2:;
wr(s->u,13,4,rd(s->r,8,4));
L_1803ec793_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803ec793_4:;
/* 1803ec796: mov dword ptr [rbx + 0x10], eax */
L_1803ec796_0:;
L_1803ec796_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803ec796_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803ec796_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803ec796_4:;
/* 1803ec799: mov eax, 4 */
L_1803ec799_0:;
L_1803ec799_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803ec799_2:;
/* 1803ec79e: mul rcx */
L_1803ec79e_0:;
L_1803ec79e_1:;
wr(s->u,138,16,rd(s->r,0,8));
L_1803ec79e_2:;
wr(s->u,154,16,rd(s->r,8,8));
L_1803ec79e_3:;
wr(s->u,170,16,(rd(s->u,138,16)*rd(s->u,154,16)));
L_1803ec79e_4:;
wr(s->r,16,8,(rd(s->u,170,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ec79e_5:;
wr(s->r,0,8,(rd(s->u,170,16) >> (((U)UINT64_C(0x0))*8)));
L_1803ec79e_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803ec79e_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ec79e_8:;
/* 1803ec7a1: mov rcx, 0xffffffffffffffff */
L_1803ec7a1_0:;
L_1803ec7a1_1:;
wr(s->r,8,8,((U)UINT64_C(0xffffffffffffffff)));
L_1803ec7a1_2:;
/* 1803ec7a8: cmovo rax, rcx */
L_1803ec7a8_0:;
L_1803ec7a8_1:;
wr(s->u,73,8,rd(s->r,8,8));
L_1803ec7a8_2:;
wr(s->u,81,1,(!rd(s->r,523,1)));
L_1803ec7a8_3:;
if(rd(s->u,81,1)){goto L_1803ec7ac_0;}
L_1803ec7a8_4:;
wr(s->r,0,8,rd(s->u,73,8));
L_1803ec7a8_5:;
/* 1803ec7ac: mov rcx, rax */
L_1803ec7ac_0:;
L_1803ec7ac_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ec7ac_2:;
/* 1803ec7af: call 0x180003140 */
L_1803ec7af_0:;
L_1803ec7af_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec7af_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec7b4)));
L_1803ec7af_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ec7af_4:;
return UINT64_C(0x1803ec7b4);
}
uint64_t b_1803ec786(CPU*s){
/* 1803ec786: mov ecx, r10d */
L_1803ec786_0:;
L_1803ec786_1:;
wr(s->r,8,4,rd(s->r,144,4));
L_1803ec786_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ec786_3:;
/* 1803ec789: shl r9d, cl */
L_1803ec789_0:;
L_1803ec789_1:;
wr(s->u,103,1,(rd(s->r,8,1)&((U)UINT64_C(0x1f))));
L_1803ec789_2:;
wr(s->u,104,4,rd(s->r,136,4));
L_1803ec789_3:;
wr(s->r,136,4,((rd(s->u,103,1)>=32)?0:(rd(s->r,136,4)<<rd(s->u,103,1))));
L_1803ec789_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ec789_5:;
wr(s->u,36,1,(rd(s->u,103,1)==((U)UINT64_C(0x0))));
L_1803ec789_6:;
wr(s->u,37,1,(rd(s->u,103,1)-((U)UINT64_C(0x1))));
L_1803ec789_7:;
wr(s->u,38,4,((rd(s->u,37,1)>=32)?0:(rd(s->u,104,4)<<rd(s->u,37,1))));
L_1803ec789_8:;
wr(s->u,42,1,(sx(rd(s->u,38,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec789_9:;
wr(s->u,0,1,rd(s->u,36,1));
L_1803ec789_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ec789_11:;
wr(s->u,2,1,(!rd(s->u,36,1)));
L_1803ec789_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec789_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,42,1)));
L_1803ec789_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec789_15:;
wr(s->u,43,1,(rd(s->u,103,1)==((U)UINT64_C(0x1))));
L_1803ec789_16:;
wr(s->u,44,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec789_17:;
wr(s->u,45,1,(rd(s->r,512,1)^rd(s->u,44,1)));
L_1803ec789_18:;
wr(s->u,0,1,rd(s->u,43,1));
L_1803ec789_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,45,1)));
L_1803ec789_20:;
wr(s->u,2,1,(!rd(s->u,43,1)));
L_1803ec789_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec789_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ec789_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec789_24:;
wr(s->u,17,1,(rd(s->u,103,1)!=((U)UINT64_C(0x0))));
L_1803ec789_25:;
wr(s->u,18,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec789_26:;
wr(s->u,19,1,(!rd(s->u,17,1)));
L_1803ec789_27:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,519,1)));
L_1803ec789_28:;
wr(s->u,21,1,(rd(s->u,17,1)&rd(s->u,18,1)));
L_1803ec789_29:;
wr(s->r,519,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803ec789_30:;
wr(s->u,22,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803ec789_31:;
wr(s->u,23,1,(!rd(s->u,17,1)));
L_1803ec789_32:;
wr(s->u,24,1,(rd(s->u,23,1)&rd(s->r,518,1)));
L_1803ec789_33:;
wr(s->u,25,1,(rd(s->u,17,1)&rd(s->u,22,1)));
L_1803ec789_34:;
wr(s->r,518,1,(rd(s->u,24,1)|rd(s->u,25,1)));
L_1803ec789_35:;
wr(s->u,26,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803ec789_36:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803ec789_37:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803ec789_38:;
wr(s->u,32,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803ec789_39:;
wr(s->u,33,1,(!rd(s->u,17,1)));
L_1803ec789_40:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,514,1)));
L_1803ec789_41:;
wr(s->u,35,1,(rd(s->u,17,1)&rd(s->u,32,1)));
L_1803ec789_42:;
wr(s->r,514,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803ec789_43:;
/* 1803ec78c: mov ecx, r9d */
L_1803ec78c_0:;
L_1803ec78c_1:;
wr(s->r,8,4,rd(s->r,136,4));
L_1803ec78c_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ec78c_3:;
/* 1803ec78f: lea eax, [r9 - 1] */
L_1803ec78f_0:;
L_1803ec78f_1:;
wr(s->u,5,8,(rd(s->r,136,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803ec78f_2:;
wr(s->r,0,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ec78f_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec78f_4:;
/* 1803ec793: mov dword ptr [rbx + 0xc], ecx */
L_1803ec793_0:;
L_1803ec793_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ec793_2:;
wr(s->u,13,4,rd(s->r,8,4));
L_1803ec793_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803ec793_4:;
/* 1803ec796: mov dword ptr [rbx + 0x10], eax */
L_1803ec796_0:;
L_1803ec796_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803ec796_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803ec796_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803ec796_4:;
/* 1803ec799: mov eax, 4 */
L_1803ec799_0:;
L_1803ec799_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803ec799_2:;
/* 1803ec79e: mul rcx */
L_1803ec79e_0:;
L_1803ec79e_1:;
wr(s->u,55,16,rd(s->r,0,8));
L_1803ec79e_2:;
wr(s->u,71,16,rd(s->r,8,8));
L_1803ec79e_3:;
wr(s->u,87,16,(rd(s->u,55,16)*rd(s->u,71,16)));
L_1803ec79e_4:;
wr(s->r,16,8,(rd(s->u,87,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ec79e_5:;
wr(s->r,0,8,(rd(s->u,87,16) >> (((U)UINT64_C(0x0))*8)));
L_1803ec79e_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803ec79e_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ec79e_8:;
/* 1803ec7a1: mov rcx, 0xffffffffffffffff */
L_1803ec7a1_0:;
L_1803ec7a1_1:;
wr(s->r,8,8,((U)UINT64_C(0xffffffffffffffff)));
L_1803ec7a1_2:;
/* 1803ec7a8: cmovo rax, rcx */
L_1803ec7a8_0:;
L_1803ec7a8_1:;
wr(s->u,46,8,rd(s->r,8,8));
L_1803ec7a8_2:;
wr(s->u,54,1,(!rd(s->r,523,1)));
L_1803ec7a8_3:;
if(rd(s->u,54,1)){goto L_1803ec7ac_0;}
L_1803ec7a8_4:;
wr(s->r,0,8,rd(s->u,46,8));
L_1803ec7a8_5:;
/* 1803ec7ac: mov rcx, rax */
L_1803ec7ac_0:;
L_1803ec7ac_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ec7ac_2:;
/* 1803ec7af: call 0x180003140 */
L_1803ec7af_0:;
L_1803ec7af_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec7af_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec7b4)));
L_1803ec7af_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ec7af_4:;
return UINT64_C(0x1803ec7b4);
}
uint64_t b_1803ec7ac(CPU*s){
/* 1803ec7ac: mov rcx, rax */
L_1803ec7ac_0:;
L_1803ec7ac_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ec7ac_2:;
/* 1803ec7af: call 0x180003140 */
L_1803ec7af_0:;
L_1803ec7af_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec7af_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec7b4)));
L_1803ec7af_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ec7af_4:;
return UINT64_C(0x1803ec7b4);
}
uint64_t b_1803ec7b4(CPU*s){
/* 1803ec7b4: mov edx, edi */
L_1803ec7b4_0:;
L_1803ec7b4_1:;
wr(s->r,16,4,rd(s->r,56,4));
L_1803ec7b4_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ec7b4_3:;
/* 1803ec7b6: mov qword ptr [rbx + 0x18], rax */
L_1803ec7b6_0:;
L_1803ec7b6_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803ec7b6_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803ec7b6_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ec7b6_4:;
/* 1803ec7ba: cmp dword ptr [rbx + 0xc], edx */
L_1803ec7ba_0:;
L_1803ec7ba_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ec7ba_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec7ba_3:;
wr(s->u,27,4,rd(s->u,16,4));
L_1803ec7ba_4:;
wr(s->r,512,1,(rd(s->u,27,4)<rd(s->r,16,4)));
L_1803ec7ba_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,27,4),rd(s->r,16,4),4,1));
L_1803ec7ba_6:;
wr(s->u,31,4,(rd(s->u,27,4)-rd(s->r,16,4)));
L_1803ec7ba_7:;
wr(s->r,519,1,(sx(rd(s->u,31,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec7ba_8:;
wr(s->r,518,1,(rd(s->u,31,4)==((U)UINT64_C(0x0))));
L_1803ec7ba_9:;
wr(s->u,21,4,(rd(s->u,31,4)&((U)UINT64_C(0xff))));
L_1803ec7ba_10:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803ec7ba_11:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803ec7ba_12:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ec7ba_13:;
/* 1803ec7bd: jbe 0x1803ec7d5 */
L_1803ec7bd_0:;
L_1803ec7bd_1:;
wr(s->u,20,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803ec7bd_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803ec7d5);}
L_1803ec7bd_3:;
return UINT64_C(0x1803ec7bf);
}
uint64_t b_1803ec7bf(CPU*s){
/* 1803ec7bf: mov rcx, rdi */
L_1803ec7bf_0:;
L_1803ec7bf_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803ec7bf_2:;
/* 1803ec7c2: mov rax, qword ptr [rbx + 0x18] */
L_1803ec7c2_0:;
L_1803ec7c2_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803ec7c2_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec7c2_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803ec7c2_4:;
/* 1803ec7c6: inc edx */
L_1803ec7c6_0:;
L_1803ec7c6_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803ec7c6_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803ec7c6_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ec7c6_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec7c6_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ec7c6_6:;
wr(s->u,44,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ec7c6_7:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803ec7c6_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ec7c6_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ec7c6_10:;
/* 1803ec7c8: add rcx, 4 */
L_1803ec7c8_0:;
L_1803ec7c8_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ec7c8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x4)),8,0));
L_1803ec7c8_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803ec7c8_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec7c8_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ec7c8_6:;
wr(s->u,44,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ec7c8_7:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803ec7c8_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ec7c8_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ec7c8_10:;
/* 1803ec7cc: mov dword ptr [rcx + rax - 4], edi */
L_1803ec7cc_0:;
L_1803ec7cc_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,8,8)));
L_1803ec7cc_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ec7cc_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ec7cc_4:;
wr(s->u,32,4,rd(s->r,56,4));
L_1803ec7cc_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803ec7cc_6:;
/* 1803ec7d0: cmp edx, dword ptr [rbx + 0xc] */
L_1803ec7d0_0:;
L_1803ec7d0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ec7d0_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec7d0_3:;
wr(s->u,54,4,rd(s->u,32,4));
L_1803ec7d0_4:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,54,4)));
L_1803ec7d0_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,54,4),4,1));
L_1803ec7d0_6:;
wr(s->u,58,4,(rd(s->r,16,4)-rd(s->u,54,4)));
L_1803ec7d0_7:;
wr(s->r,519,1,(sx(rd(s->u,58,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec7d0_8:;
wr(s->r,518,1,(rd(s->u,58,4)==((U)UINT64_C(0x0))));
L_1803ec7d0_9:;
wr(s->u,44,4,(rd(s->u,58,4)&((U)UINT64_C(0xff))));
L_1803ec7d0_10:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803ec7d0_11:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ec7d0_12:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ec7d0_13:;
/* 1803ec7d3: jb 0x1803ec7c2 */
L_1803ec7d3_0:;
L_1803ec7d3_1:;
if(rd(s->r,512,1)){goto L_1803ec7c2_0;}
L_1803ec7d3_2:;
return UINT64_C(0x1803ec7d5);
}
uint64_t b_1803ec7c2(CPU*s){
/* 1803ec7c2: mov rax, qword ptr [rbx + 0x18] */
L_1803ec7c2_0:;
L_1803ec7c2_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803ec7c2_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec7c2_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803ec7c2_4:;
/* 1803ec7c6: inc edx */
L_1803ec7c6_0:;
L_1803ec7c6_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803ec7c6_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803ec7c6_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ec7c6_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec7c6_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ec7c6_6:;
wr(s->u,44,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ec7c6_7:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803ec7c6_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ec7c6_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ec7c6_10:;
/* 1803ec7c8: add rcx, 4 */
L_1803ec7c8_0:;
L_1803ec7c8_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ec7c8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x4)),8,0));
L_1803ec7c8_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803ec7c8_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec7c8_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ec7c8_6:;
wr(s->u,44,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ec7c8_7:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803ec7c8_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ec7c8_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ec7c8_10:;
/* 1803ec7cc: mov dword ptr [rcx + rax - 4], edi */
L_1803ec7cc_0:;
L_1803ec7cc_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,8,8)));
L_1803ec7cc_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ec7cc_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ec7cc_4:;
wr(s->u,32,4,rd(s->r,56,4));
L_1803ec7cc_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803ec7cc_6:;
/* 1803ec7d0: cmp edx, dword ptr [rbx + 0xc] */
L_1803ec7d0_0:;
L_1803ec7d0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ec7d0_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec7d0_3:;
wr(s->u,54,4,rd(s->u,32,4));
L_1803ec7d0_4:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,54,4)));
L_1803ec7d0_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,54,4),4,1));
L_1803ec7d0_6:;
wr(s->u,58,4,(rd(s->r,16,4)-rd(s->u,54,4)));
L_1803ec7d0_7:;
wr(s->r,519,1,(sx(rd(s->u,58,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec7d0_8:;
wr(s->r,518,1,(rd(s->u,58,4)==((U)UINT64_C(0x0))));
L_1803ec7d0_9:;
wr(s->u,44,4,(rd(s->u,58,4)&((U)UINT64_C(0xff))));
L_1803ec7d0_10:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803ec7d0_11:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ec7d0_12:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ec7d0_13:;
/* 1803ec7d3: jb 0x1803ec7c2 */
L_1803ec7d3_0:;
L_1803ec7d3_1:;
if(rd(s->r,512,1)){goto L_1803ec7c2_0;}
L_1803ec7d3_2:;
return UINT64_C(0x1803ec7d5);
}
uint64_t b_1803ec7d5(CPU*s){
/* 1803ec7d5: mov rax, rbx */
L_1803ec7d5_0:;
L_1803ec7d5_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803ec7d5_2:;
/* 1803ec7d8: mov rbx, qword ptr [rsp + 0x30] */
L_1803ec7d8_0:;
L_1803ec7d8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ec7d8_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec7d8_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ec7d8_4:;
/* 1803ec7dd: add rsp, 0x20 */
L_1803ec7dd_0:;
L_1803ec7dd_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ec7dd_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803ec7dd_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803ec7dd_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec7dd_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec7dd_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec7dd_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ec7dd_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ec7dd_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ec7dd_10:;
/* 1803ec7e1: pop rdi */
L_1803ec7e1_0:;
L_1803ec7e1_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ec7e1_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec7e1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec7e1_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803ec7e1_5:;
/* 1803ec7e2: ret  */
L_1803ec7e2_0:;
L_1803ec7e2_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec7e2_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec7e2_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ec7e2_4:;
return UINT64_C(0x1803ec7e3);
}
uint64_t b_1803ec8a0(CPU*s){
/* 1803ec8a0: push rdi */
L_1803ec8a0_0:;
L_1803ec8a0_1:;
wr(s->u,28,8,rd(s->r,56,8));
L_1803ec8a0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec8a0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,28,8));
L_1803ec8a0_4:;
/* 1803ec8a2: sub rsp, 0x30 */
L_1803ec8a2_0:;
L_1803ec8a2_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803ec8a2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803ec8a2_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803ec8a2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec8a2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec8a2_6:;
wr(s->u,36,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec8a2_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803ec8a2_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ec8a2_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ec8a2_10:;
/* 1803ec8a6: mov qword ptr [rsp + 0x20], 0xfffffffffffffffe */
L_1803ec8a6_0:;
L_1803ec8a6_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ec8a6_2:;
wr(s->u,20,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803ec8a6_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803ec8a6_4:;
/* 1803ec8af: mov qword ptr [rsp + 0x48], rbx */
L_1803ec8af_0:;
L_1803ec8af_1:;
wr(s->u,8,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803ec8af_2:;
wr(s->u,20,8,rd(s->r,24,8));
L_1803ec8af_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803ec8af_4:;
/* 1803ec8b4: mov qword ptr [rsp + 0x50], rsi */
L_1803ec8b4_0:;
L_1803ec8b4_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ec8b4_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803ec8b4_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803ec8b4_4:;
/* 1803ec8b9: mov edi, r9d */
L_1803ec8b9_0:;
L_1803ec8b9_1:;
wr(s->r,56,4,rd(s->r,136,4));
L_1803ec8b9_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803ec8b9_3:;
/* 1803ec8bc: mov rbx, rcx */
L_1803ec8bc_0:;
L_1803ec8bc_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ec8bc_2:;
/* 1803ec8bf: lea rax, [rip + 0x4209ea] */
L_1803ec8bf_0:;
L_1803ec8bf_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080d2b0)));
L_1803ec8bf_2:;
/* 1803ec8c6: mov qword ptr [rcx], rax */
L_1803ec8c6_0:;
L_1803ec8c6_1:;
wr(s->u,20,8,rd(s->r,0,8));
L_1803ec8c6_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,20,8));
L_1803ec8c6_3:;
/* 1803ec8c9: xor eax, eax */
L_1803ec8c9_0:;
L_1803ec8c9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec8c9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec8c9_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ec8c9_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec8c9_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec8c9_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ec8c9_7:;
wr(s->u,36,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ec8c9_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1803ec8c9_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ec8c9_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ec8c9_11:;
/* 1803ec8cb: mov dword ptr [rcx + 0x3c], eax */
L_1803ec8cb_0:;
L_1803ec8cb_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x3c))));
L_1803ec8cb_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803ec8cb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ec8cb_4:;
/* 1803ec8ce: mov dword ptr [rcx + 0x40], eax */
L_1803ec8ce_0:;
L_1803ec8ce_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x40))));
L_1803ec8ce_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803ec8ce_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ec8ce_4:;
/* 1803ec8d1: mov dword ptr [rcx + 0x44], eax */
L_1803ec8d1_0:;
L_1803ec8d1_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x44))));
L_1803ec8d1_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803ec8d1_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ec8d1_4:;
/* 1803ec8d4: mov dword ptr [rcx + 0x48], eax */
L_1803ec8d4_0:;
L_1803ec8d4_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x48))));
L_1803ec8d4_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803ec8d4_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ec8d4_4:;
/* 1803ec8d7: mov dword ptr [rcx + 0x4c], eax */
L_1803ec8d7_0:;
L_1803ec8d7_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4c))));
L_1803ec8d7_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803ec8d7_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ec8d7_4:;
/* 1803ec8da: xor esi, esi */
L_1803ec8da_0:;
L_1803ec8da_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec8da_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec8da_3:;
wr(s->r,48,4,(rd(s->r,48,4)^rd(s->r,48,4)));
L_1803ec8da_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803ec8da_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec8da_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803ec8da_7:;
wr(s->u,36,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803ec8da_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1803ec8da_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803ec8da_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803ec8da_11:;
/* 1803ec8dc: mov qword ptr [rcx + 8], rsi */
L_1803ec8dc_0:;
L_1803ec8dc_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ec8dc_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803ec8dc_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_1803ec8dc_4:;
/* 1803ec8e0: mov qword ptr [rcx + 0x10], rsi */
L_1803ec8e0_0:;
L_1803ec8e0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ec8e0_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803ec8e0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_1803ec8e0_4:;
/* 1803ec8e4: mov qword ptr [rcx + 0x30], rsi */
L_1803ec8e4_0:;
L_1803ec8e4_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x30))));
L_1803ec8e4_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803ec8e4_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_1803ec8e4_4:;
/* 1803ec8e8: mov dword ptr [rcx + 0x38], esi */
L_1803ec8e8_0:;
L_1803ec8e8_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x38))));
L_1803ec8e8_2:;
wr(s->u,16,4,rd(s->r,48,4));
L_1803ec8e8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ec8e8_4:;
/* 1803ec8eb: mov qword ptr [rcx + 0x18], rsi */
L_1803ec8eb_0:;
L_1803ec8eb_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x18))));
L_1803ec8eb_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803ec8eb_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,20,8));
L_1803ec8eb_4:;
/* 1803ec8ef: lea ecx, [rax + 0x20] */
L_1803ec8ef_0:;
L_1803ec8ef_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x20))));
L_1803ec8ef_2:;
wr(s->r,8,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ec8ef_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ec8ef_4:;
/* 1803ec8f2: call 0x180003140 */
L_1803ec8f2_0:;
L_1803ec8f2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec8f2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec8f7)));
L_1803ec8f2_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ec8f2_4:;
return UINT64_C(0x1803ec8f7);
}
uint64_t b_1803ec8f7(CPU*s){
/* 1803ec8f7: mov qword ptr [rsp + 0x40], rax */
L_1803ec8f7_0:;
L_1803ec8f7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ec8f7_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803ec8f7_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ec8f7_4:;
/* 1803ec8fc: test rax, rax */
L_1803ec8fc_0:;
L_1803ec8fc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec8fc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec8fc_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803ec8fc_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec8fc_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803ec8fc_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803ec8fc_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ec8fc_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ec8fc_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ec8fc_10:;
/* 1803ec8ff: je 0x1803ec911 */
L_1803ec8ff_0:;
L_1803ec8ff_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ec911);}
L_1803ec8ff_2:;
return UINT64_C(0x1803ec901);
}
uint64_t b_1803ec901(CPU*s){
/* 1803ec901: mov edx, 0x4000 */
L_1803ec901_0:;
L_1803ec901_1:;
wr(s->r,16,8,((U)UINT64_C(0x4000)));
L_1803ec901_2:;
/* 1803ec906: mov rcx, rax */
L_1803ec906_0:;
L_1803ec906_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ec906_2:;
/* 1803ec909: call 0x1803ec730 */
L_1803ec909_0:;
L_1803ec909_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec909_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec90e)));
L_1803ec909_3:;
return (uint64_t)UINT64_C(0x1803ec730);
L_1803ec909_4:;
return UINT64_C(0x1803ec90e);
}
uint64_t b_1803ec90e(CPU*s){
/* 1803ec90e: mov rsi, rax */
L_1803ec90e_0:;
L_1803ec90e_1:;
wr(s->r,48,8,rd(s->r,0,8));
L_1803ec90e_2:;
/* 1803ec911: mov qword ptr [rbx + 0x18], rsi */
L_1803ec911_0:;
L_1803ec911_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803ec911_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803ec911_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ec911_4:;
/* 1803ec915: test edi, edi */
L_1803ec915_0:;
L_1803ec915_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec915_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec915_3:;
wr(s->u,22,4,(rd(s->r,56,4)&rd(s->r,56,4)));
L_1803ec915_4:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec915_5:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803ec915_6:;
wr(s->u,16,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803ec915_7:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803ec915_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803ec915_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803ec915_10:;
/* 1803ec917: je 0x1803ec935 */
L_1803ec917_0:;
L_1803ec917_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ec935);}
L_1803ec917_2:;
return UINT64_C(0x1803ec919);
}
uint64_t b_1803ec911(CPU*s){
/* 1803ec911: mov qword ptr [rbx + 0x18], rsi */
L_1803ec911_0:;
L_1803ec911_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803ec911_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803ec911_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ec911_4:;
/* 1803ec915: test edi, edi */
L_1803ec915_0:;
L_1803ec915_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec915_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec915_3:;
wr(s->u,22,4,(rd(s->r,56,4)&rd(s->r,56,4)));
L_1803ec915_4:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec915_5:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803ec915_6:;
wr(s->u,16,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803ec915_7:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803ec915_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803ec915_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803ec915_10:;
/* 1803ec917: je 0x1803ec935 */
L_1803ec917_0:;
L_1803ec917_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ec935);}
L_1803ec917_2:;
return UINT64_C(0x1803ec919);
}
uint64_t b_1803ec919(CPU*s){
/* 1803ec919: cmp edi, 1 */
L_1803ec919_0:;
L_1803ec919_1:;
wr(s->u,7,4,rd(s->r,56,4));
L_1803ec919_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x1))));
L_1803ec919_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x1)),4,1));
L_1803ec919_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x1))));
L_1803ec919_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec919_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803ec919_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803ec919_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803ec919_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803ec919_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803ec919_11:;
/* 1803ec91c: jne 0x1803ec94a */
L_1803ec91c_0:;
L_1803ec91c_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803ec91c_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ec94a);}
L_1803ec91c_3:;
return UINT64_C(0x1803ec91e);
}
uint64_t b_1803ec91e(CPU*s){
/* 1803ec91e: mov dword ptr [rbx + 0x20], 0x2000 */
L_1803ec91e_0:;
L_1803ec91e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ec91e_2:;
wr(s->u,8,4,((U)UINT64_C(0x2000)));
L_1803ec91e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ec91e_4:;
/* 1803ec925: mov dword ptr [rbx + 0x24], 0x200 */
L_1803ec925_0:;
L_1803ec925_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803ec925_2:;
wr(s->u,8,4,((U)UINT64_C(0x200)));
L_1803ec925_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ec925_4:;
/* 1803ec92c: mov dword ptr [rbx + 0x28], 0x400 */
L_1803ec92c_0:;
L_1803ec92c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803ec92c_2:;
wr(s->u,8,4,((U)UINT64_C(0x400)));
L_1803ec92c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ec92c_4:;
/* 1803ec933: jmp 0x1803ec94a */
L_1803ec933_0:;
L_1803ec933_1:;
return UINT64_C(0x1803ec94a);
L_1803ec933_2:;
return UINT64_C(0x1803ec935);
}
uint64_t b_1803ec935(CPU*s){
/* 1803ec935: mov dword ptr [rbx + 0x20], 0x800 */
L_1803ec935_0:;
L_1803ec935_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ec935_2:;
wr(s->u,8,4,((U)UINT64_C(0x800)));
L_1803ec935_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ec935_4:;
/* 1803ec93c: mov dword ptr [rbx + 0x24], 0x80 */
L_1803ec93c_0:;
L_1803ec93c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803ec93c_2:;
wr(s->u,8,4,((U)UINT64_C(0x80)));
L_1803ec93c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ec93c_4:;
/* 1803ec943: mov dword ptr [rbx + 0x28], 0x200 */
L_1803ec943_0:;
L_1803ec943_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803ec943_2:;
wr(s->u,8,4,((U)UINT64_C(0x200)));
L_1803ec943_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ec943_4:;
/* 1803ec94a: movsxd rcx, dword ptr [rbx + 0x20] */
L_1803ec94a_0:;
L_1803ec94a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ec94a_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec94a_3:;
wr(s->r,8,8,(U)sx(rd(s->u,12,4),4));
L_1803ec94a_4:;
/* 1803ec94e: mov eax, 4 */
L_1803ec94e_0:;
L_1803ec94e_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803ec94e_2:;
/* 1803ec953: mul rcx */
L_1803ec953_0:;
L_1803ec953_1:;
wr(s->u,25,16,rd(s->r,0,8));
L_1803ec953_2:;
wr(s->u,41,16,rd(s->r,8,8));
L_1803ec953_3:;
wr(s->u,57,16,(rd(s->u,25,16)*rd(s->u,41,16)));
L_1803ec953_4:;
wr(s->r,16,8,(rd(s->u,57,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ec953_5:;
wr(s->r,0,8,(rd(s->u,57,16) >> (((U)UINT64_C(0x0))*8)));
L_1803ec953_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803ec953_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ec953_8:;
/* 1803ec956: mov rcx, 0xffffffffffffffff */
L_1803ec956_0:;
L_1803ec956_1:;
wr(s->r,8,8,((U)UINT64_C(0xffffffffffffffff)));
L_1803ec956_2:;
/* 1803ec95d: cmovo rax, rcx */
L_1803ec95d_0:;
L_1803ec95d_1:;
wr(s->u,16,8,rd(s->r,8,8));
L_1803ec95d_2:;
wr(s->u,24,1,(!rd(s->r,523,1)));
L_1803ec95d_3:;
if(rd(s->u,24,1)){goto L_1803ec961_0;}
L_1803ec95d_4:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803ec95d_5:;
/* 1803ec961: mov rcx, rax */
L_1803ec961_0:;
L_1803ec961_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ec961_2:;
/* 1803ec964: call 0x180003140 */
L_1803ec964_0:;
L_1803ec964_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec964_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec969)));
L_1803ec964_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ec964_4:;
return UINT64_C(0x1803ec969);
}
uint64_t b_1803ec94a(CPU*s){
/* 1803ec94a: movsxd rcx, dword ptr [rbx + 0x20] */
L_1803ec94a_0:;
L_1803ec94a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ec94a_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec94a_3:;
wr(s->r,8,8,(U)sx(rd(s->u,8,4),4));
L_1803ec94a_4:;
/* 1803ec94e: mov eax, 4 */
L_1803ec94e_0:;
L_1803ec94e_1:;
wr(s->r,0,8,((U)UINT64_C(0x4)));
L_1803ec94e_2:;
/* 1803ec953: mul rcx */
L_1803ec953_0:;
L_1803ec953_1:;
wr(s->u,21,16,rd(s->r,0,8));
L_1803ec953_2:;
wr(s->u,37,16,rd(s->r,8,8));
L_1803ec953_3:;
wr(s->u,53,16,(rd(s->u,21,16)*rd(s->u,37,16)));
L_1803ec953_4:;
wr(s->r,16,8,(rd(s->u,53,16) >> (((U)UINT64_C(0x8))*8)));
L_1803ec953_5:;
wr(s->r,0,8,(rd(s->u,53,16) >> (((U)UINT64_C(0x0))*8)));
L_1803ec953_6:;
wr(s->r,512,1,(rd(s->r,16,8)!=((U)UINT64_C(0x0))));
L_1803ec953_7:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ec953_8:;
/* 1803ec956: mov rcx, 0xffffffffffffffff */
L_1803ec956_0:;
L_1803ec956_1:;
wr(s->r,8,8,((U)UINT64_C(0xffffffffffffffff)));
L_1803ec956_2:;
/* 1803ec95d: cmovo rax, rcx */
L_1803ec95d_0:;
L_1803ec95d_1:;
wr(s->u,12,8,rd(s->r,8,8));
L_1803ec95d_2:;
wr(s->u,20,1,(!rd(s->r,523,1)));
L_1803ec95d_3:;
if(rd(s->u,20,1)){goto L_1803ec961_0;}
L_1803ec95d_4:;
wr(s->r,0,8,rd(s->u,12,8));
L_1803ec95d_5:;
/* 1803ec961: mov rcx, rax */
L_1803ec961_0:;
L_1803ec961_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ec961_2:;
/* 1803ec964: call 0x180003140 */
L_1803ec964_0:;
L_1803ec964_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec964_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec969)));
L_1803ec964_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ec964_4:;
return UINT64_C(0x1803ec969);
}
uint64_t b_1803ec961(CPU*s){
/* 1803ec961: mov rcx, rax */
L_1803ec961_0:;
L_1803ec961_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ec961_2:;
/* 1803ec964: call 0x180003140 */
L_1803ec964_0:;
L_1803ec964_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec964_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec969)));
L_1803ec964_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ec964_4:;
return UINT64_C(0x1803ec969);
}
uint64_t b_1803ec969(CPU*s){
/* 1803ec969: mov qword ptr [rbx + 0x30], rax */
L_1803ec969_0:;
L_1803ec969_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ec969_2:;
wr(s->u,13,8,rd(s->r,0,8));
L_1803ec969_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,13,8));
L_1803ec969_4:;
/* 1803ec96d: movsxd r8, dword ptr [rbx + 0x20] */
L_1803ec96d_0:;
L_1803ec96d_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ec96d_2:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ec96d_3:;
wr(s->r,128,8,(U)sx(rd(s->u,21,4),4));
L_1803ec96d_4:;
/* 1803ec971: shl r8, 2 */
L_1803ec971_0:;
L_1803ec971_1:;
wr(s->u,71,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803ec971_2:;
wr(s->u,75,8,rd(s->r,128,8));
L_1803ec971_3:;
wr(s->r,128,8,((rd(s->u,71,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,71,4))));
L_1803ec971_4:;
wr(s->u,54,1,(rd(s->u,71,4)==((U)UINT64_C(0x0))));
L_1803ec971_5:;
wr(s->u,55,4,(rd(s->u,71,4)-((U)UINT64_C(0x1))));
L_1803ec971_6:;
wr(s->u,59,8,((rd(s->u,55,4)>=64)?0:(rd(s->u,75,8)<<rd(s->u,55,4))));
L_1803ec971_7:;
wr(s->u,67,1,(sx(rd(s->u,59,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec971_8:;
wr(s->u,0,1,rd(s->u,54,1));
L_1803ec971_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ec971_10:;
wr(s->u,2,1,(!rd(s->u,54,1)));
L_1803ec971_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec971_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,67,1)));
L_1803ec971_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec971_14:;
wr(s->u,68,1,(rd(s->u,71,4)==((U)UINT64_C(0x1))));
L_1803ec971_15:;
wr(s->u,69,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec971_16:;
wr(s->u,70,1,(rd(s->r,512,1)^rd(s->u,69,1)));
L_1803ec971_17:;
wr(s->u,0,1,rd(s->u,68,1));
L_1803ec971_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,70,1)));
L_1803ec971_19:;
wr(s->u,2,1,(!rd(s->u,68,1)));
L_1803ec971_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ec971_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ec971_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ec971_23:;
wr(s->u,31,1,(rd(s->u,71,4)!=((U)UINT64_C(0x0))));
L_1803ec971_24:;
wr(s->u,32,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec971_25:;
wr(s->u,33,1,(!rd(s->u,31,1)));
L_1803ec971_26:;
wr(s->u,34,1,(rd(s->u,33,1)&rd(s->r,519,1)));
L_1803ec971_27:;
wr(s->u,35,1,(rd(s->u,31,1)&rd(s->u,32,1)));
L_1803ec971_28:;
wr(s->r,519,1,(rd(s->u,34,1)|rd(s->u,35,1)));
L_1803ec971_29:;
wr(s->u,36,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ec971_30:;
wr(s->u,37,1,(!rd(s->u,31,1)));
L_1803ec971_31:;
wr(s->u,38,1,(rd(s->u,37,1)&rd(s->r,518,1)));
L_1803ec971_32:;
wr(s->u,39,1,(rd(s->u,31,1)&rd(s->u,36,1)));
L_1803ec971_33:;
wr(s->r,518,1,(rd(s->u,38,1)|rd(s->u,39,1)));
L_1803ec971_34:;
wr(s->u,40,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ec971_35:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803ec971_36:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803ec971_37:;
wr(s->u,50,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803ec971_38:;
wr(s->u,51,1,(!rd(s->u,31,1)));
L_1803ec971_39:;
wr(s->u,52,1,(rd(s->u,51,1)&rd(s->r,514,1)));
L_1803ec971_40:;
wr(s->u,53,1,(rd(s->u,31,1)&rd(s->u,50,1)));
L_1803ec971_41:;
wr(s->r,514,1,(rd(s->u,52,1)|rd(s->u,53,1)));
L_1803ec971_42:;
/* 1803ec975: xor edx, edx */
L_1803ec975_0:;
L_1803ec975_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec975_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec975_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803ec975_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ec975_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec975_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ec975_7:;
wr(s->u,25,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ec975_8:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803ec975_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803ec975_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803ec975_11:;
/* 1803ec977: mov rcx, rax */
L_1803ec977_0:;
L_1803ec977_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ec977_2:;
/* 1803ec97a: call 0x18000d6a6 */
L_1803ec97a_0:;
L_1803ec97a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec97a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ec97f)));
L_1803ec97a_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803ec97a_4:;
return UINT64_C(0x1803ec97f);
}
uint64_t b_1803ec97f(CPU*s){
/* 1803ec97f: mov r11, qword ptr [rbx + 0x18] */
L_1803ec97f_0:;
L_1803ec97f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803ec97f_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ec97f_3:;
wr(s->r,152,8,rd(s->u,24,8));
L_1803ec97f_4:;
/* 1803ec983: mov eax, dword ptr [r11 + 0xc] */
L_1803ec983_0:;
L_1803ec983_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xc))));
L_1803ec983_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec983_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1803ec983_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec983_5:;
/* 1803ec987: sub eax, dword ptr [rbx + 0x28] */
L_1803ec987_0:;
L_1803ec987_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803ec987_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec987_3:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,20,4)));
L_1803ec987_4:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec987_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,20,4),4,1));
L_1803ec987_6:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec987_7:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->u,20,4)));
L_1803ec987_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec987_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec987_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ec987_11:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ec987_12:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803ec987_13:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ec987_14:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ec987_15:;
/* 1803ec98a: add eax, dword ptr [rbx + 0x24] */
L_1803ec98a_0:;
L_1803ec98a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803ec98a_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec98a_3:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->u,20,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ec98a_4:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec98a_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,20,4),4,0));
L_1803ec98a_6:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec98a_7:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->u,20,4)));
L_1803ec98a_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec98a_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec98a_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ec98a_11:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ec98a_12:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803ec98a_13:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ec98a_14:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ec98a_15:;
/* 1803ec98d: and eax, dword ptr [r11 + 0x10] */
L_1803ec98d_0:;
L_1803ec98d_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x10))));
L_1803ec98d_2:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ec98d_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ec98d_4:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ec98d_5:;
wr(s->r,0,4,(rd(s->r,0,4)&rd(s->u,20,4)));
L_1803ec98d_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ec98d_7:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ec98d_8:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ec98d_9:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ec98d_10:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803ec98d_11:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ec98d_12:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ec98d_13:;
/* 1803ec991: mov dword ptr [r11], eax */
L_1803ec991_0:;
L_1803ec991_1:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803ec991_2:;
mw((uint64_t)rd(s->r,152,8),4,rd(s->u,16,4));
L_1803ec991_3:;
/* 1803ec994: mov rax, rbx */
L_1803ec994_0:;
L_1803ec994_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803ec994_2:;
/* 1803ec997: mov rbx, qword ptr [rsp + 0x48] */
L_1803ec997_0:;
L_1803ec997_1:;
wr(s->u,8,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803ec997_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ec997_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803ec997_4:;
/* 1803ec99c: mov rsi, qword ptr [rsp + 0x50] */
L_1803ec99c_0:;
L_1803ec99c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ec99c_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ec99c_3:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803ec99c_4:;
/* 1803ec9a1: add rsp, 0x30 */
L_1803ec9a1_0:;
L_1803ec9a1_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ec9a1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803ec9a1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803ec9a1_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec9a1_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec9a1_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec9a1_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803ec9a1_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ec9a1_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ec9a1_10:;
/* 1803ec9a5: pop rdi */
L_1803ec9a5_0:;
L_1803ec9a5_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803ec9a5_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec9a5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec9a5_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803ec9a5_5:;
/* 1803ec9a6: ret  */
L_1803ec9a6_0:;
L_1803ec9a6_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ec9a6_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ec9a6_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ec9a6_4:;
return UINT64_C(0x1803ec9a7);
}
uint64_t b_1803ec9f0(CPU*s){
/* 1803ec9f0: push rdi */
L_1803ec9f0_0:;
L_1803ec9f0_1:;
wr(s->u,17,8,rd(s->r,56,8));
L_1803ec9f0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ec9f0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,17,8));
L_1803ec9f0_4:;
/* 1803ec9f2: sub rsp, 0x30 */
L_1803ec9f2_0:;
L_1803ec9f2_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803ec9f2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803ec9f2_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803ec9f2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ec9f2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ec9f2_6:;
wr(s->u,25,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ec9f2_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803ec9f2_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803ec9f2_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803ec9f2_10:;
/* 1803ec9f6: mov qword ptr [rsp + 0x20], 0xfffffffffffffffe */
L_1803ec9f6_0:;
L_1803ec9f6_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ec9f6_2:;
wr(s->u,8,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803ec9f6_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ec9f6_4:;
/* 1803ec9ff: mov qword ptr [rsp + 0x48], rbx */
L_1803ec9ff_0:;
L_1803ec9ff_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803ec9ff_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803ec9ff_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ec9ff_4:;
/* 1803eca04: mov qword ptr [rsp + 0x50], rbp */
L_1803eca04_0:;
L_1803eca04_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803eca04_2:;
wr(s->u,8,8,rd(s->r,40,8));
L_1803eca04_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803eca04_4:;
/* 1803eca09: mov qword ptr [rsp + 0x58], rsi */
L_1803eca09_0:;
L_1803eca09_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803eca09_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803eca09_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803eca09_4:;
/* 1803eca0e: mov ebp, r9d */
L_1803eca0e_0:;
L_1803eca0e_1:;
wr(s->r,40,4,rd(s->r,136,4));
L_1803eca0e_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803eca0e_3:;
/* 1803eca11: mov esi, r8d */
L_1803eca11_0:;
L_1803eca11_1:;
wr(s->r,48,4,rd(s->r,128,4));
L_1803eca11_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803eca11_3:;
/* 1803eca14: mov edi, edx */
L_1803eca14_0:;
L_1803eca14_1:;
wr(s->r,56,4,rd(s->r,16,4));
L_1803eca14_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803eca14_3:;
/* 1803eca16: mov rbx, rcx */
L_1803eca16_0:;
L_1803eca16_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803eca16_2:;
/* 1803eca19: mov qword ptr [rcx], 0 */
L_1803eca19_0:;
L_1803eca19_1:;
wr(s->u,8,8,((U)UINT64_C(0x0)));
L_1803eca19_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,8,8));
L_1803eca19_3:;
/* 1803eca20: cmp edx, 0x2b11 */
L_1803eca20_0:;
L_1803eca20_1:;
wr(s->u,35,4,rd(s->r,16,4));
L_1803eca20_2:;
wr(s->r,512,1,(rd(s->u,35,4)<((U)UINT64_C(0x2b11))));
L_1803eca20_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,35,4),((U)UINT64_C(0x2b11)),4,1));
L_1803eca20_4:;
wr(s->u,39,4,(rd(s->u,35,4)-((U)UINT64_C(0x2b11))));
L_1803eca20_5:;
wr(s->r,519,1,(sx(rd(s->u,39,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eca20_6:;
wr(s->r,518,1,(rd(s->u,39,4)==((U)UINT64_C(0x0))));
L_1803eca20_7:;
wr(s->u,25,4,(rd(s->u,39,4)&((U)UINT64_C(0xff))));
L_1803eca20_8:;
wr(s->u,33,1,pop(rd(s->u,25,4),4));
L_1803eca20_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803eca20_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803eca20_11:;
/* 1803eca26: jge 0x1803eca32 */
L_1803eca26_0:;
L_1803eca26_1:;
wr(s->u,16,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803eca26_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803eca32);}
L_1803eca26_3:;
return UINT64_C(0x1803eca28);
}
uint64_t b_1803eca28(CPU*s){
/* 1803eca28: mov eax, 0x4c4b44 */
L_1803eca28_0:;
L_1803eca28_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b44)));
L_1803eca28_2:;
/* 1803eca2d: jmp 0x1803ecae6 */
L_1803eca2d_0:;
L_1803eca2d_1:;
return UINT64_C(0x1803ecae6);
L_1803eca2d_2:;
return UINT64_C(0x1803eca32);
}
uint64_t b_1803eca32(CPU*s){
/* 1803eca32: mov ecx, 0x50 */
L_1803eca32_0:;
L_1803eca32_1:;
wr(s->r,8,8,((U)UINT64_C(0x50)));
L_1803eca32_2:;
/* 1803eca37: call 0x180003140 */
L_1803eca37_0:;
L_1803eca37_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eca37_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eca3c)));
L_1803eca37_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803eca37_4:;
return UINT64_C(0x1803eca3c);
}
uint64_t b_1803eca3c(CPU*s){
/* 1803eca3c: mov qword ptr [rsp + 0x40], rax */
L_1803eca3c_0:;
L_1803eca3c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803eca3c_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803eca3c_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803eca3c_4:;
/* 1803eca41: test rax, rax */
L_1803eca41_0:;
L_1803eca41_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803eca41_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eca41_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803eca41_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eca41_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803eca41_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803eca41_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803eca41_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803eca41_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803eca41_10:;
/* 1803eca44: je 0x1803eca58 */
L_1803eca44_0:;
L_1803eca44_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803eca58);}
L_1803eca44_2:;
return UINT64_C(0x1803eca46);
}
uint64_t b_1803eca46(CPU*s){
/* 1803eca46: mov r9d, ebp */
L_1803eca46_0:;
L_1803eca46_1:;
wr(s->r,136,4,rd(s->r,40,4));
L_1803eca46_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803eca46_3:;
/* 1803eca49: mov r8d, esi */
L_1803eca49_0:;
L_1803eca49_1:;
wr(s->r,128,4,rd(s->r,48,4));
L_1803eca49_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803eca49_3:;
/* 1803eca4c: mov edx, edi */
L_1803eca4c_0:;
L_1803eca4c_1:;
wr(s->r,16,4,rd(s->r,56,4));
L_1803eca4c_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803eca4c_3:;
/* 1803eca4e: mov rcx, rax */
L_1803eca4e_0:;
L_1803eca4e_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803eca4e_2:;
/* 1803eca51: call 0x1803ec8a0 */
L_1803eca51_0:;
L_1803eca51_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eca51_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eca56)));
L_1803eca51_3:;
return (uint64_t)UINT64_C(0x1803ec8a0);
L_1803eca51_4:;
return UINT64_C(0x1803eca56);
}
uint64_t b_1803eca56(CPU*s){
/* 1803eca56: jmp 0x1803eca5a */
L_1803eca56_0:;
L_1803eca56_1:;
return UINT64_C(0x1803eca5a);
L_1803eca56_2:;
return UINT64_C(0x1803eca58);
}
uint64_t b_1803eca58(CPU*s){
/* 1803eca58: xor eax, eax */
L_1803eca58_0:;
L_1803eca58_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803eca58_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eca58_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803eca58_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eca58_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eca58_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803eca58_7:;
wr(s->u,9,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803eca58_8:;
wr(s->u,17,1,pop(rd(s->u,9,4),4));
L_1803eca58_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803eca58_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803eca58_11:;
/* 1803eca5a: mov qword ptr [rbx], rax */
L_1803eca5a_0:;
L_1803eca5a_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803eca5a_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803eca5a_3:;
/* 1803eca5d: test rax, rax */
L_1803eca5d_0:;
L_1803eca5d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803eca5d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eca5d_3:;
wr(s->u,19,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803eca5d_4:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eca5d_5:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803eca5d_6:;
wr(s->u,9,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803eca5d_7:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803eca5d_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803eca5d_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803eca5d_10:;
/* 1803eca60: jne 0x1803eca69 */
L_1803eca60_0:;
L_1803eca60_1:;
wr(s->u,8,1,(!rd(s->r,518,1)));
L_1803eca60_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803eca69);}
L_1803eca60_3:;
return UINT64_C(0x1803eca62);
}
uint64_t b_1803eca5a(CPU*s){
/* 1803eca5a: mov qword ptr [rbx], rax */
L_1803eca5a_0:;
L_1803eca5a_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803eca5a_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803eca5a_3:;
/* 1803eca5d: test rax, rax */
L_1803eca5d_0:;
L_1803eca5d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803eca5d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eca5d_3:;
wr(s->u,19,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803eca5d_4:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eca5d_5:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803eca5d_6:;
wr(s->u,9,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803eca5d_7:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803eca5d_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803eca5d_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803eca5d_10:;
/* 1803eca60: jne 0x1803eca69 */
L_1803eca60_0:;
L_1803eca60_1:;
wr(s->u,8,1,(!rd(s->r,518,1)));
L_1803eca60_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803eca69);}
L_1803eca60_3:;
return UINT64_C(0x1803eca62);
}
uint64_t b_1803eca62(CPU*s){
/* 1803eca62: mov eax, 0xf4241 */
L_1803eca62_0:;
L_1803eca62_1:;
wr(s->r,0,8,((U)UINT64_C(0xf4241)));
L_1803eca62_2:;
/* 1803eca67: jmp 0x1803ecae6 */
L_1803eca67_0:;
L_1803eca67_1:;
return UINT64_C(0x1803ecae6);
L_1803eca67_2:;
return UINT64_C(0x1803eca69);
}
uint64_t b_1803eca69(CPU*s){
/* 1803eca69: lea rcx, [rax + 8] */
L_1803eca69_0:;
L_1803eca69_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803eca69_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803eca69_3:;
/* 1803eca6d: mov r8d, esi */
L_1803eca6d_0:;
L_1803eca6d_1:;
wr(s->r,128,4,rd(s->r,48,4));
L_1803eca6d_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803eca6d_3:;
/* 1803eca70: mov edx, edi */
L_1803eca70_0:;
L_1803eca70_1:;
wr(s->r,16,4,rd(s->r,56,4));
L_1803eca70_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803eca70_3:;
/* 1803eca72: call 0x1803f1470 */
L_1803eca72_0:;
L_1803eca72_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eca72_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eca77)));
L_1803eca72_3:;
return (uint64_t)UINT64_C(0x1803f1470);
L_1803eca72_4:;
return UINT64_C(0x1803eca77);
}
uint64_t b_1803eca77(CPU*s){
/* 1803eca77: test eax, eax */
L_1803eca77_0:;
L_1803eca77_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803eca77_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eca77_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803eca77_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eca77_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803eca77_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803eca77_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803eca77_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803eca77_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803eca77_10:;
/* 1803eca79: je 0x1803eca9b */
L_1803eca79_0:;
L_1803eca79_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803eca9b);}
L_1803eca79_2:;
return UINT64_C(0x1803eca7b);
}
uint64_t b_1803eca7b(CPU*s){
/* 1803eca7b: mov rcx, qword ptr [rbx] */
L_1803eca7b_0:;
L_1803eca7b_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803eca7b_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803eca7b_3:;
/* 1803eca7e: test rcx, rcx */
L_1803eca7e_0:;
L_1803eca7e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803eca7e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eca7e_3:;
wr(s->u,18,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803eca7e_4:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eca7e_5:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803eca7e_6:;
wr(s->u,8,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803eca7e_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803eca7e_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803eca7e_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803eca7e_10:;
/* 1803eca81: je 0x1803eca8d */
L_1803eca81_0:;
L_1803eca81_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803eca8d);}
L_1803eca81_2:;
return UINT64_C(0x1803eca83);
}
uint64_t b_1803eca83(CPU*s){
/* 1803eca83: mov rax, qword ptr [rcx] */
L_1803eca83_0:;
L_1803eca83_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803eca83_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803eca83_3:;
/* 1803eca86: mov edx, 1 */
L_1803eca86_0:;
L_1803eca86_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803eca86_2:;
/* 1803eca8b: call qword ptr [rax] */
L_1803eca8b_0:;
L_1803eca8b_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803eca8b_2:;
wr(s->u,8,8,rd(s->u,0,8));
L_1803eca8b_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eca8b_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eca8d)));
L_1803eca8b_5:;
return (uint64_t)rd(s->u,8,8);
L_1803eca8b_6:;
return UINT64_C(0x1803eca8d);
}
uint64_t b_1803eca8d(CPU*s){
/* 1803eca8d: mov qword ptr [rbx], 0 */
L_1803eca8d_0:;
L_1803eca8d_1:;
wr(s->u,0,8,((U)UINT64_C(0x0)));
L_1803eca8d_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803eca8d_3:;
/* 1803eca94: mov eax, 0xf4241 */
L_1803eca94_0:;
L_1803eca94_1:;
wr(s->r,0,8,((U)UINT64_C(0xf4241)));
L_1803eca94_2:;
/* 1803eca99: jmp 0x1803ecae6 */
L_1803eca99_0:;
L_1803eca99_1:;
return UINT64_C(0x1803ecae6);
L_1803eca99_2:;
return UINT64_C(0x1803eca9b);
}
uint64_t b_1803eca9b(CPU*s){
/* 1803eca9b: mov rax, qword ptr [rbx] */
L_1803eca9b_0:;
L_1803eca9b_1:;
wr(s->u,12,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803eca9b_2:;
wr(s->r,0,8,rd(s->u,12,8));
L_1803eca9b_3:;
/* 1803eca9e: lea rcx, [rax + 0x10] */
L_1803eca9e_0:;
L_1803eca9e_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803eca9e_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803eca9e_3:;
/* 1803ecaa2: mov r9d, dword ptr [rax + 0x28] */
L_1803ecaa2_0:;
L_1803ecaa2_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x28))));
L_1803ecaa2_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecaa2_3:;
wr(s->r,136,4,rd(s->u,8,4));
L_1803ecaa2_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ecaa2_5:;
/* 1803ecaa6: mov r8d, dword ptr [rax + 0x20] */
L_1803ecaa6_0:;
L_1803ecaa6_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x20))));
L_1803ecaa6_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecaa6_3:;
wr(s->r,128,4,rd(s->u,8,4));
L_1803ecaa6_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ecaa6_5:;
/* 1803ecaaa: mov edx, 0x2b11 */
L_1803ecaaa_0:;
L_1803ecaaa_1:;
wr(s->r,16,8,((U)UINT64_C(0x2b11)));
L_1803ecaaa_2:;
/* 1803ecaaf: call 0x1803efdd0 */
L_1803ecaaf_0:;
L_1803ecaaf_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ecaaf_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ecab4)));
L_1803ecaaf_3:;
return (uint64_t)UINT64_C(0x1803efdd0);
L_1803ecaaf_4:;
return UINT64_C(0x1803ecab4);
}
uint64_t b_1803ecab4(CPU*s){
/* 1803ecab4: test eax, eax */
L_1803ecab4_0:;
L_1803ecab4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecab4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecab4_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803ecab4_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecab4_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803ecab4_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803ecab4_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803ecab4_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803ecab4_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803ecab4_10:;
/* 1803ecab6: je 0x1803ecae4 */
L_1803ecab6_0:;
L_1803ecab6_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ecae4);}
L_1803ecab6_2:;
return UINT64_C(0x1803ecab8);
}
uint64_t b_1803ecab8(CPU*s){
/* 1803ecab8: mov rcx, qword ptr [rbx] */
L_1803ecab8_0:;
L_1803ecab8_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803ecab8_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ecab8_3:;
/* 1803ecabb: add rcx, 8 */
L_1803ecabb_0:;
L_1803ecabb_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ecabb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,0));
L_1803ecabb_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ecabb_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecabb_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ecabb_6:;
wr(s->u,8,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ecabb_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803ecabb_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ecabb_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ecabb_10:;
/* 1803ecabf: call 0x1803f15b0 */
L_1803ecabf_0:;
L_1803ecabf_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ecabf_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ecac4)));
L_1803ecabf_3:;
return (uint64_t)UINT64_C(0x1803f15b0);
L_1803ecabf_4:;
return UINT64_C(0x1803ecac4);
}
uint64_t b_1803ecac4(CPU*s){
/* 1803ecac4: mov rcx, qword ptr [rbx] */
L_1803ecac4_0:;
L_1803ecac4_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803ecac4_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ecac4_3:;
/* 1803ecac7: test rcx, rcx */
L_1803ecac7_0:;
L_1803ecac7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecac7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecac7_3:;
wr(s->u,18,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803ecac7_4:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecac7_5:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803ecac7_6:;
wr(s->u,8,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803ecac7_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803ecac7_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ecac7_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ecac7_10:;
/* 1803ecaca: je 0x1803ecad6 */
L_1803ecaca_0:;
L_1803ecaca_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ecad6);}
L_1803ecaca_2:;
return UINT64_C(0x1803ecacc);
}
uint64_t b_1803ecacc(CPU*s){
/* 1803ecacc: mov rax, qword ptr [rcx] */
L_1803ecacc_0:;
L_1803ecacc_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803ecacc_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803ecacc_3:;
/* 1803ecacf: mov edx, 1 */
L_1803ecacf_0:;
L_1803ecacf_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803ecacf_2:;
/* 1803ecad4: call qword ptr [rax] */
L_1803ecad4_0:;
L_1803ecad4_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803ecad4_2:;
wr(s->u,8,8,rd(s->u,0,8));
L_1803ecad4_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ecad4_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ecad6)));
L_1803ecad4_5:;
return (uint64_t)rd(s->u,8,8);
L_1803ecad4_6:;
return UINT64_C(0x1803ecad6);
}
uint64_t b_1803ecad6(CPU*s){
/* 1803ecad6: mov qword ptr [rbx], 0 */
L_1803ecad6_0:;
L_1803ecad6_1:;
wr(s->u,0,8,((U)UINT64_C(0x0)));
L_1803ecad6_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803ecad6_3:;
/* 1803ecadd: mov eax, 0xf4241 */
L_1803ecadd_0:;
L_1803ecadd_1:;
wr(s->r,0,8,((U)UINT64_C(0xf4241)));
L_1803ecadd_2:;
/* 1803ecae2: jmp 0x1803ecae6 */
L_1803ecae2_0:;
L_1803ecae2_1:;
return UINT64_C(0x1803ecae6);
L_1803ecae2_2:;
return UINT64_C(0x1803ecae4);
}
uint64_t b_1803ecae4(CPU*s){
/* 1803ecae4: xor eax, eax */
L_1803ecae4_0:;
L_1803ecae4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecae4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecae4_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ecae4_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecae4_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecae4_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ecae4_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ecae4_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803ecae4_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ecae4_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ecae4_11:;
/* 1803ecae6: mov rbx, qword ptr [rsp + 0x48] */
L_1803ecae6_0:;
L_1803ecae6_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803ecae6_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecae6_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ecae6_4:;
/* 1803ecaeb: mov rbp, qword ptr [rsp + 0x50] */
L_1803ecaeb_0:;
L_1803ecaeb_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ecaeb_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecaeb_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803ecaeb_4:;
/* 1803ecaf0: mov rsi, qword ptr [rsp + 0x58] */
L_1803ecaf0_0:;
L_1803ecaf0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803ecaf0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecaf0_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803ecaf0_4:;
/* 1803ecaf5: add rsp, 0x30 */
L_1803ecaf5_0:;
L_1803ecaf5_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ecaf5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803ecaf5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803ecaf5_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecaf5_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ecaf5_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ecaf5_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ecaf5_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ecaf5_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ecaf5_10:;
/* 1803ecaf9: pop rdi */
L_1803ecaf9_0:;
L_1803ecaf9_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ecaf9_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ecaf9_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ecaf9_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803ecaf9_5:;
/* 1803ecafa: ret  */
L_1803ecafa_0:;
L_1803ecafa_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ecafa_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ecafa_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ecafa_4:;
return UINT64_C(0x1803ecafb);
}
uint64_t b_1803ecae6(CPU*s){
/* 1803ecae6: mov rbx, qword ptr [rsp + 0x48] */
L_1803ecae6_0:;
L_1803ecae6_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803ecae6_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecae6_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ecae6_4:;
/* 1803ecaeb: mov rbp, qword ptr [rsp + 0x50] */
L_1803ecaeb_0:;
L_1803ecaeb_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ecaeb_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecaeb_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803ecaeb_4:;
/* 1803ecaf0: mov rsi, qword ptr [rsp + 0x58] */
L_1803ecaf0_0:;
L_1803ecaf0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803ecaf0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecaf0_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803ecaf0_4:;
/* 1803ecaf5: add rsp, 0x30 */
L_1803ecaf5_0:;
L_1803ecaf5_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ecaf5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803ecaf5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803ecaf5_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecaf5_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ecaf5_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ecaf5_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ecaf5_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ecaf5_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ecaf5_10:;
/* 1803ecaf9: pop rdi */
L_1803ecaf9_0:;
L_1803ecaf9_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ecaf9_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ecaf9_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ecaf9_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803ecaf9_5:;
/* 1803ecafa: ret  */
L_1803ecafa_0:;
L_1803ecafa_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ecafa_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ecafa_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ecafa_4:;
return UINT64_C(0x1803ecafb);
}
uint64_t b_1803ecb00(CPU*s){
/* 1803ecb00: mov qword ptr [rsp + 0x20], rbx */
L_1803ecb00_0:;
L_1803ecb00_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ecb00_2:;
wr(s->u,12,8,rd(s->r,24,8));
L_1803ecb00_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803ecb00_4:;
/* 1803ecb05: mov dword ptr [rsp + 0x18], r8d */
L_1803ecb05_0:;
L_1803ecb05_1:;
wr(s->u,0,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803ecb05_2:;
wr(s->u,8,4,rd(s->r,128,4));
L_1803ecb05_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecb05_4:;
/* 1803ecb0a: push rbp */
L_1803ecb0a_0:;
L_1803ecb0a_1:;
wr(s->u,22,8,rd(s->r,40,8));
L_1803ecb0a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ecb0a_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,22,8));
L_1803ecb0a_4:;
/* 1803ecb0b: sub rsp, 0x20 */
L_1803ecb0b_0:;
L_1803ecb0b_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803ecb0b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803ecb0b_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803ecb0b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecb0b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ecb0b_6:;
wr(s->u,30,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ecb0b_7:;
wr(s->u,38,1,pop(rd(s->u,30,8),8));
L_1803ecb0b_8:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803ecb0b_9:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803ecb0b_10:;
/* 1803ecb0f: cmp r8d, 0x4000 */
L_1803ecb0f_0:;
L_1803ecb0f_1:;
wr(s->u,40,4,rd(s->r,128,4));
L_1803ecb0f_2:;
wr(s->r,512,1,(rd(s->u,40,4)<((U)UINT64_C(0x4000))));
L_1803ecb0f_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,40,4),((U)UINT64_C(0x4000)),4,1));
L_1803ecb0f_4:;
wr(s->u,44,4,(rd(s->u,40,4)-((U)UINT64_C(0x4000))));
L_1803ecb0f_5:;
wr(s->r,519,1,(sx(rd(s->u,44,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecb0f_6:;
wr(s->r,518,1,(rd(s->u,44,4)==((U)UINT64_C(0x0))));
L_1803ecb0f_7:;
wr(s->u,30,4,(rd(s->u,44,4)&((U)UINT64_C(0xff))));
L_1803ecb0f_8:;
wr(s->u,38,1,pop(rd(s->u,30,4),4));
L_1803ecb0f_9:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803ecb0f_10:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803ecb0f_11:;
/* 1803ecb16: mov rbp, r9 */
L_1803ecb16_0:;
L_1803ecb16_1:;
wr(s->r,40,8,rd(s->r,136,8));
L_1803ecb16_2:;
/* 1803ecb19: mov rbx, rcx */
L_1803ecb19_0:;
L_1803ecb19_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ecb19_2:;
/* 1803ecb1c: jle 0x1803ecb2e */
L_1803ecb1c_0:;
L_1803ecb1c_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ecb1c_2:;
wr(s->u,21,1,((rd(s->r,518,1)!=0)||(rd(s->u,20,1)!=0)));
L_1803ecb1c_3:;
if(rd(s->u,21,1)){return UINT64_C(0x1803ecb2e);}
L_1803ecb1c_4:;
return UINT64_C(0x1803ecb1e);
}
uint64_t b_1803ecb1e(CPU*s){
/* 1803ecb1e: mov eax, 0x4c4b43 */
L_1803ecb1e_0:;
L_1803ecb1e_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803ecb1e_2:;
/* 1803ecb23: mov rbx, qword ptr [rsp + 0x48] */
L_1803ecb23_0:;
L_1803ecb23_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803ecb23_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecb23_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ecb23_4:;
/* 1803ecb28: add rsp, 0x20 */
L_1803ecb28_0:;
L_1803ecb28_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ecb28_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803ecb28_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803ecb28_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecb28_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ecb28_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ecb28_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ecb28_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ecb28_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ecb28_10:;
/* 1803ecb2c: pop rbp */
L_1803ecb2c_0:;
L_1803ecb2c_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ecb2c_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ecb2c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ecb2c_4:;
wr(s->r,40,8,rd(s->u,26,8));
L_1803ecb2c_5:;
/* 1803ecb2d: ret  */
L_1803ecb2d_0:;
L_1803ecb2d_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ecb2d_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ecb2d_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ecb2d_4:;
return UINT64_C(0x1803ecb2e);
}
uint64_t b_1803ecb2e(CPU*s){
/* 1803ecb2e: mov r8, qword ptr [rcx + 0x18] */
L_1803ecb2e_0:;
L_1803ecb2e_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x18))));
L_1803ecb2e_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecb2e_3:;
wr(s->r,128,8,rd(s->u,16,8));
L_1803ecb2e_4:;
/* 1803ecb32: mov rcx, qword ptr [rcx + 8] */
L_1803ecb32_0:;
L_1803ecb32_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ecb32_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecb32_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803ecb32_4:;
/* 1803ecb36: lea r9, [rsp + 0x40] */
L_1803ecb36_0:;
L_1803ecb36_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ecb36_2:;
wr(s->r,136,8,rd(s->u,8,8));
L_1803ecb36_3:;
/* 1803ecb3b: call 0x1803f1850 */
L_1803ecb3b_0:;
L_1803ecb3b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ecb3b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ecb40)));
L_1803ecb3b_3:;
return (uint64_t)UINT64_C(0x1803f1850);
L_1803ecb3b_4:;
return UINT64_C(0x1803ecb40);
}
uint64_t b_1803ecb40(CPU*s){
/* 1803ecb40: mov qword ptr [rsp + 0x30], rsi */
L_1803ecb40_0:;
L_1803ecb40_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ecb40_2:;
wr(s->u,32,8,rd(s->r,48,8));
L_1803ecb40_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,32,8));
L_1803ecb40_4:;
/* 1803ecb45: mov qword ptr [rsp + 0x38], rdi */
L_1803ecb45_0:;
L_1803ecb45_1:;
wr(s->u,8,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803ecb45_2:;
wr(s->u,32,8,rd(s->r,56,8));
L_1803ecb45_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,32,8));
L_1803ecb45_4:;
/* 1803ecb4a: nop word ptr [rax + rax] */
L_1803ecb4a_0:;
L_1803ecb4a_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ecb4a_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803ecb4a_3:;
/* 1803ecb50: mov rdx, qword ptr [rbx + 0x18] */
L_1803ecb50_0:;
L_1803ecb50_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803ecb50_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecb50_3:;
wr(s->r,16,8,rd(s->u,44,8));
L_1803ecb50_4:;
/* 1803ecb54: mov ecx, dword ptr [rdx + 4] */
L_1803ecb54_0:;
L_1803ecb54_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803ecb54_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecb54_3:;
wr(s->r,8,4,rd(s->u,40,4));
L_1803ecb54_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ecb54_5:;
/* 1803ecb57: sub ecx, dword ptr [rdx] */
L_1803ecb57_0:;
L_1803ecb57_1:;
wr(s->u,40,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803ecb57_2:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,40,4)));
L_1803ecb57_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803ecb57_4:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,40,4),4,1));
L_1803ecb57_5:;
wr(s->u,40,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803ecb57_6:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->u,40,4)));
L_1803ecb57_7:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ecb57_8:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecb57_9:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ecb57_10:;
wr(s->u,53,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ecb57_11:;
wr(s->u,57,1,pop(rd(s->u,53,4),4));
L_1803ecb57_12:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803ecb57_13:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803ecb57_14:;
/* 1803ecb59: jns 0x1803ecb5e */
L_1803ecb59_0:;
L_1803ecb59_1:;
wr(s->u,52,1,(!rd(s->r,519,1)));
L_1803ecb59_2:;
if(rd(s->u,52,1)){return UINT64_C(0x1803ecb5e);}
L_1803ecb59_3:;
return UINT64_C(0x1803ecb5b);
}
uint64_t b_1803ecb50(CPU*s){
/* 1803ecb50: mov rdx, qword ptr [rbx + 0x18] */
L_1803ecb50_0:;
L_1803ecb50_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803ecb50_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecb50_3:;
wr(s->r,16,8,rd(s->u,12,8));
L_1803ecb50_4:;
/* 1803ecb54: mov ecx, dword ptr [rdx + 4] */
L_1803ecb54_0:;
L_1803ecb54_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803ecb54_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecb54_3:;
wr(s->r,8,4,rd(s->u,8,4));
L_1803ecb54_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ecb54_5:;
/* 1803ecb57: sub ecx, dword ptr [rdx] */
L_1803ecb57_0:;
L_1803ecb57_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803ecb57_2:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,8,4)));
L_1803ecb57_3:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803ecb57_4:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,8,4),4,1));
L_1803ecb57_5:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803ecb57_6:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->u,8,4)));
L_1803ecb57_7:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ecb57_8:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecb57_9:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ecb57_10:;
wr(s->u,21,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ecb57_11:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803ecb57_12:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803ecb57_13:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ecb57_14:;
/* 1803ecb59: jns 0x1803ecb5e */
L_1803ecb59_0:;
L_1803ecb59_1:;
wr(s->u,20,1,(!rd(s->r,519,1)));
L_1803ecb59_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803ecb5e);}
L_1803ecb59_3:;
return UINT64_C(0x1803ecb5b);
}
uint64_t b_1803ecb5b(CPU*s){
/* 1803ecb5b: add ecx, dword ptr [rdx + 0xc] */
L_1803ecb5b_0:;
L_1803ecb5b_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xc))));
L_1803ecb5b_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecb5b_3:;
wr(s->r,512,1,(((rd(s->r,8,4)+rd(s->u,8,4))&(((U)1<<32)-1))<rd(s->r,8,4)));
L_1803ecb5b_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecb5b_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,8,4),4,0));
L_1803ecb5b_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecb5b_7:;
wr(s->r,8,4,(rd(s->r,8,4)+rd(s->u,8,4)));
L_1803ecb5b_8:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ecb5b_9:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecb5b_10:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ecb5b_11:;
wr(s->u,13,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ecb5b_12:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803ecb5b_13:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803ecb5b_14:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803ecb5b_15:;
/* 1803ecb5e: mov eax, dword ptr [rbx + 0x28] */
L_1803ecb5e_0:;
L_1803ecb5e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803ecb5e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecb5e_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803ecb5e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecb5e_5:;
/* 1803ecb61: cmp ecx, eax */
L_1803ecb61_0:;
L_1803ecb61_1:;
wr(s->u,19,4,rd(s->r,0,4));
L_1803ecb61_2:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,19,4)));
L_1803ecb61_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,19,4),4,1));
L_1803ecb61_4:;
wr(s->u,23,4,(rd(s->r,8,4)-rd(s->u,19,4)));
L_1803ecb61_5:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecb61_6:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803ecb61_7:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803ecb61_8:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803ecb61_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803ecb61_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803ecb61_11:;
/* 1803ecb63: jl 0x1803ecc04 */
L_1803ecb63_0:;
L_1803ecb63_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ecb63_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803ecc04);}
L_1803ecb63_3:;
return UINT64_C(0x1803ecb69);
}
uint64_t b_1803ecb5e(CPU*s){
/* 1803ecb5e: mov eax, dword ptr [rbx + 0x28] */
L_1803ecb5e_0:;
L_1803ecb5e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803ecb5e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecb5e_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803ecb5e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecb5e_5:;
/* 1803ecb61: cmp ecx, eax */
L_1803ecb61_0:;
L_1803ecb61_1:;
wr(s->u,19,4,rd(s->r,0,4));
L_1803ecb61_2:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,19,4)));
L_1803ecb61_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,19,4),4,1));
L_1803ecb61_4:;
wr(s->u,23,4,(rd(s->r,8,4)-rd(s->u,19,4)));
L_1803ecb61_5:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecb61_6:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803ecb61_7:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803ecb61_8:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803ecb61_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803ecb61_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803ecb61_11:;
/* 1803ecb63: jl 0x1803ecc04 */
L_1803ecb63_0:;
L_1803ecb63_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ecb63_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803ecc04);}
L_1803ecb63_3:;
return UINT64_C(0x1803ecb69);
}
uint64_t b_1803ecb69(CPU*s){
/* 1803ecb69: mov esi, dword ptr [rdx] */
L_1803ecb69_0:;
L_1803ecb69_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803ecb69_2:;
wr(s->r,48,4,rd(s->u,0,4));
L_1803ecb69_3:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803ecb69_4:;
/* 1803ecb6b: xor r8d, r8d */
L_1803ecb6b_0:;
L_1803ecb6b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecb6b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecb6b_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1803ecb6b_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ecb6b_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecb6b_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ecb6b_7:;
wr(s->u,6,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ecb6b_8:;
wr(s->u,10,1,pop(rd(s->u,6,4),4));
L_1803ecb6b_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803ecb6b_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803ecb6b_11:;
/* 1803ecb6e: test eax, eax */
L_1803ecb6e_0:;
L_1803ecb6e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecb6e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecb6e_3:;
wr(s->u,12,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803ecb6e_4:;
wr(s->r,519,1,(sx(rd(s->u,12,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecb6e_5:;
wr(s->r,518,1,(rd(s->u,12,4)==((U)UINT64_C(0x0))));
L_1803ecb6e_6:;
wr(s->u,6,4,(rd(s->u,12,4)&((U)UINT64_C(0xff))));
L_1803ecb6e_7:;
wr(s->u,10,1,pop(rd(s->u,6,4),4));
L_1803ecb6e_8:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803ecb6e_9:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803ecb6e_10:;
/* 1803ecb70: jle 0x1803ecbaf */
L_1803ecb70_0:;
L_1803ecb70_1:;
wr(s->u,4,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ecb70_2:;
wr(s->u,5,1,((rd(s->r,518,1)!=0)||(rd(s->u,4,1)!=0)));
L_1803ecb70_3:;
if(rd(s->u,5,1)){return UINT64_C(0x1803ecbaf);}
L_1803ecb70_4:;
return UINT64_C(0x1803ecb72);
}
uint64_t b_1803ecb72(CPU*s){
/* 1803ecb72: xor r9d, r9d */
L_1803ecb72_0:;
L_1803ecb72_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecb72_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecb72_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803ecb72_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ecb72_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecb72_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803ecb72_7:;
wr(s->u,81,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803ecb72_8:;
wr(s->u,89,1,pop(rd(s->u,81,4),4));
L_1803ecb72_9:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803ecb72_10:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803ecb72_11:;
/* 1803ecb75: nop word ptr [rax + rax] */
L_1803ecb75_0:;
L_1803ecb75_1:;
wr(s->u,48,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ecb75_2:;
wr(s->u,56,8,(rd(s->r,0,8)+rd(s->u,48,8)));
L_1803ecb75_3:;
/* 1803ecb80: mov rcx, qword ptr [rbx + 0x18] */
L_1803ecb80_0:;
L_1803ecb80_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803ecb80_2:;
wr(s->u,72,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecb80_3:;
wr(s->r,8,8,rd(s->u,72,8));
L_1803ecb80_4:;
/* 1803ecb84: add r9, 4 */
L_1803ecb84_0:;
L_1803ecb84_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803ecb84_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x4)),8,0));
L_1803ecb84_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x4))));
L_1803ecb84_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecb84_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803ecb84_6:;
wr(s->u,81,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803ecb84_7:;
wr(s->u,89,1,pop(rd(s->u,81,8),8));
L_1803ecb84_8:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803ecb84_9:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803ecb84_10:;
/* 1803ecb88: mov edx, dword ptr [rcx + 0xc] */
L_1803ecb88_0:;
L_1803ecb88_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ecb88_2:;
wr(s->u,68,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecb88_3:;
wr(s->r,16,4,rd(s->u,68,4));
L_1803ecb88_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ecb88_5:;
/* 1803ecb8b: mov eax, dword ptr [rcx + 0x10] */
L_1803ecb8b_0:;
L_1803ecb8b_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ecb8b_2:;
wr(s->u,68,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecb8b_3:;
wr(s->r,0,4,rd(s->u,68,4));
L_1803ecb8b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecb8b_5:;
/* 1803ecb8e: add edx, dword ptr [rcx] */
L_1803ecb8e_0:;
L_1803ecb8e_1:;
wr(s->u,68,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803ecb8e_2:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->u,68,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803ecb8e_3:;
wr(s->u,68,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803ecb8e_4:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,68,4),4,0));
L_1803ecb8e_5:;
wr(s->u,68,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803ecb8e_6:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->u,68,4)));
L_1803ecb8e_7:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ecb8e_8:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecb8e_9:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ecb8e_10:;
wr(s->u,81,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ecb8e_11:;
wr(s->u,89,1,pop(rd(s->u,81,4),4));
L_1803ecb8e_12:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803ecb8e_13:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803ecb8e_14:;
/* 1803ecb90: add edx, r8d */
L_1803ecb90_0:;
L_1803ecb90_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->r,128,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803ecb90_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->r,128,4),4,0));
L_1803ecb90_3:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->r,128,4)));
L_1803ecb90_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ecb90_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecb90_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ecb90_7:;
wr(s->u,81,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ecb90_8:;
wr(s->u,89,1,pop(rd(s->u,81,4),4));
L_1803ecb90_9:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803ecb90_10:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803ecb90_11:;
/* 1803ecb93: inc r8d */
L_1803ecb93_0:;
L_1803ecb93_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x1)),4,0));
L_1803ecb93_2:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0x1))));
L_1803ecb93_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ecb93_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecb93_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ecb93_6:;
wr(s->u,81,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ecb93_7:;
wr(s->u,89,1,pop(rd(s->u,81,4),4));
L_1803ecb93_8:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803ecb93_9:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803ecb93_10:;
/* 1803ecb96: and rdx, rax */
L_1803ecb96_0:;
L_1803ecb96_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecb96_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecb96_3:;
wr(s->r,16,8,(rd(s->r,16,8)&rd(s->r,0,8)));
L_1803ecb96_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecb96_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803ecb96_6:;
wr(s->u,81,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803ecb96_7:;
wr(s->u,89,1,pop(rd(s->u,81,8),8));
L_1803ecb96_8:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803ecb96_9:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803ecb96_10:;
/* 1803ecb99: mov rax, qword ptr [rcx + 0x18] */
L_1803ecb99_0:;
L_1803ecb99_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x18))));
L_1803ecb99_2:;
wr(s->u,72,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecb99_3:;
wr(s->r,0,8,rd(s->u,72,8));
L_1803ecb99_4:;
/* 1803ecb9d: mov rcx, qword ptr [rbx + 0x30] */
L_1803ecb9d_0:;
L_1803ecb9d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ecb9d_2:;
wr(s->u,72,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecb9d_3:;
wr(s->r,8,8,rd(s->u,72,8));
L_1803ecb9d_4:;
/* 1803ecba1: mov eax, dword ptr [rax + rdx*4] */
L_1803ecba1_0:;
L_1803ecba1_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803ecba1_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803ecba1_3:;
wr(s->u,68,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803ecba1_4:;
wr(s->r,0,4,rd(s->u,68,4));
L_1803ecba1_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecba1_6:;
/* 1803ecba4: mov dword ptr [r9 + rcx - 4], eax */
L_1803ecba4_0:;
L_1803ecba4_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,136,8)));
L_1803ecba4_2:;
wr(s->u,32,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803ecba4_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803ecba4_4:;
wr(s->u,64,4,rd(s->r,0,4));
L_1803ecba4_5:;
mw((uint64_t)rd(s->u,40,8),4,rd(s->u,64,4));
L_1803ecba4_6:;
/* 1803ecba9: cmp r8d, dword ptr [rbx + 0x28] */
L_1803ecba9_0:;
L_1803ecba9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803ecba9_2:;
wr(s->u,64,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecba9_3:;
wr(s->u,91,4,rd(s->u,64,4));
L_1803ecba9_4:;
wr(s->r,512,1,(rd(s->r,128,4)<rd(s->u,91,4)));
L_1803ecba9_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->u,91,4),4,1));
L_1803ecba9_6:;
wr(s->u,95,4,(rd(s->r,128,4)-rd(s->u,91,4)));
L_1803ecba9_7:;
wr(s->r,519,1,(sx(rd(s->u,95,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecba9_8:;
wr(s->r,518,1,(rd(s->u,95,4)==((U)UINT64_C(0x0))));
L_1803ecba9_9:;
wr(s->u,81,4,(rd(s->u,95,4)&((U)UINT64_C(0xff))));
L_1803ecba9_10:;
wr(s->u,89,1,pop(rd(s->u,81,4),4));
L_1803ecba9_11:;
wr(s->u,90,1,(rd(s->u,89,1)&((U)UINT64_C(0x1))));
L_1803ecba9_12:;
wr(s->r,514,1,(rd(s->u,90,1)==((U)UINT64_C(0x0))));
L_1803ecba9_13:;
/* 1803ecbad: jl 0x1803ecb80 */
L_1803ecbad_0:;
L_1803ecbad_1:;
wr(s->u,80,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ecbad_2:;
if(rd(s->u,80,1)){goto L_1803ecb80_0;}
L_1803ecbad_3:;
return UINT64_C(0x1803ecbaf);
}
uint64_t b_1803ecb80(CPU*s){
/* 1803ecb80: mov rcx, qword ptr [rbx + 0x18] */
L_1803ecb80_0:;
L_1803ecb80_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803ecb80_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecb80_3:;
wr(s->r,8,8,rd(s->u,56,8));
L_1803ecb80_4:;
/* 1803ecb84: add r9, 4 */
L_1803ecb84_0:;
L_1803ecb84_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803ecb84_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x4)),8,0));
L_1803ecb84_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x4))));
L_1803ecb84_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecb84_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803ecb84_6:;
wr(s->u,65,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803ecb84_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803ecb84_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ecb84_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ecb84_10:;
/* 1803ecb88: mov edx, dword ptr [rcx + 0xc] */
L_1803ecb88_0:;
L_1803ecb88_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ecb88_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecb88_3:;
wr(s->r,16,4,rd(s->u,52,4));
L_1803ecb88_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ecb88_5:;
/* 1803ecb8b: mov eax, dword ptr [rcx + 0x10] */
L_1803ecb8b_0:;
L_1803ecb8b_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ecb8b_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecb8b_3:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803ecb8b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecb8b_5:;
/* 1803ecb8e: add edx, dword ptr [rcx] */
L_1803ecb8e_0:;
L_1803ecb8e_1:;
wr(s->u,52,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803ecb8e_2:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->u,52,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803ecb8e_3:;
wr(s->u,52,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803ecb8e_4:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,52,4),4,0));
L_1803ecb8e_5:;
wr(s->u,52,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803ecb8e_6:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->u,52,4)));
L_1803ecb8e_7:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ecb8e_8:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecb8e_9:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ecb8e_10:;
wr(s->u,65,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ecb8e_11:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803ecb8e_12:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ecb8e_13:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ecb8e_14:;
/* 1803ecb90: add edx, r8d */
L_1803ecb90_0:;
L_1803ecb90_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->r,128,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803ecb90_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->r,128,4),4,0));
L_1803ecb90_3:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->r,128,4)));
L_1803ecb90_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ecb90_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecb90_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ecb90_7:;
wr(s->u,65,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ecb90_8:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803ecb90_9:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ecb90_10:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ecb90_11:;
/* 1803ecb93: inc r8d */
L_1803ecb93_0:;
L_1803ecb93_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x1)),4,0));
L_1803ecb93_2:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0x1))));
L_1803ecb93_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ecb93_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecb93_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ecb93_6:;
wr(s->u,65,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ecb93_7:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803ecb93_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ecb93_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ecb93_10:;
/* 1803ecb96: and rdx, rax */
L_1803ecb96_0:;
L_1803ecb96_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecb96_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecb96_3:;
wr(s->r,16,8,(rd(s->r,16,8)&rd(s->r,0,8)));
L_1803ecb96_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecb96_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803ecb96_6:;
wr(s->u,65,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803ecb96_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803ecb96_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ecb96_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ecb96_10:;
/* 1803ecb99: mov rax, qword ptr [rcx + 0x18] */
L_1803ecb99_0:;
L_1803ecb99_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x18))));
L_1803ecb99_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecb99_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803ecb99_4:;
/* 1803ecb9d: mov rcx, qword ptr [rbx + 0x30] */
L_1803ecb9d_0:;
L_1803ecb9d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ecb9d_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecb9d_3:;
wr(s->r,8,8,rd(s->u,56,8));
L_1803ecb9d_4:;
/* 1803ecba1: mov eax, dword ptr [rax + rdx*4] */
L_1803ecba1_0:;
L_1803ecba1_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803ecba1_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803ecba1_3:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803ecba1_4:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803ecba1_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecba1_6:;
/* 1803ecba4: mov dword ptr [r9 + rcx - 4], eax */
L_1803ecba4_0:;
L_1803ecba4_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,136,8)));
L_1803ecba4_2:;
wr(s->u,32,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803ecba4_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803ecba4_4:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803ecba4_5:;
mw((uint64_t)rd(s->u,40,8),4,rd(s->u,48,4));
L_1803ecba4_6:;
/* 1803ecba9: cmp r8d, dword ptr [rbx + 0x28] */
L_1803ecba9_0:;
L_1803ecba9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803ecba9_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecba9_3:;
wr(s->u,75,4,rd(s->u,48,4));
L_1803ecba9_4:;
wr(s->r,512,1,(rd(s->r,128,4)<rd(s->u,75,4)));
L_1803ecba9_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->u,75,4),4,1));
L_1803ecba9_6:;
wr(s->u,79,4,(rd(s->r,128,4)-rd(s->u,75,4)));
L_1803ecba9_7:;
wr(s->r,519,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecba9_8:;
wr(s->r,518,1,(rd(s->u,79,4)==((U)UINT64_C(0x0))));
L_1803ecba9_9:;
wr(s->u,65,4,(rd(s->u,79,4)&((U)UINT64_C(0xff))));
L_1803ecba9_10:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803ecba9_11:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803ecba9_12:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803ecba9_13:;
/* 1803ecbad: jl 0x1803ecb80 */
L_1803ecbad_0:;
L_1803ecbad_1:;
wr(s->u,64,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ecbad_2:;
if(rd(s->u,64,1)){goto L_1803ecb80_0;}
L_1803ecbad_3:;
return UINT64_C(0x1803ecbaf);
}
uint64_t b_1803ecbaf(CPU*s){
/* 1803ecbaf: mov rdx, qword ptr [rbx + 0x30] */
L_1803ecbaf_0:;
L_1803ecbaf_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ecbaf_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecbaf_3:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803ecbaf_4:;
/* 1803ecbb3: mov rcx, qword ptr [rbx + 0x10] */
L_1803ecbb3_0:;
L_1803ecbb3_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803ecbb3_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecbb3_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803ecbb3_4:;
/* 1803ecbb7: lea r8, [rbx + 0x3c] */
L_1803ecbb7_0:;
L_1803ecbb7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803ecbb7_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1803ecbb7_3:;
/* 1803ecbbb: call 0x1803f1030 */
L_1803ecbbb_0:;
L_1803ecbbb_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ecbbb_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ecbc0)));
L_1803ecbbb_3:;
return (uint64_t)UINT64_C(0x1803f1030);
L_1803ecbbb_4:;
return UINT64_C(0x1803ecbc0);
}
uint64_t b_1803ecbc0(CPU*s){
/* 1803ecbc0: movss xmm0, dword ptr [rbx + 0x44] */
L_1803ecbc0_0:;
L_1803ecbc0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x44))));
L_1803ecbc0_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbc0_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803ecbc0_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ecbc0_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ecbc0_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ecbc0_7:;
/* 1803ecbc5: comiss xmm0, dword ptr [rbx + 0x38] */
L_1803ecbc5_0:;
L_1803ecbc5_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803ecbc5_2:;
wr(s->u,13,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803ecbc5_3:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbc5_4:;
wr(s->u,14,1,isnan(fv(rd(s->u,8,4),4)));
L_1803ecbc5_5:;
wr(s->r,514,1,((rd(s->u,13,1)!=0)||(rd(s->u,14,1)!=0)));
L_1803ecbc5_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbc5_7:;
wr(s->u,15,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->u,8,4),4)));
L_1803ecbc5_8:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,15,1)));
L_1803ecbc5_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbc5_10:;
wr(s->u,16,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->u,8,4),4)));
L_1803ecbc5_11:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,16,1)));
L_1803ecbc5_12:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecbc5_13:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ecbc5_14:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ecbc5_15:;
/* 1803ecbc9: jbe 0x1803ecbd0 */
L_1803ecbc9_0:;
L_1803ecbc9_1:;
wr(s->u,12,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803ecbc9_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803ecbd0);}
L_1803ecbc9_3:;
return UINT64_C(0x1803ecbcb);
}
uint64_t b_1803ecbcb(CPU*s){
/* 1803ecbcb: movss dword ptr [rbx + 0x38], xmm0 */
L_1803ecbcb_0:;
L_1803ecbcb_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803ecbcb_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803ecbcb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecbcb_4:;
/* 1803ecbd0: mov eax, dword ptr [rbx + 0x3c] */
L_1803ecbd0_0:;
L_1803ecbd0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803ecbd0_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbd0_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803ecbd0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecbd0_5:;
/* 1803ecbd3: mov dword ptr [rbp], eax */
L_1803ecbd3_0:;
L_1803ecbd3_1:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecbd3_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,8,4));
L_1803ecbd3_3:;
/* 1803ecbd6: mov eax, dword ptr [rbx + 0x44] */
L_1803ecbd6_0:;
L_1803ecbd6_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x44))));
L_1803ecbd6_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbd6_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803ecbd6_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecbd6_5:;
/* 1803ecbd9: mov dword ptr [rbp + 8], eax */
L_1803ecbd9_0:;
L_1803ecbd9_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803ecbd9_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecbd9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecbd9_4:;
/* 1803ecbdc: mov eax, dword ptr [rbx + 0x48] */
L_1803ecbdc_0:;
L_1803ecbdc_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803ecbdc_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbdc_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803ecbdc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecbdc_5:;
/* 1803ecbdf: mov dword ptr [rbp + 0xc], eax */
L_1803ecbdf_0:;
L_1803ecbdf_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0xc))));
L_1803ecbdf_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecbdf_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecbdf_4:;
/* 1803ecbe2: mov eax, dword ptr [rbx + 0x40] */
L_1803ecbe2_0:;
L_1803ecbe2_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x40))));
L_1803ecbe2_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbe2_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803ecbe2_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecbe2_5:;
/* 1803ecbe5: mov dword ptr [rbp + 4], eax */
L_1803ecbe5_0:;
L_1803ecbe5_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ecbe5_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecbe5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecbe5_4:;
/* 1803ecbe8: mov eax, dword ptr [rbx + 0x4c] */
L_1803ecbe8_0:;
L_1803ecbe8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x4c))));
L_1803ecbe8_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbe8_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803ecbe8_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecbe8_5:;
/* 1803ecbeb: mov dword ptr [rbp + 0x10], eax */
L_1803ecbeb_0:;
L_1803ecbeb_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x10))));
L_1803ecbeb_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecbeb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecbeb_4:;
/* 1803ecbee: mov rcx, qword ptr [rbx + 0x18] */
L_1803ecbee_0:;
L_1803ecbee_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803ecbee_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecbee_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803ecbee_4:;
/* 1803ecbf2: mov eax, dword ptr [rcx + 0xc] */
L_1803ecbf2_0:;
L_1803ecbf2_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ecbf2_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbf2_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803ecbf2_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecbf2_5:;
/* 1803ecbf5: add eax, dword ptr [rbx + 0x24] */
L_1803ecbf5_0:;
L_1803ecbf5_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803ecbf5_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbf5_3:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->u,12,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ecbf5_4:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbf5_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,12,4),4,0));
L_1803ecbf5_6:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbf5_7:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->u,12,4)));
L_1803ecbf5_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecbf5_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecbf5_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ecbf5_11:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ecbf5_12:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803ecbf5_13:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803ecbf5_14:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803ecbf5_15:;
/* 1803ecbf8: add eax, esi */
L_1803ecbf8_0:;
L_1803ecbf8_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,48,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ecbf8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,48,4),4,0));
L_1803ecbf8_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,48,4)));
L_1803ecbf8_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecbf8_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecbf8_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ecbf8_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ecbf8_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803ecbf8_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803ecbf8_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803ecbf8_11:;
/* 1803ecbfa: and eax, dword ptr [rcx + 0x10] */
L_1803ecbfa_0:;
L_1803ecbfa_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ecbfa_2:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecbfa_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecbfa_4:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbfa_5:;
wr(s->r,0,4,(rd(s->r,0,4)&rd(s->u,12,4)));
L_1803ecbfa_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecbfa_7:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecbfa_8:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ecbfa_9:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ecbfa_10:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803ecbfa_11:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803ecbfa_12:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803ecbfa_13:;
/* 1803ecbfd: mov dword ptr [rcx], eax */
L_1803ecbfd_0:;
L_1803ecbfd_1:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecbfd_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,8,4));
L_1803ecbfd_3:;
/* 1803ecbff: jmp 0x1803ecb50 */
L_1803ecbff_0:;
L_1803ecbff_1:;
return UINT64_C(0x1803ecb50);
L_1803ecbff_2:;
return UINT64_C(0x1803ecc04);
}
uint64_t b_1803ecbd0(CPU*s){
/* 1803ecbd0: mov eax, dword ptr [rbx + 0x3c] */
L_1803ecbd0_0:;
L_1803ecbd0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803ecbd0_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbd0_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803ecbd0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecbd0_5:;
/* 1803ecbd3: mov dword ptr [rbp], eax */
L_1803ecbd3_0:;
L_1803ecbd3_1:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecbd3_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,8,4));
L_1803ecbd3_3:;
/* 1803ecbd6: mov eax, dword ptr [rbx + 0x44] */
L_1803ecbd6_0:;
L_1803ecbd6_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x44))));
L_1803ecbd6_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbd6_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803ecbd6_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecbd6_5:;
/* 1803ecbd9: mov dword ptr [rbp + 8], eax */
L_1803ecbd9_0:;
L_1803ecbd9_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803ecbd9_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecbd9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecbd9_4:;
/* 1803ecbdc: mov eax, dword ptr [rbx + 0x48] */
L_1803ecbdc_0:;
L_1803ecbdc_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803ecbdc_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbdc_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803ecbdc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecbdc_5:;
/* 1803ecbdf: mov dword ptr [rbp + 0xc], eax */
L_1803ecbdf_0:;
L_1803ecbdf_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0xc))));
L_1803ecbdf_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecbdf_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecbdf_4:;
/* 1803ecbe2: mov eax, dword ptr [rbx + 0x40] */
L_1803ecbe2_0:;
L_1803ecbe2_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x40))));
L_1803ecbe2_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbe2_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803ecbe2_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecbe2_5:;
/* 1803ecbe5: mov dword ptr [rbp + 4], eax */
L_1803ecbe5_0:;
L_1803ecbe5_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ecbe5_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecbe5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecbe5_4:;
/* 1803ecbe8: mov eax, dword ptr [rbx + 0x4c] */
L_1803ecbe8_0:;
L_1803ecbe8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x4c))));
L_1803ecbe8_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbe8_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803ecbe8_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecbe8_5:;
/* 1803ecbeb: mov dword ptr [rbp + 0x10], eax */
L_1803ecbeb_0:;
L_1803ecbeb_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x10))));
L_1803ecbeb_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecbeb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecbeb_4:;
/* 1803ecbee: mov rcx, qword ptr [rbx + 0x18] */
L_1803ecbee_0:;
L_1803ecbee_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803ecbee_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecbee_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803ecbee_4:;
/* 1803ecbf2: mov eax, dword ptr [rcx + 0xc] */
L_1803ecbf2_0:;
L_1803ecbf2_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ecbf2_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbf2_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803ecbf2_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecbf2_5:;
/* 1803ecbf5: add eax, dword ptr [rbx + 0x24] */
L_1803ecbf5_0:;
L_1803ecbf5_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803ecbf5_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbf5_3:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->u,12,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ecbf5_4:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbf5_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,12,4),4,0));
L_1803ecbf5_6:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbf5_7:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->u,12,4)));
L_1803ecbf5_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecbf5_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecbf5_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ecbf5_11:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ecbf5_12:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803ecbf5_13:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803ecbf5_14:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803ecbf5_15:;
/* 1803ecbf8: add eax, esi */
L_1803ecbf8_0:;
L_1803ecbf8_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,48,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ecbf8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,48,4),4,0));
L_1803ecbf8_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,48,4)));
L_1803ecbf8_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecbf8_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecbf8_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ecbf8_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ecbf8_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803ecbf8_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803ecbf8_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803ecbf8_11:;
/* 1803ecbfa: and eax, dword ptr [rcx + 0x10] */
L_1803ecbfa_0:;
L_1803ecbfa_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ecbfa_2:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecbfa_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecbfa_4:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecbfa_5:;
wr(s->r,0,4,(rd(s->r,0,4)&rd(s->u,12,4)));
L_1803ecbfa_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecbfa_7:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecbfa_8:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ecbfa_9:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ecbfa_10:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803ecbfa_11:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803ecbfa_12:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803ecbfa_13:;
/* 1803ecbfd: mov dword ptr [rcx], eax */
L_1803ecbfd_0:;
L_1803ecbfd_1:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecbfd_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,8,4));
L_1803ecbfd_3:;
/* 1803ecbff: jmp 0x1803ecb50 */
L_1803ecbff_0:;
L_1803ecbff_1:;
return UINT64_C(0x1803ecb50);
L_1803ecbff_2:;
return UINT64_C(0x1803ecc04);
}
uint64_t b_1803ecc04(CPU*s){
/* 1803ecc04: mov rdi, qword ptr [rsp + 0x38] */
L_1803ecc04_0:;
L_1803ecc04_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803ecc04_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecc04_3:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803ecc04_4:;
/* 1803ecc09: mov rsi, qword ptr [rsp + 0x30] */
L_1803ecc09_0:;
L_1803ecc09_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ecc09_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecc09_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803ecc09_4:;
/* 1803ecc0e: mov rbx, qword ptr [rsp + 0x48] */
L_1803ecc0e_0:;
L_1803ecc0e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803ecc0e_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecc0e_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ecc0e_4:;
/* 1803ecc13: xor eax, eax */
L_1803ecc13_0:;
L_1803ecc13_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecc13_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecc13_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ecc13_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecc13_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecc13_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ecc13_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ecc13_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803ecc13_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ecc13_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ecc13_11:;
/* 1803ecc15: add rsp, 0x20 */
L_1803ecc15_0:;
L_1803ecc15_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ecc15_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803ecc15_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803ecc15_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecc15_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ecc15_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ecc15_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ecc15_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ecc15_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ecc15_10:;
/* 1803ecc19: pop rbp */
L_1803ecc19_0:;
L_1803ecc19_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ecc19_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ecc19_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ecc19_4:;
wr(s->r,40,8,rd(s->u,26,8));
L_1803ecc19_5:;
/* 1803ecc1a: ret  */
L_1803ecc1a_0:;
L_1803ecc1a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ecc1a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ecc1a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ecc1a_4:;
return UINT64_C(0x1803ecc1b);
}
uint64_t b_1803ecc20(CPU*s){
/* 1803ecc20: push rbx */
L_1803ecc20_0:;
L_1803ecc20_1:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803ecc20_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ecc20_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803ecc20_4:;
/* 1803ecc22: sub rsp, 0x20 */
L_1803ecc22_0:;
L_1803ecc22_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803ecc22_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803ecc22_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803ecc22_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecc22_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ecc22_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ecc22_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ecc22_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ecc22_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ecc22_10:;
/* 1803ecc26: mov rbx, rcx */
L_1803ecc26_0:;
L_1803ecc26_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ecc26_2:;
/* 1803ecc29: mov rcx, qword ptr [rcx + 0x18] */
L_1803ecc29_0:;
L_1803ecc29_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x18))));
L_1803ecc29_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecc29_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803ecc29_4:;
/* 1803ecc2d: xor r9d, r9d */
L_1803ecc2d_0:;
L_1803ecc2d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecc2d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecc2d_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803ecc2d_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ecc2d_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecc2d_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803ecc2d_7:;
wr(s->u,24,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803ecc2d_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803ecc2d_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ecc2d_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ecc2d_11:;
/* 1803ecc30: test rcx, rcx */
L_1803ecc30_0:;
L_1803ecc30_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecc30_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecc30_3:;
wr(s->u,34,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803ecc30_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecc30_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803ecc30_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803ecc30_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ecc30_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ecc30_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ecc30_10:;
/* 1803ecc33: je 0x1803ecc76 */
L_1803ecc33_0:;
L_1803ecc33_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ecc76);}
L_1803ecc33_2:;
return UINT64_C(0x1803ecc35);
}
uint64_t b_1803ecc35(CPU*s){
/* 1803ecc35: mov edx, r9d */
L_1803ecc35_0:;
L_1803ecc35_1:;
wr(s->r,16,4,rd(s->r,136,4));
L_1803ecc35_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ecc35_3:;
/* 1803ecc38: mov dword ptr [rcx], r9d */
L_1803ecc38_0:;
L_1803ecc38_1:;
wr(s->u,8,4,rd(s->r,136,4));
L_1803ecc38_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,8,4));
L_1803ecc38_3:;
/* 1803ecc3b: mov dword ptr [rcx + 4], r9d */
L_1803ecc3b_0:;
L_1803ecc3b_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803ecc3b_2:;
wr(s->u,8,4,rd(s->r,136,4));
L_1803ecc3b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecc3b_4:;
/* 1803ecc3f: mov dword ptr [rcx + 8], r9d */
L_1803ecc3f_0:;
L_1803ecc3f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803ecc3f_2:;
wr(s->u,8,4,rd(s->r,136,4));
L_1803ecc3f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecc3f_4:;
/* 1803ecc43: cmp dword ptr [rcx + 0xc], edx */
L_1803ecc43_0:;
L_1803ecc43_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ecc43_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecc43_3:;
wr(s->u,23,4,rd(s->u,12,4));
L_1803ecc43_4:;
wr(s->r,512,1,(rd(s->u,23,4)<rd(s->r,16,4)));
L_1803ecc43_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,23,4),rd(s->r,16,4),4,1));
L_1803ecc43_6:;
wr(s->u,27,4,(rd(s->u,23,4)-rd(s->r,16,4)));
L_1803ecc43_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecc43_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803ecc43_9:;
wr(s->u,17,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803ecc43_10:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803ecc43_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ecc43_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ecc43_13:;
/* 1803ecc46: jbe 0x1803ecc64 */
L_1803ecc46_0:;
L_1803ecc46_1:;
wr(s->u,16,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803ecc46_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803ecc64);}
L_1803ecc46_3:;
return UINT64_C(0x1803ecc48);
}
uint64_t b_1803ecc48(CPU*s){
/* 1803ecc48: mov r8, r9 */
L_1803ecc48_0:;
L_1803ecc48_1:;
wr(s->r,128,8,rd(s->r,136,8));
L_1803ecc48_2:;
/* 1803ecc4b: nop dword ptr [rax + rax] */
L_1803ecc4b_0:;
L_1803ecc4b_1:;
wr(s->u,32,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ecc4b_2:;
wr(s->u,40,8,(rd(s->r,0,8)+rd(s->u,32,8)));
L_1803ecc4b_3:;
/* 1803ecc50: mov rax, qword ptr [rcx + 0x18] */
L_1803ecc50_0:;
L_1803ecc50_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x18))));
L_1803ecc50_2:;
wr(s->u,52,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecc50_3:;
wr(s->r,0,8,rd(s->u,52,8));
L_1803ecc50_4:;
/* 1803ecc54: inc edx */
L_1803ecc54_0:;
L_1803ecc54_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803ecc54_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803ecc54_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ecc54_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecc54_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ecc54_6:;
wr(s->u,60,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ecc54_7:;
wr(s->u,68,1,pop(rd(s->u,60,4),4));
L_1803ecc54_8:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803ecc54_9:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803ecc54_10:;
/* 1803ecc56: add r8, 4 */
L_1803ecc56_0:;
L_1803ecc56_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803ecc56_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x4)),8,0));
L_1803ecc56_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803ecc56_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecc56_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ecc56_6:;
wr(s->u,60,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ecc56_7:;
wr(s->u,68,1,pop(rd(s->u,60,8),8));
L_1803ecc56_8:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803ecc56_9:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803ecc56_10:;
/* 1803ecc5a: mov dword ptr [r8 + rax - 4], r9d */
L_1803ecc5a_0:;
L_1803ecc5a_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,128,8)));
L_1803ecc5a_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ecc5a_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ecc5a_4:;
wr(s->u,48,4,rd(s->r,136,4));
L_1803ecc5a_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,48,4));
L_1803ecc5a_6:;
/* 1803ecc5f: cmp edx, dword ptr [rcx + 0xc] */
L_1803ecc5f_0:;
L_1803ecc5f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ecc5f_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecc5f_3:;
wr(s->u,70,4,rd(s->u,48,4));
L_1803ecc5f_4:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,70,4)));
L_1803ecc5f_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,70,4),4,1));
L_1803ecc5f_6:;
wr(s->u,74,4,(rd(s->r,16,4)-rd(s->u,70,4)));
L_1803ecc5f_7:;
wr(s->r,519,1,(sx(rd(s->u,74,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecc5f_8:;
wr(s->r,518,1,(rd(s->u,74,4)==((U)UINT64_C(0x0))));
L_1803ecc5f_9:;
wr(s->u,60,4,(rd(s->u,74,4)&((U)UINT64_C(0xff))));
L_1803ecc5f_10:;
wr(s->u,68,1,pop(rd(s->u,60,4),4));
L_1803ecc5f_11:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803ecc5f_12:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803ecc5f_13:;
/* 1803ecc62: jb 0x1803ecc50 */
L_1803ecc62_0:;
L_1803ecc62_1:;
if(rd(s->r,512,1)){goto L_1803ecc50_0;}
L_1803ecc62_2:;
return UINT64_C(0x1803ecc64);
}
uint64_t b_1803ecc50(CPU*s){
/* 1803ecc50: mov rax, qword ptr [rcx + 0x18] */
L_1803ecc50_0:;
L_1803ecc50_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x18))));
L_1803ecc50_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecc50_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803ecc50_4:;
/* 1803ecc54: inc edx */
L_1803ecc54_0:;
L_1803ecc54_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803ecc54_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803ecc54_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ecc54_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecc54_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ecc54_6:;
wr(s->u,44,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ecc54_7:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803ecc54_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ecc54_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ecc54_10:;
/* 1803ecc56: add r8, 4 */
L_1803ecc56_0:;
L_1803ecc56_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803ecc56_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x4)),8,0));
L_1803ecc56_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803ecc56_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecc56_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ecc56_6:;
wr(s->u,44,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ecc56_7:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803ecc56_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ecc56_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ecc56_10:;
/* 1803ecc5a: mov dword ptr [r8 + rax - 4], r9d */
L_1803ecc5a_0:;
L_1803ecc5a_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,128,8)));
L_1803ecc5a_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ecc5a_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803ecc5a_4:;
wr(s->u,32,4,rd(s->r,136,4));
L_1803ecc5a_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803ecc5a_6:;
/* 1803ecc5f: cmp edx, dword ptr [rcx + 0xc] */
L_1803ecc5f_0:;
L_1803ecc5f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ecc5f_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecc5f_3:;
wr(s->u,54,4,rd(s->u,32,4));
L_1803ecc5f_4:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,54,4)));
L_1803ecc5f_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,54,4),4,1));
L_1803ecc5f_6:;
wr(s->u,58,4,(rd(s->r,16,4)-rd(s->u,54,4)));
L_1803ecc5f_7:;
wr(s->r,519,1,(sx(rd(s->u,58,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecc5f_8:;
wr(s->r,518,1,(rd(s->u,58,4)==((U)UINT64_C(0x0))));
L_1803ecc5f_9:;
wr(s->u,44,4,(rd(s->u,58,4)&((U)UINT64_C(0xff))));
L_1803ecc5f_10:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803ecc5f_11:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ecc5f_12:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ecc5f_13:;
/* 1803ecc62: jb 0x1803ecc50 */
L_1803ecc62_0:;
L_1803ecc62_1:;
if(rd(s->r,512,1)){goto L_1803ecc50_0;}
L_1803ecc62_2:;
return UINT64_C(0x1803ecc64);
}
uint64_t b_1803ecc64(CPU*s){
/* 1803ecc64: mov rcx, qword ptr [rbx + 0x18] */
L_1803ecc64_0:;
L_1803ecc64_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803ecc64_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecc64_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803ecc64_4:;
/* 1803ecc68: mov eax, dword ptr [rcx + 0xc] */
L_1803ecc68_0:;
L_1803ecc68_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803ecc68_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecc68_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803ecc68_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecc68_5:;
/* 1803ecc6b: sub eax, dword ptr [rbx + 0x28] */
L_1803ecc6b_0:;
L_1803ecc6b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803ecc6b_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecc6b_3:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,12,4)));
L_1803ecc6b_4:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecc6b_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,12,4),4,1));
L_1803ecc6b_6:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecc6b_7:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->u,12,4)));
L_1803ecc6b_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecc6b_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecc6b_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ecc6b_11:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ecc6b_12:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803ecc6b_13:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ecc6b_14:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ecc6b_15:;
/* 1803ecc6e: add eax, dword ptr [rbx + 0x24] */
L_1803ecc6e_0:;
L_1803ecc6e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803ecc6e_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecc6e_3:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->u,12,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803ecc6e_4:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecc6e_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,12,4),4,0));
L_1803ecc6e_6:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecc6e_7:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->u,12,4)));
L_1803ecc6e_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecc6e_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecc6e_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ecc6e_11:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ecc6e_12:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803ecc6e_13:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ecc6e_14:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ecc6e_15:;
/* 1803ecc71: and eax, dword ptr [rcx + 0x10] */
L_1803ecc71_0:;
L_1803ecc71_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ecc71_2:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecc71_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecc71_4:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ecc71_5:;
wr(s->r,0,4,(rd(s->r,0,4)&rd(s->u,12,4)));
L_1803ecc71_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecc71_7:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecc71_8:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ecc71_9:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ecc71_10:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803ecc71_11:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ecc71_12:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ecc71_13:;
/* 1803ecc74: mov dword ptr [rcx], eax */
L_1803ecc74_0:;
L_1803ecc74_1:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecc74_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,8,4));
L_1803ecc74_3:;
/* 1803ecc76: xor eax, eax */
L_1803ecc76_0:;
L_1803ecc76_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecc76_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecc76_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ecc76_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecc76_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecc76_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ecc76_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ecc76_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803ecc76_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ecc76_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ecc76_11:;
/* 1803ecc78: mov dword ptr [rbx + 0x38], r9d */
L_1803ecc78_0:;
L_1803ecc78_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803ecc78_2:;
wr(s->u,8,4,rd(s->r,136,4));
L_1803ecc78_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecc78_4:;
/* 1803ecc7c: mov dword ptr [rbx + 0x3c], eax */
L_1803ecc7c_0:;
L_1803ecc7c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803ecc7c_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecc7c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecc7c_4:;
/* 1803ecc7f: mov dword ptr [rbx + 0x40], eax */
L_1803ecc7f_0:;
L_1803ecc7f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x40))));
L_1803ecc7f_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecc7f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecc7f_4:;
/* 1803ecc82: mov dword ptr [rbx + 0x44], eax */
L_1803ecc82_0:;
L_1803ecc82_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x44))));
L_1803ecc82_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecc82_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecc82_4:;
/* 1803ecc85: mov dword ptr [rbx + 0x48], eax */
L_1803ecc85_0:;
L_1803ecc85_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803ecc85_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecc85_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecc85_4:;
/* 1803ecc88: mov dword ptr [rbx + 0x4c], eax */
L_1803ecc88_0:;
L_1803ecc88_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x4c))));
L_1803ecc88_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecc88_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecc88_4:;
/* 1803ecc8b: mov rcx, qword ptr [rbx + 0x30] */
L_1803ecc8b_0:;
L_1803ecc8b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ecc8b_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecc8b_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803ecc8b_4:;
/* 1803ecc8f: test rcx, rcx */
L_1803ecc8f_0:;
L_1803ecc8f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecc8f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecc8f_3:;
wr(s->u,34,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803ecc8f_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecc8f_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803ecc8f_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803ecc8f_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ecc8f_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ecc8f_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ecc8f_10:;
/* 1803ecc92: je 0x1803ecca3 */
L_1803ecc92_0:;
L_1803ecc92_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ecca3);}
L_1803ecc92_2:;
return UINT64_C(0x1803ecc94);
}
uint64_t b_1803ecc76(CPU*s){
/* 1803ecc76: xor eax, eax */
L_1803ecc76_0:;
L_1803ecc76_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecc76_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecc76_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ecc76_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ecc76_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecc76_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ecc76_7:;
wr(s->u,20,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ecc76_8:;
wr(s->u,28,1,pop(rd(s->u,20,4),4));
L_1803ecc76_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803ecc76_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803ecc76_11:;
/* 1803ecc78: mov dword ptr [rbx + 0x38], r9d */
L_1803ecc78_0:;
L_1803ecc78_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803ecc78_2:;
wr(s->u,8,4,rd(s->r,136,4));
L_1803ecc78_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecc78_4:;
/* 1803ecc7c: mov dword ptr [rbx + 0x3c], eax */
L_1803ecc7c_0:;
L_1803ecc7c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803ecc7c_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecc7c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecc7c_4:;
/* 1803ecc7f: mov dword ptr [rbx + 0x40], eax */
L_1803ecc7f_0:;
L_1803ecc7f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x40))));
L_1803ecc7f_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecc7f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecc7f_4:;
/* 1803ecc82: mov dword ptr [rbx + 0x44], eax */
L_1803ecc82_0:;
L_1803ecc82_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x44))));
L_1803ecc82_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecc82_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecc82_4:;
/* 1803ecc85: mov dword ptr [rbx + 0x48], eax */
L_1803ecc85_0:;
L_1803ecc85_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803ecc85_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecc85_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecc85_4:;
/* 1803ecc88: mov dword ptr [rbx + 0x4c], eax */
L_1803ecc88_0:;
L_1803ecc88_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x4c))));
L_1803ecc88_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ecc88_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ecc88_4:;
/* 1803ecc8b: mov rcx, qword ptr [rbx + 0x30] */
L_1803ecc8b_0:;
L_1803ecc8b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ecc8b_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecc8b_3:;
wr(s->r,8,8,rd(s->u,12,8));
L_1803ecc8b_4:;
/* 1803ecc8f: test rcx, rcx */
L_1803ecc8f_0:;
L_1803ecc8f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecc8f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecc8f_3:;
wr(s->u,30,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803ecc8f_4:;
wr(s->r,519,1,(sx(rd(s->u,30,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecc8f_5:;
wr(s->r,518,1,(rd(s->u,30,8)==((U)UINT64_C(0x0))));
L_1803ecc8f_6:;
wr(s->u,20,8,(rd(s->u,30,8)&((U)UINT64_C(0xff))));
L_1803ecc8f_7:;
wr(s->u,28,1,pop(rd(s->u,20,8),8));
L_1803ecc8f_8:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803ecc8f_9:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803ecc8f_10:;
/* 1803ecc92: je 0x1803ecca3 */
L_1803ecc92_0:;
L_1803ecc92_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ecca3);}
L_1803ecc92_2:;
return UINT64_C(0x1803ecc94);
}
uint64_t b_1803ecc94(CPU*s){
/* 1803ecc94: movsxd r8, dword ptr [rbx + 0x20] */
L_1803ecc94_0:;
L_1803ecc94_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ecc94_2:;
wr(s->u,13,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803ecc94_3:;
wr(s->r,128,8,(U)sx(rd(s->u,13,4),4));
L_1803ecc94_4:;
/* 1803ecc98: xor edx, edx */
L_1803ecc98_0:;
L_1803ecc98_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecc98_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecc98_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803ecc98_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ecc98_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecc98_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ecc98_7:;
wr(s->u,17,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ecc98_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803ecc98_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ecc98_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ecc98_11:;
/* 1803ecc9a: shl r8, 2 */
L_1803ecc9a_0:;
L_1803ecc9a_1:;
wr(s->u,63,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803ecc9a_2:;
wr(s->u,67,8,rd(s->r,128,8));
L_1803ecc9a_3:;
wr(s->r,128,8,((rd(s->u,63,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,63,4))));
L_1803ecc9a_4:;
wr(s->u,46,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803ecc9a_5:;
wr(s->u,47,4,(rd(s->u,63,4)-((U)UINT64_C(0x1))));
L_1803ecc9a_6:;
wr(s->u,51,8,((rd(s->u,47,4)>=64)?0:(rd(s->u,67,8)<<rd(s->u,47,4))));
L_1803ecc9a_7:;
wr(s->u,59,1,(sx(rd(s->u,51,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecc9a_8:;
wr(s->u,0,1,rd(s->u,46,1));
L_1803ecc9a_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ecc9a_10:;
wr(s->u,2,1,(!rd(s->u,46,1)));
L_1803ecc9a_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ecc9a_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,59,1)));
L_1803ecc9a_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ecc9a_14:;
wr(s->u,60,1,(rd(s->u,63,4)==((U)UINT64_C(0x1))));
L_1803ecc9a_15:;
wr(s->u,61,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecc9a_16:;
wr(s->u,62,1,(rd(s->r,512,1)^rd(s->u,61,1)));
L_1803ecc9a_17:;
wr(s->u,0,1,rd(s->u,60,1));
L_1803ecc9a_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,62,1)));
L_1803ecc9a_19:;
wr(s->u,2,1,(!rd(s->u,60,1)));
L_1803ecc9a_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ecc9a_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ecc9a_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ecc9a_23:;
wr(s->u,23,1,(rd(s->u,63,4)!=((U)UINT64_C(0x0))));
L_1803ecc9a_24:;
wr(s->u,24,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecc9a_25:;
wr(s->u,25,1,(!rd(s->u,23,1)));
L_1803ecc9a_26:;
wr(s->u,26,1,(rd(s->u,25,1)&rd(s->r,519,1)));
L_1803ecc9a_27:;
wr(s->u,27,1,(rd(s->u,23,1)&rd(s->u,24,1)));
L_1803ecc9a_28:;
wr(s->r,519,1,(rd(s->u,26,1)|rd(s->u,27,1)));
L_1803ecc9a_29:;
wr(s->u,28,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803ecc9a_30:;
wr(s->u,29,1,(!rd(s->u,23,1)));
L_1803ecc9a_31:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,518,1)));
L_1803ecc9a_32:;
wr(s->u,31,1,(rd(s->u,23,1)&rd(s->u,28,1)));
L_1803ecc9a_33:;
wr(s->r,518,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803ecc9a_34:;
wr(s->u,32,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803ecc9a_35:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803ecc9a_36:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ecc9a_37:;
wr(s->u,42,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ecc9a_38:;
wr(s->u,43,1,(!rd(s->u,23,1)));
L_1803ecc9a_39:;
wr(s->u,44,1,(rd(s->u,43,1)&rd(s->r,514,1)));
L_1803ecc9a_40:;
wr(s->u,45,1,(rd(s->u,23,1)&rd(s->u,42,1)));
L_1803ecc9a_41:;
wr(s->r,514,1,(rd(s->u,44,1)|rd(s->u,45,1)));
L_1803ecc9a_42:;
/* 1803ecc9e: call 0x18000d6a6 */
L_1803ecc9e_0:;
L_1803ecc9e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ecc9e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ecca3)));
L_1803ecc9e_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803ecc9e_4:;
return UINT64_C(0x1803ecca3);
}
uint64_t b_1803ecca3(CPU*s){
/* 1803ecca3: mov rcx, qword ptr [rbx + 8] */
L_1803ecca3_0:;
L_1803ecca3_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ecca3_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecca3_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803ecca3_4:;
/* 1803ecca7: test rcx, rcx */
L_1803ecca7_0:;
L_1803ecca7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecca7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecca7_3:;
wr(s->u,26,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803ecca7_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecca7_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803ecca7_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803ecca7_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ecca7_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ecca7_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ecca7_10:;
/* 1803eccaa: je 0x1803eccb1 */
L_1803eccaa_0:;
L_1803eccaa_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803eccb1);}
L_1803eccaa_2:;
return UINT64_C(0x1803eccac);
}
uint64_t b_1803eccac(CPU*s){
/* 1803eccac: call 0x1803f1640 */
L_1803eccac_0:;
L_1803eccac_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eccac_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eccb1)));
L_1803eccac_3:;
return (uint64_t)UINT64_C(0x1803f1640);
L_1803eccac_4:;
return UINT64_C(0x1803eccb1);
}
uint64_t b_1803eccb1(CPU*s){
/* 1803eccb1: mov rcx, qword ptr [rbx + 0x10] */
L_1803eccb1_0:;
L_1803eccb1_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803eccb1_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eccb1_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803eccb1_4:;
/* 1803eccb5: test rcx, rcx */
L_1803eccb5_0:;
L_1803eccb5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803eccb5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eccb5_3:;
wr(s->u,26,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803eccb5_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eccb5_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803eccb5_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803eccb5_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803eccb5_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803eccb5_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803eccb5_10:;
/* 1803eccb8: je 0x1803eccbf */
L_1803eccb8_0:;
L_1803eccb8_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803eccbf);}
L_1803eccb8_2:;
return UINT64_C(0x1803eccba);
}
uint64_t b_1803eccba(CPU*s){
/* 1803eccba: call 0x1803f0f20 */
L_1803eccba_0:;
L_1803eccba_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eccba_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eccbf)));
L_1803eccba_3:;
return (uint64_t)UINT64_C(0x1803f0f20);
L_1803eccba_4:;
return UINT64_C(0x1803eccbf);
}
uint64_t b_1803eccbf(CPU*s){
/* 1803eccbf: add rsp, 0x20 */
L_1803eccbf_0:;
L_1803eccbf_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eccbf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803eccbf_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803eccbf_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eccbf_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eccbf_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eccbf_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803eccbf_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803eccbf_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803eccbf_10:;
/* 1803eccc3: pop rbx */
L_1803eccc3_0:;
L_1803eccc3_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803eccc3_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eccc3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eccc3_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803eccc3_5:;
/* 1803eccc4: ret  */
L_1803eccc4_0:;
L_1803eccc4_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eccc4_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eccc4_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eccc4_4:;
return UINT64_C(0x1803eccc5);
}
uint64_t b_1803ecd30(CPU*s){
/* 1803ecd30: mov qword ptr [rsp + 8], rbx */
L_1803ecd30_0:;
L_1803ecd30_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ecd30_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803ecd30_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803ecd30_4:;
/* 1803ecd35: mov qword ptr [rsp + 0x10], rsi */
L_1803ecd35_0:;
L_1803ecd35_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ecd35_2:;
wr(s->u,16,8,rd(s->r,48,8));
L_1803ecd35_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803ecd35_4:;
/* 1803ecd3a: push rdi */
L_1803ecd3a_0:;
L_1803ecd3a_1:;
wr(s->u,32,8,rd(s->r,56,8));
L_1803ecd3a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ecd3a_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,32,8));
L_1803ecd3a_4:;
/* 1803ecd3b: sub rsp, 0x20 */
L_1803ecd3b_0:;
L_1803ecd3b_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803ecd3b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803ecd3b_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803ecd3b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecd3b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ecd3b_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ecd3b_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803ecd3b_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803ecd3b_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803ecd3b_10:;
/* 1803ecd3f: lea rax, [rip + 0x42056a] */
L_1803ecd3f_0:;
L_1803ecd3f_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080d2b0)));
L_1803ecd3f_2:;
/* 1803ecd46: mov rbx, rcx */
L_1803ecd46_0:;
L_1803ecd46_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ecd46_2:;
/* 1803ecd49: mov esi, edx */
L_1803ecd49_0:;
L_1803ecd49_1:;
wr(s->r,48,4,rd(s->r,16,4));
L_1803ecd49_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803ecd49_3:;
/* 1803ecd4b: mov qword ptr [rcx], rax */
L_1803ecd4b_0:;
L_1803ecd4b_1:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803ecd4b_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,16,8));
L_1803ecd4b_3:;
/* 1803ecd4e: mov rcx, qword ptr [rcx + 0x30] */
L_1803ecd4e_0:;
L_1803ecd4e_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x30))));
L_1803ecd4e_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecd4e_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803ecd4e_4:;
/* 1803ecd52: test rcx, rcx */
L_1803ecd52_0:;
L_1803ecd52_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecd52_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecd52_3:;
wr(s->u,50,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803ecd52_4:;
wr(s->r,519,1,(sx(rd(s->u,50,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecd52_5:;
wr(s->r,518,1,(rd(s->u,50,8)==((U)UINT64_C(0x0))));
L_1803ecd52_6:;
wr(s->u,40,8,(rd(s->u,50,8)&((U)UINT64_C(0xff))));
L_1803ecd52_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803ecd52_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803ecd52_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803ecd52_10:;
/* 1803ecd55: je 0x1803ecd5c */
L_1803ecd55_0:;
L_1803ecd55_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ecd5c);}
L_1803ecd55_2:;
return UINT64_C(0x1803ecd57);
}
uint64_t b_1803ecd57(CPU*s){
/* 1803ecd57: call 0x180003160 */
L_1803ecd57_0:;
L_1803ecd57_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ecd57_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ecd5c)));
L_1803ecd57_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803ecd57_4:;
return UINT64_C(0x1803ecd5c);
}
uint64_t b_1803ecd5c(CPU*s){
/* 1803ecd5c: mov rdi, qword ptr [rbx + 0x18] */
L_1803ecd5c_0:;
L_1803ecd5c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803ecd5c_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecd5c_3:;
wr(s->r,56,8,rd(s->u,16,8));
L_1803ecd5c_4:;
/* 1803ecd60: mov qword ptr [rbx + 0x30], 0 */
L_1803ecd60_0:;
L_1803ecd60_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ecd60_2:;
wr(s->u,8,8,((U)UINT64_C(0x0)));
L_1803ecd60_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ecd60_4:;
/* 1803ecd68: test rdi, rdi */
L_1803ecd68_0:;
L_1803ecd68_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecd68_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecd68_3:;
wr(s->u,34,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1803ecd68_4:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecd68_5:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803ecd68_6:;
wr(s->u,24,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803ecd68_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ecd68_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ecd68_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ecd68_10:;
/* 1803ecd6b: je 0x1803ecd83 */
L_1803ecd6b_0:;
L_1803ecd6b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ecd83);}
L_1803ecd6b_2:;
return UINT64_C(0x1803ecd6d);
}
uint64_t b_1803ecd6d(CPU*s){
/* 1803ecd6d: mov rcx, qword ptr [rdi + 0x18] */
L_1803ecd6d_0:;
L_1803ecd6d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803ecd6d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecd6d_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803ecd6d_4:;
/* 1803ecd71: test rcx, rcx */
L_1803ecd71_0:;
L_1803ecd71_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecd71_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecd71_3:;
wr(s->u,26,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803ecd71_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecd71_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803ecd71_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803ecd71_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ecd71_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ecd71_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ecd71_10:;
/* 1803ecd74: je 0x1803ecd7b */
L_1803ecd74_0:;
L_1803ecd74_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ecd7b);}
L_1803ecd74_2:;
return UINT64_C(0x1803ecd76);
}
uint64_t b_1803ecd76(CPU*s){
/* 1803ecd76: call 0x180003160 */
L_1803ecd76_0:;
L_1803ecd76_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ecd76_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ecd7b)));
L_1803ecd76_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803ecd76_4:;
return UINT64_C(0x1803ecd7b);
}
uint64_t b_1803ecd7b(CPU*s){
/* 1803ecd7b: mov rcx, rdi */
L_1803ecd7b_0:;
L_1803ecd7b_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803ecd7b_2:;
/* 1803ecd7e: call 0x180003160 */
L_1803ecd7e_0:;
L_1803ecd7e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ecd7e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ecd83)));
L_1803ecd7e_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803ecd7e_4:;
return UINT64_C(0x1803ecd83);
}
uint64_t b_1803ecd83(CPU*s){
/* 1803ecd83: mov qword ptr [rbx + 0x18], 0 */
L_1803ecd83_0:;
L_1803ecd83_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803ecd83_2:;
wr(s->u,8,8,((U)UINT64_C(0x0)));
L_1803ecd83_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ecd83_4:;
/* 1803ecd8b: test sil, 1 */
L_1803ecd8b_0:;
L_1803ecd8b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecd8b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecd8b_3:;
wr(s->u,19,1,(rd(s->r,48,1)&((U)UINT64_C(0x1))));
L_1803ecd8b_4:;
wr(s->r,519,1,(sx(rd(s->u,19,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803ecd8b_5:;
wr(s->r,518,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803ecd8b_6:;
wr(s->u,16,1,(rd(s->u,19,1)&((U)UINT64_C(0xff))));
L_1803ecd8b_7:;
wr(s->u,17,1,pop(rd(s->u,16,1),1));
L_1803ecd8b_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803ecd8b_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803ecd8b_10:;
/* 1803ecd8f: je 0x1803ecd99 */
L_1803ecd8f_0:;
L_1803ecd8f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ecd99);}
L_1803ecd8f_2:;
return UINT64_C(0x1803ecd91);
}
uint64_t b_1803ecd91(CPU*s){
/* 1803ecd91: mov rcx, rbx */
L_1803ecd91_0:;
L_1803ecd91_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803ecd91_2:;
/* 1803ecd94: call 0x180003160 */
L_1803ecd94_0:;
L_1803ecd94_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ecd94_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ecd99)));
L_1803ecd94_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803ecd94_4:;
return UINT64_C(0x1803ecd99);
}
uint64_t b_1803ecd99(CPU*s){
/* 1803ecd99: mov rsi, qword ptr [rsp + 0x38] */
L_1803ecd99_0:;
L_1803ecd99_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803ecd99_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecd99_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803ecd99_4:;
/* 1803ecd9e: mov rax, rbx */
L_1803ecd9e_0:;
L_1803ecd9e_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803ecd9e_2:;
/* 1803ecda1: mov rbx, qword ptr [rsp + 0x30] */
L_1803ecda1_0:;
L_1803ecda1_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ecda1_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ecda1_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ecda1_4:;
/* 1803ecda6: add rsp, 0x20 */
L_1803ecda6_0:;
L_1803ecda6_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ecda6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803ecda6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803ecda6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecda6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ecda6_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ecda6_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ecda6_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ecda6_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ecda6_10:;
/* 1803ecdaa: pop rdi */
L_1803ecdaa_0:;
L_1803ecdaa_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ecdaa_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ecdaa_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ecdaa_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803ecdaa_5:;
/* 1803ecdab: ret  */
L_1803ecdab_0:;
L_1803ecdab_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ecdab_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ecdab_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ecdab_4:;
return UINT64_C(0x1803ecdac);
}
uint64_t b_1803ece00(CPU*s){
/* 1803ece00: push rbx */
L_1803ece00_0:;
L_1803ece00_1:;
wr(s->u,24,8,rd(s->r,24,8));
L_1803ece00_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ece00_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803ece00_4:;
/* 1803ece02: sub rsp, 0x30 */
L_1803ece02_0:;
L_1803ece02_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803ece02_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803ece02_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803ece02_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ece02_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ece02_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ece02_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803ece02_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ece02_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ece02_10:;
/* 1803ece06: mov rbx, rcx */
L_1803ece06_0:;
L_1803ece06_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ece06_2:;
/* 1803ece09: mov ecx, 0x18 */
L_1803ece09_0:;
L_1803ece09_1:;
wr(s->r,8,8,((U)UINT64_C(0x18)));
L_1803ece09_2:;
/* 1803ece0e: movaps xmmword ptr [rsp + 0x20], xmm6 */
L_1803ece0e_0:;
L_1803ece0e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ece0e_2:;
wr(s->u,8,16,rd(s->r,4992,16));
L_1803ece0e_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,8,16));
L_1803ece0e_4:;
/* 1803ece13: movaps xmm6, xmm1 */
L_1803ece13_0:;
L_1803ece13_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803ece13_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803ece13_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803ece13_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803ece13_5:;
/* 1803ece16: call 0x180003140 */
L_1803ece16_0:;
L_1803ece16_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ece16_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ece1b)));
L_1803ece16_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ece16_4:;
return UINT64_C(0x1803ece1b);
}
uint64_t b_1803ece1b(CPU*s){
/* 1803ece1b: test rax, rax */
L_1803ece1b_0:;
L_1803ece1b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ece1b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ece1b_3:;
wr(s->u,10,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803ece1b_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ece1b_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803ece1b_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803ece1b_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ece1b_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ece1b_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ece1b_10:;
/* 1803ece1e: je 0x1803ece63 */
L_1803ece1e_0:;
L_1803ece1e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ece63);}
L_1803ece1e_2:;
return UINT64_C(0x1803ece20);
}
uint64_t b_1803ece20(CPU*s){
/* 1803ece20: movss xmm2, dword ptr [rip + 0x41f6cc] */
L_1803ece20_0:;
L_1803ece20_1:;
wr(s->r,4736,4,mr(UINT64_C(0x18080c4f4),4));
L_1803ece20_2:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803ece20_3:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803ece20_4:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803ece20_5:;
/* 1803ece28: movss xmm0, dword ptr [rip + 0x25fe14] */
L_1803ece28_0:;
L_1803ece28_1:;
wr(s->r,4608,4,mr(UINT64_C(0x18064cc44),4));
L_1803ece28_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ece28_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ece28_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ece28_5:;
/* 1803ece30: mov dword ptr [rax + 8], 0 */
L_1803ece30_0:;
L_1803ece30_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803ece30_2:;
wr(s->u,16,4,((U)UINT64_C(0x0)));
L_1803ece30_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ece30_4:;
/* 1803ece37: lea rcx, [rip + 0x4204aa] */
L_1803ece37_0:;
L_1803ece37_1:;
wr(s->r,8,8,((U)UINT64_C(0x18080d2e8)));
L_1803ece37_2:;
/* 1803ece3e: mov qword ptr [rax], rcx */
L_1803ece3e_0:;
L_1803ece3e_1:;
wr(s->u,20,8,rd(s->r,8,8));
L_1803ece3e_2:;
mw((uint64_t)rd(s->r,0,8),8,rd(s->u,20,8));
L_1803ece3e_3:;
/* 1803ece41: subss xmm2, xmm6 */
L_1803ece41_0:;
L_1803ece41_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803ece41_2:;
/* 1803ece45: movss dword ptr [rax + 0xc], xmm2 */
L_1803ece45_0:;
L_1803ece45_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0xc))));
L_1803ece45_2:;
wr(s->u,16,4,rd(s->r,4736,4));
L_1803ece45_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ece45_4:;
/* 1803ece4a: subss xmm0, xmm2 */
L_1803ece4a_0:;
L_1803ece4a_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803ece4a_2:;
/* 1803ece4e: movss dword ptr [rax + 0x10], xmm0 */
L_1803ece4e_0:;
L_1803ece4e_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803ece4e_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ece4e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803ece4e_4:;
/* 1803ece53: mov qword ptr [rbx], rax */
L_1803ece53_0:;
L_1803ece53_1:;
wr(s->u,20,8,rd(s->r,0,8));
L_1803ece53_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,20,8));
L_1803ece53_3:;
/* 1803ece56: xor eax, eax */
L_1803ece56_0:;
L_1803ece56_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ece56_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ece56_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ece56_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ece56_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ece56_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ece56_7:;
wr(s->u,44,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ece56_8:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803ece56_9:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ece56_10:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ece56_11:;
/* 1803ece58: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803ece58_0:;
L_1803ece58_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ece58_2:;
wr(s->u,28,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803ece58_3:;
wr(s->u,62,16,rd(s->u,28,16));
L_1803ece58_4:;
wr(s->r,4992,4,rd(s->u,62,4));
L_1803ece58_5:;
wr(s->r,4996,4,rd(s->u,66,4));
L_1803ece58_6:;
wr(s->r,5000,4,rd(s->u,70,4));
L_1803ece58_7:;
wr(s->r,5004,4,rd(s->u,74,4));
L_1803ece58_8:;
/* 1803ece5d: add rsp, 0x30 */
L_1803ece5d_0:;
L_1803ece5d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ece5d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803ece5d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803ece5d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ece5d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ece5d_6:;
wr(s->u,44,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ece5d_7:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803ece5d_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803ece5d_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803ece5d_10:;
/* 1803ece61: pop rbx */
L_1803ece61_0:;
L_1803ece61_1:;
wr(s->u,54,8,((U)UINT64_C(0x0)));
L_1803ece61_2:;
wr(s->u,54,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ece61_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ece61_4:;
wr(s->r,24,8,rd(s->u,54,8));
L_1803ece61_5:;
/* 1803ece62: ret  */
L_1803ece62_0:;
L_1803ece62_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ece62_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ece62_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ece62_4:;
return UINT64_C(0x1803ece63);
}
uint64_t b_1803ece63(CPU*s){
/* 1803ece63: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803ece63_0:;
L_1803ece63_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ece63_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803ece63_3:;
wr(s->u,50,16,rd(s->u,16,16));
L_1803ece63_4:;
wr(s->r,4992,4,rd(s->u,50,4));
L_1803ece63_5:;
wr(s->r,4996,4,rd(s->u,54,4));
L_1803ece63_6:;
wr(s->r,5000,4,rd(s->u,58,4));
L_1803ece63_7:;
wr(s->r,5004,4,rd(s->u,62,4));
L_1803ece63_8:;
/* 1803ece68: mov qword ptr [rbx], 0 */
L_1803ece68_0:;
L_1803ece68_1:;
wr(s->u,8,8,((U)UINT64_C(0x0)));
L_1803ece68_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,8,8));
L_1803ece68_3:;
/* 1803ece6f: xor eax, eax */
L_1803ece6f_0:;
L_1803ece6f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ece6f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ece6f_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ece6f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ece6f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ece6f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ece6f_7:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ece6f_8:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803ece6f_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ece6f_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ece6f_11:;
/* 1803ece71: add rsp, 0x30 */
L_1803ece71_0:;
L_1803ece71_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ece71_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803ece71_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803ece71_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ece71_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ece71_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ece71_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803ece71_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803ece71_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803ece71_10:;
/* 1803ece75: pop rbx */
L_1803ece75_0:;
L_1803ece75_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803ece75_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ece75_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ece75_4:;
wr(s->r,24,8,rd(s->u,42,8));
L_1803ece75_5:;
/* 1803ece76: ret  */
L_1803ece76_0:;
L_1803ece76_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ece76_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ece76_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ece76_4:;
return UINT64_C(0x1803ece77);
}
uint64_t b_1803ece80(CPU*s){
/* 1803ece80: sub rsp, 0x28 */
L_1803ece80_0:;
L_1803ece80_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803ece80_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803ece80_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803ece80_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ece80_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ece80_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ece80_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ece80_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ece80_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ece80_10:;
/* 1803ece84: test rcx, rcx */
L_1803ece84_0:;
L_1803ece84_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ece84_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ece84_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803ece84_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ece84_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803ece84_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803ece84_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ece84_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ece84_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ece84_10:;
/* 1803ece87: je 0x1803ece93 */
L_1803ece87_0:;
L_1803ece87_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ece93);}
L_1803ece87_2:;
return UINT64_C(0x1803ece89);
}
uint64_t b_1803ece89(CPU*s){
/* 1803ece89: mov rax, qword ptr [rcx] */
L_1803ece89_0:;
L_1803ece89_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803ece89_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803ece89_3:;
/* 1803ece8c: mov edx, 1 */
L_1803ece8c_0:;
L_1803ece8c_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803ece8c_2:;
/* 1803ece91: call qword ptr [rax] */
L_1803ece91_0:;
L_1803ece91_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803ece91_2:;
wr(s->u,8,8,rd(s->u,0,8));
L_1803ece91_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ece91_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ece93)));
L_1803ece91_5:;
return (uint64_t)rd(s->u,8,8);
L_1803ece91_6:;
return UINT64_C(0x1803ece93);
}
uint64_t b_1803ece93(CPU*s){
/* 1803ece93: xor eax, eax */
L_1803ece93_0:;
L_1803ece93_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ece93_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ece93_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ece93_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ece93_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ece93_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ece93_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ece93_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803ece93_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ece93_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ece93_11:;
/* 1803ece95: add rsp, 0x28 */
L_1803ece95_0:;
L_1803ece95_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ece95_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803ece95_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803ece95_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ece95_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ece95_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ece95_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ece95_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ece95_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ece95_10:;
/* 1803ece99: ret  */
L_1803ece99_0:;
L_1803ece99_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ece99_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ece99_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ece99_4:;
return UINT64_C(0x1803ece9a);
}
uint64_t b_1803ecff0(CPU*s){
/* 1803ecff0: sub rsp, 8 */
L_1803ecff0_0:;
L_1803ecff0_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x8))));
L_1803ecff0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x8)),8,1));
L_1803ecff0_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ecff0_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ecff0_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ecff0_6:;
wr(s->u,1,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ecff0_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803ecff0_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ecff0_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ecff0_10:;
/* 1803ecff4: movss xmm3, dword ptr [rip + 0x41f984] */
L_1803ecff4_0:;
L_1803ecff4_1:;
wr(s->r,4800,4,mr(UINT64_C(0x18080c980),4));
L_1803ecff4_2:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ecff4_3:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ecff4_4:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ecff4_5:;
/* 1803ecffc: movsxd r10, r9d */
L_1803ecffc_0:;
L_1803ecffc_1:;
wr(s->r,144,8,(U)sx(rd(s->r,136,4),4));
L_1803ecffc_2:;
/* 1803ecfff: xor r11d, r11d */
L_1803ecfff_0:;
L_1803ecfff_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ecfff_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ecfff_3:;
wr(s->r,152,4,(rd(s->r,152,4)^rd(s->r,152,4)));
L_1803ecfff_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ecfff_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ecfff_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803ecfff_7:;
wr(s->u,1,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803ecfff_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803ecfff_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ecfff_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ecfff_11:;
/* 1803ed002: cmp r10, 4 */
L_1803ed002_0:;
L_1803ed002_1:;
wr(s->u,11,8,rd(s->r,144,8));
L_1803ed002_2:;
wr(s->r,512,1,(rd(s->u,11,8)<((U)UINT64_C(0x4))));
L_1803ed002_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,11,8),((U)UINT64_C(0x4)),8,1));
L_1803ed002_4:;
wr(s->u,19,8,(rd(s->u,11,8)-((U)UINT64_C(0x4))));
L_1803ed002_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ed002_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803ed002_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803ed002_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803ed002_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ed002_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ed002_11:;
/* 1803ed006: jl 0x1803ed0f5 */
L_1803ed006_0:;
L_1803ed006_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ed006_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ed0f5);}
L_1803ed006_3:;
return UINT64_C(0x1803ed00c);
}
