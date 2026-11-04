#include "lift_runtime.h"
uint64_t b_1803eb005(CPU*s){
/* 1803eb005: mov rax, qword ptr [rbx] */
L_1803eb005_0:;
L_1803eb005_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803eb005_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803eb005_3:;
/* 1803eb008: mov edx, 1 */
L_1803eb008_0:;
L_1803eb008_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803eb008_2:;
/* 1803eb00d: mov rcx, rbx */
L_1803eb00d_0:;
L_1803eb00d_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803eb00d_2:;
/* 1803eb010: call qword ptr [rax + 0x20] */
L_1803eb010_0:;
L_1803eb010_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x20))));
L_1803eb010_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb010_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803eb010_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb010_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eb013)));
L_1803eb010_6:;
return (uint64_t)rd(s->u,16,8);
L_1803eb010_7:;
return UINT64_C(0x1803eb013);
}
uint64_t b_1803eb013(CPU*s){
/* 1803eb013: mov eax, 0xf4241 */
L_1803eb013_0:;
L_1803eb013_1:;
wr(s->r,0,8,((U)UINT64_C(0xf4241)));
L_1803eb013_2:;
/* 1803eb018: jmp 0x1803eb020 */
L_1803eb018_0:;
L_1803eb018_1:;
return UINT64_C(0x1803eb020);
L_1803eb018_2:;
return UINT64_C(0x1803eb01a);
}
uint64_t b_1803eb01a(CPU*s){
/* 1803eb01a: mov qword ptr [rbp], rbx */
L_1803eb01a_0:;
L_1803eb01a_1:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803eb01a_2:;
mw((uint64_t)rd(s->r,40,8),8,rd(s->u,8,8));
L_1803eb01a_3:;
/* 1803eb01e: xor eax, eax */
L_1803eb01e_0:;
L_1803eb01e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803eb01e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eb01e_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803eb01e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb01e_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb01e_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803eb01e_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803eb01e_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803eb01e_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803eb01e_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803eb01e_11:;
/* 1803eb020: mov rbx, qword ptr [rsp + 0x58] */
L_1803eb020_0:;
L_1803eb020_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803eb020_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb020_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803eb020_4:;
/* 1803eb025: mov rbp, qword ptr [rsp + 0x60] */
L_1803eb025_0:;
L_1803eb025_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803eb025_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb025_3:;
wr(s->r,40,8,rd(s->u,16,8));
L_1803eb025_4:;
/* 1803eb02a: add rsp, 0x30 */
L_1803eb02a_0:;
L_1803eb02a_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb02a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803eb02a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803eb02a_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb02a_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb02a_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb02a_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803eb02a_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803eb02a_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803eb02a_10:;
/* 1803eb02e: pop r12 */
L_1803eb02e_0:;
L_1803eb02e_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803eb02e_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb02e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb02e_4:;
wr(s->r,160,8,rd(s->u,34,8));
L_1803eb02e_5:;
/* 1803eb030: pop rdi */
L_1803eb030_0:;
L_1803eb030_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803eb030_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb030_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb030_4:;
wr(s->r,56,8,rd(s->u,34,8));
L_1803eb030_5:;
/* 1803eb031: pop rsi */
L_1803eb031_0:;
L_1803eb031_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803eb031_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb031_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb031_4:;
wr(s->r,48,8,rd(s->u,34,8));
L_1803eb031_5:;
/* 1803eb032: ret  */
L_1803eb032_0:;
L_1803eb032_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb032_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb032_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb032_4:;
return UINT64_C(0x1803eb033);
}
uint64_t b_1803eb020(CPU*s){
/* 1803eb020: mov rbx, qword ptr [rsp + 0x58] */
L_1803eb020_0:;
L_1803eb020_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803eb020_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb020_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803eb020_4:;
/* 1803eb025: mov rbp, qword ptr [rsp + 0x60] */
L_1803eb025_0:;
L_1803eb025_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803eb025_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb025_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803eb025_4:;
/* 1803eb02a: add rsp, 0x30 */
L_1803eb02a_0:;
L_1803eb02a_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb02a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803eb02a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803eb02a_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb02a_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb02a_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb02a_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803eb02a_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803eb02a_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803eb02a_10:;
/* 1803eb02e: pop r12 */
L_1803eb02e_0:;
L_1803eb02e_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803eb02e_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb02e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb02e_4:;
wr(s->r,160,8,rd(s->u,26,8));
L_1803eb02e_5:;
/* 1803eb030: pop rdi */
L_1803eb030_0:;
L_1803eb030_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803eb030_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb030_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb030_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803eb030_5:;
/* 1803eb031: pop rsi */
L_1803eb031_0:;
L_1803eb031_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803eb031_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb031_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb031_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1803eb031_5:;
/* 1803eb032: ret  */
L_1803eb032_0:;
L_1803eb032_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb032_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb032_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb032_4:;
return UINT64_C(0x1803eb033);
}
uint64_t b_1803eb040(CPU*s){
/* 1803eb040: mov qword ptr [rsp + 8], rcx */
L_1803eb040_0:;
L_1803eb040_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803eb040_2:;
wr(s->u,8,8,rd(s->r,8,8));
L_1803eb040_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803eb040_4:;
/* 1803eb045: push rdi */
L_1803eb045_0:;
L_1803eb045_1:;
wr(s->u,24,8,rd(s->r,56,8));
L_1803eb045_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb045_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803eb045_4:;
/* 1803eb046: sub rsp, 0x30 */
L_1803eb046_0:;
L_1803eb046_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803eb046_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803eb046_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803eb046_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb046_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb046_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb046_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803eb046_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803eb046_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803eb046_10:;
/* 1803eb04a: mov qword ptr [rsp + 0x20], 0xfffffffffffffffe */
L_1803eb04a_0:;
L_1803eb04a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803eb04a_2:;
wr(s->u,8,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803eb04a_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803eb04a_4:;
/* 1803eb053: mov qword ptr [rsp + 0x48], rbx */
L_1803eb053_0:;
L_1803eb053_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803eb053_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803eb053_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803eb053_4:;
/* 1803eb058: mov edi, edx */
L_1803eb058_0:;
L_1803eb058_1:;
wr(s->r,56,4,rd(s->r,16,4));
L_1803eb058_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803eb058_3:;
/* 1803eb05a: mov rbx, rcx */
L_1803eb05a_0:;
L_1803eb05a_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803eb05a_2:;
/* 1803eb05d: lea rax, [rip + 0x422114] */
L_1803eb05d_0:;
L_1803eb05d_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080d178)));
L_1803eb05d_2:;
/* 1803eb064: mov qword ptr [rcx], rax */
L_1803eb064_0:;
L_1803eb064_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803eb064_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,8,8));
L_1803eb064_3:;
/* 1803eb067: add rcx, 0x18 */
L_1803eb067_0:;
L_1803eb067_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x18)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803eb067_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x18)),8,0));
L_1803eb067_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x18))));
L_1803eb067_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb067_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803eb067_6:;
wr(s->u,32,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803eb067_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803eb067_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803eb067_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803eb067_10:;
/* 1803eb06b: cmp qword ptr [rcx], 0 */
L_1803eb06b_0:;
L_1803eb06b_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803eb06b_2:;
wr(s->u,42,8,rd(s->u,16,8));
L_1803eb06b_3:;
wr(s->r,512,1,(rd(s->u,42,8)<((U)UINT64_C(0x0))));
L_1803eb06b_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,42,8),((U)UINT64_C(0x0)),8,1));
L_1803eb06b_5:;
wr(s->u,50,8,(rd(s->u,42,8)-((U)UINT64_C(0x0))));
L_1803eb06b_6:;
wr(s->r,519,1,(sx(rd(s->u,50,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb06b_7:;
wr(s->r,518,1,(rd(s->u,50,8)==((U)UINT64_C(0x0))));
L_1803eb06b_8:;
wr(s->u,32,8,(rd(s->u,50,8)&((U)UINT64_C(0xff))));
L_1803eb06b_9:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803eb06b_10:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803eb06b_11:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803eb06b_12:;
/* 1803eb06f: je 0x1803eb077 */
L_1803eb06f_0:;
L_1803eb06f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803eb077);}
L_1803eb06f_2:;
return UINT64_C(0x1803eb071);
}
uint64_t b_1803eb071(CPU*s){
/* 1803eb071: call qword ptr [rip + 0x6330e9] */
L_1803eb071_0:;
L_1803eb071_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e160),8));
L_1803eb071_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb071_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eb077)));
L_1803eb071_4:;
return (uint64_t)rd(s->u,0,8);
L_1803eb071_5:;
return UINT64_C(0x1803eb077);
}
uint64_t b_1803eb077(CPU*s){
/* 1803eb077: lea rcx, [rbx + 0x38] */
L_1803eb077_0:;
L_1803eb077_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803eb077_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803eb077_3:;
/* 1803eb07b: cmp qword ptr [rcx], 0 */
L_1803eb07b_0:;
L_1803eb07b_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803eb07b_2:;
wr(s->u,26,8,rd(s->u,8,8));
L_1803eb07b_3:;
wr(s->r,512,1,(rd(s->u,26,8)<((U)UINT64_C(0x0))));
L_1803eb07b_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,8),((U)UINT64_C(0x0)),8,1));
L_1803eb07b_5:;
wr(s->u,34,8,(rd(s->u,26,8)-((U)UINT64_C(0x0))));
L_1803eb07b_6:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb07b_7:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803eb07b_8:;
wr(s->u,16,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803eb07b_9:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803eb07b_10:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803eb07b_11:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803eb07b_12:;
/* 1803eb07f: je 0x1803eb087 */
L_1803eb07f_0:;
L_1803eb07f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803eb087);}
L_1803eb07f_2:;
return UINT64_C(0x1803eb081);
}
uint64_t b_1803eb081(CPU*s){
/* 1803eb081: call qword ptr [rip + 0x6330d9] */
L_1803eb081_0:;
L_1803eb081_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e160),8));
L_1803eb081_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb081_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eb087)));
L_1803eb081_4:;
return (uint64_t)rd(s->u,0,8);
L_1803eb081_5:;
return UINT64_C(0x1803eb087);
}
uint64_t b_1803eb087(CPU*s){
/* 1803eb087: mov rcx, qword ptr [rbx + 0x30] */
L_1803eb087_0:;
L_1803eb087_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803eb087_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb087_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803eb087_4:;
/* 1803eb08b: call 0x1803fc9bc */
L_1803eb08b_0:;
L_1803eb08b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb08b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eb090)));
L_1803eb08b_3:;
return (uint64_t)UINT64_C(0x1803fc9bc);
L_1803eb08b_4:;
return UINT64_C(0x1803eb090);
}
uint64_t b_1803eb090(CPU*s){
/* 1803eb090: mov rcx, qword ptr [rbx + 0x28] */
L_1803eb090_0:;
L_1803eb090_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803eb090_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb090_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803eb090_4:;
/* 1803eb094: call 0x1803fc97c */
L_1803eb094_0:;
L_1803eb094_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb094_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eb099)));
L_1803eb094_3:;
return (uint64_t)UINT64_C(0x1803fc97c);
L_1803eb094_4:;
return UINT64_C(0x1803eb099);
}
uint64_t b_1803eb099(CPU*s){
/* 1803eb099: nop  */
L_1803eb099_0:;
L_1803eb099_1:;
/* 1803eb09a: lea rax, [rip + 0x421e0f] */
L_1803eb09a_0:;
L_1803eb09a_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080ceb0)));
L_1803eb09a_2:;
/* 1803eb0a1: mov qword ptr [rbx], rax */
L_1803eb0a1_0:;
L_1803eb0a1_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803eb0a1_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803eb0a1_3:;
/* 1803eb0a4: test dil, 1 */
L_1803eb0a4_0:;
L_1803eb0a4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803eb0a4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eb0a4_3:;
wr(s->u,11,1,(rd(s->r,56,1)&((U)UINT64_C(0x1))));
L_1803eb0a4_4:;
wr(s->r,519,1,(sx(rd(s->u,11,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803eb0a4_5:;
wr(s->r,518,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803eb0a4_6:;
wr(s->u,8,1,(rd(s->u,11,1)&((U)UINT64_C(0xff))));
L_1803eb0a4_7:;
wr(s->u,9,1,pop(rd(s->u,8,1),1));
L_1803eb0a4_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803eb0a4_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803eb0a4_10:;
/* 1803eb0a8: je 0x1803eb0b7 */
L_1803eb0a8_0:;
L_1803eb0a8_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803eb0b7);}
L_1803eb0a8_2:;
return UINT64_C(0x1803eb0aa);
}
uint64_t b_1803eb0aa(CPU*s){
/* 1803eb0aa: mov rcx, rbx */
L_1803eb0aa_0:;
L_1803eb0aa_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803eb0aa_2:;
/* 1803eb0ad: call 0x180003160 */
L_1803eb0ad_0:;
L_1803eb0ad_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb0ad_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eb0b2)));
L_1803eb0ad_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803eb0ad_4:;
return UINT64_C(0x1803eb0b2);
}
uint64_t b_1803eb0b2(CPU*s){
/* 1803eb0b2: mov rax, rbx */
L_1803eb0b2_0:;
L_1803eb0b2_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803eb0b2_2:;
/* 1803eb0b5: jmp 0x1803eb0ba */
L_1803eb0b5_0:;
L_1803eb0b5_1:;
return UINT64_C(0x1803eb0ba);
L_1803eb0b5_2:;
return UINT64_C(0x1803eb0b7);
}
uint64_t b_1803eb0b7(CPU*s){
/* 1803eb0b7: mov rax, rbx */
L_1803eb0b7_0:;
L_1803eb0b7_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803eb0b7_2:;
/* 1803eb0ba: mov rbx, qword ptr [rsp + 0x48] */
L_1803eb0ba_0:;
L_1803eb0ba_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803eb0ba_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb0ba_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803eb0ba_4:;
/* 1803eb0bf: add rsp, 0x30 */
L_1803eb0bf_0:;
L_1803eb0bf_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb0bf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803eb0bf_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803eb0bf_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb0bf_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb0bf_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb0bf_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803eb0bf_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803eb0bf_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803eb0bf_10:;
/* 1803eb0c3: pop rdi */
L_1803eb0c3_0:;
L_1803eb0c3_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803eb0c3_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb0c3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb0c3_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803eb0c3_5:;
/* 1803eb0c4: ret  */
L_1803eb0c4_0:;
L_1803eb0c4_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb0c4_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb0c4_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb0c4_4:;
return UINT64_C(0x1803eb0c5);
}
uint64_t b_1803eb0ba(CPU*s){
/* 1803eb0ba: mov rbx, qword ptr [rsp + 0x48] */
L_1803eb0ba_0:;
L_1803eb0ba_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803eb0ba_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb0ba_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803eb0ba_4:;
/* 1803eb0bf: add rsp, 0x30 */
L_1803eb0bf_0:;
L_1803eb0bf_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb0bf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803eb0bf_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803eb0bf_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb0bf_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb0bf_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb0bf_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803eb0bf_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803eb0bf_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803eb0bf_10:;
/* 1803eb0c3: pop rdi */
L_1803eb0c3_0:;
L_1803eb0c3_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803eb0c3_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb0c3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb0c3_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803eb0c3_5:;
/* 1803eb0c4: ret  */
L_1803eb0c4_0:;
L_1803eb0c4_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb0c4_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb0c4_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb0c4_4:;
return UINT64_C(0x1803eb0c5);
}
uint64_t b_1803eb120(CPU*s){
/* 1803eb120: jmp 0x1803fc9cc */
L_1803eb120_0:;
L_1803eb120_1:;
return UINT64_C(0x1803fc9cc);
L_1803eb120_2:;
return UINT64_C(0x1803eb125);
}
uint64_t b_1803eb130(CPU*s){
/* 1803eb130: push rbx */
L_1803eb130_0:;
L_1803eb130_1:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803eb130_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb130_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,8,8));
L_1803eb130_4:;
/* 1803eb132: sub rsp, 0x20 */
L_1803eb132_0:;
L_1803eb132_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803eb132_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803eb132_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803eb132_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb132_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb132_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb132_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803eb132_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803eb132_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803eb132_10:;
/* 1803eb136: mov rbx, rcx */
L_1803eb136_0:;
L_1803eb136_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803eb136_2:;
/* 1803eb139: mov rcx, qword ptr [rcx] */
L_1803eb139_0:;
L_1803eb139_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803eb139_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803eb139_3:;
/* 1803eb13c: test rcx, rcx */
L_1803eb13c_0:;
L_1803eb13c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803eb13c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eb13c_3:;
wr(s->u,26,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803eb13c_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb13c_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803eb13c_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803eb13c_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803eb13c_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803eb13c_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803eb13c_10:;
/* 1803eb13f: je 0x1803eb146 */
L_1803eb13f_0:;
L_1803eb13f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803eb146);}
L_1803eb13f_2:;
return UINT64_C(0x1803eb141);
}
uint64_t b_1803eb141(CPU*s){
/* 1803eb141: call 0x1803fc9bc */
L_1803eb141_0:;
L_1803eb141_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb141_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eb146)));
L_1803eb141_3:;
return (uint64_t)UINT64_C(0x1803fc9bc);
L_1803eb141_4:;
return UINT64_C(0x1803eb146);
}
uint64_t b_1803eb146(CPU*s){
/* 1803eb146: mov qword ptr [rbx], 0 */
L_1803eb146_0:;
L_1803eb146_1:;
wr(s->u,0,8,((U)UINT64_C(0x0)));
L_1803eb146_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803eb146_3:;
/* 1803eb14d: add rsp, 0x20 */
L_1803eb14d_0:;
L_1803eb14d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb14d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803eb14d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803eb14d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb14d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb14d_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb14d_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803eb14d_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803eb14d_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803eb14d_10:;
/* 1803eb151: pop rbx */
L_1803eb151_0:;
L_1803eb151_1:;
wr(s->u,18,8,((U)UINT64_C(0x0)));
L_1803eb151_2:;
wr(s->u,18,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb151_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb151_4:;
wr(s->r,24,8,rd(s->u,18,8));
L_1803eb151_5:;
/* 1803eb152: ret  */
L_1803eb152_0:;
L_1803eb152_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb152_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb152_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb152_4:;
return UINT64_C(0x1803eb153);
}
uint64_t b_1803eb160(CPU*s){
/* 1803eb160: jmp 0x1803fc9ec */
L_1803eb160_0:;
L_1803eb160_1:;
return UINT64_C(0x1803fc9ec);
L_1803eb160_2:;
return UINT64_C(0x1803eb165);
}
uint64_t b_1803eb170(CPU*s){
/* 1803eb170: mov eax, r8d */
L_1803eb170_0:;
L_1803eb170_1:;
wr(s->r,0,4,rd(s->r,128,4));
L_1803eb170_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb170_3:;
/* 1803eb173: mov r8, rdx */
L_1803eb173_0:;
L_1803eb173_1:;
wr(s->r,128,8,rd(s->r,16,8));
L_1803eb173_2:;
/* 1803eb176: mov r9d, 1 */
L_1803eb176_0:;
L_1803eb176_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1803eb176_2:;
/* 1803eb17c: mov edx, eax */
L_1803eb17c_0:;
L_1803eb17c_1:;
wr(s->r,16,4,rd(s->r,0,4));
L_1803eb17c_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803eb17c_3:;
/* 1803eb17e: jmp 0x1803fca1c */
L_1803eb17e_0:;
L_1803eb17e_1:;
return UINT64_C(0x1803fca1c);
L_1803eb17e_2:;
return UINT64_C(0x1803eb183);
}
uint64_t b_1803eb190(CPU*s){
/* 1803eb190: mov eax, r8d */
L_1803eb190_0:;
L_1803eb190_1:;
wr(s->r,0,4,rd(s->r,128,4));
L_1803eb190_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb190_3:;
/* 1803eb193: mov r8, rdx */
L_1803eb193_0:;
L_1803eb193_1:;
wr(s->r,128,8,rd(s->r,16,8));
L_1803eb193_2:;
/* 1803eb196: mov r9d, 1 */
L_1803eb196_0:;
L_1803eb196_1:;
wr(s->r,136,8,((U)UINT64_C(0x1)));
L_1803eb196_2:;
/* 1803eb19c: mov edx, eax */
L_1803eb19c_0:;
L_1803eb19c_1:;
wr(s->r,16,4,rd(s->r,0,4));
L_1803eb19c_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803eb19c_3:;
/* 1803eb19e: jmp 0x1803fca50 */
L_1803eb19e_0:;
L_1803eb19e_1:;
return UINT64_C(0x1803fca50);
L_1803eb19e_2:;
return UINT64_C(0x1803eb1a3);
}
uint64_t b_1803eb1b0(CPU*s){
/* 1803eb1b0: mov eax, r9d */
L_1803eb1b0_0:;
L_1803eb1b0_1:;
wr(s->r,0,4,rd(s->r,136,4));
L_1803eb1b0_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb1b0_3:;
/* 1803eb1b3: mov r9, r8 */
L_1803eb1b3_0:;
L_1803eb1b3_1:;
wr(s->r,136,8,rd(s->r,128,8));
L_1803eb1b3_2:;
/* 1803eb1b6: mov r8, rdx */
L_1803eb1b6_0:;
L_1803eb1b6_1:;
wr(s->r,128,8,rd(s->r,16,8));
L_1803eb1b6_2:;
/* 1803eb1b9: mov edx, eax */
L_1803eb1b9_0:;
L_1803eb1b9_1:;
wr(s->r,16,4,rd(s->r,0,4));
L_1803eb1b9_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803eb1b9_3:;
/* 1803eb1bb: jmp 0x1803fca98 */
L_1803eb1bb_0:;
L_1803eb1bb_1:;
return UINT64_C(0x1803fca98);
L_1803eb1bb_2:;
return UINT64_C(0x1803eb1c0);
}
uint64_t b_1803eb1c0(CPU*s){
/* 1803eb1c0: mov rax, rdx */
L_1803eb1c0_0:;
L_1803eb1c0_1:;
wr(s->r,0,8,rd(s->r,16,8));
L_1803eb1c0_2:;
/* 1803eb1c3: mov rdx, rcx */
L_1803eb1c3_0:;
L_1803eb1c3_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1803eb1c3_2:;
/* 1803eb1c6: mov rcx, rax */
L_1803eb1c6_0:;
L_1803eb1c6_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803eb1c6_2:;
/* 1803eb1c9: jmp 0x1803fced0 */
L_1803eb1c9_0:;
L_1803eb1c9_1:;
return UINT64_C(0x1803fced0);
L_1803eb1c9_2:;
return UINT64_C(0x1803eb1ce);
}
uint64_t b_1803eb1d0(CPU*s){
/* 1803eb1d0: mov rax, rdx */
L_1803eb1d0_0:;
L_1803eb1d0_1:;
wr(s->r,0,8,rd(s->r,16,8));
L_1803eb1d0_2:;
/* 1803eb1d3: mov rdx, rcx */
L_1803eb1d3_0:;
L_1803eb1d3_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1803eb1d3_2:;
/* 1803eb1d6: mov rcx, rax */
L_1803eb1d6_0:;
L_1803eb1d6_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803eb1d6_2:;
/* 1803eb1d9: jmp 0x1803fcf04 */
L_1803eb1d9_0:;
L_1803eb1d9_1:;
return UINT64_C(0x1803fcf04);
L_1803eb1d9_2:;
return UINT64_C(0x1803eb1de);
}
uint64_t b_1803eb1e0(CPU*s){
/* 1803eb1e0: movaps xmm0, xmm1 */
L_1803eb1e0_0:;
L_1803eb1e0_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803eb1e0_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803eb1e0_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803eb1e0_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803eb1e0_5:;
/* 1803eb1e3: mov rdx, rcx */
L_1803eb1e3_0:;
L_1803eb1e3_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1803eb1e3_2:;
/* 1803eb1e6: jmp 0x1803fcf38 */
L_1803eb1e6_0:;
L_1803eb1e6_1:;
return UINT64_C(0x1803fcf38);
L_1803eb1e6_2:;
return UINT64_C(0x1803eb1eb);
}
uint64_t b_1803eb1f0(CPU*s){
/* 1803eb1f0: mov rax, rdx */
L_1803eb1f0_0:;
L_1803eb1f0_1:;
wr(s->r,0,8,rd(s->r,16,8));
L_1803eb1f0_2:;
/* 1803eb1f3: mov rdx, rcx */
L_1803eb1f3_0:;
L_1803eb1f3_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1803eb1f3_2:;
/* 1803eb1f6: mov rcx, rax */
L_1803eb1f6_0:;
L_1803eb1f6_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803eb1f6_2:;
/* 1803eb1f9: jmp 0x1803fcf78 */
L_1803eb1f9_0:;
L_1803eb1f9_1:;
return UINT64_C(0x1803fcf78);
L_1803eb1f9_2:;
return UINT64_C(0x1803eb1fe);
}
uint64_t b_1803eb200(CPU*s){
/* 1803eb200: mov rax, rdx */
L_1803eb200_0:;
L_1803eb200_1:;
wr(s->r,0,8,rd(s->r,16,8));
L_1803eb200_2:;
/* 1803eb203: mov rdx, rcx */
L_1803eb203_0:;
L_1803eb203_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1803eb203_2:;
/* 1803eb206: mov rcx, rax */
L_1803eb206_0:;
L_1803eb206_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803eb206_2:;
/* 1803eb209: jmp 0x1803fcfac */
L_1803eb209_0:;
L_1803eb209_1:;
return UINT64_C(0x1803fcfac);
L_1803eb209_2:;
return UINT64_C(0x1803eb20e);
}
uint64_t b_1803eb210(CPU*s){
/* 1803eb210: movaps xmm0, xmm1 */
L_1803eb210_0:;
L_1803eb210_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803eb210_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803eb210_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803eb210_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803eb210_5:;
/* 1803eb213: mov rdx, rcx */
L_1803eb213_0:;
L_1803eb213_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1803eb213_2:;
/* 1803eb216: jmp 0x1803fcfe0 */
L_1803eb216_0:;
L_1803eb216_1:;
return UINT64_C(0x1803fcfe0);
L_1803eb216_2:;
return UINT64_C(0x1803eb21b);
}
uint64_t b_1803eb220(CPU*s){
/* 1803eb220: mov rax, rdx */
L_1803eb220_0:;
L_1803eb220_1:;
wr(s->r,0,8,rd(s->r,16,8));
L_1803eb220_2:;
/* 1803eb223: mov rdx, rcx */
L_1803eb223_0:;
L_1803eb223_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1803eb223_2:;
/* 1803eb226: mov rcx, rax */
L_1803eb226_0:;
L_1803eb226_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803eb226_2:;
/* 1803eb229: jmp 0x1803fd034 */
L_1803eb229_0:;
L_1803eb229_1:;
return UINT64_C(0x1803fd034);
L_1803eb229_2:;
return UINT64_C(0x1803eb22e);
}
uint64_t b_1803eb230(CPU*s){
/* 1803eb230: mov rax, r8 */
L_1803eb230_0:;
L_1803eb230_1:;
wr(s->r,0,8,rd(s->r,128,8));
L_1803eb230_2:;
/* 1803eb233: mov r10, rdx */
L_1803eb233_0:;
L_1803eb233_1:;
wr(s->r,144,8,rd(s->r,16,8));
L_1803eb233_2:;
/* 1803eb236: mov r8, rcx */
L_1803eb236_0:;
L_1803eb236_1:;
wr(s->r,128,8,rd(s->r,8,8));
L_1803eb236_2:;
/* 1803eb239: mov rdx, rax */
L_1803eb239_0:;
L_1803eb239_1:;
wr(s->r,16,8,rd(s->r,0,8));
L_1803eb239_2:;
/* 1803eb23c: mov rcx, r10 */
L_1803eb23c_0:;
L_1803eb23c_1:;
wr(s->r,8,8,rd(s->r,144,8));
L_1803eb23c_2:;
/* 1803eb23f: jmp 0x1803fd06c */
L_1803eb23f_0:;
L_1803eb23f_1:;
return UINT64_C(0x1803fd06c);
L_1803eb23f_2:;
return UINT64_C(0x1803eb244);
}
uint64_t b_1803eb250(CPU*s){
/* 1803eb250: jmp 0x1803fd254 */
L_1803eb250_0:;
L_1803eb250_1:;
return UINT64_C(0x1803fd254);
L_1803eb250_2:;
return UINT64_C(0x1803eb255);
}
uint64_t b_1803eb260(CPU*s){
/* 1803eb260: jmp 0x1803fd288 */
L_1803eb260_0:;
L_1803eb260_1:;
return UINT64_C(0x1803fd288);
L_1803eb260_2:;
return UINT64_C(0x1803eb265);
}
uint64_t b_1803eb270(CPU*s){
/* 1803eb270: mov qword ptr [rsp + 8], rbx */
L_1803eb270_0:;
L_1803eb270_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803eb270_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803eb270_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803eb270_4:;
/* 1803eb275: push rdi */
L_1803eb275_0:;
L_1803eb275_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803eb275_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb275_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803eb275_4:;
/* 1803eb276: sub rsp, 0x20 */
L_1803eb276_0:;
L_1803eb276_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803eb276_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803eb276_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803eb276_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb276_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb276_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb276_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803eb276_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803eb276_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803eb276_10:;
/* 1803eb27a: movaps xmm3, xmm2 */
L_1803eb27a_0:;
L_1803eb27a_1:;
wr(s->r,4800,4,rd(s->r,4736,4));
L_1803eb27a_2:;
wr(s->r,4804,4,rd(s->r,4740,4));
L_1803eb27a_3:;
wr(s->r,4808,4,rd(s->r,4744,4));
L_1803eb27a_4:;
wr(s->r,4812,4,rd(s->r,4748,4));
L_1803eb27a_5:;
/* 1803eb27d: movaps xmm2, xmm1 */
L_1803eb27d_0:;
L_1803eb27d_1:;
wr(s->r,4736,4,rd(s->r,4672,4));
L_1803eb27d_2:;
wr(s->r,4740,4,rd(s->r,4676,4));
L_1803eb27d_3:;
wr(s->r,4744,4,rd(s->r,4680,4));
L_1803eb27d_4:;
wr(s->r,4748,4,rd(s->r,4684,4));
L_1803eb27d_5:;
/* 1803eb280: mov edx, r9d */
L_1803eb280_0:;
L_1803eb280_1:;
wr(s->r,16,4,rd(s->r,136,4));
L_1803eb280_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803eb280_3:;
/* 1803eb283: mov edi, r9d */
L_1803eb283_0:;
L_1803eb283_1:;
wr(s->r,56,4,rd(s->r,136,4));
L_1803eb283_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803eb283_3:;
/* 1803eb286: mov rbx, rcx */
L_1803eb286_0:;
L_1803eb286_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803eb286_2:;
/* 1803eb289: call 0x1803fd3a8 */
L_1803eb289_0:;
L_1803eb289_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb289_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eb28e)));
L_1803eb289_3:;
return (uint64_t)UINT64_C(0x1803fd3a8);
L_1803eb289_4:;
return UINT64_C(0x1803eb28e);
}
uint64_t b_1803eb28e(CPU*s){
/* 1803eb28e: mov edx, edi */
L_1803eb28e_0:;
L_1803eb28e_1:;
wr(s->r,16,4,rd(s->r,56,4));
L_1803eb28e_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803eb28e_3:;
/* 1803eb290: mov rcx, rbx */
L_1803eb290_0:;
L_1803eb290_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803eb290_2:;
/* 1803eb293: mov rbx, qword ptr [rsp + 0x30] */
L_1803eb293_0:;
L_1803eb293_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803eb293_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb293_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803eb293_4:;
/* 1803eb298: add rsp, 0x20 */
L_1803eb298_0:;
L_1803eb298_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb298_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803eb298_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803eb298_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb298_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb298_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb298_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803eb298_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803eb298_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803eb298_10:;
/* 1803eb29c: pop rdi */
L_1803eb29c_0:;
L_1803eb29c_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803eb29c_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb29c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb29c_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803eb29c_5:;
/* 1803eb29d: jmp 0x1803fd2bc */
L_1803eb29d_0:;
L_1803eb29d_1:;
return UINT64_C(0x1803fd2bc);
L_1803eb29d_2:;
return UINT64_C(0x1803eb2a2);
}
uint64_t b_1803eb2b0(CPU*s){
/* 1803eb2b0: movaps xmm3, xmm2 */
L_1803eb2b0_0:;
L_1803eb2b0_1:;
wr(s->r,4800,4,rd(s->r,4736,4));
L_1803eb2b0_2:;
wr(s->r,4804,4,rd(s->r,4740,4));
L_1803eb2b0_3:;
wr(s->r,4808,4,rd(s->r,4744,4));
L_1803eb2b0_4:;
wr(s->r,4812,4,rd(s->r,4748,4));
L_1803eb2b0_5:;
/* 1803eb2b3: movaps xmm2, xmm1 */
L_1803eb2b3_0:;
L_1803eb2b3_1:;
wr(s->r,4736,4,rd(s->r,4672,4));
L_1803eb2b3_2:;
wr(s->r,4740,4,rd(s->r,4676,4));
L_1803eb2b3_3:;
wr(s->r,4744,4,rd(s->r,4680,4));
L_1803eb2b3_4:;
wr(s->r,4748,4,rd(s->r,4684,4));
L_1803eb2b3_5:;
/* 1803eb2b6: mov edx, r9d */
L_1803eb2b6_0:;
L_1803eb2b6_1:;
wr(s->r,16,4,rd(s->r,136,4));
L_1803eb2b6_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803eb2b6_3:;
/* 1803eb2b9: jmp 0x1803fd3a8 */
L_1803eb2b9_0:;
L_1803eb2b9_1:;
return UINT64_C(0x1803fd3a8);
L_1803eb2b9_2:;
return UINT64_C(0x1803eb2be);
}
uint64_t b_1803eb2c0(CPU*s){
/* 1803eb2c0: movaps xmm3, xmm2 */
L_1803eb2c0_0:;
L_1803eb2c0_1:;
wr(s->r,4800,4,rd(s->r,4736,4));
L_1803eb2c0_2:;
wr(s->r,4804,4,rd(s->r,4740,4));
L_1803eb2c0_3:;
wr(s->r,4808,4,rd(s->r,4744,4));
L_1803eb2c0_4:;
wr(s->r,4812,4,rd(s->r,4748,4));
L_1803eb2c0_5:;
/* 1803eb2c3: movaps xmm2, xmm1 */
L_1803eb2c3_0:;
L_1803eb2c3_1:;
wr(s->r,4736,4,rd(s->r,4672,4));
L_1803eb2c3_2:;
wr(s->r,4740,4,rd(s->r,4676,4));
L_1803eb2c3_3:;
wr(s->r,4744,4,rd(s->r,4680,4));
L_1803eb2c3_4:;
wr(s->r,4748,4,rd(s->r,4684,4));
L_1803eb2c3_5:;
/* 1803eb2c6: mov edx, r9d */
L_1803eb2c6_0:;
L_1803eb2c6_1:;
wr(s->r,16,4,rd(s->r,136,4));
L_1803eb2c6_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803eb2c6_3:;
/* 1803eb2c9: jmp 0x1803fd3f8 */
L_1803eb2c9_0:;
L_1803eb2c9_1:;
return UINT64_C(0x1803fd3f8);
L_1803eb2c9_2:;
return UINT64_C(0x1803eb2ce);
}
uint64_t b_1803eb2d0(CPU*s){
/* 1803eb2d0: mov eax, r9d */
L_1803eb2d0_0:;
L_1803eb2d0_1:;
wr(s->r,0,4,rd(s->r,136,4));
L_1803eb2d0_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb2d0_3:;
/* 1803eb2d3: mov r9, r8 */
L_1803eb2d3_0:;
L_1803eb2d3_1:;
wr(s->r,136,8,rd(s->r,128,8));
L_1803eb2d3_2:;
/* 1803eb2d6: mov r8d, eax */
L_1803eb2d6_0:;
L_1803eb2d6_1:;
wr(s->r,128,4,rd(s->r,0,4));
L_1803eb2d6_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803eb2d6_3:;
/* 1803eb2d9: jmp 0x1803fd448 */
L_1803eb2d9_0:;
L_1803eb2d9_1:;
return UINT64_C(0x1803fd448);
L_1803eb2d9_2:;
return UINT64_C(0x1803eb2de);
}
uint64_t b_1803eb2e0(CPU*s){
/* 1803eb2e0: push rbx */
L_1803eb2e0_0:;
L_1803eb2e0_1:;
wr(s->u,33,8,rd(s->r,24,8));
L_1803eb2e0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb2e0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,33,8));
L_1803eb2e0_4:;
/* 1803eb2e2: push r13 */
L_1803eb2e2_0:;
L_1803eb2e2_1:;
wr(s->u,33,8,rd(s->r,168,8));
L_1803eb2e2_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb2e2_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,33,8));
L_1803eb2e2_4:;
/* 1803eb2e4: sub rsp, 0x18 */
L_1803eb2e4_0:;
L_1803eb2e4_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x18))));
L_1803eb2e4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x18)),8,1));
L_1803eb2e4_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x18))));
L_1803eb2e4_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb2e4_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb2e4_6:;
wr(s->u,41,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb2e4_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803eb2e4_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803eb2e4_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803eb2e4_10:;
/* 1803eb2e8: mov eax, dword ptr [rdx] */
L_1803eb2e8_0:;
L_1803eb2e8_1:;
wr(s->u,28,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803eb2e8_2:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803eb2e8_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb2e8_4:;
/* 1803eb2ea: movsxd rbx, r9d */
L_1803eb2ea_0:;
L_1803eb2ea_1:;
wr(s->r,24,8,(U)sx(rd(s->r,136,4),4));
L_1803eb2ea_2:;
/* 1803eb2ed: mov r10d, 1 */
L_1803eb2ed_0:;
L_1803eb2ed_1:;
wr(s->r,144,8,((U)UINT64_C(0x1)));
L_1803eb2ed_2:;
/* 1803eb2f3: mov dword ptr [rcx], eax */
L_1803eb2f3_0:;
L_1803eb2f3_1:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803eb2f3_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,24,4));
L_1803eb2f3_3:;
/* 1803eb2f5: mov rax, rbx */
L_1803eb2f5_0:;
L_1803eb2f5_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803eb2f5_2:;
/* 1803eb2f8: sar ebx, 1 */
L_1803eb2f8_0:;
L_1803eb2f8_1:;
wr(s->u,59,4,(rd(s->r,24,4)&((U)UINT64_C(0x1))));
L_1803eb2f8_2:;
wr(s->r,512,1,(rd(s->u,59,4)!=((U)UINT64_C(0x0))));
L_1803eb2f8_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eb2f8_4:;
wr(s->r,24,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,24,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,24,4),4)>>((U)UINT64_C(0x1)))));
L_1803eb2f8_5:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803eb2f8_6:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb2f8_7:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803eb2f8_8:;
wr(s->u,41,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803eb2f8_9:;
wr(s->u,49,1,pop(rd(s->u,41,4),4));
L_1803eb2f8_10:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803eb2f8_11:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803eb2f8_12:;
/* 1803eb2fa: sar rax, 1 */
L_1803eb2fa_0:;
L_1803eb2fa_1:;
wr(s->u,63,8,(rd(s->r,0,8)&((U)UINT64_C(0x1))));
L_1803eb2fa_2:;
wr(s->r,512,1,(rd(s->u,63,8)!=((U)UINT64_C(0x0))));
L_1803eb2fa_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eb2fa_4:;
wr(s->r,0,8,((((U)UINT64_C(0x1))>=64)?(sx(rd(s->r,0,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,0,8),8)>>((U)UINT64_C(0x1)))));
L_1803eb2fa_5:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb2fa_6:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803eb2fa_7:;
wr(s->u,41,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803eb2fa_8:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803eb2fa_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803eb2fa_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803eb2fa_11:;
/* 1803eb2fd: mov r13, r8 */
L_1803eb2fd_0:;
L_1803eb2fd_1:;
wr(s->r,168,8,rd(s->r,128,8));
L_1803eb2fd_2:;
/* 1803eb300: mov r11, rcx */
L_1803eb300_0:;
L_1803eb300_1:;
wr(s->r,152,8,rd(s->r,8,8));
L_1803eb300_2:;
/* 1803eb303: mov eax, dword ptr [rdx + rax*4] */
L_1803eb303_0:;
L_1803eb303_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803eb303_2:;
wr(s->u,16,8,(rd(s->r,16,8)+rd(s->u,8,8)));
L_1803eb303_3:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803eb303_4:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803eb303_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb303_6:;
/* 1803eb306: mov r9, r10 */
L_1803eb306_0:;
L_1803eb306_1:;
wr(s->r,136,8,rd(s->r,144,8));
L_1803eb306_2:;
/* 1803eb309: mov dword ptr [rcx + 4], eax */
L_1803eb309_0:;
L_1803eb309_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803eb309_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803eb309_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803eb309_4:;
/* 1803eb30c: lea eax, [rbx - 1] */
L_1803eb30c_0:;
L_1803eb30c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803eb30c_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803eb30c_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb30c_4:;
/* 1803eb30f: cmp eax, 4 */
L_1803eb30f_0:;
L_1803eb30f_1:;
wr(s->u,51,4,rd(s->r,0,4));
L_1803eb30f_2:;
wr(s->r,512,1,(rd(s->u,51,4)<((U)UINT64_C(0x4))));
L_1803eb30f_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,51,4),((U)UINT64_C(0x4)),4,1));
L_1803eb30f_4:;
wr(s->u,55,4,(rd(s->u,51,4)-((U)UINT64_C(0x4))));
L_1803eb30f_5:;
wr(s->r,519,1,(sx(rd(s->u,55,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb30f_6:;
wr(s->r,518,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803eb30f_7:;
wr(s->u,41,4,(rd(s->u,55,4)&((U)UINT64_C(0xff))));
L_1803eb30f_8:;
wr(s->u,49,1,pop(rd(s->u,41,4),4));
L_1803eb30f_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803eb30f_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803eb30f_11:;
/* 1803eb312: jl 0x1803eb3ec */
L_1803eb312_0:;
L_1803eb312_1:;
wr(s->u,32,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803eb312_2:;
if(rd(s->u,32,1)){return UINT64_C(0x1803eb3ec);}
L_1803eb312_3:;
return UINT64_C(0x1803eb318);
}
uint64_t b_1803eb318(CPU*s){
/* 1803eb318: mov qword ptr [rsp + 0x30], rbp */
L_1803eb318_0:;
L_1803eb318_1:;
wr(s->u,45,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803eb318_2:;
wr(s->u,73,8,rd(s->r,40,8));
L_1803eb318_3:;
mw((uint64_t)rd(s->u,45,8),8,rd(s->u,73,8));
L_1803eb318_4:;
/* 1803eb31d: mov qword ptr [rsp + 0x38], rsi */
L_1803eb31d_0:;
L_1803eb31d_1:;
wr(s->u,45,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803eb31d_2:;
wr(s->u,73,8,rd(s->r,48,8));
L_1803eb31d_3:;
mw((uint64_t)rd(s->u,45,8),8,rd(s->u,73,8));
L_1803eb31d_4:;
/* 1803eb322: mov qword ptr [rsp + 0x40], rdi */
L_1803eb322_0:;
L_1803eb322_1:;
wr(s->u,45,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803eb322_2:;
wr(s->u,73,8,rd(s->r,56,8));
L_1803eb322_3:;
mw((uint64_t)rd(s->u,45,8),8,rd(s->u,73,8));
L_1803eb322_4:;
/* 1803eb327: mov qword ptr [rsp + 0x10], r12 */
L_1803eb327_0:;
L_1803eb327_1:;
wr(s->u,45,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803eb327_2:;
wr(s->u,73,8,rd(s->r,160,8));
L_1803eb327_3:;
mw((uint64_t)rd(s->u,45,8),8,rd(s->u,73,8));
L_1803eb327_4:;
/* 1803eb32c: mov qword ptr [rsp + 8], r14 */
L_1803eb32c_0:;
L_1803eb32c_1:;
wr(s->u,45,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803eb32c_2:;
wr(s->u,73,8,rd(s->r,176,8));
L_1803eb32c_3:;
mw((uint64_t)rd(s->u,45,8),8,rd(s->u,73,8));
L_1803eb32c_4:;
/* 1803eb331: mov qword ptr [rsp], r15 */
L_1803eb331_0:;
L_1803eb331_1:;
wr(s->u,73,8,rd(s->r,184,8));
L_1803eb331_2:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,73,8));
L_1803eb331_3:;
/* 1803eb335: lea r15d, [rbx - 3] */
L_1803eb335_0:;
L_1803eb335_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffffd))));
L_1803eb335_2:;
wr(s->r,184,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803eb335_3:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803eb335_4:;
/* 1803eb339: mov rbp, r13 */
L_1803eb339_0:;
L_1803eb339_1:;
wr(s->r,40,8,rd(s->r,168,8));
L_1803eb339_2:;
/* 1803eb33c: lea rsi, [r8 + 8] */
L_1803eb33c_0:;
L_1803eb33c_1:;
wr(s->u,5,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803eb33c_2:;
wr(s->r,48,8,rd(s->u,5,8));
L_1803eb33c_3:;
/* 1803eb340: lea eax, [r15 - 2] */
L_1803eb340_0:;
L_1803eb340_1:;
wr(s->u,5,8,(rd(s->r,184,8)+((U)UINT64_C(0xfffffffffffffffe))));
L_1803eb340_2:;
wr(s->r,0,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803eb340_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb340_4:;
/* 1803eb344: sub rbp, rdx */
L_1803eb344_0:;
L_1803eb344_1:;
wr(s->r,512,1,(rd(s->r,40,8)<rd(s->r,16,8)));
L_1803eb344_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),rd(s->r,16,8),8,1));
L_1803eb344_3:;
wr(s->r,40,8,(rd(s->r,40,8)-rd(s->r,16,8)));
L_1803eb344_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb344_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803eb344_6:;
wr(s->u,85,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803eb344_7:;
wr(s->u,93,1,pop(rd(s->u,85,8),8));
L_1803eb344_8:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803eb344_9:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803eb344_10:;
/* 1803eb347: lea r8, [rdx + 0xc] */
L_1803eb347_0:;
L_1803eb347_1:;
wr(s->u,5,8,(rd(s->r,16,8)+((U)UINT64_C(0xc))));
L_1803eb347_2:;
wr(s->r,128,8,rd(s->u,5,8));
L_1803eb347_3:;
/* 1803eb34b: shr eax, 2 */
L_1803eb34b_0:;
L_1803eb34b_1:;
wr(s->u,130,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803eb34b_2:;
wr(s->u,134,4,rd(s->r,0,4));
L_1803eb34b_3:;
wr(s->r,0,4,((rd(s->u,130,4)>=32)?0:(rd(s->r,0,4)>>rd(s->u,130,4))));
L_1803eb34b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb34b_5:;
wr(s->u,114,1,(rd(s->u,130,4)==((U)UINT64_C(0x0))));
L_1803eb34b_6:;
wr(s->u,115,4,(rd(s->u,130,4)-((U)UINT64_C(0x1))));
L_1803eb34b_7:;
wr(s->u,119,4,((rd(s->u,115,4)>=32)?0:(rd(s->u,134,4)>>rd(s->u,115,4))));
L_1803eb34b_8:;
wr(s->u,123,4,(rd(s->u,119,4)&((U)UINT64_C(0x1))));
L_1803eb34b_9:;
wr(s->u,127,1,(rd(s->u,123,4)!=((U)UINT64_C(0x0))));
L_1803eb34b_10:;
wr(s->u,0,1,rd(s->u,114,1));
L_1803eb34b_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803eb34b_12:;
wr(s->u,2,1,(!rd(s->u,114,1)));
L_1803eb34b_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803eb34b_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,127,1)));
L_1803eb34b_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803eb34b_16:;
wr(s->u,128,1,(rd(s->u,130,4)==((U)UINT64_C(0x1))));
L_1803eb34b_17:;
wr(s->u,129,1,(sx(rd(s->u,134,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb34b_18:;
wr(s->u,0,1,rd(s->u,128,1));
L_1803eb34b_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803eb34b_20:;
wr(s->u,2,1,(!rd(s->u,128,1)));
L_1803eb34b_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803eb34b_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,129,1)));
L_1803eb34b_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803eb34b_24:;
wr(s->u,95,1,(rd(s->u,130,4)!=((U)UINT64_C(0x0))));
L_1803eb34b_25:;
wr(s->u,96,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb34b_26:;
wr(s->u,97,1,(!rd(s->u,95,1)));
L_1803eb34b_27:;
wr(s->u,98,1,(rd(s->u,97,1)&rd(s->r,519,1)));
L_1803eb34b_28:;
wr(s->u,99,1,(rd(s->u,95,1)&rd(s->u,96,1)));
L_1803eb34b_29:;
wr(s->r,519,1,(rd(s->u,98,1)|rd(s->u,99,1)));
L_1803eb34b_30:;
wr(s->u,100,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803eb34b_31:;
wr(s->u,101,1,(!rd(s->u,95,1)));
L_1803eb34b_32:;
wr(s->u,102,1,(rd(s->u,101,1)&rd(s->r,518,1)));
L_1803eb34b_33:;
wr(s->u,103,1,(rd(s->u,95,1)&rd(s->u,100,1)));
L_1803eb34b_34:;
wr(s->r,518,1,(rd(s->u,102,1)|rd(s->u,103,1)));
L_1803eb34b_35:;
wr(s->u,104,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803eb34b_36:;
wr(s->u,108,1,pop(rd(s->u,104,4),4));
L_1803eb34b_37:;
wr(s->u,109,1,(rd(s->u,108,1)&((U)UINT64_C(0x1))));
L_1803eb34b_38:;
wr(s->u,110,1,(rd(s->u,109,1)==((U)UINT64_C(0x0))));
L_1803eb34b_39:;
wr(s->u,111,1,(!rd(s->u,95,1)));
L_1803eb34b_40:;
wr(s->u,112,1,(rd(s->u,111,1)&rd(s->r,514,1)));
L_1803eb34b_41:;
wr(s->u,113,1,(rd(s->u,95,1)&rd(s->u,110,1)));
L_1803eb34b_42:;
wr(s->r,514,1,(rd(s->u,112,1)|rd(s->u,113,1)));
L_1803eb34b_43:;
/* 1803eb34e: lea rdi, [rcx + 0x14] */
L_1803eb34e_0:;
L_1803eb34e_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x14))));
L_1803eb34e_2:;
wr(s->r,56,8,rd(s->u,5,8));
L_1803eb34e_3:;
/* 1803eb352: lea r12, [rcx + 0x20] */
L_1803eb352_0:;
L_1803eb352_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x20))));
L_1803eb352_2:;
wr(s->r,160,8,rd(s->u,5,8));
L_1803eb352_3:;
/* 1803eb356: inc eax */
L_1803eb356_0:;
L_1803eb356_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,0));
L_1803eb356_2:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x1))));
L_1803eb356_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb356_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb356_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803eb356_6:;
wr(s->u,85,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803eb356_7:;
wr(s->u,93,1,pop(rd(s->u,85,4),4));
L_1803eb356_8:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803eb356_9:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803eb356_10:;
/* 1803eb358: lea r14, [rcx + 0x10] */
L_1803eb358_0:;
L_1803eb358_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803eb358_2:;
wr(s->r,176,8,rd(s->u,5,8));
L_1803eb358_3:;
/* 1803eb35c: lea r9, [rax*4 + 1] */
L_1803eb35c_0:;
L_1803eb35c_1:;
wr(s->u,29,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803eb35c_2:;
wr(s->u,37,8,(((U)UINT64_C(0x1))+rd(s->u,29,8)));
L_1803eb35c_3:;
wr(s->r,136,8,rd(s->u,37,8));
L_1803eb35c_4:;
/* 1803eb364: nop word ptr [rax + rax] */
L_1803eb364_0:;
L_1803eb364_1:;
wr(s->u,53,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803eb364_2:;
wr(s->u,61,8,(rd(s->r,0,8)+rd(s->u,53,8)));
L_1803eb364_3:;
/* 1803eb370: lea eax, [r10 + r10] */
L_1803eb370_0:;
L_1803eb370_1:;
wr(s->u,13,8,(rd(s->r,144,8)*((U)UINT64_C(0x1))));
L_1803eb370_2:;
wr(s->u,21,8,(rd(s->r,144,8)+rd(s->u,13,8)));
L_1803eb370_3:;
wr(s->r,0,4,(rd(s->u,21,8) >> (((U)UINT64_C(0x0))*8)));
L_1803eb370_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb370_5:;
/* 1803eb374: add r10d, 4 */
L_1803eb374_0:;
L_1803eb374_1:;
wr(s->r,512,1,(((rd(s->r,144,4)+((U)UINT64_C(0x4)))&(((U)1<<32)-1))<rd(s->r,144,4)));
L_1803eb374_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x4)),4,0));
L_1803eb374_3:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x4))));
L_1803eb374_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803eb374_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb374_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803eb374_7:;
wr(s->u,85,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803eb374_8:;
wr(s->u,93,1,pop(rd(s->u,85,4),4));
L_1803eb374_9:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803eb374_10:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803eb374_11:;
/* 1803eb378: add rdi, 0x20 */
L_1803eb378_0:;
L_1803eb378_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803eb378_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x20)),8,0));
L_1803eb378_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x20))));
L_1803eb378_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb378_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803eb378_6:;
wr(s->u,85,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803eb378_7:;
wr(s->u,93,1,pop(rd(s->u,85,8),8));
L_1803eb378_8:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803eb378_9:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803eb378_10:;
/* 1803eb37c: movsxd rcx, eax */
L_1803eb37c_0:;
L_1803eb37c_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803eb37c_2:;
/* 1803eb37f: mov eax, dword ptr [r8 - 8] */
L_1803eb37f_0:;
L_1803eb37f_1:;
wr(s->u,5,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803eb37f_2:;
wr(s->u,81,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803eb37f_3:;
wr(s->r,0,4,rd(s->u,81,4));
L_1803eb37f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb37f_5:;
/* 1803eb383: add rsi, 0x10 */
L_1803eb383_0:;
L_1803eb383_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803eb383_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x10)),8,0));
L_1803eb383_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x10))));
L_1803eb383_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb383_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803eb383_6:;
wr(s->u,85,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803eb383_7:;
wr(s->u,93,1,pop(rd(s->u,85,8),8));
L_1803eb383_8:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803eb383_9:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803eb383_10:;
/* 1803eb387: mov dword ptr [r11 + rcx*4], eax */
L_1803eb387_0:;
L_1803eb387_1:;
wr(s->u,13,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803eb387_2:;
wr(s->u,21,8,(rd(s->r,152,8)+rd(s->u,13,8)));
L_1803eb387_3:;
wr(s->u,69,4,rd(s->r,0,4));
L_1803eb387_4:;
mw((uint64_t)rd(s->u,21,8),4,rd(s->u,69,4));
L_1803eb387_5:;
/* 1803eb38b: mov eax, dword ptr [rsi - 0x18] */
L_1803eb38b_0:;
L_1803eb38b_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1803eb38b_2:;
wr(s->u,81,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803eb38b_3:;
wr(s->r,0,4,rd(s->u,81,4));
L_1803eb38b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb38b_5:;
/* 1803eb38e: add r8, 0x10 */
L_1803eb38e_0:;
L_1803eb38e_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803eb38e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x10)),8,0));
L_1803eb38e_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x10))));
L_1803eb38e_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb38e_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803eb38e_6:;
wr(s->u,85,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803eb38e_7:;
wr(s->u,93,1,pop(rd(s->u,85,8),8));
L_1803eb38e_8:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803eb38e_9:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803eb38e_10:;
/* 1803eb392: mov dword ptr [rdi - 0x28], eax */
L_1803eb392_0:;
L_1803eb392_1:;
wr(s->u,5,8,(rd(s->r,56,8)+((U)UINT64_C(0xffffffffffffffd8))));
L_1803eb392_2:;
wr(s->u,69,4,rd(s->r,0,4));
L_1803eb392_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,69,4));
L_1803eb392_4:;
/* 1803eb395: mov eax, dword ptr [r8 - 0x14] */
L_1803eb395_0:;
L_1803eb395_1:;
wr(s->u,5,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803eb395_2:;
wr(s->u,81,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803eb395_3:;
wr(s->r,0,4,rd(s->u,81,4));
L_1803eb395_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb395_5:;
/* 1803eb399: add r12, 0x20 */
L_1803eb399_0:;
L_1803eb399_1:;
wr(s->r,512,1,(((rd(s->r,160,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,160,8)));
L_1803eb399_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),((U)UINT64_C(0x20)),8,0));
L_1803eb399_3:;
wr(s->r,160,8,(rd(s->r,160,8)+((U)UINT64_C(0x20))));
L_1803eb399_4:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb399_5:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803eb399_6:;
wr(s->u,85,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803eb399_7:;
wr(s->u,93,1,pop(rd(s->u,85,8),8));
L_1803eb399_8:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803eb399_9:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803eb399_10:;
/* 1803eb39d: mov dword ptr [r14], eax */
L_1803eb39d_0:;
L_1803eb39d_1:;
wr(s->u,69,4,rd(s->r,0,4));
L_1803eb39d_2:;
mw((uint64_t)rd(s->r,176,8),4,rd(s->u,69,4));
L_1803eb39d_3:;
return UINT64_C(0x1803eb3a0);
}
uint64_t b_1803eb370(CPU*s){
/* 1803eb370: lea eax, [r10 + r10] */
L_1803eb370_0:;
L_1803eb370_1:;
wr(s->u,8,8,(rd(s->r,144,8)*((U)UINT64_C(0x1))));
L_1803eb370_2:;
wr(s->u,16,8,(rd(s->r,144,8)+rd(s->u,8,8)));
L_1803eb370_3:;
wr(s->r,0,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803eb370_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb370_5:;
/* 1803eb374: add r10d, 4 */
L_1803eb374_0:;
L_1803eb374_1:;
wr(s->r,512,1,(((rd(s->r,144,4)+((U)UINT64_C(0x4)))&(((U)1<<32)-1))<rd(s->r,144,4)));
L_1803eb374_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x4)),4,0));
L_1803eb374_3:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x4))));
L_1803eb374_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803eb374_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb374_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803eb374_7:;
wr(s->u,65,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803eb374_8:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803eb374_9:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803eb374_10:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803eb374_11:;
/* 1803eb378: add rdi, 0x20 */
L_1803eb378_0:;
L_1803eb378_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803eb378_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x20)),8,0));
L_1803eb378_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x20))));
L_1803eb378_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb378_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803eb378_6:;
wr(s->u,65,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803eb378_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803eb378_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803eb378_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803eb378_10:;
/* 1803eb37c: movsxd rcx, eax */
L_1803eb37c_0:;
L_1803eb37c_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803eb37c_2:;
/* 1803eb37f: mov eax, dword ptr [r8 - 8] */
L_1803eb37f_0:;
L_1803eb37f_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803eb37f_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb37f_3:;
wr(s->r,0,4,rd(s->u,60,4));
L_1803eb37f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb37f_5:;
/* 1803eb383: add rsi, 0x10 */
L_1803eb383_0:;
L_1803eb383_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803eb383_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x10)),8,0));
L_1803eb383_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x10))));
L_1803eb383_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb383_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803eb383_6:;
wr(s->u,65,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803eb383_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803eb383_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803eb383_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803eb383_10:;
/* 1803eb387: mov dword ptr [r11 + rcx*4], eax */
L_1803eb387_0:;
L_1803eb387_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803eb387_2:;
wr(s->u,16,8,(rd(s->r,152,8)+rd(s->u,8,8)));
L_1803eb387_3:;
wr(s->u,56,4,rd(s->r,0,4));
L_1803eb387_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,56,4));
L_1803eb387_5:;
/* 1803eb38b: mov eax, dword ptr [rsi - 0x18] */
L_1803eb38b_0:;
L_1803eb38b_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1803eb38b_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb38b_3:;
wr(s->r,0,4,rd(s->u,60,4));
L_1803eb38b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb38b_5:;
/* 1803eb38e: add r8, 0x10 */
L_1803eb38e_0:;
L_1803eb38e_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803eb38e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x10)),8,0));
L_1803eb38e_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x10))));
L_1803eb38e_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb38e_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803eb38e_6:;
wr(s->u,65,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803eb38e_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803eb38e_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803eb38e_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803eb38e_10:;
/* 1803eb392: mov dword ptr [rdi - 0x28], eax */
L_1803eb392_0:;
L_1803eb392_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xffffffffffffffd8))));
L_1803eb392_2:;
wr(s->u,56,4,rd(s->r,0,4));
L_1803eb392_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803eb392_4:;
/* 1803eb395: mov eax, dword ptr [r8 - 0x14] */
L_1803eb395_0:;
L_1803eb395_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803eb395_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb395_3:;
wr(s->r,0,4,rd(s->u,60,4));
L_1803eb395_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb395_5:;
/* 1803eb399: add r12, 0x20 */
L_1803eb399_0:;
L_1803eb399_1:;
wr(s->r,512,1,(((rd(s->r,160,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,160,8)));
L_1803eb399_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),((U)UINT64_C(0x20)),8,0));
L_1803eb399_3:;
wr(s->r,160,8,(rd(s->r,160,8)+((U)UINT64_C(0x20))));
L_1803eb399_4:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb399_5:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803eb399_6:;
wr(s->u,65,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803eb399_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803eb399_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803eb399_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803eb399_10:;
/* 1803eb39d: mov dword ptr [r14], eax */
L_1803eb39d_0:;
L_1803eb39d_1:;
wr(s->u,56,4,rd(s->r,0,4));
L_1803eb39d_2:;
mw((uint64_t)rd(s->r,176,8),4,rd(s->u,56,4));
L_1803eb39d_3:;
/* 1803eb3a0: mov eax, dword ptr [rsi - 0x14] */
L_1803eb3a0_0:;
L_1803eb3a0_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803eb3a0_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb3a0_3:;
wr(s->r,0,4,rd(s->u,60,4));
L_1803eb3a0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb3a0_5:;
/* 1803eb3a3: add r14, 0x20 */
L_1803eb3a3_0:;
L_1803eb3a3_1:;
wr(s->r,512,1,(((rd(s->r,176,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,176,8)));
L_1803eb3a3_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,176,8),((U)UINT64_C(0x20)),8,0));
L_1803eb3a3_3:;
wr(s->r,176,8,(rd(s->r,176,8)+((U)UINT64_C(0x20))));
L_1803eb3a3_4:;
wr(s->r,519,1,(sx(rd(s->r,176,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb3a3_5:;
wr(s->r,518,1,(rd(s->r,176,8)==((U)UINT64_C(0x0))));
L_1803eb3a3_6:;
wr(s->u,65,8,(rd(s->r,176,8)&((U)UINT64_C(0xff))));
L_1803eb3a3_7:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803eb3a3_8:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803eb3a3_9:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803eb3a3_10:;
/* 1803eb3a7: cmp r10d, r15d */
L_1803eb3a7_0:;
L_1803eb3a7_1:;
wr(s->u,75,4,rd(s->r,184,4));
L_1803eb3a7_2:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->u,75,4)));
L_1803eb3a7_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->u,75,4),4,1));
L_1803eb3a7_4:;
wr(s->u,79,4,(rd(s->r,144,4)-rd(s->u,75,4)));
L_1803eb3a7_5:;
wr(s->r,519,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb3a7_6:;
wr(s->r,518,1,(rd(s->u,79,4)==((U)UINT64_C(0x0))));
L_1803eb3a7_7:;
wr(s->u,65,4,(rd(s->u,79,4)&((U)UINT64_C(0xff))));
L_1803eb3a7_8:;
wr(s->u,73,1,pop(rd(s->u,65,4),4));
L_1803eb3a7_9:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803eb3a7_10:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803eb3a7_11:;
/* 1803eb3aa: mov dword ptr [rdi - 0x20], eax */
L_1803eb3aa_0:;
L_1803eb3aa_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xffffffffffffffe0))));
L_1803eb3aa_2:;
wr(s->u,56,4,rd(s->r,0,4));
L_1803eb3aa_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803eb3aa_4:;
/* 1803eb3ad: mov eax, dword ptr [r8 - 0x10] */
L_1803eb3ad_0:;
L_1803eb3ad_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb3ad_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb3ad_3:;
wr(s->r,0,4,rd(s->u,60,4));
L_1803eb3ad_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb3ad_5:;
/* 1803eb3b1: mov dword ptr [r12 - 0x28], eax */
L_1803eb3b1_0:;
L_1803eb3b1_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffd8))+rd(s->r,160,8)));
L_1803eb3b1_2:;
wr(s->u,56,4,rd(s->r,0,4));
L_1803eb3b1_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,56,4));
L_1803eb3b1_4:;
/* 1803eb3b6: mov eax, dword ptr [rsi - 0x10] */
L_1803eb3b6_0:;
L_1803eb3b6_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb3b6_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb3b6_3:;
wr(s->r,0,4,rd(s->u,60,4));
L_1803eb3b6_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb3b6_5:;
/* 1803eb3b9: mov dword ptr [rdi - 0x18], eax */
L_1803eb3b9_0:;
L_1803eb3b9_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1803eb3b9_2:;
wr(s->u,56,4,rd(s->r,0,4));
L_1803eb3b9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803eb3b9_4:;
/* 1803eb3bc: mov eax, dword ptr [r8 - 0xc] */
L_1803eb3bc_0:;
L_1803eb3bc_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803eb3bc_2:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb3bc_3:;
wr(s->r,0,4,rd(s->u,60,4));
L_1803eb3bc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb3bc_5:;
/* 1803eb3c0: mov dword ptr [r12 - 0x20], eax */
L_1803eb3c0_0:;
L_1803eb3c0_1:;
wr(s->u,24,8,(((U)UINT64_C(0xffffffffffffffe0))+rd(s->r,160,8)));
L_1803eb3c0_2:;
wr(s->u,56,4,rd(s->r,0,4));
L_1803eb3c0_3:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,56,4));
L_1803eb3c0_4:;
/* 1803eb3c5: mov eax, dword ptr [r8 + rbp - 0x10] */
L_1803eb3c5_0:;
L_1803eb3c5_1:;
wr(s->u,32,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,128,8)));
L_1803eb3c5_2:;
wr(s->u,40,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803eb3c5_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803eb3c5_4:;
wr(s->u,60,4,mr((uint64_t)rd(s->u,48,8),4));
L_1803eb3c5_5:;
wr(s->r,0,4,rd(s->u,60,4));
L_1803eb3c5_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb3c5_7:;
/* 1803eb3ca: mov dword ptr [rdi - 0x10], eax */
L_1803eb3ca_0:;
L_1803eb3ca_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb3ca_2:;
wr(s->u,56,4,rd(s->r,0,4));
L_1803eb3ca_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803eb3ca_4:;
/* 1803eb3cd: jl 0x1803eb370 */
L_1803eb3cd_0:;
L_1803eb3cd_1:;
wr(s->u,64,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803eb3cd_2:;
if(rd(s->u,64,1)){goto L_1803eb370_0;}
L_1803eb3cd_3:;
return UINT64_C(0x1803eb3cf);
}
uint64_t b_1803eb3a0(CPU*s){
/* 1803eb3a0: mov eax, dword ptr [rsi - 0x14] */
L_1803eb3a0_0:;
L_1803eb3a0_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803eb3a0_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb3a0_3:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803eb3a0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb3a0_5:;
/* 1803eb3a3: add r14, 0x20 */
L_1803eb3a3_0:;
L_1803eb3a3_1:;
wr(s->r,512,1,(((rd(s->r,176,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,176,8)));
L_1803eb3a3_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,176,8),((U)UINT64_C(0x20)),8,0));
L_1803eb3a3_3:;
wr(s->r,176,8,(rd(s->r,176,8)+((U)UINT64_C(0x20))));
L_1803eb3a3_4:;
wr(s->r,519,1,(sx(rd(s->r,176,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb3a3_5:;
wr(s->r,518,1,(rd(s->r,176,8)==((U)UINT64_C(0x0))));
L_1803eb3a3_6:;
wr(s->u,49,8,(rd(s->r,176,8)&((U)UINT64_C(0xff))));
L_1803eb3a3_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803eb3a3_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803eb3a3_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803eb3a3_10:;
/* 1803eb3a7: cmp r10d, r15d */
L_1803eb3a7_0:;
L_1803eb3a7_1:;
wr(s->u,59,4,rd(s->r,184,4));
L_1803eb3a7_2:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->u,59,4)));
L_1803eb3a7_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->u,59,4),4,1));
L_1803eb3a7_4:;
wr(s->u,63,4,(rd(s->r,144,4)-rd(s->u,59,4)));
L_1803eb3a7_5:;
wr(s->r,519,1,(sx(rd(s->u,63,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb3a7_6:;
wr(s->r,518,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803eb3a7_7:;
wr(s->u,49,4,(rd(s->u,63,4)&((U)UINT64_C(0xff))));
L_1803eb3a7_8:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803eb3a7_9:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803eb3a7_10:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803eb3a7_11:;
/* 1803eb3aa: mov dword ptr [rdi - 0x20], eax */
L_1803eb3aa_0:;
L_1803eb3aa_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xffffffffffffffe0))));
L_1803eb3aa_2:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803eb3aa_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,40,4));
L_1803eb3aa_4:;
/* 1803eb3ad: mov eax, dword ptr [r8 - 0x10] */
L_1803eb3ad_0:;
L_1803eb3ad_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb3ad_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb3ad_3:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803eb3ad_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb3ad_5:;
/* 1803eb3b1: mov dword ptr [r12 - 0x28], eax */
L_1803eb3b1_0:;
L_1803eb3b1_1:;
wr(s->u,8,8,(((U)UINT64_C(0xffffffffffffffd8))+rd(s->r,160,8)));
L_1803eb3b1_2:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803eb3b1_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,40,4));
L_1803eb3b1_4:;
/* 1803eb3b6: mov eax, dword ptr [rsi - 0x10] */
L_1803eb3b6_0:;
L_1803eb3b6_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb3b6_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb3b6_3:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803eb3b6_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb3b6_5:;
/* 1803eb3b9: mov dword ptr [rdi - 0x18], eax */
L_1803eb3b9_0:;
L_1803eb3b9_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1803eb3b9_2:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803eb3b9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,40,4));
L_1803eb3b9_4:;
/* 1803eb3bc: mov eax, dword ptr [r8 - 0xc] */
L_1803eb3bc_0:;
L_1803eb3bc_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803eb3bc_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb3bc_3:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803eb3bc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb3bc_5:;
/* 1803eb3c0: mov dword ptr [r12 - 0x20], eax */
L_1803eb3c0_0:;
L_1803eb3c0_1:;
wr(s->u,8,8,(((U)UINT64_C(0xffffffffffffffe0))+rd(s->r,160,8)));
L_1803eb3c0_2:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803eb3c0_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,40,4));
L_1803eb3c0_4:;
/* 1803eb3c5: mov eax, dword ptr [r8 + rbp - 0x10] */
L_1803eb3c5_0:;
L_1803eb3c5_1:;
wr(s->u,16,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,128,8)));
L_1803eb3c5_2:;
wr(s->u,24,8,(rd(s->r,40,8)*((U)UINT64_C(0x1))));
L_1803eb3c5_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803eb3c5_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803eb3c5_5:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803eb3c5_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb3c5_7:;
/* 1803eb3ca: mov dword ptr [rdi - 0x10], eax */
L_1803eb3ca_0:;
L_1803eb3ca_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb3ca_2:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803eb3ca_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,40,4));
L_1803eb3ca_4:;
/* 1803eb3cd: jl 0x1803eb370 */
L_1803eb3cd_0:;
L_1803eb3cd_1:;
wr(s->u,48,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803eb3cd_2:;
if(rd(s->u,48,1)){return UINT64_C(0x1803eb370);}
L_1803eb3cd_3:;
return UINT64_C(0x1803eb3cf);
}
uint64_t b_1803eb3cf(CPU*s){
/* 1803eb3cf: mov r15, qword ptr [rsp] */
L_1803eb3cf_0:;
L_1803eb3cf_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb3cf_2:;
wr(s->r,184,8,rd(s->u,8,8));
L_1803eb3cf_3:;
/* 1803eb3d3: mov r14, qword ptr [rsp + 8] */
L_1803eb3d3_0:;
L_1803eb3d3_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803eb3d3_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb3d3_3:;
wr(s->r,176,8,rd(s->u,8,8));
L_1803eb3d3_4:;
/* 1803eb3d8: mov r12, qword ptr [rsp + 0x10] */
L_1803eb3d8_0:;
L_1803eb3d8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803eb3d8_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb3d8_3:;
wr(s->r,160,8,rd(s->u,8,8));
L_1803eb3d8_4:;
/* 1803eb3dd: mov rdi, qword ptr [rsp + 0x40] */
L_1803eb3dd_0:;
L_1803eb3dd_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803eb3dd_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb3dd_3:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803eb3dd_4:;
/* 1803eb3e2: mov rsi, qword ptr [rsp + 0x38] */
L_1803eb3e2_0:;
L_1803eb3e2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803eb3e2_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb3e2_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803eb3e2_4:;
/* 1803eb3e7: mov rbp, qword ptr [rsp + 0x30] */
L_1803eb3e7_0:;
L_1803eb3e7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803eb3e7_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb3e7_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803eb3e7_4:;
/* 1803eb3ec: cmp r10d, ebx */
L_1803eb3ec_0:;
L_1803eb3ec_1:;
wr(s->u,23,4,rd(s->r,24,4));
L_1803eb3ec_2:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->u,23,4)));
L_1803eb3ec_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->u,23,4),4,1));
L_1803eb3ec_4:;
wr(s->u,27,4,(rd(s->r,144,4)-rd(s->u,23,4)));
L_1803eb3ec_5:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb3ec_6:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803eb3ec_7:;
wr(s->u,17,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803eb3ec_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803eb3ec_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803eb3ec_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803eb3ec_11:;
/* 1803eb3ef: jge 0x1803eb427 */
L_1803eb3ef_0:;
L_1803eb3ef_1:;
wr(s->u,16,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803eb3ef_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803eb427);}
L_1803eb3ef_3:;
return UINT64_C(0x1803eb3f1);
}
uint64_t b_1803eb3ec(CPU*s){
/* 1803eb3ec: cmp r10d, ebx */
L_1803eb3ec_0:;
L_1803eb3ec_1:;
wr(s->u,7,4,rd(s->r,24,4));
L_1803eb3ec_2:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->u,7,4)));
L_1803eb3ec_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->u,7,4),4,1));
L_1803eb3ec_4:;
wr(s->u,11,4,(rd(s->r,144,4)-rd(s->u,7,4)));
L_1803eb3ec_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb3ec_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803eb3ec_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803eb3ec_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803eb3ec_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803eb3ec_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803eb3ec_11:;
/* 1803eb3ef: jge 0x1803eb427 */
L_1803eb3ef_0:;
L_1803eb3ef_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803eb3ef_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803eb427);}
L_1803eb3ef_3:;
return UINT64_C(0x1803eb3f1);
}
uint64_t b_1803eb3f1(CPU*s){
/* 1803eb3f1: lea rdx, [rdx + r9*4] */
L_1803eb3f1_0:;
L_1803eb3f1_1:;
wr(s->u,8,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803eb3f1_2:;
wr(s->u,16,8,(rd(s->r,16,8)+rd(s->u,8,8)));
L_1803eb3f1_3:;
wr(s->r,16,8,rd(s->u,16,8));
L_1803eb3f1_4:;
/* 1803eb3f5: lea r8, [r11 + r9*8 + 4] */
L_1803eb3f5_0:;
L_1803eb3f5_1:;
wr(s->u,24,8,(((U)UINT64_C(0x4))+rd(s->r,152,8)));
L_1803eb3f5_2:;
wr(s->u,32,8,(rd(s->r,136,8)*((U)UINT64_C(0x8))));
L_1803eb3f5_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803eb3f5_4:;
wr(s->r,128,8,rd(s->u,40,8));
L_1803eb3f5_5:;
/* 1803eb3fa: lea r9, [r13 + r9*4 - 4] */
L_1803eb3fa_0:;
L_1803eb3fa_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,168,8)));
L_1803eb3fa_2:;
wr(s->u,32,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803eb3fa_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803eb3fa_4:;
wr(s->r,136,8,rd(s->u,40,8));
L_1803eb3fa_5:;
/* 1803eb3ff: lea eax, [r10 + r10] */
L_1803eb3ff_0:;
L_1803eb3ff_1:;
wr(s->u,8,8,(rd(s->r,144,8)*((U)UINT64_C(0x1))));
L_1803eb3ff_2:;
wr(s->u,16,8,(rd(s->r,144,8)+rd(s->u,8,8)));
L_1803eb3ff_3:;
wr(s->r,0,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803eb3ff_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb3ff_5:;
/* 1803eb403: inc r10d */
L_1803eb403_0:;
L_1803eb403_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x1)),4,0));
L_1803eb403_2:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x1))));
L_1803eb403_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803eb403_4:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb403_5:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803eb403_6:;
wr(s->u,57,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803eb403_7:;
wr(s->u,65,1,pop(rd(s->u,57,4),4));
L_1803eb403_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803eb403_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803eb403_10:;
/* 1803eb406: add r8, 8 */
L_1803eb406_0:;
L_1803eb406_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803eb406_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803eb406_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803eb406_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb406_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803eb406_6:;
wr(s->u,57,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803eb406_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803eb406_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803eb406_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803eb406_10:;
/* 1803eb40a: movsxd rcx, eax */
L_1803eb40a_0:;
L_1803eb40a_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803eb40a_2:;
/* 1803eb40d: mov eax, dword ptr [rdx] */
L_1803eb40d_0:;
L_1803eb40d_1:;
wr(s->u,52,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803eb40d_2:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803eb40d_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb40d_4:;
/* 1803eb40f: add rdx, 4 */
L_1803eb40f_0:;
L_1803eb40f_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803eb40f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x4)),8,0));
L_1803eb40f_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803eb40f_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb40f_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803eb40f_6:;
wr(s->u,57,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803eb40f_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803eb40f_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803eb40f_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803eb40f_10:;
/* 1803eb413: mov dword ptr [r11 + rcx*4], eax */
L_1803eb413_0:;
L_1803eb413_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803eb413_2:;
wr(s->u,16,8,(rd(s->r,152,8)+rd(s->u,8,8)));
L_1803eb413_3:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803eb413_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,48,4));
L_1803eb413_5:;
/* 1803eb417: mov eax, dword ptr [r9] */
L_1803eb417_0:;
L_1803eb417_1:;
wr(s->u,52,4,mr((uint64_t)rd(s->r,136,8),4));
L_1803eb417_2:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803eb417_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb417_4:;
/* 1803eb41a: add r9, 4 */
L_1803eb41a_0:;
L_1803eb41a_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803eb41a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x4)),8,0));
L_1803eb41a_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x4))));
L_1803eb41a_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb41a_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803eb41a_6:;
wr(s->u,57,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803eb41a_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803eb41a_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803eb41a_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803eb41a_10:;
/* 1803eb41e: cmp r10d, ebx */
L_1803eb41e_0:;
L_1803eb41e_1:;
wr(s->u,67,4,rd(s->r,24,4));
L_1803eb41e_2:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->u,67,4)));
L_1803eb41e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->u,67,4),4,1));
L_1803eb41e_4:;
wr(s->u,71,4,(rd(s->r,144,4)-rd(s->u,67,4)));
L_1803eb41e_5:;
wr(s->r,519,1,(sx(rd(s->u,71,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb41e_6:;
wr(s->r,518,1,(rd(s->u,71,4)==((U)UINT64_C(0x0))));
L_1803eb41e_7:;
wr(s->u,57,4,(rd(s->u,71,4)&((U)UINT64_C(0xff))));
L_1803eb41e_8:;
wr(s->u,65,1,pop(rd(s->u,57,4),4));
L_1803eb41e_9:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803eb41e_10:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803eb41e_11:;
/* 1803eb421: mov dword ptr [r8 - 8], eax */
L_1803eb421_0:;
L_1803eb421_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803eb421_2:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803eb421_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803eb421_4:;
/* 1803eb425: jl 0x1803eb3ff */
L_1803eb425_0:;
L_1803eb425_1:;
wr(s->u,56,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803eb425_2:;
if(rd(s->u,56,1)){goto L_1803eb3ff_0;}
L_1803eb425_3:;
return UINT64_C(0x1803eb427);
}
uint64_t b_1803eb3ff(CPU*s){
/* 1803eb3ff: lea eax, [r10 + r10] */
L_1803eb3ff_0:;
L_1803eb3ff_1:;
wr(s->u,8,8,(rd(s->r,144,8)*((U)UINT64_C(0x1))));
L_1803eb3ff_2:;
wr(s->u,16,8,(rd(s->r,144,8)+rd(s->u,8,8)));
L_1803eb3ff_3:;
wr(s->r,0,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803eb3ff_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb3ff_5:;
/* 1803eb403: inc r10d */
L_1803eb403_0:;
L_1803eb403_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x1)),4,0));
L_1803eb403_2:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x1))));
L_1803eb403_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803eb403_4:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb403_5:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803eb403_6:;
wr(s->u,33,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803eb403_7:;
wr(s->u,41,1,pop(rd(s->u,33,4),4));
L_1803eb403_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803eb403_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803eb403_10:;
/* 1803eb406: add r8, 8 */
L_1803eb406_0:;
L_1803eb406_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803eb406_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803eb406_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803eb406_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb406_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803eb406_6:;
wr(s->u,33,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803eb406_7:;
wr(s->u,41,1,pop(rd(s->u,33,8),8));
L_1803eb406_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803eb406_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803eb406_10:;
/* 1803eb40a: movsxd rcx, eax */
L_1803eb40a_0:;
L_1803eb40a_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803eb40a_2:;
/* 1803eb40d: mov eax, dword ptr [rdx] */
L_1803eb40d_0:;
L_1803eb40d_1:;
wr(s->u,28,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803eb40d_2:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803eb40d_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb40d_4:;
/* 1803eb40f: add rdx, 4 */
L_1803eb40f_0:;
L_1803eb40f_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803eb40f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x4)),8,0));
L_1803eb40f_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803eb40f_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb40f_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803eb40f_6:;
wr(s->u,33,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803eb40f_7:;
wr(s->u,41,1,pop(rd(s->u,33,8),8));
L_1803eb40f_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803eb40f_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803eb40f_10:;
/* 1803eb413: mov dword ptr [r11 + rcx*4], eax */
L_1803eb413_0:;
L_1803eb413_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803eb413_2:;
wr(s->u,16,8,(rd(s->r,152,8)+rd(s->u,8,8)));
L_1803eb413_3:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803eb413_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803eb413_5:;
/* 1803eb417: mov eax, dword ptr [r9] */
L_1803eb417_0:;
L_1803eb417_1:;
wr(s->u,28,4,mr((uint64_t)rd(s->r,136,8),4));
L_1803eb417_2:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803eb417_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb417_4:;
/* 1803eb41a: add r9, 4 */
L_1803eb41a_0:;
L_1803eb41a_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803eb41a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x4)),8,0));
L_1803eb41a_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x4))));
L_1803eb41a_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb41a_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803eb41a_6:;
wr(s->u,33,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803eb41a_7:;
wr(s->u,41,1,pop(rd(s->u,33,8),8));
L_1803eb41a_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803eb41a_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803eb41a_10:;
/* 1803eb41e: cmp r10d, ebx */
L_1803eb41e_0:;
L_1803eb41e_1:;
wr(s->u,43,4,rd(s->r,24,4));
L_1803eb41e_2:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->u,43,4)));
L_1803eb41e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->u,43,4),4,1));
L_1803eb41e_4:;
wr(s->u,47,4,(rd(s->r,144,4)-rd(s->u,43,4)));
L_1803eb41e_5:;
wr(s->r,519,1,(sx(rd(s->u,47,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb41e_6:;
wr(s->r,518,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803eb41e_7:;
wr(s->u,33,4,(rd(s->u,47,4)&((U)UINT64_C(0xff))));
L_1803eb41e_8:;
wr(s->u,41,1,pop(rd(s->u,33,4),4));
L_1803eb41e_9:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803eb41e_10:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803eb41e_11:;
/* 1803eb421: mov dword ptr [r8 - 8], eax */
L_1803eb421_0:;
L_1803eb421_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803eb421_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803eb421_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803eb421_4:;
/* 1803eb425: jl 0x1803eb3ff */
L_1803eb425_0:;
L_1803eb425_1:;
wr(s->u,32,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803eb425_2:;
if(rd(s->u,32,1)){goto L_1803eb3ff_0;}
L_1803eb425_3:;
return UINT64_C(0x1803eb427);
}
uint64_t b_1803eb427(CPU*s){
/* 1803eb427: add rsp, 0x18 */
L_1803eb427_0:;
L_1803eb427_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x18)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb427_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x18)),8,0));
L_1803eb427_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x18))));
L_1803eb427_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb427_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb427_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb427_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803eb427_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803eb427_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803eb427_10:;
/* 1803eb42b: pop r13 */
L_1803eb42b_0:;
L_1803eb42b_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803eb42b_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb42b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb42b_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803eb42b_5:;
/* 1803eb42d: pop rbx */
L_1803eb42d_0:;
L_1803eb42d_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803eb42d_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb42d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb42d_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803eb42d_5:;
/* 1803eb42e: ret  */
L_1803eb42e_0:;
L_1803eb42e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb42e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb42e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb42e_4:;
return UINT64_C(0x1803eb42f);
}
uint64_t b_1803eb430(CPU*s){
/* 1803eb430: mov dword ptr [rsp + 0x20], r9d */
L_1803eb430_0:;
L_1803eb430_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803eb430_2:;
wr(s->u,16,4,rd(s->r,136,4));
L_1803eb430_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803eb430_4:;
/* 1803eb435: push rbx */
L_1803eb435_0:;
L_1803eb435_1:;
wr(s->u,21,8,rd(s->r,24,8));
L_1803eb435_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb435_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,21,8));
L_1803eb435_4:;
/* 1803eb436: push rbp */
L_1803eb436_0:;
L_1803eb436_1:;
wr(s->u,21,8,rd(s->r,40,8));
L_1803eb436_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb436_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,21,8));
L_1803eb436_4:;
/* 1803eb437: push rsi */
L_1803eb437_0:;
L_1803eb437_1:;
wr(s->u,21,8,rd(s->r,48,8));
L_1803eb437_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb437_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,21,8));
L_1803eb437_4:;
/* 1803eb438: push rdi */
L_1803eb438_0:;
L_1803eb438_1:;
wr(s->u,21,8,rd(s->r,56,8));
L_1803eb438_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb438_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,21,8));
L_1803eb438_4:;
/* 1803eb439: sub rsp, 8 */
L_1803eb439_0:;
L_1803eb439_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x8))));
L_1803eb439_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x8)),8,1));
L_1803eb439_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb439_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb439_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb439_6:;
wr(s->u,29,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb439_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803eb439_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803eb439_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803eb439_10:;
/* 1803eb43d: mov esi, r9d */
L_1803eb43d_0:;
L_1803eb43d_1:;
wr(s->r,48,4,rd(s->r,136,4));
L_1803eb43d_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803eb43d_3:;
/* 1803eb440: mov r10d, 1 */
L_1803eb440_0:;
L_1803eb440_1:;
wr(s->r,144,8,((U)UINT64_C(0x1)));
L_1803eb440_2:;
/* 1803eb446: mov r11, r8 */
L_1803eb446_0:;
L_1803eb446_1:;
wr(s->r,152,8,rd(s->r,128,8));
L_1803eb446_2:;
/* 1803eb449: mov ebx, esi */
L_1803eb449_0:;
L_1803eb449_1:;
wr(s->r,24,4,rd(s->r,48,4));
L_1803eb449_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803eb449_3:;
/* 1803eb44b: mov rbp, rdx */
L_1803eb44b_0:;
L_1803eb44b_1:;
wr(s->r,40,8,rd(s->r,16,8));
L_1803eb44b_2:;
/* 1803eb44e: mov rdi, rcx */
L_1803eb44e_0:;
L_1803eb44e_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803eb44e_2:;
/* 1803eb451: sar ebx, 1 */
L_1803eb451_0:;
L_1803eb451_1:;
wr(s->u,47,4,(rd(s->r,24,4)&((U)UINT64_C(0x1))));
L_1803eb451_2:;
wr(s->r,512,1,(rd(s->u,47,4)!=((U)UINT64_C(0x0))));
L_1803eb451_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eb451_4:;
wr(s->r,24,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,24,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,24,4),4)>>((U)UINT64_C(0x1)))));
L_1803eb451_5:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803eb451_6:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb451_7:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803eb451_8:;
wr(s->u,29,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803eb451_9:;
wr(s->u,37,1,pop(rd(s->u,29,4),4));
L_1803eb451_10:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803eb451_11:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803eb451_12:;
/* 1803eb453: mov r9, r10 */
L_1803eb453_0:;
L_1803eb453_1:;
wr(s->r,136,8,rd(s->r,144,8));
L_1803eb453_2:;
/* 1803eb456: lea eax, [rbx - 1] */
L_1803eb456_0:;
L_1803eb456_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803eb456_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803eb456_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb456_4:;
/* 1803eb459: cmp eax, 4 */
L_1803eb459_0:;
L_1803eb459_1:;
wr(s->u,39,4,rd(s->r,0,4));
L_1803eb459_2:;
wr(s->r,512,1,(rd(s->u,39,4)<((U)UINT64_C(0x4))));
L_1803eb459_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,39,4),((U)UINT64_C(0x4)),4,1));
L_1803eb459_4:;
wr(s->u,43,4,(rd(s->u,39,4)-((U)UINT64_C(0x4))));
L_1803eb459_5:;
wr(s->r,519,1,(sx(rd(s->u,43,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb459_6:;
wr(s->r,518,1,(rd(s->u,43,4)==((U)UINT64_C(0x0))));
L_1803eb459_7:;
wr(s->u,29,4,(rd(s->u,43,4)&((U)UINT64_C(0xff))));
L_1803eb459_8:;
wr(s->u,37,1,pop(rd(s->u,29,4),4));
L_1803eb459_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803eb459_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803eb459_11:;
/* 1803eb45c: jl 0x1803eb525 */
L_1803eb45c_0:;
L_1803eb45c_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803eb45c_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803eb525);}
L_1803eb45c_3:;
return UINT64_C(0x1803eb462);
}
uint64_t b_1803eb462(CPU*s){
/* 1803eb462: mov qword ptr [rsp + 0x30], r12 */
L_1803eb462_0:;
L_1803eb462_1:;
wr(s->u,45,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803eb462_2:;
wr(s->u,73,8,rd(s->r,160,8));
L_1803eb462_3:;
mw((uint64_t)rd(s->u,45,8),8,rd(s->u,73,8));
L_1803eb462_4:;
/* 1803eb467: mov qword ptr [rsp + 0x38], r13 */
L_1803eb467_0:;
L_1803eb467_1:;
wr(s->u,45,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803eb467_2:;
wr(s->u,73,8,rd(s->r,168,8));
L_1803eb467_3:;
mw((uint64_t)rd(s->u,45,8),8,rd(s->u,73,8));
L_1803eb467_4:;
/* 1803eb46c: mov qword ptr [rsp + 0x40], r14 */
L_1803eb46c_0:;
L_1803eb46c_1:;
wr(s->u,45,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803eb46c_2:;
wr(s->u,73,8,rd(s->r,176,8));
L_1803eb46c_3:;
mw((uint64_t)rd(s->u,45,8),8,rd(s->u,73,8));
L_1803eb46c_4:;
/* 1803eb471: mov qword ptr [rsp], r15 */
L_1803eb471_0:;
L_1803eb471_1:;
wr(s->u,73,8,rd(s->r,184,8));
L_1803eb471_2:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,73,8));
L_1803eb471_3:;
/* 1803eb475: lea r15d, [rbx - 3] */
L_1803eb475_0:;
L_1803eb475_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffffd))));
L_1803eb475_2:;
wr(s->r,184,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803eb475_3:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803eb475_4:;
/* 1803eb479: mov r12, rbp */
L_1803eb479_0:;
L_1803eb479_1:;
wr(s->r,160,8,rd(s->r,40,8));
L_1803eb479_2:;
/* 1803eb47c: lea eax, [r15 - 2] */
L_1803eb47c_0:;
L_1803eb47c_1:;
wr(s->u,5,8,(rd(s->r,184,8)+((U)UINT64_C(0xfffffffffffffffe))));
L_1803eb47c_2:;
wr(s->r,0,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803eb47c_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb47c_4:;
/* 1803eb480: add r8, 0x14 */
L_1803eb480_0:;
L_1803eb480_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x14)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803eb480_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x14)),8,0));
L_1803eb480_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x14))));
L_1803eb480_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb480_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803eb480_6:;
wr(s->u,85,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803eb480_7:;
wr(s->u,93,1,pop(rd(s->u,85,8),8));
L_1803eb480_8:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803eb480_9:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803eb480_10:;
/* 1803eb484: sub r12, rcx */
L_1803eb484_0:;
L_1803eb484_1:;
wr(s->r,512,1,(rd(s->r,160,8)<rd(s->r,8,8)));
L_1803eb484_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),rd(s->r,8,8),8,1));
L_1803eb484_3:;
wr(s->r,160,8,(rd(s->r,160,8)-rd(s->r,8,8)));
L_1803eb484_4:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb484_5:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803eb484_6:;
wr(s->u,85,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803eb484_7:;
wr(s->u,93,1,pop(rd(s->u,85,8),8));
L_1803eb484_8:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803eb484_9:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803eb484_10:;
/* 1803eb487: shr eax, 2 */
L_1803eb487_0:;
L_1803eb487_1:;
wr(s->u,138,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803eb487_2:;
wr(s->u,142,4,rd(s->r,0,4));
L_1803eb487_3:;
wr(s->r,0,4,((rd(s->u,138,4)>=32)?0:(rd(s->r,0,4)>>rd(s->u,138,4))));
L_1803eb487_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb487_5:;
wr(s->u,114,1,(rd(s->u,138,4)==((U)UINT64_C(0x0))));
L_1803eb487_6:;
wr(s->u,115,4,(rd(s->u,138,4)-((U)UINT64_C(0x1))));
L_1803eb487_7:;
wr(s->u,119,4,((rd(s->u,115,4)>=32)?0:(rd(s->u,142,4)>>rd(s->u,115,4))));
L_1803eb487_8:;
wr(s->u,123,4,(rd(s->u,119,4)&((U)UINT64_C(0x1))));
L_1803eb487_9:;
wr(s->u,127,1,(rd(s->u,123,4)!=((U)UINT64_C(0x0))));
L_1803eb487_10:;
wr(s->u,0,1,rd(s->u,114,1));
L_1803eb487_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803eb487_12:;
wr(s->u,2,1,(!rd(s->u,114,1)));
L_1803eb487_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803eb487_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,127,1)));
L_1803eb487_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803eb487_16:;
wr(s->u,128,1,(rd(s->u,138,4)==((U)UINT64_C(0x1))));
L_1803eb487_17:;
wr(s->u,129,1,(sx(rd(s->u,142,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb487_18:;
wr(s->u,0,1,rd(s->u,128,1));
L_1803eb487_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803eb487_20:;
wr(s->u,2,1,(!rd(s->u,128,1)));
L_1803eb487_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803eb487_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,129,1)));
L_1803eb487_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803eb487_24:;
wr(s->u,95,1,(rd(s->u,138,4)!=((U)UINT64_C(0x0))));
L_1803eb487_25:;
wr(s->u,96,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb487_26:;
wr(s->u,97,1,(!rd(s->u,95,1)));
L_1803eb487_27:;
wr(s->u,98,1,(rd(s->u,97,1)&rd(s->r,519,1)));
L_1803eb487_28:;
wr(s->u,99,1,(rd(s->u,95,1)&rd(s->u,96,1)));
L_1803eb487_29:;
wr(s->r,519,1,(rd(s->u,98,1)|rd(s->u,99,1)));
L_1803eb487_30:;
wr(s->u,100,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803eb487_31:;
wr(s->u,101,1,(!rd(s->u,95,1)));
L_1803eb487_32:;
wr(s->u,102,1,(rd(s->u,101,1)&rd(s->r,518,1)));
L_1803eb487_33:;
wr(s->u,103,1,(rd(s->u,95,1)&rd(s->u,100,1)));
L_1803eb487_34:;
wr(s->r,518,1,(rd(s->u,102,1)|rd(s->u,103,1)));
L_1803eb487_35:;
wr(s->u,104,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803eb487_36:;
wr(s->u,108,1,pop(rd(s->u,104,4),4));
L_1803eb487_37:;
wr(s->u,109,1,(rd(s->u,108,1)&((U)UINT64_C(0x1))));
L_1803eb487_38:;
wr(s->u,110,1,(rd(s->u,109,1)==((U)UINT64_C(0x0))));
L_1803eb487_39:;
wr(s->u,111,1,(!rd(s->u,95,1)));
L_1803eb487_40:;
wr(s->u,112,1,(rd(s->u,111,1)&rd(s->r,514,1)));
L_1803eb487_41:;
wr(s->u,113,1,(rd(s->u,95,1)&rd(s->u,110,1)));
L_1803eb487_42:;
wr(s->r,514,1,(rd(s->u,112,1)|rd(s->u,113,1)));
L_1803eb487_43:;
/* 1803eb48a: lea rsi, [rdx + 8] */
L_1803eb48a_0:;
L_1803eb48a_1:;
wr(s->u,5,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803eb48a_2:;
wr(s->r,48,8,rd(s->u,5,8));
L_1803eb48a_3:;
/* 1803eb48e: lea r13, [r11 + 0x20] */
L_1803eb48e_0:;
L_1803eb48e_1:;
wr(s->u,5,8,(rd(s->r,152,8)+((U)UINT64_C(0x20))));
L_1803eb48e_2:;
wr(s->r,168,8,rd(s->u,5,8));
L_1803eb48e_3:;
/* 1803eb492: inc eax */
L_1803eb492_0:;
L_1803eb492_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,0));
L_1803eb492_2:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x1))));
L_1803eb492_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb492_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb492_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803eb492_6:;
wr(s->u,85,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803eb492_7:;
wr(s->u,93,1,pop(rd(s->u,85,4),4));
L_1803eb492_8:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803eb492_9:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803eb492_10:;
/* 1803eb494: lea rdx, [rcx + 0xc] */
L_1803eb494_0:;
L_1803eb494_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803eb494_2:;
wr(s->r,16,8,rd(s->u,5,8));
L_1803eb494_3:;
/* 1803eb498: lea r14, [r11 + 0x10] */
L_1803eb498_0:;
L_1803eb498_1:;
wr(s->u,5,8,(rd(s->r,152,8)+((U)UINT64_C(0x10))));
L_1803eb498_2:;
wr(s->r,176,8,rd(s->u,5,8));
L_1803eb498_3:;
/* 1803eb49c: lea r9, [rax*4 + 1] */
L_1803eb49c_0:;
L_1803eb49c_1:;
wr(s->u,29,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803eb49c_2:;
wr(s->u,37,8,(((U)UINT64_C(0x1))+rd(s->u,29,8)));
L_1803eb49c_3:;
wr(s->r,136,8,rd(s->u,37,8));
L_1803eb49c_4:;
/* 1803eb4a4: nop word ptr [rax + rax] */
L_1803eb4a4_0:;
L_1803eb4a4_1:;
wr(s->u,53,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803eb4a4_2:;
wr(s->u,61,8,(rd(s->r,0,8)+rd(s->u,53,8)));
L_1803eb4a4_3:;
/* 1803eb4b0: lea eax, [r10 + r10] */
L_1803eb4b0_0:;
L_1803eb4b0_1:;
wr(s->u,13,8,(rd(s->r,144,8)*((U)UINT64_C(0x1))));
L_1803eb4b0_2:;
wr(s->u,21,8,(rd(s->r,144,8)+rd(s->u,13,8)));
L_1803eb4b0_3:;
wr(s->r,0,4,(rd(s->u,21,8) >> (((U)UINT64_C(0x0))*8)));
L_1803eb4b0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb4b0_5:;
/* 1803eb4b4: add r10d, 4 */
L_1803eb4b4_0:;
L_1803eb4b4_1:;
wr(s->r,512,1,(((rd(s->r,144,4)+((U)UINT64_C(0x4)))&(((U)1<<32)-1))<rd(s->r,144,4)));
L_1803eb4b4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x4)),4,0));
L_1803eb4b4_3:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x4))));
L_1803eb4b4_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803eb4b4_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb4b4_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803eb4b4_7:;
wr(s->u,85,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803eb4b4_8:;
wr(s->u,93,1,pop(rd(s->u,85,4),4));
L_1803eb4b4_9:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803eb4b4_10:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803eb4b4_11:;
/* 1803eb4b8: add rdx, 0x10 */
L_1803eb4b8_0:;
L_1803eb4b8_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803eb4b8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x10)),8,0));
L_1803eb4b8_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x10))));
L_1803eb4b8_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb4b8_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803eb4b8_6:;
wr(s->u,85,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803eb4b8_7:;
wr(s->u,93,1,pop(rd(s->u,85,8),8));
L_1803eb4b8_8:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803eb4b8_9:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803eb4b8_10:;
/* 1803eb4bc: movsxd rcx, eax */
L_1803eb4bc_0:;
L_1803eb4bc_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803eb4bc_2:;
/* 1803eb4bf: add rsi, 0x10 */
L_1803eb4bf_0:;
L_1803eb4bf_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803eb4bf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x10)),8,0));
L_1803eb4bf_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x10))));
L_1803eb4bf_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb4bf_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803eb4bf_6:;
wr(s->u,85,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803eb4bf_7:;
wr(s->u,93,1,pop(rd(s->u,85,8),8));
L_1803eb4bf_8:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803eb4bf_9:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803eb4bf_10:;
/* 1803eb4c3: add r8, 0x20 */
L_1803eb4c3_0:;
L_1803eb4c3_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803eb4c3_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x20)),8,0));
L_1803eb4c3_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x20))));
L_1803eb4c3_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb4c3_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803eb4c3_6:;
wr(s->u,85,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803eb4c3_7:;
wr(s->u,93,1,pop(rd(s->u,85,8),8));
L_1803eb4c3_8:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803eb4c3_9:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803eb4c3_10:;
/* 1803eb4c7: mov eax, dword ptr [r11 + rcx*4] */
L_1803eb4c7_0:;
L_1803eb4c7_1:;
wr(s->u,13,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803eb4c7_2:;
wr(s->u,21,8,(rd(s->r,152,8)+rd(s->u,13,8)));
L_1803eb4c7_3:;
wr(s->u,81,4,mr((uint64_t)rd(s->u,21,8),4));
L_1803eb4c7_4:;
wr(s->r,0,4,rd(s->u,81,4));
L_1803eb4c7_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb4c7_6:;
/* 1803eb4cb: add r13, 0x20 */
L_1803eb4cb_0:;
L_1803eb4cb_1:;
wr(s->r,512,1,(((rd(s->r,168,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,168,8)));
L_1803eb4cb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,8),((U)UINT64_C(0x20)),8,0));
L_1803eb4cb_3:;
wr(s->r,168,8,(rd(s->r,168,8)+((U)UINT64_C(0x20))));
L_1803eb4cb_4:;
wr(s->r,519,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb4cb_5:;
wr(s->r,518,1,(rd(s->r,168,8)==((U)UINT64_C(0x0))));
L_1803eb4cb_6:;
wr(s->u,85,8,(rd(s->r,168,8)&((U)UINT64_C(0xff))));
L_1803eb4cb_7:;
wr(s->u,93,1,pop(rd(s->u,85,8),8));
L_1803eb4cb_8:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803eb4cb_9:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803eb4cb_10:;
/* 1803eb4cf: add r14, 0x20 */
L_1803eb4cf_0:;
L_1803eb4cf_1:;
wr(s->r,512,1,(((rd(s->r,176,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,176,8)));
L_1803eb4cf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,176,8),((U)UINT64_C(0x20)),8,0));
L_1803eb4cf_3:;
wr(s->r,176,8,(rd(s->r,176,8)+((U)UINT64_C(0x20))));
L_1803eb4cf_4:;
wr(s->r,519,1,(sx(rd(s->r,176,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb4cf_5:;
wr(s->r,518,1,(rd(s->r,176,8)==((U)UINT64_C(0x0))));
L_1803eb4cf_6:;
wr(s->u,85,8,(rd(s->r,176,8)&((U)UINT64_C(0xff))));
L_1803eb4cf_7:;
wr(s->u,93,1,pop(rd(s->u,85,8),8));
L_1803eb4cf_8:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803eb4cf_9:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803eb4cf_10:;
/* 1803eb4d3: cmp r10d, r15d */
L_1803eb4d3_0:;
L_1803eb4d3_1:;
wr(s->u,130,4,rd(s->r,184,4));
L_1803eb4d3_2:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->u,130,4)));
L_1803eb4d3_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->u,130,4),4,1));
L_1803eb4d3_4:;
wr(s->u,134,4,(rd(s->r,144,4)-rd(s->u,130,4)));
L_1803eb4d3_5:;
wr(s->r,519,1,(sx(rd(s->u,134,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb4d3_6:;
wr(s->r,518,1,(rd(s->u,134,4)==((U)UINT64_C(0x0))));
L_1803eb4d3_7:;
wr(s->u,85,4,(rd(s->u,134,4)&((U)UINT64_C(0xff))));
L_1803eb4d3_8:;
wr(s->u,93,1,pop(rd(s->u,85,4),4));
L_1803eb4d3_9:;
wr(s->u,94,1,(rd(s->u,93,1)&((U)UINT64_C(0x1))));
L_1803eb4d3_10:;
wr(s->r,514,1,(rd(s->u,94,1)==((U)UINT64_C(0x0))));
L_1803eb4d3_11:;
/* 1803eb4d6: mov dword ptr [rdx - 0x18], eax */
L_1803eb4d6_0:;
L_1803eb4d6_1:;
wr(s->u,5,8,(rd(s->r,16,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1803eb4d6_2:;
wr(s->u,69,4,rd(s->r,0,4));
L_1803eb4d6_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,69,4));
L_1803eb4d6_4:;
/* 1803eb4d9: mov eax, dword ptr [r8 - 0x28] */
L_1803eb4d9_0:;
L_1803eb4d9_1:;
wr(s->u,5,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffd8))));
L_1803eb4d9_2:;
wr(s->u,81,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803eb4d9_3:;
wr(s->r,0,4,rd(s->u,81,4));
L_1803eb4d9_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb4d9_5:;
/* 1803eb4dd: mov dword ptr [rsi - 0x18], eax */
L_1803eb4dd_0:;
L_1803eb4dd_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1803eb4dd_2:;
wr(s->u,69,4,rd(s->r,0,4));
L_1803eb4dd_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,69,4));
L_1803eb4dd_4:;
/* 1803eb4e0: mov eax, dword ptr [r14 - 0x20] */
L_1803eb4e0_0:;
L_1803eb4e0_1:;
wr(s->u,5,8,(rd(s->r,176,8)+((U)UINT64_C(0xffffffffffffffe0))));
L_1803eb4e0_2:;
wr(s->u,81,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803eb4e0_3:;
wr(s->r,0,4,rd(s->u,81,4));
L_1803eb4e0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb4e0_5:;
/* 1803eb4e4: mov dword ptr [rdx - 0x14], eax */
L_1803eb4e4_0:;
L_1803eb4e4_1:;
wr(s->u,5,8,(rd(s->r,16,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803eb4e4_2:;
wr(s->u,69,4,rd(s->r,0,4));
L_1803eb4e4_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,69,4));
L_1803eb4e4_4:;
return UINT64_C(0x1803eb4e7);
}
uint64_t b_1803eb4b0(CPU*s){
/* 1803eb4b0: lea eax, [r10 + r10] */
L_1803eb4b0_0:;
L_1803eb4b0_1:;
wr(s->u,8,8,(rd(s->r,144,8)*((U)UINT64_C(0x1))));
L_1803eb4b0_2:;
wr(s->u,16,8,(rd(s->r,144,8)+rd(s->u,8,8)));
L_1803eb4b0_3:;
wr(s->r,0,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803eb4b0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb4b0_5:;
/* 1803eb4b4: add r10d, 4 */
L_1803eb4b4_0:;
L_1803eb4b4_1:;
wr(s->r,512,1,(((rd(s->r,144,4)+((U)UINT64_C(0x4)))&(((U)1<<32)-1))<rd(s->r,144,4)));
L_1803eb4b4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x4)),4,0));
L_1803eb4b4_3:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x4))));
L_1803eb4b4_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803eb4b4_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb4b4_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803eb4b4_7:;
wr(s->u,57,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803eb4b4_8:;
wr(s->u,65,1,pop(rd(s->u,57,4),4));
L_1803eb4b4_9:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803eb4b4_10:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803eb4b4_11:;
/* 1803eb4b8: add rdx, 0x10 */
L_1803eb4b8_0:;
L_1803eb4b8_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803eb4b8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x10)),8,0));
L_1803eb4b8_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x10))));
L_1803eb4b8_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb4b8_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803eb4b8_6:;
wr(s->u,57,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803eb4b8_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803eb4b8_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803eb4b8_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803eb4b8_10:;
/* 1803eb4bc: movsxd rcx, eax */
L_1803eb4bc_0:;
L_1803eb4bc_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803eb4bc_2:;
/* 1803eb4bf: add rsi, 0x10 */
L_1803eb4bf_0:;
L_1803eb4bf_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803eb4bf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x10)),8,0));
L_1803eb4bf_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x10))));
L_1803eb4bf_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb4bf_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803eb4bf_6:;
wr(s->u,57,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803eb4bf_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803eb4bf_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803eb4bf_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803eb4bf_10:;
/* 1803eb4c3: add r8, 0x20 */
L_1803eb4c3_0:;
L_1803eb4c3_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803eb4c3_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x20)),8,0));
L_1803eb4c3_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x20))));
L_1803eb4c3_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb4c3_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803eb4c3_6:;
wr(s->u,57,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803eb4c3_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803eb4c3_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803eb4c3_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803eb4c3_10:;
/* 1803eb4c7: mov eax, dword ptr [r11 + rcx*4] */
L_1803eb4c7_0:;
L_1803eb4c7_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803eb4c7_2:;
wr(s->u,16,8,(rd(s->r,152,8)+rd(s->u,8,8)));
L_1803eb4c7_3:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803eb4c7_4:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803eb4c7_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb4c7_6:;
/* 1803eb4cb: add r13, 0x20 */
L_1803eb4cb_0:;
L_1803eb4cb_1:;
wr(s->r,512,1,(((rd(s->r,168,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,168,8)));
L_1803eb4cb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,8),((U)UINT64_C(0x20)),8,0));
L_1803eb4cb_3:;
wr(s->r,168,8,(rd(s->r,168,8)+((U)UINT64_C(0x20))));
L_1803eb4cb_4:;
wr(s->r,519,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb4cb_5:;
wr(s->r,518,1,(rd(s->r,168,8)==((U)UINT64_C(0x0))));
L_1803eb4cb_6:;
wr(s->u,57,8,(rd(s->r,168,8)&((U)UINT64_C(0xff))));
L_1803eb4cb_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803eb4cb_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803eb4cb_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803eb4cb_10:;
/* 1803eb4cf: add r14, 0x20 */
L_1803eb4cf_0:;
L_1803eb4cf_1:;
wr(s->r,512,1,(((rd(s->r,176,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,176,8)));
L_1803eb4cf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,176,8),((U)UINT64_C(0x20)),8,0));
L_1803eb4cf_3:;
wr(s->r,176,8,(rd(s->r,176,8)+((U)UINT64_C(0x20))));
L_1803eb4cf_4:;
wr(s->r,519,1,(sx(rd(s->r,176,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb4cf_5:;
wr(s->r,518,1,(rd(s->r,176,8)==((U)UINT64_C(0x0))));
L_1803eb4cf_6:;
wr(s->u,57,8,(rd(s->r,176,8)&((U)UINT64_C(0xff))));
L_1803eb4cf_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803eb4cf_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803eb4cf_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803eb4cf_10:;
/* 1803eb4d3: cmp r10d, r15d */
L_1803eb4d3_0:;
L_1803eb4d3_1:;
wr(s->u,67,4,rd(s->r,184,4));
L_1803eb4d3_2:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->u,67,4)));
L_1803eb4d3_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->u,67,4),4,1));
L_1803eb4d3_4:;
wr(s->u,71,4,(rd(s->r,144,4)-rd(s->u,67,4)));
L_1803eb4d3_5:;
wr(s->r,519,1,(sx(rd(s->u,71,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb4d3_6:;
wr(s->r,518,1,(rd(s->u,71,4)==((U)UINT64_C(0x0))));
L_1803eb4d3_7:;
wr(s->u,57,4,(rd(s->u,71,4)&((U)UINT64_C(0xff))));
L_1803eb4d3_8:;
wr(s->u,65,1,pop(rd(s->u,57,4),4));
L_1803eb4d3_9:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803eb4d3_10:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803eb4d3_11:;
/* 1803eb4d6: mov dword ptr [rdx - 0x18], eax */
L_1803eb4d6_0:;
L_1803eb4d6_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1803eb4d6_2:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803eb4d6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803eb4d6_4:;
/* 1803eb4d9: mov eax, dword ptr [r8 - 0x28] */
L_1803eb4d9_0:;
L_1803eb4d9_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffd8))));
L_1803eb4d9_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb4d9_3:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803eb4d9_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb4d9_5:;
/* 1803eb4dd: mov dword ptr [rsi - 0x18], eax */
L_1803eb4dd_0:;
L_1803eb4dd_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1803eb4dd_2:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803eb4dd_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803eb4dd_4:;
/* 1803eb4e0: mov eax, dword ptr [r14 - 0x20] */
L_1803eb4e0_0:;
L_1803eb4e0_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xffffffffffffffe0))));
L_1803eb4e0_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb4e0_3:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803eb4e0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb4e0_5:;
/* 1803eb4e4: mov dword ptr [rdx - 0x14], eax */
L_1803eb4e4_0:;
L_1803eb4e4_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803eb4e4_2:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803eb4e4_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803eb4e4_4:;
/* 1803eb4e7: mov eax, dword ptr [r8 - 0x20] */
L_1803eb4e7_0:;
L_1803eb4e7_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffe0))));
L_1803eb4e7_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb4e7_3:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803eb4e7_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb4e7_5:;
/* 1803eb4eb: mov dword ptr [rsi - 0x14], eax */
L_1803eb4eb_0:;
L_1803eb4eb_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803eb4eb_2:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803eb4eb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803eb4eb_4:;
/* 1803eb4ee: mov eax, dword ptr [r13 - 0x28] */
L_1803eb4ee_0:;
L_1803eb4ee_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0xffffffffffffffd8))));
L_1803eb4ee_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb4ee_3:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803eb4ee_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb4ee_5:;
/* 1803eb4f2: mov dword ptr [rdx - 0x10], eax */
L_1803eb4f2_0:;
L_1803eb4f2_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb4f2_2:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803eb4f2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803eb4f2_4:;
/* 1803eb4f5: mov eax, dword ptr [r8 - 0x18] */
L_1803eb4f5_0:;
L_1803eb4f5_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1803eb4f5_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb4f5_3:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803eb4f5_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb4f5_5:;
/* 1803eb4f9: mov dword ptr [rsi - 0x10], eax */
L_1803eb4f9_0:;
L_1803eb4f9_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb4f9_2:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803eb4f9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803eb4f9_4:;
/* 1803eb4fc: mov eax, dword ptr [r13 - 0x20] */
L_1803eb4fc_0:;
L_1803eb4fc_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0xffffffffffffffe0))));
L_1803eb4fc_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb4fc_3:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803eb4fc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb4fc_5:;
/* 1803eb500: mov dword ptr [rdx - 0xc], eax */
L_1803eb500_0:;
L_1803eb500_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803eb500_2:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803eb500_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803eb500_4:;
/* 1803eb503: mov eax, dword ptr [r8 - 0x10] */
L_1803eb503_0:;
L_1803eb503_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb503_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb503_3:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803eb503_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb503_5:;
/* 1803eb507: mov dword ptr [r12 + rdx - 0x10], eax */
L_1803eb507_0:;
L_1803eb507_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,160,8)));
L_1803eb507_2:;
wr(s->u,32,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803eb507_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803eb507_4:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803eb507_5:;
mw((uint64_t)rd(s->u,40,8),4,rd(s->u,48,4));
L_1803eb507_6:;
/* 1803eb50c: jl 0x1803eb4b0 */
L_1803eb50c_0:;
L_1803eb50c_1:;
wr(s->u,56,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803eb50c_2:;
if(rd(s->u,56,1)){goto L_1803eb4b0_0;}
L_1803eb50c_3:;
return UINT64_C(0x1803eb50e);
}
uint64_t b_1803eb4e7(CPU*s){
/* 1803eb4e7: mov eax, dword ptr [r8 - 0x20] */
L_1803eb4e7_0:;
L_1803eb4e7_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffe0))));
L_1803eb4e7_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb4e7_3:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803eb4e7_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb4e7_5:;
/* 1803eb4eb: mov dword ptr [rsi - 0x14], eax */
L_1803eb4eb_0:;
L_1803eb4eb_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xffffffffffffffec))));
L_1803eb4eb_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803eb4eb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803eb4eb_4:;
/* 1803eb4ee: mov eax, dword ptr [r13 - 0x28] */
L_1803eb4ee_0:;
L_1803eb4ee_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0xffffffffffffffd8))));
L_1803eb4ee_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb4ee_3:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803eb4ee_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb4ee_5:;
/* 1803eb4f2: mov dword ptr [rdx - 0x10], eax */
L_1803eb4f2_0:;
L_1803eb4f2_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb4f2_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803eb4f2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803eb4f2_4:;
/* 1803eb4f5: mov eax, dword ptr [r8 - 0x18] */
L_1803eb4f5_0:;
L_1803eb4f5_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1803eb4f5_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb4f5_3:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803eb4f5_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb4f5_5:;
/* 1803eb4f9: mov dword ptr [rsi - 0x10], eax */
L_1803eb4f9_0:;
L_1803eb4f9_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb4f9_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803eb4f9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803eb4f9_4:;
/* 1803eb4fc: mov eax, dword ptr [r13 - 0x20] */
L_1803eb4fc_0:;
L_1803eb4fc_1:;
wr(s->u,0,8,(rd(s->r,168,8)+((U)UINT64_C(0xffffffffffffffe0))));
L_1803eb4fc_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb4fc_3:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803eb4fc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb4fc_5:;
/* 1803eb500: mov dword ptr [rdx - 0xc], eax */
L_1803eb500_0:;
L_1803eb500_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff4))));
L_1803eb500_2:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803eb500_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803eb500_4:;
/* 1803eb503: mov eax, dword ptr [r8 - 0x10] */
L_1803eb503_0:;
L_1803eb503_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb503_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb503_3:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803eb503_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb503_5:;
/* 1803eb507: mov dword ptr [r12 + rdx - 0x10], eax */
L_1803eb507_0:;
L_1803eb507_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,160,8)));
L_1803eb507_2:;
wr(s->u,16,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803eb507_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803eb507_4:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803eb507_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803eb507_6:;
/* 1803eb50c: jl 0x1803eb4b0 */
L_1803eb50c_0:;
L_1803eb50c_1:;
wr(s->u,40,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803eb50c_2:;
if(rd(s->u,40,1)){return UINT64_C(0x1803eb4b0);}
L_1803eb50c_3:;
return UINT64_C(0x1803eb50e);
}
uint64_t b_1803eb50e(CPU*s){
/* 1803eb50e: mov esi, dword ptr [rsp + 0x48] */
L_1803eb50e_0:;
L_1803eb50e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803eb50e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb50e_3:;
wr(s->r,48,4,rd(s->u,8,4));
L_1803eb50e_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803eb50e_5:;
/* 1803eb512: mov r15, qword ptr [rsp] */
L_1803eb512_0:;
L_1803eb512_1:;
wr(s->u,12,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb512_2:;
wr(s->r,184,8,rd(s->u,12,8));
L_1803eb512_3:;
/* 1803eb516: mov r14, qword ptr [rsp + 0x40] */
L_1803eb516_0:;
L_1803eb516_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803eb516_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb516_3:;
wr(s->r,176,8,rd(s->u,12,8));
L_1803eb516_4:;
/* 1803eb51b: mov r13, qword ptr [rsp + 0x38] */
L_1803eb51b_0:;
L_1803eb51b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803eb51b_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb51b_3:;
wr(s->r,168,8,rd(s->u,12,8));
L_1803eb51b_4:;
/* 1803eb520: mov r12, qword ptr [rsp + 0x30] */
L_1803eb520_0:;
L_1803eb520_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803eb520_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb520_3:;
wr(s->r,160,8,rd(s->u,12,8));
L_1803eb520_4:;
/* 1803eb525: cmp r10d, ebx */
L_1803eb525_0:;
L_1803eb525_1:;
wr(s->u,27,4,rd(s->r,24,4));
L_1803eb525_2:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->u,27,4)));
L_1803eb525_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->u,27,4),4,1));
L_1803eb525_4:;
wr(s->u,31,4,(rd(s->r,144,4)-rd(s->u,27,4)));
L_1803eb525_5:;
wr(s->r,519,1,(sx(rd(s->u,31,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb525_6:;
wr(s->r,518,1,(rd(s->u,31,4)==((U)UINT64_C(0x0))));
L_1803eb525_7:;
wr(s->u,21,4,(rd(s->u,31,4)&((U)UINT64_C(0xff))));
L_1803eb525_8:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803eb525_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803eb525_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803eb525_11:;
/* 1803eb528: jge 0x1803eb562 */
L_1803eb528_0:;
L_1803eb528_1:;
wr(s->u,20,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803eb528_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803eb562);}
L_1803eb528_3:;
return UINT64_C(0x1803eb52a);
}
uint64_t b_1803eb525(CPU*s){
/* 1803eb525: cmp r10d, ebx */
L_1803eb525_0:;
L_1803eb525_1:;
wr(s->u,7,4,rd(s->r,24,4));
L_1803eb525_2:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->u,7,4)));
L_1803eb525_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->u,7,4),4,1));
L_1803eb525_4:;
wr(s->u,11,4,(rd(s->r,144,4)-rd(s->u,7,4)));
L_1803eb525_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb525_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803eb525_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803eb525_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803eb525_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803eb525_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803eb525_11:;
/* 1803eb528: jge 0x1803eb562 */
L_1803eb528_0:;
L_1803eb528_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803eb528_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803eb562);}
L_1803eb528_3:;
return UINT64_C(0x1803eb52a);
}
uint64_t b_1803eb52a(CPU*s){
/* 1803eb52a: lea rdx, [rdi + r9*4] */
L_1803eb52a_0:;
L_1803eb52a_1:;
wr(s->u,8,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803eb52a_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803eb52a_3:;
wr(s->r,16,8,rd(s->u,16,8));
L_1803eb52a_4:;
/* 1803eb52e: lea r8, [rbp + r9*4 - 4] */
L_1803eb52e_0:;
L_1803eb52e_1:;
wr(s->u,24,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,40,8)));
L_1803eb52e_2:;
wr(s->u,32,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803eb52e_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803eb52e_4:;
wr(s->r,128,8,rd(s->u,40,8));
L_1803eb52e_5:;
/* 1803eb533: lea r9, [r11 + r9*8 + 4] */
L_1803eb533_0:;
L_1803eb533_1:;
wr(s->u,24,8,(((U)UINT64_C(0x4))+rd(s->r,152,8)));
L_1803eb533_2:;
wr(s->u,32,8,(rd(s->r,136,8)*((U)UINT64_C(0x8))));
L_1803eb533_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803eb533_4:;
wr(s->r,136,8,rd(s->u,40,8));
L_1803eb533_5:;
/* 1803eb538: lea eax, [r10 + r10] */
L_1803eb538_0:;
L_1803eb538_1:;
wr(s->u,8,8,(rd(s->r,144,8)*((U)UINT64_C(0x1))));
L_1803eb538_2:;
wr(s->u,16,8,(rd(s->r,144,8)+rd(s->u,8,8)));
L_1803eb538_3:;
wr(s->r,0,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803eb538_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb538_5:;
/* 1803eb53c: inc r10d */
L_1803eb53c_0:;
L_1803eb53c_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x1)),4,0));
L_1803eb53c_2:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x1))));
L_1803eb53c_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803eb53c_4:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb53c_5:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803eb53c_6:;
wr(s->u,57,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803eb53c_7:;
wr(s->u,65,1,pop(rd(s->u,57,4),4));
L_1803eb53c_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803eb53c_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803eb53c_10:;
/* 1803eb53f: add r8, 4 */
L_1803eb53f_0:;
L_1803eb53f_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803eb53f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x4)),8,0));
L_1803eb53f_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803eb53f_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb53f_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803eb53f_6:;
wr(s->u,57,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803eb53f_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803eb53f_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803eb53f_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803eb53f_10:;
/* 1803eb543: movsxd rcx, eax */
L_1803eb543_0:;
L_1803eb543_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803eb543_2:;
/* 1803eb546: add r9, 8 */
L_1803eb546_0:;
L_1803eb546_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803eb546_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803eb546_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803eb546_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb546_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803eb546_6:;
wr(s->u,57,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803eb546_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803eb546_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803eb546_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803eb546_10:;
/* 1803eb54a: add rdx, 4 */
L_1803eb54a_0:;
L_1803eb54a_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803eb54a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x4)),8,0));
L_1803eb54a_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803eb54a_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb54a_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803eb54a_6:;
wr(s->u,57,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803eb54a_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803eb54a_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803eb54a_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803eb54a_10:;
/* 1803eb54e: cmp r10d, ebx */
L_1803eb54e_0:;
L_1803eb54e_1:;
wr(s->u,67,4,rd(s->r,24,4));
L_1803eb54e_2:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->u,67,4)));
L_1803eb54e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->u,67,4),4,1));
L_1803eb54e_4:;
wr(s->u,71,4,(rd(s->r,144,4)-rd(s->u,67,4)));
L_1803eb54e_5:;
wr(s->r,519,1,(sx(rd(s->u,71,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb54e_6:;
wr(s->r,518,1,(rd(s->u,71,4)==((U)UINT64_C(0x0))));
L_1803eb54e_7:;
wr(s->u,57,4,(rd(s->u,71,4)&((U)UINT64_C(0xff))));
L_1803eb54e_8:;
wr(s->u,65,1,pop(rd(s->u,57,4),4));
L_1803eb54e_9:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803eb54e_10:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803eb54e_11:;
/* 1803eb551: mov eax, dword ptr [r11 + rcx*4] */
L_1803eb551_0:;
L_1803eb551_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803eb551_2:;
wr(s->u,16,8,(rd(s->r,152,8)+rd(s->u,8,8)));
L_1803eb551_3:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803eb551_4:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803eb551_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb551_6:;
/* 1803eb555: mov dword ptr [rdx - 4], eax */
L_1803eb555_0:;
L_1803eb555_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803eb555_2:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803eb555_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803eb555_4:;
/* 1803eb558: mov eax, dword ptr [r9 - 8] */
L_1803eb558_0:;
L_1803eb558_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803eb558_2:;
wr(s->u,52,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb558_3:;
wr(s->r,0,4,rd(s->u,52,4));
L_1803eb558_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb558_5:;
/* 1803eb55c: mov dword ptr [r8 - 4], eax */
L_1803eb55c_0:;
L_1803eb55c_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803eb55c_2:;
wr(s->u,48,4,rd(s->r,0,4));
L_1803eb55c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,48,4));
L_1803eb55c_4:;
/* 1803eb560: jl 0x1803eb538 */
L_1803eb560_0:;
L_1803eb560_1:;
wr(s->u,56,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803eb560_2:;
if(rd(s->u,56,1)){goto L_1803eb538_0;}
L_1803eb560_3:;
return UINT64_C(0x1803eb562);
}
uint64_t b_1803eb538(CPU*s){
/* 1803eb538: lea eax, [r10 + r10] */
L_1803eb538_0:;
L_1803eb538_1:;
wr(s->u,8,8,(rd(s->r,144,8)*((U)UINT64_C(0x1))));
L_1803eb538_2:;
wr(s->u,16,8,(rd(s->r,144,8)+rd(s->u,8,8)));
L_1803eb538_3:;
wr(s->r,0,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803eb538_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb538_5:;
/* 1803eb53c: inc r10d */
L_1803eb53c_0:;
L_1803eb53c_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x1)),4,0));
L_1803eb53c_2:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x1))));
L_1803eb53c_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803eb53c_4:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb53c_5:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803eb53c_6:;
wr(s->u,33,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803eb53c_7:;
wr(s->u,41,1,pop(rd(s->u,33,4),4));
L_1803eb53c_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803eb53c_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803eb53c_10:;
/* 1803eb53f: add r8, 4 */
L_1803eb53f_0:;
L_1803eb53f_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803eb53f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x4)),8,0));
L_1803eb53f_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803eb53f_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb53f_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803eb53f_6:;
wr(s->u,33,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803eb53f_7:;
wr(s->u,41,1,pop(rd(s->u,33,8),8));
L_1803eb53f_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803eb53f_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803eb53f_10:;
/* 1803eb543: movsxd rcx, eax */
L_1803eb543_0:;
L_1803eb543_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803eb543_2:;
/* 1803eb546: add r9, 8 */
L_1803eb546_0:;
L_1803eb546_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803eb546_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803eb546_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803eb546_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb546_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803eb546_6:;
wr(s->u,33,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803eb546_7:;
wr(s->u,41,1,pop(rd(s->u,33,8),8));
L_1803eb546_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803eb546_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803eb546_10:;
/* 1803eb54a: add rdx, 4 */
L_1803eb54a_0:;
L_1803eb54a_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803eb54a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x4)),8,0));
L_1803eb54a_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803eb54a_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb54a_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803eb54a_6:;
wr(s->u,33,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803eb54a_7:;
wr(s->u,41,1,pop(rd(s->u,33,8),8));
L_1803eb54a_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803eb54a_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803eb54a_10:;
/* 1803eb54e: cmp r10d, ebx */
L_1803eb54e_0:;
L_1803eb54e_1:;
wr(s->u,43,4,rd(s->r,24,4));
L_1803eb54e_2:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->u,43,4)));
L_1803eb54e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->u,43,4),4,1));
L_1803eb54e_4:;
wr(s->u,47,4,(rd(s->r,144,4)-rd(s->u,43,4)));
L_1803eb54e_5:;
wr(s->r,519,1,(sx(rd(s->u,47,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb54e_6:;
wr(s->r,518,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803eb54e_7:;
wr(s->u,33,4,(rd(s->u,47,4)&((U)UINT64_C(0xff))));
L_1803eb54e_8:;
wr(s->u,41,1,pop(rd(s->u,33,4),4));
L_1803eb54e_9:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803eb54e_10:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803eb54e_11:;
/* 1803eb551: mov eax, dword ptr [r11 + rcx*4] */
L_1803eb551_0:;
L_1803eb551_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803eb551_2:;
wr(s->u,16,8,(rd(s->r,152,8)+rd(s->u,8,8)));
L_1803eb551_3:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803eb551_4:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803eb551_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb551_6:;
/* 1803eb555: mov dword ptr [rdx - 4], eax */
L_1803eb555_0:;
L_1803eb555_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803eb555_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803eb555_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803eb555_4:;
/* 1803eb558: mov eax, dword ptr [r9 - 8] */
L_1803eb558_0:;
L_1803eb558_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803eb558_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb558_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803eb558_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb558_5:;
/* 1803eb55c: mov dword ptr [r8 - 4], eax */
L_1803eb55c_0:;
L_1803eb55c_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffffc))));
L_1803eb55c_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803eb55c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803eb55c_4:;
/* 1803eb560: jl 0x1803eb538 */
L_1803eb560_0:;
L_1803eb560_1:;
wr(s->u,32,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803eb560_2:;
if(rd(s->u,32,1)){goto L_1803eb538_0;}
L_1803eb560_3:;
return UINT64_C(0x1803eb562);
}
uint64_t b_1803eb562(CPU*s){
/* 1803eb562: mov eax, dword ptr [r11] */
L_1803eb562_0:;
L_1803eb562_1:;
wr(s->u,28,4,mr((uint64_t)rd(s->r,152,8),4));
L_1803eb562_2:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803eb562_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb562_4:;
/* 1803eb565: movsxd rcx, esi */
L_1803eb565_0:;
L_1803eb565_1:;
wr(s->r,8,8,(U)sx(rd(s->r,48,4),4));
L_1803eb565_2:;
/* 1803eb568: mov dword ptr [rdi], eax */
L_1803eb568_0:;
L_1803eb568_1:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803eb568_2:;
mw((uint64_t)rd(s->r,56,8),4,rd(s->u,24,4));
L_1803eb568_3:;
/* 1803eb56a: mov eax, dword ptr [r11 + 4] */
L_1803eb56a_0:;
L_1803eb56a_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x4))));
L_1803eb56a_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb56a_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803eb56a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb56a_5:;
/* 1803eb56e: sar rcx, 1 */
L_1803eb56e_0:;
L_1803eb56e_1:;
wr(s->u,50,8,(rd(s->r,8,8)&((U)UINT64_C(0x1))));
L_1803eb56e_2:;
wr(s->r,512,1,(rd(s->u,50,8)!=((U)UINT64_C(0x0))));
L_1803eb56e_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eb56e_4:;
wr(s->r,8,8,((((U)UINT64_C(0x1))>=64)?(sx(rd(s->r,8,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,8,8),8)>>((U)UINT64_C(0x1)))));
L_1803eb56e_5:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb56e_6:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803eb56e_7:;
wr(s->u,32,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803eb56e_8:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803eb56e_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803eb56e_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803eb56e_11:;
/* 1803eb571: mov dword ptr [rdi + rcx*4], eax */
L_1803eb571_0:;
L_1803eb571_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803eb571_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803eb571_3:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803eb571_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803eb571_5:;
/* 1803eb574: add rsp, 8 */
L_1803eb574_0:;
L_1803eb574_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb574_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x8)),8,0));
L_1803eb574_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb574_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb574_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb574_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb574_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803eb574_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803eb574_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803eb574_10:;
/* 1803eb578: pop rdi */
L_1803eb578_0:;
L_1803eb578_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803eb578_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb578_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb578_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803eb578_5:;
/* 1803eb579: pop rsi */
L_1803eb579_0:;
L_1803eb579_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803eb579_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb579_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb579_4:;
wr(s->r,48,8,rd(s->u,42,8));
L_1803eb579_5:;
/* 1803eb57a: pop rbp */
L_1803eb57a_0:;
L_1803eb57a_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803eb57a_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb57a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb57a_4:;
wr(s->r,40,8,rd(s->u,42,8));
L_1803eb57a_5:;
/* 1803eb57b: pop rbx */
L_1803eb57b_0:;
L_1803eb57b_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803eb57b_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb57b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb57b_4:;
wr(s->r,24,8,rd(s->u,42,8));
L_1803eb57b_5:;
/* 1803eb57c: ret  */
L_1803eb57c_0:;
L_1803eb57c_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb57c_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb57c_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb57c_4:;
return UINT64_C(0x1803eb57d);
}
uint64_t b_1803eb580(CPU*s){
/* 1803eb580: add r8d, r8d */
L_1803eb580_0:;
L_1803eb580_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+rd(s->r,128,4))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803eb580_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->r,128,4),4,0));
L_1803eb580_3:;
wr(s->r,128,4,(rd(s->r,128,4)+rd(s->r,128,4)));
L_1803eb580_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803eb580_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb580_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803eb580_7:;
wr(s->u,0,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803eb580_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803eb580_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803eb580_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803eb580_11:;
/* 1803eb583: jmp qword ptr [rip + 0x632bb6] */
L_1803eb583_0:;
L_1803eb583_1:;
return (uint64_t)mr(UINT64_C(0x180a1e140),8);
L_1803eb583_2:;
return UINT64_C(0x1803eb58a);
}
uint64_t b_1803eb590(CPU*s){
/* 1803eb590: mov rax, rdx */
L_1803eb590_0:;
L_1803eb590_1:;
wr(s->r,0,8,rd(s->r,16,8));
L_1803eb590_2:;
/* 1803eb593: mov rdx, rcx */
L_1803eb593_0:;
L_1803eb593_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1803eb593_2:;
/* 1803eb596: add r8d, r8d */
L_1803eb596_0:;
L_1803eb596_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+rd(s->r,128,4))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803eb596_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->r,128,4),4,0));
L_1803eb596_3:;
wr(s->r,128,4,(rd(s->r,128,4)+rd(s->r,128,4)));
L_1803eb596_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803eb596_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb596_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803eb596_7:;
wr(s->u,0,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803eb596_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803eb596_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803eb596_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803eb596_11:;
/* 1803eb599: mov rcx, rax */
L_1803eb599_0:;
L_1803eb599_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803eb599_2:;
/* 1803eb59c: jmp 0x1803fd480 */
L_1803eb59c_0:;
L_1803eb59c_1:;
return UINT64_C(0x1803fd480);
L_1803eb59c_2:;
return UINT64_C(0x1803eb5a1);
}
uint64_t b_1803eb5b0(CPU*s){
/* 1803eb5b0: ret 0 */
L_1803eb5b0_0:;
L_1803eb5b0_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb5b0_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb5b0_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x0))));
L_1803eb5b0_4:;
return (uint64_t)rd(s->r,648,8);
L_1803eb5b0_5:;
return UINT64_C(0x1803eb5b3);
}
uint64_t b_1803eb5c0(CPU*s){
/* 1803eb5c0: mov qword ptr [rsp + 8], rbx */
L_1803eb5c0_0:;
L_1803eb5c0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803eb5c0_2:;
wr(s->u,20,8,rd(s->r,24,8));
L_1803eb5c0_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803eb5c0_4:;
/* 1803eb5c5: push rdi */
L_1803eb5c5_0:;
L_1803eb5c5_1:;
wr(s->u,44,8,rd(s->r,56,8));
L_1803eb5c5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb5c5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,44,8));
L_1803eb5c5_4:;
/* 1803eb5c6: sub rsp, 0x30 */
L_1803eb5c6_0:;
L_1803eb5c6_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803eb5c6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803eb5c6_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803eb5c6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb5c6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb5c6_6:;
wr(s->u,52,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb5c6_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803eb5c6_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803eb5c6_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803eb5c6_10:;
/* 1803eb5ca: mov rdi, rdx */
L_1803eb5ca_0:;
L_1803eb5ca_1:;
wr(s->r,56,8,rd(s->r,16,8));
L_1803eb5ca_2:;
/* 1803eb5cd: mov rbx, rcx */
L_1803eb5cd_0:;
L_1803eb5cd_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803eb5cd_2:;
/* 1803eb5d0: movaps xmmword ptr [rsp + 0x20], xmm6 */
L_1803eb5d0_0:;
L_1803eb5d0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803eb5d0_2:;
wr(s->u,28,16,rd(s->r,4992,16));
L_1803eb5d0_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,28,16));
L_1803eb5d0_4:;
/* 1803eb5d5: movss xmm6, dword ptr [rdx + 4] */
L_1803eb5d5_0:;
L_1803eb5d5_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803eb5d5_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb5d5_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803eb5d5_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803eb5d5_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803eb5d5_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803eb5d5_7:;
/* 1803eb5da: mov dword ptr [rdx + 4], 0 */
L_1803eb5da_0:;
L_1803eb5da_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803eb5da_2:;
wr(s->u,16,4,((U)UINT64_C(0x0)));
L_1803eb5da_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803eb5da_4:;
/* 1803eb5e1: mov rdx, rcx */
L_1803eb5e1_0:;
L_1803eb5e1_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1803eb5e1_2:;
/* 1803eb5e4: mov rcx, rdi */
L_1803eb5e4_0:;
L_1803eb5e4_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803eb5e4_2:;
/* 1803eb5e7: call 0x1803fd504 */
L_1803eb5e7_0:;
L_1803eb5e7_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb5e7_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eb5ec)));
L_1803eb5e7_3:;
return (uint64_t)UINT64_C(0x1803fd504);
L_1803eb5e7_4:;
return UINT64_C(0x1803eb5ec);
}
uint64_t b_1803eb5ec(CPU*s){
/* 1803eb5ec: cmp rbx, rdi */
L_1803eb5ec_0:;
L_1803eb5ec_1:;
wr(s->u,10,8,rd(s->r,56,8));
L_1803eb5ec_2:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->u,10,8)));
L_1803eb5ec_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->u,10,8),8,1));
L_1803eb5ec_4:;
wr(s->u,18,8,(rd(s->r,24,8)-rd(s->u,10,8)));
L_1803eb5ec_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb5ec_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803eb5ec_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803eb5ec_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803eb5ec_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803eb5ec_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803eb5ec_11:;
/* 1803eb5ef: je 0x1803eb5f6 */
L_1803eb5ef_0:;
L_1803eb5ef_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803eb5f6);}
L_1803eb5ef_2:;
return UINT64_C(0x1803eb5f1);
}
uint64_t b_1803eb5f1(CPU*s){
/* 1803eb5f1: movss dword ptr [rdi + 4], xmm6 */
L_1803eb5f1_0:;
L_1803eb5f1_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x4))));
L_1803eb5f1_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803eb5f1_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803eb5f1_4:;
/* 1803eb5f6: mov rbx, qword ptr [rsp + 0x40] */
L_1803eb5f6_0:;
L_1803eb5f6_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803eb5f6_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803eb5f6_3:;
wr(s->r,24,8,rd(s->u,36,8));
L_1803eb5f6_4:;
/* 1803eb5fb: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803eb5fb_0:;
L_1803eb5fb_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803eb5fb_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803eb5fb_3:;
wr(s->u,62,16,rd(s->u,20,16));
L_1803eb5fb_4:;
wr(s->r,4992,4,rd(s->u,62,4));
L_1803eb5fb_5:;
wr(s->r,4996,4,rd(s->u,66,4));
L_1803eb5fb_6:;
wr(s->r,5000,4,rd(s->u,70,4));
L_1803eb5fb_7:;
wr(s->r,5004,4,rd(s->u,74,4));
L_1803eb5fb_8:;
/* 1803eb600: add rsp, 0x30 */
L_1803eb600_0:;
L_1803eb600_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb600_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803eb600_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803eb600_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb600_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb600_6:;
wr(s->u,44,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb600_7:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803eb600_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803eb600_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803eb600_10:;
/* 1803eb604: pop rdi */
L_1803eb604_0:;
L_1803eb604_1:;
wr(s->u,54,8,((U)UINT64_C(0x0)));
L_1803eb604_2:;
wr(s->u,54,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb604_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb604_4:;
wr(s->r,56,8,rd(s->u,54,8));
L_1803eb604_5:;
/* 1803eb605: ret  */
L_1803eb605_0:;
L_1803eb605_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb605_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb605_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb605_4:;
return UINT64_C(0x1803eb606);
}
uint64_t b_1803eb5f6(CPU*s){
/* 1803eb5f6: mov rbx, qword ptr [rsp + 0x40] */
L_1803eb5f6_0:;
L_1803eb5f6_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803eb5f6_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb5f6_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803eb5f6_4:;
/* 1803eb5fb: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803eb5fb_0:;
L_1803eb5fb_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803eb5fb_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803eb5fb_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803eb5fb_4:;
wr(s->r,4992,4,rd(s->u,50,4));
L_1803eb5fb_5:;
wr(s->r,4996,4,rd(s->u,54,4));
L_1803eb5fb_6:;
wr(s->r,5000,4,rd(s->u,58,4));
L_1803eb5fb_7:;
wr(s->r,5004,4,rd(s->u,62,4));
L_1803eb5fb_8:;
/* 1803eb600: add rsp, 0x30 */
L_1803eb600_0:;
L_1803eb600_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb600_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803eb600_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803eb600_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb600_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb600_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb600_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803eb600_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803eb600_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803eb600_10:;
/* 1803eb604: pop rdi */
L_1803eb604_0:;
L_1803eb604_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803eb604_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb604_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb604_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803eb604_5:;
/* 1803eb605: ret  */
L_1803eb605_0:;
L_1803eb605_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb605_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb605_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb605_4:;
return UINT64_C(0x1803eb606);
}
uint64_t b_1803eb610(CPU*s){
/* 1803eb610: movss xmm0, dword ptr [r8] */
L_1803eb610_0:;
L_1803eb610_1:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,128,8),4));
L_1803eb610_2:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803eb610_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803eb610_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803eb610_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803eb610_6:;
/* 1803eb615: lea eax, [r9 + r9] */
L_1803eb615_0:;
L_1803eb615_1:;
wr(s->u,8,8,(rd(s->r,136,8)*((U)UINT64_C(0x1))));
L_1803eb615_2:;
wr(s->u,16,8,(rd(s->r,136,8)+rd(s->u,8,8)));
L_1803eb615_3:;
wr(s->r,0,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803eb615_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb615_5:;
/* 1803eb619: cmp eax, 4 */
L_1803eb619_0:;
L_1803eb619_1:;
wr(s->u,36,4,rd(s->r,0,4));
L_1803eb619_2:;
wr(s->r,512,1,(rd(s->u,36,4)<((U)UINT64_C(0x4))));
L_1803eb619_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,36,4),((U)UINT64_C(0x4)),4,1));
L_1803eb619_4:;
wr(s->u,40,4,(rd(s->u,36,4)-((U)UINT64_C(0x4))));
L_1803eb619_5:;
wr(s->r,519,1,(sx(rd(s->u,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb619_6:;
wr(s->r,518,1,(rd(s->u,40,4)==((U)UINT64_C(0x0))));
L_1803eb619_7:;
wr(s->u,30,4,(rd(s->u,40,4)&((U)UINT64_C(0xff))));
L_1803eb619_8:;
wr(s->u,34,1,pop(rd(s->u,30,4),4));
L_1803eb619_9:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803eb619_10:;
wr(s->r,514,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803eb619_11:;
/* 1803eb61c: mulss xmm0, dword ptr [rdx] */
L_1803eb61c_0:;
L_1803eb61c_1:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803eb61c_2:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,24,4),4),4));
L_1803eb61c_3:;
/* 1803eb620: addss xmm0, dword ptr [rcx] */
L_1803eb620_0:;
L_1803eb620_1:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803eb620_2:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,24,4),4),4));
L_1803eb620_3:;
/* 1803eb624: movss dword ptr [rcx], xmm0 */
L_1803eb624_0:;
L_1803eb624_1:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803eb624_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,24,4));
L_1803eb624_3:;
/* 1803eb628: movss xmm1, dword ptr [r8 + 4] */
L_1803eb628_0:;
L_1803eb628_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803eb628_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb628_3:;
wr(s->r,4672,4,rd(s->u,24,4));
L_1803eb628_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803eb628_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803eb628_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803eb628_7:;
/* 1803eb62e: mulss xmm1, dword ptr [rdx + 4] */
L_1803eb62e_0:;
L_1803eb62e_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803eb62e_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb62e_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,24,4),4),4));
L_1803eb62e_4:;
/* 1803eb633: addss xmm1, dword ptr [rcx + 4] */
L_1803eb633_0:;
L_1803eb633_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803eb633_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb633_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->u,24,4),4),4));
L_1803eb633_4:;
/* 1803eb638: movss dword ptr [rcx + 4], xmm1 */
L_1803eb638_0:;
L_1803eb638_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803eb638_2:;
wr(s->u,24,4,rd(s->r,4672,4));
L_1803eb638_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803eb638_4:;
/* 1803eb63d: movss xmm1, dword ptr [rdx + 8] */
L_1803eb63d_0:;
L_1803eb63d_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803eb63d_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb63d_3:;
wr(s->r,4672,4,rd(s->u,24,4));
L_1803eb63d_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803eb63d_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803eb63d_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803eb63d_7:;
/* 1803eb642: movss xmm0, dword ptr [r8 + 0xc] */
L_1803eb642_0:;
L_1803eb642_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xc))));
L_1803eb642_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb642_3:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803eb642_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803eb642_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803eb642_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803eb642_7:;
/* 1803eb648: mulss xmm0, dword ptr [rdx + 0xc] */
L_1803eb648_0:;
L_1803eb648_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xc))));
L_1803eb648_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb648_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,24,4),4),4));
L_1803eb648_4:;
/* 1803eb64d: mulss xmm1, dword ptr [r8 + 8] */
L_1803eb64d_0:;
L_1803eb64d_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803eb64d_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb64d_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,24,4),4),4));
L_1803eb64d_4:;
/* 1803eb653: subss xmm1, xmm0 */
L_1803eb653_0:;
L_1803eb653_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803eb653_2:;
/* 1803eb657: addss xmm1, dword ptr [rcx + 8] */
L_1803eb657_0:;
L_1803eb657_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803eb657_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb657_3:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->u,24,4),4),4));
L_1803eb657_4:;
/* 1803eb65c: movss dword ptr [rcx + 8], xmm1 */
L_1803eb65c_0:;
L_1803eb65c_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803eb65c_2:;
wr(s->u,24,4,rd(s->r,4672,4));
L_1803eb65c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803eb65c_4:;
/* 1803eb661: movss xmm2, dword ptr [r8 + 0xc] */
L_1803eb661_0:;
L_1803eb661_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xc))));
L_1803eb661_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb661_3:;
wr(s->r,4736,4,rd(s->u,24,4));
L_1803eb661_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803eb661_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803eb661_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803eb661_7:;
/* 1803eb667: movss xmm0, dword ptr [r8 + 8] */
L_1803eb667_0:;
L_1803eb667_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803eb667_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb667_3:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803eb667_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803eb667_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803eb667_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803eb667_7:;
/* 1803eb66d: mulss xmm2, dword ptr [rdx + 8] */
L_1803eb66d_0:;
L_1803eb66d_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803eb66d_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb66d_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,24,4),4),4));
L_1803eb66d_4:;
/* 1803eb672: mulss xmm0, dword ptr [rdx + 0xc] */
L_1803eb672_0:;
L_1803eb672_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xc))));
L_1803eb672_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb672_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,24,4),4),4));
L_1803eb672_4:;
/* 1803eb677: addss xmm2, xmm0 */
L_1803eb677_0:;
L_1803eb677_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803eb677_2:;
/* 1803eb67b: addss xmm2, dword ptr [rcx + 0xc] */
L_1803eb67b_0:;
L_1803eb67b_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803eb67b_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb67b_3:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->u,24,4),4),4));
L_1803eb67b_4:;
/* 1803eb680: movss dword ptr [rcx + 0xc], xmm2 */
L_1803eb680_0:;
L_1803eb680_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803eb680_2:;
wr(s->u,24,4,rd(s->r,4736,4));
L_1803eb680_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803eb680_4:;
/* 1803eb685: jle 0x1803eb6ea */
L_1803eb685_0:;
L_1803eb685_1:;
wr(s->u,28,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803eb685_2:;
wr(s->u,29,1,((rd(s->r,518,1)!=0)||(rd(s->u,28,1)!=0)));
L_1803eb685_3:;
if(rd(s->u,29,1)){return UINT64_C(0x1803eb6ea);}
L_1803eb685_4:;
return UINT64_C(0x1803eb687);
}
uint64_t b_1803eb687(CPU*s){
/* 1803eb687: add eax, -5 */
L_1803eb687_0:;
L_1803eb687_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0xfffffffb)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803eb687_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0xfffffffb)),4,0));
L_1803eb687_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0xfffffffb))));
L_1803eb687_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb687_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb687_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803eb687_7:;
wr(s->u,62,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803eb687_8:;
wr(s->u,70,1,pop(rd(s->u,62,4),4));
L_1803eb687_9:;
wr(s->u,71,1,(rd(s->u,70,1)&((U)UINT64_C(0x1))));
L_1803eb687_10:;
wr(s->r,514,1,(rd(s->u,71,1)==((U)UINT64_C(0x0))));
L_1803eb687_11:;
/* 1803eb68a: sub rdx, r8 */
L_1803eb68a_0:;
L_1803eb68a_1:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->r,128,8)));
L_1803eb68a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->r,128,8),8,1));
L_1803eb68a_3:;
wr(s->r,16,8,(rd(s->r,16,8)-rd(s->r,128,8)));
L_1803eb68a_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb68a_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803eb68a_6:;
wr(s->u,62,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803eb68a_7:;
wr(s->u,70,1,pop(rd(s->u,62,8),8));
L_1803eb68a_8:;
wr(s->u,71,1,(rd(s->u,70,1)&((U)UINT64_C(0x1))));
L_1803eb68a_9:;
wr(s->r,514,1,(rd(s->u,71,1)==((U)UINT64_C(0x0))));
L_1803eb68a_10:;
/* 1803eb68d: sub r8, rcx */
L_1803eb68d_0:;
L_1803eb68d_1:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->r,8,8)));
L_1803eb68d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->r,8,8),8,1));
L_1803eb68d_3:;
wr(s->r,128,8,(rd(s->r,128,8)-rd(s->r,8,8)));
L_1803eb68d_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb68d_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803eb68d_6:;
wr(s->u,62,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803eb68d_7:;
wr(s->u,70,1,pop(rd(s->u,62,8),8));
L_1803eb68d_8:;
wr(s->u,71,1,(rd(s->u,70,1)&((U)UINT64_C(0x1))));
L_1803eb68d_9:;
wr(s->r,514,1,(rd(s->u,71,1)==((U)UINT64_C(0x0))));
L_1803eb68d_10:;
/* 1803eb690: shr eax, 2 */
L_1803eb690_0:;
L_1803eb690_1:;
wr(s->u,107,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803eb690_2:;
wr(s->u,111,4,rd(s->r,0,4));
L_1803eb690_3:;
wr(s->r,0,4,((rd(s->u,107,4)>=32)?0:(rd(s->r,0,4)>>rd(s->u,107,4))));
L_1803eb690_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb690_5:;
wr(s->u,91,1,(rd(s->u,107,4)==((U)UINT64_C(0x0))));
L_1803eb690_6:;
wr(s->u,92,4,(rd(s->u,107,4)-((U)UINT64_C(0x1))));
L_1803eb690_7:;
wr(s->u,96,4,((rd(s->u,92,4)>=32)?0:(rd(s->u,111,4)>>rd(s->u,92,4))));
L_1803eb690_8:;
wr(s->u,100,4,(rd(s->u,96,4)&((U)UINT64_C(0x1))));
L_1803eb690_9:;
wr(s->u,104,1,(rd(s->u,100,4)!=((U)UINT64_C(0x0))));
L_1803eb690_10:;
wr(s->u,0,1,rd(s->u,91,1));
L_1803eb690_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803eb690_12:;
wr(s->u,2,1,(!rd(s->u,91,1)));
L_1803eb690_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803eb690_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,104,1)));
L_1803eb690_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803eb690_16:;
wr(s->u,105,1,(rd(s->u,107,4)==((U)UINT64_C(0x1))));
L_1803eb690_17:;
wr(s->u,106,1,(sx(rd(s->u,111,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb690_18:;
wr(s->u,0,1,rd(s->u,105,1));
L_1803eb690_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803eb690_20:;
wr(s->u,2,1,(!rd(s->u,105,1)));
L_1803eb690_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803eb690_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,106,1)));
L_1803eb690_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803eb690_24:;
wr(s->u,72,1,(rd(s->u,107,4)!=((U)UINT64_C(0x0))));
L_1803eb690_25:;
wr(s->u,73,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb690_26:;
wr(s->u,74,1,(!rd(s->u,72,1)));
L_1803eb690_27:;
wr(s->u,75,1,(rd(s->u,74,1)&rd(s->r,519,1)));
L_1803eb690_28:;
wr(s->u,76,1,(rd(s->u,72,1)&rd(s->u,73,1)));
L_1803eb690_29:;
wr(s->r,519,1,(rd(s->u,75,1)|rd(s->u,76,1)));
L_1803eb690_30:;
wr(s->u,77,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803eb690_31:;
wr(s->u,78,1,(!rd(s->u,72,1)));
L_1803eb690_32:;
wr(s->u,79,1,(rd(s->u,78,1)&rd(s->r,518,1)));
L_1803eb690_33:;
wr(s->u,80,1,(rd(s->u,72,1)&rd(s->u,77,1)));
L_1803eb690_34:;
wr(s->r,518,1,(rd(s->u,79,1)|rd(s->u,80,1)));
L_1803eb690_35:;
wr(s->u,81,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803eb690_36:;
wr(s->u,85,1,pop(rd(s->u,81,4),4));
L_1803eb690_37:;
wr(s->u,86,1,(rd(s->u,85,1)&((U)UINT64_C(0x1))));
L_1803eb690_38:;
wr(s->u,87,1,(rd(s->u,86,1)==((U)UINT64_C(0x0))));
L_1803eb690_39:;
wr(s->u,88,1,(!rd(s->u,72,1)));
L_1803eb690_40:;
wr(s->u,89,1,(rd(s->u,88,1)&rd(s->r,514,1)));
L_1803eb690_41:;
wr(s->u,90,1,(rd(s->u,72,1)&rd(s->u,87,1)));
L_1803eb690_42:;
wr(s->r,514,1,(rd(s->u,89,1)|rd(s->u,90,1)));
L_1803eb690_43:;
/* 1803eb693: lea r9, [rcx + 0x10] */
L_1803eb693_0:;
L_1803eb693_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803eb693_2:;
wr(s->r,136,8,rd(s->u,5,8));
L_1803eb693_3:;
/* 1803eb697: lea ecx, [rax + 1] */
L_1803eb697_0:;
L_1803eb697_1:;
wr(s->u,5,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803eb697_2:;
wr(s->r,8,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803eb697_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803eb697_4:;
/* 1803eb69a: nop word ptr [rax + rax] */
L_1803eb69a_0:;
L_1803eb69a_1:;
wr(s->u,29,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803eb69a_2:;
wr(s->u,37,8,(rd(s->r,0,8)+rd(s->u,29,8)));
L_1803eb69a_3:;
/* 1803eb6a0: movaps xmm2, xmmword ptr [r8 + r9] */
L_1803eb6a0_0:;
L_1803eb6a0_1:;
wr(s->u,13,8,(rd(s->r,136,8)*((U)UINT64_C(0x1))));
L_1803eb6a0_2:;
wr(s->u,21,8,(rd(s->r,128,8)+rd(s->u,13,8)));
L_1803eb6a0_3:;
wr(s->u,45,16,mr((uint64_t)rd(s->u,21,8),16));
L_1803eb6a0_4:;
wr(s->u,131,16,rd(s->u,45,16));
L_1803eb6a0_5:;
wr(s->r,4736,4,rd(s->u,131,4));
L_1803eb6a0_6:;
wr(s->r,4740,4,rd(s->u,135,4));
L_1803eb6a0_7:;
wr(s->r,4744,4,rd(s->u,139,4));
L_1803eb6a0_8:;
wr(s->r,4748,4,rd(s->u,143,4));
L_1803eb6a0_9:;
/* 1803eb6a5: lea rax, [r8 + r9] */
L_1803eb6a5_0:;
L_1803eb6a5_1:;
wr(s->u,13,8,(rd(s->r,136,8)*((U)UINT64_C(0x1))));
L_1803eb6a5_2:;
wr(s->u,21,8,(rd(s->r,128,8)+rd(s->u,13,8)));
L_1803eb6a5_3:;
wr(s->r,0,8,rd(s->u,21,8));
L_1803eb6a5_4:;
/* 1803eb6a9: add r9, 0x10 */
L_1803eb6a9_0:;
L_1803eb6a9_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803eb6a9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x10)),8,0));
L_1803eb6a9_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x10))));
L_1803eb6a9_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb6a9_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803eb6a9_6:;
wr(s->u,62,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803eb6a9_7:;
wr(s->u,70,1,pop(rd(s->u,62,8),8));
L_1803eb6a9_8:;
wr(s->u,71,1,(rd(s->u,70,1)&((U)UINT64_C(0x1))));
L_1803eb6a9_9:;
wr(s->r,514,1,(rd(s->u,71,1)==((U)UINT64_C(0x0))));
L_1803eb6a9_10:;
/* 1803eb6ad: sub rcx, 1 */
L_1803eb6ad_0:;
L_1803eb6ad_1:;
wr(s->r,512,1,(rd(s->r,8,8)<((U)UINT64_C(0x1))));
L_1803eb6ad_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x1)),8,1));
L_1803eb6ad_3:;
wr(s->r,8,8,(rd(s->r,8,8)-((U)UINT64_C(0x1))));
L_1803eb6ad_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb6ad_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803eb6ad_6:;
wr(s->u,62,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803eb6ad_7:;
wr(s->u,70,1,pop(rd(s->u,62,8),8));
L_1803eb6ad_8:;
wr(s->u,71,1,(rd(s->u,70,1)&((U)UINT64_C(0x1))));
L_1803eb6ad_9:;
wr(s->r,514,1,(rd(s->u,71,1)==((U)UINT64_C(0x0))));
L_1803eb6ad_10:;
/* 1803eb6b1: movaps xmm1, xmmword ptr [rax + rdx] */
L_1803eb6b1_0:;
L_1803eb6b1_1:;
wr(s->u,13,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803eb6b1_2:;
wr(s->u,21,8,(rd(s->r,0,8)+rd(s->u,13,8)));
L_1803eb6b1_3:;
wr(s->u,45,16,mr((uint64_t)rd(s->u,21,8),16));
L_1803eb6b1_4:;
wr(s->u,131,16,rd(s->u,45,16));
L_1803eb6b1_5:;
wr(s->r,4672,4,rd(s->u,131,4));
L_1803eb6b1_6:;
wr(s->r,4676,4,rd(s->u,135,4));
L_1803eb6b1_7:;
wr(s->r,4680,4,rd(s->u,139,4));
L_1803eb6b1_8:;
wr(s->r,4684,4,rd(s->u,143,4));
L_1803eb6b1_9:;
/* 1803eb6b5: movaps xmm3, xmm2 */
L_1803eb6b5_0:;
L_1803eb6b5_1:;
wr(s->r,4800,4,rd(s->r,4736,4));
L_1803eb6b5_2:;
wr(s->r,4804,4,rd(s->r,4740,4));
L_1803eb6b5_3:;
wr(s->r,4808,4,rd(s->r,4744,4));
L_1803eb6b5_4:;
wr(s->r,4812,4,rd(s->r,4748,4));
L_1803eb6b5_5:;
/* 1803eb6b8: shufps xmm2, xmm2, 0xb1 */
L_1803eb6b8_0:;
L_1803eb6b8_1:;
wr(s->u,191,4,rd(s->r,4736,4));
L_1803eb6b8_2:;
wr(s->u,195,4,rd(s->r,4740,4));
L_1803eb6b8_3:;
wr(s->u,199,4,rd(s->r,4744,4));
L_1803eb6b8_4:;
wr(s->u,203,4,rd(s->r,4748,4));
L_1803eb6b8_5:;
wr(s->u,207,4,rd(s->r,4736,4));
L_1803eb6b8_6:;
wr(s->u,211,4,rd(s->r,4740,4));
L_1803eb6b8_7:;
wr(s->u,215,4,rd(s->r,4744,4));
L_1803eb6b8_8:;
wr(s->u,219,4,rd(s->r,4748,4));
L_1803eb6b8_9:;
wr(s->u,147,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x0))));
L_1803eb6b8_10:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6b8_11:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,207,4)));
L_1803eb6b8_12:;
wr(s->u,156,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x1))));
L_1803eb6b8_13:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6b8_14:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,211,4)));
L_1803eb6b8_15:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6b8_16:;
wr(s->u,169,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x2))));
L_1803eb6b8_17:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6b8_18:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,215,4)));
L_1803eb6b8_19:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6b8_20:;
wr(s->u,182,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x3))));
L_1803eb6b8_21:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6b8_22:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,219,4)));
L_1803eb6b8_23:;
wr(s->r,4736,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6b8_24:;
wr(s->u,147,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb6b8_25:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6b8_26:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,207,4)));
L_1803eb6b8_27:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb6b8_28:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6b8_29:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,211,4)));
L_1803eb6b8_30:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6b8_31:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb6b8_32:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6b8_33:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,215,4)));
L_1803eb6b8_34:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6b8_35:;
wr(s->u,182,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb6b8_36:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6b8_37:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,219,4)));
L_1803eb6b8_38:;
wr(s->r,4740,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6b8_39:;
wr(s->u,147,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x0))));
L_1803eb6b8_40:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6b8_41:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,191,4)));
L_1803eb6b8_42:;
wr(s->u,156,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x1))));
L_1803eb6b8_43:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6b8_44:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,195,4)));
L_1803eb6b8_45:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6b8_46:;
wr(s->u,169,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x2))));
L_1803eb6b8_47:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6b8_48:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,199,4)));
L_1803eb6b8_49:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6b8_50:;
wr(s->u,182,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x3))));
L_1803eb6b8_51:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6b8_52:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,203,4)));
L_1803eb6b8_53:;
wr(s->r,4744,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6b8_54:;
wr(s->u,147,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803eb6b8_55:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6b8_56:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,191,4)));
L_1803eb6b8_57:;
wr(s->u,156,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803eb6b8_58:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6b8_59:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,195,4)));
L_1803eb6b8_60:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6b8_61:;
wr(s->u,169,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803eb6b8_62:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6b8_63:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,199,4)));
L_1803eb6b8_64:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6b8_65:;
wr(s->u,182,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803eb6b8_66:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6b8_67:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,203,4)));
L_1803eb6b8_68:;
wr(s->r,4748,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6b8_69:;
/* 1803eb6bc: mulps xmm3, xmm1 */
L_1803eb6bc_0:;
L_1803eb6bc_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803eb6bc_2:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)*fv(rd(s->r,4676,4),4),4));
L_1803eb6bc_3:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)*fv(rd(s->r,4680,4),4),4));
L_1803eb6bc_4:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)*fv(rd(s->r,4684,4),4),4));
L_1803eb6bc_5:;
/* 1803eb6bf: mulps xmm2, xmm1 */
L_1803eb6bf_0:;
L_1803eb6bf_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803eb6bf_2:;
wr(s->r,4740,4,fb(fv(rd(s->r,4740,4),4)*fv(rd(s->r,4676,4),4),4));
L_1803eb6bf_3:;
wr(s->r,4744,4,fb(fv(rd(s->r,4744,4),4)*fv(rd(s->r,4680,4),4),4));
L_1803eb6bf_4:;
wr(s->r,4748,4,fb(fv(rd(s->r,4748,4),4)*fv(rd(s->r,4684,4),4),4));
L_1803eb6bf_5:;
/* 1803eb6c2: movaps xmm0, xmm3 */
L_1803eb6c2_0:;
L_1803eb6c2_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803eb6c2_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803eb6c2_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803eb6c2_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803eb6c2_5:;
/* 1803eb6c5: shufps xmm0, xmm3, 0xb1 */
L_1803eb6c5_0:;
L_1803eb6c5_1:;
wr(s->u,191,4,rd(s->r,4800,4));
L_1803eb6c5_2:;
wr(s->u,195,4,rd(s->r,4804,4));
L_1803eb6c5_3:;
wr(s->u,199,4,rd(s->r,4808,4));
L_1803eb6c5_4:;
wr(s->u,203,4,rd(s->r,4812,4));
L_1803eb6c5_5:;
wr(s->u,207,4,rd(s->r,4608,4));
L_1803eb6c5_6:;
wr(s->u,211,4,rd(s->r,4612,4));
L_1803eb6c5_7:;
wr(s->u,215,4,rd(s->r,4616,4));
L_1803eb6c5_8:;
wr(s->u,219,4,rd(s->r,4620,4));
L_1803eb6c5_9:;
wr(s->u,147,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x0))));
L_1803eb6c5_10:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6c5_11:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,207,4)));
L_1803eb6c5_12:;
wr(s->u,156,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x1))));
L_1803eb6c5_13:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6c5_14:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,211,4)));
L_1803eb6c5_15:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6c5_16:;
wr(s->u,169,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x2))));
L_1803eb6c5_17:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6c5_18:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,215,4)));
L_1803eb6c5_19:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6c5_20:;
wr(s->u,182,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x3))));
L_1803eb6c5_21:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6c5_22:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,219,4)));
L_1803eb6c5_23:;
wr(s->r,4608,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6c5_24:;
wr(s->u,147,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb6c5_25:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6c5_26:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,207,4)));
L_1803eb6c5_27:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb6c5_28:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6c5_29:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,211,4)));
L_1803eb6c5_30:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6c5_31:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb6c5_32:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6c5_33:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,215,4)));
L_1803eb6c5_34:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6c5_35:;
wr(s->u,182,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb6c5_36:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6c5_37:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,219,4)));
L_1803eb6c5_38:;
wr(s->r,4612,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6c5_39:;
wr(s->u,147,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x0))));
L_1803eb6c5_40:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6c5_41:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,191,4)));
L_1803eb6c5_42:;
wr(s->u,156,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x1))));
L_1803eb6c5_43:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6c5_44:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,195,4)));
L_1803eb6c5_45:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6c5_46:;
wr(s->u,169,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x2))));
L_1803eb6c5_47:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6c5_48:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,199,4)));
L_1803eb6c5_49:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6c5_50:;
wr(s->u,182,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x3))));
L_1803eb6c5_51:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6c5_52:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,203,4)));
L_1803eb6c5_53:;
wr(s->r,4616,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6c5_54:;
wr(s->u,147,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803eb6c5_55:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6c5_56:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,191,4)));
L_1803eb6c5_57:;
wr(s->u,156,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803eb6c5_58:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6c5_59:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,195,4)));
L_1803eb6c5_60:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6c5_61:;
wr(s->u,169,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803eb6c5_62:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6c5_63:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,199,4)));
L_1803eb6c5_64:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6c5_65:;
wr(s->u,182,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803eb6c5_66:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6c5_67:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,203,4)));
L_1803eb6c5_68:;
wr(s->r,4620,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6c5_69:;
/* 1803eb6c9: subps xmm3, xmm0 */
L_1803eb6c9_0:;
L_1803eb6c9_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803eb6c9_2:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)-fv(rd(s->r,4612,4),4),4));
L_1803eb6c9_3:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)-fv(rd(s->r,4616,4),4),4));
L_1803eb6c9_4:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)-fv(rd(s->r,4620,4),4),4));
L_1803eb6c9_5:;
/* 1803eb6cc: movaps xmm0, xmm2 */
L_1803eb6cc_0:;
L_1803eb6cc_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803eb6cc_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803eb6cc_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803eb6cc_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803eb6cc_5:;
/* 1803eb6cf: shufps xmm0, xmm2, 0xb1 */
L_1803eb6cf_0:;
L_1803eb6cf_1:;
wr(s->u,191,4,rd(s->r,4736,4));
L_1803eb6cf_2:;
wr(s->u,195,4,rd(s->r,4740,4));
L_1803eb6cf_3:;
wr(s->u,199,4,rd(s->r,4744,4));
L_1803eb6cf_4:;
wr(s->u,203,4,rd(s->r,4748,4));
L_1803eb6cf_5:;
wr(s->u,207,4,rd(s->r,4608,4));
L_1803eb6cf_6:;
wr(s->u,211,4,rd(s->r,4612,4));
L_1803eb6cf_7:;
wr(s->u,215,4,rd(s->r,4616,4));
L_1803eb6cf_8:;
wr(s->u,219,4,rd(s->r,4620,4));
L_1803eb6cf_9:;
wr(s->u,147,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x0))));
L_1803eb6cf_10:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6cf_11:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,207,4)));
L_1803eb6cf_12:;
wr(s->u,156,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x1))));
L_1803eb6cf_13:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6cf_14:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,211,4)));
L_1803eb6cf_15:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6cf_16:;
wr(s->u,169,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x2))));
L_1803eb6cf_17:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6cf_18:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,215,4)));
L_1803eb6cf_19:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6cf_20:;
wr(s->u,182,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x3))));
L_1803eb6cf_21:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6cf_22:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,219,4)));
L_1803eb6cf_23:;
wr(s->r,4608,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6cf_24:;
wr(s->u,147,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb6cf_25:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6cf_26:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,207,4)));
L_1803eb6cf_27:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb6cf_28:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6cf_29:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,211,4)));
L_1803eb6cf_30:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6cf_31:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb6cf_32:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6cf_33:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,215,4)));
L_1803eb6cf_34:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6cf_35:;
wr(s->u,182,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb6cf_36:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6cf_37:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,219,4)));
L_1803eb6cf_38:;
wr(s->r,4612,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6cf_39:;
wr(s->u,147,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x0))));
L_1803eb6cf_40:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6cf_41:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,191,4)));
L_1803eb6cf_42:;
wr(s->u,156,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x1))));
L_1803eb6cf_43:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6cf_44:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,195,4)));
L_1803eb6cf_45:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6cf_46:;
wr(s->u,169,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x2))));
L_1803eb6cf_47:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6cf_48:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,199,4)));
L_1803eb6cf_49:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6cf_50:;
wr(s->u,182,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x3))));
L_1803eb6cf_51:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6cf_52:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,203,4)));
L_1803eb6cf_53:;
wr(s->r,4616,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6cf_54:;
wr(s->u,147,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803eb6cf_55:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6cf_56:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,191,4)));
L_1803eb6cf_57:;
wr(s->u,156,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803eb6cf_58:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6cf_59:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,195,4)));
L_1803eb6cf_60:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6cf_61:;
wr(s->u,169,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803eb6cf_62:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6cf_63:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,199,4)));
L_1803eb6cf_64:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6cf_65:;
wr(s->u,182,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803eb6cf_66:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6cf_67:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,203,4)));
L_1803eb6cf_68:;
wr(s->r,4620,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6cf_69:;
/* 1803eb6d3: addps xmm0, xmm2 */
L_1803eb6d3_0:;
L_1803eb6d3_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803eb6d3_2:;
wr(s->r,4612,4,fb(fv(rd(s->r,4612,4),4)+fv(rd(s->r,4740,4),4),4));
L_1803eb6d3_3:;
wr(s->r,4616,4,fb(fv(rd(s->r,4616,4),4)+fv(rd(s->r,4744,4),4),4));
L_1803eb6d3_4:;
wr(s->r,4620,4,fb(fv(rd(s->r,4620,4),4)+fv(rd(s->r,4748,4),4),4));
L_1803eb6d3_5:;
/* 1803eb6d6: shufps xmm3, xmm0, 0x88 */
L_1803eb6d6_0:;
L_1803eb6d6_1:;
wr(s->u,191,4,rd(s->r,4608,4));
L_1803eb6d6_2:;
wr(s->u,195,4,rd(s->r,4612,4));
L_1803eb6d6_3:;
wr(s->u,199,4,rd(s->r,4616,4));
L_1803eb6d6_4:;
wr(s->u,203,4,rd(s->r,4620,4));
L_1803eb6d6_5:;
wr(s->u,207,4,rd(s->r,4800,4));
L_1803eb6d6_6:;
wr(s->u,211,4,rd(s->r,4804,4));
L_1803eb6d6_7:;
wr(s->u,215,4,rd(s->r,4808,4));
L_1803eb6d6_8:;
wr(s->u,219,4,rd(s->r,4812,4));
L_1803eb6d6_9:;
wr(s->u,147,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb6d6_10:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6d6_11:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,207,4)));
L_1803eb6d6_12:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb6d6_13:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6d6_14:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,211,4)));
L_1803eb6d6_15:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6d6_16:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb6d6_17:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6d6_18:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,215,4)));
L_1803eb6d6_19:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6d6_20:;
wr(s->u,182,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb6d6_21:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6d6_22:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,219,4)));
L_1803eb6d6_23:;
wr(s->r,4800,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6d6_24:;
wr(s->u,147,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803eb6d6_25:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6d6_26:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,207,4)));
L_1803eb6d6_27:;
wr(s->u,156,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803eb6d6_28:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6d6_29:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,211,4)));
L_1803eb6d6_30:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6d6_31:;
wr(s->u,169,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803eb6d6_32:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6d6_33:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,215,4)));
L_1803eb6d6_34:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6d6_35:;
wr(s->u,182,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803eb6d6_36:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6d6_37:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,219,4)));
L_1803eb6d6_38:;
wr(s->r,4804,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6d6_39:;
wr(s->u,147,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb6d6_40:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6d6_41:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,191,4)));
L_1803eb6d6_42:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb6d6_43:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6d6_44:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,195,4)));
L_1803eb6d6_45:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6d6_46:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb6d6_47:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6d6_48:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,199,4)));
L_1803eb6d6_49:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6d6_50:;
wr(s->u,182,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb6d6_51:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6d6_52:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,203,4)));
L_1803eb6d6_53:;
wr(s->r,4808,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6d6_54:;
wr(s->u,147,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803eb6d6_55:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6d6_56:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,191,4)));
L_1803eb6d6_57:;
wr(s->u,156,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803eb6d6_58:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6d6_59:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,195,4)));
L_1803eb6d6_60:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6d6_61:;
wr(s->u,169,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803eb6d6_62:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6d6_63:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,199,4)));
L_1803eb6d6_64:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6d6_65:;
wr(s->u,182,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803eb6d6_66:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6d6_67:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,203,4)));
L_1803eb6d6_68:;
wr(s->r,4812,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6d6_69:;
/* 1803eb6da: shufps xmm3, xmm3, 0xd8 */
L_1803eb6da_0:;
L_1803eb6da_1:;
wr(s->u,191,4,rd(s->r,4800,4));
L_1803eb6da_2:;
wr(s->u,195,4,rd(s->r,4804,4));
L_1803eb6da_3:;
wr(s->u,199,4,rd(s->r,4808,4));
L_1803eb6da_4:;
wr(s->u,203,4,rd(s->r,4812,4));
L_1803eb6da_5:;
wr(s->u,207,4,rd(s->r,4800,4));
L_1803eb6da_6:;
wr(s->u,211,4,rd(s->r,4804,4));
L_1803eb6da_7:;
wr(s->u,215,4,rd(s->r,4808,4));
L_1803eb6da_8:;
wr(s->u,219,4,rd(s->r,4812,4));
L_1803eb6da_9:;
wr(s->u,147,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb6da_10:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6da_11:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,207,4)));
L_1803eb6da_12:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb6da_13:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6da_14:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,211,4)));
L_1803eb6da_15:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6da_16:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb6da_17:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6da_18:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,215,4)));
L_1803eb6da_19:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6da_20:;
wr(s->u,182,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb6da_21:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6da_22:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,219,4)));
L_1803eb6da_23:;
wr(s->r,4800,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6da_24:;
wr(s->u,147,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803eb6da_25:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6da_26:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,207,4)));
L_1803eb6da_27:;
wr(s->u,156,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803eb6da_28:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6da_29:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,211,4)));
L_1803eb6da_30:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6da_31:;
wr(s->u,169,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803eb6da_32:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6da_33:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,215,4)));
L_1803eb6da_34:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6da_35:;
wr(s->u,182,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803eb6da_36:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6da_37:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,219,4)));
L_1803eb6da_38:;
wr(s->r,4804,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6da_39:;
wr(s->u,147,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x0))));
L_1803eb6da_40:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6da_41:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,191,4)));
L_1803eb6da_42:;
wr(s->u,156,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x1))));
L_1803eb6da_43:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6da_44:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,195,4)));
L_1803eb6da_45:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6da_46:;
wr(s->u,169,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x2))));
L_1803eb6da_47:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6da_48:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,199,4)));
L_1803eb6da_49:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6da_50:;
wr(s->u,182,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x3))));
L_1803eb6da_51:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6da_52:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,203,4)));
L_1803eb6da_53:;
wr(s->r,4808,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6da_54:;
wr(s->u,147,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x0))));
L_1803eb6da_55:;
wr(s->u,148,4,rd(s->u,147,1));
L_1803eb6da_56:;
wr(s->u,152,4,(rd(s->u,148,4)*rd(s->u,191,4)));
L_1803eb6da_57:;
wr(s->u,156,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x1))));
L_1803eb6da_58:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb6da_59:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,195,4)));
L_1803eb6da_60:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb6da_61:;
wr(s->u,169,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x2))));
L_1803eb6da_62:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb6da_63:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,199,4)));
L_1803eb6da_64:;
wr(s->u,178,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb6da_65:;
wr(s->u,182,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x3))));
L_1803eb6da_66:;
wr(s->u,183,4,rd(s->u,182,1));
L_1803eb6da_67:;
wr(s->u,187,4,(rd(s->u,183,4)*rd(s->u,203,4)));
L_1803eb6da_68:;
wr(s->r,4812,4,(rd(s->u,178,4)+rd(s->u,187,4)));
L_1803eb6da_69:;
/* 1803eb6de: addps xmm3, xmmword ptr [r9 - 0x10] */
L_1803eb6de_0:;
L_1803eb6de_1:;
wr(s->u,5,8,(rd(s->r,136,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb6de_2:;
wr(s->u,45,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803eb6de_3:;
wr(s->u,115,16,rd(s->u,45,16));
L_1803eb6de_4:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->u,115,4),4),4));
L_1803eb6de_5:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)+fv(rd(s->u,119,4),4),4));
L_1803eb6de_6:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)+fv(rd(s->u,123,4),4),4));
L_1803eb6de_7:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)+fv(rd(s->u,127,4),4),4));
L_1803eb6de_8:;
/* 1803eb6e3: movaps xmmword ptr [r9 - 0x10], xmm3 */
L_1803eb6e3_0:;
L_1803eb6e3_1:;
wr(s->u,5,8,(rd(s->r,136,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb6e3_2:;
wr(s->u,45,16,rd(s->r,4800,16));
L_1803eb6e3_3:;
mw((uint64_t)rd(s->u,5,8),16,rd(s->u,45,16));
L_1803eb6e3_4:;
/* 1803eb6e8: jne 0x1803eb6a0 */
L_1803eb6e8_0:;
L_1803eb6e8_1:;
wr(s->u,61,1,(!rd(s->r,518,1)));
L_1803eb6e8_2:;
if(rd(s->u,61,1)){goto L_1803eb6a0_0;}
L_1803eb6e8_3:;
return UINT64_C(0x1803eb6ea);
}
uint64_t b_1803eb6a0(CPU*s){
/* 1803eb6a0: movaps xmm2, xmmword ptr [r8 + r9] */
L_1803eb6a0_0:;
L_1803eb6a0_1:;
wr(s->u,8,8,(rd(s->r,136,8)*((U)UINT64_C(0x1))));
L_1803eb6a0_2:;
wr(s->u,16,8,(rd(s->r,128,8)+rd(s->u,8,8)));
L_1803eb6a0_3:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,16,8),16));
L_1803eb6a0_4:;
wr(s->u,67,16,rd(s->u,24,16));
L_1803eb6a0_5:;
wr(s->r,4736,4,rd(s->u,67,4));
L_1803eb6a0_6:;
wr(s->r,4740,4,rd(s->u,71,4));
L_1803eb6a0_7:;
wr(s->r,4744,4,rd(s->u,75,4));
L_1803eb6a0_8:;
wr(s->r,4748,4,rd(s->u,79,4));
L_1803eb6a0_9:;
/* 1803eb6a5: lea rax, [r8 + r9] */
L_1803eb6a5_0:;
L_1803eb6a5_1:;
wr(s->u,8,8,(rd(s->r,136,8)*((U)UINT64_C(0x1))));
L_1803eb6a5_2:;
wr(s->u,16,8,(rd(s->r,128,8)+rd(s->u,8,8)));
L_1803eb6a5_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803eb6a5_4:;
/* 1803eb6a9: add r9, 0x10 */
L_1803eb6a9_0:;
L_1803eb6a9_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803eb6a9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x10)),8,0));
L_1803eb6a9_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x10))));
L_1803eb6a9_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb6a9_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803eb6a9_6:;
wr(s->u,41,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803eb6a9_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803eb6a9_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803eb6a9_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803eb6a9_10:;
/* 1803eb6ad: sub rcx, 1 */
L_1803eb6ad_0:;
L_1803eb6ad_1:;
wr(s->r,512,1,(rd(s->r,8,8)<((U)UINT64_C(0x1))));
L_1803eb6ad_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x1)),8,1));
L_1803eb6ad_3:;
wr(s->r,8,8,(rd(s->r,8,8)-((U)UINT64_C(0x1))));
L_1803eb6ad_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb6ad_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803eb6ad_6:;
wr(s->u,41,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803eb6ad_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803eb6ad_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803eb6ad_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803eb6ad_10:;
/* 1803eb6b1: movaps xmm1, xmmword ptr [rax + rdx] */
L_1803eb6b1_0:;
L_1803eb6b1_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x1))));
L_1803eb6b1_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803eb6b1_3:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,16,8),16));
L_1803eb6b1_4:;
wr(s->u,67,16,rd(s->u,24,16));
L_1803eb6b1_5:;
wr(s->r,4672,4,rd(s->u,67,4));
L_1803eb6b1_6:;
wr(s->r,4676,4,rd(s->u,71,4));
L_1803eb6b1_7:;
wr(s->r,4680,4,rd(s->u,75,4));
L_1803eb6b1_8:;
wr(s->r,4684,4,rd(s->u,79,4));
L_1803eb6b1_9:;
/* 1803eb6b5: movaps xmm3, xmm2 */
L_1803eb6b5_0:;
L_1803eb6b5_1:;
wr(s->r,4800,4,rd(s->r,4736,4));
L_1803eb6b5_2:;
wr(s->r,4804,4,rd(s->r,4740,4));
L_1803eb6b5_3:;
wr(s->r,4808,4,rd(s->r,4744,4));
L_1803eb6b5_4:;
wr(s->r,4812,4,rd(s->r,4748,4));
L_1803eb6b5_5:;
/* 1803eb6b8: shufps xmm2, xmm2, 0xb1 */
L_1803eb6b8_0:;
L_1803eb6b8_1:;
wr(s->u,127,4,rd(s->r,4736,4));
L_1803eb6b8_2:;
wr(s->u,131,4,rd(s->r,4740,4));
L_1803eb6b8_3:;
wr(s->u,135,4,rd(s->r,4744,4));
L_1803eb6b8_4:;
wr(s->u,139,4,rd(s->r,4748,4));
L_1803eb6b8_5:;
wr(s->u,143,4,rd(s->r,4736,4));
L_1803eb6b8_6:;
wr(s->u,147,4,rd(s->r,4740,4));
L_1803eb6b8_7:;
wr(s->u,151,4,rd(s->r,4744,4));
L_1803eb6b8_8:;
wr(s->u,155,4,rd(s->r,4748,4));
L_1803eb6b8_9:;
wr(s->u,83,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x0))));
L_1803eb6b8_10:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6b8_11:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,143,4)));
L_1803eb6b8_12:;
wr(s->u,92,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x1))));
L_1803eb6b8_13:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6b8_14:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,147,4)));
L_1803eb6b8_15:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6b8_16:;
wr(s->u,105,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x2))));
L_1803eb6b8_17:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6b8_18:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,151,4)));
L_1803eb6b8_19:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6b8_20:;
wr(s->u,118,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x3))));
L_1803eb6b8_21:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6b8_22:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,155,4)));
L_1803eb6b8_23:;
wr(s->r,4736,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6b8_24:;
wr(s->u,83,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb6b8_25:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6b8_26:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,143,4)));
L_1803eb6b8_27:;
wr(s->u,92,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb6b8_28:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6b8_29:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,147,4)));
L_1803eb6b8_30:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6b8_31:;
wr(s->u,105,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb6b8_32:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6b8_33:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,151,4)));
L_1803eb6b8_34:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6b8_35:;
wr(s->u,118,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb6b8_36:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6b8_37:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,155,4)));
L_1803eb6b8_38:;
wr(s->r,4740,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6b8_39:;
wr(s->u,83,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x0))));
L_1803eb6b8_40:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6b8_41:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,127,4)));
L_1803eb6b8_42:;
wr(s->u,92,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x1))));
L_1803eb6b8_43:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6b8_44:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,131,4)));
L_1803eb6b8_45:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6b8_46:;
wr(s->u,105,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x2))));
L_1803eb6b8_47:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6b8_48:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,135,4)));
L_1803eb6b8_49:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6b8_50:;
wr(s->u,118,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x3))));
L_1803eb6b8_51:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6b8_52:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,139,4)));
L_1803eb6b8_53:;
wr(s->r,4744,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6b8_54:;
wr(s->u,83,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803eb6b8_55:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6b8_56:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,127,4)));
L_1803eb6b8_57:;
wr(s->u,92,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803eb6b8_58:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6b8_59:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,131,4)));
L_1803eb6b8_60:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6b8_61:;
wr(s->u,105,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803eb6b8_62:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6b8_63:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,135,4)));
L_1803eb6b8_64:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6b8_65:;
wr(s->u,118,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803eb6b8_66:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6b8_67:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,139,4)));
L_1803eb6b8_68:;
wr(s->r,4748,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6b8_69:;
/* 1803eb6bc: mulps xmm3, xmm1 */
L_1803eb6bc_0:;
L_1803eb6bc_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803eb6bc_2:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)*fv(rd(s->r,4676,4),4),4));
L_1803eb6bc_3:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)*fv(rd(s->r,4680,4),4),4));
L_1803eb6bc_4:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)*fv(rd(s->r,4684,4),4),4));
L_1803eb6bc_5:;
/* 1803eb6bf: mulps xmm2, xmm1 */
L_1803eb6bf_0:;
L_1803eb6bf_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803eb6bf_2:;
wr(s->r,4740,4,fb(fv(rd(s->r,4740,4),4)*fv(rd(s->r,4676,4),4),4));
L_1803eb6bf_3:;
wr(s->r,4744,4,fb(fv(rd(s->r,4744,4),4)*fv(rd(s->r,4680,4),4),4));
L_1803eb6bf_4:;
wr(s->r,4748,4,fb(fv(rd(s->r,4748,4),4)*fv(rd(s->r,4684,4),4),4));
L_1803eb6bf_5:;
/* 1803eb6c2: movaps xmm0, xmm3 */
L_1803eb6c2_0:;
L_1803eb6c2_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803eb6c2_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803eb6c2_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803eb6c2_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803eb6c2_5:;
/* 1803eb6c5: shufps xmm0, xmm3, 0xb1 */
L_1803eb6c5_0:;
L_1803eb6c5_1:;
wr(s->u,127,4,rd(s->r,4800,4));
L_1803eb6c5_2:;
wr(s->u,131,4,rd(s->r,4804,4));
L_1803eb6c5_3:;
wr(s->u,135,4,rd(s->r,4808,4));
L_1803eb6c5_4:;
wr(s->u,139,4,rd(s->r,4812,4));
L_1803eb6c5_5:;
wr(s->u,143,4,rd(s->r,4608,4));
L_1803eb6c5_6:;
wr(s->u,147,4,rd(s->r,4612,4));
L_1803eb6c5_7:;
wr(s->u,151,4,rd(s->r,4616,4));
L_1803eb6c5_8:;
wr(s->u,155,4,rd(s->r,4620,4));
L_1803eb6c5_9:;
wr(s->u,83,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x0))));
L_1803eb6c5_10:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6c5_11:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,143,4)));
L_1803eb6c5_12:;
wr(s->u,92,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x1))));
L_1803eb6c5_13:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6c5_14:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,147,4)));
L_1803eb6c5_15:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6c5_16:;
wr(s->u,105,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x2))));
L_1803eb6c5_17:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6c5_18:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,151,4)));
L_1803eb6c5_19:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6c5_20:;
wr(s->u,118,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x3))));
L_1803eb6c5_21:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6c5_22:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,155,4)));
L_1803eb6c5_23:;
wr(s->r,4608,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6c5_24:;
wr(s->u,83,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb6c5_25:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6c5_26:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,143,4)));
L_1803eb6c5_27:;
wr(s->u,92,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb6c5_28:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6c5_29:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,147,4)));
L_1803eb6c5_30:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6c5_31:;
wr(s->u,105,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb6c5_32:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6c5_33:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,151,4)));
L_1803eb6c5_34:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6c5_35:;
wr(s->u,118,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb6c5_36:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6c5_37:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,155,4)));
L_1803eb6c5_38:;
wr(s->r,4612,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6c5_39:;
wr(s->u,83,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x0))));
L_1803eb6c5_40:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6c5_41:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,127,4)));
L_1803eb6c5_42:;
wr(s->u,92,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x1))));
L_1803eb6c5_43:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6c5_44:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,131,4)));
L_1803eb6c5_45:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6c5_46:;
wr(s->u,105,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x2))));
L_1803eb6c5_47:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6c5_48:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,135,4)));
L_1803eb6c5_49:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6c5_50:;
wr(s->u,118,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x3))));
L_1803eb6c5_51:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6c5_52:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,139,4)));
L_1803eb6c5_53:;
wr(s->r,4616,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6c5_54:;
wr(s->u,83,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803eb6c5_55:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6c5_56:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,127,4)));
L_1803eb6c5_57:;
wr(s->u,92,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803eb6c5_58:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6c5_59:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,131,4)));
L_1803eb6c5_60:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6c5_61:;
wr(s->u,105,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803eb6c5_62:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6c5_63:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,135,4)));
L_1803eb6c5_64:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6c5_65:;
wr(s->u,118,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803eb6c5_66:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6c5_67:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,139,4)));
L_1803eb6c5_68:;
wr(s->r,4620,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6c5_69:;
/* 1803eb6c9: subps xmm3, xmm0 */
L_1803eb6c9_0:;
L_1803eb6c9_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803eb6c9_2:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)-fv(rd(s->r,4612,4),4),4));
L_1803eb6c9_3:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)-fv(rd(s->r,4616,4),4),4));
L_1803eb6c9_4:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)-fv(rd(s->r,4620,4),4),4));
L_1803eb6c9_5:;
/* 1803eb6cc: movaps xmm0, xmm2 */
L_1803eb6cc_0:;
L_1803eb6cc_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803eb6cc_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803eb6cc_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803eb6cc_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803eb6cc_5:;
/* 1803eb6cf: shufps xmm0, xmm2, 0xb1 */
L_1803eb6cf_0:;
L_1803eb6cf_1:;
wr(s->u,127,4,rd(s->r,4736,4));
L_1803eb6cf_2:;
wr(s->u,131,4,rd(s->r,4740,4));
L_1803eb6cf_3:;
wr(s->u,135,4,rd(s->r,4744,4));
L_1803eb6cf_4:;
wr(s->u,139,4,rd(s->r,4748,4));
L_1803eb6cf_5:;
wr(s->u,143,4,rd(s->r,4608,4));
L_1803eb6cf_6:;
wr(s->u,147,4,rd(s->r,4612,4));
L_1803eb6cf_7:;
wr(s->u,151,4,rd(s->r,4616,4));
L_1803eb6cf_8:;
wr(s->u,155,4,rd(s->r,4620,4));
L_1803eb6cf_9:;
wr(s->u,83,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x0))));
L_1803eb6cf_10:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6cf_11:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,143,4)));
L_1803eb6cf_12:;
wr(s->u,92,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x1))));
L_1803eb6cf_13:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6cf_14:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,147,4)));
L_1803eb6cf_15:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6cf_16:;
wr(s->u,105,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x2))));
L_1803eb6cf_17:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6cf_18:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,151,4)));
L_1803eb6cf_19:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6cf_20:;
wr(s->u,118,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x3))));
L_1803eb6cf_21:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6cf_22:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,155,4)));
L_1803eb6cf_23:;
wr(s->r,4608,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6cf_24:;
wr(s->u,83,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb6cf_25:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6cf_26:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,143,4)));
L_1803eb6cf_27:;
wr(s->u,92,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb6cf_28:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6cf_29:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,147,4)));
L_1803eb6cf_30:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6cf_31:;
wr(s->u,105,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb6cf_32:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6cf_33:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,151,4)));
L_1803eb6cf_34:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6cf_35:;
wr(s->u,118,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb6cf_36:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6cf_37:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,155,4)));
L_1803eb6cf_38:;
wr(s->r,4612,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6cf_39:;
wr(s->u,83,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x0))));
L_1803eb6cf_40:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6cf_41:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,127,4)));
L_1803eb6cf_42:;
wr(s->u,92,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x1))));
L_1803eb6cf_43:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6cf_44:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,131,4)));
L_1803eb6cf_45:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6cf_46:;
wr(s->u,105,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x2))));
L_1803eb6cf_47:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6cf_48:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,135,4)));
L_1803eb6cf_49:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6cf_50:;
wr(s->u,118,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x3))));
L_1803eb6cf_51:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6cf_52:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,139,4)));
L_1803eb6cf_53:;
wr(s->r,4616,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6cf_54:;
wr(s->u,83,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803eb6cf_55:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6cf_56:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,127,4)));
L_1803eb6cf_57:;
wr(s->u,92,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803eb6cf_58:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6cf_59:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,131,4)));
L_1803eb6cf_60:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6cf_61:;
wr(s->u,105,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803eb6cf_62:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6cf_63:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,135,4)));
L_1803eb6cf_64:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6cf_65:;
wr(s->u,118,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803eb6cf_66:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6cf_67:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,139,4)));
L_1803eb6cf_68:;
wr(s->r,4620,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6cf_69:;
/* 1803eb6d3: addps xmm0, xmm2 */
L_1803eb6d3_0:;
L_1803eb6d3_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803eb6d3_2:;
wr(s->r,4612,4,fb(fv(rd(s->r,4612,4),4)+fv(rd(s->r,4740,4),4),4));
L_1803eb6d3_3:;
wr(s->r,4616,4,fb(fv(rd(s->r,4616,4),4)+fv(rd(s->r,4744,4),4),4));
L_1803eb6d3_4:;
wr(s->r,4620,4,fb(fv(rd(s->r,4620,4),4)+fv(rd(s->r,4748,4),4),4));
L_1803eb6d3_5:;
/* 1803eb6d6: shufps xmm3, xmm0, 0x88 */
L_1803eb6d6_0:;
L_1803eb6d6_1:;
wr(s->u,127,4,rd(s->r,4608,4));
L_1803eb6d6_2:;
wr(s->u,131,4,rd(s->r,4612,4));
L_1803eb6d6_3:;
wr(s->u,135,4,rd(s->r,4616,4));
L_1803eb6d6_4:;
wr(s->u,139,4,rd(s->r,4620,4));
L_1803eb6d6_5:;
wr(s->u,143,4,rd(s->r,4800,4));
L_1803eb6d6_6:;
wr(s->u,147,4,rd(s->r,4804,4));
L_1803eb6d6_7:;
wr(s->u,151,4,rd(s->r,4808,4));
L_1803eb6d6_8:;
wr(s->u,155,4,rd(s->r,4812,4));
L_1803eb6d6_9:;
wr(s->u,83,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb6d6_10:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6d6_11:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,143,4)));
L_1803eb6d6_12:;
wr(s->u,92,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb6d6_13:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6d6_14:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,147,4)));
L_1803eb6d6_15:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6d6_16:;
wr(s->u,105,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb6d6_17:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6d6_18:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,151,4)));
L_1803eb6d6_19:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6d6_20:;
wr(s->u,118,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb6d6_21:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6d6_22:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,155,4)));
L_1803eb6d6_23:;
wr(s->r,4800,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6d6_24:;
wr(s->u,83,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803eb6d6_25:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6d6_26:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,143,4)));
L_1803eb6d6_27:;
wr(s->u,92,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803eb6d6_28:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6d6_29:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,147,4)));
L_1803eb6d6_30:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6d6_31:;
wr(s->u,105,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803eb6d6_32:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6d6_33:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,151,4)));
L_1803eb6d6_34:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6d6_35:;
wr(s->u,118,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803eb6d6_36:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6d6_37:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,155,4)));
L_1803eb6d6_38:;
wr(s->r,4804,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6d6_39:;
wr(s->u,83,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb6d6_40:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6d6_41:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,127,4)));
L_1803eb6d6_42:;
wr(s->u,92,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb6d6_43:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6d6_44:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,131,4)));
L_1803eb6d6_45:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6d6_46:;
wr(s->u,105,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb6d6_47:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6d6_48:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,135,4)));
L_1803eb6d6_49:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6d6_50:;
wr(s->u,118,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb6d6_51:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6d6_52:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,139,4)));
L_1803eb6d6_53:;
wr(s->r,4808,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6d6_54:;
wr(s->u,83,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803eb6d6_55:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6d6_56:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,127,4)));
L_1803eb6d6_57:;
wr(s->u,92,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803eb6d6_58:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6d6_59:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,131,4)));
L_1803eb6d6_60:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6d6_61:;
wr(s->u,105,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803eb6d6_62:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6d6_63:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,135,4)));
L_1803eb6d6_64:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6d6_65:;
wr(s->u,118,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803eb6d6_66:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6d6_67:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,139,4)));
L_1803eb6d6_68:;
wr(s->r,4812,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6d6_69:;
/* 1803eb6da: shufps xmm3, xmm3, 0xd8 */
L_1803eb6da_0:;
L_1803eb6da_1:;
wr(s->u,127,4,rd(s->r,4800,4));
L_1803eb6da_2:;
wr(s->u,131,4,rd(s->r,4804,4));
L_1803eb6da_3:;
wr(s->u,135,4,rd(s->r,4808,4));
L_1803eb6da_4:;
wr(s->u,139,4,rd(s->r,4812,4));
L_1803eb6da_5:;
wr(s->u,143,4,rd(s->r,4800,4));
L_1803eb6da_6:;
wr(s->u,147,4,rd(s->r,4804,4));
L_1803eb6da_7:;
wr(s->u,151,4,rd(s->r,4808,4));
L_1803eb6da_8:;
wr(s->u,155,4,rd(s->r,4812,4));
L_1803eb6da_9:;
wr(s->u,83,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb6da_10:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6da_11:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,143,4)));
L_1803eb6da_12:;
wr(s->u,92,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb6da_13:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6da_14:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,147,4)));
L_1803eb6da_15:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6da_16:;
wr(s->u,105,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb6da_17:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6da_18:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,151,4)));
L_1803eb6da_19:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6da_20:;
wr(s->u,118,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb6da_21:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6da_22:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,155,4)));
L_1803eb6da_23:;
wr(s->r,4800,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6da_24:;
wr(s->u,83,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803eb6da_25:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6da_26:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,143,4)));
L_1803eb6da_27:;
wr(s->u,92,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803eb6da_28:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6da_29:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,147,4)));
L_1803eb6da_30:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6da_31:;
wr(s->u,105,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803eb6da_32:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6da_33:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,151,4)));
L_1803eb6da_34:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6da_35:;
wr(s->u,118,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803eb6da_36:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6da_37:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,155,4)));
L_1803eb6da_38:;
wr(s->r,4804,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6da_39:;
wr(s->u,83,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x0))));
L_1803eb6da_40:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6da_41:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,127,4)));
L_1803eb6da_42:;
wr(s->u,92,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x1))));
L_1803eb6da_43:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6da_44:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,131,4)));
L_1803eb6da_45:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6da_46:;
wr(s->u,105,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x2))));
L_1803eb6da_47:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6da_48:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,135,4)));
L_1803eb6da_49:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6da_50:;
wr(s->u,118,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x3))));
L_1803eb6da_51:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6da_52:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,139,4)));
L_1803eb6da_53:;
wr(s->r,4808,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6da_54:;
wr(s->u,83,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x0))));
L_1803eb6da_55:;
wr(s->u,84,4,rd(s->u,83,1));
L_1803eb6da_56:;
wr(s->u,88,4,(rd(s->u,84,4)*rd(s->u,127,4)));
L_1803eb6da_57:;
wr(s->u,92,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x1))));
L_1803eb6da_58:;
wr(s->u,93,4,rd(s->u,92,1));
L_1803eb6da_59:;
wr(s->u,97,4,(rd(s->u,93,4)*rd(s->u,131,4)));
L_1803eb6da_60:;
wr(s->u,101,4,(rd(s->u,88,4)+rd(s->u,97,4)));
L_1803eb6da_61:;
wr(s->u,105,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x2))));
L_1803eb6da_62:;
wr(s->u,106,4,rd(s->u,105,1));
L_1803eb6da_63:;
wr(s->u,110,4,(rd(s->u,106,4)*rd(s->u,135,4)));
L_1803eb6da_64:;
wr(s->u,114,4,(rd(s->u,101,4)+rd(s->u,110,4)));
L_1803eb6da_65:;
wr(s->u,118,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x3))));
L_1803eb6da_66:;
wr(s->u,119,4,rd(s->u,118,1));
L_1803eb6da_67:;
wr(s->u,123,4,(rd(s->u,119,4)*rd(s->u,139,4)));
L_1803eb6da_68:;
wr(s->r,4812,4,(rd(s->u,114,4)+rd(s->u,123,4)));
L_1803eb6da_69:;
/* 1803eb6de: addps xmm3, xmmword ptr [r9 - 0x10] */
L_1803eb6de_0:;
L_1803eb6de_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb6de_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803eb6de_3:;
wr(s->u,51,16,rd(s->u,24,16));
L_1803eb6de_4:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->u,51,4),4),4));
L_1803eb6de_5:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)+fv(rd(s->u,55,4),4),4));
L_1803eb6de_6:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)+fv(rd(s->u,59,4),4),4));
L_1803eb6de_7:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)+fv(rd(s->u,63,4),4),4));
L_1803eb6de_8:;
/* 1803eb6e3: movaps xmmword ptr [r9 - 0x10], xmm3 */
L_1803eb6e3_0:;
L_1803eb6e3_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb6e3_2:;
wr(s->u,24,16,rd(s->r,4800,16));
L_1803eb6e3_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,24,16));
L_1803eb6e3_4:;
/* 1803eb6e8: jne 0x1803eb6a0 */
L_1803eb6e8_0:;
L_1803eb6e8_1:;
wr(s->u,40,1,(!rd(s->r,518,1)));
L_1803eb6e8_2:;
if(rd(s->u,40,1)){goto L_1803eb6a0_0;}
L_1803eb6e8_3:;
return UINT64_C(0x1803eb6ea);
}
uint64_t b_1803eb6ea(CPU*s){
/* 1803eb6ea: repz ret  */
L_1803eb6ea_0:;
L_1803eb6ea_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb6ea_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb6ea_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb6ea_4:;
return UINT64_C(0x1803eb6ec);
}
uint64_t b_1803eb6f0(CPU*s){
/* 1803eb6f0: mov qword ptr [rsp + 8], rbx */
L_1803eb6f0_0:;
L_1803eb6f0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803eb6f0_2:;
wr(s->u,20,8,rd(s->r,24,8));
L_1803eb6f0_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803eb6f0_4:;
/* 1803eb6f5: push rdi */
L_1803eb6f5_0:;
L_1803eb6f5_1:;
wr(s->u,44,8,rd(s->r,56,8));
L_1803eb6f5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb6f5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,44,8));
L_1803eb6f5_4:;
/* 1803eb6f6: sub rsp, 0x30 */
L_1803eb6f6_0:;
L_1803eb6f6_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803eb6f6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803eb6f6_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803eb6f6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb6f6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb6f6_6:;
wr(s->u,52,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb6f6_7:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803eb6f6_8:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803eb6f6_9:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803eb6f6_10:;
/* 1803eb6fa: mov rdi, rdx */
L_1803eb6fa_0:;
L_1803eb6fa_1:;
wr(s->r,56,8,rd(s->r,16,8));
L_1803eb6fa_2:;
/* 1803eb6fd: mov rbx, rcx */
L_1803eb6fd_0:;
L_1803eb6fd_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803eb6fd_2:;
/* 1803eb700: movaps xmmword ptr [rsp + 0x20], xmm6 */
L_1803eb700_0:;
L_1803eb700_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803eb700_2:;
wr(s->u,28,16,rd(s->r,4992,16));
L_1803eb700_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,28,16));
L_1803eb700_4:;
/* 1803eb705: movss xmm6, dword ptr [rdx + 4] */
L_1803eb705_0:;
L_1803eb705_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803eb705_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb705_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803eb705_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803eb705_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803eb705_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803eb705_7:;
/* 1803eb70a: mov dword ptr [rdx + 4], 0 */
L_1803eb70a_0:;
L_1803eb70a_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803eb70a_2:;
wr(s->u,16,4,((U)UINT64_C(0x0)));
L_1803eb70a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803eb70a_4:;
/* 1803eb711: mov rdx, rcx */
L_1803eb711_0:;
L_1803eb711_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1803eb711_2:;
/* 1803eb714: mov rcx, rdi */
L_1803eb714_0:;
L_1803eb714_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803eb714_2:;
/* 1803eb717: call 0x1803fd538 */
L_1803eb717_0:;
L_1803eb717_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb717_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eb71c)));
L_1803eb717_3:;
return (uint64_t)UINT64_C(0x1803fd538);
L_1803eb717_4:;
return UINT64_C(0x1803eb71c);
}
uint64_t b_1803eb71c(CPU*s){
/* 1803eb71c: cmp rbx, rdi */
L_1803eb71c_0:;
L_1803eb71c_1:;
wr(s->u,10,8,rd(s->r,56,8));
L_1803eb71c_2:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->u,10,8)));
L_1803eb71c_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->u,10,8),8,1));
L_1803eb71c_4:;
wr(s->u,18,8,(rd(s->r,24,8)-rd(s->u,10,8)));
L_1803eb71c_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb71c_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803eb71c_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803eb71c_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803eb71c_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803eb71c_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803eb71c_11:;
/* 1803eb71f: je 0x1803eb726 */
L_1803eb71f_0:;
L_1803eb71f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803eb726);}
L_1803eb71f_2:;
return UINT64_C(0x1803eb721);
}
uint64_t b_1803eb721(CPU*s){
/* 1803eb721: movss dword ptr [rdi + 4], xmm6 */
L_1803eb721_0:;
L_1803eb721_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x4))));
L_1803eb721_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803eb721_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803eb721_4:;
/* 1803eb726: mov rbx, qword ptr [rsp + 0x40] */
L_1803eb726_0:;
L_1803eb726_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803eb726_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803eb726_3:;
wr(s->r,24,8,rd(s->u,36,8));
L_1803eb726_4:;
/* 1803eb72b: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803eb72b_0:;
L_1803eb72b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803eb72b_2:;
wr(s->u,20,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803eb72b_3:;
wr(s->u,62,16,rd(s->u,20,16));
L_1803eb72b_4:;
wr(s->r,4992,4,rd(s->u,62,4));
L_1803eb72b_5:;
wr(s->r,4996,4,rd(s->u,66,4));
L_1803eb72b_6:;
wr(s->r,5000,4,rd(s->u,70,4));
L_1803eb72b_7:;
wr(s->r,5004,4,rd(s->u,74,4));
L_1803eb72b_8:;
/* 1803eb730: add rsp, 0x30 */
L_1803eb730_0:;
L_1803eb730_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb730_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803eb730_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803eb730_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb730_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb730_6:;
wr(s->u,44,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb730_7:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803eb730_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803eb730_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803eb730_10:;
/* 1803eb734: pop rdi */
L_1803eb734_0:;
L_1803eb734_1:;
wr(s->u,54,8,((U)UINT64_C(0x0)));
L_1803eb734_2:;
wr(s->u,54,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb734_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb734_4:;
wr(s->r,56,8,rd(s->u,54,8));
L_1803eb734_5:;
/* 1803eb735: ret  */
L_1803eb735_0:;
L_1803eb735_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb735_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb735_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb735_4:;
return UINT64_C(0x1803eb736);
}
uint64_t b_1803eb726(CPU*s){
/* 1803eb726: mov rbx, qword ptr [rsp + 0x40] */
L_1803eb726_0:;
L_1803eb726_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803eb726_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb726_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803eb726_4:;
/* 1803eb72b: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803eb72b_0:;
L_1803eb72b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803eb72b_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803eb72b_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803eb72b_4:;
wr(s->r,4992,4,rd(s->u,50,4));
L_1803eb72b_5:;
wr(s->r,4996,4,rd(s->u,54,4));
L_1803eb72b_6:;
wr(s->r,5000,4,rd(s->u,58,4));
L_1803eb72b_7:;
wr(s->r,5004,4,rd(s->u,62,4));
L_1803eb72b_8:;
/* 1803eb730: add rsp, 0x30 */
L_1803eb730_0:;
L_1803eb730_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb730_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803eb730_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803eb730_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb730_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb730_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb730_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803eb730_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803eb730_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803eb730_10:;
/* 1803eb734: pop rdi */
L_1803eb734_0:;
L_1803eb734_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803eb734_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb734_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb734_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803eb734_5:;
/* 1803eb735: ret  */
L_1803eb735_0:;
L_1803eb735_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb735_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb735_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb735_4:;
return UINT64_C(0x1803eb736);
}
uint64_t b_1803eb7a0(CPU*s){
/* 1803eb7a0: test r8d, r8d */
L_1803eb7a0_0:;
L_1803eb7a0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803eb7a0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eb7a0_3:;
wr(s->u,8,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803eb7a0_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb7a0_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803eb7a0_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803eb7a0_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803eb7a0_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803eb7a0_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803eb7a0_10:;
/* 1803eb7a3: jle 0x1803eb84c */
L_1803eb7a3_0:;
L_1803eb7a3_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803eb7a3_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803eb7a3_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803eb84c);}
L_1803eb7a3_4:;
return UINT64_C(0x1803eb7a9);
}
uint64_t b_1803eb7a9(CPU*s){
/* 1803eb7a9: sub rsp, 0x38 */
L_1803eb7a9_0:;
L_1803eb7a9_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x38))));
L_1803eb7a9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,1));
L_1803eb7a9_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x38))));
L_1803eb7a9_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb7a9_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb7a9_6:;
wr(s->u,45,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb7a9_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803eb7a9_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803eb7a9_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803eb7a9_10:;
/* 1803eb7ad: movss xmm4, dword ptr [rip + 0x26fd57] */
L_1803eb7ad_0:;
L_1803eb7ad_1:;
wr(s->r,4864,4,mr(UINT64_C(0x18065b50c),4));
L_1803eb7ad_2:;
wr(s->r,4868,4,((U)UINT64_C(0x0)));
L_1803eb7ad_3:;
wr(s->r,4872,4,((U)UINT64_C(0x0)));
L_1803eb7ad_4:;
wr(s->r,4876,4,((U)UINT64_C(0x0)));
L_1803eb7ad_5:;
/* 1803eb7b5: movss xmm5, dword ptr [rip + 0x42119b] */
L_1803eb7b5_0:;
L_1803eb7b5_1:;
wr(s->r,4928,4,mr(UINT64_C(0x18080c958),4));
L_1803eb7b5_2:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803eb7b5_3:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803eb7b5_4:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803eb7b5_5:;
/* 1803eb7bd: movaps xmmword ptr [rsp + 0x20], xmm6 */
L_1803eb7bd_0:;
L_1803eb7bd_1:;
wr(s->u,21,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803eb7bd_2:;
wr(s->u,29,16,rd(s->r,4992,16));
L_1803eb7bd_3:;
mw((uint64_t)rd(s->u,21,8),16,rd(s->u,29,16));
L_1803eb7bd_4:;
/* 1803eb7c2: movaps xmmword ptr [rsp + 0x10], xmm7 */
L_1803eb7c2_0:;
L_1803eb7c2_1:;
wr(s->u,21,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803eb7c2_2:;
wr(s->u,29,16,rd(s->r,5056,16));
L_1803eb7c2_3:;
mw((uint64_t)rd(s->u,21,8),16,rd(s->u,29,16));
L_1803eb7c2_4:;
/* 1803eb7c7: dec r8d */
L_1803eb7c7_0:;
L_1803eb7c7_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x1)),4,1));
L_1803eb7c7_2:;
wr(s->r,128,4,(rd(s->r,128,4)-((U)UINT64_C(0x1))));
L_1803eb7c7_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803eb7c7_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb7c7_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803eb7c7_6:;
wr(s->u,45,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803eb7c7_7:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803eb7c7_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803eb7c7_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803eb7c7_10:;
/* 1803eb7ca: sub rdx, rcx */
L_1803eb7ca_0:;
L_1803eb7ca_1:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->r,8,8)));
L_1803eb7ca_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->r,8,8),8,1));
L_1803eb7ca_3:;
wr(s->r,16,8,(rd(s->r,16,8)-rd(s->r,8,8)));
L_1803eb7ca_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb7ca_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803eb7ca_6:;
wr(s->u,45,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803eb7ca_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803eb7ca_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803eb7ca_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803eb7ca_10:;
/* 1803eb7cd: shr r8d, 2 */
L_1803eb7cd_0:;
L_1803eb7cd_1:;
wr(s->u,90,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803eb7cd_2:;
wr(s->u,94,4,rd(s->r,128,4));
L_1803eb7cd_3:;
wr(s->r,128,4,((rd(s->u,90,4)>=32)?0:(rd(s->r,128,4)>>rd(s->u,90,4))));
L_1803eb7cd_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803eb7cd_5:;
wr(s->u,74,1,(rd(s->u,90,4)==((U)UINT64_C(0x0))));
L_1803eb7cd_6:;
wr(s->u,75,4,(rd(s->u,90,4)-((U)UINT64_C(0x1))));
L_1803eb7cd_7:;
wr(s->u,79,4,((rd(s->u,75,4)>=32)?0:(rd(s->u,94,4)>>rd(s->u,75,4))));
L_1803eb7cd_8:;
wr(s->u,83,4,(rd(s->u,79,4)&((U)UINT64_C(0x1))));
L_1803eb7cd_9:;
wr(s->u,87,1,(rd(s->u,83,4)!=((U)UINT64_C(0x0))));
L_1803eb7cd_10:;
wr(s->u,0,1,rd(s->u,74,1));
L_1803eb7cd_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803eb7cd_12:;
wr(s->u,2,1,(!rd(s->u,74,1)));
L_1803eb7cd_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803eb7cd_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,87,1)));
L_1803eb7cd_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803eb7cd_16:;
wr(s->u,88,1,(rd(s->u,90,4)==((U)UINT64_C(0x1))));
L_1803eb7cd_17:;
wr(s->u,89,1,(sx(rd(s->u,94,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb7cd_18:;
wr(s->u,0,1,rd(s->u,88,1));
L_1803eb7cd_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803eb7cd_20:;
wr(s->u,2,1,(!rd(s->u,88,1)));
L_1803eb7cd_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803eb7cd_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,89,1)));
L_1803eb7cd_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803eb7cd_24:;
wr(s->u,55,1,(rd(s->u,90,4)!=((U)UINT64_C(0x0))));
L_1803eb7cd_25:;
wr(s->u,56,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb7cd_26:;
wr(s->u,57,1,(!rd(s->u,55,1)));
L_1803eb7cd_27:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,519,1)));
L_1803eb7cd_28:;
wr(s->u,59,1,(rd(s->u,55,1)&rd(s->u,56,1)));
L_1803eb7cd_29:;
wr(s->r,519,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803eb7cd_30:;
wr(s->u,60,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803eb7cd_31:;
wr(s->u,61,1,(!rd(s->u,55,1)));
L_1803eb7cd_32:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,518,1)));
L_1803eb7cd_33:;
wr(s->u,63,1,(rd(s->u,55,1)&rd(s->u,60,1)));
L_1803eb7cd_34:;
wr(s->r,518,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803eb7cd_35:;
wr(s->u,64,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803eb7cd_36:;
wr(s->u,68,1,pop(rd(s->u,64,4),4));
L_1803eb7cd_37:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803eb7cd_38:;
wr(s->u,70,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803eb7cd_39:;
wr(s->u,71,1,(!rd(s->u,55,1)));
L_1803eb7cd_40:;
wr(s->u,72,1,(rd(s->u,71,1)&rd(s->r,514,1)));
L_1803eb7cd_41:;
wr(s->u,73,1,(rd(s->u,55,1)&rd(s->u,70,1)));
L_1803eb7cd_42:;
wr(s->r,514,1,(rd(s->u,72,1)|rd(s->u,73,1)));
L_1803eb7cd_43:;
/* 1803eb7d1: inc r8d */
L_1803eb7d1_0:;
L_1803eb7d1_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x1)),4,0));
L_1803eb7d1_2:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0x1))));
L_1803eb7d1_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803eb7d1_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb7d1_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803eb7d1_6:;
wr(s->u,45,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803eb7d1_7:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803eb7d1_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803eb7d1_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803eb7d1_10:;
/* 1803eb7d4: movss xmm7, dword ptr [rip + 0x264cf4] */
L_1803eb7d4_0:;
L_1803eb7d4_1:;
wr(s->r,5056,4,mr(UINT64_C(0x1806504d0),4));
L_1803eb7d4_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803eb7d4_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803eb7d4_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803eb7d4_5:;
/* 1803eb7dc: movss xmm6, dword ptr [rip + 0x421178] */
L_1803eb7dc_0:;
L_1803eb7dc_1:;
wr(s->r,4992,4,mr(UINT64_C(0x18080c95c),4));
L_1803eb7dc_2:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803eb7dc_3:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803eb7dc_4:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803eb7dc_5:;
/* 1803eb7e4: movaps xmmword ptr [rsp], xmm8 */
L_1803eb7e4_0:;
L_1803eb7e4_1:;
wr(s->u,29,16,rd(s->r,5120,16));
L_1803eb7e4_2:;
mw((uint64_t)rd(s->r,32,8),16,rd(s->u,29,16));
L_1803eb7e4_3:;
/* 1803eb7e9: shufps xmm4, xmm4, 0 */
L_1803eb7e9_0:;
L_1803eb7e9_1:;
wr(s->u,178,4,rd(s->r,4864,4));
L_1803eb7e9_2:;
wr(s->u,182,4,rd(s->r,4868,4));
L_1803eb7e9_3:;
wr(s->u,186,4,rd(s->r,4872,4));
L_1803eb7e9_4:;
wr(s->u,190,4,rd(s->r,4876,4));
L_1803eb7e9_5:;
wr(s->u,194,4,rd(s->r,4864,4));
L_1803eb7e9_6:;
wr(s->u,198,4,rd(s->r,4868,4));
L_1803eb7e9_7:;
wr(s->u,202,4,rd(s->r,4872,4));
L_1803eb7e9_8:;
wr(s->u,206,4,rd(s->r,4876,4));
L_1803eb7e9_9:;
wr(s->u,134,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7e9_10:;
wr(s->u,135,4,rd(s->u,134,1));
L_1803eb7e9_11:;
wr(s->u,139,4,(rd(s->u,135,4)*rd(s->u,194,4)));
L_1803eb7e9_12:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7e9_13:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7e9_14:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,198,4)));
L_1803eb7e9_15:;
wr(s->u,152,4,(rd(s->u,139,4)+rd(s->u,148,4)));
L_1803eb7e9_16:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7e9_17:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb7e9_18:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,202,4)));
L_1803eb7e9_19:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb7e9_20:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7e9_21:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb7e9_22:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,206,4)));
L_1803eb7e9_23:;
wr(s->r,4864,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb7e9_24:;
wr(s->u,134,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7e9_25:;
wr(s->u,135,4,rd(s->u,134,1));
L_1803eb7e9_26:;
wr(s->u,139,4,(rd(s->u,135,4)*rd(s->u,194,4)));
L_1803eb7e9_27:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7e9_28:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7e9_29:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,198,4)));
L_1803eb7e9_30:;
wr(s->u,152,4,(rd(s->u,139,4)+rd(s->u,148,4)));
L_1803eb7e9_31:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7e9_32:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb7e9_33:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,202,4)));
L_1803eb7e9_34:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb7e9_35:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7e9_36:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb7e9_37:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,206,4)));
L_1803eb7e9_38:;
wr(s->r,4868,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb7e9_39:;
wr(s->u,134,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7e9_40:;
wr(s->u,135,4,rd(s->u,134,1));
L_1803eb7e9_41:;
wr(s->u,139,4,(rd(s->u,135,4)*rd(s->u,178,4)));
L_1803eb7e9_42:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7e9_43:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7e9_44:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,182,4)));
L_1803eb7e9_45:;
wr(s->u,152,4,(rd(s->u,139,4)+rd(s->u,148,4)));
L_1803eb7e9_46:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7e9_47:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb7e9_48:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,186,4)));
L_1803eb7e9_49:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb7e9_50:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7e9_51:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb7e9_52:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,190,4)));
L_1803eb7e9_53:;
wr(s->r,4872,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb7e9_54:;
wr(s->u,134,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7e9_55:;
wr(s->u,135,4,rd(s->u,134,1));
L_1803eb7e9_56:;
wr(s->u,139,4,(rd(s->u,135,4)*rd(s->u,178,4)));
L_1803eb7e9_57:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7e9_58:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7e9_59:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,182,4)));
L_1803eb7e9_60:;
wr(s->u,152,4,(rd(s->u,139,4)+rd(s->u,148,4)));
L_1803eb7e9_61:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7e9_62:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb7e9_63:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,186,4)));
L_1803eb7e9_64:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb7e9_65:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7e9_66:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb7e9_67:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,190,4)));
L_1803eb7e9_68:;
wr(s->r,4876,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb7e9_69:;
/* 1803eb7ed: shufps xmm5, xmm5, 0 */
L_1803eb7ed_0:;
L_1803eb7ed_1:;
wr(s->u,178,4,rd(s->r,4928,4));
L_1803eb7ed_2:;
wr(s->u,182,4,rd(s->r,4932,4));
L_1803eb7ed_3:;
wr(s->u,186,4,rd(s->r,4936,4));
L_1803eb7ed_4:;
wr(s->u,190,4,rd(s->r,4940,4));
L_1803eb7ed_5:;
wr(s->u,194,4,rd(s->r,4928,4));
L_1803eb7ed_6:;
wr(s->u,198,4,rd(s->r,4932,4));
L_1803eb7ed_7:;
wr(s->u,202,4,rd(s->r,4936,4));
L_1803eb7ed_8:;
wr(s->u,206,4,rd(s->r,4940,4));
L_1803eb7ed_9:;
wr(s->u,134,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7ed_10:;
wr(s->u,135,4,rd(s->u,134,1));
L_1803eb7ed_11:;
wr(s->u,139,4,(rd(s->u,135,4)*rd(s->u,194,4)));
L_1803eb7ed_12:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7ed_13:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7ed_14:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,198,4)));
L_1803eb7ed_15:;
wr(s->u,152,4,(rd(s->u,139,4)+rd(s->u,148,4)));
L_1803eb7ed_16:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7ed_17:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb7ed_18:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,202,4)));
L_1803eb7ed_19:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb7ed_20:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7ed_21:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb7ed_22:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,206,4)));
L_1803eb7ed_23:;
wr(s->r,4928,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb7ed_24:;
wr(s->u,134,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7ed_25:;
wr(s->u,135,4,rd(s->u,134,1));
L_1803eb7ed_26:;
wr(s->u,139,4,(rd(s->u,135,4)*rd(s->u,194,4)));
L_1803eb7ed_27:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7ed_28:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7ed_29:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,198,4)));
L_1803eb7ed_30:;
wr(s->u,152,4,(rd(s->u,139,4)+rd(s->u,148,4)));
L_1803eb7ed_31:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7ed_32:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb7ed_33:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,202,4)));
L_1803eb7ed_34:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb7ed_35:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7ed_36:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb7ed_37:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,206,4)));
L_1803eb7ed_38:;
wr(s->r,4932,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb7ed_39:;
wr(s->u,134,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7ed_40:;
wr(s->u,135,4,rd(s->u,134,1));
L_1803eb7ed_41:;
wr(s->u,139,4,(rd(s->u,135,4)*rd(s->u,178,4)));
L_1803eb7ed_42:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7ed_43:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7ed_44:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,182,4)));
L_1803eb7ed_45:;
wr(s->u,152,4,(rd(s->u,139,4)+rd(s->u,148,4)));
L_1803eb7ed_46:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7ed_47:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb7ed_48:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,186,4)));
L_1803eb7ed_49:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb7ed_50:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7ed_51:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb7ed_52:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,190,4)));
L_1803eb7ed_53:;
wr(s->r,4936,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb7ed_54:;
wr(s->u,134,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7ed_55:;
wr(s->u,135,4,rd(s->u,134,1));
L_1803eb7ed_56:;
wr(s->u,139,4,(rd(s->u,135,4)*rd(s->u,178,4)));
L_1803eb7ed_57:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7ed_58:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7ed_59:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,182,4)));
L_1803eb7ed_60:;
wr(s->u,152,4,(rd(s->u,139,4)+rd(s->u,148,4)));
L_1803eb7ed_61:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7ed_62:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb7ed_63:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,186,4)));
L_1803eb7ed_64:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb7ed_65:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7ed_66:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb7ed_67:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,190,4)));
L_1803eb7ed_68:;
wr(s->r,4940,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb7ed_69:;
/* 1803eb7f1: shufps xmm7, xmm7, 0 */
L_1803eb7f1_0:;
L_1803eb7f1_1:;
wr(s->u,178,4,rd(s->r,5056,4));
L_1803eb7f1_2:;
wr(s->u,182,4,rd(s->r,5060,4));
L_1803eb7f1_3:;
wr(s->u,186,4,rd(s->r,5064,4));
L_1803eb7f1_4:;
wr(s->u,190,4,rd(s->r,5068,4));
L_1803eb7f1_5:;
wr(s->u,194,4,rd(s->r,5056,4));
L_1803eb7f1_6:;
wr(s->u,198,4,rd(s->r,5060,4));
L_1803eb7f1_7:;
wr(s->u,202,4,rd(s->r,5064,4));
L_1803eb7f1_8:;
wr(s->u,206,4,rd(s->r,5068,4));
L_1803eb7f1_9:;
wr(s->u,134,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7f1_10:;
wr(s->u,135,4,rd(s->u,134,1));
L_1803eb7f1_11:;
wr(s->u,139,4,(rd(s->u,135,4)*rd(s->u,194,4)));
L_1803eb7f1_12:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7f1_13:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7f1_14:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,198,4)));
L_1803eb7f1_15:;
wr(s->u,152,4,(rd(s->u,139,4)+rd(s->u,148,4)));
L_1803eb7f1_16:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7f1_17:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb7f1_18:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,202,4)));
L_1803eb7f1_19:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb7f1_20:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7f1_21:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb7f1_22:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,206,4)));
L_1803eb7f1_23:;
wr(s->r,5056,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb7f1_24:;
wr(s->u,134,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7f1_25:;
wr(s->u,135,4,rd(s->u,134,1));
L_1803eb7f1_26:;
wr(s->u,139,4,(rd(s->u,135,4)*rd(s->u,194,4)));
L_1803eb7f1_27:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7f1_28:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7f1_29:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,198,4)));
L_1803eb7f1_30:;
wr(s->u,152,4,(rd(s->u,139,4)+rd(s->u,148,4)));
L_1803eb7f1_31:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7f1_32:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb7f1_33:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,202,4)));
L_1803eb7f1_34:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb7f1_35:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7f1_36:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb7f1_37:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,206,4)));
L_1803eb7f1_38:;
wr(s->r,5060,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb7f1_39:;
wr(s->u,134,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7f1_40:;
wr(s->u,135,4,rd(s->u,134,1));
L_1803eb7f1_41:;
wr(s->u,139,4,(rd(s->u,135,4)*rd(s->u,178,4)));
L_1803eb7f1_42:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7f1_43:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7f1_44:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,182,4)));
L_1803eb7f1_45:;
wr(s->u,152,4,(rd(s->u,139,4)+rd(s->u,148,4)));
L_1803eb7f1_46:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7f1_47:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb7f1_48:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,186,4)));
L_1803eb7f1_49:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb7f1_50:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7f1_51:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb7f1_52:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,190,4)));
L_1803eb7f1_53:;
wr(s->r,5064,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb7f1_54:;
wr(s->u,134,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7f1_55:;
wr(s->u,135,4,rd(s->u,134,1));
L_1803eb7f1_56:;
wr(s->u,139,4,(rd(s->u,135,4)*rd(s->u,178,4)));
L_1803eb7f1_57:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7f1_58:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7f1_59:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,182,4)));
L_1803eb7f1_60:;
wr(s->u,152,4,(rd(s->u,139,4)+rd(s->u,148,4)));
L_1803eb7f1_61:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7f1_62:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb7f1_63:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,186,4)));
L_1803eb7f1_64:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb7f1_65:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7f1_66:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb7f1_67:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,190,4)));
L_1803eb7f1_68:;
wr(s->r,5068,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb7f1_69:;
/* 1803eb7f5: shufps xmm6, xmm6, 0 */
L_1803eb7f5_0:;
L_1803eb7f5_1:;
wr(s->u,178,4,rd(s->r,4992,4));
L_1803eb7f5_2:;
wr(s->u,182,4,rd(s->r,4996,4));
L_1803eb7f5_3:;
wr(s->u,186,4,rd(s->r,5000,4));
L_1803eb7f5_4:;
wr(s->u,190,4,rd(s->r,5004,4));
L_1803eb7f5_5:;
wr(s->u,194,4,rd(s->r,4992,4));
L_1803eb7f5_6:;
wr(s->u,198,4,rd(s->r,4996,4));
L_1803eb7f5_7:;
wr(s->u,202,4,rd(s->r,5000,4));
L_1803eb7f5_8:;
wr(s->u,206,4,rd(s->r,5004,4));
L_1803eb7f5_9:;
wr(s->u,134,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7f5_10:;
wr(s->u,135,4,rd(s->u,134,1));
L_1803eb7f5_11:;
wr(s->u,139,4,(rd(s->u,135,4)*rd(s->u,194,4)));
L_1803eb7f5_12:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7f5_13:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7f5_14:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,198,4)));
L_1803eb7f5_15:;
wr(s->u,152,4,(rd(s->u,139,4)+rd(s->u,148,4)));
L_1803eb7f5_16:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7f5_17:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb7f5_18:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,202,4)));
L_1803eb7f5_19:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb7f5_20:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7f5_21:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb7f5_22:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,206,4)));
L_1803eb7f5_23:;
wr(s->r,4992,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb7f5_24:;
wr(s->u,134,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7f5_25:;
wr(s->u,135,4,rd(s->u,134,1));
L_1803eb7f5_26:;
wr(s->u,139,4,(rd(s->u,135,4)*rd(s->u,194,4)));
L_1803eb7f5_27:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7f5_28:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7f5_29:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,198,4)));
L_1803eb7f5_30:;
wr(s->u,152,4,(rd(s->u,139,4)+rd(s->u,148,4)));
L_1803eb7f5_31:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7f5_32:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb7f5_33:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,202,4)));
L_1803eb7f5_34:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb7f5_35:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7f5_36:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb7f5_37:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,206,4)));
L_1803eb7f5_38:;
wr(s->r,4996,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb7f5_39:;
wr(s->u,134,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7f5_40:;
wr(s->u,135,4,rd(s->u,134,1));
L_1803eb7f5_41:;
wr(s->u,139,4,(rd(s->u,135,4)*rd(s->u,178,4)));
L_1803eb7f5_42:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7f5_43:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7f5_44:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,182,4)));
L_1803eb7f5_45:;
wr(s->u,152,4,(rd(s->u,139,4)+rd(s->u,148,4)));
L_1803eb7f5_46:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7f5_47:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb7f5_48:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,186,4)));
L_1803eb7f5_49:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb7f5_50:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7f5_51:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb7f5_52:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,190,4)));
L_1803eb7f5_53:;
wr(s->r,5000,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb7f5_54:;
wr(s->u,134,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7f5_55:;
wr(s->u,135,4,rd(s->u,134,1));
L_1803eb7f5_56:;
wr(s->u,139,4,(rd(s->u,135,4)*rd(s->u,178,4)));
L_1803eb7f5_57:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7f5_58:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7f5_59:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,182,4)));
L_1803eb7f5_60:;
wr(s->u,152,4,(rd(s->u,139,4)+rd(s->u,148,4)));
L_1803eb7f5_61:;
wr(s->u,156,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7f5_62:;
wr(s->u,157,4,rd(s->u,156,1));
L_1803eb7f5_63:;
wr(s->u,161,4,(rd(s->u,157,4)*rd(s->u,186,4)));
L_1803eb7f5_64:;
wr(s->u,165,4,(rd(s->u,152,4)+rd(s->u,161,4)));
L_1803eb7f5_65:;
wr(s->u,169,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7f5_66:;
wr(s->u,170,4,rd(s->u,169,1));
L_1803eb7f5_67:;
wr(s->u,174,4,(rd(s->u,170,4)*rd(s->u,190,4)));
L_1803eb7f5_68:;
wr(s->r,5004,4,(rd(s->u,165,4)+rd(s->u,174,4)));
L_1803eb7f5_69:;
/* 1803eb7f9: xorps xmm8, xmm8 */
L_1803eb7f9_0:;
L_1803eb7f9_1:;
wr(s->r,5120,4,(rd(s->r,5120,4)^rd(s->r,5120,4)));
L_1803eb7f9_2:;
wr(s->r,5124,4,(rd(s->r,5124,4)^rd(s->r,5124,4)));
L_1803eb7f9_3:;
wr(s->r,5128,4,(rd(s->r,5128,4)^rd(s->r,5128,4)));
L_1803eb7f9_4:;
wr(s->r,5132,4,(rd(s->r,5132,4)^rd(s->r,5132,4)));
L_1803eb7f9_5:;
/* 1803eb7fd: nop dword ptr [rax] */
L_1803eb7fd_0:;
L_1803eb7fd_1:;
/* 1803eb800: movaps xmm3, xmmword ptr [rdx + rcx] */
L_1803eb800_0:;
L_1803eb800_1:;
wr(s->u,5,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803eb800_2:;
wr(s->u,13,8,(rd(s->r,16,8)+rd(s->u,5,8)));
L_1803eb800_3:;
wr(s->u,29,16,mr((uint64_t)rd(s->u,13,8),16));
L_1803eb800_4:;
wr(s->u,118,16,rd(s->u,29,16));
L_1803eb800_5:;
wr(s->r,4800,4,rd(s->u,118,4));
L_1803eb800_6:;
wr(s->r,4804,4,rd(s->u,122,4));
L_1803eb800_7:;
wr(s->r,4808,4,rd(s->u,126,4));
L_1803eb800_8:;
wr(s->r,4812,4,rd(s->u,130,4));
L_1803eb800_9:;
/* 1803eb804: add rcx, 0x10 */
L_1803eb804_0:;
L_1803eb804_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803eb804_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x10)),8,0));
L_1803eb804_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803eb804_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb804_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803eb804_6:;
wr(s->u,45,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803eb804_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803eb804_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803eb804_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803eb804_10:;
/* 1803eb808: sub r8, 1 */
L_1803eb808_0:;
L_1803eb808_1:;
wr(s->r,512,1,(rd(s->r,128,8)<((U)UINT64_C(0x1))));
L_1803eb808_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x1)),8,1));
L_1803eb808_3:;
wr(s->r,128,8,(rd(s->r,128,8)-((U)UINT64_C(0x1))));
L_1803eb808_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb808_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803eb808_6:;
wr(s->u,45,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803eb808_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803eb808_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803eb808_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803eb808_10:;
/* 1803eb80c: addps xmm3, xmm4 */
L_1803eb80c_0:;
L_1803eb80c_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803eb80c_2:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)+fv(rd(s->r,4868,4),4),4));
L_1803eb80c_3:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)+fv(rd(s->r,4872,4),4),4));
L_1803eb80c_4:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)+fv(rd(s->r,4876,4),4),4));
L_1803eb80c_5:;
/* 1803eb80f: movaps xmm0, xmm3 */
L_1803eb80f_0:;
L_1803eb80f_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803eb80f_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803eb80f_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803eb80f_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803eb80f_5:;
/* 1803eb812: mulps xmm0, xmm6 */
L_1803eb812_0:;
L_1803eb812_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803eb812_2:;
wr(s->r,4612,4,fb(fv(rd(s->r,4612,4),4)*fv(rd(s->r,4996,4),4),4));
L_1803eb812_3:;
wr(s->r,4616,4,fb(fv(rd(s->r,4616,4),4)*fv(rd(s->r,5000,4),4),4));
L_1803eb812_4:;
wr(s->r,4620,4,fb(fv(rd(s->r,4620,4),4)*fv(rd(s->r,5004,4),4),4));
L_1803eb812_5:;
/* 1803eb815: movaps xmm2, xmm0 */
L_1803eb815_0:;
L_1803eb815_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803eb815_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803eb815_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803eb815_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803eb815_5:;
/* 1803eb818: cvttps2dq xmm0, xmm0 */
L_1803eb818_0:;
L_1803eb818_1:;
wr(s->r,4608,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803eb818_2:;
wr(s->r,4612,4,ftrunc(fv(rd(s->r,4612,4),4),4));
L_1803eb818_3:;
wr(s->r,4616,4,ftrunc(fv(rd(s->r,4616,4),4),4));
L_1803eb818_4:;
wr(s->r,4620,4,ftrunc(fv(rd(s->r,4620,4),4),4));
L_1803eb818_5:;
/* 1803eb81c: cmpltps xmm2, xmm8 */
L_1803eb81c_0:;
L_1803eb81c_1:;
wr(s->r,4480,4,rd(s->r,4736,4));
L_1803eb81c_2:;
wr(s->r,4484,4,rd(s->r,4740,4));
L_1803eb81c_3:;
wr(s->r,4488,4,rd(s->r,4744,4));
L_1803eb81c_4:;
wr(s->r,4492,4,rd(s->r,4748,4));
L_1803eb81c_5:;
wr(s->r,4496,4,rd(s->r,5120,4));
L_1803eb81c_6:;
wr(s->r,4500,4,rd(s->r,5124,4));
L_1803eb81c_7:;
wr(s->r,4504,4,rd(s->r,5128,4));
L_1803eb81c_8:;
wr(s->r,4508,4,rd(s->r,5132,4));
L_1803eb81c_9:;
wr(s->u,98,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803eb81c_10:;
wr(s->u,99,4,rd(s->u,98,1));
L_1803eb81c_11:;
wr(s->r,4480,4,(rd(s->u,99,4)*((U)UINT64_C(0xffffffff))));
L_1803eb81c_12:;
wr(s->u,103,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803eb81c_13:;
wr(s->u,104,4,rd(s->u,103,1));
L_1803eb81c_14:;
wr(s->r,4484,4,(rd(s->u,104,4)*((U)UINT64_C(0xffffffff))));
L_1803eb81c_15:;
wr(s->u,108,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803eb81c_16:;
wr(s->u,109,4,rd(s->u,108,1));
L_1803eb81c_17:;
wr(s->r,4488,4,(rd(s->u,109,4)*((U)UINT64_C(0xffffffff))));
L_1803eb81c_18:;
wr(s->u,113,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803eb81c_19:;
wr(s->u,114,4,rd(s->u,113,1));
L_1803eb81c_20:;
wr(s->r,4492,4,(rd(s->u,114,4)*((U)UINT64_C(0xffffffff))));
L_1803eb81c_21:;
wr(s->r,4736,4,rd(s->r,4480,4));
L_1803eb81c_22:;
wr(s->r,4740,4,rd(s->r,4484,4));
L_1803eb81c_23:;
wr(s->r,4744,4,rd(s->r,4488,4));
L_1803eb81c_24:;
wr(s->r,4748,4,rd(s->r,4492,4));
L_1803eb81c_25:;
/* 1803eb821: cvtdq2ps xmm1, xmm0 */
L_1803eb821_0:;
L_1803eb821_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803eb821_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803eb821_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803eb821_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803eb821_5:;
/* 1803eb824: andps xmm2, xmm7 */
L_1803eb824_0:;
L_1803eb824_1:;
wr(s->r,4736,4,(rd(s->r,4736,4)&rd(s->r,5056,4)));
L_1803eb824_2:;
wr(s->r,4740,4,(rd(s->r,4740,4)&rd(s->r,5060,4)));
L_1803eb824_3:;
wr(s->r,4744,4,(rd(s->r,4744,4)&rd(s->r,5064,4)));
L_1803eb824_4:;
wr(s->r,4748,4,(rd(s->r,4748,4)&rd(s->r,5068,4)));
L_1803eb824_5:;
/* 1803eb827: addps xmm2, xmm1 */
L_1803eb827_0:;
L_1803eb827_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803eb827_2:;
wr(s->r,4740,4,fb(fv(rd(s->r,4740,4),4)+fv(rd(s->r,4676,4),4),4));
L_1803eb827_3:;
wr(s->r,4744,4,fb(fv(rd(s->r,4744,4),4)+fv(rd(s->r,4680,4),4),4));
L_1803eb827_4:;
wr(s->r,4748,4,fb(fv(rd(s->r,4748,4),4)+fv(rd(s->r,4684,4),4),4));
L_1803eb827_5:;
/* 1803eb82a: mulps xmm2, xmm5 */
L_1803eb82a_0:;
L_1803eb82a_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803eb82a_2:;
wr(s->r,4740,4,fb(fv(rd(s->r,4740,4),4)*fv(rd(s->r,4932,4),4),4));
L_1803eb82a_3:;
wr(s->r,4744,4,fb(fv(rd(s->r,4744,4),4)*fv(rd(s->r,4936,4),4),4));
L_1803eb82a_4:;
wr(s->r,4748,4,fb(fv(rd(s->r,4748,4),4)*fv(rd(s->r,4940,4),4),4));
L_1803eb82a_5:;
/* 1803eb82d: subps xmm3, xmm2 */
L_1803eb82d_0:;
L_1803eb82d_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803eb82d_2:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)-fv(rd(s->r,4740,4),4),4));
L_1803eb82d_3:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)-fv(rd(s->r,4744,4),4),4));
L_1803eb82d_4:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)-fv(rd(s->r,4748,4),4),4));
L_1803eb82d_5:;
return UINT64_C(0x1803eb830);
}
uint64_t b_1803eb7c2(CPU*s){
/* 1803eb7c2: movaps xmmword ptr [rsp + 0x10], xmm7 */
L_1803eb7c2_0:;
L_1803eb7c2_1:;
wr(s->u,29,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803eb7c2_2:;
wr(s->u,37,16,rd(s->r,5056,16));
L_1803eb7c2_3:;
mw((uint64_t)rd(s->u,29,8),16,rd(s->u,37,16));
L_1803eb7c2_4:;
/* 1803eb7c7: dec r8d */
L_1803eb7c7_0:;
L_1803eb7c7_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x1)),4,1));
L_1803eb7c7_2:;
wr(s->r,128,4,(rd(s->r,128,4)-((U)UINT64_C(0x1))));
L_1803eb7c7_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803eb7c7_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb7c7_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803eb7c7_6:;
wr(s->u,54,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803eb7c7_7:;
wr(s->u,62,1,pop(rd(s->u,54,4),4));
L_1803eb7c7_8:;
wr(s->u,63,1,(rd(s->u,62,1)&((U)UINT64_C(0x1))));
L_1803eb7c7_9:;
wr(s->r,514,1,(rd(s->u,63,1)==((U)UINT64_C(0x0))));
L_1803eb7c7_10:;
/* 1803eb7ca: sub rdx, rcx */
L_1803eb7ca_0:;
L_1803eb7ca_1:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->r,8,8)));
L_1803eb7ca_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->r,8,8),8,1));
L_1803eb7ca_3:;
wr(s->r,16,8,(rd(s->r,16,8)-rd(s->r,8,8)));
L_1803eb7ca_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb7ca_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803eb7ca_6:;
wr(s->u,54,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803eb7ca_7:;
wr(s->u,62,1,pop(rd(s->u,54,8),8));
L_1803eb7ca_8:;
wr(s->u,63,1,(rd(s->u,62,1)&((U)UINT64_C(0x1))));
L_1803eb7ca_9:;
wr(s->r,514,1,(rd(s->u,63,1)==((U)UINT64_C(0x0))));
L_1803eb7ca_10:;
/* 1803eb7cd: shr r8d, 2 */
L_1803eb7cd_0:;
L_1803eb7cd_1:;
wr(s->u,99,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803eb7cd_2:;
wr(s->u,103,4,rd(s->r,128,4));
L_1803eb7cd_3:;
wr(s->r,128,4,((rd(s->u,99,4)>=32)?0:(rd(s->r,128,4)>>rd(s->u,99,4))));
L_1803eb7cd_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803eb7cd_5:;
wr(s->u,83,1,(rd(s->u,99,4)==((U)UINT64_C(0x0))));
L_1803eb7cd_6:;
wr(s->u,84,4,(rd(s->u,99,4)-((U)UINT64_C(0x1))));
L_1803eb7cd_7:;
wr(s->u,88,4,((rd(s->u,84,4)>=32)?0:(rd(s->u,103,4)>>rd(s->u,84,4))));
L_1803eb7cd_8:;
wr(s->u,92,4,(rd(s->u,88,4)&((U)UINT64_C(0x1))));
L_1803eb7cd_9:;
wr(s->u,96,1,(rd(s->u,92,4)!=((U)UINT64_C(0x0))));
L_1803eb7cd_10:;
wr(s->u,0,1,rd(s->u,83,1));
L_1803eb7cd_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803eb7cd_12:;
wr(s->u,2,1,(!rd(s->u,83,1)));
L_1803eb7cd_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803eb7cd_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,96,1)));
L_1803eb7cd_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803eb7cd_16:;
wr(s->u,97,1,(rd(s->u,99,4)==((U)UINT64_C(0x1))));
L_1803eb7cd_17:;
wr(s->u,98,1,(sx(rd(s->u,103,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb7cd_18:;
wr(s->u,0,1,rd(s->u,97,1));
L_1803eb7cd_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803eb7cd_20:;
wr(s->u,2,1,(!rd(s->u,97,1)));
L_1803eb7cd_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803eb7cd_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,98,1)));
L_1803eb7cd_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803eb7cd_24:;
wr(s->u,64,1,(rd(s->u,99,4)!=((U)UINT64_C(0x0))));
L_1803eb7cd_25:;
wr(s->u,65,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb7cd_26:;
wr(s->u,66,1,(!rd(s->u,64,1)));
L_1803eb7cd_27:;
wr(s->u,67,1,(rd(s->u,66,1)&rd(s->r,519,1)));
L_1803eb7cd_28:;
wr(s->u,68,1,(rd(s->u,64,1)&rd(s->u,65,1)));
L_1803eb7cd_29:;
wr(s->r,519,1,(rd(s->u,67,1)|rd(s->u,68,1)));
L_1803eb7cd_30:;
wr(s->u,69,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803eb7cd_31:;
wr(s->u,70,1,(!rd(s->u,64,1)));
L_1803eb7cd_32:;
wr(s->u,71,1,(rd(s->u,70,1)&rd(s->r,518,1)));
L_1803eb7cd_33:;
wr(s->u,72,1,(rd(s->u,64,1)&rd(s->u,69,1)));
L_1803eb7cd_34:;
wr(s->r,518,1,(rd(s->u,71,1)|rd(s->u,72,1)));
L_1803eb7cd_35:;
wr(s->u,73,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803eb7cd_36:;
wr(s->u,77,1,pop(rd(s->u,73,4),4));
L_1803eb7cd_37:;
wr(s->u,78,1,(rd(s->u,77,1)&((U)UINT64_C(0x1))));
L_1803eb7cd_38:;
wr(s->u,79,1,(rd(s->u,78,1)==((U)UINT64_C(0x0))));
L_1803eb7cd_39:;
wr(s->u,80,1,(!rd(s->u,64,1)));
L_1803eb7cd_40:;
wr(s->u,81,1,(rd(s->u,80,1)&rd(s->r,514,1)));
L_1803eb7cd_41:;
wr(s->u,82,1,(rd(s->u,64,1)&rd(s->u,79,1)));
L_1803eb7cd_42:;
wr(s->r,514,1,(rd(s->u,81,1)|rd(s->u,82,1)));
L_1803eb7cd_43:;
/* 1803eb7d1: inc r8d */
L_1803eb7d1_0:;
L_1803eb7d1_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x1)),4,0));
L_1803eb7d1_2:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0x1))));
L_1803eb7d1_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803eb7d1_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb7d1_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803eb7d1_6:;
wr(s->u,54,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803eb7d1_7:;
wr(s->u,62,1,pop(rd(s->u,54,4),4));
L_1803eb7d1_8:;
wr(s->u,63,1,(rd(s->u,62,1)&((U)UINT64_C(0x1))));
L_1803eb7d1_9:;
wr(s->r,514,1,(rd(s->u,63,1)==((U)UINT64_C(0x0))));
L_1803eb7d1_10:;
/* 1803eb7d4: movss xmm7, dword ptr [rip + 0x264cf4] */
L_1803eb7d4_0:;
L_1803eb7d4_1:;
wr(s->r,5056,4,mr(UINT64_C(0x1806504d0),4));
L_1803eb7d4_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803eb7d4_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803eb7d4_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803eb7d4_5:;
/* 1803eb7dc: movss xmm6, dword ptr [rip + 0x421178] */
L_1803eb7dc_0:;
L_1803eb7dc_1:;
wr(s->r,4992,4,mr(UINT64_C(0x18080c95c),4));
L_1803eb7dc_2:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803eb7dc_3:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803eb7dc_4:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803eb7dc_5:;
/* 1803eb7e4: movaps xmmword ptr [rsp], xmm8 */
L_1803eb7e4_0:;
L_1803eb7e4_1:;
wr(s->u,37,16,rd(s->r,5120,16));
L_1803eb7e4_2:;
mw((uint64_t)rd(s->r,32,8),16,rd(s->u,37,16));
L_1803eb7e4_3:;
/* 1803eb7e9: shufps xmm4, xmm4, 0 */
L_1803eb7e9_0:;
L_1803eb7e9_1:;
wr(s->u,187,4,rd(s->r,4864,4));
L_1803eb7e9_2:;
wr(s->u,191,4,rd(s->r,4868,4));
L_1803eb7e9_3:;
wr(s->u,195,4,rd(s->r,4872,4));
L_1803eb7e9_4:;
wr(s->u,199,4,rd(s->r,4876,4));
L_1803eb7e9_5:;
wr(s->u,203,4,rd(s->r,4864,4));
L_1803eb7e9_6:;
wr(s->u,207,4,rd(s->r,4868,4));
L_1803eb7e9_7:;
wr(s->u,211,4,rd(s->r,4872,4));
L_1803eb7e9_8:;
wr(s->u,215,4,rd(s->r,4876,4));
L_1803eb7e9_9:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7e9_10:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7e9_11:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,203,4)));
L_1803eb7e9_12:;
wr(s->u,152,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7e9_13:;
wr(s->u,153,4,rd(s->u,152,1));
L_1803eb7e9_14:;
wr(s->u,157,4,(rd(s->u,153,4)*rd(s->u,207,4)));
L_1803eb7e9_15:;
wr(s->u,161,4,(rd(s->u,148,4)+rd(s->u,157,4)));
L_1803eb7e9_16:;
wr(s->u,165,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7e9_17:;
wr(s->u,166,4,rd(s->u,165,1));
L_1803eb7e9_18:;
wr(s->u,170,4,(rd(s->u,166,4)*rd(s->u,211,4)));
L_1803eb7e9_19:;
wr(s->u,174,4,(rd(s->u,161,4)+rd(s->u,170,4)));
L_1803eb7e9_20:;
wr(s->u,178,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7e9_21:;
wr(s->u,179,4,rd(s->u,178,1));
L_1803eb7e9_22:;
wr(s->u,183,4,(rd(s->u,179,4)*rd(s->u,215,4)));
L_1803eb7e9_23:;
wr(s->r,4864,4,(rd(s->u,174,4)+rd(s->u,183,4)));
L_1803eb7e9_24:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7e9_25:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7e9_26:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,203,4)));
L_1803eb7e9_27:;
wr(s->u,152,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7e9_28:;
wr(s->u,153,4,rd(s->u,152,1));
L_1803eb7e9_29:;
wr(s->u,157,4,(rd(s->u,153,4)*rd(s->u,207,4)));
L_1803eb7e9_30:;
wr(s->u,161,4,(rd(s->u,148,4)+rd(s->u,157,4)));
L_1803eb7e9_31:;
wr(s->u,165,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7e9_32:;
wr(s->u,166,4,rd(s->u,165,1));
L_1803eb7e9_33:;
wr(s->u,170,4,(rd(s->u,166,4)*rd(s->u,211,4)));
L_1803eb7e9_34:;
wr(s->u,174,4,(rd(s->u,161,4)+rd(s->u,170,4)));
L_1803eb7e9_35:;
wr(s->u,178,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7e9_36:;
wr(s->u,179,4,rd(s->u,178,1));
L_1803eb7e9_37:;
wr(s->u,183,4,(rd(s->u,179,4)*rd(s->u,215,4)));
L_1803eb7e9_38:;
wr(s->r,4868,4,(rd(s->u,174,4)+rd(s->u,183,4)));
L_1803eb7e9_39:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7e9_40:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7e9_41:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,187,4)));
L_1803eb7e9_42:;
wr(s->u,152,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7e9_43:;
wr(s->u,153,4,rd(s->u,152,1));
L_1803eb7e9_44:;
wr(s->u,157,4,(rd(s->u,153,4)*rd(s->u,191,4)));
L_1803eb7e9_45:;
wr(s->u,161,4,(rd(s->u,148,4)+rd(s->u,157,4)));
L_1803eb7e9_46:;
wr(s->u,165,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7e9_47:;
wr(s->u,166,4,rd(s->u,165,1));
L_1803eb7e9_48:;
wr(s->u,170,4,(rd(s->u,166,4)*rd(s->u,195,4)));
L_1803eb7e9_49:;
wr(s->u,174,4,(rd(s->u,161,4)+rd(s->u,170,4)));
L_1803eb7e9_50:;
wr(s->u,178,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7e9_51:;
wr(s->u,179,4,rd(s->u,178,1));
L_1803eb7e9_52:;
wr(s->u,183,4,(rd(s->u,179,4)*rd(s->u,199,4)));
L_1803eb7e9_53:;
wr(s->r,4872,4,(rd(s->u,174,4)+rd(s->u,183,4)));
L_1803eb7e9_54:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7e9_55:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7e9_56:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,187,4)));
L_1803eb7e9_57:;
wr(s->u,152,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7e9_58:;
wr(s->u,153,4,rd(s->u,152,1));
L_1803eb7e9_59:;
wr(s->u,157,4,(rd(s->u,153,4)*rd(s->u,191,4)));
L_1803eb7e9_60:;
wr(s->u,161,4,(rd(s->u,148,4)+rd(s->u,157,4)));
L_1803eb7e9_61:;
wr(s->u,165,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7e9_62:;
wr(s->u,166,4,rd(s->u,165,1));
L_1803eb7e9_63:;
wr(s->u,170,4,(rd(s->u,166,4)*rd(s->u,195,4)));
L_1803eb7e9_64:;
wr(s->u,174,4,(rd(s->u,161,4)+rd(s->u,170,4)));
L_1803eb7e9_65:;
wr(s->u,178,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7e9_66:;
wr(s->u,179,4,rd(s->u,178,1));
L_1803eb7e9_67:;
wr(s->u,183,4,(rd(s->u,179,4)*rd(s->u,199,4)));
L_1803eb7e9_68:;
wr(s->r,4876,4,(rd(s->u,174,4)+rd(s->u,183,4)));
L_1803eb7e9_69:;
/* 1803eb7ed: shufps xmm5, xmm5, 0 */
L_1803eb7ed_0:;
L_1803eb7ed_1:;
wr(s->u,187,4,rd(s->r,4928,4));
L_1803eb7ed_2:;
wr(s->u,191,4,rd(s->r,4932,4));
L_1803eb7ed_3:;
wr(s->u,195,4,rd(s->r,4936,4));
L_1803eb7ed_4:;
wr(s->u,199,4,rd(s->r,4940,4));
L_1803eb7ed_5:;
wr(s->u,203,4,rd(s->r,4928,4));
L_1803eb7ed_6:;
wr(s->u,207,4,rd(s->r,4932,4));
L_1803eb7ed_7:;
wr(s->u,211,4,rd(s->r,4936,4));
L_1803eb7ed_8:;
wr(s->u,215,4,rd(s->r,4940,4));
L_1803eb7ed_9:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7ed_10:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7ed_11:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,203,4)));
L_1803eb7ed_12:;
wr(s->u,152,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7ed_13:;
wr(s->u,153,4,rd(s->u,152,1));
L_1803eb7ed_14:;
wr(s->u,157,4,(rd(s->u,153,4)*rd(s->u,207,4)));
L_1803eb7ed_15:;
wr(s->u,161,4,(rd(s->u,148,4)+rd(s->u,157,4)));
L_1803eb7ed_16:;
wr(s->u,165,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7ed_17:;
wr(s->u,166,4,rd(s->u,165,1));
L_1803eb7ed_18:;
wr(s->u,170,4,(rd(s->u,166,4)*rd(s->u,211,4)));
L_1803eb7ed_19:;
wr(s->u,174,4,(rd(s->u,161,4)+rd(s->u,170,4)));
L_1803eb7ed_20:;
wr(s->u,178,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7ed_21:;
wr(s->u,179,4,rd(s->u,178,1));
L_1803eb7ed_22:;
wr(s->u,183,4,(rd(s->u,179,4)*rd(s->u,215,4)));
L_1803eb7ed_23:;
wr(s->r,4928,4,(rd(s->u,174,4)+rd(s->u,183,4)));
L_1803eb7ed_24:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7ed_25:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7ed_26:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,203,4)));
L_1803eb7ed_27:;
wr(s->u,152,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7ed_28:;
wr(s->u,153,4,rd(s->u,152,1));
L_1803eb7ed_29:;
wr(s->u,157,4,(rd(s->u,153,4)*rd(s->u,207,4)));
L_1803eb7ed_30:;
wr(s->u,161,4,(rd(s->u,148,4)+rd(s->u,157,4)));
L_1803eb7ed_31:;
wr(s->u,165,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7ed_32:;
wr(s->u,166,4,rd(s->u,165,1));
L_1803eb7ed_33:;
wr(s->u,170,4,(rd(s->u,166,4)*rd(s->u,211,4)));
L_1803eb7ed_34:;
wr(s->u,174,4,(rd(s->u,161,4)+rd(s->u,170,4)));
L_1803eb7ed_35:;
wr(s->u,178,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7ed_36:;
wr(s->u,179,4,rd(s->u,178,1));
L_1803eb7ed_37:;
wr(s->u,183,4,(rd(s->u,179,4)*rd(s->u,215,4)));
L_1803eb7ed_38:;
wr(s->r,4932,4,(rd(s->u,174,4)+rd(s->u,183,4)));
L_1803eb7ed_39:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7ed_40:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7ed_41:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,187,4)));
L_1803eb7ed_42:;
wr(s->u,152,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7ed_43:;
wr(s->u,153,4,rd(s->u,152,1));
L_1803eb7ed_44:;
wr(s->u,157,4,(rd(s->u,153,4)*rd(s->u,191,4)));
L_1803eb7ed_45:;
wr(s->u,161,4,(rd(s->u,148,4)+rd(s->u,157,4)));
L_1803eb7ed_46:;
wr(s->u,165,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7ed_47:;
wr(s->u,166,4,rd(s->u,165,1));
L_1803eb7ed_48:;
wr(s->u,170,4,(rd(s->u,166,4)*rd(s->u,195,4)));
L_1803eb7ed_49:;
wr(s->u,174,4,(rd(s->u,161,4)+rd(s->u,170,4)));
L_1803eb7ed_50:;
wr(s->u,178,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7ed_51:;
wr(s->u,179,4,rd(s->u,178,1));
L_1803eb7ed_52:;
wr(s->u,183,4,(rd(s->u,179,4)*rd(s->u,199,4)));
L_1803eb7ed_53:;
wr(s->r,4936,4,(rd(s->u,174,4)+rd(s->u,183,4)));
L_1803eb7ed_54:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7ed_55:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7ed_56:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,187,4)));
L_1803eb7ed_57:;
wr(s->u,152,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7ed_58:;
wr(s->u,153,4,rd(s->u,152,1));
L_1803eb7ed_59:;
wr(s->u,157,4,(rd(s->u,153,4)*rd(s->u,191,4)));
L_1803eb7ed_60:;
wr(s->u,161,4,(rd(s->u,148,4)+rd(s->u,157,4)));
L_1803eb7ed_61:;
wr(s->u,165,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7ed_62:;
wr(s->u,166,4,rd(s->u,165,1));
L_1803eb7ed_63:;
wr(s->u,170,4,(rd(s->u,166,4)*rd(s->u,195,4)));
L_1803eb7ed_64:;
wr(s->u,174,4,(rd(s->u,161,4)+rd(s->u,170,4)));
L_1803eb7ed_65:;
wr(s->u,178,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7ed_66:;
wr(s->u,179,4,rd(s->u,178,1));
L_1803eb7ed_67:;
wr(s->u,183,4,(rd(s->u,179,4)*rd(s->u,199,4)));
L_1803eb7ed_68:;
wr(s->r,4940,4,(rd(s->u,174,4)+rd(s->u,183,4)));
L_1803eb7ed_69:;
/* 1803eb7f1: shufps xmm7, xmm7, 0 */
L_1803eb7f1_0:;
L_1803eb7f1_1:;
wr(s->u,187,4,rd(s->r,5056,4));
L_1803eb7f1_2:;
wr(s->u,191,4,rd(s->r,5060,4));
L_1803eb7f1_3:;
wr(s->u,195,4,rd(s->r,5064,4));
L_1803eb7f1_4:;
wr(s->u,199,4,rd(s->r,5068,4));
L_1803eb7f1_5:;
wr(s->u,203,4,rd(s->r,5056,4));
L_1803eb7f1_6:;
wr(s->u,207,4,rd(s->r,5060,4));
L_1803eb7f1_7:;
wr(s->u,211,4,rd(s->r,5064,4));
L_1803eb7f1_8:;
wr(s->u,215,4,rd(s->r,5068,4));
L_1803eb7f1_9:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7f1_10:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7f1_11:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,203,4)));
L_1803eb7f1_12:;
wr(s->u,152,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7f1_13:;
wr(s->u,153,4,rd(s->u,152,1));
L_1803eb7f1_14:;
wr(s->u,157,4,(rd(s->u,153,4)*rd(s->u,207,4)));
L_1803eb7f1_15:;
wr(s->u,161,4,(rd(s->u,148,4)+rd(s->u,157,4)));
L_1803eb7f1_16:;
wr(s->u,165,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7f1_17:;
wr(s->u,166,4,rd(s->u,165,1));
L_1803eb7f1_18:;
wr(s->u,170,4,(rd(s->u,166,4)*rd(s->u,211,4)));
L_1803eb7f1_19:;
wr(s->u,174,4,(rd(s->u,161,4)+rd(s->u,170,4)));
L_1803eb7f1_20:;
wr(s->u,178,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7f1_21:;
wr(s->u,179,4,rd(s->u,178,1));
L_1803eb7f1_22:;
wr(s->u,183,4,(rd(s->u,179,4)*rd(s->u,215,4)));
L_1803eb7f1_23:;
wr(s->r,5056,4,(rd(s->u,174,4)+rd(s->u,183,4)));
L_1803eb7f1_24:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7f1_25:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7f1_26:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,203,4)));
L_1803eb7f1_27:;
wr(s->u,152,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7f1_28:;
wr(s->u,153,4,rd(s->u,152,1));
L_1803eb7f1_29:;
wr(s->u,157,4,(rd(s->u,153,4)*rd(s->u,207,4)));
L_1803eb7f1_30:;
wr(s->u,161,4,(rd(s->u,148,4)+rd(s->u,157,4)));
L_1803eb7f1_31:;
wr(s->u,165,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7f1_32:;
wr(s->u,166,4,rd(s->u,165,1));
L_1803eb7f1_33:;
wr(s->u,170,4,(rd(s->u,166,4)*rd(s->u,211,4)));
L_1803eb7f1_34:;
wr(s->u,174,4,(rd(s->u,161,4)+rd(s->u,170,4)));
L_1803eb7f1_35:;
wr(s->u,178,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7f1_36:;
wr(s->u,179,4,rd(s->u,178,1));
L_1803eb7f1_37:;
wr(s->u,183,4,(rd(s->u,179,4)*rd(s->u,215,4)));
L_1803eb7f1_38:;
wr(s->r,5060,4,(rd(s->u,174,4)+rd(s->u,183,4)));
L_1803eb7f1_39:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7f1_40:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7f1_41:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,187,4)));
L_1803eb7f1_42:;
wr(s->u,152,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7f1_43:;
wr(s->u,153,4,rd(s->u,152,1));
L_1803eb7f1_44:;
wr(s->u,157,4,(rd(s->u,153,4)*rd(s->u,191,4)));
L_1803eb7f1_45:;
wr(s->u,161,4,(rd(s->u,148,4)+rd(s->u,157,4)));
L_1803eb7f1_46:;
wr(s->u,165,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7f1_47:;
wr(s->u,166,4,rd(s->u,165,1));
L_1803eb7f1_48:;
wr(s->u,170,4,(rd(s->u,166,4)*rd(s->u,195,4)));
L_1803eb7f1_49:;
wr(s->u,174,4,(rd(s->u,161,4)+rd(s->u,170,4)));
L_1803eb7f1_50:;
wr(s->u,178,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7f1_51:;
wr(s->u,179,4,rd(s->u,178,1));
L_1803eb7f1_52:;
wr(s->u,183,4,(rd(s->u,179,4)*rd(s->u,199,4)));
L_1803eb7f1_53:;
wr(s->r,5064,4,(rd(s->u,174,4)+rd(s->u,183,4)));
L_1803eb7f1_54:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7f1_55:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7f1_56:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,187,4)));
L_1803eb7f1_57:;
wr(s->u,152,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7f1_58:;
wr(s->u,153,4,rd(s->u,152,1));
L_1803eb7f1_59:;
wr(s->u,157,4,(rd(s->u,153,4)*rd(s->u,191,4)));
L_1803eb7f1_60:;
wr(s->u,161,4,(rd(s->u,148,4)+rd(s->u,157,4)));
L_1803eb7f1_61:;
wr(s->u,165,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7f1_62:;
wr(s->u,166,4,rd(s->u,165,1));
L_1803eb7f1_63:;
wr(s->u,170,4,(rd(s->u,166,4)*rd(s->u,195,4)));
L_1803eb7f1_64:;
wr(s->u,174,4,(rd(s->u,161,4)+rd(s->u,170,4)));
L_1803eb7f1_65:;
wr(s->u,178,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7f1_66:;
wr(s->u,179,4,rd(s->u,178,1));
L_1803eb7f1_67:;
wr(s->u,183,4,(rd(s->u,179,4)*rd(s->u,199,4)));
L_1803eb7f1_68:;
wr(s->r,5068,4,(rd(s->u,174,4)+rd(s->u,183,4)));
L_1803eb7f1_69:;
/* 1803eb7f5: shufps xmm6, xmm6, 0 */
L_1803eb7f5_0:;
L_1803eb7f5_1:;
wr(s->u,187,4,rd(s->r,4992,4));
L_1803eb7f5_2:;
wr(s->u,191,4,rd(s->r,4996,4));
L_1803eb7f5_3:;
wr(s->u,195,4,rd(s->r,5000,4));
L_1803eb7f5_4:;
wr(s->u,199,4,rd(s->r,5004,4));
L_1803eb7f5_5:;
wr(s->u,203,4,rd(s->r,4992,4));
L_1803eb7f5_6:;
wr(s->u,207,4,rd(s->r,4996,4));
L_1803eb7f5_7:;
wr(s->u,211,4,rd(s->r,5000,4));
L_1803eb7f5_8:;
wr(s->u,215,4,rd(s->r,5004,4));
L_1803eb7f5_9:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7f5_10:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7f5_11:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,203,4)));
L_1803eb7f5_12:;
wr(s->u,152,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7f5_13:;
wr(s->u,153,4,rd(s->u,152,1));
L_1803eb7f5_14:;
wr(s->u,157,4,(rd(s->u,153,4)*rd(s->u,207,4)));
L_1803eb7f5_15:;
wr(s->u,161,4,(rd(s->u,148,4)+rd(s->u,157,4)));
L_1803eb7f5_16:;
wr(s->u,165,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7f5_17:;
wr(s->u,166,4,rd(s->u,165,1));
L_1803eb7f5_18:;
wr(s->u,170,4,(rd(s->u,166,4)*rd(s->u,211,4)));
L_1803eb7f5_19:;
wr(s->u,174,4,(rd(s->u,161,4)+rd(s->u,170,4)));
L_1803eb7f5_20:;
wr(s->u,178,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7f5_21:;
wr(s->u,179,4,rd(s->u,178,1));
L_1803eb7f5_22:;
wr(s->u,183,4,(rd(s->u,179,4)*rd(s->u,215,4)));
L_1803eb7f5_23:;
wr(s->r,4992,4,(rd(s->u,174,4)+rd(s->u,183,4)));
L_1803eb7f5_24:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7f5_25:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7f5_26:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,203,4)));
L_1803eb7f5_27:;
wr(s->u,152,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7f5_28:;
wr(s->u,153,4,rd(s->u,152,1));
L_1803eb7f5_29:;
wr(s->u,157,4,(rd(s->u,153,4)*rd(s->u,207,4)));
L_1803eb7f5_30:;
wr(s->u,161,4,(rd(s->u,148,4)+rd(s->u,157,4)));
L_1803eb7f5_31:;
wr(s->u,165,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7f5_32:;
wr(s->u,166,4,rd(s->u,165,1));
L_1803eb7f5_33:;
wr(s->u,170,4,(rd(s->u,166,4)*rd(s->u,211,4)));
L_1803eb7f5_34:;
wr(s->u,174,4,(rd(s->u,161,4)+rd(s->u,170,4)));
L_1803eb7f5_35:;
wr(s->u,178,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7f5_36:;
wr(s->u,179,4,rd(s->u,178,1));
L_1803eb7f5_37:;
wr(s->u,183,4,(rd(s->u,179,4)*rd(s->u,215,4)));
L_1803eb7f5_38:;
wr(s->r,4996,4,(rd(s->u,174,4)+rd(s->u,183,4)));
L_1803eb7f5_39:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7f5_40:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7f5_41:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,187,4)));
L_1803eb7f5_42:;
wr(s->u,152,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7f5_43:;
wr(s->u,153,4,rd(s->u,152,1));
L_1803eb7f5_44:;
wr(s->u,157,4,(rd(s->u,153,4)*rd(s->u,191,4)));
L_1803eb7f5_45:;
wr(s->u,161,4,(rd(s->u,148,4)+rd(s->u,157,4)));
L_1803eb7f5_46:;
wr(s->u,165,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7f5_47:;
wr(s->u,166,4,rd(s->u,165,1));
L_1803eb7f5_48:;
wr(s->u,170,4,(rd(s->u,166,4)*rd(s->u,195,4)));
L_1803eb7f5_49:;
wr(s->u,174,4,(rd(s->u,161,4)+rd(s->u,170,4)));
L_1803eb7f5_50:;
wr(s->u,178,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7f5_51:;
wr(s->u,179,4,rd(s->u,178,1));
L_1803eb7f5_52:;
wr(s->u,183,4,(rd(s->u,179,4)*rd(s->u,199,4)));
L_1803eb7f5_53:;
wr(s->r,5000,4,(rd(s->u,174,4)+rd(s->u,183,4)));
L_1803eb7f5_54:;
wr(s->u,143,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803eb7f5_55:;
wr(s->u,144,4,rd(s->u,143,1));
L_1803eb7f5_56:;
wr(s->u,148,4,(rd(s->u,144,4)*rd(s->u,187,4)));
L_1803eb7f5_57:;
wr(s->u,152,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803eb7f5_58:;
wr(s->u,153,4,rd(s->u,152,1));
L_1803eb7f5_59:;
wr(s->u,157,4,(rd(s->u,153,4)*rd(s->u,191,4)));
L_1803eb7f5_60:;
wr(s->u,161,4,(rd(s->u,148,4)+rd(s->u,157,4)));
L_1803eb7f5_61:;
wr(s->u,165,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803eb7f5_62:;
wr(s->u,166,4,rd(s->u,165,1));
L_1803eb7f5_63:;
wr(s->u,170,4,(rd(s->u,166,4)*rd(s->u,195,4)));
L_1803eb7f5_64:;
wr(s->u,174,4,(rd(s->u,161,4)+rd(s->u,170,4)));
L_1803eb7f5_65:;
wr(s->u,178,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803eb7f5_66:;
wr(s->u,179,4,rd(s->u,178,1));
L_1803eb7f5_67:;
wr(s->u,183,4,(rd(s->u,179,4)*rd(s->u,199,4)));
L_1803eb7f5_68:;
wr(s->r,5004,4,(rd(s->u,174,4)+rd(s->u,183,4)));
L_1803eb7f5_69:;
/* 1803eb7f9: xorps xmm8, xmm8 */
L_1803eb7f9_0:;
L_1803eb7f9_1:;
wr(s->r,5120,4,(rd(s->r,5120,4)^rd(s->r,5120,4)));
L_1803eb7f9_2:;
wr(s->r,5124,4,(rd(s->r,5124,4)^rd(s->r,5124,4)));
L_1803eb7f9_3:;
wr(s->r,5128,4,(rd(s->r,5128,4)^rd(s->r,5128,4)));
L_1803eb7f9_4:;
wr(s->r,5132,4,(rd(s->r,5132,4)^rd(s->r,5132,4)));
L_1803eb7f9_5:;
/* 1803eb7fd: nop dword ptr [rax] */
L_1803eb7fd_0:;
L_1803eb7fd_1:;
/* 1803eb800: movaps xmm3, xmmword ptr [rdx + rcx] */
L_1803eb800_0:;
L_1803eb800_1:;
wr(s->u,13,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803eb800_2:;
wr(s->u,21,8,(rd(s->r,16,8)+rd(s->u,13,8)));
L_1803eb800_3:;
wr(s->u,37,16,mr((uint64_t)rd(s->u,21,8),16));
L_1803eb800_4:;
wr(s->u,127,16,rd(s->u,37,16));
L_1803eb800_5:;
wr(s->r,4800,4,rd(s->u,127,4));
L_1803eb800_6:;
wr(s->r,4804,4,rd(s->u,131,4));
L_1803eb800_7:;
wr(s->r,4808,4,rd(s->u,135,4));
L_1803eb800_8:;
wr(s->r,4812,4,rd(s->u,139,4));
L_1803eb800_9:;
/* 1803eb804: add rcx, 0x10 */
L_1803eb804_0:;
L_1803eb804_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803eb804_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x10)),8,0));
L_1803eb804_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803eb804_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb804_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803eb804_6:;
wr(s->u,54,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803eb804_7:;
wr(s->u,62,1,pop(rd(s->u,54,8),8));
L_1803eb804_8:;
wr(s->u,63,1,(rd(s->u,62,1)&((U)UINT64_C(0x1))));
L_1803eb804_9:;
wr(s->r,514,1,(rd(s->u,63,1)==((U)UINT64_C(0x0))));
L_1803eb804_10:;
/* 1803eb808: sub r8, 1 */
L_1803eb808_0:;
L_1803eb808_1:;
wr(s->r,512,1,(rd(s->r,128,8)<((U)UINT64_C(0x1))));
L_1803eb808_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x1)),8,1));
L_1803eb808_3:;
wr(s->r,128,8,(rd(s->r,128,8)-((U)UINT64_C(0x1))));
L_1803eb808_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb808_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803eb808_6:;
wr(s->u,54,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803eb808_7:;
wr(s->u,62,1,pop(rd(s->u,54,8),8));
L_1803eb808_8:;
wr(s->u,63,1,(rd(s->u,62,1)&((U)UINT64_C(0x1))));
L_1803eb808_9:;
wr(s->r,514,1,(rd(s->u,63,1)==((U)UINT64_C(0x0))));
L_1803eb808_10:;
/* 1803eb80c: addps xmm3, xmm4 */
L_1803eb80c_0:;
L_1803eb80c_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803eb80c_2:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)+fv(rd(s->r,4868,4),4),4));
L_1803eb80c_3:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)+fv(rd(s->r,4872,4),4),4));
L_1803eb80c_4:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)+fv(rd(s->r,4876,4),4),4));
L_1803eb80c_5:;
/* 1803eb80f: movaps xmm0, xmm3 */
L_1803eb80f_0:;
L_1803eb80f_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803eb80f_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803eb80f_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803eb80f_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803eb80f_5:;
/* 1803eb812: mulps xmm0, xmm6 */
L_1803eb812_0:;
L_1803eb812_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803eb812_2:;
wr(s->r,4612,4,fb(fv(rd(s->r,4612,4),4)*fv(rd(s->r,4996,4),4),4));
L_1803eb812_3:;
wr(s->r,4616,4,fb(fv(rd(s->r,4616,4),4)*fv(rd(s->r,5000,4),4),4));
L_1803eb812_4:;
wr(s->r,4620,4,fb(fv(rd(s->r,4620,4),4)*fv(rd(s->r,5004,4),4),4));
L_1803eb812_5:;
/* 1803eb815: movaps xmm2, xmm0 */
L_1803eb815_0:;
L_1803eb815_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803eb815_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803eb815_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803eb815_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803eb815_5:;
/* 1803eb818: cvttps2dq xmm0, xmm0 */
L_1803eb818_0:;
L_1803eb818_1:;
wr(s->r,4608,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803eb818_2:;
wr(s->r,4612,4,ftrunc(fv(rd(s->r,4612,4),4),4));
L_1803eb818_3:;
wr(s->r,4616,4,ftrunc(fv(rd(s->r,4616,4),4),4));
L_1803eb818_4:;
wr(s->r,4620,4,ftrunc(fv(rd(s->r,4620,4),4),4));
L_1803eb818_5:;
/* 1803eb81c: cmpltps xmm2, xmm8 */
L_1803eb81c_0:;
L_1803eb81c_1:;
wr(s->r,4480,4,rd(s->r,4736,4));
L_1803eb81c_2:;
wr(s->r,4484,4,rd(s->r,4740,4));
L_1803eb81c_3:;
wr(s->r,4488,4,rd(s->r,4744,4));
L_1803eb81c_4:;
wr(s->r,4492,4,rd(s->r,4748,4));
L_1803eb81c_5:;
wr(s->r,4496,4,rd(s->r,5120,4));
L_1803eb81c_6:;
wr(s->r,4500,4,rd(s->r,5124,4));
L_1803eb81c_7:;
wr(s->r,4504,4,rd(s->r,5128,4));
L_1803eb81c_8:;
wr(s->r,4508,4,rd(s->r,5132,4));
L_1803eb81c_9:;
wr(s->u,107,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803eb81c_10:;
wr(s->u,108,4,rd(s->u,107,1));
L_1803eb81c_11:;
wr(s->r,4480,4,(rd(s->u,108,4)*((U)UINT64_C(0xffffffff))));
L_1803eb81c_12:;
wr(s->u,112,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803eb81c_13:;
wr(s->u,113,4,rd(s->u,112,1));
L_1803eb81c_14:;
wr(s->r,4484,4,(rd(s->u,113,4)*((U)UINT64_C(0xffffffff))));
L_1803eb81c_15:;
wr(s->u,117,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803eb81c_16:;
wr(s->u,118,4,rd(s->u,117,1));
L_1803eb81c_17:;
wr(s->r,4488,4,(rd(s->u,118,4)*((U)UINT64_C(0xffffffff))));
L_1803eb81c_18:;
wr(s->u,122,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803eb81c_19:;
wr(s->u,123,4,rd(s->u,122,1));
L_1803eb81c_20:;
wr(s->r,4492,4,(rd(s->u,123,4)*((U)UINT64_C(0xffffffff))));
L_1803eb81c_21:;
wr(s->r,4736,4,rd(s->r,4480,4));
L_1803eb81c_22:;
wr(s->r,4740,4,rd(s->r,4484,4));
L_1803eb81c_23:;
wr(s->r,4744,4,rd(s->r,4488,4));
L_1803eb81c_24:;
wr(s->r,4748,4,rd(s->r,4492,4));
L_1803eb81c_25:;
/* 1803eb821: cvtdq2ps xmm1, xmm0 */
L_1803eb821_0:;
L_1803eb821_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803eb821_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803eb821_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803eb821_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803eb821_5:;
/* 1803eb824: andps xmm2, xmm7 */
L_1803eb824_0:;
L_1803eb824_1:;
wr(s->r,4736,4,(rd(s->r,4736,4)&rd(s->r,5056,4)));
L_1803eb824_2:;
wr(s->r,4740,4,(rd(s->r,4740,4)&rd(s->r,5060,4)));
L_1803eb824_3:;
wr(s->r,4744,4,(rd(s->r,4744,4)&rd(s->r,5064,4)));
L_1803eb824_4:;
wr(s->r,4748,4,(rd(s->r,4748,4)&rd(s->r,5068,4)));
L_1803eb824_5:;
/* 1803eb827: addps xmm2, xmm1 */
L_1803eb827_0:;
L_1803eb827_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803eb827_2:;
wr(s->r,4740,4,fb(fv(rd(s->r,4740,4),4)+fv(rd(s->r,4676,4),4),4));
L_1803eb827_3:;
wr(s->r,4744,4,fb(fv(rd(s->r,4744,4),4)+fv(rd(s->r,4680,4),4),4));
L_1803eb827_4:;
wr(s->r,4748,4,fb(fv(rd(s->r,4748,4),4)+fv(rd(s->r,4684,4),4),4));
L_1803eb827_5:;
/* 1803eb82a: mulps xmm2, xmm5 */
L_1803eb82a_0:;
L_1803eb82a_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803eb82a_2:;
wr(s->r,4740,4,fb(fv(rd(s->r,4740,4),4)*fv(rd(s->r,4932,4),4),4));
L_1803eb82a_3:;
wr(s->r,4744,4,fb(fv(rd(s->r,4744,4),4)*fv(rd(s->r,4936,4),4),4));
L_1803eb82a_4:;
wr(s->r,4748,4,fb(fv(rd(s->r,4748,4),4)*fv(rd(s->r,4940,4),4),4));
L_1803eb82a_5:;
/* 1803eb82d: subps xmm3, xmm2 */
L_1803eb82d_0:;
L_1803eb82d_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803eb82d_2:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)-fv(rd(s->r,4740,4),4),4));
L_1803eb82d_3:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)-fv(rd(s->r,4744,4),4),4));
L_1803eb82d_4:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)-fv(rd(s->r,4748,4),4),4));
L_1803eb82d_5:;
/* 1803eb830: addps xmm3, xmm4 */
L_1803eb830_0:;
L_1803eb830_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803eb830_2:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)+fv(rd(s->r,4868,4),4),4));
L_1803eb830_3:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)+fv(rd(s->r,4872,4),4),4));
L_1803eb830_4:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)+fv(rd(s->r,4876,4),4),4));
L_1803eb830_5:;
/* 1803eb833: movaps xmmword ptr [rcx - 0x10], xmm3 */
L_1803eb833_0:;
L_1803eb833_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb833_2:;
wr(s->u,37,16,rd(s->r,4800,16));
L_1803eb833_3:;
mw((uint64_t)rd(s->u,5,8),16,rd(s->u,37,16));
L_1803eb833_4:;
/* 1803eb837: jne 0x1803eb800 */
L_1803eb837_0:;
L_1803eb837_1:;
wr(s->u,53,1,(!rd(s->r,518,1)));
L_1803eb837_2:;
if(rd(s->u,53,1)){goto L_1803eb800_0;}
L_1803eb837_3:;
return UINT64_C(0x1803eb839);
}
uint64_t b_1803eb800(CPU*s){
/* 1803eb800: movaps xmm3, xmmword ptr [rdx + rcx] */
L_1803eb800_0:;
L_1803eb800_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803eb800_2:;
wr(s->u,16,8,(rd(s->r,16,8)+rd(s->u,8,8)));
L_1803eb800_3:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,16,8),16));
L_1803eb800_4:;
wr(s->u,71,16,rd(s->u,24,16));
L_1803eb800_5:;
wr(s->r,4800,4,rd(s->u,71,4));
L_1803eb800_6:;
wr(s->r,4804,4,rd(s->u,75,4));
L_1803eb800_7:;
wr(s->r,4808,4,rd(s->u,79,4));
L_1803eb800_8:;
wr(s->r,4812,4,rd(s->u,83,4));
L_1803eb800_9:;
/* 1803eb804: add rcx, 0x10 */
L_1803eb804_0:;
L_1803eb804_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803eb804_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x10)),8,0));
L_1803eb804_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803eb804_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb804_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803eb804_6:;
wr(s->u,41,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803eb804_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803eb804_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803eb804_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803eb804_10:;
/* 1803eb808: sub r8, 1 */
L_1803eb808_0:;
L_1803eb808_1:;
wr(s->r,512,1,(rd(s->r,128,8)<((U)UINT64_C(0x1))));
L_1803eb808_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x1)),8,1));
L_1803eb808_3:;
wr(s->r,128,8,(rd(s->r,128,8)-((U)UINT64_C(0x1))));
L_1803eb808_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb808_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803eb808_6:;
wr(s->u,41,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803eb808_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803eb808_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803eb808_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803eb808_10:;
/* 1803eb80c: addps xmm3, xmm4 */
L_1803eb80c_0:;
L_1803eb80c_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803eb80c_2:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)+fv(rd(s->r,4868,4),4),4));
L_1803eb80c_3:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)+fv(rd(s->r,4872,4),4),4));
L_1803eb80c_4:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)+fv(rd(s->r,4876,4),4),4));
L_1803eb80c_5:;
/* 1803eb80f: movaps xmm0, xmm3 */
L_1803eb80f_0:;
L_1803eb80f_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803eb80f_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803eb80f_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803eb80f_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803eb80f_5:;
/* 1803eb812: mulps xmm0, xmm6 */
L_1803eb812_0:;
L_1803eb812_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803eb812_2:;
wr(s->r,4612,4,fb(fv(rd(s->r,4612,4),4)*fv(rd(s->r,4996,4),4),4));
L_1803eb812_3:;
wr(s->r,4616,4,fb(fv(rd(s->r,4616,4),4)*fv(rd(s->r,5000,4),4),4));
L_1803eb812_4:;
wr(s->r,4620,4,fb(fv(rd(s->r,4620,4),4)*fv(rd(s->r,5004,4),4),4));
L_1803eb812_5:;
/* 1803eb815: movaps xmm2, xmm0 */
L_1803eb815_0:;
L_1803eb815_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803eb815_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803eb815_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803eb815_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803eb815_5:;
/* 1803eb818: cvttps2dq xmm0, xmm0 */
L_1803eb818_0:;
L_1803eb818_1:;
wr(s->r,4608,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803eb818_2:;
wr(s->r,4612,4,ftrunc(fv(rd(s->r,4612,4),4),4));
L_1803eb818_3:;
wr(s->r,4616,4,ftrunc(fv(rd(s->r,4616,4),4),4));
L_1803eb818_4:;
wr(s->r,4620,4,ftrunc(fv(rd(s->r,4620,4),4),4));
L_1803eb818_5:;
/* 1803eb81c: cmpltps xmm2, xmm8 */
L_1803eb81c_0:;
L_1803eb81c_1:;
wr(s->r,4480,4,rd(s->r,4736,4));
L_1803eb81c_2:;
wr(s->r,4484,4,rd(s->r,4740,4));
L_1803eb81c_3:;
wr(s->r,4488,4,rd(s->r,4744,4));
L_1803eb81c_4:;
wr(s->r,4492,4,rd(s->r,4748,4));
L_1803eb81c_5:;
wr(s->r,4496,4,rd(s->r,5120,4));
L_1803eb81c_6:;
wr(s->r,4500,4,rd(s->r,5124,4));
L_1803eb81c_7:;
wr(s->r,4504,4,rd(s->r,5128,4));
L_1803eb81c_8:;
wr(s->r,4508,4,rd(s->r,5132,4));
L_1803eb81c_9:;
wr(s->u,51,1,(fv(rd(s->r,4480,4),4)<fv(rd(s->r,4496,4),4)));
L_1803eb81c_10:;
wr(s->u,52,4,rd(s->u,51,1));
L_1803eb81c_11:;
wr(s->r,4480,4,(rd(s->u,52,4)*((U)UINT64_C(0xffffffff))));
L_1803eb81c_12:;
wr(s->u,56,1,(fv(rd(s->r,4484,4),4)<fv(rd(s->r,4500,4),4)));
L_1803eb81c_13:;
wr(s->u,57,4,rd(s->u,56,1));
L_1803eb81c_14:;
wr(s->r,4484,4,(rd(s->u,57,4)*((U)UINT64_C(0xffffffff))));
L_1803eb81c_15:;
wr(s->u,61,1,(fv(rd(s->r,4488,4),4)<fv(rd(s->r,4504,4),4)));
L_1803eb81c_16:;
wr(s->u,62,4,rd(s->u,61,1));
L_1803eb81c_17:;
wr(s->r,4488,4,(rd(s->u,62,4)*((U)UINT64_C(0xffffffff))));
L_1803eb81c_18:;
wr(s->u,66,1,(fv(rd(s->r,4492,4),4)<fv(rd(s->r,4508,4),4)));
L_1803eb81c_19:;
wr(s->u,67,4,rd(s->u,66,1));
L_1803eb81c_20:;
wr(s->r,4492,4,(rd(s->u,67,4)*((U)UINT64_C(0xffffffff))));
L_1803eb81c_21:;
wr(s->r,4736,4,rd(s->r,4480,4));
L_1803eb81c_22:;
wr(s->r,4740,4,rd(s->r,4484,4));
L_1803eb81c_23:;
wr(s->r,4744,4,rd(s->r,4488,4));
L_1803eb81c_24:;
wr(s->r,4748,4,rd(s->r,4492,4));
L_1803eb81c_25:;
/* 1803eb821: cvtdq2ps xmm1, xmm0 */
L_1803eb821_0:;
L_1803eb821_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803eb821_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803eb821_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803eb821_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803eb821_5:;
/* 1803eb824: andps xmm2, xmm7 */
L_1803eb824_0:;
L_1803eb824_1:;
wr(s->r,4736,4,(rd(s->r,4736,4)&rd(s->r,5056,4)));
L_1803eb824_2:;
wr(s->r,4740,4,(rd(s->r,4740,4)&rd(s->r,5060,4)));
L_1803eb824_3:;
wr(s->r,4744,4,(rd(s->r,4744,4)&rd(s->r,5064,4)));
L_1803eb824_4:;
wr(s->r,4748,4,(rd(s->r,4748,4)&rd(s->r,5068,4)));
L_1803eb824_5:;
/* 1803eb827: addps xmm2, xmm1 */
L_1803eb827_0:;
L_1803eb827_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803eb827_2:;
wr(s->r,4740,4,fb(fv(rd(s->r,4740,4),4)+fv(rd(s->r,4676,4),4),4));
L_1803eb827_3:;
wr(s->r,4744,4,fb(fv(rd(s->r,4744,4),4)+fv(rd(s->r,4680,4),4),4));
L_1803eb827_4:;
wr(s->r,4748,4,fb(fv(rd(s->r,4748,4),4)+fv(rd(s->r,4684,4),4),4));
L_1803eb827_5:;
/* 1803eb82a: mulps xmm2, xmm5 */
L_1803eb82a_0:;
L_1803eb82a_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803eb82a_2:;
wr(s->r,4740,4,fb(fv(rd(s->r,4740,4),4)*fv(rd(s->r,4932,4),4),4));
L_1803eb82a_3:;
wr(s->r,4744,4,fb(fv(rd(s->r,4744,4),4)*fv(rd(s->r,4936,4),4),4));
L_1803eb82a_4:;
wr(s->r,4748,4,fb(fv(rd(s->r,4748,4),4)*fv(rd(s->r,4940,4),4),4));
L_1803eb82a_5:;
/* 1803eb82d: subps xmm3, xmm2 */
L_1803eb82d_0:;
L_1803eb82d_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803eb82d_2:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)-fv(rd(s->r,4740,4),4),4));
L_1803eb82d_3:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)-fv(rd(s->r,4744,4),4),4));
L_1803eb82d_4:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)-fv(rd(s->r,4748,4),4),4));
L_1803eb82d_5:;
/* 1803eb830: addps xmm3, xmm4 */
L_1803eb830_0:;
L_1803eb830_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803eb830_2:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)+fv(rd(s->r,4868,4),4),4));
L_1803eb830_3:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)+fv(rd(s->r,4872,4),4),4));
L_1803eb830_4:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)+fv(rd(s->r,4876,4),4),4));
L_1803eb830_5:;
/* 1803eb833: movaps xmmword ptr [rcx - 0x10], xmm3 */
L_1803eb833_0:;
L_1803eb833_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb833_2:;
wr(s->u,24,16,rd(s->r,4800,16));
L_1803eb833_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,24,16));
L_1803eb833_4:;
/* 1803eb837: jne 0x1803eb800 */
L_1803eb837_0:;
L_1803eb837_1:;
wr(s->u,40,1,(!rd(s->r,518,1)));
L_1803eb837_2:;
if(rd(s->u,40,1)){goto L_1803eb800_0;}
L_1803eb837_3:;
return UINT64_C(0x1803eb839);
}
uint64_t b_1803eb830(CPU*s){
/* 1803eb830: addps xmm3, xmm4 */
L_1803eb830_0:;
L_1803eb830_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803eb830_2:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)+fv(rd(s->r,4868,4),4),4));
L_1803eb830_3:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)+fv(rd(s->r,4872,4),4),4));
L_1803eb830_4:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)+fv(rd(s->r,4876,4),4),4));
L_1803eb830_5:;
/* 1803eb833: movaps xmmword ptr [rcx - 0x10], xmm3 */
L_1803eb833_0:;
L_1803eb833_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803eb833_2:;
wr(s->u,8,16,rd(s->r,4800,16));
L_1803eb833_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,8,16));
L_1803eb833_4:;
/* 1803eb837: jne 0x1803eb800 */
L_1803eb837_0:;
L_1803eb837_1:;
wr(s->u,24,1,(!rd(s->r,518,1)));
L_1803eb837_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803eb800);}
L_1803eb837_3:;
return UINT64_C(0x1803eb839);
}
uint64_t b_1803eb839(CPU*s){
/* 1803eb839: movaps xmm8, xmmword ptr [rsp] */
L_1803eb839_0:;
L_1803eb839_1:;
wr(s->u,8,16,mr((uint64_t)rd(s->r,32,8),16));
L_1803eb839_2:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803eb839_3:;
wr(s->r,5120,4,rd(s->u,34,4));
L_1803eb839_4:;
wr(s->r,5124,4,rd(s->u,38,4));
L_1803eb839_5:;
wr(s->r,5128,4,rd(s->u,42,4));
L_1803eb839_6:;
wr(s->r,5132,4,rd(s->u,46,4));
L_1803eb839_7:;
/* 1803eb83e: movaps xmm7, xmmword ptr [rsp + 0x10] */
L_1803eb83e_0:;
L_1803eb83e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803eb83e_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803eb83e_3:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803eb83e_4:;
wr(s->r,5056,4,rd(s->u,34,4));
L_1803eb83e_5:;
wr(s->r,5060,4,rd(s->u,38,4));
L_1803eb83e_6:;
wr(s->r,5064,4,rd(s->u,42,4));
L_1803eb83e_7:;
wr(s->r,5068,4,rd(s->u,46,4));
L_1803eb83e_8:;
/* 1803eb843: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803eb843_0:;
L_1803eb843_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803eb843_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803eb843_3:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803eb843_4:;
wr(s->r,4992,4,rd(s->u,34,4));
L_1803eb843_5:;
wr(s->r,4996,4,rd(s->u,38,4));
L_1803eb843_6:;
wr(s->r,5000,4,rd(s->u,42,4));
L_1803eb843_7:;
wr(s->r,5004,4,rd(s->u,46,4));
L_1803eb843_8:;
/* 1803eb848: add rsp, 0x38 */
L_1803eb848_0:;
L_1803eb848_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb848_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803eb848_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803eb848_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb848_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb848_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb848_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803eb848_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803eb848_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803eb848_10:;
/* 1803eb84c: repz ret  */
L_1803eb84c_0:;
L_1803eb84c_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb84c_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb84c_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb84c_4:;
return UINT64_C(0x1803eb84e);
}
uint64_t b_1803eb84c(CPU*s){
/* 1803eb84c: repz ret  */
L_1803eb84c_0:;
L_1803eb84c_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb84c_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb84c_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb84c_4:;
return UINT64_C(0x1803eb84e);
}
uint64_t b_1803eb850(CPU*s){
/* 1803eb850: push rdi */
L_1803eb850_0:;
L_1803eb850_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803eb850_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb850_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803eb850_4:;
/* 1803eb852: sub rsp, 0x40 */
L_1803eb852_0:;
L_1803eb852_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x40))));
L_1803eb852_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,1));
L_1803eb852_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x40))));
L_1803eb852_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb852_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb852_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb852_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803eb852_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803eb852_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803eb852_10:;
/* 1803eb856: mov qword ptr [rsp + 0x30], 0xfffffffffffffffe */
L_1803eb856_0:;
L_1803eb856_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803eb856_2:;
wr(s->u,8,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803eb856_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803eb856_4:;
/* 1803eb85f: mov qword ptr [rsp + 0x58], rbx */
L_1803eb85f_0:;
L_1803eb85f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803eb85f_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803eb85f_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803eb85f_4:;
/* 1803eb864: mov qword ptr [rsp + 0x60], rbp */
L_1803eb864_0:;
L_1803eb864_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803eb864_2:;
wr(s->u,8,8,rd(s->r,40,8));
L_1803eb864_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803eb864_4:;
/* 1803eb869: mov qword ptr [rsp + 0x68], rsi */
L_1803eb869_0:;
L_1803eb869_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803eb869_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803eb869_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803eb869_4:;
/* 1803eb86e: mov esi, r9d */
L_1803eb86e_0:;
L_1803eb86e_1:;
wr(s->r,48,4,rd(s->r,136,4));
L_1803eb86e_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803eb86e_3:;
/* 1803eb871: mov ebp, r8d */
L_1803eb871_0:;
L_1803eb871_1:;
wr(s->r,40,4,rd(s->r,128,4));
L_1803eb871_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803eb871_3:;
/* 1803eb874: mov rdi, rcx */
L_1803eb874_0:;
L_1803eb874_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803eb874_2:;
/* 1803eb877: xor ebx, ebx */
L_1803eb877_0:;
L_1803eb877_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803eb877_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eb877_3:;
wr(s->r,24,4,(rd(s->r,24,4)^rd(s->r,24,4)));
L_1803eb877_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803eb877_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb877_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803eb877_7:;
wr(s->u,24,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803eb877_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803eb877_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803eb877_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803eb877_11:;
/* 1803eb879: mov qword ptr [rcx], rbx */
L_1803eb879_0:;
L_1803eb879_1:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803eb879_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,8,8));
L_1803eb879_3:;
/* 1803eb87c: test edx, edx */
L_1803eb87c_0:;
L_1803eb87c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803eb87c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eb87c_3:;
wr(s->u,34,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803eb87c_4:;
wr(s->r,519,1,(sx(rd(s->u,34,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb87c_5:;
wr(s->r,518,1,(rd(s->u,34,4)==((U)UINT64_C(0x0))));
L_1803eb87c_6:;
wr(s->u,24,4,(rd(s->u,34,4)&((U)UINT64_C(0xff))));
L_1803eb87c_7:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803eb87c_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803eb87c_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803eb87c_10:;
/* 1803eb87e: je 0x1803eb8c0 */
L_1803eb87e_0:;
L_1803eb87e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803eb8c0);}
L_1803eb87e_2:;
return UINT64_C(0x1803eb880);
}
uint64_t b_1803eb880(CPU*s){
/* 1803eb880: cmp edx, 1 */
L_1803eb880_0:;
L_1803eb880_1:;
wr(s->u,6,4,rd(s->r,16,4));
L_1803eb880_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x1))));
L_1803eb880_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x1)),4,1));
L_1803eb880_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x1))));
L_1803eb880_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb880_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803eb880_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803eb880_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803eb880_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803eb880_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803eb880_11:;
/* 1803eb883: je 0x1803eb88c */
L_1803eb883_0:;
L_1803eb883_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803eb88c);}
L_1803eb883_2:;
return UINT64_C(0x1803eb885);
}
uint64_t b_1803eb885(CPU*s){
/* 1803eb885: mov eax, 0x4c4b43 */
L_1803eb885_0:;
L_1803eb885_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803eb885_2:;
/* 1803eb88a: jmp 0x1803eb900 */
L_1803eb88a_0:;
L_1803eb88a_1:;
return UINT64_C(0x1803eb900);
L_1803eb88a_2:;
return UINT64_C(0x1803eb88c);
}
uint64_t b_1803eb88c(CPU*s){
/* 1803eb88c: mov ecx, 0x98 */
L_1803eb88c_0:;
L_1803eb88c_1:;
wr(s->r,8,8,((U)UINT64_C(0x98)));
L_1803eb88c_2:;
/* 1803eb891: call 0x180003140 */
L_1803eb891_0:;
L_1803eb891_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb891_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eb896)));
L_1803eb891_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803eb891_4:;
return UINT64_C(0x1803eb896);
}
uint64_t b_1803eb896(CPU*s){
/* 1803eb896: mov qword ptr [rsp + 0x50], rax */
L_1803eb896_0:;
L_1803eb896_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803eb896_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803eb896_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803eb896_4:;
/* 1803eb89b: test rax, rax */
L_1803eb89b_0:;
L_1803eb89b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803eb89b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eb89b_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803eb89b_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb89b_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803eb89b_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803eb89b_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803eb89b_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803eb89b_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803eb89b_10:;
/* 1803eb89e: je 0x1803eb8b8 */
L_1803eb89e_0:;
L_1803eb89e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803eb8b8);}
L_1803eb89e_2:;
return UINT64_C(0x1803eb8a0);
}
uint64_t b_1803eb8a0(CPU*s){
/* 1803eb8a0: mov dword ptr [rsp + 0x20], ebx */
L_1803eb8a0_0:;
L_1803eb8a0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803eb8a0_2:;
wr(s->u,8,4,rd(s->r,24,4));
L_1803eb8a0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803eb8a0_4:;
/* 1803eb8a4: mov r9d, dword ptr [rsp + 0x70] */
L_1803eb8a4_0:;
L_1803eb8a4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803eb8a4_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb8a4_3:;
wr(s->r,136,4,rd(s->u,12,4));
L_1803eb8a4_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803eb8a4_5:;
/* 1803eb8a9: mov r8d, esi */
L_1803eb8a9_0:;
L_1803eb8a9_1:;
wr(s->r,128,4,rd(s->r,48,4));
L_1803eb8a9_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803eb8a9_3:;
/* 1803eb8ac: mov edx, ebp */
L_1803eb8ac_0:;
L_1803eb8ac_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803eb8ac_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803eb8ac_3:;
/* 1803eb8ae: mov rcx, rax */
L_1803eb8ae_0:;
L_1803eb8ae_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803eb8ae_2:;
/* 1803eb8b1: call 0x1803ef490 */
L_1803eb8b1_0:;
L_1803eb8b1_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb8b1_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eb8b6)));
L_1803eb8b1_3:;
return (uint64_t)UINT64_C(0x1803ef490);
L_1803eb8b1_4:;
return UINT64_C(0x1803eb8b6);
}
uint64_t b_1803eb8b6(CPU*s){
/* 1803eb8b6: jmp 0x1803eb8bb */
L_1803eb8b6_0:;
L_1803eb8b6_1:;
return UINT64_C(0x1803eb8bb);
L_1803eb8b6_2:;
return UINT64_C(0x1803eb8b8);
}
uint64_t b_1803eb8b8(CPU*s){
/* 1803eb8b8: mov rax, rbx */
L_1803eb8b8_0:;
L_1803eb8b8_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803eb8b8_2:;
/* 1803eb8bb: mov qword ptr [rdi], rax */
L_1803eb8bb_0:;
L_1803eb8bb_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803eb8bb_2:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,0,8));
L_1803eb8bb_3:;
/* 1803eb8be: jmp 0x1803eb8f2 */
L_1803eb8be_0:;
L_1803eb8be_1:;
return UINT64_C(0x1803eb8f2);
L_1803eb8be_2:;
return UINT64_C(0x1803eb8c0);
}
uint64_t b_1803eb8bb(CPU*s){
/* 1803eb8bb: mov qword ptr [rdi], rax */
L_1803eb8bb_0:;
L_1803eb8bb_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803eb8bb_2:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,0,8));
L_1803eb8bb_3:;
/* 1803eb8be: jmp 0x1803eb8f2 */
L_1803eb8be_0:;
L_1803eb8be_1:;
return UINT64_C(0x1803eb8f2);
L_1803eb8be_2:;
return UINT64_C(0x1803eb8c0);
}
uint64_t b_1803eb8c0(CPU*s){
/* 1803eb8c0: mov ecx, 0x90 */
L_1803eb8c0_0:;
L_1803eb8c0_1:;
wr(s->r,8,8,((U)UINT64_C(0x90)));
L_1803eb8c0_2:;
/* 1803eb8c5: call 0x180003140 */
L_1803eb8c5_0:;
L_1803eb8c5_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb8c5_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eb8ca)));
L_1803eb8c5_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803eb8c5_4:;
return UINT64_C(0x1803eb8ca);
}
uint64_t b_1803eb8ca(CPU*s){
/* 1803eb8ca: mov qword ptr [rsp + 0x50], rax */
L_1803eb8ca_0:;
L_1803eb8ca_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803eb8ca_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803eb8ca_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803eb8ca_4:;
/* 1803eb8cf: test rax, rax */
L_1803eb8cf_0:;
L_1803eb8cf_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803eb8cf_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eb8cf_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803eb8cf_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb8cf_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803eb8cf_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803eb8cf_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803eb8cf_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803eb8cf_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803eb8cf_10:;
/* 1803eb8d2: je 0x1803eb8ec */
L_1803eb8d2_0:;
L_1803eb8d2_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803eb8ec);}
L_1803eb8d2_2:;
return UINT64_C(0x1803eb8d4);
}
uint64_t b_1803eb8d4(CPU*s){
/* 1803eb8d4: mov dword ptr [rsp + 0x20], ebx */
L_1803eb8d4_0:;
L_1803eb8d4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803eb8d4_2:;
wr(s->u,8,4,rd(s->r,24,4));
L_1803eb8d4_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803eb8d4_4:;
/* 1803eb8d8: mov r9d, dword ptr [rsp + 0x70] */
L_1803eb8d8_0:;
L_1803eb8d8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803eb8d8_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb8d8_3:;
wr(s->r,136,4,rd(s->u,12,4));
L_1803eb8d8_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803eb8d8_5:;
/* 1803eb8dd: mov r8d, esi */
L_1803eb8dd_0:;
L_1803eb8dd_1:;
wr(s->r,128,4,rd(s->r,48,4));
L_1803eb8dd_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803eb8dd_3:;
/* 1803eb8e0: mov edx, ebp */
L_1803eb8e0_0:;
L_1803eb8e0_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803eb8e0_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803eb8e0_3:;
/* 1803eb8e2: mov rcx, rax */
L_1803eb8e2_0:;
L_1803eb8e2_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803eb8e2_2:;
/* 1803eb8e5: call 0x1803ee840 */
L_1803eb8e5_0:;
L_1803eb8e5_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb8e5_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eb8ea)));
L_1803eb8e5_3:;
return (uint64_t)UINT64_C(0x1803ee840);
L_1803eb8e5_4:;
return UINT64_C(0x1803eb8ea);
}
uint64_t b_1803eb8ea(CPU*s){
/* 1803eb8ea: jmp 0x1803eb8ef */
L_1803eb8ea_0:;
L_1803eb8ea_1:;
return UINT64_C(0x1803eb8ef);
L_1803eb8ea_2:;
return UINT64_C(0x1803eb8ec);
}
uint64_t b_1803eb8ec(CPU*s){
/* 1803eb8ec: mov rax, rbx */
L_1803eb8ec_0:;
L_1803eb8ec_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803eb8ec_2:;
/* 1803eb8ef: mov qword ptr [rdi], rax */
L_1803eb8ef_0:;
L_1803eb8ef_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803eb8ef_2:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,8,8));
L_1803eb8ef_3:;
/* 1803eb8f2: mov eax, 0xf4241 */
L_1803eb8f2_0:;
L_1803eb8f2_1:;
wr(s->r,0,8,((U)UINT64_C(0xf4241)));
L_1803eb8f2_2:;
/* 1803eb8f7: cmp qword ptr [rdi], 0 */
L_1803eb8f7_0:;
L_1803eb8f7_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803eb8f7_2:;
wr(s->u,39,8,rd(s->u,16,8));
L_1803eb8f7_3:;
wr(s->r,512,1,(rd(s->u,39,8)<((U)UINT64_C(0x0))));
L_1803eb8f7_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,39,8),((U)UINT64_C(0x0)),8,1));
L_1803eb8f7_5:;
wr(s->u,47,8,(rd(s->u,39,8)-((U)UINT64_C(0x0))));
L_1803eb8f7_6:;
wr(s->r,519,1,(sx(rd(s->u,47,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb8f7_7:;
wr(s->r,518,1,(rd(s->u,47,8)==((U)UINT64_C(0x0))));
L_1803eb8f7_8:;
wr(s->u,24,8,(rd(s->u,47,8)&((U)UINT64_C(0xff))));
L_1803eb8f7_9:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803eb8f7_10:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803eb8f7_11:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803eb8f7_12:;
/* 1803eb8fb: cmove ebx, eax */
L_1803eb8fb_0:;
L_1803eb8fb_1:;
wr(s->u,34,4,rd(s->r,0,4));
L_1803eb8fb_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803eb8fb_3:;
wr(s->u,38,1,(!rd(s->r,518,1)));
L_1803eb8fb_4:;
if(rd(s->u,38,1)){goto L_1803eb8fe_0;}
L_1803eb8fb_5:;
wr(s->r,24,4,rd(s->u,34,4));
L_1803eb8fb_6:;
/* 1803eb8fe: mov eax, ebx */
L_1803eb8fe_0:;
L_1803eb8fe_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803eb8fe_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb8fe_3:;
/* 1803eb900: mov rbx, qword ptr [rsp + 0x58] */
L_1803eb900_0:;
L_1803eb900_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803eb900_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb900_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803eb900_4:;
/* 1803eb905: mov rbp, qword ptr [rsp + 0x60] */
L_1803eb905_0:;
L_1803eb905_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803eb905_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb905_3:;
wr(s->r,40,8,rd(s->u,16,8));
L_1803eb905_4:;
/* 1803eb90a: mov rsi, qword ptr [rsp + 0x68] */
L_1803eb90a_0:;
L_1803eb90a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803eb90a_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb90a_3:;
wr(s->r,48,8,rd(s->u,16,8));
L_1803eb90a_4:;
/* 1803eb90f: add rsp, 0x40 */
L_1803eb90f_0:;
L_1803eb90f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb90f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803eb90f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803eb90f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb90f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb90f_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb90f_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803eb90f_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803eb90f_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803eb90f_10:;
/* 1803eb913: pop rdi */
L_1803eb913_0:;
L_1803eb913_1:;
wr(s->u,55,8,((U)UINT64_C(0x0)));
L_1803eb913_2:;
wr(s->u,55,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb913_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb913_4:;
wr(s->r,56,8,rd(s->u,55,8));
L_1803eb913_5:;
/* 1803eb914: ret  */
L_1803eb914_0:;
L_1803eb914_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb914_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb914_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb914_4:;
return UINT64_C(0x1803eb915);
}
uint64_t b_1803eb8ef(CPU*s){
/* 1803eb8ef: mov qword ptr [rdi], rax */
L_1803eb8ef_0:;
L_1803eb8ef_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803eb8ef_2:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,8,8));
L_1803eb8ef_3:;
/* 1803eb8f2: mov eax, 0xf4241 */
L_1803eb8f2_0:;
L_1803eb8f2_1:;
wr(s->r,0,8,((U)UINT64_C(0xf4241)));
L_1803eb8f2_2:;
/* 1803eb8f7: cmp qword ptr [rdi], 0 */
L_1803eb8f7_0:;
L_1803eb8f7_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803eb8f7_2:;
wr(s->u,39,8,rd(s->u,16,8));
L_1803eb8f7_3:;
wr(s->r,512,1,(rd(s->u,39,8)<((U)UINT64_C(0x0))));
L_1803eb8f7_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,39,8),((U)UINT64_C(0x0)),8,1));
L_1803eb8f7_5:;
wr(s->u,47,8,(rd(s->u,39,8)-((U)UINT64_C(0x0))));
L_1803eb8f7_6:;
wr(s->r,519,1,(sx(rd(s->u,47,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb8f7_7:;
wr(s->r,518,1,(rd(s->u,47,8)==((U)UINT64_C(0x0))));
L_1803eb8f7_8:;
wr(s->u,24,8,(rd(s->u,47,8)&((U)UINT64_C(0xff))));
L_1803eb8f7_9:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803eb8f7_10:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803eb8f7_11:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803eb8f7_12:;
/* 1803eb8fb: cmove ebx, eax */
L_1803eb8fb_0:;
L_1803eb8fb_1:;
wr(s->u,34,4,rd(s->r,0,4));
L_1803eb8fb_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803eb8fb_3:;
wr(s->u,38,1,(!rd(s->r,518,1)));
L_1803eb8fb_4:;
if(rd(s->u,38,1)){goto L_1803eb8fe_0;}
L_1803eb8fb_5:;
wr(s->r,24,4,rd(s->u,34,4));
L_1803eb8fb_6:;
/* 1803eb8fe: mov eax, ebx */
L_1803eb8fe_0:;
L_1803eb8fe_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803eb8fe_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb8fe_3:;
/* 1803eb900: mov rbx, qword ptr [rsp + 0x58] */
L_1803eb900_0:;
L_1803eb900_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803eb900_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb900_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803eb900_4:;
/* 1803eb905: mov rbp, qword ptr [rsp + 0x60] */
L_1803eb905_0:;
L_1803eb905_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803eb905_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb905_3:;
wr(s->r,40,8,rd(s->u,16,8));
L_1803eb905_4:;
/* 1803eb90a: mov rsi, qword ptr [rsp + 0x68] */
L_1803eb90a_0:;
L_1803eb90a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803eb90a_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb90a_3:;
wr(s->r,48,8,rd(s->u,16,8));
L_1803eb90a_4:;
/* 1803eb90f: add rsp, 0x40 */
L_1803eb90f_0:;
L_1803eb90f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb90f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803eb90f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803eb90f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb90f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb90f_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb90f_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803eb90f_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803eb90f_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803eb90f_10:;
/* 1803eb913: pop rdi */
L_1803eb913_0:;
L_1803eb913_1:;
wr(s->u,55,8,((U)UINT64_C(0x0)));
L_1803eb913_2:;
wr(s->u,55,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb913_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb913_4:;
wr(s->r,56,8,rd(s->u,55,8));
L_1803eb913_5:;
/* 1803eb914: ret  */
L_1803eb914_0:;
L_1803eb914_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb914_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb914_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb914_4:;
return UINT64_C(0x1803eb915);
}
uint64_t b_1803eb8f2(CPU*s){
/* 1803eb8f2: mov eax, 0xf4241 */
L_1803eb8f2_0:;
L_1803eb8f2_1:;
wr(s->r,0,8,((U)UINT64_C(0xf4241)));
L_1803eb8f2_2:;
/* 1803eb8f7: cmp qword ptr [rdi], 0 */
L_1803eb8f7_0:;
L_1803eb8f7_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803eb8f7_2:;
wr(s->u,31,8,rd(s->u,8,8));
L_1803eb8f7_3:;
wr(s->r,512,1,(rd(s->u,31,8)<((U)UINT64_C(0x0))));
L_1803eb8f7_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,31,8),((U)UINT64_C(0x0)),8,1));
L_1803eb8f7_5:;
wr(s->u,39,8,(rd(s->u,31,8)-((U)UINT64_C(0x0))));
L_1803eb8f7_6:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb8f7_7:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803eb8f7_8:;
wr(s->u,16,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803eb8f7_9:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803eb8f7_10:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803eb8f7_11:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803eb8f7_12:;
/* 1803eb8fb: cmove ebx, eax */
L_1803eb8fb_0:;
L_1803eb8fb_1:;
wr(s->u,26,4,rd(s->r,0,4));
L_1803eb8fb_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803eb8fb_3:;
wr(s->u,30,1,(!rd(s->r,518,1)));
L_1803eb8fb_4:;
if(rd(s->u,30,1)){goto L_1803eb8fe_0;}
L_1803eb8fb_5:;
wr(s->r,24,4,rd(s->u,26,4));
L_1803eb8fb_6:;
/* 1803eb8fe: mov eax, ebx */
L_1803eb8fe_0:;
L_1803eb8fe_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803eb8fe_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb8fe_3:;
/* 1803eb900: mov rbx, qword ptr [rsp + 0x58] */
L_1803eb900_0:;
L_1803eb900_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803eb900_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb900_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803eb900_4:;
/* 1803eb905: mov rbp, qword ptr [rsp + 0x60] */
L_1803eb905_0:;
L_1803eb905_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803eb905_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb905_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803eb905_4:;
/* 1803eb90a: mov rsi, qword ptr [rsp + 0x68] */
L_1803eb90a_0:;
L_1803eb90a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803eb90a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb90a_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803eb90a_4:;
/* 1803eb90f: add rsp, 0x40 */
L_1803eb90f_0:;
L_1803eb90f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb90f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803eb90f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803eb90f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb90f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb90f_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb90f_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803eb90f_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803eb90f_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803eb90f_10:;
/* 1803eb913: pop rdi */
L_1803eb913_0:;
L_1803eb913_1:;
wr(s->u,47,8,((U)UINT64_C(0x0)));
L_1803eb913_2:;
wr(s->u,47,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb913_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb913_4:;
wr(s->r,56,8,rd(s->u,47,8));
L_1803eb913_5:;
/* 1803eb914: ret  */
L_1803eb914_0:;
L_1803eb914_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb914_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb914_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb914_4:;
return UINT64_C(0x1803eb915);
}
uint64_t b_1803eb8fe(CPU*s){
/* 1803eb8fe: mov eax, ebx */
L_1803eb8fe_0:;
L_1803eb8fe_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803eb8fe_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb8fe_3:;
/* 1803eb900: mov rbx, qword ptr [rsp + 0x58] */
L_1803eb900_0:;
L_1803eb900_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803eb900_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb900_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803eb900_4:;
/* 1803eb905: mov rbp, qword ptr [rsp + 0x60] */
L_1803eb905_0:;
L_1803eb905_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803eb905_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb905_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803eb905_4:;
/* 1803eb90a: mov rsi, qword ptr [rsp + 0x68] */
L_1803eb90a_0:;
L_1803eb90a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803eb90a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb90a_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803eb90a_4:;
/* 1803eb90f: add rsp, 0x40 */
L_1803eb90f_0:;
L_1803eb90f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb90f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803eb90f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803eb90f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb90f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb90f_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb90f_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803eb90f_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803eb90f_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803eb90f_10:;
/* 1803eb913: pop rdi */
L_1803eb913_0:;
L_1803eb913_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803eb913_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb913_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb913_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803eb913_5:;
/* 1803eb914: ret  */
L_1803eb914_0:;
L_1803eb914_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb914_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb914_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb914_4:;
return UINT64_C(0x1803eb915);
}
uint64_t b_1803eb900(CPU*s){
/* 1803eb900: mov rbx, qword ptr [rsp + 0x58] */
L_1803eb900_0:;
L_1803eb900_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803eb900_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb900_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803eb900_4:;
/* 1803eb905: mov rbp, qword ptr [rsp + 0x60] */
L_1803eb905_0:;
L_1803eb905_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803eb905_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb905_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803eb905_4:;
/* 1803eb90a: mov rsi, qword ptr [rsp + 0x68] */
L_1803eb90a_0:;
L_1803eb90a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803eb90a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb90a_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803eb90a_4:;
/* 1803eb90f: add rsp, 0x40 */
L_1803eb90f_0:;
L_1803eb90f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb90f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803eb90f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803eb90f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb90f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb90f_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb90f_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803eb90f_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803eb90f_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803eb90f_10:;
/* 1803eb913: pop rdi */
L_1803eb913_0:;
L_1803eb913_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803eb913_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb913_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb913_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803eb913_5:;
/* 1803eb914: ret  */
L_1803eb914_0:;
L_1803eb914_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb914_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb914_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb914_4:;
return UINT64_C(0x1803eb915);
}
uint64_t b_1803eb920(CPU*s){
/* 1803eb920: sub rsp, 0x28 */
L_1803eb920_0:;
L_1803eb920_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803eb920_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803eb920_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803eb920_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb920_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb920_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb920_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803eb920_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803eb920_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803eb920_10:;
/* 1803eb924: test rcx, rcx */
L_1803eb924_0:;
L_1803eb924_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803eb924_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eb924_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803eb924_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb924_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803eb924_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803eb924_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803eb924_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803eb924_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803eb924_10:;
/* 1803eb927: je 0x1803eb934 */
L_1803eb927_0:;
L_1803eb927_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803eb934);}
L_1803eb927_2:;
return UINT64_C(0x1803eb929);
}
uint64_t b_1803eb929(CPU*s){
/* 1803eb929: mov rax, qword ptr [rcx] */
L_1803eb929_0:;
L_1803eb929_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803eb929_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803eb929_3:;
/* 1803eb92c: mov edx, 1 */
L_1803eb92c_0:;
L_1803eb92c_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803eb92c_2:;
/* 1803eb931: call qword ptr [rax + 0x10] */
L_1803eb931_0:;
L_1803eb931_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803eb931_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803eb931_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803eb931_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb931_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eb934)));
L_1803eb931_6:;
return (uint64_t)rd(s->u,16,8);
L_1803eb931_7:;
return UINT64_C(0x1803eb934);
}
uint64_t b_1803eb934(CPU*s){
/* 1803eb934: xor eax, eax */
L_1803eb934_0:;
L_1803eb934_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803eb934_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eb934_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803eb934_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803eb934_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eb934_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803eb934_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803eb934_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803eb934_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803eb934_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803eb934_11:;
/* 1803eb936: add rsp, 0x28 */
L_1803eb936_0:;
L_1803eb936_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb936_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803eb936_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803eb936_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb936_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb936_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb936_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803eb936_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803eb936_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803eb936_10:;
/* 1803eb93a: ret  */
L_1803eb93a_0:;
L_1803eb93a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb93a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb93a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb93a_4:;
return UINT64_C(0x1803eb93b);
}
uint64_t b_1803eb940(CPU*s){
/* 1803eb940: sub rsp, 0x38 */
L_1803eb940_0:;
L_1803eb940_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x38))));
L_1803eb940_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,1));
L_1803eb940_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x38))));
L_1803eb940_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb940_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb940_6:;
wr(s->u,25,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb940_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803eb940_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803eb940_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803eb940_10:;
/* 1803eb944: movaps xmmword ptr [rsp + 0x20], xmm7 */
L_1803eb944_0:;
L_1803eb944_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803eb944_2:;
wr(s->u,8,16,rd(s->r,5056,16));
L_1803eb944_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,8,16));
L_1803eb944_4:;
/* 1803eb949: movaps xmm7, xmm1 */
L_1803eb949_0:;
L_1803eb949_1:;
wr(s->r,5056,4,rd(s->r,4672,4));
L_1803eb949_2:;
wr(s->r,5060,4,rd(s->r,4676,4));
L_1803eb949_3:;
wr(s->r,5064,4,rd(s->r,4680,4));
L_1803eb949_4:;
wr(s->r,5068,4,rd(s->r,4684,4));
L_1803eb949_5:;
/* 1803eb94c: ucomiss xmm7, dword ptr [rip + 0x2664ed] */
L_1803eb94c_0:;
L_1803eb94c_1:;
wr(s->u,35,1,isnan(fv(rd(s->r,5056,4),4)));
L_1803eb94c_2:;
wr(s->u,36,1,isnan(fv(mr(UINT64_C(0x180651e40),4),4)));
L_1803eb94c_3:;
wr(s->r,514,1,((rd(s->u,35,1)!=0)||(rd(s->u,36,1)!=0)));
L_1803eb94c_4:;
wr(s->u,37,1,(fv(rd(s->r,5056,4),4)==fv(mr(UINT64_C(0x180651e40),4),4)));
L_1803eb94c_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,37,1)));
L_1803eb94c_6:;
wr(s->u,38,1,(fv(rd(s->r,5056,4),4)<fv(mr(UINT64_C(0x180651e40),4),4)));
L_1803eb94c_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,38,1)));
L_1803eb94c_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eb94c_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803eb94c_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803eb94c_11:;
/* 1803eb953: jne 0x1803eb967 */
L_1803eb953_0:;
L_1803eb953_1:;
wr(s->u,24,1,(!rd(s->r,518,1)));
L_1803eb953_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803eb967);}
L_1803eb953_3:;
return UINT64_C(0x1803eb955);
}
uint64_t b_1803eb955(CPU*s){
/* 1803eb955: movss xmm0, dword ptr [rip + 0x2612e7] */
L_1803eb955_0:;
L_1803eb955_1:;
wr(s->r,4608,4,mr(UINT64_C(0x18064cc44),4));
L_1803eb955_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803eb955_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803eb955_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803eb955_5:;
/* 1803eb95d: movaps xmm7, xmmword ptr [rsp + 0x20] */
L_1803eb95d_0:;
L_1803eb95d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803eb95d_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803eb95d_3:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803eb95d_4:;
wr(s->r,5056,4,rd(s->u,34,4));
L_1803eb95d_5:;
wr(s->r,5060,4,rd(s->u,38,4));
L_1803eb95d_6:;
wr(s->r,5064,4,rd(s->u,42,4));
L_1803eb95d_7:;
wr(s->r,5068,4,rd(s->u,46,4));
L_1803eb95d_8:;
/* 1803eb962: add rsp, 0x38 */
L_1803eb962_0:;
L_1803eb962_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb962_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803eb962_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803eb962_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb962_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb962_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb962_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803eb962_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803eb962_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803eb962_10:;
/* 1803eb966: ret  */
L_1803eb966_0:;
L_1803eb966_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb966_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb966_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb966_4:;
return UINT64_C(0x1803eb967);
}
uint64_t b_1803eb967(CPU*s){
/* 1803eb967: movaps xmm0, xmm1 */
L_1803eb967_0:;
L_1803eb967_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803eb967_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803eb967_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803eb967_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803eb967_5:;
/* 1803eb96a: mulss xmm0, dword ptr [rcx + 0x44] */
L_1803eb96a_0:;
L_1803eb96a_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x44))));
L_1803eb96a_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eb96a_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,8,4),4),4));
L_1803eb96a_4:;
/* 1803eb96f: mulss xmm0, dword ptr [rip + 0x26fb95] */
L_1803eb96f_0:;
L_1803eb96f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(mr(UINT64_C(0x18065b50c),4),4),4));
L_1803eb96f_2:;
/* 1803eb977: call 0x180609b0e */
L_1803eb977_0:;
L_1803eb977_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803eb977_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803eb97c)));
L_1803eb977_3:;
return (uint64_t)UINT64_C(0x180609b0e);
L_1803eb977_4:;
return UINT64_C(0x1803eb97c);
}
uint64_t b_1803eb97c(CPU*s){
/* 1803eb97c: mulss xmm7, dword ptr [rip + 0x26fb88] */
L_1803eb97c_0:;
L_1803eb97c_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(mr(UINT64_C(0x18065b50c),4),4),4));
L_1803eb97c_2:;
/* 1803eb984: divss xmm0, xmm7 */
L_1803eb984_0:;
L_1803eb984_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,5056,4),4),4));
L_1803eb984_2:;
/* 1803eb988: movaps xmm7, xmmword ptr [rsp + 0x20] */
L_1803eb988_0:;
L_1803eb988_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803eb988_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803eb988_3:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803eb988_4:;
wr(s->r,5056,4,rd(s->u,34,4));
L_1803eb988_5:;
wr(s->r,5060,4,rd(s->u,38,4));
L_1803eb988_6:;
wr(s->r,5064,4,rd(s->u,42,4));
L_1803eb988_7:;
wr(s->r,5068,4,rd(s->u,46,4));
L_1803eb988_8:;
/* 1803eb98d: add rsp, 0x38 */
L_1803eb98d_0:;
L_1803eb98d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803eb98d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803eb98d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803eb98d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eb98d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eb98d_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eb98d_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803eb98d_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803eb98d_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803eb98d_10:;
/* 1803eb991: ret  */
L_1803eb991_0:;
L_1803eb991_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803eb991_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803eb991_3:;
return (uint64_t)rd(s->r,648,8);
L_1803eb991_4:;
return UINT64_C(0x1803eb992);
}
uint64_t b_1803eba10(CPU*s){
/* 1803eba10: sub rsp, 0x28 */
L_1803eba10_0:;
L_1803eba10_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803eba10_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803eba10_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803eba10_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803eba10_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803eba10_6:;
wr(s->u,12,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803eba10_7:;
wr(s->u,20,1,pop(rd(s->u,12,8),8));
L_1803eba10_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803eba10_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803eba10_10:;
/* 1803eba14: cmp dword ptr [rcx + 0x40], 0 */
L_1803eba14_0:;
L_1803eba14_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x40))));
L_1803eba14_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eba14_3:;
wr(s->u,22,4,rd(s->u,8,4));
L_1803eba14_4:;
wr(s->r,512,1,(rd(s->u,22,4)<((U)UINT64_C(0x0))));
L_1803eba14_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,22,4),((U)UINT64_C(0x0)),4,1));
L_1803eba14_6:;
wr(s->u,26,4,(rd(s->u,22,4)-((U)UINT64_C(0x0))));
L_1803eba14_7:;
wr(s->r,519,1,(sx(rd(s->u,26,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803eba14_8:;
wr(s->r,518,1,(rd(s->u,26,4)==((U)UINT64_C(0x0))));
L_1803eba14_9:;
wr(s->u,12,4,(rd(s->u,26,4)&((U)UINT64_C(0xff))));
L_1803eba14_10:;
wr(s->u,20,1,pop(rd(s->u,12,4),4));
L_1803eba14_11:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803eba14_12:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803eba14_13:;
/* 1803eba18: movaps xmm4, xmm2 */
L_1803eba18_0:;
L_1803eba18_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803eba18_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803eba18_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803eba18_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803eba18_5:;
/* 1803eba1b: divss xmm4, xmm3 */
L_1803eba1b_0:;
L_1803eba1b_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)/fv(rd(s->r,4800,4),4),4));
L_1803eba1b_2:;
/* 1803eba1f: je 0x1803ebb8f */
L_1803eba1f_0:;
L_1803eba1f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebb8f);}
L_1803eba1f_2:;
return UINT64_C(0x1803eba25);
}
uint64_t b_1803eba25(CPU*s){
/* 1803eba25: movss xmm5, dword ptr [rip + 0x261217] */
L_1803eba25_0:;
L_1803eba25_1:;
wr(s->r,4928,4,mr(UINT64_C(0x18064cc44),4));
L_1803eba25_2:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803eba25_3:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803eba25_4:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803eba25_5:;
/* 1803eba2d: movsd xmm1, qword ptr [rip + 0x261143] */
L_1803eba2d_0:;
L_1803eba2d_1:;
wr(s->r,4672,8,mr(UINT64_C(0x18064cb78),8));
L_1803eba2d_2:;
wr(s->r,4680,8,((U)UINT64_C(0x0)));
L_1803eba2d_3:;
/* 1803eba35: movaps xmmword ptr [rsp + 0x10], xmm6 */
L_1803eba35_0:;
L_1803eba35_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803eba35_2:;
wr(s->u,8,16,rd(s->r,4992,16));
L_1803eba35_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,8,16));
L_1803eba35_4:;
/* 1803eba3a: movaps xmmword ptr [rsp], xmm7 */
L_1803eba3a_0:;
L_1803eba3a_1:;
wr(s->u,8,16,rd(s->r,5056,16));
L_1803eba3a_2:;
mw((uint64_t)rd(s->r,32,8),16,rd(s->u,8,16));
L_1803eba3a_3:;
/* 1803eba3e: comiss xmm4, xmm5 */
L_1803eba3e_0:;
L_1803eba3e_1:;
wr(s->u,25,1,isnan(fv(rd(s->r,4864,4),4)));
L_1803eba3e_2:;
wr(s->u,26,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803eba3e_3:;
wr(s->r,514,1,((rd(s->u,25,1)!=0)||(rd(s->u,26,1)!=0)));
L_1803eba3e_4:;
wr(s->u,27,1,(fv(rd(s->r,4864,4),4)==fv(rd(s->r,4928,4),4)));
L_1803eba3e_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,27,1)));
L_1803eba3e_6:;
wr(s->u,28,1,(fv(rd(s->r,4864,4),4)<fv(rd(s->r,4928,4),4)));
L_1803eba3e_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,28,1)));
L_1803eba3e_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eba3e_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803eba3e_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803eba3e_11:;
/* 1803eba41: jae 0x1803eba49 */
L_1803eba41_0:;
L_1803eba41_1:;
wr(s->u,24,1,(!rd(s->r,512,1)));
L_1803eba41_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803eba49);}
L_1803eba41_3:;
return UINT64_C(0x1803eba43);
}
uint64_t b_1803eba35(CPU*s){
/* 1803eba35: movaps xmmword ptr [rsp + 0x10], xmm6 */
L_1803eba35_0:;
L_1803eba35_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803eba35_2:;
wr(s->u,8,16,rd(s->r,4992,16));
L_1803eba35_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,8,16));
L_1803eba35_4:;
/* 1803eba3a: movaps xmmword ptr [rsp], xmm7 */
L_1803eba3a_0:;
L_1803eba3a_1:;
wr(s->u,8,16,rd(s->r,5056,16));
L_1803eba3a_2:;
mw((uint64_t)rd(s->r,32,8),16,rd(s->u,8,16));
L_1803eba3a_3:;
/* 1803eba3e: comiss xmm4, xmm5 */
L_1803eba3e_0:;
L_1803eba3e_1:;
wr(s->u,25,1,isnan(fv(rd(s->r,4864,4),4)));
L_1803eba3e_2:;
wr(s->u,26,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803eba3e_3:;
wr(s->r,514,1,((rd(s->u,25,1)!=0)||(rd(s->u,26,1)!=0)));
L_1803eba3e_4:;
wr(s->u,27,1,(fv(rd(s->r,4864,4),4)==fv(rd(s->r,4928,4),4)));
L_1803eba3e_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,27,1)));
L_1803eba3e_6:;
wr(s->u,28,1,(fv(rd(s->r,4864,4),4)<fv(rd(s->r,4928,4),4)));
L_1803eba3e_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,28,1)));
L_1803eba3e_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eba3e_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803eba3e_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803eba3e_11:;
/* 1803eba41: jae 0x1803eba49 */
L_1803eba41_0:;
L_1803eba41_1:;
wr(s->u,24,1,(!rd(s->r,512,1)));
L_1803eba41_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803eba49);}
L_1803eba41_3:;
return UINT64_C(0x1803eba43);
}
uint64_t b_1803eba43(CPU*s){
/* 1803eba43: movapd xmm3, xmm1 */
L_1803eba43_0:;
L_1803eba43_1:;
wr(s->r,4800,8,rd(s->r,4672,8));
L_1803eba43_2:;
wr(s->r,4808,8,rd(s->r,4680,8));
L_1803eba43_3:;
/* 1803eba47: jmp 0x1803eba4f */
L_1803eba47_0:;
L_1803eba47_1:;
return UINT64_C(0x1803eba4f);
L_1803eba47_2:;
return UINT64_C(0x1803eba49);
}
uint64_t b_1803eba49(CPU*s){
/* 1803eba49: unpcklps xmm4, xmm4 */
L_1803eba49_0:;
L_1803eba49_1:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803eba49_2:;
wr(s->r,4876,4,rd(s->r,4868,4));
L_1803eba49_3:;
wr(s->r,4868,4,rd(s->r,4864,4));
L_1803eba49_4:;
/* 1803eba4c: cvtps2pd xmm3, xmm4 */
L_1803eba4c_0:;
L_1803eba4c_1:;
wr(s->u,25,8,rd(s->r,4864,8));
L_1803eba4c_2:;
wr(s->r,4800,8,fb(fv(rd(s->u,25,4),4),8));
L_1803eba4c_3:;
wr(s->r,4808,8,fb(fv(rd(s->u,29,4),4),8));
L_1803eba4c_4:;
/* 1803eba4f: movd xmm6, dword ptr [rcx + 0x2c] */
L_1803eba4f_0:;
L_1803eba4f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x2c))));
L_1803eba4f_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eba4f_3:;
wr(s->r,4992,16,rd(s->u,8,4));
L_1803eba4f_4:;
/* 1803eba54: movd xmm2, dword ptr [rcx + 0x10] */
L_1803eba54_0:;
L_1803eba54_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803eba54_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eba54_3:;
wr(s->r,4736,16,rd(s->u,8,4));
L_1803eba54_4:;
/* 1803eba59: cvtdq2pd xmm6, xmm6 */
L_1803eba59_0:;
L_1803eba59_1:;
wr(s->u,17,8,rd(s->r,4992,8));
L_1803eba59_2:;
wr(s->r,4992,8,fb((double)sx(rd(s->u,17,4),4),8));
L_1803eba59_3:;
wr(s->r,5000,8,fb((double)sx(rd(s->u,21,4),4),8));
L_1803eba59_4:;
/* 1803eba5d: cvtdq2pd xmm2, xmm2 */
L_1803eba5d_0:;
L_1803eba5d_1:;
wr(s->u,17,8,rd(s->r,4736,8));
L_1803eba5d_2:;
wr(s->r,4736,8,fb((double)sx(rd(s->u,17,4),4),8));
L_1803eba5d_3:;
wr(s->r,4744,8,fb((double)sx(rd(s->u,21,4),4),8));
L_1803eba5d_4:;
/* 1803eba61: movapd xmm0, xmm6 */
L_1803eba61_0:;
L_1803eba61_1:;
wr(s->r,4608,8,rd(s->r,4992,8));
L_1803eba61_2:;
wr(s->r,4616,8,rd(s->r,5000,8));
L_1803eba61_3:;
/* 1803eba65: mulsd xmm0, xmm3 */
L_1803eba65_0:;
L_1803eba65_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803eba65_2:;
/* 1803eba69: addsd xmm0, xmm1 */
L_1803eba69_0:;
L_1803eba69_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803eba69_2:;
/* 1803eba6d: comisd xmm2, xmm0 */
L_1803eba6d_0:;
L_1803eba6d_1:;
wr(s->u,13,1,isnan(fv(rd(s->r,4736,8),8)));
L_1803eba6d_2:;
wr(s->u,14,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803eba6d_3:;
wr(s->r,514,1,((rd(s->u,13,1)!=0)||(rd(s->u,14,1)!=0)));
L_1803eba6d_4:;
wr(s->u,15,1,(fv(rd(s->r,4736,8),8)==fv(rd(s->r,4608,8),8)));
L_1803eba6d_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,15,1)));
L_1803eba6d_6:;
wr(s->u,16,1,(fv(rd(s->r,4736,8),8)<fv(rd(s->r,4608,8),8)));
L_1803eba6d_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,16,1)));
L_1803eba6d_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eba6d_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803eba6d_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803eba6d_11:;
/* 1803eba71: jbe 0x1803eba79 */
L_1803eba71_0:;
L_1803eba71_1:;
wr(s->u,12,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803eba71_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803eba79);}
L_1803eba71_3:;
return UINT64_C(0x1803eba73);
}
uint64_t b_1803eba4f(CPU*s){
/* 1803eba4f: movd xmm6, dword ptr [rcx + 0x2c] */
L_1803eba4f_0:;
L_1803eba4f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x2c))));
L_1803eba4f_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eba4f_3:;
wr(s->r,4992,16,rd(s->u,8,4));
L_1803eba4f_4:;
/* 1803eba54: movd xmm2, dword ptr [rcx + 0x10] */
L_1803eba54_0:;
L_1803eba54_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803eba54_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803eba54_3:;
wr(s->r,4736,16,rd(s->u,8,4));
L_1803eba54_4:;
/* 1803eba59: cvtdq2pd xmm6, xmm6 */
L_1803eba59_0:;
L_1803eba59_1:;
wr(s->u,17,8,rd(s->r,4992,8));
L_1803eba59_2:;
wr(s->r,4992,8,fb((double)sx(rd(s->u,17,4),4),8));
L_1803eba59_3:;
wr(s->r,5000,8,fb((double)sx(rd(s->u,21,4),4),8));
L_1803eba59_4:;
/* 1803eba5d: cvtdq2pd xmm2, xmm2 */
L_1803eba5d_0:;
L_1803eba5d_1:;
wr(s->u,17,8,rd(s->r,4736,8));
L_1803eba5d_2:;
wr(s->r,4736,8,fb((double)sx(rd(s->u,17,4),4),8));
L_1803eba5d_3:;
wr(s->r,4744,8,fb((double)sx(rd(s->u,21,4),4),8));
L_1803eba5d_4:;
/* 1803eba61: movapd xmm0, xmm6 */
L_1803eba61_0:;
L_1803eba61_1:;
wr(s->r,4608,8,rd(s->r,4992,8));
L_1803eba61_2:;
wr(s->r,4616,8,rd(s->r,5000,8));
L_1803eba61_3:;
/* 1803eba65: mulsd xmm0, xmm3 */
L_1803eba65_0:;
L_1803eba65_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803eba65_2:;
/* 1803eba69: addsd xmm0, xmm1 */
L_1803eba69_0:;
L_1803eba69_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803eba69_2:;
/* 1803eba6d: comisd xmm2, xmm0 */
L_1803eba6d_0:;
L_1803eba6d_1:;
wr(s->u,13,1,isnan(fv(rd(s->r,4736,8),8)));
L_1803eba6d_2:;
wr(s->u,14,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803eba6d_3:;
wr(s->r,514,1,((rd(s->u,13,1)!=0)||(rd(s->u,14,1)!=0)));
L_1803eba6d_4:;
wr(s->u,15,1,(fv(rd(s->r,4736,8),8)==fv(rd(s->r,4608,8),8)));
L_1803eba6d_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,15,1)));
L_1803eba6d_6:;
wr(s->u,16,1,(fv(rd(s->r,4736,8),8)<fv(rd(s->r,4608,8),8)));
L_1803eba6d_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,16,1)));
L_1803eba6d_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eba6d_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803eba6d_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803eba6d_11:;
/* 1803eba71: jbe 0x1803eba79 */
L_1803eba71_0:;
L_1803eba71_1:;
wr(s->u,12,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803eba71_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803eba79);}
L_1803eba71_3:;
return UINT64_C(0x1803eba73);
}
uint64_t b_1803eba73(CPU*s){
/* 1803eba73: movapd xmm0, xmm2 */
L_1803eba73_0:;
L_1803eba73_1:;
wr(s->r,4608,8,rd(s->r,4736,8));
L_1803eba73_2:;
wr(s->r,4616,8,rd(s->r,4744,8));
L_1803eba73_3:;
/* 1803eba77: jmp 0x1803eba96 */
L_1803eba77_0:;
L_1803eba77_1:;
return UINT64_C(0x1803eba96);
L_1803eba77_2:;
return UINT64_C(0x1803eba79);
}
uint64_t b_1803eba79(CPU*s){
/* 1803eba79: comiss xmm4, xmm5 */
L_1803eba79_0:;
L_1803eba79_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4864,4),4)));
L_1803eba79_2:;
wr(s->u,2,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803eba79_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803eba79_4:;
wr(s->u,3,1,(fv(rd(s->r,4864,4),4)==fv(rd(s->r,4928,4),4)));
L_1803eba79_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803eba79_6:;
wr(s->u,4,1,(fv(rd(s->r,4864,4),4)<fv(rd(s->r,4928,4),4)));
L_1803eba79_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803eba79_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803eba79_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803eba79_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803eba79_11:;
/* 1803eba7c: jae 0x1803eba84 */
L_1803eba7c_0:;
L_1803eba7c_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803eba7c_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803eba84);}
L_1803eba7c_3:;
return UINT64_C(0x1803eba7e);
}
uint64_t b_1803eba7e(CPU*s){
/* 1803eba7e: movapd xmm3, xmm1 */
L_1803eba7e_0:;
L_1803eba7e_1:;
wr(s->r,4800,8,rd(s->r,4672,8));
L_1803eba7e_2:;
wr(s->r,4808,8,rd(s->r,4680,8));
L_1803eba7e_3:;
/* 1803eba82: jmp 0x1803eba8a */
L_1803eba82_0:;
L_1803eba82_1:;
return UINT64_C(0x1803eba8a);
L_1803eba82_2:;
return UINT64_C(0x1803eba84);
}
uint64_t b_1803eba84(CPU*s){
/* 1803eba84: unpcklps xmm4, xmm4 */
L_1803eba84_0:;
L_1803eba84_1:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803eba84_2:;
wr(s->r,4876,4,rd(s->r,4868,4));
L_1803eba84_3:;
wr(s->r,4868,4,rd(s->r,4864,4));
L_1803eba84_4:;
/* 1803eba87: cvtps2pd xmm3, xmm4 */
L_1803eba87_0:;
L_1803eba87_1:;
wr(s->u,26,8,rd(s->r,4864,8));
L_1803eba87_2:;
wr(s->r,4800,8,fb(fv(rd(s->u,26,4),4),8));
L_1803eba87_3:;
wr(s->r,4808,8,fb(fv(rd(s->u,30,4),4),8));
L_1803eba87_4:;
/* 1803eba8a: movapd xmm0, xmm6 */
L_1803eba8a_0:;
L_1803eba8a_1:;
wr(s->r,4608,8,rd(s->r,4992,8));
L_1803eba8a_2:;
wr(s->r,4616,8,rd(s->r,5000,8));
L_1803eba8a_3:;
/* 1803eba8e: mulsd xmm0, xmm3 */
L_1803eba8e_0:;
L_1803eba8e_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803eba8e_2:;
/* 1803eba92: addsd xmm0, xmm1 */
L_1803eba92_0:;
L_1803eba92_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803eba92_2:;
/* 1803eba96: movd xmm7, edx */
L_1803eba96_0:;
L_1803eba96_1:;
wr(s->r,5056,16,rd(s->r,16,4));
L_1803eba96_2:;
/* 1803eba9a: movabs rdx, 0x8000000000000000 */
L_1803eba9a_0:;
L_1803eba9a_1:;
wr(s->r,16,8,((U)UINT64_C(0x8000000000000000)));
L_1803eba9a_2:;
/* 1803ebaa4: cvtdq2ps xmm7, xmm7 */
L_1803ebaa4_0:;
L_1803ebaa4_1:;
wr(s->r,5056,4,fb((double)sx(rd(s->r,5056,4),4),4));
L_1803ebaa4_2:;
wr(s->r,5060,4,fb((double)sx(rd(s->r,5060,4),4),4));
L_1803ebaa4_3:;
wr(s->r,5064,4,fb((double)sx(rd(s->r,5064,4),4),4));
L_1803ebaa4_4:;
wr(s->r,5068,4,fb((double)sx(rd(s->r,5068,4),4),4));
L_1803ebaa4_5:;
/* 1803ebaa7: mulss xmm7, xmm4 */
L_1803ebaa7_0:;
L_1803ebaa7_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4864,4),4),4));
L_1803ebaa7_2:;
/* 1803ebaab: unpcklps xmm7, xmm7 */
L_1803ebaab_0:;
L_1803ebaab_1:;
wr(s->r,5064,4,rd(s->r,5060,4));
L_1803ebaab_2:;
wr(s->r,5068,4,rd(s->r,5060,4));
L_1803ebaab_3:;
wr(s->r,5060,4,rd(s->r,5056,4));
L_1803ebaab_4:;
/* 1803ebaae: cvtps2pd xmm3, xmm7 */
L_1803ebaae_0:;
L_1803ebaae_1:;
wr(s->u,26,8,rd(s->r,5056,8));
L_1803ebaae_2:;
wr(s->r,4800,8,fb(fv(rd(s->u,26,4),4),8));
L_1803ebaae_3:;
wr(s->r,4808,8,fb(fv(rd(s->u,30,4),4),8));
L_1803ebaae_4:;
/* 1803ebab1: addsd xmm3, xmm0 */
L_1803ebab1_0:;
L_1803ebab1_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->r,4608,8),8),8));
L_1803ebab1_2:;
/* 1803ebab5: xorpd xmm0, xmm0 */
L_1803ebab5_0:;
L_1803ebab5_1:;
wr(s->r,4608,8,(rd(s->r,4608,8)^rd(s->r,4608,8)));
L_1803ebab5_2:;
wr(s->r,4616,8,(rd(s->r,4616,8)^rd(s->r,4616,8)));
L_1803ebab5_3:;
/* 1803ebab9: cvttsd2si rcx, xmm3 */
L_1803ebab9_0:;
L_1803ebab9_1:;
wr(s->r,8,8,ftrunc(fv(rd(s->r,4800,8),8),8));
L_1803ebab9_2:;
/* 1803ebabe: cmp rcx, rdx */
L_1803ebabe_0:;
L_1803ebabe_1:;
wr(s->u,10,8,rd(s->r,16,8));
L_1803ebabe_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,10,8)));
L_1803ebabe_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,10,8),8,1));
L_1803ebabe_4:;
wr(s->u,18,8,(rd(s->r,8,8)-rd(s->u,10,8)));
L_1803ebabe_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebabe_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803ebabe_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803ebabe_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ebabe_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebabe_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebabe_11:;
/* 1803ebac1: je 0x1803ebaed */
L_1803ebac1_0:;
L_1803ebac1_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebaed);}
L_1803ebac1_2:;
return UINT64_C(0x1803ebac3);
}
uint64_t b_1803eba8a(CPU*s){
/* 1803eba8a: movapd xmm0, xmm6 */
L_1803eba8a_0:;
L_1803eba8a_1:;
wr(s->r,4608,8,rd(s->r,4992,8));
L_1803eba8a_2:;
wr(s->r,4616,8,rd(s->r,5000,8));
L_1803eba8a_3:;
/* 1803eba8e: mulsd xmm0, xmm3 */
L_1803eba8e_0:;
L_1803eba8e_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803eba8e_2:;
/* 1803eba92: addsd xmm0, xmm1 */
L_1803eba92_0:;
L_1803eba92_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803eba92_2:;
/* 1803eba96: movd xmm7, edx */
L_1803eba96_0:;
L_1803eba96_1:;
wr(s->r,5056,16,rd(s->r,16,4));
L_1803eba96_2:;
/* 1803eba9a: movabs rdx, 0x8000000000000000 */
L_1803eba9a_0:;
L_1803eba9a_1:;
wr(s->r,16,8,((U)UINT64_C(0x8000000000000000)));
L_1803eba9a_2:;
/* 1803ebaa4: cvtdq2ps xmm7, xmm7 */
L_1803ebaa4_0:;
L_1803ebaa4_1:;
wr(s->r,5056,4,fb((double)sx(rd(s->r,5056,4),4),4));
L_1803ebaa4_2:;
wr(s->r,5060,4,fb((double)sx(rd(s->r,5060,4),4),4));
L_1803ebaa4_3:;
wr(s->r,5064,4,fb((double)sx(rd(s->r,5064,4),4),4));
L_1803ebaa4_4:;
wr(s->r,5068,4,fb((double)sx(rd(s->r,5068,4),4),4));
L_1803ebaa4_5:;
/* 1803ebaa7: mulss xmm7, xmm4 */
L_1803ebaa7_0:;
L_1803ebaa7_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4864,4),4),4));
L_1803ebaa7_2:;
/* 1803ebaab: unpcklps xmm7, xmm7 */
L_1803ebaab_0:;
L_1803ebaab_1:;
wr(s->r,5064,4,rd(s->r,5060,4));
L_1803ebaab_2:;
wr(s->r,5068,4,rd(s->r,5060,4));
L_1803ebaab_3:;
wr(s->r,5060,4,rd(s->r,5056,4));
L_1803ebaab_4:;
/* 1803ebaae: cvtps2pd xmm3, xmm7 */
L_1803ebaae_0:;
L_1803ebaae_1:;
wr(s->u,26,8,rd(s->r,5056,8));
L_1803ebaae_2:;
wr(s->r,4800,8,fb(fv(rd(s->u,26,4),4),8));
L_1803ebaae_3:;
wr(s->r,4808,8,fb(fv(rd(s->u,30,4),4),8));
L_1803ebaae_4:;
/* 1803ebab1: addsd xmm3, xmm0 */
L_1803ebab1_0:;
L_1803ebab1_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->r,4608,8),8),8));
L_1803ebab1_2:;
/* 1803ebab5: xorpd xmm0, xmm0 */
L_1803ebab5_0:;
L_1803ebab5_1:;
wr(s->r,4608,8,(rd(s->r,4608,8)^rd(s->r,4608,8)));
L_1803ebab5_2:;
wr(s->r,4616,8,(rd(s->r,4616,8)^rd(s->r,4616,8)));
L_1803ebab5_3:;
/* 1803ebab9: cvttsd2si rcx, xmm3 */
L_1803ebab9_0:;
L_1803ebab9_1:;
wr(s->r,8,8,ftrunc(fv(rd(s->r,4800,8),8),8));
L_1803ebab9_2:;
/* 1803ebabe: cmp rcx, rdx */
L_1803ebabe_0:;
L_1803ebabe_1:;
wr(s->u,10,8,rd(s->r,16,8));
L_1803ebabe_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,10,8)));
L_1803ebabe_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,10,8),8,1));
L_1803ebabe_4:;
wr(s->u,18,8,(rd(s->r,8,8)-rd(s->u,10,8)));
L_1803ebabe_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebabe_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803ebabe_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803ebabe_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ebabe_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebabe_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebabe_11:;
/* 1803ebac1: je 0x1803ebaed */
L_1803ebac1_0:;
L_1803ebac1_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebaed);}
L_1803ebac1_2:;
return UINT64_C(0x1803ebac3);
}
uint64_t b_1803eba96(CPU*s){
/* 1803eba96: movd xmm7, edx */
L_1803eba96_0:;
L_1803eba96_1:;
wr(s->r,5056,16,rd(s->r,16,4));
L_1803eba96_2:;
/* 1803eba9a: movabs rdx, 0x8000000000000000 */
L_1803eba9a_0:;
L_1803eba9a_1:;
wr(s->r,16,8,((U)UINT64_C(0x8000000000000000)));
L_1803eba9a_2:;
/* 1803ebaa4: cvtdq2ps xmm7, xmm7 */
L_1803ebaa4_0:;
L_1803ebaa4_1:;
wr(s->r,5056,4,fb((double)sx(rd(s->r,5056,4),4),4));
L_1803ebaa4_2:;
wr(s->r,5060,4,fb((double)sx(rd(s->r,5060,4),4),4));
L_1803ebaa4_3:;
wr(s->r,5064,4,fb((double)sx(rd(s->r,5064,4),4),4));
L_1803ebaa4_4:;
wr(s->r,5068,4,fb((double)sx(rd(s->r,5068,4),4),4));
L_1803ebaa4_5:;
/* 1803ebaa7: mulss xmm7, xmm4 */
L_1803ebaa7_0:;
L_1803ebaa7_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4864,4),4),4));
L_1803ebaa7_2:;
/* 1803ebaab: unpcklps xmm7, xmm7 */
L_1803ebaab_0:;
L_1803ebaab_1:;
wr(s->r,5064,4,rd(s->r,5060,4));
L_1803ebaab_2:;
wr(s->r,5068,4,rd(s->r,5060,4));
L_1803ebaab_3:;
wr(s->r,5060,4,rd(s->r,5056,4));
L_1803ebaab_4:;
/* 1803ebaae: cvtps2pd xmm3, xmm7 */
L_1803ebaae_0:;
L_1803ebaae_1:;
wr(s->u,26,8,rd(s->r,5056,8));
L_1803ebaae_2:;
wr(s->r,4800,8,fb(fv(rd(s->u,26,4),4),8));
L_1803ebaae_3:;
wr(s->r,4808,8,fb(fv(rd(s->u,30,4),4),8));
L_1803ebaae_4:;
/* 1803ebab1: addsd xmm3, xmm0 */
L_1803ebab1_0:;
L_1803ebab1_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->r,4608,8),8),8));
L_1803ebab1_2:;
/* 1803ebab5: xorpd xmm0, xmm0 */
L_1803ebab5_0:;
L_1803ebab5_1:;
wr(s->r,4608,8,(rd(s->r,4608,8)^rd(s->r,4608,8)));
L_1803ebab5_2:;
wr(s->r,4616,8,(rd(s->r,4616,8)^rd(s->r,4616,8)));
L_1803ebab5_3:;
/* 1803ebab9: cvttsd2si rcx, xmm3 */
L_1803ebab9_0:;
L_1803ebab9_1:;
wr(s->r,8,8,ftrunc(fv(rd(s->r,4800,8),8),8));
L_1803ebab9_2:;
/* 1803ebabe: cmp rcx, rdx */
L_1803ebabe_0:;
L_1803ebabe_1:;
wr(s->u,10,8,rd(s->r,16,8));
L_1803ebabe_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,10,8)));
L_1803ebabe_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,10,8),8,1));
L_1803ebabe_4:;
wr(s->u,18,8,(rd(s->r,8,8)-rd(s->u,10,8)));
L_1803ebabe_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebabe_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803ebabe_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803ebabe_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ebabe_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebabe_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebabe_11:;
/* 1803ebac1: je 0x1803ebaed */
L_1803ebac1_0:;
L_1803ebac1_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebaed);}
L_1803ebac1_2:;
return UINT64_C(0x1803ebac3);
}
uint64_t b_1803ebac3(CPU*s){
/* 1803ebac3: pxor xmm0, xmm0 */
L_1803ebac3_0:;
L_1803ebac3_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803ebac3_2:;
/* 1803ebac7: cvtsi2sd xmm0, rcx */
L_1803ebac7_0:;
L_1803ebac7_1:;
wr(s->r,4608,8,fb((double)sx(rd(s->r,8,8),8),8));
L_1803ebac7_2:;
/* 1803ebacc: ucomisd xmm0, xmm3 */
L_1803ebacc_0:;
L_1803ebacc_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803ebacc_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4800,8),8)));
L_1803ebacc_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803ebacc_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,8),8)==fv(rd(s->r,4800,8),8)));
L_1803ebacc_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803ebacc_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,8),8)<fv(rd(s->r,4800,8),8)));
L_1803ebacc_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ebacc_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebacc_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebacc_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebacc_11:;
/* 1803ebad0: je 0x1803ebaed */
L_1803ebad0_0:;
L_1803ebad0_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebaed);}
L_1803ebad0_2:;
return UINT64_C(0x1803ebad2);
}
uint64_t b_1803ebad2(CPU*s){
/* 1803ebad2: unpcklpd xmm3, xmm3 */
L_1803ebad2_0:;
L_1803ebad2_1:;
wr(s->r,4808,8,rd(s->r,4800,8));
L_1803ebad2_2:;
/* 1803ebad6: movmskpd eax, xmm3 */
L_1803ebad6_0:;
L_1803ebad6_1:;
wr(s->r,0,4,(((rd(s->r,4800,16)>>63)&1)<<0)|(((rd(s->r,4800,16)>>127)&1)<<1));
L_1803ebad6_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebad6_3:;
/* 1803ebadb: pxor xmm3, xmm3 */
L_1803ebadb_0:;
L_1803ebadb_1:;
wr(s->r,4800,16,(rd(s->r,4800,16)^rd(s->r,4800,16)));
L_1803ebadb_2:;
/* 1803ebadf: and eax, 1 */
L_1803ebadf_0:;
L_1803ebadf_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ebadf_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebadf_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803ebadf_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebadf_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebadf_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ebadf_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ebadf_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803ebadf_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebadf_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebadf_11:;
/* 1803ebae2: xor eax, 1 */
L_1803ebae2_0:;
L_1803ebae2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ebae2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebae2_3:;
wr(s->r,0,4,(rd(s->r,0,4)^((U)UINT64_C(0x1))));
L_1803ebae2_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebae2_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebae2_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ebae2_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ebae2_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803ebae2_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebae2_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebae2_11:;
/* 1803ebae5: add rcx, rax */
L_1803ebae5_0:;
L_1803ebae5_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ebae5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,0,8),8,0));
L_1803ebae5_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,0,8)));
L_1803ebae5_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebae5_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ebae5_6:;
wr(s->u,0,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ebae5_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ebae5_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebae5_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebae5_10:;
/* 1803ebae8: cvtsi2sd xmm3, rcx */
L_1803ebae8_0:;
L_1803ebae8_1:;
wr(s->r,4800,8,fb((double)sx(rd(s->r,8,8),8),8));
L_1803ebae8_2:;
/* 1803ebaed: xorpd xmm0, xmm0 */
L_1803ebaed_0:;
L_1803ebaed_1:;
wr(s->r,4608,8,(rd(s->r,4608,8)^rd(s->r,4608,8)));
L_1803ebaed_2:;
wr(s->r,4616,8,(rd(s->r,4616,8)^rd(s->r,4616,8)));
L_1803ebaed_3:;
/* 1803ebaf1: comisd xmm3, xmm0 */
L_1803ebaf1_0:;
L_1803ebaf1_1:;
wr(s->u,10,1,isnan(fv(rd(s->r,4800,8),8)));
L_1803ebaf1_2:;
wr(s->u,11,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803ebaf1_3:;
wr(s->r,514,1,((rd(s->u,10,1)!=0)||(rd(s->u,11,1)!=0)));
L_1803ebaf1_4:;
wr(s->u,12,1,(fv(rd(s->r,4800,8),8)==fv(rd(s->r,4608,8),8)));
L_1803ebaf1_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,12,1)));
L_1803ebaf1_6:;
wr(s->u,13,1,(fv(rd(s->r,4800,8),8)<fv(rd(s->r,4608,8),8)));
L_1803ebaf1_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,13,1)));
L_1803ebaf1_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebaf1_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebaf1_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebaf1_11:;
/* 1803ebaf5: jb 0x1803ebb7d */
L_1803ebaf5_0:;
L_1803ebaf5_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ebb7d);}
L_1803ebaf5_2:;
return UINT64_C(0x1803ebafb);
}
uint64_t b_1803ebaed(CPU*s){
/* 1803ebaed: xorpd xmm0, xmm0 */
L_1803ebaed_0:;
L_1803ebaed_1:;
wr(s->r,4608,8,(rd(s->r,4608,8)^rd(s->r,4608,8)));
L_1803ebaed_2:;
wr(s->r,4616,8,(rd(s->r,4616,8)^rd(s->r,4616,8)));
L_1803ebaed_3:;
/* 1803ebaf1: comisd xmm3, xmm0 */
L_1803ebaf1_0:;
L_1803ebaf1_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4800,8),8)));
L_1803ebaf1_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803ebaf1_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803ebaf1_4:;
wr(s->u,2,1,(fv(rd(s->r,4800,8),8)==fv(rd(s->r,4608,8),8)));
L_1803ebaf1_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803ebaf1_6:;
wr(s->u,3,1,(fv(rd(s->r,4800,8),8)<fv(rd(s->r,4608,8),8)));
L_1803ebaf1_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ebaf1_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebaf1_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebaf1_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebaf1_11:;
/* 1803ebaf5: jb 0x1803ebb7d */
L_1803ebaf5_0:;
L_1803ebaf5_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ebb7d);}
L_1803ebaf5_2:;
return UINT64_C(0x1803ebafb);
}
uint64_t b_1803ebafb(CPU*s){
/* 1803ebafb: comiss xmm4, xmm5 */
L_1803ebafb_0:;
L_1803ebafb_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4864,4),4)));
L_1803ebafb_2:;
wr(s->u,2,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803ebafb_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803ebafb_4:;
wr(s->u,3,1,(fv(rd(s->r,4864,4),4)==fv(rd(s->r,4928,4),4)));
L_1803ebafb_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ebafb_6:;
wr(s->u,4,1,(fv(rd(s->r,4864,4),4)<fv(rd(s->r,4928,4),4)));
L_1803ebafb_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803ebafb_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebafb_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebafb_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebafb_11:;
/* 1803ebafe: jae 0x1803ebb06 */
L_1803ebafe_0:;
L_1803ebafe_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803ebafe_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ebb06);}
L_1803ebafe_3:;
return UINT64_C(0x1803ebb00);
}
uint64_t b_1803ebb00(CPU*s){
/* 1803ebb00: movapd xmm3, xmm1 */
L_1803ebb00_0:;
L_1803ebb00_1:;
wr(s->r,4800,8,rd(s->r,4672,8));
L_1803ebb00_2:;
wr(s->r,4808,8,rd(s->r,4680,8));
L_1803ebb00_3:;
/* 1803ebb04: jmp 0x1803ebb0c */
L_1803ebb04_0:;
L_1803ebb04_1:;
return UINT64_C(0x1803ebb0c);
L_1803ebb04_2:;
return UINT64_C(0x1803ebb06);
}
uint64_t b_1803ebb06(CPU*s){
/* 1803ebb06: unpcklps xmm4, xmm4 */
L_1803ebb06_0:;
L_1803ebb06_1:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803ebb06_2:;
wr(s->r,4876,4,rd(s->r,4868,4));
L_1803ebb06_3:;
wr(s->r,4868,4,rd(s->r,4864,4));
L_1803ebb06_4:;
/* 1803ebb09: cvtps2pd xmm3, xmm4 */
L_1803ebb09_0:;
L_1803ebb09_1:;
wr(s->u,6,8,rd(s->r,4864,8));
L_1803ebb09_2:;
wr(s->r,4800,8,fb(fv(rd(s->u,6,4),4),8));
L_1803ebb09_3:;
wr(s->r,4808,8,fb(fv(rd(s->u,10,4),4),8));
L_1803ebb09_4:;
/* 1803ebb0c: movapd xmm0, xmm6 */
L_1803ebb0c_0:;
L_1803ebb0c_1:;
wr(s->r,4608,8,rd(s->r,4992,8));
L_1803ebb0c_2:;
wr(s->r,4616,8,rd(s->r,5000,8));
L_1803ebb0c_3:;
/* 1803ebb10: mulsd xmm0, xmm3 */
L_1803ebb10_0:;
L_1803ebb10_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803ebb10_2:;
/* 1803ebb14: addsd xmm0, xmm1 */
L_1803ebb14_0:;
L_1803ebb14_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803ebb14_2:;
/* 1803ebb18: comisd xmm2, xmm0 */
L_1803ebb18_0:;
L_1803ebb18_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4736,8),8)));
L_1803ebb18_2:;
wr(s->u,3,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803ebb18_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803ebb18_4:;
wr(s->u,4,1,(fv(rd(s->r,4736,8),8)==fv(rd(s->r,4608,8),8)));
L_1803ebb18_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803ebb18_6:;
wr(s->u,5,1,(fv(rd(s->r,4736,8),8)<fv(rd(s->r,4608,8),8)));
L_1803ebb18_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803ebb18_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebb18_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebb18_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebb18_11:;
/* 1803ebb1c: ja 0x1803ebb3b */
L_1803ebb1c_0:;
L_1803ebb1c_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803ebb1c_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803ebb1c_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803ebb3b);}
L_1803ebb1c_4:;
return UINT64_C(0x1803ebb1e);
}
uint64_t b_1803ebb0c(CPU*s){
/* 1803ebb0c: movapd xmm0, xmm6 */
L_1803ebb0c_0:;
L_1803ebb0c_1:;
wr(s->r,4608,8,rd(s->r,4992,8));
L_1803ebb0c_2:;
wr(s->r,4616,8,rd(s->r,5000,8));
L_1803ebb0c_3:;
/* 1803ebb10: mulsd xmm0, xmm3 */
L_1803ebb10_0:;
L_1803ebb10_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4800,8),8),8));
L_1803ebb10_2:;
/* 1803ebb14: addsd xmm0, xmm1 */
L_1803ebb14_0:;
L_1803ebb14_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803ebb14_2:;
/* 1803ebb18: comisd xmm2, xmm0 */
L_1803ebb18_0:;
L_1803ebb18_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4736,8),8)));
L_1803ebb18_2:;
wr(s->u,3,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803ebb18_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803ebb18_4:;
wr(s->u,4,1,(fv(rd(s->r,4736,8),8)==fv(rd(s->r,4608,8),8)));
L_1803ebb18_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803ebb18_6:;
wr(s->u,5,1,(fv(rd(s->r,4736,8),8)<fv(rd(s->r,4608,8),8)));
L_1803ebb18_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803ebb18_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebb18_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebb18_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebb18_11:;
/* 1803ebb1c: ja 0x1803ebb3b */
L_1803ebb1c_0:;
L_1803ebb1c_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803ebb1c_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803ebb1c_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803ebb3b);}
L_1803ebb1c_4:;
return UINT64_C(0x1803ebb1e);
}
uint64_t b_1803ebb1e(CPU*s){
/* 1803ebb1e: comiss xmm4, xmm5 */
L_1803ebb1e_0:;
L_1803ebb1e_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4864,4),4)));
L_1803ebb1e_2:;
wr(s->u,2,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803ebb1e_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803ebb1e_4:;
wr(s->u,3,1,(fv(rd(s->r,4864,4),4)==fv(rd(s->r,4928,4),4)));
L_1803ebb1e_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ebb1e_6:;
wr(s->u,4,1,(fv(rd(s->r,4864,4),4)<fv(rd(s->r,4928,4),4)));
L_1803ebb1e_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803ebb1e_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebb1e_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebb1e_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebb1e_11:;
/* 1803ebb21: jae 0x1803ebb29 */
L_1803ebb21_0:;
L_1803ebb21_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803ebb21_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ebb29);}
L_1803ebb21_3:;
return UINT64_C(0x1803ebb23);
}
uint64_t b_1803ebb23(CPU*s){
/* 1803ebb23: movapd xmm0, xmm1 */
L_1803ebb23_0:;
L_1803ebb23_1:;
wr(s->r,4608,8,rd(s->r,4672,8));
L_1803ebb23_2:;
wr(s->r,4616,8,rd(s->r,4680,8));
L_1803ebb23_3:;
/* 1803ebb27: jmp 0x1803ebb2f */
L_1803ebb27_0:;
L_1803ebb27_1:;
return UINT64_C(0x1803ebb2f);
L_1803ebb27_2:;
return UINT64_C(0x1803ebb29);
}
uint64_t b_1803ebb29(CPU*s){
/* 1803ebb29: unpcklps xmm4, xmm4 */
L_1803ebb29_0:;
L_1803ebb29_1:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803ebb29_2:;
wr(s->r,4876,4,rd(s->r,4868,4));
L_1803ebb29_3:;
wr(s->r,4868,4,rd(s->r,4864,4));
L_1803ebb29_4:;
/* 1803ebb2c: cvtps2pd xmm0, xmm4 */
L_1803ebb2c_0:;
L_1803ebb2c_1:;
wr(s->u,26,8,rd(s->r,4864,8));
L_1803ebb2c_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,26,4),4),8));
L_1803ebb2c_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,30,4),4),8));
L_1803ebb2c_4:;
/* 1803ebb2f: movapd xmm2, xmm6 */
L_1803ebb2f_0:;
L_1803ebb2f_1:;
wr(s->r,4736,8,rd(s->r,4992,8));
L_1803ebb2f_2:;
wr(s->r,4744,8,rd(s->r,5000,8));
L_1803ebb2f_3:;
/* 1803ebb33: mulsd xmm2, xmm0 */
L_1803ebb33_0:;
L_1803ebb33_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803ebb33_2:;
/* 1803ebb37: addsd xmm2, xmm1 */
L_1803ebb37_0:;
L_1803ebb37_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803ebb37_2:;
/* 1803ebb3b: unpcklps xmm7, xmm7 */
L_1803ebb3b_0:;
L_1803ebb3b_1:;
wr(s->r,5064,4,rd(s->r,5060,4));
L_1803ebb3b_2:;
wr(s->r,5068,4,rd(s->r,5060,4));
L_1803ebb3b_3:;
wr(s->r,5060,4,rd(s->r,5056,4));
L_1803ebb3b_4:;
/* 1803ebb3e: xorpd xmm1, xmm1 */
L_1803ebb3e_0:;
L_1803ebb3e_1:;
wr(s->r,4672,8,(rd(s->r,4672,8)^rd(s->r,4672,8)));
L_1803ebb3e_2:;
wr(s->r,4680,8,(rd(s->r,4680,8)^rd(s->r,4680,8)));
L_1803ebb3e_3:;
/* 1803ebb42: cvtps2pd xmm0, xmm7 */
L_1803ebb42_0:;
L_1803ebb42_1:;
wr(s->u,26,8,rd(s->r,5056,8));
L_1803ebb42_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,26,4),4),8));
L_1803ebb42_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,30,4),4),8));
L_1803ebb42_4:;
/* 1803ebb45: addsd xmm0, xmm2 */
L_1803ebb45_0:;
L_1803ebb45_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4736,8),8),8));
L_1803ebb45_2:;
/* 1803ebb49: cvttsd2si rcx, xmm0 */
L_1803ebb49_0:;
L_1803ebb49_1:;
wr(s->r,8,8,ftrunc(fv(rd(s->r,4608,8),8),8));
L_1803ebb49_2:;
/* 1803ebb4e: cmp rcx, rdx */
L_1803ebb4e_0:;
L_1803ebb4e_1:;
wr(s->u,10,8,rd(s->r,16,8));
L_1803ebb4e_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,10,8)));
L_1803ebb4e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,10,8),8,1));
L_1803ebb4e_4:;
wr(s->u,18,8,(rd(s->r,8,8)-rd(s->u,10,8)));
L_1803ebb4e_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebb4e_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803ebb4e_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803ebb4e_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ebb4e_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebb4e_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebb4e_11:;
/* 1803ebb51: je 0x1803ebb7d */
L_1803ebb51_0:;
L_1803ebb51_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebb7d);}
L_1803ebb51_2:;
return UINT64_C(0x1803ebb53);
}
uint64_t b_1803ebb2f(CPU*s){
/* 1803ebb2f: movapd xmm2, xmm6 */
L_1803ebb2f_0:;
L_1803ebb2f_1:;
wr(s->r,4736,8,rd(s->r,4992,8));
L_1803ebb2f_2:;
wr(s->r,4744,8,rd(s->r,5000,8));
L_1803ebb2f_3:;
/* 1803ebb33: mulsd xmm2, xmm0 */
L_1803ebb33_0:;
L_1803ebb33_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803ebb33_2:;
/* 1803ebb37: addsd xmm2, xmm1 */
L_1803ebb37_0:;
L_1803ebb37_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803ebb37_2:;
/* 1803ebb3b: unpcklps xmm7, xmm7 */
L_1803ebb3b_0:;
L_1803ebb3b_1:;
wr(s->r,5064,4,rd(s->r,5060,4));
L_1803ebb3b_2:;
wr(s->r,5068,4,rd(s->r,5060,4));
L_1803ebb3b_3:;
wr(s->r,5060,4,rd(s->r,5056,4));
L_1803ebb3b_4:;
/* 1803ebb3e: xorpd xmm1, xmm1 */
L_1803ebb3e_0:;
L_1803ebb3e_1:;
wr(s->r,4672,8,(rd(s->r,4672,8)^rd(s->r,4672,8)));
L_1803ebb3e_2:;
wr(s->r,4680,8,(rd(s->r,4680,8)^rd(s->r,4680,8)));
L_1803ebb3e_3:;
/* 1803ebb42: cvtps2pd xmm0, xmm7 */
L_1803ebb42_0:;
L_1803ebb42_1:;
wr(s->u,26,8,rd(s->r,5056,8));
L_1803ebb42_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,26,4),4),8));
L_1803ebb42_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,30,4),4),8));
L_1803ebb42_4:;
/* 1803ebb45: addsd xmm0, xmm2 */
L_1803ebb45_0:;
L_1803ebb45_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4736,8),8),8));
L_1803ebb45_2:;
/* 1803ebb49: cvttsd2si rcx, xmm0 */
L_1803ebb49_0:;
L_1803ebb49_1:;
wr(s->r,8,8,ftrunc(fv(rd(s->r,4608,8),8),8));
L_1803ebb49_2:;
/* 1803ebb4e: cmp rcx, rdx */
L_1803ebb4e_0:;
L_1803ebb4e_1:;
wr(s->u,10,8,rd(s->r,16,8));
L_1803ebb4e_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,10,8)));
L_1803ebb4e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,10,8),8,1));
L_1803ebb4e_4:;
wr(s->u,18,8,(rd(s->r,8,8)-rd(s->u,10,8)));
L_1803ebb4e_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebb4e_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803ebb4e_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803ebb4e_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ebb4e_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebb4e_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebb4e_11:;
/* 1803ebb51: je 0x1803ebb7d */
L_1803ebb51_0:;
L_1803ebb51_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebb7d);}
L_1803ebb51_2:;
return UINT64_C(0x1803ebb53);
}
uint64_t b_1803ebb3b(CPU*s){
/* 1803ebb3b: unpcklps xmm7, xmm7 */
L_1803ebb3b_0:;
L_1803ebb3b_1:;
wr(s->r,5064,4,rd(s->r,5060,4));
L_1803ebb3b_2:;
wr(s->r,5068,4,rd(s->r,5060,4));
L_1803ebb3b_3:;
wr(s->r,5060,4,rd(s->r,5056,4));
L_1803ebb3b_4:;
/* 1803ebb3e: xorpd xmm1, xmm1 */
L_1803ebb3e_0:;
L_1803ebb3e_1:;
wr(s->r,4672,8,(rd(s->r,4672,8)^rd(s->r,4672,8)));
L_1803ebb3e_2:;
wr(s->r,4680,8,(rd(s->r,4680,8)^rd(s->r,4680,8)));
L_1803ebb3e_3:;
/* 1803ebb42: cvtps2pd xmm0, xmm7 */
L_1803ebb42_0:;
L_1803ebb42_1:;
wr(s->u,26,8,rd(s->r,5056,8));
L_1803ebb42_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,26,4),4),8));
L_1803ebb42_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,30,4),4),8));
L_1803ebb42_4:;
/* 1803ebb45: addsd xmm0, xmm2 */
L_1803ebb45_0:;
L_1803ebb45_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4736,8),8),8));
L_1803ebb45_2:;
/* 1803ebb49: cvttsd2si rcx, xmm0 */
L_1803ebb49_0:;
L_1803ebb49_1:;
wr(s->r,8,8,ftrunc(fv(rd(s->r,4608,8),8),8));
L_1803ebb49_2:;
/* 1803ebb4e: cmp rcx, rdx */
L_1803ebb4e_0:;
L_1803ebb4e_1:;
wr(s->u,10,8,rd(s->r,16,8));
L_1803ebb4e_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,10,8)));
L_1803ebb4e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,10,8),8,1));
L_1803ebb4e_4:;
wr(s->u,18,8,(rd(s->r,8,8)-rd(s->u,10,8)));
L_1803ebb4e_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebb4e_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803ebb4e_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803ebb4e_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ebb4e_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebb4e_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebb4e_11:;
/* 1803ebb51: je 0x1803ebb7d */
L_1803ebb51_0:;
L_1803ebb51_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebb7d);}
L_1803ebb51_2:;
return UINT64_C(0x1803ebb53);
}
uint64_t b_1803ebb53(CPU*s){
/* 1803ebb53: pxor xmm1, xmm1 */
L_1803ebb53_0:;
L_1803ebb53_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803ebb53_2:;
/* 1803ebb57: cvtsi2sd xmm1, rcx */
L_1803ebb57_0:;
L_1803ebb57_1:;
wr(s->r,4672,8,fb((double)sx(rd(s->r,8,8),8),8));
L_1803ebb57_2:;
/* 1803ebb5c: ucomisd xmm1, xmm0 */
L_1803ebb5c_0:;
L_1803ebb5c_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4672,8),8)));
L_1803ebb5c_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803ebb5c_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803ebb5c_4:;
wr(s->u,2,1,(fv(rd(s->r,4672,8),8)==fv(rd(s->r,4608,8),8)));
L_1803ebb5c_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803ebb5c_6:;
wr(s->u,3,1,(fv(rd(s->r,4672,8),8)<fv(rd(s->r,4608,8),8)));
L_1803ebb5c_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ebb5c_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebb5c_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebb5c_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebb5c_11:;
/* 1803ebb60: je 0x1803ebb7d */
L_1803ebb60_0:;
L_1803ebb60_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebb7d);}
L_1803ebb60_2:;
return UINT64_C(0x1803ebb62);
}
uint64_t b_1803ebb62(CPU*s){
/* 1803ebb62: unpcklpd xmm0, xmm0 */
L_1803ebb62_0:;
L_1803ebb62_1:;
wr(s->r,4616,8,rd(s->r,4608,8));
L_1803ebb62_2:;
/* 1803ebb66: movmskpd eax, xmm0 */
L_1803ebb66_0:;
L_1803ebb66_1:;
wr(s->r,0,4,(((rd(s->r,4608,16)>>63)&1)<<0)|(((rd(s->r,4608,16)>>127)&1)<<1));
L_1803ebb66_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebb66_3:;
/* 1803ebb6b: pxor xmm0, xmm0 */
L_1803ebb6b_0:;
L_1803ebb6b_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803ebb6b_2:;
/* 1803ebb6f: and eax, 1 */
L_1803ebb6f_0:;
L_1803ebb6f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ebb6f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebb6f_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803ebb6f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebb6f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebb6f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ebb6f_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ebb6f_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803ebb6f_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ebb6f_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ebb6f_11:;
/* 1803ebb72: xor eax, 1 */
L_1803ebb72_0:;
L_1803ebb72_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ebb72_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebb72_3:;
wr(s->r,0,4,(rd(s->r,0,4)^((U)UINT64_C(0x1))));
L_1803ebb72_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebb72_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebb72_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ebb72_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ebb72_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803ebb72_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ebb72_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ebb72_11:;
/* 1803ebb75: add rcx, rax */
L_1803ebb75_0:;
L_1803ebb75_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ebb75_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,0,8),8,0));
L_1803ebb75_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,0,8)));
L_1803ebb75_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebb75_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ebb75_6:;
wr(s->u,24,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ebb75_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ebb75_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ebb75_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ebb75_10:;
/* 1803ebb78: cvtsi2sd xmm0, rcx */
L_1803ebb78_0:;
L_1803ebb78_1:;
wr(s->r,4608,8,fb((double)sx(rd(s->r,8,8),8),8));
L_1803ebb78_2:;
/* 1803ebb7d: movaps xmm7, xmmword ptr [rsp] */
L_1803ebb7d_0:;
L_1803ebb7d_1:;
wr(s->u,8,16,mr((uint64_t)rd(s->r,32,8),16));
L_1803ebb7d_2:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803ebb7d_3:;
wr(s->r,5056,4,rd(s->u,34,4));
L_1803ebb7d_4:;
wr(s->r,5060,4,rd(s->u,38,4));
L_1803ebb7d_5:;
wr(s->r,5064,4,rd(s->u,42,4));
L_1803ebb7d_6:;
wr(s->r,5068,4,rd(s->u,46,4));
L_1803ebb7d_7:;
/* 1803ebb81: movaps xmm6, xmmword ptr [rsp + 0x10] */
L_1803ebb81_0:;
L_1803ebb81_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ebb81_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803ebb81_3:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803ebb81_4:;
wr(s->r,4992,4,rd(s->u,34,4));
L_1803ebb81_5:;
wr(s->r,4996,4,rd(s->u,38,4));
L_1803ebb81_6:;
wr(s->r,5000,4,rd(s->u,42,4));
L_1803ebb81_7:;
wr(s->r,5004,4,rd(s->u,46,4));
L_1803ebb81_8:;
/* 1803ebb86: cvttsd2si eax, xmm0 */
L_1803ebb86_0:;
L_1803ebb86_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,8),8),4));
L_1803ebb86_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebb86_3:;
/* 1803ebb8a: add rsp, 0x28 */
L_1803ebb8a_0:;
L_1803ebb8a_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ebb8a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803ebb8a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803ebb8a_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebb8a_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ebb8a_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ebb8a_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ebb8a_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ebb8a_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ebb8a_10:;
/* 1803ebb8e: ret  */
L_1803ebb8e_0:;
L_1803ebb8e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ebb8e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ebb8e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ebb8e_4:;
return UINT64_C(0x1803ebb8f);
}
uint64_t b_1803ebb7d(CPU*s){
/* 1803ebb7d: movaps xmm7, xmmword ptr [rsp] */
L_1803ebb7d_0:;
L_1803ebb7d_1:;
wr(s->u,8,16,mr((uint64_t)rd(s->r,32,8),16));
L_1803ebb7d_2:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803ebb7d_3:;
wr(s->r,5056,4,rd(s->u,34,4));
L_1803ebb7d_4:;
wr(s->r,5060,4,rd(s->u,38,4));
L_1803ebb7d_5:;
wr(s->r,5064,4,rd(s->u,42,4));
L_1803ebb7d_6:;
wr(s->r,5068,4,rd(s->u,46,4));
L_1803ebb7d_7:;
/* 1803ebb81: movaps xmm6, xmmword ptr [rsp + 0x10] */
L_1803ebb81_0:;
L_1803ebb81_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ebb81_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803ebb81_3:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803ebb81_4:;
wr(s->r,4992,4,rd(s->u,34,4));
L_1803ebb81_5:;
wr(s->r,4996,4,rd(s->u,38,4));
L_1803ebb81_6:;
wr(s->r,5000,4,rd(s->u,42,4));
L_1803ebb81_7:;
wr(s->r,5004,4,rd(s->u,46,4));
L_1803ebb81_8:;
/* 1803ebb86: cvttsd2si eax, xmm0 */
L_1803ebb86_0:;
L_1803ebb86_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,8),8),4));
L_1803ebb86_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebb86_3:;
/* 1803ebb8a: add rsp, 0x28 */
L_1803ebb8a_0:;
L_1803ebb8a_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ebb8a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803ebb8a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803ebb8a_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebb8a_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ebb8a_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ebb8a_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ebb8a_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ebb8a_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ebb8a_10:;
/* 1803ebb8e: ret  */
L_1803ebb8e_0:;
L_1803ebb8e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ebb8e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ebb8e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ebb8e_4:;
return UINT64_C(0x1803ebb8f);
}
uint64_t b_1803ebb8f(CPU*s){
/* 1803ebb8f: movd xmm0, dword ptr [rcx + 0x28] */
L_1803ebb8f_0:;
L_1803ebb8f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x28))));
L_1803ebb8f_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ebb8f_3:;
wr(s->r,4608,16,rd(s->u,8,4));
L_1803ebb8f_4:;
/* 1803ebb94: movd xmm1, dword ptr [rcx + 0x60] */
L_1803ebb94_0:;
L_1803ebb94_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x60))));
L_1803ebb94_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ebb94_3:;
wr(s->r,4672,16,rd(s->u,8,4));
L_1803ebb94_4:;
/* 1803ebb99: movd xmm2, edx */
L_1803ebb99_0:;
L_1803ebb99_1:;
wr(s->r,4736,16,rd(s->r,16,4));
L_1803ebb99_2:;
/* 1803ebb9d: cvtdq2ps xmm0, xmm0 */
L_1803ebb9d_0:;
L_1803ebb9d_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ebb9d_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ebb9d_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ebb9d_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ebb9d_5:;
/* 1803ebba0: cvtdq2ps xmm1, xmm1 */
L_1803ebba0_0:;
L_1803ebba0_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803ebba0_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803ebba0_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803ebba0_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803ebba0_5:;
/* 1803ebba3: mulss xmm1, xmm4 */
L_1803ebba3_0:;
L_1803ebba3_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4864,4),4),4));
L_1803ebba3_2:;
/* 1803ebba7: cvtdq2ps xmm2, xmm2 */
L_1803ebba7_0:;
L_1803ebba7_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803ebba7_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803ebba7_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803ebba7_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803ebba7_5:;
/* 1803ebbaa: mulss xmm2, xmm4 */
L_1803ebbaa_0:;
L_1803ebbaa_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4864,4),4),4));
L_1803ebbaa_2:;
/* 1803ebbae: subss xmm2, xmm0 */
L_1803ebbae_0:;
L_1803ebbae_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ebbae_2:;
/* 1803ebbb2: subss xmm2, xmm1 */
L_1803ebbb2_0:;
L_1803ebbb2_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ebbb2_2:;
/* 1803ebbb6: cvttss2si ecx, xmm2 */
L_1803ebbb6_0:;
L_1803ebbb6_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4736,4),4),4));
L_1803ebbb6_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ebbb6_3:;
/* 1803ebbba: cmp ecx, 0x80000000 */
L_1803ebbba_0:;
L_1803ebbba_1:;
wr(s->u,18,4,rd(s->r,8,4));
L_1803ebbba_2:;
wr(s->r,512,1,(rd(s->u,18,4)<((U)UINT64_C(0x80000000))));
L_1803ebbba_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),((U)UINT64_C(0x80000000)),4,1));
L_1803ebbba_4:;
wr(s->u,22,4,(rd(s->u,18,4)-((U)UINT64_C(0x80000000))));
L_1803ebbba_5:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebbba_6:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803ebbba_7:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803ebbba_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803ebbba_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ebbba_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ebbba_11:;
/* 1803ebbc0: je 0x1803ebbe5 */
L_1803ebbc0_0:;
L_1803ebbc0_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebbe5);}
L_1803ebbc0_2:;
return UINT64_C(0x1803ebbc2);
}
uint64_t b_1803ebbc2(CPU*s){
/* 1803ebbc2: pxor xmm0, xmm0 */
L_1803ebbc2_0:;
L_1803ebbc2_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803ebbc2_2:;
/* 1803ebbc6: cvtsi2ss xmm0, ecx */
L_1803ebbc6_0:;
L_1803ebbc6_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803ebbc6_2:;
/* 1803ebbca: ucomiss xmm0, xmm2 */
L_1803ebbca_0:;
L_1803ebbca_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803ebbca_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803ebbca_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803ebbca_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4736,4),4)));
L_1803ebbca_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803ebbca_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4736,4),4)));
L_1803ebbca_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ebbca_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebbca_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebbca_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebbca_11:;
/* 1803ebbcd: je 0x1803ebbe5 */
L_1803ebbcd_0:;
L_1803ebbcd_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebbe5);}
L_1803ebbcd_2:;
return UINT64_C(0x1803ebbcf);
}
uint64_t b_1803ebbcf(CPU*s){
/* 1803ebbcf: unpcklps xmm2, xmm2 */
L_1803ebbcf_0:;
L_1803ebbcf_1:;
wr(s->r,4744,4,rd(s->r,4740,4));
L_1803ebbcf_2:;
wr(s->r,4748,4,rd(s->r,4740,4));
L_1803ebbcf_3:;
wr(s->r,4740,4,rd(s->r,4736,4));
L_1803ebbcf_4:;
/* 1803ebbd2: movmskps eax, xmm2 */
L_1803ebbd2_0:;
L_1803ebbd2_1:;
wr(s->r,0,4,(((rd(s->r,4736,16)>>31)&1)<<0)|(((rd(s->r,4736,16)>>63)&1)<<1)|(((rd(s->r,4736,16)>>95)&1)<<2)|(((rd(s->r,4736,16)>>127)&1)<<3));
L_1803ebbd2_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebbd2_3:;
/* 1803ebbd5: pxor xmm2, xmm2 */
L_1803ebbd5_0:;
L_1803ebbd5_1:;
wr(s->r,4736,16,(rd(s->r,4736,16)^rd(s->r,4736,16)));
L_1803ebbd5_2:;
/* 1803ebbd9: and eax, 1 */
L_1803ebbd9_0:;
L_1803ebbd9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ebbd9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebbd9_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803ebbd9_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebbd9_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebbd9_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ebbd9_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ebbd9_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803ebbd9_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803ebbd9_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803ebbd9_11:;
/* 1803ebbdc: xor eax, 1 */
L_1803ebbdc_0:;
L_1803ebbdc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ebbdc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebbdc_3:;
wr(s->r,0,4,(rd(s->r,0,4)^((U)UINT64_C(0x1))));
L_1803ebbdc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebbdc_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebbdc_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ebbdc_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ebbdc_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803ebbdc_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803ebbdc_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803ebbdc_11:;
/* 1803ebbdf: add ecx, eax */
L_1803ebbdf_0:;
L_1803ebbdf_1:;
wr(s->r,512,1,(((rd(s->r,8,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,8,4)));
L_1803ebbdf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,0));
L_1803ebbdf_3:;
wr(s->r,8,4,(rd(s->r,8,4)+rd(s->r,0,4)));
L_1803ebbdf_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ebbdf_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebbdf_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ebbdf_7:;
wr(s->u,0,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ebbdf_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803ebbdf_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803ebbdf_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803ebbdf_11:;
/* 1803ebbe1: cvtsi2ss xmm2, ecx */
L_1803ebbe1_0:;
L_1803ebbe1_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803ebbe1_2:;
/* 1803ebbe5: xorps xmm0, xmm0 */
L_1803ebbe5_0:;
L_1803ebbe5_1:;
wr(s->r,4608,4,(rd(s->r,4608,4)^rd(s->r,4608,4)));
L_1803ebbe5_2:;
wr(s->r,4612,4,(rd(s->r,4612,4)^rd(s->r,4612,4)));
L_1803ebbe5_3:;
wr(s->r,4616,4,(rd(s->r,4616,4)^rd(s->r,4616,4)));
L_1803ebbe5_4:;
wr(s->r,4620,4,(rd(s->r,4620,4)^rd(s->r,4620,4)));
L_1803ebbe5_5:;
/* 1803ebbe8: comiss xmm2, xmm0 */
L_1803ebbe8_0:;
L_1803ebbe8_1:;
wr(s->u,6,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803ebbe8_2:;
wr(s->u,7,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803ebbe8_3:;
wr(s->r,514,1,((rd(s->u,6,1)!=0)||(rd(s->u,7,1)!=0)));
L_1803ebbe8_4:;
wr(s->u,8,1,(fv(rd(s->r,4736,4),4)==fv(rd(s->r,4608,4),4)));
L_1803ebbe8_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,8,1)));
L_1803ebbe8_6:;
wr(s->u,9,1,(fv(rd(s->r,4736,4),4)<fv(rd(s->r,4608,4),4)));
L_1803ebbe8_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,9,1)));
L_1803ebbe8_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebbe8_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebbe8_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebbe8_11:;
/* 1803ebbeb: jb 0x1803ebbf0 */
L_1803ebbeb_0:;
L_1803ebbeb_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ebbf0);}
L_1803ebbeb_2:;
return UINT64_C(0x1803ebbed);
}
uint64_t b_1803ebbe5(CPU*s){
/* 1803ebbe5: xorps xmm0, xmm0 */
L_1803ebbe5_0:;
L_1803ebbe5_1:;
wr(s->r,4608,4,(rd(s->r,4608,4)^rd(s->r,4608,4)));
L_1803ebbe5_2:;
wr(s->r,4612,4,(rd(s->r,4612,4)^rd(s->r,4612,4)));
L_1803ebbe5_3:;
wr(s->r,4616,4,(rd(s->r,4616,4)^rd(s->r,4616,4)));
L_1803ebbe5_4:;
wr(s->r,4620,4,(rd(s->r,4620,4)^rd(s->r,4620,4)));
L_1803ebbe5_5:;
/* 1803ebbe8: comiss xmm2, xmm0 */
L_1803ebbe8_0:;
L_1803ebbe8_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803ebbe8_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803ebbe8_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803ebbe8_4:;
wr(s->u,2,1,(fv(rd(s->r,4736,4),4)==fv(rd(s->r,4608,4),4)));
L_1803ebbe8_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803ebbe8_6:;
wr(s->u,3,1,(fv(rd(s->r,4736,4),4)<fv(rd(s->r,4608,4),4)));
L_1803ebbe8_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ebbe8_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebbe8_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebbe8_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebbe8_11:;
/* 1803ebbeb: jb 0x1803ebbf0 */
L_1803ebbeb_0:;
L_1803ebbeb_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ebbf0);}
L_1803ebbeb_2:;
return UINT64_C(0x1803ebbed);
}
uint64_t b_1803ebbed(CPU*s){
/* 1803ebbed: movaps xmm0, xmm2 */
L_1803ebbed_0:;
L_1803ebbed_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803ebbed_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803ebbed_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803ebbed_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803ebbed_5:;
/* 1803ebbf0: cvttss2si eax, xmm0 */
L_1803ebbf0_0:;
L_1803ebbf0_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803ebbf0_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebbf0_3:;
/* 1803ebbf4: add rsp, 0x28 */
L_1803ebbf4_0:;
L_1803ebbf4_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ebbf4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803ebbf4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803ebbf4_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebbf4_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ebbf4_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ebbf4_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ebbf4_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebbf4_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebbf4_10:;
/* 1803ebbf8: ret  */
L_1803ebbf8_0:;
L_1803ebbf8_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ebbf8_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ebbf8_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ebbf8_4:;
return UINT64_C(0x1803ebbf9);
}
uint64_t b_1803ebbf0(CPU*s){
/* 1803ebbf0: cvttss2si eax, xmm0 */
L_1803ebbf0_0:;
L_1803ebbf0_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803ebbf0_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebbf0_3:;
/* 1803ebbf4: add rsp, 0x28 */
L_1803ebbf4_0:;
L_1803ebbf4_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ebbf4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803ebbf4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803ebbf4_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebbf4_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ebbf4_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ebbf4_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ebbf4_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebbf4_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebbf4_10:;
/* 1803ebbf8: ret  */
L_1803ebbf8_0:;
L_1803ebbf8_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ebbf8_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ebbf8_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ebbf8_4:;
return UINT64_C(0x1803ebbf9);
}
uint64_t b_1803ebc00(CPU*s){
/* 1803ebc00: sub rsp, 0x28 */
L_1803ebc00_0:;
L_1803ebc00_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803ebc00_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803ebc00_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803ebc00_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebc00_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ebc00_6:;
wr(s->u,12,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ebc00_7:;
wr(s->u,20,1,pop(rd(s->u,12,8),8));
L_1803ebc00_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803ebc00_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803ebc00_10:;
/* 1803ebc04: cmp dword ptr [rcx + 0x40], 0 */
L_1803ebc04_0:;
L_1803ebc04_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x40))));
L_1803ebc04_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ebc04_3:;
wr(s->u,22,4,rd(s->u,8,4));
L_1803ebc04_4:;
wr(s->r,512,1,(rd(s->u,22,4)<((U)UINT64_C(0x0))));
L_1803ebc04_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,22,4),((U)UINT64_C(0x0)),4,1));
L_1803ebc04_6:;
wr(s->u,26,4,(rd(s->u,22,4)-((U)UINT64_C(0x0))));
L_1803ebc04_7:;
wr(s->r,519,1,(sx(rd(s->u,26,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebc04_8:;
wr(s->r,518,1,(rd(s->u,26,4)==((U)UINT64_C(0x0))));
L_1803ebc04_9:;
wr(s->u,12,4,(rd(s->u,26,4)&((U)UINT64_C(0xff))));
L_1803ebc04_10:;
wr(s->u,20,1,pop(rd(s->u,12,4),4));
L_1803ebc04_11:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803ebc04_12:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803ebc04_13:;
/* 1803ebc08: divss xmm2, xmm3 */
L_1803ebc08_0:;
L_1803ebc08_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)/fv(rd(s->r,4800,4),4),4));
L_1803ebc08_2:;
/* 1803ebc0c: je 0x1803ebd7c */
L_1803ebc0c_0:;
L_1803ebc0c_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebd7c);}
L_1803ebc0c_2:;
return UINT64_C(0x1803ebc12);
}
uint64_t b_1803ebc12(CPU*s){
/* 1803ebc12: movss xmm5, dword ptr [rip + 0x26102a] */
L_1803ebc12_0:;
L_1803ebc12_1:;
wr(s->r,4928,4,mr(UINT64_C(0x18064cc44),4));
L_1803ebc12_2:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803ebc12_3:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803ebc12_4:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803ebc12_5:;
/* 1803ebc1a: movsd xmm1, qword ptr [rip + 0x260f56] */
L_1803ebc1a_0:;
L_1803ebc1a_1:;
wr(s->r,4672,8,mr(UINT64_C(0x18064cb78),8));
L_1803ebc1a_2:;
wr(s->r,4680,8,((U)UINT64_C(0x0)));
L_1803ebc1a_3:;
/* 1803ebc22: movaps xmmword ptr [rsp + 0x10], xmm6 */
L_1803ebc22_0:;
L_1803ebc22_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ebc22_2:;
wr(s->u,8,16,rd(s->r,4992,16));
L_1803ebc22_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,8,16));
L_1803ebc22_4:;
/* 1803ebc27: movaps xmmword ptr [rsp], xmm7 */
L_1803ebc27_0:;
L_1803ebc27_1:;
wr(s->u,8,16,rd(s->r,5056,16));
L_1803ebc27_2:;
mw((uint64_t)rd(s->r,32,8),16,rd(s->u,8,16));
L_1803ebc27_3:;
/* 1803ebc2b: comiss xmm2, xmm5 */
L_1803ebc2b_0:;
L_1803ebc2b_1:;
wr(s->u,25,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803ebc2b_2:;
wr(s->u,26,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803ebc2b_3:;
wr(s->r,514,1,((rd(s->u,25,1)!=0)||(rd(s->u,26,1)!=0)));
L_1803ebc2b_4:;
wr(s->u,27,1,(fv(rd(s->r,4736,4),4)==fv(rd(s->r,4928,4),4)));
L_1803ebc2b_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,27,1)));
L_1803ebc2b_6:;
wr(s->u,28,1,(fv(rd(s->r,4736,4),4)<fv(rd(s->r,4928,4),4)));
L_1803ebc2b_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,28,1)));
L_1803ebc2b_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebc2b_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebc2b_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebc2b_11:;
/* 1803ebc2e: jae 0x1803ebc36 */
L_1803ebc2e_0:;
L_1803ebc2e_1:;
wr(s->u,24,1,(!rd(s->r,512,1)));
L_1803ebc2e_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803ebc36);}
L_1803ebc2e_3:;
return UINT64_C(0x1803ebc30);
}
uint64_t b_1803ebc22(CPU*s){
/* 1803ebc22: movaps xmmword ptr [rsp + 0x10], xmm6 */
L_1803ebc22_0:;
L_1803ebc22_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ebc22_2:;
wr(s->u,8,16,rd(s->r,4992,16));
L_1803ebc22_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,8,16));
L_1803ebc22_4:;
/* 1803ebc27: movaps xmmword ptr [rsp], xmm7 */
L_1803ebc27_0:;
L_1803ebc27_1:;
wr(s->u,8,16,rd(s->r,5056,16));
L_1803ebc27_2:;
mw((uint64_t)rd(s->r,32,8),16,rd(s->u,8,16));
L_1803ebc27_3:;
/* 1803ebc2b: comiss xmm2, xmm5 */
L_1803ebc2b_0:;
L_1803ebc2b_1:;
wr(s->u,25,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803ebc2b_2:;
wr(s->u,26,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803ebc2b_3:;
wr(s->r,514,1,((rd(s->u,25,1)!=0)||(rd(s->u,26,1)!=0)));
L_1803ebc2b_4:;
wr(s->u,27,1,(fv(rd(s->r,4736,4),4)==fv(rd(s->r,4928,4),4)));
L_1803ebc2b_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,27,1)));
L_1803ebc2b_6:;
wr(s->u,28,1,(fv(rd(s->r,4736,4),4)<fv(rd(s->r,4928,4),4)));
L_1803ebc2b_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,28,1)));
L_1803ebc2b_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebc2b_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebc2b_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebc2b_11:;
/* 1803ebc2e: jae 0x1803ebc36 */
L_1803ebc2e_0:;
L_1803ebc2e_1:;
wr(s->u,24,1,(!rd(s->r,512,1)));
L_1803ebc2e_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803ebc36);}
L_1803ebc2e_3:;
return UINT64_C(0x1803ebc30);
}
uint64_t b_1803ebc30(CPU*s){
/* 1803ebc30: movapd xmm4, xmm1 */
L_1803ebc30_0:;
L_1803ebc30_1:;
wr(s->r,4864,8,rd(s->r,4672,8));
L_1803ebc30_2:;
wr(s->r,4872,8,rd(s->r,4680,8));
L_1803ebc30_3:;
/* 1803ebc34: jmp 0x1803ebc3c */
L_1803ebc34_0:;
L_1803ebc34_1:;
return UINT64_C(0x1803ebc3c);
L_1803ebc34_2:;
return UINT64_C(0x1803ebc36);
}
uint64_t b_1803ebc36(CPU*s){
/* 1803ebc36: unpcklps xmm2, xmm2 */
L_1803ebc36_0:;
L_1803ebc36_1:;
wr(s->r,4744,4,rd(s->r,4740,4));
L_1803ebc36_2:;
wr(s->r,4748,4,rd(s->r,4740,4));
L_1803ebc36_3:;
wr(s->r,4740,4,rd(s->r,4736,4));
L_1803ebc36_4:;
/* 1803ebc39: cvtps2pd xmm4, xmm2 */
L_1803ebc39_0:;
L_1803ebc39_1:;
wr(s->u,25,8,rd(s->r,4736,8));
L_1803ebc39_2:;
wr(s->r,4864,8,fb(fv(rd(s->u,25,4),4),8));
L_1803ebc39_3:;
wr(s->r,4872,8,fb(fv(rd(s->u,29,4),4),8));
L_1803ebc39_4:;
/* 1803ebc3c: movd xmm6, dword ptr [rcx + 0x2c] */
L_1803ebc3c_0:;
L_1803ebc3c_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x2c))));
L_1803ebc3c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ebc3c_3:;
wr(s->r,4992,16,rd(s->u,8,4));
L_1803ebc3c_4:;
/* 1803ebc41: movd xmm3, dword ptr [rcx + 0x10] */
L_1803ebc41_0:;
L_1803ebc41_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ebc41_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ebc41_3:;
wr(s->r,4800,16,rd(s->u,8,4));
L_1803ebc41_4:;
/* 1803ebc46: cvtdq2pd xmm6, xmm6 */
L_1803ebc46_0:;
L_1803ebc46_1:;
wr(s->u,17,8,rd(s->r,4992,8));
L_1803ebc46_2:;
wr(s->r,4992,8,fb((double)sx(rd(s->u,17,4),4),8));
L_1803ebc46_3:;
wr(s->r,5000,8,fb((double)sx(rd(s->u,21,4),4),8));
L_1803ebc46_4:;
/* 1803ebc4a: cvtdq2pd xmm3, xmm3 */
L_1803ebc4a_0:;
L_1803ebc4a_1:;
wr(s->u,17,8,rd(s->r,4800,8));
L_1803ebc4a_2:;
wr(s->r,4800,8,fb((double)sx(rd(s->u,17,4),4),8));
L_1803ebc4a_3:;
wr(s->r,4808,8,fb((double)sx(rd(s->u,21,4),4),8));
L_1803ebc4a_4:;
/* 1803ebc4e: movapd xmm0, xmm6 */
L_1803ebc4e_0:;
L_1803ebc4e_1:;
wr(s->r,4608,8,rd(s->r,4992,8));
L_1803ebc4e_2:;
wr(s->r,4616,8,rd(s->r,5000,8));
L_1803ebc4e_3:;
/* 1803ebc52: mulsd xmm0, xmm4 */
L_1803ebc52_0:;
L_1803ebc52_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4864,8),8),8));
L_1803ebc52_2:;
/* 1803ebc56: addsd xmm0, xmm1 */
L_1803ebc56_0:;
L_1803ebc56_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803ebc56_2:;
/* 1803ebc5a: comisd xmm3, xmm0 */
L_1803ebc5a_0:;
L_1803ebc5a_1:;
wr(s->u,13,1,isnan(fv(rd(s->r,4800,8),8)));
L_1803ebc5a_2:;
wr(s->u,14,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803ebc5a_3:;
wr(s->r,514,1,((rd(s->u,13,1)!=0)||(rd(s->u,14,1)!=0)));
L_1803ebc5a_4:;
wr(s->u,15,1,(fv(rd(s->r,4800,8),8)==fv(rd(s->r,4608,8),8)));
L_1803ebc5a_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,15,1)));
L_1803ebc5a_6:;
wr(s->u,16,1,(fv(rd(s->r,4800,8),8)<fv(rd(s->r,4608,8),8)));
L_1803ebc5a_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,16,1)));
L_1803ebc5a_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebc5a_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebc5a_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebc5a_11:;
/* 1803ebc5e: jbe 0x1803ebc66 */
L_1803ebc5e_0:;
L_1803ebc5e_1:;
wr(s->u,12,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803ebc5e_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803ebc66);}
L_1803ebc5e_3:;
return UINT64_C(0x1803ebc60);
}
uint64_t b_1803ebc3c(CPU*s){
/* 1803ebc3c: movd xmm6, dword ptr [rcx + 0x2c] */
L_1803ebc3c_0:;
L_1803ebc3c_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x2c))));
L_1803ebc3c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ebc3c_3:;
wr(s->r,4992,16,rd(s->u,8,4));
L_1803ebc3c_4:;
/* 1803ebc41: movd xmm3, dword ptr [rcx + 0x10] */
L_1803ebc41_0:;
L_1803ebc41_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803ebc41_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ebc41_3:;
wr(s->r,4800,16,rd(s->u,8,4));
L_1803ebc41_4:;
/* 1803ebc46: cvtdq2pd xmm6, xmm6 */
L_1803ebc46_0:;
L_1803ebc46_1:;
wr(s->u,17,8,rd(s->r,4992,8));
L_1803ebc46_2:;
wr(s->r,4992,8,fb((double)sx(rd(s->u,17,4),4),8));
L_1803ebc46_3:;
wr(s->r,5000,8,fb((double)sx(rd(s->u,21,4),4),8));
L_1803ebc46_4:;
/* 1803ebc4a: cvtdq2pd xmm3, xmm3 */
L_1803ebc4a_0:;
L_1803ebc4a_1:;
wr(s->u,17,8,rd(s->r,4800,8));
L_1803ebc4a_2:;
wr(s->r,4800,8,fb((double)sx(rd(s->u,17,4),4),8));
L_1803ebc4a_3:;
wr(s->r,4808,8,fb((double)sx(rd(s->u,21,4),4),8));
L_1803ebc4a_4:;
/* 1803ebc4e: movapd xmm0, xmm6 */
L_1803ebc4e_0:;
L_1803ebc4e_1:;
wr(s->r,4608,8,rd(s->r,4992,8));
L_1803ebc4e_2:;
wr(s->r,4616,8,rd(s->r,5000,8));
L_1803ebc4e_3:;
/* 1803ebc52: mulsd xmm0, xmm4 */
L_1803ebc52_0:;
L_1803ebc52_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4864,8),8),8));
L_1803ebc52_2:;
/* 1803ebc56: addsd xmm0, xmm1 */
L_1803ebc56_0:;
L_1803ebc56_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803ebc56_2:;
/* 1803ebc5a: comisd xmm3, xmm0 */
L_1803ebc5a_0:;
L_1803ebc5a_1:;
wr(s->u,13,1,isnan(fv(rd(s->r,4800,8),8)));
L_1803ebc5a_2:;
wr(s->u,14,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803ebc5a_3:;
wr(s->r,514,1,((rd(s->u,13,1)!=0)||(rd(s->u,14,1)!=0)));
L_1803ebc5a_4:;
wr(s->u,15,1,(fv(rd(s->r,4800,8),8)==fv(rd(s->r,4608,8),8)));
L_1803ebc5a_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,15,1)));
L_1803ebc5a_6:;
wr(s->u,16,1,(fv(rd(s->r,4800,8),8)<fv(rd(s->r,4608,8),8)));
L_1803ebc5a_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,16,1)));
L_1803ebc5a_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebc5a_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebc5a_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebc5a_11:;
/* 1803ebc5e: jbe 0x1803ebc66 */
L_1803ebc5e_0:;
L_1803ebc5e_1:;
wr(s->u,12,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803ebc5e_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803ebc66);}
L_1803ebc5e_3:;
return UINT64_C(0x1803ebc60);
}
uint64_t b_1803ebc60(CPU*s){
/* 1803ebc60: movapd xmm0, xmm3 */
L_1803ebc60_0:;
L_1803ebc60_1:;
wr(s->r,4608,8,rd(s->r,4800,8));
L_1803ebc60_2:;
wr(s->r,4616,8,rd(s->r,4808,8));
L_1803ebc60_3:;
/* 1803ebc64: jmp 0x1803ebc83 */
L_1803ebc64_0:;
L_1803ebc64_1:;
return UINT64_C(0x1803ebc83);
L_1803ebc64_2:;
return UINT64_C(0x1803ebc66);
}
uint64_t b_1803ebc66(CPU*s){
/* 1803ebc66: comiss xmm2, xmm5 */
L_1803ebc66_0:;
L_1803ebc66_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803ebc66_2:;
wr(s->u,2,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803ebc66_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803ebc66_4:;
wr(s->u,3,1,(fv(rd(s->r,4736,4),4)==fv(rd(s->r,4928,4),4)));
L_1803ebc66_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ebc66_6:;
wr(s->u,4,1,(fv(rd(s->r,4736,4),4)<fv(rd(s->r,4928,4),4)));
L_1803ebc66_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803ebc66_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebc66_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebc66_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebc66_11:;
/* 1803ebc69: jae 0x1803ebc71 */
L_1803ebc69_0:;
L_1803ebc69_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803ebc69_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ebc71);}
L_1803ebc69_3:;
return UINT64_C(0x1803ebc6b);
}
uint64_t b_1803ebc6b(CPU*s){
/* 1803ebc6b: movapd xmm4, xmm1 */
L_1803ebc6b_0:;
L_1803ebc6b_1:;
wr(s->r,4864,8,rd(s->r,4672,8));
L_1803ebc6b_2:;
wr(s->r,4872,8,rd(s->r,4680,8));
L_1803ebc6b_3:;
/* 1803ebc6f: jmp 0x1803ebc77 */
L_1803ebc6f_0:;
L_1803ebc6f_1:;
return UINT64_C(0x1803ebc77);
L_1803ebc6f_2:;
return UINT64_C(0x1803ebc71);
}
uint64_t b_1803ebc71(CPU*s){
/* 1803ebc71: unpcklps xmm2, xmm2 */
L_1803ebc71_0:;
L_1803ebc71_1:;
wr(s->r,4744,4,rd(s->r,4740,4));
L_1803ebc71_2:;
wr(s->r,4748,4,rd(s->r,4740,4));
L_1803ebc71_3:;
wr(s->r,4740,4,rd(s->r,4736,4));
L_1803ebc71_4:;
/* 1803ebc74: cvtps2pd xmm4, xmm2 */
L_1803ebc74_0:;
L_1803ebc74_1:;
wr(s->u,26,8,rd(s->r,4736,8));
L_1803ebc74_2:;
wr(s->r,4864,8,fb(fv(rd(s->u,26,4),4),8));
L_1803ebc74_3:;
wr(s->r,4872,8,fb(fv(rd(s->u,30,4),4),8));
L_1803ebc74_4:;
/* 1803ebc77: movapd xmm0, xmm6 */
L_1803ebc77_0:;
L_1803ebc77_1:;
wr(s->r,4608,8,rd(s->r,4992,8));
L_1803ebc77_2:;
wr(s->r,4616,8,rd(s->r,5000,8));
L_1803ebc77_3:;
/* 1803ebc7b: mulsd xmm0, xmm4 */
L_1803ebc7b_0:;
L_1803ebc7b_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4864,8),8),8));
L_1803ebc7b_2:;
/* 1803ebc7f: addsd xmm0, xmm1 */
L_1803ebc7f_0:;
L_1803ebc7f_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803ebc7f_2:;
/* 1803ebc83: movd xmm7, edx */
L_1803ebc83_0:;
L_1803ebc83_1:;
wr(s->r,5056,16,rd(s->r,16,4));
L_1803ebc83_2:;
/* 1803ebc87: movabs rdx, 0x8000000000000000 */
L_1803ebc87_0:;
L_1803ebc87_1:;
wr(s->r,16,8,((U)UINT64_C(0x8000000000000000)));
L_1803ebc87_2:;
/* 1803ebc91: cvtdq2ps xmm7, xmm7 */
L_1803ebc91_0:;
L_1803ebc91_1:;
wr(s->r,5056,4,fb((double)sx(rd(s->r,5056,4),4),4));
L_1803ebc91_2:;
wr(s->r,5060,4,fb((double)sx(rd(s->r,5060,4),4),4));
L_1803ebc91_3:;
wr(s->r,5064,4,fb((double)sx(rd(s->r,5064,4),4),4));
L_1803ebc91_4:;
wr(s->r,5068,4,fb((double)sx(rd(s->r,5068,4),4),4));
L_1803ebc91_5:;
/* 1803ebc94: mulss xmm7, xmm2 */
L_1803ebc94_0:;
L_1803ebc94_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803ebc94_2:;
/* 1803ebc98: unpcklps xmm7, xmm7 */
L_1803ebc98_0:;
L_1803ebc98_1:;
wr(s->r,5064,4,rd(s->r,5060,4));
L_1803ebc98_2:;
wr(s->r,5068,4,rd(s->r,5060,4));
L_1803ebc98_3:;
wr(s->r,5060,4,rd(s->r,5056,4));
L_1803ebc98_4:;
/* 1803ebc9b: cvtps2pd xmm4, xmm7 */
L_1803ebc9b_0:;
L_1803ebc9b_1:;
wr(s->u,26,8,rd(s->r,5056,8));
L_1803ebc9b_2:;
wr(s->r,4864,8,fb(fv(rd(s->u,26,4),4),8));
L_1803ebc9b_3:;
wr(s->r,4872,8,fb(fv(rd(s->u,30,4),4),8));
L_1803ebc9b_4:;
/* 1803ebc9e: addsd xmm4, xmm0 */
L_1803ebc9e_0:;
L_1803ebc9e_1:;
wr(s->r,4864,8,fb(fv(rd(s->r,4864,8),8)+fv(rd(s->r,4608,8),8),8));
L_1803ebc9e_2:;
/* 1803ebca2: xorpd xmm0, xmm0 */
L_1803ebca2_0:;
L_1803ebca2_1:;
wr(s->r,4608,8,(rd(s->r,4608,8)^rd(s->r,4608,8)));
L_1803ebca2_2:;
wr(s->r,4616,8,(rd(s->r,4616,8)^rd(s->r,4616,8)));
L_1803ebca2_3:;
/* 1803ebca6: cvttsd2si rcx, xmm4 */
L_1803ebca6_0:;
L_1803ebca6_1:;
wr(s->r,8,8,ftrunc(fv(rd(s->r,4864,8),8),8));
L_1803ebca6_2:;
/* 1803ebcab: cmp rcx, rdx */
L_1803ebcab_0:;
L_1803ebcab_1:;
wr(s->u,10,8,rd(s->r,16,8));
L_1803ebcab_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,10,8)));
L_1803ebcab_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,10,8),8,1));
L_1803ebcab_4:;
wr(s->u,18,8,(rd(s->r,8,8)-rd(s->u,10,8)));
L_1803ebcab_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebcab_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803ebcab_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803ebcab_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ebcab_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebcab_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebcab_11:;
/* 1803ebcae: je 0x1803ebcda */
L_1803ebcae_0:;
L_1803ebcae_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebcda);}
L_1803ebcae_2:;
return UINT64_C(0x1803ebcb0);
}
uint64_t b_1803ebc77(CPU*s){
/* 1803ebc77: movapd xmm0, xmm6 */
L_1803ebc77_0:;
L_1803ebc77_1:;
wr(s->r,4608,8,rd(s->r,4992,8));
L_1803ebc77_2:;
wr(s->r,4616,8,rd(s->r,5000,8));
L_1803ebc77_3:;
/* 1803ebc7b: mulsd xmm0, xmm4 */
L_1803ebc7b_0:;
L_1803ebc7b_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4864,8),8),8));
L_1803ebc7b_2:;
/* 1803ebc7f: addsd xmm0, xmm1 */
L_1803ebc7f_0:;
L_1803ebc7f_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803ebc7f_2:;
/* 1803ebc83: movd xmm7, edx */
L_1803ebc83_0:;
L_1803ebc83_1:;
wr(s->r,5056,16,rd(s->r,16,4));
L_1803ebc83_2:;
/* 1803ebc87: movabs rdx, 0x8000000000000000 */
L_1803ebc87_0:;
L_1803ebc87_1:;
wr(s->r,16,8,((U)UINT64_C(0x8000000000000000)));
L_1803ebc87_2:;
/* 1803ebc91: cvtdq2ps xmm7, xmm7 */
L_1803ebc91_0:;
L_1803ebc91_1:;
wr(s->r,5056,4,fb((double)sx(rd(s->r,5056,4),4),4));
L_1803ebc91_2:;
wr(s->r,5060,4,fb((double)sx(rd(s->r,5060,4),4),4));
L_1803ebc91_3:;
wr(s->r,5064,4,fb((double)sx(rd(s->r,5064,4),4),4));
L_1803ebc91_4:;
wr(s->r,5068,4,fb((double)sx(rd(s->r,5068,4),4),4));
L_1803ebc91_5:;
/* 1803ebc94: mulss xmm7, xmm2 */
L_1803ebc94_0:;
L_1803ebc94_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803ebc94_2:;
/* 1803ebc98: unpcklps xmm7, xmm7 */
L_1803ebc98_0:;
L_1803ebc98_1:;
wr(s->r,5064,4,rd(s->r,5060,4));
L_1803ebc98_2:;
wr(s->r,5068,4,rd(s->r,5060,4));
L_1803ebc98_3:;
wr(s->r,5060,4,rd(s->r,5056,4));
L_1803ebc98_4:;
/* 1803ebc9b: cvtps2pd xmm4, xmm7 */
L_1803ebc9b_0:;
L_1803ebc9b_1:;
wr(s->u,26,8,rd(s->r,5056,8));
L_1803ebc9b_2:;
wr(s->r,4864,8,fb(fv(rd(s->u,26,4),4),8));
L_1803ebc9b_3:;
wr(s->r,4872,8,fb(fv(rd(s->u,30,4),4),8));
L_1803ebc9b_4:;
/* 1803ebc9e: addsd xmm4, xmm0 */
L_1803ebc9e_0:;
L_1803ebc9e_1:;
wr(s->r,4864,8,fb(fv(rd(s->r,4864,8),8)+fv(rd(s->r,4608,8),8),8));
L_1803ebc9e_2:;
/* 1803ebca2: xorpd xmm0, xmm0 */
L_1803ebca2_0:;
L_1803ebca2_1:;
wr(s->r,4608,8,(rd(s->r,4608,8)^rd(s->r,4608,8)));
L_1803ebca2_2:;
wr(s->r,4616,8,(rd(s->r,4616,8)^rd(s->r,4616,8)));
L_1803ebca2_3:;
/* 1803ebca6: cvttsd2si rcx, xmm4 */
L_1803ebca6_0:;
L_1803ebca6_1:;
wr(s->r,8,8,ftrunc(fv(rd(s->r,4864,8),8),8));
L_1803ebca6_2:;
/* 1803ebcab: cmp rcx, rdx */
L_1803ebcab_0:;
L_1803ebcab_1:;
wr(s->u,10,8,rd(s->r,16,8));
L_1803ebcab_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,10,8)));
L_1803ebcab_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,10,8),8,1));
L_1803ebcab_4:;
wr(s->u,18,8,(rd(s->r,8,8)-rd(s->u,10,8)));
L_1803ebcab_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebcab_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803ebcab_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803ebcab_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ebcab_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebcab_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebcab_11:;
/* 1803ebcae: je 0x1803ebcda */
L_1803ebcae_0:;
L_1803ebcae_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebcda);}
L_1803ebcae_2:;
return UINT64_C(0x1803ebcb0);
}
uint64_t b_1803ebc83(CPU*s){
/* 1803ebc83: movd xmm7, edx */
L_1803ebc83_0:;
L_1803ebc83_1:;
wr(s->r,5056,16,rd(s->r,16,4));
L_1803ebc83_2:;
/* 1803ebc87: movabs rdx, 0x8000000000000000 */
L_1803ebc87_0:;
L_1803ebc87_1:;
wr(s->r,16,8,((U)UINT64_C(0x8000000000000000)));
L_1803ebc87_2:;
/* 1803ebc91: cvtdq2ps xmm7, xmm7 */
L_1803ebc91_0:;
L_1803ebc91_1:;
wr(s->r,5056,4,fb((double)sx(rd(s->r,5056,4),4),4));
L_1803ebc91_2:;
wr(s->r,5060,4,fb((double)sx(rd(s->r,5060,4),4),4));
L_1803ebc91_3:;
wr(s->r,5064,4,fb((double)sx(rd(s->r,5064,4),4),4));
L_1803ebc91_4:;
wr(s->r,5068,4,fb((double)sx(rd(s->r,5068,4),4),4));
L_1803ebc91_5:;
/* 1803ebc94: mulss xmm7, xmm2 */
L_1803ebc94_0:;
L_1803ebc94_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803ebc94_2:;
/* 1803ebc98: unpcklps xmm7, xmm7 */
L_1803ebc98_0:;
L_1803ebc98_1:;
wr(s->r,5064,4,rd(s->r,5060,4));
L_1803ebc98_2:;
wr(s->r,5068,4,rd(s->r,5060,4));
L_1803ebc98_3:;
wr(s->r,5060,4,rd(s->r,5056,4));
L_1803ebc98_4:;
/* 1803ebc9b: cvtps2pd xmm4, xmm7 */
L_1803ebc9b_0:;
L_1803ebc9b_1:;
wr(s->u,26,8,rd(s->r,5056,8));
L_1803ebc9b_2:;
wr(s->r,4864,8,fb(fv(rd(s->u,26,4),4),8));
L_1803ebc9b_3:;
wr(s->r,4872,8,fb(fv(rd(s->u,30,4),4),8));
L_1803ebc9b_4:;
/* 1803ebc9e: addsd xmm4, xmm0 */
L_1803ebc9e_0:;
L_1803ebc9e_1:;
wr(s->r,4864,8,fb(fv(rd(s->r,4864,8),8)+fv(rd(s->r,4608,8),8),8));
L_1803ebc9e_2:;
/* 1803ebca2: xorpd xmm0, xmm0 */
L_1803ebca2_0:;
L_1803ebca2_1:;
wr(s->r,4608,8,(rd(s->r,4608,8)^rd(s->r,4608,8)));
L_1803ebca2_2:;
wr(s->r,4616,8,(rd(s->r,4616,8)^rd(s->r,4616,8)));
L_1803ebca2_3:;
/* 1803ebca6: cvttsd2si rcx, xmm4 */
L_1803ebca6_0:;
L_1803ebca6_1:;
wr(s->r,8,8,ftrunc(fv(rd(s->r,4864,8),8),8));
L_1803ebca6_2:;
/* 1803ebcab: cmp rcx, rdx */
L_1803ebcab_0:;
L_1803ebcab_1:;
wr(s->u,10,8,rd(s->r,16,8));
L_1803ebcab_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,10,8)));
L_1803ebcab_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,10,8),8,1));
L_1803ebcab_4:;
wr(s->u,18,8,(rd(s->r,8,8)-rd(s->u,10,8)));
L_1803ebcab_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebcab_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803ebcab_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803ebcab_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ebcab_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebcab_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebcab_11:;
/* 1803ebcae: je 0x1803ebcda */
L_1803ebcae_0:;
L_1803ebcae_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebcda);}
L_1803ebcae_2:;
return UINT64_C(0x1803ebcb0);
}
uint64_t b_1803ebcb0(CPU*s){
/* 1803ebcb0: pxor xmm0, xmm0 */
L_1803ebcb0_0:;
L_1803ebcb0_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803ebcb0_2:;
/* 1803ebcb4: cvtsi2sd xmm0, rcx */
L_1803ebcb4_0:;
L_1803ebcb4_1:;
wr(s->r,4608,8,fb((double)sx(rd(s->r,8,8),8),8));
L_1803ebcb4_2:;
/* 1803ebcb9: ucomisd xmm0, xmm4 */
L_1803ebcb9_0:;
L_1803ebcb9_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803ebcb9_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4864,8),8)));
L_1803ebcb9_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803ebcb9_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,8),8)==fv(rd(s->r,4864,8),8)));
L_1803ebcb9_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803ebcb9_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,8),8)<fv(rd(s->r,4864,8),8)));
L_1803ebcb9_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ebcb9_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebcb9_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebcb9_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebcb9_11:;
/* 1803ebcbd: je 0x1803ebcda */
L_1803ebcbd_0:;
L_1803ebcbd_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebcda);}
L_1803ebcbd_2:;
return UINT64_C(0x1803ebcbf);
}
uint64_t b_1803ebcbf(CPU*s){
/* 1803ebcbf: unpcklpd xmm4, xmm4 */
L_1803ebcbf_0:;
L_1803ebcbf_1:;
wr(s->r,4872,8,rd(s->r,4864,8));
L_1803ebcbf_2:;
/* 1803ebcc3: movmskpd eax, xmm4 */
L_1803ebcc3_0:;
L_1803ebcc3_1:;
wr(s->r,0,4,(((rd(s->r,4864,16)>>63)&1)<<0)|(((rd(s->r,4864,16)>>127)&1)<<1));
L_1803ebcc3_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebcc3_3:;
/* 1803ebcc8: pxor xmm4, xmm4 */
L_1803ebcc8_0:;
L_1803ebcc8_1:;
wr(s->r,4864,16,(rd(s->r,4864,16)^rd(s->r,4864,16)));
L_1803ebcc8_2:;
/* 1803ebccc: and eax, 1 */
L_1803ebccc_0:;
L_1803ebccc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ebccc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebccc_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803ebccc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebccc_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebccc_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ebccc_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ebccc_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803ebccc_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebccc_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebccc_11:;
/* 1803ebccf: xor eax, 1 */
L_1803ebccf_0:;
L_1803ebccf_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ebccf_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebccf_3:;
wr(s->r,0,4,(rd(s->r,0,4)^((U)UINT64_C(0x1))));
L_1803ebccf_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebccf_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebccf_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ebccf_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ebccf_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803ebccf_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebccf_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebccf_11:;
/* 1803ebcd2: add rcx, rax */
L_1803ebcd2_0:;
L_1803ebcd2_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ebcd2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,0,8),8,0));
L_1803ebcd2_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,0,8)));
L_1803ebcd2_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebcd2_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ebcd2_6:;
wr(s->u,0,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ebcd2_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ebcd2_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebcd2_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebcd2_10:;
/* 1803ebcd5: cvtsi2sd xmm4, rcx */
L_1803ebcd5_0:;
L_1803ebcd5_1:;
wr(s->r,4864,8,fb((double)sx(rd(s->r,8,8),8),8));
L_1803ebcd5_2:;
/* 1803ebcda: xorpd xmm0, xmm0 */
L_1803ebcda_0:;
L_1803ebcda_1:;
wr(s->r,4608,8,(rd(s->r,4608,8)^rd(s->r,4608,8)));
L_1803ebcda_2:;
wr(s->r,4616,8,(rd(s->r,4616,8)^rd(s->r,4616,8)));
L_1803ebcda_3:;
/* 1803ebcde: comisd xmm4, xmm0 */
L_1803ebcde_0:;
L_1803ebcde_1:;
wr(s->u,10,1,isnan(fv(rd(s->r,4864,8),8)));
L_1803ebcde_2:;
wr(s->u,11,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803ebcde_3:;
wr(s->r,514,1,((rd(s->u,10,1)!=0)||(rd(s->u,11,1)!=0)));
L_1803ebcde_4:;
wr(s->u,12,1,(fv(rd(s->r,4864,8),8)==fv(rd(s->r,4608,8),8)));
L_1803ebcde_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,12,1)));
L_1803ebcde_6:;
wr(s->u,13,1,(fv(rd(s->r,4864,8),8)<fv(rd(s->r,4608,8),8)));
L_1803ebcde_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,13,1)));
L_1803ebcde_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebcde_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebcde_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebcde_11:;
/* 1803ebce2: jb 0x1803ebd6a */
L_1803ebce2_0:;
L_1803ebce2_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ebd6a);}
L_1803ebce2_2:;
return UINT64_C(0x1803ebce8);
}
uint64_t b_1803ebcda(CPU*s){
/* 1803ebcda: xorpd xmm0, xmm0 */
L_1803ebcda_0:;
L_1803ebcda_1:;
wr(s->r,4608,8,(rd(s->r,4608,8)^rd(s->r,4608,8)));
L_1803ebcda_2:;
wr(s->r,4616,8,(rd(s->r,4616,8)^rd(s->r,4616,8)));
L_1803ebcda_3:;
/* 1803ebcde: comisd xmm4, xmm0 */
L_1803ebcde_0:;
L_1803ebcde_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4864,8),8)));
L_1803ebcde_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803ebcde_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803ebcde_4:;
wr(s->u,2,1,(fv(rd(s->r,4864,8),8)==fv(rd(s->r,4608,8),8)));
L_1803ebcde_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803ebcde_6:;
wr(s->u,3,1,(fv(rd(s->r,4864,8),8)<fv(rd(s->r,4608,8),8)));
L_1803ebcde_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ebcde_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebcde_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebcde_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebcde_11:;
/* 1803ebce2: jb 0x1803ebd6a */
L_1803ebce2_0:;
L_1803ebce2_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ebd6a);}
L_1803ebce2_2:;
return UINT64_C(0x1803ebce8);
}
uint64_t b_1803ebce8(CPU*s){
/* 1803ebce8: comiss xmm2, xmm5 */
L_1803ebce8_0:;
L_1803ebce8_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803ebce8_2:;
wr(s->u,2,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803ebce8_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803ebce8_4:;
wr(s->u,3,1,(fv(rd(s->r,4736,4),4)==fv(rd(s->r,4928,4),4)));
L_1803ebce8_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ebce8_6:;
wr(s->u,4,1,(fv(rd(s->r,4736,4),4)<fv(rd(s->r,4928,4),4)));
L_1803ebce8_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803ebce8_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebce8_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebce8_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebce8_11:;
/* 1803ebceb: jae 0x1803ebcf3 */
L_1803ebceb_0:;
L_1803ebceb_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803ebceb_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ebcf3);}
L_1803ebceb_3:;
return UINT64_C(0x1803ebced);
}
uint64_t b_1803ebced(CPU*s){
/* 1803ebced: movapd xmm4, xmm1 */
L_1803ebced_0:;
L_1803ebced_1:;
wr(s->r,4864,8,rd(s->r,4672,8));
L_1803ebced_2:;
wr(s->r,4872,8,rd(s->r,4680,8));
L_1803ebced_3:;
/* 1803ebcf1: jmp 0x1803ebcf9 */
L_1803ebcf1_0:;
L_1803ebcf1_1:;
return UINT64_C(0x1803ebcf9);
L_1803ebcf1_2:;
return UINT64_C(0x1803ebcf3);
}
uint64_t b_1803ebcf3(CPU*s){
/* 1803ebcf3: unpcklps xmm2, xmm2 */
L_1803ebcf3_0:;
L_1803ebcf3_1:;
wr(s->r,4744,4,rd(s->r,4740,4));
L_1803ebcf3_2:;
wr(s->r,4748,4,rd(s->r,4740,4));
L_1803ebcf3_3:;
wr(s->r,4740,4,rd(s->r,4736,4));
L_1803ebcf3_4:;
/* 1803ebcf6: cvtps2pd xmm4, xmm2 */
L_1803ebcf6_0:;
L_1803ebcf6_1:;
wr(s->u,6,8,rd(s->r,4736,8));
L_1803ebcf6_2:;
wr(s->r,4864,8,fb(fv(rd(s->u,6,4),4),8));
L_1803ebcf6_3:;
wr(s->r,4872,8,fb(fv(rd(s->u,10,4),4),8));
L_1803ebcf6_4:;
/* 1803ebcf9: movapd xmm0, xmm6 */
L_1803ebcf9_0:;
L_1803ebcf9_1:;
wr(s->r,4608,8,rd(s->r,4992,8));
L_1803ebcf9_2:;
wr(s->r,4616,8,rd(s->r,5000,8));
L_1803ebcf9_3:;
/* 1803ebcfd: mulsd xmm0, xmm4 */
L_1803ebcfd_0:;
L_1803ebcfd_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4864,8),8),8));
L_1803ebcfd_2:;
/* 1803ebd01: addsd xmm0, xmm1 */
L_1803ebd01_0:;
L_1803ebd01_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803ebd01_2:;
/* 1803ebd05: comisd xmm3, xmm0 */
L_1803ebd05_0:;
L_1803ebd05_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4800,8),8)));
L_1803ebd05_2:;
wr(s->u,3,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803ebd05_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803ebd05_4:;
wr(s->u,4,1,(fv(rd(s->r,4800,8),8)==fv(rd(s->r,4608,8),8)));
L_1803ebd05_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803ebd05_6:;
wr(s->u,5,1,(fv(rd(s->r,4800,8),8)<fv(rd(s->r,4608,8),8)));
L_1803ebd05_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803ebd05_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebd05_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebd05_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebd05_11:;
/* 1803ebd09: ja 0x1803ebd28 */
L_1803ebd09_0:;
L_1803ebd09_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803ebd09_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803ebd09_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803ebd28);}
L_1803ebd09_4:;
return UINT64_C(0x1803ebd0b);
}
uint64_t b_1803ebcf9(CPU*s){
/* 1803ebcf9: movapd xmm0, xmm6 */
L_1803ebcf9_0:;
L_1803ebcf9_1:;
wr(s->r,4608,8,rd(s->r,4992,8));
L_1803ebcf9_2:;
wr(s->r,4616,8,rd(s->r,5000,8));
L_1803ebcf9_3:;
/* 1803ebcfd: mulsd xmm0, xmm4 */
L_1803ebcfd_0:;
L_1803ebcfd_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4864,8),8),8));
L_1803ebcfd_2:;
/* 1803ebd01: addsd xmm0, xmm1 */
L_1803ebd01_0:;
L_1803ebd01_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803ebd01_2:;
/* 1803ebd05: comisd xmm3, xmm0 */
L_1803ebd05_0:;
L_1803ebd05_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4800,8),8)));
L_1803ebd05_2:;
wr(s->u,3,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803ebd05_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803ebd05_4:;
wr(s->u,4,1,(fv(rd(s->r,4800,8),8)==fv(rd(s->r,4608,8),8)));
L_1803ebd05_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803ebd05_6:;
wr(s->u,5,1,(fv(rd(s->r,4800,8),8)<fv(rd(s->r,4608,8),8)));
L_1803ebd05_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803ebd05_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebd05_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebd05_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebd05_11:;
/* 1803ebd09: ja 0x1803ebd28 */
L_1803ebd09_0:;
L_1803ebd09_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803ebd09_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803ebd09_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803ebd28);}
L_1803ebd09_4:;
return UINT64_C(0x1803ebd0b);
}
uint64_t b_1803ebd0b(CPU*s){
/* 1803ebd0b: comiss xmm2, xmm5 */
L_1803ebd0b_0:;
L_1803ebd0b_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803ebd0b_2:;
wr(s->u,2,1,isnan(fv(rd(s->r,4928,4),4)));
L_1803ebd0b_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803ebd0b_4:;
wr(s->u,3,1,(fv(rd(s->r,4736,4),4)==fv(rd(s->r,4928,4),4)));
L_1803ebd0b_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ebd0b_6:;
wr(s->u,4,1,(fv(rd(s->r,4736,4),4)<fv(rd(s->r,4928,4),4)));
L_1803ebd0b_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803ebd0b_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebd0b_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebd0b_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebd0b_11:;
/* 1803ebd0e: jae 0x1803ebd16 */
L_1803ebd0e_0:;
L_1803ebd0e_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803ebd0e_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ebd16);}
L_1803ebd0e_3:;
return UINT64_C(0x1803ebd10);
}
uint64_t b_1803ebd10(CPU*s){
/* 1803ebd10: movapd xmm0, xmm1 */
L_1803ebd10_0:;
L_1803ebd10_1:;
wr(s->r,4608,8,rd(s->r,4672,8));
L_1803ebd10_2:;
wr(s->r,4616,8,rd(s->r,4680,8));
L_1803ebd10_3:;
/* 1803ebd14: jmp 0x1803ebd1c */
L_1803ebd14_0:;
L_1803ebd14_1:;
return UINT64_C(0x1803ebd1c);
L_1803ebd14_2:;
return UINT64_C(0x1803ebd16);
}
uint64_t b_1803ebd16(CPU*s){
/* 1803ebd16: unpcklps xmm2, xmm2 */
L_1803ebd16_0:;
L_1803ebd16_1:;
wr(s->r,4744,4,rd(s->r,4740,4));
L_1803ebd16_2:;
wr(s->r,4748,4,rd(s->r,4740,4));
L_1803ebd16_3:;
wr(s->r,4740,4,rd(s->r,4736,4));
L_1803ebd16_4:;
/* 1803ebd19: cvtps2pd xmm0, xmm2 */
L_1803ebd19_0:;
L_1803ebd19_1:;
wr(s->u,26,8,rd(s->r,4736,8));
L_1803ebd19_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,26,4),4),8));
L_1803ebd19_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,30,4),4),8));
L_1803ebd19_4:;
/* 1803ebd1c: movapd xmm3, xmm6 */
L_1803ebd1c_0:;
L_1803ebd1c_1:;
wr(s->r,4800,8,rd(s->r,4992,8));
L_1803ebd1c_2:;
wr(s->r,4808,8,rd(s->r,5000,8));
L_1803ebd1c_3:;
/* 1803ebd20: mulsd xmm3, xmm0 */
L_1803ebd20_0:;
L_1803ebd20_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803ebd20_2:;
/* 1803ebd24: addsd xmm3, xmm1 */
L_1803ebd24_0:;
L_1803ebd24_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803ebd24_2:;
/* 1803ebd28: unpcklps xmm7, xmm7 */
L_1803ebd28_0:;
L_1803ebd28_1:;
wr(s->r,5064,4,rd(s->r,5060,4));
L_1803ebd28_2:;
wr(s->r,5068,4,rd(s->r,5060,4));
L_1803ebd28_3:;
wr(s->r,5060,4,rd(s->r,5056,4));
L_1803ebd28_4:;
/* 1803ebd2b: xorpd xmm1, xmm1 */
L_1803ebd2b_0:;
L_1803ebd2b_1:;
wr(s->r,4672,8,(rd(s->r,4672,8)^rd(s->r,4672,8)));
L_1803ebd2b_2:;
wr(s->r,4680,8,(rd(s->r,4680,8)^rd(s->r,4680,8)));
L_1803ebd2b_3:;
/* 1803ebd2f: cvtps2pd xmm0, xmm7 */
L_1803ebd2f_0:;
L_1803ebd2f_1:;
wr(s->u,26,8,rd(s->r,5056,8));
L_1803ebd2f_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,26,4),4),8));
L_1803ebd2f_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,30,4),4),8));
L_1803ebd2f_4:;
/* 1803ebd32: addsd xmm0, xmm3 */
L_1803ebd32_0:;
L_1803ebd32_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803ebd32_2:;
/* 1803ebd36: cvttsd2si rcx, xmm0 */
L_1803ebd36_0:;
L_1803ebd36_1:;
wr(s->r,8,8,ftrunc(fv(rd(s->r,4608,8),8),8));
L_1803ebd36_2:;
/* 1803ebd3b: cmp rcx, rdx */
L_1803ebd3b_0:;
L_1803ebd3b_1:;
wr(s->u,10,8,rd(s->r,16,8));
L_1803ebd3b_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,10,8)));
L_1803ebd3b_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,10,8),8,1));
L_1803ebd3b_4:;
wr(s->u,18,8,(rd(s->r,8,8)-rd(s->u,10,8)));
L_1803ebd3b_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebd3b_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803ebd3b_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803ebd3b_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ebd3b_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebd3b_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebd3b_11:;
/* 1803ebd3e: je 0x1803ebd6a */
L_1803ebd3e_0:;
L_1803ebd3e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebd6a);}
L_1803ebd3e_2:;
return UINT64_C(0x1803ebd40);
}
uint64_t b_1803ebd1c(CPU*s){
/* 1803ebd1c: movapd xmm3, xmm6 */
L_1803ebd1c_0:;
L_1803ebd1c_1:;
wr(s->r,4800,8,rd(s->r,4992,8));
L_1803ebd1c_2:;
wr(s->r,4808,8,rd(s->r,5000,8));
L_1803ebd1c_3:;
/* 1803ebd20: mulsd xmm3, xmm0 */
L_1803ebd20_0:;
L_1803ebd20_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803ebd20_2:;
/* 1803ebd24: addsd xmm3, xmm1 */
L_1803ebd24_0:;
L_1803ebd24_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->r,4672,8),8),8));
L_1803ebd24_2:;
/* 1803ebd28: unpcklps xmm7, xmm7 */
L_1803ebd28_0:;
L_1803ebd28_1:;
wr(s->r,5064,4,rd(s->r,5060,4));
L_1803ebd28_2:;
wr(s->r,5068,4,rd(s->r,5060,4));
L_1803ebd28_3:;
wr(s->r,5060,4,rd(s->r,5056,4));
L_1803ebd28_4:;
/* 1803ebd2b: xorpd xmm1, xmm1 */
L_1803ebd2b_0:;
L_1803ebd2b_1:;
wr(s->r,4672,8,(rd(s->r,4672,8)^rd(s->r,4672,8)));
L_1803ebd2b_2:;
wr(s->r,4680,8,(rd(s->r,4680,8)^rd(s->r,4680,8)));
L_1803ebd2b_3:;
/* 1803ebd2f: cvtps2pd xmm0, xmm7 */
L_1803ebd2f_0:;
L_1803ebd2f_1:;
wr(s->u,26,8,rd(s->r,5056,8));
L_1803ebd2f_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,26,4),4),8));
L_1803ebd2f_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,30,4),4),8));
L_1803ebd2f_4:;
/* 1803ebd32: addsd xmm0, xmm3 */
L_1803ebd32_0:;
L_1803ebd32_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803ebd32_2:;
/* 1803ebd36: cvttsd2si rcx, xmm0 */
L_1803ebd36_0:;
L_1803ebd36_1:;
wr(s->r,8,8,ftrunc(fv(rd(s->r,4608,8),8),8));
L_1803ebd36_2:;
/* 1803ebd3b: cmp rcx, rdx */
L_1803ebd3b_0:;
L_1803ebd3b_1:;
wr(s->u,10,8,rd(s->r,16,8));
L_1803ebd3b_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,10,8)));
L_1803ebd3b_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,10,8),8,1));
L_1803ebd3b_4:;
wr(s->u,18,8,(rd(s->r,8,8)-rd(s->u,10,8)));
L_1803ebd3b_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebd3b_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803ebd3b_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803ebd3b_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ebd3b_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebd3b_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebd3b_11:;
/* 1803ebd3e: je 0x1803ebd6a */
L_1803ebd3e_0:;
L_1803ebd3e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebd6a);}
L_1803ebd3e_2:;
return UINT64_C(0x1803ebd40);
}
uint64_t b_1803ebd28(CPU*s){
/* 1803ebd28: unpcklps xmm7, xmm7 */
L_1803ebd28_0:;
L_1803ebd28_1:;
wr(s->r,5064,4,rd(s->r,5060,4));
L_1803ebd28_2:;
wr(s->r,5068,4,rd(s->r,5060,4));
L_1803ebd28_3:;
wr(s->r,5060,4,rd(s->r,5056,4));
L_1803ebd28_4:;
/* 1803ebd2b: xorpd xmm1, xmm1 */
L_1803ebd2b_0:;
L_1803ebd2b_1:;
wr(s->r,4672,8,(rd(s->r,4672,8)^rd(s->r,4672,8)));
L_1803ebd2b_2:;
wr(s->r,4680,8,(rd(s->r,4680,8)^rd(s->r,4680,8)));
L_1803ebd2b_3:;
/* 1803ebd2f: cvtps2pd xmm0, xmm7 */
L_1803ebd2f_0:;
L_1803ebd2f_1:;
wr(s->u,26,8,rd(s->r,5056,8));
L_1803ebd2f_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,26,4),4),8));
L_1803ebd2f_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,30,4),4),8));
L_1803ebd2f_4:;
/* 1803ebd32: addsd xmm0, xmm3 */
L_1803ebd32_0:;
L_1803ebd32_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4800,8),8),8));
L_1803ebd32_2:;
/* 1803ebd36: cvttsd2si rcx, xmm0 */
L_1803ebd36_0:;
L_1803ebd36_1:;
wr(s->r,8,8,ftrunc(fv(rd(s->r,4608,8),8),8));
L_1803ebd36_2:;
/* 1803ebd3b: cmp rcx, rdx */
L_1803ebd3b_0:;
L_1803ebd3b_1:;
wr(s->u,10,8,rd(s->r,16,8));
L_1803ebd3b_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,10,8)));
L_1803ebd3b_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,10,8),8,1));
L_1803ebd3b_4:;
wr(s->u,18,8,(rd(s->r,8,8)-rd(s->u,10,8)));
L_1803ebd3b_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebd3b_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803ebd3b_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803ebd3b_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ebd3b_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebd3b_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebd3b_11:;
/* 1803ebd3e: je 0x1803ebd6a */
L_1803ebd3e_0:;
L_1803ebd3e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebd6a);}
L_1803ebd3e_2:;
return UINT64_C(0x1803ebd40);
}
uint64_t b_1803ebd40(CPU*s){
/* 1803ebd40: pxor xmm1, xmm1 */
L_1803ebd40_0:;
L_1803ebd40_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803ebd40_2:;
/* 1803ebd44: cvtsi2sd xmm1, rcx */
L_1803ebd44_0:;
L_1803ebd44_1:;
wr(s->r,4672,8,fb((double)sx(rd(s->r,8,8),8),8));
L_1803ebd44_2:;
/* 1803ebd49: ucomisd xmm1, xmm0 */
L_1803ebd49_0:;
L_1803ebd49_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4672,8),8)));
L_1803ebd49_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803ebd49_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803ebd49_4:;
wr(s->u,2,1,(fv(rd(s->r,4672,8),8)==fv(rd(s->r,4608,8),8)));
L_1803ebd49_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803ebd49_6:;
wr(s->u,3,1,(fv(rd(s->r,4672,8),8)<fv(rd(s->r,4608,8),8)));
L_1803ebd49_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ebd49_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebd49_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebd49_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebd49_11:;
/* 1803ebd4d: je 0x1803ebd6a */
L_1803ebd4d_0:;
L_1803ebd4d_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebd6a);}
L_1803ebd4d_2:;
return UINT64_C(0x1803ebd4f);
}
uint64_t b_1803ebd4f(CPU*s){
/* 1803ebd4f: unpcklpd xmm0, xmm0 */
L_1803ebd4f_0:;
L_1803ebd4f_1:;
wr(s->r,4616,8,rd(s->r,4608,8));
L_1803ebd4f_2:;
/* 1803ebd53: movmskpd eax, xmm0 */
L_1803ebd53_0:;
L_1803ebd53_1:;
wr(s->r,0,4,(((rd(s->r,4608,16)>>63)&1)<<0)|(((rd(s->r,4608,16)>>127)&1)<<1));
L_1803ebd53_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebd53_3:;
/* 1803ebd58: pxor xmm0, xmm0 */
L_1803ebd58_0:;
L_1803ebd58_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803ebd58_2:;
/* 1803ebd5c: and eax, 1 */
L_1803ebd5c_0:;
L_1803ebd5c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ebd5c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebd5c_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803ebd5c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebd5c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebd5c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ebd5c_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ebd5c_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803ebd5c_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ebd5c_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ebd5c_11:;
/* 1803ebd5f: xor eax, 1 */
L_1803ebd5f_0:;
L_1803ebd5f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ebd5f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebd5f_3:;
wr(s->r,0,4,(rd(s->r,0,4)^((U)UINT64_C(0x1))));
L_1803ebd5f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebd5f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebd5f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ebd5f_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ebd5f_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803ebd5f_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ebd5f_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ebd5f_11:;
/* 1803ebd62: add rcx, rax */
L_1803ebd62_0:;
L_1803ebd62_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ebd62_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,0,8),8,0));
L_1803ebd62_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,0,8)));
L_1803ebd62_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebd62_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ebd62_6:;
wr(s->u,24,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ebd62_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ebd62_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ebd62_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ebd62_10:;
/* 1803ebd65: cvtsi2sd xmm0, rcx */
L_1803ebd65_0:;
L_1803ebd65_1:;
wr(s->r,4608,8,fb((double)sx(rd(s->r,8,8),8),8));
L_1803ebd65_2:;
/* 1803ebd6a: movaps xmm7, xmmword ptr [rsp] */
L_1803ebd6a_0:;
L_1803ebd6a_1:;
wr(s->u,8,16,mr((uint64_t)rd(s->r,32,8),16));
L_1803ebd6a_2:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803ebd6a_3:;
wr(s->r,5056,4,rd(s->u,34,4));
L_1803ebd6a_4:;
wr(s->r,5060,4,rd(s->u,38,4));
L_1803ebd6a_5:;
wr(s->r,5064,4,rd(s->u,42,4));
L_1803ebd6a_6:;
wr(s->r,5068,4,rd(s->u,46,4));
L_1803ebd6a_7:;
/* 1803ebd6e: movaps xmm6, xmmword ptr [rsp + 0x10] */
L_1803ebd6e_0:;
L_1803ebd6e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ebd6e_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803ebd6e_3:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803ebd6e_4:;
wr(s->r,4992,4,rd(s->u,34,4));
L_1803ebd6e_5:;
wr(s->r,4996,4,rd(s->u,38,4));
L_1803ebd6e_6:;
wr(s->r,5000,4,rd(s->u,42,4));
L_1803ebd6e_7:;
wr(s->r,5004,4,rd(s->u,46,4));
L_1803ebd6e_8:;
/* 1803ebd73: cvttsd2si eax, xmm0 */
L_1803ebd73_0:;
L_1803ebd73_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,8),8),4));
L_1803ebd73_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebd73_3:;
/* 1803ebd77: add rsp, 0x28 */
L_1803ebd77_0:;
L_1803ebd77_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ebd77_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803ebd77_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803ebd77_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebd77_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ebd77_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ebd77_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ebd77_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ebd77_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ebd77_10:;
/* 1803ebd7b: ret  */
L_1803ebd7b_0:;
L_1803ebd7b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ebd7b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ebd7b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ebd7b_4:;
return UINT64_C(0x1803ebd7c);
}
uint64_t b_1803ebd6a(CPU*s){
/* 1803ebd6a: movaps xmm7, xmmword ptr [rsp] */
L_1803ebd6a_0:;
L_1803ebd6a_1:;
wr(s->u,8,16,mr((uint64_t)rd(s->r,32,8),16));
L_1803ebd6a_2:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803ebd6a_3:;
wr(s->r,5056,4,rd(s->u,34,4));
L_1803ebd6a_4:;
wr(s->r,5060,4,rd(s->u,38,4));
L_1803ebd6a_5:;
wr(s->r,5064,4,rd(s->u,42,4));
L_1803ebd6a_6:;
wr(s->r,5068,4,rd(s->u,46,4));
L_1803ebd6a_7:;
/* 1803ebd6e: movaps xmm6, xmmword ptr [rsp + 0x10] */
L_1803ebd6e_0:;
L_1803ebd6e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ebd6e_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803ebd6e_3:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803ebd6e_4:;
wr(s->r,4992,4,rd(s->u,34,4));
L_1803ebd6e_5:;
wr(s->r,4996,4,rd(s->u,38,4));
L_1803ebd6e_6:;
wr(s->r,5000,4,rd(s->u,42,4));
L_1803ebd6e_7:;
wr(s->r,5004,4,rd(s->u,46,4));
L_1803ebd6e_8:;
/* 1803ebd73: cvttsd2si eax, xmm0 */
L_1803ebd73_0:;
L_1803ebd73_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,8),8),4));
L_1803ebd73_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebd73_3:;
/* 1803ebd77: add rsp, 0x28 */
L_1803ebd77_0:;
L_1803ebd77_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ebd77_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803ebd77_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803ebd77_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebd77_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ebd77_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ebd77_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ebd77_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ebd77_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ebd77_10:;
/* 1803ebd7b: ret  */
L_1803ebd7b_0:;
L_1803ebd7b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ebd7b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ebd7b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ebd7b_4:;
return UINT64_C(0x1803ebd7c);
}
uint64_t b_1803ebd7c(CPU*s){
/* 1803ebd7c: movd xmm0, dword ptr [rcx + 0x28] */
L_1803ebd7c_0:;
L_1803ebd7c_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x28))));
L_1803ebd7c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ebd7c_3:;
wr(s->r,4608,16,rd(s->u,8,4));
L_1803ebd7c_4:;
/* 1803ebd81: movd xmm1, edx */
L_1803ebd81_0:;
L_1803ebd81_1:;
wr(s->r,4672,16,rd(s->r,16,4));
L_1803ebd81_2:;
/* 1803ebd85: cvtdq2ps xmm0, xmm0 */
L_1803ebd85_0:;
L_1803ebd85_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ebd85_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ebd85_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ebd85_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ebd85_5:;
/* 1803ebd88: cvtdq2ps xmm1, xmm1 */
L_1803ebd88_0:;
L_1803ebd88_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803ebd88_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803ebd88_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803ebd88_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803ebd88_5:;
/* 1803ebd8b: mulss xmm1, xmm2 */
L_1803ebd8b_0:;
L_1803ebd8b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803ebd8b_2:;
/* 1803ebd8f: subss xmm1, xmm0 */
L_1803ebd8f_0:;
L_1803ebd8f_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ebd8f_2:;
/* 1803ebd93: cvttss2si ecx, xmm1 */
L_1803ebd93_0:;
L_1803ebd93_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803ebd93_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ebd93_3:;
/* 1803ebd97: cmp ecx, 0x80000000 */
L_1803ebd97_0:;
L_1803ebd97_1:;
wr(s->u,18,4,rd(s->r,8,4));
L_1803ebd97_2:;
wr(s->r,512,1,(rd(s->u,18,4)<((U)UINT64_C(0x80000000))));
L_1803ebd97_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),((U)UINT64_C(0x80000000)),4,1));
L_1803ebd97_4:;
wr(s->u,22,4,(rd(s->u,18,4)-((U)UINT64_C(0x80000000))));
L_1803ebd97_5:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebd97_6:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803ebd97_7:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803ebd97_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803ebd97_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ebd97_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ebd97_11:;
/* 1803ebd9d: je 0x1803ebdc2 */
L_1803ebd9d_0:;
L_1803ebd9d_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebdc2);}
L_1803ebd9d_2:;
return UINT64_C(0x1803ebd9f);
}
uint64_t b_1803ebd9f(CPU*s){
/* 1803ebd9f: pxor xmm0, xmm0 */
L_1803ebd9f_0:;
L_1803ebd9f_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803ebd9f_2:;
/* 1803ebda3: cvtsi2ss xmm0, ecx */
L_1803ebda3_0:;
L_1803ebda3_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803ebda3_2:;
/* 1803ebda7: ucomiss xmm0, xmm1 */
L_1803ebda7_0:;
L_1803ebda7_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803ebda7_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803ebda7_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803ebda7_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803ebda7_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803ebda7_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803ebda7_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ebda7_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebda7_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebda7_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebda7_11:;
/* 1803ebdaa: je 0x1803ebdc2 */
L_1803ebdaa_0:;
L_1803ebdaa_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ebdc2);}
L_1803ebdaa_2:;
return UINT64_C(0x1803ebdac);
}
uint64_t b_1803ebdac(CPU*s){
/* 1803ebdac: unpcklps xmm1, xmm1 */
L_1803ebdac_0:;
L_1803ebdac_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803ebdac_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803ebdac_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803ebdac_4:;
/* 1803ebdaf: movmskps eax, xmm1 */
L_1803ebdaf_0:;
L_1803ebdaf_1:;
wr(s->r,0,4,(((rd(s->r,4672,16)>>31)&1)<<0)|(((rd(s->r,4672,16)>>63)&1)<<1)|(((rd(s->r,4672,16)>>95)&1)<<2)|(((rd(s->r,4672,16)>>127)&1)<<3));
L_1803ebdaf_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebdaf_3:;
/* 1803ebdb2: pxor xmm1, xmm1 */
L_1803ebdb2_0:;
L_1803ebdb2_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803ebdb2_2:;
/* 1803ebdb6: and eax, 1 */
L_1803ebdb6_0:;
L_1803ebdb6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ebdb6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebdb6_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803ebdb6_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebdb6_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebdb6_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ebdb6_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ebdb6_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803ebdb6_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803ebdb6_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803ebdb6_11:;
/* 1803ebdb9: xor eax, 1 */
L_1803ebdb9_0:;
L_1803ebdb9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ebdb9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebdb9_3:;
wr(s->r,0,4,(rd(s->r,0,4)^((U)UINT64_C(0x1))));
L_1803ebdb9_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebdb9_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebdb9_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ebdb9_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ebdb9_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803ebdb9_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803ebdb9_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803ebdb9_11:;
/* 1803ebdbc: add ecx, eax */
L_1803ebdbc_0:;
L_1803ebdbc_1:;
wr(s->r,512,1,(((rd(s->r,8,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,8,4)));
L_1803ebdbc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,0));
L_1803ebdbc_3:;
wr(s->r,8,4,(rd(s->r,8,4)+rd(s->r,0,4)));
L_1803ebdbc_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ebdbc_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebdbc_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ebdbc_7:;
wr(s->u,0,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ebdbc_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803ebdbc_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803ebdbc_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803ebdbc_11:;
/* 1803ebdbe: cvtsi2ss xmm1, ecx */
L_1803ebdbe_0:;
L_1803ebdbe_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803ebdbe_2:;
/* 1803ebdc2: xorps xmm0, xmm0 */
L_1803ebdc2_0:;
L_1803ebdc2_1:;
wr(s->r,4608,4,(rd(s->r,4608,4)^rd(s->r,4608,4)));
L_1803ebdc2_2:;
wr(s->r,4612,4,(rd(s->r,4612,4)^rd(s->r,4612,4)));
L_1803ebdc2_3:;
wr(s->r,4616,4,(rd(s->r,4616,4)^rd(s->r,4616,4)));
L_1803ebdc2_4:;
wr(s->r,4620,4,(rd(s->r,4620,4)^rd(s->r,4620,4)));
L_1803ebdc2_5:;
/* 1803ebdc5: comiss xmm1, xmm0 */
L_1803ebdc5_0:;
L_1803ebdc5_1:;
wr(s->u,6,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803ebdc5_2:;
wr(s->u,7,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803ebdc5_3:;
wr(s->r,514,1,((rd(s->u,6,1)!=0)||(rd(s->u,7,1)!=0)));
L_1803ebdc5_4:;
wr(s->u,8,1,(fv(rd(s->r,4672,4),4)==fv(rd(s->r,4608,4),4)));
L_1803ebdc5_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,8,1)));
L_1803ebdc5_6:;
wr(s->u,9,1,(fv(rd(s->r,4672,4),4)<fv(rd(s->r,4608,4),4)));
L_1803ebdc5_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,9,1)));
L_1803ebdc5_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebdc5_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebdc5_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebdc5_11:;
/* 1803ebdc8: jb 0x1803ebdcd */
L_1803ebdc8_0:;
L_1803ebdc8_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ebdcd);}
L_1803ebdc8_2:;
return UINT64_C(0x1803ebdca);
}
uint64_t b_1803ebdc2(CPU*s){
/* 1803ebdc2: xorps xmm0, xmm0 */
L_1803ebdc2_0:;
L_1803ebdc2_1:;
wr(s->r,4608,4,(rd(s->r,4608,4)^rd(s->r,4608,4)));
L_1803ebdc2_2:;
wr(s->r,4612,4,(rd(s->r,4612,4)^rd(s->r,4612,4)));
L_1803ebdc2_3:;
wr(s->r,4616,4,(rd(s->r,4616,4)^rd(s->r,4616,4)));
L_1803ebdc2_4:;
wr(s->r,4620,4,(rd(s->r,4620,4)^rd(s->r,4620,4)));
L_1803ebdc2_5:;
/* 1803ebdc5: comiss xmm1, xmm0 */
L_1803ebdc5_0:;
L_1803ebdc5_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803ebdc5_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803ebdc5_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803ebdc5_4:;
wr(s->u,2,1,(fv(rd(s->r,4672,4),4)==fv(rd(s->r,4608,4),4)));
L_1803ebdc5_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803ebdc5_6:;
wr(s->u,3,1,(fv(rd(s->r,4672,4),4)<fv(rd(s->r,4608,4),4)));
L_1803ebdc5_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ebdc5_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebdc5_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebdc5_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebdc5_11:;
/* 1803ebdc8: jb 0x1803ebdcd */
L_1803ebdc8_0:;
L_1803ebdc8_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803ebdcd);}
L_1803ebdc8_2:;
return UINT64_C(0x1803ebdca);
}
uint64_t b_1803ebdca(CPU*s){
/* 1803ebdca: movaps xmm0, xmm1 */
L_1803ebdca_0:;
L_1803ebdca_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803ebdca_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803ebdca_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803ebdca_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803ebdca_5:;
/* 1803ebdcd: cvttss2si eax, xmm0 */
L_1803ebdcd_0:;
L_1803ebdcd_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803ebdcd_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebdcd_3:;
/* 1803ebdd1: add rsp, 0x28 */
L_1803ebdd1_0:;
L_1803ebdd1_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ebdd1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803ebdd1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803ebdd1_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebdd1_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ebdd1_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ebdd1_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ebdd1_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebdd1_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebdd1_10:;
/* 1803ebdd5: ret  */
L_1803ebdd5_0:;
L_1803ebdd5_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ebdd5_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ebdd5_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ebdd5_4:;
return UINT64_C(0x1803ebdd6);
}
uint64_t b_1803ebdcd(CPU*s){
/* 1803ebdcd: cvttss2si eax, xmm0 */
L_1803ebdcd_0:;
L_1803ebdcd_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803ebdcd_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebdcd_3:;
/* 1803ebdd1: add rsp, 0x28 */
L_1803ebdd1_0:;
L_1803ebdd1_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ebdd1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803ebdd1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803ebdd1_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebdd1_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ebdd1_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ebdd1_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ebdd1_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ebdd1_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ebdd1_10:;
/* 1803ebdd5: ret  */
L_1803ebdd5_0:;
L_1803ebdd5_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ebdd5_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ebdd5_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ebdd5_4:;
return UINT64_C(0x1803ebdd6);
}
uint64_t b_1803ebde0(CPU*s){
/* 1803ebde0: sub rsp, 0x38 */
L_1803ebde0_0:;
L_1803ebde0_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x38))));
L_1803ebde0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,1));
L_1803ebde0_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x38))));
L_1803ebde0_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebde0_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ebde0_6:;
wr(s->u,53,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ebde0_7:;
wr(s->u,61,1,pop(rd(s->u,53,8),8));
L_1803ebde0_8:;
wr(s->u,62,1,(rd(s->u,61,1)&((U)UINT64_C(0x1))));
L_1803ebde0_9:;
wr(s->r,514,1,(rd(s->u,62,1)==((U)UINT64_C(0x0))));
L_1803ebde0_10:;
/* 1803ebde4: movss xmm3, dword ptr [rip + 0x260e58] */
L_1803ebde4_0:;
L_1803ebde4_1:;
wr(s->r,4800,4,mr(UINT64_C(0x18064cc44),4));
L_1803ebde4_2:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ebde4_3:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ebde4_4:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ebde4_5:;
/* 1803ebdec: movsd xmm5, qword ptr [rip + 0x420d84] */
L_1803ebdec_0:;
L_1803ebdec_1:;
wr(s->r,4928,8,mr(UINT64_C(0x18080cb78),8));
L_1803ebdec_2:;
wr(s->r,4936,8,((U)UINT64_C(0x0)));
L_1803ebdec_3:;
/* 1803ebdf4: movaps xmmword ptr [rsp + 0x20], xmm6 */
L_1803ebdf4_0:;
L_1803ebdf4_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ebdf4_2:;
wr(s->u,36,16,rd(s->r,4992,16));
L_1803ebdf4_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,36,16));
L_1803ebdf4_4:;
/* 1803ebdf9: mov edx, 1 */
L_1803ebdf9_0:;
L_1803ebdf9_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803ebdf9_2:;
/* 1803ebdfe: movaps xmmword ptr [rsp + 0x10], xmm7 */
L_1803ebdfe_0:;
L_1803ebdfe_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ebdfe_2:;
wr(s->u,36,16,rd(s->r,5056,16));
L_1803ebdfe_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,36,16));
L_1803ebdfe_4:;
/* 1803ebe03: movaps xmmword ptr [rsp], xmm10 */
L_1803ebe03_0:;
L_1803ebe03_1:;
wr(s->u,36,16,rd(s->r,5248,16));
L_1803ebe03_2:;
mw((uint64_t)rd(s->r,32,8),16,rd(s->u,36,16));
L_1803ebe03_3:;
/* 1803ebe08: mov eax, edx */
L_1803ebe08_0:;
L_1803ebe08_1:;
wr(s->r,0,4,rd(s->r,16,4));
L_1803ebe08_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebe08_3:;
/* 1803ebe0a: movss xmm6, dword ptr [rcx + 0x48] */
L_1803ebe0a_0:;
L_1803ebe0a_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x48))));
L_1803ebe0a_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ebe0a_3:;
wr(s->r,4992,4,rd(s->u,32,4));
L_1803ebe0a_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ebe0a_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ebe0a_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ebe0a_7:;
/* 1803ebe0f: movaps xmm10, xmm1 */
L_1803ebe0f_0:;
L_1803ebe0f_1:;
wr(s->r,5248,4,rd(s->r,4672,4));
L_1803ebe0f_2:;
wr(s->r,5252,4,rd(s->r,4676,4));
L_1803ebe0f_3:;
wr(s->r,5256,4,rd(s->r,4680,4));
L_1803ebe0f_4:;
wr(s->r,5260,4,rd(s->r,4684,4));
L_1803ebe0f_5:;
/* 1803ebe13: movaps xmm4, xmm3 */
L_1803ebe13_0:;
L_1803ebe13_1:;
wr(s->r,4864,4,rd(s->r,4800,4));
L_1803ebe13_2:;
wr(s->r,4868,4,rd(s->r,4804,4));
L_1803ebe13_3:;
wr(s->r,4872,4,rd(s->r,4808,4));
L_1803ebe13_4:;
wr(s->r,4876,4,rd(s->r,4812,4));
L_1803ebe13_5:;
/* 1803ebe16: movaps xmm2, xmm3 */
L_1803ebe16_0:;
L_1803ebe16_1:;
wr(s->r,4736,4,rd(s->r,4800,4));
L_1803ebe16_2:;
wr(s->r,4740,4,rd(s->r,4804,4));
L_1803ebe16_3:;
wr(s->r,4744,4,rd(s->r,4808,4));
L_1803ebe16_4:;
wr(s->r,4748,4,rd(s->r,4812,4));
L_1803ebe16_5:;
/* 1803ebe19: mulss xmm6, dword ptr [rip + 0x266343] */
L_1803ebe19_0:;
L_1803ebe19_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(mr(UINT64_C(0x180652164),4),4),4));
L_1803ebe19_2:;
/* 1803ebe21: nop word ptr [rax + rax] */
L_1803ebe21_0:;
L_1803ebe21_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ebe21_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803ebe21_3:;
/* 1803ebe30: movd xmm0, eax */
L_1803ebe30_0:;
L_1803ebe30_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803ebe30_2:;
/* 1803ebe34: movaps xmm1, xmm6 */
L_1803ebe34_0:;
L_1803ebe34_1:;
wr(s->r,4672,4,rd(s->r,4992,4));
L_1803ebe34_2:;
wr(s->r,4676,4,rd(s->r,4996,4));
L_1803ebe34_3:;
wr(s->r,4680,4,rd(s->r,5000,4));
L_1803ebe34_4:;
wr(s->r,4684,4,rd(s->r,5004,4));
L_1803ebe34_5:;
/* 1803ebe37: inc eax */
L_1803ebe37_0:;
L_1803ebe37_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,0));
L_1803ebe37_2:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x1))));
L_1803ebe37_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebe37_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebe37_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ebe37_6:;
wr(s->u,53,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ebe37_7:;
wr(s->u,61,1,pop(rd(s->u,53,4),4));
L_1803ebe37_8:;
wr(s->u,62,1,(rd(s->u,61,1)&((U)UINT64_C(0x1))));
L_1803ebe37_9:;
wr(s->r,514,1,(rd(s->u,62,1)==((U)UINT64_C(0x0))));
L_1803ebe37_10:;
/* 1803ebe39: cvtdq2ps xmm0, xmm0 */
L_1803ebe39_0:;
L_1803ebe39_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ebe39_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ebe39_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ebe39_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ebe39_5:;
/* 1803ebe3c: divss xmm1, xmm0 */
L_1803ebe3c_0:;
L_1803ebe3c_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4608,4),4),4));
L_1803ebe3c_2:;
/* 1803ebe40: mulss xmm1, xmm1 */
L_1803ebe40_0:;
L_1803ebe40_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ebe40_2:;
/* 1803ebe44: mulss xmm2, xmm1 */
L_1803ebe44_0:;
L_1803ebe44_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ebe44_2:;
/* 1803ebe48: addss xmm4, xmm2 */
L_1803ebe48_0:;
L_1803ebe48_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ebe48_2:;
/* 1803ebe4c: unpcklps xmm2, xmm2 */
L_1803ebe4c_0:;
L_1803ebe4c_1:;
wr(s->r,4744,4,rd(s->r,4740,4));
L_1803ebe4c_2:;
wr(s->r,4748,4,rd(s->r,4740,4));
L_1803ebe4c_3:;
wr(s->r,4740,4,rd(s->r,4736,4));
L_1803ebe4c_4:;
/* 1803ebe4f: cvtps2pd xmm1, xmm2 */
L_1803ebe4f_0:;
L_1803ebe4f_1:;
wr(s->u,67,8,rd(s->r,4736,8));
L_1803ebe4f_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,67,4),4),8));
L_1803ebe4f_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,71,4),4),8));
L_1803ebe4f_4:;
/* 1803ebe52: unpcklps xmm4, xmm4 */
L_1803ebe52_0:;
L_1803ebe52_1:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803ebe52_2:;
wr(s->r,4876,4,rd(s->r,4868,4));
L_1803ebe52_3:;
wr(s->r,4868,4,rd(s->r,4864,4));
L_1803ebe52_4:;
/* 1803ebe55: cvtps2pd xmm0, xmm4 */
L_1803ebe55_0:;
L_1803ebe55_1:;
wr(s->u,67,8,rd(s->r,4864,8));
L_1803ebe55_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,67,4),4),8));
L_1803ebe55_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,71,4),4),8));
L_1803ebe55_4:;
/* 1803ebe58: mulsd xmm0, xmm5 */
L_1803ebe58_0:;
L_1803ebe58_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4928,8),8),8));
L_1803ebe58_2:;
/* 1803ebe5c: comisd xmm1, xmm0 */
L_1803ebe5c_0:;
L_1803ebe5c_1:;
wr(s->u,63,1,isnan(fv(rd(s->r,4672,8),8)));
L_1803ebe5c_2:;
wr(s->u,64,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803ebe5c_3:;
wr(s->r,514,1,((rd(s->u,63,1)!=0)||(rd(s->u,64,1)!=0)));
L_1803ebe5c_4:;
wr(s->u,65,1,(fv(rd(s->r,4672,8),8)==fv(rd(s->r,4608,8),8)));
L_1803ebe5c_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,65,1)));
L_1803ebe5c_6:;
wr(s->u,66,1,(fv(rd(s->r,4672,8),8)<fv(rd(s->r,4608,8),8)));
L_1803ebe5c_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,66,1)));
L_1803ebe5c_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebe5c_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebe5c_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebe5c_11:;
/* 1803ebe60: jae 0x1803ebe30 */
L_1803ebe60_0:;
L_1803ebe60_1:;
wr(s->u,52,1,(!rd(s->r,512,1)));
L_1803ebe60_2:;
if(rd(s->u,52,1)){goto L_1803ebe30_0;}
L_1803ebe60_3:;
return UINT64_C(0x1803ebe62);
}
uint64_t b_1803ebe30(CPU*s){
/* 1803ebe30: movd xmm0, eax */
L_1803ebe30_0:;
L_1803ebe30_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803ebe30_2:;
/* 1803ebe34: movaps xmm1, xmm6 */
L_1803ebe34_0:;
L_1803ebe34_1:;
wr(s->r,4672,4,rd(s->r,4992,4));
L_1803ebe34_2:;
wr(s->r,4676,4,rd(s->r,4996,4));
L_1803ebe34_3:;
wr(s->r,4680,4,rd(s->r,5000,4));
L_1803ebe34_4:;
wr(s->r,4684,4,rd(s->r,5004,4));
L_1803ebe34_5:;
/* 1803ebe37: inc eax */
L_1803ebe37_0:;
L_1803ebe37_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,0));
L_1803ebe37_2:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x1))));
L_1803ebe37_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebe37_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebe37_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ebe37_6:;
wr(s->u,1,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ebe37_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803ebe37_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803ebe37_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803ebe37_10:;
/* 1803ebe39: cvtdq2ps xmm0, xmm0 */
L_1803ebe39_0:;
L_1803ebe39_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ebe39_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ebe39_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ebe39_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ebe39_5:;
/* 1803ebe3c: divss xmm1, xmm0 */
L_1803ebe3c_0:;
L_1803ebe3c_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4608,4),4),4));
L_1803ebe3c_2:;
/* 1803ebe40: mulss xmm1, xmm1 */
L_1803ebe40_0:;
L_1803ebe40_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ebe40_2:;
/* 1803ebe44: mulss xmm2, xmm1 */
L_1803ebe44_0:;
L_1803ebe44_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ebe44_2:;
/* 1803ebe48: addss xmm4, xmm2 */
L_1803ebe48_0:;
L_1803ebe48_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803ebe48_2:;
/* 1803ebe4c: unpcklps xmm2, xmm2 */
L_1803ebe4c_0:;
L_1803ebe4c_1:;
wr(s->r,4744,4,rd(s->r,4740,4));
L_1803ebe4c_2:;
wr(s->r,4748,4,rd(s->r,4740,4));
L_1803ebe4c_3:;
wr(s->r,4740,4,rd(s->r,4736,4));
L_1803ebe4c_4:;
/* 1803ebe4f: cvtps2pd xmm1, xmm2 */
L_1803ebe4f_0:;
L_1803ebe4f_1:;
wr(s->u,11,8,rd(s->r,4736,8));
L_1803ebe4f_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,11,4),4),8));
L_1803ebe4f_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,15,4),4),8));
L_1803ebe4f_4:;
/* 1803ebe52: unpcklps xmm4, xmm4 */
L_1803ebe52_0:;
L_1803ebe52_1:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803ebe52_2:;
wr(s->r,4876,4,rd(s->r,4868,4));
L_1803ebe52_3:;
wr(s->r,4868,4,rd(s->r,4864,4));
L_1803ebe52_4:;
/* 1803ebe55: cvtps2pd xmm0, xmm4 */
L_1803ebe55_0:;
L_1803ebe55_1:;
wr(s->u,11,8,rd(s->r,4864,8));
L_1803ebe55_2:;
wr(s->r,4608,8,fb(fv(rd(s->u,11,4),4),8));
L_1803ebe55_3:;
wr(s->r,4616,8,fb(fv(rd(s->u,15,4),4),8));
L_1803ebe55_4:;
/* 1803ebe58: mulsd xmm0, xmm5 */
L_1803ebe58_0:;
L_1803ebe58_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4928,8),8),8));
L_1803ebe58_2:;
/* 1803ebe5c: comisd xmm1, xmm0 */
L_1803ebe5c_0:;
L_1803ebe5c_1:;
wr(s->u,7,1,isnan(fv(rd(s->r,4672,8),8)));
L_1803ebe5c_2:;
wr(s->u,8,1,isnan(fv(rd(s->r,4608,8),8)));
L_1803ebe5c_3:;
wr(s->r,514,1,((rd(s->u,7,1)!=0)||(rd(s->u,8,1)!=0)));
L_1803ebe5c_4:;
wr(s->u,9,1,(fv(rd(s->r,4672,8),8)==fv(rd(s->r,4608,8),8)));
L_1803ebe5c_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,9,1)));
L_1803ebe5c_6:;
wr(s->u,10,1,(fv(rd(s->r,4672,8),8)<fv(rd(s->r,4608,8),8)));
L_1803ebe5c_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,10,1)));
L_1803ebe5c_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebe5c_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebe5c_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebe5c_11:;
/* 1803ebe60: jae 0x1803ebe30 */
L_1803ebe60_0:;
L_1803ebe60_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803ebe60_2:;
if(rd(s->u,0,1)){goto L_1803ebe30_0;}
L_1803ebe60_3:;
return UINT64_C(0x1803ebe62);
}
uint64_t b_1803ebe62(CPU*s){
/* 1803ebe62: lea eax, [r8 - 1] */
L_1803ebe62_0:;
L_1803ebe62_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803ebe62_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ebe62_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebe62_4:;
/* 1803ebe66: movaps xmm1, xmm3 */
L_1803ebe66_0:;
L_1803ebe66_1:;
wr(s->r,4672,4,rd(s->r,4800,4));
L_1803ebe66_2:;
wr(s->r,4676,4,rd(s->r,4804,4));
L_1803ebe66_3:;
wr(s->r,4680,4,rd(s->r,4808,4));
L_1803ebe66_4:;
wr(s->r,4684,4,rd(s->r,4812,4));
L_1803ebe66_5:;
/* 1803ebe69: movaps xmm7, xmm3 */
L_1803ebe69_0:;
L_1803ebe69_1:;
wr(s->r,5056,4,rd(s->r,4800,4));
L_1803ebe69_2:;
wr(s->r,5060,4,rd(s->r,4804,4));
L_1803ebe69_3:;
wr(s->r,5064,4,rd(s->r,4808,4));
L_1803ebe69_4:;
wr(s->r,5068,4,rd(s->r,4812,4));
L_1803ebe69_5:;
/* 1803ebe6c: movd xmm0, eax */
L_1803ebe6c_0:;
L_1803ebe6c_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803ebe6c_2:;
/* 1803ebe70: divss xmm7, xmm4 */
L_1803ebe70_0:;
L_1803ebe70_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)/fv(rd(s->r,4864,4),4),4));
L_1803ebe70_2:;
/* 1803ebe74: movaps xmm4, xmm3 */
L_1803ebe74_0:;
L_1803ebe74_1:;
wr(s->r,4864,4,rd(s->r,4800,4));
L_1803ebe74_2:;
wr(s->r,4868,4,rd(s->r,4804,4));
L_1803ebe74_3:;
wr(s->r,4872,4,rd(s->r,4808,4));
L_1803ebe74_4:;
wr(s->r,4876,4,rd(s->r,4812,4));
L_1803ebe74_5:;
/* 1803ebe77: cvtdq2ps xmm0, xmm0 */
L_1803ebe77_0:;
L_1803ebe77_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ebe77_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ebe77_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ebe77_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ebe77_5:;
/* 1803ebe7a: divss xmm1, xmm0 */
L_1803ebe7a_0:;
L_1803ebe7a_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4608,4),4),4));
L_1803ebe7a_2:;
/* 1803ebe7e: movaps xmm0, xmm3 */
L_1803ebe7e_0:;
L_1803ebe7e_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ebe7e_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ebe7e_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ebe7e_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ebe7e_5:;
/* 1803ebe81: mulss xmm1, xmm10 */
L_1803ebe81_0:;
L_1803ebe81_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,5248,4),4),4));
L_1803ebe81_2:;
/* 1803ebe86: mulss xmm1, xmm1 */
L_1803ebe86_0:;
L_1803ebe86_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ebe86_2:;
/* 1803ebe8a: subss xmm0, xmm1 */
L_1803ebe8a_0:;
L_1803ebe8a_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ebe8a_2:;
/* 1803ebe8e: sqrtss xmm6, xmm0 */
L_1803ebe8e_0:;
L_1803ebe8e_1:;
wr(s->r,4992,4,fb(sqrt(fv(rd(s->r,4608,4),4)),4));
L_1803ebe8e_2:;
/* 1803ebe92: mulss xmm6, dword ptr [rcx + 0x48] */
L_1803ebe92_0:;
L_1803ebe92_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x48))));
L_1803ebe92_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ebe92_3:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->u,8,4),4),4));
L_1803ebe92_4:;
/* 1803ebe97: mulss xmm6, dword ptr [rip + 0x2662c5] */
L_1803ebe97_0:;
L_1803ebe97_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(mr(UINT64_C(0x180652164),4),4),4));
L_1803ebe97_2:;
/* 1803ebe9f: nop  */
L_1803ebe9f_0:;
L_1803ebe9f_1:;
/* 1803ebea0: movd xmm0, edx */
L_1803ebea0_0:;
L_1803ebea0_1:;
wr(s->r,4608,16,rd(s->r,16,4));
L_1803ebea0_2:;
/* 1803ebea4: movaps xmm1, xmm6 */
L_1803ebea4_0:;
L_1803ebea4_1:;
wr(s->r,4672,4,rd(s->r,4992,4));
L_1803ebea4_2:;
wr(s->r,4676,4,rd(s->r,4996,4));
L_1803ebea4_3:;
wr(s->r,4680,4,rd(s->r,5000,4));
L_1803ebea4_4:;
wr(s->r,4684,4,rd(s->r,5004,4));
L_1803ebea4_5:;
/* 1803ebea7: inc edx */
L_1803ebea7_0:;
L_1803ebea7_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803ebea7_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803ebea7_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ebea7_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebea7_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ebea7_6:;
wr(s->u,13,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ebea7_7:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803ebea7_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803ebea7_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803ebea7_10:;
/* 1803ebea9: cvtdq2ps xmm0, xmm0 */
L_1803ebea9_0:;
L_1803ebea9_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ebea9_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ebea9_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ebea9_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ebea9_5:;
/* 1803ebeac: divss xmm1, xmm0 */
L_1803ebeac_0:;
L_1803ebeac_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4608,4),4),4));
L_1803ebeac_2:;
/* 1803ebeb0: mulss xmm1, xmm1 */
L_1803ebeb0_0:;
L_1803ebeb0_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ebeb0_2:;
/* 1803ebeb4: mulss xmm4, xmm1 */
L_1803ebeb4_0:;
L_1803ebeb4_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ebeb4_2:;
/* 1803ebeb8: addss xmm3, xmm4 */
L_1803ebeb8_0:;
L_1803ebeb8_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ebeb8_2:;
/* 1803ebebc: unpcklps xmm4, xmm4 */
L_1803ebebc_0:;
L_1803ebebc_1:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803ebebc_2:;
wr(s->r,4876,4,rd(s->r,4868,4));
L_1803ebebc_3:;
wr(s->r,4868,4,rd(s->r,4864,4));
L_1803ebebc_4:;
/* 1803ebebf: cvtps2pd xmm2, xmm4 */
L_1803ebebf_0:;
L_1803ebebf_1:;
wr(s->u,23,8,rd(s->r,4864,8));
L_1803ebebf_2:;
wr(s->r,4736,8,fb(fv(rd(s->u,23,4),4),8));
L_1803ebebf_3:;
wr(s->r,4744,8,fb(fv(rd(s->u,27,4),4),8));
L_1803ebebf_4:;
/* 1803ebec2: unpcklps xmm3, xmm3 */
L_1803ebec2_0:;
L_1803ebec2_1:;
wr(s->r,4808,4,rd(s->r,4804,4));
L_1803ebec2_2:;
wr(s->r,4812,4,rd(s->r,4804,4));
L_1803ebec2_3:;
wr(s->r,4804,4,rd(s->r,4800,4));
L_1803ebec2_4:;
/* 1803ebec5: cvtps2pd xmm1, xmm3 */
L_1803ebec5_0:;
L_1803ebec5_1:;
wr(s->u,23,8,rd(s->r,4800,8));
L_1803ebec5_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,23,4),4),8));
L_1803ebec5_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,27,4),4),8));
L_1803ebec5_4:;
/* 1803ebec8: mulsd xmm1, xmm5 */
L_1803ebec8_0:;
L_1803ebec8_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,4928,8),8),8));
L_1803ebec8_2:;
/* 1803ebecc: comisd xmm2, xmm1 */
L_1803ebecc_0:;
L_1803ebecc_1:;
wr(s->u,19,1,isnan(fv(rd(s->r,4736,8),8)));
L_1803ebecc_2:;
wr(s->u,20,1,isnan(fv(rd(s->r,4672,8),8)));
L_1803ebecc_3:;
wr(s->r,514,1,((rd(s->u,19,1)!=0)||(rd(s->u,20,1)!=0)));
L_1803ebecc_4:;
wr(s->u,21,1,(fv(rd(s->r,4736,8),8)==fv(rd(s->r,4672,8),8)));
L_1803ebecc_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,21,1)));
L_1803ebecc_6:;
wr(s->u,22,1,(fv(rd(s->r,4736,8),8)<fv(rd(s->r,4672,8),8)));
L_1803ebecc_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,22,1)));
L_1803ebecc_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebecc_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebecc_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebecc_11:;
/* 1803ebed0: jae 0x1803ebea0 */
L_1803ebed0_0:;
L_1803ebed0_1:;
wr(s->u,12,1,(!rd(s->r,512,1)));
L_1803ebed0_2:;
if(rd(s->u,12,1)){goto L_1803ebea0_0;}
L_1803ebed0_3:;
return UINT64_C(0x1803ebed2);
}
uint64_t b_1803ebea0(CPU*s){
/* 1803ebea0: movd xmm0, edx */
L_1803ebea0_0:;
L_1803ebea0_1:;
wr(s->r,4608,16,rd(s->r,16,4));
L_1803ebea0_2:;
/* 1803ebea4: movaps xmm1, xmm6 */
L_1803ebea4_0:;
L_1803ebea4_1:;
wr(s->r,4672,4,rd(s->r,4992,4));
L_1803ebea4_2:;
wr(s->r,4676,4,rd(s->r,4996,4));
L_1803ebea4_3:;
wr(s->r,4680,4,rd(s->r,5000,4));
L_1803ebea4_4:;
wr(s->r,4684,4,rd(s->r,5004,4));
L_1803ebea4_5:;
/* 1803ebea7: inc edx */
L_1803ebea7_0:;
L_1803ebea7_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803ebea7_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803ebea7_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ebea7_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebea7_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803ebea7_6:;
wr(s->u,1,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803ebea7_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803ebea7_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803ebea7_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803ebea7_10:;
/* 1803ebea9: cvtdq2ps xmm0, xmm0 */
L_1803ebea9_0:;
L_1803ebea9_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ebea9_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ebea9_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ebea9_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ebea9_5:;
/* 1803ebeac: divss xmm1, xmm0 */
L_1803ebeac_0:;
L_1803ebeac_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4608,4),4),4));
L_1803ebeac_2:;
/* 1803ebeb0: mulss xmm1, xmm1 */
L_1803ebeb0_0:;
L_1803ebeb0_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ebeb0_2:;
/* 1803ebeb4: mulss xmm4, xmm1 */
L_1803ebeb4_0:;
L_1803ebeb4_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803ebeb4_2:;
/* 1803ebeb8: addss xmm3, xmm4 */
L_1803ebeb8_0:;
L_1803ebeb8_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803ebeb8_2:;
/* 1803ebebc: unpcklps xmm4, xmm4 */
L_1803ebebc_0:;
L_1803ebebc_1:;
wr(s->r,4872,4,rd(s->r,4868,4));
L_1803ebebc_2:;
wr(s->r,4876,4,rd(s->r,4868,4));
L_1803ebebc_3:;
wr(s->r,4868,4,rd(s->r,4864,4));
L_1803ebebc_4:;
/* 1803ebebf: cvtps2pd xmm2, xmm4 */
L_1803ebebf_0:;
L_1803ebebf_1:;
wr(s->u,11,8,rd(s->r,4864,8));
L_1803ebebf_2:;
wr(s->r,4736,8,fb(fv(rd(s->u,11,4),4),8));
L_1803ebebf_3:;
wr(s->r,4744,8,fb(fv(rd(s->u,15,4),4),8));
L_1803ebebf_4:;
/* 1803ebec2: unpcklps xmm3, xmm3 */
L_1803ebec2_0:;
L_1803ebec2_1:;
wr(s->r,4808,4,rd(s->r,4804,4));
L_1803ebec2_2:;
wr(s->r,4812,4,rd(s->r,4804,4));
L_1803ebec2_3:;
wr(s->r,4804,4,rd(s->r,4800,4));
L_1803ebec2_4:;
/* 1803ebec5: cvtps2pd xmm1, xmm3 */
L_1803ebec5_0:;
L_1803ebec5_1:;
wr(s->u,11,8,rd(s->r,4800,8));
L_1803ebec5_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,11,4),4),8));
L_1803ebec5_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,15,4),4),8));
L_1803ebec5_4:;
/* 1803ebec8: mulsd xmm1, xmm5 */
L_1803ebec8_0:;
L_1803ebec8_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,4928,8),8),8));
L_1803ebec8_2:;
/* 1803ebecc: comisd xmm2, xmm1 */
L_1803ebecc_0:;
L_1803ebecc_1:;
wr(s->u,7,1,isnan(fv(rd(s->r,4736,8),8)));
L_1803ebecc_2:;
wr(s->u,8,1,isnan(fv(rd(s->r,4672,8),8)));
L_1803ebecc_3:;
wr(s->r,514,1,((rd(s->u,7,1)!=0)||(rd(s->u,8,1)!=0)));
L_1803ebecc_4:;
wr(s->u,9,1,(fv(rd(s->r,4736,8),8)==fv(rd(s->r,4672,8),8)));
L_1803ebecc_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,9,1)));
L_1803ebecc_6:;
wr(s->u,10,1,(fv(rd(s->r,4736,8),8)<fv(rd(s->r,4672,8),8)));
L_1803ebecc_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,10,1)));
L_1803ebecc_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebecc_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ebecc_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ebecc_11:;
/* 1803ebed0: jae 0x1803ebea0 */
L_1803ebed0_0:;
L_1803ebed0_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803ebed0_2:;
if(rd(s->u,0,1)){goto L_1803ebea0_0;}
L_1803ebed0_3:;
return UINT64_C(0x1803ebed2);
}
uint64_t b_1803ebed2(CPU*s){
/* 1803ebed2: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803ebed2_0:;
L_1803ebed2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ebed2_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803ebed2_3:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803ebed2_4:;
wr(s->r,4992,4,rd(s->u,34,4));
L_1803ebed2_5:;
wr(s->r,4996,4,rd(s->u,38,4));
L_1803ebed2_6:;
wr(s->r,5000,4,rd(s->u,42,4));
L_1803ebed2_7:;
wr(s->r,5004,4,rd(s->u,46,4));
L_1803ebed2_8:;
/* 1803ebed7: movaps xmm10, xmmword ptr [rsp] */
L_1803ebed7_0:;
L_1803ebed7_1:;
wr(s->u,8,16,mr((uint64_t)rd(s->r,32,8),16));
L_1803ebed7_2:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803ebed7_3:;
wr(s->r,5248,4,rd(s->u,34,4));
L_1803ebed7_4:;
wr(s->r,5252,4,rd(s->u,38,4));
L_1803ebed7_5:;
wr(s->r,5256,4,rd(s->u,42,4));
L_1803ebed7_6:;
wr(s->r,5260,4,rd(s->u,46,4));
L_1803ebed7_7:;
/* 1803ebedc: mulss xmm3, xmm7 */
L_1803ebedc_0:;
L_1803ebedc_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803ebedc_2:;
/* 1803ebee0: movaps xmm7, xmmword ptr [rsp + 0x10] */
L_1803ebee0_0:;
L_1803ebee0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ebee0_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803ebee0_3:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803ebee0_4:;
wr(s->r,5056,4,rd(s->u,34,4));
L_1803ebee0_5:;
wr(s->r,5060,4,rd(s->u,38,4));
L_1803ebee0_6:;
wr(s->r,5064,4,rd(s->u,42,4));
L_1803ebee0_7:;
wr(s->r,5068,4,rd(s->u,46,4));
L_1803ebee0_8:;
/* 1803ebee5: movaps xmm0, xmm3 */
L_1803ebee5_0:;
L_1803ebee5_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ebee5_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ebee5_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ebee5_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ebee5_5:;
/* 1803ebee8: add rsp, 0x38 */
L_1803ebee8_0:;
L_1803ebee8_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ebee8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803ebee8_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803ebee8_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebee8_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ebee8_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ebee8_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ebee8_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ebee8_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ebee8_10:;
/* 1803ebeec: ret  */
L_1803ebeec_0:;
L_1803ebeec_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ebeec_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ebeec_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ebeec_4:;
return UINT64_C(0x1803ebeed);
}
uint64_t b_1803ebf40(CPU*s){
/* 1803ebf40: mov qword ptr [rsp + 8], rbx */
L_1803ebf40_0:;
L_1803ebf40_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ebf40_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803ebf40_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ebf40_4:;
/* 1803ebf45: push rdi */
L_1803ebf45_0:;
L_1803ebf45_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803ebf45_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ebf45_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803ebf45_4:;
/* 1803ebf46: sub rsp, 0x20 */
L_1803ebf46_0:;
L_1803ebf46_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803ebf46_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803ebf46_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803ebf46_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebf46_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ebf46_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ebf46_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ebf46_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ebf46_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ebf46_10:;
/* 1803ebf4a: lea rax, [rip + 0x4212f7] */
L_1803ebf4a_0:;
L_1803ebf4a_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080d248)));
L_1803ebf4a_2:;
/* 1803ebf51: mov edi, edx */
L_1803ebf51_0:;
L_1803ebf51_1:;
wr(s->r,56,4,rd(s->r,16,4));
L_1803ebf51_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803ebf51_3:;
/* 1803ebf53: mov rbx, rcx */
L_1803ebf53_0:;
L_1803ebf53_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ebf53_2:;
/* 1803ebf56: mov qword ptr [rcx], rax */
L_1803ebf56_0:;
L_1803ebf56_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803ebf56_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,8,8));
L_1803ebf56_3:;
/* 1803ebf59: call 0x1803e1120 */
L_1803ebf59_0:;
L_1803ebf59_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ebf59_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ebf5e)));
L_1803ebf59_3:;
return (uint64_t)UINT64_C(0x1803e1120);
L_1803ebf59_4:;
return UINT64_C(0x1803ebf5e);
}
uint64_t b_1803ebf5e(CPU*s){
/* 1803ebf5e: call 0x1803e10a0 */
L_1803ebf5e_0:;
L_1803ebf5e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ebf5e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ebf63)));
L_1803ebf5e_3:;
return (uint64_t)UINT64_C(0x1803e10a0);
L_1803ebf5e_4:;
return UINT64_C(0x1803ebf63);
}
uint64_t b_1803ebf63(CPU*s){
/* 1803ebf63: mov ecx, edi */
L_1803ebf63_0:;
L_1803ebf63_1:;
wr(s->r,8,4,rd(s->r,56,4));
L_1803ebf63_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ebf63_3:;
/* 1803ebf65: mov dword ptr [rbx + 0x10], eax */
L_1803ebf65_0:;
L_1803ebf65_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803ebf65_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803ebf65_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803ebf65_4:;
/* 1803ebf68: mov dword ptr [rbx + 8], edi */
L_1803ebf68_0:;
L_1803ebf68_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ebf68_2:;
wr(s->u,13,4,rd(s->r,56,4));
L_1803ebf68_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803ebf68_4:;
/* 1803ebf6b: sar ecx, 5 */
L_1803ebf6b_0:;
L_1803ebf6b_1:;
wr(s->u,67,4,(((U)UINT64_C(0x5))&((U)UINT64_C(0x1f))));
L_1803ebf6b_2:;
wr(s->u,71,4,rd(s->r,8,4));
L_1803ebf6b_3:;
wr(s->r,8,4,((rd(s->u,67,4)>=32)?(sx(rd(s->r,8,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,8,4),4)>>rd(s->u,67,4))));
L_1803ebf6b_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ebf6b_5:;
wr(s->u,44,1,(rd(s->u,67,4)==((U)UINT64_C(0x0))));
L_1803ebf6b_6:;
wr(s->u,45,4,(rd(s->u,67,4)-((U)UINT64_C(0x1))));
L_1803ebf6b_7:;
wr(s->u,49,4,((rd(s->u,45,4)>=32)?(sx(rd(s->u,71,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,71,4),4)>>rd(s->u,45,4))));
L_1803ebf6b_8:;
wr(s->u,53,4,(rd(s->u,49,4)&((U)UINT64_C(0x1))));
L_1803ebf6b_9:;
wr(s->u,57,1,(rd(s->u,53,4)!=((U)UINT64_C(0x0))));
L_1803ebf6b_10:;
wr(s->u,0,1,rd(s->u,44,1));
L_1803ebf6b_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ebf6b_12:;
wr(s->u,2,1,(!rd(s->u,44,1)));
L_1803ebf6b_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ebf6b_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,57,1)));
L_1803ebf6b_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ebf6b_16:;
wr(s->u,58,1,(rd(s->u,67,4)==((U)UINT64_C(0x1))));
L_1803ebf6b_17:;
wr(s->u,0,1,rd(s->u,58,1));
L_1803ebf6b_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ebf6b_19:;
wr(s->u,2,1,(!rd(s->u,58,1)));
L_1803ebf6b_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ebf6b_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803ebf6b_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ebf6b_23:;
wr(s->u,25,1,(rd(s->u,67,4)!=((U)UINT64_C(0x0))));
L_1803ebf6b_24:;
wr(s->u,26,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebf6b_25:;
wr(s->u,27,1,(!rd(s->u,25,1)));
L_1803ebf6b_26:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,519,1)));
L_1803ebf6b_27:;
wr(s->u,29,1,(rd(s->u,25,1)&rd(s->u,26,1)));
L_1803ebf6b_28:;
wr(s->r,519,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803ebf6b_29:;
wr(s->u,30,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ebf6b_30:;
wr(s->u,31,1,(!rd(s->u,25,1)));
L_1803ebf6b_31:;
wr(s->u,32,1,(rd(s->u,31,1)&rd(s->r,518,1)));
L_1803ebf6b_32:;
wr(s->u,33,1,(rd(s->u,25,1)&rd(s->u,30,1)));
L_1803ebf6b_33:;
wr(s->r,518,1,(rd(s->u,32,1)|rd(s->u,33,1)));
L_1803ebf6b_34:;
wr(s->u,34,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ebf6b_35:;
wr(s->u,38,1,pop(rd(s->u,34,4),4));
L_1803ebf6b_36:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803ebf6b_37:;
wr(s->u,40,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803ebf6b_38:;
wr(s->u,41,1,(!rd(s->u,25,1)));
L_1803ebf6b_39:;
wr(s->u,42,1,(rd(s->u,41,1)&rd(s->r,514,1)));
L_1803ebf6b_40:;
wr(s->u,43,1,(rd(s->u,25,1)&rd(s->u,40,1)));
L_1803ebf6b_41:;
wr(s->r,514,1,(rd(s->u,42,1)|rd(s->u,43,1)));
L_1803ebf6b_42:;
/* 1803ebf6e: dec eax */
L_1803ebf6e_0:;
L_1803ebf6e_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,1));
L_1803ebf6e_2:;
wr(s->r,0,4,(rd(s->r,0,4)-((U)UINT64_C(0x1))));
L_1803ebf6e_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebf6e_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebf6e_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ebf6e_6:;
wr(s->u,19,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ebf6e_7:;
wr(s->u,23,1,pop(rd(s->u,19,4),4));
L_1803ebf6e_8:;
wr(s->u,24,1,(rd(s->u,23,1)&((U)UINT64_C(0x1))));
L_1803ebf6e_9:;
wr(s->r,514,1,(rd(s->u,24,1)==((U)UINT64_C(0x0))));
L_1803ebf6e_10:;
/* 1803ebf70: mov dword ptr [rbx + 0xc], ecx */
L_1803ebf70_0:;
L_1803ebf70_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ebf70_2:;
wr(s->u,13,4,rd(s->r,8,4));
L_1803ebf70_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803ebf70_4:;
/* 1803ebf73: cmp eax, 3 */
L_1803ebf73_0:;
L_1803ebf73_1:;
wr(s->u,59,4,rd(s->r,0,4));
L_1803ebf73_2:;
wr(s->r,512,1,(rd(s->u,59,4)<((U)UINT64_C(0x3))));
L_1803ebf73_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,59,4),((U)UINT64_C(0x3)),4,1));
L_1803ebf73_4:;
wr(s->u,63,4,(rd(s->u,59,4)-((U)UINT64_C(0x3))));
L_1803ebf73_5:;
wr(s->r,519,1,(sx(rd(s->u,63,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebf73_6:;
wr(s->r,518,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803ebf73_7:;
wr(s->u,19,4,(rd(s->u,63,4)&((U)UINT64_C(0xff))));
L_1803ebf73_8:;
wr(s->u,23,1,pop(rd(s->u,19,4),4));
L_1803ebf73_9:;
wr(s->u,24,1,(rd(s->u,23,1)&((U)UINT64_C(0x1))));
L_1803ebf73_10:;
wr(s->r,514,1,(rd(s->u,24,1)==((U)UINT64_C(0x0))));
L_1803ebf73_11:;
/* 1803ebf76: ja 0x1803ebf7e */
L_1803ebf76_0:;
L_1803ebf76_1:;
wr(s->u,17,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803ebf76_2:;
wr(s->u,18,1,(!rd(s->u,17,1)));
L_1803ebf76_3:;
if(rd(s->u,18,1)){return UINT64_C(0x1803ebf7e);}
L_1803ebf76_4:;
return UINT64_C(0x1803ebf78);
}
uint64_t b_1803ebf78(CPU*s){
/* 1803ebf78: lea eax, [rcx + rcx] */
L_1803ebf78_0:;
L_1803ebf78_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803ebf78_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803ebf78_3:;
wr(s->r,0,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ebf78_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ebf78_5:;
/* 1803ebf7b: mov dword ptr [rbx + 0xc], eax */
L_1803ebf7b_0:;
L_1803ebf7b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803ebf7b_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803ebf7b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803ebf7b_4:;
/* 1803ebf7e: mov ecx, edi */
L_1803ebf7e_0:;
L_1803ebf7e_1:;
wr(s->r,8,4,rd(s->r,56,4));
L_1803ebf7e_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ebf7e_3:;
/* 1803ebf80: mov dword ptr [rbx + 0x14], 0x3f800000 */
L_1803ebf80_0:;
L_1803ebf80_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x14))));
L_1803ebf80_2:;
wr(s->u,24,4,((U)UINT64_C(0x3f800000)));
L_1803ebf80_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803ebf80_4:;
/* 1803ebf87: call qword ptr [rip + 0x632283] */
L_1803ebf87_0:;
L_1803ebf87_1:;
wr(s->u,28,8,mr(UINT64_C(0x180a1e210),8));
L_1803ebf87_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ebf87_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ebf8d)));
L_1803ebf87_4:;
return (uint64_t)rd(s->u,28,8);
L_1803ebf87_5:;
return UINT64_C(0x1803ebf8d);
}
uint64_t b_1803ebf7e(CPU*s){
/* 1803ebf7e: mov ecx, edi */
L_1803ebf7e_0:;
L_1803ebf7e_1:;
wr(s->r,8,4,rd(s->r,56,4));
L_1803ebf7e_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ebf7e_3:;
/* 1803ebf80: mov dword ptr [rbx + 0x14], 0x3f800000 */
L_1803ebf80_0:;
L_1803ebf80_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x14))));
L_1803ebf80_2:;
wr(s->u,8,4,((U)UINT64_C(0x3f800000)));
L_1803ebf80_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ebf80_4:;
/* 1803ebf87: call qword ptr [rip + 0x632283] */
L_1803ebf87_0:;
L_1803ebf87_1:;
wr(s->u,12,8,mr(UINT64_C(0x180a1e210),8));
L_1803ebf87_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ebf87_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ebf8d)));
L_1803ebf87_4:;
return (uint64_t)rd(s->u,12,8);
L_1803ebf87_5:;
return UINT64_C(0x1803ebf8d);
}
uint64_t b_1803ebf8d(CPU*s){
/* 1803ebf8d: mov edx, dword ptr [rbx + 8] */
L_1803ebf8d_0:;
L_1803ebf8d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ebf8d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ebf8d_3:;
wr(s->r,16,4,rd(s->u,16,4));
L_1803ebf8d_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ebf8d_5:;
/* 1803ebf90: mov rcx, rax */
L_1803ebf90_0:;
L_1803ebf90_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ebf90_2:;
/* 1803ebf93: mov qword ptr [rbx + 0x20], rax */
L_1803ebf93_0:;
L_1803ebf93_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803ebf93_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803ebf93_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ebf93_4:;
/* 1803ebf97: call qword ptr [rip + 0x63220b] */
L_1803ebf97_0:;
L_1803ebf97_1:;
wr(s->u,20,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803ebf97_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ebf97_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ebf9d)));
L_1803ebf97_4:;
return (uint64_t)rd(s->u,20,8);
L_1803ebf97_5:;
return UINT64_C(0x1803ebf9d);
}
uint64_t b_1803ebf9d(CPU*s){
/* 1803ebf9d: mov ecx, dword ptr [rbx + 8] */
L_1803ebf9d_0:;
L_1803ebf9d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ebf9d_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ebf9d_3:;
wr(s->r,8,4,rd(s->u,8,4));
L_1803ebf9d_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ebf9d_5:;
/* 1803ebfa0: call qword ptr [rip + 0x63226a] */
L_1803ebfa0_0:;
L_1803ebfa0_1:;
wr(s->u,12,8,mr(UINT64_C(0x180a1e210),8));
L_1803ebfa0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ebfa0_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ebfa6)));
L_1803ebfa0_4:;
return (uint64_t)rd(s->u,12,8);
L_1803ebfa0_5:;
return UINT64_C(0x1803ebfa6);
}
uint64_t b_1803ebfa6(CPU*s){
/* 1803ebfa6: mov edx, dword ptr [rbx + 8] */
L_1803ebfa6_0:;
L_1803ebfa6_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ebfa6_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ebfa6_3:;
wr(s->r,16,4,rd(s->u,16,4));
L_1803ebfa6_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ebfa6_5:;
/* 1803ebfa9: mov rcx, rax */
L_1803ebfa9_0:;
L_1803ebfa9_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ebfa9_2:;
/* 1803ebfac: mov qword ptr [rbx + 0x28], rax */
L_1803ebfac_0:;
L_1803ebfac_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803ebfac_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803ebfac_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ebfac_4:;
/* 1803ebfb0: call qword ptr [rip + 0x6321f2] */
L_1803ebfb0_0:;
L_1803ebfb0_1:;
wr(s->u,20,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803ebfb0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ebfb0_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ebfb6)));
L_1803ebfb0_4:;
return (uint64_t)rd(s->u,20,8);
L_1803ebfb0_5:;
return UINT64_C(0x1803ebfb6);
}
uint64_t b_1803ebfb6(CPU*s){
/* 1803ebfb6: mov ecx, dword ptr [rbx + 8] */
L_1803ebfb6_0:;
L_1803ebfb6_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ebfb6_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ebfb6_3:;
wr(s->r,8,4,rd(s->u,8,4));
L_1803ebfb6_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ebfb6_5:;
/* 1803ebfb9: call qword ptr [rip + 0x632251] */
L_1803ebfb9_0:;
L_1803ebfb9_1:;
wr(s->u,12,8,mr(UINT64_C(0x180a1e210),8));
L_1803ebfb9_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ebfb9_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ebfbf)));
L_1803ebfb9_4:;
return (uint64_t)rd(s->u,12,8);
L_1803ebfb9_5:;
return UINT64_C(0x1803ebfbf);
}
uint64_t b_1803ebfbf(CPU*s){
/* 1803ebfbf: mov edx, dword ptr [rbx + 8] */
L_1803ebfbf_0:;
L_1803ebfbf_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ebfbf_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ebfbf_3:;
wr(s->r,16,4,rd(s->u,16,4));
L_1803ebfbf_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ebfbf_5:;
/* 1803ebfc2: mov rcx, rax */
L_1803ebfc2_0:;
L_1803ebfc2_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ebfc2_2:;
/* 1803ebfc5: mov qword ptr [rbx + 0x30], rax */
L_1803ebfc5_0:;
L_1803ebfc5_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803ebfc5_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803ebfc5_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ebfc5_4:;
/* 1803ebfc9: call qword ptr [rip + 0x6321d9] */
L_1803ebfc9_0:;
L_1803ebfc9_1:;
wr(s->u,20,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803ebfc9_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ebfc9_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ebfcf)));
L_1803ebfc9_4:;
return (uint64_t)rd(s->u,20,8);
L_1803ebfc9_5:;
return UINT64_C(0x1803ebfcf);
}
uint64_t b_1803ebfcf(CPU*s){
/* 1803ebfcf: mov edx, dword ptr [rbx + 8] */
L_1803ebfcf_0:;
L_1803ebfcf_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803ebfcf_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ebfcf_3:;
wr(s->r,16,4,rd(s->u,8,4));
L_1803ebfcf_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ebfcf_5:;
/* 1803ebfd2: xor r9d, r9d */
L_1803ebfd2_0:;
L_1803ebfd2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ebfd2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ebfd2_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803ebfd2_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ebfd2_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ebfd2_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803ebfd2_7:;
wr(s->u,12,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803ebfd2_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803ebfd2_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ebfd2_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ebfd2_11:;
/* 1803ebfd5: lea r8d, [r9 + 1] */
L_1803ebfd5_0:;
L_1803ebfd5_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x1))));
L_1803ebfd5_2:;
wr(s->r,128,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ebfd5_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ebfd5_4:;
/* 1803ebfd9: lea rcx, [rbx + 0x38] */
L_1803ebfd9_0:;
L_1803ebfd9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803ebfd9_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ebfd9_3:;
/* 1803ebfdd: call qword ptr [rip + 0x6321dd] */
L_1803ebfdd_0:;
L_1803ebfdd_1:;
wr(s->u,18,8,mr(UINT64_C(0x180a1e1c0),8));
L_1803ebfdd_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ebfdd_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ebfe3)));
L_1803ebfdd_4:;
return (uint64_t)rd(s->u,18,8);
L_1803ebfdd_5:;
return UINT64_C(0x1803ebfe3);
}
uint64_t b_1803ebfe3(CPU*s){
/* 1803ebfe3: mov rax, rbx */
L_1803ebfe3_0:;
L_1803ebfe3_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803ebfe3_2:;
/* 1803ebfe6: mov rbx, qword ptr [rsp + 0x30] */
L_1803ebfe6_0:;
L_1803ebfe6_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ebfe6_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ebfe6_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803ebfe6_4:;
/* 1803ebfeb: add rsp, 0x20 */
L_1803ebfeb_0:;
L_1803ebfeb_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ebfeb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803ebfeb_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803ebfeb_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ebfeb_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ebfeb_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ebfeb_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ebfeb_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ebfeb_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ebfeb_10:;
/* 1803ebfef: pop rdi */
L_1803ebfef_0:;
L_1803ebfef_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ebfef_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ebfef_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ebfef_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803ebfef_5:;
/* 1803ebff0: ret  */
L_1803ebff0_0:;
L_1803ebff0_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ebff0_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ebff0_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ebff0_4:;
return UINT64_C(0x1803ebff1);
}
