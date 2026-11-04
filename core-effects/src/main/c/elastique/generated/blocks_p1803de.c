#include "lift_runtime.h"
uint64_t b_1803de00c(CPU*s){
/* 1803de00c: lea rcx, [rdi + 0x678] */
L_1803de00c_0:;
L_1803de00c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x678))));
L_1803de00c_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803de00c_3:;
/* 1803de013: call qword ptr [rip + 0x640147] */
L_1803de013_0:;
L_1803de013_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803de013_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de013_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de019)));
L_1803de013_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de013_5:;
return UINT64_C(0x1803de019);
}
uint64_t b_1803de019(CPU*s){
/* 1803de019: lea rcx, [rdi + 0x8a20] */
L_1803de019_0:;
L_1803de019_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x8a20))));
L_1803de019_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803de019_3:;
/* 1803de020: call qword ptr [rip + 0x64018a] */
L_1803de020_0:;
L_1803de020_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e1b0),8));
L_1803de020_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de020_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de026)));
L_1803de020_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de020_5:;
return UINT64_C(0x1803de026);
}
uint64_t b_1803de026(CPU*s){
/* 1803de026: xor esi, esi */
L_1803de026_0:;
L_1803de026_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de026_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de026_3:;
wr(s->r,48,4,(rd(s->r,48,4)^rd(s->r,48,4)));
L_1803de026_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803de026_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de026_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803de026_7:;
wr(s->u,14,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803de026_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803de026_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803de026_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803de026_11:;
/* 1803de028: cmp dword ptr [rdi + 0x34], esi */
L_1803de028_0:;
L_1803de028_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x34))));
L_1803de028_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803de028_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803de028_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,48,4)));
L_1803de028_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,48,4),4,1));
L_1803de028_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,48,4)));
L_1803de028_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de028_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803de028_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803de028_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803de028_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803de028_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803de028_13:;
/* 1803de02b: jle 0x1803de0bc */
L_1803de02b_0:;
L_1803de02b_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803de02b_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803de02b_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803de0bc);}
L_1803de02b_4:;
return UINT64_C(0x1803de031);
}
uint64_t b_1803de031(CPU*s){
/* 1803de031: mov qword ptr [rsp + 0x38], rbx */
L_1803de031_0:;
L_1803de031_1:;
wr(s->u,8,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803de031_2:;
wr(s->u,40,8,rd(s->r,24,8));
L_1803de031_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,40,8));
L_1803de031_4:;
/* 1803de036: mov qword ptr [rsp + 0x40], rbp */
L_1803de036_0:;
L_1803de036_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803de036_2:;
wr(s->u,40,8,rd(s->r,40,8));
L_1803de036_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,40,8));
L_1803de036_4:;
/* 1803de03b: lea rbp, [rdi + 0x4f8] */
L_1803de03b_0:;
L_1803de03b_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x4f8))));
L_1803de03b_2:;
wr(s->r,40,8,rd(s->u,0,8));
L_1803de03b_3:;
/* 1803de042: movsxd rbx, esi */
L_1803de042_0:;
L_1803de042_1:;
wr(s->r,24,8,(U)sx(rd(s->r,48,4),4));
L_1803de042_2:;
/* 1803de045: lea rcx, [rdi + rbx*8 + 0x378] */
L_1803de045_0:;
L_1803de045_1:;
wr(s->u,16,8,(((U)UINT64_C(0x378))+rd(s->r,56,8)));
L_1803de045_2:;
wr(s->u,24,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803de045_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803de045_4:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803de045_5:;
/* 1803de04d: call qword ptr [rip + 0x64010d] */
L_1803de04d_0:;
L_1803de04d_1:;
wr(s->u,48,8,mr(UINT64_C(0x180a1e160),8));
L_1803de04d_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de04d_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de053)));
L_1803de04d_4:;
return (uint64_t)rd(s->u,48,8);
L_1803de04d_5:;
return UINT64_C(0x1803de053);
}
uint64_t b_1803de042(CPU*s){
/* 1803de042: movsxd rbx, esi */
L_1803de042_0:;
L_1803de042_1:;
wr(s->r,24,8,(U)sx(rd(s->r,48,4),4));
L_1803de042_2:;
/* 1803de045: lea rcx, [rdi + rbx*8 + 0x378] */
L_1803de045_0:;
L_1803de045_1:;
wr(s->u,0,8,(((U)UINT64_C(0x378))+rd(s->r,56,8)));
L_1803de045_2:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803de045_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803de045_4:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803de045_5:;
/* 1803de04d: call qword ptr [rip + 0x64010d] */
L_1803de04d_0:;
L_1803de04d_1:;
wr(s->u,24,8,mr(UINT64_C(0x180a1e160),8));
L_1803de04d_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de04d_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de053)));
L_1803de04d_4:;
return (uint64_t)rd(s->u,24,8);
L_1803de04d_5:;
return UINT64_C(0x1803de053);
}
uint64_t b_1803de053(CPU*s){
/* 1803de053: lea rcx, [rdi + rbx*8 + 0x688] */
L_1803de053_0:;
L_1803de053_1:;
wr(s->u,0,8,(((U)UINT64_C(0x688))+rd(s->r,56,8)));
L_1803de053_2:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803de053_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803de053_4:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803de053_5:;
/* 1803de05b: call qword ptr [rip + 0x6400ff] */
L_1803de05b_0:;
L_1803de05b_1:;
wr(s->u,24,8,mr(UINT64_C(0x180a1e160),8));
L_1803de05b_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de05b_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de061)));
L_1803de05b_4:;
return (uint64_t)rd(s->u,24,8);
L_1803de05b_5:;
return UINT64_C(0x1803de061);
}
uint64_t b_1803de061(CPU*s){
/* 1803de061: movsxd r11, dword ptr [rdi + 4] */
L_1803de061_0:;
L_1803de061_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0x4))));
L_1803de061_2:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803de061_3:;
wr(s->r,152,8,(U)sx(rd(s->u,29,4),4));
L_1803de061_4:;
/* 1803de065: mov rax, qword ptr [rbp] */
L_1803de065_0:;
L_1803de065_1:;
wr(s->u,33,8,mr((uint64_t)rd(s->r,40,8),8));
L_1803de065_2:;
wr(s->r,0,8,rd(s->u,33,8));
L_1803de065_3:;
/* 1803de069: shl r11, 2 */
L_1803de069_0:;
L_1803de069_1:;
wr(s->u,99,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803de069_2:;
wr(s->u,103,8,rd(s->r,152,8));
L_1803de069_3:;
wr(s->r,152,8,((rd(s->u,99,4)>=64)?0:(rd(s->r,152,8)<<rd(s->u,99,4))));
L_1803de069_4:;
wr(s->u,74,1,(rd(s->u,99,4)==((U)UINT64_C(0x0))));
L_1803de069_5:;
wr(s->u,75,4,(rd(s->u,99,4)-((U)UINT64_C(0x1))));
L_1803de069_6:;
wr(s->u,79,8,((rd(s->u,75,4)>=64)?0:(rd(s->u,103,8)<<rd(s->u,75,4))));
L_1803de069_7:;
wr(s->u,87,1,(sx(rd(s->u,79,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de069_8:;
wr(s->u,0,1,rd(s->u,74,1));
L_1803de069_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803de069_10:;
wr(s->u,2,1,(!rd(s->u,74,1)));
L_1803de069_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803de069_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,87,1)));
L_1803de069_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803de069_14:;
wr(s->u,88,1,(rd(s->u,99,4)==((U)UINT64_C(0x1))));
L_1803de069_15:;
wr(s->u,89,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de069_16:;
wr(s->u,90,1,(rd(s->r,512,1)^rd(s->u,89,1)));
L_1803de069_17:;
wr(s->u,0,1,rd(s->u,88,1));
L_1803de069_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,90,1)));
L_1803de069_19:;
wr(s->u,2,1,(!rd(s->u,88,1)));
L_1803de069_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803de069_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803de069_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803de069_23:;
wr(s->u,51,1,(rd(s->u,99,4)!=((U)UINT64_C(0x0))));
L_1803de069_24:;
wr(s->u,52,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de069_25:;
wr(s->u,53,1,(!rd(s->u,51,1)));
L_1803de069_26:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,519,1)));
L_1803de069_27:;
wr(s->u,55,1,(rd(s->u,51,1)&rd(s->u,52,1)));
L_1803de069_28:;
wr(s->r,519,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1803de069_29:;
wr(s->u,56,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803de069_30:;
wr(s->u,57,1,(!rd(s->u,51,1)));
L_1803de069_31:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,518,1)));
L_1803de069_32:;
wr(s->u,59,1,(rd(s->u,51,1)&rd(s->u,56,1)));
L_1803de069_33:;
wr(s->r,518,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803de069_34:;
wr(s->u,60,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803de069_35:;
wr(s->u,68,1,pop(rd(s->u,60,8),8));
L_1803de069_36:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803de069_37:;
wr(s->u,70,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803de069_38:;
wr(s->u,71,1,(!rd(s->u,51,1)));
L_1803de069_39:;
wr(s->u,72,1,(rd(s->u,71,1)&rd(s->r,514,1)));
L_1803de069_40:;
wr(s->u,73,1,(rd(s->u,51,1)&rd(s->u,70,1)));
L_1803de069_41:;
wr(s->r,514,1,(rd(s->u,72,1)|rd(s->u,73,1)));
L_1803de069_42:;
/* 1803de06d: lea rcx, [rsp + 0x30] */
L_1803de06d_0:;
L_1803de06d_1:;
wr(s->u,13,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803de06d_2:;
wr(s->r,8,8,rd(s->u,13,8));
L_1803de06d_3:;
/* 1803de072: sub rax, r11 */
L_1803de072_0:;
L_1803de072_1:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->r,152,8)));
L_1803de072_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->r,152,8),8,1));
L_1803de072_3:;
wr(s->r,0,8,(rd(s->r,0,8)-rd(s->r,152,8)));
L_1803de072_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de072_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803de072_6:;
wr(s->u,41,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803de072_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803de072_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803de072_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803de072_10:;
/* 1803de075: mov qword ptr [rsp + 0x30], rax */
L_1803de075_0:;
L_1803de075_1:;
wr(s->u,13,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803de075_2:;
wr(s->u,21,8,rd(s->r,0,8));
L_1803de075_3:;
mw((uint64_t)rd(s->u,13,8),8,rd(s->u,21,8));
L_1803de075_4:;
/* 1803de07a: call qword ptr [rip + 0x6400e0] */
L_1803de07a_0:;
L_1803de07a_1:;
wr(s->u,91,8,mr(UINT64_C(0x180a1e160),8));
L_1803de07a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de07a_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de080)));
L_1803de07a_4:;
return (uint64_t)rd(s->u,91,8);
L_1803de07a_5:;
return UINT64_C(0x1803de080);
}
uint64_t b_1803de080(CPU*s){
/* 1803de080: lea rcx, [rdi + rbx*8 + 0x838] */
L_1803de080_0:;
L_1803de080_1:;
wr(s->u,0,8,(((U)UINT64_C(0x838))+rd(s->r,56,8)));
L_1803de080_2:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803de080_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803de080_4:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803de080_5:;
/* 1803de088: call qword ptr [rip + 0x6400d2] */
L_1803de088_0:;
L_1803de088_1:;
wr(s->u,24,8,mr(UINT64_C(0x180a1e160),8));
L_1803de088_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de088_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de08e)));
L_1803de088_4:;
return (uint64_t)rd(s->u,24,8);
L_1803de088_5:;
return UINT64_C(0x1803de08e);
}
uint64_t b_1803de08e(CPU*s){
/* 1803de08e: lea rcx, [rdi + rbx*8 + 0x60] */
L_1803de08e_0:;
L_1803de08e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,56,8)));
L_1803de08e_2:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803de08e_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803de08e_4:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803de08e_5:;
/* 1803de093: call qword ptr [rip + 0x6400c7] */
L_1803de093_0:;
L_1803de093_1:;
wr(s->u,24,8,mr(UINT64_C(0x180a1e160),8));
L_1803de093_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de093_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de099)));
L_1803de093_4:;
return (uint64_t)rd(s->u,24,8);
L_1803de093_5:;
return UINT64_C(0x1803de099);
}
uint64_t b_1803de099(CPU*s){
/* 1803de099: lea rcx, [rdi + rbx*8 + 0x1e0] */
L_1803de099_0:;
L_1803de099_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1e0))+rd(s->r,56,8)));
L_1803de099_2:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803de099_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803de099_4:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803de099_5:;
/* 1803de0a1: call qword ptr [rip + 0x6400b9] */
L_1803de0a1_0:;
L_1803de0a1_1:;
wr(s->u,24,8,mr(UINT64_C(0x180a1e160),8));
L_1803de0a1_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de0a1_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de0a7)));
L_1803de0a1_4:;
return (uint64_t)rd(s->u,24,8);
L_1803de0a1_5:;
return UINT64_C(0x1803de0a7);
}
uint64_t b_1803de0a7(CPU*s){
/* 1803de0a7: inc esi */
L_1803de0a7_0:;
L_1803de0a7_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),((U)UINT64_C(0x1)),4,0));
L_1803de0a7_2:;
wr(s->r,48,4,(rd(s->r,48,4)+((U)UINT64_C(0x1))));
L_1803de0a7_3:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803de0a7_4:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de0a7_5:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803de0a7_6:;
wr(s->u,13,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803de0a7_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803de0a7_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803de0a7_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803de0a7_10:;
/* 1803de0a9: add rbp, 8 */
L_1803de0a9_0:;
L_1803de0a9_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803de0a9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x8)),8,0));
L_1803de0a9_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803de0a9_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de0a9_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803de0a9_6:;
wr(s->u,13,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803de0a9_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803de0a9_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803de0a9_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803de0a9_10:;
/* 1803de0ad: cmp esi, dword ptr [rdi + 0x34] */
L_1803de0ad_0:;
L_1803de0ad_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x34))));
L_1803de0ad_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803de0ad_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803de0ad_4:;
wr(s->r,512,1,(rd(s->r,48,4)<rd(s->u,23,4)));
L_1803de0ad_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),rd(s->u,23,4),4,1));
L_1803de0ad_6:;
wr(s->u,27,4,(rd(s->r,48,4)-rd(s->u,23,4)));
L_1803de0ad_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de0ad_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803de0ad_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803de0ad_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803de0ad_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803de0ad_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803de0ad_13:;
/* 1803de0b0: jl 0x1803de042 */
L_1803de0b0_0:;
L_1803de0b0_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803de0b0_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803de042);}
L_1803de0b0_3:;
return UINT64_C(0x1803de0b2);
}
uint64_t b_1803de0b2(CPU*s){
/* 1803de0b2: mov rbp, qword ptr [rsp + 0x40] */
L_1803de0b2_0:;
L_1803de0b2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803de0b2_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803de0b2_3:;
wr(s->r,40,8,rd(s->u,16,8));
L_1803de0b2_4:;
/* 1803de0b7: mov rbx, qword ptr [rsp + 0x38] */
L_1803de0b7_0:;
L_1803de0b7_1:;
wr(s->u,8,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803de0b7_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803de0b7_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803de0b7_4:;
/* 1803de0bc: lea rcx, [rdi + 0x370] */
L_1803de0bc_0:;
L_1803de0bc_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x370))));
L_1803de0bc_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803de0bc_3:;
/* 1803de0c3: call qword ptr [rip + 0x640097] */
L_1803de0c3_0:;
L_1803de0c3_1:;
wr(s->u,24,8,mr(UINT64_C(0x180a1e160),8));
L_1803de0c3_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de0c3_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de0c9)));
L_1803de0c3_4:;
return (uint64_t)rd(s->u,24,8);
L_1803de0c3_5:;
return UINT64_C(0x1803de0c9);
}
uint64_t b_1803de0bc(CPU*s){
/* 1803de0bc: lea rcx, [rdi + 0x370] */
L_1803de0bc_0:;
L_1803de0bc_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x370))));
L_1803de0bc_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803de0bc_3:;
/* 1803de0c3: call qword ptr [rip + 0x640097] */
L_1803de0c3_0:;
L_1803de0c3_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803de0c3_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de0c3_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de0c9)));
L_1803de0c3_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de0c3_5:;
return UINT64_C(0x1803de0c9);
}
uint64_t b_1803de0c9(CPU*s){
/* 1803de0c9: mov rcx, qword ptr [rdi + 0x48] */
L_1803de0c9_0:;
L_1803de0c9_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x48))));
L_1803de0c9_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de0c9_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803de0c9_4:;
/* 1803de0cd: call 0x18000dffe */
L_1803de0cd_0:;
L_1803de0cd_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de0cd_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de0d2)));
L_1803de0cd_3:;
return (uint64_t)UINT64_C(0x18000dffe);
L_1803de0cd_4:;
return UINT64_C(0x1803de0d2);
}
uint64_t b_1803de0d2(CPU*s){
/* 1803de0d2: lea rcx, [rdi + 0x9c0] */
L_1803de0d2_0:;
L_1803de0d2_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9c0))));
L_1803de0d2_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803de0d2_3:;
/* 1803de0d9: call qword ptr [rip + 0x640081] */
L_1803de0d9_0:;
L_1803de0d9_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803de0d9_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de0d9_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de0df)));
L_1803de0d9_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de0d9_5:;
return UINT64_C(0x1803de0df);
}
uint64_t b_1803de0df(CPU*s){
/* 1803de0df: mov rcx, qword ptr [rdi + 0x40] */
L_1803de0df_0:;
L_1803de0df_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x40))));
L_1803de0df_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de0df_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803de0df_4:;
/* 1803de0e3: call 0x18000dffe */
L_1803de0e3_0:;
L_1803de0e3_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de0e3_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de0e8)));
L_1803de0e3_3:;
return (uint64_t)UINT64_C(0x18000dffe);
L_1803de0e3_4:;
return UINT64_C(0x1803de0e8);
}
uint64_t b_1803de0e8(CPU*s){
/* 1803de0e8: lea rcx, [rdi + 0x808] */
L_1803de0e8_0:;
L_1803de0e8_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x808))));
L_1803de0e8_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803de0e8_3:;
/* 1803de0ef: call qword ptr [rip + 0x64006b] */
L_1803de0ef_0:;
L_1803de0ef_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803de0ef_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de0ef_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de0f5)));
L_1803de0ef_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de0ef_5:;
return UINT64_C(0x1803de0f5);
}
uint64_t b_1803de0f5(CPU*s){
/* 1803de0f5: lea rcx, [rdi + 0x9b8] */
L_1803de0f5_0:;
L_1803de0f5_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9b8))));
L_1803de0f5_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803de0f5_3:;
/* 1803de0fc: call qword ptr [rip + 0x64005e] */
L_1803de0fc_0:;
L_1803de0fc_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803de0fc_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de0fc_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de102)));
L_1803de0fc_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de0fc_5:;
return UINT64_C(0x1803de102);
}
uint64_t b_1803de102(CPU*s){
/* 1803de102: lea rcx, [rdi + 0xa08] */
L_1803de102_0:;
L_1803de102_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xa08))));
L_1803de102_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803de102_3:;
/* 1803de109: call qword ptr [rip + 0x640051] */
L_1803de109_0:;
L_1803de109_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803de109_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de109_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de10f)));
L_1803de109_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de109_5:;
return UINT64_C(0x1803de10f);
}
uint64_t b_1803de10f(CPU*s){
/* 1803de10f: mov rcx, qword ptr [rdi + 0x28] */
L_1803de10f_0:;
L_1803de10f_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x28))));
L_1803de10f_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de10f_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803de10f_4:;
/* 1803de113: call 0x18000dffe */
L_1803de113_0:;
L_1803de113_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de113_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de118)));
L_1803de113_3:;
return (uint64_t)UINT64_C(0x18000dffe);
L_1803de113_4:;
return UINT64_C(0x1803de118);
}
uint64_t b_1803de118(CPU*s){
/* 1803de118: mov rcx, rdi */
L_1803de118_0:;
L_1803de118_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803de118_2:;
/* 1803de11b: call 0x18000dffe */
L_1803de11b_0:;
L_1803de11b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de11b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de120)));
L_1803de11b_3:;
return (uint64_t)UINT64_C(0x18000dffe);
L_1803de11b_4:;
return UINT64_C(0x1803de120);
}
uint64_t b_1803de120(CPU*s){
/* 1803de120: mov rsi, qword ptr [rsp + 0x48] */
L_1803de120_0:;
L_1803de120_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803de120_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de120_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803de120_4:;
/* 1803de125: xor eax, eax */
L_1803de125_0:;
L_1803de125_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de125_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de125_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803de125_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803de125_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de125_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803de125_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803de125_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803de125_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de125_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de125_11:;
/* 1803de127: add rsp, 0x20 */
L_1803de127_0:;
L_1803de127_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803de127_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803de127_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803de127_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de127_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803de127_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803de127_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de127_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de127_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de127_10:;
/* 1803de12b: pop rdi */
L_1803de12b_0:;
L_1803de12b_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803de12b_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803de12b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803de12b_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803de12b_5:;
/* 1803de12c: ret  */
L_1803de12c_0:;
L_1803de12c_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803de12c_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803de12c_3:;
return (uint64_t)rd(s->r,648,8);
L_1803de12c_4:;
return UINT64_C(0x1803de12d);
}
uint64_t b_1803de130(CPU*s){
/* 1803de130: mov qword ptr [rsp + 0x18], rbx */
L_1803de130_0:;
L_1803de130_1:;
wr(s->u,0,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803de130_2:;
wr(s->u,12,8,rd(s->r,24,8));
L_1803de130_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803de130_4:;
/* 1803de135: mov dword ptr [rsp + 0x20], r9d */
L_1803de135_0:;
L_1803de135_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803de135_2:;
wr(s->u,8,4,rd(s->r,136,4));
L_1803de135_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803de135_4:;
/* 1803de13a: mov dword ptr [rsp + 0x10], edx */
L_1803de13a_0:;
L_1803de13a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803de13a_2:;
wr(s->u,8,4,rd(s->r,16,4));
L_1803de13a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803de13a_4:;
/* 1803de13e: push rbp */
L_1803de13e_0:;
L_1803de13e_1:;
wr(s->u,20,8,rd(s->r,40,8));
L_1803de13e_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de13e_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,20,8));
L_1803de13e_4:;
/* 1803de13f: push rsi */
L_1803de13f_0:;
L_1803de13f_1:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803de13f_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de13f_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,20,8));
L_1803de13f_4:;
/* 1803de140: push rdi */
L_1803de140_0:;
L_1803de140_1:;
wr(s->u,20,8,rd(s->r,56,8));
L_1803de140_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de140_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,20,8));
L_1803de140_4:;
/* 1803de141: push r12 */
L_1803de141_0:;
L_1803de141_1:;
wr(s->u,20,8,rd(s->r,160,8));
L_1803de141_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de141_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,20,8));
L_1803de141_4:;
/* 1803de143: push r13 */
L_1803de143_0:;
L_1803de143_1:;
wr(s->u,20,8,rd(s->r,168,8));
L_1803de143_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de143_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,20,8));
L_1803de143_4:;
/* 1803de145: push r14 */
L_1803de145_0:;
L_1803de145_1:;
wr(s->u,20,8,rd(s->r,176,8));
L_1803de145_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de145_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,20,8));
L_1803de145_4:;
/* 1803de147: push r15 */
L_1803de147_0:;
L_1803de147_1:;
wr(s->u,20,8,rd(s->r,184,8));
L_1803de147_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de147_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,20,8));
L_1803de147_4:;
/* 1803de149: sub rsp, 0x30 */
L_1803de149_0:;
L_1803de149_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803de149_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803de149_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803de149_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de149_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803de149_6:;
wr(s->u,28,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803de149_7:;
wr(s->u,36,1,pop(rd(s->u,28,8),8));
L_1803de149_8:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803de149_9:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803de149_10:;
/* 1803de14d: mov r14d, edx */
L_1803de14d_0:;
L_1803de14d_1:;
wr(s->r,176,4,rd(s->r,16,4));
L_1803de14d_2:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803de14d_3:;
/* 1803de150: mov r15d, r9d */
L_1803de150_0:;
L_1803de150_1:;
wr(s->r,184,4,rd(s->r,136,4));
L_1803de150_2:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803de150_3:;
/* 1803de153: mov r13d, r8d */
L_1803de153_0:;
L_1803de153_1:;
wr(s->r,168,4,rd(s->r,128,4));
L_1803de153_2:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803de153_3:;
/* 1803de156: mov rdi, rcx */
L_1803de156_0:;
L_1803de156_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803de156_2:;
/* 1803de159: movd xmm0, r14d */
L_1803de159_0:;
L_1803de159_1:;
wr(s->r,4608,16,rd(s->r,176,4));
L_1803de159_2:;
/* 1803de15e: cvtdq2ps xmm0, xmm0 */
L_1803de15e_0:;
L_1803de15e_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803de15e_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803de15e_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803de15e_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803de15e_5:;
/* 1803de161: addss xmm0, dword ptr [rip + 0x26eadb] */
L_1803de161_0:;
L_1803de161_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(mr(UINT64_C(0x18064cc44),4),4),4));
L_1803de161_2:;
/* 1803de169: call 0x180609c04 */
L_1803de169_0:;
L_1803de169_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de169_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de16e)));
L_1803de169_3:;
return (uint64_t)UINT64_C(0x180609c04);
L_1803de169_4:;
return UINT64_C(0x1803de16e);
}
uint64_t b_1803de16e(CPU*s){
/* 1803de16e: movaps xmm1, xmm0 */
L_1803de16e_0:;
L_1803de16e_1:;
wr(s->r,4672,4,rd(s->r,4608,4));
L_1803de16e_2:;
wr(s->r,4676,4,rd(s->r,4612,4));
L_1803de16e_3:;
wr(s->r,4680,4,rd(s->r,4616,4));
L_1803de16e_4:;
wr(s->r,4684,4,rd(s->r,4620,4));
L_1803de16e_5:;
/* 1803de171: mulss xmm1, dword ptr [rip + 0x42e3a7] */
L_1803de171_0:;
L_1803de171_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(mr(UINT64_C(0x18080c520),4),4),4));
L_1803de171_2:;
/* 1803de179: cvttss2si ecx, xmm1 */
L_1803de179_0:;
L_1803de179_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803de179_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de179_3:;
/* 1803de17d: cmp ecx, 0x80000000 */
L_1803de17d_0:;
L_1803de17d_1:;
wr(s->u,6,4,rd(s->r,8,4));
L_1803de17d_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x80000000))));
L_1803de17d_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x80000000)),4,1));
L_1803de17d_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x80000000))));
L_1803de17d_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de17d_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803de17d_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803de17d_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803de17d_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803de17d_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803de17d_11:;
/* 1803de183: je 0x1803de1a5 */
L_1803de183_0:;
L_1803de183_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de1a5);}
L_1803de183_2:;
return UINT64_C(0x1803de185);
}
uint64_t b_1803de185(CPU*s){
/* 1803de185: pxor xmm0, xmm0 */
L_1803de185_0:;
L_1803de185_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803de185_2:;
/* 1803de189: cvtsi2ss xmm0, ecx */
L_1803de189_0:;
L_1803de189_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803de189_2:;
/* 1803de18d: ucomiss xmm0, xmm1 */
L_1803de18d_0:;
L_1803de18d_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803de18d_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803de18d_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803de18d_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803de18d_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803de18d_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803de18d_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803de18d_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de18d_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803de18d_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803de18d_11:;
/* 1803de190: je 0x1803de1a5 */
L_1803de190_0:;
L_1803de190_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de1a5);}
L_1803de190_2:;
return UINT64_C(0x1803de192);
}
uint64_t b_1803de192(CPU*s){
/* 1803de192: unpcklps xmm1, xmm1 */
L_1803de192_0:;
L_1803de192_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803de192_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803de192_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803de192_4:;
/* 1803de195: movmskps eax, xmm1 */
L_1803de195_0:;
L_1803de195_1:;
wr(s->r,0,4,(((rd(s->r,4672,16)>>31)&1)<<0)|(((rd(s->r,4672,16)>>63)&1)<<1)|(((rd(s->r,4672,16)>>95)&1)<<2)|(((rd(s->r,4672,16)>>127)&1)<<3));
L_1803de195_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803de195_3:;
/* 1803de198: pxor xmm1, xmm1 */
L_1803de198_0:;
L_1803de198_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803de198_2:;
/* 1803de19c: and eax, 1 */
L_1803de19c_0:;
L_1803de19c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de19c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de19c_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803de19c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803de19c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de19c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803de19c_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803de19c_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803de19c_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803de19c_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803de19c_11:;
/* 1803de19f: sub ecx, eax */
L_1803de19f_0:;
L_1803de19f_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,0,4)));
L_1803de19f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,1));
L_1803de19f_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,0,4)));
L_1803de19f_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de19f_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de19f_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803de19f_7:;
wr(s->u,0,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803de19f_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803de19f_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803de19f_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803de19f_11:;
/* 1803de1a1: cvtsi2ss xmm1, ecx */
L_1803de1a1_0:;
L_1803de1a1_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803de1a1_2:;
/* 1803de1a5: movss xmm0, dword ptr [rip + 0x277043] */
L_1803de1a5_0:;
L_1803de1a5_1:;
wr(s->r,4608,4,mr(UINT64_C(0x1806551f0),4));
L_1803de1a5_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803de1a5_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803de1a5_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803de1a5_5:;
/* 1803de1ad: call 0x180609a00 */
L_1803de1ad_0:;
L_1803de1ad_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de1ad_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de1b2)));
L_1803de1ad_3:;
return (uint64_t)UINT64_C(0x180609a00);
L_1803de1ad_4:;
return UINT64_C(0x1803de1b2);
}
uint64_t b_1803de1a5(CPU*s){
/* 1803de1a5: movss xmm0, dword ptr [rip + 0x277043] */
L_1803de1a5_0:;
L_1803de1a5_1:;
wr(s->r,4608,4,mr(UINT64_C(0x1806551f0),4));
L_1803de1a5_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803de1a5_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803de1a5_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803de1a5_5:;
/* 1803de1ad: call 0x180609a00 */
L_1803de1ad_0:;
L_1803de1ad_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de1ad_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de1b2)));
L_1803de1ad_3:;
return (uint64_t)UINT64_C(0x180609a00);
L_1803de1ad_4:;
return UINT64_C(0x1803de1b2);
}
uint64_t b_1803de1b2(CPU*s){
/* 1803de1b2: mov ebx, dword ptr [rsp + 0x98] */
L_1803de1b2_0:;
L_1803de1b2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x98))+rd(s->r,32,8)));
L_1803de1b2_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803de1b2_3:;
wr(s->r,24,4,rd(s->u,20,4));
L_1803de1b2_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803de1b2_5:;
/* 1803de1b9: xor esi, esi */
L_1803de1b9_0:;
L_1803de1b9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de1b9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de1b9_3:;
wr(s->r,48,4,(rd(s->r,48,4)^rd(s->r,48,4)));
L_1803de1b9_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803de1b9_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de1b9_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803de1b9_7:;
wr(s->u,24,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803de1b9_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803de1b9_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803de1b9_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803de1b9_11:;
/* 1803de1bb: mov dword ptr [rdi], esi */
L_1803de1bb_0:;
L_1803de1bb_1:;
wr(s->u,16,4,rd(s->r,48,4));
L_1803de1bb_2:;
mw((uint64_t)rd(s->r,56,8),4,rd(s->u,16,4));
L_1803de1bb_3:;
/* 1803de1bd: cvttss2si r12d, xmm0 */
L_1803de1bd_0:;
L_1803de1bd_1:;
wr(s->r,160,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803de1bd_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803de1bd_3:;
/* 1803de1c2: imul r12d, ebx */
L_1803de1c2_0:;
L_1803de1c2_1:;
wr(s->u,38,8,(U)sx(rd(s->r,160,4),4));
L_1803de1c2_2:;
wr(s->u,46,8,(U)sx(rd(s->r,24,4),4));
L_1803de1c2_3:;
wr(s->u,54,8,(rd(s->u,38,8)*rd(s->u,46,8)));
L_1803de1c2_4:;
wr(s->r,160,4,(rd(s->u,54,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de1c2_5:;
wr(s->u,62,4,(rd(s->u,54,8) >> (((U)UINT64_C(0x4))*8)));
L_1803de1c2_6:;
wr(s->u,30,8,(U)sx(rd(s->r,160,4),4));
L_1803de1c2_7:;
wr(s->r,512,1,(rd(s->u,30,8)!=rd(s->u,54,8)));
L_1803de1c2_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803de1c2_9:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803de1c2_10:;
/* 1803de1c6: mov ebp, r12d */
L_1803de1c6_0:;
L_1803de1c6_1:;
wr(s->r,40,4,rd(s->r,160,4));
L_1803de1c6_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803de1c6_3:;
/* 1803de1c9: mov dword ptr [rdi + 0x18], r12d */
L_1803de1c9_0:;
L_1803de1c9_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x18))));
L_1803de1c9_2:;
wr(s->u,16,4,rd(s->r,160,4));
L_1803de1c9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803de1c9_4:;
/* 1803de1cd: sar ebp, 1 */
L_1803de1cd_0:;
L_1803de1cd_1:;
wr(s->u,66,4,(rd(s->r,40,4)&((U)UINT64_C(0x1))));
L_1803de1cd_2:;
wr(s->r,512,1,(rd(s->u,66,4)!=((U)UINT64_C(0x0))));
L_1803de1cd_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de1cd_4:;
wr(s->r,40,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,40,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,40,4),4)>>((U)UINT64_C(0x1)))));
L_1803de1cd_5:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803de1cd_6:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de1cd_7:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803de1cd_8:;
wr(s->u,24,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803de1cd_9:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803de1cd_10:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803de1cd_11:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803de1cd_12:;
/* 1803de1cf: mov dword ptr [rdi + 0x14], ebp */
L_1803de1cf_0:;
L_1803de1cf_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x14))));
L_1803de1cf_2:;
wr(s->u,16,4,rd(s->r,40,4));
L_1803de1cf_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803de1cf_4:;
/* 1803de1d2: call 0x1803e1120 */
L_1803de1d2_0:;
L_1803de1d2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de1d2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de1d7)));
L_1803de1d2_3:;
return (uint64_t)UINT64_C(0x1803e1120);
L_1803de1d2_4:;
return UINT64_C(0x1803de1d7);
}
uint64_t b_1803de1d7(CPU*s){
/* 1803de1d7: mov eax, dword ptr [rsp + 0x90] */
L_1803de1d7_0:;
L_1803de1d7_1:;
wr(s->u,24,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803de1d7_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803de1d7_3:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803de1d7_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803de1d7_5:;
/* 1803de1de: movss xmm0, dword ptr [rsp + 0xa0] */
L_1803de1de_0:;
L_1803de1de_1:;
wr(s->u,24,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_1803de1de_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803de1de_3:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803de1de_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803de1de_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803de1de_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803de1de_7:;
/* 1803de1e7: movss dword ptr [rdi + 0x9c8], xmm0 */
L_1803de1e7_0:;
L_1803de1e7_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x9c8))));
L_1803de1e7_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803de1e7_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803de1e7_4:;
/* 1803de1ef: mov dword ptr [rdi + 0x10], eax */
L_1803de1ef_0:;
L_1803de1ef_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803de1ef_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803de1ef_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803de1ef_4:;
/* 1803de1f2: movsxd rax, dword ptr [rsp + 0xa8] */
L_1803de1f2_0:;
L_1803de1f2_1:;
wr(s->u,24,8,(((U)UINT64_C(0xa8))+rd(s->r,32,8)));
L_1803de1f2_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803de1f2_3:;
wr(s->r,0,8,(U)sx(rd(s->u,44,4),4));
L_1803de1f2_4:;
/* 1803de1fa: mov dword ptr [rdi + 0xc], r15d */
L_1803de1fa_0:;
L_1803de1fa_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xc))));
L_1803de1fa_2:;
wr(s->u,32,4,rd(s->r,184,4));
L_1803de1fa_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803de1fa_4:;
/* 1803de1fe: mov dword ptr [rdi + 0x1c], esi */
L_1803de1fe_0:;
L_1803de1fe_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x1c))));
L_1803de1fe_2:;
wr(s->u,32,4,rd(s->r,48,4));
L_1803de1fe_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803de1fe_4:;
/* 1803de201: mov dword ptr [rdi + 0x8a18], esi */
L_1803de201_0:;
L_1803de201_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x8a18))));
L_1803de201_2:;
wr(s->u,32,4,rd(s->r,48,4));
L_1803de201_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803de201_4:;
/* 1803de207: mov dword ptr [rdi + 4], r14d */
L_1803de207_0:;
L_1803de207_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x4))));
L_1803de207_2:;
wr(s->u,32,4,rd(s->r,176,4));
L_1803de207_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803de207_4:;
/* 1803de20b: mov dword ptr [rdi + 8], r13d */
L_1803de20b_0:;
L_1803de20b_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803de20b_2:;
wr(s->u,32,4,rd(s->r,168,4));
L_1803de20b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803de20b_4:;
/* 1803de20f: mov dword ptr [rdi + 0x30], ebx */
L_1803de20f_0:;
L_1803de20f_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x30))));
L_1803de20f_2:;
wr(s->u,32,4,rd(s->r,24,4));
L_1803de20f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803de20f_4:;
/* 1803de212: mov dword ptr [rdi + 0x34], eax */
L_1803de212_0:;
L_1803de212_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x34))));
L_1803de212_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803de212_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803de212_4:;
/* 1803de215: mov r15, rsi */
L_1803de215_0:;
L_1803de215_1:;
wr(s->r,184,8,rd(s->r,48,8));
L_1803de215_2:;
/* 1803de218: mov qword ptr [rsp + 0x70], rax */
L_1803de218_0:;
L_1803de218_1:;
wr(s->u,16,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803de218_2:;
wr(s->u,36,8,rd(s->r,0,8));
L_1803de218_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,36,8));
L_1803de218_4:;
/* 1803de21d: test rax, rax */
L_1803de21d_0:;
L_1803de21d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de21d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de21d_3:;
wr(s->u,60,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de21d_4:;
wr(s->r,519,1,(sx(rd(s->u,60,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de21d_5:;
wr(s->r,518,1,(rd(s->u,60,8)==((U)UINT64_C(0x0))));
L_1803de21d_6:;
wr(s->u,50,8,(rd(s->u,60,8)&((U)UINT64_C(0xff))));
L_1803de21d_7:;
wr(s->u,58,1,pop(rd(s->u,50,8),8));
L_1803de21d_8:;
wr(s->u,59,1,(rd(s->u,58,1)&((U)UINT64_C(0x1))));
L_1803de21d_9:;
wr(s->r,514,1,(rd(s->u,59,1)==((U)UINT64_C(0x0))));
L_1803de21d_10:;
/* 1803de220: jle 0x1803de32e */
L_1803de220_0:;
L_1803de220_1:;
wr(s->u,48,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803de220_2:;
wr(s->u,49,1,((rd(s->r,518,1)!=0)||(rd(s->u,48,1)!=0)));
L_1803de220_3:;
if(rd(s->u,49,1)){return UINT64_C(0x1803de32e);}
L_1803de220_4:;
return UINT64_C(0x1803de226);
}
uint64_t b_1803de226(CPU*s){
/* 1803de226: lea r13d, [r14 + r14] */
L_1803de226_0:;
L_1803de226_1:;
wr(s->u,8,8,(rd(s->r,176,8)*((U)UINT64_C(0x1))));
L_1803de226_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803de226_3:;
wr(s->r,168,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de226_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803de226_5:;
/* 1803de22a: lea rbx, [rdi + 0x4f8] */
L_1803de22a_0:;
L_1803de22a_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x4f8))));
L_1803de22a_2:;
wr(s->r,24,8,rd(s->u,0,8));
L_1803de22a_3:;
/* 1803de231: mov ecx, r13d */
L_1803de231_0:;
L_1803de231_1:;
wr(s->r,8,4,rd(s->r,168,4));
L_1803de231_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de231_3:;
/* 1803de234: call qword ptr [rip + 0x63ffd6] */
L_1803de234_0:;
L_1803de234_1:;
wr(s->u,24,8,mr(UINT64_C(0x180a1e210),8));
L_1803de234_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de234_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de23a)));
L_1803de234_4:;
return (uint64_t)rd(s->u,24,8);
L_1803de234_5:;
return UINT64_C(0x1803de23a);
}
uint64_t b_1803de231(CPU*s){
/* 1803de231: mov ecx, r13d */
L_1803de231_0:;
L_1803de231_1:;
wr(s->r,8,4,rd(s->r,168,4));
L_1803de231_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de231_3:;
/* 1803de234: call qword ptr [rip + 0x63ffd6] */
L_1803de234_0:;
L_1803de234_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e210),8));
L_1803de234_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de234_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de23a)));
L_1803de234_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de234_5:;
return UINT64_C(0x1803de23a);
}
uint64_t b_1803de23a(CPU*s){
/* 1803de23a: mov qword ptr [rbx - 0x180], rax */
L_1803de23a_0:;
L_1803de23a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffe80))));
L_1803de23a_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de23a_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de23a_4:;
/* 1803de241: test rax, rax */
L_1803de241_0:;
L_1803de241_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de241_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de241_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de241_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de241_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de241_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de241_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de241_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de241_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de241_10:;
/* 1803de244: je 0x1803de79e */
L_1803de244_0:;
L_1803de244_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de244_2:;
return UINT64_C(0x1803de24a);
}
uint64_t b_1803de24a(CPU*s){
/* 1803de24a: mov edx, r13d */
L_1803de24a_0:;
L_1803de24a_1:;
wr(s->r,16,4,rd(s->r,168,4));
L_1803de24a_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de24a_3:;
/* 1803de24d: mov rcx, rax */
L_1803de24d_0:;
L_1803de24d_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de24d_2:;
/* 1803de250: call qword ptr [rip + 0x63ff52] */
L_1803de250_0:;
L_1803de250_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de250_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de250_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de256)));
L_1803de250_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de250_5:;
return UINT64_C(0x1803de256);
}
uint64_t b_1803de256(CPU*s){
/* 1803de256: lea ecx, [r12 + 1] */
L_1803de256_0:;
L_1803de256_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1))+rd(s->r,160,8)));
L_1803de256_2:;
wr(s->r,8,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de256_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de256_4:;
/* 1803de25b: call qword ptr [rip + 0x63ffaf] */
L_1803de25b_0:;
L_1803de25b_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e210),8));
L_1803de25b_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de25b_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de261)));
L_1803de25b_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de25b_5:;
return UINT64_C(0x1803de261);
}
uint64_t b_1803de261(CPU*s){
/* 1803de261: mov qword ptr [rbx - 0x498], rax */
L_1803de261_0:;
L_1803de261_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffb68))));
L_1803de261_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de261_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de261_4:;
/* 1803de268: test rax, rax */
L_1803de268_0:;
L_1803de268_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de268_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de268_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de268_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de268_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de268_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de268_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de268_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de268_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de268_10:;
/* 1803de26b: je 0x1803de79e */
L_1803de26b_0:;
L_1803de26b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de26b_2:;
return UINT64_C(0x1803de271);
}
uint64_t b_1803de271(CPU*s){
/* 1803de271: lea edx, [r12 + 1] */
L_1803de271_0:;
L_1803de271_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1))+rd(s->r,160,8)));
L_1803de271_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de271_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de271_4:;
/* 1803de276: mov rcx, rax */
L_1803de276_0:;
L_1803de276_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de276_2:;
/* 1803de279: call qword ptr [rip + 0x63ff29] */
L_1803de279_0:;
L_1803de279_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de279_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de279_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de27f)));
L_1803de279_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de279_5:;
return UINT64_C(0x1803de27f);
}
uint64_t b_1803de27f(CPU*s){
/* 1803de27f: lea ecx, [r12 + 1] */
L_1803de27f_0:;
L_1803de27f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1))+rd(s->r,160,8)));
L_1803de27f_2:;
wr(s->r,8,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de27f_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de27f_4:;
/* 1803de284: call qword ptr [rip + 0x63ff86] */
L_1803de284_0:;
L_1803de284_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e210),8));
L_1803de284_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de284_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de28a)));
L_1803de284_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de284_5:;
return UINT64_C(0x1803de28a);
}
uint64_t b_1803de28a(CPU*s){
/* 1803de28a: mov qword ptr [rbx - 0x318], rax */
L_1803de28a_0:;
L_1803de28a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffce8))));
L_1803de28a_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de28a_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de28a_4:;
/* 1803de291: test rax, rax */
L_1803de291_0:;
L_1803de291_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de291_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de291_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de291_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de291_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de291_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de291_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de291_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de291_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de291_10:;
/* 1803de294: je 0x1803de79e */
L_1803de294_0:;
L_1803de294_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de294_2:;
return UINT64_C(0x1803de29a);
}
uint64_t b_1803de29a(CPU*s){
/* 1803de29a: mov edx, r12d */
L_1803de29a_0:;
L_1803de29a_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1803de29a_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de29a_3:;
/* 1803de29d: mov rcx, rax */
L_1803de29d_0:;
L_1803de29d_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de29d_2:;
/* 1803de2a0: call qword ptr [rip + 0x63ff02] */
L_1803de2a0_0:;
L_1803de2a0_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de2a0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de2a0_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de2a6)));
L_1803de2a0_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de2a0_5:;
return UINT64_C(0x1803de2a6);
}
uint64_t b_1803de2a6(CPU*s){
/* 1803de2a6: mov ecx, r13d */
L_1803de2a6_0:;
L_1803de2a6_1:;
wr(s->r,8,4,rd(s->r,168,4));
L_1803de2a6_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de2a6_3:;
/* 1803de2a9: call qword ptr [rip + 0x63ff61] */
L_1803de2a9_0:;
L_1803de2a9_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e210),8));
L_1803de2a9_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de2a9_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de2af)));
L_1803de2a9_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de2a9_5:;
return UINT64_C(0x1803de2af);
}
uint64_t b_1803de2af(CPU*s){
/* 1803de2af: mov qword ptr [rbx], rax */
L_1803de2af_0:;
L_1803de2af_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803de2af_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803de2af_3:;
/* 1803de2b2: test rax, rax */
L_1803de2b2_0:;
L_1803de2b2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de2b2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de2b2_3:;
wr(s->u,18,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de2b2_4:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de2b2_5:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803de2b2_6:;
wr(s->u,8,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803de2b2_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803de2b2_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803de2b2_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803de2b2_10:;
/* 1803de2b5: je 0x1803de79e */
L_1803de2b5_0:;
L_1803de2b5_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de2b5_2:;
return UINT64_C(0x1803de2bb);
}
uint64_t b_1803de2bb(CPU*s){
/* 1803de2bb: mov edx, r13d */
L_1803de2bb_0:;
L_1803de2bb_1:;
wr(s->r,16,4,rd(s->r,168,4));
L_1803de2bb_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de2bb_3:;
/* 1803de2be: mov rcx, rax */
L_1803de2be_0:;
L_1803de2be_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de2be_2:;
/* 1803de2c1: call qword ptr [rip + 0x63fee1] */
L_1803de2c1_0:;
L_1803de2c1_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de2c1_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de2c1_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de2c7)));
L_1803de2c1_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de2c1_5:;
return UINT64_C(0x1803de2c7);
}
uint64_t b_1803de2c7(CPU*s){
/* 1803de2c7: movsxd r14, dword ptr [rsp + 0x78] */
L_1803de2c7_0:;
L_1803de2c7_1:;
wr(s->u,5,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803de2c7_2:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803de2c7_3:;
wr(s->r,176,8,(U)sx(rd(s->u,21,4),4));
L_1803de2c7_4:;
/* 1803de2cc: mov ecx, ebp */
L_1803de2cc_0:;
L_1803de2cc_1:;
wr(s->r,8,4,rd(s->r,40,4));
L_1803de2cc_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de2cc_3:;
/* 1803de2ce: mov r11, r14 */
L_1803de2ce_0:;
L_1803de2ce_1:;
wr(s->r,152,8,rd(s->r,176,8));
L_1803de2ce_2:;
/* 1803de2d1: shl r11, 2 */
L_1803de2d1_0:;
L_1803de2d1_1:;
wr(s->u,83,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803de2d1_2:;
wr(s->u,87,8,rd(s->r,152,8));
L_1803de2d1_3:;
wr(s->r,152,8,((rd(s->u,83,4)>=64)?0:(rd(s->r,152,8)<<rd(s->u,83,4))));
L_1803de2d1_4:;
wr(s->u,58,1,(rd(s->u,83,4)==((U)UINT64_C(0x0))));
L_1803de2d1_5:;
wr(s->u,59,4,(rd(s->u,83,4)-((U)UINT64_C(0x1))));
L_1803de2d1_6:;
wr(s->u,63,8,((rd(s->u,59,4)>=64)?0:(rd(s->u,87,8)<<rd(s->u,59,4))));
L_1803de2d1_7:;
wr(s->u,71,1,(sx(rd(s->u,63,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de2d1_8:;
wr(s->u,0,1,rd(s->u,58,1));
L_1803de2d1_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803de2d1_10:;
wr(s->u,2,1,(!rd(s->u,58,1)));
L_1803de2d1_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803de2d1_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,71,1)));
L_1803de2d1_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803de2d1_14:;
wr(s->u,72,1,(rd(s->u,83,4)==((U)UINT64_C(0x1))));
L_1803de2d1_15:;
wr(s->u,73,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de2d1_16:;
wr(s->u,74,1,(rd(s->r,512,1)^rd(s->u,73,1)));
L_1803de2d1_17:;
wr(s->u,0,1,rd(s->u,72,1));
L_1803de2d1_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,74,1)));
L_1803de2d1_19:;
wr(s->u,2,1,(!rd(s->u,72,1)));
L_1803de2d1_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803de2d1_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803de2d1_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803de2d1_23:;
wr(s->u,35,1,(rd(s->u,83,4)!=((U)UINT64_C(0x0))));
L_1803de2d1_24:;
wr(s->u,36,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de2d1_25:;
wr(s->u,37,1,(!rd(s->u,35,1)));
L_1803de2d1_26:;
wr(s->u,38,1,(rd(s->u,37,1)&rd(s->r,519,1)));
L_1803de2d1_27:;
wr(s->u,39,1,(rd(s->u,35,1)&rd(s->u,36,1)));
L_1803de2d1_28:;
wr(s->r,519,1,(rd(s->u,38,1)|rd(s->u,39,1)));
L_1803de2d1_29:;
wr(s->u,40,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803de2d1_30:;
wr(s->u,41,1,(!rd(s->u,35,1)));
L_1803de2d1_31:;
wr(s->u,42,1,(rd(s->u,41,1)&rd(s->r,518,1)));
L_1803de2d1_32:;
wr(s->u,43,1,(rd(s->u,35,1)&rd(s->u,40,1)));
L_1803de2d1_33:;
wr(s->r,518,1,(rd(s->u,42,1)|rd(s->u,43,1)));
L_1803de2d1_34:;
wr(s->u,44,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803de2d1_35:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803de2d1_36:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803de2d1_37:;
wr(s->u,54,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803de2d1_38:;
wr(s->u,55,1,(!rd(s->u,35,1)));
L_1803de2d1_39:;
wr(s->u,56,1,(rd(s->u,55,1)&rd(s->r,514,1)));
L_1803de2d1_40:;
wr(s->u,57,1,(rd(s->u,35,1)&rd(s->u,54,1)));
L_1803de2d1_41:;
wr(s->r,514,1,(rd(s->u,56,1)|rd(s->u,57,1)));
L_1803de2d1_42:;
/* 1803de2d5: add qword ptr [rbx], r11 */
L_1803de2d5_0:;
L_1803de2d5_1:;
wr(s->u,13,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803de2d5_2:;
wr(s->r,512,1,(((rd(s->u,13,8)+rd(s->r,152,8))&(((U)1<<64)-1))<rd(s->u,13,8)));
L_1803de2d5_3:;
wr(s->u,13,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803de2d5_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,13,8),rd(s->r,152,8),8,0));
L_1803de2d5_5:;
wr(s->u,13,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803de2d5_6:;
wr(s->u,13,8,(rd(s->u,13,8)+rd(s->r,152,8)));
L_1803de2d5_7:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,13,8));
L_1803de2d5_8:;
wr(s->u,13,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803de2d5_9:;
wr(s->r,519,1,(sx(rd(s->u,13,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de2d5_10:;
wr(s->u,13,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803de2d5_11:;
wr(s->r,518,1,(rd(s->u,13,8)==((U)UINT64_C(0x0))));
L_1803de2d5_12:;
wr(s->u,13,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803de2d5_13:;
wr(s->u,25,8,(rd(s->u,13,8)&((U)UINT64_C(0xff))));
L_1803de2d5_14:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803de2d5_15:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803de2d5_16:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803de2d5_17:;
/* 1803de2d8: call qword ptr [rip + 0x63ff32] */
L_1803de2d8_0:;
L_1803de2d8_1:;
wr(s->u,75,8,mr(UINT64_C(0x180a1e210),8));
L_1803de2d8_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de2d8_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de2de)));
L_1803de2d8_4:;
return (uint64_t)rd(s->u,75,8);
L_1803de2d8_5:;
return UINT64_C(0x1803de2de);
}
uint64_t b_1803de2de(CPU*s){
/* 1803de2de: mov qword ptr [rbx + 0x190], rax */
L_1803de2de_0:;
L_1803de2de_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x190))));
L_1803de2de_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de2de_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de2de_4:;
/* 1803de2e5: test rax, rax */
L_1803de2e5_0:;
L_1803de2e5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de2e5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de2e5_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de2e5_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de2e5_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de2e5_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de2e5_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de2e5_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de2e5_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de2e5_10:;
/* 1803de2e8: je 0x1803de79e */
L_1803de2e8_0:;
L_1803de2e8_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de2e8_2:;
return UINT64_C(0x1803de2ee);
}
uint64_t b_1803de2ee(CPU*s){
/* 1803de2ee: mov edx, ebp */
L_1803de2ee_0:;
L_1803de2ee_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803de2ee_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de2ee_3:;
/* 1803de2f0: mov rcx, rax */
L_1803de2f0_0:;
L_1803de2f0_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de2f0_2:;
/* 1803de2f3: call qword ptr [rip + 0x63feaf] */
L_1803de2f3_0:;
L_1803de2f3_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de2f3_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de2f3_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de2f9)));
L_1803de2f3_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de2f3_5:;
return UINT64_C(0x1803de2f9);
}
uint64_t b_1803de2f9(CPU*s){
/* 1803de2f9: mov ecx, ebp */
L_1803de2f9_0:;
L_1803de2f9_1:;
wr(s->r,8,4,rd(s->r,40,4));
L_1803de2f9_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de2f9_3:;
/* 1803de2fb: call qword ptr [rip + 0x63ff0f] */
L_1803de2fb_0:;
L_1803de2fb_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e210),8));
L_1803de2fb_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de2fb_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de301)));
L_1803de2fb_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de2fb_5:;
return UINT64_C(0x1803de301);
}
uint64_t b_1803de301(CPU*s){
/* 1803de301: mov qword ptr [rbx + 0x340], rax */
L_1803de301_0:;
L_1803de301_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x340))));
L_1803de301_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de301_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de301_4:;
/* 1803de308: test rax, rax */
L_1803de308_0:;
L_1803de308_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de308_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de308_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de308_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de308_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de308_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de308_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de308_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de308_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de308_10:;
/* 1803de30b: je 0x1803de79e */
L_1803de30b_0:;
L_1803de30b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de30b_2:;
return UINT64_C(0x1803de311);
}
uint64_t b_1803de311(CPU*s){
/* 1803de311: mov edx, ebp */
L_1803de311_0:;
L_1803de311_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803de311_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de311_3:;
/* 1803de313: mov rcx, rax */
L_1803de313_0:;
L_1803de313_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de313_2:;
/* 1803de316: call qword ptr [rip + 0x63fe8c] */
L_1803de316_0:;
L_1803de316_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de316_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de316_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de31c)));
L_1803de316_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de316_5:;
return UINT64_C(0x1803de31c);
}
uint64_t b_1803de31c(CPU*s){
/* 1803de31c: inc r15 */
L_1803de31c_0:;
L_1803de31c_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,8),((U)UINT64_C(0x1)),8,0));
L_1803de31c_2:;
wr(s->r,184,8,(rd(s->r,184,8)+((U)UINT64_C(0x1))));
L_1803de31c_3:;
wr(s->r,519,1,(sx(rd(s->r,184,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de31c_4:;
wr(s->r,518,1,(rd(s->r,184,8)==((U)UINT64_C(0x0))));
L_1803de31c_5:;
wr(s->u,17,8,(rd(s->r,184,8)&((U)UINT64_C(0xff))));
L_1803de31c_6:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803de31c_7:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803de31c_8:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803de31c_9:;
/* 1803de31f: add rbx, 8 */
L_1803de31f_0:;
L_1803de31f_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803de31f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x8)),8,0));
L_1803de31f_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803de31f_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de31f_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803de31f_6:;
wr(s->u,17,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803de31f_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803de31f_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803de31f_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803de31f_10:;
/* 1803de323: cmp r15, qword ptr [rsp + 0x70] */
L_1803de323_0:;
L_1803de323_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803de323_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de323_3:;
wr(s->u,27,8,rd(s->u,8,8));
L_1803de323_4:;
wr(s->r,512,1,(rd(s->r,184,8)<rd(s->u,27,8)));
L_1803de323_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,8),rd(s->u,27,8),8,1));
L_1803de323_6:;
wr(s->u,35,8,(rd(s->r,184,8)-rd(s->u,27,8)));
L_1803de323_7:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de323_8:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1803de323_9:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1803de323_10:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803de323_11:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803de323_12:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803de323_13:;
/* 1803de328: jl 0x1803de231 */
L_1803de328_0:;
L_1803de328_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803de328_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803de231);}
L_1803de328_3:;
return UINT64_C(0x1803de32e);
}
uint64_t b_1803de32e(CPU*s){
/* 1803de32e: lea ecx, [r12 + 1] */
L_1803de32e_0:;
L_1803de32e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1))+rd(s->r,160,8)));
L_1803de32e_2:;
wr(s->r,8,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de32e_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de32e_4:;
/* 1803de333: call qword ptr [rip + 0x63fed7] */
L_1803de333_0:;
L_1803de333_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e210),8));
L_1803de333_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de333_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de339)));
L_1803de333_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de333_5:;
return UINT64_C(0x1803de339);
}
uint64_t b_1803de339(CPU*s){
/* 1803de339: mov qword ptr [rdi + 0x370], rax */
L_1803de339_0:;
L_1803de339_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x370))));
L_1803de339_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de339_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de339_4:;
/* 1803de340: test rax, rax */
L_1803de340_0:;
L_1803de340_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de340_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de340_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de340_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de340_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de340_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de340_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de340_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de340_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de340_10:;
/* 1803de343: je 0x1803de79e */
L_1803de343_0:;
L_1803de343_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de343_2:;
return UINT64_C(0x1803de349);
}
uint64_t b_1803de349(CPU*s){
/* 1803de349: lea edx, [r12 + 1] */
L_1803de349_0:;
L_1803de349_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1))+rd(s->r,160,8)));
L_1803de349_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de349_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de349_4:;
/* 1803de34e: mov rcx, rax */
L_1803de34e_0:;
L_1803de34e_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de34e_2:;
/* 1803de351: call qword ptr [rip + 0x63fe51] */
L_1803de351_0:;
L_1803de351_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de351_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de351_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de357)));
L_1803de351_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de351_5:;
return UINT64_C(0x1803de357);
}
uint64_t b_1803de357(CPU*s){
/* 1803de357: movsxd r13, ebp */
L_1803de357_0:;
L_1803de357_1:;
wr(s->r,168,8,(U)sx(rd(s->r,40,4),4));
L_1803de357_2:;
/* 1803de35a: shl r13, 2 */
L_1803de35a_0:;
L_1803de35a_1:;
wr(s->u,45,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803de35a_2:;
wr(s->u,49,8,rd(s->r,168,8));
L_1803de35a_3:;
wr(s->r,168,8,((rd(s->u,45,4)>=64)?0:(rd(s->r,168,8)<<rd(s->u,45,4))));
L_1803de35a_4:;
wr(s->u,28,1,(rd(s->u,45,4)==((U)UINT64_C(0x0))));
L_1803de35a_5:;
wr(s->u,29,4,(rd(s->u,45,4)-((U)UINT64_C(0x1))));
L_1803de35a_6:;
wr(s->u,33,8,((rd(s->u,29,4)>=64)?0:(rd(s->u,49,8)<<rd(s->u,29,4))));
L_1803de35a_7:;
wr(s->u,41,1,(sx(rd(s->u,33,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de35a_8:;
wr(s->u,0,1,rd(s->u,28,1));
L_1803de35a_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803de35a_10:;
wr(s->u,2,1,(!rd(s->u,28,1)));
L_1803de35a_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803de35a_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,41,1)));
L_1803de35a_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803de35a_14:;
wr(s->u,42,1,(rd(s->u,45,4)==((U)UINT64_C(0x1))));
L_1803de35a_15:;
wr(s->u,43,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de35a_16:;
wr(s->u,44,1,(rd(s->r,512,1)^rd(s->u,43,1)));
L_1803de35a_17:;
wr(s->u,0,1,rd(s->u,42,1));
L_1803de35a_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,44,1)));
L_1803de35a_19:;
wr(s->u,2,1,(!rd(s->u,42,1)));
L_1803de35a_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803de35a_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803de35a_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803de35a_23:;
wr(s->u,5,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803de35a_24:;
wr(s->u,6,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de35a_25:;
wr(s->u,7,1,(!rd(s->u,5,1)));
L_1803de35a_26:;
wr(s->u,8,1,(rd(s->u,7,1)&rd(s->r,519,1)));
L_1803de35a_27:;
wr(s->u,9,1,(rd(s->u,5,1)&rd(s->u,6,1)));
L_1803de35a_28:;
wr(s->r,519,1,(rd(s->u,8,1)|rd(s->u,9,1)));
L_1803de35a_29:;
wr(s->u,10,1,(rd(s->r,168,8)==((U)UINT64_C(0x0))));
L_1803de35a_30:;
wr(s->u,11,1,(!rd(s->u,5,1)));
L_1803de35a_31:;
wr(s->u,12,1,(rd(s->u,11,1)&rd(s->r,518,1)));
L_1803de35a_32:;
wr(s->u,13,1,(rd(s->u,5,1)&rd(s->u,10,1)));
L_1803de35a_33:;
wr(s->r,518,1,(rd(s->u,12,1)|rd(s->u,13,1)));
L_1803de35a_34:;
wr(s->u,14,8,(rd(s->r,168,8)&((U)UINT64_C(0xff))));
L_1803de35a_35:;
wr(s->u,22,1,pop(rd(s->u,14,8),8));
L_1803de35a_36:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803de35a_37:;
wr(s->u,24,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803de35a_38:;
wr(s->u,25,1,(!rd(s->u,5,1)));
L_1803de35a_39:;
wr(s->u,26,1,(rd(s->u,25,1)&rd(s->r,514,1)));
L_1803de35a_40:;
wr(s->u,27,1,(rd(s->u,5,1)&rd(s->u,24,1)));
L_1803de35a_41:;
wr(s->r,514,1,(rd(s->u,26,1)|rd(s->u,27,1)));
L_1803de35a_42:;
/* 1803de35e: mov rcx, r13 */
L_1803de35e_0:;
L_1803de35e_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803de35e_2:;
/* 1803de361: call 0x180609bd4 */
L_1803de361_0:;
L_1803de361_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de361_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de366)));
L_1803de361_3:;
return (uint64_t)UINT64_C(0x180609bd4);
L_1803de361_4:;
return UINT64_C(0x1803de366);
}
uint64_t b_1803de366(CPU*s){
/* 1803de366: mov qword ptr [rdi + 0x48], rax */
L_1803de366_0:;
L_1803de366_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x48))));
L_1803de366_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de366_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de366_4:;
/* 1803de36a: test rax, rax */
L_1803de36a_0:;
L_1803de36a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de36a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de36a_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de36a_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de36a_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de36a_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de36a_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de36a_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de36a_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de36a_10:;
/* 1803de36d: je 0x1803de79e */
L_1803de36d_0:;
L_1803de36d_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de36d_2:;
return UINT64_C(0x1803de373);
}
uint64_t b_1803de373(CPU*s){
/* 1803de373: mov r8, r13 */
L_1803de373_0:;
L_1803de373_1:;
wr(s->r,128,8,rd(s->r,168,8));
L_1803de373_2:;
/* 1803de376: xor edx, edx */
L_1803de376_0:;
L_1803de376_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de376_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de376_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803de376_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de376_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de376_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803de376_7:;
wr(s->u,0,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803de376_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803de376_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803de376_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803de376_11:;
/* 1803de378: mov rcx, rax */
L_1803de378_0:;
L_1803de378_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de378_2:;
/* 1803de37b: call 0x18000d6a6 */
L_1803de37b_0:;
L_1803de37b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de37b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de380)));
L_1803de37b_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803de37b_4:;
return UINT64_C(0x1803de380);
}
uint64_t b_1803de380(CPU*s){
/* 1803de380: mov ecx, ebp */
L_1803de380_0:;
L_1803de380_1:;
wr(s->r,8,4,rd(s->r,40,4));
L_1803de380_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de380_3:;
/* 1803de382: call qword ptr [rip + 0x63fe88] */
L_1803de382_0:;
L_1803de382_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e210),8));
L_1803de382_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de382_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de388)));
L_1803de382_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de382_5:;
return UINT64_C(0x1803de388);
}
uint64_t b_1803de388(CPU*s){
/* 1803de388: mov qword ptr [rdi + 0x9c0], rax */
L_1803de388_0:;
L_1803de388_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9c0))));
L_1803de388_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de388_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de388_4:;
/* 1803de38f: test rax, rax */
L_1803de38f_0:;
L_1803de38f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de38f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de38f_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de38f_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de38f_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de38f_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de38f_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de38f_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de38f_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de38f_10:;
/* 1803de392: je 0x1803de79e */
L_1803de392_0:;
L_1803de392_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de392_2:;
return UINT64_C(0x1803de398);
}
uint64_t b_1803de398(CPU*s){
/* 1803de398: mov edx, ebp */
L_1803de398_0:;
L_1803de398_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803de398_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de398_3:;
/* 1803de39a: mov rcx, rax */
L_1803de39a_0:;
L_1803de39a_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de39a_2:;
/* 1803de39d: call qword ptr [rip + 0x63fe05] */
L_1803de39d_0:;
L_1803de39d_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de39d_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de39d_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de3a3)));
L_1803de39d_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de39d_5:;
return UINT64_C(0x1803de3a3);
}
uint64_t b_1803de3a3(CPU*s){
/* 1803de3a3: mov rcx, r13 */
L_1803de3a3_0:;
L_1803de3a3_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803de3a3_2:;
/* 1803de3a6: call 0x180609bd4 */
L_1803de3a6_0:;
L_1803de3a6_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de3a6_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de3ab)));
L_1803de3a6_3:;
return (uint64_t)UINT64_C(0x180609bd4);
L_1803de3a6_4:;
return UINT64_C(0x1803de3ab);
}
uint64_t b_1803de3ab(CPU*s){
/* 1803de3ab: mov qword ptr [rdi + 0x40], rax */
L_1803de3ab_0:;
L_1803de3ab_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x40))));
L_1803de3ab_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de3ab_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de3ab_4:;
/* 1803de3af: test rax, rax */
L_1803de3af_0:;
L_1803de3af_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de3af_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de3af_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de3af_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de3af_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de3af_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de3af_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de3af_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de3af_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de3af_10:;
/* 1803de3b2: je 0x1803de79e */
L_1803de3b2_0:;
L_1803de3b2_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de3b2_2:;
return UINT64_C(0x1803de3b8);
}
uint64_t b_1803de3b8(CPU*s){
/* 1803de3b8: mov r8, r13 */
L_1803de3b8_0:;
L_1803de3b8_1:;
wr(s->r,128,8,rd(s->r,168,8));
L_1803de3b8_2:;
/* 1803de3bb: xor edx, edx */
L_1803de3bb_0:;
L_1803de3bb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de3bb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de3bb_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803de3bb_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de3bb_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de3bb_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803de3bb_7:;
wr(s->u,0,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803de3bb_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803de3bb_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803de3bb_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803de3bb_11:;
/* 1803de3bd: mov rcx, rax */
L_1803de3bd_0:;
L_1803de3bd_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de3bd_2:;
/* 1803de3c0: call 0x18000d6a6 */
L_1803de3c0_0:;
L_1803de3c0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de3c0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de3c5)));
L_1803de3c0_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803de3c0_4:;
return UINT64_C(0x1803de3c5);
}
uint64_t b_1803de3c5(CPU*s){
/* 1803de3c5: mov ecx, ebp */
L_1803de3c5_0:;
L_1803de3c5_1:;
wr(s->r,8,4,rd(s->r,40,4));
L_1803de3c5_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de3c5_3:;
/* 1803de3c7: call qword ptr [rip + 0x63fe43] */
L_1803de3c7_0:;
L_1803de3c7_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e210),8));
L_1803de3c7_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de3c7_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de3cd)));
L_1803de3c7_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de3c7_5:;
return UINT64_C(0x1803de3cd);
}
uint64_t b_1803de3cd(CPU*s){
/* 1803de3cd: mov qword ptr [rdi + 0x808], rax */
L_1803de3cd_0:;
L_1803de3cd_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x808))));
L_1803de3cd_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de3cd_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de3cd_4:;
/* 1803de3d4: test rax, rax */
L_1803de3d4_0:;
L_1803de3d4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de3d4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de3d4_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de3d4_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de3d4_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de3d4_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de3d4_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de3d4_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de3d4_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de3d4_10:;
/* 1803de3d7: je 0x1803de79e */
L_1803de3d7_0:;
L_1803de3d7_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de3d7_2:;
return UINT64_C(0x1803de3dd);
}
uint64_t b_1803de3dd(CPU*s){
/* 1803de3dd: mov edx, ebp */
L_1803de3dd_0:;
L_1803de3dd_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803de3dd_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de3dd_3:;
/* 1803de3df: mov rcx, rax */
L_1803de3df_0:;
L_1803de3df_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de3df_2:;
/* 1803de3e2: call qword ptr [rip + 0x63fdc0] */
L_1803de3e2_0:;
L_1803de3e2_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de3e2_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de3e2_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de3e8)));
L_1803de3e2_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de3e2_5:;
return UINT64_C(0x1803de3e8);
}
uint64_t b_1803de3e8(CPU*s){
/* 1803de3e8: mov ecx, ebp */
L_1803de3e8_0:;
L_1803de3e8_1:;
wr(s->r,8,4,rd(s->r,40,4));
L_1803de3e8_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de3e8_3:;
/* 1803de3ea: call qword ptr [rip + 0x63fe20] */
L_1803de3ea_0:;
L_1803de3ea_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e210),8));
L_1803de3ea_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de3ea_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de3f0)));
L_1803de3ea_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de3ea_5:;
return UINT64_C(0x1803de3f0);
}
uint64_t b_1803de3f0(CPU*s){
/* 1803de3f0: mov qword ptr [rdi + 0x9b8], rax */
L_1803de3f0_0:;
L_1803de3f0_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9b8))));
L_1803de3f0_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de3f0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de3f0_4:;
/* 1803de3f7: test rax, rax */
L_1803de3f7_0:;
L_1803de3f7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de3f7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de3f7_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de3f7_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de3f7_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de3f7_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de3f7_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de3f7_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de3f7_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de3f7_10:;
/* 1803de3fa: je 0x1803de79e */
L_1803de3fa_0:;
L_1803de3fa_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de3fa_2:;
return UINT64_C(0x1803de400);
}
uint64_t b_1803de400(CPU*s){
/* 1803de400: mov edx, ebp */
L_1803de400_0:;
L_1803de400_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803de400_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de400_3:;
/* 1803de402: mov rcx, rax */
L_1803de402_0:;
L_1803de402_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de402_2:;
/* 1803de405: call qword ptr [rip + 0x63fd9d] */
L_1803de405_0:;
L_1803de405_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de405_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de405_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de40b)));
L_1803de405_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de405_5:;
return UINT64_C(0x1803de40b);
}
uint64_t b_1803de40b(CPU*s){
/* 1803de40b: mov ecx, ebp */
L_1803de40b_0:;
L_1803de40b_1:;
wr(s->r,8,4,rd(s->r,40,4));
L_1803de40b_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de40b_3:;
/* 1803de40d: call qword ptr [rip + 0x63fdfd] */
L_1803de40d_0:;
L_1803de40d_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e210),8));
L_1803de40d_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de40d_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de413)));
L_1803de40d_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de40d_5:;
return UINT64_C(0x1803de413);
}
uint64_t b_1803de413(CPU*s){
/* 1803de413: mov qword ptr [rdi + 0xa08], rax */
L_1803de413_0:;
L_1803de413_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xa08))));
L_1803de413_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de413_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de413_4:;
/* 1803de41a: test rax, rax */
L_1803de41a_0:;
L_1803de41a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de41a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de41a_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de41a_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de41a_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de41a_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de41a_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de41a_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de41a_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de41a_10:;
/* 1803de41d: je 0x1803de79e */
L_1803de41d_0:;
L_1803de41d_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de41d_2:;
return UINT64_C(0x1803de423);
}
uint64_t b_1803de423(CPU*s){
/* 1803de423: mov edx, ebp */
L_1803de423_0:;
L_1803de423_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803de423_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de423_3:;
/* 1803de425: mov rcx, rax */
L_1803de425_0:;
L_1803de425_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de425_2:;
/* 1803de428: call qword ptr [rip + 0x63fd7a] */
L_1803de428_0:;
L_1803de428_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de428_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de428_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de42e)));
L_1803de428_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de428_5:;
return UINT64_C(0x1803de42e);
}
uint64_t b_1803de42e(CPU*s){
/* 1803de42e: mov rcx, r13 */
L_1803de42e_0:;
L_1803de42e_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803de42e_2:;
/* 1803de431: call 0x180609bd4 */
L_1803de431_0:;
L_1803de431_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de431_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de436)));
L_1803de431_3:;
return (uint64_t)UINT64_C(0x180609bd4);
L_1803de431_4:;
return UINT64_C(0x1803de436);
}
uint64_t b_1803de436(CPU*s){
/* 1803de436: mov qword ptr [rdi + 0x28], rax */
L_1803de436_0:;
L_1803de436_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x28))));
L_1803de436_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de436_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de436_4:;
/* 1803de43a: test rax, rax */
L_1803de43a_0:;
L_1803de43a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de43a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de43a_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de43a_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de43a_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de43a_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de43a_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de43a_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de43a_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de43a_10:;
/* 1803de43d: je 0x1803de79e */
L_1803de43d_0:;
L_1803de43d_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de43d_2:;
return UINT64_C(0x1803de443);
}
uint64_t b_1803de443(CPU*s){
/* 1803de443: mov r8, r13 */
L_1803de443_0:;
L_1803de443_1:;
wr(s->r,128,8,rd(s->r,168,8));
L_1803de443_2:;
/* 1803de446: xor edx, edx */
L_1803de446_0:;
L_1803de446_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de446_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de446_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803de446_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de446_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de446_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803de446_7:;
wr(s->u,0,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803de446_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803de446_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803de446_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803de446_11:;
/* 1803de448: mov rcx, rax */
L_1803de448_0:;
L_1803de448_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de448_2:;
/* 1803de44b: call 0x18000d6a6 */
L_1803de44b_0:;
L_1803de44b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de44b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de450)));
L_1803de44b_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803de44b_4:;
return UINT64_C(0x1803de450);
}
uint64_t b_1803de450(CPU*s){
/* 1803de450: lea ecx, [rbp + 1] */
L_1803de450_0:;
L_1803de450_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x1))));
L_1803de450_2:;
wr(s->r,8,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de450_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de450_4:;
/* 1803de453: call qword ptr [rip + 0x63fdb7] */
L_1803de453_0:;
L_1803de453_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e210),8));
L_1803de453_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de453_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de459)));
L_1803de453_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de453_5:;
return UINT64_C(0x1803de459);
}
uint64_t b_1803de459(CPU*s){
/* 1803de459: mov qword ptr [rdi + 0x360], rax */
L_1803de459_0:;
L_1803de459_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x360))));
L_1803de459_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de459_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de459_4:;
/* 1803de460: test rax, rax */
L_1803de460_0:;
L_1803de460_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de460_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de460_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de460_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de460_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de460_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de460_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de460_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de460_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de460_10:;
/* 1803de463: je 0x1803de79e */
L_1803de463_0:;
L_1803de463_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de463_2:;
return UINT64_C(0x1803de469);
}
uint64_t b_1803de469(CPU*s){
/* 1803de469: lea edx, [rbp + 1] */
L_1803de469_0:;
L_1803de469_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x1))));
L_1803de469_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de469_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de469_4:;
/* 1803de46c: mov rcx, rax */
L_1803de46c_0:;
L_1803de46c_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de46c_2:;
/* 1803de46f: call qword ptr [rip + 0x63fd33] */
L_1803de46f_0:;
L_1803de46f_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de46f_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de46f_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de475)));
L_1803de46f_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de46f_5:;
return UINT64_C(0x1803de475);
}
uint64_t b_1803de475(CPU*s){
/* 1803de475: lea ecx, [rbp + 1] */
L_1803de475_0:;
L_1803de475_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x1))));
L_1803de475_2:;
wr(s->r,8,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de475_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de475_4:;
/* 1803de478: call qword ptr [rip + 0x63fd92] */
L_1803de478_0:;
L_1803de478_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e210),8));
L_1803de478_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de478_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de47e)));
L_1803de478_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de478_5:;
return UINT64_C(0x1803de47e);
}
uint64_t b_1803de47e(CPU*s){
/* 1803de47e: mov qword ptr [rdi + 0x368], rax */
L_1803de47e_0:;
L_1803de47e_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x368))));
L_1803de47e_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de47e_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de47e_4:;
/* 1803de485: test rax, rax */
L_1803de485_0:;
L_1803de485_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de485_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de485_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de485_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de485_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de485_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de485_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de485_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de485_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de485_10:;
/* 1803de488: je 0x1803de79e */
L_1803de488_0:;
L_1803de488_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de488_2:;
return UINT64_C(0x1803de48e);
}
uint64_t b_1803de48e(CPU*s){
/* 1803de48e: lea edx, [rbp + 1] */
L_1803de48e_0:;
L_1803de48e_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x1))));
L_1803de48e_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de48e_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de48e_4:;
/* 1803de491: mov rcx, rax */
L_1803de491_0:;
L_1803de491_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de491_2:;
/* 1803de494: call qword ptr [rip + 0x63fd0e] */
L_1803de494_0:;
L_1803de494_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de494_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de494_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de49a)));
L_1803de494_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de494_5:;
return UINT64_C(0x1803de49a);
}
uint64_t b_1803de49a(CPU*s){
/* 1803de49a: lea ecx, [rbp + 1] */
L_1803de49a_0:;
L_1803de49a_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x1))));
L_1803de49a_2:;
wr(s->r,8,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de49a_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de49a_4:;
/* 1803de49d: call qword ptr [rip + 0x63fd6d] */
L_1803de49d_0:;
L_1803de49d_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e210),8));
L_1803de49d_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de49d_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de4a3)));
L_1803de49d_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de49d_5:;
return UINT64_C(0x1803de4a3);
}
uint64_t b_1803de4a3(CPU*s){
/* 1803de4a3: mov qword ptr [rdi + 0x678], rax */
L_1803de4a3_0:;
L_1803de4a3_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x678))));
L_1803de4a3_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de4a3_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de4a3_4:;
/* 1803de4aa: test rax, rax */
L_1803de4aa_0:;
L_1803de4aa_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de4aa_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de4aa_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de4aa_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de4aa_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de4aa_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de4aa_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de4aa_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de4aa_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de4aa_10:;
/* 1803de4ad: je 0x1803de79e */
L_1803de4ad_0:;
L_1803de4ad_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de4ad_2:;
return UINT64_C(0x1803de4b3);
}
uint64_t b_1803de4b3(CPU*s){
/* 1803de4b3: lea edx, [rbp + 1] */
L_1803de4b3_0:;
L_1803de4b3_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x1))));
L_1803de4b3_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de4b3_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de4b3_4:;
/* 1803de4b6: mov rcx, rax */
L_1803de4b6_0:;
L_1803de4b6_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de4b6_2:;
/* 1803de4b9: call qword ptr [rip + 0x63fce9] */
L_1803de4b9_0:;
L_1803de4b9_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de4b9_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de4b9_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de4bf)));
L_1803de4b9_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de4b9_5:;
return UINT64_C(0x1803de4bf);
}
uint64_t b_1803de4bf(CPU*s){
/* 1803de4bf: lea ecx, [rbp + 1] */
L_1803de4bf_0:;
L_1803de4bf_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x1))));
L_1803de4bf_2:;
wr(s->r,8,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de4bf_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de4bf_4:;
/* 1803de4c2: call qword ptr [rip + 0x63fd48] */
L_1803de4c2_0:;
L_1803de4c2_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e210),8));
L_1803de4c2_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de4c2_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de4c8)));
L_1803de4c2_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de4c2_5:;
return UINT64_C(0x1803de4c8);
}
uint64_t b_1803de4c8(CPU*s){
/* 1803de4c8: mov qword ptr [rdi + 0x680], rax */
L_1803de4c8_0:;
L_1803de4c8_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x680))));
L_1803de4c8_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de4c8_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de4c8_4:;
/* 1803de4cf: test rax, rax */
L_1803de4cf_0:;
L_1803de4cf_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de4cf_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de4cf_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de4cf_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de4cf_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de4cf_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de4cf_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de4cf_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de4cf_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de4cf_10:;
/* 1803de4d2: je 0x1803de79e */
L_1803de4d2_0:;
L_1803de4d2_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de4d2_2:;
return UINT64_C(0x1803de4d8);
}
uint64_t b_1803de4d8(CPU*s){
/* 1803de4d8: lea edx, [rbp + 1] */
L_1803de4d8_0:;
L_1803de4d8_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x1))));
L_1803de4d8_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de4d8_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de4d8_4:;
/* 1803de4db: mov rcx, rax */
L_1803de4db_0:;
L_1803de4db_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de4db_2:;
/* 1803de4de: call qword ptr [rip + 0x63fcc4] */
L_1803de4de_0:;
L_1803de4de_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de4de_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de4de_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de4e4)));
L_1803de4de_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de4de_5:;
return UINT64_C(0x1803de4e4);
}
uint64_t b_1803de4e4(CPU*s){
/* 1803de4e4: lea ecx, [rbp + 1] */
L_1803de4e4_0:;
L_1803de4e4_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x1))));
L_1803de4e4_2:;
wr(s->r,8,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de4e4_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de4e4_4:;
/* 1803de4e7: call qword ptr [rip + 0x63fd23] */
L_1803de4e7_0:;
L_1803de4e7_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e210),8));
L_1803de4e7_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de4e7_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de4ed)));
L_1803de4e7_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de4e7_5:;
return UINT64_C(0x1803de4ed);
}
uint64_t b_1803de4ed(CPU*s){
/* 1803de4ed: mov qword ptr [rdi + 0x830], rax */
L_1803de4ed_0:;
L_1803de4ed_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x830))));
L_1803de4ed_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de4ed_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de4ed_4:;
/* 1803de4f4: test rax, rax */
L_1803de4f4_0:;
L_1803de4f4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de4f4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de4f4_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de4f4_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de4f4_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de4f4_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de4f4_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de4f4_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de4f4_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de4f4_10:;
/* 1803de4f7: je 0x1803de79e */
L_1803de4f7_0:;
L_1803de4f7_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de4f7_2:;
return UINT64_C(0x1803de4fd);
}
uint64_t b_1803de4fd(CPU*s){
/* 1803de4fd: lea edx, [rbp + 1] */
L_1803de4fd_0:;
L_1803de4fd_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x1))));
L_1803de4fd_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de4fd_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de4fd_4:;
/* 1803de500: mov rcx, rax */
L_1803de500_0:;
L_1803de500_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de500_2:;
/* 1803de503: call qword ptr [rip + 0x63fc9f] */
L_1803de503_0:;
L_1803de503_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de503_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de503_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de509)));
L_1803de503_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de503_5:;
return UINT64_C(0x1803de509);
}
uint64_t b_1803de509(CPU*s){
/* 1803de509: mov ecx, r12d */
L_1803de509_0:;
L_1803de509_1:;
wr(s->r,8,4,rd(s->r,160,4));
L_1803de509_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de509_3:;
/* 1803de50c: call qword ptr [rip + 0x63fcfe] */
L_1803de50c_0:;
L_1803de50c_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e210),8));
L_1803de50c_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de50c_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de512)));
L_1803de50c_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de50c_5:;
return UINT64_C(0x1803de512);
}
uint64_t b_1803de512(CPU*s){
/* 1803de512: mov qword ptr [rdi + 0x9d0], rax */
L_1803de512_0:;
L_1803de512_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9d0))));
L_1803de512_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de512_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de512_4:;
/* 1803de519: test rax, rax */
L_1803de519_0:;
L_1803de519_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de519_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de519_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de519_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de519_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de519_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de519_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de519_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de519_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de519_10:;
/* 1803de51c: je 0x1803de79e */
L_1803de51c_0:;
L_1803de51c_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de51c_2:;
return UINT64_C(0x1803de522);
}
uint64_t b_1803de522(CPU*s){
/* 1803de522: mov edx, r12d */
L_1803de522_0:;
L_1803de522_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1803de522_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de522_3:;
/* 1803de525: mov rcx, rax */
L_1803de525_0:;
L_1803de525_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de525_2:;
/* 1803de528: call qword ptr [rip + 0x63fc7a] */
L_1803de528_0:;
L_1803de528_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de528_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de528_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de52e)));
L_1803de528_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de528_5:;
return UINT64_C(0x1803de52e);
}
uint64_t b_1803de52e(CPU*s){
/* 1803de52e: mov ecx, ebp */
L_1803de52e_0:;
L_1803de52e_1:;
wr(s->r,8,4,rd(s->r,40,4));
L_1803de52e_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de52e_3:;
/* 1803de530: call qword ptr [rip + 0x63fcda] */
L_1803de530_0:;
L_1803de530_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e210),8));
L_1803de530_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de530_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de536)));
L_1803de530_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de530_5:;
return UINT64_C(0x1803de536);
}
uint64_t b_1803de536(CPU*s){
/* 1803de536: mov qword ptr [rdi + 0x9d8], rax */
L_1803de536_0:;
L_1803de536_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9d8))));
L_1803de536_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de536_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de536_4:;
/* 1803de53d: test rax, rax */
L_1803de53d_0:;
L_1803de53d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de53d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de53d_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de53d_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de53d_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de53d_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de53d_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de53d_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de53d_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de53d_10:;
/* 1803de540: je 0x1803de79e */
L_1803de540_0:;
L_1803de540_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de540_2:;
return UINT64_C(0x1803de546);
}
uint64_t b_1803de546(CPU*s){
/* 1803de546: mov edx, ebp */
L_1803de546_0:;
L_1803de546_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803de546_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de546_3:;
/* 1803de548: mov rcx, rax */
L_1803de548_0:;
L_1803de548_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de548_2:;
/* 1803de54b: call qword ptr [rip + 0x63fc57] */
L_1803de54b_0:;
L_1803de54b_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de54b_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de54b_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de551)));
L_1803de54b_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de54b_5:;
return UINT64_C(0x1803de551);
}
uint64_t b_1803de551(CPU*s){
/* 1803de551: mov rcx, r13 */
L_1803de551_0:;
L_1803de551_1:;
wr(s->r,8,8,rd(s->r,168,8));
L_1803de551_2:;
/* 1803de554: call 0x180609bd4 */
L_1803de554_0:;
L_1803de554_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de554_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de559)));
L_1803de554_3:;
return (uint64_t)UINT64_C(0x180609bd4);
L_1803de554_4:;
return UINT64_C(0x1803de559);
}
uint64_t b_1803de559(CPU*s){
/* 1803de559: mov qword ptr [rdi + 0x50], rax */
L_1803de559_0:;
L_1803de559_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x50))));
L_1803de559_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de559_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de559_4:;
/* 1803de55d: test rax, rax */
L_1803de55d_0:;
L_1803de55d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de55d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de55d_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de55d_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de55d_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de55d_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de55d_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de55d_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de55d_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de55d_10:;
/* 1803de560: je 0x1803de79e */
L_1803de560_0:;
L_1803de560_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de560_2:;
return UINT64_C(0x1803de566);
}
uint64_t b_1803de566(CPU*s){
/* 1803de566: mov r8, r13 */
L_1803de566_0:;
L_1803de566_1:;
wr(s->r,128,8,rd(s->r,168,8));
L_1803de566_2:;
/* 1803de569: xor edx, edx */
L_1803de569_0:;
L_1803de569_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de569_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de569_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803de569_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de569_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de569_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803de569_7:;
wr(s->u,0,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803de569_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803de569_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803de569_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803de569_11:;
/* 1803de56b: mov rcx, rax */
L_1803de56b_0:;
L_1803de56b_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de56b_2:;
/* 1803de56e: call 0x18000d6a6 */
L_1803de56e_0:;
L_1803de56e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de56e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de573)));
L_1803de56e_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1803de56e_4:;
return UINT64_C(0x1803de573);
}
uint64_t b_1803de573(CPU*s){
/* 1803de573: mov ecx, ebp */
L_1803de573_0:;
L_1803de573_1:;
wr(s->r,8,4,rd(s->r,40,4));
L_1803de573_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de573_3:;
/* 1803de575: call qword ptr [rip + 0x63fc95] */
L_1803de575_0:;
L_1803de575_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e210),8));
L_1803de575_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de575_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de57b)));
L_1803de575_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de575_5:;
return UINT64_C(0x1803de57b);
}
uint64_t b_1803de57b(CPU*s){
/* 1803de57b: mov qword ptr [rdi + 0x818], rax */
L_1803de57b_0:;
L_1803de57b_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x818))));
L_1803de57b_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de57b_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de57b_4:;
/* 1803de582: test rax, rax */
L_1803de582_0:;
L_1803de582_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de582_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de582_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de582_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de582_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de582_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de582_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de582_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de582_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de582_10:;
/* 1803de585: je 0x1803de79e */
L_1803de585_0:;
L_1803de585_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de585_2:;
return UINT64_C(0x1803de58b);
}
uint64_t b_1803de58b(CPU*s){
/* 1803de58b: mov edx, ebp */
L_1803de58b_0:;
L_1803de58b_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803de58b_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de58b_3:;
/* 1803de58d: mov rcx, rax */
L_1803de58d_0:;
L_1803de58d_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de58d_2:;
/* 1803de590: call qword ptr [rip + 0x63fc12] */
L_1803de590_0:;
L_1803de590_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de590_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de590_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de596)));
L_1803de590_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de590_5:;
return UINT64_C(0x1803de596);
}
uint64_t b_1803de596(CPU*s){
/* 1803de596: mov ecx, ebp */
L_1803de596_0:;
L_1803de596_1:;
wr(s->r,8,4,rd(s->r,40,4));
L_1803de596_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de596_3:;
/* 1803de598: call qword ptr [rip + 0x63fc72] */
L_1803de598_0:;
L_1803de598_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e210),8));
L_1803de598_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de598_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de59e)));
L_1803de598_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de598_5:;
return UINT64_C(0x1803de59e);
}
uint64_t b_1803de59e(CPU*s){
/* 1803de59e: mov qword ptr [rdi + 0x820], rax */
L_1803de59e_0:;
L_1803de59e_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x820))));
L_1803de59e_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de59e_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de59e_4:;
/* 1803de5a5: test rax, rax */
L_1803de5a5_0:;
L_1803de5a5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de5a5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de5a5_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de5a5_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de5a5_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de5a5_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de5a5_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de5a5_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de5a5_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de5a5_10:;
/* 1803de5a8: je 0x1803de79e */
L_1803de5a8_0:;
L_1803de5a8_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de5a8_2:;
return UINT64_C(0x1803de5ae);
}
uint64_t b_1803de5ae(CPU*s){
/* 1803de5ae: mov edx, ebp */
L_1803de5ae_0:;
L_1803de5ae_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803de5ae_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de5ae_3:;
/* 1803de5b0: mov rcx, rax */
L_1803de5b0_0:;
L_1803de5b0_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de5b0_2:;
/* 1803de5b3: call qword ptr [rip + 0x63fbef] */
L_1803de5b3_0:;
L_1803de5b3_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de5b3_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de5b3_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de5b9)));
L_1803de5b3_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de5b3_5:;
return UINT64_C(0x1803de5b9);
}
uint64_t b_1803de5b9(CPU*s){
/* 1803de5b9: mov ecx, ebp */
L_1803de5b9_0:;
L_1803de5b9_1:;
wr(s->r,8,4,rd(s->r,40,4));
L_1803de5b9_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de5b9_3:;
/* 1803de5bb: call qword ptr [rip + 0x63fc4f] */
L_1803de5bb_0:;
L_1803de5bb_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e210),8));
L_1803de5bb_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de5bb_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de5c1)));
L_1803de5bb_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de5bb_5:;
return UINT64_C(0x1803de5c1);
}
uint64_t b_1803de5c1(CPU*s){
/* 1803de5c1: mov qword ptr [rdi + 0x828], rax */
L_1803de5c1_0:;
L_1803de5c1_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x828))));
L_1803de5c1_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de5c1_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de5c1_4:;
/* 1803de5c8: test rax, rax */
L_1803de5c8_0:;
L_1803de5c8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de5c8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de5c8_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de5c8_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de5c8_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de5c8_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de5c8_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de5c8_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de5c8_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de5c8_10:;
/* 1803de5cb: je 0x1803de79e */
L_1803de5cb_0:;
L_1803de5cb_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de5cb_2:;
return UINT64_C(0x1803de5d1);
}
uint64_t b_1803de5d1(CPU*s){
/* 1803de5d1: mov edx, ebp */
L_1803de5d1_0:;
L_1803de5d1_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803de5d1_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de5d1_3:;
/* 1803de5d3: mov rcx, rax */
L_1803de5d3_0:;
L_1803de5d3_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de5d3_2:;
/* 1803de5d6: call qword ptr [rip + 0x63fbcc] */
L_1803de5d6_0:;
L_1803de5d6_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de5d6_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de5d6_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de5dc)));
L_1803de5d6_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de5d6_5:;
return UINT64_C(0x1803de5dc);
}
uint64_t b_1803de5dc(CPU*s){
/* 1803de5dc: mov ecx, ebp */
L_1803de5dc_0:;
L_1803de5dc_1:;
wr(s->r,8,4,rd(s->r,40,4));
L_1803de5dc_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de5dc_3:;
/* 1803de5de: call qword ptr [rip + 0x63fc2c] */
L_1803de5de_0:;
L_1803de5de_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e210),8));
L_1803de5de_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de5de_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de5e4)));
L_1803de5de_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de5de_5:;
return UINT64_C(0x1803de5e4);
}
uint64_t b_1803de5e4(CPU*s){
/* 1803de5e4: mov qword ptr [rdi + 0x810], rax */
L_1803de5e4_0:;
L_1803de5e4_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x810))));
L_1803de5e4_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de5e4_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de5e4_4:;
/* 1803de5eb: test rax, rax */
L_1803de5eb_0:;
L_1803de5eb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de5eb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de5eb_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de5eb_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de5eb_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de5eb_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de5eb_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de5eb_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de5eb_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de5eb_10:;
/* 1803de5ee: je 0x1803de79e */
L_1803de5ee_0:;
L_1803de5ee_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de5ee_2:;
return UINT64_C(0x1803de5f4);
}
uint64_t b_1803de5f4(CPU*s){
/* 1803de5f4: mov edx, ebp */
L_1803de5f4_0:;
L_1803de5f4_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803de5f4_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de5f4_3:;
/* 1803de5f6: mov rcx, rax */
L_1803de5f6_0:;
L_1803de5f6_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de5f6_2:;
/* 1803de5f9: call qword ptr [rip + 0x63fba9] */
L_1803de5f9_0:;
L_1803de5f9_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de5f9_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de5f9_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de5ff)));
L_1803de5f9_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de5f9_5:;
return UINT64_C(0x1803de5ff);
}
uint64_t b_1803de5ff(CPU*s){
/* 1803de5ff: mov ecx, r12d */
L_1803de5ff_0:;
L_1803de5ff_1:;
wr(s->r,8,4,rd(s->r,160,4));
L_1803de5ff_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de5ff_3:;
/* 1803de602: call qword ptr [rip + 0x63fc08] */
L_1803de602_0:;
L_1803de602_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e210),8));
L_1803de602_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de602_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de608)));
L_1803de602_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de602_5:;
return UINT64_C(0x1803de608);
}
uint64_t b_1803de608(CPU*s){
/* 1803de608: mov qword ptr [rdi + 0x8a10], rax */
L_1803de608_0:;
L_1803de608_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x8a10))));
L_1803de608_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de608_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de608_4:;
/* 1803de60f: test rax, rax */
L_1803de60f_0:;
L_1803de60f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de60f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de60f_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de60f_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de60f_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de60f_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de60f_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de60f_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de60f_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de60f_10:;
/* 1803de612: je 0x1803de79e */
L_1803de612_0:;
L_1803de612_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de612_2:;
return UINT64_C(0x1803de618);
}
uint64_t b_1803de618(CPU*s){
/* 1803de618: mov edx, r12d */
L_1803de618_0:;
L_1803de618_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1803de618_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de618_3:;
/* 1803de61b: mov rcx, rax */
L_1803de61b_0:;
L_1803de61b_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de61b_2:;
/* 1803de61e: call qword ptr [rip + 0x63fb84] */
L_1803de61e_0:;
L_1803de61e_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de61e_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de61e_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de624)));
L_1803de61e_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de61e_5:;
return UINT64_C(0x1803de624);
}
uint64_t b_1803de624(CPU*s){
/* 1803de624: xor r9d, r9d */
L_1803de624_0:;
L_1803de624_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de624_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de624_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803de624_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803de624_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de624_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803de624_7:;
wr(s->u,16,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803de624_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803de624_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803de624_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803de624_11:;
/* 1803de627: lea rcx, [rdi + 0x8a20] */
L_1803de627_0:;
L_1803de627_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x8a20))));
L_1803de627_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803de627_3:;
/* 1803de62e: lea r8d, [r9 + 1] */
L_1803de62e_0:;
L_1803de62e_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x1))));
L_1803de62e_2:;
wr(s->r,128,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de62e_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803de62e_4:;
/* 1803de632: mov edx, r12d */
L_1803de632_0:;
L_1803de632_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1803de632_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de632_3:;
/* 1803de635: call qword ptr [rip + 0x63fb85] */
L_1803de635_0:;
L_1803de635_1:;
wr(s->u,22,8,mr(UINT64_C(0x180a1e1c0),8));
L_1803de635_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de635_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de63b)));
L_1803de635_4:;
return (uint64_t)rd(s->u,22,8);
L_1803de635_5:;
return UINT64_C(0x1803de63b);
}
uint64_t b_1803de63b(CPU*s){
/* 1803de63b: mov ecx, r12d */
L_1803de63b_0:;
L_1803de63b_1:;
wr(s->r,8,4,rd(s->r,160,4));
L_1803de63b_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de63b_3:;
/* 1803de63e: call qword ptr [rip + 0x63fbcc] */
L_1803de63e_0:;
L_1803de63e_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e210),8));
L_1803de63e_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de63e_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de644)));
L_1803de63e_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de63e_5:;
return UINT64_C(0x1803de644);
}
uint64_t b_1803de644(CPU*s){
/* 1803de644: mov r11, rax */
L_1803de644_0:;
L_1803de644_1:;
wr(s->r,152,8,rd(s->r,0,8));
L_1803de644_2:;
/* 1803de647: mov qword ptr [rdi + 0x9e8], rax */
L_1803de647_0:;
L_1803de647_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9e8))));
L_1803de647_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de647_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de647_4:;
/* 1803de64e: test rax, rax */
L_1803de64e_0:;
L_1803de64e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de64e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de64e_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de64e_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de64e_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de64e_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de64e_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de64e_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de64e_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de64e_10:;
/* 1803de651: je 0x1803de79e */
L_1803de651_0:;
L_1803de651_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de651_2:;
return UINT64_C(0x1803de657);
}
uint64_t b_1803de657(CPU*s){
/* 1803de657: mov ebx, dword ptr [rsp + 0x88] */
L_1803de657_0:;
L_1803de657_1:;
wr(s->u,0,8,(((U)UINT64_C(0x88))+rd(s->r,32,8)));
L_1803de657_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803de657_3:;
wr(s->r,24,4,rd(s->u,8,4));
L_1803de657_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803de657_5:;
/* 1803de65e: movd xmm0, r12d */
L_1803de65e_0:;
L_1803de65e_1:;
wr(s->r,4608,16,rd(s->r,160,4));
L_1803de65e_2:;
/* 1803de663: mov eax, esi */
L_1803de663_0:;
L_1803de663_1:;
wr(s->r,0,4,rd(s->r,48,4));
L_1803de663_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803de663_3:;
/* 1803de665: movd xmm1, ebx */
L_1803de665_0:;
L_1803de665_1:;
wr(s->r,4672,16,rd(s->r,24,4));
L_1803de665_2:;
/* 1803de669: cvtdq2ps xmm0, xmm0 */
L_1803de669_0:;
L_1803de669_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803de669_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803de669_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803de669_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803de669_5:;
/* 1803de66c: cvtdq2ps xmm1, xmm1 */
L_1803de66c_0:;
L_1803de66c_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803de66c_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803de66c_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803de66c_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803de66c_5:;
/* 1803de66f: mulss xmm1, dword ptr [rip + 0x27cec9] */
L_1803de66f_0:;
L_1803de66f_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(mr(UINT64_C(0x18065b540),4),4),4));
L_1803de66f_2:;
/* 1803de677: divss xmm1, xmm0 */
L_1803de677_0:;
L_1803de677_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4608,4),4),4));
L_1803de677_2:;
/* 1803de67b: test r12d, r12d */
L_1803de67b_0:;
L_1803de67b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de67b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de67b_3:;
wr(s->u,20,4,(rd(s->r,160,4)&rd(s->r,160,4)));
L_1803de67b_4:;
wr(s->r,519,1,(sx(rd(s->u,20,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de67b_5:;
wr(s->r,518,1,(rd(s->u,20,4)==((U)UINT64_C(0x0))));
L_1803de67b_6:;
wr(s->u,14,4,(rd(s->u,20,4)&((U)UINT64_C(0xff))));
L_1803de67b_7:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803de67b_8:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803de67b_9:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803de67b_10:;
/* 1803de67e: jle 0x1803de69c */
L_1803de67e_0:;
L_1803de67e_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803de67e_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803de67e_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803de69c);}
L_1803de67e_4:;
return UINT64_C(0x1803de680);
}
uint64_t b_1803de680(CPU*s){
/* 1803de680: movd xmm0, eax */
L_1803de680_0:;
L_1803de680_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803de680_2:;
/* 1803de684: inc eax */
L_1803de684_0:;
L_1803de684_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,0));
L_1803de684_2:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x1))));
L_1803de684_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803de684_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de684_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803de684_6:;
wr(s->u,13,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803de684_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803de684_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803de684_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803de684_10:;
/* 1803de686: add r11, 4 */
L_1803de686_0:;
L_1803de686_1:;
wr(s->r,512,1,(((rd(s->r,152,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,152,8)));
L_1803de686_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),((U)UINT64_C(0x4)),8,0));
L_1803de686_3:;
wr(s->r,152,8,(rd(s->r,152,8)+((U)UINT64_C(0x4))));
L_1803de686_4:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de686_5:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803de686_6:;
wr(s->u,13,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803de686_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803de686_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803de686_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803de686_10:;
/* 1803de68a: cmp eax, r12d */
L_1803de68a_0:;
L_1803de68a_1:;
wr(s->u,23,4,rd(s->r,160,4));
L_1803de68a_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,23,4)));
L_1803de68a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,23,4),4,1));
L_1803de68a_4:;
wr(s->u,27,4,(rd(s->r,0,4)-rd(s->u,23,4)));
L_1803de68a_5:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de68a_6:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803de68a_7:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803de68a_8:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803de68a_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803de68a_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803de68a_11:;
/* 1803de68d: cvtdq2ps xmm0, xmm0 */
L_1803de68d_0:;
L_1803de68d_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803de68d_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803de68d_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803de68d_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803de68d_5:;
/* 1803de690: mulss xmm0, xmm1 */
L_1803de690_0:;
L_1803de690_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803de690_2:;
/* 1803de694: movss dword ptr [r11 - 4], xmm0 */
L_1803de694_0:;
L_1803de694_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803de694_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803de694_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803de694_4:;
/* 1803de69a: jl 0x1803de680 */
L_1803de69a_0:;
L_1803de69a_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803de69a_2:;
if(rd(s->u,12,1)){goto L_1803de680_0;}
L_1803de69a_3:;
return UINT64_C(0x1803de69c);
}
uint64_t b_1803de69c(CPU*s){
/* 1803de69c: mov ecx, r14d */
L_1803de69c_0:;
L_1803de69c_1:;
wr(s->r,8,4,rd(s->r,176,4));
L_1803de69c_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de69c_3:;
/* 1803de69f: call qword ptr [rip + 0x63fb6b] */
L_1803de69f_0:;
L_1803de69f_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e210),8));
L_1803de69f_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de69f_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de6a5)));
L_1803de69f_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de69f_5:;
return UINT64_C(0x1803de6a5);
}
uint64_t b_1803de6a5(CPU*s){
/* 1803de6a5: mov qword ptr [rdi + 0x9f0], rax */
L_1803de6a5_0:;
L_1803de6a5_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9f0))));
L_1803de6a5_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de6a5_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de6a5_4:;
/* 1803de6ac: test rax, rax */
L_1803de6ac_0:;
L_1803de6ac_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de6ac_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de6ac_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de6ac_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de6ac_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de6ac_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de6ac_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de6ac_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de6ac_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de6ac_10:;
/* 1803de6af: je 0x1803de79e */
L_1803de6af_0:;
L_1803de6af_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de6af_2:;
return UINT64_C(0x1803de6b5);
}
uint64_t b_1803de6b5(CPU*s){
/* 1803de6b5: mov ecx, r14d */
L_1803de6b5_0:;
L_1803de6b5_1:;
wr(s->r,8,4,rd(s->r,176,4));
L_1803de6b5_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de6b5_3:;
/* 1803de6b8: call qword ptr [rip + 0x63fb52] */
L_1803de6b8_0:;
L_1803de6b8_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e210),8));
L_1803de6b8_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de6b8_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de6be)));
L_1803de6b8_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de6b8_5:;
return UINT64_C(0x1803de6be);
}
uint64_t b_1803de6be(CPU*s){
/* 1803de6be: mov qword ptr [rdi + 0x9e0], rax */
L_1803de6be_0:;
L_1803de6be_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9e0))));
L_1803de6be_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803de6be_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803de6be_4:;
/* 1803de6c5: test rax, rax */
L_1803de6c5_0:;
L_1803de6c5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de6c5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de6c5_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803de6c5_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de6c5_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803de6c5_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803de6c5_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de6c5_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de6c5_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de6c5_10:;
/* 1803de6c8: je 0x1803de79e */
L_1803de6c8_0:;
L_1803de6c8_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803de79e);}
L_1803de6c8_2:;
return UINT64_C(0x1803de6ce);
}
uint64_t b_1803de6ce(CPU*s){
/* 1803de6ce: mov edx, r14d */
L_1803de6ce_0:;
L_1803de6ce_1:;
wr(s->r,16,4,rd(s->r,176,4));
L_1803de6ce_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de6ce_3:;
/* 1803de6d1: mov rcx, rax */
L_1803de6d1_0:;
L_1803de6d1_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803de6d1_2:;
/* 1803de6d4: call qword ptr [rip + 0x63face] */
L_1803de6d4_0:;
L_1803de6d4_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803de6d4_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de6d4_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de6da)));
L_1803de6d4_4:;
return (uint64_t)rd(s->u,0,8);
L_1803de6d4_5:;
return UINT64_C(0x1803de6da);
}
uint64_t b_1803de6da(CPU*s){
/* 1803de6da: mov rcx, qword ptr [rdi + 0x9f0] */
L_1803de6da_0:;
L_1803de6da_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9f0))));
L_1803de6da_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de6da_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803de6da_4:;
/* 1803de6e1: mov r8d, ebx */
L_1803de6e1_0:;
L_1803de6e1_1:;
wr(s->r,128,4,rd(s->r,24,4));
L_1803de6e1_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803de6e1_3:;
/* 1803de6e4: mov edx, r14d */
L_1803de6e4_0:;
L_1803de6e4_1:;
wr(s->r,16,4,rd(s->r,176,4));
L_1803de6e4_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de6e4_3:;
/* 1803de6e7: call 0x1803ddba0 */
L_1803de6e7_0:;
L_1803de6e7_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de6e7_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de6ec)));
L_1803de6e7_3:;
return (uint64_t)UINT64_C(0x1803ddba0);
L_1803de6e7_4:;
return UINT64_C(0x1803de6ec);
}
uint64_t b_1803de6ec(CPU*s){
/* 1803de6ec: movsxd rcx, r14d */
L_1803de6ec_0:;
L_1803de6ec_1:;
wr(s->r,8,8,(U)sx(rd(s->r,176,4),4));
L_1803de6ec_2:;
/* 1803de6ef: cmp rcx, 4 */
L_1803de6ef_0:;
L_1803de6ef_1:;
wr(s->u,11,8,rd(s->r,8,8));
L_1803de6ef_2:;
wr(s->r,512,1,(rd(s->u,11,8)<((U)UINT64_C(0x4))));
L_1803de6ef_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,11,8),((U)UINT64_C(0x4)),8,1));
L_1803de6ef_4:;
wr(s->u,19,8,(rd(s->u,11,8)-((U)UINT64_C(0x4))));
L_1803de6ef_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de6ef_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803de6ef_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803de6ef_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803de6ef_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803de6ef_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803de6ef_11:;
/* 1803de6f3: jl 0x1803de745 */
L_1803de6f3_0:;
L_1803de6f3_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803de6f3_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803de745);}
L_1803de6f3_3:;
return UINT64_C(0x1803de6f5);
}
uint64_t b_1803de6f5(CPU*s){
/* 1803de6f5: lea rdx, [rcx - 3] */
L_1803de6f5_0:;
L_1803de6f5_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffffd))));
L_1803de6f5_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1803de6f5_3:;
/* 1803de6f9: nop dword ptr [rax] */
L_1803de6f9_0:;
L_1803de6f9_1:;
/* 1803de700: mov rax, qword ptr [rdi + 0x9e0] */
L_1803de700_0:;
L_1803de700_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x9e0))));
L_1803de700_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803de700_3:;
wr(s->r,0,8,rd(s->u,44,8));
L_1803de700_4:;
/* 1803de707: add rsi, 4 */
L_1803de707_0:;
L_1803de707_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803de707_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x4)),8,0));
L_1803de707_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x4))));
L_1803de707_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de707_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803de707_6:;
wr(s->u,53,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803de707_7:;
wr(s->u,61,1,pop(rd(s->u,53,8),8));
L_1803de707_8:;
wr(s->u,62,1,(rd(s->u,61,1)&((U)UINT64_C(0x1))));
L_1803de707_9:;
wr(s->r,514,1,(rd(s->u,62,1)==((U)UINT64_C(0x0))));
L_1803de707_10:;
/* 1803de70b: cmp rsi, rdx */
L_1803de70b_0:;
L_1803de70b_1:;
wr(s->u,63,8,rd(s->r,16,8));
L_1803de70b_2:;
wr(s->r,512,1,(rd(s->r,48,8)<rd(s->u,63,8)));
L_1803de70b_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),rd(s->u,63,8),8,1));
L_1803de70b_4:;
wr(s->u,71,8,(rd(s->r,48,8)-rd(s->u,63,8)));
L_1803de70b_5:;
wr(s->r,519,1,(sx(rd(s->u,71,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de70b_6:;
wr(s->r,518,1,(rd(s->u,71,8)==((U)UINT64_C(0x0))));
L_1803de70b_7:;
wr(s->u,53,8,(rd(s->u,71,8)&((U)UINT64_C(0xff))));
L_1803de70b_8:;
wr(s->u,61,1,pop(rd(s->u,53,8),8));
L_1803de70b_9:;
wr(s->u,62,1,(rd(s->u,61,1)&((U)UINT64_C(0x1))));
L_1803de70b_10:;
wr(s->r,514,1,(rd(s->u,62,1)==((U)UINT64_C(0x0))));
L_1803de70b_11:;
/* 1803de70e: mov dword ptr [rax + rsi*4 - 0x10], 0x3f800000 */
L_1803de70e_0:;
L_1803de70e_1:;
wr(s->u,16,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,0,8)));
L_1803de70e_2:;
wr(s->u,24,8,(rd(s->r,48,8)*((U)UINT64_C(0x4))));
L_1803de70e_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803de70e_4:;
wr(s->u,40,4,((U)UINT64_C(0x3f800000)));
L_1803de70e_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803de70e_6:;
/* 1803de716: mov rax, qword ptr [rdi + 0x9e0] */
L_1803de716_0:;
L_1803de716_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x9e0))));
L_1803de716_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803de716_3:;
wr(s->r,0,8,rd(s->u,44,8));
L_1803de716_4:;
/* 1803de71d: mov dword ptr [rax + rsi*4 - 0xc], 0x3f800000 */
L_1803de71d_0:;
L_1803de71d_1:;
wr(s->u,16,8,(((U)UINT64_C(0xfffffffffffffff4))+rd(s->r,0,8)));
L_1803de71d_2:;
wr(s->u,24,8,(rd(s->r,48,8)*((U)UINT64_C(0x4))));
L_1803de71d_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803de71d_4:;
wr(s->u,40,4,((U)UINT64_C(0x3f800000)));
L_1803de71d_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803de71d_6:;
/* 1803de725: mov rax, qword ptr [rdi + 0x9e0] */
L_1803de725_0:;
L_1803de725_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x9e0))));
L_1803de725_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803de725_3:;
wr(s->r,0,8,rd(s->u,44,8));
L_1803de725_4:;
/* 1803de72c: mov dword ptr [rax + rsi*4 - 8], 0x3f800000 */
L_1803de72c_0:;
L_1803de72c_1:;
wr(s->u,16,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803de72c_2:;
wr(s->u,24,8,(rd(s->r,48,8)*((U)UINT64_C(0x4))));
L_1803de72c_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803de72c_4:;
wr(s->u,40,4,((U)UINT64_C(0x3f800000)));
L_1803de72c_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803de72c_6:;
/* 1803de734: mov rax, qword ptr [rdi + 0x9e0] */
L_1803de734_0:;
L_1803de734_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x9e0))));
L_1803de734_2:;
wr(s->u,44,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803de734_3:;
wr(s->r,0,8,rd(s->u,44,8));
L_1803de734_4:;
/* 1803de73b: mov dword ptr [rax + rsi*4 - 4], 0x3f800000 */
L_1803de73b_0:;
L_1803de73b_1:;
wr(s->u,16,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803de73b_2:;
wr(s->u,24,8,(rd(s->r,48,8)*((U)UINT64_C(0x4))));
L_1803de73b_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803de73b_4:;
wr(s->u,40,4,((U)UINT64_C(0x3f800000)));
L_1803de73b_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803de73b_6:;
/* 1803de743: jl 0x1803de700 */
L_1803de743_0:;
L_1803de743_1:;
wr(s->u,52,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803de743_2:;
if(rd(s->u,52,1)){goto L_1803de700_0;}
L_1803de743_3:;
return UINT64_C(0x1803de745);
}
uint64_t b_1803de700(CPU*s){
/* 1803de700: mov rax, qword ptr [rdi + 0x9e0] */
L_1803de700_0:;
L_1803de700_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9e0))));
L_1803de700_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de700_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803de700_4:;
/* 1803de707: add rsi, 4 */
L_1803de707_0:;
L_1803de707_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803de707_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x4)),8,0));
L_1803de707_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x4))));
L_1803de707_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de707_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803de707_6:;
wr(s->u,45,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803de707_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803de707_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803de707_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803de707_10:;
/* 1803de70b: cmp rsi, rdx */
L_1803de70b_0:;
L_1803de70b_1:;
wr(s->u,55,8,rd(s->r,16,8));
L_1803de70b_2:;
wr(s->r,512,1,(rd(s->r,48,8)<rd(s->u,55,8)));
L_1803de70b_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),rd(s->u,55,8),8,1));
L_1803de70b_4:;
wr(s->u,63,8,(rd(s->r,48,8)-rd(s->u,55,8)));
L_1803de70b_5:;
wr(s->r,519,1,(sx(rd(s->u,63,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de70b_6:;
wr(s->r,518,1,(rd(s->u,63,8)==((U)UINT64_C(0x0))));
L_1803de70b_7:;
wr(s->u,45,8,(rd(s->u,63,8)&((U)UINT64_C(0xff))));
L_1803de70b_8:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803de70b_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803de70b_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803de70b_11:;
/* 1803de70e: mov dword ptr [rax + rsi*4 - 0x10], 0x3f800000 */
L_1803de70e_0:;
L_1803de70e_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,0,8)));
L_1803de70e_2:;
wr(s->u,16,8,(rd(s->r,48,8)*((U)UINT64_C(0x4))));
L_1803de70e_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803de70e_4:;
wr(s->u,32,4,((U)UINT64_C(0x3f800000)));
L_1803de70e_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803de70e_6:;
/* 1803de716: mov rax, qword ptr [rdi + 0x9e0] */
L_1803de716_0:;
L_1803de716_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9e0))));
L_1803de716_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de716_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803de716_4:;
/* 1803de71d: mov dword ptr [rax + rsi*4 - 0xc], 0x3f800000 */
L_1803de71d_0:;
L_1803de71d_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff4))+rd(s->r,0,8)));
L_1803de71d_2:;
wr(s->u,16,8,(rd(s->r,48,8)*((U)UINT64_C(0x4))));
L_1803de71d_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803de71d_4:;
wr(s->u,32,4,((U)UINT64_C(0x3f800000)));
L_1803de71d_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803de71d_6:;
/* 1803de725: mov rax, qword ptr [rdi + 0x9e0] */
L_1803de725_0:;
L_1803de725_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9e0))));
L_1803de725_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de725_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803de725_4:;
/* 1803de72c: mov dword ptr [rax + rsi*4 - 8], 0x3f800000 */
L_1803de72c_0:;
L_1803de72c_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,0,8)));
L_1803de72c_2:;
wr(s->u,16,8,(rd(s->r,48,8)*((U)UINT64_C(0x4))));
L_1803de72c_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803de72c_4:;
wr(s->u,32,4,((U)UINT64_C(0x3f800000)));
L_1803de72c_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803de72c_6:;
/* 1803de734: mov rax, qword ptr [rdi + 0x9e0] */
L_1803de734_0:;
L_1803de734_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9e0))));
L_1803de734_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de734_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803de734_4:;
/* 1803de73b: mov dword ptr [rax + rsi*4 - 4], 0x3f800000 */
L_1803de73b_0:;
L_1803de73b_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803de73b_2:;
wr(s->u,16,8,(rd(s->r,48,8)*((U)UINT64_C(0x4))));
L_1803de73b_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803de73b_4:;
wr(s->u,32,4,((U)UINT64_C(0x3f800000)));
L_1803de73b_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803de73b_6:;
/* 1803de743: jl 0x1803de700 */
L_1803de743_0:;
L_1803de743_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803de743_2:;
if(rd(s->u,44,1)){goto L_1803de700_0;}
L_1803de743_3:;
return UINT64_C(0x1803de745);
}
uint64_t b_1803de745(CPU*s){
/* 1803de745: cmp rsi, rcx */
L_1803de745_0:;
L_1803de745_1:;
wr(s->u,11,8,rd(s->r,8,8));
L_1803de745_2:;
wr(s->r,512,1,(rd(s->r,48,8)<rd(s->u,11,8)));
L_1803de745_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),rd(s->u,11,8),8,1));
L_1803de745_4:;
wr(s->u,19,8,(rd(s->r,48,8)-rd(s->u,11,8)));
L_1803de745_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de745_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803de745_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803de745_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803de745_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803de745_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803de745_11:;
/* 1803de748: jge 0x1803de761 */
L_1803de748_0:;
L_1803de748_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803de748_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803de761);}
L_1803de748_3:;
return UINT64_C(0x1803de74a);
}
uint64_t b_1803de74a(CPU*s){
/* 1803de74a: mov rax, qword ptr [rdi + 0x9e0] */
L_1803de74a_0:;
L_1803de74a_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9e0))));
L_1803de74a_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de74a_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803de74a_4:;
/* 1803de751: inc rsi */
L_1803de751_0:;
L_1803de751_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x1)),8,0));
L_1803de751_2:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x1))));
L_1803de751_3:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de751_4:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803de751_5:;
wr(s->u,45,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803de751_6:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803de751_7:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803de751_8:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803de751_9:;
/* 1803de754: cmp rsi, rcx */
L_1803de754_0:;
L_1803de754_1:;
wr(s->u,55,8,rd(s->r,8,8));
L_1803de754_2:;
wr(s->r,512,1,(rd(s->r,48,8)<rd(s->u,55,8)));
L_1803de754_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),rd(s->u,55,8),8,1));
L_1803de754_4:;
wr(s->u,63,8,(rd(s->r,48,8)-rd(s->u,55,8)));
L_1803de754_5:;
wr(s->r,519,1,(sx(rd(s->u,63,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de754_6:;
wr(s->r,518,1,(rd(s->u,63,8)==((U)UINT64_C(0x0))));
L_1803de754_7:;
wr(s->u,45,8,(rd(s->u,63,8)&((U)UINT64_C(0xff))));
L_1803de754_8:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803de754_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803de754_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803de754_11:;
/* 1803de757: mov dword ptr [rax + rsi*4 - 4], 0x3f800000 */
L_1803de757_0:;
L_1803de757_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,0,8)));
L_1803de757_2:;
wr(s->u,16,8,(rd(s->r,48,8)*((U)UINT64_C(0x4))));
L_1803de757_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803de757_4:;
wr(s->u,32,4,((U)UINT64_C(0x3f800000)));
L_1803de757_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803de757_6:;
/* 1803de75f: jl 0x1803de74a */
L_1803de75f_0:;
L_1803de75f_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803de75f_2:;
if(rd(s->u,44,1)){goto L_1803de74a_0;}
L_1803de75f_3:;
return UINT64_C(0x1803de761);
}
uint64_t b_1803de761(CPU*s){
/* 1803de761: mov r8d, dword ptr [rsp + 0x90] */
L_1803de761_0:;
L_1803de761_1:;
wr(s->u,16,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803de761_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803de761_3:;
wr(s->r,128,4,rd(s->u,28,4));
L_1803de761_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803de761_5:;
/* 1803de769: mov rdx, qword ptr [rdi + 0x9f0] */
L_1803de769_0:;
L_1803de769_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9f0))));
L_1803de769_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de769_3:;
wr(s->r,16,8,rd(s->u,32,8));
L_1803de769_4:;
/* 1803de770: mov rcx, qword ptr [rdi + 0x9e0] */
L_1803de770_0:;
L_1803de770_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9e0))));
L_1803de770_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de770_3:;
wr(s->r,8,8,rd(s->u,32,8));
L_1803de770_4:;
/* 1803de777: mov r9d, r14d */
L_1803de777_0:;
L_1803de777_1:;
wr(s->r,136,4,rd(s->r,176,4));
L_1803de777_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803de777_3:;
/* 1803de77a: mov dword ptr [rsp + 0x20], r14d */
L_1803de77a_0:;
L_1803de77a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803de77a_2:;
wr(s->u,24,4,rd(s->r,176,4));
L_1803de77a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803de77a_4:;
/* 1803de77f: call 0x1803ddd40 */
L_1803de77f_0:;
L_1803de77f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de77f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de784)));
L_1803de77f_3:;
return (uint64_t)UINT64_C(0x1803ddd40);
L_1803de77f_4:;
return UINT64_C(0x1803de784);
}
uint64_t b_1803de784(CPU*s){
/* 1803de784: xor eax, eax */
L_1803de784_0:;
L_1803de784_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de784_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de784_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803de784_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803de784_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de784_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803de784_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803de784_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803de784_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de784_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de784_11:;
/* 1803de786: mov rbx, qword ptr [rsp + 0x80] */
L_1803de786_0:;
L_1803de786_1:;
wr(s->u,0,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803de786_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de786_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803de786_4:;
/* 1803de78e: add rsp, 0x30 */
L_1803de78e_0:;
L_1803de78e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803de78e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803de78e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803de78e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de78e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803de78e_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803de78e_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de78e_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de78e_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de78e_10:;
/* 1803de792: pop r15 */
L_1803de792_0:;
L_1803de792_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803de792_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803de792_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803de792_4:;
wr(s->r,184,8,rd(s->u,26,8));
L_1803de792_5:;
/* 1803de794: pop r14 */
L_1803de794_0:;
L_1803de794_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803de794_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803de794_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803de794_4:;
wr(s->r,176,8,rd(s->u,26,8));
L_1803de794_5:;
/* 1803de796: pop r13 */
L_1803de796_0:;
L_1803de796_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803de796_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803de796_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803de796_4:;
wr(s->r,168,8,rd(s->u,26,8));
L_1803de796_5:;
/* 1803de798: pop r12 */
L_1803de798_0:;
L_1803de798_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803de798_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803de798_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803de798_4:;
wr(s->r,160,8,rd(s->u,26,8));
L_1803de798_5:;
/* 1803de79a: pop rdi */
L_1803de79a_0:;
L_1803de79a_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803de79a_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803de79a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803de79a_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803de79a_5:;
/* 1803de79b: pop rsi */
L_1803de79b_0:;
L_1803de79b_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803de79b_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803de79b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803de79b_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1803de79b_5:;
/* 1803de79c: pop rbp */
L_1803de79c_0:;
L_1803de79c_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803de79c_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803de79c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803de79c_4:;
wr(s->r,40,8,rd(s->u,26,8));
L_1803de79c_5:;
/* 1803de79d: ret  */
L_1803de79d_0:;
L_1803de79d_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803de79d_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803de79d_3:;
return (uint64_t)rd(s->r,648,8);
L_1803de79d_4:;
return UINT64_C(0x1803de79e);
}
uint64_t b_1803de786(CPU*s){
/* 1803de786: mov rbx, qword ptr [rsp + 0x80] */
L_1803de786_0:;
L_1803de786_1:;
wr(s->u,0,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803de786_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de786_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803de786_4:;
/* 1803de78e: add rsp, 0x30 */
L_1803de78e_0:;
L_1803de78e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803de78e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803de78e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803de78e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de78e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803de78e_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803de78e_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803de78e_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803de78e_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803de78e_10:;
/* 1803de792: pop r15 */
L_1803de792_0:;
L_1803de792_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803de792_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803de792_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803de792_4:;
wr(s->r,184,8,rd(s->u,26,8));
L_1803de792_5:;
/* 1803de794: pop r14 */
L_1803de794_0:;
L_1803de794_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803de794_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803de794_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803de794_4:;
wr(s->r,176,8,rd(s->u,26,8));
L_1803de794_5:;
/* 1803de796: pop r13 */
L_1803de796_0:;
L_1803de796_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803de796_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803de796_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803de796_4:;
wr(s->r,168,8,rd(s->u,26,8));
L_1803de796_5:;
/* 1803de798: pop r12 */
L_1803de798_0:;
L_1803de798_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803de798_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803de798_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803de798_4:;
wr(s->r,160,8,rd(s->u,26,8));
L_1803de798_5:;
/* 1803de79a: pop rdi */
L_1803de79a_0:;
L_1803de79a_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803de79a_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803de79a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803de79a_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803de79a_5:;
/* 1803de79b: pop rsi */
L_1803de79b_0:;
L_1803de79b_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803de79b_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803de79b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803de79b_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1803de79b_5:;
/* 1803de79c: pop rbp */
L_1803de79c_0:;
L_1803de79c_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803de79c_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803de79c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803de79c_4:;
wr(s->r,40,8,rd(s->u,26,8));
L_1803de79c_5:;
/* 1803de79d: ret  */
L_1803de79d_0:;
L_1803de79d_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803de79d_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803de79d_3:;
return (uint64_t)rd(s->r,648,8);
L_1803de79d_4:;
return UINT64_C(0x1803de79e);
}
uint64_t b_1803de79e(CPU*s){
/* 1803de79e: mov eax, 0xf4241 */
L_1803de79e_0:;
L_1803de79e_1:;
wr(s->r,0,8,((U)UINT64_C(0xf4241)));
L_1803de79e_2:;
/* 1803de7a3: jmp 0x1803de786 */
L_1803de7a3_0:;
L_1803de7a3_1:;
return UINT64_C(0x1803de786);
L_1803de7a3_2:;
return UINT64_C(0x1803de7a5);
}
uint64_t b_1803de7c0(CPU*s){
/* 1803de7c0: mov dword ptr [rsp + 0x20], r9d */
L_1803de7c0_0:;
L_1803de7c0_1:;
wr(s->u,21,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803de7c0_2:;
wr(s->u,37,4,rd(s->r,136,4));
L_1803de7c0_3:;
mw((uint64_t)rd(s->u,21,8),4,rd(s->u,37,4));
L_1803de7c0_4:;
/* 1803de7c5: mov qword ptr [rsp + 0x18], r8 */
L_1803de7c5_0:;
L_1803de7c5_1:;
wr(s->u,21,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803de7c5_2:;
wr(s->u,41,8,rd(s->r,128,8));
L_1803de7c5_3:;
mw((uint64_t)rd(s->u,21,8),8,rd(s->u,41,8));
L_1803de7c5_4:;
/* 1803de7ca: mov qword ptr [rsp + 0x10], rdx */
L_1803de7ca_0:;
L_1803de7ca_1:;
wr(s->u,21,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803de7ca_2:;
wr(s->u,41,8,rd(s->r,16,8));
L_1803de7ca_3:;
mw((uint64_t)rd(s->u,21,8),8,rd(s->u,41,8));
L_1803de7ca_4:;
/* 1803de7cf: mov qword ptr [rsp + 8], rcx */
L_1803de7cf_0:;
L_1803de7cf_1:;
wr(s->u,21,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803de7cf_2:;
wr(s->u,41,8,rd(s->r,8,8));
L_1803de7cf_3:;
mw((uint64_t)rd(s->u,21,8),8,rd(s->u,41,8));
L_1803de7cf_4:;
/* 1803de7d4: push rbx */
L_1803de7d4_0:;
L_1803de7d4_1:;
wr(s->u,77,8,rd(s->r,24,8));
L_1803de7d4_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de7d4_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,77,8));
L_1803de7d4_4:;
/* 1803de7d5: push rbp */
L_1803de7d5_0:;
L_1803de7d5_1:;
wr(s->u,77,8,rd(s->r,40,8));
L_1803de7d5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de7d5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,77,8));
L_1803de7d5_4:;
/* 1803de7d6: push rsi */
L_1803de7d6_0:;
L_1803de7d6_1:;
wr(s->u,77,8,rd(s->r,48,8));
L_1803de7d6_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de7d6_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,77,8));
L_1803de7d6_4:;
/* 1803de7d7: push rdi */
L_1803de7d7_0:;
L_1803de7d7_1:;
wr(s->u,77,8,rd(s->r,56,8));
L_1803de7d7_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de7d7_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,77,8));
L_1803de7d7_4:;
/* 1803de7d8: push r12 */
L_1803de7d8_0:;
L_1803de7d8_1:;
wr(s->u,77,8,rd(s->r,160,8));
L_1803de7d8_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de7d8_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,77,8));
L_1803de7d8_4:;
/* 1803de7da: push r13 */
L_1803de7da_0:;
L_1803de7da_1:;
wr(s->u,77,8,rd(s->r,168,8));
L_1803de7da_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de7da_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,77,8));
L_1803de7da_4:;
/* 1803de7dc: push r14 */
L_1803de7dc_0:;
L_1803de7dc_1:;
wr(s->u,77,8,rd(s->r,176,8));
L_1803de7dc_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de7dc_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,77,8));
L_1803de7dc_4:;
/* 1803de7de: push r15 */
L_1803de7de_0:;
L_1803de7de_1:;
wr(s->u,77,8,rd(s->r,184,8));
L_1803de7de_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de7de_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,77,8));
L_1803de7de_4:;
/* 1803de7e0: sub rsp, 0x178 */
L_1803de7e0_0:;
L_1803de7e0_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x178))));
L_1803de7e0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x178)),8,1));
L_1803de7e0_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x178))));
L_1803de7e0_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803de7e0_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803de7e0_6:;
wr(s->u,85,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803de7e0_7:;
wr(s->u,93,1,pop(rd(s->u,85,8),8));
L_1803de7e0_8:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803de7e0_9:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803de7e0_10:;
/* 1803de7e7: mov eax, dword ptr [rcx + 0x14] */
L_1803de7e7_0:;
L_1803de7e7_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x14))));
L_1803de7e7_2:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803de7e7_3:;
wr(s->r,0,4,rd(s->u,65,4));
L_1803de7e7_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803de7e7_5:;
/* 1803de7ea: mov rsi, rcx */
L_1803de7ea_0:;
L_1803de7ea_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1803de7ea_2:;
/* 1803de7ed: movaps xmmword ptr [rsp + 0x120], xmm10 */
L_1803de7ed_0:;
L_1803de7ed_1:;
wr(s->u,29,8,(((U)UINT64_C(0x120))+rd(s->r,32,8)));
L_1803de7ed_2:;
wr(s->u,49,16,rd(s->r,5248,16));
L_1803de7ed_3:;
mw((uint64_t)rd(s->u,29,8),16,rd(s->u,49,16));
L_1803de7ed_4:;
/* 1803de7f6: mov edx, dword ptr [rsi + 0x10] */
L_1803de7f6_0:;
L_1803de7f6_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x10))));
L_1803de7f6_2:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803de7f6_3:;
wr(s->r,16,4,rd(s->u,65,4));
L_1803de7f6_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de7f6_5:;
/* 1803de7f9: mov r11, qword ptr [rsi + 0x810] */
L_1803de7f9_0:;
L_1803de7f9_1:;
wr(s->u,13,8,(rd(s->r,48,8)+((U)UINT64_C(0x810))));
L_1803de7f9_2:;
wr(s->u,69,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803de7f9_3:;
wr(s->r,152,8,rd(s->u,69,8));
L_1803de7f9_4:;
/* 1803de800: mov rdi, qword ptr [rsi + 0x680] */
L_1803de800_0:;
L_1803de800_1:;
wr(s->u,13,8,(rd(s->r,48,8)+((U)UINT64_C(0x680))));
L_1803de800_2:;
wr(s->u,69,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803de800_3:;
wr(s->r,56,8,rd(s->u,69,8));
L_1803de800_4:;
/* 1803de807: movss xmm10, dword ptr [rsi + 0x9c8] */
L_1803de807_0:;
L_1803de807_1:;
wr(s->u,13,8,(rd(s->r,48,8)+((U)UINT64_C(0x9c8))));
L_1803de807_2:;
wr(s->u,37,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803de807_3:;
wr(s->r,5248,4,rd(s->u,37,4));
L_1803de807_4:;
wr(s->r,5252,4,((U)UINT64_C(0x0)));
L_1803de807_5:;
wr(s->r,5256,4,((U)UINT64_C(0x0)));
L_1803de807_6:;
wr(s->r,5260,4,((U)UINT64_C(0x0)));
L_1803de807_7:;
/* 1803de810: mov rbx, qword ptr [rsi + 0x830] */
L_1803de810_0:;
L_1803de810_1:;
wr(s->u,13,8,(rd(s->r,48,8)+((U)UINT64_C(0x830))));
L_1803de810_2:;
wr(s->u,69,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803de810_3:;
wr(s->r,24,8,rd(s->u,69,8));
L_1803de810_4:;
/* 1803de817: mov r10, qword ptr [rsi + 0x818] */
L_1803de817_0:;
L_1803de817_1:;
wr(s->u,13,8,(rd(s->r,48,8)+((U)UINT64_C(0x818))));
L_1803de817_2:;
wr(s->u,69,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803de817_3:;
wr(s->r,144,8,rd(s->u,69,8));
L_1803de817_4:;
/* 1803de81e: mov dword ptr [rsp + 0x7c], eax */
L_1803de81e_0:;
L_1803de81e_1:;
wr(s->u,21,8,(((U)UINT64_C(0x7c))+rd(s->r,32,8)));
L_1803de81e_2:;
wr(s->u,37,4,rd(s->r,0,4));
L_1803de81e_3:;
mw((uint64_t)rd(s->u,21,8),4,rd(s->u,37,4));
L_1803de81e_4:;
/* 1803de822: mov eax, dword ptr [rcx + 4] */
L_1803de822_0:;
L_1803de822_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803de822_2:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803de822_3:;
wr(s->r,0,4,rd(s->u,65,4));
L_1803de822_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803de822_5:;
/* 1803de825: mov ecx, dword ptr [rcx + 8] */
L_1803de825_0:;
L_1803de825_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803de825_2:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803de825_3:;
wr(s->r,8,4,rd(s->u,65,4));
L_1803de825_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de825_5:;
/* 1803de828: mov dword ptr [rsp + 0x80], edx */
L_1803de828_0:;
L_1803de828_1:;
wr(s->u,29,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803de828_2:;
wr(s->u,37,4,rd(s->r,16,4));
L_1803de828_3:;
mw((uint64_t)rd(s->u,29,8),4,rd(s->u,37,4));
L_1803de828_4:;
/* 1803de82f: mov r14d, eax */
L_1803de82f_0:;
L_1803de82f_1:;
wr(s->r,176,4,rd(s->r,0,4));
L_1803de82f_2:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803de82f_3:;
/* 1803de832: mov dword ptr [rsp + 0x44], eax */
L_1803de832_0:;
L_1803de832_1:;
wr(s->u,21,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1803de832_2:;
wr(s->u,37,4,rd(s->r,0,4));
L_1803de832_3:;
mw((uint64_t)rd(s->u,21,8),4,rd(s->u,37,4));
L_1803de832_4:;
/* 1803de836: shl eax, 2 */
L_1803de836_0:;
L_1803de836_1:;
wr(s->u,127,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803de836_2:;
wr(s->u,131,4,rd(s->r,0,4));
L_1803de836_3:;
wr(s->r,0,4,((rd(s->u,127,4)>=32)?0:(rd(s->r,0,4)<<rd(s->u,127,4))));
L_1803de836_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803de836_5:;
wr(s->u,114,1,(rd(s->u,127,4)==((U)UINT64_C(0x0))));
L_1803de836_6:;
wr(s->u,115,4,(rd(s->u,127,4)-((U)UINT64_C(0x1))));
L_1803de836_7:;
wr(s->u,119,4,((rd(s->u,115,4)>=32)?0:(rd(s->u,131,4)<<rd(s->u,115,4))));
L_1803de836_8:;
wr(s->u,123,1,(sx(rd(s->u,119,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de836_9:;
wr(s->u,0,1,rd(s->u,114,1));
L_1803de836_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803de836_11:;
wr(s->u,2,1,(!rd(s->u,114,1)));
L_1803de836_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803de836_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,123,1)));
L_1803de836_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803de836_15:;
wr(s->u,124,1,(rd(s->u,127,4)==((U)UINT64_C(0x1))));
L_1803de836_16:;
wr(s->u,125,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de836_17:;
wr(s->u,126,1,(rd(s->r,512,1)^rd(s->u,125,1)));
L_1803de836_18:;
wr(s->u,0,1,rd(s->u,124,1));
L_1803de836_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,126,1)));
L_1803de836_20:;
wr(s->u,2,1,(!rd(s->u,124,1)));
L_1803de836_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803de836_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803de836_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803de836_24:;
wr(s->u,95,1,(rd(s->u,127,4)!=((U)UINT64_C(0x0))));
L_1803de836_25:;
wr(s->u,96,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de836_26:;
wr(s->u,97,1,(!rd(s->u,95,1)));
L_1803de836_27:;
wr(s->u,98,1,(rd(s->u,97,1)&rd(s->r,519,1)));
L_1803de836_28:;
wr(s->u,99,1,(rd(s->u,95,1)&rd(s->u,96,1)));
L_1803de836_29:;
wr(s->r,519,1,(rd(s->u,98,1)|rd(s->u,99,1)));
L_1803de836_30:;
wr(s->u,100,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803de836_31:;
wr(s->u,101,1,(!rd(s->u,95,1)));
L_1803de836_32:;
wr(s->u,102,1,(rd(s->u,101,1)&rd(s->r,518,1)));
L_1803de836_33:;
wr(s->u,103,1,(rd(s->u,95,1)&rd(s->u,100,1)));
L_1803de836_34:;
wr(s->r,518,1,(rd(s->u,102,1)|rd(s->u,103,1)));
L_1803de836_35:;
wr(s->u,104,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803de836_36:;
wr(s->u,108,1,pop(rd(s->u,104,4),4));
L_1803de836_37:;
wr(s->u,109,1,(rd(s->u,108,1)&((U)UINT64_C(0x1))));
L_1803de836_38:;
wr(s->u,110,1,(rd(s->u,109,1)==((U)UINT64_C(0x0))));
L_1803de836_39:;
wr(s->u,111,1,(!rd(s->u,95,1)));
L_1803de836_40:;
wr(s->u,112,1,(rd(s->u,111,1)&rd(s->r,514,1)));
L_1803de836_41:;
wr(s->u,113,1,(rd(s->u,95,1)&rd(s->u,110,1)));
L_1803de836_42:;
wr(s->r,514,1,(rd(s->u,112,1)|rd(s->u,113,1)));
L_1803de836_43:;
/* 1803de839: mov dword ptr [rsp + 0xd0], eax */
L_1803de839_0:;
L_1803de839_1:;
wr(s->u,29,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803de839_2:;
wr(s->u,37,4,rd(s->r,0,4));
L_1803de839_3:;
mw((uint64_t)rd(s->u,29,8),4,rd(s->u,37,4));
L_1803de839_4:;
/* 1803de840: mov dword ptr [rsp + 0x90], ecx */
L_1803de840_0:;
L_1803de840_1:;
wr(s->u,29,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803de840_2:;
wr(s->u,37,4,rd(s->r,8,4));
L_1803de840_3:;
mw((uint64_t)rd(s->u,29,8),4,rd(s->u,37,4));
L_1803de840_4:;
/* 1803de847: mov ecx, dword ptr [rsi + 0xc] */
L_1803de847_0:;
L_1803de847_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0xc))));
L_1803de847_2:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803de847_3:;
wr(s->r,8,4,rd(s->u,65,4));
L_1803de847_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de847_5:;
return UINT64_C(0x1803de84a);
}
uint64_t b_1803de84a(CPU*s){
/* 1803de84a: lea eax, [rcx*4] */
L_1803de84a_0:;
L_1803de84a_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803de84a_2:;
wr(s->r,0,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de84a_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803de84a_4:;
/* 1803de851: sar r14d, 1 */
L_1803de851_0:;
L_1803de851_1:;
wr(s->u,70,4,(rd(s->r,176,4)&((U)UINT64_C(0x1))));
L_1803de851_2:;
wr(s->r,512,1,(rd(s->u,70,4)!=((U)UINT64_C(0x0))));
L_1803de851_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de851_4:;
wr(s->r,176,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,176,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,176,4),4)>>((U)UINT64_C(0x1)))));
L_1803de851_5:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803de851_6:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de851_7:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803de851_8:;
wr(s->u,64,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803de851_9:;
wr(s->u,68,1,pop(rd(s->u,64,4),4));
L_1803de851_10:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803de851_11:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803de851_12:;
/* 1803de854: mov qword ptr [rsp + 0xd8], r11 */
L_1803de854_0:;
L_1803de854_1:;
wr(s->u,32,8,(((U)UINT64_C(0xd8))+rd(s->r,32,8)));
L_1803de854_2:;
wr(s->u,44,8,rd(s->r,152,8));
L_1803de854_3:;
mw((uint64_t)rd(s->u,32,8),8,rd(s->u,44,8));
L_1803de854_4:;
/* 1803de85c: mov dword ptr [rsp + 0xb8], eax */
L_1803de85c_0:;
L_1803de85c_1:;
wr(s->u,32,8,(((U)UINT64_C(0xb8))+rd(s->r,32,8)));
L_1803de85c_2:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803de85c_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803de85c_4:;
/* 1803de863: mov eax, dword ptr [rsi + 0x18] */
L_1803de863_0:;
L_1803de863_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x18))));
L_1803de863_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803de863_3:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803de863_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803de863_5:;
/* 1803de866: mov dword ptr [rsp + 0x78], ecx */
L_1803de866_0:;
L_1803de866_1:;
wr(s->u,24,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803de866_2:;
wr(s->u,40,4,rd(s->r,8,4));
L_1803de866_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,40,4));
L_1803de866_4:;
/* 1803de86a: mov dword ptr [rsp + 0x20], eax */
L_1803de86a_0:;
L_1803de86a_1:;
wr(s->u,24,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803de86a_2:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803de86a_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,40,4));
L_1803de86a_4:;
/* 1803de86e: sar eax, 1 */
L_1803de86e_0:;
L_1803de86e_1:;
wr(s->u,70,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803de86e_2:;
wr(s->r,512,1,(rd(s->u,70,4)!=((U)UINT64_C(0x0))));
L_1803de86e_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de86e_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803de86e_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803de86e_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de86e_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803de86e_8:;
wr(s->u,64,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803de86e_9:;
wr(s->u,68,1,pop(rd(s->u,64,4),4));
L_1803de86e_10:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803de86e_11:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803de86e_12:;
/* 1803de870: mov qword ptr [rsp + 0xf0], rdi */
L_1803de870_0:;
L_1803de870_1:;
wr(s->u,32,8,(((U)UINT64_C(0xf0))+rd(s->r,32,8)));
L_1803de870_2:;
wr(s->u,44,8,rd(s->r,56,8));
L_1803de870_3:;
mw((uint64_t)rd(s->u,32,8),8,rd(s->u,44,8));
L_1803de870_4:;
/* 1803de878: mov dword ptr [rsp + 0x28], eax */
L_1803de878_0:;
L_1803de878_1:;
wr(s->u,24,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803de878_2:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803de878_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,40,4));
L_1803de878_4:;
/* 1803de87c: mov rax, qword ptr [rsi + 0x360] */
L_1803de87c_0:;
L_1803de87c_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x360))));
L_1803de87c_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803de87c_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803de87c_4:;
/* 1803de883: mov qword ptr [rsp + 0x38], rbx */
L_1803de883_0:;
L_1803de883_1:;
wr(s->u,24,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803de883_2:;
wr(s->u,44,8,rd(s->r,24,8));
L_1803de883_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,44,8));
L_1803de883_4:;
/* 1803de888: mov qword ptr [rsp + 0xf8], rax */
L_1803de888_0:;
L_1803de888_1:;
wr(s->u,32,8,(((U)UINT64_C(0xf8))+rd(s->r,32,8)));
L_1803de888_2:;
wr(s->u,44,8,rd(s->r,0,8));
L_1803de888_3:;
mw((uint64_t)rd(s->u,32,8),8,rd(s->u,44,8));
L_1803de888_4:;
/* 1803de890: mov rax, qword ptr [rsi + 0x368] */
L_1803de890_0:;
L_1803de890_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x368))));
L_1803de890_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803de890_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803de890_4:;
/* 1803de897: mov qword ptr [rsp + 0x30], r10 */
L_1803de897_0:;
L_1803de897_1:;
wr(s->u,24,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803de897_2:;
wr(s->u,44,8,rd(s->r,144,8));
L_1803de897_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,44,8));
L_1803de897_4:;
/* 1803de89c: mov qword ptr [rsp + 0x100], rax */
L_1803de89c_0:;
L_1803de89c_1:;
wr(s->u,32,8,(((U)UINT64_C(0x100))+rd(s->r,32,8)));
L_1803de89c_2:;
wr(s->u,44,8,rd(s->r,0,8));
L_1803de89c_3:;
mw((uint64_t)rd(s->u,32,8),8,rd(s->u,44,8));
L_1803de89c_4:;
/* 1803de8a4: mov rax, qword ptr [rsi + 0x678] */
L_1803de8a4_0:;
L_1803de8a4_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x678))));
L_1803de8a4_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803de8a4_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803de8a4_4:;
/* 1803de8ab: mov qword ptr [rsp + 0xa8], rax */
L_1803de8ab_0:;
L_1803de8ab_1:;
wr(s->u,32,8,(((U)UINT64_C(0xa8))+rd(s->r,32,8)));
L_1803de8ab_2:;
wr(s->u,44,8,rd(s->r,0,8));
L_1803de8ab_3:;
mw((uint64_t)rd(s->u,32,8),8,rd(s->u,44,8));
L_1803de8ab_4:;
/* 1803de8b3: mov rax, qword ptr [rsi + 0x9e0] */
L_1803de8b3_0:;
L_1803de8b3_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x9e0))));
L_1803de8b3_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803de8b3_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803de8b3_4:;
/* 1803de8ba: mov qword ptr [rsp + 0xb0], rax */
L_1803de8ba_0:;
L_1803de8ba_1:;
wr(s->u,32,8,(((U)UINT64_C(0xb0))+rd(s->r,32,8)));
L_1803de8ba_2:;
wr(s->u,44,8,rd(s->r,0,8));
L_1803de8ba_3:;
mw((uint64_t)rd(s->u,32,8),8,rd(s->u,44,8));
L_1803de8ba_4:;
/* 1803de8c2: mov rax, qword ptr [rsi + 0x820] */
L_1803de8c2_0:;
L_1803de8c2_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x820))));
L_1803de8c2_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803de8c2_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803de8c2_4:;
/* 1803de8c9: mov qword ptr [rsp + 0x88], rax */
L_1803de8c9_0:;
L_1803de8c9_1:;
wr(s->u,32,8,(((U)UINT64_C(0x88))+rd(s->r,32,8)));
L_1803de8c9_2:;
wr(s->u,44,8,rd(s->r,0,8));
L_1803de8c9_3:;
mw((uint64_t)rd(s->u,32,8),8,rd(s->u,44,8));
L_1803de8c9_4:;
/* 1803de8d1: mov rax, qword ptr [rsi + 0x828] */
L_1803de8d1_0:;
L_1803de8d1_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x828))));
L_1803de8d1_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803de8d1_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803de8d1_4:;
/* 1803de8d8: mov qword ptr [rsp + 0x98], rax */
L_1803de8d8_0:;
L_1803de8d8_1:;
wr(s->u,32,8,(((U)UINT64_C(0x98))+rd(s->r,32,8)));
L_1803de8d8_2:;
wr(s->u,44,8,rd(s->r,0,8));
L_1803de8d8_3:;
mw((uint64_t)rd(s->u,32,8),8,rd(s->u,44,8));
L_1803de8d8_4:;
/* 1803de8e0: mov rax, qword ptr [rsi + 0x8a10] */
L_1803de8e0_0:;
L_1803de8e0_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x8a10))));
L_1803de8e0_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803de8e0_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803de8e0_4:;
/* 1803de8e7: mov qword ptr [rsp + 0x58], rax */
L_1803de8e7_0:;
L_1803de8e7_1:;
wr(s->u,24,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803de8e7_2:;
wr(s->u,44,8,rd(s->r,0,8));
L_1803de8e7_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,44,8));
L_1803de8e7_4:;
/* 1803de8ec: mov rax, qword ptr [rsi + 0x9e8] */
L_1803de8ec_0:;
L_1803de8ec_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x9e8))));
L_1803de8ec_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803de8ec_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803de8ec_4:;
/* 1803de8f3: mov qword ptr [rsp + 0x50], rax */
L_1803de8f3_0:;
L_1803de8f3_1:;
wr(s->u,24,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803de8f3_2:;
wr(s->u,44,8,rd(s->r,0,8));
L_1803de8f3_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,44,8));
L_1803de8f3_4:;
/* 1803de8f8: mov rax, qword ptr [rsi + 0x9f0] */
L_1803de8f8_0:;
L_1803de8f8_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x9f0))));
L_1803de8f8_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803de8f8_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803de8f8_4:;
/* 1803de8ff: mov qword ptr [rsp + 0x68], rax */
L_1803de8ff_0:;
L_1803de8ff_1:;
wr(s->u,24,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803de8ff_2:;
wr(s->u,44,8,rd(s->r,0,8));
L_1803de8ff_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,44,8));
L_1803de8ff_4:;
/* 1803de904: mov rax, qword ptr [rsi + 0x8a20] */
L_1803de904_0:;
L_1803de904_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x8a20))));
L_1803de904_2:;
wr(s->u,56,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803de904_3:;
wr(s->r,0,8,rd(s->u,56,8));
L_1803de904_4:;
/* 1803de90b: mov qword ptr [rsp + 0x60], rax */
L_1803de90b_0:;
L_1803de90b_1:;
wr(s->u,24,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803de90b_2:;
wr(s->u,44,8,rd(s->r,0,8));
L_1803de90b_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,44,8));
L_1803de90b_4:;
return UINT64_C(0x1803de910);
}
uint64_t b_1803de910(CPU*s){
/* 1803de910: mov eax, 0x66666667 */
L_1803de910_0:;
L_1803de910_1:;
wr(s->r,0,8,((U)UINT64_C(0x66666667)));
L_1803de910_2:;
/* 1803de915: imul r9d */
L_1803de915_0:;
L_1803de915_1:;
wr(s->u,75,8,(U)sx(rd(s->r,0,4),4));
L_1803de915_2:;
wr(s->u,83,8,(U)sx(rd(s->r,136,4),4));
L_1803de915_3:;
wr(s->u,91,8,(rd(s->u,75,8)*rd(s->u,83,8)));
L_1803de915_4:;
wr(s->r,16,4,(rd(s->u,91,8) >> (((U)UINT64_C(0x4))*8)));
L_1803de915_5:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de915_6:;
wr(s->r,0,4,(rd(s->u,91,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de915_7:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803de915_8:;
wr(s->u,43,8,(U)sx(rd(s->r,0,4),4));
L_1803de915_9:;
wr(s->r,512,1,(rd(s->u,43,8)!=rd(s->u,91,8)));
L_1803de915_10:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803de915_11:;
/* 1803de918: mov r15d, edx */
L_1803de918_0:;
L_1803de918_1:;
wr(s->r,184,4,rd(s->r,16,4));
L_1803de918_2:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803de918_3:;
/* 1803de91b: xor edx, edx */
L_1803de91b_0:;
L_1803de91b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de91b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de91b_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803de91b_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803de91b_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de91b_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803de91b_7:;
wr(s->u,18,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803de91b_8:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803de91b_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803de91b_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803de91b_11:;
/* 1803de91d: sar r15d, 1 */
L_1803de91d_0:;
L_1803de91d_1:;
wr(s->u,99,4,(rd(s->r,184,4)&((U)UINT64_C(0x1))));
L_1803de91d_2:;
wr(s->r,512,1,(rd(s->u,99,4)!=((U)UINT64_C(0x0))));
L_1803de91d_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de91d_4:;
wr(s->r,184,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,184,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,184,4),4)>>((U)UINT64_C(0x1)))));
L_1803de91d_5:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803de91d_6:;
wr(s->r,519,1,(sx(rd(s->r,184,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de91d_7:;
wr(s->r,518,1,(rd(s->r,184,4)==((U)UINT64_C(0x0))));
L_1803de91d_8:;
wr(s->u,18,4,(rd(s->r,184,4)&((U)UINT64_C(0xff))));
L_1803de91d_9:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803de91d_10:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803de91d_11:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803de91d_12:;
/* 1803de920: mov dword ptr [rsp + 0x40], edx */
L_1803de920_0:;
L_1803de920_1:;
wr(s->u,5,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803de920_2:;
wr(s->u,13,4,rd(s->r,16,4));
L_1803de920_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803de920_4:;
/* 1803de924: mov eax, r15d */
L_1803de924_0:;
L_1803de924_1:;
wr(s->r,0,4,rd(s->r,184,4));
L_1803de924_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803de924_3:;
/* 1803de927: shr eax, 0x1f */
L_1803de927_0:;
L_1803de927_1:;
wr(s->u,103,4,(((U)UINT64_C(0x1f))&((U)UINT64_C(0x1f))));
L_1803de927_2:;
wr(s->u,107,4,rd(s->r,0,4));
L_1803de927_3:;
wr(s->r,0,4,((rd(s->u,103,4)>=32)?0:(rd(s->r,0,4)>>rd(s->u,103,4))));
L_1803de927_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803de927_5:;
wr(s->u,51,1,(rd(s->u,103,4)==((U)UINT64_C(0x0))));
L_1803de927_6:;
wr(s->u,52,4,(rd(s->u,103,4)-((U)UINT64_C(0x1))));
L_1803de927_7:;
wr(s->u,56,4,((rd(s->u,52,4)>=32)?0:(rd(s->u,107,4)>>rd(s->u,52,4))));
L_1803de927_8:;
wr(s->u,60,4,(rd(s->u,56,4)&((U)UINT64_C(0x1))));
L_1803de927_9:;
wr(s->u,64,1,(rd(s->u,60,4)!=((U)UINT64_C(0x0))));
L_1803de927_10:;
wr(s->u,0,1,rd(s->u,51,1));
L_1803de927_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803de927_12:;
wr(s->u,2,1,(!rd(s->u,51,1)));
L_1803de927_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803de927_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,64,1)));
L_1803de927_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803de927_16:;
wr(s->u,65,1,(rd(s->u,103,4)==((U)UINT64_C(0x1))));
L_1803de927_17:;
wr(s->u,66,1,(sx(rd(s->u,107,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de927_18:;
wr(s->u,0,1,rd(s->u,65,1));
L_1803de927_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803de927_20:;
wr(s->u,2,1,(!rd(s->u,65,1)));
L_1803de927_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803de927_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,66,1)));
L_1803de927_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803de927_24:;
wr(s->u,24,1,(rd(s->u,103,4)!=((U)UINT64_C(0x0))));
L_1803de927_25:;
wr(s->u,25,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de927_26:;
wr(s->u,26,1,(!rd(s->u,24,1)));
L_1803de927_27:;
wr(s->u,27,1,(rd(s->u,26,1)&rd(s->r,519,1)));
L_1803de927_28:;
wr(s->u,28,1,(rd(s->u,24,1)&rd(s->u,25,1)));
L_1803de927_29:;
wr(s->r,519,1,(rd(s->u,27,1)|rd(s->u,28,1)));
L_1803de927_30:;
wr(s->u,29,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803de927_31:;
wr(s->u,30,1,(!rd(s->u,24,1)));
L_1803de927_32:;
wr(s->u,31,1,(rd(s->u,30,1)&rd(s->r,518,1)));
L_1803de927_33:;
wr(s->u,32,1,(rd(s->u,24,1)&rd(s->u,29,1)));
L_1803de927_34:;
wr(s->r,518,1,(rd(s->u,31,1)|rd(s->u,32,1)));
L_1803de927_35:;
wr(s->u,33,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803de927_36:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803de927_37:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803de927_38:;
wr(s->u,39,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803de927_39:;
wr(s->u,40,1,(!rd(s->u,24,1)));
L_1803de927_40:;
wr(s->u,41,1,(rd(s->u,40,1)&rd(s->r,514,1)));
L_1803de927_41:;
wr(s->u,42,1,(rd(s->u,24,1)&rd(s->u,39,1)));
L_1803de927_42:;
wr(s->r,514,1,(rd(s->u,41,1)|rd(s->u,42,1)));
L_1803de927_43:;
/* 1803de92a: add r15d, eax */
L_1803de92a_0:;
L_1803de92a_1:;
wr(s->r,512,1,(((rd(s->r,184,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,184,4)));
L_1803de92a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,4),rd(s->r,0,4),4,0));
L_1803de92a_3:;
wr(s->r,184,4,(rd(s->r,184,4)+rd(s->r,0,4)));
L_1803de92a_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803de92a_5:;
wr(s->r,519,1,(sx(rd(s->r,184,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de92a_6:;
wr(s->r,518,1,(rd(s->r,184,4)==((U)UINT64_C(0x0))));
L_1803de92a_7:;
wr(s->u,18,4,(rd(s->r,184,4)&((U)UINT64_C(0xff))));
L_1803de92a_8:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803de92a_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803de92a_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803de92a_11:;
/* 1803de92d: cmp r9d, 0xfffffe01 */
L_1803de92d_0:;
L_1803de92d_1:;
wr(s->u,67,4,rd(s->r,136,4));
L_1803de92d_2:;
wr(s->r,512,1,(rd(s->u,67,4)<((U)UINT64_C(0xfffffe01))));
L_1803de92d_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,67,4),((U)UINT64_C(0xfffffe01)),4,1));
L_1803de92d_4:;
wr(s->u,71,4,(rd(s->u,67,4)-((U)UINT64_C(0xfffffe01))));
L_1803de92d_5:;
wr(s->r,519,1,(sx(rd(s->u,71,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de92d_6:;
wr(s->r,518,1,(rd(s->u,71,4)==((U)UINT64_C(0x0))));
L_1803de92d_7:;
wr(s->u,18,4,(rd(s->u,71,4)&((U)UINT64_C(0xff))));
L_1803de92d_8:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803de92d_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803de92d_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803de92d_11:;
/* 1803de934: mov dword ptr [rsp + 0x24], r15d */
L_1803de934_0:;
L_1803de934_1:;
wr(s->u,5,8,(((U)UINT64_C(0x24))+rd(s->r,32,8)));
L_1803de934_2:;
wr(s->u,13,4,rd(s->r,184,4));
L_1803de934_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803de934_4:;
/* 1803de939: jge 0x1803de942 */
L_1803de939_0:;
L_1803de939_1:;
wr(s->u,17,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803de939_2:;
if(rd(s->u,17,1)){return UINT64_C(0x1803de942);}
L_1803de939_3:;
return UINT64_C(0x1803de93b);
}
uint64_t b_1803de93b(CPU*s){
/* 1803de93b: mov ecx, 0xfffffe00 */
L_1803de93b_0:;
L_1803de93b_1:;
wr(s->r,8,8,((U)UINT64_C(0xfffffe00)));
L_1803de93b_2:;
/* 1803de940: jmp 0x1803de954 */
L_1803de940_0:;
L_1803de940_1:;
return UINT64_C(0x1803de954);
L_1803de940_2:;
return UINT64_C(0x1803de942);
}
uint64_t b_1803de942(CPU*s){
/* 1803de942: test r9d, r9d */
L_1803de942_0:;
L_1803de942_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de942_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de942_3:;
wr(s->u,7,4,(rd(s->r,136,4)&rd(s->r,136,4)));
L_1803de942_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de942_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803de942_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803de942_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803de942_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803de942_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803de942_10:;
/* 1803de945: jns 0x1803de94b */
L_1803de945_0:;
L_1803de945_1:;
wr(s->u,0,1,(!rd(s->r,519,1)));
L_1803de945_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803de94b);}
L_1803de945_3:;
return UINT64_C(0x1803de947);
}
uint64_t b_1803de947(CPU*s){
/* 1803de947: mov ecx, edx */
L_1803de947_0:;
L_1803de947_1:;
wr(s->r,8,4,rd(s->r,16,4));
L_1803de947_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de947_3:;
/* 1803de949: jmp 0x1803de954 */
L_1803de949_0:;
L_1803de949_1:;
return UINT64_C(0x1803de954);
L_1803de949_2:;
return UINT64_C(0x1803de94b);
}
uint64_t b_1803de94b(CPU*s){
/* 1803de94b: lea eax, [r15 + r15*4] */
L_1803de94b_0:;
L_1803de94b_1:;
wr(s->u,0,8,(rd(s->r,184,8)*((U)UINT64_C(0x4))));
L_1803de94b_2:;
wr(s->u,8,8,(rd(s->r,184,8)+rd(s->u,0,8)));
L_1803de94b_3:;
wr(s->r,0,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803de94b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803de94b_5:;
/* 1803de94f: mov ecx, r9d */
L_1803de94f_0:;
L_1803de94f_1:;
wr(s->r,8,4,rd(s->r,136,4));
L_1803de94f_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de94f_3:;
/* 1803de952: sub ecx, eax */
L_1803de952_0:;
L_1803de952_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,0,4)));
L_1803de952_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,1));
L_1803de952_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,0,4)));
L_1803de952_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de952_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de952_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803de952_7:;
wr(s->u,17,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803de952_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803de952_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803de952_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803de952_11:;
/* 1803de954: test r9d, r9d */
L_1803de954_0:;
L_1803de954_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de954_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de954_3:;
wr(s->u,23,4,(rd(s->r,136,4)&rd(s->r,136,4)));
L_1803de954_4:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de954_5:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803de954_6:;
wr(s->u,17,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803de954_7:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803de954_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803de954_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803de954_10:;
/* 1803de957: jns 0x1803de965 */
L_1803de957_0:;
L_1803de957_1:;
wr(s->u,16,1,(!rd(s->r,519,1)));
L_1803de957_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803de965);}
L_1803de957_3:;
return UINT64_C(0x1803de959);
}
uint64_t b_1803de954(CPU*s){
/* 1803de954: test r9d, r9d */
L_1803de954_0:;
L_1803de954_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de954_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de954_3:;
wr(s->u,7,4,(rd(s->r,136,4)&rd(s->r,136,4)));
L_1803de954_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de954_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803de954_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803de954_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803de954_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803de954_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803de954_10:;
/* 1803de957: jns 0x1803de965 */
L_1803de957_0:;
L_1803de957_1:;
wr(s->u,0,1,(!rd(s->r,519,1)));
L_1803de957_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803de965);}
L_1803de957_3:;
return UINT64_C(0x1803de959);
}
uint64_t b_1803de959(CPU*s){
/* 1803de959: or r15d, 0xffffffff */
L_1803de959_0:;
L_1803de959_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de959_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de959_3:;
wr(s->r,184,4,(rd(s->r,184,4)|((U)UINT64_C(0xffffffff))));
L_1803de959_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803de959_5:;
wr(s->r,519,1,(sx(rd(s->r,184,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de959_6:;
wr(s->r,518,1,(rd(s->r,184,4)==((U)UINT64_C(0x0))));
L_1803de959_7:;
wr(s->u,100,4,(rd(s->r,184,4)&((U)UINT64_C(0xff))));
L_1803de959_8:;
wr(s->u,104,1,pop(rd(s->u,100,4),4));
L_1803de959_9:;
wr(s->u,105,1,(rd(s->u,104,1)&((U)UINT64_C(0x1))));
L_1803de959_10:;
wr(s->r,514,1,(rd(s->u,105,1)==((U)UINT64_C(0x0))));
L_1803de959_11:;
/* 1803de95d: sub r15d, r9d */
L_1803de95d_0:;
L_1803de95d_1:;
wr(s->r,512,1,(rd(s->r,184,4)<rd(s->r,136,4)));
L_1803de95d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,4),rd(s->r,136,4),4,1));
L_1803de95d_3:;
wr(s->r,184,4,(rd(s->r,184,4)-rd(s->r,136,4)));
L_1803de95d_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803de95d_5:;
wr(s->r,519,1,(sx(rd(s->r,184,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de95d_6:;
wr(s->r,518,1,(rd(s->r,184,4)==((U)UINT64_C(0x0))));
L_1803de95d_7:;
wr(s->u,100,4,(rd(s->r,184,4)&((U)UINT64_C(0xff))));
L_1803de95d_8:;
wr(s->u,104,1,pop(rd(s->u,100,4),4));
L_1803de95d_9:;
wr(s->u,105,1,(rd(s->u,104,1)&((U)UINT64_C(0x1))));
L_1803de95d_10:;
wr(s->r,514,1,(rd(s->u,105,1)==((U)UINT64_C(0x0))));
L_1803de95d_11:;
/* 1803de960: mov dword ptr [rsp + 0x24], r15d */
L_1803de960_0:;
L_1803de960_1:;
wr(s->u,16,8,(((U)UINT64_C(0x24))+rd(s->r,32,8)));
L_1803de960_2:;
wr(s->u,80,4,rd(s->r,184,4));
L_1803de960_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,80,4));
L_1803de960_4:;
/* 1803de965: mov rbp, qword ptr [rsi + 0x9c0] */
L_1803de965_0:;
L_1803de965_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x9c0))));
L_1803de965_2:;
wr(s->u,92,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803de965_3:;
wr(s->r,40,8,rd(s->u,92,8));
L_1803de965_4:;
/* 1803de96c: movsxd rax, r15d */
L_1803de96c_0:;
L_1803de96c_1:;
wr(s->r,0,8,(U)sx(rd(s->r,184,4),4));
L_1803de96c_2:;
/* 1803de96f: mov rdx, qword ptr [rsi + rax*8 + 0x378] */
L_1803de96f_0:;
L_1803de96f_1:;
wr(s->u,56,8,(((U)UINT64_C(0x378))+rd(s->r,48,8)));
L_1803de96f_2:;
wr(s->u,64,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803de96f_3:;
wr(s->u,72,8,(rd(s->u,56,8)+rd(s->u,64,8)));
L_1803de96f_4:;
wr(s->u,92,8,mr((uint64_t)rd(s->u,72,8),8));
L_1803de96f_5:;
wr(s->r,16,8,rd(s->u,92,8));
L_1803de96f_6:;
/* 1803de977: mov r13, qword ptr [rsi + rax*8 + 0x838] */
L_1803de977_0:;
L_1803de977_1:;
wr(s->u,56,8,(((U)UINT64_C(0x838))+rd(s->r,48,8)));
L_1803de977_2:;
wr(s->u,64,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803de977_3:;
wr(s->u,72,8,(rd(s->u,56,8)+rd(s->u,64,8)));
L_1803de977_4:;
wr(s->u,92,8,mr((uint64_t)rd(s->u,72,8),8));
L_1803de977_5:;
wr(s->r,168,8,rd(s->u,92,8));
L_1803de977_6:;
/* 1803de97f: mov r12, qword ptr [rsi + rax*8 + 0x60] */
L_1803de97f_0:;
L_1803de97f_1:;
wr(s->u,24,8,(((U)UINT64_C(0x60))+rd(s->r,48,8)));
L_1803de97f_2:;
wr(s->u,32,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803de97f_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803de97f_4:;
wr(s->u,92,8,mr((uint64_t)rd(s->u,40,8),8));
L_1803de97f_5:;
wr(s->r,160,8,rd(s->u,92,8));
L_1803de97f_6:;
/* 1803de984: mov r8, qword ptr [rsi + rax*8 + 0x1e0] */
L_1803de984_0:;
L_1803de984_1:;
wr(s->u,56,8,(((U)UINT64_C(0x1e0))+rd(s->r,48,8)));
L_1803de984_2:;
wr(s->u,64,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803de984_3:;
wr(s->u,72,8,(rd(s->u,56,8)+rd(s->u,64,8)));
L_1803de984_4:;
wr(s->u,92,8,mr((uint64_t)rd(s->u,72,8),8));
L_1803de984_5:;
wr(s->r,128,8,rd(s->u,92,8));
L_1803de984_6:;
/* 1803de98c: mov qword ptr [rsp + 0x110], rdx */
L_1803de98c_0:;
L_1803de98c_1:;
wr(s->u,48,8,(((U)UINT64_C(0x110))+rd(s->r,32,8)));
L_1803de98c_2:;
wr(s->u,84,8,rd(s->r,16,8));
L_1803de98c_3:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,84,8));
L_1803de98c_4:;
/* 1803de994: mov rdx, qword ptr [rsi + rax*8 + 0x688] */
L_1803de994_0:;
L_1803de994_1:;
wr(s->u,56,8,(((U)UINT64_C(0x688))+rd(s->r,48,8)));
L_1803de994_2:;
wr(s->u,64,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803de994_3:;
wr(s->u,72,8,(rd(s->u,56,8)+rd(s->u,64,8)));
L_1803de994_4:;
wr(s->u,92,8,mr((uint64_t)rd(s->u,72,8),8));
L_1803de994_5:;
wr(s->r,16,8,rd(s->u,92,8));
L_1803de994_6:;
/* 1803de99c: mov qword ptr [rsp + 0xe8], rdx */
L_1803de99c_0:;
L_1803de99c_1:;
wr(s->u,48,8,(((U)UINT64_C(0xe8))+rd(s->r,32,8)));
L_1803de99c_2:;
wr(s->u,84,8,rd(s->r,16,8));
L_1803de99c_3:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,84,8));
L_1803de99c_4:;
/* 1803de9a4: mov rdx, qword ptr [rsi + rax*8 + 0x4f8] */
L_1803de9a4_0:;
L_1803de9a4_1:;
wr(s->u,56,8,(((U)UINT64_C(0x4f8))+rd(s->r,48,8)));
L_1803de9a4_2:;
wr(s->u,64,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803de9a4_3:;
wr(s->u,72,8,(rd(s->u,56,8)+rd(s->u,64,8)));
L_1803de9a4_4:;
wr(s->u,92,8,mr((uint64_t)rd(s->u,72,8),8));
L_1803de9a4_5:;
wr(s->r,16,8,rd(s->u,92,8));
L_1803de9a4_6:;
/* 1803de9ac: mov qword ptr [rsp + 0xc0], rax */
L_1803de9ac_0:;
L_1803de9ac_1:;
wr(s->u,48,8,(((U)UINT64_C(0xc0))+rd(s->r,32,8)));
L_1803de9ac_2:;
wr(s->u,84,8,rd(s->r,0,8));
L_1803de9ac_3:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,84,8));
L_1803de9ac_4:;
/* 1803de9b4: mov rax, qword ptr [rsi + 0x40] */
L_1803de9b4_0:;
L_1803de9b4_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x40))));
L_1803de9b4_2:;
wr(s->u,92,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de9b4_3:;
wr(s->r,0,8,rd(s->u,92,8));
L_1803de9b4_4:;
/* 1803de9b8: mov qword ptr [rsp + 0xa0], rdx */
L_1803de9b8_0:;
L_1803de9b8_1:;
wr(s->u,48,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_1803de9b8_2:;
wr(s->u,84,8,rd(s->r,16,8));
L_1803de9b8_3:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,84,8));
L_1803de9b8_4:;
/* 1803de9c0: mov rdx, qword ptr [rsi + 0x48] */
L_1803de9c0_0:;
L_1803de9c0_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x48))));
L_1803de9c0_2:;
wr(s->u,92,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de9c0_3:;
wr(s->r,16,8,rd(s->u,92,8));
L_1803de9c0_4:;
/* 1803de9c4: mov qword ptr [rsp + 0xc8], rdx */
L_1803de9c4_0:;
L_1803de9c4_1:;
wr(s->u,48,8,(((U)UINT64_C(0xc8))+rd(s->r,32,8)));
L_1803de9c4_2:;
wr(s->u,84,8,rd(s->r,16,8));
L_1803de9c4_3:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,84,8));
L_1803de9c4_4:;
/* 1803de9cc: mov qword ptr [rsp + 0x108], r13 */
L_1803de9cc_0:;
L_1803de9cc_1:;
wr(s->u,48,8,(((U)UINT64_C(0x108))+rd(s->r,32,8)));
L_1803de9cc_2:;
wr(s->u,84,8,rd(s->r,168,8));
L_1803de9cc_3:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,84,8));
L_1803de9cc_4:;
/* 1803de9d4: mov qword ptr [rsp + 0xe0], r12 */
L_1803de9d4_0:;
L_1803de9d4_1:;
wr(s->u,48,8,(((U)UINT64_C(0xe0))+rd(s->r,32,8)));
L_1803de9d4_2:;
wr(s->u,84,8,rd(s->r,160,8));
L_1803de9d4_3:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,84,8));
L_1803de9d4_4:;
/* 1803de9dc: mov qword ptr [rsp + 0x70], r8 */
L_1803de9dc_0:;
L_1803de9dc_1:;
wr(s->u,16,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803de9dc_2:;
wr(s->u,84,8,rd(s->r,128,8));
L_1803de9dc_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,84,8));
L_1803de9dc_4:;
/* 1803de9e1: mov qword ptr [rsp + 0x48], rax */
L_1803de9e1_0:;
L_1803de9e1_1:;
wr(s->u,16,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803de9e1_2:;
wr(s->u,84,8,rd(s->r,0,8));
L_1803de9e1_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,84,8));
L_1803de9e1_4:;
/* 1803de9e6: test ecx, ecx */
L_1803de9e6_0:;
L_1803de9e6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de9e6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de9e6_3:;
wr(s->u,106,4,(rd(s->r,8,4)&rd(s->r,8,4)));
L_1803de9e6_4:;
wr(s->r,519,1,(sx(rd(s->u,106,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de9e6_5:;
wr(s->r,518,1,(rd(s->u,106,4)==((U)UINT64_C(0x0))));
L_1803de9e6_6:;
wr(s->u,100,4,(rd(s->u,106,4)&((U)UINT64_C(0xff))));
L_1803de9e6_7:;
wr(s->u,104,1,pop(rd(s->u,100,4),4));
L_1803de9e6_8:;
wr(s->u,105,1,(rd(s->u,104,1)&((U)UINT64_C(0x1))));
L_1803de9e6_9:;
wr(s->r,514,1,(rd(s->u,105,1)==((U)UINT64_C(0x0))));
L_1803de9e6_10:;
/* 1803de9e8: je 0x1803df2bc */
L_1803de9e8_0:;
L_1803de9e8_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803df2bc);}
L_1803de9e8_2:;
return UINT64_C(0x1803de9ee);
}
uint64_t b_1803de965(CPU*s){
/* 1803de965: mov rbp, qword ptr [rsi + 0x9c0] */
L_1803de965_0:;
L_1803de965_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x9c0))));
L_1803de965_2:;
wr(s->u,88,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803de965_3:;
wr(s->r,40,8,rd(s->u,88,8));
L_1803de965_4:;
/* 1803de96c: movsxd rax, r15d */
L_1803de96c_0:;
L_1803de96c_1:;
wr(s->r,0,8,(U)sx(rd(s->r,184,4),4));
L_1803de96c_2:;
/* 1803de96f: mov rdx, qword ptr [rsi + rax*8 + 0x378] */
L_1803de96f_0:;
L_1803de96f_1:;
wr(s->u,56,8,(((U)UINT64_C(0x378))+rd(s->r,48,8)));
L_1803de96f_2:;
wr(s->u,64,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803de96f_3:;
wr(s->u,72,8,(rd(s->u,56,8)+rd(s->u,64,8)));
L_1803de96f_4:;
wr(s->u,88,8,mr((uint64_t)rd(s->u,72,8),8));
L_1803de96f_5:;
wr(s->r,16,8,rd(s->u,88,8));
L_1803de96f_6:;
/* 1803de977: mov r13, qword ptr [rsi + rax*8 + 0x838] */
L_1803de977_0:;
L_1803de977_1:;
wr(s->u,56,8,(((U)UINT64_C(0x838))+rd(s->r,48,8)));
L_1803de977_2:;
wr(s->u,64,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803de977_3:;
wr(s->u,72,8,(rd(s->u,56,8)+rd(s->u,64,8)));
L_1803de977_4:;
wr(s->u,88,8,mr((uint64_t)rd(s->u,72,8),8));
L_1803de977_5:;
wr(s->r,168,8,rd(s->u,88,8));
L_1803de977_6:;
/* 1803de97f: mov r12, qword ptr [rsi + rax*8 + 0x60] */
L_1803de97f_0:;
L_1803de97f_1:;
wr(s->u,24,8,(((U)UINT64_C(0x60))+rd(s->r,48,8)));
L_1803de97f_2:;
wr(s->u,32,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803de97f_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803de97f_4:;
wr(s->u,88,8,mr((uint64_t)rd(s->u,40,8),8));
L_1803de97f_5:;
wr(s->r,160,8,rd(s->u,88,8));
L_1803de97f_6:;
/* 1803de984: mov r8, qword ptr [rsi + rax*8 + 0x1e0] */
L_1803de984_0:;
L_1803de984_1:;
wr(s->u,56,8,(((U)UINT64_C(0x1e0))+rd(s->r,48,8)));
L_1803de984_2:;
wr(s->u,64,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803de984_3:;
wr(s->u,72,8,(rd(s->u,56,8)+rd(s->u,64,8)));
L_1803de984_4:;
wr(s->u,88,8,mr((uint64_t)rd(s->u,72,8),8));
L_1803de984_5:;
wr(s->r,128,8,rd(s->u,88,8));
L_1803de984_6:;
/* 1803de98c: mov qword ptr [rsp + 0x110], rdx */
L_1803de98c_0:;
L_1803de98c_1:;
wr(s->u,48,8,(((U)UINT64_C(0x110))+rd(s->r,32,8)));
L_1803de98c_2:;
wr(s->u,80,8,rd(s->r,16,8));
L_1803de98c_3:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,80,8));
L_1803de98c_4:;
/* 1803de994: mov rdx, qword ptr [rsi + rax*8 + 0x688] */
L_1803de994_0:;
L_1803de994_1:;
wr(s->u,56,8,(((U)UINT64_C(0x688))+rd(s->r,48,8)));
L_1803de994_2:;
wr(s->u,64,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803de994_3:;
wr(s->u,72,8,(rd(s->u,56,8)+rd(s->u,64,8)));
L_1803de994_4:;
wr(s->u,88,8,mr((uint64_t)rd(s->u,72,8),8));
L_1803de994_5:;
wr(s->r,16,8,rd(s->u,88,8));
L_1803de994_6:;
/* 1803de99c: mov qword ptr [rsp + 0xe8], rdx */
L_1803de99c_0:;
L_1803de99c_1:;
wr(s->u,48,8,(((U)UINT64_C(0xe8))+rd(s->r,32,8)));
L_1803de99c_2:;
wr(s->u,80,8,rd(s->r,16,8));
L_1803de99c_3:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,80,8));
L_1803de99c_4:;
/* 1803de9a4: mov rdx, qword ptr [rsi + rax*8 + 0x4f8] */
L_1803de9a4_0:;
L_1803de9a4_1:;
wr(s->u,56,8,(((U)UINT64_C(0x4f8))+rd(s->r,48,8)));
L_1803de9a4_2:;
wr(s->u,64,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803de9a4_3:;
wr(s->u,72,8,(rd(s->u,56,8)+rd(s->u,64,8)));
L_1803de9a4_4:;
wr(s->u,88,8,mr((uint64_t)rd(s->u,72,8),8));
L_1803de9a4_5:;
wr(s->r,16,8,rd(s->u,88,8));
L_1803de9a4_6:;
/* 1803de9ac: mov qword ptr [rsp + 0xc0], rax */
L_1803de9ac_0:;
L_1803de9ac_1:;
wr(s->u,48,8,(((U)UINT64_C(0xc0))+rd(s->r,32,8)));
L_1803de9ac_2:;
wr(s->u,80,8,rd(s->r,0,8));
L_1803de9ac_3:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,80,8));
L_1803de9ac_4:;
/* 1803de9b4: mov rax, qword ptr [rsi + 0x40] */
L_1803de9b4_0:;
L_1803de9b4_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x40))));
L_1803de9b4_2:;
wr(s->u,88,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de9b4_3:;
wr(s->r,0,8,rd(s->u,88,8));
L_1803de9b4_4:;
/* 1803de9b8: mov qword ptr [rsp + 0xa0], rdx */
L_1803de9b8_0:;
L_1803de9b8_1:;
wr(s->u,48,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_1803de9b8_2:;
wr(s->u,80,8,rd(s->r,16,8));
L_1803de9b8_3:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,80,8));
L_1803de9b8_4:;
/* 1803de9c0: mov rdx, qword ptr [rsi + 0x48] */
L_1803de9c0_0:;
L_1803de9c0_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x48))));
L_1803de9c0_2:;
wr(s->u,88,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803de9c0_3:;
wr(s->r,16,8,rd(s->u,88,8));
L_1803de9c0_4:;
/* 1803de9c4: mov qword ptr [rsp + 0xc8], rdx */
L_1803de9c4_0:;
L_1803de9c4_1:;
wr(s->u,48,8,(((U)UINT64_C(0xc8))+rd(s->r,32,8)));
L_1803de9c4_2:;
wr(s->u,80,8,rd(s->r,16,8));
L_1803de9c4_3:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,80,8));
L_1803de9c4_4:;
/* 1803de9cc: mov qword ptr [rsp + 0x108], r13 */
L_1803de9cc_0:;
L_1803de9cc_1:;
wr(s->u,48,8,(((U)UINT64_C(0x108))+rd(s->r,32,8)));
L_1803de9cc_2:;
wr(s->u,80,8,rd(s->r,168,8));
L_1803de9cc_3:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,80,8));
L_1803de9cc_4:;
/* 1803de9d4: mov qword ptr [rsp + 0xe0], r12 */
L_1803de9d4_0:;
L_1803de9d4_1:;
wr(s->u,48,8,(((U)UINT64_C(0xe0))+rd(s->r,32,8)));
L_1803de9d4_2:;
wr(s->u,80,8,rd(s->r,160,8));
L_1803de9d4_3:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,80,8));
L_1803de9d4_4:;
/* 1803de9dc: mov qword ptr [rsp + 0x70], r8 */
L_1803de9dc_0:;
L_1803de9dc_1:;
wr(s->u,16,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803de9dc_2:;
wr(s->u,80,8,rd(s->r,128,8));
L_1803de9dc_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,80,8));
L_1803de9dc_4:;
/* 1803de9e1: mov qword ptr [rsp + 0x48], rax */
L_1803de9e1_0:;
L_1803de9e1_1:;
wr(s->u,16,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803de9e1_2:;
wr(s->u,80,8,rd(s->r,0,8));
L_1803de9e1_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,80,8));
L_1803de9e1_4:;
/* 1803de9e6: test ecx, ecx */
L_1803de9e6_0:;
L_1803de9e6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803de9e6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803de9e6_3:;
wr(s->u,102,4,(rd(s->r,8,4)&rd(s->r,8,4)));
L_1803de9e6_4:;
wr(s->r,519,1,(sx(rd(s->u,102,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de9e6_5:;
wr(s->r,518,1,(rd(s->u,102,4)==((U)UINT64_C(0x0))));
L_1803de9e6_6:;
wr(s->u,96,4,(rd(s->u,102,4)&((U)UINT64_C(0xff))));
L_1803de9e6_7:;
wr(s->u,100,1,pop(rd(s->u,96,4),4));
L_1803de9e6_8:;
wr(s->u,101,1,(rd(s->u,100,1)&((U)UINT64_C(0x1))));
L_1803de9e6_9:;
wr(s->r,514,1,(rd(s->u,101,1)==((U)UINT64_C(0x0))));
L_1803de9e6_10:;
/* 1803de9e8: je 0x1803df2bc */
L_1803de9e8_0:;
L_1803de9e8_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803df2bc);}
L_1803de9e8_2:;
return UINT64_C(0x1803de9ee);
}
uint64_t b_1803de9ee(CPU*s){
/* 1803de9ee: sub ecx, 1 */
L_1803de9ee_0:;
L_1803de9ee_1:;
wr(s->r,512,1,(rd(s->r,8,4)<((U)UINT64_C(0x1))));
L_1803de9ee_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),((U)UINT64_C(0x1)),4,1));
L_1803de9ee_3:;
wr(s->r,8,4,(rd(s->r,8,4)-((U)UINT64_C(0x1))));
L_1803de9ee_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de9ee_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de9ee_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803de9ee_7:;
wr(s->u,0,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803de9ee_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803de9ee_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803de9ee_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803de9ee_11:;
/* 1803de9f1: je 0x1803df18e */
L_1803de9f1_0:;
L_1803de9f1_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803df18e);}
L_1803de9f1_2:;
return UINT64_C(0x1803de9f7);
}
uint64_t b_1803de9f7(CPU*s){
/* 1803de9f7: sub ecx, 1 */
L_1803de9f7_0:;
L_1803de9f7_1:;
wr(s->r,512,1,(rd(s->r,8,4)<((U)UINT64_C(0x1))));
L_1803de9f7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),((U)UINT64_C(0x1)),4,1));
L_1803de9f7_3:;
wr(s->r,8,4,(rd(s->r,8,4)-((U)UINT64_C(0x1))));
L_1803de9f7_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803de9f7_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803de9f7_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803de9f7_7:;
wr(s->u,0,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803de9f7_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803de9f7_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803de9f7_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803de9f7_11:;
/* 1803de9fa: je 0x1803df173 */
L_1803de9fa_0:;
L_1803de9fa_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803df173);}
L_1803de9fa_2:;
return UINT64_C(0x1803dea00);
}
uint64_t b_1803dea00(CPU*s){
/* 1803dea00: sub ecx, 1 */
L_1803dea00_0:;
L_1803dea00_1:;
wr(s->r,512,1,(rd(s->r,8,4)<((U)UINT64_C(0x1))));
L_1803dea00_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),((U)UINT64_C(0x1)),4,1));
L_1803dea00_3:;
wr(s->r,8,4,(rd(s->r,8,4)-((U)UINT64_C(0x1))));
L_1803dea00_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dea00_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dea00_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dea00_7:;
wr(s->u,0,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dea00_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803dea00_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803dea00_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803dea00_11:;
/* 1803dea03: je 0x1803deb11 */
L_1803dea03_0:;
L_1803dea03_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803deb11);}
L_1803dea03_2:;
return UINT64_C(0x1803dea09);
}
uint64_t b_1803dea09(CPU*s){
/* 1803dea09: cmp ecx, 1 */
L_1803dea09_0:;
L_1803dea09_1:;
wr(s->u,7,4,rd(s->r,8,4));
L_1803dea09_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x1))));
L_1803dea09_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x1)),4,1));
L_1803dea09_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x1))));
L_1803dea09_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dea09_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803dea09_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803dea09_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803dea09_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803dea09_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803dea09_11:;
/* 1803dea0c: jne 0x1803df3c0 */
L_1803dea0c_0:;
L_1803dea0c_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803dea0c_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803df3c0);}
L_1803dea0c_3:;
return UINT64_C(0x1803dea12);
}
uint64_t b_1803dea12(CPU*s){
/* 1803dea12: mov rcx, qword ptr [rsp + 0x60] */
L_1803dea12_0:;
L_1803dea12_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dea12_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dea12_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dea12_4:;
/* 1803dea17: mov rdi, qword ptr [rsp + 0x58] */
L_1803dea17_0:;
L_1803dea17_1:;
wr(s->u,8,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803dea17_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dea17_3:;
wr(s->r,56,8,rd(s->u,16,8));
L_1803dea17_4:;
/* 1803dea1c: mov rax, qword ptr [rcx] */
L_1803dea1c_0:;
L_1803dea1c_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dea1c_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dea1c_3:;
/* 1803dea1f: mov rdx, rdi */
L_1803dea1f_0:;
L_1803dea1f_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803dea1f_2:;
/* 1803dea22: call qword ptr [rax + 8] */
L_1803dea22_0:;
L_1803dea22_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803dea22_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dea22_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803dea22_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dea22_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dea25)));
L_1803dea22_6:;
return (uint64_t)rd(s->u,24,8);
L_1803dea22_7:;
return UINT64_C(0x1803dea25);
}
uint64_t b_1803dea25(CPU*s){
/* 1803dea25: mov ebx, dword ptr [rsp + 0x20] */
L_1803dea25_0:;
L_1803dea25_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dea25_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dea25_3:;
wr(s->r,24,4,rd(s->u,8,4));
L_1803dea25_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dea25_5:;
/* 1803dea29: mov rcx, rdi */
L_1803dea29_0:;
L_1803dea29_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803dea29_2:;
/* 1803dea2c: movss xmm1, dword ptr [rip + 0x273730] */
L_1803dea2c_0:;
L_1803dea2c_1:;
wr(s->r,4672,4,mr(UINT64_C(0x180652164),4));
L_1803dea2c_2:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803dea2c_3:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803dea2c_4:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803dea2c_5:;
/* 1803dea34: mov r8d, ebx */
L_1803dea34_0:;
L_1803dea34_1:;
wr(s->r,128,4,rd(s->r,24,4));
L_1803dea34_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dea34_3:;
/* 1803dea37: call qword ptr [rip + 0x63f7a3] */
L_1803dea37_0:;
L_1803dea37_1:;
wr(s->u,12,8,mr(UINT64_C(0x180a1e1e0),8));
L_1803dea37_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dea37_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dea3d)));
L_1803dea37_4:;
return (uint64_t)rd(s->u,12,8);
L_1803dea37_5:;
return UINT64_C(0x1803dea3d);
}
uint64_t b_1803dea3d(CPU*s){
/* 1803dea3d: mov r13, qword ptr [rsp + 0x68] */
L_1803dea3d_0:;
L_1803dea3d_1:;
wr(s->u,16,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803dea3d_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dea3d_3:;
wr(s->r,168,8,rd(s->u,24,8));
L_1803dea3d_4:;
/* 1803dea42: sub ebx, r14d */
L_1803dea42_0:;
L_1803dea42_1:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->r,176,4)));
L_1803dea42_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->r,176,4),4,1));
L_1803dea42_3:;
wr(s->r,24,4,(rd(s->r,24,4)-rd(s->r,176,4)));
L_1803dea42_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dea42_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dea42_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803dea42_7:;
wr(s->u,32,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803dea42_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803dea42_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803dea42_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803dea42_11:;
/* 1803dea45: movsxd rax, ebx */
L_1803dea45_0:;
L_1803dea45_1:;
wr(s->r,0,8,(U)sx(rd(s->r,24,4),4));
L_1803dea45_2:;
/* 1803dea48: mov r8d, r14d */
L_1803dea48_0:;
L_1803dea48_1:;
wr(s->r,128,4,rd(s->r,176,4));
L_1803dea48_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dea48_3:;
/* 1803dea4b: mov rdx, r13 */
L_1803dea4b_0:;
L_1803dea4b_1:;
wr(s->r,16,8,rd(s->r,168,8));
L_1803dea4b_2:;
/* 1803dea4e: lea rbx, [rdi + rax*4] */
L_1803dea4e_0:;
L_1803dea4e_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803dea4e_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803dea4e_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803dea4e_4:;
/* 1803dea52: mov rcx, rbx */
L_1803dea52_0:;
L_1803dea52_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dea52_2:;
/* 1803dea55: call qword ptr [rip + 0x63f77d] */
L_1803dea55_0:;
L_1803dea55_1:;
wr(s->u,38,8,mr(UINT64_C(0x180a1e1d8),8));
L_1803dea55_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dea55_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dea5b)));
L_1803dea55_4:;
return (uint64_t)rd(s->u,38,8);
L_1803dea55_5:;
return UINT64_C(0x1803dea5b);
}
uint64_t b_1803dea5b(CPU*s){
/* 1803dea5b: mov rbp, qword ptr [rsp + 0xa0] */
L_1803dea5b_0:;
L_1803dea5b_1:;
wr(s->u,0,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_1803dea5b_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dea5b_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803dea5b_4:;
/* 1803dea63: mov r8d, r14d */
L_1803dea63_0:;
L_1803dea63_1:;
wr(s->r,128,4,rd(s->r,176,4));
L_1803dea63_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dea63_3:;
/* 1803dea66: mov rcx, rbp */
L_1803dea66_0:;
L_1803dea66_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803dea66_2:;
/* 1803dea69: mov rdx, rbx */
L_1803dea69_0:;
L_1803dea69_1:;
wr(s->r,16,8,rd(s->r,24,8));
L_1803dea69_2:;
/* 1803dea6c: call qword ptr [rip + 0x63f6ce] */
L_1803dea6c_0:;
L_1803dea6c_1:;
wr(s->u,16,8,mr(UINT64_C(0x180a1e140),8));
L_1803dea6c_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dea6c_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dea72)));
L_1803dea6c_4:;
return (uint64_t)rd(s->u,16,8);
L_1803dea6c_5:;
return UINT64_C(0x1803dea72);
}
uint64_t b_1803dea72(CPU*s){
/* 1803dea72: movsxd rbx, r14d */
L_1803dea72_0:;
L_1803dea72_1:;
wr(s->r,24,8,(U)sx(rd(s->r,176,4),4));
L_1803dea72_2:;
/* 1803dea75: mov r8d, r14d */
L_1803dea75_0:;
L_1803dea75_1:;
wr(s->r,128,4,rd(s->r,176,4));
L_1803dea75_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dea75_3:;
/* 1803dea78: lea rdx, [r13 + rbx*4] */
L_1803dea78_0:;
L_1803dea78_1:;
wr(s->u,0,8,(rd(s->r,24,8)*((U)UINT64_C(0x4))));
L_1803dea78_2:;
wr(s->u,8,8,(rd(s->r,168,8)+rd(s->u,0,8)));
L_1803dea78_3:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803dea78_4:;
/* 1803dea7d: mov rcx, rdi */
L_1803dea7d_0:;
L_1803dea7d_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803dea7d_2:;
/* 1803dea80: call qword ptr [rip + 0x63f752] */
L_1803dea80_0:;
L_1803dea80_1:;
wr(s->u,16,8,mr(UINT64_C(0x180a1e1d8),8));
L_1803dea80_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dea80_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dea86)));
L_1803dea80_4:;
return (uint64_t)rd(s->u,16,8);
L_1803dea80_5:;
return UINT64_C(0x1803dea86);
}
uint64_t b_1803dea86(CPU*s){
/* 1803dea86: lea rcx, [rbp + rbx*4] */
L_1803dea86_0:;
L_1803dea86_1:;
wr(s->u,0,8,(rd(s->r,24,8)*((U)UINT64_C(0x4))));
L_1803dea86_2:;
wr(s->u,8,8,(rd(s->r,40,8)+rd(s->u,0,8)));
L_1803dea86_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dea86_4:;
/* 1803dea8b: mov r8d, r14d */
L_1803dea8b_0:;
L_1803dea8b_1:;
wr(s->r,128,4,rd(s->r,176,4));
L_1803dea8b_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dea8b_3:;
/* 1803dea8e: mov rdx, rdi */
L_1803dea8e_0:;
L_1803dea8e_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803dea8e_2:;
/* 1803dea91: call qword ptr [rip + 0x63f6a9] */
L_1803dea91_0:;
L_1803dea91_1:;
wr(s->u,16,8,mr(UINT64_C(0x180a1e140),8));
L_1803dea91_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dea91_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dea97)));
L_1803dea91_4:;
return (uint64_t)rd(s->u,16,8);
L_1803dea91_5:;
return UINT64_C(0x1803dea97);
}
uint64_t b_1803dea97(CPU*s){
/* 1803dea97: mov r8d, dword ptr [rsp + 0x80] */
L_1803dea97_0:;
L_1803dea97_1:;
wr(s->u,0,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803dea97_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dea97_3:;
wr(s->r,128,4,rd(s->u,8,4));
L_1803dea97_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dea97_5:;
/* 1803dea9f: mov rdx, qword ptr [rsp + 0xb0] */
L_1803dea9f_0:;
L_1803dea9f_1:;
wr(s->u,0,8,(((U)UINT64_C(0xb0))+rd(s->r,32,8)));
L_1803dea9f_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dea9f_3:;
wr(s->r,16,8,rd(s->u,12,8));
L_1803dea9f_4:;
/* 1803deaa7: mov rcx, rbp */
L_1803deaa7_0:;
L_1803deaa7_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803deaa7_2:;
/* 1803deaaa: call qword ptr [rip + 0x63f728] */
L_1803deaaa_0:;
L_1803deaaa_1:;
wr(s->u,20,8,mr(UINT64_C(0x180a1e1d8),8));
L_1803deaaa_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803deaaa_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803deab0)));
L_1803deaaa_4:;
return (uint64_t)rd(s->u,20,8);
L_1803deaaa_5:;
return UINT64_C(0x1803deab0);
}
uint64_t b_1803deab0(CPU*s){
/* 1803deab0: mov rax, qword ptr [rsp + 0xc0] */
L_1803deab0_0:;
L_1803deab0_1:;
wr(s->u,24,8,(((U)UINT64_C(0xc0))+rd(s->r,32,8)));
L_1803deab0_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803deab0_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803deab0_4:;
/* 1803deab8: movsxd r12, dword ptr [rsp + 0x90] */
L_1803deab8_0:;
L_1803deab8_1:;
wr(s->u,24,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803deab8_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803deab8_3:;
wr(s->r,160,8,(U)sx(rd(s->u,32,4),4));
L_1803deab8_4:;
/* 1803deac0: mov rcx, qword ptr [rsp + 0x1d0] */
L_1803deac0_0:;
L_1803deac0_1:;
wr(s->u,24,8,(((U)UINT64_C(0x1d0))+rd(s->r,32,8)));
L_1803deac0_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803deac0_3:;
wr(s->r,8,8,rd(s->u,36,8));
L_1803deac0_4:;
/* 1803deac8: lea rdi, [r12*4] */
L_1803deac8_0:;
L_1803deac8_1:;
wr(s->u,16,8,(rd(s->r,160,8)*((U)UINT64_C(0x4))));
L_1803deac8_2:;
wr(s->r,56,8,rd(s->u,16,8));
L_1803deac8_3:;
/* 1803dead0: mov rdx, rbp */
L_1803dead0_0:;
L_1803dead0_1:;
wr(s->r,16,8,rd(s->r,40,8));
L_1803dead0_2:;
/* 1803dead3: mov rcx, qword ptr [rcx + rax*8] */
L_1803dead3_0:;
L_1803dead3_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803dead3_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803dead3_3:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dead3_4:;
wr(s->r,8,8,rd(s->u,36,8));
L_1803dead3_5:;
/* 1803dead7: mov r8, rdi */
L_1803dead7_0:;
L_1803dead7_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803dead7_2:;
/* 1803deada: call 0x18000d550 */
L_1803deada_0:;
L_1803deada_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803deada_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803deadf)));
L_1803deada_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803deada_4:;
return UINT64_C(0x1803deadf);
}
uint64_t b_1803deadf(CPU*s){
/* 1803deadf: mov eax, dword ptr [rsp + 0x44] */
L_1803deadf_0:;
L_1803deadf_1:;
wr(s->u,24,8,(((U)UINT64_C(0x44))+rd(s->r,32,8)));
L_1803deadf_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803deadf_3:;
wr(s->r,0,4,rd(s->u,32,4));
L_1803deadf_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803deadf_5:;
/* 1803deae3: lea rdx, [rdi + rbp] */
L_1803deae3_0:;
L_1803deae3_1:;
wr(s->u,0,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803deae3_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803deae3_3:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803deae3_4:;
/* 1803deae7: sub eax, r12d */
L_1803deae7_0:;
L_1803deae7_1:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,160,4)));
L_1803deae7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,160,4),4,1));
L_1803deae7_3:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->r,160,4)));
L_1803deae7_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803deae7_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803deae7_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803deae7_7:;
wr(s->u,36,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803deae7_8:;
wr(s->u,40,1,pop(rd(s->u,36,4),4));
L_1803deae7_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803deae7_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803deae7_11:;
/* 1803deaea: mov rcx, rbp */
L_1803deaea_0:;
L_1803deaea_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803deaea_2:;
/* 1803deaed: cdqe  */
L_1803deaed_0:;
L_1803deaed_1:;
wr(s->r,0,8,(U)sx(rd(s->r,0,4),4));
L_1803deaed_2:;
/* 1803deaef: lea rbx, [rax*4] */
L_1803deaef_0:;
L_1803deaef_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803deaef_2:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803deaef_3:;
/* 1803deaf7: mov r8, rbx */
L_1803deaf7_0:;
L_1803deaf7_1:;
wr(s->r,128,8,rd(s->r,24,8));
L_1803deaf7_2:;
/* 1803deafa: call 0x180609ade */
L_1803deafa_0:;
L_1803deafa_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803deafa_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803deaff)));
L_1803deafa_3:;
return (uint64_t)UINT64_C(0x180609ade);
L_1803deafa_4:;
return UINT64_C(0x1803deaff);
}
uint64_t b_1803deaff(CPU*s){
/* 1803deaff: lea rcx, [rbx + rbp] */
L_1803deaff_0:;
L_1803deaff_1:;
wr(s->u,0,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803deaff_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803deaff_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803deaff_4:;
/* 1803deb03: mov edx, r12d */
L_1803deb03_0:;
L_1803deb03_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1803deb03_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803deb03_3:;
/* 1803deb06: call qword ptr [rip + 0x63f69c] */
L_1803deb06_0:;
L_1803deb06_1:;
wr(s->u,16,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803deb06_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803deb06_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803deb0c)));
L_1803deb06_4:;
return (uint64_t)rd(s->u,16,8);
L_1803deb06_5:;
return UINT64_C(0x1803deb0c);
}
uint64_t b_1803deb0c(CPU*s){
/* 1803deb0c: jmp 0x1803df3c0 */
L_1803deb0c_0:;
L_1803deb0c_1:;
return UINT64_C(0x1803df3c0);
L_1803deb0c_2:;
return UINT64_C(0x1803deb11);
}
uint64_t b_1803deb11(CPU*s){
/* 1803deb11: test r15d, r15d */
L_1803deb11_0:;
L_1803deb11_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803deb11_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803deb11_3:;
wr(s->u,7,4,(rd(s->r,184,4)&rd(s->r,184,4)));
L_1803deb11_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803deb11_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803deb11_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803deb11_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803deb11_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803deb11_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803deb11_10:;
/* 1803deb14: jne 0x1803deb44 */
L_1803deb14_0:;
L_1803deb14_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803deb14_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803deb44);}
L_1803deb14_3:;
return UINT64_C(0x1803deb16);
}
uint64_t b_1803deb16(CPU*s){
/* 1803deb16: mov eax, dword ptr [rsi + 0x38] */
L_1803deb16_0:;
L_1803deb16_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x38))));
L_1803deb16_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803deb16_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803deb16_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803deb16_5:;
/* 1803deb19: test eax, eax */
L_1803deb19_0:;
L_1803deb19_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803deb19_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803deb19_3:;
wr(s->u,18,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803deb19_4:;
wr(s->r,519,1,(sx(rd(s->u,18,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803deb19_5:;
wr(s->r,518,1,(rd(s->u,18,4)==((U)UINT64_C(0x0))));
L_1803deb19_6:;
wr(s->u,12,4,(rd(s->u,18,4)&((U)UINT64_C(0xff))));
L_1803deb19_7:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803deb19_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803deb19_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803deb19_10:;
/* 1803deb1b: je 0x1803deb4b */
L_1803deb1b_0:;
L_1803deb1b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803deb4b);}
L_1803deb1b_2:;
return UINT64_C(0x1803deb1d);
}
uint64_t b_1803deb1d(CPU*s){
/* 1803deb1d: mov r8d, eax */
L_1803deb1d_0:;
L_1803deb1d_1:;
wr(s->r,128,4,rd(s->r,0,4));
L_1803deb1d_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803deb1d_3:;
/* 1803deb20: xor edx, edx */
L_1803deb20_0:;
L_1803deb20_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803deb20_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803deb20_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803deb20_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803deb20_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803deb20_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803deb20_7:;
wr(s->u,0,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803deb20_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803deb20_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803deb20_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803deb20_11:;
/* 1803deb22: mov rcx, rsi */
L_1803deb22_0:;
L_1803deb22_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1803deb22_2:;
/* 1803deb25: call 0x1803e07d0 */
L_1803deb25_0:;
L_1803deb25_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803deb25_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803deb2a)));
L_1803deb25_3:;
return (uint64_t)UINT64_C(0x1803e07d0);
L_1803deb25_4:;
return UINT64_C(0x1803deb2a);
}
uint64_t b_1803deb2a(CPU*s){
/* 1803deb2a: mov r8, qword ptr [rsp + 0x70] */
L_1803deb2a_0:;
L_1803deb2a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803deb2a_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803deb2a_3:;
wr(s->r,128,8,rd(s->u,28,8));
L_1803deb2a_4:;
/* 1803deb2f: mov r10, qword ptr [rsp + 0x30] */
L_1803deb2f_0:;
L_1803deb2f_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803deb2f_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803deb2f_3:;
wr(s->r,144,8,rd(s->u,28,8));
L_1803deb2f_4:;
/* 1803deb34: mov r11, qword ptr [rsp + 0xd8] */
L_1803deb34_0:;
L_1803deb34_1:;
wr(s->u,16,8,(((U)UINT64_C(0xd8))+rd(s->r,32,8)));
L_1803deb34_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803deb34_3:;
wr(s->r,152,8,rd(s->u,28,8));
L_1803deb34_4:;
/* 1803deb3c: mov rdx, qword ptr [rsp + 0xc8] */
L_1803deb3c_0:;
L_1803deb3c_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc8))+rd(s->r,32,8)));
L_1803deb3c_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803deb3c_3:;
wr(s->r,16,8,rd(s->u,28,8));
L_1803deb3c_4:;
/* 1803deb44: mov eax, dword ptr [rsi + 0x38] */
L_1803deb44_0:;
L_1803deb44_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x38))));
L_1803deb44_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803deb44_3:;
wr(s->r,0,4,rd(s->u,24,4));
L_1803deb44_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803deb44_5:;
/* 1803deb47: test eax, eax */
L_1803deb47_0:;
L_1803deb47_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803deb47_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803deb47_3:;
wr(s->u,43,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803deb47_4:;
wr(s->r,519,1,(sx(rd(s->u,43,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803deb47_5:;
wr(s->r,518,1,(rd(s->u,43,4)==((U)UINT64_C(0x0))));
L_1803deb47_6:;
wr(s->u,37,4,(rd(s->u,43,4)&((U)UINT64_C(0xff))));
L_1803deb47_7:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803deb47_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803deb47_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803deb47_10:;
/* 1803deb49: jne 0x1803deb62 */
L_1803deb49_0:;
L_1803deb49_1:;
wr(s->u,36,1,(!rd(s->r,518,1)));
L_1803deb49_2:;
if(rd(s->u,36,1)){return UINT64_C(0x1803deb62);}
L_1803deb49_3:;
return UINT64_C(0x1803deb4b);
}
uint64_t b_1803deb44(CPU*s){
/* 1803deb44: mov eax, dword ptr [rsi + 0x38] */
L_1803deb44_0:;
L_1803deb44_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x38))));
L_1803deb44_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803deb44_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803deb44_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803deb44_5:;
/* 1803deb47: test eax, eax */
L_1803deb47_0:;
L_1803deb47_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803deb47_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803deb47_3:;
wr(s->u,19,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803deb47_4:;
wr(s->r,519,1,(sx(rd(s->u,19,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803deb47_5:;
wr(s->r,518,1,(rd(s->u,19,4)==((U)UINT64_C(0x0))));
L_1803deb47_6:;
wr(s->u,13,4,(rd(s->u,19,4)&((U)UINT64_C(0xff))));
L_1803deb47_7:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803deb47_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803deb47_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803deb47_10:;
/* 1803deb49: jne 0x1803deb62 */
L_1803deb49_0:;
L_1803deb49_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803deb49_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803deb62);}
L_1803deb49_3:;
return UINT64_C(0x1803deb4b);
}
uint64_t b_1803deb4b(CPU*s){
/* 1803deb4b: mov edx, dword ptr [rsp + 0x20] */
L_1803deb4b_0:;
L_1803deb4b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803deb4b_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803deb4b_3:;
wr(s->r,16,4,rd(s->u,8,4));
L_1803deb4b_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803deb4b_5:;
/* 1803deb4f: mov rcx, r8 */
L_1803deb4f_0:;
L_1803deb4f_1:;
wr(s->r,8,8,rd(s->r,128,8));
L_1803deb4f_2:;
/* 1803deb52: call qword ptr [rip + 0x63f650] */
L_1803deb52_0:;
L_1803deb52_1:;
wr(s->u,12,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803deb52_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803deb52_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803deb58)));
L_1803deb52_4:;
return (uint64_t)rd(s->u,12,8);
L_1803deb52_5:;
return UINT64_C(0x1803deb58);
}
uint64_t b_1803deb58(CPU*s){
/* 1803deb58: mov r14d, dword ptr [rsp + 0x28] */
L_1803deb58_0:;
L_1803deb58_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803deb58_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803deb58_3:;
wr(s->r,176,4,rd(s->u,8,4));
L_1803deb58_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803deb58_5:;
/* 1803deb5d: jmp 0x1803df120 */
L_1803deb5d_0:;
L_1803deb5d_1:;
return UINT64_C(0x1803df120);
L_1803deb5d_2:;
return UINT64_C(0x1803deb62);
}
uint64_t b_1803deb62(CPU*s){
/* 1803deb62: movaps xmmword ptr [rsp + 0x160], xmm6 */
L_1803deb62_0:;
L_1803deb62_1:;
wr(s->u,0,8,(((U)UINT64_C(0x160))+rd(s->r,32,8)));
L_1803deb62_2:;
wr(s->u,8,16,rd(s->r,4992,16));
L_1803deb62_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,8,16));
L_1803deb62_4:;
/* 1803deb6a: test r15d, r15d */
L_1803deb6a_0:;
L_1803deb6a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803deb6a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803deb6a_3:;
wr(s->u,31,4,(rd(s->r,184,4)&rd(s->r,184,4)));
L_1803deb6a_4:;
wr(s->r,519,1,(sx(rd(s->u,31,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803deb6a_5:;
wr(s->r,518,1,(rd(s->u,31,4)==((U)UINT64_C(0x0))));
L_1803deb6a_6:;
wr(s->u,25,4,(rd(s->u,31,4)&((U)UINT64_C(0xff))));
L_1803deb6a_7:;
wr(s->u,29,1,pop(rd(s->u,25,4),4));
L_1803deb6a_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803deb6a_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803deb6a_10:;
/* 1803deb6d: jne 0x1803ded8f */
L_1803deb6d_0:;
L_1803deb6d_1:;
wr(s->u,24,1,(!rd(s->r,518,1)));
L_1803deb6d_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803ded8f);}
L_1803deb6d_3:;
return UINT64_C(0x1803deb73);
}
uint64_t b_1803deb73(CPU*s){
/* 1803deb73: test eax, eax */
L_1803deb73_0:;
L_1803deb73_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803deb73_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803deb73_3:;
wr(s->u,8,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803deb73_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803deb73_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803deb73_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803deb73_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803deb73_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803deb73_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803deb73_10:;
/* 1803deb75: jle 0x1803deda1 */
L_1803deb75_0:;
L_1803deb75_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803deb75_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803deb75_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803deda1);}
L_1803deb75_4:;
return UINT64_C(0x1803deb7b);
}
uint64_t b_1803deb7b(CPU*s){
/* 1803deb7b: movss xmm6, dword ptr [rip + 0x27c989] */
L_1803deb7b_0:;
L_1803deb7b_1:;
wr(s->r,4992,4,mr(UINT64_C(0x18065b50c),4));
L_1803deb7b_2:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803deb7b_3:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803deb7b_4:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803deb7b_5:;
/* 1803deb83: mov r14, qword ptr [rsp + 0x88] */
L_1803deb83_0:;
L_1803deb83_1:;
wr(s->u,0,8,(((U)UINT64_C(0x88))+rd(s->r,32,8)));
L_1803deb83_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803deb83_3:;
wr(s->r,176,8,rd(s->u,32,8));
L_1803deb83_4:;
/* 1803deb8b: mov r15, qword ptr [rsp + 0x98] */
L_1803deb8b_0:;
L_1803deb8b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x98))+rd(s->r,32,8)));
L_1803deb8b_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803deb8b_3:;
wr(s->r,184,8,rd(s->u,32,8));
L_1803deb8b_4:;
/* 1803deb93: movaps xmmword ptr [rsp + 0x150], xmm7 */
L_1803deb93_0:;
L_1803deb93_1:;
wr(s->u,0,8,(((U)UINT64_C(0x150))+rd(s->r,32,8)));
L_1803deb93_2:;
wr(s->u,16,16,rd(s->r,5056,16));
L_1803deb93_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,16,16));
L_1803deb93_4:;
/* 1803deb9b: movss xmm7, dword ptr [rip + 0x42ddb5] */
L_1803deb9b_0:;
L_1803deb9b_1:;
wr(s->r,5056,4,mr(UINT64_C(0x18080c958),4));
L_1803deb9b_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803deb9b_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803deb9b_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803deb9b_5:;
/* 1803deba3: movaps xmmword ptr [rsp + 0x140], xmm8 */
L_1803deba3_0:;
L_1803deba3_1:;
wr(s->u,0,8,(((U)UINT64_C(0x140))+rd(s->r,32,8)));
L_1803deba3_2:;
wr(s->u,16,16,rd(s->r,5120,16));
L_1803deba3_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,16,16));
L_1803deba3_4:;
/* 1803debac: sub rdx, rbp */
L_1803debac_0:;
L_1803debac_1:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->r,40,8)));
L_1803debac_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->r,40,8),8,1));
L_1803debac_3:;
wr(s->r,16,8,(rd(s->r,16,8)-rd(s->r,40,8)));
L_1803debac_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803debac_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803debac_6:;
wr(s->u,40,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803debac_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803debac_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803debac_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803debac_10:;
/* 1803debaf: mov r12, rbx */
L_1803debaf_0:;
L_1803debaf_1:;
wr(s->r,160,8,rd(s->r,24,8));
L_1803debaf_2:;
/* 1803debb2: movss xmm8, dword ptr [rip + 0x42dda1] */
L_1803debb2_0:;
L_1803debb2_1:;
wr(s->r,5120,4,mr(UINT64_C(0x18080c95c),4));
L_1803debb2_2:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803debb2_3:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803debb2_4:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803debb2_5:;
/* 1803debbb: movaps xmmword ptr [rsp + 0x130], xmm9 */
L_1803debbb_0:;
L_1803debbb_1:;
wr(s->u,0,8,(((U)UINT64_C(0x130))+rd(s->r,32,8)));
L_1803debbb_2:;
wr(s->u,16,16,rd(s->r,5184,16));
L_1803debbb_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,16,16));
L_1803debbb_4:;
/* 1803debc4: mov qword ptr [rsp + 0xc8], rdx */
L_1803debc4_0:;
L_1803debc4_1:;
wr(s->u,0,8,(((U)UINT64_C(0xc8))+rd(s->r,32,8)));
L_1803debc4_2:;
wr(s->u,8,8,rd(s->r,16,8));
L_1803debc4_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803debc4_4:;
/* 1803debcc: xorps xmm9, xmm9 */
L_1803debcc_0:;
L_1803debcc_1:;
wr(s->r,5184,4,(rd(s->r,5184,4)^rd(s->r,5184,4)));
L_1803debcc_2:;
wr(s->r,5188,4,(rd(s->r,5188,4)^rd(s->r,5188,4)));
L_1803debcc_3:;
wr(s->r,5192,4,(rd(s->r,5192,4)^rd(s->r,5192,4)));
L_1803debcc_4:;
wr(s->r,5196,4,(rd(s->r,5196,4)^rd(s->r,5196,4)));
L_1803debcc_5:;
/* 1803debd0: jmp 0x1803debd7 */
L_1803debd0_0:;
L_1803debd0_1:;
return UINT64_C(0x1803debd7);
L_1803debd0_2:;
return UINT64_C(0x1803debd2);
}
uint64_t b_1803deb93(CPU*s){
/* 1803deb93: movaps xmmword ptr [rsp + 0x150], xmm7 */
L_1803deb93_0:;
L_1803deb93_1:;
wr(s->u,0,8,(((U)UINT64_C(0x150))+rd(s->r,32,8)));
L_1803deb93_2:;
wr(s->u,16,16,rd(s->r,5056,16));
L_1803deb93_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,16,16));
L_1803deb93_4:;
/* 1803deb9b: movss xmm7, dword ptr [rip + 0x42ddb5] */
L_1803deb9b_0:;
L_1803deb9b_1:;
wr(s->r,5056,4,mr(UINT64_C(0x18080c958),4));
L_1803deb9b_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803deb9b_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803deb9b_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803deb9b_5:;
/* 1803deba3: movaps xmmword ptr [rsp + 0x140], xmm8 */
L_1803deba3_0:;
L_1803deba3_1:;
wr(s->u,0,8,(((U)UINT64_C(0x140))+rd(s->r,32,8)));
L_1803deba3_2:;
wr(s->u,16,16,rd(s->r,5120,16));
L_1803deba3_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,16,16));
L_1803deba3_4:;
/* 1803debac: sub rdx, rbp */
L_1803debac_0:;
L_1803debac_1:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->r,40,8)));
L_1803debac_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->r,40,8),8,1));
L_1803debac_3:;
wr(s->r,16,8,(rd(s->r,16,8)-rd(s->r,40,8)));
L_1803debac_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803debac_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803debac_6:;
wr(s->u,32,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803debac_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803debac_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803debac_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803debac_10:;
/* 1803debaf: mov r12, rbx */
L_1803debaf_0:;
L_1803debaf_1:;
wr(s->r,160,8,rd(s->r,24,8));
L_1803debaf_2:;
/* 1803debb2: movss xmm8, dword ptr [rip + 0x42dda1] */
L_1803debb2_0:;
L_1803debb2_1:;
wr(s->r,5120,4,mr(UINT64_C(0x18080c95c),4));
L_1803debb2_2:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803debb2_3:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803debb2_4:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803debb2_5:;
/* 1803debbb: movaps xmmword ptr [rsp + 0x130], xmm9 */
L_1803debbb_0:;
L_1803debbb_1:;
wr(s->u,0,8,(((U)UINT64_C(0x130))+rd(s->r,32,8)));
L_1803debbb_2:;
wr(s->u,16,16,rd(s->r,5184,16));
L_1803debbb_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,16,16));
L_1803debbb_4:;
/* 1803debc4: mov qword ptr [rsp + 0xc8], rdx */
L_1803debc4_0:;
L_1803debc4_1:;
wr(s->u,0,8,(((U)UINT64_C(0xc8))+rd(s->r,32,8)));
L_1803debc4_2:;
wr(s->u,8,8,rd(s->r,16,8));
L_1803debc4_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803debc4_4:;
/* 1803debcc: xorps xmm9, xmm9 */
L_1803debcc_0:;
L_1803debcc_1:;
wr(s->r,5184,4,(rd(s->r,5184,4)^rd(s->r,5184,4)));
L_1803debcc_2:;
wr(s->r,5188,4,(rd(s->r,5188,4)^rd(s->r,5188,4)));
L_1803debcc_3:;
wr(s->r,5192,4,(rd(s->r,5192,4)^rd(s->r,5192,4)));
L_1803debcc_4:;
wr(s->r,5196,4,(rd(s->r,5196,4)^rd(s->r,5196,4)));
L_1803debcc_5:;
/* 1803debd0: jmp 0x1803debd7 */
L_1803debd0_0:;
L_1803debd0_1:;
return UINT64_C(0x1803debd7);
L_1803debd0_2:;
return UINT64_C(0x1803debd2);
}
uint64_t b_1803debd2(CPU*s){
/* 1803debd2: mov r10, qword ptr [rsp + 0x30] */
L_1803debd2_0:;
L_1803debd2_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803debd2_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803debd2_3:;
wr(s->r,144,8,rd(s->u,32,8));
L_1803debd2_4:;
/* 1803debd7: comiss xmm9, dword ptr [rbp] */
L_1803debd7_0:;
L_1803debd7_1:;
wr(s->u,41,1,isnan(fv(rd(s->r,5184,4),4)));
L_1803debd7_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803debd7_3:;
wr(s->u,42,1,isnan(fv(rd(s->u,24,4),4)));
L_1803debd7_4:;
wr(s->r,514,1,((rd(s->u,41,1)!=0)||(rd(s->u,42,1)!=0)));
L_1803debd7_5:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803debd7_6:;
wr(s->u,43,1,(fv(rd(s->r,5184,4),4)==fv(rd(s->u,24,4),4)));
L_1803debd7_7:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,43,1)));
L_1803debd7_8:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803debd7_9:;
wr(s->u,44,1,(fv(rd(s->r,5184,4),4)<fv(rd(s->u,24,4),4)));
L_1803debd7_10:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,44,1)));
L_1803debd7_11:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803debd7_12:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803debd7_13:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803debd7_14:;
/* 1803debdc: movsxd rax, dword ptr [rdx + rbp] */
L_1803debdc_0:;
L_1803debdc_1:;
wr(s->u,0,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803debdc_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803debdc_3:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803debdc_4:;
wr(s->r,0,8,(U)sx(rd(s->u,28,4),4));
L_1803debdc_5:;
/* 1803debe0: jae 0x1803deca7 */
L_1803debe0_0:;
L_1803debe0_1:;
wr(s->u,40,1,(!rd(s->r,512,1)));
L_1803debe0_2:;
if(rd(s->u,40,1)){return UINT64_C(0x1803deca7);}
L_1803debe0_3:;
return UINT64_C(0x1803debe6);
}
uint64_t b_1803debd7(CPU*s){
/* 1803debd7: comiss xmm9, dword ptr [rbp] */
L_1803debd7_0:;
L_1803debd7_1:;
wr(s->u,25,1,isnan(fv(rd(s->r,5184,4),4)));
L_1803debd7_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803debd7_3:;
wr(s->u,26,1,isnan(fv(rd(s->u,16,4),4)));
L_1803debd7_4:;
wr(s->r,514,1,((rd(s->u,25,1)!=0)||(rd(s->u,26,1)!=0)));
L_1803debd7_5:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803debd7_6:;
wr(s->u,27,1,(fv(rd(s->r,5184,4),4)==fv(rd(s->u,16,4),4)));
L_1803debd7_7:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,27,1)));
L_1803debd7_8:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803debd7_9:;
wr(s->u,28,1,(fv(rd(s->r,5184,4),4)<fv(rd(s->u,16,4),4)));
L_1803debd7_10:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,28,1)));
L_1803debd7_11:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803debd7_12:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803debd7_13:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803debd7_14:;
/* 1803debdc: movsxd rax, dword ptr [rdx + rbp] */
L_1803debdc_0:;
L_1803debdc_1:;
wr(s->u,0,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803debdc_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803debdc_3:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803debdc_4:;
wr(s->r,0,8,(U)sx(rd(s->u,20,4),4));
L_1803debdc_5:;
/* 1803debe0: jae 0x1803deca7 */
L_1803debe0_0:;
L_1803debe0_1:;
wr(s->u,24,1,(!rd(s->r,512,1)));
L_1803debe0_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803deca7);}
L_1803debe0_3:;
return UINT64_C(0x1803debe6);
}
uint64_t b_1803debe6(CPU*s){
/* 1803debe6: lea rbx, [rax*4] */
L_1803debe6_0:;
L_1803debe6_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803debe6_2:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803debe6_3:;
/* 1803debee: mov rax, qword ptr [rsp + 0x50] */
L_1803debee_0:;
L_1803debee_1:;
wr(s->u,24,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803debee_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803debee_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803debee_4:;
/* 1803debf3: movss xmm1, dword ptr [rbx + rdi] */
L_1803debf3_0:;
L_1803debf3_1:;
wr(s->u,0,8,(rd(s->r,56,8)*((U)UINT64_C(0x1))));
L_1803debf3_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803debf3_3:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803debf3_4:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803debf3_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803debf3_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803debf3_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803debf3_8:;
/* 1803debf8: subss xmm1, dword ptr [rbx + r13] */
L_1803debf8_0:;
L_1803debf8_1:;
wr(s->u,0,8,(rd(s->r,168,8)*((U)UINT64_C(0x1))));
L_1803debf8_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803debf8_3:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803debf8_4:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->u,32,4),4),4));
L_1803debf8_5:;
/* 1803debfe: movss xmm3, dword ptr [rbx + rax] */
L_1803debfe_0:;
L_1803debfe_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803debfe_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803debfe_3:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803debfe_4:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803debfe_5:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803debfe_6:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803debfe_7:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803debfe_8:;
/* 1803dec03: subss xmm1, xmm3 */
L_1803dec03_0:;
L_1803dec03_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803dec03_2:;
/* 1803dec07: addss xmm1, xmm6 */
L_1803dec07_0:;
L_1803dec07_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803dec07_2:;
/* 1803dec0b: movaps xmm2, xmm1 */
L_1803dec0b_0:;
L_1803dec0b_1:;
wr(s->r,4736,4,rd(s->r,4672,4));
L_1803dec0b_2:;
wr(s->r,4740,4,rd(s->r,4676,4));
L_1803dec0b_3:;
wr(s->r,4744,4,rd(s->r,4680,4));
L_1803dec0b_4:;
wr(s->r,4748,4,rd(s->r,4684,4));
L_1803dec0b_5:;
/* 1803dec0e: mulss xmm2, xmm8 */
L_1803dec0e_0:;
L_1803dec0e_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803dec0e_2:;
/* 1803dec13: cvttss2si ecx, xmm2 */
L_1803dec13_0:;
L_1803dec13_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4736,4),4),4));
L_1803dec13_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dec13_3:;
/* 1803dec17: cmp ecx, 0x80000000 */
L_1803dec17_0:;
L_1803dec17_1:;
wr(s->u,50,4,rd(s->r,8,4));
L_1803dec17_2:;
wr(s->r,512,1,(rd(s->u,50,4)<((U)UINT64_C(0x80000000))));
L_1803dec17_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,50,4),((U)UINT64_C(0x80000000)),4,1));
L_1803dec17_4:;
wr(s->u,54,4,(rd(s->u,50,4)-((U)UINT64_C(0x80000000))));
L_1803dec17_5:;
wr(s->r,519,1,(sx(rd(s->u,54,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dec17_6:;
wr(s->r,518,1,(rd(s->u,54,4)==((U)UINT64_C(0x0))));
L_1803dec17_7:;
wr(s->u,44,4,(rd(s->u,54,4)&((U)UINT64_C(0xff))));
L_1803dec17_8:;
wr(s->u,48,1,pop(rd(s->u,44,4),4));
L_1803dec17_9:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dec17_10:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dec17_11:;
/* 1803dec1d: je 0x1803dec3f */
L_1803dec1d_0:;
L_1803dec1d_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dec3f);}
L_1803dec1d_2:;
return UINT64_C(0x1803dec1f);
}
uint64_t b_1803dec1f(CPU*s){
/* 1803dec1f: pxor xmm0, xmm0 */
L_1803dec1f_0:;
L_1803dec1f_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803dec1f_2:;
/* 1803dec23: cvtsi2ss xmm0, ecx */
L_1803dec23_0:;
L_1803dec23_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803dec23_2:;
/* 1803dec27: ucomiss xmm0, xmm2 */
L_1803dec27_0:;
L_1803dec27_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dec27_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803dec27_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803dec27_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4736,4),4)));
L_1803dec27_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803dec27_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4736,4),4)));
L_1803dec27_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dec27_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dec27_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dec27_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dec27_11:;
/* 1803dec2a: je 0x1803dec3f */
L_1803dec2a_0:;
L_1803dec2a_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dec3f);}
L_1803dec2a_2:;
return UINT64_C(0x1803dec2c);
}
uint64_t b_1803dec2c(CPU*s){
/* 1803dec2c: unpcklps xmm2, xmm2 */
L_1803dec2c_0:;
L_1803dec2c_1:;
wr(s->r,4744,4,rd(s->r,4740,4));
L_1803dec2c_2:;
wr(s->r,4748,4,rd(s->r,4740,4));
L_1803dec2c_3:;
wr(s->r,4740,4,rd(s->r,4736,4));
L_1803dec2c_4:;
/* 1803dec2f: movmskps eax, xmm2 */
L_1803dec2f_0:;
L_1803dec2f_1:;
wr(s->r,0,4,(((rd(s->r,4736,16)>>31)&1)<<0)|(((rd(s->r,4736,16)>>63)&1)<<1)|(((rd(s->r,4736,16)>>95)&1)<<2)|(((rd(s->r,4736,16)>>127)&1)<<3));
L_1803dec2f_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dec2f_3:;
/* 1803dec32: pxor xmm2, xmm2 */
L_1803dec32_0:;
L_1803dec32_1:;
wr(s->r,4736,16,(rd(s->r,4736,16)^rd(s->r,4736,16)));
L_1803dec32_2:;
/* 1803dec36: and eax, 1 */
L_1803dec36_0:;
L_1803dec36_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dec36_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dec36_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dec36_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dec36_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dec36_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dec36_7:;
wr(s->u,20,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dec36_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803dec36_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dec36_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dec36_11:;
/* 1803dec39: sub ecx, eax */
L_1803dec39_0:;
L_1803dec39_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,0,4)));
L_1803dec39_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,1));
L_1803dec39_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,0,4)));
L_1803dec39_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dec39_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dec39_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dec39_7:;
wr(s->u,20,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dec39_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803dec39_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dec39_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dec39_11:;
/* 1803dec3b: cvtsi2ss xmm2, ecx */
L_1803dec3b_0:;
L_1803dec3b_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803dec3b_2:;
/* 1803dec3f: mulss xmm2, xmm7 */
L_1803dec3f_0:;
L_1803dec3f_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803dec3f_2:;
/* 1803dec43: subss xmm1, xmm2 */
L_1803dec43_0:;
L_1803dec43_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803dec43_2:;
/* 1803dec47: addss xmm1, xmm6 */
L_1803dec47_0:;
L_1803dec47_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803dec47_2:;
/* 1803dec4b: addss xmm1, xmm3 */
L_1803dec4b_0:;
L_1803dec4b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803dec4b_2:;
/* 1803dec4f: movss dword ptr [rbx + r11], xmm1 */
L_1803dec4f_0:;
L_1803dec4f_1:;
wr(s->u,0,8,(rd(s->r,152,8)*((U)UINT64_C(0x1))));
L_1803dec4f_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803dec4f_3:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803dec4f_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dec4f_5:;
/* 1803dec55: addss xmm1, dword ptr [rbx + r13] */
L_1803dec55_0:;
L_1803dec55_1:;
wr(s->u,0,8,(rd(s->r,168,8)*((U)UINT64_C(0x1))));
L_1803dec55_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803dec55_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dec55_4:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->u,16,4),4),4));
L_1803dec55_5:;
/* 1803dec5b: addss xmm1, xmm6 */
L_1803dec5b_0:;
L_1803dec5b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803dec5b_2:;
/* 1803dec5f: movaps xmm2, xmm1 */
L_1803dec5f_0:;
L_1803dec5f_1:;
wr(s->r,4736,4,rd(s->r,4672,4));
L_1803dec5f_2:;
wr(s->r,4740,4,rd(s->r,4676,4));
L_1803dec5f_3:;
wr(s->r,4744,4,rd(s->r,4680,4));
L_1803dec5f_4:;
wr(s->r,4748,4,rd(s->r,4684,4));
L_1803dec5f_5:;
/* 1803dec62: mulss xmm2, xmm8 */
L_1803dec62_0:;
L_1803dec62_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803dec62_2:;
/* 1803dec67: cvttss2si ecx, xmm2 */
L_1803dec67_0:;
L_1803dec67_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4736,4),4),4));
L_1803dec67_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dec67_3:;
/* 1803dec6b: cmp ecx, 0x80000000 */
L_1803dec6b_0:;
L_1803dec6b_1:;
wr(s->u,26,4,rd(s->r,8,4));
L_1803dec6b_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0x80000000))));
L_1803dec6b_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0x80000000)),4,1));
L_1803dec6b_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0x80000000))));
L_1803dec6b_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dec6b_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803dec6b_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803dec6b_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803dec6b_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dec6b_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dec6b_11:;
/* 1803dec71: je 0x1803dec93 */
L_1803dec71_0:;
L_1803dec71_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dec93);}
L_1803dec71_2:;
return UINT64_C(0x1803dec73);
}
uint64_t b_1803dec3f(CPU*s){
/* 1803dec3f: mulss xmm2, xmm7 */
L_1803dec3f_0:;
L_1803dec3f_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803dec3f_2:;
/* 1803dec43: subss xmm1, xmm2 */
L_1803dec43_0:;
L_1803dec43_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803dec43_2:;
/* 1803dec47: addss xmm1, xmm6 */
L_1803dec47_0:;
L_1803dec47_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803dec47_2:;
/* 1803dec4b: addss xmm1, xmm3 */
L_1803dec4b_0:;
L_1803dec4b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803dec4b_2:;
/* 1803dec4f: movss dword ptr [rbx + r11], xmm1 */
L_1803dec4f_0:;
L_1803dec4f_1:;
wr(s->u,0,8,(rd(s->r,152,8)*((U)UINT64_C(0x1))));
L_1803dec4f_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803dec4f_3:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803dec4f_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dec4f_5:;
/* 1803dec55: addss xmm1, dword ptr [rbx + r13] */
L_1803dec55_0:;
L_1803dec55_1:;
wr(s->u,0,8,(rd(s->r,168,8)*((U)UINT64_C(0x1))));
L_1803dec55_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803dec55_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dec55_4:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->u,16,4),4),4));
L_1803dec55_5:;
/* 1803dec5b: addss xmm1, xmm6 */
L_1803dec5b_0:;
L_1803dec5b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803dec5b_2:;
/* 1803dec5f: movaps xmm2, xmm1 */
L_1803dec5f_0:;
L_1803dec5f_1:;
wr(s->r,4736,4,rd(s->r,4672,4));
L_1803dec5f_2:;
wr(s->r,4740,4,rd(s->r,4676,4));
L_1803dec5f_3:;
wr(s->r,4744,4,rd(s->r,4680,4));
L_1803dec5f_4:;
wr(s->r,4748,4,rd(s->r,4684,4));
L_1803dec5f_5:;
/* 1803dec62: mulss xmm2, xmm8 */
L_1803dec62_0:;
L_1803dec62_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803dec62_2:;
/* 1803dec67: cvttss2si ecx, xmm2 */
L_1803dec67_0:;
L_1803dec67_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4736,4),4),4));
L_1803dec67_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dec67_3:;
/* 1803dec6b: cmp ecx, 0x80000000 */
L_1803dec6b_0:;
L_1803dec6b_1:;
wr(s->u,26,4,rd(s->r,8,4));
L_1803dec6b_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0x80000000))));
L_1803dec6b_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0x80000000)),4,1));
L_1803dec6b_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0x80000000))));
L_1803dec6b_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dec6b_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803dec6b_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803dec6b_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803dec6b_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dec6b_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dec6b_11:;
/* 1803dec71: je 0x1803dec93 */
L_1803dec71_0:;
L_1803dec71_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dec93);}
L_1803dec71_2:;
return UINT64_C(0x1803dec73);
}
uint64_t b_1803dec73(CPU*s){
/* 1803dec73: pxor xmm0, xmm0 */
L_1803dec73_0:;
L_1803dec73_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803dec73_2:;
/* 1803dec77: cvtsi2ss xmm0, ecx */
L_1803dec77_0:;
L_1803dec77_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803dec77_2:;
/* 1803dec7b: ucomiss xmm0, xmm2 */
L_1803dec7b_0:;
L_1803dec7b_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dec7b_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803dec7b_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803dec7b_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4736,4),4)));
L_1803dec7b_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803dec7b_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4736,4),4)));
L_1803dec7b_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dec7b_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dec7b_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dec7b_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dec7b_11:;
/* 1803dec7e: je 0x1803dec93 */
L_1803dec7e_0:;
L_1803dec7e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dec93);}
L_1803dec7e_2:;
return UINT64_C(0x1803dec80);
}
uint64_t b_1803dec80(CPU*s){
/* 1803dec80: unpcklps xmm2, xmm2 */
L_1803dec80_0:;
L_1803dec80_1:;
wr(s->r,4744,4,rd(s->r,4740,4));
L_1803dec80_2:;
wr(s->r,4748,4,rd(s->r,4740,4));
L_1803dec80_3:;
wr(s->r,4740,4,rd(s->r,4736,4));
L_1803dec80_4:;
/* 1803dec83: movmskps eax, xmm2 */
L_1803dec83_0:;
L_1803dec83_1:;
wr(s->r,0,4,(((rd(s->r,4736,16)>>31)&1)<<0)|(((rd(s->r,4736,16)>>63)&1)<<1)|(((rd(s->r,4736,16)>>95)&1)<<2)|(((rd(s->r,4736,16)>>127)&1)<<3));
L_1803dec83_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dec83_3:;
/* 1803dec86: pxor xmm2, xmm2 */
L_1803dec86_0:;
L_1803dec86_1:;
wr(s->r,4736,16,(rd(s->r,4736,16)^rd(s->r,4736,16)));
L_1803dec86_2:;
/* 1803dec8a: and eax, 1 */
L_1803dec8a_0:;
L_1803dec8a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dec8a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dec8a_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dec8a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dec8a_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dec8a_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dec8a_7:;
wr(s->u,20,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dec8a_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803dec8a_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dec8a_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dec8a_11:;
/* 1803dec8d: sub ecx, eax */
L_1803dec8d_0:;
L_1803dec8d_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,0,4)));
L_1803dec8d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,1));
L_1803dec8d_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,0,4)));
L_1803dec8d_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dec8d_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dec8d_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dec8d_7:;
wr(s->u,20,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dec8d_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803dec8d_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dec8d_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dec8d_11:;
/* 1803dec8f: cvtsi2ss xmm2, ecx */
L_1803dec8f_0:;
L_1803dec8f_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803dec8f_2:;
/* 1803dec93: mulss xmm2, xmm7 */
L_1803dec93_0:;
L_1803dec93_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803dec93_2:;
/* 1803dec97: subss xmm1, xmm2 */
L_1803dec97_0:;
L_1803dec97_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803dec97_2:;
/* 1803dec9b: addss xmm1, xmm6 */
L_1803dec9b_0:;
L_1803dec9b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803dec9b_2:;
/* 1803dec9f: movss dword ptr [rbx + r12], xmm1 */
L_1803dec9f_0:;
L_1803dec9f_1:;
wr(s->u,0,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803dec9f_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803dec9f_3:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803dec9f_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dec9f_5:;
/* 1803deca5: jmp 0x1803ded09 */
L_1803deca5_0:;
L_1803deca5_1:;
return UINT64_C(0x1803ded09);
L_1803deca5_2:;
return UINT64_C(0x1803deca7);
}
uint64_t b_1803dec93(CPU*s){
/* 1803dec93: mulss xmm2, xmm7 */
L_1803dec93_0:;
L_1803dec93_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803dec93_2:;
/* 1803dec97: subss xmm1, xmm2 */
L_1803dec97_0:;
L_1803dec97_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803dec97_2:;
/* 1803dec9b: addss xmm1, xmm6 */
L_1803dec9b_0:;
L_1803dec9b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803dec9b_2:;
/* 1803dec9f: movss dword ptr [rbx + r12], xmm1 */
L_1803dec9f_0:;
L_1803dec9f_1:;
wr(s->u,0,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803dec9f_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803dec9f_3:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803dec9f_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dec9f_5:;
/* 1803deca5: jmp 0x1803ded09 */
L_1803deca5_0:;
L_1803deca5_1:;
return UINT64_C(0x1803ded09);
L_1803deca5_2:;
return UINT64_C(0x1803deca7);
}
uint64_t b_1803deca7(CPU*s){
/* 1803deca7: lea rbx, [rax*4] */
L_1803deca7_0:;
L_1803deca7_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803deca7_2:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803deca7_3:;
/* 1803decaf: movaps xmm2, xmm10 */
L_1803decaf_0:;
L_1803decaf_1:;
wr(s->r,4736,4,rd(s->r,5248,4));
L_1803decaf_2:;
wr(s->r,4740,4,rd(s->r,5252,4));
L_1803decaf_3:;
wr(s->r,4744,4,rd(s->r,5256,4));
L_1803decaf_4:;
wr(s->r,4748,4,rd(s->r,5260,4));
L_1803decaf_5:;
/* 1803decb3: mulss xmm2, dword ptr [rbx + r11] */
L_1803decb3_0:;
L_1803decb3_1:;
wr(s->u,0,8,(rd(s->r,152,8)*((U)UINT64_C(0x1))));
L_1803decb3_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803decb3_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803decb3_4:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,24,4),4),4));
L_1803decb3_5:;
/* 1803decb9: addss xmm2, dword ptr [rbx + r13] */
L_1803decb9_0:;
L_1803decb9_1:;
wr(s->u,0,8,(rd(s->r,168,8)*((U)UINT64_C(0x1))));
L_1803decb9_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803decb9_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803decb9_4:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->u,24,4),4),4));
L_1803decb9_5:;
/* 1803decbf: addss xmm2, xmm6 */
L_1803decbf_0:;
L_1803decbf_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803decbf_2:;
/* 1803decc3: movaps xmm1, xmm2 */
L_1803decc3_0:;
L_1803decc3_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803decc3_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803decc3_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803decc3_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803decc3_5:;
/* 1803decc6: mulss xmm1, xmm8 */
L_1803decc6_0:;
L_1803decc6_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803decc6_2:;
/* 1803deccb: cvttss2si ecx, xmm1 */
L_1803deccb_0:;
L_1803deccb_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803deccb_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803deccb_3:;
/* 1803deccf: cmp ecx, 0x80000000 */
L_1803deccf_0:;
L_1803deccf_1:;
wr(s->u,34,4,rd(s->r,8,4));
L_1803deccf_2:;
wr(s->r,512,1,(rd(s->u,34,4)<((U)UINT64_C(0x80000000))));
L_1803deccf_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,34,4),((U)UINT64_C(0x80000000)),4,1));
L_1803deccf_4:;
wr(s->u,38,4,(rd(s->u,34,4)-((U)UINT64_C(0x80000000))));
L_1803deccf_5:;
wr(s->r,519,1,(sx(rd(s->u,38,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803deccf_6:;
wr(s->r,518,1,(rd(s->u,38,4)==((U)UINT64_C(0x0))));
L_1803deccf_7:;
wr(s->u,28,4,(rd(s->u,38,4)&((U)UINT64_C(0xff))));
L_1803deccf_8:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803deccf_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803deccf_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803deccf_11:;
/* 1803decd5: je 0x1803decf7 */
L_1803decd5_0:;
L_1803decd5_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803decf7);}
L_1803decd5_2:;
return UINT64_C(0x1803decd7);
}
uint64_t b_1803decd7(CPU*s){
/* 1803decd7: pxor xmm0, xmm0 */
L_1803decd7_0:;
L_1803decd7_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803decd7_2:;
/* 1803decdb: cvtsi2ss xmm0, ecx */
L_1803decdb_0:;
L_1803decdb_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803decdb_2:;
/* 1803decdf: ucomiss xmm0, xmm1 */
L_1803decdf_0:;
L_1803decdf_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803decdf_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803decdf_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803decdf_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803decdf_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803decdf_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803decdf_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803decdf_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803decdf_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803decdf_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803decdf_11:;
/* 1803dece2: je 0x1803decf7 */
L_1803dece2_0:;
L_1803dece2_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803decf7);}
L_1803dece2_2:;
return UINT64_C(0x1803dece4);
}
uint64_t b_1803dece4(CPU*s){
/* 1803dece4: unpcklps xmm1, xmm1 */
L_1803dece4_0:;
L_1803dece4_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803dece4_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803dece4_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803dece4_4:;
/* 1803dece7: movmskps eax, xmm1 */
L_1803dece7_0:;
L_1803dece7_1:;
wr(s->r,0,4,(((rd(s->r,4672,16)>>31)&1)<<0)|(((rd(s->r,4672,16)>>63)&1)<<1)|(((rd(s->r,4672,16)>>95)&1)<<2)|(((rd(s->r,4672,16)>>127)&1)<<3));
L_1803dece7_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dece7_3:;
/* 1803decea: pxor xmm1, xmm1 */
L_1803decea_0:;
L_1803decea_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803decea_2:;
/* 1803decee: and eax, 1 */
L_1803decee_0:;
L_1803decee_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803decee_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803decee_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803decee_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803decee_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803decee_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803decee_7:;
wr(s->u,20,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803decee_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803decee_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803decee_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803decee_11:;
/* 1803decf1: sub ecx, eax */
L_1803decf1_0:;
L_1803decf1_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,0,4)));
L_1803decf1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,1));
L_1803decf1_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,0,4)));
L_1803decf1_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803decf1_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803decf1_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803decf1_7:;
wr(s->u,20,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803decf1_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803decf1_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803decf1_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803decf1_11:;
/* 1803decf3: cvtsi2ss xmm1, ecx */
L_1803decf3_0:;
L_1803decf3_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803decf3_2:;
/* 1803decf7: mulss xmm1, xmm7 */
L_1803decf7_0:;
L_1803decf7_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803decf7_2:;
/* 1803decfb: subss xmm2, xmm1 */
L_1803decfb_0:;
L_1803decfb_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803decfb_2:;
/* 1803decff: addss xmm2, xmm6 */
L_1803decff_0:;
L_1803decff_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803decff_2:;
/* 1803ded03: movss dword ptr [rbx + r12], xmm2 */
L_1803ded03_0:;
L_1803ded03_1:;
wr(s->u,0,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803ded03_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803ded03_3:;
wr(s->u,16,4,rd(s->r,4736,4));
L_1803ded03_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ded03_5:;
/* 1803ded09: movss xmm0, dword ptr [rbx + r12] */
L_1803ded09_0:;
L_1803ded09_1:;
wr(s->u,0,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803ded09_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803ded09_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ded09_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803ded09_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ded09_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ded09_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ded09_8:;
/* 1803ded0f: subss xmm0, dword ptr [rbx + rdi] */
L_1803ded0f_0:;
L_1803ded0f_1:;
wr(s->u,0,8,(rd(s->r,56,8)*((U)UINT64_C(0x1))));
L_1803ded0f_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803ded0f_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ded0f_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->u,16,4),4),4));
L_1803ded0f_5:;
/* 1803ded14: movss dword ptr [rbx + r10], xmm0 */
L_1803ded14_0:;
L_1803ded14_1:;
wr(s->u,0,8,(rd(s->r,144,8)*((U)UINT64_C(0x1))));
L_1803ded14_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803ded14_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ded14_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ded14_5:;
/* 1803ded1a: call 0x180609b08 */
L_1803ded1a_0:;
L_1803ded1a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ded1a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ded1f)));
L_1803ded1a_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803ded1a_4:;
return UINT64_C(0x1803ded1f);
}
uint64_t b_1803decf7(CPU*s){
/* 1803decf7: mulss xmm1, xmm7 */
L_1803decf7_0:;
L_1803decf7_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803decf7_2:;
/* 1803decfb: subss xmm2, xmm1 */
L_1803decfb_0:;
L_1803decfb_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803decfb_2:;
/* 1803decff: addss xmm2, xmm6 */
L_1803decff_0:;
L_1803decff_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803decff_2:;
/* 1803ded03: movss dword ptr [rbx + r12], xmm2 */
L_1803ded03_0:;
L_1803ded03_1:;
wr(s->u,0,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803ded03_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803ded03_3:;
wr(s->u,16,4,rd(s->r,4736,4));
L_1803ded03_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ded03_5:;
/* 1803ded09: movss xmm0, dword ptr [rbx + r12] */
L_1803ded09_0:;
L_1803ded09_1:;
wr(s->u,0,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803ded09_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803ded09_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ded09_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803ded09_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ded09_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ded09_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ded09_8:;
/* 1803ded0f: subss xmm0, dword ptr [rbx + rdi] */
L_1803ded0f_0:;
L_1803ded0f_1:;
wr(s->u,0,8,(rd(s->r,56,8)*((U)UINT64_C(0x1))));
L_1803ded0f_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803ded0f_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ded0f_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->u,16,4),4),4));
L_1803ded0f_5:;
/* 1803ded14: movss dword ptr [rbx + r10], xmm0 */
L_1803ded14_0:;
L_1803ded14_1:;
wr(s->u,0,8,(rd(s->r,144,8)*((U)UINT64_C(0x1))));
L_1803ded14_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803ded14_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ded14_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ded14_5:;
/* 1803ded1a: call 0x180609b08 */
L_1803ded1a_0:;
L_1803ded1a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ded1a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ded1f)));
L_1803ded1a_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803ded1a_4:;
return UINT64_C(0x1803ded1f);
}
uint64_t b_1803ded09(CPU*s){
/* 1803ded09: movss xmm0, dword ptr [rbx + r12] */
L_1803ded09_0:;
L_1803ded09_1:;
wr(s->u,0,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803ded09_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803ded09_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ded09_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803ded09_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ded09_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ded09_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ded09_8:;
/* 1803ded0f: subss xmm0, dword ptr [rbx + rdi] */
L_1803ded0f_0:;
L_1803ded0f_1:;
wr(s->u,0,8,(rd(s->r,56,8)*((U)UINT64_C(0x1))));
L_1803ded0f_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803ded0f_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ded0f_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->u,16,4),4),4));
L_1803ded0f_5:;
/* 1803ded14: movss dword ptr [rbx + r10], xmm0 */
L_1803ded14_0:;
L_1803ded14_1:;
wr(s->u,0,8,(rd(s->r,144,8)*((U)UINT64_C(0x1))));
L_1803ded14_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803ded14_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803ded14_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ded14_5:;
/* 1803ded1a: call 0x180609b08 */
L_1803ded1a_0:;
L_1803ded1a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ded1a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ded1f)));
L_1803ded1a_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803ded1a_4:;
return UINT64_C(0x1803ded1f);
}
uint64_t b_1803ded1f(CPU*s){
/* 1803ded1f: mov rax, qword ptr [rsp + 0x30] */
L_1803ded1f_0:;
L_1803ded1f_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ded1f_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803ded1f_3:;
wr(s->r,0,8,rd(s->u,28,8));
L_1803ded1f_4:;
/* 1803ded24: movss dword ptr [rbx + r14], xmm0 */
L_1803ded24_0:;
L_1803ded24_1:;
wr(s->u,0,8,(rd(s->r,176,8)*((U)UINT64_C(0x1))));
L_1803ded24_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803ded24_3:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803ded24_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803ded24_5:;
/* 1803ded2a: movss xmm0, dword ptr [rbx + rax] */
L_1803ded2a_0:;
L_1803ded2a_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ded2a_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_1803ded2a_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ded2a_4:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803ded2a_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ded2a_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ded2a_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ded2a_8:;
/* 1803ded2f: call 0x180609b0e */
L_1803ded2f_0:;
L_1803ded2f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ded2f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ded34)));
L_1803ded2f_3:;
return (uint64_t)UINT64_C(0x180609b0e);
L_1803ded2f_4:;
return UINT64_C(0x1803ded34);
}
uint64_t b_1803ded34(CPU*s){
/* 1803ded34: mov edx, dword ptr [rsp + 0x40] */
L_1803ded34_0:;
L_1803ded34_1:;
wr(s->u,24,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ded34_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803ded34_3:;
wr(s->r,16,4,rd(s->u,44,4));
L_1803ded34_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ded34_5:;
/* 1803ded38: mov r11, qword ptr [rsp + 0xd8] */
L_1803ded38_0:;
L_1803ded38_1:;
wr(s->u,32,8,(((U)UINT64_C(0xd8))+rd(s->r,32,8)));
L_1803ded38_2:;
wr(s->u,48,8,mr((uint64_t)rd(s->u,32,8),8));
L_1803ded38_3:;
wr(s->r,152,8,rd(s->u,48,8));
L_1803ded38_4:;
/* 1803ded40: movss dword ptr [rbx + r15], xmm0 */
L_1803ded40_0:;
L_1803ded40_1:;
wr(s->u,8,8,(rd(s->r,184,8)*((U)UINT64_C(0x1))));
L_1803ded40_2:;
wr(s->u,16,8,(rd(s->r,24,8)+rd(s->u,8,8)));
L_1803ded40_3:;
wr(s->u,40,4,rd(s->r,4608,4));
L_1803ded40_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,40,4));
L_1803ded40_5:;
/* 1803ded46: inc edx */
L_1803ded46_0:;
L_1803ded46_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803ded46_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803ded46_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ded46_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ded46_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ded46_6:;
wr(s->u,57,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ded46_7:;
wr(s->u,65,1,pop(rd(s->u,57,4),4));
L_1803ded46_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803ded46_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803ded46_10:;
/* 1803ded48: add rbp, 4 */
L_1803ded48_0:;
L_1803ded48_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803ded48_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x4)),8,0));
L_1803ded48_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ded48_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ded48_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803ded48_6:;
wr(s->u,57,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803ded48_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803ded48_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803ded48_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803ded48_10:;
/* 1803ded4c: cmp edx, dword ptr [rsi + 0x38] */
L_1803ded4c_0:;
L_1803ded4c_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x38))));
L_1803ded4c_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ded4c_3:;
wr(s->u,67,4,rd(s->u,40,4));
L_1803ded4c_4:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,67,4)));
L_1803ded4c_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,67,4),4,1));
L_1803ded4c_6:;
wr(s->u,71,4,(rd(s->r,16,4)-rd(s->u,67,4)));
L_1803ded4c_7:;
wr(s->r,519,1,(sx(rd(s->u,71,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ded4c_8:;
wr(s->r,518,1,(rd(s->u,71,4)==((U)UINT64_C(0x0))));
L_1803ded4c_9:;
wr(s->u,57,4,(rd(s->u,71,4)&((U)UINT64_C(0xff))));
L_1803ded4c_10:;
wr(s->u,65,1,pop(rd(s->u,57,4),4));
L_1803ded4c_11:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803ded4c_12:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803ded4c_13:;
/* 1803ded4f: mov dword ptr [rsp + 0x40], edx */
L_1803ded4f_0:;
L_1803ded4f_1:;
wr(s->u,24,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ded4f_2:;
wr(s->u,40,4,rd(s->r,16,4));
L_1803ded4f_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,40,4));
L_1803ded4f_4:;
/* 1803ded53: mov rdx, qword ptr [rsp + 0xc8] */
L_1803ded53_0:;
L_1803ded53_1:;
wr(s->u,32,8,(((U)UINT64_C(0xc8))+rd(s->r,32,8)));
L_1803ded53_2:;
wr(s->u,48,8,mr((uint64_t)rd(s->u,32,8),8));
L_1803ded53_3:;
wr(s->r,16,8,rd(s->u,48,8));
L_1803ded53_4:;
/* 1803ded5b: jl 0x1803debd2 */
L_1803ded5b_0:;
L_1803ded5b_1:;
wr(s->u,56,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ded5b_2:;
if(rd(s->u,56,1)){return UINT64_C(0x1803debd2);}
L_1803ded5b_3:;
return UINT64_C(0x1803ded61);
}
uint64_t b_1803ded61(CPU*s){
/* 1803ded61: mov r12, qword ptr [rsp + 0xe0] */
L_1803ded61_0:;
L_1803ded61_1:;
wr(s->u,8,8,(((U)UINT64_C(0xe0))+rd(s->r,32,8)));
L_1803ded61_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ded61_3:;
wr(s->r,160,8,rd(s->u,36,8));
L_1803ded61_4:;
/* 1803ded69: mov r15d, dword ptr [rsp + 0x24] */
L_1803ded69_0:;
L_1803ded69_1:;
wr(s->u,0,8,(((U)UINT64_C(0x24))+rd(s->r,32,8)));
L_1803ded69_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ded69_3:;
wr(s->r,184,4,rd(s->u,32,4));
L_1803ded69_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803ded69_5:;
/* 1803ded6e: mov rbx, qword ptr [rsp + 0x38] */
L_1803ded6e_0:;
L_1803ded6e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803ded6e_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ded6e_3:;
wr(s->r,24,8,rd(s->u,36,8));
L_1803ded6e_4:;
/* 1803ded73: movaps xmm9, xmmword ptr [rsp + 0x130] */
L_1803ded73_0:;
L_1803ded73_1:;
wr(s->u,8,8,(((U)UINT64_C(0x130))+rd(s->r,32,8)));
L_1803ded73_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803ded73_3:;
wr(s->u,44,16,rd(s->u,16,16));
L_1803ded73_4:;
wr(s->r,5184,4,rd(s->u,44,4));
L_1803ded73_5:;
wr(s->r,5188,4,rd(s->u,48,4));
L_1803ded73_6:;
wr(s->r,5192,4,rd(s->u,52,4));
L_1803ded73_7:;
wr(s->r,5196,4,rd(s->u,56,4));
L_1803ded73_8:;
/* 1803ded7c: movaps xmm8, xmmword ptr [rsp + 0x140] */
L_1803ded7c_0:;
L_1803ded7c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x140))+rd(s->r,32,8)));
L_1803ded7c_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803ded7c_3:;
wr(s->u,44,16,rd(s->u,16,16));
L_1803ded7c_4:;
wr(s->r,5120,4,rd(s->u,44,4));
L_1803ded7c_5:;
wr(s->r,5124,4,rd(s->u,48,4));
L_1803ded7c_6:;
wr(s->r,5128,4,rd(s->u,52,4));
L_1803ded7c_7:;
wr(s->r,5132,4,rd(s->u,56,4));
L_1803ded7c_8:;
/* 1803ded85: movaps xmm7, xmmword ptr [rsp + 0x150] */
L_1803ded85_0:;
L_1803ded85_1:;
wr(s->u,8,8,(((U)UINT64_C(0x150))+rd(s->r,32,8)));
L_1803ded85_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803ded85_3:;
wr(s->u,44,16,rd(s->u,16,16));
L_1803ded85_4:;
wr(s->r,5056,4,rd(s->u,44,4));
L_1803ded85_5:;
wr(s->r,5060,4,rd(s->u,48,4));
L_1803ded85_6:;
wr(s->r,5064,4,rd(s->u,52,4));
L_1803ded85_7:;
wr(s->r,5068,4,rd(s->u,56,4));
L_1803ded85_8:;
/* 1803ded8d: jmp 0x1803deda9 */
L_1803ded8d_0:;
L_1803ded8d_1:;
return UINT64_C(0x1803deda9);
L_1803ded8d_2:;
return UINT64_C(0x1803ded8f);
}
uint64_t b_1803ded8f(CPU*s){
/* 1803ded8f: mov rcx, rsi */
L_1803ded8f_0:;
L_1803ded8f_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1803ded8f_2:;
/* 1803ded92: call 0x1803e0e90 */
L_1803ded92_0:;
L_1803ded92_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ded92_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ded97)));
L_1803ded92_3:;
return (uint64_t)UINT64_C(0x1803e0e90);
L_1803ded92_4:;
return UINT64_C(0x1803ded97);
}
uint64_t b_1803ded97(CPU*s){
/* 1803ded97: mov r14, qword ptr [rsp + 0x88] */
L_1803ded97_0:;
L_1803ded97_1:;
wr(s->u,0,8,(((U)UINT64_C(0x88))+rd(s->r,32,8)));
L_1803ded97_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ded97_3:;
wr(s->r,176,8,rd(s->u,8,8));
L_1803ded97_4:;
/* 1803ded9f: jmp 0x1803deda9 */
L_1803ded9f_0:;
L_1803ded9f_1:;
return UINT64_C(0x1803deda9);
L_1803ded9f_2:;
return UINT64_C(0x1803deda1);
}
uint64_t b_1803deda1(CPU*s){
/* 1803deda1: mov r14, qword ptr [rsp + 0x88] */
L_1803deda1_0:;
L_1803deda1_1:;
wr(s->u,8,8,(((U)UINT64_C(0x88))+rd(s->r,32,8)));
L_1803deda1_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803deda1_3:;
wr(s->r,176,8,rd(s->u,20,8));
L_1803deda1_4:;
/* 1803deda9: mov rbp, qword ptr [rsp + 0x70] */
L_1803deda9_0:;
L_1803deda9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803deda9_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803deda9_3:;
wr(s->r,40,8,rd(s->u,20,8));
L_1803deda9_4:;
/* 1803dedae: mov edx, dword ptr [rsp + 0x20] */
L_1803dedae_0:;
L_1803dedae_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dedae_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dedae_3:;
wr(s->r,16,4,rd(s->u,16,4));
L_1803dedae_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dedae_5:;
/* 1803dedb2: mov rcx, rbp */
L_1803dedb2_0:;
L_1803dedb2_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803dedb2_2:;
/* 1803dedb5: call qword ptr [rip + 0x63f3ed] */
L_1803dedb5_0:;
L_1803dedb5_1:;
wr(s->u,28,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803dedb5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dedb5_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dedbb)));
L_1803dedb5_4:;
return (uint64_t)rd(s->u,28,8);
L_1803dedb5_5:;
return UINT64_C(0x1803dedbb);
}
uint64_t b_1803deda9(CPU*s){
/* 1803deda9: mov rbp, qword ptr [rsp + 0x70] */
L_1803deda9_0:;
L_1803deda9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803deda9_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803deda9_3:;
wr(s->r,40,8,rd(s->u,12,8));
L_1803deda9_4:;
/* 1803dedae: mov edx, dword ptr [rsp + 0x20] */
L_1803dedae_0:;
L_1803dedae_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dedae_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dedae_3:;
wr(s->r,16,4,rd(s->u,8,4));
L_1803dedae_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dedae_5:;
/* 1803dedb2: mov rcx, rbp */
L_1803dedb2_0:;
L_1803dedb2_1:;
wr(s->r,8,8,rd(s->r,40,8));
L_1803dedb2_2:;
/* 1803dedb5: call qword ptr [rip + 0x63f3ed] */
L_1803dedb5_0:;
L_1803dedb5_1:;
wr(s->u,20,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803dedb5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dedb5_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dedbb)));
L_1803dedb5_4:;
return (uint64_t)rd(s->u,20,8);
L_1803dedb5_5:;
return UINT64_C(0x1803dedbb);
}
uint64_t b_1803dedbb(CPU*s){
/* 1803dedbb: movsxd r8, dword ptr [rsp + 0x7c] */
L_1803dedbb_0:;
L_1803dedbb_1:;
wr(s->u,8,8,(((U)UINT64_C(0x7c))+rd(s->r,32,8)));
L_1803dedbb_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dedbb_3:;
wr(s->r,128,8,(U)sx(rd(s->u,24,4),4));
L_1803dedbb_4:;
/* 1803dedc0: mov r11d, 1 */
L_1803dedc0_0:;
L_1803dedc0_1:;
wr(s->r,152,8,((U)UINT64_C(0x1)));
L_1803dedc0_2:;
/* 1803dedc6: lea rax, [r8 - 1] */
L_1803dedc6_0:;
L_1803dedc6_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803dedc6_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803dedc6_3:;
/* 1803dedca: mov qword ptr [rsp + 0x50], r8 */
L_1803dedca_0:;
L_1803dedca_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dedca_2:;
wr(s->u,16,8,rd(s->r,128,8));
L_1803dedca_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dedca_4:;
/* 1803dedcf: cmp rax, 4 */
L_1803dedcf_0:;
L_1803dedcf_1:;
wr(s->u,39,8,rd(s->r,0,8));
L_1803dedcf_2:;
wr(s->r,512,1,(rd(s->u,39,8)<((U)UINT64_C(0x4))));
L_1803dedcf_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,39,8),((U)UINT64_C(0x4)),8,1));
L_1803dedcf_4:;
wr(s->u,47,8,(rd(s->u,39,8)-((U)UINT64_C(0x4))));
L_1803dedcf_5:;
wr(s->r,519,1,(sx(rd(s->u,47,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dedcf_6:;
wr(s->r,518,1,(rd(s->u,47,8)==((U)UINT64_C(0x0))));
L_1803dedcf_7:;
wr(s->u,29,8,(rd(s->u,47,8)&((U)UINT64_C(0xff))));
L_1803dedcf_8:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803dedcf_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803dedcf_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803dedcf_11:;
/* 1803dedd3: jl 0x1803df01d */
L_1803dedd3_0:;
L_1803dedd3_1:;
wr(s->u,28,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dedd3_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803df01d);}
L_1803dedd3_3:;
return UINT64_C(0x1803dedd9);
}
uint64_t b_1803dedd9(CPU*s){
/* 1803dedd9: mov r10, qword ptr [rsp + 0x48] */
L_1803dedd9_0:;
L_1803dedd9_1:;
wr(s->u,24,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803dedd9_2:;
wr(s->u,52,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dedd9_3:;
wr(s->r,144,8,rd(s->u,52,8));
L_1803dedd9_4:;
/* 1803dedde: mov rcx, qword ptr [rsp + 0x98] */
L_1803dedde_0:;
L_1803dedde_1:;
wr(s->u,32,8,(((U)UINT64_C(0x98))+rd(s->r,32,8)));
L_1803dedde_2:;
wr(s->u,52,8,mr((uint64_t)rd(s->u,32,8),8));
L_1803dedde_3:;
wr(s->r,8,8,rd(s->u,52,8));
L_1803dedde_4:;
/* 1803dede6: mov rdx, qword ptr [rsp + 0x30] */
L_1803dede6_0:;
L_1803dede6_1:;
wr(s->u,24,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dede6_2:;
wr(s->u,52,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dede6_3:;
wr(s->r,16,8,rd(s->u,52,8));
L_1803dede6_4:;
/* 1803dedeb: lea rax, [r8 - 3] */
L_1803dedeb_0:;
L_1803dedeb_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffffd))));
L_1803dedeb_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803dedeb_3:;
/* 1803dedef: mov r9, rbp */
L_1803dedef_0:;
L_1803dedef_1:;
wr(s->r,136,8,rd(s->r,40,8));
L_1803dedef_2:;
/* 1803dedf2: lea rsi, [rbp + 0x14] */
L_1803dedf2_0:;
L_1803dedf2_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x14))));
L_1803dedf2_2:;
wr(s->r,48,8,rd(s->u,0,8));
L_1803dedf2_3:;
/* 1803dedf6: mov qword ptr [rsp + 0x58], rax */
L_1803dedf6_0:;
L_1803dedf6_1:;
wr(s->u,24,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803dedf6_2:;
wr(s->u,40,8,rd(s->r,0,8));
L_1803dedf6_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,40,8));
L_1803dedf6_4:;
/* 1803dedfb: lea rax, [r13 + 0xc] */
L_1803dedfb_0:;
L_1803dedfb_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0xc))));
L_1803dedfb_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803dedfb_3:;
/* 1803dedff: sub r9, r12 */
L_1803dedff_0:;
L_1803dedff_1:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->r,160,8)));
L_1803dedff_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->r,160,8),8,1));
L_1803dedff_3:;
wr(s->r,136,8,(rd(s->r,136,8)-rd(s->r,160,8)));
L_1803dedff_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dedff_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dedff_6:;
wr(s->u,60,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dedff_7:;
wr(s->u,68,1,pop(rd(s->u,60,8),8));
L_1803dedff_8:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803dedff_9:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803dedff_10:;
/* 1803dee02: mov qword ptr [rsp + 0x68], rax */
L_1803dee02_0:;
L_1803dee02_1:;
wr(s->u,24,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803dee02_2:;
wr(s->u,40,8,rd(s->r,0,8));
L_1803dee02_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,40,8));
L_1803dee02_4:;
/* 1803dee07: lea rax, [r12 + 0xc] */
L_1803dee07_0:;
L_1803dee07_1:;
wr(s->u,24,8,(((U)UINT64_C(0xc))+rd(s->r,160,8)));
L_1803dee07_2:;
wr(s->r,0,8,rd(s->u,24,8));
L_1803dee07_3:;
/* 1803dee0c: lea r8, [rdi + 8] */
L_1803dee0c_0:;
L_1803dee0c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803dee0c_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1803dee0c_3:;
/* 1803dee10: mov qword ptr [rsp + 0x60], rax */
L_1803dee10_0:;
L_1803dee10_1:;
wr(s->u,24,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dee10_2:;
wr(s->u,40,8,rd(s->r,0,8));
L_1803dee10_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,40,8));
L_1803dee10_4:;
/* 1803dee15: mov rax, r10 */
L_1803dee15_0:;
L_1803dee15_1:;
wr(s->r,0,8,rd(s->r,144,8));
L_1803dee15_2:;
/* 1803dee18: mov r12, qword ptr [rsp + 0x60] */
L_1803dee18_0:;
L_1803dee18_1:;
wr(s->u,24,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dee18_2:;
wr(s->u,52,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dee18_3:;
wr(s->r,160,8,rd(s->u,52,8));
L_1803dee18_4:;
/* 1803dee1d: sub rax, rdi */
L_1803dee1d_0:;
L_1803dee1d_1:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->r,56,8)));
L_1803dee1d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->r,56,8),8,1));
L_1803dee1d_3:;
wr(s->r,0,8,(rd(s->r,0,8)-rd(s->r,56,8)));
L_1803dee1d_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dee1d_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803dee1d_6:;
wr(s->u,60,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803dee1d_7:;
wr(s->u,68,1,pop(rd(s->u,60,8),8));
L_1803dee1d_8:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803dee1d_9:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803dee1d_10:;
/* 1803dee20: mov qword ptr [rsp + 0xc0], rax */
L_1803dee20_0:;
L_1803dee20_1:;
wr(s->u,32,8,(((U)UINT64_C(0xc0))+rd(s->r,32,8)));
L_1803dee20_2:;
wr(s->u,40,8,rd(s->r,0,8));
L_1803dee20_3:;
mw((uint64_t)rd(s->u,32,8),8,rd(s->u,40,8));
L_1803dee20_4:;
/* 1803dee28: mov rax, r13 */
L_1803dee28_0:;
L_1803dee28_1:;
wr(s->r,0,8,rd(s->r,168,8));
L_1803dee28_2:;
/* 1803dee2b: mov r15, qword ptr [rsp + 0xc0] */
L_1803dee2b_0:;
L_1803dee2b_1:;
wr(s->u,32,8,(((U)UINT64_C(0xc0))+rd(s->r,32,8)));
L_1803dee2b_2:;
wr(s->u,52,8,mr((uint64_t)rd(s->u,32,8),8));
L_1803dee2b_3:;
wr(s->r,184,8,rd(s->u,52,8));
L_1803dee2b_4:;
/* 1803dee33: sub rax, rdi */
L_1803dee33_0:;
L_1803dee33_1:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->r,56,8)));
L_1803dee33_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->r,56,8),8,1));
L_1803dee33_3:;
wr(s->r,0,8,(rd(s->r,0,8)-rd(s->r,56,8)));
L_1803dee33_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dee33_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803dee33_6:;
wr(s->u,60,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803dee33_7:;
wr(s->u,68,1,pop(rd(s->u,60,8),8));
L_1803dee33_8:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803dee33_9:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803dee33_10:;
/* 1803dee36: mov rdi, qword ptr [rsp + 0x58] */
L_1803dee36_0:;
L_1803dee36_1:;
wr(s->u,24,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803dee36_2:;
wr(s->u,52,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dee36_3:;
wr(s->r,56,8,rd(s->u,52,8));
L_1803dee36_4:;
/* 1803dee3b: mov qword ptr [rsp + 0xb0], rax */
L_1803dee3b_0:;
L_1803dee3b_1:;
wr(s->u,32,8,(((U)UINT64_C(0xb0))+rd(s->r,32,8)));
L_1803dee3b_2:;
wr(s->u,40,8,rd(s->r,0,8));
L_1803dee3b_3:;
mw((uint64_t)rd(s->u,32,8),8,rd(s->u,40,8));
L_1803dee3b_4:;
/* 1803dee43: mov rax, r10 */
L_1803dee43_0:;
L_1803dee43_1:;
wr(s->r,0,8,rd(s->r,144,8));
L_1803dee43_2:;
/* 1803dee46: mov rbx, qword ptr [rsp + 0xb0] */
L_1803dee46_0:;
L_1803dee46_1:;
wr(s->u,32,8,(((U)UINT64_C(0xb0))+rd(s->r,32,8)));
L_1803dee46_2:;
wr(s->u,52,8,mr((uint64_t)rd(s->u,32,8),8));
L_1803dee46_3:;
wr(s->r,24,8,rd(s->u,52,8));
L_1803dee46_4:;
/* 1803dee4e: sub rax, r13 */
L_1803dee4e_0:;
L_1803dee4e_1:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->r,168,8)));
L_1803dee4e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->r,168,8),8,1));
L_1803dee4e_3:;
wr(s->r,0,8,(rd(s->r,0,8)-rd(s->r,168,8)));
L_1803dee4e_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dee4e_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803dee4e_6:;
wr(s->u,60,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803dee4e_7:;
wr(s->u,68,1,pop(rd(s->u,60,8),8));
L_1803dee4e_8:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803dee4e_9:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803dee4e_10:;
/* 1803dee51: mov r13, qword ptr [rsp + 0x68] */
L_1803dee51_0:;
L_1803dee51_1:;
wr(s->u,24,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803dee51_2:;
wr(s->u,52,8,mr((uint64_t)rd(s->u,24,8),8));
L_1803dee51_3:;
wr(s->r,168,8,rd(s->u,52,8));
L_1803dee51_4:;
/* 1803dee56: mov rbp, rax */
L_1803dee56_0:;
L_1803dee56_1:;
wr(s->r,40,8,rd(s->r,0,8));
L_1803dee56_2:;
/* 1803dee59: nop dword ptr [rax] */
L_1803dee59_0:;
L_1803dee59_1:;
/* 1803dee60: movsxd rax, dword ptr [r10 + r11*4] */
L_1803dee60_0:;
L_1803dee60_1:;
wr(s->u,8,8,(rd(s->r,152,8)*((U)UINT64_C(0x4))));
L_1803dee60_2:;
wr(s->u,16,8,(rd(s->r,144,8)+rd(s->u,8,8)));
L_1803dee60_3:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803dee60_4:;
wr(s->r,0,8,(U)sx(rd(s->u,48,4),4));
L_1803dee60_5:;
/* 1803dee64: add r11, 4 */
L_1803dee64_0:;
L_1803dee64_1:;
wr(s->r,512,1,(((rd(s->r,152,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,152,8)));
L_1803dee64_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),((U)UINT64_C(0x4)),8,0));
L_1803dee64_3:;
wr(s->r,152,8,(rd(s->r,152,8)+((U)UINT64_C(0x4))));
L_1803dee64_4:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dee64_5:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803dee64_6:;
wr(s->u,60,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803dee64_7:;
wr(s->u,68,1,pop(rd(s->u,60,8),8));
L_1803dee64_8:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803dee64_9:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803dee64_10:;
/* 1803dee68: add rsi, 0x20 */
L_1803dee68_0:;
L_1803dee68_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803dee68_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x20)),8,0));
L_1803dee68_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x20))));
L_1803dee68_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dee68_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803dee68_6:;
wr(s->u,60,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803dee68_7:;
wr(s->u,68,1,pop(rd(s->u,60,8),8));
L_1803dee68_8:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803dee68_9:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803dee68_10:;
/* 1803dee6c: add r8, 0x10 */
L_1803dee6c_0:;
L_1803dee6c_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803dee6c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x10)),8,0));
L_1803dee6c_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x10))));
L_1803dee6c_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dee6c_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dee6c_6:;
wr(s->u,60,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dee6c_7:;
wr(s->u,68,1,pop(rd(s->u,60,8),8));
L_1803dee6c_8:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803dee6c_9:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803dee6c_10:;
return UINT64_C(0x1803dee70);
}
uint64_t b_1803dee60(CPU*s){
/* 1803dee60: movsxd rax, dword ptr [r10 + r11*4] */
L_1803dee60_0:;
L_1803dee60_1:;
wr(s->u,8,8,(rd(s->r,152,8)*((U)UINT64_C(0x4))));
L_1803dee60_2:;
wr(s->u,16,8,(rd(s->r,144,8)+rd(s->u,8,8)));
L_1803dee60_3:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803dee60_4:;
wr(s->r,0,8,(U)sx(rd(s->u,60,4),4));
L_1803dee60_5:;
/* 1803dee64: add r11, 4 */
L_1803dee64_0:;
L_1803dee64_1:;
wr(s->r,512,1,(((rd(s->r,152,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,152,8)));
L_1803dee64_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),((U)UINT64_C(0x4)),8,0));
L_1803dee64_3:;
wr(s->r,152,8,(rd(s->r,152,8)+((U)UINT64_C(0x4))));
L_1803dee64_4:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dee64_5:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803dee64_6:;
wr(s->u,64,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803dee64_7:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803dee64_8:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dee64_9:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dee64_10:;
/* 1803dee68: add rsi, 0x20 */
L_1803dee68_0:;
L_1803dee68_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803dee68_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x20)),8,0));
L_1803dee68_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x20))));
L_1803dee68_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dee68_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803dee68_6:;
wr(s->u,64,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803dee68_7:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803dee68_8:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dee68_9:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dee68_10:;
/* 1803dee6c: add r8, 0x10 */
L_1803dee6c_0:;
L_1803dee6c_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803dee6c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x10)),8,0));
L_1803dee6c_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x10))));
L_1803dee6c_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dee6c_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dee6c_6:;
wr(s->u,64,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dee6c_7:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803dee6c_8:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dee6c_9:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dee6c_10:;
/* 1803dee70: add r13, 0x10 */
L_1803dee70_0:;
L_1803dee70_1:;
wr(s->r,512,1,(((rd(s->r,168,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,168,8)));
L_1803dee70_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,8),((U)UINT64_C(0x10)),8,0));
L_1803dee70_3:;
wr(s->r,168,8,(rd(s->r,168,8)+((U)UINT64_C(0x10))));
L_1803dee70_4:;
wr(s->r,519,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dee70_5:;
wr(s->r,518,1,(rd(s->r,168,8)==((U)UINT64_C(0x0))));
L_1803dee70_6:;
wr(s->u,64,8,(rd(s->r,168,8)&((U)UINT64_C(0xff))));
L_1803dee70_7:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803dee70_8:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dee70_9:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dee70_10:;
/* 1803dee74: add r12, 0x20 */
L_1803dee74_0:;
L_1803dee74_1:;
wr(s->r,512,1,(((rd(s->r,160,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,160,8)));
L_1803dee74_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),((U)UINT64_C(0x20)),8,0));
L_1803dee74_3:;
wr(s->r,160,8,(rd(s->r,160,8)+((U)UINT64_C(0x20))));
L_1803dee74_4:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dee74_5:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803dee74_6:;
wr(s->u,64,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803dee74_7:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803dee74_8:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dee74_9:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dee74_10:;
/* 1803dee78: cmp r11, rdi */
L_1803dee78_0:;
L_1803dee78_1:;
wr(s->u,74,8,rd(s->r,56,8));
L_1803dee78_2:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->u,74,8)));
L_1803dee78_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->u,74,8),8,1));
L_1803dee78_4:;
wr(s->u,82,8,(rd(s->r,152,8)-rd(s->u,74,8)));
L_1803dee78_5:;
wr(s->r,519,1,(sx(rd(s->u,82,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dee78_6:;
wr(s->r,518,1,(rd(s->u,82,8)==((U)UINT64_C(0x0))));
L_1803dee78_7:;
wr(s->u,64,8,(rd(s->u,82,8)&((U)UINT64_C(0xff))));
L_1803dee78_8:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803dee78_9:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dee78_10:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dee78_11:;
/* 1803dee7b: movss xmm0, dword ptr [rdx + rax*4] */
L_1803dee7b_0:;
L_1803dee7b_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803dee7b_2:;
wr(s->u,16,8,(rd(s->r,16,8)+rd(s->u,8,8)));
L_1803dee7b_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803dee7b_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803dee7b_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dee7b_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dee7b_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dee7b_8:;
/* 1803dee80: addss xmm0, dword ptr [r8 - 0x14] */
L_1803dee80_0:;
L_1803dee80_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803dee80_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dee80_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,56,4),4),4));
L_1803dee80_4:;
/* 1803dee86: movss dword ptr [r13 - 0x18], xmm0 */
L_1803dee86_0:;
L_1803dee86_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1803dee86_2:;
wr(s->u,56,4,rd(s->r,4608,4));
L_1803dee86_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803dee86_4:;
/* 1803dee8c: movss xmm1, dword ptr [r14 + rax*4] */
L_1803dee8c_0:;
L_1803dee8c_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803dee8c_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803dee8c_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803dee8c_4:;
wr(s->r,4672,4,rd(s->u,56,4));
L_1803dee8c_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803dee8c_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803dee8c_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803dee8c_8:;
/* 1803dee92: movss xmm0, dword ptr [rcx + rax*4] */
L_1803dee92_0:;
L_1803dee92_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803dee92_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803dee92_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803dee92_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803dee92_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dee92_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dee92_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dee92_8:;
/* 1803dee97: mulss xmm0, dword ptr [r12 - 0x20] */
L_1803dee97_0:;
L_1803dee97_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffe0))+rd(s->r,160,8)));
L_1803dee97_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dee97_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,56,4),4),4));
L_1803dee97_4:;
/* 1803dee9e: mulss xmm1, dword ptr [r12 - 0x24] */
L_1803dee9e_0:;
L_1803dee9e_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffdc))+rd(s->r,160,8)));
L_1803dee9e_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dee9e_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,56,4),4),4));
L_1803dee9e_4:;
/* 1803deea5: subss xmm1, xmm0 */
L_1803deea5_0:;
L_1803deea5_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803deea5_2:;
/* 1803deea9: movss dword ptr [rsi - 0x2c], xmm1 */
L_1803deea9_0:;
L_1803deea9_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffd4))));
L_1803deea9_2:;
wr(s->u,56,4,rd(s->r,4672,4));
L_1803deea9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803deea9_4:;
/* 1803deeae: movss xmm2, dword ptr [r14 + rax*4] */
L_1803deeae_0:;
L_1803deeae_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803deeae_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803deeae_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803deeae_4:;
wr(s->r,4736,4,rd(s->u,56,4));
L_1803deeae_5:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803deeae_6:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803deeae_7:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803deeae_8:;
/* 1803deeb4: movss xmm0, dword ptr [rcx + rax*4] */
L_1803deeb4_0:;
L_1803deeb4_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803deeb4_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803deeb4_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803deeb4_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803deeb4_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803deeb4_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803deeb4_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803deeb4_8:;
/* 1803deeb9: mulss xmm0, dword ptr [r12 - 0x24] */
L_1803deeb9_0:;
L_1803deeb9_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffdc))+rd(s->r,160,8)));
L_1803deeb9_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803deeb9_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,56,4),4),4));
L_1803deeb9_4:;
/* 1803deec0: mulss xmm2, dword ptr [r12 - 0x20] */
L_1803deec0_0:;
L_1803deec0_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffe0))+rd(s->r,160,8)));
L_1803deec0_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803deec0_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,56,4),4),4));
L_1803deec0_4:;
/* 1803deec7: addss xmm2, xmm0 */
L_1803deec7_0:;
L_1803deec7_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803deec7_2:;
/* 1803deecb: movss dword ptr [r9 + r12 - 0x20], xmm2 */
L_1803deecb_0:;
L_1803deecb_1:;
wr(s->u,32,8,(((U)UINT64_C(0xffffffffffffffe0))+rd(s->r,136,8)));
L_1803deecb_2:;
wr(s->u,40,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803deecb_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803deecb_4:;
wr(s->u,56,4,rd(s->r,4736,4));
L_1803deecb_5:;
mw((uint64_t)rd(s->u,48,8),4,rd(s->u,56,4));
L_1803deecb_6:;
/* 1803deed2: movsxd rax, dword ptr [r15 + r8 - 0x10] */
L_1803deed2_0:;
L_1803deed2_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,184,8)));
L_1803deed2_2:;
wr(s->u,40,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803deed2_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803deed2_4:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,48,8),4));
L_1803deed2_5:;
wr(s->r,0,8,(U)sx(rd(s->u,60,4),4));
L_1803deed2_6:;
/* 1803deed7: movss xmm0, dword ptr [rdx + rax*4] */
L_1803deed7_0:;
L_1803deed7_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803deed7_2:;
wr(s->u,16,8,(rd(s->r,16,8)+rd(s->u,8,8)));
L_1803deed7_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803deed7_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803deed7_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803deed7_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803deed7_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803deed7_8:;
/* 1803deedc: addss xmm0, dword ptr [r8 - 0x10] */
L_1803deedc_0:;
L_1803deedc_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803deedc_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803deedc_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,56,4),4),4));
L_1803deedc_4:;
/* 1803deee2: movss dword ptr [rbx + r8 - 0x10], xmm0 */
L_1803deee2_0:;
L_1803deee2_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,24,8)));
L_1803deee2_2:;
wr(s->u,40,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803deee2_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803deee2_4:;
wr(s->u,56,4,rd(s->r,4608,4));
L_1803deee2_5:;
mw((uint64_t)rd(s->u,48,8),4,rd(s->u,56,4));
L_1803deee2_6:;
/* 1803deee9: movss xmm1, dword ptr [r14 + rax*4] */
L_1803deee9_0:;
L_1803deee9_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803deee9_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803deee9_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803deee9_4:;
wr(s->r,4672,4,rd(s->u,56,4));
L_1803deee9_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803deee9_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803deee9_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803deee9_8:;
/* 1803deeef: movss xmm0, dword ptr [rcx + rax*4] */
L_1803deeef_0:;
L_1803deeef_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803deeef_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803deeef_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803deeef_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803deeef_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803deeef_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803deeef_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803deeef_8:;
/* 1803deef4: mulss xmm0, dword ptr [r12 - 0x18] */
L_1803deef4_0:;
L_1803deef4_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffe8))+rd(s->r,160,8)));
L_1803deef4_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803deef4_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,56,4),4),4));
L_1803deef4_4:;
/* 1803deefb: mulss xmm1, dword ptr [r12 - 0x1c] */
L_1803deefb_0:;
L_1803deefb_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffe4))+rd(s->r,160,8)));
L_1803deefb_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803deefb_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,56,4),4),4));
L_1803deefb_4:;
/* 1803def02: subss xmm1, xmm0 */
L_1803def02_0:;
L_1803def02_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803def02_2:;
/* 1803def06: movss dword ptr [rsi - 0x24], xmm1 */
L_1803def06_0:;
L_1803def06_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffdc))));
L_1803def06_2:;
wr(s->u,56,4,rd(s->r,4672,4));
L_1803def06_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803def06_4:;
return UINT64_C(0x1803def0b);
}
uint64_t b_1803dee70(CPU*s){
/* 1803dee70: add r13, 0x10 */
L_1803dee70_0:;
L_1803dee70_1:;
wr(s->r,512,1,(((rd(s->r,168,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,168,8)));
L_1803dee70_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,8),((U)UINT64_C(0x10)),8,0));
L_1803dee70_3:;
wr(s->r,168,8,(rd(s->r,168,8)+((U)UINT64_C(0x10))));
L_1803dee70_4:;
wr(s->r,519,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dee70_5:;
wr(s->r,518,1,(rd(s->r,168,8)==((U)UINT64_C(0x0))));
L_1803dee70_6:;
wr(s->u,64,8,(rd(s->r,168,8)&((U)UINT64_C(0xff))));
L_1803dee70_7:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803dee70_8:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dee70_9:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dee70_10:;
/* 1803dee74: add r12, 0x20 */
L_1803dee74_0:;
L_1803dee74_1:;
wr(s->r,512,1,(((rd(s->r,160,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,160,8)));
L_1803dee74_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),((U)UINT64_C(0x20)),8,0));
L_1803dee74_3:;
wr(s->r,160,8,(rd(s->r,160,8)+((U)UINT64_C(0x20))));
L_1803dee74_4:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dee74_5:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803dee74_6:;
wr(s->u,64,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803dee74_7:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803dee74_8:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dee74_9:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dee74_10:;
/* 1803dee78: cmp r11, rdi */
L_1803dee78_0:;
L_1803dee78_1:;
wr(s->u,74,8,rd(s->r,56,8));
L_1803dee78_2:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->u,74,8)));
L_1803dee78_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->u,74,8),8,1));
L_1803dee78_4:;
wr(s->u,82,8,(rd(s->r,152,8)-rd(s->u,74,8)));
L_1803dee78_5:;
wr(s->r,519,1,(sx(rd(s->u,82,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dee78_6:;
wr(s->r,518,1,(rd(s->u,82,8)==((U)UINT64_C(0x0))));
L_1803dee78_7:;
wr(s->u,64,8,(rd(s->u,82,8)&((U)UINT64_C(0xff))));
L_1803dee78_8:;
wr(s->u,72,1,pop(rd(s->u,64,8),8));
L_1803dee78_9:;
wr(s->u,73,1,(rd(s->u,72,1)&((U)UINT64_C(0x1))));
L_1803dee78_10:;
wr(s->r,514,1,(rd(s->u,73,1)==((U)UINT64_C(0x0))));
L_1803dee78_11:;
/* 1803dee7b: movss xmm0, dword ptr [rdx + rax*4] */
L_1803dee7b_0:;
L_1803dee7b_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803dee7b_2:;
wr(s->u,16,8,(rd(s->r,16,8)+rd(s->u,8,8)));
L_1803dee7b_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803dee7b_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803dee7b_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dee7b_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dee7b_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dee7b_8:;
/* 1803dee80: addss xmm0, dword ptr [r8 - 0x14] */
L_1803dee80_0:;
L_1803dee80_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803dee80_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dee80_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,56,4),4),4));
L_1803dee80_4:;
/* 1803dee86: movss dword ptr [r13 - 0x18], xmm0 */
L_1803dee86_0:;
L_1803dee86_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1803dee86_2:;
wr(s->u,56,4,rd(s->r,4608,4));
L_1803dee86_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803dee86_4:;
/* 1803dee8c: movss xmm1, dword ptr [r14 + rax*4] */
L_1803dee8c_0:;
L_1803dee8c_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803dee8c_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803dee8c_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803dee8c_4:;
wr(s->r,4672,4,rd(s->u,56,4));
L_1803dee8c_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803dee8c_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803dee8c_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803dee8c_8:;
/* 1803dee92: movss xmm0, dword ptr [rcx + rax*4] */
L_1803dee92_0:;
L_1803dee92_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803dee92_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803dee92_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803dee92_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803dee92_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dee92_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dee92_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dee92_8:;
/* 1803dee97: mulss xmm0, dword ptr [r12 - 0x20] */
L_1803dee97_0:;
L_1803dee97_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffe0))+rd(s->r,160,8)));
L_1803dee97_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dee97_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,56,4),4),4));
L_1803dee97_4:;
/* 1803dee9e: mulss xmm1, dword ptr [r12 - 0x24] */
L_1803dee9e_0:;
L_1803dee9e_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffdc))+rd(s->r,160,8)));
L_1803dee9e_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dee9e_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,56,4),4),4));
L_1803dee9e_4:;
/* 1803deea5: subss xmm1, xmm0 */
L_1803deea5_0:;
L_1803deea5_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803deea5_2:;
/* 1803deea9: movss dword ptr [rsi - 0x2c], xmm1 */
L_1803deea9_0:;
L_1803deea9_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffd4))));
L_1803deea9_2:;
wr(s->u,56,4,rd(s->r,4672,4));
L_1803deea9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803deea9_4:;
/* 1803deeae: movss xmm2, dword ptr [r14 + rax*4] */
L_1803deeae_0:;
L_1803deeae_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803deeae_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803deeae_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803deeae_4:;
wr(s->r,4736,4,rd(s->u,56,4));
L_1803deeae_5:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803deeae_6:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803deeae_7:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803deeae_8:;
/* 1803deeb4: movss xmm0, dword ptr [rcx + rax*4] */
L_1803deeb4_0:;
L_1803deeb4_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803deeb4_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803deeb4_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803deeb4_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803deeb4_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803deeb4_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803deeb4_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803deeb4_8:;
/* 1803deeb9: mulss xmm0, dword ptr [r12 - 0x24] */
L_1803deeb9_0:;
L_1803deeb9_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffdc))+rd(s->r,160,8)));
L_1803deeb9_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803deeb9_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,56,4),4),4));
L_1803deeb9_4:;
/* 1803deec0: mulss xmm2, dword ptr [r12 - 0x20] */
L_1803deec0_0:;
L_1803deec0_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffe0))+rd(s->r,160,8)));
L_1803deec0_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803deec0_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,56,4),4),4));
L_1803deec0_4:;
/* 1803deec7: addss xmm2, xmm0 */
L_1803deec7_0:;
L_1803deec7_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803deec7_2:;
/* 1803deecb: movss dword ptr [r9 + r12 - 0x20], xmm2 */
L_1803deecb_0:;
L_1803deecb_1:;
wr(s->u,32,8,(((U)UINT64_C(0xffffffffffffffe0))+rd(s->r,136,8)));
L_1803deecb_2:;
wr(s->u,40,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803deecb_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803deecb_4:;
wr(s->u,56,4,rd(s->r,4736,4));
L_1803deecb_5:;
mw((uint64_t)rd(s->u,48,8),4,rd(s->u,56,4));
L_1803deecb_6:;
/* 1803deed2: movsxd rax, dword ptr [r15 + r8 - 0x10] */
L_1803deed2_0:;
L_1803deed2_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,184,8)));
L_1803deed2_2:;
wr(s->u,40,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803deed2_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803deed2_4:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,48,8),4));
L_1803deed2_5:;
wr(s->r,0,8,(U)sx(rd(s->u,60,4),4));
L_1803deed2_6:;
/* 1803deed7: movss xmm0, dword ptr [rdx + rax*4] */
L_1803deed7_0:;
L_1803deed7_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803deed7_2:;
wr(s->u,16,8,(rd(s->r,16,8)+rd(s->u,8,8)));
L_1803deed7_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803deed7_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803deed7_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803deed7_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803deed7_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803deed7_8:;
/* 1803deedc: addss xmm0, dword ptr [r8 - 0x10] */
L_1803deedc_0:;
L_1803deedc_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803deedc_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803deedc_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,56,4),4),4));
L_1803deedc_4:;
/* 1803deee2: movss dword ptr [rbx + r8 - 0x10], xmm0 */
L_1803deee2_0:;
L_1803deee2_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,24,8)));
L_1803deee2_2:;
wr(s->u,40,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803deee2_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803deee2_4:;
wr(s->u,56,4,rd(s->r,4608,4));
L_1803deee2_5:;
mw((uint64_t)rd(s->u,48,8),4,rd(s->u,56,4));
L_1803deee2_6:;
/* 1803deee9: movss xmm1, dword ptr [r14 + rax*4] */
L_1803deee9_0:;
L_1803deee9_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803deee9_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803deee9_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803deee9_4:;
wr(s->r,4672,4,rd(s->u,56,4));
L_1803deee9_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803deee9_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803deee9_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803deee9_8:;
/* 1803deeef: movss xmm0, dword ptr [rcx + rax*4] */
L_1803deeef_0:;
L_1803deeef_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803deeef_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803deeef_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803deeef_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803deeef_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803deeef_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803deeef_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803deeef_8:;
/* 1803deef4: mulss xmm0, dword ptr [r12 - 0x18] */
L_1803deef4_0:;
L_1803deef4_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffe8))+rd(s->r,160,8)));
L_1803deef4_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803deef4_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,56,4),4),4));
L_1803deef4_4:;
/* 1803deefb: mulss xmm1, dword ptr [r12 - 0x1c] */
L_1803deefb_0:;
L_1803deefb_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffe4))+rd(s->r,160,8)));
L_1803deefb_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803deefb_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,56,4),4),4));
L_1803deefb_4:;
/* 1803def02: subss xmm1, xmm0 */
L_1803def02_0:;
L_1803def02_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803def02_2:;
/* 1803def06: movss dword ptr [rsi - 0x24], xmm1 */
L_1803def06_0:;
L_1803def06_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffdc))));
L_1803def06_2:;
wr(s->u,56,4,rd(s->r,4672,4));
L_1803def06_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803def06_4:;
/* 1803def0b: movss xmm2, dword ptr [rcx + rax*4] */
L_1803def0b_0:;
L_1803def0b_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803def0b_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803def0b_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803def0b_4:;
wr(s->r,4736,4,rd(s->u,56,4));
L_1803def0b_5:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803def0b_6:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803def0b_7:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803def0b_8:;
/* 1803def10: movss xmm0, dword ptr [r14 + rax*4] */
L_1803def10_0:;
L_1803def10_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803def10_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803def10_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803def10_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803def10_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803def10_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803def10_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803def10_8:;
/* 1803def16: mulss xmm0, dword ptr [r12 - 0x18] */
L_1803def16_0:;
L_1803def16_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffe8))+rd(s->r,160,8)));
L_1803def16_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803def16_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,56,4),4),4));
L_1803def16_4:;
/* 1803def1d: mulss xmm2, dword ptr [r12 - 0x1c] */
L_1803def1d_0:;
L_1803def1d_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffe4))+rd(s->r,160,8)));
L_1803def1d_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803def1d_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,56,4),4),4));
L_1803def1d_4:;
return UINT64_C(0x1803def24);
}
uint64_t b_1803def0b(CPU*s){
/* 1803def0b: movss xmm2, dword ptr [rcx + rax*4] */
L_1803def0b_0:;
L_1803def0b_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803def0b_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803def0b_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803def0b_4:;
wr(s->r,4736,4,rd(s->u,56,4));
L_1803def0b_5:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803def0b_6:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803def0b_7:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803def0b_8:;
/* 1803def10: movss xmm0, dword ptr [r14 + rax*4] */
L_1803def10_0:;
L_1803def10_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803def10_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803def10_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803def10_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803def10_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803def10_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803def10_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803def10_8:;
/* 1803def16: mulss xmm0, dword ptr [r12 - 0x18] */
L_1803def16_0:;
L_1803def16_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffe8))+rd(s->r,160,8)));
L_1803def16_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803def16_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,56,4),4),4));
L_1803def16_4:;
/* 1803def1d: mulss xmm2, dword ptr [r12 - 0x1c] */
L_1803def1d_0:;
L_1803def1d_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffe4))+rd(s->r,160,8)));
L_1803def1d_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803def1d_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,56,4),4),4));
L_1803def1d_4:;
/* 1803def24: addss xmm2, xmm0 */
L_1803def24_0:;
L_1803def24_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803def24_2:;
/* 1803def28: movss dword ptr [rsi - 0x20], xmm2 */
L_1803def28_0:;
L_1803def28_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffe0))));
L_1803def28_2:;
wr(s->u,56,4,rd(s->r,4736,4));
L_1803def28_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803def28_4:;
/* 1803def2d: movsxd rax, dword ptr [r13 + rbp - 0x10] */
L_1803def2d_0:;
L_1803def2d_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,168,8)));
L_1803def2d_2:;
wr(s->u,40,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803def2d_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803def2d_4:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,48,8),4));
L_1803def2d_5:;
wr(s->r,0,8,(U)sx(rd(s->u,60,4),4));
L_1803def2d_6:;
/* 1803def32: movss xmm0, dword ptr [rdx + rax*4] */
L_1803def32_0:;
L_1803def32_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803def32_2:;
wr(s->u,16,8,(rd(s->r,16,8)+rd(s->u,8,8)));
L_1803def32_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803def32_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803def32_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803def32_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803def32_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803def32_8:;
/* 1803def37: addss xmm0, dword ptr [r8 - 0xc] */
L_1803def37_0:;
L_1803def37_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803def37_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803def37_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,56,4),4),4));
L_1803def37_4:;
/* 1803def3d: movss dword ptr [r13 - 0x10], xmm0 */
L_1803def3d_0:;
L_1803def3d_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803def3d_2:;
wr(s->u,56,4,rd(s->r,4608,4));
L_1803def3d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803def3d_4:;
/* 1803def43: movss xmm1, dword ptr [r14 + rax*4] */
L_1803def43_0:;
L_1803def43_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803def43_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803def43_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803def43_4:;
wr(s->r,4672,4,rd(s->u,56,4));
L_1803def43_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803def43_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803def43_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803def43_8:;
/* 1803def49: movss xmm0, dword ptr [rcx + rax*4] */
L_1803def49_0:;
L_1803def49_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803def49_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803def49_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803def49_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803def49_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803def49_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803def49_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803def49_8:;
/* 1803def4e: mulss xmm0, dword ptr [r12 - 0x10] */
L_1803def4e_0:;
L_1803def4e_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,160,8)));
L_1803def4e_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803def4e_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,56,4),4),4));
L_1803def4e_4:;
/* 1803def55: mulss xmm1, dword ptr [r12 - 0x14] */
L_1803def55_0:;
L_1803def55_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffec))+rd(s->r,160,8)));
L_1803def55_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803def55_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,56,4),4),4));
L_1803def55_4:;
/* 1803def5c: subss xmm1, xmm0 */
L_1803def5c_0:;
L_1803def5c_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803def5c_2:;
/* 1803def60: movss dword ptr [rsi - 0x1c], xmm1 */
L_1803def60_0:;
L_1803def60_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffe4))));
L_1803def60_2:;
wr(s->u,56,4,rd(s->r,4672,4));
L_1803def60_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803def60_4:;
/* 1803def65: movss xmm2, dword ptr [rcx + rax*4] */
L_1803def65_0:;
L_1803def65_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803def65_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803def65_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803def65_4:;
wr(s->r,4736,4,rd(s->u,56,4));
L_1803def65_5:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803def65_6:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803def65_7:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803def65_8:;
/* 1803def6a: movss xmm0, dword ptr [r14 + rax*4] */
L_1803def6a_0:;
L_1803def6a_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803def6a_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803def6a_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803def6a_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803def6a_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803def6a_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803def6a_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803def6a_8:;
/* 1803def70: mulss xmm0, dword ptr [r12 - 0x10] */
L_1803def70_0:;
L_1803def70_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,160,8)));
L_1803def70_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803def70_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,56,4),4),4));
L_1803def70_4:;
/* 1803def77: mulss xmm2, dword ptr [r12 - 0x14] */
L_1803def77_0:;
L_1803def77_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffec))+rd(s->r,160,8)));
L_1803def77_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803def77_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,56,4),4),4));
L_1803def77_4:;
/* 1803def7e: addss xmm2, xmm0 */
L_1803def7e_0:;
L_1803def7e_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803def7e_2:;
/* 1803def82: movss dword ptr [rsi - 0x18], xmm2 */
L_1803def82_0:;
L_1803def82_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1803def82_2:;
wr(s->u,56,4,rd(s->r,4736,4));
L_1803def82_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803def82_4:;
/* 1803def87: movsxd rax, dword ptr [r10 + r11*4 - 4] */
L_1803def87_0:;
L_1803def87_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,144,8)));
L_1803def87_2:;
wr(s->u,40,8,(rd(s->r,152,8)*((U)UINT64_C(0x4))));
L_1803def87_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803def87_4:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,48,8),4));
L_1803def87_5:;
wr(s->r,0,8,(U)sx(rd(s->u,60,4),4));
L_1803def87_6:;
/* 1803def8c: movss xmm0, dword ptr [rdx + rax*4] */
L_1803def8c_0:;
L_1803def8c_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803def8c_2:;
wr(s->u,16,8,(rd(s->r,16,8)+rd(s->u,8,8)));
L_1803def8c_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803def8c_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803def8c_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803def8c_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803def8c_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803def8c_8:;
/* 1803def91: addss xmm0, dword ptr [r8 - 8] */
L_1803def91_0:;
L_1803def91_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803def91_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803def91_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,56,4),4),4));
L_1803def91_4:;
/* 1803def97: movss dword ptr [r13 - 0xc], xmm0 */
L_1803def97_0:;
L_1803def97_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803def97_2:;
wr(s->u,56,4,rd(s->r,4608,4));
L_1803def97_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803def97_4:;
/* 1803def9d: movss xmm1, dword ptr [r14 + rax*4] */
L_1803def9d_0:;
L_1803def9d_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803def9d_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803def9d_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803def9d_4:;
wr(s->r,4672,4,rd(s->u,56,4));
L_1803def9d_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803def9d_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803def9d_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803def9d_8:;
/* 1803defa3: movss xmm0, dword ptr [rcx + rax*4] */
L_1803defa3_0:;
L_1803defa3_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803defa3_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803defa3_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803defa3_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803defa3_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803defa3_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803defa3_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803defa3_8:;
/* 1803defa8: mulss xmm0, dword ptr [r12 - 8] */
L_1803defa8_0:;
L_1803defa8_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,160,8)));
L_1803defa8_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803defa8_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,56,4),4),4));
L_1803defa8_4:;
/* 1803defaf: mulss xmm1, dword ptr [r12 - 0xc] */
L_1803defaf_0:;
L_1803defaf_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff4))+rd(s->r,160,8)));
L_1803defaf_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803defaf_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,56,4),4),4));
L_1803defaf_4:;
/* 1803defb6: subss xmm1, xmm0 */
L_1803defb6_0:;
L_1803defb6_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803defb6_2:;
/* 1803defba: movss dword ptr [rsi - 0x14], xmm1 */
L_1803defba_0:;
L_1803defba_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803defba_2:;
wr(s->u,56,4,rd(s->r,4672,4));
L_1803defba_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803defba_4:;
return UINT64_C(0x1803defbf);
}
uint64_t b_1803def24(CPU*s){
/* 1803def24: addss xmm2, xmm0 */
L_1803def24_0:;
L_1803def24_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803def24_2:;
/* 1803def28: movss dword ptr [rsi - 0x20], xmm2 */
L_1803def28_0:;
L_1803def28_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffe0))));
L_1803def28_2:;
wr(s->u,56,4,rd(s->r,4736,4));
L_1803def28_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803def28_4:;
/* 1803def2d: movsxd rax, dword ptr [r13 + rbp - 0x10] */
L_1803def2d_0:;
L_1803def2d_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,168,8)));
L_1803def2d_2:;
wr(s->u,40,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803def2d_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803def2d_4:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,48,8),4));
L_1803def2d_5:;
wr(s->r,0,8,(U)sx(rd(s->u,60,4),4));
L_1803def2d_6:;
/* 1803def32: movss xmm0, dword ptr [rdx + rax*4] */
L_1803def32_0:;
L_1803def32_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803def32_2:;
wr(s->u,16,8,(rd(s->r,16,8)+rd(s->u,8,8)));
L_1803def32_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803def32_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803def32_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803def32_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803def32_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803def32_8:;
/* 1803def37: addss xmm0, dword ptr [r8 - 0xc] */
L_1803def37_0:;
L_1803def37_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803def37_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803def37_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,56,4),4),4));
L_1803def37_4:;
/* 1803def3d: movss dword ptr [r13 - 0x10], xmm0 */
L_1803def3d_0:;
L_1803def3d_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803def3d_2:;
wr(s->u,56,4,rd(s->r,4608,4));
L_1803def3d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803def3d_4:;
/* 1803def43: movss xmm1, dword ptr [r14 + rax*4] */
L_1803def43_0:;
L_1803def43_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803def43_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803def43_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803def43_4:;
wr(s->r,4672,4,rd(s->u,56,4));
L_1803def43_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803def43_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803def43_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803def43_8:;
/* 1803def49: movss xmm0, dword ptr [rcx + rax*4] */
L_1803def49_0:;
L_1803def49_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803def49_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803def49_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803def49_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803def49_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803def49_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803def49_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803def49_8:;
/* 1803def4e: mulss xmm0, dword ptr [r12 - 0x10] */
L_1803def4e_0:;
L_1803def4e_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,160,8)));
L_1803def4e_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803def4e_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,56,4),4),4));
L_1803def4e_4:;
/* 1803def55: mulss xmm1, dword ptr [r12 - 0x14] */
L_1803def55_0:;
L_1803def55_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffec))+rd(s->r,160,8)));
L_1803def55_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803def55_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,56,4),4),4));
L_1803def55_4:;
/* 1803def5c: subss xmm1, xmm0 */
L_1803def5c_0:;
L_1803def5c_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803def5c_2:;
/* 1803def60: movss dword ptr [rsi - 0x1c], xmm1 */
L_1803def60_0:;
L_1803def60_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffe4))));
L_1803def60_2:;
wr(s->u,56,4,rd(s->r,4672,4));
L_1803def60_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803def60_4:;
/* 1803def65: movss xmm2, dword ptr [rcx + rax*4] */
L_1803def65_0:;
L_1803def65_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803def65_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803def65_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803def65_4:;
wr(s->r,4736,4,rd(s->u,56,4));
L_1803def65_5:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803def65_6:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803def65_7:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803def65_8:;
/* 1803def6a: movss xmm0, dword ptr [r14 + rax*4] */
L_1803def6a_0:;
L_1803def6a_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803def6a_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803def6a_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803def6a_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803def6a_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803def6a_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803def6a_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803def6a_8:;
/* 1803def70: mulss xmm0, dword ptr [r12 - 0x10] */
L_1803def70_0:;
L_1803def70_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,160,8)));
L_1803def70_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803def70_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,56,4),4),4));
L_1803def70_4:;
/* 1803def77: mulss xmm2, dword ptr [r12 - 0x14] */
L_1803def77_0:;
L_1803def77_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffec))+rd(s->r,160,8)));
L_1803def77_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803def77_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,56,4),4),4));
L_1803def77_4:;
/* 1803def7e: addss xmm2, xmm0 */
L_1803def7e_0:;
L_1803def7e_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803def7e_2:;
/* 1803def82: movss dword ptr [rsi - 0x18], xmm2 */
L_1803def82_0:;
L_1803def82_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1803def82_2:;
wr(s->u,56,4,rd(s->r,4736,4));
L_1803def82_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803def82_4:;
/* 1803def87: movsxd rax, dword ptr [r10 + r11*4 - 4] */
L_1803def87_0:;
L_1803def87_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,144,8)));
L_1803def87_2:;
wr(s->u,40,8,(rd(s->r,152,8)*((U)UINT64_C(0x4))));
L_1803def87_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803def87_4:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,48,8),4));
L_1803def87_5:;
wr(s->r,0,8,(U)sx(rd(s->u,60,4),4));
L_1803def87_6:;
/* 1803def8c: movss xmm0, dword ptr [rdx + rax*4] */
L_1803def8c_0:;
L_1803def8c_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803def8c_2:;
wr(s->u,16,8,(rd(s->r,16,8)+rd(s->u,8,8)));
L_1803def8c_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803def8c_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803def8c_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803def8c_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803def8c_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803def8c_8:;
/* 1803def91: addss xmm0, dword ptr [r8 - 8] */
L_1803def91_0:;
L_1803def91_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803def91_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803def91_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,56,4),4),4));
L_1803def91_4:;
/* 1803def97: movss dword ptr [r13 - 0xc], xmm0 */
L_1803def97_0:;
L_1803def97_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803def97_2:;
wr(s->u,56,4,rd(s->r,4608,4));
L_1803def97_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803def97_4:;
/* 1803def9d: movss xmm1, dword ptr [r14 + rax*4] */
L_1803def9d_0:;
L_1803def9d_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803def9d_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803def9d_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803def9d_4:;
wr(s->r,4672,4,rd(s->u,56,4));
L_1803def9d_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803def9d_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803def9d_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803def9d_8:;
/* 1803defa3: movss xmm0, dword ptr [rcx + rax*4] */
L_1803defa3_0:;
L_1803defa3_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803defa3_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803defa3_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803defa3_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803defa3_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803defa3_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803defa3_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803defa3_8:;
/* 1803defa8: mulss xmm0, dword ptr [r12 - 8] */
L_1803defa8_0:;
L_1803defa8_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,160,8)));
L_1803defa8_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803defa8_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,56,4),4),4));
L_1803defa8_4:;
/* 1803defaf: mulss xmm1, dword ptr [r12 - 0xc] */
L_1803defaf_0:;
L_1803defaf_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff4))+rd(s->r,160,8)));
L_1803defaf_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803defaf_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,56,4),4),4));
L_1803defaf_4:;
/* 1803defb6: subss xmm1, xmm0 */
L_1803defb6_0:;
L_1803defb6_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803defb6_2:;
/* 1803defba: movss dword ptr [rsi - 0x14], xmm1 */
L_1803defba_0:;
L_1803defba_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803defba_2:;
wr(s->u,56,4,rd(s->r,4672,4));
L_1803defba_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803defba_4:;
/* 1803defbf: movss xmm2, dword ptr [rcx + rax*4] */
L_1803defbf_0:;
L_1803defbf_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803defbf_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803defbf_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803defbf_4:;
wr(s->r,4736,4,rd(s->u,56,4));
L_1803defbf_5:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803defbf_6:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803defbf_7:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803defbf_8:;
/* 1803defc4: movss xmm0, dword ptr [r14 + rax*4] */
L_1803defc4_0:;
L_1803defc4_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803defc4_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803defc4_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803defc4_4:;
wr(s->r,4608,4,rd(s->u,56,4));
L_1803defc4_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803defc4_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803defc4_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803defc4_8:;
/* 1803defca: mulss xmm2, dword ptr [r12 - 0xc] */
L_1803defca_0:;
L_1803defca_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff4))+rd(s->r,160,8)));
L_1803defca_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803defca_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,56,4),4),4));
L_1803defca_4:;
/* 1803defd1: mulss xmm0, dword ptr [r12 - 8] */
L_1803defd1_0:;
L_1803defd1_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,160,8)));
L_1803defd1_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803defd1_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,56,4),4),4));
L_1803defd1_4:;
return UINT64_C(0x1803defd8);
}
uint64_t b_1803defbf(CPU*s){
/* 1803defbf: movss xmm2, dword ptr [rcx + rax*4] */
L_1803defbf_0:;
L_1803defbf_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803defbf_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803defbf_3:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803defbf_4:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803defbf_5:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803defbf_6:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803defbf_7:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803defbf_8:;
/* 1803defc4: movss xmm0, dword ptr [r14 + rax*4] */
L_1803defc4_0:;
L_1803defc4_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803defc4_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803defc4_3:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803defc4_4:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803defc4_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803defc4_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803defc4_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803defc4_8:;
/* 1803defca: mulss xmm2, dword ptr [r12 - 0xc] */
L_1803defca_0:;
L_1803defca_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff4))+rd(s->r,160,8)));
L_1803defca_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803defca_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,32,4),4),4));
L_1803defca_4:;
/* 1803defd1: mulss xmm0, dword ptr [r12 - 8] */
L_1803defd1_0:;
L_1803defd1_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,160,8)));
L_1803defd1_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803defd1_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,32,4),4),4));
L_1803defd1_4:;
/* 1803defd8: addss xmm2, xmm0 */
L_1803defd8_0:;
L_1803defd8_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803defd8_2:;
/* 1803defdc: movss dword ptr [rsi - 0x10], xmm2 */
L_1803defdc_0:;
L_1803defdc_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803defdc_2:;
wr(s->u,32,4,rd(s->r,4736,4));
L_1803defdc_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803defdc_4:;
/* 1803defe1: jl 0x1803dee60 */
L_1803defe1_0:;
L_1803defe1_1:;
wr(s->u,36,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803defe1_2:;
if(rd(s->u,36,1)){return UINT64_C(0x1803dee60);}
L_1803defe1_3:;
return UINT64_C(0x1803defe7);
}
uint64_t b_1803defd8(CPU*s){
/* 1803defd8: addss xmm2, xmm0 */
L_1803defd8_0:;
L_1803defd8_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803defd8_2:;
/* 1803defdc: movss dword ptr [rsi - 0x10], xmm2 */
L_1803defdc_0:;
L_1803defdc_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803defdc_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803defdc_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803defdc_4:;
/* 1803defe1: jl 0x1803dee60 */
L_1803defe1_0:;
L_1803defe1_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803defe1_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dee60);}
L_1803defe1_3:;
return UINT64_C(0x1803defe7);
}
uint64_t b_1803defe7(CPU*s){
/* 1803defe7: mov rsi, qword ptr [rsp + 0x1c0] */
L_1803defe7_0:;
L_1803defe7_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1c0))+rd(s->r,32,8)));
L_1803defe7_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803defe7_3:;
wr(s->r,48,8,rd(s->u,20,8));
L_1803defe7_4:;
/* 1803defef: mov rdi, qword ptr [rsp + 0xf0] */
L_1803defef_0:;
L_1803defef_1:;
wr(s->u,8,8,(((U)UINT64_C(0xf0))+rd(s->r,32,8)));
L_1803defef_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803defef_3:;
wr(s->r,56,8,rd(s->u,20,8));
L_1803defef_4:;
/* 1803deff7: mov r12, qword ptr [rsp + 0xe0] */
L_1803deff7_0:;
L_1803deff7_1:;
wr(s->u,8,8,(((U)UINT64_C(0xe0))+rd(s->r,32,8)));
L_1803deff7_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803deff7_3:;
wr(s->r,160,8,rd(s->u,20,8));
L_1803deff7_4:;
/* 1803defff: mov r13, qword ptr [rsp + 0x108] */
L_1803defff_0:;
L_1803defff_1:;
wr(s->u,8,8,(((U)UINT64_C(0x108))+rd(s->r,32,8)));
L_1803defff_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803defff_3:;
wr(s->r,168,8,rd(s->u,20,8));
L_1803defff_4:;
/* 1803df007: mov r8, qword ptr [rsp + 0x50] */
L_1803df007_0:;
L_1803df007_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803df007_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df007_3:;
wr(s->r,128,8,rd(s->u,20,8));
L_1803df007_4:;
/* 1803df00c: mov r15d, dword ptr [rsp + 0x24] */
L_1803df00c_0:;
L_1803df00c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x24))+rd(s->r,32,8)));
L_1803df00c_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803df00c_3:;
wr(s->r,184,4,rd(s->u,16,4));
L_1803df00c_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803df00c_5:;
/* 1803df011: mov rbx, qword ptr [rsp + 0x38] */
L_1803df011_0:;
L_1803df011_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803df011_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df011_3:;
wr(s->r,24,8,rd(s->u,20,8));
L_1803df011_4:;
/* 1803df016: mov rbp, qword ptr [rsp + 0x70] */
L_1803df016_0:;
L_1803df016_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803df016_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803df016_3:;
wr(s->r,40,8,rd(s->u,20,8));
L_1803df016_4:;
/* 1803df01b: jmp 0x1803df022 */
L_1803df01b_0:;
L_1803df01b_1:;
return UINT64_C(0x1803df022);
L_1803df01b_2:;
return UINT64_C(0x1803df01d);
}
